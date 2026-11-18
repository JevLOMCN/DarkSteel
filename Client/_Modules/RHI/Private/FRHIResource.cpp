// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 10

// FRHIResource @ 145c87c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRHIResource * __thiscall FRHIResource::FRHIResource(FRHIResource *this,ERHIResourceType param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  longlong lVar4;
  FWriteBuffer *pFVar5;
  bool bVar6;
  undefined1 auStackY_78 [32];
  FLLMScope local_44;
  FLLMScope local_40;
  FLLMScope local_3c;
  FRHIResource *local_38;
  FRHIResource *local_30;
  FMemScope local_28;
  TLogScope<0> local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_78;
  this->_padding_ = (longlong)&___7FRHIResource__6B_;
  (this->AtomicFlags).Packed = (atomic<unsigned_int>)0x0;
  this->ResourceType = param_1;
  bVar6 = GRHITrackingResources != false;
  puVar2 = &this->field_0xd;
  this->bCommitted = '\x01';
  this->bBeingTracked = '\0';
  this->bAllowExtendLifetime = '\x01';
  (this->OwnerName).ComparisonIndex = 0;
  (this->OwnerName).Number = 0;
  if (bVar6) {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_30 = this;
    if (*(int *)(lVar4 + 0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::FName::FName(&LLMScope_Name526,L"RHIMisc/ResourceTracking");
        _Init_thread_footer(&::_TSS0);
      }
    }
    FLLMScope::FLLMScope(&local_3c,LLMScope_Name526,false,None,Default,true);
    FMemScope::FMemScope(&local_28,&LLMScope_Name526,true);
    FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_40,Assets,Default);
    FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_44,AssetClasses,Default);
    bVar6 = -1 < MetadataChannel->Enabled;
    if (bVar6) {
      UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>(&local_20);
      *(undefined8 *)(local_20._8_8_ + 0x28) = *(undefined8 *)(local_20._8_8_ + 0x20);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&GRHIResourceTrackingCriticalSection);
    this->bBeingTracked = '\x01';
    TSet<FRHIResource_*,DefaultKeyFuncs<FRHIResource_*,0>,FDefaultSetAllocator>::
    Emplace<FRHIResource_*_const_&>(&GRHITrackedResources,&local_38,(bool *)&local_30);
    LeaveCriticalSection((LPCRITICAL_SECTION)&GRHIResourceTrackingCriticalSection);
    if (bVar6) {
      if (*(char *)(lVar4 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pFVar5 = *(FWriteBuffer **)(lVar4 + 0x20);
      if ((int)pFVar5 - *(int *)&pFVar5->Cursor < 1) {
        pFVar5 = UE::Trace::Private::Writer_NextBuffer();
      }
      *pFVar5->Cursor = '\n';
      pFVar5->Cursor = pFVar5->Cursor + 1;
      pFVar5->Committed = pFVar5->Cursor;
    }
    FLLMScope::~FLLMScope(&local_44);
    FLLMScope::~FLLMScope(&local_40);
    FMemScope::~FMemScope(&local_28);
    FLLMScope::~FLLMScope(&local_3c);
  }
  return this;
}

// ~FRHIResource @ 145c8b0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FRHIResource::~FRHIResource(FRHIResource *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FWriteBuffer *pFVar4;
  undefined1 auStackY_68 [32];
  FLLMScope local_34;
  FLLMScope local_30;
  FLLMScope local_2c;
  FMemScope local_28;
  TLogScope<0> local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  this->_padding_ = (longlong)&___7FRHIResource__6B_;
  if ((GIsRequestingExit == false) &&
     (*(FRHIResource **)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xeb8) !=
      this)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsEngineExitRequested() || CurrentlyDeleting == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                       ,0x24,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (((uint)(this->AtomicFlags).Packed & 0x3fffffff) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AtomicFlags.GetNumRefs(std::memory_order_relaxed) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                       ,0x25,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(undefined8 *)(lVar1 + 0xeb8) = 0;
  if (this->bBeingTracked != '\0') {
    if (*(int *)(lVar1 + 0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::FName::FName(&LLMScope_Name543,L"RHIMisc/ResourceTracking");
        _Init_thread_footer(&::_TSS0);
      }
    }
    FLLMScope::FLLMScope(&local_2c,LLMScope_Name543,false,None,Default,true);
    FMemScope::FMemScope(&local_28,&LLMScope_Name543,true);
    FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_30,Assets,Default);
    FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_34,AssetClasses,Default);
    bVar3 = -1 < MetadataChannel->Enabled;
    if (bVar3) {
      UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>(&local_20);
      *(undefined8 *)(local_20._8_8_ + 0x28) = *(undefined8 *)(local_20._8_8_ + 0x20);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&GRHIResourceTrackingCriticalSection);
    TSet<FRHIResource_*,DefaultKeyFuncs<FRHIResource_*,0>,FDefaultSetAllocator>::Remove
              (&GRHITrackedResources,this);
    this->bBeingTracked = '\0';
    LeaveCriticalSection((LPCRITICAL_SECTION)&GRHIResourceTrackingCriticalSection);
    if (bVar3) {
      if (*(char *)(lVar1 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pFVar4 = *(FWriteBuffer **)(lVar1 + 0x20);
      if ((int)pFVar4 - *(int *)&pFVar4->Cursor < 1) {
        pFVar4 = UE::Trace::Private::Writer_NextBuffer();
      }
      *pFVar4->Cursor = '\n';
      pFVar4->Cursor = pFVar4->Cursor + 1;
      pFVar4->Committed = pFVar4->Cursor;
    }
    FLLMScope::~FLLMScope(&local_34);
    FLLMScope::~FLLMScope(&local_30);
    FMemScope::~FMemScope(&local_28);
    FLLMScope::~FLLMScope(&local_2c);
  }
  return;
}

// BeginTrackingResource @ 145c91b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FRHIResource::BeginTrackingResource(FRHIResource *param_1)

{
  longlong lVar1;
  FWriteBuffer *pFVar2;
  bool bVar3;
  undefined1 auStackY_78 [32];
  FLLMScope local_44;
  FLLMScope local_40;
  FLLMScope local_3c;
  FRHIResource *local_38;
  FRHIResource *local_30;
  FMemScope local_28;
  TLogScope<0> local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if (GRHITrackingResources) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_30 = param_1;
    if (*(int *)(lVar1 + 0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::FName::FName(&LLMScope_Name526,L"RHIMisc/ResourceTracking");
        _Init_thread_footer(&::_TSS0);
      }
    }
    FLLMScope::FLLMScope(&local_3c,LLMScope_Name526,false,None,Default,true);
    FMemScope::FMemScope(&local_28,&LLMScope_Name526,true);
    FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_40,Assets,Default);
    FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_44,AssetClasses,Default);
    bVar3 = -1 < MetadataChannel->Enabled;
    if (bVar3) {
      UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>(&local_20);
      *(undefined8 *)(local_20._8_8_ + 0x28) = *(undefined8 *)(local_20._8_8_ + 0x20);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&GRHIResourceTrackingCriticalSection);
    param_1->bBeingTracked = '\x01';
    TSet<FRHIResource_*,DefaultKeyFuncs<FRHIResource_*,0>,FDefaultSetAllocator>::
    Emplace<FRHIResource_*_const_&>(&GRHITrackedResources,&local_38,(bool *)&local_30);
    LeaveCriticalSection((LPCRITICAL_SECTION)&GRHIResourceTrackingCriticalSection);
    if (bVar3) {
      if (*(char *)(lVar1 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pFVar2 = *(FWriteBuffer **)(lVar1 + 0x20);
      if ((int)pFVar2 - *(int *)&pFVar2->Cursor < 1) {
        pFVar2 = UE::Trace::Private::Writer_NextBuffer();
      }
      *pFVar2->Cursor = '\n';
      pFVar2->Cursor = pFVar2->Cursor + 1;
      pFVar2->Committed = pFVar2->Cursor;
    }
    FLLMScope::~FLLMScope(&local_44);
    FLLMScope::~FLLMScope(&local_40);
    FMemScope::~FMemScope(&local_28);
    FLLMScope::~FLLMScope(&local_3c);
  }
  return;
}

// DeleteResources @ 145c99040

void __cdecl
FRHIResource::DeleteResources(TArray<FRHIResource_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  FScriptContainerElement *pFVar10;
  longlong *plVar11;
  int iVar12;
  undefined1 local_res8 [8];
  
  pFVar10 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar3 * 8;
  do {
    if (param_1->ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRHIResource_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar1) {
      return;
    }
    puVar4 = *(undefined8 **)pFVar10;
    uVar7 = *(uint *)(puVar4 + 1);
    if (((uVar7 >> 0x1e & 1) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(LocalPacked & MarkedForDeleteBit) != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xbb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((int)uVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(LocalPacked & DeletingBit) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0xbc,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((uVar7 & 0x3fffffff) == 0) {
      LOCK();
      *(uint *)(puVar4 + 1) = *(uint *)(puVar4 + 1) | 0x80000000;
      UNLOCK();
      plVar11 = (longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xeb8);
      *plVar11 = (longlong)puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      if (*plVar11 != 0) {
        iVar12 = 0x49;
        pcVar9 = 
        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp";
        pcVar8 = "CurrentlyDeleting == nullptr";
LAB_145c991a3:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2(pcVar8,pcVar9,iVar12,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    else {
      uVar7 = *(uint *)(puVar4 + 1);
      do {
        LOCK();
        uVar2 = *(uint *)(puVar4 + 1);
        bVar6 = uVar7 == uVar2;
        if (bVar6) {
          *(uint *)(puVar4 + 1) = uVar7 ^ 0x40000000;
          uVar2 = uVar7;
        }
        uVar7 = uVar2;
        UNLOCK();
      } while (!bVar6);
      if (((int)uVar7 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(OldPacked & DeletingBit) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                             ,0xb2,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((uVar7 >> 0x1e & 1) == 0) {
        iVar12 = 0xb4;
        pcVar9 = "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
        ;
        pcVar8 = "OldMarkedForDelete == true";
        goto LAB_145c991a3;
      }
    }
    pFVar10 = pFVar10 + 8;
  } while( true );
}

// EndTrackingResource @ 145c9d4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FRHIResource::EndTrackingResource(FRHIResource *param_1)

{
  longlong lVar1;
  FWriteBuffer *pFVar2;
  bool bVar3;
  undefined1 auStackY_68 [32];
  FLLMScope local_34;
  FLLMScope local_30;
  FLLMScope local_2c;
  FMemScope local_28;
  TLogScope<0> local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_68;
  if (param_1->bBeingTracked != '\0') {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(int *)(lVar1 + 0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::FName::FName(&LLMScope_Name543,L"RHIMisc/ResourceTracking");
        _Init_thread_footer(&::_TSS0);
      }
    }
    FLLMScope::FLLMScope(&local_2c,LLMScope_Name543,false,None,Default,true);
    FMemScope::FMemScope(&local_28,&LLMScope_Name543,true);
    FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_30,Assets,Default);
    FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_34,AssetClasses,Default);
    bVar3 = -1 < MetadataChannel->Enabled;
    if (bVar3) {
      UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>(&local_20);
      *(undefined8 *)(local_20._8_8_ + 0x28) = *(undefined8 *)(local_20._8_8_ + 0x20);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&GRHIResourceTrackingCriticalSection);
    TSet<FRHIResource_*,DefaultKeyFuncs<FRHIResource_*,0>,FDefaultSetAllocator>::Remove
              (&GRHITrackedResources,param_1);
    param_1->bBeingTracked = '\0';
    LeaveCriticalSection((LPCRITICAL_SECTION)&GRHIResourceTrackingCriticalSection);
    if (bVar3) {
      if (*(char *)(lVar1 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pFVar2 = *(FWriteBuffer **)(lVar1 + 0x20);
      if ((int)pFVar2 - *(int *)&pFVar2->Cursor < 1) {
        pFVar2 = UE::Trace::Private::Writer_NextBuffer();
      }
      *pFVar2->Cursor = '\n';
      pFVar2->Cursor = pFVar2->Cursor + 1;
      pFVar2->Committed = pFVar2->Cursor;
    }
    FLLMScope::~FLLMScope(&local_34);
    FLLMScope::~FLLMScope(&local_30);
    FMemScope::~FMemScope(&local_28);
    FLLMScope::~FLLMScope(&local_2c);
  }
  return;
}

// GatherResourcesToDelete @ 145ca7000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FRHIResource::GatherResourcesToDelete
          (TArray<FRHIResource_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  int *piVar1;
  FName FVar2;
  atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> aVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  TConsumeAllMpmcQueue<FRHIResource_*,FMemory> TVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_GatherDeletedResources> FVar11;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  uint uVar12;
  FNameEntryId FVar13;
  LARGE_INTEGER local_res8;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  FName local_58;
  FStatMessage local_48;
  
  FVar11 = StatPtr_STAT_GatherDeletedResources;
  if (StatPtr_STAT_GatherDeletedResources ==
      (FThreadSafeStaticStat<FStat_STAT_GatherDeletedResources>)0x0) {
    pFVar10 = ::FName::FName(&local_res18,"STAT_GatherDeletedResources");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_GatherDeletedResources>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GatherDeletedResources,*pFVar10,
                        L"Gather Deleted Resources","STATGROUP_RHICMDLIST","STATCAT_Advanced",
                        L"RHICmdList",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar13 = FVar2.ComparisonIndex.Value;
  uVar12 = FVar2.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar13.Value;
        local_res8.s.HighPart = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIResources.cpp"
                   ,0x68);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar13.Value;
      local_res8.s.HighPart = uVar12;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      bVar6 = true;
      local_58 = FVar2;
      goto LAB_145ca7160;
    }
  }
  bVar6 = false;
LAB_145ca7160:
  TVar8.Head = PendingDeletesWithLifetimeExtension.Head;
  if (param_2) {
    LOCK();
    PendingDeletesWithLifetimeExtension.Head =
         (atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*>)0x0;
    UNLOCK();
    while (TVar8.Head != (atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*>)0x0) {
                    /* WARNING: Load size is inaccurate */
      aVar3 = *TVar8.Head;
      iVar9 = param_1->ArrayNum;
      uVar4 = *(undefined8 *)((longlong)TVar8.Head + 8);
      if (iVar9 == param_1->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar9 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) = uVar4;
      FMemory::Free((void *)TVar8.Head);
      TVar8.Head = aVar3;
    }
  }
  TVar8.Head = PendingDeletes.Head;
  LOCK();
  PendingDeletes.Head = (atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*>)0x0;
  UNLOCK();
  while (TVar8.Head != (atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*>)0x0) {
                    /* WARNING: Load size is inaccurate */
    aVar3 = *TVar8.Head;
    iVar9 = param_1->ArrayNum;
    uVar4 = *(undefined8 *)((longlong)TVar8.Head + 8);
    if (iVar9 == param_1->ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar9 + 1;
    *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 8) = uVar4;
    FMemory::Free((void *)TVar8.Head);
    TVar8.Head = aVar3;
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (local_58 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Index.Value = local_58.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = local_58.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return;
}

// GetResourceInfo @ 145cab940

bool __thiscall FRHIResource::GetResourceInfo(FRHIResource *this,FRHIResourceInfo *param_1)

{
  uint7 uStack_2f;
  undefined5 uStack_15;
  
  (param_1->Name).ComparisonIndex = 0;
  (param_1->Name).Number = 0;
  *(ulonglong *)&param_1->Type = (ulonglong)uStack_2f << 8;
  (param_1->VRamAllocation).AllocationStart = 0;
  (param_1->VRamAllocation).AllocationSize = 0;
  param_1->IsTransient = (bool)(char)0x10100;
  param_1->bValid = (bool)(char)(0x10100 >> 8);
  param_1->bResident = (bool)(char)(0x10100 >> 0x10);
  *(undefined5 *)&param_1->field_0x23 = uStack_15;
  return false;
}

// MarkForDelete @ 145cb3e20

void __thiscall FRHIResource::MarkForDelete(FRHIResource *this)

{
  atomic<unsigned_int> aVar1;
  code *pcVar2;
  TConsumeAllMpmcQueue<FRHIResource_*,FMemory> TVar3;
  atomic<unsigned_int> aVar4;
  atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> aVar5;
  TConsumeAllMpmcQueue<FRHIResource_*,FMemory> TVar6;
  bool bVar7;
  
  aVar4 = (this->AtomicFlags).Packed;
  do {
    LOCK();
    aVar1 = (this->AtomicFlags).Packed;
    bVar7 = aVar4 == aVar1;
    if (bVar7) {
      (this->AtomicFlags).Packed = (atomic<unsigned_int>)((uint)aVar4 | 0x40000000);
      aVar1 = aVar4;
    }
    aVar4 = aVar1;
    UNLOCK();
  } while (!bVar7);
  if (((int)aVar4 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(OldPacked & DeletingBit) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0xab,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((uint)aVar4 >> 0x1e & 1) == 0) {
    if (this->bAllowExtendLifetime != '\0') {
      aVar5 = (atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*>)
              FMemory::Malloc(0x10,8);
      *(atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> *)aVar5 =
           (atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*>)0x0;
      *(FRHIResource **)((longlong)aVar5 + 8) = this;
      TVar6 = PendingDeletesWithLifetimeExtension;
      do {
        *(atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> *)aVar5 = TVar6.Head;
        LOCK();
        bVar7 = TVar6.Head != PendingDeletesWithLifetimeExtension.Head;
        TVar3.Head = aVar5;
        if (bVar7) {
          TVar6 = PendingDeletesWithLifetimeExtension;
          TVar3 = PendingDeletesWithLifetimeExtension;
        }
        PendingDeletesWithLifetimeExtension.Head = TVar3.Head;
        UNLOCK();
      } while (bVar7);
      return;
    }
    aVar5 = (atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*>)
            FMemory::Malloc(0x10,8);
    *(atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> *)aVar5 =
         (atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*>)0x0;
    *(FRHIResource **)((longlong)aVar5 + 8) = this;
    TVar6 = PendingDeletes;
    do {
      *(atomic<UE::TConsumeAllMpmcQueue<FRHIResource_*,FMemory>::FNode_*> *)aVar5 = TVar6.Head;
      LOCK();
      bVar7 = TVar6.Head != PendingDeletes.Head;
      TVar3.Head = aVar5;
      if (bVar7) {
        TVar6 = PendingDeletes;
        TVar3 = PendingDeletes;
      }
      PendingDeletes.Head = TVar3.Head;
      UNLOCK();
    } while (bVar7);
  }
  return;
}

// StartTrackingAllResources @ 145cc2270

void __cdecl FRHIResource::StartTrackingAllResources(void)

{
  GRHITrackingResources = true;
  return;
}

// StopTrackingAllResources @ 145cc2630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FRHIResource::StopTrackingAllResources(void)

{
  byte *pbVar1;
  code *pcVar2;
  TSet<FRHIResource_*,DefaultKeyFuncs<FRHIResource_*,0>,FDefaultSetAllocator> *pTVar3;
  bool bVar4;
  FWriteBuffer *pFVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  undefined1 auStackY_f8 [32];
  undefined1 local_c7 [3];
  FLLMScope local_c4;
  FLLMScope local_c0;
  FLLMScope local_bc;
  TSet<FRHIResource_*,DefaultKeyFuncs<FRHIResource_*,0>,FDefaultSetAllocator> *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int local_88;
  FMemScope local_80;
  TSet<FRHIResource_*,DefaultKeyFuncs<FRHIResource_*,0>,FDefaultSetAllocator> *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  TLogScope<0> local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name560,L"RHIMisc/ResourceTracking");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_bc,LLMScope_Name560,false,None,Default,true);
  FMemScope::FMemScope(&local_80,&LLMScope_Name560,true);
  FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_c0,Assets,Default);
  FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_c4,AssetClasses,Default);
  bVar15 = -1 < MetadataChannel->Enabled;
  if (bVar15) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>(&local_48);
    *(undefined8 *)(local_48._8_8_ + 0x28) = *(undefined8 *)(local_48._8_8_ + 0x20);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&GRHIResourceTrackingCriticalSection);
  iVar13 = GRHITrackedResources.Elements._40_4_;
  iStack_b0 = 0;
  local_98 = 0;
  uStack_ac = 1;
  iStack_9c = 0;
  if (GRHITrackedResources.Elements._40_4_ != 0) {
    puVar11 = (uint *)&GRHITrackedResources.Elements.field_0x10;
    if (GRHITrackedResources.Elements._32_8_ != 0) {
      puVar11 = (uint *)GRHITrackedResources.Elements._32_8_;
    }
    uVar14 = *puVar11;
    while (uVar14 == 0) {
      lVar7 = (longlong)iStack_b0;
      local_98 = local_98 + 0x20;
      iStack_b0 = iStack_b0 + 1;
      iStack_9c = GRHITrackedResources.Elements._40_4_;
      if ((int)(GRHITrackedResources.Elements._40_4_ + -1 +
               (GRHITrackedResources.Elements._40_4_ + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0)
      goto LAB_145cc27a0;
      uVar14 = puVar11[lVar7 + 1];
    }
    uStack_ac = -uVar14 & uVar14;
    uVar12 = (ulonglong)uStack_ac * 2 + 1;
    lVar7 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_88 = (int)lVar7;
    iStack_9c = local_98 + -1 + local_88;
    if ((int)GRHITrackedResources.Elements._40_4_ < iStack_9c) {
      iStack_9c = GRHITrackedResources.Elements._40_4_;
    }
  }
LAB_145cc27a0:
  local_b8 = &GRHITrackedResources;
  uVar14 = GRHITrackedResources.Elements._40_4_ & 0xffffffe0;
  iStack_90 = GRHITrackedResources.Elements._8_4_ - GRHITrackedResources.Elements._52_4_;
  local_a8 = 0x154be9400;
  uStack_a0 = 0xffffffff;
  TStack_70.CurrentBitIndex = iStack_9c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_ac,iStack_b0);
  local_78 = &GRHITrackedResources;
  iVar10 = (int)GRHITrackedResources.Elements._40_4_ >> 5;
  TStack_70._28_4_ = iStack_9c;
  TStack_70.BaseBitIndex = local_98;
  uStack_50 = CONCAT44(uStack_8c,iStack_90);
  bVar6 = GRHITrackedResources.Elements._40_1_;
  TStack_70.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&GRHITrackedResources.Elements.field_0x10;
  iStack_94 = iStack_9c;
  if (((int)GRHITrackedResources.Elements._40_4_ < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iVar13 != GRHITrackedResources.Elements._40_4_) {
    lVar7 = 0x154be9400;
    if (GRHITrackedResources.Elements._32_8_ != 0) {
      lVar7 = GRHITrackedResources.Elements._32_8_;
    }
    uVar9 = -1 << (bVar6 & 0x1f) & *(uint *)(lVar7 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      iVar13 = GRHITrackedResources.Elements._40_4_;
      if ((int)(GRHITrackedResources.Elements._40_4_ + -1 +
               (GRHITrackedResources.Elements._40_4_ + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10)
      goto LAB_145cc28c0;
      uVar9 = *(uint *)(lVar7 + 4 + lVar8 * 4);
    }
    uVar12 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar13 = (int)lVar7 + -1 + uVar14;
    if ((int)GRHITrackedResources.Elements._40_4_ < iVar13) {
      iVar13 = GRHITrackedResources.Elements._40_4_;
    }
  }
LAB_145cc28c0:
  while( true ) {
    pTVar3 = local_78;
    if (*(int *)&(local_78->Elements).field_0x8 - *(int *)&(local_78->Elements).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<FRHIResource_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_c7);
    }
    if (((TStack_70.CurrentBitIndex == iVar13) &&
        (TStack_70.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&GRHITrackedResources.Elements.field_0x10)) &&
       (pTVar3 == &GRHITrackedResources)) break;
    lVar7 = *(longlong *)
             (*(longlong *)&pTVar3->Elements + (longlong)TStack_70.CurrentBitIndex * 0x10);
    if (lVar7 != 0) {
      pbVar1 = (byte *)(lVar7 + 0xd);
      *pbVar1 = *pbVar1 & 0xfb;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  bVar4 = 1 < GRHITrackedResources.HashSize;
  if (!bVar4) {
    TSet<FRHIResource_*,DefaultKeyFuncs<FRHIResource_*,0>,FDefaultSetAllocator>::UnhashElements
              (&GRHITrackedResources);
  }
  uVar12 = (ulonglong)_tls_index;
  GRHITrackedResources.Elements._8_4_ = 0;
  if (GRHITrackedResources.Elements._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)&GRHITrackedResources,0,
               (int *)&GRHITrackedResources.Elements.field_0xc);
  }
  GRHITrackedResources.Elements._48_4_ = 0xffffffff;
  GRHITrackedResources.Elements._52_4_ = 0;
  GRHITrackedResources.Elements._40_4_ = 0;
  if (0x80 < (uint)GRHITrackedResources.Elements._44_4_) {
    GRHITrackedResources.Elements._44_4_ = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&GRHITrackedResources.Elements.field_0x10,0);
  }
  if (bVar4) {
    GRHITrackedResources.HashSize = 1;
    TSet<FRHIResource_*,DefaultKeyFuncs<FRHIResource_*,0>,FDefaultSetAllocator>::Rehash
              (&GRHITrackedResources);
  }
  GRHITrackingResources = false;
  LeaveCriticalSection((LPCRITICAL_SECTION)&GRHIResourceTrackingCriticalSection);
  if (bVar15) {
    lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar12 * 8);
    if (*(char *)(lVar7 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar5 = *(FWriteBuffer **)(lVar7 + 0x20);
    if ((int)pFVar5 - *(int *)&pFVar5->Cursor < 1) {
      pFVar5 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar5->Cursor = '\n';
    pFVar5->Cursor = pFVar5->Cursor + 1;
    pFVar5->Committed = pFVar5->Cursor;
  }
  FLLMScope::~FLLMScope(&local_c4);
  FLLMScope::~FLLMScope(&local_c0);
  FMemScope::~FMemScope(&local_80);
  FLLMScope::~FLLMScope(&local_bc);
  return;
}

