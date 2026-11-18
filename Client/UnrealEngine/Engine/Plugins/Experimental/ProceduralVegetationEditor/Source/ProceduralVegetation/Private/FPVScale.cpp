// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 1

// ApplyScale @ 14da6df50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FPVScale::ApplyScale(float param_1,FManagedArrayCollection *param_2)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  longlong lVar10;
  code *pcVar11;
  longlong *plVar12;
  TManagedArray<UE::Math::TVector<float>_> *pTVar13;
  TManagedArray<float> *pTVar14;
  TManagedArray<float> *pTVar15;
  bool bVar16;
  int iVar17;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar18;
  ulonglong uVar19;
  TVector<float> *pTVar20;
  float *pfVar21;
  byte bVar22;
  longlong lVar23;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  ForAnyElementType FVar27;
  int iVar28;
  uint *puVar29;
  ulong uVar30;
  uint uVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_d28 [32];
  longlong local_d08;
  longlong local_d00;
  undefined1 local_cf8;
  undefined1 local_cf7;
  undefined1 local_cf6;
  undefined1 local_cf5 [5];
  int local_cf0;
  uint uStack_cec;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_ce8;
  uint local_ce0;
  uint uStack_cdc;
  uint uStack_cd8;
  undefined4 uStack_cd4;
  int local_cd0;
  uint local_ccc;
  TArray<int,TSizedDefaultAllocator<32>_> local_cc8;
  TVector<float> *local_cb8;
  FScriptContainerElement *local_cb0;
  longlong local_ca8;
  longlong *local_ca0;
  int iStack_c98;
  uint uStack_c94;
  TBitArray<FDefaultBitArrayAllocator> *local_c90;
  undefined4 uStack_c88;
  uint uStack_c84;
  int local_c80;
  uint uStack_c7c;
  int iStack_c78;
  undefined4 uStack_c74;
  int local_c70;
  int local_c6c;
  FScriptContainerElement *local_c68;
  undefined8 local_c60;
  longlong *local_c50;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c48;
  undefined8 uStack_c28;
  FFoliageEntryData local_c20;
  longlong *local_be8;
  undefined8 uStack_be0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  int local_bc0;
  undefined4 uStack_bbc;
  longlong *local_bb8;
  undefined8 uStack_bb0;
  TBitArray<FDefaultBitArrayAllocator> *local_ba8;
  undefined8 uStack_ba0;
  undefined8 local_b98;
  undefined8 uStack_b90;
  FPlantFacade local_b88;
  FBranchFacade local_a98;
  FPointFacade local_7a8;
  FFoliageFacade local_378;
  undefined1 local_f8 [32];
  uint *local_d8;
  uint local_d0;
  int local_c4;
  void *local_b8;
  undefined4 local_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_d28;
  PV::Facades::FBranchFacade::FBranchFacade(&local_a98,param_2);
  PV::Facades::FPointFacade::FPointFacade(&local_7a8,param_2);
  PV::Facades::FPlantFacade::FPlantFacade(&local_b88,param_2);
  PV::Facades::FFoliageFacade::FFoliageFacade(&local_378,param_2,0);
  bVar16 = PV::Facades::FPointFacade::IsValid(&local_7a8);
  pTVar24 = local_a98.BranchPoints.ConstAttributeArray;
  if ((((((bVar16) &&
         (local_a98.Parents.ConstAttributeArray !=
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
        (local_a98.Children.ConstAttributeArray !=
         (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0)) &&
       (((local_a98.BranchPoints.ConstAttributeArray !=
          (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0 &&
         (local_a98.BranchNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
        ((local_a98.BranchSourceBudNumber.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
         ((local_a98.BranchHierarchyNumber.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
          (local_a98.BranchParentNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0)))))))) &&
      (local_a98.PlantNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
     ((((local_b88.PlantNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0 &&
        (local_b88.BranchNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
       (local_b88.BranchParentNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0)) &&
      (local_b88.BranchHierarchyNumbers.ConstAttributeArray != (TManagedArray<int> *)0x0)))) {
    PV::Facades::FPlantFacade::GetPlantNumbersToTrunkIndicesMap
              (&local_b88,
               (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
               local_f8);
    uVar8 = local_d0;
    iStack_c98 = 0;
    local_c80 = 0;
    uStack_c94 = 1;
    uStack_c84 = 0;
    if (local_d0 != 0) {
      puVar29 = (uint *)(local_f8 + 0x10);
      if (local_d8 != (uint *)0x0) {
        puVar29 = local_d8;
      }
      uStack_c94 = *puVar29;
      while (uStack_c94 == 0) {
        lVar23 = (longlong)iStack_c98;
        local_c80 = local_c80 + 0x20;
        iStack_c98 = iStack_c98 + 1;
        uStack_c94 = 1;
        uStack_c84 = local_d0;
        if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_c98)
        goto LAB_14da6e171;
        uStack_c94 = puVar29[lVar23 + 1];
      }
      uStack_c94 = ~(uStack_c94 - 1) & uStack_c94;
      uVar19 = (ulonglong)uStack_c94 * 2 + 1;
      lVar23 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      local_c70 = (int)lVar23;
      uStack_c84 = local_c80 + -1 + local_c70;
      if ((int)local_d0 < (int)uStack_c84) {
        uStack_c84 = local_d0;
      }
    }
LAB_14da6e171:
    local_ca0 = (longlong *)local_f8;
    local_c90 = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
    iStack_c78 = local_f8._8_4_ - local_c4;
    bVar22 = (byte)local_d0 & 0x1f;
    uStack_cec = 1 << bVar22;
    uVar25 = local_d0 & 0xffffffe0;
    iVar28 = (int)local_d0 >> 5;
    pTStack_ce8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
    uVar31 = -1 << bVar22;
    uStack_c88 = 0xffffffff;
    uStack_cdc = local_d0;
    TStack_c48._padding_ = CONCAT44(uStack_c94,iStack_c98);
    TStack_c48.CurrentBitIndex = uStack_c84;
    TStack_c48.UnvisitedBitMask = 0xffffffff;
    TStack_c48._28_4_ = uStack_c84;
    TStack_c48.BaseBitIndex = local_c80;
    uStack_c28 = CONCAT44(uStack_c74,iStack_c78);
    local_cf0 = iVar28;
    local_ce0 = uVar31;
    uStack_cd8 = uVar25;
    uStack_c7c = uStack_c84;
    local_c50 = local_ca0;
    TStack_c48.Array = local_c90;
    if (((int)local_d0 < 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if (uVar8 != local_d0) {
      puVar29 = (uint *)(local_f8 + 0x10);
      if (local_d8 != (uint *)0x0) {
        puVar29 = local_d8;
      }
      uVar31 = uVar31 & puVar29[iVar28];
      while (uVar31 == 0) {
        uStack_cd8 = uVar25 + 0x20;
        local_cf0 = iVar28 + 1;
        uStack_cdc = local_d0;
        if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < local_cf0)
        goto LAB_14da6e2d8;
        uVar31 = puVar29[(longlong)iVar28 + 1];
        local_ce0 = 0xffffffff;
        uVar25 = uStack_cd8;
        iVar28 = local_cf0;
      }
      uStack_cec = ~(uVar31 - 1) & uVar31;
      uVar19 = (ulonglong)uStack_cec * 2 + 1;
      lVar23 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      local_c6c = (int)lVar23;
      uStack_cdc = local_c6c + -1 + uVar25;
      if ((int)local_d0 < (int)uStack_cdc) {
        uStack_cdc = local_d0;
      }
    }
LAB_14da6e2d8:
    uStack_be0 = CONCAT44(uStack_cec,local_cf0);
    local_be8 = (longlong *)local_f8;
    uStack_bd0 = CONCAT44(uStack_cdc,local_ce0);
    uStack_bc8 = CONCAT44(uStack_cd4,uStack_cd8);
    local_bc0 = local_f8._8_4_ - local_c4;
    pTStack_bd8 = pTStack_ce8;
    uStack_b90 = CONCAT44(uStack_bbc,local_bc0);
    local_ba8 = pTStack_ce8;
    uVar30 = _tls_index;
    local_bb8 = local_be8;
    uStack_bb0 = uStack_be0;
    uStack_ba0 = uStack_bd0;
    local_b98 = uStack_bc8;
    while( true ) {
      plVar12 = local_c50;
      if ((int)local_c50[1] - *(int *)((longlong)local_c50 + 0x34) != (int)uStack_c28) {
        local_cf8 = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_cf8);
      }
      if (((TStack_c48.CurrentBitIndex == uStack_ba0._4_4_) && (TStack_c48.Array == local_ba8)) &&
         (plVar12 == local_bb8)) break;
      lVar23 = *(longlong *)(*plVar12 + (longlong)TStack_c48.CurrentBitIndex * 0x10);
      PV::Facades::FPlantFacade::GetBranchIndices(&local_b88,&local_cc8,(int)lVar23);
      iVar28 = (int)((ulonglong)lVar23 >> 0x20);
      if (iVar28 == -1) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("TrunkIndex != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Implementations\\PVScale.cpp"
                            ,0x1e,L"");
        if (bVar16) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
LAB_14da6e3df:
        if (local_cc8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_cc8.AllocatorInstance.Data);
        }
      }
      else {
        if (((pTVar24 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) ||
            (lVar23 < 0)) ||
           (iVar17 = (**(code **)(*(longlong *)pTVar24 + 0x60))(pTVar24), iVar17 <= iVar28)) {
          if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)uVar30 * 8) +
                       0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            atexit(`PV::Facades::FBranchFacade::GetPoints'::__l2::
                   _dynamic_atexit_destructor_for__EmptyPoints__);
            _Init_thread_footer(&::_TSS0);
          }
          pTVar18 = &EmptyPoints;
        }
        else {
          pTVar18 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                              (&local_a98.BranchPoints,iVar28);
        }
        if ((pTVar18->ArrayNum < 1) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("TrunkPoints.Num() > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ProceduralVegetationEditor\\Source\\ProceduralVegetation\\Private\\Implementations\\PVScale.cpp"
                                ,0x25,L""), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar28 = pTVar18->ArrayNum;
        if (iVar28 == 0) goto LAB_14da6e3df;
        if (iVar28 < 1) {
          local_d08 = 0;
          local_d00 = (longlong)iVar28;
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        local_cb8 = PV::Facades::FPointFacade::GetPosition
                              (&local_7a8,*(int *)(pTVar18->AllocatorInstance).Data);
        local_ccc = local_cc8.ArrayNum;
        uVar19 = (ulonglong)(int)local_ccc;
        local_ca8 = 0x9d4c;
        local_c68 = local_cc8.AllocatorInstance.Data + uVar19 * 4;
        FVar27.Data = local_cc8.AllocatorInstance.Data;
        while( true ) {
          pFVar1 = local_c68;
          lVar23 = local_ca8;
          local_cb0 = FVar27.Data;
          if (local_cc8.ArrayNum != (int)uVar19) {
            local_cf7 = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_cf7);
          }
          if (FVar27.Data == pFVar1) break;
          iVar28 = *(int *)FVar27.Data;
          local_cd0 = iVar28;
          if (((pTVar24 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) ||
              (iVar28 < 0)) ||
             (iVar17 = (**(code **)(*(longlong *)pTVar24 + 0x60))(pTVar24), iVar17 <= iVar28)) {
            if ((*(int *)(lVar23 + *(longlong *)
                                    ((longlong)ThreadLocalStoragePointer + (ulonglong)uVar30 * 8)) <
                 ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              atexit(`PV::Facades::FBranchFacade::GetPoints'::__l2::
                     _dynamic_atexit_destructor_for__EmptyPoints__);
              _Init_thread_footer(&::_TSS0);
            }
            pTVar18 = &EmptyPoints;
          }
          else {
            pTVar18 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                                (&local_a98.BranchPoints,iVar28);
          }
          pFVar26 = (pTVar18->AllocatorInstance).Data;
          iVar28 = pTVar18->ArrayNum;
          pFVar1 = pFVar26 + (longlong)iVar28 * 4;
          while( true ) {
            if (pTVar18->ArrayNum != iVar28) {
              local_cf6 = 0;
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_cf6);
            }
            iVar17 = local_cd0;
            if (pFVar26 == pFVar1) break;
            uVar8 = *(uint *)pFVar26;
            if (((local_7a8.Positions.ConstAttributeArray ==
                  (TManagedArray<UE::Math::TVector<float>_> *)0x0) || ((int)uVar8 < 0)) ||
               (iVar17 = (**(code **)(*(longlong *)local_7a8.Positions.ConstAttributeArray + 0x60))
                                   (), iVar17 <= (int)uVar8)) {
              if ((*(int *)(lVar23 + *(longlong *)
                                      ((longlong)ThreadLocalStoragePointer + (ulonglong)uVar30 * 8))
                   < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                DefaultPosition.field0_0x0._0_8_ =
                     UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
                DefaultPosition.field0_0x0._s_0.Z =
                     UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
                _Init_thread_footer(&::_TSS0);
              }
              pTVar20 = &DefaultPosition;
            }
            else {
              pTVar20 = TManagedArrayAccessor<UE::Math::TVector<float>_>::operator[]
                                  (&local_7a8.Positions,uVar8);
            }
            local_c60 = *(undefined8 *)&pTVar20->field0_0x0;
            fVar9 = (pTVar20->field0_0x0)._s_0.Z;
            uVar8 = *(uint *)pFVar26;
            if (((local_7a8.LengthFromSeed.ConstAttributeArray == (TManagedArray<float> *)0x0) ||
                ((int)uVar8 < 0)) ||
               (iVar17 = (**(code **)(*(longlong *)local_7a8.LengthFromSeed.ConstAttributeArray +
                                     0x60))(), iVar17 <= (int)uVar8)) {
              pfVar21 = &DefaultLengthFromSeed;
            }
            else {
              pfVar21 = TManagedArrayAccessor<float>::operator[](&local_7a8.LengthFromSeed,uVar8);
            }
            fVar2 = *pfVar21;
            uVar8 = *(uint *)pFVar26;
            if (((local_7a8.LengthFromRoot.ConstAttributeArray == (TManagedArray<float> *)0x0) ||
                ((int)uVar8 < 0)) ||
               (iVar17 = (**(code **)(*(longlong *)local_7a8.LengthFromRoot.ConstAttributeArray +
                                     0x60))(), iVar17 <= (int)uVar8)) {
              pfVar21 = &DefaultLengthFromRoot;
            }
            else {
              pfVar21 = TManagedArrayAccessor<float>::operator[](&local_7a8.LengthFromRoot,uVar8);
            }
            pTVar13 = local_7a8.Positions.AttributeArray;
            fVar3 = *pfVar21;
            fVar32 = (float)local_c60 - (local_cb8->field0_0x0)._s_0.X;
            fVar33 = local_c60._4_4_ - (local_cb8->field0_0x0)._s_0.Y;
            fVar4 = (local_cb8->field0_0x0)._s_0.Z;
            fVar5 = (local_cb8->field0_0x0)._s_0.X;
            fVar6 = (local_cb8->field0_0x0)._s_0.Y;
            fVar7 = (local_cb8->field0_0x0)._s_0.Z;
            if (((local_7a8.Positions.AttributeArray ==
                  (TManagedArray<UE::Math::TVector<float>_> *)0x0) ||
                (local_7a8.Positions.Collection == (FManagedArrayCollection *)0x0)) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("AttributeArray!=nullptr && !IsConst()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                    ,0x74,L""), bVar16)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pTVar13->field_0x8 = 1;
            uVar8 = *(uint *)pFVar26;
            lVar23 = (longlong)(int)uVar8;
            uVar31 = 0;
            if ((int)uVar8 < *(int *)&pTVar13->field_0x18) {
              uVar31 = ~uVar8 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (local_d08 = lVar23, local_d00 = (longlong)*(int *)&pTVar13->field_0x18,
               bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pTVar15 = local_7a8.LengthFromSeed.AttributeArray;
            lVar10 = *(longlong *)&pTVar13->field_0x10;
            *(float *)(lVar10 + lVar23 * 0xc) = fVar32 * param_1 + fVar5;
            *(float *)(lVar10 + 4 + lVar23 * 0xc) = fVar33 * param_1 + fVar6;
            *(float *)(lVar10 + 8 + lVar23 * 0xc) = (fVar9 - fVar4) * param_1 + fVar7;
            if (((local_7a8.LengthFromSeed.AttributeArray == (TManagedArray<float> *)0x0) ||
                (local_7a8.LengthFromSeed.Collection == (FManagedArrayCollection *)0x0)) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("AttributeArray!=nullptr && !IsConst()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                    ,0x74,L""), bVar16)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pTVar15->field_0x8 = 1;
            uVar8 = *(uint *)pFVar26;
            uVar31 = 0;
            if ((int)uVar8 < *(int *)&pTVar15->field_0x18) {
              uVar31 = ~uVar8 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (local_d08 = (longlong)(int)uVar8, local_d00 = (longlong)*(int *)&pTVar15->field_0x18
               , bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pTVar14 = local_7a8.LengthFromRoot.AttributeArray;
            *(float *)(*(longlong *)&pTVar15->field_0x10 + (longlong)(int)uVar8 * 4) =
                 fVar2 * param_1;
            if (((local_7a8.LengthFromRoot.AttributeArray == (TManagedArray<float> *)0x0) ||
                (local_7a8.LengthFromRoot.Collection == (FManagedArrayCollection *)0x0)) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("AttributeArray!=nullptr && !IsConst()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                    ,0x74,L""), bVar16)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pTVar14->field_0x8 = 1;
            uVar8 = *(uint *)pFVar26;
            uVar31 = 0;
            if ((int)uVar8 < *(int *)&pTVar14->field_0x18) {
              uVar31 = ~uVar8 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (local_d08 = (longlong)(int)uVar8, local_d00 = (longlong)*(int *)&pTVar14->field_0x18
               , bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pTVar15 = local_7a8.PointScale.AttributeArray;
            *(float *)(*(longlong *)&pTVar14->field_0x10 + (longlong)(int)uVar8 * 4) =
                 param_1 * fVar3;
            if (((local_7a8.PointScale.AttributeArray == (TManagedArray<float> *)0x0) ||
                (local_7a8.PointScale.Collection == (FManagedArrayCollection *)0x0)) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("AttributeArray!=nullptr && !IsConst()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArrayAccessor.h"
                                    ,0x74,L""), bVar16)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pTVar15->field_0x8 = 1;
            uVar8 = *(uint *)pFVar26;
            lVar23 = (longlong)(int)uVar8;
            uVar31 = 0;
            if ((int)uVar8 < *(int *)&pTVar15->field_0x18) {
              uVar31 = ~uVar8 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (local_d08 = lVar23, local_d00 = (longlong)*(int *)&pTVar15->field_0x18,
               bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            uVar30 = _tls_index;
            pFVar26 = pFVar26 + 4;
            *(float *)(*(longlong *)&pTVar15->field_0x10 + lVar23 * 4) =
                 param_1 * *(float *)(*(longlong *)&pTVar15->field_0x10 + lVar23 * 4);
            lVar23 = local_ca8;
          }
          if (((local_378.FoliageIdsAttribute.ConstAttributeArray ==
                (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) || (local_cd0 < 0))
             || (iVar28 = (**(code **)(*(longlong *)
                                        local_378.FoliageIdsAttribute.ConstAttributeArray + 0x60))()
                , iVar28 <= iVar17)) {
            if ((*(int *)(lVar23 + *(longlong *)
                                    ((longlong)ThreadLocalStoragePointer + (ulonglong)uVar30 * 8)) <
                 ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              atexit(`PV::Facades::FFoliageFacade::GetFoliageEntryIdsForBranch'::__l2::
                     _dynamic_atexit_destructor_for__EmptyArray__);
              _Init_thread_footer(&::_TSS0);
            }
            pTVar18 = &::EmptyArray;
          }
          else {
            pTVar18 = TManagedArrayAccessor<TArray<int,TSizedDefaultAllocator<32>_>_>::operator[]
                                (&local_378.FoliageIdsAttribute,iVar17);
          }
          pTVar20 = local_cb8;
          pFVar26 = (pTVar18->AllocatorInstance).Data;
          iVar28 = pTVar18->ArrayNum;
          pFVar1 = pFVar26 + (longlong)iVar28 * 4;
          while( true ) {
            if (pTVar18->ArrayNum != iVar28) {
              local_cf5[0] = 0;
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_cf5);
            }
            if (pFVar26 == pFVar1) break;
            iVar17 = *(int *)pFVar26;
            PV::Facades::FFoliageFacade::GetFoliageEntry(&local_378,&local_c20,iVar17);
            local_c20.PivotPoint.field0_0x0._s_0.X =
                 (local_c20.PivotPoint.field0_0x0._s_0.X - (pTVar20->field0_0x0)._s_0.X) * param_1 +
                 (pTVar20->field0_0x0)._s_0.X;
            local_c20.PivotPoint.field0_0x0._s_0.Y =
                 (local_c20.PivotPoint.field0_0x0._s_0.Y - (pTVar20->field0_0x0)._s_0.Y) * param_1 +
                 (pTVar20->field0_0x0)._s_0.Y;
            local_c20.LengthFromRoot = local_c20.LengthFromRoot * param_1;
            local_c20.PivotPoint.field0_0x0._s_0.Z =
                 (local_c20.PivotPoint.field0_0x0._s_0.Z - (pTVar20->field0_0x0)._s_0.Z) * param_1 +
                 (pTVar20->field0_0x0)._s_0.Z;
            local_c20.Scale = local_c20.Scale * param_1;
            PV::Facades::FFoliageFacade::SetFoliageEntry(&local_378,iVar17,&local_c20);
            pFVar26 = pFVar26 + 4;
          }
          FVar27.Data = local_cb0 + 4;
          uVar19 = (ulonglong)local_ccc;
          pTVar24 = local_a98.BranchPoints.ConstAttributeArray;
        }
        if (local_cc8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_cc8.AllocatorInstance.Data);
        }
      }
      TStack_c48.UnvisitedBitMask = TStack_c48.UnvisitedBitMask & ~TStack_c48._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c48);
    }
    local_b0 = 0;
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_f8);
  }
  return;
}

