// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// GetHullMesh @ 14c8f4550

FDynamicMesh3 * __thiscall
UE::Geometry::FConvexDecomposition3::GetHullMesh
          (FConvexDecomposition3 *this,FDynamicMesh3 *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  FIndex3i *pFVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FDynamicMesh3 *pFVar8;
  TVector<double> *pTVar9;
  uint uVar10;
  FIndex3i *pFVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  FDynamicMesh3 *local_res10;
  uint local_res18;
  TVector<double>_u_0 local_108;
  undefined8 local_f0;
  float local_e8;
  undefined8 local_e4;
  float local_dc;
  TVector2<float>_u_0 local_d8;
  undefined2 local_d0;
  undefined1 local_ce;
  TVector<double>_u_0 local_c8;
  undefined8 local_b0;
  float local_a8;
  undefined8 local_a4;
  float local_9c;
  TVector2<float>_u_0 local_98;
  undefined2 local_90;
  undefined1 local_8e;
  TVector<double>_u_0 local_88;
  double local_60;
  TVector<double> local_58;
  
  local_res10 = __return_storage_ptr__;
  local_res18 = param_1;
  FDynamicMesh3::FDynamicMesh3(__return_storage_ptr__);
  uVar13 = (ulonglong)(int)local_res18;
  uVar10 = 0;
  uVar15 = ~local_res18 >> 0x1f;
  uVar14 = uVar13;
  do {
    while( true ) {
      uVar7 = 0;
      if ((int)(uint)uVar14 < (this->Decomposition).Array.ArrayNum) {
        uVar7 = uVar15;
      }
      uVar12 = (uint)uVar14;
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar12 = local_res18, bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FDynamicMesh3 *)(*pcVar5)();
        return pFVar8;
      }
      iVar3 = (this->Decomposition).Array.ArrayNum;
      lVar4 = *(longlong *)((this->Decomposition).Array.AllocatorInstance.Data + uVar13 * 8);
      if (*(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24) <= (int)uVar10) {
        uVar10 = 0;
        if ((int)uVar12 < iVar3) {
          uVar10 = uVar15;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FDynamicMesh3 *)(*pcVar5)();
          return pFVar8;
        }
        lVar4 = *(longlong *)((this->Decomposition).Array.AllocatorInstance.Data + uVar13 * 8);
        iVar3 = *(int *)(lVar4 + 0x238);
        pFVar11 = *(FIndex3i **)(lVar4 + 0x230);
        pFVar2 = pFVar11 + iVar3;
        while( true ) {
          if (*(int *)(lVar4 + 0x238) != iVar3) {
            `TCheckedPointerIterator<UE::Geometry::FIndex3i_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (pFVar11 == pFVar2) break;
          FDynamicMesh3::AppendTriangle(__return_storage_ptr__,pFVar11,0);
          pFVar11 = pFVar11 + 1;
        }
        return __return_storage_ptr__;
      }
      uVar7 = 0;
      if ((int)uVar12 < iVar3) {
        uVar7 = uVar15;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar12 = local_res18, bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FDynamicMesh3 *)(*pcVar5)();
        return pFVar8;
      }
      lVar4 = *(longlong *)((this->Decomposition).Array.AllocatorInstance.Data + uVar13 * 8);
      if ((-1 < (int)uVar10) &&
         ((int)uVar10 < *(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24))) break;
LAB_14c8f47ca:
      local_a8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_c8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_c8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_9c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_c8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_b0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_a4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      local_98 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_90 = 0;
      local_8e = 0;
      FDynamicMesh3::AppendVertex(__return_storage_ptr__,(FVertexInfo *)&local_c8._s_0);
      uVar14 = (ulonglong)local_res18;
      uVar10 = uVar10 + 1;
    }
    uVar14 = (ulonglong)(uVar10 & 0x1ff);
    __return_storage_ptr__ = local_res10;
    if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      (*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar10 >> 9) * 8) +
                                    uVar14 * 2) - 1U)) goto LAB_14c8f47ca;
    uVar7 = 0;
    if ((int)uVar12 < (this->Decomposition).Array.ArrayNum) {
      uVar7 = uVar15;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FDynamicMesh3 *)(*pcVar5)();
      return pFVar8;
    }
    lVar4 = *(longlong *)
             (*(longlong *)
               (*(longlong *)((this->Decomposition).Array.AllocatorInstance.Data + uVar13 * 8) +
               0x10) + (ulonglong)(uVar10 >> 9) * 8);
    pdVar1 = (double *)(lVar4 + uVar14 * 0x18);
    local_60 = *(double *)(lVar4 + 0x10 + uVar14 * 0x18);
    local_88._s_0.X = *pdVar1 * (this->ResultTransform).Scale3D.field0_0x0._s_0.X;
    local_88._s_0.Z = local_60 * (this->ResultTransform).Scale3D.field0_0x0._s_0.Z;
    local_88._s_0.Y = pdVar1[1] * (this->ResultTransform).Scale3D.field0_0x0._s_0.Y;
    pTVar9 = operator*<double>(&local_58,&(this->ResultTransform).Rotation,
                               (TVector<double> *)&local_88._s_0);
    __return_storage_ptr__ = local_res10;
    local_108._s_0.X =
         (this->ResultTransform).Translation.field0_0x0._s_0.X + (pTVar9->field0_0x0)._s_0.X;
    local_108._s_0.Y =
         (this->ResultTransform).Translation.field0_0x0._s_0.Y + (pTVar9->field0_0x0)._s_0.Y;
    local_d0 = 0;
    local_ce = 0;
    local_108._s_0.Z =
         (this->ResultTransform).Translation.field0_0x0._s_0.Z + (pTVar9->field0_0x0)._s_0.Z;
    local_e8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_dc = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_f0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_e4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_d8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    FDynamicMesh3::AppendVertex(local_res10,(FVertexInfo *)&local_108._s_0);
    uVar14 = (ulonglong)local_res18;
    uVar10 = uVar10 + 1;
  } while( true );
}

