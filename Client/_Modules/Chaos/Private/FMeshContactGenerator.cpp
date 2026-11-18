// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 19

// ~FMeshContactGenerator @ 1439577b0

void __thiscall
Chaos::Private::FMeshContactGenerator::~FMeshContactGenerator(FMeshContactGenerator *this)

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  
  pFVar1 = (this->VertexContactIndicesMap).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((this->VertexContactIndicesMap).HashTable.IndexSize != 0) {
    puVar2 = (this->VertexContactIndicesMap).HashTable.Hash;
    (this->VertexContactIndicesMap).HashTable.HashMask = 0;
    (this->VertexContactIndicesMap).HashTable.IndexSize = 0;
    operator_delete__(puVar2);
    puVar2 = (this->VertexContactIndicesMap).HashTable.NextIndex;
    (this->VertexContactIndicesMap).HashTable.Hash = FHashTable::EmptyHash;
    operator_delete__(puVar2);
    (this->VertexContactIndicesMap).HashTable.NextIndex = (uint *)0x0;
  }
  pFVar1 = (this->EdgeTriangleIndicesMap).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((this->EdgeTriangleIndicesMap).HashTable.IndexSize != 0) {
    puVar2 = (this->EdgeTriangleIndicesMap).HashTable.Hash;
    (this->EdgeTriangleIndicesMap).HashTable.HashMask = 0;
    (this->EdgeTriangleIndicesMap).HashTable.IndexSize = 0;
    operator_delete__(puVar2);
    puVar2 = (this->EdgeTriangleIndicesMap).HashTable.NextIndex;
    (this->EdgeTriangleIndicesMap).HashTable.Hash = FHashTable::EmptyHash;
    operator_delete__(puVar2);
    (this->EdgeTriangleIndicesMap).HashTable.NextIndex = (uint *)0x0;
  }
  pFVar1 = (this->ContactDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Contacts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Triangles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// GetTriangle @ 143961c20

TTriangle<double> * __thiscall
Chaos::Private::FMeshContactGenerator::GetTriangle(FMeshContactGenerator *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TTriangle<double> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Triangles).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TTriangle<double> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return (TTriangle<double> *)((this->Triangles).AllocatorInstance.Data + (longlong)param_1 * 0x78);
}

// GetTriangleNormal @ 143961ca0

TVector<double,3> * __thiscall
Chaos::Private::FMeshContactGenerator::GetTriangleNormal(FMeshContactGenerator *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  TVector<double,3> *pTVar11;
  longlong lVar12;
  undefined8 uVar13;
  double dVar14;
  
  uVar10 = 0;
  if (param_1 < (this->Triangles).ArrayNum) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar2 = (code *)swi(3);
    pTVar11 = (TVector<double,3> *)(*pcVar2)();
    return pTVar11;
  }
  pFVar1 = (this->Triangles).AllocatorInstance.Data;
  lVar12 = (longlong)param_1 * 0x78;
  pTVar11 = (TVector<double,3> *)(pFVar1 + lVar12 + 0x48);
  if (__real_7fefffffffffffff == *(double *)pTVar11) {
    dVar6 = (*(double *)(pFVar1 + lVar12 + 0x20) - *(double *)(pFVar1 + lVar12 + 8)) *
            (*(double *)(pFVar1 + lVar12 + 0x40) - *(double *)(pFVar1 + lVar12 + 0x10)) -
            (*(double *)(pFVar1 + lVar12 + 0x28) - *(double *)(pFVar1 + lVar12 + 0x10)) *
            (*(double *)(pFVar1 + lVar12 + 0x38) - *(double *)(pFVar1 + lVar12 + 8));
    dVar5 = (*(double *)(pFVar1 + lVar12 + 0x28) - *(double *)(pFVar1 + lVar12 + 0x10)) *
            (*(double *)(pFVar1 + lVar12 + 0x30) - *(double *)(pFVar1 + lVar12)) -
            (*(double *)(pFVar1 + lVar12 + 0x18) - *(double *)(pFVar1 + lVar12)) *
            (*(double *)(pFVar1 + lVar12 + 0x40) - *(double *)(pFVar1 + lVar12 + 0x10));
    dVar4 = (*(double *)(pFVar1 + lVar12 + 0x18) - *(double *)(pFVar1 + lVar12)) *
            (*(double *)(pFVar1 + lVar12 + 0x38) - *(double *)(pFVar1 + lVar12 + 8)) -
            (*(double *)(pFVar1 + lVar12 + 0x20) - *(double *)(pFVar1 + lVar12 + 8)) *
            (*(double *)(pFVar1 + lVar12 + 0x30) - *(double *)(pFVar1 + lVar12));
    dVar14 = dVar5 * dVar5 + dVar6 * dVar6 + dVar4 * dVar4;
    uVar13 = dVar4;
    uVar7 = dVar5;
    uVar8 = dVar6;
    if ((dVar14 != __real_3ff0000000000000) &&
       (uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
       uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       __real_3e45798ee0000000 <= dVar14)) {
      dVar14 = __real_3ff0000000000000 / SQRT(dVar14);
      uVar13 = dVar4 * dVar14;
      uVar7 = dVar5 * dVar14;
      uVar8 = dVar6 * dVar14;
    }
    auVar3._8_4_ = (int)uVar7;
    auVar3._0_8_ = uVar8;
    auVar3._12_4_ = (int)((ulonglong)uVar7 >> 0x20);
    *(undefined1 (*) [16])pTVar11 = auVar3;
    *(undefined8 *)&pTVar11->field_0x10 = uVar13;
  }
  return pTVar11;
}

// HasFaceVertexCollision @ 143961e70

bool __thiscall
Chaos::Private::FMeshContactGenerator::HasFaceVertexCollision
          (FMeshContactGenerator *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  
  uVar6 = ((uint)param_1 >> 0x10 ^ param_1) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = (this->VertexContactIndicesMap).HashTable.Hash
          [(uVar6 >> 0x10 ^ uVar6) & (this->VertexContactIndicesMap).HashTable.HashMask];
  while( true ) {
    if (uVar6 == 0xffffffff) {
      return false;
    }
    uVar4 = 0;
    if ((int)uVar6 < (this->VertexContactIndicesMap).Elements.ArrayNum) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) break;
    if (*(int *)((this->VertexContactIndicesMap).Elements.AllocatorInstance.Data +
                (longlong)(int)uVar6 * 0xc) == param_1) {
      uVar4 = 0;
      if ((int)uVar6 < (this->VertexContactIndicesMap).Elements.ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      pFVar5 = (this->VertexContactIndicesMap).Elements.AllocatorInstance.Data +
               (longlong)(int)uVar6 * 0xc;
      if (pFVar5 == (FScriptContainerElement *)0x0) {
        return false;
      }
      return (bool)pFVar5[8];
    }
    uVar6 = (this->VertexContactIndicesMap).HashTable.NextIndex[uVar6];
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

// FMeshContactGenerator @ 1439c08c0

FMeshContactGenerator * __thiscall
Chaos::Private::FMeshContactGenerator::FMeshContactGenerator
          (FMeshContactGenerator *this,FMeshContactGeneratorSettings *param_1)

{
  double dVar1;
  undefined8 uVar2;
  int iVar3;
  
  dVar1 = param_1->EdgeNormalDotRejectTolerance;
  (this->Settings).FaceNormalDotThreshold = param_1->FaceNormalDotThreshold;
  (this->Settings).EdgeNormalDotRejectTolerance = dVar1;
  dVar1 = param_1->BarycentricTolerance;
  (this->Settings).BackFaceCullTolerance = param_1->BackFaceCullTolerance;
  (this->Settings).BarycentricTolerance = dVar1;
  iVar3 = param_1->HashSize;
  uVar2 = *(undefined8 *)&param_1->field_0x28;
  (this->Settings).MaxContactsBufferSize = param_1->MaxContactsBufferSize;
  (this->Settings).HashSize = iVar3;
  *(undefined8 *)&(this->Settings).field_0x28 = uVar2;
  (this->Triangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Triangles).ArrayNum = 0;
  (this->Triangles).ArrayMax = 0;
  (this->Contacts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Contacts).ArrayNum = 0;
  (this->Contacts).ArrayMax = 0;
  (this->ContactDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContactDatas).ArrayNum = 0;
  (this->ContactDatas).ArrayMax = 0;
  FHashTable::FHashTable(&(this->EdgeTriangleIndicesMap).HashTable,param_1->HashSize,0);
  (this->EdgeTriangleIndicesMap).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeTriangleIndicesMap).Elements.ArrayNum = 0;
  (this->EdgeTriangleIndicesMap).Elements.ArrayMax = 0;
  FHashTable::FHashTable(&(this->VertexContactIndicesMap).HashTable,param_1->HashSize,0);
  (this->VertexContactIndicesMap).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexContactIndicesMap).Elements.ArrayNum = 0;
  (this->VertexContactIndicesMap).Elements.ArrayMax = 0;
  return this;
}

// AddTriangleContacts @ 1439c5a60

void __thiscall
Chaos::Private::FMeshContactGenerator::AddTriangleContacts
          (FMeshContactGenerator *this,int param_1,
          TArrayView<Chaos::TContactPoint<double>,int> *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  TContactPoint<double> *pTVar4;
  bool bVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  FScriptContainerElement FVar10;
  FContactEdgeID FVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  double dVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  TContactPoint<double> *pTVar21;
  longlong lVar22;
  FEdgeTriangleIndices *pFVar23;
  FVertexContactIndex *pFVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  FScriptContainerElement *pFVar28;
  TContactPoint<double> *pTVar29;
  uint uVar30;
  FScriptContainerElement *pFVar31;
  ulonglong uVar32;
  uint uVar33;
  uint uVar34;
  double dVar35;
  float fVar36;
  uint local_188;
  uint uStack_184;
  double local_160;
  double local_158;
  double local_150;
  double local_138;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  
  uVar32 = (ulonglong)param_1;
  uVar17 = 0;
  if (param_1 < (this->Triangles).ArrayNum) {
    uVar17 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  dVar15 = __real_7fefffffffffffff;
  uVar14 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar17 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar13 = __real_3e45798ee0000000;
  dVar12 = __real_3ff0000000000000;
  pTVar29 = param_2->DataPtr;
  lVar25 = uVar32 * 0x78;
  pFVar31 = (this->Triangles).AllocatorInstance.Data + lVar25;
  pTVar21 = pTVar29 + param_2->ArrayNum;
  do {
    if ((pTVar29 == pTVar21) || ((this->Contacts).ArrayNum == (this->Contacts).ArrayMax)) {
      return;
    }
    local_128 = *(double *)(pFVar31 + 0x30);
    dStack_120 = *(double *)(pFVar31 + 0x38);
    lVar27 = -1;
    local_118 = *(double *)(pFVar31 + 0x40);
    dVar35 = (this->Settings).BarycentricTolerance;
    local_108 = *(double *)(pFVar31 + 0x18);
    dStack_100 = *(double *)(pFVar31 + 0x20);
    local_f8 = *(double *)(pFVar31 + 0x28);
    local_e8 = *(double *)pFVar31;
    dStack_e0 = *(double *)(pFVar31 + 8);
    local_d8 = *(double *)(pFVar31 + 0x10);
    ToBarycentric<double>
              ((TVector<double,3> *)&local_160,pTVar29->ShapeContactPoints + 1,
               (TVector<double,3> *)&local_e8,(TVector<double,3> *)&local_108,
               (TVector<double,3> *)&local_128);
    uVar33 = SUB84(local_160 - dVar12,0) & uVar17;
    uVar34 = (uint)((ulonglong)(local_160 - dVar12) >> 0x20) & uVar14;
    if (dVar35 <= (double)CONCAT44(uVar34,uVar33) && (double)CONCAT44(uVar34,uVar33) != dVar35) {
      uVar33 = SUB84(local_158 - dVar12,0) & uVar17;
      uVar34 = (uint)((ulonglong)(local_158 - dVar12) >> 0x20) & uVar14;
      if ((double)CONCAT44(uVar34,uVar33) < dVar35 || (double)CONCAT44(uVar34,uVar33) == dVar35) {
        lVar22 = 0x68;
        lVar26 = 0x60;
        goto LAB_1439c5cd8;
      }
      uVar33 = SUB84(local_150 - dVar12,0) & uVar17;
      uVar34 = (uint)((ulonglong)(local_150 - dVar12) >> 0x20) & uVar14;
      if ((double)CONCAT44(uVar34,uVar33) < dVar35 || (double)CONCAT44(uVar34,uVar33) == dVar35) {
        lVar22 = 0x6c;
        lVar26 = 0x60;
        goto LAB_1439c5cd8;
      }
      if ((double)CONCAT44((uint)((ulonglong)local_160 >> 0x20) & uVar14,SUB84(local_160,0) & uVar17
                          ) <= dVar35) {
        lVar27 = 2;
        lVar22 = 0x68;
        lVar26 = 0x6c;
        goto LAB_1439c5cd8;
      }
      if ((double)CONCAT44((uint)((ulonglong)local_158 >> 0x20) & uVar14,SUB84(local_158,0) & uVar17
                          ) <= dVar35) {
        lVar27 = 0;
        lVar22 = 0x6c;
        lVar26 = 100;
        goto LAB_1439c5cd8;
      }
      uVar33 = SUB84(local_150,0) & uVar17;
      uVar34 = (uint)((ulonglong)local_150 >> 0x20) & uVar14;
      if ((double)CONCAT44(uVar34,uVar33) < dVar35 || (double)CONCAT44(uVar34,uVar33) == dVar35) {
        lVar27 = 1;
        lVar26 = 0x68;
        goto LAB_1439c5cd3;
      }
      uVar33 = 0xffffffff;
LAB_1439c5cea:
      uVar34 = 0xffffffff;
    }
    else {
      lVar26 = 0x60;
LAB_1439c5cd3:
      lVar22 = 100;
LAB_1439c5cd8:
      uVar33 = *(uint *)(pFVar31 + lVar22);
      if (lVar27 == -1) goto LAB_1439c5cea;
      uVar34 = *(uint *)(pFVar31 + lVar26);
    }
    uVar18 = (this->Contacts).ArrayNum;
    if (dVar15 == *(double *)(pFVar31 + 0x48)) {
      uVar9 = (*(double *)(pFVar31 + 0x20) - *(double *)(pFVar31 + 8)) *
              (*(double *)(pFVar31 + 0x40) - *(double *)(pFVar31 + 0x10)) -
              (*(double *)(pFVar31 + 0x28) - *(double *)(pFVar31 + 0x10)) *
              (*(double *)(pFVar31 + 0x38) - *(double *)(pFVar31 + 8));
      uVar8 = (*(double *)(pFVar31 + 0x28) - *(double *)(pFVar31 + 0x10)) *
              (*(double *)(pFVar31 + 0x30) - *(double *)pFVar31) -
              (*(double *)(pFVar31 + 0x18) - *(double *)pFVar31) *
              (*(double *)(pFVar31 + 0x40) - *(double *)(pFVar31 + 0x10));
      local_138 = (*(double *)(pFVar31 + 0x18) - *(double *)pFVar31) *
                  (*(double *)(pFVar31 + 0x38) - *(double *)(pFVar31 + 8)) -
                  (*(double *)(pFVar31 + 0x20) - *(double *)(pFVar31 + 8)) *
                  (*(double *)(pFVar31 + 0x30) - *(double *)pFVar31);
      dVar35 = (double)uVar8 * (double)uVar8 + (double)uVar9 * (double)uVar9 + local_138 * local_138
      ;
      if (dVar35 != dVar12) {
        if (dVar13 <= dVar35) {
          local_130 = dVar12 / SQRT(dVar35);
          uVar9 = (double)uVar9 * local_130;
          uVar8 = (double)uVar8 * local_130;
          local_138 = local_138 * local_130;
        }
        else {
          local_138 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        }
      }
      auVar7._8_4_ = (int)uVar8;
      auVar7._0_8_ = uVar9;
      auVar7._12_4_ = (int)((ulonglong)uVar8 >> 0x20);
      *(undefined1 (*) [16])(pFVar31 + 0x48) = auVar7;
      *(double *)(pFVar31 + 0x58) = local_138;
    }
    fVar36 = (float)(*(double *)&(pTVar29->ShapeContactNormal).field_0x8 *
                     *(double *)(pFVar31 + 0x50) +
                     *(double *)&pTVar29->ShapeContactNormal * *(double *)(pFVar31 + 0x48) +
                    *(double *)&(pTVar29->ShapeContactNormal).field_0x10 *
                    *(double *)(pFVar31 + 0x58));
    dVar35 = (double)fVar36;
    bVar16 = dVar35 != (this->Settings).FaceNormalDotThreshold;
    bVar5 = (this->Settings).FaceNormalDotThreshold <= dVar35;
    FVar10 = (FScriptContainerElement)(bVar5 && bVar16);
    if (uVar33 == 0xffffffff) {
LAB_1439c6146:
      pTVar4 = (TContactPoint<double> *)(this->Contacts).AllocatorInstance.Data;
      if (((pTVar4 <= pTVar29) && (pTVar29 < pTVar4 + (this->Contacts).ArrayMax)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar20 = (this->Contacts).ArrayNum;
      if (iVar20 == (this->Contacts).ArrayMax) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x858,&(this->Contacts).AllocatorInstance,&(this->Contacts).ArrayMax);
      }
      (this->Contacts).ArrayNum = iVar20 + 1;
      uVar8 = *(undefined8 *)&pTVar29->ShapeContactPoints[0].field_0x8;
      lVar27 = (longlong)iVar20 * 0x58;
      pFVar28 = (this->Contacts).AllocatorInstance.Data;
      *(undefined8 *)(pFVar28 + lVar27) = *(undefined8 *)pTVar29->ShapeContactPoints;
      *(undefined8 *)(pFVar28 + lVar27 + 8) = uVar8;
      uVar8 = *(undefined8 *)(pTVar29->ShapeContactPoints + 1);
      *(undefined8 *)(pFVar28 + lVar27 + 0x10) =
           *(undefined8 *)&pTVar29->ShapeContactPoints[0].field_0x10;
      *(undefined8 *)(pFVar28 + lVar27 + 0x10 + 8) = uVar8;
      uVar8 = *(undefined8 *)&pTVar29->ShapeContactPoints[1].field_0x10;
      *(undefined8 *)(pFVar28 + lVar27 + 0x20) =
           *(undefined8 *)&pTVar29->ShapeContactPoints[1].field_0x8;
      *(undefined8 *)(pFVar28 + lVar27 + 0x20 + 8) = uVar8;
      uVar8 = *(undefined8 *)&(pTVar29->ShapeContactNormal).field_0x8;
      *(undefined8 *)(pFVar28 + lVar27 + 0x30) = *(undefined8 *)&pTVar29->ShapeContactNormal;
      *(undefined8 *)(pFVar28 + lVar27 + 0x30 + 8) = uVar8;
      dVar35 = pTVar29->Phi;
      *(undefined8 *)(pFVar28 + lVar27 + 0x40) =
           *(undefined8 *)&(pTVar29->ShapeContactNormal).field_0x10;
      *(double *)(pFVar28 + lVar27 + 0x40 + 8) = dVar35;
      *(undefined8 *)(pFVar28 + lVar27 + 0x50) = *(undefined8 *)&pTVar29->FaceIndex;
      uVar2 = *(undefined4 *)(pFVar31 + 0x60);
      uVar30 = ~uVar18 >> 0x1f;
      uVar19 = 0;
      if ((int)uVar18 < (this->Contacts).ArrayNum) {
        uVar19 = uVar30;
      }
      if ((uVar19 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      piVar1 = &(this->ContactDatas).ArrayMax;
      lVar27 = (longlong)(int)uVar18;
      *(undefined4 *)((this->Contacts).AllocatorInstance.Data + lVar27 * 0x58 + 0x50) = uVar2;
      iVar20 = (this->ContactDatas).ArrayNum;
      if (iVar20 == *piVar1) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&(this->ContactDatas).AllocatorInstance,piVar1);
      }
      (this->ContactDatas).ArrayNum = iVar20 + 1;
      DefaultConstructItems<Chaos::FTriangleContactPointData,int>
                ((this->ContactDatas).AllocatorInstance.Data + (longlong)iVar20 * 0x18,1);
      uVar19 = 0;
      if ((int)uVar18 < (this->ContactDatas).ArrayNum) {
        uVar19 = uVar30;
      }
      if ((uVar19 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar19 = uVar33;
      if (((int)uVar34 <= (int)uVar33) && (uVar34 != 0xffffffff)) {
        uVar19 = uVar34;
        uVar34 = uVar33;
      }
      *(ulonglong *)((this->ContactDatas).AllocatorInstance.Data + lVar27 * 0x18) =
           CONCAT44(uVar34,uVar19);
      uVar33 = 0;
      if ((int)uVar18 < (this->ContactDatas).ArrayNum) {
        uVar33 = uVar30;
      }
      if ((uVar33 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(float *)((this->ContactDatas).AllocatorInstance.Data + lVar27 * 0x18 + 0xc) = fVar36;
      uVar33 = 0;
      if ((int)uVar18 < (this->ContactDatas).ArrayNum) {
        uVar33 = uVar30;
      }
      if ((uVar33 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(int *)((this->ContactDatas).AllocatorInstance.Data + lVar27 * 0x18 + 8) = param_1;
      uVar33 = 0;
      if ((int)uVar18 < (this->ContactDatas).ArrayNum) {
        uVar33 = uVar30;
      }
      if ((uVar33 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (this->ContactDatas).AllocatorInstance.Data[lVar27 * 0x18 + 0x10] =
           (FScriptContainerElement)0x1;
    }
    else {
      if (uVar34 != 0xffffffff) {
        if (bVar5 && bVar16) {
          uVar19 = 0;
          if ((int)(uint)uVar32 < (this->Triangles).ArrayNum) {
            uVar19 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar28 = (this->Triangles).AllocatorInstance.Data + lVar25 + 0x70;
          *pFVar28 = (FScriptContainerElement)((char)*pFVar28 + '\x01');
          local_188 = uVar33;
          uStack_184 = uVar34;
          if ((int)uVar34 <= (int)uVar33) {
            local_188 = uVar34;
            uStack_184 = uVar33;
          }
          FVar11.field0_0x0.VertexIDs[1] = uStack_184;
          FVar11.field0_0x0.VertexIDs[0] = local_188;
          pFVar23 = THashMappedArray<Chaos::FContactEdgeID,Chaos::Private::FMeshContactGenerator::FEdgeTriangleIndices,Chaos::Private::FMeshContactGenerator::FEdgeTriangleIndicesMapTraits>
                    ::Find(&this->EdgeTriangleIndicesMap,FVar11);
          if (pFVar23 != (FEdgeTriangleIndices *)0x0) {
            uVar19 = pFVar23->LocalTriangleIndices[0];
            if (uVar19 == (uint)uVar32) {
              uVar19 = pFVar23->LocalTriangleIndices[1];
            }
            if (uVar19 != 0xffffffff) {
              uVar30 = 0;
              if ((int)uVar19 < (this->Triangles).ArrayNum) {
                uVar30 = ~uVar19 >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar28 = (this->Triangles).AllocatorInstance.Data +
                        (longlong)(int)uVar19 * 0x78 + 0x70;
              *pFVar28 = (FScriptContainerElement)((char)*pFVar28 + '\x01');
            }
          }
        }
        goto LAB_1439c6146;
      }
      pFVar24 = THashMappedArray<int,Chaos::Private::FMeshContactGenerator::FVertexContactIndex,Chaos::Private::FMeshContactGenerator::VertexContactIndicesMapTraits>
                ::Find(&this->VertexContactIndicesMap,uVar33);
      if (pFVar24 == (FVertexContactIndex *)0x0) {
        uVar19 = (this->VertexContactIndicesMap).Elements.ArrayNum;
        if (uVar19 == (this->VertexContactIndicesMap).Elements.ArrayMax) {
          uVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,&(this->VertexContactIndicesMap).Elements.AllocatorInstance,
                              &(this->VertexContactIndicesMap).Elements.ArrayMax);
        }
        (this->VertexContactIndicesMap).Elements.ArrayNum = uVar19 + 1;
        lVar27 = (longlong)(int)uVar19;
        pFVar28 = (this->VertexContactIndicesMap).Elements.AllocatorInstance.Data;
        pFVar28[lVar27 * 0xc + 8] = FVar10;
        *(uint *)(pFVar28 + lVar27 * 0xc) = uVar33;
        *(uint *)(pFVar28 + lVar27 * 0xc + 4) = uVar18;
        uVar30 = (uVar33 >> 0x10 ^ uVar33) * -0x7a143595;
        uVar30 = (uVar30 >> 0xd ^ uVar30) * -0x3d4d51cb;
        FHashTable::Add(&(this->VertexContactIndicesMap).HashTable,uVar30 >> 0x10 ^ uVar30,uVar19);
        goto LAB_1439c6146;
      }
      if (pFVar24->bIsFaceContact == false) {
        uVar34 = pFVar24->ContactIndex;
        uVar18 = 0;
        if ((int)uVar34 < (this->Contacts).ArrayNum) {
          uVar18 = ~uVar34 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar18 = pFVar24->ContactIndex;
        lVar27 = (longlong)(int)uVar18;
        pFVar28 = (this->Contacts).AllocatorInstance.Data + (longlong)(int)uVar34 * 0x58;
        uVar34 = 0;
        if ((int)uVar18 < (this->ContactDatas).ArrayNum) {
          uVar34 = ~uVar18 >> 0x1f;
        }
        if ((uVar34 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar3 = (this->ContactDatas).AllocatorInstance.Data;
        if (*(float *)(pFVar3 + lVar27 * 0x18 + 0xc) <= fVar36 &&
            fVar36 != *(float *)(pFVar3 + lVar27 * 0x18 + 0xc)) {
          uVar8 = *(undefined8 *)&pTVar29->ShapeContactPoints[0].field_0x8;
          *(undefined8 *)pFVar28 = *(undefined8 *)pTVar29->ShapeContactPoints;
          *(undefined8 *)(pFVar28 + 8) = uVar8;
          uVar8 = *(undefined8 *)(pTVar29->ShapeContactPoints + 1);
          *(undefined8 *)(pFVar28 + 0x10) =
               *(undefined8 *)&pTVar29->ShapeContactPoints[0].field_0x10;
          *(undefined8 *)(pFVar28 + 0x18) = uVar8;
          uVar8 = *(undefined8 *)&pTVar29->ShapeContactPoints[1].field_0x10;
          *(undefined8 *)(pFVar28 + 0x20) = *(undefined8 *)&pTVar29->ShapeContactPoints[1].field_0x8
          ;
          *(undefined8 *)(pFVar28 + 0x28) = uVar8;
          uVar8 = *(undefined8 *)&(pTVar29->ShapeContactNormal).field_0x8;
          *(undefined8 *)(pFVar28 + 0x30) = *(undefined8 *)&pTVar29->ShapeContactNormal;
          *(undefined8 *)(pFVar28 + 0x38) = uVar8;
          dVar35 = pTVar29->Phi;
          *(undefined8 *)(pFVar28 + 0x40) = *(undefined8 *)&(pTVar29->ShapeContactNormal).field_0x10
          ;
          *(double *)(pFVar28 + 0x48) = dVar35;
          *(undefined8 *)(pFVar28 + 0x50) = *(undefined8 *)&pTVar29->FaceIndex;
          *(undefined4 *)(pFVar28 + 0x50) = *(undefined4 *)(pFVar31 + 0x60);
          *(ulonglong *)(pFVar3 + lVar27 * 0x18) = CONCAT44(0xffffffff,uVar33);
          *(float *)(pFVar3 + lVar27 * 0x18 + 0xc) = fVar36;
          *(int *)(pFVar3 + lVar27 * 0x18 + 8) = param_1;
          pFVar24->bIsFaceContact = (bool)FVar10;
        }
      }
    }
    uVar32 = (ulonglong)(uint)param_1;
    pTVar29 = pTVar29 + 1;
  } while( true );
}

// DebugDrawContacts @ 1439ca200

void __thiscall
Chaos::Private::FMeshContactGenerator::DebugDrawContacts
          (FMeshContactGenerator *this,TRigidTransform<double,3> *param_1,FColor *param_2,
          double param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  FDebugDrawQueue *pFVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined4 uVar35;
  double dVar36;
  undefined1 auVar37 [16];
  double dVar40;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double local_118;
  double dStack_110;
  undefined8 local_108;
  undefined1 local_f8 [16];
  double local_e8;
  TVector<double>_u_0 local_e0;
  undefined1 local_c8 [16];
  double local_b8;
  
  if (CVars::ChaosSolverDebugDrawMeshContacts != 0) {
    FDebugDrawQueue::GetInstance();
    pFVar11 = FDebugDrawQueue::GetInstance();
    if ((pFVar11->bEnableDebugDrawing != false) &&
       (pFVar11 = FDebugDrawQueue::GetInstance(), 0 < pFVar11->NumConsumers)) {
      if ((param_3 <= 0.0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("LineScale > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\MeshContactGenerator.cpp"
                             ,0x2b0,L""), bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      dVar8 = __real_4049000000000000;
      dVar7 = __real_3ff0000000000000;
      uVar12 = 0;
      if (0 < (this->Contacts).ArrayNum) {
        lVar14 = 0;
        lVar13 = 0;
        do {
          uVar10 = 0;
          if ((int)uVar12 < (this->ContactDatas).ArrayNum) {
            uVar10 = ~uVar12 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((this->ContactDatas).AllocatorInstance.Data[lVar13 + 0x10] !=
              (FScriptContainerElement)0x0) {
            uVar10 = 0;
            if ((int)uVar12 < (this->Contacts).ArrayNum) {
              uVar10 = ~uVar12 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            auVar31 = *(undefined1 (*) [16])&param_1->field_0x10;
            dVar17 = auVar31._0_8_;
            pFVar1 = (this->Contacts).AllocatorInstance.Data;
            auVar15 = *(undefined1 (*) [16])param_1;
            auVar26 = *(undefined1 (*) [16])param_1;
            dVar36 = *(double *)&param_1->field_0x18;
            auVar37._0_8_ = *(double *)(pFVar1 + lVar14 + 0x28) * *(double *)&param_1->field_0x50;
            auVar37._8_8_ = *(double *)&param_1->field_0x58 * 0.0;
            dVar3 = *(double *)(pFVar1 + lVar14 + 0x18) * *(double *)&param_1->field_0x40;
            dVar4 = *(double *)(pFVar1 + lVar14 + 0x18 + 8) * *(double *)&param_1->field_0x48;
            uVar35 = (undefined4)((ulonglong)dVar4 >> 0x20);
            dVar21 = *(double *)(pFVar1 + lVar14 + 0x40);
            auVar32._8_4_ = SUB84(dVar4,0);
            auVar32._0_8_ = dVar3;
            auVar32._12_4_ = uVar35;
            dVar20 = auVar31._8_8_;
            auVar22 = blendpd(auVar15,auVar31,2);
            auVar33._0_8_ = auVar32._8_8_ * auVar15._0_8_ - auVar15._8_8_ * dVar3;
            auVar33._8_8_ = auVar37._0_8_ * auVar15._8_8_ - dVar17 * dVar4;
            auVar15._8_4_ = SUB84(dVar4,0);
            auVar15._0_8_ = dVar3;
            auVar15._12_4_ = uVar35;
            auVar15 = blendpd(auVar15,auVar37,2);
            auVar24._0_8_ = auVar15._0_8_ * dVar17 - auVar22._0_8_ * auVar37._0_8_;
            auVar24._8_8_ = auVar15._8_8_ * dVar20 - auVar22._8_8_ * auVar37._8_8_;
            auVar15 = blendpd(auVar33,auVar24,2);
            auVar34._0_8_ = auVar15._0_8_ + auVar15._0_8_;
            auVar34._8_8_ = auVar15._8_8_ + auVar15._8_8_;
            dVar5 = auVar33._8_8_ + auVar33._8_8_;
            dVar6 = auVar24._0_8_ + auVar24._0_8_;
            uVar35 = (undefined4)((ulonglong)dVar6 >> 0x20);
            auVar27._8_4_ = SUB84(dVar6,0);
            auVar27._0_8_ = dVar5;
            auVar27._12_4_ = uVar35;
            auVar23._8_4_ = SUB84(dVar6,0);
            auVar23._0_8_ = dVar5;
            auVar23._12_4_ = uVar35;
            auVar24 = blendpd(auVar23,auVar34,2);
            auVar28._0_8_ = auVar27._8_8_ * auVar26._0_8_ - auVar26._8_8_ * dVar5;
            auVar28._8_8_ = auVar34._0_8_ * auVar26._8_8_ - dVar17 * dVar6;
            auVar15 = *(undefined1 (*) [16])(pFVar1 + lVar14 + 0x30);
            auVar22._8_4_ = SUB84(auVar28._8_8_,0);
            auVar22._0_8_ = auVar28._0_8_;
            auVar22._12_4_ = (int)((ulonglong)auVar28._8_8_ >> 0x20);
            auVar26 = blendpd(auVar26,auVar31,2);
            auVar25._0_8_ = auVar24._0_8_ * dVar17 - auVar26._0_8_ * auVar34._0_8_;
            auVar25._8_8_ = auVar24._8_8_ * dVar20 - auVar26._8_8_ * auVar34._8_8_;
            _local_118 = *(undefined1 (*) [16])param_1;
            dVar5 = dVar5 * dVar36 + dVar3 + auVar22._8_8_ + *(double *)&param_1->field_0x20;
            dVar6 = dVar6 * dVar36 + dVar4 + auVar25._0_8_ + *(double *)&param_1->field_0x28;
            uVar35 = (undefined4)((ulonglong)dVar6 >> 0x20);
            dVar40 = auVar15._8_8_;
            auVar26 = blendpd(auVar28,auVar25,2);
            auVar38._0_8_ = dVar40 * local_118 - local_118._8_8_ * auVar15._0_8_;
            auVar38._8_8_ = dVar21 * local_118._8_8_ - dVar17 * dVar40;
            local_e8 = auVar34._0_8_ * dVar36 + auVar37._0_8_ + auVar26._0_8_ +
                       *(double *)&param_1->field_0x30;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = dVar21;
            auVar26 = blendpd(auVar15,auVar26,2);
            auVar24 = blendpd(_local_118,auVar31,2);
            local_f8._8_4_ = SUB84(dVar6,0);
            local_f8._0_8_ = dVar5;
            local_f8._12_4_ = uVar35;
            auVar16._0_8_ = auVar26._0_8_ * dVar17 - auVar24._0_8_ * dVar21;
            auVar16._8_8_ = auVar26._8_8_ * dVar20 - auVar24._8_8_ * 0.0;
            local_e0._8_4_ = SUB84(dVar6,0);
            local_e0._0_8_ = dVar5;
            local_e0._12_4_ = uVar35;
            auVar26 = blendpd(auVar38,auVar16,2);
            dVar3 = auVar38._8_8_ + auVar38._8_8_;
            dVar4 = auVar16._0_8_ + auVar16._0_8_;
            uVar35 = (undefined4)((ulonglong)dVar4 >> 0x20);
            auVar39._0_8_ = auVar26._0_8_ + auVar26._0_8_;
            auVar39._8_8_ = auVar26._8_8_ + auVar26._8_8_;
            auVar26 = *(undefined1 (*) [16])param_1;
            auVar29._8_4_ = SUB84(dVar4,0);
            auVar29._0_8_ = dVar3;
            auVar29._12_4_ = uVar35;
            auVar18._8_4_ = SUB84(dVar4,0);
            auVar18._0_8_ = dVar3;
            auVar18._12_4_ = uVar35;
            auVar24 = blendpd(auVar18,auVar39,2);
            auVar30._0_8_ = auVar29._8_8_ * auVar26._0_8_ - auVar26._8_8_ * dVar3;
            auVar30._8_8_ = auVar39._0_8_ * auVar26._8_8_ - dVar17 * dVar4;
            auVar26 = blendpd(auVar26,auVar31,2);
            auVar31._8_4_ = SUB84(auVar30._8_8_,0);
            auVar31._0_8_ = auVar30._0_8_;
            auVar31._12_4_ = (int)((ulonglong)auVar30._8_8_ >> 0x20);
            auVar19._0_8_ = auVar24._0_8_ * dVar17 - auVar26._0_8_ * auVar39._0_8_;
            auVar19._8_8_ = auVar24._8_8_ * dVar20 - auVar26._8_8_ * auVar39._8_8_;
            dVar3 = dVar3 * dVar20 + auVar15._0_8_ + auVar31._8_8_;
            dVar4 = dVar4 * dVar20 + dVar40 + auVar19._0_8_;
            auVar31 = blendpd(auVar30,auVar19,2);
            local_c8._8_4_ = SUB84(dVar4,0);
            local_c8._0_8_ = dVar3;
            local_c8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
            dVar36 = auVar39._0_8_ * dVar20 + dVar21 + auVar31._0_8_;
            local_e0._s_0.Z = local_e8;
            pFVar11 = FDebugDrawQueue::GetInstance();
            dVar21 = param_3 * dVar8;
            local_108 = dVar21 * dVar36 + local_e8;
            dStack_110 = dVar21 * dVar4 + dVar6;
            local_118 = dVar21 * dVar3 + dVar5;
            local_b8 = dVar36;
            FDebugDrawQueue::DrawDebugLine
                      (pFVar11,(TVector<double> *)&local_e0._s_0,(TVector<double> *)&local_118,
                       param_2,false,0.0,'\n',(float)(dVar7 / param_3));
          }
          uVar12 = uVar12 + 1;
          lVar13 = lVar13 + 0x18;
          lVar14 = lVar14 + 0x58;
        } while ((int)uVar12 < (this->Contacts).ArrayNum);
      }
    }
  }
  return;
}

// DebugDrawTriangle @ 1439ca6e0

void __thiscall
Chaos::Private::FMeshContactGenerator::DebugDrawTriangle
          (FMeshContactGenerator *this,TRigidTransform<double,3> *param_1,
          FMeshContactGeneratorTriangle *param_2,FColor *param_3)

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
  float fVar12;
  FDebugDrawQueue *pFVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
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
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined4 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80;
  TVector<double>_u_0 local_68 [4];
  
  auVar23 = *(undefined1 (*) [16])&param_1->field_0x10;
  dVar11 = *(double *)&param_1->field_0x18;
  dVar4 = *(double *)&param_1->field_0x40 * *(double *)(param_2->Triangle).ABC;
  dVar5 = *(double *)&param_1->field_0x48 * *(double *)&(param_2->Triangle).ABC[0].field_0x8;
  uVar38 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar15 = *(undefined1 (*) [16])param_1;
  auVar24 = blendpd(auVar15,auVar23,2);
  auVar39._8_4_ = SUB84(dVar5,0);
  auVar39._0_8_ = dVar4;
  auVar39._12_4_ = uVar38;
  dVar7 = *(double *)&(param_2->Triangle).ABC[0].field_0x10 * *(double *)&param_1->field_0x50;
  dVar9 = *(double *)&param_1->field_0x58 * 0.0;
  dVar3 = auVar23._0_8_;
  auVar40._0_8_ = auVar39._8_8_ * auVar15._0_8_ - auVar15._8_8_ * dVar4;
  auVar40._8_8_ = dVar7 * auVar15._8_8_ - dVar3 * dVar5;
  auVar14._8_4_ = SUB84(dVar5,0);
  auVar14._0_8_ = dVar4;
  auVar14._12_4_ = uVar38;
  auVar15._8_4_ = SUB84(dVar9,0);
  auVar15._0_8_ = dVar7;
  auVar15._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  auVar15 = blendpd(auVar14,auVar15,2);
  dVar1 = auVar23._8_8_;
  auVar16._0_8_ = auVar15._0_8_ * dVar3 - auVar24._0_8_ * dVar7;
  auVar16._8_8_ = auVar15._8_8_ * dVar1 - auVar24._8_8_ * dVar9;
  auVar15 = *(undefined1 (*) [16])param_1;
  auVar24 = blendpd(auVar40,auVar16,2);
  auVar41._0_8_ = auVar24._0_8_ + auVar24._0_8_;
  auVar41._8_8_ = auVar24._8_8_ + auVar24._8_8_;
  dVar9 = auVar40._8_8_ + auVar40._8_8_;
  dVar2 = auVar16._0_8_ + auVar16._0_8_;
  uVar38 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar32._8_4_ = SUB84(dVar2,0);
  auVar32._0_8_ = dVar9;
  auVar32._12_4_ = uVar38;
  auVar26._8_4_ = SUB84(dVar2,0);
  auVar26._0_8_ = dVar9;
  auVar26._12_4_ = uVar38;
  auVar24 = blendpd(auVar26,auVar41,2);
  auVar33._0_8_ = auVar32._8_8_ * auVar15._0_8_ - auVar15._8_8_ * dVar9;
  auVar33._8_8_ = auVar41._0_8_ * auVar15._8_8_ - dVar3 * dVar2;
  auVar15 = blendpd(auVar15,auVar23,2);
  auVar17._8_4_ = SUB84(auVar33._8_8_,0);
  auVar17._0_8_ = auVar33._0_8_;
  auVar17._12_4_ = (int)((ulonglong)auVar33._8_8_ >> 0x20);
  dVar8 = *(double *)&(param_2->Triangle).ABC[1].field_0x10 * *(double *)&param_1->field_0x50;
  dVar10 = *(double *)&param_1->field_0x58 * 0.0;
  auVar27._0_8_ = auVar24._0_8_ * dVar3 - auVar15._0_8_ * auVar41._0_8_;
  auVar27._8_8_ = auVar24._8_8_ * dVar1 - auVar15._8_8_ * auVar41._8_8_;
  dVar2 = dVar2 * dVar11 + dVar5 + auVar27._0_8_ + *(double *)&param_1->field_0x28;
  dVar5 = *(double *)&param_1->field_0x40 * *(double *)((param_2->Triangle).ABC + 1);
  dVar6 = *(double *)&param_1->field_0x48 * *(double *)&(param_2->Triangle).ABC[1].field_0x8;
  uVar38 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar15 = *(undefined1 (*) [16])param_1;
  auVar24 = blendpd(auVar33,auVar27,2);
  auVar25 = blendpd(auVar15,auVar23,2);
  local_80._s_0.Z = auVar41._0_8_ * dVar11 + dVar7 + auVar24._0_8_ + *(double *)&param_1->field_0x30
  ;
  local_80._8_4_ = SUB84(dVar2,0);
  local_80._0_8_ = dVar9 * dVar11 + dVar4 + auVar17._8_8_ + *(double *)&param_1->field_0x20;
  local_80._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar42._8_4_ = SUB84(dVar6,0);
  auVar42._0_8_ = dVar5;
  auVar42._12_4_ = uVar38;
  auVar43._0_8_ = auVar42._8_8_ * auVar15._0_8_ - auVar15._8_8_ * dVar5;
  auVar43._8_8_ = dVar8 * auVar15._8_8_ - dVar3 * dVar6;
  auVar18._8_4_ = SUB84(dVar6,0);
  auVar18._0_8_ = dVar5;
  auVar18._12_4_ = uVar38;
  auVar24._8_4_ = SUB84(dVar10,0);
  auVar24._0_8_ = dVar8;
  auVar24._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  auVar15 = blendpd(auVar18,auVar24,2);
  auVar19._0_8_ = auVar15._0_8_ * dVar3 - auVar25._0_8_ * dVar8;
  auVar19._8_8_ = auVar15._8_8_ * dVar1 - auVar25._8_8_ * dVar10;
  auVar15 = *(undefined1 (*) [16])param_1;
  auVar24 = blendpd(auVar43,auVar19,2);
  auVar44._0_8_ = auVar24._0_8_ + auVar24._0_8_;
  auVar44._8_8_ = auVar24._8_8_ + auVar24._8_8_;
  dVar9 = auVar43._8_8_ + auVar43._8_8_;
  dVar2 = auVar19._0_8_ + auVar19._0_8_;
  uVar38 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar34._8_4_ = SUB84(dVar2,0);
  auVar34._0_8_ = dVar9;
  auVar34._12_4_ = uVar38;
  auVar28._8_4_ = SUB84(dVar2,0);
  auVar28._0_8_ = dVar9;
  auVar28._12_4_ = uVar38;
  auVar24 = blendpd(auVar28,auVar44,2);
  auVar35._0_8_ = auVar34._8_8_ * auVar15._0_8_ - auVar15._8_8_ * dVar9;
  auVar35._8_8_ = auVar44._0_8_ * auVar15._8_8_ - dVar3 * dVar2;
  auVar15 = blendpd(auVar15,auVar23,2);
  dVar4 = *(double *)((param_2->Triangle).ABC + 2) * *(double *)&param_1->field_0x40;
  dVar7 = *(double *)&(param_2->Triangle).ABC[2].field_0x8 * *(double *)&param_1->field_0x48;
  uVar38 = (undefined4)((ulonglong)dVar7 >> 0x20);
  auVar20._8_4_ = SUB84(auVar35._8_8_,0);
  auVar20._0_8_ = auVar35._0_8_;
  auVar20._12_4_ = (int)((ulonglong)auVar35._8_8_ >> 0x20);
  dVar10 = *(double *)&(param_2->Triangle).ABC[2].field_0x10 * *(double *)&param_1->field_0x50;
  dVar11 = *(double *)&param_1->field_0x58 * 0.0;
  auVar29._0_8_ = auVar24._0_8_ * dVar3 - auVar15._0_8_ * auVar44._0_8_;
  auVar29._8_8_ = auVar24._8_8_ * dVar1 - auVar15._8_8_ * auVar44._8_8_;
  auVar15 = *(undefined1 (*) [16])param_1;
  dVar2 = dVar2 * dVar1 + dVar6 + auVar29._0_8_ + *(double *)&param_1->field_0x28;
  auVar24 = blendpd(auVar35,auVar29,2);
  local_98._8_4_ = SUB84(dVar2,0);
  local_98._0_8_ = dVar9 * dVar1 + dVar5 + auVar20._8_8_ + *(double *)&param_1->field_0x20;
  local_98._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_98._s_0.Z = auVar44._0_8_ * dVar1 + dVar8 + auVar24._0_8_ + *(double *)&param_1->field_0x30;
  auVar24 = blendpd(auVar15,auVar23,2);
  auVar45._8_4_ = SUB84(dVar7,0);
  auVar45._0_8_ = dVar4;
  auVar45._12_4_ = uVar38;
  auVar46._0_8_ = auVar45._8_8_ * auVar15._0_8_ - auVar15._8_8_ * dVar4;
  auVar46._8_8_ = dVar10 * auVar15._8_8_ - dVar3 * dVar7;
  auVar21._8_4_ = SUB84(dVar7,0);
  auVar21._0_8_ = dVar4;
  auVar21._12_4_ = uVar38;
  auVar25._8_4_ = SUB84(dVar11,0);
  auVar25._0_8_ = dVar10;
  auVar25._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar15 = blendpd(auVar21,auVar25,2);
  auVar22._0_8_ = auVar15._0_8_ * dVar3 - auVar24._0_8_ * dVar10;
  auVar22._8_8_ = auVar15._8_8_ * dVar1 - auVar24._8_8_ * dVar11;
  auVar15 = *(undefined1 (*) [16])param_1;
  auVar24 = blendpd(auVar46,auVar22,2);
  dVar9 = auVar46._8_8_ + auVar46._8_8_;
  dVar2 = auVar22._0_8_ + auVar22._0_8_;
  uVar38 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar47._0_8_ = auVar24._0_8_ + auVar24._0_8_;
  auVar47._8_8_ = auVar24._8_8_ + auVar24._8_8_;
  auVar36._8_4_ = SUB84(dVar2,0);
  auVar36._0_8_ = dVar9;
  auVar36._12_4_ = uVar38;
  auVar30._8_4_ = SUB84(dVar2,0);
  auVar30._0_8_ = dVar9;
  auVar30._12_4_ = uVar38;
  auVar24 = blendpd(auVar30,auVar47,2);
  auVar37._0_8_ = auVar36._8_8_ * auVar15._0_8_ - auVar15._8_8_ * dVar9;
  auVar37._8_8_ = auVar47._0_8_ * auVar15._8_8_ - dVar3 * dVar2;
  auVar15 = blendpd(auVar15,auVar23,2);
  auVar23._8_4_ = SUB84(auVar37._8_8_,0);
  auVar23._0_8_ = auVar37._0_8_;
  auVar23._12_4_ = (int)((ulonglong)auVar37._8_8_ >> 0x20);
  auVar31._0_8_ = auVar24._0_8_ * dVar3 - auVar15._0_8_ * auVar47._0_8_;
  auVar31._8_8_ = auVar24._8_8_ * dVar1 - auVar15._8_8_ * auVar47._8_8_;
  dVar3 = dVar2 * dVar1 + dVar7 + auVar31._0_8_ + *(double *)&param_1->field_0x28;
  auVar15 = blendpd(auVar37,auVar31,2);
  local_68[0]._8_4_ = SUB84(dVar3,0);
  local_68[0]._0_8_ = dVar9 * dVar1 + dVar4 + auVar23._8_8_ + *(double *)&param_1->field_0x20;
  local_68[0]._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_68[0]._16_8_ =
       auVar47._0_8_ * dVar1 + dVar10 + auVar15._0_8_ + *(double *)&param_1->field_0x30;
  pFVar13 = FDebugDrawQueue::GetInstance();
  fVar12 = __real_3f000000;
  FDebugDrawQueue::DrawDebugLine
            (pFVar13,(TVector<double> *)&local_80._s_0,(TVector<double> *)&local_98._s_0,param_3,
             false,0.0,'\n',__real_3f000000);
  pFVar13 = FDebugDrawQueue::GetInstance();
  FDebugDrawQueue::DrawDebugLine
            (pFVar13,(TVector<double> *)&local_98._s_0,(TVector<double> *)&local_68[0]._s_0,param_3,
             false,0.0,'\n',fVar12);
  pFVar13 = FDebugDrawQueue::GetInstance();
  FDebugDrawQueue::DrawDebugLine
            (pFVar13,(TVector<double> *)&local_68[0]._s_0,(TVector<double> *)&local_80._s_0,param_3,
             false,0.0,'\n',fVar12);
  return;
}

// DebugDrawTriangles @ 1439caaa0

void __thiscall
Chaos::Private::FMeshContactGenerator::DebugDrawTriangles
          (FMeshContactGenerator *this,TRigidTransform<double,3> *param_1,FColor *param_2,
          FColor *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FDebugDrawQueue *pFVar5;
  longlong lVar6;
  uint uVar7;
  FMeshContactGeneratorTriangle *pFVar8;
  
  if (CVars::ChaosSolverDebugDrawMeshContacts != 0) {
    FDebugDrawQueue::GetInstance();
    pFVar5 = FDebugDrawQueue::GetInstance();
    if (((pFVar5->bEnableDebugDrawing != false) &&
        (pFVar5 = FDebugDrawQueue::GetInstance(), 0 < pFVar5->NumConsumers)) &&
       (uVar7 = 0, 0 < (this->Triangles).ArrayNum)) {
      lVar6 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar7 < (this->Triangles).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar8 = (FMeshContactGeneratorTriangle *)((this->Triangles).AllocatorInstance.Data + lVar6)
        ;
        if (pFVar8->VisitIndex == -1) {
          DebugDrawTriangle(this,param_1,pFVar8,param_3);
        }
        iVar1 = (this->Triangles).ArrayNum;
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x78;
      } while ((int)uVar7 < iVar1);
      uVar7 = 0;
      if (0 < iVar1) {
        lVar6 = 0;
        do {
          uVar4 = 0;
          if ((int)uVar7 < (this->Triangles).ArrayNum) {
            uVar4 = ~uVar7 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar8 = (FMeshContactGeneratorTriangle *)
                   ((this->Triangles).AllocatorInstance.Data + lVar6);
          if (pFVar8->VisitIndex != -1) {
            DebugDrawTriangle(this,param_1,pFVar8,param_2);
          }
          uVar7 = uVar7 + 1;
          lVar6 = lVar6 + 0x78;
        } while ((int)uVar7 < (this->Triangles).ArrayNum);
      }
    }
  }
  return;
}

// FinalizeContacts @ 1439cbef0

void __thiscall
Chaos::Private::FMeshContactGenerator::FinalizeContacts
          (FMeshContactGenerator *this,TRigidTransform<double,3> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
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
  double dVar29;
  undefined1 auVar30 [16];
  double dVar33;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar38;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined4 uVar43;
  
  uVar8 = 0;
  if (0 < (this->Contacts).ArrayNum) {
    lVar9 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this->Contacts).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->Contacts).AllocatorInstance.Data;
      dVar3 = *(double *)param_1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar4 = *(double *)&param_1->field_0x8 *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      uVar13 = (undefined4)((ulonglong)dVar4 >> 0x20);
      dVar5 = *(double *)&param_1->field_0x10 *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar11 = *(double *)&param_1->field_0x18 *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      auVar26._8_4_ = SUB84(dVar4,0);
      auVar26._0_8_ = dVar3;
      auVar26._12_4_ = uVar13;
      dVar10 = *(double *)(pFVar1 + lVar9 + 0x28) - *(double *)&param_1->field_0x30;
      dVar12 = *(double *)(pFVar1 + lVar9 + 0x18) - *(double *)&param_1->field_0x20;
      dVar38 = *(double *)(pFVar1 + lVar9 + 0x18 + 8) - *(double *)&param_1->field_0x28;
      uVar43 = (undefined4)((ulonglong)dVar38 >> 0x20);
      auVar34._8_4_ = SUB84(dVar4,0);
      auVar34._0_8_ = dVar3;
      auVar34._12_4_ = uVar13;
      auVar39._8_4_ = SUB84(dVar38,0);
      auVar39._0_8_ = dVar12;
      auVar39._12_4_ = uVar43;
      auVar14._8_4_ = SUB84(dVar38,0);
      auVar14._0_8_ = dVar12;
      auVar14._12_4_ = uVar43;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = dVar10;
      auVar15 = blendpd(auVar14,auVar32,2);
      auVar41._8_4_ = SUB84(dVar11,0);
      auVar41._0_8_ = dVar5;
      auVar41._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      auVar35 = blendpd(auVar34,auVar41,2);
      auVar40._0_8_ = auVar39._8_8_ * dVar3 - auVar26._8_8_ * dVar12;
      auVar40._8_8_ = dVar10 * dVar4 - dVar5 * dVar38;
      auVar30._8_4_ = SUB84(auVar40._8_8_,0);
      auVar30._0_8_ = auVar40._0_8_;
      auVar30._12_4_ = (int)((ulonglong)auVar40._8_8_ >> 0x20);
      auVar16._0_8_ = auVar15._0_8_ * dVar5 - auVar35._0_8_ * dVar10;
      auVar16._8_8_ = auVar15._8_8_ * dVar11 - auVar35._8_8_ * 0.0;
      auVar41 = blendpd(auVar40,auVar16,2);
      dVar29 = auVar30._8_8_ + auVar30._8_8_;
      dVar33 = auVar16._0_8_ + auVar16._0_8_;
      auVar42._0_8_ = auVar41._0_8_ + auVar41._0_8_;
      auVar42._8_8_ = auVar41._8_8_ + auVar41._8_8_;
      auVar21._8_4_ = SUB84(dVar33,0);
      auVar21._0_8_ = dVar29;
      uVar13 = (undefined4)((ulonglong)dVar33 >> 0x20);
      auVar21._12_4_ = uVar13;
      auVar17._8_4_ = SUB84(dVar33,0);
      auVar17._0_8_ = dVar29;
      auVar17._12_4_ = uVar13;
      auVar41 = blendpd(auVar17,auVar42,2);
      auVar22._0_8_ = auVar21._8_8_ * dVar3 - dVar29 * auVar26._8_8_;
      auVar22._8_8_ = auVar42._0_8_ * dVar4 - dVar33 * dVar5;
      auVar18._0_8_ = auVar41._0_8_ * dVar5 - auVar42._0_8_ * auVar35._0_8_;
      auVar18._8_8_ = auVar41._8_8_ * dVar11 - auVar42._8_8_ * auVar35._8_8_;
      auVar41 = blendpd(auVar22,auVar18,2);
      *(double *)(pFVar1 + lVar9 + 0x18) = dVar29 * dVar11 + dVar12 + auVar22._8_8_;
      *(double *)(pFVar1 + lVar9 + 0x18 + 8) = dVar33 * dVar11 + dVar38 + auVar18._0_8_;
      *(double *)(pFVar1 + lVar9 + 0x28) = auVar42._0_8_ * dVar11 + dVar10 + auVar41._0_8_;
      auVar41 = *(undefined1 (*) [16])(pFVar1 + lVar9 + 0x30);
      dVar3 = *(double *)(pFVar1 + lVar9 + 0x40);
      dVar4 = *(double *)&param_1->field_0x10 *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar5 = *(double *)&param_1->field_0x18 *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      uVar43 = (undefined4)((ulonglong)dVar5 >> 0x20);
      dVar10 = *(double *)param_1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar29 = *(double *)&param_1->field_0x8 *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar38 = auVar41._8_8_;
      auVar23._8_4_ = SUB84(dVar29,0);
      auVar23._0_8_ = dVar10;
      uVar13 = (undefined4)((ulonglong)dVar29 >> 0x20);
      auVar23._12_4_ = uVar13;
      auVar31._8_4_ = SUB84(dVar29,0);
      auVar31._0_8_ = dVar10;
      auVar31._12_4_ = uVar13;
      auVar15._8_4_ = SUB84(dVar5,0);
      auVar15._0_8_ = dVar4;
      auVar15._12_4_ = uVar43;
      auVar32 = blendpd(auVar31,auVar15,2);
      auVar35._8_8_ = 0;
      auVar35._0_8_ = dVar3;
      auVar15 = blendpd(auVar41,auVar35,2);
      auVar36._0_8_ = dVar38 * dVar10 - auVar23._8_8_ * auVar41._0_8_;
      auVar36._8_8_ = dVar3 * dVar29 - dVar4 * dVar38;
      uVar8 = uVar8 + 1;
      auVar19._0_8_ = auVar15._0_8_ * dVar4 - auVar32._0_8_ * dVar3;
      auVar19._8_8_ = auVar15._8_8_ * dVar5 - auVar32._8_8_ * 0.0;
      dVar11 = auVar36._8_8_ + auVar36._8_8_;
      dVar12 = auVar19._0_8_ + auVar19._0_8_;
      auVar15 = blendpd(auVar36,auVar19,2);
      auVar37._0_8_ = auVar15._0_8_ + auVar15._0_8_;
      auVar37._8_8_ = auVar15._8_8_ + auVar15._8_8_;
      auVar27._8_4_ = SUB84(dVar12,0);
      auVar27._0_8_ = dVar11;
      uVar13 = (undefined4)((ulonglong)dVar12 >> 0x20);
      auVar27._12_4_ = uVar13;
      auVar20._8_4_ = SUB84(dVar5,0);
      auVar20._0_8_ = dVar5;
      auVar20._12_4_ = uVar43;
      auVar28._0_8_ = auVar27._8_8_ * dVar10 - auVar23._8_8_ * dVar11;
      auVar28._8_8_ = auVar37._0_8_ * dVar29 - dVar4 * dVar12;
      auVar24._8_4_ = SUB84(dVar12,0);
      auVar24._0_8_ = dVar11;
      auVar24._12_4_ = uVar13;
      auVar15 = blendpd(auVar24,auVar37,2);
      auVar25._0_8_ = auVar15._0_8_ * dVar4 - auVar32._0_8_ * auVar37._0_8_;
      auVar25._8_8_ = auVar15._8_8_ * dVar5 - auVar32._8_8_ * auVar37._8_8_;
      auVar15 = blendpd(auVar28,auVar25,2);
      *(double *)(pFVar1 + lVar9 + 0x30) = dVar5 * dVar11 + auVar41._0_8_ + auVar28._8_8_;
      *(double *)(pFVar1 + lVar9 + 0x30 + 8) = auVar20._8_8_ * dVar12 + dVar38 + auVar25._0_8_;
      *(double *)(pFVar1 + lVar9 + 0x40) = dVar5 * auVar37._0_8_ + dVar3 + auVar15._0_8_;
      lVar9 = lVar9 + 0x58;
    } while ((int)uVar8 < (this->Contacts).ArrayNum);
  }
  return;
}

// FixContactNormal @ 1439cced0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Private::FMeshContactGenerator::FixContactNormal(FMeshContactGenerator *this,int param_1)

{
  double *pdVar1;
  undefined8 uVar2;
  double dVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [12];
  bool bVar14;
  uint uVar15;
  TVector<double,3> *pTVar16;
  ulonglong uVar17;
  FEdgeTriangleIndices *pFVar18;
  TVector<double,3> *pTVar19;
  FMeshContactGeneratorTriangle *pFVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  uint uVar42;
  uint uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  longlong local_res20;
  double local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  double local_130;
  
  uVar17 = 0;
  lVar22 = (longlong)param_1;
  uVar46 = 0;
  if (param_1 < (this->Contacts).ArrayNum) {
    uVar46 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar46 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar24 = (this->Contacts).AllocatorInstance.Data + lVar22 * 0x58;
  uVar46 = 0;
  if (param_1 < (this->ContactDatas).ArrayNum) {
    uVar46 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar46 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar5 = (this->ContactDatas).AllocatorInstance.Data;
  uVar46 = *(uint *)(pFVar5 + lVar22 * 0x18 + 8);
  uVar25 = 0;
  uVar15 = uVar25;
  if ((int)uVar46 < (this->Triangles).ArrayNum) {
    uVar15 = ~uVar46 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar20 = (FMeshContactGeneratorTriangle *)
            ((this->Triangles).AllocatorInstance.Data + (longlong)(int)uVar46 * 0x78);
  pTVar16 = FMeshContactGeneratorTriangle::GetNormal(pFVar20);
  dVar3 = __real_bff0000000000000;
  dVar37 = __real_3ff0000000000000;
  uVar15 = *(uint *)(pFVar5 + lVar22 * 0x18);
  uVar23 = (ulonglong)uVar15;
  dVar36 = (double)*(float *)(pFVar5 + lVar22 * 0x18 + 0xc);
  if (uVar15 != 0xffffffff) {
    if (*(int *)(pFVar5 + lVar22 * 0x18 + 4) == -1) {
      if (CVars::bMeshContactGeneratorFixContactNormalFixEnabled == false) {
        if (0 < (this->Triangles).ArrayNum) {
          uVar28 = SUB84(__real_3ff0000000000000,0);
          uVar23 = (ulonglong)__real_3ff0000000000000 >> 0x20;
          uVar32 = SUB84(__real_bff0000000000000,0);
          uVar27 = (ulonglong)__real_bff0000000000000 >> 0x20;
          local_res20 = 0;
          uVar26 = uVar17;
          do {
            uVar21 = (uint)uVar17;
            uVar15 = uVar25;
            if ((int)uVar21 < (this->Triangles).ArrayNum) {
              uVar15 = ~uVar21 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar20 = (FMeshContactGeneratorTriangle *)
                      ((this->Triangles).AllocatorInstance.Data + local_res20);
            if (uVar26 != (longlong)(int)uVar46) {
              iVar4 = *(int *)(pFVar5 + lVar22 * 0x18);
              if (iVar4 == pFVar20->VertexIndices[0]) {
LAB_1439cd576:
                local_130 = *(double *)&(pFVar20->Triangle).ABC[0].field_0x10;
                local_140 = *(undefined4 *)(pFVar20->Triangle).ABC;
                uStack_13c = *(undefined4 *)&(pFVar20->Triangle).ABC[0].field_0x4;
                uStack_138 = *(undefined4 *)&(pFVar20->Triangle).ABC[0].field_0x8;
                uStack_134 = *(undefined4 *)&(pFVar20->Triangle).ABC[0].field_0xc;
                uVar31 = *(undefined4 *)((pFVar20->Triangle).ABC + 1);
                uVar35 = *(undefined4 *)&(pFVar20->Triangle).ABC[1].field_0x4;
                uVar52 = *(undefined4 *)&(pFVar20->Triangle).ABC[1].field_0x8;
                uVar53 = *(undefined4 *)&(pFVar20->Triangle).ABC[1].field_0xc;
                uVar50 = *(undefined4 *)((pFVar20->Triangle).ABC + 2);
                uVar51 = *(undefined4 *)&(pFVar20->Triangle).ABC[2].field_0x4;
                uVar44 = *(undefined4 *)&(pFVar20->Triangle).ABC[2].field_0x8;
                uVar45 = *(undefined4 *)&(pFVar20->Triangle).ABC[2].field_0xc;
                local_148 = *(double *)&(pFVar20->Triangle).ABC[1].field_0x10;
                uVar2 = *(undefined8 *)&(pFVar20->Triangle).ABC[2].field_0x10;
                uVar30 = (undefined4)uVar2;
                uVar34 = (undefined4)((ulonglong)uVar2 >> 0x20);
              }
              else {
                if ((pFVar20->VertexIndices[1] != iVar4) && (pFVar20->VertexIndices[2] != iVar4))
                goto LAB_1439cd859;
                if (iVar4 == pFVar20->VertexIndices[0]) goto LAB_1439cd576;
                if (iVar4 == pFVar20->VertexIndices[1]) {
                  local_140 = *(undefined4 *)((pFVar20->Triangle).ABC + 1);
                  uStack_13c = *(undefined4 *)&(pFVar20->Triangle).ABC[1].field_0x4;
                  uStack_138 = *(undefined4 *)&(pFVar20->Triangle).ABC[1].field_0x8;
                  uStack_134 = *(undefined4 *)&(pFVar20->Triangle).ABC[1].field_0xc;
                  uVar2 = *(undefined8 *)&(pFVar20->Triangle).ABC[1].field_0x10;
                  uVar31 = (undefined4)uVar2;
                  uVar35 = (undefined4)((ulonglong)uVar2 >> 0x20);
                }
                else {
                  if (iVar4 != pFVar20->VertexIndices[2]) goto LAB_1439cd859;
                  local_140 = *(undefined4 *)((pFVar20->Triangle).ABC + 2);
                  uStack_13c = *(undefined4 *)&(pFVar20->Triangle).ABC[2].field_0x4;
                  uStack_138 = *(undefined4 *)&(pFVar20->Triangle).ABC[2].field_0x8;
                  uStack_134 = *(undefined4 *)&(pFVar20->Triangle).ABC[2].field_0xc;
                  uVar2 = *(undefined8 *)&(pFVar20->Triangle).ABC[2].field_0x10;
                  uVar31 = (undefined4)uVar2;
                  uVar35 = (undefined4)((ulonglong)uVar2 >> 0x20);
                }
                local_130 = (double)CONCAT44(uVar35,uVar31);
                if (iVar4 == pFVar20->VertexIndices[1]) {
                  local_148 = *(double *)&(pFVar20->Triangle).ABC[2].field_0x10;
                  uVar31 = *(undefined4 *)((pFVar20->Triangle).ABC + 2);
                  uVar35 = *(undefined4 *)&(pFVar20->Triangle).ABC[2].field_0x4;
                  uVar52 = *(undefined4 *)&(pFVar20->Triangle).ABC[2].field_0x8;
                  uVar53 = *(undefined4 *)&(pFVar20->Triangle).ABC[2].field_0xc;
                  uVar50 = *(undefined4 *)(pFVar20->Triangle).ABC;
                  uVar51 = *(undefined4 *)&(pFVar20->Triangle).ABC[0].field_0x4;
                  uVar44 = *(undefined4 *)&(pFVar20->Triangle).ABC[0].field_0x8;
                  uVar45 = *(undefined4 *)&(pFVar20->Triangle).ABC[0].field_0xc;
                  uVar2 = *(undefined8 *)&(pFVar20->Triangle).ABC[0].field_0x10;
                  uVar30 = (undefined4)uVar2;
                  uVar34 = (undefined4)((ulonglong)uVar2 >> 0x20);
                }
                else {
                  if (iVar4 != pFVar20->VertexIndices[2]) goto LAB_1439cd859;
                  local_148 = *(double *)&(pFVar20->Triangle).ABC[0].field_0x10;
                  uVar31 = *(undefined4 *)(pFVar20->Triangle).ABC;
                  uVar35 = *(undefined4 *)&(pFVar20->Triangle).ABC[0].field_0x4;
                  uVar52 = *(undefined4 *)&(pFVar20->Triangle).ABC[0].field_0x8;
                  uVar53 = *(undefined4 *)&(pFVar20->Triangle).ABC[0].field_0xc;
                  uVar50 = *(undefined4 *)((pFVar20->Triangle).ABC + 1);
                  uVar51 = *(undefined4 *)&(pFVar20->Triangle).ABC[1].field_0x4;
                  uVar44 = *(undefined4 *)&(pFVar20->Triangle).ABC[1].field_0x8;
                  uVar45 = *(undefined4 *)&(pFVar20->Triangle).ABC[1].field_0xc;
                  uVar2 = *(undefined8 *)&(pFVar20->Triangle).ABC[1].field_0x10;
                  uVar30 = (undefined4)uVar2;
                  uVar34 = (undefined4)((ulonglong)uVar2 >> 0x20);
                }
              }
              pTVar19 = FMeshContactGeneratorTriangle::GetNormal(pFVar20);
              dVar39 = *(double *)&pTVar19->field_0x8;
              dVar7 = *(double *)pTVar19;
              dVar8 = *(double *)&pTVar19->field_0x10;
              dVar9 = *(double *)(pFVar24 + 0x40);
              dVar12 = (double)CONCAT44(uVar35,uVar31) - (double)CONCAT44(uStack_13c,local_140);
              dVar11 = (double)CONCAT44(uVar53,uVar52) - (double)CONCAT44(uStack_134,uStack_138);
              dVar40 = *(double *)(pFVar24 + 0x30);
              dVar38 = (double)CONCAT44(uVar34,uVar30) - local_130;
              dVar10 = (*(double *)(pFVar24 + 0x38) * (local_148 - local_130) -
                       *(double *)(pFVar24 + 0x40) * dVar11) * dVar7 +
                       (*(double *)(pFVar24 + 0x40) * dVar12 -
                       *(double *)(pFVar24 + 0x30) * (local_148 - local_130)) * dVar39 +
                       (*(double *)(pFVar24 + 0x30) * dVar11 - *(double *)(pFVar24 + 0x38) * dVar12)
                       * dVar8;
              auVar13._4_4_ = uVar44;
              auVar13._0_4_ = uVar51;
              auVar13._8_4_ = uVar45;
              dVar12 = (double)CONCAT44(uVar51,uVar50) - (double)CONCAT44(uStack_13c,local_140);
              dVar11 = *(double *)(pFVar24 + 0x38);
              dVar41 = auVar13._4_8_ - (double)CONCAT44(uStack_134,uStack_138);
              dVar12 = (dVar12 * dVar9 - dVar38 * dVar40) * dVar39 +
                       (dVar38 * dVar11 - dVar41 * dVar9) * dVar7 +
                       (dVar41 * dVar40 - dVar12 * dVar11) * dVar8;
              dVar38 = dVar37;
              if ((dVar10 <= 0.0) && (dVar38 = dVar3, 0.0 <= dVar10)) {
                dVar38 = 0.0;
              }
              uVar31 = uVar28;
              uVar35 = (int)uVar23;
              if ((dVar12 <= 0.0) && (uVar31 = uVar32, uVar35 = (int)uVar27, 0.0 <= dVar12)) {
                uVar31 = 0;
                uVar35 = 0;
              }
              if ((dVar38 == (double)CONCAT44(uVar35,uVar31)) &&
                 (0.0 < ((*(double *)&(pFVar20->Triangle).ABC[1].field_0x8 +
                          *(double *)&(pFVar20->Triangle).ABC[0].field_0x8 +
                         *(double *)&(pFVar20->Triangle).ABC[2].field_0x8) * __real_3fd5555555555555
                        - *(double *)(pFVar24 + 0x20)) * dVar11 +
                        ((*(double *)(pFVar20->Triangle).ABC +
                          *(double *)((pFVar20->Triangle).ABC + 1) +
                         *(double *)((pFVar20->Triangle).ABC + 2)) * __real_3fd5555555555555 -
                        *(double *)(pFVar24 + 0x18)) * dVar40 +
                        ((*(double *)&(pFVar20->Triangle).ABC[1].field_0x10 +
                          *(double *)&(pFVar20->Triangle).ABC[0].field_0x10 +
                         *(double *)&(pFVar20->Triangle).ABC[2].field_0x10) *
                         __real_3fd5555555555555 - *(double *)(pFVar24 + 0x28)) * dVar9)) {
                dVar39 = (double)(float)(dVar39 * *(double *)&pTVar16->field_0x8 +
                                         dVar7 * *(double *)pTVar16 +
                                        dVar8 * *(double *)&pTVar16->field_0x10) - dVar36;
                pdVar1 = &(this->Settings).EdgeNormalDotRejectTolerance;
                if (*pdVar1 <= dVar39 && dVar39 != *pdVar1) goto LAB_1439cda63;
                dVar8 = *(double *)pTVar19;
                dVar9 = *(double *)&pTVar19->field_0x8;
                dVar39 = *(double *)&pTVar19->field_0x10;
                dVar7 = *(double *)(pFVar24 + 0x48);
                *(double *)(pFVar24 + 0x30) = dVar8;
                *(double *)(pFVar24 + 0x38) = dVar9;
                *(double *)(pFVar24 + 0x40) = dVar39;
                *(double *)pFVar24 = dVar7 * dVar8 + *(double *)(pFVar24 + 0x18);
                *(double *)(pFVar24 + 8) = dVar9 * dVar7 + *(double *)(pFVar24 + 0x20);
                *(double *)(pFVar24 + 0x10) = dVar39 * dVar7 + *(double *)(pFVar24 + 0x28);
              }
            }
LAB_1439cd859:
            uVar17 = (ulonglong)(uVar21 + 1);
            local_res20 = local_res20 + 0x78;
            uVar26 = uVar26 + 1;
          } while ((int)(uVar21 + 1) < (this->Triangles).ArrayNum);
        }
      }
      else {
        if (uVar15 == pFVar20->VertexIndices[0]) {
          uVar28 = *(undefined4 *)(pFVar20->Triangle).ABC;
          uVar32 = *(undefined4 *)&(pFVar20->Triangle).ABC[0].field_0x4;
          uVar31 = *(undefined4 *)&(pFVar20->Triangle).ABC[0].field_0x8;
          uVar35 = *(undefined4 *)&(pFVar20->Triangle).ABC[0].field_0xc;
          dVar36 = *(double *)&(pFVar20->Triangle).ABC[0].field_0x10;
        }
        else if (uVar15 == pFVar20->VertexIndices[1]) {
          uVar28 = *(undefined4 *)((pFVar20->Triangle).ABC + 1);
          uVar32 = *(undefined4 *)&(pFVar20->Triangle).ABC[1].field_0x4;
          uVar31 = *(undefined4 *)&(pFVar20->Triangle).ABC[1].field_0x8;
          uVar35 = *(undefined4 *)&(pFVar20->Triangle).ABC[1].field_0xc;
          dVar36 = *(double *)&(pFVar20->Triangle).ABC[1].field_0x10;
        }
        else {
          if (uVar15 != pFVar20->VertexIndices[2]) {
            return;
          }
          uVar28 = *(undefined4 *)((pFVar20->Triangle).ABC + 2);
          uVar32 = *(undefined4 *)&(pFVar20->Triangle).ABC[2].field_0x4;
          uVar31 = *(undefined4 *)&(pFVar20->Triangle).ABC[2].field_0x8;
          uVar35 = *(undefined4 *)&(pFVar20->Triangle).ABC[2].field_0xc;
          dVar36 = *(double *)&(pFVar20->Triangle).ABC[2].field_0x10;
        }
        if (0 < (this->Triangles).ArrayNum) {
          local_res20 = 0;
          do {
            uVar25 = (uint)uVar17;
            uVar46 = 0;
            if ((int)uVar25 < (this->Triangles).ArrayNum) {
              uVar46 = ~uVar25 >> 0x1f;
            }
            if ((uVar46 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar20 = (FMeshContactGeneratorTriangle *)
                      ((this->Triangles).AllocatorInstance.Data + local_res20);
            uVar46 = pFVar20->VertexIndices[0];
            uVar17 = (ulonglong)uVar46;
            uVar21 = pFVar20->VertexIndices[1];
            uVar47 = pFVar20->VertexIndices[2];
            if (uVar15 == uVar46) {
              uVar17 = (ulonglong)uVar21;
              uVar27 = (ulonglong)uVar47;
LAB_1439cd16e:
              uVar46 = (uint)uVar17;
              uVar26 = uVar23;
              if (((int)uVar46 <= (int)uVar15) && (uVar46 != 0xffffffff)) {
                uVar26 = uVar17;
                uVar46 = uVar15;
              }
              uVar17 = uVar23;
              if ((int)uVar15 <= (int)uVar27) {
                uVar17 = uVar27;
                uVar27 = uVar23;
              }
              pFVar18 = THashMappedArray<Chaos::FContactEdgeID,Chaos::Private::FMeshContactGenerator::FEdgeTriangleIndices,Chaos::Private::FMeshContactGenerator::FEdgeTriangleIndicesMapTraits>
                        ::Find(&this->EdgeTriangleIndicesMap,
                               (FContactEdgeID)((ulonglong)uVar46 << 0x20 | uVar26));
              if (((((pFVar18 == (FEdgeTriangleIndices *)0x0) ||
                    (pFVar18->LocalTriangleIndices[0] == -1)) ||
                   (pFVar18->LocalTriangleIndices[1] == -1)) ||
                  ((pFVar18 = THashMappedArray<Chaos::FContactEdgeID,Chaos::Private::FMeshContactGenerator::FEdgeTriangleIndices,Chaos::Private::FMeshContactGenerator::FEdgeTriangleIndicesMapTraits>
                              ::Find(&this->EdgeTriangleIndicesMap,
                                     (FContactEdgeID)(uVar17 << 0x20 | uVar27)),
                   pFVar18 == (FEdgeTriangleIndices *)0x0 ||
                   (pFVar18->LocalTriangleIndices[0] == -1)))) ||
                 (pFVar18->LocalTriangleIndices[1] == -1)) {
                dVar36 = *(double *)(pFVar24 + 0x48);
                dVar37 = *(double *)&pTVar16->field_0x8;
                *(double *)(pFVar24 + 0x30) = *(double *)pTVar16;
                *(double *)(pFVar24 + 0x38) = dVar37;
                *(double *)(pFVar24 + 0x40) = *(double *)&pTVar16->field_0x10;
                dVar37 = *(double *)&pTVar16->field_0x8;
                dVar3 = *(double *)&pTVar16->field_0x10;
                *(double *)pFVar24 = dVar36 * *(double *)pTVar16 + *(double *)(pFVar24 + 0x18);
                *(double *)(pFVar24 + 8) = dVar36 * dVar37 + *(double *)(pFVar24 + 0x20);
                *(double *)(pFVar24 + 0x10) = dVar36 * dVar3 + *(double *)(pFVar24 + 0x28);
                return;
              }
            }
            else {
              if (uVar15 == uVar21) {
                uVar27 = (ulonglong)uVar46;
                uVar17 = (ulonglong)uVar47;
                goto LAB_1439cd16e;
              }
              if (uVar15 == uVar47) {
                uVar27 = (ulonglong)uVar21;
                goto LAB_1439cd16e;
              }
            }
            if (uVar15 == pFVar20->VertexIndices[0]) {
              local_148 = *(double *)&(pFVar20->Triangle).ABC[1].field_0x10;
              uVar52 = *(undefined4 *)((pFVar20->Triangle).ABC + 1);
              uVar53 = *(undefined4 *)&(pFVar20->Triangle).ABC[1].field_0x4;
              uVar50 = *(undefined4 *)&(pFVar20->Triangle).ABC[1].field_0x8;
              uVar51 = *(undefined4 *)&(pFVar20->Triangle).ABC[1].field_0xc;
              uVar44 = *(undefined4 *)((pFVar20->Triangle).ABC + 2);
              uVar45 = *(undefined4 *)&(pFVar20->Triangle).ABC[2].field_0x4;
              uVar30 = *(undefined4 *)&(pFVar20->Triangle).ABC[2].field_0x8;
              uVar34 = *(undefined4 *)&(pFVar20->Triangle).ABC[2].field_0xc;
              uVar2 = *(undefined8 *)&(pFVar20->Triangle).ABC[2].field_0x10;
              uVar29 = (undefined4)uVar2;
              uVar33 = (undefined4)((ulonglong)uVar2 >> 0x20);
LAB_1439cd259:
              pTVar19 = FMeshContactGeneratorTriangle::GetNormal(pFVar20);
              local_148 = local_148 - dVar36;
              dVar37 = *(double *)&pTVar19->field_0x10;
              dVar3 = *(double *)pTVar19;
              dVar39 = *(double *)&pTVar19->field_0x8;
              dVar40 = dVar36 - (double)CONCAT44(uVar33,uVar29);
              dVar9 = (double)CONCAT44(uVar32,uVar28) - (double)CONCAT44(uVar45,uVar44);
              dVar11 = (double)CONCAT44(uVar35,uVar31) - (double)CONCAT44(uVar34,uVar30);
              dVar12 = (double)CONCAT44(uVar53,uVar52) - (double)CONCAT44(uVar32,uVar28);
              dVar8 = (double)CONCAT44(uVar51,uVar50) - (double)CONCAT44(uVar35,uVar31);
              dVar7 = (dVar37 * dVar12 - dVar3 * local_148) * *(double *)(pFVar24 + 0x38) +
                      (dVar39 * local_148 - dVar37 * dVar8) * *(double *)(pFVar24 + 0x30) +
                      (dVar3 * dVar8 - dVar39 * dVar12) * *(double *)(pFVar24 + 0x40);
              dVar37 = (dVar37 * dVar9 - dVar3 * dVar40) * *(double *)(pFVar24 + 0x38) +
                       (dVar39 * dVar40 - dVar37 * dVar11) * *(double *)(pFVar24 + 0x30) +
                       (dVar3 * dVar11 - dVar39 * dVar9) * *(double *)(pFVar24 + 0x40);
              if ((local_148 * local_148 * __real_be45798ee2308c3a -
                   (dVar12 * dVar12 + dVar8 * dVar8) * __real_3e45798ee2308c3a <=
                   (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                   dVar7) &&
                 (dVar40 * dVar40 * __real_be45798ee2308c3a -
                  (dVar9 * dVar9 + dVar11 * dVar11) * __real_3e45798ee2308c3a <=
                  (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar37,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
                  dVar37)) {
                dVar37 = *(double *)&pTVar19->field_0x8;
                dVar36 = *(double *)(pFVar24 + 0x48);
                *(double *)(pFVar24 + 0x30) = *(double *)pTVar19;
                *(double *)(pFVar24 + 0x38) = dVar37;
                *(double *)(pFVar24 + 0x40) = *(double *)&pTVar19->field_0x10;
                dVar37 = *(double *)&pTVar19->field_0x8;
                dVar3 = *(double *)&pTVar19->field_0x10;
                *(double *)pFVar24 = dVar36 * *(double *)pTVar19 + *(double *)(pFVar24 + 0x18);
                *(double *)(pFVar24 + 8) = dVar36 * dVar37 + *(double *)(pFVar24 + 0x20);
                *(double *)(pFVar24 + 0x10) = dVar36 * dVar3 + *(double *)(pFVar24 + 0x28);
                *(uint *)(pFVar5 + lVar22 * 0x18 + 8) = uVar25;
                return;
              }
            }
            else {
              if (uVar15 == pFVar20->VertexIndices[1]) {
                local_148 = *(double *)&(pFVar20->Triangle).ABC[2].field_0x10;
                uVar52 = *(undefined4 *)((pFVar20->Triangle).ABC + 2);
                uVar53 = *(undefined4 *)&(pFVar20->Triangle).ABC[2].field_0x4;
                uVar50 = *(undefined4 *)&(pFVar20->Triangle).ABC[2].field_0x8;
                uVar51 = *(undefined4 *)&(pFVar20->Triangle).ABC[2].field_0xc;
                uVar44 = *(undefined4 *)(pFVar20->Triangle).ABC;
                uVar45 = *(undefined4 *)&(pFVar20->Triangle).ABC[0].field_0x4;
                uVar30 = *(undefined4 *)&(pFVar20->Triangle).ABC[0].field_0x8;
                uVar34 = *(undefined4 *)&(pFVar20->Triangle).ABC[0].field_0xc;
                uVar2 = *(undefined8 *)&(pFVar20->Triangle).ABC[0].field_0x10;
                uVar29 = (undefined4)uVar2;
                uVar33 = (undefined4)((ulonglong)uVar2 >> 0x20);
                goto LAB_1439cd259;
              }
              if (uVar15 == pFVar20->VertexIndices[2]) {
                local_148 = *(double *)&(pFVar20->Triangle).ABC[0].field_0x10;
                uVar52 = *(undefined4 *)(pFVar20->Triangle).ABC;
                uVar53 = *(undefined4 *)&(pFVar20->Triangle).ABC[0].field_0x4;
                uVar50 = *(undefined4 *)&(pFVar20->Triangle).ABC[0].field_0x8;
                uVar51 = *(undefined4 *)&(pFVar20->Triangle).ABC[0].field_0xc;
                uVar44 = *(undefined4 *)((pFVar20->Triangle).ABC + 1);
                uVar45 = *(undefined4 *)&(pFVar20->Triangle).ABC[1].field_0x4;
                uVar30 = *(undefined4 *)&(pFVar20->Triangle).ABC[1].field_0x8;
                uVar34 = *(undefined4 *)&(pFVar20->Triangle).ABC[1].field_0xc;
                uVar2 = *(undefined8 *)&(pFVar20->Triangle).ABC[1].field_0x10;
                uVar29 = (undefined4)uVar2;
                uVar33 = (undefined4)((ulonglong)uVar2 >> 0x20);
                goto LAB_1439cd259;
              }
            }
            local_res20 = local_res20 + 0x78;
            uVar17 = (ulonglong)(uVar25 + 1);
          } while ((int)(uVar25 + 1) < (this->Triangles).ArrayNum);
        }
      }
    }
    else {
      pFVar18 = THashMappedArray<Chaos::FContactEdgeID,Chaos::Private::FMeshContactGenerator::FEdgeTriangleIndices,Chaos::Private::FMeshContactGenerator::FEdgeTriangleIndicesMapTraits>
                ::Find(&this->EdgeTriangleIndicesMap,
                       (FContactEdgeID)*(FContactEdgeID_u_0 *)(pFVar5 + lVar22 * 0x18));
      if (pFVar18 != (FEdgeTriangleIndices *)0x0) {
        uVar15 = pFVar18->LocalTriangleIndices[0];
        if (uVar15 == uVar46) {
          uVar15 = pFVar18->LocalTriangleIndices[1];
        }
        if (uVar15 != 0xffffffff) {
          if ((int)uVar15 < (this->Triangles).ArrayNum) {
            uVar25 = ~uVar15 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pTVar19 = FMeshContactGeneratorTriangle::GetNormal
                              ((FMeshContactGeneratorTriangle *)
                               ((this->Triangles).AllocatorInstance.Data +
                               (longlong)(int)uVar15 * 0x78));
          dVar37 = *(double *)pTVar16;
          dVar3 = *(double *)&pTVar16->field_0x8;
          dVar39 = *(double *)&pTVar16->field_0x10;
          dVar7 = *(double *)pTVar19;
          dVar8 = *(double *)&pTVar19->field_0x8;
          dVar9 = *(double *)&pTVar19->field_0x10;
          dVar40 = (double)(float)(dVar8 * dVar3 + dVar7 * dVar37 + dVar9 * dVar39);
          if (dVar36 < dVar40) {
            dVar40 = dVar40 - dVar36;
            pdVar1 = &(this->Settings).EdgeNormalDotRejectTolerance;
            if (*pdVar1 <= dVar40 && dVar40 != *pdVar1) {
LAB_1439cda63:
              pFVar5[lVar22 * 0x18 + 0x10] = (FScriptContainerElement)0x0;
            }
            else {
              dVar40 = dVar8 * *(double *)(pFVar24 + 0x38) + dVar7 * *(double *)(pFVar24 + 0x30) +
                       dVar9 * *(double *)(pFVar24 + 0x40);
              uVar25 = (uint)__xmm_80000000000000008000000000000000;
              uVar21 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
              if (dVar36 < dVar40) {
                if (dVar40 <= __real_be45798ee0000000) {
                  uVar42 = SUB84(dVar9,0) ^ uVar25;
                  uVar43 = (uint)((ulonglong)dVar9 >> 0x20) ^ uVar21;
                  uVar46 = SUB84(dVar7,0) ^ uVar25;
                  uVar47 = (uint)((ulonglong)dVar7 >> 0x20) ^ uVar21;
                  uVar48 = SUB84(dVar8,0) ^ uVar25;
                  uVar49 = (uint)((ulonglong)dVar8 >> 0x20) ^ uVar21;
                }
                else {
                  uVar46 = *(uint *)pTVar19;
                  uVar47 = *(uint *)&pTVar19->field_0x4;
                  uVar48 = *(uint *)&pTVar19->field_0x8;
                  uVar49 = *(uint *)&pTVar19->field_0xc;
                  uVar42 = (uint)*(undefined8 *)&pTVar19->field_0x10;
                  uVar43 = (uint)((ulonglong)*(undefined8 *)&pTVar19->field_0x10 >> 0x20);
                }
              }
              else {
                uVar15 = uVar46;
                if (dVar36 <= __real_be45798ee0000000) {
                  uVar46 = SUB84(dVar37,0) ^ uVar25;
                  uVar47 = (uint)((ulonglong)dVar37 >> 0x20) ^ uVar21;
                  uVar48 = SUB84(dVar3,0) ^ uVar25;
                  uVar49 = (uint)((ulonglong)dVar3 >> 0x20) ^ uVar21;
                  uVar42 = SUB84(dVar39,0) ^ uVar25;
                  uVar43 = (uint)((ulonglong)dVar39 >> 0x20) ^ uVar21;
                }
                else {
                  uVar46 = *(uint *)pTVar16;
                  uVar47 = *(uint *)&pTVar16->field_0x4;
                  uVar48 = *(uint *)&pTVar16->field_0x8;
                  uVar49 = *(uint *)&pTVar16->field_0xc;
                  uVar42 = (uint)*(undefined8 *)&pTVar16->field_0x10;
                  uVar43 = (uint)((ulonglong)*(undefined8 *)&pTVar16->field_0x10 >> 0x20);
                }
              }
              dVar36 = *(double *)(pFVar24 + 0x48);
              *(uint *)(pFVar24 + 0x30) = uVar46;
              *(uint *)(pFVar24 + 0x34) = uVar47;
              *(uint *)(pFVar24 + 0x38) = uVar48;
              *(uint *)(pFVar24 + 0x3c) = uVar49;
              *(ulonglong *)(pFVar24 + 0x40) = CONCAT44(uVar43,uVar42);
              *(double *)pFVar24 =
                   (double)CONCAT44(uVar47,uVar46) * dVar36 + *(double *)(pFVar24 + 0x18);
              *(double *)(pFVar24 + 8) =
                   (double)CONCAT44(uVar49,uVar48) * dVar36 + *(double *)(pFVar24 + 0x20);
              *(double *)(pFVar24 + 0x10) =
                   (double)CONCAT44(uVar43,uVar42) * dVar36 + *(double *)(pFVar24 + 0x28);
              *(uint *)(pFVar5 + lVar22 * 0x18 + 8) = uVar15;
            }
          }
        }
      }
    }
  }
  return;
}

// FixFeature @ 1439cdaf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::Private::FMeshContactGenerator::FixFeature
          (FMeshContactGenerator *this,int param_1,EConvexFeatureType *param_2,int *param_3,
          TVector<double,3> *param_4)

{
  double dVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  FContactEdgeID FVar11;
  FContactEdgeID FVar12;
  bool bVar13;
  undefined1 uVar14;
  uint uVar15;
  TVector<double,3> *pTVar16;
  FEdgeTriangleIndices *pFVar17;
  TVector<double,3> *pTVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  uint uVar21;
  FMeshContactGeneratorTriangle *this_00;
  ulonglong uVar22;
  FMeshContactGeneratorTriangle *this_01;
  int iVar23;
  ulonglong uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  uint uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  int local_res8;
  int iStackX_c;
  int local_168;
  int iStack_164;
  double local_140;
  double local_110;
  
  uVar24 = (ulonglong)param_1;
  uVar35 = 0;
  if (param_1 < (this->Triangles).ArrayNum) {
    uVar35 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar35 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar7 = (code *)swi(3);
    uVar14 = (*pcVar7)();
    return (bool)uVar14;
  }
  this_01 = (FMeshContactGeneratorTriangle *)
            ((this->Triangles).AllocatorInstance.Data + uVar24 * 0x78);
  pTVar16 = FMeshContactGeneratorTriangle::GetNormal(this_01);
  uVar21 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar35 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar38 = __real_3ff0000000000000;
  uVar47 = SUB84(__real_3ff0000000000000,0);
  uVar48 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  if (*param_2 == Edge) {
    if ((*param_3 == -1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InOutFeatureIndex != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\MeshContactGenerator.cpp"
                            ,0x183,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      uVar14 = (*pcVar7)();
      return (bool)uVar14;
    }
    iVar4 = *param_3;
    iVar5 = this_01->VertexIndices[iVar4];
    iVar23 = 0;
    if (iVar4 != 2) {
      iVar23 = iVar4 + 1;
    }
    iVar6 = this_01->VertexIndices[iVar23];
    local_res8 = iVar5;
    iStackX_c = iVar6;
    if ((iVar6 <= iVar5) && (iVar6 != -1)) {
      local_res8 = iVar6;
      iStackX_c = iVar5;
    }
    FVar11.field0_0x0.VertexIDs[1] = iStackX_c;
    FVar11.field0_0x0.VertexIDs[0] = local_res8;
    pFVar17 = THashMappedArray<Chaos::FContactEdgeID,Chaos::Private::FMeshContactGenerator::FEdgeTriangleIndices,Chaos::Private::FMeshContactGenerator::FEdgeTriangleIndicesMapTraits>
              ::Find(&this->EdgeTriangleIndicesMap,FVar11);
    if (pFVar17 != (FEdgeTriangleIndices *)0x0) {
      uVar20 = pFVar17->LocalTriangleIndices[0];
      if (uVar20 == param_1) {
        uVar20 = pFVar17->LocalTriangleIndices[1];
      }
      if (uVar20 != 0xffffffff) {
        uVar15 = 0;
        if ((int)uVar20 < (this->Triangles).ArrayNum) {
          uVar15 = ~uVar20 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          uVar14 = (*pcVar7)();
          return (bool)uVar14;
        }
        this_00 = (FMeshContactGeneratorTriangle *)
                  ((this->Triangles).AllocatorInstance.Data + (longlong)(int)uVar20 * 0x78);
        pTVar18 = FMeshContactGeneratorTriangle::GetNormal(this_00);
        dVar40 = *(double *)&pTVar18->field_0x8;
        dVar45 = *(double *)pTVar18;
        dVar1 = *(double *)&pTVar18->field_0x10;
        dVar39 = *(double *)&pTVar16->field_0x8;
        dVar43 = *(double *)pTVar16;
        dVar42 = *(double *)&pTVar16->field_0x10;
        dVar38 = (dVar45 * dVar43 + dVar39 * dVar40 + dVar42 * dVar1) - dVar38;
        if (__real_3eb0c6f7a0b5ed8d <
            (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) & uVar21,SUB84(dVar38,0) & uVar35)) {
          dVar41 = *(double *)&(this_01->Triangle).ABC[iVar23].field_0x10 -
                   *(double *)&(this_01->Triangle).ABC[iVar4].field_0x10;
          dVar38 = *(double *)&(this_01->Triangle).ABC[iVar23].field_0x8 -
                   *(double *)&(this_01->Triangle).ABC[iVar4].field_0x8;
          dVar44 = *(double *)((this_01->Triangle).ABC + iVar23) -
                   *(double *)((this_01->Triangle).ABC + iVar4);
          dVar46 = dVar42 * dVar38 - dVar41 * dVar39;
          dVar42 = dVar41 * dVar43 - dVar42 * dVar44;
          dVar38 = dVar44 * dVar39 - dVar38 * dVar43;
          if (0.0 <= dVar42 * dVar40 + dVar46 * dVar45 + dVar1 * dVar38) {
            if (0.0 <= *(double *)param_4 * dVar46 + dVar42 * *(double *)&param_4->field_0x8 +
                       dVar38 * *(double *)&param_4->field_0x10) {
              if (iVar5 == this_00->VertexIndices[0]) {
                auVar3 = *(undefined1 (*) [16])(this_00->Triangle).ABC;
                dVar38 = auVar3._0_8_;
                uVar32 = auVar3._8_4_;
                uVar34 = auVar3._12_4_;
                uVar2 = *(undefined8 *)&(this_00->Triangle).ABC[0].field_0x10;
                uVar25 = (undefined4)uVar2;
                uVar28 = (undefined4)((ulonglong)uVar2 >> 0x20);
LAB_1439cde6d:
                if (iVar6 == this_00->VertexIndices[0]) {
                  uVar31 = *(undefined4 *)(this_00->Triangle).ABC;
                  uVar33 = *(undefined4 *)&(this_00->Triangle).ABC[0].field_0x4;
                  uVar36 = *(undefined4 *)&(this_00->Triangle).ABC[0].field_0x8;
                  uVar37 = *(undefined4 *)&(this_00->Triangle).ABC[0].field_0xc;
                  uVar2 = *(undefined8 *)&(this_00->Triangle).ABC[0].field_0x10;
                  uVar26 = (undefined4)uVar2;
                  uVar29 = (undefined4)((ulonglong)uVar2 >> 0x20);
                }
                else if (iVar6 == this_00->VertexIndices[1]) {
                  uVar31 = *(undefined4 *)((this_00->Triangle).ABC + 1);
                  uVar33 = *(undefined4 *)&(this_00->Triangle).ABC[1].field_0x4;
                  uVar36 = *(undefined4 *)&(this_00->Triangle).ABC[1].field_0x8;
                  uVar37 = *(undefined4 *)&(this_00->Triangle).ABC[1].field_0xc;
                  uVar2 = *(undefined8 *)&(this_00->Triangle).ABC[1].field_0x10;
                  uVar26 = (undefined4)uVar2;
                  uVar29 = (undefined4)((ulonglong)uVar2 >> 0x20);
                }
                else {
                  if (iVar6 != this_00->VertexIndices[2]) goto LAB_1439cdf5c;
                  uVar31 = *(undefined4 *)((this_00->Triangle).ABC + 2);
                  uVar33 = *(undefined4 *)&(this_00->Triangle).ABC[2].field_0x4;
                  uVar36 = *(undefined4 *)&(this_00->Triangle).ABC[2].field_0x8;
                  uVar37 = *(undefined4 *)&(this_00->Triangle).ABC[2].field_0xc;
                  uVar2 = *(undefined8 *)&(this_00->Triangle).ABC[2].field_0x10;
                  uVar26 = (undefined4)uVar2;
                  uVar29 = (undefined4)((ulonglong)uVar2 >> 0x20);
                }
                dVar38 = dVar38 - (double)CONCAT44(uVar33,uVar31);
                dVar39 = (double)CONCAT44(uVar28,uVar25) - (double)CONCAT44(uVar29,uVar26);
                dVar43 = (double)CONCAT44(uVar34,uVar32) - (double)CONCAT44(uVar37,uVar36);
                if ((dVar1 * dVar43 - dVar39 * dVar40) * *(double *)param_4 +
                    (dVar39 * dVar45 - dVar1 * dVar38) * *(double *)&param_4->field_0x8 +
                    (dVar38 * dVar40 - dVar43 * dVar45) * *(double *)&param_4->field_0x10 < 0.0) {
                  *param_2 = Plane;
                  *param_3 = 0;
                  uVar2 = *(undefined8 *)&pTVar18->field_0x8;
                  *(undefined8 *)param_4 = *(undefined8 *)pTVar18;
                  *(undefined8 *)&param_4->field_0x8 = uVar2;
                  *(undefined8 *)&param_4->field_0x10 = *(undefined8 *)&pTVar18->field_0x10;
                  return true;
                }
              }
              else {
                if (iVar5 == this_00->VertexIndices[1]) {
                  auVar3 = *(undefined1 (*) [16])((this_00->Triangle).ABC + 1);
                  dVar38 = auVar3._0_8_;
                  uVar32 = auVar3._8_4_;
                  uVar34 = auVar3._12_4_;
                  uVar2 = *(undefined8 *)&(this_00->Triangle).ABC[1].field_0x10;
                  uVar25 = (undefined4)uVar2;
                  uVar28 = (undefined4)((ulonglong)uVar2 >> 0x20);
                  goto LAB_1439cde6d;
                }
                if (iVar5 == this_00->VertexIndices[2]) {
                  auVar3 = *(undefined1 (*) [16])((this_00->Triangle).ABC + 2);
                  dVar38 = auVar3._0_8_;
                  uVar32 = auVar3._8_4_;
                  uVar34 = auVar3._12_4_;
                  uVar2 = *(undefined8 *)&(this_00->Triangle).ABC[2].field_0x10;
                  uVar25 = (undefined4)uVar2;
                  uVar28 = (undefined4)((ulonglong)uVar2 >> 0x20);
                  goto LAB_1439cde6d;
                }
              }
LAB_1439cdf5c:
              uVar24 = (ulonglong)(uint)param_1;
              goto LAB_1439cdf6a;
            }
          }
        }
      }
    }
LAB_1439ce4a1:
    *param_2 = Plane;
    *param_3 = 0;
    uVar2 = *(undefined8 *)&pTVar16->field_0x8;
    *(undefined8 *)param_4 = *(undefined8 *)pTVar16;
    *(undefined8 *)&param_4->field_0x8 = uVar2;
    bVar13 = true;
    *(undefined8 *)&param_4->field_0x10 = *(undefined8 *)&pTVar16->field_0x10;
  }
  else {
LAB_1439cdf6a:
    if (*param_2 == Vertex) {
      if ((*param_3 == -1) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("InOutFeatureIndex != INDEX_NONE",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\MeshContactGenerator.cpp"
                              ,0x1d2,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        uVar14 = (*pcVar7)();
        return (bool)uVar14;
      }
      iVar4 = *param_3;
      uVar22 = uVar24 & 0xffffffff;
      iVar23 = 0;
      iVar5 = this_01->VertexIndices[iVar4];
      do {
        dVar38 = __real_3e45798ee0000000;
        uVar21 = (uint)uVar22;
        uVar32 = (undefined4)__real_7fefffffffffffff;
        uVar34 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
        uVar35 = 0;
        if ((int)uVar21 < (this->Triangles).ArrayNum) {
          uVar35 = ~uVar21 >> 0x1f;
        }
        if (uVar35 == 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar7 = (code *)swi(3);
            uVar14 = (*pcVar7)();
            return (bool)uVar14;
          }
          uVar32 = (undefined4)__real_7fefffffffffffff;
          uVar34 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
        }
        pFVar19 = (this->Triangles).AllocatorInstance.Data + (longlong)(int)uVar21 * 0x78;
        iVar6 = *(int *)(pFVar19 + 100);
        if (iVar5 == iVar6) {
          local_110 = *(double *)(pFVar19 + 0x28);
          uVar25 = *(undefined4 *)(pFVar19 + 0x18);
          uVar28 = *(undefined4 *)(pFVar19 + 0x1c);
          uVar31 = *(undefined4 *)(pFVar19 + 0x20);
          uVar33 = *(undefined4 *)(pFVar19 + 0x24);
          uVar36 = *(undefined4 *)(pFVar19 + 0x30);
          uVar37 = *(undefined4 *)(pFVar19 + 0x34);
          uVar26 = *(undefined4 *)(pFVar19 + 0x38);
          uVar29 = *(undefined4 *)(pFVar19 + 0x3c);
          uVar27 = SUB84(*(double *)(pFVar19 + 0x40),0);
          uVar30 = (undefined4)((ulonglong)*(double *)(pFVar19 + 0x40) >> 0x20);
LAB_1439ce086:
          if ((double)CONCAT44(uVar34,uVar32) == *(double *)(pFVar19 + 0x48)) {
            uVar8 = (*(double *)(pFVar19 + 0x20) - *(double *)(pFVar19 + 8)) *
                    (*(double *)(pFVar19 + 0x40) - *(double *)(pFVar19 + 0x10)) -
                    (*(double *)(pFVar19 + 0x28) - *(double *)(pFVar19 + 0x10)) *
                    (*(double *)(pFVar19 + 0x38) - *(double *)(pFVar19 + 8));
            uVar2 = (*(double *)(pFVar19 + 0x28) - *(double *)(pFVar19 + 0x10)) *
                    (*(double *)(pFVar19 + 0x30) - *(double *)pFVar19) -
                    (*(double *)(pFVar19 + 0x18) - *(double *)pFVar19) *
                    (*(double *)(pFVar19 + 0x40) - *(double *)(pFVar19 + 0x10));
            local_140 = (*(double *)(pFVar19 + 0x18) - *(double *)pFVar19) *
                        (*(double *)(pFVar19 + 0x38) - *(double *)(pFVar19 + 8)) -
                        (*(double *)(pFVar19 + 0x20) - *(double *)(pFVar19 + 8)) *
                        (*(double *)(pFVar19 + 0x30) - *(double *)pFVar19);
            dVar40 = (double)uVar2 * (double)uVar2 + (double)uVar8 * (double)uVar8 +
                     local_140 * local_140;
            if (dVar40 != (double)CONCAT44(uVar48,uVar47)) {
              if (dVar38 <= dVar40) {
                dVar38 = (double)CONCAT44(uVar48,uVar47) / SQRT(dVar40);
                uVar8 = (double)uVar8 * dVar38;
                uVar2 = (double)uVar2 * dVar38;
                local_140 = local_140 * dVar38;
              }
              else {
                local_140 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
              }
            }
            auVar3._8_4_ = (int)uVar2;
            auVar3._0_8_ = uVar8;
            auVar3._12_4_ = (int)((ulonglong)uVar2 >> 0x20);
            *(undefined1 (*) [16])(pFVar19 + 0x48) = auVar3;
            *(double *)(pFVar19 + 0x58) = local_140;
          }
          dVar38 = *(double *)(pFVar19 + 0x58);
          dVar40 = *(double *)(pFVar19 + 0x50);
          dVar45 = *(double *)(pFVar19 + 0x48);
          local_110 = local_110 - *(double *)&(this_01->Triangle).ABC[iVar4].field_0x10;
          dVar1 = *(double *)param_4;
          dVar39 = *(double *)&param_4->field_0x8;
          dVar44 = (double)CONCAT44(uVar30,uVar27) -
                   *(double *)&(this_01->Triangle).ABC[iVar4].field_0x10;
          dVar43 = *(double *)&param_4->field_0x10;
          dVar10 = (double)CONCAT44(uVar33,uVar31) -
                   *(double *)&(this_01->Triangle).ABC[iVar4].field_0x8;
          dVar46 = (double)CONCAT44(uVar28,uVar25) - *(double *)((this_01->Triangle).ABC + iVar4);
          dVar41 = (double)CONCAT44(uVar29,uVar26) -
                   *(double *)&(this_01->Triangle).ABC[iVar4].field_0x8;
          dVar9 = (double)CONCAT44(uVar37,uVar36) - *(double *)((this_01->Triangle).ABC + iVar4);
          dVar42 = (dVar40 * local_110 - dVar38 * dVar10) * dVar1 +
                   (dVar38 * dVar46 - dVar45 * local_110) * dVar39 +
                   (dVar45 * dVar10 - dVar40 * dVar46) * dVar43;
          dVar38 = (dVar38 * dVar41 - dVar40 * dVar44) * dVar1 +
                   (dVar45 * dVar44 - dVar38 * dVar9) * dVar39 +
                   (dVar40 * dVar9 - dVar45 * dVar41) * dVar43;
          dVar42 = (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar42,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                   * dVar42;
          dVar38 = (double)CONCAT44((uint)((ulonglong)dVar38 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar38,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                   * dVar38;
          dVar45 = (dVar46 * dVar46 + dVar10 * dVar10 + local_110 * local_110) *
                   __real_3e45798ee2308c3a;
          dVar40 = (dVar9 * dVar9 + dVar41 * dVar41 + dVar44 * dVar44) * __real_3e45798ee2308c3a;
          uVar35 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
          if ((((double)CONCAT44((uint)((ulonglong)dVar45 >> 0x20) ^ uVar35,
                                 SUB84(dVar45,0) ^ (uint)__xmm_80000000000000008000000000000000) <=
                dVar42) &&
              ((double)CONCAT44((uint)((ulonglong)dVar40 >> 0x20) ^ uVar35,
                                SUB84(dVar40,0) ^ (uint)__xmm_80000000000000008000000000000000) <=
               dVar38)) ||
             (((dVar42 <= dVar45 && (dVar38 <= dVar40)) &&
              ((0.0 < dVar39 * dVar10 + dVar46 * dVar1 + local_110 * dVar43 ||
               (0.0 < dVar1 * dVar9 + dVar41 * dVar39 + dVar44 * dVar43)))))) {
            *param_2 = Plane;
            *param_3 = 0;
            dVar38 = *(double *)(pFVar19 + 0x50);
            *(double *)param_4 = *(double *)(pFVar19 + 0x48);
            *(double *)&param_4->field_0x8 = dVar38;
            *(double *)&param_4->field_0x10 = *(double *)(pFVar19 + 0x58);
            return true;
          }
          iStack_164 = *(int *)(pFVar19 + 0x68);
          if (iVar5 != iVar6) goto LAB_1439ce3c4;
        }
        else {
          if (iVar5 == *(int *)(pFVar19 + 0x68)) {
            local_110 = *(double *)(pFVar19 + 0x40);
            uVar25 = *(undefined4 *)(pFVar19 + 0x30);
            uVar28 = *(undefined4 *)(pFVar19 + 0x34);
            uVar31 = *(undefined4 *)(pFVar19 + 0x38);
            uVar33 = *(undefined4 *)(pFVar19 + 0x3c);
            uVar36 = *(undefined4 *)pFVar19;
            uVar37 = *(undefined4 *)(pFVar19 + 4);
            uVar26 = *(undefined4 *)(pFVar19 + 8);
            uVar29 = *(undefined4 *)(pFVar19 + 0xc);
            uVar27 = SUB84(*(double *)(pFVar19 + 0x10),0);
            uVar30 = (undefined4)((ulonglong)*(double *)(pFVar19 + 0x10) >> 0x20);
            goto LAB_1439ce086;
          }
          if (iVar5 == *(int *)(pFVar19 + 0x6c)) {
            local_110 = *(double *)(pFVar19 + 0x10);
            uVar25 = *(undefined4 *)pFVar19;
            uVar28 = *(undefined4 *)(pFVar19 + 4);
            uVar31 = *(undefined4 *)(pFVar19 + 8);
            uVar33 = *(undefined4 *)(pFVar19 + 0xc);
            uVar36 = *(undefined4 *)(pFVar19 + 0x18);
            uVar37 = *(undefined4 *)(pFVar19 + 0x1c);
            uVar26 = *(undefined4 *)(pFVar19 + 0x20);
            uVar29 = *(undefined4 *)(pFVar19 + 0x24);
            uVar27 = SUB84(*(double *)(pFVar19 + 0x28),0);
            uVar30 = (undefined4)((ulonglong)*(double *)(pFVar19 + 0x28) >> 0x20);
            goto LAB_1439ce086;
          }
          iStack_164 = *(int *)(pFVar19 + 0x68);
LAB_1439ce3c4:
          bVar13 = iVar5 != iStack_164;
          iStack_164 = *(int *)(pFVar19 + 0x6c);
          if ((bVar13) && (iStack_164 = iVar6, iVar5 != *(int *)(pFVar19 + 0x6c))) {
            bVar13 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_5930401305133579762>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\MeshContactGenerator.cpp"
                                ,0x20e,
                                "CurrentTriangle.GetOtherVertexIDs(VertexIndexA, CurrentVertexIndexB, CurrentVertexIndexC)"
                               );
            if (bVar13) {
              pcVar7 = (code *)swi(3);
              uVar14 = (*pcVar7)();
              return (bool)uVar14;
            }
            break;
          }
        }
        local_168 = iVar5;
        if ((iStack_164 <= iVar5) && (iStack_164 != -1)) {
          local_168 = iStack_164;
          iStack_164 = iVar5;
        }
        FVar12.field0_0x0.VertexIDs[1] = iStack_164;
        FVar12.field0_0x0.VertexIDs[0] = local_168;
        pFVar17 = THashMappedArray<Chaos::FContactEdgeID,Chaos::Private::FMeshContactGenerator::FEdgeTriangleIndices,Chaos::Private::FMeshContactGenerator::FEdgeTriangleIndicesMapTraits>
                  ::Find(&this->EdgeTriangleIndicesMap,FVar12);
        if (pFVar17 == (FEdgeTriangleIndices *)0x0) {
          uVar22 = 0xffffffff;
        }
        else if (pFVar17->LocalTriangleIndices[0] == uVar21) {
          uVar22 = (ulonglong)(uint)pFVar17->LocalTriangleIndices[1];
        }
        else {
          uVar22 = (ulonglong)(uint)pFVar17->LocalTriangleIndices[0];
        }
        if ((int)uVar22 == (int)uVar24) break;
        if ((int)uVar22 == -1) goto LAB_1439ce4a1;
        iVar23 = iVar23 + 1;
        if ((this->Triangles).ArrayNum <= iVar23) goto LAB_1439ce474;
        uVar47 = SUB84(__real_3ff0000000000000,0);
        uVar48 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      } while( true );
    }
    bVar13 = false;
  }
  return bVar13;
LAB_1439ce474:
  bVar13 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<_5930401305133579731>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\MeshContactGenerator.cpp"
                      ,0x22d,"NumTrianglesVisited < GetNumTriangles()");
  if (bVar13) {
    pcVar7 = (code *)swi(3);
    uVar14 = (*pcVar7)();
    return (bool)uVar14;
  }
  goto LAB_1439ce4a1;
}

// ProcessGeneratedContacts @ 1439d6950

void __thiscall
Chaos::Private::FMeshContactGenerator::ProcessGeneratedContacts
          (FMeshContactGenerator *this,TRigidTransform<double,3> *param_1,
          TRigidTransform<double,3> *param_2)

{
  undefined1 *puVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ulonglong uVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  FIdentityFunctor local_res8;
  
  if ((this->Settings).bFixNormals != 0) {
    DebugDrawContacts(this,param_1,&FColor::Green,__real_3fe0000000000000);
  }
  uVar9 = 0;
  if (0 < (this->Contacts).ArrayNum) {
    lVar8 = 0;
    uVar10 = (uint)__xmm_80000000000000008000000000000000;
    uVar5 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->ContactDatas).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->ContactDatas).AllocatorInstance.Data;
      if (((this->Settings).bCullBackFaces == 0) ||
         (dVar2 = (this->Settings).BackFaceCullTolerance,
         (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) ^ (uint)uVar5,SUB84(dVar2,0) ^ uVar10) <=
         (double)*(float *)(pFVar3 + lVar8 + 0xc))) {
        if (((this->Settings).bFixNormals != 0) &&
           ((double)*(float *)(pFVar3 + lVar8 + 0xc) < (this->Settings).FaceNormalDotThreshold)) {
          FixContactNormal(this,uVar9);
        }
      }
      else {
        pFVar3[lVar8 + 0x10] = (FScriptContainerElement)0x0;
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x18;
    } while ((int)uVar9 < (this->Contacts).ArrayNum);
  }
  RemoveDisabledContacts(this);
  DebugDrawContacts(this,param_1,&FColor::Red,__real_3ff0000000000000);
  DebugDrawTriangles(this,param_1,&FColor::White,&FColor::Silver);
  if ((this->Settings).bSortByPhi != 0) {
    AlgoImpl::
    IntroSortInternal<Chaos::TContactPoint<double>,int,FIdentityFunctor,_Chaos::Private::FMeshContactGenerator::SortContactByPhi_::__l2::<lambda_1>_>
              ((TContactPoint<double> *)(this->Contacts).AllocatorInstance.Data,
               (this->Contacts).ArrayNum,local_res8,(<lambda_1>)local_res8);
  }
  if ((this->Settings).bSortForSolverConvergence != 0) {
    SortContactsForSolverConvergence(this);
  }
  FinalizeContacts(this,param_2);
  return;
}

// PruneAndCorrectContacts @ 1439da0c0

void __thiscall
Chaos::Private::FMeshContactGenerator::PruneAndCorrectContacts(FMeshContactGenerator *this)

{
  undefined1 *puVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ulonglong uVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = 0;
  if (0 < (this->Contacts).ArrayNum) {
    lVar8 = 0;
    uVar10 = (uint)__xmm_80000000000000008000000000000000;
    uVar5 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (this->ContactDatas).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->ContactDatas).AllocatorInstance.Data;
      if (((this->Settings).bCullBackFaces == 0) ||
         (dVar2 = (this->Settings).BackFaceCullTolerance,
         (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) ^ (uint)uVar5,SUB84(dVar2,0) ^ uVar10) <=
         (double)*(float *)(pFVar3 + lVar8 + 0xc))) {
        if (((this->Settings).bFixNormals != 0) &&
           ((double)*(float *)(pFVar3 + lVar8 + 0xc) < (this->Settings).FaceNormalDotThreshold)) {
          FixContactNormal(this,uVar9);
        }
      }
      else {
        pFVar3[lVar8 + 0x10] = (FScriptContainerElement)0x0;
      }
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x18;
    } while ((int)uVar9 < (this->Contacts).ArrayNum);
  }
  RemoveDisabledContacts(this);
  return;
}

// RemoveDisabledContacts @ 1439dcc00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Private::FMeshContactGenerator::RemoveDisabledContacts(FMeshContactGenerator *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  longlong local_res8;
  
  lVar23 = (longlong)(this->Contacts).ArrayNum;
  uVar24 = 0;
  uVar19 = 0;
  if (0 < lVar23) {
    lVar21 = 0;
    lVar22 = 0;
    local_res8 = 0;
    do {
      uVar18 = 0;
      if ((int)uVar19 < (this->ContactDatas).ArrayNum) {
        uVar18 = ~uVar19 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((this->ContactDatas).AllocatorInstance.Data[lVar21 * 0x18 + 0x10] ==
          (FScriptContainerElement)0x0) {
        uVar19 = uVar19 + 1;
        lVar21 = lVar21 + 1;
        if (lVar21 < lVar23) {
          lVar20 = lVar21 * 0x18;
          do {
            uVar18 = 0;
            if ((int)uVar19 < (this->ContactDatas).ArrayNum) {
              uVar18 = ~uVar19 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if ((this->ContactDatas).AllocatorInstance.Data[lVar20 + 0x10] !=
                (FScriptContainerElement)0x0) goto LAB_1439dcd28;
            uVar19 = uVar19 + 1;
            lVar21 = lVar21 + 1;
            lVar20 = lVar20 + 0x18;
          } while (lVar21 < lVar23);
        }
        if (lVar21 == lVar23) break;
      }
LAB_1439dcd28:
      if (uVar24 != uVar19) {
        uVar18 = 0;
        if ((int)uVar19 < (this->Contacts).ArrayNum) {
          uVar18 = ~uVar19 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->Contacts).AllocatorInstance.Data;
        lVar20 = lVar21 * 0x58;
        uVar9 = *(undefined8 *)(pFVar3 + lVar20 + 0x10);
        uVar10 = *(undefined8 *)(pFVar3 + lVar20 + 0x10 + 8);
        uVar11 = *(undefined8 *)(pFVar3 + lVar20 + 0x20);
        uVar12 = *(undefined8 *)(pFVar3 + lVar20 + 0x20 + 8);
        pFVar1 = pFVar3 + lVar20;
        uVar5 = *(undefined4 *)pFVar1;
        uVar6 = *(undefined4 *)(pFVar1 + 4);
        uVar7 = *(undefined4 *)(pFVar1 + 8);
        uVar8 = *(undefined4 *)(pFVar1 + 0xc);
        uVar13 = *(undefined8 *)(pFVar3 + lVar20 + 0x30);
        uVar14 = *(undefined8 *)(pFVar3 + lVar20 + 0x30 + 8);
        uVar15 = *(undefined8 *)(pFVar3 + lVar20 + 0x40);
        uVar16 = *(undefined8 *)(pFVar3 + lVar20 + 0x40 + 8);
        uVar2 = *(undefined8 *)(pFVar3 + lVar20 + 0x50);
        uVar18 = 0;
        if ((int)uVar24 < (this->Contacts).ArrayNum) {
          uVar18 = ~uVar24 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->Contacts).AllocatorInstance.Data;
        pFVar1 = pFVar3 + local_res8;
        *(undefined4 *)pFVar1 = uVar5;
        *(undefined4 *)(pFVar1 + 4) = uVar6;
        *(undefined4 *)(pFVar1 + 8) = uVar7;
        *(undefined4 *)(pFVar1 + 0xc) = uVar8;
        *(undefined8 *)(pFVar3 + local_res8 + 0x10) = uVar9;
        *(undefined8 *)(pFVar3 + local_res8 + 0x10 + 8) = uVar10;
        *(undefined8 *)(pFVar3 + local_res8 + 0x20) = uVar11;
        *(undefined8 *)(pFVar3 + local_res8 + 0x20 + 8) = uVar12;
        *(undefined8 *)(pFVar3 + local_res8 + 0x30) = uVar13;
        *(undefined8 *)(pFVar3 + local_res8 + 0x30 + 8) = uVar14;
        *(undefined8 *)(pFVar3 + local_res8 + 0x40) = uVar15;
        *(undefined8 *)(pFVar3 + local_res8 + 0x40 + 8) = uVar16;
        *(undefined8 *)(pFVar3 + local_res8 + 0x50) = uVar2;
        uVar18 = 0;
        if ((int)uVar19 < (this->ContactDatas).ArrayNum) {
          uVar18 = ~uVar19 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->ContactDatas).AllocatorInstance.Data;
        pFVar1 = pFVar3 + lVar21 * 0x18;
        uVar5 = *(undefined4 *)pFVar1;
        uVar6 = *(undefined4 *)(pFVar1 + 4);
        uVar7 = *(undefined4 *)(pFVar1 + 8);
        uVar8 = *(undefined4 *)(pFVar1 + 0xc);
        uVar2 = *(undefined8 *)(pFVar3 + lVar21 * 0x18 + 0x10);
        uVar18 = 0;
        if ((int)uVar24 < (this->ContactDatas).ArrayNum) {
          uVar18 = ~uVar24 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->ContactDatas).AllocatorInstance.Data;
        pFVar1 = pFVar3 + lVar22;
        *(undefined4 *)pFVar1 = uVar5;
        *(undefined4 *)(pFVar1 + 4) = uVar6;
        *(undefined4 *)(pFVar1 + 8) = uVar7;
        *(undefined4 *)(pFVar1 + 0xc) = uVar8;
        *(undefined8 *)(pFVar3 + lVar22 + 0x10) = uVar2;
      }
      local_res8 = local_res8 + 0x58;
      uVar24 = uVar24 + 1;
      lVar22 = lVar22 + 0x18;
      uVar19 = uVar19 + 1;
      lVar21 = lVar21 + 1;
    } while (lVar21 < lVar23);
  }
  TArray<Chaos::TContactPoint<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Contacts,uVar24,No);
  TArray<Chaos::FTriangleContactPointData,TSizedDefaultAllocator<32>_>::SetNum
            (&this->ContactDatas,uVar24,No);
  return;
}

// Reset @ 1439dd720

void __thiscall
Chaos::Private::FMeshContactGenerator::Reset(FMeshContactGenerator *this,int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  (this->Triangles).ArrayNum = 0;
  if ((this->Triangles).ArrayMax < param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,param_1,&(this->Triangles).AllocatorInstance,0,&(this->Triangles).ArrayMax);
  }
  if (-1 < param_2) {
    (this->Contacts).ArrayNum = 0;
    if ((this->Contacts).ArrayMax < param_2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,param_2,&(this->Contacts).AllocatorInstance,0,&(this->Contacts).ArrayMax);
    }
    (this->ContactDatas).ArrayNum = 0;
    if ((this->ContactDatas).ArrayMax < param_2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,param_2,&(this->ContactDatas).AllocatorInstance,0,
                 &(this->ContactDatas).ArrayMax);
    }
    uVar2 = param_1 * 2;
    if ((this->EdgeTriangleIndicesMap).HashTable.IndexSize != 0) {
      memset((this->EdgeTriangleIndicesMap).HashTable.Hash,0xff,
             (ulonglong)((this->EdgeTriangleIndicesMap).HashTable.HashSize << 2));
    }
    FHashTable::Resize(&(this->EdgeTriangleIndicesMap).HashTable,uVar2);
    if (-1 < (int)uVar2) {
      iVar1 = (this->EdgeTriangleIndicesMap).Elements.ArrayMax;
      (this->EdgeTriangleIndicesMap).Elements.ArrayNum = 0;
      if (iVar1 < (int)uVar2) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar2,&(this->EdgeTriangleIndicesMap).Elements.AllocatorInstance,0,
                   &(this->EdgeTriangleIndicesMap).Elements.ArrayMax);
      }
      if ((this->VertexContactIndicesMap).HashTable.IndexSize != 0) {
        memset((this->VertexContactIndicesMap).HashTable.Hash,0xff,
               (ulonglong)((this->VertexContactIndicesMap).HashTable.HashSize << 2));
      }
      FHashTable::Resize(&(this->VertexContactIndicesMap).HashTable,param_2);
      iVar1 = (this->VertexContactIndicesMap).Elements.ArrayMax;
      (this->VertexContactIndicesMap).Elements.ArrayNum = 0;
      if (iVar1 < param_2) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,param_2,&(this->VertexContactIndicesMap).Elements.AllocatorInstance,0,
                   &(this->VertexContactIndicesMap).Elements.ArrayMax);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
}

// SortContactByPhi @ 1439df2f0

void __thiscall Chaos::Private::FMeshContactGenerator::SortContactByPhi(FMeshContactGenerator *this)

{
  FIdentityFunctor local_res8;
  
  AlgoImpl::
  IntroSortInternal<Chaos::TContactPoint<double>,int,FIdentityFunctor,_Chaos::Private::FMeshContactGenerator::SortContactByPhi_::__l2::<lambda_1>_>
            ((TContactPoint<double> *)(this->Contacts).AllocatorInstance.Data,
             (this->Contacts).ArrayNum,local_res8,(<lambda_1>)local_res8);
  return;
}

// SortContactsForSolverConvergence @ 1439dfd70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Private::FMeshContactGenerator::SortContactsForSolverConvergence(FMeshContactGenerator *this)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  double dVar25;
  FIdentityFunctor local_res8;
  TArray<TTuple<double,int>,TSizedDefaultAllocator<32>_> local_b8;
  TArray<Chaos::TContactPoint<double>,TSizedDefaultAllocator<32>_> local_a8;
  double local_98;
  uint uStack_90;
  undefined4 uStack_8c;
  
  iVar3 = (this->Contacts).ArrayNum;
  piVar1 = &(this->Contacts).ArrayNum;
  if (1 < iVar3) {
    local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0;
    TArray<TTuple<double,int>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_b8,iVar3,Default);
    uVar22 = 0;
    if (0 < *piVar1) {
      lVar23 = 0;
      lVar24 = 0;
      do {
        uVar19 = 0;
        if ((int)uVar22 < (this->Contacts).ArrayNum) {
          uVar19 = ~uVar22 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->Contacts).AllocatorInstance.Data;
        dVar25 = *(double *)(pFVar4 + lVar24 + 8) * *(double *)(pFVar4 + lVar24 + 0x38) +
                 *(double *)(pFVar4 + lVar24) * *(double *)(pFVar4 + lVar24 + 0x30) +
                 *(double *)(pFVar4 + lVar24 + 0x10) * *(double *)(pFVar4 + lVar24 + 0x40);
        dVar7 = *(double *)(pFVar4 + lVar24 + 8) - dVar25 * *(double *)(pFVar4 + lVar24 + 0x38);
        dVar6 = *(double *)(pFVar4 + lVar24) - dVar25 * *(double *)(pFVar4 + lVar24 + 0x30);
        uVar19 = 0;
        if ((int)uVar22 < local_b8.ArrayNum) {
          uVar19 = ~uVar22 >> 0x1f;
        }
        dVar25 = *(double *)(pFVar4 + lVar24 + 0x10) - dVar25 * *(double *)(pFVar4 + lVar24 + 0x40);
        local_98 = dVar7 * dVar7 + dVar6 * dVar6 + dVar25 * dVar25;
        uStack_90 = uVar22;
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar22 = uVar22 + 1;
        lVar24 = lVar24 + 0x58;
        *(double *)(local_b8.AllocatorInstance.Data + lVar23) = local_98;
        *(ulonglong *)(local_b8.AllocatorInstance.Data + lVar23 + 8) = CONCAT44(uStack_8c,uStack_90)
        ;
        lVar23 = lVar23 + 0x10;
      } while ((int)uVar22 < *piVar1);
    }
    local_res8 = SUB81(this,0);
    AlgoImpl::
    IntroSortInternal<TTuple<double,int>,int,FIdentityFunctor,_Chaos::Private::FMeshContactGenerator::SortContactsForSolverConvergence_::__l5::<lambda_1>_>
              ((TTuple<double,int> *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum,local_res8,
               (<lambda_1>)local_res8);
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ArrayNum = 0;
    local_a8.ArrayMax = 0;
    TArray<Chaos::TContactPoint<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&local_a8,*piVar1,Default);
    uVar22 = 0;
    if (0 < *piVar1) {
      lVar23 = 0;
      lVar24 = 0;
      do {
        uVar19 = 0;
        if ((int)uVar22 < local_b8.ArrayNum) {
          uVar19 = ~uVar22 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar19 = *(uint *)(local_b8.AllocatorInstance.Data + lVar24 + 8);
        uVar20 = 0;
        if ((int)uVar19 < (this->Contacts).ArrayNum) {
          uVar20 = ~uVar19 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->Contacts).AllocatorInstance.Data;
        lVar21 = (longlong)(int)uVar19 * 0x58;
        uVar8 = *(undefined8 *)(pFVar4 + lVar21);
        uVar9 = *(undefined8 *)(pFVar4 + lVar21 + 8);
        uVar10 = *(undefined8 *)(pFVar4 + lVar21 + 0x10);
        uVar11 = *(undefined8 *)(pFVar4 + lVar21 + 0x10 + 8);
        uVar12 = *(undefined8 *)(pFVar4 + lVar21 + 0x20);
        uVar13 = *(undefined8 *)(pFVar4 + lVar21 + 0x20 + 8);
        uVar14 = *(undefined8 *)(pFVar4 + lVar21 + 0x30);
        uVar15 = *(undefined8 *)(pFVar4 + lVar21 + 0x30 + 8);
        uVar16 = *(undefined8 *)(pFVar4 + lVar21 + 0x40);
        uVar17 = *(undefined8 *)(pFVar4 + lVar21 + 0x40 + 8);
        uVar2 = *(undefined8 *)(pFVar4 + lVar21 + 0x50);
        uVar19 = 0;
        if ((int)uVar22 < local_a8.ArrayNum) {
          uVar19 = ~uVar22 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar22 = uVar22 + 1;
        lVar24 = lVar24 + 0x10;
        *(undefined8 *)(local_a8.AllocatorInstance.Data + lVar23) = uVar8;
        *(undefined8 *)(local_a8.AllocatorInstance.Data + lVar23 + 8) = uVar9;
        *(undefined8 *)(local_a8.AllocatorInstance.Data + lVar23 + 0x10) = uVar10;
        *(undefined8 *)(local_a8.AllocatorInstance.Data + lVar23 + 0x10 + 8) = uVar11;
        *(undefined8 *)(local_a8.AllocatorInstance.Data + lVar23 + 0x20) = uVar12;
        *(undefined8 *)(local_a8.AllocatorInstance.Data + lVar23 + 0x20 + 8) = uVar13;
        *(undefined8 *)(local_a8.AllocatorInstance.Data + lVar23 + 0x30) = uVar14;
        *(undefined8 *)(local_a8.AllocatorInstance.Data + lVar23 + 0x30 + 8) = uVar15;
        *(undefined8 *)(local_a8.AllocatorInstance.Data + lVar23 + 0x40) = uVar16;
        *(undefined8 *)(local_a8.AllocatorInstance.Data + lVar23 + 0x40 + 8) = uVar17;
        *(undefined8 *)(local_a8.AllocatorInstance.Data + lVar23 + 0x50) = uVar2;
        lVar23 = lVar23 + 0x58;
      } while ((int)uVar22 < (this->Contacts).ArrayNum);
    }
    pFVar4 = (this->Contacts).AllocatorInstance.Data;
    uVar2._0_4_ = (this->Contacts).ArrayNum;
    uVar2._4_4_ = (this->Contacts).ArrayMax;
    (this->Contacts).AllocatorInstance.Data = local_a8.AllocatorInstance.Data;
    (this->Contacts).ArrayNum = local_a8.ArrayNum;
    (this->Contacts).ArrayMax = local_a8.ArrayMax;
    local_a8.AllocatorInstance.Data = pFVar4;
    local_a8._8_8_ = uVar2;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    if ((TTuple<double,int> *)local_b8.AllocatorInstance.Data != (TTuple<double,int> *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
  }
  return;
}

// EndCollect @ 143b1c100

void __thiscall Chaos::Private::FMeshContactGenerator::EndCollect(FMeshContactGenerator *this)

{
  THashMappedArray<Chaos::FContactEdgeID,Chaos::Private::FMeshContactGenerator::FEdgeTriangleIndices,Chaos::Private::FMeshContactGenerator::FEdgeTriangleIndicesMapTraits>
  *this_00;
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FContactEdgeID_u_0 FVar4;
  FContactEdgeID_u_0 FVar5;
  FContactEdgeID_u_0 FVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  FEdgeTriangleIndices *pFVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  TArray<Chaos::Private::FMeshContactGenerator::FEdgeTriangleIndices,TSizedDefaultAllocator<32>_>
  *pTVar16;
  int *piVar17;
  uint local_res10;
  uint uStackX_14;
  uint local_res20;
  uint uStackX_24;
  longlong local_58;
  
  uVar15 = 0;
  if (0 < (this->Triangles).ArrayNum) {
    this_00 = &this->EdgeTriangleIndicesMap;
    local_58 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar15 < (this->Triangles).ArrayNum) {
        uVar8 = ~uVar15 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->Triangles).AllocatorInstance.Data;
      uStackX_14 = *(uint *)(pFVar1 + local_58 + 0x68);
      uVar8 = *(uint *)(pFVar1 + local_58 + 100);
      if (((int)uVar8 < (int)uStackX_14) || (uStackX_14 == 0xffffffff)) {
        uVar14 = (ulonglong)uVar8;
        uVar11 = (ulonglong)uStackX_14;
        local_res10 = uVar8;
      }
      else {
        uVar11 = (ulonglong)uVar8;
        uVar14 = (ulonglong)uStackX_14;
        local_res10 = uStackX_14;
        uStackX_14 = uVar8;
      }
      FVar4.VertexIDs[1] = uStackX_14;
      FVar4.VertexIDs[0] = local_res10;
      pFVar10 = THashMappedArray<Chaos::FContactEdgeID,Chaos::Private::FMeshContactGenerator::FEdgeTriangleIndices,Chaos::Private::FMeshContactGenerator::FEdgeTriangleIndicesMapTraits>
                ::Find(this_00,(FContactEdgeID)FVar4);
      if (pFVar10 == (FEdgeTriangleIndices *)0x0) {
        uVar8 = (this->EdgeTriangleIndicesMap).Elements.ArrayNum;
        pTVar16 = &(this->EdgeTriangleIndicesMap).Elements;
        if (uVar8 == (this->EdgeTriangleIndicesMap).Elements.ArrayMax) {
          uVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar16->AllocatorInstance,
                             &(this->EdgeTriangleIndicesMap).Elements.ArrayMax);
        }
        lVar12 = (longlong)(int)uVar8;
        (this->EdgeTriangleIndicesMap).Elements.ArrayNum = uVar8 + 1;
        pFVar2 = (pTVar16->AllocatorInstance).Data;
        *(FContactEdgeID_u_0 *)(pFVar2 + lVar12 * 0x10) = FVar4;
        *(uint *)(pFVar2 + lVar12 * 0x10 + 8) = uVar15;
        *(undefined4 *)(pFVar2 + lVar12 * 0x10 + 0xc) = 0xffffffff;
        uVar11 = (uVar11 >> 1 ^ (uVar11 << 0x20 | uVar14)) * -0xae502812aa7333;
        lVar12 = (uVar11 >> 0x21 ^ uVar11) * -0x3b314601e57a13ad;
        FHashTable::Add(&this_00->HashTable,(uint)((ulonglong)lVar12 >> 0x21) ^ (uint)lVar12,uVar8);
      }
      else {
        pFVar10->LocalTriangleIndices[1] = uVar15;
      }
      pTVar16 = &(this->EdgeTriangleIndicesMap).Elements;
      uVar8 = *(uint *)(pFVar1 + local_58 + 0x6c);
      uVar9 = *(uint *)(pFVar1 + local_58 + 0x68);
      uVar13 = uVar9;
      if (((int)uVar8 <= (int)uVar9) && (uVar8 != 0xffffffff)) {
        uVar13 = uVar8;
        uVar8 = uVar9;
      }
      FVar5.VertexIDs[1] = uVar8;
      FVar5.VertexIDs[0] = uVar13;
      pFVar10 = THashMappedArray<Chaos::FContactEdgeID,Chaos::Private::FMeshContactGenerator::FEdgeTriangleIndices,Chaos::Private::FMeshContactGenerator::FEdgeTriangleIndicesMapTraits>
                ::Find(this_00,(FContactEdgeID)FVar5);
      if (pFVar10 == (FEdgeTriangleIndices *)0x0) {
        uVar9 = (this->EdgeTriangleIndicesMap).Elements.ArrayNum;
        piVar17 = &(this->EdgeTriangleIndicesMap).Elements.ArrayMax;
        if (uVar9 == *piVar17) {
          uVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar16->AllocatorInstance,piVar17);
          (this->EdgeTriangleIndicesMap).Elements.ArrayNum = uVar9;
        }
        lVar12 = (longlong)(int)uVar9;
        (this->EdgeTriangleIndicesMap).Elements.ArrayNum = uVar9 + 1;
        pFVar2 = (pTVar16->AllocatorInstance).Data;
        *(FContactEdgeID_u_0 *)(pFVar2 + lVar12 * 0x10) = FVar5;
        *(uint *)(pFVar2 + lVar12 * 0x10 + 8) = uVar15;
        *(undefined4 *)(pFVar2 + lVar12 * 0x10 + 0xc) = 0xffffffff;
        uVar11 = ((ulonglong)(uVar8 >> 1) ^ CONCAT44(uVar8,uVar13)) * -0xae502812aa7333;
        lVar12 = (uVar11 >> 0x21 ^ uVar11) * -0x3b314601e57a13ad;
        FHashTable::Add(&this_00->HashTable,(uint)((ulonglong)lVar12 >> 0x21) ^ (uint)lVar12,uVar9);
      }
      else {
        pFVar10->LocalTriangleIndices[1] = uVar15;
      }
      piVar17 = &(this->EdgeTriangleIndicesMap).Elements.ArrayMax;
      uStackX_24 = *(uint *)(pFVar1 + local_58 + 100);
      uVar11 = (ulonglong)uStackX_24;
      uVar8 = *(uint *)(pFVar1 + local_58 + 0x6c);
      if (((int)uVar8 < (int)uStackX_24) || (uStackX_24 == 0xffffffff)) {
        uVar14 = (ulonglong)uVar8;
        local_res20 = uVar8;
      }
      else {
        uVar14 = uVar11;
        uVar11 = (ulonglong)uVar8;
        local_res20 = uStackX_24;
        uStackX_24 = uVar8;
      }
      FVar6.VertexIDs[1] = uStackX_24;
      FVar6.VertexIDs[0] = local_res20;
      pFVar10 = THashMappedArray<Chaos::FContactEdgeID,Chaos::Private::FMeshContactGenerator::FEdgeTriangleIndices,Chaos::Private::FMeshContactGenerator::FEdgeTriangleIndicesMapTraits>
                ::Find(this_00,(FContactEdgeID)FVar6);
      if (pFVar10 == (FEdgeTriangleIndices *)0x0) {
        uVar8 = (this->EdgeTriangleIndicesMap).Elements.ArrayNum;
        if (uVar8 == *piVar17) {
          uVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar16->AllocatorInstance,piVar17);
          (this->EdgeTriangleIndicesMap).Elements.ArrayNum = uVar8;
        }
        lVar12 = (longlong)(int)uVar8;
        (this->EdgeTriangleIndicesMap).Elements.ArrayNum = uVar8 + 1;
        pFVar1 = (pTVar16->AllocatorInstance).Data;
        *(FContactEdgeID_u_0 *)(pFVar1 + lVar12 * 0x10) = FVar6;
        *(uint *)(pFVar1 + lVar12 * 0x10 + 8) = uVar15;
        *(undefined4 *)(pFVar1 + lVar12 * 0x10 + 0xc) = 0xffffffff;
        uVar11 = (uVar11 >> 1 ^ (uVar11 << 0x20 | uVar14)) * -0xae502812aa7333;
        lVar12 = (uVar11 >> 0x21 ^ uVar11) * -0x3b314601e57a13ad;
        FHashTable::Add(&this_00->HashTable,(uint)((ulonglong)lVar12 >> 0x21) ^ (uint)lVar12,uVar8);
      }
      else {
        pFVar10->LocalTriangleIndices[1] = uVar15;
      }
      uVar15 = uVar15 + 1;
      local_58 = local_58 + 0x78;
    } while ((int)uVar15 < (this->Triangles).ArrayNum);
  }
  return;
}

