/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_RTCIdentityAssertionBinding_h__
#define mozilla_dom_RTCIdentityAssertionBinding_h__

#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/BindingUtils.h"
#include "mozilla/dom/CallbackInterface.h"
#include "mozilla/dom/Nullable.h"
#include "nsWeakReference.h"

namespace mozilla {
namespace dom {

class NativePropertyHooks;
class ProtoAndIfaceArray;
class RTCIdentityAssertion;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {

namespace RTCIdentityAssertionBinding {

  typedef mozilla::dom::RTCIdentityAssertion NativeType;

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

  const JSClass*
  GetJSClass();

  JSObject*
  Wrap(JSContext* aCx, JS::Handle<JSObject*> aScope, mozilla::dom::RTCIdentityAssertion* aObject, nsWrapperCache* aCache);

  template <class T>
  inline JSObject* Wrap(JSContext* aCx, JS::Handle<JSObject*> aScope, T* aObject)
  {
    return Wrap(aCx, aScope, aObject, aObject);
  }

  void
  CreateInterfaceObjects(JSContext* aCx, JS::Handle<JSObject*> aGlobal, ProtoAndIfaceArray& aProtoAndIfaceArray, bool aDefineOnGlobal);

  JS::Handle<JSObject*>
  GetProtoObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal);

  JS::Handle<JSObject*>
  GetConstructorObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal, bool aDefineOnGlobal = true);

} // namespace RTCIdentityAssertionBinding



class RTCIdentityAssertionJSImpl : public CallbackInterface
{
public:
  explicit inline RTCIdentityAssertionJSImpl(JS::Handle<JSObject*> aCallback, nsIGlobalObject* aIncumbentGlobal)
    : CallbackInterface(aCallback, aIncumbentGlobal)
  {
  }

  void __Init(const nsAString& idp, const nsAString& name, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  inline bool
  operator==(const RTCIdentityAssertionJSImpl& aOther) const
  {
    return CallbackInterface::operator==(aOther);
  }

  void GetIdp(nsString& aRetVal, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void GetName(nsString& aRetVal, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void SetIdp(const nsAString& arg, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void SetName(const nsAString& arg, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);
};


class RTCIdentityAssertion MOZ_FINAL : public nsSupportsWeakReference,
                                       public nsWrapperCache
{
public:
  NS_DECL_CYCLE_COLLECTING_ISUPPORTS
  NS_DECL_CYCLE_COLLECTION_SCRIPT_HOLDER_CLASS(RTCIdentityAssertion)

private:
  nsRefPtr<RTCIdentityAssertionJSImpl> mImpl;
  nsCOMPtr<nsISupports> mParent;

public:
  RTCIdentityAssertion(JS::Handle<JSObject*> aJSImplObject, nsPIDOMWindow* aParent);

  nsISupports* GetParentObject() const;

  virtual JSObject* WrapObject(JSContext* aCx, JS::Handle<JSObject*> aScope) MOZ_OVERRIDE;

  static already_AddRefed<RTCIdentityAssertion> Constructor(const GlobalObject& global, JSContext* cx, const nsAString& idp, const nsAString& name, ErrorResult& aRv);

  void GetIdp(nsString& aRetVal, ErrorResult& aRv, JSCompartment* aCompartment = nullptr) const;

  void SetIdp(const nsAString& arg, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  void GetName(nsString& aRetVal, ErrorResult& aRv, JSCompartment* aCompartment = nullptr) const;

  void SetName(const nsAString& arg, ErrorResult& aRv, JSCompartment* aCompartment = nullptr);

  static bool
  _Create(JSContext* cx, unsigned argc, JS::Value* vp);
};


} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_RTCIdentityAssertionBinding_h__