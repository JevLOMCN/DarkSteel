// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// IsCacheable @ 149c2d4b0

bool __thiscall FPCGSubgraphElement::IsCacheable(FPCGSubgraphElement *this,UPCGSettings *param_1)

{
  return false;
}

// SupportsBasePointDataInputs @ 149c358f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGSubgraphElement::SupportsBasePointDataInputs(FPCGSubgraphElement *this,FPCGContext *param_1)

{
  return true;
}

// SupportsGPUResidentData @ 149c35970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGSubgraphElement::SupportsGPUResidentData(FPCGSubgraphElement *this,FPCGContext *param_1)

{
  return true;
}

// ExecuteInternal @ 149f42890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall FPCGSubgraphElement::ExecuteInternal(FPCGSubgraphElement *this,FPCGContext *param_1)

{
  int *piVar1;
  FPCGDataCollection *pFVar2;
  FPCGContext *pFVar3;
  TObjectPtr<UPCGData_const_>_u_0 TVar4;
  UPCGNode *pUVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  UPCGSubgraphSettings *pUVar13;
  longlong *plVar14;
  UPCGGraph *this_00;
  FPCGStack *pFVar15;
  UPCGGraph *pUVar16;
  longlong lVar17;
  TReferenceControllerBase<1> *pTVar18;
  TReferenceControllerBase<1> *pTVar19;
  IPCGGraphExecutionSource *pIVar20;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar21;
  ForAnyElementType FVar22;
  FPCGStackFrame *this_01;
  TReferenceControllerBase<1> *pTVar23;
  FPCGTaggedData *pFVar24;
  TReferenceControllerBase<1> *pTVar25;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ulong64 local_198;
  UPCGSubgraphSettings *local_190;
  FPCGStack local_188;
  FPCGDataCollection local_170;
  FPCGDataCollection local_140;
  FPCGStack local_110;
  undefined1 local_f8 [8];
  ulong64 local_f0;
  TObjectPtr<UPCGData_const_>_u_0 local_e8;
  TObjectPtr<UPCGData_const_>_u_0 local_e0;
  UPCGNode *local_d8;
  FScriptContainerElement *local_d0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_c8;
  FPCGScheduleGraphParams local_b8;
  FPCGStack local_68;
  
  pUVar13 = FPCGContext::GetInputSettings<UPCGSubgraphSettings>(param_1);
  local_190 = pUVar13;
  if ((pUVar13 == (UPCGSubgraphSettings *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Settings",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGSubgraph.cpp"
                         ,0x2e8,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  cVar10 = (**(code **)(pUVar13->_padding_ + 0x500))(pUVar13);
  if (((cVar10 != '\0') && ((char)param_1[1].InputData.TaggedData.ArrayNum == '\0')) &&
     ((pUVar13->SubgraphOverride).field0_0x0.DebugPtr != (UPCGGraphInterface *)0x0)) {
    bVar8 = -1 < CpuChannel->Enabled;
    if (bVar8) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId754,
                 "FPCGSubgraphElement::ExecuteInternal::DynamicTrackingAndOverrides",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGSubgraph.cpp"
                 ,0x2f2);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId754);
    }
    FPCGSubgraphContext::InitializeUserParametersStruct((FPCGSubgraphContext *)param_1);
    if ((param_1[1].InputData.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) &&
       (lVar17._0_1_ = param_1[1].InputData.bCancelExecutionOnEmpty,
       lVar17._1_1_ = param_1[1].InputData.bCancelExecution,
       lVar17._2_6_ = *(undefined6 *)&param_1[1].InputData.field_0x12, lVar17 != 0)) {
      FPCGContext::OverrideSettings(param_1);
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  plVar14 = (longlong *)(**(code **)(pUVar13->_padding_ + 0x4f0))(pUVar13);
  if (plVar14 == (longlong *)0x0) {
    this_00 = (UPCGGraph *)0x0;
    bVar8 = false;
  }
  else {
    this_00 = (UPCGGraph *)(**(code **)(*plVar14 + 0x2b8))(plVar14);
    bVar8 = false;
    if (this_00 != (UPCGGraph *)0x0) {
      pFVar15 = FPCGStackHandle::GetStack(&param_1->StackHandle);
      if (pFVar15 == (FPCGStack *)0x0) {
        if ((((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
            (bVar11 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar11))
           && ((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0)) {
          bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource);
          if ((!bVar8) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\WeakInterfacePtr.h"
                                 ,0x8d,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
          plVar14 = (longlong *)
                    (**(code **)((longlong)*(param_1->ExecutionSource).InterfaceInstance + 0x18))();
          pUVar16 = (UPCGGraph *)(**(code **)(*plVar14 + 0x60))(plVar14);
          if ((this_00 == pUVar16) ||
             (bVar11 = UPCGGraph::Contains(this_00,pUVar16), bVar8 = false, bVar11))
          goto LAB_149f42a19;
        }
      }
      else {
        if ((cVar10 == '\0') || (bVar8 = FPCGStack::HasObject(pFVar15,(UObject *)this_00), !bVar8))
        {
          pUVar16 = FPCGStack::GetGraphForCurrentFrame(pFVar15);
          bVar11 = UPCGGraph::Contains(this_00,pUVar16);
          bVar8 = false;
          if (!bVar11) goto LAB_149f42a2a;
        }
LAB_149f42a19:
        bVar8 = true;
      }
    }
  }
LAB_149f42a2a:
  if ((cVar10 == '\0') && (!bVar8)) {
    PrepareSubgraphUserParameters(this,pUVar13,(FPCGSubgraphContext *)param_1,&param_1->OutputData);
    return true;
  }
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId792,"FPCGSubgraphElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGSubgraph.cpp"
               ,0x318);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId792);
  }
  if ((char)param_1[1].InputData.TaggedData.ArrayNum == '\0') {
    if (this_00 != (UPCGGraph *)0x0) {
      local_140.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.TaggedData.ArrayNum = 0;
      local_140.TaggedData.ArrayMax = 0;
      local_140.bCancelExecutionOnEmpty = false;
      local_140.bCancelExecution = false;
      local_140.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_140.DataCrcs.ArrayNum = 0;
      local_140.DataCrcs.ArrayMax = 0;
      local_140.InactiveOutputPinBitmask = 0;
      PrepareSubgraphUserParameters(this,pUVar13,(FPCGSubgraphContext *)param_1,&local_140);
      iVar12 = local_140.TaggedData.ArrayNum;
      pFVar24 = (FPCGTaggedData *)
                (local_140.TaggedData.AllocatorInstance.Data +
                (longlong)local_140.TaggedData.ArrayNum * 0x78);
      FVar22.Data = local_140.TaggedData.AllocatorInstance.Data;
      while( true ) {
        if (local_140.TaggedData.ArrayNum != iVar12) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if ((FPCGTaggedData *)FVar22.Data == pFVar24) break;
        TVar4 = (TObjectPtr<UPCGData_const_>_u_0)
                (((FPCGTaggedData *)FVar22.Data)->Data).Data.field0_0x0.DebugPtr;
        if (TVar4.DebugPtr != (UPCGData *)0x0) {
          local_e8 = TVar4;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
          }
          TSet<TObjectPtr<UPCGData_const_>,DefaultKeyFuncs<TObjectPtr<UPCGData_const_>,0>,FDefaultSetAllocator>
          ::Emplace<TObjectPtr<UPCGData_const_>_>
                    ((TSet<TObjectPtr<UPCGData_const_>,DefaultKeyFuncs<TObjectPtr<UPCGData_const_>,0>,FDefaultSetAllocator>
                      *)&param_1[1].InputData.DataCrcs.ArrayNum,
                     (TObjectPtr<UPCGData_const_> *)local_f8,(bool *)&local_e8);
        }
        FVar22.Data = FVar22.Data + 0x78;
      }
      local_170.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_170.TaggedData.ArrayNum = 0;
      local_170.TaggedData.ArrayMax = 0;
      local_170.bCancelExecutionOnEmpty = false;
      local_170.bCancelExecution = false;
      local_170.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_170.DataCrcs.ArrayNum = 0;
      local_170.DataCrcs.ArrayMax = 0;
      local_170.InactiveOutputPinBitmask = 0;
      PrepareSubgraphData(this,local_190,(FPCGSubgraphContext *)param_1,&param_1->InputData,
                          &local_170);
      iVar12 = local_170.TaggedData.ArrayNum;
      pFVar24 = (FPCGTaggedData *)
                (local_170.TaggedData.AllocatorInstance.Data +
                (longlong)local_170.TaggedData.ArrayNum * 0x78);
      FVar22.Data = local_170.TaggedData.AllocatorInstance.Data;
      while( true ) {
        if (local_170.TaggedData.ArrayNum != iVar12) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if ((FPCGTaggedData *)FVar22.Data == pFVar24) break;
        TVar4 = (TObjectPtr<UPCGData_const_>_u_0)
                (((FPCGTaggedData *)FVar22.Data)->Data).Data.field0_0x0.DebugPtr;
        if (TVar4.DebugPtr != (UPCGData *)0x0) {
          local_e0 = TVar4;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
          }
          TSet<TObjectPtr<UPCGData_const_>,DefaultKeyFuncs<TObjectPtr<UPCGData_const_>,0>,FDefaultSetAllocator>
          ::Emplace<TObjectPtr<UPCGData_const_>_>
                    ((TSet<TObjectPtr<UPCGData_const_>,DefaultKeyFuncs<TObjectPtr<UPCGData_const_>,0>,FDefaultSetAllocator>
                      *)&param_1[1].InputData.DataCrcs.ArrayNum,
                     (TObjectPtr<UPCGData_const_> *)(local_f8 + 4),(bool *)&local_e0);
        }
        FVar22.Data = FVar22.Data + 0x78;
      }
      if ((bVar8) && (local_170.TaggedData.ArrayNum == 0)) {
        bVar8 = true;
      }
      else {
        pFVar15 = FPCGStackHandle::GetStack(&param_1->StackHandle);
        if (pFVar15 == (FPCGStack *)0x0) {
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6759709290413425456>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGSubgraph.cpp"
                             ,0x330,"Stack");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
          local_110.GraphExecutionTaskId = 0xffffffffffffffff;
          local_110.StackFrames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_110.StackFrames.ArrayNum = 0;
          local_110.StackFrames.ArrayMax = 0;
          FPCGStack::FPCGStack(&local_188,&local_110);
          FVar22.Data = local_110.StackFrames.AllocatorInstance.Data;
          DestructItems<FPCGStackFrame,int>
                    ((FPCGStackFrame *)local_110.StackFrames.AllocatorInstance.Data,
                     local_110.StackFrames.ArrayNum);
          if ((FPCGStackFrame *)FVar22.Data != (FPCGStackFrame *)0x0) {
            FMemory::Free(FVar22.Data);
          }
        }
        else {
          pFVar15 = FPCGStack::FPCGStack(&local_68,pFVar15);
          FPCGStack::FPCGStack(&local_188,pFVar15);
          DestructItems<FPCGStackFrame,int>
                    ((FPCGStackFrame *)local_68.StackFrames.AllocatorInstance.Data,
                     local_68.StackFrames.ArrayNum);
          if ((FPCGStackFrame *)local_68.StackFrames.AllocatorInstance.Data != (FPCGStackFrame *)0x0
             ) {
            FMemory::Free(local_68.StackFrames.AllocatorInstance.Data);
          }
        }
        pTVar23 = (TReferenceControllerBase<1> *)0x0;
        if (local_188.StackFrames.ArrayNum == local_188.StackFrames.ArrayMax) {
          local_188.StackFrames.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_188.StackFrames.AllocatorInstance,
                          &local_188.StackFrames.ArrayMax);
        }
        pUVar5 = param_1->Node;
        this_01 = (FPCGStackFrame *)
                  (local_188.StackFrames.AllocatorInstance.Data +
                  (longlong)local_188.StackFrames.ArrayNum * 0x30);
        *(undefined8 *)&(this_01->Object).SoftObjectPtr.field_0x18 = 0;
        *(undefined8 *)&(this_01->Object).SoftObjectPtr.field_0x20 = 0;
        *(undefined8 *)&(this_01->Object).SoftObjectPtr = 0;
        *(undefined8 *)&(this_01->Object).SoftObjectPtr.field_0x10 = 0;
        *(undefined8 *)&(this_01->Object).SoftObjectPtr.field_0x8 = 0;
        local_188.StackFrames.ArrayNum = local_188.StackFrames.ArrayNum + 1;
        FUtf8String::Reset((FUtf8String *)&(this_01->Object).SoftObjectPtr.field_0x18,0);
        this_01->LoopIndex = -1;
        this_01->Hash = 0;
        local_d8 = pUVar5;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UPCGNode *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        FSoftObjectPtr::operator=((FSoftObjectPtr *)this_01,(FObjectPtr)&local_d8);
        this_01->LoopIndex = -1;
        FPCGStackFrame::ComputeHash(this_01);
        if (local_188.StackFrames.ArrayNum == local_188.StackFrames.ArrayMax) {
          local_188.StackFrames.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&local_188.StackFrames.AllocatorInstance,
                          &local_188.StackFrames.ArrayMax);
        }
        lVar17 = (longlong)local_188.StackFrames.ArrayNum;
        local_188.StackFrames.ArrayNum = local_188.StackFrames.ArrayNum + 1;
        FPCGStackFrame::FPCGStackFrame
                  ((FPCGStackFrame *)(local_188.StackFrames.AllocatorInstance.Data + lVar17 * 0x30),
                   -1);
        pTVar18 = ::operator_new(0x48);
        FVar22.Data = local_170.TaggedData.AllocatorInstance.Data;
        pTVar25 = (TReferenceControllerBase<1> *)&DAT_00000010;
        if (pTVar18 == (TReferenceControllerBase<1> *)0x0) {
          local_190 = (UPCGSubgraphSettings *)&DAT_00000010;
        }
        else {
          pTVar18->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFPCGInputForwardingElement___00_SharedPointerInternals__6B_
          ;
          pTVar18[1].SharedReferenceCount = (atomic<int>)0x0;
          pTVar18[1].WeakReferenceCount = (atomic<int>)0x0;
          piVar1 = (int *)((longlong)&pTVar18[2]._padding_ + 4);
          pTVar18->SharedReferenceCount = (atomic<int>)0x1;
          pTVar18->WeakReferenceCount = (atomic<int>)0x1;
          pTVar18[1]._padding_ = (longlong)&___7FPCGInputForwardingElement__6B_;
          iVar12 = local_170.TaggedData.ArrayNum;
          *(int *)&pTVar18[2]._padding_ = local_170.TaggedData.ArrayNum;
          if (local_170.TaggedData.ArrayNum == 0) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,local_170.TaggedData.ArrayNum,0,
                       (ForAnyElementType *)&pTVar18[1].SharedReferenceCount,
                       local_170.TaggedData.ArrayNum,piVar1);
            ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
                      (*(void **)&pTVar18[1].SharedReferenceCount,(FPCGTaggedData *)FVar22.Data,
                       iVar12);
          }
          pTVar23 = pTVar18 + 3;
          *(bool *)&pTVar18[2].SharedReferenceCount = local_170.bCancelExecutionOnEmpty;
          pTVar18[2].SharedReferenceCount.field_0x1 = local_170.bCancelExecution;
          pTVar23->_padding_ = 0;
          lVar17 = (longlong)local_170.DataCrcs.ArrayNum;
          local_190 = (UPCGSubgraphSettings *)local_170.DataCrcs.AllocatorInstance.Data;
          pTVar18[3].SharedReferenceCount = (atomic<int>)local_170.DataCrcs.ArrayNum;
          if ((atomic<int>)local_170.DataCrcs.ArrayNum == (atomic<int>)0x0) {
            pTVar18[3].WeakReferenceCount = (atomic<int>)0x0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,local_170.DataCrcs.ArrayNum,0,(ForAnyElementType *)pTVar23,
                       local_170.DataCrcs.ArrayNum,(int *)&pTVar18[3].WeakReferenceCount);
            memcpy((FScriptContainerElement *)pTVar23->_padding_,local_190,lVar17 << 3);
          }
          local_190 = (UPCGSubgraphSettings *)(pTVar18 + 1);
          pTVar18[4]._padding_ = local_170.InactiveOutputPinBitmask;
          if ((local_190 == (UPCGSubgraphSettings *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
          LOCK();
          pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
          UNLOCK();
          pTVar23 = pTVar18;
        }
        pTVar18 = (TReferenceControllerBase<1> *)0x0;
        pTVar19 = ::operator_new(0x48);
        FVar22.Data = local_140.TaggedData.AllocatorInstance.Data;
        if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
          pTVar19->SharedReferenceCount = (atomic<int>)0x1;
          pTVar19->WeakReferenceCount = (atomic<int>)0x1;
          pTVar19->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFPCGInputForwardingElement___00_SharedPointerInternals__6B_
          ;
          pTVar19[1]._padding_ = (longlong)&___7FPCGInputForwardingElement__6B_;
          piVar1 = (int *)((longlong)&pTVar19[2]._padding_ + 4);
          pTVar19[1].SharedReferenceCount = (atomic<int>)0x0;
          pTVar19[1].WeakReferenceCount = (atomic<int>)0x0;
          iVar12 = local_140.TaggedData.ArrayNum;
          *(int *)&pTVar19[2]._padding_ = local_140.TaggedData.ArrayNum;
          if (local_140.TaggedData.ArrayNum == 0) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,local_140.TaggedData.ArrayNum,0,
                       (ForAnyElementType *)&pTVar19[1].SharedReferenceCount,
                       local_140.TaggedData.ArrayNum,piVar1);
            ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
                      (*(void **)&pTVar19[1].SharedReferenceCount,(FPCGTaggedData *)FVar22.Data,
                       iVar12);
          }
          pTVar25 = pTVar19 + 3;
          *(bool *)&pTVar19[2].SharedReferenceCount = local_140.bCancelExecutionOnEmpty;
          pTVar19[2].SharedReferenceCount.field_0x1 = local_140.bCancelExecution;
          pTVar25->_padding_ = 0;
          lVar17 = (longlong)local_140.DataCrcs.ArrayNum;
          local_d0 = local_140.DataCrcs.AllocatorInstance.Data;
          pTVar19[3].SharedReferenceCount = (atomic<int>)local_140.DataCrcs.ArrayNum;
          if ((atomic<int>)local_140.DataCrcs.ArrayNum == (atomic<int>)0x0) {
            pTVar19[3].WeakReferenceCount = (atomic<int>)0x0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,local_140.DataCrcs.ArrayNum,0,(ForAnyElementType *)pTVar25,
                       local_140.DataCrcs.ArrayNum,(int *)&pTVar19[3].WeakReferenceCount);
            memcpy((FScriptContainerElement *)pTVar25->_padding_,local_d0,lVar17 << 3);
          }
          pTVar25 = pTVar19 + 1;
          pTVar19[4]._padding_ = local_140.InactiveOutputPinBitmask;
          if ((pTVar25 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
          LOCK();
          pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
          UNLOCK();
          pTVar18 = pTVar19;
        }
        pIVar20 = (IPCGGraphExecutionSource *)0x0;
        if (((param_1->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
           (bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->ExecutionSource), bVar8)) {
          pIVar20 = (param_1->ExecutionSource).InterfaceInstance;
        }
        if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_b8.InputElement.Object = (IPCGElement *)local_190;
        if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_b8.FromStack = &local_188;
        local_b8.ExternalDependencies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.ExternalDependencies.ArrayNum = 0;
        local_b8.ExternalDependencies.ArrayMax = 0;
        local_b8.bAllowHierarchicalGeneration = false;
        local_b8.Graph = this_00;
        local_b8.ExecutionSource = pIVar20;
        local_b8.PreGraphElement.Object = (IPCGElement *)pTVar25;
        local_b8.PreGraphElement.SharedReferenceCount.ReferenceController = pTVar18;
        local_b8.InputElement.SharedReferenceCount.ReferenceController = pTVar23;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23)
        ;
        local_198 = FPCGContext::ScheduleGraph(param_1,&local_b8);
        if (local_b8.ExternalDependencies.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(local_b8.ExternalDependencies.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b8.InputElement.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b8.PreGraphElement.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23)
        ;
        if (local_198 == 0xffffffffffffffff) {
          (param_1->OutputData).bCancelExecution = true;
          bVar8 = true;
        }
        else {
          pFVar3 = param_1 + 1;
          if ((((FScriptContainerElement *)pFVar3->_padding_ <=
                (FScriptContainerElement *)&local_198) &&
              ((FScriptContainerElement *)&local_198 <
               (FScriptContainerElement *)pFVar3->_padding_ +
               (longlong)
               *(int *)((longlong)&param_1[1].InputData.TaggedData.AllocatorInstance.Data + 4) * 8))
             && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar8)) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
          iVar12 = *(int *)&param_1[1].InputData.TaggedData.AllocatorInstance.Data;
          piVar1 = (int *)((longlong)&param_1[1].InputData.TaggedData.AllocatorInstance.Data + 4);
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)pFVar3,piVar1);
          }
          *(int *)&param_1[1].InputData.TaggedData.AllocatorInstance.Data = iVar12 + 1;
          *(ulong64 *)((FScriptContainerElement *)pFVar3->_padding_ + (longlong)iVar12 * 8) =
               local_198;
          *(undefined1 *)&param_1[1].InputData.TaggedData.ArrayNum = 1;
          param_1->bIsPaused = true;
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
          Emplace<unsigned___int64_const_&>
                    (&param_1->DynamicDependencies,&local_f0,(bool *)&local_198);
          bVar8 = false;
        }
        DestructItems<FPCGStackFrame,int>
                  ((FPCGStackFrame *)local_188.StackFrames.AllocatorInstance.Data,
                   local_188.StackFrames.ArrayNum);
        if ((FPCGStackFrame *)local_188.StackFrames.AllocatorInstance.Data != (FPCGStackFrame *)0x0)
        {
          FMemory::Free(local_188.StackFrames.AllocatorInstance.Data);
        }
      }
      if (local_170.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.DataCrcs.AllocatorInstance.Data);
      }
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_170.TaggedData.AllocatorInstance.Data,
                 local_170.TaggedData.ArrayNum);
      if ((FPCGTaggedData *)local_170.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_170.TaggedData.AllocatorInstance.Data);
      }
      if (local_140.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.DataCrcs.AllocatorInstance.Data);
      }
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_140.TaggedData.AllocatorInstance.Data,
                 local_140.TaggedData.ArrayNum);
      if ((FPCGTaggedData *)local_140.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_140.TaggedData.AllocatorInstance.Data);
      }
      goto LAB_149f43470;
    }
    pFVar2 = &param_1->OutputData;
    pTVar21 = FPCGDataCollection::GetInputsByPin
                        (&param_1->InputData,&local_c8,&PCGPinConstants::DefaultInputLabel);
    if (pFVar2 != (FPCGDataCollection *)pTVar21) {
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)(pFVar2->TaggedData).AllocatorInstance.Data,
                 (param_1->OutputData).TaggedData.ArrayNum);
      pFVar6 = (pFVar2->TaggedData).AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (pFVar2->TaggedData).AllocatorInstance.Data = (pTVar21->AllocatorInstance).Data;
      (pTVar21->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (param_1->OutputData).TaggedData.ArrayNum = pTVar21->ArrayNum;
      (param_1->OutputData).TaggedData.ArrayMax = pTVar21->ArrayMax;
      pTVar21->ArrayNum = 0;
      pTVar21->ArrayMax = 0;
    }
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
    if ((FPCGTaggedData *)local_c8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
  }
  else {
    if (param_1->bIsPaused != false) {
      bVar8 = false;
      goto LAB_149f43470;
    }
    iVar12 = *(int *)&param_1[1].InputData.TaggedData.AllocatorInstance.Data;
    if (0 < iVar12) {
      if ((iVar12 != 1) &&
         (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6759709290413425512>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGSubgraph.cpp"
                             ,0x368,"Context->SubgraphTaskIds.Num() == 1"), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      if ((*(int *)&param_1[1].InputData.TaggedData.AllocatorInstance.Data < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      bVar8 = FPCGContext::GetOutputData
                        (param_1,*(ulong64 *)param_1[1]._padding_,&param_1->OutputData);
      if (bVar8) {
        if ((*(int *)&param_1[1].InputData.TaggedData.AllocatorInstance.Data < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        FPCGContext::ClearOutputData(param_1,*(ulong64 *)param_1[1]._padding_);
      }
    }
  }
  bVar8 = true;
LAB_149f43470:
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar8;
}

// Initialize @ 149f50710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __thiscall
FPCGSubgraphElement::Initialize(FPCGSubgraphElement *this,FPCGInitializeElementParams *param_1)

{
  FPCGSubgraphContext *this_00;
  
  this_00 = ::operator_new(0x2d0);
  if (this_00 == (FPCGSubgraphContext *)0x0) {
    this_00 = (FPCGSubgraphContext *)0x0;
  }
  else {
    memset(this_00,0,0x2d0);
    FPCGContext::FPCGContext((FPCGContext *)this_00);
    this_00->_padding_ = (longlong)&___7FPCGSubgraphContext__6B_;
    (this_00->SubgraphTaskIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->SubgraphTaskIds).ArrayNum = 0;
    (this_00->SubgraphTaskIds).ArrayMax = 0;
    this_00->bScheduledSubgraph = false;
    FInstancedStruct::FInstancedStruct(&this_00->GraphInstanceParametersOverride);
    *(undefined8 *)&(this_00->ReferencedObjects).Elements = 0;
    *(undefined8 *)&(this_00->ReferencedObjects).Elements.field_0x8 = 0;
    *(undefined8 *)&(this_00->ReferencedObjects).Elements.field_0x20 = 0;
    *(undefined4 *)&(this_00->ReferencedObjects).Elements.field_0x28 = 0;
    *(undefined4 *)&(this_00->ReferencedObjects).Elements.field_0x2c = 0x80;
    *(undefined4 *)&(this_00->ReferencedObjects).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this_00->ReferencedObjects).Elements.field_0x34 = 0;
    *(undefined8 *)&(this_00->ReferencedObjects).Hash.SecondaryData.field_0x0 = 0;
    (this_00->ReferencedObjects).HashSize = 0;
  }
  FPCGContext::InitFromParams((FPCGContext *)this_00,param_1);
  FPCGSubgraphContext::InitializeUserParametersStruct(this_00);
  return (FPCGContext *)this_00;
}

// IsPassthrough @ 149f52870

bool __thiscall FPCGSubgraphElement::IsPassthrough(FPCGSubgraphElement *this,UPCGSettings *param_1)

{
  int iVar1;
  UClass *pUVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 != (UPCGSettings *)0x0) {
    pUVar2 = UPCGSubgraphSettings::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      if (((char)param_1->_padding_ != '\0') &&
         ((plVar3 = (longlong *)(**(code **)(param_1->_padding_ + 0x4f0))(param_1),
          plVar3 != (longlong *)0x0 && (lVar4 = (**(code **)(*plVar3 + 0x2b8))(plVar3), lVar4 != 0))
         )) {
        return true;
      }
      return false;
    }
  }
  return true;
}

// PrepareSubgraphData @ 149f582c0

void __thiscall
FPCGSubgraphElement::PrepareSubgraphData
          (FPCGSubgraphElement *this,UPCGSubgraphSettings *param_1,FPCGSubgraphContext *param_2,
          FPCGDataCollection *param_3,FPCGDataCollection *param_4)

{
  int *piVar1;
  UPCGData *pUVar2;
  FName FVar3;
  FPCGTaggedData *pFVar4;
  code *pcVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  UClass *pUVar12;
  ulonglong uVar13;
  uint uVar14;
  FPCGPinProperties *pFVar15;
  FPCGPinProperties *pFVar16;
  FPCGTaggedData *pFVar17;
  longlong lVar18;
  undefined1 local_res10 [8];
  undefined1 local_58 [4];
  uint local_54;
  FObjectPtr_u_0 local_50;
  FPCGTaggedData *local_48;
  FPCGPinProperties *local_40;
  int local_38;
  
  cVar7 = (**(code **)(param_1->_padding_ + 0x488))(param_1);
  if (cVar7 == '\0') {
    FPCGDataCollection::operator=(param_4,param_3);
  }
  else {
    uVar14 = (param_3->TaggedData).ArrayNum;
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
    piVar1 = &(param_4->TaggedData).ArrayMax;
    if (*piVar1 < (int)uVar14) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,uVar14,(ForAnyElementType *)param_4,(param_4->TaggedData).ArrayNum,piVar1);
    }
    (**(code **)(param_1->_padding_ + 0x3b8))(param_1,&local_40);
    local_54 = (param_3->TaggedData).ArrayNum;
    uVar13 = (ulonglong)(int)local_54;
    pFVar17 = (FPCGTaggedData *)(param_3->TaggedData).AllocatorInstance.Data;
    local_48 = pFVar17 + uVar13;
    while( true ) {
      pFVar4 = local_48;
      if ((param_3->TaggedData).ArrayNum != (int)uVar13) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar17 == pFVar4) break;
      pUVar2 = (pFVar17->Data).Data.field0_0x0.DebugPtr;
      if (pUVar2 != (UPCGData *)0x0) {
        pUVar12 = UPCGParamData::StaticClass();
        iVar6 = local_38;
        lVar18 = pUVar2->_padding_;
        iVar10 = (int)pUVar12->_padding_;
        if ((iVar10 <= *(int *)(lVar18 + 0x38)) &&
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar18 + 0x30) + (longlong)iVar10 * 8) ==
            &pUVar12->_padding_)) {
          FVar3 = pFVar17->Pin;
          pFVar15 = local_40 + local_38;
          pFVar16 = local_40;
          while( true ) {
            if (local_38 != iVar6) {
              local_58[0] = 0;
              `TCheckedPointerIterator<FPCGPinProperties_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_58);
            }
            if (pFVar16 == pFVar15) goto LAB_149f58489;
            if (pFVar16->Label == FVar3) break;
            pFVar16 = pFVar16 + 1;
          }
        }
        pFVar4 = (FPCGTaggedData *)(param_4->TaggedData).AllocatorInstance.Data;
        if ((pFVar4 <= pFVar17) && (pFVar17 < pFVar4 + *piVar1)) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar10 = (param_4->TaggedData).ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x878,(ForAnyElementType *)param_4,piVar1);
        }
        (param_4->TaggedData).ArrayNum = iVar10 + 1;
        FPCGTaggedData::FPCGTaggedData
                  ((FPCGTaggedData *)
                   ((param_4->TaggedData).AllocatorInstance.Data + (longlong)iVar10 * 0x78),pFVar17)
        ;
      }
LAB_149f58489:
      pFVar17 = pFVar17 + 1;
      uVar13 = (ulonglong)local_54;
    }
    DestructItems<FPCGPinProperties,int>(local_40,local_38);
    if (local_40 != (FPCGPinProperties *)0x0) {
      FMemory::Free(local_40);
    }
  }
  iVar10 = (param_4->TaggedData).ArrayNum;
  bVar8 = false;
  uVar14 = 0;
  if (0 < iVar10) {
    lVar18 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar14 < iVar10) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_50 = (FObjectPtr_u_0)
                 ((FObjectPtr_u_0 *)((param_4->TaggedData).AllocatorInstance.Data + lVar18))->Handle
      ;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149f58566:
        if (local_50.Handle == (UObject *)0x0) goto LAB_149f585dd;
        pUVar12 = Z_Construct_UClass_UPCGUserParametersData_NoRegister();
        bVar9 = FObjectPtr::IsA((FObjectPtr *)&local_50,pUVar12);
        if ((!bVar9) || (local_50.Handle == (UObject *)0x0)) goto LAB_149f585dd;
        bVar8 = true;
        uVar11 = 0;
        if ((int)uVar14 < (param_4->TaggedData).ArrayNum) {
          uVar11 = ~uVar14 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&param_4->TaggedData,uVar14);
      }
      else {
        if (local_50.Handle != (UObject *)0x0) {
          UE::GC::MarkAsReachable(local_50.Handle);
          goto LAB_149f58566;
        }
LAB_149f585dd:
        uVar14 = uVar14 + 1;
        lVar18 = lVar18 + 0x78;
      }
      iVar10 = (param_4->TaggedData).ArrayNum;
    } while ((int)uVar14 < iVar10);
    if (bVar8) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,(ForAnyElementType *)param_4,iVar10,&(param_4->TaggedData).ArrayMax);
    }
  }
  return;
}

// PrepareSubgraphUserParameters @ 149f58640

void __thiscall
FPCGSubgraphElement::PrepareSubgraphUserParameters
          (FPCGSubgraphElement *this,UPCGSubgraphSettings *param_1,FPCGSubgraphContext *param_2,
          FPCGDataCollection *param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  UObject *pUVar6;
  UPCGUserParametersData *pUVar7;
  undefined8 *puVar8;
  UClass *pUVar9;
  FPCGTaggedData *pFVar10;
  FPCGTaggedData *pFVar11;
  FPCGDataPtrWrapper *this_00;
  FGCScopeGuard local_res10 [8];
  undefined1 local_78 [8];
  UPCGUserParametersData *local_70;
  UScriptStruct *local_68;
  uchar *puStack_60;
  UObject *local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  FConstStructView local_38;
  
  plVar5 = (longlong *)(**(code **)(param_1->_padding_ + 0x4f0))(param_1);
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  bVar3 = IsInGameThread();
  if (param_2 == (FPCGSubgraphContext *)0x0) {
    if ((!bVar3) &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4331830188552749225>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0xa9,"Context != nullptr || IsInGameThread()"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (!bVar3) {
    if (((char)param_2->_padding_ != '\0') &&
       (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4331830188552749348>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FGCScopeGuard::FGCScopeGuard(local_res10);
    pUVar6 = GetTransientPackageAsObject();
    pUVar7 = NewObject<UPCGUserParametersData>(pUVar6);
    FGCScopeGuard::~FGCScopeGuard(local_res10);
    if ((pUVar7 == (UPCGUserParametersData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                           ,0x12a,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_70 = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (UPCGUserParametersData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
    Emplace<TObjectPtr<UObject>_>
              ((TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                *)&param_2->_padding_,(TObjectPtr<UObject> *)local_78,(bool *)&local_70);
    goto LAB_149f586d3;
  }
  pUVar6 = GetTransientPackageAsObject();
  pUVar7 = NewObject<UPCGUserParametersData>(pUVar6);
LAB_149f586d3:
  if (((param_2->GraphInstanceParametersOverride).StructMemory == (uchar *)0x0) ||
     ((param_2->GraphInstanceParametersOverride).ScriptStruct.field0_0x0.DebugPtr ==
      (UScriptStruct *)0x0)) {
    puVar8 = (undefined8 *)(**(code **)(*plVar5 + 0x2c0))(plVar5);
    if (puVar8 != (undefined8 *)0x0) {
      local_68 = (UScriptStruct *)*puVar8;
      puStack_60 = (uchar *)puVar8[1];
      local_38.ScriptStruct = local_68;
      local_38.StructMemory = puStack_60;
      FInstancedStruct::operator=(&pUVar7->UserParameters,&local_38);
    }
  }
  else {
    FInstancedStruct::operator=(&pUVar7->UserParameters,&param_2->GraphInstanceParametersOverride);
  }
  pFVar10 = (FPCGTaggedData *)param_2->_padding_;
  local_68 = (UScriptStruct *)&PCGBaseSubgraphConstants::UserParameterTagData;
  pFVar11 = pFVar10 + (int)param_2->_padding_;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = 0;
  if (pFVar10 != pFVar11) {
    do {
      bVar3 = `FPCGDataCollection::GetTaggedTypedInputs<UPCGUserParametersData>'::__l2::<lambda_1>::
              operator()(&local_68,pFVar10);
      if (bVar3) {
        if (((local_50.Data <= pFVar10) &&
            (pFVar10 < (FPCGTaggedData *)(local_50.Data + (longlong)local_48._4_4_ * 0x78))) &&
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
        iVar4 = (int)local_48;
        if ((int)local_48 == local_48._4_4_) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x878,&local_50,(int *)((longlong)&local_48 + 4));
        }
        local_48 = CONCAT44(local_48._4_4_,iVar4 + 1);
        FPCGTaggedData::FPCGTaggedData
                  ((FPCGTaggedData *)(local_50.Data + (longlong)iVar4 * 0x78),pFVar10);
      }
      pFVar10 = pFVar10 + 1;
    } while (pFVar10 != pFVar11);
    if ((int)local_48 != 0) {
      if (((int)local_48 < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar6 = *(UObject **)local_50.Data;
      if (pUVar6 != (UObject *)0x0) {
        pUVar9 = Z_Construct_UClass_UPCGUserParametersData_NoRegister();
        iVar4 = (int)pUVar9->_padding_;
        if ((iVar4 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
            &pUVar9->_padding_)) {
          local_58 = pUVar6;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          FSoftObjectPtr::operator=(&(pUVar7->UpstreamData).SoftObjectPtr,(FObjectPtr)&local_58);
        }
      }
    }
  }
  iVar4 = (param_3->TaggedData).ArrayNum;
  piVar1 = &(param_3->TaggedData).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)param_3,piVar1);
  }
  (param_3->TaggedData).ArrayNum = iVar4 + 1;
  this_00 = (FPCGDataPtrWrapper *)
            ((param_3->TaggedData).AllocatorInstance.Data + (longlong)iVar4 * 0x78);
  this_00[2].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[2].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[4].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[5].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[6].WeakData.WeakPtr.ObjectIndex = 0x100;
  (this_00->Data).field0_0x0.DebugPtr = (UPCGData *)0x0;
  (this_00->WeakData).WeakPtr = (FWeakObjectPtr)0x0;
  this_00[1].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[1].WeakData.WeakPtr = (FWeakObjectPtr)0x0;
  this_00[3].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[3].WeakData.WeakPtr.ObjectIndex = 0;
  this_00[3].WeakData.WeakPtr.ObjectSerialNumber = 0x80;
  *(undefined4 *)&this_00[4].Data.field0_0x0 = 0xffffffff;
  *(undefined4 *)((longlong)&this_00[4].Data.field0_0x0 + 4) = 0;
  this_00[5].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  this_00[6].Data.field0_0x0.DebugPtr = (UPCGData *)0x0;
  *(undefined8 *)&this_00[6].WeakData.WeakPtr.ObjectSerialNumber = 0;
  *(undefined4 *)((longlong)&this_00[7].Data.field0_0x0 + 4) = 0xffffffff;
  FPCGDataPtrWrapper::operator=(this_00,(UPCGData *)pUVar7);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(this_00 + 1),
             (FString *)(local_78 + 4),(bool *)&PCGBaseSubgraphConstants::UserParameterTagData);
  *(undefined1 *)&this_00[6].WeakData.WeakPtr.ObjectIndex = 1;
  DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_50.Data,(int)local_48);
  if ((FPCGTaggedData *)local_50.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return;
}

