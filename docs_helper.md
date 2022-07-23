## A formating hint for Emacs

```

// -*- lsst-c++ -*-

```

## A copyright and license block

```

/*
* LSST Data Management System
* See COPYRIGHT file at the top of the source tree.
*/

```

## File Description Comment for Header Files

```

/**
 * @file ExampleClass.cc
 *
 * @brief This message displayed in Doxygen Files index
 *
 * @ingroup PackageName
 * (Note: this needs exactly one @defgroup somewhere)
 *
 * @author Joe Smith
 * Contact: js@lsst.org
 *
 */

```

## Class Definitions

```

/**
 * Implementation of a trace facility for LSST
 *
 * Tracing is controlled on a per "component" basis, where a "component" is a
 * name of the form aaa.bbb.ccc where aaa is the Most significant part; for
 * example, the utilities library might be called "utils", the doubly-linked
 * list "utils.dlist", and the code to destroy a list "utils.dlist.del"
 *
 */
class TraceImpl {
    public:
}

```

## Function/Method Definitions

```

/** Set a component's verbosity.
*
* If no verbosity is specified, inherit from parent
*
* @param name component of interest
* @param verbosity desired trace verbosity
*/
void TraceImpl::setVerbosity(const std::string &name, const int verbosity) {
}

```

## Annotating Arguments with Inline Comments

```

/** Set a component's verbosity.
*
* If no verbosity is specified, inherit from parent
*/
void TraceImpl::setVerbosity(const std::string &name, ///< component of interest
                             const int verbosity) { ///< desired trace verbosity
}

```

## Overloaded Function/Methods Definitions

```

/**
 * seconds from midnight
 */
long GetTime(void){
    return secondFromMidnight(CURRENT);
}
/**
 # @overload void GetTime(int &hours, int &minutes, int &seconds)
 */
void GetTime(int &hours, ///< set: current hour
             int &minutes, ///< set: current minutes
             int &seconds) { ///< set: current seconds
 hours = _hours;
 minutes = _minutes;
 seconds = _seconds;
}

```