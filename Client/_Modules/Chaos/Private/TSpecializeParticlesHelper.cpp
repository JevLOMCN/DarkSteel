// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// AccumulateChildrenResults<double,3,Chaos::TAABB<double,3>_> @ 14370a680

void __cdecl
Chaos::TSpecializeParticlesHelper<Chaos::TGeometryParticlesImp<double,3,0>_>::
AccumulateChildrenResults<double,3,Chaos::TAABB<double,3>_>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,TAABB<double,3> *param_3,
          TMap<int,Chaos::TAABB<double,3>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>_>
          *param_4)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TAABB<double,3> *pTVar8;
  TVector<double,3> *pTVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 local_res10 [8];
  int local_38 [4];
  
  pFVar11 = (param_2->AllocatorInstance).Data;
  iVar3 = param_2->ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar3 * 4;
  do {
    if (param_2->ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar11 == pFVar1) {
      return;
    }
    local_38[0] = *(int *)pFVar11;
    pTVar8 = TMapBase<int,Chaos::TAABB<double,3>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>_>
             ::FindChecked((TMapBase<int,Chaos::TAABB<double,3>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>_>
                            *)param_4,local_38[0]);
    pTVar9 = &param_3->MMax;
    lVar13 = (longlong)pTVar8 - (longlong)pTVar9;
    lVar10 = 0;
    lVar12 = -(longlong)pTVar9;
    do {
      dVar2 = *(double *)((longlong)pTVar9 + lVar13);
      if ((*(double *)pTVar9 <= dVar2 && dVar2 != *(double *)pTVar9) ||
         (*(double *)((longlong)pTVar9 + lVar12 + 0x18 + (longlong)pTVar8) <
          *(double *)(lVar12 + (longlong)param_3 + (longlong)pTVar9))) goto LAB_14370a7cb;
      lVar10 = lVar10 + 1;
      pTVar9 = (TVector<double,3> *)&pTVar9->field_0x8;
    } while (lVar10 < 3);
    pFVar4 = (param_1->AllocatorInstance).Data;
    if ((pFVar4 <= (FScriptContainerElement *)local_38) &&
       ((FScriptContainerElement *)local_38 < pFVar4 + (longlong)param_1->ArrayMax * 4)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = param_1->ArrayNum;
    if (iVar7 == param_1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar7 + 1;
    *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_38[0];
LAB_14370a7cb:
    pFVar11 = pFVar11 + 4;
  } while( true );
}

// AccumulateChildrenResults<double,3,Chaos::TAABB<double,3>_> @ 14370a800

void __cdecl
Chaos::TSpecializeParticlesHelper<Chaos::TPBDRigidParticles<double,3>_>::
AccumulateChildrenResults<double,3,Chaos::TAABB<double,3>_>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,TAABB<double,3> *param_3,
          TMap<int,Chaos::TAABB<double,3>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>_>
          *param_4)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TAABB<double,3> *pTVar8;
  TVector<double,3> *pTVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 local_res10 [8];
  int local_38 [4];
  
  pFVar11 = (param_2->AllocatorInstance).Data;
  iVar3 = param_2->ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar3 * 4;
  do {
    if (param_2->ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar11 == pFVar1) {
      return;
    }
    local_38[0] = *(int *)pFVar11;
    pTVar8 = TMapBase<int,Chaos::TAABB<double,3>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>_>
             ::FindChecked((TMapBase<int,Chaos::TAABB<double,3>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>_>
                            *)param_4,local_38[0]);
    pTVar9 = &param_3->MMax;
    lVar13 = (longlong)pTVar8 - (longlong)pTVar9;
    lVar10 = 0;
    lVar12 = -(longlong)pTVar9;
    do {
      dVar2 = *(double *)((longlong)pTVar9 + lVar13);
      if ((*(double *)pTVar9 <= dVar2 && dVar2 != *(double *)pTVar9) ||
         (*(double *)((longlong)pTVar9 + lVar12 + 0x18 + (longlong)pTVar8) <
          *(double *)(lVar12 + (longlong)param_3 + (longlong)pTVar9))) goto LAB_14370a94b;
      lVar10 = lVar10 + 1;
      pTVar9 = (TVector<double,3> *)&pTVar9->field_0x8;
    } while (lVar10 < 3);
    pFVar4 = (param_1->AllocatorInstance).Data;
    if ((pFVar4 <= (FScriptContainerElement *)local_38) &&
       ((FScriptContainerElement *)local_38 < pFVar4 + (longlong)param_1->ArrayMax * 4)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = param_1->ArrayNum;
    if (iVar7 == param_1->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar7 + 1;
    *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_38[0];
LAB_14370a94b:
    pFVar11 = pFVar11 + 4;
  } while( true );
}

// AccumulateChildrenResults<double,3,Chaos::TSpatialRay<double,3>_> @ 14370a980

void __cdecl
Chaos::TSpecializeParticlesHelper<Chaos::TGeometryParticlesImp<double,3,0>_>::
AccumulateChildrenResults<double,3,Chaos::TSpatialRay<double,3>_>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,TSpatialRay<double,3> *param_3,
          TMap<int,Chaos::TAABB<double,3>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>_>
          *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TAABB<double,3> *pTVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  int local_38 [4];
  
  pFVar8 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar1) break;
    local_38[0] = *(int *)pFVar8;
    pTVar7 = TMapBase<int,Chaos::TAABB<double,3>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>_>
             ::FindChecked((TMapBase<int,Chaos::TAABB<double,3>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>_>
                            *)param_4,local_38[0]);
    bVar5 = IntersectsHelper<double,3>(pTVar7,param_3);
    if (bVar5) {
      pFVar3 = (param_1->AllocatorInstance).Data;
      if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
         ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)param_1->ArrayMax * 4)) {
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
      iVar6 = param_1->ArrayNum;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar6 + 1;
      *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_38[0];
    }
    pFVar8 = pFVar8 + 4;
  }
  return;
}

// AccumulateChildrenResults<double,3,Chaos::TSpatialRay<double,3>_> @ 14370aac0

void __cdecl
Chaos::TSpecializeParticlesHelper<Chaos::TPBDRigidParticles<double,3>_>::
AccumulateChildrenResults<double,3,Chaos::TSpatialRay<double,3>_>
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,TSpatialRay<double,3> *param_3,
          TMap<int,Chaos::TAABB<double,3>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>_>
          *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TAABB<double,3> *pTVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  int local_38 [4];
  
  pFVar8 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar1) break;
    local_38[0] = *(int *)pFVar8;
    pTVar7 = TMapBase<int,Chaos::TAABB<double,3>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>_>
             ::FindChecked((TMapBase<int,Chaos::TAABB<double,3>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,Chaos::TAABB<double,3>,0>_>
                            *)param_4,local_38[0]);
    bVar5 = IntersectsHelper<double,3>(pTVar7,param_3);
    if (bVar5) {
      pFVar3 = (param_1->AllocatorInstance).Data;
      if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
         ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)param_1->ArrayMax * 4)) {
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
      iVar6 = param_1->ArrayNum;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar6 + 1;
      *(int *)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_38[0];
    }
    pFVar8 = pFVar8 + 4;
  }
  return;
}

