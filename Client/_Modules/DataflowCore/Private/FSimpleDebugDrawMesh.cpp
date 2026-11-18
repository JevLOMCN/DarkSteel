// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// GetMaxTriangleIndex @ 14444bb50

int __thiscall FSimpleDebugDrawMesh::GetMaxTriangleIndex(FSimpleDebugDrawMesh *this)

{
  return (this->Triangles).ArrayNum;
}

// GetMaxVertexIndex @ 14444bb80

int __thiscall FSimpleDebugDrawMesh::GetMaxVertexIndex(FSimpleDebugDrawMesh *this)

{
  return (this->Vertices).ArrayNum;
}

// GetTriangle @ 14444e3e0

TIntVector3<int> * __thiscall
FSimpleDebugDrawMesh::GetTriangle
          (FSimpleDebugDrawMesh *this,TIntVector3<int> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TIntVector3<int> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Triangles).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TIntVector3<int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pFVar2 = (this->Triangles).AllocatorInstance.Data;
  iVar1 = *(int *)(pFVar2 + (longlong)param_1 * 0xc + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)(pFVar2 + (longlong)param_1 * 0xc);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = iVar1;
  return __return_storage_ptr__;
}

// GetVertexNormal @ 14444f390

TVector<double> * __thiscall
FSimpleDebugDrawMesh::GetVertexNormal
          (FSimpleDebugDrawMesh *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  TVector<double> *pTVar8;
  
  uVar7 = 0;
  if (param_1 < (this->VertexNormals).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TVector<double> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pFVar3 = (this->VertexNormals).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)param_1 * 0x18;
  dVar5 = *(double *)(pFVar1 + 8);
  dVar2 = *(double *)(pFVar3 + (longlong)param_1 * 0x18 + 0x10);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)pFVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// GetVertexPosition @ 14444f4c0

TVector<double> * __thiscall
FSimpleDebugDrawMesh::GetVertexPosition
          (FSimpleDebugDrawMesh *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  TVector<double> *pTVar8;
  
  uVar7 = 0;
  if (param_1 < (this->Vertices).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TVector<double> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pFVar3 = (this->Vertices).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)param_1 * 0x18;
  dVar5 = *(double *)(pFVar1 + 8);
  dVar2 = *(double *)(pFVar3 + (longlong)param_1 * 0x18 + 0x10);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)pFVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// IsValidTriangle @ 1444519d0

bool __thiscall FSimpleDebugDrawMesh::IsValidTriangle(FSimpleDebugDrawMesh *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < (this->Triangles).ArrayNum)) {
    return true;
  }
  return false;
}

// IsValidVertex @ 144451a50

bool __thiscall FSimpleDebugDrawMesh::IsValidVertex(FSimpleDebugDrawMesh *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < (this->Vertices).ArrayNum)) {
    return true;
  }
  return false;
}

// MakeRectangleMesh @ 144451c00

void __thiscall
FSimpleDebugDrawMesh::MakeRectangleMesh
          (FSimpleDebugDrawMesh *this,TVector<double> *param_1,float param_2,float param_3,
          int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  double dVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  char cVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  int iVar25;
  ulonglong uVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  double dVar30;
  double dVar31;
  double local_f0;
  
  piVar1 = &(this->Vertices).ArrayMax;
  uVar23 = 2;
  if (1 < param_4) {
    uVar23 = param_4;
  }
  uVar20 = 2;
  if (1 < param_5) {
    uVar20 = param_5;
  }
  iVar17 = uVar20 * uVar23;
  piVar2 = &(this->Vertices).ArrayNum;
  iVar27 = (uVar20 * 2 + -2) * (uVar23 - 1);
  *piVar2 = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->Vertices).AllocatorInstance,0,piVar1);
  }
  piVar3 = &(this->Triangles).ArrayMax;
  piVar4 = &(this->Triangles).ArrayNum;
  *piVar4 = 0;
  if ((this->Triangles).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->Triangles).AllocatorInstance,0,piVar3);
  }
  if (0 < iVar17) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar17,&(this->Vertices).AllocatorInstance,piVar2,piVar1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar17,&(this->VertexNormals).AllocatorInstance,
               &(this->VertexNormals).ArrayNum,&(this->VertexNormals).ArrayMax);
  }
  if (0 < iVar27) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iVar27,&(this->Triangles).AllocatorInstance,piVar4,piVar3);
  }
  dVar14 = __real_3ff0000000000000;
  dVar5 = (param_1->field0_0x0)._s_0.Z;
  dVar9 = (param_1->field0_0x0)._s_0.X - (double)(param_2 * __real_3f000000);
  dVar10 = (double)(param_2 * __real_3f000000) + (param_1->field0_0x0)._s_0.X;
  dVar13 = (double)(param_3 * __real_3f000000) + (param_1->field0_0x0)._s_0.Y;
  dVar12 = (param_1->field0_0x0)._s_0.Y - (double)(param_3 * __real_3f000000);
  local_f0 = (dVar13 - dVar12) * (dVar10 - dVar9);
  if (__real_3e45798ee0000000 < local_f0 * local_f0) {
    local_f0 = (__real_3ff0000000000000 / SQRT(local_f0 * local_f0)) * local_f0;
  }
  iVar27 = 0;
  uVar28 = 0;
  param_5 = 0;
  if (0 < (int)uVar20) {
    lVar21 = 0;
    dVar11 = __real_3ff0000000000000 / (double)(int)(uVar20 - 1);
    do {
      iVar25 = 0;
      dVar30 = (double)param_5 * dVar11;
      if (0 < (int)uVar23) {
        lVar24 = lVar21 * 0x18;
        lVar21 = lVar21 + (ulonglong)uVar23;
        do {
          dVar31 = (double)iVar25 * (dVar14 / (double)(int)(uVar23 - 1));
          cVar15 = (**(code **)(this->_padding_ + 0x10))(this,uVar28);
          if (cVar15 != '\0') {
            uVar18 = 0;
            if ((int)uVar28 < (this->Vertices).ArrayNum) {
              uVar18 = ~uVar28 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar6 = (this->Vertices).AllocatorInstance.Data;
            *(double *)(pFVar6 + lVar24) = (dVar14 - dVar31) * dVar9 + dVar10 * dVar31;
            *(double *)(pFVar6 + lVar24 + 8) = (dVar14 - dVar30) * dVar12 + dVar13 * dVar30;
            *(double *)(pFVar6 + lVar24 + 0x10) = dVar5;
          }
          uVar28 = uVar28 + 1;
          lVar24 = lVar24 + 0x18;
          iVar25 = iVar25 + 1;
        } while (iVar25 < (int)uVar23);
      }
      param_5 = param_5 + 1;
    } while (param_5 < (int)uVar20);
  }
  iVar25 = 0;
  if (0 < (int)(uVar20 - 1)) {
    iVar19 = uVar23 + 1;
    do {
      if (0 < (int)(uVar23 - 1)) {
        uVar26 = (ulonglong)(uVar23 - 1);
        iVar29 = iVar19;
        do {
          iVar22 = -uVar23 + -1 + iVar29;
          SetTriangle(this,iVar27,iVar22,iVar29,-uVar23 + iVar29);
          SetTriangle(this,iVar27 + 1,iVar22,iVar29 + -1,iVar29);
          iVar27 = iVar27 + 2;
          iVar29 = iVar29 + 1;
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
      }
      iVar19 = iVar19 + uVar23;
      iVar25 = iVar25 + 1;
    } while (iVar25 < (int)(uVar20 - 1));
  }
  lVar21 = (longlong)iVar17;
  uVar23 = 0;
  if (0 < lVar21) {
    lVar24 = 0;
    do {
      uVar20 = 0;
      if ((int)uVar23 < (this->VertexNormals).ArrayNum) {
        uVar20 = ~uVar23 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = (this->VertexNormals).AllocatorInstance.Data;
      uVar23 = uVar23 + 1;
      pFVar6 = pFVar7 + lVar24;
      *(undefined4 *)pFVar6 = 0;
      *(undefined4 *)(pFVar6 + 4) = 0;
      *(undefined4 *)(pFVar6 + 8) = 0;
      *(undefined4 *)(pFVar6 + 0xc) = 0;
      *(double *)(pFVar7 + lVar24 + 0x10) = local_f0;
      lVar24 = lVar24 + 0x18;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  return;
}

// SetTriangle @ 144464e70

void __thiscall
FSimpleDebugDrawMesh::SetTriangle
          (FSimpleDebugDrawMesh *this,int param_1,int param_2,int param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  
  lVar6 = (longlong)param_1;
  cVar3 = (**(code **)(this->_padding_ + 0x30))(this,param_1);
  if (cVar3 != '\0') {
    uVar5 = 0;
    if (param_1 < (this->Triangles).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->Triangles).AllocatorInstance.Data;
    *(int *)(pFVar1 + lVar6 * 0xc) = param_2;
    *(int *)(pFVar1 + lVar6 * 0xc + 4) = param_3;
    *(int *)(pFVar1 + lVar6 * 0xc + 8) = param_4;
  }
  return;
}

// SetVertex @ 1444650c0

void __thiscall
FSimpleDebugDrawMesh::SetVertex(FSimpleDebugDrawMesh *this,int param_1,TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  
  cVar9 = (**(code **)(this->_padding_ + 0x10))(this,param_1);
  if (cVar9 != '\0') {
    uVar5 = *(undefined4 *)&param_2->field0_0x0;
    uVar6 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
    uVar7 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
    uVar8 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
    dVar2 = (param_2->field0_0x0)._s_0.Z;
    uVar11 = 0;
    if (param_1 < (this->Vertices).ArrayNum) {
      uVar11 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->Vertices).AllocatorInstance.Data;
    pFVar1 = pFVar3 + (longlong)param_1 * 0x18;
    *(undefined4 *)pFVar1 = uVar5;
    *(undefined4 *)(pFVar1 + 4) = uVar6;
    *(undefined4 *)(pFVar1 + 8) = uVar7;
    *(undefined4 *)(pFVar1 + 0xc) = uVar8;
    *(double *)(pFVar3 + (longlong)param_1 * 0x18 + 0x10) = dVar2;
  }
  return;
}

// TransformVertices @ 144467160

void __thiscall
FSimpleDebugDrawMesh::TransformVertices(FSimpleDebugDrawMesh *this,TTransform<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined4 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 local_res8 [8];
  
  pFVar10 = (this->Vertices).AllocatorInstance.Data;
  iVar2 = (this->Vertices).ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->Vertices).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar1) break;
    auVar27 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
    dVar16 = auVar27._0_8_;
    auVar12 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
    dVar5 = *(double *)pFVar10 * (param_1->Scale3D).XY.m128d_f64[0];
    dVar6 = *(double *)(pFVar10 + 8) * (param_1->Scale3D).XY.m128d_f64[1];
    uVar30 = (undefined4)((ulonglong)dVar6 >> 0x20);
    dVar8 = *(double *)(pFVar10 + 0x10) * (param_1->Scale3D).ZW.m128d_f64[0];
    dVar9 = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
    auVar15 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
    auVar31._8_4_ = SUB84(dVar6,0);
    auVar31._0_8_ = dVar5;
    auVar31._12_4_ = uVar30;
    auVar24 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
    auVar20 = blendpd(auVar12,auVar27,2);
    dVar17 = auVar24._8_8_;
    auVar32._0_8_ = auVar31._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar5;
    auVar32._8_8_ = dVar8 * auVar12._8_8_ - dVar16 * dVar6;
    auVar11._8_4_ = SUB84(dVar6,0);
    auVar11._0_8_ = dVar5;
    auVar11._12_4_ = uVar30;
    auVar7._8_4_ = SUB84(dVar9,0);
    auVar7._0_8_ = dVar8;
    auVar7._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    auVar12 = blendpd(auVar11,auVar7,2);
    auVar13._0_8_ = auVar12._0_8_ * dVar16 - auVar20._0_8_ * dVar8;
    auVar13._8_8_ = auVar12._8_8_ * auVar27._8_8_ - auVar20._8_8_ * dVar9;
    auVar12 = blendpd(auVar32,auVar13,2);
    dVar3 = auVar32._8_8_ + auVar32._8_8_;
    dVar4 = auVar13._0_8_ + auVar13._0_8_;
    uVar30 = (undefined4)((ulonglong)dVar4 >> 0x20);
    auVar33._0_8_ = auVar12._0_8_ + auVar12._0_8_;
    auVar33._8_8_ = auVar12._8_8_ + auVar12._8_8_;
    auVar25._8_4_ = SUB84(dVar4,0);
    auVar25._0_8_ = dVar3;
    auVar25._12_4_ = uVar30;
    auVar21._8_4_ = SUB84(dVar4,0);
    auVar21._0_8_ = dVar3;
    auVar21._12_4_ = uVar30;
    auVar20 = blendpd(auVar15,auVar27,2);
    auVar12 = blendpd(auVar21,auVar33,2);
    auVar18._8_4_ = auVar24._8_4_;
    auVar18._0_8_ = dVar17;
    auVar18._12_4_ = auVar24._12_4_;
    auVar26._0_8_ = auVar25._8_8_ * auVar15._0_8_ - auVar15._8_8_ * dVar3;
    auVar26._8_8_ = auVar33._0_8_ * auVar15._8_8_ - dVar16 * dVar4;
    auVar14._8_4_ = SUB84(auVar26._8_8_,0);
    auVar14._0_8_ = auVar26._0_8_;
    auVar14._12_4_ = (int)((ulonglong)auVar26._8_8_ >> 0x20);
    auVar22._0_8_ = auVar12._0_8_ * dVar16 - auVar20._0_8_ * auVar33._0_8_;
    auVar22._8_8_ = auVar12._8_8_ * auVar27._8_8_ - auVar20._8_8_ * auVar33._8_8_;
    auVar27 = blendpd(auVar26,auVar22,2);
    dVar16 = (param_1->Translation).XY.m128d_f64[1];
    dVar9 = (param_1->Translation).ZW.m128d_f64[0];
    *(double *)pFVar10 =
         dVar17 * dVar3 + dVar5 + auVar14._8_8_ + (param_1->Translation).XY.m128d_f64[0];
    *(double *)(pFVar10 + 8) = auVar18._8_8_ * dVar4 + dVar6 + auVar22._0_8_ + dVar16;
    *(double *)(pFVar10 + 0x10) = dVar17 * auVar33._0_8_ + dVar8 + auVar27._0_8_ + dVar9;
    pFVar10 = pFVar10 + 0x18;
  }
  iVar2 = (this->VertexNormals).ArrayNum;
  pFVar10 = (this->VertexNormals).AllocatorInstance.Data;
  pFVar1 = pFVar10 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->VertexNormals).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar1) break;
    auVar27 = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
    dVar17 = auVar27._0_8_;
    dVar5 = *(double *)&pFVar10[0x10].field_0x0 * (param_1->Scale3D).ZW.m128d_f64[0];
    dVar9 = (param_1->Scale3D).ZW.m128d_f64[1] * 0.0;
    auVar12 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
    dVar6 = (param_1->Rotation).ZW.m128d_f64[1];
    dVar3 = (param_1->Scale3D).XY.m128d_f64[0] * *(double *)&pFVar10->field_0x0;
    dVar4 = (param_1->Scale3D).XY.m128d_f64[1] * *(double *)(pFVar10 + 8);
    uVar30 = (undefined4)((ulonglong)dVar4 >> 0x20);
    auVar15 = *(undefined1 (*) [16])(param_1->Rotation).XY.m128d_f64;
    auVar23 = blendpd(auVar15,auVar27,2);
    auVar34._8_4_ = SUB84(dVar4,0);
    auVar34._0_8_ = dVar3;
    auVar34._12_4_ = uVar30;
    auVar35._0_8_ = auVar34._8_8_ * auVar15._0_8_ - auVar15._8_8_ * dVar3;
    auVar35._8_8_ = dVar5 * auVar15._8_8_ - dVar17 * dVar4;
    auVar24._8_4_ = SUB84(dVar4,0);
    auVar24._0_8_ = dVar3;
    auVar24._12_4_ = uVar30;
    auVar15._8_4_ = SUB84(dVar9,0);
    auVar15._0_8_ = dVar5;
    auVar15._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    auVar15 = blendpd(auVar24,auVar15,2);
    auVar20._0_8_ = auVar15._0_8_ * dVar17 - auVar23._0_8_ * dVar5;
    auVar20._8_8_ = auVar15._8_8_ * auVar27._8_8_ - auVar23._8_8_ * dVar9;
    auVar15 = blendpd(auVar35,auVar20,2);
    dVar9 = auVar35._8_8_ + auVar35._8_8_;
    dVar16 = auVar20._0_8_ + auVar20._0_8_;
    uVar30 = (undefined4)((ulonglong)dVar16 >> 0x20);
    auVar36._0_8_ = auVar15._0_8_ + auVar15._0_8_;
    auVar36._8_8_ = auVar15._8_8_ + auVar15._8_8_;
    auVar28._8_4_ = SUB84(dVar16,0);
    auVar28._0_8_ = dVar9;
    auVar28._12_4_ = uVar30;
    auVar23._8_4_ = SUB84(dVar16,0);
    auVar23._0_8_ = dVar9;
    auVar23._12_4_ = uVar30;
    auVar15 = blendpd(auVar23,auVar36,2);
    auVar29._0_8_ = auVar28._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar9;
    auVar29._8_8_ = auVar36._0_8_ * auVar12._8_8_ - dVar17 * dVar16;
    auVar24 = blendpd(auVar12,auVar27,2);
    auVar12._8_4_ = SUB84(auVar29._8_8_,0);
    auVar12._0_8_ = auVar29._0_8_;
    auVar12._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
    auVar19._0_8_ = auVar15._0_8_ * dVar17 - auVar24._0_8_ * auVar36._0_8_;
    auVar19._8_8_ = auVar15._8_8_ * auVar27._8_8_ - auVar24._8_8_ * auVar36._8_8_;
    auVar15 = blendpd(auVar29,auVar19,2);
    dVar16 = dVar16 * dVar6 + dVar4 + auVar19._0_8_;
    auVar27._8_4_ = SUB84(dVar16,0);
    auVar27._0_8_ = dVar9 * dVar6 + dVar3 + auVar12._8_8_;
    auVar27._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    *(undefined1 (*) [16])pFVar10 = auVar27;
    *(double *)&pFVar10[0x10].field_0x0 = auVar36._0_8_ * dVar6 + dVar5 + auVar15._0_8_;
    pFVar10 = pFVar10 + 0x18;
  }
  return;
}

