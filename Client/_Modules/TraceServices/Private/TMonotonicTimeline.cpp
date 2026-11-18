// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 54

// TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings> @ 14d41f9d0

TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
* __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
          (TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this,ILinearAllocator *param_1)

{
  ILinearAllocator *pIVar1;
  double dVar2;
  int iVar3;
  
  this->_padding_ =
       (longlong)
       &_vftable__for__TraceServices__ITimeline<TraceServices::FLoadTimeProfilerCpuEvent>__;
  this->_padding_ =
       (longlong)
       &_vftable__for__TraceServices__IEditableTimeline<TraceServices::FLoadTimeProfilerCpuEvent>__;
  this->Allocator = param_1;
  (this->DetailLevels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DetailLevels).ArrayNum = 0;
  (this->DetailLevels).ArrayMax = 0;
  pIVar1 = this->Allocator;
  this->ExtraDepthEvents = 0;
  this->ModCount = 0;
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1c090,8,&(this->DetailLevels).AllocatorInstance,
                     &(this->DetailLevels).ArrayMax);
  (this->DetailLevels).ArrayNum = iVar3 + 1;
  FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  ::
  FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
            ((FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
              *)((this->DetailLevels).AllocatorInstance.Data + (longlong)iVar3 * 0x1c090),pIVar1,0.0
            );
  iVar3 = (this->DetailLevels).ArrayNum;
  pIVar1 = this->Allocator;
  if (iVar3 == (this->DetailLevels).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1c090,8,&(this->DetailLevels).AllocatorInstance,
                       &(this->DetailLevels).ArrayMax);
  }
  dVar2 = __real_3f1a36e2eb1c432d;
  (this->DetailLevels).ArrayNum = iVar3 + 1;
  FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  ::
  FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
            ((FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
              *)((this->DetailLevels).AllocatorInstance.Data + (longlong)iVar3 * 0x1c090),pIVar1,
             dVar2);
  iVar3 = (this->DetailLevels).ArrayNum;
  pIVar1 = this->Allocator;
  if (iVar3 == (this->DetailLevels).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1c090,8,&(this->DetailLevels).AllocatorInstance,
                       &(this->DetailLevels).ArrayMax);
  }
  dVar2 = __real_3f50624dd2f1a9fc;
  (this->DetailLevels).ArrayNum = iVar3 + 1;
  FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  ::
  FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
            ((FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
              *)((this->DetailLevels).AllocatorInstance.Data + (longlong)iVar3 * 0x1c090),pIVar1,
             dVar2);
  iVar3 = (this->DetailLevels).ArrayNum;
  pIVar1 = this->Allocator;
  if (iVar3 == (this->DetailLevels).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1c090,8,&(this->DetailLevels).AllocatorInstance,
                       &(this->DetailLevels).ArrayMax);
  }
  dVar2 = __real_3f80624dd2f1a9fc;
  (this->DetailLevels).ArrayNum = iVar3 + 1;
  FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  ::
  FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
            ((FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
              *)((this->DetailLevels).AllocatorInstance.Data + (longlong)iVar3 * 0x1c090),pIVar1,
             dVar2);
  iVar3 = (this->DetailLevels).ArrayNum;
  pIVar1 = this->Allocator;
  if (iVar3 == (this->DetailLevels).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1c090,8,&(this->DetailLevels).AllocatorInstance,
                       &(this->DetailLevels).ArrayMax);
  }
  dVar2 = __real_3fa47ae147ae147b;
  (this->DetailLevels).ArrayNum = iVar3 + 1;
  FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  ::
  FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
            ((FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
              *)((this->DetailLevels).AllocatorInstance.Data + (longlong)iVar3 * 0x1c090),pIVar1,
             dVar2);
  iVar3 = (this->DetailLevels).ArrayNum;
  pIVar1 = this->Allocator;
  if (iVar3 == (this->DetailLevels).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1c090,8,&(this->DetailLevels).AllocatorInstance,
                       &(this->DetailLevels).ArrayMax);
  }
  dVar2 = __real_3fc999999999999a;
  (this->DetailLevels).ArrayNum = iVar3 + 1;
  FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  ::
  FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
            ((FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
              *)((this->DetailLevels).AllocatorInstance.Data + (longlong)iVar3 * 0x1c090),pIVar1,
             dVar2);
  return this;
}

// TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings> @ 14d41fbe0

TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
* __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
          (TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this,ILinearAllocator *param_1)

{
  ILinearAllocator *pIVar1;
  double dVar2;
  int iVar3;
  
  this->_padding_ =
       (longlong)&_vftable__for__TraceServices__ITimeline<TraceServices::FTimingProfilerEvent>__;
  this->_padding_ =
       (longlong)
       &_vftable__for__TraceServices__IEditableTimeline<TraceServices::FTimingProfilerEvent>__;
  this->Allocator = param_1;
  (this->DetailLevels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DetailLevels).ArrayNum = 0;
  (this->DetailLevels).ArrayMax = 0;
  pIVar1 = this->Allocator;
  this->ExtraDepthEvents = 0;
  this->ModCount = 0;
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18090,8,&(this->DetailLevels).AllocatorInstance,
                     &(this->DetailLevels).ArrayMax);
  (this->DetailLevels).ArrayNum = iVar3 + 1;
  FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  ::
  FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
            ((FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
              *)((this->DetailLevels).AllocatorInstance.Data + (longlong)iVar3 * 0x18090),pIVar1,0.0
            );
  iVar3 = (this->DetailLevels).ArrayNum;
  pIVar1 = this->Allocator;
  if (iVar3 == (this->DetailLevels).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18090,8,&(this->DetailLevels).AllocatorInstance,
                       &(this->DetailLevels).ArrayMax);
  }
  dVar2 = __real_3f1a36e2eb1c432d;
  (this->DetailLevels).ArrayNum = iVar3 + 1;
  FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  ::
  FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
            ((FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
              *)((this->DetailLevels).AllocatorInstance.Data + (longlong)iVar3 * 0x18090),pIVar1,
             dVar2);
  iVar3 = (this->DetailLevels).ArrayNum;
  pIVar1 = this->Allocator;
  if (iVar3 == (this->DetailLevels).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18090,8,&(this->DetailLevels).AllocatorInstance,
                       &(this->DetailLevels).ArrayMax);
  }
  dVar2 = __real_3f50624dd2f1a9fc;
  (this->DetailLevels).ArrayNum = iVar3 + 1;
  FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  ::
  FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
            ((FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
              *)((this->DetailLevels).AllocatorInstance.Data + (longlong)iVar3 * 0x18090),pIVar1,
             dVar2);
  iVar3 = (this->DetailLevels).ArrayNum;
  pIVar1 = this->Allocator;
  if (iVar3 == (this->DetailLevels).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18090,8,&(this->DetailLevels).AllocatorInstance,
                       &(this->DetailLevels).ArrayMax);
  }
  dVar2 = __real_3f80624dd2f1a9fc;
  (this->DetailLevels).ArrayNum = iVar3 + 1;
  FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  ::
  FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
            ((FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
              *)((this->DetailLevels).AllocatorInstance.Data + (longlong)iVar3 * 0x18090),pIVar1,
             dVar2);
  iVar3 = (this->DetailLevels).ArrayNum;
  pIVar1 = this->Allocator;
  if (iVar3 == (this->DetailLevels).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18090,8,&(this->DetailLevels).AllocatorInstance,
                       &(this->DetailLevels).ArrayMax);
  }
  dVar2 = __real_3fa47ae147ae147b;
  (this->DetailLevels).ArrayNum = iVar3 + 1;
  FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  ::
  FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
            ((FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
              *)((this->DetailLevels).AllocatorInstance.Data + (longlong)iVar3 * 0x18090),pIVar1,
             dVar2);
  iVar3 = (this->DetailLevels).ArrayNum;
  pIVar1 = this->Allocator;
  if (iVar3 == (this->DetailLevels).ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18090,8,&(this->DetailLevels).AllocatorInstance,
                       &(this->DetailLevels).ArrayMax);
  }
  dVar2 = __real_3fc999999999999a;
  (this->DetailLevels).ArrayNum = iVar3 + 1;
  FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  ::
  FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
            ((FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
              *)((this->DetailLevels).AllocatorInstance.Data + (longlong)iVar3 * 0x18090),pIVar1,
             dVar2);
  return this;
}

// ~TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings> @ 14d428040

void __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::
~TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
          (TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>,int>
            ((FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
              *)(this->DetailLevels).AllocatorInstance.Data,(this->DetailLevels).ArrayNum);
  pFVar1 = (this->DetailLevels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings> @ 14d428080

void __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::
~TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
          (TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TraceServices::FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>,int>
            ((FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
              *)(this->DetailLevels).AllocatorInstance.Data,(this->DetailLevels).ArrayNum);
  pFVar1 = (this->DetailLevels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 14d42fb90

EEventEnumerate __thiscall
`TraceServices::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateEventsBackwardsDownSampled'::__l2::<lambda_1>::operator()
          (void *this,bool param_1,double param_2,FLoadTimeProfilerCpuEvent *param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  longlong lVar3;
  FPackageExportInfo *pFVar4;
  EEventEnumerate EVar5;
  longlong lVar6;
  undefined4 local_res10 [6];
  undefined8 local_18;
  double local_10 [2];
  
  puVar2 = *(uint **)((longlong)this + 8);
  if (param_1) {
    lVar3 = *(longlong *)this;
    pFVar4 = param_3->Export;
    lVar6 = (ulonglong)*puVar2 * 0x20;
    puVar1 = (undefined8 *)(lVar6 + 8 + lVar3);
    *puVar1 = param_3->Package;
    puVar1[1] = pFVar4;
    *(undefined8 *)(lVar6 + 0x18 + lVar3) = *(undefined8 *)&param_3->EventType;
    *(double *)(lVar6 + lVar3) = param_2;
    **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
    return Continue;
  }
  lVar3 = *(longlong *)this;
  *puVar2 = *puVar2 - 1;
  local_res10[0] = **(undefined4 **)((longlong)this + 8);
  local_18 = *(undefined8 *)((ulonglong)*puVar2 * 0x20 + lVar3);
  local_10[0] = param_2;
  EVar5 = (**(code **)((longlong)this + 0x10))
                    (*(undefined8 *)((longlong)this + 0x18),local_10,&local_18,local_res10,param_3);
  return EVar5;
}

// operator() @ 14d42fc20

EEventEnumerate __thiscall
`TraceServices::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateEventsBackwardsDownSampled'::__l2::<lambda_1>::operator()
          (void *this,bool param_1,double param_2,FTimingProfilerEvent *param_3)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  EEventEnumerate EVar4;
  undefined4 local_res10 [6];
  undefined8 local_18;
  double local_10 [2];
  
  puVar2 = *(uint **)((longlong)this + 8);
  if (param_1) {
    uVar1 = *puVar2;
    lVar3 = *(longlong *)this;
    *(uint *)(lVar3 + 8 + (ulonglong)uVar1 * 0x10) = param_3->TimerIndex;
    *(double *)(lVar3 + (ulonglong)uVar1 * 0x10) = param_2;
    **(int **)((longlong)this + 8) = **(int **)((longlong)this + 8) + 1;
    return Continue;
  }
  lVar3 = *(longlong *)this;
  *puVar2 = *puVar2 - 1;
  local_res10[0] = **(undefined4 **)((longlong)this + 8);
  local_18 = *(undefined8 *)(lVar3 + (ulonglong)*puVar2 * 0x10);
  local_10[0] = param_2;
  EVar4 = (**(code **)((longlong)this + 0x10))
                    (*(undefined8 *)((longlong)this + 0x18),local_10,&local_18,local_res10,param_3);
  return EVar4;
}

// operator() @ 14d42fcb0

EEventEnumerate __thiscall
`TraceServices::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateEventsDownSampled'::__l2::<lambda_1>::operator()
          (void *this,bool param_1,double param_2,FLoadTimeProfilerCpuEvent *param_3)

{
  int *piVar1;
  uint uVar2;
  ForAnyElementType *pFVar3;
  longlong lVar4;
  uint *puVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  FPackageExportInfo *pFVar8;
  int iVar9;
  EEventEnumerate EVar10;
  FScriptContainerElement *pFVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 local_res10 [2];
  undefined8 local_38;
  undefined8 local_30 [3];
  
  if (param_1) {
    *(longlong *)(*(longlong *)this + (ulonglong)**(uint **)((longlong)this + 0x10) * 8) =
         (longlong)*(int *)(*(longlong *)((longlong)this + 8) + 8);
    pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    iVar9 = *(int *)&pFVar3[1].Data;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar9 + 1;
    pFVar11 = pFVar3->Data + (longlong)iVar9 * 0x30;
    DefaultConstructItems<_TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateEventsDownSampled_::__l2::FOutputEvent,int>
              (pFVar11,1);
    auVar7._8_4_ = SUB84(param_2,0);
    auVar7._0_8_ = param_2;
    auVar7._12_4_ = (int)((ulonglong)param_2 >> 0x20);
    *(undefined1 (*) [16])pFVar11 = auVar7;
    *(undefined4 *)(pFVar11 + 0x10) = **(undefined4 **)((longlong)this + 0x10);
    pFVar8 = param_3->Export;
    *(FPackageInfo **)(pFVar11 + 0x18) = param_3->Package;
    *(FPackageExportInfo **)(pFVar11 + 0x20) = pFVar8;
    *(undefined8 *)(pFVar11 + 0x28) = *(undefined8 *)&param_3->EventType;
    **(int **)((longlong)this + 0x10) = **(int **)((longlong)this + 0x10) + 1;
  }
  else {
    lVar4 = *(longlong *)this;
    puVar5 = *(uint **)((longlong)this + 0x10);
    *puVar5 = *puVar5 - 1;
    *(double *)
     (**(longlong **)((longlong)this + 8) + 8 + *(longlong *)(lVar4 + (ulonglong)*puVar5 * 8) * 0x30
     ) = param_2;
    if (**(int **)((longlong)this + 0x10) == 0) {
      puVar6 = *(undefined8 **)((longlong)this + 8);
      iVar9 = *(int *)(puVar6 + 1);
      puVar12 = (undefined8 *)*puVar6;
      puVar13 = puVar12 + (longlong)iVar9 * 6;
      while( true ) {
        if (*(int *)(puVar6 + 1) != iVar9) {
          `TCheckedPointerIterator<`TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateEventsDownSampled'::__l2::FOutputEvent,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (puVar12 == puVar13) break;
        local_res10[0] = *(undefined4 *)(puVar12 + 2);
        local_38 = puVar12[1];
        local_30[0] = *puVar12;
        EVar10 = (**(code **)((longlong)this + 0x18))
                           (*(undefined8 *)((longlong)this + 0x20),local_30,&local_38,local_res10,
                            puVar12 + 3);
        if (EVar10 != Continue) {
          return EVar10;
        }
        puVar12 = puVar12 + 6;
      }
      pFVar3 = *(ForAnyElementType **)((longlong)this + 8);
      uVar2 = *(uint *)&pFVar3[1].Data;
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      puVar5 = (uint *)((longlong)&pFVar3[1].Data + 4);
      *(undefined4 *)&pFVar3[1].Data = 0;
      if (*puVar5 != uVar2) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,uVar2,pFVar3,0,(int *)puVar5);
      }
    }
  }
  return Continue;
}

// operator() @ 14d42fe60

EEventEnumerate __thiscall
`TraceServices::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateEventsDownSampled'::__l2::<lambda_1>::operator()
          (void *this,bool param_1,double param_2,FTimingProfilerEvent *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  uint uVar4;
  ForAnyElementType *pFVar5;
  longlong lVar6;
  uint *puVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  int iVar10;
  EEventEnumerate EVar11;
  undefined8 *puVar12;
  undefined4 local_res10 [2];
  undefined8 local_38;
  undefined8 local_30 [3];
  
  if (param_1) {
    *(longlong *)(*(longlong *)this + (ulonglong)**(uint **)((longlong)this + 0x10) * 8) =
         (longlong)*(int *)(*(longlong *)((longlong)this + 8) + 8);
    pFVar5 = *(ForAnyElementType **)((longlong)this + 8);
    piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
    iVar10 = *(int *)&pFVar5[1].Data;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,pFVar5,piVar1);
    }
    *(int *)&pFVar5[1].Data = iVar10 + 1;
    pFVar2 = pFVar5->Data + (longlong)iVar10 * 0x18;
    DefaultConstructItems<_TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateEventsDownSampled_::__l2::FOutputEvent,int>
              (pFVar2,1);
    auVar9._8_4_ = SUB84(param_2,0);
    auVar9._0_8_ = param_2;
    auVar9._12_4_ = (int)((ulonglong)param_2 >> 0x20);
    *(undefined1 (*) [16])pFVar2 = auVar9;
    *(undefined4 *)(pFVar2 + 0x10) = **(undefined4 **)((longlong)this + 0x10);
    *(uint *)(pFVar2 + 0x14) = param_3->TimerIndex;
    **(int **)((longlong)this + 0x10) = **(int **)((longlong)this + 0x10) + 1;
  }
  else {
    lVar6 = *(longlong *)this;
    puVar7 = *(uint **)((longlong)this + 0x10);
    *puVar7 = *puVar7 - 1;
    *(double *)
     (**(longlong **)((longlong)this + 8) + 8 + *(longlong *)(lVar6 + (ulonglong)*puVar7 * 8) * 0x18
     ) = param_2;
    if (**(int **)((longlong)this + 0x10) == 0) {
      puVar8 = *(undefined8 **)((longlong)this + 8);
      iVar10 = *(int *)(puVar8 + 1);
      puVar12 = (undefined8 *)*puVar8;
      puVar3 = puVar12 + (longlong)iVar10 * 3;
      while( true ) {
        if (*(int *)(puVar8 + 1) != iVar10) {
          `TCheckedPointerIterator<`TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateEventsDownSampled'::__l2::FOutputEvent,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (puVar12 == puVar3) break;
        local_res10[0] = *(undefined4 *)(puVar12 + 2);
        local_38 = puVar12[1];
        local_30[0] = *puVar12;
        EVar11 = (**(code **)((longlong)this + 0x18))
                           (*(undefined8 *)((longlong)this + 0x20),local_30,&local_38,local_res10,
                            (longlong)puVar12 + 0x14);
        if (EVar11 != Continue) {
          return EVar11;
        }
        puVar12 = puVar12 + 3;
      }
      pFVar5 = *(ForAnyElementType **)((longlong)this + 8);
      uVar4 = *(uint *)&pFVar5[1].Data;
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
      }
      puVar7 = (uint *)((longlong)&pFVar5[1].Data + 4);
      *(undefined4 *)&pFVar5[1].Data = 0;
      if (*puVar7 != uVar4) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar4,pFVar5,0,(int *)puVar7);
      }
    }
  }
  return Continue;
}

// AddEvent @ 14d43a660

void __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::AddEvent(TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this,FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                 *param_1,FLoadTimeProfilerCpuEvent *param_2)

{
  int *piVar1;
  ulong64 *puVar2;
  ILinearAllocator *pIVar3;
  ulong64 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ELoadTimeProfilerObjectEventType EVar9;
  undefined4 uVar10;
  int iVar11;
  FLoadTimeProfilerCpuEvent *pFVar12;
  TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent> *pTVar13;
  
  puVar2 = &(param_1->ScopeEntries).FirstPage[(param_1->InsertionState).CurrentScopeEntryPageIndex].
            EndEventIndex;
  *puVar2 = *puVar2 + 1;
  uVar5 = *(undefined4 *)&param_2->Package;
  uVar6 = *(undefined4 *)((longlong)&param_2->Package + 4);
  uVar7 = *(undefined4 *)&param_2->Export;
  uVar8 = *(undefined4 *)((longlong)&param_2->Export + 4);
  pTVar13 = (param_1->Events).LastPage;
  EVar9 = param_2->EventType;
  uVar10 = *(undefined4 *)&param_2->field_0x14;
  if ((pTVar13 == (TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent> *)0x0) ||
     (pTVar13->Count == (param_1->Events).PageSize)) {
    iVar11 = (param_1->Events).PagesArray.ArrayNum;
    piVar1 = &(param_1->Events).PagesArray.ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&(param_1->Events).PagesArray.AllocatorInstance,piVar1);
    }
    (param_1->Events).PagesArray.ArrayNum = iVar11 + 1;
    pTVar13 = (TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent> *)
              ((param_1->Events).PagesArray.AllocatorInstance.Data + (longlong)iVar11 * 0x10);
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>,int>
              (pTVar13,1);
    pIVar3 = (param_1->Events).Allocator;
    (param_1->Events).FirstPage =
         (TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent> *)
         (param_1->Events).PagesArray.AllocatorInstance.Data;
    (param_1->Events).LastPage = pTVar13;
    pFVar12 = (FLoadTimeProfilerCpuEvent *)
              (**(code **)((longlong)*pIVar3 + 8))(pIVar3,(param_1->Events).PageSize * 0x18);
    ((param_1->Events).LastPage)->Items = pFVar12;
  }
  pTVar13 = (param_1->Events).LastPage;
  puVar2 = &(param_1->Events).TotalItemCount;
  *puVar2 = *puVar2 + 1;
  uVar4 = pTVar13->Count;
  pFVar12 = pTVar13->Items;
  *(undefined8 *)&pFVar12[uVar4].EventType = 3;
  pFVar12 = pFVar12 + uVar4;
  pFVar12->Package = (FPackageInfo *)0x0;
  pFVar12->Export = (FPackageExportInfo *)0x0;
  puVar2 = &((param_1->Events).LastPage)->Count;
  *puVar2 = *puVar2 + 1;
  *(undefined4 *)&pFVar12->Package = uVar5;
  *(undefined4 *)((longlong)&pFVar12->Package + 4) = uVar6;
  *(undefined4 *)&pFVar12->Export = uVar7;
  *(undefined4 *)((longlong)&pFVar12->Export + 4) = uVar8;
  pFVar12->EventType = EVar9;
  *(undefined4 *)&pFVar12->field_0x14 = uVar10;
  return;
}

// AddEvent @ 14d43a780

void __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::AddEvent(TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this,FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                 *param_1,FTimingProfilerEvent *param_2)

{
  int *piVar1;
  ulong64 *puVar2;
  uint uVar3;
  TPagedArrayPage<TraceServices::FTimingProfilerEvent> *pTVar4;
  ILinearAllocator *pIVar5;
  ulong64 uVar6;
  int iVar7;
  FTimingProfilerEvent *pFVar8;
  TPagedArrayPage<TraceServices::FTimingProfilerEvent> *pTVar9;
  
  puVar2 = &(param_1->ScopeEntries).FirstPage[(param_1->InsertionState).CurrentScopeEntryPageIndex].
            EndEventIndex;
  *puVar2 = *puVar2 + 1;
  pTVar4 = (param_1->Events).LastPage;
  uVar3 = param_2->TimerIndex;
  if ((pTVar4 == (TPagedArrayPage<TraceServices::FTimingProfilerEvent> *)0x0) ||
     (pTVar4->Count == (param_1->Events).PageSize)) {
    iVar7 = (param_1->Events).PagesArray.ArrayNum;
    piVar1 = &(param_1->Events).PagesArray.ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(param_1->Events).PagesArray.AllocatorInstance,piVar1);
    }
    (param_1->Events).PagesArray.ArrayNum = iVar7 + 1;
    pTVar9 = (TPagedArrayPage<TraceServices::FTimingProfilerEvent> *)
             ((param_1->Events).PagesArray.AllocatorInstance.Data + (longlong)iVar7 * 0x10);
    DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>,int>
              (pTVar9,1);
    pTVar4 = (TPagedArrayPage<TraceServices::FTimingProfilerEvent> *)
             (param_1->Events).PagesArray.AllocatorInstance.Data;
    pIVar5 = (param_1->Events).Allocator;
    (param_1->Events).LastPage = pTVar9;
    (param_1->Events).FirstPage = pTVar4;
    pFVar8 = (FTimingProfilerEvent *)
             (**(code **)((longlong)*pIVar5 + 8))(pIVar5,(param_1->Events).PageSize << 2);
    ((param_1->Events).LastPage)->Items = pFVar8;
  }
  pTVar4 = (param_1->Events).LastPage;
  puVar2 = &(param_1->Events).TotalItemCount;
  *puVar2 = *puVar2 + 1;
  uVar6 = pTVar4->Count;
  pFVar8 = pTVar4->Items;
  pFVar8[uVar6].TimerIndex = 0xffffffff;
  puVar2 = &((param_1->Events).LastPage)->Count;
  *puVar2 = *puVar2 + 1;
  pFVar8[uVar6].TimerIndex = uVar3;
  return;
}

// AddScopeEntry @ 14d43be80

void __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::AddScopeEntry(TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                *this,FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                      *param_1,double param_2,bool param_3)

{
  ushort *puVar1;
  longlong lVar2;
  ushort uVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  FEventScopeEntryPage *pFVar7;
  FEventScopeEntryPage *pFVar8;
  code *pcVar9;
  bool bVar10;
  ushort uVar11;
  FEventScopeEntry *pFVar12;
  ulong64 uVar13;
  FEventStackEntry *pFVar14;
  ulonglong uVar15;
  ulong64 *puVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  double dVar21;
  
  if ((param_2 < (param_1->InsertionState).LastTime) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Time >= DetailLevel.InsertionState.LastTime",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                          ,0x49b,L"Time=%.9f LastTime=%.9f"), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar4 = (param_1->Events).TotalItemCount;
  uVar5 = (param_1->ScopeEntries).TotalItemCount;
  pFVar12 = TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>::
            PushBack(&param_1->ScopeEntries);
  dVar21 = param_2;
  if (param_3) {
    dVar21 = (double)CONCAT44((uint)((ulonglong)param_2 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              SUB84(param_2,0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  pFVar12->Time = dVar21;
  uVar6 = (param_1->InsertionState).CurrentScopeEntryPageIndex;
  uVar13 = (longlong)(param_1->ScopeEntries).PagesArray.ArrayNum - 1;
  pFVar7 = (param_1->ScopeEntries).LastPage;
  if (uVar13 == uVar6) goto LAB_14d43c1a4;
  if (uVar6 != 0xffffffffffffffff) {
    pFVar8 = (param_1->ScopeEntries).FirstPage;
    uVar15 = (ulonglong)pFVar8[uVar6].InitialStackCount;
    if ((0x400 < (param_1->InsertionState).CurrentDepth) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("DetailLevel.InsertionState.CurrentDepth <= SettingsType::MaxDepth",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                            ,0x4ab,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar19 = (ulonglong)(param_1->InsertionState).CurrentDepth;
    lVar17 = 0;
    if (uVar15 < 4) {
      if (uVar15 != 0) {
        lVar18 = -0x14090 - (longlong)param_1;
        goto LAB_14d43c0db;
      }
    }
    else {
      puVar16 = &(param_1->InsertionState).EventStack[0].EventIndex;
      lVar18 = -0x14090 - (longlong)param_1;
      lVar20 = 2;
      do {
        if ((longlong)uVar19 <= lVar17) goto LAB_14d43c13c;
        pFVar14 = pFVar8[uVar6].InitialStack;
        lVar2 = lVar18 + (longlong)puVar16;
        if (((((((FEventStackEntry *)(puVar16 + -1))->EnterScopeIndex !=
                *(ulong64 *)((longlong)pFVar14 + lVar2)) ||
              (*puVar16 != *(ulong64 *)((longlong)pFVar14 + lVar2 + 8))) ||
             (*(ulong64 *)((longlong)pFVar14 + lVar2 + 0x10) = puVar16[1],
             (longlong)uVar19 <= lVar20 + -1)) ||
            ((pFVar14 = pFVar8[uVar6].InitialStack,
             puVar16[3] != *(longlong *)(lVar2 + 0x20 + (longlong)pFVar14) ||
             (puVar16[4] != *(longlong *)(lVar2 + 0x28 + (longlong)pFVar14))))) ||
           (*(ulong64 *)(lVar2 + 0x30 + (longlong)pFVar14) = puVar16[5], (longlong)uVar19 <= lVar20)
           ) goto LAB_14d43c13c;
        pFVar14 = pFVar8[uVar6].InitialStack;
        lVar2 = (-82000 - (longlong)param_1) + (longlong)puVar16;
        if (((puVar16[7] != *(longlong *)(lVar2 + (longlong)pFVar14)) ||
            (puVar16[8] != *(longlong *)(lVar2 + 8 + (longlong)pFVar14))) ||
           (*(ulong64 *)(lVar2 + 0x10 + (longlong)pFVar14) = puVar16[9],
           (longlong)uVar19 <= lVar20 + 1)) goto LAB_14d43c13c;
        pFVar14 = pFVar8[uVar6].InitialStack;
        lVar2 = (-0x14030 - (longlong)param_1) + (longlong)puVar16;
        if ((puVar16[0xb] != *(longlong *)(lVar2 + (longlong)pFVar14)) ||
           (puVar16[0xc] != *(longlong *)(lVar2 + 8 + (longlong)pFVar14))) goto LAB_14d43c13c;
        lVar17 = lVar17 + 4;
        *(ulong64 *)(lVar2 + 0x10 + (longlong)pFVar14) = puVar16[0xd];
        lVar20 = lVar20 + 4;
        puVar16 = puVar16 + 0x10;
      } while (lVar17 < (longlong)(uVar15 - 3));
      if (lVar17 < (longlong)uVar15) {
LAB_14d43c0db:
        puVar16 = &(param_1->InsertionState).EventStack[lVar17].EventIndex;
        while (lVar17 < (longlong)uVar19) {
          pFVar14 = pFVar8[uVar6].InitialStack;
          if ((((FEventStackEntry *)(puVar16 + -1))->EnterScopeIndex !=
               *(ulong64 *)((longlong)puVar16 + (longlong)&pFVar14->EnterScopeIndex + lVar18)) ||
             (*puVar16 != *(ulong64 *)((longlong)puVar16 + (longlong)&pFVar14->EventIndex + lVar18))
             ) break;
          lVar17 = lVar17 + 1;
          *(ulong64 *)((longlong)puVar16 + (longlong)&pFVar14->ExclTime + lVar18) = puVar16[1];
          puVar16 = puVar16 + 4;
          if ((longlong)uVar15 <= lVar17) break;
        }
      }
    }
  }
LAB_14d43c13c:
  (param_1->InsertionState).CurrentScopeEntryPageIndex = uVar13;
  pFVar7->BeginTime = param_2;
  uVar6 = (param_1->Events).TotalItemCount;
  pFVar7->BeginEventIndex = uVar6;
  pFVar7->EndEventIndex = uVar6;
  uVar11 = (param_1->InsertionState).CurrentDepth;
  pFVar7->InitialStackCount = uVar11;
  if (uVar11 != 0) {
    pFVar14 = (FEventStackEntry *)
              (**(code **)((longlong)*this->Allocator + 8))(this->Allocator,(ulonglong)uVar11 << 5);
    pFVar7->InitialStack = pFVar14;
    memcpy(pFVar14,(param_1->InsertionState).EventStack,(ulonglong)pFVar7->InitialStackCount << 5);
  }
LAB_14d43c1a4:
  pFVar7->EndTime = param_2;
  uVar11 = (param_1->InsertionState).CurrentDepth;
  if (param_3) {
    uVar11 = uVar11 + 1;
    (param_1->InsertionState).CurrentDepth = uVar11;
    if ((0x400 < uVar11) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("DetailLevel.InsertionState.CurrentDepth <= SettingsType::MaxDepth",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                            ,0x4d1,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar15 = (ulonglong)(param_1->InsertionState).CurrentDepth;
    (param_1->InsertionState).EventStack[uVar15 - 1].EventIndex = uVar4;
    (param_1->InsertionState).EventStack[uVar15 - 1].EnterScopeIndex = uVar5;
    (param_1->InsertionState).EventStack[uVar15 - 1].ExclTime = 0.0;
    (param_1->InsertionState).EventStack[uVar15 - 1].EndTime = -1.0;
    uVar11 = (param_1->InsertionState).CurrentDepth;
    if (1 < uVar11) {
      (param_1->InsertionState).EventStack[(ulonglong)uVar11 - 2].ExclTime =
           (param_2 - (param_1->InsertionState).LastTime) +
           (param_1->InsertionState).EventStack[(ulonglong)uVar11 - 2].ExclTime;
    }
  }
  else {
    if ((0x400 < uVar11) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("DetailLevel.InsertionState.CurrentDepth <= SettingsType::MaxDepth",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                            ,0x4e1,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((param_1->InsertionState).CurrentDepth == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("DetailLevel.InsertionState.CurrentDepth > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                            ,0x4e2,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    puVar1 = &(param_1->InsertionState).CurrentDepth;
    *puVar1 = *puVar1 - 1;
    uVar11 = (param_1->InsertionState).CurrentDepth;
    dVar21 = (param_2 - (param_1->InsertionState).LastTime) +
             (param_1->InsertionState).EventStack[uVar11].ExclTime;
    (param_1->InsertionState).EventStack[uVar11].ExclTime = dVar21;
    uVar4 = (param_1->InsertionState).CurrentScopeEntryPageIndex;
    pFVar7 = (param_1->ScopeEntries).FirstPage;
    uVar3 = (param_1->InsertionState).CurrentDepth;
    if (uVar3 < pFVar7[uVar4].InitialStackCount) {
      pFVar14 = pFVar7[uVar4].InitialStack;
      if (((param_1->InsertionState).EventStack[uVar11].EnterScopeIndex ==
           pFVar14[uVar3].EnterScopeIndex) &&
         ((param_1->InsertionState).EventStack[uVar11].EventIndex == pFVar14[uVar3].EventIndex)) {
        pFVar14[uVar3].ExclTime = dVar21;
        pFVar14[uVar3].EndTime = param_2;
      }
    }
  }
  (param_1->InsertionState).LastTime = param_2;
  return;
}

// AddScopeEntry @ 14d43c370

void __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::AddScopeEntry(TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                *this,FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                      *param_1,double param_2,bool param_3)

{
  ushort *puVar1;
  longlong lVar2;
  ushort uVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  FEventScopeEntryPage *pFVar7;
  FEventScopeEntryPage *pFVar8;
  code *pcVar9;
  bool bVar10;
  ushort uVar11;
  FEventScopeEntry *pFVar12;
  ulong64 uVar13;
  FEventStackEntry *pFVar14;
  ulonglong uVar15;
  ulong64 *puVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  double dVar21;
  
  if ((param_2 < (param_1->InsertionState).LastTime) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Time >= DetailLevel.InsertionState.LastTime",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                          ,0x49b,L"Time=%.9f LastTime=%.9f"), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar4 = (param_1->Events).TotalItemCount;
  uVar5 = (param_1->ScopeEntries).TotalItemCount;
  pFVar12 = TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>::
            PushBack(&param_1->ScopeEntries);
  dVar21 = param_2;
  if (param_3) {
    dVar21 = (double)CONCAT44((uint)((ulonglong)param_2 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              SUB84(param_2,0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  pFVar12->Time = dVar21;
  uVar6 = (param_1->InsertionState).CurrentScopeEntryPageIndex;
  uVar13 = (longlong)(param_1->ScopeEntries).PagesArray.ArrayNum - 1;
  pFVar7 = (param_1->ScopeEntries).LastPage;
  if (uVar13 == uVar6) goto LAB_14d43c694;
  if (uVar6 != 0xffffffffffffffff) {
    pFVar8 = (param_1->ScopeEntries).FirstPage;
    uVar15 = (ulonglong)pFVar8[uVar6].InitialStackCount;
    if ((0x400 < (param_1->InsertionState).CurrentDepth) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("DetailLevel.InsertionState.CurrentDepth <= SettingsType::MaxDepth",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                            ,0x4ab,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar19 = (ulonglong)(param_1->InsertionState).CurrentDepth;
    lVar17 = 0;
    if (uVar15 < 4) {
      if (uVar15 != 0) {
        lVar18 = -0x10090 - (longlong)param_1;
        goto LAB_14d43c5cb;
      }
    }
    else {
      puVar16 = &(param_1->InsertionState).EventStack[0].EventIndex;
      lVar18 = -0x10090 - (longlong)param_1;
      lVar20 = 2;
      do {
        if ((longlong)uVar19 <= lVar17) goto LAB_14d43c62c;
        pFVar14 = pFVar8[uVar6].InitialStack;
        lVar2 = lVar18 + (longlong)puVar16;
        if (((((((FEventStackEntry *)(puVar16 + -1))->EnterScopeIndex !=
                *(ulong64 *)((longlong)pFVar14 + lVar2)) ||
              (*puVar16 != *(ulong64 *)((longlong)pFVar14 + lVar2 + 8))) ||
             (*(ulong64 *)((longlong)pFVar14 + lVar2 + 0x10) = puVar16[1],
             (longlong)uVar19 <= lVar20 + -1)) ||
            ((pFVar14 = pFVar8[uVar6].InitialStack,
             puVar16[3] != *(longlong *)(lVar2 + 0x20 + (longlong)pFVar14) ||
             (puVar16[4] != *(longlong *)(lVar2 + 0x28 + (longlong)pFVar14))))) ||
           (*(ulong64 *)(lVar2 + 0x30 + (longlong)pFVar14) = puVar16[5], (longlong)uVar19 <= lVar20)
           ) goto LAB_14d43c62c;
        pFVar14 = pFVar8[uVar6].InitialStack;
        lVar2 = (-0x10050 - (longlong)param_1) + (longlong)puVar16;
        if (((puVar16[7] != *(longlong *)(lVar2 + (longlong)pFVar14)) ||
            (puVar16[8] != *(longlong *)(lVar2 + 8 + (longlong)pFVar14))) ||
           (*(ulong64 *)(lVar2 + 0x10 + (longlong)pFVar14) = puVar16[9],
           (longlong)uVar19 <= lVar20 + 1)) goto LAB_14d43c62c;
        pFVar14 = pFVar8[uVar6].InitialStack;
        lVar2 = (-0x10030 - (longlong)param_1) + (longlong)puVar16;
        if ((puVar16[0xb] != *(longlong *)(lVar2 + (longlong)pFVar14)) ||
           (puVar16[0xc] != *(longlong *)(lVar2 + 8 + (longlong)pFVar14))) goto LAB_14d43c62c;
        lVar17 = lVar17 + 4;
        *(ulong64 *)(lVar2 + 0x10 + (longlong)pFVar14) = puVar16[0xd];
        lVar20 = lVar20 + 4;
        puVar16 = puVar16 + 0x10;
      } while (lVar17 < (longlong)(uVar15 - 3));
      if (lVar17 < (longlong)uVar15) {
LAB_14d43c5cb:
        puVar16 = &(param_1->InsertionState).EventStack[lVar17].EventIndex;
        while (lVar17 < (longlong)uVar19) {
          pFVar14 = pFVar8[uVar6].InitialStack;
          if ((((FEventStackEntry *)(puVar16 + -1))->EnterScopeIndex !=
               *(ulong64 *)((longlong)puVar16 + (longlong)&pFVar14->EnterScopeIndex + lVar18)) ||
             (*puVar16 != *(ulong64 *)((longlong)puVar16 + (longlong)&pFVar14->EventIndex + lVar18))
             ) break;
          lVar17 = lVar17 + 1;
          *(ulong64 *)((longlong)puVar16 + (longlong)&pFVar14->ExclTime + lVar18) = puVar16[1];
          puVar16 = puVar16 + 4;
          if ((longlong)uVar15 <= lVar17) break;
        }
      }
    }
  }
LAB_14d43c62c:
  (param_1->InsertionState).CurrentScopeEntryPageIndex = uVar13;
  pFVar7->BeginTime = param_2;
  uVar6 = (param_1->Events).TotalItemCount;
  pFVar7->BeginEventIndex = uVar6;
  pFVar7->EndEventIndex = uVar6;
  uVar11 = (param_1->InsertionState).CurrentDepth;
  pFVar7->InitialStackCount = uVar11;
  if (uVar11 != 0) {
    pFVar14 = (FEventStackEntry *)
              (**(code **)((longlong)*this->Allocator + 8))(this->Allocator,(ulonglong)uVar11 << 5);
    pFVar7->InitialStack = pFVar14;
    memcpy(pFVar14,(param_1->InsertionState).EventStack,(ulonglong)pFVar7->InitialStackCount << 5);
  }
LAB_14d43c694:
  pFVar7->EndTime = param_2;
  uVar11 = (param_1->InsertionState).CurrentDepth;
  if (param_3) {
    uVar11 = uVar11 + 1;
    (param_1->InsertionState).CurrentDepth = uVar11;
    if ((0x400 < uVar11) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("DetailLevel.InsertionState.CurrentDepth <= SettingsType::MaxDepth",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                            ,0x4d1,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar15 = (ulonglong)(param_1->InsertionState).CurrentDepth;
    (param_1->InsertionState).EventStack[uVar15 - 1].EventIndex = uVar4;
    (param_1->InsertionState).EventStack[uVar15 - 1].EnterScopeIndex = uVar5;
    (param_1->InsertionState).EventStack[uVar15 - 1].ExclTime = 0.0;
    (param_1->InsertionState).EventStack[uVar15 - 1].EndTime = -1.0;
    uVar11 = (param_1->InsertionState).CurrentDepth;
    if (1 < uVar11) {
      (param_1->InsertionState).EventStack[(ulonglong)uVar11 - 2].ExclTime =
           (param_2 - (param_1->InsertionState).LastTime) +
           (param_1->InsertionState).EventStack[(ulonglong)uVar11 - 2].ExclTime;
    }
  }
  else {
    if ((0x400 < uVar11) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("DetailLevel.InsertionState.CurrentDepth <= SettingsType::MaxDepth",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                            ,0x4e1,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((param_1->InsertionState).CurrentDepth == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("DetailLevel.InsertionState.CurrentDepth > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                            ,0x4e2,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    puVar1 = &(param_1->InsertionState).CurrentDepth;
    *puVar1 = *puVar1 - 1;
    uVar11 = (param_1->InsertionState).CurrentDepth;
    dVar21 = (param_2 - (param_1->InsertionState).LastTime) +
             (param_1->InsertionState).EventStack[uVar11].ExclTime;
    (param_1->InsertionState).EventStack[uVar11].ExclTime = dVar21;
    uVar4 = (param_1->InsertionState).CurrentScopeEntryPageIndex;
    pFVar7 = (param_1->ScopeEntries).FirstPage;
    uVar3 = (param_1->InsertionState).CurrentDepth;
    if (uVar3 < pFVar7[uVar4].InitialStackCount) {
      pFVar14 = pFVar7[uVar4].InitialStack;
      if (((param_1->InsertionState).EventStack[uVar11].EnterScopeIndex ==
           pFVar14[uVar3].EnterScopeIndex) &&
         ((param_1->InsertionState).EventStack[uVar11].EventIndex == pFVar14[uVar3].EventIndex)) {
        pFVar14[uVar3].ExclTime = dVar21;
        pFVar14[uVar3].EndTime = param_2;
      }
    }
  }
  (param_1->InsertionState).LastTime = param_2;
  return;
}

// AppendBeginEvent @ 14d43f090

void __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::AppendBeginEvent(TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                   *this,double param_1,FLoadTimeProfilerCpuEvent *param_2)

{
  int *piVar1;
  ulong64 *puVar2;
  ushort uVar3;
  ILinearAllocator *pIVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  FLoadTimeProfilerCpuEvent *pFVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  ILinearAllocator IVar13;
  FPackageInfo *pFVar14;
  FPackageExportInfo *pFVar15;
  ELoadTimeProfilerObjectEventType EVar16;
  undefined4 uVar17;
  bool bVar18;
  int iVar19;
  FLoadTimeProfilerCpuEvent *pFVar20;
  ulonglong uVar21;
  FDetailLevelDepthState<TraceServices::FLoadTimeProfilerCpuEvent> *pFVar22;
  TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent> *pTVar23;
  longlong lVar24;
  FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *pFVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  int local_res8;
  longlong local_80;
  
  if ((*(int *)&(this->DetailLevels).AllocatorInstance.Data < 1) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar18)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  uVar3 = *(ushort *)(this->Allocator + 0x10);
  uVar26 = (ulonglong)uVar3;
  if (uVar3 < 0x400) {
    if ((*(int *)&(this->DetailLevels).AllocatorInstance.Data < 1) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    AddScopeEntry((TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                   *)&this[-1].ModCount,
                  (FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                   *)this->Allocator,param_1,true);
    if ((*(int *)&(this->DetailLevels).AllocatorInstance.Data < 1) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    AddEvent((TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
              *)&this[-1].ModCount,
             (FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
              *)this->Allocator,param_2);
    if ((*(int *)&(this->DetailLevels).AllocatorInstance.Data < 1) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pIVar4 = this->Allocator;
    local_res8 = 1;
    local_80 = 0x1c090;
    pIVar4[uVar26 * 10 + 0x19] = (ILinearAllocator)param_1;
    IVar13 = (ILinearAllocator)param_2->Export;
    pIVar4[uVar26 * 10 + 0x13] = (ILinearAllocator)param_2->Package;
    (pIVar4 + uVar26 * 10 + 0x13)[1] = IVar13;
    pIVar4[uVar26 * 10 + 0x15] = *(ILinearAllocator *)&param_2->EventType;
    uVar27 = uVar26;
    do {
      if ((*(int *)&(this->DetailLevels).AllocatorInstance.Data <= local_res8) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar25 = (FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                 *)(&this->Allocator->field_0x0 + local_80);
      iVar19 = (int)uVar27;
      if (((pFVar25->InsertionState).DepthStates[uVar26].PendingScopeEnterIndex < 0) ||
         ((pFVar25->InsertionState).DepthStates[uVar26].EnterTime + pFVar25->Resolution <= param_1))
      {
        if (-1 < (pFVar25->InsertionState).DepthStates[uVar26].PendingEventIndex) {
          if ((0x3ff < (pFVar25->InsertionState).PendingDepth) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("DetailLevel.InsertionState.PendingDepth < SettingsType::MaxDepth"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                                  ,0x78,L""), bVar18)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          lVar24 = (longlong)(pFVar25->InsertionState).PendingDepth;
          if ((longlong)uVar26 <= lVar24) {
            pFVar22 = (pFVar25->InsertionState).DepthStates + lVar24;
            lVar24 = (lVar24 - uVar26) + 1;
            do {
              if ((pFVar22->PendingScopeEnterIndex < 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("DepthState.PendingScopeEnterIndex >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                                      ,0x7c,L""), bVar18)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              AddScopeEntry((TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                             *)&this[-1].ModCount,pFVar25,pFVar22->ExitTime,false);
              pFVar22->PendingScopeEnterIndex = -1;
              pFVar22->PendingEventIndex = -1;
              pFVar22 = pFVar22 + -1;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
          }
        }
        uVar5 = (pFVar25->Events).TotalItemCount;
        (pFVar25->InsertionState).PendingDepth = iVar19;
        uVar6 = (pFVar25->ScopeEntries).TotalItemCount;
        AddScopeEntry((TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                       *)&this[-1].ModCount,pFVar25,param_1,true);
        puVar2 = &(pFVar25->ScopeEntries).FirstPage
                  [(pFVar25->InsertionState).CurrentScopeEntryPageIndex].EndEventIndex;
        *puVar2 = *puVar2 + 1;
        pTVar23 = (pFVar25->Events).LastPage;
        EVar16 = param_2->EventType;
        uVar17 = *(undefined4 *)&param_2->field_0x14;
        pFVar14 = param_2->Package;
        pFVar15 = param_2->Export;
        if ((pTVar23 == (TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent> *)0x0) ||
           (pTVar23->Count == (pFVar25->Events).PageSize)) {
          iVar19 = (pFVar25->Events).PagesArray.ArrayNum;
          piVar1 = &(pFVar25->Events).PagesArray.ArrayMax;
          if (iVar19 == *piVar1) {
            iVar19 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&(pFVar25->Events).PagesArray.AllocatorInstance,piVar1);
            (pFVar25->Events).PagesArray.ArrayNum = iVar19;
          }
          pTVar23 = (TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent> *)
                    ((pFVar25->Events).PagesArray.AllocatorInstance.Data + (longlong)iVar19 * 0x10);
          (pFVar25->Events).PagesArray.ArrayNum = iVar19 + 1;
          DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>,int>
                    (pTVar23,1);
          pIVar4 = (pFVar25->Events).Allocator;
          (pFVar25->Events).FirstPage =
               (TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent> *)
               (pFVar25->Events).PagesArray.AllocatorInstance.Data;
          (pFVar25->Events).LastPage = pTVar23;
          pFVar20 = (FLoadTimeProfilerCpuEvent *)
                    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,(pFVar25->Events).PageSize * 0x18);
          ((pFVar25->Events).LastPage)->Items = pFVar20;
        }
        puVar2 = &(pFVar25->Events).TotalItemCount;
        *puVar2 = *puVar2 + 1;
        pTVar23 = (pFVar25->Events).LastPage;
        uVar7 = pTVar23->Count;
        pFVar20 = pTVar23->Items;
        *(undefined8 *)&pFVar20[uVar7].EventType = 3;
        pFVar20[uVar7].Package = (FPackageInfo *)0x0;
        pFVar20[uVar7].Export = (FPackageExportInfo *)0x0;
        puVar2 = &((pFVar25->Events).LastPage)->Count;
        *puVar2 = *puVar2 + 1;
        pFVar20[uVar7].Package = pFVar14;
        pFVar20[uVar7].Export = pFVar15;
        pFVar20[uVar7].EventType = EVar16;
        *(undefined4 *)&pFVar20[uVar7].field_0x14 = uVar17;
        (pFVar25->InsertionState).DepthStates[uVar26].PendingScopeEnterIndex = uVar6;
        uVar27 = (ulonglong)(uint)uVar3;
        (pFVar25->InsertionState).DepthStates[uVar26].PendingEventIndex = uVar5;
        (pFVar25->InsertionState).DepthStates[uVar26].EnterTime = param_1;
        pFVar22 = (pFVar25->InsertionState).DepthStates + uVar26;
        auVar12._8_4_ = SUB84(param_1,0);
        auVar12._0_8_ = param_1;
        auVar12._12_4_ = (int)((ulonglong)param_1 >> 0x20);
        pFVar22->DominatingEventStartTime = param_1;
        pFVar22->DominatingEventEndTime = (double)auVar12._8_8_;
        (pFVar25->InsertionState).DepthStates[uVar26].DominatingEventDuration = 0.0;
        pFVar15 = param_2->Export;
        pFVar20 = &(pFVar25->InsertionState).DepthStates[uVar26].DominatingEvent;
        pFVar20->Package = param_2->Package;
        pFVar20->Export = pFVar15;
        uVar17 = *(undefined4 *)&param_2->field_0x14;
        pFVar22 = (pFVar25->InsertionState).DepthStates + uVar26;
        (pFVar22->DominatingEvent).EventType = param_2->EventType;
        *(undefined4 *)&(pFVar22->DominatingEvent).field_0x14 = uVar17;
      }
      else if ((pFVar25->InsertionState).PendingDepth < iVar19) {
        (pFVar25->InsertionState).PendingDepth = iVar19;
      }
      uVar8 = (pFVar25->InsertionState).DepthStates[uVar26].PendingEventIndex;
      uVar9 = (pFVar25->Events).PageSize;
      uVar21 = uVar8 % uVar9;
      pFVar15 = param_2->Export;
      EVar16 = param_2->EventType;
      uVar17 = *(undefined4 *)&param_2->field_0x14;
      local_80 = local_80 + 0x1c090;
      pFVar10 = (pFVar25->Events).FirstPage[uVar8 / uVar9].Items;
      local_res8 = local_res8 + 1;
      pFVar20 = pFVar10 + uVar21;
      pFVar20->Package = param_2->Package;
      pFVar20->Export = pFVar15;
      pFVar10 = pFVar10 + uVar21;
      pFVar10->EventType = EVar16;
      *(undefined4 *)&pFVar10->field_0x14 = uVar17;
    } while (local_res8 < 6);
    *(longlong *)&this->ExtraDepthEvents = *(longlong *)&this->ExtraDepthEvents + 1;
  }
  else {
    piVar1 = &(this->DetailLevels).ArrayNum;
    *piVar1 = *piVar1 + 1;
  }
  return;
}

// AppendBeginEvent @ 14d43f5a0

void __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::AppendBeginEvent(TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                   *this,double param_1,FTimingProfilerEvent *param_2)

{
  int *piVar1;
  ulong64 *puVar2;
  ushort uVar3;
  uint uVar4;
  ILinearAllocator *pIVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  TPagedArrayPage<TraceServices::FTimingProfilerEvent> *pTVar8;
  ulong64 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  bool bVar14;
  int iVar15;
  FTimingProfilerEvent *pFVar16;
  FDetailLevelDepthState<TraceServices::FTimingProfilerEvent> *pFVar17;
  FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *pFVar18;
  longlong lVar19;
  TPagedArrayPage<TraceServices::FTimingProfilerEvent> *pTVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int local_res8;
  longlong local_60;
  
  if ((*(int *)&(this->DetailLevels).AllocatorInstance.Data < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uVar3 = *(ushort *)(this->Allocator + 0x10);
  uVar21 = (ulonglong)uVar3;
  if (0x3ff < uVar3) {
    (this->DetailLevels).ArrayNum = (this->DetailLevels).ArrayNum + 1;
    return;
  }
  if ((*(int *)&(this->DetailLevels).AllocatorInstance.Data < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  AddScopeEntry((TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                 *)&this[-1].ModCount,
                (FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                 *)this->Allocator,param_1,true);
  if ((*(int *)&(this->DetailLevels).AllocatorInstance.Data < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  AddEvent((TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
            *)&this[-1].ModCount,
           (FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
            *)this->Allocator,param_2);
  if ((*(int *)&(this->DetailLevels).AllocatorInstance.Data < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pIVar5 = this->Allocator;
  local_60 = 0x18090;
  pIVar5[uVar21 * 8 + 0x17] = (ILinearAllocator)param_1;
  *(uint *)(pIVar5 + uVar21 * 8 + 0x13) = param_2->TimerIndex;
  local_res8 = 1;
  uVar22 = uVar21;
  do {
    if ((*(int *)&(this->DetailLevels).AllocatorInstance.Data <= local_res8) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pFVar18 = (FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
               *)(&this->Allocator->field_0x0 + local_60);
    iVar15 = (int)uVar22;
    if (((pFVar18->InsertionState).DepthStates[uVar21].PendingScopeEnterIndex < 0) ||
       ((pFVar18->InsertionState).DepthStates[uVar21].EnterTime + pFVar18->Resolution <= param_1)) {
      if (-1 < (pFVar18->InsertionState).DepthStates[uVar21].PendingEventIndex) {
        if ((0x3ff < (pFVar18->InsertionState).PendingDepth) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("DetailLevel.InsertionState.PendingDepth < SettingsType::MaxDepth",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                                ,0x78,L""), bVar14)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        lVar19 = (longlong)(pFVar18->InsertionState).PendingDepth;
        if ((longlong)uVar21 <= lVar19) {
          pFVar17 = (pFVar18->InsertionState).DepthStates + lVar19;
          lVar19 = (lVar19 - uVar21) + 1;
          do {
            if ((pFVar17->PendingScopeEnterIndex < 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("DepthState.PendingScopeEnterIndex >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                                    ,0x7c,L""), bVar14)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            AddScopeEntry((TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                           *)&this[-1].ModCount,pFVar18,pFVar17->ExitTime,false);
            pFVar17->PendingScopeEnterIndex = -1;
            pFVar17->PendingEventIndex = -1;
            pFVar17 = pFVar17 + -1;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
        }
      }
      uVar6 = (pFVar18->Events).TotalItemCount;
      (pFVar18->InsertionState).PendingDepth = iVar15;
      uVar7 = (pFVar18->ScopeEntries).TotalItemCount;
      AddScopeEntry((TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                     *)&this[-1].ModCount,pFVar18,param_1,true);
      puVar2 = &(pFVar18->ScopeEntries).FirstPage
                [(pFVar18->InsertionState).CurrentScopeEntryPageIndex].EndEventIndex;
      *puVar2 = *puVar2 + 1;
      pTVar8 = (pFVar18->Events).LastPage;
      uVar4 = param_2->TimerIndex;
      if ((pTVar8 == (TPagedArrayPage<TraceServices::FTimingProfilerEvent> *)0x0) ||
         (pTVar8->Count == (pFVar18->Events).PageSize)) {
        iVar15 = (pFVar18->Events).PagesArray.ArrayNum;
        piVar1 = &(pFVar18->Events).PagesArray.ArrayMax;
        if (iVar15 == *piVar1) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&(pFVar18->Events).PagesArray.AllocatorInstance,piVar1);
          (pFVar18->Events).PagesArray.ArrayNum = iVar15;
        }
        pTVar20 = (TPagedArrayPage<TraceServices::FTimingProfilerEvent> *)
                  ((pFVar18->Events).PagesArray.AllocatorInstance.Data + (longlong)iVar15 * 0x10);
        (pFVar18->Events).PagesArray.ArrayNum = iVar15 + 1;
        DefaultConstructItems<TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>,int>
                  (pTVar20,1);
        pTVar8 = (TPagedArrayPage<TraceServices::FTimingProfilerEvent> *)
                 (pFVar18->Events).PagesArray.AllocatorInstance.Data;
        pIVar5 = (pFVar18->Events).Allocator;
        (pFVar18->Events).LastPage = pTVar20;
        (pFVar18->Events).FirstPage = pTVar8;
        pFVar16 = (FTimingProfilerEvent *)
                  (**(code **)((longlong)*pIVar5 + 8))(pIVar5,(pFVar18->Events).PageSize << 2);
        ((pFVar18->Events).LastPage)->Items = pFVar16;
      }
      pTVar8 = (pFVar18->Events).LastPage;
      puVar2 = &(pFVar18->Events).TotalItemCount;
      *puVar2 = *puVar2 + 1;
      uVar9 = pTVar8->Count;
      pFVar16 = pTVar8->Items;
      pFVar16[uVar9].TimerIndex = 0xffffffff;
      puVar2 = &((pFVar18->Events).LastPage)->Count;
      *puVar2 = *puVar2 + 1;
      pFVar16[uVar9].TimerIndex = uVar4;
      (pFVar18->InsertionState).DepthStates[uVar21].PendingScopeEnterIndex = uVar7;
      uVar22 = (ulonglong)(uint)uVar3;
      (pFVar18->InsertionState).DepthStates[uVar21].PendingEventIndex = uVar6;
      (pFVar18->InsertionState).DepthStates[uVar21].EnterTime = param_1;
      pFVar17 = (pFVar18->InsertionState).DepthStates + uVar21;
      auVar13._8_4_ = SUB84(param_1,0);
      auVar13._0_8_ = param_1;
      auVar13._12_4_ = (int)((ulonglong)param_1 >> 0x20);
      pFVar17->DominatingEventStartTime = param_1;
      pFVar17->DominatingEventEndTime = (double)auVar13._8_8_;
      (pFVar18->InsertionState).DepthStates[uVar21].DominatingEventDuration = 0.0;
      (pFVar18->InsertionState).DepthStates[uVar21].DominatingEvent.TimerIndex = param_2->TimerIndex
      ;
    }
    else if ((pFVar18->InsertionState).PendingDepth < iVar15) {
      (pFVar18->InsertionState).PendingDepth = iVar15;
    }
    uVar10 = (pFVar18->InsertionState).DepthStates[uVar21].PendingEventIndex;
    uVar11 = (pFVar18->Events).PageSize;
    local_60 = local_60 + 0x18090;
    local_res8 = local_res8 + 1;
    (pFVar18->Events).FirstPage[uVar10 / uVar11].Items[uVar10 % uVar11].TimerIndex =
         param_2->TimerIndex;
    if (5 < local_res8) {
      *(longlong *)&this->ExtraDepthEvents = *(longlong *)&this->ExtraDepthEvents + 1;
      return;
    }
  } while( true );
}

// AppendEndEvent @ 14d43fea0

void __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::AppendEndEvent(TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                 *this,double param_1)

{
  FLoadTimeProfilerCpuEvent *pFVar1;
  double *pdVar2;
  ILinearAllocator *pIVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  FLoadTimeProfilerCpuEvent *pFVar6;
  code *pcVar7;
  double dVar8;
  ILinearAllocator IVar9;
  FPackageInfo *pFVar10;
  FPackageExportInfo *pFVar11;
  ELoadTimeProfilerObjectEventType EVar12;
  undefined4 uVar13;
  bool bVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  FDetailLevelDepthState<TraceServices::FLoadTimeProfilerCpuEvent> *pFVar18;
  FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *pFVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  
  iVar22 = (this->DetailLevels).ArrayNum;
  if (0 < iVar22) {
    (this->DetailLevels).ArrayNum = iVar22 + -1;
    return;
  }
  if ((*(int *)&(this->DetailLevels).AllocatorInstance.Data < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((0x400 < *(ushort *)(this->Allocator + 0x10)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("DetailLevels[0].InsertionState.CurrentDepth <= SettingsType::MaxDepth",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                          ,0xa6,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((*(int *)&(this->DetailLevels).AllocatorInstance.Data < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  AddScopeEntry((TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                 *)&this[-1].ModCount,
                (FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                 *)this->Allocator,param_1,false);
  if ((*(int *)&(this->DetailLevels).AllocatorInstance.Data < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar17 = (ulonglong)*(ushort *)(this->Allocator + 0x10);
  uVar16 = (uint)*(ushort *)(this->Allocator + 0x10);
  if ((0x3ff < uVar16) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentDepth < SettingsType::MaxDepth",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                          ,0xab,L""), bVar14)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar22 = 1;
  lVar21 = 0x1c090;
  do {
    if ((*(int *)&(this->DetailLevels).AllocatorInstance.Data <= iVar22) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar19 = (FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
               *)(&this->Allocator->field_0x0 + lVar21);
    (pFVar19->InsertionState).DepthStates[uVar17].ExitTime = param_1;
    if ((*(int *)&(this->DetailLevels).AllocatorInstance.Data < 1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pIVar3 = this->Allocator;
    dVar8 = param_1 - (double)pIVar3[uVar17 * 10 + 0x19];
    pdVar2 = &(pFVar19->InsertionState).DepthStates[uVar17].DominatingEventDuration;
    if (*pdVar2 <= dVar8 && dVar8 != *pdVar2) {
      if (((pFVar19->InsertionState).DepthStates[uVar17].PendingScopeEnterIndex < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentDepthState.PendingScopeEnterIndex >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                              ,0x48b,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (((pFVar19->InsertionState).DepthStates[uVar17].PendingEventIndex < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentDepthState.PendingEventIndex >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                              ,0x48c,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      IVar9 = (pIVar3 + uVar17 * 10 + 0x13)[1];
      pFVar1 = &(pFVar19->InsertionState).DepthStates[uVar17].DominatingEvent;
      pFVar1->Package = (FPackageInfo *)pIVar3[uVar17 * 10 + 0x13];
      pFVar1->Export = (FPackageExportInfo *)IVar9;
      *(ILinearAllocator *)&(pFVar19->InsertionState).DepthStates[uVar17].DominatingEvent.EventType
           = pIVar3[uVar17 * 10 + 0x15];
      pFVar1 = &(pFVar19->InsertionState).DepthStates[uVar17].DominatingEvent;
      pFVar10 = pFVar1->Package;
      pFVar11 = pFVar1->Export;
      (pFVar19->InsertionState).DepthStates[uVar17].DominatingEventStartTime =
           (double)pIVar3[uVar17 * 10 + 0x19];
      uVar4 = (pFVar19->InsertionState).DepthStates[uVar17].PendingEventIndex;
      pFVar18 = (pFVar19->InsertionState).DepthStates + uVar17;
      EVar12 = (pFVar18->DominatingEvent).EventType;
      uVar13 = *(undefined4 *)&(pFVar18->DominatingEvent).field_0x14;
      (pFVar19->InsertionState).DepthStates[uVar17].DominatingEventEndTime = param_1;
      (pFVar19->InsertionState).DepthStates[uVar17].DominatingEventDuration = dVar8;
      uVar5 = (pFVar19->Events).PageSize;
      uVar15 = uVar4 % uVar5;
      pFVar6 = (pFVar19->Events).FirstPage[uVar4 / uVar5].Items;
      pFVar1 = pFVar6 + uVar15;
      pFVar1->Package = pFVar10;
      pFVar1->Export = pFVar11;
      pFVar6 = pFVar6 + uVar15;
      pFVar6->EventType = EVar12;
      *(undefined4 *)&pFVar6->field_0x14 = uVar13;
    }
    if (((pFVar19->InsertionState).DepthStates[uVar17].PendingScopeEnterIndex < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("CurrentDepthState.PendingScopeEnterIndex >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                            ,0xb6,L""), bVar14)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((pFVar19->InsertionState).DepthStates[uVar17].EnterTime + pFVar19->Resolution <= param_1) {
      if ((0x3ff < (pFVar19->InsertionState).PendingDepth) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("DetailLevel.InsertionState.PendingDepth < SettingsType::MaxDepth",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                              ,0xb9,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar20 = (longlong)(pFVar19->InsertionState).PendingDepth;
      if ((int)uVar16 <= lVar20) {
        pFVar18 = (pFVar19->InsertionState).DepthStates + lVar20;
        lVar20 = (lVar20 - (int)uVar16) + 1;
        do {
          if ((pFVar18->PendingScopeEnterIndex < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("DepthState.PendingScopeEnterIndex >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                                  ,0xbd,L""), bVar14)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          AddScopeEntry((TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                         *)&this[-1].ModCount,pFVar19,pFVar18->ExitTime,false);
          pFVar18->PendingScopeEnterIndex = -1;
          pFVar18->PendingEventIndex = -1;
          pFVar18 = pFVar18 + -1;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
      (pFVar19->InsertionState).PendingDepth = uVar16 - 1;
    }
    iVar22 = iVar22 + 1;
    lVar21 = lVar21 + 0x1c090;
    if (5 < iVar22) {
      *(longlong *)&this->ExtraDepthEvents = *(longlong *)&this->ExtraDepthEvents + 1;
      return;
    }
  } while( true );
}

// AppendEndEvent @ 14d440340

void __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::AppendEndEvent(TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                 *this,double param_1)

{
  double *pdVar1;
  uint uVar2;
  ILinearAllocator *pIVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  ulonglong uVar10;
  FDetailLevelDepthState<TraceServices::FTimingProfilerEvent> *pFVar11;
  FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *pFVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  
  iVar15 = (this->DetailLevels).ArrayNum;
  if (0 < iVar15) {
    (this->DetailLevels).ArrayNum = iVar15 + -1;
    return;
  }
  if ((*(int *)&(this->DetailLevels).AllocatorInstance.Data < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((0x400 < *(ushort *)(this->Allocator + 0x10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("DetailLevels[0].InsertionState.CurrentDepth <= SettingsType::MaxDepth",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                         ,0xa6,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((*(int *)&(this->DetailLevels).AllocatorInstance.Data < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  AddScopeEntry((TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                 *)&this[-1].ModCount,
                (FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                 *)this->Allocator,param_1,false);
  if ((*(int *)&(this->DetailLevels).AllocatorInstance.Data < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar10 = (ulonglong)*(ushort *)(this->Allocator + 0x10);
  uVar9 = (uint)*(ushort *)(this->Allocator + 0x10);
  if ((0x3ff < uVar9) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentDepth < SettingsType::MaxDepth",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                         ,0xab,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar15 = 1;
  lVar14 = 0x18090;
  do {
    if ((*(int *)&(this->DetailLevels).AllocatorInstance.Data <= iVar15) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar12 = (FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
               *)(&this->Allocator->field_0x0 + lVar14);
    (pFVar12->InsertionState).DepthStates[uVar10].ExitTime = param_1;
    if ((*(int *)&(this->DetailLevels).AllocatorInstance.Data < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pIVar3 = this->Allocator;
    dVar7 = param_1 - (double)pIVar3[uVar10 * 8 + 0x17];
    pdVar1 = &(pFVar12->InsertionState).DepthStates[uVar10].DominatingEventDuration;
    if (*pdVar1 <= dVar7 && dVar7 != *pdVar1) {
      if (((pFVar12->InsertionState).DepthStates[uVar10].PendingScopeEnterIndex < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentDepthState.PendingScopeEnterIndex >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                             ,0x48b,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((pFVar12->InsertionState).DepthStates[uVar10].PendingEventIndex < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentDepthState.PendingEventIndex >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                             ,0x48c,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar2 = *(uint *)(pIVar3 + uVar10 * 8 + 0x13);
      (pFVar12->InsertionState).DepthStates[uVar10].DominatingEvent.TimerIndex = uVar2;
      (pFVar12->InsertionState).DepthStates[uVar10].DominatingEventStartTime =
           (double)pIVar3[uVar10 * 8 + 0x17];
      uVar4 = (pFVar12->InsertionState).DepthStates[uVar10].PendingEventIndex;
      (pFVar12->InsertionState).DepthStates[uVar10].DominatingEventEndTime = param_1;
      (pFVar12->InsertionState).DepthStates[uVar10].DominatingEventDuration = dVar7;
      uVar5 = (pFVar12->Events).PageSize;
      (pFVar12->Events).FirstPage[uVar4 / uVar5].Items[uVar4 % uVar5].TimerIndex = uVar2;
    }
    if (((pFVar12->InsertionState).DepthStates[uVar10].PendingScopeEnterIndex < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentDepthState.PendingScopeEnterIndex >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                           ,0xb6,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((pFVar12->InsertionState).DepthStates[uVar10].EnterTime + pFVar12->Resolution <= param_1) {
      if ((0x3ff < (pFVar12->InsertionState).PendingDepth) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("DetailLevel.InsertionState.PendingDepth < SettingsType::MaxDepth",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                             ,0xb9,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar13 = (longlong)(pFVar12->InsertionState).PendingDepth;
      if ((int)uVar9 <= lVar13) {
        pFVar11 = (pFVar12->InsertionState).DepthStates + lVar13;
        lVar13 = (lVar13 - (int)uVar9) + 1;
        do {
          if ((pFVar11->PendingScopeEnterIndex < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("DepthState.PendingScopeEnterIndex >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                                 ,0xbd,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          AddScopeEntry((TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                         *)&this[-1].ModCount,pFVar12,pFVar11->ExitTime,false);
          pFVar11->PendingScopeEnterIndex = -1;
          pFVar11->PendingEventIndex = -1;
          pFVar11 = pFVar11 + -1;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      (pFVar12->InsertionState).PendingDepth = uVar9 - 1;
    }
    iVar15 = iVar15 + 1;
    lVar14 = lVar14 + 0x18090;
    if (5 < iVar15) {
      *(longlong *)&this->ExtraDepthEvents = *(longlong *)&this->ExtraDepthEvents + 1;
      return;
    }
  } while( true );
}

// EnumerateEvents @ 14d452b30

void __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateEvents(TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                  *this,double param_1,double param_2,
                 TFunctionRef<TraceServices::EEventEnumerate___cdecl(double,double,unsigned_int,TraceServices::FLoadTimeProfilerCpuEvent_const_&)>
                 *param_3)

{
  (**(code **)(this->_padding_ + 0x30))();
  return;
}

// EnumerateEvents @ 14d452b70

void __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateEvents(TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                  *this,double param_1,double param_2,
                 TFunctionRef<TraceServices::EEventEnumerate___cdecl(bool,double,TraceServices::FLoadTimeProfilerCpuEvent_const_&)>
                 *param_3)

{
  (**(code **)(this->_padding_ + 0x38))();
  return;
}

// EnumerateEvents @ 14d452bb0

void __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateEvents(TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                  *this,double param_1,double param_2,
                 TFunctionRef<TraceServices::EEventEnumerate___cdecl(double,double,unsigned_int,TraceServices::FTimingProfilerEvent_const_&)>
                 *param_3)

{
  (**(code **)(this->_padding_ + 0x30))();
  return;
}

// EnumerateEvents @ 14d452bf0

void __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateEvents(TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                  *this,double param_1,double param_2,
                 TFunctionRef<TraceServices::EEventEnumerate___cdecl(bool,double,TraceServices::FTimingProfilerEvent_const_&)>
                 *param_3)

{
  (**(code **)(this->_padding_ + 0x38))();
  return;
}

// EnumerateEventsBackwards @ 14d452c90

void __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateEventsBackwards
          (TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this,double param_1,double param_2,
          TFunctionRef<TraceServices::EEventEnumerate___cdecl(double,double,unsigned_int,TraceServices::FLoadTimeProfilerCpuEvent_const_&)>
          *param_3)

{
  (**(code **)(this->_padding_ + 0x40))();
  return;
}

// EnumerateEventsBackwards @ 14d452cd0

void __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateEventsBackwards
          (TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this,double param_1,double param_2,
          TFunctionRef<TraceServices::EEventEnumerate___cdecl(bool,double,TraceServices::FLoadTimeProfilerCpuEvent_const_&)>
          *param_3)

{
  (**(code **)(this->_padding_ + 0x48))();
  return;
}

// EnumerateEventsBackwards @ 14d452d10

void __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateEventsBackwards
          (TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this,double param_1,double param_2,
          TFunctionRef<TraceServices::EEventEnumerate___cdecl(double,double,unsigned_int,TraceServices::FTimingProfilerEvent_const_&)>
          *param_3)

{
  (**(code **)(this->_padding_ + 0x40))();
  return;
}

// EnumerateEventsBackwards @ 14d452d50

void __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateEventsBackwards
          (TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this,double param_1,double param_2,
          TFunctionRef<TraceServices::EEventEnumerate___cdecl(bool,double,TraceServices::FTimingProfilerEvent_const_&)>
          *param_3)

{
  (**(code **)(this->_padding_ + 0x48))();
  return;
}

// EnumerateEventsBackwardsDownSampled @ 14d452df0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateEventsBackwardsDownSampled
          (TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this,double param_1,double param_2,double param_3,
          TFunctionRef<TraceServices::EEventEnumerate___cdecl(double,double,unsigned_int,TraceServices::FLoadTimeProfilerCpuEvent_const_&)>
          *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_8088 [32];
  code **local_8068;
  undefined4 local_8058 [2];
  code *local_8050;
  undefined1 **local_8048;
  undefined1 *local_8040;
  undefined4 *local_8038;
  undefined8 local_8030;
  undefined8 local_8028;
  undefined1 local_8018 [8];
  undefined8 local_8010 [2];
  undefined4 local_8000 [8186];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x14d452dfa;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_8088;
  puVar1 = local_8010 + 1;
  lVar2 = 0x400;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    puVar1 = puVar1 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  local_8058[0] = 0;
  local_8040 = local_8018;
  local_8068 = &local_8050;
  local_8038 = local_8058;
  local_8030 = *(undefined8 *)param_4;
  local_8028 = *(undefined8 *)&param_4->field_0x8;
  local_8048 = &local_8040;
  local_8050 = UE::Core::Private::Function::
               TFunctionRefCaller<`TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateEventsBackwardsDownSampled'::__l2::<lambda_1>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FLoadTimeProfilerCpuEvent_const_&>
               ::Call;
  (**(code **)(this->_padding_ + 0x48))(this);
  return;
}

// EnumerateEventsBackwardsDownSampled @ 14d452ec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateEventsBackwardsDownSampled
          (TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this,double param_1,double param_2,double param_3,
          TFunctionRef<TraceServices::EEventEnumerate___cdecl(bool,double,TraceServices::FLoadTimeProfilerCpuEvent_const_&)>
          *param_4)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  double dVar3;
  ushort uVar4;
  longlong lVar5;
  FEventStackEntry *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  FPackageExportInfo *pFVar9;
  ulonglong uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  double *pdVar14;
  TPagedArrayIterator<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
  *pTVar15;
  longlong lVar16;
  FEventScopeEntry *pFVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  FLoadTimeProfilerCpuEvent *pFVar23;
  ulong64 uVar24;
  longlong lVar25;
  longlong lVar26;
  FScriptContainerElement *pFVar27;
  FEventScopeEntry *pFVar28;
  ulonglong uVar29;
  ulong64 uVar30;
  FEventScopeEntryPage *pFVar31;
  longlong lVar32;
  double *pdVar33;
  TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent> *pTVar34;
  uint uVar35;
  double *pdVar36;
  FEventScopeEntry *pFVar37;
  ulong64 uVar38;
  FLoadTimeProfilerCpuEvent *pFVar39;
  ulonglong uVar40;
  ulong64 uVar41;
  uint uVar42;
  uint uVar43;
  FScriptContainerElement aFStack_1c158 [8];
  undefined8 auStack_1c150 [3];
  FScriptContainerElement aFStack_1c138 [8];
  undefined8 auStack_1c130 [3];
  FScriptContainerElement aFStack_1c118 [8];
  undefined8 auStack_1c110 [3];
  FScriptContainerElement aFStack_1c0f8 [8];
  FScriptContainerElement aFStack_1c0f0 [8];
  FScriptContainerElement aFStack_1c0e8 [8];
  FScriptContainerElement aFStack_1c0e0 [81496];
  undefined1 auStack_8288 [32];
  ulonglong local_8268;
  longlong local_8260;
  uint local_8258;
  double *local_8250;
  double *local_8248;
  undefined1 local_8240 [8];
  undefined1 local_8238 [8];
  undefined1 local_8230 [8];
  undefined1 local_8228 [8];
  undefined1 local_8220 [8];
  FEventScopeEntry *local_8218;
  TPagedArray<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
  *local_8210;
  TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
  local_8208;
  TPagedArrayIterator<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
  local_81d8;
  FLoadTimeProfilerCpuEvent *local_81a8;
  TFunctionRef<TraceServices::EEventEnumerate___cdecl(bool,double,TraceServices::FLoadTimeProfilerCpuEvent_const_&)>
  *local_81a0;
  double *local_8198;
  undefined1 *local_8190;
  double local_8188;
  undefined8 local_8180;
  double local_8178;
  undefined8 local_8170;
  FScriptContainerElement *local_8168;
  undefined8 local_8160;
  undefined8 local_8158;
  undefined8 uStack_8150;
  undefined8 local_8148;
  TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
  local_8140;
  TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage> *local_8110;
  ulong64 uStack_8108;
  FEventScopeEntry *local_8100;
  FEventScopeEntry *pFStack_80f8;
  ulong64 local_80f0;
  FEventScopeEntry *pFStack_80e8;
  TPagedArrayIterator<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
  local_80e0;
  double local_80a8;
  double local_80a0 [2];
  undefined8 local_8090;
  undefined1 local_8088 [32];
  double local_8068 [4];
  double local_8048 [4084];
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_8288;
  local_81a0 = param_4;
  uVar21 = 5;
  lVar25 = 0x8c2d0;
  do {
    iVar13 = (this->DetailLevels).ArrayNum;
    if (iVar13 <= (int)uVar21) {
      local_8268 = (ulonglong)uVar21;
      local_8260 = (longlong)iVar13;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (*(double *)((this->DetailLevels).AllocatorInstance.Data + lVar25) <= param_3) break;
    uVar21 = uVar21 - 1;
    lVar25 = lVar25 + -0x1c090;
  } while (0 < (int)uVar21);
  iVar13 = (this->DetailLevels).ArrayNum;
  uVar40 = 0;
  uVar12 = 0;
  if ((int)uVar21 < iVar13) {
    uVar12 = ~uVar21 >> 0x1f;
  }
  if (uVar12 == 0) {
    local_8268 = (ulonglong)(int)uVar21;
    local_8260 = (longlong)iVar13;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar22 = (this->DetailLevels).AllocatorInstance.Data + (longlong)(int)uVar21 * 0x1c090;
  if (*(longlong *)(pFVar22 + 0x38) == 0) {
    return;
  }
  uVar20 = (longlong)*(int *)(pFVar22 + 0x18);
  uVar19 = uVar40;
  while (uVar10 = uVar19, uVar20 != 0) {
    uVar29 = uVar20 >> 1;
    uVar21 = (uint)uVar20;
    uVar20 = uVar29;
    uVar19 = uVar29 + uVar10 + (ulonglong)(uVar21 & 1);
    if (param_1 < *(double *)((uVar29 + uVar10) * 0x40 + 0x10 + *(longlong *)(pFVar22 + 0x20))) {
      uVar19 = uVar10;
    }
  }
  lVar25 = 0x400;
  pdVar14 = local_80a0 + 1;
  do {
    pdVar14[-1] = 0.0;
    *pdVar14 = 0.0;
    *(undefined4 *)(pdVar14 + 1) = 3;
    pdVar14 = pdVar14 + 4;
    lVar25 = lVar25 + -1;
  } while (lVar25 != 0);
  local_8168 = pFVar22;
  TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>::
  TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
            (&local_8208,
             (TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage> *)
             (pFVar22 + 8),*(longlong *)(pFVar22 + 0x38) - 1);
  TPagedArray<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
  ::GetIteratorFromItem
            ((TPagedArray<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
              *)(pFVar22 + 0x40),&local_81d8,*(longlong *)(pFVar22 + 0x70) - 1);
  if ((uVar10 == 0) || ((ulonglong)(longlong)*(int *)(pFVar22 + 0x18) <= uVar10)) {
    pdVar36 = (double *)(ulonglong)*(ushort *)(pFVar22 + 0x80);
    local_8258 = (uint)*(ushort *)(pFVar22 + 0x80);
    pdVar14 = pdVar36;
    pdVar33 = (double *)(ulonglong)local_8258;
    if (&DAT_00000003 < pdVar36) {
      local_8190 = local_8088 + -(longlong)pFVar22;
      local_8198 = (double *)((longlong)local_8068 - (longlong)pFVar22);
      local_8248 = (double *)((longlong)local_8048 - (longlong)pFVar22);
      lVar25 = ((ulonglong)((longlong)(ulonglong)local_8258 + -4) >> 2) + 1;
      uVar40 = lVar25 * 4;
      pFVar27 = pFVar22 + 0x140b0;
      do {
        *(undefined8 *)(pFVar27 + ((longlong)aFStack_1c158 - (longlong)pFVar22)) =
             *(undefined8 *)(pFVar22 + 0x78);
        pFVar1 = pFVar27 + 0x80;
        uVar20 = *(ulonglong *)(pFVar27 + -0x20) % *(ulonglong *)(pFVar22 + 0x68);
        lVar26 = *(longlong *)
                  (*(longlong *)(pFVar22 + 0x58) +
                  (*(ulonglong *)(pFVar27 + -0x20) / *(ulonglong *)(pFVar22 + 0x68)) * 0x10);
        puVar2 = (undefined8 *)(lVar26 + uVar20 * 0x18);
        uVar8 = puVar2[1];
        *(undefined8 *)(&stack0xfffffffffffe3e30 + -(longlong)pFVar22 + (longlong)pFVar1) = *puVar2;
        *(undefined8 *)
         ((longlong)(&stack0xfffffffffffe3e30 + -(longlong)pFVar22 + (longlong)pFVar1) + 8) = uVar8;
        *(undefined8 *)(&stack0xfffffffffffe3e40 + -(longlong)pFVar22 + (longlong)pFVar1) =
             *(undefined8 *)(lVar26 + 0x10 + uVar20 * 0x18);
        *(undefined8 *)(pFVar27 + (longlong)(local_8190 + -0x140b0)) =
             *(undefined8 *)(pFVar22 + 0x78);
        uVar20 = *(ulonglong *)pFVar27 % *(ulonglong *)(pFVar22 + 0x68);
        lVar26 = *(longlong *)
                  (*(longlong *)(pFVar22 + 0x58) +
                  (*(ulonglong *)pFVar27 / *(ulonglong *)(pFVar22 + 0x68)) * 0x10);
        puVar2 = (undefined8 *)(lVar26 + uVar20 * 0x18);
        uVar8 = puVar2[1];
        *(undefined8 *)(&stack0xfffffffffffe3e50 + -(longlong)pFVar22 + (longlong)pFVar1) = *puVar2;
        *(undefined8 *)
         ((longlong)(&stack0xfffffffffffe3e50 + -(longlong)pFVar22 + (longlong)pFVar1) + 8) = uVar8;
        *(undefined8 *)(&stack0xfffffffffffe3e60 + -(longlong)pFVar22 + (longlong)pFVar1) =
             *(undefined8 *)(lVar26 + 0x10 + uVar20 * 0x18);
        *(undefined8 *)(pFVar27 + -0x140b0 + (longlong)local_8198) = *(undefined8 *)(pFVar22 + 0x78)
        ;
        uVar20 = *(ulonglong *)(pFVar27 + 0x20) % *(ulonglong *)(pFVar22 + 0x68);
        lVar26 = *(longlong *)
                  (*(longlong *)(pFVar22 + 0x58) +
                  (*(ulonglong *)(pFVar27 + 0x20) / *(ulonglong *)(pFVar22 + 0x68)) * 0x10);
        puVar2 = (undefined8 *)(lVar26 + uVar20 * 0x18);
        uVar8 = puVar2[1];
        *(undefined8 *)(&stack0xfffffffffffe3e70 + -(longlong)pFVar22 + (longlong)pFVar1) = *puVar2;
        *(undefined8 *)
         ((longlong)(&stack0xfffffffffffe3e70 + -(longlong)pFVar22 + (longlong)pFVar1) + 8) = uVar8;
        *(undefined8 *)(&stack0xfffffffffffe3e80 + -(longlong)pFVar22 + (longlong)pFVar1) =
             *(undefined8 *)(lVar26 + 0x10 + uVar20 * 0x18);
        *(undefined8 *)(pFVar27 + -0x140b0 + (longlong)local_8248) = *(undefined8 *)(pFVar22 + 0x78)
        ;
        uVar20 = *(ulonglong *)(pFVar27 + 0x40) % *(ulonglong *)(pFVar22 + 0x68);
        lVar26 = *(longlong *)
                  (*(longlong *)(pFVar22 + 0x58) +
                  (*(ulonglong *)(pFVar27 + 0x40) / *(ulonglong *)(pFVar22 + 0x68)) * 0x10);
        puVar2 = (undefined8 *)(lVar26 + uVar20 * 0x18);
        uVar8 = puVar2[1];
        *(undefined8 *)(pFVar27 + (longlong)local_8048 + -(longlong)pFVar22 + -0x140a8) = *puVar2;
        *(undefined8 *)(pFVar27 + (longlong)local_8048 + -(longlong)pFVar22 + -0x140a8 + 8) = uVar8;
        *(undefined8 *)(pFVar27 + (longlong)local_8048 + -(longlong)pFVar22 + -0x14098) =
             *(undefined8 *)(lVar26 + 0x10 + uVar20 * 0x18);
        lVar25 = lVar25 + -1;
        pFVar27 = pFVar1;
      } while (lVar25 != 0);
      pdVar14 = (double *)(ulonglong)local_8258;
      pdVar33 = pdVar36;
    }
    if ((longlong)uVar40 < (longlong)pdVar33) {
      lVar25 = (longlong)pdVar33 - uVar40;
      pdVar33 = &local_80a8 + uVar40 * 4;
      do {
        *pdVar33 = *(double *)(pFVar22 + 0x78);
        uVar40 = *(ulonglong *)
                  ((longlong)pdVar33 + (longlong)(pFVar22 + (0x14090 - (longlong)&local_80a8))) %
                 *(ulonglong *)(pFVar22 + 0x68);
        lVar26 = *(longlong *)
                  (*(longlong *)(pFVar22 + 0x58) +
                  (*(ulonglong *)
                    ((longlong)pdVar33 + (longlong)(pFVar22 + (0x14090 - (longlong)&local_80a8))) /
                  *(ulonglong *)(pFVar22 + 0x68)) * 0x10);
        pdVar36 = (double *)(lVar26 + uVar40 * 0x18);
        dVar3 = pdVar36[1];
        pdVar33[1] = *pdVar36;
        pdVar33[2] = dVar3;
        pdVar33[3] = *(double *)(lVar26 + 0x10 + uVar40 * 0x18);
        lVar25 = lVar25 + -1;
        pdVar33 = pdVar33 + 4;
      } while (lVar25 != 0);
    }
    local_8218 = local_8208.CurrentItem;
  }
  else {
    TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>::
    TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
              (&local_8140,
               (TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage> *)
               (pFVar22 + 8),uVar10 * *(longlong *)(pFVar22 + 0x30));
    lVar25 = *(longlong *)(pFVar22 + 0x20);
    lVar26 = uVar10 * 0x40;
    local_8208.Outer = local_8140.Outer;
    local_8208.CurrentPageIndex = local_8140.CurrentPageIndex;
    local_8208.CurrentPageFirstItem = local_8140.CurrentPageFirstItem;
    local_8208.CurrentPageLastItem = local_8140.CurrentPageLastItem;
    local_8208.CurrentItemIndex = local_8140.CurrentItemIndex;
    local_8208.CurrentItem = local_8140.CurrentItem;
    pTVar15 = TPagedArray<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
              ::GetIteratorFromItem
                        ((TPagedArray<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
                          *)(pFVar22 + 0x40),&local_80e0,*(ulong64 *)(lVar26 + 0x20 + lVar25));
    uVar4 = *(ushort *)(lVar26 + 0x38 + lVar25);
    pdVar14 = (double *)(ulonglong)uVar4;
    local_8258 = (uint)uVar4;
    uVar40 = (ulonglong)local_8258;
    local_81d8.Outer = pTVar15->Outer;
    local_81d8.CurrentPageIndex = pTVar15->CurrentPageIndex;
    local_81d8.CurrentPageFirstItem = pTVar15->CurrentPageFirstItem;
    local_81d8.CurrentPageLastItem = pTVar15->CurrentPageLastItem;
    local_81d8.CurrentItemIndex = pTVar15->CurrentItemIndex;
    local_81d8.CurrentItem = pTVar15->CurrentItem;
    if (uVar4 != 0) {
      lVar32 = 0;
      do {
        lVar5 = *(longlong *)(lVar26 + 0x30 + lVar25);
        dVar3 = *(double *)(lVar5 + 0x18 + lVar32);
        *(double *)((longlong)&local_80a8 + lVar32) = dVar3;
        if (dVar3 < 0.0) {
          local_8110 = local_8140.Outer;
          uStack_8108 = local_8140.CurrentPageIndex;
          local_8100 = local_8140.CurrentPageFirstItem;
          pFStack_80f8 = local_8140.CurrentPageLastItem;
          local_80f0 = local_8140.CurrentItemIndex;
          pFStack_80e8 = local_8140.CurrentItem;
          lVar18 = (local_8140.CurrentPageIndex + 1) * 0x40;
          uVar30 = local_8140.CurrentPageIndex;
          do {
            if (uVar30 == (longlong)(((local_8140.Outer)->PagesArray).ArrayNum + -1))
            goto LAB_14d4531ea;
            uVar30 = uVar30 + 1;
            lVar16 = (longlong)&(local_8140.Outer)->FirstPage->Items + lVar18;
            if (lVar16 == 0) goto LAB_14d4531ea;
            dVar3 = *(double *)(*(longlong *)(lVar16 + 0x30) + 0x18 + lVar32);
            lVar18 = lVar18 + 0x40;
          } while (dVar3 <= 0.0);
          *(double *)((longlong)&local_80a8 + lVar32) = dVar3;
LAB_14d4531ea:
          if (*(double *)((longlong)&local_80a8 + lVar32) <= 0.0 &&
              *(double *)((longlong)&local_80a8 + lVar32) != 0.0) {
            *(undefined8 *)((longlong)&local_80a8 + lVar32) = *(undefined8 *)(pFVar22 + 0x78);
          }
        }
        uVar20 = *(ulonglong *)(lVar5 + 8 + lVar32);
        uVar19 = uVar20 % *(ulonglong *)(pFVar22 + 0x68);
        lVar5 = *(longlong *)
                 (*(longlong *)(pFVar22 + 0x58) + (uVar20 / *(ulonglong *)(pFVar22 + 0x68)) * 0x10);
        puVar2 = (undefined8 *)(lVar5 + uVar19 * 0x18);
        uVar8 = puVar2[1];
        *(undefined8 *)((longlong)local_80a0 + lVar32) = *puVar2;
        *(undefined8 *)((longlong)local_80a0 + lVar32 + 8U) = uVar8;
        *(undefined8 *)(local_8088 + lVar32 + -8) = *(undefined8 *)(lVar5 + 0x10 + uVar19 * 0x18);
        lVar32 = lVar32 + 0x20;
        uVar40 = uVar40 - 1;
      } while (uVar40 != 0);
    }
    if (local_8140.CurrentItem == local_8140.CurrentPageFirstItem) {
      if (local_8140.CurrentPageIndex == 0) {
        local_8208.CurrentItemIndex = (local_8208.Outer)->TotalItemCount;
        local_8208.CurrentItem = (FEventScopeEntry *)0x0;
        local_8218 = (FEventScopeEntry *)0x0;
        local_8208.CurrentPageFirstItem = (FEventScopeEntry *)0x0;
        local_8208.CurrentPageLastItem = (FEventScopeEntry *)0x0;
      }
      else {
        local_8208.CurrentPageIndex = local_8140.CurrentPageIndex - 1;
        pFVar31 = (local_8208.Outer)->FirstPage + local_8208.CurrentPageIndex;
        local_8208.CurrentPageFirstItem = pFVar31->Items;
        if (local_8208.CurrentPageFirstItem == (FEventScopeEntry *)0x0) {
          local_8208.CurrentPageLastItem = (FEventScopeEntry *)0x0;
        }
        else {
          local_8208.CurrentPageLastItem = local_8208.CurrentPageFirstItem + (pFVar31->Count - 1);
        }
        local_8208.CurrentItemIndex =
             ((longlong)local_8208.CurrentPageLastItem - (longlong)local_8208.CurrentPageFirstItem
             >> 3) + local_8208.CurrentPageIndex * (local_8208.Outer)->PageSize;
        local_8218 = local_8208.CurrentPageLastItem;
        local_8208.CurrentItem = local_8208.CurrentPageLastItem;
        if (pFVar31 == (FEventScopeEntryPage *)0x0) {
          local_8218 = (FEventScopeEntry *)0x0;
        }
      }
    }
    else {
      local_8208.CurrentItemIndex = local_8140.CurrentItemIndex - 1;
      local_8218 = local_8208.CurrentItem + -1;
      local_8208.CurrentItem = local_8218;
    }
    if (local_81d8.CurrentItem == local_81d8.CurrentPageFirstItem) {
      if (local_81d8.CurrentPageIndex == 0) {
        local_81d8.CurrentItem = (FLoadTimeProfilerCpuEvent *)0x0;
        local_81d8.CurrentPageFirstItem = (FLoadTimeProfilerCpuEvent *)0x0;
        local_81d8.CurrentPageLastItem = (FLoadTimeProfilerCpuEvent *)0x0;
        local_81d8.CurrentItemIndex = (local_81d8.Outer)->TotalItemCount;
      }
      else {
        local_81d8.CurrentPageIndex = local_81d8.CurrentPageIndex - 1;
        local_81d8.CurrentPageFirstItem =
             (local_81d8.Outer)->FirstPage[local_81d8.CurrentPageIndex].Items;
        if (local_81d8.CurrentPageFirstItem == (FLoadTimeProfilerCpuEvent *)0x0) {
          local_81d8.CurrentPageLastItem = (FLoadTimeProfilerCpuEvent *)0x0;
        }
        else {
          local_81d8.CurrentPageLastItem =
               local_81d8.CurrentPageFirstItem +
               ((local_81d8.Outer)->FirstPage[local_81d8.CurrentPageIndex].Count - 1);
        }
        local_81d8.CurrentItemIndex =
             ((longlong)local_81d8.CurrentPageLastItem - (longlong)local_81d8.CurrentPageFirstItem)
             / 0x18 + local_81d8.CurrentPageIndex * (local_81d8.Outer)->PageSize;
        local_81d8.CurrentItem = local_81d8.CurrentPageLastItem;
      }
    }
    else {
      local_81d8.CurrentItemIndex = local_81d8.CurrentItemIndex - 1;
      local_81d8.CurrentItem = local_81d8.CurrentItem + -1;
    }
  }
  uVar12 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar21 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  pFVar23 = local_81d8.CurrentItem;
  pFVar37 = local_8208.CurrentPageFirstItem;
  uVar38 = local_81d8.CurrentPageIndex;
  pFVar39 = local_81d8.CurrentPageFirstItem;
  uVar30 = local_8208.CurrentPageIndex;
  local_8210 = local_81d8.Outer;
  local_81a8 = local_81d8.CurrentItem;
  if (local_8218 != (FEventScopeEntry *)0x0) {
    local_8250 = &local_80a8 + (longlong)pdVar14 * 4;
    local_8248 = pdVar14;
    do {
      pFVar28 = local_8208.CurrentItem;
      uVar24 = local_8208.CurrentItemIndex;
      dVar3 = local_8218->Time;
      if ((double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) & uVar12,SUB84(dVar3,0) & uVar21) <=
          param_1) break;
      if (0.0 <= dVar3) {
        uVar42 = (uint)pdVar14;
        if ((0x3ff < (longlong)local_8248) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentStackDepth < SettingsType::MaxDepth",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                                ,0x23d,L""), uVar42 = local_8258, bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_8248 = (double *)((longlong)local_8248 + 1);
        local_8258 = uVar42 + 1;
        pdVar14 = (double *)(ulonglong)local_8258;
        *local_8250 = local_8218->Time;
        local_8250 = local_8250 + 4;
      }
      else {
        uVar42 = (uint)pdVar14;
        if (((longlong)local_8248 < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentStackDepth > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                                ,0x237,L""), uVar42 = local_8258, bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_8258 = uVar42 - 1;
        pdVar14 = (double *)(ulonglong)local_8258;
        local_8248 = (double *)((longlong)local_8248 + -1);
        local_8250 = local_8250 + -4;
        if (pFVar23 == pFVar39) {
          if (uVar38 == 0) {
            local_81d8.CurrentItemIndex = local_8210->TotalItemCount;
            pFVar23 = (FLoadTimeProfilerCpuEvent *)0x0;
            pFVar39 = (FLoadTimeProfilerCpuEvent *)0x0;
            local_81d8.CurrentItem = (FLoadTimeProfilerCpuEvent *)0x0;
            local_81d8.CurrentPageFirstItem = (FLoadTimeProfilerCpuEvent *)0x0;
            local_81d8.CurrentPageLastItem = (FLoadTimeProfilerCpuEvent *)0x0;
            local_81a8 = (FLoadTimeProfilerCpuEvent *)0x0;
          }
          else {
            uVar38 = uVar38 - 1;
            pTVar34 = local_8210->FirstPage + uVar38;
            pFVar39 = pTVar34->Items;
            if (pFVar39 == (FLoadTimeProfilerCpuEvent *)0x0) {
              pFVar23 = (FLoadTimeProfilerCpuEvent *)0x0;
            }
            else {
              pFVar23 = pFVar39 + (pTVar34->Count - 1);
            }
            local_81d8.CurrentItemIndex =
                 ((longlong)pFVar23 - (longlong)pFVar39) / 0x18 + uVar38 * local_8210->PageSize;
            local_81d8.CurrentPageIndex = uVar38;
            local_81d8.CurrentPageFirstItem = pFVar39;
            local_81d8.CurrentPageLastItem = pFVar23;
            local_81d8.CurrentItem = pFVar23;
            local_81a8 = pFVar23;
            if (pTVar34 == (TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent> *)0x0) {
              local_81a8 = (FLoadTimeProfilerCpuEvent *)0x0;
            }
          }
        }
        else {
          local_81d8.CurrentItemIndex = local_81d8.CurrentItemIndex - 1;
          pFVar23 = pFVar23 + -1;
          local_81d8.CurrentItem = pFVar23;
          local_81a8 = pFVar23;
        }
      }
      if (pFVar28 == pFVar37) {
        if (uVar30 == 0) {
          local_8208.CurrentItemIndex = (local_8208.Outer)->TotalItemCount;
          local_8208.CurrentItem = (FEventScopeEntry *)0x0;
          local_8208.CurrentPageFirstItem = (FEventScopeEntry *)0x0;
        }
        else {
          uVar30 = uVar30 - 1;
          pFVar31 = (local_8208.Outer)->FirstPage + uVar30;
          pFVar37 = pFVar31->Items;
          if (pFVar37 == (FEventScopeEntry *)0x0) {
            local_8218 = (FEventScopeEntry *)0x0;
          }
          else {
            local_8218 = pFVar37 + (pFVar31->Count - 1);
          }
          local_8208.CurrentItemIndex =
               ((longlong)local_8218 - (longlong)pFVar37 >> 3) +
               uVar30 * (local_8208.Outer)->PageSize;
          local_8208.CurrentPageIndex = uVar30;
          local_8208.CurrentPageFirstItem = pFVar37;
          local_8208.CurrentPageLastItem = local_8218;
          local_8208.CurrentItem = local_8218;
          if (pFVar31 != (FEventScopeEntryPage *)0x0) goto LAB_14d453913;
        }
        local_8218 = (FEventScopeEntry *)0x0;
        pFVar37 = local_8208.CurrentPageFirstItem;
        local_8208.CurrentPageLastItem = local_8208.CurrentItem;
        break;
      }
      local_8208.CurrentItemIndex = uVar24 - 1;
      local_8218 = pFVar28 + -1;
LAB_14d453913:
      local_8208.CurrentItem = local_8218;
    } while (local_8218 != (FEventScopeEntry *)0x0);
  }
  pFVar28 = local_8208.CurrentItem;
  uVar24 = local_8208.CurrentItemIndex;
  iVar13 = 0;
  local_8190 = (undefined1 *)(longlong)(int)pdVar14;
  local_8250 = (double *)((ulonglong)local_8250 & 0xffffffff00000000);
  if (0 < (int)pdVar14) {
    local_8198 = &local_80a8;
    local_8248 = (double *)0x0;
    do {
      local_8188 = *local_8198;
      local_8240[0] = 1;
      iVar13 = (**(code **)local_81a0)
                         (*(undefined8 *)&local_81a0->field_0x8,local_8240,&local_8188,
                          (longlong)local_80a0 + (longlong)iVar13 * 0x20);
      if (iVar13 == 1) {
        return;
      }
      iVar13 = (int)local_8250 + 1;
      local_8248 = (double *)((longlong)local_8248 + 1);
      local_8198 = local_8198 + 4;
      local_8250 = (double *)CONCAT44(local_8250._4_4_,iVar13);
    } while ((longlong)local_8248 < (longlong)local_8190);
    pdVar14 = (double *)(ulonglong)local_8258;
  }
  uVar42 = (uint)__xmm_80000000000000008000000000000000;
  uVar43 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  pFVar17 = local_8218;
  if (local_8218 != (FEventScopeEntry *)0x0) {
    local_8248 = &local_80a8 + (longlong)local_8190 * 4;
    local_8250 = (double *)((longlong)local_80a0 + (longlong)local_8190 * 0x20);
    while( true ) {
      uVar35 = (uint)pdVar14;
      dVar3 = local_8218->Time;
      pFVar17 = local_8218;
      if ((double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) & uVar12,SUB84(dVar3,0) & uVar21) <
          param_2) break;
      if (0.0 <= dVar3) {
        if ((0x3ff < (int)uVar35) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentStackDepth < SettingsType::MaxDepth",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                                ,0x25e,L""), uVar35 = local_8258, bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_8230[0] = 1;
        local_8250 = local_8250 + 4;
        local_8258 = uVar35 + 1;
        *local_8248 = local_8218->Time;
        pdVar14 = local_8248 + 1;
        local_8178 = local_8218->Time;
        local_8248 = local_8248 + 4;
        iVar13 = (**(code **)local_81a0)
                           (*(undefined8 *)&local_81a0->field_0x8,local_8230,&local_8178,pdVar14);
        if (iVar13 == 1) {
          return;
        }
      }
      else {
        if (((int)uVar35 < 1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentStackDepth > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                                ,0x253,L""), uVar35 = local_8258, bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_8248 = local_8248 + -4;
        local_8238[0] = 0;
        local_8258 = uVar35 - 1;
        pFVar9 = local_81a8->Export;
        local_8250[-4] = (double)local_81a8->Package;
        local_8250[-3] = (double)pFVar9;
        local_8250[-2] = (double)*(undefined8 *)&local_81a8->EventType;
        local_8180 = CONCAT44((uint)((ulonglong)local_8218->Time >> 0x20) ^ uVar43,
                              SUB84(local_8218->Time,0) ^ uVar42);
        local_8250 = local_8250 + -4;
        iVar13 = (**(code **)local_81a0)
                           (*(undefined8 *)&local_81a0->field_0x8,local_8238,&local_8180,
                            (longlong)local_80a0 + (longlong)(int)local_8258 * 0x20);
        if (iVar13 == 1) {
          return;
        }
        if (pFVar23 == pFVar39) {
          if (uVar38 == 0) {
            local_81d8.CurrentItemIndex = local_8210->TotalItemCount;
            pFVar23 = (FLoadTimeProfilerCpuEvent *)0x0;
            pFVar39 = (FLoadTimeProfilerCpuEvent *)0x0;
            local_81d8.CurrentItem = (FLoadTimeProfilerCpuEvent *)0x0;
            local_81d8.CurrentPageFirstItem = (FLoadTimeProfilerCpuEvent *)0x0;
            local_81d8.CurrentPageLastItem = (FLoadTimeProfilerCpuEvent *)0x0;
            local_81a8 = (FLoadTimeProfilerCpuEvent *)0x0;
          }
          else {
            uVar38 = uVar38 - 1;
            pTVar34 = local_8210->FirstPage + uVar38;
            pFVar39 = pTVar34->Items;
            if (pFVar39 == (FLoadTimeProfilerCpuEvent *)0x0) {
              pFVar23 = (FLoadTimeProfilerCpuEvent *)0x0;
            }
            else {
              pFVar23 = pFVar39 + (pTVar34->Count - 1);
            }
            local_81d8.CurrentItemIndex =
                 ((longlong)pFVar23 - (longlong)pFVar39) / 0x18 + uVar38 * local_8210->PageSize;
            local_81d8.CurrentPageIndex = uVar38;
            local_81d8.CurrentPageFirstItem = pFVar39;
            local_81d8.CurrentPageLastItem = pFVar23;
            local_81d8.CurrentItem = pFVar23;
            local_81a8 = pFVar23;
            if (pTVar34 == (TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent> *)0x0) {
              local_81a8 = (FLoadTimeProfilerCpuEvent *)0x0;
            }
          }
        }
        else {
          local_81d8.CurrentItemIndex = local_81d8.CurrentItemIndex - 1;
          pFVar23 = pFVar23 + -1;
          local_81d8.CurrentItem = pFVar23;
          local_81a8 = pFVar23;
        }
      }
      if (pFVar28 == pFVar37) {
        if (uVar30 == 0) {
          local_8208.CurrentPageFirstItem = (FEventScopeEntry *)0x0;
          local_8208.CurrentPageLastItem = (FEventScopeEntry *)0x0;
        }
        else {
          uVar30 = uVar30 - 1;
          pFVar31 = (local_8208.Outer)->FirstPage + uVar30;
          pFVar37 = pFVar31->Items;
          if (pFVar37 == (FEventScopeEntry *)0x0) {
            pFVar17 = (FEventScopeEntry *)0x0;
          }
          else {
            pFVar17 = pFVar37 + (pFVar31->Count - 1);
          }
          uVar24 = ((longlong)pFVar17 - (longlong)pFVar37 >> 3) +
                   uVar30 * (local_8208.Outer)->PageSize;
          local_8208.CurrentPageIndex = uVar30;
          local_8208.CurrentPageFirstItem = pFVar37;
          local_8208.CurrentPageLastItem = pFVar17;
          local_8208.CurrentItemIndex = uVar24;
          local_8208.CurrentItem = pFVar17;
          if (pFVar31 != (FEventScopeEntryPage *)0x0) goto LAB_14d453d16;
        }
        pFVar17 = (FEventScopeEntry *)0x0;
        pFVar28 = local_8208.CurrentPageLastItem;
        pFVar37 = local_8208.CurrentPageFirstItem;
        break;
      }
      uVar24 = uVar24 - 1;
      pFVar17 = pFVar28 + -1;
LAB_14d453d16:
      pFVar28 = pFVar17;
      local_8218 = pFVar17;
      local_8208.CurrentItemIndex = uVar24;
      local_8208.CurrentItem = pFVar17;
      if (pFVar17 == (FEventScopeEntry *)0x0) break;
      pdVar14 = (double *)(ulonglong)local_8258;
    }
  }
  local_8250 = (double *)((ulonglong)local_8250 & 0xffffffff00000000);
  uVar24 = uVar30;
  uVar21 = local_8258;
  iVar13 = 0;
  if ((int)local_8258 < 1) {
    return;
  }
  while( true ) {
    if (pFVar17 == (FEventScopeEntry *)0x0) {
      return;
    }
    if (uVar24 != uVar30) {
      if (uVar24 == (longlong)(((local_8208.Outer)->PagesArray).ArrayNum + -1)) {
        local_8208.CurrentItemIndex = (local_8208.Outer)->TotalItemCount;
        local_8208.CurrentPageLastItem = (FEventScopeEntry *)0x0;
        local_8208.CurrentItem = (FEventScopeEntry *)0x0;
      }
      else {
        uVar24 = uVar24 + 1;
        local_8208.CurrentItem = (local_8208.Outer)->FirstPage[uVar24].Items;
        if (local_8208.CurrentItem == (FEventScopeEntry *)0x0) {
          local_8208.CurrentPageLastItem = (FEventScopeEntry *)0x0;
        }
        else {
          local_8208.CurrentPageLastItem =
               local_8208.CurrentItem + ((local_8208.Outer)->FirstPage[uVar24].Count - 1);
        }
        local_8208.CurrentItemIndex = uVar24 * (local_8208.Outer)->PageSize;
        local_8208.CurrentPageIndex = uVar24;
      }
      pFVar31 = (local_8208.Outer)->FirstPage;
      local_8208.CurrentPageFirstItem = local_8208.CurrentItem;
      if ((pFVar31[uVar24].InitialStackCount < uVar21) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentStackDepth <= CurrentScopePage->InitialStackCount",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                              ,0x292,L""), uVar21 = local_8258, bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar22 = local_8168;
      uVar40 = (ulonglong)uVar21;
      if (uVar21 == 0) {
        return;
      }
      lVar25 = (ulonglong)uVar21 << 5;
      do {
        pFVar6 = pFVar31[uVar24].InitialStack;
        uVar40 = uVar40 - 1;
        local_8220[0] = 0;
        uVar20 = *(ulonglong *)(lVar25 + -0x18 + (longlong)pFVar6);
        uVar19 = uVar20 % *(ulonglong *)(pFVar22 + 0x68);
        lVar26 = *(longlong *)
                  (*(longlong *)(pFVar22 + 0x58) + (uVar20 / *(ulonglong *)(pFVar22 + 0x68)) * 0x10)
        ;
        puVar2 = (undefined8 *)(lVar26 + uVar19 * 0x18);
        local_8158 = *puVar2;
        uStack_8150 = puVar2[1];
        local_8148 = *(undefined8 *)(lVar26 + 0x10 + uVar19 * 0x18);
        uVar20 = *(ulonglong *)((longlong)&pFVar6[-1].EnterScopeIndex + lVar25);
        local_8160 = *(undefined8 *)
                      (*(longlong *)
                        ((uVar20 / *(ulonglong *)(pFVar22 + 0x30)) * 0x40 +
                        *(longlong *)(pFVar22 + 0x20)) +
                      (uVar20 % *(ulonglong *)(pFVar22 + 0x30)) * 8);
        iVar13 = (**(code **)local_81a0)
                           (*(undefined8 *)&local_81a0->field_0x8,local_8220,&local_8160,&local_8158
                           );
        if (iVar13 == 1) {
          return;
        }
        lVar25 = lVar25 + -0x20;
      } while (0 < (longlong)uVar40);
      return;
    }
    dVar3 = pFVar17->Time;
    if (0.0 <= dVar3) {
      local_8250 = (double *)CONCAT44(local_8250._4_4_,iVar13 + 1);
    }
    else {
      if (iVar13 == 0) {
        local_8258 = uVar21 - 1;
        local_8228[0] = 0;
        local_8170 = CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^ uVar43,SUB84(dVar3,0) ^ uVar42);
        iVar13 = (**(code **)local_81a0)
                           (*(undefined8 *)&local_81a0->field_0x8,local_8228,&local_8170,pFVar23);
        uVar21 = local_8258;
        if (iVar13 == 1) {
          return;
        }
      }
      else {
        local_8250 = (double *)CONCAT44(local_8250._4_4_,iVar13 + -1);
      }
      if (pFVar23 == pFVar39) {
        if (uVar38 == 0) {
          local_81d8.CurrentItemIndex = local_8210->TotalItemCount;
          pFVar39 = (FLoadTimeProfilerCpuEvent *)0x0;
          pFVar23 = (FLoadTimeProfilerCpuEvent *)0x0;
          local_81d8.CurrentItem = (FLoadTimeProfilerCpuEvent *)0x0;
          local_81d8.CurrentPageFirstItem = (FLoadTimeProfilerCpuEvent *)0x0;
          local_81d8.CurrentPageLastItem = (FLoadTimeProfilerCpuEvent *)0x0;
        }
        else {
          uVar38 = uVar38 - 1;
          pFVar39 = local_8210->FirstPage[uVar38].Items;
          if (pFVar39 == (FLoadTimeProfilerCpuEvent *)0x0) {
            pFVar23 = (FLoadTimeProfilerCpuEvent *)0x0;
          }
          else {
            pFVar23 = pFVar39 + (local_8210->FirstPage[uVar38].Count - 1);
          }
          local_81d8.CurrentItemIndex =
               ((longlong)pFVar23 - (longlong)pFVar39) / 0x18 + uVar38 * local_8210->PageSize;
          local_81d8.CurrentPageIndex = uVar38;
          local_81d8.CurrentPageFirstItem = pFVar39;
          local_81d8.CurrentPageLastItem = pFVar23;
          local_81d8.CurrentItem = pFVar23;
        }
      }
      else {
        local_81d8.CurrentItemIndex = local_81d8.CurrentItemIndex - 1;
        pFVar23 = pFVar23 + -1;
        local_81d8.CurrentItem = pFVar23;
      }
    }
    uVar41 = uVar24;
    if (pFVar28 == pFVar37) {
      if (uVar24 == 0) {
        pFVar37 = (FEventScopeEntry *)0x0;
        local_8208.CurrentPageFirstItem = (FEventScopeEntry *)0x0;
        local_8208.CurrentPageLastItem = (FEventScopeEntry *)0x0;
        pFVar17 = (FEventScopeEntry *)0x0;
        pFVar28 = (FEventScopeEntry *)0x0;
      }
      else {
        local_8208.CurrentPageIndex = uVar24 - 1;
        pFVar31 = (local_8208.Outer)->FirstPage + local_8208.CurrentPageIndex;
        pFVar37 = pFVar31->Items;
        if (pFVar37 == (FEventScopeEntry *)0x0) {
          pFVar28 = (FEventScopeEntry *)0x0;
        }
        else {
          pFVar28 = pFVar37 + (pFVar31->Count - 1);
        }
        pFVar17 = pFVar28;
        uVar41 = local_8208.CurrentPageIndex;
        if (pFVar31 == (FEventScopeEntryPage *)0x0) {
          pFVar17 = (FEventScopeEntry *)0x0;
        }
      }
    }
    else {
      pFVar17 = pFVar28 + -1;
      pFVar28 = pFVar17;
    }
    if ((int)uVar21 < 1) break;
    uVar30 = uVar24;
    uVar24 = uVar41;
    iVar13 = (int)local_8250;
  }
  return;
}

// EnumerateEventsBackwardsDownSampled @ 14d4540c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateEventsBackwardsDownSampled
          (TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this,double param_1,double param_2,double param_3,
          TFunctionRef<TraceServices::EEventEnumerate___cdecl(double,double,unsigned_int,TraceServices::FTimingProfilerEvent_const_&)>
          *param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 auStack_4088 [32];
  code **local_4068;
  undefined4 local_4058 [2];
  code *local_4050;
  undefined1 **local_4048;
  undefined1 *local_4040;
  undefined4 *local_4038;
  undefined8 local_4030;
  undefined8 local_4028;
  undefined1 local_4018 [8];
  undefined4 local_4010 [4094];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x14d4540ca;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_4088;
  lVar1 = 0x400;
  puVar2 = local_4010;
  do {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 4;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  local_4068 = &local_4050;
  local_4058[0] = 0;
  local_4040 = local_4018;
  local_4038 = local_4058;
  local_4030 = *(undefined8 *)param_4;
  local_4028 = *(undefined8 *)&param_4->field_0x8;
  local_4048 = &local_4040;
  local_4050 = UE::Core::Private::Function::
               TFunctionRefCaller<`TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateEventsBackwardsDownSampled'::__l2::<lambda_1>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FTimingProfilerEvent_const_&>
               ::Call;
  (**(code **)(this->_padding_ + 0x48))(this);
  return;
}

// EnumerateEventsBackwardsDownSampled @ 14d454180

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateEventsBackwardsDownSampled
          (TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this,double param_1,double param_2,double param_3,
          TFunctionRef<TraceServices::EEventEnumerate___cdecl(bool,double,TraceServices::FTimingProfilerEvent_const_&)>
          *param_4)

{
  double dVar1;
  ushort uVar2;
  longlong lVar3;
  ulonglong uVar4;
  FEventStackEntry *pFVar5;
  code *pcVar6;
  ulonglong uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  TPagedArrayIterator<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
  *pTVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  FTimingProfilerEvent *pFVar17;
  ulong64 uVar18;
  longlong lVar19;
  FEventScopeEntry *pFVar20;
  FEventScopeEntry *pFVar21;
  ulonglong uVar22;
  ulong64 uVar23;
  FEventScopeEntryPage *pFVar24;
  double *pdVar25;
  uint uVar26;
  longlong lVar27;
  TPagedArrayPage<TraceServices::FTimingProfilerEvent> *pTVar28;
  FScriptContainerElement *pFVar29;
  FEventScopeEntry *pFVar30;
  FScriptContainerElement *pFVar31;
  FTimingProfilerEvent *pFVar32;
  ulonglong uVar33;
  ulong64 uVar34;
  uint uVar35;
  uint uVar36;
  undefined1 auStack_4278 [32];
  ulonglong local_4258;
  longlong local_4250;
  uint local_4248;
  double *local_4240;
  undefined1 local_4238 [8];
  undefined1 local_4230 [8];
  undefined1 local_4228 [8];
  undefined1 local_4220 [8];
  undefined1 local_4218 [8];
  ulong64 local_4210;
  double *local_4208;
  TPagedArray<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
  *local_4200;
  TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
  local_41f8;
  TPagedArrayIterator<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
  local_41c8;
  FTimingProfilerEvent *local_4198;
  TFunctionRef<TraceServices::EEventEnumerate___cdecl(bool,double,TraceServices::FTimingProfilerEvent_const_&)>
  *local_4190;
  undefined4 local_4188 [2];
  double *local_4180;
  longlong local_4178;
  double local_4170;
  undefined8 local_4168;
  double local_4160;
  undefined8 local_4158;
  FScriptContainerElement *local_4150;
  undefined8 local_4148;
  TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
  local_4140;
  TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage> *local_4110;
  ulong64 uStack_4108;
  FEventScopeEntry *local_4100;
  FEventScopeEntry *pFStack_40f8;
  ulong64 local_40f0;
  FEventScopeEntry *pFStack_40e8;
  TPagedArrayIterator<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
  local_40e0;
  double local_40a8;
  double local_40a0 [2047];
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_4278;
  local_4190 = param_4;
  uVar15 = 5;
  lVar19 = 0x782d0;
  do {
    iVar10 = (this->DetailLevels).ArrayNum;
    if (iVar10 <= (int)uVar15) {
      local_4258 = (ulonglong)uVar15;
      local_4250 = (longlong)iVar10;
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (*(double *)((this->DetailLevels).AllocatorInstance.Data + lVar19) <= param_3) break;
    uVar15 = uVar15 - 1;
    lVar19 = lVar19 + -0x18090;
  } while (0 < (int)uVar15);
  iVar10 = (this->DetailLevels).ArrayNum;
  uVar9 = 0;
  if ((int)uVar15 < iVar10) {
    uVar9 = ~uVar15 >> 0x1f;
  }
  if (uVar9 == 0) {
    local_4258 = (ulonglong)(int)uVar15;
    local_4250 = (longlong)iVar10;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar31 = (this->DetailLevels).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x18090;
  if (*(longlong *)(pFVar31 + 0x38) == 0) {
    return;
  }
  uVar33 = (longlong)*(int *)(pFVar31 + 0x18);
  uVar4 = 0;
  while (uVar7 = uVar4, uVar33 != 0) {
    uVar22 = uVar33 >> 1;
    uVar15 = (uint)uVar33;
    uVar33 = uVar22;
    uVar4 = uVar22 + uVar7 + (ulonglong)(uVar15 & 1);
    if (param_1 < *(double *)((uVar22 + uVar7) * 0x40 + 0x10 + *(longlong *)(pFVar31 + 0x20))) {
      uVar4 = uVar7;
    }
  }
  lVar19 = 0x400;
  pdVar13 = local_40a0;
  do {
    *(undefined4 *)pdVar13 = 0xffffffff;
    pdVar13 = pdVar13 + 2;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  local_4150 = pFVar31;
  TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>::
  TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
            (&local_41f8,
             (TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage> *)
             (pFVar31 + 8),*(longlong *)(pFVar31 + 0x38) - 1);
  TPagedArray<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
  ::GetIteratorFromItem
            ((TPagedArray<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
              *)(pFVar31 + 0x40),&local_41c8,*(longlong *)(pFVar31 + 0x70) - 1);
  if ((uVar7 == 0) || ((ulonglong)(longlong)*(int *)(pFVar31 + 0x18) <= uVar7)) {
    pdVar13 = (double *)(ulonglong)*(ushort *)(pFVar31 + 0x80);
    lVar19 = 0;
    local_4248 = (uint)*(ushort *)(pFVar31 + 0x80);
    if (&DAT_00000003 < pdVar13) {
      lVar16 = ((ulonglong)((longlong)pdVar13 + -4) >> 2) + 1;
      lVar19 = lVar16 * 4;
      pFVar29 = pFVar31 + 0x100b0;
      pdVar25 = local_40a0;
      do {
        pdVar25[-1] = *(double *)(pFVar31 + 0x78);
        *(undefined4 *)pdVar25 =
             *(undefined4 *)
              (*(longlong *)
                (*(longlong *)(pFVar31 + 0x58) +
                (*(ulonglong *)(pFVar29 + -0x20) / *(ulonglong *)(pFVar31 + 0x68)) * 0x10) +
              (*(ulonglong *)(pFVar29 + -0x20) % *(ulonglong *)(pFVar31 + 0x68)) * 4);
        pdVar25[1] = *(double *)(pFVar31 + 0x78);
        *(undefined4 *)(pdVar25 + 2) =
             *(undefined4 *)
              (*(longlong *)
                (*(longlong *)(pFVar31 + 0x58) +
                (*(ulonglong *)pFVar29 / *(ulonglong *)(pFVar31 + 0x68)) * 0x10) +
              (*(ulonglong *)pFVar29 % *(ulonglong *)(pFVar31 + 0x68)) * 4);
        pdVar25[3] = *(double *)(pFVar31 + 0x78);
        *(undefined4 *)(pdVar25 + 4) =
             *(undefined4 *)
              (*(longlong *)
                (*(longlong *)(pFVar31 + 0x58) +
                (*(ulonglong *)(pFVar29 + 0x20) / *(ulonglong *)(pFVar31 + 0x68)) * 0x10) +
              (*(ulonglong *)(pFVar29 + 0x20) % *(ulonglong *)(pFVar31 + 0x68)) * 4);
        pdVar25[5] = *(double *)(pFVar31 + 0x78);
        *(undefined4 *)(pdVar25 + 6) =
             *(undefined4 *)
              (*(longlong *)
                (*(longlong *)(pFVar31 + 0x58) +
                (*(ulonglong *)(pFVar29 + 0x40) / *(ulonglong *)(pFVar31 + 0x68)) * 0x10) +
              (*(ulonglong *)(pFVar29 + 0x40) % *(ulonglong *)(pFVar31 + 0x68)) * 4);
        lVar16 = lVar16 + -1;
        pFVar29 = pFVar29 + 0x80;
        pdVar25 = pdVar25 + 8;
      } while (lVar16 != 0);
    }
    pFVar20 = local_41f8.CurrentItem;
    if (lVar19 < (longlong)(ulonglong)local_4248) {
      pFVar29 = pFVar31 + lVar19 * 0x20 + 0x10090;
      lVar16 = (ulonglong)local_4248 - lVar19;
      pdVar25 = local_40a0 + lVar19 * 2;
      do {
        pdVar25[-1] = *(double *)(pFVar31 + 0x78);
        uVar33 = *(ulonglong *)pFVar29;
        pFVar29 = pFVar29 + 0x20;
        *(undefined4 *)pdVar25 =
             *(undefined4 *)
              (*(longlong *)
                (*(longlong *)(pFVar31 + 0x58) + (uVar33 / *(ulonglong *)(pFVar31 + 0x68)) * 0x10) +
              (uVar33 % *(ulonglong *)(pFVar31 + 0x68)) * 4);
        lVar16 = lVar16 + -1;
        pdVar25 = pdVar25 + 2;
      } while (lVar16 != 0);
    }
  }
  else {
    TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>::
    TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
              (&local_4140,
               (TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage> *)
               (pFVar31 + 8),uVar7 * *(longlong *)(pFVar31 + 0x30));
    lVar19 = *(longlong *)(pFVar31 + 0x20);
    lVar16 = uVar7 * 0x40;
    local_41f8.Outer = local_4140.Outer;
    local_41f8.CurrentPageIndex = local_4140.CurrentPageIndex;
    local_41f8.CurrentPageFirstItem = local_4140.CurrentPageFirstItem;
    local_41f8.CurrentPageLastItem = local_4140.CurrentPageLastItem;
    local_41f8.CurrentItemIndex = local_4140.CurrentItemIndex;
    local_41f8.CurrentItem = local_4140.CurrentItem;
    pTVar11 = TPagedArray<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
              ::GetIteratorFromItem
                        ((TPagedArray<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
                          *)(pFVar31 + 0x40),&local_40e0,*(ulong64 *)(lVar16 + 0x20 + lVar19));
    uVar2 = *(ushort *)(lVar16 + 0x38 + lVar19);
    pdVar13 = (double *)(ulonglong)uVar2;
    local_4248 = (uint)uVar2;
    uVar33 = (ulonglong)local_4248;
    local_41c8.Outer = pTVar11->Outer;
    local_41c8.CurrentPageIndex = pTVar11->CurrentPageIndex;
    local_41c8.CurrentPageFirstItem = pTVar11->CurrentPageFirstItem;
    local_41c8.CurrentPageLastItem = pTVar11->CurrentPageLastItem;
    local_41c8.CurrentItemIndex = pTVar11->CurrentItemIndex;
    local_41c8.CurrentItem = pTVar11->CurrentItem;
    if (uVar2 != 0) {
      lVar27 = 0;
      pdVar13 = &local_40a8;
      do {
        lVar3 = *(longlong *)(lVar16 + 0x30 + lVar19);
        dVar1 = *(double *)(lVar3 + 0x18 + lVar27);
        *pdVar13 = dVar1;
        if (dVar1 < 0.0) {
          local_4110 = local_4140.Outer;
          uStack_4108 = local_4140.CurrentPageIndex;
          local_4100 = local_4140.CurrentPageFirstItem;
          pFStack_40f8 = local_4140.CurrentPageLastItem;
          local_40f0 = local_4140.CurrentItemIndex;
          pFStack_40e8 = local_4140.CurrentItem;
          lVar14 = (local_4140.CurrentPageIndex + 1) * 0x40;
          uVar23 = local_4140.CurrentPageIndex;
          do {
            if (uVar23 == (longlong)(((local_4140.Outer)->PagesArray).ArrayNum + -1))
            goto LAB_14d45448f;
            uVar23 = uVar23 + 1;
            lVar12 = (longlong)&(local_4140.Outer)->FirstPage->Items + lVar14;
            if (lVar12 == 0) goto LAB_14d45448f;
            dVar1 = *(double *)(*(longlong *)(lVar12 + 0x30) + 0x18 + lVar27);
            lVar14 = lVar14 + 0x40;
          } while (dVar1 <= 0.0);
          *pdVar13 = dVar1;
LAB_14d45448f:
          if (*pdVar13 <= 0.0 && *pdVar13 != 0.0) {
            *pdVar13 = *(double *)(pFVar31 + 0x78);
          }
        }
        uVar4 = *(ulonglong *)(lVar3 + 8 + lVar27);
        lVar27 = lVar27 + 0x20;
        *(undefined4 *)(pdVar13 + 1) =
             *(undefined4 *)
              (*(longlong *)
                (*(longlong *)(pFVar31 + 0x58) + (uVar4 / *(ulonglong *)(pFVar31 + 0x68)) * 0x10) +
              (uVar4 % *(ulonglong *)(pFVar31 + 0x68)) * 4);
        pdVar13 = pdVar13 + 2;
        uVar33 = uVar33 - 1;
      } while (uVar33 != 0);
      pdVar13 = (double *)(ulonglong)local_4248;
    }
    if (local_4140.CurrentItem == local_4140.CurrentPageFirstItem) {
      if (local_4140.CurrentPageIndex == 0) {
        local_41f8.CurrentItemIndex = (local_41f8.Outer)->TotalItemCount;
        local_41f8.CurrentItem = (FEventScopeEntry *)0x0;
        local_41f8.CurrentPageFirstItem = (FEventScopeEntry *)0x0;
        local_41f8.CurrentPageLastItem = (FEventScopeEntry *)0x0;
        pFVar20 = (FEventScopeEntry *)0x0;
      }
      else {
        local_41f8.CurrentPageIndex = local_4140.CurrentPageIndex - 1;
        pFVar24 = (local_41f8.Outer)->FirstPage + local_41f8.CurrentPageIndex;
        local_41f8.CurrentPageFirstItem = pFVar24->Items;
        if (local_41f8.CurrentPageFirstItem == (FEventScopeEntry *)0x0) {
          local_41f8.CurrentPageLastItem = (FEventScopeEntry *)0x0;
        }
        else {
          local_41f8.CurrentPageLastItem = local_41f8.CurrentPageFirstItem + (pFVar24->Count - 1);
        }
        local_41f8.CurrentItemIndex =
             ((longlong)local_41f8.CurrentPageLastItem - (longlong)local_41f8.CurrentPageFirstItem
             >> 3) + local_41f8.CurrentPageIndex * (local_41f8.Outer)->PageSize;
        pFVar20 = local_41f8.CurrentPageLastItem;
        local_41f8.CurrentItem = local_41f8.CurrentPageLastItem;
        if (pFVar24 == (FEventScopeEntryPage *)0x0) {
          pFVar20 = (FEventScopeEntry *)0x0;
          local_41f8.CurrentItem = local_41f8.CurrentPageLastItem;
        }
      }
    }
    else {
      local_41f8.CurrentItemIndex = local_4140.CurrentItemIndex - 1;
      pFVar20 = local_41f8.CurrentItem + -1;
      local_41f8.CurrentItem = pFVar20;
    }
    if (local_41c8.CurrentItem == local_41c8.CurrentPageFirstItem) {
      if (local_41c8.CurrentPageIndex == 0) {
        local_41c8.CurrentItem = (FTimingProfilerEvent *)0x0;
        local_41c8.CurrentPageFirstItem = (FTimingProfilerEvent *)0x0;
        local_41c8.CurrentPageLastItem = (FTimingProfilerEvent *)0x0;
        local_41c8.CurrentItemIndex = (local_41c8.Outer)->TotalItemCount;
      }
      else {
        local_41c8.CurrentPageIndex = local_41c8.CurrentPageIndex - 1;
        local_41c8.CurrentPageFirstItem =
             (local_41c8.Outer)->FirstPage[local_41c8.CurrentPageIndex].Items;
        if (local_41c8.CurrentPageFirstItem == (FTimingProfilerEvent *)0x0) {
          local_41c8.CurrentPageLastItem = (FTimingProfilerEvent *)0x0;
        }
        else {
          local_41c8.CurrentPageLastItem =
               local_41c8.CurrentPageFirstItem +
               ((local_41c8.Outer)->FirstPage[local_41c8.CurrentPageIndex].Count - 1);
        }
        local_41c8.CurrentItemIndex =
             ((longlong)local_41c8.CurrentPageLastItem - (longlong)local_41c8.CurrentPageFirstItem
             >> 2) + local_41c8.CurrentPageIndex * (local_41c8.Outer)->PageSize;
        local_41c8.CurrentItem = local_41c8.CurrentPageLastItem;
      }
    }
    else {
      local_41c8.CurrentItemIndex = local_41c8.CurrentItemIndex - 1;
      local_41c8.CurrentItem = local_41c8.CurrentItem + -1;
    }
  }
  uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar15 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  pFVar17 = local_41c8.CurrentItem;
  pFVar30 = local_41f8.CurrentPageFirstItem;
  pFVar32 = local_41c8.CurrentPageFirstItem;
  uVar23 = local_41f8.CurrentPageIndex;
  local_4210 = local_41c8.CurrentPageIndex;
  local_4200 = local_41c8.Outer;
  local_4198 = local_41c8.CurrentItem;
  if (pFVar20 != (FEventScopeEntry *)0x0) {
    local_4240 = local_40a0 + (longlong)pdVar13 * 2 + -1;
    local_4208 = pdVar13;
    do {
      pFVar21 = local_41f8.CurrentItem;
      uVar18 = local_41f8.CurrentItemIndex;
      dVar1 = pFVar20->Time;
      if ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & uVar9,SUB84(dVar1,0) & uVar15) <=
          param_1) break;
      if (0.0 <= dVar1) {
        uVar35 = (uint)pdVar13;
        if ((0x3ff < (longlong)local_4208) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentStackDepth < SettingsType::MaxDepth",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                               ,0x23d,L""), uVar35 = local_4248, bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_4208 = (double *)((longlong)local_4208 + 1);
        local_4248 = uVar35 + 1;
        pdVar13 = (double *)(ulonglong)local_4248;
        *local_4240 = pFVar20->Time;
        local_4240 = local_4240 + 2;
      }
      else {
        uVar35 = (uint)pdVar13;
        if (((longlong)local_4208 < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentStackDepth > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                               ,0x237,L""), uVar35 = local_4248, bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_4248 = uVar35 - 1;
        pdVar13 = (double *)(ulonglong)local_4248;
        local_4208 = (double *)((longlong)local_4208 + -1);
        local_4240 = local_4240 + -2;
        if (pFVar17 == pFVar32) {
          if (local_4210 == 0) {
            local_41c8.CurrentItemIndex = local_4200->TotalItemCount;
            pFVar17 = (FTimingProfilerEvent *)0x0;
            pFVar32 = (FTimingProfilerEvent *)0x0;
            local_41c8.CurrentItem = (FTimingProfilerEvent *)0x0;
            local_41c8.CurrentPageFirstItem = (FTimingProfilerEvent *)0x0;
            local_41c8.CurrentPageLastItem = (FTimingProfilerEvent *)0x0;
            local_4198 = (FTimingProfilerEvent *)0x0;
          }
          else {
            local_4210 = local_4210 - 1;
            pTVar28 = local_4200->FirstPage + local_4210;
            pFVar32 = pTVar28->Items;
            if (pFVar32 == (FTimingProfilerEvent *)0x0) {
              pFVar17 = (FTimingProfilerEvent *)0x0;
            }
            else {
              pFVar17 = pFVar32 + (pTVar28->Count - 1);
            }
            local_41c8.CurrentItemIndex =
                 ((longlong)pFVar17 - (longlong)pFVar32 >> 2) + local_4210 * local_4200->PageSize;
            local_41c8.CurrentPageIndex = local_4210;
            local_41c8.CurrentPageFirstItem = pFVar32;
            local_41c8.CurrentPageLastItem = pFVar17;
            local_41c8.CurrentItem = pFVar17;
            local_4198 = pFVar17;
            if (pTVar28 == (TPagedArrayPage<TraceServices::FTimingProfilerEvent> *)0x0) {
              local_4198 = (FTimingProfilerEvent *)0x0;
            }
          }
        }
        else {
          local_41c8.CurrentItemIndex = local_41c8.CurrentItemIndex - 1;
          pFVar17 = pFVar17 + -1;
          local_41c8.CurrentItem = pFVar17;
          local_4198 = pFVar17;
        }
      }
      if (pFVar21 == pFVar30) {
        if (uVar23 == 0) {
          local_41f8.CurrentItemIndex = (local_41f8.Outer)->TotalItemCount;
          local_41f8.CurrentItem = (FEventScopeEntry *)0x0;
          local_41f8.CurrentPageFirstItem = (FEventScopeEntry *)0x0;
        }
        else {
          uVar23 = uVar23 - 1;
          pFVar24 = (local_41f8.Outer)->FirstPage + uVar23;
          pFVar30 = pFVar24->Items;
          if (pFVar30 == (FEventScopeEntry *)0x0) {
            pFVar20 = (FEventScopeEntry *)0x0;
          }
          else {
            pFVar20 = pFVar30 + (pFVar24->Count - 1);
          }
          local_41f8.CurrentItemIndex =
               ((longlong)pFVar20 - (longlong)pFVar30 >> 3) + uVar23 * (local_41f8.Outer)->PageSize;
          local_41f8.CurrentPageIndex = uVar23;
          local_41f8.CurrentPageFirstItem = pFVar30;
          local_41f8.CurrentPageLastItem = pFVar20;
          local_41f8.CurrentItem = pFVar20;
          if (pFVar24 != (FEventScopeEntryPage *)0x0) goto LAB_14d454a82;
        }
        pFVar20 = (FEventScopeEntry *)0x0;
        pFVar30 = local_41f8.CurrentPageFirstItem;
        local_41f8.CurrentPageLastItem = local_41f8.CurrentItem;
        break;
      }
      local_41f8.CurrentItemIndex = uVar18 - 1;
      pFVar20 = pFVar21 + -1;
LAB_14d454a82:
      local_41f8.CurrentItem = pFVar20;
    } while (pFVar20 != (FEventScopeEntry *)0x0);
  }
  pFVar21 = local_41f8.CurrentItem;
  uVar18 = local_41f8.CurrentItemIndex;
  iVar10 = 0;
  local_4178 = (longlong)(int)pdVar13;
  local_4240 = (double *)((ulonglong)local_4240 & 0xffffffff00000000);
  if (0 < (int)pdVar13) {
    local_4180 = &local_40a8;
    local_4208 = (double *)0x0;
    do {
      local_4170 = *local_4180;
      local_4238[0] = 1;
      iVar10 = (**(code **)local_4190)
                         (*(undefined8 *)&local_4190->field_0x8,local_4238,&local_4170,
                          local_40a0 + (longlong)iVar10 * 2);
      if (iVar10 == 1) {
        return;
      }
      iVar10 = (int)local_4240 + 1;
      local_4208 = (double *)((longlong)local_4208 + 1);
      local_4180 = local_4180 + 2;
      local_4240 = (double *)CONCAT44(local_4240._4_4_,iVar10);
    } while ((longlong)local_4208 < local_4178);
    pdVar13 = (double *)(ulonglong)local_4248;
  }
  uVar35 = (uint)__xmm_80000000000000008000000000000000;
  uVar36 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  if (pFVar20 != (FEventScopeEntry *)0x0) {
    local_4208 = local_40a0 + local_4178 * 2 + -1;
    local_4240 = local_40a0 + local_4178 * 2;
    while( true ) {
      uVar26 = (uint)pdVar13;
      dVar1 = pFVar20->Time;
      if ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & uVar9,SUB84(dVar1,0) & uVar15) <
          param_2) break;
      if (0.0 <= dVar1) {
        if ((0x3ff < (int)uVar26) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentStackDepth < SettingsType::MaxDepth",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                               ,0x25e,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_4248 = local_4248 + 1;
        local_4228[0] = 1;
        local_4240 = local_4240 + 2;
        *local_4208 = pFVar20->Time;
        pdVar13 = local_4208 + 1;
        local_4160 = pFVar20->Time;
        local_4208 = local_4208 + 2;
        iVar10 = (**(code **)local_4190)
                           (*(undefined8 *)&local_4190->field_0x8,local_4228,&local_4160,pdVar13);
        if (iVar10 == 1) {
          return;
        }
      }
      else {
        if (((int)uVar26 < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentStackDepth > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                               ,0x253,L""), uVar26 = local_4248, bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_4208 = local_4208 + -2;
        local_4248 = uVar26 - 1;
        local_4230[0] = 0;
        local_4240 = local_4240 + -2;
        *(uint *)local_4240 = local_4198->TimerIndex;
        local_4168 = CONCAT44((uint)((ulonglong)pFVar20->Time >> 0x20) ^ uVar36,
                              SUB84(pFVar20->Time,0) ^ uVar35);
        iVar10 = (**(code **)local_4190)
                           (*(undefined8 *)&local_4190->field_0x8,local_4230,&local_4168,
                            local_40a0 + (longlong)(int)local_4248 * 2);
        if (iVar10 == 1) {
          return;
        }
        if (pFVar17 == pFVar32) {
          if (local_4210 == 0) {
            local_41c8.CurrentItemIndex = local_4200->TotalItemCount;
            pFVar17 = (FTimingProfilerEvent *)0x0;
            pFVar32 = (FTimingProfilerEvent *)0x0;
            local_41c8.CurrentItem = (FTimingProfilerEvent *)0x0;
            local_41c8.CurrentPageFirstItem = (FTimingProfilerEvent *)0x0;
            local_41c8.CurrentPageLastItem = (FTimingProfilerEvent *)0x0;
            local_4198 = (FTimingProfilerEvent *)0x0;
          }
          else {
            local_4210 = local_4210 - 1;
            pTVar28 = local_4200->FirstPage + local_4210;
            pFVar32 = pTVar28->Items;
            if (pFVar32 == (FTimingProfilerEvent *)0x0) {
              pFVar17 = (FTimingProfilerEvent *)0x0;
            }
            else {
              pFVar17 = pFVar32 + (pTVar28->Count - 1);
            }
            local_41c8.CurrentItemIndex =
                 ((longlong)pFVar17 - (longlong)pFVar32 >> 2) + local_4210 * local_4200->PageSize;
            local_41c8.CurrentPageIndex = local_4210;
            local_41c8.CurrentPageFirstItem = pFVar32;
            local_41c8.CurrentPageLastItem = pFVar17;
            local_41c8.CurrentItem = pFVar17;
            local_4198 = pFVar17;
            if (pTVar28 == (TPagedArrayPage<TraceServices::FTimingProfilerEvent> *)0x0) {
              local_4198 = (FTimingProfilerEvent *)0x0;
            }
          }
        }
        else {
          local_41c8.CurrentItemIndex = local_41c8.CurrentItemIndex - 1;
          pFVar17 = pFVar17 + -1;
          local_41c8.CurrentItem = pFVar17;
          local_4198 = pFVar17;
        }
      }
      if (pFVar21 == pFVar30) {
        if (uVar23 == 0) {
          local_41f8.CurrentPageFirstItem = (FEventScopeEntry *)0x0;
          local_41f8.CurrentPageLastItem = (FEventScopeEntry *)0x0;
        }
        else {
          uVar23 = uVar23 - 1;
          pFVar24 = (local_41f8.Outer)->FirstPage + uVar23;
          pFVar30 = pFVar24->Items;
          if (pFVar30 == (FEventScopeEntry *)0x0) {
            pFVar21 = (FEventScopeEntry *)0x0;
          }
          else {
            pFVar21 = pFVar30 + (pFVar24->Count - 1);
          }
          uVar18 = ((longlong)pFVar21 - (longlong)pFVar30 >> 3) +
                   uVar23 * (local_41f8.Outer)->PageSize;
          local_41f8.CurrentPageIndex = uVar23;
          local_41f8.CurrentPageFirstItem = pFVar30;
          local_41f8.CurrentPageLastItem = pFVar21;
          local_41f8.CurrentItemIndex = uVar18;
          local_41f8.CurrentItem = pFVar21;
          if (pFVar24 != (FEventScopeEntryPage *)0x0) goto LAB_14d454e50;
        }
        pFVar20 = (FEventScopeEntry *)0x0;
        pFVar21 = local_41f8.CurrentPageLastItem;
        pFVar30 = local_41f8.CurrentPageFirstItem;
        break;
      }
      uVar18 = uVar18 - 1;
      pFVar21 = pFVar21 + -1;
LAB_14d454e50:
      pFVar20 = pFVar21;
      local_41f8.CurrentItemIndex = uVar18;
      local_41f8.CurrentItem = pFVar21;
      if (pFVar21 == (FEventScopeEntry *)0x0) break;
      pdVar13 = (double *)(ulonglong)local_4248;
    }
  }
  local_4240 = (double *)((ulonglong)local_4240 & 0xffffffff00000000);
  uVar18 = uVar23;
  uVar15 = local_4248;
  iVar10 = 0;
  if ((int)local_4248 < 1) {
    return;
  }
  while( true ) {
    if (pFVar20 == (FEventScopeEntry *)0x0) {
      return;
    }
    if (uVar18 != uVar23) {
      if (uVar18 == (longlong)(((local_41f8.Outer)->PagesArray).ArrayNum + -1)) {
        local_41f8.CurrentItemIndex = (local_41f8.Outer)->TotalItemCount;
        local_41f8.CurrentPageLastItem = (FEventScopeEntry *)0x0;
        local_41f8.CurrentItem = (FEventScopeEntry *)0x0;
      }
      else {
        uVar18 = uVar18 + 1;
        local_41f8.CurrentItem = (local_41f8.Outer)->FirstPage[uVar18].Items;
        if (local_41f8.CurrentItem == (FEventScopeEntry *)0x0) {
          local_41f8.CurrentPageLastItem = (FEventScopeEntry *)0x0;
        }
        else {
          local_41f8.CurrentPageLastItem =
               local_41f8.CurrentItem + ((local_41f8.Outer)->FirstPage[uVar18].Count - 1);
        }
        local_41f8.CurrentItemIndex = uVar18 * (local_41f8.Outer)->PageSize;
        local_41f8.CurrentPageIndex = uVar18;
      }
      pFVar24 = (local_41f8.Outer)->FirstPage;
      local_41f8.CurrentPageFirstItem = local_41f8.CurrentItem;
      if ((pFVar24[uVar18].InitialStackCount < uVar15) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentStackDepth <= CurrentScopePage->InitialStackCount",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                             ,0x292,L""), uVar15 = local_4248, bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar31 = local_4150;
      uVar33 = (ulonglong)uVar15;
      if (uVar15 == 0) {
        return;
      }
      lVar19 = (ulonglong)uVar15 << 5;
      do {
        pFVar5 = pFVar24[uVar18].InitialStack;
        local_4218[0] = 0;
        uVar33 = uVar33 - 1;
        uVar4 = *(ulonglong *)(lVar19 + -0x18 + (longlong)pFVar5);
        local_4188[0] =
             *(undefined4 *)
              (*(longlong *)
                (*(longlong *)(pFVar31 + 0x58) + (uVar4 / *(ulonglong *)(pFVar31 + 0x68)) * 0x10) +
              (uVar4 % *(ulonglong *)(pFVar31 + 0x68)) * 4);
        uVar4 = *(ulonglong *)((longlong)&pFVar5[-1].EnterScopeIndex + lVar19);
        local_4148 = *(undefined8 *)
                      (*(longlong *)
                        ((uVar4 / *(ulonglong *)(pFVar31 + 0x30)) * 0x40 +
                        *(longlong *)(pFVar31 + 0x20)) +
                      (uVar4 % *(ulonglong *)(pFVar31 + 0x30)) * 8);
        iVar10 = (**(code **)local_4190)
                           (*(undefined8 *)&local_4190->field_0x8,local_4218,&local_4148,local_4188)
        ;
        if (iVar10 == 1) {
          return;
        }
        lVar19 = lVar19 + -0x20;
      } while (0 < (longlong)uVar33);
      return;
    }
    dVar1 = pFVar20->Time;
    if (0.0 <= dVar1) {
      local_4240 = (double *)CONCAT44(local_4240._4_4_,iVar10 + 1);
    }
    else {
      if (iVar10 == 0) {
        local_4220[0] = 0;
        local_4248 = uVar15 - 1;
        local_4158 = CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar36,SUB84(dVar1,0) ^ uVar35);
        iVar10 = (**(code **)local_4190)
                           (*(undefined8 *)&local_4190->field_0x8,local_4220,&local_4158,pFVar17);
        uVar15 = local_4248;
        if (iVar10 == 1) {
          return;
        }
      }
      else {
        local_4240 = (double *)CONCAT44(local_4240._4_4_,iVar10 + -1);
      }
      if (pFVar17 == pFVar32) {
        if (local_4210 == 0) {
          local_41c8.CurrentItemIndex = local_4200->TotalItemCount;
          pFVar32 = (FTimingProfilerEvent *)0x0;
          pFVar17 = (FTimingProfilerEvent *)0x0;
          local_41c8.CurrentItem = (FTimingProfilerEvent *)0x0;
          local_41c8.CurrentPageFirstItem = (FTimingProfilerEvent *)0x0;
          local_41c8.CurrentPageLastItem = (FTimingProfilerEvent *)0x0;
        }
        else {
          local_4210 = local_4210 - 1;
          pFVar32 = local_4200->FirstPage[local_4210].Items;
          if (pFVar32 == (FTimingProfilerEvent *)0x0) {
            pFVar17 = (FTimingProfilerEvent *)0x0;
          }
          else {
            pFVar17 = pFVar32 + (local_4200->FirstPage[local_4210].Count - 1);
          }
          local_41c8.CurrentItemIndex =
               ((longlong)pFVar17 - (longlong)pFVar32 >> 2) + local_4210 * local_4200->PageSize;
          local_41c8.CurrentPageIndex = local_4210;
          local_41c8.CurrentPageFirstItem = pFVar32;
          local_41c8.CurrentPageLastItem = pFVar17;
          local_41c8.CurrentItem = pFVar17;
        }
      }
      else {
        local_41c8.CurrentItemIndex = local_41c8.CurrentItemIndex - 1;
        pFVar17 = pFVar17 + -1;
        local_41c8.CurrentItem = pFVar17;
      }
    }
    uVar34 = uVar18;
    if (pFVar21 == pFVar30) {
      if (uVar18 == 0) {
        pFVar30 = (FEventScopeEntry *)0x0;
        pFVar21 = (FEventScopeEntry *)0x0;
        local_41f8.CurrentPageFirstItem = (FEventScopeEntry *)0x0;
        local_41f8.CurrentPageLastItem = (FEventScopeEntry *)0x0;
        pFVar20 = (FEventScopeEntry *)0x0;
      }
      else {
        local_41f8.CurrentPageIndex = uVar18 - 1;
        pFVar24 = (local_41f8.Outer)->FirstPage + local_41f8.CurrentPageIndex;
        pFVar30 = pFVar24->Items;
        if (pFVar30 == (FEventScopeEntry *)0x0) {
          pFVar21 = (FEventScopeEntry *)0x0;
        }
        else {
          pFVar21 = pFVar30 + (pFVar24->Count - 1);
        }
        pFVar20 = pFVar21;
        uVar34 = local_41f8.CurrentPageIndex;
        if (pFVar24 == (FEventScopeEntryPage *)0x0) {
          pFVar20 = (FEventScopeEntry *)0x0;
        }
      }
    }
    else {
      pFVar21 = pFVar21 + -1;
      pFVar20 = pFVar21;
    }
    if ((int)uVar15 < 1) break;
    uVar23 = uVar18;
    uVar18 = uVar34;
    iVar10 = (int)local_4240;
  }
  return;
}

// EnumerateEventsDownSampled @ 14d4565d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateEventsDownSampled
          (TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this,double param_1,double param_2,double param_3,
          TFunctionRef<TraceServices::EEventEnumerate___cdecl(double,double,unsigned_int,TraceServices::FLoadTimeProfilerCpuEvent_const_&)>
          *param_4)

{
  undefined1 auStack_2098 [32];
  code **local_2078;
  undefined4 local_2068 [2];
  void *local_2060;
  undefined8 local_2058;
  code *local_2050;
  undefined1 **local_2048;
  undefined1 *local_2040;
  void **local_2038;
  undefined4 *local_2030;
  undefined8 local_2028;
  undefined8 local_2020;
  undefined1 local_2018 [8192];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x14d4565da;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2098;
  local_2068[0] = 0;
  local_2060 = (void *)0x0;
  local_2058 = 0;
  local_2040 = local_2018;
  local_2038 = &local_2060;
  local_2030 = local_2068;
  local_2028 = *(undefined8 *)param_4;
  local_2020 = *(undefined8 *)&param_4->field_0x8;
  local_2078 = &local_2050;
  local_2048 = &local_2040;
  local_2050 = UE::Core::Private::Function::
               TFunctionRefCaller<`TraceServices::TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateEventsDownSampled'::__l2::<lambda_1>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FLoadTimeProfilerCpuEvent_const_&>
               ::Call;
  (**(code **)(this->_padding_ + 0x38))();
  if (local_2060 != (void *)0x0) {
    FMemory::Free(local_2060);
  }
  return;
}

// EnumerateEventsDownSampled @ 14d456690

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateEventsDownSampled
          (TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this,double param_1,double param_2,double param_3,
          TFunctionRef<TraceServices::EEventEnumerate___cdecl(bool,double,TraceServices::FLoadTimeProfilerCpuEvent_const_&)>
          *param_4)

{
  double *pdVar1;
  longlong lVar2;
  FEventStackEntry *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  FPackageExportInfo *pFVar6;
  ulong64 uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  int iVar11;
  double *pdVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  uint uVar17;
  longlong lVar18;
  FEventScopeEntry *pFVar19;
  FEventScopeEntry *pFVar20;
  ulong64 uVar21;
  ulong64 uVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  FLoadTimeProfilerCpuEvent *pFVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent> *pTVar29;
  longlong lVar30;
  longlong lVar31;
  FEventScopeEntry *pFVar32;
  FEventScopeEntryPage *pFVar33;
  double dVar34;
  uint uVar35;
  undefined1 auStack_81d8 [32];
  ulonglong local_81b8;
  longlong local_81b0;
  ulonglong local_81a8;
  undefined1 local_81a0 [8];
  undefined1 local_8198 [8];
  undefined1 local_8190 [8];
  undefined1 local_8188 [8];
  undefined1 local_8180 [8];
  undefined1 local_8178 [8];
  TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
  local_8170;
  undefined8 *local_8140;
  FLoadTimeProfilerCpuEvent *local_8138;
  TFunctionRef<TraceServices::EEventEnumerate___cdecl(bool,double,TraceServices::FLoadTimeProfilerCpuEvent_const_&)>
  *local_8130;
  TPagedArrayIterator<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
  local_8128;
  longlong local_80f8;
  double *local_80f0;
  FScriptContainerElement *local_80e8;
  double local_80e0;
  undefined8 local_80d8;
  double local_80d0;
  double local_80c8;
  double local_80c0;
  undefined8 local_80b8;
  double local_80b0 [6];
  double local_8080 [10];
  ulonglong auStack_8030 [4083];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_81d8;
  local_8130 = param_4;
  uVar17 = 5;
  lVar23 = 0x8c2d0;
  do {
    iVar11 = (this->DetailLevels).ArrayNum;
    if (iVar11 <= (int)uVar17) {
      local_81b8 = (ulonglong)uVar17;
      local_81b0 = (longlong)iVar11;
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (*(double *)((this->DetailLevels).AllocatorInstance.Data + lVar23) <= param_3) break;
    uVar17 = uVar17 - 1;
    lVar23 = lVar23 + -0x1c090;
  } while (0 < (int)uVar17);
  iVar11 = (this->DetailLevels).ArrayNum;
  uVar35 = 0;
  if ((int)uVar17 < iVar11) {
    uVar35 = ~uVar17 >> 0x1f;
  }
  if (uVar35 == 0) {
    local_81b8 = (ulonglong)(int)uVar17;
    local_81b0 = (longlong)iVar11;
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar24 = (this->DetailLevels).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x1c090;
  if (*(longlong *)(pFVar24 + 0x38) == 0) {
    return;
  }
  lVar23 = *(longlong *)(pFVar24 + 0x20);
  uVar26 = (longlong)*(int *)(pFVar24 + 0x18);
  lVar30 = 0;
  while (lVar31 = lVar30, uVar26 != 0) {
    uVar27 = uVar26 >> 1;
    uVar17 = (uint)uVar26;
    uVar26 = uVar27;
    lVar30 = uVar27 + lVar31 + (ulonglong)(uVar17 & 1);
    if (param_1 < *(double *)((uVar27 + lVar31) * 0x40 + 0x10 + lVar23)) {
      lVar30 = lVar31;
    }
  }
  lVar30 = 0;
  local_80f8 = lVar31 + -1;
  if (lVar31 == 0) {
    local_80f8 = 0;
  }
  lVar31 = local_80f8 * 0x40;
  if (param_2 < *(double *)(lVar31 + 0x10 + lVar23)) {
    return;
  }
  pdVar12 = (double *)(lVar31 + 0x18 + lVar23);
  if (*pdVar12 <= param_1 && param_1 != *pdVar12) {
    return;
  }
  pdVar12 = local_80b0 + 5;
  lVar13 = 0x400;
  do {
    pdVar12[-1] = 0.0;
    *pdVar12 = 0.0;
    *(undefined4 *)(pdVar12 + 1) = 3;
    pdVar12 = pdVar12 + 4;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  uVar26 = (ulonglong)*(ushort *)(lVar31 + 0x38 + lVar23);
  uVar17 = (uint)__xmm_80000000000000008000000000000000;
  uVar35 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  lVar13 = lVar30;
  if (3 < uVar26) {
    pdVar12 = local_8080 + 2;
    lVar18 = (uVar26 - 4 >> 2) + 1;
    lVar13 = lVar18 * 4;
    do {
      lVar2 = *(longlong *)(lVar31 + 0x30 + lVar23);
      uVar27 = *(ulonglong *)(lVar30 + lVar2);
      dVar34 = *(double *)
                (*(longlong *)
                  ((uVar27 / *(ulonglong *)(pFVar24 + 0x30)) * 0x40 + *(longlong *)(pFVar24 + 0x20))
                + (uVar27 % *(ulonglong *)(pFVar24 + 0x30)) * 8);
      if (dVar34 < 0.0) {
        dVar34 = (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) ^ uVar35,
                                  SUB84(dVar34,0) ^ uVar17);
      }
      *(double *)((longlong)local_80b0 + lVar30 + 0x18U) = dVar34;
      uVar27 = *(ulonglong *)(lVar30 + 8 + lVar2);
      uVar15 = uVar27 % *(ulonglong *)(pFVar24 + 0x68);
      lVar2 = *(longlong *)
               (*(longlong *)(pFVar24 + 0x58) + (uVar27 / *(ulonglong *)(pFVar24 + 0x68)) * 0x10);
      pdVar1 = (double *)(lVar2 + uVar15 * 0x18);
      dVar34 = pdVar1[1];
      pdVar12[-4] = *pdVar1;
      pdVar12[-3] = dVar34;
      pdVar12[-2] = *(double *)(lVar2 + 0x10 + uVar15 * 0x18);
      lVar2 = *(longlong *)(lVar31 + 0x30 + lVar23);
      uVar27 = *(ulonglong *)(lVar30 + 0x20 + lVar2);
      dVar34 = *(double *)
                (*(longlong *)
                  ((uVar27 / *(ulonglong *)(pFVar24 + 0x30)) * 0x40 + *(longlong *)(pFVar24 + 0x20))
                + (uVar27 % *(ulonglong *)(pFVar24 + 0x30)) * 8);
      if (dVar34 < 0.0) {
        dVar34 = (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) ^ uVar35,
                                  SUB84(dVar34,0) ^ uVar17);
      }
      *(double *)((longlong)local_8080 + lVar30 + 8) = dVar34;
      uVar27 = *(ulonglong *)(lVar30 + 0x28 + lVar2);
      uVar15 = uVar27 % *(ulonglong *)(pFVar24 + 0x68);
      puVar28 = (undefined8 *)((longlong)local_8080 + lVar30 + 0x10);
      lVar2 = *(longlong *)
               (*(longlong *)(pFVar24 + 0x58) + (uVar27 / *(ulonglong *)(pFVar24 + 0x68)) * 0x10);
      puVar16 = (undefined8 *)(lVar2 + uVar15 * 0x18);
      uVar5 = puVar16[1];
      *puVar28 = *puVar16;
      *(undefined8 *)((longlong)local_8080 + lVar30 + 0x18) = uVar5;
      *(undefined8 *)((longlong)local_8080 + lVar30 + 0x20) =
           *(undefined8 *)(lVar2 + 0x10 + uVar15 * 0x18);
      lVar2 = *(longlong *)(lVar31 + 0x30 + lVar23);
      uVar27 = *(ulonglong *)((longlong)puVar28 + lVar2 + -(longlong)(local_8080 + 2) + 0x40);
      dVar34 = *(double *)
                (*(longlong *)
                  ((uVar27 / *(ulonglong *)(pFVar24 + 0x30)) * 0x40 + *(longlong *)(pFVar24 + 0x20))
                + (uVar27 % *(ulonglong *)(pFVar24 + 0x30)) * 8);
      if (dVar34 < 0.0) {
        dVar34 = (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) ^ uVar35,
                                  SUB84(dVar34,0) ^ uVar17);
      }
      *(double *)((longlong)local_8080 + lVar30 + 0x28) = dVar34;
      uVar27 = *(ulonglong *)((longlong)puVar28 + lVar2 + -(longlong)(local_8080 + 2) + 0x48);
      uVar15 = uVar27 % *(ulonglong *)(pFVar24 + 0x68);
      lVar2 = *(longlong *)
               (*(longlong *)(pFVar24 + 0x58) + (uVar27 / *(ulonglong *)(pFVar24 + 0x68)) * 0x10);
      puVar16 = (undefined8 *)(lVar2 + uVar15 * 0x18);
      uVar5 = puVar16[1];
      *(undefined8 *)((longlong)local_8080 + lVar30 + 0x30) = *puVar16;
      *(undefined8 *)((longlong)local_8080 + lVar30 + 0x38) = uVar5;
      *(undefined8 *)((longlong)local_8080 + lVar30 + 0x40) =
           *(undefined8 *)(lVar2 + 0x10 + uVar15 * 0x18);
      lVar2 = *(longlong *)(lVar31 + 0x30 + lVar23);
      uVar27 = *(ulonglong *)(lVar2 + 0x60 + lVar30);
      dVar34 = *(double *)
                (*(longlong *)
                  ((uVar27 / *(ulonglong *)(pFVar24 + 0x30)) * 0x40 + *(longlong *)(pFVar24 + 0x20))
                + (uVar27 % *(ulonglong *)(pFVar24 + 0x30)) * 8);
      if (dVar34 < 0.0) {
        dVar34 = (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) ^ uVar35,
                                  SUB84(dVar34,0) ^ uVar17);
      }
      *(double *)((longlong)local_8080 + lVar30 + 0x48) = dVar34;
      pdVar12 = pdVar12 + 0x10;
      uVar27 = *(ulonglong *)(lVar2 + 0x68 + lVar30);
      uVar15 = uVar27 % *(ulonglong *)(pFVar24 + 0x68);
      lVar2 = *(longlong *)
               (*(longlong *)(pFVar24 + 0x58) + (uVar27 / *(ulonglong *)(pFVar24 + 0x68)) * 0x10);
      puVar16 = (undefined8 *)(lVar2 + uVar15 * 0x18);
      uVar5 = puVar16[1];
      *(undefined8 *)((longlong)auStack_8030 + lVar30) = *puVar16;
      *(undefined8 *)((longlong)auStack_8030 + lVar30 + 8) = uVar5;
      *(undefined8 *)((longlong)auStack_8030 + lVar30 + 0x10) =
           *(undefined8 *)(lVar2 + 0x10 + uVar15 * 0x18);
      lVar30 = lVar30 + 0x80;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  if (lVar13 < (longlong)uVar26) {
    lVar30 = lVar13 << 5;
    lVar13 = uVar26 - lVar13;
    do {
      lVar18 = *(longlong *)(lVar31 + 0x30 + lVar23);
      uVar27 = *(ulonglong *)(lVar30 + lVar18);
      dVar34 = *(double *)
                (*(longlong *)
                  ((uVar27 / *(ulonglong *)(pFVar24 + 0x30)) * 0x40 + *(longlong *)(pFVar24 + 0x20))
                + (uVar27 % *(ulonglong *)(pFVar24 + 0x30)) * 8);
      if (dVar34 < 0.0) {
        dVar34 = (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) ^ uVar35,
                                  SUB84(dVar34,0) ^ uVar17);
      }
      *(double *)((longlong)local_80b0 + lVar30 + 0x18U) = dVar34;
      uVar27 = *(ulonglong *)(lVar30 + 8 + lVar18);
      uVar15 = uVar27 % *(ulonglong *)(pFVar24 + 0x68);
      lVar18 = *(longlong *)
                (*(longlong *)(pFVar24 + 0x58) + (uVar27 / *(ulonglong *)(pFVar24 + 0x68)) * 0x10);
      puVar16 = (undefined8 *)(lVar18 + uVar15 * 0x18);
      uVar5 = puVar16[1];
      *(undefined8 *)((longlong)local_80b0 + lVar30 + 0x20U) = *puVar16;
      *(undefined8 *)((longlong)local_8080 + lVar30 + -8) = uVar5;
      *(undefined8 *)((longlong)local_8080 + lVar30) =
           *(undefined8 *)(lVar18 + 0x10 + uVar15 * 0x18);
      lVar30 = lVar30 + 0x20;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  local_81a8 = uVar26;
  local_80e8 = pFVar24;
  TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>::
  TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
            (&local_8170,
             (TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage> *)
             (pFVar24 + 8),local_80f8 * *(longlong *)(pFVar24 + 0x30));
  pFVar19 = local_8170.CurrentItem;
  TPagedArray<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
  ::GetIteratorFromItem
            ((TPagedArray<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
              *)(pFVar24 + 0x40),&local_8128,*(ulong64 *)(lVar31 + 0x20 + lVar23));
  uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar8 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_8138 = local_8128.CurrentItem;
  pFVar20 = pFVar19;
  uVar21 = local_8170.CurrentPageIndex;
  pFVar25 = local_8128.CurrentItem;
  pFVar32 = local_8170.CurrentPageLastItem;
  if (pFVar19 != (FEventScopeEntry *)0x0) {
    local_8140 = local_80b0 + uVar26 * 4 + 3;
    uVar27 = uVar26;
    do {
      dVar34 = pFVar19->Time;
      pFVar20 = pFVar19;
      if (param_1 <=
          (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) & uVar9,SUB84(dVar34,0) & uVar8))
      break;
      if (0.0 <= dVar34) {
        if (((longlong)uVar27 < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentStackDepth > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                                ,0x133,L""), uVar27 = local_81a8, bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_81a8 = uVar27 - 1;
        uVar26 = (ulonglong)((int)uVar26 - 1);
        local_8140 = local_8140 + -4;
      }
      else {
        if ((0x3ff < (longlong)uVar27) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentStackDepth < SettingsType::MaxDepth",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                                ,299,L""), uVar27 = local_81a8, bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_81a8 = uVar27 + 1;
        puVar16 = local_8140 + 4;
        uVar26 = (ulonglong)((int)uVar26 + 1);
        pFVar6 = local_8138->Export;
        local_8140[1] = local_8138->Package;
        local_8140[2] = pFVar6;
        local_8140[3] = *(undefined8 *)&local_8138->EventType;
        *local_8140 = CONCAT44((uint)((ulonglong)pFVar19->Time >> 0x20) ^ uVar35,
                               SUB84(pFVar19->Time,0) ^ uVar17);
        local_8140 = puVar16;
        if (pFVar25 == local_8128.CurrentPageLastItem) {
          if (local_8128.CurrentPageIndex ==
              (longlong)(((local_8128.Outer)->PagesArray).ArrayNum + -1)) {
            local_8128.CurrentItemIndex = (local_8128.Outer)->TotalItemCount;
            local_8128.CurrentPageFirstItem = (FLoadTimeProfilerCpuEvent *)0x0;
            pFVar25 = (FLoadTimeProfilerCpuEvent *)0x0;
            local_8128.CurrentPageLastItem = (FLoadTimeProfilerCpuEvent *)0x0;
            local_8128.CurrentItem = (FLoadTimeProfilerCpuEvent *)0x0;
            local_8138 = (FLoadTimeProfilerCpuEvent *)0x0;
          }
          else {
            local_8128.CurrentPageIndex = local_8128.CurrentPageIndex + 1;
            pTVar29 = (local_8128.Outer)->FirstPage + local_8128.CurrentPageIndex;
            pFVar25 = pTVar29->Items;
            if (pFVar25 == (FLoadTimeProfilerCpuEvent *)0x0) {
              local_8128.CurrentPageLastItem = (FLoadTimeProfilerCpuEvent *)0x0;
            }
            else {
              local_8128.CurrentPageLastItem = pFVar25 + (pTVar29->Count - 1);
            }
            local_8128.CurrentItemIndex = local_8128.CurrentPageIndex * (local_8128.Outer)->PageSize
            ;
            local_8138 = pFVar25;
            local_8128.CurrentPageFirstItem = pFVar25;
            local_8128.CurrentItem = pFVar25;
            if (pTVar29 == (TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent> *)0x0) {
              local_8138 = (FLoadTimeProfilerCpuEvent *)0x0;
            }
          }
        }
        else {
          local_8128.CurrentItemIndex = local_8128.CurrentItemIndex + 1;
          pFVar25 = pFVar25 + 1;
          local_8138 = pFVar25;
          local_8128.CurrentItem = pFVar25;
        }
      }
      if (pFVar19 == pFVar32) {
        if (uVar21 == (longlong)(((local_8170.Outer)->PagesArray).ArrayNum + -1)) {
          local_8170.CurrentItemIndex = (local_8170.Outer)->TotalItemCount;
          local_8170.CurrentPageLastItem = (FEventScopeEntry *)0x0;
          local_8170.CurrentItem = (FEventScopeEntry *)0x0;
        }
        else {
          uVar21 = uVar21 + 1;
          pFVar33 = (local_8170.Outer)->FirstPage + uVar21;
          pFVar19 = pFVar33->Items;
          if (pFVar19 == (FEventScopeEntry *)0x0) {
            pFVar32 = (FEventScopeEntry *)0x0;
          }
          else {
            pFVar32 = pFVar19 + (pFVar33->Count - 1);
          }
          local_8170.CurrentItemIndex = uVar21 * (local_8170.Outer)->PageSize;
          local_8170.CurrentPageIndex = uVar21;
          local_8170.CurrentPageFirstItem = pFVar19;
          local_8170.CurrentPageLastItem = pFVar32;
          local_8170.CurrentItem = pFVar19;
          if (pFVar33 != (FEventScopeEntryPage *)0x0) goto LAB_14d456db6;
        }
        pFVar19 = (FEventScopeEntry *)0x0;
        pFVar20 = local_8170.CurrentItem;
        pFVar32 = local_8170.CurrentPageLastItem;
        local_8170.CurrentPageFirstItem = local_8170.CurrentItem;
        break;
      }
      local_8170.CurrentItemIndex = local_8170.CurrentItemIndex + 1;
      pFVar19 = pFVar19 + 1;
LAB_14d456db6:
      uVar27 = local_81a8;
      pFVar20 = pFVar19;
      local_8170.CurrentItem = pFVar19;
    } while (pFVar19 != (FEventScopeEntry *)0x0);
  }
  iVar11 = (int)uVar26;
  if ((iVar11 == 1) && (param_2 < local_80b0[3])) {
    return;
  }
  iVar14 = 0;
  local_81a8 = (ulonglong)iVar11;
  local_8140 = (undefined8 *)((ulonglong)local_8140 & 0xffffffff00000000);
  if (0 < iVar11) {
    local_80f0 = local_80b0 + 3;
    local_80f8 = 0;
    do {
      local_80e0 = *local_80f0;
      local_81a0[0] = 1;
      iVar11 = (**(code **)local_8130)
                         (*(undefined8 *)&local_8130->field_0x8,local_81a0,&local_80e0,
                          local_80b0 + (longlong)iVar14 * 4U + 4);
      if (iVar11 == 1) {
        return;
      }
      iVar14 = (int)local_8140 + 1;
      local_80f8 = local_80f8 + 1;
      local_80f0 = local_80f0 + 4;
      local_8140 = (undefined8 *)CONCAT44(local_8140._4_4_,iVar14);
    } while (local_80f8 < (longlong)local_81a8);
  }
  if (pFVar19 != (FEventScopeEntry *)0x0) {
    local_81a8 = local_81a8 << 5;
    do {
      dVar34 = pFVar19->Time;
      if (param_2 < (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) & uVar9,
                                     SUB84(dVar34,0) & uVar8)) break;
      iVar11 = (int)uVar26;
      if (0.0 <= dVar34) {
        if ((iVar11 < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentStackDepth > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                                ,0x154,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_80d0 = pFVar19->Time;
        local_81a8 = local_81a8 + -0x20;
        uVar26 = (ulonglong)(iVar11 - 1U);
        local_8190[0] = 0;
        iVar11 = (**(code **)local_8130)
                           (*(undefined8 *)&local_8130->field_0x8,local_8190,&local_80d0,
                            local_80b0 + (longlong)(int)(iVar11 - 1U) * 4U + 4);
        if (iVar11 == 1) {
          return;
        }
      }
      else {
        if ((0x3ff < iVar11) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentStackDepth < SettingsType::MaxDepth",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                                ,0x149,L""), bVar10)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_8198[0] = 1;
        uVar26 = (ulonglong)(iVar11 + 1);
        pFVar6 = local_8138->Export;
        *(FPackageInfo **)((longlong)local_80b0 + local_81a8 + 0x20) = local_8138->Package;
        *(FPackageExportInfo **)((longlong)local_8080 + local_81a8 + -8) = pFVar6;
        *(undefined8 *)((longlong)local_8080 + local_81a8) = *(undefined8 *)&local_8138->EventType;
        local_80d8 = CONCAT44((uint)((ulonglong)pFVar19->Time >> 0x20) ^ uVar35,
                              SUB84(pFVar19->Time,0) ^ uVar17);
        local_81a8 = local_81a8 + 0x20;
        iVar11 = (**(code **)local_8130)
                           (*(undefined8 *)&local_8130->field_0x8,local_8198,&local_80d8);
        if (iVar11 == 1) {
          return;
        }
        if (pFVar25 == local_8128.CurrentPageLastItem) {
          if (local_8128.CurrentPageIndex ==
              (longlong)(((local_8128.Outer)->PagesArray).ArrayNum + -1)) {
            local_8128.CurrentItemIndex = (local_8128.Outer)->TotalItemCount;
            local_8128.CurrentPageFirstItem = (FLoadTimeProfilerCpuEvent *)0x0;
            pFVar25 = (FLoadTimeProfilerCpuEvent *)0x0;
            local_8128.CurrentPageLastItem = (FLoadTimeProfilerCpuEvent *)0x0;
            local_8128.CurrentItem = (FLoadTimeProfilerCpuEvent *)0x0;
            local_8138 = (FLoadTimeProfilerCpuEvent *)0x0;
          }
          else {
            local_8128.CurrentPageIndex = local_8128.CurrentPageIndex + 1;
            pTVar29 = (local_8128.Outer)->FirstPage + local_8128.CurrentPageIndex;
            pFVar25 = pTVar29->Items;
            if (pFVar25 == (FLoadTimeProfilerCpuEvent *)0x0) {
              local_8128.CurrentPageLastItem = (FLoadTimeProfilerCpuEvent *)0x0;
            }
            else {
              local_8128.CurrentPageLastItem = pFVar25 + (pTVar29->Count - 1);
            }
            local_8128.CurrentItemIndex = local_8128.CurrentPageIndex * (local_8128.Outer)->PageSize
            ;
            local_8138 = pFVar25;
            local_8128.CurrentPageFirstItem = pFVar25;
            local_8128.CurrentItem = pFVar25;
            if (pTVar29 == (TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent> *)0x0) {
              local_8138 = (FLoadTimeProfilerCpuEvent *)0x0;
            }
          }
        }
        else {
          local_8128.CurrentItemIndex = local_8128.CurrentItemIndex + 1;
          pFVar25 = pFVar25 + 1;
          local_8138 = pFVar25;
          local_8128.CurrentItem = pFVar25;
        }
      }
      if (pFVar20 == pFVar32) {
        if (uVar21 == (longlong)(((local_8170.Outer)->PagesArray).ArrayNum + -1)) {
          local_8170.CurrentItemIndex = (local_8170.Outer)->TotalItemCount;
          local_8170.CurrentPageLastItem = (FEventScopeEntry *)0x0;
          local_8170.CurrentItem = (FEventScopeEntry *)0x0;
        }
        else {
          uVar21 = uVar21 + 1;
          pFVar33 = (local_8170.Outer)->FirstPage + uVar21;
          pFVar20 = pFVar33->Items;
          if (pFVar20 == (FEventScopeEntry *)0x0) {
            pFVar32 = (FEventScopeEntry *)0x0;
          }
          else {
            pFVar32 = pFVar20 + (pFVar33->Count - 1);
          }
          local_8170.CurrentItemIndex = uVar21 * (local_8170.Outer)->PageSize;
          local_8170.CurrentPageIndex = uVar21;
          local_8170.CurrentPageFirstItem = pFVar20;
          local_8170.CurrentPageLastItem = pFVar32;
          local_8170.CurrentItem = pFVar20;
          if (pFVar33 != (FEventScopeEntryPage *)0x0) goto LAB_14d457136;
        }
        pFVar19 = (FEventScopeEntry *)0x0;
        pFVar20 = local_8170.CurrentItem;
        pFVar32 = local_8170.CurrentPageLastItem;
        local_8170.CurrentPageFirstItem = local_8170.CurrentItem;
        break;
      }
      local_8170.CurrentItemIndex = local_8170.CurrentItemIndex + 1;
      pFVar20 = pFVar20 + 1;
LAB_14d457136:
      pFVar19 = pFVar20;
      local_8170.CurrentItem = pFVar20;
    } while (pFVar20 != (FEventScopeEntry *)0x0);
  }
  iVar11 = 0;
  iVar14 = (int)uVar26;
  uVar7 = uVar21;
  pFVar24 = local_80e8;
  dVar34 = local_80c8;
  while( true ) {
    uVar22 = uVar21;
    if (iVar14 < 1) {
      return;
    }
    local_80e8 = pFVar24;
    local_80c8 = dVar34;
    if (pFVar19 == (FEventScopeEntry *)0x0) goto LAB_14d4573f0;
    if (uVar22 != uVar7) break;
    local_80c8 = pFVar19->Time;
    uVar27 = uVar26;
    if (0.0 <= local_80c8) {
      if (iVar11 == 0) {
        uVar27 = (ulonglong)((int)uVar26 - 1);
        local_8188[0] = 0;
        iVar14 = (**(code **)local_8130)
                           (*(undefined8 *)&local_8130->field_0x8,local_8188,&local_80c8,
                            local_80b0 + uVar26 * 4);
        iVar11 = 0;
        if (iVar14 == 1) {
          return;
        }
      }
      else {
        iVar11 = iVar11 + -1;
        local_80c8 = dVar34;
      }
    }
    else {
      iVar11 = iVar11 + 1;
      local_80c8 = dVar34;
    }
    uVar21 = uVar22;
    if (pFVar20 == pFVar32) {
      if (uVar22 == (longlong)(((local_8170.Outer)->PagesArray).ArrayNum + -1)) {
        local_8170.CurrentItemIndex = (local_8170.Outer)->TotalItemCount;
        local_8170.CurrentPageFirstItem = (FEventScopeEntry *)0x0;
        local_8170.CurrentPageLastItem = (FEventScopeEntry *)0x0;
        local_8170.CurrentItem = (FEventScopeEntry *)0x0;
        pFVar32 = (FEventScopeEntry *)0x0;
        pFVar19 = (FEventScopeEntry *)0x0;
      }
      else {
        local_8170.CurrentPageIndex = uVar22 + 1;
        pFVar33 = (local_8170.Outer)->FirstPage + local_8170.CurrentPageIndex;
        local_8170.CurrentPageFirstItem = pFVar33->Items;
        if (local_8170.CurrentPageFirstItem == (FEventScopeEntry *)0x0) {
          pFVar32 = (FEventScopeEntry *)0x0;
        }
        else {
          pFVar32 = local_8170.CurrentPageFirstItem + (pFVar33->Count - 1);
        }
        local_8170.CurrentItemIndex = local_8170.CurrentPageIndex * (local_8170.Outer)->PageSize;
        uVar21 = local_8170.CurrentPageIndex;
        pFVar19 = local_8170.CurrentPageFirstItem;
        local_8170.CurrentPageLastItem = pFVar32;
        local_8170.CurrentItem = local_8170.CurrentPageFirstItem;
        if (pFVar33 == (FEventScopeEntryPage *)0x0) {
          pFVar19 = (FEventScopeEntry *)0x0;
          local_8170.CurrentItem = local_8170.CurrentPageFirstItem;
        }
      }
    }
    else {
      local_8170.CurrentItemIndex = local_8170.CurrentItemIndex + 1;
      pFVar19 = pFVar20 + 1;
      local_8170.CurrentItem = pFVar19;
    }
    iVar14 = (int)uVar27;
    pFVar20 = local_8170.CurrentItem;
    uVar7 = uVar22;
    uVar26 = uVar27;
    pFVar24 = local_80e8;
    dVar34 = local_80c8;
  }
  pFVar33 = (local_8170.Outer)->FirstPage + uVar22;
  uVar27 = uVar26;
  do {
    if (((int)(uint)pFVar33->InitialStackCount < (int)uVar27) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("CurrentStackDepth <= CurrentScopePage->InitialStackCount",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                            ,0x185,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (0 < (longlong)uVar26) {
      lVar23 = uVar26 << 5;
      do {
        pFVar3 = pFVar33->InitialStack;
        if (*(double *)(lVar23 + -8 + (longlong)pFVar3) <= 0.0) break;
        uVar26 = uVar26 - 1;
        uVar27 = (ulonglong)((int)uVar27 - 1);
        lVar23 = uVar26 * 0x20;
        uVar15 = pFVar3[uVar26].EventIndex % *(ulonglong *)(pFVar24 + 0x68);
        lVar30 = *(longlong *)
                  (*(longlong *)(pFVar24 + 0x58) +
                  (pFVar3[uVar26].EventIndex / *(ulonglong *)(pFVar24 + 0x68)) * 0x10);
        pdVar12 = (double *)(lVar30 + uVar15 * 0x18);
        local_80b0[0] = *pdVar12;
        local_80b0[1] = pdVar12[1];
        local_80b0[2] = *(double *)(lVar30 + 0x10 + uVar15 * 0x18);
        local_80c0 = pFVar3[uVar26].EndTime;
        local_8180[0] = 0;
        iVar11 = (**(code **)local_8130)
                           (*(undefined8 *)&local_8130->field_0x8,local_8180,&local_80c0,local_80b0)
        ;
        if (iVar11 == 1) {
          return;
        }
      } while (0 < (longlong)uVar26);
    }
    if (uVar22 == (longlong)(((local_8170.Outer)->PagesArray).ArrayNum + -1)) break;
    uVar22 = uVar22 + 1;
    pFVar33 = (local_8170.Outer)->FirstPage + uVar22;
    local_8170.CurrentPageFirstItem = pFVar33->Items;
    if (local_8170.CurrentPageFirstItem == (FEventScopeEntry *)0x0) {
      local_8170.CurrentPageLastItem = (FEventScopeEntry *)0x0;
    }
    else {
      local_8170.CurrentPageLastItem = local_8170.CurrentPageFirstItem + (pFVar33->Count - 1);
    }
    local_8170.CurrentItemIndex = uVar22 * (local_8170.Outer)->PageSize;
    local_8170.CurrentPageIndex = uVar22;
    local_8170.CurrentItem = local_8170.CurrentPageFirstItem;
  } while (pFVar33 != (FEventScopeEntryPage *)0x0);
  uVar17 = (uint)uVar27;
  uVar26 = uVar27;
  do {
    if ((int)uVar17 < 1) {
      return;
    }
LAB_14d4573f0:
    local_80b8 = *(undefined8 *)(pFVar24 + 0x78);
    uVar17 = (int)uVar26 - 1;
    local_8178[0] = 0;
    iVar11 = (**(code **)local_8130)
                       (*(undefined8 *)&local_8130->field_0x8,local_8178,&local_80b8,
                        local_80b0 + uVar26 * 4);
    uVar26 = (ulonglong)uVar17;
  } while (iVar11 != 1);
  return;
}

// EnumerateEventsDownSampled @ 14d4574a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateEventsDownSampled
          (TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this,double param_1,double param_2,double param_3,
          TFunctionRef<TraceServices::EEventEnumerate___cdecl(double,double,unsigned_int,TraceServices::FTimingProfilerEvent_const_&)>
          *param_4)

{
  undefined1 auStack_2098 [32];
  code **local_2078;
  undefined4 local_2068 [2];
  void *local_2060;
  undefined8 local_2058;
  code *local_2050;
  undefined1 **local_2048;
  undefined1 *local_2040;
  void **local_2038;
  undefined4 *local_2030;
  undefined8 local_2028;
  undefined8 local_2020;
  undefined1 local_2018 [8192];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x14d4574aa;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2098;
  local_2068[0] = 0;
  local_2060 = (void *)0x0;
  local_2058 = 0;
  local_2040 = local_2018;
  local_2038 = &local_2060;
  local_2030 = local_2068;
  local_2028 = *(undefined8 *)param_4;
  local_2020 = *(undefined8 *)&param_4->field_0x8;
  local_2078 = &local_2050;
  local_2048 = &local_2040;
  local_2050 = UE::Core::Private::Function::
               TFunctionRefCaller<`TraceServices::TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>::EnumerateEventsDownSampled'::__l2::<lambda_1>,enum_TraceServices::EEventEnumerate,bool,double,TraceServices::FTimingProfilerEvent_const_&>
               ::Call;
  (**(code **)(this->_padding_ + 0x38))();
  if (local_2060 != (void *)0x0) {
    FMemory::Free(local_2060);
  }
  return;
}

// EnumerateEventsDownSampled @ 14d457560

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateEventsDownSampled
          (TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this,double param_1,double param_2,double param_3,
          TFunctionRef<TraceServices::EEventEnumerate___cdecl(bool,double,TraceServices::FTimingProfilerEvent_const_&)>
          *param_4)

{
  longlong lVar1;
  FEventStackEntry *pFVar2;
  code *pcVar3;
  ulong64 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  double *pdVar10;
  int iVar11;
  uint uVar12;
  FEventScopeEntry *pFVar13;
  ulong64 uVar14;
  ulong64 uVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  FTimingProfilerEvent *pFVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined4 *puVar22;
  TPagedArrayPage<TraceServices::FTimingProfilerEvent> *pTVar23;
  longlong lVar24;
  FEventScopeEntry *pFVar25;
  longlong lVar26;
  longlong lVar27;
  FEventScopeEntry *pFVar28;
  FEventScopeEntryPage *pFVar29;
  double dVar30;
  uint uVar31;
  undefined1 auStack_41c8 [32];
  ulonglong local_41a8;
  longlong local_41a0;
  ulonglong local_4198;
  undefined1 local_4190 [8];
  undefined1 local_4188 [8];
  undefined1 local_4180 [8];
  undefined1 local_4178 [8];
  undefined1 local_4170 [8];
  undefined1 local_4168 [8];
  TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
  local_4160;
  double *local_4130;
  FTimingProfilerEvent *local_4128;
  TFunctionRef<TraceServices::EEventEnumerate___cdecl(bool,double,TraceServices::FTimingProfilerEvent_const_&)>
  *local_4120;
  TPagedArrayIterator<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
  local_4118;
  undefined4 local_40e8 [2];
  longlong local_40e0;
  double *local_40d8;
  FScriptContainerElement *local_40d0;
  double local_40c8;
  undefined8 local_40c0;
  double local_40b8;
  double local_40b0;
  double local_40a8;
  double local_40a0 [2];
  double local_4090 [2];
  undefined4 local_4080 [4090];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_41c8;
  local_4120 = param_4;
  uVar12 = 5;
  lVar16 = 0x782d0;
  do {
    iVar8 = (this->DetailLevels).ArrayNum;
    if (iVar8 <= (int)uVar12) {
      local_41a8 = (ulonglong)uVar12;
      local_41a0 = (longlong)iVar8;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(double *)((this->DetailLevels).AllocatorInstance.Data + lVar16) <= param_3) break;
    uVar12 = uVar12 - 1;
    lVar16 = lVar16 + -0x18090;
  } while (0 < (int)uVar12);
  iVar8 = (this->DetailLevels).ArrayNum;
  uVar31 = 0;
  if ((int)uVar12 < iVar8) {
    uVar31 = ~uVar12 >> 0x1f;
  }
  if (uVar31 == 0) {
    local_41a8 = (ulonglong)(int)uVar12;
    local_41a0 = (longlong)iVar8;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar17 = (this->DetailLevels).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x18090;
  if (*(longlong *)(pFVar17 + 0x38) == 0) {
    return;
  }
  lVar16 = *(longlong *)(pFVar17 + 0x20);
  uVar19 = (longlong)*(int *)(pFVar17 + 0x18);
  lVar26 = 0;
  while (lVar27 = lVar26, uVar19 != 0) {
    uVar20 = uVar19 >> 1;
    uVar12 = (uint)uVar19;
    uVar19 = uVar20;
    lVar26 = uVar20 + lVar27 + (ulonglong)(uVar12 & 1);
    if (param_1 < *(double *)((uVar20 + lVar27) * 0x40 + 0x10 + lVar16)) {
      lVar26 = lVar27;
    }
  }
  lVar26 = lVar27 + -1;
  if (lVar27 == 0) {
    lVar26 = 0;
  }
  lVar27 = lVar26 * 0x40;
  if (param_2 < *(double *)(lVar27 + 0x10 + lVar16)) {
    return;
  }
  pdVar10 = (double *)(lVar27 + 0x18 + lVar16);
  if (*pdVar10 <= param_1 && param_1 != *pdVar10) {
    return;
  }
  pdVar10 = local_4090;
  lVar9 = 0x400;
  do {
    *(undefined4 *)pdVar10 = 0xffffffff;
    pdVar10 = pdVar10 + 2;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  uVar19 = (ulonglong)*(ushort *)(lVar27 + 0x38 + lVar16);
  lVar9 = 0;
  uVar12 = (uint)__xmm_80000000000000008000000000000000;
  uVar31 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  if (3 < uVar19) {
    lVar21 = 0;
    puVar22 = local_4080;
    lVar24 = (uVar19 - 4 >> 2) + 1;
    lVar9 = lVar24 * 4;
    do {
      lVar1 = *(longlong *)(lVar27 + 0x30 + lVar16);
      uVar20 = *(ulonglong *)(lVar1 + lVar21);
      dVar30 = *(double *)
                (*(longlong *)
                  ((uVar20 / *(ulonglong *)(pFVar17 + 0x30)) * 0x40 + *(longlong *)(pFVar17 + 0x20))
                + (uVar20 % *(ulonglong *)(pFVar17 + 0x30)) * 8);
      if (dVar30 < 0.0) {
        dVar30 = (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) ^ uVar31,
                                  SUB84(dVar30,0) ^ uVar12);
      }
      *(double *)(puVar22 + -6) = dVar30;
      uVar20 = *(ulonglong *)(lVar1 + 8 + lVar21);
      puVar22[-4] = *(undefined4 *)
                     (*(longlong *)
                       (*(longlong *)(pFVar17 + 0x58) +
                       (uVar20 / *(ulonglong *)(pFVar17 + 0x68)) * 0x10) +
                     (uVar20 % *(ulonglong *)(pFVar17 + 0x68)) * 4);
      lVar1 = *(longlong *)(lVar27 + 0x30 + lVar16);
      uVar20 = *(ulonglong *)(lVar1 + 0x20 + lVar21);
      dVar30 = *(double *)
                (*(longlong *)
                  ((uVar20 / *(ulonglong *)(pFVar17 + 0x30)) * 0x40 + *(longlong *)(pFVar17 + 0x20))
                + (uVar20 % *(ulonglong *)(pFVar17 + 0x30)) * 8);
      if (dVar30 < 0.0) {
        dVar30 = (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) ^ uVar31,
                                  SUB84(dVar30,0) ^ uVar12);
      }
      *(double *)(puVar22 + -2) = dVar30;
      uVar20 = *(ulonglong *)(lVar1 + 0x28 + lVar21);
      *puVar22 = *(undefined4 *)
                  (*(longlong *)
                    (*(longlong *)(pFVar17 + 0x58) +
                    (uVar20 / *(ulonglong *)(pFVar17 + 0x68)) * 0x10) +
                  (uVar20 % *(ulonglong *)(pFVar17 + 0x68)) * 4);
      lVar1 = *(longlong *)(lVar27 + 0x30 + lVar16);
      uVar20 = *(ulonglong *)(lVar1 + 0x40 + lVar21);
      dVar30 = *(double *)
                (*(longlong *)
                  ((uVar20 / *(ulonglong *)(pFVar17 + 0x30)) * 0x40 + *(longlong *)(pFVar17 + 0x20))
                + (uVar20 % *(ulonglong *)(pFVar17 + 0x30)) * 8);
      if (dVar30 < 0.0) {
        dVar30 = (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) ^ uVar31,
                                  SUB84(dVar30,0) ^ uVar12);
      }
      *(double *)(puVar22 + 2) = dVar30;
      uVar20 = *(ulonglong *)(lVar1 + 0x48 + lVar21);
      puVar22[4] = *(undefined4 *)
                    (*(longlong *)
                      (*(longlong *)(pFVar17 + 0x58) +
                      (uVar20 / *(ulonglong *)(pFVar17 + 0x68)) * 0x10) +
                    (uVar20 % *(ulonglong *)(pFVar17 + 0x68)) * 4);
      lVar1 = *(longlong *)(lVar27 + 0x30 + lVar16);
      uVar20 = *(ulonglong *)(lVar1 + 0x60 + lVar21);
      dVar30 = *(double *)
                (*(longlong *)
                  ((uVar20 / *(ulonglong *)(pFVar17 + 0x30)) * 0x40 + *(longlong *)(pFVar17 + 0x20))
                + (uVar20 % *(ulonglong *)(pFVar17 + 0x30)) * 8);
      if (dVar30 < 0.0) {
        dVar30 = (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) ^ uVar31,
                                  SUB84(dVar30,0) ^ uVar12);
      }
      *(double *)(puVar22 + 6) = dVar30;
      uVar20 = *(ulonglong *)(lVar1 + 0x68 + lVar21);
      lVar21 = lVar21 + 0x80;
      puVar22[8] = *(undefined4 *)
                    (*(longlong *)
                      (*(longlong *)(pFVar17 + 0x58) +
                      (uVar20 / *(ulonglong *)(pFVar17 + 0x68)) * 0x10) +
                    (uVar20 % *(ulonglong *)(pFVar17 + 0x68)) * 4);
      puVar22 = puVar22 + 0x10;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
  }
  if (lVar9 < (longlong)uVar19) {
    pdVar10 = local_4090 + lVar9 * 2 + -1;
    lVar21 = lVar9 << 5;
    lVar9 = uVar19 - lVar9;
    do {
      lVar24 = *(longlong *)(lVar27 + 0x30 + lVar16);
      uVar20 = *(ulonglong *)(lVar21 + lVar24);
      dVar30 = *(double *)
                (*(longlong *)
                  ((uVar20 / *(ulonglong *)(pFVar17 + 0x30)) * 0x40 + *(longlong *)(pFVar17 + 0x20))
                + (uVar20 % *(ulonglong *)(pFVar17 + 0x30)) * 8);
      if (dVar30 < 0.0) {
        dVar30 = (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) ^ uVar31,
                                  SUB84(dVar30,0) ^ uVar12);
      }
      *pdVar10 = dVar30;
      uVar20 = *(ulonglong *)(lVar21 + 8 + lVar24);
      lVar21 = lVar21 + 0x20;
      *(undefined4 *)(pdVar10 + 1) =
           *(undefined4 *)
            (*(longlong *)
              (*(longlong *)(pFVar17 + 0x58) + (uVar20 / *(ulonglong *)(pFVar17 + 0x68)) * 0x10) +
            (uVar20 % *(ulonglong *)(pFVar17 + 0x68)) * 4);
      pdVar10 = pdVar10 + 2;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  local_4198 = uVar19;
  local_40d0 = pFVar17;
  TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>::
  TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
            (&local_4160,
             (TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage> *)
             (pFVar17 + 8),lVar26 * *(longlong *)(pFVar17 + 0x30));
  pFVar13 = local_4160.CurrentItem;
  TPagedArray<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
  ::GetIteratorFromItem
            ((TPagedArray<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
              *)(pFVar17 + 0x40),&local_4118,*(ulong64 *)(lVar27 + 0x20 + lVar16));
  uVar6 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar5 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_4128 = local_4118.CurrentItem;
  uVar14 = local_4160.CurrentPageIndex;
  pFVar18 = local_4118.CurrentItem;
  pFVar25 = pFVar13;
  pFVar28 = local_4160.CurrentPageLastItem;
  if (pFVar13 != (FEventScopeEntry *)0x0) {
    local_4130 = local_4090 + uVar19 * 2 + -1;
    uVar20 = uVar19;
    do {
      dVar30 = pFVar13->Time;
      pFVar25 = pFVar13;
      if (param_1 <=
          (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar6,SUB84(dVar30,0) & uVar5))
      break;
      if (0.0 <= dVar30) {
        if (((longlong)uVar20 < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentStackDepth > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                               ,0x133,L""), uVar20 = local_4198, bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_4198 = uVar20 - 1;
        uVar19 = (ulonglong)((int)uVar19 - 1);
        local_4130 = local_4130 + -2;
      }
      else {
        if ((0x3ff < (longlong)uVar20) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentStackDepth < SettingsType::MaxDepth",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                               ,299,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_4198 = local_4198 + 1;
        pdVar10 = local_4130 + 2;
        uVar19 = (ulonglong)((int)uVar19 + 1);
        *(uint *)(local_4130 + 1) = local_4128->TimerIndex;
        *local_4130 = (double)CONCAT44((uint)((ulonglong)pFVar13->Time >> 0x20) ^ uVar31,
                                       SUB84(pFVar13->Time,0) ^ uVar12);
        local_4130 = pdVar10;
        if (pFVar18 == local_4118.CurrentPageLastItem) {
          if (local_4118.CurrentPageIndex ==
              (longlong)(((local_4118.Outer)->PagesArray).ArrayNum + -1)) {
            local_4118.CurrentItemIndex = (local_4118.Outer)->TotalItemCount;
            local_4118.CurrentPageFirstItem = (FTimingProfilerEvent *)0x0;
            pFVar18 = (FTimingProfilerEvent *)0x0;
            local_4118.CurrentPageLastItem = (FTimingProfilerEvent *)0x0;
            local_4118.CurrentItem = (FTimingProfilerEvent *)0x0;
            local_4128 = (FTimingProfilerEvent *)0x0;
          }
          else {
            local_4118.CurrentPageIndex = local_4118.CurrentPageIndex + 1;
            pTVar23 = (local_4118.Outer)->FirstPage + local_4118.CurrentPageIndex;
            pFVar18 = pTVar23->Items;
            if (pFVar18 == (FTimingProfilerEvent *)0x0) {
              local_4118.CurrentPageLastItem = (FTimingProfilerEvent *)0x0;
            }
            else {
              local_4118.CurrentPageLastItem = pFVar18 + (pTVar23->Count - 1);
            }
            local_4118.CurrentItemIndex = local_4118.CurrentPageIndex * (local_4118.Outer)->PageSize
            ;
            local_4128 = pFVar18;
            local_4118.CurrentPageFirstItem = pFVar18;
            local_4118.CurrentItem = pFVar18;
            if (pTVar23 == (TPagedArrayPage<TraceServices::FTimingProfilerEvent> *)0x0) {
              local_4128 = (FTimingProfilerEvent *)0x0;
            }
          }
        }
        else {
          local_4118.CurrentItemIndex = local_4118.CurrentItemIndex + 1;
          pFVar18 = pFVar18 + 1;
          local_4128 = pFVar18;
          local_4118.CurrentItem = pFVar18;
        }
      }
      if (pFVar13 == pFVar28) {
        if (uVar14 == (longlong)(((local_4160.Outer)->PagesArray).ArrayNum + -1)) {
          local_4160.CurrentItemIndex = (local_4160.Outer)->TotalItemCount;
          local_4160.CurrentPageLastItem = (FEventScopeEntry *)0x0;
          local_4160.CurrentItem = (FEventScopeEntry *)0x0;
        }
        else {
          uVar14 = uVar14 + 1;
          pFVar29 = (local_4160.Outer)->FirstPage + uVar14;
          pFVar13 = pFVar29->Items;
          if (pFVar13 == (FEventScopeEntry *)0x0) {
            pFVar28 = (FEventScopeEntry *)0x0;
          }
          else {
            pFVar28 = pFVar13 + (pFVar29->Count - 1);
          }
          local_4160.CurrentItemIndex = uVar14 * (local_4160.Outer)->PageSize;
          local_4160.CurrentPageIndex = uVar14;
          local_4160.CurrentPageFirstItem = pFVar13;
          local_4160.CurrentPageLastItem = pFVar28;
          local_4160.CurrentItem = pFVar13;
          if (pFVar29 != (FEventScopeEntryPage *)0x0) goto LAB_14d457bcd;
        }
        pFVar13 = local_4160.CurrentItem;
        pFVar25 = (FEventScopeEntry *)0x0;
        pFVar28 = local_4160.CurrentPageLastItem;
        local_4160.CurrentPageFirstItem = local_4160.CurrentItem;
        break;
      }
      local_4160.CurrentItemIndex = local_4160.CurrentItemIndex + 1;
      pFVar13 = pFVar13 + 1;
LAB_14d457bcd:
      uVar20 = local_4198;
      pFVar25 = pFVar13;
      local_4160.CurrentItem = pFVar13;
    } while (pFVar13 != (FEventScopeEntry *)0x0);
  }
  iVar8 = (int)uVar19;
  if ((iVar8 == 1) && (param_2 < local_40a0[1])) {
    return;
  }
  iVar11 = 0;
  local_4198 = (ulonglong)iVar8;
  local_4130 = (double *)((ulonglong)local_4130 & 0xffffffff00000000);
  if (0 < iVar8) {
    local_40d8 = local_40a0 + 1;
    local_40e0 = 0;
    do {
      local_40c8 = *local_40d8;
      local_4190[0] = 1;
      iVar8 = (**(code **)local_4120)
                        (*(undefined8 *)&local_4120->field_0x8,local_4190,&local_40c8,
                         local_4090 + (longlong)iVar11 * 2);
      if (iVar8 == 1) {
        return;
      }
      iVar11 = (int)local_4130 + 1;
      local_40e0 = local_40e0 + 1;
      local_40d8 = local_40d8 + 2;
      local_4130 = (double *)CONCAT44(local_4130._4_4_,iVar11);
    } while (local_40e0 < (longlong)local_4198);
  }
  if (pFVar25 != (FEventScopeEntry *)0x0) {
    local_4198 = local_4198 << 4;
    do {
      dVar30 = pFVar25->Time;
      if (param_2 < (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar6,
                                     SUB84(dVar30,0) & uVar5)) break;
      iVar8 = (int)uVar19;
      if (0.0 <= dVar30) {
        if ((iVar8 < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentStackDepth > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                               ,0x154,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_40b8 = pFVar25->Time;
        local_4198 = local_4198 + -0x10;
        uVar19 = (ulonglong)(iVar8 - 1U);
        local_4180[0] = 0;
        iVar8 = (**(code **)local_4120)
                          (*(undefined8 *)&local_4120->field_0x8,local_4180,&local_40b8,
                           local_4090 + (longlong)(int)(iVar8 - 1U) * 2);
        if (iVar8 == 1) {
          return;
        }
      }
      else {
        if ((0x3ff < iVar8) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentStackDepth < SettingsType::MaxDepth",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                               ,0x149,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_4188[0] = 1;
        uVar19 = (ulonglong)(iVar8 + 1);
        *(uint *)((longlong)local_4090 + local_4198) = local_4128->TimerIndex;
        local_40c0 = CONCAT44((uint)((ulonglong)pFVar25->Time >> 0x20) ^ uVar31,
                              SUB84(pFVar25->Time,0) ^ uVar12);
        local_4198 = local_4198 + 0x10;
        iVar8 = (**(code **)local_4120)
                          (*(undefined8 *)&local_4120->field_0x8,local_4188,&local_40c0);
        if (iVar8 == 1) {
          return;
        }
        if (pFVar18 == local_4118.CurrentPageLastItem) {
          if (local_4118.CurrentPageIndex ==
              (longlong)(((local_4118.Outer)->PagesArray).ArrayNum + -1)) {
            local_4118.CurrentItemIndex = (local_4118.Outer)->TotalItemCount;
            local_4118.CurrentPageFirstItem = (FTimingProfilerEvent *)0x0;
            pFVar18 = (FTimingProfilerEvent *)0x0;
            local_4118.CurrentPageLastItem = (FTimingProfilerEvent *)0x0;
            local_4118.CurrentItem = (FTimingProfilerEvent *)0x0;
            local_4128 = (FTimingProfilerEvent *)0x0;
          }
          else {
            local_4118.CurrentPageIndex = local_4118.CurrentPageIndex + 1;
            pTVar23 = (local_4118.Outer)->FirstPage + local_4118.CurrentPageIndex;
            pFVar18 = pTVar23->Items;
            if (pFVar18 == (FTimingProfilerEvent *)0x0) {
              local_4118.CurrentPageLastItem = (FTimingProfilerEvent *)0x0;
            }
            else {
              local_4118.CurrentPageLastItem = pFVar18 + (pTVar23->Count - 1);
            }
            local_4118.CurrentItemIndex = local_4118.CurrentPageIndex * (local_4118.Outer)->PageSize
            ;
            local_4128 = pFVar18;
            local_4118.CurrentPageFirstItem = pFVar18;
            local_4118.CurrentItem = pFVar18;
            if (pTVar23 == (TPagedArrayPage<TraceServices::FTimingProfilerEvent> *)0x0) {
              local_4128 = (FTimingProfilerEvent *)0x0;
            }
          }
        }
        else {
          local_4118.CurrentItemIndex = local_4118.CurrentItemIndex + 1;
          pFVar18 = pFVar18 + 1;
          local_4128 = pFVar18;
          local_4118.CurrentItem = pFVar18;
        }
      }
      if (pFVar13 == pFVar28) {
        if (uVar14 == (longlong)(((local_4160.Outer)->PagesArray).ArrayNum + -1)) {
          local_4160.CurrentItemIndex = (local_4160.Outer)->TotalItemCount;
          local_4160.CurrentPageLastItem = (FEventScopeEntry *)0x0;
          local_4160.CurrentItem = (FEventScopeEntry *)0x0;
        }
        else {
          uVar14 = uVar14 + 1;
          pFVar29 = (local_4160.Outer)->FirstPage + uVar14;
          pFVar13 = pFVar29->Items;
          if (pFVar13 == (FEventScopeEntry *)0x0) {
            pFVar28 = (FEventScopeEntry *)0x0;
          }
          else {
            pFVar28 = pFVar13 + (pFVar29->Count - 1);
          }
          local_4160.CurrentItemIndex = uVar14 * (local_4160.Outer)->PageSize;
          local_4160.CurrentPageIndex = uVar14;
          local_4160.CurrentPageFirstItem = pFVar13;
          local_4160.CurrentPageLastItem = pFVar28;
          local_4160.CurrentItem = pFVar13;
          if (pFVar29 != (FEventScopeEntryPage *)0x0) goto LAB_14d457f34;
        }
        pFVar25 = (FEventScopeEntry *)0x0;
        pFVar13 = local_4160.CurrentItem;
        pFVar28 = local_4160.CurrentPageLastItem;
        local_4160.CurrentPageFirstItem = local_4160.CurrentItem;
        break;
      }
      local_4160.CurrentItemIndex = local_4160.CurrentItemIndex + 1;
      pFVar13 = pFVar13 + 1;
LAB_14d457f34:
      pFVar25 = pFVar13;
      local_4160.CurrentItem = pFVar13;
    } while (pFVar13 != (FEventScopeEntry *)0x0);
  }
  iVar8 = 0;
  iVar11 = (int)uVar19;
  uVar4 = uVar14;
  pFVar17 = local_40d0;
  dVar30 = local_40b0;
  while( true ) {
    uVar15 = uVar14;
    if (iVar11 < 1) {
      return;
    }
    local_40d0 = pFVar17;
    local_40b0 = dVar30;
    if (pFVar25 == (FEventScopeEntry *)0x0) goto LAB_14d4581d0;
    if (uVar15 != uVar4) break;
    local_40b0 = pFVar25->Time;
    uVar20 = uVar19;
    if (0.0 <= local_40b0) {
      if (iVar8 == 0) {
        local_4178[0] = 0;
        uVar20 = (ulonglong)((int)uVar19 - 1);
        iVar11 = (**(code **)local_4120)
                           (*(undefined8 *)&local_4120->field_0x8,local_4178,&local_40b0,
                            local_40a0 + uVar19 * 2);
        iVar8 = 0;
        if (iVar11 == 1) {
          return;
        }
      }
      else {
        iVar8 = iVar8 + -1;
        local_40b0 = dVar30;
      }
    }
    else {
      iVar8 = iVar8 + 1;
      local_40b0 = dVar30;
    }
    uVar14 = uVar15;
    if (pFVar13 == pFVar28) {
      if (uVar15 == (longlong)(((local_4160.Outer)->PagesArray).ArrayNum + -1)) {
        local_4160.CurrentItemIndex = (local_4160.Outer)->TotalItemCount;
        local_4160.CurrentPageFirstItem = (FEventScopeEntry *)0x0;
        local_4160.CurrentPageLastItem = (FEventScopeEntry *)0x0;
        local_4160.CurrentItem = (FEventScopeEntry *)0x0;
        pFVar28 = (FEventScopeEntry *)0x0;
        pFVar25 = (FEventScopeEntry *)0x0;
      }
      else {
        local_4160.CurrentPageIndex = uVar15 + 1;
        pFVar29 = (local_4160.Outer)->FirstPage + local_4160.CurrentPageIndex;
        local_4160.CurrentPageFirstItem = pFVar29->Items;
        if (local_4160.CurrentPageFirstItem == (FEventScopeEntry *)0x0) {
          pFVar28 = (FEventScopeEntry *)0x0;
        }
        else {
          pFVar28 = local_4160.CurrentPageFirstItem + (pFVar29->Count - 1);
        }
        local_4160.CurrentItemIndex = local_4160.CurrentPageIndex * (local_4160.Outer)->PageSize;
        uVar14 = local_4160.CurrentPageIndex;
        pFVar25 = local_4160.CurrentPageFirstItem;
        local_4160.CurrentPageLastItem = pFVar28;
        local_4160.CurrentItem = local_4160.CurrentPageFirstItem;
        if (pFVar29 == (FEventScopeEntryPage *)0x0) {
          pFVar25 = (FEventScopeEntry *)0x0;
          local_4160.CurrentItem = local_4160.CurrentPageFirstItem;
        }
      }
    }
    else {
      local_4160.CurrentItemIndex = local_4160.CurrentItemIndex + 1;
      pFVar25 = pFVar13 + 1;
      local_4160.CurrentItem = pFVar25;
    }
    iVar11 = (int)uVar20;
    pFVar13 = local_4160.CurrentItem;
    uVar4 = uVar15;
    uVar19 = uVar20;
    pFVar17 = local_40d0;
    dVar30 = local_40b0;
  }
  pFVar29 = (local_4160.Outer)->FirstPage + uVar15;
  uVar20 = uVar19;
  do {
    if (((int)(uint)pFVar29->InitialStackCount < (int)uVar20) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentStackDepth <= CurrentScopePage->InitialStackCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                           ,0x185,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (0 < (longlong)uVar19) {
      lVar16 = uVar19 << 5;
      do {
        pFVar2 = pFVar29->InitialStack;
        if (*(double *)(lVar16 + -8 + (longlong)pFVar2) <= 0.0) break;
        uVar19 = uVar19 - 1;
        uVar20 = (ulonglong)((int)uVar20 - 1);
        lVar16 = uVar19 * 0x20;
        local_40e8[0] =
             *(undefined4 *)
              (*(longlong *)
                (*(longlong *)(pFVar17 + 0x58) +
                (pFVar2[uVar19].EventIndex / *(ulonglong *)(pFVar17 + 0x68)) * 0x10) +
              (pFVar2[uVar19].EventIndex % *(ulonglong *)(pFVar17 + 0x68)) * 4);
        local_40a8 = pFVar2[uVar19].EndTime;
        local_4170[0] = 0;
        iVar8 = (**(code **)local_4120)
                          (*(undefined8 *)&local_4120->field_0x8,local_4170,&local_40a8,local_40e8);
        if (iVar8 == 1) {
          return;
        }
      } while (0 < (longlong)uVar19);
    }
    if (uVar15 == (longlong)(((local_4160.Outer)->PagesArray).ArrayNum + -1)) break;
    uVar15 = uVar15 + 1;
    pFVar29 = (local_4160.Outer)->FirstPage + uVar15;
    local_4160.CurrentPageFirstItem = pFVar29->Items;
    if (local_4160.CurrentPageFirstItem == (FEventScopeEntry *)0x0) {
      local_4160.CurrentPageLastItem = (FEventScopeEntry *)0x0;
    }
    else {
      local_4160.CurrentPageLastItem = local_4160.CurrentPageFirstItem + (pFVar29->Count - 1);
    }
    local_4160.CurrentItemIndex = uVar15 * (local_4160.Outer)->PageSize;
    local_4160.CurrentPageIndex = uVar15;
    local_4160.CurrentItem = local_4160.CurrentPageFirstItem;
  } while (pFVar29 != (FEventScopeEntryPage *)0x0);
  uVar12 = (uint)uVar20;
  uVar19 = uVar20;
  do {
    if ((int)uVar12 < 1) {
      return;
    }
LAB_14d4581d0:
    local_40a0[0] = *(double *)(pFVar17 + 0x78);
    uVar12 = (int)uVar19 - 1;
    local_4168[0] = 0;
    iVar8 = (**(code **)local_4120)
                      (*(undefined8 *)&local_4120->field_0x8,local_4168,local_40a0,
                       local_40a0 + uVar19 * 2);
    uVar19 = (ulonglong)uVar12;
  } while (iVar8 != 1);
  return;
}

// EnumerateEventsDownSampledAsync @ 14d4582b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateEventsDownSampledAsync
          (TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this,EnumerateAsyncParams *param_1)

{
  FEventScopeEntryPage *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
  *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  undefined8 uVar15;
  TReferenceControllerBase<1> *pTVar16;
  uint uVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  longlong *plVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *pFVar29;
  undefined1 auStackY_1e8 [32];
  ForAnyElementType local_198;
  undefined8 local_190;
  uint local_188;
  TSharedRef<FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>,1>
  local_180;
  uint local_170 [2];
  uint local_168;
  undefined1 local_158 [104];
  longlong *plStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8 [3];
  longlong *plStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8 [2];
  undefined8 local_98;
  longlong *plStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78 [2];
  undefined8 local_68;
  longlong *plStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if (((*(longlong *)&param_1->EventCallback == 0) ==
       (*(longlong *)&param_1->EventRangeCallback == 0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(EnumerateAsyncParams.EventRangeCallback == nullptr) ^ (EnumerateAsyncParams.EventCallback == nullptr)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                          ,0x2c7,L""), bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_1->IntervalStart < param_1->IntervalEnd ||
      param_1->IntervalStart == param_1->IntervalEnd) {
    uVar21 = 5;
    lVar22 = 0x8c2d0;
    do {
      if (((this->DetailLevels).ArrayNum <= (int)uVar21) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(double *)((this->DetailLevels).AllocatorInstance.Data + lVar22) <= param_1->Resolution)
      break;
      uVar21 = uVar21 - 1;
      lVar22 = lVar22 + -0x1c090;
    } while (0 < (int)uVar21);
    uVar23 = 0;
    uVar13 = 0;
    if ((int)uVar21 < (this->DetailLevels).ArrayNum) {
      uVar13 = ~uVar21 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar29 = (FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
               *)((this->DetailLevels).AllocatorInstance.Data + (longlong)(int)uVar21 * 0x1c090);
    if ((pFVar29->ScopeEntries).TotalItemCount != 0) {
      uVar26 = (ulonglong)(pFVar29->ScopeEntries).PagesArray.ArrayNum;
      pFVar1 = (pFVar29->ScopeEntries).FirstPage;
      if (uVar26 == 0) {
        uVar24 = 0;
        local_198.Data = (FScriptContainerElement *)0x0;
        local_190 = 0;
      }
      else {
        uVar24 = uVar26;
        uVar28 = uVar23;
        do {
          uVar25 = uVar24 >> 1;
          uVar27 = uVar25 + uVar28 + (ulonglong)((uint)uVar24 & 1);
          if (param_1->IntervalStart < pFVar1[uVar25 + uVar28].BeginTime) {
            uVar27 = uVar28;
          }
          uVar24 = uVar25;
          uVar28 = uVar27;
        } while (uVar25 != 0);
        uVar28 = uVar27 - 1;
        if (uVar27 == 0) {
          uVar28 = 0;
        }
        do {
          uVar27 = uVar26 >> 1;
          uVar24 = uVar27 + uVar23 + (ulonglong)((uint)uVar26 & 1);
          if (param_1->IntervalEnd < pFVar1[uVar27 + uVar23].BeginTime) {
            uVar24 = uVar23;
          }
          uVar23 = uVar24;
          uVar26 = uVar27;
        } while (uVar27 != 0);
        local_198.Data = (FScriptContainerElement *)0x0;
        local_190 = 0;
        uVar23 = uVar28;
        if ((uVar24 < uVar28) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("LastScopePageIndex >= FirstScopePageIndex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                                ,0x2f3,L""), bVar12)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar13 = (int)uVar24 - (int)uVar23;
      uVar21 = 1;
      if (1 < uVar13) {
        uVar21 = uVar13;
      }
      uVar13 = (**(code **)((longlong)*GThreadPool + 0x28))();
      if (0.0 < param_1->MaxOccupancy) {
        uVar17 = (uint)(longlong)((double)uVar13 * param_1->MaxOccupancy);
        uVar13 = 1;
        if (1 < uVar17) {
          uVar13 = uVar17;
        }
      }
      uVar17 = uVar21;
      if (uVar13 < uVar21) {
        uVar17 = uVar13;
      }
      local_188 = uVar21 / uVar17;
      local_168 = uVar21 % uVar17;
      local_170[0] = uVar17;
      UE::Core::Private::Function::CheckCallable(*(void **)&param_1->SetupCallback);
      plVar20 = *(longlong **)&(param_1->SetupCallback).field_0x28;
      pcVar3 = *(code **)&param_1->SetupCallback;
      plVar19 = (longlong *)&(param_1->SetupCallback).field_0x10;
      if (plVar20 != (longlong *)0x0) {
        plVar19 = plVar20;
      }
      uVar15 = (**(code **)(*plVar19 + 8))();
      (*pcVar3)(uVar15,local_170);
      pTVar5 = _UNK_150651568;
      pFVar4 = ___xmm_00000000000000000000000000000010;
      uVar21 = 0;
      if (uVar17 != 0) {
        do {
          local_158._24_4_ = *(undefined4 *)&param_1->IntervalStart;
          local_158._28_4_ = *(undefined4 *)((longlong)&param_1->IntervalStart + 4);
          local_158._32_4_ = *(undefined4 *)&param_1->IntervalEnd;
          local_158._36_4_ = *(undefined4 *)((longlong)&param_1->IntervalEnd + 4);
          uVar13 = local_188 + 1;
          if (local_168 <= uVar21) {
            uVar13 = local_188;
          }
          local_158._40_4_ = param_1->SortOrder;
          uVar26 = uVar13 + uVar23;
          local_b8 = *(longlong *)&param_1->EventCallback;
          local_158._16_8_ = uVar26;
          if (uVar24 < uVar26) {
            local_158._16_8_ = uVar24;
          }
          local_158._64_8_ = 0;
          plStack_f0 = (longlong *)0x0;
          local_e8 = 0;
          plStack_c0 = (longlong *)0x0;
          plStack_90 = (longlong *)0x0;
          local_158._0_4_ = uVar21;
          local_158._4_4_ = uVar17;
          local_158._8_8_ = uVar23;
          local_158._48_8_ = pFVar29;
          if (local_b8 != 0) {
            puVar2 = *(undefined8 **)&(param_1->EventCallback).field_0x28;
            puVar18 = (undefined8 *)&(param_1->EventCallback).field_0x10;
            if (puVar2 != (undefined8 *)0x0) {
              puVar18 = puVar2;
            }
            (**(code **)*puVar18)(local_158._24_4_,local_a8);
          }
          plVar20 = plStack_c0;
          uVar11 = local_d8[1]._4_4_;
          uVar10 = (undefined4)local_d8[1];
          uVar9 = local_d8[0]._4_4_;
          uVar8 = (undefined4)local_d8[0];
          uVar6 = uStack_e0;
          lVar22 = local_e8;
          uVar15 = CONCAT44(local_d8[2]._4_4_,(undefined4)local_d8[2]);
          local_e8 = local_b8;
          uStack_e0 = uStack_b0;
          local_d8[2]._0_4_ = (undefined4)local_98;
          local_d8[2]._4_4_ = local_98._4_4_;
          plStack_c0 = plStack_90;
          local_d8[0]._0_4_ = (undefined4)local_a8[0];
          local_d8[0]._4_4_ = local_a8[0]._4_4_;
          local_d8[1]._0_4_ = (undefined4)local_a8[1];
          local_d8[1]._4_4_ = local_a8[1]._4_4_;
          local_b8 = lVar22;
          uStack_b0 = uVar6;
          local_a8[0]._0_4_ = uVar8;
          local_a8[0]._4_4_ = uVar9;
          local_a8[1]._0_4_ = uVar10;
          local_a8[1]._4_4_ = uVar11;
          local_98 = uVar15;
          plStack_90 = plVar20;
          if (lVar22 != 0) {
            plVar19 = local_a8;
            if (plVar20 != (longlong *)0x0) {
              plVar19 = plVar20;
            }
            (**(code **)(*plVar19 + 0x10))();
          }
          local_88 = *(longlong *)&param_1->EventRangeCallback;
          plStack_60 = (longlong *)0x0;
          if (local_88 != 0) {
            puVar2 = *(undefined8 **)&(param_1->EventRangeCallback).field_0x28;
            puVar18 = (undefined8 *)&(param_1->EventRangeCallback).field_0x10;
            if (puVar2 != (undefined8 *)0x0) {
              puVar18 = puVar2;
            }
            (**(code **)*puVar18)(puVar18,local_78);
          }
          plVar20 = plStack_f0;
          uVar11 = local_158._92_4_;
          uVar10 = local_158._88_4_;
          uVar9 = local_158._84_4_;
          uVar8 = local_158._80_4_;
          uVar7 = local_158._72_8_;
          uVar6 = local_158._64_8_;
          uVar15 = CONCAT44(local_158._100_4_,local_158._96_4_);
          local_158._64_8_ = local_88;
          local_158._72_8_ = uStack_80;
          local_158._96_4_ = (undefined4)local_68;
          local_158._100_4_ = local_68._4_4_;
          plStack_f0 = plStack_60;
          local_158._80_4_ = (undefined4)local_78[0];
          local_158._84_4_ = local_78[0]._4_4_;
          local_158._88_4_ = (undefined4)local_78[1];
          local_158._92_4_ = local_78[1]._4_4_;
          local_88 = uVar6;
          uStack_80 = uVar7;
          local_78[0]._0_4_ = uVar8;
          local_78[0]._4_4_ = uVar9;
          local_78[1]._0_4_ = uVar10;
          local_78[1]._4_4_ = uVar11;
          local_68 = uVar15;
          plStack_60 = plVar20;
          if (uVar6 != 0) {
            plVar19 = local_78;
            if (plVar20 != (longlong *)0x0) {
              plVar19 = plVar20;
            }
            (**(code **)(*plVar19 + 0x10))();
          }
          pTVar16 = ::operator_new(0x120);
          if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
            local_180.SharedReferenceCount.ReferenceController = pTVar5;
            local_180.Object = pFVar4;
          }
          else {
            pTVar16->SharedReferenceCount = (atomic<int>)0x1;
            pTVar16->WeakReferenceCount = (atomic<int>)0x1;
            pTVar16->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_V__FAsyncTask_V__FEnumerateAsyncTask_UFLoadTimeProfilerCpuEvent_TraceServices__UFMonotonicTimelineDefaultSettings_2__TraceServices_____00_SharedPointerInternals__6B_
            ;
            FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
            ::
            FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_><TraceServices::FAsyncEnumerateTaskData<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_&>
                      ((FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
                        *)(pTVar16 + 1),
                       (FAsyncEnumerateTaskData<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                        *)local_158);
            local_180.Object =
                 (FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
                  *)(pTVar16 + 1);
            local_180.SharedReferenceCount.ReferenceController = pTVar16;
            if ((local_180.Object ==
                 (FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
                  *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InObject != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x246,L""), bVar12)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          if (((local_198.Data <= &local_180) &&
              (&local_180 <
               (TSharedRef<FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>,1>
                *)(local_198.Data + (longlong)local_190._4_4_ * 0x10))) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar14 = (int)local_190;
          if ((int)local_190 == local_190._4_4_) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_198,(int *)((longlong)&local_190 + 4));
          }
          local_190 = CONCAT44(local_190._4_4_,iVar14 + 1);
          *(FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
            **)&local_198.Data[(longlong)iVar14 * 0x10].field_0x0 = local_180.Object;
          *(TReferenceControllerBase<1> **)(local_198.Data + (longlong)iVar14 * 0x10 + 8) =
               local_180.SharedReferenceCount.ReferenceController;
          if (local_180.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_180.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_180.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          uVar13 = 0;
          FAsyncTaskBase::Start
                    ((FAsyncTaskBase *)local_180.Object,false,GThreadPool,Normal,None,-1,
                     (wchar_t *)0x0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_180.SharedReferenceCount.ReferenceController);
          if (local_e8 != 0) {
            plVar20 = local_d8;
            if (plStack_c0 != (longlong *)0x0) {
              plVar20 = plStack_c0;
            }
            (**(code **)(*plVar20 + 0x10))();
          }
          if (local_158._64_8_ != 0) {
            plVar20 = (longlong *)(local_158 + 0x50);
            if (plStack_f0 != (longlong *)0x0) {
              plVar20 = plStack_f0;
            }
            (**(code **)(*plVar20 + 0x10))();
          }
          uVar21 = uVar21 + 1;
          uVar23 = uVar26;
        } while (uVar21 < uVar17);
        do {
          uVar21 = 0;
          if ((int)uVar13 < (int)local_190) {
            uVar21 = ~uVar13 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FAsyncTaskBase::EnsureCompletion
                    (*(FAsyncTaskBase **)&local_198.Data[(longlong)(int)uVar13 * 0x10].field_0x0,
                     true,false);
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar17);
      }
      DestructItems<TSharedRef<FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>,1>,int>
                ((TSharedRef<FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>,1>
                  *)local_198.Data,(int)local_190);
      if ((TSharedRef<FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>,1>
           *)local_198.Data !=
          (TSharedRef<FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>,1>
           *)0x0) {
        FMemory::Free(local_198.Data);
      }
    }
  }
  return;
}

// EnumerateEventsDownSampledAsync @ 14d4589c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::EnumerateEventsDownSampledAsync
          (TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this,EnumerateAsyncParams *param_1)

{
  FEventScopeEntryPage *pFVar1;
  undefined8 *puVar2;
  code *pcVar3;
  FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
  *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  undefined8 uVar15;
  TReferenceControllerBase<1> *pTVar16;
  uint uVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  longlong *plVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *pFVar29;
  undefined1 auStackY_1e8 [32];
  ForAnyElementType local_198;
  undefined8 local_190;
  uint local_188;
  TSharedRef<FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>,1>
  local_180;
  uint local_170 [2];
  uint local_168;
  undefined1 local_158 [104];
  longlong *plStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8 [3];
  longlong *plStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8 [2];
  undefined8 local_98;
  longlong *plStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78 [2];
  undefined8 local_68;
  longlong *plStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if (((*(longlong *)&param_1->EventCallback == 0) ==
       (*(longlong *)&param_1->EventRangeCallback == 0)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(EnumerateAsyncParams.EventRangeCallback == nullptr) ^ (EnumerateAsyncParams.EventCallback == nullptr)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                          ,0x2c7,L""), bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_1->IntervalStart < param_1->IntervalEnd ||
      param_1->IntervalStart == param_1->IntervalEnd) {
    uVar21 = 5;
    lVar22 = 0x782d0;
    do {
      if (((this->DetailLevels).ArrayNum <= (int)uVar21) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(double *)((this->DetailLevels).AllocatorInstance.Data + lVar22) <= param_1->Resolution)
      break;
      uVar21 = uVar21 - 1;
      lVar22 = lVar22 + -0x18090;
    } while (0 < (int)uVar21);
    uVar23 = 0;
    uVar13 = 0;
    if ((int)uVar21 < (this->DetailLevels).ArrayNum) {
      uVar13 = ~uVar21 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar29 = (FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
               *)((this->DetailLevels).AllocatorInstance.Data + (longlong)(int)uVar21 * 0x18090);
    if ((pFVar29->ScopeEntries).TotalItemCount != 0) {
      uVar26 = (ulonglong)(pFVar29->ScopeEntries).PagesArray.ArrayNum;
      pFVar1 = (pFVar29->ScopeEntries).FirstPage;
      if (uVar26 == 0) {
        uVar24 = 0;
        local_198.Data = (FScriptContainerElement *)0x0;
        local_190 = 0;
      }
      else {
        uVar24 = uVar26;
        uVar28 = uVar23;
        do {
          uVar25 = uVar24 >> 1;
          uVar27 = uVar25 + uVar28 + (ulonglong)((uint)uVar24 & 1);
          if (param_1->IntervalStart < pFVar1[uVar25 + uVar28].BeginTime) {
            uVar27 = uVar28;
          }
          uVar24 = uVar25;
          uVar28 = uVar27;
        } while (uVar25 != 0);
        uVar28 = uVar27 - 1;
        if (uVar27 == 0) {
          uVar28 = 0;
        }
        do {
          uVar27 = uVar26 >> 1;
          uVar24 = uVar27 + uVar23 + (ulonglong)((uint)uVar26 & 1);
          if (param_1->IntervalEnd < pFVar1[uVar27 + uVar23].BeginTime) {
            uVar24 = uVar23;
          }
          uVar23 = uVar24;
          uVar26 = uVar27;
        } while (uVar27 != 0);
        local_198.Data = (FScriptContainerElement *)0x0;
        local_190 = 0;
        uVar23 = uVar28;
        if ((uVar24 < uVar28) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("LastScopePageIndex >= FirstScopePageIndex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                                ,0x2f3,L""), bVar12)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar13 = (int)uVar24 - (int)uVar23;
      uVar21 = 1;
      if (1 < uVar13) {
        uVar21 = uVar13;
      }
      uVar13 = (**(code **)((longlong)*GThreadPool + 0x28))();
      if (0.0 < param_1->MaxOccupancy) {
        uVar17 = (uint)(longlong)((double)uVar13 * param_1->MaxOccupancy);
        uVar13 = 1;
        if (1 < uVar17) {
          uVar13 = uVar17;
        }
      }
      uVar17 = uVar21;
      if (uVar13 < uVar21) {
        uVar17 = uVar13;
      }
      local_188 = uVar21 / uVar17;
      local_168 = uVar21 % uVar17;
      local_170[0] = uVar17;
      UE::Core::Private::Function::CheckCallable(*(void **)&param_1->SetupCallback);
      plVar20 = *(longlong **)&(param_1->SetupCallback).field_0x28;
      pcVar3 = *(code **)&param_1->SetupCallback;
      plVar19 = (longlong *)&(param_1->SetupCallback).field_0x10;
      if (plVar20 != (longlong *)0x0) {
        plVar19 = plVar20;
      }
      uVar15 = (**(code **)(*plVar19 + 8))();
      (*pcVar3)(uVar15,local_170);
      pTVar5 = _UNK_150651568;
      pFVar4 = ___xmm_00000000000000000000000000000010;
      uVar21 = 0;
      if (uVar17 != 0) {
        do {
          local_158._24_4_ = *(undefined4 *)&param_1->IntervalStart;
          local_158._28_4_ = *(undefined4 *)((longlong)&param_1->IntervalStart + 4);
          local_158._32_4_ = *(undefined4 *)&param_1->IntervalEnd;
          local_158._36_4_ = *(undefined4 *)((longlong)&param_1->IntervalEnd + 4);
          uVar13 = local_188 + 1;
          if (local_168 <= uVar21) {
            uVar13 = local_188;
          }
          local_158._40_4_ = param_1->SortOrder;
          uVar26 = uVar13 + uVar23;
          local_b8 = *(longlong *)&param_1->EventCallback;
          local_158._16_8_ = uVar26;
          if (uVar24 < uVar26) {
            local_158._16_8_ = uVar24;
          }
          local_158._64_8_ = 0;
          plStack_f0 = (longlong *)0x0;
          local_e8 = 0;
          plStack_c0 = (longlong *)0x0;
          plStack_90 = (longlong *)0x0;
          local_158._0_4_ = uVar21;
          local_158._4_4_ = uVar17;
          local_158._8_8_ = uVar23;
          local_158._48_8_ = pFVar29;
          if (local_b8 != 0) {
            puVar2 = *(undefined8 **)&(param_1->EventCallback).field_0x28;
            puVar18 = (undefined8 *)&(param_1->EventCallback).field_0x10;
            if (puVar2 != (undefined8 *)0x0) {
              puVar18 = puVar2;
            }
            (**(code **)*puVar18)(local_158._24_4_,local_a8);
          }
          plVar20 = plStack_c0;
          uVar11 = local_d8[1]._4_4_;
          uVar10 = (undefined4)local_d8[1];
          uVar9 = local_d8[0]._4_4_;
          uVar8 = (undefined4)local_d8[0];
          uVar6 = uStack_e0;
          lVar22 = local_e8;
          uVar15 = CONCAT44(local_d8[2]._4_4_,(undefined4)local_d8[2]);
          local_e8 = local_b8;
          uStack_e0 = uStack_b0;
          local_d8[2]._0_4_ = (undefined4)local_98;
          local_d8[2]._4_4_ = local_98._4_4_;
          plStack_c0 = plStack_90;
          local_d8[0]._0_4_ = (undefined4)local_a8[0];
          local_d8[0]._4_4_ = local_a8[0]._4_4_;
          local_d8[1]._0_4_ = (undefined4)local_a8[1];
          local_d8[1]._4_4_ = local_a8[1]._4_4_;
          local_b8 = lVar22;
          uStack_b0 = uVar6;
          local_a8[0]._0_4_ = uVar8;
          local_a8[0]._4_4_ = uVar9;
          local_a8[1]._0_4_ = uVar10;
          local_a8[1]._4_4_ = uVar11;
          local_98 = uVar15;
          plStack_90 = plVar20;
          if (lVar22 != 0) {
            plVar19 = local_a8;
            if (plVar20 != (longlong *)0x0) {
              plVar19 = plVar20;
            }
            (**(code **)(*plVar19 + 0x10))();
          }
          local_88 = *(longlong *)&param_1->EventRangeCallback;
          plStack_60 = (longlong *)0x0;
          if (local_88 != 0) {
            puVar2 = *(undefined8 **)&(param_1->EventRangeCallback).field_0x28;
            puVar18 = (undefined8 *)&(param_1->EventRangeCallback).field_0x10;
            if (puVar2 != (undefined8 *)0x0) {
              puVar18 = puVar2;
            }
            (**(code **)*puVar18)(puVar18,local_78);
          }
          plVar20 = plStack_f0;
          uVar11 = local_158._92_4_;
          uVar10 = local_158._88_4_;
          uVar9 = local_158._84_4_;
          uVar8 = local_158._80_4_;
          uVar7 = local_158._72_8_;
          uVar6 = local_158._64_8_;
          uVar15 = CONCAT44(local_158._100_4_,local_158._96_4_);
          local_158._64_8_ = local_88;
          local_158._72_8_ = uStack_80;
          local_158._96_4_ = (undefined4)local_68;
          local_158._100_4_ = local_68._4_4_;
          plStack_f0 = plStack_60;
          local_158._80_4_ = (undefined4)local_78[0];
          local_158._84_4_ = local_78[0]._4_4_;
          local_158._88_4_ = (undefined4)local_78[1];
          local_158._92_4_ = local_78[1]._4_4_;
          local_88 = uVar6;
          uStack_80 = uVar7;
          local_78[0]._0_4_ = uVar8;
          local_78[0]._4_4_ = uVar9;
          local_78[1]._0_4_ = uVar10;
          local_78[1]._4_4_ = uVar11;
          local_68 = uVar15;
          plStack_60 = plVar20;
          if (uVar6 != 0) {
            plVar19 = local_78;
            if (plVar20 != (longlong *)0x0) {
              plVar19 = plVar20;
            }
            (**(code **)(*plVar19 + 0x10))();
          }
          pTVar16 = ::operator_new(0x120);
          if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
            local_180.SharedReferenceCount.ReferenceController = pTVar5;
            local_180.Object = pFVar4;
          }
          else {
            pTVar16->SharedReferenceCount = (atomic<int>)0x1;
            pTVar16->WeakReferenceCount = (atomic<int>)0x1;
            pTVar16->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_V__FAsyncTask_V__FEnumerateAsyncTask_UFTimingProfilerEvent_TraceServices__UFMonotonicTimelineDefaultSettings_2__TraceServices_____00_SharedPointerInternals__6B_
            ;
            FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
            ::
            FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_><TraceServices::FAsyncEnumerateTaskData<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_&>
                      ((FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
                        *)(pTVar16 + 1),
                       (FAsyncEnumerateTaskData<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                        *)local_158);
            local_180.Object =
                 (FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
                  *)(pTVar16 + 1);
            local_180.SharedReferenceCount.ReferenceController = pTVar16;
            if ((local_180.Object ==
                 (FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
                  *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InObject != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x246,L""), bVar12)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          if (((local_198.Data <= &local_180) &&
              (&local_180 <
               (TSharedRef<FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>,1>
                *)(local_198.Data + (longlong)local_190._4_4_ * 0x10))) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar14 = (int)local_190;
          if ((int)local_190 == local_190._4_4_) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_198,(int *)((longlong)&local_190 + 4));
          }
          local_190 = CONCAT44(local_190._4_4_,iVar14 + 1);
          *(FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>
            **)&local_198.Data[(longlong)iVar14 * 0x10].field_0x0 = local_180.Object;
          *(TReferenceControllerBase<1> **)(local_198.Data + (longlong)iVar14 * 0x10 + 8) =
               local_180.SharedReferenceCount.ReferenceController;
          if (local_180.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_180.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_180.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          uVar13 = 0;
          FAsyncTaskBase::Start
                    ((FAsyncTaskBase *)local_180.Object,false,GThreadPool,Normal,None,-1,
                     (wchar_t *)0x0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_180.SharedReferenceCount.ReferenceController);
          if (local_e8 != 0) {
            plVar20 = local_d8;
            if (plStack_c0 != (longlong *)0x0) {
              plVar20 = plStack_c0;
            }
            (**(code **)(*plVar20 + 0x10))();
          }
          if (local_158._64_8_ != 0) {
            plVar20 = (longlong *)(local_158 + 0x50);
            if (plStack_f0 != (longlong *)0x0) {
              plVar20 = plStack_f0;
            }
            (**(code **)(*plVar20 + 0x10))();
          }
          uVar21 = uVar21 + 1;
          uVar23 = uVar26;
        } while (uVar21 < uVar17);
        do {
          uVar21 = 0;
          if ((int)uVar13 < (int)local_190) {
            uVar21 = ~uVar13 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FAsyncTaskBase::EnsureCompletion
                    (*(FAsyncTaskBase **)&local_198.Data[(longlong)(int)uVar13 * 0x10].field_0x0,
                     true,false);
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar17);
      }
      DestructItems<TSharedRef<FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>,1>,int>
                ((TSharedRef<FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>,1>
                  *)local_198.Data,(int)local_190);
      if ((TSharedRef<FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>,1>
           *)local_198.Data !=
          (TSharedRef<FAsyncTask<TraceServices::FEnumerateAsyncTask<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>_>,1>
           *)0x0) {
        FMemory::Free(local_198.Data);
      }
    }
  }
  return;
}

// FindBestMatchEvent @ 14d45e670

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::FindBestMatchEvent
          (TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this,FFindBestMatchEventInParams *param_1,FFindBestMatchEventOutParams *param_2)

{
  ELoadTimeProfilerObjectEventType *pEVar1;
  code *pcVar2;
  TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage> *pTVar3;
  TPagedArray<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
  *pTVar4;
  FEventInfoStackEntry<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *pFVar5;
  FPackageExportInfo *pFVar6;
  FEventInfoStackEntry<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *pFVar7;
  undefined4 uVar8;
  ELoadTimeProfilerObjectEventType EVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined1 uVar13;
  TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent> *pTVar14;
  FEventScopeEntryPage *pFVar15;
  FLoadTimeProfilerCpuEvent *pFVar16;
  int iVar17;
  int iVar18;
  FEventScopeEntry *pFVar19;
  ulong64 uVar20;
  ulong64 uVar21;
  FLoadTimeProfilerCpuEvent *pFVar22;
  FEventScopeEntry *pFVar23;
  double dVar24;
  double dVar25;
  uint uVar26;
  uint uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  bool local_res20;
  ulong64 local_148;
  ulong64 uStack_130;
  FEventScopeEntry *local_128;
  FEventScopeEntry *pFStack_120;
  ulong64 local_118;
  FEventScopeEntry *pFStack_110;
  ulong64 uStack_100;
  FLoadTimeProfilerCpuEvent *local_f8;
  FLoadTimeProfilerCpuEvent *pFStack_f0;
  ulong64 local_e8;
  FLoadTimeProfilerCpuEvent *pFStack_e0;
  undefined8 uStack_d0;
  double local_c8;
  FLoadTimeProfilerCpuEvent *local_b8;
  FPackageInfo *local_a0;
  FPackageExportInfo *pFStack_98;
  undefined8 local_90;
  double dStack_88;
  double dStack_80;
  
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  pTVar3 = (param_1->IterationState).ScopeIterator.Outer;
  uVar21 = (param_1->IterationState).ScopeIterator.CurrentPageIndex;
  pFVar19 = (param_1->IterationState).ScopeIterator.CurrentItem;
  local_c8 = (param_1->IterationState).LastIterationTime;
  pFVar16 = (param_1->IterationState).EventsIterator.CurrentItem;
  uVar26 = (uint)__xmm_80000000000000008000000000000000;
  uVar27 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar28 = 0;
  uVar29 = 0;
  local_90 = CONCAT44(local_90._4_4_,3);
  local_res20 = false;
  pTVar4 = (param_1->IterationState).EventsIterator.Outer;
  uVar20 = (param_1->IterationState).EventsIterator.CurrentPageIndex;
  pFStack_120 = (param_1->IterationState).ScopeIterator.CurrentPageLastItem;
  pFVar5 = (param_1->IterationState).EventStack;
  uStack_d0 = *(undefined8 *)&(param_1->IterationState).StackDepth;
  local_118 = (param_1->IterationState).ScopeIterator.CurrentItemIndex;
  local_f8 = (param_1->IterationState).EventsIterator.CurrentPageFirstItem;
  pFVar22 = (param_1->IterationState).EventsIterator.CurrentPageLastItem;
  local_e8 = (param_1->IterationState).EventsIterator.CurrentItemIndex;
  pFStack_e0 = (param_1->IterationState).EventsIterator.CurrentItem;
  local_a0 = (FPackageInfo *)0x0;
  pFStack_98 = (FPackageExportInfo *)0x0;
  dStack_88 = 0.0;
  dStack_80 = 0.0;
  local_b8 = pFVar16;
  local_128 = (param_1->IterationState).ScopeIterator.CurrentPageFirstItem;
  pFStack_f0 = pFVar22;
  uStack_130 = uVar21;
  local_148 = uVar20;
  uStack_100 = uVar20;
  pFStack_110 = (param_1->IterationState).ScopeIterator.CurrentItem;
  iVar18 = (int)uStack_d0;
joined_r0x00014d45e739:
  do {
    pFVar23 = pFVar19;
    if ((pFVar19 == (FEventScopeEntry *)0x0) ||
       (dVar25 = pFVar19->Time,
       dVar24 = (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & uVar11,SUB84(dVar25,0) & uVar10
                                ),
       param_1->TargetExactTime <= dVar24 && dVar24 != param_1->TargetExactTime))
    goto LAB_14d45eb65;
    uStack_d0._4_4_ = (undefined4)((ulonglong)uStack_d0 >> 0x20);
    if (0.0 <= dVar25) {
      if ((iVar18 < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IterationState.StackDepth > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                              ,0x55a,L""), uVar20 = local_148, bVar12)) {
        pcVar2 = (code *)swi(3);
        uVar13 = (*pcVar2)();
        return (bool)uVar13;
      }
      iVar18 = iVar18 + -1;
      uStack_d0 = CONCAT44(uStack_d0._4_4_,iVar18);
      if (iVar18 == param_1->TargetDepth) {
        local_res20 = true;
        pFVar5[iVar18].ExclTime = (pFVar19->Time - local_c8) + pFVar5[iVar18].ExclTime;
        local_a0 = pFVar5[iVar18].Event.Package;
        pFStack_98 = pFVar5[iVar18].Event.Export;
        pEVar1 = &pFVar5[iVar18].Event.EventType;
        local_90 = *(undefined8 *)pEVar1;
        dStack_88 = *(double *)(pEVar1 + 2);
        uVar28 = SUB84(pFVar19->Time,0);
        uVar29 = (undefined4)((ulonglong)pFVar19->Time >> 0x20);
        dStack_80 = pFVar5[iVar18].ExclTime;
      }
      local_c8 = pFVar19->Time;
    }
    else {
      if ((0x3ff < iVar18) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IterationState.StackDepth < SettingsType::MaxDepth",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                              ,0x54b,L""), uVar20 = local_148, bVar12)) {
        pcVar2 = (code *)swi(3);
        uVar13 = (*pcVar2)();
        return (bool)uVar13;
      }
      iVar17 = iVar18 + 1;
      uStack_d0 = CONCAT44(uStack_d0._4_4_,iVar17);
      pFVar6 = local_b8->Export;
      pFVar5[iVar18].Event.Package = local_b8->Package;
      pFVar5[iVar18].Event.Export = pFVar6;
      uVar8 = *(undefined4 *)&local_b8->field_0x14;
      pFVar5[iVar18].Event.EventType = local_b8->EventType;
      *(undefined4 *)&pFVar5[iVar18].Event.field_0x14 = uVar8;
      dVar25 = pFVar19->Time;
      pFVar5[iVar18].ExclTime = 0.0;
      dVar25 = (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) ^ uVar27,SUB84(dVar25,0) ^ uVar26)
      ;
      pFVar5[iVar18].StartTime = dVar25;
      if (1 < iVar17) {
        pFVar5[(longlong)iVar17 + -2].ExclTime =
             (dVar25 - local_c8) + pFVar5[(longlong)iVar17 + -2].ExclTime;
      }
      iVar18 = iVar17;
      if (pFVar16 == pFVar22) {
        if (uVar20 == (longlong)((pTVar4->PagesArray).ArrayNum + -1)) {
          local_e8 = pTVar4->TotalItemCount;
          pFVar16 = (FLoadTimeProfilerCpuEvent *)0x0;
          local_f8 = (FLoadTimeProfilerCpuEvent *)0x0;
          pFStack_f0 = (FLoadTimeProfilerCpuEvent *)0x0;
          local_c8 = (double)CONCAT44((uint)((ulonglong)pFVar19->Time >> 0x20) ^ uVar27,
                                      SUB84(pFVar19->Time,0) ^ uVar26);
          pFVar22 = (FLoadTimeProfilerCpuEvent *)0x0;
          pFStack_e0 = (FLoadTimeProfilerCpuEvent *)0x0;
          local_b8 = (FLoadTimeProfilerCpuEvent *)0x0;
        }
        else {
          uVar20 = uVar20 + 1;
          pTVar14 = pTVar4->FirstPage + uVar20;
          pFVar16 = pTVar14->Items;
          if (pFVar16 == (FLoadTimeProfilerCpuEvent *)0x0) {
            pFVar22 = (FLoadTimeProfilerCpuEvent *)0x0;
          }
          else {
            pFVar22 = pFVar16 + (pTVar14->Count - 1);
          }
          local_e8 = uVar20 * pTVar4->PageSize;
          local_148 = uVar20;
          uStack_100 = uVar20;
          local_f8 = pFVar16;
          pFStack_f0 = pFVar22;
          if (pTVar14 != (TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent> *)0x0)
          goto LAB_14d45e927;
          local_c8 = (double)CONCAT44((uint)((ulonglong)pFVar19->Time >> 0x20) ^ uVar27,
                                      SUB84(pFVar19->Time,0) ^ uVar26);
          pFStack_e0 = pFVar16;
          local_b8 = (FLoadTimeProfilerCpuEvent *)0x0;
        }
      }
      else {
        local_e8 = local_e8 + 1;
        pFVar16 = pFVar16 + 1;
LAB_14d45e927:
        local_c8 = (double)CONCAT44((uint)((ulonglong)pFVar19->Time >> 0x20) ^ uVar27,
                                    SUB84(pFVar19->Time,0) ^ uVar26);
        pFStack_e0 = pFVar16;
        local_b8 = pFVar16;
      }
    }
    if (pFVar19 != pFStack_120) {
      local_118 = local_118 + 1;
      pFVar19 = pFVar19 + 1;
      pFStack_110 = pFVar19;
      goto joined_r0x00014d45e739;
    }
    if (uVar21 == (longlong)((pTVar3->PagesArray).ArrayNum + -1)) {
      local_118 = pTVar3->TotalItemCount;
      pFVar19 = (FEventScopeEntry *)0x0;
      pFStack_110 = (FEventScopeEntry *)0x0;
      local_128 = (FEventScopeEntry *)0x0;
      pFStack_120 = (FEventScopeEntry *)0x0;
      pFVar23 = (FEventScopeEntry *)0x0;
      goto LAB_14d45eb65;
    }
    uVar21 = uVar21 + 1;
    pFVar15 = pTVar3->FirstPage + uVar21;
    pFVar19 = pFVar15->Items;
    if (pFVar19 == (FEventScopeEntry *)0x0) {
      pFStack_120 = (FEventScopeEntry *)0x0;
    }
    else {
      pFStack_120 = pFVar19 + (pFVar15->Count - 1);
    }
    local_118 = uVar21 * pTVar3->PageSize;
    local_128 = pFVar19;
    uStack_130 = uVar21;
    pFStack_110 = pFVar19;
  } while (pFVar15 != (FEventScopeEntryPage *)0x0);
  pFVar23 = (FEventScopeEntry *)0x0;
LAB_14d45eb65:
  iVar17 = param_1->TargetDepth;
  if (iVar17 < iVar18) {
    pFVar6 = pFVar5[iVar17].Event.Export;
    (param_2->EventInfo).Event.Package = pFVar5[iVar17].Event.Package;
    (param_2->EventInfo).Event.Export = pFVar6;
    pFVar7 = pFVar5 + iVar17;
    uVar28 = *(undefined4 *)&(pFVar7->Event).field_0x14;
    dVar25 = *(double *)(&(pFVar7->Event).EventType + 2);
    (param_2->EventInfo).Event.EventType = (pFVar7->Event).EventType;
    *(undefined4 *)&(param_2->EventInfo).Event.field_0x14 = uVar28;
    (param_2->EventInfo).StartTime = dVar25;
    dStack_80 = pFVar5[iVar17].ExclTime;
    param_2->bHasEndTime = false;
  }
  else {
    do {
      while( true ) {
        if ((pFVar23 == (FEventScopeEntry *)0x0) ||
           (dVar25 = pFVar23->Time,
           dVar24 = (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) & uVar11,
                                     SUB84(dVar25,0) & uVar10),
           param_1->TargetEndTime <= dVar24 && dVar24 != param_1->TargetEndTime))
        goto LAB_14d45eec7;
        uStack_d0._4_4_ = (undefined4)((ulonglong)uStack_d0 >> 0x20);
        if (0.0 <= dVar25) {
          if ((iVar18 < 1) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IterationState.StackDepth > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                                  ,0x596,L""), uVar20 = local_148, bVar12)) {
            pcVar2 = (code *)swi(3);
            uVar13 = (*pcVar2)();
            return (bool)uVar13;
          }
          iVar17 = iVar18 + -1;
          uStack_d0 = CONCAT44(uStack_d0._4_4_,iVar17);
          if (iVar17 == param_1->TargetDepth) {
            pFVar5[iVar17].ExclTime = (pFVar23->Time - local_c8) + pFVar5[iVar17].ExclTime;
          }
          local_c8 = pFVar23->Time;
        }
        else {
          if ((0x3ff < iVar18) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IterationState.StackDepth < SettingsType::MaxDepth",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                                  ,0x57f,L""), uVar20 = local_148, bVar12)) {
            pcVar2 = (code *)swi(3);
            uVar13 = (*pcVar2)();
            return (bool)uVar13;
          }
          iVar17 = iVar18 + 1;
          uStack_d0 = CONCAT44(uStack_d0._4_4_,iVar17);
          pFVar6 = local_b8->Export;
          pFVar5[iVar18].Event.Package = local_b8->Package;
          pFVar5[iVar18].Event.Export = pFVar6;
          uVar8 = *(undefined4 *)&local_b8->field_0x14;
          pFVar5[iVar18].Event.EventType = local_b8->EventType;
          *(undefined4 *)&pFVar5[iVar18].Event.field_0x14 = uVar8;
          dVar25 = pFVar23->Time;
          pFVar5[iVar18].ExclTime = 0.0;
          dVar25 = (double)CONCAT44((uint)((ulonglong)dVar25 >> 0x20) ^ uVar27,
                                    SUB84(dVar25,0) ^ uVar26);
          pFVar5[iVar18].StartTime = dVar25;
          if (1 < iVar17) {
            pFVar5[(longlong)iVar17 + -2].ExclTime =
                 (dVar25 - local_c8) + pFVar5[(longlong)iVar17 + -2].ExclTime;
          }
          if (pFVar16 == pFVar22) {
            if (uVar20 == (longlong)((pTVar4->PagesArray).ArrayNum + -1)) {
              local_e8 = pTVar4->TotalItemCount;
              local_f8 = (FLoadTimeProfilerCpuEvent *)0x0;
              pFStack_f0 = (FLoadTimeProfilerCpuEvent *)0x0;
              pFVar22 = (FLoadTimeProfilerCpuEvent *)0x0;
              pFStack_e0 = (FLoadTimeProfilerCpuEvent *)0x0;
              local_b8 = (FLoadTimeProfilerCpuEvent *)0x0;
            }
            else {
              uVar20 = uVar20 + 1;
              pTVar14 = pTVar4->FirstPage + uVar20;
              local_f8 = pTVar14->Items;
              if (local_f8 == (FLoadTimeProfilerCpuEvent *)0x0) {
                pFVar22 = (FLoadTimeProfilerCpuEvent *)0x0;
              }
              else {
                pFVar22 = local_f8 + (pTVar14->Count - 1);
              }
              local_e8 = uVar20 * pTVar4->PageSize;
              local_148 = uVar20;
              uStack_100 = uVar20;
              pFStack_f0 = pFVar22;
              pFStack_e0 = local_f8;
              local_b8 = local_f8;
              if (pTVar14 == (TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent> *)0x0) {
                local_b8 = (FLoadTimeProfilerCpuEvent *)0x0;
              }
            }
          }
          else {
            local_e8 = local_e8 + 1;
            pFStack_e0 = pFVar16 + 1;
            local_b8 = pFStack_e0;
          }
          iVar18 = param_1->TargetDepth;
          local_c8 = (double)CONCAT44((uint)((ulonglong)pFVar23->Time >> 0x20) ^ uVar27,
                                      SUB84(pFVar23->Time,0) ^ uVar26);
          pFVar16 = pFStack_e0;
          if (iVar17 == iVar18 + 1) {
            if (pFVar19 == pFStack_120) {
              if (uVar21 == (longlong)((pTVar3->PagesArray).ArrayNum + -1)) {
                local_118 = pTVar3->TotalItemCount;
                local_128 = (FEventScopeEntry *)0x0;
                pFStack_120 = (FEventScopeEntry *)0x0;
                pFStack_110 = (FEventScopeEntry *)0x0;
              }
              else {
                uStack_130 = uVar21 + 1;
                local_128 = pTVar3->FirstPage[uStack_130].Items;
                pFStack_110 = local_128;
                if (local_128 == (FEventScopeEntry *)0x0) {
                  local_118 = uStack_130 * pTVar3->PageSize;
                  pFStack_120 = (FEventScopeEntry *)0x0;
                }
                else {
                  local_118 = uStack_130 * pTVar3->PageSize;
                  pFStack_120 = local_128 + (pTVar3->FirstPage[uStack_130].Count - 1);
                }
              }
            }
            else {
              local_118 = local_118 + 1;
              pFStack_110 = pFVar19 + 1;
            }
            if ((local_res20 != false) &&
               (param_1->TargetExactTime - (double)CONCAT44(uVar29,uVar28) <=
                local_c8 - param_1->TargetExactTime)) goto LAB_14d45efde;
            pFVar6 = pFVar5[iVar18].Event.Export;
            pFVar7 = pFVar5 + iVar18;
            EVar9 = (pFVar7->Event).EventType;
            uVar28 = *(undefined4 *)&(pFVar7->Event).field_0x14;
            dVar25 = *(double *)(&(pFVar7->Event).EventType + 2);
            dStack_80 = pFVar5[iVar18].ExclTime;
            (param_2->EventInfo).Event.Package = pFVar5[iVar18].Event.Package;
            (param_2->EventInfo).Event.Export = pFVar6;
            param_2->bHasEndTime = false;
            (param_2->EventInfo).Event.EventType = EVar9;
            *(undefined4 *)&(param_2->EventInfo).Event.field_0x14 = uVar28;
            (param_2->EventInfo).StartTime = dVar25;
            goto LAB_14d45f00c;
          }
        }
        iVar18 = iVar17;
        if (pFVar19 == pFStack_120) break;
        local_118 = local_118 + 1;
        pFVar19 = pFVar19 + 1;
        pFVar23 = pFVar19;
        pFStack_110 = pFVar19;
      }
      if (uVar21 == (longlong)((pTVar3->PagesArray).ArrayNum + -1)) {
        local_118 = pTVar3->TotalItemCount;
        local_128 = (FEventScopeEntry *)0x0;
        pFStack_120 = (FEventScopeEntry *)0x0;
        pFStack_110 = (FEventScopeEntry *)0x0;
        break;
      }
      uStack_130 = uVar21 + 1;
      pFVar15 = pTVar3->FirstPage + uStack_130;
      local_128 = pFVar15->Items;
      if (local_128 == (FEventScopeEntry *)0x0) {
        pFStack_120 = (FEventScopeEntry *)0x0;
      }
      else {
        pFStack_120 = local_128 + (pFVar15->Count - 1);
      }
      local_118 = uStack_130 * pTVar3->PageSize;
      pFStack_110 = local_128;
      pFVar19 = local_128;
      uVar21 = uStack_130;
      pFVar23 = local_128;
    } while (pFVar15 != (FEventScopeEntryPage *)0x0);
LAB_14d45eec7:
    if (local_res20 == false) {
      return false;
    }
LAB_14d45efde:
    param_2->bHasEndTime = local_res20;
    (param_2->EventInfo).Event.Package = local_a0;
    (param_2->EventInfo).Event.Export = pFStack_98;
    *(undefined8 *)&(param_2->EventInfo).Event.EventType = local_90;
    (param_2->EventInfo).StartTime = dStack_88;
    param_2->EndTime = (double)CONCAT44(uVar29,uVar28);
  }
LAB_14d45f00c:
  (param_2->EventInfo).ExclTime = dStack_80;
  (param_2->IterationState).ScopeIterator.Outer = pTVar3;
  (param_2->IterationState).ScopeIterator.CurrentPageIndex = uStack_130;
  (param_2->IterationState).ScopeIterator.CurrentPageFirstItem = local_128;
  (param_2->IterationState).ScopeIterator.CurrentPageLastItem = pFStack_120;
  (param_2->IterationState).ScopeIterator.CurrentItemIndex = local_118;
  (param_2->IterationState).ScopeIterator.CurrentItem = pFStack_110;
  (param_2->IterationState).EventsIterator.Outer = pTVar4;
  (param_2->IterationState).EventsIterator.CurrentPageIndex = uStack_100;
  (param_2->IterationState).EventsIterator.CurrentPageFirstItem = local_f8;
  (param_2->IterationState).EventsIterator.CurrentPageLastItem = pFStack_f0;
  (param_2->IterationState).EventsIterator.CurrentItemIndex = local_e8;
  (param_2->IterationState).EventsIterator.CurrentItem = pFStack_e0;
  (param_2->IterationState).EventStack = pFVar5;
  *(undefined8 *)&(param_2->IterationState).StackDepth = uStack_d0;
  (param_2->IterationState).LastIterationTime = local_c8;
  return true;
}

// FindBestMatchEvent @ 14d45f090

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::FindBestMatchEvent
          (TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this,FFindBestMatchEventInParams *param_1,FFindBestMatchEventOutParams *param_2)

{
  FEventInfoStackEntry<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *pFVar1;
  code *pcVar2;
  TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage> *pTVar3;
  TPagedArray<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
  *pTVar4;
  FEventInfoStackEntry<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *pFVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined1 uVar9;
  TPagedArrayPage<TraceServices::FTimingProfilerEvent> *pTVar10;
  FEventScopeEntryPage *pFVar11;
  FTimingProfilerEvent *pFVar12;
  int iVar13;
  int iVar14;
  FEventScopeEntry *pFVar15;
  ulong64 uVar16;
  ulong64 uVar17;
  FTimingProfilerEvent *pFVar18;
  FEventScopeEntry *pFVar19;
  double dVar20;
  double dVar21;
  uint uVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  bool local_res20;
  ulong64 local_138;
  ulong64 uStack_120;
  FEventScopeEntry *local_118;
  FEventScopeEntry *pFStack_110;
  ulong64 local_108;
  FEventScopeEntry *pFStack_100;
  ulong64 uStack_f0;
  FTimingProfilerEvent *local_e8;
  FTimingProfilerEvent *pFStack_e0;
  ulong64 local_d8;
  FTimingProfilerEvent *pFStack_d0;
  undefined8 uStack_c0;
  double local_b8;
  FTimingProfilerEvent *local_a8;
  undefined8 local_90;
  double dStack_88;
  double dStack_80;
  
  uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  pTVar3 = (param_1->IterationState).ScopeIterator.Outer;
  uVar17 = (param_1->IterationState).ScopeIterator.CurrentPageIndex;
  pFVar15 = (param_1->IterationState).ScopeIterator.CurrentItem;
  local_b8 = (param_1->IterationState).LastIterationTime;
  pFVar12 = (param_1->IterationState).EventsIterator.CurrentItem;
  uVar22 = (uint)__xmm_80000000000000008000000000000000;
  uVar23 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar24 = 0;
  uVar25 = 0;
  local_90 = CONCAT44(local_90._4_4_,0xffffffff);
  local_res20 = false;
  pTVar4 = (param_1->IterationState).EventsIterator.Outer;
  uVar16 = (param_1->IterationState).EventsIterator.CurrentPageIndex;
  pFStack_110 = (param_1->IterationState).ScopeIterator.CurrentPageLastItem;
  pFVar5 = (param_1->IterationState).EventStack;
  uStack_c0 = *(undefined8 *)&(param_1->IterationState).StackDepth;
  local_108 = (param_1->IterationState).ScopeIterator.CurrentItemIndex;
  local_e8 = (param_1->IterationState).EventsIterator.CurrentPageFirstItem;
  pFVar18 = (param_1->IterationState).EventsIterator.CurrentPageLastItem;
  local_d8 = (param_1->IterationState).EventsIterator.CurrentItemIndex;
  pFStack_d0 = (param_1->IterationState).EventsIterator.CurrentItem;
  dStack_88 = 0.0;
  dStack_80 = 0.0;
  local_a8 = pFVar12;
  local_118 = (param_1->IterationState).ScopeIterator.CurrentPageFirstItem;
  pFStack_e0 = pFVar18;
  uStack_120 = uVar17;
  local_138 = uVar16;
  uStack_f0 = uVar16;
  pFStack_100 = (param_1->IterationState).ScopeIterator.CurrentItem;
  iVar14 = (int)uStack_c0;
joined_r0x00014d45f14e:
  do {
    pFVar19 = pFVar15;
    if ((pFVar15 == (FEventScopeEntry *)0x0) ||
       (dVar21 = pFVar15->Time,
       dVar20 = (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & uVar7,SUB84(dVar21,0) & uVar6),
       param_1->TargetExactTime <= dVar20 && dVar20 != param_1->TargetExactTime))
    goto LAB_14d45f565;
    uStack_c0._4_4_ = (undefined4)((ulonglong)uStack_c0 >> 0x20);
    if (0.0 <= dVar21) {
      if ((iVar14 < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IterationState.StackDepth > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                             ,0x55a,L""), uVar16 = local_138, bVar8)) {
        pcVar2 = (code *)swi(3);
        uVar9 = (*pcVar2)();
        return (bool)uVar9;
      }
      iVar14 = iVar14 + -1;
      uStack_c0 = CONCAT44(uStack_c0._4_4_,iVar14);
      if (iVar14 == param_1->TargetDepth) {
        local_res20 = true;
        pFVar5[iVar14].ExclTime = (pFVar15->Time - local_b8) + pFVar5[iVar14].ExclTime;
        local_90 = *(undefined8 *)(pFVar5 + iVar14);
        dStack_88 = pFVar5[iVar14].StartTime;
        dStack_80 = pFVar5[iVar14].ExclTime;
        uVar24 = SUB84(pFVar15->Time,0);
        uVar25 = (undefined4)((ulonglong)pFVar15->Time >> 0x20);
      }
      local_b8 = pFVar15->Time;
    }
    else {
      if ((0x3ff < iVar14) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IterationState.StackDepth < SettingsType::MaxDepth",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                             ,0x54b,L""), uVar16 = local_138, bVar8)) {
        pcVar2 = (code *)swi(3);
        uVar9 = (*pcVar2)();
        return (bool)uVar9;
      }
      iVar13 = iVar14 + 1;
      uStack_c0 = CONCAT44(uStack_c0._4_4_,iVar13);
      pFVar5[iVar14].Event.TimerIndex = local_a8->TimerIndex;
      dVar21 = pFVar15->Time;
      pFVar5[iVar14].ExclTime = 0.0;
      dVar21 = (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) ^ uVar23,SUB84(dVar21,0) ^ uVar22)
      ;
      pFVar5[iVar14].StartTime = dVar21;
      if (1 < iVar13) {
        pFVar5[(longlong)iVar13 + -2].ExclTime =
             (dVar21 - local_b8) + pFVar5[(longlong)iVar13 + -2].ExclTime;
      }
      iVar14 = iVar13;
      if (pFVar12 == pFVar18) {
        if (uVar16 == (longlong)((pTVar4->PagesArray).ArrayNum + -1)) {
          local_d8 = pTVar4->TotalItemCount;
          pFVar12 = (FTimingProfilerEvent *)0x0;
          local_e8 = (FTimingProfilerEvent *)0x0;
          pFStack_e0 = (FTimingProfilerEvent *)0x0;
          local_b8 = (double)CONCAT44((uint)((ulonglong)pFVar15->Time >> 0x20) ^ uVar23,
                                      SUB84(pFVar15->Time,0) ^ uVar22);
          pFVar18 = (FTimingProfilerEvent *)0x0;
          pFStack_d0 = (FTimingProfilerEvent *)0x0;
          local_a8 = (FTimingProfilerEvent *)0x0;
        }
        else {
          uVar16 = uVar16 + 1;
          pTVar10 = pTVar4->FirstPage + uVar16;
          pFVar12 = pTVar10->Items;
          if (pFVar12 == (FTimingProfilerEvent *)0x0) {
            pFVar18 = (FTimingProfilerEvent *)0x0;
          }
          else {
            pFVar18 = pFVar12 + (pTVar10->Count - 1);
          }
          local_d8 = uVar16 * pTVar4->PageSize;
          local_138 = uVar16;
          uStack_f0 = uVar16;
          local_e8 = pFVar12;
          pFStack_e0 = pFVar18;
          if (pTVar10 != (TPagedArrayPage<TraceServices::FTimingProfilerEvent> *)0x0)
          goto LAB_14d45f334;
          local_b8 = (double)CONCAT44((uint)((ulonglong)pFVar15->Time >> 0x20) ^ uVar23,
                                      SUB84(pFVar15->Time,0) ^ uVar22);
          pFStack_d0 = pFVar12;
          local_a8 = (FTimingProfilerEvent *)0x0;
        }
      }
      else {
        local_d8 = local_d8 + 1;
        pFVar12 = pFVar12 + 1;
LAB_14d45f334:
        local_b8 = (double)CONCAT44((uint)((ulonglong)pFVar15->Time >> 0x20) ^ uVar23,
                                    SUB84(pFVar15->Time,0) ^ uVar22);
        pFStack_d0 = pFVar12;
        local_a8 = pFVar12;
      }
    }
    if (pFVar15 != pFStack_110) {
      local_108 = local_108 + 1;
      pFVar15 = pFVar15 + 1;
      pFStack_100 = pFVar15;
      goto joined_r0x00014d45f14e;
    }
    if (uVar17 == (longlong)((pTVar3->PagesArray).ArrayNum + -1)) {
      local_108 = pTVar3->TotalItemCount;
      pFVar15 = (FEventScopeEntry *)0x0;
      pFStack_100 = (FEventScopeEntry *)0x0;
      local_118 = (FEventScopeEntry *)0x0;
      pFStack_110 = (FEventScopeEntry *)0x0;
      pFVar19 = (FEventScopeEntry *)0x0;
      goto LAB_14d45f565;
    }
    uVar17 = uVar17 + 1;
    pFVar11 = pTVar3->FirstPage + uVar17;
    pFVar15 = pFVar11->Items;
    if (pFVar15 == (FEventScopeEntry *)0x0) {
      pFStack_110 = (FEventScopeEntry *)0x0;
    }
    else {
      pFStack_110 = pFVar15 + (pFVar11->Count - 1);
    }
    local_108 = uVar17 * pTVar3->PageSize;
    local_118 = pFVar15;
    uStack_120 = uVar17;
    pFStack_100 = pFVar15;
  } while (pFVar11 != (FEventScopeEntryPage *)0x0);
  pFVar19 = (FEventScopeEntry *)0x0;
LAB_14d45f565:
  iVar13 = param_1->TargetDepth;
  if (iVar13 < iVar14) {
    pFVar1 = pFVar5 + iVar13;
    uVar24 = *(undefined4 *)&pFVar1->field_0x4;
    dVar21 = pFVar1->StartTime;
    (param_2->EventInfo).Event = (FTimingProfilerEvent)(pFVar1->Event).TimerIndex;
    *(undefined4 *)&(param_2->EventInfo).field_0x4 = uVar24;
    (param_2->EventInfo).StartTime = dVar21;
    dStack_80 = pFVar5[iVar13].ExclTime;
    param_2->bHasEndTime = false;
  }
  else {
    do {
      while( true ) {
        if ((pFVar19 == (FEventScopeEntry *)0x0) ||
           (dVar21 = pFVar19->Time,
           dVar20 = (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & uVar7,
                                     SUB84(dVar21,0) & uVar6),
           param_1->TargetEndTime <= dVar20 && dVar20 != param_1->TargetEndTime))
        goto LAB_14d45f8a5;
        uStack_c0._4_4_ = (undefined4)((ulonglong)uStack_c0 >> 0x20);
        if (0.0 <= dVar21) {
          if ((iVar14 < 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IterationState.StackDepth > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                                 ,0x596,L""), uVar16 = local_138, bVar8)) {
            pcVar2 = (code *)swi(3);
            uVar9 = (*pcVar2)();
            return (bool)uVar9;
          }
          iVar13 = iVar14 + -1;
          uStack_c0 = CONCAT44(uStack_c0._4_4_,iVar13);
          if (iVar13 == param_1->TargetDepth) {
            pFVar5[iVar13].ExclTime = (pFVar19->Time - local_b8) + pFVar5[iVar13].ExclTime;
          }
          local_b8 = pFVar19->Time;
        }
        else {
          if ((0x3ff < iVar14) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IterationState.StackDepth < SettingsType::MaxDepth",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                                 ,0x57f,L""), uVar16 = local_138, bVar8)) {
            pcVar2 = (code *)swi(3);
            uVar9 = (*pcVar2)();
            return (bool)uVar9;
          }
          iVar13 = iVar14 + 1;
          uStack_c0 = CONCAT44(uStack_c0._4_4_,iVar13);
          pFVar5[iVar14].Event.TimerIndex = local_a8->TimerIndex;
          dVar21 = pFVar19->Time;
          pFVar5[iVar14].ExclTime = 0.0;
          dVar21 = (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) ^ uVar23,
                                    SUB84(dVar21,0) ^ uVar22);
          pFVar5[iVar14].StartTime = dVar21;
          if (1 < iVar13) {
            pFVar5[(longlong)iVar13 + -2].ExclTime =
                 (dVar21 - local_b8) + pFVar5[(longlong)iVar13 + -2].ExclTime;
          }
          if (pFVar12 == pFVar18) {
            if (uVar16 == (longlong)((pTVar4->PagesArray).ArrayNum + -1)) {
              local_d8 = pTVar4->TotalItemCount;
              local_e8 = (FTimingProfilerEvent *)0x0;
              pFStack_e0 = (FTimingProfilerEvent *)0x0;
              pFVar18 = (FTimingProfilerEvent *)0x0;
              pFStack_d0 = (FTimingProfilerEvent *)0x0;
              local_a8 = (FTimingProfilerEvent *)0x0;
            }
            else {
              uVar16 = uVar16 + 1;
              pTVar10 = pTVar4->FirstPage + uVar16;
              local_e8 = pTVar10->Items;
              if (local_e8 == (FTimingProfilerEvent *)0x0) {
                pFVar18 = (FTimingProfilerEvent *)0x0;
              }
              else {
                pFVar18 = local_e8 + (pTVar10->Count - 1);
              }
              local_d8 = uVar16 * pTVar4->PageSize;
              local_138 = uVar16;
              uStack_f0 = uVar16;
              pFStack_e0 = pFVar18;
              pFStack_d0 = local_e8;
              local_a8 = local_e8;
              if (pTVar10 == (TPagedArrayPage<TraceServices::FTimingProfilerEvent> *)0x0) {
                local_a8 = (FTimingProfilerEvent *)0x0;
              }
            }
          }
          else {
            local_d8 = local_d8 + 1;
            pFStack_d0 = pFVar12 + 1;
            local_a8 = pFStack_d0;
          }
          iVar14 = param_1->TargetDepth;
          local_b8 = (double)CONCAT44((uint)((ulonglong)pFVar19->Time >> 0x20) ^ uVar23,
                                      SUB84(pFVar19->Time,0) ^ uVar22);
          pFVar12 = pFStack_d0;
          if (iVar13 == iVar14 + 1) {
            if (pFVar15 == pFStack_110) {
              if (uVar17 == (longlong)((pTVar3->PagesArray).ArrayNum + -1)) {
                local_108 = pTVar3->TotalItemCount;
                local_118 = (FEventScopeEntry *)0x0;
                pFStack_110 = (FEventScopeEntry *)0x0;
                pFStack_100 = (FEventScopeEntry *)0x0;
              }
              else {
                uStack_120 = uVar17 + 1;
                local_118 = pTVar3->FirstPage[uStack_120].Items;
                pFStack_100 = local_118;
                if (local_118 == (FEventScopeEntry *)0x0) {
                  local_108 = uStack_120 * pTVar3->PageSize;
                  pFStack_110 = (FEventScopeEntry *)0x0;
                }
                else {
                  local_108 = uStack_120 * pTVar3->PageSize;
                  pFStack_110 = local_118 + (pTVar3->FirstPage[uStack_120].Count - 1);
                }
              }
            }
            else {
              local_108 = local_108 + 1;
              pFStack_100 = pFVar15 + 1;
            }
            if ((local_res20 != false) &&
               (param_1->TargetExactTime - (double)CONCAT44(uVar25,uVar24) <=
                local_b8 - param_1->TargetExactTime)) goto LAB_14d45f9ae;
            pFVar1 = pFVar5 + iVar14;
            uVar24 = *(undefined4 *)&pFVar1->field_0x4;
            dVar20 = pFVar1->StartTime;
            dVar21 = pFVar5[iVar14].ExclTime;
            (param_2->EventInfo).Event = (FTimingProfilerEvent)(pFVar1->Event).TimerIndex;
            *(undefined4 *)&(param_2->EventInfo).field_0x4 = uVar24;
            (param_2->EventInfo).StartTime = dVar20;
            param_2->bHasEndTime = false;
            (param_2->EventInfo).ExclTime = dVar21;
            goto LAB_14d45f9d6;
          }
        }
        iVar14 = iVar13;
        if (pFVar15 == pFStack_110) break;
        local_108 = local_108 + 1;
        pFVar15 = pFVar15 + 1;
        pFVar19 = pFVar15;
        pFStack_100 = pFVar15;
      }
      if (uVar17 == (longlong)((pTVar3->PagesArray).ArrayNum + -1)) {
        local_108 = pTVar3->TotalItemCount;
        local_118 = (FEventScopeEntry *)0x0;
        pFStack_110 = (FEventScopeEntry *)0x0;
        pFStack_100 = (FEventScopeEntry *)0x0;
        break;
      }
      uStack_120 = uVar17 + 1;
      pFVar11 = pTVar3->FirstPage + uStack_120;
      local_118 = pFVar11->Items;
      if (local_118 == (FEventScopeEntry *)0x0) {
        pFStack_110 = (FEventScopeEntry *)0x0;
      }
      else {
        pFStack_110 = local_118 + (pFVar11->Count - 1);
      }
      local_108 = uStack_120 * pTVar3->PageSize;
      pFStack_100 = local_118;
      pFVar15 = local_118;
      uVar17 = uStack_120;
      pFVar19 = local_118;
    } while (pFVar11 != (FEventScopeEntryPage *)0x0);
LAB_14d45f8a5:
    if (local_res20 == false) {
      return false;
    }
LAB_14d45f9ae:
    param_2->EndTime = (double)CONCAT44(uVar25,uVar24);
    *(undefined8 *)&param_2->EventInfo = local_90;
    (param_2->EventInfo).StartTime = dStack_88;
    param_2->bHasEndTime = local_res20;
  }
  (param_2->EventInfo).ExclTime = dStack_80;
LAB_14d45f9d6:
  (param_2->IterationState).ScopeIterator.Outer = pTVar3;
  (param_2->IterationState).ScopeIterator.CurrentPageIndex = uStack_120;
  (param_2->IterationState).ScopeIterator.CurrentPageFirstItem = local_118;
  (param_2->IterationState).ScopeIterator.CurrentPageLastItem = pFStack_110;
  (param_2->IterationState).ScopeIterator.CurrentItemIndex = local_108;
  (param_2->IterationState).ScopeIterator.CurrentItem = pFStack_100;
  (param_2->IterationState).EventsIterator.Outer = pTVar4;
  (param_2->IterationState).EventsIterator.CurrentPageIndex = uStack_f0;
  (param_2->IterationState).EventsIterator.CurrentPageFirstItem = local_e8;
  (param_2->IterationState).EventsIterator.CurrentPageLastItem = pFStack_e0;
  (param_2->IterationState).EventsIterator.CurrentItemIndex = local_d8;
  (param_2->IterationState).EventsIterator.CurrentItem = pFStack_d0;
  (param_2->IterationState).EventStack = pFVar5;
  *(undefined8 *)&(param_2->IterationState).StackDepth = uStack_c0;
  (param_2->IterationState).LastIterationTime = local_b8;
  return true;
}

// FindEventUsingPageInitialStack @ 14d460480

bool __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::FindEventUsingPageInitialStack
          (TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this,TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
                 *param_1,double param_2,double param_3,int param_4,
          FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
          *param_5,FEventStackEntry *param_6)

{
  FEventStackEntry *pFVar1;
  double *pdVar2;
  double dVar3;
  TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage> *pTVar4;
  ulong64 uVar5;
  FEventScopeEntry *pFVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  FEventStackEntry *pFVar9;
  FEventScopeEntryPage *pFVar10;
  FEventScopeEntry *pFVar11;
  longlong lVar12;
  FEventScopeEntryPage *pFVar13;
  uint uVar14;
  uint uVar15;
  
  pTVar4 = param_1->Outer;
  uVar5 = param_1->CurrentPageIndex;
  lVar12 = (longlong)param_4;
  pFVar13 = pTVar4->FirstPage + uVar5;
  if ((param_4 < (int)(uint)pFVar13->InitialStackCount) &&
     ((dVar3 = pFVar13->InitialStack[lVar12].EndTime, dVar3 < 0.0 || (param_2 < dVar3)))) {
LAB_14d460588:
    pdVar2 = &pFVar13->InitialStack[lVar12].EndTime;
    if (*pdVar2 <= 0.0 && *pdVar2 != 0.0) {
      while (uVar5 = param_1->CurrentPageIndex,
            uVar5 != (longlong)((pTVar4->PagesArray).ArrayNum + -1)) {
        param_1->CurrentPageIndex = uVar5 + 1;
        pFVar10 = pTVar4->FirstPage;
        pFVar6 = pFVar10[uVar5 + 1].Items;
        param_1->CurrentPageFirstItem = pFVar6;
        if (pFVar6 == (FEventScopeEntry *)0x0) {
          pFVar11 = (FEventScopeEntry *)0x0;
        }
        else {
          pFVar11 = pFVar6 + (pFVar10[uVar5 + 1].Count - 1);
        }
        param_1->CurrentPageLastItem = pFVar11;
        param_1->CurrentItemIndex = param_1->CurrentPageIndex * pTVar4->PageSize;
        pFVar10 = pTVar4->FirstPage;
        param_1->CurrentItem = pFVar6;
        pFVar10 = pFVar10 + param_1->CurrentPageIndex;
        if ((pFVar10 == (FEventScopeEntryPage *)0x0) ||
           (pdVar2 = &pFVar10->InitialStack[lVar12].EndTime, pFVar13 = pFVar10,
           0.0 < *pdVar2 || *pdVar2 == 0.0)) goto LAB_14d460620;
      }
      param_1->CurrentItem = (FEventScopeEntry *)0x0;
    }
LAB_14d460620:
    pFVar9 = pFVar13->InitialStack;
    pFVar1 = pFVar9 + lVar12;
    uVar5 = pFVar1->EventIndex;
    param_6->EnterScopeIndex = pFVar1->EnterScopeIndex;
    param_6->EventIndex = uVar5;
    pdVar2 = &pFVar9[lVar12].ExclTime;
    dVar3 = pdVar2[1];
    param_6->ExclTime = *pdVar2;
    param_6->EndTime = dVar3;
    return true;
  }
  if (uVar5 == (longlong)((pTVar4->PagesArray).ArrayNum + -1)) {
    param_1->CurrentItem = (FEventScopeEntry *)0x0;
  }
  else {
    uVar5 = uVar5 + 1;
    pFVar6 = pFVar13[1].Items;
    param_1->CurrentPageIndex = uVar5;
    param_1->CurrentPageFirstItem = pFVar6;
    if (pFVar6 == (FEventScopeEntry *)0x0) {
      pFVar11 = (FEventScopeEntry *)0x0;
    }
    else {
      pFVar11 = pFVar6 + (pFVar13[1].Count - 1);
    }
    param_1->CurrentPageLastItem = pFVar11;
    pFVar13 = pTVar4->FirstPage;
    param_1->CurrentItemIndex = uVar5 * pTVar4->PageSize;
    param_1->CurrentItem = pFVar6;
    pFVar13 = pFVar13 + uVar5;
    if ((pFVar13 != (FEventScopeEntryPage *)0x0) &&
       (param_4 < (int)(uint)pFVar13->InitialStackCount)) {
      uVar7 = pFVar13->InitialStack[lVar12].EnterScopeIndex;
      uVar8 = (param_5->ScopeEntries).PageSize;
      dVar3 = (param_5->ScopeEntries).FirstPage[uVar7 / uVar8].Items[uVar7 % uVar8].Time;
      uVar14 = SUB84(dVar3,0);
      uVar15 = (uint)((ulonglong)dVar3 >> 0x20);
      if (dVar3 < 0.0) {
        uVar14 = uVar14 ^ (uint)__xmm_80000000000000008000000000000000;
        uVar15 = uVar15 ^ __xmm_80000000000000008000000000000000._4_4_;
      }
      if ((double)CONCAT44(uVar15,uVar14) < param_2) goto LAB_14d460588;
    }
  }
  return false;
}

// FindEventUsingPageInitialStack @ 14d460660

bool __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::FindEventUsingPageInitialStack
          (TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this,TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
                 *param_1,double param_2,double param_3,int param_4,
          FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
          *param_5,FEventStackEntry *param_6)

{
  FEventStackEntry *pFVar1;
  double *pdVar2;
  double dVar3;
  TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage> *pTVar4;
  ulong64 uVar5;
  FEventScopeEntry *pFVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  FEventStackEntry *pFVar9;
  FEventScopeEntryPage *pFVar10;
  FEventScopeEntry *pFVar11;
  longlong lVar12;
  FEventScopeEntryPage *pFVar13;
  uint uVar14;
  uint uVar15;
  
  pTVar4 = param_1->Outer;
  uVar5 = param_1->CurrentPageIndex;
  lVar12 = (longlong)param_4;
  pFVar13 = pTVar4->FirstPage + uVar5;
  if ((param_4 < (int)(uint)pFVar13->InitialStackCount) &&
     ((dVar3 = pFVar13->InitialStack[lVar12].EndTime, dVar3 < 0.0 || (param_2 < dVar3)))) {
LAB_14d460768:
    pdVar2 = &pFVar13->InitialStack[lVar12].EndTime;
    if (*pdVar2 <= 0.0 && *pdVar2 != 0.0) {
      while (uVar5 = param_1->CurrentPageIndex,
            uVar5 != (longlong)((pTVar4->PagesArray).ArrayNum + -1)) {
        param_1->CurrentPageIndex = uVar5 + 1;
        pFVar10 = pTVar4->FirstPage;
        pFVar6 = pFVar10[uVar5 + 1].Items;
        param_1->CurrentPageFirstItem = pFVar6;
        if (pFVar6 == (FEventScopeEntry *)0x0) {
          pFVar11 = (FEventScopeEntry *)0x0;
        }
        else {
          pFVar11 = pFVar6 + (pFVar10[uVar5 + 1].Count - 1);
        }
        param_1->CurrentPageLastItem = pFVar11;
        param_1->CurrentItemIndex = param_1->CurrentPageIndex * pTVar4->PageSize;
        pFVar10 = pTVar4->FirstPage;
        param_1->CurrentItem = pFVar6;
        pFVar10 = pFVar10 + param_1->CurrentPageIndex;
        if ((pFVar10 == (FEventScopeEntryPage *)0x0) ||
           (pdVar2 = &pFVar10->InitialStack[lVar12].EndTime, pFVar13 = pFVar10,
           0.0 < *pdVar2 || *pdVar2 == 0.0)) goto LAB_14d460800;
      }
      param_1->CurrentItem = (FEventScopeEntry *)0x0;
    }
LAB_14d460800:
    pFVar9 = pFVar13->InitialStack;
    pFVar1 = pFVar9 + lVar12;
    uVar5 = pFVar1->EventIndex;
    param_6->EnterScopeIndex = pFVar1->EnterScopeIndex;
    param_6->EventIndex = uVar5;
    pdVar2 = &pFVar9[lVar12].ExclTime;
    dVar3 = pdVar2[1];
    param_6->ExclTime = *pdVar2;
    param_6->EndTime = dVar3;
    return true;
  }
  if (uVar5 == (longlong)((pTVar4->PagesArray).ArrayNum + -1)) {
    param_1->CurrentItem = (FEventScopeEntry *)0x0;
  }
  else {
    uVar5 = uVar5 + 1;
    pFVar6 = pFVar13[1].Items;
    param_1->CurrentPageIndex = uVar5;
    param_1->CurrentPageFirstItem = pFVar6;
    if (pFVar6 == (FEventScopeEntry *)0x0) {
      pFVar11 = (FEventScopeEntry *)0x0;
    }
    else {
      pFVar11 = pFVar6 + (pFVar13[1].Count - 1);
    }
    param_1->CurrentPageLastItem = pFVar11;
    pFVar13 = pTVar4->FirstPage;
    param_1->CurrentItemIndex = uVar5 * pTVar4->PageSize;
    param_1->CurrentItem = pFVar6;
    pFVar13 = pFVar13 + uVar5;
    if ((pFVar13 != (FEventScopeEntryPage *)0x0) &&
       (param_4 < (int)(uint)pFVar13->InitialStackCount)) {
      uVar7 = pFVar13->InitialStack[lVar12].EnterScopeIndex;
      uVar8 = (param_5->ScopeEntries).PageSize;
      dVar3 = (param_5->ScopeEntries).FirstPage[uVar7 / uVar8].Items[uVar7 % uVar8].Time;
      uVar14 = SUB84(dVar3,0);
      uVar15 = (uint)((ulonglong)dVar3 >> 0x20);
      if (dVar3 < 0.0) {
        uVar14 = uVar14 ^ (uint)__xmm_80000000000000008000000000000000;
        uVar15 = uVar15 ^ __xmm_80000000000000008000000000000000._4_4_;
      }
      if ((double)CONCAT44(uVar15,uVar14) < param_2) goto LAB_14d460768;
    }
  }
  return false;
}

// GetDepthAt @ 14d464c10

int __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::GetDepthAt(TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
             *this,double param_1)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  FEventScopeEntry *pFVar11;
  ulong64 uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  FEventScopeEntryPage *pFVar16;
  TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
  local_68 [2];
  
  if (((this->DetailLevels).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    iVar10 = (*pcVar4)();
    return iVar10;
  }
  pFVar2 = (this->DetailLevels).AllocatorInstance.Data;
  if (*(longlong *)(pFVar2 + 0x38) != 0) {
    lVar3 = *(longlong *)(pFVar2 + 0x20);
    uVar5 = (longlong)*(int *)(pFVar2 + 0x18);
    lVar15 = 0;
    while (lVar6 = lVar15, uVar5 != 0) {
      uVar14 = uVar5 >> 1;
      uVar13 = (uint)uVar5;
      uVar5 = uVar14;
      lVar15 = uVar14 + lVar6 + (ulonglong)(uVar13 & 1);
      if (param_1 < *(double *)((uVar14 + lVar6) * 0x40 + 0x10 + lVar3)) {
        lVar15 = lVar6;
      }
    }
    lVar15 = lVar6 + -1;
    if (lVar6 == 0) {
      lVar15 = 0;
    }
    if (*(double *)(lVar15 * 0x40 + 0x10 + lVar3) <= param_1) {
      uVar13 = (uint)*(ushort *)(lVar15 * 0x40 + 0x38 + lVar3);
      TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>::
      TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
                (local_68,(TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
                           *)(pFVar2 + 8),lVar15 * *(longlong *)(pFVar2 + 0x30));
      uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar12 = local_68[0].CurrentPageIndex;
      pFVar11 = local_68[0].CurrentItem;
      do {
        while( true ) {
          if (pFVar11 == (FEventScopeEntry *)0x0) {
            return uVar13;
          }
          dVar1 = pFVar11->Time;
          if (param_1 <=
              (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & uVar8,SUB84(dVar1,0) & uVar7)) {
            return uVar13;
          }
          if (0.0 <= dVar1) {
            if (((int)uVar13 < 1) &&
               (local_68[0].CurrentItem = pFVar11,
               bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CurrentStackDepth > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                                  ,0x45e,L""), bVar9)) {
              pcVar4 = (code *)swi(3);
              iVar10 = (*pcVar4)();
              return iVar10;
            }
            uVar13 = uVar13 - 1;
          }
          else {
            uVar13 = uVar13 + 1;
          }
          if (pFVar11 == local_68[0].CurrentPageLastItem) break;
          local_68[0].CurrentItemIndex = local_68[0].CurrentItemIndex + 1;
          pFVar11 = pFVar11 + 1;
        }
        if (uVar12 == (longlong)(((local_68[0].Outer)->PagesArray).ArrayNum + -1)) {
          return uVar13;
        }
        uVar12 = uVar12 + 1;
        pFVar16 = (local_68[0].Outer)->FirstPage + uVar12;
        local_68[0].CurrentPageFirstItem = pFVar16->Items;
        if (local_68[0].CurrentPageFirstItem == (FEventScopeEntry *)0x0) {
          local_68[0].CurrentPageLastItem = (FEventScopeEntry *)0x0;
        }
        else {
          local_68[0].CurrentPageLastItem = local_68[0].CurrentPageFirstItem + (pFVar16->Count - 1);
        }
        local_68[0].CurrentItemIndex = uVar12 * (local_68[0].Outer)->PageSize;
        local_68[0].CurrentPageIndex = uVar12;
        pFVar11 = local_68[0].CurrentPageFirstItem;
      } while (pFVar16 != (FEventScopeEntryPage *)0x0);
      return uVar13;
    }
  }
  return 0;
}

// GetDepthAt @ 14d464e70

int __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::GetDepthAt(TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
             *this,double param_1)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  FEventScopeEntry *pFVar11;
  ulong64 uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  FEventScopeEntryPage *pFVar16;
  TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
  local_68 [2];
  
  if (((this->DetailLevels).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    iVar10 = (*pcVar4)();
    return iVar10;
  }
  pFVar2 = (this->DetailLevels).AllocatorInstance.Data;
  if (*(longlong *)(pFVar2 + 0x38) != 0) {
    lVar3 = *(longlong *)(pFVar2 + 0x20);
    uVar5 = (longlong)*(int *)(pFVar2 + 0x18);
    lVar15 = 0;
    while (lVar6 = lVar15, uVar5 != 0) {
      uVar14 = uVar5 >> 1;
      uVar13 = (uint)uVar5;
      uVar5 = uVar14;
      lVar15 = uVar14 + lVar6 + (ulonglong)(uVar13 & 1);
      if (param_1 < *(double *)((uVar14 + lVar6) * 0x40 + 0x10 + lVar3)) {
        lVar15 = lVar6;
      }
    }
    lVar15 = lVar6 + -1;
    if (lVar6 == 0) {
      lVar15 = 0;
    }
    if (*(double *)(lVar15 * 0x40 + 0x10 + lVar3) <= param_1) {
      uVar13 = (uint)*(ushort *)(lVar15 * 0x40 + 0x38 + lVar3);
      TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>::
      TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
                (local_68,(TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
                           *)(pFVar2 + 8),lVar15 * *(longlong *)(pFVar2 + 0x30));
      uVar8 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar7 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar12 = local_68[0].CurrentPageIndex;
      pFVar11 = local_68[0].CurrentItem;
      do {
        while( true ) {
          if (pFVar11 == (FEventScopeEntry *)0x0) {
            return uVar13;
          }
          dVar1 = pFVar11->Time;
          if (param_1 <=
              (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & uVar8,SUB84(dVar1,0) & uVar7)) {
            return uVar13;
          }
          if (0.0 <= dVar1) {
            if (((int)uVar13 < 1) &&
               (local_68[0].CurrentItem = pFVar11,
               bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CurrentStackDepth > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                                  ,0x45e,L""), bVar9)) {
              pcVar4 = (code *)swi(3);
              iVar10 = (*pcVar4)();
              return iVar10;
            }
            uVar13 = uVar13 - 1;
          }
          else {
            uVar13 = uVar13 + 1;
          }
          if (pFVar11 == local_68[0].CurrentPageLastItem) break;
          local_68[0].CurrentItemIndex = local_68[0].CurrentItemIndex + 1;
          pFVar11 = pFVar11 + 1;
        }
        if (uVar12 == (longlong)(((local_68[0].Outer)->PagesArray).ArrayNum + -1)) {
          return uVar13;
        }
        uVar12 = uVar12 + 1;
        pFVar16 = (local_68[0].Outer)->FirstPage + uVar12;
        local_68[0].CurrentPageFirstItem = pFVar16->Items;
        if (local_68[0].CurrentPageFirstItem == (FEventScopeEntry *)0x0) {
          local_68[0].CurrentPageLastItem = (FEventScopeEntry *)0x0;
        }
        else {
          local_68[0].CurrentPageLastItem = local_68[0].CurrentPageFirstItem + (pFVar16->Count - 1);
        }
        local_68[0].CurrentItemIndex = uVar12 * (local_68[0].Outer)->PageSize;
        local_68[0].CurrentPageIndex = uVar12;
        pFVar11 = local_68[0].CurrentPageFirstItem;
      } while (pFVar16 != (FEventScopeEntryPage *)0x0);
      return uVar13;
    }
  }
  return 0;
}

// GetEndTime @ 14d4652e0

double __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::GetEndTime(TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
             *this)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  code *pcVar6;
  bool bVar7;
  double dVar8;
  
  if ((this->DetailLevels).ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      dVar8 = (double)(*pcVar6)();
      return dVar8;
    }
  }
  lVar3 = *(longlong *)((this->DetailLevels).AllocatorInstance.Data + 0x38);
  if (lVar3 != 0) {
    if ((this->DetailLevels).ArrayNum < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        dVar8 = (double)(*pcVar6)();
        return dVar8;
      }
    }
    pFVar4 = (this->DetailLevels).AllocatorInstance.Data;
    uVar1 = lVar3 - 1;
    uVar5 = *(ulonglong *)(pFVar4 + 0x30);
    uVar2 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(pFVar4 + 0x20) + (uVar1 / uVar5) * 0x40) +
             (uVar1 % uVar5) * 8);
    return (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  }
  return 0.0;
}

// GetEndTime @ 14d4653c0

double __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::GetEndTime(TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
             *this)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  ulonglong uVar5;
  code *pcVar6;
  bool bVar7;
  double dVar8;
  
  if ((this->DetailLevels).ArrayNum < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      dVar8 = (double)(*pcVar6)();
      return dVar8;
    }
  }
  lVar3 = *(longlong *)((this->DetailLevels).AllocatorInstance.Data + 0x38);
  if (lVar3 != 0) {
    if ((this->DetailLevels).ArrayNum < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        dVar8 = (double)(*pcVar6)();
        return dVar8;
      }
    }
    pFVar4 = (this->DetailLevels).AllocatorInstance.Data;
    uVar1 = lVar3 - 1;
    uVar5 = *(ulonglong *)(pFVar4 + 0x30);
    uVar2 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(pFVar4 + 0x20) + (uVar1 / uVar5) * 0x40) +
             (uVar1 % uVar5) * 8);
    return (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  }
  return 0.0;
}

// GetEvent @ 14d4655a0

FLoadTimeProfilerCpuEvent * __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::GetEvent(TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this,ulong64 param_1)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  FLoadTimeProfilerCpuEvent *pFVar5;
  
  if ((this->DetailLevels).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FLoadTimeProfilerCpuEvent *)(*pcVar3)();
      return pFVar5;
    }
  }
  pFVar1 = (this->DetailLevels).AllocatorInstance.Data;
  uVar2 = *(ulonglong *)(pFVar1 + 0x68);
  return (FLoadTimeProfilerCpuEvent *)
         (*(longlong *)(*(longlong *)(pFVar1 + 0x58) + (param_1 / uVar2) * 0x10) +
         (param_1 % uVar2) * 0x18);
}

// GetEvent @ 14d465620

FTimingProfilerEvent * __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::GetEvent(TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
           *this,ulong64 param_1)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  FTimingProfilerEvent *pFVar5;
  
  if ((this->DetailLevels).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FTimingProfilerEvent *)(*pcVar3)();
      return pFVar5;
    }
  }
  pFVar1 = (this->DetailLevels).AllocatorInstance.Data;
  uVar2 = *(ulonglong *)(pFVar1 + 0x68);
  return (FTimingProfilerEvent *)
         (*(longlong *)(*(longlong *)(pFVar1 + 0x58) + (param_1 / uVar2) * 0x10) +
         (param_1 % uVar2) * 4);
}

// GetEventCount @ 14d4656b0

ulong64 __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::GetEventCount(TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                *this)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  if (0 < (this->DetailLevels).ArrayNum) {
    return *(ulong64 *)((this->DetailLevels).AllocatorInstance.Data + 0x70);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return *(ulong64 *)((this->DetailLevels).AllocatorInstance.Data + 0x70);
}

// GetEventCount @ 14d465720

ulong64 __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::GetEventCount(TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                *this)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  
  if (0 < (this->DetailLevels).ArrayNum) {
    return *(ulong64 *)((this->DetailLevels).AllocatorInstance.Data + 0x70);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return *(ulong64 *)((this->DetailLevels).AllocatorInstance.Data + 0x70);
}

// GetEventInfo @ 14d4657d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::GetEventInfo(TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
               *this,double param_1,double param_2,int param_3,FTimelineEventInfo *param_4)

{
  double dVar1;
  ushort uVar2;
  FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *this_00;
  FLoadTimeProfilerCpuEvent *pFVar3;
  longlong lVar4;
  FLoadTimeProfilerCpuEvent *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ELoadTimeProfilerObjectEventType EVar10;
  FPackageExportInfo *pFVar11;
  undefined4 uVar12;
  TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage> *pTVar13;
  bool bVar14;
  undefined1 uVar15;
  ELoadTimeProfilerObjectEventType *pEVar16;
  FEventScopeEntry *pFVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong lVar22;
  FEventScopeEntry *pFVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  FEventScopeEntryPage *pFVar26;
  longlong lVar27;
  double *pdVar28;
  FEventInfoStackEntry<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *pFVar29;
  FEventInfoStackEntry<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *pFVar30;
  longlong lVar31;
  int iVar32;
  longlong lVar33;
  longlong lVar34;
  double dVar35;
  double dVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  FEventScopeEntry *pFVar50;
  FEventScopeEntry *pFVar51;
  undefined1 auStackY_a468 [32];
  uint local_a428;
  undefined1 local_a420 [16];
  undefined8 local_a410;
  undefined8 uStack_a408;
  undefined8 local_a400;
  undefined8 uStack_a3f8;
  int local_a3f0;
  FEventInfoStackEntry<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *local_a3e8;
  ulonglong local_a3e0;
  longlong local_a3d0;
  FLoadTimeProfilerCpuEvent *local_a3c8;
  longlong local_a3c0;
  FTimelineEventInfo *local_a3b8;
  TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *local_a3b0;
  TPagedArrayIterator<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
  local_a3a8;
  FEventStackEntry local_a378 [2];
  FFindBestMatchEventOutParams local_a328;
  undefined4 local_a278;
  undefined4 uStack_a274;
  longlong lStack_a270;
  undefined4 local_a268;
  undefined4 uStack_a264;
  undefined4 uStack_a260;
  undefined4 uStack_a25c;
  ulong64 local_a258;
  undefined4 uStack_a250;
  undefined4 uStack_a24c;
  TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
  local_a248;
  FFindBestMatchEventInParams local_a218;
  undefined1 local_a188 [16];
  FEventScopeEntry *local_a178;
  FEventScopeEntry *pFStack_a170;
  undefined4 local_a168;
  undefined4 uStack_a164;
  undefined4 uStack_a160;
  undefined4 uStack_a15c;
  TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
  local_a158;
  undefined1 local_a128 [16];
  undefined4 local_a118;
  undefined4 uStack_a114;
  undefined4 uStack_a110;
  undefined4 uStack_a10c;
  undefined4 local_a108;
  undefined4 uStack_a104;
  undefined4 uStack_a100;
  undefined4 uStack_a0fc;
  FEventInfoStackEntry<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  local_a0f8;
  double local_a0d0 [5115];
  ulonglong local_f8;
  undefined8 local_48;
  
  local_48 = 0x14d4657ef;
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_a468;
  local_a3b8 = param_4;
  if ((uint)param_3 < 0x400) {
    local_a3f0 = param_3;
    local_a3b0 = this;
    if (((this->DetailLevels).ArrayNum < 1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar6 = (code *)swi(3);
      uVar15 = (*pcVar6)();
      return (bool)uVar15;
    }
    this_00 = (FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
               *)(this->DetailLevels).AllocatorInstance.Data;
    if (((this_00->ScopeEntries).TotalItemCount != 0) &&
       (dVar35 = param_1 - param_2,
       dVar35 < (this_00->InsertionState).LastTime || dVar35 == (this_00->InsertionState).LastTime))
    {
      uVar19 = (longlong)(this_00->ScopeEntries).PagesArray.ArrayNum;
      lVar33 = 0;
      while (lVar34 = lVar33, uVar19 != 0) {
        uVar25 = uVar19 >> 1;
        uVar18 = (uint)uVar19;
        uVar19 = uVar25;
        lVar33 = uVar25 + lVar34 + (ulonglong)(uVar18 & 1);
        if (param_1 < (this_00->ScopeEntries).FirstPage[uVar25 + lVar34].BeginTime) {
          lVar33 = lVar34;
        }
      }
      lVar33 = lVar34 + -1;
      if (lVar34 == 0) {
        lVar33 = 0;
      }
      local_a3c0 = lVar33;
      TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>::
      TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
                ((TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
                  *)local_a420,&this_00->ScopeEntries,lVar33 * (this_00->ScopeEntries).PageSize);
      pFVar51 = uStack_a408;
      pFVar50 = local_a410;
      auVar8 = local_a420;
      uVar37 = local_a420._0_4_;
      uVar38 = local_a420._4_4_;
      uVar39 = local_a420._8_4_;
      uVar45 = local_a420._12_4_;
      uVar46 = (undefined4)local_a400;
      uVar47 = local_a400._4_4_;
      uVar48 = (undefined4)uStack_a3f8;
      uVar49 = uStack_a3f8._4_4_;
      local_a188 = local_a420;
      local_a178 = local_a410;
      pFStack_a170 = uStack_a408;
      local_a378[0].ExclTime = ___xmm_bff00000000000000000000000000000;
      local_a378[0].EndTime = _UNK_1508ffb28;
      local_a168 = (undefined4)local_a400;
      uStack_a164 = local_a400._4_4_;
      uStack_a160 = (undefined4)uStack_a3f8;
      uStack_a15c = uStack_a3f8._4_4_;
      bVar14 = FindEventUsingPageInitialStack
                         (this,(TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
                                *)local_a188,param_1,param_2,param_3,this_00,local_a378);
      if (bVar14) {
        dVar35 = FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                 ::GetScopeEntryTime(this_00,local_a378[0].EnterScopeIndex);
        param_4->StartTime = dVar35;
        param_4->ExclTime = local_a378[0].ExclTime;
        param_4->EndTime = local_a378[0].EndTime;
        uVar19 = local_a378[0].EventIndex % (this_00->Events).PageSize;
        pFVar3 = (this_00->Events).FirstPage[local_a378[0].EventIndex / (this_00->Events).PageSize].
                 Items;
        pFVar5 = pFVar3 + uVar19;
        pFVar11 = pFVar5->Export;
        (param_4->Event).Package = pFVar5->Package;
        (param_4->Event).Export = pFVar11;
        pFVar3 = pFVar3 + uVar19;
        uVar37 = *(undefined4 *)&pFVar3->field_0x14;
        (param_4->Event).EventType = pFVar3->EventType;
        *(undefined4 *)&(param_4->Event).field_0x14 = uVar37;
        if (local_a378[0].EndTime < 0.0) {
          param_4->EndTime = (this_00->InsertionState).LastTime;
          return true;
        }
      }
      else {
        local_a3d0 = auVar8._0_8_;
        lVar34 = auVar8._8_8_;
        if (dVar35 <= 0.0) {
          dVar35 = 0.0;
        }
        lVar31 = lVar34 * 0x40 + *(longlong *)(local_a3d0 + 0x18);
        if (dVar35 < *(double *)(lVar31 + 0x10)) {
          lVar34 = lVar33 << 6;
          do {
            if (lVar33 == 0) break;
            lVar33 = lVar33 + -1;
            TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
            ::
            TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
                      (&local_a158,&this_00->ScopeEntries,lVar33 * (this_00->ScopeEntries).PageSize)
            ;
            local_a410 = local_a158.CurrentPageFirstItem;
            uStack_a408 = local_a158.CurrentPageLastItem;
            lVar31 = (longlong)&(this_00->ScopeEntries).FirstPage[-1].Items + lVar34;
            lVar34 = lVar34 + -0x40;
            uVar37 = local_a158.Outer._0_4_;
            uVar38 = local_a158.Outer._4_4_;
            uVar39 = (undefined4)local_a158.CurrentPageIndex;
            uVar45 = local_a158.CurrentPageIndex._4_4_;
            uVar46 = (undefined4)local_a158.CurrentItemIndex;
            uVar47 = local_a158.CurrentItemIndex._4_4_;
            uVar48 = local_a158.CurrentItem._0_4_;
            uVar49 = local_a158.CurrentItem._4_4_;
            pFVar50 = local_a158.CurrentPageFirstItem;
            pFVar51 = local_a158.CurrentPageLastItem;
          } while (dVar35 < *(double *)(lVar31 + 0x10));
          auVar8._4_4_ = uVar38;
          auVar8._0_4_ = uVar37;
          auVar8._8_4_ = uVar39;
          auVar8._12_4_ = uVar45;
          lVar34 = auVar8._8_8_;
          local_a3d0 = CONCAT44(uVar38,uVar37);
          local_a420._4_4_ = uVar38;
          local_a420._0_4_ = uVar37;
          local_a420._8_4_ = uVar39;
          local_a420._12_4_ = uVar45;
          local_a400 = CONCAT44(uVar47,uVar46);
          uStack_a3f8 = (FEventScopeEntry *)CONCAT44(uVar49,uVar48);
          local_a3c0 = lVar33;
        }
        TPagedArray<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
        ::GetIteratorFromItem(&this_00->Events,&local_a3a8,*(ulong64 *)(lVar31 + 0x20));
        lVar33 = 0x400;
        pEVar16 = &local_a0f8.Event.EventType;
        do {
          ((FLoadTimeProfilerCpuEvent *)(pEVar16 + -4))->Package = (FPackageInfo *)0x0;
          *(FPackageExportInfo **)(pEVar16 + -2) = (FPackageExportInfo *)0x0;
          *pEVar16 = LoadTimeProfilerObjectEventType_None;
          *(undefined8 *)(pEVar16 + 2) = 0;
          *(undefined8 *)(pEVar16 + 4) = 0;
          pEVar16 = pEVar16 + 10;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        uVar2 = *(ushort *)(lVar31 + 0x38);
        lVar33 = 0;
        uVar18 = (uint)__xmm_80000000000000008000000000000000;
        uVar44 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        local_a428 = (uint)uVar2;
        uVar19 = (ulonglong)local_a428;
        if (3 < (ulonglong)uVar2) {
          lVar27 = 0;
          pdVar28 = local_a0d0;
          lVar22 = ((ulonglong)uVar2 - 4 >> 2) + 1;
          lVar33 = lVar22 * 4;
          do {
            lVar4 = *(longlong *)(lVar31 + 0x30);
            uVar25 = (this_00->ScopeEntries).PageSize;
            dVar36 = (this_00->ScopeEntries).FirstPage[*(ulonglong *)(lVar4 + lVar27) / uVar25].
                     Items[*(ulonglong *)(lVar4 + lVar27) % uVar25].Time;
            uVar40 = SUB84(dVar36,0);
            uVar41 = (uint)((ulonglong)dVar36 >> 0x20);
            if (dVar36 < 0.0) {
              uVar40 = uVar40 ^ uVar18;
              uVar41 = uVar41 ^ uVar44;
            }
            uVar25 = *(ulonglong *)(lVar4 + 8 + lVar27);
            uVar24 = (this_00->Events).PageSize;
            uVar20 = uVar25 % uVar24;
            dVar36 = *(double *)(lVar4 + 0x10 + lVar27);
            pFVar5 = (this_00->Events).FirstPage[uVar25 / uVar24].Items;
            dVar1 = *(double *)&pFVar5[uVar20].EventType;
            pFVar5 = pFVar5 + uVar20;
            pFVar11 = pFVar5->Export;
            pdVar28[-5] = (double)pFVar5->Package;
            pdVar28[-4] = (double)pFVar11;
            pdVar28[-3] = dVar1;
            pdVar28[-2] = (double)CONCAT44(uVar41,uVar40);
            pdVar28[-1] = dVar36;
            lVar4 = *(longlong *)(lVar31 + 0x30);
            uVar25 = *(ulonglong *)(lVar4 + 0x20 + lVar27);
            uVar24 = (this_00->ScopeEntries).PageSize;
            dVar36 = (this_00->ScopeEntries).FirstPage[uVar25 / uVar24].Items[uVar25 % uVar24].Time;
            uVar40 = SUB84(dVar36,0);
            uVar41 = (uint)((ulonglong)dVar36 >> 0x20);
            if (dVar36 < 0.0) {
              uVar40 = uVar40 ^ uVar18;
              uVar41 = uVar41 ^ uVar44;
            }
            uVar25 = *(ulonglong *)(lVar4 + 0x28 + lVar27);
            uVar24 = (this_00->Events).PageSize;
            uVar20 = uVar25 % uVar24;
            dVar36 = *(double *)(lVar4 + 0x30 + lVar27);
            pFVar5 = (this_00->Events).FirstPage[uVar25 / uVar24].Items;
            dVar1 = *(double *)&pFVar5[uVar20].EventType;
            pFVar5 = pFVar5 + uVar20;
            pFVar11 = pFVar5->Export;
            *pdVar28 = (double)pFVar5->Package;
            pdVar28[1] = (double)pFVar11;
            pdVar28[2] = dVar1;
            pdVar28[3] = (double)CONCAT44(uVar41,uVar40);
            pdVar28[4] = dVar36;
            lVar4 = *(longlong *)(lVar31 + 0x30);
            uVar25 = *(ulonglong *)(lVar27 + 0x40 + lVar4);
            uVar24 = (this_00->ScopeEntries).PageSize;
            dVar36 = (this_00->ScopeEntries).FirstPage[uVar25 / uVar24].Items[uVar25 % uVar24].Time;
            uVar40 = SUB84(dVar36,0);
            uVar41 = (uint)((ulonglong)dVar36 >> 0x20);
            if (dVar36 < 0.0) {
              uVar40 = uVar40 ^ uVar18;
              uVar41 = uVar41 ^ uVar44;
            }
            uVar25 = *(ulonglong *)(lVar27 + 0x48 + lVar4);
            uVar24 = (this_00->Events).PageSize;
            uVar20 = uVar25 % uVar24;
            dVar36 = *(double *)(lVar27 + 0x50 + lVar4);
            pFVar5 = (this_00->Events).FirstPage[uVar25 / uVar24].Items;
            dVar1 = *(double *)&pFVar5[uVar20].EventType;
            pFVar5 = pFVar5 + uVar20;
            pFVar11 = pFVar5->Export;
            pdVar28[5] = (double)pFVar5->Package;
            pdVar28[6] = (double)pFVar11;
            pdVar28[7] = dVar1;
            pdVar28[8] = (double)CONCAT44(uVar41,uVar40);
            pdVar28[9] = dVar36;
            lVar4 = *(longlong *)(lVar31 + 0x30);
            uVar25 = *(ulonglong *)(lVar27 + 0x60 + lVar4);
            uVar24 = (this_00->ScopeEntries).PageSize;
            dVar36 = (this_00->ScopeEntries).FirstPage[uVar25 / uVar24].Items[uVar25 % uVar24].Time;
            uVar40 = SUB84(dVar36,0);
            uVar41 = (uint)((ulonglong)dVar36 >> 0x20);
            if (dVar36 < 0.0) {
              uVar40 = uVar40 ^ uVar18;
              uVar41 = uVar41 ^ uVar44;
            }
            uVar25 = *(ulonglong *)(lVar27 + 0x68 + lVar4);
            uVar24 = (this_00->Events).PageSize;
            uVar20 = uVar25 % uVar24;
            dVar36 = *(double *)(lVar27 + 0x70 + lVar4);
            lVar27 = lVar27 + 0x80;
            pFVar5 = (this_00->Events).FirstPage[uVar25 / uVar24].Items;
            dVar1 = *(double *)&pFVar5[uVar20].EventType;
            pFVar5 = pFVar5 + uVar20;
            pFVar11 = pFVar5->Export;
            pdVar28[10] = (double)pFVar5->Package;
            pdVar28[0xb] = (double)pFVar11;
            pdVar28[0xc] = dVar1;
            pdVar28[0xd] = (double)CONCAT44(uVar41,uVar40);
            pdVar28[0xe] = dVar36;
            pdVar28 = pdVar28 + 0x14;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
        }
        if (lVar33 < (longlong)uVar19) {
          lVar22 = lVar33 << 5;
          pFVar29 = &local_a0f8 + lVar33;
          lVar33 = uVar19 - lVar33;
          do {
            lVar27 = *(longlong *)(lVar31 + 0x30);
            uVar25 = (this_00->ScopeEntries).PageSize;
            dVar36 = (this_00->ScopeEntries).FirstPage[*(ulonglong *)(lVar27 + lVar22) / uVar25].
                     Items[*(ulonglong *)(lVar27 + lVar22) % uVar25].Time;
            uVar40 = SUB84(dVar36,0);
            uVar41 = (uint)((ulonglong)dVar36 >> 0x20);
            if (dVar36 < 0.0) {
              uVar40 = uVar40 ^ uVar18;
              uVar41 = uVar41 ^ uVar44;
            }
            uVar25 = *(ulonglong *)(lVar27 + 8 + lVar22);
            uVar24 = (this_00->Events).PageSize;
            uVar20 = uVar25 % uVar24;
            dVar36 = *(double *)(lVar27 + 0x10 + lVar22);
            lVar22 = lVar22 + 0x20;
            pFVar5 = (this_00->Events).FirstPage[uVar25 / uVar24].Items;
            pFVar3 = pFVar5 + uVar20;
            EVar10 = pFVar3->EventType;
            uVar12 = *(undefined4 *)&pFVar3->field_0x14;
            pFVar5 = pFVar5 + uVar20;
            pFVar11 = pFVar5->Export;
            (pFVar29->Event).Package = pFVar5->Package;
            (pFVar29->Event).Export = pFVar11;
            (pFVar29->Event).EventType = EVar10;
            *(undefined4 *)&(pFVar29->Event).field_0x14 = uVar12;
            pFVar29->StartTime = (double)CONCAT44(uVar41,uVar40);
            pFVar29->ExclTime = dVar36;
            pFVar29 = pFVar29 + 1;
            lVar33 = lVar33 + -1;
          } while (lVar33 != 0);
        }
        auVar9._4_4_ = uVar47;
        auVar9._0_4_ = uVar46;
        auVar9._8_4_ = uVar48;
        auVar9._12_4_ = uVar49;
        local_a3c8 = local_a3a8.CurrentItem;
        uVar42 = 0;
        uVar43 = 0;
        pFVar23 = auVar9._8_8_;
        local_a248.Outer._0_4_ = uVar37;
        local_a248.Outer._4_4_ = uVar38;
        local_a248.CurrentPageIndex._0_4_ = uVar39;
        local_a248.CurrentPageIndex._4_4_ = uVar45;
        local_a248.CurrentItemIndex._0_4_ = uVar46;
        local_a248.CurrentItemIndex._4_4_ = uVar47;
        local_a248.CurrentItem._0_4_ = uVar48;
        local_a248.CurrentItem._4_4_ = uVar49;
        pFVar17 = TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
                  ::PrevItem(&local_a248);
        uVar41 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        uVar40 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        if (pFVar17 != (FEventScopeEntry *)0x0) {
          uVar42 = (uint)*(undefined8 *)
                          CONCAT44(local_a248.CurrentItem._4_4_,local_a248.CurrentItem._0_4_) &
                   (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          uVar43 = (uint)((ulonglong)
                          *(undefined8 *)
                           CONCAT44(local_a248.CurrentItem._4_4_,local_a248.CurrentItem._0_4_) >>
                         0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        }
        local_a3e0 = (ulonglong)local_a3f0;
        local_a218.IterationState.ScopeIterator.Outer._0_4_ = uVar37;
        local_a218.IterationState.ScopeIterator.Outer._4_4_ = uVar38;
        local_a218.IterationState.ScopeIterator.CurrentPageIndex._0_4_ = uVar39;
        local_a218.IterationState.ScopeIterator.CurrentPageIndex._4_4_ = uVar45;
        local_a218.IterationState.ScopeIterator.CurrentItemIndex._0_4_ = uVar46;
        local_a218.IterationState.ScopeIterator.CurrentItemIndex._4_4_ = uVar47;
        local_a218.IterationState.ScopeIterator.CurrentItem._0_4_ = uVar48;
        local_a218.IterationState.ScopeIterator.CurrentItem._4_4_ = uVar49;
        if (pFVar23 != (FEventScopeEntry *)0x0) {
          local_a3e8 = &local_a0f8 + uVar19;
          pdVar28 = local_a0d0 + uVar19 * 5 + -1;
          do {
            dVar36 = pFVar23->Time;
            pFVar50 = local_a410;
            pFVar51 = uStack_a408;
            if (dVar35 < (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) & uVar41,
                                          SUB84(dVar36,0) & uVar40)) break;
            if (0.0 <= dVar36) {
              if (((int)local_a428 < 1) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("CurrentStackDepth > 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                                      ,0x397,L""), bVar14)) {
                pcVar6 = (code *)swi(3);
                uVar15 = (*pcVar6)();
                return (bool)uVar15;
              }
              local_a428 = local_a428 - 1;
              local_a3e8 = local_a3e8 + -1;
              uVar25 = uVar19 - 1;
              pdVar28 = pdVar28 + -5;
              if (uVar25 == local_a3e0) {
                *pdVar28 = (pFVar23->Time - (double)CONCAT44(uVar43,uVar42)) + *pdVar28;
              }
              uVar42 = SUB84(pFVar23->Time,0);
              uVar43 = (uint)((ulonglong)pFVar23->Time >> 0x20);
            }
            else {
              if ((0x3ff < (int)local_a428) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("CurrentStackDepth < SettingsType::MaxDepth",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                                      ,0x388,L""), bVar14)) {
                pcVar6 = (code *)swi(3);
                uVar15 = (*pcVar6)();
                return (bool)uVar15;
              }
              local_a428 = local_a428 + 1;
              uVar25 = uVar19 + 1;
              pdVar28 = pdVar28 + 5;
              pFVar11 = local_a3c8->Export;
              (local_a3e8->Event).Package = local_a3c8->Package;
              (local_a3e8->Event).Export = pFVar11;
              uVar37 = *(undefined4 *)&local_a3c8->field_0x14;
              (local_a3e8->Event).EventType = local_a3c8->EventType;
              *(undefined4 *)&(local_a3e8->Event).field_0x14 = uVar37;
              dVar36 = pFVar23->Time;
              local_a3e8->ExclTime = 0.0;
              dVar36 = (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) ^ uVar44,
                                        SUB84(dVar36,0) ^ uVar18);
              local_a3e8->StartTime = dVar36;
              if (1 < (int)local_a428) {
                *(double *)(&uStack_a100 + uVar19 * 10) =
                     (dVar36 - (double)CONCAT44(uVar43,uVar42)) +
                     *(double *)(&uStack_a100 + uVar19 * 10);
              }
              local_a3e8 = local_a3e8 + 1;
              local_a3c8 = TPagedArrayIterator<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
                           ::NextItem(&local_a3a8);
              uVar42 = SUB84(pFVar23->Time,0) ^ uVar18;
              uVar43 = (uint)((ulonglong)pFVar23->Time >> 0x20) ^ uVar44;
            }
            if (pFVar23 == uStack_a408) {
              if (lVar34 == *(int *)(local_a3d0 + 0x10) + -1) {
                local_a400 = *(ulong64 *)(local_a3d0 + 0x30);
                uStack_a3f8 = (FEventScopeEntry *)0x0;
                pFVar50 = (FEventScopeEntry *)0x0;
                pFVar51 = (FEventScopeEntry *)0x0;
                break;
              }
              lVar34 = lVar34 + 1;
              local_a420._8_8_ = lVar34;
              plVar21 = (longlong *)(*(longlong *)(local_a3d0 + 0x18) + lVar34 * 0x40);
              pFVar23 = (FEventScopeEntry *)*plVar21;
              if (pFVar23 == (FEventScopeEntry *)0x0) {
                uStack_a408 = (FEventScopeEntry *)0x0;
              }
              else {
                uStack_a408 = pFVar23 + plVar21[1] + -1;
              }
              local_a400 = lVar34 * *(longlong *)(local_a3d0 + 0x28);
              pFVar50 = pFVar23;
              pFVar51 = uStack_a408;
              local_a410 = pFVar23;
              uStack_a3f8 = pFVar23;
              if (plVar21 == (longlong *)0x0) break;
            }
            else {
              local_a400 = local_a400 + 1;
              pFVar23 = pFVar23 + 1;
            }
            uVar19 = uVar25;
            pFVar50 = local_a410;
            pFVar51 = uStack_a408;
            uStack_a3f8 = pFVar23;
          } while (pFVar23 != (FEventScopeEntry *)0x0);
          local_a218.IterationState.ScopeIterator.Outer._0_4_ = local_a420._0_4_;
          local_a218.IterationState.ScopeIterator.Outer._4_4_ = local_a420._4_4_;
          local_a218.IterationState.ScopeIterator.CurrentPageIndex._0_4_ = local_a420._8_4_;
          local_a218.IterationState.ScopeIterator.CurrentPageIndex._4_4_ = local_a420._12_4_;
          local_a218.IterationState.ScopeIterator.CurrentItemIndex._0_4_ = (undefined4)local_a400;
          local_a218.IterationState.ScopeIterator.CurrentItemIndex._4_4_ = local_a400._4_4_;
          local_a218.IterationState.ScopeIterator.CurrentItem._0_4_ = (undefined4)uStack_a3f8;
          local_a218.IterationState.ScopeIterator.CurrentItem._4_4_ = uStack_a3f8._4_4_;
        }
        iVar32 = local_a3f0;
        local_a218.IterationState.EventStack = &local_a0f8;
        local_a218.IterationState.EventsIterator.Outer = local_a3a8.Outer;
        local_a218.IterationState.EventsIterator.CurrentPageIndex = local_a3a8.CurrentPageIndex;
        local_a218.TargetEndTime = param_1 + param_2;
        local_a218.IterationState.EventsIterator.CurrentItemIndex = local_a3a8.CurrentItemIndex;
        local_a218.IterationState.EventsIterator.CurrentItem = local_a3a8.CurrentItem;
        local_a218.IterationState.EventsIterator.CurrentPageFirstItem =
             local_a3a8.CurrentPageFirstItem;
        local_a218.IterationState.EventsIterator.CurrentPageLastItem =
             local_a3a8.CurrentPageLastItem;
        local_a218.IterationState.StackDepth = local_a428;
        local_a328.IterationState.ScopeIterator.Outer =
             (TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage> *)0x0
        ;
        local_a328.IterationState.ScopeIterator.CurrentPageIndex = 0;
        local_a328.IterationState.ScopeIterator.CurrentItemIndex = 0;
        local_a328.IterationState.ScopeIterator.CurrentItem = (FEventScopeEntry *)0x0;
        local_a328.IterationState.EventsIterator.CurrentPageFirstItem =
             (FLoadTimeProfilerCpuEvent *)0x0;
        local_a328.IterationState.EventsIterator.CurrentPageLastItem =
             (FLoadTimeProfilerCpuEvent *)0x0;
        local_a328.EventInfo.StartTime = 0.0;
        local_a328.EventInfo.ExclTime = 0.0;
        local_a218.IterationState.LastIterationTime = (double)CONCAT44(uVar43,uVar42);
        local_a218.TargetDepth = local_a3f0;
        local_a328.IterationState.ScopeIterator.CurrentPageFirstItem = (FEventScopeEntry *)0x0;
        local_a328.IterationState.ScopeIterator.CurrentPageLastItem = (FEventScopeEntry *)0x0;
        local_a328.IterationState.EventsIterator.Outer =
             (TPagedArray<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
              *)0x0;
        local_a328.IterationState.EventsIterator.CurrentPageIndex = 0;
        local_a328.IterationState.EventsIterator.CurrentItemIndex = 0;
        local_a328.IterationState.EventsIterator.CurrentItem = (FLoadTimeProfilerCpuEvent *)0x0;
        local_a328.EventInfo.Event.Package = (FPackageInfo *)0x0;
        local_a328.EventInfo.Event.Export = (FPackageExportInfo *)0x0;
        local_a328.EventInfo.Event.EventType = LoadTimeProfilerObjectEventType_None;
        local_a218.IterationState.ScopeIterator.CurrentPageFirstItem = pFVar50;
        local_a218.IterationState.ScopeIterator.CurrentPageLastItem = pFVar51;
        local_a218.TargetExactTime = param_1;
        bVar14 = FindBestMatchEvent(local_a3b0,&local_a218,&local_a328);
        dVar35 = local_a328.EventInfo.StartTime;
        uVar19 = local_a3e0;
        if (!bVar14) {
          return false;
        }
        bVar14 = true;
        if ((iVar32 < (int)(uint)*(ushort *)(lVar31 + 0x38)) &&
           (dVar36 = FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                     ::GetScopeEntryTime(this_00,*(ulong64 *)
                                                  (local_a3e0 * 0x20 + *(longlong *)(lVar31 + 0x30))
                                        ), dVar36 == dVar35)) {
          bVar14 = false;
        }
        lVar33 = local_a3c0;
        if ((local_a328.bHasEndTime == false) || (!bVar14)) {
          uVar25 = (ulonglong)local_a328.IterationState.StackDepth;
          uVar40 = SUB84(local_a328.IterationState.LastIterationTime,0);
          uVar41 = (uint)((ulonglong)local_a328.IterationState.LastIterationTime >> 0x20);
          local_a3a8.Outer = local_a328.IterationState.EventsIterator.Outer;
          local_a3a8.CurrentPageIndex = local_a328.IterationState.EventsIterator.CurrentPageIndex;
          local_a3a8.CurrentPageFirstItem =
               local_a328.IterationState.EventsIterator.CurrentPageFirstItem;
          local_a3a8.CurrentPageLastItem =
               local_a328.IterationState.EventsIterator.CurrentPageLastItem;
          local_a3a8.CurrentItemIndex = local_a328.IterationState.EventsIterator.CurrentItemIndex;
          local_a3a8.CurrentItem = local_a328.IterationState.EventsIterator.CurrentItem;
          TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>::
          TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
                    ((TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
                      *)local_a128,&this_00->ScopeEntries,
                     local_a3c0 * (this_00->ScopeEntries).PageSize);
          pTVar13 = local_a328.IterationState.ScopeIterator.Outer;
          lVar34 = local_a128._0_8_;
          local_a420 = local_a128;
          lStack_a270 = local_a128._8_8_;
          local_a278 = local_a128._0_4_;
          uStack_a274 = local_a128._4_4_;
          local_a258 = CONCAT44(uStack_a104,local_a108);
          while( true ) {
            auVar8 = local_a420;
            uVar37 = (undefined4)((ulonglong)lStack_a270 >> 0x20);
            if (lStack_a270 == *(int *)(lVar34 + 0x10) + -1) break;
            lVar22 = lStack_a270 + 1;
            local_a420._8_8_ = lVar22;
            auVar9 = local_a420;
            plVar21 = (longlong *)(lVar22 * 0x40 + *(longlong *)(lVar34 + 0x18));
            lVar31 = *plVar21;
            if (lVar31 == 0) {
              uStack_a408 = (FEventScopeEntry *)0x0;
            }
            else {
              uStack_a408 = (FEventScopeEntry *)(lVar31 + (plVar21[1] + -1) * 8);
            }
            if ((plVar21 == (longlong *)0x0) || ((int)(uint)*(ushort *)(plVar21 + 7) <= iVar32))
            break;
            uVar24 = *(ulonglong *)(plVar21[6] + uVar19 * 0x20);
            uVar20 = (this_00->ScopeEntries).PageSize;
            dVar36 = (this_00->ScopeEntries).FirstPage[uVar24 / uVar20].Items[uVar24 % uVar20].Time;
            if (dVar36 < 0.0) {
              dVar36 = (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) ^ uVar44,
                                        SUB84(dVar36,0) ^ uVar18);
            }
            if (dVar36 != dVar35) break;
            local_a420._0_4_ = auVar8._0_4_;
            local_a420._4_4_ = auVar8._4_4_;
            local_a410._0_4_ = (undefined4)lVar31;
            local_a410._4_4_ = (undefined4)((ulonglong)lVar31 >> 0x20);
            lStack_a270 = lVar22;
            local_a278 = local_a420._0_4_;
            uStack_a274 = local_a420._4_4_;
            local_a118 = (undefined4)local_a410;
            uStack_a114 = local_a410._4_4_;
            uStack_a110 = (undefined4)uStack_a408;
            uStack_a10c = uStack_a408._4_4_;
            uStack_a100 = (undefined4)local_a410;
            uStack_a0fc = local_a410._4_4_;
            local_a420 = auVar9;
            local_a258 = lVar22 * *(longlong *)(lVar34 + 0x28);
          }
          auVar7._4_4_ = uStack_a274;
          auVar7._0_4_ = local_a278;
          auVar7._8_4_ = (int)lStack_a270;
          auVar7._12_4_ = uVar37;
          local_a268 = local_a118;
          uStack_a264 = uStack_a114;
          uStack_a260 = uStack_a110;
          uStack_a25c = uStack_a10c;
          uStack_a250 = uStack_a100;
          uStack_a24c = uStack_a0fc;
          if ((auVar7._8_8_ == lVar33) && (bVar14)) {
            local_a420._8_8_ = local_a328.IterationState.ScopeIterator.CurrentPageIndex;
            local_a420._0_8_ = local_a328.IterationState.ScopeIterator.Outer;
            local_a400 = local_a328.IterationState.ScopeIterator.CurrentItemIndex;
            uStack_a3f8 = local_a328.IterationState.ScopeIterator.CurrentItem;
            local_a410 = local_a328.IterationState.ScopeIterator.CurrentPageFirstItem;
            uStack_a408 = local_a328.IterationState.ScopeIterator.CurrentPageLastItem;
            if (local_a328.IterationState.ScopeIterator.CurrentItem != (FEventScopeEntry *)0x0) {
              pdVar28 = local_a0d0 + uVar25 * 5 + -1;
              uVar19 = uVar25;
              pFVar29 = &local_a0f8 + uVar25;
              do {
                pFVar50 = uStack_a3f8;
                if ((longlong)uVar19 <= (longlong)local_a3e0) break;
                iVar32 = (int)uVar25;
                if (0.0 < uStack_a3f8->Time || uStack_a3f8->Time == 0.0) {
                  if (iVar32 < 1) {
                    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("CurrentStackDepth > 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                                        ,0x421,L"");
                    if (bVar14) {
                      pcVar6 = (code *)swi(3);
                      uVar15 = (*pcVar6)();
                      return (bool)uVar15;
                    }
                  }
                  uVar42 = iVar32 - 1;
                  uVar24 = uVar19 - 1;
                  pFVar30 = pFVar29 + -1;
                  pdVar28 = pdVar28 + -5;
                  if (uVar24 == local_a3e0) {
                    *pdVar28 = (pFVar50->Time - (double)CONCAT44(uVar41,uVar40)) + *pdVar28;
                  }
                  uVar40 = SUB84(pFVar50->Time,0);
                  uVar41 = (uint)((ulonglong)pFVar50->Time >> 0x20);
                }
                else {
                  if (0x3ff < iVar32) {
                    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("CurrentStackDepth < SettingsType::MaxDepth",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                                        ,0x413,L"");
                    if (bVar14) {
                      pcVar6 = (code *)swi(3);
                      uVar15 = (*pcVar6)();
                      return (bool)uVar15;
                    }
                  }
                  uVar42 = iVar32 + 1;
                  uVar24 = uVar19 + 1;
                  pFVar30 = pFVar29 + 1;
                  pdVar28 = pdVar28 + 5;
                  pFVar11 = local_a3c8->Export;
                  (pFVar29->Event).Package = local_a3c8->Package;
                  (pFVar29->Event).Export = pFVar11;
                  uVar37 = *(undefined4 *)&local_a3c8->field_0x14;
                  (pFVar29->Event).EventType = local_a3c8->EventType;
                  *(undefined4 *)&(pFVar29->Event).field_0x14 = uVar37;
                  dVar35 = (double)CONCAT44((uint)((ulonglong)pFVar50->Time >> 0x20) ^ uVar44,
                                            SUB84(pFVar50->Time,0) ^ uVar18);
                  pFVar29->StartTime = dVar35;
                  if (1 < (int)uVar42) {
                    *(double *)(&uStack_a100 + uVar19 * 10) =
                         (dVar35 - (double)CONCAT44(uVar41,uVar40)) +
                         *(double *)(&uStack_a100 + uVar19 * 10);
                  }
                  local_a3c8 = TPagedArrayIterator<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::TPagedArrayPage<TraceServices::FLoadTimeProfilerCpuEvent>_>
                               ::NextItem(&local_a3a8);
                  uVar40 = SUB84(pFVar50->Time,0) ^ uVar18;
                  uVar41 = (uint)((ulonglong)pFVar50->Time >> 0x20) ^ uVar44;
                }
                uVar25 = (ulonglong)uVar42;
                if (pFVar50 == uStack_a408) {
                  if (local_a420._8_8_ == (longlong)((pTVar13->PagesArray).ArrayNum + -1)) break;
                  lVar33 = local_a420._8_8_ + 1;
                  local_a420._8_8_ = lVar33;
                  pFVar26 = pTVar13->FirstPage + lVar33;
                  uStack_a3f8 = pFVar26->Items;
                  if (uStack_a3f8 == (FEventScopeEntry *)0x0) {
                    uStack_a408 = (FEventScopeEntry *)0x0;
                  }
                  else {
                    uStack_a408 = uStack_a3f8 + (pFVar26->Count - 1);
                  }
                  local_a400 = lVar33 * pTVar13->PageSize;
                  local_a410 = uStack_a3f8;
                  if (pFVar26 == (FEventScopeEntryPage *)0x0) break;
                }
                else {
                  local_a400 = local_a400 + 1;
                  uStack_a3f8 = pFVar50 + 1;
                }
                uVar19 = uVar24;
                pFVar29 = pFVar30;
              } while (uStack_a3f8 != (FEventScopeEntry *)0x0);
            }
            local_a3b8->EndTime = (double)CONCAT44(uVar41,uVar40);
            EVar10 = *(ELoadTimeProfilerObjectEventType *)(local_a0d0 + local_a3e0 * 5 + -3);
            uVar37 = *(undefined4 *)((longlong)local_a0d0 + local_a3e0 * 0x28 + -0x14);
            uVar38 = *(undefined4 *)(local_a0d0 + local_a3e0 * 5 + -2);
            uVar39 = *(undefined4 *)((longlong)local_a0d0 + local_a3e0 * 0x28 + -0xc);
            pFVar11 = (FPackageExportInfo *)local_a0d0[local_a3e0 * 5 + -4];
            dVar35 = local_a0d0[local_a3e0 * 5 + -1];
            (local_a3b8->Event).Package = (&local_a0f8)[local_a3e0].Event.Package;
            (local_a3b8->Event).Export = pFVar11;
            *(undefined4 *)&local_a3b8->StartTime = uVar38;
            *(undefined4 *)((longlong)&local_a3b8->StartTime + 4) = uVar39;
            local_a3b8->ExclTime = dVar35;
            (local_a3b8->Event).EventType = EVar10;
            *(undefined4 *)&(local_a3b8->Event).field_0x14 = uVar37;
            return true;
          }
          lVar34 = auVar7._8_8_ * 0x40;
          local_a420._4_4_ = uStack_a274;
          local_a420._0_4_ = local_a278;
          local_a420._8_4_ = (int)lStack_a270;
          local_a420._12_4_ = uVar37;
          local_a410 = (FEventScopeEntry *)CONCAT44(uStack_a114,local_a118);
          uStack_a408 = (FEventScopeEntry *)CONCAT44(uStack_a10c,uStack_a110);
          lVar33 = *(longlong *)(CONCAT44(uStack_a274,local_a278) + 0x18);
          uStack_a3f8 = (FEventScopeEntry *)CONCAT44(uStack_a0fc,uStack_a100);
          local_a400 = local_a258;
          if ((int)(uint)*(ushort *)(lVar33 + 0x38 + lVar34) <= local_a3f0) {
            bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("ScopePage->InitialStackCount > Depth",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                                ,0x3f8,L"");
            if (bVar14) {
              pcVar6 = (code *)swi(3);
              uVar15 = (*pcVar6)();
              return (bool)uVar15;
            }
          }
          lVar33 = *(longlong *)(lVar33 + 0x30 + lVar34);
          lVar34 = uVar19 * 0x20;
          dVar35 = FDetailLevel<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                   ::GetScopeEntryTime(this_00,*(ulong64 *)(lVar34 + lVar33));
          local_a3b8->StartTime = dVar35;
          dVar35 = *(double *)(lVar34 + 0x18 + lVar33);
          uVar38 = SUB84(dVar35,0);
          uVar39 = (undefined4)((ulonglong)dVar35 >> 0x20);
          local_a3b8->EndTime = dVar35;
          local_a3b8->ExclTime = *(double *)(lVar34 + 0x10 + lVar33);
          uVar19 = *(ulonglong *)(lVar34 + 8 + lVar33);
          uVar25 = (this_00->Events).PageSize;
          uVar24 = uVar19 % uVar25;
          pFVar3 = (this_00->Events).FirstPage[uVar19 / uVar25].Items;
          pFVar5 = pFVar3 + uVar24;
          pFVar11 = pFVar5->Export;
          (local_a3b8->Event).Package = pFVar5->Package;
          (local_a3b8->Event).Export = pFVar11;
          pFVar3 = pFVar3 + uVar24;
          uVar37 = *(undefined4 *)&pFVar3->field_0x14;
          (local_a3b8->Event).EventType = pFVar3->EventType;
          *(undefined4 *)&(local_a3b8->Event).field_0x14 = uVar37;
        }
        else {
          uVar38 = SUB84(local_a328.EndTime,0);
          uVar39 = (undefined4)((ulonglong)local_a328.EndTime >> 0x20);
          local_a3b8->ExclTime = local_a328.EventInfo.ExclTime;
          (local_a3b8->Event).Package = local_a328.EventInfo.Event.Package;
          (local_a3b8->Event).Export = local_a328.EventInfo.Event.Export;
          *(ulonglong *)&(local_a3b8->Event).EventType =
               CONCAT44(local_a328.EventInfo.Event._20_4_,local_a328.EventInfo.Event.EventType);
          local_a3b8->StartTime = dVar35;
          local_a3b8->EndTime = local_a328.EndTime;
        }
        if ((double)CONCAT44(uVar39,uVar38) < 0.0) {
          local_a3b8->EndTime = (this_00->InsertionState).LastTime;
        }
      }
      return true;
    }
  }
  return false;
}

// GetEventInfo @ 14d4666e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::GetEventInfo(TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
               *this,double param_1,double param_2,int param_3,FTimelineEventInfo *param_4)

{
  ushort uVar1;
  FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *this_00;
  longlong lVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage> *pTVar9;
  bool bVar10;
  undefined1 uVar11;
  double *pdVar12;
  FEventScopeEntry *pFVar13;
  uint uVar14;
  longlong *plVar15;
  FEventScopeEntry *pFVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  FEventScopeEntryPage *pFVar21;
  FEventInfoStackEntry<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *pFVar22;
  longlong lVar23;
  longlong lVar24;
  FEventInfoStackEntry<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *pFVar25;
  int iVar26;
  longlong lVar27;
  longlong lVar28;
  double dVar29;
  double dVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  uint uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  FEventScopeEntry *pFVar44;
  FEventScopeEntry *pFVar45;
  undefined1 auStackY_6448 [32];
  uint local_6408;
  undefined1 local_6400 [16];
  undefined8 local_63f0;
  undefined8 uStack_63e8;
  undefined8 local_63e0;
  undefined8 uStack_63d8;
  FEventInfoStackEntry<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *local_63d0;
  double local_63c8;
  ulonglong local_63b0;
  longlong local_63a8;
  int local_63a0;
  longlong local_6398;
  FTimingProfilerEvent *local_6390;
  longlong local_6388;
  FTimelineEventInfo *local_6380;
  TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  *local_6378;
  TPagedArrayIterator<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
  local_6370;
  FEventStackEntry local_6340;
  FFindBestMatchEventOutParams local_6318;
  undefined4 local_6278;
  undefined4 uStack_6274;
  longlong lStack_6270;
  undefined4 local_6268;
  undefined4 uStack_6264;
  undefined4 uStack_6260;
  undefined4 uStack_625c;
  ulong64 local_6258;
  undefined4 uStack_6250;
  undefined4 uStack_624c;
  TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
  local_6248;
  FFindBestMatchEventInParams local_6218;
  undefined1 local_6188 [16];
  FEventScopeEntry *local_6178;
  FEventScopeEntry *pFStack_6170;
  undefined4 local_6168;
  undefined4 uStack_6164;
  undefined4 uStack_6160;
  undefined4 uStack_615c;
  TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
  local_6158;
  undefined1 local_6128 [16];
  undefined4 local_6118;
  undefined4 uStack_6114;
  undefined4 uStack_6110;
  undefined4 uStack_610c;
  undefined4 local_6108;
  undefined4 uStack_6104;
  undefined4 uStack_6100;
  undefined4 uStack_60fc;
  FEventInfoStackEntry<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
  local_60f8;
  double local_60e0 [3069];
  ulonglong local_f8;
  undefined8 local_48;
  
  local_48 = 0x14d4666ff;
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_6448;
  local_6380 = param_4;
  if ((uint)param_3 < 0x400) {
    local_63a0 = param_3;
    local_6378 = this;
    if (((this->DetailLevels).ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    this_00 = (FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
               *)(this->DetailLevels).AllocatorInstance.Data;
    if (((this_00->ScopeEntries).TotalItemCount != 0) &&
       (dVar29 = param_1 - param_2,
       dVar29 < (this_00->InsertionState).LastTime || dVar29 == (this_00->InsertionState).LastTime))
    {
      uVar17 = (longlong)(this_00->ScopeEntries).PagesArray.ArrayNum;
      lVar24 = 0;
      while (lVar28 = lVar24, uVar17 != 0) {
        uVar19 = uVar17 >> 1;
        uVar14 = (uint)uVar17;
        uVar17 = uVar19;
        lVar24 = uVar19 + lVar28 + (ulonglong)(uVar14 & 1);
        if (param_1 < (this_00->ScopeEntries).FirstPage[uVar19 + lVar28].BeginTime) {
          lVar24 = lVar28;
        }
      }
      lVar24 = lVar28 + -1;
      if (lVar28 == 0) {
        lVar24 = 0;
      }
      local_63a8 = lVar24;
      TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>::
      TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
                ((TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
                  *)local_6400,&this_00->ScopeEntries,lVar24 * (this_00->ScopeEntries).PageSize);
      pFVar45 = uStack_63e8;
      pFVar44 = local_63f0;
      auVar7 = local_6400;
      uVar31 = local_6400._0_4_;
      uVar32 = local_6400._4_4_;
      uVar37 = local_6400._8_4_;
      uVar38 = local_6400._12_4_;
      uVar40 = (undefined4)local_63e0;
      uVar41 = local_63e0._4_4_;
      uVar42 = (undefined4)uStack_63d8;
      uVar43 = uStack_63d8._4_4_;
      local_6188 = local_6400;
      local_6178 = local_63f0;
      pFStack_6170 = uStack_63e8;
      local_6340.ExclTime = ___xmm_bff00000000000000000000000000000;
      local_6340.EndTime = _UNK_1508ffb28;
      local_6168 = (undefined4)local_63e0;
      uStack_6164 = local_63e0._4_4_;
      uStack_6160 = (undefined4)uStack_63d8;
      uStack_615c = uStack_63d8._4_4_;
      bVar10 = FindEventUsingPageInitialStack
                         (this,(TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
                                *)local_6188,param_1,param_2,param_3,this_00,&local_6340);
      if (bVar10) {
        dVar29 = FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                 ::GetScopeEntryTime(this_00,local_6340.EnterScopeIndex);
        param_4->StartTime = dVar29;
        param_4->ExclTime = local_6340.ExclTime;
        param_4->EndTime = local_6340.EndTime;
        (param_4->Event).TimerIndex =
             (this_00->Events).FirstPage[local_6340.EventIndex / (this_00->Events).PageSize].Items
             [local_6340.EventIndex % (this_00->Events).PageSize].TimerIndex;
        if (local_6340.EndTime < 0.0) {
          param_4->EndTime = (this_00->InsertionState).LastTime;
          return true;
        }
      }
      else {
        local_6398 = auVar7._0_8_;
        lVar28 = auVar7._8_8_;
        if (dVar29 <= 0.0) {
          dVar29 = 0.0;
        }
        lVar27 = lVar28 * 0x40 + *(longlong *)(local_6398 + 0x18);
        if (dVar29 < *(double *)(lVar27 + 0x10)) {
          lVar28 = lVar24 << 6;
          local_6388 = lVar27;
          do {
            if (lVar24 == 0) break;
            lVar24 = lVar24 + -1;
            TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
            ::
            TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
                      (&local_6158,&this_00->ScopeEntries,lVar24 * (this_00->ScopeEntries).PageSize)
            ;
            local_63f0 = local_6158.CurrentPageFirstItem;
            uStack_63e8 = local_6158.CurrentPageLastItem;
            lVar27 = (longlong)&(this_00->ScopeEntries).FirstPage[-1].Items + lVar28;
            lVar28 = lVar28 + -0x40;
            uVar31 = local_6158.Outer._0_4_;
            uVar32 = local_6158.Outer._4_4_;
            uVar37 = (undefined4)local_6158.CurrentPageIndex;
            uVar38 = local_6158.CurrentPageIndex._4_4_;
            uVar40 = (undefined4)local_6158.CurrentItemIndex;
            uVar41 = local_6158.CurrentItemIndex._4_4_;
            uVar42 = local_6158.CurrentItem._0_4_;
            uVar43 = local_6158.CurrentItem._4_4_;
            pFVar44 = local_6158.CurrentPageFirstItem;
            pFVar45 = local_6158.CurrentPageLastItem;
          } while (dVar29 < *(double *)(lVar27 + 0x10));
          auVar7._4_4_ = uVar32;
          auVar7._0_4_ = uVar31;
          auVar7._8_4_ = uVar37;
          auVar7._12_4_ = uVar38;
          lVar28 = auVar7._8_8_;
          local_6400._4_4_ = uVar32;
          local_6400._0_4_ = uVar31;
          local_6400._8_4_ = uVar37;
          local_6400._12_4_ = uVar38;
          local_63e0 = CONCAT44(uVar41,uVar40);
          uStack_63d8 = (FEventScopeEntry *)CONCAT44(uVar43,uVar42);
          local_6398 = CONCAT44(uVar32,uVar31);
          local_63a8 = lVar24;
        }
        local_6388 = lVar27;
        TPagedArray<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
        ::GetIteratorFromItem(&this_00->Events,&local_6370,*(ulong64 *)(lVar27 + 0x20));
        lVar24 = 0x400;
        pdVar12 = &local_60f8.ExclTime;
        do {
          (((FEventInfoStackEntry<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
             *)(pdVar12 + -2))->Event).TimerIndex = 0xffffffff;
          pdVar12[-1] = 0.0;
          *pdVar12 = 0.0;
          pdVar12 = pdVar12 + 3;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        uVar1 = *(ushort *)(lVar27 + 0x38);
        uVar17 = (ulonglong)uVar1;
        local_6408 = (uint)uVar1;
        lVar24 = 0;
        uVar14 = (uint)__xmm_80000000000000008000000000000000;
        uVar39 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        if (3 < uVar17) {
          lVar20 = 0;
          pdVar12 = local_60e0;
          lVar23 = (uVar17 - 4 >> 2) + 1;
          lVar24 = lVar23 * 4;
          do {
            lVar2 = *(longlong *)(lVar27 + 0x30);
            uVar19 = (this_00->ScopeEntries).PageSize;
            dVar30 = (this_00->ScopeEntries).FirstPage[*(ulonglong *)(lVar2 + lVar20) / uVar19].
                     Items[*(ulonglong *)(lVar2 + lVar20) % uVar19].Time;
            uVar33 = SUB84(dVar30,0);
            uVar34 = (uint)((ulonglong)dVar30 >> 0x20);
            if (dVar30 < 0.0) {
              uVar33 = uVar33 ^ uVar14;
              uVar34 = uVar34 ^ uVar39;
            }
            uVar19 = *(ulonglong *)(lVar2 + 8 + lVar20);
            uVar18 = (this_00->Events).PageSize;
            dVar30 = *(double *)(lVar2 + 0x10 + lVar20);
            local_63c8 = (double)CONCAT44(local_63c8._4_4_,
                                          (this_00->Events).FirstPage[uVar19 / uVar18].Items
                                          [uVar19 % uVar18].TimerIndex);
            pdVar12[-3] = local_63c8;
            pdVar12[-2] = (double)CONCAT44(uVar34,uVar33);
            pdVar12[-1] = dVar30;
            lVar2 = *(longlong *)(lVar27 + 0x30);
            uVar19 = *(ulonglong *)(lVar2 + 0x20 + lVar20);
            uVar18 = (this_00->ScopeEntries).PageSize;
            dVar30 = (this_00->ScopeEntries).FirstPage[uVar19 / uVar18].Items[uVar19 % uVar18].Time;
            uVar33 = SUB84(dVar30,0);
            uVar34 = (uint)((ulonglong)dVar30 >> 0x20);
            if (dVar30 < 0.0) {
              uVar33 = uVar33 ^ uVar14;
              uVar34 = uVar34 ^ uVar39;
            }
            uVar19 = *(ulonglong *)(lVar2 + 0x28 + lVar20);
            uVar18 = (this_00->Events).PageSize;
            dVar30 = *(double *)(lVar2 + 0x30 + lVar20);
            local_63c8 = (double)CONCAT44(local_63c8._4_4_,
                                          (this_00->Events).FirstPage[uVar19 / uVar18].Items
                                          [uVar19 % uVar18].TimerIndex);
            *pdVar12 = local_63c8;
            pdVar12[1] = (double)CONCAT44(uVar34,uVar33);
            pdVar12[2] = dVar30;
            lVar2 = *(longlong *)(lVar27 + 0x30);
            uVar19 = *(ulonglong *)(lVar20 + 0x40 + lVar2);
            uVar18 = (this_00->ScopeEntries).PageSize;
            dVar30 = (this_00->ScopeEntries).FirstPage[uVar19 / uVar18].Items[uVar19 % uVar18].Time;
            uVar33 = SUB84(dVar30,0);
            uVar34 = (uint)((ulonglong)dVar30 >> 0x20);
            if (dVar30 < 0.0) {
              uVar33 = uVar33 ^ uVar14;
              uVar34 = uVar34 ^ uVar39;
            }
            uVar19 = *(ulonglong *)(lVar20 + 0x48 + lVar2);
            uVar18 = (this_00->Events).PageSize;
            dVar30 = *(double *)(lVar20 + 0x50 + lVar2);
            local_63c8 = (double)CONCAT44(local_63c8._4_4_,
                                          (this_00->Events).FirstPage[uVar19 / uVar18].Items
                                          [uVar19 % uVar18].TimerIndex);
            pdVar12[3] = local_63c8;
            pdVar12[4] = (double)CONCAT44(uVar34,uVar33);
            pdVar12[5] = dVar30;
            lVar2 = *(longlong *)(lVar27 + 0x30);
            uVar19 = *(ulonglong *)(lVar20 + 0x60 + lVar2);
            uVar18 = (this_00->ScopeEntries).PageSize;
            dVar30 = (this_00->ScopeEntries).FirstPage[uVar19 / uVar18].Items[uVar19 % uVar18].Time;
            uVar33 = SUB84(dVar30,0);
            uVar34 = (uint)((ulonglong)dVar30 >> 0x20);
            if (dVar30 < 0.0) {
              uVar33 = uVar33 ^ uVar14;
              uVar34 = uVar34 ^ uVar39;
            }
            uVar19 = *(ulonglong *)(lVar20 + 0x68 + lVar2);
            uVar18 = (this_00->Events).PageSize;
            dVar30 = *(double *)(lVar20 + 0x70 + lVar2);
            lVar20 = lVar20 + 0x80;
            local_63c8 = (double)CONCAT44(local_63c8._4_4_,
                                          (this_00->Events).FirstPage[uVar19 / uVar18].Items
                                          [uVar19 % uVar18].TimerIndex);
            pdVar12[6] = local_63c8;
            pdVar12[7] = (double)CONCAT44(uVar34,uVar33);
            pdVar12[8] = dVar30;
            pdVar12 = pdVar12 + 0xc;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
        }
        if (lVar24 < (longlong)uVar17) {
          lVar20 = lVar24 << 5;
          pFVar22 = &local_60f8 + lVar24;
          lVar24 = uVar17 - lVar24;
          do {
            lVar23 = *(longlong *)(lVar27 + 0x30);
            uVar19 = (this_00->ScopeEntries).PageSize;
            dVar30 = (this_00->ScopeEntries).FirstPage[*(ulonglong *)(lVar23 + lVar20) / uVar19].
                     Items[*(ulonglong *)(lVar23 + lVar20) % uVar19].Time;
            uVar33 = SUB84(dVar30,0);
            uVar34 = (uint)((ulonglong)dVar30 >> 0x20);
            if (dVar30 < 0.0) {
              uVar33 = uVar33 ^ uVar14;
              uVar34 = uVar34 ^ uVar39;
            }
            uVar19 = *(ulonglong *)(lVar23 + 8 + lVar20);
            uVar18 = (this_00->Events).PageSize;
            dVar30 = *(double *)(lVar23 + 0x10 + lVar20);
            lVar20 = lVar20 + 0x20;
            local_63c8 = (double)CONCAT44(local_63c8._4_4_,
                                          (this_00->Events).FirstPage[uVar19 / uVar18].Items
                                          [uVar19 % uVar18].TimerIndex);
            *(double *)pFVar22 = local_63c8;
            pFVar22->StartTime = (double)CONCAT44(uVar34,uVar33);
            pFVar22->ExclTime = dVar30;
            pFVar22 = pFVar22 + 1;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
        }
        auVar8._4_4_ = uVar41;
        auVar8._0_4_ = uVar40;
        auVar8._8_4_ = uVar42;
        auVar8._12_4_ = uVar43;
        local_6390 = local_6370.CurrentItem;
        uVar35 = 0;
        uVar36 = 0;
        pFVar16 = auVar8._8_8_;
        local_6248.Outer._0_4_ = uVar31;
        local_6248.Outer._4_4_ = uVar32;
        local_6248.CurrentPageIndex._0_4_ = uVar37;
        local_6248.CurrentPageIndex._4_4_ = uVar38;
        local_6248.CurrentItemIndex._0_4_ = uVar40;
        local_6248.CurrentItemIndex._4_4_ = uVar41;
        local_6248.CurrentItem._0_4_ = uVar42;
        local_6248.CurrentItem._4_4_ = uVar43;
        pFVar13 = TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
                  ::PrevItem(&local_6248);
        uVar34 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        uVar33 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        if (pFVar13 != (FEventScopeEntry *)0x0) {
          uVar35 = (uint)*(undefined8 *)
                          CONCAT44(local_6248.CurrentItem._4_4_,local_6248.CurrentItem._0_4_) &
                   (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          uVar36 = (uint)((ulonglong)
                          *(undefined8 *)
                           CONCAT44(local_6248.CurrentItem._4_4_,local_6248.CurrentItem._0_4_) >>
                         0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        }
        local_63b0 = (ulonglong)local_63a0;
        local_6218.IterationState.ScopeIterator.Outer._0_4_ = uVar31;
        local_6218.IterationState.ScopeIterator.Outer._4_4_ = uVar32;
        local_6218.IterationState.ScopeIterator.CurrentPageIndex._0_4_ = uVar37;
        local_6218.IterationState.ScopeIterator.CurrentPageIndex._4_4_ = uVar38;
        local_6218.IterationState.ScopeIterator.CurrentItemIndex._0_4_ = uVar40;
        local_6218.IterationState.ScopeIterator.CurrentItemIndex._4_4_ = uVar41;
        local_6218.IterationState.ScopeIterator.CurrentItem._0_4_ = uVar42;
        local_6218.IterationState.ScopeIterator.CurrentItem._4_4_ = uVar43;
        local_6218.IterationState.ScopeIterator.CurrentPageFirstItem = pFVar44;
        local_6218.IterationState.ScopeIterator.CurrentPageLastItem = pFVar45;
        if (pFVar16 != (FEventScopeEntry *)0x0) {
          pdVar12 = local_60e0 + uVar17 * 3 + -1;
          local_63d0 = &local_60f8 + uVar17;
          uVar17 = (ulonglong)(uint)uVar1;
          local_6408 = (uint)uVar1;
          do {
            dVar30 = pFVar16->Time;
            if (dVar29 < (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) & uVar34,
                                          SUB84(dVar30,0) & uVar33)) break;
            if (0.0 <= dVar30) {
              if (((int)local_6408 < 1) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("CurrentStackDepth > 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                                      ,0x397,L""), bVar10)) {
                pcVar5 = (code *)swi(3);
                uVar11 = (*pcVar5)();
                return (bool)uVar11;
              }
              local_6408 = local_6408 - 1;
              local_63d0 = local_63d0 + -1;
              uVar19 = uVar17 - 1;
              pdVar12 = pdVar12 + -3;
              if (uVar19 == local_63b0) {
                *pdVar12 = (pFVar16->Time - (double)CONCAT44(uVar36,uVar35)) + *pdVar12;
              }
              uVar35 = SUB84(pFVar16->Time,0);
              uVar36 = (uint)((ulonglong)pFVar16->Time >> 0x20);
            }
            else {
              if ((0x3ff < (int)local_6408) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("CurrentStackDepth < SettingsType::MaxDepth",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                                      ,0x388,L""), bVar10)) {
                pcVar5 = (code *)swi(3);
                uVar11 = (*pcVar5)();
                return (bool)uVar11;
              }
              local_6408 = local_6408 + 1;
              uVar19 = uVar17 + 1;
              pdVar12 = pdVar12 + 3;
              (local_63d0->Event).TimerIndex = local_6390->TimerIndex;
              dVar30 = pFVar16->Time;
              local_63d0->ExclTime = 0.0;
              dVar30 = (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) ^ uVar39,
                                        SUB84(dVar30,0) ^ uVar14);
              local_63d0->StartTime = dVar30;
              if (1 < (int)local_6408) {
                *(double *)(&uStack_6100 + uVar17 * 6) =
                     (dVar30 - (double)CONCAT44(uVar36,uVar35)) +
                     *(double *)(&uStack_6100 + uVar17 * 6);
              }
              local_63d0 = local_63d0 + 1;
              local_6390 = TPagedArrayIterator<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
                           ::NextItem(&local_6370);
              uVar35 = SUB84(pFVar16->Time,0) ^ uVar14;
              uVar36 = (uint)((ulonglong)pFVar16->Time >> 0x20) ^ uVar39;
            }
            if (pFVar16 == uStack_63e8) {
              if (lVar28 == *(int *)(local_6398 + 0x10) + -1) {
                uVar3 = *(ulong64 *)(local_6398 + 0x30);
                uStack_63d8 = (FEventScopeEntry *)0x0;
                local_63e0._0_4_ = (undefined4)uVar3;
                local_63e0._4_4_ = (undefined4)(uVar3 >> 0x20);
                uStack_63d8._0_4_ = 0;
                uStack_63d8._4_4_ = 0;
                lVar27 = local_6388;
                local_6218.IterationState.ScopeIterator.Outer._0_4_ = local_6400._0_4_;
                local_6218.IterationState.ScopeIterator.Outer._4_4_ = local_6400._4_4_;
                local_6218.IterationState.ScopeIterator.CurrentPageIndex._0_4_ = local_6400._8_4_;
                local_6218.IterationState.ScopeIterator.CurrentPageIndex._4_4_ = local_6400._12_4_;
                local_6218.IterationState.ScopeIterator.CurrentItemIndex._0_4_ =
                     (undefined4)local_63e0;
                local_6218.IterationState.ScopeIterator.CurrentItemIndex._4_4_ = local_63e0._4_4_;
                local_6218.IterationState.ScopeIterator.CurrentItem._0_4_ = (undefined4)uStack_63d8;
                local_6218.IterationState.ScopeIterator.CurrentItem._4_4_ = uStack_63d8._4_4_;
                local_6218.IterationState.ScopeIterator.CurrentPageFirstItem =
                     (FEventScopeEntry *)0x0;
                local_6218.IterationState.ScopeIterator.CurrentPageLastItem =
                     (FEventScopeEntry *)0x0;
                local_63e0 = uVar3;
                goto LAB_14d466f28;
              }
              lVar28 = lVar28 + 1;
              local_6400._8_8_ = lVar28;
              plVar15 = (longlong *)(*(longlong *)(local_6398 + 0x18) + lVar28 * 0x40);
              pFVar16 = (FEventScopeEntry *)*plVar15;
              if (pFVar16 == (FEventScopeEntry *)0x0) {
                uStack_63e8 = (FEventScopeEntry *)0x0;
              }
              else {
                uStack_63e8 = pFVar16 + plVar15[1] + -1;
              }
              local_63e0 = lVar28 * *(longlong *)(local_6398 + 0x28);
              local_63f0 = pFVar16;
              uStack_63d8 = pFVar16;
              if (plVar15 == (longlong *)0x0) break;
            }
            else {
              local_63e0 = local_63e0 + 1;
              pFVar16 = pFVar16 + 1;
            }
            uVar17 = uVar19;
            uStack_63d8 = pFVar16;
          } while (pFVar16 != (FEventScopeEntry *)0x0);
          lVar27 = local_6388;
          local_6218.IterationState.ScopeIterator.Outer._0_4_ = local_6400._0_4_;
          local_6218.IterationState.ScopeIterator.Outer._4_4_ = local_6400._4_4_;
          local_6218.IterationState.ScopeIterator.CurrentPageIndex._0_4_ = local_6400._8_4_;
          local_6218.IterationState.ScopeIterator.CurrentPageIndex._4_4_ = local_6400._12_4_;
          local_6218.IterationState.ScopeIterator.CurrentItemIndex._0_4_ = (undefined4)local_63e0;
          local_6218.IterationState.ScopeIterator.CurrentItemIndex._4_4_ = local_63e0._4_4_;
          local_6218.IterationState.ScopeIterator.CurrentItem._0_4_ = (undefined4)uStack_63d8;
          local_6218.IterationState.ScopeIterator.CurrentItem._4_4_ = uStack_63d8._4_4_;
          local_6218.IterationState.ScopeIterator.CurrentPageFirstItem = local_63f0;
          local_6218.IterationState.ScopeIterator.CurrentPageLastItem = uStack_63e8;
        }
LAB_14d466f28:
        iVar26 = local_63a0;
        local_6218.IterationState.EventStack = &local_60f8;
        local_6218.IterationState.EventsIterator.Outer = local_6370.Outer;
        local_6218.IterationState.EventsIterator.CurrentPageIndex = local_6370.CurrentPageIndex;
        local_6218.TargetEndTime = param_1 + param_2;
        local_6218.IterationState.EventsIterator.CurrentItemIndex = local_6370.CurrentItemIndex;
        local_6218.IterationState.EventsIterator.CurrentItem = local_6370.CurrentItem;
        local_6218.IterationState.EventsIterator.CurrentPageFirstItem =
             local_6370.CurrentPageFirstItem;
        local_6218.IterationState.EventsIterator.CurrentPageLastItem =
             local_6370.CurrentPageLastItem;
        local_6318.IterationState.ScopeIterator.Outer =
             (TPagedArray<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage> *)0x0
        ;
        local_6318.IterationState.ScopeIterator.CurrentPageIndex = 0;
        local_6318.IterationState.ScopeIterator.CurrentItemIndex = 0;
        local_6318.IterationState.ScopeIterator.CurrentItem = (FEventScopeEntry *)0x0;
        local_6318.IterationState.EventsIterator.CurrentPageFirstItem = (FTimingProfilerEvent *)0x0;
        local_6318.IterationState.EventsIterator.CurrentPageLastItem = (FTimingProfilerEvent *)0x0;
        local_6318.EventInfo.StartTime = 0.0;
        local_6318.EventInfo.ExclTime = 0.0;
        local_6218.IterationState.LastIterationTime = (double)CONCAT44(uVar36,uVar35);
        local_6218.TargetDepth = local_63a0;
        local_6318.IterationState.ScopeIterator.CurrentPageFirstItem = (FEventScopeEntry *)0x0;
        local_6318.IterationState.ScopeIterator.CurrentPageLastItem = (FEventScopeEntry *)0x0;
        local_6318.IterationState.EventsIterator.Outer =
             (TPagedArray<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
              *)0x0;
        local_6318.IterationState.EventsIterator.CurrentPageIndex = 0;
        local_6318.IterationState.EventsIterator.CurrentItemIndex = 0;
        local_6318.IterationState.EventsIterator.CurrentItem = (FTimingProfilerEvent *)0x0;
        local_6318.EventInfo.Event.TimerIndex = 0xffffffff;
        local_6218.IterationState.StackDepth = local_6408;
        local_6218.TargetExactTime = param_1;
        bVar10 = FindBestMatchEvent(local_6378,&local_6218,&local_6318);
        dVar29 = local_6318.EventInfo.StartTime;
        uVar17 = local_63b0;
        if (!bVar10) {
          return false;
        }
        bVar10 = true;
        if ((iVar26 < (int)(uint)*(ushort *)(lVar27 + 0x38)) &&
           (dVar30 = FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                     ::GetScopeEntryTime(this_00,*(ulong64 *)
                                                  (local_63b0 * 0x20 + *(longlong *)(lVar27 + 0x30))
                                        ), dVar30 == dVar29)) {
          bVar10 = false;
        }
        lVar24 = local_63a8;
        if ((local_6318.bHasEndTime == false) || (!bVar10)) {
          uVar19 = (ulonglong)local_6318.IterationState.StackDepth;
          uVar33 = SUB84(local_6318.IterationState.LastIterationTime,0);
          uVar34 = (uint)((ulonglong)local_6318.IterationState.LastIterationTime >> 0x20);
          local_6370.Outer = local_6318.IterationState.EventsIterator.Outer;
          local_6370.CurrentPageIndex = local_6318.IterationState.EventsIterator.CurrentPageIndex;
          local_6370.CurrentPageFirstItem =
               local_6318.IterationState.EventsIterator.CurrentPageFirstItem;
          local_6370.CurrentPageLastItem =
               local_6318.IterationState.EventsIterator.CurrentPageLastItem;
          local_6370.CurrentItemIndex = local_6318.IterationState.EventsIterator.CurrentItemIndex;
          local_6370.CurrentItem = local_6318.IterationState.EventsIterator.CurrentItem;
          TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>::
          TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
                    ((TPagedArrayIterator<TraceServices::FEventScopeEntry,TraceServices::FEventScopeEntryPage>
                      *)local_6128,&this_00->ScopeEntries,
                     local_63a8 * (this_00->ScopeEntries).PageSize);
          pTVar9 = local_6318.IterationState.ScopeIterator.Outer;
          lVar28 = local_6128._0_8_;
          local_6400 = local_6128;
          lStack_6270 = local_6128._8_8_;
          local_6278 = local_6128._0_4_;
          uStack_6274 = local_6128._4_4_;
          local_6258 = CONCAT44(uStack_6104,local_6108);
          while( true ) {
            auVar7 = local_6400;
            uVar31 = (undefined4)((ulonglong)lStack_6270 >> 0x20);
            if (lStack_6270 == *(int *)(lVar28 + 0x10) + -1) break;
            lVar20 = lStack_6270 + 1;
            local_6400._8_8_ = lVar20;
            auVar8 = local_6400;
            plVar15 = (longlong *)(lVar20 * 0x40 + *(longlong *)(lVar28 + 0x18));
            lVar27 = *plVar15;
            if (lVar27 == 0) {
              uStack_63e8 = (FEventScopeEntry *)0x0;
            }
            else {
              uStack_63e8 = (FEventScopeEntry *)(lVar27 + (plVar15[1] + -1) * 8);
            }
            if ((plVar15 == (longlong *)0x0) || ((int)(uint)*(ushort *)(plVar15 + 7) <= iVar26))
            break;
            uVar18 = *(ulonglong *)(plVar15[6] + uVar17 * 0x20);
            uVar4 = (this_00->ScopeEntries).PageSize;
            dVar30 = (this_00->ScopeEntries).FirstPage[uVar18 / uVar4].Items[uVar18 % uVar4].Time;
            if (dVar30 < 0.0) {
              dVar30 = (double)CONCAT44((uint)((ulonglong)dVar30 >> 0x20) ^ uVar39,
                                        SUB84(dVar30,0) ^ uVar14);
            }
            if (dVar30 != dVar29) break;
            local_6400._0_4_ = auVar7._0_4_;
            local_6400._4_4_ = auVar7._4_4_;
            local_63f0._0_4_ = (undefined4)lVar27;
            local_63f0._4_4_ = (undefined4)((ulonglong)lVar27 >> 0x20);
            lStack_6270 = lVar20;
            local_6278 = local_6400._0_4_;
            uStack_6274 = local_6400._4_4_;
            local_6118 = (undefined4)local_63f0;
            uStack_6114 = local_63f0._4_4_;
            uStack_6110 = (undefined4)uStack_63e8;
            uStack_610c = uStack_63e8._4_4_;
            uStack_6100 = (undefined4)local_63f0;
            uStack_60fc = local_63f0._4_4_;
            local_6400 = auVar8;
            local_6258 = lVar20 * *(longlong *)(lVar28 + 0x28);
          }
          auVar6._4_4_ = uStack_6274;
          auVar6._0_4_ = local_6278;
          auVar6._8_4_ = (int)lStack_6270;
          auVar6._12_4_ = uVar31;
          local_6268 = local_6118;
          uStack_6264 = uStack_6114;
          uStack_6260 = uStack_6110;
          uStack_625c = uStack_610c;
          uStack_6250 = uStack_6100;
          uStack_624c = uStack_60fc;
          if ((auVar6._8_8_ == lVar24) && (bVar10)) {
            local_6400._8_8_ = local_6318.IterationState.ScopeIterator.CurrentPageIndex;
            local_6400._0_8_ = local_6318.IterationState.ScopeIterator.Outer;
            local_63e0 = local_6318.IterationState.ScopeIterator.CurrentItemIndex;
            uStack_63d8 = local_6318.IterationState.ScopeIterator.CurrentItem;
            local_63f0 = local_6318.IterationState.ScopeIterator.CurrentPageFirstItem;
            uStack_63e8 = local_6318.IterationState.ScopeIterator.CurrentPageLastItem;
            if (local_6318.IterationState.ScopeIterator.CurrentItem != (FEventScopeEntry *)0x0) {
              pdVar12 = local_60e0 + uVar19 * 3 + -1;
              uVar17 = uVar19;
              pFVar22 = &local_60f8 + uVar19;
              do {
                pFVar44 = uStack_63d8;
                if ((longlong)uVar17 <= (longlong)local_63b0) break;
                iVar26 = (int)uVar19;
                if (0.0 < uStack_63d8->Time || uStack_63d8->Time == 0.0) {
                  if (iVar26 < 1) {
                    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("CurrentStackDepth > 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                                        ,0x421,L"");
                    if (bVar10) {
                      pcVar5 = (code *)swi(3);
                      uVar11 = (*pcVar5)();
                      return (bool)uVar11;
                    }
                  }
                  uVar35 = iVar26 - 1;
                  uVar18 = uVar17 - 1;
                  pFVar25 = pFVar22 + -1;
                  pdVar12 = pdVar12 + -3;
                  if (uVar18 == local_63b0) {
                    *pdVar12 = (pFVar44->Time - (double)CONCAT44(uVar34,uVar33)) + *pdVar12;
                  }
                  uVar33 = SUB84(pFVar44->Time,0);
                  uVar34 = (uint)((ulonglong)pFVar44->Time >> 0x20);
                }
                else {
                  if (0x3ff < iVar26) {
                    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                       ("CurrentStackDepth < SettingsType::MaxDepth",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                                        ,0x413,L"");
                    if (bVar10) {
                      pcVar5 = (code *)swi(3);
                      uVar11 = (*pcVar5)();
                      return (bool)uVar11;
                    }
                  }
                  uVar35 = iVar26 + 1;
                  uVar18 = uVar17 + 1;
                  pFVar25 = pFVar22 + 1;
                  pdVar12 = pdVar12 + 3;
                  (pFVar22->Event).TimerIndex = local_6390->TimerIndex;
                  dVar29 = (double)CONCAT44((uint)((ulonglong)pFVar44->Time >> 0x20) ^ uVar39,
                                            SUB84(pFVar44->Time,0) ^ uVar14);
                  pFVar22->StartTime = dVar29;
                  if (1 < (int)uVar35) {
                    *(double *)(&uStack_6100 + uVar17 * 6) =
                         (dVar29 - (double)CONCAT44(uVar34,uVar33)) +
                         *(double *)(&uStack_6100 + uVar17 * 6);
                  }
                  local_6390 = TPagedArrayIterator<TraceServices::FTimingProfilerEvent,TraceServices::TPagedArrayPage<TraceServices::FTimingProfilerEvent>_>
                               ::NextItem(&local_6370);
                  uVar33 = SUB84(pFVar44->Time,0) ^ uVar14;
                  uVar34 = (uint)((ulonglong)pFVar44->Time >> 0x20) ^ uVar39;
                }
                uVar19 = (ulonglong)uVar35;
                if (pFVar44 == uStack_63e8) {
                  if (local_6400._8_8_ == (longlong)((pTVar9->PagesArray).ArrayNum + -1)) break;
                  lVar24 = local_6400._8_8_ + 1;
                  local_6400._8_8_ = lVar24;
                  pFVar21 = pTVar9->FirstPage + lVar24;
                  uStack_63d8 = pFVar21->Items;
                  if (uStack_63d8 == (FEventScopeEntry *)0x0) {
                    uStack_63e8 = (FEventScopeEntry *)0x0;
                  }
                  else {
                    uStack_63e8 = uStack_63d8 + (pFVar21->Count - 1);
                  }
                  local_63e0 = lVar24 * pTVar9->PageSize;
                  local_63f0 = uStack_63d8;
                  if (pFVar21 == (FEventScopeEntryPage *)0x0) break;
                }
                else {
                  local_63e0 = local_63e0 + 1;
                  uStack_63d8 = pFVar44 + 1;
                }
                uVar17 = uVar18;
                pFVar22 = pFVar25;
              } while (uStack_63d8 != (FEventScopeEntry *)0x0);
            }
            local_6380->EndTime = (double)CONCAT44(uVar34,uVar33);
            dVar30 = local_60e0[local_63b0 * 3 + -2];
            dVar29 = local_60e0[local_63b0 * 3 + -1];
            local_63c8._0_4_ = (uint)*(undefined8 *)(&local_60f8 + local_63b0);
            (local_6380->Event).TimerIndex = local_63c8._0_4_;
            local_6380->StartTime = dVar30;
            local_6380->ExclTime = dVar29;
            return true;
          }
          lVar28 = auVar6._8_8_ * 0x40;
          local_6400._4_4_ = uStack_6274;
          local_6400._0_4_ = local_6278;
          local_6400._8_4_ = (int)lStack_6270;
          local_6400._12_4_ = uVar31;
          local_63f0 = (FEventScopeEntry *)CONCAT44(uStack_6114,local_6118);
          uStack_63e8 = (FEventScopeEntry *)CONCAT44(uStack_610c,uStack_6110);
          lVar24 = *(longlong *)(CONCAT44(uStack_6274,local_6278) + 0x18);
          uStack_63d8 = (FEventScopeEntry *)CONCAT44(uStack_60fc,uStack_6100);
          local_63e0 = local_6258;
          if ((int)(uint)*(ushort *)(lVar24 + 0x38 + lVar28) <= iVar26) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("ScopePage->InitialStackCount > Depth",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TraceServices\\Public\\Model\\MonotonicTimeline.h"
                                ,0x3f8,L"");
            if (bVar10) {
              pcVar5 = (code *)swi(3);
              uVar11 = (*pcVar5)();
              return (bool)uVar11;
            }
          }
          lVar24 = *(longlong *)(lVar24 + 0x30 + lVar28);
          lVar28 = uVar17 * 0x20;
          dVar29 = FDetailLevel<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                   ::GetScopeEntryTime(this_00,*(ulong64 *)(lVar28 + lVar24));
          local_6380->StartTime = dVar29;
          dVar29 = *(double *)(lVar28 + 0x18 + lVar24);
          uVar31 = SUB84(dVar29,0);
          uVar32 = (undefined4)((ulonglong)dVar29 >> 0x20);
          local_6380->EndTime = dVar29;
          local_6380->ExclTime = *(double *)(lVar28 + 0x10 + lVar24);
          uVar17 = *(ulonglong *)(lVar28 + 8 + lVar24);
          uVar19 = (this_00->Events).PageSize;
          (local_6380->Event).TimerIndex =
               (this_00->Events).FirstPage[uVar17 / uVar19].Items[uVar17 % uVar19].TimerIndex;
        }
        else {
          uVar31 = SUB84(local_6318.EndTime,0);
          uVar32 = (undefined4)((ulonglong)local_6318.EndTime >> 0x20);
          local_6380->StartTime = dVar29;
          local_6380->EndTime = local_6318.EndTime;
          local_6380->ExclTime = local_6318.EventInfo.ExclTime;
          (local_6380->Event).TimerIndex = local_6318.EventInfo.Event.TimerIndex;
        }
        if ((double)CONCAT44(uVar32,uVar31) < 0.0) {
          local_6380->EndTime = (this_00->InsertionState).LastTime;
        }
      }
      return true;
    }
  }
  return false;
}

// GetLastTimestamp @ 14d468da0

double __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::GetLastTimestamp(TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                   *this)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  if (0 < *(int *)&(this->DetailLevels).AllocatorInstance.Data) {
    return (double)this->Allocator[0xf];
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    dVar3 = (double)(*pcVar1)();
    return dVar3;
  }
  return (double)this->Allocator[0xf];
}

// GetLastTimestamp @ 14d468e10

double __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::GetLastTimestamp(TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
                   *this)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  if (0 < *(int *)&(this->DetailLevels).AllocatorInstance.Data) {
    return (double)this->Allocator[0xf];
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    dVar3 = (double)(*pcVar1)();
    return dVar3;
  }
  return (double)this->Allocator[0xf];
}

// GetModCount @ 14d4697f0

ulong64 __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::GetModCount(TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
              *this)

{
  return this->ModCount;
}

// GetModCount @ 14d469800

ulong64 __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::GetModCount(TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
              *this)

{
  return this->ModCount;
}

// GetStartTime @ 14d46cc80

double __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::GetStartTime(TMonotonicTimeline<TraceServices::FLoadTimeProfilerCpuEvent,TraceServices::FMonotonicTimelineDefaultSettings>
               *this)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  double dVar4;
  
  if ((this->DetailLevels).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      dVar4 = (double)(*pcVar2)();
      return dVar4;
    }
  }
  if (*(longlong *)((this->DetailLevels).AllocatorInstance.Data + 0x38) != 0) {
    if ((this->DetailLevels).ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        dVar4 = (double)(*pcVar2)();
        return dVar4;
      }
    }
    uVar1 = *(undefined8 *)**(undefined8 **)((this->DetailLevels).AllocatorInstance.Data + 0x20);
    return (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  }
  return 0.0;
}

// GetStartTime @ 14d46cd40

double __thiscall
TraceServices::
TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
::GetStartTime(TMonotonicTimeline<TraceServices::FTimingProfilerEvent,TraceServices::FMonotonicTimelineDefaultSettings>
               *this)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  double dVar4;
  
  if ((this->DetailLevels).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      dVar4 = (double)(*pcVar2)();
      return dVar4;
    }
  }
  if (*(longlong *)((this->DetailLevels).AllocatorInstance.Data + 0x38) != 0) {
    if ((this->DetailLevels).ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        dVar4 = (double)(*pcVar2)();
        return dVar4;
      }
    }
    uVar1 = *(undefined8 *)**(undefined8 **)((this->DetailLevels).AllocatorInstance.Data + 0x20);
    return (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  }
  return 0.0;
}

