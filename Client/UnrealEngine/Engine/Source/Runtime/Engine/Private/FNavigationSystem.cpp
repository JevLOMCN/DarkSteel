// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 49

// AddNavigationElement @ 147382da0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNavigationElementHandle * __cdecl
FNavigationSystem::AddNavigationElement
          (FNavigationElementHandle *__return_storage_ptr__,UWorld *param_1,
          FNavigationElement *param_2)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &Delegates.AddNavigationElementDelegate,&local_28);
  plVar1 = (longlong *)0x0;
  if (Delegates.AddNavigationElementDelegate._16_4_ != 0) {
    plVar1 = (longlong *)Delegates.AddNavigationElementDelegate._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,__return_storage_ptr__,param_1,param_2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return __return_storage_ptr__;
}

// AddNavigationSystemToWorld @ 147382e10

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
FNavigationSystem::AddNavigationSystemToWorld
          (UWorld *param_1,FNavigationSystemRunMode param_2,UNavigationSystemConfig *param_3,
          bool param_4,bool param_5)

{
  AWorldSettings *pAVar1;
  UNavigationSystemBase *pUVar2;
  bool bVar3;
  FName local_res8;
  FString local_28;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId80,"FNavigationSystem::AddNavigationSystemToWorld",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AI\\NavigationSystemBase.cpp"
               ,0x50);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId80);
  }
  if (5 < (byte)LogNavigation._0_1_) {
    local_res8 = *(FName *)(param_1->_padding_ + 0x18);
    ::FName::ToString(&local_res8,&local_28);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (param_2 == InferFromWorldMode) {
    switch((param_1->WorldType).Value) {
    case '\x01':
    case '\x05':
    case '\x06':
      param_2 = GameMode;
      break;
    case '\x02':
    case '\x04':
      param_2 = EditorMode;
      break;
    case '\x03':
      param_2 = PIEMode;
      break;
    default:
      if (2 < (byte)LogNavigation._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
      }
    case '\0':
    case '\a':
      param_2 = InvalidMode;
    }
  }
  if (((param_1->NavigationSystem).field0_0x0.DebugPtr == (UNavigationSystemBase *)0x0) || (param_5)
     ) {
    if ((param_3 == (UNavigationSystemConfig *)0x0) &&
       ((pAVar1 = UWorld::GetWorldSettings(param_1,false,true), pAVar1 == (AWorldSettings *)0x0 ||
        ((param_3 = (pAVar1->NavigationSystemConfigOverride).field0_0x0.DebugPtr,
         param_3 == (UNavigationSystemConfig *)0x0 &&
         (param_3 = (pAVar1->NavigationSystemConfig).field0_0x0.DebugPtr,
         param_3 == (UNavigationSystemConfig *)0x0)))))) {
      pUVar2 = (UNavigationSystemBase *)0x0;
    }
    else {
      pUVar2 = (UNavigationSystemBase *)(**(code **)(param_3->_padding_ + 0x2b0))(param_3,param_1);
    }
    UWorld::SetNavigationSystem(param_1,pUVar2);
  }
  if (param_4) {
    pUVar2 = (param_1->NavigationSystem).field0_0x0.DebugPtr;
    if (pUVar2 == (UNavigationSystemBase *)0x0) {
      if ((param_2 - EditorMode & 0xfb) == 0) {
        DiscardNavigationDataChunks(param_1);
      }
    }
    else {
      (**(code **)(*(longlong *)pUVar2 + 0x2e8))(pUVar2,param_1,param_2);
    }
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Build @ 147385310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FNavigationSystem::Build(UWorld *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&Delegates.Build,&local_28);
  plVar1 = (longlong *)0x0;
  if (Delegates.Build._16_4_ != 0) {
    plVar1 = (longlong *)Delegates.Build._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// DiscardNavigationDataChunks @ 14738e880

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

void __cdecl FNavigationSystem::DiscardNavigationDataChunks(UWorld *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  int iVar3;
  UObjectBaseUtility *this;
  UObjectBase *this_00;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  TArray<ULevel_*,TSizedDefaultAllocator<32>_> *pTVar7;
  FUObjectItem *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  undefined8 *puVar12;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  FString local_50;
  
  pTVar7 = UWorld::GetLevels(param_1);
  local_res20 = pTVar7->ArrayNum;
  uVar10 = (ulonglong)(int)local_res20;
  pFVar11 = (pTVar7->AllocatorInstance).Data;
  pFVar1 = pFVar11 + uVar10 * 8;
  do {
    if (pTVar7->ArrayNum != (int)uVar10) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<ULevel_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar11 == pFVar1) {
      return;
    }
    this = *(UObjectBaseUtility **)pFVar11;
    if (5 < (byte)LogNavigation._0_1_) {
      if ((this == (UObjectBaseUtility *)0x0) || (*(longlong *)&this->field_0x10 == 0)) {
        ::FString::FString(&local_50,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName(this,&local_50,(UObject *)0x0,None);
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
    }
    puVar12 = *(undefined8 **)&this[6].field_0x18;
    iVar3 = *(int *)&this[6].field_0x20;
    puVar2 = puVar12 + iVar3;
    while( true ) {
      if (*(int *)&this[6].field_0x20 != iVar3) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UNavigationDataChunk>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (puVar12 == puVar2) break;
      this_00 = (UObjectBase *)*puVar12;
      if (this_00 != (UObjectBase *)0x0) {
        pFVar8 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
        if ((((uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsRooted()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                               ,0xb8,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        UObjectBase::AtomicallySetFlags(this_00,RF_MirroredGarbage);
        pFVar8 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
        do {
          lVar4 = (pFVar8->field0_0x0).FlagsAndRefCount;
          uVar9 = (uint)((ulonglong)lVar4 >> 0x20);
          if ((uVar9 >> 0x15 & 1) != 0) break;
          if (((ulonglong)pFVar8 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (
                      L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          bVar6 = lVar4 == (pFVar8->field0_0x0).FlagsAndRefCount;
          if (bVar6) {
            (pFVar8->field0_0x0).FlagsAndRefCount =
                 (longlong)(int)uVar9 << 0x20 | (longlong)(int)lVar4 | 0x20000000000000;
          }
          UNLOCK();
        } while (!bVar6);
        pFVar8 = FUObjectArray::IndexToObject(&GUObjectArray,this_00->InternalIndex);
        FUObjectItem::ClearRootFlags(pFVar8,Async);
      }
      puVar12 = puVar12 + 1;
    }
    *(undefined4 *)&this[6].field_0x20 = 0;
    if (*(int *)&this[6].field_0x24 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)&this[6].field_0x18,0,(int *)&this[6].field_0x24);
    }
    pFVar11 = pFVar11 + 8;
    uVar10 = (ulonglong)local_res20;
  } while( true );
}

// FindPathFollowingAgentForActor @ 147394430

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

IPathFollowingAgentInterface * __cdecl
FNavigationSystem::FindPathFollowingAgentForActor(AActor *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UObjectBaseUtility *this;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar8;
  IPathFollowingAgentInterface *pIVar9;
  UClass *pUVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  pTVar8 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                     (&param_1->OwnedComponents);
  iVar3 = *(int *)&(pTVar8->Elements).field_0x28;
  iVar14 = 0;
  uVar6 = 1;
  iVar16 = 0;
  puVar1 = &(pTVar8->Elements).field_0x10;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(pTVar8->Elements).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1473944dd;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar6 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iVar7 = local_res10 + -1 + iVar16;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1473944dd:
  uVar13 = *(uint *)&(pTVar8->Elements).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar6,iVar14);
  TStack_50.CurrentBitIndex = iVar7;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_50._28_4_ = iVar7;
  TStack_50.BaseBitIndex = iVar16;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(pTVar8->Elements).field_0x8 -
                       *(int *)&(pTVar8->Elements).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pIVar9 = (IPathFollowingAgentInterface *)(*pcVar4)();
    return pIVar9;
  }
  uVar6 = *(uint *)&(pTVar8->Elements).field_0x28;
  if (uVar13 != uVar6) {
    puVar15 = *(undefined1 **)&(pTVar8->Elements).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1473945e0;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar6 < (int)uVar13) {
      uVar13 = uVar6;
    }
  }
LAB_1473945e0:
  while( true ) {
    if (*(int *)&(pTVar8->Elements).field_0x8 - *(int *)&(pTVar8->Elements).field_0x34 !=
        (int)uStack_30) {
      `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar13) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this = *(UObjectBaseUtility **)
            (*(longlong *)&pTVar8->Elements + (longlong)TStack_50.CurrentBitIndex * 0x10);
    if (this != (UObjectBaseUtility *)0x0) {
      pUVar10 = Z_Construct_UClass_UPathFollowingAgentInterface_NoRegister();
      pIVar9 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar10);
      if (pIVar9 != (IPathFollowingAgentInterface *)0x0) {
        return pIVar9;
      }
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return (IPathFollowingAgentInterface *)0x0;
}

// FindRunModeFromWorldType @ 147394670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNavigationSystemRunMode __cdecl FNavigationSystem::FindRunModeFromWorldType(UWorld *param_1)

{
  switch((param_1->WorldType).Value) {
  case '\0':
  case '\a':
    goto switchD_147394691_caseD_0;
  case '\x01':
  case '\x05':
  case '\x06':
    return GameMode;
  case '\x02':
  case '\x04':
    return EditorMode;
  case '\x03':
    return PIEMode;
  default:
    if (2 < (byte)LogNavigation._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    }
switchD_147394691_caseD_0:
    return InvalidMode;
  }
}

// GetBiggestSupportedAgent @ 1473996e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNavDataConfig * __cdecl FNavigationSystem::GetBiggestSupportedAgent(UWorld *param_1)

{
  FNavDataConfig *pFVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &Delegates.GetBiggestSupportedAgent,&local_28);
  plVar2 = (longlong *)0x0;
  if (Delegates.GetBiggestSupportedAgent._16_4_ != 0) {
    plVar2 = (longlong *)Delegates.GetBiggestSupportedAgent._8_8_;
  }
  pFVar1 = (FNavDataConfig *)(**(code **)(*plVar2 + 0x60))(plVar2,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return pFVar1;
}

// GetCoordTransform @ 14739a990

TTransform<double> * __cdecl FNavigationSystem::GetCoordTransform(Type param_1,Type param_2)

{
  TTransform<double> *pTVar1;
  
  pTVar1 = FCoordTransforms::Get(&CoordTypeTransforms,param_1,param_2);
  return pTVar1;
}

// GetCoordTypeTransforms @ 14739a9b0

FCoordTransforms * __cdecl FNavigationSystem::GetCoordTypeTransforms(void)

{
  return &CoordTypeTransforms;
}

// GetDefaultNavDataClass @ 14739ae20

TSubclassOf<AActor> __cdecl FNavigationSystem::GetDefaultNavDataClass(void)

{
  TObjectPtr<UClass> in_RCX;
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &Delegates.GetDefaultNavDataClass,&local_28);
  plVar1 = (longlong *)0x0;
  if (Delegates.GetDefaultNavDataClass._16_4_ != 0) {
    plVar1 = (longlong *)Delegates.GetDefaultNavDataClass._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (TSubclassOf<AActor>)in_RCX.field0_0x0;
}

// GetDefaultObstacleArea @ 14739ae80

TSubclassOf<UNavAreaBase> __cdecl FNavigationSystem::GetDefaultObstacleArea(void)

{
  TObjectPtr<UClass> in_RCX;
  
  *(TObjectPtr<UClass> *)in_RCX.field0_0x0 = DefaultObstacleArea.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((TObjectPtr<UClass>_u_0)DefaultObstacleArea.Class.field0_0x0 != (TObjectPtr<UClass>_u_0)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)DefaultObstacleArea.Class.field0_0x0);
  }
  return (TSubclassOf<UNavAreaBase>)in_RCX.field0_0x0;
}

// GetDefaultSupportedAgent @ 14739aec0

FNavDataConfig * __cdecl FNavigationSystem::GetDefaultSupportedAgent(void)

{
  FNavDataConfig *pFVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &Delegates.GetDefaultSupportedAgent,&local_28);
  plVar2 = (longlong *)0x0;
  if (Delegates.GetDefaultSupportedAgent._16_4_ != 0) {
    plVar2 = (longlong *)Delegates.GetDefaultSupportedAgent._8_8_;
  }
  pFVar1 = (FNavDataConfig *)(**(code **)(*plVar2 + 0x60))();
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return pFVar1;
}

// GetDefaultWalkableArea @ 14739af20

TSubclassOf<UNavAreaBase> __cdecl FNavigationSystem::GetDefaultWalkableArea(void)

{
  TObjectPtr<UClass> in_RCX;
  
  *(TObjectPtr<UClass> *)in_RCX.field0_0x0 = DefaultWalkableArea.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((TObjectPtr<UClass>_u_0)DefaultWalkableArea.Class.field0_0x0 != (TObjectPtr<UClass>_u_0)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)DefaultWalkableArea.Class.field0_0x0);
  }
  return (TSubclassOf<UNavAreaBase>)in_RCX.field0_0x0;
}

// GetFallbackSupportedAgent @ 14739b7c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNavDataConfig * __cdecl FNavigationSystem::GetFallbackSupportedAgent(UWorld *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FNavDataConfig::FNavDataConfig(&FallbackSupportedAgent,__real_420c0000,__real_43100000);
      atexit(`FNavigationSystem::GetFallbackSupportedAgent'::__l2::
             _dynamic_atexit_destructor_for__FallbackSupportedAgent__);
      _Init_thread_footer(&::_TSS0);
      return &FallbackSupportedAgent;
    }
  }
  return &FallbackSupportedAgent;
}

// GetFallbackSupportedAgent @ 14739b860

FNavDataConfig * __cdecl FNavigationSystem::GetFallbackSupportedAgent(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FNavDataConfig::FNavDataConfig(&FallbackSupportedAgent,__real_420c0000,__real_43100000);
      atexit(`FNavigationSystem::GetFallbackSupportedAgent'::__l2::
             _dynamic_atexit_destructor_for__FallbackSupportedAgent__);
      _Init_thread_footer(&::_TSS0);
      return &FallbackSupportedAgent;
    }
  }
  return &FallbackSupportedAgent;
}

// GetNavDataForActor @ 14739e490

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

INavigationDataInterface * __cdecl FNavigationSystem::GetNavDataForActor(AActor *param_1)

{
  INavigationDataInterface *pIVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&Delegates.GetNavDataForActor
             ,&local_28);
  plVar2 = (longlong *)0x0;
  if (Delegates.GetNavDataForActor._16_4_ != 0) {
    plVar2 = (longlong *)Delegates.GetNavDataForActor._8_8_;
  }
  pIVar1 = (INavigationDataInterface *)(**(code **)(*plVar2 + 0x60))(plVar2,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return pIVar1;
}

// GetWorldFromContextObject @ 1473a1c50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __cdecl FNavigationSystem::GetWorldFromContextObject(UObject *param_1)

{
  UWorld *pUVar1;
  
  if (param_1 != (UObject *)0x0) {
    pUVar1 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
    return pUVar1;
  }
  return (UWorld *)0x0;
}

// HasComponentData @ 1473a2460

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl FNavigationSystem::HasComponentData(UActorComponent *param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&Delegates.HasComponentData,
             &local_28);
  plVar2 = (longlong *)0x0;
  if (Delegates.HasComponentData._16_4_ != 0) {
    plVar2 = (longlong *)Delegates.HasComponentData._8_8_;
  }
  uVar1 = (**(code **)(*plVar2 + 0x60))(plVar2,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (bool)uVar1;
}

// IsEditorRunMode @ 1473a6760

bool __cdecl FNavigationSystem::IsEditorRunMode(FNavigationSystemRunMode param_1)

{
  return (param_1 - EditorMode & 0xfb) == 0;
}

// IsFollowingAPath @ 1473a6770

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl FNavigationSystem::IsFollowingAPath(AController *param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&Delegates.IsFollowingAPath,
             &local_28);
  plVar2 = (longlong *)0x0;
  if (Delegates.IsFollowingAPath._16_4_ != 0) {
    plVar2 = (longlong *)Delegates.IsFollowingAPath._8_8_;
  }
  uVar1 = (**(code **)(*plVar2 + 0x60))(plVar2,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (bool)uVar1;
}

// IsInBaseNavmesh @ 1473a6850

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl FNavigationSystem::IsInBaseNavmesh(UObject *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  char cVar3;
  UClass *pUVar4;
  ULevel *pUVar5;
  IWorldPartitionCell *pIVar6;
  longlong lVar7;
  UWorld *this;
  AWorldSettings *pAVar8;
  FScriptContainerElement *pFVar9;
  UObjectBaseUtility *this_00;
  undefined1 local_res8 [8];
  
  if (param_1 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar2 = (int)pUVar4->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar4->_padding_)) {
      this_00 = *(UObjectBaseUtility **)&param_1[4].field_0x8;
      goto LAB_1473a68bb;
    }
  }
  if (param_1 != (UObject *)0x0) {
    pUVar4 = AActor::GetPrivateStaticClass();
    iVar2 = (int)pUVar4->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       (this_00 = (UObjectBaseUtility *)param_1,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
       &pUVar4->_padding_)) goto LAB_1473a68bb;
  }
  this_00 = (UObjectBaseUtility *)0x0;
LAB_1473a68bb:
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar4 = Z_Construct_UClass_ULevel_NoRegister();
    pUVar5 = (ULevel *)UObjectBaseUtility::GetTypedOuter(this_00,pUVar4);
    if (((pUVar5 == (ULevel *)0x0) ||
        (pIVar6 = ULevel::GetWorldPartitionRuntimeCell(pUVar5), pIVar6 == (IWorldPartitionCell *)0x0
        )) || (lVar7 = (**(code **)((longlong)*pIVar6 + 0x38))(pIVar6), *(int *)(lVar7 + 8) < 1)) {
      return true;
    }
    this = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
    if ((this != (UWorld *)0x0) &&
       (pAVar8 = UWorld::GetWorldSettings(this,false,true), pAVar8 != (AWorldSettings *)0x0)) {
      pFVar9 = (pAVar8->BaseNavmeshDataLayers).AllocatorInstance.Data;
      iVar2 = (pAVar8->BaseNavmeshDataLayers).ArrayNum;
      pFVar1 = pFVar9 + (longlong)iVar2 * 8;
      while( true ) {
        if ((pAVar8->BaseNavmeshDataLayers).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UDataLayerAsset>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar9 == pFVar1) break;
        lVar7 = *(longlong *)pFVar9;
        if (lVar7 != 0) {
          pUVar4 = Z_Construct_UClass_ULevel_NoRegister();
          pUVar5 = (ULevel *)UObjectBaseUtility::GetTypedOuter(this_00,pUVar4);
          if (((pUVar5 != (ULevel *)0x0) &&
              (pIVar6 = ULevel::GetWorldPartitionRuntimeCell(pUVar5),
              pIVar6 != (IWorldPartitionCell *)0x0)) &&
             (cVar3 = (**(code **)((longlong)*pIVar6 + 0x28))(pIVar6,lVar7), cVar3 != '\0')) {
            return true;
          }
        }
        pFVar9 = pFVar9 + 8;
      }
      return false;
    }
  }
  return false;
}

// IsLevelVisibilityChanging @ 1473a6ba0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl FNavigationSystem::IsLevelVisibilityChanging(UObject *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  ULevel *this;
  
  if (param_1 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      this = UActorComponent::GetComponentLevel((UActorComponent *)param_1);
      goto LAB_1473a6bdd;
    }
  }
  if (param_1 == (UObject *)0x0) {
    return false;
  }
  pUVar3 = AActor::GetPrivateStaticClass();
  iVar1 = (int)pUVar3->_padding_;
  if (*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) {
    return false;
  }
  if ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar3->_padding_) {
    return false;
  }
  pUVar3 = Z_Construct_UClass_ULevel_NoRegister();
  this = (ULevel *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar3);
LAB_1473a6bdd:
  if (this == (ULevel *)0x0) {
    return false;
  }
  bVar2 = ULevel::HasVisibilityChangeRequestPending(this);
  return bVar2;
}

// OnActorBoundsChanged @ 1473aa280

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FNavigationSystem::OnActorBoundsChanged(AActor *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &Delegates.OnActorBoundsChanged,&local_28);
  plVar1 = (longlong *)0x0;
  if (Delegates.OnActorBoundsChanged._16_4_ != 0) {
    plVar1 = (longlong *)Delegates.OnActorBoundsChanged._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnActorRegistered @ 1473aa2e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FNavigationSystem::OnActorRegistered(AActor *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&Delegates.OnActorRegistered,
             &local_28);
  plVar1 = (longlong *)0x0;
  if (Delegates.OnActorRegistered._16_4_ != 0) {
    plVar1 = (longlong *)Delegates.OnActorRegistered._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnActorUnregistered @ 1473aa340

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FNavigationSystem::OnActorUnregistered(AActor *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &Delegates.OnActorUnregistered,&local_28);
  plVar1 = (longlong *)0x0;
  if (Delegates.OnActorUnregistered._16_4_ != 0) {
    plVar1 = (longlong *)Delegates.OnActorUnregistered._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnComponentBoundsChanged @ 1473aa3a0

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

void __cdecl
FNavigationSystem::OnComponentBoundsChanged
          (UActorComponent *param_1,TBox<double> *param_2,TBox<double> *param_3)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined4 uStack_70;
  FReadAccessScope local_68;
  double local_50;
  double dStack_48;
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_50 = (param_3->Min).field0_0x0._s_0.X;
  dStack_48 = (param_3->Min).field0_0x0._s_0.Y;
  local_40 = (param_3->Min).field0_0x0._s_0.Z;
  dStack_38 = (param_3->Max).field0_0x0._s_0.X;
  local_78 = &local_50;
  uStack_70 = 1;
  local_30 = (param_3->Max).field0_0x0._s_0.Y;
  dStack_28 = (param_3->Max).field0_0x0._s_0.Z;
  local_20._0_1_ = param_3->IsValid;
  local_20._1_1_ = param_3->Pad[0];
  local_20._2_1_ = param_3->Pad[1];
  local_20._3_1_ = param_3->Pad[2];
  local_20._4_1_ = param_3->Pad[3];
  local_20._5_1_ = param_3->Pad[4];
  local_20._6_1_ = param_3->Pad[5];
  local_20._7_1_ = param_3->Pad[6];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &Delegates.OnObjectBoundsChanged,&local_68);
  plVar1 = (longlong *)0x0;
  if (Delegates.OnObjectBoundsChanged._16_4_ != 0) {
    plVar1 = (longlong *)Delegates.OnObjectBoundsChanged._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(local_78._0_4_,param_1,param_2,&local_78);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_68);
  return;
}

// OnComponentRegistered @ 1473aa480

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FNavigationSystem::OnComponentRegistered(UActorComponent *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &Delegates.OnComponentRegistered,&local_28);
  plVar1 = (longlong *)0x0;
  if (Delegates.OnComponentRegistered._16_4_ != 0) {
    plVar1 = (longlong *)Delegates.OnComponentRegistered._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnComponentTransformChanged @ 1473aa4e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FNavigationSystem::OnComponentTransformChanged(USceneComponent *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &Delegates.OnComponentTransformChanged,&local_28);
  plVar1 = (longlong *)0x0;
  if (Delegates.OnComponentTransformChanged._16_4_ != 0) {
    plVar1 = (longlong *)Delegates.OnComponentTransformChanged._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnComponentUnregistered @ 1473aa540

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FNavigationSystem::OnComponentUnregistered(UActorComponent *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &Delegates.OnComponentUnregistered,&local_28);
  plVar1 = (longlong *)0x0;
  if (Delegates.OnComponentUnregistered._16_4_ != 0) {
    plVar1 = (longlong *)Delegates.OnComponentUnregistered._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnNavigationElementBoundsChanged @ 1473aa5d0

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
FNavigationSystem::OnNavigationElementBoundsChanged
          (UWorld *param_1,FNavigationElementHandle *param_2,TBox<double> *param_3,
          TArrayView<UE::Math::TBox<double>_const_,int> *param_4)

{
  longlong *plVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  int local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &Delegates.UpdateNavigationElementBoundsDelegate,&local_28);
  local_48 = *(undefined4 *)&param_4->DataPtr;
  uStack_44 = *(undefined4 *)((longlong)&param_4->DataPtr + 4);
  iStack_40 = param_4->ArrayNum;
  uStack_3c = *(undefined4 *)&param_4->field_0xc;
  local_38 = (param_2->OwnerUObject).WeakPtr.ObjectIndex;
  iStack_34 = (param_2->OwnerUObject).WeakPtr.ObjectSerialNumber;
  uStack_30 = (undefined4)param_2->SubElementId;
  uStack_2c = *(undefined4 *)((longlong)&param_2->SubElementId + 4);
  plVar1 = (longlong *)0x0;
  if (Delegates.UpdateNavigationElementBoundsDelegate._16_4_ != 0) {
    plVar1 = (longlong *)Delegates.UpdateNavigationElementBoundsDelegate._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(local_48,param_1,&local_38,param_3,&local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnObjectBoundsChanged @ 1473aa690

void __cdecl
FNavigationSystem::OnObjectBoundsChanged
          (UObject *param_1,TBox<double> *param_2,
          TArrayView<UE::Math::TBox<double>_const_,int> *param_3)

{
  longlong *plVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &Delegates.OnObjectBoundsChanged,&local_28);
  local_38 = *(undefined4 *)&param_3->DataPtr;
  uStack_34 = *(undefined4 *)((longlong)&param_3->DataPtr + 4);
  iStack_30 = param_3->ArrayNum;
  uStack_2c = *(undefined4 *)&param_3->field_0xc;
  plVar1 = (longlong *)0x0;
  if (Delegates.OnObjectBoundsChanged._16_4_ != 0) {
    plVar1 = (longlong *)Delegates.OnObjectBoundsChanged._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(local_38,param_1,param_2,&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnPostEditActorMove @ 1473aa720

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FNavigationSystem::OnPostEditActorMove(AActor *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &Delegates.OnPostEditActorMove,&local_28);
  plVar1 = (longlong *)0x0;
  if (Delegates.OnPostEditActorMove._16_4_ != 0) {
    plVar1 = (longlong *)Delegates.OnPostEditActorMove._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// RegisterComponent @ 1473afb40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FNavigationSystem::RegisterComponent(UActorComponent *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&Delegates.RegisterComponent,
             &local_28);
  plVar1 = (longlong *)0x0;
  if (Delegates.RegisterComponent._16_4_ != 0) {
    plVar1 = (longlong *)Delegates.RegisterComponent._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// RegisterNavRelevantObject @ 1473afd10

void __cdecl FNavigationSystem::RegisterNavRelevantObject(UObject *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &Delegates.RegisterNavRelevantObject,&local_28);
  plVar1 = (longlong *)0x0;
  if (Delegates.RegisterNavRelevantObject._16_4_ != 0) {
    plVar1 = (longlong *)Delegates.RegisterNavRelevantObject._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// RemoveActorData @ 1473b19c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FNavigationSystem::RemoveActorData(AActor *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&Delegates.RemoveActorData,
             &local_28);
  plVar1 = (longlong *)0x0;
  if (Delegates.RemoveActorData._16_4_ != 0) {
    plVar1 = (longlong *)Delegates.RemoveActorData._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// RemoveNavigationElement @ 1473b2310

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
FNavigationSystem::RemoveNavigationElement(UWorld *param_1,FNavigationElementHandle *param_2)

{
  longlong *plVar1;
  int local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &Delegates.RemoveNavigationElementDelegate,&local_28);
  local_38 = (param_2->OwnerUObject).WeakPtr.ObjectIndex;
  iStack_34 = (param_2->OwnerUObject).WeakPtr.ObjectSerialNumber;
  uStack_30 = (undefined4)param_2->SubElementId;
  uStack_2c = *(undefined4 *)((longlong)&param_2->SubElementId + 4);
  plVar1 = (longlong *)0x0;
  if (Delegates.RemoveNavigationElementDelegate._16_4_ != 0) {
    plVar1 = (longlong *)Delegates.RemoveNavigationElementDelegate._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(local_38,param_1,&local_38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// ResetDelegates @ 1473b3650

void __cdecl FNavigationSystem::ResetDelegates(void)

{
  FDelegates::FDelegates(&Delegates);
  return;
}

// StopMovement @ 1473b89a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl FNavigationSystem::StopMovement(AController *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&Delegates.StopMovement,
             &local_28);
  plVar1 = (longlong *)0x0;
  if (Delegates.StopMovement._16_4_ != 0) {
    plVar1 = (longlong *)Delegates.StopMovement._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// SupportsDynamicChanges @ 1473b8a00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl FNavigationSystem::SupportsDynamicChanges(UWorld *param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&Delegates,&local_28);
  plVar2 = (longlong *)0x0;
  if (Delegates.SupportsDynamicChangesDelegate._16_4_ != 0) {
    plVar2 = (longlong *)Delegates.SupportsDynamicChangesDelegate._8_8_;
  }
  uVar1 = (**(code **)(*plVar2 + 0x60))(plVar2,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (bool)uVar1;
}

// UnregisterComponent @ 1473bb540

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FNavigationSystem::UnregisterComponent(UActorComponent *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &Delegates.UnregisterComponent,&local_28);
  plVar1 = (longlong *)0x0;
  if (Delegates.UnregisterComponent._16_4_ != 0) {
    plVar1 = (longlong *)Delegates.UnregisterComponent._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// UnregisterNavRelevantObject @ 1473bb5a0

void __cdecl FNavigationSystem::UnregisterNavRelevantObject(UObject *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &Delegates.UnregisterNavRelevantObject,&local_28);
  plVar1 = (longlong *)0x0;
  if (Delegates.UnregisterNavRelevantObject._16_4_ != 0) {
    plVar1 = (longlong *)Delegates.UnregisterNavRelevantObject._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// UpdateActorAndComponentData @ 1473bb730

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FNavigationSystem::UpdateActorAndComponentData(AActor *param_1,bool param_2)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &Delegates.UpdateActorAndComponentData,&local_28);
  plVar1 = (longlong *)0x0;
  if (Delegates.UpdateActorAndComponentData._16_4_ != 0) {
    plVar1 = (longlong *)Delegates.UpdateActorAndComponentData._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// UpdateActorData @ 1473bb7a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FNavigationSystem::UpdateActorData(AActor *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&Delegates.UpdateActorData,
             &local_28);
  plVar1 = (longlong *)0x0;
  if (Delegates.UpdateActorData._16_4_ != 0) {
    plVar1 = (longlong *)Delegates.UpdateActorData._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// UpdateComponentData @ 1473bbd20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FNavigationSystem::UpdateComponentData(UActorComponent *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &Delegates.UpdateComponentData,&local_28);
  plVar1 = (longlong *)0x0;
  if (Delegates.UpdateComponentData._16_4_ != 0) {
    plVar1 = (longlong *)Delegates.UpdateComponentData._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// UpdateComponentDataAfterMove @ 1473bbd70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FNavigationSystem::UpdateComponentDataAfterMove(USceneComponent *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &Delegates.UpdateComponentDataAfterMove,&local_28);
  plVar1 = (longlong *)0x0;
  if (Delegates.UpdateComponentDataAfterMove._16_4_ != 0) {
    plVar1 = (longlong *)Delegates.UpdateComponentDataAfterMove._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// UpdateNavRelevantObject @ 1473bc4b0

void __cdecl FNavigationSystem::UpdateNavRelevantObject(UObject *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &Delegates.UpdateNavRelevantObject,&local_28);
  plVar1 = (longlong *)0x0;
  if (Delegates.UpdateNavRelevantObject._16_4_ != 0) {
    plVar1 = (longlong *)Delegates.UpdateNavRelevantObject._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// UpdateNavigationElement @ 1473bc510

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
FNavigationSystem::UpdateNavigationElement
          (UWorld *param_1,FNavigationElementHandle *param_2,FNavigationElement *param_3)

{
  longlong *plVar1;
  int local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &Delegates.UpdateNavigationElementDelegate,&local_28);
  local_38 = (param_2->OwnerUObject).WeakPtr.ObjectIndex;
  iStack_34 = (param_2->OwnerUObject).WeakPtr.ObjectSerialNumber;
  uStack_30 = (undefined4)param_2->SubElementId;
  uStack_2c = *(undefined4 *)((longlong)&param_2->SubElementId + 4);
  plVar1 = (longlong *)0x0;
  if (Delegates.UpdateNavigationElementDelegate._16_4_ != 0) {
    plVar1 = (longlong *)Delegates.UpdateNavigationElementDelegate._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(local_38,param_1,&local_38,param_3);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// VerifyNavigationRenderingComponents @ 1473bd8e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FNavigationSystem::VerifyNavigationRenderingComponents(UWorld *param_1,bool param_2)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &Delegates.VerifyNavigationRenderingComponents,&local_28);
  plVar1 = (longlong *)0x0;
  if (Delegates.VerifyNavigationRenderingComponents._16_4_ != 0) {
    plVar1 = (longlong *)Delegates.VerifyNavigationRenderingComponents._8_8_;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// WantsComponentChangeNotifies @ 1473bd950

bool __cdecl FNavigationSystem::WantsComponentChangeNotifies(void)

{
  return bWantsComponentChangeNotifies;
}

