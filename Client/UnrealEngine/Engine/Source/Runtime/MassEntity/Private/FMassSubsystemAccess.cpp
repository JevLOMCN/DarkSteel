// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 5

// FMassSubsystemAccess @ 1471db640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FMassSubsystemAccess * __thiscall
FMassSubsystemAccess::FMassSubsystemAccess(FMassSubsystemAccess *this,UWorld *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  UWorld *local_res8;
  
  piVar1 = &(this->Subsystems).ArrayNum;
  *(undefined8 *)&(this->ConstSubsystemsBitSet).field_0x10 = 0;
  piVar2 = &(this->Subsystems).ArrayMax;
  *(undefined4 *)&(this->ConstSubsystemsBitSet).field_0x18 = 0;
  *(undefined4 *)&(this->ConstSubsystemsBitSet).field_0x1c = 0x80;
  *(undefined8 *)&(this->MutableSubsystemsBitSet).field_0x10 = 0;
  *(undefined4 *)&(this->MutableSubsystemsBitSet).field_0x18 = 0;
  *(undefined4 *)&(this->MutableSubsystemsBitSet).field_0x1c = 0x80;
  (this->Subsystems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->World).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->World).WeakPtr,(FObjectPtr)&local_res8);
  iVar4 = FMassExternalSubsystemBitSetStructTrackerWrapper::StructTracker.StructTypeToIndexSet.
          Elements._8_4_ -
          FMassExternalSubsystemBitSetStructTrackerWrapper::StructTracker.StructTypeToIndexSet.
          Elements._52_4_;
  iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar4,&(this->Subsystems).AllocatorInstance,piVar1,piVar2);
  memset((this->Subsystems).AllocatorInstance.Data + (longlong)iVar3 * 8,0,(longlong)iVar4 << 3);
  return this;
}

// CacheSubsystem @ 1471ffb40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FMassSubsystemAccess::CacheSubsystem(FMassSubsystemAccess *this,uint param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UStruct *pUVar5;
  UClass *pUVar6;
  UWorld *pUVar7;
  USubsystem *pUVar8;
  uint uVar9;
  UStruct *local_res8;
  
  if (((int)param_1 < 0) || ((this->Subsystems).ArrayNum <= (int)param_1)) {
    TArray<USubsystem_*,TSizedDefaultAllocator<32>_>::AddZeroed
              (&this->Subsystems,((this->Subsystems).ArrayNum - param_1) + 1);
  }
  uVar9 = 0;
  if ((int)param_1 < (this->Subsystems).ArrayNum) {
    uVar9 = ~param_1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (*(longlong *)((this->Subsystems).AllocatorInstance.Data + (longlong)(int)param_1 * 8) != 0) {
    return true;
  }
  pUVar5 = FStructTracker::GetStructType
                     (&FMassExternalSubsystemBitSetStructTrackerWrapper::StructTracker,param_1);
  if (pUVar5 != (UStruct *)0x0) {
    pUVar6 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) goto LAB_1471ffc08;
  }
  pUVar5 = (UStruct *)0x0;
LAB_1471ffc08:
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar5 == (UStruct *)0x0) {
      return false;
    }
  }
  else {
    if (pUVar5 == (UStruct *)0x0) {
      return false;
    }
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUVar6 = Z_Construct_UClass_USubsystem_NoRegister();
  if (pUVar6 != (UClass *)0x0) {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      local_res8 = pUVar5;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      pUVar7 = (UWorld *)FWeakObjectPtr::Get(&(this->World).WeakPtr);
      pUVar8 = FetchSubsystemInstance(pUVar7,(TSubclassOf<USubsystem>)&local_res8);
      uVar9 = 0;
      if ((int)param_1 < (this->Subsystems).ArrayNum) {
        uVar9 = ~param_1 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      *(USubsystem **)((this->Subsystems).AllocatorInstance.Data + (longlong)(int)param_1 * 8) =
           pUVar8;
      return pUVar8 != (USubsystem *)0x0;
    }
  }
  return false;
}

// CacheSubsystemRequirements @ 1471ffd30

bool __thiscall
FMassSubsystemAccess::CacheSubsystemRequirements
          (FMassSubsystemAccess *this,FMassSubsystemRequirements *param_1)

{
  TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass> *pTVar1;
  int iVar2;
  TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass> *pTVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass> *pTVar8;
  ForElementType<unsigned_int> FVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar13;
  FIndexIterator local_48;
  ulonglong uVar12;
  
  bVar6 = true;
  bVar5 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty((FConstBitSetContainer *)param_1);
  if ((bVar5) &&
     (bVar5 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                        ((FConstBitSetContainer *)&param_1->RequiredMutableSubsystems), bVar5))
  goto LAB_1471ffebd;
  TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>
  ::GetIndexIterator((TTypeBitSetBase<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>,USubsystem,UClass,FStructTypeBitSet::FBitSetContainer,1>
                      *)param_1,&local_48,true);
  if (local_48.It.Index < *(int *)((longlong)local_48.It.Array + 0x18)) {
    while (bVar5 = bVar6 != false, bVar6 = false, bVar5) {
      bVar6 = CacheSubsystem(this,local_48.It.Index);
      do {
        local_48.It.Index = local_48.It.Index + 1;
        local_48.It._padding_._4_4_ = local_48.It._padding_._4_4_ * 2;
        if (local_48.It._padding_._4_4_ == 0) {
          local_48.It._padding_._4_4_ = 1;
          local_48.It._padding_._0_4_ = (int)local_48.It._padding_ + 1;
        }
        if (*(int *)((longlong)local_48.It.Array + 0x18) <= local_48.It.Index) goto LAB_1471ffdfc;
        FVar9 = (ForElementType<unsigned_int>)local_48.It.Array;
        if (*(ForElementType<unsigned_int> *)((longlong)local_48.It.Array + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar9 = *(ForElementType<unsigned_int> *)((longlong)local_48.It.Array + 0x10);
        }
      } while (((*(uint *)((longlong)FVar9 + (longlong)(int)local_48.It._padding_ * 4) &
                local_48.It._padding_._4_4_) != 0) != local_48.bValueToCheck);
      if (*(int *)((longlong)local_48.It.Array + 0x18) <= local_48.It.Index) break;
    }
  }
LAB_1471ffdfc:
  iVar2 = *(int *)&(param_1->RequiredMutableSubsystems).field_0x18;
  pTVar1 = &param_1->RequiredMutableSubsystems;
  uVar12 = 0;
  uVar10 = 1;
  uVar13 = uVar12;
  if (iVar2 < 1) {
LAB_1471ffe5f:
    if ((int)uVar12 < iVar2) goto LAB_1471ffe64;
  }
  else {
    pTVar3 = *(TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
               **)&(param_1->RequiredMutableSubsystems).field_0x10;
    pTVar8 = pTVar3;
    if (pTVar3 == (TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                   *)0x0) {
      pTVar8 = pTVar1;
    }
    if ((*(byte *)pTVar8 & 1) == 0) {
      do {
        uVar4 = uVar10 * 2;
        uVar11 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
        iVar7 = (int)uVar13 + 1;
        if (uVar4 != 0) {
          iVar7 = (int)uVar13;
        }
        uVar10 = 1;
        if (uVar4 != 0) {
          uVar10 = uVar4;
        }
        uVar13 = (ulonglong)iVar7;
        if (iVar2 <= (int)uVar11) goto LAB_1471ffeb3;
        pTVar8 = pTVar1;
        if (pTVar3 != (TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                       *)0x0) {
          pTVar8 = pTVar3;
        }
      } while ((*(uint *)(&pTVar8->field_0x0 + uVar13 * 4) & uVar10) == 0);
      goto LAB_1471ffe5f;
    }
LAB_1471ffe64:
    do {
      if (bVar6 == false) {
        return false;
      }
      bVar6 = CacheSubsystem(this,(uint)uVar12);
      iVar2 = *(int *)&(param_1->RequiredMutableSubsystems).field_0x18;
      do {
        uVar4 = uVar10 * 2;
        uVar11 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
        iVar7 = (int)uVar13 + 1;
        if (uVar4 != 0) {
          iVar7 = (int)uVar13;
        }
        uVar10 = 1;
        if (uVar4 != 0) {
          uVar10 = uVar4;
        }
        uVar13 = (ulonglong)iVar7;
        if (iVar2 <= (int)uVar11) goto LAB_1471ffeb3;
        pTVar3 = *(TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                   **)&(param_1->RequiredMutableSubsystems).field_0x10;
        pTVar8 = pTVar1;
        if (pTVar3 != (TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                       *)0x0) {
          pTVar8 = pTVar3;
        }
      } while ((*(uint *)(&pTVar8->field_0x0 + uVar13 * 4) & uVar10) == 0);
    } while ((int)uVar11 < iVar2);
  }
LAB_1471ffeb3:
  if (bVar6 == false) {
    return false;
  }
LAB_1471ffebd:
  if (this != (FMassSubsystemAccess *)param_1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)this,
               (TBitArray<FDefaultBitArrayAllocator> *)param_1);
  }
  if (&this->MutableSubsystemsBitSet != &param_1->RequiredMutableSubsystems) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->MutableSubsystemsBitSet,
               (TBitArray<FDefaultBitArrayAllocator> *)&param_1->RequiredMutableSubsystems);
  }
  return bVar6;
}

// FetchSubsystemInstance @ 1472197d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

USubsystem * __cdecl
FMassSubsystemAccess::FetchSubsystemInstance(UWorld *param_1,TSubclassOf<USubsystem> param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  UGameInstance *pUVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_static_class_USubsystem_*___cdecl_FMassSubsystemAccess::FetchSubsystemInstance(UWorld_*,TSubclassOf<USubsystem>)_::_2_::FStat_Mass_FetchSubsystemInstance>
  FVar11;
  UClass *pUVar12;
  USubsystem *pUVar13;
  UClass *pUVar14;
  UClass *pUVar15;
  ULocalPlayer *pUVar16;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar17;
  FSubsystemCollectionBase *this_01;
  FNameEntryId FVar18;
  FName FVar19;
  UClass *pUVar20;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_68;
  FName local_60;
  FName local_58;
  FStatMessage local_48;
  UClass *pUVar21;
  
  pUVar21 = (UClass *)0x0;
  pUVar20 = (UClass *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_Mass_FetchSubsystemInstance ==
        (FThreadSafeStaticStat<_public:_static_class_USubsystem_*___cdecl_FMassSubsystemAccess::FetchSubsystemInstance(UWorld_*,TSubclassOf<USubsystem>)_::_2_::FStat_Mass_FetchSubsystemInstance>
         )0x0) {
      pFVar10 = ::FName::FName(&local_68,"Mass_FetchSubsystemInstance");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_Mass_FetchSubsystemInstance,*pFVar10,
                 L"Mass_FetchSubsystemInstance","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_Mass_FetchSubsystemInstance;
  if (StatPtr_Mass_FetchSubsystemInstance ==
      (FThreadSafeStaticStat<_public:_static_class_USubsystem_*___cdecl_FMassSubsystemAccess::FetchSubsystemInstance(UWorld_*,TSubclassOf<USubsystem>)_::_2_::FStat_Mass_FetchSubsystemInstance>
       )0x0) {
    pFVar10 = ::FName::FName(&local_60,"Mass_FetchSubsystemInstance");
    FVar11 = (FThreadSafeStaticStat<_public:_static_class_USubsystem_*___cdecl_FMassSubsystemAccess::FetchSubsystemInstance(UWorld_*,TSubclassOf<USubsystem>)_::_2_::FStat_Mass_FetchSubsystemInstance>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_Mass_FetchSubsystemInstance,*pFVar10
                          ,L"Mass_FetchSubsystemInstance","STATGROUP_Quick","STATCAT_Advanced",
                          L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar11;
  bVar6 = false;
  bVar8 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar18 = FVar19.ComparisonIndex.Value;
  uVar17 = FVar19.Number;
  if ((FVar18.Value == 0) && (uVar17 == 0)) {
LAB_147219945:
    bVar7 = false;
    FVar19 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar18.Value;
        local_res18.Number = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassSubsystemAccess.cpp"
                   ,0x1a);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147219945;
    local_res20.s.LowPart = FVar18.Value;
    local_res20.s.HighPart = uVar17;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar7 = true;
  }
  lVar3 = *(longlong *)param_2.Class.field0_0x0;
  if ((lVar3 == 0) ||
     (pUVar12 = Z_Construct_UClass_USubsystem_NoRegister(), pUVar12 == (UClass *)0x0)) {
LAB_147219985:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubsystemClass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassSubsystemAccess.cpp"
                       ,0x1c,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      pUVar13 = (USubsystem *)(*pcVar5)();
      return pUVar13;
    }
  }
  else {
    iVar2 = (int)pUVar12->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar12->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if ((!bVar9) || (*(longlong *)param_2.Class.field0_0x0 == 0)) goto LAB_147219985;
  }
  lVar3 = *(longlong *)param_2.Class.field0_0x0;
  pUVar12 = pUVar21;
  if ((lVar3 != 0) &&
     (pUVar14 = Z_Construct_UClass_USubsystem_NoRegister(), pUVar14 != (UClass *)0x0)) {
    iVar2 = (int)pUVar14->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar14->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (bVar9) {
      pUVar12 = *(UClass **)param_2.Class.field0_0x0;
    }
  }
  pUVar14 = Z_Construct_UClass_UWorldSubsystem_NoRegister();
  if (pUVar14 == (UClass *)0x0) {
LAB_147219a9f:
    lVar3 = *(longlong *)param_2.Class.field0_0x0;
    pUVar12 = pUVar21;
    if ((lVar3 != 0) &&
       (pUVar14 = Z_Construct_UClass_USubsystem_NoRegister(), pUVar14 != (UClass *)0x0)) {
      iVar2 = (int)pUVar14->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar14->_padding_)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if (bVar9) {
        pUVar12 = *(UClass **)param_2.Class.field0_0x0;
      }
    }
    pUVar14 = Z_Construct_UClass_UEngineSubsystem_NoRegister();
    if (pUVar14 != (UClass *)0x0) {
      iVar2 = (int)pUVar14->_padding_;
      if (((int)pUVar12->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar14->_padding_)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if (bVar9) {
        pUVar20 = *(UClass **)param_2.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_147219b56:
          this_01 = (FSubsystemCollectionBase *)&GEngine->EngineSubsystemCollection;
          if (pUVar20 != (UClass *)0x0) goto LAB_147219b69;
        }
        else {
          if (pUVar20 != (UClass *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pUVar20);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar20 == (UClass *)0x0))
          goto LAB_147219b56;
          UE::GC::MarkAsReachable((UObject *)pUVar20);
          this_01 = (FSubsystemCollectionBase *)&GEngine->EngineSubsystemCollection;
LAB_147219b69:
          pUVar12 = Z_Construct_UClass_UEngineSubsystem_NoRegister();
          if (pUVar12 != (UClass *)0x0) {
            iVar2 = (int)pUVar12->_padding_;
            if (((int)pUVar20->_padding_ < iVar2) ||
               ((longlong *)*(undefined1 **)(pUVar20->_padding_ + (longlong)iVar2 * 8) !=
                &pUVar12->_padding_)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if (bVar9) goto LAB_147219da5;
          }
        }
        pUVar20 = pUVar21;
        goto LAB_147219da5;
      }
    }
    lVar3 = *(longlong *)param_2.Class.field0_0x0;
    pUVar12 = pUVar21;
    if ((lVar3 != 0) &&
       (pUVar14 = Z_Construct_UClass_USubsystem_NoRegister(), pUVar14 != (UClass *)0x0)) {
      iVar2 = (int)pUVar14->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar14->_padding_)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if (bVar9) {
        pUVar12 = *(UClass **)param_2.Class.field0_0x0;
      }
    }
    pUVar15 = Z_Construct_UClass_UGameInstanceSubsystem_NoRegister();
    pUVar14 = pUVar20;
    if (pUVar15 != (UClass *)0x0) {
      iVar2 = (int)pUVar15->_padding_;
      if (((int)pUVar12->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar15->_padding_)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if (bVar9) {
        pUVar14 = pUVar21;
        if ((param_1 == (UWorld *)0x0) ||
           (pUVar4 = (param_1->OwningGameInstance).field0_0x0.DebugPtr, pUVar14 = pUVar20,
           pUVar4 == (UGameInstance *)0x0)) goto LAB_147219db0;
        pUVar20 = *(UClass **)param_2.Class.field0_0x0;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_147219c64:
          if (pUVar20 == (UClass *)0x0) goto LAB_147219c97;
LAB_147219c69:
          pUVar12 = Z_Construct_UClass_UGameInstanceSubsystem_NoRegister();
          if (pUVar12 == (UClass *)0x0) goto LAB_147219c97;
          iVar2 = (int)pUVar12->_padding_;
          if (((int)pUVar20->_padding_ < iVar2) ||
             ((longlong *)*(undefined1 **)(pUVar20->_padding_ + (longlong)iVar2 * 8) !=
              &pUVar12->_padding_)) {
            bVar9 = false;
          }
          else {
            bVar9 = true;
          }
          if (!bVar9) goto LAB_147219c97;
        }
        else {
          if (pUVar20 != (UClass *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pUVar20);
          }
          if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_147219c64;
          if (pUVar20 != (UClass *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pUVar20);
            goto LAB_147219c69;
          }
LAB_147219c97:
          pUVar20 = pUVar21;
        }
        this_01 = (FSubsystemCollectionBase *)&pUVar4->SubsystemCollection;
        goto LAB_147219da5;
      }
    }
    lVar3 = *(longlong *)param_2.Class.field0_0x0;
    pUVar20 = pUVar21;
    if ((lVar3 != 0) &&
       (pUVar12 = Z_Construct_UClass_USubsystem_NoRegister(), pUVar12 != (UClass *)0x0)) {
      iVar2 = (int)pUVar12->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar2) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar12->_padding_)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if (bVar9) {
        pUVar20 = *(UClass **)param_2.Class.field0_0x0;
      }
    }
    pUVar12 = Z_Construct_UClass_ULocalPlayerSubsystem_NoRegister();
    if (pUVar12 == (UClass *)0x0) goto LAB_147219db0;
    iVar2 = (int)pUVar12->_padding_;
    if (((int)pUVar20->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar20->_padding_ + (longlong)iVar2 * 8) !=
        &pUVar12->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (((!bVar9) || (param_1 == (UWorld *)0x0)) ||
       (pUVar16 = UWorld::GetFirstLocalPlayerFromController(param_1), pUVar16 == (ULocalPlayer *)0x0
       )) goto LAB_147219db0;
    pUVar20 = *(UClass **)param_2.Class.field0_0x0;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_147219d68:
      if (pUVar20 == (UClass *)0x0) goto LAB_147219d9b;
LAB_147219d6d:
      pUVar12 = Z_Construct_UClass_ULocalPlayerSubsystem_NoRegister();
      if (pUVar12 == (UClass *)0x0) goto LAB_147219d9b;
      iVar2 = (int)pUVar12->_padding_;
      if (((int)pUVar20->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar20->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar12->_padding_)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if (!bVar9) goto LAB_147219d9b;
    }
    else {
      if (pUVar20 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar20);
      }
      if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_147219d68;
      if (pUVar20 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar20);
        goto LAB_147219d6d;
      }
LAB_147219d9b:
      pUVar20 = pUVar21;
    }
    this_01 = (FSubsystemCollectionBase *)&pUVar16->SubsystemCollection;
  }
  else {
    iVar2 = (int)pUVar14->_padding_;
    if (((int)pUVar12->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar2 * 8) !=
        &pUVar14->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (!bVar9) goto LAB_147219a9f;
    pUVar14 = pUVar21;
    if (param_1 == (UWorld *)0x0) goto LAB_147219db0;
    pUVar20 = *(UClass **)param_2.Class.field0_0x0;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_147219a5d:
      if (pUVar20 == (UClass *)0x0) goto LAB_147219a90;
LAB_147219a62:
      pUVar12 = Z_Construct_UClass_UWorldSubsystem_NoRegister();
      if (pUVar12 == (UClass *)0x0) goto LAB_147219a90;
      iVar2 = (int)pUVar12->_padding_;
      if (((int)pUVar20->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar20->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar12->_padding_)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      if (!bVar9) goto LAB_147219a90;
    }
    else {
      if (pUVar20 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar20);
      }
      if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_147219a5d;
      if (pUVar20 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar20);
        goto LAB_147219a62;
      }
LAB_147219a90:
      pUVar20 = pUVar21;
    }
    this_01 = (FSubsystemCollectionBase *)&param_1->SubsystemCollection;
  }
LAB_147219da5:
  pUVar14 = (UClass *)FSubsystemCollectionBase::GetSubsystemInternal(this_01,pUVar20);
LAB_147219db0:
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar19 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Index = FVar19.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return (USubsystem *)pUVar14;
}

// SetSubsystemRequirements @ 14724d950

void __thiscall
FMassSubsystemAccess::SetSubsystemRequirements
          (FMassSubsystemAccess *this,FMassSubsystemRequirements *param_1)

{
  if (this != (FMassSubsystemAccess *)param_1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)this,
               (TBitArray<FDefaultBitArrayAllocator> *)param_1);
  }
  if (&this->MutableSubsystemsBitSet != &param_1->RequiredMutableSubsystems) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->MutableSubsystemsBitSet,
               (TBitArray<FDefaultBitArrayAllocator> *)&param_1->RequiredMutableSubsystems);
  }
  return;
}

