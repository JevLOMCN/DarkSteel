// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 3

// StartupModule @ 146e7a9d0

void __thiscall FAIModule::StartupModule(FAIModule *this)

{
  FName FVar1;
  code *pcVar2;
  FName *pFVar3;
  FModuleManager *pFVar4;
  IModuleInterface *pIVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  FName local_res10;
  FName local_res18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  pFVar3 = ::FName::FName(&local_res10,"NavigationSystem");
  FVar1 = *pFVar3;
  pFVar4 = FModuleManager::Get();
  FModuleManager::LoadModule(pFVar4,FVar1,None);
  pFVar3 = ::FName::FName(&local_res10,"GameplayDebugger");
  FVar1 = *pFVar3;
  pFVar4 = FModuleManager::Get();
  pIVar5 = FModuleManager::LoadModuleChecked(pFVar4,FVar1);
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  pcVar2 = *(code **)((longlong)*pIVar5 + 0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VFGameplayDebuggerCategory___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    puVar6[3] = FGameplayDebuggerCategory_AI::MakeInstance;
    *puVar6 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VFGameplayDebuggerCategory___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  pFVar3 = ::FName::FName(&local_res18,"AI");
  (*pcVar2)(pIVar5,*pFVar3,&local_68,0,1);
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  pcVar2 = *(code **)((longlong)*pIVar5 + 0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VFGameplayDebuggerCategory___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    puVar6[3] = FGameplayDebuggerCategory_BehaviorTree::MakeInstance;
    *puVar6 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VFGameplayDebuggerCategory___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  pFVar3 = ::FName::FName(&local_res18,"BehaviorTree");
  (*pcVar2)(pIVar5,*pFVar3,&local_68,1,2);
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  pcVar2 = *(code **)((longlong)*pIVar5 + 0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VFGameplayDebuggerCategory___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    puVar6[3] = FGameplayDebuggerCategory_EQS::MakeInstance;
    *puVar6 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VFGameplayDebuggerCategory___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  pFVar3 = ::FName::FName(&local_res18,"EQS");
  (*pcVar2)(pIVar5,*pFVar3,&local_68,3,0xffffffff);
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  pcVar2 = *(code **)((longlong)*pIVar5 + 0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VFGameplayDebuggerCategory___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    puVar6[3] = FGameplayDebuggerCategory_Navmesh::MakeInstance;
    *puVar6 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VFGameplayDebuggerCategory___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  pFVar3 = ::FName::FName(&local_res18,"Navmesh");
  (*pcVar2)(pIVar5,*pFVar3,&local_68,3,0);
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  pcVar2 = *(code **)((longlong)*pIVar5 + 0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VFGameplayDebuggerCategory___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    puVar6[3] = FGameplayDebuggerCategory_Perception::MakeInstance;
    *puVar6 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VFGameplayDebuggerCategory___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  pFVar3 = ::FName::FName(&local_res18,"Perception");
  (*pcVar2)(pIVar5,*pFVar3,&local_68,3,0xffffffff);
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  pcVar2 = *(code **)((longlong)*pIVar5 + 0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VFGameplayDebuggerCategory___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    puVar6[3] = FGameplayDebuggerCategory_PerceptionSystem::MakeInstance;
    *puVar6 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VFGameplayDebuggerCategory___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  pFVar3 = ::FName::FName(&local_res18,"PerceptionSystem");
  (*pcVar2)(pIVar5,*pFVar3,&local_68,3,0xffffffff);
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  pcVar2 = *(code **)((longlong)*pIVar5 + 0x40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_60);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VFGameplayDebuggerCategory___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    puVar6[3] = FGameplayDebuggerCategory_NavLocalGrid::MakeInstance;
    *puVar6 = &
              ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VFGameplayDebuggerCategory___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  pFVar3 = ::FName::FName(&local_res18,"NavGrid");
  (*pcVar2)(pIVar5,*pFVar3,&local_68,4,0xffffffff);
  (**(code **)((longlong)*pIVar5 + 0x50))(pIVar5);
  return;
}

// ShutdownModule @ 146e7ae70

void __thiscall FAIModule::ShutdownModule(FAIModule *this)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FModuleManager *pFVar4;
  FName *pFVar5;
  IModuleInterface *pIVar6;
  FName local_res10;
  FName local_res18 [2];
  
  pFVar4 = FModuleManager::Get();
  pFVar5 = ::FName::FName(&local_res10,"GameplayDebugger");
  bVar3 = FModuleManager::IsModuleLoaded(pFVar4,*pFVar5);
  if (bVar3) {
    pFVar5 = ::FName::FName(&local_res10,"GameplayDebugger");
    FVar1 = *pFVar5;
    pFVar4 = FModuleManager::Get();
    pIVar6 = FModuleManager::LoadModuleChecked(pFVar4,FVar1);
    pcVar2 = *(code **)((longlong)*pIVar6 + 0x48);
    pFVar5 = ::FName::FName(local_res18,"AI");
    (*pcVar2)(pIVar6,*pFVar5);
    pcVar2 = *(code **)((longlong)*pIVar6 + 0x48);
    pFVar5 = ::FName::FName(local_res18,"BehaviorTree");
    (*pcVar2)(pIVar6,*pFVar5);
    pcVar2 = *(code **)((longlong)*pIVar6 + 0x48);
    pFVar5 = ::FName::FName(local_res18,"EQS");
    (*pcVar2)(pIVar6,*pFVar5);
    pcVar2 = *(code **)((longlong)*pIVar6 + 0x48);
    pFVar5 = ::FName::FName(local_res18,"Navmesh");
    (*pcVar2)(pIVar6,*pFVar5);
    pcVar2 = *(code **)((longlong)*pIVar6 + 0x48);
    pFVar5 = ::FName::FName(local_res18,"Perception");
    (*pcVar2)(pIVar6,*pFVar5);
    pcVar2 = *(code **)((longlong)*pIVar6 + 0x48);
    pFVar5 = ::FName::FName(local_res18,"NavGrid");
    (*pcVar2)(pIVar6,*pFVar5);
    (**(code **)((longlong)*pIVar6 + 0x50))(pIVar6);
  }
  return;
}

// CreateAISystemInstance @ 146e7afb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAISystemBase * __thiscall FAIModule::CreateAISystemInstance(FAIModule *this,UWorld *param_1)

{
  FName *pFVar1;
  bool bVar2;
  wchar_t *pwVar3;
  AWorldSettings *pAVar4;
  FName *pFVar5;
  FString *pFVar6;
  size_t sVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  UClass *pUVar10;
  longlong *plVar11;
  int iVar12;
  undefined1 auStackY_138 [32];
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  FSoftObjectPath local_e8;
  FString local_c8;
  void *local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if (5 < (byte)LogAIModule._0_1_) {
    if (param_1 == (UWorld *)0x0) {
      ::FString::FString((FString *)&local_108,L"None");
    }
    else {
      local_f8.DataPtr = (wchar_t *)param_1->_padding_;
      ::FName::ToString((FName *)&local_f8,(FString *)&local_108);
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAIModule);
    if ((FScriptContainerElement *)local_108.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.DataPtr);
    }
  }
  UAISystemBase::GetAISystemClassName((FSoftClassPath *)&local_e8);
  pUVar10 = (UClass *)0x0;
  if ((param_1 != (UWorld *)0x0) &&
     (pAVar4 = UWorld::GetWorldSettings(param_1,false,true), pAVar4 != (AWorldSettings *)0x0)) {
    pFVar5 = (FName *)(**(code **)(pAVar4->_padding_ + 2000))(pAVar4,&local_c8);
    local_e8.AssetPath.PackageName = *pFVar5;
    local_e8.AssetPath.AssetName = pFVar5[1];
    pFVar1 = pFVar5 + 2;
    if ((FName *)&local_e8.SubPathString != pFVar1) {
      if ((FName)local_e8.SubPathString.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_e8.SubPathString.Data.AllocatorInstance.Data);
      }
      local_e8.SubPathString.Data.AllocatorInstance.Data = *(FScriptContainerElement **)pFVar1;
      pFVar1->ComparisonIndex = 0;
      pFVar1->Number = 0;
      local_e8.SubPathString.Data.ArrayNum = pFVar5[3].ComparisonIndex.Value;
      local_e8.SubPathString.Data.ArrayMax = pFVar5[3].Number;
      pFVar5[3].ComparisonIndex = 0;
      pFVar5[3].Number = 0;
    }
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
  }
  if (local_e8.AssetPath.PackageName == (FName)0x0) goto LAB_146e7b2cb;
  local_f8.DataPtr = (wchar_t *)0x0;
  iVar12 = 0;
  local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
  pFVar6 = FSoftObjectPath::ToString(&local_e8,&local_c8);
  if ((pFVar6->Data).ArrayNum == 0) {
    local_108.DataPtr = L"";
LAB_146e7b122:
    sVar7 = wcslen(local_108.DataPtr);
    iVar12 = (int)sVar7;
  }
  else {
    local_108.DataPtr = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)local_108.DataPtr != (FScriptContainerElement *)0x0)
    goto LAB_146e7b122;
  }
  local_108.Size = iVar12;
  pUVar8 = Z_Construct_UClass_UAISystemBase_NoRegister();
  pUVar8 = StaticLoadClass(pUVar8,(UObject *)0x0,&local_108,&local_f8,0,(UPackageMap *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  if ((pUVar8 != (UClass *)0x0) &&
     (pUVar9 = Z_Construct_UClass_UAISystemBase_NoRegister(), pUVar9 != (UClass *)0x0)) {
    iVar12 = (int)pUVar9->_padding_;
    if (((int)pUVar8->_padding_ < iVar12) ||
       ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar12 * 8) != &pUVar9->_padding_
       )) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_f8.DataPtr = (wchar_t *)0x0;
      pUVar9 = Z_Construct_UClass_UAISystemBase_NoRegister();
      pwVar3 = local_f8.DataPtr;
      if (pUVar9 == (UClass *)0x0) {
LAB_146e7b1fd:
        pUVar8 = pUVar10;
      }
      else {
        iVar12 = (int)pUVar9->_padding_;
        if (((int)pUVar8->_padding_ < iVar12) ||
           ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar12 * 8) !=
            &pUVar9->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_146e7b1fd;
      }
      if ((FName)local_f8.DataPtr == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)param_1,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar10 = Z_Construct_UClass_UAISystemBase_NoRegister();
      CheckIsClassChildOf_Internal(pUVar10,pUVar8);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_a8,pUVar8);
      local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_a8._56_8_ = (UPackage *)0x0;
      local_a8._16_8_ = pwVar3;
      local_a8._24_4_ = RF_NoFlags;
      local_a8._40_8_ = (UObject *)0x0;
      local_a8[0x20] = false;
      local_a8._8_8_ = param_1;
      pUVar10 = (UClass *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
      if (local_a8._64_8_ != 0) {
        plVar11 = (longlong *)(local_a8 + 0x50);
        if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
          plVar11 = (longlong *)local_a8._104_8_;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      if (pUVar10 != (UClass *)0x0) goto LAB_146e7b2cb;
    }
  }
  if (1 < (byte)LogAIModule._0_1_) {
    FSoftObjectPath::ToString(&local_e8,&local_c8);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAIModule);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
LAB_146e7b2cb:
  if ((FName)local_e8.SubPathString.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_e8.SubPathString.Data.AllocatorInstance.Data);
  }
  return (UAISystemBase *)pUVar10;
}

