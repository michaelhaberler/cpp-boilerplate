// Copyright (c) 2013 Your Company. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
/**
    \file application.h
    An overly extended example of how to use breathe
*/

#ifndef BOILERPLATE_APPLICATION_H_
#define BOILERPLATE_APPLICATION_H_

namespace boilerplate {

/*!
    Description of Application.
*/
class Application {
public:
  Application();
  ~Application();

  //! Application start.
  static int Main(int argc, const char** argv);

  //! Application implementation.
  void Run();
};

} // namespace boilerplate

#endif // BOILERPLATE_APPLICATION_H_
