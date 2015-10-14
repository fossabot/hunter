// Copyright (c) 2015, Ruslan Baratov
// All rights reserved.

#include <QtPlugin>

// http://doc.qt.io/qt-5/qtglobal.html

#if defined(Q_OS_IOS)
  Q_IMPORT_PLUGIN(AVFServicePlugin);
#elif defined(Q_OS_DARWIN)
  Q_IMPORT_PLUGIN(AVFServicePlugin);
#elif defined(Q_OS_LINUX)
  // TODO
#elif defined(Q_OS_WIN)
  // TODO
#endif
