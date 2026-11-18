// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 14

// GetLoopOverlayMap<float,2,UE::Math::TVector2<float>_> @ 14355ef70

bool __thiscall
UE::Geometry::FMeshRegionBoundaryLoops::GetLoopOverlayMap<float,2,UE::Math::TVector2<float>_>
          (FMeshRegionBoundaryLoops *this,FEdgeLoop *param_1,TDynamicMeshOverlay<float,2> *param_2,
          TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>
          *param_3)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_res10 [2];
  TPairInitializer<int_const_&,TTuple<int,UE::Math::TVector2<float>_>_&&> local_98;
  longlong local_88;
  undefined8 local_80;
  uint local_78 [4];
  undefined8 local_68;
  uint local_58;
  undefined8 local_54;
  uint *local_48;
  uint *local_40;
  
  uVar12 = 0;
  if (0 < (param_1->Vertices).ArrayNum) {
    local_88 = 0;
    uVar10 = local_res10[0];
    do {
      lVar1 = local_88;
      uVar7 = 0;
      if ((int)uVar12 < (param_1->Vertices).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      local_res10[0] = *(uint *)((param_1->Vertices).AllocatorInstance.Data + lVar1);
      uVar7 = 0;
      if ((int)uVar12 < (param_1->Edges).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar7 = *(uint *)((param_1->Edges).AllocatorInstance.Data + lVar1);
      bVar4 = FIndexFlagSet::Contains(&this->Edges,uVar7);
      uVar11 = uVar10;
      if (bVar4) {
        uVar10 = 0xffffffff;
        local_80 = *(undefined8 *)
                    (*(longlong *)
                      ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar7 >> 9) * 8) + 8 + (ulonglong)(uVar7 & 0x1ff) * 0x10);
        uVar9 = (uint)((ulonglong)local_80 >> 0x20);
        uVar7 = (uint)local_80;
        uVar11 = uVar7;
        if (uVar9 == 0xffffffff) goto LAB_14355f0e6;
        bVar4 = FIndexFlagSet::Contains(&this->Triangles,uVar7);
        bVar6 = FIndexFlagSet::Contains(&this->Triangles,local_80._4_4_);
        if (bVar4 != bVar6) {
          uVar11 = uVar9;
          if (bVar4) {
            uVar11 = uVar7;
          }
          goto LAB_14355f0e6;
        }
LAB_14355f0eb:
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TidInside != IndexConstants::InvalidID",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\MeshRegionBoundaryLoops.cpp"
                           ,0x1ef,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      else {
LAB_14355f0e6:
        uVar10 = uVar11;
        if (uVar11 == 0xffffffff) goto LAB_14355f0eb;
      }
      lVar1 = *(longlong *)
               ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar10 >> 9) * 8
               );
      local_68 = *(undefined8 *)(lVar1 + (ulonglong)(uVar10 & 0x1ff) * 0xc);
      if ((uint)local_68 == local_res10[0]) {
        iVar8 = 0;
      }
      else if ((uint)((ulonglong)local_68 >> 0x20) == local_res10[0]) {
        iVar8 = 1;
      }
      else {
        iVar8 = 2;
        if ((*(uint *)(lVar1 + 8 + (ulonglong)(uVar10 & 0x1ff) * 0xc) != local_res10[0]) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("VidTriIndex >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\MeshRegionBoundaryLoops.cpp"
                               ,500,L""), iVar8 = -1, bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      pFVar2 = (param_2->ElementTriangles).Blocks.AllocatorInstance.Data;
      uVar7 = uVar10 * 3;
      local_78[0] = *(uint *)(*(longlong *)(pFVar2 + (ulonglong)(uVar7 >> 9) * 8) +
                             (ulonglong)(uVar7 & 0x1ff) * 4);
      local_78[1] = *(undefined4 *)
                     (*(longlong *)(pFVar2 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                     (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
      local_78[2] = *(undefined4 *)
                     (*(longlong *)(pFVar2 + (ulonglong)(uVar7 + 2 >> 9) * 8) +
                     (ulonglong)(uVar7 + 2 & 0x1ff) * 4);
      local_58 = local_78[iVar8];
      if ((((int)local_58 < 0) ||
          ((int)((param_2->ElementsRefCounts).RefCounts.CurBlock * 0x200 +
                (param_2->ElementsRefCounts).RefCounts.CurBlockUsed) <= (int)local_58)) ||
         (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((param_2->ElementsRefCounts).RefCounts.Blocks.
                                         AllocatorInstance.Data + (ulonglong)(local_58 >> 9) * 8) +
                                      (ulonglong)(local_58 & 0x1ff) * 2) - 1U))) {
        return false;
      }
      pFVar2 = (param_2->Elements).Blocks.AllocatorInstance.Data;
      local_98.Value._0_4_ =
           *(undefined4 *)
            (*(longlong *)(pFVar2 + (ulonglong)((local_58 & 0x7fffffff) >> 8) * 8) +
            (ulonglong)(local_58 * 2 & 0x1ff) * 4);
      local_98.Value._4_4_ =
           *(undefined4 *)
            (*(longlong *)(pFVar2 + (ulonglong)((local_58 & 0x7fffffff) >> 8) * 8) +
            (ulonglong)(local_58 * 2 + 1 & 0x1ff) * 4);
      local_54 = CONCAT44(local_98.Value._4_4_,local_98.Value._0_4_);
      local_48 = local_res10;
      local_40 = &local_58;
      TSet<TTuple<int,TTuple<int,UE::Math::TVector2<float>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<int_const_&,TTuple<int,UE::Math::TVector2<float>_>_&&>_>
                ((TSet<TTuple<int,TTuple<int,UE::Math::TVector2<float>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>,FDefaultSetAllocator>
                  *)param_3,&local_98,(bool *)&local_48);
      uVar12 = uVar12 + 1;
      local_88 = local_88 + 4;
    } while ((int)uVar12 < (param_1->Vertices).ArrayNum);
  }
  return true;
}

// UpdateLoopOverlayMapValidity<float,2,UE::Math::TVector2<float>_> @ 1435650f0

void __thiscall
UE::Geometry::FMeshRegionBoundaryLoops::
UpdateLoopOverlayMapValidity<float,2,UE::Math::TVector2<float>_>
          (FMeshRegionBoundaryLoops *this,
          TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>
          *param_1,TDynamicMeshOverlay<float,2> *param_2)

{
  undefined1 local_res18;
  
  Algo::
  ForEachIf<TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>_&,_UE::Geometry::FMeshRegionBoundaryLoops::UpdateLoopOverlayMapValidity<float,2,UE::Math::TVector2<float>_>_::__l2::<lambda_1>,_UE::Geometry::FMeshRegionBoundaryLoops::UpdateLoopOverlayMapValidity<float,2,UE::Math::TVector2<float>_>_::__l2::<lambda_2>_>
            (param_1,(<lambda_1>)param_2,local_res18);
  return;
}

// FMeshRegionBoundaryLoops @ 143567b70

FMeshRegionBoundaryLoops * __thiscall
UE::Geometry::FMeshRegionBoundaryLoops::FMeshRegionBoundaryLoops
          (FMeshRegionBoundaryLoops *this,FDynamicMesh3 *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  (this->Triangles).Dense.field0_0x0.TypedValue.ArrayMax = -1;
  this->Mesh = (FDynamicMesh3 *)0x0;
  (this->Loops).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Loops).ArrayNum = 0;
  (this->Loops).ArrayMax = 0;
  this->bFailed = false;
  (this->Triangles).Dense.field0_0x0.TypedValue.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Triangles).Dense.field0_0x0.TypedValue.ArrayNum = 0;
  *(undefined8 *)&(this->Triangles).Sparse.field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->Triangles).Sparse.field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->Triangles).Sparse.field0_0x0 + 0xc) = 0xffffffff;
  *(undefined8 *)((longlong)&(this->Triangles).Sparse.field0_0x0 + 0x20) = 0;
  *(undefined4 *)((longlong)&(this->Triangles).Sparse.field0_0x0 + 0x28) = 0;
  *(undefined4 *)((longlong)&(this->Triangles).Sparse.field0_0x0 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)&(this->Triangles).Sparse.field0_0x0 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)&(this->Triangles).Sparse.field0_0x0 + 0x34) = 0;
  *(undefined8 *)((longlong)&(this->Triangles).Sparse.field0_0x0 + 0x40) = 0;
  (this->Triangles).Sparse.field0_0x0.TypedValue.HashSize = 0;
  FIndexFlagSet::InitManual(&this->Triangles,true,-1);
  (this->Edges).Dense.field0_0x0.TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Edges).Dense.field0_0x0.TypedValue.ArrayNum = 0;
  (this->Edges).Dense.field0_0x0.TypedValue.ArrayMax = -1;
  *(undefined8 *)&(this->Edges).Sparse.field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->Edges).Sparse.field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->Edges).Sparse.field0_0x0 + 0xc) = 0xffffffff;
  *(undefined8 *)((longlong)&(this->Edges).Sparse.field0_0x0 + 0x20) = 0;
  *(undefined4 *)((longlong)&(this->Edges).Sparse.field0_0x0 + 0x28) = 0;
  *(undefined4 *)((longlong)&(this->Edges).Sparse.field0_0x0 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)&(this->Edges).Sparse.field0_0x0 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)&(this->Edges).Sparse.field0_0x0 + 0x34) = 0;
  *(undefined8 *)((longlong)&(this->Edges).Sparse.field0_0x0 + 0x40) = 0;
  (this->Edges).Sparse.field0_0x0.TypedValue.HashSize = 0;
  FIndexFlagSet::InitManual(&this->Edges,true,-1);
  (this->edges_roi).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->edges_roi).ArrayNum = 0;
  (this->edges_roi).ArrayMax = 0;
  SetMesh(this,param_1,param_2);
  if (param_3) {
    Compute(this);
  }
  return this;
}

// Compute @ 14357d1b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall UE::Geometry::FMeshRegionBoundaryLoops::Compute(FMeshRegionBoundaryLoops *this)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  FEdgeLoop *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  FIndexFlagSet *pFVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  FEdgeLoop *pFVar17;
  FScriptContainerElement *pFVar18;
  int iVar19;
  FSmallListSet *pFVar20;
  uint uVar21;
  undefined1 local_res10 [8];
  uint local_res18;
  uint local_res20 [2];
  int local_1f8;
  uint local_1f4;
  TArray<int,TSizedDefaultAllocator<32>_> local_1f0;
  int local_1e0;
  uint local_1dc;
  TArray<int,TSizedDefaultAllocator<32>_> local_1d8;
  TArray<int,TSizedDefaultAllocator<32>_> local_1c8;
  TArray<int,TSizedDefaultAllocator<32>_> local_1b8;
  FIndexFlagSet *local_1a8;
  TArray<UE::Geometry::FEdgeLoop,TSizedDefaultAllocator<32>_> local_1a0;
  uint local_190 [2];
  uint local_188;
  FEdgeLoop local_178;
  int local_138;
  int local_134;
  FScriptContainerElement *local_130;
  FScriptContainerElement *local_128;
  TOptional<TArray<bool,TSizedDefaultAllocator<32>_>_>_u_0 local_118;
  int local_108;
  TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_u_0 local_100;
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  BaseValueIterator local_98;
  BaseValueIterator local_70;
  
  piVar1 = &(this->Loops).ArrayNum;
  this->bFailed = false;
  iVar19 = *piVar1;
  if (iVar19 < 0) {
    iVar8 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,-iVar19,&(this->Loops).AllocatorInstance,piVar1,
                       &(this->Loops).ArrayMax);
    DefaultConstructItems<UE::Geometry::FEdgeLoop,int>
              ((this->Loops).AllocatorInstance.Data + (longlong)iVar8 * 0x40,-iVar19);
  }
  else if (0 < iVar19) {
    TArray<UE::Geometry::FEdgeLoop,TSizedDefaultAllocator<32>_>::RemoveAtImpl(&this->Loops,0,iVar19)
    ;
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,&(this->Loops).AllocatorInstance,*piVar1,&(this->Loops).ArrayMax);
  }
  local_100._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_100._48_8_ = _UNK_150631d98;
  local_118.TypedValue.AllocatorInstance.Data = (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_118.TypedValue.ArrayNum = 0;
  local_118.TypedValue.ArrayMax = -1;
  local_100._0_8_ = 0;
  local_100._8_4_ = 0;
  local_100._12_4_ = -1;
  local_100._32_8_ = 0;
  local_100.TypedValue.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_100.TypedValue.HashSize = 0;
  FIndexFlagSet::InitManual((FIndexFlagSet *)&local_118.TypedValue,true,-1);
  iVar19 = (this->Mesh->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
           (this->Mesh->EdgeRefCounts).RefCounts.CurBlockUsed;
  if ((iVar19 < 32000) || (__real_3d4ccccd <= (float)(this->edges_roi).ArrayNum / (float)iVar19)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  FIndexFlagSet::InitManual((FIndexFlagSet *)&local_118.TypedValue,bVar6,iVar19);
  local_1f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f0.ArrayNum = 0;
  local_1f0.ArrayMax = 0;
  local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.ArrayNum = 0;
  local_1d8.ArrayMax = 0;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.ArrayNum = 0;
  local_1c8.ArrayMax = 0;
  local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ArrayNum = 0;
  local_1b8.ArrayMax = 0;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_1b8,0x10,Default);
  local_188 = (this->edges_roi).ArrayNum;
  uVar11 = (ulonglong)(int)local_188;
  pFVar18 = (this->edges_roi).AllocatorInstance.Data;
  pFVar15 = pFVar18 + uVar11 * 4;
  local_130 = pFVar15;
LAB_14357d374:
  local_128 = pFVar18;
  if ((this->edges_roi).ArrayNum != (int)uVar11) {
    local_res10[0] = 0;
    `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
  }
  if (pFVar18 == pFVar15) {
    bVar6 = this->bFailed == false;
LAB_14357e09a:
    if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.AllocatorInstance.Data);
    }
    if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.AllocatorInstance.Data);
    }
    if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.AllocatorInstance.Data);
    }
    if (local_1f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.AllocatorInstance.Data);
    }
    if (local_100._12_4_ != -1) {
      local_100.TypedValue.HashSize = 0;
      if (local_100.TypedValue.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_100.TypedValue.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_100.TypedValue.Elements);
    }
    if ((local_118.TypedValue.ArrayMax != -1) &&
       (local_118.TypedValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_118.TypedValue.AllocatorInstance.Data);
    }
    return bVar6;
  }
  uVar21 = *(uint *)pFVar18;
  uVar11 = (ulonglong)(int)uVar21;
  local_res18 = uVar21;
  bVar6 = FIndexFlagSet::Contains((FIndexFlagSet *)&local_118.TypedValue,uVar21);
  if (!bVar6) {
    pFVar14 = &this->Edges;
    local_1a8 = pFVar14;
    bVar6 = FIndexFlagSet::Contains(pFVar14,uVar21);
    pFVar15 = local_130;
    if (bVar6) {
      local_res20[0] = uVar21;
      local_1dc = uVar21;
      if (local_118.TypedValue.ArrayMax == -1) {
        if (local_100._12_4_ == -1) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Sparse.IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\SparseIndexCollectionTypes.h"
                             ,0x66,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          if ((local_100._12_4_ == -1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_100.TypedValue,&local_a8,(bool *)local_res20);
      }
      else {
        uVar13 = 0;
        if ((int)uVar21 < local_118.TypedValue.ArrayNum) {
          uVar13 = ~uVar21 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if (*(FScriptContainerElement *)
             (uVar11 + (longlong)local_118.TypedValue.AllocatorInstance.Data) ==
            (FScriptContainerElement)0x0) {
          *(FScriptContainerElement *)
           (uVar11 + (longlong)local_118.TypedValue.AllocatorInstance.Data) =
               (FScriptContainerElement)0x1;
          local_108 = local_108 + 1;
        }
      }
      if (((local_1f0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1dc) &&
          ((FScriptContainerElement *)&local_1dc <
           local_1f0.AllocatorInstance.Data + (longlong)local_1f0.ArrayMax * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iVar19 = local_1f0.ArrayNum;
      if (local_1f0.ArrayNum == local_1f0.ArrayMax) {
        iVar19 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_1f0.AllocatorInstance,&local_1f0.ArrayMax);
      }
      local_1f0.ArrayNum = iVar19 + 1;
      *(uint *)(local_1f0.AllocatorInstance.Data + (longlong)iVar19 * 4) = local_1dc;
      iVar19 = -1;
      do {
        uVar21 = (uint)uVar11;
        bVar6 = FIndexFlagSet::Contains(pFVar14,uVar21);
        if (bVar6) {
          local_a0 = *(undefined8 *)
                      (*(longlong *)
                        ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
                        ((uVar11 & 0xffffffff) >> 9) * 8) + 8 + (ulonglong)(uVar21 & 0x1ff) * 0x10);
          if ((int)((ulonglong)local_a0 >> 0x20) != -1) {
            FIndexFlagSet::Contains(&this->Triangles,(int)local_a0);
            FIndexFlagSet::Contains(&this->Triangles,local_a0._4_4_);
          }
        }
        if (iVar19 == -1) {
          GetOrientedEdgeVerts(this,(int)&local_138,uVar21);
          local_1e0 = local_138;
          local_1f8 = local_134;
        }
        else {
          uVar3 = *(undefined8 *)
                   (*(longlong *)
                     ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
                     ((uVar11 & 0xffffffff) >> 9) * 8) + (ulonglong)(uVar21 & 0x1ff) * 0x10);
          local_1f8 = (int)uVar3;
          local_1e0 = iVar19;
          if (local_1f8 == iVar19) {
            local_1f8 = (int)((ulonglong)uVar3 >> 0x20);
          }
        }
        if (((local_1d8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1e0) &&
            ((FScriptContainerElement *)&local_1e0 <
             local_1d8.AllocatorInstance.Data + (longlong)local_1d8.ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        iVar19 = local_1d8.ArrayNum;
        if (local_1d8.ArrayNum == local_1d8.ArrayMax) {
          iVar19 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_1d8.AllocatorInstance,&local_1d8.ArrayMax);
        }
        iVar8 = local_1f8;
        uVar21 = 0;
        local_1d8.ArrayNum = iVar19 + 1;
        uVar16 = 0xffffffff;
        uVar11 = 1;
        *(int *)(local_1d8.AllocatorInstance.Data + (longlong)iVar19 * 4) = local_1e0;
        pFVar20 = &this->Mesh->VertexEdgeLists;
        FSmallListSet::BaseValueIterator::BaseValueIterator(&local_98,pFVar20,local_1f8,false);
        pFVar14 = local_1a8;
        while (((uVar3 = local_98._32_8_, uVar13 = local_res18, local_98.ListSet != pFVar20 ||
                (local_98.ListIndex != iVar8)) ||
               ((local_98.iCur != -1 || (local_98.cur_ptr != -1))))) {
          bVar6 = FIndexFlagSet::Contains(pFVar14,local_98.cur_value);
          if (bVar6) {
            if (uVar21 != 0) {
              if (uVar21 == 1) {
                uVar11 = uVar3 & 0xffffffff;
              }
              uVar21 = uVar21 + 1;
              goto LAB_14357d79b;
            }
            uVar21 = 1;
            uVar16 = uVar3 & 0xffffffff;
            FSmallListSet::BaseValueIterator::GotoNext(&local_98);
          }
          else {
LAB_14357d79b:
            FSmallListSet::BaseValueIterator::GotoNext(&local_98);
          }
        }
        if ((int)uVar21 < 2) {
LAB_14357e089:
          this->bFailed = true;
          bVar6 = false;
          goto LAB_14357e09a;
        }
        local_1f4 = 0xffffffff;
        if ((int)uVar21 < 3) {
          uVar21 = (uint)uVar16;
          if (((uVar21 != local_res18) && ((uint)uVar11 != local_res18)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("e0 == eCur || e1 == eCur",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\MeshRegionBoundaryLoops.cpp"
                                 ,0xc5,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          local_1f4 = uVar21;
          if (uVar21 == uVar13) {
            local_1f4 = (uint)uVar11;
          }
        }
        else {
          if ((local_1d8.ArrayNum < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          if (local_1f8 == *(int *)local_1d8.AllocatorInstance.Data) {
            local_1f4 = 0xfffffffe;
          }
          else {
            if (local_1b8.ArrayNum < (int)uVar21) {
              iVar8 = uVar21 - local_1b8.ArrayNum;
              iVar19 = Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (4,4,iVar8,&local_1b8.AllocatorInstance,&local_1b8.ArrayNum,
                                  &local_1b8.ArrayMax);
              memset(local_1b8.AllocatorInstance.Data + (longlong)iVar19 * 4,0,(longlong)iVar8 << 2)
              ;
            }
            iVar19 = local_1f8;
            uVar13 = 0;
            pFVar20 = &this->Mesh->VertexEdgeLists;
            FSmallListSet::BaseValueIterator::BaseValueIterator(&local_70,pFVar20,local_1f8,false);
            pFVar14 = local_1a8;
            lVar12 = 0;
            while (((uVar9 = local_res18, local_70.ListSet != pFVar20 ||
                    (local_70.ListIndex != iVar19)) ||
                   ((local_70.iCur != -1 || (local_70.cur_ptr != -1))))) {
              iVar8 = local_70.cur_value;
              bVar6 = FIndexFlagSet::Contains(pFVar14,iVar8);
              if (bVar6) {
                uVar9 = 0;
                if ((int)uVar13 < local_1b8.ArrayNum) {
                  uVar9 = ~uVar13 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  uVar7 = (*pcVar5)();
                  return (bool)uVar7;
                }
                uVar13 = uVar13 + 1;
                *(int *)(local_1b8.AllocatorInstance.Data + lVar12) = iVar8;
                lVar12 = lVar12 + 4;
              }
              FSmallListSet::BaseValueIterator::GotoNext(&local_70);
            }
            if ((uVar13 != uVar21) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("num_be == bdry_nbrs",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\MeshRegionBoundaryLoops.cpp"
                                   ,0xb0,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            local_1f4 = FindLeftTurnEdge(this,uVar9,local_1f8,&local_1b8,uVar13,
                                         (FIndexFlagSet *)&local_118.TypedValue);
            if (local_1f4 == 0xffffffff) goto LAB_14357e089;
          }
          for (FVar10.Data = local_1c8.AllocatorInstance.Data;
              FVar10.Data != local_1c8.AllocatorInstance.Data + (longlong)local_1c8.ArrayNum * 4;
              FVar10.Data = FVar10.Data + 4) {
            if (*(int *)FVar10.Data == local_1f8) goto LAB_14357dab0;
          }
          if (((local_1c8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1f8) &&
              ((FScriptContainerElement *)&local_1f8 <
               local_1c8.AllocatorInstance.Data + (longlong)local_1c8.ArrayMax * 4)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          if (local_1c8.ArrayNum == local_1c8.ArrayMax) {
            local_1c8.ArrayNum =
                 Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_1c8.AllocatorInstance,&local_1c8.ArrayMax);
          }
          lVar12 = (longlong)local_1c8.ArrayNum;
          local_1c8.ArrayNum = local_1c8.ArrayNum + 1;
          *(int *)(local_1c8.AllocatorInstance.Data + lVar12 * 4) = local_1f8;
        }
LAB_14357dab0:
        FVar10.Data = local_1d8.AllocatorInstance.Data;
        if ((local_1f4 == 0xfffffffe) || (local_1f4 == local_1dc)) goto LAB_14357dcac;
        bVar6 = FIndexFlagSet::Contains((FIndexFlagSet *)&local_118.TypedValue,local_1f4);
        if ((bVar6) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("used_edge[eNext] == false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\MeshRegionBoundaryLoops.cpp"
                               ,0xd7,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if (((local_1f0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1f4) &&
            ((FScriptContainerElement *)&local_1f4 <
             local_1f0.AllocatorInstance.Data + (longlong)local_1f0.ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        iVar19 = local_1f0.ArrayNum;
        if (local_1f0.ArrayNum == local_1f0.ArrayMax) {
          iVar19 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_1f0.AllocatorInstance,&local_1f0.ArrayMax);
        }
        local_1f0.ArrayNum = iVar19 + 1;
        *(uint *)(local_1f0.AllocatorInstance.Data + (longlong)iVar19 * 4) = local_1f4;
        uVar11 = (ulonglong)(int)local_1f4;
        local_res18 = local_1f4;
        local_190[0] = local_1f4;
        if (local_118.TypedValue.ArrayMax == -1) {
          if (local_100._12_4_ == -1) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Sparse.IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\SparseIndexCollectionTypes.h"
                               ,0x66,L"");
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
            if ((local_100._12_4_ == -1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              uVar7 = (*pcVar5)();
              return (bool)uVar7;
            }
          }
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_100.TypedValue,&local_a4,(bool *)local_190);
          pFVar14 = local_1a8;
          iVar19 = local_1f8;
        }
        else {
          uVar21 = 0;
          if ((int)local_1f4 < local_118.TypedValue.ArrayNum) {
            uVar21 = ~local_1f4 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          pFVar14 = local_1a8;
          iVar19 = local_1f8;
          if (*(FScriptContainerElement *)
               (uVar11 + (longlong)local_118.TypedValue.AllocatorInstance.Data) ==
              (FScriptContainerElement)0x0) {
            *(FScriptContainerElement *)
             (uVar11 + (longlong)local_118.TypedValue.AllocatorInstance.Data) =
                 (FScriptContainerElement)0x1;
            local_108 = local_108 + 1;
          }
        }
      } while( true );
    }
  }
  goto LAB_14357e076;
LAB_14357dcac:
  if (local_1c8.ArrayNum < 1) {
    lVar12 = (longlong)local_1d8.ArrayNum;
    local_178.Mesh = this->Mesh;
    local_178.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.Vertices.ArrayMax = 0;
    local_178.Edges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.Edges.ArrayNum = 0;
    local_178.Edges.ArrayMax = 0;
    local_178.BowtieVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.BowtieVertices.ArrayNum = 0;
    local_178.BowtieVertices.ArrayMax = 0;
    local_178.bBowtiesCalculated = false;
    local_178.Vertices.ArrayNum = local_1d8.ArrayNum;
    iVar19 = 0;
    if (local_1d8.ArrayNum != 0) {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_1d8.ArrayNum,0,&local_178.Vertices.AllocatorInstance,local_1d8.ArrayNum,
                 &local_178.Vertices.ArrayMax);
      memcpy(local_178.Vertices.AllocatorInstance.Data,FVar10.Data,lVar12 << 2);
      iVar19 = local_178.Edges.ArrayMax;
    }
    FVar10.Data = local_1f0.AllocatorInstance.Data;
    iVar8 = local_1f0.ArrayNum;
    lVar12 = (longlong)local_1f0.ArrayNum;
    local_178.Edges.ArrayNum = local_1f0.ArrayNum;
    if ((local_1f0.ArrayNum == 0) && (iVar19 == 0)) {
      local_178.Edges.ArrayNum = 0;
      local_178.Edges.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_1f0.ArrayNum,iVar19,&local_178.Edges.AllocatorInstance,local_1f0.ArrayNum
                 ,&local_178.Edges.ArrayMax);
      if (iVar8 != 0) {
        memcpy(local_178.Edges.AllocatorInstance.Data,FVar10.Data,lVar12 << 2);
      }
    }
    pFVar4 = (FEdgeLoop *)(this->Loops).AllocatorInstance.Data;
    piVar1 = &(this->Loops).ArrayNum;
    if (((pFVar4 <= &local_178) && (&local_178 < pFVar4 + (this->Loops).ArrayMax)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iVar19 = *piVar1;
    piVar2 = &(this->Loops).ArrayMax;
    if (iVar19 == *piVar2) {
      iVar19 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x840,&(this->Loops).AllocatorInstance,piVar2);
    }
    *piVar1 = iVar19 + 1;
    FEdgeLoop::FEdgeLoop
              ((FEdgeLoop *)((this->Loops).AllocatorInstance.Data + (longlong)iVar19 * 0x40),
               &local_178);
    if (local_178.BowtieVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.BowtieVertices.AllocatorInstance.Data);
    }
    FVar10.Data = local_178.Vertices.AllocatorInstance.Data;
    if (local_178.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Edges.AllocatorInstance.Data);
      FVar10.Data = local_178.Vertices.AllocatorInstance.Data;
    }
  }
  else {
    local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.ArrayNum = 0;
    local_1a0.ArrayMax = 0;
    bVar6 = TryExtractSubloops(this,&local_1d8,&local_1f0,&local_1c8,&local_1a0);
    if (bVar6) {
      uVar21 = 0;
      if (0 < local_1a0.ArrayNum) {
        do {
          uVar13 = 0;
          if ((int)uVar21 < local_1a0.ArrayNum) {
            uVar13 = ~uVar21 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          pFVar4 = (FEdgeLoop *)(this->Loops).AllocatorInstance.Data;
          pFVar17 = (FEdgeLoop *)(local_1a0.AllocatorInstance.Data + (longlong)(int)uVar21 * 0x40);
          if (((pFVar4 <= pFVar17) && (pFVar17 < pFVar4 + (this->Loops).ArrayMax)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          iVar19 = (this->Loops).ArrayNum;
          if (iVar19 == (this->Loops).ArrayMax) {
            iVar19 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x840,&(this->Loops).AllocatorInstance,&(this->Loops).ArrayMax);
          }
          (this->Loops).ArrayNum = iVar19 + 1;
          FEdgeLoop::FEdgeLoop
                    ((FEdgeLoop *)((this->Loops).AllocatorInstance.Data + (longlong)iVar19 * 0x40),
                     pFVar17);
          uVar21 = uVar21 + 1;
        } while ((int)uVar21 < local_1a0.ArrayNum);
      }
      DestructItems<UE::Geometry::FEdgeLoop,int>
                ((FEdgeLoop *)local_1a0.AllocatorInstance.Data,local_1a0.ArrayNum);
      FVar10.Data = local_1a0.AllocatorInstance.Data;
    }
    else {
      this->bFailed = true;
      DestructItems<UE::Geometry::FEdgeLoop,int>
                ((FEdgeLoop *)local_1a0.AllocatorInstance.Data,local_1a0.ArrayNum);
      FVar10.Data = local_1a0.AllocatorInstance.Data;
    }
  }
  if ((FEdgeLoop *)FVar10.Data != (FEdgeLoop *)0x0) {
    FMemory::Free(FVar10.Data);
  }
  if (local_1f0.ArrayNum < 0) {
    iVar8 = -local_1f0.ArrayNum;
    iVar19 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar8,&local_1f0.AllocatorInstance,&local_1f0.ArrayNum,
                        &local_1f0.ArrayMax);
    memset(local_1f0.AllocatorInstance.Data + (longlong)iVar19 * 4,0,(longlong)iVar8 << 2);
  }
  else if (0 < local_1f0.ArrayNum) {
    local_1f0._8_8_ = local_1f0._8_8_ & 0xffffffff00000000;
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&local_1f0.AllocatorInstance,0,&local_1f0.ArrayMax);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_1d8,0,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&local_1c8,0,Default);
  pFVar15 = local_130;
  pFVar18 = local_128;
LAB_14357e076:
  uVar11 = (ulonglong)local_188;
  pFVar18 = pFVar18 + 4;
  goto LAB_14357d374;
}

// FindLeftTurnEdge @ 143591cb0

int __thiscall
UE::Geometry::FMeshRegionBoundaryLoops::FindLeftTurnEdge
          (FMeshRegionBoundaryLoops *this,int param_1,int param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,int param_4,FIndexFlagSet *param_5)

{
  double *pdVar1;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong local_res8;
  uint local_res10;
  int local_138;
  uint local_134;
  undefined8 local_130;
  ulonglong local_128;
  TVector<double>_u_0 local_120;
  TVector<double>_u_0 local_108;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  TVector<double> local_90 [3];
  
  GetVertexNormal(this,local_90,param_2);
  dVar6 = __real_7fefffffffffffff;
  uVar16 = SUB84(__real_7fefffffffffffff,0);
  uVar17 = (uint)((ulonglong)__real_7fefffffffffffff >> 0x20);
  uVar2 = *(ulonglong *)
           (*(longlong *)
             ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
             (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0x10);
  pFVar3 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
  if ((int)uVar2 == param_2) {
    uVar2 = uVar2 >> 0x20;
  }
  local_128 = (ulonglong)((uint)param_2 >> 9);
  uVar10 = (ulonglong)(param_2 & 0x1ff);
  uVar12 = 0;
  lVar4 = *(longlong *)(pFVar3 + local_128 * 8);
  local_res10 = 0xffffffff;
  pdVar1 = (double *)(lVar4 + uVar10 * 0x18);
  local_f0 = *pdVar1;
  dStack_e8 = pdVar1[1];
  local_e0 = *(double *)(lVar4 + 0x10 + uVar10 * 0x18);
  uVar11 = (ulonglong)((uint)uVar2 & 0x1ff);
  lVar4 = *(longlong *)(pFVar3 + ((uVar2 & 0xffffffff) >> 9) * 8);
  local_c8 = *(double *)(lVar4 + 0x10 + uVar11 * 0x18);
  local_108._s_0.Z = local_e0 - local_c8;
  pdVar1 = (double *)(lVar4 + uVar11 * 0x18);
  local_d8 = *pdVar1;
  dStack_d0 = pdVar1[1];
  local_108._s_0.X = local_f0 - local_d8;
  local_108._s_0.Y = dStack_e8 - dStack_d0;
  uVar8 = 0xffffffff;
  if (0 < param_4) {
    uVar18 = (uint)__xmm_80000000000000008000000000000000;
    uVar2 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
    local_res8 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar12 < param_3->ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        iVar9 = (*pcVar5)();
        return iVar9;
      }
      uVar8 = *(uint *)((param_3->AllocatorInstance).Data + local_res8);
      bVar7 = FIndexFlagSet::Contains(param_5,uVar8);
      if (!bVar7) {
        bVar7 = FIndexFlagSet::Contains(&this->Edges,uVar8);
        if ((bVar7) &&
           (local_130 = *(undefined8 *)
                         (*(longlong *)
                           ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar8 >> 9) * 8) + 8 + (ulonglong)(uVar8 & 0x1ff) * 0x10),
           (int)((ulonglong)local_130 >> 0x20) != -1)) {
          FIndexFlagSet::Contains(&this->Triangles,(int)local_130);
          FIndexFlagSet::Contains(&this->Triangles,local_130._4_4_);
        }
        GetOrientedEdgeVerts(this,(int)&local_138,uVar8);
        if (local_138 == param_2) {
          pFVar3 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
          lVar4 = *(longlong *)(pFVar3 + (ulonglong)(local_134 >> 9) * 8);
          pdVar1 = (double *)(lVar4 + (ulonglong)(local_134 & 0x1ff) * 0x18);
          local_c0 = *pdVar1;
          dStack_b8 = pdVar1[1];
          local_b0 = *(double *)(lVar4 + 0x10 + (ulonglong)(local_134 & 0x1ff) * 0x18);
          lVar4 = *(longlong *)(pFVar3 + local_128 * 8);
          pdVar1 = (double *)(lVar4 + uVar10 * 0x18);
          local_a8 = *pdVar1;
          dStack_a0 = pdVar1[1];
          local_98 = *(double *)(lVar4 + 0x10 + uVar10 * 0x18);
          local_120._s_0.X = local_c0 - local_a8;
          local_120._s_0.Z = local_b0 - local_98;
          local_120._s_0.Y = dStack_b8 - dStack_a0;
          dVar14 = VectorUtil::PlaneAngleSignedD<double>
                             ((TVector<double> *)&local_108._s_0,(TVector<double> *)&local_120._s_0,
                              local_90);
          uVar13 = SUB84(dVar14,0) ^ uVar18;
          uVar15 = (uint)((ulonglong)dVar14 >> 0x20) ^ (uint)uVar2;
          if (((double)CONCAT44(uVar17,uVar16) == dVar6) ||
             ((double)CONCAT44(uVar15,uVar13) < (double)CONCAT44(uVar17,uVar16))) {
            uVar16 = uVar13;
            uVar17 = uVar15;
            local_res10 = uVar8;
          }
        }
      }
      local_res8 = local_res8 + 4;
      uVar12 = uVar12 + 1;
      uVar8 = local_res10;
    } while ((int)uVar12 < param_4);
  }
  return uVar8;
}

// GetAllVertexBoundaryEdges @ 1435b06d0

int __thiscall
UE::Geometry::FMeshRegionBoundaryLoops::GetAllVertexBoundaryEdges
          (FMeshRegionBoundaryLoops *this,int param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  FSmallListSet *pFVar7;
  BaseValueIterator local_48;
  
  pFVar7 = &this->Mesh->VertexEdgeLists;
  uVar5 = 0;
  FSmallListSet::BaseValueIterator::BaseValueIterator(&local_48,pFVar7,param_1,false);
  lVar6 = 0;
  while ((((local_48.ListSet != pFVar7 || (local_48.ListIndex != param_1)) || (local_48.iCur != -1))
         || (local_48.cur_ptr != -1))) {
    iVar4 = local_48.cur_value;
    bVar2 = FIndexFlagSet::Contains(&this->Edges,iVar4);
    if (bVar2) {
      uVar3 = 0;
      if ((int)uVar5 < param_2->ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
      }
      uVar5 = uVar5 + 1;
      *(int *)((param_2->AllocatorInstance).Data + lVar6) = iVar4;
      lVar6 = lVar6 + 4;
    }
    FSmallListSet::BaseValueIterator::GotoNext(&local_48);
  }
  return uVar5;
}

// GetMaxVerticesLoopIndex @ 1435b17b0

int __thiscall
UE::Geometry::FMeshRegionBoundaryLoops::GetMaxVerticesLoopIndex(FMeshRegionBoundaryLoops *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar7 = 0;
  uVar8 = 1;
  if (1 < (this->Loops).ArrayNum) {
    lVar9 = 0;
    lVar10 = 1;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->Loops).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      pFVar1 = (this->Loops).AllocatorInstance.Data;
      uVar6 = 0;
      if ((int)uVar8 < (this->Loops).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
      uVar6 = uVar8;
      lVar3 = lVar10;
      if (*(int *)((this->Loops).AllocatorInstance.Data + lVar10 * 0x40 + 0x10) <=
          *(int *)(pFVar1 + lVar9 * 0x40 + 0x10)) {
        uVar6 = uVar7;
        lVar3 = lVar9;
      }
      lVar9 = lVar3;
      uVar7 = uVar6;
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 1;
    } while ((int)uVar8 < (this->Loops).ArrayNum);
  }
  return uVar7;
}

// GetOrientedEdgeVerts @ 1435b20d0

FIndex2i __thiscall
UE::Geometry::FMeshRegionBoundaryLoops::GetOrientedEdgeVerts
          (FMeshRegionBoundaryLoops *this,int param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_register_00000014;
  FIndex2i_u_0 FVar8;
  uint in_R9D;
  int iVar9;
  int iVar10;
  int iStack_1c;
  
  FVar8._s_0.B = in_register_00000014;
  FVar8._s_0.A = param_1;
  uVar3 = *(undefined8 *)
           (*(longlong *)
             ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
             (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 0x10);
  lVar4 = *(longlong *)
           ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(in_R9D >> 9) * 8);
  uVar1 = *(undefined8 *)(lVar4 + (ulonglong)(in_R9D & 0x1ff) * 0xc);
  iVar2 = *(int *)(lVar4 + 8 + (ulonglong)(in_R9D & 0x1ff) * 0xc);
  iVar7 = (int)uVar1;
  iVar10 = (int)uVar3;
  iVar6 = (int)((ulonglong)uVar1 >> 0x20);
  iVar9 = (int)((ulonglong)uVar3 >> 0x20);
  iVar5 = iVar2;
  if (iVar10 == iVar7) {
    if (iVar9 == iVar6) {
      *(int *)((longlong)FVar8 + 4) = iVar6;
      *(int *)FVar8 = iVar7;
      return (FIndex2i)FVar8;
    }
    if (iVar10 != iVar6) goto LAB_1435b21b8;
joined_r0x0001435b21c0:
    if (iVar9 == iVar5) {
      *(int *)((longlong)FVar8 + 4) = iVar2;
      *(int *)FVar8 = iVar6;
      return (FIndex2i)FVar8;
    }
    iVar5 = iVar7;
    if (iVar10 != iVar2) goto LAB_1435b21d8;
  }
  else {
    if (iVar10 == iVar6) {
      if (iVar9 == iVar7) {
        *(int *)((longlong)FVar8 + 4) = iVar6;
        *(int *)FVar8 = iVar7;
        return (FIndex2i)FVar8;
      }
      goto joined_r0x0001435b21c0;
    }
LAB_1435b21b8:
    iVar5 = iVar6;
    if (iVar10 == iVar2) goto joined_r0x0001435b21c0;
LAB_1435b21d8:
    iVar5 = iVar2;
    if (iVar10 != iVar7) goto LAB_1435b21a0;
  }
  if (iVar9 == iVar5) {
    *(int *)((longlong)FVar8 + 4) = iVar7;
    *(int *)FVar8 = iVar2;
    return (FIndex2i)FVar8;
  }
LAB_1435b21a0:
  *(int *)((longlong)FVar8 + 4) = iVar7;
  *(int *)FVar8 = iStack_1c;
  return (FIndex2i)FVar8;
}

// GetTriangleSetBoundaryLoop @ 1435b49c0

bool __cdecl
UE::Geometry::FMeshRegionBoundaryLoops::GetTriangleSetBoundaryLoop
          (FDynamicMesh3 *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          FEdgeLoop *param_3)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  code *pcVar8;
  FEdgeLoop *pFVar9;
  FEdgeLoop *pFVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  ForAnyElementType FVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  longlong lVar22;
  undefined8 *puVar23;
  undefined1 local_res10 [8];
  FEdgeLoop *local_res18;
  int local_res20;
  uint local_c8 [2];
  undefined8 local_c0;
  int local_b8;
  uint local_b4;
  TArray<int,TSizedDefaultAllocator<32>_> local_b0;
  undefined8 local_a0;
  uint local_98 [2];
  undefined8 local_90;
  undefined8 local_88;
  int local_80;
  BaseValueIterator local_78;
  
  pFVar19 = (param_2->AllocatorInstance).Data;
  iVar14 = param_2->ArrayNum;
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  pFVar20 = pFVar19 + (longlong)iVar14 * 4;
  local_res18 = param_3;
  while( true ) {
    if (param_2->ArrayNum != iVar14) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    pFVar9 = local_res18;
    if (pFVar19 == pFVar20) break;
    uVar15 = *(uint *)pFVar19;
    lVar22 = *(longlong *)
              ((param_1->TriangleEdges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar15 >> 9) * 8
              );
    local_a0 = *(undefined8 *)(lVar22 + (ulonglong)(uVar15 & 0x1ff) * 0xc);
    local_98[0] = *(uint *)(lVar22 + 8 + (ulonglong)(uVar15 & 0x1ff) * 0xc);
    uVar6 = *(undefined8 *)
             (*(longlong *)
               ((param_1->Edges).Blocks.AllocatorInstance.Data +
               (ulonglong)((uint)local_a0 >> 9) * 8) + 8 +
             (ulonglong)((uint)local_a0 & 0x1ff) * 0x10);
    uVar21 = (uint)uVar6;
    if (uVar21 == uVar15) {
      uVar21 = (uint)((ulonglong)uVar6 >> 0x20);
    }
    if (uVar21 != 0xffffffff) {
      pFVar18 = (param_2->AllocatorInstance).Data;
      pFVar5 = pFVar18 + (longlong)param_2->ArrayNum * 4;
      for (; pFVar18 != pFVar5; pFVar18 = pFVar18 + 4) {
        if (*(uint *)pFVar18 == uVar21) goto LAB_1435b4ab1;
      }
    }
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(&local_b0,(int *)&local_a0);
LAB_1435b4ab1:
    uVar6 = *(undefined8 *)
             (*(longlong *)
               ((param_1->Edges).Blocks.AllocatorInstance.Data +
               (ulonglong)(local_a0._4_4_ >> 9) * 8) + 8 +
             (ulonglong)(local_a0._4_4_ & 0x1ff) * 0x10);
    uVar21 = (uint)uVar6;
    if (uVar21 == uVar15) {
      uVar21 = (uint)((ulonglong)uVar6 >> 0x20);
    }
    if (uVar21 != 0xffffffff) {
      pFVar18 = (param_2->AllocatorInstance).Data;
      pFVar5 = pFVar18 + (longlong)param_2->ArrayNum * 4;
      for (; pFVar18 != pFVar5; pFVar18 = pFVar18 + 4) {
        if (*(uint *)pFVar18 == uVar21) goto LAB_1435b4b1b;
      }
    }
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
              (&local_b0,(int *)((longlong)&local_a0 + 4));
LAB_1435b4b1b:
    uVar6 = *(undefined8 *)
             (*(longlong *)
               ((param_1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(local_98[0] >> 9) * 8)
              + 8 + (ulonglong)(local_98[0] & 0x1ff) * 0x10);
    uVar21 = (uint)uVar6;
    if (uVar21 == uVar15) {
      uVar21 = (uint)((ulonglong)uVar6 >> 0x20);
    }
    if (uVar21 != 0xffffffff) {
      pFVar18 = (param_2->AllocatorInstance).Data;
      pFVar5 = pFVar18 + (longlong)param_2->ArrayNum * 4;
      for (; pFVar18 != pFVar5; pFVar18 = pFVar18 + 4) {
        if (*(uint *)pFVar18 == uVar21) goto LAB_1435b4b7b;
      }
    }
    TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(&local_b0,(int *)local_98);
LAB_1435b4b7b:
    pFVar19 = pFVar19 + 4;
  }
  if (local_b0.ArrayNum == 0) {
LAB_1435b523e:
    bVar11 = false;
LAB_1435b5240:
    if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.AllocatorInstance.Data);
    }
    return bVar11;
  }
  local_res18->Mesh = param_1;
  if ((local_b0.ArrayNum < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    uVar12 = (*pcVar8)();
    return (bool)uVar12;
  }
  local_b4 = *(uint *)local_b0.AllocatorInstance.Data;
  puVar23 = (undefined8 *)
            (*(longlong *)
              ((param_1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(local_b4 >> 9) * 8) +
            (ulonglong)(local_b4 & 0x1ff) * 0x10);
  pFVar19 = (param_2->AllocatorInstance).Data;
  uVar6 = puVar23[1];
  pFVar20 = pFVar19 + (longlong)param_2->ArrayNum * 4;
  bVar11 = true;
  local_res20 = 1;
  for (; pFVar19 != pFVar20; pFVar19 = pFVar19 + 4) {
    if (*(uint *)pFVar19 == (uint)uVar6) goto LAB_1435b4c21;
  }
  bVar11 = false;
LAB_1435b4c21:
  local_c0 = *puVar23;
  local_90._4_4_ = (uint)((ulonglong)uVar6 >> 0x20);
  if (bVar11) {
    local_90._4_4_ = (uint)uVar6;
  }
  lVar22 = *(longlong *)
            ((param_1->Triangles).Blocks.AllocatorInstance.Data +
            (ulonglong)(local_90._4_4_ >> 9) * 8);
  local_88 = *(undefined8 *)(lVar22 + (ulonglong)(local_90._4_4_ & 0x1ff) * 0xc);
  local_80 = *(int *)(lVar22 + 8 + (ulonglong)(local_90._4_4_ & 0x1ff) * 0xc);
  iVar14 = (int)local_c0;
  iVar16 = (int)((ulonglong)local_c0 >> 0x20);
  if (iVar14 == (int)local_88) {
    bVar11 = local_80 == iVar16;
  }
  else {
    iVar13 = (int)((ulonglong)local_88 >> 0x20);
    if (iVar14 == iVar13) {
      bVar11 = (int)local_88 == iVar16;
    }
    else {
      if (iVar14 != local_80) goto LAB_1435b4c9b;
      bVar11 = iVar13 == iVar16;
    }
  }
  if (bVar11) {
    local_c0 = CONCAT44(iVar14,iVar16);
  }
LAB_1435b4c9b:
  pTVar1 = &pFVar9->Vertices;
  iVar14 = (pFVar9->Vertices).ArrayMax;
  piVar2 = &(pFVar9->Vertices).ArrayMax;
  (pFVar9->Vertices).ArrayNum = 0;
  local_90 = (int *)uVar6;
  if (iVar14 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar1->AllocatorInstance,0,piVar2);
    iVar14 = *piVar2;
  }
  pFVar20 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar20 <= (FScriptContainerElement *)&local_c0) &&
      ((FScriptContainerElement *)&local_c0 < pFVar20 + (longlong)iVar14 * 4)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar8 = (code *)swi(3);
    uVar12 = (*pcVar8)();
    return (bool)uVar12;
  }
  iVar14 = (pFVar9->Vertices).ArrayNum;
  if (iVar14 == *piVar2) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&pTVar1->AllocatorInstance,piVar2);
  }
  (pFVar9->Vertices).ArrayNum = iVar14 + 1;
  *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar14 * 4) = (undefined4)local_c0;
  pFVar20 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar20 <= (FScriptContainerElement *)((longlong)&local_c0 + 4U)) &&
      ((FScriptContainerElement *)((longlong)&local_c0 + 4U) < pFVar20 + (longlong)*piVar2 * 4)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar8 = (code *)swi(3);
    uVar12 = (*pcVar8)();
    return (bool)uVar12;
  }
  iVar14 = (pFVar9->Vertices).ArrayNum;
  if (iVar14 == *piVar2) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&pTVar1->AllocatorInstance,piVar2);
  }
  (pFVar9->Vertices).ArrayNum = iVar14 + 1;
  *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar14 * 4) = local_c0._4_4_;
  iVar14 = (pFVar9->Vertices).ArrayNum;
  uVar21 = iVar14 - 1;
  uVar15 = 0;
  if ((int)uVar21 < iVar14) {
    uVar15 = ~uVar21 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    uVar12 = (*pcVar8)();
    return (bool)uVar12;
  }
  uVar15 = local_b4;
  pTVar3 = &pFVar9->Edges;
  piVar4 = &(pFVar9->Edges).ArrayMax;
  iVar14 = *(int *)((pTVar1->AllocatorInstance).Data +
                   (longlong)(pFVar9->Vertices).ArrayNum * 4 + -4);
  iVar16 = *piVar4;
  (pFVar9->Edges).ArrayNum = 0;
  local_90 = piVar4;
  if (iVar16 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar3->AllocatorInstance,0,piVar4);
    iVar16 = *piVar4;
  }
  pFVar20 = (pTVar3->AllocatorInstance).Data;
  if (((pFVar20 <= (FScriptContainerElement *)&local_b4) &&
      ((FScriptContainerElement *)&local_b4 < pFVar20 + (longlong)iVar16 * 4)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar8 = (code *)swi(3);
    uVar12 = (*pcVar8)();
    return (bool)uVar12;
  }
  iVar16 = (pFVar9->Edges).ArrayNum;
  if (iVar16 == *piVar4) {
    iVar16 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&pTVar3->AllocatorInstance,piVar4);
  }
  (pFVar9->Edges).ArrayNum = iVar16 + 1;
  *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)iVar16 * 4) = local_b4;
LAB_1435b4f30:
  FSmallListSet::BaseValueIterator::BaseValueIterator
            (&local_78,&param_1->VertexEdgeLists,iVar14,false);
  iVar16 = local_b0.ArrayNum;
  lVar22 = (longlong)local_b0.ArrayNum;
  while (((local_78.ListSet != &param_1->VertexEdgeLists || (local_78.ListIndex != iVar14)) ||
         ((local_78.iCur != -1 || (iVar13 = local_res20, local_78.cur_ptr != -1))))) {
    local_c8[0] = local_78.cur_value;
    if (local_c8[0] != uVar15) {
      for (FVar17.Data = local_b0.AllocatorInstance.Data;
          FVar17.Data != local_b0.AllocatorInstance.Data + lVar22 * 4; FVar17.Data = FVar17.Data + 4
          ) {
        if (*(uint *)FVar17.Data == local_c8[0]) {
          pFVar19 = (pTVar3->AllocatorInstance).Data;
          pFVar20 = pFVar19 + (longlong)(pFVar9->Edges).ArrayNum * 4;
          goto joined_r0x0001435b4fa6;
        }
      }
    }
LAB_1435b4f8d:
    FSmallListSet::BaseValueIterator::GotoNext(&local_78);
  }
LAB_1435b5236:
  if (iVar13 != iVar16) goto LAB_1435b523e;
  bVar11 = true;
  goto LAB_1435b5240;
joined_r0x0001435b4fa6:
  if (pFVar19 == pFVar20) {
    uVar7 = *(ulonglong *)
             (*(longlong *)
               ((param_1->Edges).Blocks.AllocatorInstance.Data +
               ((local_78._32_8_ & 0xffffffff) >> 9) * 8) + (ulonglong)(local_c8[0] & 0x1ff) * 0x10)
    ;
    if ((int)uVar7 == iVar14) {
      uVar7 = uVar7 >> 0x20;
    }
    local_b8 = (int)uVar7;
    if (((pFVar9->Vertices).ArrayNum < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      uVar12 = (*pcVar8)();
      return (bool)uVar12;
    }
    pFVar10 = local_res18;
    pFVar20 = (pTVar1->AllocatorInstance).Data;
    if (local_b8 != *(int *)pFVar20) {
      pFVar19 = pFVar20 + (longlong)(local_res18->Vertices).ArrayNum * 4;
      goto joined_r0x0001435b5044;
    }
    pFVar20 = (local_res18->Edges).AllocatorInstance.Data;
    if (((pFVar20 <= (FScriptContainerElement *)local_c8) &&
        ((FScriptContainerElement *)local_c8 < pFVar20 + (longlong)(local_res18->Edges).ArrayMax * 4
        )) && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar11)) {
      pcVar8 = (code *)swi(3);
      uVar12 = (*pcVar8)();
      return (bool)uVar12;
    }
    iVar14 = (pFVar10->Edges).ArrayNum;
    if (iVar14 == (pFVar10->Edges).ArrayMax) {
      iVar14 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&(pFVar10->Edges).AllocatorInstance,local_90);
    }
    (pFVar10->Edges).ArrayNum = iVar14 + 1;
    *(uint *)((pFVar10->Edges).AllocatorInstance.Data + (longlong)iVar14 * 4) = local_c8[0];
    iVar13 = local_res20 + 1;
    iVar16 = local_b0.ArrayNum;
    goto LAB_1435b5236;
  }
  if (*(uint *)pFVar19 == local_c8[0]) goto LAB_1435b4f8d;
  pFVar19 = pFVar19 + 4;
  goto joined_r0x0001435b4fa6;
joined_r0x0001435b5044:
  if (pFVar20 == pFVar19) goto LAB_1435b5058;
  if (*(int *)pFVar20 == local_b8) goto LAB_1435b523e;
  pFVar20 = pFVar20 + 4;
  goto joined_r0x0001435b5044;
LAB_1435b5058:
  pFVar20 = (pTVar3->AllocatorInstance).Data;
  if (((pFVar20 <= (FScriptContainerElement *)local_c8) &&
      ((FScriptContainerElement *)local_c8 < pFVar20 + (longlong)(pFVar9->Edges).ArrayMax * 4)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar8 = (code *)swi(3);
    uVar12 = (*pcVar8)();
    return (bool)uVar12;
  }
  iVar14 = (pFVar9->Edges).ArrayNum;
  if (iVar14 == (pFVar9->Edges).ArrayMax) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&pTVar3->AllocatorInstance,&(pFVar9->Edges).ArrayMax);
  }
  uVar15 = local_c8[0];
  (pFVar9->Edges).ArrayNum = iVar14 + 1;
  *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)iVar14 * 4) = local_c8[0];
  pFVar20 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar20 <= (FScriptContainerElement *)&local_b8) &&
      ((FScriptContainerElement *)&local_b8 < pFVar20 + (longlong)*piVar2 * 4)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar8 = (code *)swi(3);
    uVar12 = (*pcVar8)();
    return (bool)uVar12;
  }
  iVar14 = (pFVar9->Vertices).ArrayNum;
  if (iVar14 == *piVar2) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&pTVar1->AllocatorInstance,piVar2);
  }
  local_res20 = local_res20 + 1;
  (pFVar9->Vertices).ArrayNum = iVar14 + 1;
  *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar14 * 4) = local_b8;
  iVar14 = local_b8;
  goto LAB_1435b4f30;
}

// GetVertexBoundaryEdges @ 1435b5680

int __thiscall
UE::Geometry::FMeshRegionBoundaryLoops::GetVertexBoundaryEdges
          (FMeshRegionBoundaryLoops *this,int param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  FSmallListSet *pFVar3;
  int iVar4;
  BaseValueIterator local_48;
  
  pFVar3 = &this->Mesh->VertexEdgeLists;
  iVar2 = 0;
  FSmallListSet::BaseValueIterator::BaseValueIterator(&local_48,pFVar3,param_1,false);
LAB_1435b56c8:
  do {
    if ((((local_48.ListSet == pFVar3) && (local_48.ListIndex == param_1)) && (local_48.iCur == -1))
       && (local_48.cur_ptr == -1)) {
      return iVar2;
    }
    iVar4 = local_48.cur_value;
    bVar1 = FIndexFlagSet::Contains(&this->Edges,iVar4);
    if (bVar1) {
      if (iVar2 == 0) {
        iVar2 = 1;
        *param_2 = iVar4;
        FSmallListSet::BaseValueIterator::GotoNext(&local_48);
        goto LAB_1435b56c8;
      }
      if (iVar2 == 1) {
        *param_3 = iVar4;
      }
      iVar2 = iVar2 + 1;
    }
    FSmallListSet::BaseValueIterator::GotoNext(&local_48);
  } while( true );
}

// GetVertexNormal @ 1435b5930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
UE::Geometry::FMeshRegionBoundaryLoops::GetVertexNormal
          (FMeshRegionBoundaryLoops *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  TVector<double> *pTVar5;
  longlong *plVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_208 [32];
  TVector<double> local_1e8;
  undefined1 local_1c8 [48];
  ValueIterator local_198;
  ValueIterator local_170;
  undefined1 local_148 [144];
  undefined1 local_b8 [144];
  ulonglong local_28;
  
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_208;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FDynamicMesh3::VtxTrianglesItr
            (this->Mesh,
             (TPairExpandEnumerable<UE::Geometry::FSmallListSet::ValueIterator> *)local_1c8,param_1)
  ;
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
            ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_148,&local_198
             ,&local_170,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1c8);
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
  TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
            ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_b8,&local_170,
             &local_170,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_1c8);
  while ((((local_148._0_8_ != local_b8._0_8_ || (local_148._8_4_ != local_b8._8_4_)) ||
          (local_148._24_4_ != local_b8._24_4_)) || (local_148._28_4_ != local_b8._28_4_))) {
    pTVar5 = FDynamicMesh3::GetTriNormal(this->Mesh,&local_1e8,local_148._88_4_);
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (__return_storage_ptr__->field0_0x0)._s_0.X + (pTVar5->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (pTVar5->field0_0x0)._s_0.Y + (__return_storage_ptr__->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (pTVar5->field0_0x0)._s_0.Z + (__return_storage_ptr__->field0_0x0)._s_0.Z;
    TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
              ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_148);
  }
  if (local_b8._96_8_ != 0) {
    plVar6 = (longlong *)(local_b8 + 0x70);
    if ((longlong *)local_b8._136_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_b8._136_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (local_148._96_8_ != 0) {
    plVar6 = (longlong *)(local_148 + 0x70);
    if ((longlong *)local_148._136_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_148._136_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (local_1c8._0_8_ != 0) {
    plVar6 = (longlong *)(local_1c8 + 0x10);
    if ((longlong *)local_1c8._40_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_1c8._40_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  dVar1 = (__return_storage_ptr__->field0_0x0)._s_0.X;
  dVar8 = (__return_storage_ptr__->field0_0x0)._s_0.Y;
  dVar2 = (__return_storage_ptr__->field0_0x0)._s_0.Z;
  auVar9._0_8_ = dVar8 * dVar8 + dVar1 * dVar1 + dVar2 * dVar2;
  auVar9._8_8_ = 0;
  dVar7 = 0.0;
  auVar9 = sqrtpd(auVar9,auVar9);
  if (auVar9._0_8_ <= 0.0) {
    dVar8 = 0.0;
    dVar3 = 0.0;
  }
  else {
    dVar3 = __real_3ff0000000000000 / auVar9._0_8_;
    dVar7 = dVar3 * dVar2;
    dVar8 = dVar3 * dVar8;
    dVar3 = dVar3 * dVar1;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar7;
  return __return_storage_ptr__;
}

// IsEdgeOnBoundary @ 1435ba0d0

bool __thiscall
UE::Geometry::FMeshRegionBoundaryLoops::IsEdgeOnBoundary
          (FMeshRegionBoundaryLoops *this,int param_1,int *param_2,int *param_3)

{
  ulonglong uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  bVar2 = FIndexFlagSet::Contains(&this->Edges,param_1);
  if (bVar2) {
    *param_3 = -1;
    *param_2 = -1;
    uVar1 = *(ulonglong *)
             (*(longlong *)
               ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
               (ulonglong)((uint)param_1 >> 9) * 8) + 8 + (ulonglong)(param_1 & 0x1ff) * 0x10);
    iVar5 = (int)(uVar1 >> 0x20);
    iVar4 = (int)uVar1;
    if (iVar5 == -1) {
      *param_2 = iVar4;
      *param_3 = -1;
      return true;
    }
    bVar2 = FIndexFlagSet::Contains(&this->Triangles,iVar4);
    bVar3 = FIndexFlagSet::Contains(&this->Triangles,iVar5);
    if (bVar2 != bVar3) {
      if (bVar2) {
        uVar1 = uVar1 >> 0x20;
        iVar5 = iVar4;
      }
      *param_2 = iVar5;
      *param_3 = (int)uVar1;
      return true;
    }
  }
  return false;
}

// SetMesh @ 1435c2600

void __thiscall
UE::Geometry::FMeshRegionBoundaryLoops::SetMesh
          (FMeshRegionBoundaryLoops *this,FDynamicMesh3 *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FIndexFlagSet *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  float fVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  longlong lVar15;
  int *piVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  FScriptContainerElement FVar22;
  uint local_res10 [2];
  TArray<int,TSizedDefaultAllocator<32>_> *local_res18;
  uint local_res20 [2];
  uint local_88;
  int local_84;
  int local_80 [2];
  int *local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  this->Mesh = param_1;
  fVar8 = __real_3d4ccccd;
  iVar20 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
           (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  piVar16 = &param_2->ArrayNum;
  if ((iVar20 < 32000) || (__real_3d4ccccd <= (float)*piVar16 / (float)iVar20)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  local_res18 = param_2;
  local_78 = piVar16;
  FIndexFlagSet::InitManual(&this->Triangles,bVar9,iVar20);
  pTVar2 = local_res18;
  iVar20 = *piVar16;
  uVar19 = 0;
  if (0 < iVar20) {
    lVar18 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar19 < iVar20) {
        uVar11 = ~uVar19 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_res10[0] = *(uint *)((pTVar2->AllocatorInstance).Data + lVar18);
      lVar15 = (longlong)(int)local_res10[0];
      if ((this->Triangles).Dense.field0_0x0.TypedValue.ArrayMax == -1) {
        if (*(int *)((longlong)&(this->Triangles).Sparse.field0_0x0 + 0xc) == -1) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Sparse.IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\SparseIndexCollectionTypes.h"
                             ,0x66,L"");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((*(int *)((longlong)&(this->Triangles).Sparse.field0_0x0 + 0xc) == -1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                   &(this->Triangles).Sparse,&local_84,(bool *)local_res10);
      }
      else {
        uVar11 = 0;
        if ((int)local_res10[0] < (this->Triangles).Dense.field0_0x0.TypedValue.ArrayNum) {
          uVar11 = ~local_res10[0] >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar17 = *(longlong *)&(this->Triangles).Dense.field0_0x0;
        if (*(char *)(lVar15 + lVar17) == '\0') {
          *(undefined1 *)(lVar15 + lVar17) = 1;
          piVar1 = &(this->Triangles).DenseCount;
          *piVar1 = *piVar1 + 1;
        }
      }
      iVar20 = *piVar16;
      uVar19 = uVar19 + 1;
      lVar18 = lVar18 + 4;
    } while ((int)uVar19 < iVar20);
    piVar16 = &pTVar2->ArrayNum;
    param_2 = local_res18;
    local_78 = piVar16;
  }
  this_00 = &this->Edges;
  iVar21 = (this->Mesh->EdgeRefCounts).RefCounts.CurBlockUsed +
           (this->Mesh->EdgeRefCounts).RefCounts.CurBlock * 0x200;
  if ((iVar21 < 32000) || (fVar8 <= (float)iVar20 / (float)iVar21)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  FIndexFlagSet::InitManual(this_00,bVar9,iVar21);
  iVar20 = *piVar16;
  uVar19 = 0;
  if (0 < iVar20) {
    lVar18 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar19 < iVar20) {
        uVar11 = ~uVar19 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar11 = *(uint *)((param_2->AllocatorInstance).Data + lVar18);
      uVar13 = (ulonglong)(uVar11 & 0x1ff);
      lVar17 = 0;
      lVar15 = *(longlong *)
                ((this->Mesh->TriangleEdges).Blocks.AllocatorInstance.Data +
                (ulonglong)(uVar11 >> 9) * 8);
      local_70 = *(undefined8 *)(lVar15 + uVar13 * 0xc);
      local_68 = *(undefined4 *)(lVar15 + 8 + uVar13 * 0xc);
      do {
        uVar11 = *(uint *)((longlong)&local_70 + lVar17 * 4);
        local_88 = uVar11;
        if ((this->Edges).Dense.field0_0x0.TypedValue.ArrayMax == -1) {
          if (*(int *)((longlong)&(this->Edges).Sparse.field0_0x0 + 0xc) == -1) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Sparse.IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\SparseIndexCollectionTypes.h"
                               ,0x51,L"");
            if (bVar9) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if ((*(int *)((longlong)&(this->Edges).Sparse.field0_0x0 + 0xc) == -1) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if (*(int *)((longlong)&(this->Edges).Sparse.field0_0x0 + 8) !=
              *(int *)((longlong)&(this->Edges).Sparse.field0_0x0 + 0x34)) {
            puVar3 = *(undefined1 **)((longlong)&(this->Edges).Sparse.field0_0x0 + 0x40);
            puVar14 = (undefined1 *)((longlong)&(this->Edges).Sparse.field0_0x0 + 0x38);
            if (puVar3 != (undefined1 *)0x0) {
              puVar14 = puVar3;
            }
            iVar20 = *(int *)(puVar14 +
                             (ulonglong)
                             ((this->Edges).Sparse.field0_0x0.TypedValue.HashSize - 1U & uVar11) * 4
                             );
            if (iVar20 != -1) {
              lVar15 = *(longlong *)&(this->Edges).Sparse.field0_0x0;
              do {
                if (*(uint *)(lVar15 + (longlong)iVar20 * 0xc) == uVar11) goto LAB_1435c2a0c;
                iVar20 = *(int *)(lVar15 + 4 + (longlong)iVar20 * 0xc);
              } while (iVar20 != -1);
            }
          }
          iVar20 = -1;
LAB_1435c2a0c:
          FVar22 = (FScriptContainerElement)(iVar20 != -1);
        }
        else {
          uVar12 = 0;
          if ((int)uVar11 < (this->Edges).Dense.field0_0x0.TypedValue.ArrayNum) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          FVar22 = (this_00->Dense).field0_0x0.TypedValue.AllocatorInstance.Data[(int)uVar11];
        }
        if (FVar22 == (FScriptContainerElement)0x0) {
          uVar4 = *(undefined8 *)
                   (*(longlong *)
                     ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
                     (ulonglong)(local_88 >> 9) * 8) + 8 + (ulonglong)(local_88 & 0x1ff) * 0x10);
          iVar20 = (int)((ulonglong)uVar4 >> 0x20);
          if (iVar20 != -1) {
            bVar9 = FIndexFlagSet::Contains(&this->Triangles,iVar20);
            bVar10 = FIndexFlagSet::Contains(&this->Triangles,(int)uVar4);
            if (bVar10 == bVar9) goto LAB_1435c2bec;
          }
          pTVar2 = &this->edges_roi;
          pFVar5 = (pTVar2->AllocatorInstance).Data;
          if (((pFVar5 <= (FScriptContainerElement *)&local_88) &&
              ((FScriptContainerElement *)&local_88 <
               pFVar5 + (longlong)(this->edges_roi).ArrayMax * 4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar20 = (this->edges_roi).ArrayNum;
          piVar16 = &(this->edges_roi).ArrayMax;
          if (iVar20 == *piVar16) {
            iVar20 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar2->AllocatorInstance,piVar16);
          }
          (this->edges_roi).ArrayNum = iVar20 + 1;
          *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar20 * 4) = local_88;
          lVar15 = (longlong)(int)local_88;
          local_res20[0] = local_88;
          if ((this->Edges).Dense.field0_0x0.TypedValue.ArrayMax == -1) {
            if (*(int *)((longlong)&(this->Edges).Sparse.field0_0x0 + 0xc) == -1) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Sparse.IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\SparseIndexCollectionTypes.h"
                                 ,0x66,L"");
              if (bVar9) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              if ((*(int *)((longlong)&(this->Edges).Sparse.field0_0x0 + 0xc) == -1) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsSet()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                     ,0x1bd,
                                     L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                    ), bVar9)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                       &(this->Edges).Sparse,local_80,(bool *)local_res20);
          }
          else {
            uVar11 = 0;
            if ((int)local_88 < (this->Edges).Dense.field0_0x0.TypedValue.ArrayNum) {
              uVar11 = ~local_88 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar6 = *(longlong *)&(this_00->Dense).field0_0x0;
            if (*(char *)(lVar15 + lVar6) == '\0') {
              *(undefined1 *)(lVar15 + lVar6) = 1;
              piVar16 = &(this->Edges).DenseCount;
              *piVar16 = *piVar16 + 1;
            }
          }
        }
LAB_1435c2bec:
        lVar17 = lVar17 + 1;
      } while (lVar17 < 3);
      uVar19 = uVar19 + 1;
      lVar18 = lVar18 + 4;
      iVar20 = *local_78;
      param_2 = local_res18;
    } while ((int)uVar19 < iVar20);
  }
  return;
}

// TryExtractSubloops @ 1435c8cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::FMeshRegionBoundaryLoops::TryExtractSubloops
          (FMeshRegionBoundaryLoops *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Geometry::FEdgeLoop,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FMeshRegionBoundaryLoops *pFVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  byte bVar9;
  ForAnyElementType FVar10;
  ulonglong uVar11;
  longlong lVar12;
  ForElementType<unsigned_int> FVar13;
  uint *puVar14;
  ForElementType<FSetElementId> FVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  FScriptContainerElement *pFVar20;
  FEdgeLoop *pFVar21;
  uint uVar22;
  ulonglong uVar23;
  FScriptContainerElement *pFVar24;
  undefined1 auStackY_248 [32];
  undefined1 local_1f8 [4];
  uint local_1f4;
  uint local_1f0;
  int local_1ec;
  TArray<int,TSizedDefaultAllocator<32>_> local_1e8;
  int local_1d8;
  uint uStack_1d4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1d0;
  undefined4 local_1c8;
  int iStack_1c4;
  int iStack_1c0;
  undefined4 uStack_1bc;
  int local_1b8;
  uint uStack_1b4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1b0;
  undefined4 local_1a8;
  int iStack_1a4;
  int iStack_1a0;
  undefined4 uStack_19c;
  FMeshRegionBoundaryLoops *local_198;
  TArray<int,TSizedDefaultAllocator<32>_> *local_190;
  TArray<int,TSizedDefaultAllocator<32>_> local_188;
  undefined4 local_178;
  int local_174;
  undefined4 local_170;
  int local_16c;
  TPairInitializer<int_const_&,int_const_&> local_168;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_150;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_128;
  FSparseArrayAllocationInfo local_108;
  uint *local_f8;
  uint *local_f0;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_e8;
  FScriptContainerElement local_b0 [8];
  ForAnyElementType local_a8;
  uint local_a0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  uVar22 = param_3->ArrayNum;
  pFVar24 = (param_3->AllocatorInstance).Data;
  local_168.Value = (int *)param_4;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_198 = this;
  local_190 = param_3;
  if (((int)uVar22 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  local_e8.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_e8.AllocationFlags.NumBits = 0;
  local_e8.AllocationFlags.MaxBits = 0x80;
  local_e8.FirstFreeIndex = -1;
  local_e8.NumFreeIndices = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0 = 0;
  if (uVar22 == 0) goto LAB_1435c9005;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar22);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(&local_e8,uVar22);
  uVar17 = 1;
  if (3 < uVar22) {
    uVar11 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_178 = (undefined4)lVar12;
    uVar17 = 1 << ((byte)lVar12 & 0x1f);
  }
  if ((local_a0 != 0) && ((int)uVar17 <= (int)local_a0)) goto LAB_1435c9005;
  local_a0 = uVar17;
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,0,4);
  }
  if (uVar17 != 0) {
    uVar18 = uVar17;
    if (uVar17 < 2) {
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        uVar18 = 0;
        goto LAB_1435c8e54;
      }
    }
    else {
LAB_1435c8e54:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,uVar18,4);
    }
    if (0 < (int)uVar17) {
      uVar23 = (ulonglong)uVar17;
      uVar11 = 0;
      do {
        FVar10.Data = local_b0;
        if (local_a8.Data != (FScriptContainerElement *)0x0) {
          FVar10.Data = local_a8.Data;
        }
        uVar8 = uVar11 & (longlong)(int)uVar17 - 1U;
        uVar11 = uVar11 + 1;
        *(undefined4 *)(FVar10.Data + uVar8 * 4) = 0xffffffff;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
  if (local_a0 != 0) {
    pTStack_1d0 = &local_e8.AllocationFlags;
    uStack_1d4 = 1;
    local_1d8 = 0;
    iStack_1c4 = 0;
    iStack_1c0 = 0;
    if (local_e8.AllocationFlags.NumBits != 0) {
      FVar13 = (ForElementType<unsigned_int>)&local_e8.AllocationFlags;
      if (local_e8.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar13 = local_e8.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar17 = *(uint *)FVar13;
      iStack_1c0 = 0;
      local_1d8 = 0;
      while (uVar17 == 0) {
        iStack_1c0 = iStack_1c0 + 0x20;
        lVar12 = (longlong)local_1d8;
        local_1d8 = local_1d8 + 1;
        if ((int)(local_e8.AllocationFlags.NumBits + -1 +
                 (local_e8.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < local_1d8)
        goto LAB_1435c8f61;
        uVar17 = *(uint *)((uchar *)((longlong)FVar13 + 4) + lVar12 * 4);
      }
      uStack_1d4 = -uVar17 & uVar17;
      uVar11 = (ulonglong)uStack_1d4 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_174 = (int)lVar12;
      iStack_1c4 = iStack_1c0 + -1 + local_174;
      if (local_e8.AllocationFlags.NumBits < iStack_1c4) {
LAB_1435c8f61:
        iStack_1c4 = local_e8.AllocationFlags.NumBits;
      }
    }
    local_1c8 = 0xffffffff;
    local_158 = &local_e8;
    local_150._padding_ = CONCAT44(uStack_1d4,local_1d8);
    local_150.CurrentBitIndex = iStack_1c4;
    local_150.UnvisitedBitMask = 0xffffffff;
    local_150._28_4_ = uStack_1bc;
    local_150.BaseBitIndex = iStack_1c0;
    local_150.Array = pTStack_1d0;
    iVar6 = iStack_1c4;
    if (iStack_1c4 < local_e8.AllocationFlags.NumBits) {
      do {
        lVar12 = (longlong)iVar6;
        pFVar20 = (local_158->Data).AllocatorInstance.Data;
        uVar17 = local_a0 - 1 & *(uint *)(pFVar20 + lVar12 * 0xc);
        *(uint *)(pFVar20 + lVar12 * 0xc + 8) = uVar17;
        FVar10.Data = local_b0;
        if (local_a8.Data != (FScriptContainerElement *)0x0) {
          FVar10.Data = local_a8.Data;
        }
        uVar11 = (longlong)(int)local_a0 - 1U & (longlong)(int)uVar17;
        *(undefined4 *)(pFVar20 + lVar12 * 0xc + 4) = *(undefined4 *)(FVar10.Data + uVar11 * 4);
        *(int *)(FVar10.Data + uVar11 * 4) = iVar6;
        local_150.UnvisitedBitMask = local_150.UnvisitedBitMask & ~local_150._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_150);
        iVar6 = local_150.CurrentBitIndex;
      } while (local_150.CurrentBitIndex < (local_150.Array)->NumBits);
    }
  }
LAB_1435c9005:
  pFVar20 = pFVar24 + (longlong)(int)uVar22 * 4;
  pFVar3 = local_198;
  iVar6 = local_e8.FirstFreeIndex;
  for (; local_198 = pFVar3, local_e8.FirstFreeIndex = iVar6, pFVar24 != pFVar20;
      pFVar24 = pFVar24 + 4) {
    if (local_e8.NumFreeIndices == 0) {
      iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,1,(ForAnyElementType *)&local_e8,&local_e8.Data.ArrayNum,
                         &local_e8.Data.ArrayMax);
      iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_e8.AllocationFlags,1);
      FVar13 = (ForElementType<unsigned_int>)&local_e8.AllocationFlags;
      if (local_e8.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar13 = local_e8.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      bVar9 = (byte)iVar7 & 0x1f;
      if (iVar7 < 0) {
        iVar7 = iVar7 + 0x1f;
        bVar9 = bVar9 - 0x20;
      }
      puVar14 = (uint *)((longlong)FVar13 + (longlong)(iVar7 >> 5) * 4);
      *puVar14 = *puVar14 & ~(1 << (bVar9 & 0x1f));
    }
    else {
      local_e8.NumFreeIndices = local_e8.NumFreeIndices + -1;
      local_e8.FirstFreeIndex =
           *(int *)(local_e8.Data.AllocatorInstance.Data + (longlong)iVar6 * 0xc + 4);
      if (local_e8.NumFreeIndices != 0) {
        *(undefined4 *)
         (local_e8.Data.AllocatorInstance.Data + (longlong)local_e8.FirstFreeIndex * 0xc) =
             0xffffffff;
      }
    }
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex(&local_e8,&local_108,iVar6);
    if (local_108.Pointer != (uint *)0x0) {
      *(uint *)local_108.Pointer = *(uint *)pFVar24;
      *(uint *)((longlong)local_108.Pointer + 4) = 0xffffffff;
    }
    uVar22 = *(uint *)local_108.Pointer;
    if ((local_e8.Data.ArrayNum - local_e8.NumFreeIndices != 1) &&
       (local_e8.Data.ArrayNum != local_e8.NumFreeIndices)) {
      FVar10.Data = local_b0;
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FVar10.Data = local_a8.Data;
      }
      for (iVar6 = *(int *)(FVar10.Data + (ulonglong)(local_a0 - 1 & uVar22) * 4); iVar6 != -1;
          iVar6 = *(int *)(local_e8.Data.AllocatorInstance.Data + (longlong)iVar6 * 0xc + 4)) {
        if (*(uint *)(local_e8.Data.AllocatorInstance.Data + (longlong)iVar6 * 0xc) == uVar22) {
          if (iVar6 != -1) {
            *(uint *)(local_e8.Data.AllocatorInstance.Data + (longlong)iVar6 * 0xc) = uVar22;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized(&local_e8,local_108.Index,1);
            goto LAB_1435c9405;
          }
          break;
        }
      }
    }
    uVar18 = 1;
    uVar17 = local_e8.Data.ArrayNum - local_e8.NumFreeIndices;
    if (3 < uVar17) {
      uVar11 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_170 = (undefined4)lVar12;
      uVar18 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar17 < 1) || ((int)uVar18 <= (int)local_a0)) {
      uVar22 = local_a0 - 1 & uVar22;
      *(uint *)((longlong)local_108.Pointer + 8) = uVar22;
      FVar10.Data = local_b0;
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FVar10.Data = local_a8.Data;
      }
      uVar11 = (longlong)(int)local_a0 - 1U & (longlong)(int)uVar22;
      *(uint *)((longlong)local_108.Pointer + 4) = *(uint *)(FVar10.Data + uVar11 * 4);
      *(int *)(FVar10.Data + uVar11 * 4) = local_108.Index;
    }
    else {
      local_a0 = uVar18;
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,0,4);
      }
      if (uVar18 != 0) {
        uVar22 = uVar18;
        if (uVar18 < 2) {
          if (local_a8.Data != (FScriptContainerElement *)0x0) {
            uVar22 = 0;
            goto LAB_1435c9211;
          }
        }
        else {
LAB_1435c9211:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_a8,0,uVar22,4)
          ;
        }
        if (0 < (int)uVar18) {
          uVar23 = (ulonglong)uVar18;
          uVar11 = 0;
          do {
            FVar10.Data = local_b0;
            if (local_a8.Data != (FScriptContainerElement *)0x0) {
              FVar10.Data = local_a8.Data;
            }
            uVar8 = uVar11 & (longlong)(int)uVar18 - 1U;
            uVar11 = uVar11 + 1;
            *(undefined4 *)(FVar10.Data + uVar8 * 4) = 0xffffffff;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
      }
      if (local_a0 != 0) {
        pTStack_1b0 = &local_e8.AllocationFlags;
        uStack_1b4 = 1;
        local_1b8 = 0;
        iStack_1a4 = 0;
        iStack_1a0 = 0;
        if (local_e8.AllocationFlags.NumBits != 0) {
          FVar13 = (ForElementType<unsigned_int>)&local_e8.AllocationFlags;
          if (local_e8.AllocationFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar13 = local_e8.AllocationFlags.AllocatorInstance.SecondaryData;
          }
          uVar22 = *(uint *)FVar13;
          iStack_1a0 = 0;
          local_1b8 = 0;
          while (uVar22 == 0) {
            iStack_1a0 = iStack_1a0 + 0x20;
            lVar12 = (longlong)local_1b8;
            local_1b8 = local_1b8 + 1;
            if ((int)(local_e8.AllocationFlags.NumBits + -1 +
                     (local_e8.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < local_1b8)
            goto LAB_1435c931d;
            uVar22 = *(uint *)((uchar *)((longlong)FVar13 + 4) + lVar12 * 4);
          }
          uStack_1b4 = -uVar22 & uVar22;
          uVar11 = (ulonglong)uStack_1b4 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          local_16c = (int)lVar12;
          iStack_1a4 = local_16c + -1 + iStack_1a0;
          if (local_e8.AllocationFlags.NumBits < iStack_1a4) {
LAB_1435c931d:
            iStack_1a4 = local_e8.AllocationFlags.NumBits;
          }
        }
        local_1a8 = 0xffffffff;
        local_130 = &local_e8;
        local_128._padding_ = CONCAT44(uStack_1b4,local_1b8);
        local_128.CurrentBitIndex = iStack_1a4;
        local_128.UnvisitedBitMask = 0xffffffff;
        local_128._28_4_ = uStack_19c;
        local_128.BaseBitIndex = iStack_1a0;
        local_128.Array = pTStack_1b0;
        iVar6 = iStack_1a4;
        if (iStack_1a4 < local_e8.AllocationFlags.NumBits) {
          do {
            lVar12 = (longlong)iVar6;
            pFVar1 = (local_130->Data).AllocatorInstance.Data;
            uVar22 = local_a0 - 1 & *(uint *)(pFVar1 + lVar12 * 0xc);
            *(uint *)(pFVar1 + lVar12 * 0xc + 8) = uVar22;
            FVar10.Data = local_b0;
            if (local_a8.Data != (FScriptContainerElement *)0x0) {
              FVar10.Data = local_a8.Data;
            }
            uVar11 = (longlong)(int)local_a0 - 1U & (longlong)(int)uVar22;
            *(undefined4 *)(pFVar1 + lVar12 * 0xc + 4) = *(undefined4 *)(FVar10.Data + uVar11 * 4);
            *(int *)(FVar10.Data + uVar11 * 4) = iVar6;
            local_128.UnvisitedBitMask = local_128.UnvisitedBitMask & ~local_128._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_128);
            iVar6 = local_128.CurrentBitIndex;
          } while (local_128.CurrentBitIndex < (local_128.Array)->NumBits);
        }
      }
    }
LAB_1435c9405:
    param_3 = local_190;
    param_4 = (TArray<UE::Geometry::FEdgeLoop,TSizedDefaultAllocator<32>_> *)local_168.Value;
    pFVar3 = local_198;
    iVar6 = local_e8.FirstFreeIndex;
  }
  iVar6 = param_1->ArrayNum;
  puVar16 = (uint *)0x0;
  local_1f4 = 0;
  uVar22 = 0;
  puVar14 = puVar16;
  if (iVar6 < 1) {
LAB_1435c978f:
    pFVar20 = (param_1->AllocatorInstance).Data;
    local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.ArrayNum = 0;
    local_1e8.ArrayMax = 0;
    pFVar24 = pFVar20 + (longlong)iVar6 * 4;
    while( true ) {
      if (param_1->ArrayNum != iVar6) {
        local_1f8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1f8);
        puVar16 = (uint *)(ulonglong)(uint)local_1e8.ArrayNum;
      }
      uVar17 = (uint)puVar16;
      if (pFVar20 == pFVar24) break;
      local_1ec = *(int *)pFVar20;
      if (-1 < local_1ec) {
        if (((local_1e8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1ec) &&
            ((FScriptContainerElement *)&local_1ec <
             local_1e8.AllocatorInstance.Data + (longlong)local_1e8.ArrayMax * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), uVar17 = local_1e8.ArrayNum, bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        if (uVar17 == local_1e8.ArrayMax) {
          uVar17 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_1e8.AllocatorInstance,&local_1e8.ArrayMax);
        }
        local_1e8.ArrayNum = uVar17 + 1;
        *(int *)(local_1e8.AllocatorInstance.Data + (longlong)(int)uVar17 * 4) = local_1ec;
        puVar16 = (uint *)(ulonglong)(uint)local_1e8.ArrayNum;
      }
      pFVar20 = pFVar20 + 4;
    }
    if ((int)uVar17 < 3) {
      bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6627878237085105707>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\MeshRegionBoundaryLoops.cpp"
                         ,0x1d5,"RemainingLoopVids.Num() > 2");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      bVar4 = false;
    }
    else {
      uVar17 = param_4->ArrayNum;
      if (uVar17 == param_4->ArrayMax) {
        uVar17 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,&param_4->AllocatorInstance,&param_4->ArrayMax);
      }
      param_4->ArrayNum = uVar17 + 1;
      pFVar24 = (param_4->AllocatorInstance).Data;
      lVar12 = (longlong)(int)uVar17 * 0x40;
      *(undefined8 *)(pFVar24 + lVar12 + 8) = 0;
      *(undefined8 *)(pFVar24 + lVar12 + 0x10) = 0;
      *(undefined8 *)(pFVar24 + lVar12 + 0x18) = 0;
      *(undefined8 *)(pFVar24 + lVar12 + 0x20) = 0;
      *(undefined8 *)(pFVar24 + lVar12 + 0x28) = 0;
      *(undefined8 *)(pFVar24 + lVar12 + 0x30) = 0;
      pFVar24[lVar12 + 0x38] = (FScriptContainerElement)0x0;
      *(undefined8 *)(pFVar24 + lVar12) = 0;
      if ((int)uVar17 < param_4->ArrayNum) {
        uVar22 = ~uVar17 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pFVar21 = (FEdgeLoop *)((param_4->AllocatorInstance).Data + lVar12);
      pFVar21->Mesh = pFVar3->Mesh;
      FEdgeLoop::InitializeFromVertices(pFVar21,&local_1e8,false);
      TArray<int,TSizedDefaultAllocator<32>_>::operator=(&pFVar21->BowtieVertices,local_190);
      pFVar21->bBowtiesCalculated = true;
      bVar4 = true;
    }
    if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.AllocatorInstance.Data);
    }
    local_a0 = 0;
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_e8);
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
    return bVar4;
  }
LAB_1435c9440:
  uVar18 = (uint)puVar14;
  uVar17 = 0;
  if ((int)uVar18 < iVar6) {
    uVar17 = ~uVar18 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_1f0 = *(uint *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar18 * 4);
  if (local_98.Elements._8_4_ != local_98.Elements._52_4_) {
    FVar15 = (ForElementType<FSetElementId>)&local_98.Hash;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar15 = local_98.Hash.SecondaryData;
    }
    uVar17 = *(uint *)((longlong)FVar15 + (ulonglong)(local_98.HashSize - 1U & local_1f0) * 4);
    while (uVar17 != 0xffffffff) {
      puVar14 = (uint *)((longlong)(int)uVar17 * 0x10 + local_98.Elements._0_8_);
      if (*puVar14 == local_1f0) {
        puVar19 = puVar14 + 1;
        if (puVar14 == (uint *)0x0) {
          puVar19 = puVar16;
        }
        if (puVar19 != (uint *)0x0) {
          uVar17 = *puVar19;
          uVar18 = uVar22;
          if ((int)uVar17 < param_1->ArrayNum) {
            uVar18 = ~uVar17 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          if (-1 < *(int *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar17 * 4)) {
            local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_188.ArrayNum = 0;
            local_188.ArrayMax = 0;
            FMeshBoundaryLoops::ExtractSpan(param_1,*puVar19,local_1f4,true,&local_188);
            uVar17 = param_4->ArrayNum;
            if (uVar17 == param_4->ArrayMax) {
              uVar17 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x840,&param_4->AllocatorInstance,&param_4->ArrayMax);
            }
            param_4->ArrayNum = uVar17 + 1;
            pFVar24 = (param_4->AllocatorInstance).Data;
            lVar12 = (longlong)(int)uVar17 * 0x40;
            *(undefined8 *)(pFVar24 + lVar12 + 8) = 0;
            *(undefined8 *)(pFVar24 + lVar12 + 0x10) = 0;
            *(undefined8 *)(pFVar24 + lVar12 + 0x18) = 0;
            *(undefined8 *)(pFVar24 + lVar12 + 0x20) = 0;
            *(undefined8 *)(pFVar24 + lVar12 + 0x28) = 0;
            *(undefined8 *)(pFVar24 + lVar12 + 0x30) = 0;
            pFVar24[lVar12 + 0x38] = (FScriptContainerElement)0x0;
            *(undefined8 *)(pFVar24 + lVar12) = 0;
            uVar18 = uVar22;
            if ((int)uVar17 < param_4->ArrayNum) {
              uVar18 = ~uVar17 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              uVar5 = (*pcVar2)();
              return (bool)uVar5;
            }
            pFVar21 = (FEdgeLoop *)((param_4->AllocatorInstance).Data + lVar12);
            pFVar21->Mesh = pFVar3->Mesh;
            FEdgeLoop::InitializeFromVertices(pFVar21,&local_188,false);
            TArray<int,TSizedDefaultAllocator<32>_>::operator=(&pFVar21->BowtieVertices,param_3);
            pFVar21->bBowtiesCalculated = true;
            if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_188.AllocatorInstance.Data);
            }
          }
          uVar17 = local_1f4;
          puVar14 = puVar16;
          if (local_98.Elements._8_4_ == local_98.Elements._52_4_) goto LAB_1435c971e;
          FVar15 = (ForElementType<FSetElementId>)&local_98.Hash;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar15 = local_98.Hash.SecondaryData;
          }
          uVar18 = *(uint *)((longlong)FVar15 + (ulonglong)(local_98.HashSize - 1U & local_1f0) * 4)
          ;
          goto joined_r0x0001435c96f7;
        }
        break;
      }
      uVar17 = puVar14[2];
    }
  }
  if (local_e8.Data.ArrayNum != local_e8.NumFreeIndices) {
    FVar10.Data = local_b0;
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FVar10.Data = local_a8.Data;
    }
    for (iVar6 = *(int *)(FVar10.Data + (ulonglong)(local_a0 - 1 & local_1f0) * 4); iVar6 != -1;
        iVar6 = *(int *)(local_e8.Data.AllocatorInstance.Data + (longlong)iVar6 * 0xc + 4)) {
      if (*(uint *)(local_e8.Data.AllocatorInstance.Data + (longlong)iVar6 * 0xc) == local_1f0) {
        local_f8 = &local_1f0;
        local_f0 = &local_1f4;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,int_const_&>_>(&local_98,&local_168,(bool *)&local_f8);
        break;
      }
    }
  }
  goto LAB_1435c9779;
joined_r0x0001435c96f7:
  puVar14 = puVar16;
  if (uVar18 == 0xffffffff) goto LAB_1435c971e;
  puVar14 = (uint *)((longlong)(int)uVar18 * 0x10 + local_98.Elements._0_8_);
  if (*puVar14 == local_1f0) {
    if (puVar14 != (uint *)0x0) goto LAB_1435c9744;
    goto LAB_1435c971e;
  }
  uVar18 = puVar14[2];
  goto joined_r0x0001435c96f7;
LAB_1435c971e:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
LAB_1435c9744:
  puVar14[1] = uVar17;
LAB_1435c9779:
  iVar6 = param_1->ArrayNum;
  local_1f4 = local_1f4 + 1;
  puVar14 = (uint *)(ulonglong)local_1f4;
  if (iVar6 <= (int)local_1f4) goto LAB_1435c978f;
  goto LAB_1435c9440;
}

