// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Reflex
// Functions: 22

// StaticClass @ 14accea40

UClass * __cdecl UReflexBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReflexBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Reflex",L"ReflexBlueprintLibrary",
               &Z_Registration_Info_UClass_UReflexBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUReflexBlueprintLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UReflexBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UReflexBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReflexBlueprintLibrary.InnerSingleton;
}

// UReflexBlueprintLibrary @ 14accf650

UReflexBlueprintLibrary * __thiscall
UReflexBlueprintLibrary::UReflexBlueprintLibrary
          (UReflexBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UReflexBlueprintLibrary__6B_;
  return this;
}

// UReflexBlueprintLibrary @ 14accf680

UReflexBlueprintLibrary * __thiscall
UReflexBlueprintLibrary::UReflexBlueprintLibrary
          (UReflexBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UReflexBlueprintLibrary__6B_;
  return this;
}

// ~UReflexBlueprintLibrary @ 14accf890

void __thiscall UReflexBlueprintLibrary::~UReflexBlueprintLibrary(UReflexBlueprintLibrary *this)

{
  *(undefined ***)this = &___7UReflexBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetFlashIndicatorEnabled @ 14acd0190

bool __cdecl UReflexBlueprintLibrary::GetFlashIndicatorEnabled(void)

{
  undefined1 uVar1;
  IModularFeatures *this;
  TArray<ILatencyMarkerModule_*,TSizedDefaultAllocator<32>_> local_18;
  
  this = IModularFeatures::Get();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"LatencyMarker");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  IModularFeatures::GetModularFeatureImplementations<ILatencyMarkerModule>
            (this,&local_18,
             `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
             ::__l2::FeatureName);
  if (local_18.AllocatorInstance.Data ==
      local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 8) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)local_18.AllocatorInstance.Data + 0x28))();
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return (bool)uVar1;
}

// GetGameLatencyInMs @ 14acd02b0

float __cdecl UReflexBlueprintLibrary::GetGameLatencyInMs(void)

{
  FScriptContainerElement *pFVar1;
  IModularFeatures *this;
  int iVar2;
  ForAnyElementType FVar3;
  float fVar4;
  undefined1 local_res8 [8];
  TArray<ILatencyMarkerModule_*,TSizedDefaultAllocator<32>_> local_38 [3];
  
  this = IModularFeatures::Get();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"LatencyMarker");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  IModularFeatures::GetModularFeatureImplementations<ILatencyMarkerModule>
            (this,local_38,
             `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
             ::__l2::FeatureName);
  iVar2 = (int)local_38[0]._8_8_;
  pFVar1 = local_38[0].AllocatorInstance.Data + (longlong)iVar2 * 8;
  FVar3.Data = local_38[0].AllocatorInstance.Data;
  while( true ) {
    if ((int)local_38[0]._8_8_ != iVar2) {
      `TCheckedPointerIterator<ILatencyMarkerModule_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar3.Data == pFVar1) break;
    fVar4 = (float)(**(code **)(**(longlong **)FVar3.Data + 0x80))();
    if (0.0 < fVar4) goto LAB_14acd0359;
    FVar3.Data = FVar3.Data + 8;
  }
  fVar4 = 0.0;
LAB_14acd0359:
  if (local_38[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].AllocatorInstance.Data);
  }
  return fVar4;
}

// GetGameToRenderLatencyInMs @ 14acd03d0

float __cdecl UReflexBlueprintLibrary::GetGameToRenderLatencyInMs(void)

{
  FScriptContainerElement *pFVar1;
  IModularFeatures *this;
  int iVar2;
  ForAnyElementType FVar3;
  float fVar4;
  undefined1 local_res8 [8];
  TArray<ILatencyMarkerModule_*,TSizedDefaultAllocator<32>_> local_38 [3];
  
  this = IModularFeatures::Get();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"LatencyMarker");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  IModularFeatures::GetModularFeatureImplementations<ILatencyMarkerModule>
            (this,local_38,
             `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
             ::__l2::FeatureName);
  iVar2 = (int)local_38[0]._8_8_;
  pFVar1 = local_38[0].AllocatorInstance.Data + (longlong)iVar2 * 8;
  FVar3.Data = local_38[0].AllocatorInstance.Data;
  while( true ) {
    if ((int)local_38[0]._8_8_ != iVar2) {
      `TCheckedPointerIterator<ILatencyMarkerModule_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar3.Data == pFVar1) break;
    fVar4 = (float)(**(code **)(**(longlong **)FVar3.Data + 0x78))();
    if (0.0 < fVar4) goto LAB_14acd0476;
    FVar3.Data = FVar3.Data + 8;
  }
  fVar4 = 0.0;
LAB_14acd0476:
  if (local_38[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].AllocatorInstance.Data);
  }
  return fVar4;
}

// GetPrivateStaticClass @ 14acd0570

UClass * __cdecl UReflexBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UReflexBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Reflex",L"ReflexBlueprintLibrary",
               &Z_Registration_Info_UClass_UReflexBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUReflexBlueprintLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UReflexBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UReflexBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UReflexBlueprintLibrary.InnerSingleton;
}

// GetReflexAvailable @ 14acd0630

bool __cdecl UReflexBlueprintLibrary::GetReflexAvailable(void)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  IModularFeatures *pIVar5;
  bool bVar6;
  ForAnyElementType FVar7;
  ulonglong uVar8;
  undefined1 local_res8 [8];
  TArray<ILatencyMarkerModule_*,TSizedDefaultAllocator<32>_> local_38;
  TArray<IMaxTickRateHandlerModule_*,TSizedDefaultAllocator<32>_> local_28;
  
  bVar6 = false;
  pIVar5 = IModularFeatures::Get();
  uVar8 = (ulonglong)_tls_index;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0x9d4c) <
      `public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"MaxTickRateHandler");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  IModularFeatures::GetModularFeatureImplementations<IMaxTickRateHandlerModule>
            (pIVar5,&local_28,
             `public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
             ::__l2::FeatureName);
  iVar3 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
  FVar7.Data = local_28.AllocatorInstance.Data;
LAB_14acd06a0:
  do {
    if (local_28.ArrayNum != iVar3) {
      `TCheckedPointerIterator<IMaxTickRateHandlerModule_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar7.Data == pFVar1) break;
    if (!bVar6) {
      cVar4 = (**(code **)(**(longlong **)FVar7.Data + 0x18))();
      if (cVar4 == '\0') {
        FVar7.Data = FVar7.Data + 8;
        goto LAB_14acd06a0;
      }
    }
    bVar6 = true;
    FVar7.Data = FVar7.Data + 8;
  } while( true );
  bVar2 = false;
  pIVar5 = IModularFeatures::Get();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8) + 0x9d4c) <
      `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"LatencyMarker");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  IModularFeatures::GetModularFeatureImplementations<ILatencyMarkerModule>
            (pIVar5,&local_38,
             `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
             ::__l2::FeatureName);
  iVar3 = local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
LAB_14acd0720:
  do {
    if (local_38.ArrayNum != iVar3) {
      `TCheckedPointerIterator<ILatencyMarkerModule_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar7.Data == pFVar1) {
      if ((bVar6) && (bVar2)) {
        bVar6 = true;
      }
      else {
        bVar6 = false;
      }
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      return bVar6;
    }
    if (!bVar2) {
      cVar4 = (**(code **)(**(longlong **)FVar7.Data + 0x18))();
      if (cVar4 == '\0') {
        FVar7.Data = FVar7.Data + 8;
        goto LAB_14acd0720;
      }
    }
    bVar2 = true;
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// GetReflexMode @ 14acd0820

EReflexMode __cdecl UReflexBlueprintLibrary::GetReflexMode(void)

{
  EReflexMode EVar1;
  IModularFeatures *this;
  TArray<IMaxTickRateHandlerModule_*,TSizedDefaultAllocator<32>_> local_18;
  
  this = IModularFeatures::Get();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"MaxTickRateHandler");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  IModularFeatures::GetModularFeatureImplementations<IMaxTickRateHandlerModule>
            (this,&local_18,
             `public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
             ::__l2::FeatureName);
  if (local_18.AllocatorInstance.Data ==
      local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 8) {
    EVar1 = Disabled;
  }
  else {
    EVar1 = (**(code **)(**(longlong **)local_18.AllocatorInstance.Data + 0x28))();
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return EVar1;
}

// GetRenderLatencyInMs @ 14acd0900

float __cdecl UReflexBlueprintLibrary::GetRenderLatencyInMs(void)

{
  FScriptContainerElement *pFVar1;
  IModularFeatures *this;
  int iVar2;
  ForAnyElementType FVar3;
  float fVar4;
  undefined1 local_res8 [8];
  TArray<ILatencyMarkerModule_*,TSizedDefaultAllocator<32>_> local_38 [3];
  
  this = IModularFeatures::Get();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"LatencyMarker");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  IModularFeatures::GetModularFeatureImplementations<ILatencyMarkerModule>
            (this,local_38,
             `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
             ::__l2::FeatureName);
  iVar2 = (int)local_38[0]._8_8_;
  pFVar1 = local_38[0].AllocatorInstance.Data + (longlong)iVar2 * 8;
  FVar3.Data = local_38[0].AllocatorInstance.Data;
  while( true ) {
    if ((int)local_38[0]._8_8_ != iVar2) {
      `TCheckedPointerIterator<ILatencyMarkerModule_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar3.Data == pFVar1) break;
    fVar4 = (float)(**(code **)(**(longlong **)FVar3.Data + 0x88))();
    if (0.0 < fVar4) goto LAB_14acd09a9;
    FVar3.Data = FVar3.Data + 8;
  }
  fVar4 = 0.0;
LAB_14acd09a9:
  if (local_38[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].AllocatorInstance.Data);
  }
  return fVar4;
}

// SetFlashIndicatorEnabled @ 14acd1b50

void __cdecl UReflexBlueprintLibrary::SetFlashIndicatorEnabled(bool param_1)

{
  FScriptContainerElement *pFVar1;
  IModularFeatures *this;
  int iVar2;
  ForAnyElementType FVar3;
  undefined1 local_res10 [8];
  TArray<ILatencyMarkerModule_*,TSizedDefaultAllocator<32>_> local_18;
  
  this = IModularFeatures::Get();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"LatencyMarker");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  IModularFeatures::GetModularFeatureImplementations<ILatencyMarkerModule>
            (this,&local_18,
             `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
             ::__l2::FeatureName);
  iVar2 = local_18.ArrayNum;
  pFVar1 = local_18.AllocatorInstance.Data + (longlong)iVar2 * 8;
  FVar3.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if (local_18.ArrayNum != iVar2) {
      `TCheckedPointerIterator<ILatencyMarkerModule_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar3.Data == pFVar1) break;
    (**(code **)(**(longlong **)FVar3.Data + 0x20))(*(longlong **)FVar3.Data,param_1);
    FVar3.Data = FVar3.Data + 8;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// SetReflexMode @ 14acd1fa0

void __cdecl UReflexBlueprintLibrary::SetReflexMode(EReflexMode param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  IModularFeatures *pIVar3;
  int iVar4;
  ForAnyElementType FVar5;
  int *piVar6;
  undefined1 local_res10 [8];
  TArray<ILatencyMarkerModule_*,TSizedDefaultAllocator<32>_> local_38;
  TArray<IMaxTickRateHandlerModule_*,TSizedDefaultAllocator<32>_> local_28;
  
  pIVar3 = IModularFeatures::Get();
  piVar6 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar6 < `public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"MaxTickRateHandler");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  IModularFeatures::GetModularFeatureImplementations<IMaxTickRateHandlerModule>
            (pIVar3,&local_28,
             `public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
             ::__l2::FeatureName);
  iVar4 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)iVar4 * 8;
  FVar5.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (local_28.ArrayNum != iVar4) {
      `TCheckedPointerIterator<IMaxTickRateHandlerModule_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar5.Data == pFVar1) break;
    plVar2 = *(longlong **)FVar5.Data;
    (**(code **)(*plVar2 + 8))(plVar2,param_1 != Disabled);
    (**(code **)(*plVar2 + 0x20))(plVar2,param_1);
    FVar5.Data = FVar5.Data + 8;
  }
  pIVar3 = IModularFeatures::Get();
  if (*piVar6 < `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"LatencyMarker");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  IModularFeatures::GetModularFeatureImplementations<ILatencyMarkerModule>
            (pIVar3,&local_38,
             `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
             ::__l2::FeatureName);
  iVar4 = local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)iVar4 * 8;
  FVar5.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar4) {
      `TCheckedPointerIterator<ILatencyMarkerModule_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar5.Data == pFVar1) break;
    (**(code **)(**(longlong **)FVar5.Data + 8))(*(longlong **)FVar5.Data,1);
    FVar5.Data = FVar5.Data + 8;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUReflexBlueprintLibrary @ 14acd24a0

void __cdecl UReflexBlueprintLibrary::StaticRegisterNativesUReflexBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UReflexBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetFlashIndicatorEnabled @ 14acd2b80

void __cdecl
UReflexBlueprintLibrary::execGetFlashIndicatorEnabled
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  IModularFeatures *this;
  TArray<ILatencyMarkerModule_*,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = IModularFeatures::Get();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"LatencyMarker");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  IModularFeatures::GetModularFeatureImplementations<ILatencyMarkerModule>
            (this,&local_18,
             `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
             ::__l2::FeatureName);
  if (local_18.AllocatorInstance.Data !=
      local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 8) {
    uVar1 = (**(code **)(**(longlong **)local_18.AllocatorInstance.Data + 0x28))();
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
    *(undefined1 *)param_3 = uVar1;
    return;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetGameLatencyInMs @ 14acd2c80

void __cdecl
UReflexBlueprintLibrary::execGetGameLatencyInMs(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  IModularFeatures *this;
  int iVar2;
  ForAnyElementType FVar3;
  float fVar4;
  undefined1 local_res10 [8];
  TArray<ILatencyMarkerModule_*,TSizedDefaultAllocator<32>_> local_38 [3];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = IModularFeatures::Get();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2
       ::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                    ::__l2::FeatureName,L"LatencyMarker");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  IModularFeatures::GetModularFeatureImplementations<ILatencyMarkerModule>
            (this,local_38,
             `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
             ::__l2::FeatureName);
  iVar2 = (int)local_38[0]._8_8_;
  pFVar1 = local_38[0].AllocatorInstance.Data + (longlong)iVar2 * 8;
  FVar3.Data = local_38[0].AllocatorInstance.Data;
  while( true ) {
    if ((int)local_38[0]._8_8_ != iVar2) {
      `TCheckedPointerIterator<ILatencyMarkerModule_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar3.Data == pFVar1) break;
    fVar4 = (float)(**(code **)(**(longlong **)FVar3.Data + 0x80))();
    if (0.0 < fVar4) {
      if (local_38[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].AllocatorInstance.Data);
      }
      *(float *)param_3 = fVar4;
      return;
    }
    FVar3.Data = FVar3.Data + 8;
  }
  if (local_38[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].AllocatorInstance.Data);
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetGameToRenderLatencyInMs @ 14acd2dd0

void __cdecl
UReflexBlueprintLibrary::execGetGameToRenderLatencyInMs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  IModularFeatures *this;
  int iVar2;
  ForAnyElementType FVar3;
  float fVar4;
  undefined1 local_res10 [8];
  TArray<ILatencyMarkerModule_*,TSizedDefaultAllocator<32>_> local_38 [3];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = IModularFeatures::Get();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2
       ::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                    ::__l2::FeatureName,L"LatencyMarker");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  IModularFeatures::GetModularFeatureImplementations<ILatencyMarkerModule>
            (this,local_38,
             `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
             ::__l2::FeatureName);
  iVar2 = (int)local_38[0]._8_8_;
  pFVar1 = local_38[0].AllocatorInstance.Data + (longlong)iVar2 * 8;
  FVar3.Data = local_38[0].AllocatorInstance.Data;
  while( true ) {
    if ((int)local_38[0]._8_8_ != iVar2) {
      `TCheckedPointerIterator<ILatencyMarkerModule_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar3.Data == pFVar1) break;
    fVar4 = (float)(**(code **)(**(longlong **)FVar3.Data + 0x78))();
    if (0.0 < fVar4) {
      if (local_38[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].AllocatorInstance.Data);
      }
      *(float *)param_3 = fVar4;
      return;
    }
    FVar3.Data = FVar3.Data + 8;
  }
  if (local_38[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].AllocatorInstance.Data);
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetReflexAvailable @ 14acd2f20

void __cdecl
UReflexBlueprintLibrary::execGetReflexAvailable(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = GetReflexAvailable();
  *(bool *)param_3 = bVar1;
  return;
}

// execGetReflexMode @ 14acd2f50

void __cdecl
UReflexBlueprintLibrary::execGetReflexMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  IModularFeatures *this;
  TArray<IMaxTickRateHandlerModule_*,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = IModularFeatures::Get();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"MaxTickRateHandler");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  IModularFeatures::GetModularFeatureImplementations<IMaxTickRateHandlerModule>
            (this,&local_18,
             `public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
             ::__l2::FeatureName);
  if (local_18.AllocatorInstance.Data !=
      local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 8) {
    uVar1 = (**(code **)(**(longlong **)local_18.AllocatorInstance.Data + 0x28))();
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
    *(undefined1 *)param_3 = uVar1;
    return;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetRenderLatencyInMs @ 14acd3050

void __cdecl
UReflexBlueprintLibrary::execGetRenderLatencyInMs(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  IModularFeatures *this;
  int iVar2;
  ForAnyElementType FVar3;
  float fVar4;
  undefined1 local_res10 [8];
  TArray<ILatencyMarkerModule_*,TSizedDefaultAllocator<32>_> local_38 [3];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = IModularFeatures::Get();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2
       ::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                    ::__l2::FeatureName,L"LatencyMarker");
    _Init_thread_footer(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  IModularFeatures::GetModularFeatureImplementations<ILatencyMarkerModule>
            (this,local_38,
             `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
             ::__l2::FeatureName);
  iVar2 = (int)local_38[0]._8_8_;
  pFVar1 = local_38[0].AllocatorInstance.Data + (longlong)iVar2 * 8;
  FVar3.Data = local_38[0].AllocatorInstance.Data;
  while( true ) {
    if ((int)local_38[0]._8_8_ != iVar2) {
      `TCheckedPointerIterator<ILatencyMarkerModule_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar3.Data == pFVar1) break;
    fVar4 = (float)(**(code **)(**(longlong **)FVar3.Data + 0x88))();
    if (0.0 < fVar4) {
      if (local_38[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].AllocatorInstance.Data);
      }
      *(float *)param_3 = fVar4;
      return;
    }
    FVar3.Data = FVar3.Data + 8;
  }
  if (local_38[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].AllocatorInstance.Data);
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execSetFlashIndicatorEnabled @ 14acd31a0

void __cdecl
UReflexBlueprintLibrary::execSetFlashIndicatorEnabled
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  FProperty *pFVar2;
  IModularFeatures *this;
  int iVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  undefined1 local_res10 [16];
  int local_res20 [2];
  TArray<ILatencyMarkerModule_*,TSizedDefaultAllocator<32>_> local_28;
  
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar5 = local_res20[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = IModularFeatures::Get();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"LatencyMarker");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  IModularFeatures::GetModularFeatureImplementations<ILatencyMarkerModule>
            (this,&local_28,
             `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
             ::__l2::FeatureName);
  iVar3 = local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + (longlong)iVar3 * 8;
  FVar4.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if (local_28.ArrayNum != iVar3) {
      `TCheckedPointerIterator<ILatencyMarkerModule_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar4.Data == pFVar1) break;
    (**(code **)(**(longlong **)FVar4.Data + 0x20))(*(longlong **)FVar4.Data,bVar5);
    FVar4.Data = FVar4.Data + 8;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execSetReflexMode @ 14acd32f0

void __cdecl
UReflexBlueprintLibrary::execSetReflexMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  FProperty *pFVar2;
  longlong *plVar3;
  char cVar4;
  IModularFeatures *pIVar5;
  int iVar6;
  ForAnyElementType FVar7;
  int *piVar8;
  char local_res10 [16];
  undefined1 local_res20 [8];
  TArray<ILatencyMarkerModule_*,TSizedDefaultAllocator<32>_> local_48;
  TArray<IMaxTickRateHandlerModule_*,TSizedDefaultAllocator<32>_> local_38;
  
  local_res10[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  cVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar5 = IModularFeatures::Get();
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar8 < `public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"MaxTickRateHandler");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  IModularFeatures::GetModularFeatureImplementations<IMaxTickRateHandlerModule>
            (pIVar5,&local_38,
             `public:_static_class_FName___cdecl_IMaxTickRateHandlerModule::GetModularFeatureName(void)'
             ::__l2::FeatureName);
  iVar6 = local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)iVar6 * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar6) {
      `TCheckedPointerIterator<IMaxTickRateHandlerModule_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (FVar7.Data == pFVar1) break;
    plVar3 = *(longlong **)FVar7.Data;
    (**(code **)(*plVar3 + 8))(plVar3,cVar4 != '\0');
    (**(code **)(*plVar3 + 0x20))(plVar3,cVar4);
    FVar7.Data = FVar7.Data + 8;
  }
  pIVar5 = IModularFeatures::Get();
  if (*piVar8 < `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                      ::__l2::FeatureName,L"LatencyMarker");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  IModularFeatures::GetModularFeatureImplementations<ILatencyMarkerModule>
            (pIVar5,&local_48,
             `public:_static_class_FName___cdecl_ILatencyMarkerModule::GetModularFeatureName(void)'
             ::__l2::FeatureName);
  iVar6 = local_48.ArrayNum;
  pFVar1 = local_48.AllocatorInstance.Data + (longlong)iVar6 * 8;
  FVar7.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if (local_48.ArrayNum != iVar6) {
      `TCheckedPointerIterator<ILatencyMarkerModule_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (FVar7.Data == pFVar1) break;
    (**(code **)(**(longlong **)FVar7.Data + 8))(*(longlong **)FVar7.Data,1);
    FVar7.Data = FVar7.Data + 8;
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

