/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_WebrtcGlobalInformationBinding_h__
#define mozilla_dom_WebrtcGlobalInformationBinding_h__

#include "RTCStatsReportBinding.h"
#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/CallbackFunction.h"
#include "mozilla/dom/Nullable.h"

namespace mozilla {
namespace dom {

class NativePropertyHooks;
class ProtoAndIfaceArray;
struct RTCStatsReportInternal;
class WebrtcGlobalInformation;
class WebrtcGlobalLoggingCallback;
class WebrtcGlobalStatisticsCallback;
struct WebrtcGlobalStatisticsReport;
struct WebrtcGlobalStatisticsReportAtoms;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

struct WebrtcGlobalStatisticsReport : public DictionaryBase
{
  Optional<Sequence<RTCStatsReportInternal > > mReports;

  WebrtcGlobalStatisticsReport();

  explicit inline WebrtcGlobalStatisticsReport(const WebrtcGlobalStatisticsReport& aOther)
  {
    *this = aOther;
  }

protected:
  explicit inline WebrtcGlobalStatisticsReport(int )
  {
    // Do nothing here; this is used by our "Fast" subclass
  }

private:
  static bool
  InitIds(JSContext* cx, WebrtcGlobalStatisticsReportAtoms* atomsCache);

public:
  bool
  Init(JSContext* cx, JS::Handle<JS::Value> val, const char* sourceDescription = "Value");

  bool
  Init(const nsAString& aJSON);

  bool
  ToObject(JSContext* cx, JS::Handle<JSObject*> parentObject, JS::MutableHandle<JS::Value> rval) const;

  void
  TraceDictionary(JSTracer* trc);

  void
  operator=(const WebrtcGlobalStatisticsReport& aOther);
};

namespace binding_detail {
struct FastWebrtcGlobalStatisticsReport : public WebrtcGlobalStatisticsReport
{
  inline FastWebrtcGlobalStatisticsReport()
    : WebrtcGlobalStatisticsReport(42)
  {
    // Doesn't matter what int we pass to the parent constructor
  }
};
} // namespace binding_detail


class WebrtcGlobalStatisticsCallback : public CallbackFunction
{
public:
  explicit inline WebrtcGlobalStatisticsCallback(JS::Handle<JSObject*> aCallback, nsIGlobalObject* aIncumbentGlobal)
    : CallbackFunction(aCallback, aIncumbentGlobal)
  {
    MOZ_ASSERT(JS_ObjectIsCallable(nullptr, mCallback));
  }

  explicit inline WebrtcGlobalStatisticsCallback(CallbackFunction* aOther)
    : CallbackFunction(aOther)
  {
  }

  template <typename T>
  inline void
  Call(const T& thisObjPtr, const WebrtcGlobalStatisticsReport& reports, ErrorResult& aRv, ExceptionHandling aExceptionHandling = eReportExceptions)
  {
    CallSetup s(this, aRv, aExceptionHandling);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    JS::Rooted<JSObject*> thisObjJS(s.GetContext(),
      WrapCallThisObject(s.GetContext(), CallbackPreserveColor(), thisObjPtr));
    if (!thisObjJS) {
      aRv.Throw(NS_ERROR_FAILURE);
      return;
    }
    JS::Rooted<JS::Value> thisValJS(s.GetContext(),
                                    JS::ObjectValue(*thisObjJS));
    return Call(s.GetContext(), thisValJS, reports, aRv);
  }

  inline void
  Call(const WebrtcGlobalStatisticsReport& reports, ErrorResult& aRv, ExceptionHandling aExceptionHandling = eReportExceptions)
  {
    CallSetup s(this, aRv, aExceptionHandling);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    return Call(s.GetContext(), JS::UndefinedHandleValue, reports, aRv);
  }

  inline bool
  operator==(const WebrtcGlobalStatisticsCallback& aOther) const
  {
    return CallbackFunction::operator==(aOther);
  }

private:
  void Call(JSContext* cx, JS::Handle<JS::Value> aThisVal, const WebrtcGlobalStatisticsReport& reports, ErrorResult& aRv);
};


class WebrtcGlobalLoggingCallback : public CallbackFunction
{
public:
  explicit inline WebrtcGlobalLoggingCallback(JS::Handle<JSObject*> aCallback, nsIGlobalObject* aIncumbentGlobal)
    : CallbackFunction(aCallback, aIncumbentGlobal)
  {
    MOZ_ASSERT(JS_ObjectIsCallable(nullptr, mCallback));
  }

  explicit inline WebrtcGlobalLoggingCallback(CallbackFunction* aOther)
    : CallbackFunction(aOther)
  {
  }

  template <typename T>
  inline void
  Call(const T& thisObjPtr, const Sequence<nsString >& logMessages, ErrorResult& aRv, ExceptionHandling aExceptionHandling = eReportExceptions)
  {
    CallSetup s(this, aRv, aExceptionHandling);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    JS::Rooted<JSObject*> thisObjJS(s.GetContext(),
      WrapCallThisObject(s.GetContext(), CallbackPreserveColor(), thisObjPtr));
    if (!thisObjJS) {
      aRv.Throw(NS_ERROR_FAILURE);
      return;
    }
    JS::Rooted<JS::Value> thisValJS(s.GetContext(),
                                    JS::ObjectValue(*thisObjJS));
    return Call(s.GetContext(), thisValJS, logMessages, aRv);
  }

  inline void
  Call(const Sequence<nsString >& logMessages, ErrorResult& aRv, ExceptionHandling aExceptionHandling = eReportExceptions)
  {
    CallSetup s(this, aRv, aExceptionHandling);
    if (!s.GetContext()) {
      aRv.Throw(NS_ERROR_UNEXPECTED);
      return;
    }
    return Call(s.GetContext(), JS::UndefinedHandleValue, logMessages, aRv);
  }

  inline bool
  operator==(const WebrtcGlobalLoggingCallback& aOther) const
  {
    return CallbackFunction::operator==(aOther);
  }

private:
  void Call(JSContext* cx, JS::Handle<JS::Value> aThisVal, const Sequence<nsString >& logMessages, ErrorResult& aRv);
};


namespace WebrtcGlobalInformationBinding {

  typedef mozilla::dom::WebrtcGlobalInformation NativeType;

  // We declare this as an array so that retrieving a pointer to this
  // binding's property hooks only requires compile/link-time resolvable
  // address arithmetic.  Declaring it as a pointer instead would require
  // doing a run-time load to fetch a pointer to this binding's property
  // hooks.  And then structures which embedded a pointer to this structure
  // would require a run-time load for proper initialization, which would
  // then induce static constructors.  Lots of static constructors.
  extern const NativePropertyHooks sNativePropertyHooks[];
  JSObject*
  DefineDOMInterface(JSContext* aCx, JS::Handle<JSObject*> aGlobal, JS::Handle<jsid> id, bool aDefineOnGlobal);

  bool
  ConstructorEnabled(JSContext* aCx, JS::Handle<JSObject*> aObj);

  void
  CreateInterfaceObjects(JSContext* aCx, JS::Handle<JSObject*> aGlobal, ProtoAndIfaceArray& aProtoAndIfaceArray, bool aDefineOnGlobal);

  JS::Handle<JSObject*>
  GetConstructorObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal, bool aDefineOnGlobal = true);

} // namespace WebrtcGlobalInformationBinding



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_WebrtcGlobalInformationBinding_h__
