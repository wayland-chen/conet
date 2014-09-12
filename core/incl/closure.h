#ifndef CONET_CLOSURE_H_
#define CONET_CLOSURE_H_

// 普通无返回值 Closure
// Closure: x->Run(), Closure 可预设 0-10 个参数
// Closure: x->Run(arg1), Closure 可预设 0-10 个参数
// Closure: x->Run(arg1, arg2), Closure 可预设 0-10 个参数
// Closure: x->Run(arg1, arg2, arg3), Closure 可预设 0-10 个参数
// Closure: x->Run(arg1, arg2, arg3, arg4), Closure 可预设 0-10 个参数
// Closure: x->Run(arg1, arg2, arg3, arg4, arg5), Closure 可预设 0-10 个参数
// Closure: x->Run(arg1, arg2, arg3, arg4, arg5, arg6), Closure 可预设 0-10 个参数
// Closure: x->Run(arg1, arg2, arg3, arg4, arg5, arg6, arg7), Closure 可预设 0-10 个参数
// Closure: x->Run(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8), Closure 可预设 0-10 个参数
// Closure: x->Run(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9), Closure 可预设 0-10 个参数
// Closure: x->Run(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10), Closure 可预设 0-10 个参数
//
// 返回值为 R 的 Closure
// Closure: R = x->Run(), Closure 可预设 0-10 个参数
// Closure: R = x->Run(arg1), Closure 可预设 0-10 个参数
// Closure: R = x->Run(arg1, arg2), Closure 可预设 0-10 个参数
// Closure: R = x->Run(arg1, arg2, arg3), Closure 可预设 0-10 个参数
// Closure: R = x->Run(arg1, arg2, arg3, arg4), Closure 可预设 0-10 个参数
// Closure: R = x->Run(arg1, arg2, arg3, arg4, arg5), Closure 可预设 0-10 个参数
// Closure: R = x->Run(arg1, arg2, arg3, arg4, arg5, arg6), Closure 可预设 0-10 个参数
// Closure: R = x->Run(arg1, arg2, arg3, arg4, arg5, arg6, arg7), Closure 可预设 0-10 个参数
// Closure: R = x->Run(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8), Closure 可预设 0-10 个参数
// Closure: R = x->Run(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9), Closure 可预设 0-10 个参数
// Closure: R = x->Run(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10), Closure 可预设 0-10 个参数
//
//////////////////////////////////////

namespace conet
{

/// base class for all Closures
class ClosureBase
{
public:
    virtual ~ClosureBase() {}
    virtual bool IsSelfDelete() const = 0;
};

// primary template
template <
    typename R,
    typename Arg1 = void,
    typename Arg2 = void,
    typename Arg3 = void,
    typename Arg4 = void,
    typename Arg5 = void,
    typename Arg6 = void,
    typename Arg7 = void,
    typename Arg8 = void,
    typename Arg9 = void,
    typename Arg10 = void,
    typename Arg11 = void,
    typename Arg12 = void,
    typename Arg13 = void,
    typename Arg14 = void,
    typename Arg15 = void,
    typename Arg16 = void,
    typename Arg17 = void,
    typename Arg18 = void,
    typename Arg19 = void,
    typename Arg20 = void
>
class Closure : public ClosureBase
{
public:
    virtual R Run(
        Arg1 arg1,
        Arg2 arg2,
        Arg3 arg3,
        Arg4 arg4,
        Arg5 arg5,
        Arg6 arg6,
        Arg7 arg7,
        Arg8 arg8,
        Arg9 arg9,
        Arg10 arg10,
        Arg11 arg11,
        Arg12 arg12,
        Arg13 arg13,
        Arg14 arg14,
        Arg15 arg15,
        Arg16 arg16,
        Arg17 arg17,
        Arg18 arg18,
        Arg19 arg19,
        Arg20 arg20
    ) = 0;
};


// specified for 0 argument
template <typename R>
class Closure<R> : public ClosureBase
{
public:
    virtual R Run() = 0;
};

// specified for 1 argument
template <typename R, typename Arg1>
class Closure<R, Arg1> : public ClosureBase
{
public:
    virtual R Run(Arg1 arg1) = 0;
};

// specified for 2 arguments
template <typename R, typename Arg1, typename Arg2>
class Closure<R, Arg1, Arg2> : public ClosureBase
{
public:
    virtual R Run(Arg1 arg1, Arg2 arg2) = 0;
};

// specified for 3 arguments
template <typename R, typename Arg1, typename Arg2, typename Arg3>
class Closure<R, Arg1, Arg2, Arg3> : public ClosureBase
{
public:
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3) = 0;
};

// specified for 4 arguments
template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4>
class Closure<R, Arg1, Arg2, Arg3, Arg4> : public ClosureBase
{
public:
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3, Arg4 arg4) = 0;
};

// specified for 5 arguments
template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5>
class Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5> : public ClosureBase
{
public:
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5) = 0;
};

// specified for 6 arguments
template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6>
class Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6> : public ClosureBase
{
public:
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6) = 0;
};

// specified for 7 arguments
template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7>
class Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7> : public ClosureBase
{
public:
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7) = 0;
};

// specified for 8 arguments
template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8>
class Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8> : public ClosureBase
{
public:
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8) = 0;
};

// specified for 9 arguments
template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9>
class Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9> : public ClosureBase
{
public:
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9) = 0;
};

// specified for 10 arguments
template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10>
class Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10> : public ClosureBase
{
public:
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10) = 0;
};

// specified for 11 arguments
template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11>
class Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11> : public ClosureBase
{
public:
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11) = 0;
};

// specified for 12 arguments
template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12>
class Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12> : public ClosureBase
{
public:
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12) = 0;
};

// specified for 13 arguments
template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13>
class Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13> : public ClosureBase
{
public:
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13) = 0;
};

// specified for 14 arguments
template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14>
class Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14> : public ClosureBase
{
public:
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14) = 0;
};

// specified for 15 arguments
template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15>
class Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15> : public ClosureBase
{
public:
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15) = 0;
};

// specified for 16 arguments
template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16>
class Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16> : public ClosureBase
{
public:
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16) = 0;
};

// specified for 17 arguments
template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17>
class Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17> : public ClosureBase
{
public:
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16, Arg17 arg17) = 0;
};

// specified for 18 arguments
template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename Arg18>
class Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18> : public ClosureBase
{
public:
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16, Arg17 arg17, Arg18 arg18) = 0;
};

// specified for 19 arguments
template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename Arg18, typename Arg19>
class Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19> : public ClosureBase
{
public:
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16, Arg17 arg17, Arg18 arg18, Arg19 arg19) = 0;
};

//////////////////////////////////////////////////
// helper ////////////////////////////////////////
//////////////////////////////////////////////////

// delete p in dtor automatically if Enabled is true
template <bool Enabled, typename T>
class ConditionalAutoDeleter
{
public:
    explicit ConditionalAutoDeleter(T* p)
        : m_p(p)
    {
    }
    ~ConditionalAutoDeleter()
    {
        if (Enabled)
        {
            delete m_p;
        }
    }
private:
    ConditionalAutoDeleter(const ConditionalAutoDeleter&);
    ConditionalAutoDeleter& operator=(const ConditionalAutoDeleter&);
private:
    T* m_p;
};

////////////////////////////////////////////////////
//////////// class method closures /////////////////
////////////////////////////////////////////////////

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass
>
class MethodClosure_Arg0_Bind0 : public Closure<R> {
    typedef R (MethodClass::*MethodType)();
public:
    MethodClosure_Arg0_Bind0(Class *object, MethodType method):
        m_object(object), m_method(method) {}
    virtual ~MethodClosure_Arg0_Bind0() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run() {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg0_Bind0> self_deleter(this);
        return (m_object->*m_method)();
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename PreArg1
>
class MethodClosure_Arg0_Bind1 : public Closure<R> {
    typedef R (MethodClass::*MethodType)(Arg1);
public:
    MethodClosure_Arg0_Bind1(Class *object, MethodType method, PreArg1 pa1):
        m_object(object), m_method(method), m_pa1(pa1) {}
    virtual ~MethodClosure_Arg0_Bind1() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run() {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg0_Bind1> self_deleter(this);
        return (m_object->*m_method)(m_pa1);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename PreArg1,
    typename PreArg2
>
class MethodClosure_Arg0_Bind2 : public Closure<R> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2);
public:
    MethodClosure_Arg0_Bind2(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2) {}
    virtual ~MethodClosure_Arg0_Bind2() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run() {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg0_Bind2> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3
>
class MethodClosure_Arg0_Bind3 : public Closure<R> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3);
public:
    MethodClosure_Arg0_Bind3(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3) {}
    virtual ~MethodClosure_Arg0_Bind3() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run() {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg0_Bind3> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4
>
class MethodClosure_Arg0_Bind4 : public Closure<R> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4);
public:
    MethodClosure_Arg0_Bind4(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4) {}
    virtual ~MethodClosure_Arg0_Bind4() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run() {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg0_Bind4> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5
>
class MethodClosure_Arg0_Bind5 : public Closure<R> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5);
public:
    MethodClosure_Arg0_Bind5(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5) {}
    virtual ~MethodClosure_Arg0_Bind5() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run() {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg0_Bind5> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6
>
class MethodClosure_Arg0_Bind6 : public Closure<R> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6);
public:
    MethodClosure_Arg0_Bind6(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6) {}
    virtual ~MethodClosure_Arg0_Bind6() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run() {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg0_Bind6> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7
>
class MethodClosure_Arg0_Bind7 : public Closure<R> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7);
public:
    MethodClosure_Arg0_Bind7(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7) {}
    virtual ~MethodClosure_Arg0_Bind7() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run() {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg0_Bind7> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8
>
class MethodClosure_Arg0_Bind8 : public Closure<R> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8);
public:
    MethodClosure_Arg0_Bind8(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8) {}
    virtual ~MethodClosure_Arg0_Bind8() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run() {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg0_Bind8> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9
>
class MethodClosure_Arg0_Bind9 : public Closure<R> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9);
public:
    MethodClosure_Arg0_Bind9(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9) {}
    virtual ~MethodClosure_Arg0_Bind9() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run() {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg0_Bind9> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9,
    typename PreArg10
>
class MethodClosure_Arg0_Bind10 : public Closure<R> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10);
public:
    MethodClosure_Arg0_Bind10(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9), m_pa10(pa10) {}
    virtual ~MethodClosure_Arg0_Bind10() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run() {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg0_Bind10> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, m_pa10);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
    PreArg10 m_pa10;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1
>
class MethodClosure_Arg1_Bind0 : public Closure<R, Arg1> {
    typedef R (MethodClass::*MethodType)(Arg1);
public:
    MethodClosure_Arg1_Bind0(Class *object, MethodType method):
        m_object(object), m_method(method) {}
    virtual ~MethodClosure_Arg1_Bind0() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg1 arg1) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg1_Bind0> self_deleter(this);
        return (m_object->*m_method)(arg1);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename PreArg1
>
class MethodClosure_Arg1_Bind1 : public Closure<R, Arg2> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2);
public:
    MethodClosure_Arg1_Bind1(Class *object, MethodType method, PreArg1 pa1):
        m_object(object), m_method(method), m_pa1(pa1) {}
    virtual ~MethodClosure_Arg1_Bind1() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg2 arg2) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg1_Bind1> self_deleter(this);
        return (m_object->*m_method)(m_pa1, arg2);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename PreArg1,
    typename PreArg2
>
class MethodClosure_Arg1_Bind2 : public Closure<R, Arg3> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3);
public:
    MethodClosure_Arg1_Bind2(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2) {}
    virtual ~MethodClosure_Arg1_Bind2() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg3 arg3) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg1_Bind2> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, arg3);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3
>
class MethodClosure_Arg1_Bind3 : public Closure<R, Arg4> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4);
public:
    MethodClosure_Arg1_Bind3(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3) {}
    virtual ~MethodClosure_Arg1_Bind3() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg4 arg4) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg1_Bind3> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, arg4);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4
>
class MethodClosure_Arg1_Bind4 : public Closure<R, Arg5> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5);
public:
    MethodClosure_Arg1_Bind4(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4) {}
    virtual ~MethodClosure_Arg1_Bind4() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg5 arg5) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg1_Bind4> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, arg5);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5
>
class MethodClosure_Arg1_Bind5 : public Closure<R, Arg6> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6);
public:
    MethodClosure_Arg1_Bind5(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5) {}
    virtual ~MethodClosure_Arg1_Bind5() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg6 arg6) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg1_Bind5> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, arg6);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6
>
class MethodClosure_Arg1_Bind6 : public Closure<R, Arg7> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7);
public:
    MethodClosure_Arg1_Bind6(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6) {}
    virtual ~MethodClosure_Arg1_Bind6() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg7 arg7) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg1_Bind6> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, arg7);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7
>
class MethodClosure_Arg1_Bind7 : public Closure<R, Arg8> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8);
public:
    MethodClosure_Arg1_Bind7(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7) {}
    virtual ~MethodClosure_Arg1_Bind7() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg8 arg8) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg1_Bind7> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, arg8);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8
>
class MethodClosure_Arg1_Bind8 : public Closure<R, Arg9> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9);
public:
    MethodClosure_Arg1_Bind8(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8) {}
    virtual ~MethodClosure_Arg1_Bind8() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg9 arg9) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg1_Bind8> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, arg9);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9
>
class MethodClosure_Arg1_Bind9 : public Closure<R, Arg10> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10);
public:
    MethodClosure_Arg1_Bind9(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9) {}
    virtual ~MethodClosure_Arg1_Bind9() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg10 arg10) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg1_Bind9> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, arg10);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9,
    typename PreArg10
>
class MethodClosure_Arg1_Bind10 : public Closure<R, Arg11> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11);
public:
    MethodClosure_Arg1_Bind10(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9), m_pa10(pa10) {}
    virtual ~MethodClosure_Arg1_Bind10() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg11 arg11) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg1_Bind10> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, m_pa10, arg11);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
    PreArg10 m_pa10;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2
>
class MethodClosure_Arg2_Bind0 : public Closure<R, Arg1, Arg2> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2);
public:
    MethodClosure_Arg2_Bind0(Class *object, MethodType method):
        m_object(object), m_method(method) {}
    virtual ~MethodClosure_Arg2_Bind0() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg1 arg1, Arg2 arg2) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg2_Bind0> self_deleter(this);
        return (m_object->*m_method)(arg1, arg2);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename PreArg1
>
class MethodClosure_Arg2_Bind1 : public Closure<R, Arg2, Arg3> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3);
public:
    MethodClosure_Arg2_Bind1(Class *object, MethodType method, PreArg1 pa1):
        m_object(object), m_method(method), m_pa1(pa1) {}
    virtual ~MethodClosure_Arg2_Bind1() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg2 arg2, Arg3 arg3) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg2_Bind1> self_deleter(this);
        return (m_object->*m_method)(m_pa1, arg2, arg3);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename PreArg1,
    typename PreArg2
>
class MethodClosure_Arg2_Bind2 : public Closure<R, Arg3, Arg4> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4);
public:
    MethodClosure_Arg2_Bind2(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2) {}
    virtual ~MethodClosure_Arg2_Bind2() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg3 arg3, Arg4 arg4) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg2_Bind2> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, arg3, arg4);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3
>
class MethodClosure_Arg2_Bind3 : public Closure<R, Arg4, Arg5> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5);
public:
    MethodClosure_Arg2_Bind3(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3) {}
    virtual ~MethodClosure_Arg2_Bind3() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg4 arg4, Arg5 arg5) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg2_Bind3> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, arg4, arg5);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4
>
class MethodClosure_Arg2_Bind4 : public Closure<R, Arg5, Arg6> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6);
public:
    MethodClosure_Arg2_Bind4(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4) {}
    virtual ~MethodClosure_Arg2_Bind4() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg5 arg5, Arg6 arg6) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg2_Bind4> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, arg5, arg6);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5
>
class MethodClosure_Arg2_Bind5 : public Closure<R, Arg6, Arg7> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7);
public:
    MethodClosure_Arg2_Bind5(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5) {}
    virtual ~MethodClosure_Arg2_Bind5() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg6 arg6, Arg7 arg7) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg2_Bind5> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, arg6, arg7);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6
>
class MethodClosure_Arg2_Bind6 : public Closure<R, Arg7, Arg8> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8);
public:
    MethodClosure_Arg2_Bind6(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6) {}
    virtual ~MethodClosure_Arg2_Bind6() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg7 arg7, Arg8 arg8) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg2_Bind6> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, arg7, arg8);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7
>
class MethodClosure_Arg2_Bind7 : public Closure<R, Arg8, Arg9> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9);
public:
    MethodClosure_Arg2_Bind7(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7) {}
    virtual ~MethodClosure_Arg2_Bind7() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg8 arg8, Arg9 arg9) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg2_Bind7> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, arg8, arg9);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8
>
class MethodClosure_Arg2_Bind8 : public Closure<R, Arg9, Arg10> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10);
public:
    MethodClosure_Arg2_Bind8(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8) {}
    virtual ~MethodClosure_Arg2_Bind8() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg9 arg9, Arg10 arg10) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg2_Bind8> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, arg9, arg10);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9
>
class MethodClosure_Arg2_Bind9 : public Closure<R, Arg10, Arg11> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11);
public:
    MethodClosure_Arg2_Bind9(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9) {}
    virtual ~MethodClosure_Arg2_Bind9() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg10 arg10, Arg11 arg11) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg2_Bind9> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, arg10, arg11);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9,
    typename PreArg10
>
class MethodClosure_Arg2_Bind10 : public Closure<R, Arg11, Arg12> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12);
public:
    MethodClosure_Arg2_Bind10(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9), m_pa10(pa10) {}
    virtual ~MethodClosure_Arg2_Bind10() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg11 arg11, Arg12 arg12) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg2_Bind10> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, m_pa10, arg11, arg12);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
    PreArg10 m_pa10;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3
>
class MethodClosure_Arg3_Bind0 : public Closure<R, Arg1, Arg2, Arg3> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3);
public:
    MethodClosure_Arg3_Bind0(Class *object, MethodType method):
        m_object(object), m_method(method) {}
    virtual ~MethodClosure_Arg3_Bind0() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg3_Bind0> self_deleter(this);
        return (m_object->*m_method)(arg1, arg2, arg3);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename PreArg1
>
class MethodClosure_Arg3_Bind1 : public Closure<R, Arg2, Arg3, Arg4> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4);
public:
    MethodClosure_Arg3_Bind1(Class *object, MethodType method, PreArg1 pa1):
        m_object(object), m_method(method), m_pa1(pa1) {}
    virtual ~MethodClosure_Arg3_Bind1() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg2 arg2, Arg3 arg3, Arg4 arg4) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg3_Bind1> self_deleter(this);
        return (m_object->*m_method)(m_pa1, arg2, arg3, arg4);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename PreArg1,
    typename PreArg2
>
class MethodClosure_Arg3_Bind2 : public Closure<R, Arg3, Arg4, Arg5> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5);
public:
    MethodClosure_Arg3_Bind2(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2) {}
    virtual ~MethodClosure_Arg3_Bind2() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg3 arg3, Arg4 arg4, Arg5 arg5) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg3_Bind2> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, arg3, arg4, arg5);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3
>
class MethodClosure_Arg3_Bind3 : public Closure<R, Arg4, Arg5, Arg6> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6);
public:
    MethodClosure_Arg3_Bind3(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3) {}
    virtual ~MethodClosure_Arg3_Bind3() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg4 arg4, Arg5 arg5, Arg6 arg6) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg3_Bind3> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, arg4, arg5, arg6);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4
>
class MethodClosure_Arg3_Bind4 : public Closure<R, Arg5, Arg6, Arg7> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7);
public:
    MethodClosure_Arg3_Bind4(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4) {}
    virtual ~MethodClosure_Arg3_Bind4() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg5 arg5, Arg6 arg6, Arg7 arg7) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg3_Bind4> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, arg5, arg6, arg7);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5
>
class MethodClosure_Arg3_Bind5 : public Closure<R, Arg6, Arg7, Arg8> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8);
public:
    MethodClosure_Arg3_Bind5(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5) {}
    virtual ~MethodClosure_Arg3_Bind5() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg6 arg6, Arg7 arg7, Arg8 arg8) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg3_Bind5> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, arg6, arg7, arg8);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6
>
class MethodClosure_Arg3_Bind6 : public Closure<R, Arg7, Arg8, Arg9> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9);
public:
    MethodClosure_Arg3_Bind6(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6) {}
    virtual ~MethodClosure_Arg3_Bind6() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg7 arg7, Arg8 arg8, Arg9 arg9) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg3_Bind6> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, arg7, arg8, arg9);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7
>
class MethodClosure_Arg3_Bind7 : public Closure<R, Arg8, Arg9, Arg10> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10);
public:
    MethodClosure_Arg3_Bind7(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7) {}
    virtual ~MethodClosure_Arg3_Bind7() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg8 arg8, Arg9 arg9, Arg10 arg10) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg3_Bind7> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, arg8, arg9, arg10);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8
>
class MethodClosure_Arg3_Bind8 : public Closure<R, Arg9, Arg10, Arg11> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11);
public:
    MethodClosure_Arg3_Bind8(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8) {}
    virtual ~MethodClosure_Arg3_Bind8() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg9 arg9, Arg10 arg10, Arg11 arg11) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg3_Bind8> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, arg9, arg10, arg11);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9
>
class MethodClosure_Arg3_Bind9 : public Closure<R, Arg10, Arg11, Arg12> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12);
public:
    MethodClosure_Arg3_Bind9(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9) {}
    virtual ~MethodClosure_Arg3_Bind9() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg10 arg10, Arg11 arg11, Arg12 arg12) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg3_Bind9> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, arg10, arg11, arg12);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9,
    typename PreArg10
>
class MethodClosure_Arg3_Bind10 : public Closure<R, Arg11, Arg12, Arg13> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13);
public:
    MethodClosure_Arg3_Bind10(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9), m_pa10(pa10) {}
    virtual ~MethodClosure_Arg3_Bind10() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg11 arg11, Arg12 arg12, Arg13 arg13) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg3_Bind10> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, m_pa10, arg11, arg12, arg13);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
    PreArg10 m_pa10;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4
>
class MethodClosure_Arg4_Bind0 : public Closure<R, Arg1, Arg2, Arg3, Arg4> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4);
public:
    MethodClosure_Arg4_Bind0(Class *object, MethodType method):
        m_object(object), m_method(method) {}
    virtual ~MethodClosure_Arg4_Bind0() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3, Arg4 arg4) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg4_Bind0> self_deleter(this);
        return (m_object->*m_method)(arg1, arg2, arg3, arg4);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename PreArg1
>
class MethodClosure_Arg4_Bind1 : public Closure<R, Arg2, Arg3, Arg4, Arg5> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5);
public:
    MethodClosure_Arg4_Bind1(Class *object, MethodType method, PreArg1 pa1):
        m_object(object), m_method(method), m_pa1(pa1) {}
    virtual ~MethodClosure_Arg4_Bind1() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg4_Bind1> self_deleter(this);
        return (m_object->*m_method)(m_pa1, arg2, arg3, arg4, arg5);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename PreArg1,
    typename PreArg2
>
class MethodClosure_Arg4_Bind2 : public Closure<R, Arg3, Arg4, Arg5, Arg6> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6);
public:
    MethodClosure_Arg4_Bind2(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2) {}
    virtual ~MethodClosure_Arg4_Bind2() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg4_Bind2> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, arg3, arg4, arg5, arg6);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3
>
class MethodClosure_Arg4_Bind3 : public Closure<R, Arg4, Arg5, Arg6, Arg7> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7);
public:
    MethodClosure_Arg4_Bind3(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3) {}
    virtual ~MethodClosure_Arg4_Bind3() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg4_Bind3> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, arg4, arg5, arg6, arg7);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4
>
class MethodClosure_Arg4_Bind4 : public Closure<R, Arg5, Arg6, Arg7, Arg8> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8);
public:
    MethodClosure_Arg4_Bind4(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4) {}
    virtual ~MethodClosure_Arg4_Bind4() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg4_Bind4> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, arg5, arg6, arg7, arg8);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5
>
class MethodClosure_Arg4_Bind5 : public Closure<R, Arg6, Arg7, Arg8, Arg9> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9);
public:
    MethodClosure_Arg4_Bind5(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5) {}
    virtual ~MethodClosure_Arg4_Bind5() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg4_Bind5> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, arg6, arg7, arg8, arg9);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6
>
class MethodClosure_Arg4_Bind6 : public Closure<R, Arg7, Arg8, Arg9, Arg10> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10);
public:
    MethodClosure_Arg4_Bind6(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6) {}
    virtual ~MethodClosure_Arg4_Bind6() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg4_Bind6> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, arg7, arg8, arg9, arg10);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7
>
class MethodClosure_Arg4_Bind7 : public Closure<R, Arg8, Arg9, Arg10, Arg11> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11);
public:
    MethodClosure_Arg4_Bind7(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7) {}
    virtual ~MethodClosure_Arg4_Bind7() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg4_Bind7> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, arg8, arg9, arg10, arg11);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8
>
class MethodClosure_Arg4_Bind8 : public Closure<R, Arg9, Arg10, Arg11, Arg12> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12);
public:
    MethodClosure_Arg4_Bind8(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8) {}
    virtual ~MethodClosure_Arg4_Bind8() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg4_Bind8> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, arg9, arg10, arg11, arg12);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9
>
class MethodClosure_Arg4_Bind9 : public Closure<R, Arg10, Arg11, Arg12, Arg13> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13);
public:
    MethodClosure_Arg4_Bind9(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9) {}
    virtual ~MethodClosure_Arg4_Bind9() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg4_Bind9> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, arg10, arg11, arg12, arg13);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9,
    typename PreArg10
>
class MethodClosure_Arg4_Bind10 : public Closure<R, Arg11, Arg12, Arg13, Arg14> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14);
public:
    MethodClosure_Arg4_Bind10(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9), m_pa10(pa10) {}
    virtual ~MethodClosure_Arg4_Bind10() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg4_Bind10> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, m_pa10, arg11, arg12, arg13, arg14);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
    PreArg10 m_pa10;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5
>
class MethodClosure_Arg5_Bind0 : public Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5);
public:
    MethodClosure_Arg5_Bind0(Class *object, MethodType method):
        m_object(object), m_method(method) {}
    virtual ~MethodClosure_Arg5_Bind0() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg5_Bind0> self_deleter(this);
        return (m_object->*m_method)(arg1, arg2, arg3, arg4, arg5);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename PreArg1
>
class MethodClosure_Arg5_Bind1 : public Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6);
public:
    MethodClosure_Arg5_Bind1(Class *object, MethodType method, PreArg1 pa1):
        m_object(object), m_method(method), m_pa1(pa1) {}
    virtual ~MethodClosure_Arg5_Bind1() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg5_Bind1> self_deleter(this);
        return (m_object->*m_method)(m_pa1, arg2, arg3, arg4, arg5, arg6);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename PreArg1,
    typename PreArg2
>
class MethodClosure_Arg5_Bind2 : public Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7);
public:
    MethodClosure_Arg5_Bind2(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2) {}
    virtual ~MethodClosure_Arg5_Bind2() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg5_Bind2> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, arg3, arg4, arg5, arg6, arg7);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3
>
class MethodClosure_Arg5_Bind3 : public Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8);
public:
    MethodClosure_Arg5_Bind3(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3) {}
    virtual ~MethodClosure_Arg5_Bind3() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg5_Bind3> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, arg4, arg5, arg6, arg7, arg8);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4
>
class MethodClosure_Arg5_Bind4 : public Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9);
public:
    MethodClosure_Arg5_Bind4(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4) {}
    virtual ~MethodClosure_Arg5_Bind4() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg5_Bind4> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, arg5, arg6, arg7, arg8, arg9);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5
>
class MethodClosure_Arg5_Bind5 : public Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10);
public:
    MethodClosure_Arg5_Bind5(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5) {}
    virtual ~MethodClosure_Arg5_Bind5() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg5_Bind5> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, arg6, arg7, arg8, arg9, arg10);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6
>
class MethodClosure_Arg5_Bind6 : public Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11);
public:
    MethodClosure_Arg5_Bind6(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6) {}
    virtual ~MethodClosure_Arg5_Bind6() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg5_Bind6> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, arg7, arg8, arg9, arg10, arg11);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7
>
class MethodClosure_Arg5_Bind7 : public Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12);
public:
    MethodClosure_Arg5_Bind7(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7) {}
    virtual ~MethodClosure_Arg5_Bind7() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg5_Bind7> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, arg8, arg9, arg10, arg11, arg12);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8
>
class MethodClosure_Arg5_Bind8 : public Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13);
public:
    MethodClosure_Arg5_Bind8(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8) {}
    virtual ~MethodClosure_Arg5_Bind8() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg5_Bind8> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, arg9, arg10, arg11, arg12, arg13);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9
>
class MethodClosure_Arg5_Bind9 : public Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14);
public:
    MethodClosure_Arg5_Bind9(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9) {}
    virtual ~MethodClosure_Arg5_Bind9() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg5_Bind9> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, arg10, arg11, arg12, arg13, arg14);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9,
    typename PreArg10
>
class MethodClosure_Arg5_Bind10 : public Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15);
public:
    MethodClosure_Arg5_Bind10(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9), m_pa10(pa10) {}
    virtual ~MethodClosure_Arg5_Bind10() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg5_Bind10> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, m_pa10, arg11, arg12, arg13, arg14, arg15);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
    PreArg10 m_pa10;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6
>
class MethodClosure_Arg6_Bind0 : public Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6);
public:
    MethodClosure_Arg6_Bind0(Class *object, MethodType method):
        m_object(object), m_method(method) {}
    virtual ~MethodClosure_Arg6_Bind0() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg6_Bind0> self_deleter(this);
        return (m_object->*m_method)(arg1, arg2, arg3, arg4, arg5, arg6);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename PreArg1
>
class MethodClosure_Arg6_Bind1 : public Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7);
public:
    MethodClosure_Arg6_Bind1(Class *object, MethodType method, PreArg1 pa1):
        m_object(object), m_method(method), m_pa1(pa1) {}
    virtual ~MethodClosure_Arg6_Bind1() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg6_Bind1> self_deleter(this);
        return (m_object->*m_method)(m_pa1, arg2, arg3, arg4, arg5, arg6, arg7);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename PreArg1,
    typename PreArg2
>
class MethodClosure_Arg6_Bind2 : public Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8);
public:
    MethodClosure_Arg6_Bind2(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2) {}
    virtual ~MethodClosure_Arg6_Bind2() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg6_Bind2> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, arg3, arg4, arg5, arg6, arg7, arg8);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3
>
class MethodClosure_Arg6_Bind3 : public Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9);
public:
    MethodClosure_Arg6_Bind3(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3) {}
    virtual ~MethodClosure_Arg6_Bind3() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg6_Bind3> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, arg4, arg5, arg6, arg7, arg8, arg9);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4
>
class MethodClosure_Arg6_Bind4 : public Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10);
public:
    MethodClosure_Arg6_Bind4(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4) {}
    virtual ~MethodClosure_Arg6_Bind4() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg6_Bind4> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, arg5, arg6, arg7, arg8, arg9, arg10);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5
>
class MethodClosure_Arg6_Bind5 : public Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11);
public:
    MethodClosure_Arg6_Bind5(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5) {}
    virtual ~MethodClosure_Arg6_Bind5() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg6_Bind5> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, arg6, arg7, arg8, arg9, arg10, arg11);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6
>
class MethodClosure_Arg6_Bind6 : public Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12);
public:
    MethodClosure_Arg6_Bind6(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6) {}
    virtual ~MethodClosure_Arg6_Bind6() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg6_Bind6> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, arg7, arg8, arg9, arg10, arg11, arg12);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7
>
class MethodClosure_Arg6_Bind7 : public Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13);
public:
    MethodClosure_Arg6_Bind7(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7) {}
    virtual ~MethodClosure_Arg6_Bind7() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg6_Bind7> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, arg8, arg9, arg10, arg11, arg12, arg13);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8
>
class MethodClosure_Arg6_Bind8 : public Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14);
public:
    MethodClosure_Arg6_Bind8(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8) {}
    virtual ~MethodClosure_Arg6_Bind8() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg6_Bind8> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, arg9, arg10, arg11, arg12, arg13, arg14);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9
>
class MethodClosure_Arg6_Bind9 : public Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15);
public:
    MethodClosure_Arg6_Bind9(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9) {}
    virtual ~MethodClosure_Arg6_Bind9() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg6_Bind9> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, arg10, arg11, arg12, arg13, arg14, arg15);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename Arg16,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9,
    typename PreArg10
>
class MethodClosure_Arg6_Bind10 : public Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16);
public:
    MethodClosure_Arg6_Bind10(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9), m_pa10(pa10) {}
    virtual ~MethodClosure_Arg6_Bind10() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg6_Bind10> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, m_pa10, arg11, arg12, arg13, arg14, arg15, arg16);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
    PreArg10 m_pa10;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7
>
class MethodClosure_Arg7_Bind0 : public Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7);
public:
    MethodClosure_Arg7_Bind0(Class *object, MethodType method):
        m_object(object), m_method(method) {}
    virtual ~MethodClosure_Arg7_Bind0() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg7_Bind0> self_deleter(this);
        return (m_object->*m_method)(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename PreArg1
>
class MethodClosure_Arg7_Bind1 : public Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8);
public:
    MethodClosure_Arg7_Bind1(Class *object, MethodType method, PreArg1 pa1):
        m_object(object), m_method(method), m_pa1(pa1) {}
    virtual ~MethodClosure_Arg7_Bind1() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg7_Bind1> self_deleter(this);
        return (m_object->*m_method)(m_pa1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename PreArg1,
    typename PreArg2
>
class MethodClosure_Arg7_Bind2 : public Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9);
public:
    MethodClosure_Arg7_Bind2(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2) {}
    virtual ~MethodClosure_Arg7_Bind2() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg7_Bind2> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3
>
class MethodClosure_Arg7_Bind3 : public Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10);
public:
    MethodClosure_Arg7_Bind3(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3) {}
    virtual ~MethodClosure_Arg7_Bind3() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg7_Bind3> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4
>
class MethodClosure_Arg7_Bind4 : public Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11);
public:
    MethodClosure_Arg7_Bind4(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4) {}
    virtual ~MethodClosure_Arg7_Bind4() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg7_Bind4> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5
>
class MethodClosure_Arg7_Bind5 : public Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12);
public:
    MethodClosure_Arg7_Bind5(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5) {}
    virtual ~MethodClosure_Arg7_Bind5() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg7_Bind5> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6
>
class MethodClosure_Arg7_Bind6 : public Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13);
public:
    MethodClosure_Arg7_Bind6(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6) {}
    virtual ~MethodClosure_Arg7_Bind6() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg7_Bind6> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7
>
class MethodClosure_Arg7_Bind7 : public Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14);
public:
    MethodClosure_Arg7_Bind7(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7) {}
    virtual ~MethodClosure_Arg7_Bind7() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg7_Bind7> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8
>
class MethodClosure_Arg7_Bind8 : public Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15);
public:
    MethodClosure_Arg7_Bind8(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8) {}
    virtual ~MethodClosure_Arg7_Bind8() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg7_Bind8> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, arg9, arg10, arg11, arg12, arg13, arg14, arg15);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename Arg16,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9
>
class MethodClosure_Arg7_Bind9 : public Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16);
public:
    MethodClosure_Arg7_Bind9(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9) {}
    virtual ~MethodClosure_Arg7_Bind9() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg7_Bind9> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, arg10, arg11, arg12, arg13, arg14, arg15, arg16);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename Arg16,
    typename Arg17,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9,
    typename PreArg10
>
class MethodClosure_Arg7_Bind10 : public Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17);
public:
    MethodClosure_Arg7_Bind10(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9), m_pa10(pa10) {}
    virtual ~MethodClosure_Arg7_Bind10() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16, Arg17 arg17) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg7_Bind10> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, m_pa10, arg11, arg12, arg13, arg14, arg15, arg16, arg17);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
    PreArg10 m_pa10;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8
>
class MethodClosure_Arg8_Bind0 : public Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8);
public:
    MethodClosure_Arg8_Bind0(Class *object, MethodType method):
        m_object(object), m_method(method) {}
    virtual ~MethodClosure_Arg8_Bind0() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg8_Bind0> self_deleter(this);
        return (m_object->*m_method)(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename PreArg1
>
class MethodClosure_Arg8_Bind1 : public Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9);
public:
    MethodClosure_Arg8_Bind1(Class *object, MethodType method, PreArg1 pa1):
        m_object(object), m_method(method), m_pa1(pa1) {}
    virtual ~MethodClosure_Arg8_Bind1() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg8_Bind1> self_deleter(this);
        return (m_object->*m_method)(m_pa1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename PreArg1,
    typename PreArg2
>
class MethodClosure_Arg8_Bind2 : public Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10);
public:
    MethodClosure_Arg8_Bind2(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2) {}
    virtual ~MethodClosure_Arg8_Bind2() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg8_Bind2> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3
>
class MethodClosure_Arg8_Bind3 : public Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11);
public:
    MethodClosure_Arg8_Bind3(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3) {}
    virtual ~MethodClosure_Arg8_Bind3() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg8_Bind3> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4
>
class MethodClosure_Arg8_Bind4 : public Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12);
public:
    MethodClosure_Arg8_Bind4(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4) {}
    virtual ~MethodClosure_Arg8_Bind4() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg8_Bind4> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5
>
class MethodClosure_Arg8_Bind5 : public Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13);
public:
    MethodClosure_Arg8_Bind5(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5) {}
    virtual ~MethodClosure_Arg8_Bind5() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg8_Bind5> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6
>
class MethodClosure_Arg8_Bind6 : public Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14);
public:
    MethodClosure_Arg8_Bind6(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6) {}
    virtual ~MethodClosure_Arg8_Bind6() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg8_Bind6> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7
>
class MethodClosure_Arg8_Bind7 : public Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15);
public:
    MethodClosure_Arg8_Bind7(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7) {}
    virtual ~MethodClosure_Arg8_Bind7() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg8_Bind7> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename Arg16,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8
>
class MethodClosure_Arg8_Bind8 : public Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16);
public:
    MethodClosure_Arg8_Bind8(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8) {}
    virtual ~MethodClosure_Arg8_Bind8() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg8_Bind8> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename Arg16,
    typename Arg17,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9
>
class MethodClosure_Arg8_Bind9 : public Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17);
public:
    MethodClosure_Arg8_Bind9(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9) {}
    virtual ~MethodClosure_Arg8_Bind9() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16, Arg17 arg17) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg8_Bind9> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename Arg16,
    typename Arg17,
    typename Arg18,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9,
    typename PreArg10
>
class MethodClosure_Arg8_Bind10 : public Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18);
public:
    MethodClosure_Arg8_Bind10(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9), m_pa10(pa10) {}
    virtual ~MethodClosure_Arg8_Bind10() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16, Arg17 arg17, Arg18 arg18) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg8_Bind10> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, m_pa10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
    PreArg10 m_pa10;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9
>
class MethodClosure_Arg9_Bind0 : public Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9);
public:
    MethodClosure_Arg9_Bind0(Class *object, MethodType method):
        m_object(object), m_method(method) {}
    virtual ~MethodClosure_Arg9_Bind0() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg9_Bind0> self_deleter(this);
        return (m_object->*m_method)(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename PreArg1
>
class MethodClosure_Arg9_Bind1 : public Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10);
public:
    MethodClosure_Arg9_Bind1(Class *object, MethodType method, PreArg1 pa1):
        m_object(object), m_method(method), m_pa1(pa1) {}
    virtual ~MethodClosure_Arg9_Bind1() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg9_Bind1> self_deleter(this);
        return (m_object->*m_method)(m_pa1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename PreArg1,
    typename PreArg2
>
class MethodClosure_Arg9_Bind2 : public Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11);
public:
    MethodClosure_Arg9_Bind2(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2) {}
    virtual ~MethodClosure_Arg9_Bind2() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg9_Bind2> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3
>
class MethodClosure_Arg9_Bind3 : public Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12);
public:
    MethodClosure_Arg9_Bind3(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3) {}
    virtual ~MethodClosure_Arg9_Bind3() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg9_Bind3> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4
>
class MethodClosure_Arg9_Bind4 : public Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13);
public:
    MethodClosure_Arg9_Bind4(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4) {}
    virtual ~MethodClosure_Arg9_Bind4() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg9_Bind4> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5
>
class MethodClosure_Arg9_Bind5 : public Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14);
public:
    MethodClosure_Arg9_Bind5(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5) {}
    virtual ~MethodClosure_Arg9_Bind5() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg9_Bind5> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6
>
class MethodClosure_Arg9_Bind6 : public Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15);
public:
    MethodClosure_Arg9_Bind6(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6) {}
    virtual ~MethodClosure_Arg9_Bind6() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg9_Bind6> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename Arg16,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7
>
class MethodClosure_Arg9_Bind7 : public Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16);
public:
    MethodClosure_Arg9_Bind7(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7) {}
    virtual ~MethodClosure_Arg9_Bind7() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg9_Bind7> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename Arg16,
    typename Arg17,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8
>
class MethodClosure_Arg9_Bind8 : public Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17);
public:
    MethodClosure_Arg9_Bind8(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8) {}
    virtual ~MethodClosure_Arg9_Bind8() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16, Arg17 arg17) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg9_Bind8> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename Arg16,
    typename Arg17,
    typename Arg18,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9
>
class MethodClosure_Arg9_Bind9 : public Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18);
public:
    MethodClosure_Arg9_Bind9(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9) {}
    virtual ~MethodClosure_Arg9_Bind9() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16, Arg17 arg17, Arg18 arg18) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg9_Bind9> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename Arg16,
    typename Arg17,
    typename Arg18,
    typename Arg19,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9,
    typename PreArg10
>
class MethodClosure_Arg9_Bind10 : public Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19);
public:
    MethodClosure_Arg9_Bind10(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9), m_pa10(pa10) {}
    virtual ~MethodClosure_Arg9_Bind10() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16, Arg17 arg17, Arg18 arg18, Arg19 arg19) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg9_Bind10> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, m_pa10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
    PreArg10 m_pa10;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10
>
class MethodClosure_Arg10_Bind0 : public Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10);
public:
    MethodClosure_Arg10_Bind0(Class *object, MethodType method):
        m_object(object), m_method(method) {}
    virtual ~MethodClosure_Arg10_Bind0() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg10_Bind0> self_deleter(this);
        return (m_object->*m_method)(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename PreArg1
>
class MethodClosure_Arg10_Bind1 : public Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11);
public:
    MethodClosure_Arg10_Bind1(Class *object, MethodType method, PreArg1 pa1):
        m_object(object), m_method(method), m_pa1(pa1) {}
    virtual ~MethodClosure_Arg10_Bind1() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg10_Bind1> self_deleter(this);
        return (m_object->*m_method)(m_pa1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename PreArg1,
    typename PreArg2
>
class MethodClosure_Arg10_Bind2 : public Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12);
public:
    MethodClosure_Arg10_Bind2(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2) {}
    virtual ~MethodClosure_Arg10_Bind2() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg10_Bind2> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3
>
class MethodClosure_Arg10_Bind3 : public Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13);
public:
    MethodClosure_Arg10_Bind3(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3) {}
    virtual ~MethodClosure_Arg10_Bind3() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg10_Bind3> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4
>
class MethodClosure_Arg10_Bind4 : public Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14);
public:
    MethodClosure_Arg10_Bind4(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4) {}
    virtual ~MethodClosure_Arg10_Bind4() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg10_Bind4> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5
>
class MethodClosure_Arg10_Bind5 : public Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15);
public:
    MethodClosure_Arg10_Bind5(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5) {}
    virtual ~MethodClosure_Arg10_Bind5() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg10_Bind5> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename Arg16,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6
>
class MethodClosure_Arg10_Bind6 : public Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16);
public:
    MethodClosure_Arg10_Bind6(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6) {}
    virtual ~MethodClosure_Arg10_Bind6() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg10_Bind6> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename Arg16,
    typename Arg17,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7
>
class MethodClosure_Arg10_Bind7 : public Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17);
public:
    MethodClosure_Arg10_Bind7(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7) {}
    virtual ~MethodClosure_Arg10_Bind7() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16, Arg17 arg17) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg10_Bind7> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename Arg16,
    typename Arg17,
    typename Arg18,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8
>
class MethodClosure_Arg10_Bind8 : public Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18);
public:
    MethodClosure_Arg10_Bind8(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8) {}
    virtual ~MethodClosure_Arg10_Bind8() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16, Arg17 arg17, Arg18 arg18) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg10_Bind8> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename Arg16,
    typename Arg17,
    typename Arg18,
    typename Arg19,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9
>
class MethodClosure_Arg10_Bind9 : public Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19);
public:
    MethodClosure_Arg10_Bind9(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9) {}
    virtual ~MethodClosure_Arg10_Bind9() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16, Arg17 arg17, Arg18 arg18, Arg19 arg19) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg10_Bind9> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
};

template <
    bool SelfDeleting,
    typename R,
    typename Class, typename MethodClass,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename Arg16,
    typename Arg17,
    typename Arg18,
    typename Arg19,
    typename Arg20,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9,
    typename PreArg10
>
class MethodClosure_Arg10_Bind10 : public Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19, Arg20> {
    typedef R (MethodClass::*MethodType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19, Arg20);
public:
    MethodClosure_Arg10_Bind10(Class *object, MethodType method, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10):
        m_object(object), m_method(method), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9), m_pa10(pa10) {}
    virtual ~MethodClosure_Arg10_Bind10() {
        m_object = 0;
        m_method = 0;
    }
    virtual R Run(Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16, Arg17 arg17, Arg18 arg18, Arg19 arg19, Arg20 arg20) {
        ConditionalAutoDeleter<SelfDeleting, MethodClosure_Arg10_Bind10> self_deleter(this);
        return (m_object->*m_method)(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, m_pa10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    Class* m_object;
    MethodType m_method;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
    PreArg10 m_pa10;
};

////////////////////////////////////////////////////
//////////// nomal function closures //////////////////
////////////////////////////////////////////////////

template <
    bool SelfDeleting,
    typename R
>
class FunctionClosure_Arg0_Bind0 : public Closure<R> {
    typedef R (*FunctionType)();
public:
    explicit FunctionClosure_Arg0_Bind0(FunctionType function):
        m_function(function) {}
    virtual ~FunctionClosure_Arg0_Bind0() {
        m_function = 0;
    }
    virtual R Run() {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg0_Bind0> self_deleter(this);
        return m_function();
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename PreArg1
>
class FunctionClosure_Arg0_Bind1 : public Closure<R> {
    typedef R (*FunctionType)(Arg1);
public:
    FunctionClosure_Arg0_Bind1(FunctionType function, PreArg1 pa1):
        m_function(function), m_pa1(pa1) {}
    virtual ~FunctionClosure_Arg0_Bind1() {
        m_function = 0;
    }
    virtual R Run() {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg0_Bind1> self_deleter(this);
        return m_function(m_pa1);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename PreArg1,
    typename PreArg2
>
class FunctionClosure_Arg0_Bind2 : public Closure<R> {
    typedef R (*FunctionType)(Arg1, Arg2);
public:
    FunctionClosure_Arg0_Bind2(FunctionType function, PreArg1 pa1, PreArg2 pa2):
        m_function(function), m_pa1(pa1), m_pa2(pa2) {}
    virtual ~FunctionClosure_Arg0_Bind2() {
        m_function = 0;
    }
    virtual R Run() {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg0_Bind2> self_deleter(this);
        return m_function(m_pa1, m_pa2);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3
>
class FunctionClosure_Arg0_Bind3 : public Closure<R> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3);
public:
    FunctionClosure_Arg0_Bind3(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3) {}
    virtual ~FunctionClosure_Arg0_Bind3() {
        m_function = 0;
    }
    virtual R Run() {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg0_Bind3> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4
>
class FunctionClosure_Arg0_Bind4 : public Closure<R> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4);
public:
    FunctionClosure_Arg0_Bind4(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4) {}
    virtual ~FunctionClosure_Arg0_Bind4() {
        m_function = 0;
    }
    virtual R Run() {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg0_Bind4> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5
>
class FunctionClosure_Arg0_Bind5 : public Closure<R> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5);
public:
    FunctionClosure_Arg0_Bind5(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5) {}
    virtual ~FunctionClosure_Arg0_Bind5() {
        m_function = 0;
    }
    virtual R Run() {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg0_Bind5> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6
>
class FunctionClosure_Arg0_Bind6 : public Closure<R> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6);
public:
    FunctionClosure_Arg0_Bind6(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6) {}
    virtual ~FunctionClosure_Arg0_Bind6() {
        m_function = 0;
    }
    virtual R Run() {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg0_Bind6> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7
>
class FunctionClosure_Arg0_Bind7 : public Closure<R> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7);
public:
    FunctionClosure_Arg0_Bind7(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7) {}
    virtual ~FunctionClosure_Arg0_Bind7() {
        m_function = 0;
    }
    virtual R Run() {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg0_Bind7> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8
>
class FunctionClosure_Arg0_Bind8 : public Closure<R> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8);
public:
    FunctionClosure_Arg0_Bind8(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8) {}
    virtual ~FunctionClosure_Arg0_Bind8() {
        m_function = 0;
    }
    virtual R Run() {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg0_Bind8> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9
>
class FunctionClosure_Arg0_Bind9 : public Closure<R> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9);
public:
    FunctionClosure_Arg0_Bind9(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9) {}
    virtual ~FunctionClosure_Arg0_Bind9() {
        m_function = 0;
    }
    virtual R Run() {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg0_Bind9> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9,
    typename PreArg10
>
class FunctionClosure_Arg0_Bind10 : public Closure<R> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10);
public:
    FunctionClosure_Arg0_Bind10(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9), m_pa10(pa10) {}
    virtual ~FunctionClosure_Arg0_Bind10() {
        m_function = 0;
    }
    virtual R Run() {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg0_Bind10> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, m_pa10);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
    PreArg10 m_pa10;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1
>
class FunctionClosure_Arg1_Bind0 : public Closure<R, Arg1> {
    typedef R (*FunctionType)(Arg1);
public:
    explicit FunctionClosure_Arg1_Bind0(FunctionType function):
        m_function(function) {}
    virtual ~FunctionClosure_Arg1_Bind0() {
        m_function = 0;
    }
    virtual R Run(Arg1 arg1) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg1_Bind0> self_deleter(this);
        return m_function(arg1);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename PreArg1
>
class FunctionClosure_Arg1_Bind1 : public Closure<R, Arg2> {
    typedef R (*FunctionType)(Arg1, Arg2);
public:
    FunctionClosure_Arg1_Bind1(FunctionType function, PreArg1 pa1):
        m_function(function), m_pa1(pa1) {}
    virtual ~FunctionClosure_Arg1_Bind1() {
        m_function = 0;
    }
    virtual R Run(Arg2 arg2) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg1_Bind1> self_deleter(this);
        return m_function(m_pa1, arg2);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename PreArg1,
    typename PreArg2
>
class FunctionClosure_Arg1_Bind2 : public Closure<R, Arg3> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3);
public:
    FunctionClosure_Arg1_Bind2(FunctionType function, PreArg1 pa1, PreArg2 pa2):
        m_function(function), m_pa1(pa1), m_pa2(pa2) {}
    virtual ~FunctionClosure_Arg1_Bind2() {
        m_function = 0;
    }
    virtual R Run(Arg3 arg3) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg1_Bind2> self_deleter(this);
        return m_function(m_pa1, m_pa2, arg3);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3
>
class FunctionClosure_Arg1_Bind3 : public Closure<R, Arg4> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4);
public:
    FunctionClosure_Arg1_Bind3(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3) {}
    virtual ~FunctionClosure_Arg1_Bind3() {
        m_function = 0;
    }
    virtual R Run(Arg4 arg4) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg1_Bind3> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, arg4);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4
>
class FunctionClosure_Arg1_Bind4 : public Closure<R, Arg5> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5);
public:
    FunctionClosure_Arg1_Bind4(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4) {}
    virtual ~FunctionClosure_Arg1_Bind4() {
        m_function = 0;
    }
    virtual R Run(Arg5 arg5) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg1_Bind4> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, arg5);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5
>
class FunctionClosure_Arg1_Bind5 : public Closure<R, Arg6> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6);
public:
    FunctionClosure_Arg1_Bind5(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5) {}
    virtual ~FunctionClosure_Arg1_Bind5() {
        m_function = 0;
    }
    virtual R Run(Arg6 arg6) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg1_Bind5> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, arg6);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6
>
class FunctionClosure_Arg1_Bind6 : public Closure<R, Arg7> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7);
public:
    FunctionClosure_Arg1_Bind6(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6) {}
    virtual ~FunctionClosure_Arg1_Bind6() {
        m_function = 0;
    }
    virtual R Run(Arg7 arg7) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg1_Bind6> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, arg7);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7
>
class FunctionClosure_Arg1_Bind7 : public Closure<R, Arg8> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8);
public:
    FunctionClosure_Arg1_Bind7(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7) {}
    virtual ~FunctionClosure_Arg1_Bind7() {
        m_function = 0;
    }
    virtual R Run(Arg8 arg8) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg1_Bind7> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, arg8);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8
>
class FunctionClosure_Arg1_Bind8 : public Closure<R, Arg9> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9);
public:
    FunctionClosure_Arg1_Bind8(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8) {}
    virtual ~FunctionClosure_Arg1_Bind8() {
        m_function = 0;
    }
    virtual R Run(Arg9 arg9) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg1_Bind8> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, arg9);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9
>
class FunctionClosure_Arg1_Bind9 : public Closure<R, Arg10> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10);
public:
    FunctionClosure_Arg1_Bind9(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9) {}
    virtual ~FunctionClosure_Arg1_Bind9() {
        m_function = 0;
    }
    virtual R Run(Arg10 arg10) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg1_Bind9> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, arg10);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9,
    typename PreArg10
>
class FunctionClosure_Arg1_Bind10 : public Closure<R, Arg11> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11);
public:
    FunctionClosure_Arg1_Bind10(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9), m_pa10(pa10) {}
    virtual ~FunctionClosure_Arg1_Bind10() {
        m_function = 0;
    }
    virtual R Run(Arg11 arg11) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg1_Bind10> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, m_pa10, arg11);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
    PreArg10 m_pa10;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2
>
class FunctionClosure_Arg2_Bind0 : public Closure<R, Arg1, Arg2> {
    typedef R (*FunctionType)(Arg1, Arg2);
public:
    explicit FunctionClosure_Arg2_Bind0(FunctionType function):
        m_function(function) {}
    virtual ~FunctionClosure_Arg2_Bind0() {
        m_function = 0;
    }
    virtual R Run(Arg1 arg1, Arg2 arg2) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg2_Bind0> self_deleter(this);
        return m_function(arg1, arg2);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename PreArg1
>
class FunctionClosure_Arg2_Bind1 : public Closure<R, Arg2, Arg3> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3);
public:
    FunctionClosure_Arg2_Bind1(FunctionType function, PreArg1 pa1):
        m_function(function), m_pa1(pa1) {}
    virtual ~FunctionClosure_Arg2_Bind1() {
        m_function = 0;
    }
    virtual R Run(Arg2 arg2, Arg3 arg3) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg2_Bind1> self_deleter(this);
        return m_function(m_pa1, arg2, arg3);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename PreArg1,
    typename PreArg2
>
class FunctionClosure_Arg2_Bind2 : public Closure<R, Arg3, Arg4> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4);
public:
    FunctionClosure_Arg2_Bind2(FunctionType function, PreArg1 pa1, PreArg2 pa2):
        m_function(function), m_pa1(pa1), m_pa2(pa2) {}
    virtual ~FunctionClosure_Arg2_Bind2() {
        m_function = 0;
    }
    virtual R Run(Arg3 arg3, Arg4 arg4) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg2_Bind2> self_deleter(this);
        return m_function(m_pa1, m_pa2, arg3, arg4);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3
>
class FunctionClosure_Arg2_Bind3 : public Closure<R, Arg4, Arg5> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5);
public:
    FunctionClosure_Arg2_Bind3(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3) {}
    virtual ~FunctionClosure_Arg2_Bind3() {
        m_function = 0;
    }
    virtual R Run(Arg4 arg4, Arg5 arg5) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg2_Bind3> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, arg4, arg5);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4
>
class FunctionClosure_Arg2_Bind4 : public Closure<R, Arg5, Arg6> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6);
public:
    FunctionClosure_Arg2_Bind4(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4) {}
    virtual ~FunctionClosure_Arg2_Bind4() {
        m_function = 0;
    }
    virtual R Run(Arg5 arg5, Arg6 arg6) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg2_Bind4> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, arg5, arg6);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5
>
class FunctionClosure_Arg2_Bind5 : public Closure<R, Arg6, Arg7> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7);
public:
    FunctionClosure_Arg2_Bind5(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5) {}
    virtual ~FunctionClosure_Arg2_Bind5() {
        m_function = 0;
    }
    virtual R Run(Arg6 arg6, Arg7 arg7) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg2_Bind5> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, arg6, arg7);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6
>
class FunctionClosure_Arg2_Bind6 : public Closure<R, Arg7, Arg8> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8);
public:
    FunctionClosure_Arg2_Bind6(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6) {}
    virtual ~FunctionClosure_Arg2_Bind6() {
        m_function = 0;
    }
    virtual R Run(Arg7 arg7, Arg8 arg8) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg2_Bind6> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, arg7, arg8);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7
>
class FunctionClosure_Arg2_Bind7 : public Closure<R, Arg8, Arg9> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9);
public:
    FunctionClosure_Arg2_Bind7(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7) {}
    virtual ~FunctionClosure_Arg2_Bind7() {
        m_function = 0;
    }
    virtual R Run(Arg8 arg8, Arg9 arg9) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg2_Bind7> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, arg8, arg9);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8
>
class FunctionClosure_Arg2_Bind8 : public Closure<R, Arg9, Arg10> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10);
public:
    FunctionClosure_Arg2_Bind8(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8) {}
    virtual ~FunctionClosure_Arg2_Bind8() {
        m_function = 0;
    }
    virtual R Run(Arg9 arg9, Arg10 arg10) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg2_Bind8> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, arg9, arg10);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9
>
class FunctionClosure_Arg2_Bind9 : public Closure<R, Arg10, Arg11> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11);
public:
    FunctionClosure_Arg2_Bind9(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9) {}
    virtual ~FunctionClosure_Arg2_Bind9() {
        m_function = 0;
    }
    virtual R Run(Arg10 arg10, Arg11 arg11) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg2_Bind9> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, arg10, arg11);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9,
    typename PreArg10
>
class FunctionClosure_Arg2_Bind10 : public Closure<R, Arg11, Arg12> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12);
public:
    FunctionClosure_Arg2_Bind10(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9), m_pa10(pa10) {}
    virtual ~FunctionClosure_Arg2_Bind10() {
        m_function = 0;
    }
    virtual R Run(Arg11 arg11, Arg12 arg12) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg2_Bind10> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, m_pa10, arg11, arg12);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
    PreArg10 m_pa10;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3
>
class FunctionClosure_Arg3_Bind0 : public Closure<R, Arg1, Arg2, Arg3> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3);
public:
    explicit FunctionClosure_Arg3_Bind0(FunctionType function):
        m_function(function) {}
    virtual ~FunctionClosure_Arg3_Bind0() {
        m_function = 0;
    }
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg3_Bind0> self_deleter(this);
        return m_function(arg1, arg2, arg3);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename PreArg1
>
class FunctionClosure_Arg3_Bind1 : public Closure<R, Arg2, Arg3, Arg4> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4);
public:
    FunctionClosure_Arg3_Bind1(FunctionType function, PreArg1 pa1):
        m_function(function), m_pa1(pa1) {}
    virtual ~FunctionClosure_Arg3_Bind1() {
        m_function = 0;
    }
    virtual R Run(Arg2 arg2, Arg3 arg3, Arg4 arg4) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg3_Bind1> self_deleter(this);
        return m_function(m_pa1, arg2, arg3, arg4);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename PreArg1,
    typename PreArg2
>
class FunctionClosure_Arg3_Bind2 : public Closure<R, Arg3, Arg4, Arg5> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5);
public:
    FunctionClosure_Arg3_Bind2(FunctionType function, PreArg1 pa1, PreArg2 pa2):
        m_function(function), m_pa1(pa1), m_pa2(pa2) {}
    virtual ~FunctionClosure_Arg3_Bind2() {
        m_function = 0;
    }
    virtual R Run(Arg3 arg3, Arg4 arg4, Arg5 arg5) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg3_Bind2> self_deleter(this);
        return m_function(m_pa1, m_pa2, arg3, arg4, arg5);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3
>
class FunctionClosure_Arg3_Bind3 : public Closure<R, Arg4, Arg5, Arg6> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6);
public:
    FunctionClosure_Arg3_Bind3(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3) {}
    virtual ~FunctionClosure_Arg3_Bind3() {
        m_function = 0;
    }
    virtual R Run(Arg4 arg4, Arg5 arg5, Arg6 arg6) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg3_Bind3> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, arg4, arg5, arg6);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4
>
class FunctionClosure_Arg3_Bind4 : public Closure<R, Arg5, Arg6, Arg7> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7);
public:
    FunctionClosure_Arg3_Bind4(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4) {}
    virtual ~FunctionClosure_Arg3_Bind4() {
        m_function = 0;
    }
    virtual R Run(Arg5 arg5, Arg6 arg6, Arg7 arg7) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg3_Bind4> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, arg5, arg6, arg7);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5
>
class FunctionClosure_Arg3_Bind5 : public Closure<R, Arg6, Arg7, Arg8> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8);
public:
    FunctionClosure_Arg3_Bind5(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5) {}
    virtual ~FunctionClosure_Arg3_Bind5() {
        m_function = 0;
    }
    virtual R Run(Arg6 arg6, Arg7 arg7, Arg8 arg8) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg3_Bind5> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, arg6, arg7, arg8);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6
>
class FunctionClosure_Arg3_Bind6 : public Closure<R, Arg7, Arg8, Arg9> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9);
public:
    FunctionClosure_Arg3_Bind6(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6) {}
    virtual ~FunctionClosure_Arg3_Bind6() {
        m_function = 0;
    }
    virtual R Run(Arg7 arg7, Arg8 arg8, Arg9 arg9) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg3_Bind6> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, arg7, arg8, arg9);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7
>
class FunctionClosure_Arg3_Bind7 : public Closure<R, Arg8, Arg9, Arg10> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10);
public:
    FunctionClosure_Arg3_Bind7(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7) {}
    virtual ~FunctionClosure_Arg3_Bind7() {
        m_function = 0;
    }
    virtual R Run(Arg8 arg8, Arg9 arg9, Arg10 arg10) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg3_Bind7> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, arg8, arg9, arg10);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8
>
class FunctionClosure_Arg3_Bind8 : public Closure<R, Arg9, Arg10, Arg11> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11);
public:
    FunctionClosure_Arg3_Bind8(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8) {}
    virtual ~FunctionClosure_Arg3_Bind8() {
        m_function = 0;
    }
    virtual R Run(Arg9 arg9, Arg10 arg10, Arg11 arg11) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg3_Bind8> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, arg9, arg10, arg11);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9
>
class FunctionClosure_Arg3_Bind9 : public Closure<R, Arg10, Arg11, Arg12> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12);
public:
    FunctionClosure_Arg3_Bind9(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9) {}
    virtual ~FunctionClosure_Arg3_Bind9() {
        m_function = 0;
    }
    virtual R Run(Arg10 arg10, Arg11 arg11, Arg12 arg12) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg3_Bind9> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, arg10, arg11, arg12);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9,
    typename PreArg10
>
class FunctionClosure_Arg3_Bind10 : public Closure<R, Arg11, Arg12, Arg13> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13);
public:
    FunctionClosure_Arg3_Bind10(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9), m_pa10(pa10) {}
    virtual ~FunctionClosure_Arg3_Bind10() {
        m_function = 0;
    }
    virtual R Run(Arg11 arg11, Arg12 arg12, Arg13 arg13) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg3_Bind10> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, m_pa10, arg11, arg12, arg13);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
    PreArg10 m_pa10;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4
>
class FunctionClosure_Arg4_Bind0 : public Closure<R, Arg1, Arg2, Arg3, Arg4> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4);
public:
    explicit FunctionClosure_Arg4_Bind0(FunctionType function):
        m_function(function) {}
    virtual ~FunctionClosure_Arg4_Bind0() {
        m_function = 0;
    }
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3, Arg4 arg4) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg4_Bind0> self_deleter(this);
        return m_function(arg1, arg2, arg3, arg4);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename PreArg1
>
class FunctionClosure_Arg4_Bind1 : public Closure<R, Arg2, Arg3, Arg4, Arg5> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5);
public:
    FunctionClosure_Arg4_Bind1(FunctionType function, PreArg1 pa1):
        m_function(function), m_pa1(pa1) {}
    virtual ~FunctionClosure_Arg4_Bind1() {
        m_function = 0;
    }
    virtual R Run(Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg4_Bind1> self_deleter(this);
        return m_function(m_pa1, arg2, arg3, arg4, arg5);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename PreArg1,
    typename PreArg2
>
class FunctionClosure_Arg4_Bind2 : public Closure<R, Arg3, Arg4, Arg5, Arg6> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6);
public:
    FunctionClosure_Arg4_Bind2(FunctionType function, PreArg1 pa1, PreArg2 pa2):
        m_function(function), m_pa1(pa1), m_pa2(pa2) {}
    virtual ~FunctionClosure_Arg4_Bind2() {
        m_function = 0;
    }
    virtual R Run(Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg4_Bind2> self_deleter(this);
        return m_function(m_pa1, m_pa2, arg3, arg4, arg5, arg6);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3
>
class FunctionClosure_Arg4_Bind3 : public Closure<R, Arg4, Arg5, Arg6, Arg7> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7);
public:
    FunctionClosure_Arg4_Bind3(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3) {}
    virtual ~FunctionClosure_Arg4_Bind3() {
        m_function = 0;
    }
    virtual R Run(Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg4_Bind3> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, arg4, arg5, arg6, arg7);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4
>
class FunctionClosure_Arg4_Bind4 : public Closure<R, Arg5, Arg6, Arg7, Arg8> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8);
public:
    FunctionClosure_Arg4_Bind4(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4) {}
    virtual ~FunctionClosure_Arg4_Bind4() {
        m_function = 0;
    }
    virtual R Run(Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg4_Bind4> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, arg5, arg6, arg7, arg8);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5
>
class FunctionClosure_Arg4_Bind5 : public Closure<R, Arg6, Arg7, Arg8, Arg9> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9);
public:
    FunctionClosure_Arg4_Bind5(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5) {}
    virtual ~FunctionClosure_Arg4_Bind5() {
        m_function = 0;
    }
    virtual R Run(Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg4_Bind5> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, arg6, arg7, arg8, arg9);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6
>
class FunctionClosure_Arg4_Bind6 : public Closure<R, Arg7, Arg8, Arg9, Arg10> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10);
public:
    FunctionClosure_Arg4_Bind6(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6) {}
    virtual ~FunctionClosure_Arg4_Bind6() {
        m_function = 0;
    }
    virtual R Run(Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg4_Bind6> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, arg7, arg8, arg9, arg10);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7
>
class FunctionClosure_Arg4_Bind7 : public Closure<R, Arg8, Arg9, Arg10, Arg11> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11);
public:
    FunctionClosure_Arg4_Bind7(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7) {}
    virtual ~FunctionClosure_Arg4_Bind7() {
        m_function = 0;
    }
    virtual R Run(Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg4_Bind7> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, arg8, arg9, arg10, arg11);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8
>
class FunctionClosure_Arg4_Bind8 : public Closure<R, Arg9, Arg10, Arg11, Arg12> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12);
public:
    FunctionClosure_Arg4_Bind8(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8) {}
    virtual ~FunctionClosure_Arg4_Bind8() {
        m_function = 0;
    }
    virtual R Run(Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg4_Bind8> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, arg9, arg10, arg11, arg12);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9
>
class FunctionClosure_Arg4_Bind9 : public Closure<R, Arg10, Arg11, Arg12, Arg13> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13);
public:
    FunctionClosure_Arg4_Bind9(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9) {}
    virtual ~FunctionClosure_Arg4_Bind9() {
        m_function = 0;
    }
    virtual R Run(Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg4_Bind9> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, arg10, arg11, arg12, arg13);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9,
    typename PreArg10
>
class FunctionClosure_Arg4_Bind10 : public Closure<R, Arg11, Arg12, Arg13, Arg14> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14);
public:
    FunctionClosure_Arg4_Bind10(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9), m_pa10(pa10) {}
    virtual ~FunctionClosure_Arg4_Bind10() {
        m_function = 0;
    }
    virtual R Run(Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg4_Bind10> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, m_pa10, arg11, arg12, arg13, arg14);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
    PreArg10 m_pa10;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5
>
class FunctionClosure_Arg5_Bind0 : public Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5);
public:
    explicit FunctionClosure_Arg5_Bind0(FunctionType function):
        m_function(function) {}
    virtual ~FunctionClosure_Arg5_Bind0() {
        m_function = 0;
    }
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg5_Bind0> self_deleter(this);
        return m_function(arg1, arg2, arg3, arg4, arg5);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename PreArg1
>
class FunctionClosure_Arg5_Bind1 : public Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6);
public:
    FunctionClosure_Arg5_Bind1(FunctionType function, PreArg1 pa1):
        m_function(function), m_pa1(pa1) {}
    virtual ~FunctionClosure_Arg5_Bind1() {
        m_function = 0;
    }
    virtual R Run(Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg5_Bind1> self_deleter(this);
        return m_function(m_pa1, arg2, arg3, arg4, arg5, arg6);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename PreArg1,
    typename PreArg2
>
class FunctionClosure_Arg5_Bind2 : public Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7);
public:
    FunctionClosure_Arg5_Bind2(FunctionType function, PreArg1 pa1, PreArg2 pa2):
        m_function(function), m_pa1(pa1), m_pa2(pa2) {}
    virtual ~FunctionClosure_Arg5_Bind2() {
        m_function = 0;
    }
    virtual R Run(Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg5_Bind2> self_deleter(this);
        return m_function(m_pa1, m_pa2, arg3, arg4, arg5, arg6, arg7);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3
>
class FunctionClosure_Arg5_Bind3 : public Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8);
public:
    FunctionClosure_Arg5_Bind3(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3) {}
    virtual ~FunctionClosure_Arg5_Bind3() {
        m_function = 0;
    }
    virtual R Run(Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg5_Bind3> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, arg4, arg5, arg6, arg7, arg8);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4
>
class FunctionClosure_Arg5_Bind4 : public Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9);
public:
    FunctionClosure_Arg5_Bind4(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4) {}
    virtual ~FunctionClosure_Arg5_Bind4() {
        m_function = 0;
    }
    virtual R Run(Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg5_Bind4> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, arg5, arg6, arg7, arg8, arg9);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5
>
class FunctionClosure_Arg5_Bind5 : public Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10);
public:
    FunctionClosure_Arg5_Bind5(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5) {}
    virtual ~FunctionClosure_Arg5_Bind5() {
        m_function = 0;
    }
    virtual R Run(Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg5_Bind5> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, arg6, arg7, arg8, arg9, arg10);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6
>
class FunctionClosure_Arg5_Bind6 : public Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11);
public:
    FunctionClosure_Arg5_Bind6(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6) {}
    virtual ~FunctionClosure_Arg5_Bind6() {
        m_function = 0;
    }
    virtual R Run(Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg5_Bind6> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, arg7, arg8, arg9, arg10, arg11);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7
>
class FunctionClosure_Arg5_Bind7 : public Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12);
public:
    FunctionClosure_Arg5_Bind7(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7) {}
    virtual ~FunctionClosure_Arg5_Bind7() {
        m_function = 0;
    }
    virtual R Run(Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg5_Bind7> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, arg8, arg9, arg10, arg11, arg12);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8
>
class FunctionClosure_Arg5_Bind8 : public Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13);
public:
    FunctionClosure_Arg5_Bind8(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8) {}
    virtual ~FunctionClosure_Arg5_Bind8() {
        m_function = 0;
    }
    virtual R Run(Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg5_Bind8> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, arg9, arg10, arg11, arg12, arg13);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9
>
class FunctionClosure_Arg5_Bind9 : public Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14);
public:
    FunctionClosure_Arg5_Bind9(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9) {}
    virtual ~FunctionClosure_Arg5_Bind9() {
        m_function = 0;
    }
    virtual R Run(Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg5_Bind9> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, arg10, arg11, arg12, arg13, arg14);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9,
    typename PreArg10
>
class FunctionClosure_Arg5_Bind10 : public Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15);
public:
    FunctionClosure_Arg5_Bind10(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9), m_pa10(pa10) {}
    virtual ~FunctionClosure_Arg5_Bind10() {
        m_function = 0;
    }
    virtual R Run(Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg5_Bind10> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, m_pa10, arg11, arg12, arg13, arg14, arg15);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
    PreArg10 m_pa10;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6
>
class FunctionClosure_Arg6_Bind0 : public Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6);
public:
    explicit FunctionClosure_Arg6_Bind0(FunctionType function):
        m_function(function) {}
    virtual ~FunctionClosure_Arg6_Bind0() {
        m_function = 0;
    }
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg6_Bind0> self_deleter(this);
        return m_function(arg1, arg2, arg3, arg4, arg5, arg6);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename PreArg1
>
class FunctionClosure_Arg6_Bind1 : public Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7);
public:
    FunctionClosure_Arg6_Bind1(FunctionType function, PreArg1 pa1):
        m_function(function), m_pa1(pa1) {}
    virtual ~FunctionClosure_Arg6_Bind1() {
        m_function = 0;
    }
    virtual R Run(Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg6_Bind1> self_deleter(this);
        return m_function(m_pa1, arg2, arg3, arg4, arg5, arg6, arg7);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename PreArg1,
    typename PreArg2
>
class FunctionClosure_Arg6_Bind2 : public Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8);
public:
    FunctionClosure_Arg6_Bind2(FunctionType function, PreArg1 pa1, PreArg2 pa2):
        m_function(function), m_pa1(pa1), m_pa2(pa2) {}
    virtual ~FunctionClosure_Arg6_Bind2() {
        m_function = 0;
    }
    virtual R Run(Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg6_Bind2> self_deleter(this);
        return m_function(m_pa1, m_pa2, arg3, arg4, arg5, arg6, arg7, arg8);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3
>
class FunctionClosure_Arg6_Bind3 : public Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9);
public:
    FunctionClosure_Arg6_Bind3(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3) {}
    virtual ~FunctionClosure_Arg6_Bind3() {
        m_function = 0;
    }
    virtual R Run(Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg6_Bind3> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, arg4, arg5, arg6, arg7, arg8, arg9);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4
>
class FunctionClosure_Arg6_Bind4 : public Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10);
public:
    FunctionClosure_Arg6_Bind4(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4) {}
    virtual ~FunctionClosure_Arg6_Bind4() {
        m_function = 0;
    }
    virtual R Run(Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg6_Bind4> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, arg5, arg6, arg7, arg8, arg9, arg10);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5
>
class FunctionClosure_Arg6_Bind5 : public Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11);
public:
    FunctionClosure_Arg6_Bind5(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5) {}
    virtual ~FunctionClosure_Arg6_Bind5() {
        m_function = 0;
    }
    virtual R Run(Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg6_Bind5> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, arg6, arg7, arg8, arg9, arg10, arg11);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6
>
class FunctionClosure_Arg6_Bind6 : public Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12);
public:
    FunctionClosure_Arg6_Bind6(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6) {}
    virtual ~FunctionClosure_Arg6_Bind6() {
        m_function = 0;
    }
    virtual R Run(Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg6_Bind6> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, arg7, arg8, arg9, arg10, arg11, arg12);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7
>
class FunctionClosure_Arg6_Bind7 : public Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13);
public:
    FunctionClosure_Arg6_Bind7(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7) {}
    virtual ~FunctionClosure_Arg6_Bind7() {
        m_function = 0;
    }
    virtual R Run(Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg6_Bind7> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, arg8, arg9, arg10, arg11, arg12, arg13);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8
>
class FunctionClosure_Arg6_Bind8 : public Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14);
public:
    FunctionClosure_Arg6_Bind8(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8) {}
    virtual ~FunctionClosure_Arg6_Bind8() {
        m_function = 0;
    }
    virtual R Run(Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg6_Bind8> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, arg9, arg10, arg11, arg12, arg13, arg14);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9
>
class FunctionClosure_Arg6_Bind9 : public Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15);
public:
    FunctionClosure_Arg6_Bind9(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9) {}
    virtual ~FunctionClosure_Arg6_Bind9() {
        m_function = 0;
    }
    virtual R Run(Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg6_Bind9> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, arg10, arg11, arg12, arg13, arg14, arg15);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename Arg16,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9,
    typename PreArg10
>
class FunctionClosure_Arg6_Bind10 : public Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16);
public:
    FunctionClosure_Arg6_Bind10(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9), m_pa10(pa10) {}
    virtual ~FunctionClosure_Arg6_Bind10() {
        m_function = 0;
    }
    virtual R Run(Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg6_Bind10> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, m_pa10, arg11, arg12, arg13, arg14, arg15, arg16);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
    PreArg10 m_pa10;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7
>
class FunctionClosure_Arg7_Bind0 : public Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7);
public:
    explicit FunctionClosure_Arg7_Bind0(FunctionType function):
        m_function(function) {}
    virtual ~FunctionClosure_Arg7_Bind0() {
        m_function = 0;
    }
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg7_Bind0> self_deleter(this);
        return m_function(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename PreArg1
>
class FunctionClosure_Arg7_Bind1 : public Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8);
public:
    FunctionClosure_Arg7_Bind1(FunctionType function, PreArg1 pa1):
        m_function(function), m_pa1(pa1) {}
    virtual ~FunctionClosure_Arg7_Bind1() {
        m_function = 0;
    }
    virtual R Run(Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg7_Bind1> self_deleter(this);
        return m_function(m_pa1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename PreArg1,
    typename PreArg2
>
class FunctionClosure_Arg7_Bind2 : public Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9);
public:
    FunctionClosure_Arg7_Bind2(FunctionType function, PreArg1 pa1, PreArg2 pa2):
        m_function(function), m_pa1(pa1), m_pa2(pa2) {}
    virtual ~FunctionClosure_Arg7_Bind2() {
        m_function = 0;
    }
    virtual R Run(Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg7_Bind2> self_deleter(this);
        return m_function(m_pa1, m_pa2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3
>
class FunctionClosure_Arg7_Bind3 : public Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10);
public:
    FunctionClosure_Arg7_Bind3(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3) {}
    virtual ~FunctionClosure_Arg7_Bind3() {
        m_function = 0;
    }
    virtual R Run(Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg7_Bind3> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4
>
class FunctionClosure_Arg7_Bind4 : public Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11);
public:
    FunctionClosure_Arg7_Bind4(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4) {}
    virtual ~FunctionClosure_Arg7_Bind4() {
        m_function = 0;
    }
    virtual R Run(Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg7_Bind4> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5
>
class FunctionClosure_Arg7_Bind5 : public Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12);
public:
    FunctionClosure_Arg7_Bind5(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5) {}
    virtual ~FunctionClosure_Arg7_Bind5() {
        m_function = 0;
    }
    virtual R Run(Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg7_Bind5> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6
>
class FunctionClosure_Arg7_Bind6 : public Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13);
public:
    FunctionClosure_Arg7_Bind6(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6) {}
    virtual ~FunctionClosure_Arg7_Bind6() {
        m_function = 0;
    }
    virtual R Run(Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg7_Bind6> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7
>
class FunctionClosure_Arg7_Bind7 : public Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14);
public:
    FunctionClosure_Arg7_Bind7(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7) {}
    virtual ~FunctionClosure_Arg7_Bind7() {
        m_function = 0;
    }
    virtual R Run(Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg7_Bind7> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8
>
class FunctionClosure_Arg7_Bind8 : public Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15);
public:
    FunctionClosure_Arg7_Bind8(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8) {}
    virtual ~FunctionClosure_Arg7_Bind8() {
        m_function = 0;
    }
    virtual R Run(Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg7_Bind8> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, arg9, arg10, arg11, arg12, arg13, arg14, arg15);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename Arg16,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9
>
class FunctionClosure_Arg7_Bind9 : public Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16);
public:
    FunctionClosure_Arg7_Bind9(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9) {}
    virtual ~FunctionClosure_Arg7_Bind9() {
        m_function = 0;
    }
    virtual R Run(Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg7_Bind9> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, arg10, arg11, arg12, arg13, arg14, arg15, arg16);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename Arg16,
    typename Arg17,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9,
    typename PreArg10
>
class FunctionClosure_Arg7_Bind10 : public Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17);
public:
    FunctionClosure_Arg7_Bind10(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9), m_pa10(pa10) {}
    virtual ~FunctionClosure_Arg7_Bind10() {
        m_function = 0;
    }
    virtual R Run(Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16, Arg17 arg17) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg7_Bind10> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, m_pa10, arg11, arg12, arg13, arg14, arg15, arg16, arg17);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
    PreArg10 m_pa10;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8
>
class FunctionClosure_Arg8_Bind0 : public Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8);
public:
    explicit FunctionClosure_Arg8_Bind0(FunctionType function):
        m_function(function) {}
    virtual ~FunctionClosure_Arg8_Bind0() {
        m_function = 0;
    }
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg8_Bind0> self_deleter(this);
        return m_function(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename PreArg1
>
class FunctionClosure_Arg8_Bind1 : public Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9);
public:
    FunctionClosure_Arg8_Bind1(FunctionType function, PreArg1 pa1):
        m_function(function), m_pa1(pa1) {}
    virtual ~FunctionClosure_Arg8_Bind1() {
        m_function = 0;
    }
    virtual R Run(Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg8_Bind1> self_deleter(this);
        return m_function(m_pa1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename PreArg1,
    typename PreArg2
>
class FunctionClosure_Arg8_Bind2 : public Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10);
public:
    FunctionClosure_Arg8_Bind2(FunctionType function, PreArg1 pa1, PreArg2 pa2):
        m_function(function), m_pa1(pa1), m_pa2(pa2) {}
    virtual ~FunctionClosure_Arg8_Bind2() {
        m_function = 0;
    }
    virtual R Run(Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg8_Bind2> self_deleter(this);
        return m_function(m_pa1, m_pa2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3
>
class FunctionClosure_Arg8_Bind3 : public Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11);
public:
    FunctionClosure_Arg8_Bind3(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3) {}
    virtual ~FunctionClosure_Arg8_Bind3() {
        m_function = 0;
    }
    virtual R Run(Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg8_Bind3> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4
>
class FunctionClosure_Arg8_Bind4 : public Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12);
public:
    FunctionClosure_Arg8_Bind4(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4) {}
    virtual ~FunctionClosure_Arg8_Bind4() {
        m_function = 0;
    }
    virtual R Run(Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg8_Bind4> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5
>
class FunctionClosure_Arg8_Bind5 : public Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13);
public:
    FunctionClosure_Arg8_Bind5(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5) {}
    virtual ~FunctionClosure_Arg8_Bind5() {
        m_function = 0;
    }
    virtual R Run(Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg8_Bind5> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6
>
class FunctionClosure_Arg8_Bind6 : public Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14);
public:
    FunctionClosure_Arg8_Bind6(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6) {}
    virtual ~FunctionClosure_Arg8_Bind6() {
        m_function = 0;
    }
    virtual R Run(Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg8_Bind6> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7
>
class FunctionClosure_Arg8_Bind7 : public Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15);
public:
    FunctionClosure_Arg8_Bind7(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7) {}
    virtual ~FunctionClosure_Arg8_Bind7() {
        m_function = 0;
    }
    virtual R Run(Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg8_Bind7> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename Arg16,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8
>
class FunctionClosure_Arg8_Bind8 : public Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16);
public:
    FunctionClosure_Arg8_Bind8(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8) {}
    virtual ~FunctionClosure_Arg8_Bind8() {
        m_function = 0;
    }
    virtual R Run(Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg8_Bind8> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename Arg16,
    typename Arg17,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9
>
class FunctionClosure_Arg8_Bind9 : public Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17);
public:
    FunctionClosure_Arg8_Bind9(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9) {}
    virtual ~FunctionClosure_Arg8_Bind9() {
        m_function = 0;
    }
    virtual R Run(Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16, Arg17 arg17) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg8_Bind9> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename Arg16,
    typename Arg17,
    typename Arg18,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9,
    typename PreArg10
>
class FunctionClosure_Arg8_Bind10 : public Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18);
public:
    FunctionClosure_Arg8_Bind10(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9), m_pa10(pa10) {}
    virtual ~FunctionClosure_Arg8_Bind10() {
        m_function = 0;
    }
    virtual R Run(Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16, Arg17 arg17, Arg18 arg18) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg8_Bind10> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, m_pa10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
    PreArg10 m_pa10;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9
>
class FunctionClosure_Arg9_Bind0 : public Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9);
public:
    explicit FunctionClosure_Arg9_Bind0(FunctionType function):
        m_function(function) {}
    virtual ~FunctionClosure_Arg9_Bind0() {
        m_function = 0;
    }
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg9_Bind0> self_deleter(this);
        return m_function(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename PreArg1
>
class FunctionClosure_Arg9_Bind1 : public Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10);
public:
    FunctionClosure_Arg9_Bind1(FunctionType function, PreArg1 pa1):
        m_function(function), m_pa1(pa1) {}
    virtual ~FunctionClosure_Arg9_Bind1() {
        m_function = 0;
    }
    virtual R Run(Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg9_Bind1> self_deleter(this);
        return m_function(m_pa1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename PreArg1,
    typename PreArg2
>
class FunctionClosure_Arg9_Bind2 : public Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11);
public:
    FunctionClosure_Arg9_Bind2(FunctionType function, PreArg1 pa1, PreArg2 pa2):
        m_function(function), m_pa1(pa1), m_pa2(pa2) {}
    virtual ~FunctionClosure_Arg9_Bind2() {
        m_function = 0;
    }
    virtual R Run(Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg9_Bind2> self_deleter(this);
        return m_function(m_pa1, m_pa2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3
>
class FunctionClosure_Arg9_Bind3 : public Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12);
public:
    FunctionClosure_Arg9_Bind3(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3) {}
    virtual ~FunctionClosure_Arg9_Bind3() {
        m_function = 0;
    }
    virtual R Run(Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg9_Bind3> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4
>
class FunctionClosure_Arg9_Bind4 : public Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13);
public:
    FunctionClosure_Arg9_Bind4(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4) {}
    virtual ~FunctionClosure_Arg9_Bind4() {
        m_function = 0;
    }
    virtual R Run(Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg9_Bind4> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5
>
class FunctionClosure_Arg9_Bind5 : public Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14);
public:
    FunctionClosure_Arg9_Bind5(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5) {}
    virtual ~FunctionClosure_Arg9_Bind5() {
        m_function = 0;
    }
    virtual R Run(Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg9_Bind5> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6
>
class FunctionClosure_Arg9_Bind6 : public Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15);
public:
    FunctionClosure_Arg9_Bind6(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6) {}
    virtual ~FunctionClosure_Arg9_Bind6() {
        m_function = 0;
    }
    virtual R Run(Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg9_Bind6> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename Arg16,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7
>
class FunctionClosure_Arg9_Bind7 : public Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16);
public:
    FunctionClosure_Arg9_Bind7(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7) {}
    virtual ~FunctionClosure_Arg9_Bind7() {
        m_function = 0;
    }
    virtual R Run(Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg9_Bind7> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename Arg16,
    typename Arg17,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8
>
class FunctionClosure_Arg9_Bind8 : public Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17);
public:
    FunctionClosure_Arg9_Bind8(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8) {}
    virtual ~FunctionClosure_Arg9_Bind8() {
        m_function = 0;
    }
    virtual R Run(Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16, Arg17 arg17) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg9_Bind8> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename Arg16,
    typename Arg17,
    typename Arg18,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9
>
class FunctionClosure_Arg9_Bind9 : public Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18);
public:
    FunctionClosure_Arg9_Bind9(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9) {}
    virtual ~FunctionClosure_Arg9_Bind9() {
        m_function = 0;
    }
    virtual R Run(Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16, Arg17 arg17, Arg18 arg18) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg9_Bind9> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename Arg16,
    typename Arg17,
    typename Arg18,
    typename Arg19,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9,
    typename PreArg10
>
class FunctionClosure_Arg9_Bind10 : public Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19);
public:
    FunctionClosure_Arg9_Bind10(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9), m_pa10(pa10) {}
    virtual ~FunctionClosure_Arg9_Bind10() {
        m_function = 0;
    }
    virtual R Run(Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16, Arg17 arg17, Arg18 arg18, Arg19 arg19) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg9_Bind10> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, m_pa10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
    PreArg10 m_pa10;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10
>
class FunctionClosure_Arg10_Bind0 : public Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10);
public:
    explicit FunctionClosure_Arg10_Bind0(FunctionType function):
        m_function(function) {}
    virtual ~FunctionClosure_Arg10_Bind0() {
        m_function = 0;
    }
    virtual R Run(Arg1 arg1, Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg10_Bind0> self_deleter(this);
        return m_function(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename PreArg1
>
class FunctionClosure_Arg10_Bind1 : public Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11);
public:
    FunctionClosure_Arg10_Bind1(FunctionType function, PreArg1 pa1):
        m_function(function), m_pa1(pa1) {}
    virtual ~FunctionClosure_Arg10_Bind1() {
        m_function = 0;
    }
    virtual R Run(Arg2 arg2, Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg10_Bind1> self_deleter(this);
        return m_function(m_pa1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename PreArg1,
    typename PreArg2
>
class FunctionClosure_Arg10_Bind2 : public Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12);
public:
    FunctionClosure_Arg10_Bind2(FunctionType function, PreArg1 pa1, PreArg2 pa2):
        m_function(function), m_pa1(pa1), m_pa2(pa2) {}
    virtual ~FunctionClosure_Arg10_Bind2() {
        m_function = 0;
    }
    virtual R Run(Arg3 arg3, Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg10_Bind2> self_deleter(this);
        return m_function(m_pa1, m_pa2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3
>
class FunctionClosure_Arg10_Bind3 : public Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13);
public:
    FunctionClosure_Arg10_Bind3(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3) {}
    virtual ~FunctionClosure_Arg10_Bind3() {
        m_function = 0;
    }
    virtual R Run(Arg4 arg4, Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg10_Bind3> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4
>
class FunctionClosure_Arg10_Bind4 : public Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14);
public:
    FunctionClosure_Arg10_Bind4(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4) {}
    virtual ~FunctionClosure_Arg10_Bind4() {
        m_function = 0;
    }
    virtual R Run(Arg5 arg5, Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg10_Bind4> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5
>
class FunctionClosure_Arg10_Bind5 : public Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15);
public:
    FunctionClosure_Arg10_Bind5(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5) {}
    virtual ~FunctionClosure_Arg10_Bind5() {
        m_function = 0;
    }
    virtual R Run(Arg6 arg6, Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg10_Bind5> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename Arg16,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6
>
class FunctionClosure_Arg10_Bind6 : public Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16);
public:
    FunctionClosure_Arg10_Bind6(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6) {}
    virtual ~FunctionClosure_Arg10_Bind6() {
        m_function = 0;
    }
    virtual R Run(Arg7 arg7, Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg10_Bind6> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename Arg16,
    typename Arg17,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7
>
class FunctionClosure_Arg10_Bind7 : public Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17);
public:
    FunctionClosure_Arg10_Bind7(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7) {}
    virtual ~FunctionClosure_Arg10_Bind7() {
        m_function = 0;
    }
    virtual R Run(Arg8 arg8, Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16, Arg17 arg17) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg10_Bind7> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename Arg16,
    typename Arg17,
    typename Arg18,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8
>
class FunctionClosure_Arg10_Bind8 : public Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18);
public:
    FunctionClosure_Arg10_Bind8(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8) {}
    virtual ~FunctionClosure_Arg10_Bind8() {
        m_function = 0;
    }
    virtual R Run(Arg9 arg9, Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16, Arg17 arg17, Arg18 arg18) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg10_Bind8> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, arg9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename Arg16,
    typename Arg17,
    typename Arg18,
    typename Arg19,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9
>
class FunctionClosure_Arg10_Bind9 : public Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19);
public:
    FunctionClosure_Arg10_Bind9(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9) {}
    virtual ~FunctionClosure_Arg10_Bind9() {
        m_function = 0;
    }
    virtual R Run(Arg10 arg10, Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16, Arg17 arg17, Arg18 arg18, Arg19 arg19) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg10_Bind9> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, arg10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
};

template <
    bool SelfDeleting,
    typename R,
    typename Arg1,
    typename Arg2,
    typename Arg3,
    typename Arg4,
    typename Arg5,
    typename Arg6,
    typename Arg7,
    typename Arg8,
    typename Arg9,
    typename Arg10,
    typename Arg11,
    typename Arg12,
    typename Arg13,
    typename Arg14,
    typename Arg15,
    typename Arg16,
    typename Arg17,
    typename Arg18,
    typename Arg19,
    typename Arg20,
    typename PreArg1,
    typename PreArg2,
    typename PreArg3,
    typename PreArg4,
    typename PreArg5,
    typename PreArg6,
    typename PreArg7,
    typename PreArg8,
    typename PreArg9,
    typename PreArg10
>
class FunctionClosure_Arg10_Bind10 : public Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19, Arg20> {
    typedef R (*FunctionType)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19, Arg20);
public:
    FunctionClosure_Arg10_Bind10(FunctionType function, PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10):
        m_function(function), m_pa1(pa1), m_pa2(pa2), m_pa3(pa3), m_pa4(pa4), m_pa5(pa5), m_pa6(pa6), m_pa7(pa7), m_pa8(pa8), m_pa9(pa9), m_pa10(pa10) {}
    virtual ~FunctionClosure_Arg10_Bind10() {
        m_function = 0;
    }
    virtual R Run(Arg11 arg11, Arg12 arg12, Arg13 arg13, Arg14 arg14, Arg15 arg15, Arg16 arg16, Arg17 arg17, Arg18 arg18, Arg19 arg19, Arg20 arg20) {
        ConditionalAutoDeleter<SelfDeleting, FunctionClosure_Arg10_Bind10> self_deleter(this);
        return m_function(m_pa1, m_pa2, m_pa3, m_pa4, m_pa5, m_pa6, m_pa7, m_pa8, m_pa9, m_pa10, arg11, arg12, arg13, arg14, arg15, arg16, arg17, arg18, arg19, arg20);
    }
    virtual bool IsSelfDelete() const { return SelfDeleting; }
private:
    FunctionType m_function;
    PreArg1 m_pa1;
    PreArg2 m_pa2;
    PreArg3 m_pa3;
    PreArg4 m_pa4;
    PreArg5 m_pa5;
    PreArg6 m_pa6;
    PreArg7 m_pa7;
    PreArg8 m_pa8;
    PreArg9 m_pa9;
    PreArg10 m_pa10;
};

////////////////////////////////////////////////////
//////// Closure create helper functions /////////////
////////////////////////////////////////////////////
//////////// for class method ////////////////////////

template <typename R, typename Class, typename MethodClass>
Closure<R>*NewClosure(Class *object, R (MethodClass::*method)()) {
    return new MethodClosure_Arg0_Bind0<true, R, Class, MethodClass>(object, method);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename PreArg1>
Closure<R>*NewClosure(Class *object, R (MethodClass::*method)(Arg1), PreArg1 pa1) {
    return new MethodClosure_Arg0_Bind1<true, R, Class, MethodClass, Arg1, PreArg1>(object, method, pa1);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename PreArg1, typename PreArg2>
Closure<R>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2), PreArg1 pa1, PreArg2 pa2) {
    return new MethodClosure_Arg0_Bind2<true, R, Class, MethodClass, Arg1, Arg2, PreArg1, PreArg2>(object, method, pa1, pa2);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new MethodClosure_Arg0_Bind3<true, R, Class, MethodClass, Arg1, Arg2, Arg3, PreArg1, PreArg2, PreArg3>(object, method, pa1, pa2, pa3);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new MethodClosure_Arg0_Bind4<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, PreArg1, PreArg2, PreArg3, PreArg4>(object, method, pa1, pa2, pa3, pa4);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new MethodClosure_Arg0_Bind5<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(object, method, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new MethodClosure_Arg0_Bind6<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(object, method, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new MethodClosure_Arg0_Bind7<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new MethodClosure_Arg0_Bind8<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new MethodClosure_Arg0_Bind9<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new MethodClosure_Arg0_Bind10<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Class, typename MethodClass, typename Arg1>
Closure<R, Arg1>*NewClosure(Class *object, R (MethodClass::*method)(Arg1)) {
    return new MethodClosure_Arg1_Bind0<true, R, Class, MethodClass, Arg1>(object, method);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename PreArg1>
Closure<R, Arg2>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2), PreArg1 pa1) {
    return new MethodClosure_Arg1_Bind1<true, R, Class, MethodClass, Arg1, Arg2, PreArg1>(object, method, pa1);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename PreArg1, typename PreArg2>
Closure<R, Arg3>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3), PreArg1 pa1, PreArg2 pa2) {
    return new MethodClosure_Arg1_Bind2<true, R, Class, MethodClass, Arg1, Arg2, Arg3, PreArg1, PreArg2>(object, method, pa1, pa2);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new MethodClosure_Arg1_Bind3<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, PreArg1, PreArg2, PreArg3>(object, method, pa1, pa2, pa3);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new MethodClosure_Arg1_Bind4<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, PreArg1, PreArg2, PreArg3, PreArg4>(object, method, pa1, pa2, pa3, pa4);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new MethodClosure_Arg1_Bind5<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(object, method, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new MethodClosure_Arg1_Bind6<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(object, method, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new MethodClosure_Arg1_Bind7<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new MethodClosure_Arg1_Bind8<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new MethodClosure_Arg1_Bind9<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new MethodClosure_Arg1_Bind10<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2>
Closure<R, Arg1, Arg2>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2)) {
    return new MethodClosure_Arg2_Bind0<true, R, Class, MethodClass, Arg1, Arg2>(object, method);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename PreArg1>
Closure<R, Arg2, Arg3>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3), PreArg1 pa1) {
    return new MethodClosure_Arg2_Bind1<true, R, Class, MethodClass, Arg1, Arg2, Arg3, PreArg1>(object, method, pa1);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4), PreArg1 pa1, PreArg2 pa2) {
    return new MethodClosure_Arg2_Bind2<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, PreArg1, PreArg2>(object, method, pa1, pa2);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new MethodClosure_Arg2_Bind3<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, PreArg1, PreArg2, PreArg3>(object, method, pa1, pa2, pa3);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new MethodClosure_Arg2_Bind4<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, PreArg1, PreArg2, PreArg3, PreArg4>(object, method, pa1, pa2, pa3, pa4);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new MethodClosure_Arg2_Bind5<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(object, method, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new MethodClosure_Arg2_Bind6<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(object, method, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new MethodClosure_Arg2_Bind7<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new MethodClosure_Arg2_Bind8<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new MethodClosure_Arg2_Bind9<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new MethodClosure_Arg2_Bind10<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3>
Closure<R, Arg1, Arg2, Arg3>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3)) {
    return new MethodClosure_Arg3_Bind0<true, R, Class, MethodClass, Arg1, Arg2, Arg3>(object, method);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename PreArg1>
Closure<R, Arg2, Arg3, Arg4>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4), PreArg1 pa1) {
    return new MethodClosure_Arg3_Bind1<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, PreArg1>(object, method, pa1);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4, Arg5>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5), PreArg1 pa1, PreArg2 pa2) {
    return new MethodClosure_Arg3_Bind2<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, PreArg1, PreArg2>(object, method, pa1, pa2);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5, Arg6>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new MethodClosure_Arg3_Bind3<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, PreArg1, PreArg2, PreArg3>(object, method, pa1, pa2, pa3);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6, Arg7>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new MethodClosure_Arg3_Bind4<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, PreArg1, PreArg2, PreArg3, PreArg4>(object, method, pa1, pa2, pa3, pa4);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7, Arg8>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new MethodClosure_Arg3_Bind5<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(object, method, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8, Arg9>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new MethodClosure_Arg3_Bind6<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(object, method, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9, Arg10>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new MethodClosure_Arg3_Bind7<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10, Arg11>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new MethodClosure_Arg3_Bind8<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11, Arg12>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new MethodClosure_Arg3_Bind9<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12, Arg13>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new MethodClosure_Arg3_Bind10<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4>
Closure<R, Arg1, Arg2, Arg3, Arg4>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4)) {
    return new MethodClosure_Arg4_Bind0<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4>(object, method);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename PreArg1>
Closure<R, Arg2, Arg3, Arg4, Arg5>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5), PreArg1 pa1) {
    return new MethodClosure_Arg4_Bind1<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, PreArg1>(object, method, pa1);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4, Arg5, Arg6>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6), PreArg1 pa1, PreArg2 pa2) {
    return new MethodClosure_Arg4_Bind2<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, PreArg1, PreArg2>(object, method, pa1, pa2);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5, Arg6, Arg7>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new MethodClosure_Arg4_Bind3<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, PreArg1, PreArg2, PreArg3>(object, method, pa1, pa2, pa3);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6, Arg7, Arg8>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new MethodClosure_Arg4_Bind4<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, PreArg1, PreArg2, PreArg3, PreArg4>(object, method, pa1, pa2, pa3, pa4);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7, Arg8, Arg9>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new MethodClosure_Arg4_Bind5<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(object, method, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8, Arg9, Arg10>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new MethodClosure_Arg4_Bind6<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(object, method, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9, Arg10, Arg11>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new MethodClosure_Arg4_Bind7<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10, Arg11, Arg12>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new MethodClosure_Arg4_Bind8<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11, Arg12, Arg13>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new MethodClosure_Arg4_Bind9<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12, Arg13, Arg14>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new MethodClosure_Arg4_Bind10<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5>
Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5)) {
    return new MethodClosure_Arg5_Bind0<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5>(object, method);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename PreArg1>
Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6), PreArg1 pa1) {
    return new MethodClosure_Arg5_Bind1<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, PreArg1>(object, method, pa1);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7), PreArg1 pa1, PreArg2 pa2) {
    return new MethodClosure_Arg5_Bind2<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, PreArg1, PreArg2>(object, method, pa1, pa2);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new MethodClosure_Arg5_Bind3<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, PreArg1, PreArg2, PreArg3>(object, method, pa1, pa2, pa3);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new MethodClosure_Arg5_Bind4<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1, PreArg2, PreArg3, PreArg4>(object, method, pa1, pa2, pa3, pa4);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new MethodClosure_Arg5_Bind5<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(object, method, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new MethodClosure_Arg5_Bind6<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(object, method, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new MethodClosure_Arg5_Bind7<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new MethodClosure_Arg5_Bind8<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new MethodClosure_Arg5_Bind9<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new MethodClosure_Arg5_Bind10<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6>
Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6)) {
    return new MethodClosure_Arg6_Bind0<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6>(object, method);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename PreArg1>
Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7), PreArg1 pa1) {
    return new MethodClosure_Arg6_Bind1<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, PreArg1>(object, method, pa1);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), PreArg1 pa1, PreArg2 pa2) {
    return new MethodClosure_Arg6_Bind2<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, PreArg1, PreArg2>(object, method, pa1, pa2);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new MethodClosure_Arg6_Bind3<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1, PreArg2, PreArg3>(object, method, pa1, pa2, pa3);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new MethodClosure_Arg6_Bind4<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2, PreArg3, PreArg4>(object, method, pa1, pa2, pa3, pa4);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new MethodClosure_Arg6_Bind5<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(object, method, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new MethodClosure_Arg6_Bind6<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(object, method, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new MethodClosure_Arg6_Bind7<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new MethodClosure_Arg6_Bind8<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new MethodClosure_Arg6_Bind9<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new MethodClosure_Arg6_Bind10<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7>
Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7)) {
    return new MethodClosure_Arg7_Bind0<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7>(object, method);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename PreArg1>
Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), PreArg1 pa1) {
    return new MethodClosure_Arg7_Bind1<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, PreArg1>(object, method, pa1);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1, PreArg2 pa2) {
    return new MethodClosure_Arg7_Bind2<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1, PreArg2>(object, method, pa1, pa2);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new MethodClosure_Arg7_Bind3<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2, PreArg3>(object, method, pa1, pa2, pa3);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new MethodClosure_Arg7_Bind4<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2, PreArg3, PreArg4>(object, method, pa1, pa2, pa3, pa4);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new MethodClosure_Arg7_Bind5<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(object, method, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new MethodClosure_Arg7_Bind6<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(object, method, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new MethodClosure_Arg7_Bind7<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new MethodClosure_Arg7_Bind8<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new MethodClosure_Arg7_Bind9<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new MethodClosure_Arg7_Bind10<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8>
Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8)) {
    return new MethodClosure_Arg8_Bind0<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8>(object, method);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1>
Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1) {
    return new MethodClosure_Arg8_Bind1<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1>(object, method, pa1);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2) {
    return new MethodClosure_Arg8_Bind2<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2>(object, method, pa1, pa2);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new MethodClosure_Arg8_Bind3<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2, PreArg3>(object, method, pa1, pa2, pa3);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new MethodClosure_Arg8_Bind4<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2, PreArg3, PreArg4>(object, method, pa1, pa2, pa3, pa4);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new MethodClosure_Arg8_Bind5<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(object, method, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new MethodClosure_Arg8_Bind6<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(object, method, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new MethodClosure_Arg8_Bind7<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new MethodClosure_Arg8_Bind8<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new MethodClosure_Arg8_Bind9<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename Arg18, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new MethodClosure_Arg8_Bind10<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9>
Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9)) {
    return new MethodClosure_Arg9_Bind0<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9>(object, method);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1>
Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1) {
    return new MethodClosure_Arg9_Bind1<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1>(object, method, pa1);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2) {
    return new MethodClosure_Arg9_Bind2<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2>(object, method, pa1, pa2);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new MethodClosure_Arg9_Bind3<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2, PreArg3>(object, method, pa1, pa2, pa3);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new MethodClosure_Arg9_Bind4<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, PreArg1, PreArg2, PreArg3, PreArg4>(object, method, pa1, pa2, pa3, pa4);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new MethodClosure_Arg9_Bind5<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(object, method, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new MethodClosure_Arg9_Bind6<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(object, method, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new MethodClosure_Arg9_Bind7<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new MethodClosure_Arg9_Bind8<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename Arg18, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new MethodClosure_Arg9_Bind9<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename Arg18, typename Arg19, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new MethodClosure_Arg9_Bind10<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10>
Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10)) {
    return new MethodClosure_Arg10_Bind0<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10>(object, method);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1>
Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1) {
    return new MethodClosure_Arg10_Bind1<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1>(object, method, pa1);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2) {
    return new MethodClosure_Arg10_Bind2<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2>(object, method, pa1, pa2);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new MethodClosure_Arg10_Bind3<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, PreArg1, PreArg2, PreArg3>(object, method, pa1, pa2, pa3);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new MethodClosure_Arg10_Bind4<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, PreArg1, PreArg2, PreArg3, PreArg4>(object, method, pa1, pa2, pa3, pa4);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new MethodClosure_Arg10_Bind5<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(object, method, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new MethodClosure_Arg10_Bind6<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(object, method, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new MethodClosure_Arg10_Bind7<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename Arg18, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new MethodClosure_Arg10_Bind8<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename Arg18, typename Arg19, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new MethodClosure_Arg10_Bind9<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename Arg18, typename Arg19, typename Arg20, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19, Arg20>*NewClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19, Arg20), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new MethodClosure_Arg10_Bind10<true, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19, Arg20, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

////////////////////////////////////////////////////
//////// Closure create helper functions /////////////
////////////////////////////////////////////////////
//////////// for class method ////////////////////////

template <typename R, typename Class, typename MethodClass>
Closure<R>*NewPermanentClosure(Class *object, R (MethodClass::*method)()) {
    return new MethodClosure_Arg0_Bind0<false, R, Class, MethodClass>(object, method);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename PreArg1>
Closure<R>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1), PreArg1 pa1) {
    return new MethodClosure_Arg0_Bind1<false, R, Class, MethodClass, Arg1, PreArg1>(object, method, pa1);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename PreArg1, typename PreArg2>
Closure<R>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2), PreArg1 pa1, PreArg2 pa2) {
    return new MethodClosure_Arg0_Bind2<false, R, Class, MethodClass, Arg1, Arg2, PreArg1, PreArg2>(object, method, pa1, pa2);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new MethodClosure_Arg0_Bind3<false, R, Class, MethodClass, Arg1, Arg2, Arg3, PreArg1, PreArg2, PreArg3>(object, method, pa1, pa2, pa3);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new MethodClosure_Arg0_Bind4<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, PreArg1, PreArg2, PreArg3, PreArg4>(object, method, pa1, pa2, pa3, pa4);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new MethodClosure_Arg0_Bind5<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(object, method, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new MethodClosure_Arg0_Bind6<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(object, method, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new MethodClosure_Arg0_Bind7<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new MethodClosure_Arg0_Bind8<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new MethodClosure_Arg0_Bind9<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new MethodClosure_Arg0_Bind10<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Class, typename MethodClass, typename Arg1>
Closure<R, Arg1>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1)) {
    return new MethodClosure_Arg1_Bind0<false, R, Class, MethodClass, Arg1>(object, method);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename PreArg1>
Closure<R, Arg2>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2), PreArg1 pa1) {
    return new MethodClosure_Arg1_Bind1<false, R, Class, MethodClass, Arg1, Arg2, PreArg1>(object, method, pa1);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename PreArg1, typename PreArg2>
Closure<R, Arg3>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3), PreArg1 pa1, PreArg2 pa2) {
    return new MethodClosure_Arg1_Bind2<false, R, Class, MethodClass, Arg1, Arg2, Arg3, PreArg1, PreArg2>(object, method, pa1, pa2);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new MethodClosure_Arg1_Bind3<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, PreArg1, PreArg2, PreArg3>(object, method, pa1, pa2, pa3);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new MethodClosure_Arg1_Bind4<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, PreArg1, PreArg2, PreArg3, PreArg4>(object, method, pa1, pa2, pa3, pa4);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new MethodClosure_Arg1_Bind5<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(object, method, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new MethodClosure_Arg1_Bind6<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(object, method, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new MethodClosure_Arg1_Bind7<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new MethodClosure_Arg1_Bind8<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new MethodClosure_Arg1_Bind9<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new MethodClosure_Arg1_Bind10<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2>
Closure<R, Arg1, Arg2>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2)) {
    return new MethodClosure_Arg2_Bind0<false, R, Class, MethodClass, Arg1, Arg2>(object, method);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename PreArg1>
Closure<R, Arg2, Arg3>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3), PreArg1 pa1) {
    return new MethodClosure_Arg2_Bind1<false, R, Class, MethodClass, Arg1, Arg2, Arg3, PreArg1>(object, method, pa1);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4), PreArg1 pa1, PreArg2 pa2) {
    return new MethodClosure_Arg2_Bind2<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, PreArg1, PreArg2>(object, method, pa1, pa2);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new MethodClosure_Arg2_Bind3<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, PreArg1, PreArg2, PreArg3>(object, method, pa1, pa2, pa3);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new MethodClosure_Arg2_Bind4<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, PreArg1, PreArg2, PreArg3, PreArg4>(object, method, pa1, pa2, pa3, pa4);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new MethodClosure_Arg2_Bind5<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(object, method, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new MethodClosure_Arg2_Bind6<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(object, method, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new MethodClosure_Arg2_Bind7<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new MethodClosure_Arg2_Bind8<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new MethodClosure_Arg2_Bind9<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new MethodClosure_Arg2_Bind10<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3>
Closure<R, Arg1, Arg2, Arg3>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3)) {
    return new MethodClosure_Arg3_Bind0<false, R, Class, MethodClass, Arg1, Arg2, Arg3>(object, method);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename PreArg1>
Closure<R, Arg2, Arg3, Arg4>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4), PreArg1 pa1) {
    return new MethodClosure_Arg3_Bind1<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, PreArg1>(object, method, pa1);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4, Arg5>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5), PreArg1 pa1, PreArg2 pa2) {
    return new MethodClosure_Arg3_Bind2<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, PreArg1, PreArg2>(object, method, pa1, pa2);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5, Arg6>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new MethodClosure_Arg3_Bind3<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, PreArg1, PreArg2, PreArg3>(object, method, pa1, pa2, pa3);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6, Arg7>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new MethodClosure_Arg3_Bind4<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, PreArg1, PreArg2, PreArg3, PreArg4>(object, method, pa1, pa2, pa3, pa4);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7, Arg8>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new MethodClosure_Arg3_Bind5<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(object, method, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8, Arg9>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new MethodClosure_Arg3_Bind6<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(object, method, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9, Arg10>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new MethodClosure_Arg3_Bind7<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10, Arg11>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new MethodClosure_Arg3_Bind8<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11, Arg12>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new MethodClosure_Arg3_Bind9<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12, Arg13>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new MethodClosure_Arg3_Bind10<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4>
Closure<R, Arg1, Arg2, Arg3, Arg4>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4)) {
    return new MethodClosure_Arg4_Bind0<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4>(object, method);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename PreArg1>
Closure<R, Arg2, Arg3, Arg4, Arg5>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5), PreArg1 pa1) {
    return new MethodClosure_Arg4_Bind1<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, PreArg1>(object, method, pa1);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4, Arg5, Arg6>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6), PreArg1 pa1, PreArg2 pa2) {
    return new MethodClosure_Arg4_Bind2<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, PreArg1, PreArg2>(object, method, pa1, pa2);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5, Arg6, Arg7>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new MethodClosure_Arg4_Bind3<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, PreArg1, PreArg2, PreArg3>(object, method, pa1, pa2, pa3);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6, Arg7, Arg8>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new MethodClosure_Arg4_Bind4<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, PreArg1, PreArg2, PreArg3, PreArg4>(object, method, pa1, pa2, pa3, pa4);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7, Arg8, Arg9>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new MethodClosure_Arg4_Bind5<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(object, method, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8, Arg9, Arg10>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new MethodClosure_Arg4_Bind6<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(object, method, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9, Arg10, Arg11>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new MethodClosure_Arg4_Bind7<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10, Arg11, Arg12>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new MethodClosure_Arg4_Bind8<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11, Arg12, Arg13>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new MethodClosure_Arg4_Bind9<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12, Arg13, Arg14>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new MethodClosure_Arg4_Bind10<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5>
Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5)) {
    return new MethodClosure_Arg5_Bind0<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5>(object, method);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename PreArg1>
Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6), PreArg1 pa1) {
    return new MethodClosure_Arg5_Bind1<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, PreArg1>(object, method, pa1);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7), PreArg1 pa1, PreArg2 pa2) {
    return new MethodClosure_Arg5_Bind2<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, PreArg1, PreArg2>(object, method, pa1, pa2);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new MethodClosure_Arg5_Bind3<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, PreArg1, PreArg2, PreArg3>(object, method, pa1, pa2, pa3);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new MethodClosure_Arg5_Bind4<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1, PreArg2, PreArg3, PreArg4>(object, method, pa1, pa2, pa3, pa4);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new MethodClosure_Arg5_Bind5<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(object, method, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new MethodClosure_Arg5_Bind6<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(object, method, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new MethodClosure_Arg5_Bind7<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new MethodClosure_Arg5_Bind8<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new MethodClosure_Arg5_Bind9<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new MethodClosure_Arg5_Bind10<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6>
Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6)) {
    return new MethodClosure_Arg6_Bind0<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6>(object, method);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename PreArg1>
Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7), PreArg1 pa1) {
    return new MethodClosure_Arg6_Bind1<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, PreArg1>(object, method, pa1);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), PreArg1 pa1, PreArg2 pa2) {
    return new MethodClosure_Arg6_Bind2<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, PreArg1, PreArg2>(object, method, pa1, pa2);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new MethodClosure_Arg6_Bind3<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1, PreArg2, PreArg3>(object, method, pa1, pa2, pa3);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new MethodClosure_Arg6_Bind4<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2, PreArg3, PreArg4>(object, method, pa1, pa2, pa3, pa4);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new MethodClosure_Arg6_Bind5<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(object, method, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new MethodClosure_Arg6_Bind6<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(object, method, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new MethodClosure_Arg6_Bind7<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new MethodClosure_Arg6_Bind8<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new MethodClosure_Arg6_Bind9<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new MethodClosure_Arg6_Bind10<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7>
Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7)) {
    return new MethodClosure_Arg7_Bind0<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7>(object, method);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename PreArg1>
Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), PreArg1 pa1) {
    return new MethodClosure_Arg7_Bind1<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, PreArg1>(object, method, pa1);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1, PreArg2 pa2) {
    return new MethodClosure_Arg7_Bind2<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1, PreArg2>(object, method, pa1, pa2);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new MethodClosure_Arg7_Bind3<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2, PreArg3>(object, method, pa1, pa2, pa3);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new MethodClosure_Arg7_Bind4<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2, PreArg3, PreArg4>(object, method, pa1, pa2, pa3, pa4);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new MethodClosure_Arg7_Bind5<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(object, method, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new MethodClosure_Arg7_Bind6<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(object, method, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new MethodClosure_Arg7_Bind7<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new MethodClosure_Arg7_Bind8<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new MethodClosure_Arg7_Bind9<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new MethodClosure_Arg7_Bind10<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8>
Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8)) {
    return new MethodClosure_Arg8_Bind0<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8>(object, method);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1>
Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1) {
    return new MethodClosure_Arg8_Bind1<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1>(object, method, pa1);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2) {
    return new MethodClosure_Arg8_Bind2<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2>(object, method, pa1, pa2);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new MethodClosure_Arg8_Bind3<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2, PreArg3>(object, method, pa1, pa2, pa3);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new MethodClosure_Arg8_Bind4<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2, PreArg3, PreArg4>(object, method, pa1, pa2, pa3, pa4);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new MethodClosure_Arg8_Bind5<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(object, method, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new MethodClosure_Arg8_Bind6<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(object, method, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new MethodClosure_Arg8_Bind7<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new MethodClosure_Arg8_Bind8<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new MethodClosure_Arg8_Bind9<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename Arg18, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new MethodClosure_Arg8_Bind10<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9>
Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9)) {
    return new MethodClosure_Arg9_Bind0<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9>(object, method);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1>
Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1) {
    return new MethodClosure_Arg9_Bind1<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1>(object, method, pa1);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2) {
    return new MethodClosure_Arg9_Bind2<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2>(object, method, pa1, pa2);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new MethodClosure_Arg9_Bind3<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2, PreArg3>(object, method, pa1, pa2, pa3);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new MethodClosure_Arg9_Bind4<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, PreArg1, PreArg2, PreArg3, PreArg4>(object, method, pa1, pa2, pa3, pa4);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new MethodClosure_Arg9_Bind5<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(object, method, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new MethodClosure_Arg9_Bind6<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(object, method, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new MethodClosure_Arg9_Bind7<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new MethodClosure_Arg9_Bind8<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename Arg18, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new MethodClosure_Arg9_Bind9<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename Arg18, typename Arg19, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new MethodClosure_Arg9_Bind10<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10>
Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10)) {
    return new MethodClosure_Arg10_Bind0<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10>(object, method);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1>
Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1) {
    return new MethodClosure_Arg10_Bind1<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1>(object, method, pa1);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2) {
    return new MethodClosure_Arg10_Bind2<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2>(object, method, pa1, pa2);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new MethodClosure_Arg10_Bind3<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, PreArg1, PreArg2, PreArg3>(object, method, pa1, pa2, pa3);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new MethodClosure_Arg10_Bind4<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, PreArg1, PreArg2, PreArg3, PreArg4>(object, method, pa1, pa2, pa3, pa4);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new MethodClosure_Arg10_Bind5<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(object, method, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new MethodClosure_Arg10_Bind6<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(object, method, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new MethodClosure_Arg10_Bind7<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename Arg18, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new MethodClosure_Arg10_Bind8<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename Arg18, typename Arg19, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new MethodClosure_Arg10_Bind9<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Class, typename MethodClass, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename Arg18, typename Arg19, typename Arg20, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19, Arg20>*NewPermanentClosure(Class *object, R (MethodClass::*method)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19, Arg20), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new MethodClosure_Arg10_Bind10<false, R, Class, MethodClass, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19, Arg20, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(object, method, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

////////////////////////////////////////////////////
//////// Closure create helper functions /////////////
////////////////////////////////////////////////////
//////////// for nomal function ////////////////////////

template <typename R>
Closure<R>*NewClosure(R (*function)()) {
    return new FunctionClosure_Arg0_Bind0<true, R>(function);
}

template <typename R, typename Arg1, typename PreArg1>
Closure<R>*NewClosure(R (*function)(Arg1), PreArg1 pa1) {
    return new FunctionClosure_Arg0_Bind1<true, R, Arg1, PreArg1>(function, pa1);
}

template <typename R, typename Arg1, typename Arg2, typename PreArg1, typename PreArg2>
Closure<R>*NewClosure(R (*function)(Arg1, Arg2), PreArg1 pa1, PreArg2 pa2) {
    return new FunctionClosure_Arg0_Bind2<true, R, Arg1, Arg2, PreArg1, PreArg2>(function, pa1, pa2);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R>*NewClosure(R (*function)(Arg1, Arg2, Arg3), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new FunctionClosure_Arg0_Bind3<true, R, Arg1, Arg2, Arg3, PreArg1, PreArg2, PreArg3>(function, pa1, pa2, pa3);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new FunctionClosure_Arg0_Bind4<true, R, Arg1, Arg2, Arg3, Arg4, PreArg1, PreArg2, PreArg3, PreArg4>(function, pa1, pa2, pa3, pa4);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new FunctionClosure_Arg0_Bind5<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(function, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new FunctionClosure_Arg0_Bind6<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(function, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new FunctionClosure_Arg0_Bind7<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new FunctionClosure_Arg0_Bind8<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new FunctionClosure_Arg0_Bind9<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new FunctionClosure_Arg0_Bind10<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Arg1>
Closure<R, Arg1>*NewClosure(R (*function)(Arg1)) {
    return new FunctionClosure_Arg1_Bind0<true, R, Arg1>(function);
}

template <typename R, typename Arg1, typename Arg2, typename PreArg1>
Closure<R, Arg2>*NewClosure(R (*function)(Arg1, Arg2), PreArg1 pa1) {
    return new FunctionClosure_Arg1_Bind1<true, R, Arg1, Arg2, PreArg1>(function, pa1);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename PreArg1, typename PreArg2>
Closure<R, Arg3>*NewClosure(R (*function)(Arg1, Arg2, Arg3), PreArg1 pa1, PreArg2 pa2) {
    return new FunctionClosure_Arg1_Bind2<true, R, Arg1, Arg2, Arg3, PreArg1, PreArg2>(function, pa1, pa2);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new FunctionClosure_Arg1_Bind3<true, R, Arg1, Arg2, Arg3, Arg4, PreArg1, PreArg2, PreArg3>(function, pa1, pa2, pa3);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new FunctionClosure_Arg1_Bind4<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, PreArg1, PreArg2, PreArg3, PreArg4>(function, pa1, pa2, pa3, pa4);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new FunctionClosure_Arg1_Bind5<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(function, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new FunctionClosure_Arg1_Bind6<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(function, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new FunctionClosure_Arg1_Bind7<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new FunctionClosure_Arg1_Bind8<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new FunctionClosure_Arg1_Bind9<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new FunctionClosure_Arg1_Bind10<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Arg1, typename Arg2>
Closure<R, Arg1, Arg2>*NewClosure(R (*function)(Arg1, Arg2)) {
    return new FunctionClosure_Arg2_Bind0<true, R, Arg1, Arg2>(function);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename PreArg1>
Closure<R, Arg2, Arg3>*NewClosure(R (*function)(Arg1, Arg2, Arg3), PreArg1 pa1) {
    return new FunctionClosure_Arg2_Bind1<true, R, Arg1, Arg2, Arg3, PreArg1>(function, pa1);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4), PreArg1 pa1, PreArg2 pa2) {
    return new FunctionClosure_Arg2_Bind2<true, R, Arg1, Arg2, Arg3, Arg4, PreArg1, PreArg2>(function, pa1, pa2);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new FunctionClosure_Arg2_Bind3<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, PreArg1, PreArg2, PreArg3>(function, pa1, pa2, pa3);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new FunctionClosure_Arg2_Bind4<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, PreArg1, PreArg2, PreArg3, PreArg4>(function, pa1, pa2, pa3, pa4);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new FunctionClosure_Arg2_Bind5<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(function, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new FunctionClosure_Arg2_Bind6<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(function, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new FunctionClosure_Arg2_Bind7<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new FunctionClosure_Arg2_Bind8<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new FunctionClosure_Arg2_Bind9<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new FunctionClosure_Arg2_Bind10<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3>
Closure<R, Arg1, Arg2, Arg3>*NewClosure(R (*function)(Arg1, Arg2, Arg3)) {
    return new FunctionClosure_Arg3_Bind0<true, R, Arg1, Arg2, Arg3>(function);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename PreArg1>
Closure<R, Arg2, Arg3, Arg4>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4), PreArg1 pa1) {
    return new FunctionClosure_Arg3_Bind1<true, R, Arg1, Arg2, Arg3, Arg4, PreArg1>(function, pa1);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4, Arg5>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5), PreArg1 pa1, PreArg2 pa2) {
    return new FunctionClosure_Arg3_Bind2<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, PreArg1, PreArg2>(function, pa1, pa2);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5, Arg6>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new FunctionClosure_Arg3_Bind3<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, PreArg1, PreArg2, PreArg3>(function, pa1, pa2, pa3);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6, Arg7>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new FunctionClosure_Arg3_Bind4<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, PreArg1, PreArg2, PreArg3, PreArg4>(function, pa1, pa2, pa3, pa4);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7, Arg8>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new FunctionClosure_Arg3_Bind5<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(function, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8, Arg9>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new FunctionClosure_Arg3_Bind6<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(function, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9, Arg10>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new FunctionClosure_Arg3_Bind7<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10, Arg11>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new FunctionClosure_Arg3_Bind8<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11, Arg12>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new FunctionClosure_Arg3_Bind9<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12, Arg13>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new FunctionClosure_Arg3_Bind10<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4>
Closure<R, Arg1, Arg2, Arg3, Arg4>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4)) {
    return new FunctionClosure_Arg4_Bind0<true, R, Arg1, Arg2, Arg3, Arg4>(function);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename PreArg1>
Closure<R, Arg2, Arg3, Arg4, Arg5>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5), PreArg1 pa1) {
    return new FunctionClosure_Arg4_Bind1<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, PreArg1>(function, pa1);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4, Arg5, Arg6>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6), PreArg1 pa1, PreArg2 pa2) {
    return new FunctionClosure_Arg4_Bind2<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, PreArg1, PreArg2>(function, pa1, pa2);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5, Arg6, Arg7>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new FunctionClosure_Arg4_Bind3<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, PreArg1, PreArg2, PreArg3>(function, pa1, pa2, pa3);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6, Arg7, Arg8>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new FunctionClosure_Arg4_Bind4<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, PreArg1, PreArg2, PreArg3, PreArg4>(function, pa1, pa2, pa3, pa4);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7, Arg8, Arg9>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new FunctionClosure_Arg4_Bind5<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(function, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8, Arg9, Arg10>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new FunctionClosure_Arg4_Bind6<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(function, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9, Arg10, Arg11>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new FunctionClosure_Arg4_Bind7<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10, Arg11, Arg12>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new FunctionClosure_Arg4_Bind8<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11, Arg12, Arg13>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new FunctionClosure_Arg4_Bind9<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12, Arg13, Arg14>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new FunctionClosure_Arg4_Bind10<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5>
Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5)) {
    return new FunctionClosure_Arg5_Bind0<true, R, Arg1, Arg2, Arg3, Arg4, Arg5>(function);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename PreArg1>
Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6), PreArg1 pa1) {
    return new FunctionClosure_Arg5_Bind1<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, PreArg1>(function, pa1);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7), PreArg1 pa1, PreArg2 pa2) {
    return new FunctionClosure_Arg5_Bind2<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, PreArg1, PreArg2>(function, pa1, pa2);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new FunctionClosure_Arg5_Bind3<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, PreArg1, PreArg2, PreArg3>(function, pa1, pa2, pa3);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new FunctionClosure_Arg5_Bind4<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1, PreArg2, PreArg3, PreArg4>(function, pa1, pa2, pa3, pa4);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new FunctionClosure_Arg5_Bind5<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(function, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new FunctionClosure_Arg5_Bind6<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(function, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new FunctionClosure_Arg5_Bind7<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new FunctionClosure_Arg5_Bind8<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new FunctionClosure_Arg5_Bind9<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new FunctionClosure_Arg5_Bind10<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6>
Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6)) {
    return new FunctionClosure_Arg6_Bind0<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6>(function);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename PreArg1>
Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7), PreArg1 pa1) {
    return new FunctionClosure_Arg6_Bind1<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, PreArg1>(function, pa1);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), PreArg1 pa1, PreArg2 pa2) {
    return new FunctionClosure_Arg6_Bind2<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, PreArg1, PreArg2>(function, pa1, pa2);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new FunctionClosure_Arg6_Bind3<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1, PreArg2, PreArg3>(function, pa1, pa2, pa3);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new FunctionClosure_Arg6_Bind4<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2, PreArg3, PreArg4>(function, pa1, pa2, pa3, pa4);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new FunctionClosure_Arg6_Bind5<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(function, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new FunctionClosure_Arg6_Bind6<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(function, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new FunctionClosure_Arg6_Bind7<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new FunctionClosure_Arg6_Bind8<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new FunctionClosure_Arg6_Bind9<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new FunctionClosure_Arg6_Bind10<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7>
Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7)) {
    return new FunctionClosure_Arg7_Bind0<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7>(function);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename PreArg1>
Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), PreArg1 pa1) {
    return new FunctionClosure_Arg7_Bind1<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, PreArg1>(function, pa1);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1, PreArg2 pa2) {
    return new FunctionClosure_Arg7_Bind2<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1, PreArg2>(function, pa1, pa2);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new FunctionClosure_Arg7_Bind3<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2, PreArg3>(function, pa1, pa2, pa3);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new FunctionClosure_Arg7_Bind4<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2, PreArg3, PreArg4>(function, pa1, pa2, pa3, pa4);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new FunctionClosure_Arg7_Bind5<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(function, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new FunctionClosure_Arg7_Bind6<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(function, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new FunctionClosure_Arg7_Bind7<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new FunctionClosure_Arg7_Bind8<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new FunctionClosure_Arg7_Bind9<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new FunctionClosure_Arg7_Bind10<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8>
Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8)) {
    return new FunctionClosure_Arg8_Bind0<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8>(function);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1>
Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1) {
    return new FunctionClosure_Arg8_Bind1<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1>(function, pa1);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2) {
    return new FunctionClosure_Arg8_Bind2<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2>(function, pa1, pa2);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new FunctionClosure_Arg8_Bind3<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2, PreArg3>(function, pa1, pa2, pa3);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new FunctionClosure_Arg8_Bind4<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2, PreArg3, PreArg4>(function, pa1, pa2, pa3, pa4);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new FunctionClosure_Arg8_Bind5<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(function, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new FunctionClosure_Arg8_Bind6<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(function, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new FunctionClosure_Arg8_Bind7<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new FunctionClosure_Arg8_Bind8<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new FunctionClosure_Arg8_Bind9<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename Arg18, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new FunctionClosure_Arg8_Bind10<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9>
Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9)) {
    return new FunctionClosure_Arg9_Bind0<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9>(function);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1>
Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1) {
    return new FunctionClosure_Arg9_Bind1<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1>(function, pa1);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2) {
    return new FunctionClosure_Arg9_Bind2<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2>(function, pa1, pa2);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new FunctionClosure_Arg9_Bind3<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2, PreArg3>(function, pa1, pa2, pa3);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new FunctionClosure_Arg9_Bind4<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, PreArg1, PreArg2, PreArg3, PreArg4>(function, pa1, pa2, pa3, pa4);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new FunctionClosure_Arg9_Bind5<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(function, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new FunctionClosure_Arg9_Bind6<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(function, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new FunctionClosure_Arg9_Bind7<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new FunctionClosure_Arg9_Bind8<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename Arg18, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new FunctionClosure_Arg9_Bind9<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename Arg18, typename Arg19, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new FunctionClosure_Arg9_Bind10<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10>
Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10)) {
    return new FunctionClosure_Arg10_Bind0<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10>(function);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1>
Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1) {
    return new FunctionClosure_Arg10_Bind1<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1>(function, pa1);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2) {
    return new FunctionClosure_Arg10_Bind2<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2>(function, pa1, pa2);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new FunctionClosure_Arg10_Bind3<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, PreArg1, PreArg2, PreArg3>(function, pa1, pa2, pa3);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new FunctionClosure_Arg10_Bind4<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, PreArg1, PreArg2, PreArg3, PreArg4>(function, pa1, pa2, pa3, pa4);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new FunctionClosure_Arg10_Bind5<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(function, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new FunctionClosure_Arg10_Bind6<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(function, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new FunctionClosure_Arg10_Bind7<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename Arg18, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new FunctionClosure_Arg10_Bind8<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename Arg18, typename Arg19, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new FunctionClosure_Arg10_Bind9<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename Arg18, typename Arg19, typename Arg20, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19, Arg20>*NewClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19, Arg20), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new FunctionClosure_Arg10_Bind10<true, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19, Arg20, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

////////////////////////////////////////////////////
//////// Closure create helper functions /////////////
////////////////////////////////////////////////////
//////////// for nomal function ////////////////////////

template <typename R>
Closure<R>*NewPermanentClosure(R (*function)()) {
    return new FunctionClosure_Arg0_Bind0<false, R>(function);
}

template <typename R, typename Arg1, typename PreArg1>
Closure<R>*NewPermanentClosure(R (*function)(Arg1), PreArg1 pa1) {
    return new FunctionClosure_Arg0_Bind1<false, R, Arg1, PreArg1>(function, pa1);
}

template <typename R, typename Arg1, typename Arg2, typename PreArg1, typename PreArg2>
Closure<R>*NewPermanentClosure(R (*function)(Arg1, Arg2), PreArg1 pa1, PreArg2 pa2) {
    return new FunctionClosure_Arg0_Bind2<false, R, Arg1, Arg2, PreArg1, PreArg2>(function, pa1, pa2);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new FunctionClosure_Arg0_Bind3<false, R, Arg1, Arg2, Arg3, PreArg1, PreArg2, PreArg3>(function, pa1, pa2, pa3);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new FunctionClosure_Arg0_Bind4<false, R, Arg1, Arg2, Arg3, Arg4, PreArg1, PreArg2, PreArg3, PreArg4>(function, pa1, pa2, pa3, pa4);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new FunctionClosure_Arg0_Bind5<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(function, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new FunctionClosure_Arg0_Bind6<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(function, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new FunctionClosure_Arg0_Bind7<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new FunctionClosure_Arg0_Bind8<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new FunctionClosure_Arg0_Bind9<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new FunctionClosure_Arg0_Bind10<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Arg1>
Closure<R, Arg1>*NewPermanentClosure(R (*function)(Arg1)) {
    return new FunctionClosure_Arg1_Bind0<false, R, Arg1>(function);
}

template <typename R, typename Arg1, typename Arg2, typename PreArg1>
Closure<R, Arg2>*NewPermanentClosure(R (*function)(Arg1, Arg2), PreArg1 pa1) {
    return new FunctionClosure_Arg1_Bind1<false, R, Arg1, Arg2, PreArg1>(function, pa1);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename PreArg1, typename PreArg2>
Closure<R, Arg3>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3), PreArg1 pa1, PreArg2 pa2) {
    return new FunctionClosure_Arg1_Bind2<false, R, Arg1, Arg2, Arg3, PreArg1, PreArg2>(function, pa1, pa2);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new FunctionClosure_Arg1_Bind3<false, R, Arg1, Arg2, Arg3, Arg4, PreArg1, PreArg2, PreArg3>(function, pa1, pa2, pa3);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new FunctionClosure_Arg1_Bind4<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, PreArg1, PreArg2, PreArg3, PreArg4>(function, pa1, pa2, pa3, pa4);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new FunctionClosure_Arg1_Bind5<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(function, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new FunctionClosure_Arg1_Bind6<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(function, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new FunctionClosure_Arg1_Bind7<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new FunctionClosure_Arg1_Bind8<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new FunctionClosure_Arg1_Bind9<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new FunctionClosure_Arg1_Bind10<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Arg1, typename Arg2>
Closure<R, Arg1, Arg2>*NewPermanentClosure(R (*function)(Arg1, Arg2)) {
    return new FunctionClosure_Arg2_Bind0<false, R, Arg1, Arg2>(function);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename PreArg1>
Closure<R, Arg2, Arg3>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3), PreArg1 pa1) {
    return new FunctionClosure_Arg2_Bind1<false, R, Arg1, Arg2, Arg3, PreArg1>(function, pa1);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4), PreArg1 pa1, PreArg2 pa2) {
    return new FunctionClosure_Arg2_Bind2<false, R, Arg1, Arg2, Arg3, Arg4, PreArg1, PreArg2>(function, pa1, pa2);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new FunctionClosure_Arg2_Bind3<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, PreArg1, PreArg2, PreArg3>(function, pa1, pa2, pa3);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new FunctionClosure_Arg2_Bind4<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, PreArg1, PreArg2, PreArg3, PreArg4>(function, pa1, pa2, pa3, pa4);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new FunctionClosure_Arg2_Bind5<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(function, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new FunctionClosure_Arg2_Bind6<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(function, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new FunctionClosure_Arg2_Bind7<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new FunctionClosure_Arg2_Bind8<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new FunctionClosure_Arg2_Bind9<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new FunctionClosure_Arg2_Bind10<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3>
Closure<R, Arg1, Arg2, Arg3>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3)) {
    return new FunctionClosure_Arg3_Bind0<false, R, Arg1, Arg2, Arg3>(function);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename PreArg1>
Closure<R, Arg2, Arg3, Arg4>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4), PreArg1 pa1) {
    return new FunctionClosure_Arg3_Bind1<false, R, Arg1, Arg2, Arg3, Arg4, PreArg1>(function, pa1);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4, Arg5>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5), PreArg1 pa1, PreArg2 pa2) {
    return new FunctionClosure_Arg3_Bind2<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, PreArg1, PreArg2>(function, pa1, pa2);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5, Arg6>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new FunctionClosure_Arg3_Bind3<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, PreArg1, PreArg2, PreArg3>(function, pa1, pa2, pa3);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6, Arg7>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new FunctionClosure_Arg3_Bind4<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, PreArg1, PreArg2, PreArg3, PreArg4>(function, pa1, pa2, pa3, pa4);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7, Arg8>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new FunctionClosure_Arg3_Bind5<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(function, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8, Arg9>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new FunctionClosure_Arg3_Bind6<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(function, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9, Arg10>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new FunctionClosure_Arg3_Bind7<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10, Arg11>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new FunctionClosure_Arg3_Bind8<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11, Arg12>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new FunctionClosure_Arg3_Bind9<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12, Arg13>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new FunctionClosure_Arg3_Bind10<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4>
Closure<R, Arg1, Arg2, Arg3, Arg4>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4)) {
    return new FunctionClosure_Arg4_Bind0<false, R, Arg1, Arg2, Arg3, Arg4>(function);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename PreArg1>
Closure<R, Arg2, Arg3, Arg4, Arg5>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5), PreArg1 pa1) {
    return new FunctionClosure_Arg4_Bind1<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, PreArg1>(function, pa1);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4, Arg5, Arg6>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6), PreArg1 pa1, PreArg2 pa2) {
    return new FunctionClosure_Arg4_Bind2<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, PreArg1, PreArg2>(function, pa1, pa2);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5, Arg6, Arg7>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new FunctionClosure_Arg4_Bind3<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, PreArg1, PreArg2, PreArg3>(function, pa1, pa2, pa3);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6, Arg7, Arg8>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new FunctionClosure_Arg4_Bind4<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, PreArg1, PreArg2, PreArg3, PreArg4>(function, pa1, pa2, pa3, pa4);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7, Arg8, Arg9>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new FunctionClosure_Arg4_Bind5<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(function, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8, Arg9, Arg10>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new FunctionClosure_Arg4_Bind6<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(function, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9, Arg10, Arg11>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new FunctionClosure_Arg4_Bind7<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10, Arg11, Arg12>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new FunctionClosure_Arg4_Bind8<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11, Arg12, Arg13>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new FunctionClosure_Arg4_Bind9<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12, Arg13, Arg14>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new FunctionClosure_Arg4_Bind10<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5>
Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5)) {
    return new FunctionClosure_Arg5_Bind0<false, R, Arg1, Arg2, Arg3, Arg4, Arg5>(function);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename PreArg1>
Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6), PreArg1 pa1) {
    return new FunctionClosure_Arg5_Bind1<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, PreArg1>(function, pa1);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7), PreArg1 pa1, PreArg2 pa2) {
    return new FunctionClosure_Arg5_Bind2<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, PreArg1, PreArg2>(function, pa1, pa2);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new FunctionClosure_Arg5_Bind3<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, PreArg1, PreArg2, PreArg3>(function, pa1, pa2, pa3);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new FunctionClosure_Arg5_Bind4<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1, PreArg2, PreArg3, PreArg4>(function, pa1, pa2, pa3, pa4);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new FunctionClosure_Arg5_Bind5<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(function, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new FunctionClosure_Arg5_Bind6<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(function, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new FunctionClosure_Arg5_Bind7<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new FunctionClosure_Arg5_Bind8<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new FunctionClosure_Arg5_Bind9<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new FunctionClosure_Arg5_Bind10<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6>
Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6)) {
    return new FunctionClosure_Arg6_Bind0<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6>(function);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename PreArg1>
Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7), PreArg1 pa1) {
    return new FunctionClosure_Arg6_Bind1<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, PreArg1>(function, pa1);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), PreArg1 pa1, PreArg2 pa2) {
    return new FunctionClosure_Arg6_Bind2<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, PreArg1, PreArg2>(function, pa1, pa2);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new FunctionClosure_Arg6_Bind3<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1, PreArg2, PreArg3>(function, pa1, pa2, pa3);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new FunctionClosure_Arg6_Bind4<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2, PreArg3, PreArg4>(function, pa1, pa2, pa3, pa4);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new FunctionClosure_Arg6_Bind5<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(function, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new FunctionClosure_Arg6_Bind6<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(function, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new FunctionClosure_Arg6_Bind7<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new FunctionClosure_Arg6_Bind8<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new FunctionClosure_Arg6_Bind9<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new FunctionClosure_Arg6_Bind10<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7>
Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7)) {
    return new FunctionClosure_Arg7_Bind0<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7>(function);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename PreArg1>
Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8), PreArg1 pa1) {
    return new FunctionClosure_Arg7_Bind1<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, PreArg1>(function, pa1);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1, PreArg2 pa2) {
    return new FunctionClosure_Arg7_Bind2<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1, PreArg2>(function, pa1, pa2);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new FunctionClosure_Arg7_Bind3<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2, PreArg3>(function, pa1, pa2, pa3);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new FunctionClosure_Arg7_Bind4<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2, PreArg3, PreArg4>(function, pa1, pa2, pa3, pa4);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new FunctionClosure_Arg7_Bind5<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(function, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new FunctionClosure_Arg7_Bind6<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(function, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new FunctionClosure_Arg7_Bind7<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new FunctionClosure_Arg7_Bind8<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new FunctionClosure_Arg7_Bind9<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new FunctionClosure_Arg7_Bind10<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8>
Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8)) {
    return new FunctionClosure_Arg8_Bind0<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8>(function);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename PreArg1>
Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9), PreArg1 pa1) {
    return new FunctionClosure_Arg8_Bind1<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, PreArg1>(function, pa1);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1, PreArg2 pa2) {
    return new FunctionClosure_Arg8_Bind2<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1, PreArg2>(function, pa1, pa2);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new FunctionClosure_Arg8_Bind3<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2, PreArg3>(function, pa1, pa2, pa3);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new FunctionClosure_Arg8_Bind4<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2, PreArg3, PreArg4>(function, pa1, pa2, pa3, pa4);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new FunctionClosure_Arg8_Bind5<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(function, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new FunctionClosure_Arg8_Bind6<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(function, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new FunctionClosure_Arg8_Bind7<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new FunctionClosure_Arg8_Bind8<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new FunctionClosure_Arg8_Bind9<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename Arg18, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new FunctionClosure_Arg8_Bind10<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9>
Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9)) {
    return new FunctionClosure_Arg9_Bind0<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9>(function);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename PreArg1>
Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10), PreArg1 pa1) {
    return new FunctionClosure_Arg9_Bind1<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, PreArg1>(function, pa1);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1, PreArg2 pa2) {
    return new FunctionClosure_Arg9_Bind2<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1, PreArg2>(function, pa1, pa2);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new FunctionClosure_Arg9_Bind3<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2, PreArg3>(function, pa1, pa2, pa3);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new FunctionClosure_Arg9_Bind4<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, PreArg1, PreArg2, PreArg3, PreArg4>(function, pa1, pa2, pa3, pa4);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new FunctionClosure_Arg9_Bind5<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(function, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new FunctionClosure_Arg9_Bind6<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(function, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new FunctionClosure_Arg9_Bind7<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new FunctionClosure_Arg9_Bind8<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename Arg18, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new FunctionClosure_Arg9_Bind9<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename Arg18, typename Arg19, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new FunctionClosure_Arg9_Bind10<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10>
Closure<R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10)) {
    return new FunctionClosure_Arg10_Bind0<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10>(function);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename PreArg1>
Closure<R, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11), PreArg1 pa1) {
    return new FunctionClosure_Arg10_Bind1<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, PreArg1>(function, pa1);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename PreArg1, typename PreArg2>
Closure<R, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12), PreArg1 pa1, PreArg2 pa2) {
    return new FunctionClosure_Arg10_Bind2<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, PreArg1, PreArg2>(function, pa1, pa2);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename PreArg1, typename PreArg2, typename PreArg3>
Closure<R, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3) {
    return new FunctionClosure_Arg10_Bind3<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, PreArg1, PreArg2, PreArg3>(function, pa1, pa2, pa3);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4>
Closure<R, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4) {
    return new FunctionClosure_Arg10_Bind4<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, PreArg1, PreArg2, PreArg3, PreArg4>(function, pa1, pa2, pa3, pa4);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5>
Closure<R, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5) {
    return new FunctionClosure_Arg10_Bind5<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5>(function, pa1, pa2, pa3, pa4, pa5);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6>
Closure<R, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6) {
    return new FunctionClosure_Arg10_Bind6<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6>(function, pa1, pa2, pa3, pa4, pa5, pa6);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7>
Closure<R, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7) {
    return new FunctionClosure_Arg10_Bind7<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename Arg18, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8>
Closure<R, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8) {
    return new FunctionClosure_Arg10_Bind8<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename Arg18, typename Arg19, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9>
Closure<R, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9) {
    return new FunctionClosure_Arg10_Bind9<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9);
}

template <typename R, typename Arg1, typename Arg2, typename Arg3, typename Arg4, typename Arg5, typename Arg6, typename Arg7, typename Arg8, typename Arg9, typename Arg10, typename Arg11, typename Arg12, typename Arg13, typename Arg14, typename Arg15, typename Arg16, typename Arg17, typename Arg18, typename Arg19, typename Arg20, typename PreArg1, typename PreArg2, typename PreArg3, typename PreArg4, typename PreArg5, typename PreArg6, typename PreArg7, typename PreArg8, typename PreArg9, typename PreArg10>
Closure<R, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19, Arg20>*NewPermanentClosure(R (*function)(Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19, Arg20), PreArg1 pa1, PreArg2 pa2, PreArg3 pa3, PreArg4 pa4, PreArg5 pa5, PreArg6 pa6, PreArg7 pa7, PreArg8 pa8, PreArg9 pa9, PreArg10 pa10) {
    return new FunctionClosure_Arg10_Bind10<false, R, Arg1, Arg2, Arg3, Arg4, Arg5, Arg6, Arg7, Arg8, Arg9, Arg10, Arg11, Arg12, Arg13, Arg14, Arg15, Arg16, Arg17, Arg18, Arg19, Arg20, PreArg1, PreArg2, PreArg3, PreArg4, PreArg5, PreArg6, PreArg7, PreArg8, PreArg9, PreArg10>(function, pa1, pa2, pa3, pa4, pa5, pa6, pa7, pa8, pa9, pa10);
}

}


#endif // 
