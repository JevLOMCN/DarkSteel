// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// AddRef @ 142017fc0

void __thiscall FUObjectItem::AddRef(FUObjectItem *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  
  LOCK();
  lVar3 = (this->field0_0x0).FlagsAndRefCount;
  (this->field0_0x0).FlagsAndRefCount = (this->field0_0x0).FlagsAndRefCount + 1;
  UNLOCK();
  lVar3 = lVar3 + 1;
  if (((int)lVar3 == 1) && ((lVar3 >> 0x20 & 0x4e500000U) == 0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((this->field1_0x8).Object == (UObjectBase *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("GetObject()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x170,L"Setting an internal object flag on a null object entry");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      UObjectBase::MarkAsReachable((this->field1_0x8).Object);
    }
    MarkRootAsDirty(this);
    return;
  }
  return;
}

// ClearRootFlags @ 142023e60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall FUObjectItem::ClearRootFlags(FUObjectItem *this,EInternalObjectFlags param_1)

{
  longlong lVar1;
  EInternalObjectFlags EVar2;
  bool bVar3;
  
  do {
    lVar1 = (this->field0_0x0).FlagsAndRefCount;
    EVar2 = (EInternalObjectFlags)((ulonglong)lVar1 >> 0x20);
    if ((param_1 & EVar2) == Borrowed) {
      return false;
    }
    if (((ulonglong)this & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                );
    }
    LOCK();
    bVar3 = lVar1 == (this->field0_0x0).FlagsAndRefCount;
    if (bVar3) {
      (this->field0_0x0).FlagsAndRefCount =
           (longlong)(int)(EVar2 & ~param_1) << 0x20 | (longlong)(int)lVar1;
    }
    UNLOCK();
  } while (!bVar3);
  if ((((lVar1 >> 0x20 & 0x4e500000U) != 0) &&
      ((EVar2 & ~param_1 & (RootSet|AsyncLoadingPhase2|Async|Native|AsyncLoadingPhase1|LoaderImport)
       ) == Borrowed)) && ((int)lVar1 == 0)) {
    MarkRootAsDirty(this);
  }
  return true;
}

// MarkRootAsDirty @ 142064270

/* WARNING: Removing unreachable block (ram,0x000142064292) */

void __thiscall FUObjectItem::MarkRootAsDirty(FUObjectItem *this)

{
  int iVar1;
  byte bVar2;
  atomic<unsigned_char> aVar3;
  TConsumeAllMpmcQueue<int,FMemory> TVar4;
  atomic<UE::TConsumeAllMpmcQueue<int,FMemory>::FNode_*> aVar5;
  TConsumeAllMpmcQueue<int,FMemory> TVar6;
  bool bVar7;
  
  TVar6.Head = UE::GC::Private::GDirtyRoots.Head;
  iVar1 = ((this->field1_0x8).Object)->InternalIndex;
  if (((byte)UE::GC::Private::GRootsMutex.State & 1) == 0) {
    UE::GC::Private::GRootsMutex.State = UE::GC::Private::GRootsMutex.State | 1;
    LOCK();
    UNLOCK();
    LOCK();
    UE::GC::Private::GDirtyRoots.Head = (atomic<UE::TConsumeAllMpmcQueue<int,FMemory>::FNode_*>)0x0;
    UNLOCK();
    while (TVar6.Head != (atomic<UE::TConsumeAllMpmcQueue<int,FMemory>::FNode_*>)0x0) {
                    /* WARNING: Load size is inaccurate */
      aVar5 = *TVar6.Head;
      UE::GC::Private::ProcessDirtyRootNoLock(*(int *)((longlong)TVar6.Head + 8));
      FMemory::Free((void *)TVar6.Head);
      TVar6.Head = aVar5;
    }
    UE::GC::Private::ProcessDirtyRootNoLock(iVar1);
    LOCK();
    aVar3 = UE::GC::Private::GRootsMutex.State + -1;
    UNLOCK();
    bVar2 = (byte)UE::GC::Private::GRootsMutex.State & 2;
    UE::GC::Private::GRootsMutex.State = aVar3;
    if (bVar2 != 0) {
      UE::FMutex::WakeWaitingThread(&UE::GC::Private::GRootsMutex);
      return;
    }
  }
  else {
    aVar5 = (atomic<UE::TConsumeAllMpmcQueue<int,FMemory>::FNode_*>)FMemory::Malloc(0x10,8);
    *(atomic<UE::TConsumeAllMpmcQueue<int,FMemory>::FNode_*> *)aVar5 =
         (atomic<UE::TConsumeAllMpmcQueue<int,FMemory>::FNode_*>)0x0;
    *(int *)((longlong)aVar5 + 8) = iVar1;
    TVar6 = UE::GC::Private::GDirtyRoots;
    do {
      *(atomic<UE::TConsumeAllMpmcQueue<int,FMemory>::FNode_*> *)aVar5 = TVar6.Head;
      LOCK();
      bVar7 = TVar6.Head != UE::GC::Private::GDirtyRoots.Head;
      TVar4.Head = aVar5;
      if (bVar7) {
        TVar6 = UE::GC::Private::GDirtyRoots;
        TVar4 = UE::GC::Private::GDirtyRoots;
      }
      UE::GC::Private::GDirtyRoots.Head = TVar4.Head;
      UNLOCK();
    } while (bVar7);
  }
  return;
}

// SetRootFlags @ 14208f040

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall FUObjectItem::SetRootFlags(FUObjectItem *this,EInternalObjectFlags param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 uVar3;
  EInternalObjectFlags EVar4;
  bool bVar5;
  bool bVar6;
  
  bVar5 = false;
  do {
    lVar1 = (this->field0_0x0).FlagsAndRefCount;
    EVar4 = (EInternalObjectFlags)((ulonglong)lVar1 >> 0x20);
    if ((EVar4 & param_1) == param_1) goto LAB_14208f0cc;
    if (((ulonglong)this & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                );
    }
    LOCK();
    bVar6 = lVar1 == (this->field0_0x0).FlagsAndRefCount;
    if (bVar6) {
      (this->field0_0x0).FlagsAndRefCount =
           (longlong)(int)(EVar4 | param_1) << 0x20 | (longlong)(int)lVar1;
    }
    UNLOCK();
  } while (!bVar6);
  bVar5 = true;
  if (((lVar1 >> 0x20 & 0x4e500000U) == 0) && ((int)lVar1 == 0)) {
    MarkRootAsDirty(this);
  }
LAB_14208f0cc:
  if ((UE::GC::GIsIncrementalReachabilityPending & bVar5) != 0) {
    if (((this->field1_0x8).Object == (UObjectBase *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("GetObject()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x2e2,L"Setting an internal object flag on a null object entry"), bVar6)
       ) {
      pcVar2 = (code *)swi(3);
      uVar3 = (*pcVar2)();
      return (bool)uVar3;
    }
    UObjectBase::MarkAsReachable((this->field1_0x8).Object);
  }
  return bVar5;
}

// ThisThreadAtomicallySetFlag @ 142090db0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
FUObjectItem::ThisThreadAtomicallySetFlag(FUObjectItem *this,EInternalObjectFlags param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  EInternalObjectFlags EVar5;
  EInternalObjectFlags EVar6;
  bool bVar7;
  
  if (((param_1 &
       ~(PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|ClusterRoot|
         ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|AutoRTFMConstructionAborted|
         ReachabilityFlag2|ReachabilityFlag1|ReachabilityFlag0)) != Borrowed) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(int32(FlagToSet) & ~int32((EInternalObjectFlags::Remote | EInternalObjectFlags::RemoteReference | EInternalObjectFlags::Borrowed | EInternalObjectFlags::ReachabilityFlag0 | EInternalObjectFlags::ReachabilityFlag1 | EInternalObjectFlags::ReachabilityFlag2 | EInternalObjectFlags::AutoRTFMConstructionAborted | EInternalObjectFlags::LoaderImport | EInternalObjectFlags::Garbage | EInternalObjectFlags::ReachableInCluster | EInternalObjectFlags::ClusterRoot | EInternalObjectFlags::Native | EInternalObjectFlags::Async | EInternalObjectFlags::AsyncLoadingPhase1 | EInternalObjectFlags::AsyncLoadingPhase2 | EInternalObjectFlags::RootSet | EInternalObjectFlags::PendingConstruction | EInternalObjectFlags::Unreachable))) == 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x118,L"%d is not a valid internal flag value"), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  EVar6 = param_1 & ~(Unreachable|ReachabilityFlag2|ReachabilityFlag1|ReachabilityFlag0);
  if ((param_1 & (RootSet|AsyncLoadingPhase2|Async|Native|AsyncLoadingPhase1|LoaderImport)) ==
      Borrowed) {
    do {
      lVar1 = (this->field0_0x0).FlagsAndRefCount;
      EVar5 = (EInternalObjectFlags)((ulonglong)lVar1 >> 0x20);
      if ((EVar5 & EVar6) == EVar6) {
        return false;
      }
      if (((ulonglong)this & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      bVar3 = lVar1 == (this->field0_0x0).FlagsAndRefCount;
      if (bVar3) {
        (this->field0_0x0).FlagsAndRefCount =
             (longlong)(int)(EVar5 | EVar6) << 0x20 | (longlong)(int)lVar1;
      }
      UNLOCK();
    } while (!bVar3);
    bVar3 = true;
  }
  else {
    bVar3 = false;
    do {
      lVar1 = (this->field0_0x0).FlagsAndRefCount;
      EVar5 = (EInternalObjectFlags)((ulonglong)lVar1 >> 0x20);
      if ((EVar5 & EVar6) == EVar6) goto LAB_142090e7d;
      if (((ulonglong)this & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (
                  L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                  );
      }
      LOCK();
      bVar7 = lVar1 == (this->field0_0x0).FlagsAndRefCount;
      if (bVar7) {
        (this->field0_0x0).FlagsAndRefCount =
             (longlong)(int)(EVar5 | EVar6) << 0x20 | (longlong)(int)lVar1;
      }
      UNLOCK();
    } while (!bVar7);
    bVar3 = true;
    if (((lVar1 >> 0x20 & 0x4e500000U) == 0) && ((int)lVar1 == 0)) {
      MarkRootAsDirty(this);
    }
LAB_142090e7d:
    if ((UE::GC::GIsIncrementalReachabilityPending & bVar3) != 0) {
      if (((this->field1_0x8).Object == (UObjectBase *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("GetObject()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x2e2,L"Setting an internal object flag on a null object entry"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      UObjectBase::MarkAsReachable((this->field1_0x8).Object);
    }
  }
  return bVar3;
}

// FUObjectItem @ 142258810

FUObjectItem * __thiscall FUObjectItem::FUObjectItem(FUObjectItem *this)

{
  (this->field0_0x0).FlagsAndRefCount = 0;
  (this->field1_0x8).Object = (UObjectBase *)0x0;
  this->SerialNumber = 0;
  this->ClusterRootIndex = 0;
  (this->StatID).StatIdPtr = &TStatId::TStatId_NAME_None;
  return this;
}

// CreateStatID @ 142268770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FUObjectItem::CreateStatID(FUObjectItem *this)

{
  UClass *pUVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_CreateStatId> FVar11;
  ForElementType<UObjectBase_const_*> FVar12;
  FNameEntry *pFVar13;
  ForAnyElementType FVar14;
  FNameEntryId FVar15;
  FName FVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 auStackY_218 [32];
  undefined1 local_1b8 [8];
  undefined1 local_1b0 [8];
  TObjectPtr<UObject>_u_0 local_1a8;
  FString local_1a0;
  FLLMScope local_190 [2];
  uint local_188;
  uint uStack_184;
  FColor_u_0 local_180 [2];
  FName local_178;
  FName local_170;
  FName local_160;
  FUObjectItem *local_158;
  FName local_150;
  TStatIdData *local_148;
  FMemScope local_140;
  FName *local_138;
  uint *local_130;
  undefined1 *local_128;
  undefined1 *local_120;
  FName local_118;
  undefined1 local_110 [8];
  FName local_108;
  ForElementType<UObjectBase_const_*> local_100;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_218;
  local_158 = this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name32,L"Debug/CreateStatID");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_190,LLMScope_Name32,false,None,Default,true);
  FMemScope::FMemScope(&local_140,&LLMScope_Name32,true);
  FVar11 = StatPtr_CreateStatId;
  if (StatPtr_CreateStatId == (FThreadSafeStaticStat<FStat_CreateStatId>)0x0) {
    pFVar10 = ::FName::FName(&local_118,"CreateStatId");
    FVar11 = (FThreadSafeStaticStat<FStat_CreateStatId>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_CreateStatId,*pFVar10,L"CreateStatId",
                        "STATGROUP_Object","STATCAT_Advanced",L"Object",true,true,ST_int64,true,
                        false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar11;
  bVar3 = false;
  bVar5 = false;
  local_170.ComparisonIndex.Value = 0;
  local_170.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar17 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar17 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_180[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_180[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_178.ComparisonIndex.Value = FVar15.Value;
        local_178.Number = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_178,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectArray.cpp"
                   ,0x21);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_188 = FVar15.Value;
      uStack_184 = uVar17;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar4 = true;
      goto LAB_14226892d;
    }
  }
  bVar4 = false;
  FVar16 = local_170;
LAB_14226892d:
  local_1a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a0.Data.ArrayNum = 0;
  local_1a0.Data.ArrayMax = 0;
  ::FString::Reserve(&local_1a0,0xff);
  local_1a8 = (TObjectPtr<UObject>_u_0)(this->field1_0x8).Object;
  local_100.SecondaryData = (ForElementType<UObjectBase_const_*>)0x0;
  local_38 = 0;
  local_34 = 0x18;
  do {
    FVar12 = (ForElementType<UObjectBase_const_*>)&local_100;
    if (local_100.SecondaryData != (ForElementType<UObjectBase_const_*>)0x0) {
      FVar12 = local_100.SecondaryData;
    }
    if ((ulonglong)FVar12 <= &local_1a8) {
      FVar12 = (ForElementType<UObjectBase_const_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<UObjectBase_const_*>)0x0) {
        FVar12 = local_100.SecondaryData;
      }
      if ((&local_1a8 < (TObjectPtr<UObject>_u_0 *)((longlong)FVar12 + (longlong)local_34 * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar8 = local_38;
    if (local_38 == local_34) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>::ForElementType<UObjectBase_const_*>_>
                        (0x808,&local_100,&local_34);
    }
    local_38 = iVar8 + 1;
    FVar12 = (ForElementType<UObjectBase_const_*>)&local_100;
    if (local_100.SecondaryData != (ForElementType<UObjectBase_const_*>)0x0) {
      FVar12 = local_100.SecondaryData;
    }
    ((TObjectPtr<UObject>_u_0 *)((longlong)FVar12 + (longlong)iVar8 * 8))->DebugPtr =
         (UObject *)local_1a8;
    local_1a8 = (TObjectPtr<UObject>_u_0)
                (((TNonAccessTrackedObjectPtr<UObject> *)&(local_1a8.DebugPtr)->field_0x20)->
                ObjectPtr).field0_0x0.DebugPtr;
  } while ((UObjectBase *)local_1a8.DebugPtr != (UObjectBase *)0x0);
  pUVar1 = (((this->field1_0x8).Object)->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
  if (pUVar1 != (UClass *)0x0) {
    local_160 = (FName)pUVar1->_padding_;
    pFVar13 = ::FName::GetDisplayNameEntry(&local_160);
    FNameEntry::AppendNameToString(pFVar13,&local_1a0);
  }
  bVar6 = true;
  uVar17 = local_38 - 1;
  if (-1 < (int)uVar17) {
    lVar18 = (longlong)(int)uVar17 * 8;
    do {
      uVar9 = 0;
      if ((int)uVar17 < local_38) {
        uVar9 = ~uVar17 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar12 = (ForElementType<UObjectBase_const_*>)&local_100;
      if (local_100.SecondaryData != (ForElementType<UObjectBase_const_*>)0x0) {
        FVar12 = local_100.SecondaryData;
      }
      local_1a8 = (TObjectPtr<UObject>_u_0)
                  ((TObjectPtr<UObject>_u_0 *)(lVar18 + (longlong)FVar12))->DebugPtr;
      pFVar10 = (FName *)(**(code **)(*(longlong *)local_1a8.DebugPtr + 0x18))
                                   (local_1a8.DebugPtr,local_110);
      pFVar13 = ::FName::GetDisplayNameEntry(pFVar10);
      if (bVar6) {
        FNameEntry::AppendNameToPathString(pFVar13,&local_1a0);
      }
      else {
        if (1 < local_1a0.Data.ArrayNum) {
          ::FString::AppendChars(&local_1a0,L".",1);
        }
        FNameEntry::AppendNameToString(pFVar13,&local_1a0);
      }
      bVar6 = false;
      lVar18 = lVar18 + -8;
      uVar17 = uVar17 - 1;
      this = local_158;
    } while (-1 < (int)uVar17);
  }
  local_1b0[0] = 1;
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_1a0.Data.ArrayNum != 0) {
    FVar14.Data = local_1a0.Data.AllocatorInstance.Data;
  }
  local_1b8[0] = 1;
  local_188 = 2;
  pFVar10 = ::FName::FName(&local_108,(wchar_t *)FVar14.Data);
  local_150 = *pFVar10;
  local_138 = &local_150;
  local_130 = &local_188;
  local_128 = local_1b8;
  local_120 = local_1b0;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_UObjects>'::__l2::<lambda_1>::operator()
            (&local_138);
  (this->StatID).StatIdPtr = local_148;
  if (local_100.SecondaryData != (ForElementType<UObjectBase_const_*>)0x0) {
    FMemory::Free((void *)local_100.SecondaryData);
  }
  if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FThreadStats::AddMessage(FVar16,CycleScopeEnd);
  }
  FMemScope::~FMemScope(&local_140);
  FLLMScope::~FLLMScope(local_190);
  return;
}

// ThisThreadAtomicallyClearedFlag @ 14228ca60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
FUObjectItem::ThisThreadAtomicallyClearedFlag(FUObjectItem *this,EInternalObjectFlags param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  EInternalObjectFlags EVar5;
  EInternalObjectFlags EVar6;
  
  if (((param_1 &
       ~(PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|ClusterRoot|
         ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|AutoRTFMConstructionAborted|
         ReachabilityFlag2|ReachabilityFlag1|ReachabilityFlag0)) != Borrowed) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(int32(FlagToClear) & ~int32((EInternalObjectFlags::Remote | EInternalObjectFlags::RemoteReference | EInternalObjectFlags::Borrowed | EInternalObjectFlags::ReachabilityFlag0 | EInternalObjectFlags::ReachabilityFlag1 | EInternalObjectFlags::ReachabilityFlag2 | EInternalObjectFlags::AutoRTFMConstructionAborted | EInternalObjectFlags::LoaderImport | EInternalObjectFlags::Garbage | EInternalObjectFlags::ReachableInCluster | EInternalObjectFlags::ClusterRoot | EInternalObjectFlags::Native | EInternalObjectFlags::Async | EInternalObjectFlags::AsyncLoadingPhase1 | EInternalObjectFlags::AsyncLoadingPhase2 | EInternalObjectFlags::RootSet | EInternalObjectFlags::PendingConstruction | EInternalObjectFlags::Unreachable))) == 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0xf4,L"%d is not a valid internal flag value"), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  EVar6 = param_1 & ~(Unreachable|ReachabilityFlag2|ReachabilityFlag1|ReachabilityFlag0);
  if ((param_1 & (RootSet|AsyncLoadingPhase2|Async|Native|AsyncLoadingPhase1|LoaderImport)) !=
      Borrowed) {
    bVar3 = ClearRootFlags(this,EVar6);
    return bVar3;
  }
  do {
    lVar1 = (this->field0_0x0).FlagsAndRefCount;
    EVar5 = (EInternalObjectFlags)((ulonglong)lVar1 >> 0x20);
    if ((EVar6 & EVar5) == Borrowed) {
      return false;
    }
    if (((ulonglong)this & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                );
    }
    LOCK();
    bVar3 = lVar1 == (this->field0_0x0).FlagsAndRefCount;
    if (bVar3) {
      (this->field0_0x0).FlagsAndRefCount =
           (longlong)(int)(~EVar6 & EVar5) << 0x20 | (longlong)(int)lVar1;
    }
    UNLOCK();
  } while (!bVar3);
  return true;
}

