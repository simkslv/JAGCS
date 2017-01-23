#include "gui_settings_presenter.h"

// Qt
#include <QDebug>

// Internal
#include "settings_provider.h"
#include "settings.h"

#include "translation_manager.h"

using namespace presentation;

GuiSettingsPresenter::GuiSettingsPresenter(QObject* parent):
    BasePresenter(parent)
{}

void GuiSettingsPresenter::updateView()
{
    this->setViewProperty(PROPERTY(uiSize), domain::SettingsProvider::value(
                              domain::gui_settings::uiSize));
    this->setViewProperty(PROPERTY(paletteStyle), domain::SettingsProvider::value(
                              domain::gui_settings::paletteStyle));

    const QStringList& locales = domain::TranslationManager::avalibleLocales();
    int index = locales.indexOf(domain::TranslationManager::currentLocale());
    this->setViewProperty(PROPERTY(localeIndex), index);
}

void GuiSettingsPresenter::connectView(QObject* view)
{
    this->setViewProperty(PROPERTY(locales), QVariant::fromValue(
                              domain::TranslationManager::avalibleLocales()));
    this->updateView();

    connect(view, SIGNAL(updateSettings()), this, SLOT(onUpdateSettings()));
}

void GuiSettingsPresenter::onUpdateSettings()
{
    domain::SettingsProvider::setValue(domain::gui_settings::uiSize,
                                       this->viewProperty(PROPERTY(uiSize)).toInt());
    domain::SettingsProvider::setValue(domain::gui_settings::paletteStyle,
                                       this->viewProperty(PROPERTY(paletteStyle)));

    const QStringList& locales = domain::TranslationManager::avalibleLocales();
    QString locale = locales.value(this->viewProperty(PROPERTY(localeIndex)).toInt());
    domain::TranslationManager::setCurrentLocale(locale);
}