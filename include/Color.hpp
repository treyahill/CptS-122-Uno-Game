#pragma once

//
// SFML - Simple and Fast Multimedia Library
// Copyright (C) 2007-2023 Laurent Gomila (laurent@sfml-dev.org)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
// //    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//

#ifndef SFML_COLOR_HPP
#define SFML_COLOR_HPP

// Headers
#include <SFML/Graphics/Export.hpp>


namespace sf
{
    class SFML_GRAPHICS_API Color
        {
    public:
        
                Color();
        
                Color(Uint8 red, Uint8 green, Uint8 blue, Uint8 alpha = 255);
        
                explicit Color(Uint32 color);
        
                Uint32 toInteger() const;
        
                // Static member data
                static const Color Black;
            static const Color White;
            static const Color Red;
            static const Color Green;
            static const Color Blue;
            static const Color Yellow;
            static const Color Magenta;
            static const Color Cyan;
            static const Color Transparent;
        
               // Member data
                Uint8 r;
            Uint8 g;
            Uint8 b;
            Uint8 a;
        };
    
        SFML_GRAPHICS_API bool operator ==(const Color & left, const Color & right);
    
        SFML_GRAPHICS_API bool operator !=(const Color & left, const Color & right);
    
        SFML_GRAPHICS_API Color operator +(const Color & left, const Color & right);
   
        SFML_GRAPHICS_API Color operator -(const Color & left, const Color & right);
    
        SFML_GRAPHICS_API Color operator *(const Color & left, const Color & right);
    
        SFML_GRAPHICS_API Color & operator +=(Color & left, const Color & right);
    
        SFML_GRAPHICS_API Color & operator -=(Color & left, const Color & right);
    
        SFML_GRAPHICS_API Color & operator *=(Color & left, const Color & right);
    
        } // namespace sf


#endif // SFML_COLOR_HPP