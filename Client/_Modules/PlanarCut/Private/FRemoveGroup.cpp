// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 2

// FRemoveGroup @ 14c9a88e0

FRemoveGroup * __thiscall
`MergeBones'::__l2::FRemoveGroup::FRemoveGroup
          (void *this,
          TMap<int,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,double,0>_> *param_1,
          double param_2,int param_3,int param_4)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  double *pdVar6;
  FRemoveGroup *pFVar7;
  
  *(undefined4 *)this = 0xffffffff;
  *(undefined8 *)((longlong)this + 8) = 0;
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined1 *)((longlong)this + 0x18) = 0;
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x404,(ForAnyElementType *)((longlong)this + 0x20),
                     (int *)((longlong)this + 0x2c));
  *(int *)((longlong)this + 0x28) = iVar5 + 1;
  *(int *)(*(longlong *)((longlong)this + 0x20) + (longlong)iVar5 * 4) = param_3;
  pdVar6 = TMapBase<int,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,double,0>_>::
           FindChecked((TMapBase<int,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,double,0>_>
                        *)param_1,param_4);
  dVar1 = *pdVar6;
  if (dVar1 < param_2) {
    if ((*(int **)((longlong)this + 0x20) <= &param_4) &&
       (&param_4 < *(int **)((longlong)this + 0x20) + *(int *)((longlong)this + 0x2c))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FRemoveGroup *)(*pcVar3)();
        return pFVar7;
      }
    }
    iVar5 = *(int *)((longlong)this + 0x28);
    if (iVar5 == *(int *)((longlong)this + 0x2c)) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)((longlong)this + 0x20),
                         (int *)((longlong)this + 0x2c));
    }
    *(int *)((longlong)this + 0x28) = iVar5 + 1;
    *(int *)(*(longlong *)((longlong)this + 0x20) + (longlong)iVar5 * 4) = param_4;
    *(undefined1 *)((longlong)this + 0x18) = 1;
  }
  *(double *)((longlong)this + 8) = dVar1;
  pdVar6 = TMapBase<int,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,double,0>_>::
           FindChecked((TMapBase<int,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,double,0>_>
                        *)param_1,param_3);
  dVar2 = *pdVar6;
  *(int *)this = param_4;
  *(double *)((longlong)this + 0x10) = dVar1 + dVar2;
  return this;
}

// TransferGroup @ 14c9ed350

void __thiscall
`MergeBones'::__l2::FRemoveGroup::TransferGroup
          (void *this,FRemoveGroup *param_1,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_2,
          int param_3)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  int local_78 [10];
  undefined8 local_50 [3];
  
  pFVar8 = (param_1->ToRemove).AllocatorInstance.Data;
  pTVar1 = &param_1->ToRemove;
  iVar6 = (param_1->ToRemove).ArrayNum;
  pFVar2 = pFVar8 + (longlong)iVar6 * 4;
  while( true ) {
    if ((param_1->ToRemove).ArrayNum != iVar6) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar2) break;
    local_78[0] = *(int *)pFVar8;
    if ((*(int **)((longlong)this + 0x20) <= local_78) &&
       (local_78 < *(int **)((longlong)this + 0x20) + *(int *)((longlong)this + 0x2c))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = *(int *)((longlong)this + 0x28);
    if (iVar5 == *(int *)((longlong)this + 0x2c)) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)((longlong)this + 0x20),
                         (int *)((longlong)this + 0x2c));
    }
    *(int *)((longlong)this + 0x28) = iVar5 + 1;
    *(int *)(*(longlong *)((longlong)this + 0x20) + (longlong)iVar5 * 4) = local_78[0];
    piVar7 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
             FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                          *)param_2,local_78[0]);
    pFVar8 = pFVar8 + 4;
    *piVar7 = param_3;
  }
  if (param_1->bRemoveMergeTarget == false) {
    if ((*(FRemoveGroup **)((longlong)this + 0x20) <= param_1) &&
       (param_1 < (FRemoveGroup *)
                  (&(*(FRemoveGroup **)((longlong)this + 0x20))->MergeTo +
                  *(int *)((longlong)this + 0x2c)))) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = *(int *)((longlong)this + 0x28);
    if (iVar6 == *(int *)((longlong)this + 0x2c)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)((longlong)this + 0x20),
                         (int *)((longlong)this + 0x2c));
      *(int *)((longlong)this + 0x28) = iVar6;
    }
    *(int *)((longlong)this + 0x28) = iVar6 + 1;
    *(int *)(*(longlong *)((longlong)this + 0x20) + (longlong)iVar6 * 4) = param_1->MergeTo;
    piVar7 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
             FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                          *)param_2,param_1->MergeTo);
    *piVar7 = param_3;
  }
  *(double *)((longlong)this + 0x10) = *(double *)((longlong)this + 0x10) + param_1->TotalVolume;
  param_1->MergeTo = -1;
  param_1->MergeTargetVolume = 0.0;
  param_1->TotalVolume = 0.0;
  param_1->bRemoveMergeTarget = false;
  if (pTVar1 != (TArray<int,TSizedDefaultAllocator<32>_> *)local_50) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (param_1->ToRemove).ArrayNum = 0;
    (param_1->ToRemove).ArrayMax = 0;
  }
  return;
}

