// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppleARKit
// Functions: 6

// StaticClass @ 14cfcb420

UClass * __cdecl UARKitCameraOverlayMaterialLoader::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARKitCameraOverlayMaterialLoader.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"ARKitCameraOverlayMaterialLoader",
               &Z_Registration_Info_UClass_UARKitCameraOverlayMaterialLoader.InnerSingleton,
               StaticRegisterNativesUARKitCameraOverlayMaterialLoader,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UARKitCameraOverlayMaterialLoader>,
               InternalVTableHelperCtorCaller<UARKitCameraOverlayMaterialLoader>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARKitCameraOverlayMaterialLoader.InnerSingleton;
}

// UARKitCameraOverlayMaterialLoader @ 14cfcffc0

UARKitCameraOverlayMaterialLoader * __thiscall
UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader
          (UARKitCameraOverlayMaterialLoader *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UARKitCameraOverlayMaterialLoader__6B_;
  (this->DefaultCameraOverlayMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->DepthOcclusionOverlayMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->MatteOcclusionOverlayMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->SceneDepthOcclusionMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->SceneDepthColorationMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  return this;
}

// UARKitCameraOverlayMaterialLoader @ 14cfd0000

UARKitCameraOverlayMaterialLoader * __thiscall
UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader
          (UARKitCameraOverlayMaterialLoader *this)

{
  ulonglong uVar1;
  wchar_t *pwVar2;
  int *piVar3;
  wchar_t *pwVar4;
  
  UObject::UObject((UObject *)this);
  uVar1 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7UARKitCameraOverlayMaterialLoader__6B_;
  pwVar4 = L"";
  (this->DefaultCameraOverlayMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->DepthOcclusionOverlayMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->MatteOcclusionOverlayMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->SceneDepthOcclusionMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->SceneDepthColorationMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c);
  if (*piVar3 < `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pwVar2 = L"";
      if (OverlayMaterialPath.Data.ArrayNum != 0) {
        pwVar2 = (wchar_t *)OverlayMaterialPath.Data.AllocatorInstance;
      }
      ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                (&`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                  ::__l2::DefaultOverlayMaterialRef,pwVar2,0);
      atexit(`UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader'::__l2::
             _dynamic_atexit_destructor_for__DefaultOverlayMaterialRef__);
      _Init_thread_footer(&`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
      ::__l2::DefaultOverlayMaterialRef.Object.field0_0x0 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable
              ((UObject *)
               `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
               ::__l2::DefaultOverlayMaterialRef.Object.field0_0x0);
  }
  (this->DefaultCameraOverlayMaterial).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)
       `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
       ::__l2::DefaultOverlayMaterialRef.Object.field0_0x0;
  if (*piVar3 < `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                ::__l2::_thread_safe_static_guard_1__) {
    _Init_thread_header(&`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_1__);
    if (`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
        ::__l2::_thread_safe_static_guard_1__ == -1) {
      pwVar2 = L"";
      if (DepthOcclusionOverlayMaterialPath.Data.ArrayNum != 0) {
        pwVar2 = (wchar_t *)DepthOcclusionOverlayMaterialPath.Data.AllocatorInstance;
      }
      ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                (&`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                  ::__l2::DepthOcclusionOverlayMaterialRef,pwVar2,0);
      atexit(`UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader'::__l2::
             _dynamic_atexit_destructor_for__DepthOcclusionOverlayMaterialRef__);
      _Init_thread_footer(&`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_1__);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
      ::__l2::DepthOcclusionOverlayMaterialRef.Object.field0_0x0 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable
              ((UObject *)
               `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
               ::__l2::DepthOcclusionOverlayMaterialRef.Object.field0_0x0);
  }
  (this->DepthOcclusionOverlayMaterial).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)
       `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
       ::__l2::DepthOcclusionOverlayMaterialRef.Object.field0_0x0;
  if (*piVar3 < `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                ::__l2::_thread_safe_static_guard_2__) {
    _Init_thread_header(&`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_2__);
    if (`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
        ::__l2::_thread_safe_static_guard_2__ == -1) {
      pwVar2 = L"";
      if (MatteOcclusionOverlayMaterialPath.Data.ArrayNum != 0) {
        pwVar2 = (wchar_t *)MatteOcclusionOverlayMaterialPath.Data.AllocatorInstance;
      }
      ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                (&`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                  ::__l2::MatteOcclusionOverlayMaterialRef,pwVar2,0);
      atexit(`UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader'::__l2::
             _dynamic_atexit_destructor_for__MatteOcclusionOverlayMaterialRef__);
      _Init_thread_footer(&`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_2__);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
      ::__l2::MatteOcclusionOverlayMaterialRef.Object.field0_0x0 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable
              ((UObject *)
               `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
               ::__l2::MatteOcclusionOverlayMaterialRef.Object.field0_0x0);
  }
  (this->MatteOcclusionOverlayMaterial).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)
       `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
       ::__l2::MatteOcclusionOverlayMaterialRef.Object.field0_0x0;
  if (*piVar3 < `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                ::__l2::_thread_safe_static_guard_3__) {
    _Init_thread_header(&`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_3__);
    if (`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
        ::__l2::_thread_safe_static_guard_3__ == -1) {
      pwVar2 = L"";
      if (SceneDepthOcclusionMaterialPath.Data.ArrayNum != 0) {
        pwVar2 = (wchar_t *)SceneDepthOcclusionMaterialPath.Data.AllocatorInstance;
      }
      ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                (&`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                  ::__l2::SceneDepthOcclusionMaterialRef,pwVar2,0);
      atexit(`UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader'::__l2::
             _dynamic_atexit_destructor_for__SceneDepthOcclusionMaterialRef__);
      _Init_thread_footer(&`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_3__);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
      ::__l2::SceneDepthOcclusionMaterialRef.Object.field0_0x0 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable
              ((UObject *)
               `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
               ::__l2::SceneDepthOcclusionMaterialRef.Object.field0_0x0);
  }
  (this->SceneDepthOcclusionMaterial).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)
       `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
       ::__l2::SceneDepthOcclusionMaterialRef.Object.field0_0x0;
  if (*piVar3 < `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                ::__l2::_thread_safe_static_guard_4__) {
    _Init_thread_header(&`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_4__);
    if (`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
        ::__l2::_thread_safe_static_guard_4__ == -1) {
      if (SceneDepthColorationMaterialPath.Data.ArrayNum != 0) {
        pwVar4 = (wchar_t *)SceneDepthColorationMaterialPath.Data.AllocatorInstance;
      }
      ConstructorHelpers::FObjectFinder<UMaterialInterface>::FObjectFinder<UMaterialInterface>
                (&`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                  ::__l2::SceneDepthColorationMaterialRef,pwVar4,0);
      atexit(`UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader'::__l2::
             _dynamic_atexit_destructor_for__SceneDepthColorationMaterialRef__);
      _Init_thread_footer(&`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_4__);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (`public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
      ::__l2::SceneDepthColorationMaterialRef.Object.field0_0x0 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable
              ((UObject *)
               `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
               ::__l2::SceneDepthColorationMaterialRef.Object.field0_0x0);
  }
  (this->SceneDepthColorationMaterial).field0_0x0.ObjectPtr.field0_0x0 =
       (FObjectPtr_u_0)
       `public:___cdecl_UARKitCameraOverlayMaterialLoader::UARKitCameraOverlayMaterialLoader(void)___ptr64'
       ::__l2::SceneDepthColorationMaterialRef.Object.field0_0x0;
  return this;
}

// ~UARKitCameraOverlayMaterialLoader @ 14cfd1260

void __thiscall
UARKitCameraOverlayMaterialLoader::~UARKitCameraOverlayMaterialLoader
          (UARKitCameraOverlayMaterialLoader *this)

{
  this->_padding_ = (longlong)&___7UARKitCameraOverlayMaterialLoader__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14cfd70a0

UClass * __cdecl UARKitCameraOverlayMaterialLoader::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARKitCameraOverlayMaterialLoader.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AppleARKit",L"ARKitCameraOverlayMaterialLoader",
               &Z_Registration_Info_UClass_UARKitCameraOverlayMaterialLoader.InnerSingleton,
               StaticRegisterNativesUARKitCameraOverlayMaterialLoader,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UARKitCameraOverlayMaterialLoader>,
               InternalVTableHelperCtorCaller<UARKitCameraOverlayMaterialLoader>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARKitCameraOverlayMaterialLoader.InnerSingleton;
}

// StaticRegisterNativesUARKitCameraOverlayMaterialLoader @ 14cfdf400

void __cdecl
UARKitCameraOverlayMaterialLoader::StaticRegisterNativesUARKitCameraOverlayMaterialLoader(void)

{
  return;
}

