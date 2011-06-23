/*
 * Copyright 2011 Nate Koenig & Andrew Howard
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/
#ifndef CONVERSIONS_HH
#define CONVERSIONS_HH

#include "rendering/ogre.h"

#include "common/Color.hh"
#include "math/Vector3.hh"
#include "math/Quatern.hh"

namespace gazebo
{
  namespace rendering
  {
    class Conversions
    {
      /// \brief Return the equivalent ogre color
      public: static Ogre::ColourValue Color(const common::Color &clr);

      /// \brief return Ogre Vector from gazebo Vector3
      public: static Ogre::Vector3 Vector3(const math::Vector3 &v);

      /// \brief return gazebo Vector from ogre Vector3
      public: static math::Vector3 Vector3(const Ogre::Vector3 &v);

      /// \brief Gazebo quaternion to Ogre quaternion
      public: static Ogre::Quaternion Quaternion(const math::Quatern &v);

      /// \brief Ogre quaternion to Gazebo quaternion
      public: static math::Quatern Quaternion(const Ogre::Quaternion &v);

    };
  }
}
#endif
