// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 2

// FindNearestPoint_LinearSearch @ 14cb092e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __cdecl
UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::FindNearestPoint_LinearSearch
          (TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,TVector<double> *param_2)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  TVector<double> *pTVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStackY_178 [32];
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 TStack_130;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_f8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double local_80;
  double dStack_78;
  double local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_178;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  uVar12 = (undefined4)__real_7fefffffffffffff;
  uVar13 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  uVar11 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  uVar10 = 0;
  if ((uVar11 != 0) &&
     (pFVar2 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar10 = 0,
     0xfffd < (ushort)(**(short **)pFVar2 - 1U))) {
    uVar9 = 1;
    uVar10 = 1;
    if (1 < (int)uVar11) {
      do {
        lVar3 = *(longlong *)(pFVar2 + (ulonglong)(uVar9 >> 9) * 8);
        if ((*(short *)(lVar3 + (ulonglong)(uVar9 & 0x1ff) * 2) != 0) &&
           (uVar10 = uVar9, *(short *)(lVar3 + (ulonglong)(uVar9 & 0x1ff) * 2) != -1)) break;
        uVar9 = uVar9 + 1;
        uVar10 = uVar9;
      } while ((int)uVar9 < (int)uVar11);
    }
  }
joined_r0x00014cb093a8:
  do {
    if (uVar10 == uVar11) {
      return __return_storage_ptr__;
    }
    while( true ) {
      dVar1 = (param_2->field0_0x0)._s_0.Z;
      dVar5 = (param_2->field0_0x0)._s_0.X;
      dVar6 = (param_2->field0_0x0)._s_0.Y;
      if (((((int)uVar10 < 0) ||
           ((int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (param_1->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar10)) ||
          (0xfffd < (ushort)(*(short *)(*(longlong *)
                                         ((param_1->TriangleRefCounts).RefCounts.Blocks.
                                          AllocatorInstance.Data + (ulonglong)(uVar10 >> 9) * 8) +
                                       (ulonglong)(uVar10 & 0x1ff) * 2) - 1U))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mesh.IsTriangle(TriIdx)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                             ,0x1e,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TVector<double> *)(*pcVar4)();
        return pTVar8;
      }
      FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                (param_1,uVar10,(TVector<double> *)&local_148._s_0,
                 (TVector<double> *)&TStack_130._s_0,(TVector<double> *)&local_118._s_0);
      local_e0 = local_148._s_0.X;
      dStack_d8 = local_148._s_0.Y;
      local_c0 = TStack_130._s_0.Y;
      dStack_b8 = TStack_130._s_0.Z;
      local_d0 = local_148._s_0.Z;
      dStack_c8 = TStack_130._s_0.X;
      local_a0 = local_118._s_0.Z;
      local_b0 = local_118._s_0.X;
      dStack_a8 = local_118._s_0.Y;
      local_f8._s_0.X = dVar5;
      local_f8._s_0.Y = dVar6;
      local_f8._s_0.Z = dVar1;
      TDistPoint3Triangle3<double>::ComputeResult((TDistPoint3Triangle3<double> *)&local_f8._s_0);
      dVar1 = TDistPoint3Triangle3<double>::ComputeResult
                        ((TDistPoint3Triangle3<double> *)&local_f8._s_0);
      if (dVar1 < (double)CONCAT44(uVar13,uVar12)) {
        dVar1 = TDistPoint3Triangle3<double>::ComputeResult
                          ((TDistPoint3Triangle3<double> *)&local_f8._s_0);
        uVar12 = SUB84(dVar1,0);
        uVar13 = (undefined4)((ulonglong)dVar1 >> 0x20);
        (__return_storage_ptr__->field0_0x0)._s_0.X = local_80;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_78;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = local_70;
      }
      uVar10 = uVar10 + 1;
      if ((int)uVar11 <= (int)uVar10) break;
      while( true ) {
        lVar3 = *(longlong *)
                 ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                 (ulonglong)(uVar10 >> 9) * 8);
        if ((*(short *)(lVar3 + (ulonglong)(uVar10 & 0x1ff) * 2) != 0) &&
           (*(short *)(lVar3 + (ulonglong)(uVar10 & 0x1ff) * 2) != -1)) break;
        uVar10 = uVar10 + 1;
        if ((int)uVar11 <= (int)uVar10) goto joined_r0x00014cb093a8;
      }
    }
  } while( true );
}

// TriangleDistance @ 14cb435d0

TDistPoint3Triangle3<double> * __cdecl
UE::Geometry::TMeshQueries<UE::Geometry::FColliderMesh>::TriangleDistance
          (TDistPoint3Triangle3<double> *__return_storage_ptr__,FColliderMesh *param_1,int param_2,
          TVector<double> *param_3)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  TDistPoint3Triangle3<double> *pTVar5;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 TStack_40;
  TVector<double>_u_0 local_28;
  
  if ((param_2 < 0) || ((param_1->Triangles).ArrayNum <= param_2)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mesh.IsTriangle(TriIdx)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                       ,0x1e,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TDistPoint3Triangle3<double> *)(*pcVar2)();
      return pTVar5;
    }
  }
  FColliderMesh::GetTriVertices
            (param_1,param_2,(TVector<double> *)&local_58._s_0,(TVector<double> *)&TStack_40._s_0,
             (TVector<double> *)&local_28._s_0);
  dVar3 = (param_3->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->Point).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  (__return_storage_ptr__->Point).field0_0x0._s_0.Y = dVar3;
  (__return_storage_ptr__->Triangle).V[0].field0_0x0._s_0.X = local_58._s_0.X;
  (__return_storage_ptr__->Triangle).V[0].field0_0x0._s_0.Y = local_58._s_0.Y;
  (__return_storage_ptr__->Point).field0_0x0._s_0.Z = dVar1;
  (__return_storage_ptr__->Triangle).V[0].field0_0x0._s_0.Z = local_58._s_0.Z;
  (__return_storage_ptr__->Triangle).V[1].field0_0x0._s_0.X = TStack_40._s_0.X;
  (__return_storage_ptr__->Triangle).V[1].field0_0x0._s_0.Y = TStack_40._s_0.Y;
  (__return_storage_ptr__->Triangle).V[1].field0_0x0._s_0.Z = TStack_40._s_0.Z;
  (__return_storage_ptr__->Triangle).V[2].field0_0x0._s_0.X = local_28._s_0.X;
  (__return_storage_ptr__->Triangle).V[2].field0_0x0._s_0.Y = local_28._s_0.Y;
  (__return_storage_ptr__->Triangle).V[2].field0_0x0._s_0.Z = local_28._s_0.Z;
  TDistPoint3Triangle3<double>::ComputeResult(__return_storage_ptr__);
  return __return_storage_ptr__;
}

