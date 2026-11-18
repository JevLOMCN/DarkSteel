// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 12

// FStateTreeTraceProvider @ 14d4b1f30

FStateTreeTraceProvider * __thiscall
FStateTreeTraceProvider::FStateTreeTraceProvider
          (FStateTreeTraceProvider *this,IAnalysisSession *param_1)

{
  this->Session = param_1;
  this->_padding_ = (longlong)&___7FStateTreeTraceProvider__6B_;
  *(undefined8 *)&this->InstanceIdToDebuggerEntryTimelines = 0;
  *(undefined8 *)&(this->InstanceIdToDebuggerEntryTimelines).field_0x8 = 0;
  *(undefined8 *)&(this->InstanceIdToDebuggerEntryTimelines).field_0x20 = 0;
  *(undefined4 *)&(this->InstanceIdToDebuggerEntryTimelines).field_0x28 = 0;
  *(undefined4 *)&(this->InstanceIdToDebuggerEntryTimelines).field_0x2c = 0x80;
  *(undefined4 *)&(this->InstanceIdToDebuggerEntryTimelines).field_0x34 = 0;
  *(undefined4 *)&(this->InstanceIdToDebuggerEntryTimelines).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->InstanceIdToDebuggerEntryTimelines).field_0x40 = 0;
  *(undefined4 *)&(this->InstanceIdToDebuggerEntryTimelines).field_0x48 = 0;
  (this->Descriptors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Descriptors).ArrayNum = 0;
  (this->Descriptors).ArrayMax = 0;
  (this->EventsTimelines).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventsTimelines).ArrayNum = 0;
  (this->EventsTimelines).ArrayMax = 0;
  (this->StateTreeAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StateTreeAssets).ArrayNum = 0;
  (this->StateTreeAssets).ArrayMax = 0;
  return this;
}

// ~FStateTreeTraceProvider @ 14d4b3be0

void __thiscall FStateTreeTraceProvider::~FStateTreeTraceProvider(FStateTreeTraceProvider *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->StateTreeAssets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedRef<TraceServices::TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>,1>,int>
            ((TSharedRef<TraceServices::TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>,1>
              *)(this->EventsTimelines).AllocatorInstance.Data,(this->EventsTimelines).ArrayNum);
  pFVar1 = (this->EventsTimelines).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedRef<UE::StateTreeDebugger::FInstanceDescriptor,1>,int>
            ((TSharedRef<UE::StateTreeDebugger::FInstanceDescriptor,1> *)
             (this->Descriptors).AllocatorInstance.Data,(this->Descriptors).ArrayNum);
  pFVar1 = (this->Descriptors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->InstanceIdToDebuggerEntryTimelines).field_0x48 = 0;
  pvVar2 = *(void **)&(this->InstanceIdToDebuggerEntryTimelines).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FStateTreeInstanceDebugId,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FStateTreeInstanceDebugId,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FStateTreeInstanceDebugId,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InstanceIdToDebuggerEntryTimelines);
  return;
}

// AppendAssetDebugId @ 14d4b63d0

void __thiscall
FStateTreeTraceProvider::AppendAssetDebugId
          (FStateTreeTraceProvider *this,UStateTree *param_1,FStateTreeIndex16 param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  TArray<FStateTreeTraceProvider::FStateTreeDebugIdPair,TSizedDefaultAllocator<32>_> *pTVar7;
  undefined1 local_res18 [8];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_48;
  undefined8 local_40;
  UStateTree *local_38;
  FWeakObjectPtr local_30;
  undefined4 local_28;
  
  if (param_2.Value == 0xffff) {
    local_res18[0] = 0;
    bVar4 = `FStateTreeTraceProvider::AppendAssetDebugId'::__l3::<lambda_1>::operator()(local_res18)
    ;
    if (!bVar4) {
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AssetDebugId.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeTraceProvider.cpp"
                       ,0x98,L"Expecting valid asset debug Id.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar7 = &this->StateTreeAssets;
  pFVar6 = (pTVar7->AllocatorInstance).Data;
  pFVar2 = pFVar6 + (longlong)(this->StateTreeAssets).ArrayNum * 0xc;
  while( true ) {
    if (pFVar6 == pFVar2) {
      local_48.ObjectIndex = 0;
      local_48.ObjectSerialNumber = 0;
      local_40 = 0;
      FWeakObjectPtr::operator=(&local_48,(FObjectPtr)&local_40);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UStateTree *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_res20.ObjectIndex = 0;
      local_res20.ObjectSerialNumber = 0;
      local_38 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UStateTree *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_38);
      piVar1 = &(this->StateTreeAssets).ArrayMax;
      local_30 = local_res20;
      iVar5 = (this->StateTreeAssets).ArrayNum;
      local_28 = CONCAT22(local_28._2_2_,param_2.Value);
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x40c,&pTVar7->AllocatorInstance,piVar1);
      }
      (this->StateTreeAssets).ArrayNum = iVar5 + 1;
      pFVar2 = (pTVar7->AllocatorInstance).Data;
      *(FWeakObjectPtr *)(pFVar2 + (longlong)iVar5 * 0xc) = local_30;
      *(undefined4 *)(pFVar2 + (longlong)iVar5 * 0xc + 8) = local_28;
      return;
    }
    if (*(ushort *)(pFVar6 + 8) == param_2.Value) break;
    pFVar6 = pFVar6 + 0xc;
  }
  return;
}

// AppendEvent @ 14d4b6530

void __thiscall
FStateTreeTraceProvider::AppendEvent
          (FStateTreeTraceProvider *this,FStateTreeInstanceDebugId param_1,double param_2,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_3)

{
  uint uVar1;
  longlong lVar2;
  double dVar3;
  double *pdVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint *puVar8;
  double dVar9;
  double dVar10;
  double local_res8;
  FStateTreeInstanceDebugId local_res10;
  
  local_res10 = param_1;
  (**(code **)((longlong)*this->Session + 0xb0))();
  puVar8 = TMapBase<FStateTreeInstanceDebugId,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,unsigned_int,0>_>
           ::Find((TMapBase<FStateTreeInstanceDebugId,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,unsigned_int,0>_>
                   *)&this->InstanceIdToDebuggerEntryTimelines,&local_res10);
  if (puVar8 != (uint *)0x0) {
    uVar1 = *puVar8;
    uVar7 = 0;
    if ((int)uVar1 < (this->EventsTimelines).ArrayNum) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar2 = *(longlong *)
             ((this->EventsTimelines).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10);
    dVar3 = *(double *)(lVar2 + 0x38);
    local_res8 = param_2;
    TraceServices::
    TPagedArray<TraceServices::TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>::FEventInternal,TraceServices::TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>::FEventPage>
    ::
    EmplaceBack<double_&,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&>
              ((TPagedArray<TraceServices::TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>::FEventInternal,TraceServices::TPointTimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>,TraceServices::FPointTimelineDefaultSettings>::FEventPage>
                *)(lVar2 + 8),&local_res8,param_3);
    pdVar4 = *(double **)(lVar2 + 0x28);
    dVar9 = param_2;
    dVar10 = param_2;
    if (pdVar4 == *(double **)(lVar2 + 0x40)) {
      if (param_2 <= pdVar4[1]) {
        dVar9 = pdVar4[1];
      }
      if (*pdVar4 <= param_2) {
        dVar10 = *pdVar4;
      }
    }
    else {
      *(double **)(lVar2 + 0x40) = pdVar4;
      pdVar4[2] = dVar3;
    }
    *pdVar4 = dVar10;
    pdVar4[1] = dVar9;
    pdVar4[3] = (double)((longlong)dVar3 + 1);
    *(longlong *)(lVar2 + 0x50) = *(longlong *)(lVar2 + 0x50) + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014d4b6640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->Session + 0x38))(this->Session,param_2);
  return;
}

// AppendInstanceEvent @ 14d4b6650

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStateTreeTraceProvider::AppendInstanceEvent
          (FStateTreeTraceProvider *this,FStateTreeIndex16 param_1,FStateTreeInstanceDebugId param_2
          ,wchar_t *param_3,double param_4,double param_5,EStateTreeTraceEventType param_6)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  FStateTreeInstanceDebugId FVar6;
  FStateTreeInstanceDebugId FVar7;
  ForAnyElementType _Src;
  bool bVar8;
  int iVar9;
  UObject *pUVar10;
  TReferenceControllerBase<1> *pTVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  TReferenceControllerBase<1> *pTVar17;
  FStateTreeInstanceDebugId local_res18;
  wchar_t *local_res20;
  undefined3 in_stack_00000039;
  FWeakObjectPtr local_a8;
  FStateTreeInstanceDebugId local_a0;
  UObject *local_98;
  FString local_90;
  FStateTreeInstanceDebugId *local_80;
  EStateTreeTraceEventType *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 local_60;
  undefined7 uStack_5f;
  double dStack_58;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 uStack_48;
  
  local_res18 = param_2;
  local_res20 = param_3;
  if (param_6 != Push) {
    if ((param_6 == Pop) &&
       (puVar12 = TMapBase<FStateTreeInstanceDebugId,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,unsigned_int,0>_>
                  ::Find((TMapBase<FStateTreeInstanceDebugId,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,unsigned_int,0>_>
                          *)&this->InstanceIdToDebuggerEntryTimelines,&local_res18),
       puVar12 != (uint *)0x0)) {
      if ((((int)*puVar12 < 0) || ((this->Descriptors).ArrayNum <= (int)*puVar12)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Descriptors.IsValidIndex(*Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeTraceProvider.cpp"
                             ,0x84,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar2 = *puVar12;
      uVar14 = 0;
      if ((int)uVar2 < (this->Descriptors).ArrayNum) {
        uVar14 = ~uVar2 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_70 = CONCAT31(local_70._1_3_,1);
      lVar3 = *(longlong *)
               ((this->Descriptors).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x10);
      *(undefined4 *)(lVar3 + 0x20) = local_70;
      *(undefined4 *)(lVar3 + 0x24) = uStack_6c;
      *(double *)(lVar3 + 0x28) = param_5;
    }
    goto LAB_14d4b6b70;
  }
  local_a8.ObjectIndex = 0;
  local_a8.ObjectSerialNumber = 0;
  bVar8 = GetAssetFromDebugId(this,param_1,
                              (TWeakObjectPtr<UStateTree_const_,FWeakObjectPtr> *)&local_a8);
  if (!bVar8) {
    if (1 < (byte)LogStateTree._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
    }
    goto LAB_14d4b6b70;
  }
  pUVar10 = FWeakObjectPtr::Get(&local_a8);
  FVar6 = local_res18;
  if (pUVar10 == (UObject *)0x0) {
    if (1 < (byte)LogStateTree._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
    }
    goto LAB_14d4b6b70;
  }
  pFVar15 = (this->Descriptors).AllocatorInstance.Data;
  pFVar16 = pFVar15 + (longlong)(this->Descriptors).ArrayNum * 0x10;
  local_a0 = local_res18;
  if (pFVar15 != pFVar16) {
    local_a0.SerialNumber = local_res18.SerialNumber;
    uVar2 = local_a0.SerialNumber;
    local_a0 = FVar6;
    do {
      pTVar11 = *(TReferenceControllerBase<1> **)(pFVar15 + 8);
      lVar3 = *(longlong *)pFVar15;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((*(uint *)(lVar3 + 0x48) == FVar6.Id) && (*(uint *)(lVar3 + 0x4c) == uVar2))
      goto LAB_14d4b6a5d;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      pFVar15 = pFVar15 + 0x10;
      param_3 = local_res20;
    } while (pFVar15 != pFVar16);
  }
  dStack_58 = param_5;
  uStack_48 = __real_7fefffffffffffff;
  local_60 = 1;
  local_50 = 0;
  pTVar11 = ::operator_new(0x60);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pTVar17 = (TReferenceControllerBase<1> *)&DAT_00000010;
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
LAB_14d4b6861:
    if (((pTVar17->_padding_ == 0) || (*(longlong *)&pTVar17->SharedReferenceCount == 0)) ||
       (*(int *)(*(longlong *)&pTVar17->SharedReferenceCount + 8) < 1)) {
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar17->_padding_ = (longlong)pTVar17;
      if (pTVar11 != *(TReferenceControllerBase<1> **)&pTVar17->SharedReferenceCount) {
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->WeakReferenceCount = (atomic<int>)((int)pTVar11->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar4 = *(longlong **)&pTVar17->SharedReferenceCount;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          iVar9 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
        *(TReferenceControllerBase<1> **)&pTVar17->SharedReferenceCount = pTVar11;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    }
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFInstanceDescriptor_StateTreeDebugger_UE___00_SharedPointerInternals__6B_
    ;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    ::FString::FString(&local_90,param_3);
    FVar6 = local_res18;
    pTVar11[1]._padding_ = 0;
    pTVar11[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[2]._padding_ = CONCAT71(uStack_5f,local_60);
    *(double *)&pTVar11[2].SharedReferenceCount = dStack_58;
    pTVar11[3]._padding_ = CONCAT71(uStack_4f,local_50);
    pTVar11[3].SharedReferenceCount = (atomic<int>)(undefined4)uStack_48;
    pTVar11[3].WeakReferenceCount = (atomic<int>)uStack_48._4_4_;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar10);
    }
    pTVar11[4]._padding_ = 0;
    local_98 = pUVar10;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar10);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(pTVar11 + 4),(FObjectPtr)&local_98);
    _Src.Data = local_90.Data.AllocatorInstance.Data;
    piVar1 = (int *)((longlong)&pTVar11[5]._padding_ + 4);
    pTVar11[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[4].WeakReferenceCount = (atomic<int>)0x0;
    *(int *)&pTVar11[5]._padding_ = local_90.Data.ArrayNum;
    if (local_90.Data.ArrayNum == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_90.Data.ArrayNum,0,(ForAnyElementType *)&pTVar11[4].SharedReferenceCount,
                 local_90.Data.ArrayNum,piVar1);
      memcpy(*(void **)&pTVar11[4].SharedReferenceCount,_Src.Data,
             (longlong)local_90.Data.ArrayNum * 2);
    }
    FVar7 = local_res18;
    local_res18.Id = FVar6.Id;
    local_res18.SerialNumber = FVar6.SerialNumber;
    pTVar11[5].SharedReferenceCount = (atomic<int>)local_res18.Id;
    pTVar11[5].WeakReferenceCount = (atomic<int>)local_res18.SerialNumber;
    local_res18 = FVar7;
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    pTVar17 = pTVar11 + 1;
    if (pTVar17 != (TReferenceControllerBase<1> *)0x0) goto LAB_14d4b6861;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar9 = (this->Descriptors).ArrayNum;
  piVar1 = &(this->Descriptors).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->Descriptors).AllocatorInstance,piVar1);
  }
  (this->Descriptors).ArrayNum = iVar9 + 1;
  pFVar15 = (this->Descriptors).AllocatorInstance.Data;
  *(TReferenceControllerBase<1> **)(pFVar15 + (longlong)iVar9 * 0x10) = pTVar17;
  *(TReferenceControllerBase<1> **)(pFVar15 + (longlong)iVar9 * 0x10 + 8) = pTVar11;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  puVar12 = TMapBase<FStateTreeInstanceDebugId,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,unsigned_int,0>_>
            ::Find((TMapBase<FStateTreeInstanceDebugId,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,unsigned_int,0>_>
                    *)&this->InstanceIdToDebuggerEntryTimelines,&local_res18);
  if ((puVar12 != (uint *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceIdToDebuggerEntryTimelines.Find(InInstanceId) == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeTraceProvider.cpp"
                         ,0x6f,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  _param_6 = (this->EventsTimelines).ArrayNum;
  local_80 = &local_res18;
  local_78 = &param_6;
  TSet<TTuple<FStateTreeInstanceDebugId,unsigned_int>,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FStateTreeInstanceDebugId_const_&,unsigned_int_&&>_>
            ((TSet<TTuple<FStateTreeInstanceDebugId,unsigned_int>,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,unsigned_int,0>,FDefaultSetAllocator>
              *)&this->InstanceIdToDebuggerEntryTimelines,
             (TPairInitializer<FStateTreeInstanceDebugId_const_&,unsigned_int_&&> *)&stack0x00000008
             ,(bool *)&local_80);
  uVar13 = (**(code **)((longlong)*this->Session + 0xb8))();
  pTVar11 = ::operator_new(0x70);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pTVar17 = (TReferenceControllerBase<1> *)&DAT_00000010;
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11[1].SharedReferenceCount = (atomic<int>)(int)uVar13;
    pTVar11[1].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar13 >> 0x20);
    pTVar17 = pTVar11 + 1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TPointTimeline_V__TVariant_UFStateTreeTracePhaseEvent__UFStateTreeTraceLogEvent__UFStateTreeTracePropertyEvent__UFStateTreeTraceNodeEvent__UFStateTreeTraceStateEvent__UFStateTreeTraceTaskEvent__UFStateTreeTraceEvaluatorEvent__UFStateTreeTraceTransitionEvent__UFStateTreeTraceConditionEvent__UFStateTreeTraceActiveStatesEvent__UFStateTreeTraceInstanceFrameEvent____UFPointTimelineDefaultSettings_TraceServices___TraceServices___00_SharedPointerInternals__6B_
    ;
    pTVar11[2]._padding_ = 0;
    pTVar11[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[3]._padding_ = 0;
    pTVar11[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[5]._padding_ = 0;
    pTVar11[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[6]._padding_ = 0;
    *(undefined1 *)&pTVar11[6].SharedReferenceCount = 0;
    pTVar11[1]._padding_ =
         (longlong)
         &
         ___7__TPointTimeline_V__TVariant_UFStateTreeTracePhaseEvent__UFStateTreeTraceLogEvent__UFStateTreeTracePropertyEvent__UFStateTreeTraceNodeEvent__UFStateTreeTraceStateEvent__UFStateTreeTraceTaskEvent__UFStateTreeTraceEvaluatorEvent__UFStateTreeTraceTransitionEvent__UFStateTreeTraceConditionEvent__UFStateTreeTraceActiveStatesEvent__UFStateTreeTraceInstanceFrameEvent____UFPointTimelineDefaultSettings_TraceServices___TraceServices__6B_
    ;
    pTVar11[4]._padding_ = 0x10000;
    if ((pTVar17 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar9 = (this->EventsTimelines).ArrayNum;
  piVar1 = &(this->EventsTimelines).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->EventsTimelines).AllocatorInstance,piVar1);
  }
  (this->EventsTimelines).ArrayNum = iVar9 + 1;
  pFVar15 = (this->EventsTimelines).AllocatorInstance.Data;
  *(TReferenceControllerBase<1> **)(pFVar15 + (longlong)iVar9 * 0x10) = pTVar17;
  *(TReferenceControllerBase<1> **)(pFVar15 + (longlong)iVar9 * 0x10 + 8) = pTVar11;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
LAB_14d4b6a5d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
LAB_14d4b6b70:
  (**(code **)((longlong)*this->Session + 0x38))(this->Session,SUB84(param_4,0));
  return;
}

// GetAssetFromDebugId @ 14d4bd3c0

bool __thiscall
FStateTreeTraceProvider::GetAssetFromDebugId
          (FStateTreeTraceProvider *this,FStateTreeIndex16 param_1,
          TWeakObjectPtr<UStateTree_const_,FWeakObjectPtr> *param_2)

{
  FWeakObjectPtr *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FWeakObjectPtr *pFVar5;
  FWeakObjectPtr local_res8;
  undefined8 local_res18 [2];
  
  if ((param_1.Value == 0xffff) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("AssetDebugId.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeTraceProvider.cpp"
                         ,0x98,L"Expecting valid asset debug Id."), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar5 = (FWeakObjectPtr *)(this->StateTreeAssets).AllocatorInstance.Data;
  pFVar1 = (FWeakObjectPtr *)((longlong)pFVar5 + (longlong)(this->StateTreeAssets).ArrayNum * 0xc);
  do {
    if (pFVar5 == pFVar1) {
      pFVar5 = (FWeakObjectPtr *)0x0;
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res18[0] = 0;
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
LAB_14d4bd450:
      param_2->WeakPtr = local_res8;
      return pFVar5 != (FWeakObjectPtr *)0x0;
    }
    if ((ushort)pFVar5[1].ObjectIndex == param_1.Value) {
      local_res8 = *pFVar5;
      goto LAB_14d4bd450;
    }
    pFVar5 = (FWeakObjectPtr *)&pFVar5[1].ObjectSerialNumber;
  } while( true );
}

// GetAssetFromInstanceId @ 14d4bd480

bool __thiscall
FStateTreeTraceProvider::GetAssetFromInstanceId
          (FStateTreeTraceProvider *this,FStateTreeInstanceDebugId param_1,
          TWeakObjectPtr<UStateTree_const_,FWeakObjectPtr> *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint *puVar6;
  FStateTreeInstanceDebugId local_res10;
  
  local_res10 = param_1;
  puVar6 = TMapBase<FStateTreeInstanceDebugId,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,unsigned_int,0>_>
           ::Find((TMapBase<FStateTreeInstanceDebugId,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,unsigned_int,0>_>
                   *)&this->InstanceIdToDebuggerEntryTimelines,&local_res10);
  if (puVar6 == (uint *)0x0) {
    return false;
  }
  if ((this->Descriptors).ArrayNum != (this->EventsTimelines).ArrayNum) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Descriptors.Num() == EventsTimelines.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeTraceProvider.cpp"
                       ,0xa7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  uVar1 = *puVar6;
  uVar5 = 0;
  if ((int)uVar1 < (this->Descriptors).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  param_2->WeakPtr =
       *(FWeakObjectPtr *)
        (*(longlong *)((this->Descriptors).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10) +
        0x30);
  return true;
}

// GetInstanceDescriptor @ 14d4bdea0

TSharedPtr<UE::StateTreeDebugger::FInstanceDescriptor_const_,1> * __thiscall
FStateTreeTraceProvider::GetInstanceDescriptor
          (FStateTreeTraceProvider *this,
          TSharedPtr<UE::StateTreeDebugger::FInstanceDescriptor_const_,1> *__return_storage_ptr__,
          FStateTreeInstanceDebugId param_1)

{
  FInstanceDescriptor *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSharedRef<UE::StateTreeDebugger::FInstanceDescriptor,1> *pTVar3;
  
  pTVar3 = TArray<TSharedRef<UE::StateTreeDebugger::FInstanceDescriptor,1>,TSizedDefaultAllocator<32>_>
           ::FindByPredicate<_FStateTreeTraceProvider::GetInstanceDescriptor_::__l2::<lambda_1>_>
                     (&this->Descriptors,(<lambda_1>)param_1);
  if (pTVar3 != (TSharedRef<UE::StateTreeDebugger::FInstanceDescriptor,1> *)0x0) {
    pFVar1 = pTVar3->Object;
    pTVar2 = (pTVar3->SharedReferenceCount).ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    __return_storage_ptr__->Object = pFVar1;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = (FInstanceDescriptor *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetInstances @ 14d4be030

void __thiscall
FStateTreeTraceProvider::GetInstances
          (FStateTreeTraceProvider *this,
          TArray<TSharedRef<UE::StateTreeDebugger::FInstanceDescriptor_const_,1>_const_,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  undefined8 local_38;
  TReferenceControllerBase<1> *local_30;
  
  uVar2 = (this->Descriptors).ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  piVar1 = &param_1->ArrayMax;
  if (*piVar1 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar2,&param_1->AllocatorInstance,param_1->ArrayNum,piVar1);
  }
  iVar3 = (this->Descriptors).ArrayNum;
  pFVar9 = (this->Descriptors).AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)iVar3 * 0x10;
  while( true ) {
    if ((this->Descriptors).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedRef<UE::StateTreeDebugger::FInstanceDescriptor,1>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar10) {
      return;
    }
    pTVar4 = *(TReferenceControllerBase<1> **)(pFVar9 + 8);
    local_38 = *(undefined8 *)pFVar9;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar8 = (param_1->AllocatorInstance).Data;
    local_30 = pTVar4;
    if (((pFVar8 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar8 + (longlong)*piVar1 * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) break;
    iVar7 = param_1->ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_1->AllocatorInstance,piVar1);
    }
    param_1->ArrayNum = iVar7 + 1;
    pFVar8 = (param_1->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar8 = local_38;
    *(TReferenceControllerBase<1> **)(pFVar8 + 8) = local_30;
    if (local_30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pFVar9 = pFVar9 + 0x10;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// ReadTimelines @ 14d4cc270

bool __thiscall
FStateTreeTraceProvider::ReadTimelines
          (FStateTreeTraceProvider *this,UStateTree *param_1,
          TFunctionRef<void___cdecl(FStateTreeInstanceDebugId,TraceServices::ITimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_>_const_&)>
          *param_2)

{
  TMap<FStateTreeInstanceDebugId,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,unsigned_int,0>_>
  *pTVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  undefined8 local_res20;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  (**(code **)((longlong)*this->Session + 0x98))();
  pTVar1 = &this->InstanceIdToDebuggerEntryTimelines;
  iVar11 = 0;
  iVar3 = *(int *)&(this->InstanceIdToDebuggerEntryTimelines).field_0x28;
  TStack_60.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)
       &(this->InstanceIdToDebuggerEntryTimelines).field_0x10;
  iVar12 = 0;
  uVar8 = 1;
  TStack_60.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->InstanceIdToDebuggerEntryTimelines).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_60.Array;
    }
    uVar9 = *puVar13;
    while (uVar9 == 0) {
      lVar10 = (longlong)iVar11;
      iVar12 = iVar12 + 0x20;
      iVar11 = iVar11 + 1;
      TStack_60.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14d4cc32e;
      uVar9 = puVar13[lVar10 + 1];
    }
    uVar8 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    TStack_60.CurrentBitIndex = iVar12 + -1 + (int)lVar10;
    if (iVar3 < TStack_60.CurrentBitIndex) {
      TStack_60.CurrentBitIndex = iVar3;
    }
  }
LAB_14d4cc32e:
  TStack_60._padding_ = CONCAT44(uVar8,iVar11);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = iVar12;
  if (TStack_60.CurrentBitIndex < iVar3) {
    do {
      iVar3 = *(int *)(*(longlong *)pTVar1 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x14);
      if (((iVar3 < 0) || ((this->EventsTimelines).ArrayNum <= iVar3)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("EventsTimelines.IsValidIndex(It.Value())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeTraceProvider.cpp"
                             ,0x35,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if (((this->Descriptors).ArrayNum != (this->EventsTimelines).ArrayNum) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Descriptors.Num() == EventsTimelines.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeTraceProvider.cpp"
                             ,0x36,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      uVar8 = *(uint *)(*(longlong *)pTVar1 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x14);
      uVar9 = 0;
      if ((int)uVar8 < (this->Descriptors).ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      bVar6 = TWeakObjectPtr<UStateTree_const_,FWeakObjectPtr>::UEOpEquals<UStateTree,bool>
                        ((TWeakObjectPtr<UStateTree_const_,FWeakObjectPtr> *)
                         (*(longlong *)
                           ((this->Descriptors).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10
                           ) + 0x30),param_1);
      if (bVar6) {
        uVar8 = *(uint *)(*(longlong *)pTVar1 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x14);
        uVar9 = 0;
        if ((int)uVar8 < (this->EventsTimelines).ArrayNum) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        uVar4 = *(undefined8 *)
                 ((this->EventsTimelines).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10);
        uVar8 = *(uint *)(*(longlong *)pTVar1 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x14);
        uVar9 = 0;
        if ((int)uVar8 < (this->Descriptors).ArrayNum) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        local_res20 = *(undefined8 *)
                       (*(longlong *)
                         ((this->Descriptors).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10)
                       + 0x48);
        (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_res20,uVar4);
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return 0 < (this->EventsTimelines).ArrayNum;
}

// ReadTimelines @ 14d4cc5a0

bool __thiscall
FStateTreeTraceProvider::ReadTimelines
          (FStateTreeTraceProvider *this,FStateTreeInstanceDebugId param_1,
          TFunctionRef<void___cdecl(FStateTreeInstanceDebugId,TraceServices::ITimeline<TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_>_const_&)>
          *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  TMap<FStateTreeInstanceDebugId,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,unsigned_int,0>_>
  *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  uint *puVar8;
  longlong lVar9;
  uint uVar10;
  FStateTreeInstanceDebugId local_res10;
  FStateTreeInstanceDebugId local_res20;
  undefined8 local_98;
  TMap<FStateTreeInstanceDebugId,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,unsigned_int,0>_>
  *local_90;
  int iStack_88;
  uint uStack_84;
  undefined1 *local_80;
  undefined4 uStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  TMap<FStateTreeInstanceDebugId,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,unsigned_int,0>_>
  *local_60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_58;
  
  local_res10 = param_1;
  (**(code **)((longlong)*this->Session + 0x98))();
  if ((param_1.Id != 0xffffffff) && (local_res10.SerialNumber != 0xffffffff)) {
    puVar8 = TMapBase<FStateTreeInstanceDebugId,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,unsigned_int,0>_>
             ::Find((TMapBase<FStateTreeInstanceDebugId,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FStateTreeInstanceDebugId,unsigned_int,0>_>
                     *)&this->InstanceIdToDebuggerEntryTimelines,&local_res10);
    if (puVar8 != (uint *)0x0) {
      uVar2 = *puVar8;
      if ((-1 < (int)uVar2) && ((int)uVar2 < (this->EventsTimelines).ArrayNum)) {
        uVar10 = 0;
        if ((int)uVar2 < (this->EventsTimelines).ArrayNum) {
          uVar10 = ~uVar2 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        local_res20 = param_1;
        (**(code **)param_2)
                  (*(undefined8 *)&param_2->field_0x8,&local_res20,
                   *(undefined8 *)
                    ((this->EventsTimelines).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x10));
        return true;
      }
    }
    return false;
  }
  iStack_88 = 0;
  local_90 = &this->InstanceIdToDebuggerEntryTimelines;
  uStack_84 = 1;
  iVar3 = *(int *)&(this->InstanceIdToDebuggerEntryTimelines).field_0x28;
  local_80 = &(this->InstanceIdToDebuggerEntryTimelines).field_0x10;
  local_70 = 0;
  iStack_74 = 0;
  if (iVar3 != 0) {
    puVar8 = *(uint **)&(this->InstanceIdToDebuggerEntryTimelines).field_0x20;
    if (puVar8 == (uint *)0x0) {
      puVar8 = (uint *)local_80;
    }
    uVar2 = *puVar8;
    local_70 = 0;
    while (uVar2 == 0) {
      lVar9 = (longlong)iStack_88;
      local_70 = local_70 + 0x20;
      iStack_88 = iStack_88 + 1;
      iStack_74 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_88) goto LAB_14d4cc72e;
      uVar2 = puVar8[lVar9 + 1];
    }
    uStack_84 = -uVar2 & uVar2;
    uVar1 = (ulonglong)uStack_84 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_74 = local_70 + -1 + (int)lVar9;
    if (iVar3 < iStack_74) {
      iStack_74 = iVar3;
    }
  }
LAB_14d4cc72e:
  uStack_78 = 0xffffffff;
  TStack_58._padding_ = CONCAT44(uStack_84,iStack_88);
  TStack_58.UnvisitedBitMask = 0xffffffff;
  TStack_58._28_4_ = iStack_74;
  TStack_58.BaseBitIndex = local_70;
  iStack_6c = iStack_74;
  local_60 = local_90;
  TStack_58.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_80;
  TStack_58.CurrentBitIndex = iStack_74;
  if (iStack_74 < iVar3) {
    do {
      pTVar5 = local_60;
      uVar2 = *(uint *)(*(longlong *)local_60 + 8 + (longlong)TStack_58.CurrentBitIndex * 0x14);
      if ((-1 < (int)uVar2) && ((int)uVar2 < (this->EventsTimelines).ArrayNum)) {
        uVar10 = 0;
        if ((int)uVar2 < (this->EventsTimelines).ArrayNum) {
          uVar10 = ~uVar2 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        local_98 = *(undefined8 *)(*(longlong *)pTVar5 + (longlong)TStack_58.CurrentBitIndex * 0x14)
        ;
        (**(code **)param_2)
                  (*(undefined8 *)&param_2->field_0x8,&local_98,
                   *(undefined8 *)
                    ((this->EventsTimelines).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x10));
      }
      TStack_58.UnvisitedBitMask = TStack_58.UnvisitedBitMask & ~TStack_58._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_58);
    } while (TStack_58.CurrentBitIndex < (TStack_58.Array)->NumBits);
  }
  return 0 < (this->EventsTimelines).ArrayNum;
}

// operator() @ 15057dbe0

bool __thiscall
`FStateTreeTraceProvider::AppendAssetDebugId'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7516268140381077361>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7516268140381077361>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

