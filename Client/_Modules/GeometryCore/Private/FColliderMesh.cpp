// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 10

// FColliderMesh @ 143451080

FColliderMesh * __thiscall
UE::Geometry::FColliderMesh::FColliderMesh
          (FColliderMesh *this,FDynamicMesh3 *param_1,FBuildOptions *param_2)

{
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vertices).ArrayNum = 0;
  (this->Vertices).ArrayMax = 0;
  (this->Triangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Triangles).ArrayNum = 0;
  (this->Triangles).ArrayMax = 0;
  (this->SourceVertexIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceVertexIDs).ArrayNum = 0;
  (this->SourceVertexIDs).ArrayMax = 0;
  (this->SourceTriangleIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceTriangleIDs).ArrayNum = 0;
  (this->SourceTriangleIDs).ArrayMax = 0;
  TMeshAABBTree3<UE::Geometry::FColliderMesh>::TMeshAABBTree3<UE::Geometry::FColliderMesh>
            (&this->AABBTree);
  Initialize(this,param_1,param_2);
  return this;
}

// FColliderMesh @ 1434510f0

FColliderMesh * __thiscall UE::Geometry::FColliderMesh::FColliderMesh(FColliderMesh *this)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  
  (this->SourceVertexIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->SourceVertexIDs).ArrayNum;
  (this->SourceTriangleIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar8 = &(this->SourceVertexIDs).ArrayMax;
  (this->Vertices).ArrayNum = 0;
  piVar2 = &(this->Vertices).ArrayNum;
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->Vertices).ArrayMax;
  *piVar3 = 0;
  piVar4 = &(this->Triangles).ArrayNum;
  *piVar8 = 0;
  piVar5 = &(this->SourceTriangleIDs).ArrayNum;
  (this->Triangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar9 = &(this->SourceTriangleIDs).ArrayMax;
  *piVar4 = 0;
  (this->Triangles).ArrayMax = 0;
  *piVar1 = 0;
  *piVar5 = 0;
  *piVar9 = 0;
  TMeshAABBTree3<UE::Geometry::FColliderMesh>::TMeshAABBTree3<UE::Geometry::FColliderMesh>
            (&this->AABBTree);
  iVar6 = *piVar2;
  if (iVar6 < 0) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,-iVar6,(ForAnyElementType *)this,piVar2,piVar3);
  }
  else if (0 < iVar6) {
    *piVar2 = *piVar2 - iVar6;
  }
  iVar6 = *piVar1;
  if (iVar6 < 0) {
    iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,-iVar6,&(this->SourceVertexIDs).AllocatorInstance,piVar1,piVar8);
    memset((this->SourceVertexIDs).AllocatorInstance.Data + (longlong)iVar7 * 4,0,
           (longlong)-iVar6 << 2);
  }
  else if (0 < iVar6) {
    *piVar1 = *piVar1 - iVar6;
  }
  iVar6 = *piVar4;
  if (iVar6 < 0) {
    iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,-iVar6,&(this->Triangles).AllocatorInstance,piVar4,
                       &(this->Triangles).ArrayMax);
    DefaultConstructItems<UE::Geometry::FIndex3i,int>
              ((this->Triangles).AllocatorInstance.Data + (longlong)iVar7 * 0xc,-iVar6);
  }
  else if (0 < iVar6) {
    *piVar4 = *piVar4 - iVar6;
  }
  iVar6 = *piVar5;
  if (iVar6 < 0) {
    iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,-iVar6,&(this->SourceTriangleIDs).AllocatorInstance,piVar5,piVar9);
    memset((this->SourceTriangleIDs).AllocatorInstance.Data + (longlong)iVar7 * 4,0,
           (longlong)-iVar6 << 2);
  }
  else if (0 < iVar6) {
    *piVar5 = *piVar5 - iVar6;
  }
  this->bSourceWasCompactT = true;
  this->bSourceWasCompactV = true;
  (this->AABBTree).MeshChangeStamp = 0;
  (this->AABBTree).Mesh = this;
  TMeshAABBTree3<UE::Geometry::FColliderMesh>::BuildTopDown(&this->AABBTree,false);
  (this->AABBTree).MeshChangeStamp = 0;
  return this;
}

// FindNearestHitTriangle @ 1434b92b0

bool __thiscall
UE::Geometry::FColliderMesh::FindNearestHitTriangle
          (FColliderMesh *this,TRay<double> *param_1,double *param_2,int *param_3,
          TVector<double> *param_4,FQueryOptions *param_5)

{
  undefined1 uVar1;
  
  if ((-1 < (this->AABBTree).RootIndex) && ((this->AABBTree).MeshChangeStamp == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001434b92cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((this->AABBTree)._padding_ + 0x30))();
    return (bool)uVar1;
  }
  return false;
}

// FindNearestTriangle @ 1434b94a0

int __thiscall
UE::Geometry::FColliderMesh::FindNearestTriangle
          (FColliderMesh *this,TVector<double> *param_1,double *param_2,FQueryOptions *param_3)

{
  int iVar1;
  
  if ((-1 < (this->AABBTree).RootIndex) && ((this->AABBTree).MeshChangeStamp == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001434b94b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)((this->AABBTree)._padding_ + 0x20))();
    return iVar1;
  }
  return -1;
}

// GetRawAABBTreeUnsafe @ 1434c4720

TMeshAABBTree3<UE::Geometry::FColliderMesh> * __thiscall
UE::Geometry::FColliderMesh::GetRawAABBTreeUnsafe(FColliderMesh *this)

{
  return &this->AABBTree;
}

// GetSourceTriangleID @ 1434c4970

int __thiscall UE::Geometry::FColliderMesh::GetSourceTriangleID(FColliderMesh *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (this->bSourceWasCompactT != false) {
    return param_1;
  }
  if ((-1 < param_1) && (param_1 < (this->SourceTriangleIDs).ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    return *(int *)((this->SourceTriangleIDs).AllocatorInstance.Data + (longlong)param_1 * 4);
  }
  return -1;
}

// GetSourceVertexID @ 1434c4a00

int __thiscall UE::Geometry::FColliderMesh::GetSourceVertexID(FColliderMesh *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (this->bSourceWasCompactV != false) {
    return param_1;
  }
  if ((-1 < param_1) && (param_1 < (this->SourceVertexIDs).ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    return *(int *)((this->SourceVertexIDs).AllocatorInstance.Data + (longlong)param_1 * 4);
  }
  return -1;
}

// GetTriVertices @ 1434c8510

void __thiscall
UE::Geometry::FColliderMesh::GetTriVertices
          (FColliderMesh *this,int param_1,TVector<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4)

{
  longlong lVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  int local_28;
  int iStack_24;
  
  uVar8 = 0;
  if (param_1 < (this->Triangles).ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if (uVar8 == 0) {
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
  pFVar3 = (this->Triangles).AllocatorInstance.Data;
  lVar1 = *(longlong *)(pFVar3 + (longlong)param_1 * 0xc);
  iVar2 = *(int *)(pFVar3 + (longlong)param_1 * 0xc + 8);
  local_28 = (int)lVar1;
  if (local_28 < 0 || (this->Vertices).ArrayNum <= local_28) {
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
  pFVar4 = (this->Vertices).AllocatorInstance.Data;
  iStack_24 = (int)((ulonglong)lVar1 >> 0x20);
  pFVar3 = pFVar4 + (longlong)local_28 * 0x18;
  dVar6 = *(double *)(pFVar3 + 8);
  (param_2->field0_0x0)._s_0.X = *(double *)pFVar3;
  (param_2->field0_0x0)._s_0.Y = dVar6;
  (param_2->field0_0x0)._s_0.Z = *(double *)(pFVar4 + (longlong)local_28 * 0x18 + 0x10);
  if (lVar1 < 0 || (this->Vertices).ArrayNum <= iStack_24) {
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
  pFVar4 = (this->Vertices).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iStack_24 * 0x18;
  dVar6 = *(double *)(pFVar3 + 8);
  (param_3->field0_0x0)._s_0.X = *(double *)pFVar3;
  (param_3->field0_0x0)._s_0.Y = dVar6;
  (param_3->field0_0x0)._s_0.Z = *(double *)(pFVar4 + (longlong)iStack_24 * 0x18 + 0x10);
  if (iVar2 < 0 || (this->Vertices).ArrayNum <= iVar2) {
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
  pFVar4 = (this->Vertices).AllocatorInstance.Data;
  pFVar3 = pFVar4 + (longlong)iVar2 * 0x18;
  dVar6 = *(double *)(pFVar3 + 8);
  (param_4->field0_0x0)._s_0.X = *(double *)pFVar3;
  (param_4->field0_0x0)._s_0.Y = dVar6;
  (param_4->field0_0x0)._s_0.Z = *(double *)(pFVar4 + (longlong)iVar2 * 0x18 + 0x10);
  return;
}

// Initialize @ 1434cf1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FColliderMesh::Initialize
          (FColliderMesh *this,FDynamicMesh3 *param_1,FBuildOptions *param_2)

{
  FRefCountVector *pFVar1;
  int *piVar2;
  undefined8 *puVar3;
  short sVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined4 uVar8;
  FBuildOptions *pFVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  uint uVar14;
  undefined8 uVar15;
  FFunctionStorage *pFVar16;
  undefined ***pppuVar17;
  longlong *plVar18;
  longlong *plVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  FRefCountVector *pFVar23;
  longlong lVar24;
  longlong lVar25;
  int iVar26;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar27;
  FDynamicMesh3 *pFVar28;
  int *piVar29;
  undefined1 auStackY_418 [32];
  uint local_3c8;
  uint local_3c4;
  undefined8 local_3c0;
  uint local_3b8;
  undefined8 local_3b0;
  uint uStack_3a8;
  uint uStack_3a4;
  TArray<int,TSizedDefaultAllocator<32>_> local_3a0;
  FDynamicMesh3 *local_390;
  IndexIterator local_388;
  FBuildOptions *local_378;
  int local_370 [2];
  uint local_368 [2];
  undefined8 local_360;
  undefined4 local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  IndexIterator local_320;
  code *local_308;
  undefined **local_2f8;
  FDynamicMesh3 *local_2f0;
  undefined ***local_2e0;
  code *local_2d8;
  undefined **local_2c8;
  FDynamicMesh3 *local_2c0;
  undefined ***local_2b0;
  code *local_2a8 [2];
  FFunctionStorage local_298;
  code *local_278 [2];
  FFunctionStorage local_268;
  FRefCountVector *local_248 [2];
  IndexIterator local_238;
  BaseIterator local_228;
  code *local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  longlong *plStack_1f0;
  code *local_1e8 [2];
  longlong local_1d8 [3];
  longlong *local_1c0;
  FRefCountVector *local_1b8;
  BaseIterator local_1a8;
  code *local_198 [2];
  longlong local_188 [3];
  longlong *local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  uint uStack_160;
  uint uStack_15c;
  code *local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  longlong *plStack_130;
  code *local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  longlong *plStack_100;
  code *local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  longlong *plStack_d0;
  undefined1 local_c8 [40];
  longlong *local_a0;
  FRefCountVector *local_98;
  IndexIterator local_88;
  undefined1 local_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_418;
  pFVar23 = &param_1->TriangleRefCounts;
  pFVar1 = &param_1->VertexRefCounts;
  this->bSourceWasCompactV =
       (param_1->VertexRefCounts).FreeIndices.CurBlock * 0x200 +
       (param_1->VertexRefCounts).FreeIndices.CurBlockUsed == 0;
  this->bSourceWasCompactT =
       (param_1->TriangleRefCounts).FreeIndices.CurBlock * 0x200 +
       (param_1->TriangleRefCounts).FreeIndices.CurBlockUsed == 0;
  uVar22 = (param_1->VertexRefCounts).UsedCount;
  local_3b0 = pFVar23;
  local_390 = param_1;
  local_378 = param_2;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
  }
  piVar29 = &(this->Vertices).ArrayMax;
  if ((this->Vertices).ArrayMax < (int)uVar22) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar22,(ForAnyElementType *)this,(this->Vertices).ArrayNum,piVar29);
  }
  if ((param_2->bBuildVertexMap != false) && (this->bSourceWasCompactV == false)) {
    if ((this->SourceVertexIDs).ArrayMax < (int)uVar22) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar22,&(this->SourceVertexIDs).AllocatorInstance,
                 (this->SourceVertexIDs).ArrayNum,&(this->SourceVertexIDs).ArrayMax);
    }
  }
  uVar22 = (param_1->TriangleRefCounts).UsedCount;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
  }
  if ((this->Triangles).ArrayMax < (int)uVar22) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar22,&(this->Triangles).AllocatorInstance,(this->Triangles).ArrayNum,
               &(this->Triangles).ArrayMax);
  }
  if ((local_378->bBuildTriangleMap != false) && (this->bSourceWasCompactT == false)) {
    if ((this->SourceTriangleIDs).ArrayMax < (int)uVar22) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar22,&(this->SourceTriangleIDs).AllocatorInstance,
                 (this->SourceTriangleIDs).ArrayNum,&(this->SourceTriangleIDs).ArrayMax);
    }
  }
  local_3a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a0.ArrayNum = 0;
  local_3a0.ArrayMax = 0;
  if (this->bSourceWasCompactV == false) {
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum
              (&local_3a0,
               (pFVar1->RefCounts).CurBlock * 0x200 +
               (param_1->VertexRefCounts).RefCounts.CurBlockUsed,Default);
    FRefCountVector::IndexIterator::IndexIterator
              (&local_388,pFVar1,0,
               (pFVar1->RefCounts).CurBlock * 0x200 +
               (param_1->VertexRefCounts).RefCounts.CurBlockUsed);
    iVar26 = (pFVar1->RefCounts).CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
    FRefCountVector::IndexIterator::IndexIterator(&local_320,pFVar1,iVar26,iVar26);
    pFVar9 = local_378;
    pFVar28 = local_390;
    if (local_388._8_4_ != local_320._8_4_) {
      do {
        uVar8 = local_388._8_4_;
        local_3c8 = local_388._8_4_;
        iVar26 = (this->Vertices).ArrayNum;
        lVar24 = (longlong)(int)local_388._8_4_;
        uVar22 = 0;
        if ((int)local_388._8_4_ < local_3a0.ArrayNum) {
          uVar22 = (uint)~local_388._8_4_ >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(int *)(local_3a0.AllocatorInstance.Data + lVar24 * 4) = iVar26;
        lVar24 = *(longlong *)
                  ((pFVar28->Vertices).Blocks.AllocatorInstance.Data +
                  (ulonglong)(local_3c8 >> 9) * 8);
        pFVar5 = (this->Vertices).AllocatorInstance.Data;
        puVar3 = (undefined8 *)(lVar24 + (ulonglong)(local_3c8 & 0x1ff) * 0x18);
        local_350 = *puVar3;
        uStack_348 = puVar3[1];
        local_340 = *(undefined8 *)(lVar24 + 0x10 + (ulonglong)(local_3c8 & 0x1ff) * 0x18);
        if (((pFVar5 <= (FScriptContainerElement *)&local_350) &&
            ((FScriptContainerElement *)&local_350 < pFVar5 + (longlong)*piVar29 * 0x18)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar26 = (this->Vertices).ArrayNum;
        if (iVar26 == *piVar29) {
          iVar26 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,(ForAnyElementType *)this,piVar29);
        }
        (this->Vertices).ArrayNum = iVar26 + 1;
        pFVar6 = (this->Vertices).AllocatorInstance.Data;
        pFVar5 = pFVar6 + (longlong)iVar26 * 0x18;
        *(undefined8 *)pFVar5 = local_350;
        *(undefined8 *)(pFVar5 + 8) = uStack_348;
        *(undefined8 *)(pFVar6 + (longlong)iVar26 * 0x18 + 0x10) = local_340;
        if (pFVar9->bBuildVertexMap != false) {
          pFVar5 = (this->SourceVertexIDs).AllocatorInstance.Data;
          if (((pFVar5 <= (FScriptContainerElement *)&local_3c8) &&
              ((FScriptContainerElement *)&local_3c8 <
               pFVar5 + (longlong)(this->SourceVertexIDs).ArrayMax * 4)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar26 = (this->SourceVertexIDs).ArrayNum;
          piVar2 = &(this->SourceVertexIDs).ArrayMax;
          if (iVar26 == *piVar2) {
            iVar26 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&(this->SourceVertexIDs).AllocatorInstance,piVar2);
          }
          (this->SourceVertexIDs).ArrayNum = iVar26 + 1;
          *(uint *)((this->SourceVertexIDs).AllocatorInstance.Data + (longlong)iVar26 * 4) =
               local_3c8;
        }
        local_388._8_4_ = uVar8 + 1;
        if ((int)local_388._8_4_ < (int)local_388._12_4_) {
          do {
            lVar24 = (ulonglong)(local_388._8_4_ & 0x1ff) * 2;
            pFVar28 = local_390;
            if ((*(short *)(lVar24 + *(longlong *)
                                      (*(longlong *)(local_388._0_8_ + 8) +
                                      (ulonglong)((uint)local_388._8_4_ >> 9) * 8)) != 0) &&
               (*(short *)(lVar24 + *(longlong *)
                                     (*(longlong *)(local_388._0_8_ + 8) +
                                     (ulonglong)((uint)local_388._8_4_ >> 9) * 8)) != -1)) break;
            local_388._8_4_ = local_388._8_4_ + 1;
          } while ((int)local_388._8_4_ < (int)local_388._12_4_);
        }
        pFVar23 = local_3b0;
      } while (local_388._8_4_ != local_320._8_4_);
    }
  }
  else {
    local_2e0 = (undefined ***)0x0;
    local_2f8 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__1__VerticesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__MappedEnumerable_U__TVector_N_Math_UE___FRefCountVector_45_XZ__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_2f0 = local_390;
    local_308 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VerticesItr'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
                ::Call;
    local_2a8[0] = Core::Private::Function::
                   TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::VerticesItr'::__l2::<lambda_1>,UE::Math::TVector<double>,int>
                   ::Call;
    local_298.HeapAllocation = (FFunctionStorage *)0x0;
    Core::Private::Function::
    TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::VerticesItr'::__l2::<lambda_1>,0,0>::
    CloneToEmptyStorage(&local_2f8,&local_298);
    local_c8._0_8_ = 0;
    local_a0 = (longlong *)0x0;
    local_98 = pFVar1;
    TFunction<UE::Math::TVector<double>___cdecl(int)>::operator=
              ((TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_c8,
               (TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_2a8);
    if (local_2a8[0] != (code *)0x0) {
      pFVar16 = &local_298;
      if (local_298.HeapAllocation != (FFunctionStorage *)0x0) {
        pFVar16 = local_298.HeapAllocation;
      }
      (**(code **)(*(longlong *)pFVar16->InlineAllocation + 0x10))();
    }
    if (local_308 != (code *)0x0) {
      pppuVar17 = &local_2f8;
      if (local_2e0 != (undefined ***)0x0) {
        pppuVar17 = local_2e0;
      }
      (*(code *)(*pppuVar17)[2])();
    }
    FRefCountVector::IndexIterator::IndexIterator
              ((IndexIterator *)local_248,local_98,0,
               (local_98->RefCounts).CurBlock * 0x200 + (local_98->RefCounts).CurBlockUsed);
    local_198[0] = (code *)0x0;
    local_1a8.Vector = local_248[0];
    local_1a8._8_8_ = local_248[1];
    local_170 = (longlong *)0x0;
    TFunction<UE::Math::TVector<double>___cdecl(int)>::operator=
              ((TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_198,
               (TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_c8);
    iVar26 = (local_98->RefCounts).CurBlockUsed + (local_98->RefCounts).CurBlock * 0x200;
    FRefCountVector::IndexIterator::IndexIterator(&local_238,local_98,iVar26,iVar26);
    local_78._0_8_ = 0;
    local_50 = (longlong *)0x0;
    local_88._0_8_ = local_238._0_8_;
    local_88._8_8_ = local_238._8_8_;
    TFunction<UE::Math::TVector<double>___cdecl(int)>::operator=
              ((TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_78,
               (TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_c8);
    if (local_1a8.Index != local_88._8_4_) {
      do {
        local_370[0] = local_1a8.Index;
        Core::Private::Function::CheckCallable(local_198[0]);
        pcVar7 = local_198[0];
        plVar19 = local_188;
        if (local_170 != (longlong *)0x0) {
          plVar19 = local_170;
        }
        uVar15 = (**(code **)(*plVar19 + 8))();
        (*pcVar7)(&local_338,uVar15,local_370);
        pFVar5 = (this->Vertices).AllocatorInstance.Data;
        if (((pFVar5 <= (FScriptContainerElement *)&local_338) &&
            ((FScriptContainerElement *)&local_338 < pFVar5 + (longlong)*piVar29 * 0x18)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar26 = (this->Vertices).ArrayNum;
        if (iVar26 == *piVar29) {
          iVar26 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,(ForAnyElementType *)this,piVar29);
        }
        (this->Vertices).ArrayNum = iVar26 + 1;
        pFVar6 = (this->Vertices).AllocatorInstance.Data;
        pFVar5 = pFVar6 + (longlong)iVar26 * 0x18;
        *(undefined8 *)pFVar5 = local_338;
        *(undefined8 *)(pFVar5 + 8) = uStack_330;
        *(undefined8 *)(pFVar6 + (longlong)iVar26 * 0x18 + 0x10) = local_328;
        FRefCountVector::BaseIterator::goto_next(&local_1a8);
      } while (local_1a8.Index != local_88._8_4_);
    }
    if (local_78._0_8_ != 0) {
      plVar19 = (longlong *)(local_78 + 0x10);
      if (local_50 != (longlong *)0x0) {
        plVar19 = local_50;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    if (local_198[0] != (code *)0x0) {
      plVar19 = local_188;
      if (local_170 != (longlong *)0x0) {
        plVar19 = local_170;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    if (local_c8._0_8_ != 0) {
      plVar19 = (longlong *)(local_c8 + 0x10);
      if (local_a0 != (longlong *)0x0) {
        plVar19 = local_a0;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
  }
  pFVar1 = local_3b0;
  uVar21 = 0;
  piVar29 = &(this->Triangles).ArrayMax;
  pTVar27 = &this->Triangles;
  if ((this->bSourceWasCompactT != false) && (this->bSourceWasCompactV != false)) {
    local_2b0 = (undefined ***)0x0;
    local_2c8 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__1__TrianglesItr_FDynamicMesh3_Geometry_UE__QEBA_AV__MappedEnumerable_UFIndex3i_Geometry_UE___FRefCountVector_45_XZ__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_2c0 = local_390;
    local_2d8 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::TrianglesItr'::__l2::<lambda_1>,UE::Geometry::FIndex3i,int>
                ::Call;
    local_278[0] = Core::Private::Function::
                   TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::TrianglesItr'::__l2::<lambda_1>,UE::Geometry::FIndex3i,int>
                   ::Call;
    local_268.HeapAllocation = (FFunctionStorage *)0x0;
    Core::Private::Function::
    TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::TrianglesItr'::__l2::<lambda_1>,0,0>::
    CloneToEmptyStorage(&local_2c8,&local_268);
    local_1e8[0] = (code *)0x0;
    local_1c0 = (longlong *)0x0;
    local_1b8 = pFVar23;
    TFunction<UE::Geometry::FIndex3i___cdecl(int)>::operator=
              ((TFunction<UE::Geometry::FIndex3i___cdecl(int)> *)local_1e8,
               (TFunction<UE::Geometry::FIndex3i___cdecl(int)> *)local_278);
    if (local_278[0] != (code *)0x0) {
      pFVar16 = &local_268;
      if (local_268.HeapAllocation != (FFunctionStorage *)0x0) {
        pFVar16 = local_268.HeapAllocation;
      }
      (**(code **)(*(longlong *)pFVar16->InlineAllocation + 0x10))();
    }
    if (local_2d8 != (code *)0x0) {
      pppuVar17 = &local_2c8;
      if (local_2b0 != (undefined ***)0x0) {
        pppuVar17 = local_2b0;
      }
      (*(code *)(*pppuVar17)[2])();
    }
    local_3b0 = local_1b8;
    pFVar1 = local_3b0;
    uStack_3a8 = 0;
    uStack_3a4 = (local_1b8->RefCounts).CurBlockUsed + (local_1b8->RefCounts).CurBlock * 0x200;
    if ((uStack_3a4 != 0) &&
       (pFVar5 = (local_1b8->RefCounts).Blocks.AllocatorInstance.Data,
       0xfffd < (ushort)(**(short **)pFVar5 - 1U))) {
      uVar21 = 1;
      uStack_3a8 = 1;
      if (1 < (int)uStack_3a4) {
        do {
          sVar4 = *(short *)(*(longlong *)(pFVar5 + (uVar21 >> 9) * 8) +
                            (ulonglong)(uStack_3a8 & 0x1ff) * 2);
          if ((sVar4 != 0) && (sVar4 != -1)) break;
          uStack_3a8 = (int)uVar21 + 1;
          uVar21 = (ulonglong)uStack_3a8;
        } while ((int)uStack_3a8 < (int)uStack_3a4);
      }
    }
    local_218 = (code *)0x0;
    plStack_1f0 = (longlong *)0x0;
    local_128 = local_1e8[0];
    plStack_100 = (longlong *)0x0;
    local_3b0._0_4_ = SUB84(local_1b8,0);
    uVar8 = (undefined4)local_3b0;
    local_3b0._4_4_ = (undefined4)((ulonglong)local_1b8 >> 0x20);
    local_228.Vector._0_4_ = (undefined4)local_3b0;
    local_228.Vector._4_4_ = local_3b0._4_4_;
    local_228.Index = uStack_3a8;
    local_228.LastIndex = uStack_3a4;
    local_3b0 = pFVar1;
    if (local_1e8[0] != (code *)0x0) {
      plVar19 = local_1d8;
      if (local_1c0 != (longlong *)0x0) {
        plVar19 = local_1c0;
      }
      (**(code **)*plVar19)(uVar8,&local_118);
    }
    plVar19 = plStack_1f0;
    uVar12 = uStack_1fc;
    uVar11 = uStack_200;
    uVar10 = uStack_204;
    uVar8 = local_208;
    uVar15 = uStack_210;
    pcVar7 = local_218;
    local_218 = local_128;
    uStack_210 = uStack_120;
    local_1f8 = local_108;
    uStack_1f4 = uStack_104;
    plStack_1f0 = plStack_100;
    local_208 = local_118;
    uStack_204 = uStack_114;
    uStack_200 = uStack_110;
    uStack_1fc = uStack_10c;
    local_128 = pcVar7;
    uStack_120 = uVar15;
    local_118 = uVar8;
    uStack_114 = uVar10;
    uStack_110 = uVar11;
    uStack_10c = uVar12;
    plStack_100 = plVar19;
    if (pcVar7 != (code *)0x0) {
      plVar18 = (longlong *)&local_118;
      if (plVar19 != (longlong *)0x0) {
        plVar18 = plVar19;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    uStack_3a8 = (local_1b8->RefCounts).CurBlockUsed + (local_1b8->RefCounts).CurBlock * 0x200;
    local_158 = (code *)0x0;
    plStack_130 = (longlong *)0x0;
    local_f8 = local_1e8[0];
    plStack_d0 = (longlong *)0x0;
    local_3b0._0_4_ = SUB84(local_1b8,0);
    local_3b0._4_4_ = (undefined4)((ulonglong)local_1b8 >> 0x20);
    local_168 = (undefined4)local_3b0;
    uStack_164 = local_3b0._4_4_;
    uStack_160 = uStack_3a8;
    uStack_15c = uStack_3a8;
    local_3b0 = local_1b8;
    uStack_3a4 = uStack_3a8;
    if (local_1e8[0] != (code *)0x0) {
      plVar19 = local_1d8;
      if (local_1c0 != (longlong *)0x0) {
        plVar19 = local_1c0;
      }
      (**(code **)*plVar19)();
    }
    plVar19 = plStack_130;
    uVar12 = uStack_13c;
    uVar11 = uStack_140;
    uVar10 = uStack_144;
    uVar8 = local_148;
    uVar15 = uStack_150;
    pcVar7 = local_158;
    local_158 = local_f8;
    uStack_150 = uStack_f0;
    local_138 = local_d8;
    uStack_134 = uStack_d4;
    plStack_130 = plStack_d0;
    local_148 = local_e8;
    uStack_144 = uStack_e4;
    uStack_140 = uStack_e0;
    uStack_13c = uStack_dc;
    local_f8 = pcVar7;
    uStack_f0 = uVar15;
    local_e8 = uVar8;
    uStack_e4 = uVar10;
    uStack_e0 = uVar11;
    uStack_dc = uVar12;
    plStack_d0 = plVar19;
    if (pcVar7 != (code *)0x0) {
      plVar18 = (longlong *)&local_e8;
      if (plVar19 != (longlong *)0x0) {
        plVar18 = plVar19;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    if (local_228.Index != uStack_160) {
      do {
        local_368[0] = local_228.Index;
        Core::Private::Function::CheckCallable(local_218);
        pcVar7 = local_218;
        plVar19 = (longlong *)&local_208;
        if (plStack_1f0 != (longlong *)0x0) {
          plVar19 = plStack_1f0;
        }
        uVar15 = (**(code **)(*plVar19 + 8))();
        (*pcVar7)(&local_360,uVar15,local_368);
        pFVar5 = (pTVar27->AllocatorInstance).Data;
        if (((pFVar5 <= (FScriptContainerElement *)&local_360) &&
            ((FScriptContainerElement *)&local_360 < pFVar5 + (longlong)*piVar29 * 0xc)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar26 = (this->Triangles).ArrayNum;
        if (iVar26 == *piVar29) {
          iVar26 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,&pTVar27->AllocatorInstance,piVar29);
        }
        (this->Triangles).ArrayNum = iVar26 + 1;
        pFVar5 = (pTVar27->AllocatorInstance).Data;
        *(undefined8 *)(pFVar5 + (longlong)iVar26 * 0xc) = local_360;
        *(undefined4 *)(pFVar5 + (longlong)iVar26 * 0xc + 8) = local_358;
        FRefCountVector::BaseIterator::goto_next(&local_228);
      } while (local_228.Index != uStack_160);
    }
    if (local_158 != (code *)0x0) {
      plVar19 = (longlong *)&local_148;
      if (plStack_130 != (longlong *)0x0) {
        plVar19 = plStack_130;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    if (local_218 != (code *)0x0) {
      plVar19 = (longlong *)&local_208;
      if (plStack_1f0 != (longlong *)0x0) {
        plVar19 = plStack_1f0;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    if (local_1e8[0] != (code *)0x0) {
      plVar19 = local_1d8;
      if (local_1c0 != (longlong *)0x0) {
        plVar19 = local_1c0;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    goto LAB_1434d00e5;
  }
  uVar22 = (local_3b0->RefCounts).CurBlock * 0x200 + (local_3b0->RefCounts).CurBlockUsed;
  if ((uVar22 == 0) ||
     (pFVar5 = (local_3b0->RefCounts).Blocks.AllocatorInstance.Data,
     (ushort)(**(short **)pFVar5 - 1U) < 0xfffe)) {
LAB_1434cfdcc:
    uVar20 = (uint)uVar21;
  }
  else {
    uVar21 = 1;
    uVar20 = 1;
    if (1 < (int)uVar22) {
      do {
        sVar4 = *(short *)(*(longlong *)(pFVar5 + (uVar21 >> 9) * 8) +
                          (ulonglong)((uint)uVar21 & 0x1ff) * 2);
        if ((sVar4 != 0) && (sVar4 != -1)) break;
        uVar20 = (uint)uVar21 + 1;
        uVar21 = (ulonglong)uVar20;
      } while ((int)uVar20 < (int)uVar22);
      goto LAB_1434cfdcc;
    }
  }
joined_r0x0001434cfdce:
  if (uVar20 != uVar22) {
    while( true ) {
      uVar20 = (uint)uVar21;
      lVar24 = *(longlong *)
                ((local_390->Triangles).Blocks.AllocatorInstance.Data + (uVar21 >> 9) * 8);
      local_3c0 = *(undefined8 *)(lVar24 + (ulonglong)(uVar20 & 0x1ff) * 0xc);
      local_3b8 = *(uint *)(lVar24 + 8 + (ulonglong)(uVar20 & 0x1ff) * 0xc);
      local_3c4 = uVar20;
      if (this->bSourceWasCompactV == false) {
        lVar24 = (longlong)(int)(uint)local_3c0;
        uVar14 = 0;
        if ((int)(uint)local_3c0 < local_3a0.ArrayNum) {
          uVar14 = ~(uint)local_3c0 >> 0x1f;
        }
        if (uVar14 == 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        lVar25 = (longlong)(int)local_3c0._4_4_;
        local_3c0 = CONCAT44(local_3c0._4_4_,
                             *(undefined4 *)(local_3a0.AllocatorInstance.Data + lVar24 * 4));
        uVar14 = 0;
        if ((int)local_3c0._4_4_ < local_3a0.ArrayNum) {
          uVar14 = ~local_3c0._4_4_ >> 0x1f;
        }
        iVar26 = local_3a0.ArrayNum;
        if (uVar14 == 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar26 = local_3a0.ArrayNum;
        }
        lVar24 = (longlong)(int)local_3b8;
        local_3c0 = CONCAT44(*(undefined4 *)(local_3a0.AllocatorInstance.Data + lVar25 * 4),
                             (uint)local_3c0);
        uVar14 = 0;
        if ((int)local_3b8 < iVar26) {
          uVar14 = ~local_3b8 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_3b8 = *(uint *)(local_3a0.AllocatorInstance.Data + lVar24 * 4);
      }
      pFVar5 = (pTVar27->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_3c0) &&
          ((FScriptContainerElement *)&local_3c0 < pFVar5 + (longlong)*piVar29 * 0xc)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar26 = (this->Triangles).ArrayNum;
      if (iVar26 == *piVar29) {
        iVar26 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&pTVar27->AllocatorInstance,piVar29);
      }
      (this->Triangles).ArrayNum = iVar26 + 1;
      pFVar5 = (pTVar27->AllocatorInstance).Data;
      *(undefined8 *)(pFVar5 + (longlong)iVar26 * 0xc) = local_3c0;
      *(uint *)(pFVar5 + (longlong)iVar26 * 0xc + 8) = local_3b8;
      if (local_378->bBuildTriangleMap != false) {
        pFVar5 = (this->SourceTriangleIDs).AllocatorInstance.Data;
        if (((pFVar5 <= (FScriptContainerElement *)&local_3c4) &&
            ((FScriptContainerElement *)&local_3c4 <
             pFVar5 + (longlong)(this->SourceTriangleIDs).ArrayMax * 4)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar26 = (this->SourceTriangleIDs).ArrayNum;
        piVar2 = &(this->SourceTriangleIDs).ArrayMax;
        if (iVar26 == *piVar2) {
          iVar26 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(this->SourceTriangleIDs).AllocatorInstance,piVar2);
        }
        (this->SourceTriangleIDs).ArrayNum = iVar26 + 1;
        *(uint *)((this->SourceTriangleIDs).AllocatorInstance.Data + (longlong)iVar26 * 4) =
             local_3c4;
      }
      uVar20 = uVar20 + 1;
      uVar21 = (ulonglong)uVar20;
      if ((int)uVar22 <= (int)uVar20) break;
      pFVar5 = (pFVar1->RefCounts).Blocks.AllocatorInstance.Data;
      while( true ) {
        lVar24 = (uVar21 >> 9) * 8;
        lVar25 = (ulonglong)((uint)uVar21 & 0x1ff) * 2;
        if ((*(short *)(lVar25 + *(longlong *)(pFVar5 + lVar24)) != 0) &&
           (*(short *)(lVar25 + *(longlong *)(pFVar5 + lVar24)) != -1)) break;
        uVar20 = (uint)uVar21 + 1;
        uVar21 = (ulonglong)uVar20;
        if ((int)uVar22 <= (int)uVar20) goto joined_r0x0001434cfdce;
      }
    }
    goto joined_r0x0001434cfdce;
  }
LAB_1434d00e5:
  bVar13 = local_378->bBuildAABBTree;
  (this->AABBTree).Mesh = this;
  (this->AABBTree).MeshChangeStamp = 0;
  if (bVar13 != false) {
    TMeshAABBTree3<UE::Geometry::FColliderMesh>::BuildTopDown(&this->AABBTree,false);
    (this->AABBTree).MeshChangeStamp = 0;
  }
  if (local_3a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a0.AllocatorInstance.Data);
  }
  return;
}

// Reset @ 143518be0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UE::Geometry::FColliderMesh::Reset(FColliderMesh *this,EAllowShrinking param_1)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(&this->Vertices,0,param_1);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->SourceVertexIDs,0,param_1);
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNum(&this->Triangles,0,param_1);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->SourceTriangleIDs,0,param_1);
  this->bSourceWasCompactT = true;
  this->bSourceWasCompactV = true;
  (this->AABBTree).Mesh = this;
  (this->AABBTree).MeshChangeStamp = 0;
  TMeshAABBTree3<UE::Geometry::FColliderMesh>::BuildTopDown(&this->AABBTree,false);
  (this->AABBTree).MeshChangeStamp = 0;
  return;
}

