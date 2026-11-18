// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 1

// ApplySlope @ 14da6ec50

void __cdecl FPVSlope::ApplySlope(FPVSlopeParams *param_1,FManagedArrayCollection *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  TManagedArray<UE::Math::TVector<float>_> *pTVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  TVector<float> *pTVar12;
  TVector<float> *pTVar13;
  ForAnyElementType FVar14;
  float fVar15;
  undefined1 local_res18 [8];
  float local_res20 [2];
  TVector<float>_u_0 local_b68;
  TArray<int,TSizedDefaultAllocator<32>_> local_b58;
  TVector<float>_u_0 local_b48;
  TVector<float>_u_0 local_b38;
  FBudVectorsFacade local_b28;
  FBranchFacade local_ae8;
  FPlantFacade local_7f8;
  FPointFacade local_708;
  FFoliageFacade local_2d8;
  
  PV::Facades::FBranchFacade::FBranchFacade(&local_ae8,param_2);
  PV::Facades::FPointFacade::FPointFacade(&local_708,param_2);
  PV::Facades::FBudVectorsFacade::FBudVectorsFacade(&local_b28,param_2);
  PV::Facades::FFoliageFacade::FFoliageFacade(&local_2d8,param_2,0);
  PV::Facades::FPlantFacade::FPlantFacade(&local_7f8,param_2);
  bVar7 = PV::Facades::FPointFacade::IsValid(&local_708);
  if ((((((bVar7) &&
         (local_ae8.Parents.ConstAttributeArray !=
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
        (local_ae8.Children.ConstAttributeArray !=
         (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
       ((local_ae8.BranchPoints.ConstAttributeArray !=
         (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0 &&
        (local_ae8.BranchNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0)))) &&
      ((local_ae8.BranchSourceBudNumber.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
       ((local_ae8.BranchHierarchyNumber.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
        (local_ae8.BranchParentNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0)))))) &&
     (local_ae8.PlantNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0)) {
    PV::Facades::FPlantFacade::GetTrunkIndices(&local_7f8,&local_b58);
    iVar5 = local_b58.ArrayNum;
    pFVar1 = local_b58.AllocatorInstance.Data + (longlong)local_b58.ArrayNum * 4;
    FVar14.Data = local_b58.AllocatorInstance.Data;
    while( true ) {
      pTVar11 = &EmptyPoints;
      if (local_b58.ArrayNum != iVar5) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (FVar14.Data == pFVar1) break;
      iVar2 = *(int *)FVar14.Data;
      if ((local_ae8.BranchPoints.ConstAttributeArray ==
           (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || (iVar2 < 0)) {
LAB_14da6ede7:
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c) < ::_TSS0) {
          _Init_thread_header(&::_TSS0);
          if (::_TSS0 == -1) {
            atexit(`PV::Facades::FBranchFacade::GetPoints'::__l2::
                   _dynamic_atexit_destructor_for__EmptyPoints__);
            _Init_thread_footer(&::_TSS0);
          }
        }
        pTVar10 = &EmptyPoints;
      }
      else {
        iVar8 = (**(code **)(*(longlong *)local_ae8.BranchPoints.ConstAttributeArray + 0x60))();
        if (iVar8 <= iVar2) goto LAB_14da6ede7;
        pTVar10 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                            (&local_ae8.BranchPoints,iVar2);
      }
      if (pTVar10->ArrayNum != 0) {
        if ((local_ae8.BranchPoints.ConstAttributeArray ==
             (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || (iVar2 < 0)) {
LAB_14da6ee6b:
          if (*(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
              < ::_TSS0) {
            _Init_thread_header(&::_TSS0);
            if (::_TSS0 == -1) {
              atexit(`PV::Facades::FBranchFacade::GetPoints'::__l2::
                     _dynamic_atexit_destructor_for__EmptyPoints__);
              _Init_thread_footer(&::_TSS0);
            }
          }
        }
        else {
          iVar8 = (**(code **)(*(longlong *)local_ae8.BranchPoints.ConstAttributeArray + 0x60))();
          if (iVar8 <= iVar2) goto LAB_14da6ee6b;
          pTVar11 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                              (&local_ae8.BranchPoints,iVar2);
        }
        if (pTVar11->ArrayNum == 0) {
LAB_14da6efd6:
          fVar15 = 0.0;
        }
        else {
          if (local_708.Positions.ConstAttributeArray ==
              (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                               ,0x67,L"");
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          pTVar6 = local_708.Positions.ConstAttributeArray;
          if (pTVar11->ArrayNum < 1) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          uVar3 = *(uint *)(pTVar11->AllocatorInstance).Data;
          uVar9 = 0;
          if ((int)uVar3 < *(int *)&pTVar6->field_0x18) {
            uVar9 = ~uVar3 >> 0x1f;
          }
          if (uVar9 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          local_res20[0] = 0.0;
          PVSlope::CalcBranchLengthSquared_Recursive
                    (&local_ae8,&local_708,iVar2,
                     (TVector<float> *)
                     (*(longlong *)&pTVar6->field_0x10 + (longlong)(int)uVar3 * 0xc),local_res20);
          if (local_res20[0] <= 0.0) goto LAB_14da6efd6;
          fVar15 = SQRT(local_res20[0]);
        }
        if (pTVar10->ArrayNum < 1) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pTVar12 = PV::Facades::FPointFacade::GetPosition
                            (&local_708,*(int *)(pTVar10->AllocatorInstance).Data);
        pTVar13 = (TVector<float> *)&local_b68;
        local_b68._0_8_ = *(undefined8 *)&pTVar12->field0_0x0;
        local_b68._s_0.Z = (pTVar12->field0_0x0)._s_0.Z;
        if (param_1->TrunkPivotPoint == Origin) {
          pTVar13 = &UE::Math::TVector<float>::ZeroVector;
        }
        local_b48._s_0.Z = *(float *)((longlong)pTVar13 + 8);
        local_b48._0_8_ = *(undefined8 *)pTVar13;
        local_b38._0_8_ = local_b48._0_8_;
        local_b38._s_0.Z = local_b48._s_0.Z;
        PVSlope::ApplySlope_Recursive
                  (&local_ae8,&local_708,&local_b28,&local_2d8,iVar2,param_1,fVar15,
                   (TVector<float> *)&local_b68._s_0,(TVector<float> *)&local_b38._s_0,
                   (TVector<float> *)&local_b48._s_0);
      }
      FVar14.Data = FVar14.Data + 4;
    }
    if (local_b58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b58.AllocatorInstance.Data);
    }
  }
  return;
}

