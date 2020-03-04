/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef FORECASTCONTAINERBASE_HPP
#define FORECASTCONTAINERBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>

class forecastContainerBase : public touchgfx::Container
{
public:
    forecastContainerBase();
    virtual ~forecastContainerBase() {}
    virtual void initialize();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Image weatherIcon;
    touchgfx::TextArea weekday;
    touchgfx::TextAreaWithOneWildcard temp;
    touchgfx::TextAreaWithOneWildcard wind;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEMP_SIZE = 5;
    touchgfx::Unicode::UnicodeChar tempBuffer[TEMP_SIZE];
    static const uint16_t WIND_SIZE = 4;
    touchgfx::Unicode::UnicodeChar windBuffer[WIND_SIZE];

private:

};

#endif // FORECASTCONTAINERBASE_HPP