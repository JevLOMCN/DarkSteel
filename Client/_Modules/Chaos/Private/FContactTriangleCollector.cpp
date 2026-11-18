// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 20

// FContactTriangleCollector @ 143957620

FContactTriangleCollector * __thiscall
Chaos::FContactTriangleCollector::FContactTriangleCollector
          (FContactTriangleCollector *this,bool param_1,double param_2,double param_3,
          TRigidTransform<double,3> *param_4)

{
  undefined8 uVar1;
  
  (this->TriangleContactPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleContactPoints).ArrayNum = 0;
  (this->TriangleContactPoints).ArrayMax = 0;
  (this->TriangleContactPointDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleContactPointDatas).ArrayNum = 0;
  (this->TriangleContactPointDatas).ArrayMax = 0;
  (this->ContactTriangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContactTriangles).ArrayNum = 0;
  (this->ContactTriangles).ArrayMax = 0;
  *(undefined8 *)&(this->ContactEdges).Elements = 0;
  *(undefined8 *)&(this->ContactEdges).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ContactEdges).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ContactEdges).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ContactEdges).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ContactEdges).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ContactEdges).Elements.field_0x30 = 0xffffffff;
  (this->ContactEdges).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ContactEdges).HashSize = 0;
  *(undefined8 *)&(this->ContactVertices).Elements = 0;
  *(undefined8 *)&(this->ContactVertices).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ContactVertices).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ContactVertices).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ContactVertices).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ContactVertices).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ContactVertices).Elements.field_0x30 = 0xffffffff;
  (this->ContactVertices).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ContactVertices).HashSize = 0;
  this->NumDisabledTriangleContactPoints = 0;
  this->PhiTolerance = param_2;
  this->DistanceTolerance = param_3;
  this->bOneSidedCollision = param_1;
  uVar1 = *(undefined8 *)&param_4->field_0x8;
  *(undefined8 *)&this->ConvexTransform = *(undefined8 *)param_4;
  *(undefined8 *)&(this->ConvexTransform).field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&param_4->field_0x18;
  *(undefined8 *)&(this->ConvexTransform).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  *(undefined8 *)&(this->ConvexTransform).field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&param_4->field_0x28;
  *(undefined8 *)&(this->ConvexTransform).field_0x20 = *(undefined8 *)&param_4->field_0x20;
  *(undefined8 *)&(this->ConvexTransform).field_0x28 = uVar1;
  uVar1 = *(undefined8 *)&param_4->field_0x38;
  *(undefined8 *)&(this->ConvexTransform).field_0x30 = *(undefined8 *)&param_4->field_0x30;
  *(undefined8 *)&(this->ConvexTransform).field_0x38 = uVar1;
  uVar1 = *(undefined8 *)&param_4->field_0x48;
  *(undefined8 *)&(this->ConvexTransform).field_0x40 = *(undefined8 *)&param_4->field_0x40;
  *(undefined8 *)&(this->ConvexTransform).field_0x48 = uVar1;
  uVar1 = *(undefined8 *)&param_4->field_0x58;
  *(undefined8 *)&(this->ConvexTransform).field_0x50 = *(undefined8 *)&param_4->field_0x50;
  *(undefined8 *)&(this->ConvexTransform).field_0x58 = uVar1;
  return this;
}

// AddTriangleContacts @ 143959020

void __thiscall
Chaos::FContactTriangleCollector::AddTriangleContacts
          (FContactTriangleCollector *this,
          TArrayView<Chaos::TContactPoint<double>_const_,int> *param_1,TTriangle<double> *param_2,
          int param_3,int param_4,int param_5,int param_6,double param_7)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  FScriptContainerElement *pFVar8;
  TContactPoint<double> *pTVar9;
  code *pcVar10;
  undefined8 uVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  TContactPoint<double> *pTVar17;
  longlong lVar18;
  uint uVar19;
  TContactPoint<double> *pTVar20;
  ulonglong uVar21;
  uint uVar22;
  int *piVar23;
  longlong lVar24;
  
  if (0 < param_1->ArrayNum) {
    uVar14 = AddTriangle(this,param_2,param_3,param_4,param_5,param_6);
    iVar15 = (this->TriangleContactPoints).ArrayNum;
    uVar19 = param_1->ArrayNum + iVar15;
    if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
    }
    piVar1 = &(this->TriangleContactPoints).ArrayMax;
    if (*piVar1 < (int)uVar19) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,uVar19,(ForAnyElementType *)this,iVar15,piVar1);
    }
    if ((this->TriangleContactPointDatas).ArrayMax < (int)uVar19) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar19,&(this->TriangleContactPointDatas).AllocatorInstance,
                 (this->TriangleContactPointDatas).ArrayNum,
                 &(this->TriangleContactPointDatas).ArrayMax);
    }
    pTVar20 = param_1->DataPtr;
    pTVar17 = pTVar20 + param_1->ArrayNum;
    uVar21 = (longlong)(int)uVar14;
    for (; pTVar20 != pTVar17; pTVar20 = pTVar20 + 1) {
      piVar23 = &(this->TriangleContactPointDatas).ArrayMax;
      if (pTVar20->Phi <= param_7 && param_7 != pTVar20->Phi) {
        uVar19 = 0;
        if ((int)(uint)uVar21 < (this->ContactTriangles).ArrayNum) {
          uVar19 = ~(uint)uVar21 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar8 = (this->ContactTriangles).AllocatorInstance.Data;
        dVar2 = *(double *)&pTVar20->ShapeContactNormal;
        lVar18 = (longlong)(int)uVar14 * 0x70;
        dVar3 = *(double *)(pFVar8 + lVar18 + 0x50);
        dVar4 = *(double *)&(pTVar20->ShapeContactNormal).field_0x8;
        dVar5 = *(double *)(pFVar8 + lVar18 + 0x48);
        dVar6 = *(double *)(pFVar8 + lVar18 + 0x58);
        dVar7 = *(double *)&(pTVar20->ShapeContactNormal).field_0x10;
        pTVar9 = (TContactPoint<double> *)(this->TriangleContactPoints).AllocatorInstance.Data;
        if (((pTVar9 <= pTVar20) && (pTVar20 < pTVar9 + *piVar1)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        uVar19 = (this->TriangleContactPoints).ArrayNum;
        if (uVar19 == *piVar1) {
          uVar19 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x858,(ForAnyElementType *)this,piVar1);
        }
        lVar24 = (longlong)(int)uVar19;
        (this->TriangleContactPoints).ArrayNum = uVar19 + 1;
        uVar11 = *(undefined8 *)&pTVar20->ShapeContactPoints[0].field_0x8;
        pFVar8 = (this->TriangleContactPoints).AllocatorInstance.Data;
        lVar18 = lVar24 * 0x58;
        *(undefined8 *)(pFVar8 + lVar18) = *(undefined8 *)pTVar20->ShapeContactPoints;
        *(undefined8 *)(pFVar8 + lVar18 + 8) = uVar11;
        uVar11 = *(undefined8 *)(pTVar20->ShapeContactPoints + 1);
        *(undefined8 *)(pFVar8 + lVar18 + 0x10) =
             *(undefined8 *)&pTVar20->ShapeContactPoints[0].field_0x10;
        *(undefined8 *)(pFVar8 + lVar18 + 0x10 + 8) = uVar11;
        uVar11 = *(undefined8 *)&pTVar20->ShapeContactPoints[1].field_0x10;
        *(undefined8 *)(pFVar8 + lVar18 + 0x20) =
             *(undefined8 *)&pTVar20->ShapeContactPoints[1].field_0x8;
        *(undefined8 *)(pFVar8 + lVar18 + 0x20 + 8) = uVar11;
        uVar11 = *(undefined8 *)&(pTVar20->ShapeContactNormal).field_0x8;
        *(undefined8 *)(pFVar8 + lVar18 + 0x30) = *(undefined8 *)&pTVar20->ShapeContactNormal;
        *(undefined8 *)(pFVar8 + lVar18 + 0x30 + 8) = uVar11;
        dVar12 = pTVar20->Phi;
        *(undefined8 *)(pFVar8 + lVar18 + 0x40) =
             *(undefined8 *)&(pTVar20->ShapeContactNormal).field_0x10;
        *(double *)(pFVar8 + lVar18 + 0x40 + 8) = dVar12;
        *(undefined8 *)(pFVar8 + lVar18 + 0x50) = *(undefined8 *)&pTVar20->FaceIndex;
        iVar15 = (this->TriangleContactPointDatas).ArrayNum;
        if (iVar15 == *piVar23) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&(this->TriangleContactPointDatas).AllocatorInstance,piVar23);
        }
        (this->TriangleContactPointDatas).ArrayNum = iVar15 + 1;
        DefaultConstructItems<Chaos::FTriangleContactPointData,int>
                  ((this->TriangleContactPointDatas).AllocatorInstance.Data +
                   (longlong)iVar15 * 0x18,1);
        uVar22 = ~uVar19 >> 0x1f;
        uVar16 = 0;
        if ((int)uVar19 < (this->TriangleContactPoints).ArrayNum) {
          uVar16 = uVar22;
        }
        if ((uVar16 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        *(int *)((this->TriangleContactPoints).AllocatorInstance.Data + lVar18 + 0x50) = param_3;
        uVar16 = 0;
        if ((int)uVar19 < (this->TriangleContactPointDatas).ArrayNum) {
          uVar16 = uVar22;
        }
        if ((uVar16 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        *(uint *)((this->TriangleContactPointDatas).AllocatorInstance.Data + lVar24 * 0x18 + 8) =
             uVar14;
        uVar16 = 0;
        if ((int)uVar19 < (this->TriangleContactPointDatas).ArrayNum) {
          uVar16 = uVar22;
        }
        if ((uVar16 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        *(float *)((this->TriangleContactPointDatas).AllocatorInstance.Data + lVar24 * 0x18 + 0xc) =
             (float)(dVar3 * dVar4 + dVar2 * dVar5 + dVar6 * dVar7);
        uVar16 = 0;
        if ((int)uVar19 < (this->TriangleContactPointDatas).ArrayNum) {
          uVar16 = uVar22;
        }
        if ((uVar16 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        (this->TriangleContactPointDatas).AllocatorInstance.Data[lVar24 * 0x18 + 0x10] =
             (FScriptContainerElement)0x1;
        uVar21 = (ulonglong)uVar14;
      }
    }
  }
  return;
}

// operator() @ 1439c39a0

bool __thiscall
`Chaos::FContactTriangleCollector::SortContactPointsForPruning'::__l5::<lambda_1>::operator()
          (void *this,int *param_1,int *param_2)

{
  double dVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = *param_1;
  plVar2 = *(longlong **)this;
  uVar6 = 0;
  if ((int)uVar7 < (int)plVar2[1]) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  uVar6 = *param_2;
  dVar1 = *(double *)((longlong)(int)uVar7 * 0x58 + 0x48 + *plVar2);
  uVar7 = 0;
  if ((int)uVar6 < (int)plVar2[1]) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return dVar1 < *(double *)((longlong)(int)uVar6 * 0x58 + 0x48 + *plVar2);
}

// AddTriangle @ 1439c5840

int __thiscall
Chaos::FContactTriangleCollector::AddTriangle
          (FContactTriangleCollector *this,TTriangle<double> *param_1,int param_2,int param_3,
          int param_4,int param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  uVar11 = (this->ContactTriangles).ArrayNum;
  piVar1 = &(this->ContactTriangles).ArrayMax;
  if (uVar11 == *piVar1) {
    uVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x870,&(this->ContactTriangles).AllocatorInstance,piVar1);
  }
  (this->ContactTriangles).ArrayNum = uVar11 + 1;
  uVar13 = 0;
  if ((int)uVar11 < (int)(uVar11 + 1)) {
    uVar13 = ~uVar11 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar3 = (code *)swi(3);
    iVar12 = (*pcVar3)();
    return iVar12;
  }
  uVar8 = *(undefined8 *)&param_1->ABC[0].field_0x8;
  pFVar2 = (this->ContactTriangles).AllocatorInstance.Data;
  lVar14 = (longlong)(int)uVar11 * 0x70;
  *(undefined8 *)(pFVar2 + lVar14) = *(undefined8 *)param_1->ABC;
  *(undefined8 *)(pFVar2 + lVar14 + 8) = uVar8;
  *(undefined8 *)(pFVar2 + lVar14 + 0x10) = *(undefined8 *)&param_1->ABC[0].field_0x10;
  uVar8 = *(undefined8 *)&param_1->ABC[1].field_0x8;
  *(undefined8 *)(pFVar2 + lVar14 + 0x18) = *(undefined8 *)(param_1->ABC + 1);
  *(undefined8 *)(pFVar2 + lVar14 + 0x18 + 8) = uVar8;
  *(undefined8 *)(pFVar2 + lVar14 + 0x28) = *(undefined8 *)&param_1->ABC[1].field_0x10;
  uVar8 = *(undefined8 *)&param_1->ABC[2].field_0x8;
  *(undefined8 *)(pFVar2 + lVar14 + 0x30) = *(undefined8 *)(param_1->ABC + 2);
  *(undefined8 *)(pFVar2 + lVar14 + 0x30 + 8) = uVar8;
  *(undefined8 *)(pFVar2 + lVar14 + 0x40) = *(undefined8 *)&param_1->ABC[2].field_0x10;
  dVar6 = *(double *)&param_1->ABC[1].field_0x10 - *(double *)&param_1->ABC[0].field_0x10;
  dVar16 = *(double *)(param_1->ABC + 1) - *(double *)param_1->ABC;
  dVar17 = *(double *)&param_1->ABC[1].field_0x8 - *(double *)&param_1->ABC[0].field_0x8;
  dVar18 = *(double *)&param_1->ABC[2].field_0x10 - *(double *)&param_1->ABC[0].field_0x10;
  dVar5 = *(double *)&param_1->ABC[2].field_0x8 - *(double *)&param_1->ABC[0].field_0x8;
  dVar19 = *(double *)(param_1->ABC + 2) - *(double *)param_1->ABC;
  dVar7 = dVar17 * dVar18 - dVar6 * dVar5;
  dVar6 = dVar6 * dVar19 - dVar16 * dVar18;
  dVar5 = dVar16 * dVar5 - dVar17 * dVar19;
  dVar16 = dVar6 * dVar6 + dVar7 * dVar7 + dVar5 * dVar5;
  uVar15 = dVar5;
  uVar8 = dVar6;
  uVar9 = dVar7;
  if ((dVar16 != __real_3ff0000000000000) &&
     (uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
     uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     __real_3e45798ee0000000 <= dVar16)) {
    dVar16 = __real_3ff0000000000000 / SQRT(dVar16);
    uVar15 = dVar5 * dVar16;
    uVar8 = dVar6 * dVar16;
    uVar9 = dVar7 * dVar16;
  }
  *(int *)(pFVar2 + lVar14 + 100) = param_4;
  *(int *)(pFVar2 + lVar14 + 0x68) = param_5;
  auVar4._8_4_ = (int)uVar8;
  auVar4._0_8_ = uVar9;
  auVar4._12_4_ = (int)((ulonglong)uVar8 >> 0x20);
  *(undefined1 (*) [16])(pFVar2 + lVar14 + 0x48) = auVar4;
  *(int *)(pFVar2 + lVar14 + 0x60) = param_3;
  *(undefined8 *)(pFVar2 + lVar14 + 0x58) = uVar15;
  *(int *)(pFVar2 + lVar14 + 0x6c) = param_2;
  return uVar11;
}

// BuildContactFeatureSets @ 1439c6520

void __thiscall
Chaos::FContactTriangleCollector::BuildContactFeatureSets(FContactTriangleCollector *this)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  ulonglong uVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  code *pcVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  longlong local_178;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  longlong local_158;
  int local_150;
  int local_14c;
  longlong local_148;
  int local_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined1 local_130 [8];
  FContactEdgeID local_128;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_110;
  longlong local_108;
  double local_100;
  double local_f8;
  double local_f0;
  TVector<double,3> local_e8;
  TVector<double,3> local_c8;
  TVector<double,3> local_a8 [4];
  
  iVar12 = (this->TriangleContactPoints).ArrayNum;
  uVar6 = iVar12 * 3;
  if ((uint)(*(int *)&(this->ContactEdges).Elements.field_0x8 -
            *(int *)&(this->ContactEdges).Elements.field_0x34) < uVar6) {
    if ((int)uVar6 < 0) goto LAB_1439c6a91;
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)&this->ContactEdges,uVar6);
    if (uVar6 < 4) {
      iVar11 = 1;
    }
    else {
      uVar1 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_138 = (undefined4)lVar14;
      iVar11 = 1 << ((byte)lVar14 & 0x1f);
    }
    iVar13 = (this->ContactEdges).HashSize;
    if ((iVar13 == 0) || (iVar13 < iVar11)) {
      (this->ContactEdges).HashSize = iVar11;
      TSet<Chaos::FContactEdgeID,DefaultKeyFuncs<Chaos::FContactEdgeID,0>,FDefaultSetAllocator>::
      Rehash(&this->ContactEdges);
    }
  }
  this_00 = &this->ContactVertices;
  local_110 = this_00;
  if ((uint)(*(int *)&(this->ContactVertices).Elements.field_0x8 -
            *(int *)&(this->ContactVertices).Elements.field_0x34) < uVar6) {
    if ((int)uVar6 < 0) {
LAB_1439c6a91:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar6);
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this_00,uVar6);
    if (uVar6 < 4) {
      iVar11 = 1;
    }
    else {
      uVar1 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_134 = (undefined4)lVar14;
      iVar11 = 1 << ((byte)lVar14 & 0x1f);
    }
    iVar13 = (this->ContactVertices).HashSize;
    if ((iVar13 == 0) || (iVar13 < iVar11)) {
      (this->ContactVertices).HashSize = iVar11;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_00);
    }
  }
  uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar8 = __real_3f847ae147ae147b;
  dVar7 = __real_3ff0000000000000;
  uVar16 = 0;
  if (0 < iVar12) {
    local_158 = 0;
    local_148 = 0;
    local_178 = 0;
    local_108 = (longlong)iVar12;
    do {
      lVar14 = local_148;
      uVar17 = 0;
      if ((int)uVar16 < (this->TriangleContactPointDatas).ArrayNum) {
        uVar17 = ~uVar16 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = (this->TriangleContactPointDatas).AllocatorInstance.Data;
      uVar17 = 0;
      if ((int)uVar16 < (this->TriangleContactPoints).ArrayNum) {
        uVar17 = ~uVar16 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar17 = *(uint *)(pFVar2 + local_178 + 8);
      pFVar3 = (this->TriangleContactPoints).AllocatorInstance.Data;
      uVar18 = 0;
      if ((int)uVar17 < (this->ContactTriangles).ArrayNum) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar15 = (this->ContactTriangles).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x70;
      bVar10 = *(double *)(pFVar3 + lVar14 + 0x48) != 0.0;
      bVar4 = *(double *)(pFVar3 + lVar14 + 0x48) <= 0.0;
      if (pFVar3[local_148 + 0x54] == (FScriptContainerElement)0x1) {
        if (bVar4 && bVar10) {
          local_16c = *(int *)(pFVar15 + 100);
          iVar12 = *(int *)(pFVar15 + 0x60);
          local_170 = iVar12;
          if ((local_16c <= iVar12) && (local_16c != -1)) {
            local_170 = local_16c;
            local_16c = iVar12;
          }
          TSet<Chaos::FContactEdgeID,DefaultKeyFuncs<Chaos::FContactEdgeID,0>,FDefaultSetAllocator>
          ::Emplace<Chaos::FContactEdgeID>
                    (&this->ContactEdges,(FContactEdgeID *)local_130,(bool *)&local_170);
          local_164 = *(int *)(pFVar15 + 0x68);
          iVar12 = *(int *)(pFVar15 + 100);
          local_168 = iVar12;
          if ((local_164 <= iVar12) && (local_164 != -1)) {
            local_168 = local_164;
            local_164 = iVar12;
          }
          TSet<Chaos::FContactEdgeID,DefaultKeyFuncs<Chaos::FContactEdgeID,0>,FDefaultSetAllocator>
          ::Emplace<Chaos::FContactEdgeID>
                    (&this->ContactEdges,(FContactEdgeID *)(local_130 + 4),(bool *)&local_168);
          local_15c = *(int *)(pFVar15 + 0x60);
          iVar12 = *(int *)(pFVar15 + 0x68);
          local_160 = iVar12;
          if ((local_15c <= iVar12) && (local_15c != -1)) {
            local_160 = local_15c;
            local_15c = iVar12;
          }
          TSet<Chaos::FContactEdgeID,DefaultKeyFuncs<Chaos::FContactEdgeID,0>,FDefaultSetAllocator>
          ::Emplace<Chaos::FContactEdgeID>(&this->ContactEdges,&local_128,(bool *)&local_160);
          local_res10[0] = *(undefined4 *)(pFVar15 + 0x60);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                    (&this->ContactVertices,local_128.field0_0x0.VertexIDs + 1,(bool *)local_res10);
          local_res18[0] = *(undefined4 *)(pFVar15 + 100);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                    (&this->ContactVertices,&local_120,(bool *)local_res18);
          local_res20[0] = *(undefined4 *)(pFVar15 + 0x68);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                    (&this->ContactVertices,&local_11c,(bool *)local_res20);
        }
      }
      else if ((byte)((char)pFVar3[local_148 + 0x54] - 2U) < 2) {
        local_e8._0_8_ = *(undefined8 *)(pFVar15 + 0x30);
        local_e8._8_8_ = *(undefined8 *)(pFVar15 + 0x38);
        iVar12 = -1;
        local_e8._16_8_ = *(undefined8 *)(pFVar15 + 0x40);
        local_c8._0_8_ = *(undefined8 *)(pFVar15 + 0x18);
        local_c8._8_8_ = *(undefined8 *)(pFVar15 + 0x20);
        local_c8._16_8_ = *(undefined8 *)(pFVar15 + 0x28);
        local_a8[0]._0_8_ = *(undefined8 *)pFVar15;
        local_a8[0]._8_8_ = *(undefined8 *)(pFVar15 + 8);
        local_a8[0]._16_8_ = *(undefined8 *)(pFVar15 + 0x10);
        ToBarycentric<double>
                  ((TVector<double,3> *)&local_100,(TVector<double,3> *)(pFVar3 + local_148 + 0x18),
                   local_a8,&local_c8,&local_e8);
        uVar17 = SUB84(local_100 - dVar7,0) & uVar6;
        uVar18 = (uint)((ulonglong)(local_100 - dVar7) >> 0x20) & uVar9;
        if (dVar8 <= (double)CONCAT44(uVar18,uVar17) && (double)CONCAT44(uVar18,uVar17) != dVar8) {
          uVar17 = SUB84(local_f8 - dVar7,0) & uVar6;
          uVar18 = (uint)((ulonglong)(local_f8 - dVar7) >> 0x20) & uVar9;
          if ((double)CONCAT44(uVar18,uVar17) < dVar8 || (double)CONCAT44(uVar18,uVar17) == dVar8) {
            iVar11 = *(int *)(pFVar15 + 100);
          }
          else {
            uVar17 = SUB84(local_f0 - dVar7,0) & uVar6;
            uVar18 = (uint)((ulonglong)(local_f0 - dVar7) >> 0x20) & uVar9;
            if ((double)CONCAT44(uVar18,uVar17) < dVar8 || (double)CONCAT44(uVar18,uVar17) == dVar8)
            {
              iVar11 = *(int *)(pFVar15 + 0x68);
            }
            else {
              if ((double)CONCAT44((uint)((ulonglong)local_100 >> 0x20) & uVar9,
                                   SUB84(local_100,0) & uVar6) <= dVar8) {
                iVar11 = *(int *)(pFVar15 + 100);
                lVar14 = 2;
              }
              else if ((double)CONCAT44((uint)((ulonglong)local_f8 >> 0x20) & uVar9,
                                        SUB84(local_f8,0) & uVar6) <= dVar8) {
                iVar11 = *(int *)(pFVar15 + 0x68);
                lVar14 = 0;
              }
              else {
                if (dVar8 < (double)CONCAT44((uint)((ulonglong)local_f0 >> 0x20) & uVar9,
                                             SUB84(local_f0,0) & uVar6)) goto LAB_1439c6a1c;
                iVar11 = *(int *)(pFVar15 + 0x60);
                lVar14 = 1;
              }
              iVar12 = *(int *)(pFVar15 + lVar14 * 4 + 0x60);
            }
          }
        }
        else {
          iVar11 = *(int *)(pFVar15 + 0x60);
        }
        if (iVar11 != -1) {
          if (iVar12 == -1) {
            uStack_13c = 0xffffffff;
            *(ulonglong *)(pFVar2 + local_178) = CONCAT44(0xffffffff,iVar11);
            local_140 = iVar11;
          }
          else {
            if (bVar4 && bVar10) {
              local_150 = iVar11;
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                        (local_110,&local_118,(bool *)&local_150);
              local_14c = iVar12;
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                        (local_110,&local_114,(bool *)&local_14c);
            }
            iVar13 = iVar11;
            if (iVar12 <= iVar11) {
              iVar13 = iVar12;
              iVar12 = iVar11;
            }
            *(ulonglong *)(pFVar2 + local_178) = CONCAT44(iVar12,iVar13);
          }
        }
      }
LAB_1439c6a1c:
      uVar16 = uVar16 + 1;
      local_158 = local_158 + 1;
      local_178 = local_178 + 0x18;
      local_148 = local_148 + 0x58;
    } while (local_158 < local_108);
  }
  return;
}

// DebugDrawContactPoints @ 1439c9700

void __thiscall
Chaos::FContactTriangleCollector::DebugDrawContactPoints
          (FContactTriangleCollector *this,FColor *param_1,double param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  FDebugDrawQueue *pFVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
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
  double dVar33;
  double dVar35;
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar63;
  double dVar64;
  double dVar65;
  undefined1 auVar66 [16];
  double dVar74;
  undefined4 uVar77;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  double dVar75;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  double dVar76;
  undefined1 auVar73 [16];
  double dVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  double dVar92;
  double dVar95;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  float fVar96;
  undefined4 uVar97;
  TArray<bool,TSizedDefaultAllocator<32>_> local_218;
  TVector<double>_u_0 local_208;
  TVector<double>_u_0 local_1f0;
  TVector<double>_u_0 local_1d8;
  double local_1b8;
  double dStack_1b0;
  undefined8 local_1a8;
  undefined1 local_198 [16];
  double local_188;
  TVector<double>_u_0 local_180;
  double local_168;
  double dStack_160;
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double dStack_108;
  double local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined1 local_d8 [16];
  
  if (CVars::ChaosSolverDebugDrawMeshContacts != 0) {
    FDebugDrawQueue::GetInstance();
    pFVar12 = FDebugDrawQueue::GetInstance();
    if ((pFVar12->bEnableDebugDrawing != false) &&
       (pFVar12 = FDebugDrawQueue::GetInstance(), 0 < pFVar12->NumConsumers)) {
      uVar14 = (this->ContactTriangles).ArrayNum;
      local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_218.ArrayNum = 0;
      local_218.ArrayMax = 0;
      if ((int)uVar14 < 1) {
        if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
        }
      }
      else {
        TArray<bool,TSizedDefaultAllocator<32>_>::AddZeroed(&local_218,uVar14);
      }
      dVar8 = __real_4049000000000000;
      uVar14 = 0;
      if (0 < (this->TriangleContactPointDatas).ArrayNum) {
        lVar15 = 0;
        lVar16 = 0;
        do {
          uVar10 = 0;
          if ((int)uVar14 < (this->TriangleContactPointDatas).ArrayNum) {
            uVar10 = ~uVar14 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar1 = (this->TriangleContactPointDatas).AllocatorInstance.Data;
          uVar10 = 0;
          if ((int)uVar14 < (this->TriangleContactPoints).ArrayNum) {
            uVar10 = ~uVar14 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = (this->TriangleContactPoints).AllocatorInstance.Data;
          if (pFVar1[lVar16 + 0x10] != (FScriptContainerElement)0x0) {
            auVar56 = *(undefined1 (*) [16])&(this->ConvexTransform).field_0x10;
            auVar49 = *(undefined1 (*) [16])&this->ConvexTransform;
            dVar75 = *(double *)(pFVar2 + lVar15 + 0x10) *
                     *(double *)&(this->ConvexTransform).field_0x50;
            dVar7 = *(double *)&(this->ConvexTransform).field_0x58 * 0.0;
            dVar78 = *(double *)&(this->ConvexTransform).field_0x18;
            dVar65 = *(double *)&(this->ConvexTransform).field_0x40 * *(double *)(pFVar2 + lVar15);
            dVar76 = *(double *)&(this->ConvexTransform).field_0x48 *
                     *(double *)(pFVar2 + lVar15 + 8);
            uVar77 = (undefined4)((ulonglong)dVar76 >> 0x20);
            auVar17 = *(undefined1 (*) [16])&this->ConvexTransform;
            auVar36 = blendpd(auVar17,auVar56,2);
            auVar79._8_4_ = SUB84(dVar76,0);
            auVar79._0_8_ = dVar65;
            auVar79._12_4_ = uVar77;
            dVar33 = auVar56._0_8_;
            dVar35 = auVar56._8_8_;
            auVar80._0_8_ = auVar79._8_8_ * auVar17._0_8_ - auVar17._8_8_ * dVar65;
            auVar80._8_8_ = dVar75 * auVar17._8_8_ - dVar33 * dVar76;
            auVar42._8_4_ = SUB84(dVar76,0);
            auVar42._0_8_ = dVar65;
            auVar42._12_4_ = uVar77;
            auVar39._8_4_ = SUB84(dVar7,0);
            auVar39._0_8_ = dVar75;
            auVar39._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
            auVar17 = blendpd(auVar42,auVar39,2);
            auVar66._8_4_ = SUB84(auVar80._8_8_,0);
            auVar66._0_8_ = auVar80._0_8_;
            auVar66._12_4_ = (int)((ulonglong)auVar80._8_8_ >> 0x20);
            auVar18._0_8_ = auVar17._0_8_ * dVar33 - auVar36._0_8_ * dVar75;
            auVar18._8_8_ = auVar17._8_8_ * dVar35 - auVar36._8_8_ * dVar7;
            auVar17 = blendpd(auVar80,auVar18,2);
            dVar63 = auVar66._8_8_ + auVar66._8_8_;
            dVar74 = auVar18._0_8_ + auVar18._0_8_;
            auVar81._0_8_ = auVar17._0_8_ + auVar17._0_8_;
            auVar81._8_8_ = auVar17._8_8_ + auVar17._8_8_;
            auVar50._8_4_ = SUB84(dVar74,0);
            auVar50._0_8_ = dVar63;
            uVar77 = (undefined4)((ulonglong)dVar74 >> 0x20);
            auVar50._12_4_ = uVar77;
            auVar37._8_4_ = SUB84(dVar74,0);
            auVar37._0_8_ = dVar63;
            auVar37._12_4_ = uVar77;
            auVar17 = blendpd(auVar37,auVar81,2);
            dVar7 = *(double *)(pFVar2 + lVar15 + 0x28) *
                    *(double *)&(this->ConvexTransform).field_0x50;
            dVar64 = *(double *)&(this->ConvexTransform).field_0x58 * 0.0;
            auVar51._0_8_ = auVar50._8_8_ * auVar49._0_8_ - auVar49._8_8_ * dVar63;
            auVar51._8_8_ = auVar81._0_8_ * auVar49._8_8_ - dVar33 * dVar74;
            auVar19._8_4_ = SUB84(auVar51._8_8_,0);
            auVar19._0_8_ = auVar51._0_8_;
            auVar19._12_4_ = (int)((ulonglong)auVar51._8_8_ >> 0x20);
            auVar49 = blendpd(auVar49,auVar56,2);
            auVar38._0_8_ = auVar17._0_8_ * dVar33 - auVar49._0_8_ * auVar81._0_8_;
            auVar38._8_8_ = auVar17._8_8_ * dVar35 - auVar49._8_8_ * auVar81._8_8_;
            dVar92 = *(double *)(pFVar2 + lVar15 + 0x18) *
                     *(double *)&(this->ConvexTransform).field_0x40;
            dVar95 = *(double *)(pFVar2 + lVar15 + 0x18 + 8) *
                     *(double *)&(this->ConvexTransform).field_0x48;
            auVar49 = *(undefined1 (*) [16])&this->ConvexTransform;
            local_128 = dVar63 * dVar78 + dVar65 + auVar19._8_8_ +
                        *(double *)&(this->ConvexTransform).field_0x20;
            dStack_120 = dVar74 * dVar78 + dVar76 + auVar38._0_8_ +
                         *(double *)&(this->ConvexTransform).field_0x28;
            auVar17 = blendpd(auVar51,auVar38,2);
            auVar67._8_4_ = SUB84(dVar95,0);
            auVar67._0_8_ = dVar92;
            uVar77 = (undefined4)((ulonglong)dVar95 >> 0x20);
            auVar67._12_4_ = uVar77;
            auVar68._0_8_ = auVar67._8_8_ * auVar49._0_8_ - auVar49._8_8_ * dVar92;
            auVar68._8_8_ = dVar7 * auVar49._8_8_ - dVar33 * dVar95;
            auVar20._8_4_ = SUB84(dVar95,0);
            auVar20._0_8_ = dVar92;
            auVar20._12_4_ = uVar77;
            local_118 = auVar81._0_8_ * dVar78 + dVar75 + auVar17._0_8_ +
                        *(double *)&(this->ConvexTransform).field_0x30;
            auVar17._8_4_ = SUB84(dVar64,0);
            auVar17._0_8_ = dVar7;
            auVar17._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
            auVar17 = blendpd(auVar20,auVar17,2);
            auVar39 = blendpd(auVar49,auVar56,2);
            auVar49._0_8_ = auVar17._0_8_ * dVar33 - auVar39._0_8_ * dVar7;
            auVar49._8_8_ = auVar17._8_8_ * dVar35 - auVar39._8_8_ * dVar64;
            auVar17 = blendpd(auVar68,auVar49,2);
            dVar76 = auVar68._8_8_ + auVar68._8_8_;
            dVar64 = auVar49._0_8_ + auVar49._0_8_;
            uVar77 = (undefined4)((ulonglong)dVar64 >> 0x20);
            auVar69._0_8_ = auVar17._0_8_ + auVar17._0_8_;
            auVar69._8_8_ = auVar17._8_8_ + auVar17._8_8_;
            dVar65 = *(double *)(pFVar2 + lVar15 + 0x40);
            auVar52._8_4_ = SUB84(dVar64,0);
            auVar52._0_8_ = dVar76;
            auVar52._12_4_ = uVar77;
            auVar49 = *(undefined1 (*) [16])&this->ConvexTransform;
            auVar40._8_4_ = SUB84(dVar64,0);
            auVar40._0_8_ = dVar76;
            auVar40._12_4_ = uVar77;
            auVar17 = blendpd(auVar40,auVar69,2);
            auVar53._0_8_ = auVar52._8_8_ * auVar49._0_8_ - auVar49._8_8_ * dVar76;
            auVar53._8_8_ = auVar69._0_8_ * auVar49._8_8_ - dVar33 * dVar64;
            auVar49 = blendpd(auVar49,auVar56,2);
            auVar41._0_8_ = auVar17._0_8_ * dVar33 - auVar49._0_8_ * auVar69._0_8_;
            auVar41._8_8_ = auVar17._8_8_ * dVar35 - auVar49._8_8_ * auVar69._8_8_;
            auVar49 = *(undefined1 (*) [16])&this->ConvexTransform;
            auVar21._8_4_ = SUB84(auVar53._8_8_,0);
            auVar21._0_8_ = auVar53._0_8_;
            auVar21._12_4_ = (int)((ulonglong)auVar53._8_8_ >> 0x20);
            auVar39 = blendpd(auVar53,auVar41,2);
            auVar17 = *(undefined1 (*) [16])(pFVar2 + lVar15 + 0x30);
            local_188 = auVar69._0_8_ * dVar35 + dVar7 + auVar39._0_8_ +
                        *(double *)&(this->ConvexTransform).field_0x30;
            _local_1b8 = *(undefined1 (*) [16])&this->ConvexTransform;
            dVar7 = dVar76 * dVar35 + dVar92 + auVar21._8_8_ +
                    *(double *)&(this->ConvexTransform).field_0x20;
            dVar76 = dVar64 * dVar35 + dVar95 + auVar41._0_8_ +
                     *(double *)&(this->ConvexTransform).field_0x28;
            uVar97 = (undefined4)((ulonglong)dVar76 >> 0x20);
            auVar42 = blendpd(_local_1b8,auVar56,2);
            dVar63 = auVar17._8_8_;
            auVar93._0_8_ = dVar63 * local_1b8 - local_1b8._8_8_ * auVar17._0_8_;
            auVar93._8_8_ = dVar65 * local_1b8._8_8_ - dVar33 * dVar63;
            auVar82._8_4_ = auVar56._8_4_;
            auVar82._0_8_ = dVar35;
            auVar82._12_4_ = auVar56._12_4_;
            auVar36._8_8_ = 0;
            auVar36._0_8_ = dVar65;
            auVar39 = blendpd(auVar17,auVar36,2);
            auVar70._8_4_ = SUB84(auVar93._8_8_,0);
            auVar70._0_8_ = auVar93._0_8_;
            auVar70._12_4_ = (int)((ulonglong)auVar93._8_8_ >> 0x20);
            local_198._8_4_ = SUB84(dVar76,0);
            local_198._0_8_ = dVar7;
            local_198._12_4_ = uVar97;
            auVar22._0_8_ = auVar39._0_8_ * dVar33 - auVar42._0_8_ * dVar65;
            auVar22._8_8_ = auVar39._8_8_ * dVar35 - auVar42._8_8_ * 0.0;
            auVar39 = blendpd(auVar93,auVar22,2);
            dVar64 = auVar70._8_8_ + auVar70._8_8_;
            dVar75 = auVar22._0_8_ + auVar22._0_8_;
            auVar94._0_8_ = auVar39._0_8_ + auVar39._0_8_;
            auVar94._8_8_ = auVar39._8_8_ + auVar39._8_8_;
            auVar54._8_4_ = SUB84(dVar75,0);
            auVar54._0_8_ = dVar64;
            uVar77 = (undefined4)((ulonglong)dVar75 >> 0x20);
            auVar54._12_4_ = uVar77;
            auVar34._8_4_ = SUB84(dVar75,0);
            auVar34._0_8_ = dVar64;
            auVar34._12_4_ = uVar77;
            auVar39 = blendpd(auVar34,auVar94,2);
            auVar55._0_8_ = auVar54._8_8_ * auVar49._0_8_ - auVar49._8_8_ * dVar64;
            auVar55._8_8_ = auVar94._0_8_ * auVar49._8_8_ - dVar33 * dVar75;
            auVar23._8_4_ = SUB84(auVar55._8_8_,0);
            auVar23._0_8_ = auVar55._0_8_;
            auVar23._12_4_ = (int)((ulonglong)auVar55._8_8_ >> 0x20);
            auVar49 = blendpd(auVar49,auVar56,2);
            auVar56._0_8_ = auVar39._0_8_ * dVar33 - auVar49._0_8_ * auVar94._0_8_;
            auVar56._8_8_ = auVar39._8_8_ * dVar35 - auVar49._8_8_ * auVar94._8_8_;
            dVar78 = dVar35 * dVar64 + auVar17._0_8_ + auVar23._8_8_;
            dVar75 = auVar82._8_8_ * dVar75 + dVar63 + auVar56._0_8_;
            auVar56 = blendpd(auVar55,auVar56,2);
            dStack_160 = dVar75;
            local_168 = dVar78;
            local_180._8_4_ = SUB84(dVar76,0);
            local_180._0_8_ = dVar7;
            local_180._12_4_ = uVar97;
            dVar65 = dVar35 * auVar94._0_8_ + dVar65 + auVar56._0_8_;
            local_180._s_0.Z = local_188;
            pFVar12 = FDebugDrawQueue::GetInstance();
            dVar64 = param_2 * dVar8;
            local_1a8 = dVar65 * dVar64 + local_188;
            fVar96 = (float)param_2;
            dStack_1b0 = dVar75 * dVar64 + dVar76;
            local_1b8 = dVar78 * dVar64 + dVar7;
            local_158 = dVar65;
            FDebugDrawQueue::DrawDebugLine
                      (pFVar12,(TVector<double> *)&local_180._s_0,(TVector<double> *)&local_1b8,
                       param_1,false,0.0,'\n',fVar96 + fVar96);
            uVar10 = *(uint *)(pFVar1 + lVar16 + 8);
            uVar11 = 0;
            if ((int)uVar10 < local_218.ArrayNum) {
              uVar11 = ~uVar10 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (local_218.AllocatorInstance.Data[(int)uVar10] == (FScriptContainerElement)0x0) {
              uVar10 = *(uint *)(pFVar1 + lVar16 + 8);
              uVar11 = 0;
              if ((int)uVar10 < (this->ContactTriangles).ArrayNum) {
                uVar11 = ~uVar10 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              auVar56 = *(undefined1 (*) [16])&(this->ConvexTransform).field_0x10;
              dVar63 = auVar56._0_8_;
              pFVar2 = (this->ContactTriangles).AllocatorInstance.Data;
              auVar49 = *(undefined1 (*) [16])&this->ConvexTransform;
              auVar17 = *(undefined1 (*) [16])&this->ConvexTransform;
              dVar35 = *(double *)&(this->ConvexTransform).field_0x18;
              auVar39 = blendpd(auVar49,auVar56,2);
              lVar13 = (longlong)(int)uVar10 * 0x70;
              dVar65 = *(double *)(pFVar2 + lVar13) * *(double *)&(this->ConvexTransform).field_0x40
              ;
              dVar76 = *(double *)(pFVar2 + lVar13 + 8) *
                       *(double *)&(this->ConvexTransform).field_0x48;
              uVar77 = (undefined4)((ulonglong)dVar76 >> 0x20);
              dVar75 = *(double *)(pFVar2 + lVar13 + 0x10) *
                       *(double *)&(this->ConvexTransform).field_0x50;
              dVar7 = *(double *)&(this->ConvexTransform).field_0x58 * 0.0;
              auVar83._8_4_ = SUB84(dVar76,0);
              auVar83._0_8_ = dVar65;
              auVar83._12_4_ = uVar77;
              dVar74 = auVar56._8_8_;
              auVar84._0_8_ = auVar83._8_8_ * auVar49._0_8_ - auVar49._8_8_ * dVar65;
              auVar84._8_8_ = dVar75 * auVar49._8_8_ - dVar63 * dVar76;
              auVar24._8_4_ = SUB84(dVar76,0);
              auVar24._0_8_ = dVar65;
              auVar24._12_4_ = uVar77;
              auVar4._8_4_ = SUB84(dVar7,0);
              auVar4._0_8_ = dVar75;
              auVar4._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
              auVar49 = blendpd(auVar24,auVar4,2);
              auVar71._8_4_ = SUB84(auVar84._8_8_,0);
              auVar71._0_8_ = auVar84._0_8_;
              auVar71._12_4_ = (int)((ulonglong)auVar84._8_8_ >> 0x20);
              auVar25._0_8_ = auVar49._0_8_ * dVar63 - auVar39._0_8_ * dVar75;
              auVar25._8_8_ = auVar49._8_8_ * dVar74 - auVar39._8_8_ * dVar7;
              auVar49 = blendpd(auVar84,auVar25,2);
              auVar85._0_8_ = auVar49._0_8_ + auVar49._0_8_;
              auVar85._8_8_ = auVar49._8_8_ + auVar49._8_8_;
              dVar92 = auVar71._8_8_ + auVar71._8_8_;
              dVar95 = auVar25._0_8_ + auVar25._0_8_;
              auVar57._8_4_ = SUB84(dVar95,0);
              auVar57._0_8_ = dVar92;
              uVar77 = (undefined4)((ulonglong)dVar95 >> 0x20);
              auVar57._12_4_ = uVar77;
              auVar43._8_4_ = SUB84(dVar95,0);
              auVar43._0_8_ = dVar92;
              auVar43._12_4_ = uVar77;
              auVar49 = blendpd(auVar43,auVar85,2);
              auVar58._0_8_ = auVar57._8_8_ * auVar17._0_8_ - auVar17._8_8_ * dVar92;
              auVar58._8_8_ = auVar85._0_8_ * auVar17._8_8_ - dVar63 * dVar95;
              dVar7 = *(double *)(pFVar2 + lVar13 + 0x18) *
                      *(double *)&(this->ConvexTransform).field_0x40;
              dVar64 = *(double *)(pFVar2 + lVar13 + 0x18 + 8) *
                       *(double *)&(this->ConvexTransform).field_0x48;
              uVar77 = (undefined4)((ulonglong)dVar64 >> 0x20);
              auVar26._8_4_ = SUB84(auVar58._8_8_,0);
              auVar26._0_8_ = auVar58._0_8_;
              auVar26._12_4_ = (int)((ulonglong)auVar58._8_8_ >> 0x20);
              auVar17 = blendpd(auVar17,auVar56,2);
              auVar44._0_8_ = auVar49._0_8_ * dVar63 - auVar17._0_8_ * auVar85._0_8_;
              auVar44._8_8_ = auVar49._8_8_ * dVar74 - auVar17._8_8_ * auVar85._8_8_;
              dVar78 = *(double *)(pFVar2 + lVar13 + 0x28) *
                       *(double *)&(this->ConvexTransform).field_0x50;
              dVar33 = *(double *)&(this->ConvexTransform).field_0x58 * 0.0;
              auVar49 = *(undefined1 (*) [16])&this->ConvexTransform;
              local_1f0._s_0.X =
                   dVar92 * dVar35 + dVar65 + auVar26._8_8_ +
                   *(double *)&(this->ConvexTransform).field_0x20;
              local_1f0._s_0.Y =
                   dVar95 * dVar35 + dVar76 + auVar44._0_8_ +
                   *(double *)&(this->ConvexTransform).field_0x28;
              auVar17 = blendpd(auVar58,auVar44,2);
              local_1f0._s_0.Z =
                   auVar85._0_8_ * dVar35 + dVar75 + auVar17._0_8_ +
                   *(double *)&(this->ConvexTransform).field_0x30;
              auVar86._8_4_ = SUB84(dVar64,0);
              auVar86._0_8_ = dVar7;
              auVar86._12_4_ = uVar77;
              auVar17 = blendpd(auVar49,auVar56,2);
              auVar87._0_8_ = auVar86._8_8_ * auVar49._0_8_ - auVar49._8_8_ * dVar7;
              auVar87._8_8_ = dVar78 * auVar49._8_8_ - dVar63 * dVar64;
              auVar27._8_4_ = SUB84(dVar64,0);
              auVar27._0_8_ = dVar7;
              auVar27._12_4_ = uVar77;
              auVar5._8_4_ = SUB84(dVar33,0);
              auVar5._0_8_ = dVar78;
              auVar5._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
              auVar49 = blendpd(auVar27,auVar5,2);
              auVar72._8_4_ = SUB84(auVar87._8_8_,0);
              auVar72._0_8_ = auVar87._0_8_;
              auVar72._12_4_ = (int)((ulonglong)auVar87._8_8_ >> 0x20);
              auVar28._0_8_ = auVar49._0_8_ * dVar63 - auVar17._0_8_ * dVar78;
              auVar28._8_8_ = auVar49._8_8_ * dVar74 - auVar17._8_8_ * dVar33;
              auVar49 = *(undefined1 (*) [16])&this->ConvexTransform;
              auVar17 = blendpd(auVar87,auVar28,2);
              dVar65 = auVar72._8_8_ + auVar72._8_8_;
              dVar76 = auVar28._0_8_ + auVar28._0_8_;
              auVar88._0_8_ = auVar17._0_8_ + auVar17._0_8_;
              auVar88._8_8_ = auVar17._8_8_ + auVar17._8_8_;
              auVar59._8_4_ = SUB84(dVar76,0);
              auVar59._0_8_ = dVar65;
              uVar77 = (undefined4)((ulonglong)dVar76 >> 0x20);
              auVar59._12_4_ = uVar77;
              auVar45._8_4_ = SUB84(dVar76,0);
              auVar45._0_8_ = dVar65;
              auVar45._12_4_ = uVar77;
              auVar17 = blendpd(auVar45,auVar88,2);
              auVar60._0_8_ = auVar59._8_8_ * auVar49._0_8_ - auVar49._8_8_ * dVar65;
              auVar60._8_8_ = auVar88._0_8_ * auVar49._8_8_ - dVar63 * dVar76;
              auVar29._8_4_ = SUB84(auVar60._8_8_,0);
              auVar29._0_8_ = auVar60._0_8_;
              auVar29._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
              auVar49 = blendpd(auVar49,auVar56,2);
              auVar46._0_8_ = auVar17._0_8_ * dVar63 - auVar49._0_8_ * auVar88._0_8_;
              auVar46._8_8_ = auVar17._8_8_ * dVar74 - auVar49._8_8_ * auVar88._8_8_;
              auVar49 = *(undefined1 (*) [16])&this->ConvexTransform;
              local_208._s_0.X =
                   dVar65 * dVar74 + dVar7 + auVar29._8_8_ +
                   *(double *)&(this->ConvexTransform).field_0x20;
              local_208._s_0.Y =
                   dVar76 * dVar74 + dVar64 + auVar46._0_8_ +
                   *(double *)&(this->ConvexTransform).field_0x28;
              dVar65 = *(double *)&(this->ConvexTransform).field_0x40 *
                       *(double *)(pFVar2 + lVar13 + 0x30);
              dVar7 = *(double *)&(this->ConvexTransform).field_0x48 *
                      *(double *)(pFVar2 + lVar13 + 0x30 + 8);
              uVar77 = (undefined4)((ulonglong)dVar7 >> 0x20);
              local_d8 = *(undefined1 (*) [16])&this->ConvexTransform;
              auVar17 = blendpd(auVar60,auVar46,2);
              dVar76 = *(double *)(pFVar2 + lVar13 + 0x40) *
                       *(double *)&(this->ConvexTransform).field_0x50;
              dVar64 = *(double *)&(this->ConvexTransform).field_0x58 * 0.0;
              local_208._s_0.Z =
                   auVar88._0_8_ * dVar74 + dVar78 + auVar17._0_8_ +
                   *(double *)&(this->ConvexTransform).field_0x30;
              auVar89._8_4_ = SUB84(dVar7,0);
              auVar89._0_8_ = dVar65;
              auVar89._12_4_ = uVar77;
              auVar39 = blendpd(local_d8,auVar56,2);
              auVar90._0_8_ = auVar89._8_8_ * local_d8._0_8_ - local_d8._8_8_ * dVar65;
              auVar90._8_8_ = dVar76 * local_d8._8_8_ - dVar63 * dVar7;
              auVar73._8_4_ = SUB84(auVar90._8_8_,0);
              auVar73._0_8_ = auVar90._0_8_;
              auVar73._12_4_ = (int)((ulonglong)auVar90._8_8_ >> 0x20);
              auVar30._8_4_ = SUB84(dVar7,0);
              auVar30._0_8_ = dVar65;
              auVar30._12_4_ = uVar77;
              auVar6._8_4_ = SUB84(dVar64,0);
              auVar6._0_8_ = dVar76;
              auVar6._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
              auVar17 = blendpd(auVar30,auVar6,2);
              auVar31._0_8_ = auVar17._0_8_ * dVar63 - auVar39._0_8_ * dVar76;
              auVar31._8_8_ = auVar17._8_8_ * dVar74 - auVar39._8_8_ * dVar64;
              dVar64 = auVar73._8_8_ + auVar73._8_8_;
              dVar75 = auVar31._0_8_ + auVar31._0_8_;
              auVar17 = blendpd(auVar90,auVar31,2);
              auVar61._8_4_ = SUB84(dVar75,0);
              auVar61._0_8_ = dVar64;
              uVar77 = (undefined4)((ulonglong)dVar75 >> 0x20);
              auVar61._12_4_ = uVar77;
              auVar47._8_4_ = SUB84(dVar75,0);
              auVar47._0_8_ = dVar64;
              auVar47._12_4_ = uVar77;
              auVar91._0_8_ = auVar17._0_8_ + auVar17._0_8_;
              auVar91._8_8_ = auVar17._8_8_ + auVar17._8_8_;
              auVar17 = blendpd(auVar47,auVar91,2);
              auVar62._0_8_ = auVar61._8_8_ * auVar49._0_8_ - auVar49._8_8_ * dVar64;
              auVar62._8_8_ = auVar91._0_8_ * auVar49._8_8_ - dVar63 * dVar75;
              auVar56 = blendpd(auVar49,auVar56,2);
              auVar32._8_4_ = SUB84(auVar62._8_8_,0);
              auVar32._0_8_ = auVar62._0_8_;
              auVar32._12_4_ = (int)((ulonglong)auVar62._8_8_ >> 0x20);
              auVar48._0_8_ = auVar17._0_8_ * dVar63 - auVar56._0_8_ * auVar91._0_8_;
              auVar48._8_8_ = auVar17._8_8_ * dVar74 - auVar56._8_8_ * auVar91._8_8_;
              local_1d8._s_0.X =
                   dVar64 * dVar74 + dVar65 + auVar32._8_8_ +
                   *(double *)&(this->ConvexTransform).field_0x20;
              local_1d8._s_0.Y =
                   dVar75 * dVar74 + dVar7 + auVar48._0_8_ +
                   *(double *)&(this->ConvexTransform).field_0x28;
              dStack_140 = local_1d8._s_0.Y;
              local_148 = local_1d8._s_0.X;
              auVar56 = blendpd(auVar62,auVar48,2);
              local_1d8._s_0.Z =
                   auVar91._0_8_ * dVar74 + dVar76 + auVar56._0_8_ +
                   *(double *)&(this->ConvexTransform).field_0x30;
              local_138 = local_1d8._s_0.Z;
              local_110 = local_1f0._s_0.X;
              dStack_108 = local_1f0._s_0.Y;
              local_100 = local_1f0._s_0.Z;
              local_f8 = local_208._s_0.X;
              dStack_f0 = local_208._s_0.Y;
              local_e8 = local_208._s_0.Z;
              pFVar12 = FDebugDrawQueue::GetInstance();
              FDebugDrawQueue::DrawDebugLine
                        (pFVar12,(TVector<double> *)&local_1f0._s_0,
                         (TVector<double> *)&local_208._s_0,&FColor::Silver,false,0.0,'\n',fVar96);
              pFVar12 = FDebugDrawQueue::GetInstance();
              FDebugDrawQueue::DrawDebugLine
                        (pFVar12,(TVector<double> *)&local_208._s_0,
                         (TVector<double> *)&local_1d8._s_0,&FColor::Silver,false,0.0,'\n',fVar96);
              pFVar12 = FDebugDrawQueue::GetInstance();
              FDebugDrawQueue::DrawDebugLine
                        (pFVar12,(TVector<double> *)&local_1d8._s_0,
                         (TVector<double> *)&local_1f0._s_0,&FColor::Silver,false,0.0,'\n',fVar96);
              uVar10 = *(uint *)(pFVar1 + lVar16 + 8);
              uVar11 = 0;
              if ((int)uVar10 < local_218.ArrayNum) {
                uVar11 = ~uVar10 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              local_218.AllocatorInstance.Data[(int)uVar10] = (FScriptContainerElement)0x1;
            }
          }
          uVar14 = uVar14 + 1;
          lVar16 = lVar16 + 0x18;
          lVar15 = lVar15 + 0x58;
        } while ((int)uVar14 < (this->TriangleContactPointDatas).ArrayNum);
      }
      if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// DisableContact @ 1439cafa0

void __thiscall
Chaos::FContactTriangleCollector::DisableContact(FContactTriangleCollector *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 < (this->TriangleContactPointDatas).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->TriangleContactPointDatas).AllocatorInstance.Data[(longlong)param_1 * 0x18 + 0x10] =
       (FScriptContainerElement)0x0;
  this->NumDisabledTriangleContactPoints = this->NumDisabledTriangleContactPoints + 1;
  return;
}

// FinalizeContacts @ 1439cbbb0

void __thiscall
Chaos::FContactTriangleCollector::FinalizeContacts
          (FContactTriangleCollector *this,TRigidTransform<double,3> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  bool bVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  double dVar18;
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
  undefined4 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar41;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  SortContactPointsForSolving(this);
  iVar17 = (this->TriangleContactPoints).ArrayNum;
  uVar15 = 0;
  if (0 < iVar17) {
    lVar16 = 0;
    do {
      uVar14 = 0;
      if ((int)uVar15 < iVar17) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->TriangleContactPoints).AllocatorInstance.Data;
      dVar5 = *(double *)param_1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar6 = *(double *)&param_1->field_0x8 *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar8 = *(double *)&param_1->field_0x10 *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar9 = *(double *)&param_1->field_0x18 *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar18 = *(double *)(pFVar1 + lVar16 + 0x28) - *(double *)&param_1->field_0x30;
      dVar10 = *(double *)(pFVar1 + lVar16 + 0x18) - *(double *)&param_1->field_0x20;
      dVar41 = *(double *)(pFVar1 + lVar16 + 0x18 + 8) - *(double *)&param_1->field_0x28;
      uVar31 = (undefined4)((ulonglong)dVar41 >> 0x20);
      auVar32._8_4_ = SUB84(dVar6,0);
      auVar32._0_8_ = dVar5;
      auVar32._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      auVar35._8_4_ = SUB84(dVar9,0);
      auVar35._0_8_ = dVar8;
      auVar35._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      auVar33 = blendpd(auVar32,auVar35,2);
      auVar36._8_4_ = SUB84(dVar41,0);
      auVar36._0_8_ = dVar10;
      auVar36._12_4_ = uVar31;
      auVar19._8_4_ = SUB84(dVar41,0);
      auVar19._0_8_ = dVar10;
      auVar19._12_4_ = uVar31;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = dVar18;
      auVar20 = blendpd(auVar19,auVar11,2);
      auVar37._0_8_ = auVar36._8_8_ * dVar5 - dVar6 * dVar10;
      auVar37._8_8_ = dVar18 * dVar6 - dVar8 * dVar41;
      auVar21._0_8_ = auVar20._0_8_ * dVar8 - auVar33._0_8_ * dVar18;
      auVar21._8_8_ = auVar20._8_8_ * dVar9 - auVar33._8_8_ * 0.0;
      auVar20 = blendpd(auVar37,auVar21,2);
      auVar38._0_8_ = auVar20._0_8_ + auVar20._0_8_;
      auVar38._8_8_ = auVar20._8_8_ + auVar20._8_8_;
      dVar3 = auVar37._8_8_ + auVar37._8_8_;
      dVar4 = auVar21._0_8_ + auVar21._0_8_;
      uVar31 = (undefined4)((ulonglong)dVar4 >> 0x20);
      auVar27._8_4_ = SUB84(dVar4,0);
      auVar27._0_8_ = dVar3;
      auVar27._12_4_ = uVar31;
      auVar22._8_4_ = SUB84(dVar4,0);
      auVar22._0_8_ = dVar3;
      auVar22._12_4_ = uVar31;
      auVar20 = blendpd(auVar22,auVar38,2);
      auVar28._0_8_ = auVar27._8_8_ * dVar5 - dVar3 * dVar6;
      auVar28._8_8_ = auVar38._0_8_ * dVar6 - dVar4 * dVar8;
      auVar23._0_8_ = auVar20._0_8_ * dVar8 - auVar38._0_8_ * auVar33._0_8_;
      auVar23._8_8_ = auVar20._8_8_ * dVar9 - auVar38._8_8_ * auVar33._8_8_;
      dVar4 = dVar4 * dVar9 + dVar41 + auVar23._0_8_;
      auVar33 = blendpd(auVar28,auVar23,2);
      auVar20._8_4_ = SUB84(dVar4,0);
      auVar20._0_8_ = dVar3 * dVar9 + dVar10 + auVar28._8_8_;
      auVar20._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
      *(undefined1 (*) [16])(pFVar1 + lVar16 + 0x18) = auVar20;
      *(double *)(pFVar1 + lVar16 + 0x28) = auVar38._0_8_ * dVar9 + dVar18 + auVar33._0_8_;
      auVar20 = *(undefined1 (*) [16])(pFVar1 + lVar16 + 0x30);
      dVar3 = *(double *)(pFVar1 + lVar16 + 0x40);
      dVar6 = *(double *)param_1 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar8 = *(double *)&param_1->field_0x8 *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      dVar9 = *(double *)&param_1->field_0x10 *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar10 = *(double *)&param_1->field_0x18 *
               GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar41 = auVar20._8_8_;
      auVar34._8_4_ = SUB84(dVar8,0);
      auVar34._0_8_ = dVar6;
      auVar34._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar7._8_4_ = SUB84(dVar10,0);
      auVar7._0_8_ = dVar9;
      auVar7._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      auVar35 = blendpd(auVar34,auVar7,2);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = dVar3;
      auVar33 = blendpd(auVar20,auVar12,2);
      auVar39._0_8_ = dVar41 * dVar6 - dVar8 * auVar20._0_8_;
      auVar39._8_8_ = dVar3 * dVar8 - dVar9 * dVar41;
      uVar15 = uVar15 + 1;
      auVar24._0_8_ = auVar33._0_8_ * dVar9 - auVar35._0_8_ * dVar3;
      auVar24._8_8_ = auVar33._8_8_ * dVar10 - auVar35._8_8_ * 0.0;
      auVar33 = blendpd(auVar39,auVar24,2);
      dVar4 = auVar39._8_8_ + auVar39._8_8_;
      dVar5 = auVar24._0_8_ + auVar24._0_8_;
      uVar31 = (undefined4)((ulonglong)dVar5 >> 0x20);
      auVar40._0_8_ = auVar33._0_8_ + auVar33._0_8_;
      auVar40._8_8_ = auVar33._8_8_ + auVar33._8_8_;
      auVar29._8_4_ = SUB84(dVar5,0);
      auVar29._0_8_ = dVar4;
      auVar29._12_4_ = uVar31;
      auVar25._8_4_ = SUB84(dVar5,0);
      auVar25._0_8_ = dVar4;
      auVar25._12_4_ = uVar31;
      auVar33 = blendpd(auVar25,auVar40,2);
      auVar30._0_8_ = auVar29._8_8_ * dVar6 - dVar4 * dVar8;
      auVar30._8_8_ = auVar40._0_8_ * dVar8 - dVar5 * dVar9;
      auVar26._0_8_ = auVar33._0_8_ * dVar9 - auVar40._0_8_ * auVar35._0_8_;
      auVar26._8_8_ = auVar33._8_8_ * dVar10 - auVar40._8_8_ * auVar35._8_8_;
      dVar5 = dVar5 * dVar10 + dVar41 + auVar26._0_8_;
      auVar35 = blendpd(auVar30,auVar26,2);
      auVar33._8_4_ = SUB84(dVar5,0);
      auVar33._0_8_ = dVar4 * dVar10 + auVar20._0_8_ + auVar30._8_8_;
      auVar33._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      *(undefined1 (*) [16])(pFVar1 + lVar16 + 0x30) = auVar33;
      *(double *)(pFVar1 + lVar16 + 0x40) = auVar40._0_8_ * dVar10 + dVar3 + auVar35._0_8_;
      lVar16 = lVar16 + 0x58;
      iVar17 = (this->TriangleContactPoints).ArrayNum;
    } while ((int)uVar15 < iVar17);
  }
  return;
}

// FixInvalidNormalContactPoints @ 1439ce590

void __thiscall
Chaos::FContactTriangleCollector::FixInvalidNormalContactPoints(FContactTriangleCollector *this)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  int iVar15;
  bool bVar16;
  longlong lVar17;
  FContactTriangle *this_00;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  double dVar27;
  double dVar28;
  uint uVar29;
  uint uVar30;
  undefined4 uVar31;
  uint uVar32;
  undefined4 uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  undefined4 uVar37;
  uint uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  int local_res10 [2];
  uint local_res18;
  int local_res20 [2];
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  undefined8 local_170;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_128;
  undefined8 local_110;
  TVector<double,3> local_108 [8];
  
  lVar17 = (longlong)(this->TriangleContactPoints).ArrayNum;
  local_res18 = 0;
  dVar13 = (double)Chaos_Collision_MeshContactNormalThreshold;
  if (0 < lVar17) {
    lVar22 = 0;
    uVar31 = (undefined4)__real_3f1a36e2e0000000;
    uVar33 = (undefined4)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
    uVar36 = (uint)__xmm_80000000000000008000000000000000;
    uVar38 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    uVar42 = SUB84(__real_be45798ee0000000,0);
    uVar43 = (undefined4)((ulonglong)__real_be45798ee0000000 >> 0x20);
    local_1a8 = 0;
    local_1b8 = 0;
    do {
      uVar32 = local_res18;
      uVar18 = ~local_res18;
      uVar19 = 0;
      if ((int)local_res18 < (this->TriangleContactPointDatas).ArrayNum) {
        uVar19 = uVar18 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar9 = (this->TriangleContactPointDatas).AllocatorInstance.Data;
      uVar19 = 0;
      if ((int)uVar32 < (this->TriangleContactPoints).ArrayNum) {
        uVar19 = uVar18 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar10 = (this->TriangleContactPoints).AllocatorInstance.Data;
      if ((pFVar9[local_1b8 + 0x10] != (FScriptContainerElement)0x0) &&
         ((pFVar10[lVar22 + 0x54] == (FScriptContainerElement)0x2 ||
          (pFVar10[lVar22 + 0x54] == (FScriptContainerElement)0x3)))) {
        uVar32 = *(uint *)(pFVar9 + local_1b8 + 8);
        uVar19 = 0;
        if ((int)uVar32 < (this->ContactTriangles).ArrayNum) {
          uVar19 = ~uVar32 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        dVar14 = (double)*(float *)(pFVar9 + local_1b8 + 0xc);
        this_00 = (FContactTriangle *)
                  ((this->ContactTriangles).AllocatorInstance.Data + (longlong)(int)uVar32 * 0x70);
        if (((dVar14 <= dVar13) &&
            (bVar16 = FContactTriangle::GetEdgeVerticesAtPosition
                                (this_00,(TVector<double,3> *)(pFVar10 + lVar22 + 0x18),
                                 (TVector<double,3> *)&local_150,local_108,local_res10,local_res20,
                                 (double)CONCAT44(uVar33,uVar31)), iVar15 = local_res20[0],
            iVar21 = local_res10[0], bVar16)) && (local_res10[0] != -1)) {
          if (local_res20[0] == -1) {
            uVar32 = 0;
            if (0 < (this->ContactTriangles).ArrayNum) {
              lVar20 = 0;
              do {
                uVar19 = 0;
                if ((int)uVar32 < (this->ContactTriangles).ArrayNum) {
                  uVar19 = ~uVar32 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar12 = (code *)swi(3);
                  (*pcVar12)();
                  return;
                }
                pFVar9 = (this->ContactTriangles).AllocatorInstance.Data;
                if (iVar21 == *(int *)(pFVar9 + lVar20 + 0x60)) {
LAB_1439ceb2f:
                  local_158 = *(double *)(pFVar9 + lVar20 + 0x28);
                  pFVar11 = pFVar9 + lVar20 + 0x18;
                  uVar31 = *(undefined4 *)pFVar11;
                  uVar33 = *(undefined4 *)(pFVar11 + 4);
                  uVar42 = *(undefined4 *)(pFVar11 + 8);
                  uVar43 = *(undefined4 *)(pFVar11 + 0xc);
                  pFVar11 = pFVar9 + lVar20 + 0x30;
                  uVar37 = *(undefined4 *)pFVar11;
                  uVar39 = *(undefined4 *)(pFVar11 + 4);
                  uVar40 = *(undefined4 *)(pFVar11 + 8);
                  uVar41 = *(undefined4 *)(pFVar11 + 0xc);
                  uVar23 = (undefined4)*(undefined8 *)(pFVar9 + lVar20 + 0x40);
                  uVar25 = (undefined4)((ulonglong)*(undefined8 *)(pFVar9 + lVar20 + 0x40) >> 0x20);
LAB_1439ceb98:
                  dVar14 = *(double *)(pFVar10 + lVar22 + 0x40);
                  dVar2 = *(double *)(pFVar10 + lVar22 + 0x38);
                  dVar3 = *(double *)(pFVar10 + lVar22 + 0x30);
                  dVar4 = *(double *)(pFVar9 + lVar20 + 0x48);
                  dVar5 = *(double *)(pFVar9 + lVar20 + 0x50);
                  dVar6 = *(double *)(pFVar9 + lVar20 + 0x58);
                  uVar24 = SUB84(__real_3ff0000000000000,0);
                  uVar26 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
                  local_128 = (double)CONCAT44(uVar25,uVar23);
                  dVar7 = (double)CONCAT44(uVar43,uVar42) - local_148;
                  dVar27 = (double)CONCAT44(uVar33,uVar31) - local_150;
                  dVar27 = (dVar2 * (local_158 - local_140) - dVar14 * dVar7) * dVar4 +
                           (dVar14 * dVar27 - dVar3 * (local_158 - local_140)) * dVar5 +
                           (dVar3 * dVar7 - dVar2 * dVar27) * dVar6;
                  dVar28 = (double)CONCAT44(uVar41,uVar40) - local_148;
                  dVar7 = (double)CONCAT44(uVar39,uVar37) - local_150;
                  dVar7 = ((local_128 - local_140) * dVar2 - dVar28 * dVar14) * dVar4 +
                          (dVar7 * dVar14 - (local_128 - local_140) * dVar3) * dVar5 +
                          (dVar28 * dVar3 - dVar7 * dVar2) * dVar6;
                  dVar28 = __real_3ff0000000000000;
                  if ((dVar27 <= 0.0) && (dVar28 = __real_bff0000000000000, 0.0 <= dVar27)) {
                    dVar28 = 0.0;
                  }
                  if ((dVar7 <= 0.0) &&
                     (uVar24 = SUB84(__real_bff0000000000000,0),
                     uVar26 = (int)((ulonglong)__real_bff0000000000000 >> 0x20), 0.0 <= dVar7)) {
                    uVar24 = 0;
                    uVar26 = 0;
                  }
                  uVar42 = SUB84(__real_be45798ee0000000,0);
                  uVar43 = (undefined4)((ulonglong)__real_be45798ee0000000 >> 0x20);
                  uVar36 = (uint)__xmm_80000000000000008000000000000000;
                  uVar38 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
                  if (dVar28 == (double)CONCAT44(uVar26,uVar24)) {
                    dVar7 = *(double *)(pFVar10 + lVar22 + 0x18);
                    if (0.0 < ((*(double *)(pFVar9 + lVar20 + 0x20) +
                                *(double *)(pFVar9 + lVar20 + 8) +
                               *(double *)(pFVar9 + lVar20 + 0x38)) * __real_3fd5555555555555 -
                              *(double *)(pFVar10 + lVar22 + 0x20)) * dVar2 +
                              ((*(double *)(pFVar9 + lVar20) + *(double *)(pFVar9 + lVar20 + 0x18) +
                               *(double *)(pFVar9 + lVar20 + 0x30)) * __real_3fd5555555555555 -
                              dVar7) * dVar3 +
                              ((*(double *)(pFVar9 + lVar20 + 0x28) +
                                *(double *)(pFVar9 + lVar20 + 0x10) +
                               *(double *)(pFVar9 + lVar20 + 0x40)) * __real_3fd5555555555555 -
                              *(double *)(pFVar10 + lVar22 + 0x28)) * dVar14) {
                      if (dVar2 * dVar5 + dVar3 * dVar4 + dVar14 * dVar6 <= __real_be45798ee0000000)
                      {
                        uVar29 = SUB84(dVar6,0) ^ uVar36;
                        uVar30 = (uint)((ulonglong)dVar6 >> 0x20) ^ uVar38;
                        uVar19 = SUB84(dVar4,0) ^ uVar36;
                        uVar18 = (uint)((ulonglong)dVar4 >> 0x20) ^ uVar38;
                        uVar34 = SUB84(dVar5,0) ^ uVar36;
                        uVar35 = (uint)((ulonglong)dVar5 >> 0x20) ^ uVar38;
                        local_170 = CONCAT44(uVar30,uVar29);
                      }
                      else {
                        pFVar11 = pFVar9 + lVar20 + 0x48;
                        uVar19 = *(uint *)pFVar11;
                        uVar18 = *(uint *)(pFVar11 + 4);
                        uVar34 = *(uint *)(pFVar11 + 8);
                        uVar35 = *(uint *)(pFVar11 + 0xc);
                        local_170 = *(undefined8 *)(pFVar9 + lVar20 + 0x58);
                        uVar29 = (uint)local_170;
                        uVar30 = (uint)((ulonglong)local_170 >> 0x20);
                      }
                      pFVar9 = pFVar10 + lVar22 + 0x30;
                      *(uint *)pFVar9 = uVar19;
                      *(uint *)(pFVar9 + 4) = uVar18;
                      *(uint *)(pFVar9 + 8) = uVar34;
                      *(uint *)(pFVar9 + 0xc) = uVar35;
                      *(undefined8 *)(pFVar10 + lVar22 + 0x40) = local_170;
                      dVar14 = *(double *)(pFVar10 + lVar22 + 0x48);
                      *(double *)(pFVar10 + lVar22) =
                           dVar14 * (double)CONCAT44(uVar18,uVar19) + dVar7;
                      *(double *)(pFVar10 + lVar22 + 8) =
                           dVar14 * (double)CONCAT44(uVar35,uVar34) +
                           *(double *)(pFVar10 + lVar22 + 0x20);
                      *(double *)(pFVar10 + lVar22 + 0x10) =
                           dVar14 * (double)CONCAT44(uVar30,uVar29) +
                           *(double *)(pFVar10 + lVar22 + 0x28);
                      iVar21 = local_res10[0];
                    }
                  }
                }
                else if ((*(int *)(pFVar9 + lVar20 + 100) == iVar21) ||
                        (*(int *)(pFVar9 + lVar20 + 0x68) == iVar21)) {
                  if (iVar21 == *(int *)(pFVar9 + lVar20 + 0x60)) goto LAB_1439ceb2f;
                  if (iVar21 == *(int *)(pFVar9 + lVar20 + 100)) {
                    local_158 = *(double *)(pFVar9 + lVar20 + 0x40);
                    pFVar11 = pFVar9 + lVar20 + 0x30;
                    uVar31 = *(undefined4 *)pFVar11;
                    uVar33 = *(undefined4 *)(pFVar11 + 4);
                    uVar42 = *(undefined4 *)(pFVar11 + 8);
                    uVar43 = *(undefined4 *)(pFVar11 + 0xc);
                    pFVar11 = pFVar9 + lVar20;
                    uVar37 = *(undefined4 *)pFVar11;
                    uVar39 = *(undefined4 *)(pFVar11 + 4);
                    uVar40 = *(undefined4 *)(pFVar11 + 8);
                    uVar41 = *(undefined4 *)(pFVar11 + 0xc);
                    uVar23 = (undefined4)*(undefined8 *)(pFVar9 + lVar20 + 0x10);
                    uVar25 = (undefined4)
                             ((ulonglong)*(undefined8 *)(pFVar9 + lVar20 + 0x10) >> 0x20);
                  }
                  else {
                    if (iVar21 != *(int *)(pFVar9 + lVar20 + 0x68)) goto LAB_1439cee68;
                    local_158 = *(double *)(pFVar9 + lVar20 + 0x10);
                    pFVar11 = pFVar9 + lVar20;
                    uVar31 = *(undefined4 *)pFVar11;
                    uVar33 = *(undefined4 *)(pFVar11 + 4);
                    uVar42 = *(undefined4 *)(pFVar11 + 8);
                    uVar43 = *(undefined4 *)(pFVar11 + 0xc);
                    pFVar11 = pFVar9 + lVar20 + 0x18;
                    uVar37 = *(undefined4 *)pFVar11;
                    uVar39 = *(undefined4 *)(pFVar11 + 4);
                    uVar40 = *(undefined4 *)(pFVar11 + 8);
                    uVar41 = *(undefined4 *)(pFVar11 + 0xc);
                    uVar23 = (undefined4)*(undefined8 *)(pFVar9 + lVar20 + 0x28);
                    uVar25 = (undefined4)
                             ((ulonglong)*(undefined8 *)(pFVar9 + lVar20 + 0x28) >> 0x20);
                  }
                  goto LAB_1439ceb98;
                }
LAB_1439cee68:
                uVar32 = uVar32 + 1;
                lVar20 = lVar20 + 0x70;
              } while ((int)uVar32 < (this->ContactTriangles).ArrayNum);
LAB_1439cee78:
              uVar31 = (undefined4)__real_3f1a36e2e0000000;
              uVar33 = (undefined4)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
            }
          }
          else {
            if ((local_res10[0] == local_res20[0]) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("EdgeVertexIndexA != EdgeVertexIndexB",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\ContactTriangles.cpp"
                                    ,0x62,L""), bVar16)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            uVar19 = 0;
            local_1b0 = 0;
            if (0 < (this->ContactTriangles).ArrayNum) {
              lVar20 = 0;
              do {
                if (uVar19 != uVar32) {
                  uVar18 = 0;
                  if ((int)uVar19 < (this->ContactTriangles).ArrayNum) {
                    uVar18 = ~uVar19 >> 0x1f;
                  }
                  if ((uVar18 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  pFVar11 = (this->ContactTriangles).AllocatorInstance.Data;
                  if ((((*(int *)(pFVar11 + lVar20 + 0x60) == iVar21) ||
                       (*(int *)(pFVar11 + lVar20 + 100) == iVar21)) ||
                      (*(int *)(pFVar11 + lVar20 + 0x68) == iVar21)) &&
                     (((iVar15 == -1 || (*(int *)(pFVar11 + lVar20 + 0x60) == iVar15)) ||
                      ((*(int *)(pFVar11 + lVar20 + 100) == iVar15 ||
                       (*(int *)(pFVar11 + lVar20 + 0x68) == iVar15)))))) {
                    if (uVar19 != 0xffffffff) {
                      uVar18 = 0;
                      if ((int)uVar19 < (this->ContactTriangles).ArrayNum) {
                        uVar18 = ~uVar19 >> 0x1f;
                      }
                      if ((uVar18 == 0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar16)) {
                        pcVar12 = (code *)swi(3);
                        (*pcVar12)();
                        return;
                      }
                      local_1b0 = local_1b0 * 0x70;
                      pFVar11 = (this->ContactTriangles).AllocatorInstance.Data;
                      dVar2 = *(double *)(pFVar11 + local_1b0 + 0x48);
                      dVar3 = *(double *)(pFVar11 + local_1b0 + 0x50);
                      dVar4 = *(double *)&this_00->FaceNormal;
                      dVar5 = *(double *)&(this_00->FaceNormal).field_0x8;
                      dVar6 = *(double *)(pFVar11 + local_1b0 + 0x58);
                      dVar7 = *(double *)&(this_00->FaceNormal).field_0x10;
                      if (dVar14 < dVar3 * dVar5 + dVar2 * dVar4 + dVar6 * dVar7) {
                        dVar27 = dVar3 * *(double *)(pFVar10 + lVar22 + 0x38) +
                                 dVar2 * *(double *)(pFVar10 + lVar22 + 0x30) +
                                 dVar6 * *(double *)(pFVar10 + lVar22 + 0x40);
                        if (dVar14 < dVar27) {
                          if (dVar27 < (double)CONCAT44(uVar43,uVar42) ||
                              dVar27 == (double)CONCAT44(uVar43,uVar42)) {
                            uVar29 = SUB84(dVar6,0) ^ uVar36;
                            uVar30 = (uint)((ulonglong)dVar6 >> 0x20) ^ uVar38;
                            uVar32 = SUB84(dVar2,0) ^ uVar36;
                            uVar18 = (uint)((ulonglong)dVar2 >> 0x20) ^ uVar38;
                            local_110 = CONCAT44(uVar30,uVar29);
                            uVar34 = SUB84(dVar3,0) ^ uVar36;
                            uVar35 = (uint)((ulonglong)dVar3 >> 0x20) ^ uVar38;
                          }
                          else {
                            pFVar1 = pFVar11 + local_1b0 + 0x48;
                            uVar32 = *(uint *)pFVar1;
                            uVar18 = *(uint *)(pFVar1 + 4);
                            uVar34 = *(uint *)(pFVar1 + 8);
                            uVar35 = *(uint *)(pFVar1 + 0xc);
                            uVar29 = (uint)*(undefined8 *)(pFVar11 + local_1b0 + 0x58);
                            uVar30 = (uint)((ulonglong)*(undefined8 *)(pFVar11 + local_1b0 + 0x58)
                                           >> 0x20);
                          }
                        }
                        else {
                          uVar19 = uVar32;
                          if (dVar14 < (double)CONCAT44(uVar43,uVar42) ||
                              dVar14 == (double)CONCAT44(uVar43,uVar42)) {
                            uVar29 = SUB84(dVar7,0) ^ uVar36;
                            uVar30 = (uint)((ulonglong)dVar7 >> 0x20) ^ uVar38;
                            local_110 = CONCAT44(uVar30,uVar29);
                            uVar32 = SUB84(dVar4,0) ^ uVar36;
                            uVar18 = (uint)((ulonglong)dVar4 >> 0x20) ^ uVar38;
                            uVar34 = SUB84(dVar5,0) ^ uVar36;
                            uVar35 = (uint)((ulonglong)dVar5 >> 0x20) ^ uVar38;
                          }
                          else {
                            uVar32 = *(uint *)&this_00->FaceNormal;
                            uVar18 = *(uint *)&(this_00->FaceNormal).field_0x4;
                            uVar34 = *(uint *)&(this_00->FaceNormal).field_0x8;
                            uVar35 = *(uint *)&(this_00->FaceNormal).field_0xc;
                            uVar8 = *(undefined8 *)&(this_00->FaceNormal).field_0x10;
                            uVar29 = (uint)uVar8;
                            uVar30 = (uint)((ulonglong)uVar8 >> 0x20);
                          }
                        }
                        dVar14 = *(double *)(pFVar10 + lVar22 + 0x48);
                        pFVar11 = pFVar10 + lVar22 + 0x30;
                        *(uint *)pFVar11 = uVar32;
                        *(uint *)(pFVar11 + 4) = uVar18;
                        *(uint *)(pFVar11 + 8) = uVar34;
                        *(uint *)(pFVar11 + 0xc) = uVar35;
                        *(ulonglong *)(pFVar10 + lVar22 + 0x40) = CONCAT44(uVar30,uVar29);
                        *(double *)(pFVar10 + lVar22) =
                             (double)CONCAT44(uVar18,uVar32) * dVar14 +
                             *(double *)(pFVar10 + lVar22 + 0x18);
                        *(double *)(pFVar10 + lVar22 + 8) =
                             (double)CONCAT44(uVar35,uVar34) * dVar14 +
                             *(double *)(pFVar10 + lVar22 + 0x20);
                        *(double *)(pFVar10 + lVar22 + 0x10) =
                             (double)CONCAT44(uVar30,uVar29) * dVar14 +
                             *(double *)(pFVar10 + lVar22 + 0x28);
                        *(uint *)(pFVar9 + local_1b8 + 8) = uVar19;
                      }
                      goto LAB_1439cee78;
                    }
                    break;
                  }
                }
                local_1b0 = local_1b0 + 1;
                uVar19 = uVar19 + 1;
                lVar20 = lVar20 + 0x70;
              } while ((int)uVar19 < (this->ContactTriangles).ArrayNum);
            }
          }
        }
      }
      lVar22 = lVar22 + 0x58;
      local_res18 = local_res18 + 1;
      local_1b8 = local_1b8 + 0x18;
      local_1a8 = local_1a8 + 1;
    } while (local_1a8 < lVar17);
  }
  return;
}

// GetNextTriangleIndexSharingVertex @ 1439d3460

int __thiscall
Chaos::FContactTriangleCollector::GetNextTriangleIndexSharingVertex
          (FContactTriangleCollector *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  if ((param_2 == -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("VertexIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\ContactTriangles.cpp"
                         ,0x7f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  uVar6 = param_1 + 1;
  if ((int)uVar6 < (this->ContactTriangles).ArrayNum) {
    lVar7 = (longlong)(int)uVar6 * 0x70;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->ContactTriangles).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      pFVar1 = (this->ContactTriangles).AllocatorInstance.Data;
      if (*(int *)(pFVar1 + lVar7 + 0x60) == param_2) {
        return uVar6;
      }
      if (*(int *)(pFVar1 + lVar7 + 100) == param_2) {
        return uVar6;
      }
      if (*(int *)(pFVar1 + lVar7 + 0x68) == param_2) {
        return uVar6;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x70;
    } while ((int)uVar6 < (this->ContactTriangles).ArrayNum);
  }
  return -1;
}

// GetOtherTriangleIndexSharingEdge @ 1439d3690

int __thiscall
Chaos::FContactTriangleCollector::GetOtherTriangleIndexSharingEdge
          (FContactTriangleCollector *this,int param_1,int param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  if ((param_2 == -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("EdgeVertexIndexA != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\ContactTriangles.cpp"
                         ,0x61,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  if ((param_2 == param_3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("EdgeVertexIndexA != EdgeVertexIndexB",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\ContactTriangles.cpp"
                         ,0x62,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  uVar6 = 0;
  if (0 < (this->ContactTriangles).ArrayNum) {
    lVar7 = 0;
    do {
      if (uVar6 != param_1) {
        uVar5 = 0;
        if ((int)uVar6 < (this->ContactTriangles).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        pFVar1 = (this->ContactTriangles).AllocatorInstance.Data;
        if (((*(int *)(pFVar1 + lVar7 + 0x60) == param_2) ||
            (*(int *)(pFVar1 + lVar7 + 100) == param_2)) ||
           (*(int *)(pFVar1 + lVar7 + 0x68) == param_2)) {
          if (param_3 == -1) {
            return uVar6;
          }
          if (*(int *)(pFVar1 + lVar7 + 0x60) == param_3) {
            return uVar6;
          }
          if (*(int *)(pFVar1 + lVar7 + 100) == param_3) {
            return uVar6;
          }
          if (*(int *)(pFVar1 + lVar7 + 0x68) == param_3) {
            return uVar6;
          }
        }
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x70;
    } while ((int)uVar6 < (this->ContactTriangles).ArrayNum);
  }
  return -1;
}

// ProcessContacts @ 1439d66f0

void __thiscall
Chaos::FContactTriangleCollector::ProcessContacts
          (FContactTriangleCollector *this,TRigidTransform<double,3> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  BuildContactFeatureSets(this);
  DebugDrawContactPoints(this,&FColor::White,__real_3fc999999999999a);
  if (1 < (this->TriangleContactPoints).ArrayNum) {
    PruneEdgeAndVertexContactPoints(this,true,bChaos_Collision_EnableLargeMeshManifolds == false);
  }
  DebugDrawContactPoints(this,&FColor::Cyan,__real_3fd3333333333333);
  if ((this->bOneSidedCollision != false) &&
     (uVar6 = (this->TriangleContactPointDatas).ArrayNum - 1, -1 < (int)uVar6)) {
    lVar5 = (longlong)(int)uVar6 * 0x18;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->TriangleContactPointDatas).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->TriangleContactPointDatas).AllocatorInstance.Data;
      uVar4 = 0;
      if ((int)uVar6 < (this->TriangleContactPoints).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = 0;
      if ((int)*(uint *)(pFVar1 + lVar5 + 8) < (this->ContactTriangles).ArrayNum) {
        uVar4 = ~*(uint *)(pFVar1 + lVar5 + 8) >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((pFVar1[lVar5 + 0x10] != (FScriptContainerElement)0x0) &&
         (*(float *)(pFVar1 + lVar5 + 0xc) <= 0.0 && *(float *)(pFVar1 + lVar5 + 0xc) != 0.0)) {
        DisableContact(this,uVar6);
      }
      lVar5 = lVar5 + -0x18;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  DebugDrawContactPoints(this,&FColor::Purple,__real_3fe0000000000000);
  if (1 < (this->TriangleContactPoints).ArrayNum) {
    PruneUnnecessaryContactPoints(this);
  }
  DebugDrawContactPoints(this,&FColor::Yellow,__real_3fe6666666666666);
  if (bChaos_Collision_EnableLargeMeshManifolds == false) {
    ReduceManifoldContactPointsTriangeMesh(this);
  }
  DebugDrawContactPoints(this,&FColor::Green,__real_3feccccccccccccd);
  if (0 < (this->TriangleContactPoints).ArrayNum) {
    FixInvalidNormalContactPoints(this);
  }
  DebugDrawContactPoints(this,&FColor::Red,__real_3ff0000000000000);
  FinalizeContacts(this,param_1);
  return;
}

// PruneEdgeAndVertexContactPoints @ 1439da690

void __thiscall
Chaos::FContactTriangleCollector::PruneEdgeAndVertexContactPoints
          (FContactTriangleCollector *this,bool param_1,bool param_2)

{
  ForElementType<FSetElementId> FVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  ForElementType<FSetElementId> FVar9;
  longlong lVar10;
  uint uVar11;
  
  if ((bChaos_Collision_EnableEdgePrune) &&
     (uVar11 = (this->TriangleContactPointDatas).ArrayNum - 1, -1 < (int)uVar11)) {
    lVar10 = (longlong)(int)uVar11 * 0x18;
    do {
      uVar6 = 0;
      if ((int)uVar11 < (this->TriangleContactPointDatas).ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar7 = (this->TriangleContactPointDatas).AllocatorInstance.Data + lVar10;
      if (pFVar7[0x10] != (FScriptContainerElement)0x0) {
        if (((param_2) && (uVar6 = *(uint *)pFVar7, uVar6 != 0xffffffff)) &&
           (*(uint *)(pFVar7 + 4) == 0xffffffff)) {
          if (*(int *)&(this->ContactVertices).Elements.field_0x8 !=
              *(int *)&(this->ContactVertices).Elements.field_0x34) {
            FVar1 = (this->ContactVertices).Hash.SecondaryData;
            FVar9 = (ForElementType<FSetElementId>)&(this->ContactVertices).Hash;
            if (FVar1 != (ForElementType<FSetElementId>)0x0) {
              FVar9 = FVar1;
            }
            iVar8 = *(int *)((longlong)FVar9 +
                            (ulonglong)((this->ContactVertices).HashSize - 1U & uVar6) * 4);
            if (iVar8 != -1) {
              lVar2 = *(longlong *)&(this->ContactVertices).Elements;
              do {
                if (*(uint *)(lVar2 + (longlong)iVar8 * 0xc) == uVar6) goto LAB_1439da81f;
                iVar8 = *(int *)(lVar2 + 4 + (longlong)iVar8 * 0xc);
              } while (iVar8 != -1);
            }
          }
          iVar8 = -1;
        }
        else {
          if (((!param_1) || (*(uint *)pFVar7 == 0xffffffff)) ||
             (*(uint *)(pFVar7 + 4) == 0xffffffff)) goto LAB_1439da830;
          lVar2 = *(longlong *)pFVar7;
          if (*(int *)&(this->ContactEdges).Elements.field_0x8 !=
              *(int *)&(this->ContactEdges).Elements.field_0x34) {
            FVar1 = (this->ContactEdges).Hash.SecondaryData;
            FVar9 = (ForElementType<FSetElementId>)&(this->ContactEdges).Hash;
            if (FVar1 != (ForElementType<FSetElementId>)0x0) {
              FVar9 = FVar1;
            }
            iVar8 = *(int *)((longlong)FVar9 +
                            (ulonglong)
                            ((this->ContactEdges).HashSize - 1U &
                            (int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2) * 4);
            if (iVar8 != -1) {
              lVar3 = *(longlong *)&(this->ContactEdges).Elements;
              do {
                if (*(longlong *)(lVar3 + (longlong)iVar8 * 0x10) == lVar2) goto LAB_1439da81f;
                iVar8 = *(int *)(lVar3 + 8 + (longlong)iVar8 * 0x10);
              } while (iVar8 != -1);
            }
          }
          iVar8 = -1;
        }
LAB_1439da81f:
        if (iVar8 != -1) {
          DisableContact(this,uVar11);
        }
      }
LAB_1439da830:
      lVar10 = lVar10 + -0x18;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  return;
}

// PruneInfacingContactPoints @ 1439daa40

void __thiscall
Chaos::FContactTriangleCollector::PruneInfacingContactPoints(FContactTriangleCollector *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = (this->TriangleContactPointDatas).ArrayNum - 1;
  if (-1 < (int)uVar5) {
    lVar6 = (longlong)(int)uVar5 * 0x18;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->TriangleContactPointDatas).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->TriangleContactPointDatas).AllocatorInstance.Data;
      uVar4 = 0;
      if ((int)uVar5 < (this->TriangleContactPoints).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = 0;
      if ((int)*(uint *)(pFVar1 + lVar6 + 8) < (this->ContactTriangles).ArrayNum) {
        uVar4 = ~*(uint *)(pFVar1 + lVar6 + 8) >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((pFVar1[lVar6 + 0x10] != (FScriptContainerElement)0x0) &&
         (*(float *)(pFVar1 + lVar6 + 0xc) <= 0.0 && *(float *)(pFVar1 + lVar6 + 0xc) != 0.0)) {
        DisableContact(this,uVar5);
      }
      lVar6 = lVar6 + -0x18;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  return;
}

// PruneUnnecessaryContactPoints @ 1439dabb0

void __thiscall
Chaos::FContactTriangleCollector::PruneUnnecessaryContactPoints(FContactTriangleCollector *this)

{
  float fVar1;
  float fVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  uint uVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  bool bVar23;
  uint local_res8;
  
  if (1 < (this->TriangleContactPoints).ArrayNum) {
    RemoveDisabledContacts(this);
    uVar13 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    dVar12 = __real_3f847ae147ae147b;
    lVar17 = (longlong)(this->TriangleContactPointDatas).ArrayNum;
    dVar3 = this->DistanceTolerance;
    local_res8 = 0;
    if (0 < lVar17) {
      lVar19 = 0;
      lVar21 = 0;
      lVar22 = 0;
LAB_1439dac70:
      do {
        uVar15 = 0;
        if ((int)local_res8 < (this->TriangleContactPointDatas).ArrayNum) {
          uVar15 = ~local_res8 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar4 = (this->TriangleContactPointDatas).AllocatorInstance.Data;
        uVar15 = 0;
        if ((int)local_res8 < (this->TriangleContactPoints).ArrayNum) {
          uVar15 = ~local_res8 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar5 = (this->TriangleContactPoints).AllocatorInstance.Data;
        uVar15 = 0;
        if ((int)*(uint *)(pFVar4 + lVar22 + 8) < (this->ContactTriangles).ArrayNum) {
          uVar15 = ~*(uint *)(pFVar4 + lVar22 + 8) >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar20 = lVar19;
        lVar18 = lVar22;
        uVar15 = local_res8;
        lVar9 = lVar21;
        if (pFVar4[lVar22 + 0x10] != (FScriptContainerElement)0x0) {
          while (lVar11 = lVar18, lVar10 = lVar20, lVar9 = lVar9 + 1, lVar9 < lVar17) {
            uVar15 = uVar15 + 1;
            lVar20 = lVar10 + 0x58;
            lVar18 = lVar11 + 0x18;
            uVar16 = 0;
            if ((int)uVar15 < (this->TriangleContactPointDatas).ArrayNum) {
              uVar16 = ~uVar15 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar6 = (this->TriangleContactPointDatas).AllocatorInstance.Data;
            uVar16 = 0;
            if ((int)uVar15 < (this->TriangleContactPoints).ArrayNum) {
              uVar16 = ~uVar15 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar7 = (this->TriangleContactPoints).AllocatorInstance.Data;
            uVar16 = 0;
            if ((int)*(uint *)(pFVar6 + lVar11 + 0x20) < (this->ContactTriangles).ArrayNum) {
              uVar16 = ~*(uint *)(pFVar6 + lVar11 + 0x20) >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if ((pFVar6[lVar11 + 0x28] != (FScriptContainerElement)0x0) &&
               (((((*(int *)(pFVar4 + lVar22) != -1 && (*(int *)(pFVar4 + lVar22 + 4) == -1)) &&
                  (*(int *)(pFVar6 + lVar18) != -1)) &&
                 ((*(int *)(pFVar6 + lVar11 + 0x1c) == -1 &&
                  (*(int *)(pFVar4 + lVar22) == *(int *)(pFVar6 + lVar18))))) ||
                ((*(double *)(pFVar5 + lVar19 + 0x18) - *(double *)(pFVar7 + lVar10 + 0x70)) *
                 (*(double *)(pFVar5 + lVar19 + 0x18) - *(double *)(pFVar7 + lVar10 + 0x70)) +
                 (*(double *)(pFVar5 + lVar19 + 0x20) - *(double *)(pFVar7 + lVar10 + 0x78)) *
                 (*(double *)(pFVar5 + lVar19 + 0x20) - *(double *)(pFVar7 + lVar10 + 0x78)) +
                 (*(double *)(pFVar5 + lVar19 + 0x28) - *(double *)(pFVar7 + lVar10 + 0x80)) *
                 (*(double *)(pFVar5 + lVar19 + 0x28) - *(double *)(pFVar7 + lVar10 + 0x80)) <
                 dVar3 * dVar3)))) {
              fVar1 = *(float *)(pFVar4 + lVar22 + 0xc);
              fVar2 = *(float *)(pFVar6 + lVar11 + 0x24);
              if (dVar12 < (double)(float)((uint)(fVar1 - fVar2) & uVar13)) {
                bVar14 = fVar1 == fVar2;
                bVar23 = fVar1 < fVar2;
              }
              else {
                bVar14 = *(double *)(pFVar7 + lVar10 + 0xa0) == *(double *)(pFVar5 + lVar19 + 0x48);
                bVar23 = *(double *)(pFVar7 + lVar10 + 0xa0) < *(double *)(pFVar5 + lVar19 + 0x48);
              }
              if (bVar23 || bVar14) {
                DisableContact(this,local_res8);
                local_res8 = local_res8 + 1;
                lVar21 = lVar21 + 1;
                lVar22 = lVar22 + 0x18;
                lVar19 = lVar19 + 0x58;
                goto LAB_1439dac70;
              }
              DisableContact(this,uVar15);
            }
          }
        }
        local_res8 = local_res8 + 1;
        lVar21 = lVar21 + 1;
        lVar19 = lVar19 + 0x58;
        lVar22 = lVar22 + 0x18;
      } while (lVar21 < lVar17);
    }
  }
  return;
}

// ReduceManifoldContactPointsTriangeMesh @ 1439db090

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FContactTriangleCollector::ReduceManifoldContactPointsTriangeMesh
          (FContactTriangleCollector *this)

{
  int *piVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  code *pcVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  bool bVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  longlong lVar31;
  uint uVar32;
  uint uVar33;
  FScriptContainerElement *pFVar34;
  uint uVar35;
  longlong lVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  undefined4 uVar41;
  double dVar42;
  undefined4 uVar43;
  uint local_res8;
  longlong local_res18;
  
  SortContactPointsForPruning(this);
  if ((this->NumDisabledTriangleContactPoints != 0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumDisabledTriangleContactPoints == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\ContactTriangles.cpp"
                          ,0x27f,L""), bVar26)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  iVar28 = (this->TriangleContactPoints).ArrayNum;
  if (4 < iVar28) {
    lVar31 = 0x58;
    lVar36 = 1;
    uVar32 = 1;
    uVar41 = (undefined4)__real_bff0000000000000;
    uVar43 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    do {
      uVar27 = 0;
      uVar35 = uVar27;
      if ((int)uVar32 < iVar28) {
        uVar35 = ~uVar32 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar34 = (this->TriangleContactPoints).AllocatorInstance.Data;
      if (((this->TriangleContactPoints).ArrayNum < 1) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar9 = (this->TriangleContactPoints).AllocatorInstance.Data;
      iVar28 = (this->TriangleContactPoints).ArrayNum;
      dVar42 = (*(double *)(pFVar34 + lVar31 + 0x18) - *(double *)(pFVar9 + 0x18)) *
               (*(double *)(pFVar34 + lVar31 + 0x18) - *(double *)(pFVar9 + 0x18)) +
               (*(double *)(pFVar34 + lVar31 + 0x20) - *(double *)(pFVar9 + 0x20)) *
               (*(double *)(pFVar34 + lVar31 + 0x20) - *(double *)(pFVar9 + 0x20)) +
               (*(double *)(pFVar34 + lVar31 + 0x28) - *(double *)(pFVar9 + 0x28)) *
               (*(double *)(pFVar34 + lVar31 + 0x28) - *(double *)(pFVar9 + 0x28));
      bVar26 = dVar42 == (double)CONCAT44(uVar43,uVar41);
      bVar11 = dVar42 < (double)CONCAT44(uVar43,uVar41);
      if (dVar42 <= (double)CONCAT44(uVar43,uVar41)) {
        dVar42 = (double)CONCAT44(uVar43,uVar41);
      }
      uVar35 = uVar32;
      if (bVar11 || bVar26) {
        uVar35 = (uint)lVar36;
      }
      uVar32 = uVar32 + 1;
      lVar31 = lVar31 + 0x58;
      lVar36 = (longlong)(int)uVar35;
      uVar41 = SUB84(dVar42,0);
      uVar43 = (undefined4)((ulonglong)dVar42 >> 0x20);
    } while ((int)uVar32 < iVar28);
    piVar1 = &(this->TriangleContactPoints).ArrayNum;
    uVar32 = uVar27;
    if ((int)uVar35 < iVar28) {
      uVar32 = ~uVar35 >> 0x1f;
    }
    if ((uVar32 == 0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar26)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pFVar34 = (this->TriangleContactPoints).AllocatorInstance.Data + lVar36 * 0x58;
    if ((*piVar1 < 2) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar26)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pFVar9 = (this->TriangleContactPoints).AllocatorInstance.Data;
    uVar15 = *(undefined8 *)(pFVar34 + 8);
    uVar16 = *(undefined8 *)(pFVar9 + 0x58);
    uVar17 = *(undefined8 *)(pFVar9 + 0x60);
    uVar18 = *(undefined8 *)(pFVar9 + 0x68);
    uVar19 = *(undefined8 *)(pFVar9 + 0x70);
    uVar20 = *(undefined8 *)(pFVar9 + 0x78);
    uVar21 = *(undefined8 *)(pFVar9 + 0x80);
    uVar22 = *(undefined8 *)(pFVar9 + 0x88);
    uVar23 = *(undefined8 *)(pFVar9 + 0x90);
    uVar24 = *(undefined8 *)(pFVar9 + 0x98);
    uVar25 = *(undefined8 *)(pFVar9 + 0xa0);
    uVar2 = *(undefined8 *)(pFVar9 + 0xa8);
    *(undefined8 *)(pFVar9 + 0x58) = *(undefined8 *)pFVar34;
    *(undefined8 *)(pFVar9 + 0x60) = uVar15;
    uVar15 = *(undefined8 *)(pFVar34 + 0x18);
    *(undefined8 *)(pFVar9 + 0x68) = *(undefined8 *)(pFVar34 + 0x10);
    *(undefined8 *)(pFVar9 + 0x70) = uVar15;
    uVar15 = *(undefined8 *)(pFVar34 + 0x28);
    *(undefined8 *)(pFVar9 + 0x78) = *(undefined8 *)(pFVar34 + 0x20);
    *(undefined8 *)(pFVar9 + 0x80) = uVar15;
    uVar15 = *(undefined8 *)(pFVar34 + 0x38);
    *(undefined8 *)(pFVar9 + 0x88) = *(undefined8 *)(pFVar34 + 0x30);
    *(undefined8 *)(pFVar9 + 0x90) = uVar15;
    uVar15 = *(undefined8 *)(pFVar34 + 0x48);
    *(undefined8 *)(pFVar9 + 0x98) = *(undefined8 *)(pFVar34 + 0x40);
    *(undefined8 *)(pFVar9 + 0xa0) = uVar15;
    *(undefined8 *)(pFVar9 + 0xa8) = *(undefined8 *)(pFVar34 + 0x50);
    *(undefined8 *)pFVar34 = uVar16;
    *(undefined8 *)(pFVar34 + 8) = uVar17;
    *(undefined8 *)(pFVar34 + 0x10) = uVar18;
    *(undefined8 *)(pFVar34 + 0x18) = uVar19;
    *(undefined8 *)(pFVar34 + 0x20) = uVar20;
    *(undefined8 *)(pFVar34 + 0x28) = uVar21;
    *(undefined8 *)(pFVar34 + 0x30) = uVar22;
    *(undefined8 *)(pFVar34 + 0x38) = uVar23;
    *(undefined8 *)(pFVar34 + 0x40) = uVar24;
    *(undefined8 *)(pFVar34 + 0x48) = uVar25;
    *(undefined8 *)(pFVar34 + 0x50) = uVar2;
    uVar32 = uVar27;
    if ((int)uVar35 < (this->TriangleContactPointDatas).ArrayNum) {
      uVar32 = ~uVar35 >> 0x1f;
    }
    if ((uVar32 == 0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar26)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pFVar34 = (this->TriangleContactPointDatas).AllocatorInstance.Data;
    if (((this->TriangleContactPointDatas).ArrayNum < 2) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar26)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pFVar9 = (this->TriangleContactPointDatas).AllocatorInstance.Data;
    dVar14 = 0.0;
    uVar15 = *(undefined8 *)(pFVar34 + lVar36 * 0x18 + 8);
    dVar42 = 0.0;
    uVar16 = *(undefined8 *)(pFVar9 + 0x18);
    uVar17 = *(undefined8 *)(pFVar9 + 0x20);
    uVar2 = *(undefined8 *)(pFVar9 + 0x28);
    *(undefined8 *)(pFVar9 + 0x18) = *(undefined8 *)(pFVar34 + lVar36 * 0x18);
    *(undefined8 *)(pFVar9 + 0x20) = uVar15;
    *(undefined8 *)(pFVar9 + 0x28) = *(undefined8 *)(pFVar34 + lVar36 * 0x18 + 0x10);
    *(undefined8 *)(pFVar34 + lVar36 * 0x18) = uVar16;
    *(undefined8 *)(pFVar34 + lVar36 * 0x18 + 8) = uVar17;
    *(undefined8 *)(pFVar34 + lVar36 * 0x18 + 0x10) = uVar2;
    uVar32 = 2;
    if ((*piVar1 < 2) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar26)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pFVar34 = (this->TriangleContactPoints).AllocatorInstance.Data;
    if ((*piVar1 < 1) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar26)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    uVar30 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar35 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    pFVar9 = (this->TriangleContactPoints).AllocatorInstance.Data;
    dVar3 = *(double *)(pFVar34 + 0x80);
    dVar4 = *(double *)(pFVar34 + 0x78);
    dVar5 = *(double *)(pFVar34 + 0x70);
    uVar33 = 2;
    iVar28 = *piVar1;
    dVar6 = *(double *)(pFVar9 + 0x28);
    dVar7 = *(double *)(pFVar9 + 0x20);
    dVar8 = *(double *)(pFVar9 + 0x18);
    dVar13 = 0.0;
    if (2 < iVar28) {
      lVar31 = 0xb0;
      uVar29 = 2;
      do {
        if ((iVar28 < 1) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar34 = (this->TriangleContactPoints).AllocatorInstance.Data;
        uVar32 = uVar27;
        if ((int)uVar33 < *piVar1) {
          uVar32 = ~uVar33 >> 0x1f;
        }
        if ((uVar32 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar9 = (this->TriangleContactPoints).AllocatorInstance.Data;
        if ((*piVar1 < 1) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar10 = (this->TriangleContactPoints).AllocatorInstance.Data;
        uVar39 = SUB84(dVar42,0) & uVar35;
        uVar40 = (uint)((ulonglong)dVar42 >> 0x20) & uVar30;
        dVar13 = ((dVar3 - dVar6) *
                  (*(double *)(pFVar9 + lVar31 + 0x18) - *(double *)(pFVar10 + 0x18)) -
                 (*(double *)(pFVar9 + lVar31 + 0x28) - *(double *)(pFVar10 + 0x28)) *
                 (dVar5 - dVar8)) * *(double *)(pFVar34 + 0x38) +
                 ((dVar4 - dVar7) *
                  (*(double *)(pFVar9 + lVar31 + 0x28) - *(double *)(pFVar10 + 0x28)) -
                 (dVar3 - dVar6) *
                 (*(double *)(pFVar9 + lVar31 + 0x20) - *(double *)(pFVar10 + 0x20))) *
                 *(double *)(pFVar34 + 0x30) +
                 ((*(double *)(pFVar9 + lVar31 + 0x20) - *(double *)(pFVar10 + 0x20)) *
                  (dVar5 - dVar8) -
                 (dVar4 - dVar7) *
                 (*(double *)(pFVar9 + lVar31 + 0x18) - *(double *)(pFVar10 + 0x18))) *
                 *(double *)(pFVar34 + 0x40);
        uVar37 = SUB84(dVar13,0) & uVar35;
        uVar38 = (uint)((ulonglong)dVar13 >> 0x20) & uVar30;
        bVar26 = (double)CONCAT44(uVar38,uVar37) != (double)CONCAT44(uVar40,uVar39);
        bVar11 = (double)CONCAT44(uVar40,uVar39) <= (double)CONCAT44(uVar38,uVar37);
        if (bVar11 && bVar26) {
          dVar42 = dVar13;
        }
        iVar28 = *piVar1;
        uVar32 = uVar33;
        if ((NAN((double)CONCAT44(uVar38,uVar37)) || NAN((double)CONCAT44(uVar40,uVar39))) ||
            (!bVar11 || !bVar26)) {
          uVar32 = uVar29;
        }
        uVar33 = uVar33 + 1;
        lVar31 = lVar31 + 0x58;
        dVar13 = dVar42;
        uVar29 = uVar32;
      } while ((int)uVar33 < iVar28);
    }
    uVar27 = 0;
    uVar35 = uVar27;
    if ((int)uVar32 < iVar28) {
      uVar35 = ~uVar32 >> 0x1f;
    }
    if ((uVar35 == 0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar26)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    lVar31 = (longlong)(int)uVar32;
    pFVar34 = (this->TriangleContactPoints).AllocatorInstance.Data + lVar31 * 0x58;
    if (((this->TriangleContactPoints).ArrayNum < 3) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar26)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pFVar9 = (this->TriangleContactPoints).AllocatorInstance.Data;
    uVar15 = *(undefined8 *)(pFVar34 + 8);
    uVar16 = *(undefined8 *)(pFVar9 + 0xb0);
    uVar17 = *(undefined8 *)(pFVar9 + 0xb8);
    uVar18 = *(undefined8 *)(pFVar9 + 0xc0);
    uVar19 = *(undefined8 *)(pFVar9 + 200);
    uVar20 = *(undefined8 *)(pFVar9 + 0xd0);
    uVar21 = *(undefined8 *)(pFVar9 + 0xd8);
    uVar22 = *(undefined8 *)(pFVar9 + 0xe0);
    uVar23 = *(undefined8 *)(pFVar9 + 0xe8);
    uVar24 = *(undefined8 *)(pFVar9 + 0xf0);
    uVar25 = *(undefined8 *)(pFVar9 + 0xf8);
    uVar2 = *(undefined8 *)(pFVar9 + 0x100);
    *(undefined8 *)(pFVar9 + 0xb0) = *(undefined8 *)pFVar34;
    *(undefined8 *)(pFVar9 + 0xb8) = uVar15;
    uVar15 = *(undefined8 *)(pFVar34 + 0x18);
    *(undefined8 *)(pFVar9 + 0xc0) = *(undefined8 *)(pFVar34 + 0x10);
    *(undefined8 *)(pFVar9 + 200) = uVar15;
    uVar15 = *(undefined8 *)(pFVar34 + 0x28);
    *(undefined8 *)(pFVar9 + 0xd0) = *(undefined8 *)(pFVar34 + 0x20);
    *(undefined8 *)(pFVar9 + 0xd8) = uVar15;
    uVar15 = *(undefined8 *)(pFVar34 + 0x38);
    *(undefined8 *)(pFVar9 + 0xe0) = *(undefined8 *)(pFVar34 + 0x30);
    *(undefined8 *)(pFVar9 + 0xe8) = uVar15;
    uVar15 = *(undefined8 *)(pFVar34 + 0x48);
    *(undefined8 *)(pFVar9 + 0xf0) = *(undefined8 *)(pFVar34 + 0x40);
    *(undefined8 *)(pFVar9 + 0xf8) = uVar15;
    *(undefined8 *)(pFVar9 + 0x100) = *(undefined8 *)(pFVar34 + 0x50);
    *(undefined8 *)pFVar34 = uVar16;
    *(undefined8 *)(pFVar34 + 8) = uVar17;
    *(undefined8 *)(pFVar34 + 0x10) = uVar18;
    *(undefined8 *)(pFVar34 + 0x18) = uVar19;
    *(undefined8 *)(pFVar34 + 0x20) = uVar20;
    *(undefined8 *)(pFVar34 + 0x28) = uVar21;
    *(undefined8 *)(pFVar34 + 0x30) = uVar22;
    *(undefined8 *)(pFVar34 + 0x38) = uVar23;
    *(undefined8 *)(pFVar34 + 0x40) = uVar24;
    *(undefined8 *)(pFVar34 + 0x48) = uVar25;
    *(undefined8 *)(pFVar34 + 0x50) = uVar2;
    uVar35 = uVar27;
    if ((int)uVar32 < (this->TriangleContactPointDatas).ArrayNum) {
      uVar35 = ~uVar32 >> 0x1f;
    }
    if ((uVar35 == 0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar26)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pFVar34 = (this->TriangleContactPointDatas).AllocatorInstance.Data;
    if (((this->TriangleContactPointDatas).ArrayNum < 3) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar26)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pFVar9 = (this->TriangleContactPointDatas).AllocatorInstance.Data;
    uVar15 = *(undefined8 *)(pFVar34 + lVar31 * 0x18 + 8);
    uVar16 = *(undefined8 *)(pFVar9 + 0x30);
    uVar17 = *(undefined8 *)(pFVar9 + 0x38);
    uVar2 = *(undefined8 *)(pFVar9 + 0x40);
    *(undefined8 *)(pFVar9 + 0x30) = *(undefined8 *)(pFVar34 + lVar31 * 0x18);
    *(undefined8 *)(pFVar9 + 0x38) = uVar15;
    *(undefined8 *)(pFVar9 + 0x40) = *(undefined8 *)(pFVar34 + lVar31 * 0x18 + 0x10);
    *(undefined8 *)(pFVar34 + lVar31 * 0x18) = uVar16;
    *(undefined8 *)(pFVar34 + lVar31 * 0x18 + 8) = uVar17;
    *(undefined8 *)(pFVar34 + lVar31 * 0x18 + 0x10) = uVar2;
    if (dVar13 < 0.0) {
      if (((this->TriangleContactPoints).ArrayNum < 2) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar34 = (this->TriangleContactPoints).AllocatorInstance.Data;
      if (((this->TriangleContactPoints).ArrayNum < 1) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar9 = (this->TriangleContactPoints).AllocatorInstance.Data;
      uVar15 = *(undefined8 *)(pFVar34 + 0x60);
      uVar16 = *(undefined8 *)pFVar9;
      uVar17 = *(undefined8 *)(pFVar9 + 8);
      uVar18 = *(undefined8 *)(pFVar9 + 0x10);
      uVar19 = *(undefined8 *)(pFVar9 + 0x18);
      uVar20 = *(undefined8 *)(pFVar9 + 0x20);
      uVar21 = *(undefined8 *)(pFVar9 + 0x28);
      uVar22 = *(undefined8 *)(pFVar9 + 0x30);
      uVar23 = *(undefined8 *)(pFVar9 + 0x38);
      uVar24 = *(undefined8 *)(pFVar9 + 0x40);
      uVar25 = *(undefined8 *)(pFVar9 + 0x48);
      uVar2 = *(undefined8 *)(pFVar9 + 0x50);
      *(undefined8 *)pFVar9 = *(undefined8 *)(pFVar34 + 0x58);
      *(undefined8 *)(pFVar9 + 8) = uVar15;
      uVar15 = *(undefined8 *)(pFVar34 + 0x70);
      *(undefined8 *)(pFVar9 + 0x10) = *(undefined8 *)(pFVar34 + 0x68);
      *(undefined8 *)(pFVar9 + 0x18) = uVar15;
      uVar15 = *(undefined8 *)(pFVar34 + 0x80);
      *(undefined8 *)(pFVar9 + 0x20) = *(undefined8 *)(pFVar34 + 0x78);
      *(undefined8 *)(pFVar9 + 0x28) = uVar15;
      uVar15 = *(undefined8 *)(pFVar34 + 0x90);
      *(undefined8 *)(pFVar9 + 0x30) = *(undefined8 *)(pFVar34 + 0x88);
      *(undefined8 *)(pFVar9 + 0x38) = uVar15;
      uVar15 = *(undefined8 *)(pFVar34 + 0xa0);
      *(undefined8 *)(pFVar9 + 0x40) = *(undefined8 *)(pFVar34 + 0x98);
      *(undefined8 *)(pFVar9 + 0x48) = uVar15;
      *(undefined8 *)(pFVar9 + 0x50) = *(undefined8 *)(pFVar34 + 0xa8);
      *(undefined8 *)(pFVar34 + 0x58) = uVar16;
      *(undefined8 *)(pFVar34 + 0x60) = uVar17;
      *(undefined8 *)(pFVar34 + 0x68) = uVar18;
      *(undefined8 *)(pFVar34 + 0x70) = uVar19;
      *(undefined8 *)(pFVar34 + 0x78) = uVar20;
      *(undefined8 *)(pFVar34 + 0x80) = uVar21;
      *(undefined8 *)(pFVar34 + 0x88) = uVar22;
      *(undefined8 *)(pFVar34 + 0x90) = uVar23;
      *(undefined8 *)(pFVar34 + 0x98) = uVar24;
      *(undefined8 *)(pFVar34 + 0xa0) = uVar25;
      *(undefined8 *)(pFVar34 + 0xa8) = uVar2;
      if (((this->TriangleContactPointDatas).ArrayNum < 2) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar34 = (this->TriangleContactPointDatas).AllocatorInstance.Data;
      if (((this->TriangleContactPointDatas).ArrayNum < 1) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar9 = (this->TriangleContactPointDatas).AllocatorInstance.Data;
      uVar15 = *(undefined8 *)(pFVar34 + 0x20);
      uVar16 = *(undefined8 *)pFVar9;
      uVar17 = *(undefined8 *)(pFVar9 + 8);
      uVar2 = *(undefined8 *)(pFVar9 + 0x10);
      *(undefined8 *)pFVar9 = *(undefined8 *)(pFVar34 + 0x18);
      *(undefined8 *)(pFVar9 + 8) = uVar15;
      *(undefined8 *)(pFVar9 + 0x10) = *(undefined8 *)(pFVar34 + 0x28);
      *(undefined8 *)(pFVar34 + 0x18) = uVar16;
      *(undefined8 *)(pFVar34 + 0x20) = uVar17;
      *(undefined8 *)(pFVar34 + 0x28) = uVar2;
    }
    iVar28 = (this->TriangleContactPoints).ArrayNum;
    uVar32 = 3;
    uVar35 = 3;
    local_res8 = 3;
    if (3 < iVar28) {
      local_res18 = 0x108;
      do {
        uVar30 = 0;
        do {
          if (((this->TriangleContactPoints).ArrayNum < 1) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar34 = (this->TriangleContactPoints).AllocatorInstance.Data;
          uVar33 = (uVar30 + 1) % 3;
          uVar32 = uVar27;
          if ((int)uVar33 < (this->TriangleContactPoints).ArrayNum) {
            uVar32 = ~uVar33 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar9 = (this->TriangleContactPoints).AllocatorInstance.Data;
          lVar31 = (longlong)(int)uVar33 * 0x58;
          if (((this->TriangleContactPoints).ArrayNum <= (int)uVar30) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar10 = (this->TriangleContactPoints).AllocatorInstance.Data;
          dVar42 = *(double *)(pFVar9 + lVar31 + 0x28);
          dVar3 = *(double *)(pFVar9 + lVar31 + 0x20);
          dVar4 = *(double *)(pFVar9 + lVar31 + 0x18);
          lVar31 = (longlong)(int)uVar30 * 0x58;
          dVar5 = *(double *)(pFVar10 + lVar31 + 0x28);
          dVar6 = *(double *)(pFVar10 + lVar31 + 0x20);
          dVar7 = *(double *)(pFVar10 + lVar31 + 0x18);
          uVar32 = 0;
          if ((int)uVar35 < (this->TriangleContactPoints).ArrayNum) {
            uVar32 = ~uVar35 >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar9 = (this->TriangleContactPoints).AllocatorInstance.Data;
          if (((this->TriangleContactPoints).ArrayNum <= (int)uVar30) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar10 = (this->TriangleContactPoints).AllocatorInstance.Data;
          dVar42 = ((*(double *)(pFVar9 + local_res18 + 0x28) - *(double *)(pFVar10 + lVar31 + 0x28)
                    ) * (dVar4 - dVar7) -
                   (*(double *)(pFVar9 + local_res18 + 0x18) - *(double *)(pFVar10 + lVar31 + 0x18))
                   * (dVar42 - dVar5)) * *(double *)(pFVar34 + 0x38) +
                   ((*(double *)(pFVar9 + local_res18 + 0x20) - *(double *)(pFVar10 + lVar31 + 0x20)
                    ) * (dVar42 - dVar5) -
                   (*(double *)(pFVar9 + local_res18 + 0x28) - *(double *)(pFVar10 + lVar31 + 0x28))
                   * (dVar3 - dVar6)) * *(double *)(pFVar34 + 0x30) +
                   ((*(double *)(pFVar9 + local_res18 + 0x18) - *(double *)(pFVar10 + lVar31 + 0x18)
                    ) * (dVar3 - dVar6) -
                   (*(double *)(pFVar9 + local_res18 + 0x20) - *(double *)(pFVar10 + lVar31 + 0x20))
                   * (dVar4 - dVar7)) * *(double *)(pFVar34 + 0x40);
          uVar32 = uVar35;
          if (dVar42 <= dVar14) {
            uVar32 = local_res8;
            dVar42 = dVar14;
          }
          dVar14 = dVar42;
          uVar30 = uVar30 + 1;
          local_res8 = uVar32;
        } while (uVar30 < 3);
        local_res18 = local_res18 + 0x58;
        uVar35 = uVar35 + 1;
        iVar28 = (this->TriangleContactPoints).ArrayNum;
      } while ((int)uVar35 < iVar28);
    }
    uVar35 = 0;
    if ((int)uVar32 < iVar28) {
      uVar35 = ~uVar32 >> 0x1f;
    }
    if ((uVar35 == 0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar26)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    lVar31 = (longlong)(int)uVar32;
    pFVar34 = (this->TriangleContactPoints).AllocatorInstance.Data + lVar31 * 0x58;
    if (((this->TriangleContactPoints).ArrayNum < 4) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar26)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pFVar9 = (this->TriangleContactPoints).AllocatorInstance.Data;
    uVar15 = *(undefined8 *)(pFVar34 + 8);
    uVar16 = *(undefined8 *)(pFVar9 + 0x138);
    uVar17 = *(undefined8 *)(pFVar9 + 0x140);
    uVar18 = *(undefined8 *)(pFVar9 + 0x148);
    uVar19 = *(undefined8 *)(pFVar9 + 0x150);
    uVar20 = *(undefined8 *)(pFVar9 + 0x108);
    uVar21 = *(undefined8 *)(pFVar9 + 0x110);
    uVar22 = *(undefined8 *)(pFVar9 + 0x118);
    uVar23 = *(undefined8 *)(pFVar9 + 0x120);
    uVar24 = *(undefined8 *)(pFVar9 + 0x128);
    uVar25 = *(undefined8 *)(pFVar9 + 0x130);
    uVar2 = *(undefined8 *)(pFVar9 + 0x158);
    *(undefined8 *)(pFVar9 + 0x108) = *(undefined8 *)pFVar34;
    *(undefined8 *)(pFVar9 + 0x110) = uVar15;
    uVar15 = *(undefined8 *)(pFVar34 + 0x18);
    *(undefined8 *)(pFVar9 + 0x118) = *(undefined8 *)(pFVar34 + 0x10);
    *(undefined8 *)(pFVar9 + 0x120) = uVar15;
    uVar15 = *(undefined8 *)(pFVar34 + 0x28);
    *(undefined8 *)(pFVar9 + 0x128) = *(undefined8 *)(pFVar34 + 0x20);
    *(undefined8 *)(pFVar9 + 0x130) = uVar15;
    uVar15 = *(undefined8 *)(pFVar34 + 0x38);
    *(undefined8 *)(pFVar9 + 0x138) = *(undefined8 *)(pFVar34 + 0x30);
    *(undefined8 *)(pFVar9 + 0x140) = uVar15;
    uVar15 = *(undefined8 *)(pFVar34 + 0x48);
    *(undefined8 *)(pFVar9 + 0x148) = *(undefined8 *)(pFVar34 + 0x40);
    *(undefined8 *)(pFVar9 + 0x150) = uVar15;
    *(undefined8 *)(pFVar9 + 0x158) = *(undefined8 *)(pFVar34 + 0x50);
    *(undefined8 *)pFVar34 = uVar20;
    *(undefined8 *)(pFVar34 + 8) = uVar21;
    *(undefined8 *)(pFVar34 + 0x10) = uVar22;
    *(undefined8 *)(pFVar34 + 0x18) = uVar23;
    *(undefined8 *)(pFVar34 + 0x20) = uVar24;
    *(undefined8 *)(pFVar34 + 0x28) = uVar25;
    *(undefined8 *)(pFVar34 + 0x30) = uVar16;
    *(undefined8 *)(pFVar34 + 0x38) = uVar17;
    *(undefined8 *)(pFVar34 + 0x40) = uVar18;
    *(undefined8 *)(pFVar34 + 0x48) = uVar19;
    *(undefined8 *)(pFVar34 + 0x50) = uVar2;
    if ((int)uVar32 < (this->TriangleContactPointDatas).ArrayNum) {
      uVar27 = ~uVar32 >> 0x1f;
    }
    if ((uVar27 == 0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar26)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pFVar34 = (this->TriangleContactPointDatas).AllocatorInstance.Data;
    if (((this->TriangleContactPointDatas).ArrayNum < 4) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar26)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pFVar9 = (this->TriangleContactPointDatas).AllocatorInstance.Data;
    uVar15 = *(undefined8 *)(pFVar34 + lVar31 * 0x18 + 8);
    uVar16 = *(undefined8 *)(pFVar9 + 0x48);
    uVar17 = *(undefined8 *)(pFVar9 + 0x50);
    uVar2 = *(undefined8 *)(pFVar9 + 0x58);
    *(undefined8 *)(pFVar9 + 0x48) = *(undefined8 *)(pFVar34 + lVar31 * 0x18);
    *(undefined8 *)(pFVar9 + 0x50) = uVar15;
    *(undefined8 *)(pFVar9 + 0x58) = *(undefined8 *)(pFVar34 + lVar31 * 0x18 + 0x10);
    *(undefined8 *)(pFVar34 + lVar31 * 0x18) = uVar16;
    *(undefined8 *)(pFVar34 + lVar31 * 0x18 + 8) = uVar17;
    *(undefined8 *)(pFVar34 + lVar31 * 0x18 + 0x10) = uVar2;
    TArray<Chaos::TContactPoint<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->TriangleContactPoints,4,No);
    TArray<Chaos::FTriangleContactPointData,TSizedDefaultAllocator<32>_>::SetNum
              (&this->TriangleContactPointDatas,4,No);
  }
  return;
}

// RemoveDisabledContacts @ 1439dc820

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FContactTriangleCollector::RemoveDisabledContacts(FContactTriangleCollector *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
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
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  longlong local_res8;
  
  if (this->NumDisabledTriangleContactPoints != 0) {
    iVar3 = (this->TriangleContactPoints).ArrayNum;
    lVar20 = (longlong)iVar3;
    uVar21 = 0;
    uVar25 = 0;
    if (0 < iVar3) {
      lVar23 = 0;
      lVar24 = 0;
      local_res8 = 0;
      do {
        uVar19 = 0;
        if ((int)uVar21 < (this->TriangleContactPointDatas).ArrayNum) {
          uVar19 = ~uVar21 >> 0x1f;
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
        if ((this->TriangleContactPointDatas).AllocatorInstance.Data[lVar23 * 0x18 + 0x10] ==
            (FScriptContainerElement)0x0) {
          uVar21 = uVar21 + 1;
          lVar23 = lVar23 + 1;
          if (lVar23 < lVar20) {
            lVar22 = lVar23 * 0x18;
            do {
              uVar19 = 0;
              if ((int)uVar21 < (this->TriangleContactPointDatas).ArrayNum) {
                uVar19 = ~uVar21 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar18)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if ((this->TriangleContactPointDatas).AllocatorInstance.Data[lVar22 + 0x10] !=
                  (FScriptContainerElement)0x0) goto LAB_1439dc958;
              uVar21 = uVar21 + 1;
              lVar23 = lVar23 + 1;
              lVar22 = lVar22 + 0x18;
            } while (lVar23 < lVar20);
          }
          if (lVar23 == lVar20) break;
        }
LAB_1439dc958:
        if (uVar25 != uVar21) {
          uVar19 = 0;
          if ((int)uVar21 < (this->TriangleContactPointDatas).ArrayNum) {
            uVar19 = ~uVar21 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (this->TriangleContactPointDatas).AllocatorInstance.Data;
          pFVar1 = pFVar4 + lVar23 * 0x18;
          uVar6 = *(undefined4 *)pFVar1;
          uVar7 = *(undefined4 *)(pFVar1 + 4);
          uVar8 = *(undefined4 *)(pFVar1 + 8);
          uVar9 = *(undefined4 *)(pFVar1 + 0xc);
          uVar2 = *(undefined8 *)(pFVar4 + lVar23 * 0x18 + 0x10);
          uVar19 = 0;
          if ((int)uVar25 < (this->TriangleContactPointDatas).ArrayNum) {
            uVar19 = ~uVar25 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (this->TriangleContactPointDatas).AllocatorInstance.Data;
          pFVar1 = pFVar4 + lVar24;
          *(undefined4 *)pFVar1 = uVar6;
          *(undefined4 *)(pFVar1 + 4) = uVar7;
          *(undefined4 *)(pFVar1 + 8) = uVar8;
          *(undefined4 *)(pFVar1 + 0xc) = uVar9;
          *(undefined8 *)(pFVar4 + lVar24 + 0x10) = uVar2;
          uVar19 = 0;
          if ((int)uVar21 < (this->TriangleContactPoints).ArrayNum) {
            uVar19 = ~uVar21 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (this->TriangleContactPoints).AllocatorInstance.Data;
          lVar22 = lVar23 * 0x58;
          uVar10 = *(undefined8 *)(pFVar4 + lVar22 + 0x10);
          uVar11 = *(undefined8 *)(pFVar4 + lVar22 + 0x10 + 8);
          uVar12 = *(undefined8 *)(pFVar4 + lVar22 + 0x20);
          uVar13 = *(undefined8 *)(pFVar4 + lVar22 + 0x20 + 8);
          pFVar1 = pFVar4 + lVar22;
          uVar6 = *(undefined4 *)pFVar1;
          uVar7 = *(undefined4 *)(pFVar1 + 4);
          uVar8 = *(undefined4 *)(pFVar1 + 8);
          uVar9 = *(undefined4 *)(pFVar1 + 0xc);
          uVar14 = *(undefined8 *)(pFVar4 + lVar22 + 0x30);
          uVar15 = *(undefined8 *)(pFVar4 + lVar22 + 0x30 + 8);
          uVar16 = *(undefined8 *)(pFVar4 + lVar22 + 0x40);
          uVar17 = *(undefined8 *)(pFVar4 + lVar22 + 0x40 + 8);
          uVar2 = *(undefined8 *)(pFVar4 + lVar22 + 0x50);
          uVar19 = 0;
          if ((int)uVar25 < (this->TriangleContactPoints).ArrayNum) {
            uVar19 = ~uVar25 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (this->TriangleContactPoints).AllocatorInstance.Data;
          pFVar1 = pFVar4 + local_res8;
          *(undefined4 *)pFVar1 = uVar6;
          *(undefined4 *)(pFVar1 + 4) = uVar7;
          *(undefined4 *)(pFVar1 + 8) = uVar8;
          *(undefined4 *)(pFVar1 + 0xc) = uVar9;
          *(undefined8 *)(pFVar4 + local_res8 + 0x10) = uVar10;
          *(undefined8 *)(pFVar4 + local_res8 + 0x10 + 8) = uVar11;
          *(undefined8 *)(pFVar4 + local_res8 + 0x20) = uVar12;
          *(undefined8 *)(pFVar4 + local_res8 + 0x20 + 8) = uVar13;
          *(undefined8 *)(pFVar4 + local_res8 + 0x30) = uVar14;
          *(undefined8 *)(pFVar4 + local_res8 + 0x30 + 8) = uVar15;
          *(undefined8 *)(pFVar4 + local_res8 + 0x40) = uVar16;
          *(undefined8 *)(pFVar4 + local_res8 + 0x40 + 8) = uVar17;
          *(undefined8 *)(pFVar4 + local_res8 + 0x50) = uVar2;
        }
        local_res8 = local_res8 + 0x58;
        uVar25 = uVar25 + 1;
        lVar24 = lVar24 + 0x18;
        uVar21 = uVar21 + 1;
        lVar23 = lVar23 + 1;
      } while (lVar23 < lVar20);
    }
    TArray<Chaos::FTriangleContactPointData,TSizedDefaultAllocator<32>_>::SetNum
              (&this->TriangleContactPointDatas,uVar25,No);
    TArray<Chaos::TContactPoint<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->TriangleContactPoints,uVar25,No);
    this->NumDisabledTriangleContactPoints = 0;
  }
  return;
}

// SetNumContacts @ 1439decc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FContactTriangleCollector::SetNumContacts(FContactTriangleCollector *this,int param_1)

{
  TArray<Chaos::TContactPoint<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->TriangleContactPoints,param_1,No);
  TArray<Chaos::FTriangleContactPointData,TSizedDefaultAllocator<32>_>::SetNum
            (&this->TriangleContactPointDatas,param_1,No);
  return;
}

// SortContactPointsForPruning @ 1439df310

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FContactTriangleCollector::SortContactPointsForPruning(FContactTriangleCollector *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  TArray<int,TSizedDefaultAllocator<32>_> local_a8;
  TArray<Chaos::TContactPoint<double>,TSizedDefaultAllocator<32>_> local_98;
  TArray<Chaos::FTriangleContactPointData,TSizedDefaultAllocator<32>_> local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  RemoveDisabledContacts(this);
  iVar3 = (this->TriangleContactPoints).ArrayNum;
  if (1 < iVar3) {
    uVar13 = 0;
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ArrayNum = 0;
    local_a8.ArrayMax = 0;
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_a8,iVar3,Default);
    uVar12 = uVar13;
    uVar15 = uVar13;
    if (0 < (this->TriangleContactPoints).ArrayNum) {
      do {
        uVar11 = (uint)uVar12;
        uVar8 = 0;
        if ((int)uVar11 < local_a8.ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(uint *)(local_a8.AllocatorInstance.Data + uVar15) = uVar11;
        uVar12 = (ulonglong)(uVar11 + 1);
        uVar15 = uVar15 + 4;
      } while ((int)(uVar11 + 1) < (this->TriangleContactPoints).ArrayNum);
    }
    if (local_a8.ArrayNum < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar1 = local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayNum * 4;
    if ((local_a8.ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    std::
    _Sort_unchecked<int_*,_Chaos::FContactTriangleCollector::SortContactPointsForPruning_::__l5::<lambda_1>_>
              ((int *)local_a8.AllocatorInstance.Data,(int *)pFVar1,
               (longlong)pFVar1 - (longlong)local_a8.AllocatorInstance.Data >> 2,(<lambda_1>)this);
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 0;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 0;
    TArray<Chaos::TContactPoint<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&local_98,(this->TriangleContactPoints).ArrayNum,Default);
    TArray<Chaos::FTriangleContactPointData,TSizedDefaultAllocator<32>_>::SetNum
              (&local_88,(this->TriangleContactPoints).ArrayNum,Default);
    uVar12 = uVar13;
    uVar15 = uVar13;
    uVar16 = uVar13;
    if (0 < (this->TriangleContactPoints).ArrayNum) {
      do {
        uVar11 = (uint)uVar13;
        uVar14 = ~uVar11 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar11 < local_a8.ArrayNum) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar8 = *(uint *)(local_a8.AllocatorInstance.Data + uVar16);
        uVar9 = 0;
        if ((int)uVar8 < (this->TriangleContactPoints).ArrayNum) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->TriangleContactPoints).AllocatorInstance.Data;
        lVar10 = (longlong)(int)uVar8 * 0x58;
        local_68 = *(undefined8 *)(pFVar4 + lVar10 + 0x10);
        uStack_60 = *(undefined8 *)(pFVar4 + lVar10 + 0x10 + 8);
        local_58 = *(undefined8 *)(pFVar4 + lVar10 + 0x20);
        uStack_50 = *(undefined8 *)(pFVar4 + lVar10 + 0x20 + 8);
        pFVar1 = pFVar4 + lVar10;
        local_78 = *(undefined4 *)pFVar1;
        uStack_74 = *(undefined4 *)(pFVar1 + 4);
        uStack_70 = *(undefined4 *)(pFVar1 + 8);
        uStack_6c = *(undefined4 *)(pFVar1 + 0xc);
        local_48 = *(undefined8 *)(pFVar4 + lVar10 + 0x30);
        uStack_40 = *(undefined8 *)(pFVar4 + lVar10 + 0x30 + 8);
        local_38 = *(undefined8 *)(pFVar4 + lVar10 + 0x40);
        uStack_30 = *(undefined8 *)(pFVar4 + lVar10 + 0x40 + 8);
        uVar2 = *(undefined8 *)(pFVar4 + lVar10 + 0x50);
        uVar8 = 0;
        if ((int)uVar11 < local_98.ArrayNum) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar1 = local_98.AllocatorInstance.Data + uVar15;
        *(undefined4 *)pFVar1 = local_78;
        *(undefined4 *)(pFVar1 + 4) = uStack_74;
        *(undefined4 *)(pFVar1 + 8) = uStack_70;
        *(undefined4 *)(pFVar1 + 0xc) = uStack_6c;
        *(undefined8 *)(local_98.AllocatorInstance.Data + uVar15 + 0x10) = local_68;
        *(undefined8 *)(local_98.AllocatorInstance.Data + uVar15 + 0x10 + 8) = uStack_60;
        *(undefined8 *)(local_98.AllocatorInstance.Data + uVar15 + 0x20) = local_58;
        *(undefined8 *)(local_98.AllocatorInstance.Data + uVar15 + 0x20 + 8) = uStack_50;
        *(undefined8 *)(local_98.AllocatorInstance.Data + uVar15 + 0x30) = local_48;
        *(undefined8 *)(local_98.AllocatorInstance.Data + uVar15 + 0x30 + 8) = uStack_40;
        *(undefined8 *)(local_98.AllocatorInstance.Data + uVar15 + 0x40) = local_38;
        *(undefined8 *)(local_98.AllocatorInstance.Data + uVar15 + 0x40 + 8) = uStack_30;
        *(undefined8 *)(local_98.AllocatorInstance.Data + uVar15 + 0x50) = uVar2;
        uVar8 = 0;
        if ((int)uVar11 < local_a8.ArrayNum) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar8 = *(uint *)(local_a8.AllocatorInstance.Data + uVar16);
        uVar9 = 0;
        if ((int)uVar8 < (this->TriangleContactPointDatas).ArrayNum) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->TriangleContactPointDatas).AllocatorInstance.Data;
        pFVar1 = pFVar4 + (longlong)(int)uVar8 * 0x18;
        local_78 = *(undefined4 *)pFVar1;
        uStack_74 = *(undefined4 *)(pFVar1 + 4);
        uStack_70 = *(undefined4 *)(pFVar1 + 8);
        uStack_6c = *(undefined4 *)(pFVar1 + 0xc);
        uVar2 = *(undefined8 *)(pFVar4 + (longlong)(int)uVar8 * 0x18 + 0x10);
        uVar8 = 0;
        if ((int)uVar11 < local_88.ArrayNum) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar13 = (ulonglong)(uVar11 + 1);
        pFVar1 = local_88.AllocatorInstance.Data + uVar12;
        *(undefined4 *)pFVar1 = local_78;
        *(undefined4 *)(pFVar1 + 4) = uStack_74;
        *(undefined4 *)(pFVar1 + 8) = uStack_70;
        *(undefined4 *)(pFVar1 + 0xc) = uStack_6c;
        *(undefined8 *)(local_88.AllocatorInstance.Data + uVar12 + 0x10) = uVar2;
        uVar12 = uVar12 + 0x18;
        uVar15 = uVar15 + 0x58;
        uVar16 = uVar16 + 4;
      } while ((int)(uVar11 + 1) < (this->TriangleContactPoints).ArrayNum);
    }
    pFVar4 = (this->TriangleContactPoints).AllocatorInstance.Data;
    uVar6._0_4_ = (this->TriangleContactPoints).ArrayNum;
    uVar6._4_4_ = (this->TriangleContactPoints).ArrayMax;
    (this->TriangleContactPoints).AllocatorInstance.Data = local_98.AllocatorInstance.Data;
    (this->TriangleContactPoints).ArrayNum = local_98.ArrayNum;
    (this->TriangleContactPoints).ArrayMax = local_98.ArrayMax;
    pFVar1 = (this->TriangleContactPointDatas).AllocatorInstance.Data;
    uVar2._0_4_ = (this->TriangleContactPointDatas).ArrayNum;
    uVar2._4_4_ = (this->TriangleContactPointDatas).ArrayMax;
    (this->TriangleContactPointDatas).AllocatorInstance.Data = local_88.AllocatorInstance.Data;
    (this->TriangleContactPointDatas).ArrayNum = local_88.ArrayNum;
    (this->TriangleContactPointDatas).ArrayMax = local_88.ArrayMax;
    local_98.AllocatorInstance.Data = pFVar4;
    local_98._8_8_ = uVar6;
    local_88.AllocatorInstance.Data = pFVar1;
    local_88._8_8_ = uVar2;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
    if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
  }
  return;
}

// SortContactPointsForSolving @ 1439df7e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FContactTriangleCollector::SortContactPointsForSolving(FContactTriangleCollector *this)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  TContactPoint<double> *pTVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
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
  uint uVar20;
  int iVar21;
  longlong lVar22;
  uint uVar23;
  TTuple<double,int> *pTVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  double dVar29;
  <lambda_1> local_res8;
  TArray<TTuple<double,int>,TSizedDefaultAllocator<32>_> local_b8;
  TArray<Chaos::TContactPoint<double>,TSizedDefaultAllocator<32>_> local_a8;
  double local_98;
  uint uStack_90;
  undefined4 uStack_8c;
  ulonglong uVar24;
  
  RemoveDisabledContacts(this);
  if (1 < (this->TriangleContactPoints).ArrayNum) {
    uVar26 = 0;
    (this->TriangleContactPointDatas).ArrayNum = 0;
    if ((this->TriangleContactPointDatas).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->TriangleContactPointDatas).AllocatorInstance,0,
                 &(this->TriangleContactPointDatas).ArrayMax);
    }
    iVar21 = (this->TriangleContactPoints).ArrayNum;
    if (bChaos_Collision_MeshManifoldSortByDistance == false) {
      if ((iVar21 < 1) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar21 = (this->TriangleContactPoints).ArrayNum;
      pFVar2 = (this->TriangleContactPoints).AllocatorInstance.Data;
      if ((iVar21 < 1) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar3 = (TContactPoint<double> *)(this->TriangleContactPoints).AllocatorInstance.Data;
      lVar22 = (longlong)iVar21 * 0x58;
      std::
      _Sort_unchecked<Chaos::TContactPoint<double>_*,_Chaos::FContactTriangleCollector::SortContactPointsForSolving_::__l14::<lambda_2>_>
                (pTVar3,(TContactPoint<double> *)(pFVar2 + lVar22),
                 (longlong)(pFVar2 + (lVar22 - (longlong)pTVar3)) / 0x58,(<lambda_2>)local_res8);
    }
    else {
      local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.ArrayNum = 0;
      local_b8.ArrayMax = 0;
      TArray<TTuple<double,int>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&local_b8,iVar21,Default);
      iVar21 = (this->TriangleContactPoints).ArrayNum;
      uVar18 = 0;
      uVar24 = uVar26;
      uVar27 = uVar26;
      uVar28 = uVar26;
      if (0 < iVar21) {
        do {
          uVar23 = (uint)uVar24;
          uVar19 = 0;
          if ((int)uVar23 < iVar21) {
            uVar19 = ~uVar23 >> 0x1f;
          }
          if ((uVar19 == 0) &&
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
          pFVar2 = (this->TriangleContactPoints).AllocatorInstance.Data;
          dVar29 = *(double *)(pFVar2 + uVar27 + 0x38) * *(double *)(pFVar2 + uVar27 + 0x20) +
                   *(double *)(pFVar2 + uVar27 + 0x18) * *(double *)(pFVar2 + uVar27 + 0x30) +
                   *(double *)(pFVar2 + uVar27 + 0x40) * *(double *)(pFVar2 + uVar27 + 0x28);
          uVar19 = uVar18;
          if ((int)uVar23 < local_b8.ArrayNum) {
            uVar19 = ~uVar23 >> 0x1f;
          }
          dVar5 = *(double *)(pFVar2 + uVar27 + 0x20) - *(double *)(pFVar2 + uVar27 + 0x38) * dVar29
          ;
          dVar6 = *(double *)(pFVar2 + uVar27 + 0x18) - *(double *)(pFVar2 + uVar27 + 0x30) * dVar29
          ;
          dVar29 = *(double *)(pFVar2 + uVar27 + 0x28) -
                   *(double *)(pFVar2 + uVar27 + 0x40) * dVar29;
          local_98 = dVar6 * dVar6 + dVar5 * dVar5 + dVar29 * dVar29;
          uStack_90 = uVar23;
          if ((uVar19 == 0) &&
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
          *(double *)(local_b8.AllocatorInstance.Data + uVar28) = local_98;
          *(ulonglong *)(local_b8.AllocatorInstance.Data + uVar28 + 8) =
               CONCAT44(uStack_8c,uStack_90);
          iVar21 = (this->TriangleContactPoints).ArrayNum;
          uVar24 = (ulonglong)(uVar23 + 1);
          uVar27 = uVar27 + 0x58;
          uVar28 = uVar28 + 0x10;
        } while ((int)(uVar23 + 1) < iVar21);
      }
      if (local_b8.ArrayNum < 1) {
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pTVar25 = (TTuple<double,int> *)
                (local_b8.AllocatorInstance.Data + (longlong)local_b8.ArrayNum * 0x10);
      if ((local_b8.ArrayNum < 1) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      std::
      _Sort_unchecked<TTuple<double,int>_*,_Chaos::FContactTriangleCollector::SortContactPointsForSolving_::__l8::<lambda_1>_>
                ((TTuple<double,int> *)local_b8.AllocatorInstance.Data,pTVar25,
                 (longlong)pTVar25 - (longlong)local_b8.AllocatorInstance.Data >> 4,local_res8);
      local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.ArrayNum = 0;
      local_a8.ArrayMax = 0;
      TArray<Chaos::TContactPoint<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&local_a8,(this->TriangleContactPoints).ArrayNum,Default);
      uVar24 = uVar26;
      uVar27 = uVar26;
      if (0 < (this->TriangleContactPoints).ArrayNum) {
        do {
          uVar23 = (uint)uVar26;
          uVar19 = uVar18;
          if ((int)uVar23 < local_b8.ArrayNum) {
            uVar19 = ~uVar23 >> 0x1f;
          }
          if ((uVar19 == 0) &&
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
          uVar19 = *(uint *)(local_b8.AllocatorInstance.Data + uVar24 + 8);
          uVar20 = uVar18;
          if ((int)uVar19 < (this->TriangleContactPoints).ArrayNum) {
            uVar20 = ~uVar19 >> 0x1f;
          }
          if ((uVar20 == 0) &&
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
          pFVar2 = (this->TriangleContactPoints).AllocatorInstance.Data;
          lVar22 = (longlong)(int)uVar19 * 0x58;
          uVar7 = *(undefined8 *)(pFVar2 + lVar22);
          uVar8 = *(undefined8 *)(pFVar2 + lVar22 + 8);
          uVar9 = *(undefined8 *)(pFVar2 + lVar22 + 0x10);
          uVar10 = *(undefined8 *)(pFVar2 + lVar22 + 0x10 + 8);
          uVar11 = *(undefined8 *)(pFVar2 + lVar22 + 0x20);
          uVar12 = *(undefined8 *)(pFVar2 + lVar22 + 0x20 + 8);
          uVar13 = *(undefined8 *)(pFVar2 + lVar22 + 0x30);
          uVar14 = *(undefined8 *)(pFVar2 + lVar22 + 0x30 + 8);
          uVar15 = *(undefined8 *)(pFVar2 + lVar22 + 0x40);
          uVar16 = *(undefined8 *)(pFVar2 + lVar22 + 0x40 + 8);
          uVar1 = *(undefined8 *)(pFVar2 + lVar22 + 0x50);
          uVar19 = uVar18;
          if ((int)uVar23 < local_a8.ArrayNum) {
            uVar19 = ~uVar23 >> 0x1f;
          }
          if ((uVar19 == 0) &&
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
          uVar26 = (ulonglong)(uVar23 + 1);
          *(undefined8 *)(local_a8.AllocatorInstance.Data + uVar27) = uVar7;
          *(undefined8 *)(local_a8.AllocatorInstance.Data + uVar27 + 8) = uVar8;
          *(undefined8 *)(local_a8.AllocatorInstance.Data + uVar27 + 0x10) = uVar9;
          *(undefined8 *)(local_a8.AllocatorInstance.Data + uVar27 + 0x10 + 8) = uVar10;
          *(undefined8 *)(local_a8.AllocatorInstance.Data + uVar27 + 0x20) = uVar11;
          *(undefined8 *)(local_a8.AllocatorInstance.Data + uVar27 + 0x20 + 8) = uVar12;
          *(undefined8 *)(local_a8.AllocatorInstance.Data + uVar27 + 0x30) = uVar13;
          *(undefined8 *)(local_a8.AllocatorInstance.Data + uVar27 + 0x30 + 8) = uVar14;
          *(undefined8 *)(local_a8.AllocatorInstance.Data + uVar27 + 0x40) = uVar15;
          *(undefined8 *)(local_a8.AllocatorInstance.Data + uVar27 + 0x40 + 8) = uVar16;
          *(undefined8 *)(local_a8.AllocatorInstance.Data + uVar27 + 0x50) = uVar1;
          uVar24 = uVar24 + 0x10;
          uVar27 = uVar27 + 0x58;
        } while ((int)(uVar23 + 1) < (this->TriangleContactPoints).ArrayNum);
      }
      pFVar2 = (this->TriangleContactPoints).AllocatorInstance.Data;
      uVar1._0_4_ = (this->TriangleContactPoints).ArrayNum;
      uVar1._4_4_ = (this->TriangleContactPoints).ArrayMax;
      (this->TriangleContactPoints).AllocatorInstance.Data = local_a8.AllocatorInstance.Data;
      (this->TriangleContactPoints).ArrayNum = local_a8.ArrayNum;
      (this->TriangleContactPoints).ArrayMax = local_a8.ArrayMax;
      local_a8.AllocatorInstance.Data = pFVar2;
      local_a8._8_8_ = uVar1;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      if ((TTuple<double,int> *)local_b8.AllocatorInstance.Data != (TTuple<double,int> *)0x0) {
        FMemory::Free(local_b8.AllocatorInstance.Data);
      }
    }
  }
  return;
}

