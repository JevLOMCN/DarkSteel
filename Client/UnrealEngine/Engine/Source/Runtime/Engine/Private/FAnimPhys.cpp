// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 24

// ApplyImpulse @ 1474bd8d0

void __cdecl
FAnimPhys::ApplyImpulse
          (FAnimPhysRigidBody *param_1,TVector<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  param_1->_padding_ = (longlong)((param_3->field0_0x0)._s_0.X + (double)param_1->_padding_);
  param_1->_padding_ = (longlong)((param_3->field0_0x0)._s_0.Y + (double)param_1->_padding_);
  param_1->_padding_ = (longlong)((param_3->field0_0x0)._s_0.Z + (double)param_1->_padding_);
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar3 = (param_3->field0_0x0)._s_0.X;
  dVar4 = (param_2->field0_0x0)._s_0.Z;
  dVar5 = (param_2->field0_0x0)._s_0.Y;
  dVar6 = (param_3->field0_0x0)._s_0.Z;
  param_1->_padding_ = (longlong)((dVar5 * dVar6 - dVar4 * dVar1) + (double)param_1->_padding_);
  param_1->_padding_ = (longlong)((dVar2 * dVar1 - dVar3 * dVar5) + (double)param_1->_padding_);
  param_1->_padding_ = (longlong)((dVar3 * dVar4 - dVar2 * dVar6) + (double)param_1->_padding_);
  return;
}

// CalculateCenterOfMass @ 1474c2500

TVector<double> * __cdecl
FAnimPhys::CalculateCenterOfMass
          (TVector<double> *__return_storage_ptr__,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  TVector<double> *pTVar12;
  FScriptContainerElement *pFVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  undefined1 local_f8 [16];
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  fVar16 = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  iVar3 = param_2->ArrayNum;
  pFVar13 = (param_2->AllocatorInstance).Data;
  pFVar1 = pFVar13 + (longlong)iVar3 * 0xc;
  while( true ) {
    if (param_2->ArrayNum != iVar3) {
      local_f8[0] = 0;
      `TCheckedPointerIterator<UE::Math::TIntVector3<int>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_f8);
    }
    if (pFVar13 == pFVar1) break;
    uVar11 = *(uint *)pFVar13;
    uVar10 = 0;
    if ((int)uVar11 < param_1->ArrayNum) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TVector<double> *)(*pcVar5)();
        return pTVar12;
      }
    }
    pFVar4 = (param_1->AllocatorInstance).Data;
    uVar10 = *(uint *)(pFVar13 + 4);
    pFVar2 = pFVar4 + (longlong)(int)uVar11 * 0x18;
    local_e8 = *(double *)pFVar2;
    dStack_e0 = *(double *)(pFVar2 + 8);
    local_d8 = *(double *)(pFVar4 + (longlong)(int)uVar11 * 0x18 + 0x10);
    uVar11 = 0;
    if ((int)uVar10 < param_1->ArrayNum) {
      uVar11 = ~uVar10 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TVector<double> *)(*pcVar5)();
        return pTVar12;
      }
    }
    pFVar4 = (param_1->AllocatorInstance).Data;
    uVar11 = *(uint *)(pFVar13 + 8);
    pFVar2 = pFVar4 + (longlong)(int)uVar10 * 0x18;
    local_d0 = *(double *)pFVar2;
    dStack_c8 = *(double *)(pFVar2 + 8);
    local_c0 = *(double *)(pFVar4 + (longlong)(int)uVar10 * 0x18 + 0x10);
    uVar10 = 0;
    if ((int)uVar11 < param_1->ArrayNum) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TVector<double> *)(*pcVar5)();
        return pTVar12;
      }
    }
    pFVar4 = (param_1->AllocatorInstance).Data;
    pFVar13 = pFVar13 + 0xc;
    pFVar2 = pFVar4 + (longlong)(int)uVar11 * 0x18;
    local_b8 = *(double *)pFVar2;
    dStack_b0 = *(double *)(pFVar2 + 8);
    local_a8 = *(double *)(pFVar4 + (longlong)(int)uVar11 * 0x18 + 0x10);
    fVar15 = (float)(((local_a8 * dStack_c8 - dStack_b0 * local_c0) * local_e8 -
                     (local_a8 * dStack_e0 - dStack_b0 * local_d8) * local_d0) +
                    (local_c0 * dStack_e0 - dStack_c8 * local_d8) * local_b8);
    dVar7 = (double)fVar15;
    fVar16 = fVar16 + fVar15;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (local_d0 + local_e8 + local_b8) * dVar7 + (__return_storage_ptr__->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (dStack_c8 + dStack_e0 + dStack_b0) * dVar7 + (__return_storage_ptr__->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (local_c0 + local_d8 + local_a8) * dVar7 + (__return_storage_ptr__->field0_0x0)._s_0.Z;
  }
  dVar14 = __real_3ff0000000000000 / (double)(fVar16 * __real_40800000);
  dVar8 = (__return_storage_ptr__->field0_0x0)._s_0.Y * dVar14;
  dVar7 = (__return_storage_ptr__->field0_0x0)._s_0.Z;
  auVar6._8_4_ = SUB84(dVar8,0);
  auVar6._0_8_ = (__return_storage_ptr__->field0_0x0)._s_0.X * dVar14;
  auVar6._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar14 * dVar7;
  return __return_storage_ptr__;
}

// CalculateCenterOfMass @ 1474c2860

TVector<double> * __cdecl
FAnimPhys::CalculateCenterOfMass
          (TVector<double> *__return_storage_ptr__,
          TArray<FAnimPhysShape,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  double dVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  undefined1 local_res8 [8];
  TVector<double>_u_0 local_48 [2];
  
  pTVar5 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
           (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  pTVar4 = pTVar5 + (longlong)iVar1 * 4;
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  pTVar6 = pTVar5 + 1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  fVar10 = 0.0;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnimPhysShape_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pTVar5 == pTVar4) break;
    CalculateCenterOfMass
              ((TVector<double> *)&local_48[0]._s_0,pTVar5,
               (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)pTVar6);
    fVar7 = CalculateVolume(pTVar5,(TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *
                                   )pTVar6);
    fVar10 = fVar10 + fVar7;
    dVar8 = (double)fVar7;
    pTVar5 = pTVar5 + 4;
    pTVar6 = pTVar6 + 4;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         dVar8 * (double)local_48[0]._0_8_ + (__return_storage_ptr__->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         dVar8 * (double)local_48[0]._8_8_ + (__return_storage_ptr__->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         dVar8 * (double)local_48[0]._16_8_ + (__return_storage_ptr__->field0_0x0)._s_0.Z;
  }
  dVar9 = __real_3ff0000000000000 / (double)fVar10;
  dVar3 = (__return_storage_ptr__->field0_0x0)._s_0.Y * dVar9;
  dVar8 = (__return_storage_ptr__->field0_0x0)._s_0.Z;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = (__return_storage_ptr__->field0_0x0)._s_0.X * dVar9;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar9 * dVar8;
  return __return_storage_ptr__;
}

// CalculateInertia @ 1474c2f70

TMatrix<double> * __cdecl
FAnimPhys::CalculateInertia
          (TMatrix<double> *__return_storage_ptr__,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_2,
          TVector<double> *param_3)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  TMatrix<double> *pTVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  longlong lVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  undefined1 local_128 [4];
  uint local_124;
  longlong local_120;
  double local_118 [16];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_98;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *local_90;
  FScriptContainerElement *local_88;
  TMatrix<double> *local_80;
  
  pFVar14 = (param_2->AllocatorInstance).Data;
  local_98 = param_1;
  local_124 = param_2->ArrayNum;
  uVar9 = (ulonglong)(int)local_124;
  local_80 = __return_storage_ptr__;
  fVar22 = 0.0;
  local_118[2] = 0.0;
  local_118[5] = 0.0;
  local_88 = pFVar14 + uVar9 * 0xc;
  local_90 = param_2;
  local_118[0] = 0.0;
  local_118[1] = 0.0;
  local_118[3] = 0.0;
  local_118[4] = 0.0;
  while( true ) {
    pFVar1 = local_88;
    pTVar6 = local_98;
    lVar16 = 0;
    if (local_90->ArrayNum != (int)uVar9) {
      local_128[0] = 0;
      `TCheckedPointerIterator<UE::Math::TIntVector3<int>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_128);
    }
    dVar21 = __real_3ff0000000000000;
    if (pFVar14 == pFVar1) break;
    uVar11 = *(uint *)pFVar14;
    uVar12 = 0;
    uVar13 = uVar12;
    if ((int)uVar11 < pTVar6->ArrayNum) {
      uVar13 = ~uVar11 >> 0x1f;
    }
    if (uVar13 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TMatrix<double> *)(*pcVar5)();
        return pTVar8;
      }
    }
    pFVar4 = (pTVar6->AllocatorInstance).Data;
    uVar13 = *(uint *)(pFVar14 + 4);
    pFVar1 = pFVar4 + (longlong)(int)uVar11 * 0x18;
    local_118[6] = *(double *)pFVar1;
    local_118[7] = *(double *)(pFVar1 + 8);
    local_118[8] = *(double *)(pFVar4 + (longlong)(int)uVar11 * 0x18 + 0x10);
    uVar11 = uVar12;
    if ((int)uVar13 < pTVar6->ArrayNum) {
      uVar11 = ~uVar13 >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TMatrix<double> *)(*pcVar5)();
        return pTVar8;
      }
    }
    pFVar4 = (pTVar6->AllocatorInstance).Data;
    uVar11 = *(uint *)(pFVar14 + 8);
    pFVar1 = pFVar4 + (longlong)(int)uVar13 * 0x18;
    local_118[0xb] = *(double *)(pFVar4 + (longlong)(int)uVar13 * 0x18 + 0x10);
    local_118[9] = *(double *)pFVar1;
    local_118[10] = *(double *)(pFVar1 + 8);
    if ((int)uVar11 < pTVar6->ArrayNum) {
      uVar12 = ~uVar11 >> 0x1f;
    }
    if (uVar12 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TMatrix<double> *)(*pcVar5)();
        return pTVar8;
      }
    }
    pFVar4 = (pTVar6->AllocatorInstance).Data;
    iVar15 = 2;
    local_120 = 3;
    pFVar1 = pFVar4 + (longlong)(int)uVar11 * 0x18;
    local_118[0xc] = *(double *)pFVar1;
    local_118[0xd] = *(double *)(pFVar1 + 8);
    local_118[0xe] = *(double *)(pFVar4 + (longlong)(int)uVar11 * 0x18 + 0x10);
    fVar17 = (float)(((local_118[0xe] * local_118[10] - local_118[0xd] * local_118[0xb]) *
                      local_118[6] -
                     (local_118[0xe] * local_118[7] - local_118[0xd] * local_118[8]) * local_118[9])
                    + (local_118[0xb] * local_118[7] - local_118[10] * local_118[8]) *
                      local_118[0xc]);
    fVar22 = fVar22 + fVar17;
    dVar21 = (double)fVar17;
    do {
      dVar18 = *(double *)((longlong)local_118 + lVar16 + 0x30);
      iVar10 = iVar15 + -1;
      dVar19 = *(double *)((longlong)local_118 + lVar16 + 0x60);
      dVar20 = *(double *)((longlong)local_118 + lVar16 + 0x48);
      uVar11 = iVar10 + (iVar10 / 3 + (iVar10 >> 0x1f) +
                        (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) & 0xffffffffU) >>
                             0x1f)) * -3;
      *(double *)((longlong)local_118 + lVar16) =
           ((dVar18 + dVar19) * (dVar18 + dVar20) + dVar20 * dVar20 + dVar19 * dVar19) * dVar21 +
           *(double *)((longlong)local_118 + lVar16);
      uVar13 = iVar15 + (iVar15 / 3 + (iVar15 >> 0x1f) +
                        (int)(((longlong)iVar15 / 3 + ((longlong)iVar15 >> 0x3f) & 0xffffffffU) >>
                             0x1f)) * -3;
      if (2 < uVar13) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TMatrix<double> *)(*pcVar5)();
          return pTVar8;
        }
      }
      if (2 < uVar11) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TMatrix<double> *)(*pcVar5)();
          return pTVar8;
        }
      }
      if (2 < uVar13) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TMatrix<double> *)(*pcVar5)();
          return pTVar8;
        }
      }
      if (2 < uVar11) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TMatrix<double> *)(*pcVar5)();
          return pTVar8;
        }
      }
      if (2 < uVar13) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TMatrix<double> *)(*pcVar5)();
          return pTVar8;
        }
      }
      if (2 < uVar11) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TMatrix<double> *)(*pcVar5)();
          return pTVar8;
        }
      }
      if (2 < uVar13) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TMatrix<double> *)(*pcVar5)();
          return pTVar8;
        }
      }
      if (2 < uVar11) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TMatrix<double> *)(*pcVar5)();
          return pTVar8;
        }
      }
      if (2 < uVar13) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TMatrix<double> *)(*pcVar5)();
          return pTVar8;
        }
      }
      if (2 < uVar11) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TMatrix<double> *)(*pcVar5)();
          return pTVar8;
        }
      }
      if (2 < uVar13) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TMatrix<double> *)(*pcVar5)();
          return pTVar8;
        }
      }
      if (2 < uVar11) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TMatrix<double> *)(*pcVar5)();
          return pTVar8;
        }
      }
      if (2 < uVar13) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TMatrix<double> *)(*pcVar5)();
          return pTVar8;
        }
      }
      if (2 < uVar11) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TMatrix<double> *)(*pcVar5)();
          return pTVar8;
        }
      }
      if (2 < uVar13) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TMatrix<double> *)(*pcVar5)();
          return pTVar8;
        }
      }
      if (2 < uVar11) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TMatrix<double> *)(*pcVar5)();
          return pTVar8;
        }
      }
      if (2 < uVar13) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TMatrix<double> *)(*pcVar5)();
          return pTVar8;
        }
      }
      if (2 < uVar11) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar8 = (TMatrix<double> *)(*pcVar5)();
          return pTVar8;
        }
      }
      dVar18 = local_118[(longlong)(int)uVar11 + 0xc];
      iVar15 = iVar15 + 1;
      dVar19 = local_118[(longlong)(int)uVar11 + 6];
      dVar20 = local_118[(longlong)(int)uVar11 + 9];
      dVar2 = local_118[(longlong)(int)uVar13 + 6];
      dVar3 = local_118[(longlong)(int)uVar13 + 9];
      *(double *)((longlong)local_118 + lVar16 + 0x18) =
           ((dVar19 + dVar20 + dVar18 + dVar18) * local_118[(longlong)(int)uVar13 + 0xc] +
            (dVar19 + dVar18) * dVar3 +
           (dVar2 + dVar2) * dVar19 + (dVar3 + dVar3) * dVar20 + (dVar20 + dVar18) * dVar2) * dVar21
           + *(double *)((longlong)local_118 + lVar16 + 0x18);
      lVar16 = lVar16 + 8;
      local_120 = local_120 + -1;
    } while (local_120 != 0);
    pFVar14 = pFVar14 + 0xc;
    uVar9 = (ulonglong)local_124;
    local_120 = 0;
  }
  fVar17 = fVar22 * __real_41200000;
  fVar22 = fVar22 * __real_41a00000;
  local_80->M[3][3] = 1.0;
  local_80->M[0][3] = 0.0;
  local_80->M[1][3] = 0.0;
  local_80->M[2][3] = 0.0;
  local_80->M[3][0] = 0.0;
  local_80->M[3][1] = 0.0;
  dVar18 = dVar21 / (double)fVar17;
  local_80->M[3][2] = 0.0;
  dVar21 = dVar21 / (double)fVar22;
  uVar11 = (uint)__xmm_80000000000000008000000000000000;
  uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar20 = (double)CONCAT44((uint)((ulonglong)(dVar21 * local_118[4]) >> 0x20) ^ uVar13,
                            SUB84(dVar21 * local_118[4],0) ^ uVar11);
  dVar19 = (double)CONCAT44((uint)((ulonglong)(dVar21 * local_118[3]) >> 0x20) ^ uVar13,
                            SUB84(dVar21 * local_118[3],0) ^ uVar11);
  local_80->M[0][2] = dVar20;
  local_80->M[1][2] = dVar19;
  dVar21 = (double)CONCAT44((uint)((ulonglong)(local_118[5] * dVar21) >> 0x20) ^ uVar13,
                            SUB84(local_118[5] * dVar21,0) ^ uVar11);
  local_80->M[2][0] = dVar20;
  local_80->M[0][1] = dVar21;
  local_80->M[1][0] = dVar21;
  local_80->M[2][1] = dVar19;
  local_80->M[0][0] = local_118[2] * dVar18 + dVar18 * local_118[1];
  local_80->M[2][2] = dVar18 * local_118[1] + dVar18 * local_118[0];
  local_80->M[1][1] = local_118[2] * dVar18 + dVar18 * local_118[0];
  return local_80;
}

// CalculateInertia @ 1474c3700

TMatrix<double> * __cdecl
FAnimPhys::CalculateInertia
          (TMatrix<double> *__return_storage_ptr__,
          TArray<FAnimPhysShape,TSizedDefaultAllocator<32>_> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  int iVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  TMatrix<double> *pTVar38;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar39;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar40;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar41;
  float fVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 local_168 [4];
  float local_164;
  float local_160;
  double local_158;
  TMatrix<double> local_148 [2];
  
  __return_storage_ptr__->M[0][0] = 0.0;
  __return_storage_ptr__->M[0][1] = 0.0;
  __return_storage_ptr__->M[0][2] = 0.0;
  __return_storage_ptr__->M[0][3] = 0.0;
  local_164 = 0.0;
  __return_storage_ptr__->M[1][0] = 0.0;
  __return_storage_ptr__->M[1][1] = 0.0;
  __return_storage_ptr__->M[1][2] = 0.0;
  __return_storage_ptr__->M[1][3] = 0.0;
  __return_storage_ptr__->M[2][0] = 0.0;
  __return_storage_ptr__->M[2][1] = 0.0;
  __return_storage_ptr__->M[2][2] = 0.0;
  __return_storage_ptr__->M[2][3] = 0.0;
  __return_storage_ptr__->M[3][0] = 0.0;
  __return_storage_ptr__->M[3][1] = 0.0;
  __return_storage_ptr__->M[3][2] = 0.0;
  __return_storage_ptr__->M[3][3] = 0.0;
  pTVar39 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
            (param_1->AllocatorInstance).Data;
  iVar15 = param_1->ArrayNum;
  pTVar41 = pTVar39 + 1;
  pTVar40 = pTVar39 + (longlong)iVar15 * 4;
  while( true ) {
    if (param_1->ArrayNum != iVar15) {
      `TCheckedPointerIterator<FAnimPhysShape_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_168);
    }
    if (pTVar39 == pTVar40) break;
    fVar42 = CalculateVolume(pTVar39,(TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>
                                      *)pTVar41);
    local_160 = fVar42;
    pTVar38 = CalculateInertia(local_148,pTVar39,
                               (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)
                               pTVar41,param_2);
    pTVar39 = pTVar39 + 4;
    dVar16 = (double)fVar42;
    pTVar41 = pTVar41 + 4;
    dVar1 = pTVar38->M[0][2];
    dVar2 = pTVar38->M[1][0];
    dVar3 = __return_storage_ptr__->M[0][2];
    dVar4 = pTVar38->M[1][2];
    dVar5 = pTVar38->M[2][0];
    dVar6 = pTVar38->M[3][0];
    dVar7 = pTVar38->M[2][2];
    dVar8 = pTVar38->M[3][2];
    dVar43 = dVar16 * pTVar38->M[3][1] + __return_storage_ptr__->M[3][1];
    dVar36 = dVar16 * pTVar38->M[0][1] + __return_storage_ptr__->M[0][1];
    dVar35 = dVar16 * pTVar38->M[0][3] + __return_storage_ptr__->M[0][3];
    local_158 = dVar16 * pTVar38->M[3][3] + __return_storage_ptr__->M[3][3];
    dVar9 = __return_storage_ptr__->M[1][0];
    dVar33 = dVar16 * pTVar38->M[1][1] + __return_storage_ptr__->M[1][1];
    dVar10 = __return_storage_ptr__->M[1][2];
    dVar30 = dVar16 * pTVar38->M[1][3] + __return_storage_ptr__->M[1][3];
    dVar11 = __return_storage_ptr__->M[2][0];
    dVar27 = dVar16 * pTVar38->M[2][1] + __return_storage_ptr__->M[2][1];
    dVar12 = __return_storage_ptr__->M[3][0];
    dVar13 = __return_storage_ptr__->M[2][2];
    dVar24 = dVar16 * pTVar38->M[2][3] + __return_storage_ptr__->M[2][3];
    dVar14 = __return_storage_ptr__->M[3][2];
    auVar37._8_4_ = SUB84(dVar36,0);
    auVar37._0_8_ = dVar16 * pTVar38->M[0][0] + __return_storage_ptr__->M[0][0];
    auVar37._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
    *(undefined1 (*) [16])__return_storage_ptr__->M[0] = auVar37;
    auVar17._8_4_ = SUB84(dVar35,0);
    auVar17._0_8_ = dVar16 * dVar1 + dVar3;
    auVar17._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->M[0] + 2) = auVar17;
    local_164 = local_164 + local_160;
    auVar34._8_4_ = SUB84(dVar33,0);
    auVar34._0_8_ = dVar16 * dVar2 + dVar9;
    auVar34._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
    *(undefined1 (*) [16])__return_storage_ptr__->M[1] = auVar34;
    auVar31._8_4_ = SUB84(dVar30,0);
    auVar31._0_8_ = dVar16 * dVar4 + dVar10;
    auVar31._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->M[1] + 2) = auVar31;
    auVar28._8_4_ = SUB84(dVar27,0);
    auVar28._0_8_ = dVar16 * dVar5 + dVar11;
    auVar28._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
    *(undefined1 (*) [16])__return_storage_ptr__->M[2] = auVar28;
    auVar25._8_4_ = SUB84(dVar24,0);
    auVar25._0_8_ = dVar16 * dVar7 + dVar13;
    auVar25._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->M[2] + 2) = auVar25;
    auVar21._8_4_ = SUB84(dVar43,0);
    auVar21._0_8_ = dVar16 * dVar6 + dVar12;
    auVar21._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
    *(undefined1 (*) [16])__return_storage_ptr__->M[3] = auVar21;
    auVar19._8_4_ = SUB84(local_158,0);
    auVar19._0_8_ = dVar16 * dVar8 + dVar14;
    auVar19._12_4_ = (int)((ulonglong)local_158 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->M[3] + 2) = auVar19;
  }
  dVar9 = __return_storage_ptr__->M[1][0];
  dVar10 = __return_storage_ptr__->M[1][2];
  dVar11 = __return_storage_ptr__->M[2][0];
  dVar4 = __return_storage_ptr__->M[2][1];
  dVar1 = (double)(__real_3f800000 / local_164);
  dVar12 = __return_storage_ptr__->M[0][2];
  dVar8 = dVar1 * __return_storage_ptr__->M[0][1];
  dVar13 = __return_storage_ptr__->M[3][2];
  dVar2 = __return_storage_ptr__->M[3][3];
  dVar6 = __return_storage_ptr__->M[1][1] * dVar1;
  auVar44._8_4_ = SUB84(dVar1,0);
  auVar44._0_8_ = dVar1;
  auVar44._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  dVar7 = dVar1 * __return_storage_ptr__->M[0][3];
  dVar14 = __return_storage_ptr__->M[2][2];
  dVar16 = __return_storage_ptr__->M[2][3];
  dVar5 = __return_storage_ptr__->M[1][3] * dVar1;
  dVar24 = __return_storage_ptr__->M[3][0];
  dVar3 = __return_storage_ptr__->M[3][1];
  auVar32._8_4_ = SUB84(dVar8,0);
  auVar32._0_8_ = dVar1 * __return_storage_ptr__->M[0][0];
  auVar32._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__->M[0] = auVar32;
  auVar29._8_4_ = SUB84(dVar7,0);
  auVar29._0_8_ = dVar1 * dVar12;
  auVar29._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->M[0] + 2) = auVar29;
  auVar26._8_4_ = SUB84(dVar6,0);
  auVar26._0_8_ = dVar9 * dVar1;
  auVar26._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__->M[1] = auVar26;
  auVar23._8_4_ = SUB84(dVar5,0);
  auVar23._0_8_ = dVar10 * dVar1;
  auVar23._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->M[1] + 2) = auVar23;
  dVar4 = dVar4 * dVar1;
  dVar2 = dVar2 * dVar1;
  auVar22._8_4_ = SUB84(dVar4,0);
  auVar22._0_8_ = dVar11 * dVar1;
  auVar22._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__->M[2] = auVar22;
  __return_storage_ptr__->M[2][2] = dVar1 * dVar14;
  __return_storage_ptr__->M[2][3] = auVar44._8_8_ * dVar16;
  dVar3 = dVar1 * dVar3;
  auVar20._8_4_ = SUB84(dVar3,0);
  auVar20._0_8_ = dVar1 * dVar24;
  auVar20._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__->M[3] = auVar20;
  auVar18._8_4_ = SUB84(dVar2,0);
  auVar18._0_8_ = dVar13 * dVar1;
  auVar18._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->M[3] + 2) = auVar18;
  __return_storage_ptr__->M[3][3] = 1.0;
  return __return_storage_ptr__;
}

// CalculateNextPose @ 1474c3aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FAnimPhys::CalculateNextPose(float param_1,FAnimPhysRigidBody *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TQuat<double> *pTVar7;
  double dVar8;
  undefined1 auStackY_f8 [32];
  TQuat<double> local_c8;
  undefined1 local_a8 [32];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  dVar4 = (double)param_2->_padding_;
  dVar5 = (double)param_2->_padding_;
  dVar6 = (double)param_2->_padding_;
  dVar3 = (double)param_2->_padding_;
  dVar1 = (double)param_1;
  dVar8 = (double)param_2->InverseMass;
  (param_2->NextPosition).field0_0x0._s_0.X =
       dVar8 * (double)param_2->_padding_ * dVar1 + (double)param_2->_padding_;
  dVar3 = dVar5 * dVar8 * dVar1 + dVar3;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = dVar4 * dVar8 * dVar1 + dVar6;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(param_2->NextPosition).field0_0x0 + 8) = auVar2;
  local_a8._0_8_ = dVar8 * (param_2->InverseTensorWithoutMass).M[0][0];
  local_a8._8_8_ = dVar8 * (param_2->InverseTensorWithoutMass).M[0][1];
  dVar3 = (param_2->InverseTensorWithoutMass).M[1][1] * dVar8;
  dVar1 = (param_2->InverseTensorWithoutMass).M[0][3] * dVar8;
  local_88._8_4_ = SUB84(dVar3,0);
  local_88._0_8_ = (param_2->InverseTensorWithoutMass).M[1][0] * dVar8;
  local_88._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_a8._24_4_ = SUB84(dVar1,0);
  local_a8._16_8_ = (param_2->InverseTensorWithoutMass).M[0][2] * dVar8;
  local_a8._28_4_ = (int)((ulonglong)dVar1 >> 0x20);
  dVar1 = (param_2->InverseTensorWithoutMass).M[1][3] * dVar8;
  dVar3 = (param_2->InverseTensorWithoutMass).M[2][1] * dVar8;
  local_78._8_4_ = SUB84(dVar1,0);
  local_78._0_8_ = (param_2->InverseTensorWithoutMass).M[1][2] * dVar8;
  local_78._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_68._8_4_ = SUB84(dVar3,0);
  local_68._0_8_ = (param_2->InverseTensorWithoutMass).M[2][0] * dVar8;
  local_68._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  dVar1 = (param_2->InverseTensorWithoutMass).M[2][3] * dVar8;
  dVar3 = (param_2->InverseTensorWithoutMass).M[3][1] * dVar8;
  local_58._8_4_ = SUB84(dVar1,0);
  local_58._0_8_ = (param_2->InverseTensorWithoutMass).M[2][2] * dVar8;
  local_58._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_48._8_4_ = SUB84(dVar3,0);
  local_48._0_8_ = (param_2->InverseTensorWithoutMass).M[3][0] * dVar8;
  local_48._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  dVar1 = (param_2->InverseTensorWithoutMass).M[3][3] * dVar8;
  local_38._8_4_ = SUB84(dVar1,0);
  local_38._0_8_ = (param_2->InverseTensorWithoutMass).M[3][2] * dVar8;
  local_38._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  pTVar7 = UpdateOrientRK(&local_c8,(TQuat<double> *)&param_2->_padding_,(TMatrix<double> *)local_a8
                          ,(TVector<double> *)&param_2->_padding_,param_1);
  dVar1 = pTVar7->Y;
  (param_2->NextOrientation).X = pTVar7->X;
  (param_2->NextOrientation).Y = dVar1;
  dVar1 = pTVar7->W;
  (param_2->NextOrientation).Z = pTVar7->Z;
  (param_2->NextOrientation).W = dVar1;
  return;
}

// CalculateVolume @ 1474c3e60

float __cdecl
FAnimPhys::CalculateVolume
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  float fVar13;
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  
  pFVar12 = (param_2->AllocatorInstance).Data;
  local_res18 = param_2->ArrayNum;
  uVar8 = (ulonglong)(int)local_res18;
  fVar13 = 0.0;
  local_res20 = pFVar12 + uVar8 * 0xc;
  while( true ) {
    pFVar2 = local_res20;
    if (param_2->ArrayNum != (int)uVar8) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::Math::TIntVector3<int>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar12 == pFVar2) break;
    uVar1 = *(uint *)(pFVar12 + 8);
    lVar9 = (longlong)(int)uVar1;
    uVar7 = 0;
    if ((int)uVar1 < param_1->ArrayNum) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        fVar13 = (float)(*pcVar5)();
        return fVar13;
      }
    }
    uVar1 = *(uint *)(pFVar12 + 4);
    lVar10 = (longlong)(int)uVar1;
    pFVar2 = (param_1->AllocatorInstance).Data;
    uVar7 = 0;
    if ((int)uVar1 < param_1->ArrayNum) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        fVar13 = (float)(*pcVar5)();
        return fVar13;
      }
    }
    uVar1 = *(uint *)pFVar12;
    lVar11 = (longlong)(int)uVar1;
    pFVar3 = (param_1->AllocatorInstance).Data;
    uVar7 = 0;
    if ((int)uVar1 < param_1->ArrayNum) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        fVar13 = (float)(*pcVar5)();
        return fVar13;
      }
    }
    pFVar4 = (param_1->AllocatorInstance).Data;
    pFVar12 = pFVar12 + 0xc;
    uVar8 = (ulonglong)local_res18;
    fVar13 = (float)(((*(double *)(pFVar2 + lVar9 * 0x18 + 0x10) *
                       *(double *)(pFVar3 + lVar10 * 0x18 + 8) -
                      *(double *)(pFVar2 + lVar9 * 0x18 + 8) *
                      *(double *)(pFVar3 + lVar10 * 0x18 + 0x10)) *
                      *(double *)(pFVar4 + lVar11 * 0x18) -
                     (*(double *)(pFVar4 + lVar11 * 0x18 + 8) *
                      *(double *)(pFVar2 + lVar9 * 0x18 + 0x10) -
                     *(double *)(pFVar4 + lVar11 * 0x18 + 0x10) *
                     *(double *)(pFVar2 + lVar9 * 0x18 + 8)) * *(double *)(pFVar3 + lVar10 * 0x18))
                     + (*(double *)(pFVar4 + lVar11 * 0x18 + 8) *
                        *(double *)(pFVar3 + lVar10 * 0x18 + 0x10) -
                       *(double *)(pFVar4 + lVar11 * 0x18 + 0x10) *
                       *(double *)(pFVar3 + lVar10 * 0x18 + 8)) * *(double *)(pFVar2 + lVar9 * 0x18)
                    + (double)fVar13);
  }
  return fVar13 * __real_3e2aaaab;
}

// CalculateVolume @ 1474c40c0

float __cdecl
FAnimPhys::CalculateVolume(TArray<FAnimPhysShape,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  float fVar4;
  float fVar5;
  undefined1 local_res8 [8];
  
  iVar1 = param_1->ArrayNum;
  pTVar2 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
           (param_1->AllocatorInstance).Data;
  pTVar3 = pTVar2 + (longlong)iVar1 * 4;
  fVar5 = 0.0;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnimPhysShape_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pTVar2 == pTVar3) break;
    fVar4 = CalculateVolume(pTVar2,(TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *
                                   )(pTVar2 + 1));
    fVar5 = fVar5 + fVar4;
    pTVar2 = pTVar2 + 4;
  }
  return fVar5;
}

// ConstrainAlongDirection @ 1474c5430

void __cdecl
FAnimPhys::ConstrainAlongDirection
          (float param_1,TArray<FAnimPhysLinearLimit,TSizedDefaultAllocator<32>_> *param_2,
          FAnimPhysRigidBody *param_3,TVector<double> *param_4,FAnimPhysRigidBody *param_5,
          TVector<double> *param_6,TVector<double> *param_7,TVector2<double> *param_8,float param_9,
          float param_10)

{
  double dVar1;
  double dVar2;
  FAnimPhysLinearLimit *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  TVector<double>_u_0 local_2b8;
  TVector<double>_u_0 local_298;
  TVector<double>_u_0 local_280;
  TVector<double>_u_0 local_268;
  FAnimPhysLinearLimit local_248;
  FAnimPhysLinearLimit local_1a8;
  FAnimPhysLinearLimit local_108;
  
  if (param_3 == (FAnimPhysRigidBody *)0x0) {
    dVar7 = (param_4->field0_0x0)._s_0.X;
    dVar8 = (param_4->field0_0x0)._s_0.Y;
    dVar13 = (param_4->field0_0x0)._s_0.Z;
  }
  else {
    local_268._s_0.X = (param_4->field0_0x0)._s_0.X;
    local_268._s_0.Y = (param_4->field0_0x0)._s_0.Y;
    local_268._s_0.Z = (param_4->field0_0x0)._s_0.Z;
    UE::Math::TQuat<double>::RotateVector
              ((TQuat<double> *)&param_3->_padding_,(TVector<double> *)&local_298._s_0,
               (TVector<double> *)&local_268._s_0);
    dVar7 = local_298._s_0.X + (double)param_3->_padding_;
    dVar8 = local_298._s_0.Y + (double)param_3->_padding_;
    dVar13 = local_298._s_0.Z + (double)param_3->_padding_;
  }
  if (param_5 == (FAnimPhysRigidBody *)0x0) {
    dVar12 = (param_6->field0_0x0)._s_0.Z;
    dVar6 = (param_6->field0_0x0)._s_0.X;
    dVar5 = (param_6->field0_0x0)._s_0.Y;
    local_2b8._s_0.Z = dVar12;
  }
  else {
    local_2b8._s_0.X = (param_6->field0_0x0)._s_0.X;
    local_2b8._s_0.Y = (param_6->field0_0x0)._s_0.Y;
    local_2b8._s_0.Z = (param_6->field0_0x0)._s_0.Z;
    UE::Math::TQuat<double>::RotateVector
              ((TQuat<double> *)&param_5->_padding_,(TVector<double> *)&local_280._s_0,
               (TVector<double> *)&local_2b8._s_0);
    dVar6 = local_280._s_0.X + (double)param_5->_padding_;
    dVar5 = local_280._s_0.Y + (double)param_5->_padding_;
    dVar12 = local_280._s_0.Z + (double)param_5->_padding_;
  }
  dVar1 = (param_8->field0_0x0)._s_0.X;
  dVar2 = (param_8->field0_0x0)._s_0.Y;
  local_248.TargetSpeed =
       (float)((dVar5 - dVar8) * (param_7->field0_0x0)._s_0.Y +
               (dVar6 - dVar7) * (param_7->field0_0x0)._s_0.X +
              (dVar12 - dVar13) * (param_7->field0_0x0)._s_0.Z);
  dVar13 = dVar1 - dVar2;
  if (__real_3e45798ee0000000 <=
      (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    local_1a8._padding_ = (longlong)param_5;
    local_1a8.SumImpulses = 0.0;
    dVar13 = (double)local_248.TargetSpeed;
    local_1a8.FirstPosition.field0_0x0._s_0.X = (param_4->field0_0x0)._s_0.X;
    local_1a8.FirstPosition.field0_0x0._s_0.Y = (param_4->field0_0x0)._s_0.Y;
    local_1a8.SecondPosition.field0_0x0._s_0.X = (param_6->field0_0x0)._s_0.X;
    local_1a8.SecondPosition.field0_0x0._s_0.Y = (param_6->field0_0x0)._s_0.Y;
    local_1a8.LimitNormal.field0_0x0._s_0.X = (param_7->field0_0x0)._s_0.X;
    local_1a8.LimitNormal.field0_0x0._s_0.Y = (param_7->field0_0x0)._s_0.Y;
    local_1a8.Maximumforce = param_10;
    if (param_10 <= 0.0) {
      local_1a8.Maximumforce = 0.0;
    }
    local_1a8.TargetSpeed = (float)((dVar13 - dVar1) * (__real_3ff0000000000000 / (double)param_1));
    local_1a8.FirstPosition.field0_0x0._s_0.Z = (param_4->field0_0x0)._s_0.Z;
    if (0.0 <= param_10) {
      param_10 = 0.0;
    }
    local_1a8.SecondPosition.field0_0x0._s_0.Z = (param_6->field0_0x0)._s_0.Z;
    local_1a8.LimitNormal.field0_0x0._s_0.Z = (param_7->field0_0x0)._s_0.Z;
    fVar14 = (float)((dVar13 - dVar2) * (__real_3ff0000000000000 / (double)param_1));
    local_1a8._padding_ = (longlong)param_3;
    local_1a8.TargetSpeedWithoutBias = local_1a8.TargetSpeed;
    local_1a8.MinimumForce = param_10;
    FAnimPhysLinearLimit::UpdateCachedData(&local_1a8);
    pFVar3 = (FAnimPhysLinearLimit *)(param_2->AllocatorInstance).Data;
    if ((pFVar3 <= &local_1a8) && (&local_1a8 < pFVar3 + param_2->ArrayMax)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar10 = param_2->ArrayNum;
    if (iVar10 == param_2->ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x8a0,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar10 + 1;
    local_108._padding_ = (longlong)param_5;
    local_108.SumImpulses = 0.0;
    pFVar11 = (param_2->AllocatorInstance).Data + (longlong)iVar10 * 0xa0;
    *(longlong *)pFVar11 = local_1a8._padding_;
    *(longlong *)(pFVar11 + 8) = local_1a8._padding_;
    *(double *)(pFVar11 + 0x10) = local_1a8.FirstPosition.field0_0x0._s_0.X;
    *(double *)(pFVar11 + 0x18) = local_1a8.FirstPosition.field0_0x0._s_0.Y;
    *(double *)(pFVar11 + 0x20) = local_1a8.FirstPosition.field0_0x0._s_0.Z;
    *(double *)(pFVar11 + 0x28) = local_1a8.SecondPosition.field0_0x0._s_0.X;
    *(double *)(pFVar11 + 0x30) = local_1a8.SecondPosition.field0_0x0._s_0.Y;
    *(double *)(pFVar11 + 0x38) = local_1a8.SecondPosition.field0_0x0._s_0.Z;
    *(double *)(pFVar11 + 0x40) = local_1a8.LimitNormal.field0_0x0._s_0.X;
    *(double *)(pFVar11 + 0x48) = local_1a8.LimitNormal.field0_0x0._s_0.Y;
    *(double *)(pFVar11 + 0x50) = local_1a8.LimitNormal.field0_0x0._s_0.Z;
    *(ulonglong *)(pFVar11 + 0x58) =
         CONCAT44(local_1a8.TargetSpeedWithoutBias,local_1a8.TargetSpeed);
    *(ulonglong *)(pFVar11 + 0x60) = CONCAT44(local_1a8.Maximumforce,local_1a8.MinimumForce);
    *(ulonglong *)(pFVar11 + 0x68) = CONCAT44(local_1a8.InverseInertiaImpulse,local_1a8.SumImpulses)
    ;
    *(double *)(pFVar11 + 0x70) = local_1a8.WorldSpacePosition0.field0_0x0._s_0.X;
    *(double *)(pFVar11 + 0x78) = local_1a8.WorldSpacePosition0.field0_0x0._s_0.Y;
    *(double *)(pFVar11 + 0x80) = local_1a8.WorldSpacePosition0.field0_0x0._s_0.Z;
    *(double *)(pFVar11 + 0x88) = local_1a8.WorldSpacePosition1.field0_0x0._s_0.X;
    *(double *)(pFVar11 + 0x90) = local_1a8.WorldSpacePosition1.field0_0x0._s_0.Y;
    *(double *)(pFVar11 + 0x98) = local_1a8.WorldSpacePosition1.field0_0x0._s_0.Z;
    local_108.FirstPosition.field0_0x0._s_0.X = (param_4->field0_0x0)._s_0.X;
    local_108.FirstPosition.field0_0x0._s_0.Y = (param_4->field0_0x0)._s_0.Y;
    local_108.FirstPosition.field0_0x0._s_0.Z = (param_4->field0_0x0)._s_0.Z;
    local_108.SecondPosition.field0_0x0._s_0.X = (param_6->field0_0x0)._s_0.X;
    local_108.SecondPosition.field0_0x0._s_0.Y = (param_6->field0_0x0)._s_0.Y;
    local_108.SecondPosition.field0_0x0._s_0.Z = (param_6->field0_0x0)._s_0.Z;
    local_108.LimitNormal.field0_0x0._s_0.X = (param_7->field0_0x0)._s_0.X;
    local_108.LimitNormal.field0_0x0._s_0.Y = (param_7->field0_0x0)._s_0.Y;
    local_108.LimitNormal.field0_0x0._s_0.Z = (param_7->field0_0x0)._s_0.Z;
    local_108.MinimumForce = param_9;
    if (0.0 <= param_9) {
      local_108.MinimumForce = 0.0;
    }
    if (param_9 <= 0.0) {
      param_9 = 0.0;
    }
    local_108._padding_ = (longlong)param_3;
    local_108.TargetSpeed = fVar14;
    local_108.TargetSpeedWithoutBias = fVar14;
    local_108.Maximumforce = param_9;
    FAnimPhysLinearLimit::UpdateCachedData(&local_108);
    pFVar3 = (FAnimPhysLinearLimit *)(param_2->AllocatorInstance).Data;
    if ((pFVar3 <= &local_108) && (&local_108 < pFVar3 + param_2->ArrayMax)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar10 = param_2->ArrayNum;
    if (iVar10 == param_2->ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x8a0,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar10 + 1;
    pFVar11 = (param_2->AllocatorInstance).Data + (longlong)iVar10 * 0xa0;
    *(longlong *)pFVar11 = local_108._padding_;
    *(longlong *)(pFVar11 + 8) = local_108._padding_;
    *(double *)(pFVar11 + 0x10) = local_108.FirstPosition.field0_0x0._s_0.X;
    *(double *)(pFVar11 + 0x18) = local_108.FirstPosition.field0_0x0._s_0.Y;
    *(double *)(pFVar11 + 0x20) = local_108.FirstPosition.field0_0x0._s_0.Z;
    *(double *)(pFVar11 + 0x28) = local_108.SecondPosition.field0_0x0._s_0.X;
    *(double *)(pFVar11 + 0x30) = local_108.SecondPosition.field0_0x0._s_0.Y;
    *(double *)(pFVar11 + 0x38) = local_108.SecondPosition.field0_0x0._s_0.Z;
    *(double *)(pFVar11 + 0x40) = local_108.LimitNormal.field0_0x0._s_0.X;
    *(double *)(pFVar11 + 0x48) = local_108.LimitNormal.field0_0x0._s_0.Y;
    *(double *)(pFVar11 + 0x50) = local_108.LimitNormal.field0_0x0._s_0.Z;
    *(ulonglong *)(pFVar11 + 0x58) =
         CONCAT44(local_108.TargetSpeedWithoutBias,local_108.TargetSpeed);
    *(ulonglong *)(pFVar11 + 0x60) = CONCAT44(local_108.Maximumforce,local_108.MinimumForce);
    *(ulonglong *)(pFVar11 + 0x68) = CONCAT44(local_108.InverseInertiaImpulse,local_108.SumImpulses)
    ;
    *(double *)(pFVar11 + 0x70) = local_108.WorldSpacePosition0.field0_0x0._s_0.X;
    *(double *)(pFVar11 + 0x78) = local_108.WorldSpacePosition0.field0_0x0._s_0.Y;
    *(double *)(pFVar11 + 0x80) = local_108.WorldSpacePosition0.field0_0x0._s_0.Z;
    *(double *)(pFVar11 + 0x88) = local_108.WorldSpacePosition1.field0_0x0._s_0.X;
    *(double *)(pFVar11 + 0x90) = local_108.WorldSpacePosition1.field0_0x0._s_0.Y;
    *(double *)(pFVar11 + 0x98) = local_108.WorldSpacePosition1.field0_0x0._s_0.Z;
  }
  else {
    local_248.FirstPosition.field0_0x0._s_0.X = (param_4->field0_0x0)._s_0.X;
    local_248.FirstPosition.field0_0x0._s_0.Y = (param_4->field0_0x0)._s_0.Y;
    local_248.FirstPosition.field0_0x0._s_0.Z = (param_4->field0_0x0)._s_0.Z;
    local_248._padding_ = (longlong)param_5;
    local_248.SecondPosition.field0_0x0._s_0.X = (param_6->field0_0x0)._s_0.X;
    local_248.SecondPosition.field0_0x0._s_0.Y = (param_6->field0_0x0)._s_0.Y;
    local_248.SumImpulses = 0.0;
    local_248.LimitNormal.field0_0x0._s_0.X = (param_7->field0_0x0)._s_0.X;
    local_248.LimitNormal.field0_0x0._s_0.Y = (param_7->field0_0x0)._s_0.Y;
    local_248.TargetSpeed = local_248.TargetSpeed / param_1;
    local_248.SecondPosition.field0_0x0._s_0.Z = (param_6->field0_0x0)._s_0.Z;
    local_248.MinimumForce = param_9;
    if (param_10 <= param_9) {
      local_248.MinimumForce = param_10;
    }
    if (param_9 <= param_10) {
      param_9 = param_10;
    }
    local_248.LimitNormal.field0_0x0._s_0.Z = (param_7->field0_0x0)._s_0.Z;
    local_248._padding_ = (longlong)param_3;
    local_248.TargetSpeedWithoutBias = local_248.TargetSpeed;
    local_248.Maximumforce = param_9;
    FAnimPhysLinearLimit::UpdateCachedData(&local_248);
    pFVar3 = (FAnimPhysLinearLimit *)(param_2->AllocatorInstance).Data;
    if ((pFVar3 <= &local_248) && (&local_248 < pFVar3 + param_2->ArrayMax)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar10 = param_2->ArrayNum;
    if (iVar10 == param_2->ArrayMax) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x8a0,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar10 + 1;
    pFVar11 = (param_2->AllocatorInstance).Data + (longlong)iVar10 * 0xa0;
    *(longlong *)pFVar11 = local_248._padding_;
    *(longlong *)(pFVar11 + 8) = local_248._padding_;
    *(double *)(pFVar11 + 0x10) = local_248.FirstPosition.field0_0x0._s_0.X;
    *(double *)(pFVar11 + 0x18) = local_248.FirstPosition.field0_0x0._s_0.Y;
    *(double *)(pFVar11 + 0x20) = local_248.FirstPosition.field0_0x0._s_0.Z;
    *(double *)(pFVar11 + 0x28) = local_248.SecondPosition.field0_0x0._s_0.X;
    *(double *)(pFVar11 + 0x30) = local_248.SecondPosition.field0_0x0._s_0.Y;
    *(double *)(pFVar11 + 0x38) = local_248.SecondPosition.field0_0x0._s_0.Z;
    *(double *)(pFVar11 + 0x40) = local_248.LimitNormal.field0_0x0._s_0.X;
    *(double *)(pFVar11 + 0x48) = local_248.LimitNormal.field0_0x0._s_0.Y;
    *(double *)(pFVar11 + 0x50) = local_248.LimitNormal.field0_0x0._s_0.Z;
    *(ulonglong *)(pFVar11 + 0x58) =
         CONCAT44(local_248.TargetSpeedWithoutBias,local_248.TargetSpeed);
    *(ulonglong *)(pFVar11 + 0x60) = CONCAT44(local_248.Maximumforce,local_248.MinimumForce);
    *(ulonglong *)(pFVar11 + 0x68) = CONCAT44(local_248.InverseInertiaImpulse,local_248.SumImpulses)
    ;
    *(double *)(pFVar11 + 0x70) = local_248.WorldSpacePosition0.field0_0x0._s_0.X;
    *(double *)(pFVar11 + 0x78) = local_248.WorldSpacePosition0.field0_0x0._s_0.Y;
    *(double *)(pFVar11 + 0x80) = local_248.WorldSpacePosition0.field0_0x0._s_0.Z;
    *(double *)(pFVar11 + 0x88) = local_248.WorldSpacePosition1.field0_0x0._s_0.X;
    *(double *)(pFVar11 + 0x90) = local_248.WorldSpacePosition1.field0_0x0._s_0.Y;
    *(double *)(pFVar11 + 0x98) = local_248.WorldSpacePosition1.field0_0x0._s_0.Z;
  }
  return;
}

// ConstrainAngularRange @ 1474c5b00

void __cdecl
FAnimPhys::ConstrainAngularRange
          (float param_1,TArray<FAnimPhysAngularLimit,TSizedDefaultAllocator<32>_> *param_2,
          FAnimPhysRigidBody *param_3,FAnimPhysRigidBody *param_4,TQuat<double> *param_5,
          AnimPhysTwistAxis param_6,TVector<double> *param_7,TVector<double> *param_8,float param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  TQuat<double> *pTVar12;
  TQuat<double> local_a8;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  
  if (param_3 == (FAnimPhysRigidBody *)0x0) {
    dVar3 = param_5->X;
    dVar4 = param_5->Y;
    dVar1 = param_5->Z;
    dVar2 = param_5->W;
  }
  else {
    dVar4 = param_5->Z;
    dVar5 = param_5->W;
    dVar6 = param_5->X;
    dVar7 = param_5->Y;
    dVar8 = (double)param_3->_padding_;
    dVar9 = (double)param_3->_padding_;
    dVar10 = (double)param_3->_padding_;
    dVar11 = (double)param_3->_padding_;
    dVar1 = dVar8 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
            dVar11 * dVar4 +
            dVar9 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
            dVar10 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar2 = dVar8 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
            dVar11 * dVar5 +
            dVar9 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
            dVar10 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    dVar3 = dVar8 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
            dVar11 * dVar6 +
            dVar9 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
            dVar10 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar4 = dVar8 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
            dVar11 * dVar7 +
            dVar9 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
            dVar10 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  }
  local_88._8_4_ = SUB84(dVar4,0);
  local_88._0_8_ = dVar3;
  local_88._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  pTVar12 = (TQuat<double> *)&param_4->_padding_;
  local_78._8_4_ = SUB84(dVar2,0);
  local_78._0_8_ = dVar1;
  local_78._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  if (param_4 == (FAnimPhysRigidBody *)0x0) {
    pTVar12 = &UE::Math::TQuat<double>::Identity;
  }
  local_a8.X = pTVar12->X;
  local_a8.Y = pTVar12->Y;
  local_a8.Z = pTVar12->Z;
  local_a8.W = pTVar12->W;
  ConstrainAngularRangeInternal
            (param_1,param_2,param_3,(TQuat<double> *)local_88,param_4,&local_a8,param_6,param_7,
             param_8,param_9);
  return;
}

// ConstrainAngularRangeInternal @ 1474c5cd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FAnimPhys::ConstrainAngularRangeInternal
          (float param_1,TArray<FAnimPhysAngularLimit,TSizedDefaultAllocator<32>_> *param_2,
          FAnimPhysRigidBody *param_3,TQuat<double> *param_4,FAnimPhysRigidBody *param_5,
          TQuat<double> *param_6,AnimPhysTwistAxis param_7,TVector<double> *param_8,
          TVector<double> *param_9,float param_10)

{
  FAnimPhysAngularLimit *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  AnimPhysTwistAxis AVar17;
  bool bVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  longlong lVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar34;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  uint uVar39;
  uint uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  float fVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  float fVar58;
  undefined1 local_598 [16];
  TVector<double>_u_0 local_588;
  double local_570;
  TVector<double>_u_0 local_568;
  double local_540;
  double local_528;
  FAnimPhysAngularLimit local_520;
  FAnimPhysAngularLimit local_4e0;
  undefined1 local_498 [16];
  FAnimPhysAngularLimit local_488;
  FAnimPhysAngularLimit local_448;
  FAnimPhysAngularLimit local_408;
  FAnimPhysAngularLimit local_3c8;
  FAnimPhysAngularLimit local_388;
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  TQuat<double> *local_308;
  TVector<double>_u_0 local_2f8;
  TVector<double>_u_0 local_2d8;
  TVector<double>_u_0 local_2b8;
  TVector<double>_u_0 local_298;
  TVector<double>_u_0 local_278;
  TVector<double>_u_0 local_258;
  TVector<double>_u_0 local_240;
  TVector<double>_u_0 local_228;
  TVector<double>_u_0 local_208;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1b0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_f8 [8];
  
  AVar17 = param_7;
  dVar3 = param_6->Z;
  dVar4 = param_6->W;
  dVar5 = param_6->X;
  dVar6 = param_6->Y;
  dVar8 = param_4->Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar37 = param_4->W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar23 = (param_8->field0_0x0)._s_0.X * __real_3f91df46a0000000;
  dVar7 = param_4->X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar36 = param_4->Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar24 = (param_8->field0_0x0)._s_0.Y * __real_3f91df46a0000000;
  dVar25 = (param_8->field0_0x0)._s_0.Z * __real_3f91df46a0000000;
  dVar26 = (param_9->field0_0x0)._s_0.X * __real_3f91df46a0000000;
  dVar27 = (param_9->field0_0x0)._s_0.Y * __real_3f91df46a0000000;
  local_570 = (param_9->field0_0x0)._s_0.Z * __real_3f91df46a0000000;
  auVar28._8_4_ = SUB84(dVar8,0);
  auVar28._0_8_ = dVar8;
  auVar28._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  dVar9 = dVar7 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          dVar3 * dVar37 +
          dVar5 * dVar36 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar8 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar10 = dVar7 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar4 * dVar37 +
           dVar6 * dVar36 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar8 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar8 = dVar7 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dVar5 * dVar37 +
          dVar3 * dVar36 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar8 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  uVar45 = (undefined4)((ulonglong)dVar8 >> 0x20);
  dVar7 = dVar7 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar6 * dVar37 +
          dVar4 * dVar36 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          auVar28._8_8_ * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  uVar39 = (uint)__xmm_80000000000000008000000000000000;
  uVar40 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  if (param_7 == AxisX) {
    local_568._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_568._s_0.Y = _UNK_150689518;
    dVar37 = dVar9 + dVar9;
    dVar36 = (double)CONCAT44((uint)((ulonglong)(dVar7 + dVar7) >> 0x20) ^ uVar40,
                              SUB84(dVar7 + dVar7,0) ^ uVar39);
    local_588._s_0.X = (dVar7 * dVar36 - dVar37 * dVar9) + __real_3ff0000000000000;
    local_588._s_0.Y = dVar37 * dVar10 - dVar8 * dVar36;
    local_588._s_0.Z = dVar10 * dVar36 + dVar37 * dVar8;
LAB_1474c604d:
    local_568._s_0.Z = 0.0;
  }
  else {
    if (param_7 == AxisY) {
      dVar36 = dVar8 + dVar8;
      local_568._s_0.X = ___xmm_3ff00000000000000000000000000000;
      local_568._s_0.Y = _UNK_15061cbc8;
      uVar39 = SUB84(dVar9 + dVar9,0) ^ uVar39;
      uVar40 = (uint)((ulonglong)(dVar9 + dVar9) >> 0x20) ^ uVar40;
      auVar16._4_4_ = SUB84(dVar7,0);
      auVar16._0_4_ = uVar45;
      auVar16._8_4_ = (int)((ulonglong)dVar7 >> 0x20);
      local_588._s_0.X = (double)CONCAT44(uVar40,uVar39) * dVar10 + dVar36 * auVar16._4_8_;
      local_588._s_0.Z = dVar36 * dVar10 - (double)CONCAT44(uVar40,uVar39) * auVar16._4_8_;
      local_588._s_0.Y =
           ((double)CONCAT44(uVar40,uVar39) * dVar9 - dVar36 * dVar8) + __real_3ff0000000000000;
      goto LAB_1474c604d;
    }
    if (param_7 == AxisZ) {
      local_568._s_0.Z = __real_3ff0000000000000;
      local_568._s_0.X = 0.0;
      local_568._s_0.Y = 0.0;
      dVar36 = dVar7 + dVar7;
      dVar37 = (double)CONCAT44((uint)((ulonglong)(dVar8 + dVar8) >> 0x20) ^ uVar40,
                                SUB84(dVar8 + dVar8,0) ^ uVar39);
      local_588._s_0.X = dVar36 * dVar10 - dVar37 * dVar9;
      local_588._s_0.Y = dVar37 * dVar10 + dVar36 * dVar9;
      local_588._s_0.Z = (dVar37 * dVar8 - dVar36 * dVar7) + __real_3ff0000000000000;
    }
    else {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimPhysicsSolver.cpp"
                          ,0x289,L"Invalid setting for constraint twist axis.");
      if (bVar18) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  UE::Math::TQuat<double>::FindBetweenVectors
            ((TQuat<double> *)local_338,(TVector<double> *)&local_568._s_0,
             (TVector<double> *)&local_588._s_0);
  auVar38._8_4_ = SUB84(dVar10,0);
  auVar38._0_8_ = dVar9;
  auVar38._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  dVar36 = local_328._0_8_;
  dVar3 = dVar36 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar37 = local_328._8_8_;
  dVar4 = dVar37 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar5 = (double)local_338._0_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar6 = (double)local_338._8_8_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar29._8_4_ = SUB84(dVar4,0);
  auVar29._0_8_ = dVar4;
  auVar29._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  auVar30._8_4_ = SUB84(dVar8,0);
  auVar30._0_8_ = dVar7;
  auVar30._12_4_ = uVar45;
  dVar34 = auVar30._8_8_ * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar11 = auVar38._8_8_ * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar4 * dVar8 +
           dVar6 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar7 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar12 = dVar9 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           auVar29._8_8_ * dVar7 +
           dVar6 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] + dVar34
  ;
  auVar13._4_8_ = dVar34;
  auVar13._0_4_ = local_328._4_4_;
  auVar31._0_8_ = auVar13._0_8_ << 0x20;
  auVar31._8_4_ = local_328._8_4_;
  auVar31._12_4_ = local_328._12_4_;
  local_498._8_4_ = SUB84(dVar12,0);
  local_498._0_8_ = dVar11;
  local_498._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  dVar34 = dVar7 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar4 * dVar9 +
           dVar6 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           auVar38._8_8_ * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar7 = dVar8 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar4 * dVar10 +
          dVar6 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar9 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  uVar45 = (undefined4)((ulonglong)dVar7 >> 0x20);
  local_348._8_4_ = SUB84(dVar7,0);
  local_348._0_8_ = dVar34;
  local_348._12_4_ = uVar45;
  dVar8 = (double)local_338._0_8_;
  dVar9 = (double)local_338._8_8_;
  if (auVar31._8_8_ < 0.0) {
    auVar14._4_8_ = dVar37;
    auVar14._0_4_ = _UNK_15076c664;
    auVar32._0_8_ = auVar14._0_8_ << 0x20;
    auVar32._8_4_ = _UNK_15076c668;
    auVar32._12_4_ = _UNK_15076c66c;
    dVar8 = (double)local_338._0_8_ * ___xmm_bff0000000000000bff0000000000000;
    dVar9 = (double)local_338._8_8_ * _UNK_15076c718;
    dVar36 = (double)_UNK_15076c668 * dVar36;
    local_338._8_4_ = SUB84(dVar9,0);
    local_338._0_8_ = dVar8;
    local_338._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    local_328._8_4_ = SUB84((double)_UNK_15076c66c * dVar37,0);
    local_328._0_8_ = dVar36;
    local_328._12_4_ = (int)((ulonglong)((double)_UNK_15076c66c * dVar37) >> 0x20);
    dVar37 = auVar32._8_8_;
  }
  auVar15._4_8_ = dVar37;
  auVar15._0_4_ = (int)((ulonglong)dVar34 >> 0x20);
  auVar33._0_8_ = auVar15._0_8_ << 0x20;
  auVar33._8_4_ = SUB84(dVar7,0);
  auVar33._12_4_ = uVar45;
  if (auVar33._8_8_ < 0.0) {
    local_498._8_8_ = _UNK_15076c718 * dVar12;
    local_498._0_8_ = ___xmm_bff0000000000000bff0000000000000 * dVar11;
    local_348._8_8_ = (double)_UNK_15076c66c * dVar7;
    local_348._0_8_ = (double)_UNK_15076c668 * dVar34;
  }
  fVar43 = 0.0;
  _param_7 = 0.0;
  local_540 = 0.0;
  fVar41 = 0.0;
  local_528 = 0.0;
  fVar55 = 0.0;
  local_308 = (TQuat<double> *)0x0;
  fVar44 = 0.0;
  fVar58 = 0.0;
  uVar45 = 0;
  uVar46 = 0;
  uVar47 = 0;
  uVar48 = 0;
  uVar49 = 0;
  uVar50 = 0;
  uVar51 = 0;
  uVar52 = 0;
  local_598 = ZEXT816(0);
  if (AVar17 == AxisX) {
    local_118._s_0.X = ___xmm_3ff00000000000000000000000000000;
    local_118._s_0.Y = _UNK_15061cbc8;
    local_118._s_0.Z = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (param_6,(TVector<double> *)&local_240._s_0,(TVector<double> *)&local_118._s_0);
    uVar53 = SUB84(local_240._s_0.Z,0);
    uVar54 = (undefined4)((ulonglong)local_240._16_8_ >> 0x20);
    local_228._s_0.Z = __real_3ff0000000000000;
    local_228._s_0.X = 0.0;
    local_228._s_0.Y = 0.0;
    local_540 = local_240._s_0.Z;
    UE::Math::TQuat<double>::RotateVector
              (param_6,(TVector<double> *)&local_208._s_0,(TVector<double> *)&local_228._s_0);
    uVar56 = SUB84(local_208._s_0.Z,0);
    uVar57 = (undefined4)((ulonglong)local_208._16_8_ >> 0x20);
    local_1e8._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_1e8._s_0.Y = _UNK_150689518;
    local_1e8._s_0.Z = 0.0;
    local_528 = local_208._s_0.Z;
    UE::Math::TQuat<double>::RotateVector
              (param_6,(TVector<double> *)&local_1c8._s_0,(TVector<double> *)&local_1e8._s_0);
    local_598._8_8_ = local_1c8._s_0.Y;
    local_598._0_8_ = local_1c8._s_0.X;
    param_6 = (TQuat<double> *)local_1c8._s_0.Z;
    dVar23 = dVar24;
    uVar45 = local_240._0_4_;
    uVar46 = local_240._4_4_;
    uVar47 = local_240._8_4_;
    uVar48 = local_240._12_4_;
    uVar49 = local_208._0_4_;
    uVar50 = local_208._4_4_;
    uVar51 = local_208._8_4_;
    uVar52 = local_208._12_4_;
    dVar26 = dVar27;
    dVar8 = dVar9;
    dVar27 = local_570;
    dVar7 = (double)local_498._0_8_;
LAB_1474c65c3:
    _param_7 = (float)dVar7;
    fVar58 = (float)dVar36;
    fVar44 = (float)dVar8;
    fVar41 = (float)dVar25;
    fVar22 = (float)dVar26;
    fVar43 = (float)dVar23;
    fVar55 = (float)dVar27;
    if (fVar43 == fVar22) goto LAB_1474c65ee;
    fVar42 = __real_3f000000;
    fVar35 = __real_40c90fdb;
    if (__real_40c90fdb <= fVar22 - fVar43) goto LAB_1474c6a14;
    fVar22 = sinf(fVar22 * __real_3f000000);
    fVar42 = __real_3f800000 / param_1;
    local_488._padding_ = (longlong)param_5;
    local_488.Torque = 0.0;
    local_488.WorldSpaceAxis.field0_0x0._s_0.Z = (double)CONCAT44(uVar54,uVar53);
    local_488._padding_ = (longlong)param_3;
    local_488.WorldSpaceAxis.field0_0x0._0_4_ = uVar45;
    local_488.WorldSpaceAxis.field0_0x0._4_4_ = uVar46;
    local_488.WorldSpaceAxis.field0_0x0._8_4_ = uVar47;
    local_488.WorldSpaceAxis.field0_0x0._12_4_ = uVar48;
    fVar43 = sinf(fVar43 * __real_3f000000);
    local_488.MinimumTorque = 0.0;
    local_488.MaximumTorque = 3.4028235e+38;
    local_488.TargetSpin = ((fVar43 + fVar43) - (fVar44 + fVar44)) * fVar42;
    FAnimPhysAngularLimit::UpdateCachedData(&local_488);
    pFVar1 = (FAnimPhysAngularLimit *)(param_2->AllocatorInstance).Data;
    if (((pFVar1 <= &local_488) && (&local_488 < pFVar1 + param_2->ArrayMax)) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar18)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar19 = param_2->ArrayNum;
    if (iVar19 == param_2->ArrayMax) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x840,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    uVar39 = (uint)__xmm_80000000000000008000000000000000;
    uVar40 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    param_2->ArrayNum = iVar19 + 1;
    pFVar20 = (param_2->AllocatorInstance).Data;
    lVar21 = (longlong)iVar19 * 0x40;
    local_520._padding_ = (longlong)param_5;
    local_520.Torque = 0.0;
    *(longlong *)(pFVar20 + lVar21) = local_488._padding_;
    *(longlong *)(pFVar20 + lVar21 + 8) = local_488._padding_;
    local_520.MinimumTorque = 0.0;
    local_520.MaximumTorque = 3.4028235e+38;
    *(ulonglong *)(pFVar20 + lVar21 + 0x10) =
         CONCAT44(local_488.WorldSpaceAxis.field0_0x0._4_4_,
                  local_488.WorldSpaceAxis.field0_0x0._0_4_);
    *(ulonglong *)(pFVar20 + lVar21 + 0x10 + 8) =
         CONCAT44(local_488.WorldSpaceAxis.field0_0x0._12_4_,
                  local_488.WorldSpaceAxis.field0_0x0._8_4_);
    *(double *)(pFVar20 + lVar21 + 0x20) = local_488.WorldSpaceAxis.field0_0x0._s_0.Z;
    *(ulonglong *)(pFVar20 + lVar21 + 0x20 + 8) = CONCAT44(local_488.TargetSpin,local_488.Torque);
    local_520.WorldSpaceAxis.field0_0x0._s_0.X = (double)CONCAT44(uVar46 ^ uVar40,uVar45 ^ uVar39);
    local_520.WorldSpaceAxis.field0_0x0._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)local_540 >> 0x20) ^ uVar40,SUB84(local_540,0) ^ uVar39)
    ;
    local_520.WorldSpaceAxis.field0_0x0._s_0.Y = (double)CONCAT44(uVar48 ^ uVar40,uVar47 ^ uVar39);
    *(ulonglong *)(pFVar20 + lVar21 + 0x30) =
         CONCAT44(local_488.MaximumTorque,local_488.MinimumTorque);
    *(undefined8 *)(pFVar20 + lVar21 + 0x30 + 8) = local_488._56_8_;
    local_520._padding_ = (longlong)param_3;
    local_520.TargetSpin = ((fVar44 - fVar22) + (fVar44 - fVar22)) * fVar42;
    FAnimPhysAngularLimit::UpdateCachedData(&local_520);
    pFVar1 = (FAnimPhysAngularLimit *)(param_2->AllocatorInstance).Data;
    if (((pFVar1 <= &local_520) && (&local_520 < pFVar1 + param_2->ArrayMax)) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar18)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar19 = param_2->ArrayNum;
    if (iVar19 == param_2->ArrayMax) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x840,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    fVar35 = __real_40c90fdb;
    fVar42 = __real_3f000000;
    param_2->ArrayNum = iVar19 + 1;
    pFVar20 = (param_2->AllocatorInstance).Data;
    lVar21 = (longlong)iVar19 * 0x40;
    *(longlong *)(pFVar20 + lVar21) = local_520._padding_;
    *(longlong *)(pFVar20 + lVar21 + 8) = local_520._padding_;
    *(double *)(pFVar20 + lVar21 + 0x10) = local_520.WorldSpaceAxis.field0_0x0._s_0.X;
    *(double *)(pFVar20 + lVar21 + 0x10 + 8) = local_520.WorldSpaceAxis.field0_0x0._s_0.Y;
    *(double *)(pFVar20 + lVar21 + 0x20) = local_520.WorldSpaceAxis.field0_0x0._s_0.Z;
    *(ulonglong *)(pFVar20 + lVar21 + 0x20 + 8) = CONCAT44(local_520.TargetSpin,local_520.Torque);
    *(ulonglong *)(pFVar20 + lVar21 + 0x30) =
         CONCAT44(local_520.MaximumTorque,local_520.MinimumTorque);
    *(undefined8 *)(pFVar20 + lVar21 + 0x30 + 8) = local_520._56_8_;
  }
  else {
    if (AVar17 == AxisY) {
      local_198._s_0.X = ___xmm_00000000000000003ff0000000000000;
      local_198._s_0.Y = _UNK_150689518;
      local_198._s_0.Z = 0.0;
      UE::Math::TQuat<double>::RotateVector
                (param_6,(TVector<double> *)&local_1b0._s_0,(TVector<double> *)&local_198._s_0);
      uVar53 = SUB84(local_1b0._s_0.Z,0);
      uVar54 = (undefined4)((ulonglong)local_1b0._16_8_ >> 0x20);
      local_f8[0]._s_0.Z = __real_3ff0000000000000;
      local_f8[0]._s_0.X = 0.0;
      local_f8[0]._s_0.Y = 0.0;
      local_540 = local_1b0._s_0.Z;
      UE::Math::TQuat<double>::RotateVector
                (param_6,(TVector<double> *)&local_178._s_0,(TVector<double> *)&local_f8[0]._s_0);
      uVar56 = SUB84(local_178._s_0.Z,0);
      uVar57 = (undefined4)((ulonglong)local_178._16_8_ >> 0x20);
      local_158._s_0.X = ___xmm_3ff00000000000000000000000000000;
      local_158._s_0.Y = _UNK_15061cbc8;
      local_158._s_0.Z = 0.0;
      local_528 = local_178._s_0.Z;
      UE::Math::TQuat<double>::RotateVector
                (param_6,(TVector<double> *)&local_138._s_0,(TVector<double> *)&local_158._s_0);
      local_598._8_8_ = local_138._s_0.Y;
      local_598._0_8_ = local_138._s_0.X;
      param_6 = (TQuat<double> *)local_138._s_0.Z;
      uVar45 = local_1b0._0_4_;
      uVar46 = local_1b0._4_4_;
      uVar47 = local_1b0._8_4_;
      uVar48 = local_1b0._12_4_;
      uVar49 = local_178._0_4_;
      uVar50 = local_178._4_4_;
      uVar51 = local_178._8_4_;
      uVar52 = local_178._12_4_;
      dVar27 = local_570;
      dVar7 = (double)local_498._8_8_;
      goto LAB_1474c65c3;
    }
    if (AVar17 == AxisZ) {
      local_2f8._s_0.Z = 0.0;
      local_2f8._s_0.X = ___xmm_00000000000000003ff0000000000000;
      local_2f8._s_0.Y = _UNK_150689518;
      UE::Math::TQuat<double>::RotateVector
                (param_6,(TVector<double> *)&local_2d8._s_0,(TVector<double> *)&local_2f8._s_0);
      uVar53 = SUB84(local_2d8._s_0.Z,0);
      uVar54 = (undefined4)((ulonglong)local_2d8._16_8_ >> 0x20);
      local_2b8._s_0.X = ___xmm_3ff00000000000000000000000000000;
      local_2b8._s_0.Y = _UNK_15061cbc8;
      local_2b8._s_0.Z = 0.0;
      local_540 = local_2d8._s_0.Z;
      UE::Math::TQuat<double>::RotateVector
                (param_6,(TVector<double> *)&local_298._s_0,(TVector<double> *)&local_2b8._s_0);
      uVar56 = SUB84(local_298._s_0.Z,0);
      uVar57 = (undefined4)((ulonglong)local_298._16_8_ >> 0x20);
      local_278._s_0.Z = __real_3ff0000000000000;
      local_278._s_0.X = 0.0;
      local_278._s_0.Y = 0.0;
      local_528 = local_298._s_0.Z;
      UE::Math::TQuat<double>::RotateVector
                (param_6,(TVector<double> *)&local_258._s_0,(TVector<double> *)&local_278._s_0);
      local_598._8_8_ = local_258._s_0.Y;
      local_598._0_8_ = local_258._s_0.X;
      param_6 = (TQuat<double> *)local_258._s_0.Z;
      uVar45 = local_2d8._0_4_;
      uVar46 = local_2d8._4_4_;
      uVar47 = local_2d8._8_4_;
      uVar48 = local_2d8._12_4_;
      uVar49 = local_298._0_4_;
      uVar50 = local_298._4_4_;
      uVar51 = local_298._8_4_;
      uVar52 = local_298._12_4_;
      dVar25 = dVar24;
      dVar36 = dVar9;
      dVar7 = (double)local_348._0_8_;
      goto LAB_1474c65c3;
    }
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimPhysicsSolver.cpp"
                        ,0x2cf,L"Invalid setting for constraint twist axis.");
    if (bVar18) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar53 = SUB84(local_540,0);
    uVar54 = (undefined4)((ulonglong)local_540 >> 0x20);
    uVar56 = SUB84(local_528,0);
    uVar57 = (undefined4)((ulonglong)local_528 >> 0x20);
    param_6 = local_308;
LAB_1474c65ee:
    fVar42 = __real_3f000000;
    local_388._padding_ = (longlong)param_5;
    local_388.WorldSpaceAxis.field0_0x0._s_0.Z = (double)CONCAT44(uVar54,uVar53);
    local_388.Torque = 0.0;
    local_388._padding_ = (longlong)param_3;
    local_388.WorldSpaceAxis.field0_0x0._0_4_ = uVar45;
    local_388.WorldSpaceAxis.field0_0x0._4_4_ = uVar46;
    local_388.WorldSpaceAxis.field0_0x0._8_4_ = uVar47;
    local_388.WorldSpaceAxis.field0_0x0._12_4_ = uVar48;
    fVar43 = sinf(fVar43 * __real_3f000000);
    local_388.MinimumTorque = -3.4028235e+38;
    local_388.MaximumTorque = 3.4028235e+38;
    local_388.TargetSpin = ((fVar43 + fVar43) - (fVar44 + fVar44)) / param_1;
    FAnimPhysAngularLimit::UpdateCachedData(&local_388);
    pFVar1 = (FAnimPhysAngularLimit *)(param_2->AllocatorInstance).Data;
    if (((pFVar1 <= &local_388) && (&local_388 < pFVar1 + param_2->ArrayMax)) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar18)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar19 = param_2->ArrayNum;
    if (iVar19 == param_2->ArrayMax) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x840,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    fVar35 = __real_40c90fdb;
    param_2->ArrayNum = iVar19 + 1;
    pFVar20 = (param_2->AllocatorInstance).Data;
    lVar21 = (longlong)iVar19 * 0x40;
    *(longlong *)(pFVar20 + lVar21) = local_388._padding_;
    *(longlong *)(pFVar20 + lVar21 + 8) = local_388._padding_;
    *(ulonglong *)(pFVar20 + lVar21 + 0x10) =
         CONCAT44(local_388.WorldSpaceAxis.field0_0x0._4_4_,
                  local_388.WorldSpaceAxis.field0_0x0._0_4_);
    *(ulonglong *)(pFVar20 + lVar21 + 0x10 + 8) =
         CONCAT44(local_388.WorldSpaceAxis.field0_0x0._12_4_,
                  local_388.WorldSpaceAxis.field0_0x0._8_4_);
    *(double *)(pFVar20 + lVar21 + 0x20) = local_388.WorldSpaceAxis.field0_0x0._s_0.Z;
    *(ulonglong *)(pFVar20 + lVar21 + 0x20 + 8) = CONCAT44(local_388.TargetSpin,local_388.Torque);
    *(ulonglong *)(pFVar20 + lVar21 + 0x30) =
         CONCAT44(local_388.MaximumTorque,local_388.MinimumTorque);
    *(undefined8 *)(pFVar20 + lVar21 + 0x30 + 8) = local_388._56_8_;
LAB_1474c6a14:
    uVar39 = (uint)__xmm_80000000000000008000000000000000;
    uVar40 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  }
  if (fVar41 == fVar55) {
    local_448._padding_ = (longlong)param_5;
    local_448.WorldSpaceAxis.field0_0x0._s_0.Z = (double)CONCAT44(uVar57,uVar56);
    local_448.Torque = 0.0;
    local_448.MinimumTorque = -3.4028235e+38;
    local_448.MaximumTorque = 3.4028235e+38;
    local_448.TargetSpin = ((fVar41 - fVar58) * (param_10 + param_10)) / param_1;
    local_448._padding_ = (longlong)param_3;
    local_448.WorldSpaceAxis.field0_0x0._0_4_ = uVar49;
    local_448.WorldSpaceAxis.field0_0x0._4_4_ = uVar50;
    local_448.WorldSpaceAxis.field0_0x0._8_4_ = uVar51;
    local_448.WorldSpaceAxis.field0_0x0._12_4_ = uVar52;
    FAnimPhysAngularLimit::UpdateCachedData(&local_448);
    pFVar1 = (FAnimPhysAngularLimit *)(param_2->AllocatorInstance).Data;
    if (((pFVar1 <= &local_448) && (&local_448 < pFVar1 + param_2->ArrayMax)) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar18)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar19 = param_2->ArrayNum;
    if (iVar19 == param_2->ArrayMax) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x840,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar19 + 1;
    pFVar20 = (param_2->AllocatorInstance).Data;
    lVar21 = (longlong)iVar19 * 0x40;
    *(longlong *)(pFVar20 + lVar21) = local_448._padding_;
    *(longlong *)(pFVar20 + lVar21 + 8) = local_448._padding_;
    *(ulonglong *)(pFVar20 + lVar21 + 0x10) =
         CONCAT44(local_448.WorldSpaceAxis.field0_0x0._4_4_,
                  local_448.WorldSpaceAxis.field0_0x0._0_4_);
    *(ulonglong *)(pFVar20 + lVar21 + 0x10 + 8) =
         CONCAT44(local_448.WorldSpaceAxis.field0_0x0._12_4_,
                  local_448.WorldSpaceAxis.field0_0x0._8_4_);
    *(double *)(pFVar20 + lVar21 + 0x20) = local_448.WorldSpaceAxis.field0_0x0._s_0.Z;
    *(ulonglong *)(pFVar20 + lVar21 + 0x20 + 8) = CONCAT44(local_448.TargetSpin,local_448.Torque);
    fVar41 = local_448.MinimumTorque;
    fVar43 = local_448.MaximumTorque;
  }
  else {
    if (fVar35 <= fVar55 - fVar41) goto LAB_1474c6df8;
    fVar43 = sinf(fVar55 * fVar42);
    fVar44 = __real_3f800000 / param_1;
    local_408._padding_ = (longlong)param_5;
    local_408.Torque = 0.0;
    local_408.WorldSpaceAxis.field0_0x0._s_0.Z = (double)CONCAT44(uVar57,uVar56);
    local_408._padding_ = (longlong)param_3;
    local_408.WorldSpaceAxis.field0_0x0._0_4_ = uVar49;
    local_408.WorldSpaceAxis.field0_0x0._4_4_ = uVar50;
    local_408.WorldSpaceAxis.field0_0x0._8_4_ = uVar51;
    local_408.WorldSpaceAxis.field0_0x0._12_4_ = uVar52;
    fVar41 = sinf(fVar41 * fVar42);
    local_408.MinimumTorque = 0.0;
    local_408.MaximumTorque = 3.4028235e+38;
    local_408.TargetSpin = ((fVar41 + fVar41) - (fVar58 + fVar58)) * fVar44;
    FAnimPhysAngularLimit::UpdateCachedData(&local_408);
    pFVar1 = (FAnimPhysAngularLimit *)(param_2->AllocatorInstance).Data;
    if (((pFVar1 <= &local_408) && (&local_408 < pFVar1 + param_2->ArrayMax)) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar18)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar19 = param_2->ArrayNum;
    if (iVar19 == param_2->ArrayMax) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x840,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar19 + 1;
    pFVar20 = (param_2->AllocatorInstance).Data;
    lVar21 = (longlong)iVar19 * 0x40;
    local_4e0._padding_ = (longlong)param_5;
    local_4e0.Torque = 0.0;
    local_4e0.MinimumTorque = 0.0;
    *(longlong *)(pFVar20 + lVar21) = local_408._padding_;
    *(longlong *)(pFVar20 + lVar21 + 8) = local_408._padding_;
    local_4e0.MaximumTorque = 3.4028235e+38;
    *(ulonglong *)(pFVar20 + lVar21 + 0x10) =
         CONCAT44(local_408.WorldSpaceAxis.field0_0x0._4_4_,
                  local_408.WorldSpaceAxis.field0_0x0._0_4_);
    *(ulonglong *)(pFVar20 + lVar21 + 0x10 + 8) =
         CONCAT44(local_408.WorldSpaceAxis.field0_0x0._12_4_,
                  local_408.WorldSpaceAxis.field0_0x0._8_4_);
    *(double *)(pFVar20 + lVar21 + 0x20) = local_408.WorldSpaceAxis.field0_0x0._s_0.Z;
    *(ulonglong *)(pFVar20 + lVar21 + 0x20 + 8) = CONCAT44(local_408.TargetSpin,local_408.Torque);
    local_4e0.WorldSpaceAxis.field0_0x0._s_0.X = (double)CONCAT44(uVar50 ^ uVar40,uVar49 ^ uVar39);
    local_4e0.WorldSpaceAxis.field0_0x0._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)local_528 >> 0x20) ^ uVar40,SUB84(local_528,0) ^ uVar39)
    ;
    local_4e0.WorldSpaceAxis.field0_0x0._s_0.Y = (double)CONCAT44(uVar52 ^ uVar40,uVar51 ^ uVar39);
    *(ulonglong *)(pFVar20 + lVar21 + 0x30) =
         CONCAT44(local_408.MaximumTorque,local_408.MinimumTorque);
    *(undefined8 *)(pFVar20 + lVar21 + 0x30 + 8) = local_408._56_8_;
    local_4e0._padding_ = (longlong)param_3;
    local_4e0.TargetSpin = ((fVar58 - fVar43) + (fVar58 - fVar43)) * fVar44;
    FAnimPhysAngularLimit::UpdateCachedData(&local_4e0);
    pFVar1 = (FAnimPhysAngularLimit *)(param_2->AllocatorInstance).Data;
    if (((pFVar1 <= &local_4e0) && (&local_4e0 < pFVar1 + param_2->ArrayMax)) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar18)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar19 = param_2->ArrayNum;
    if (iVar19 == param_2->ArrayMax) {
      iVar19 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x840,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar19 + 1;
    pFVar20 = (param_2->AllocatorInstance).Data;
    lVar21 = (longlong)iVar19 * 0x40;
    *(longlong *)(pFVar20 + lVar21) = local_4e0._padding_;
    *(longlong *)(pFVar20 + lVar21 + 8) = local_4e0._padding_;
    *(double *)(pFVar20 + lVar21 + 0x10) = local_4e0.WorldSpaceAxis.field0_0x0._s_0.X;
    *(double *)(pFVar20 + lVar21 + 0x10 + 8) = local_4e0.WorldSpaceAxis.field0_0x0._s_0.Y;
    *(double *)(pFVar20 + lVar21 + 0x20) = local_4e0.WorldSpaceAxis.field0_0x0._s_0.Z;
    *(ulonglong *)(pFVar20 + lVar21 + 0x20 + 8) = CONCAT44(local_4e0.TargetSpin,local_4e0.Torque);
    fVar41 = local_4e0.MinimumTorque;
    fVar43 = local_4e0.MaximumTorque;
    local_448.CachedSpinToTorque = local_4e0.CachedSpinToTorque;
    local_448._60_4_ = local_4e0._60_4_;
  }
  pFVar20 = pFVar20 + lVar21 + 0x30;
  *(float *)pFVar20 = fVar41;
  *(float *)(pFVar20 + 4) = fVar43;
  *(float *)(pFVar20 + 8) = local_448.CachedSpinToTorque;
  *(undefined4 *)(pFVar20 + 0xc) = local_448._60_4_;
LAB_1474c6df8:
  local_3c8._padding_ = (longlong)param_5;
  local_3c8.Torque = 0.0;
  local_3c8.WorldSpaceAxis.field0_0x0._s_0.X = (double)local_598._0_8_;
  local_3c8.WorldSpaceAxis.field0_0x0._s_0.Y = (double)local_598._8_8_;
  local_3c8.MinimumTorque = -3.4028235e+38;
  local_3c8.TargetSpin = (param_10 * __real_c0000000 * _param_7) / param_1;
  local_3c8.MaximumTorque = 3.4028235e+38;
  local_3c8.WorldSpaceAxis.field0_0x0._s_0.Z = (double)param_6;
  local_3c8._padding_ = (longlong)param_3;
  FAnimPhysAngularLimit::UpdateCachedData(&local_3c8);
  pFVar1 = (FAnimPhysAngularLimit *)(param_2->AllocatorInstance).Data;
  if (((pFVar1 <= &local_3c8) && (&local_3c8 < pFVar1 + param_2->ArrayMax)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar18)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar19 = param_2->ArrayNum;
  if (iVar19 == param_2->ArrayMax) {
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x840,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar19 + 1;
  pFVar20 = (param_2->AllocatorInstance).Data;
  lVar21 = (longlong)iVar19 * 0x40;
  *(longlong *)(pFVar20 + lVar21) = local_3c8._padding_;
  *(longlong *)(pFVar20 + lVar21 + 8) = local_3c8._padding_;
  *(double *)(pFVar20 + lVar21 + 0x10) = local_3c8.WorldSpaceAxis.field0_0x0._s_0.X;
  *(double *)(pFVar20 + lVar21 + 0x10 + 8) = local_3c8.WorldSpaceAxis.field0_0x0._s_0.Y;
  *(double *)(pFVar20 + lVar21 + 0x20) = local_3c8.WorldSpaceAxis.field0_0x0._s_0.Z;
  *(ulonglong *)(pFVar20 + lVar21 + 0x20 + 8) = CONCAT44(local_3c8.TargetSpin,local_3c8.Torque);
  *(ulonglong *)(pFVar20 + lVar21 + 0x30) =
       CONCAT44(local_3c8.MaximumTorque,local_3c8.MinimumTorque);
  *(undefined8 *)(pFVar20 + lVar21 + 0x30 + 8) = local_3c8._56_8_;
  return;
}

// ConstrainConeAngle @ 1474c6f90

void __cdecl
FAnimPhys::ConstrainConeAngle
          (float param_1,TArray<FAnimPhysAngularLimit,TSizedDefaultAllocator<32>_> *param_2,
          FAnimPhysRigidBody *param_3,TVector<double> *param_4,FAnimPhysRigidBody *param_5,
          TVector<double> *param_6,float param_7,float param_8)

{
  double dVar1;
  FAnimPhysAngularLimit *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  TVector<double>_u_0 *pTVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  FAnimPhysAngularLimit local_1a8;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_108;
  TVector<double> local_e8;
  double local_c0;
  
  if ((param_5 == (FAnimPhysRigidBody *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SecondBody",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimPhysicsSolver.cpp"
                         ,0x2fc,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  dVar1 = (param_4->field0_0x0)._s_0.Z;
  dVar16 = (param_4->field0_0x0)._s_0.X;
  dVar5 = (param_4->field0_0x0)._s_0.Y;
  if (param_3 == (FAnimPhysRigidBody *)0x0) {
    local_128._s_0.X = dVar16;
    local_128._s_0.Y = dVar5;
    pTVar11 = &local_128;
    local_128._s_0.Z = dVar1;
  }
  else {
    local_148._s_0.X = dVar16;
    local_148._s_0.Y = dVar5;
    local_148._s_0.Z = dVar1;
    pTVar11 = &UE::Math::TQuat<double>::RotateVector
                         ((TQuat<double> *)&param_3->_padding_,&local_e8,
                          (TVector<double> *)&local_148._s_0)->field0_0x0;
  }
  dVar7 = (((TVector<double>_u_0 *)&(pTVar11->_s_0).X)->_s_0).X;
  dVar8 = (pTVar11->_s_0).Y;
  dVar1 = (pTVar11->_s_0).Z;
  local_108._s_0.X = (param_6->field0_0x0)._s_0.X;
  local_108._s_0.Y = (param_6->field0_0x0)._s_0.Y;
  local_108._s_0.Z = (param_6->field0_0x0)._s_0.Z;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)&param_5->_padding_,(TVector<double> *)&local_168._s_0,
             (TVector<double> *)&local_108._s_0);
  dVar16 = dVar1 * local_168._s_0.Y - local_168._s_0.Z * dVar8;
  dVar5 = local_168._s_0.Z * dVar7 - dVar1 * local_168._s_0.X;
  dVar6 = local_168._s_0.X * dVar8 - local_168._s_0.Y * dVar7;
  dVar15 = dVar5 * dVar5 + dVar16 * dVar16 + dVar6 * dVar6;
  local_1a8.WorldSpaceAxis.field0_0x0._s_0.X = dVar16;
  local_1a8.WorldSpaceAxis.field0_0x0._s_0.Y = dVar5;
  local_1a8.WorldSpaceAxis.field0_0x0._s_0.Z = dVar6;
  if ((dVar15 != __real_3ff0000000000000) &&
     (local_1a8.WorldSpaceAxis.field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     local_1a8.WorldSpaceAxis.field0_0x0._s_0.Y =
          UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     local_1a8.WorldSpaceAxis.field0_0x0._s_0.Z =
          UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z, __real_3e45798ee0000000 <= dVar15
     )) {
    dVar15 = __real_3ff0000000000000 / SQRT(dVar15);
    local_1a8.WorldSpaceAxis.field0_0x0._s_0.X = dVar16 * dVar15;
    local_1a8.WorldSpaceAxis.field0_0x0._s_0.Y = dVar5 * dVar15;
    local_1a8.WorldSpaceAxis.field0_0x0._s_0.Z = dVar6 * dVar15;
  }
  dVar16 = dVar8 * local_168._s_0.Y + local_168._s_0.X * dVar7 + local_168._s_0.Z * dVar1;
  if (__real_3ff0000000000000 <= dVar16) {
    dVar16 = __real_3ff0000000000000;
  }
  if (dVar16 <= 0.0) {
    dVar16 = 0.0;
  }
  uVar13 = SUB84(__real_bff0000000000000,0);
  uVar14 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  if (__real_bff0000000000000 <= dVar16) {
    if (__real_3ff0000000000000 <= dVar16) {
      dVar16 = __real_3ff0000000000000;
    }
    uVar13 = SUB84(dVar16,0);
    uVar14 = (undefined4)((ulonglong)dVar16 >> 0x20);
  }
  local_c0 = dVar1;
  if (param_7 != 0.0) {
    dVar1 = acos((double)CONCAT44(uVar14,uVar13));
    param_8 = ((float)dVar1 - param_7 * __real_3c8efa35) / param_1;
  }
  local_1a8.MinimumTorque = 0.0;
  if (param_7 <= 0.0) {
    local_1a8.MinimumTorque = __real_ff7fffff;
  }
  local_1a8._padding_ = (longlong)param_5;
  local_1a8.Torque = 0.0;
  local_1a8.MaximumTorque = 3.4028235e+38;
  local_1a8._padding_ = (longlong)param_3;
  local_1a8.TargetSpin = param_8;
  FAnimPhysAngularLimit::UpdateCachedData(&local_1a8);
  pFVar2 = (FAnimPhysAngularLimit *)(param_2->AllocatorInstance).Data;
  if (((pFVar2 <= &local_1a8) && (&local_1a8 < pFVar2 + param_2->ArrayMax)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar10 = param_2->ArrayNum;
  if (iVar10 == param_2->ArrayMax) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x840,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar10 + 1;
  pFVar3 = (param_2->AllocatorInstance).Data;
  lVar12 = (longlong)iVar10 * 0x40;
  *(longlong *)(pFVar3 + lVar12) = local_1a8._padding_;
  *(longlong *)(pFVar3 + lVar12 + 8) = local_1a8._padding_;
  *(double *)(pFVar3 + lVar12 + 0x10) = local_1a8.WorldSpaceAxis.field0_0x0._s_0.X;
  *(double *)(pFVar3 + lVar12 + 0x10 + 8) = local_1a8.WorldSpaceAxis.field0_0x0._s_0.Y;
  *(double *)(pFVar3 + lVar12 + 0x20) = local_1a8.WorldSpaceAxis.field0_0x0._s_0.Z;
  *(ulonglong *)(pFVar3 + lVar12 + 0x20 + 8) = CONCAT44(local_1a8.TargetSpin,local_1a8.Torque);
  *(ulonglong *)(pFVar3 + lVar12 + 0x30) = CONCAT44(local_1a8.MaximumTorque,local_1a8.MinimumTorque)
  ;
  *(undefined8 *)(pFVar3 + lVar12 + 0x30 + 8) = local_1a8._56_8_;
  return;
}

// ConstrainPlanar @ 1474c7360

void __cdecl
FAnimPhys::ConstrainPlanar
          (float param_1,TArray<FAnimPhysLinearLimit,TSizedDefaultAllocator<32>_> *param_2,
          FAnimPhysRigidBody *param_3,TTransform<double> *param_4)

{
  FAnimPhysLinearLimit *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 uVar21;
  FAnimPhysLinearLimit local_158;
  undefined1 local_b8 [16];
  double local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  undefined1 local_80 [16];
  double local_70;
  
  auVar18 = *(undefined1 (*) [16])(param_4->Rotation).ZW.m128d_f64;
  dVar7 = (param_4->Rotation).ZW.m128d_f64[1];
  auVar11 = *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64;
  dVar4 = auVar18._0_8_;
  auVar13 = blendpd(auVar11,auVar18,2);
  auVar19._0_8_ = auVar11._0_8_ * 0.0 - auVar11._8_8_ * 0.0;
  auVar19._8_8_ = __real_3ff0000000000000 * auVar11._8_8_ - dVar4 * 0.0;
  local_88 = __real_3ff0000000000000;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = __real_3ff0000000000000;
  auVar11 = blendpd(ZEXT816(0),auVar11,2);
  auVar14._0_8_ = auVar11._0_8_ * dVar4 - auVar13._0_8_ * __real_3ff0000000000000;
  auVar14._8_8_ = auVar11._8_8_ * auVar18._8_8_ - auVar13._8_8_ * 0.0;
  auVar11 = *(undefined1 (*) [16])(param_4->Rotation).XY.m128d_f64;
  auVar13 = blendpd(auVar19,auVar14,2);
  dVar3 = auVar19._8_8_ + auVar19._8_8_;
  dVar12 = auVar14._0_8_ + auVar14._0_8_;
  uVar21 = (undefined4)((ulonglong)dVar12 >> 0x20);
  auVar20._0_8_ = auVar13._0_8_ + auVar13._0_8_;
  auVar20._8_8_ = auVar13._8_8_ + auVar13._8_8_;
  auVar16._8_4_ = SUB84(dVar12,0);
  auVar16._0_8_ = dVar3;
  auVar16._12_4_ = uVar21;
  auVar13._8_4_ = SUB84(dVar12,0);
  auVar13._0_8_ = dVar3;
  auVar13._12_4_ = uVar21;
  auVar14 = blendpd(auVar11,auVar18,2);
  auVar17._0_8_ = auVar16._8_8_ * auVar11._0_8_ - auVar11._8_8_ * dVar3;
  auVar17._8_8_ = auVar20._0_8_ * auVar11._8_8_ - dVar4 * dVar12;
  auVar11 = blendpd(auVar13,auVar20,2);
  auVar15._0_8_ = auVar11._0_8_ * dVar4 - auVar14._0_8_ * auVar20._0_8_;
  auVar15._8_8_ = auVar11._8_8_ * auVar18._8_8_ - auVar14._8_8_ * auVar20._8_8_;
  auVar18._8_4_ = SUB84(auVar17._8_8_,0);
  auVar18._0_8_ = auVar17._0_8_;
  auVar18._12_4_ = (int)((ulonglong)auVar17._8_8_ >> 0x20);
  dVar4 = dVar3 * dVar7 + auVar18._8_8_;
  dVar3 = dVar12 * dVar7 + auVar15._0_8_;
  auVar18 = blendpd(auVar17,auVar15,2);
  local_b8 = *(undefined1 (*) [16])(param_4->Translation).XY.m128d_f64;
  local_98 = 0;
  uStack_90 = 0;
  local_70 = dVar7 * auVar20._0_8_ + __real_3ff0000000000000 + auVar18._0_8_;
  local_a8 = (param_4->Translation).ZW.m128d_f64[0];
  local_80._8_4_ = SUB84(dVar3,0);
  local_80._0_8_ = dVar4;
  local_80._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_158.TargetSpeed =
       (float)((dVar3 * (double)param_3->_padding_ + dVar4 * (double)param_3->_padding_ +
               local_70 * (double)param_3->_padding_) -
              ((param_4->Translation).XY.m128d_f64[1] * dVar3 +
               (param_4->Translation).XY.m128d_f64[0] * dVar4 + local_a8 * local_70));
  if (param_3->CollisionType != CoM) {
    local_158.TargetSpeed = local_158.TargetSpeed - param_3->SphereCollisionRadius;
  }
  local_158.FirstPosition.field0_0x0._s_0.Z = (param_4->Translation).ZW.m128d_f64[0];
  local_158.FirstPosition.field0_0x0._s_0.X = (param_4->Translation).XY.m128d_f64[0];
  local_158.FirstPosition.field0_0x0._s_0.Y = (param_4->Translation).XY.m128d_f64[1];
  local_158.TargetSpeed = local_158.TargetSpeed / param_1;
  dVar12 = dVar3 * dVar3 + dVar4 * dVar4 + local_70 * local_70;
  local_158.LimitNormal.field0_0x0._s_0.Z = local_70;
  uVar5 = dVar4;
  uVar6 = dVar3;
  if ((dVar12 != __real_3ff0000000000000) &&
     (local_158.LimitNormal.field0_0x0._16_8_ =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_,
     __real_3e45798ee0000000 <= dVar12)) {
    dVar12 = __real_3ff0000000000000 / SQRT(dVar12);
    local_158.LimitNormal.field0_0x0._s_0.Z = dVar12 * local_70;
    uVar5 = dVar4 * dVar12;
    uVar6 = dVar12 * dVar3;
  }
  local_158._padding_ = 0;
  local_158.MinimumForce = 0.0;
  local_158.SecondPosition.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_158.SecondPosition.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_158.Maximumforce = 3.4028235e+38;
  local_158.SumImpulses = 0.0;
  local_158.SecondPosition.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_158.LimitNormal.field0_0x0._8_4_ = (int)uVar6;
  local_158.LimitNormal.field0_0x0._s_0.X = (double)uVar5;
  local_158.LimitNormal.field0_0x0._12_4_ = (int)((ulonglong)uVar6 >> 0x20);
  local_158._padding_ = (longlong)param_3;
  local_158.TargetSpeedWithoutBias = local_158.TargetSpeed;
  FAnimPhysLinearLimit::UpdateCachedData(&local_158);
  pFVar1 = (FAnimPhysLinearLimit *)(param_2->AllocatorInstance).Data;
  if (((pFVar1 <= &local_158) && (&local_158 < pFVar1 + param_2->ArrayMax)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar9 = param_2->ArrayNum;
  if (iVar9 == param_2->ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8a0,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar9 + 1;
  pFVar10 = (param_2->AllocatorInstance).Data + (longlong)iVar9 * 0xa0;
  *(longlong *)pFVar10 = local_158._padding_;
  *(longlong *)(pFVar10 + 8) = local_158._padding_;
  *(double *)(pFVar10 + 0x10) = local_158.FirstPosition.field0_0x0._s_0.X;
  *(double *)(pFVar10 + 0x18) = local_158.FirstPosition.field0_0x0._s_0.Y;
  *(double *)(pFVar10 + 0x20) = local_158.FirstPosition.field0_0x0._s_0.Z;
  *(double *)(pFVar10 + 0x28) = local_158.SecondPosition.field0_0x0._s_0.X;
  *(double *)(pFVar10 + 0x30) = local_158.SecondPosition.field0_0x0._s_0.Y;
  *(double *)(pFVar10 + 0x38) = local_158.SecondPosition.field0_0x0._s_0.Z;
  *(double *)(pFVar10 + 0x40) = local_158.LimitNormal.field0_0x0._s_0.X;
  *(double *)(pFVar10 + 0x48) = local_158.LimitNormal.field0_0x0._s_0.Y;
  *(double *)(pFVar10 + 0x50) = local_158.LimitNormal.field0_0x0._s_0.Z;
  *(ulonglong *)(pFVar10 + 0x58) = CONCAT44(local_158.TargetSpeedWithoutBias,local_158.TargetSpeed);
  *(ulonglong *)(pFVar10 + 0x60) = CONCAT44(local_158.Maximumforce,local_158.MinimumForce);
  *(ulonglong *)(pFVar10 + 0x68) = CONCAT44(local_158.InverseInertiaImpulse,local_158.SumImpulses);
  *(double *)(pFVar10 + 0x70) = local_158.WorldSpacePosition0.field0_0x0._s_0.X;
  *(double *)(pFVar10 + 0x78) = local_158.WorldSpacePosition0.field0_0x0._s_0.Y;
  *(double *)(pFVar10 + 0x80) = local_158.WorldSpacePosition0.field0_0x0._s_0.Z;
  *(double *)(pFVar10 + 0x88) = local_158.WorldSpacePosition1.field0_0x0._s_0.X;
  *(double *)(pFVar10 + 0x90) = local_158.WorldSpacePosition1.field0_0x0._s_0.Y;
  *(double *)(pFVar10 + 0x98) = local_158.WorldSpacePosition1.field0_0x0._s_0.Z;
  return;
}

// ConstrainPositionNailed @ 1474c7740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FAnimPhys::ConstrainPositionNailed
          (float param_1,TArray<FAnimPhysLinearLimit,TSizedDefaultAllocator<32>_> *param_2,
          FAnimPhysRigidBody *param_3,TVector<double> *param_4,FAnimPhysRigidBody *param_5,
          TVector<double> *param_6)

{
  FAnimPhysLinearLimit *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  TVector<double>_u_0 local_2c8;
  TVector<double>_u_0 local_2a8;
  TVector<double>_u_0 local_290;
  TVector<double>_u_0 local_278;
  FAnimPhysLinearLimit local_258;
  FAnimPhysLinearLimit local_1b8;
  FAnimPhysLinearLimit local_118;
  
  if (param_3 == (FAnimPhysRigidBody *)0x0) {
    dVar13 = (param_4->field0_0x0)._s_0.X;
    dVar3 = (param_4->field0_0x0)._s_0.Y;
    dVar5 = (param_4->field0_0x0)._s_0.Z;
  }
  else {
    local_278._s_0.X = (param_4->field0_0x0)._s_0.X;
    local_278._s_0.Y = (param_4->field0_0x0)._s_0.Y;
    local_278._s_0.Z = (param_4->field0_0x0)._s_0.Z;
    UE::Math::TQuat<double>::RotateVector
              ((TQuat<double> *)&param_3->_padding_,(TVector<double> *)&local_2a8._s_0,
               (TVector<double> *)&local_278._s_0);
    dVar13 = local_2a8._s_0.X + (double)param_3->_padding_;
    dVar3 = local_2a8._s_0.Y + (double)param_3->_padding_;
    dVar5 = local_2a8._s_0.Z + (double)param_3->_padding_;
  }
  if (param_5 == (FAnimPhysRigidBody *)0x0) {
    dVar12 = (param_6->field0_0x0)._s_0.X;
    dVar4 = (param_6->field0_0x0)._s_0.Y;
    dVar6 = (param_6->field0_0x0)._s_0.Z;
    local_2c8._s_0.Z = dVar6;
  }
  else {
    local_2c8._s_0.X = (param_6->field0_0x0)._s_0.X;
    local_2c8._s_0.Y = (param_6->field0_0x0)._s_0.Y;
    local_2c8._s_0.Z = (param_6->field0_0x0)._s_0.Z;
    UE::Math::TQuat<double>::RotateVector
              ((TQuat<double> *)&param_5->_padding_,(TVector<double> *)&local_290._s_0,
               (TVector<double> *)&local_2c8._s_0);
    dVar12 = local_290._s_0.X + (double)param_5->_padding_;
    dVar4 = local_290._s_0.Y + (double)param_5->_padding_;
    dVar6 = local_290._s_0.Z + (double)param_5->_padding_;
  }
  uVar15 = _UNK_1516e66d8;
  uVar14 = ___xmm_000000007f7fffffff7fffff00000000;
  dVar7 = __real_3ff0000000000000;
  local_258.FirstPosition.field0_0x0._s_0.Z = (param_4->field0_0x0)._s_0.Z;
  local_258.SecondPosition.field0_0x0._s_0.Z = (param_6->field0_0x0)._s_0.Z;
  local_258._padding_ = (longlong)param_5;
  local_258.LimitNormal.field0_0x0._s_0.Z = 0.0;
  dVar11 = __real_3ff0000000000000 / (double)param_1;
  local_258.FirstPosition.field0_0x0._s_0.X = (param_4->field0_0x0)._s_0.X;
  local_258.FirstPosition.field0_0x0._s_0.Y = (param_4->field0_0x0)._s_0.Y;
  local_258.SecondPosition.field0_0x0._s_0.X = (param_6->field0_0x0)._s_0.X;
  local_258.SecondPosition.field0_0x0._s_0.Y = (param_6->field0_0x0)._s_0.Y;
  local_258.LimitNormal.field0_0x0._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_258.LimitNormal.field0_0x0._s_0.Y = _UNK_150689518;
  local_258.TargetSpeed = (float)((dVar12 - dVar13) * dVar11);
  local_258.TargetSpeedWithoutBias = (float)___xmm_000000007f7fffffff7fffff00000000;
  local_258.MinimumForce = (float)((ulonglong)___xmm_000000007f7fffffff7fffff00000000 >> 0x20);
  local_258.Maximumforce = (float)_UNK_1516e66d8;
  local_258.SumImpulses = (float)((ulonglong)_UNK_1516e66d8 >> 0x20);
  local_258._padding_ = (longlong)param_3;
  FAnimPhysLinearLimit::UpdateCachedData(&local_258);
  pFVar1 = (FAnimPhysLinearLimit *)(param_2->AllocatorInstance).Data;
  if (((pFVar1 <= &local_258) && (&local_258 < pFVar1 + param_2->ArrayMax)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), uVar14 = ___xmm_000000007f7fffffff7fffff00000000, uVar15 = _UNK_1516e66d8
     , bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar9 = param_2->ArrayNum;
  if (iVar9 == param_2->ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8a0,&param_2->AllocatorInstance,&param_2->ArrayMax);
    uVar14 = ___xmm_000000007f7fffffff7fffff00000000;
    uVar15 = _UNK_1516e66d8;
  }
  local_1b8.LimitNormal.field0_0x0._s_0.Z = 0.0;
  param_2->ArrayNum = iVar9 + 1;
  local_1b8._padding_ = (longlong)param_5;
  local_1b8.TargetSpeedWithoutBias = (float)uVar14;
  local_1b8.MinimumForce = (float)((ulonglong)uVar14 >> 0x20);
  local_1b8.Maximumforce = (float)uVar15;
  local_1b8.SumImpulses = (float)((ulonglong)uVar15 >> 0x20);
  pFVar10 = (param_2->AllocatorInstance).Data + (longlong)iVar9 * 0xa0;
  *(longlong *)pFVar10 = local_258._padding_;
  *(longlong *)(pFVar10 + 8) = local_258._padding_;
  *(double *)(pFVar10 + 0x10) = local_258.FirstPosition.field0_0x0._s_0.X;
  *(double *)(pFVar10 + 0x18) = local_258.FirstPosition.field0_0x0._s_0.Y;
  *(double *)(pFVar10 + 0x20) = local_258.FirstPosition.field0_0x0._s_0.Z;
  *(double *)(pFVar10 + 0x28) = local_258.SecondPosition.field0_0x0._s_0.X;
  *(double *)(pFVar10 + 0x30) = local_258.SecondPosition.field0_0x0._s_0.Y;
  *(double *)(pFVar10 + 0x38) = local_258.SecondPosition.field0_0x0._s_0.Z;
  *(double *)(pFVar10 + 0x40) = local_258.LimitNormal.field0_0x0._s_0.X;
  *(double *)(pFVar10 + 0x48) = local_258.LimitNormal.field0_0x0._s_0.Y;
  *(double *)(pFVar10 + 0x50) = local_258.LimitNormal.field0_0x0._s_0.Z;
  *(ulonglong *)(pFVar10 + 0x58) = CONCAT44(local_258.TargetSpeedWithoutBias,local_258.TargetSpeed);
  *(ulonglong *)(pFVar10 + 0x60) = CONCAT44(local_258.Maximumforce,local_258.MinimumForce);
  *(ulonglong *)(pFVar10 + 0x68) = CONCAT44(local_258.InverseInertiaImpulse,local_258.SumImpulses);
  *(double *)(pFVar10 + 0x70) = local_258.WorldSpacePosition0.field0_0x0._s_0.X;
  *(double *)(pFVar10 + 0x78) = local_258.WorldSpacePosition0.field0_0x0._s_0.Y;
  *(double *)(pFVar10 + 0x80) = local_258.WorldSpacePosition0.field0_0x0._s_0.Z;
  *(double *)(pFVar10 + 0x88) = local_258.WorldSpacePosition1.field0_0x0._s_0.X;
  *(double *)(pFVar10 + 0x90) = local_258.WorldSpacePosition1.field0_0x0._s_0.Y;
  *(double *)(pFVar10 + 0x98) = local_258.WorldSpacePosition1.field0_0x0._s_0.Z;
  local_1b8.FirstPosition.field0_0x0._s_0.X = (param_4->field0_0x0)._s_0.X;
  local_1b8.FirstPosition.field0_0x0._s_0.Y = (param_4->field0_0x0)._s_0.Y;
  local_1b8.FirstPosition.field0_0x0._s_0.Z = (param_4->field0_0x0)._s_0.Z;
  local_1b8.SecondPosition.field0_0x0._s_0.X = (param_6->field0_0x0)._s_0.X;
  local_1b8.SecondPosition.field0_0x0._s_0.Y = (param_6->field0_0x0)._s_0.Y;
  local_1b8.SecondPosition.field0_0x0._s_0.Z = (param_6->field0_0x0)._s_0.Z;
  local_1b8.LimitNormal.field0_0x0._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_1b8.LimitNormal.field0_0x0._s_0.Y = _UNK_15061cbc8;
  local_1b8.TargetSpeed = (float)((dVar4 - dVar3) * dVar11);
  local_1b8._padding_ = (longlong)param_3;
  FAnimPhysLinearLimit::UpdateCachedData(&local_1b8);
  pFVar1 = (FAnimPhysLinearLimit *)(param_2->AllocatorInstance).Data;
  if (((pFVar1 <= &local_1b8) && (&local_1b8 < pFVar1 + param_2->ArrayMax)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar9 = param_2->ArrayNum;
  if (iVar9 == param_2->ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8a0,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  local_118.LimitNormal.field0_0x0._s_0.Z = dVar7;
  param_2->ArrayNum = iVar9 + 1;
  local_118._padding_ = (longlong)param_5;
  pFVar10 = (param_2->AllocatorInstance).Data + (longlong)iVar9 * 0xa0;
  *(longlong *)pFVar10 = local_1b8._padding_;
  *(longlong *)(pFVar10 + 8) = local_1b8._padding_;
  *(double *)(pFVar10 + 0x10) = local_1b8.FirstPosition.field0_0x0._s_0.X;
  *(double *)(pFVar10 + 0x18) = local_1b8.FirstPosition.field0_0x0._s_0.Y;
  *(double *)(pFVar10 + 0x20) = local_1b8.FirstPosition.field0_0x0._s_0.Z;
  *(double *)(pFVar10 + 0x28) = local_1b8.SecondPosition.field0_0x0._s_0.X;
  *(double *)(pFVar10 + 0x30) = local_1b8.SecondPosition.field0_0x0._s_0.Y;
  *(double *)(pFVar10 + 0x38) = local_1b8.SecondPosition.field0_0x0._s_0.Z;
  *(double *)(pFVar10 + 0x40) = local_1b8.LimitNormal.field0_0x0._s_0.X;
  *(double *)(pFVar10 + 0x48) = local_1b8.LimitNormal.field0_0x0._s_0.Y;
  *(double *)(pFVar10 + 0x50) = local_1b8.LimitNormal.field0_0x0._s_0.Z;
  *(ulonglong *)(pFVar10 + 0x58) = CONCAT44(local_1b8.TargetSpeedWithoutBias,local_1b8.TargetSpeed);
  *(ulonglong *)(pFVar10 + 0x60) = CONCAT44(local_1b8.Maximumforce,local_1b8.MinimumForce);
  *(ulonglong *)(pFVar10 + 0x68) = CONCAT44(local_1b8.InverseInertiaImpulse,local_1b8.SumImpulses);
  *(double *)(pFVar10 + 0x70) = local_1b8.WorldSpacePosition0.field0_0x0._s_0.X;
  *(double *)(pFVar10 + 0x78) = local_1b8.WorldSpacePosition0.field0_0x0._s_0.Y;
  *(double *)(pFVar10 + 0x80) = local_1b8.WorldSpacePosition0.field0_0x0._s_0.Z;
  *(double *)(pFVar10 + 0x88) = local_1b8.WorldSpacePosition1.field0_0x0._s_0.X;
  *(double *)(pFVar10 + 0x90) = local_1b8.WorldSpacePosition1.field0_0x0._s_0.Y;
  *(double *)(pFVar10 + 0x98) = local_1b8.WorldSpacePosition1.field0_0x0._s_0.Z;
  local_118.FirstPosition.field0_0x0._s_0.X = (param_4->field0_0x0)._s_0.X;
  local_118.FirstPosition.field0_0x0._s_0.Y = (param_4->field0_0x0)._s_0.Y;
  local_118.FirstPosition.field0_0x0._s_0.Z = (param_4->field0_0x0)._s_0.Z;
  local_118.SecondPosition.field0_0x0._s_0.X = (param_6->field0_0x0)._s_0.X;
  local_118.SecondPosition.field0_0x0._s_0.Y = (param_6->field0_0x0)._s_0.Y;
  local_118.SecondPosition.field0_0x0._s_0.Z = (param_6->field0_0x0)._s_0.Z;
  local_118.LimitNormal.field0_0x0._s_0.X = 0.0;
  local_118.LimitNormal.field0_0x0._s_0.Y = 0.0;
  local_118.TargetSpeed = (float)((dVar6 - dVar5) * dVar11);
  local_118.TargetSpeedWithoutBias = (float)___xmm_000000007f7fffffff7fffff00000000;
  local_118.MinimumForce = (float)((ulonglong)___xmm_000000007f7fffffff7fffff00000000 >> 0x20);
  local_118.Maximumforce = (float)_UNK_1516e66d8;
  local_118.SumImpulses = (float)((ulonglong)_UNK_1516e66d8 >> 0x20);
  local_118._padding_ = (longlong)param_3;
  FAnimPhysLinearLimit::UpdateCachedData(&local_118);
  pFVar1 = (FAnimPhysLinearLimit *)(param_2->AllocatorInstance).Data;
  if (((pFVar1 <= &local_118) && (&local_118 < pFVar1 + param_2->ArrayMax)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar9 = param_2->ArrayNum;
  if (iVar9 == param_2->ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8a0,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar9 + 1;
  pFVar10 = (param_2->AllocatorInstance).Data + (longlong)iVar9 * 0xa0;
  *(longlong *)pFVar10 = local_118._padding_;
  *(longlong *)(pFVar10 + 8) = local_118._padding_;
  *(double *)(pFVar10 + 0x10) = local_118.FirstPosition.field0_0x0._s_0.X;
  *(double *)(pFVar10 + 0x18) = local_118.FirstPosition.field0_0x0._s_0.Y;
  *(double *)(pFVar10 + 0x20) = local_118.FirstPosition.field0_0x0._s_0.Z;
  *(double *)(pFVar10 + 0x28) = local_118.SecondPosition.field0_0x0._s_0.X;
  *(double *)(pFVar10 + 0x30) = local_118.SecondPosition.field0_0x0._s_0.Y;
  *(double *)(pFVar10 + 0x38) = local_118.SecondPosition.field0_0x0._s_0.Z;
  *(double *)(pFVar10 + 0x40) = local_118.LimitNormal.field0_0x0._s_0.X;
  *(double *)(pFVar10 + 0x48) = local_118.LimitNormal.field0_0x0._s_0.Y;
  *(double *)(pFVar10 + 0x50) = local_118.LimitNormal.field0_0x0._s_0.Z;
  *(ulonglong *)(pFVar10 + 0x58) = CONCAT44(local_118.TargetSpeedWithoutBias,local_118.TargetSpeed);
  *(ulonglong *)(pFVar10 + 0x60) = CONCAT44(local_118.Maximumforce,local_118.MinimumForce);
  *(ulonglong *)(pFVar10 + 0x68) = CONCAT44(local_118.InverseInertiaImpulse,local_118.SumImpulses);
  *(double *)(pFVar10 + 0x70) = local_118.WorldSpacePosition0.field0_0x0._s_0.X;
  *(double *)(pFVar10 + 0x78) = local_118.WorldSpacePosition0.field0_0x0._s_0.Y;
  *(double *)(pFVar10 + 0x80) = local_118.WorldSpacePosition0.field0_0x0._s_0.Z;
  *(double *)(pFVar10 + 0x88) = local_118.WorldSpacePosition1.field0_0x0._s_0.X;
  *(double *)(pFVar10 + 0x90) = local_118.WorldSpacePosition1.field0_0x0._s_0.Y;
  *(double *)(pFVar10 + 0x98) = local_118.WorldSpacePosition1.field0_0x0._s_0.Z;
  return;
}

// ConstrainPositionPrismatic @ 1474c7d50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FAnimPhys::ConstrainPositionPrismatic
          (float param_1,TArray<FAnimPhysLinearLimit,TSizedDefaultAllocator<32>_> *param_2,
          FAnimPhysRigidBody *param_3,TVector<double> *param_4,FAnimPhysRigidBody *param_5,
          TVector<double> *param_6,TQuat<double> *param_7,TVector<double> *param_8,
          TVector<double> *param_9)

{
  FAnimPhysLinearLimit *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  int iVar14;
  TVector<double> *pTVar15;
  FScriptContainerElement *pFVar16;
  int *piVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  double dVar24;
  TVector<double>_u_0 local_478;
  double local_460;
  TVector<double>_u_0 local_458;
  TVector<double>_u_0 local_438;
  TVector<double>_u_0 local_420;
  TVector<double>_u_0 local_408;
  TVector<double>_u_0 local_3f0;
  TVector<double>_u_0 local_3d8;
  TVector<double>_u_0 local_3b8;
  TVector<double>_u_0 local_398;
  TVector<double>_u_0 local_378;
  TVector<double>_u_0 local_358;
  TVector<double>_u_0 local_338;
  TVector<double>_u_0 local_318;
  undefined1 local_2f8 [16];
  double local_2e8;
  double dStack_2e0;
  FAnimPhysLinearLimit local_2d8;
  FAnimPhysLinearLimit local_238;
  FAnimPhysLinearLimit local_198;
  TVector<double> local_f8 [8];
  
  if (param_3 == (FAnimPhysRigidBody *)0x0) {
    dVar7 = (param_4->field0_0x0)._s_0.X;
    dVar6 = (param_4->field0_0x0)._s_0.Y;
    dVar9 = (param_4->field0_0x0)._s_0.Z;
    local_458._s_0.Z = dVar9;
  }
  else {
    local_398._s_0.X = (param_4->field0_0x0)._s_0.X;
    local_398._s_0.Y = (param_4->field0_0x0)._s_0.Y;
    local_398._s_0.Z = (param_4->field0_0x0)._s_0.Z;
    UE::Math::TQuat<double>::RotateVector
              ((TQuat<double> *)&param_3->_padding_,(TVector<double> *)&local_438._s_0,
               (TVector<double> *)&local_398._s_0);
    dVar7 = local_438._s_0.X + (double)param_3->_padding_;
    dVar6 = local_438._s_0.Y + (double)param_3->_padding_;
    dVar9 = local_438._s_0.Z + (double)param_3->_padding_;
  }
  if (param_5 == (FAnimPhysRigidBody *)0x0) {
    dVar4 = (param_6->field0_0x0)._s_0.X;
    dVar5 = (param_6->field0_0x0)._s_0.Y;
    dVar8 = (param_6->field0_0x0)._s_0.Z;
    local_458._s_0.Z = dVar8;
  }
  else {
    local_378._s_0.X = (param_6->field0_0x0)._s_0.X;
    local_378._s_0.Y = (param_6->field0_0x0)._s_0.Y;
    local_378._s_0.Z = (param_6->field0_0x0)._s_0.Z;
    UE::Math::TQuat<double>::RotateVector
              ((TQuat<double> *)&param_5->_padding_,(TVector<double> *)&local_420._s_0,
               (TVector<double> *)&local_378._s_0);
    dVar4 = local_420._s_0.X + (double)param_5->_padding_;
    dVar5 = local_420._s_0.Y + (double)param_5->_padding_;
    dVar8 = local_420._s_0.Z + (double)param_5->_padding_;
  }
  local_358._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_358._s_0.Y = _UNK_150689518;
  local_358._s_0.Z = 0.0;
  dVar3 = dVar4 - dVar7;
  dVar24 = dVar5 - dVar6;
  dVar21 = dVar8 - dVar9;
  UE::Math::TQuat<double>::RotateVector
            (param_7,(TVector<double> *)&local_408._s_0,(TVector<double> *)&local_358._s_0);
  local_338._s_0.X = ___xmm_3ff00000000000000000000000000000;
  local_338._s_0.Y = _UNK_15061cbc8;
  local_338._s_0.Z = 0.0;
  UE::Math::TQuat<double>::RotateVector
            (param_7,(TVector<double> *)&local_3f0._s_0,(TVector<double> *)&local_338._s_0);
  local_318._s_0.X = 0.0;
  local_318._s_0.Y = 0.0;
  local_460 = __real_3ff0000000000000;
  local_318._s_0.Z = __real_3ff0000000000000;
  UE::Math::TQuat<double>::RotateVector
            (param_7,(TVector<double> *)&local_3d8._s_0,(TVector<double> *)&local_318._s_0);
  dVar19 = dVar24 * local_408._s_0.Y + dVar3 * local_408._s_0.X + dVar21 * local_408._s_0.Z;
  dVar10 = dVar24 * local_3f0._s_0.Y + dVar3 * local_3f0._s_0.X + dVar21 * local_3f0._s_0.Z;
  local_2e8 = param_7->Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dStack_2e0 = param_7->W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar20 = dVar24 * local_3d8._s_0.Y + dVar3 * local_3d8._s_0.X + dVar21 * local_3d8._s_0.Z;
  dVar18 = param_7->Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  local_2f8._8_4_ = SUB84(dVar18,0);
  local_2f8._0_8_ = param_7->X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  local_2f8._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  local_3b8._s_0.X = dVar3;
  local_3b8._s_0.Y = dVar24;
  local_3b8._s_0.Z = dVar21;
  UE::Math::TQuat<double>::RotateVector
            ((TQuat<double> *)local_2f8,(TVector<double> *)&local_478._s_0,
             (TVector<double> *)&local_3b8._s_0);
  dVar18 = (param_8->field0_0x0)._s_0.X;
  if ((dVar19 < dVar18) || (dVar18 = (param_9->field0_0x0)._s_0.X, dVar18 < dVar19)) {
    local_478._s_0.X = dVar18;
  }
  dVar18 = (param_8->field0_0x0)._s_0.Y;
  if ((dVar10 < dVar18) || (dVar18 = (param_9->field0_0x0)._s_0.Y, dVar18 < dVar10)) {
    local_478._s_0.Y = dVar18;
  }
  dVar18 = (param_8->field0_0x0)._s_0.Z;
  if ((dVar20 < dVar18) || (dVar18 = (param_9->field0_0x0)._s_0.Z, dVar18 < dVar20)) {
    local_478._s_0.Z = dVar18;
  }
  local_458._s_0.X = local_478._s_0.X;
  local_458._s_0.Y = local_478._s_0.Y;
  local_458._s_0.Z = local_478._s_0.Z;
  pTVar15 = UE::Math::TQuat<double>::RotateVector
                      (param_7,local_f8,(TVector<double> *)&local_458._s_0);
  dVar3 = local_460;
  uVar23 = _UNK_1516e66d8;
  uVar22 = ___xmm_000000007f7fffffff7fffff00000000;
  uVar12 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar11 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar18 = __real_3e45798ee0000000;
  local_478._s_0.X = dVar7 + (pTVar15->field0_0x0)._s_0.X;
  local_478._s_0.Y = dVar6 + (pTVar15->field0_0x0)._s_0.Y;
  local_478._s_0.Z = dVar9 + (pTVar15->field0_0x0)._s_0.Z;
  if (((__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)(local_478._s_0.X - dVar4) >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_478._s_0.X - dVar4,0) &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (__real_3f1a36e2e0000000 <
       (double)CONCAT44((uint)((ulonglong)(local_478._s_0.Y - dVar5) >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(local_478._s_0.Y - dVar5,0) &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (__real_3f1a36e2e0000000 <
      (double)CONCAT44((uint)((ulonglong)(local_478._s_0.Z - dVar8) >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(local_478._s_0.Z - dVar8,0) &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    dVar9 = local_460 / (double)param_1;
    dVar6 = (dVar4 - local_478._s_0.X) * dVar9;
    dVar7 = (dVar5 - local_478._s_0.Y) * dVar9;
    dVar9 = (dVar8 - local_478._s_0.Z) * dVar9;
    if (__real_3e45798ee0000000 <
        (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      local_2d8.FirstPosition.field0_0x0._s_0.X = (param_4->field0_0x0)._s_0.X;
      local_2d8.FirstPosition.field0_0x0._s_0.Y = (param_4->field0_0x0)._s_0.Y;
      local_2d8.FirstPosition.field0_0x0._s_0.Z = (param_4->field0_0x0)._s_0.Z;
      local_2d8._padding_ = (longlong)param_5;
      local_2d8.SecondPosition.field0_0x0._s_0.X = (param_6->field0_0x0)._s_0.X;
      local_2d8.SecondPosition.field0_0x0._s_0.Y = (param_6->field0_0x0)._s_0.Y;
      local_2d8.SecondPosition.field0_0x0._s_0.Z = (param_6->field0_0x0)._s_0.Z;
      local_2d8.LimitNormal.field0_0x0._s_0.X = ___xmm_00000000000000003ff0000000000000;
      local_2d8.LimitNormal.field0_0x0._s_0.Y = _UNK_150689518;
      local_2d8.LimitNormal.field0_0x0._s_0.Z = 0.0;
      local_2d8.TargetSpeed = (float)dVar6;
      local_2d8.TargetSpeedWithoutBias = (float)___xmm_000000007f7fffffff7fffff00000000;
      local_2d8.MinimumForce = (float)((ulonglong)___xmm_000000007f7fffffff7fffff00000000 >> 0x20);
      local_2d8.Maximumforce = (float)_UNK_1516e66d8;
      local_2d8.SumImpulses = (float)((ulonglong)_UNK_1516e66d8 >> 0x20);
      local_2d8._padding_ = (longlong)param_3;
      FAnimPhysLinearLimit::UpdateCachedData(&local_2d8);
      pFVar1 = (FAnimPhysLinearLimit *)(param_2->AllocatorInstance).Data;
      if (((pFVar1 <= &local_2d8) && (&local_2d8 < pFVar1 + param_2->ArrayMax)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), uVar22 = ___xmm_000000007f7fffffff7fffff00000000,
         uVar23 = _UNK_1516e66d8, bVar13)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar14 = param_2->ArrayNum;
      if (iVar14 == param_2->ArrayMax) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x8a0,&param_2->AllocatorInstance,&param_2->ArrayMax);
        uVar22 = ___xmm_000000007f7fffffff7fffff00000000;
        uVar23 = _UNK_1516e66d8;
      }
      param_2->ArrayNum = iVar14 + 1;
      pFVar16 = (param_2->AllocatorInstance).Data + (longlong)iVar14 * 0xa0;
      *(longlong *)pFVar16 = local_2d8._padding_;
      *(longlong *)(pFVar16 + 8) = local_2d8._padding_;
      *(double *)(pFVar16 + 0x10) = local_2d8.FirstPosition.field0_0x0._s_0.X;
      *(double *)(pFVar16 + 0x18) = local_2d8.FirstPosition.field0_0x0._s_0.Y;
      *(double *)(pFVar16 + 0x20) = local_2d8.FirstPosition.field0_0x0._s_0.Z;
      *(double *)(pFVar16 + 0x28) = local_2d8.SecondPosition.field0_0x0._s_0.X;
      *(double *)(pFVar16 + 0x30) = local_2d8.SecondPosition.field0_0x0._s_0.Y;
      *(double *)(pFVar16 + 0x38) = local_2d8.SecondPosition.field0_0x0._s_0.Z;
      *(double *)(pFVar16 + 0x40) = local_2d8.LimitNormal.field0_0x0._s_0.X;
      *(double *)(pFVar16 + 0x48) = local_2d8.LimitNormal.field0_0x0._s_0.Y;
      *(double *)(pFVar16 + 0x50) = local_2d8.LimitNormal.field0_0x0._s_0.Z;
      *(ulonglong *)(pFVar16 + 0x58) =
           CONCAT44(local_2d8.TargetSpeedWithoutBias,local_2d8.TargetSpeed);
      *(ulonglong *)(pFVar16 + 0x60) = CONCAT44(local_2d8.Maximumforce,local_2d8.MinimumForce);
      *(ulonglong *)(pFVar16 + 0x68) =
           CONCAT44(local_2d8.InverseInertiaImpulse,local_2d8.SumImpulses);
      *(double *)(pFVar16 + 0x70) = local_2d8.WorldSpacePosition0.field0_0x0._s_0.X;
      *(double *)(pFVar16 + 0x78) = local_2d8.WorldSpacePosition0.field0_0x0._s_0.Y;
      *(double *)(pFVar16 + 0x80) = local_2d8.WorldSpacePosition0.field0_0x0._s_0.Z;
      *(double *)(pFVar16 + 0x88) = local_2d8.WorldSpacePosition1.field0_0x0._s_0.X;
      *(double *)(pFVar16 + 0x90) = local_2d8.WorldSpacePosition1.field0_0x0._s_0.Y;
      *(double *)(pFVar16 + 0x98) = local_2d8.WorldSpacePosition1.field0_0x0._s_0.Z;
    }
    piVar17 = &param_2->ArrayMax;
    if (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) & uVar12,SUB84(dVar7,0) & uVar11)
       ) {
      local_238.FirstPosition.field0_0x0._s_0.X = (param_4->field0_0x0)._s_0.X;
      local_238.FirstPosition.field0_0x0._s_0.Y = (param_4->field0_0x0)._s_0.Y;
      local_238.FirstPosition.field0_0x0._s_0.Z = (param_4->field0_0x0)._s_0.Z;
      local_238._padding_ = (longlong)param_5;
      local_238.SecondPosition.field0_0x0._s_0.X = (param_6->field0_0x0)._s_0.X;
      local_238.SecondPosition.field0_0x0._s_0.Y = (param_6->field0_0x0)._s_0.Y;
      local_238.SecondPosition.field0_0x0._s_0.Z = (param_6->field0_0x0)._s_0.Z;
      local_238.LimitNormal.field0_0x0._s_0.X = ___xmm_3ff00000000000000000000000000000;
      local_238.LimitNormal.field0_0x0._s_0.Y = _UNK_15061cbc8;
      local_238.LimitNormal.field0_0x0._s_0.Z = 0.0;
      local_238.TargetSpeed = (float)dVar7;
      local_238.TargetSpeedWithoutBias = (float)uVar22;
      local_238.MinimumForce = (float)((ulonglong)uVar22 >> 0x20);
      local_238.Maximumforce = (float)uVar23;
      local_238.SumImpulses = (float)((ulonglong)uVar23 >> 0x20);
      local_238._padding_ = (longlong)param_3;
      FAnimPhysLinearLimit::UpdateCachedData(&local_238);
      pFVar1 = (FAnimPhysLinearLimit *)(param_2->AllocatorInstance).Data;
      if (((pFVar1 <= &local_238) && (&local_238 < pFVar1 + *piVar17)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar14 = param_2->ArrayNum;
      if (iVar14 == *piVar17) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x8a0,&param_2->AllocatorInstance,piVar17);
      }
      uVar23 = _UNK_1516e66d8;
      uVar22 = ___xmm_000000007f7fffffff7fffff00000000;
      param_2->ArrayNum = iVar14 + 1;
      pFVar16 = (param_2->AllocatorInstance).Data + (longlong)iVar14 * 0xa0;
      *(longlong *)pFVar16 = local_238._padding_;
      *(longlong *)(pFVar16 + 8) = local_238._padding_;
      *(double *)(pFVar16 + 0x10) = local_238.FirstPosition.field0_0x0._s_0.X;
      *(double *)(pFVar16 + 0x18) = local_238.FirstPosition.field0_0x0._s_0.Y;
      *(double *)(pFVar16 + 0x20) = local_238.FirstPosition.field0_0x0._s_0.Z;
      *(double *)(pFVar16 + 0x28) = local_238.SecondPosition.field0_0x0._s_0.X;
      *(double *)(pFVar16 + 0x30) = local_238.SecondPosition.field0_0x0._s_0.Y;
      *(double *)(pFVar16 + 0x38) = local_238.SecondPosition.field0_0x0._s_0.Z;
      *(double *)(pFVar16 + 0x40) = local_238.LimitNormal.field0_0x0._s_0.X;
      *(double *)(pFVar16 + 0x48) = local_238.LimitNormal.field0_0x0._s_0.Y;
      *(double *)(pFVar16 + 0x50) = local_238.LimitNormal.field0_0x0._s_0.Z;
      *(ulonglong *)(pFVar16 + 0x58) =
           CONCAT44(local_238.TargetSpeedWithoutBias,local_238.TargetSpeed);
      *(ulonglong *)(pFVar16 + 0x60) = CONCAT44(local_238.Maximumforce,local_238.MinimumForce);
      *(ulonglong *)(pFVar16 + 0x68) =
           CONCAT44(local_238.InverseInertiaImpulse,local_238.SumImpulses);
      *(double *)(pFVar16 + 0x70) = local_238.WorldSpacePosition0.field0_0x0._s_0.X;
      *(double *)(pFVar16 + 0x78) = local_238.WorldSpacePosition0.field0_0x0._s_0.Y;
      *(double *)(pFVar16 + 0x80) = local_238.WorldSpacePosition0.field0_0x0._s_0.Z;
      *(double *)(pFVar16 + 0x88) = local_238.WorldSpacePosition1.field0_0x0._s_0.X;
      *(double *)(pFVar16 + 0x90) = local_238.WorldSpacePosition1.field0_0x0._s_0.Y;
      *(double *)(pFVar16 + 0x98) = local_238.WorldSpacePosition1.field0_0x0._s_0.Z;
    }
    piVar17 = &param_2->ArrayMax;
    if (dVar18 < (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) & uVar12,SUB84(dVar9,0) & uVar11)
       ) {
      local_198.FirstPosition.field0_0x0._s_0.X = (param_4->field0_0x0)._s_0.X;
      local_198.FirstPosition.field0_0x0._s_0.Y = (param_4->field0_0x0)._s_0.Y;
      local_198.FirstPosition.field0_0x0._s_0.Z = (param_4->field0_0x0)._s_0.Z;
      local_198._padding_ = (longlong)param_5;
      local_198.SecondPosition.field0_0x0._s_0.X = (param_6->field0_0x0)._s_0.X;
      local_198.SecondPosition.field0_0x0._s_0.Y = (param_6->field0_0x0)._s_0.Y;
      local_198.SecondPosition.field0_0x0._s_0.Z = (param_6->field0_0x0)._s_0.Z;
      local_198.LimitNormal.field0_0x0._s_0.Z = dVar3;
      local_198.LimitNormal.field0_0x0._s_0.X = 0.0;
      local_198.LimitNormal.field0_0x0._s_0.Y = 0.0;
      local_198.TargetSpeed = (float)dVar9;
      local_198.TargetSpeedWithoutBias = (float)uVar22;
      local_198.MinimumForce = (float)((ulonglong)uVar22 >> 0x20);
      local_198.Maximumforce = (float)uVar23;
      local_198.SumImpulses = (float)((ulonglong)uVar23 >> 0x20);
      local_198._padding_ = (longlong)param_3;
      FAnimPhysLinearLimit::UpdateCachedData(&local_198);
      pFVar1 = (FAnimPhysLinearLimit *)(param_2->AllocatorInstance).Data;
      if (((pFVar1 <= &local_198) && (&local_198 < pFVar1 + *piVar17)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar14 = param_2->ArrayNum;
      if (iVar14 == *piVar17) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x8a0,&param_2->AllocatorInstance,piVar17);
      }
      param_2->ArrayNum = iVar14 + 1;
      pFVar16 = (param_2->AllocatorInstance).Data + (longlong)iVar14 * 0xa0;
      *(longlong *)pFVar16 = local_198._padding_;
      *(longlong *)(pFVar16 + 8) = local_198._padding_;
      *(double *)(pFVar16 + 0x10) = local_198.FirstPosition.field0_0x0._s_0.X;
      *(double *)(pFVar16 + 0x18) = local_198.FirstPosition.field0_0x0._s_0.Y;
      *(double *)(pFVar16 + 0x20) = local_198.FirstPosition.field0_0x0._s_0.Z;
      *(double *)(pFVar16 + 0x28) = local_198.SecondPosition.field0_0x0._s_0.X;
      *(double *)(pFVar16 + 0x30) = local_198.SecondPosition.field0_0x0._s_0.Y;
      *(double *)(pFVar16 + 0x38) = local_198.SecondPosition.field0_0x0._s_0.Z;
      *(double *)(pFVar16 + 0x40) = local_198.LimitNormal.field0_0x0._s_0.X;
      *(double *)(pFVar16 + 0x48) = local_198.LimitNormal.field0_0x0._s_0.Y;
      *(double *)(pFVar16 + 0x50) = local_198.LimitNormal.field0_0x0._s_0.Z;
      *(ulonglong *)(pFVar16 + 0x58) =
           CONCAT44(local_198.TargetSpeedWithoutBias,local_198.TargetSpeed);
      *(ulonglong *)(pFVar16 + 0x60) = CONCAT44(local_198.Maximumforce,local_198.MinimumForce);
      *(ulonglong *)(pFVar16 + 0x68) =
           CONCAT44(local_198.InverseInertiaImpulse,local_198.SumImpulses);
      *(double *)(pFVar16 + 0x70) = local_198.WorldSpacePosition0.field0_0x0._s_0.X;
      *(double *)(pFVar16 + 0x78) = local_198.WorldSpacePosition0.field0_0x0._s_0.Y;
      *(double *)(pFVar16 + 0x80) = local_198.WorldSpacePosition0.field0_0x0._s_0.Z;
      *(double *)(pFVar16 + 0x88) = local_198.WorldSpacePosition1.field0_0x0._s_0.X;
      *(double *)(pFVar16 + 0x90) = local_198.WorldSpacePosition1.field0_0x0._s_0.Y;
      *(double *)(pFVar16 + 0x98) = local_198.WorldSpacePosition1.field0_0x0._s_0.Z;
    }
  }
  return;
}

// ConstrainSphericalInner @ 1474c86d0

void __cdecl
FAnimPhys::ConstrainSphericalInner
          (float param_1,TArray<FAnimPhysLinearLimit,TSizedDefaultAllocator<32>_> *param_2,
          FAnimPhysRigidBody *param_3,TTransform<double> *param_4,float param_5)

{
  FAnimPhysLinearLimit *pFVar1;
  code *pcVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  FAnimPhysLinearLimit local_120;
  double local_80;
  double dStack_78;
  double local_70;
  
  local_80 = (param_4->Translation).XY.m128d_f64[0];
  dStack_78 = (param_4->Translation).XY.m128d_f64[1];
  dVar11 = (double)param_3->_padding_ - local_80;
  local_70 = (param_4->Translation).ZW.m128d_f64[0];
  dVar3 = (double)param_3->_padding_ - local_70;
  dVar12 = (double)param_3->_padding_ - dStack_78;
  auVar9._0_8_ = dVar3 * dVar3;
  auVar9._8_8_ = 0;
  dVar5 = dVar12 * dVar12 + dVar11 * dVar11 + auVar9._0_8_;
  local_120.LimitNormal.field0_0x0._s_0.X = dVar11;
  local_120.LimitNormal.field0_0x0._s_0.Y = dVar12;
  local_120.LimitNormal.field0_0x0._s_0.Z = dVar3;
  if ((dVar5 != __real_3ff0000000000000) &&
     (local_120.LimitNormal.field0_0x0._0_8_ =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     local_120.LimitNormal.field0_0x0._8_8_ =
          UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     local_120.LimitNormal.field0_0x0._16_8_ =
          UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z, __real_3e45798ee0000000 <= dVar5)
     ) {
    auVar9._0_8_ = SQRT(dVar5);
    auVar9._8_8_ = 0;
    dVar10 = __real_3ff0000000000000 / auVar9._0_8_;
    local_120.LimitNormal.field0_0x0._s_0.X = dVar11 * dVar10;
    local_120.LimitNormal.field0_0x0._s_0.Y = dVar12 * dVar10;
    local_120.LimitNormal.field0_0x0._s_0.Z = dVar3 * dVar10;
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar5;
  auVar9 = sqrtpd(auVar9,auVar4);
  local_120.TargetSpeed = (float)(auVar9._0_8_ - (double)param_5);
  if (param_3->CollisionType != CoM) {
    local_120.TargetSpeed = local_120.TargetSpeed + param_3->SphereCollisionRadius;
  }
  local_120.FirstPosition.field0_0x0._s_0.X = (param_4->Translation).XY.m128d_f64[0];
  local_120.FirstPosition.field0_0x0._s_0.Y = (param_4->Translation).XY.m128d_f64[1];
  local_120.FirstPosition.field0_0x0._s_0.Z = (param_4->Translation).ZW.m128d_f64[0];
  local_120.TargetSpeed = local_120.TargetSpeed / param_1;
  local_120._padding_ = 0;
  local_120.MinimumForce = -3.4028235e+38;
  local_120.Maximumforce = 0.0;
  local_120.SumImpulses = 0.0;
  local_120.SecondPosition.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_120.SecondPosition.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_120.SecondPosition.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_120._padding_ = (longlong)param_3;
  local_120.TargetSpeedWithoutBias = local_120.TargetSpeed;
  FAnimPhysLinearLimit::UpdateCachedData(&local_120);
  pFVar1 = (FAnimPhysLinearLimit *)(param_2->AllocatorInstance).Data;
  if (((pFVar1 <= &local_120) && (&local_120 < pFVar1 + param_2->ArrayMax)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar7 = param_2->ArrayNum;
  if (iVar7 == param_2->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8a0,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar7 + 1;
  pFVar8 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 0xa0;
  *(longlong *)pFVar8 = local_120._padding_;
  *(longlong *)(pFVar8 + 8) = local_120._padding_;
  *(double *)(pFVar8 + 0x10) = local_120.FirstPosition.field0_0x0._s_0.X;
  *(double *)(pFVar8 + 0x18) = local_120.FirstPosition.field0_0x0._s_0.Y;
  *(double *)(pFVar8 + 0x20) = local_120.FirstPosition.field0_0x0._s_0.Z;
  *(double *)(pFVar8 + 0x28) = local_120.SecondPosition.field0_0x0._s_0.X;
  *(double *)(pFVar8 + 0x30) = local_120.SecondPosition.field0_0x0._s_0.Y;
  *(double *)(pFVar8 + 0x38) = local_120.SecondPosition.field0_0x0._s_0.Z;
  *(double *)(pFVar8 + 0x40) = local_120.LimitNormal.field0_0x0._s_0.X;
  *(double *)(pFVar8 + 0x48) = local_120.LimitNormal.field0_0x0._s_0.Y;
  *(double *)(pFVar8 + 0x50) = local_120.LimitNormal.field0_0x0._s_0.Z;
  *(ulonglong *)(pFVar8 + 0x58) = CONCAT44(local_120.TargetSpeedWithoutBias,local_120.TargetSpeed);
  *(ulonglong *)(pFVar8 + 0x60) = CONCAT44(local_120.Maximumforce,local_120.MinimumForce);
  *(ulonglong *)(pFVar8 + 0x68) = CONCAT44(local_120.InverseInertiaImpulse,local_120.SumImpulses);
  *(double *)(pFVar8 + 0x70) = local_120.WorldSpacePosition0.field0_0x0._s_0.X;
  *(double *)(pFVar8 + 0x78) = local_120.WorldSpacePosition0.field0_0x0._s_0.Y;
  *(double *)(pFVar8 + 0x80) = local_120.WorldSpacePosition0.field0_0x0._s_0.Z;
  *(double *)(pFVar8 + 0x88) = local_120.WorldSpacePosition1.field0_0x0._s_0.X;
  *(double *)(pFVar8 + 0x90) = local_120.WorldSpacePosition1.field0_0x0._s_0.Y;
  *(double *)(pFVar8 + 0x98) = local_120.WorldSpacePosition1.field0_0x0._s_0.Z;
  return;
}

// ConstrainSphericalOuter @ 1474c89a0

void __cdecl
FAnimPhys::ConstrainSphericalOuter
          (float param_1,TArray<FAnimPhysLinearLimit,TSizedDefaultAllocator<32>_> *param_2,
          FAnimPhysRigidBody *param_3,TTransform<double> *param_4,float param_5)

{
  FAnimPhysLinearLimit *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double local_138;
  FAnimPhysLinearLimit local_118;
  double local_78;
  double dStack_70;
  double local_68;
  
  local_78 = (param_4->Translation).XY.m128d_f64[0];
  dStack_70 = (param_4->Translation).XY.m128d_f64[1];
  local_68 = (param_4->Translation).ZW.m128d_f64[0];
  dVar9 = (double)param_3->_padding_ - local_78;
  local_118.LimitNormal.field0_0x0._s_0.Y = (double)param_3->_padding_ - dStack_70;
  local_138 = (double)param_3->_padding_ - local_68;
  auVar6._0_8_ = local_138 * local_138;
  auVar6._8_8_ = 0;
  dVar8 = local_118.LimitNormal.field0_0x0._s_0.Y * local_118.LimitNormal.field0_0x0._s_0.Y +
          dVar9 * dVar9 + auVar6._0_8_;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar8;
  auVar7 = sqrtpd(auVar6,auVar7);
  local_118.TargetSpeed = (float)(auVar7._0_8_ - (double)param_5);
  if (param_3->CollisionType != CoM) {
    local_118.TargetSpeed = local_118.TargetSpeed - param_3->SphereCollisionRadius;
  }
  local_118.FirstPosition.field0_0x0._s_0.Z = (param_4->Translation).ZW.m128d_f64[0];
  local_118.FirstPosition.field0_0x0._s_0.X = (param_4->Translation).XY.m128d_f64[0];
  local_118.FirstPosition.field0_0x0._s_0.Y = (param_4->Translation).XY.m128d_f64[1];
  local_118.LimitNormal.field0_0x0._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  local_118.LimitNormal.field0_0x0._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  local_118.TargetSpeed = local_118.TargetSpeed / param_1;
  if (dVar8 != __real_3ff0000000000000) {
    if (dVar8 < __real_3e45798ee0000000) {
      local_138 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_118.LimitNormal.field0_0x0._s_0.Y =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
      goto LAB_1474c8ad5;
    }
    dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
    dVar9 = dVar9 * dVar8;
    local_118.LimitNormal.field0_0x0._s_0.Y = local_118.LimitNormal.field0_0x0._s_0.Y * dVar8;
    local_138 = local_138 * dVar8;
  }
  local_118.LimitNormal.field0_0x0._0_4_ = SUB84(dVar9,0);
  local_118.LimitNormal.field0_0x0._4_4_ = (undefined4)((ulonglong)dVar9 >> 0x20);
LAB_1474c8ad5:
  local_118._padding_ = 0;
  local_118.LimitNormal.field0_0x0._s_0.Z = local_138;
  local_118.SecondPosition.field0_0x0._0_16_ =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
  local_118.MinimumForce = 0.0;
  local_118.SecondPosition.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_118.Maximumforce = 3.4028235e+38;
  local_118.SumImpulses = 0.0;
  local_118._padding_ = (longlong)param_3;
  local_118.TargetSpeedWithoutBias = local_118.TargetSpeed;
  FAnimPhysLinearLimit::UpdateCachedData(&local_118);
  pFVar1 = (FAnimPhysLinearLimit *)(param_2->AllocatorInstance).Data;
  if ((pFVar1 <= &local_118) && (&local_118 < pFVar1 + param_2->ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8a0,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  pFVar5 = (param_2->AllocatorInstance).Data + (longlong)iVar4 * 0xa0;
  *(longlong *)pFVar5 = local_118._padding_;
  *(longlong *)(pFVar5 + 8) = local_118._padding_;
  *(double *)(pFVar5 + 0x10) = local_118.FirstPosition.field0_0x0._s_0.X;
  *(double *)(pFVar5 + 0x18) = local_118.FirstPosition.field0_0x0._s_0.Y;
  *(double *)(pFVar5 + 0x20) = local_118.FirstPosition.field0_0x0._s_0.Z;
  *(double *)(pFVar5 + 0x28) = local_118.SecondPosition.field0_0x0._s_0.X;
  *(double *)(pFVar5 + 0x30) = local_118.SecondPosition.field0_0x0._s_0.Y;
  *(double *)(pFVar5 + 0x38) = local_118.SecondPosition.field0_0x0._s_0.Z;
  *(ulonglong *)(pFVar5 + 0x40) =
       CONCAT44(local_118.LimitNormal.field0_0x0._4_4_,local_118.LimitNormal.field0_0x0._0_4_);
  *(double *)(pFVar5 + 0x48) = local_118.LimitNormal.field0_0x0._s_0.Y;
  *(double *)(pFVar5 + 0x50) = local_118.LimitNormal.field0_0x0._s_0.Z;
  *(ulonglong *)(pFVar5 + 0x58) = CONCAT44(local_118.TargetSpeedWithoutBias,local_118.TargetSpeed);
  *(ulonglong *)(pFVar5 + 0x60) = CONCAT44(local_118.Maximumforce,local_118.MinimumForce);
  *(ulonglong *)(pFVar5 + 0x68) = CONCAT44(local_118.InverseInertiaImpulse,local_118.SumImpulses);
  *(double *)(pFVar5 + 0x70) = local_118.WorldSpacePosition0.field0_0x0._s_0.X;
  *(double *)(pFVar5 + 0x78) = local_118.WorldSpacePosition0.field0_0x0._s_0.Y;
  *(double *)(pFVar5 + 0x80) = local_118.WorldSpacePosition0.field0_0x0._s_0.Z;
  *(double *)(pFVar5 + 0x88) = local_118.WorldSpacePosition1.field0_0x0._s_0.X;
  *(double *)(pFVar5 + 0x90) = local_118.WorldSpacePosition1.field0_0x0._s_0.Y;
  *(double *)(pFVar5 + 0x98) = local_118.WorldSpacePosition1.field0_0x0._s_0.Z;
  return;
}

// CreateSpring @ 1474caac0

void __cdecl
FAnimPhys::CreateSpring
          (TArray<FAnimPhysSpring,TSizedDefaultAllocator<32>_> *param_1,FAnimPhysRigidBody *param_2,
          TVector<double> *param_3,FAnimPhysRigidBody *param_4,TVector<double> *param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  FAnimPhysRigidBody *local_98;
  FAnimPhysRigidBody *pFStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double dStack_28;
  double dStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  local_48 = (param_3->field0_0x0)._s_0.X;
  dStack_40 = (param_3->field0_0x0)._s_0.Y;
  local_38 = (param_3->field0_0x0)._s_0.Z;
  pFVar1 = (param_1->AllocatorInstance).Data;
  dStack_30 = (param_5->field0_0x0)._s_0.X;
  dStack_28 = (param_5->field0_0x0)._s_0.Y;
  local_18 = 0x41400000;
  dStack_20 = (param_5->field0_0x0)._s_0.Z;
  uStack_14 = 0x40800000;
  local_98 = param_2;
  pFStack_90 = param_4;
  if ((pFVar1 <= (FScriptContainerElement *)&local_98) &&
     ((FScriptContainerElement *)&local_98 < pFVar1 + (longlong)param_1->ArrayMax * 0x90)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1090,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  lVar5 = (longlong)iVar4;
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(FAnimPhysRigidBody **)(pFVar1 + lVar5 * 0x90) = local_98;
  *(FAnimPhysRigidBody **)(pFVar1 + lVar5 * 0x90 + 8) = pFStack_90;
  *(undefined8 *)(pFVar1 + lVar5 * 0x90 + 0x10) = local_88;
  *(undefined8 *)(pFVar1 + lVar5 * 0x90 + 0x10 + 8) = uStack_80;
  *(undefined8 *)(pFVar1 + lVar5 * 0x90 + 0x20) = local_78;
  *(undefined8 *)(pFVar1 + lVar5 * 0x90 + 0x20 + 8) = uStack_70;
  *(undefined8 *)(pFVar1 + lVar5 * 0x90 + 0x30) = local_68;
  *(undefined8 *)(pFVar1 + lVar5 * 0x90 + 0x30 + 8) = uStack_60;
  *(undefined8 *)(pFVar1 + lVar5 * 0x90 + 0x40) = local_58;
  *(undefined8 *)(pFVar1 + lVar5 * 0x90 + 0x40 + 8) = uStack_50;
  *(double *)(pFVar1 + lVar5 * 0x90 + 0x50) = local_48;
  *(double *)(pFVar1 + lVar5 * 0x90 + 0x50 + 8) = dStack_40;
  *(double *)(pFVar1 + lVar5 * 0x90 + 0x60) = local_38;
  *(double *)(pFVar1 + lVar5 * 0x90 + 0x60 + 8) = dStack_30;
  *(double *)(pFVar1 + lVar5 * 0x90 + 0x70) = dStack_28;
  *(double *)(pFVar1 + lVar5 * 0x90 + 0x70 + 8) = dStack_20;
  *(ulonglong *)(pFVar1 + lVar5 * 0x90 + 0x80) = CONCAT44(uStack_14,local_18);
  *(undefined8 *)(pFVar1 + lVar5 * 0x90 + 0x80 + 8) = uStack_10;
  return;
}

// DiffQ @ 1474cb7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TQuat<double> * __cdecl
FAnimPhys::DiffQ(TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1,
                TMatrix<double> *param_2,TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar13;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar14;
  double dVar15;
  undefined1 in_XMM3 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  uint uVar19;
  uint uVar20;
  double dVar21;
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_2d8 [48];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  TMatrix<double> local_288;
  TMatrix<double> local_208;
  TMatrix<double> local_188;
  TMatrix<double> local_108;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  dVar1 = param_1->X;
  dVar3 = param_1->Y;
  dVar4 = param_1->Z;
  dVar5 = param_1->W;
  dVar9 = dVar4 * dVar4 + dVar1 * dVar1;
  dVar13 = dVar5 * dVar5 + dVar3 * dVar3;
  dVar2 = dVar13 + dVar9;
  dVar9 = dVar9 + dVar13;
  auVar16._8_4_ = SUB84(dVar9,0);
  auVar16._0_8_ = dVar2;
  auVar16._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  auVar16 = sqrtpd(in_XMM3,auVar16);
  uVar7 = -(ulonglong)(__real_3e45798ee0000000 <= dVar2);
  uVar8 = -(ulonglong)(__real_3e45798ee0000000 <= dVar9);
  auVar24 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar16);
  uVar19 = (uint)(uVar7 >> 0x20);
  uVar20 = (uint)(uVar8 >> 0x20);
  auVar25._0_8_ = uVar7 & (ulonglong)(auVar24._0_8_ * dVar1);
  uVar6 = uVar8 & (ulonglong)(auVar24._8_8_ * dVar3);
  auVar25._8_4_ = (undefined4)uVar6;
  auVar25._12_4_ = (undefined4)(uVar6 >> 0x20);
  auVar10._0_4_ = ~(uint)uVar7 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar10._4_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar10._8_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar10._12_4_ =
       ~uVar20 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar25 = auVar25 | auVar10;
  auVar16 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar16);
  auVar22._0_4_ = ~(uint)uVar7 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar22._4_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar22._8_4_ = ~(uint)uVar8 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar22._12_4_ =
       ~uVar20 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar11._0_8_ = (ulonglong)(auVar16._0_8_ * dVar4) & uVar7;
  uVar8 = (ulonglong)(auVar16._8_8_ * dVar5) & uVar8;
  auVar11._8_4_ = (undefined4)uVar8;
  auVar11._12_4_ = (undefined4)(uVar8 >> 0x20);
  auVar22 = auVar22 | auVar11;
  local_2a8 = auVar25;
  local_298 = auVar22;
  UE::Math::TQuatRotationMatrix<double>::Make(&local_288,(TQuat<double> *)local_2a8);
  VectorMatrixMultiply(&local_108,&local_288,param_2);
  local_208.M[0][0] = local_288.M[0][0];
  local_208.M[0][1] = local_288.M[1][0];
  local_208.M[0][2] = local_288.M[2][0];
  local_208.M[0][3] = local_288.M[3][0];
  local_208.M[1][0] = local_288.M[0][1];
  local_208.M[1][1] = local_288.M[1][1];
  local_208.M[1][2] = local_288.M[2][1];
  local_208.M[1][3] = local_288.M[3][1];
  local_208.M[2][0] = local_288.M[0][2];
  local_208.M[2][1] = local_288.M[1][2];
  local_208.M[2][2] = local_288.M[2][2];
  local_208.M[2][3] = local_288.M[3][2];
  local_208.M[3][0] = local_288.M[0][3];
  local_208.M[3][1] = local_288.M[1][3];
  local_208.M[3][2] = local_288.M[2][3];
  local_208.M[3][3] = local_288.M[3][3];
  VectorMatrixMultiply(&local_188,&local_108,&local_208);
  dVar9 = (param_3->field0_0x0)._s_0.X;
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  dVar2 = (param_3->field0_0x0)._s_0.Z;
  dVar14 = auVar25._0_8_;
  dVar15 = auVar25._8_8_;
  dVar3 = (local_188.M[1][1] * dVar1 + local_188.M[0][1] * dVar9 + local_188.M[2][1] * dVar2 +
          local_188.M[3][1] * 0.0) * __real_3fe0000000000000;
  dVar18 = (local_188.M[1][0] * dVar1 + local_188.M[0][0] * dVar9 + local_188.M[2][0] * dVar2 +
           local_188.M[3][0] * 0.0) * __real_3fe0000000000000;
  dVar13 = (local_188.M[1][2] * dVar1 + local_188.M[0][2] * dVar9 + local_188.M[2][2] * dVar2 +
           local_188.M[3][2] * 0.0) * __real_3fe0000000000000;
  dVar21 = auVar22._0_8_;
  dVar23 = auVar22._8_8_;
  auVar17._8_4_ = SUB84(dVar18,0);
  auVar17._0_8_ = dVar18;
  auVar17._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  dVar2 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
  auVar12._8_4_ = SUB84(dVar3,0);
  auVar12._0_8_ = dVar3;
  auVar12._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
  dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar4 = dVar18 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          dVar21 * 0.0 +
          dVar3 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar13 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar5 = dVar18 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar23 * 0.0 +
          dVar3 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar13 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  __return_storage_ptr__->X =
       dVar18 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar14 * 0.0 +
       dVar3 * dVar21 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar13 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  __return_storage_ptr__->Y =
       auVar17._8_8_ * dVar21 * dVar2 + dVar15 * 0.0 + auVar12._8_8_ * dVar23 * dVar9 +
       dVar13 * dVar14 * dVar1;
  auVar24._8_4_ = SUB84(dVar5,0);
  auVar24._0_8_ = dVar4;
  auVar24._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  __return_storage_ptr__->Z = dVar4;
  __return_storage_ptr__->W = (double)auVar24._8_8_;
  return __return_storage_ptr__;
}

// InitializeBodyVelocity @ 1474e82f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FAnimPhys::InitializeBodyVelocity
          (float param_1,FAnimPhysRigidBody *param_2,TVector<double> *param_3)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  float fVar7;
  UClass *pUVar8;
  FString *pFVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_328 [32];
  FString local_308;
  FString local_2f8;
  TMatrix<double> local_2e8;
  TMatrix<double> local_268;
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  TMatrix<double> local_168;
  TMatrix<double> local_e8;
  ulonglong local_68;
  
  fVar13 = __real_3f333333;
  local_68 = __security_cookie.value ^ (ulonglong)auStack_328;
  bVar1 = param_2->bLinearDampingOverriden;
  dVar16 = (double)param_2->_padding_;
  dVar14 = (double)param_2->_padding_;
  dVar17 = (double)param_2->_padding_;
  dVar15 = (double)param_2->_padding_;
  (param_2->PreviousState).Pose.Position.field0_0x0._s_0.X = (double)param_2->_padding_;
  (param_2->PreviousState).Pose.Position.field0_0x0._s_0.Y = dVar16;
  dVar16 = (double)param_2->_padding_;
  dVar18 = (double)param_2->_padding_;
  (param_2->PreviousState).Pose.Orientation.X = dVar14;
  (param_2->PreviousState).Pose.Orientation.Y = dVar17;
  (param_2->PreviousState).Pose.Orientation.Z = dVar16;
  (param_2->PreviousState).Pose.Orientation.W = dVar18;
  (param_2->PreviousState).Pose.Position.field0_0x0._s_0.Z = dVar15;
  fVar7 = __real_3f800000;
  fVar12 = fVar13;
  if (bVar1 != false) {
    fVar12 = param_2->LinearDamping;
  }
  if (param_2->bAngularDampingOverriden != false) {
    fVar13 = param_2->AngularDamping;
  }
  fVar12 = powf(__real_3f800000 - fVar12,param_1);
  dVar14 = (double)fVar12;
  dVar15 = (double)param_2->_padding_ * dVar14;
  dVar16 = (double)param_2->_padding_ * dVar14;
  auVar4._8_4_ = SUB84(dVar16,0);
  auVar4._0_8_ = dVar15;
  auVar4._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  param_2->_padding_ = (longlong)dVar15;
  param_2->_padding_ = auVar4._8_8_;
  param_2->_padding_ = (longlong)(dVar14 * (double)param_2->_padding_);
  fVar13 = powf(fVar7 - fVar13,param_1);
  dVar15 = (double)fVar13;
  param_2->_padding_ = (longlong)(dVar15 * (double)param_2->_padding_);
  param_2->_padding_ = (longlong)(dVar15 * (double)param_2->_padding_);
  param_2->_padding_ = (longlong)(dVar15 * (double)param_2->_padding_);
  if (param_2->bUseGravityOverride == false) {
    pUVar8 = Z_Construct_UClass_UPhysicsSettings_NoRegister();
    if ((pUVar8->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar8);
    }
    pUVar3 = (pUVar8->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar3 == (UObject *)0x0) {
      pFVar9 = GetTypeName<UPhysicsSettings>(&local_308);
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar10);
    }
    pUVar8 = Z_Construct_UClass_UPhysicsSettings_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar8->_padding_)) {
      pFVar9 = GetTypeName<UPhysicsSettings>(&local_308);
      pwVar10 = L"";
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      pFVar9 = GetFullNameForCastLogError<UObject>(&local_2f8,pUVar3);
      if ((pFVar9->Data).ArrayNum != 0) {
        pwVar10 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar10,pwVar11);
    }
    dVar14 = (double)(float)(*(uint *)&pUVar3[1].field_0x10 & __xmm_7fffffff7fffffff7fffffff7fffffff
                            );
    dVar16 = (double)param_2->GravityScale;
    dVar15 = (double)param_2->Mass;
    dVar17 = dVar14 * (param_3->field0_0x0)._s_0.X * dVar16 * dVar15;
    dVar18 = dVar14 * (param_3->field0_0x0)._s_0.Y * dVar16 * dVar15;
    dVar15 = dVar14 * (param_3->field0_0x0)._s_0.Z * dVar16 * dVar15;
  }
  else {
    dVar15 = (double)param_2->Mass;
    dVar17 = dVar15 * (param_2->GravityOverride).field0_0x0._s_0.X;
    dVar18 = dVar15 * (param_2->GravityOverride).field0_0x0._s_0.Y;
    dVar15 = dVar15 * (param_2->GravityOverride).field0_0x0._s_0.Z;
  }
  if (param_2->bWindEnabled != false) {
    dVar14 = (double)(param_2->WindData).WindSpeed;
    dVar16 = (double)(param_2->WindData).BodyWindScale;
    dVar5 = dVar14 * (param_2->WindData).WindDirection.field0_0x0._s_0.X * dVar16;
    dVar6 = dVar14 * (param_2->WindData).WindDirection.field0_0x0._s_0.Y * dVar16;
    dVar16 = dVar14 * (param_2->WindData).WindDirection.field0_0x0._s_0.Z * dVar16;
    if (__real_3e45798ee0000000 <
        (dVar5 * dVar5 + dVar6 * dVar6 + dVar16 * dVar16) * ___real_40ee848000000000) {
      dVar14 = (double)(param_2->WindData).WindAdaption;
      dVar17 = dVar17 + dVar14 * dVar5 * __real_406f400000000000;
      dVar18 = dVar18 + dVar14 * dVar6 * __real_406f400000000000;
      dVar15 = dVar15 + dVar14 * dVar16 * __real_406f400000000000;
    }
  }
  dVar16 = (double)param_1;
  param_2->_padding_ = (longlong)(dVar17 * dVar16 + (double)param_2->_padding_);
  param_2->_padding_ = (longlong)(dVar18 * dVar16 + (double)param_2->_padding_);
  param_2->_padding_ = (longlong)(dVar15 * dVar16 + (double)param_2->_padding_);
  UE::Math::TQuatRotationMatrix<double>::Make(&local_2e8,(TQuat<double> *)&param_2->_padding_);
  dVar14 = (double)param_2->InverseMass;
  local_1e8._0_8_ = dVar14 * (param_2->InverseTensorWithoutMass).M[0][0];
  local_1e8._8_8_ = dVar14 * (param_2->InverseTensorWithoutMass).M[0][1];
  dVar15 = (param_2->InverseTensorWithoutMass).M[0][3] * dVar14;
  dVar16 = (param_2->InverseTensorWithoutMass).M[1][1] * dVar14;
  local_1e8._24_4_ = SUB84(dVar15,0);
  local_1e8._16_8_ = (param_2->InverseTensorWithoutMass).M[0][2] * dVar14;
  local_1e8._28_4_ = (int)((ulonglong)dVar15 >> 0x20);
  local_1c8._8_4_ = SUB84(dVar16,0);
  local_1c8._0_8_ = (param_2->InverseTensorWithoutMass).M[1][0] * dVar14;
  local_1c8._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  dVar15 = (param_2->InverseTensorWithoutMass).M[1][3] * dVar14;
  dVar16 = (param_2->InverseTensorWithoutMass).M[2][1] * dVar14;
  local_1b8._8_4_ = SUB84(dVar15,0);
  local_1b8._0_8_ = (param_2->InverseTensorWithoutMass).M[1][2] * dVar14;
  local_1b8._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  local_1a8._8_4_ = SUB84(dVar16,0);
  local_1a8._0_8_ = (param_2->InverseTensorWithoutMass).M[2][0] * dVar14;
  local_1a8._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  dVar15 = (param_2->InverseTensorWithoutMass).M[2][3] * dVar14;
  dVar16 = (param_2->InverseTensorWithoutMass).M[3][1] * dVar14;
  local_198._8_4_ = SUB84(dVar15,0);
  local_198._0_8_ = (param_2->InverseTensorWithoutMass).M[2][2] * dVar14;
  local_198._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  local_188._8_4_ = SUB84(dVar16,0);
  local_188._0_8_ = (param_2->InverseTensorWithoutMass).M[3][0] * dVar14;
  local_188._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  dVar15 = (param_2->InverseTensorWithoutMass).M[3][3] * dVar14;
  local_178._8_4_ = SUB84(dVar15,0);
  local_178._0_8_ = (param_2->InverseTensorWithoutMass).M[3][2] * dVar14;
  local_178._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  VectorMatrixMultiply(&local_e8,&local_2e8,(TMatrix<double> *)local_1e8);
  local_268.M[0][0] = local_2e8.M[0][0];
  local_268.M[0][1] = local_2e8.M[1][0];
  local_268.M[0][2] = local_2e8.M[2][0];
  local_268.M[0][3] = local_2e8.M[3][0];
  local_268.M[1][0] = local_2e8.M[0][1];
  local_268.M[1][1] = local_2e8.M[1][1];
  local_268.M[1][2] = local_2e8.M[2][1];
  local_268.M[1][3] = local_2e8.M[3][1];
  local_268.M[2][0] = local_2e8.M[0][2];
  local_268.M[2][1] = local_2e8.M[1][2];
  local_268.M[2][2] = local_2e8.M[2][2];
  local_268.M[2][3] = local_2e8.M[3][2];
  local_268.M[3][0] = local_2e8.M[0][3];
  local_268.M[3][1] = local_2e8.M[1][3];
  local_268.M[3][2] = local_2e8.M[2][3];
  local_268.M[3][3] = local_2e8.M[3][3];
  VectorMatrixMultiply(&local_168,&local_e8,&local_268);
  (param_2->InverseWorldSpaceTensor).M[0][0] = local_168.M[0][0];
  (param_2->InverseWorldSpaceTensor).M[0][1] = local_168.M[0][1];
  (param_2->InverseWorldSpaceTensor).M[0][2] = local_168.M[0][2];
  (param_2->InverseWorldSpaceTensor).M[0][3] = local_168.M[0][3];
  (param_2->InverseWorldSpaceTensor).M[1][0] = local_168.M[1][0];
  (param_2->InverseWorldSpaceTensor).M[1][1] = local_168.M[1][1];
  (param_2->InverseWorldSpaceTensor).M[1][2] = local_168.M[1][2];
  (param_2->InverseWorldSpaceTensor).M[1][3] = local_168.M[1][3];
  (param_2->InverseWorldSpaceTensor).M[2][0] = local_168.M[2][0];
  (param_2->InverseWorldSpaceTensor).M[2][1] = local_168.M[2][1];
  (param_2->InverseWorldSpaceTensor).M[2][2] = local_168.M[2][2];
  (param_2->InverseWorldSpaceTensor).M[2][3] = local_168.M[2][3];
  (param_2->InverseWorldSpaceTensor).M[3][0] = local_168.M[3][0];
  (param_2->InverseWorldSpaceTensor).M[3][1] = local_168.M[3][1];
  (param_2->InverseWorldSpaceTensor).M[3][2] = local_168.M[3][2];
  (param_2->InverseWorldSpaceTensor).M[3][3] = local_168.M[3][3];
  return;
}

// PhysicsUpdate @ 1474ef670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FAnimPhys::PhysicsUpdate
          (float param_1,TArray<FAnimPhysRigidBody_*,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FAnimPhysLinearLimit,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FAnimPhysAngularLimit,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FAnimPhysSpring,TSizedDefaultAllocator<32>_> *param_5,TVector<double> *param_6,
          TVector<double> *param_7,TVector<double> *param_8,TVector<double> *param_9,
          TVector<double> *param_10,int param_11,int param_12)

{
  undefined8 uVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  TStatId TVar14;
  TQuat<double> *pTVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_AnimDynamicsLinearPost> FVar17;
  FThreadSafeStaticStat<FStat_STAT_AnimDynamicsAngularPost> FVar18;
  TStatIdData *pTVar19;
  FAnimPhysSpring *this;
  FAnimPhysLinearLimit *pFVar20;
  FAnimPhysAngularLimit *pFVar21;
  FScriptContainerElement *pFVar22;
  FName FVar23;
  FAnimPhysSpring *pFVar24;
  FAnimPhysLinearLimit *pFVar25;
  FAnimPhysAngularLimit *pFVar26;
  FScriptContainerElement *pFVar27;
  ulonglong uVar28;
  uint uVar29;
  uint uVar30;
  float fVar31;
  uint uVar32;
  uint uVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined1 auStackY_278 [32];
  undefined1 local_218 [4];
  FColor_u_0 local_214 [3];
  double local_208;
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  FCycleCounter local_1d8;
  double *local_1c8;
  FName *local_1c0;
  FName local_1b8;
  FName local_1a8 [2];
  TQuat<double> local_198;
  FName local_178;
  FName local_170;
  double local_168;
  TArray<FAnimPhysRigidBody_*,TSizedDefaultAllocator<32>_> *local_160;
  undefined1 local_158 [32];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_214[0] = (FColor_u_0)param_1;
  local_160 = param_2;
  if (bEnableDetailedStats) {
    TVar14 = FThreadSafeStaticStatInner<FStat_STAT_AnimDynamicsUpdate,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_AnimDynamicsUpdate,1> *)
                        &StatPtr_STAT_AnimDynamicsUpdate);
    pTVar19 = *(TStatIdData **)&(TVar14.StatIdPtr)->Name;
  }
  else {
    pTVar19 = &TStatId::TStatId_NAME_None;
  }
  local_1d8.StatId.ComparisonIndex.Value = 0;
  local_1d8.StatId.Number = 0;
  local_1d8.EmittedEvent = 0;
  local_198.X = 4.24399203943533e-314;
  local_198.Y = 2.79697922503095e-314;
  local_198.Z = 2.7969792803663e-314;
  FCycleCounter::Start
            (&local_1d8,(TStatId)pTVar19,CycleStat|ClearEveryFrame,false,
             (FSourceLocation *)&local_198);
  pFVar27 = (param_2->AllocatorInstance).Data;
  iVar3 = param_2->ArrayNum;
  pFVar22 = pFVar27 + (longlong)iVar3 * 8;
  while( true ) {
    if (param_2->ArrayNum != iVar3) {
      `TCheckedPointerIterator<FAnimPhysRigidBody_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_218);
    }
    dVar34 = __real_3f1a36e2e0000000;
    uVar33 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar30 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    if (pFVar27 == pFVar22) break;
    InitializeBodyVelocity(param_1,*(FAnimPhysRigidBody **)pFVar27,param_6);
    pFVar27 = pFVar27 + 8;
  }
  uVar29 = (uint)*(undefined8 *)&param_7->field0_0x0 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar32 = (uint)((ulonglong)*(undefined8 *)&param_7->field0_0x0 >> 0x20) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar32,uVar29) &&
        (double)CONCAT44(uVar32,uVar29) != __real_3f1a36e2e0000000) ||
      (uVar1 = *(undefined8 *)((longlong)&param_7->field0_0x0 + 8),
      uVar29 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar32 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar32,uVar29) &&
      (double)CONCAT44(uVar32,uVar29) != __real_3f1a36e2e0000000)) ||
     (uVar1 = *(undefined8 *)((longlong)&param_7->field0_0x0 + 0x10),
     uVar29 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar32 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar32,uVar29) &&
     (double)CONCAT44(uVar32,uVar29) != __real_3f1a36e2e0000000)) {
    pFVar27 = (param_2->AllocatorInstance).Data;
    iVar3 = param_2->ArrayNum;
    pFVar22 = pFVar27 + (longlong)iVar3 * 8;
    while( true ) {
      if (param_2->ArrayNum != iVar3) {
        `TCheckedPointerIterator<FAnimPhysRigidBody_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_218);
      }
      if (pFVar27 == pFVar22) break;
      lVar4 = *(longlong *)pFVar27;
      dVar6 = (double)param_1;
      pFVar27 = pFVar27 + 8;
      dVar35 = (param_7->field0_0x0)._s_0.Z;
      dVar2 = (param_7->field0_0x0)._s_0.X;
      *(double *)(lVar4 + 0x58) = dVar6 * (param_7->field0_0x0)._s_0.Y + *(double *)(lVar4 + 0x58);
      *(double *)(lVar4 + 0x60) = dVar6 * dVar35 + *(double *)(lVar4 + 0x60);
      *(double *)(lVar4 + 0x50) = dVar6 * dVar2 + *(double *)(lVar4 + 0x50);
    }
  }
  fVar31 = __real_38d1b717;
  dVar35 = __real_3ff0000000000000;
  uVar29 = (uint)*(undefined8 *)&param_8->field0_0x0 & uVar30;
  uVar32 = (uint)((ulonglong)*(undefined8 *)&param_8->field0_0x0 >> 0x20) & uVar33;
  uVar38 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  if (((dVar34 <= (double)CONCAT44(uVar32,uVar29) && (double)CONCAT44(uVar32,uVar29) != dVar34) ||
      (uVar1 = *(undefined8 *)((longlong)&param_8->field0_0x0 + 8), uVar29 = (uint)uVar1 & uVar30,
      uVar32 = (uint)((ulonglong)uVar1 >> 0x20) & uVar33,
      dVar34 <= (double)CONCAT44(uVar32,uVar29) && (double)CONCAT44(uVar32,uVar29) != dVar34)) ||
     (uVar1 = *(undefined8 *)((longlong)&param_8->field0_0x0 + 0x10), uVar29 = (uint)uVar1 & uVar30,
     uVar32 = (uint)((ulonglong)uVar1 >> 0x20) & uVar33,
     dVar34 <= (double)CONCAT44(uVar32,uVar29) && (double)CONCAT44(uVar32,uVar29) != dVar34)) {
    pFVar27 = (param_2->AllocatorInstance).Data;
    iVar3 = param_2->ArrayNum;
    pFVar22 = pFVar27 + (longlong)iVar3 * 8;
    while( true ) {
      if (param_2->ArrayNum != iVar3) {
        `TCheckedPointerIterator<FAnimPhysRigidBody_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_218);
      }
      if (pFVar27 == pFVar22) break;
      lVar4 = *(longlong *)pFVar27;
      if (fVar31 < *(float *)(lVar4 + 0x84)) {
        dVar8 = dVar35 / (double)*(float *)(lVar4 + 0x84);
        dVar2 = (param_8->field0_0x0)._s_0.Z;
        dVar6 = (param_8->field0_0x0)._s_0.X;
        dVar7 = (double)param_1;
        *(double *)(lVar4 + 0x58) =
             dVar8 * (param_8->field0_0x0)._s_0.Y * dVar7 + *(double *)(lVar4 + 0x58);
        *(double *)(lVar4 + 0x60) = dVar8 * dVar2 * dVar7 + *(double *)(lVar4 + 0x60);
        *(double *)(lVar4 + 0x50) = dVar8 * dVar6 * dVar7 + *(double *)(lVar4 + 0x50);
      }
      pFVar27 = pFVar27 + 8;
    }
  }
  uVar37 = SUB84(dVar35,0);
  uVar29 = (uint)*(undefined8 *)&param_10->field0_0x0 & uVar30;
  uVar32 = (uint)((ulonglong)*(undefined8 *)&param_10->field0_0x0 >> 0x20) & uVar33;
  if (((dVar34 <= (double)CONCAT44(uVar32,uVar29) && (double)CONCAT44(uVar32,uVar29) != dVar34) ||
      (uVar1 = *(undefined8 *)((longlong)&param_10->field0_0x0 + 8),
      local_1c0 = (FName *)((longlong)&param_10->field0_0x0 + 8), uVar29 = (uint)uVar1 & uVar30,
      uVar32 = (uint)((ulonglong)uVar1 >> 0x20) & uVar33,
      dVar34 <= (double)CONCAT44(uVar32,uVar29) && (double)CONCAT44(uVar32,uVar29) != dVar34)) ||
     ((uVar1 = *(undefined8 *)((longlong)&param_10->field0_0x0 + 0x10),
      local_1c8 = (double *)((longlong)&param_10->field0_0x0 + 0x10), uVar29 = (uint)uVar1 & uVar30,
      uVar32 = (uint)((ulonglong)uVar1 >> 0x20) & uVar33,
      dVar34 <= (double)CONCAT44(uVar32,uVar29) && (double)CONCAT44(uVar32,uVar29) != dVar34 ||
      (((uVar29 = (uint)*(undefined8 *)&param_9->field0_0x0 & uVar30,
        uVar32 = (uint)((ulonglong)*(undefined8 *)&param_9->field0_0x0 >> 0x20) & uVar33,
        dVar34 <= (double)CONCAT44(uVar32,uVar29) && (double)CONCAT44(uVar32,uVar29) != dVar34 ||
        (uVar1 = *(undefined8 *)((longlong)&param_9->field0_0x0 + 8), uVar29 = (uint)uVar1 & uVar30,
        uVar32 = (uint)((ulonglong)uVar1 >> 0x20) & uVar33,
        dVar34 <= (double)CONCAT44(uVar32,uVar29) && (double)CONCAT44(uVar32,uVar29) != dVar34)) ||
       (uVar1 = *(undefined8 *)((longlong)&param_9->field0_0x0 + 0x10),
       uVar30 = (uint)uVar1 & uVar30, uVar33 = (uint)((ulonglong)uVar1 >> 0x20) & uVar33,
       dVar34 <= (double)CONCAT44(uVar33,uVar30) && (double)CONCAT44(uVar33,uVar30) != dVar34))))))
  {
    local_1c0 = (FName *)&(param_10->field0_0x0)._s_0.Y;
    local_1c8 = &(param_10->field0_0x0)._s_0.Z;
    pFVar27 = (param_2->AllocatorInstance).Data;
    iVar3 = param_2->ArrayNum;
    pFVar22 = pFVar27 + (longlong)iVar3 * 8;
    while( true ) {
      if (param_2->ArrayNum != iVar3) {
        `TCheckedPointerIterator<FAnimPhysRigidBody_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_218);
      }
      param_1 = (float)local_214[0];
      if (pFVar27 == pFVar22) break;
      pFVar16 = *(FName **)pFVar27;
      local_168 = (param_10->field0_0x0)._s_0.X;
      local_1b8 = *pFVar16;
      local_1e8 = pFVar16[1];
      FVar23 = pFVar16[2];
      dVar34 = *local_1c8;
      local_208 = (param_9->field0_0x0)._s_0.Z;
      local_1a8[0] = pFVar16[0xc];
      local_178 = pFVar16[0xb];
      local_170 = pFVar16[10];
      local_1f0 = *local_1c0;
      local_1e0 = (FName)(param_9->field0_0x0)._s_0.Y;
      local_198.X = (param_9->field0_0x0)._s_0.X;
      dVar35 = (double)(float)pFVar16[0x10].Number;
      dVar7 = (double)CONCAT44(uVar38,uVar37) / dVar35;
      dVar36 = local_168 * (double)local_1e8 - (double)local_1b8 * (double)local_1f0;
      dVar10 = (double)local_1b8 * dVar34 - local_168 * (double)FVar23;
      dVar8 = (double)FVar23 * (double)local_1f0 - (double)local_1e8 * dVar34;
      dVar2 = (double)(CoriolisAlpha * __real_40000000);
      local_1f8 = (FName)(double)(float)local_214[0];
      dVar9 = (double)CentrifugalAlpha;
      dVar6 = (double)EulerAlpha;
      pFVar16[10] = (FName)((double)local_170 -
                           (((double)local_1a8[0] * dVar35 * (double)local_1f0 -
                            (double)local_178 * dVar35 * dVar34) * dVar2 +
                            (dVar36 * (double)local_1f0 - dVar10 * dVar34) * dVar9 +
                           ((double)FVar23 * (double)local_1e0 - (double)local_1e8 * local_208) *
                           dVar6) * dVar7 * (double)local_1f8);
      pFVar16[0xb] = (FName)((double)local_178 -
                            (((double)local_170 * dVar35 * dVar34 -
                             (double)local_1a8[0] * dVar35 * local_168) * dVar2 +
                             (dVar8 * dVar34 - dVar36 * local_168) * dVar9 +
                            ((double)local_1b8 * local_208 - local_198.X * (double)FVar23) * dVar6)
                            * dVar7 * (double)local_1f8);
      pFVar16[0xc] = (FName)((double)local_1a8[0] -
                            (((double)local_178 * dVar35 * local_168 -
                             (double)local_170 * dVar35 * (double)local_1f0) * dVar2 +
                             (dVar10 * local_168 - dVar8 * (double)local_1f0) * dVar9 +
                            (local_198.X * (double)local_1e8 - (double)local_1b8 * (double)local_1e0
                            ) * dVar6) * dVar7 * (double)local_1f8);
      dVar35 = (double)pFVar16[0x3f] * __real_3ff0000000000000;
      uVar37 = SUB84(__real_3ff0000000000000,0);
      uVar38 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      dVar34 = (double)pFVar16[0x40] * __real_3ff0000000000000;
      pFVar27 = pFVar27 + 8;
      pFVar16[0xd] = (FName)((double)pFVar16[0xd] -
                            ((double)pFVar16[0x36] * (double)local_1e0 +
                             (double)pFVar16[0x32] * local_198.X + (double)pFVar16[0x3a] * local_208
                            + (double)pFVar16[0x3e] * __real_3ff0000000000000) * (double)local_1f8);
      pFVar16[0xe] = (FName)((double)pFVar16[0xe] -
                            ((double)pFVar16[0x37] * (double)local_1e0 +
                             (double)pFVar16[0x33] * local_198.X + (double)pFVar16[0x3b] * local_208
                            + dVar35) * (double)local_1f8);
      pFVar16[0xf] = (FName)((double)pFVar16[0xf] -
                            ((double)pFVar16[0x38] * (double)local_1e0 +
                             (double)pFVar16[0x34] * local_198.X + (double)pFVar16[0x3c] * local_208
                            + dVar34) * (double)local_1f8);
    }
  }
  iVar3 = param_5->ArrayNum;
  this = (FAnimPhysSpring *)(param_5->AllocatorInstance).Data;
  pFVar24 = this + iVar3;
  while( true ) {
    if (param_5->ArrayNum != iVar3) {
      `TCheckedPointerIterator<FAnimPhysSpring,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_218);
    }
    if (this == pFVar24) break;
    FAnimPhysSpring::ApplyForces(this,param_1);
    this = this + 1;
  }
  if (0 < param_11) {
    uVar28 = (ulonglong)(uint)param_11;
    do {
      iVar3 = param_3->ArrayNum;
      pFVar20 = (FAnimPhysLinearLimit *)(param_3->AllocatorInstance).Data;
      pFVar25 = pFVar20 + iVar3;
      while( true ) {
        if (param_3->ArrayNum != iVar3) {
          `TCheckedPointerIterator<FAnimPhysLinearLimit,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_218);
        }
        if (pFVar20 == pFVar25) break;
        FAnimPhysLinearLimit::Iter(pFVar20,param_1);
        pFVar20 = pFVar20 + 1;
      }
      iVar3 = param_4->ArrayNum;
      pFVar21 = (FAnimPhysAngularLimit *)(param_4->AllocatorInstance).Data;
      pFVar26 = pFVar21 + iVar3;
      while( true ) {
        if (param_4->ArrayNum != iVar3) {
          `TCheckedPointerIterator<FAnimPhysAngularLimit,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_218);
        }
        if (pFVar21 == pFVar26) break;
        FAnimPhysAngularLimit::Iter(pFVar21,param_1);
        pFVar21 = pFVar21 + 1;
      }
      uVar28 = uVar28 - 1;
    } while (uVar28 != 0);
  }
  pFVar27 = (param_2->AllocatorInstance).Data;
  iVar3 = param_2->ArrayNum;
  pFVar22 = pFVar27 + (longlong)iVar3 * 8;
  while( true ) {
    if (param_2->ArrayNum != iVar3) {
      `TCheckedPointerIterator<FAnimPhysRigidBody_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_218);
    }
    if (pFVar27 == pFVar22) break;
    pdVar5 = *(double **)pFVar27;
    dVar34 = (double)param_1;
    dVar35 = (double)*(float *)((longlong)pdVar5 + 0x84);
    pdVar5[0x42] = dVar35 * pdVar5[10] * dVar34 + *pdVar5;
    pdVar5[0x43] = dVar35 * pdVar5[0xb] * dVar34 + pdVar5[1];
    pdVar5[0x44] = dVar35 * pdVar5[0xc] * dVar34 + pdVar5[2];
    local_158._0_8_ = dVar35 * pdVar5[0x12];
    local_158._8_8_ = dVar35 * pdVar5[0x13];
    local_158._24_4_ = SUB84(pdVar5[0x15] * dVar35,0);
    local_158._16_8_ = pdVar5[0x14] * dVar35;
    local_158._28_4_ = (int)((ulonglong)(pdVar5[0x15] * dVar35) >> 0x20);
    local_138._8_4_ = SUB84(pdVar5[0x17] * dVar35,0);
    local_138._0_8_ = pdVar5[0x16] * dVar35;
    local_138._12_4_ = (int)((ulonglong)(pdVar5[0x17] * dVar35) >> 0x20);
    local_128._8_4_ = SUB84(pdVar5[0x19] * dVar35,0);
    local_128._0_8_ = pdVar5[0x18] * dVar35;
    local_128._12_4_ = (int)((ulonglong)(pdVar5[0x19] * dVar35) >> 0x20);
    local_118._8_4_ = SUB84(pdVar5[0x1b] * dVar35,0);
    local_118._0_8_ = pdVar5[0x1a] * dVar35;
    local_118._12_4_ = (int)((ulonglong)(pdVar5[0x1b] * dVar35) >> 0x20);
    local_108._8_4_ = SUB84(pdVar5[0x1d] * dVar35,0);
    local_108._0_8_ = pdVar5[0x1c] * dVar35;
    local_108._12_4_ = (int)((ulonglong)(pdVar5[0x1d] * dVar35) >> 0x20);
    local_f8._8_4_ = SUB84(pdVar5[0x1f] * dVar35,0);
    local_f8._0_8_ = pdVar5[0x1e] * dVar35;
    local_f8._12_4_ = (int)((ulonglong)(pdVar5[0x1f] * dVar35) >> 0x20);
    local_e8._8_4_ = SUB84(pdVar5[0x21] * dVar35,0);
    local_e8._0_8_ = pdVar5[0x20] * dVar35;
    local_e8._12_4_ = (int)((ulonglong)(pdVar5[0x21] * dVar35) >> 0x20);
    pTVar15 = UpdateOrientRK(&local_198,(TQuat<double> *)(pdVar5 + 4),(TMatrix<double> *)local_158,
                             (TVector<double> *)(pdVar5 + 0xd),param_1);
    pFVar27 = pFVar27 + 8;
    dVar34 = pTVar15->Y;
    pdVar5[0x46] = pTVar15->X;
    pdVar5[0x47] = dVar34;
    dVar34 = pTVar15->W;
    pdVar5[0x48] = pTVar15->Z;
    pdVar5[0x49] = dVar34;
  }
  iVar3 = param_3->ArrayNum;
  pFVar22 = (param_3->AllocatorInstance).Data;
  pFVar27 = pFVar22 + (longlong)iVar3 * 0xa0;
  while( true ) {
    if (param_3->ArrayNum != iVar3) {
      `TCheckedPointerIterator<FAnimPhysLinearLimit,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_218);
    }
    if (pFVar22 == pFVar27) break;
    *(undefined4 *)(pFVar22 + 0x58) = *(undefined4 *)(pFVar22 + 0x5c);
    pFVar22 = pFVar22 + 0xa0;
  }
  iVar3 = param_4->ArrayNum;
  pFVar22 = (param_4->AllocatorInstance).Data;
  pFVar27 = pFVar22 + (longlong)iVar3 * 0x40;
  while( true ) {
    if (param_4->ArrayNum != iVar3) {
      `TCheckedPointerIterator<FAnimPhysAngularLimit,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_218);
    }
    if (pFVar22 == pFVar27) break;
    if (0.0 < *(float *)(pFVar22 + 0x30) || *(float *)(pFVar22 + 0x30) == 0.0) {
      fVar31 = *(float *)(pFVar22 + 0x2c);
      if (0.0 <= *(float *)(pFVar22 + 0x2c)) {
        fVar31 = 0.0;
      }
      *(float *)(pFVar22 + 0x2c) = fVar31;
      pFVar22 = pFVar22 + 0x40;
    }
    else {
      *(undefined4 *)(pFVar22 + 0x2c) = 0;
      pFVar22 = pFVar22 + 0x40;
    }
  }
  dVar34 = (double)(ulonglong)(uint)param_12;
  if (0 < param_12) {
    do {
      local_208 = dVar34;
      if (bEnableDetailedStats == false) {
        FVar17 = (FThreadSafeStaticStat<FStat_STAT_AnimDynamicsLinearPost>)
                 &TStatId::TStatId_NAME_None;
      }
      else {
        FVar17 = StatPtr_STAT_AnimDynamicsLinearPost;
        if (StatPtr_STAT_AnimDynamicsLinearPost ==
            (FThreadSafeStaticStat<FStat_STAT_AnimDynamicsLinearPost>)0x0) {
          pFVar16 = ::FName::FName(local_1a8,"STAT_AnimDynamicsLinearPost");
          FVar17 = (FThreadSafeStaticStat<FStat_STAT_AnimDynamicsLinearPost>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimDynamicsLinearPost,
                              *pFVar16,L"Linear Limit Post-Update","STATGROUP_Physics",
                              "STATCAT_Advanced",L"Physics",true,true,ST_int64,true,false,
                              MCR_Invalid);
        }
      }
      FVar23 = *(FName *)FVar17;
      bVar11 = false;
      bVar13 = false;
      local_198.X = 0.0;
      if ((FVar23.ComparisonIndex.Value.Value == 0) && (FVar23.Number == 0)) {
LAB_1474f01c5:
        bVar12 = false;
        FVar23 = (FName)local_198.X;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_214[0].Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_214[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
          bVar11 = false;
          bVar13 = true;
          if (-1 < CpuChannel->Enabled) {
            local_1e0 = FVar23;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_1e0,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimPhysicsSolver.cpp"
                       ,0x3ff);
            bVar11 = true;
            bVar13 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_1474f01c5;
        local_1e8 = FVar23;
        local_198.X = (double)FVar23;
        FThreadStats::AddMessage(FVar23,CycleScopeStart);
        bVar12 = true;
      }
      iVar3 = param_3->ArrayNum;
      pFVar20 = (FAnimPhysLinearLimit *)(param_3->AllocatorInstance).Data;
      pFVar25 = pFVar20 + iVar3;
      while( true ) {
        if (param_3->ArrayNum != iVar3) {
          `TCheckedPointerIterator<FAnimPhysLinearLimit,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_218);
        }
        if (pFVar20 == pFVar25) break;
        FAnimPhysLinearLimit::Iter(pFVar20,param_1);
        pFVar20 = pFVar20 + 1;
      }
      if (bVar13) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar12) {
        FThreadStats::AddMessage(FVar23,CycleScopeEnd);
      }
      if (bEnableDetailedStats == false) {
        FVar18 = (FThreadSafeStaticStat<FStat_STAT_AnimDynamicsAngularPost>)
                 &TStatId::TStatId_NAME_None;
      }
      else {
        FVar18 = StatPtr_STAT_AnimDynamicsAngularPost;
        if (StatPtr_STAT_AnimDynamicsAngularPost ==
            (FThreadSafeStaticStat<FStat_STAT_AnimDynamicsAngularPost>)0x0) {
          pFVar16 = ::FName::FName(&local_178,"STAT_AnimDynamicsAngularPost");
          FVar18 = (FThreadSafeStaticStat<FStat_STAT_AnimDynamicsAngularPost>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimDynamicsAngularPost,
                              *pFVar16,L"Angular Limit Post-Update","STATGROUP_Physics",
                              "STATCAT_Advanced",L"Physics",true,true,ST_int64,true,false,
                              MCR_Invalid);
        }
      }
      FVar23 = *(FName *)FVar18;
      bVar13 = false;
      bVar11 = false;
      local_1b8.ComparisonIndex.Value = 0;
      local_1b8.Number = 0;
      if ((FVar23.ComparisonIndex.Value.Value == 0) && (FVar23.Number == 0)) {
LAB_1474f0361:
        bVar12 = false;
        FVar23 = local_1b8;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_214[0].Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_214[0]._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
          bVar13 = false;
          bVar11 = true;
          if (-1 < CpuChannel->Enabled) {
            local_1f0 = FVar23;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_1f0,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimPhysicsSolver.cpp"
                       ,0x407);
            bVar13 = true;
            bVar11 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_1474f0361;
        local_1f8 = FVar23;
        local_1b8 = FVar23;
        FThreadStats::AddMessage(FVar23,CycleScopeStart);
        bVar13 = false;
        bVar12 = true;
      }
      iVar3 = param_4->ArrayNum;
      pFVar21 = (FAnimPhysAngularLimit *)(param_4->AllocatorInstance).Data;
      pFVar26 = pFVar21 + iVar3;
      while( true ) {
        if (param_4->ArrayNum != iVar3) {
          `TCheckedPointerIterator<FAnimPhysAngularLimit,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_218);
        }
        if (pFVar21 == pFVar26) break;
        FAnimPhysAngularLimit::Iter(pFVar21,param_1);
        pFVar21 = pFVar21 + 1;
      }
      if (bVar11) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar13) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar12) {
        FThreadStats::AddMessage(FVar23,CycleScopeEnd);
      }
      dVar34 = (double)((longlong)local_208 - 1U);
    } while ((longlong)local_208 - 1U != 0);
    local_208 = 0.0;
    param_2 = local_160;
  }
  pFVar27 = (param_2->AllocatorInstance).Data;
  iVar3 = param_2->ArrayNum;
  pFVar22 = pFVar27 + (longlong)iVar3 * 8;
  while( true ) {
    if (param_2->ArrayNum != iVar3) {
      `TCheckedPointerIterator<FAnimPhysRigidBody_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_218);
    }
    if (pFVar27 == pFVar22) break;
    UpdatePose(*(FAnimPhysRigidBody **)pFVar27);
    pFVar27 = pFVar27 + 8;
  }
  if ((local_1d8.EmittedEvent & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_1d8.EmittedEvent & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_1d8.EmittedEvent & 4) != 0) {
    FThreadStats::AddMessage(local_1d8.StatId,CycleScopeEnd);
  }
  return;
}

// ScaleRigidBodyMass @ 1474f70b0

void __cdecl FAnimPhys::ScaleRigidBodyMass(FAnimPhysRigidBody *param_1,float param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  float fVar34;
  
  fVar34 = __real_3f800000 / param_2;
  param_1->Mass = param_2 * param_1->Mass;
  dVar25 = (double)param_2;
  param_1->_padding_ = (longlong)(dVar25 * (double)param_1->_padding_);
  param_1->_padding_ = (longlong)(dVar25 * (double)param_1->_padding_);
  param_1->_padding_ = (longlong)(dVar25 * (double)param_1->_padding_);
  param_1->InverseMass = fVar34 * param_1->InverseMass;
  param_1->_padding_ = (longlong)(dVar25 * (double)param_1->_padding_);
  param_1->_padding_ = (longlong)(dVar25 * (double)param_1->_padding_);
  dVar33 = (double)fVar34;
  param_1->_padding_ = (longlong)(dVar25 * (double)param_1->_padding_);
  dVar26 = (param_1->InverseWorldSpaceTensor).M[0][2];
  dVar27 = (param_1->InverseWorldSpaceTensor).M[1][0];
  dVar28 = (param_1->InverseWorldSpaceTensor).M[1][2];
  dVar29 = (param_1->InverseWorldSpaceTensor).M[2][0];
  dVar30 = (param_1->InverseWorldSpaceTensor).M[2][2];
  dVar31 = (param_1->InverseWorldSpaceTensor).M[3][0];
  dVar32 = (param_1->InverseWorldSpaceTensor).M[3][2];
  dVar3 = (param_1->InverseWorldSpaceTensor).M[3][3];
  dVar22 = dVar33 * (param_1->InverseWorldSpaceTensor).M[0][1];
  dVar21 = (param_1->InverseWorldSpaceTensor).M[0][3] * dVar33;
  dVar18 = (param_1->InverseWorldSpaceTensor).M[1][1] * dVar33;
  dVar15 = (param_1->InverseWorldSpaceTensor).M[1][3] * dVar33;
  dVar12 = (param_1->InverseWorldSpaceTensor).M[2][1] * dVar33;
  dVar9 = (param_1->InverseWorldSpaceTensor).M[2][3] * dVar33;
  dVar6 = (param_1->InverseWorldSpaceTensor).M[3][1] * dVar33;
  auVar23._8_4_ = SUB84(dVar22,0);
  auVar23._0_8_ = dVar33 * (param_1->InverseWorldSpaceTensor).M[0][0];
  auVar23._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  *(undefined1 (*) [16])(param_1->InverseWorldSpaceTensor).M[0] = auVar23;
  auVar19._8_4_ = SUB84(dVar21,0);
  auVar19._0_8_ = dVar26 * dVar33;
  auVar19._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  *(undefined1 (*) [16])((param_1->InverseWorldSpaceTensor).M[0] + 2) = auVar19;
  auVar16._8_4_ = SUB84(dVar18,0);
  auVar16._0_8_ = dVar27 * dVar33;
  auVar16._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  *(undefined1 (*) [16])(param_1->InverseWorldSpaceTensor).M[1] = auVar16;
  auVar13._8_4_ = SUB84(dVar15,0);
  auVar13._0_8_ = dVar28 * dVar33;
  auVar13._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  *(undefined1 (*) [16])((param_1->InverseWorldSpaceTensor).M[1] + 2) = auVar13;
  auVar10._8_4_ = SUB84(dVar12,0);
  auVar10._0_8_ = dVar29 * dVar33;
  auVar10._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])(param_1->InverseWorldSpaceTensor).M[2] = auVar10;
  auVar7._8_4_ = SUB84(dVar9,0);
  auVar7._0_8_ = dVar30 * dVar33;
  auVar7._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])((param_1->InverseWorldSpaceTensor).M[2] + 2) = auVar7;
  auVar4._8_4_ = SUB84(dVar6,0);
  auVar4._0_8_ = dVar31 * dVar33;
  auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(param_1->InverseWorldSpaceTensor).M[3] = auVar4;
  dVar3 = dVar3 * dVar33;
  auVar1._8_4_ = SUB84(dVar3,0);
  auVar1._0_8_ = dVar32 * dVar33;
  auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])((param_1->InverseWorldSpaceTensor).M[3] + 2) = auVar1;
  dVar26 = (param_1->InertiaTensor).M[0][2];
  dVar27 = (param_1->InertiaTensor).M[1][0];
  dVar28 = (param_1->InertiaTensor).M[1][2];
  dVar29 = (param_1->InertiaTensor).M[2][0];
  dVar30 = (param_1->InertiaTensor).M[2][2];
  dVar31 = (param_1->InertiaTensor).M[3][0];
  dVar22 = dVar25 * (param_1->InertiaTensor).M[0][1];
  dVar21 = (param_1->InertiaTensor).M[0][3] * dVar25;
  dVar18 = (param_1->InertiaTensor).M[1][1] * dVar25;
  dVar15 = (param_1->InertiaTensor).M[1][3] * dVar25;
  dVar12 = (param_1->InertiaTensor).M[2][1] * dVar25;
  dVar9 = (param_1->InertiaTensor).M[2][3] * dVar25;
  dVar6 = (param_1->InertiaTensor).M[3][1] * dVar25;
  dVar32 = (param_1->InertiaTensor).M[3][2];
  dVar3 = (param_1->InertiaTensor).M[3][3];
  auVar24._8_4_ = SUB84(dVar22,0);
  auVar24._0_8_ = dVar25 * (param_1->InertiaTensor).M[0][0];
  auVar24._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  *(undefined1 (*) [16])(param_1->InertiaTensor).M[0] = auVar24;
  auVar20._8_4_ = SUB84(dVar21,0);
  auVar20._0_8_ = dVar26 * dVar25;
  auVar20._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  *(undefined1 (*) [16])((param_1->InertiaTensor).M[0] + 2) = auVar20;
  auVar17._8_4_ = SUB84(dVar18,0);
  auVar17._0_8_ = dVar27 * dVar25;
  auVar17._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  *(undefined1 (*) [16])(param_1->InertiaTensor).M[1] = auVar17;
  auVar14._8_4_ = SUB84(dVar15,0);
  auVar14._0_8_ = dVar28 * dVar25;
  auVar14._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  *(undefined1 (*) [16])((param_1->InertiaTensor).M[1] + 2) = auVar14;
  auVar11._8_4_ = SUB84(dVar12,0);
  auVar11._0_8_ = dVar29 * dVar25;
  auVar11._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])(param_1->InertiaTensor).M[2] = auVar11;
  auVar8._8_4_ = SUB84(dVar9,0);
  auVar8._0_8_ = dVar30 * dVar25;
  auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])((param_1->InertiaTensor).M[2] + 2) = auVar8;
  dVar3 = dVar3 * dVar25;
  auVar5._8_4_ = SUB84(dVar6,0);
  auVar5._0_8_ = dVar31 * dVar25;
  auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(param_1->InertiaTensor).M[3] = auVar5;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = dVar32 * dVar25;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])((param_1->InertiaTensor).M[3] + 2) = auVar2;
  return;
}

// UpdateOrientRK @ 147500770

TQuat<double> * __cdecl
FAnimPhys::UpdateOrientRK
          (TQuat<double> *__return_storage_ptr__,TQuat<double> *param_1,TMatrix<double> *param_2,
          TVector<double> *param_3,float param_4)

{
  double dVar1;
  double dVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  double dVar15;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar16;
  double dVar23;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined4 uVar31;
  uint uVar32;
  uint uVar33;
  TQuat<double> local_c8;
  undefined1 local_a8 [24];
  double dStack_90;
  undefined1 local_88 [16];
  undefined1 local_78 [112];
  
  DiffQ(&local_c8,param_1,param_2,param_3);
  dVar16 = (double)(param_4 * __real_3f000000);
  uVar31 = (undefined4)((ulonglong)dVar16 >> 0x20);
  auVar17._8_4_ = SUB84(dVar16,0);
  auVar17._0_8_ = dVar16;
  auVar17._12_4_ = uVar31;
  local_a8._0_8_ = dVar16 * local_c8.X + param_1->X;
  local_a8._8_8_ = auVar17._8_8_ * local_c8.Y + param_1->Y;
  dVar1 = local_c8.W * dVar16 + param_1->W;
  unique0x100000c4 = SUB84(dVar1,0);
  local_a8._16_8_ = local_c8.Z * dVar16 + param_1->Z;
  unique0x100000c8 = (int)((ulonglong)dVar1 >> 0x20);
  DiffQ((TQuat<double> *)local_88,(TQuat<double> *)local_a8,param_2,param_3);
  uVar11 = local_78._0_8_;
  uVar12 = local_78._8_8_;
  uVar9 = local_88._0_8_;
  uVar10 = local_88._8_8_;
  auVar18._8_4_ = SUB84(dVar16,0);
  auVar18._0_8_ = dVar16;
  auVar18._12_4_ = uVar31;
  dVar1 = (double)local_78._8_8_ * dVar16 + param_1->W;
  local_78._8_4_ = SUB84(dVar1,0);
  local_78._0_8_ = (double)local_78._0_8_ * dVar16 + param_1->Z;
  local_78._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_88._8_8_ = auVar18._8_8_ * (double)local_88._8_8_ + param_1->Y;
  local_88._0_8_ = dVar16 * (double)local_88._0_8_ + param_1->X;
  DiffQ((TQuat<double> *)local_a8,(TQuat<double> *)local_88,param_2,param_3);
  uVar7 = local_a8._8_8_;
  uVar6 = local_a8._0_8_;
  uVar8 = local_a8._16_8_;
  dVar4 = dStack_90;
  dVar15 = (double)param_4;
  dVar16 = dVar15 * (double)local_a8._8_8_ + param_1->Y;
  dVar1 = dStack_90 * dVar15 + param_1->W;
  local_88._8_4_ = SUB84(dVar16,0);
  local_88._0_8_ = dVar15 * (double)local_a8._0_8_ + param_1->X;
  local_88._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  local_78._8_4_ = SUB84(dVar1,0);
  local_78._0_8_ = (double)local_a8._16_8_ * dVar15 + param_1->Z;
  local_78._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  DiffQ((TQuat<double> *)local_a8,(TQuat<double> *)local_88,param_2,param_3);
  dVar5 = __real_3e45798ee0000000;
  dVar15 = (double)(param_4 * __real_3eaaaaab);
  dVar24 = (double)(param_4 * __real_3e2aaaab);
  auVar26._8_4_ = SUB84(dVar24,0);
  auVar26._0_8_ = dVar24;
  auVar26._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  auVar19._8_4_ = SUB84(dVar15,0);
  auVar19._0_8_ = dVar15;
  auVar19._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  auVar27._0_8_ =
       dVar24 * local_c8.X + param_1->X + dVar15 * (double)uVar9 + dVar15 * (double)uVar6 +
       dVar24 * (double)local_a8._0_8_;
  auVar27._8_8_ =
       auVar26._8_8_ * local_c8.Y + param_1->Y + dVar15 * (double)uVar10 +
       auVar19._8_8_ * (double)uVar7 + dVar24 * (double)local_a8._8_8_;
  dVar1 = param_1->Z;
  dVar16 = param_1->W;
  __return_storage_ptr__->X = auVar27._0_8_;
  __return_storage_ptr__->Y = auVar27._8_8_;
  dVar2 = local_c8.Z * dVar24 + dVar1 + (double)uVar11 * dVar15 + (double)uVar8 * dVar15 +
          (double)local_a8._16_8_ * dVar24;
  dVar15 = local_c8.W * dVar24 + dVar16 + (double)uVar12 * dVar15 + dVar4 * dVar15 +
           dStack_90 * dVar24;
  uVar31 = (undefined4)((ulonglong)dVar15 >> 0x20);
  auVar29._8_4_ = SUB84(dVar15,0);
  auVar29._0_8_ = dVar2;
  auVar29._12_4_ = uVar31;
  __return_storage_ptr__->Z = dVar2;
  __return_storage_ptr__->W = (double)auVar29._8_8_;
  dVar4 = __return_storage_ptr__->X;
  dVar24 = __return_storage_ptr__->Y;
  auVar20._8_4_ = SUB84(dVar15,0);
  auVar20._0_8_ = dVar2;
  auVar20._12_4_ = uVar31;
  dVar16 = dVar2 * dVar2 + dVar4 * dVar4;
  dVar23 = auVar20._8_8_ * dVar15 + dVar24 * dVar24;
  dVar1 = dVar23 + dVar16;
  dVar16 = dVar16 + dVar23;
  auVar28._8_4_ = SUB84(dVar16,0);
  auVar28._0_8_ = dVar1;
  auVar28._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  auVar28 = sqrtpd(auVar27,auVar28);
  uVar13 = -(ulonglong)(dVar5 <= dVar1);
  uVar14 = -(ulonglong)(dVar5 <= dVar16);
  uVar32 = (uint)(uVar13 >> 0x20);
  uVar33 = (uint)(uVar14 >> 0x20);
  auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar28);
  auVar30._0_8_ = uVar13 & (ulonglong)(auVar29._0_8_ * dVar4);
  uVar3 = uVar14 & (ulonglong)(auVar29._8_8_ * dVar24);
  auVar30._8_4_ = (undefined4)uVar3;
  auVar30._12_4_ = (undefined4)(uVar3 >> 0x20);
  auVar21._0_4_ = ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar21._4_4_ =
       ~uVar32 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar21._8_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar21._12_4_ =
       ~uVar33 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar28);
  auVar25._0_4_ = ~(uint)uVar13 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar25._4_4_ =
       ~uVar32 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar25._8_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar25._12_4_ =
       ~uVar33 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar22._0_8_ = (ulonglong)(auVar28._0_8_ * dVar2) & uVar13;
  uVar14 = (ulonglong)(auVar28._8_8_ * dVar15) & uVar14;
  auVar22._8_4_ = (undefined4)uVar14;
  auVar22._12_4_ = (undefined4)(uVar14 >> 0x20);
  __return_storage_ptr__->X = (double)SUB168(auVar30 | auVar21,0);
  __return_storage_ptr__->Y = (double)SUB168(auVar30 | auVar21,8);
  __return_storage_ptr__->Z = (double)SUB168(auVar25 | auVar22,0);
  __return_storage_ptr__->W = (double)SUB168(auVar25 | auVar22,8);
  return __return_storage_ptr__;
}

// UpdatePose @ 147500a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FAnimPhys::UpdatePose(FAnimPhysRigidBody *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_AnimDynamicsPoseUpdate> FVar13;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FName FVar14;
  FNameEntryId FVar15;
  FNameEntryId FVar16;
  longlong lVar17;
  double dVar18;
  undefined1 auStackY_348 [32];
  LARGE_INTEGER local_2e8;
  FName local_2e0;
  FStatMessage local_2d0;
  TMatrix<double> local_2b8;
  TMatrix<double> local_238;
  TMatrix<double> local_1b8;
  TMatrix<double> local_138;
  TMatrix<double> local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_348;
  lVar17 = 0;
  FVar16.Value = 0;
  if (bEnableDetailedStats) {
    FVar13 = StatPtr_STAT_AnimDynamicsPoseUpdate;
    if (StatPtr_STAT_AnimDynamicsPoseUpdate ==
        (FThreadSafeStaticStat<FStat_STAT_AnimDynamicsPoseUpdate>)0x0) {
      pFVar12 = ::FName::FName((FName *)&local_2d0,"STAT_AnimDynamicsPoseUpdate");
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_AnimDynamicsPoseUpdate>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimDynamicsPoseUpdate,*pFVar12
                          ,L"Pose Update","STATGROUP_Physics","STATCAT_Advanced",L"Physics",true,
                          true,ST_int64,true,false,MCR_Invalid);
    }
  }
  else {
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_AnimDynamicsPoseUpdate>)&TStatId::TStatId_NAME_None;
  }
  FVar14 = *(FName *)FVar13;
  bVar8 = false;
  bVar10 = false;
  local_2e0.ComparisonIndex.Value = 0;
  local_2e0.Number = 0;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar11 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2e8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2e8.s,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2e8.s.LowPart = FVar15.Value;
        local_2e8.s.HighPart = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_2e8.s,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimPhysicsSolver.cpp"
                   ,0x390);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_2e8.s.LowPart = FVar15.Value;
      local_2e8.s.HighPart = uVar11;
      local_2e0 = FVar14;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      FVar16.Value = local_2e0.ComparisonIndex.Value;
      goto LAB_147500b76;
    }
  }
  bVar9 = false;
  FVar14 = local_2e0;
LAB_147500b76:
  dVar4 = (double)param_1->_padding_;
  plVar1 = &param_1->_padding_;
  dVar18 = (double)param_1->_padding_;
  (param_1->PreviousPosition).field0_0x0._s_0.X = (double)param_1->_padding_;
  (param_1->PreviousPosition).field0_0x0._s_0.Y = dVar4;
  dVar4 = (double)*plVar1;
  dVar6 = (double)param_1->_padding_;
  (param_1->PreviousPosition).field0_0x0._s_0.Z = dVar18;
  dVar18 = (double)param_1->_padding_;
  dVar7 = (double)param_1->_padding_;
  (param_1->PreviousOrientation).X = dVar4;
  (param_1->PreviousOrientation).Y = dVar6;
  dVar4 = (param_1->NextPosition).field0_0x0._s_0.X;
  dVar6 = (param_1->NextPosition).field0_0x0._s_0.Y;
  (param_1->PreviousOrientation).Z = dVar18;
  (param_1->PreviousOrientation).W = dVar7;
  dVar18 = (param_1->NextPosition).field0_0x0._s_0.Z;
  param_1->_padding_ = (longlong)dVar4;
  param_1->_padding_ = (longlong)dVar6;
  dVar4 = (param_1->NextOrientation).X;
  dVar6 = (param_1->NextOrientation).Y;
  param_1->_padding_ = (longlong)dVar18;
  dVar18 = (param_1->NextOrientation).Z;
  dVar7 = (param_1->NextOrientation).W;
  *plVar1 = (longlong)dVar4;
  param_1->_padding_ = (longlong)dVar6;
  param_1->_padding_ = (longlong)dVar18;
  param_1->_padding_ = (longlong)dVar7;
  UE::Math::TQuatRotationMatrix<double>::Make(&local_2b8,(TQuat<double> *)plVar1);
  VectorMatrixMultiply(&local_138,&local_2b8,&param_1->InverseTensorWithoutMass);
  dVar18 = (double)param_1->InverseMass;
  do {
    dVar7 = *(double *)((longlong)local_138.M[0] + lVar17 + 0x10);
    dVar4 = *(double *)((longlong)local_138.M[0] + lVar17 + 8) * dVar18;
    dVar6 = *(double *)((longlong)local_138.M[0] + lVar17 + 0x18) * dVar18;
    auVar3._8_4_ = SUB84(dVar4,0);
    auVar3._0_8_ = *(double *)((longlong)local_138.M[0] + lVar17) * dVar18;
    auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *(undefined1 (*) [16])((longlong)local_b8.M[0] + lVar17) = auVar3;
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = dVar7 * dVar18;
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])((longlong)local_b8.M[0] + lVar17 + 0x10) = auVar5;
    lVar17 = lVar17 + 0x20;
  } while (lVar17 < 0x80);
  local_238.M[0][0] = local_2b8.M[0][0];
  local_238.M[0][1] = local_2b8.M[1][0];
  local_238.M[0][2] = local_2b8.M[2][0];
  local_238.M[0][3] = local_2b8.M[3][0];
  local_238.M[1][0] = local_2b8.M[0][1];
  local_238.M[1][1] = local_2b8.M[1][1];
  local_238.M[1][2] = local_2b8.M[2][1];
  local_238.M[1][3] = local_2b8.M[3][1];
  local_238.M[2][0] = local_2b8.M[0][2];
  local_238.M[2][1] = local_2b8.M[1][2];
  local_238.M[2][2] = local_2b8.M[2][2];
  local_238.M[2][3] = local_2b8.M[3][2];
  local_238.M[3][0] = local_2b8.M[0][3];
  local_238.M[3][1] = local_2b8.M[1][3];
  local_238.M[3][2] = local_2b8.M[2][3];
  local_238.M[3][3] = local_2b8.M[3][3];
  VectorMatrixMultiply(&local_1b8,&local_b8,&local_238);
  (param_1->InverseWorldSpaceTensor).M[0][0] = local_1b8.M[0][0];
  (param_1->InverseWorldSpaceTensor).M[0][1] = local_1b8.M[0][1];
  (param_1->InverseWorldSpaceTensor).M[0][2] = local_1b8.M[0][2];
  (param_1->InverseWorldSpaceTensor).M[0][3] = local_1b8.M[0][3];
  (param_1->InverseWorldSpaceTensor).M[1][0] = local_1b8.M[1][0];
  (param_1->InverseWorldSpaceTensor).M[1][1] = local_1b8.M[1][1];
  (param_1->InverseWorldSpaceTensor).M[1][2] = local_1b8.M[1][2];
  (param_1->InverseWorldSpaceTensor).M[1][3] = local_1b8.M[1][3];
  (param_1->InverseWorldSpaceTensor).M[2][0] = local_1b8.M[2][0];
  (param_1->InverseWorldSpaceTensor).M[2][1] = local_1b8.M[2][1];
  (param_1->InverseWorldSpaceTensor).M[2][2] = local_1b8.M[2][2];
  (param_1->InverseWorldSpaceTensor).M[2][3] = local_1b8.M[2][3];
  (param_1->InverseWorldSpaceTensor).M[3][0] = local_1b8.M[3][0];
  (param_1->InverseWorldSpaceTensor).M[3][1] = local_1b8.M[3][1];
  (param_1->InverseWorldSpaceTensor).M[3][2] = local_1b8.M[3][2];
  (param_1->InverseWorldSpaceTensor).M[3][3] = local_1b8.M[3][3];
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_2d0.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_2d0.NameAndInfo.Index.Value = FVar16.Value;
      QueryPerformanceCounter(&local_2e8);
      local_2d0.StatData.Pad[4] = '\0';
      local_2d0.StatData.Pad[5] = '\0';
      local_2d0.StatData.Pad[6] = '\0';
      local_2d0.StatData.Pad[7] = '\0';
      local_2d0.StatData.Pad[0] = local_2e8.s.LowPart._0_1_;
      local_2d0.StatData.Pad[1] = local_2e8.s.LowPart._1_1_;
      local_2d0.StatData.Pad[2] = local_2e8.s.LowPart._2_1_;
      local_2d0.StatData.Pad[3] = local_2e8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_2d0);
      piVar2 = &this->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return;
}

