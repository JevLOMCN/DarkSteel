// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 3

// FTriangleGroupTopology @ 14c6e0130

FTriangleGroupTopology * __thiscall
UE::Geometry::FTriangleGroupTopology::FTriangleGroupTopology
          (FTriangleGroupTopology *this,FDynamicMesh3 *param_1,bool param_2)

{
  FGroupTopology::FGroupTopology((FGroupTopology *)this,param_1,false);
  *(undefined ***)this = &___7FTriangleGroupTopology_Geometry_UE__6B_;
  if (param_2) {
    RebuildTopology(this);
  }
  return this;
}

// GetGroupID @ 14c73c890

int __thiscall
UE::Geometry::FTriangleGroupTopology::GetGroupID(FTriangleGroupTopology *this,int param_1)

{
  return param_1;
}

// RebuildTopology @ 14c759b20

/* WARNING: Removing unreachable block (ram,0x00014c75a508) */
/* WARNING: Removing unreachable block (ram,0x00014c75a529) */
/* WARNING: Removing unreachable block (ram,0x00014c75a546) */

bool __thiscall UE::Geometry::FTriangleGroupTopology::RebuildTopology(FTriangleGroupTopology *this)

{
  undefined1 *puVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType *pFVar4;
  undefined8 uVar5;
  code *pcVar6;
  longlong lVar7;
  void *_Src;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  undefined8 *puVar15;
  longlong lVar16;
  uint uVar17;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *pTVar18;
  uint *puVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20 [2];
  undefined1 local_198 [4];
  undefined4 local_194;
  FScriptContainerElement local_190 [8];
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_188;
  TArray<int,TSizedDefaultAllocator<32>_> local_180;
  int local_168;
  int iStack_164;
  FEdgeSpan local_160;
  undefined8 local_120;
  int local_118;
  uint local_114;
  undefined4 local_110;
  int local_10c;
  undefined8 local_108;
  uint local_100 [2];
  void *local_f8;
  undefined8 local_f0;
  TArray<int,TSizedDefaultAllocator<32>_> local_e8;
  undefined8 local_d8;
  undefined4 local_d0;
  FGroup local_c8;
  int local_90;
  int iStack_8c;
  uint *local_88;
  TArray<int,TSizedDefaultAllocator<32>_> local_80;
  TPairInitializer<int_const_&,int_const_&> local_70;
  uint *local_60;
  undefined4 *local_58;
  
  puVar1 = &this->field_0x50;
  TArray<UE::Geometry::FGroupTopology::FGroup,TSizedDefaultAllocator<32>_>::Reset
            ((TArray<UE::Geometry::FGroupTopology::FGroup,TSizedDefaultAllocator<32>_> *)puVar1,0);
  TArray<UE::Geometry::FGroupTopology::FGroupEdge,TSizedDefaultAllocator<32>_>::Reset
            ((TArray<UE::Geometry::FGroupTopology::FGroupEdge,TSizedDefaultAllocator<32>_> *)
             &this->field_0x60,0);
  TArray<UE::Geometry::FGroupTopology::FCorner,TSizedDefaultAllocator<32>_>::Reset
            ((TArray<UE::Geometry::FGroupTopology::FCorner,TSizedDefaultAllocator<32>_> *)
             &this->field_0x40,0);
  pTVar18 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
            &this->field_0x80;
  iVar12 = *(int *)(*(longlong *)&this->field_0x70 + 0x140) * 0x200 +
           *(int *)(*(longlong *)&this->field_0x70 + 0x144);
  *(undefined4 *)&this->field_0x88 = 0;
  local_188 = pTVar18;
  if (*(int *)&this->field_0x8c < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)pTVar18,0,(int *)&this->field_0x8c);
  }
  local_res20[0] = -1;
  TArray<int,TSizedDefaultAllocator<32>_>::Init
            ((TArray<int,TSizedDefaultAllocator<32>_> *)pTVar18,local_res20,iVar12);
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  local_118 = 1;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_80,&local_118,iVar12);
  lVar20 = *(longlong *)&this->field_0x70;
  uVar13 = 0;
  uVar17 = *(int *)(lVar20 + 0x140) * 0x200 + *(int *)(lVar20 + 0x144);
  if ((uVar17 == 0) ||
     (puVar15 = *(undefined8 **)(lVar20 + 0x148), (ushort)(*(short *)*puVar15 - 1U) < 0xfffe)) {
LAB_14c759c65:
    bVar21 = uVar13 == uVar17;
  }
  else {
    uVar13 = 1;
    bVar21 = uVar17 == 1;
    if (1 < (int)uVar17) {
      do {
        lVar16 = (ulonglong)(uVar13 & 0x1ff) * 2;
        if ((*(short *)(lVar16 + puVar15[uVar13 >> 9]) != 0) &&
           (*(short *)(lVar16 + puVar15[uVar13 >> 9]) != -1)) break;
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < (int)uVar17);
      goto LAB_14c759c65;
    }
  }
  if (!bVar21) {
LAB_14c759c70:
    do {
      uVar9 = 0;
      if ((int)uVar13 < *(int *)&(pTVar18->Elements).field_0x8) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      if (*(int *)(*(longlong *)&pTVar18->Elements + (longlong)(int)uVar13 * 4) == -1) {
        local_c8.Triangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.Triangles.ArrayNum = 0;
        local_c8.Triangles.ArrayMax = 0;
        local_c8.Boundaries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.Boundaries.ArrayNum = 0;
        local_c8.Boundaries.ArrayMax = 0;
        local_c8.NeighbourGroupIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.NeighbourGroupIDs.ArrayNum = 0;
        local_c8.NeighbourGroupIDs.ArrayMax = 0;
        local_c8.GroupID = uVar13;
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_c8.Triangles.AllocatorInstance,&local_c8.Triangles.ArrayMax
                           );
        local_c8.Triangles.ArrayNum = iVar12 + 1;
        *(uint *)(local_c8.Triangles.AllocatorInstance.Data + (longlong)iVar12 * 4) = uVar13;
        if (((*(FGroup **)puVar1 <= &local_c8) &&
            (&local_c8 < *(FGroup **)puVar1 + *(int *)&this->field_0x5c)) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar21)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        iVar12 = *(int *)&this->field_0x58;
        if (iVar12 == *(int *)&this->field_0x5c) {
          iVar12 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x838,(ForAnyElementType *)puVar1,(int *)&this->field_0x5c);
        }
        *(int *)&this->field_0x58 = iVar12 + 1;
        FGroupTopology::FGroup::FGroup
                  ((FGroup *)((longlong)iVar12 * 0x38 + *(longlong *)puVar1),&local_c8);
        uVar9 = 0;
        if ((int)uVar13 < *(int *)&this->field_0x88) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        *(int *)(*(longlong *)&this->field_0x80 + (longlong)(int)uVar13 * 4) = iVar12;
        if (local_c8.NeighbourGroupIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.NeighbourGroupIDs.AllocatorInstance.Data);
        }
        DestructItems<UE::Geometry::FGroupTopology::FGroupBoundary,int>
                  ((FGroupBoundary *)local_c8.Boundaries.AllocatorInstance.Data,
                   local_c8.Boundaries.ArrayNum);
        if ((FGroupBoundary *)local_c8.Boundaries.AllocatorInstance.Data != (FGroupBoundary *)0x0) {
          FMemory::Free(local_c8.Boundaries.AllocatorInstance.Data);
        }
        pTVar18 = local_188;
        if (local_c8.Triangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Triangles.AllocatorInstance.Data);
          pTVar18 = local_188;
        }
      }
      uVar13 = uVar13 + 1;
      if ((int)uVar13 < (int)uVar17) {
        do {
          lVar7 = (ulonglong)(uVar13 & 0x1ff) * 2;
          lVar16 = *(longlong *)((ulonglong)(uVar13 >> 9) * 8 + *(longlong *)(lVar20 + 0x148));
          if ((*(short *)(lVar7 + lVar16) != 0) && (*(short *)(lVar7 + lVar16) != -1))
          goto LAB_14c759c70;
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)uVar17);
      }
    } while (uVar13 != uVar17);
  }
  lVar20 = *(longlong *)&this->field_0x70;
  uVar13 = 0;
  uVar17 = *(int *)(lVar20 + 0x20) * 0x200 + *(int *)(lVar20 + 0x24);
  if ((uVar17 != 0) &&
     (puVar15 = *(undefined8 **)(lVar20 + 0x28), 0xfffd < (ushort)(*(short *)*puVar15 - 1U))) {
    uVar13 = 1;
    bVar21 = uVar17 == 1;
    if ((int)uVar17 < 2) goto LAB_14c759f37;
    do {
      lVar16 = (ulonglong)(uVar13 & 0x1ff) * 2;
      if ((*(short *)(lVar16 + puVar15[uVar13 >> 9]) != 0) &&
         (*(short *)(lVar16 + puVar15[uVar13 >> 9]) != -1)) break;
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)uVar17);
  }
  bVar21 = uVar13 == uVar17;
LAB_14c759f37:
  if (!bVar21) {
    local_188 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *
                )&this->field_0xc0;
    puVar1 = &this->field_0x40;
LAB_14c759f51:
    do {
      local_110 = *(undefined4 *)&this->field_0x48;
      local_60 = &local_114;
      local_58 = &local_110;
      local_f8 = (void *)0x0;
      local_f0 = 0;
      local_114 = uVar13;
      local_100[0] = uVar13;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_const_&>_>(local_188,&local_70,(bool *)&local_60);
      if (((*(uint **)puVar1 <= local_100) &&
          (local_100 < *(uint **)puVar1 + (longlong)*(int *)&this->field_0x4c * 6)) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar21)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      iVar12 = *(int *)&this->field_0x48;
      if (iVar12 == *(int *)&this->field_0x4c) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)puVar1,(int *)&this->field_0x4c);
      }
      _Src = local_f8;
      *(int *)&this->field_0x48 = iVar12 + 1;
      puVar19 = (uint *)(*(longlong *)puVar1 + (longlong)iVar12 * 0x18);
      *puVar19 = local_100[0];
      pFVar4 = (ForAnyElementType *)(puVar19 + 2);
      pFVar4->Data = (FScriptContainerElement *)0x0;
      lVar16 = (longlong)(int)(uint)local_f0;
      puVar19[4] = (uint)local_f0;
      if ((uint)local_f0 == 0) {
        puVar19[5] = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(uint)local_f0,0,pFVar4,(uint)local_f0,(int *)(puVar19 + 5));
        memcpy(pFVar4->Data,_Src,lVar16 << 2);
      }
      if (local_f8 != (void *)0x0) {
        FMemory::Free(local_f8);
      }
      uVar13 = uVar13 + 1;
      if ((int)uVar13 < (int)uVar17) {
        do {
          lVar16 = (ulonglong)(uVar13 >> 9) * 8;
          lVar7 = (ulonglong)(uVar13 & 0x1ff) * 2;
          if ((*(short *)(lVar7 + *(longlong *)(lVar16 + *(longlong *)(lVar20 + 0x28))) != 0) &&
             (*(short *)(lVar7 + *(longlong *)(*(longlong *)(lVar20 + 0x28) + lVar16)) != -1))
          goto LAB_14c759f51;
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)uVar17);
      }
    } while (uVar13 != uVar17);
  }
  iVar12 = *(int *)&this->field_0x48;
  piVar14 = *(int **)&this->field_0x40;
  piVar2 = piVar14 + (longlong)iVar12 * 6;
  while( true ) {
    if (*(int *)&this->field_0x48 != iVar12) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FGroupTopology::FCorner,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (piVar14 == piVar2) break;
    FGroupTopology::GetAllVertexGroups
              ((FGroupTopology *)this,*piVar14,
               (TArray<int,TSizedDefaultAllocator<32>_> *)(piVar14 + 2));
    piVar14 = piVar14 + 6;
  }
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  local_10c = -1;
  TArray<int,TSizedDefaultAllocator<32>_>::Init
            (&local_e8,&local_10c,
             *(int *)(*(longlong *)&this->field_0x70 + 0x1d4) +
             *(int *)(*(longlong *)&this->field_0x70 + 0x1d0) * 0x200);
  local_180.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_180.ArrayNum = 0;
  local_180.ArrayMax = 0;
  iVar12 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,2,&local_180.AllocatorInstance,&local_180.ArrayNum,&local_180.ArrayMax);
  *(undefined8 *)(local_180.AllocatorInstance.Data + (longlong)iVar12 * 4) = 0;
  uVar13 = *(uint *)&this->field_0x58;
  uVar11 = (ulonglong)(int)uVar13;
  puVar19 = *(uint **)&this->field_0x50;
  local_188 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
              (puVar19 + 10);
  local_70.Value = (int *)(puVar19 + uVar11 * 0xe);
  do {
    piVar2 = local_70.Value;
    local_88 = puVar19;
    if (*(int *)&this->field_0x58 != (int)uVar11) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FGroupTopology::FGroup,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (puVar19 == (uint *)piVar2) {
      if (local_180.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.AllocatorInstance.Data);
      }
      if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.AllocatorInstance.Data);
      }
      if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.AllocatorInstance.Data);
      }
      return true;
    }
    uVar17 = puVar19[8];
    if ((int)uVar17 < 1) {
      iVar12 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x28,8,1 - uVar17,(ForAnyElementType *)(puVar19 + 6),(int *)(puVar19 + 8),
                          (int *)(puVar19 + 9));
      DefaultConstructItems<UE::Geometry::FGroupTopology::FGroupBoundary,int>
                ((void *)(*(longlong *)(puVar19 + 6) + (longlong)iVar12 * 0x28),1 - uVar17);
    }
    else if (1 < (int)uVar17) {
      iVar12 = uVar17 - 1;
      if (iVar12 < 0) {
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar21) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      else if (iVar12 == 0) goto LAB_14c75a2e1;
      TArray<UE::Geometry::FGroupTopology::FGroupBoundary,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                ((TArray<UE::Geometry::FGroupTopology::FGroupBoundary,TSizedDefaultAllocator<32>_> *
                 )(puVar19 + 6),1,iVar12);
      Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,(ForAnyElementType *)(puVar19 + 6),puVar19[8],(int *)(puVar19 + 9));
    }
LAB_14c75a2e1:
    lVar20 = 0;
    if (((int)puVar19[8] < 1) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar21)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    pFVar4 = *(ForAnyElementType **)(puVar19 + 6);
    uVar11 = (ulonglong)(*puVar19 & 0x1ff);
    lVar16 = *(longlong *)
              (*(longlong *)(*(longlong *)&this->field_0x70 + 0x180) +
              (ulonglong)(*puVar19 >> 9) * 8);
    local_d8 = *(undefined8 *)(lVar16 + uVar11 * 0xc);
    local_d0 = *(undefined4 *)(lVar16 + 8 + uVar11 * 0xc);
    do {
      uVar17 = *(uint *)((longlong)&local_d8 + lVar20 * 4);
      uVar9 = 0;
      if ((int)uVar17 < local_e8.ArrayNum) {
        uVar9 = ~uVar17 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      pFVar3 = local_e8.AllocatorInstance.Data + (longlong)(int)uVar17 * 4;
      if (*(int *)(local_e8.AllocatorInstance.Data + (longlong)(int)uVar17 * 4) == -1) {
        uVar17 = *(uint *)((longlong)&local_d8 + lVar20 * 4);
        uVar11 = *(ulonglong *)
                  (*(longlong *)
                    (*(longlong *)(*(longlong *)&this->field_0x70 + 0x1c0) +
                    (ulonglong)(uVar17 >> 9) * 8) + 8 + (ulonglong)(uVar17 & 0x1ff) * 0x10);
        iVar12 = (int)(uVar11 >> 0x20);
        local_108 = uVar11;
        if (iVar12 == -1) {
          local_168 = (**(code **)(*(longlong *)this + 0x18))(this,uVar11 & 0xffffffff);
          iStack_164 = -1;
        }
        else {
          iVar12 = (**(code **)(*(longlong *)this + 0x18))(this,iVar12);
          iVar10 = (**(code **)(*(longlong *)this + 0x18))(this,uVar11 & 0xffffffff);
          if ((iVar10 == iVar12) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Group1 != Group2",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\GroupTopology.h"
                                  ,0x212,L""), bVar21)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          if (((iVar10 < 0) || (iVar12 < 0)) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Group1 >= 0 && Group2 >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\GroupTopology.h"
                                  ,0x213,L""), bVar21)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          local_168 = iVar12;
          iStack_164 = iVar10;
          if (iVar10 < iVar12) {
            local_168 = iVar10;
            iStack_164 = iVar12;
          }
        }
        uVar17 = *(uint *)((longlong)&local_d8 + lVar20 * 4);
        local_160.Mesh = *(FDynamicMesh3 **)&this->field_0x70;
        uVar5 = *(undefined8 *)
                 (*(longlong *)
                   (((local_160.Mesh)->Edges).Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar17 >> 9) * 8) + (ulonglong)(uVar17 & 0x1ff) * 0x10);
        local_120 = 0xffffffffffffffff;
        local_160.Edges.ArrayNum = 0;
        local_160.Edges.ArrayMax = 0;
        local_160.Edges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_160.Vertices.ArrayNum = 0;
        local_160.Vertices.ArrayMax = 0;
        local_160.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_160.BowtieVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_160.BowtieVertices.ArrayNum = 0;
        local_160.BowtieVertices.ArrayMax = 0;
        local_160.bBowtiesCalculated = false;
        local_108 = uVar5;
        if ((local_180.ArrayNum < 1) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        *(int *)local_180.AllocatorInstance.Data = (int)uVar5;
        if ((local_180.ArrayNum < 2) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        *(int *)(local_180.AllocatorInstance.Data + 4) = local_108._4_4_;
        FEdgeSpan::InitializeFromVertices(&local_160,&local_180,true);
        if ((local_180.ArrayNum < 2) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        iVar12 = FGroupTopology::GetCornerIDFromVertexID
                           ((FGroupTopology *)this,*(int *)(local_180.AllocatorInstance.Data + 4));
        if ((local_180.ArrayNum < 1) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        local_90 = FGroupTopology::GetCornerIDFromVertexID
                             ((FGroupTopology *)this,*(int *)local_180.AllocatorInstance.Data);
        local_120 = CONCAT44(iVar12,local_90);
        iStack_8c = iVar12;
        if (((local_90 == -1) || (iVar12 == -1)) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("NewGroupEdge.EndpointCorners.A != IndexConstants::InvalidID && NewGroupEdge.EndpointCorners.B != IndexConstants::InvalidID"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\GroupTopology.cpp"
                                ,0x480,L""), bVar21)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        if (((*(int **)&this->field_0x60 <= &local_168) &&
            (&local_168 < *(int **)&this->field_0x60 + (longlong)*(int *)&this->field_0x6c * 0x14))
           && (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar21)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        iVar12 = *(int *)&this->field_0x68;
        if (iVar12 == *(int *)&this->field_0x6c) {
          iVar12 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x850,(ForAnyElementType *)&this->field_0x60,(int *)&this->field_0x6c)
          ;
        }
        *(int *)&this->field_0x68 = iVar12 + 1;
        puVar15 = (undefined8 *)(*(longlong *)&this->field_0x60 + (longlong)iVar12 * 0x50);
        *puVar15 = CONCAT44(iStack_164,local_168);
        FEdgeSpan::FEdgeSpan((FEdgeSpan *)(puVar15 + 1),&local_160);
        puVar15[9] = local_120;
        *(int *)pFVar3 = iVar12;
        if (local_160.BowtieVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.BowtieVertices.AllocatorInstance.Data);
        }
        if (local_160.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Edges.AllocatorInstance.Data);
        }
        if (local_160.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Vertices.AllocatorInstance.Data);
        }
      }
      if (((pFVar4->Data <= pFVar3) &&
          (pFVar3 < pFVar4->Data + (longlong)*(int *)((longlong)&pFVar4[1].Data + 4) * 4)) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar21)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      iVar12 = *(int *)&pFVar4[1].Data;
      if (iVar12 == *(int *)((longlong)&pFVar4[1].Data + 4)) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,pFVar4,(int *)((longlong)&pFVar4[1].Data + 4));
      }
      puVar19 = local_88;
      *(int *)&pFVar4[1].Data = iVar12 + 1;
      lVar20 = lVar20 + 1;
      *(undefined4 *)(pFVar4->Data + (longlong)iVar12 * 4) = *(undefined4 *)pFVar3;
    } while (lVar20 < 3);
    *(undefined1 *)&pFVar4[4].Data = 0;
    FDynamicMesh3::GetTriNeighbourTris
              (*(FDynamicMesh3 **)&this->field_0x70,(FIndex3i *)local_198,*local_88);
    pTVar18 = local_188;
    if (local_198 == (undefined1  [4])0xffffffff) {
      *(undefined1 *)&pFVar4[4].Data = 1;
    }
    else {
      if (((*(FScriptContainerElement **)&local_188->Elements <=
            (FScriptContainerElement *)local_198) &&
          ((FScriptContainerElement *)local_198 <
           *(FScriptContainerElement **)&local_188->Elements +
           (longlong)*(int *)((longlong)&((ForAnyElementType *)((longlong)local_188 + 8))->Data + 4)
           * 4)) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar21)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      iVar12 = *(int *)&((ForAnyElementType *)((longlong)pTVar18 + 8))->Data;
      piVar2 = (int *)((longlong)&((ForAnyElementType *)((longlong)pTVar18 + 8))->Data + 4);
      if (iVar12 == *piVar2) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)pTVar18,piVar2);
      }
      *(int *)&((ForAnyElementType *)((longlong)pTVar18 + 8))->Data = iVar12 + 1;
      *(undefined1 (*) [4])(*(FScriptContainerElement **)&pTVar18->Elements + (longlong)iVar12 * 4)
           = local_198;
      if (((pFVar4[2].Data <= (FScriptContainerElement *)local_198) &&
          ((FScriptContainerElement *)local_198 <
           pFVar4[2].Data + (longlong)*(int *)((longlong)&pFVar4[3].Data + 4) * 4)) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar21)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      iVar12 = *(int *)&pFVar4[3].Data;
      piVar2 = (int *)((longlong)&pFVar4[3].Data + 4);
      if (iVar12 == *piVar2) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,pFVar4 + 2,piVar2);
      }
      *(int *)&pFVar4[3].Data = iVar12 + 1;
      *(undefined1 (*) [4])(pFVar4[2].Data + (longlong)iVar12 * 4) = local_198;
    }
    if (local_194 == -1) {
      *(undefined1 *)&pFVar4[4].Data = 1;
    }
    else {
      if (((*(undefined4 **)(puVar19 + 10) <= &local_194) &&
          (&local_194 < *(undefined4 **)(puVar19 + 10) + (int)puVar19[0xd])) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar21)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      uVar17 = puVar19[0xc];
      if (uVar17 == puVar19[0xd]) {
        uVar17 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)(puVar19 + 10),(int *)(puVar19 + 0xd));
      }
      puVar19[0xc] = uVar17 + 1;
      *(undefined4 *)(*(longlong *)(puVar19 + 10) + (longlong)(int)uVar17 * 4) = local_194;
      if (((pFVar4[2].Data <= (FScriptContainerElement *)&local_194) &&
          ((FScriptContainerElement *)&local_194 <
           pFVar4[2].Data + (longlong)*(int *)((longlong)&pFVar4[3].Data + 4) * 4)) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar21)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      iVar12 = *(int *)&pFVar4[3].Data;
      piVar2 = (int *)((longlong)&pFVar4[3].Data + 4);
      if (iVar12 == *piVar2) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,pFVar4 + 2,piVar2);
      }
      *(int *)&pFVar4[3].Data = iVar12 + 1;
      *(undefined4 *)(pFVar4[2].Data + (longlong)iVar12 * 4) = local_194;
    }
    if (local_190._0_4_ == -1) {
      *(undefined1 *)&pFVar4[4].Data = 1;
    }
    else {
      if (((*(FScriptContainerElement **)(puVar19 + 10) <= local_190) &&
          (local_190 < *(FScriptContainerElement **)(puVar19 + 10) + (longlong)(int)puVar19[0xd] * 4
          )) && (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar21)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      uVar17 = puVar19[0xc];
      if (uVar17 == puVar19[0xd]) {
        uVar17 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)(puVar19 + 10),(int *)(puVar19 + 0xd));
      }
      puVar19[0xc] = uVar17 + 1;
      *(undefined4 *)(*(longlong *)(puVar19 + 10) + (longlong)(int)uVar17 * 4) = local_190._0_4_;
      if (((pFVar4[2].Data <= local_190) &&
          (local_190 < pFVar4[2].Data + (longlong)*(int *)((longlong)&pFVar4[3].Data + 4) * 4)) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar21)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      iVar12 = *(int *)&pFVar4[3].Data;
      piVar2 = (int *)((longlong)&pFVar4[3].Data + 4);
      if (iVar12 == *piVar2) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,pFVar4 + 2,piVar2);
      }
      *(int *)&pFVar4[3].Data = iVar12 + 1;
      *(undefined4 *)(pFVar4[2].Data + (longlong)iVar12 * 4) = local_190._0_4_;
    }
    puVar19 = puVar19 + 0xe;
    uVar11 = (ulonglong)uVar13;
    local_188 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *
                )((longlong)pTVar18 + 0x38);
  } while( true );
}

