// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 4

// FSbTreeCell @ 14d425df0

FSbTreeCell * __thiscall
TraceServices::FSbTreeCell::FSbTreeCell(FSbTreeCell *this,ILinearAllocator *param_1)

{
  this->Allocator = param_1;
  this->MinStartTime = 1.7976931348623157e+308;
  (this->Allocs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Allocs).ArrayNum = 0;
  (this->Allocs).ArrayMax = 0;
  this->MaxEndEventIndex = 0;
  this->MaxEndTime = 0.0;
  this->MinStartEventIndex = 0xffffffff;
  return this;
}

// ~FSbTreeCell @ 14d42c780

void __thiscall TraceServices::FSbTreeCell::~FSbTreeCell(FSbTreeCell *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Allocs).AllocatorInstance.Data;
  iVar1 = (this->Allocs).ArrayNum;
  pFVar2 = pFVar3 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->Allocs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TraceServices::FAllocationItem_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    ::operator_delete(*(void **)pFVar3,0x40);
    pFVar3 = pFVar3 + 8;
  }
  pFVar2 = (this->Allocs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// AddAlloc @ 14d439a90

void __thiscall TraceServices::FSbTreeCell::AddAlloc(FSbTreeCell *this,FAllocationItem *param_1)

{
  int *piVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAllocationItem *local_res10 [3];
  
  pFVar3 = (this->Allocs).AllocatorInstance.Data;
  local_res10[0] = param_1;
  if ((pFVar3 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar3 + (longlong)(this->Allocs).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Allocs).ArrayNum;
  piVar1 = &(this->Allocs).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Allocs).AllocatorInstance,piVar1);
  }
  (this->Allocs).ArrayNum = iVar6 + 1;
  *(FAllocationItem **)((this->Allocs).AllocatorInstance.Data + (longlong)iVar6 * 8) =
       local_res10[0];
  if (local_res10[0]->StartEventIndex < this->MinStartEventIndex) {
    this->MinStartEventIndex = local_res10[0]->StartEventIndex;
  }
  if (this->MaxEndEventIndex < local_res10[0]->EndEventIndex) {
    this->MaxEndEventIndex = local_res10[0]->EndEventIndex;
  }
  if (local_res10[0]->StartTime < this->MinStartTime) {
    this->MinStartTime = local_res10[0]->StartTime;
  }
  dVar2 = local_res10[0]->EndTime;
  if (this->MaxEndTime <= dVar2 && dVar2 != this->MaxEndTime) {
    this->MaxEndTime = dVar2;
  }
  return;
}

// Query @ 14d47e800

void __thiscall
TraceServices::FSbTreeCell::Query
          (FSbTreeCell *this,
          TArray<TraceServices::FAllocationItem_const_*,TSizedDefaultAllocator<32>_> *param_1,
          FQueryParams *param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_f8;
  undefined1 local_f7;
  undefined1 local_f6;
  undefined1 local_f5;
  undefined1 local_f4;
  undefined1 local_f3;
  undefined1 local_f2;
  undefined1 local_f1;
  undefined1 local_f0;
  undefined1 local_ef;
  undefined1 local_ee;
  undefined1 local_ed;
  undefined1 local_ec;
  undefined1 local_eb [3];
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70 [9];
  
  switch(param_2->Rule) {
  case aAf:
    pFVar11 = (this->Allocs).AllocatorInstance.Data;
    iVar6 = (this->Allocs).ArrayNum;
    dVar4 = param_2->TimeA;
    pFVar1 = pFVar11 + (longlong)iVar6 * 8;
    while( true ) {
      if ((this->Allocs).ArrayNum != iVar6) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TraceServices::FAllocationItem_const_*_const,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar11 == pFVar1) break;
      local_e8 = *(longlong *)pFVar11;
      if ((*(double *)(local_e8 + 0x18) <= dVar4) &&
         (dVar4 < *(double *)(local_e8 + 0x20) || dVar4 == *(double *)(local_e8 + 0x20))) {
        pFVar7 = (param_1->AllocatorInstance).Data;
        if ((pFVar7 <= (FScriptContainerElement *)&local_e8) &&
           (((FScriptContainerElement *)&local_e8 < pFVar7 + (longlong)param_1->ArrayMax * 8 &&
            (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar9)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar10 = param_1->ArrayNum;
        if (iVar10 == param_1->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar10 + 1;
        *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_e8;
      }
      pFVar11 = pFVar11 + 8;
    }
    break;
  case afA:
    pFVar11 = (this->Allocs).AllocatorInstance.Data;
    iVar6 = (this->Allocs).ArrayNum;
    dVar4 = param_2->TimeA;
    pFVar1 = pFVar11 + (longlong)iVar6 * 8;
    while( true ) {
      if ((this->Allocs).ArrayNum != iVar6) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TraceServices::FAllocationItem_const_*_const,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res20);
      }
      if (pFVar11 == pFVar1) break;
      local_e0 = *(longlong *)pFVar11;
      if (*(double *)(local_e0 + 0x20) <= dVar4) {
        pFVar7 = (param_1->AllocatorInstance).Data;
        if (((pFVar7 <= (FScriptContainerElement *)&local_e0) &&
            ((FScriptContainerElement *)&local_e0 < pFVar7 + (longlong)param_1->ArrayMax * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar10 = param_1->ArrayNum;
        if (iVar10 == param_1->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar10 + 1;
        *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_e0;
      }
      pFVar11 = pFVar11 + 8;
    }
    break;
  case Aaf:
    pFVar11 = (this->Allocs).AllocatorInstance.Data;
    iVar6 = (this->Allocs).ArrayNum;
    dVar4 = param_2->TimeA;
    pFVar1 = pFVar11 + (longlong)iVar6 * 8;
    while( true ) {
      if ((this->Allocs).ArrayNum != iVar6) {
        local_f8 = 0;
        `TCheckedPointerIterator<TraceServices::FAllocationItem_const_*_const,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_f8);
      }
      if (pFVar11 == pFVar1) break;
      local_d8 = *(longlong *)pFVar11;
      if (dVar4 < *(double *)(local_d8 + 0x18) || dVar4 == *(double *)(local_d8 + 0x18)) {
        pFVar7 = (param_1->AllocatorInstance).Data;
        if (((pFVar7 <= (FScriptContainerElement *)&local_d8) &&
            ((FScriptContainerElement *)&local_d8 < pFVar7 + (longlong)param_1->ArrayMax * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar10 = param_1->ArrayNum;
        if (iVar10 == param_1->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar10 + 1;
        *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_d8;
      }
      pFVar11 = pFVar11 + 8;
    }
    break;
  case aAfB:
    pFVar11 = (this->Allocs).AllocatorInstance.Data;
    iVar6 = (this->Allocs).ArrayNum;
    dVar4 = param_2->TimeA;
    dVar5 = param_2->TimeB;
    pFVar1 = pFVar11 + (longlong)iVar6 * 8;
    while( true ) {
      if ((this->Allocs).ArrayNum != iVar6) {
        local_f7 = 0;
        `TCheckedPointerIterator<TraceServices::FAllocationItem_const_*_const,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_f7);
      }
      if (pFVar11 == pFVar1) break;
      local_d0 = *(longlong *)pFVar11;
      if (((*(double *)(local_d0 + 0x18) <= dVar4) && (dVar4 <= *(double *)(local_d0 + 0x20))) &&
         (*(double *)(local_d0 + 0x20) <= dVar5)) {
        pFVar7 = (param_1->AllocatorInstance).Data;
        if (((pFVar7 <= (FScriptContainerElement *)&local_d0) &&
            ((FScriptContainerElement *)&local_d0 < pFVar7 + (longlong)param_1->ArrayMax * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar10 = param_1->ArrayNum;
        if (iVar10 == param_1->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar10 + 1;
        *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_d0;
      }
      pFVar11 = pFVar11 + 8;
    }
    break;
  case AaBf:
    pFVar11 = (this->Allocs).AllocatorInstance.Data;
    iVar6 = (this->Allocs).ArrayNum;
    dVar4 = param_2->TimeA;
    dVar5 = param_2->TimeB;
    pFVar1 = pFVar11 + (longlong)iVar6 * 8;
    while( true ) {
      if ((this->Allocs).ArrayNum != iVar6) {
        local_f6 = 0;
        `TCheckedPointerIterator<TraceServices::FAllocationItem_const_*_const,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_f6);
      }
      if (pFVar11 == pFVar1) break;
      local_c8 = *(longlong *)pFVar11;
      if (((dVar4 <= *(double *)(local_c8 + 0x18)) && (*(double *)(local_c8 + 0x18) <= dVar5)) &&
         (dVar5 < *(double *)(local_c8 + 0x20) || dVar5 == *(double *)(local_c8 + 0x20))) {
        pFVar7 = (param_1->AllocatorInstance).Data;
        if (((pFVar7 <= (FScriptContainerElement *)&local_c8) &&
            ((FScriptContainerElement *)&local_c8 < pFVar7 + (longlong)param_1->ArrayMax * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar10 = param_1->ArrayNum;
        if (iVar10 == param_1->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar10 + 1;
        *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_c8;
      }
      pFVar11 = pFVar11 + 8;
    }
    break;
  case aAfaBf:
    pFVar11 = (this->Allocs).AllocatorInstance.Data;
    iVar6 = (this->Allocs).ArrayNum;
    dVar4 = param_2->TimeA;
    dVar5 = param_2->TimeB;
    pFVar1 = pFVar11 + (longlong)iVar6 * 8;
    while( true ) {
      if ((this->Allocs).ArrayNum != iVar6) {
        local_f5 = 0;
        `TCheckedPointerIterator<TraceServices::FAllocationItem_const_*_const,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_f5);
      }
      if (pFVar11 == pFVar1) break;
      local_c0 = *(longlong *)pFVar11;
      dVar3 = *(double *)(local_c0 + 0x18);
      if (dVar4 < dVar3) {
LAB_14d47ed70:
        if ((dVar3 <= dVar5) &&
           (dVar5 < *(double *)(local_c0 + 0x20) || dVar5 == *(double *)(local_c0 + 0x20))) {
LAB_14d47ed85:
          pFVar7 = (param_1->AllocatorInstance).Data;
          if ((pFVar7 <= (FScriptContainerElement *)&local_c0) &&
             (((FScriptContainerElement *)&local_c0 < pFVar7 + (longlong)param_1->ArrayMax * 8 &&
              (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar9)))) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar10 = param_1->ArrayNum;
          if (iVar10 == param_1->ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar10 + 1;
          *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_c0;
        }
      }
      else {
        if ((dVar4 <= *(double *)(local_c0 + 0x20)) && (*(double *)(local_c0 + 0x20) <= dVar5))
        goto LAB_14d47ed85;
        if (dVar4 <= dVar3) goto LAB_14d47ed70;
      }
      pFVar11 = pFVar11 + 8;
    }
    break;
  case AfB:
    pFVar11 = (this->Allocs).AllocatorInstance.Data;
    iVar6 = (this->Allocs).ArrayNum;
    dVar4 = param_2->TimeA;
    dVar5 = param_2->TimeB;
    pFVar1 = pFVar11 + (longlong)iVar6 * 8;
    while( true ) {
      if ((this->Allocs).ArrayNum != iVar6) {
        local_f4 = 0;
        `TCheckedPointerIterator<TraceServices::FAllocationItem_const_*_const,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_f4);
      }
      if (pFVar11 == pFVar1) break;
      local_b8 = *(longlong *)pFVar11;
      if ((dVar4 <= *(double *)(local_b8 + 0x20)) && (*(double *)(local_b8 + 0x20) <= dVar5)) {
        pFVar7 = (param_1->AllocatorInstance).Data;
        if ((pFVar7 <= (FScriptContainerElement *)&local_b8) &&
           (((FScriptContainerElement *)&local_b8 < pFVar7 + (longlong)param_1->ArrayMax * 8 &&
            (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar9)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar10 = param_1->ArrayNum;
        if (iVar10 == param_1->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar10 + 1;
        *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_b8;
      }
      pFVar11 = pFVar11 + 8;
    }
    break;
  case AaB:
    pFVar11 = (this->Allocs).AllocatorInstance.Data;
    iVar6 = (this->Allocs).ArrayNum;
    dVar4 = param_2->TimeA;
    dVar5 = param_2->TimeB;
    pFVar1 = pFVar11 + (longlong)iVar6 * 8;
    while( true ) {
      if ((this->Allocs).ArrayNum != iVar6) {
        local_f3 = 0;
        `TCheckedPointerIterator<TraceServices::FAllocationItem_const_*_const,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_f3);
      }
      if (pFVar11 == pFVar1) break;
      local_b0 = *(longlong *)pFVar11;
      if ((dVar4 <= *(double *)(local_b0 + 0x18)) && (*(double *)(local_b0 + 0x18) <= dVar5)) {
        pFVar7 = (param_1->AllocatorInstance).Data;
        if ((pFVar7 <= (FScriptContainerElement *)&local_b0) &&
           (((FScriptContainerElement *)&local_b0 < pFVar7 + (longlong)param_1->ArrayMax * 8 &&
            (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar9)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar10 = param_1->ArrayNum;
        if (iVar10 == param_1->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar10 + 1;
        *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_b0;
      }
      pFVar11 = pFVar11 + 8;
    }
    break;
  case AafB:
    pFVar11 = (this->Allocs).AllocatorInstance.Data;
    iVar6 = (this->Allocs).ArrayNum;
    dVar4 = param_2->TimeA;
    dVar5 = param_2->TimeB;
    pFVar1 = pFVar11 + (longlong)iVar6 * 8;
    while( true ) {
      if ((this->Allocs).ArrayNum != iVar6) {
        local_f2 = 0;
        `TCheckedPointerIterator<TraceServices::FAllocationItem_const_*_const,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_f2);
      }
      if (pFVar11 == pFVar1) break;
      local_a8 = *(longlong *)pFVar11;
      if ((dVar4 < *(double *)(local_a8 + 0x18) || dVar4 == *(double *)(local_a8 + 0x18)) &&
         (*(double *)(local_a8 + 0x20) <= dVar5)) {
        pFVar7 = (param_1->AllocatorInstance).Data;
        if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
           (((FScriptContainerElement *)&local_a8 < pFVar7 + (longlong)param_1->ArrayMax * 8 &&
            (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar9)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar10 = param_1->ArrayNum;
        if (iVar10 == param_1->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar10 + 1;
        *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_a8;
      }
      pFVar11 = pFVar11 + 8;
    }
    break;
  case aABf:
    pFVar11 = (this->Allocs).AllocatorInstance.Data;
    iVar6 = (this->Allocs).ArrayNum;
    dVar4 = param_2->TimeA;
    dVar5 = param_2->TimeB;
    pFVar1 = pFVar11 + (longlong)iVar6 * 8;
    while( true ) {
      if ((this->Allocs).ArrayNum != iVar6) {
        local_f1 = 0;
        `TCheckedPointerIterator<TraceServices::FAllocationItem_const_*_const,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_f1);
      }
      if (pFVar11 == pFVar1) break;
      local_a0 = *(longlong *)pFVar11;
      if ((*(double *)(local_a0 + 0x18) <= dVar4) &&
         (dVar5 < *(double *)(local_a0 + 0x20) || dVar5 == *(double *)(local_a0 + 0x20))) {
        pFVar7 = (param_1->AllocatorInstance).Data;
        if ((pFVar7 <= (FScriptContainerElement *)&local_a0) &&
           (((FScriptContainerElement *)&local_a0 < pFVar7 + (longlong)param_1->ArrayMax * 8 &&
            (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar9)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar10 = param_1->ArrayNum;
        if (iVar10 == param_1->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar10 + 1;
        *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_a0;
      }
      pFVar11 = pFVar11 + 8;
    }
    break;
  case AaBCf:
    pFVar11 = (this->Allocs).AllocatorInstance.Data;
    iVar6 = (this->Allocs).ArrayNum;
    dVar4 = param_2->TimeA;
    dVar5 = param_2->TimeB;
    dVar3 = param_2->TimeC;
    pFVar1 = pFVar11 + (longlong)iVar6 * 8;
    while( true ) {
      if ((this->Allocs).ArrayNum != iVar6) {
        local_f0 = 0;
        `TCheckedPointerIterator<TraceServices::FAllocationItem_const_*_const,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_f0);
      }
      if (pFVar11 == pFVar1) break;
      local_98 = *(longlong *)pFVar11;
      if (((dVar4 <= *(double *)(local_98 + 0x18)) && (*(double *)(local_98 + 0x18) <= dVar5)) &&
         (dVar3 < *(double *)(local_98 + 0x20) || dVar3 == *(double *)(local_98 + 0x20))) {
        pFVar7 = (param_1->AllocatorInstance).Data;
        if (((pFVar7 <= (FScriptContainerElement *)&local_98) &&
            ((FScriptContainerElement *)&local_98 < pFVar7 + (longlong)param_1->ArrayMax * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar10 = param_1->ArrayNum;
        if (iVar10 == param_1->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar10 + 1;
        *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_98;
      }
      pFVar11 = pFVar11 + 8;
    }
    break;
  case AaBfC:
    pFVar11 = (this->Allocs).AllocatorInstance.Data;
    iVar6 = (this->Allocs).ArrayNum;
    dVar4 = param_2->TimeA;
    dVar5 = param_2->TimeB;
    dVar3 = param_2->TimeC;
    pFVar1 = pFVar11 + (longlong)iVar6 * 8;
    while( true ) {
      if ((this->Allocs).ArrayNum != iVar6) {
        local_ef = 0;
        `TCheckedPointerIterator<TraceServices::FAllocationItem_const_*_const,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_ef);
      }
      if (pFVar11 == pFVar1) break;
      local_90 = *(longlong *)pFVar11;
      if (((dVar4 <= *(double *)(local_90 + 0x18)) && (*(double *)(local_90 + 0x18) <= dVar5)) &&
         ((dVar5 <= *(double *)(local_90 + 0x20) && (*(double *)(local_90 + 0x20) <= dVar3)))) {
        pFVar7 = (param_1->AllocatorInstance).Data;
        if (((pFVar7 <= (FScriptContainerElement *)&local_90) &&
            ((FScriptContainerElement *)&local_90 < pFVar7 + (longlong)param_1->ArrayMax * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar10 = param_1->ArrayNum;
        if (iVar10 == param_1->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar10 + 1;
        *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_90;
      }
      pFVar11 = pFVar11 + 8;
    }
    break;
  case aABfC:
    pFVar11 = (this->Allocs).AllocatorInstance.Data;
    iVar6 = (this->Allocs).ArrayNum;
    dVar4 = param_2->TimeA;
    dVar5 = param_2->TimeB;
    dVar3 = param_2->TimeC;
    pFVar1 = pFVar11 + (longlong)iVar6 * 8;
    while( true ) {
      if ((this->Allocs).ArrayNum != iVar6) {
        local_ee = 0;
        `TCheckedPointerIterator<TraceServices::FAllocationItem_const_*_const,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_ee);
      }
      if (pFVar11 == pFVar1) break;
      local_88 = *(longlong *)pFVar11;
      if (((*(double *)(local_88 + 0x18) <= dVar4) && (dVar5 <= *(double *)(local_88 + 0x20))) &&
         (*(double *)(local_88 + 0x20) <= dVar3)) {
        pFVar7 = (param_1->AllocatorInstance).Data;
        if (((pFVar7 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 < pFVar7 + (longlong)param_1->ArrayMax * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar10 = param_1->ArrayNum;
        if (iVar10 == param_1->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar10 + 1;
        *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_88;
      }
      pFVar11 = pFVar11 + 8;
    }
    break;
  case AaBCfD:
    pFVar11 = (this->Allocs).AllocatorInstance.Data;
    iVar6 = (this->Allocs).ArrayNum;
    dVar4 = param_2->TimeB;
    dVar5 = param_2->TimeC;
    dVar3 = param_2->TimeD;
    pFVar1 = pFVar11 + (longlong)iVar6 * 8;
    dVar2 = param_2->TimeA;
    while( true ) {
      if ((this->Allocs).ArrayNum != iVar6) {
        local_ed = 0;
        `TCheckedPointerIterator<TraceServices::FAllocationItem_const_*_const,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_ed);
      }
      if (pFVar11 == pFVar1) break;
      local_80 = *(longlong *)pFVar11;
      if ((((dVar2 <= *(double *)(local_80 + 0x18)) && (*(double *)(local_80 + 0x18) <= dVar4)) &&
          (dVar5 <= *(double *)(local_80 + 0x20))) && (*(double *)(local_80 + 0x20) <= dVar3)) {
        pFVar7 = (param_1->AllocatorInstance).Data;
        if (((pFVar7 <= (FScriptContainerElement *)&local_80) &&
            ((FScriptContainerElement *)&local_80 < pFVar7 + (longlong)param_1->ArrayMax * 8)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar10 = param_1->ArrayNum;
        if (iVar10 == param_1->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar10 + 1;
        *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_80;
      }
      pFVar11 = pFVar11 + 8;
    }
    break;
  case AoB:
    pFVar11 = (this->Allocs).AllocatorInstance.Data;
    iVar6 = (this->Allocs).ArrayNum;
    dVar4 = param_2->TimeA;
    dVar5 = param_2->TimeB;
    pFVar1 = pFVar11 + (longlong)iVar6 * 8;
    while( true ) {
      if ((this->Allocs).ArrayNum != iVar6) {
        local_ec = 0;
        `TCheckedPointerIterator<TraceServices::FAllocationItem_const_*_const,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_ec);
      }
      if (pFVar11 == pFVar1) break;
      local_78 = *(longlong *)pFVar11;
      dVar3 = *(double *)(local_78 + 0x18);
      if ((*(byte *)(local_78 + 0x3d) & 2) == 0) {
        if ((dVar3 <= dVar5) &&
           (dVar4 < *(double *)(local_78 + 0x20) || dVar4 == *(double *)(local_78 + 0x20))) {
LAB_14d47f6bb:
          pFVar7 = (param_1->AllocatorInstance).Data;
          if (((pFVar7 <= (FScriptContainerElement *)&local_78) &&
              ((FScriptContainerElement *)&local_78 < pFVar7 + (longlong)param_1->ArrayMax * 8)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar10 = param_1->ArrayNum;
          if (iVar10 == param_1->ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar10 + 1;
          *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_78;
        }
LAB_14d47f750:
        pFVar11 = pFVar11 + 8;
      }
      else {
        if (dVar3 < dVar4) goto LAB_14d47f750;
        if (dVar3 <= dVar5) goto LAB_14d47f6bb;
        pFVar11 = pFVar11 + 8;
      }
    }
    break;
  case AiB:
    pFVar11 = (this->Allocs).AllocatorInstance.Data;
    iVar6 = (this->Allocs).ArrayNum;
    dVar4 = param_2->TimeA;
    dVar5 = param_2->TimeB;
    pFVar1 = pFVar11 + (longlong)iVar6 * 8;
    while( true ) {
      if ((this->Allocs).ArrayNum != iVar6) {
        local_eb[0] = 0;
        `TCheckedPointerIterator<TraceServices::FAllocationItem_const_*_const,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_eb);
      }
      if (pFVar11 == pFVar1) break;
      local_70[0] = *(longlong *)pFVar11;
      if ((*(byte *)(local_70[0] + 0x3d) & 2) == 0) {
        if ((*(double *)(local_70[0] + 0x18) <= dVar5) &&
           (dVar4 < *(double *)(local_70[0] + 0x20) || dVar4 == *(double *)(local_70[0] + 0x20))) {
LAB_14d47f7cd:
          pFVar7 = (param_1->AllocatorInstance).Data;
          if (((pFVar7 <= (FScriptContainerElement *)local_70) &&
              ((FScriptContainerElement *)local_70 < pFVar7 + (longlong)param_1->ArrayMax * 8)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar10 = param_1->ArrayNum;
          if (iVar10 == param_1->ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar10 + 1;
          *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_70[0];
        }
LAB_14d47f862:
        pFVar11 = pFVar11 + 8;
      }
      else {
        if (*(double *)(local_70[0] + 0x20) < dVar4) goto LAB_14d47f862;
        if (*(double *)(local_70[0] + 0x20) <= dVar5) goto LAB_14d47f7cd;
        pFVar11 = pFVar11 + 8;
      }
    }
  }
  return;
}

