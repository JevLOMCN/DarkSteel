// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 42

// StaticClass @ 14cf75530

UClass * __cdecl UMotionTrackedDeviceFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionTrackedDeviceFunctionLibrary.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/XRBase",L"MotionTrackedDeviceFunctionLibrary",
               &Z_Registration_Info_UClass_UMotionTrackedDeviceFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUMotionTrackedDeviceFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMotionTrackedDeviceFunctionLibrary>,
               InternalVTableHelperCtorCaller<UMotionTrackedDeviceFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionTrackedDeviceFunctionLibrary.InnerSingleton;
}

// UMotionTrackedDeviceFunctionLibrary @ 14cf7e390

UMotionTrackedDeviceFunctionLibrary * __thiscall
UMotionTrackedDeviceFunctionLibrary::UMotionTrackedDeviceFunctionLibrary
          (UMotionTrackedDeviceFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMotionTrackedDeviceFunctionLibrary__6B_;
  return this;
}

// UMotionTrackedDeviceFunctionLibrary @ 14cf7e3c0

UMotionTrackedDeviceFunctionLibrary * __thiscall
UMotionTrackedDeviceFunctionLibrary::UMotionTrackedDeviceFunctionLibrary
          (UMotionTrackedDeviceFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMotionTrackedDeviceFunctionLibrary__6B_;
  return this;
}

// ~UMotionTrackedDeviceFunctionLibrary @ 14cf7f0b0

void __thiscall
UMotionTrackedDeviceFunctionLibrary::~UMotionTrackedDeviceFunctionLibrary
          (UMotionTrackedDeviceFunctionLibrary *this)

{
  *(undefined ***)this = &___7UMotionTrackedDeviceFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// DisableMotionTrackingForComponent @ 14cf87550

void __cdecl
UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingForComponent
          (UMotionControllerComponent *param_1)

{
  if (param_1 != (UMotionControllerComponent *)0x0) {
    DisableMotionTrackingOfSource(param_1->PlayerIndex,param_1->MotionSource);
    return;
  }
  return;
}

// DisableMotionTrackingOfAllControllers @ 14cf87570

void __cdecl UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfAllControllers(void)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  
  pIVar2 = IModularFeatures::Get();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"MotionTrackingSystemManagement");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))
                    (pIVar2,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                            ::__l2::FeatureName);
  if (0 < iVar1) {
    pIVar2 = IModularFeatures::Get();
    if (*piVar5 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                  ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                        ::__l2::FeatureName,L"MotionTrackingSystemManagement");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))
                      (pIVar2,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                              ::__l2::FeatureName,0);
    plVar4 = (longlong *)(lVar3 + -8);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x30))();
  }
  return;
}

// DisableMotionTrackingOfControllersForPlayer @ 14cf87680

void __cdecl
UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfControllersForPlayer(int param_1)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  
  pIVar2 = IModularFeatures::Get();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"MotionTrackingSystemManagement");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))
                    (pIVar2,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                            ::__l2::FeatureName);
  if (0 < iVar1) {
    pIVar2 = IModularFeatures::Get();
    if (*piVar5 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                  ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                        ::__l2::FeatureName,L"MotionTrackingSystemManagement");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))
                      (pIVar2,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                              ::__l2::FeatureName,0);
    plVar4 = (longlong *)(lVar3 + -8);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x38))(plVar4,param_1);
  }
  return;
}

// DisableMotionTrackingOfDevice @ 14cf877a0

void __cdecl
UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfDevice
          (int param_1,EControllerHand param_2)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  
  pIVar2 = IModularFeatures::Get();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"MotionTrackingSystemManagement");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))
                    (pIVar2,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                            ::__l2::FeatureName);
  if (0 < iVar1) {
    pIVar2 = IModularFeatures::Get();
    if (*piVar5 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                  ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                        ::__l2::FeatureName,L"MotionTrackingSystemManagement");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))
                      (pIVar2,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                              ::__l2::FeatureName,0);
    plVar4 = (longlong *)(lVar3 + -8);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x28))(plVar4,param_1,param_2);
  }
  return;
}

// DisableMotionTrackingOfSource @ 14cf878d0

void __cdecl
UMotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfSource(int param_1,FName param_2)

{
  bool bVar1;
  int iVar2;
  IModularFeatures *pIVar3;
  longlong lVar4;
  longlong *plVar5;
  int *piVar6;
  EControllerHand local_res18 [16];
  
  local_res18[0] = Special;
  bVar1 = IMotionController::GetHandEnumForSourceName(param_2,local_res18);
  if (bVar1) {
    pIVar3 = IModularFeatures::Get();
    piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c);
    if ((*piVar6 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                   ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"MotionTrackingSystemManagement");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    iVar2 = (**(code **)((longlong)*pIVar3 + 0x18))
                      (pIVar3,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                              ::__l2::FeatureName);
    if (0 < iVar2) {
      pIVar3 = IModularFeatures::Get();
      if ((*piVar6 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                     ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                        ::__l2::FeatureName,L"MotionTrackingSystemManagement");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))
                        (pIVar3,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                                ::__l2::FeatureName,0);
      plVar5 = (longlong *)(lVar4 + -8);
      if (lVar4 == 0) {
        plVar5 = (longlong *)0x0;
      }
      (**(code **)(*plVar5 + 0x28))(plVar5,param_1,local_res18[0]);
    }
  }
  return;
}

// EnableMotionTrackingForComponent @ 14cf89370

bool __cdecl
UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingForComponent
          (UMotionControllerComponent *param_1)

{
  bool bVar1;
  
  if (param_1 == (UMotionControllerComponent *)0x0) {
    return false;
  }
  bVar1 = EnableMotionTrackingOfSource(param_1->PlayerIndex,param_1->MotionSource);
  return bVar1;
}

// EnableMotionTrackingOfDevice @ 14cf89390

bool __cdecl
UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfDevice
          (int param_1,EControllerHand param_2)

{
  undefined1 uVar1;
  int iVar2;
  IModularFeatures *pIVar3;
  longlong lVar4;
  longlong *plVar5;
  int *piVar6;
  
  pIVar3 = IModularFeatures::Get();
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar6 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"MotionTrackingSystemManagement");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar2 = (**(code **)((longlong)*pIVar3 + 0x18))
                    (pIVar3,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                            ::__l2::FeatureName);
  if (iVar2 < 1) {
    uVar1 = 1;
  }
  else {
    pIVar3 = IModularFeatures::Get();
    if (*piVar6 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                  ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                        ::__l2::FeatureName,L"MotionTrackingSystemManagement");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))
                      (pIVar3,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                              ::__l2::FeatureName,0);
    plVar5 = (longlong *)(lVar4 + -8);
    if (lVar4 == 0) {
      plVar5 = (longlong *)0x0;
    }
    uVar1 = (**(code **)(*plVar5 + 0x20))(plVar5,param_1,param_2);
  }
  return (bool)uVar1;
}

// EnableMotionTrackingOfSource @ 14cf894d0

bool __cdecl
UMotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfSource(int param_1,FName param_2)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  IModularFeatures *pIVar4;
  longlong lVar5;
  longlong *plVar6;
  int *piVar7;
  EControllerHand local_res18 [16];
  
  local_res18[0] = Special;
  bVar1 = IMotionController::GetHandEnumForSourceName(param_2,local_res18);
  if (bVar1) {
    pIVar4 = IModularFeatures::Get();
    piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c);
    if (*piVar7 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                  ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                        ::__l2::FeatureName,L"MotionTrackingSystemManagement");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    iVar3 = (**(code **)((longlong)*pIVar4 + 0x18))
                      (pIVar4,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                              ::__l2::FeatureName);
    if (0 < iVar3) {
      pIVar4 = IModularFeatures::Get();
      if (*piVar7 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                          ::__l2::FeatureName,L"MotionTrackingSystemManagement");
          _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      lVar5 = (**(code **)((longlong)*pIVar4 + 0x20))
                        (pIVar4,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                                ::__l2::FeatureName,0);
      plVar6 = (longlong *)(lVar5 + -8);
      if (lVar5 == 0) {
        plVar6 = (longlong *)0x0;
      }
      uVar2 = (**(code **)(*plVar6 + 0x20))(plVar6,param_1,local_res18[0]);
      return (bool)uVar2;
    }
  }
  return true;
}

// EnumerateMotionSources @ 14cf897c0

TArray<FName,TSizedDefaultAllocator<32>_> * __cdecl
UMotionTrackedDeviceFunctionLibrary::EnumerateMotionSources
          (TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  FName *pFVar4;
  longlong *plVar5;
  int iVar6;
  IModularFeatures *this;
  int iVar7;
  int iVar8;
  FName *pFVar9;
  ForAnyElementType FVar10;
  undefined1 local_res8 [8];
  FName *local_48;
  undefined8 local_40;
  TArray<IMotionController_*,TSizedDefaultAllocator<32>_> local_38;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  this = IModularFeatures::Get();
  IModularFeatures::GetModularFeatureImplementations<IMotionController>
            (this,&local_38,IMotionController::FeatureName);
  iVar6 = local_38.ArrayNum;
  pFVar3 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar10.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar6) {
      `TCheckedPointerIterator<IMotionController_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar10.Data == pFVar3) break;
    plVar5 = *(longlong **)FVar10.Data;
    if (plVar5 != (longlong *)0x0) {
      local_48 = (FName *)0x0;
      local_40 = 0;
      (**(code **)(*plVar5 + 0x30))(plVar5,&local_48);
      uVar2 = __return_storage_ptr__->ArrayNum + (int)local_40;
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      iVar7 = (int)local_40;
      if (*piVar1 < (int)uVar2) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,uVar2,&__return_storage_ptr__->AllocatorInstance,
                   __return_storage_ptr__->ArrayNum,piVar1);
        iVar7 = (int)local_40;
      }
      pFVar4 = local_48 + iVar7;
      pFVar9 = local_48;
      iVar8 = iVar7;
      while( true ) {
        if (iVar8 != iVar7) {
          `TCheckedPointerIterator<FMotionControllerSource,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar9 == pFVar4) break;
        TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                  (__return_storage_ptr__,pFVar9);
        pFVar9 = pFVar9 + 1;
        iVar8 = (int)local_40;
      }
      if (local_48 != (FName *)0x0) {
        FMemory::Free(local_48);
      }
    }
    FVar10.Data = FVar10.Data + 8;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetActiveTrackingSystemName @ 14cf8db50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __cdecl UMotionTrackedDeviceFunctionLibrary::GetActiveTrackingSystemName(void)

{
  IXRTrackingSystem *pIVar1;
  undefined8 *puVar2;
  FName in_RCX;
  undefined1 local_res8 [32];
  
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    puVar2 = (undefined8 *)(**(code **)*pIVar1)(pIVar1,local_res8);
    *(undefined8 *)in_RCX = *puVar2;
    return in_RCX;
  }
  *(undefined8 *)in_RCX = 0;
  return in_RCX;
}

// GetMaximumMotionTrackedControllerCount @ 14cf8fca0

int __cdecl UMotionTrackedDeviceFunctionLibrary::GetMaximumMotionTrackedControllerCount(void)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  
  pIVar2 = IModularFeatures::Get();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"MotionTrackingSystemManagement");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))
                    (pIVar2,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                            ::__l2::FeatureName);
  if (0 < iVar1) {
    pIVar2 = IModularFeatures::Get();
    if (*piVar5 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                  ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                        ::__l2::FeatureName,L"MotionTrackingSystemManagement");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))
                      (pIVar2,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                              ::__l2::FeatureName,0);
    plVar4 = (longlong *)(lVar3 + -8);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x00014cf8fd2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*plVar4 + 8))();
    return iVar1;
  }
  return -1;
}

// GetMotionTrackingEnabledControllerCount @ 14cf90060

int __cdecl UMotionTrackedDeviceFunctionLibrary::GetMotionTrackingEnabledControllerCount(void)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  
  pIVar2 = IModularFeatures::Get();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"MotionTrackingSystemManagement");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))
                    (pIVar2,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                            ::__l2::FeatureName);
  if (0 < iVar1) {
    pIVar2 = IModularFeatures::Get();
    if (*piVar5 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                  ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                        ::__l2::FeatureName,L"MotionTrackingSystemManagement");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))
                      (pIVar2,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                              ::__l2::FeatureName,0);
    plVar4 = (longlong *)(lVar3 + -8);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x00014cf900ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*plVar4 + 0x10))();
    return iVar1;
  }
  return -1;
}

// GetPrivateStaticClass @ 14cf906c0

UClass * __cdecl UMotionTrackedDeviceFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionTrackedDeviceFunctionLibrary.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/XRBase",L"MotionTrackedDeviceFunctionLibrary",
               &Z_Registration_Info_UClass_UMotionTrackedDeviceFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUMotionTrackedDeviceFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMotionTrackedDeviceFunctionLibrary>,
               InternalVTableHelperCtorCaller<UMotionTrackedDeviceFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionTrackedDeviceFunctionLibrary.InnerSingleton;
}

// IsMotionSourceTracking @ 14cf92cd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl UMotionTrackedDeviceFunctionLibrary::IsMotionSourceTracking(int param_1,FName param_2)

{
  FScriptContainerElement *pFVar1;
  IXRTrackingSystem *pIVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 uVar5;
  char cVar6;
  IModularFeatures *this;
  bool bVar7;
  ForAnyElementType FVar8;
  undefined1 local_res10 [8];
  TArray<IMotionController_*,TSizedDefaultAllocator<32>_> local_28;
  
  bVar7 = false;
  if (param_2 == IMotionController::HMDSourceId) {
    pIVar2 = (GEngine->XRSystem).Object;
    if (pIVar2 == (IXRTrackingSystem *)0x0) {
      return false;
    }
                    /* WARNING: Could not recover jumptable at 0x00014cf92d0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)((longlong)*pIVar2 + 0x48))(pIVar2,0);
    return (bool)uVar5;
  }
  this = IModularFeatures::Get();
  IModularFeatures::GetModularFeatureImplementations<IMotionController>
            (this,&local_28,IMotionController::FeatureName);
  iVar4 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
  FVar8.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (local_28.ArrayNum != iVar4) {
      `TCheckedPointerIterator<IMotionController_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar8.Data == pFVar1) goto LAB_14cf92d86;
    plVar3 = *(longlong **)FVar8.Data;
    if ((plVar3 != (longlong *)0x0) &&
       (cVar6 = (**(code **)(*plVar3 + 0x28))(plVar3,param_1,param_2), cVar6 != '\0')) break;
    FVar8.Data = FVar8.Data + 8;
  }
  bVar7 = true;
LAB_14cf92d86:
  if (local_28.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return bVar7;
  }
  FMemory::Free(local_28.AllocatorInstance.Data);
  return bVar7;
}

// IsMotionTrackedDeviceCountManagementNecessary @ 14cf92dc0

bool __cdecl
UMotionTrackedDeviceFunctionLibrary::IsMotionTrackedDeviceCountManagementNecessary(void)

{
  int iVar1;
  IModularFeatures *pIVar2;
  
  pIVar2 = IModularFeatures::Get();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"MotionTrackingSystemManagement");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))
                    (pIVar2,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                            ::__l2::FeatureName);
  return 0 < iVar1;
}

// IsMotionTrackingEnabledForComponent @ 14cf92e50

bool __cdecl
UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForComponent
          (UMotionControllerComponent *param_1)

{
  bool bVar1;
  
  if (param_1 == (UMotionControllerComponent *)0x0) {
    return false;
  }
  bVar1 = IsMotionTrackingEnabledForSource(param_1->PlayerIndex,param_1->MotionSource);
  return bVar1;
}

// IsMotionTrackingEnabledForDevice @ 14cf92e70

bool __cdecl
UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForDevice
          (int param_1,EControllerHand param_2)

{
  undefined1 uVar1;
  int iVar2;
  IModularFeatures *pIVar3;
  longlong lVar4;
  longlong *plVar5;
  int *piVar6;
  
  pIVar3 = IModularFeatures::Get();
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar6 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"MotionTrackingSystemManagement");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar2 = (**(code **)((longlong)*pIVar3 + 0x18))
                    (pIVar3,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                            ::__l2::FeatureName);
  if (iVar2 < 1) {
    uVar1 = 1;
  }
  else {
    pIVar3 = IModularFeatures::Get();
    if (*piVar6 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                  ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                        ::__l2::FeatureName,L"MotionTrackingSystemManagement");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))
                      (pIVar3,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                              ::__l2::FeatureName,0);
    plVar5 = (longlong *)(lVar4 + -8);
    if (lVar4 == 0) {
      plVar5 = (longlong *)0x0;
    }
    uVar1 = (**(code **)(*plVar5 + 0x18))(plVar5,param_1,param_2);
  }
  return (bool)uVar1;
}

// IsMotionTrackingEnabledForSource @ 14cf92fb0

bool __cdecl
UMotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForSource(int param_1,FName param_2)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  IModularFeatures *pIVar4;
  longlong lVar5;
  longlong *plVar6;
  int *piVar7;
  EControllerHand local_res18 [16];
  
  local_res18[0] = Special;
  bVar1 = IMotionController::GetHandEnumForSourceName(param_2,local_res18);
  if (bVar1) {
    pIVar4 = IModularFeatures::Get();
    piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c);
    if (*piVar7 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                  ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                        ::__l2::FeatureName,L"MotionTrackingSystemManagement");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    iVar3 = (**(code **)((longlong)*pIVar4 + 0x18))
                      (pIVar4,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                              ::__l2::FeatureName);
    if (0 < iVar3) {
      pIVar4 = IModularFeatures::Get();
      if (*piVar7 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                    ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                          ::__l2::FeatureName,L"MotionTrackingSystemManagement");
          _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      lVar5 = (**(code **)((longlong)*pIVar4 + 0x20))
                        (pIVar4,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                                ::__l2::FeatureName,0);
      plVar6 = (longlong *)(lVar5 + -8);
      if (lVar5 == 0) {
        plVar6 = (longlong *)0x0;
      }
      uVar2 = (**(code **)(*plVar6 + 0x18))(plVar6,param_1,local_res18[0]);
      return (bool)uVar2;
    }
  }
  return true;
}

// SetIsControllerMotionTrackingEnabledByDefault @ 14cf9a7a0

void __cdecl
UMotionTrackedDeviceFunctionLibrary::SetIsControllerMotionTrackingEnabledByDefault(bool param_1)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int *piVar5;
  
  pIVar2 = IModularFeatures::Get();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"MotionTrackingSystemManagement");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))
                    (pIVar2,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                            ::__l2::FeatureName);
  if (0 < iVar1) {
    pIVar2 = IModularFeatures::Get();
    if (*piVar5 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                  ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                        ::__l2::FeatureName,L"MotionTrackingSystemManagement");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))
                      (pIVar2,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                              ::__l2::FeatureName,0);
    puVar4 = (undefined8 *)(lVar3 + -8);
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    (**(code **)*puVar4)(puVar4,param_1);
  }
  return;
}

// StaticRegisterNativesUMotionTrackedDeviceFunctionLibrary @ 14cf9c9b0

void __cdecl
UMotionTrackedDeviceFunctionLibrary::StaticRegisterNativesUMotionTrackedDeviceFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x12;
  local_18.DataPtr = Z_Construct_UClass_UMotionTrackedDeviceFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execDisableMotionTrackingForComponent @ 14cfa1720

void __cdecl
UMotionTrackedDeviceFunctionLibrary::execDisableMotionTrackingForComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong local_res10 [3];
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != 0) {
    DisableMotionTrackingOfSource
              (*(int *)(local_res10[0] + 0x548),*(FName *)(local_res10[0] + 0x54c));
  }
  return;
}

// execDisableMotionTrackingOfAllControllers @ 14cfa17b0

void __cdecl
UMotionTrackedDeviceFunctionLibrary::execDisableMotionTrackingOfAllControllers
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar2 = IModularFeatures::Get();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar5 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"MotionTrackingSystemManagement");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))
                    (pIVar2,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                            ::__l2::FeatureName);
  if (0 < iVar1) {
    pIVar2 = IModularFeatures::Get();
    if (*piVar5 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                  ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                        ::__l2::FeatureName,L"MotionTrackingSystemManagement");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))
                      (pIVar2,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                              ::__l2::FeatureName,0);
    plVar4 = (longlong *)(lVar3 + -8);
    if (lVar3 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x30))();
  }
  return;
}

// execDisableMotionTrackingOfControllersForPlayer @ 14cfa18e0

void __cdecl
UMotionTrackedDeviceFunctionLibrary::execDisableMotionTrackingOfControllersForPlayer
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  int iVar3;
  IModularFeatures *pIVar4;
  longlong lVar5;
  longlong *plVar6;
  int *piVar7;
  undefined4 local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar4 = IModularFeatures::Get();
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar7 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"MotionTrackingSystemManagement");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar3 = (**(code **)((longlong)*pIVar4 + 0x18))
                    (pIVar4,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                            ::__l2::FeatureName);
  if (0 < iVar3) {
    pIVar4 = IModularFeatures::Get();
    if (*piVar7 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                  ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                        ::__l2::FeatureName,L"MotionTrackingSystemManagement");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    lVar5 = (**(code **)((longlong)*pIVar4 + 0x20))
                      (pIVar4,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                              ::__l2::FeatureName,0);
    plVar6 = (longlong *)(lVar5 + -8);
    if (lVar5 == 0) {
      plVar6 = (longlong *)0x0;
    }
    (**(code **)(*plVar6 + 0x38))(plVar6,uVar2);
  }
  return;
}

// execDisableMotionTrackingOfDevice @ 14cfa1a60

void __cdecl
UMotionTrackedDeviceFunctionLibrary::execDisableMotionTrackingOfDevice
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  IModularFeatures *pIVar5;
  longlong lVar6;
  longlong *plVar7;
  int *piVar8;
  undefined1 local_res10 [8];
  undefined4 local_res20 [2];
  
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar3 = local_res20[0];
  uVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar5 = IModularFeatures::Get();
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar8 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"MotionTrackingSystemManagement");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar4 = (**(code **)((longlong)*pIVar5 + 0x18))
                    (pIVar5,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                            ::__l2::FeatureName);
  if (0 < iVar4) {
    pIVar5 = IModularFeatures::Get();
    if (*piVar8 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                  ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                        ::__l2::FeatureName,L"MotionTrackingSystemManagement");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    lVar6 = (**(code **)((longlong)*pIVar5 + 0x20))
                      (pIVar5,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                              ::__l2::FeatureName,0);
    plVar7 = (longlong *)(lVar6 + -8);
    if (lVar6 == 0) {
      plVar7 = (longlong *)0x0;
    }
    (**(code **)(*plVar7 + 0x28))(plVar7,uVar3,uVar2);
  }
  return;
}

// execDisableMotionTrackingOfSource @ 14cfa1c30

void __cdecl
UMotionTrackedDeviceFunctionLibrary::execDisableMotionTrackingOfSource
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [4];
  FName local_res20;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  DisableMotionTrackingOfSource(local_res10[0],local_res20);
  return;
}

// execEnableMotionTrackingForComponent @ 14cfa1e70

void __cdecl
UMotionTrackedDeviceFunctionLibrary::execEnableMotionTrackingForComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  longlong local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == 0) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  bVar2 = EnableMotionTrackingOfSource
                    (*(int *)(local_res10 + 0x548),*(FName *)(local_res10 + 0x54c));
  *(bool *)param_3 = bVar2;
  return;
}

// execEnableMotionTrackingOfDevice @ 14cfa1f20

void __cdecl
UMotionTrackedDeviceFunctionLibrary::execEnableMotionTrackingOfDevice
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  IModularFeatures *pIVar5;
  longlong lVar6;
  longlong *plVar7;
  int *piVar8;
  undefined1 local_res10 [8];
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar2 = local_res18[0];
  uVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar5 = IModularFeatures::Get();
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar8 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"MotionTrackingSystemManagement");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar4 = (**(code **)((longlong)*pIVar5 + 0x18))
                    (pIVar5,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                            ::__l2::FeatureName);
  if (0 < iVar4) {
    pIVar5 = IModularFeatures::Get();
    if (*piVar8 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                  ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                        ::__l2::FeatureName,L"MotionTrackingSystemManagement");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    lVar6 = (**(code **)((longlong)*pIVar5 + 0x20))
                      (pIVar5,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                              ::__l2::FeatureName,0);
    plVar7 = (longlong *)(lVar6 + -8);
    if (lVar6 == 0) {
      plVar7 = (longlong *)0x0;
    }
    uVar3 = (**(code **)(*plVar7 + 0x20))(plVar7,uVar2,uVar3);
    *(undefined1 *)param_3 = uVar3;
    return;
  }
  *(undefined1 *)param_3 = 1;
  return;
}

// execEnableMotionTrackingOfSource @ 14cfa2100

void __cdecl
UMotionTrackedDeviceFunctionLibrary::execEnableMotionTrackingOfSource
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  FName local_res18;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = EnableMotionTrackingOfSource(local_res10[0],local_res18);
  *(bool *)param_3 = bVar2;
  return;
}

// execEnumerateMotionSources @ 14cfa21d0

void __cdecl
UMotionTrackedDeviceFunctionLibrary::execEnumerateMotionSources
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  uint uVar1;
  FName *pFVar2;
  longlong *plVar3;
  int iVar4;
  IModularFeatures *this;
  int iVar5;
  int iVar6;
  FName *pFVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType FVar9;
  undefined1 local_res10 [16];
  FScriptContainerElement *local_res20;
  TArray<FName,TSizedDefaultAllocator<32>_> local_68;
  FName *local_58;
  undefined8 local_50;
  TArray<IMotionController_*,TSizedDefaultAllocator<32>_> local_48;
  
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = IModularFeatures::Get();
  IModularFeatures::GetModularFeatureImplementations<IMotionController>
            (this,&local_48,IMotionController::FeatureName);
  iVar4 = local_48.ArrayNum;
  pFVar8 = local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 8;
  FVar9.Data = local_48.AllocatorInstance.Data;
  local_res20 = pFVar8;
  while( true ) {
    if (local_48.ArrayNum != iVar4) {
      `TCheckedPointerIterator<IMotionController_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar9.Data == pFVar8) break;
    plVar3 = *(longlong **)FVar9.Data;
    if (plVar3 != (longlong *)0x0) {
      local_58 = (FName *)0x0;
      local_50 = 0;
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_58);
      uVar1 = (int)local_50 + local_68.ArrayNum;
      if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
      }
      iVar5 = (int)local_50;
      if (local_68.ArrayMax < (int)uVar1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,uVar1,&local_68.AllocatorInstance,local_68.ArrayNum,&local_68.ArrayMax);
        iVar5 = (int)local_50;
      }
      pFVar2 = local_58 + iVar5;
      pFVar7 = local_58;
      iVar6 = iVar5;
      while( true ) {
        if (iVar6 != iVar5) {
          `TCheckedPointerIterator<FMotionControllerSource,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (pFVar7 == pFVar2) break;
        TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(&local_68,pFVar7);
        pFVar7 = pFVar7 + 1;
        iVar6 = (int)local_50;
      }
      pFVar8 = local_res20;
      if (local_58 != (FName *)0x0) {
        FMemory::Free(local_58);
        pFVar8 = local_res20;
      }
    }
    FVar9.Data = FVar9.Data + 8;
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (param_3 != &local_68) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_68.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_68.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_68.ArrayMax;
    local_68.ArrayNum = 0;
    local_68.ArrayMax = 0;
    local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

// execGetActiveTrackingSystemName @ 14cfa2490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UMotionTrackedDeviceFunctionLibrary::execGetActiveTrackingSystemName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  IXRTrackingSystem *pIVar1;
  undefined8 *puVar2;
  undefined1 local_res10 [24];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 != (IXRTrackingSystem *)0x0) {
    puVar2 = (undefined8 *)(**(code **)*pIVar1)(pIVar1,local_res10);
    *(undefined8 *)param_3 = *puVar2;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetMaximumMotionTrackedControllerCount @ 14cfa3380

void __cdecl
UMotionTrackedDeviceFunctionLibrary::execGetMaximumMotionTrackedControllerCount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  undefined4 uVar2;
  IModularFeatures *pIVar3;
  longlong lVar4;
  longlong *plVar5;
  int *piVar6;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar3 = IModularFeatures::Get();
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar6 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"MotionTrackingSystemManagement");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar1 = (**(code **)((longlong)*pIVar3 + 0x18))
                    (pIVar3,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                            ::__l2::FeatureName);
  if (iVar1 < 1) {
    *(undefined4 *)param_3 = 0xffffffff;
  }
  else {
    pIVar3 = IModularFeatures::Get();
    if (*piVar6 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                  ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                        ::__l2::FeatureName,L"MotionTrackingSystemManagement");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))
                      (pIVar3,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                              ::__l2::FeatureName,0);
    plVar5 = (longlong *)(lVar4 + -8);
    if (lVar4 == 0) {
      plVar5 = (longlong *)0x0;
    }
    uVar2 = (**(code **)(*plVar5 + 8))();
    *(undefined4 *)param_3 = uVar2;
  }
  return;
}

// execGetMotionTrackingEnabledControllerCount @ 14cfa36d0

void __cdecl
UMotionTrackedDeviceFunctionLibrary::execGetMotionTrackingEnabledControllerCount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  undefined4 uVar2;
  IModularFeatures *pIVar3;
  longlong lVar4;
  longlong *plVar5;
  int *piVar6;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar3 = IModularFeatures::Get();
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar6 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"MotionTrackingSystemManagement");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar1 = (**(code **)((longlong)*pIVar3 + 0x18))
                    (pIVar3,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                            ::__l2::FeatureName);
  if (iVar1 < 1) {
    *(undefined4 *)param_3 = 0xffffffff;
  }
  else {
    pIVar3 = IModularFeatures::Get();
    if (*piVar6 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                  ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                        ::__l2::FeatureName,L"MotionTrackingSystemManagement");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))
                      (pIVar3,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                              ::__l2::FeatureName,0);
    plVar5 = (longlong *)(lVar4 + -8);
    if (lVar4 == 0) {
      plVar5 = (longlong *)0x0;
    }
    uVar2 = (**(code **)(*plVar5 + 0x10))();
    *(undefined4 *)param_3 = uVar2;
  }
  return;
}

// execIsMotionSourceTracking @ 14cfa4a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UMotionTrackedDeviceFunctionLibrary::execIsMotionSourceTracking
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  FProperty *pFVar2;
  IXRTrackingSystem *pIVar3;
  longlong *plVar4;
  undefined4 uVar5;
  FName FVar6;
  int iVar7;
  undefined1 uVar8;
  char cVar9;
  IModularFeatures *this;
  ForAnyElementType FVar10;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  FName local_res20;
  TArray<IMotionController_*,TSizedDefaultAllocator<32>_> local_48;
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  FVar6 = local_res20;
  uVar5 = local_res18[0];
  uVar8 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != IMotionController::HMDSourceId) {
    this = IModularFeatures::Get();
    IModularFeatures::GetModularFeatureImplementations<IMotionController>
              (this,&local_48,IMotionController::FeatureName);
    iVar7 = local_48.ArrayNum;
    pFVar1 = local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 8;
    FVar10.Data = local_48.AllocatorInstance.Data;
    do {
      if (local_48.ArrayNum != iVar7) {
        `TCheckedPointerIterator<IMotionController_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      uVar8 = 0;
      if (FVar10.Data == pFVar1) goto LAB_14cfa4bf6;
      plVar4 = *(longlong **)FVar10.Data;
      if (plVar4 != (longlong *)0x0) {
        cVar9 = (**(code **)(*plVar4 + 0x28))(plVar4,uVar5,FVar6);
        if (cVar9 != '\0') goto LAB_14cfa4bf3;
      }
      FVar10.Data = FVar10.Data + 8;
    } while( true );
  }
  pIVar3 = (GEngine->XRSystem).Object;
  if (pIVar3 != (IXRTrackingSystem *)0x0) {
    uVar8 = (**(code **)((longlong)*pIVar3 + 0x48))(pIVar3,0);
    *(undefined1 *)param_3 = uVar8;
    return;
  }
LAB_14cfa4c0a:
  *(undefined1 *)param_3 = uVar8;
  return;
LAB_14cfa4bf3:
  uVar8 = 1;
LAB_14cfa4bf6:
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  goto LAB_14cfa4c0a;
}

// execIsMotionTrackedDeviceCountManagementNecessary @ 14cfa4c30

void __cdecl
UMotionTrackedDeviceFunctionLibrary::execIsMotionTrackedDeviceCountManagementNecessary
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  IModularFeatures *pIVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar2 = IModularFeatures::Get();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"MotionTrackingSystemManagement");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))
                    (pIVar2,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                            ::__l2::FeatureName);
  *(bool *)param_3 = 0 < iVar1;
  return;
}

// execIsMotionTrackingEnabledForComponent @ 14cfa4ce0

void __cdecl
UMotionTrackedDeviceFunctionLibrary::execIsMotionTrackingEnabledForComponent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  longlong local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == 0) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  bVar2 = IsMotionTrackingEnabledForSource
                    (*(int *)(local_res10 + 0x548),*(FName *)(local_res10 + 0x54c));
  *(bool *)param_3 = bVar2;
  return;
}

// execIsMotionTrackingEnabledForDevice @ 14cfa4d90

void __cdecl
UMotionTrackedDeviceFunctionLibrary::execIsMotionTrackingEnabledForDevice
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  IModularFeatures *pIVar5;
  longlong lVar6;
  longlong *plVar7;
  int *piVar8;
  undefined1 local_res10 [8];
  undefined4 local_res18 [4];
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar2 = local_res18[0];
  uVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar5 = IModularFeatures::Get();
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar8 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"MotionTrackingSystemManagement");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar4 = (**(code **)((longlong)*pIVar5 + 0x18))
                    (pIVar5,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                            ::__l2::FeatureName);
  if (0 < iVar4) {
    pIVar5 = IModularFeatures::Get();
    if (*piVar8 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                  ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                        ::__l2::FeatureName,L"MotionTrackingSystemManagement");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    lVar6 = (**(code **)((longlong)*pIVar5 + 0x20))
                      (pIVar5,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                              ::__l2::FeatureName,0);
    plVar7 = (longlong *)(lVar6 + -8);
    if (lVar6 == 0) {
      plVar7 = (longlong *)0x0;
    }
    uVar3 = (**(code **)(*plVar7 + 0x18))(plVar7,uVar2,uVar3);
    *(undefined1 *)param_3 = uVar3;
    return;
  }
  *(undefined1 *)param_3 = 1;
  return;
}

// execIsMotionTrackingEnabledForSource @ 14cfa4f70

void __cdecl
UMotionTrackedDeviceFunctionLibrary::execIsMotionTrackingEnabledForSource
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [2];
  FName local_res18;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = IsMotionTrackingEnabledForSource(local_res10[0],local_res18);
  *(bool *)param_3 = bVar2;
  return;
}

// execSetIsControllerMotionTrackingEnabledByDefault @ 14cfa5650

void __cdecl
UMotionTrackedDeviceFunctionLibrary::execSetIsControllerMotionTrackingEnabledByDefault
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  IModularFeatures *pIVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int *piVar6;
  bool bVar7;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar7 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar3 = IModularFeatures::Get();
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar6 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"MotionTrackingSystemManagement");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  iVar2 = (**(code **)((longlong)*pIVar3 + 0x18))
                    (pIVar3,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                            ::__l2::FeatureName);
  if (0 < iVar2) {
    pIVar3 = IModularFeatures::Get();
    if (*piVar6 < `public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                  ::__l2::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      if (`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
          ::__l2::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                        ::__l2::FeatureName,L"MotionTrackingSystemManagement");
        _Init_thread_footer(&`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
    }
    lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))
                      (pIVar3,`public:_static_class_FName___cdecl_IMotionTrackingSystemManagement::GetModularFeatureName(void)'
                              ::__l2::FeatureName,0);
    puVar5 = (undefined8 *)(lVar4 + -8);
    if (lVar4 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    (**(code **)*puVar5)(puVar5,bVar7);
  }
  return;
}

