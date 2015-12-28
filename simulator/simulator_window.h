// Copyright 2015 Josh Pieper, jjp@pobox.com.  All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <dart/dart.h>

namespace mjmech {
namespace simulator {

class SimulatorWindow : public dart::gui::SimWindow {
 public:
  SimulatorWindow();
  ~SimulatorWindow();

  void keyboard(unsigned char key, int x, int y) override;
  void timeStepping() override;

 private:
  class Impl;
  std::unique_ptr<Impl> impl_;
};

}
}