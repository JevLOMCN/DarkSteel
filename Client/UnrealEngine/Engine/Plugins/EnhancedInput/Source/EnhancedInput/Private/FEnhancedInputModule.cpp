// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 14

// StartupModule @ 14a6b9fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall FEnhancedInputModule::StartupModule(FEnhancedInputModule *this)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  IConsoleManager *pIVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UPackage *pUVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  FUObjectItem *this_00;
  FName *pFVar12;
  FText *pFVar13;
  FKeyDetails *pFVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  longlong *plVar17;
  undefined1 auStackY_428 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3c8;
  FDelegateAllocation local_3c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_3b0;
  FDelegateAllocation local_3a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_398;
  FDelegateAllocation local_390;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_380;
  FDelegateAllocation local_378;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  FName local_340;
  undefined1 local_338 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_320;
  ForAnyElementType FStack_318;
  ulonglong local_310;
  undefined1 local_308 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_2f0;
  ForAnyElementType FStack_2e8;
  ulonglong local_2e0;
  FText local_2d8;
  FKey local_2c8;
  FDestructionSentinel local_2b0;
  FDestructionSentinel local_298;
  FDestructionSentinel local_280;
  FDestructionSentinel local_268;
  FDestructionSentinel local_250;
  FDestructionSentinel local_238;
  FDestructionSentinel local_220;
  FDelegateAllocation *local_208;
  FDestructionSentinel local_200;
  FDelegateAllocation *local_1e8;
  FDestructionSentinel local_1e0;
  FDelegateAllocation *local_1c8;
  FDestructionSentinel local_1c0;
  FDelegateAllocation *local_1a8;
  FName local_1a0;
  undefined1 local_198 [8];
  FText local_190;
  FKeyDetails local_180;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_428;
  local_348 = 0;
  pUVar8 = UEnhancedInputLibrary::StaticClass();
  pUVar9 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar9,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar10 = UEnhancedInputLibrary::StaticClass();
  CheckIsClassChildOf_Internal(pUVar10,pUVar8);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar8);
  local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_b8._56_8_ = (UPackage *)0x0;
  local_b8._16_4_ = 0;
  local_b8._20_4_ = 0;
  local_b8._24_4_ = RF_NoFlags;
  local_b8._40_8_ = (UObject *)0x0;
  local_b8[0x20] = false;
  local_b8._8_8_ = pUVar9;
  pUVar11 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar17 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar17 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  this->Library = (UEnhancedInputLibrary *)pUVar11;
  this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar11->field_0xc);
  FUObjectItem::SetRootFlags(this_00,RootSet);
  ::FName::FName(&local_340,L"EnhancedInput");
  pFVar12 = ::FName::FName(&local_1a0,L"GraphEditor.KeyEvent_16x");
  FVar1 = *pFVar12;
  pFVar13 = FText::AsLocalizable_Advanced_LocText
                      (&local_2d8,L"EnhancedInput",L"EnhancedInputSubCateogry",L"Enhanced Input");
  EKeys::AddMenuCategoryDisplayInfo(local_340,pFVar13,FVar1);
  FText::FText((FText *)local_308);
  local_308[0x10] = false;
  local_2e0 = 0;
  local_2f0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_2e8.Data = (FScriptContainerElement *)0x0;
  pFVar13 = FText::AsLocalizable_Advanced_LocText
                      (&local_190,L"EnhancedInput",L"ComboKey",L"Combo Key");
  FText::FText((FText *)local_338,pFVar13);
  local_338[0x10] = true;
  local_2c8.KeyName = FEnhancedInputKeys::ComboKey.KeyName;
  local_2c8.KeyDetails.Object = FEnhancedInputKeys::ComboKey.KeyDetails.Object;
  local_310 = 0;
  local_2c8.KeyDetails.SharedReferenceCount.ReferenceController =
       FEnhancedInputKeys::ComboKey.KeyDetails.SharedReferenceCount.ReferenceController;
  local_320.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_318.Data = (FScriptContainerElement *)0x0;
  if (FEnhancedInputKeys::ComboKey.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FEnhancedInputKeys::ComboKey.KeyDetails.SharedReferenceCount.ReferenceController)->
    SharedReferenceCount =
         (atomic<int>)
         ((int)(FEnhancedInputKeys::ComboKey.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar14 = FKeyDetails::FKeyDetails
                      (&local_180,&local_2c8,(TAttribute<FText> *)local_338,0x100,local_340,
                       (TAttribute<FText> *)local_308);
  EKeys::AddKey(pFVar14);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_180.ShortDisplayName.Getter);
  if (local_180.ShortDisplayName.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_180.ShortDisplayName.Value.TextData.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_180.LongDisplayName.Getter);
  if (local_180.LongDisplayName.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_180.LongDisplayName.Value.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_180.VirtualKeyValue.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_180.PairedAxisKey.KeyDetails.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_180.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_320,(FWriteAccessScope *)&local_2b0);
  if (((int)local_310 != 0) && (FStack_318.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_318.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_318,0,0,0x10);
    local_310 = local_310 & 0xffffffff00000000;
  }
  if (local_2b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2b0.Accessor,&local_2b0);
  }
  if (FStack_318.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_318.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_320.AccessDetector);
  if ((ITextData *)local_338._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_338._0_8_ + 0x10))();
  }
  if (local_190.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_190.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_2f0,(FWriteAccessScope *)&local_298);
  if (((int)local_2e0 != 0) && (FStack_2e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2e8,0,0,0x10);
    local_2e0 = local_2e0 & 0xffffffff00000000;
  }
  if (local_298.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_298.Accessor,&local_298);
  }
  if (FStack_2e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_2f0.AccessDetector);
  if ((ITextData *)local_308._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_308._0_8_ + 0x10))();
  }
  TMulticastDelegateRegistration<void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
  ::AddStatic<>((TMulticastDelegateRegistration<void___cdecl(AHUD_*,UCanvas_*,FDebugDisplayInfo_const_&,float_&,float_&),FDefaultTSDelegateUserPolicy>
                 *)&AHUD::OnShowDebugInfo,
                (_func___cdecl_void_AHUD_ptr_UCanvas_ptr_FDebugDisplayInfo_ptr_float_ptr_float_ptr *
                )local_198);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = local_2d8._12_4_;
  pIVar4 = IConsoleManager::Singleton;
  local_3c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_3c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_3c0.DelegateSize = 0;
  pcVar3 = *(code **)((longlong)*IConsoleManager::Singleton + 0x90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3c8,(FWriteAccessScope *)&local_220);
  local_208 = &local_3c0;
  puVar15 = UE::Core::Private::DelegateAllocate(0x30,&local_3c0);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar16;
    puVar15[4] = EnableForcedAction;
    puVar15[5] = (ulonglong)(uint)uVar5 << 0x20;
    *puVar15 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFEnhancedInputModule____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar15[3] = this;
    if ((puVar15[4] == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (local_220.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_220.Accessor,&local_220);
  }
  local_368 = (*pcVar3)(pIVar4,L"Input.+action",
                        L"Provide the named action with a constant input value each frame",
                        &local_3c8);
  pFVar2 = (this->ConsoleCommands).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_368) &&
      ((FScriptContainerElement *)&local_368 <
       pFVar2 + (longlong)(this->ConsoleCommands).ArrayMax * 8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar7 = (this->ConsoleCommands).ArrayNum;
  if (iVar7 == (this->ConsoleCommands).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->ConsoleCommands).AllocatorInstance,
                       &(this->ConsoleCommands).ArrayMax);
  }
  (this->ConsoleCommands).ArrayNum = iVar7 + 1;
  *(undefined8 *)((this->ConsoleCommands).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_368;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3c8,(FWriteAccessScope *)&local_280);
  if ((local_3c0.DelegateSize != 0) &&
     (local_3c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_3c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_3c0,0,0,0x10);
    local_3c0.DelegateSize = 0;
  }
  if (local_280.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_280.Accessor,&local_280);
  }
  if (local_3c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_3c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3c8.AccessDetector);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = local_2d8._12_4_;
  pIVar4 = IConsoleManager::Singleton;
  local_3b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_3a8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_3a8.DelegateSize = 0;
  pcVar3 = *(code **)((longlong)*IConsoleManager::Singleton + 0x90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3b0,(FWriteAccessScope *)&local_200);
  local_1e8 = &local_3a8;
  puVar15 = UE::Core::Private::DelegateAllocate(0x30,&local_3a8);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar16;
    puVar15[4] = DisableForcedAction;
    puVar15[5] = (ulonglong)(uint)uVar5 << 0x20;
    *puVar15 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFEnhancedInputModule____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar15[3] = this;
    if ((puVar15[4] == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (local_200.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_200.Accessor,&local_200);
  }
  local_360 = (*pcVar3)(pIVar4,L"Input.-action",L"Stop forcing the named action value each frame",
                        &local_3b0);
  pFVar2 = (this->ConsoleCommands).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_360) &&
      ((FScriptContainerElement *)&local_360 <
       pFVar2 + (longlong)(this->ConsoleCommands).ArrayMax * 8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar7 = (this->ConsoleCommands).ArrayNum;
  if (iVar7 == (this->ConsoleCommands).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->ConsoleCommands).AllocatorInstance,
                       &(this->ConsoleCommands).ArrayMax);
  }
  (this->ConsoleCommands).ArrayNum = iVar7 + 1;
  *(undefined8 *)((this->ConsoleCommands).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_360;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_3b0,(FWriteAccessScope *)&local_268);
  if ((local_3a8.DelegateSize != 0) &&
     (local_3a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_3a8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_3a8,0,0,0x10);
    local_3a8.DelegateSize = 0;
  }
  if (local_268.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_268.Accessor,&local_268);
  }
  if (local_3a8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_3a8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_3b0.AccessDetector);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = local_2d8._12_4_;
  pIVar4 = IConsoleManager::Singleton;
  local_398.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_390.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_390.DelegateSize = 0;
  pcVar3 = *(code **)((longlong)*IConsoleManager::Singleton + 0x90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_398,(FWriteAccessScope *)&local_1e0);
  local_1c8 = &local_390;
  puVar15 = UE::Core::Private::DelegateAllocate(0x30,&local_390);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar16;
    puVar15[4] = EnableForcedKey;
    puVar15[5] = (ulonglong)(uint)uVar5 << 0x20;
    *puVar15 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFEnhancedInputModule____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar15[3] = this;
    if ((puVar15[4] == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (local_1e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e0.Accessor,&local_1e0);
  }
  local_358 = (*pcVar3)(pIVar4,L"Input.+key",
                        L"Provide the named key with a constant input value each frame",&local_398);
  pFVar2 = (this->ConsoleCommands).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_358) &&
      ((FScriptContainerElement *)&local_358 <
       pFVar2 + (longlong)(this->ConsoleCommands).ArrayMax * 8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar7 = (this->ConsoleCommands).ArrayNum;
  if (iVar7 == (this->ConsoleCommands).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->ConsoleCommands).AllocatorInstance,
                       &(this->ConsoleCommands).ArrayMax);
  }
  (this->ConsoleCommands).ArrayNum = iVar7 + 1;
  *(undefined8 *)((this->ConsoleCommands).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_358;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_398,(FWriteAccessScope *)&local_250);
  if ((local_390.DelegateSize != 0) &&
     (local_390.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_390.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_390,0,0,0x10);
    local_390.DelegateSize = 0;
  }
  if (local_250.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_250.Accessor,&local_250);
  }
  if (local_390.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_390.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_398.AccessDetector);
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar4 = IConsoleManager::Singleton;
  local_380.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_378.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_378.DelegateSize = 0;
  pcVar3 = *(code **)((longlong)*IConsoleManager::Singleton + 0x90);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_380,(FWriteAccessScope *)&local_1c0);
  local_1a8 = &local_378;
  puVar15 = UE::Core::Private::DelegateAllocate(0x30,&local_378);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar16;
    puVar15[4] = DisableForcedKey;
    puVar15[5] = (ulonglong)(uint)local_2d8._12_4_ << 0x20;
    *puVar15 = &
               ___7__TBaseRawMethodDelegateInstance__0A_VFEnhancedInputModule____A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA_____PEAVUWorld___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar15[3] = this;
    if ((puVar15[4] == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (local_1c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c0.Accessor,&local_1c0);
  }
  local_350 = (*pcVar3)(pIVar4,L"Input.-key",L"Stop forcing the named key each frame",&local_380);
  pFVar2 = (this->ConsoleCommands).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_350) &&
      ((FScriptContainerElement *)&local_350 <
       pFVar2 + (longlong)(this->ConsoleCommands).ArrayMax * 8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar7 = (this->ConsoleCommands).ArrayNum;
  if (iVar7 == (this->ConsoleCommands).ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->ConsoleCommands).AllocatorInstance,
                       &(this->ConsoleCommands).ArrayMax);
  }
  (this->ConsoleCommands).ArrayNum = iVar7 + 1;
  *(undefined8 *)((this->ConsoleCommands).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_350;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_380,(FWriteAccessScope *)&local_238);
  if ((local_378.DelegateSize != 0) &&
     (local_378.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_378.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_378,0,0,0x10);
    local_378.DelegateSize = 0;
  }
  if (local_238.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_238.Accessor,&local_238);
  }
  if (local_378.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_378.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_380.AccessDetector);
  return;
}

// ShutdownModule @ 14a6bacc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FEnhancedInputModule::ShutdownModule(FEnhancedInputModule *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  FUObjectItem *this_00;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar6 = (this->ConsoleCommands).AllocatorInstance.Data;
  iVar2 = (this->ConsoleCommands).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ConsoleCommands).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<IConsoleCommand_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar1) break;
    uVar3 = *(undefined8 *)pFVar6;
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      IConsoleManager::SetupSingleton();
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x4fb,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))(IConsoleManager::Singleton,uVar3,1);
    pFVar6 = pFVar6 + 8;
  }
  if (GExitPurge == false) {
    this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->Library->field_0xc);
    FUObjectItem::ClearRootFlags(this_00,RootSet);
  }
  this->Library = (UEnhancedInputLibrary *)0x0;
  return;
}

// Tick @ 14a6badc0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FEnhancedInputModule::Tick(FEnhancedInputModule *this,float param_1)

{
  ulong64 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  UClass *pUVar7;
  longlong lVar8;
  bool bVar9;
  float local_res8 [2];
  code *local_48;
  float *local_40;
  TObjectIterator<UEnhancedInputWorldSubsystem> local_38 [2];
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId290,"FEnhancedInputModule::Tick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\EnhancedInputModule.cpp"
               ,0x122);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId290);
  }
  uVar1._0_4_ = (this->ConsoleCommands).ArrayNum;
  uVar1._4_4_ = (this->ConsoleCommands).ArrayMax;
  if (uVar1 != GFrameCounter) {
    uVar3 = GFrameCounter._4_4_;
    (this->ConsoleCommands).ArrayNum = (undefined4)GFrameCounter;
    (this->ConsoleCommands).ArrayMax = uVar3;
    pUVar7 = UEnhancedInputDeveloperSettings::StaticClass();
    if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar7);
    }
    if ((*(byte *)((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr + 6) & 0x20) != 0) {
      local_38[0].ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38[0].ObjectArray.ArrayNum = 0;
      local_38[0].ObjectArray.ArrayMax = 0;
      local_38[0].Index = 0xffffffff;
      EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar7 = UEnhancedInputWorldSubsystem::StaticClass();
      GetObjectsOfClass(pUVar7,&local_38[0].ObjectArray,true,RF_ClassDefaultObject,
                        EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
      while( true ) {
        TObjectIterator<UEnhancedInputWorldSubsystem>::Advance(local_38);
        lVar8 = (longlong)local_38[0].Index;
        if ((local_38[0].Index < 0) || (local_38[0].ObjectArray.ArrayNum <= local_38[0].Index))
        break;
        uVar6 = 0;
        if (local_38[0].Index < local_38[0].ObjectArray.ArrayNum) {
          uVar6 = (uint)~local_38[0].Index >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UEnhancedInputWorldSubsystem::TickPlayerInput
                  (*(UEnhancedInputWorldSubsystem **)
                    (local_38[0].ObjectArray.AllocatorInstance.Data + lVar8 * 8),param_1);
      }
      if (local_38[0].ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38[0].ObjectArray.AllocatorInstance.Data);
      }
    }
    local_40 = local_res8;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`FEnhancedInputModule::Tick'::__l2::<lambda_1>,void,IEnhancedInputSubsystemInterface_*>
               ::Call;
    local_res8[0] = param_1;
    UEnhancedInputLibrary::ForEachSubsystem
              ((TFunctionRef<void___cdecl(IEnhancedInputSubsystemInterface_*)> *)&local_48);
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetTickableTickType @ 14a6baf70

ETickableTickType __thiscall FEnhancedInputModule::GetTickableTickType(FEnhancedInputModule *this)

{
  return Always;
}

// GetStatId @ 14a6baf80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall FEnhancedInputModule::GetStatId(FEnhancedInputModule *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_struct_TStatId___cdecl_FEnhancedInputModule::GetStatId(void)const___ptr64'::
       __l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_struct_TStatId___cdecl_FEnhancedInputModule::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_struct_TStatId___cdecl_FEnhancedInputModule::GetStatId(void)const___ptr64'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FEnhancedInputModule = (TAtomic<FMinimalName>)0x0;
    pFVar1 = ::FName::FName(&local_res10,"FEnhancedInputModule");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_struct_TStatId___cdecl_FEnhancedInputModule::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FEnhancedInputModule,*pFVar1,L"FEnhancedInputModule",
               "STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_struct_TStatId___cdecl_FEnhancedInputModule::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TVar2 = _StatPtr_FEnhancedInputModule;
  if (_StatPtr_FEnhancedInputModule == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FEnhancedInputModule");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &`public:_virtual_struct_TStatId___cdecl_FEnhancedInputModule::GetStatId(void)const___ptr64'
                        ::__l2::StatPtr_FEnhancedInputModule,*pFVar1,L"FEnhancedInputModule",
                       "STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,true,ST_int64,true
                       ,false,MCR_Invalid);
  }
  in_RDX->Name = TVar2;
  return (TStatId)in_RDX;
}

// IsTickableWhenPaused @ 14a6bb0f0

bool __thiscall FEnhancedInputModule::IsTickableWhenPaused(FEnhancedInputModule *this)

{
  return true;
}

// GetLibrary @ 14a6bb100

UEnhancedInputLibrary * __thiscall FEnhancedInputModule::GetLibrary(FEnhancedInputModule *this)

{
  undefined1 local_res8 [32];
  
  if (this->Library == (UEnhancedInputLibrary *)0x0) {
    `FEnhancedInputModule::GetLibrary'::__l2::<lambda_1>::operator()(local_res8);
    return this->Library;
  }
  return this->Library;
}

// DisableForcedAction @ 14a6d8b10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FEnhancedInputModule::DisableForcedAction
          (FEnhancedInputModule *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  APlayerController *this_00;
  size_t sVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  FName *pFVar8;
  ULocalPlayer *this_01;
  UEnhancedInputLocalPlayerSubsystem *pUVar9;
  int iVar10;
  wchar_t *pwVar11;
  FWeakObjectPtr local_res20;
  UObject *local_70;
  FWeakObjectPtr local_68;
  FName local_60;
  wchar_t *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  
  this_00 = UWorld::GetFirstPlayerController(param_2);
  if (this_00 == (APlayerController *)0x0) {
    return;
  }
  iVar10 = 0;
  if (param_1->ArrayNum == 0) {
    ::FString::FString(&local_48,
                       L"Expected arguments:\\n   <action> - Name of action to stop forcing");
    APlayerController::ClientMessage(this_00,&local_48,(FName)0x0,0.0);
    if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
    return;
  }
  if ((param_1->ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  pwVar11 = L"";
  if (*(int *)(pFVar1 + 8) == 0) {
    local_58 = L"";
  }
  else {
    local_58 = *(wchar_t **)pFVar1;
    if (local_58 == (wchar_t *)0x0) goto LAB_14a6d8c02;
  }
  sVar5 = wcslen(local_58);
  iVar10 = (int)sVar5;
LAB_14a6d8c02:
  iStack_50 = iVar10;
  pUVar6 = UInputAction::StaticClass();
  local_28._12_4_ = uStack_4c;
  local_28.Size = iStack_50;
  local_28.DataPtr = local_58;
  pUVar7 = StaticFindFirstObject(pUVar6,&local_28,None,Warning,L"DisableForcedAction");
  if (pUVar7 == (UObject *)0x0) {
    if ((param_1->ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) != 0) {
      pwVar11 = *(wchar_t **)pFVar1;
    }
    pFVar8 = ::FName::FName(&local_60,pwVar11);
    FVar2 = *pFVar8;
    ::FString::FString(&local_38,L"Failed to find action \'%s\'.");
    APlayerController::ClientMessage(this_00,&local_38,FVar2,0.0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  else {
    this_01 = APlayerController::GetLocalPlayer(this_00);
    if ((this_01 != (ULocalPlayer *)0x0) &&
       (pUVar9 = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(this_01),
       pUVar9 != (UEnhancedInputLocalPlayerSubsystem *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      local_res20.ObjectIndex = 0;
      local_res20.ObjectSerialNumber = 0;
      local_70 = pUVar7;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_70);
      local_68 = local_res20;
      if ((int)pUVar9->_padding_ != *(int *)((longlong)&pUVar9->_padding_ + 4)) {
        TSet<TTuple<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue,0>,FDefaultSetAllocator>
        ::RemoveImpl<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>_>
                  ((TSet<TTuple<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue,0>,FDefaultSetAllocator>
                    *)&pUVar9->_padding_,local_res20.ObjectSerialNumber ^ local_res20.ObjectIndex,
                   (TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr> *)&local_68);
      }
    }
  }
  return;
}

// DisableForcedKey @ 14a6d8da0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FEnhancedInputModule::DisableForcedKey
          (FEnhancedInputModule *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  APlayerController *this_00;
  FName *pFVar4;
  ULocalPlayer *this_01;
  UEnhancedInputLocalPlayerSubsystem *pUVar5;
  wchar_t *pwVar6;
  FName local_60;
  FString local_58;
  FString local_48;
  FKey local_38;
  FKey local_20;
  
  this_00 = UWorld::GetFirstPlayerController(param_2);
  if (this_00 != (APlayerController *)0x0) {
    if (param_1->ArrayNum == 0) {
      ::FString::FString(&local_58,L"Expected arguments:\\n   <key> - Name of key to stop forcing");
      APlayerController::ClientMessage(this_00,&local_58,(FName)0x0,0.0);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    else {
      if ((param_1->ArrayNum < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + 8) == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = *(wchar_t **)pFVar1;
      }
      pFVar4 = ::FName::FName(&local_60,pwVar6,FNAME_Find);
      local_38.KeyName = *pFVar4;
      local_38.KeyDetails.Object = (FKeyDetails *)0x0;
      local_38.KeyDetails.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      bVar3 = FKey::IsValid(&local_38);
      if (bVar3) {
        this_01 = APlayerController::GetLocalPlayer(this_00);
        if ((this_01 != (ULocalPlayer *)0x0) &&
           (pUVar5 = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(this_01),
           pUVar5 != (UEnhancedInputLocalPlayerSubsystem *)0x0)) {
          local_20.KeyName = local_38.KeyName;
          local_20.KeyDetails.Object = local_38.KeyDetails.Object;
          local_20.KeyDetails.SharedReferenceCount.ReferenceController =
               local_38.KeyDetails.SharedReferenceCount.ReferenceController;
          if (local_38.KeyDetails.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_38.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_38.KeyDetails.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          IEnhancedInputSubsystemInterface::RemoveForcedInput
                    ((IEnhancedInputSubsystemInterface *)&pUVar5->_padding_,&local_20);
        }
      }
      else {
        if ((param_1->ArrayNum < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        ::FString::PrintfImpl(&local_48,L"Failed to locate a key named \'%s\'");
        APlayerController::ClientMessage(this_00,&local_48,(FName)0x0,0.0);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.KeyDetails.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// EnableForcedAction @ 14a6d98d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FEnhancedInputModule::EnableForcedAction
          (FEnhancedInputModule *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  bool bVar5;
  APlayerController *this_00;
  UClass *pUVar6;
  size_t sVar7;
  UObject *pUVar8;
  FName *pFVar9;
  ULocalPlayer *this_01;
  UEnhancedInputLocalPlayerSubsystem *pUVar10;
  FInputActionValue *pFVar11;
  wchar_t *pwVar12;
  undefined1 auVar13 [16];
  UObject *local_128 [2];
  wchar_t *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  FString local_108;
  FString local_f8;
  UObject **local_e8;
  double *local_e0;
  FString local_d8;
  FName local_c8 [2];
  TStringView<wchar_t> local_b8 [2];
  undefined4 uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  TVector<double>_u_0 local_88;
  undefined8 uStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  undefined8 uStack_50;
  FInputActionValue local_48;
  
  this_00 = UWorld::GetFirstPlayerController(param_2);
  if (this_00 == (APlayerController *)0x0) {
    return;
  }
  if (param_1->ArrayNum == 0) {
    ::FString::FString(&local_108,
                       L"Expected arguments:\\n   <action> - Name of action to force each tick\\n   <value> - Value to apply. Valid examples are: true, 0.4, \"X=1.0, Y=-2.0\", \"X=0.1, Y=0.2, Z=0.3\""
                      );
    APlayerController::ClientMessage(this_00,&local_108,(FName)0x0,0.0);
    if (local_108.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
    return;
  }
  if ((this_00->PlayerInput).field0_0x0.DebugPtr == (UPlayerInput *)0x0) {
LAB_14a6d9b73:
    ::FString::FString(&local_d8,L"Player controller is not using the Enhanced Input system.");
    APlayerController::ClientMessage(this_00,&local_d8,(FName)0x0,0.0);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    return;
  }
  pUVar6 = UEnhancedPlayerInput::StaticClass();
  bVar5 = FObjectPtr::IsA((FObjectPtr *)&this_00->PlayerInput,pUVar6);
  if ((!bVar5) || ((this_00->PlayerInput).field0_0x0.DebugPtr == (UPlayerInput *)0x0))
  goto LAB_14a6d9b73;
  if ((param_1->ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  pwVar12 = L"";
  iStack_110 = 0;
  if (*(int *)(pFVar1 + 8) == 0) {
    local_118 = L"";
  }
  else {
    local_118 = *(wchar_t **)pFVar1;
    if (local_118 == (wchar_t *)0x0) goto LAB_14a6d99fc;
  }
  sVar7 = wcslen(local_118);
  iStack_110 = (int)sVar7;
LAB_14a6d99fc:
  pUVar6 = UInputAction::StaticClass();
  local_b8[0]._12_4_ = uStack_10c;
  local_b8[0].Size = iStack_110;
  local_b8[0].DataPtr = local_118;
  pUVar8 = StaticFindFirstObject(pUVar6,local_b8,None,Warning,L"EnableForcedAction");
  if (pUVar8 != (UObject *)0x0) {
    this_01 = APlayerController::GetLocalPlayer(this_00);
    if (this_01 == (ULocalPlayer *)0x0) {
      return;
    }
    pUVar10 = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(this_01);
    if (pUVar10 == (UEnhancedInputLocalPlayerSubsystem *)0x0) {
      return;
    }
    local_88._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_88._s_0.Y = _UNK_150689518;
    uStack_90 = uStack_90 & 0xffffff00;
    auVar4._4_8_ = _UNK_150689518;
    auVar4._0_4_ = uStack_94;
    auVar13._0_8_ = auVar4._0_8_ << 0x20;
    auVar13._8_4_ = uStack_90;
    auVar13._12_4_ = uStack_8c;
    uStack_70 = auVar13._8_8_;
    local_88._s_0.Z = 0.0;
    pFVar11 = ParseValue(this,&local_48,param_1,(FInputActionValue *)&local_88._s_0);
    local_68 = (pFVar11->Value).field0_0x0._s_0.X;
    dStack_60 = (pFVar11->Value).field0_0x0._s_0.Y;
    local_58 = (pFVar11->Value).field0_0x0._s_0.Z;
    uStack_50 = *(undefined8 *)&pFVar11->ValueType;
    local_e8 = local_128;
    local_128[0] = pUVar8;
    local_e0 = &local_68;
    TSet<TTuple<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UInputAction_const_*_&,FInputActionValue_&>_>
              ((TSet<TTuple<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UInputAction_const_,FWeakObjectPtr>,FInputActionValue,0>,FDefaultSetAllocator>
                *)&pUVar10->_padding_,
               (TPairInitializer<UInputAction_const_*_&,FInputActionValue_&> *)&stack0x00000020,
               (bool *)&local_e8);
    return;
  }
  if ((param_1->ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (*(int *)(pFVar1 + 8) != 0) {
    pwVar12 = *(wchar_t **)pFVar1;
  }
  pFVar9 = ::FName::FName(local_c8,pwVar12);
  FVar2 = *pFVar9;
  ::FString::FString(&local_f8,L"Failed to find action \'%s\'.");
  APlayerController::ClientMessage(this_00,&local_f8,FVar2,0.0);
  if (local_f8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  return;
}

// EnableForcedKey @ 14a6d9bc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FEnhancedInputModule::EnableForcedKey
          (FEnhancedInputModule *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [12];
  double dVar4;
  double dVar5;
  double dVar6;
  EInputActionValueType EVar7;
  undefined7 uVar8;
  FName FVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  APlayerController *this_00;
  FName *pFVar13;
  ULocalPlayer *this_01;
  UEnhancedInputLocalPlayerSubsystem *pUVar14;
  FInputActionValue *pFVar15;
  FInjectedKeyData *pFVar16;
  wchar_t *pwVar17;
  undefined1 auVar18 [16];
  FKey local_f0;
  FKey local_d8;
  FString local_c0;
  FString local_b0;
  FName local_a0;
  double local_98;
  double dStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  TVector<double>_u_0 local_78;
  undefined8 uStack_60;
  FInputActionValue local_58 [2];
  
  this_00 = UWorld::GetFirstPlayerController(param_2);
  if (this_00 != (APlayerController *)0x0) {
    if (param_1->ArrayNum == 0) {
      ::FString::FString(&local_c0,
                         L"Expected arguments:\\n   <key> - Name of key to force each tick\\n   <value> - Value to apply. Valid examples are: true, 0.4"
                        );
      APlayerController::ClientMessage(this_00,&local_c0,(FName)0x0,0.0);
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
    }
    else {
      if ((param_1->ArrayNum < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + 8) == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = *(wchar_t **)pFVar1;
      }
      pFVar13 = ::FName::FName(&local_a0,pwVar17,FNAME_Find);
      local_d8.KeyName = *pFVar13;
      local_d8.KeyDetails.Object = (FKeyDetails *)0x0;
      local_d8.KeyDetails.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      bVar11 = FKey::IsValid(&local_d8);
      if (bVar11) {
        this_01 = APlayerController::GetLocalPlayer(this_00);
        if ((this_01 != (ULocalPlayer *)0x0) &&
           (pUVar14 = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(this_01),
           uVar10 = uStack_80, pUVar14 != (UEnhancedInputLocalPlayerSubsystem *)0x0)) {
          local_98 = ___xmm_00000000000000003ff0000000000000;
          dStack_90 = _UNK_150689518;
          uStack_80 = CONCAT71(uStack_80._1_7_,1);
          local_78._s_0.X = ___xmm_00000000000000003ff0000000000000;
          local_78._s_0.Y = _UNK_150689518;
          uStack_80._4_4_ = SUB84(uVar10,4);
          auVar3._4_8_ = _UNK_150689518;
          auVar3._0_4_ = local_88._4_4_;
          auVar18._0_8_ = auVar3._0_8_ << 0x20;
          auVar18._8_4_ = (undefined4)uStack_80;
          auVar18._12_4_ = uStack_80._4_4_;
          uStack_80 = auVar18._8_8_;
          local_88 = 0;
          local_78._s_0.Z = 0.0;
          uStack_60 = uStack_80;
          pFVar15 = ParseValue(this,local_58,param_1,(FInputActionValue *)&local_78._s_0);
          dVar4 = (pFVar15->Value).field0_0x0._s_0.X;
          dVar5 = (pFVar15->Value).field0_0x0._s_0.Y;
          dVar6 = (pFVar15->Value).field0_0x0._s_0.Z;
          EVar7 = pFVar15->ValueType;
          uVar8 = *(undefined7 *)&pFVar15->field_0x19;
          local_f0.KeyName = local_d8.KeyName;
          local_f0.KeyDetails.Object = local_d8.KeyDetails.Object;
          local_f0.KeyDetails.SharedReferenceCount.ReferenceController =
               local_d8.KeyDetails.SharedReferenceCount.ReferenceController;
          if (local_d8.KeyDetails.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_d8.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_d8.KeyDetails.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          bVar11 = FKey::IsValid(&local_f0);
          if ((!bVar11) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Key.IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Private\\EnhancedInputSubsystemInterface.cpp"
                                  ,0x4e3,L""), bVar11)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FVar9 = local_f0.KeyName;
          uVar12 = ::GetTypeHash(local_f0.KeyName.ComparisonIndex.Value);
          pFVar16 = TMapBase<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData,0>_>
                    ::FindOrAddImpl<FKey_const_&>
                              ((TMapBase<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKey,IEnhancedInputSubsystemInterface::FInjectedKeyData,0>_>
                                *)&pUVar14->_padding_,uVar12 + FVar9.Number,&local_f0);
          (pFVar16->InputValue).Value.field0_0x0._s_0.X = dVar4;
          (pFVar16->InputValue).Value.field0_0x0._s_0.Y = dVar5;
          (pFVar16->InputValue).Value.field0_0x0._s_0.Z = dVar6;
          (pFVar16->InputValue).ValueType = EVar7;
          *(undefined7 *)&(pFVar16->InputValue).field_0x19 = uVar8;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_f0.KeyDetails.SharedReferenceCount.ReferenceController);
        }
      }
      else {
        if ((param_1->ArrayNum < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        ::FString::PrintfImpl(&local_b0,L"Failed to locate a key named \'%s\'");
        APlayerController::ClientMessage(this_00,&local_b0,(FName)0x0,0.0);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.KeyDetails.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// OnShowDebugInfo @ 14a6e8fc0

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

void __cdecl
FEnhancedInputModule::OnShowDebugInfo
          (AHUD *param_1,UCanvas *param_2,FDebugDisplayInfo *param_3,float *param_4,float *param_5)

{
  int iVar1;
  code *pcVar2;
  float fVar3;
  char cVar4;
  bool bVar5;
  EInternalObjectFlags EVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  UFont *pUVar10;
  longlong lVar11;
  UClass *pUVar12;
  UEnhancedInputLocalPlayerSubsystem *pUVar13;
  APlayerController *this;
  ULocalPlayer *this_00;
  APlayerController *pAVar14;
  UEnhancedInputUserSettings *this_01;
  float fVar15;
  float local_res10 [2];
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float local_84;
  TObjectIterator<UEnhancedInputWorldSubsystem> local_80;
  TObjectIterator<UEnhancedInputLocalPlayerSubsystem> local_68;
  FString local_50;
  FString local_40 [2];
  
  lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar11 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&NAME_EnhancedInput,"EnhancedInput");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(lVar11 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&NAME_WorldSubsystemInput,"WorldSubsystemInput");
    _Init_thread_footer(&::_TSS1);
  }
  if ((*(int *)(lVar11 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FName::FName(&NAME_InputSettings,"InputSettings");
    _Init_thread_footer(&::_TSS2);
  }
  if (param_2 == (UCanvas *)0x0) {
    bVar5 = (int)CachedModifierVisualizations._72_4_ < 2;
    if (bVar5) {
      TSet<TTuple<unsigned___int64,FVisualizationTexture>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVisualizationTexture,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<unsigned___int64,FVisualizationTexture>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVisualizationTexture,0>,FDefaultSetAllocator>
                        *)&CachedModifierVisualizations);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVisualizationTexture>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVisualizationTexture>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)&CachedModifierVisualizations,0,CachedModifierVisualizations._8_4_);
    CachedModifierVisualizations._8_4_ = 0;
    if (CachedModifierVisualizations._12_4_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)&CachedModifierVisualizations,0,
                 (int *)&CachedModifierVisualizations.field_0xc);
    }
    CachedModifierVisualizations._48_4_ = 0xffffffff;
    CachedModifierVisualizations._52_4_ = 0;
    CachedModifierVisualizations._40_4_ = 0;
    if (0x80 < (uint)CachedModifierVisualizations._44_4_) {
      CachedModifierVisualizations._44_4_ = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&CachedModifierVisualizations.field_0x10,0)
      ;
    }
    if (bVar5) {
      return;
    }
    CachedModifierVisualizations._72_4_ = 1;
    TSet<TTuple<unsigned___int64,FVisualizationTexture>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVisualizationTexture,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned___int64,FVisualizationTexture>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVisualizationTexture,0>,FDefaultSetAllocator>
              *)&CachedModifierVisualizations);
    return;
  }
  cVar4 = (**(code **)(param_1->_padding_ + 0x7b8))(param_1,&NAME_EnhancedInput);
  fVar3 = __real_3b808081;
  if (cVar4 != '\0') {
    pUVar10 = UEngine::GetSmallFont();
    if ((pUVar10 != (UFont *)0x0) &&
       (pUVar10 != (UFont *)(param_2->DisplayDebugManager).DebugTextItem._padding_)) {
      (param_2->DisplayDebugManager).DebugTextItem._padding_ = (longlong)pUVar10;
      fVar15 = UFont::GetMaxCharHeight(pUVar10);
      (param_2->DisplayDebugManager).MaxCharHeight = fVar15;
    }
    local_res10[0] = 0.0;
    local_98 = (float)FColor::Yellow.field0_0x0._2_1_ * fVar3;
    fStack_94 = (float)FColor::Yellow.field0_0x0._1_1_ * fVar3;
    fStack_90 = (float)FColor::Yellow.field0_0x0._0_1_ * fVar3;
    fStack_8c = (float)FColor::Yellow.field0_0x0._3_1_ * fVar3;
    *(float *)&(param_2->DisplayDebugManager).DebugTextItem._padding_ = local_98;
    *(float *)((longlong)&(param_2->DisplayDebugManager).DebugTextItem._padding_ + 4) = fStack_94;
    *(float *)&(param_2->DisplayDebugManager).DebugTextItem._padding_ = fStack_90;
    *(float *)((longlong)&(param_2->DisplayDebugManager).DebugTextItem._padding_ + 4) = fStack_8c;
    ::FString::FString(&local_50,L"ENHANCED INPUT");
    FDisplayDebugManager::DrawString(&param_2->DisplayDebugManager,&local_50,local_res10);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    lVar11 = (**(code **)(param_1->_padding_ + 0x7c8))(param_1);
    if (lVar11 != 0) {
      pUVar12 = Z_Construct_UClass_APawn_NoRegister();
      iVar1 = (int)pUVar12->_padding_;
      if (((iVar1 <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
          ((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar12->_padding_)) && (lVar11 = *(longlong *)(lVar11 + 0x2f0), lVar11 != 0)) {
        pUVar12 = Z_Construct_UClass_APlayerController_NoRegister();
        iVar1 = (int)pUVar12->_padding_;
        if (((iVar1 <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
             &pUVar12->_padding_)) && (*(longlong *)(lVar11 + 0x378) != 0)) {
          pUVar12 = Z_Construct_UClass_ULocalPlayer_NoRegister();
          bVar5 = FObjectPtr::IsA((FObjectPtr *)(lVar11 + 0x378),pUVar12);
          if (((bVar5) && (*(ULocalPlayer **)(lVar11 + 0x378) != (ULocalPlayer *)0x0)) &&
             (pUVar13 = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>
                                  (*(ULocalPlayer **)(lVar11 + 0x378)),
             pUVar13 != (UEnhancedInputLocalPlayerSubsystem *)0x0)) {
            (**(code **)(pUVar13->_padding_ + 0x120))(&pUVar13->_padding_,param_2);
            goto LAB_14a6e9288;
          }
        }
      }
    }
    local_88 = 0.0;
    local_98 = (float)FColor::Red.field0_0x0._2_1_ * fVar3;
    fStack_94 = (float)FColor::Red.field0_0x0._1_1_ * fVar3;
    fStack_90 = (float)FColor::Red.field0_0x0._0_1_ * fVar3;
    fStack_8c = (float)FColor::Red.field0_0x0._3_1_ * fVar3;
    *(float *)&(param_2->DisplayDebugManager).DebugTextItem._padding_ = local_98;
    *(float *)((longlong)&(param_2->DisplayDebugManager).DebugTextItem._padding_ + 4) = fStack_94;
    *(float *)&(param_2->DisplayDebugManager).DebugTextItem._padding_ = fStack_90;
    *(float *)((longlong)&(param_2->DisplayDebugManager).DebugTextItem._padding_ + 4) = fStack_8c;
    ::FString::FString((FString *)&local_98,
                       L"Debug Target is not valid for Enhanced Input Debug Display");
    FDisplayDebugManager::DrawString(&param_2->DisplayDebugManager,(FString *)&local_98,&local_88);
    if ((void *)CONCAT44(fStack_94,local_98) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(fStack_94,local_98));
    }
  }
LAB_14a6e9288:
  cVar4 = (**(code **)(param_1->_padding_ + 0x7b8))(param_1,&NAME_WorldSubsystemInput);
  pAVar14 = (APlayerController *)0x0;
  if (cVar4 != '\0') {
    local_80.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.ObjectArray.ArrayNum = 0;
    local_80.ObjectArray.ArrayMax = 0;
    local_80.Index = 0xffffffff;
    EVar6 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar12 = UEnhancedInputWorldSubsystem::StaticClass();
    GetObjectsOfClass(pUVar12,&local_80.ObjectArray,true,RF_ClassDefaultObject,
                      EVar6 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    while( true ) {
      TObjectIterator<UEnhancedInputWorldSubsystem>::Advance(&local_80);
      lVar11 = (longlong)local_80.Index;
      if ((local_80.Index < 0) || (local_80.ObjectArray.ArrayNum <= local_80.Index)) break;
      uVar7 = 0;
      if (local_80.Index < local_80.ObjectArray.ArrayNum) {
        uVar7 = (uint)~local_80.Index >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(*(longlong *)
                    (*(longlong *)(local_80.ObjectArray.AllocatorInstance.Data + lVar11 * 8) + 0x38)
                  + 0x120))
                (*(longlong *)(local_80.ObjectArray.AllocatorInstance.Data + lVar11 * 8) + 0x38,
                 param_2);
    }
    if (local_80.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.ObjectArray.AllocatorInstance.Data);
    }
  }
  cVar4 = (**(code **)(param_1->_padding_ + 0x7b8))(param_1,&NAME_InputSettings);
  if (cVar4 == '\0') {
    return;
  }
  lVar11 = (**(code **)(param_1->_padding_ + 0x7c8))(param_1);
  if (lVar11 == 0) {
LAB_14a6e93c1:
    this = (APlayerController *)(**(code **)(param_1->_padding_ + 0x7c8))(param_1);
  }
  else {
    pUVar12 = Z_Construct_UClass_APawn_NoRegister();
    iVar1 = (int)pUVar12->_padding_;
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) + (longlong)iVar1 * 8)
        != &pUVar12->_padding_)) goto LAB_14a6e93c1;
    this = *(APlayerController **)(lVar11 + 0x2f0);
  }
  if (this == (APlayerController *)0x0) {
LAB_14a6e93f8:
    this = pAVar14;
  }
  else {
    pUVar12 = Z_Construct_UClass_APlayerController_NoRegister();
    iVar1 = (int)pUVar12->_padding_;
    if ((*(int *)(this->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar12->_padding_)) goto LAB_14a6e93f8;
  }
  if (this != (APlayerController *)0x0) {
    this_00 = APlayerController::GetLocalPlayer(this);
    pAVar14 = (APlayerController *)
              ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(this_00);
    if (pAVar14 != (APlayerController *)0x0) goto LAB_14a6e94d3;
  }
  local_68.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ObjectArray.ArrayNum = 0;
  local_68.ObjectArray.ArrayMax = 0;
  local_68.Index = 0xffffffff;
  EVar6 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar12 = UEnhancedInputLocalPlayerSubsystem::StaticClass();
  GetObjectsOfClass(pUVar12,&local_68.ObjectArray,true,RF_ClassDefaultObject,
                    EVar6 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UEnhancedInputLocalPlayerSubsystem>::Advance(&local_68);
  lVar11 = (longlong)local_68.Index;
  if ((-1 < local_68.Index) && (local_68.Index < local_68.ObjectArray.ArrayNum)) {
    uVar7 = 0;
    if (local_68.Index < local_68.ObjectArray.ArrayNum) {
      uVar7 = (uint)~local_68.Index >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pAVar14 = *(APlayerController **)(local_68.ObjectArray.AllocatorInstance.Data + lVar11 * 8);
  }
  if (local_68.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.ObjectArray.AllocatorInstance.Data);
  }
  if (pAVar14 == (APlayerController *)0x0) {
    return;
  }
LAB_14a6e94d3:
  this_01 = (UEnhancedInputUserSettings *)
            (**(code **)(pAVar14->_padding_ + 0x18))(&pAVar14->_padding_);
  if (this_01 == (UEnhancedInputUserSettings *)0x0) {
    pUVar10 = UEngine::GetLargeFont();
    if ((pUVar10 != (UFont *)0x0) &&
       (pUVar10 != (UFont *)(param_2->DisplayDebugManager).DebugTextItem._padding_)) {
      (param_2->DisplayDebugManager).DebugTextItem._padding_ = (longlong)pUVar10;
      fVar15 = UFont::GetMaxCharHeight(pUVar10);
      (param_2->DisplayDebugManager).MaxCharHeight = fVar15;
    }
    local_84 = 0.0;
    uVar7 = (uint)FColor::Red.field0_0x0._s_0.G;
    uVar8 = (uint)FColor::Red.field0_0x0._s_0.B;
    uVar9 = (uint)FColor::Red.field0_0x0._s_0.A;
    *(float *)&(param_2->DisplayDebugManager).DebugTextItem._padding_ =
         (float)FColor::Red.field0_0x0._2_1_ * fVar3;
    *(float *)((longlong)&(param_2->DisplayDebugManager).DebugTextItem._padding_ + 4) =
         (float)uVar7 * fVar3;
    *(float *)&(param_2->DisplayDebugManager).DebugTextItem._padding_ = (float)uVar8 * fVar3;
    *(float *)((longlong)&(param_2->DisplayDebugManager).DebugTextItem._padding_ + 4) =
         (float)uVar9 * fVar3;
    ::FString::FString(local_40,
                       L"No Input User Settings found! Did you enable it in project settings?");
    FDisplayDebugManager::DrawString(&param_2->DisplayDebugManager,local_40,&local_84);
    if (local_40[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40[0].Data.AllocatorInstance.Data);
    }
  }
  else {
    UEnhancedInputUserSettings::ShowDebugInfo(this_01,param_2);
  }
  return;
}

// ParseValue @ 14a6e97d0

FInputActionValue * __thiscall
FEnhancedInputModule::ParseValue
          (FEnhancedInputModule *this,FInputActionValue *__return_storage_ptr__,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,FInputActionValue *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  EInputActionValueType EVar6;
  undefined7 uVar7;
  bool bVar8;
  uint uVar9;
  FInputActionValue *pFVar10;
  ForAnyElementType FVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  undefined4 uVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  FString local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double adStack_98 [2];
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  dVar16 = (param_2->Value).field0_0x0._s_0.Y;
  dVar5 = (param_2->Value).field0_0x0._s_0.Z;
  EVar6 = param_2->ValueType;
  uVar7 = *(undefined7 *)&param_2->field_0x19;
  iVar14 = param_1->ArrayNum;
  (__return_storage_ptr__->Value).field0_0x0._s_0.X = (param_2->Value).field0_0x0._s_0.X;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Y = dVar16;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Z = dVar5;
  __return_storage_ptr__->ValueType = EVar6;
  *(undefined7 *)&__return_storage_ptr__->field_0x19 = uVar7;
  if (iVar14 < 2) {
    return __return_storage_ptr__;
  }
  uVar12 = 1;
  lVar13 = 0x10;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  do {
    uVar9 = 0;
    if ((int)uVar12 < iVar14) {
      uVar9 = ~uVar12 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar2 = (code *)swi(3);
      pFVar10 = (FInputActionValue *)(*pcVar2)();
      return pFVar10;
    }
    pFVar1 = (param_1->AllocatorInstance).Data;
    iVar14 = *(int *)(pFVar1 + lVar13 + 8);
    uVar9 = iVar14 - 1;
    if (iVar14 == 0) {
      uVar9 = 0;
    }
    ::FString::AppendChars(&local_c8,*(wchar_t **)(pFVar1 + lVar13),uVar9);
    if ((int)uVar12 < param_1->ArrayNum + -1) {
      ::FString::AppendChars(&local_c8," ",1);
    }
    iVar14 = param_1->ArrayNum;
    uVar12 = uVar12 + 1;
    lVar13 = lVar13 + 0x10;
  } while ((int)uVar12 < iVar14);
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_c8.Data.ArrayNum != 0) {
    FVar11.Data = local_c8.Data.AllocatorInstance.Data;
  }
  local_a8 = 0.0;
  dStack_a0 = 0.0;
  adStack_98[0] = 0.0;
  bVar8 = FParse::Value((wchar_t *)FVar11.Data,L"X=",&local_a8);
  if (bVar8) {
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_c8.Data.ArrayNum != 0) {
      FVar11.Data = local_c8.Data.AllocatorInstance.Data;
    }
    bVar8 = FParse::Value((wchar_t *)FVar11.Data,L"Y=",&dStack_a0);
    if (bVar8) {
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_c8.Data.ArrayNum != 0) {
        FVar11.Data = local_c8.Data.AllocatorInstance.Data;
      }
      bVar8 = FParse::Value((wchar_t *)FVar11.Data,L"Z=",adStack_98);
      if (bVar8) {
        uStack_78 = CONCAT31(uStack_78._1_3_,3);
        (__return_storage_ptr__->Value).field0_0x0._s_0.X = local_a8;
        (__return_storage_ptr__->Value).field0_0x0._s_0.Y = dStack_a0;
        uVar15 = SUB84(adStack_98[0],0);
        uVar17 = (int)((ulonglong)adStack_98[0] >> 0x20);
        uVar18 = uStack_78;
        goto LAB_14a6e9a37;
      }
    }
  }
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_c8.Data.ArrayNum != 0) {
    FVar11.Data = local_c8.Data.AllocatorInstance.Data;
  }
  local_b8 = 0.0;
  dStack_b0 = 0.0;
  bVar8 = FParse::Value((wchar_t *)FVar11.Data,L"X=",&local_b8);
  if (bVar8) {
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_c8.Data.ArrayNum != 0) {
      FVar11.Data = local_c8.Data.AllocatorInstance.Data;
    }
    bVar8 = FParse::Value((wchar_t *)FVar11.Data,L"Y=",&dStack_b0);
    if (bVar8) {
      uStack_38 = CONCAT31(uStack_38._1_3_,2);
      (__return_storage_ptr__->Value).field0_0x0._s_0.X = local_b8;
      (__return_storage_ptr__->Value).field0_0x0._s_0.Y = dStack_b0;
      uVar15 = 0;
      uVar17 = 0;
      uVar18 = uStack_38;
      uStack_74 = uStack_34;
      goto LAB_14a6e9a37;
    }
  }
  bVar8 = ::FString::IsNumeric(&local_c8);
  if (bVar8) {
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_c8.Data.ArrayNum != 0) {
      FVar11.Data = local_c8.Data.AllocatorInstance.Data;
    }
    dVar16 = _wtof((wchar_t *)FVar11.Data);
    local_58 = CONCAT31(local_58._1_3_,1);
    local_68 = 0;
    uStack_60 = 0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (double)(float)dVar16;
    *(undefined1 (*) [16])&(__return_storage_ptr__->Value).field0_0x0 = auVar3;
    uStack_60._0_4_ = 0;
    uStack_60._4_4_ = 0;
    uVar15 = (undefined4)uStack_60;
    uVar17 = uStack_60._4_4_;
    uVar18 = local_58;
    uStack_74 = uStack_54;
  }
  else {
    bVar8 = ::FString::ToBool(&local_c8);
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = CONCAT31(uStack_78._1_3_,1);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (double)bVar8;
    *(undefined1 (*) [16])&(__return_storage_ptr__->Value).field0_0x0 = auVar4;
    local_80._0_4_ = 0;
    local_80._4_4_ = 0;
    uVar15 = (undefined4)local_80;
    uVar17 = local_80._4_4_;
    uVar18 = uStack_78;
  }
LAB_14a6e9a37:
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 0x10) = uVar15;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Value).field0_0x0 + 0x14) = uVar17;
  *(undefined4 *)&__return_storage_ptr__->ValueType = uVar18;
  *(undefined4 *)&__return_storage_ptr__->field_0x1c = uStack_74;
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator() @ 1505527f0

bool __thiscall `FEnhancedInputModule::GetLibrary'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_9069273734170279881>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9069273734170279881>,
                       &`public:___cdecl_`public:_virtual_class_UEnhancedInputLibrary*___ptr64___cdecl_FEnhancedInputModule::GetLibrary(void)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

