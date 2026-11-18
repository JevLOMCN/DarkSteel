// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 14

// StaticClass @ 14b2fec20

UClass * __cdecl UMetaSoundAssetSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundAssetSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetaSoundAssetSubsystem",
               &Z_Registration_Info_UClass_UMetaSoundAssetSubsystem.InnerSingleton,
               StaticRegisterNativesUMetaSoundAssetSubsystem,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMetaSoundAssetSubsystem>,
               InternalVTableHelperCtorCaller<UMetaSoundAssetSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundAssetSubsystem.InnerSingleton;
}

// UMetaSoundAssetSubsystem @ 14b34c200

UMetaSoundAssetSubsystem * __thiscall
UMetaSoundAssetSubsystem::UMetaSoundAssetSubsystem
          (UMetaSoundAssetSubsystem *this,FVTableHelper *param_1)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this,param_1);
  *(undefined ***)this = &___7UMetaSoundAssetSubsystem__6B_;
  return this;
}

// UMetaSoundAssetSubsystem @ 14b34c230

UMetaSoundAssetSubsystem * __thiscall
UMetaSoundAssetSubsystem::UMetaSoundAssetSubsystem(UMetaSoundAssetSubsystem *this)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this);
  *(undefined ***)this = &___7UMetaSoundAssetSubsystem__6B_;
  return this;
}

// ~UMetaSoundAssetSubsystem @ 14b352410

void __thiscall UMetaSoundAssetSubsystem::~UMetaSoundAssetSubsystem(UMetaSoundAssetSubsystem *this)

{
  *(undefined ***)this = &___7UMetaSoundAssetSubsystem__6B_;
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  return;
}

// operator() @ 14b35cbc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UMetaSoundAssetSubsystem::PostInitAssetScanInternal'::__l8::<lambda_1>::operator()
          (void *this,FAssetData *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong lStack_58;
  code *local_48 [2];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  plVar3 = *(longlong **)this;
  pcVar1 = *(code **)(*plVar3 + 0x20);
  plVar2 = *(longlong **)((longlong)this + 8);
  local_60 = *plVar2;
  lStack_58 = plVar2[1];
  local_68 = plVar2[2];
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<``UMetaSoundAssetSubsystem::PostInitAssetScanInternal'::`8'::<lambda_1>::operator()'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = local_60;
  local_20[2] = lStack_58;
  local_20[3] = local_68;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``UMetaSoundAssetSubsystem::PostInitAssetScanInternal'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>,void,FMetaSoundAssetKey,UObject_&>
                  ::Call;
  }
  (*pcVar1)(plVar3,param_1,local_48);
  if (local_48[0] != (code *)0x0) {
    plVar3 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar3 = local_20;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return;
}

// GetPrivateStaticClass @ 14b3bf070

UClass * __cdecl UMetaSoundAssetSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMetaSoundAssetSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MetasoundEngine",L"MetaSoundAssetSubsystem",
               &Z_Registration_Info_UClass_UMetaSoundAssetSubsystem.InnerSingleton,
               StaticRegisterNativesUMetaSoundAssetSubsystem,0x30,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMetaSoundAssetSubsystem>,
               InternalVTableHelperCtorCaller<UMetaSoundAssetSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMetaSoundAssetSubsystem.InnerSingleton;
}

// Initialize @ 14b3c7450

void __thiscall
UMetaSoundAssetSubsystem::Initialize
          (UMetaSoundAssetSubsystem *this,FSubsystemCollectionBase *param_1)

{
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UMetaSoundAssetSubsystem>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPostEngineInit,(UMetaSoundAssetSubsystem *)&stack0x00000018,
             (pmf_a4203a2e)this);
  return;
}

// PostEngineInitInternal @ 14b3cc280

void __thiscall UMetaSoundAssetSubsystem::PostEngineInitInternal(UMetaSoundAssetSubsystem *this)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  UMetaSoundAssetSubsystem *local_res10;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  bVar2 = UAssetManager::IsInitialized();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UAssetManager::IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAssetSubsystem.cpp"
                       ,0x5bf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UAssetManager::Get();
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMetaSoundAssetSubsystem____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UMetaSoundAssetSubsystem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar3[3] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UMetaSoundAssetSubsystem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)&local_res10);
    puVar3[4] = PostInitAssetScanInternal;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  UAssetManager::CallOrRegister_OnCompletedInitialScan
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  return;
}

// PostInitAssetScanInternal @ 14b3cd430

void __thiscall UMetaSoundAssetSubsystem::PostInitAssetScanInternal(UMetaSoundAssetSubsystem *this)

{
  UObject *pUVar1;
  UObject *pUVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  FMetaSoundAssetManager *this_00;
  TArrayView<FGuid_const_,int> *pTVar7;
  bool bVar8;
  FMetaSoundAssetManager *local_58;
  undefined4 *local_50;
  code *local_48;
  FMetaSoundAssetManager **local_40;
  TArrayView<FGuid_const_,int> local_38;
  undefined4 local_28;
  FGuid *local_20;
  ulonglong uStack_18;
  
  bVar3 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar3) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"UMetaSoundAssetSubsystem::PostInitAssetScanInternal");
  }
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1481,"UMetaSoundAssetSubsystem::PostInitAssetScanInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAssetSubsystem.cpp"
               ,0x5c9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1481);
  }
  pUVar6 = UMetaSoundSettings::StaticClass();
  if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar6);
  }
  pUVar1 = (pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar1 == (UObject *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6979144095893554638>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundEngine\\Private\\MetasoundAssetSubsystem.cpp"
                       ,0x5ce,"Settings");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    this_00 = (FMetaSoundAssetManager *)Metasound::Frontend::IMetaSoundAssetManager::GetChecked();
    local_28 = 0x10101;
    local_20 = (FGuid *)0x0;
    uStack_18 = uStack_18 & 0xffffffff00000000;
    pUVar6 = UMetaSoundSettings::StaticClass();
    if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar6);
    }
    pUVar2 = (pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar2 != (UObject *)0x0) {
      local_28 = CONCAT13(pUVar2[1].field_0x10,(undefined3)local_28);
      pTVar7 = UMetaSoundSettings::GetPageOrder(&local_38);
      local_20 = pTVar7->DataPtr;
      uStack_18 = *(ulonglong *)&pTVar7->ArrayNum;
    }
    local_50 = &local_28;
    local_40 = &local_58;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`UMetaSoundAssetSubsystem::PostInitAssetScanInternal'::__l8::<lambda_1>,void,FAssetData_const_&>
               ::Call;
    local_58 = this_00;
    Metasound::Engine::FMetaSoundAssetManager::SearchAndIterateDirectoryAssets
              (this_00,(TArray<FDirectoryPath,TSizedDefaultAllocator<32>_> *)&pUVar1[1].field_0x18,
               (TFunctionRef<void___cdecl(FAssetData_const_&)> *)&local_48);
  }
  LOCK();
  Metasound::Engine::AssetSubsystemPrivate::InitialAssetScanComplete = (atomic<bool>)0x1;
  UNLOCK();
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return;
}

// RegisterAssetClassesInDirectories @ 14b3cf6a0

void __thiscall
UMetaSoundAssetSubsystem::RegisterAssetClassesInDirectories
          (UMetaSoundAssetSubsystem *this,
          TArray<FMetaSoundAssetDirectory,TSizedDefaultAllocator<32>_> *param_1)

{
  FMetaSoundAssetManager *this_00;
  
  this_00 = (FMetaSoundAssetManager *)Metasound::Frontend::IMetaSoundAssetManager::GetChecked();
  Metasound::Engine::FMetaSoundAssetManager::RegisterAssetClassesInDirectories(this_00,param_1);
  return;
}

// StaticRegisterNativesUMetaSoundAssetSubsystem @ 14b3e13b0

void __cdecl UMetaSoundAssetSubsystem::StaticRegisterNativesUMetaSoundAssetSubsystem(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UMetaSoundAssetSubsystem_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UnregisterAssetClassesInDirectories @ 14b3e4920

/* WARNING: Removing unreachable block (ram,0x00014b3e4a53) */

void __thiscall
UMetaSoundAssetSubsystem::UnregisterAssetClassesInDirectories
          (UMetaSoundAssetSubsystem *this,
          TArray<FMetaSoundAssetDirectory,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMetaSoundAssetManager *this_00;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  FMetaSoundAssetManager *local_res18;
  TArray<FDirectoryPath,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  code *local_38;
  FMetaSoundAssetManager **local_30;
  
  this_00 = (FMetaSoundAssetManager *)Metasound::Frontend::IMetaSoundAssetManager::GetChecked();
  iVar1 = param_1->ArrayNum;
  pFVar6 = (param_1->AllocatorInstance).Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FMetaSoundAssetDirectory_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (pFVar6 == pFVar7) break;
    ::FString::FString(&local_48,(FString *)pFVar6);
    if (((local_58.AllocatorInstance.Data <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 <
         local_58.AllocatorInstance.Data + (longlong)local_58.ArrayMax * 0x10)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = local_58.ArrayNum;
    if (local_58.ArrayNum == local_58.ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_58.AllocatorInstance,&local_58.ArrayMax);
    }
    local_58.ArrayNum = iVar4 + 1;
    pFVar5 = local_58.AllocatorInstance.Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)pFVar5 = 0;
    *(FScriptContainerElement **)pFVar5 = local_48.Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar5 + 8) = local_48.Data.ArrayNum;
    *(int *)(pFVar5 + 0xc) = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    pFVar6 = pFVar6 + 0x10;
  }
  local_30 = &local_res18;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Engine::FMetaSoundAssetManager::UnregisterAssetClassesInDirectories'::__l2::<lambda_2>,void,FAssetData_const_&>
             ::Call;
  local_res18 = this_00;
  Metasound::Engine::FMetaSoundAssetManager::SearchAndIterateDirectoryAssets
            (this_00,&local_58,(TFunctionRef<void___cdecl(FAssetData_const_&)> *)&local_38);
  DestructItems<FDirectoryPath,int>
            ((FDirectoryPath *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return;
}

// execRegisterAssetClassesInDirectories @ 14b3f4a50

void __cdecl
UMetaSoundAssetSubsystem::execRegisterAssetClassesInDirectories
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMetaSoundAssetManager *this;
  TArray<FMetaSoundAssetDirectory,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FMetaSoundAssetDirectory,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FMetaSoundAssetDirectory,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<FMetaSoundAssetDirectory,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FMetaSoundAssetDirectory,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = (FMetaSoundAssetManager *)Metasound::Frontend::IMetaSoundAssetManager::GetChecked();
  Metasound::Engine::FMetaSoundAssetManager::RegisterAssetClassesInDirectories(this,pTVar2);
  DestructItems<FMetaSoundAssetDirectory,int>
            ((FMetaSoundAssetDirectory *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execUnregisterAssetClassesInDirectories @ 14b3f6540

/* WARNING: Removing unreachable block (ram,0x00014b3f66e0) */

void __cdecl
UMetaSoundAssetSubsystem::execUnregisterAssetClassesInDirectories
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FMetaSoundAssetManager *this;
  FScriptContainerElement *pFVar6;
  FString *pFVar7;
  FString *pFVar8;
  FMetaSoundAssetDirectory **ppFVar9;
  undefined1 local_res10 [8];
  FMetaSoundAssetManager *local_res20;
  TArray<FDirectoryPath,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FMetaSoundAssetDirectory *local_48;
  undefined8 local_40;
  code *local_38;
  FMetaSoundAssetManager **local_30;
  
  local_48 = (FMetaSoundAssetDirectory *)0x0;
  local_40 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  ppFVar9 = &local_48;
  if ((FMetaSoundAssetDirectory **)param_2->MostRecentPropertyAddress !=
      (FMetaSoundAssetDirectory **)0x0) {
    ppFVar9 = (FMetaSoundAssetDirectory **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = (FMetaSoundAssetManager *)Metasound::Frontend::IMetaSoundAssetManager::GetChecked();
  iVar1 = *(int *)(ppFVar9 + 1);
  pFVar7 = (FString *)*ppFVar9;
  pFVar8 = pFVar7 + iVar1;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  while( true ) {
    if (*(int *)(ppFVar9 + 1) != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FMetaSoundAssetDirectory_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (pFVar7 == pFVar8) break;
    ::FString::FString(&local_58,pFVar7);
    if (((local_68.AllocatorInstance.Data <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 <
         local_68.AllocatorInstance.Data + (longlong)local_68.ArrayMax * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = local_68.ArrayNum;
    if (local_68.ArrayNum == local_68.ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&local_68.AllocatorInstance,&local_68.ArrayMax);
    }
    local_68.ArrayNum = iVar5 + 1;
    pFVar6 = local_68.AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar6 = 0;
    *(FScriptContainerElement **)pFVar6 = local_58.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar6 + 8) = local_58.Data.ArrayNum;
    *(int *)(pFVar6 + 0xc) = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    pFVar7 = pFVar7 + 1;
  }
  local_30 = &local_res20;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Engine::FMetaSoundAssetManager::UnregisterAssetClassesInDirectories'::__l2::<lambda_2>,void,FAssetData_const_&>
             ::Call;
  local_res20 = this;
  Metasound::Engine::FMetaSoundAssetManager::SearchAndIterateDirectoryAssets
            (this,&local_68,(TFunctionRef<void___cdecl(FAssetData_const_&)> *)&local_38);
  DestructItems<FDirectoryPath,int>
            ((FDirectoryPath *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  DestructItems<FMetaSoundAssetDirectory,int>(local_48,(int)local_40);
  if (local_48 != (FMetaSoundAssetDirectory *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

