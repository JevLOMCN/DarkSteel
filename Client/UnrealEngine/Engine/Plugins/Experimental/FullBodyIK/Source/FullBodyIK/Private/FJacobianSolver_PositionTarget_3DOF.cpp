// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FullBodyIK
// Functions: 2

// FJacobianSolver_PositionTarget_3DOF @ 14df73be0

FJacobianSolver_PositionTarget_3DOF * __thiscall
FJacobianSolver_PositionTarget_3DOF::FJacobianSolver_PositionTarget_3DOF
          (FJacobianSolver_PositionTarget_3DOF *this)

{
  FJacobianSolverBase::FJacobianSolverBase((FJacobianSolverBase *)this);
  *(undefined ***)this = &___7FJacobianSolver_PositionTarget_3DOF__6B_;
  return this;
}

// InitializeSolver @ 14df80370

void __thiscall
FJacobianSolver_PositionTarget_3DOF::InitializeSolver
          (FJacobianSolver_PositionTarget_3DOF *this,
          TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *param_1,
          TMap<int,JacobianIK::FFBIKEffectorTarget,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>_>
          *param_2)

{
  undefined8 *puVar1;
  double *pdVar2;
  code *pcVar3;
  uint uVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_108;
  double dStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  double dStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  double dStack_c0;
  longlong *local_b8;
  undefined1 auStack_b0 [16];
  uint uStack_a0;
  uint uStack_9c;
  longlong local_98;
  TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
  *pTStack_90;
  TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
  *local_88;
  undefined2 local_80;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
  *pTStack_50;
  
  dVar5 = __real_3f1a36e2e0000000;
  uVar4 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar13 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  iVar8 = param_1->ArrayNum;
  uVar11 = 0;
  if (0 < iVar8) {
    lVar15 = 0;
    do {
      uVar12 = ~uVar11 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar11 < iVar8) {
        uVar7 = uVar12;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar14 = (param_1->AllocatorInstance).Data + lVar15 + 0xf8;
      iVar8 = *(int *)(pFVar14 + 0xc);
      *(undefined4 *)&pFVar14[8].field_0x0 = 0;
      if (iVar8 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,(ForAnyElementType *)pFVar14,0,(int *)(pFVar14 + 0xc));
      }
      uVar7 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar7 = uVar12;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_108 = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
      dStack_100 = 5.26354424712089e-315;
      local_118 = UE::Math::TVector<double>::ForwardVector.field0_0x0._0_4_;
      uStack_114 = UE::Math::TVector<double>::ForwardVector.field0_0x0._4_4_;
      uStack_110 = UE::Math::TVector<double>::ForwardVector.field0_0x0._8_4_;
      uStack_10c = UE::Math::TVector<double>::ForwardVector.field0_0x0._12_4_;
      if (((dVar5 < (double)CONCAT44(UE::Math::TVector<double>::ForwardVector.field0_0x0._4_4_ &
                                     uVar4,UE::Math::TVector<double>::ForwardVector.field0_0x0._0_4_
                                           & uVar13)) ||
          (dVar5 <= (double)CONCAT44(UE::Math::TVector<double>::ForwardVector.field0_0x0._12_4_ &
                                     uVar4,UE::Math::TVector<double>::ForwardVector.field0_0x0._8_4_
                                           & uVar13) &&
           (double)CONCAT44(UE::Math::TVector<double>::ForwardVector.field0_0x0._12_4_ & uVar4,
                            UE::Math::TVector<double>::ForwardVector.field0_0x0._8_4_ & uVar13) !=
           dVar5)) ||
         (dVar5 < (double)CONCAT44((uint)((ulonglong)
                                          UE::Math::TVector<double>::ForwardVector.field0_0x0._16_8_
                                         >> 0x20) & uVar4,
                                   SUB84(UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z,
                                         0) & uVar13))) {
        pFVar14 = (param_1->AllocatorInstance).Data + lVar15 + 0xf8;
        if (((*(undefined4 **)&pFVar14->field_0x0 <= &local_118) &&
            (&local_118 <
             *(undefined4 **)&pFVar14->field_0x0 + (longlong)*(int *)(pFVar14 + 0xc) * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar8 = *(int *)&pFVar14[8].field_0x0;
        if (iVar8 == *(int *)(pFVar14 + 0xc)) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,(ForAnyElementType *)pFVar14,(int *)(pFVar14 + 0xc));
        }
        *(int *)&pFVar14[8].field_0x0 = iVar8 + 1;
        lVar10 = *(longlong *)&pFVar14->field_0x0;
        puVar1 = (undefined8 *)(lVar10 + (longlong)iVar8 * 0x20);
        *puVar1 = CONCAT44(uStack_114,local_118);
        puVar1[1] = CONCAT44(uStack_10c,uStack_110);
        pdVar2 = (double *)(lVar10 + (longlong)iVar8 * 0x20 + 0x10);
        *pdVar2 = local_108;
        pdVar2[1] = dStack_100;
      }
      uVar7 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar7 = uVar12;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_e8 = UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z;
      dStack_e0 = 5.26354424712089e-315;
      local_f8 = UE::Math::TVector<double>::RightVector.field0_0x0._0_4_;
      uStack_f4 = UE::Math::TVector<double>::RightVector.field0_0x0._4_4_;
      uStack_f0 = UE::Math::TVector<double>::RightVector.field0_0x0._8_4_;
      uStack_ec = UE::Math::TVector<double>::RightVector.field0_0x0._12_4_;
      if (((dVar5 < (double)CONCAT44(UE::Math::TVector<double>::RightVector.field0_0x0._4_4_ & uVar4
                                     ,UE::Math::TVector<double>::RightVector.field0_0x0._0_4_ &
                                      uVar13)) ||
          (dVar5 <= (double)CONCAT44(UE::Math::TVector<double>::RightVector.field0_0x0._12_4_ &
                                     uVar4,UE::Math::TVector<double>::RightVector.field0_0x0._8_4_ &
                                           uVar13) &&
           (double)CONCAT44(UE::Math::TVector<double>::RightVector.field0_0x0._12_4_ & uVar4,
                            UE::Math::TVector<double>::RightVector.field0_0x0._8_4_ & uVar13) !=
           dVar5)) ||
         (dVar5 < (double)CONCAT44((uint)((ulonglong)
                                          UE::Math::TVector<double>::RightVector.field0_0x0._16_8_
                                         >> 0x20) & uVar4,
                                   SUB84(UE::Math::TVector<double>::RightVector.field0_0x0._s_0.Z,0)
                                   & uVar13))) {
        pFVar14 = (param_1->AllocatorInstance).Data + lVar15 + 0xf8;
        if (((*(undefined4 **)&pFVar14->field_0x0 <= &local_f8) &&
            (&local_f8 < *(undefined4 **)&pFVar14->field_0x0 + (longlong)*(int *)(pFVar14 + 0xc) * 8
            )) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar8 = *(int *)&pFVar14[8].field_0x0;
        if (iVar8 == *(int *)(pFVar14 + 0xc)) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,(ForAnyElementType *)pFVar14,(int *)(pFVar14 + 0xc));
        }
        *(int *)&pFVar14[8].field_0x0 = iVar8 + 1;
        lVar10 = *(longlong *)&pFVar14->field_0x0;
        puVar1 = (undefined8 *)(lVar10 + (longlong)iVar8 * 0x20);
        *puVar1 = CONCAT44(uStack_f4,local_f8);
        puVar1[1] = CONCAT44(uStack_ec,uStack_f0);
        pdVar2 = (double *)(lVar10 + (longlong)iVar8 * 0x20 + 0x10);
        *pdVar2 = local_e8;
        pdVar2[1] = dStack_e0;
      }
      uVar7 = 0;
      if ((int)uVar11 < param_1->ArrayNum) {
        uVar7 = uVar12;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_c8 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
      dStack_c0 = 5.26354424712089e-315;
      local_d8 = UE::Math::TVector<double>::UpVector.field0_0x0._0_4_;
      uStack_d4 = UE::Math::TVector<double>::UpVector.field0_0x0._4_4_;
      uStack_d0 = UE::Math::TVector<double>::UpVector.field0_0x0._8_4_;
      uStack_cc = UE::Math::TVector<double>::UpVector.field0_0x0._12_4_;
      if (((dVar5 < (double)CONCAT44(UE::Math::TVector<double>::UpVector.field0_0x0._4_4_ & uVar4,
                                     UE::Math::TVector<double>::UpVector.field0_0x0._0_4_ & uVar13))
          || (dVar5 <= (double)CONCAT44(UE::Math::TVector<double>::UpVector.field0_0x0._12_4_ &
                                        uVar4,UE::Math::TVector<double>::UpVector.field0_0x0._8_4_ &
                                              uVar13) &&
              (double)CONCAT44(UE::Math::TVector<double>::UpVector.field0_0x0._12_4_ & uVar4,
                               UE::Math::TVector<double>::UpVector.field0_0x0._8_4_ & uVar13) !=
              dVar5)) ||
         (dVar5 < (double)CONCAT44((uint)((ulonglong)
                                          UE::Math::TVector<double>::UpVector.field0_0x0._16_8_ >>
                                         0x20) & uVar4,
                                   SUB84(UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z,0) &
                                   uVar13))) {
        pFVar14 = (param_1->AllocatorInstance).Data + lVar15 + 0xf8;
        if (((*(undefined4 **)&pFVar14->field_0x0 <= &local_d8) &&
            (&local_d8 < *(undefined4 **)&pFVar14->field_0x0 + (longlong)*(int *)(pFVar14 + 0xc) * 8
            )) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar8 = *(int *)&pFVar14[8].field_0x0;
        if (iVar8 == *(int *)(pFVar14 + 0xc)) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,(ForAnyElementType *)pFVar14,(int *)(pFVar14 + 0xc));
        }
        *(int *)&pFVar14[8].field_0x0 = iVar8 + 1;
        lVar10 = *(longlong *)&pFVar14->field_0x0;
        puVar1 = (undefined8 *)(lVar10 + (longlong)iVar8 * 0x20);
        *puVar1 = CONCAT44(uStack_d4,local_d8);
        puVar1[1] = CONCAT44(uStack_cc,uStack_d0);
        pdVar2 = (double *)(lVar10 + (longlong)iVar8 * 0x20 + 0x10);
        *pdVar2 = local_c8;
        pdVar2[1] = dStack_c0;
      }
      iVar8 = param_1->ArrayNum;
      uVar11 = uVar11 + 1;
      lVar15 = lVar15 + 0x130;
    } while ((int)uVar11 < iVar8);
  }
  TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
              *)param_2);
  local_b8 = (longlong *)local_78._0_8_;
  auStack_b0._0_8_ = local_78._8_8_;
  local_80 = 0;
  stack0xffffffffffffff58 = local_78._16_16_;
  local_98 = local_58;
  pTStack_90 = pTStack_50;
  uVar9 = local_78._24_8_ >> 0x20;
  local_88 = (TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
              *)param_2;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      lVar10 = (longlong)(int)uVar9 * 0xa0;
      lVar15 = *local_b8;
      uStack_a0 = uStack_a0 & ~auStack_b0._4_4_;
      *(undefined1 *)(lVar10 + 0x10 + lVar15) = 1;
      *(undefined1 *)(lVar10 + 0x30 + lVar15) = 0;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b0);
      uVar9 = (ulonglong)uStack_9c;
    } while ((int)uStack_9c < *(int *)(auStack_b0._8_8_ + 0x18));
    if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
      uVar13 = *(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34;
      if (uVar13 < 4) {
        iVar8 = 1;
      }
      else {
        uVar9 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
        lVar15 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar8 = 1 << ((byte)lVar15 & 0x1f);
      }
      if (((0 < (int)uVar13) && (local_88->HashSize < iVar8)) || (iVar8 < local_88->HashSize)) {
        local_88->HashSize = iVar8;
        TSet<TTuple<int,JacobianIK::FFBIKEffectorTarget>,TDefaultMapHashableKeyFuncs<int,JacobianIK::FFBIKEffectorTarget,0>,FDefaultSetAllocator>
        ::Rehash(local_88);
      }
    }
  }
  return;
}

