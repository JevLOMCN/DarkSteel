// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 17

// FDynamicOperator @ 14ad390b0

FDynamicOperator * __thiscall
Metasound::DynamicGraph::FDynamicOperator::FDynamicOperator
          (FDynamicOperator *this,FOperatorSettings *param_1)

{
  TSharedPtr<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
  *pTVar1;
  TSharedRef<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
  *pTVar2;
  TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
  *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
  local_18;
  
  *(undefined ***)this = &_vftable__for__Metasound__IOperator__;
  *(undefined ***)&this->field_0x8 =
       &_vftable__for__Metasound__DynamicGraph__IDynamicGraphInPlaceBuildable__;
  FDynamicGraphOperatorData::FDynamicGraphOperatorData(&this->DynamicOperatorData,param_1);
  pTVar1 = &this->TransformQueue;
  this->bExecuteFenceIsSet = false;
  pTVar1->Object =
       (TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
        *)0x0;
  (this->TransformQueue).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar2 = MakeShared<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
                     (&local_18);
  local_20.ReferenceController = (pTVar2->SharedReferenceCount).ReferenceController;
  local_28 = pTVar2->Object;
  if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_20.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != (TSharedPtr<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
                 *)&local_28) {
    pTVar1->Object = local_28;
    local_28 = (TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
                *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TransformQueue).SharedReferenceCount,&local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// FDynamicOperator @ 14ad39180

FDynamicOperator * __thiscall
Metasound::DynamicGraph::FDynamicOperator::FDynamicOperator
          (FDynamicOperator *this,FOperatorSettings *param_1,
          TSharedPtr<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
          *param_2,FDynamicOperatorUpdateCallbacks *param_3)

{
  TSharedPtr<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
  *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
  *pTVar3;
  TSharedRef<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
  *pTVar4;
  TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
  *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
  local_18;
  
  *(undefined ***)this = &_vftable__for__Metasound__IOperator__;
  *(undefined ***)&this->field_0x8 =
       &_vftable__for__Metasound__DynamicGraph__IDynamicGraphInPlaceBuildable__;
  FDynamicGraphOperatorData::FDynamicGraphOperatorData(&this->DynamicOperatorData,param_1,param_3);
  pTVar1 = &this->TransformQueue;
  pTVar1->Object = param_2->Object;
  pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
  (this->TransformQueue).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = pTVar1->Object;
  this->bExecuteFenceIsSet = false;
  if (pTVar3 == (TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
                 *)0x0) {
    pTVar4 = MakeShared<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
                       (&local_18);
    local_20.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
    local_28 = pTVar4->Object;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
                   *)&local_28) {
      pTVar1->Object = local_28;
      local_28 = (TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
                  *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->TransformQueue).SharedReferenceCount,&local_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ApplyTransformsUntilFence @ 14ad46d60

void __thiscall
Metasound::DynamicGraph::FDynamicOperator::ApplyTransformsUntilFence(FDynamicOperator *this)

{
  TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
  *pTVar1;
  atomic<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>::FNode_*>
  aVar2;
  longlong *plVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  
  bVar4 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar4) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FDynamicOperator::ApplyTransformsUntilFence");
  }
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId143,"Metasound::FDynamicOperator::ApplyTransformsUntilFence"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperator.cpp"
               ,0x8f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId143);
  }
  if (this->bExecuteFenceIsSet == false) {
    while( true ) {
      do {
        if (((this->TransformQueue).Object ==
             (TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
              *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar1 = (this->TransformQueue).Object;
        aVar2 = *(atomic<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>::FNode_*>
                  *)pTVar1->Tail;
        if (aVar2 == (atomic<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>::FNode_*>
                      )0x0) goto LAB_14ad46e83;
        plVar3 = *(longlong **)((longlong)aVar2 + 8);
        *(undefined8 *)((longlong)aVar2 + 8) = 0;
        pTVar1->Tail = aVar2;
        LOCK();
        pTVar1->NumElems = (atomic<int>)((int)pTVar1->NumElems + -1);
        UNLOCK();
      } while (plVar3 == (longlong *)0x0);
      cVar7 = (**(code **)(*plVar3 + 8))(plVar3,&this->DynamicOperatorData);
      if (cVar7 == '\x01') break;
      (**(code **)*plVar3)();
    }
    this->bExecuteFenceIsSet = true;
    (**(code **)*plVar3)(plVar3);
  }
LAB_14ad46e83:
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!bVar4) {
    return;
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// ApplyTransformsUntilFenceOrTimeout @ 14ad46ec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Metasound::DynamicGraph::FDynamicOperator::ApplyTransformsUntilFenceOrTimeout
          (FDynamicOperator *this,double param_1)

{
  TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
  *pTVar1;
  atomic<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>::FNode_*>
  aVar2;
  longlong *plVar3;
  bool bVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res18 [2];
  undefined8 *local_58;
  
  bVar4 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar4) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FDynamicOperator::ApplyTransformsUntilFenceOrTimeout");
  }
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId167,
               "Metasound::FDynamicOperator::ApplyTransformsUntilFenceOrTimeout",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperator.cpp"
               ,0xa7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId167);
  }
  if (this->bExecuteFenceIsSet == false) {
    if (((this->TransformQueue).Object ==
         (TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
          *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar1 = (this->TransformQueue).Object;
    aVar2 = *(atomic<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>::FNode_*>
              *)pTVar1->Tail;
    if (aVar2 != (atomic<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>::FNode_*>
                  )0x0) {
      bVar7 = true;
      plVar11 = *(longlong **)((longlong)aVar2 + 8);
      *(undefined8 *)((longlong)aVar2 + 8) = 0;
      pTVar1->Tail = aVar2;
      LOCK();
      pTVar1->NumElems = (atomic<int>)((int)pTVar1->NumElems + -1);
      UNLOCK();
      if ((FGenericPlatformTime::SecondsPerCycle <= 0.0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("FPlatformTime::GetSecondsPerCycle() > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperator.cpp"
                             ,0xb3,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      QueryPerformanceCounter(&local_res8);
      dVar6 = param_1 / FGenericPlatformTime::SecondsPerCycle;
      lVar10 = 0;
      if ((__real_43e0000000000000 <= dVar6) &&
         (dVar6 = dVar6 - __real_43e0000000000000, dVar6 < __real_43e0000000000000)) {
        lVar10 = -0x8000000000000000;
      }
      do {
        if ((plVar11 != (longlong *)0x0) &&
           (cVar9 = (**(code **)(*plVar11 + 8))(plVar11,&this->DynamicOperatorData), cVar9 == '\x01'
           )) {
          this->bExecuteFenceIsSet = true;
LAB_14ad47174:
          if ((bVar7) && (plVar11 != (longlong *)0x0)) {
            (**(code **)*plVar11)(plVar11,1);
          }
          break;
        }
        QueryPerformanceCounter(local_res18);
        if ((ulonglong)((longlong)dVar6 + lVar10 + local_res8.QuadPart) <= (ulonglong)local_res18[0]
           ) {
          if (5 < (byte)LogMetaSound._0_1_) {
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMetaSound);
          }
          goto LAB_14ad47174;
        }
        if (((this->TransformQueue).Object ==
             (TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
              *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar1 = (this->TransformQueue).Object;
        aVar2 = *(atomic<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>::FNode_*>
                  *)pTVar1->Tail;
        if (aVar2 != (atomic<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>::FNode_*>
                      )0x0) {
          plVar3 = *(longlong **)((longlong)aVar2 + 8);
          *(undefined8 *)((longlong)aVar2 + 8) = 0;
          pTVar1->Tail = aVar2;
          LOCK();
          pTVar1->NumElems = (atomic<int>)((int)pTVar1->NumElems + -1);
          UNLOCK();
          if ((bVar7) && (plVar11 != (longlong *)0x0)) {
            (**(code **)*plVar11)(plVar11,1);
          }
          bVar7 = true;
          local_58 = (undefined8 *)0x0;
          plVar11 = plVar3;
        }
        else if (bVar7) {
          if (plVar11 != (longlong *)0x0) {
            (**(code **)*plVar11)(plVar11,1);
          }
          bVar7 = false;
        }
        if ((aVar2 != (atomic<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>::FNode_*>
                       )0x0) && (local_58 != (undefined8 *)0x0)) {
          (**(code **)*local_58)(local_58,1);
        }
      } while (bVar7);
    }
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
    return;
  }
  return;
}

// BindInputs @ 14ad47f60

void __thiscall
Metasound::DynamicGraph::FDynamicOperator::BindInputs
          (FDynamicOperator *this,FInputVertexInterfaceData *param_1)

{
  RebindGraphInputs(param_1,&this->DynamicOperatorData);
  return;
}

// BindOutputs @ 14ad483e0

void __thiscall
Metasound::DynamicGraph::FDynamicOperator::BindOutputs
          (FDynamicOperator *this,FOutputVertexInterfaceData *param_1)

{
  RebindGraphOutputs(param_1,&this->DynamicOperatorData);
  return;
}

// Execute @ 14ad4f9c0

void __thiscall Metasound::DynamicGraph::FDynamicOperator::Execute(FDynamicOperator *this)

{
  int iVar1;
  TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
  *pTVar2;
  atomic<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>::FNode_*>
  aVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  
  if (DynamicOperatorPrivate::MetaSoundExperimentalTransformTimeoutInSeconds <= 0.0) {
    bVar8 = 0 < GCycleStatsShouldEmitNamedEvents;
    if (bVar8) {
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Green,"Metasound::FDynamicOperator::ApplyTransformsUntilFence");
    }
    bVar11 = -1 < CpuChannel->Enabled;
    if (bVar11) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId143,
                 "Metasound::FDynamicOperator::ApplyTransformsUntilFence",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperator.cpp"
                 ,0x8f);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId143);
    }
    if (this->bExecuteFenceIsSet == false) {
      while( true ) {
        do {
          if (((this->TransformQueue).Object ==
               (TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
                *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pTVar2 = (this->TransformQueue).Object;
          aVar3 = *(atomic<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>::FNode_*>
                    *)pTVar2->Tail;
          if (aVar3 == (atomic<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>::FNode_*>
                        )0x0) goto LAB_14ad4faef;
          plVar4 = *(longlong **)((longlong)aVar3 + 8);
          *(undefined8 *)((longlong)aVar3 + 8) = 0;
          pTVar2->Tail = aVar3;
          LOCK();
          pTVar2->NumElems = (atomic<int>)((int)pTVar2->NumElems + -1);
          UNLOCK();
        } while (plVar4 == (longlong *)0x0);
        cVar7 = (**(code **)(*plVar4 + 8))(plVar4,&this->DynamicOperatorData);
        if (cVar7 == '\x01') break;
        (**(code **)*plVar4)();
      }
      this->bExecuteFenceIsSet = true;
      (**(code **)*plVar4)(plVar4);
    }
LAB_14ad4faef:
    if (bVar11) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar8) {
      FGenericPlatformMisc::EndNamedEvent();
    }
  }
  else {
    ApplyTransformsUntilFenceOrTimeout
              (this,(double)DynamicOperatorPrivate::MetaSoundExperimentalTransformTimeoutInSeconds);
  }
  iVar1 = (this->DynamicOperatorData).ExecuteTable.ArrayNum;
  pFVar9 = (this->DynamicOperatorData).ExecuteTable.AllocatorInstance.Data;
  pFVar10 = pFVar9 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->DynamicOperatorData).ExecuteTable.ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::DynamicGraph::FExecuteEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar10) {
      return;
    }
    if ((*(longlong *)(pFVar9 + 0x10) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Operator",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.h"
                           ,0x1c,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((*(longlong *)(pFVar9 + 0x18) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Function",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.h"
                           ,0x1d,L""), bVar8)) break;
    (**(code **)(pFVar9 + 0x18))(*(undefined8 *)(pFVar9 + 0x10));
    pFVar9 = pFVar9 + 0x20;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// FlushEnqueuedTransforms @ 14ad52680

void __thiscall
Metasound::DynamicGraph::FDynamicOperator::FlushEnqueuedTransforms(FDynamicOperator *this)

{
  TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
  *pTVar1;
  atomic<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>::FNode_*>
  aVar2;
  longlong *plVar3;
  bool bVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  
  bVar4 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar4) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FDynamicOperator::FlushEnqueuedTransforms");
  }
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId122,"Metasound::FDynamicOperator::FlushEnqueuedTransforms",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperator.cpp"
               ,0x7a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId122);
  }
  while( true ) {
    if (((this->TransformQueue).Object ==
         (TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
          *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar1 = (this->TransformQueue).Object;
    aVar2 = *(atomic<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>::FNode_*>
              *)pTVar1->Tail;
    if (aVar2 == (atomic<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>::FNode_*>
                  )0x0) break;
    plVar3 = *(longlong **)((longlong)aVar2 + 8);
    *(undefined8 *)((longlong)aVar2 + 8) = 0;
    pTVar1->Tail = aVar2;
    LOCK();
    pTVar1->NumElems = (atomic<int>)((int)pTVar1->NumElems + -1);
    UNLOCK();
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3,&this->DynamicOperatorData);
      (**(code **)*plVar3)(plVar3,1);
    }
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!bVar4) {
    return;
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// GetDynamicGraphOperatorData @ 14ad55a30

FDynamicGraphOperatorData * __thiscall
Metasound::DynamicGraph::FDynamicOperator::GetDynamicGraphOperatorData(FDynamicOperator *this)

{
  return (FDynamicGraphOperatorData *)&this->field_0x8;
}

// GetExecuteFunction @ 14ad55ce0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::DynamicGraph::FDynamicOperator::GetExecuteFunction(FDynamicOperator *this)

{
  return StaticExecute;
}

// GetPostExecuteFunction @ 14ad566b0

_func___cdecl_void_IOperator_ptr * __thiscall
Metasound::DynamicGraph::FDynamicOperator::GetPostExecuteFunction(FDynamicOperator *this)

{
  return StaticPostExecute;
}

// GetResetFunction @ 14ad567a0

_func___cdecl_void_IOperator_ptr_FResetParams_ptr * __thiscall
Metasound::DynamicGraph::FDynamicOperator::GetResetFunction(FDynamicOperator *this)

{
  return StaticReset;
}

// PostExecute @ 14ad5b880

void __thiscall Metasound::DynamicGraph::FDynamicOperator::PostExecute(FDynamicOperator *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->DynamicOperatorData).PostExecuteTable.ArrayNum;
  pFVar2 = (this->DynamicOperatorData).PostExecuteTable.AllocatorInstance.Data;
  pFVar5 = pFVar2 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->DynamicOperatorData).PostExecuteTable.ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::DynamicGraph::FPostExecuteEntry,int,1>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar2) break;
    if (*(longlong *)(pFVar5 + -0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Operator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.h"
                         ,0x2e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(longlong *)(pFVar5 + -8) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Function",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.h"
                         ,0x2f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (**(code **)(pFVar5 + -8))(*(undefined8 *)(pFVar5 + -0x10));
    pFVar5 = pFVar5 + -0x20;
  }
  this->bExecuteFenceIsSet = false;
  return;
}

// Reset @ 14ad626e0

void __thiscall
Metasound::DynamicGraph::FDynamicOperator::Reset(FDynamicOperator *this,FResetParams *param_1)

{
  int iVar1;
  TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
  *pTVar2;
  atomic<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>::FNode_*>
  aVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  
  bVar7 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar7) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FDynamicOperator::FlushEnqueuedTransforms");
  }
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId122,"Metasound::FDynamicOperator::FlushEnqueuedTransforms",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperator.cpp"
               ,0x7a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId122);
  }
  while( true ) {
    if (((this->TransformQueue).Object ==
         (TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
          *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar2 = (this->TransformQueue).Object;
    aVar3 = *(atomic<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>::FNode_*>
              *)pTVar2->Tail;
    if (aVar3 == (atomic<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>::FNode_*>
                  )0x0) break;
    plVar4 = *(longlong **)((longlong)aVar3 + 8);
    *(undefined8 *)((longlong)aVar3 + 8) = 0;
    pTVar2->Tail = aVar3;
    LOCK();
    pTVar2->NumElems = (atomic<int>)((int)pTVar2->NumElems + -1);
    UNLOCK();
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 8))(plVar4,&this->DynamicOperatorData);
      (**(code **)*plVar4)(plVar4,1);
    }
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  iVar1 = (this->DynamicOperatorData).ResetTable.ArrayNum;
  pFVar8 = (this->DynamicOperatorData).ResetTable.AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x20;
  while( true ) {
    if ((this->DynamicOperatorData).ResetTable.ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::DynamicGraph::FResetEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar9) {
      return;
    }
    if ((*(longlong *)(pFVar8 + 0x10) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Operator",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.h"
                           ,0x40,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((*(longlong *)(pFVar8 + 0x18) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Function",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.h"
                           ,0x41,L""), bVar7)) break;
    (**(code **)(pFVar8 + 0x18))(*(undefined8 *)(pFVar8 + 0x10),param_1);
    pFVar8 = pFVar8 + 0x20;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// StaticExecute @ 14ad64f40

void __cdecl Metasound::DynamicGraph::FDynamicOperator::StaticExecute(IOperator *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  IOperator IVar8;
  IOperator IVar9;
  bool bVar10;
  undefined1 auStackX_8 [8];
  
  if (DynamicOperatorPrivate::MetaSoundExperimentalTransformTimeoutInSeconds <= 0.0) {
    bVar7 = 0 < GCycleStatsShouldEmitNamedEvents;
    if (bVar7) {
      FGenericPlatformMisc::BeginNamedEvent
                (&FColor::Green,"Metasound::FDynamicOperator::ApplyTransformsUntilFence");
    }
    bVar10 = -1 < CpuChannel->Enabled;
    if (bVar10) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId143,
                 "Metasound::FDynamicOperator::ApplyTransformsUntilFence",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperator.cpp"
                 ,0x8f);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId143);
    }
    if (*(char *)(param_1 + 0x3a) == '\0') {
      while( true ) {
        do {
          if ((param_1[0x38] == (IOperator)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          IVar8 = param_1[0x38];
          lVar2 = **(longlong **)IVar8;
          if (lVar2 == 0) goto LAB_14ad4faef;
          plVar3 = *(longlong **)(lVar2 + 8);
          *(undefined8 *)(lVar2 + 8) = 0;
          *(longlong *)IVar8 = lVar2;
          LOCK();
          *(int *)((longlong)IVar8 + 0x20) = *(int *)((longlong)IVar8 + 0x20) + -1;
          UNLOCK();
        } while (plVar3 == (longlong *)0x0);
        cVar6 = (**(code **)(*plVar3 + 8))(plVar3,param_1 + 2);
        if (cVar6 == '\x01') break;
        (**(code **)*plVar3)();
      }
      *(undefined1 *)(param_1 + 0x3a) = 1;
      (**(code **)*plVar3)(plVar3);
    }
LAB_14ad4faef:
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar7) {
      FGenericPlatformMisc::EndNamedEvent();
    }
  }
  else {
    ApplyTransformsUntilFenceOrTimeout
              ((FDynamicOperator *)param_1,
               (double)DynamicOperatorPrivate::MetaSoundExperimentalTransformTimeoutInSeconds);
  }
  iVar1 = *(int *)(param_1 + 0x33);
  IVar8 = param_1[0x32];
  IVar9 = (IOperator)((longlong)iVar1 * 0x20 + (longlong)IVar8);
  while( true ) {
    if (*(int *)(param_1 + 0x33) != iVar1) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<Metasound::DynamicGraph::FExecuteEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_8);
    }
    if (IVar8 == IVar9) {
      return;
    }
    if ((*(longlong *)((longlong)IVar8 + 0x10) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Operator",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.h"
                           ,0x1c,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((*(longlong *)((longlong)IVar8 + 0x18) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Function",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.h"
                           ,0x1d,L""), bVar7)) break;
    (**(code **)((longlong)IVar8 + 0x18))(*(undefined8 *)((longlong)IVar8 + 0x10));
    IVar8 = (IOperator)((longlong)IVar8 + 0x20);
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// StaticPostExecute @ 14ad651e0

void __cdecl Metasound::DynamicGraph::FDynamicOperator::StaticPostExecute(IOperator *param_1)

{
  int iVar1;
  IOperator IVar2;
  code *pcVar3;
  bool bVar4;
  IOperator IVar5;
  undefined1 local_res8 [8];
  
  iVar1 = *(int *)(param_1 + 0x35);
  IVar2 = param_1[0x34];
  IVar5 = (IOperator)((longlong)iVar1 * 0x20 + (longlong)IVar2);
  while( true ) {
    if (*(int *)(param_1 + 0x35) != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Metasound::DynamicGraph::FPostExecuteEntry,int,1>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (IVar5 == IVar2) break;
    if (*(longlong *)((longlong)IVar5 + -0x10) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Operator",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.h"
                         ,0x2e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(longlong *)((longlong)IVar5 + -8) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Function",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.h"
                         ,0x2f,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (**(code **)((longlong)IVar5 + -8))(*(undefined8 *)((longlong)IVar5 + -0x10));
    IVar5 = (IOperator)((longlong)IVar5 + -0x20);
  }
  *(undefined1 *)(param_1 + 0x3a) = 0;
  return;
}

// StaticReset @ 14ad65460

void __cdecl
Metasound::DynamicGraph::FDynamicOperator::StaticReset(IOperator *param_1,FResetParams *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  IOperator IVar7;
  IOperator IVar8;
  bool bVar9;
  undefined1 auStackX_8 [8];
  
  bVar6 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar6) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::FDynamicOperator::FlushEnqueuedTransforms");
  }
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId122,"Metasound::FDynamicOperator::FlushEnqueuedTransforms",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperator.cpp"
               ,0x7a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId122);
  }
  while( true ) {
    if ((param_1[0x38] == (IOperator)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    IVar7 = param_1[0x38];
    lVar2 = **(longlong **)IVar7;
    if (lVar2 == 0) break;
    plVar3 = *(longlong **)(lVar2 + 8);
    *(undefined8 *)(lVar2 + 8) = 0;
    *(longlong *)IVar7 = lVar2;
    LOCK();
    *(int *)((longlong)IVar7 + 0x20) = *(int *)((longlong)IVar7 + 0x20) + -1;
    UNLOCK();
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3,param_1 + 2);
      (**(code **)*plVar3)(plVar3,1);
    }
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  iVar1 = *(int *)(param_1 + 0x37);
  IVar7 = param_1[0x36];
  IVar8 = (IOperator)((longlong)iVar1 * 0x20 + (longlong)IVar7);
  while( true ) {
    if (*(int *)(param_1 + 0x37) != iVar1) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<Metasound::DynamicGraph::FResetEntry,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_8);
    }
    if (IVar7 == IVar8) {
      return;
    }
    if ((*(longlong *)((longlong)IVar7 + 0x10) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Operator",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.h"
                           ,0x40,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((*(longlong *)((longlong)IVar7 + 0x18) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Function",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicGraphAlgo.h"
                           ,0x41,L""), bVar6)) break;
    (**(code **)((longlong)IVar7 + 0x18))(*(undefined8 *)((longlong)IVar7 + 0x10),param_2);
    IVar7 = (IOperator)((longlong)IVar7 + 0x20);
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

