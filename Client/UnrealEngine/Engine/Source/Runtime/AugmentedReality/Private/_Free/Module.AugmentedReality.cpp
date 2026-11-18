// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 928

// FeatureName'' @ 1413be230

void __cdecl `dynamic_initializer_for_'IMotionController::FeatureName__(void)

{
  ::FName::FName(&IMotionController::FeatureName,L"MotionController");
  return;
}

// OnSpawnARActorDelegate'' @ 1413be250

void __cdecl `dynamic_initializer_for_'UARLifeCycleComponent::OnSpawnARActorDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UARLifeCycleComponent::OnSpawnARActorDelegate__);
  return;
}

// RegisteredARSystem'' @ 1413be270

void __cdecl `dynamic_initializer_for_'UARBaseAsyncTaskBlueprintProxy::RegisteredARSystem__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UARBaseAsyncTaskBlueprintProxy::RegisteredARSystem__);
  return;
}

// RegisteredARSystem'' @ 1413be290

void __cdecl `dynamic_initializer_for_'UARBlueprintLibrary::RegisteredARSystem__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UARBlueprintLibrary::RegisteredARSystem__);
  return;
}

// RequestDestroyARActorDelegate'' @ 1413be2b0

void __cdecl `dynamic_initializer_for_'UARLifeCycleComponent::RequestDestroyARActorDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UARLifeCycleComponent::RequestDestroyARActorDelegate__);
  return;
}

// RequestSpawnARActorDelegate'' @ 1413be2d0

void __cdecl `dynamic_initializer_for_'UARLifeCycleComponent::RequestSpawnARActorDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'UARLifeCycleComponent::RequestSpawnARActorDelegate__);
  return;
}

// `dynamic_initializer_for_'CVarFaceComponentDebugMode'' @ 1413be2f0

void __cdecl _dynamic_initializer_for__CVarFaceComponentDebugMode__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarFaceComponentDebugMode,L"ar.FaceComponentDebugMode",&GFaceComponentDebugMode,
             L"Debug mode for AR face component, see EFaceComponentDebugMode",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarFaceComponentDebugMode__);
  return;
}

// `dynamic_initializer_for_'CVarGeoAnchorComponentDebugMode'' @ 1413be430

void __cdecl _dynamic_initializer_for__CVarGeoAnchorComponentDebugMode__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_29>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarGeoAnchorComponentDebugMode,L"ar.GeoAnchorComponentDebugMode",
             &GGeoAnchorComponentDebugMode,
             L"Debug mode for AR Geo anchor component, see EGeoAnchorComponentDebugMode",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarGeoAnchorComponentDebugMode__);
  return;
}

// `dynamic_initializer_for_'CVarImageComponentDebugMode'' @ 1413be570

void __cdecl _dynamic_initializer_for__CVarImageComponentDebugMode__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarImageComponentDebugMode,L"ar.ImageComponentDebugMode",&GImageComponentDebugMode,
             L"Debug mode for AR image component, see EImageComponentDebugMode",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarImageComponentDebugMode__);
  return;
}

// `dynamic_initializer_for_'CVarPlaneComponentDebugMode'' @ 1413be6b0

void __cdecl _dynamic_initializer_for__CVarPlaneComponentDebugMode__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_24>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPlaneComponentDebugMode,L"ar.PlaneComponentDebugMode",&GPlaneComponentDebugMode,
             L"Debug mode for AR plane component, see EPlaneComponentDebugMode",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarPlaneComponentDebugMode__);
  return;
}

// `dynamic_initializer_for_'CVarPoseComponentDebugMode'' @ 1413be7f0

void __cdecl _dynamic_initializer_for__CVarPoseComponentDebugMode__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarPoseComponentDebugMode,L"ar.PoseComponentDebugMode",&GPoseComponentDebugMode,
             L"Debug mode for AR pose component, see EPoseComponentDebugMode",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarPoseComponentDebugMode__);
  return;
}

// `dynamic_initializer_for_'CVarQRCodeComponentDebugMode'' @ 1413be930

void __cdecl _dynamic_initializer_for__CVarQRCodeComponentDebugMode__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVIConsoleVariable___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_28>_>
               ::_vftable_;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarQRCodeComponentDebugMode,L"ar.QRCodeComponentDebugMode",&GQRCodeComponentDebugMode
             ,L"Debug mode for AR QR code component, see EQRCodeComponentDebugMode",
             (TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__CVarQRCodeComponentDebugMode__);
  return;
}

// `dynamic_initializer_for_'ClassificationColors'' @ 1413bea70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl _dynamic_initializer_for__ClassificationColors__(void)

{
  undefined1 auStack_b8 [32];
  EARObjectClassification local_98 [16];
  initializer_list<TPairInitializer<EARObjectClassification_const_&,FLinearColor_const_&>_> local_88
  ;
  TPairInitializer<EARObjectClassification_const_&,FLinearColor_const_&> local_78;
  EARObjectClassification *local_68;
  FLinearColor *local_60;
  EARObjectClassification *local_58;
  FLinearColor *local_50;
  EARObjectClassification *local_48;
  FLinearColor *local_40;
  EARObjectClassification *local_38;
  FLinearColor *local_30;
  EARObjectClassification *local_28;
  FLinearColor *local_20;
  TPairInitializer<EARObjectClassification_const_&,FLinearColor_const_&> local_18;
  
  local_18.Key = (EARObjectClassification *)(__security_cookie.value ^ (ulonglong)auStack_b8);
  local_98[0] = Wall;
  local_60 = &FLinearColor::Blue;
  local_78.Key = local_98;
  local_50 = &FLinearColor::Blue;
  local_78.Value = &FLinearColor::Green;
  local_68 = local_98 + 1;
  local_40 = &FLinearColor::Yellow;
  local_58 = local_98 + 2;
  local_48 = local_98 + 3;
  local_38 = local_98 + 4;
  local_28 = local_98 + 5;
  local_20 = &FLinearColor::Red;
  local_88._First = &local_78;
  local_88._Last = &local_18;
  local_30 = &FLinearColor::Yellow;
  local_98[1] = 3;
  local_98[2] = 4;
  local_98[3] = 5;
  local_98[4] = 6;
  local_98[5] = 0xc;
  TMap<enum_EARObjectClassification,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EARObjectClassification,FLinearColor,0>_>
  ::
  TMap<enum_EARObjectClassification,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EARObjectClassification,FLinearColor,0>_>
            (&ClassificationColors,&local_88);
  atexit(_dynamic_atexit_destructor_for__ClassificationColors__);
  return;
}

// `dynamic_initializer_for_'LogAR'' @ 1413beb50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogAR__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogAR,L"LogAR",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogAR__);
  return;
}

// `dynamic_initializer_for_'LogMrMesh'' @ 1413beb90

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMrMesh__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogMrMesh,L"LogMrMesh",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogMrMesh__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantAugmentedReality'' @ 1413bebd0

void __cdecl _dynamic_initializer_for__ModuleRegistrantAugmentedReality__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "AugmentedReality";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"AugmentedReality",0x10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FAugmentedRealityModule>::InitializeModule)
  ;
  return;
}

// `dynamic_initializer_for_'NAME_AARSharedWorldGameState_K2_OnARWorldMapIsReady'' @ 1413bec20

void __cdecl _dynamic_initializer_for__NAME_AARSharedWorldGameState_K2_OnARWorldMapIsReady__(void)

{
  FName::FName(&NAME_AARSharedWorldGameState_K2_OnARWorldMapIsReady,L"K2_OnARWorldMapIsReady");
  return;
}

// `dynamic_initializer_for_'NAME_AARSharedWorldPlayerController_ClientInitSharedWorld'' @ 1413bec40

void __cdecl
_dynamic_initializer_for__NAME_AARSharedWorldPlayerController_ClientInitSharedWorld__(void)

{
  FName::FName(&NAME_AARSharedWorldPlayerController_ClientInitSharedWorld,L"ClientInitSharedWorld");
  return;
}

// `dynamic_initializer_for_'NAME_AARSharedWorldPlayerController_ClientUpdateARWorldData'' @ 1413bec60

void __cdecl
_dynamic_initializer_for__NAME_AARSharedWorldPlayerController_ClientUpdateARWorldData__(void)

{
  FName::FName(&NAME_AARSharedWorldPlayerController_ClientUpdateARWorldData,
               L"ClientUpdateARWorldData");
  return;
}

// `dynamic_initializer_for_'NAME_AARSharedWorldPlayerController_ClientUpdatePreviewImageData'' @ 1413bec80

void __cdecl
_dynamic_initializer_for__NAME_AARSharedWorldPlayerController_ClientUpdatePreviewImageData__(void)

{
  FName::FName(&NAME_AARSharedWorldPlayerController_ClientUpdatePreviewImageData,
               L"ClientUpdatePreviewImageData");
  return;
}

// `dynamic_initializer_for_'NAME_AARSharedWorldPlayerController_ServerMarkReadyForReceiving'' @ 1413beca0

void __cdecl
_dynamic_initializer_for__NAME_AARSharedWorldPlayerController_ServerMarkReadyForReceiving__(void)

{
  FName::FName(&NAME_AARSharedWorldPlayerController_ServerMarkReadyForReceiving,
               L"ServerMarkReadyForReceiving");
  return;
}

// `dynamic_initializer_for_'NAME_UARComponent_ReceiveRemove'' @ 1413becc0

void __cdecl _dynamic_initializer_for__NAME_UARComponent_ReceiveRemove__(void)

{
  FName::FName(&NAME_UARComponent_ReceiveRemove,L"ReceiveRemove");
  return;
}

// `dynamic_initializer_for_'NAME_UARComponent_UpdateVisualization'' @ 1413bece0

void __cdecl _dynamic_initializer_for__NAME_UARComponent_UpdateVisualization__(void)

{
  FName::FName(&NAME_UARComponent_UpdateVisualization,L"UpdateVisualization");
  return;
}

// `dynamic_initializer_for_'NAME_UAREnvironmentProbeComponent_ReceiveAdd'' @ 1413bed00

void __cdecl _dynamic_initializer_for__NAME_UAREnvironmentProbeComponent_ReceiveAdd__(void)

{
  FName::FName(&NAME_UAREnvironmentProbeComponent_ReceiveAdd,L"ReceiveAdd");
  return;
}

// `dynamic_initializer_for_'NAME_UAREnvironmentProbeComponent_ReceiveUpdate'' @ 1413bed20

void __cdecl _dynamic_initializer_for__NAME_UAREnvironmentProbeComponent_ReceiveUpdate__(void)

{
  FName::FName(&NAME_UAREnvironmentProbeComponent_ReceiveUpdate,L"ReceiveUpdate");
  return;
}

// `dynamic_initializer_for_'NAME_UAREnvironmentProbeComponent_ServerUpdatePayload'' @ 1413bed40

void __cdecl _dynamic_initializer_for__NAME_UAREnvironmentProbeComponent_ServerUpdatePayload__(void)

{
  FName::FName(&NAME_UAREnvironmentProbeComponent_ServerUpdatePayload,L"ServerUpdatePayload");
  return;
}

// `dynamic_initializer_for_'NAME_UARFaceComponent_ReceiveAdd'' @ 1413bed60

void __cdecl _dynamic_initializer_for__NAME_UARFaceComponent_ReceiveAdd__(void)

{
  FName::FName(&NAME_UARFaceComponent_ReceiveAdd,L"ReceiveAdd");
  return;
}

// `dynamic_initializer_for_'NAME_UARFaceComponent_ReceiveUpdate'' @ 1413bed80

void __cdecl _dynamic_initializer_for__NAME_UARFaceComponent_ReceiveUpdate__(void)

{
  FName::FName(&NAME_UARFaceComponent_ReceiveUpdate,L"ReceiveUpdate");
  return;
}

// `dynamic_initializer_for_'NAME_UARFaceComponent_ServerUpdatePayload'' @ 1413beda0

void __cdecl _dynamic_initializer_for__NAME_UARFaceComponent_ServerUpdatePayload__(void)

{
  FName::FName(&NAME_UARFaceComponent_ServerUpdatePayload,L"ServerUpdatePayload");
  return;
}

// `dynamic_initializer_for_'NAME_UARGeoAnchorComponent_ReceiveAdd'' @ 1413bedc0

void __cdecl _dynamic_initializer_for__NAME_UARGeoAnchorComponent_ReceiveAdd__(void)

{
  FName::FName(&NAME_UARGeoAnchorComponent_ReceiveAdd,L"ReceiveAdd");
  return;
}

// `dynamic_initializer_for_'NAME_UARGeoAnchorComponent_ReceiveUpdate'' @ 1413bede0

void __cdecl _dynamic_initializer_for__NAME_UARGeoAnchorComponent_ReceiveUpdate__(void)

{
  FName::FName(&NAME_UARGeoAnchorComponent_ReceiveUpdate,L"ReceiveUpdate");
  return;
}

// `dynamic_initializer_for_'NAME_UARGeoAnchorComponent_ServerUpdatePayload'' @ 1413bee00

void __cdecl _dynamic_initializer_for__NAME_UARGeoAnchorComponent_ServerUpdatePayload__(void)

{
  FName::FName(&NAME_UARGeoAnchorComponent_ServerUpdatePayload,L"ServerUpdatePayload");
  return;
}

// `dynamic_initializer_for_'NAME_UARImageComponent_ReceiveAdd'' @ 1413bee20

void __cdecl _dynamic_initializer_for__NAME_UARImageComponent_ReceiveAdd__(void)

{
  FName::FName(&NAME_UARImageComponent_ReceiveAdd,L"ReceiveAdd");
  return;
}

// `dynamic_initializer_for_'NAME_UARImageComponent_ReceiveUpdate'' @ 1413bee40

void __cdecl _dynamic_initializer_for__NAME_UARImageComponent_ReceiveUpdate__(void)

{
  FName::FName(&NAME_UARImageComponent_ReceiveUpdate,L"ReceiveUpdate");
  return;
}

// `dynamic_initializer_for_'NAME_UARImageComponent_ServerUpdatePayload'' @ 1413bee60

void __cdecl _dynamic_initializer_for__NAME_UARImageComponent_ServerUpdatePayload__(void)

{
  FName::FName(&NAME_UARImageComponent_ServerUpdatePayload,L"ServerUpdatePayload");
  return;
}

// `dynamic_initializer_for_'NAME_UARLifeCycleComponent_ServerDestroyARActor'' @ 1413bee80

void __cdecl _dynamic_initializer_for__NAME_UARLifeCycleComponent_ServerDestroyARActor__(void)

{
  FName::FName(&NAME_UARLifeCycleComponent_ServerDestroyARActor,L"ServerDestroyARActor");
  return;
}

// `dynamic_initializer_for_'NAME_UARLifeCycleComponent_ServerSpawnARActor'' @ 1413beea0

void __cdecl _dynamic_initializer_for__NAME_UARLifeCycleComponent_ServerSpawnARActor__(void)

{
  FName::FName(&NAME_UARLifeCycleComponent_ServerSpawnARActor,L"ServerSpawnARActor");
  return;
}

// `dynamic_initializer_for_'NAME_UARMeshComponent_ReceiveAdd'' @ 1413beec0

void __cdecl _dynamic_initializer_for__NAME_UARMeshComponent_ReceiveAdd__(void)

{
  FName::FName(&NAME_UARMeshComponent_ReceiveAdd,L"ReceiveAdd");
  return;
}

// `dynamic_initializer_for_'NAME_UARMeshComponent_ReceiveUpdate'' @ 1413beee0

void __cdecl _dynamic_initializer_for__NAME_UARMeshComponent_ReceiveUpdate__(void)

{
  FName::FName(&NAME_UARMeshComponent_ReceiveUpdate,L"ReceiveUpdate");
  return;
}

// `dynamic_initializer_for_'NAME_UARMeshComponent_ServerUpdatePayload'' @ 1413bef00

void __cdecl _dynamic_initializer_for__NAME_UARMeshComponent_ServerUpdatePayload__(void)

{
  FName::FName(&NAME_UARMeshComponent_ServerUpdatePayload,L"ServerUpdatePayload");
  return;
}

// `dynamic_initializer_for_'NAME_UARObjectComponent_ReceiveAdd'' @ 1413bef20

void __cdecl _dynamic_initializer_for__NAME_UARObjectComponent_ReceiveAdd__(void)

{
  FName::FName(&NAME_UARObjectComponent_ReceiveAdd,L"ReceiveAdd");
  return;
}

// `dynamic_initializer_for_'NAME_UARObjectComponent_ReceiveUpdate'' @ 1413bef40

void __cdecl _dynamic_initializer_for__NAME_UARObjectComponent_ReceiveUpdate__(void)

{
  FName::FName(&NAME_UARObjectComponent_ReceiveUpdate,L"ReceiveUpdate");
  return;
}

// `dynamic_initializer_for_'NAME_UARObjectComponent_ServerUpdatePayload'' @ 1413bef60

void __cdecl _dynamic_initializer_for__NAME_UARObjectComponent_ServerUpdatePayload__(void)

{
  FName::FName(&NAME_UARObjectComponent_ServerUpdatePayload,L"ServerUpdatePayload");
  return;
}

// `dynamic_initializer_for_'NAME_UARPlaneComponent_ReceiveAdd'' @ 1413bef80

void __cdecl _dynamic_initializer_for__NAME_UARPlaneComponent_ReceiveAdd__(void)

{
  FName::FName(&NAME_UARPlaneComponent_ReceiveAdd,L"ReceiveAdd");
  return;
}

// `dynamic_initializer_for_'NAME_UARPlaneComponent_ReceiveUpdate'' @ 1413befa0

void __cdecl _dynamic_initializer_for__NAME_UARPlaneComponent_ReceiveUpdate__(void)

{
  FName::FName(&NAME_UARPlaneComponent_ReceiveUpdate,L"ReceiveUpdate");
  return;
}

// `dynamic_initializer_for_'NAME_UARPlaneComponent_ServerUpdatePayload'' @ 1413befc0

void __cdecl _dynamic_initializer_for__NAME_UARPlaneComponent_ServerUpdatePayload__(void)

{
  FName::FName(&NAME_UARPlaneComponent_ServerUpdatePayload,L"ServerUpdatePayload");
  return;
}

// `dynamic_initializer_for_'NAME_UARPointComponent_ReceiveAdd'' @ 1413befe0

void __cdecl _dynamic_initializer_for__NAME_UARPointComponent_ReceiveAdd__(void)

{
  FName::FName(&NAME_UARPointComponent_ReceiveAdd,L"ReceiveAdd");
  return;
}

// `dynamic_initializer_for_'NAME_UARPointComponent_ReceiveUpdate'' @ 1413bf000

void __cdecl _dynamic_initializer_for__NAME_UARPointComponent_ReceiveUpdate__(void)

{
  FName::FName(&NAME_UARPointComponent_ReceiveUpdate,L"ReceiveUpdate");
  return;
}

// `dynamic_initializer_for_'NAME_UARPointComponent_ServerUpdatePayload'' @ 1413bf020

void __cdecl _dynamic_initializer_for__NAME_UARPointComponent_ServerUpdatePayload__(void)

{
  FName::FName(&NAME_UARPointComponent_ServerUpdatePayload,L"ServerUpdatePayload");
  return;
}

// `dynamic_initializer_for_'NAME_UARPoseComponent_ReceiveAdd'' @ 1413bf040

void __cdecl _dynamic_initializer_for__NAME_UARPoseComponent_ReceiveAdd__(void)

{
  FName::FName(&NAME_UARPoseComponent_ReceiveAdd,L"ReceiveAdd");
  return;
}

// `dynamic_initializer_for_'NAME_UARPoseComponent_ReceiveUpdate'' @ 1413bf060

void __cdecl _dynamic_initializer_for__NAME_UARPoseComponent_ReceiveUpdate__(void)

{
  FName::FName(&NAME_UARPoseComponent_ReceiveUpdate,L"ReceiveUpdate");
  return;
}

// `dynamic_initializer_for_'NAME_UARPoseComponent_ServerUpdatePayload'' @ 1413bf080

void __cdecl _dynamic_initializer_for__NAME_UARPoseComponent_ServerUpdatePayload__(void)

{
  FName::FName(&NAME_UARPoseComponent_ServerUpdatePayload,L"ServerUpdatePayload");
  return;
}

// `dynamic_initializer_for_'NAME_UARQRCodeComponent_ReceiveAdd'' @ 1413bf0a0

void __cdecl _dynamic_initializer_for__NAME_UARQRCodeComponent_ReceiveAdd__(void)

{
  FName::FName(&NAME_UARQRCodeComponent_ReceiveAdd,L"ReceiveAdd");
  return;
}

// `dynamic_initializer_for_'NAME_UARQRCodeComponent_ReceiveUpdate'' @ 1413bf0c0

void __cdecl _dynamic_initializer_for__NAME_UARQRCodeComponent_ReceiveUpdate__(void)

{
  FName::FName(&NAME_UARQRCodeComponent_ReceiveUpdate,L"ReceiveUpdate");
  return;
}

// `dynamic_initializer_for_'NAME_UARQRCodeComponent_ServerUpdatePayload'' @ 1413bf0e0

void __cdecl _dynamic_initializer_for__NAME_UARQRCodeComponent_ServerUpdatePayload__(void)

{
  FName::FName(&NAME_UARQRCodeComponent_ServerUpdatePayload,L"ServerUpdatePayload");
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_CalculateVertexNormals'' @ 1413bf100

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_CalculateVertexNormals__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_CalculateVertexNormals ==
      (FThreadSafeStaticStat<FStat_STAT_CalculateVertexNormals>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_CalculateVertexNormals");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CalculateVertexNormals,*pFVar1,
               L"Calculate Vertex Normals","STATGROUP_ARComponent","STATCAT_Advanced",L"ARComponent"
               ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_UpdateFaceComponent'' @ 1413bf190

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_UpdateFaceComponent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_UpdateFaceComponent == (FThreadSafeStaticStat<FStat_STAT_UpdateFaceComponent>)0x0
     ) {
    pFVar1 = FName::FName(local_res8,"STAT_UpdateFaceComponent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateFaceComponent,*pFVar1,
               L"Update FaceComponent","STATGROUP_ARComponent","STATCAT_Advanced",L"ARComponent",
               true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARActor_h__Script_AugmentedReality_3469648228'' @ 1413bf220

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARActor_h__Script_AugmentedReality_3469648228__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AugmentedReality",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARActor_h__Script_AugmentedReality_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARActor_h__Script_AugmentedReality_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h__Script_AugmentedReality_1943343463'' @ 1413bf270

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h__Script_AugmentedReality_1943343463__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AugmentedReality",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintLibrary_h__Script_AugmentedReality_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h__Script_AugmentedReality_2025031665'' @ 1413bf2b0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h__Script_AugmentedReality_2025031665__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AugmentedReality",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARBlueprintProxy_h__Script_AugmentedReality_Statics
             ::ClassInfo,3,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h__Script_AugmentedReality_3239844062'' @ 1413bf2f0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h__Script_AugmentedReality_3239844062__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AugmentedReality",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h__Script_AugmentedReality_Statics
             ::ClassInfo,0xb,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h__Script_AugmentedReality_Statics
             ::ScriptStructInfo,0xb,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARComponent_h__Script_AugmentedReality_Statics
             ::EnumInfo,8);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h__Script_AugmentedReality_157579294'' @ 1413bf340

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h__Script_AugmentedReality_157579294__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AugmentedReality",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h__Script_AugmentedReality_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARDependencyHandler_h__Script_AugmentedReality_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h__Script_AugmentedReality_4241433317'' @ 1413bf390

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h__Script_AugmentedReality_4241433317__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AugmentedReality",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h__Script_AugmentedReality_Statics
             ::ClassInfo,3,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARGeoTrackingSupport_h__Script_AugmentedReality_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h__Script_AugmentedReality_2361668835'' @ 1413bf3e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h__Script_AugmentedReality_2361668835__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AugmentedReality",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARLifeCycleComponent_h__Script_AugmentedReality_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h__Script_AugmentedReality_2614900223'' @ 1413bf420

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h__Script_AugmentedReality_2614900223__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AugmentedReality",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARLightEstimate_h__Script_AugmentedReality_Statics
             ::ClassInfo,2,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_AROriginActor_h__Script_AugmentedReality_2365745340'' @ 1413bf460

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_AROriginActor_h__Script_AugmentedReality_2365745340__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AugmentedReality",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_AROriginActor_h__Script_AugmentedReality_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h__Script_AugmentedReality_2313232597'' @ 1413bf4a0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h__Script_AugmentedReality_2313232597__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AugmentedReality",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARPin_h__Script_AugmentedReality_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h__Script_AugmentedReality_3569062279'' @ 1413bf4e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h__Script_AugmentedReality_3569062279__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AugmentedReality",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h__Script_AugmentedReality_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSessionConfig_h__Script_AugmentedReality_Statics
             ::EnumInfo,9);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h__Script_AugmentedReality_2026812197'' @ 1413bf530

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h__Script_AugmentedReality_2026812197__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AugmentedReality",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h__Script_AugmentedReality_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameMode_h__Script_AugmentedReality_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameState_h__Script_AugmentedReality_4270809048'' @ 1413bf580

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameState_h__Script_AugmentedReality_4270809048__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AugmentedReality",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldGameState_h__Script_AugmentedReality_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h__Script_AugmentedReality_173318685'' @ 1413bf5c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h__Script_AugmentedReality_173318685__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AugmentedReality",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSharedWorldPlayerController_h__Script_AugmentedReality_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h__Script_AugmentedReality_1692524834'' @ 1413bf600

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h__Script_AugmentedReality_1692524834__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AugmentedReality",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h__Script_AugmentedReality_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h__Script_AugmentedReality_369700025'' @ 1413bf640

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h__Script_AugmentedReality_369700025__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AugmentedReality",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h__Script_AugmentedReality_Statics
             ::ClassInfo,4,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTextures_h__Script_AugmentedReality_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h__Script_AugmentedReality_1231959322'' @ 1413bf690

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h__Script_AugmentedReality_1231959322__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AugmentedReality",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h__Script_AugmentedReality_Statics
             ::ClassInfo,1,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTraceResult_h__Script_AugmentedReality_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h__Script_AugmentedReality_2866756832'' @ 1413bf6e0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h__Script_AugmentedReality_2866756832__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AugmentedReality",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackableNotifyComponent_h__Script_AugmentedReality_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h__Script_AugmentedReality_269820395'' @ 1413bf720

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h__Script_AugmentedReality_269820395__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AugmentedReality",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h__Script_AugmentedReality_Statics
             ::ClassInfo,0xb,(FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTrackable_h__Script_AugmentedReality_Statics
             ::EnumInfo,3);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h__Script_AugmentedReality_229219168'' @ 1413bf770

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h__Script_AugmentedReality_229219168__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/AugmentedReality",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h__Script_AugmentedReality_Statics
             ::ClassInfo,3,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h__Script_AugmentedReality_Statics
             ::ScriptStructInfo,6,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AugmentedReality_Public_ARTypes_h__Script_AugmentedReality_Statics
             ::EnumInfo,0xd);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_AugmentedReality'' @ 1413bf7c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_AugmentedReality__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x4c2c20cb;
  local_res8[0].DeclarationsHash = 0x6700224e;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_AugmentedReality,L"/Script/AugmentedReality",
             &Z_Registration_Info_UPackage__Script_AugmentedReality,local_res8);
  return;
}

// Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation @ 14cf29520

UFunction * __cdecl Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14cf29560

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_24>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_24>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UClass_AARSharedWorldGameState @ 14cf29760

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AARSharedWorldGameState(void)

{
  if (Z_Registration_Info_UClass_AARSharedWorldGameState.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AARSharedWorldGameState.OuterSingleton,
               &Z_Construct_UClass_AARSharedWorldGameState_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AARSharedWorldGameState.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14cf297c0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_25>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UFunction_AARSharedWorldGameState_K2_OnARWorldMapIsReady @ 14cf297f0

UFunction * __cdecl Z_Construct_UFunction_AARSharedWorldGameState_K2_OnARWorldMapIsReady(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AARSharedWorldGameState_K2_OnARWorldMapIsReady_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARGeoAnchor_GetAltitudeMeters @ 14cf29830

UFunction * __cdecl Z_Construct_UFunction_UARGeoAnchor_GetAltitudeMeters(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARGeoAnchor_GetAltitudeMeters_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARGeoAnchor_GetAltitudeSource @ 14cf29930

UFunction * __cdecl Z_Construct_UFunction_UARGeoAnchor_GetAltitudeSource(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARGeoAnchor_GetAltitudeSource_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14cf29b60

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_26>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera @ 14cf29b90

UFunction * __cdecl Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARTraceResultLibrary_GetDistanceFromCamera_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARGeoAnchor_GetLatitude @ 14cf29bd0

UFunction * __cdecl Z_Construct_UFunction_UARGeoAnchor_GetLatitude(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UARGeoAnchor_GetLatitude_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARGeoAnchor_GetLongitude @ 14cf29c10

UFunction * __cdecl Z_Construct_UFunction_UARGeoAnchor_GetLongitude(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UARGeoAnchor_GetLongitude_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform @ 14cf29c50

UFunction * __cdecl Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToTrackingTransform_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARBlueprintLibrary_FindTrackedPointsByName @ 14cf29e50

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_FindTrackedPointsByName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_FindTrackedPointsByName_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14cf29ec0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_27>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform @ 14cf29ef0

UFunction * __cdecl Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARTraceResultLibrary_GetLocalToWorldTransform_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARTraceResultLibrary_GetLocalTransform @ 14cf29f30

UFunction * __cdecl Z_Construct_UFunction_UARTraceResultLibrary_GetLocalTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARTraceResultLibrary_GetLocalTransform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARBlueprintLibrary_GetAlignmentTransform @ 14cf29f70

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_GetAlignmentTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_GetAlignmentTransform_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14cf2a1a0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_28>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_28>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel @ 14cf2a1d0

UFunction * __cdecl Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARTraceResultLibrary_GetTraceChannel_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AARSharedWorldPlayerController @ 14cf2a210

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AARSharedWorldPlayerController(void)

{
  if (Z_Registration_Info_UClass_AARSharedWorldPlayerController.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AARSharedWorldPlayerController.OuterSingleton,
               &Z_Construct_UClass_AARSharedWorldPlayerController_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AARSharedWorldPlayerController.OuterSingleton;
}

// Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry @ 14cf2a250

UFunction * __cdecl Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARTraceResultLibrary_GetTrackedGeometry_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AARSharedWorldPlayerController_ClientInitSharedWorld @ 14cf2a2c0

UFunction * __cdecl Z_Construct_UFunction_AARSharedWorldPlayerController_ClientInitSharedWorld(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AARSharedWorldPlayerController_ClientInitSharedWorld_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AARActor @ 14cf2a4a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AARActor(void)

{
  if (Z_Registration_Info_UClass_AARActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AARActor.OuterSingleton,
               &Z_Construct_UClass_AARActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AARActor.OuterSingleton;
}

// Z_Construct_UClass_UARTrackedGeometry_NoRegister @ 14cf2a500

UClass * __cdecl Z_Construct_UClass_UARTrackedGeometry_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTrackedGeometry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTrackedGeometry",
               &Z_Registration_Info_UClass_UARTrackedGeometry.InnerSingleton,
               UARTrackedGeometry::StaticRegisterNativesUARTrackedGeometry,0x160,0x10,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UARTrackedGeometry>,
               InternalVTableHelperCtorCaller<UARTrackedGeometry>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTrackedGeometry.InnerSingleton;
}

// `scalar_deleting_destructor' @ 14cf2a5b0

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_29>_>
::_scalar_deleting_destructor_
          (TBaseFunctorDelegateInstance<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy,<lambda_29>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdateARWorldData @ 14cf2a690

UFunction * __cdecl
Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdateARWorldData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdateARWorldData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AARActor_AddARComponent @ 14cf2a6d0

UFunction * __cdecl Z_Construct_UFunction_AARActor_AddARComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_AARActor_AddARComponent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UARDependencyHandler_NoRegister @ 14cf2a710

UClass * __cdecl Z_Construct_UClass_UARDependencyHandler_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARDependencyHandler.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARDependencyHandler",
               &Z_Registration_Info_UClass_UARDependencyHandler.InnerSingleton,
               UARDependencyHandler::StaticRegisterNativesUARDependencyHandler,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UARDependencyHandler>,
               InternalVTableHelperCtorCaller<UARDependencyHandler>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARDependencyHandler.InnerSingleton;
}

// Z_Construct_UClass_UARTexture_NoRegister @ 14cf2a7c0

UClass * __cdecl Z_Construct_UClass_UARTexture_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTexture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTexture",
               &Z_Registration_Info_UClass_UARTexture.InnerSingleton,
               UARTexture::StaticRegisterNativesUARTexture,0x170,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UARTexture>,
               InternalVTableHelperCtorCaller<UARTexture>,local_res8,UTexture::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTexture.InnerSingleton;
}

// Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_NoRegister @ 14cf2a880

UClass * __cdecl Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAREnvironmentCaptureProbeTexture.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"AREnvironmentCaptureProbeTexture",
               &Z_Registration_Info_UClass_UAREnvironmentCaptureProbeTexture.InnerSingleton,
               UAREnvironmentCaptureProbeTexture::
               StaticRegisterNativesUAREnvironmentCaptureProbeTexture,0x178,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAREnvironmentCaptureProbeTexture>,
               InternalVTableHelperCtorCaller<UAREnvironmentCaptureProbeTexture>,local_res8,
               UTextureCube::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAREnvironmentCaptureProbeTexture.InnerSingleton;
}

// Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdatePreviewImageData @ 14cf2ac00

UFunction * __cdecl
Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdatePreviewImageData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AARSharedWorldPlayerController_ServerMarkReadyForReceiving @ 14cf2ae30

UFunction * __cdecl
Z_Construct_UFunction_AARSharedWorldPlayerController_ServerMarkReadyForReceiving(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AARSharedWorldPlayerController_ServerMarkReadyForReceiving_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UARBasicLightEstimate @ 14cf2ae70

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARBasicLightEstimate(void)

{
  if (Z_Registration_Info_UClass_UARBasicLightEstimate.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARBasicLightEstimate.OuterSingleton,
               &Z_Construct_UClass_UARBasicLightEstimate_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARBasicLightEstimate.OuterSingleton;
}

// Z_Construct_UClass_UARLightEstimate @ 14cf2aeb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARLightEstimate(void)

{
  if (Z_Registration_Info_UClass_UARLightEstimate.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARLightEstimate.OuterSingleton,
               &Z_Construct_UClass_UARLightEstimate_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARLightEstimate.OuterSingleton;
}

// Z_Construct_UClass_UARDependencyHandler @ 14cf2afb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARDependencyHandler(void)

{
  if (Z_Registration_Info_UClass_UARDependencyHandler.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARDependencyHandler.OuterSingleton,
               &Z_Construct_UClass_UARDependencyHandler_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARDependencyHandler.OuterSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARServiceAvailability @ 14cf2aff0

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARServiceAvailability(void)

{
  if (Z_Registration_Info_UEnum_EARServiceAvailability.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARServiceAvailability.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARServiceAvailability_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARServiceAvailability.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARServiceInstallRequestResult @ 14cf2b030

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARServiceInstallRequestResult(void)

{
  if (Z_Registration_Info_UEnum_EARServiceInstallRequestResult.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARServiceInstallRequestResult.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARServiceInstallRequestResult_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EARServiceInstallRequestResult.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARServicePermissionRequestResult @ 14cf2b070

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARServicePermissionRequestResult(void)

{
  if (Z_Registration_Info_UEnum_EARServicePermissionRequestResult.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARServicePermissionRequestResult.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARServicePermissionRequestResult_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EARServicePermissionRequestResult.InnerSingleton;
}

// EARServiceAvailability_StaticEnum @ 14cf2b0b0

UEnum * __cdecl EARServiceAvailability_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARServiceAvailability.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARServiceAvailability.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARServiceAvailability,(UObject *)pUVar1,
                       L"EARServiceAvailability");
  }
  return Z_Registration_Info_UEnum_EARServiceAvailability.OuterSingleton;
}

// Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor @ 14cf2b0f0

UFunction * __cdecl Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EARServiceInstallRequestResult_StaticEnum @ 14cf2b130

UEnum * __cdecl EARServiceInstallRequestResult_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARServiceInstallRequestResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARServiceInstallRequestResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARServiceInstallRequestResult,
                       (UObject *)pUVar1,L"EARServiceInstallRequestResult");
  }
  return Z_Registration_Info_UEnum_EARServiceInstallRequestResult.OuterSingleton;
}

// Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries @ 14cf2b170

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometries_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin @ 14cf2b270

UFunction * __cdecl
Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// EARServicePermissionRequestResult_StaticEnum @ 14cf2b2b0

UEnum * __cdecl EARServicePermissionRequestResult_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARServicePermissionRequestResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARServicePermissionRequestResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARServicePermissionRequestResult,
                       (UObject *)pUVar1,L"EARServicePermissionRequestResult");
  }
  return Z_Registration_Info_UEnum_EARServicePermissionRequestResult.OuterSingleton;
}

// Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens @ 14cf2b2f0

UFunction * __cdecl Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBasicLightEstimate_GetAmbientIntensityLumens_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability @ 14cf2b3f0

UFunction * __cdecl Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARDependencyHandler_CheckARServiceAvailability_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometriesByClass @ 14cf2b430

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometriesByClass(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_GetAllGeometriesByClass_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature @ 14cf2b470

UFunction * __cdecl
Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature @ 14cf2b4b0

UFunction * __cdecl
Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature @ 14cf2b4f0

UFunction * __cdecl
Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature @ 14cf2b530

UFunction * __cdecl
Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AugmentedReality_TrackableDelegate__DelegateSignature @ 14cf2b570

UFunction * __cdecl
Z_Construct_UDelegateFunction_AugmentedReality_TrackableDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AugmentedReality_TrackableDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AugmentedReality_TrackableEnvProbeDelegate__DelegateSignature @ 14cf2b5b0

UFunction * __cdecl
Z_Construct_UDelegateFunction_AugmentedReality_TrackableEnvProbeDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AugmentedReality_TrackableEnvProbeDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AugmentedReality_TrackableFaceDelegate__DelegateSignature @ 14cf2b5f0

UFunction * __cdecl
Z_Construct_UDelegateFunction_AugmentedReality_TrackableFaceDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AugmentedReality_TrackableFaceDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AugmentedReality_TrackableImageDelegate__DelegateSignature @ 14cf2b630

UFunction * __cdecl
Z_Construct_UDelegateFunction_AugmentedReality_TrackableImageDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AugmentedReality_TrackableImageDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AugmentedReality_TrackableObjectDelegate__DelegateSignature @ 14cf2b670

UFunction * __cdecl
Z_Construct_UDelegateFunction_AugmentedReality_TrackableObjectDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AugmentedReality_TrackableObjectDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AugmentedReality_TrackablePlaneDelegate__DelegateSignature @ 14cf2b6b0

UFunction * __cdecl
Z_Construct_UDelegateFunction_AugmentedReality_TrackablePlaneDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AugmentedReality_TrackablePlaneDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_AugmentedReality_TrackablePointDelegate__DelegateSignature @ 14cf2b6f0

UFunction * __cdecl
Z_Construct_UDelegateFunction_AugmentedReality_TrackablePointDelegate__DelegateSignature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_AugmentedReality_TrackablePointDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorSpawnedDelegate__DelegateSignature @ 14cf2b730

UFunction * __cdecl
Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorSpawnedDelegate__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorSpawnedDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorToBeDestroyedDelegate__DelegateSignature @ 14cf2b770

UFunction * __cdecl
Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorToBeDestroyedDelegate__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UARLifeCycleComponent_InstanceARActorToBeDestroyedDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature @ 14cf2b7b0

UFunction * __cdecl
Z_Construct_UDelegateFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UDelegateFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature @ 14cf2b7f0

UFunction * __cdecl
Z_Construct_UDelegateFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUDelegateFunction
              (&ReturnFunction,
               &Z_Construct_UDelegateFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationDelegate__DelegateSignature_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UPackage__Script_AugmentedReality @ 14cf2b830

UPackage * __cdecl Z_Construct_UPackage__Script_AugmentedReality(void)

{
  if (Z_Registration_Info_UPackage__Script_AugmentedReality.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_AugmentedReality.OuterSingleton,&PackageParams)
    ;
  }
  return Z_Registration_Info_UPackage__Script_AugmentedReality.OuterSingleton;
}

// Z_Construct_UFunction_UARDependencyHandler_GetARDependencyHandler @ 14cf2b870

UFunction * __cdecl Z_Construct_UFunction_UARDependencyHandler_GetARDependencyHandler(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARDependencyHandler_GetARDependencyHandler_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UARCandidateImage_NoRegister @ 14cf2b9a0

UClass * __cdecl Z_Construct_UClass_UARCandidateImage_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARCandidateImage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARCandidateImage",
               &Z_Registration_Info_UClass_UARCandidateImage.InnerSingleton,
               UARCandidateImage::StaticRegisterNativesUARCandidateImage,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UARCandidateImage>,
               InternalVTableHelperCtorCaller<UARCandidateImage>,local_res8,UDataAsset::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARCandidateImage.InnerSingleton;
}

// Z_Construct_UClass_UARCandidateObject_NoRegister @ 14cf2ba60

UClass * __cdecl Z_Construct_UClass_UARCandidateObject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARCandidateObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARCandidateObject",
               &Z_Registration_Info_UClass_UARCandidateObject.InnerSingleton,
               UARCandidateObject::StaticRegisterNativesUARCandidateObject,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UARCandidateObject>,
               InternalVTableHelperCtorCaller<UARCandidateObject>,local_res8,UDataAsset::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARCandidateObject.InnerSingleton;
}

// Z_Construct_UFunction_UARDependencyHandler_InstallARService @ 14cf2bb30

UFunction * __cdecl Z_Construct_UFunction_UARDependencyHandler_InstallARService(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARDependencyHandler_InstallARService_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14cf2bc70

void * __cdecl Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTrackedGeometryGroup,&UE::CoreUObject::Private::Construct<FTrackedGeometryGroup>,&UE::CoreUObject::Private::ConstructForTests<FTrackedGeometryGroup>,&UE::CoreUObject::Private::Destruct<FTrackedGeometryGroup>,&UE::CoreUObject::Private::Copy<FTrackedGeometryGroup>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission @ 14cf2bcb0

UFunction * __cdecl Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARDependencyHandler_RequestARSessionPermission_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent @ 14cf2bcf0

UFunction * __cdecl Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARDependencyHandler_StartARSessionLatent_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AAROriginActor @ 14cf2bdf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AAROriginActor(void)

{
  if (Z_Registration_Info_UClass_AAROriginActor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AAROriginActor.OuterSingleton,
               &Z_Construct_UClass_AAROriginActor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AAROriginActor.OuterSingleton;
}

// Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins @ 14cf2bf00

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_GetAllPins_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors @ 14cf2bfe0

UFunction * __cdecl Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARPlaneComponent_GetObjectClassificationDebugColors_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UARGeoTrackingSupport @ 14cf2c020

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARGeoTrackingSupport(void)

{
  if (Z_Registration_Info_UClass_UARGeoTrackingSupport.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARGeoTrackingSupport.OuterSingleton,
               &Z_Construct_UClass_UARGeoTrackingSupport_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARGeoTrackingSupport.OuterSingleton;
}

// Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy @ 14cf2c060

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy(void)

{
  if (Z_Registration_Info_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.OuterSingleton
      == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.
                OuterSingleton,
               &Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_Statics::
                ClassParams);
  }
  return Z_Registration_Info_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.
         OuterSingleton;
}

// Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy @ 14cf2c0a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy(void)

{
  if (Z_Registration_Info_UClass_UGetGeoLocationAsyncTaskBlueprintProxy.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UGetGeoLocationAsyncTaskBlueprintProxy.OuterSingleton,
               &Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UGetGeoLocationAsyncTaskBlueprintProxy.OuterSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARGeoTrackingAccuracy @ 14cf2c0e0

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARGeoTrackingAccuracy(void)

{
  if (Z_Registration_Info_UEnum_EARGeoTrackingAccuracy.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARGeoTrackingAccuracy.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARGeoTrackingAccuracy_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARGeoTrackingAccuracy.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARGeoTrackingState @ 14cf2c120

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARGeoTrackingState(void)

{
  if (Z_Registration_Info_UEnum_EARGeoTrackingState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARGeoTrackingState.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARGeoTrackingState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARGeoTrackingState.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARGeoTrackingStateReason @ 14cf2c160

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARGeoTrackingStateReason(void)

{
  if (Z_Registration_Info_UEnum_EARGeoTrackingStateReason.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARGeoTrackingStateReason.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARGeoTrackingStateReason_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARGeoTrackingStateReason.InnerSingleton;
}

// EARGeoTrackingState_StaticEnum @ 14cf2c1a0

UEnum * __cdecl EARGeoTrackingState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARGeoTrackingState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARGeoTrackingState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARGeoTrackingState,(UObject *)pUVar1,
                       L"EARGeoTrackingState");
  }
  return Z_Registration_Info_UEnum_EARGeoTrackingState.OuterSingleton;
}

// Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses @ 14cf2c1e0

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_GetAllTracked2DPoses_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EARGeoTrackingStateReason_StaticEnum @ 14cf2c220

UEnum * __cdecl EARGeoTrackingStateReason_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARGeoTrackingStateReason.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARGeoTrackingStateReason.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARGeoTrackingStateReason,
                       (UObject *)pUVar1,L"EARGeoTrackingStateReason");
  }
  return Z_Registration_Info_UEnum_EARGeoTrackingStateReason.OuterSingleton;
}

// Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy @ 14cf2c260

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy(void)

{
  if (Z_Registration_Info_UClass_UARBaseAsyncTaskBlueprintProxy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARBaseAsyncTaskBlueprintProxy.OuterSingleton,
               &Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARBaseAsyncTaskBlueprintProxy.OuterSingleton;
}

// Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy @ 14cf2c2a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy(void)

{
  if (Z_Registration_Info_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy.
                OuterSingleton,
               &Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_Statics::ClassParams
              );
  }
  return Z_Registration_Info_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy.OuterSingleton;
}

// Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy @ 14cf2c2e0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy(void)

{
  if (Z_Registration_Info_UClass_UARSaveWorldAsyncTaskBlueprintProxy.OuterSingleton == (UClass *)0x0
     ) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARSaveWorldAsyncTaskBlueprintProxy.OuterSingleton,
               &Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARSaveWorldAsyncTaskBlueprintProxy.OuterSingleton;
}

// Z_Construct_UClass_UARPin @ 14cf2c320

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARPin(void)

{
  if (Z_Registration_Info_UClass_UARPin.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARPin.OuterSingleton,
               &Z_Construct_UClass_UARPin_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARPin.OuterSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARTrackingState @ 14cf2c360

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARTrackingState(void)

{
  if (Z_Registration_Info_UEnum_EARTrackingState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARTrackingState.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARTrackingState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARTrackingState.InnerSingleton;
}

// EARGeoTrackingAccuracy_StaticEnum @ 14cf2c3a0

UEnum * __cdecl EARGeoTrackingAccuracy_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARGeoTrackingAccuracy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARGeoTrackingAccuracy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARGeoTrackingAccuracy,(UObject *)pUVar1,
                       L"EARGeoTrackingAccuracy");
  }
  return Z_Registration_Info_UEnum_EARGeoTrackingAccuracy.OuterSingleton;
}

// Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus @ 14cf2c3e0

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_GetARSessionStatus_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd @ 14cf2c4e0

UFunction * __cdecl Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARPlaneComponent_ReceiveAdd_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARPin_DebugDraw @ 14cf2c520

UFunction * __cdecl Z_Construct_UFunction_UARPin_DebugDraw(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UARPin_DebugDraw_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cf2c560

void __cdecl
Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocation_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 1;
  return;
}

// Z_Construct_UFunction_UARBlueprintLibrary_GetARTexture @ 14cf2c570

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_GetARTexture(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_GetARTexture_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARPin_GetDebugName @ 14cf2c660

UFunction * __cdecl Z_Construct_UFunction_UARPin_GetDebugName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UARPin_GetDebugName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate @ 14cf2c6a0

UFunction * __cdecl Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARPlaneComponent_ReceiveUpdate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocation @ 14cf2c6e0

UFunction * __cdecl Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocation_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARBlueprintLibrary_GetARWorldScale @ 14cf2c720

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_GetARWorldScale(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_GetARWorldScale_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UARTrackableNotifyComponent @ 14cf2c760

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARTrackableNotifyComponent(void)

{
  if (Z_Registration_Info_UClass_UARTrackableNotifyComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARTrackableNotifyComponent.OuterSingleton,
               &Z_Construct_UClass_UARTrackableNotifyComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARTrackableNotifyComponent.OuterSingleton;
}

// Z_Construct_UFunction_UARPin_GetLocalToTrackingTransform @ 14cf2c7a0

UFunction * __cdecl Z_Construct_UFunction_UARPin_GetLocalToTrackingTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARPin_GetLocalToTrackingTransform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cf2c7e0

void __cdecl
Z_Construct_UFunction_UARBlueprintLibrary_GetCameraIntrinsics_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14cf2c7f0

void __cdecl
Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x20) = 1;
  return;
}

// Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload @ 14cf2c800

UFunction * __cdecl Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARPlaneComponent_ServerUpdatePayload_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld @ 14cf2c840

UFunction * __cdecl Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARBlueprintLibrary_GetCameraIntrinsics @ 14cf2c880

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_GetCameraIntrinsics(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_GetCameraIntrinsics_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude @ 14cf2c8c0

UFunction * __cdecl
Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARGeoTrackingSupport_AddGeoAnchorAtLocationWithAltitude_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARPin_GetLocalToWorldTransform @ 14cf2c900

UFunction * __cdecl Z_Construct_UFunction_UARPin_GetLocalToWorldTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARPin_GetLocalToWorldTransform_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors @ 14cf2ca00

UFunction * __cdecl Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARPlaneComponent_SetObjectClassificationDebugColors_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate @ 14cf2cab0

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_GetCurrentLightEstimate_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARPin_GetPinnedComponent @ 14cf2cb40

UFunction * __cdecl Z_Construct_UFunction_UARPin_GetPinnedComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UARPin_GetPinnedComponent_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingAccuracy @ 14cf2cb90

UFunction * __cdecl Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingAccuracy(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingAccuracy_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARBlueprintLibrary_GetNumberOfTrackedFacesSupported @ 14cf2ccf0

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_GetNumberOfTrackedFacesSupported(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_GetNumberOfTrackedFacesSupported_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARPin_GetTrackedGeometry @ 14cf2cd30

UFunction * __cdecl Z_Construct_UFunction_UARPin_GetTrackedGeometry(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UARPin_GetTrackedGeometry_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingState @ 14cf2cd70

UFunction * __cdecl Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingState_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode @ 14cf2cdb0

UFunction * __cdecl Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARPlaneComponent_SetPlaneComponentDebugMode_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cf2cdf0

void __cdecl
Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  return;
}

// Z_Construct_UFunction_UARPin_GetTrackingState @ 14cf2ce00

UFunction * __cdecl Z_Construct_UFunction_UARPin_GetTrackingState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UARPin_GetTrackingState_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UARPlaneGeometry_NoRegister @ 14cf2ce40

UClass * __cdecl Z_Construct_UClass_UARPlaneGeometry_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARPlaneGeometry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARPlaneGeometry",
               &Z_Registration_Info_UClass_UARPlaneGeometry.InnerSingleton,
               UARPlaneGeometry::StaticRegisterNativesUARPlaneGeometry,0x1b0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UARPlaneGeometry>,
               InternalVTableHelperCtorCaller<UARPlaneGeometry>,local_res8,
               UARTrackedGeometry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARPlaneGeometry.InnerSingleton;
}

// Z_Construct_UClass_UARTrackedPoint_NoRegister @ 14cf2cf00

UClass * __cdecl Z_Construct_UClass_UARTrackedPoint_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTrackedPoint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTrackedPoint",
               &Z_Registration_Info_UClass_UARTrackedPoint.InnerSingleton,
               UARTrackedPoint::StaticRegisterNativesUARTrackedPoint,0x160,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UARTrackedPoint>,
               InternalVTableHelperCtorCaller<UARTrackedPoint>,local_res8,
               UARTrackedGeometry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTrackedPoint.InnerSingleton;
}

// Z_Construct_UClass_UARTrackedImage_NoRegister @ 14cf2cfc0

UClass * __cdecl Z_Construct_UClass_UARTrackedImage_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTrackedImage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTrackedImage",
               &Z_Registration_Info_UClass_UARTrackedImage.InnerSingleton,
               UARTrackedImage::StaticRegisterNativesUARTrackedImage,0x170,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UARTrackedImage>,
               InternalVTableHelperCtorCaller<UARTrackedImage>,local_res8,
               UARTrackedGeometry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTrackedImage.InnerSingleton;
}

// Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingStateReason @ 14cf2d080

UFunction * __cdecl Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingStateReason(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingStateReason_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UARFaceGeometry_NoRegister @ 14cf2d0c0

UClass * __cdecl Z_Construct_UClass_UARFaceGeometry_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARFaceGeometry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARFaceGeometry",
               &Z_Registration_Info_UClass_UARFaceGeometry.InnerSingleton,
               UARFaceGeometry::StaticRegisterNativesUARFaceGeometry,0x2c0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UARFaceGeometry>,
               InternalVTableHelperCtorCaller<UARFaceGeometry>,local_res8,
               UARTrackedGeometry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARFaceGeometry.InnerSingleton;
}

// Z_Construct_UClass_UAREnvironmentCaptureProbe_NoRegister @ 14cf2d180

UClass * __cdecl Z_Construct_UClass_UAREnvironmentCaptureProbe_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAREnvironmentCaptureProbe.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"AREnvironmentCaptureProbe",
               &Z_Registration_Info_UClass_UAREnvironmentCaptureProbe.InnerSingleton,
               UAREnvironmentCaptureProbe::StaticRegisterNativesUAREnvironmentCaptureProbe,0x180,
               0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UAREnvironmentCaptureProbe>,
               InternalVTableHelperCtorCaller<UAREnvironmentCaptureProbe>,local_res8,
               UARTrackedGeometry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAREnvironmentCaptureProbe.InnerSingleton;
}

// Z_Construct_UClass_UARTrackedObject_NoRegister @ 14cf2d240

UClass * __cdecl Z_Construct_UClass_UARTrackedObject_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTrackedObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTrackedObject",
               &Z_Registration_Info_UClass_UARTrackedObject.InnerSingleton,
               UARTrackedObject::StaticRegisterNativesUARTrackedObject,0x160,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UARTrackedObject>,
               InternalVTableHelperCtorCaller<UARTrackedObject>,local_res8,
               UARTrackedGeometry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTrackedObject.InnerSingleton;
}

// Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation @ 14cf2d3c0

UFunction * __cdecl
Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_GetObjectClassificationAtLocation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingSupport @ 14cf2d400

UFunction * __cdecl Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingSupport(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARGeoTrackingSupport_GetGeoTrackingSupport_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject @ 14cf2d440

UFunction * __cdecl
Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud @ 14cf2d480

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_GetPointCloud_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AARSkyLight @ 14cf2d4c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AARSkyLight(void)

{
  if (Z_Registration_Info_UClass_AARSkyLight.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AARSkyLight.OuterSingleton,
               &Z_Construct_UClass_AARSkyLight_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AARSkyLight.OuterSingleton;
}

// Z_Construct_UFunction_AARSkyLight_SetEnvironmentCaptureProbe @ 14cf2d5b0

UFunction * __cdecl Z_Construct_UFunction_AARSkyLight_SetEnvironmentCaptureProbe(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AARSkyLight_SetEnvironmentCaptureProbe_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARPointComponent_ReceiveAdd @ 14cf2d5f0

UFunction * __cdecl Z_Construct_UFunction_UARPointComponent_ReceiveAdd(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARPointComponent_ReceiveAdd_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig @ 14cf2d630

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_GetSessionConfig_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsAvailable_SetBit @ 14cf2d670

void __cdecl
Z_Construct_UDelegateFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_GeoTrackingAvailabilityDelegate__DelegateSignature_Statics
::NewProp_bIsAvailable_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UARPointComponent_ReceiveUpdate @ 14cf2d680

UFunction * __cdecl Z_Construct_UFunction_UARPointComponent_ReceiveUpdate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARPointComponent_ReceiveUpdate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload @ 14cf2d700

UFunction * __cdecl Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARPointComponent_ServerUpdatePayload_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailability @ 14cf2d780

UFunction * __cdecl
Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailability
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailability_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation @ 14cf2d9b0

UFunction * __cdecl
Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation
          (void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_CheckGeoTrackingAvailabilityAtLocation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UARComponent_NoRegister @ 14cf2da80

UClass * __cdecl Z_Construct_UClass_UARComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARComponent",
               &Z_Registration_Info_UClass_UARComponent.InnerSingleton,
               UARComponent::StaticRegisterNativesUARComponent,0x2e0,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UARComponent>,InternalVTableHelperCtorCaller<UARComponent>,
               local_res8,USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARComponent.InnerSingleton;
}

// Z_Construct_UClass_UARPlaneComponent_NoRegister @ 14cf2db40

UClass * __cdecl Z_Construct_UClass_UARPlaneComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARPlaneComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARPlaneComponent",
               &Z_Registration_Info_UClass_UARPlaneComponent.InnerSingleton,
               UARPlaneComponent::StaticRegisterNativesUARPlaneComponent,0x3b0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UARPlaneComponent>,
               InternalVTableHelperCtorCaller<UARPlaneComponent>,local_res8,
               UARComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARPlaneComponent.InnerSingleton;
}

// Z_Construct_UClass_UARPointComponent_NoRegister @ 14cf2dc00

UClass * __cdecl Z_Construct_UClass_UARPointComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARPointComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARPointComponent",
               &Z_Registration_Info_UClass_UARPointComponent.InnerSingleton,
               UARPointComponent::StaticRegisterNativesUARPointComponent,0x2f0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UARPointComponent>,
               InternalVTableHelperCtorCaller<UARPointComponent>,local_res8,
               UARComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARPointComponent.InnerSingleton;
}

// Z_Construct_UClass_UARFaceComponent_NoRegister @ 14cf2dcc0

UClass * __cdecl Z_Construct_UClass_UARFaceComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARFaceComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARFaceComponent",
               &Z_Registration_Info_UClass_UARFaceComponent.InnerSingleton,
               UARFaceComponent::StaticRegisterNativesUARFaceComponent,0x370,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UARFaceComponent>,
               InternalVTableHelperCtorCaller<UARFaceComponent>,local_res8,UARComponent::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARFaceComponent.InnerSingleton;
}

// Z_Construct_UClass_UARImageComponent_NoRegister @ 14cf2dd80

UClass * __cdecl Z_Construct_UClass_UARImageComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARImageComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARImageComponent",
               &Z_Registration_Info_UClass_UARImageComponent.InnerSingleton,
               UARImageComponent::StaticRegisterNativesUARImageComponent,0x380,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UARImageComponent>,
               InternalVTableHelperCtorCaller<UARImageComponent>,local_res8,
               UARComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARImageComponent.InnerSingleton;
}

// Z_Construct_UClass_UARQRCodeComponent_NoRegister @ 14cf2de40

UClass * __cdecl Z_Construct_UClass_UARQRCodeComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARQRCodeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARQRCodeComponent",
               &Z_Registration_Info_UClass_UARQRCodeComponent.InnerSingleton,
               UARQRCodeComponent::StaticRegisterNativesUARQRCodeComponent,0x390,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UARQRCodeComponent>,
               InternalVTableHelperCtorCaller<UARQRCodeComponent>,local_res8,
               UARComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARQRCodeComponent.InnerSingleton;
}

// Z_Construct_UClass_UARPoseComponent_NoRegister @ 14cf2df00

UClass * __cdecl Z_Construct_UClass_UARPoseComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARPoseComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARPoseComponent",
               &Z_Registration_Info_UClass_UARPoseComponent.InnerSingleton,
               UARPoseComponent::StaticRegisterNativesUARPoseComponent,0x350,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UARPoseComponent>,
               InternalVTableHelperCtorCaller<UARPoseComponent>,local_res8,UARComponent::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARPoseComponent.InnerSingleton;
}

// Z_Construct_UClass_UAREnvironmentProbeComponent_NoRegister @ 14cf2dfc0

UClass * __cdecl Z_Construct_UClass_UAREnvironmentProbeComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAREnvironmentProbeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"AREnvironmentProbeComponent",
               &Z_Registration_Info_UClass_UAREnvironmentProbeComponent.InnerSingleton,
               UAREnvironmentProbeComponent::StaticRegisterNativesUAREnvironmentProbeComponent,0x340
               ,0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UAREnvironmentProbeComponent>,
               InternalVTableHelperCtorCaller<UAREnvironmentProbeComponent>,local_res8,
               UARComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAREnvironmentProbeComponent.InnerSingleton;
}

// Z_Construct_UClass_UARObjectComponent_NoRegister @ 14cf2e080

UClass * __cdecl Z_Construct_UClass_UARObjectComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARObjectComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARObjectComponent",
               &Z_Registration_Info_UClass_UARObjectComponent.InnerSingleton,
               UARObjectComponent::StaticRegisterNativesUARObjectComponent,0x340,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UARObjectComponent>,
               InternalVTableHelperCtorCaller<UARObjectComponent>,local_res8,
               UARComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARObjectComponent.InnerSingleton;
}

// Z_Construct_UClass_UARMeshComponent_NoRegister @ 14cf2e140

UClass * __cdecl Z_Construct_UClass_UARMeshComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARMeshComponent",
               &Z_Registration_Info_UClass_UARMeshComponent.InnerSingleton,
               UARMeshComponent::StaticRegisterNativesUARMeshComponent,0x370,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UARMeshComponent>,
               InternalVTableHelperCtorCaller<UARMeshComponent>,local_res8,UARComponent::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARMeshComponent.InnerSingleton;
}

// EFaceComponentDebugMode_StaticEnum @ 14cf2e200

UEnum * __cdecl EFaceComponentDebugMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFaceComponentDebugMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EFaceComponentDebugMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EFaceComponentDebugMode,(UObject *)pUVar1,
                       L"EFaceComponentDebugMode");
  }
  return Z_Registration_Info_UEnum_EFaceComponentDebugMode.OuterSingleton;
}

// Z_Construct_UClass_UARGeoAnchorComponent_NoRegister @ 14cf2e240

UClass * __cdecl Z_Construct_UClass_UARGeoAnchorComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARGeoAnchorComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARGeoAnchorComponent",
               &Z_Registration_Info_UClass_UARGeoAnchorComponent.InnerSingleton,
               UARGeoAnchorComponent::StaticRegisterNativesUARGeoAnchorComponent,0x380,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UARGeoAnchorComponent>,
               InternalVTableHelperCtorCaller<UARGeoAnchorComponent>,local_res8,
               UARComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARGeoAnchorComponent.InnerSingleton;
}

// EARFaceTransformMixing_StaticEnum @ 14cf2e300

UEnum * __cdecl EARFaceTransformMixing_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARFaceTransformMixing.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARFaceTransformMixing.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARFaceTransformMixing,(UObject *)pUVar1,
                       L"EARFaceTransformMixing");
  }
  return Z_Registration_Info_UEnum_EARFaceTransformMixing.OuterSingleton;
}

// Z_Construct_UFunction_UARFaceComponent_ReceiveAdd @ 14cf2e4f0

UFunction * __cdecl Z_Construct_UFunction_UARFaceComponent_ReceiveAdd(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARFaceComponent_ReceiveAdd_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UARSessionConfig @ 14cf2e5b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARSessionConfig(void)

{
  if (Z_Registration_Info_UClass_UARSessionConfig.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARSessionConfig.OuterSingleton,
               &Z_Construct_UClass_UARSessionConfig_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARSessionConfig.OuterSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType @ 14cf2e5f0

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType(void)

{
  if (Z_Registration_Info_UEnum_EAREnvironmentCaptureProbeType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAREnvironmentCaptureProbeType.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType_Statics::
                EnumParams);
  }
  return Z_Registration_Info_UEnum_EAREnvironmentCaptureProbeType.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection @ 14cf2e630

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection(void)

{
  if (Z_Registration_Info_UEnum_EARFaceTrackingDirection.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARFaceTrackingDirection.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARFaceTrackingDirection.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate @ 14cf2e670

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate(void)

{
  if (Z_Registration_Info_UEnum_EARFaceTrackingUpdate.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARFaceTrackingUpdate.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARFaceTrackingUpdate.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode @ 14cf2e6f0

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode(void)

{
  if (Z_Registration_Info_UEnum_EARFrameSyncMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARFrameSyncMode.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARFrameSyncMode.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode @ 14cf2e730

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode(void)

{
  if (Z_Registration_Info_UEnum_EARLightEstimationMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARLightEstimationMode.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARLightEstimationMode.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode @ 14cf2e770

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode(void)

{
  if (Z_Registration_Info_UEnum_EARPlaneDetectionMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARPlaneDetectionMode.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARPlaneDetectionMode.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARWorldAlignment @ 14cf2e7b0

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARWorldAlignment(void)

{
  if (Z_Registration_Info_UEnum_EARWorldAlignment.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARWorldAlignment.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARWorldAlignment_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARWorldAlignment.InnerSingleton;
}

// EARWorldAlignment_StaticEnum @ 14cf2e7f0

UEnum * __cdecl EARWorldAlignment_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARWorldAlignment.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARWorldAlignment.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARWorldAlignment,(UObject *)pUVar1,
                       L"EARWorldAlignment");
  }
  return Z_Registration_Info_UEnum_EARWorldAlignment.OuterSingleton;
}

// Z_Construct_UClass_UARCandidateImage @ 14cf2e830

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARCandidateImage(void)

{
  if (Z_Registration_Info_UClass_UARCandidateImage.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARCandidateImage.OuterSingleton,
               &Z_Construct_UClass_UARCandidateImage_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARCandidateImage.OuterSingleton;
}

// Z_Construct_UClass_UARCandidateObject @ 14cf2e8b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARCandidateObject(void)

{
  if (Z_Registration_Info_UClass_UARCandidateObject.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARCandidateObject.OuterSingleton,
               &Z_Construct_UClass_UARCandidateObject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARCandidateObject.OuterSingleton;
}

// Z_Construct_UClass_UARTypesDummyClass @ 14cf2e8f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARTypesDummyClass(void)

{
  if (Z_Registration_Info_UClass_UARTypesDummyClass.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARTypesDummyClass.OuterSingleton,
               &Z_Construct_UClass_UARTypesDummyClass_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARTypesDummyClass.OuterSingleton;
}

// Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate @ 14cf2e930

UFunction * __cdecl Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARFaceComponent_ReceiveUpdate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_AugmentedReality_EARCandidateImageOrientation @ 14cf2e970

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARCandidateImageOrientation(void)

{
  if (Z_Registration_Info_UEnum_EARCandidateImageOrientation.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARCandidateImageOrientation.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARCandidateImageOrientation_Statics::EnumParams)
    ;
  }
  return Z_Registration_Info_UEnum_EARCandidateImageOrientation.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARJointTransformSpace @ 14cf2e9b0

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARJointTransformSpace(void)

{
  if (Z_Registration_Info_UEnum_EARJointTransformSpace.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARJointTransformSpace.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARJointTransformSpace_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARJointTransformSpace.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARSessionStatus @ 14cf2e9f0

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARSessionStatus(void)

{
  if (Z_Registration_Info_UEnum_EARSessionStatus.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARSessionStatus.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARSessionStatus_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARSessionStatus.InnerSingleton;
}

// Z_Construct_UScriptStruct_FARSkeletonDefinition @ 14cf2ea30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FARSkeletonDefinition(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FARSkeletonDefinition.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FARSkeletonDefinition.InnerSingleton,
               &Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FARSkeletonDefinition.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FARSkeletonDefinition.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// EARTrackingState_StaticEnum @ 14cf2eab0

UEnum * __cdecl EARTrackingState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARTrackingState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARTrackingState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARTrackingState,(UObject *)pUVar1,
                       L"EARTrackingState");
  }
  return Z_Registration_Info_UEnum_EARTrackingState.OuterSingleton;
}

// EARSessionType_StaticEnum @ 14cf2eaf0

UEnum * __cdecl EARSessionType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARSessionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARSessionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARSessionType,(UObject *)pUVar1,
                       L"EARSessionType");
  }
  return Z_Registration_Info_UEnum_EARSessionType.OuterSingleton;
}

// Z_Construct_UFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition @ 14cf2eb30

UFunction * __cdecl
Z_Construct_UFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UGetGeoLocationAsyncTaskBlueprintProxy_GetGeoLocationAtWorldPosition_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload @ 14cf2eb70

UFunction * __cdecl Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARFaceComponent_ServerUpdatePayload_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EARCaptureType_StaticEnum @ 14cf2ebb0

UEnum * __cdecl EARCaptureType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARCaptureType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARCaptureType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARCaptureType,(UObject *)pUVar1,
                       L"EARCaptureType");
  }
  return Z_Registration_Info_UEnum_EARCaptureType.OuterSingleton;
}

// EARPlaneDetectionMode_StaticEnum @ 14cf2ebf0

UEnum * __cdecl EARPlaneDetectionMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARPlaneDetectionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARPlaneDetectionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode,(UObject *)pUVar1,
                       L"EARPlaneDetectionMode");
  }
  return Z_Registration_Info_UEnum_EARPlaneDetectionMode.OuterSingleton;
}

// Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode @ 14cf2ec30

UFunction * __cdecl Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARFaceComponent_SetFaceComponentDebugMode_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// EARLineTraceChannels_StaticEnum @ 14cf2ecb0

UEnum * __cdecl EARLineTraceChannels_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARLineTraceChannels.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARLineTraceChannels.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels,(UObject *)pUVar1,
                       L"EARLineTraceChannels");
  }
  return Z_Registration_Info_UEnum_EARLineTraceChannels.OuterSingleton;
}

// EARLightEstimationMode_StaticEnum @ 14cf2ecf0

UEnum * __cdecl EARLightEstimationMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARLightEstimationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARLightEstimationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode,(UObject *)pUVar1,
                       L"EARLightEstimationMode");
  }
  return Z_Registration_Info_UEnum_EARLightEstimationMode.OuterSingleton;
}

// Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats @ 14cf2ed30

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_GetSupportedVideoFormats_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUpdateVertexNormal_SetBit @ 14cf2ee70

void __cdecl
Z_Construct_UClass_UARFaceComponent_Statics::NewProp_bUpdateVertexNormal_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2e1) = 1;
  return;
}

// NewProp_bFaceOutOfScreen_SetBit @ 14cf2ee80

void __cdecl
Z_Construct_UClass_UARFaceComponent_Statics::NewProp_bFaceOutOfScreen_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2e2) = 1;
  return;
}

// EARTrackingQuality_StaticEnum @ 14cf2ef10

UEnum * __cdecl EARTrackingQuality_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARTrackingQuality.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARTrackingQuality.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARTrackingQuality,(UObject *)pUVar1,
                       L"EARTrackingQuality");
  }
  return Z_Registration_Info_UEnum_EARTrackingQuality.OuterSingleton;
}

// EARFrameSyncMode_StaticEnum @ 14cf2ef50

UEnum * __cdecl EARFrameSyncMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARFrameSyncMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARFrameSyncMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode,(UObject *)pUVar1,
                       L"EARFrameSyncMode");
  }
  return Z_Registration_Info_UEnum_EARFrameSyncMode.OuterSingleton;
}

// EARTrackingQualityReason_StaticEnum @ 14cf2f220

UEnum * __cdecl EARTrackingQualityReason_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARTrackingQualityReason.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARTrackingQualityReason.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARTrackingQualityReason,(UObject *)pUVar1
                       ,L"EARTrackingQualityReason");
  }
  return Z_Registration_Info_UEnum_EARTrackingQualityReason.OuterSingleton;
}

// EAREnvironmentCaptureProbeType_StaticEnum @ 14cf2f260

UEnum * __cdecl EAREnvironmentCaptureProbeType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAREnvironmentCaptureProbeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EAREnvironmentCaptureProbeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType,
                       (UObject *)pUVar1,L"EAREnvironmentCaptureProbeType");
  }
  return Z_Registration_Info_UEnum_EAREnvironmentCaptureProbeType.OuterSingleton;
}

// Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality @ 14cf2f3c0

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQuality_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EARFaceTrackingUpdate_StaticEnum @ 14cf2f400

UEnum * __cdecl EARFaceTrackingUpdate_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARFaceTrackingUpdate.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARFaceTrackingUpdate.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate,(UObject *)pUVar1,
                       L"EARFaceTrackingUpdate");
  }
  return Z_Registration_Info_UEnum_EARFaceTrackingUpdate.OuterSingleton;
}

// EARSessionStatus_StaticEnum @ 14cf2f500

UEnum * __cdecl EARSessionStatus_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARSessionStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARSessionStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARSessionStatus,(UObject *)pUVar1,
                       L"EARSessionStatus");
  }
  return Z_Registration_Info_UEnum_EARSessionStatus.OuterSingleton;
}

// Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason @ 14cf2f600

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_GetTrackingQualityReason_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// EARSessionTrackingFeature_StaticEnum @ 14cf2f640

UEnum * __cdecl EARSessionTrackingFeature_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARSessionTrackingFeature.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARSessionTrackingFeature.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARSessionTrackingFeature,
                       (UObject *)pUVar1,L"EARSessionTrackingFeature");
  }
  return Z_Registration_Info_UEnum_EARSessionTrackingFeature.OuterSingleton;
}

// EARWorldMappingState_StaticEnum @ 14cf2f680

UEnum * __cdecl EARWorldMappingState_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARWorldMappingState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARWorldMappingState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARWorldMappingState,(UObject *)pUVar1,
                       L"EARWorldMappingState");
  }
  return Z_Registration_Info_UEnum_EARWorldMappingState.OuterSingleton;
}

// EARSceneReconstruction_StaticEnum @ 14cf2f6c0

UEnum * __cdecl EARSceneReconstruction_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARSceneReconstruction.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARSceneReconstruction.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARSceneReconstruction,(UObject *)pUVar1,
                       L"EARSceneReconstruction");
  }
  return Z_Registration_Info_UEnum_EARSceneReconstruction.OuterSingleton;
}

// Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus @ 14cf2f700

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_GetWorldMappingStatus_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// EARPlaneOrientation_StaticEnum @ 14cf2f740

UEnum * __cdecl EARPlaneOrientation_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARPlaneOrientation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARPlaneOrientation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARPlaneOrientation,(UObject *)pUVar1,
                       L"EARPlaneOrientation");
  }
  return Z_Registration_Info_UEnum_EARPlaneOrientation.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14cf2f780

void __cdecl
Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreReady_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// EARObjectClassification_StaticEnum @ 14cf2f850

UEnum * __cdecl EARObjectClassification_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARObjectClassification.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARObjectClassification.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARObjectClassification,(UObject *)pUVar1,
                       L"EARObjectClassification");
  }
  return Z_Registration_Info_UEnum_EARObjectClassification.OuterSingleton;
}

// Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreReady @ 14cf2f890

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreReady(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreReady_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARSessionConfig_AddCandidateImage @ 14cf2f8d0

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_AddCandidateImage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_AddCandidateImage_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cf2f910

void __cdecl
Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreSupported_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreSupported @ 14cf2f920

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreSupported(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_IsARPinLocalStoreSupported_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARSessionConfig_AddCandidateObject @ 14cf2f960

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_AddCandidateObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_AddCandidateObject_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EARSpatialMeshUsageFlags_StaticEnum @ 14cf2f9a0

UEnum * __cdecl EARSpatialMeshUsageFlags_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARSpatialMeshUsageFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARSpatialMeshUsageFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARSpatialMeshUsageFlags,(UObject *)pUVar1
                       ,L"EARSpatialMeshUsageFlags");
  }
  return Z_Registration_Info_UEnum_EARSpatialMeshUsageFlags.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14cf2f9e0

void __cdecl
Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// EImageComponentDebugMode_StaticEnum @ 14cf2f9f0

UEnum * __cdecl EImageComponentDebugMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EImageComponentDebugMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EImageComponentDebugMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EImageComponentDebugMode,(UObject *)pUVar1
                       ,L"EImageComponentDebugMode");
  }
  return Z_Registration_Info_UEnum_EImageComponentDebugMode.OuterSingleton;
}

// Z_Construct_UFunction_UARSessionConfig_ClearCandidateImages @ 14cf2fa30

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_ClearCandidateImages(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_ClearCandidateImages_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported @ 14cf2fa70

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_IsARSupported_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EARJointTransformSpace_StaticEnum @ 14cf2fab0

UEnum * __cdecl EARJointTransformSpace_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARJointTransformSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARJointTransformSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARJointTransformSpace,(UObject *)pUVar1,
                       L"EARJointTransformSpace");
  }
  return Z_Registration_Info_UEnum_EARJointTransformSpace.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14cf2fbb0

void __cdecl
Z_Construct_UFunction_UARBlueprintLibrary_IsSceneReconstructionSupported_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// EARAltitudeSource_StaticEnum @ 14cf2fbc0

UEnum * __cdecl EARAltitudeSource_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARAltitudeSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARAltitudeSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARAltitudeSource,(UObject *)pUVar1,
                       L"EARAltitudeSource");
  }
  return Z_Registration_Info_UEnum_EARAltitudeSource.OuterSingleton;
}

// Z_Construct_UClass_UAREnvironmentCaptureProbeTexture @ 14cf2fcc0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAREnvironmentCaptureProbeTexture(void)

{
  if (Z_Registration_Info_UClass_UAREnvironmentCaptureProbeTexture.OuterSingleton == (UClass *)0x0)
  {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAREnvironmentCaptureProbeTexture.OuterSingleton,
               &Z_Construct_UClass_UAREnvironmentCaptureProbeTexture_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAREnvironmentCaptureProbeTexture.OuterSingleton;
}

// Z_Construct_UClass_UARTexture @ 14cf2fd00

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARTexture(void)

{
  if (Z_Registration_Info_UClass_UARTexture.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARTexture.OuterSingleton,
               &Z_Construct_UClass_UARTexture_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARTexture.OuterSingleton;
}

// Z_Construct_UClass_UARTextureCameraDepth @ 14cf2fd40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARTextureCameraDepth(void)

{
  if (Z_Registration_Info_UClass_UARTextureCameraDepth.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARTextureCameraDepth.OuterSingleton,
               &Z_Construct_UClass_UARTextureCameraDepth_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARTextureCameraDepth.OuterSingleton;
}

// Z_Construct_UClass_UARTextureCameraImage @ 14cf2fd80

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARTextureCameraImage(void)

{
  if (Z_Registration_Info_UClass_UARTextureCameraImage.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARTextureCameraImage.OuterSingleton,
               &Z_Construct_UClass_UARTextureCameraImage_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARTextureCameraImage.OuterSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARDepthAccuracy @ 14cf2fdc0

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARDepthAccuracy(void)

{
  if (Z_Registration_Info_UEnum_EARDepthAccuracy.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARDepthAccuracy.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARDepthAccuracy_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARDepthAccuracy.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARDepthQuality @ 14cf2fe00

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARDepthQuality(void)

{
  if (Z_Registration_Info_UEnum_EARDepthQuality.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARDepthQuality.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARDepthQuality_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARDepthQuality.InnerSingleton;
}

// EARTextureType_StaticEnum @ 14cf2fe40

UEnum * __cdecl EARTextureType_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARTextureType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARTextureType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARTextureType,(UObject *)pUVar1,
                       L"EARTextureType");
  }
  return Z_Registration_Info_UEnum_EARTextureType.OuterSingleton;
}

// Z_Construct_UFunction_UARBlueprintLibrary_IsSceneReconstructionSupported @ 14cf2fe80

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_IsSceneReconstructionSupported(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_IsSceneReconstructionSupported_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14cf2fec0

void * __cdecl Z_Construct_UScriptStruct_FARSessionStatus_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FARSessionStatus,&UE::CoreUObject::Private::Construct<FARSessionStatus>,&UE::CoreUObject::Private::ConstructForTests<FARSessionStatus>,&UE::CoreUObject::Private::Destruct<FARSessionStatus>,&UE::CoreUObject::Private::Copy<FARSessionStatus>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UARImageComponent_ReceiveAdd @ 14cf2ff00

UFunction * __cdecl Z_Construct_UFunction_UARImageComponent_ReceiveAdd(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARImageComponent_ReceiveAdd_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UARPin_NoRegister @ 14cf2ff40

UClass * __cdecl Z_Construct_UClass_UARPin_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARPin.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARPin",
               &Z_Registration_Info_UClass_UARPin.InnerSingleton,UARPin::StaticRegisterNativesUARPin
               ,0x160,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UARPin>,
               InternalVTableHelperCtorCaller<UARPin>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARPin.InnerSingleton;
}

// NewProp_ReturnValue_SetBit @ 14cf2fff0

void __cdecl
Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// Z_Construct_UFunction_UARImageComponent_ReceiveUpdate @ 14cf30240

UFunction * __cdecl Z_Construct_UFunction_UARImageComponent_ReceiveUpdate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARImageComponent_ReceiveUpdate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported @ 14cf30280

UFunction * __cdecl
Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cf30310

void __cdecl
Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload @ 14cf30440

UFunction * __cdecl Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARImageComponent_ServerUpdatePayload_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported @ 14cf30480

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_IsSessionTypeSupported_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode @ 14cf304c0

UFunction * __cdecl Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARImageComponent_SetImageComponentDebugMode_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_NoRegister @ 14cf305c0

UClass * __cdecl Z_Construct_UClass_UARSaveWorldAsyncTaskBlueprintProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARSaveWorldAsyncTaskBlueprintProxy.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARSaveWorldAsyncTaskBlueprintProxy",
               &Z_Registration_Info_UClass_UARSaveWorldAsyncTaskBlueprintProxy.InnerSingleton,
               UARSaveWorldAsyncTaskBlueprintProxy::
               StaticRegisterNativesUARSaveWorldAsyncTaskBlueprintProxy,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UARSaveWorldAsyncTaskBlueprintProxy>,
               InternalVTableHelperCtorCaller<UARSaveWorldAsyncTaskBlueprintProxy>,local_res8,
               UARBaseAsyncTaskBlueprintProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARSaveWorldAsyncTaskBlueprintProxy.InnerSingleton;
}

// Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_NoRegister @ 14cf30680

UClass * __cdecl Z_Construct_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARGetCandidateObjectAsyncTaskBlueprintProxy",
               &Z_Registration_Info_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy.
                InnerSingleton,
               UARGetCandidateObjectAsyncTaskBlueprintProxy::
               StaticRegisterNativesUARGetCandidateObjectAsyncTaskBlueprintProxy,0xc0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UARGetCandidateObjectAsyncTaskBlueprintProxy>,
               InternalVTableHelperCtorCaller<UARGetCandidateObjectAsyncTaskBlueprintProxy>,
               local_res8,UARBaseAsyncTaskBlueprintProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARGetCandidateObjectAsyncTaskBlueprintProxy.InnerSingleton;
}

// EARDepthQuality_StaticEnum @ 14cf30800

UEnum * __cdecl EARDepthQuality_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARDepthQuality.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARDepthQuality.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARDepthQuality,(UObject *)pUVar1,
                       L"EARDepthQuality");
  }
  return Z_Registration_Info_UEnum_EARDepthQuality.OuterSingleton;
}

// EARDepthAccuracy_StaticEnum @ 14cf30840

UEnum * __cdecl EARDepthAccuracy_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARDepthAccuracy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARDepthAccuracy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARDepthAccuracy,(UObject *)pUVar1,
                       L"EARDepthAccuracy");
  }
  return Z_Registration_Info_UEnum_EARDepthAccuracy.OuterSingleton;
}

// EQRCodeComponentDebugMode_StaticEnum @ 14cf30880

UEnum * __cdecl EQRCodeComponentDebugMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EQRCodeComponentDebugMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EQRCodeComponentDebugMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EQRCodeComponentDebugMode,
                       (UObject *)pUVar1,L"EQRCodeComponentDebugMode");
  }
  return Z_Registration_Info_UEnum_EQRCodeComponentDebugMode.OuterSingleton;
}

// EARCandidateImageOrientation_StaticEnum @ 14cf308c0

UEnum * __cdecl EARCandidateImageOrientation_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARCandidateImageOrientation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARCandidateImageOrientation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARCandidateImageOrientation,
                       (UObject *)pUVar1,L"EARCandidateImageOrientation");
  }
  return Z_Registration_Info_UEnum_EARCandidateImageOrientation.OuterSingleton;
}

// NewProp_bIsTemporallySmoothed_SetBit @ 14cf30900

void __cdecl
Z_Construct_UClass_UARTextureCameraDepth_Statics::NewProp_bIsTemporallySmoothed_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x172) = 1;
  return;
}

// Z_Construct_UFunction_UARCandidateImage_GetCandidateTexture @ 14cf309d0

UFunction * __cdecl Z_Construct_UFunction_UARCandidateImage_GetCandidateTexture(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARCandidateImage_GetCandidateTexture_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd @ 14cf30a10

UFunction * __cdecl Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARQRCodeComponent_ReceiveAdd_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARCandidateImage_GetFriendlyName @ 14cf30a50

UFunction * __cdecl Z_Construct_UFunction_UARCandidateImage_GetFriendlyName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARCandidateImage_GetFriendlyName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList @ 14cf30a90

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_GetCandidateImageList_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate @ 14cf30ad0

UFunction * __cdecl Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARQRCodeComponent_ReceiveUpdate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARCandidateImage_GetOrientation @ 14cf30bd0

UFunction * __cdecl Z_Construct_UFunction_UARCandidateImage_GetOrientation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARCandidateImage_GetOrientation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload @ 14cf30ca0

UFunction * __cdecl Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARQRCodeComponent_ServerUpdatePayload_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARCandidateImage_GetPhysicalHeight @ 14cf30dd0

UFunction * __cdecl Z_Construct_UFunction_UARCandidateImage_GetPhysicalHeight(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARCandidateImage_GetPhysicalHeight_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode @ 14cf30e10

UFunction * __cdecl Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARQRCodeComponent_SetQRCodeComponentDebugMode_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARCandidateImage_GetPhysicalWidth @ 14cf30f10

UFunction * __cdecl Z_Construct_UFunction_UARCandidateImage_GetPhysicalWidth(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARCandidateImage_GetPhysicalWidth_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UARTraceResultDummy @ 14cf30f50

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARTraceResultDummy(void)

{
  if (Z_Registration_Info_UClass_UARTraceResultDummy.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARTraceResultDummy.OuterSingleton,
               &Z_Construct_UClass_UARTraceResultDummy_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARTraceResultDummy.OuterSingleton;
}

// NewStructOps @ 14cf30f90

void * __cdecl Z_Construct_UScriptStruct_FARTraceResult_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FARTraceResult,&UE::CoreUObject::Private::Construct<FARTraceResult>,&UE::CoreUObject::Private::ConstructForTests<FARTraceResult>,&UE::CoreUObject::Private::Destruct<FARTraceResult>,&UE::CoreUObject::Private::Copy<FARTraceResult>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UClass_AARSharedWorldGameState_NoRegister @ 14cf30fd0

UClass * __cdecl Z_Construct_UClass_AARSharedWorldGameState_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AARSharedWorldGameState.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARSharedWorldGameState",
               &Z_Registration_Info_UClass_AARSharedWorldGameState.InnerSingleton,
               AARSharedWorldGameState::StaticRegisterNativesAARSharedWorldGameState,0x370,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<AARSharedWorldGameState>,
               InternalVTableHelperCtorCaller<AARSharedWorldGameState>,local_res8,
               AGameState::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AARSharedWorldGameState.InnerSingleton;
}

// NewProp_bTestFeaturePoints_SetBit @ 14cf31150

void __cdecl
Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::
NewProp_bTestFeaturePoints_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// NewProp_bTestGroundPlane_SetBit @ 14cf31160

void __cdecl
Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::
NewProp_bTestGroundPlane_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x11) = 1;
  return;
}

// NewProp_bTestPlaneExtents_SetBit @ 14cf31170

void __cdecl
Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::
NewProp_bTestPlaneExtents_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x12) = 1;
  return;
}

// NewProp_bTestPlaneBoundaryPolygon_SetBit @ 14cf31180

void __cdecl
Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::
NewProp_bTestPlaneBoundaryPolygon_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x13) = 1;
  return;
}

// EPoseComponentDebugMode_StaticEnum @ 14cf31190

UEnum * __cdecl EPoseComponentDebugMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPoseComponentDebugMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EPoseComponentDebugMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EPoseComponentDebugMode,(UObject *)pUVar1,
                       L"EPoseComponentDebugMode");
  }
  return Z_Registration_Info_UEnum_EPoseComponentDebugMode.OuterSingleton;
}

// Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects @ 14cf311d0

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARCandidateObject_GetBoundingBox @ 14cf31210

UFunction * __cdecl Z_Construct_UFunction_UARCandidateObject_GetBoundingBox(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARCandidateObject_GetBoundingBox_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARPoseComponent_ReceiveAdd @ 14cf31310

UFunction * __cdecl Z_Construct_UFunction_UARPoseComponent_ReceiveAdd(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARPoseComponent_ReceiveAdd_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bTestFeaturePoints_SetBit @ 14cf31350

void __cdecl
Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::
NewProp_bTestFeaturePoints_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bTestGroundPlane_SetBit @ 14cf31360

void __cdecl
Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::
NewProp_bTestGroundPlane_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  return;
}

// NewProp_bTestPlaneExtents_SetBit @ 14cf31370

void __cdecl
Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::
NewProp_bTestPlaneExtents_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x32) = 1;
  return;
}

// Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData @ 14cf31380

UFunction * __cdecl Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARCandidateObject_GetCandidateObjectData_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// NewProp_bTestPlaneBoundaryPolygon_SetBit @ 14cf313c0

void __cdecl
Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::
NewProp_bTestPlaneBoundaryPolygon_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x33) = 1;
  return;
}

// Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate @ 14cf314a0

UFunction * __cdecl Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARPoseComponent_ReceiveUpdate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARCandidateObject_GetFriendlyName @ 14cf315a0

UFunction * __cdecl Z_Construct_UFunction_UARCandidateObject_GetFriendlyName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARCandidateObject_GetFriendlyName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D @ 14cf316c0

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_LineTraceTrackedObjects3D_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UAREnvironmentCaptureProbe @ 14cf31700

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAREnvironmentCaptureProbe(void)

{
  if (Z_Registration_Info_UClass_UAREnvironmentCaptureProbe.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAREnvironmentCaptureProbe.OuterSingleton,
               &Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAREnvironmentCaptureProbe.OuterSingleton;
}

// Z_Construct_UClass_UARFaceGeometry @ 14cf31740

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARFaceGeometry(void)

{
  if (Z_Registration_Info_UClass_UARFaceGeometry.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARFaceGeometry.OuterSingleton,
               &Z_Construct_UClass_UARFaceGeometry_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARFaceGeometry.OuterSingleton;
}

// Z_Construct_UClass_UARGeoAnchor @ 14cf31780

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARGeoAnchor(void)

{
  if (Z_Registration_Info_UClass_UARGeoAnchor.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARGeoAnchor.OuterSingleton,
               &Z_Construct_UClass_UARGeoAnchor_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARGeoAnchor.OuterSingleton;
}

// Z_Construct_UClass_UARMeshGeometry @ 14cf317c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARMeshGeometry(void)

{
  if (Z_Registration_Info_UClass_UARMeshGeometry.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARMeshGeometry.OuterSingleton,
               &Z_Construct_UClass_UARMeshGeometry_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARMeshGeometry.OuterSingleton;
}

// Z_Construct_UClass_UARPlaneGeometry @ 14cf31800

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARPlaneGeometry(void)

{
  if (Z_Registration_Info_UClass_UARPlaneGeometry.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARPlaneGeometry.OuterSingleton,
               &Z_Construct_UClass_UARPlaneGeometry_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARPlaneGeometry.OuterSingleton;
}

// Z_Construct_UClass_UARTrackedGeometry @ 14cf31840

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARTrackedGeometry(void)

{
  if (Z_Registration_Info_UClass_UARTrackedGeometry.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARTrackedGeometry.OuterSingleton,
               &Z_Construct_UClass_UARTrackedGeometry_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARTrackedGeometry.OuterSingleton;
}

// Z_Construct_UClass_UARTrackedImage @ 14cf31880

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARTrackedImage(void)

{
  if (Z_Registration_Info_UClass_UARTrackedImage.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARTrackedImage.OuterSingleton,
               &Z_Construct_UClass_UARTrackedImage_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARTrackedImage.OuterSingleton;
}

// Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload @ 14cf318c0

UFunction * __cdecl Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARPoseComponent_ServerUpdatePayload_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UARTrackedObject @ 14cf31900

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARTrackedObject(void)

{
  if (Z_Registration_Info_UClass_UARTrackedObject.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARTrackedObject.OuterSingleton,
               &Z_Construct_UClass_UARTrackedObject_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARTrackedObject.OuterSingleton;
}

// Z_Construct_UClass_UARTrackedPoint @ 14cf31940

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARTrackedPoint(void)

{
  if (Z_Registration_Info_UClass_UARTrackedPoint.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARTrackedPoint.OuterSingleton,
               &Z_Construct_UClass_UARTrackedPoint_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARTrackedPoint.OuterSingleton;
}

// Z_Construct_UClass_UARTrackedPose @ 14cf31980

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARTrackedPose(void)

{
  if (Z_Registration_Info_UClass_UARTrackedPose.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARTrackedPose.OuterSingleton,
               &Z_Construct_UClass_UARTrackedPose_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARTrackedPose.OuterSingleton;
}

// Z_Construct_UClass_UARTrackedQRCode @ 14cf319c0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARTrackedQRCode(void)

{
  if (Z_Registration_Info_UClass_UARTrackedQRCode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARTrackedQRCode.OuterSingleton,
               &Z_Construct_UClass_UARTrackedQRCode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARTrackedQRCode.OuterSingleton;
}

// Z_Construct_UFunction_UARCandidateObject_SetBoundingBox @ 14cf31a00

UFunction * __cdecl Z_Construct_UFunction_UARCandidateObject_SetBoundingBox(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARCandidateObject_SetBoundingBox_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UEnum_AugmentedReality_EAREye @ 14cf31a40

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EAREye(void)

{
  if (Z_Registration_Info_UEnum_EAREye.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EAREye.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EAREye_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EAREye.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape @ 14cf31a80

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape(void)

{
  if (Z_Registration_Info_UEnum_EARFaceBlendShape.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARFaceBlendShape.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARFaceBlendShape.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARPlaneOrientation @ 14cf31b80

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARPlaneOrientation(void)

{
  if (Z_Registration_Info_UEnum_EARPlaneOrientation.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARPlaneOrientation.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARPlaneOrientation_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARPlaneOrientation.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARSpatialMeshUsageFlags @ 14cf31bc0

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARSpatialMeshUsageFlags(void)

{
  if (Z_Registration_Info_UEnum_EARSpatialMeshUsageFlags.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARSpatialMeshUsageFlags.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARSpatialMeshUsageFlags_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARSpatialMeshUsageFlags.InnerSingleton;
}

// Z_Construct_UScriptStruct_FARPose3D @ 14cf31c10

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FARPose3D(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FARPose3D.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FARPose3D.InnerSingleton,
               &Z_Construct_UScriptStruct_FARPose3D_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FARPose3D.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FARPose3D.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode @ 14cf31ca0

UFunction * __cdecl Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARPoseComponent_SetPoseComponentDebugMode_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARTrackedGeometry_GetDebugName @ 14cf31ce0

UFunction * __cdecl Z_Construct_UFunction_UARTrackedGeometry_GetDebugName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARTrackedGeometry_GetDebugName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData @ 14cf31d20

UFunction * __cdecl Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARCandidateObject_SetCandidateObjectData_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber @ 14cf31d60

UFunction * __cdecl Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateFrameNumber_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList @ 14cf31da0

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_GetCandidateObjectList_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARCandidateObject_SetFriendlyName @ 14cf31de0

UFunction * __cdecl Z_Construct_UFunction_UARCandidateObject_SetFriendlyName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARCandidateObject_SetFriendlyName_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UARGeoTrackingSupport_NoRegister @ 14cf31e20

UClass * __cdecl Z_Construct_UClass_UARGeoTrackingSupport_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARGeoTrackingSupport.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARGeoTrackingSupport",
               &Z_Registration_Info_UClass_UARGeoTrackingSupport.InnerSingleton,
               UARGeoTrackingSupport::StaticRegisterNativesUARGeoTrackingSupport,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UARGeoTrackingSupport>,
               InternalVTableHelperCtorCaller<UARGeoTrackingSupport>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARGeoTrackingSupport.InnerSingleton;
}

// Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_NoRegister @ 14cf31ed0

UClass * __cdecl
Z_Construct_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.InnerSingleton
      == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy",
               &Z_Registration_Info_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.
                InnerSingleton,
               UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::
               StaticRegisterNativesUCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy,0xb0,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy>,
               InternalVTableHelperCtorCaller<UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy>,
               local_res8,UARBaseAsyncTaskBlueprintProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy.
         InnerSingleton;
}

// Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_NoRegister @ 14cf31f90

UClass * __cdecl Z_Construct_UClass_UGetGeoLocationAsyncTaskBlueprintProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGetGeoLocationAsyncTaskBlueprintProxy.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"GetGeoLocationAsyncTaskBlueprintProxy",
               &Z_Registration_Info_UClass_UGetGeoLocationAsyncTaskBlueprintProxy.InnerSingleton,
               UGetGeoLocationAsyncTaskBlueprintProxy::
               StaticRegisterNativesUGetGeoLocationAsyncTaskBlueprintProxy,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGetGeoLocationAsyncTaskBlueprintProxy>,
               InternalVTableHelperCtorCaller<UGetGeoLocationAsyncTaskBlueprintProxy>,local_res8,
               UARBaseAsyncTaskBlueprintProxy::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGetGeoLocationAsyncTaskBlueprintProxy.InnerSingleton;
}

// Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp @ 14cf32050

UFunction * __cdecl Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARTrackedGeometry_GetLastUpdateTimestamp_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat @ 14cf32090

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_GetDesiredVideoFormat_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform @ 14cf320d0

UFunction * __cdecl Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARTrackedGeometry_GetLocalToTrackingTransform_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd @ 14cf321c0

UFunction * __cdecl Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveAdd_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature @ 14cf32200

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_GetEnabledSessionTrackingFeature_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform @ 14cf32240

UFunction * __cdecl Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARTrackedGeometry_GetLocalToWorldTransform_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14cf32280

void * __cdecl Z_Construct_UScriptStruct_FARVideoFormat_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FARVideoFormat,&UE::CoreUObject::Private::Construct<FARVideoFormat>,&UE::CoreUObject::Private::ConstructForTests<FARVideoFormat>,&UE::CoreUObject::Private::Destruct<FARVideoFormat>,&UE::CoreUObject::Private::Copy<FARVideoFormat>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate @ 14cf322c0

UFunction * __cdecl Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAREnvironmentProbeComponent_ReceiveUpdate_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType @ 14cf32300

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_GetEnvironmentCaptureProbeType_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARTrackedGeometry_GetName @ 14cf32340

UFunction * __cdecl Z_Construct_UFunction_UARTrackedGeometry_GetName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UARTrackedGeometry_GetName_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload @ 14cf32380

UFunction * __cdecl Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAREnvironmentProbeComponent_ServerUpdatePayload_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection @ 14cf323c0

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingDirection_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification @ 14cf32400

UFunction * __cdecl Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARTrackedGeometry_GetObjectClassification_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate @ 14cf325c0

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_GetFaceTrackingUpdate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState @ 14cf32600

UFunction * __cdecl Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARTrackedGeometry_GetTrackingState_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14cf32640

void * __cdecl Z_Construct_UScriptStruct_FARSkeletonDefinition_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FARSkeletonDefinition,&UE::CoreUObject::Private::Construct<FARSkeletonDefinition>,&UE::CoreUObject::Private::ConstructForTests<FARSkeletonDefinition>,&UE::CoreUObject::Private::Destruct<FARSkeletonDefinition>,&UE::CoreUObject::Private::Copy<FARSkeletonDefinition>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh @ 14cf32770

UFunction * __cdecl Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARTrackedGeometry_GetUnderlyingMesh_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode @ 14cf327b0

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_GetFrameSyncMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cf327f0

void __cdecl
Z_Construct_UFunction_UARTrackedGeometry_HasSpatialMeshUsageFlag_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 1) = 1;
  return;
}

// Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode @ 14cf32800

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_GetLightEstimationMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARTrackedGeometry_HasSpatialMeshUsageFlag @ 14cf32840

UFunction * __cdecl Z_Construct_UFunction_UARTrackedGeometry_HasSpatialMeshUsageFlag(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARTrackedGeometry_HasSpatialMeshUsageFlag_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewStructOps @ 14cf32880

void * __cdecl Z_Construct_UScriptStruct_FARPose2D_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FARPose2D,&UE::CoreUObject::Private::Construct<FARPose2D>,&UE::CoreUObject::Private::ConstructForTests<FARPose2D>,&UE::CoreUObject::Private::Destruct<FARPose2D>,&UE::CoreUObject::Private::Copy<FARPose2D>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 14cf328c0

void __cdecl
Z_Construct_UFunction_UARTrackedGeometry_IsTracked_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UARObjectComponent_ReceiveAdd @ 14cf328d0

UFunction * __cdecl Z_Construct_UFunction_UARObjectComponent_ReceiveAdd(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARObjectComponent_ReceiveAdd_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked @ 14cf32910

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARTrackedGeometry_IsTracked @ 14cf32950

UFunction * __cdecl Z_Construct_UFunction_UARTrackedGeometry_IsTracked(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARTrackedGeometry_IsTracked_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate @ 14cf329c0

UFunction * __cdecl Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARObjectComponent_ReceiveUpdate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode @ 14cf32a10

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_GetPlaneDetectionMode_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload @ 14cf32bb0

UFunction * __cdecl Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARObjectComponent_ServerUpdatePayload_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARSessionConfig_GetSceneReconstructionMethod @ 14cf32bf0

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_GetSceneReconstructionMethod(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_GetSceneReconstructionMethod_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14cf32cf0

void * __cdecl Z_Construct_UScriptStruct_FARPose3D_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x50;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FARPose3D,&UE::CoreUObject::Private::Construct<FARPose3D>,&UE::CoreUObject::Private::ConstructForTests<FARPose3D>,&UE::CoreUObject::Private::Destruct<FARPose3D>,&UE::CoreUObject::Private::Copy<FARPose3D>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UARSessionConfig_GetSessionType @ 14cf32d30

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_GetSessionType(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_GetSessionType_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment @ 14cf32e30

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_GetWorldAlignment_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14cf32f30

void * __cdecl Z_Construct_UScriptStruct_FARCameraIntrinsics_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FARCameraIntrinsics,&UE::CoreUObject::Private::Construct<FARCameraIntrinsics>,&UE::CoreUObject::Private::ConstructForTests<FARCameraIntrinsics>,&UE::CoreUObject::Private::Destruct<FARCameraIntrinsics>,&UE::CoreUObject::Private::Copy<FARCameraIntrinsics>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UARSessionConfig_GetWorldMapData @ 14cf32f70

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_GetWorldMapData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_GetWorldMapData_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARMeshComponent_ReceiveAdd @ 14cf33030

UFunction * __cdecl Z_Construct_UFunction_UARMeshComponent_ReceiveAdd(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARMeshComponent_ReceiveAdd_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UARComponent @ 14cf33070

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARComponent(void)

{
  if (Z_Registration_Info_UClass_UARComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARComponent.OuterSingleton,
               &Z_Construct_UClass_UARComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARComponent.OuterSingleton;
}

// Z_Construct_UClass_UAREnvironmentProbeComponent @ 14cf330b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UAREnvironmentProbeComponent(void)

{
  if (Z_Registration_Info_UClass_UAREnvironmentProbeComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UAREnvironmentProbeComponent.OuterSingleton,
               &Z_Construct_UClass_UAREnvironmentProbeComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UAREnvironmentProbeComponent.OuterSingleton;
}

// Z_Construct_UClass_UARFaceComponent @ 14cf330f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARFaceComponent(void)

{
  if (Z_Registration_Info_UClass_UARFaceComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARFaceComponent.OuterSingleton,
               &Z_Construct_UClass_UARFaceComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARFaceComponent.OuterSingleton;
}

// Z_Construct_UClass_UARGeoAnchorComponent @ 14cf33230

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARGeoAnchorComponent(void)

{
  if (Z_Registration_Info_UClass_UARGeoAnchorComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARGeoAnchorComponent.OuterSingleton,
               &Z_Construct_UClass_UARGeoAnchorComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARGeoAnchorComponent.OuterSingleton;
}

// Z_Construct_UClass_UARImageComponent @ 14cf33270

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARImageComponent(void)

{
  if (Z_Registration_Info_UClass_UARImageComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARImageComponent.OuterSingleton,
               &Z_Construct_UClass_UARImageComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARImageComponent.OuterSingleton;
}

// Z_Construct_UFunction_UARSessionConfig_RemoveCandidateImage @ 14cf332b0

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_RemoveCandidateImage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_RemoveCandidateImage_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UARMeshComponent @ 14cf332f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARMeshComponent(void)

{
  if (Z_Registration_Info_UClass_UARMeshComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARMeshComponent.OuterSingleton,
               &Z_Construct_UClass_UARMeshComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARMeshComponent.OuterSingleton;
}

// Z_Construct_UClass_UARObjectComponent @ 14cf33330

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARObjectComponent(void)

{
  if (Z_Registration_Info_UClass_UARObjectComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARObjectComponent.OuterSingleton,
               &Z_Construct_UClass_UARObjectComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARObjectComponent.OuterSingleton;
}

// Z_Construct_UClass_UARPlaneComponent @ 14cf33370

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARPlaneComponent(void)

{
  if (Z_Registration_Info_UClass_UARPlaneComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARPlaneComponent.OuterSingleton,
               &Z_Construct_UClass_UARPlaneComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARPlaneComponent.OuterSingleton;
}

// Z_Construct_UClass_UARPointComponent @ 14cf333b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARPointComponent(void)

{
  if (Z_Registration_Info_UClass_UARPointComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARPointComponent.OuterSingleton,
               &Z_Construct_UClass_UARPointComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARPointComponent.OuterSingleton;
}

// Z_Construct_UClass_UARPoseComponent @ 14cf333f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARPoseComponent(void)

{
  if (Z_Registration_Info_UClass_UARPoseComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARPoseComponent.OuterSingleton,
               &Z_Construct_UClass_UARPoseComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARPoseComponent.OuterSingleton;
}

// Z_Construct_UClass_UARQRCodeComponent @ 14cf33430

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARQRCodeComponent(void)

{
  if (Z_Registration_Info_UClass_UARQRCodeComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARQRCodeComponent.OuterSingleton,
               &Z_Construct_UClass_UARQRCodeComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARQRCodeComponent.OuterSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARAltitudeSource @ 14cf33470

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARAltitudeSource(void)

{
  if (Z_Registration_Info_UEnum_EARAltitudeSource.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARAltitudeSource.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARAltitudeSource_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARAltitudeSource.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARFaceTransformMixing @ 14cf334b0

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARFaceTransformMixing(void)

{
  if (Z_Registration_Info_UEnum_EARFaceTransformMixing.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARFaceTransformMixing.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARFaceTransformMixing_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARFaceTransformMixing.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EFaceComponentDebugMode @ 14cf334f0

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EFaceComponentDebugMode(void)

{
  if (Z_Registration_Info_UEnum_EFaceComponentDebugMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFaceComponentDebugMode.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EFaceComponentDebugMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFaceComponentDebugMode.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EGeoAnchorComponentDebugMode @ 14cf33530

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EGeoAnchorComponentDebugMode(void)

{
  if (Z_Registration_Info_UEnum_EGeoAnchorComponentDebugMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EGeoAnchorComponentDebugMode.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EGeoAnchorComponentDebugMode_Statics::EnumParams)
    ;
  }
  return Z_Registration_Info_UEnum_EGeoAnchorComponentDebugMode.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EImageComponentDebugMode @ 14cf33570

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EImageComponentDebugMode(void)

{
  if (Z_Registration_Info_UEnum_EImageComponentDebugMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EImageComponentDebugMode.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EImageComponentDebugMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EImageComponentDebugMode.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EPlaneComponentDebugMode @ 14cf335b0

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EPlaneComponentDebugMode(void)

{
  if (Z_Registration_Info_UEnum_EPlaneComponentDebugMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPlaneComponentDebugMode.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EPlaneComponentDebugMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPlaneComponentDebugMode.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EPoseComponentDebugMode @ 14cf335f0

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EPoseComponentDebugMode(void)

{
  if (Z_Registration_Info_UEnum_EPoseComponentDebugMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EPoseComponentDebugMode.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EPoseComponentDebugMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EPoseComponentDebugMode.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EQRCodeComponentDebugMode @ 14cf33630

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EQRCodeComponentDebugMode(void)

{
  if (Z_Registration_Info_UEnum_EQRCodeComponentDebugMode.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EQRCodeComponentDebugMode.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EQRCodeComponentDebugMode_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EQRCodeComponentDebugMode.InnerSingleton;
}

// Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload @ 14cf33670

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAREnvironmentProbeUpdatePayload.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FAREnvironmentProbeUpdatePayload.InnerSingleton,
               &Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FAREnvironmentProbeUpdatePayload.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FAREnvironmentProbeUpdatePayload.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FARFaceUpdatePayload @ 14cf336f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FARFaceUpdatePayload(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FARFaceUpdatePayload.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FARFaceUpdatePayload.InnerSingleton,
               &Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FARFaceUpdatePayload.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FARFaceUpdatePayload.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload @ 14cf33770

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FARGeoAnchorUpdatePayload.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FARGeoAnchorUpdatePayload.InnerSingleton,
               &Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FARGeoAnchorUpdatePayload.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FARGeoAnchorUpdatePayload.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FARImageUpdatePayload @ 14cf337f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FARImageUpdatePayload(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FARImageUpdatePayload.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FARImageUpdatePayload.InnerSingleton,
               &Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FARImageUpdatePayload.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FARImageUpdatePayload.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FARMeshUpdatePayload @ 14cf33870

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FARMeshUpdatePayload(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FARMeshUpdatePayload.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FARMeshUpdatePayload.InnerSingleton,
               &Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FARMeshUpdatePayload.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FARMeshUpdatePayload.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FARObjectUpdatePayload @ 14cf338f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FARObjectUpdatePayload(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FARObjectUpdatePayload.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FARObjectUpdatePayload.InnerSingleton,
               &Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FARObjectUpdatePayload.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FARObjectUpdatePayload.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FARPlaneUpdatePayload @ 14cf33970

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FARPlaneUpdatePayload(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FARPlaneUpdatePayload.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FARPlaneUpdatePayload.InnerSingleton,
               &Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FARPlaneUpdatePayload.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FARPlaneUpdatePayload.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FARPointUpdatePayload @ 14cf339f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FARPointUpdatePayload(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FARPointUpdatePayload.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FARPointUpdatePayload.InnerSingleton,
               &Z_Construct_UScriptStruct_FARPointUpdatePayload_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FARPointUpdatePayload.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FARPointUpdatePayload.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate @ 14cf33a70

UFunction * __cdecl Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARMeshComponent_ReceiveUpdate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UScriptStruct_FARPoseUpdatePayload @ 14cf33ab0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FARPoseUpdatePayload(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FARPoseUpdatePayload.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FARPoseUpdatePayload.InnerSingleton,
               &Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FARPoseUpdatePayload.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FARPoseUpdatePayload.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FARQRCodeUpdatePayload @ 14cf33b30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FARQRCodeUpdatePayload(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FARQRCodeUpdatePayload.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FARQRCodeUpdatePayload.InnerSingleton,
               &Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FARQRCodeUpdatePayload.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FARQRCodeUpdatePayload.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FARSessionPayload @ 14cf33bb0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FARSessionPayload(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FARSessionPayload.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FARSessionPayload.InnerSingleton,
               &Z_Construct_UScriptStruct_FARSessionPayload_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FARSessionPayload.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FARSessionPayload.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UFunction_UARSessionConfig_RemoveCandidateImageAtIndex @ 14cf33c30

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_RemoveCandidateImageAtIndex(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_RemoveCandidateImageAtIndex_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// EARSessionConfigFlags_StaticEnum @ 14cf33d30

UEnum * __cdecl EARSessionConfigFlags_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARSessionConfigFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARSessionConfigFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARSessionConfigFlags,(UObject *)pUVar1,
                       L"EARSessionConfigFlags");
  }
  return Z_Registration_Info_UEnum_EARSessionConfigFlags.OuterSingleton;
}

// Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload @ 14cf33d70

UFunction * __cdecl Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARMeshComponent_ServerUpdatePayload_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList @ 14cf33db0

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_SetCandidateObjectList_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace @ 14cf33df0

UFunction * __cdecl Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14cf33e30

void * __cdecl Z_Construct_UScriptStruct_FARSessionPayload_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FARSessionPayload,&UE::CoreUObject::Private::Construct<FARSessionPayload>,&UE::CoreUObject::Private::ConstructForTests<FARSessionPayload>,&UE::CoreUObject::Private::Destruct<FARSessionPayload>,&UE::CoreUObject::Private::Copy<FARSessionPayload>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat @ 14cf33f30

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_SetDesiredVideoFormat_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARPlaneGeometry_GetCenter @ 14cf33f70

UFunction * __cdecl Z_Construct_UFunction_UARPlaneGeometry_GetCenter(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UARPlaneGeometry_GetCenter_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bNewValue_SetBit @ 14cf340c0

void __cdecl
Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::NewProp_bNewValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UARPlaneGeometry_GetExtent @ 14cf340d0

UFunction * __cdecl Z_Construct_UFunction_UARPlaneGeometry_GetExtent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UARPlaneGeometry_GetExtent_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14cf341c0

void * __thiscall
FAugmentedRealityModule::_scalar_deleting_destructor_(FAugmentedRealityModule *this,uint param_1)

{
  *this = (FAugmentedRealityModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus @ 14cf34200

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_SetEnableAutoFocus_Statics::FuncParams);
  }
  return ReturnFunction;
}

// EGeoAnchorComponentDebugMode_StaticEnum @ 14cf34240

UEnum * __cdecl EGeoAnchorComponentDebugMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeoAnchorComponentDebugMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EGeoAnchorComponentDebugMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EGeoAnchorComponentDebugMode,
                       (UObject *)pUVar1,L"EGeoAnchorComponentDebugMode");
  }
  return Z_Registration_Info_UEnum_EGeoAnchorComponentDebugMode.OuterSingleton;
}

// NewStructOps @ 14cf34280

void * __cdecl Z_Construct_UScriptStruct_FARPlaneUpdatePayload_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FARPlaneUpdatePayload,&UE::CoreUObject::Private::Construct<FARPlaneUpdatePayload>,&UE::CoreUObject::Private::ConstructForTests<FARPlaneUpdatePayload>,&UE::CoreUObject::Private::Destruct<FARPlaneUpdatePayload>,&UE::CoreUObject::Private::Copy<FARPlaneUpdatePayload>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UARPlaneGeometry_GetOrientation @ 14cf342c0

UFunction * __cdecl Z_Construct_UFunction_UARPlaneGeometry_GetOrientation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARPlaneGeometry_GetOrientation_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection @ 14cf34300

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingDirection_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy @ 14cf34400

UFunction * __cdecl Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARPlaneGeometry_GetSubsumedBy_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd @ 14cf34440

UFunction * __cdecl Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveAdd_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate @ 14cf34480

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_SetFaceTrackingUpdate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bNewValue_SetBit @ 14cf34580

void __cdecl
Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::NewProp_bNewValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate @ 14cf34590

UFunction * __cdecl Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARGeoAnchorComponent_ReceiveUpdate_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking @ 14cf345d0

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_SetResetCameraTracking_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14cf34610

void * __cdecl Z_Construct_UScriptStruct_FARPointUpdatePayload_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FARPointUpdatePayload,&UE::CoreUObject::Private::Construct<FARPointUpdatePayload>,&UE::CoreUObject::Private::ConstructForTests<FARPointUpdatePayload>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bNewValue_SetBit @ 14cf34670

void __cdecl
Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::NewProp_bNewValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload @ 14cf34750

UFunction * __cdecl Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARGeoAnchorComponent_ServerUpdatePayload_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects @ 14cf34790

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_SetResetTrackedObjects_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode @ 14cf34810

UFunction * __cdecl Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARGeoAnchorComponent_SetGeoAnchorComponentDebugMode_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARSessionConfig_SetSceneReconstructionMethod @ 14cf34850

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_SetSceneReconstructionMethod(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_SetSceneReconstructionMethod_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14cf34890

void * __cdecl Z_Construct_UScriptStruct_FARFaceUpdatePayload_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FARFaceUpdatePayload,&UE::CoreUObject::Private::Construct<FARFaceUpdatePayload>,&UE::CoreUObject::Private::ConstructForTests<FARFaceUpdatePayload>,&UE::CoreUObject::Private::Destruct<FARFaceUpdatePayload>,&UE::CoreUObject::Private::Copy<FARFaceUpdatePayload>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable @ 14cf34990

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_SetSessionTrackingFeatureToEnable_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARTrackedImage_GetDetectedImage @ 14cf34a90

UFunction * __cdecl Z_Construct_UFunction_UARTrackedImage_GetDetectedImage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARTrackedImage_GetDetectedImage_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARSessionConfig_SetWorldMapData @ 14cf34ad0

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_SetWorldMapData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_SetWorldMapData_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14cf34b10

void * __cdecl Z_Construct_UScriptStruct_FARImageUpdatePayload_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FARImageUpdatePayload,&UE::CoreUObject::Private::Construct<FARImageUpdatePayload>,&UE::CoreUObject::Private::ConstructForTests<FARImageUpdatePayload>,&UE::CoreUObject::Private::Destruct<FARImageUpdatePayload>,&UE::CoreUObject::Private::Copy<FARImageUpdatePayload>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 14cf34b50

void __cdecl
Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UARTrackedImage_GetEstimateSize @ 14cf34b60

UFunction * __cdecl Z_Construct_UFunction_UARTrackedImage_GetEstimateSize(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARTrackedImage_GetEstimateSize_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus @ 14cf34c60

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_ShouldEnableAutoFocus_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cf34ca0

void __cdecl
Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking @ 14cf34cb0

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_ShouldEnableCameraTracking_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cf34cf0

void __cdecl
Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewStructOps @ 14cf34d00

void * __cdecl Z_Construct_UScriptStruct_FARQRCodeUpdatePayload_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xb0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FARQRCodeUpdatePayload,&UE::CoreUObject::Private::Construct<FARQRCodeUpdatePayload>,&UE::CoreUObject::Private::ConstructForTests<FARQRCodeUpdatePayload>,&UE::CoreUObject::Private::Destruct<FARQRCodeUpdatePayload>,&UE::CoreUObject::Private::Copy<FARQRCodeUpdatePayload>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay @ 14cf34e00

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_ShouldRenderCameraOverlay_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cf34e40

void __cdecl
Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking @ 14cf34e50

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_ShouldResetCameraTracking_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cf34ed0

void __cdecl
Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// EARFaceTrackingDirection_StaticEnum @ 14cf34f00

UEnum * __cdecl EARFaceTrackingDirection_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARFaceTrackingDirection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARFaceTrackingDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection,(UObject *)pUVar1
                       ,L"EARFaceTrackingDirection");
  }
  return Z_Registration_Info_UEnum_EARFaceTrackingDirection.OuterSingleton;
}

// Z_Construct_UClass_UARSessionConfig_NoRegister @ 14cf34f40

UClass * __cdecl Z_Construct_UClass_UARSessionConfig_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARSessionConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARSessionConfig",
               &Z_Registration_Info_UClass_UARSessionConfig.InnerSingleton,
               UARSessionConfig::StaticRegisterNativesUARSessionConfig,0x110,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UARSessionConfig>,
               InternalVTableHelperCtorCaller<UARSessionConfig>,local_res8,UDataAsset::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARSessionConfig.InnerSingleton;
}

// Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects @ 14cf35000

UFunction * __cdecl Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARSessionConfig_ShouldResetTrackedObjects_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewStructOps @ 14cf35040

void * __cdecl Z_Construct_UScriptStruct_FARPoseUpdatePayload_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FARPoseUpdatePayload,&UE::CoreUObject::Private::Construct<FARPoseUpdatePayload>,&UE::CoreUObject::Private::ConstructForTests<FARPoseUpdatePayload>,&UE::CoreUObject::Private::Destruct<FARPoseUpdatePayload>,&UE::CoreUObject::Private::Copy<FARPoseUpdatePayload>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// EARFaceBlendShape_StaticEnum @ 14cf35100

UEnum * __cdecl EARFaceBlendShape_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARFaceBlendShape.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARFaceBlendShape.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape,(UObject *)pUVar1,
                       L"EARFaceBlendShape");
  }
  return Z_Registration_Info_UEnum_EARFaceBlendShape.OuterSingleton;
}

// NewProp_bGenerateMeshDataFromTrackedGeometry_SetBit @ 14cf35140

void __cdecl
Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateMeshDataFromTrackedGeometry_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bGenerateCollisionForMeshData_SetBit @ 14cf35150

void __cdecl
Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateCollisionForMeshData_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  return;
}

// NewProp_bGenerateNavMeshForMeshData_SetBit @ 14cf35160

void __cdecl
Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bGenerateNavMeshForMeshData_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x32) = 1;
  return;
}

// NewProp_bUseMeshDataForOcclusion_SetBit @ 14cf35170

void __cdecl
Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseMeshDataForOcclusion_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x33) = 1;
  return;
}

// NewProp_bRenderMeshDataInWireframe_SetBit @ 14cf35180

void __cdecl
Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bRenderMeshDataInWireframe_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  return;
}

// NewProp_bTrackSceneObjects_SetBit @ 14cf35190

void __cdecl
Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bTrackSceneObjects_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x35) = 1;
  return;
}

// NewProp_bUsePersonSegmentationForOcclusion_SetBit @ 14cf351a0

void __cdecl
Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUsePersonSegmentationForOcclusion_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x36) = 1;
  return;
}

// NewProp_bUseSceneDepthForOcclusion_SetBit @ 14cf351b0

void __cdecl
Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseSceneDepthForOcclusion_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x37) = 1;
  return;
}

// NewProp_bUseAutomaticImageScaleEstimation_SetBit @ 14cf351c0

void __cdecl
Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseAutomaticImageScaleEstimation_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x38) = 1;
  return;
}

// NewProp_bUseStandardOnboardingUX_SetBit @ 14cf351d0

void __cdecl
Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseStandardOnboardingUX_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x39) = 1;
  return;
}

// NewProp_bHorizontalPlaneDetection_SetBit @ 14cf351e0

void __cdecl
Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bHorizontalPlaneDetection_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3d) = 1;
  return;
}

// NewProp_bVerticalPlaneDetection_SetBit @ 14cf351f0

void __cdecl
Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bVerticalPlaneDetection_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3e) = 1;
  return;
}

// NewProp_bEnableAutoFocus_SetBit @ 14cf35200

void __cdecl
Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutoFocus_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3f) = 1;
  return;
}

// NewProp_bEnableAutomaticCameraOverlay_SetBit @ 14cf35210

void __cdecl
Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraOverlay_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x42) = 1;
  return;
}

// NewProp_bEnableAutomaticCameraTracking_SetBit @ 14cf35220

void __cdecl
Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bEnableAutomaticCameraTracking_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x43) = 1;
  return;
}

// NewProp_bResetCameraTracking_SetBit @ 14cf35230

void __cdecl
Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetCameraTracking_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x44) = 1;
  return;
}

// NewProp_bResetTrackedObjects_SetBit @ 14cf35240

void __cdecl
Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bResetTrackedObjects_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x45) = 1;
  return;
}

// NewStructOps @ 14cf35250

void * __cdecl
Z_Construct_UScriptStruct_FAREnvironmentProbeUpdatePayload_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FAREnvironmentProbeUpdatePayload,&UE::CoreUObject::Private::Construct<FAREnvironmentProbeUpdatePayload>,&UE::CoreUObject::Private::ConstructForTests<FAREnvironmentProbeUpdatePayload>,&UE::CoreUObject::Private::Destruct<FAREnvironmentProbeUpdatePayload>,&UE::CoreUObject::Private::Copy<FAREnvironmentProbeUpdatePayload>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bUseOptimalVideoFormat_SetBit @ 14cf35290

void __cdecl
Z_Construct_UClass_UARSessionConfig_Statics::NewProp_bUseOptimalVideoFormat_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x8c) = 1;
  return;
}

// Z_Construct_UFunction_UARBlueprintLibrary_LoadARPinsFromLocalStore @ 14cf352a0

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_LoadARPinsFromLocalStore(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_LoadARPinsFromLocalStore_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// EAREye_StaticEnum @ 14cf352e0

UEnum * __cdecl EAREye_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAREye.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EAREye.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EAREye,(UObject *)pUVar1,L"EAREye");
  }
  return Z_Registration_Info_UEnum_EAREye.OuterSingleton;
}

// NewStructOps @ 14cf35320

void * __cdecl Z_Construct_UScriptStruct_FARObjectUpdatePayload_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FARObjectUpdatePayload,&UE::CoreUObject::Private::Construct<FARObjectUpdatePayload>,&UE::CoreUObject::Private::ConstructForTests<FARObjectUpdatePayload>,&UE::CoreUObject::Private::Destruct<FARObjectUpdatePayload>,&UE::CoreUObject::Private::Copy<FARObjectUpdatePayload>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UARBlueprintLibrary_PauseARSession @ 14cf35360

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_PauseARSession(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_PauseARSession_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes @ 14cf353a0

UFunction * __cdecl Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARFaceGeometry_GetBlendShapes_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARBlueprintLibrary_PinComponent @ 14cf354a0

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_PinComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_PinComponent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewStructOps @ 14cf354e0

void * __cdecl Z_Construct_UScriptStruct_FARMeshUpdatePayload_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FARMeshUpdatePayload,&UE::CoreUObject::Private::Construct<FARMeshUpdatePayload>,&UE::CoreUObject::Private::ConstructForTests<FARMeshUpdatePayload>,&UE::CoreUObject::Private::Destruct<FARMeshUpdatePayload>,&UE::CoreUObject::Private::Copy<FARMeshUpdatePayload>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_ReturnValue_SetBit @ 14cf35520

void __cdecl
Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToARPin_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToARPin @ 14cf35530

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToARPin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToARPin_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue @ 14cf35690

UFunction * __cdecl Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARFaceGeometry_GetBlendShapeValue_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult @ 14cf357f0

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_PinComponentToTraceResult_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AARSharedWorldGameMode @ 14cf35830

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_AARSharedWorldGameMode(void)

{
  if (Z_Registration_Info_UClass_AARSharedWorldGameMode.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_AARSharedWorldGameMode.OuterSingleton,
               &Z_Construct_UClass_AARSharedWorldGameMode_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_AARSharedWorldGameMode.OuterSingleton;
}

// NewStructOps @ 14cf35870

void * __cdecl Z_Construct_UScriptStruct_FARGeoAnchorUpdatePayload_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FARGeoAnchorUpdatePayload,&UE::CoreUObject::Private::Construct<FARGeoAnchorUpdatePayload>,&UE::CoreUObject::Private::ConstructForTests<FARGeoAnchorUpdatePayload>,&UE::CoreUObject::Private::Destruct<FARGeoAnchorUpdatePayload>,&UE::CoreUObject::Private::Copy<FARGeoAnchorUpdatePayload>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 14cf358b0

void * __cdecl Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 8;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FARSharedWorldReplicationState,&UE::CoreUObject::Private::Construct<FARSharedWorldReplicationState>,&UE::CoreUObject::Private::ConstructForTests<FARSharedWorldReplicationState>,&UE::CoreUObject::Private::Destruct<FARSharedWorldReplicationState>,&UE::CoreUObject::Private::Copy<FARSharedWorldReplicationState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// Z_Construct_UFunction_UARBlueprintLibrary_RemoveAllARPinsFromLocalStore @ 14cf358f0

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_RemoveAllARPinsFromLocalStore(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_RemoveAllARPinsFromLocalStore_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform @ 14cf35930

UFunction * __cdecl Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARFaceGeometry_GetLocalSpaceEyeTransform_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UARBlueprintLibrary @ 14cf35970

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARBlueprintLibrary(void)

{
  if (Z_Registration_Info_UClass_UARBlueprintLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARBlueprintLibrary.OuterSingleton,
               &Z_Construct_UClass_UARBlueprintLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARBlueprintLibrary.OuterSingleton;
}

// Z_Construct_UClass_UARLightEstimate_NoRegister @ 14cf359b0

UClass * __cdecl Z_Construct_UClass_UARLightEstimate_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARLightEstimate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARLightEstimate",
               &Z_Registration_Info_UClass_UARLightEstimate.InnerSingleton,
               UARLightEstimate::StaticRegisterNativesUARLightEstimate,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UARLightEstimate>,
               InternalVTableHelperCtorCaller<UARLightEstimate>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARLightEstimate.InnerSingleton;
}

// Z_Construct_UClass_UARTraceResultLibrary @ 14cf35a60

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARTraceResultLibrary(void)

{
  if (Z_Registration_Info_UClass_UARTraceResultLibrary.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARTraceResultLibrary.OuterSingleton,
               &Z_Construct_UClass_UARTraceResultLibrary_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARTraceResultLibrary.OuterSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARCaptureType @ 14cf35aa0

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARCaptureType(void)

{
  if (Z_Registration_Info_UEnum_EARCaptureType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARCaptureType.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARCaptureType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARCaptureType.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels @ 14cf35ae0

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels(void)

{
  if (Z_Registration_Info_UEnum_EARLineTraceChannels.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARLineTraceChannels.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARLineTraceChannels.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARObjectClassification @ 14cf35b20

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARObjectClassification(void)

{
  if (Z_Registration_Info_UEnum_EARObjectClassification.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARObjectClassification.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARObjectClassification_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARObjectClassification.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARSceneReconstruction @ 14cf35b60

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARSceneReconstruction(void)

{
  if (Z_Registration_Info_UEnum_EARSceneReconstruction.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARSceneReconstruction.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARSceneReconstruction_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARSceneReconstruction.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARSessionTrackingFeature @ 14cf35ba0

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARSessionTrackingFeature(void)

{
  if (Z_Registration_Info_UEnum_EARSessionTrackingFeature.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARSessionTrackingFeature.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARSessionTrackingFeature_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARSessionTrackingFeature.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARSessionType @ 14cf35be0

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARSessionType(void)

{
  if (Z_Registration_Info_UEnum_EARSessionType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARSessionType.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARSessionType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARSessionType.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARTextureType @ 14cf35c20

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARTextureType(void)

{
  if (Z_Registration_Info_UEnum_EARTextureType.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARTextureType.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARTextureType_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARTextureType.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARTrackingQuality @ 14cf35c60

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARTrackingQuality(void)

{
  if (Z_Registration_Info_UEnum_EARTrackingQuality.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARTrackingQuality.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARTrackingQuality_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARTrackingQuality.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARTrackingQualityReason @ 14cf35ca0

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARTrackingQualityReason(void)

{
  if (Z_Registration_Info_UEnum_EARTrackingQualityReason.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARTrackingQualityReason.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARTrackingQualityReason_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARTrackingQualityReason.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARWorldMappingState @ 14cf35ce0

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARWorldMappingState(void)

{
  if (Z_Registration_Info_UEnum_EARWorldMappingState.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARWorldMappingState.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARWorldMappingState_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARWorldMappingState.InnerSingleton;
}

// Z_Construct_UScriptStruct_FARCameraIntrinsics @ 14cf35d20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FARCameraIntrinsics(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FARCameraIntrinsics.InnerSingleton == (UScriptStruct *)0x0)
  {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FARCameraIntrinsics.InnerSingleton,
               &Z_Construct_UScriptStruct_FARCameraIntrinsics_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FARCameraIntrinsics.InnerSingleton != (UScriptStruct *)0x0)
  {
    return Z_Registration_Info_UScriptStruct_FARCameraIntrinsics.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FARPose2D @ 14cf35da0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FARPose2D(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FARPose2D.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FARPose2D.InnerSingleton,
               &Z_Construct_UScriptStruct_FARPose2D_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FARPose2D.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FARPose2D.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FARSessionStatus @ 14cf35e20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FARSessionStatus(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FARSessionStatus.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FARSessionStatus.InnerSingleton,
               &Z_Construct_UScriptStruct_FARSessionStatus_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FARSessionStatus.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FARSessionStatus.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FARTraceResult @ 14cf35ea0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FARTraceResult(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FARTraceResult.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FARTraceResult.InnerSingleton,
               &Z_Construct_UScriptStruct_FARTraceResult_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FARTraceResult.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FARTraceResult.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FARVideoFormat @ 14cf35f20

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FARVideoFormat(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FARVideoFormat.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FARVideoFormat.InnerSingleton,
               &Z_Construct_UScriptStruct_FARVideoFormat_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FARVideoFormat.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FARVideoFormat.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UFunction_UARBlueprintLibrary_RemoveARPinFromLocalStore @ 14cf35fa0

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_RemoveARPinFromLocalStore(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_RemoveARPinFromLocalStore_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform @ 14cf35fe0

UFunction * __cdecl Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARFaceGeometry_GetWorldSpaceEyeTransform_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UClass_UARLifeCycleComponent @ 14cf36020

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UARLifeCycleComponent(void)

{
  if (Z_Registration_Info_UClass_UARLifeCycleComponent.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UARLifeCycleComponent.OuterSingleton,
               &Z_Construct_UClass_UARLifeCycleComponent_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UARLifeCycleComponent.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14cf36060

void __cdecl
Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// Z_Construct_UFunction_UARBlueprintLibrary_RemovePin @ 14cf36070

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_RemovePin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_RemovePin_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsTracked_SetBit @ 14cf360b0

void __cdecl Z_Construct_UClass_UARFaceGeometry_Statics::NewProp_bIsTracked_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x170) = 1;
  return;
}

// Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe @ 14cf360c0

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AARSharedWorldGameMode_GetARSharedWorldGameState @ 14cf36100

UFunction * __cdecl Z_Construct_UFunction_AARSharedWorldGameMode_GetARSharedWorldGameState(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AARSharedWorldGameMode_GetARSharedWorldGameState_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARComponent_GetMRMesh @ 14cf36140

UFunction * __cdecl Z_Construct_UFunction_UARComponent_GetMRMesh(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UARComponent_GetMRMesh_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARBlueprintLibrary_ResizeXRCamera @ 14cf36180

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_ResizeXRCamera(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_ResizeXRCamera_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARComponent_OnRep_Payload @ 14cf361c0

UFunction * __cdecl Z_Construct_UFunction_UARComponent_OnRep_Payload(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UARComponent_OnRep_Payload_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData @ 14cf36200

UFunction * __cdecl Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AARSharedWorldGameMode_SetARSharedWorldData_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14cf36240

void __cdecl
Z_Construct_UFunction_UARBlueprintLibrary_SaveARPinToLocalStore_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage @ 14cf36250

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_AddRuntimeCandidateImage_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_AARSharedWorldGameMode_SetARWorldSharingIsReady @ 14cf36290

UFunction * __cdecl Z_Construct_UFunction_AARSharedWorldGameMode_SetARWorldSharingIsReady(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AARSharedWorldGameMode_SetARWorldSharingIsReady_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARBlueprintLibrary_SaveARPinToLocalStore @ 14cf362d0

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_SaveARPinToLocalStore(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_SaveARPinToLocalStore_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARComponent_ReceiveRemove @ 14cf36310

UFunction * __cdecl Z_Construct_UFunction_UARComponent_ReceiveRemove(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UARComponent_ReceiveRemove_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// NewProp_bDeletePointsWithSameName_SetBit @ 14cf36350

void __cdecl
Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName_Statics::
NewProp_bDeletePointsWithSameName_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x70) = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14cf36360

void __cdecl
Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x71) = 1;
  return;
}

// Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData @ 14cf36370

UFunction * __cdecl Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_AARSharedWorldGameMode_SetPreviewImageData_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARLifeCycleComponent_ServerDestroyARActor @ 14cf363b0

UFunction * __cdecl Z_Construct_UFunction_UARLifeCycleComponent_ServerDestroyARActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARLifeCycleComponent_ServerDestroyARActor_Statics::FuncParams
              );
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARComponent_SetNativeID @ 14cf363f0

UFunction * __cdecl Z_Construct_UFunction_UARComponent_SetNativeID(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,&Z_Construct_UFunction_UARComponent_SetNativeID_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform @ 14cf36430

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_SetAlignmentTransform_Statics::FuncParams)
    ;
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture @ 14cf36470

UFunction * __cdecl
Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName @ 14cf364b0

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_AddTrackedPointWithName_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bIsTransformInWorldSpace_SetBit @ 14cf364f0

void __cdecl
Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Statics::
NewProp_bIsTransformInWorldSpace_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x30) = 1;
  return;
}

// NewProp_bMaintainUpDirection_SetBit @ 14cf36500

void __cdecl
Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Statics::
NewProp_bMaintainUpDirection_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  return;
}

// Z_Construct_UFunction_UARComponent_UpdateVisualization @ 14cf36510

UFunction * __cdecl Z_Construct_UFunction_UARComponent_UpdateVisualization(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARComponent_UpdateVisualization_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetExtent @ 14cf36550

UFunction * __cdecl Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetExtent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UAREnvironmentCaptureProbe_GetExtent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARLifeCycleComponent_ServerSpawnARActor @ 14cf36590

UFunction * __cdecl Z_Construct_UFunction_UARLifeCycleComponent_ServerSpawnARActor(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARLifeCycleComponent_ServerSpawnARActor_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUseDefaultReplication_SetBit @ 14cf365d0

void __cdecl
Z_Construct_UClass_UARComponent_Statics::NewProp_bUseDefaultReplication_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x2a0) = 1;
  return;
}

// Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldOriginLocationAndRotation @ 14cf365e0

UFunction * __cdecl
Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldOriginLocationAndRotation(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldOriginLocationAndRotation_Statics
                ::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARBlueprintLibrary_CalculateAlignmentTransform @ 14cf36630

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_CalculateAlignmentTransform(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_CalculateAlignmentTransform_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldScale @ 14cf36690

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldScale(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_SetARWorldScale_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOnOff_SetBit @ 14cf36700

void __cdecl
Z_Construct_UFunction_UARBlueprintLibrary_SetEnabledXRCamera_Statics::NewProp_bOnOff_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Z_Construct_UFunction_UARBlueprintLibrary_CalculateClosestIntersection @ 14cf36710

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_CalculateClosestIntersection(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_CalculateClosestIntersection_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARBlueprintLibrary_SetEnabledXRCamera @ 14cf36750

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_SetEnabledXRCamera(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_SetEnabledXRCamera_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARTrackedObject_GetDetectedObject @ 14cf36790

UFunction * __cdecl Z_Construct_UFunction_UARTrackedObject_GetDetectedObject(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARTrackedObject_GetDetectedObject_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARBlueprintLibrary_StartARSession @ 14cf367d0

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_StartARSession(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_StartARSession_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARBlueprintLibrary_StopARSession @ 14cf36810

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_StopARSession(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_StopARSession_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin @ 14cf36850

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawPin_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bOnOff_SetBit @ 14cf368b0

void __cdecl
Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture_Statics::NewProp_bOnOff_SetBit
          (void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// NewProp_ReturnValue_SetBit @ 14cf368f0

void __cdecl
Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  return;
}

// Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture @ 14cf369c0

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_ToggleARCapture_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry @ 14cf36a00

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_DebugDrawTrackedGeometry_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData @ 14cf36a40

UFunction * __cdecl Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARTrackedPose_GetTrackedPoseData_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent @ 14cf36a80

UFunction * __cdecl Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UARBlueprintLibrary_UnpinComponent_Statics::FuncParams);
  }
  return ReturnFunction;
}

// Z_Construct_UClass_AARActor_NoRegister @ 14cf36ac0

UClass * __cdecl Z_Construct_UClass_AARActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AARActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARActor",
               &Z_Registration_Info_UClass_AARActor.InnerSingleton,
               AARActor::StaticRegisterNativesAARActor,0x2c0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AARActor>,
               InternalVTableHelperCtorCaller<AARActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AARActor.InnerSingleton;
}

// EPlaneComponentDebugMode_StaticEnum @ 14cf36b80

UEnum * __cdecl EPlaneComponentDebugMode_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPlaneComponentDebugMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EPlaneComponentDebugMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EPlaneComponentDebugMode,(UObject *)pUVar1
                       ,L"EPlaneComponentDebugMode");
  }
  return Z_Registration_Info_UEnum_EPlaneComponentDebugMode.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14cf36cc0

void __cdecl
Z_Construct_UFunction_UARMeshGeometry_GetObjectClassificationAtLocation_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  return;
}

// CastChecked<AARActor,AActor> @ 14cf38d40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AARActor * __cdecl CastChecked<AARActor,AActor>(AActor *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    pFVar3 = GetTypeName<AARActor>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = AARActor::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (AARActor *)param_1;
  }
  pFVar3 = GetTypeName<AARActor>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<AActor>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<AAROriginActor,AActor> @ 14cf38e00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AAROriginActor * __cdecl CastChecked<AAROriginActor,AActor>(AActor *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    pFVar3 = GetTypeName<AAROriginActor>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = AAROriginActor::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (AAROriginActor *)param_1;
  }
  pFVar3 = GetTypeName<AAROriginActor>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<AActor>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<AAROriginActor,AActor> @ 14cf38ec0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AAROriginActor * __cdecl CastChecked<AAROriginActor,AActor>(AActor *param_1,Type param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AActor *)0x0) {
    if (param_2 != NullChecked) {
      return (AAROriginActor *)0x0;
    }
    pFVar3 = GetTypeName<AAROriginActor>(&local_18);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = AAROriginActor::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (AAROriginActor *)param_1;
  }
  pFVar3 = GetTypeName<AAROriginActor>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<AActor>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// CastChecked<AARSharedWorldGameState,AGameStateBase> @ 14cf38fa0

AARSharedWorldGameState * __cdecl
CastChecked<AARSharedWorldGameState,AGameStateBase>(AGameStateBase *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (AGameStateBase *)0x0) {
    pFVar3 = GetTypeName<AARSharedWorldGameState>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = AARSharedWorldGameState::StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (AARSharedWorldGameState *)param_1;
  }
  pFVar3 = GetTypeName<AARSharedWorldGameState>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<AGameStateBase>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// ConstructItems<TObjectPtr<UARCandidateObject>,UARCandidateObject_*,int> @ 14cf39420

void __cdecl
ConstructItems<TObjectPtr<UARCandidateObject>,UARCandidateObject_*,int>
          (void *param_1,UARCandidateObject **param_2,int param_3)

{
  UARCandidateObject *pUVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      pUVar1 = *param_2;
      *(UARCandidateObject **)(lVar2 + (longlong)param_2) = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 != (UARCandidateObject *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// DestructItems<FARPose2D,int> @ 14cf394c0

void __cdecl DestructItems<FARPose2D,int>(FARPose2D *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->JointLocations;
    do {
      pFVar1 = (((TArray<bool,TSizedDefaultAllocator<32>_> *)(pTVar2 + 1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<FName,TSizedDefaultAllocator<32>_> *)(pTVar2 + -2))->AllocatorInstance).
               Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
               ((longlong)(pTVar2 + 4) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FARTraceResult,int> @ 14cf39530

void __cdecl DestructItems<FARTraceResult,int>(FARTraceResult *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->ARSystem).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// GetFullNameForCastLogError<AGameStateBase> @ 14cf39db0

FString * __cdecl
GetFullNameForCastLogError<AGameStateBase>(FString *__return_storage_ptr__,AGameStateBase *param_1)

{
  UObjectBaseUtility::GetFullName
            ((UObjectBaseUtility *)param_1,__return_storage_ptr__,(UObject *)0x0,None);
  return __return_storage_ptr__;
}

// GetTypeName<AARActor> @ 14cf39de0

FString * __cdecl GetTypeName<AARActor>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = AARActor::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<AAROriginActor> @ 14cf39e20

FString * __cdecl GetTypeName<AAROriginActor>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = AAROriginActor::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetTypeName<AARSharedWorldGameState> @ 14cf39e60

FString * __cdecl GetTypeName<AARSharedWorldGameState>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = AARSharedWorldGameState::StaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InternalConstructor<AARActor> @ 14cf39ea0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AARActor>(FObjectInitializer *param_1)

{
  AActor *this;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this);
    this->bReplicates = '\x01';
    this->bAlwaysRelevant = '\x01';
    this->_padding_ = (longlong)&___7AARActor__6B_;
  }
  return;
}

// InternalConstructor<AAROriginActor> @ 14cf39ee0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<AAROriginActor>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  AActor *this;
  
  this = (AActor *)param_1->Obj;
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    pbVar1 = (byte *)((longlong)&(this->PrimaryActorTick)._padding_ + 2);
    *pbVar1 = *pbVar1 & 0xfd;
    this->bAllowTickBeforeBeginPlay = '\0';
    this->bReplicates = '\0';
    this->_padding_ = (longlong)&___7AAROriginActor__6B_;
    AActor::SetReplicatingMovement(this,false);
    AActor::SetCanBeDamaged(this,false);
    return;
  }
  return;
}

// InternalConstructor<AARSharedWorldGameMode> @ 14cf39f40

void __cdecl InternalConstructor<AARSharedWorldGameMode>(FObjectInitializer *param_1)

{
  AGameMode *this;
  UClass *pUVar1;
  
  this = (AGameMode *)param_1->Obj;
  if (this != (AGameMode *)0x0) {
    AGameMode::AGameMode(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0x200;
    this->_padding_ = (longlong)&___7AARSharedWorldGameMode__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    pUVar1 = AARSharedWorldGameState::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    this->_padding_ = (longlong)pUVar1;
    pUVar1 = AARSharedWorldPlayerController::StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    this->_padding_ = (longlong)pUVar1;
  }
  return;
}

// InternalConstructor<AARSharedWorldGameState> @ 14cf3a030

void __cdecl InternalConstructor<AARSharedWorldGameState>(FObjectInitializer *param_1)

{
  AGameState *this;
  
  this = (AGameState *)param_1->Obj;
  if (this != (AGameState *)0x0) {
    AGameState::AGameState(this,param_1);
    this->_padding_ = (longlong)&___7AARSharedWorldGameState__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<AARSharedWorldPlayerController> @ 14cf3a0a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl InternalConstructor<AARSharedWorldPlayerController>(FObjectInitializer *param_1)

{
  APlayerController *this;
  
  this = (APlayerController *)param_1->Obj;
  if (this != (APlayerController *)0x0) {
    APlayerController::APlayerController(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&AARSharedWorldPlayerController::_vftable__for__AActor__;
    this->_padding_ = (longlong)&AARSharedWorldPlayerController::_vftable__for__INavAgentInterface__
    ;
    this->_padding_ = (longlong)&___7AARSharedWorldPlayerController__6B_;
  }
  return;
}

// InternalConstructor<AARSkyLight> @ 14cf3a100

void __cdecl InternalConstructor<AARSkyLight>(FObjectInitializer *param_1)

{
  ASkyLight *this;
  
  this = (ASkyLight *)param_1->Obj;
  if (this != (ASkyLight *)0x0) {
    ASkyLight::ASkyLight(this,param_1);
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3e800000;
    this->_padding_ = (longlong)&___7AARSkyLight__6B_;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(byte *)((longlong)&this->_padding_ + 2) = *(byte *)((longlong)&this->_padding_ + 2) & 0xfb | 2
    ;
    (((this->LightComponent).field0_0x0.DebugPtr)->SourceType).Value = '\x01';
    ((this->LightComponent).field0_0x0.DebugPtr)->bLowerHemisphereIsBlack = false;
  }
  return;
}

// InternalConstructor<UARBaseAsyncTaskBlueprintProxy> @ 14cf3a170

void __cdecl InternalConstructor<UARBaseAsyncTaskBlueprintProxy>(FObjectInitializer *param_1)

{
  UBlueprintAsyncActionBase *this;
  
  this = (UBlueprintAsyncActionBase *)param_1->Obj;
  if (this != (UBlueprintAsyncActionBase *)0x0) {
    UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(this,param_1);
    FTickableGameObject::FTickableGameObject((FTickableGameObject *)(this + 1),NewObject);
    this->_padding_ =
         (longlong)&UARBaseAsyncTaskBlueprintProxy::_vftable__for__UBlueprintAsyncActionBase__;
    this[1]._padding_ =
         (longlong)&UARBaseAsyncTaskBlueprintProxy::_vftable__for__FTickableGameObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
  }
  return;
}

// InternalConstructor<UARBasicLightEstimate> @ 14cf3a1d0

void __cdecl InternalConstructor<UARBasicLightEstimate>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UARBasicLightEstimate__6B_;
  }
  return;
}

// InternalConstructor<UARBlueprintLibrary> @ 14cf3a200

void __cdecl InternalConstructor<UARBlueprintLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UARBlueprintLibrary__6B_;
  }
  return;
}

// InternalConstructor<UARCandidateImage> @ 14cf3a230

void __cdecl InternalConstructor<UARCandidateImage>(FObjectInitializer *param_1)

{
  UDataAsset *this;
  
  this = (UDataAsset *)param_1->Obj;
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    this->_padding_ = (longlong)&___7UARCandidateImage__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UARCandidateObject> @ 14cf3a270

void __cdecl InternalConstructor<UARCandidateObject>(FObjectInitializer *param_1)

{
  UDataAsset *this;
  
  this = (UDataAsset *)param_1->Obj;
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    this->_padding_ = (longlong)&___7UARCandidateObject__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UARComponent> @ 14cf3a2c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UARComponent>(FObjectInitializer *param_1)

{
  byte *pbVar1;
  USceneComponent *this;
  FObjectInitializer *pFVar2;
  
  this = (USceneComponent *)param_1->Obj;
  if (this == (USceneComponent *)0x0) {
    return;
  }
  pFVar2 = FObjectInitializer::Get();
  USceneComponent::USceneComponent(this,pFVar2);
  *(undefined1 *)&this[1]._padding_ = 1;
  this->_padding_ = (longlong)&UARComponent::_vftable__for__UObject__;
  this[1]._padding_ = 2;
  this->_padding_ = (longlong)&UARComponent::_vftable__for__IInterface_AssetUserData__;
  this[1]._padding_ = 2;
  this->_padding_ = (longlong)&UARComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 0;
  *(undefined2 *)&this[1]._padding_ = 1;
  UActorComponent::SetIsReplicatedByDefault((UActorComponent *)this,true);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  return;
}

// InternalConstructor<UARDependencyHandler> @ 14cf3a2e0

void __cdecl InternalConstructor<UARDependencyHandler>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UARDependencyHandler__6B_;
  }
  return;
}

// InternalConstructor<UAREnvironmentCaptureProbe> @ 14cf3a310

void __cdecl InternalConstructor<UAREnvironmentCaptureProbe>(FObjectInitializer *param_1)

{
  UARTrackedGeometry *this;
  
  this = (UARTrackedGeometry *)param_1->Obj;
  if (this != (UARTrackedGeometry *)0x0) {
    UARTrackedGeometry::UARTrackedGeometry(this);
    *(undefined ***)this = &___7UAREnvironmentCaptureProbe__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
  }
  return;
}

// InternalConstructor<UAREnvironmentCaptureProbeTexture> @ 14cf3a350

void __cdecl InternalConstructor<UAREnvironmentCaptureProbeTexture>(FObjectInitializer *param_1)

{
  UTextureCube *this;
  
  this = (UTextureCube *)param_1->Obj;
  if (this != (UTextureCube *)0x0) {
    UTextureCube::UTextureCube(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 3;
    this->_padding_ =
         (longlong)&UAREnvironmentCaptureProbeTexture::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ =
         (longlong)&UAREnvironmentCaptureProbeTexture::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UAREnvironmentCaptureProbeTexture::_vftable__for__IInterface_AsyncCompilation__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UAREnvironmentProbeComponent> @ 14cf3a3c0

void __cdecl InternalConstructor<UAREnvironmentProbeComponent>(FObjectInitializer *param_1)

{
  UARComponent *this;
  double dVar1;
  
  this = (UARComponent *)param_1->Obj;
  if (this != (UARComponent *)0x0) {
    UARComponent::UARComponent(this);
    this->_padding_ = (longlong)&UAREnvironmentProbeComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UAREnvironmentProbeComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UAREnvironmentProbeComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    dVar1 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
  }
  return;
}

// InternalConstructor<UARFaceComponent> @ 14cf3a460

void __cdecl InternalConstructor<UARFaceComponent>(FObjectInitializer *param_1)

{
  UARComponent *this;
  
  this = (UARComponent *)param_1->Obj;
  if (this != (UARComponent *)0x0) {
    UARComponent::UARComponent(this);
    *(undefined2 *)&this[1]._padding_ = 3;
    this->_padding_ = (longlong)&UARFaceComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UARFaceComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UARFaceComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 1;
  }
  return;
}

// InternalConstructor<UARFaceGeometry> @ 14cf3a530

void __cdecl InternalConstructor<UARFaceGeometry>(FObjectInitializer *param_1)

{
  UARTrackedGeometry *this;
  float fVar1;
  float fVar2;
  float fVar3;
  
  this = (UARTrackedGeometry *)param_1->Obj;
  if (this != (UARTrackedGeometry *)0x0) {
    UARTrackedGeometry::UARTrackedGeometry(this);
    *(undefined ***)this = &___7UARFaceGeometry__6B_;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined4 *)this[1].LocalToTrackingTransform.Rotation.XY.m128d_f64 = 0;
    *(undefined4 *)((longlong)this[1].LocalToTrackingTransform.Rotation.XY.m128d_f64 + 4) = 0x80;
    *(undefined4 *)(this[1].LocalToTrackingTransform.Rotation.XY.m128d_f64 + 1) = 0xffffffff;
    *(undefined4 *)((longlong)this[1].LocalToTrackingTransform.Rotation.XY.m128d_f64 + 0xc) = 0;
    this[1].LocalToTrackingTransform.Rotation.ZW.m128d_f64[1] = 0.0;
    *(undefined4 *)this[1].LocalToTrackingTransform.Translation.XY.m128d_f64 = 0;
    this[1].LocalToTrackingTransform.Translation.XY.m128d_f64[1] = 0.0;
    this[1].LocalToTrackingTransform.Translation.ZW.m128d_f64[0] = 0.0;
    this[1].LocalToTrackingTransform.Translation.ZW.m128d_f64[1] = 0.0;
    this[1].LocalToTrackingTransform.Scale3D.XY.m128d_f64[0] = 0.0;
    this[1].LocalToTrackingTransform.Scale3D.XY.m128d_f64[1] = 0.0;
    this[1].LocalToTrackingTransform.Scale3D.ZW.m128d_f64[0] = 0.0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    this[1].LocalToAlignedTrackingTransform.Rotation.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float0001.m128_f32[0];
    this[1].LocalToAlignedTrackingTransform.Rotation.XY.m128d_f64[1] = (double)fVar1;
    this[1].LocalToAlignedTrackingTransform.Rotation.ZW.m128d_f64[0] = (double)fVar2;
    this[1].LocalToAlignedTrackingTransform.Rotation.ZW.m128d_f64[1] = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    this[1].LocalToAlignedTrackingTransform.Translation.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    this[1].LocalToAlignedTrackingTransform.Translation.XY.m128d_f64[1] = (double)fVar1;
    this[1].LocalToAlignedTrackingTransform.Translation.ZW.m128d_f64[0] = (double)fVar2;
    this[1].LocalToAlignedTrackingTransform.Translation.ZW.m128d_f64[1] = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    this[1].LocalToAlignedTrackingTransform.Scale3D.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float1110.m128_f32[0];
    this[1].LocalToAlignedTrackingTransform.Scale3D.XY.m128d_f64[1] = (double)fVar1;
    this[1].LocalToAlignedTrackingTransform.Scale3D.ZW.m128d_f64[0] = (double)fVar2;
    this[1].LocalToAlignedTrackingTransform.Scale3D.ZW.m128d_f64[1] = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&this[1].TrackingState = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    this[1].NativeResource.Ptr = (IARRef *)(double)fVar1;
    this[1].UnderlyingMesh.field0_0x0 = (TObjectPtr<UMRMeshComponent>_u_0)(double)fVar2;
    *(double *)&this[1].ObjectClassification = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    this[1].ARSystem.Object =
         (FARSupportInterface *)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
    this[1].ARSystem.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)(double)fVar1;
    *(double *)&this[1].LastUpdateFrameNumber = (double)fVar2;
    this[1].LastUpdateTimestamp = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    this[1].DebugName = (FName)(double)GlobalVectorConstants::Float1110.m128_f32[0];
    this[1].AnchorName.Data.AllocatorInstance.Data = (FScriptContainerElement *)(double)fVar1;
    *(double *)&this[1].AnchorName.Data.ArrayNum = (double)fVar2;
    *(double *)&this[1].field_0x158 = (double)fVar3;
  }
  return;
}

// InternalConstructor<UARGeoAnchor> @ 14cf3a690

void __cdecl InternalConstructor<UARGeoAnchor>(FObjectInitializer *param_1)

{
  UARTrackedGeometry *this;
  
  this = (UARTrackedGeometry *)param_1->Obj;
  if (this != (UARTrackedGeometry *)0x0) {
    UARTrackedGeometry::UARTrackedGeometry(this);
    this[1].field_0x4 = 3;
    *(undefined ***)this = &___7UARGeoAnchor__6B_;
    *(undefined8 *)&this->field_0x158 = 0;
    *(undefined4 *)(this + 1) = 0;
  }
  return;
}

// InternalConstructor<UARGeoAnchorComponent> @ 14cf3a6e0

void __cdecl InternalConstructor<UARGeoAnchorComponent>(FObjectInitializer *param_1)

{
  UARComponent *this;
  double dVar1;
  
  this = (UARComponent *)param_1->Obj;
  if (this != (UARComponent *)0x0) {
    UARComponent::UARComponent(this);
    this->_padding_ = (longlong)&UARGeoAnchorComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UARGeoAnchorComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UARGeoAnchorComponent::_vftable__for__IAsyncPhysicsStateProcessor__
    ;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    dVar1 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 3;
  }
  return;
}

// InternalConstructor<UARGeoTrackingSupport> @ 14cf3a7c0

void __cdecl InternalConstructor<UARGeoTrackingSupport>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UARGeoTrackingSupport__6B_;
  }
  return;
}

// InternalConstructor<UARGetCandidateObjectAsyncTaskBlueprintProxy> @ 14cf3a7f0

void __cdecl
InternalConstructor<UARGetCandidateObjectAsyncTaskBlueprintProxy>(FObjectInitializer *param_1)

{
  UBlueprintAsyncActionBase *this;
  
  this = (UBlueprintAsyncActionBase *)param_1->Obj;
  if (this != (UBlueprintAsyncActionBase *)0x0) {
    UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(this,param_1);
    FTickableGameObject::FTickableGameObject((FTickableGameObject *)(this + 1),NewObject);
    this->_padding_ =
         (longlong)
         &UARGetCandidateObjectAsyncTaskBlueprintProxy::_vftable__for__UBlueprintAsyncActionBase__;
    this[1]._padding_ = 0;
    this[1]._padding_ =
         (longlong)
         &UARGetCandidateObjectAsyncTaskBlueprintProxy::_vftable__for__FTickableGameObject__;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
    this[1]._padding_ = 0;
    this[1].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
  }
  return;
}

// InternalConstructor<UARImageComponent> @ 14cf3a880

void __cdecl InternalConstructor<UARImageComponent>(FObjectInitializer *param_1)

{
  UARComponent *this;
  double dVar1;
  
  this = (UARComponent *)param_1->Obj;
  if (this != (UARComponent *)0x0) {
    UARComponent::UARComponent(this);
    this->_padding_ = (longlong)&UARImageComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UARImageComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UARImageComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    dVar1 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    this[1]._padding_ = 0;
    *(TVector2<double>_u_0 *)&this[1]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  }
  return;
}

// InternalConstructor<UARLifeCycleComponent> @ 14cf3a950

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl InternalConstructor<UARLifeCycleComponent>(FObjectInitializer *param_1)

{
  USceneComponent *this;
  
  this = (USceneComponent *)param_1->Obj;
  if (this != (USceneComponent *)0x0) {
    USceneComponent::USceneComponent(this,param_1);
    this->_padding_ = (longlong)&UARLifeCycleComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UARLifeCycleComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UARLifeCycleComponent::_vftable__for__IAsyncPhysicsStateProcessor__
    ;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UARLightEstimate> @ 14cf3a9d0

void __cdecl InternalConstructor<UARLightEstimate>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UARLightEstimate__6B_;
  }
  return;
}

// InternalConstructor<UARMeshComponent> @ 14cf3aa00

void __cdecl InternalConstructor<UARMeshComponent>(FObjectInitializer *param_1)

{
  UARComponent *this;
  double dVar1;
  
  this = (UARComponent *)param_1->Obj;
  if (this != (UARComponent *)0x0) {
    UARComponent::UARComponent(this);
    this->_padding_ = (longlong)&UARMeshComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UARMeshComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UARMeshComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    dVar1 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    *(undefined1 *)&this[1]._padding_ = 1;
  }
  return;
}

// InternalConstructor<UARMeshGeometry> @ 14cf3aac0

void __cdecl InternalConstructor<UARMeshGeometry>(FObjectInitializer *param_1)

{
  UARTrackedGeometry *this;
  
  this = (UARTrackedGeometry *)param_1->Obj;
  if (this != (UARTrackedGeometry *)0x0) {
    UARTrackedGeometry::UARTrackedGeometry(this);
    *(undefined ***)this = &___7UARMeshGeometry__6B_;
  }
  return;
}

// InternalConstructor<UARObjectComponent> @ 14cf3aaf0

void __cdecl InternalConstructor<UARObjectComponent>(FObjectInitializer *param_1)

{
  UARComponent *this;
  double dVar1;
  
  this = (UARComponent *)param_1->Obj;
  if (this != (UARComponent *)0x0) {
    UARComponent::UARComponent(this);
    this->_padding_ = (longlong)&UARObjectComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UARObjectComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UARObjectComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    dVar1 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
  }
  return;
}

// InternalConstructor<UARPin> @ 14cf3ab90

void __cdecl InternalConstructor<UARPin>(FObjectInitializer *param_1)

{
  UObject *this;
  float fVar1;
  float fVar2;
  float fVar3;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UARPin__6B_;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&this[1].field_0x18 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&this[1].field_0x20 = (double)fVar1;
    *(double *)(this + 2) = (double)fVar2;
    *(double *)&this[2].field_0x8 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&this[2].field_0x10 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&this[2].field_0x18 = (double)fVar1;
    *(double *)&this[2].field_0x20 = (double)fVar2;
    *(double *)(this + 3) = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&this[3].field_0x8 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&this[3].field_0x10 = (double)fVar1;
    *(double *)&this[3].field_0x18 = (double)fVar2;
    *(double *)&this[3].field_0x20 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)(this + 4) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&this[4].field_0x8 = (double)fVar1;
    *(double *)&this[4].field_0x10 = (double)fVar2;
    *(double *)&this[4].field_0x18 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&this[4].field_0x20 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)(this + 5) = (double)fVar1;
    *(double *)&this[5].field_0x8 = (double)fVar2;
    *(double *)&this[5].field_0x10 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&this[5].field_0x18 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&this[5].field_0x20 = (double)fVar1;
    *(double *)(this + 6) = (double)fVar2;
    *(double *)&this[6].field_0x8 = (double)fVar3;
    *(undefined8 *)&this[6].field_0x18 = 0;
    *(undefined8 *)&this[6].field_0x20 = 0;
    *(undefined8 *)(this + 7) = 0;
    *(undefined8 *)&this[7].field_0x8 = 0;
    *(undefined8 *)&this[7].field_0x10 = 0;
    *(undefined8 *)&this[7].field_0x18 = 0;
    *(undefined8 *)&this[7].field_0x20 = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)&this[8].field_0x8 = 0;
  }
  return;
}

// InternalConstructor<UARPlaneComponent> @ 14cf3acc0

void __cdecl InternalConstructor<UARPlaneComponent>(FObjectInitializer *param_1)

{
  UARComponent *this;
  
  this = (UARComponent *)param_1->Obj;
  if (this != (UARComponent *)0x0) {
    UARComponent::UARComponent(this);
    this->_padding_ = (longlong)&UARPlaneComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UARPlaneComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UARPlaneComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    FARPlaneUpdatePayload::FARPlaneUpdatePayload((FARPlaneUpdatePayload *)(this + 1));
    return;
  }
  return;
}

// InternalConstructor<UARPlaneGeometry> @ 14cf3ad20

void __cdecl InternalConstructor<UARPlaneGeometry>(FObjectInitializer *param_1)

{
  UARTrackedGeometry *this;
  
  this = (UARTrackedGeometry *)param_1->Obj;
  if (this != (UARTrackedGeometry *)0x0) {
    UARTrackedGeometry::UARTrackedGeometry(this);
    *(undefined ***)this = &___7UARPlaneGeometry__6B_;
    this[1].UniqueId.C = 0;
    this[1].UniqueId.D = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    this[1].LocalToTrackingTransform.Rotation.XY.m128d_f64[0] = 0.0;
  }
  return;
}

// InternalConstructor<UARPointComponent> @ 14cf3ad70

void __cdecl InternalConstructor<UARPointComponent>(FObjectInitializer *param_1)

{
  UARComponent *this;
  
  this = (UARComponent *)param_1->Obj;
  if (this != (UARComponent *)0x0) {
    UARComponent::UARComponent(this);
    this->_padding_ = (longlong)&UARPointComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UARPointComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UARPointComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
  }
  return;
}

// InternalConstructor<UARPoseComponent> @ 14cf3adc0

void __cdecl InternalConstructor<UARPoseComponent>(FObjectInitializer *param_1)

{
  UARComponent *this;
  double dVar1;
  
  this = (UARComponent *)param_1->Obj;
  if (this != (UARComponent *)0x0) {
    UARComponent::UARComponent(this);
    this->_padding_ = (longlong)&UARPoseComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UARPoseComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UARPoseComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    dVar1 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UARQRCodeComponent> @ 14cf3ae70

void __cdecl InternalConstructor<UARQRCodeComponent>(FObjectInitializer *param_1)

{
  UARComponent *this;
  double dVar1;
  
  this = (UARComponent *)param_1->Obj;
  if (this != (UARComponent *)0x0) {
    UARComponent::UARComponent(this);
    this->_padding_ = (longlong)&UARQRCodeComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UARQRCodeComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UARQRCodeComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    dVar1 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UARSaveWorldAsyncTaskBlueprintProxy> @ 14cf3af50

void __cdecl InternalConstructor<UARSaveWorldAsyncTaskBlueprintProxy>(FObjectInitializer *param_1)

{
  UBlueprintAsyncActionBase *this;
  
  this = (UBlueprintAsyncActionBase *)param_1->Obj;
  if (this != (UBlueprintAsyncActionBase *)0x0) {
    UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(this,param_1);
    FTickableGameObject::FTickableGameObject((FTickableGameObject *)(this + 1),NewObject);
    this->_padding_ =
         (longlong)&UARSaveWorldAsyncTaskBlueprintProxy::_vftable__for__UBlueprintAsyncActionBase__;
    this[1]._padding_ = 0;
    this[1]._padding_ =
         (longlong)&UARSaveWorldAsyncTaskBlueprintProxy::_vftable__for__FTickableGameObject__;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
    this[1]._padding_ = 0;
    this[1].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
  }
  return;
}

// InternalConstructor<UARSessionConfig> @ 14cf3afe0

void __cdecl InternalConstructor<UARSessionConfig>(FObjectInitializer *param_1)

{
  UDataAsset *this;
  FObjectInitializer *pFVar1;
  UClass *pUVar2;
  UMaterial *pUVar3;
  
  this = (UDataAsset *)param_1->Obj;
  if (this == (UDataAsset *)0x0) {
    return;
  }
  pFVar1 = FObjectInitializer::Get();
  UDataAsset::UDataAsset(this,pFVar1);
  *(undefined4 *)((longlong)&this[1]._padding_ + 5) = 0x1000101;
  *(undefined4 *)((longlong)&this[1]._padding_ + 1) = 0x1020000;
  this->_padding_ = (longlong)&___7UARSessionConfig__6B_;
  this[1]._padding_ = 0;
  this[1]._padding_ = 0;
  this[2]._padding_ = 0;
  this[2]._padding_ = 0;
  this[2]._padding_ = 0;
  this[2]._padding_ = 0;
  this[2]._padding_ = 0;
  *(undefined4 *)&this[2].NativeClass.Class.field0_0x0 = 0;
  this[3]._padding_ = 0;
  this[3]._padding_ = 0;
  *(undefined4 *)((longlong)&this[1]._padding_ + 5) = 0x1010101;
  *(undefined4 *)((longlong)&this[1]._padding_ + 1) = 0x1010100;
  *(undefined1 *)((longlong)&this[1]._padding_ + 5) = 1;
  *(undefined4 *)&this[1].NativeClass.Class.field0_0x0 = 1;
  *(undefined1 *)((longlong)&this[2].NativeClass.Class.field0_0x0 + 4) = 1;
  *(undefined4 *)&this[3]._padding_ = 1;
  *(undefined2 *)&this[3]._padding_ = 0;
  pUVar2 = UARPlaneComponent::StaticClass();
  this[3]._padding_ = (longlong)pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar2 = UARPointComponent::StaticClass();
  this[3].NativeClass.Class.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar2 = UARFaceComponent::StaticClass();
  this[4]._padding_ = (longlong)pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar2 = UARImageComponent::StaticClass();
  this[4]._padding_ = (longlong)pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar2 = UARTrackedQRCode::StaticClass();
  this[4]._padding_ = (longlong)pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar2 = UARPoseComponent::StaticClass();
  this[4]._padding_ = (longlong)pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar2 = UAREnvironmentProbeComponent::StaticClass();
  this[4]._padding_ = (longlong)pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar2 = UARObjectComponent::StaticClass();
  this[4].NativeClass.Class.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar2 = UARMeshComponent::StaticClass();
  this[5]._padding_ = (longlong)pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  pUVar2 = UARGeoAnchorComponent::StaticClass();
  this[5]._padding_ = (longlong)pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this[5]._padding_ = 0;
  this[5]._padding_ = 0;
  pUVar3 = UMaterial::GetDefaultMaterial(MD_Surface);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMaterial *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  this[5]._padding_ = (longlong)pUVar3;
  pUVar3 = UMaterial::GetDefaultMaterial(MD_Surface);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMaterial *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  this[5]._padding_ = (longlong)pUVar3;
  return;
}

// InternalConstructor<UARTexture> @ 14cf3b000

void __cdecl InternalConstructor<UARTexture>(FObjectInitializer *param_1)

{
  UTexture *this;
  
  this = (UTexture *)param_1->Obj;
  if (this != (UTexture *)0x0) {
    UTexture::UTexture(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UARTexture::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ = (longlong)&UARTexture::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UARTexture::_vftable__for__IInterface_AsyncCompilation__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UARTextureCameraDepth> @ 14cf3b070

void __cdecl InternalConstructor<UARTextureCameraDepth>(FObjectInitializer *param_1)

{
  UTexture *this;
  
  this = (UTexture *)param_1->Obj;
  if (this != (UTexture *)0x0) {
    UTexture::UTexture(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 2;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UARTextureCameraDepth::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ = (longlong)&UARTextureCameraDepth::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UARTextureCameraDepth::_vftable__for__IInterface_AsyncCompilation__
    ;
  }
  return;
}

// InternalConstructor<UARTextureCameraImage> @ 14cf3b0e0

void __cdecl InternalConstructor<UARTextureCameraImage>(FObjectInitializer *param_1)

{
  UTexture *this;
  
  this = (UTexture *)param_1->Obj;
  if (this != (UTexture *)0x0) {
    UTexture::UTexture(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 1;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UARTextureCameraImage::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ = (longlong)&UARTextureCameraImage::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UARTextureCameraImage::_vftable__for__IInterface_AsyncCompilation__
    ;
  }
  return;
}

// InternalConstructor<UARTraceResultDummy> @ 14cf3b150

void __cdecl InternalConstructor<UARTraceResultDummy>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UARTraceResultDummy__6B_;
  }
  return;
}

// InternalConstructor<UARTraceResultLibrary> @ 14cf3b180

void __cdecl InternalConstructor<UARTraceResultLibrary>(FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary *this;
  
  this = (UBlueprintFunctionLibrary *)param_1->Obj;
  if (this != (UBlueprintFunctionLibrary *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(this,param_1);
    *(undefined ***)this = &___7UARTraceResultLibrary__6B_;
  }
  return;
}

// InternalConstructor<UARTrackableNotifyComponent> @ 14cf3b1b0

void __cdecl InternalConstructor<UARTrackableNotifyComponent>(FObjectInitializer *param_1)

{
  if ((UARTrackableNotifyComponent *)param_1->Obj != (UARTrackableNotifyComponent *)0x0) {
    UARTrackableNotifyComponent::UARTrackableNotifyComponent
              ((UARTrackableNotifyComponent *)param_1->Obj,param_1);
    return;
  }
  return;
}

// InternalConstructor<UARTrackedGeometry> @ 14cf3b1d0

void __cdecl InternalConstructor<UARTrackedGeometry>(FObjectInitializer *param_1)

{
  UObject *this;
  float fVar1;
  float fVar2;
  float fVar3;
  
  this = param_1->Obj;
  if (this == (UObject *)0x0) {
    return;
  }
  UObject::UObject(this);
  *(undefined ***)this = &___7UARTrackedGeometry__6B_;
  *(undefined8 *)(this + 1) = 0;
  *(undefined8 *)&this[1].field_0x8 = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)&this[1].field_0x18 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)&this[1].field_0x20 = (double)fVar1;
  *(double *)(this + 2) = (double)fVar2;
  *(double *)&this[2].field_0x8 = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)&this[2].field_0x10 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)&this[2].field_0x18 = (double)fVar1;
  *(double *)&this[2].field_0x20 = (double)fVar2;
  *(double *)(this + 3) = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)&this[3].field_0x8 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)&this[3].field_0x10 = (double)fVar1;
  *(double *)&this[3].field_0x18 = (double)fVar2;
  *(double *)&this[3].field_0x20 = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  *(double *)(this + 4) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  *(double *)&this[4].field_0x8 = (double)fVar1;
  *(double *)&this[4].field_0x10 = (double)fVar2;
  *(double *)&this[4].field_0x18 = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  *(double *)&this[4].field_0x20 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  *(double *)(this + 5) = (double)fVar1;
  *(double *)&this[5].field_0x8 = (double)fVar2;
  *(double *)&this[5].field_0x10 = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  *(double *)&this[5].field_0x18 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  *(double *)&this[5].field_0x20 = (double)fVar1;
  *(double *)(this + 6) = (double)fVar2;
  *(double *)&this[6].field_0x8 = (double)fVar3;
  *(undefined8 *)&this[6].field_0x18 = 0;
  *(undefined8 *)&this[6].field_0x20 = 0;
  *(undefined8 *)&this[7].field_0x8 = 0;
  *(undefined8 *)&this[7].field_0x10 = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)&this[8].field_0x8 = 0;
  *(undefined8 *)&this[8].field_0x10 = 0;
  this[6].field_0x10 = 1;
  return;
}

// InternalConstructor<UARTrackedImage> @ 14cf3b1f0

void __cdecl InternalConstructor<UARTrackedImage>(FObjectInitializer *param_1)

{
  UARTrackedGeometry *this;
  
  this = (UARTrackedGeometry *)param_1->Obj;
  if (this != (UARTrackedGeometry *)0x0) {
    UARTrackedGeometry::UARTrackedGeometry(this);
    *(undefined ***)this = &___7UARTrackedImage__6B_;
    *(undefined8 *)&this->field_0x158 = 0;
  }
  return;
}

// InternalConstructor<UARTrackedObject> @ 14cf3b230

void __cdecl InternalConstructor<UARTrackedObject>(FObjectInitializer *param_1)

{
  UARTrackedGeometry *this;
  
  this = (UARTrackedGeometry *)param_1->Obj;
  if (this != (UARTrackedGeometry *)0x0) {
    UARTrackedGeometry::UARTrackedGeometry(this);
    *(undefined ***)this = &___7UARTrackedObject__6B_;
    *(undefined8 *)&this->field_0x158 = 0;
  }
  return;
}

// InternalConstructor<UARTrackedPoint> @ 14cf3b270

void __cdecl InternalConstructor<UARTrackedPoint>(FObjectInitializer *param_1)

{
  UARTrackedGeometry *this;
  
  this = (UARTrackedGeometry *)param_1->Obj;
  if (this != (UARTrackedGeometry *)0x0) {
    UARTrackedGeometry::UARTrackedGeometry(this);
    *(undefined ***)this = &___7UARTrackedPoint__6B_;
  }
  return;
}

// InternalConstructor<UARTrackedPose> @ 14cf3b2a0

void __cdecl InternalConstructor<UARTrackedPose>(FObjectInitializer *param_1)

{
  UARTrackedGeometry *this;
  
  this = (UARTrackedGeometry *)param_1->Obj;
  if (this != (UARTrackedGeometry *)0x0) {
    UARTrackedGeometry::UARTrackedGeometry(this);
    *(undefined ***)this = &___7UARTrackedPose__6B_;
    *(undefined4 *)&this->field_0x158 = 0;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    this[1].UniqueId.A = 0;
    this[1].UniqueId.B = 0;
    this[1].UniqueId.C = 0;
    this[1].UniqueId.D = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined1 *)this[1].LocalToTrackingTransform.Rotation.XY.m128d_f64 = 0;
  }
  return;
}

// InternalConstructor<UARTrackedQRCode> @ 14cf3b320

void __cdecl InternalConstructor<UARTrackedQRCode>(FObjectInitializer *param_1)

{
  UARTrackedGeometry *this;
  
  this = (UARTrackedGeometry *)param_1->Obj;
  if (this != (UARTrackedGeometry *)0x0) {
    UARTrackedGeometry::UARTrackedGeometry(this);
    *(undefined8 *)&this->field_0x158 = 0;
    *(undefined ***)this = &___7UARTrackedQRCode__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
  }
  return;
}

// InternalConstructor<UARTypesDummyClass> @ 14cf3b370

void __cdecl InternalConstructor<UARTypesDummyClass>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UARTypesDummyClass__6B_;
  }
  return;
}

// InternalConstructor<UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy> @ 14cf3b3a0

void __cdecl
InternalConstructor<UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy>
          (FObjectInitializer *param_1)

{
  UBlueprintAsyncActionBase *this;
  
  this = (UBlueprintAsyncActionBase *)param_1->Obj;
  if (this != (UBlueprintAsyncActionBase *)0x0) {
    UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(this,param_1);
    FTickableGameObject::FTickableGameObject((FTickableGameObject *)(this + 1),NewObject);
    this->_padding_ =
         (longlong)
         &UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::
          _vftable__for__UBlueprintAsyncActionBase__;
    this[1]._padding_ = 0;
    this[1]._padding_ =
         (longlong)
         &UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::_vftable__for__FTickableGameObject__
    ;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 1;
    this[1]._padding_ = 0;
    this[1].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    *(undefined1 *)&this[2].RegisteredWithGameInstance.WeakPtr.ObjectSerialNumber = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
  }
  return;
}

// InternalConstructor<UGetGeoLocationAsyncTaskBlueprintProxy> @ 14cf3b450

void __cdecl
InternalConstructor<UGetGeoLocationAsyncTaskBlueprintProxy>(FObjectInitializer *param_1)

{
  UBlueprintAsyncActionBase *this;
  undefined8 uVar1;
  
  this = (UBlueprintAsyncActionBase *)param_1->Obj;
  if (this != (UBlueprintAsyncActionBase *)0x0) {
    UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(this,param_1);
    FTickableGameObject::FTickableGameObject((FTickableGameObject *)(this + 1),NewObject);
    this->_padding_ =
         (longlong)
         &UGetGeoLocationAsyncTaskBlueprintProxy::_vftable__for__UBlueprintAsyncActionBase__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[1]._padding_ =
         (longlong)&UGetGeoLocationAsyncTaskBlueprintProxy::_vftable__for__FTickableGameObject__;
    *(undefined1 *)&this[1]._padding_ = 1;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[2]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[2].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)uVar1;
    this[3]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<AARActor> @ 14cf3b510

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AARActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AARActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AARActor__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AAROriginActor> @ 14cf3b5c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AAROriginActor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AActor *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AAROriginActor::GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7AAROriginActor__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AARSharedWorldGameMode> @ 14cf3b670

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AARSharedWorldGameMode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AGameMode *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AARSharedWorldGameMode::GetPrivateStaticClass();
  this = (AGameMode *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AGameMode *)0x0) {
    AGameMode::AGameMode(this,param_1);
    this->_padding_ = (longlong)&___7AARSharedWorldGameMode__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[1]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AARSharedWorldGameState> @ 14cf3b770

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AARSharedWorldGameState>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  AGameState *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AARSharedWorldGameState::GetPrivateStaticClass();
  this = (AGameState *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AGameState *)0x0) {
    AGameState::AGameState(this,param_1);
    this->_padding_ = (longlong)&___7AARSharedWorldGameState__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AARSharedWorldPlayerController> @ 14cf3b840

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<AARSharedWorldPlayerController>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  APlayerController *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AARSharedWorldPlayerController::GetPrivateStaticClass();
  this = (APlayerController *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (APlayerController *)0x0) {
    APlayerController::APlayerController(this,param_1);
    this->_padding_ = (longlong)&AARSharedWorldPlayerController::_vftable__for__AActor__;
    this->_padding_ = (longlong)&AARSharedWorldPlayerController::_vftable__for__INavAgentInterface__
    ;
    this->_padding_ = (longlong)&___7AARSharedWorldPlayerController__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<AARSkyLight> @ 14cf3b910

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<AARSkyLight>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  ASkyLight *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = AARSkyLight::GetPrivateStaticClass();
  this = (ASkyLight *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (ASkyLight *)0x0) {
    ASkyLight::ASkyLight(this,param_1);
    this->_padding_ = (longlong)&___7AARSkyLight__6B_;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARBaseAsyncTaskBlueprintProxy> @ 14cf3b9d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UARBaseAsyncTaskBlueprintProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBlueprintAsyncActionBase *this;
  UBlueprintAsyncActionBase *pUVar3;
  
  pUVar3 = (UBlueprintAsyncActionBase *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARBaseAsyncTaskBlueprintProxy::GetPrivateStaticClass();
  this = (UBlueprintAsyncActionBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBlueprintAsyncActionBase *)0x0) {
    UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(this,param_1);
    FTickableGameObject::FTickableGameObject((FTickableGameObject *)(this + 1),NewObject);
    this->_padding_ =
         (longlong)&UARBaseAsyncTaskBlueprintProxy::_vftable__for__UBlueprintAsyncActionBase__;
    this[1]._padding_ =
         (longlong)&UARBaseAsyncTaskBlueprintProxy::_vftable__for__FTickableGameObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    pUVar3 = this;
  }
  return (UObject *)pUVar3;
}

// InternalVTableHelperCtorCaller<UARBasicLightEstimate> @ 14cf3ba90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARBasicLightEstimate>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARBasicLightEstimate::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UARBasicLightEstimate__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARBlueprintLibrary> @ 14cf3bb40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARBlueprintLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARBlueprintLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UARBlueprintLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARCandidateImage> @ 14cf3bbf0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARCandidateImage>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDataAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARCandidateImage::GetPrivateStaticClass();
  this = (UDataAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    this->_padding_ = (longlong)&___7UARCandidateImage__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARCandidateObject> @ 14cf3bcb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARCandidateObject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDataAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARCandidateObject::GetPrivateStaticClass();
  this = (UDataAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    this->_padding_ = (longlong)&___7UARCandidateObject__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARComponent> @ 14cf3bd80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UARComponent *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARComponent::GetPrivateStaticClass();
  pUVar3 = (UARComponent *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UARComponent *)0x0) {
    pUVar3 = UARComponent::UARComponent(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARDependencyHandler> @ 14cf3be20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARDependencyHandler>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARDependencyHandler::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UARDependencyHandler__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAREnvironmentCaptureProbe> @ 14cf3bed0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UAREnvironmentCaptureProbe>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UARTrackedGeometry *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAREnvironmentCaptureProbe::GetPrivateStaticClass();
  this = (UARTrackedGeometry *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UARTrackedGeometry *)0x0) {
    UARTrackedGeometry::UARTrackedGeometry(this,param_1);
    *(undefined ***)this = &___7UAREnvironmentCaptureProbe__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAREnvironmentCaptureProbeTexture> @ 14cf3bf90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAREnvironmentCaptureProbeTexture>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTextureCube *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UAREnvironmentCaptureProbeTexture::GetPrivateStaticClass();
  this = (UTextureCube *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTextureCube *)0x0) {
    UTextureCube::UTextureCube(this,param_1);
    this->_padding_ =
         (longlong)&UAREnvironmentCaptureProbeTexture::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ =
         (longlong)&UAREnvironmentCaptureProbeTexture::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UAREnvironmentCaptureProbeTexture::_vftable__for__IInterface_AsyncCompilation__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UAREnvironmentProbeComponent> @ 14cf3c070

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UAREnvironmentProbeComponent>(FVTableHelper *param_1)

{
  double dVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UARComponent *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UAREnvironmentProbeComponent::GetPrivateStaticClass();
  this = (UARComponent *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UARComponent *)0x0) {
    UARComponent::UARComponent(this,param_1);
    this->_padding_ = (longlong)&UAREnvironmentProbeComponent::_vftable__for__UObject__;
    this->_padding_ =
         (longlong)&UAREnvironmentProbeComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ =
         (longlong)&UAREnvironmentProbeComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    dVar1 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARFaceComponent> @ 14cf3c190

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARFaceComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UARComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARFaceComponent::GetPrivateStaticClass();
  this = (UARComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UARComponent *)0x0) {
    UARComponent::UARComponent(this,param_1);
    *(undefined2 *)&this[1]._padding_ = 3;
    this->_padding_ = (longlong)&UARFaceComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UARFaceComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UARFaceComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined1 *)((longlong)&this[1]._padding_ + 2) = 1;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARFaceGeometry> @ 14cf3c2e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARFaceGeometry>(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  UARTrackedGeometry *this;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = UARFaceGeometry::GetPrivateStaticClass();
  this = (UARTrackedGeometry *)
         StaticAllocateObject
                   (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UARTrackedGeometry *)0x0) {
    UARTrackedGeometry::UARTrackedGeometry(this,param_1);
    *(undefined ***)this = &___7UARFaceGeometry__6B_;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined4 *)this[1].LocalToTrackingTransform.Rotation.XY.m128d_f64 = 0;
    *(undefined4 *)((longlong)this[1].LocalToTrackingTransform.Rotation.XY.m128d_f64 + 4) = 0x80;
    *(undefined4 *)(this[1].LocalToTrackingTransform.Rotation.XY.m128d_f64 + 1) = 0xffffffff;
    *(undefined4 *)((longlong)this[1].LocalToTrackingTransform.Rotation.XY.m128d_f64 + 0xc) = 0;
    this[1].LocalToTrackingTransform.Rotation.ZW.m128d_f64[1] = 0.0;
    *(undefined4 *)this[1].LocalToTrackingTransform.Translation.XY.m128d_f64 = 0;
    this[1].LocalToTrackingTransform.Translation.XY.m128d_f64[1] = 0.0;
    this[1].LocalToTrackingTransform.Translation.ZW.m128d_f64[0] = 0.0;
    this[1].LocalToTrackingTransform.Translation.ZW.m128d_f64[1] = 0.0;
    this[1].LocalToTrackingTransform.Scale3D.XY.m128d_f64[0] = 0.0;
    this[1].LocalToTrackingTransform.Scale3D.XY.m128d_f64[1] = 0.0;
    this[1].LocalToTrackingTransform.Scale3D.ZW.m128d_f64[0] = 0.0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    this[1].LocalToAlignedTrackingTransform.Rotation.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float0001.m128_f32[0];
    this[1].LocalToAlignedTrackingTransform.Rotation.XY.m128d_f64[1] = (double)fVar1;
    this[1].LocalToAlignedTrackingTransform.Rotation.ZW.m128d_f64[0] = (double)fVar2;
    this[1].LocalToAlignedTrackingTransform.Rotation.ZW.m128d_f64[1] = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    this[1].LocalToAlignedTrackingTransform.Translation.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    this[1].LocalToAlignedTrackingTransform.Translation.XY.m128d_f64[1] = (double)fVar1;
    this[1].LocalToAlignedTrackingTransform.Translation.ZW.m128d_f64[0] = (double)fVar2;
    this[1].LocalToAlignedTrackingTransform.Translation.ZW.m128d_f64[1] = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    this[1].LocalToAlignedTrackingTransform.Scale3D.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float1110.m128_f32[0];
    this[1].LocalToAlignedTrackingTransform.Scale3D.XY.m128d_f64[1] = (double)fVar1;
    this[1].LocalToAlignedTrackingTransform.Scale3D.ZW.m128d_f64[0] = (double)fVar2;
    this[1].LocalToAlignedTrackingTransform.Scale3D.ZW.m128d_f64[1] = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&this[1].TrackingState = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    this[1].NativeResource.Ptr = (IARRef *)(double)fVar1;
    this[1].UnderlyingMesh.field0_0x0 = (TObjectPtr<UMRMeshComponent>_u_0)(double)fVar2;
    *(double *)&this[1].ObjectClassification = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    this[1].ARSystem.Object =
         (FARSupportInterface *)(double)GlobalVectorConstants::FloatZero.m128_f32[0];
    this[1].ARSystem.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)(double)fVar1;
    *(double *)&this[1].LastUpdateFrameNumber = (double)fVar2;
    this[1].LastUpdateTimestamp = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    this[1].DebugName = (FName)(double)GlobalVectorConstants::Float1110.m128_f32[0];
    this[1].AnchorName.Data.AllocatorInstance.Data = (FScriptContainerElement *)(double)fVar1;
    *(double *)&this[1].AnchorName.Data.ArrayNum = (double)fVar2;
    *(double *)&this[1].field_0x158 = (double)fVar3;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARGeoAnchor> @ 14cf3c2f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARGeoAnchor>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UARTrackedGeometry *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARGeoAnchor::GetPrivateStaticClass();
  this = (UARTrackedGeometry *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UARTrackedGeometry *)0x0) {
    UARTrackedGeometry::UARTrackedGeometry(this,param_1);
    *(undefined8 *)&this->field_0x158 = 0;
    *(undefined ***)this = &___7UARGeoAnchor__6B_;
    *(undefined4 *)(this + 1) = 0;
    this[1].field_0x4 = 3;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARGeoAnchorComponent> @ 14cf3c3b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARGeoAnchorComponent>(FVTableHelper *param_1)

{
  double dVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UARComponent *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UARGeoAnchorComponent::GetPrivateStaticClass();
  this = (UARComponent *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UARComponent *)0x0) {
    UARComponent::UARComponent(this,param_1);
    this->_padding_ = (longlong)&UARGeoAnchorComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UARGeoAnchorComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UARGeoAnchorComponent::_vftable__for__IAsyncPhysicsStateProcessor__
    ;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    dVar1 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 3;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARGeoTrackingSupport> @ 14cf3c500

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARGeoTrackingSupport>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARGeoTrackingSupport::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UARGeoTrackingSupport__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARGetCandidateObjectAsyncTaskBlueprintProxy> @ 14cf3c5b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UARGetCandidateObjectAsyncTaskBlueprintProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBlueprintAsyncActionBase *this;
  UBlueprintAsyncActionBase *pUVar3;
  
  pUVar3 = (UBlueprintAsyncActionBase *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARGetCandidateObjectAsyncTaskBlueprintProxy::GetPrivateStaticClass();
  this = (UBlueprintAsyncActionBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBlueprintAsyncActionBase *)0x0) {
    UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(this,param_1);
    FTickableGameObject::FTickableGameObject((FTickableGameObject *)(this + 1),NewObject);
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)
         &UARGetCandidateObjectAsyncTaskBlueprintProxy::_vftable__for__UBlueprintAsyncActionBase__;
    this[1]._padding_ =
         (longlong)
         &UARGetCandidateObjectAsyncTaskBlueprintProxy::_vftable__for__FTickableGameObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    pUVar3 = this;
  }
  return (UObject *)pUVar3;
}

// InternalVTableHelperCtorCaller<UARImageComponent> @ 14cf3c6a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARImageComponent>(FVTableHelper *param_1)

{
  double dVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UARComponent *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UARImageComponent::GetPrivateStaticClass();
  this = (UARComponent *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UARComponent *)0x0) {
    UARComponent::UARComponent(this,param_1);
    this->_padding_ = (longlong)&UARImageComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UARImageComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UARImageComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    dVar1 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    this[1]._padding_ = 0;
    *(TVector2<double>_u_0 *)&this[1]._padding_ =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARLifeCycleComponent> @ 14cf3c7f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARLifeCycleComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  USceneComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARLifeCycleComponent::GetPrivateStaticClass();
  this = (USceneComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (USceneComponent *)0x0) {
    USceneComponent::USceneComponent(this,param_1);
    this->_padding_ = (longlong)&UARLifeCycleComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UARLifeCycleComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UARLifeCycleComponent::_vftable__for__IAsyncPhysicsStateProcessor__
    ;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARLightEstimate> @ 14cf3c8f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARLightEstimate>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARLightEstimate::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UARLightEstimate__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARMeshComponent> @ 14cf3c9a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARMeshComponent>(FVTableHelper *param_1)

{
  double dVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UARComponent *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UARMeshComponent::GetPrivateStaticClass();
  this = (UARComponent *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UARComponent *)0x0) {
    UARComponent::UARComponent(this,param_1);
    this->_padding_ = (longlong)&UARMeshComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UARMeshComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UARMeshComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    dVar1 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    *(undefined1 *)&this[1]._padding_ = 1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARMeshGeometry> @ 14cf3cae0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARMeshGeometry>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UARTrackedGeometry *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARMeshGeometry::GetPrivateStaticClass();
  this = (UARTrackedGeometry *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UARTrackedGeometry *)0x0) {
    UARTrackedGeometry::UARTrackedGeometry(this,param_1);
    *(undefined ***)this = &___7UARMeshGeometry__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARObjectComponent> @ 14cf3cb90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARObjectComponent>(FVTableHelper *param_1)

{
  double dVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UARComponent *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UARObjectComponent::GetPrivateStaticClass();
  this = (UARComponent *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UARComponent *)0x0) {
    UARComponent::UARComponent(this,param_1);
    this->_padding_ = (longlong)&UARObjectComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UARObjectComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UARObjectComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    dVar1 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARPin> @ 14cf3ccb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARPin>(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = UARPin::GetPrivateStaticClass();
  pUVar4 = StaticAllocateObject
                     (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar4 != (UObject *)0x0) {
    UObject::UObject(pUVar4,param_1);
    *(undefined ***)pUVar4 = &___7UARPin__6B_;
    *(undefined8 *)(pUVar4 + 1) = 0;
    *(undefined8 *)&pUVar4[1].field_0x8 = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&pUVar4[1].field_0x18 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&pUVar4[1].field_0x20 = (double)fVar1;
    *(double *)(pUVar4 + 2) = (double)fVar2;
    *(double *)&pUVar4[2].field_0x8 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&pUVar4[2].field_0x10 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&pUVar4[2].field_0x18 = (double)fVar1;
    *(double *)&pUVar4[2].field_0x20 = (double)fVar2;
    *(double *)(pUVar4 + 3) = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&pUVar4[3].field_0x8 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&pUVar4[3].field_0x10 = (double)fVar1;
    *(double *)&pUVar4[3].field_0x18 = (double)fVar2;
    *(double *)&pUVar4[3].field_0x20 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)(pUVar4 + 4) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&pUVar4[4].field_0x8 = (double)fVar1;
    *(double *)&pUVar4[4].field_0x10 = (double)fVar2;
    *(double *)&pUVar4[4].field_0x18 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&pUVar4[4].field_0x20 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)(pUVar4 + 5) = (double)fVar1;
    *(double *)&pUVar4[5].field_0x8 = (double)fVar2;
    *(double *)&pUVar4[5].field_0x10 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&pUVar4[5].field_0x18 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&pUVar4[5].field_0x20 = (double)fVar1;
    *(double *)(pUVar4 + 6) = (double)fVar2;
    *(double *)&pUVar4[6].field_0x8 = (double)fVar3;
    *(undefined8 *)&pUVar4[6].field_0x18 = 0;
    *(undefined8 *)&pUVar4[6].field_0x20 = 0;
    *(undefined8 *)(pUVar4 + 7) = 0;
    *(undefined8 *)&pUVar4[7].field_0x8 = 0;
    *(undefined8 *)&pUVar4[7].field_0x10 = 0;
    *(undefined8 *)&pUVar4[7].field_0x18 = 0;
    *(undefined8 *)&pUVar4[7].field_0x20 = 0;
    *(undefined8 *)(pUVar4 + 8) = 0;
    *(undefined8 *)&pUVar4[8].field_0x8 = 0;
    return pUVar4;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARPlaneComponent> @ 14cf3ccc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARPlaneComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UARComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARPlaneComponent::GetPrivateStaticClass();
  this = (UARComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UARComponent *)0x0) {
    UARComponent::UARComponent(this,param_1);
    this->_padding_ = (longlong)&UARPlaneComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UARPlaneComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UARPlaneComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    FARPlaneUpdatePayload::FARPlaneUpdatePayload((FARPlaneUpdatePayload *)(this + 1));
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARPlaneGeometry> @ 14cf3cd90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARPlaneGeometry>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UARTrackedGeometry *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARPlaneGeometry::GetPrivateStaticClass();
  this = (UARTrackedGeometry *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UARTrackedGeometry *)0x0) {
    UARTrackedGeometry::UARTrackedGeometry(this,param_1);
    *(undefined ***)this = &___7UARPlaneGeometry__6B_;
    this[1].UniqueId.C = 0;
    this[1].UniqueId.D = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    this[1].LocalToTrackingTransform.Rotation.XY.m128d_f64[0] = 0.0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARPointComponent> @ 14cf3ce50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARPointComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UARComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARPointComponent::GetPrivateStaticClass();
  this = (UARComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UARComponent *)0x0) {
    UARComponent::UARComponent(this,param_1);
    this->_padding_ = (longlong)&UARPointComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UARPointComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UARPointComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARPoseComponent> @ 14cf3cf10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARPoseComponent>(FVTableHelper *param_1)

{
  double dVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UARComponent *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UARPoseComponent::GetPrivateStaticClass();
  this = (UARComponent *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UARComponent *)0x0) {
    UARComponent::UARComponent(this,param_1);
    this->_padding_ = (longlong)&UARPoseComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UARPoseComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UARPoseComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    dVar1 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARQRCodeComponent> @ 14cf3d040

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARQRCodeComponent>(FVTableHelper *param_1)

{
  double dVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UARComponent *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UARQRCodeComponent::GetPrivateStaticClass();
  this = (UARComponent *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UARComponent *)0x0) {
    UARComponent::UARComponent(this,param_1);
    this->_padding_ = (longlong)&UARQRCodeComponent::_vftable__for__UObject__;
    this->_padding_ = (longlong)&UARQRCodeComponent::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UARQRCodeComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
    *(undefined4 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    dVar1 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]
    ;
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    dVar1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    this[1]._padding_ = (longlong)UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    this[1]._padding_ = (longlong)dVar1;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARSaveWorldAsyncTaskBlueprintProxy> @ 14cf3d190

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UARSaveWorldAsyncTaskBlueprintProxy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBlueprintAsyncActionBase *this;
  UBlueprintAsyncActionBase *pUVar3;
  
  pUVar3 = (UBlueprintAsyncActionBase *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARSaveWorldAsyncTaskBlueprintProxy::GetPrivateStaticClass();
  this = (UBlueprintAsyncActionBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBlueprintAsyncActionBase *)0x0) {
    UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(this,param_1);
    FTickableGameObject::FTickableGameObject((FTickableGameObject *)(this + 1),NewObject);
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)&UARSaveWorldAsyncTaskBlueprintProxy::_vftable__for__UBlueprintAsyncActionBase__;
    this[1]._padding_ =
         (longlong)&UARSaveWorldAsyncTaskBlueprintProxy::_vftable__for__FTickableGameObject__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    pUVar3 = this;
  }
  return (UObject *)pUVar3;
}

// InternalVTableHelperCtorCaller<UARSessionConfig> @ 14cf3d280

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARSessionConfig>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDataAsset *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARSessionConfig::GetPrivateStaticClass();
  this = (UDataAsset *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDataAsset *)0x0) {
    UDataAsset::UDataAsset(this,param_1);
    *(undefined4 *)((longlong)&this[1]._padding_ + 6) = 0x10001;
    this->_padding_ = (longlong)&___7UARSessionConfig__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2].NativeClass.Class.field0_0x0 = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3].NativeClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4]._padding_ = 0;
    this[4].NativeClass.Class.field0_0x0.DebugPtr = (UClass *)0x0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    this[5]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2].NativeClass.Class.field0_0x0 + 4) = 1;
    *(undefined4 *)&this[3]._padding_ = 1;
    *(undefined2 *)&this[3]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARTexture> @ 14cf3d3e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARTexture>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTexture *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARTexture::GetPrivateStaticClass();
  this = (UTexture *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTexture *)0x0) {
    UTexture::UTexture(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UARTexture::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ = (longlong)&UARTexture::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UARTexture::_vftable__for__IInterface_AsyncCompilation__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARTextureCameraDepth> @ 14cf3d4c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARTextureCameraDepth>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTexture *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARTextureCameraDepth::GetPrivateStaticClass();
  this = (UTexture *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTexture *)0x0) {
    UTexture::UTexture(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UARTextureCameraDepth::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ = (longlong)&UARTextureCameraDepth::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UARTextureCameraDepth::_vftable__for__IInterface_AsyncCompilation__
    ;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARTextureCameraImage> @ 14cf3d5a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARTextureCameraImage>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UTexture *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARTextureCameraImage::GetPrivateStaticClass();
  this = (UTexture *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UTexture *)0x0) {
    UTexture::UTexture(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&UARTextureCameraImage::_vftable__for__UStreamableRenderAsset__;
    this->_padding_ = (longlong)&UARTextureCameraImage::_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&UARTextureCameraImage::_vftable__for__IInterface_AsyncCompilation__
    ;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARTraceResultDummy> @ 14cf3d680

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARTraceResultDummy>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARTraceResultDummy::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UARTraceResultDummy__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARTraceResultLibrary> @ 14cf3d730

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARTraceResultLibrary>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARTraceResultLibrary::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UBlueprintFunctionLibrary::UBlueprintFunctionLibrary
              ((UBlueprintFunctionLibrary *)pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UARTraceResultLibrary__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARTrackableNotifyComponent> @ 14cf3d7e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UARTrackableNotifyComponent>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UARTrackableNotifyComponent *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARTrackableNotifyComponent::GetPrivateStaticClass();
  pUVar3 = (UARTrackableNotifyComponent *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UARTrackableNotifyComponent *)0x0) {
    pUVar3 = UARTrackableNotifyComponent::UARTrackableNotifyComponent(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARTrackedGeometry> @ 14cf3d880

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARTrackedGeometry>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UARTrackedGeometry *pUVar3;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARTrackedGeometry::GetPrivateStaticClass();
  pUVar3 = (UARTrackedGeometry *)
           StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar3 != (UARTrackedGeometry *)0x0) {
    pUVar3 = UARTrackedGeometry::UARTrackedGeometry(pUVar3,param_1);
    return (UObject *)pUVar3;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARTrackedImage> @ 14cf3d920

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARTrackedImage>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UARTrackedGeometry *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARTrackedImage::GetPrivateStaticClass();
  this = (UARTrackedGeometry *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UARTrackedGeometry *)0x0) {
    UARTrackedGeometry::UARTrackedGeometry(this,param_1);
    *(undefined ***)this = &___7UARTrackedImage__6B_;
    *(undefined8 *)&this->field_0x158 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARTrackedObject> @ 14cf3d9e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARTrackedObject>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UARTrackedGeometry *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARTrackedObject::GetPrivateStaticClass();
  this = (UARTrackedGeometry *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UARTrackedGeometry *)0x0) {
    UARTrackedGeometry::UARTrackedGeometry(this,param_1);
    *(undefined ***)this = &___7UARTrackedObject__6B_;
    *(undefined8 *)&this->field_0x158 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARTrackedPoint> @ 14cf3daa0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARTrackedPoint>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UARTrackedGeometry *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARTrackedPoint::GetPrivateStaticClass();
  this = (UARTrackedGeometry *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UARTrackedGeometry *)0x0) {
    UARTrackedGeometry::UARTrackedGeometry(this,param_1);
    *(undefined ***)this = &___7UARTrackedPoint__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARTrackedPose> @ 14cf3db50

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARTrackedPose>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UARTrackedGeometry *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARTrackedPose::GetPrivateStaticClass();
  this = (UARTrackedGeometry *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UARTrackedGeometry *)0x0) {
    UARTrackedGeometry::UARTrackedGeometry(this,param_1);
    *(undefined ***)this = &___7UARTrackedPose__6B_;
    *(undefined4 *)&this->field_0x158 = 0;
    *(undefined8 *)(this + 1) = 0;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    this[1].UniqueId.A = 0;
    this[1].UniqueId.B = 0;
    this[1].UniqueId.C = 0;
    this[1].UniqueId.D = 0;
    *(undefined8 *)&this[1].field_0x38 = 0;
    *(undefined1 *)this[1].LocalToTrackingTransform.Rotation.XY.m128d_f64 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARTrackedQRCode> @ 14cf3dc40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARTrackedQRCode>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UARTrackedGeometry *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARTrackedQRCode::GetPrivateStaticClass();
  this = (UARTrackedGeometry *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UARTrackedGeometry *)0x0) {
    UARTrackedGeometry::UARTrackedGeometry(this,param_1);
    *(undefined8 *)&this->field_0x158 = 0;
    *(undefined ***)this = &___7UARTrackedQRCode__6B_;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UARTypesDummyClass> @ 14cf3dd00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UARTypesDummyClass>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UARTypesDummyClass::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UARTypesDummyClass__6B_;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// InternalVTableHelperCtorCaller<UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy> @ 14cf3ddb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy>
          (FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UBlueprintAsyncActionBase *this;
  UBlueprintAsyncActionBase *pUVar3;
  
  pUVar3 = (UBlueprintAsyncActionBase *)0x0;
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::GetPrivateStaticClass();
  this = (UBlueprintAsyncActionBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBlueprintAsyncActionBase *)0x0) {
    UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(this,param_1);
    FTickableGameObject::FTickableGameObject((FTickableGameObject *)(this + 1),NewObject);
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)
         &UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::
          _vftable__for__UBlueprintAsyncActionBase__;
    this[1]._padding_ =
         (longlong)
         &UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::_vftable__for__FTickableGameObject__
    ;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    *(undefined1 *)&this[2].RegisteredWithGameInstance.WeakPtr.ObjectSerialNumber = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    pUVar3 = this;
  }
  return (UObject *)pUVar3;
}

// InternalVTableHelperCtorCaller<UGetGeoLocationAsyncTaskBlueprintProxy> @ 14cf3dec0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UGetGeoLocationAsyncTaskBlueprintProxy>(FVTableHelper *param_1)

{
  undefined8 uVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UBlueprintAsyncActionBase *this;
  UBlueprintAsyncActionBase *pUVar4;
  
  pUVar4 = (UBlueprintAsyncActionBase *)0x0;
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = UGetGeoLocationAsyncTaskBlueprintProxy::GetPrivateStaticClass();
  this = (UBlueprintAsyncActionBase *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UBlueprintAsyncActionBase *)0x0) {
    UBlueprintAsyncActionBase::UBlueprintAsyncActionBase(this,param_1);
    FTickableGameObject::FTickableGameObject((FTickableGameObject *)(this + 1),NewObject);
    this[1]._padding_ = 0;
    this->_padding_ =
         (longlong)
         &UGetGeoLocationAsyncTaskBlueprintProxy::_vftable__for__UBlueprintAsyncActionBase__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[1]._padding_ =
         (longlong)&UGetGeoLocationAsyncTaskBlueprintProxy::_vftable__for__FTickableGameObject__;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    this[2]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this[2].RegisteredWithGameInstance.WeakPtr = (FWeakObjectPtr)uVar1;
    this[3]._padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    pUVar4 = this;
  }
  return (UObject *)pUVar4;
}

// NewObject<UARCandidateImage> @ 14cf3e0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UARCandidateImage * __cdecl NewObject<UARCandidateImage>(UObject *param_1)

{
  UClass *pUVar1;
  UARCandidateImage *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UARCandidateImage::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UARCandidateImage *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UARComponent> @ 14cf3e180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UARComponent * __cdecl
NewObject<UARComponent>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  UARComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = UARComponent::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (UARComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UARGetCandidateObjectAsyncTaskBlueprintProxy> @ 14cf3e280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UARGetCandidateObjectAsyncTaskBlueprintProxy * __cdecl
NewObject<UARGetCandidateObjectAsyncTaskBlueprintProxy>(UObject *param_1)

{
  UClass *pUVar1;
  UARGetCandidateObjectAsyncTaskBlueprintProxy *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UARGetCandidateObjectAsyncTaskBlueprintProxy::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UARGetCandidateObjectAsyncTaskBlueprintProxy *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UARSaveWorldAsyncTaskBlueprintProxy> @ 14cf3e320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UARSaveWorldAsyncTaskBlueprintProxy * __cdecl
NewObject<UARSaveWorldAsyncTaskBlueprintProxy>(UObject *param_1)

{
  UClass *pUVar1;
  UARSaveWorldAsyncTaskBlueprintProxy *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UARSaveWorldAsyncTaskBlueprintProxy::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UARSaveWorldAsyncTaskBlueprintProxy *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UARSessionConfig> @ 14cf3e3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UARSessionConfig * __cdecl NewObject<UARSessionConfig>(UObject *param_1)

{
  UClass *pUVar1;
  UARSessionConfig *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UARSessionConfig::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UARSessionConfig *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy> @ 14cf3e460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy * __cdecl
NewObject<UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy>(UObject *param_1)

{
  UClass *pUVar1;
  UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UGetGeoLocationAsyncTaskBlueprintProxy> @ 14cf3e500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UGetGeoLocationAsyncTaskBlueprintProxy * __cdecl
NewObject<UGetGeoLocationAsyncTaskBlueprintProxy>(UObject *param_1)

{
  UClass *pUVar1;
  UGetGeoLocationAsyncTaskBlueprintProxy *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UGetGeoLocationAsyncTaskBlueprintProxy::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UGetGeoLocationAsyncTaskBlueprintProxy *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NewObject<UMRMeshComponent> @ 14cf3e5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMRMeshComponent * __cdecl NewObject<UMRMeshComponent>(UObject *param_1)

{
  UClass *pUVar1;
  UMRMeshComponent *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = Z_Construct_UClass_UMRMeshComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UMRMeshComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// NotifyDebugModeUpdated<UARFaceComponent> @ 14cf3e640

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl NotifyDebugModeUpdated<UARFaceComponent>(void)

{
  UObject *this;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  UFunction *this_00;
  ulonglong uVar7;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar9;
  ulonglong uVar8;
  TObjectIterator<UARFaceComponent> local_28;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  bVar3 = UKismetSystemLibrary::IsDedicatedServer((UObject *)0x0);
  if (bVar3) {
    return;
  }
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar6 = UARFaceComponent::StaticClass();
  uVar8 = CONCAT44(uVar9,EVar4) | 0x90020000;
  GetObjectsOfClass(pUVar6,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UARFaceComponent>::Advance(&local_28);
  do {
    while( true ) {
      uVar7 = (ulonglong)local_28.Index;
      if ((local_28.Index < 0) || (local_28.ObjectArray.ArrayNum <= local_28.Index)) {
        if (local_28.ObjectArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
        return;
      }
      uVar5 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar5 = (uint)~local_28.Index >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (uVar8 = uVar7,
         bVar3 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this = *(UObject **)(local_28.ObjectArray.AllocatorInstance.Data + uVar7 * 8);
      if (*(longlong *)&this[4].field_0x8 != 0) break;
LAB_14cf3e76b:
      TObjectIterator<UARFaceComponent>::Advance(&local_28);
    }
    this_00 = UObject::FindFunctionChecked(this,NAME_UARComponent_UpdateVisualization);
    pUVar6 = UField::GetOwnerClass((UField *)this_00);
    lVar1 = *(longlong *)this;
    if ((pUVar6->ClassFlags & CLASS_Native) != CLASS_None) {
      (**(code **)(lVar1 + 0x640))(this);
      goto LAB_14cf3e76b;
    }
    (**(code **)(lVar1 + 0x260))(this,this_00,0,lVar1,uVar8);
    TObjectIterator<UARFaceComponent>::Advance(&local_28);
  } while( true );
}

// NotifyDebugModeUpdated<UARGeoAnchorComponent> @ 14cf3e7a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl NotifyDebugModeUpdated<UARGeoAnchorComponent>(void)

{
  UObject *this;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  UFunction *this_00;
  ulonglong uVar7;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar9;
  ulonglong uVar8;
  TObjectIterator<UARGeoAnchorComponent> local_28;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  bVar3 = UKismetSystemLibrary::IsDedicatedServer((UObject *)0x0);
  if (bVar3) {
    return;
  }
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar6 = UARGeoAnchorComponent::StaticClass();
  uVar8 = CONCAT44(uVar9,EVar4) | 0x90020000;
  GetObjectsOfClass(pUVar6,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UARGeoAnchorComponent>::Advance(&local_28);
  do {
    while( true ) {
      uVar7 = (ulonglong)local_28.Index;
      if ((local_28.Index < 0) || (local_28.ObjectArray.ArrayNum <= local_28.Index)) {
        if (local_28.ObjectArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
        return;
      }
      uVar5 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar5 = (uint)~local_28.Index >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (uVar8 = uVar7,
         bVar3 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this = *(UObject **)(local_28.ObjectArray.AllocatorInstance.Data + uVar7 * 8);
      if (*(longlong *)&this[4].field_0x8 != 0) break;
LAB_14cf3e8cb:
      TObjectIterator<UARGeoAnchorComponent>::Advance(&local_28);
    }
    this_00 = UObject::FindFunctionChecked(this,NAME_UARComponent_UpdateVisualization);
    pUVar6 = UField::GetOwnerClass((UField *)this_00);
    lVar1 = *(longlong *)this;
    if ((pUVar6->ClassFlags & CLASS_Native) != CLASS_None) {
      (**(code **)(lVar1 + 0x640))(this);
      goto LAB_14cf3e8cb;
    }
    (**(code **)(lVar1 + 0x260))(this,this_00,0,lVar1,uVar8);
    TObjectIterator<UARGeoAnchorComponent>::Advance(&local_28);
  } while( true );
}

// NotifyDebugModeUpdated<UARImageComponent> @ 14cf3e900

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl NotifyDebugModeUpdated<UARImageComponent>(void)

{
  UObject *this;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  UFunction *this_00;
  ulonglong uVar7;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar9;
  ulonglong uVar8;
  TObjectIterator<UARImageComponent> local_28;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  bVar3 = UKismetSystemLibrary::IsDedicatedServer((UObject *)0x0);
  if (bVar3) {
    return;
  }
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar6 = UARImageComponent::StaticClass();
  uVar8 = CONCAT44(uVar9,EVar4) | 0x90020000;
  GetObjectsOfClass(pUVar6,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UARImageComponent>::Advance(&local_28);
  do {
    while( true ) {
      uVar7 = (ulonglong)local_28.Index;
      if ((local_28.Index < 0) || (local_28.ObjectArray.ArrayNum <= local_28.Index)) {
        if (local_28.ObjectArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
        return;
      }
      uVar5 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar5 = (uint)~local_28.Index >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (uVar8 = uVar7,
         bVar3 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this = *(UObject **)(local_28.ObjectArray.AllocatorInstance.Data + uVar7 * 8);
      if (*(longlong *)&this[4].field_0x8 != 0) break;
LAB_14cf3ea2b:
      TObjectIterator<UARImageComponent>::Advance(&local_28);
    }
    this_00 = UObject::FindFunctionChecked(this,NAME_UARComponent_UpdateVisualization);
    pUVar6 = UField::GetOwnerClass((UField *)this_00);
    lVar1 = *(longlong *)this;
    if ((pUVar6->ClassFlags & CLASS_Native) != CLASS_None) {
      (**(code **)(lVar1 + 0x640))(this);
      goto LAB_14cf3ea2b;
    }
    (**(code **)(lVar1 + 0x260))(this,this_00,0,lVar1,uVar8);
    TObjectIterator<UARImageComponent>::Advance(&local_28);
  } while( true );
}

// NotifyDebugModeUpdated<UARPlaneComponent> @ 14cf3ea60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl NotifyDebugModeUpdated<UARPlaneComponent>(void)

{
  UObject *this;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  UFunction *this_00;
  ulonglong uVar7;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar9;
  ulonglong uVar8;
  TObjectIterator<UARPlaneComponent> local_28;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  bVar3 = UKismetSystemLibrary::IsDedicatedServer((UObject *)0x0);
  if (bVar3) {
    return;
  }
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar6 = UARPlaneComponent::StaticClass();
  uVar8 = CONCAT44(uVar9,EVar4) | 0x90020000;
  GetObjectsOfClass(pUVar6,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UARPlaneComponent>::Advance(&local_28);
  do {
    while( true ) {
      uVar7 = (ulonglong)local_28.Index;
      if ((local_28.Index < 0) || (local_28.ObjectArray.ArrayNum <= local_28.Index)) {
        if (local_28.ObjectArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
        return;
      }
      uVar5 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar5 = (uint)~local_28.Index >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (uVar8 = uVar7,
         bVar3 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this = *(UObject **)(local_28.ObjectArray.AllocatorInstance.Data + uVar7 * 8);
      if (*(longlong *)&this[4].field_0x8 != 0) break;
LAB_14cf3eb8b:
      TObjectIterator<UARPlaneComponent>::Advance(&local_28);
    }
    this_00 = UObject::FindFunctionChecked(this,NAME_UARComponent_UpdateVisualization);
    pUVar6 = UField::GetOwnerClass((UField *)this_00);
    lVar1 = *(longlong *)this;
    if ((pUVar6->ClassFlags & CLASS_Native) != CLASS_None) {
      (**(code **)(lVar1 + 0x640))(this);
      goto LAB_14cf3eb8b;
    }
    (**(code **)(lVar1 + 0x260))(this,this_00,0,lVar1,uVar8);
    TObjectIterator<UARPlaneComponent>::Advance(&local_28);
  } while( true );
}

// NotifyDebugModeUpdated<UARPoseComponent> @ 14cf3ebc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl NotifyDebugModeUpdated<UARPoseComponent>(void)

{
  UObject *this;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  UFunction *this_00;
  ulonglong uVar7;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar9;
  ulonglong uVar8;
  TObjectIterator<UARPoseComponent> local_28;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  bVar3 = UKismetSystemLibrary::IsDedicatedServer((UObject *)0x0);
  if (bVar3) {
    return;
  }
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar6 = UARPoseComponent::StaticClass();
  uVar8 = CONCAT44(uVar9,EVar4) | 0x90020000;
  GetObjectsOfClass(pUVar6,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UARPoseComponent>::Advance(&local_28);
  do {
    while( true ) {
      uVar7 = (ulonglong)local_28.Index;
      if ((local_28.Index < 0) || (local_28.ObjectArray.ArrayNum <= local_28.Index)) {
        if (local_28.ObjectArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
        return;
      }
      uVar5 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar5 = (uint)~local_28.Index >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (uVar8 = uVar7,
         bVar3 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this = *(UObject **)(local_28.ObjectArray.AllocatorInstance.Data + uVar7 * 8);
      if (*(longlong *)&this[4].field_0x8 != 0) break;
LAB_14cf3eceb:
      TObjectIterator<UARPoseComponent>::Advance(&local_28);
    }
    this_00 = UObject::FindFunctionChecked(this,NAME_UARComponent_UpdateVisualization);
    pUVar6 = UField::GetOwnerClass((UField *)this_00);
    lVar1 = *(longlong *)this;
    if ((pUVar6->ClassFlags & CLASS_Native) != CLASS_None) {
      (**(code **)(lVar1 + 0x640))(this);
      goto LAB_14cf3eceb;
    }
    (**(code **)(lVar1 + 0x260))(this,this_00,0,lVar1,uVar8);
    TObjectIterator<UARPoseComponent>::Advance(&local_28);
  } while( true );
}

// NotifyDebugModeUpdated<UARQRCodeComponent> @ 14cf3ed20

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl NotifyDebugModeUpdated<UARQRCodeComponent>(void)

{
  UObject *this;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  UFunction *this_00;
  ulonglong uVar7;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar9;
  ulonglong uVar8;
  TObjectIterator<UARQRCodeComponent> local_28;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  bVar3 = UKismetSystemLibrary::IsDedicatedServer((UObject *)0x0);
  if (bVar3) {
    return;
  }
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar6 = UARQRCodeComponent::StaticClass();
  uVar8 = CONCAT44(uVar9,EVar4) | 0x90020000;
  GetObjectsOfClass(pUVar6,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UARQRCodeComponent>::Advance(&local_28);
  do {
    while( true ) {
      uVar7 = (ulonglong)local_28.Index;
      if ((local_28.Index < 0) || (local_28.ObjectArray.ArrayNum <= local_28.Index)) {
        if (local_28.ObjectArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
        return;
      }
      uVar5 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar5 = (uint)~local_28.Index >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (uVar8 = uVar7,
         bVar3 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this = *(UObject **)(local_28.ObjectArray.AllocatorInstance.Data + uVar7 * 8);
      if (*(longlong *)&this[4].field_0x8 != 0) break;
LAB_14cf3ee4b:
      TObjectIterator<UARQRCodeComponent>::Advance(&local_28);
    }
    this_00 = UObject::FindFunctionChecked(this,NAME_UARComponent_UpdateVisualization);
    pUVar6 = UField::GetOwnerClass((UField *)this_00);
    lVar1 = *(longlong *)this;
    if ((pUVar6->ClassFlags & CLASS_Native) != CLASS_None) {
      (**(code **)(lVar1 + 0x640))(this);
      goto LAB_14cf3ee4b;
    }
    (**(code **)(lVar1 + 0x260))(this,this_00,0,lVar1,uVar8);
    TObjectIterator<UARQRCodeComponent>::Advance(&local_28);
  } while( true );
}

// StaticEnum<enum_EARAltitudeSource> @ 14cf3f000

UEnum * __cdecl StaticEnum<enum_EARAltitudeSource>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARAltitudeSource.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARAltitudeSource.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARAltitudeSource,(UObject *)pUVar1,
                       L"EARAltitudeSource");
  }
  return Z_Registration_Info_UEnum_EARAltitudeSource.OuterSingleton;
}

// StaticEnum<enum_EARCandidateImageOrientation> @ 14cf3f040

UEnum * __cdecl StaticEnum<enum_EARCandidateImageOrientation>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARCandidateImageOrientation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARCandidateImageOrientation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARCandidateImageOrientation,
                       (UObject *)pUVar1,L"EARCandidateImageOrientation");
  }
  return Z_Registration_Info_UEnum_EARCandidateImageOrientation.OuterSingleton;
}

// StaticEnum<enum_EARCaptureType> @ 14cf3f080

UEnum * __cdecl StaticEnum<enum_EARCaptureType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARCaptureType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARCaptureType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARCaptureType,(UObject *)pUVar1,
                       L"EARCaptureType");
  }
  return Z_Registration_Info_UEnum_EARCaptureType.OuterSingleton;
}

// StaticEnum<enum_EARDepthAccuracy> @ 14cf3f0c0

UEnum * __cdecl StaticEnum<enum_EARDepthAccuracy>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARDepthAccuracy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARDepthAccuracy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARDepthAccuracy,(UObject *)pUVar1,
                       L"EARDepthAccuracy");
  }
  return Z_Registration_Info_UEnum_EARDepthAccuracy.OuterSingleton;
}

// StaticEnum<enum_EARDepthQuality> @ 14cf3f100

UEnum * __cdecl StaticEnum<enum_EARDepthQuality>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARDepthQuality.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARDepthQuality.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARDepthQuality,(UObject *)pUVar1,
                       L"EARDepthQuality");
  }
  return Z_Registration_Info_UEnum_EARDepthQuality.OuterSingleton;
}

// StaticEnum<enum_EAREnvironmentCaptureProbeType> @ 14cf3f140

UEnum * __cdecl StaticEnum<enum_EAREnvironmentCaptureProbeType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAREnvironmentCaptureProbeType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EAREnvironmentCaptureProbeType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EAREnvironmentCaptureProbeType,
                       (UObject *)pUVar1,L"EAREnvironmentCaptureProbeType");
  }
  return Z_Registration_Info_UEnum_EAREnvironmentCaptureProbeType.OuterSingleton;
}

// StaticEnum<enum_EAREye> @ 14cf3f180

UEnum * __cdecl StaticEnum<enum_EAREye>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EAREye.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EAREye.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EAREye,(UObject *)pUVar1,L"EAREye");
  }
  return Z_Registration_Info_UEnum_EAREye.OuterSingleton;
}

// StaticEnum<enum_EARFaceBlendShape> @ 14cf3f1c0

UEnum * __cdecl StaticEnum<enum_EARFaceBlendShape>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARFaceBlendShape.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARFaceBlendShape.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARFaceBlendShape,(UObject *)pUVar1,
                       L"EARFaceBlendShape");
  }
  return Z_Registration_Info_UEnum_EARFaceBlendShape.OuterSingleton;
}

// StaticEnum<enum_EARFaceTrackingDirection> @ 14cf3f200

UEnum * __cdecl StaticEnum<enum_EARFaceTrackingDirection>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARFaceTrackingDirection.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARFaceTrackingDirection.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARFaceTrackingDirection,(UObject *)pUVar1
                       ,L"EARFaceTrackingDirection");
  }
  return Z_Registration_Info_UEnum_EARFaceTrackingDirection.OuterSingleton;
}

// StaticEnum<enum_EARFaceTrackingUpdate> @ 14cf3f240

UEnum * __cdecl StaticEnum<enum_EARFaceTrackingUpdate>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARFaceTrackingUpdate.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARFaceTrackingUpdate.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARFaceTrackingUpdate,(UObject *)pUVar1,
                       L"EARFaceTrackingUpdate");
  }
  return Z_Registration_Info_UEnum_EARFaceTrackingUpdate.OuterSingleton;
}

// StaticEnum<enum_EARFaceTransformMixing> @ 14cf3f280

UEnum * __cdecl StaticEnum<enum_EARFaceTransformMixing>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARFaceTransformMixing.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARFaceTransformMixing.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARFaceTransformMixing,(UObject *)pUVar1,
                       L"EARFaceTransformMixing");
  }
  return Z_Registration_Info_UEnum_EARFaceTransformMixing.OuterSingleton;
}

// StaticEnum<enum_EARFrameSyncMode> @ 14cf3f2c0

UEnum * __cdecl StaticEnum<enum_EARFrameSyncMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARFrameSyncMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARFrameSyncMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARFrameSyncMode,(UObject *)pUVar1,
                       L"EARFrameSyncMode");
  }
  return Z_Registration_Info_UEnum_EARFrameSyncMode.OuterSingleton;
}

// StaticEnum<enum_EARGeoTrackingAccuracy> @ 14cf3f300

UEnum * __cdecl StaticEnum<enum_EARGeoTrackingAccuracy>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARGeoTrackingAccuracy.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARGeoTrackingAccuracy.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARGeoTrackingAccuracy,(UObject *)pUVar1,
                       L"EARGeoTrackingAccuracy");
  }
  return Z_Registration_Info_UEnum_EARGeoTrackingAccuracy.OuterSingleton;
}

// StaticEnum<enum_EARGeoTrackingState> @ 14cf3f340

UEnum * __cdecl StaticEnum<enum_EARGeoTrackingState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARGeoTrackingState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARGeoTrackingState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARGeoTrackingState,(UObject *)pUVar1,
                       L"EARGeoTrackingState");
  }
  return Z_Registration_Info_UEnum_EARGeoTrackingState.OuterSingleton;
}

// StaticEnum<enum_EARGeoTrackingStateReason> @ 14cf3f380

UEnum * __cdecl StaticEnum<enum_EARGeoTrackingStateReason>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARGeoTrackingStateReason.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARGeoTrackingStateReason.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARGeoTrackingStateReason,
                       (UObject *)pUVar1,L"EARGeoTrackingStateReason");
  }
  return Z_Registration_Info_UEnum_EARGeoTrackingStateReason.OuterSingleton;
}

// StaticEnum<enum_EARJointTransformSpace> @ 14cf3f3c0

UEnum * __cdecl StaticEnum<enum_EARJointTransformSpace>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARJointTransformSpace.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARJointTransformSpace.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARJointTransformSpace,(UObject *)pUVar1,
                       L"EARJointTransformSpace");
  }
  return Z_Registration_Info_UEnum_EARJointTransformSpace.OuterSingleton;
}

// StaticEnum<enum_EARLightEstimationMode> @ 14cf3f400

UEnum * __cdecl StaticEnum<enum_EARLightEstimationMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARLightEstimationMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARLightEstimationMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARLightEstimationMode,(UObject *)pUVar1,
                       L"EARLightEstimationMode");
  }
  return Z_Registration_Info_UEnum_EARLightEstimationMode.OuterSingleton;
}

// StaticEnum<enum_EARLineTraceChannels> @ 14cf3f440

UEnum * __cdecl StaticEnum<enum_EARLineTraceChannels>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARLineTraceChannels.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARLineTraceChannels.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARLineTraceChannels,(UObject *)pUVar1,
                       L"EARLineTraceChannels");
  }
  return Z_Registration_Info_UEnum_EARLineTraceChannels.OuterSingleton;
}

// StaticEnum<enum_EARObjectClassification> @ 14cf3f480

UEnum * __cdecl StaticEnum<enum_EARObjectClassification>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARObjectClassification.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARObjectClassification.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARObjectClassification,(UObject *)pUVar1,
                       L"EARObjectClassification");
  }
  return Z_Registration_Info_UEnum_EARObjectClassification.OuterSingleton;
}

// StaticEnum<enum_EARPlaneDetectionMode> @ 14cf3f4c0

UEnum * __cdecl StaticEnum<enum_EARPlaneDetectionMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARPlaneDetectionMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARPlaneDetectionMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARPlaneDetectionMode,(UObject *)pUVar1,
                       L"EARPlaneDetectionMode");
  }
  return Z_Registration_Info_UEnum_EARPlaneDetectionMode.OuterSingleton;
}

// StaticEnum<enum_EARPlaneOrientation> @ 14cf3f500

UEnum * __cdecl StaticEnum<enum_EARPlaneOrientation>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARPlaneOrientation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARPlaneOrientation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARPlaneOrientation,(UObject *)pUVar1,
                       L"EARPlaneOrientation");
  }
  return Z_Registration_Info_UEnum_EARPlaneOrientation.OuterSingleton;
}

// StaticEnum<enum_EARSceneReconstruction> @ 14cf3f540

UEnum * __cdecl StaticEnum<enum_EARSceneReconstruction>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARSceneReconstruction.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARSceneReconstruction.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARSceneReconstruction,(UObject *)pUVar1,
                       L"EARSceneReconstruction");
  }
  return Z_Registration_Info_UEnum_EARSceneReconstruction.OuterSingleton;
}

// StaticEnum<enum_EARServiceAvailability> @ 14cf3f580

UEnum * __cdecl StaticEnum<enum_EARServiceAvailability>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARServiceAvailability.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARServiceAvailability.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARServiceAvailability,(UObject *)pUVar1,
                       L"EARServiceAvailability");
  }
  return Z_Registration_Info_UEnum_EARServiceAvailability.OuterSingleton;
}

// StaticEnum<enum_EARServiceInstallRequestResult> @ 14cf3f5c0

UEnum * __cdecl StaticEnum<enum_EARServiceInstallRequestResult>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARServiceInstallRequestResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARServiceInstallRequestResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARServiceInstallRequestResult,
                       (UObject *)pUVar1,L"EARServiceInstallRequestResult");
  }
  return Z_Registration_Info_UEnum_EARServiceInstallRequestResult.OuterSingleton;
}

// StaticEnum<enum_EARServicePermissionRequestResult> @ 14cf3f600

UEnum * __cdecl StaticEnum<enum_EARServicePermissionRequestResult>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARServicePermissionRequestResult.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARServicePermissionRequestResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARServicePermissionRequestResult,
                       (UObject *)pUVar1,L"EARServicePermissionRequestResult");
  }
  return Z_Registration_Info_UEnum_EARServicePermissionRequestResult.OuterSingleton;
}

// StaticEnum<enum_EARSessionConfigFlags> @ 14cf3f640

UEnum * __cdecl StaticEnum<enum_EARSessionConfigFlags>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARSessionConfigFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARSessionConfigFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARSessionConfigFlags,(UObject *)pUVar1,
                       L"EARSessionConfigFlags");
  }
  return Z_Registration_Info_UEnum_EARSessionConfigFlags.OuterSingleton;
}

// StaticEnum<enum_EARSessionStatus> @ 14cf3f680

UEnum * __cdecl StaticEnum<enum_EARSessionStatus>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARSessionStatus.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARSessionStatus.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARSessionStatus,(UObject *)pUVar1,
                       L"EARSessionStatus");
  }
  return Z_Registration_Info_UEnum_EARSessionStatus.OuterSingleton;
}

// StaticEnum<enum_EARSessionTrackingFeature> @ 14cf3f6c0

UEnum * __cdecl StaticEnum<enum_EARSessionTrackingFeature>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARSessionTrackingFeature.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARSessionTrackingFeature.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARSessionTrackingFeature,
                       (UObject *)pUVar1,L"EARSessionTrackingFeature");
  }
  return Z_Registration_Info_UEnum_EARSessionTrackingFeature.OuterSingleton;
}

// StaticEnum<enum_EARSessionType> @ 14cf3f700

UEnum * __cdecl StaticEnum<enum_EARSessionType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARSessionType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARSessionType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARSessionType,(UObject *)pUVar1,
                       L"EARSessionType");
  }
  return Z_Registration_Info_UEnum_EARSessionType.OuterSingleton;
}

// StaticEnum<enum_EARSpatialMeshUsageFlags> @ 14cf3f740

UEnum * __cdecl StaticEnum<enum_EARSpatialMeshUsageFlags>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARSpatialMeshUsageFlags.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARSpatialMeshUsageFlags.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARSpatialMeshUsageFlags,(UObject *)pUVar1
                       ,L"EARSpatialMeshUsageFlags");
  }
  return Z_Registration_Info_UEnum_EARSpatialMeshUsageFlags.OuterSingleton;
}

// StaticEnum<enum_EARTextureType> @ 14cf3f780

UEnum * __cdecl StaticEnum<enum_EARTextureType>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARTextureType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARTextureType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARTextureType,(UObject *)pUVar1,
                       L"EARTextureType");
  }
  return Z_Registration_Info_UEnum_EARTextureType.OuterSingleton;
}

// StaticEnum<enum_EARTrackingQuality> @ 14cf3f7c0

UEnum * __cdecl StaticEnum<enum_EARTrackingQuality>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARTrackingQuality.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARTrackingQuality.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARTrackingQuality,(UObject *)pUVar1,
                       L"EARTrackingQuality");
  }
  return Z_Registration_Info_UEnum_EARTrackingQuality.OuterSingleton;
}

// StaticEnum<enum_EARTrackingQualityReason> @ 14cf3f800

UEnum * __cdecl StaticEnum<enum_EARTrackingQualityReason>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARTrackingQualityReason.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARTrackingQualityReason.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARTrackingQualityReason,(UObject *)pUVar1
                       ,L"EARTrackingQualityReason");
  }
  return Z_Registration_Info_UEnum_EARTrackingQualityReason.OuterSingleton;
}

// StaticEnum<enum_EARTrackingState> @ 14cf3f840

UEnum * __cdecl StaticEnum<enum_EARTrackingState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARTrackingState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARTrackingState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARTrackingState,(UObject *)pUVar1,
                       L"EARTrackingState");
  }
  return Z_Registration_Info_UEnum_EARTrackingState.OuterSingleton;
}

// StaticEnum<enum_EARWorldAlignment> @ 14cf3f880

UEnum * __cdecl StaticEnum<enum_EARWorldAlignment>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARWorldAlignment.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARWorldAlignment.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARWorldAlignment,(UObject *)pUVar1,
                       L"EARWorldAlignment");
  }
  return Z_Registration_Info_UEnum_EARWorldAlignment.OuterSingleton;
}

// StaticEnum<enum_EARWorldMappingState> @ 14cf3f8c0

UEnum * __cdecl StaticEnum<enum_EARWorldMappingState>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EARWorldMappingState.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EARWorldMappingState.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EARWorldMappingState,(UObject *)pUVar1,
                       L"EARWorldMappingState");
  }
  return Z_Registration_Info_UEnum_EARWorldMappingState.OuterSingleton;
}

// StaticEnum<enum_EFaceComponentDebugMode> @ 14cf3f900

UEnum * __cdecl StaticEnum<enum_EFaceComponentDebugMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFaceComponentDebugMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EFaceComponentDebugMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EFaceComponentDebugMode,(UObject *)pUVar1,
                       L"EFaceComponentDebugMode");
  }
  return Z_Registration_Info_UEnum_EFaceComponentDebugMode.OuterSingleton;
}

// StaticEnum<enum_EGeoAnchorComponentDebugMode> @ 14cf3f940

UEnum * __cdecl StaticEnum<enum_EGeoAnchorComponentDebugMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EGeoAnchorComponentDebugMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EGeoAnchorComponentDebugMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EGeoAnchorComponentDebugMode,
                       (UObject *)pUVar1,L"EGeoAnchorComponentDebugMode");
  }
  return Z_Registration_Info_UEnum_EGeoAnchorComponentDebugMode.OuterSingleton;
}

// StaticEnum<enum_EImageComponentDebugMode> @ 14cf3f980

UEnum * __cdecl StaticEnum<enum_EImageComponentDebugMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EImageComponentDebugMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EImageComponentDebugMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EImageComponentDebugMode,(UObject *)pUVar1
                       ,L"EImageComponentDebugMode");
  }
  return Z_Registration_Info_UEnum_EImageComponentDebugMode.OuterSingleton;
}

// StaticEnum<enum_EPlaneComponentDebugMode> @ 14cf3f9c0

UEnum * __cdecl StaticEnum<enum_EPlaneComponentDebugMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPlaneComponentDebugMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EPlaneComponentDebugMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EPlaneComponentDebugMode,(UObject *)pUVar1
                       ,L"EPlaneComponentDebugMode");
  }
  return Z_Registration_Info_UEnum_EPlaneComponentDebugMode.OuterSingleton;
}

// StaticEnum<enum_EPoseComponentDebugMode> @ 14cf3fa00

UEnum * __cdecl StaticEnum<enum_EPoseComponentDebugMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EPoseComponentDebugMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EPoseComponentDebugMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EPoseComponentDebugMode,(UObject *)pUVar1,
                       L"EPoseComponentDebugMode");
  }
  return Z_Registration_Info_UEnum_EPoseComponentDebugMode.OuterSingleton;
}

// StaticEnum<enum_EQRCodeComponentDebugMode> @ 14cf3fa40

UEnum * __cdecl StaticEnum<enum_EQRCodeComponentDebugMode>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EQRCodeComponentDebugMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UEnum_EQRCodeComponentDebugMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AugmentedReality_EQRCodeComponentDebugMode,
                       (UObject *)pUVar1,L"EQRCodeComponentDebugMode");
  }
  return Z_Registration_Info_UEnum_EQRCodeComponentDebugMode.OuterSingleton;
}

// operator() @ 14cf46000

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall <lambda_24>::operator()(<lambda_24> *this,IConsoleVariable *param_1)

{
  UObject *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  UFunction *this_01;
  ulonglong uVar7;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar9;
  ulonglong uVar8;
  TObjectIterator<UARPlaneComponent> local_28;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  bVar3 = UKismetSystemLibrary::IsDedicatedServer((UObject *)0x0);
  if (bVar3) {
    return;
  }
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar6 = UARPlaneComponent::StaticClass();
  uVar8 = CONCAT44(uVar9,EVar4) | 0x90020000;
  GetObjectsOfClass(pUVar6,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UARPlaneComponent>::Advance(&local_28);
  do {
    while( true ) {
      uVar7 = (ulonglong)local_28.Index;
      if ((local_28.Index < 0) || (local_28.ObjectArray.ArrayNum <= local_28.Index)) {
        if (local_28.ObjectArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
        return;
      }
      uVar5 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar5 = (uint)~local_28.Index >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (uVar8 = uVar7,
         bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = *(UObject **)(local_28.ObjectArray.AllocatorInstance.Data + uVar7 * 8);
      if (*(longlong *)&this_00[4].field_0x8 != 0) break;
LAB_14cf4612b:
      TObjectIterator<UARPlaneComponent>::Advance(&local_28);
    }
    this_01 = UObject::FindFunctionChecked(this_00,NAME_UARComponent_UpdateVisualization);
    pUVar6 = UField::GetOwnerClass((UField *)this_01);
    lVar1 = *(longlong *)this_00;
    if ((pUVar6->ClassFlags & CLASS_Native) != CLASS_None) {
      (**(code **)(lVar1 + 0x640))(this_00);
      goto LAB_14cf4612b;
    }
    (**(code **)(lVar1 + 0x260))(this_00,this_01,0,lVar1,uVar8);
    TObjectIterator<UARPlaneComponent>::Advance(&local_28);
  } while( true );
}

// operator() @ 14cf46160

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall <lambda_25>::operator()(<lambda_25> *this,IConsoleVariable *param_1)

{
  UObject *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  UFunction *this_01;
  ulonglong uVar7;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar9;
  ulonglong uVar8;
  TObjectIterator<UARImageComponent> local_28;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  bVar3 = UKismetSystemLibrary::IsDedicatedServer((UObject *)0x0);
  if (bVar3) {
    return;
  }
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar6 = UARImageComponent::StaticClass();
  uVar8 = CONCAT44(uVar9,EVar4) | 0x90020000;
  GetObjectsOfClass(pUVar6,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UARImageComponent>::Advance(&local_28);
  do {
    while( true ) {
      uVar7 = (ulonglong)local_28.Index;
      if ((local_28.Index < 0) || (local_28.ObjectArray.ArrayNum <= local_28.Index)) {
        if (local_28.ObjectArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
        return;
      }
      uVar5 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar5 = (uint)~local_28.Index >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (uVar8 = uVar7,
         bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = *(UObject **)(local_28.ObjectArray.AllocatorInstance.Data + uVar7 * 8);
      if (*(longlong *)&this_00[4].field_0x8 != 0) break;
LAB_14cf4628b:
      TObjectIterator<UARImageComponent>::Advance(&local_28);
    }
    this_01 = UObject::FindFunctionChecked(this_00,NAME_UARComponent_UpdateVisualization);
    pUVar6 = UField::GetOwnerClass((UField *)this_01);
    lVar1 = *(longlong *)this_00;
    if ((pUVar6->ClassFlags & CLASS_Native) != CLASS_None) {
      (**(code **)(lVar1 + 0x640))(this_00);
      goto LAB_14cf4628b;
    }
    (**(code **)(lVar1 + 0x260))(this_00,this_01,0,lVar1,uVar8);
    TObjectIterator<UARImageComponent>::Advance(&local_28);
  } while( true );
}

// operator() @ 14cf462c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall <lambda_26>::operator()(<lambda_26> *this,IConsoleVariable *param_1)

{
  UObject *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  UFunction *this_01;
  ulonglong uVar7;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar9;
  ulonglong uVar8;
  TObjectIterator<UARFaceComponent> local_28;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  bVar3 = UKismetSystemLibrary::IsDedicatedServer((UObject *)0x0);
  if (bVar3) {
    return;
  }
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar6 = UARFaceComponent::StaticClass();
  uVar8 = CONCAT44(uVar9,EVar4) | 0x90020000;
  GetObjectsOfClass(pUVar6,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UARFaceComponent>::Advance(&local_28);
  do {
    while( true ) {
      uVar7 = (ulonglong)local_28.Index;
      if ((local_28.Index < 0) || (local_28.ObjectArray.ArrayNum <= local_28.Index)) {
        if (local_28.ObjectArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
        return;
      }
      uVar5 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar5 = (uint)~local_28.Index >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (uVar8 = uVar7,
         bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = *(UObject **)(local_28.ObjectArray.AllocatorInstance.Data + uVar7 * 8);
      if (*(longlong *)&this_00[4].field_0x8 != 0) break;
LAB_14cf463eb:
      TObjectIterator<UARFaceComponent>::Advance(&local_28);
    }
    this_01 = UObject::FindFunctionChecked(this_00,NAME_UARComponent_UpdateVisualization);
    pUVar6 = UField::GetOwnerClass((UField *)this_01);
    lVar1 = *(longlong *)this_00;
    if ((pUVar6->ClassFlags & CLASS_Native) != CLASS_None) {
      (**(code **)(lVar1 + 0x640))(this_00);
      goto LAB_14cf463eb;
    }
    (**(code **)(lVar1 + 0x260))(this_00,this_01,0,lVar1,uVar8);
    TObjectIterator<UARFaceComponent>::Advance(&local_28);
  } while( true );
}

// operator() @ 14cf46420

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall <lambda_27>::operator()(<lambda_27> *this,IConsoleVariable *param_1)

{
  UObject *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  UFunction *this_01;
  ulonglong uVar7;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar9;
  ulonglong uVar8;
  TObjectIterator<UARPoseComponent> local_28;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  bVar3 = UKismetSystemLibrary::IsDedicatedServer((UObject *)0x0);
  if (bVar3) {
    return;
  }
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar6 = UARPoseComponent::StaticClass();
  uVar8 = CONCAT44(uVar9,EVar4) | 0x90020000;
  GetObjectsOfClass(pUVar6,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UARPoseComponent>::Advance(&local_28);
  do {
    while( true ) {
      uVar7 = (ulonglong)local_28.Index;
      if ((local_28.Index < 0) || (local_28.ObjectArray.ArrayNum <= local_28.Index)) {
        if (local_28.ObjectArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
        return;
      }
      uVar5 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar5 = (uint)~local_28.Index >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (uVar8 = uVar7,
         bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = *(UObject **)(local_28.ObjectArray.AllocatorInstance.Data + uVar7 * 8);
      if (*(longlong *)&this_00[4].field_0x8 != 0) break;
LAB_14cf4654b:
      TObjectIterator<UARPoseComponent>::Advance(&local_28);
    }
    this_01 = UObject::FindFunctionChecked(this_00,NAME_UARComponent_UpdateVisualization);
    pUVar6 = UField::GetOwnerClass((UField *)this_01);
    lVar1 = *(longlong *)this_00;
    if ((pUVar6->ClassFlags & CLASS_Native) != CLASS_None) {
      (**(code **)(lVar1 + 0x640))(this_00);
      goto LAB_14cf4654b;
    }
    (**(code **)(lVar1 + 0x260))(this_00,this_01,0,lVar1,uVar8);
    TObjectIterator<UARPoseComponent>::Advance(&local_28);
  } while( true );
}

// operator() @ 14cf46580

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall <lambda_28>::operator()(<lambda_28> *this,IConsoleVariable *param_1)

{
  UObject *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  UFunction *this_01;
  ulonglong uVar7;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar9;
  ulonglong uVar8;
  TObjectIterator<UARQRCodeComponent> local_28;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  bVar3 = UKismetSystemLibrary::IsDedicatedServer((UObject *)0x0);
  if (bVar3) {
    return;
  }
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar6 = UARQRCodeComponent::StaticClass();
  uVar8 = CONCAT44(uVar9,EVar4) | 0x90020000;
  GetObjectsOfClass(pUVar6,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UARQRCodeComponent>::Advance(&local_28);
  do {
    while( true ) {
      uVar7 = (ulonglong)local_28.Index;
      if ((local_28.Index < 0) || (local_28.ObjectArray.ArrayNum <= local_28.Index)) {
        if (local_28.ObjectArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
        return;
      }
      uVar5 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar5 = (uint)~local_28.Index >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (uVar8 = uVar7,
         bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = *(UObject **)(local_28.ObjectArray.AllocatorInstance.Data + uVar7 * 8);
      if (*(longlong *)&this_00[4].field_0x8 != 0) break;
LAB_14cf466ab:
      TObjectIterator<UARQRCodeComponent>::Advance(&local_28);
    }
    this_01 = UObject::FindFunctionChecked(this_00,NAME_UARComponent_UpdateVisualization);
    pUVar6 = UField::GetOwnerClass((UField *)this_01);
    lVar1 = *(longlong *)this_00;
    if ((pUVar6->ClassFlags & CLASS_Native) != CLASS_None) {
      (**(code **)(lVar1 + 0x640))(this_00);
      goto LAB_14cf466ab;
    }
    (**(code **)(lVar1 + 0x260))(this_00,this_01,0,lVar1,uVar8);
    TObjectIterator<UARQRCodeComponent>::Advance(&local_28);
  } while( true );
}

// operator() @ 14cf466e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall <lambda_29>::operator()(<lambda_29> *this,IConsoleVariable *param_1)

{
  UObject *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  UFunction *this_01;
  ulonglong uVar7;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar9;
  ulonglong uVar8;
  TObjectIterator<UARGeoAnchorComponent> local_28;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  bVar3 = UKismetSystemLibrary::IsDedicatedServer((UObject *)0x0);
  if (bVar3) {
    return;
  }
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar6 = UARGeoAnchorComponent::StaticClass();
  uVar8 = CONCAT44(uVar9,EVar4) | 0x90020000;
  GetObjectsOfClass(pUVar6,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UARGeoAnchorComponent>::Advance(&local_28);
  do {
    while( true ) {
      uVar7 = (ulonglong)local_28.Index;
      if ((local_28.Index < 0) || (local_28.ObjectArray.ArrayNum <= local_28.Index)) {
        if (local_28.ObjectArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
        return;
      }
      uVar5 = 0;
      if (local_28.Index < local_28.ObjectArray.ArrayNum) {
        uVar5 = (uint)~local_28.Index >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (uVar8 = uVar7,
         bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = *(UObject **)(local_28.ObjectArray.AllocatorInstance.Data + uVar7 * 8);
      if (*(longlong *)&this_00[4].field_0x8 != 0) break;
LAB_14cf4680b:
      TObjectIterator<UARGeoAnchorComponent>::Advance(&local_28);
    }
    this_01 = UObject::FindFunctionChecked(this_00,NAME_UARComponent_UpdateVisualization);
    pUVar6 = UField::GetOwnerClass((UField *)this_01);
    lVar1 = *(longlong *)this_00;
    if ((pUVar6->ClassFlags & CLASS_Native) != CLASS_None) {
      (**(code **)(lVar1 + 0x640))(this_00);
      goto LAB_14cf4680b;
    }
    (**(code **)(lVar1 + 0x260))(this_00,this_01,0,lVar1,uVar8);
    TObjectIterator<UARGeoAnchorComponent>::Advance(&local_28);
  } while( true );
}

// `vector_deleting_destructor'`adjustor{704}' @ 14cf46840

/* [thunk]:public: virtual void * __ptr64 __cdecl AARSharedWorldPlayerController::`vector deleting
   destructor'`adjustor{704}' (unsigned int) __ptr64 */

void * __thiscall
AARSharedWorldPlayerController::_vector_deleting_destructor__adjustor_704__
          (AARSharedWorldPlayerController *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((AARSharedWorldPlayerController *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14cf46854

/* [thunk]:public: virtual void * __ptr64 __cdecl UARBaseAsyncTaskBlueprintProxy::`vector deleting
   destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UARBaseAsyncTaskBlueprintProxy::_vector_deleting_destructor__adjustor_48__
          (UARBaseAsyncTaskBlueprintProxy *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UARBaseAsyncTaskBlueprintProxy *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cf46864

/* [thunk]:public: virtual void * __ptr64 __cdecl UARComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UARComponent::_vector_deleting_destructor__adjustor_40__(UARComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UARComponent *)&this[-1].MRMeshComponent,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{224}' @ 14cf46874

/* [thunk]:public: virtual void * __ptr64 __cdecl UAREnvironmentCaptureProbeTexture::`vector
   deleting destructor'`adjustor{224}' (unsigned int) __ptr64 */

void * __thiscall
UAREnvironmentCaptureProbeTexture::_vector_deleting_destructor__adjustor_224__
          (UAREnvironmentCaptureProbeTexture *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAREnvironmentCaptureProbeTexture *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{232}' @ 14cf46888

/* [thunk]:public: virtual void * __ptr64 __cdecl UAREnvironmentCaptureProbeTexture::`vector
   deleting destructor'`adjustor{232}' (unsigned int) __ptr64 */

void * __thiscall
UAREnvironmentCaptureProbeTexture::_vector_deleting_destructor__adjustor_232__
          (UAREnvironmentCaptureProbeTexture *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAREnvironmentCaptureProbeTexture *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cf4689c

/* WARNING: Type propagation algorithm not settling */
/* [thunk]:public: virtual void * __ptr64 __cdecl UAREnvironmentProbeComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UAREnvironmentProbeComponent::_vector_deleting_destructor__adjustor_40__
          (UAREnvironmentProbeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UAREnvironmentProbeComponent *)
                      (this[-1].ReplicatedPayload.WorldTransform.Translation.ZW.m128d_f64 + 1),
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cf468ac

/* [thunk]:public: virtual void * __ptr64 __cdecl UARFaceComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UARFaceComponent::_vector_deleting_destructor__adjustor_40__(UARFaceComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UARFaceComponent *)&this[-1].AccumulatedNormals,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cf468bc

/* WARNING: Type propagation algorithm not settling */
/* [thunk]:public: virtual void * __ptr64 __cdecl UARGeoAnchorComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UARGeoAnchorComponent::_vector_deleting_destructor__adjustor_40__
          (UARGeoAnchorComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UARGeoAnchorComponent *)
                      (this[-1].ReplicatedPayload.WorldTransform.Scale3D.ZW.m128d_f64 + 1),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14cf468cc

/* [thunk]:public: virtual void * __ptr64 __cdecl
   UARGetCandidateObjectAsyncTaskBlueprintProxy::`vector deleting destructor'`adjustor{48}'
   (unsigned int) __ptr64 */

void * __thiscall
UARGetCandidateObjectAsyncTaskBlueprintProxy::_vector_deleting_destructor__adjustor_48__
          (UARGetCandidateObjectAsyncTaskBlueprintProxy *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UARGetCandidateObjectAsyncTaskBlueprintProxy *)
                      ((longlong)&this[-1].Location.field0_0x0 + 0x10),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cf468dc

/* WARNING: Type propagation algorithm not settling */
/* [thunk]:public: virtual void * __ptr64 __cdecl UARImageComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UARImageComponent::_vector_deleting_destructor__adjustor_40__(UARImageComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UARImageComponent *)
                      (this[-1].ReplicatedPayload.WorldTransform.Scale3D.ZW.m128d_f64 + 1),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cf468ec

/* [thunk]:public: virtual void * __ptr64 __cdecl UARLifeCycleComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UARLifeCycleComponent::_vector_deleting_destructor__adjustor_40__
          (UARLifeCycleComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UARLifeCycleComponent *)&this[-1].OnARActorToBeDestroyedDelegate,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cf468fc

/* WARNING: Type propagation algorithm not settling */
/* [thunk]:public: virtual void * __ptr64 __cdecl UARMeshComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UARMeshComponent::_vector_deleting_destructor__adjustor_40__(UARMeshComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UARMeshComponent *)
                      (this[-1].ReplicatedPayload.WorldTransform.Scale3D.XY.m128d_f64 + 1),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cf4690c

/* WARNING: Type propagation algorithm not settling */
/* [thunk]:public: virtual void * __ptr64 __cdecl UARObjectComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UARObjectComponent::_vector_deleting_destructor__adjustor_40__
          (UARObjectComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UARObjectComponent *)
                      (this[-1].ReplicatedPayload.WorldTransform.Translation.ZW.m128d_f64 + 1),
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cf4691c

/* [thunk]:public: virtual void * __ptr64 __cdecl UARPlaneComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UARPlaneComponent::_vector_deleting_destructor__adjustor_40__(UARPlaneComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UARPlaneComponent *)
                      ((longlong)&this[-1].ReplicatedPayload.Extents.field0_0x0 + 0x10),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cf4692c

/* [thunk]:public: virtual void * __ptr64 __cdecl UARPointComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UARPointComponent::_vector_deleting_destructor__adjustor_40__(UARPointComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UARPointComponent *)&this[-1].field_0x2c8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cf4693c

/* WARNING: Type propagation algorithm not settling */
/* [thunk]:public: virtual void * __ptr64 __cdecl UARPoseComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UARPoseComponent::_vector_deleting_destructor__adjustor_40__(UARPoseComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UARPoseComponent *)
                      (this[-1].ReplicatedPayload.WorldTransform.Scale3D.XY.m128d_f64 + 1),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cf4694c

/* [thunk]:public: virtual void * __ptr64 __cdecl UARQRCodeComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UARQRCodeComponent::_vector_deleting_destructor__adjustor_40__
          (UARQRCodeComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UARQRCodeComponent *)
                      ((longlong)&this[-1].ReplicatedPayload.Extents.field0_0x0 + 8),param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14cf4695c

/* [thunk]:public: virtual void * __ptr64 __cdecl UARSaveWorldAsyncTaskBlueprintProxy::`vector
   deleting destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UARSaveWorldAsyncTaskBlueprintProxy::_vector_deleting_destructor__adjustor_48__
          (UARSaveWorldAsyncTaskBlueprintProxy *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UARSaveWorldAsyncTaskBlueprintProxy *)&this[-1].OnSuccess.field_0x10,param_1)
  ;
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{224}' @ 14cf4696c

/* [thunk]:public: virtual void * __ptr64 __cdecl UARTexture::`vector deleting
   destructor'`adjustor{224}' (unsigned int) __ptr64 */

void * __thiscall
UARTexture::_vector_deleting_destructor__adjustor_224__(UARTexture *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UARTexture *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{232}' @ 14cf46980

/* [thunk]:public: virtual void * __ptr64 __cdecl UARTexture::`vector deleting
   destructor'`adjustor{232}' (unsigned int) __ptr64 */

void * __thiscall
UARTexture::_vector_deleting_destructor__adjustor_232__(UARTexture *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UARTexture *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{224}' @ 14cf46994

/* [thunk]:public: virtual void * __ptr64 __cdecl UARTextureCameraDepth::`vector deleting
   destructor'`adjustor{224}' (unsigned int) __ptr64 */

void * __thiscall
UARTextureCameraDepth::_vector_deleting_destructor__adjustor_224__
          (UARTextureCameraDepth *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UARTextureCameraDepth *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{232}' @ 14cf469a8

/* [thunk]:public: virtual void * __ptr64 __cdecl UARTextureCameraDepth::`vector deleting
   destructor'`adjustor{232}' (unsigned int) __ptr64 */

void * __thiscall
UARTextureCameraDepth::_vector_deleting_destructor__adjustor_232__
          (UARTextureCameraDepth *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UARTextureCameraDepth *)&this[-1]._padding_,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{224}' @ 14cf469bc

/* [thunk]:public: virtual void * __ptr64 __cdecl UARTextureCameraImage::`vector deleting
   destructor'`adjustor{224}' (unsigned int) __ptr64 */

void * __thiscall
UARTextureCameraImage::_vector_deleting_destructor__adjustor_224__
          (UARTextureCameraImage *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UARTextureCameraImage *)&this[-1].field_0x90,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{232}' @ 14cf469d0

/* [thunk]:public: virtual void * __ptr64 __cdecl UARTextureCameraImage::`vector deleting
   destructor'`adjustor{232}' (unsigned int) __ptr64 */

void * __thiscall
UARTextureCameraImage::_vector_deleting_destructor__adjustor_232__
          (UARTextureCameraImage *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((UARTextureCameraImage *)&this[-1].field_0x88,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{40}' @ 14cf469e4

/* [thunk]:public: virtual void * __ptr64 __cdecl UARTrackableNotifyComponent::`vector deleting
   destructor'`adjustor{40}' (unsigned int) __ptr64 */

void * __thiscall
UARTrackableNotifyComponent::_vector_deleting_destructor__adjustor_40__
          (UARTrackableNotifyComponent *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UARTrackableNotifyComponent *)&this[-1].OnUpdateTrackedObject.field_0x8,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14cf469f4

/* [thunk]:public: virtual void * __ptr64 __cdecl
   UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::`vector deleting destructor'`adjustor{48}'
   (unsigned int) __ptr64 */

void * __thiscall
UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::_vector_deleting_destructor__adjustor_48__
          (UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy *)&this[-1].Longitude,
                      param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{48}' @ 14cf46a04

/* [thunk]:public: virtual void * __ptr64 __cdecl UGetGeoLocationAsyncTaskBlueprintProxy::`vector
   deleting destructor'`adjustor{48}' (unsigned int) __ptr64 */

void * __thiscall
UGetGeoLocationAsyncTaskBlueprintProxy::_vector_deleting_destructor__adjustor_48__
          (UGetGeoLocationAsyncTaskBlueprintProxy *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((UGetGeoLocationAsyncTaskBlueprintProxy *)
                      ((longlong)&this[-1].WorldPosition.field0_0x0 + 8),param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14cf46a20

void * __thiscall
IBaseDelegateInstance<void___cdecl(AARActor_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(AARActor_*),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf46a50

void * __thiscall
IBaseDelegateInstance<void___cdecl(UARTrackedGeometry_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UARTrackedGeometry_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf46a80

void * __thiscall
IBaseDelegateInstance<void___cdecl(UClass_*,FGuid),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(UClass_*,FGuid),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf46ab0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UARLifeCycleComponent,void___cdecl(AARActor_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UARLifeCycleComponent,void___cdecl(AARActor_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf46ae0

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UARLifeCycleComponent,void___cdecl(UClass_*,FGuid),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UARLifeCycleComponent,void___cdecl(UClass_*,FGuid),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf46b10

void * __thiscall
TBaseUObjectMethodDelegateInstance<0,UARTrackableNotifyComponent,void___cdecl(UARTrackedGeometry_*),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseUObjectMethodDelegateInstance<0,UARTrackableNotifyComponent,void___cdecl(UARTrackedGeometry_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf46b40

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(AARActor_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(AARActor_*),FDefaultDelegateUserPolicy> *this,
          uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf46b70

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UARTrackedGeometry_*),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UARTrackedGeometry_*),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf46ba0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(UClass_*,FGuid),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(UClass_*,FGuid),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf46bd0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FARErrorGetCandidateObjectAsyncTask,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FARErrorGetCandidateObjectAsyncTask,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf46c10

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FARErrorSaveWorldAsyncTask,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FARErrorSaveWorldAsyncTask,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf46c50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall AARActor::_scalar_deleting_destructor_(AARActor *this,uint param_1)

{
  *(undefined ***)this = &___7AARActor__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf46cb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall AAROriginActor::_scalar_deleting_destructor_(AAROriginActor *this,uint param_1)

{
  *(undefined ***)this = &___7AAROriginActor__6B_;
  AActor::~AActor((AActor *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf46d10

void * __thiscall
AARSharedWorldGameMode::_scalar_deleting_destructor_(AARSharedWorldGameMode *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7AARSharedWorldGameMode__6B_;
  pFVar1 = (this->SendBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->PlayerToReplicationStateMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PlayerToReplicationStateMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<AARSharedWorldPlayerController_*,FARSharedWorldReplicationState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<AARSharedWorldPlayerController_*,FARSharedWorldReplicationState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<AARSharedWorldPlayerController_*,FARSharedWorldReplicationState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PlayerToReplicationStateMap);
  AGameMode::~AGameMode((AGameMode *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x408);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf46dc0

void * __thiscall
AARSharedWorldGameState::_scalar_deleting_destructor_(AARSharedWorldGameState *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7AARSharedWorldGameState__6B_;
  pFVar1 = (this->ARWorldData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreviewImageData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AGameState::~AGameState((AGameState *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x370);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf46e50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
AARSharedWorldPlayerController::_scalar_deleting_destructor_
          (AARSharedWorldPlayerController *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  this->_padding_ = (longlong)&___7AARSharedWorldPlayerController__6B_;
  APlayerController::~APlayerController((APlayerController *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x790);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf46ed0

void * __thiscall AARSkyLight::_scalar_deleting_destructor_(AARSkyLight *this,uint param_1)

{
  this->_padding_ = (longlong)&___7AARSkyLight__6B_;
  ASkyLight::~ASkyLight((ASkyLight *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf46f30

void * __thiscall FARAsyncTask::_scalar_deleting_destructor_(FARAsyncTask *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FARAsyncTask__6B_;
  pFVar1 = (this->Error).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf46f80

void * __thiscall
FARErrorGetCandidateObjectAsyncTask::_scalar_deleting_destructor_
          (FARErrorGetCandidateObjectAsyncTask *this,uint param_1)

{
  *(undefined ***)this = &___7FARAsyncTask__6B_;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf46fd0

void * __thiscall
FARErrorSaveWorldAsyncTask::_scalar_deleting_destructor_
          (FARErrorSaveWorldAsyncTask *this,uint param_1)

{
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  *(undefined ***)this = &___7FARAsyncTask__6B_;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf47030

void * __thiscall
FARGetCandidateObjectAsyncTask::_scalar_deleting_destructor_
          (FARGetCandidateObjectAsyncTask *this,uint param_1)

{
  *(undefined ***)this = &___7FARAsyncTask__6B_;
  if (*(void **)&this->field_0x10 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x10);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf47080

void * __thiscall
FARSaveWorldAsyncTask::_scalar_deleting_destructor_(FARSaveWorldAsyncTask *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->WorldData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FARAsyncTask__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf470e0

void * __thiscall
FARSupportInterface::_scalar_deleting_destructor_(FARSupportInterface *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  void *pvVar4;
  longlong *plVar5;
  IModularFeatures *pIVar6;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar7;
  
  *(undefined ***)this = &___7FARSupportInterface__6B_;
  pIVar6 = IModularFeatures::Get();
  pTVar7 = &this->OnARSessionStarted;
  if (this == (FARSupportInterface *)0x0) {
    pTVar7 = (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0;
  }
  pcVar3 = *(code **)((longlong)*pIVar6 + 0x30);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FName___cdecl_FARSupportInterface::GetModularFeatureName(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FName___cdecl_FARSupportInterface::GetModularFeatureName(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FName___cdecl_FARSupportInterface::GetModularFeatureName(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_static_class_FName___cdecl_FARSupportInterface::GetModularFeatureName(void)'
                      ::__l2::ModularFeatureName,L"ARSystem");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_FARSupportInterface::GetModularFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  (*pcVar3)(pIVar6,`public:_static_class_FName___cdecl_FARSupportInterface::GetModularFeatureName(void)'
                   ::__l2::ModularFeatureName,pTVar7);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnAlignmentTransformUpdated).field_0x8,
             *(int *)&(this->OnAlignmentTransformUpdated).field_0x10);
  pvVar4 = *(void **)&(this->OnAlignmentTransformUpdated).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAlignmentTransformUpdated);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnARSessionStarted).field_0x8,*(int *)&(this->OnARSessionStarted).field_0x10);
  pvVar4 = *(void **)&(this->OnARSessionStarted).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnARSessionStarted);
  *(undefined ***)this = &___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  plVar5 = *(longlong **)&this->field_0x18;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf47250

void * __thiscall
UARBaseAsyncTaskBlueprintProxy::_scalar_deleting_destructor_
          (UARBaseAsyncTaskBlueprintProxy *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UBlueprintAsyncActionBase__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AsyncTask).SharedReferenceCount.ReferenceController);
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  UBlueprintAsyncActionBase::~UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf472e0

void * __thiscall
UARBasicLightEstimate::_scalar_deleting_destructor_(UARBasicLightEstimate *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UARLightEstimate__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf47340

void * __thiscall
UARBlueprintLibrary::_scalar_deleting_destructor_(UARBlueprintLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UARBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf473a0

void * __thiscall
UARCandidateImage::_scalar_deleting_destructor_(UARCandidateImage *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UARCandidateImage__6B_;
  pFVar1 = (this->FriendlyName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf47410

void * __thiscall
UARCandidateObject::_scalar_deleting_destructor_(UARCandidateObject *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UARCandidateObject__6B_;
  pFVar1 = (this->FriendlyName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CandidateObjectData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf47490

void * __thiscall UARComponent::_scalar_deleting_destructor_(UARComponent *this,uint param_1)

{
  ~UARComponent(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf474f0

void * __thiscall
UARDependencyHandler::_scalar_deleting_destructor_(UARDependencyHandler *this,uint param_1)

{
  *(undefined ***)this = &___7UARDependencyHandler__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf47550

void * __thiscall
UAREnvironmentCaptureProbe::_scalar_deleting_destructor_
          (UAREnvironmentCaptureProbe *this,uint param_1)

{
  *(undefined ***)this = &___7UAREnvironmentCaptureProbe__6B_;
  UARTrackedGeometry::~UARTrackedGeometry((UARTrackedGeometry *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf475b0

void * __thiscall
UAREnvironmentCaptureProbeTexture::_scalar_deleting_destructor_
          (UAREnvironmentCaptureProbeTexture *this,uint param_1)

{
  this->_padding_ = (longlong)&UTextureCube::_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&UTextureCube::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UTextureCube::_vftable__for__IInterface_AsyncCompilation__;
  UTexture::~UTexture((UTexture *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x178);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf47630

void * __thiscall
UAREnvironmentProbeComponent::_scalar_deleting_destructor_
          (UAREnvironmentProbeComponent *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UARComponent::~UARComponent((UARComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x340);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf476b0

void * __thiscall
UARFaceComponent::_scalar_deleting_destructor_(UARFaceComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->TangentData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AccumulatedNormals).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UARComponent::~UARComponent((UARComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x370);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf47750

void * __thiscall UARFaceGeometry::_scalar_deleting_destructor_(UARFaceGeometry *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UARFaceGeometry__6B_;
  pFVar1 = (this->UVs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->IndexBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VertexBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->BlendShapes).field_0x48 = 0;
  pvVar2 = *(void **)&(this->BlendShapes).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EARFaceBlendShape,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EARFaceBlendShape,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->BlendShapes);
  UARTrackedGeometry::~UARTrackedGeometry((UARTrackedGeometry *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2c0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf47820

void * __thiscall UARGeoAnchor::_scalar_deleting_destructor_(UARGeoAnchor *this,uint param_1)

{
  *(undefined ***)this = &___7UARGeoAnchor__6B_;
  UARTrackedGeometry::~UARTrackedGeometry((UARTrackedGeometry *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf47880

void * __thiscall
UARGeoAnchorComponent::_scalar_deleting_destructor_(UARGeoAnchorComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->ReplicatedPayload).AnchorName.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UARComponent::~UARComponent((UARComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x380);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf47910

void * __thiscall
UARGeoTrackingSupport::_scalar_deleting_destructor_(UARGeoTrackingSupport *this,uint param_1)

{
  *(undefined ***)this = &___7UARGeoTrackingSupport__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf47970

void * __thiscall
UARGetCandidateObjectAsyncTaskBlueprintProxy::_scalar_deleting_destructor_
          (UARGetCandidateObjectAsyncTaskBlueprintProxy *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UBlueprintAsyncActionBase__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CandidateObjectTask).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnFailed).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFailed);
  pvVar1 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  this->_padding_ =
       (longlong)&UARBaseAsyncTaskBlueprintProxy::_vftable__for__UBlueprintAsyncActionBase__;
  this->_padding_ = (longlong)&UARBaseAsyncTaskBlueprintProxy::_vftable__for__FTickableGameObject__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  UBlueprintAsyncActionBase::~UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0xc0);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf47a50

void * __thiscall
UARImageComponent::_scalar_deleting_destructor_(UARImageComponent *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UARComponent::~UARComponent((UARComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x380);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf47ad0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall
UARLifeCycleComponent::_scalar_deleting_destructor_(UARLifeCycleComponent *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pvVar1 = *(void **)&(this->OnARActorToBeDestroyedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnARActorToBeDestroyedDelegate);
  pvVar1 = *(void **)&(this->OnARActorSpawnedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnARActorSpawnedDelegate);
  USceneComponent::~USceneComponent((USceneComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x290);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf47b90

void * __thiscall
UARLightEstimate::_scalar_deleting_destructor_(UARLightEstimate *this,uint param_1)

{
  *(undefined ***)this = &___7UARLightEstimate__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf47bf0

void * __thiscall
UARMeshComponent::_scalar_deleting_destructor_(UARMeshComponent *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UARComponent::~UARComponent((UARComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x370);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf47c70

void * __thiscall UARMeshGeometry::_scalar_deleting_destructor_(UARMeshGeometry *this,uint param_1)

{
  *(undefined ***)this = &___7UARMeshGeometry__6B_;
  UARTrackedGeometry::~UARTrackedGeometry((UARTrackedGeometry *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf47cd0

void * __thiscall
UARObjectComponent::_scalar_deleting_destructor_(UARObjectComponent *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UARComponent::~UARComponent((UARComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x340);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf47d50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void * __thiscall UARPin::_scalar_deleting_destructor_(UARPin *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  *(undefined ***)this = &___7UARPin__6B_;
  pvVar3 = *(void **)&(this->OnARTransformUpdated).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnARTransformUpdated);
  pvVar3 = *(void **)&(this->OnARTrackingStateChanged).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnARTrackingStateChanged);
  pTVar4 = (this->ARSystem).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf47e20

void * __thiscall
UARPlaneComponent::_scalar_deleting_destructor_(UARPlaneComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->ReplicatedPayload).BoundaryVertices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UARComponent::~UARComponent((UARComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x3b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf47eb0

void * __thiscall
UARPlaneGeometry::_scalar_deleting_destructor_(UARPlaneGeometry *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7UARPlaneGeometry__6B_;
  pFVar1 = (this->BoundaryPolygon).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UARTrackedGeometry::~UARTrackedGeometry((UARTrackedGeometry *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf47f30

void * __thiscall
UARPointComponent::_scalar_deleting_destructor_(UARPointComponent *this,uint param_1)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  UARComponent::~UARComponent((UARComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2f0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf47fb0

void * __thiscall
UARPoseComponent::_scalar_deleting_destructor_(UARPoseComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->ReplicatedPayload).JointTransforms.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UARComponent::~UARComponent((UARComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x350);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf48040

void * __thiscall
UARQRCodeComponent::_scalar_deleting_destructor_(UARQRCodeComponent *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->ReplicatedPayload).QRCode.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UARComponent::~UARComponent((UARComponent *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x390);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf480d0

void * __thiscall
UARSaveWorldAsyncTaskBlueprintProxy::_scalar_deleting_destructor_
          (UARSaveWorldAsyncTaskBlueprintProxy *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UBlueprintAsyncActionBase__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SaveWorldTask).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnFailed).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFailed);
  pvVar1 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  this->_padding_ =
       (longlong)&UARBaseAsyncTaskBlueprintProxy::_vftable__for__UBlueprintAsyncActionBase__;
  this->_padding_ = (longlong)&UARBaseAsyncTaskBlueprintProxy::_vftable__for__FTickableGameObject__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  UBlueprintAsyncActionBase::~UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0x90);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf481b0

void * __thiscall
UARSessionConfig::_scalar_deleting_destructor_(UARSessionConfig *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UARSessionConfig__6B_;
  pFVar1 = (this->SerializedARCandidateImageDatabase).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CandidateObjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorldMapData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CandidateImages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf48250

void * __thiscall UARTexture::_scalar_deleting_destructor_(UARTexture *this,uint param_1)

{
  this->_padding_ = (longlong)&_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  UTexture::~UTexture((UTexture *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf482d0

void * __thiscall
UARTextureCameraDepth::_scalar_deleting_destructor_(UARTextureCameraDepth *this,uint param_1)

{
  this->_padding_ = (longlong)&UARTexture::_vftable__for__UStreamableRenderAsset__;
  this->_padding_ = (longlong)&UARTexture::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UARTexture::_vftable__for__IInterface_AsyncCompilation__;
  UTexture::~UTexture((UTexture *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x178);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf48350

void * __thiscall
UARTextureCameraImage::_scalar_deleting_destructor_(UARTextureCameraImage *this,uint param_1)

{
  *(undefined ***)this = &UARTexture::_vftable__for__UStreamableRenderAsset__;
  *(undefined ***)&this->field_0xe0 = &UARTexture::_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0xe8 = &UARTexture::_vftable__for__IInterface_AsyncCompilation__;
  UTexture::~UTexture((UTexture *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf483d0

void * __thiscall
UARTraceResultDummy::_scalar_deleting_destructor_(UARTraceResultDummy *this,uint param_1)

{
  *(undefined ***)this = &___7UARTraceResultDummy__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf48430

void * __thiscall
UARTraceResultLibrary::_scalar_deleting_destructor_(UARTraceResultLibrary *this,uint param_1)

{
  *(undefined ***)this = &___7UARTraceResultLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf48490

void * __thiscall
UARTrackableNotifyComponent::_scalar_deleting_destructor_
          (UARTrackableNotifyComponent *this,uint param_1)

{
  ~UARTrackableNotifyComponent(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x2b8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf484f0

void * __thiscall
UARTrackedGeometry::_scalar_deleting_destructor_(UARTrackedGeometry *this,uint param_1)

{
  ~UARTrackedGeometry(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf48550

void * __thiscall UARTrackedImage::_scalar_deleting_destructor_(UARTrackedImage *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UARTrackedImage__6B_;
  UARTrackedGeometry::~UARTrackedGeometry((UARTrackedGeometry *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x170);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf485b0

void * __thiscall
UARTrackedObject::_scalar_deleting_destructor_(UARTrackedObject *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UARTrackedObject__6B_;
  UARTrackedGeometry::~UARTrackedGeometry((UARTrackedGeometry *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf48610

void * __thiscall UARTrackedPoint::_scalar_deleting_destructor_(UARTrackedPoint *this,uint param_1)

{
  *(undefined ***)this = &___7UARTrackedPoint__6B_;
  UARTrackedGeometry::~UARTrackedGeometry((UARTrackedGeometry *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x160);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf48670

void * __thiscall UARTrackedPose::_scalar_deleting_destructor_(UARTrackedPose *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7UARTrackedPose__6B_;
  pFVar1 = (this->TrackedPose).IsJointTracked.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TrackedPose).JointTransforms.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TrackedPose).SkeletonDefinition.ParentIndices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TrackedPose).SkeletonDefinition.JointNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UARTrackedGeometry::~UARTrackedGeometry((UARTrackedGeometry *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x1b0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf48720

void * __thiscall
UARTrackedQRCode::_scalar_deleting_destructor_(UARTrackedQRCode *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7UARTrackedQRCode__6B_;
  pFVar1 = (this->QRCode).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)this = &___7UARTrackedImage__6B_;
  UARTrackedGeometry::~UARTrackedGeometry((UARTrackedGeometry *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,400);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf487a0

void * __thiscall
UARTypesDummyClass::_scalar_deleting_destructor_(UARTypesDummyClass *this,uint param_1)

{
  *(undefined ***)this = &___7UARTypesDummyClass__6B_;
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf48800

void * __thiscall
UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy::_scalar_deleting_destructor_
          (UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UBlueprintAsyncActionBase__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  pFVar1 = (this->Error).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyTask).SharedReferenceCount.ReferenceController);
  pvVar2 = *(void **)&(this->OnFailed).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFailed);
  pvVar2 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  this->_padding_ =
       (longlong)&UARBaseAsyncTaskBlueprintProxy::_vftable__for__UBlueprintAsyncActionBase__;
  this->_padding_ = (longlong)&UARBaseAsyncTaskBlueprintProxy::_vftable__for__FTickableGameObject__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  UBlueprintAsyncActionBase::~UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0xb0);
    }
  }
  return this;
}

// `scalar_deleting_destructor' @ 14cf488f0

void * __thiscall
UGetGeoLocationAsyncTaskBlueprintProxy::_scalar_deleting_destructor_
          (UGetGeoLocationAsyncTaskBlueprintProxy *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UBlueprintAsyncActionBase__;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  pFVar1 = (this->Error).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyTask).SharedReferenceCount.ReferenceController);
  pvVar2 = *(void **)&(this->OnFailed).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFailed);
  pvVar2 = *(void **)&(this->OnSuccess).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSuccess);
  this->_padding_ =
       (longlong)&UARBaseAsyncTaskBlueprintProxy::_vftable__for__UBlueprintAsyncActionBase__;
  this->_padding_ = (longlong)&UARBaseAsyncTaskBlueprintProxy::_vftable__for__FTickableGameObject__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)&this->_padding_);
  UBlueprintAsyncActionBase::~UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
    }
    else {
      __empty_global_delete(this,0xb8);
    }
  }
  return this;
}

// CreateMRMeshComponent @ 14cf4c7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMRMeshComponent * __cdecl
CreateMRMeshComponent
          (AActor *param_1,FARSessionPayload *param_2,UMaterialInterface *param_3,
          UMaterialInterface *param_4,bool param_5)

{
  UClass *pUVar1;
  UMRMeshComponent *this;
  longlong *plVar2;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (((param_2->ConfigFlags & 1) != 0) || (param_5)) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar1 = Z_Construct_UClass_UMRMeshComponent_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar1);
    local_b8._8_8_ = param_1;
    this = (UMRMeshComponent *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar2 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar2 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    USceneComponent::SetUsingAbsoluteLocation((USceneComponent *)this,true);
    USceneComponent::SetUsingAbsoluteRotation((USceneComponent *)this,true);
    USceneComponent::SetUsingAbsoluteScale((USceneComponent *)this,true);
    UMRMeshComponent::SetEnableMeshOcclusion
              (this,(bool)((byte)((uint)param_2->ConfigFlags >> 4) & 1));
    UMRMeshComponent::SetUseWireframe(this,(bool)((byte)((uint)param_2->ConfigFlags >> 1) & 1));
    this->bNeverCreateCollisionMesh = (bool)(~(byte)((uint)param_2->ConfigFlags >> 2) & 1);
    this->bUpdateNavMeshOnMeshUpdate = (bool)((byte)((uint)param_2->ConfigFlags >> 3) & 1);
    if ((param_3 != (UMaterialInterface *)0x0) ||
       (param_3 = (param_2->DefaultMeshMaterial).field0_0x0.DebugPtr,
       param_3 != (UMaterialInterface *)0x0)) {
      (**(code **)(*(longlong *)this + 0x6b8))(this,0,param_3);
    }
    if ((param_4 != (UMaterialInterface *)0x0) ||
       (param_4 = (param_2->DefaultWireframeMeshMaterial).field0_0x0.DebugPtr,
       param_4 != (UMaterialInterface *)0x0)) {
      (**(code **)(*(longlong *)this + 0xa90))(this,param_4);
    }
    local_c8 = 0;
    USceneComponent::SetupAttachment
              ((USceneComponent *)this,(param_1->RootComponent).field0_0x0.DebugPtr,(FName)0x0);
    UActorComponent::RegisterComponent((UActorComponent *)this);
  }
  else {
    this = (UMRMeshComponent *)0x0;
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeARActor @ 14cf4e8f0

void __cdecl EmptyLinkFunctionForGeneratedCodeARActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeARBlueprintLibrary @ 14cf4e900

void __cdecl EmptyLinkFunctionForGeneratedCodeARBlueprintLibrary(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeARBlueprintProxy @ 14cf4e910

void __cdecl EmptyLinkFunctionForGeneratedCodeARBlueprintProxy(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeARComponent @ 14cf4e920

void __cdecl EmptyLinkFunctionForGeneratedCodeARComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeARDependencyHandler @ 14cf4e930

void __cdecl EmptyLinkFunctionForGeneratedCodeARDependencyHandler(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeARGeoTrackingSupport @ 14cf4e940

void __cdecl EmptyLinkFunctionForGeneratedCodeARGeoTrackingSupport(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeARLifeCycleComponent @ 14cf4e950

void __cdecl EmptyLinkFunctionForGeneratedCodeARLifeCycleComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeARLightEstimate @ 14cf4e960

void __cdecl EmptyLinkFunctionForGeneratedCodeARLightEstimate(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAROriginActor @ 14cf4e970

void __cdecl EmptyLinkFunctionForGeneratedCodeAROriginActor(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeARPin @ 14cf4e980

void __cdecl EmptyLinkFunctionForGeneratedCodeARPin(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeARSessionConfig @ 14cf4e990

void __cdecl EmptyLinkFunctionForGeneratedCodeARSessionConfig(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeARSharedWorldGameMode @ 14cf4e9a0

void __cdecl EmptyLinkFunctionForGeneratedCodeARSharedWorldGameMode(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeARSharedWorldGameState @ 14cf4e9b0

void __cdecl EmptyLinkFunctionForGeneratedCodeARSharedWorldGameState(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeARSharedWorldPlayerController @ 14cf4e9c0

void __cdecl EmptyLinkFunctionForGeneratedCodeARSharedWorldPlayerController(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeARSkyLight @ 14cf4e9d0

void __cdecl EmptyLinkFunctionForGeneratedCodeARSkyLight(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeARTextures @ 14cf4e9e0

void __cdecl EmptyLinkFunctionForGeneratedCodeARTextures(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeARTraceResult @ 14cf4e9f0

void __cdecl EmptyLinkFunctionForGeneratedCodeARTraceResult(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeARTrackable @ 14cf4ea00

void __cdecl EmptyLinkFunctionForGeneratedCodeARTrackable(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeARTrackableNotifyComponent @ 14cf4ea10

void __cdecl EmptyLinkFunctionForGeneratedCodeARTrackableNotifyComponent(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeARTypes @ 14cf4ea20

void __cdecl EmptyLinkFunctionForGeneratedCodeARTypes(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeAugmentedReality_init @ 14cf4ea30

void __cdecl EmptyLinkFunctionForGeneratedCodeAugmentedReality_init(void)

{
  return;
}

// FARGetCandidateObjectPin_DelegateWrapper @ 14cf4ee10

void __cdecl
FARGetCandidateObjectPin_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UARCandidateObject *param_2
          )

{
  UARCandidateObject *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FARSaveWorldPin_DelegateWrapper @ 14cf4ee30

void __cdecl
FARSaveWorldPin_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != param_2) {
    uVar1 = param_2->ArrayNum;
    _Src = (param_2->AllocatorInstance).Data;
    local_18.ArrayMax = 0;
    local_18.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar1,0,&local_18.AllocatorInstance,uVar1,&local_18.ArrayMax);
      memcpy(local_18.AllocatorInstance.Data,_Src,(longlong)(int)uVar1);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// FOnARTrackingStateChanged_DelegateWrapper @ 14cf4f0b0

void __cdecl
FOnARTrackingStateChanged_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,EARTrackingState param_2)

{
  EARTrackingState local_res10 [24];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FOnARTransformUpdated_DelegateWrapper @ 14cf4f0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FOnARTransformUpdated_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,TTransform<double> *param_2
          )

{
  undefined1 auStack_98 [32];
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78 = (param_2->Rotation).XY.m128d_f64[0];
  dStack_70 = (param_2->Rotation).XY.m128d_f64[1];
  local_68 = (param_2->Rotation).ZW.m128d_f64[0];
  dStack_60 = (param_2->Rotation).ZW.m128d_f64[1];
  local_58 = (param_2->Translation).XY.m128d_f64[0];
  dStack_50 = (param_2->Translation).XY.m128d_f64[1];
  local_48 = (param_2->Translation).ZW.m128d_f64[0];
  dStack_40 = (param_2->Translation).ZW.m128d_f64[1];
  local_38 = (param_2->Scale3D).XY.m128d_f64[0];
  dStack_30 = (param_2->Scale3D).XY.m128d_f64[1];
  local_28 = (param_2->Scale3D).ZW.m128d_f64[0];
  dStack_20 = (param_2->Scale3D).ZW.m128d_f64[1];
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_78);
  return;
}

// FTrackableDelegate_DelegateWrapper @ 14cf4f150

void __cdecl
FTrackableDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UARTrackedGeometry *param_2
          )

{
  UARTrackedGeometry *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FTrackableEnvProbeDelegate_DelegateWrapper @ 14cf4f170

void __cdecl
FTrackableEnvProbeDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          UAREnvironmentCaptureProbe *param_2)

{
  UAREnvironmentCaptureProbe *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FTrackableFaceDelegate_DelegateWrapper @ 14cf4f190

void __cdecl
FTrackableFaceDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UARFaceGeometry *param_2)

{
  UARFaceGeometry *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FTrackableImageDelegate_DelegateWrapper @ 14cf4f1b0

void __cdecl
FTrackableImageDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UARTrackedImage *param_2)

{
  UARTrackedImage *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FTrackableObjectDelegate_DelegateWrapper @ 14cf4f1d0

void __cdecl
FTrackableObjectDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UARTrackedObject *param_2)

{
  UARTrackedObject *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FTrackablePlaneDelegate_DelegateWrapper @ 14cf4f1f0

void __cdecl
FTrackablePlaneDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UARPlaneGeometry *param_2)

{
  UARPlaneGeometry *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FTrackablePointDelegate_DelegateWrapper @ 14cf4f210

void __cdecl
FTrackablePointDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UARTrackedPoint *param_2)

{
  UARTrackedPoint *local_res10 [3];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// UpdatePlaneMesh @ 14cf666d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UpdatePlaneMesh(UMRMeshComponent *param_1,TTransform<double> *param_2,TVector<double> *param_3,
               TVector<double> *param_4)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  undefined1 auStackY_198 [32];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_148;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double dStack_108;
  double local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined1 local_e0 [16];
  double local_d0;
  TArray<FColor,TSizedDefaultAllocator<32>_> local_c8;
  TArray<FPackedNormal,TSizedDefaultAllocator<32>_> local_b8;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_a8;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80;
  TQuat<double> local_68;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if ((param_1 == (UMRMeshComponent *)0x0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("MeshComponent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AugmentedReality\\Private\\ARComponent.cpp"
                         ,0x172,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,4,&local_148.AllocatorInstance,0,&local_148.ArrayMax);
  local_128 = (param_3->field0_0x0)._s_0.X + (param_4->field0_0x0)._s_0.X;
  dStack_120 = (param_4->field0_0x0)._s_0.Y + (param_3->field0_0x0)._s_0.Y;
  local_118 = (param_3->field0_0x0)._s_0.Z;
  if (((local_148.AllocatorInstance.Data <= (FScriptContainerElement *)&local_128) &&
      ((FScriptContainerElement *)&local_128 <
       local_148.AllocatorInstance.Data + (longlong)local_148.ArrayMax * 0x18)) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = local_148.ArrayNum;
  if (local_148.ArrayNum == local_148.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&local_148.AllocatorInstance,&local_148.ArrayMax);
  }
  iVar1 = iVar5 + 1;
  *(double *)(local_148.AllocatorInstance.Data + (longlong)iVar5 * 0x18) = local_128;
  *(double *)(local_148.AllocatorInstance.Data + (longlong)iVar5 * 0x18 + 8) = dStack_120;
  *(double *)(local_148.AllocatorInstance.Data + (longlong)iVar5 * 0x18 + 0x10) = local_118;
  local_110 = (param_3->field0_0x0)._s_0.X + (param_4->field0_0x0)._s_0.X;
  dStack_108 = (param_3->field0_0x0)._s_0.Y - (param_4->field0_0x0)._s_0.Y;
  local_100 = (param_3->field0_0x0)._s_0.Z;
  local_148.ArrayNum = iVar1;
  if (((local_148.AllocatorInstance.Data <= (FScriptContainerElement *)&local_110) &&
      ((FScriptContainerElement *)&local_110 <
       local_148.AllocatorInstance.Data + (longlong)local_148.ArrayMax * 0x18)) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_148.ArrayNum == local_148.ArrayMax) {
    local_148.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_148.AllocatorInstance,&local_148.ArrayMax);
  }
  iVar5 = local_148.ArrayNum + 1;
  *(double *)(local_148.AllocatorInstance.Data + (longlong)local_148.ArrayNum * 0x18) = local_110;
  *(double *)(local_148.AllocatorInstance.Data + (longlong)local_148.ArrayNum * 0x18 + 8) =
       dStack_108;
  *(double *)(local_148.AllocatorInstance.Data + (longlong)local_148.ArrayNum * 0x18 + 0x10) =
       local_100;
  dVar3 = (double)CONCAT44(*(uint *)((longlong)&param_4->field0_0x0 + 0xc) ^ _UNK_15066df7c,
                           *(uint *)((longlong)&param_4->field0_0x0 + 8) ^ _UNK_15066df78) +
          (param_3->field0_0x0)._s_0.Y;
  local_d0 = (param_3->field0_0x0)._s_0.Z;
  local_e0._8_4_ = SUB84(dVar3,0);
  local_e0._0_8_ =
       (double)CONCAT44(*(uint *)((longlong)&param_4->field0_0x0 + 4) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        *(uint *)&param_4->field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000
                       ) + (param_3->field0_0x0)._s_0.X;
  local_e0._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_148.ArrayNum = iVar5;
  if (((local_148.AllocatorInstance.Data <= (FScriptContainerElement *)local_e0) &&
      ((FScriptContainerElement *)local_e0 <
       local_148.AllocatorInstance.Data + (longlong)local_148.ArrayMax * 0x18)) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_148.ArrayNum == local_148.ArrayMax) {
    local_148.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_148.AllocatorInstance,&local_148.ArrayMax);
  }
  iVar5 = local_148.ArrayNum + 1;
  *(undefined8 *)(local_148.AllocatorInstance.Data + (longlong)local_148.ArrayNum * 0x18) =
       local_e0._0_8_;
  *(undefined8 *)(local_148.AllocatorInstance.Data + (longlong)local_148.ArrayNum * 0x18 + 8) =
       local_e0._8_8_;
  *(double *)(local_148.AllocatorInstance.Data + (longlong)local_148.ArrayNum * 0x18 + 0x10) =
       local_d0;
  local_f8 = (param_3->field0_0x0)._s_0.X - (param_4->field0_0x0)._s_0.X;
  dStack_f0 = (param_4->field0_0x0)._s_0.Y + (param_3->field0_0x0)._s_0.Y;
  local_e8 = (param_3->field0_0x0)._s_0.Z;
  local_148.ArrayNum = iVar5;
  if (((local_148.AllocatorInstance.Data <= (FScriptContainerElement *)&local_f8) &&
      ((FScriptContainerElement *)&local_f8 <
       local_148.AllocatorInstance.Data + (longlong)local_148.ArrayMax * 0x18)) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = local_148.ArrayNum;
  if (local_148.ArrayNum == local_148.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&local_148.AllocatorInstance,&local_148.ArrayMax);
  }
  local_48 = 0;
  local_148.ArrayNum = iVar5 + 1;
  uStack_44 = 1;
  uStack_40 = 2;
  uStack_3c = 2;
  local_38 = 3;
  *(double *)(local_148.AllocatorInstance.Data + (longlong)iVar5 * 0x18) = local_f8;
  *(double *)(local_148.AllocatorInstance.Data + (longlong)iVar5 * 0x18 + 8) = dStack_f0;
  *(double *)(local_148.AllocatorInstance.Data + (longlong)iVar5 * 0x18 + 0x10) = local_e8;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 6;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,6,0,&local_138.AllocatorInstance,6,&local_138.ArrayMax);
  *(ulonglong *)local_138.AllocatorInstance.Data = CONCAT44(uStack_44,local_48);
  *(ulonglong *)(local_138.AllocatorInstance.Data + 8) = CONCAT44(uStack_3c,uStack_40);
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)(local_138.AllocatorInstance.Data + 0x10) = local_38;
  local_98._s_0.X = (param_2->Scale3D).XY.m128d_f64[0];
  local_98._s_0.Y = (param_2->Scale3D).XY.m128d_f64[1];
  local_98._s_0.Z = (param_2->Scale3D).ZW.m128d_f64[0];
  local_68.Z = (param_2->Rotation).ZW.m128d_f64[0];
  local_68.W = (param_2->Rotation).ZW.m128d_f64[1];
  local_68.X = (param_2->Rotation).XY.m128d_f64[0];
  local_68.Y = (param_2->Rotation).XY.m128d_f64[1];
  local_80._s_0.X = (param_2->Translation).XY.m128d_f64[0];
  local_80._s_0.Y = (param_2->Translation).XY.m128d_f64[1];
  local_80._s_0.Z = (param_2->Translation).ZW.m128d_f64[0];
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  UMRMeshComponent::UpdateMesh
            (param_1,(TVector<double> *)&local_80._s_0,&local_68,(TVector<double> *)&local_98._s_0,
             &local_148,&local_138,&local_a8,&local_b8,&local_c8);
  if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.AllocatorInstance.Data);
  }
  return;
}

// Z_Construct_UClass_AAROriginActor_NoRegister @ 14cf695f0

UClass * __cdecl Z_Construct_UClass_AAROriginActor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AAROriginActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"AROriginActor",
               &Z_Registration_Info_UClass_AAROriginActor.InnerSingleton,
               AAROriginActor::StaticRegisterNativesAAROriginActor,0x2c0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AAROriginActor>,InternalVTableHelperCtorCaller<AAROriginActor>,
               local_res8,AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AAROriginActor.InnerSingleton;
}

// Z_Construct_UClass_AARSharedWorldGameMode_NoRegister @ 14cf696b0

UClass * __cdecl Z_Construct_UClass_AARSharedWorldGameMode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AARSharedWorldGameMode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARSharedWorldGameMode",
               &Z_Registration_Info_UClass_AARSharedWorldGameMode.InnerSingleton,
               AARSharedWorldGameMode::StaticRegisterNativesAARSharedWorldGameMode,0x408,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<AARSharedWorldGameMode>,
               InternalVTableHelperCtorCaller<AARSharedWorldGameMode>,local_res8,
               AGameMode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AARSharedWorldGameMode.InnerSingleton;
}

// Z_Construct_UClass_AARSharedWorldPlayerController_NoRegister @ 14cf69770

UClass * __cdecl Z_Construct_UClass_AARSharedWorldPlayerController_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AARSharedWorldPlayerController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARSharedWorldPlayerController",
               &Z_Registration_Info_UClass_AARSharedWorldPlayerController.InnerSingleton,
               AARSharedWorldPlayerController::StaticRegisterNativesAARSharedWorldPlayerController,
               0x790,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<AARSharedWorldPlayerController>,
               InternalVTableHelperCtorCaller<AARSharedWorldPlayerController>,local_res8,
               APlayerController::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AARSharedWorldPlayerController.InnerSingleton;
}

// Z_Construct_UClass_AARSkyLight_NoRegister @ 14cf69830

UClass * __cdecl Z_Construct_UClass_AARSkyLight_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AARSkyLight.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARSkyLight",
               &Z_Registration_Info_UClass_AARSkyLight.InnerSingleton,
               AARSkyLight::StaticRegisterNativesAARSkyLight,0x2e0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AARSkyLight>,
               InternalVTableHelperCtorCaller<AARSkyLight>,local_res8,ASkyLight::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AARSkyLight.InnerSingleton;
}

// Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy_NoRegister @ 14cf698f0

UClass * __cdecl Z_Construct_UClass_UARBaseAsyncTaskBlueprintProxy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARBaseAsyncTaskBlueprintProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARBaseAsyncTaskBlueprintProxy",
               &Z_Registration_Info_UClass_UARBaseAsyncTaskBlueprintProxy.InnerSingleton,
               UARBaseAsyncTaskBlueprintProxy::StaticRegisterNativesUARBaseAsyncTaskBlueprintProxy,
               0x50,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UARBaseAsyncTaskBlueprintProxy>,
               InternalVTableHelperCtorCaller<UARBaseAsyncTaskBlueprintProxy>,local_res8,
               UBlueprintAsyncActionBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARBaseAsyncTaskBlueprintProxy.InnerSingleton;
}

// Z_Construct_UClass_UARBasicLightEstimate_NoRegister @ 14cf699b0

UClass * __cdecl Z_Construct_UClass_UARBasicLightEstimate_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARBasicLightEstimate.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARBasicLightEstimate",
               &Z_Registration_Info_UClass_UARBasicLightEstimate.InnerSingleton,
               UARBasicLightEstimate::StaticRegisterNativesUARBasicLightEstimate,0x40,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UARBasicLightEstimate>,
               InternalVTableHelperCtorCaller<UARBasicLightEstimate>,local_res8,
               UARLightEstimate::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARBasicLightEstimate.InnerSingleton;
}

// Z_Construct_UClass_UARBlueprintLibrary_NoRegister @ 14cf69a70

UClass * __cdecl Z_Construct_UClass_UARBlueprintLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARBlueprintLibrary",
               &Z_Registration_Info_UClass_UARBlueprintLibrary.InnerSingleton,
               UARBlueprintLibrary::StaticRegisterNativesUARBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UARBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UARBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARBlueprintLibrary.InnerSingleton;
}

// Z_Construct_UClass_UARGeoAnchor_NoRegister @ 14cf69b30

UClass * __cdecl Z_Construct_UClass_UARGeoAnchor_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARGeoAnchor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARGeoAnchor",
               &Z_Registration_Info_UClass_UARGeoAnchor.InnerSingleton,
               UARGeoAnchor::StaticRegisterNativesUARGeoAnchor,0x170,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UARGeoAnchor>,
               InternalVTableHelperCtorCaller<UARGeoAnchor>,local_res8,
               UARTrackedGeometry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARGeoAnchor.InnerSingleton;
}

// Z_Construct_UClass_UARLifeCycleComponent_NoRegister @ 14cf69bf0

UClass * __cdecl Z_Construct_UClass_UARLifeCycleComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARLifeCycleComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARLifeCycleComponent",
               &Z_Registration_Info_UClass_UARLifeCycleComponent.InnerSingleton,
               UARLifeCycleComponent::StaticRegisterNativesUARLifeCycleComponent,0x290,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UARLifeCycleComponent>,
               InternalVTableHelperCtorCaller<UARLifeCycleComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARLifeCycleComponent.InnerSingleton;
}

// Z_Construct_UClass_UARMeshGeometry_NoRegister @ 14cf69cb0

UClass * __cdecl Z_Construct_UClass_UARMeshGeometry_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARMeshGeometry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARMeshGeometry",
               &Z_Registration_Info_UClass_UARMeshGeometry.InnerSingleton,
               UARMeshGeometry::StaticRegisterNativesUARMeshGeometry,0x160,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UARMeshGeometry>,
               InternalVTableHelperCtorCaller<UARMeshGeometry>,local_res8,
               UARTrackedGeometry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARMeshGeometry.InnerSingleton;
}

// Z_Construct_UClass_UARTextureCameraDepth_NoRegister @ 14cf69d70

UClass * __cdecl Z_Construct_UClass_UARTextureCameraDepth_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTextureCameraDepth.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTextureCameraDepth",
               &Z_Registration_Info_UClass_UARTextureCameraDepth.InnerSingleton,
               UARTextureCameraDepth::StaticRegisterNativesUARTextureCameraDepth,0x178,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UARTextureCameraDepth>,
               InternalVTableHelperCtorCaller<UARTextureCameraDepth>,local_res8,
               UARTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTextureCameraDepth.InnerSingleton;
}

// Z_Construct_UClass_UARTextureCameraImage_NoRegister @ 14cf69e30

UClass * __cdecl Z_Construct_UClass_UARTextureCameraImage_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTextureCameraImage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTextureCameraImage",
               &Z_Registration_Info_UClass_UARTextureCameraImage.InnerSingleton,
               UARTextureCameraImage::StaticRegisterNativesUARTextureCameraImage,0x170,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UARTextureCameraImage>,
               InternalVTableHelperCtorCaller<UARTextureCameraImage>,local_res8,
               UARTexture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTextureCameraImage.InnerSingleton;
}

// Z_Construct_UClass_UARTraceResultDummy_NoRegister @ 14cf69ef0

UClass * __cdecl Z_Construct_UClass_UARTraceResultDummy_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTraceResultDummy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTraceResultDummy",
               &Z_Registration_Info_UClass_UARTraceResultDummy.InnerSingleton,
               UARTraceResultDummy::StaticRegisterNativesUARTraceResultDummy,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UARTraceResultDummy>,
               InternalVTableHelperCtorCaller<UARTraceResultDummy>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTraceResultDummy.InnerSingleton;
}

// Z_Construct_UClass_UARTraceResultLibrary_NoRegister @ 14cf69fa0

UClass * __cdecl Z_Construct_UClass_UARTraceResultLibrary_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTraceResultLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTraceResultLibrary",
               &Z_Registration_Info_UClass_UARTraceResultLibrary.InnerSingleton,
               UARTraceResultLibrary::StaticRegisterNativesUARTraceResultLibrary,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UARTraceResultLibrary>,
               InternalVTableHelperCtorCaller<UARTraceResultLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTraceResultLibrary.InnerSingleton;
}

// Z_Construct_UClass_UARTrackableNotifyComponent_NoRegister @ 14cf6a060

UClass * __cdecl Z_Construct_UClass_UARTrackableNotifyComponent_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTrackableNotifyComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTrackableNotifyComponent",
               &Z_Registration_Info_UClass_UARTrackableNotifyComponent.InnerSingleton,
               UARTrackableNotifyComponent::StaticRegisterNativesUARTrackableNotifyComponent,0x2b8,8
               ,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UARTrackableNotifyComponent>,
               InternalVTableHelperCtorCaller<UARTrackableNotifyComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTrackableNotifyComponent.InnerSingleton;
}

// Z_Construct_UClass_UARTrackedPose_NoRegister @ 14cf6a120

UClass * __cdecl Z_Construct_UClass_UARTrackedPose_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTrackedPose.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTrackedPose",
               &Z_Registration_Info_UClass_UARTrackedPose.InnerSingleton,
               UARTrackedPose::StaticRegisterNativesUARTrackedPose,0x1b0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UARTrackedPose>,
               InternalVTableHelperCtorCaller<UARTrackedPose>,local_res8,
               UARTrackedGeometry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTrackedPose.InnerSingleton;
}

// Z_Construct_UClass_UARTrackedQRCode_NoRegister @ 14cf6a1e0

UClass * __cdecl Z_Construct_UClass_UARTrackedQRCode_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTrackedQRCode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTrackedQRCode",
               &Z_Registration_Info_UClass_UARTrackedQRCode.InnerSingleton,
               UARTrackedQRCode::StaticRegisterNativesUARTrackedQRCode,400,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UARTrackedQRCode>,
               InternalVTableHelperCtorCaller<UARTrackedQRCode>,local_res8,
               UARTrackedImage::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTrackedQRCode.InnerSingleton;
}

// Z_Construct_UClass_UARTypesDummyClass_NoRegister @ 14cf6a2a0

UClass * __cdecl Z_Construct_UClass_UARTypesDummyClass_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTypesDummyClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTypesDummyClass",
               &Z_Registration_Info_UClass_UARTypesDummyClass.InnerSingleton,
               UARTypesDummyClass::StaticRegisterNativesUARTypesDummyClass,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UARTypesDummyClass>,
               InternalVTableHelperCtorCaller<UARTypesDummyClass>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTypesDummyClass.InnerSingleton;
}

// Z_Construct_UEnum_AugmentedReality_EARSessionConfigFlags @ 14cf6a350

UEnum * __cdecl Z_Construct_UEnum_AugmentedReality_EARSessionConfigFlags(void)

{
  if (Z_Registration_Info_UEnum_EARSessionConfigFlags.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EARSessionConfigFlags.InnerSingleton,
               &Z_Construct_UEnum_AugmentedReality_EARSessionConfigFlags_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EARSessionConfigFlags.InnerSingleton;
}

// Z_Construct_UScriptStruct_FARSharedWorldReplicationState @ 14cf6a390

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FARSharedWorldReplicationState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FARSharedWorldReplicationState.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FARSharedWorldReplicationState.InnerSingleton,
               &Z_Construct_UScriptStruct_FARSharedWorldReplicationState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FARSharedWorldReplicationState.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FARSharedWorldReplicationState.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FTrackedGeometryGroup @ 14cf6a410

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTrackedGeometryGroup(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTrackedGeometryGroup.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTrackedGeometryGroup.InnerSingleton,
               &Z_Construct_UScriptStruct_FTrackedGeometryGroup_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTrackedGeometryGroup.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FTrackedGeometryGroup.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// IMPLEMENT_MODULE_AugmentedReality @ 14cf75260

void __cdecl IMPLEMENT_MODULE_AugmentedReality(void)

{
  return;
}

// OnSpawnARActorDelegate'' @ 150453f10

void __cdecl `dynamic_atexit_destructor_for_'UARLifeCycleComponent::OnSpawnARActorDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UARLifeCycleComponent::OnSpawnARActorDelegate._8_8_,
             UARLifeCycleComponent::OnSpawnARActorDelegate._16_4_);
  if (UARLifeCycleComponent::OnSpawnARActorDelegate._8_8_ != 0) {
    FMemory::Free((void *)UARLifeCycleComponent::OnSpawnARActorDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UARLifeCycleComponent::OnSpawnARActorDelegate);
  return;
}

// RegisteredARSystem'' @ 150453f50

void __cdecl
`dynamic_atexit_destructor_for_'UARBaseAsyncTaskBlueprintProxy::RegisteredARSystem__(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FWeakReferencer<1> FVar3;
  
  FVar3.ReferenceController =
       UARBaseAsyncTaskBlueprintProxy::RegisteredARSystem.WeakReferenceCount.ReferenceController;
  if (UARBaseAsyncTaskBlueprintProxy::RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(UARBaseAsyncTaskBlueprintProxy::RegisteredARSystem.WeakReferenceCount.
              ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000150453f73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((FVar3.ReferenceController)->_padding_ + 8))(FVar3.ReferenceController,1);
      return;
    }
  }
  return;
}

// RegisteredARSystem'' @ 150453f80

void __cdecl `dynamic_atexit_destructor_for_'UARBlueprintLibrary::RegisteredARSystem__(void)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FWeakReferencer<1> FVar3;
  
  FVar3.ReferenceController =
       UARBlueprintLibrary::RegisteredARSystem.WeakReferenceCount.ReferenceController;
  if (UARBlueprintLibrary::RegisteredARSystem.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(UARBlueprintLibrary::RegisteredARSystem.WeakReferenceCount.ReferenceController)->
              WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000150453fa3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((FVar3.ReferenceController)->_padding_ + 8))(FVar3.ReferenceController,1);
      return;
    }
  }
  return;
}

// RequestDestroyARActorDelegate'' @ 150453fb0

void __cdecl
`dynamic_atexit_destructor_for_'UARLifeCycleComponent::RequestDestroyARActorDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UARLifeCycleComponent::RequestDestroyARActorDelegate._8_8_,
             UARLifeCycleComponent::RequestDestroyARActorDelegate._16_4_);
  if (UARLifeCycleComponent::RequestDestroyARActorDelegate._8_8_ != 0) {
    FMemory::Free((void *)UARLifeCycleComponent::RequestDestroyARActorDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UARLifeCycleComponent::RequestDestroyARActorDelegate);
  return;
}

// RequestSpawnARActorDelegate'' @ 150453ff0

void __cdecl
`dynamic_atexit_destructor_for_'UARLifeCycleComponent::RequestSpawnARActorDelegate__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             UARLifeCycleComponent::RequestSpawnARActorDelegate._8_8_,
             UARLifeCycleComponent::RequestSpawnARActorDelegate._16_4_);
  if (UARLifeCycleComponent::RequestSpawnARActorDelegate._8_8_ != 0) {
    FMemory::Free((void *)UARLifeCycleComponent::RequestSpawnARActorDelegate._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&UARLifeCycleComponent::RequestSpawnARActorDelegate);
  return;
}

// `dynamic_atexit_destructor_for_'AltitudeSourceNames'' @ 150454030

void __cdecl
`UARGeoAnchorComponent::TickComponent'::__l5::_dynamic_atexit_destructor_for__AltitudeSourceNames__
          (void)

{
  AltitudeSourceNames._72_4_ = 0;
  if (AltitudeSourceNames._64_8_ != 0) {
    FMemory::Free((void *)AltitudeSourceNames._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EARAltitudeSource,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EARAltitudeSource,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&AltitudeSourceNames);
  return;
}

// `dynamic_atexit_destructor_for_'CVarFaceComponentDebugMode'' @ 150454070

void __cdecl _dynamic_atexit_destructor_for__CVarFaceComponentDebugMode__(void)

{
  CVarFaceComponentDebugMode._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarFaceComponentDebugMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarGeoAnchorComponentDebugMode'' @ 150454090

void __cdecl _dynamic_atexit_destructor_for__CVarGeoAnchorComponentDebugMode__(void)

{
  CVarGeoAnchorComponentDebugMode._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarGeoAnchorComponentDebugMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarImageComponentDebugMode'' @ 1504540b0

void __cdecl _dynamic_atexit_destructor_for__CVarImageComponentDebugMode__(void)

{
  CVarImageComponentDebugMode._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarImageComponentDebugMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPlaneComponentDebugMode'' @ 1504540d0

void __cdecl _dynamic_atexit_destructor_for__CVarPlaneComponentDebugMode__(void)

{
  CVarPlaneComponentDebugMode._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPlaneComponentDebugMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarPoseComponentDebugMode'' @ 1504540f0

void __cdecl _dynamic_atexit_destructor_for__CVarPoseComponentDebugMode__(void)

{
  CVarPoseComponentDebugMode._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarPoseComponentDebugMode);
  return;
}

// `dynamic_atexit_destructor_for_'CVarQRCodeComponentDebugMode'' @ 150454110

void __cdecl _dynamic_atexit_destructor_for__CVarQRCodeComponentDebugMode__(void)

{
  CVarQRCodeComponentDebugMode._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarQRCodeComponentDebugMode);
  return;
}

// `dynamic_atexit_destructor_for_'ClassificationColors'' @ 150454130

void __cdecl _dynamic_atexit_destructor_for__ClassificationColors__(void)

{
  ClassificationColors._72_4_ = 0;
  if (ClassificationColors._64_8_ != 0) {
    FMemory::Free((void *)ClassificationColors._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EARObjectClassification,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EARObjectClassification,FLinearColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&ClassificationColors);
  return;
}

// `dynamic_atexit_destructor_for_'ClassificationNames'' @ 150454170

void __cdecl
`UARPlaneComponent::TickComponent'::__l12::_dynamic_atexit_destructor_for__ClassificationNames__
          (void)

{
  ClassificationNames._72_4_ = 0;
  if (ClassificationNames._64_8_ != 0) {
    FMemory::Free((void *)ClassificationNames._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EARObjectClassification,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EARObjectClassification,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&ClassificationNames);
  return;
}

// `dynamic_atexit_destructor_for_'LogAR'' @ 1504541b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogAR__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogAR);
  return;
}

// `dynamic_atexit_destructor_for_'LogMrMesh'' @ 1504541d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMrMesh__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMrMesh);
  return;
}

