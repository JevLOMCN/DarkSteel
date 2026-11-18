// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 4

// SerializeLayers<UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>_> @ 14344be30

void __cdecl
FDynamicMeshAttributeSet_Local::
SerializeLayers<UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>_>
          (TIndirectArray<UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>,TSizedDefaultAllocator<32>_>
           *param_1,FArchive *param_2,FCompactMaps *param_3,bool param_4)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *this;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *puVar17;
  bool local_88 [8];
  uint local_80 [2];
  undefined8 *local_78;
  longlong local_70;
  TDynamicVector<int,512> local_68;
  
  local_80[0] = (param_1->Array).ArrayNum;
  plVar1 = *(longlong **)&param_2->field_0x8;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_80,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,local_80);
    }
  }
  else {
    local_80[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  puVar13 = (undefined8 *)0x0;
  if (((param_2->field_0x28 & 1) != 0) &&
     (TIndirectArray<UE::Geometry::TDynamicMeshScalarTriangleAttribute<int>,TSizedDefaultAllocator<32>_>
      ::Empty(param_1,local_80[0]), puVar17 = puVar13, 0 < (int)local_80[0])) {
    do {
      puVar7 = ::operator_new(0x30);
      puVar9 = puVar13;
      if (puVar7 != (undefined8 *)0x0) {
        puVar7[1] = 0;
        *puVar7 = &___7__TDynamicMeshTriangleAttribute_H_00_Geometry_UE__6B_;
        ((TDynamicVector<int,512> *)(puVar7 + 3))->CurBlock = 0;
        *(undefined4 *)((longlong)puVar7 + 0x1c) = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock
                  ((TDynamicVector<int,512> *)(puVar7 + 3));
        puVar7[2] = 0;
        *puVar7 = &___7__TDynamicMeshScalarTriangleAttribute_H_Geometry_UE__6B_;
        puVar9 = puVar7;
      }
      pFVar2 = (param_1->Array).AllocatorInstance.Data;
      local_78 = puVar9;
      if (((pFVar2 <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < pFVar2 + (longlong)(param_1->Array).ArrayMax * 8))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (param_1->Array).ArrayNum;
      if (iVar5 == (param_1->Array).ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)param_1,&(param_1->Array).ArrayMax);
      }
      uVar16 = (int)puVar17 + 1;
      (param_1->Array).ArrayNum = iVar5 + 1;
      *(undefined8 **)((param_1->Array).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_78;
      puVar17 = (undefined8 *)(ulonglong)uVar16;
    } while ((int)uVar16 < (int)local_80[0]);
  }
  if (0 < (int)local_80[0]) {
    local_70 = 0;
    do {
      lVar11 = local_70;
      uVar14 = 0;
      uVar15 = (uint)puVar13;
      uVar16 = 0;
      if ((int)uVar15 < (param_1->Array).ArrayNum) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this = *(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> **)
              ((param_1->Array).AllocatorInstance.Data + lVar11);
      local_88[0] = param_4;
      UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>::Serialize(this,param_2);
      (**(code **)(*(longlong *)param_2 + 0x230))(param_2,&FUE5MainStreamObjectVersion::GUID);
      if (((param_2->field_0x28 & 1) == 0) ||
         (iVar5 = FArchiveState::CustomVer
                            ((FArchiveState *)param_2,&FUE5MainStreamObjectVersion::GUID),
         0x37 < iVar5)) {
        ::operator<<(param_2,local_88);
        if ((param_3 == (FCompactMaps *)0x0) || ((param_3->TriMap).ArrayNum == 0)) {
          if (local_88[0] == false) {
            UE::Geometry::TDynamicVector<int,512>::Serialize<1,0>
                      ((TDynamicVector<int,512> *)&this[1].Name,param_2);
          }
          else {
            UE::Geometry::TDynamicVector<int,512>::Serialize<1,1>
                      ((TDynamicVector<int,512> *)&this[1].Name,param_2);
          }
        }
        else {
          local_68.CurBlock = 0;
          local_68.CurBlockUsed = 0;
          local_68.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_68.Blocks.ArrayNum = 0;
          local_68.Blocks.ArrayMax = 0;
          UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock(&local_68);
          UE::Geometry::TDynamicVector<int,512>::Resize
                    (&local_68,*(uint *)(this[1]._padding_ + 0x170));
          uVar16 = 0;
          iVar5 = this[1].Name.ComparisonIndex.Value * 0x200 + this[1].Name.Number;
          if (0 < iVar5) {
            uVar10 = 0;
            do {
              iVar6 = UE::Geometry::FCompactMaps::GetTriangleMapping(param_3,uVar16);
              if (iVar6 != -1) {
                uVar12 = (uint)uVar14;
                uVar8 = uVar14 >> 9;
                uVar14 = (ulonglong)(uVar12 + 1);
                *(undefined4 *)
                 (*(longlong *)(local_68.Blocks.AllocatorInstance.Data + uVar8 * 8) +
                 (ulonglong)(uVar12 & 0x1ff) * 4) =
                     *(undefined4 *)
                      (*(longlong *)(this[2]._padding_ + (ulonglong)(uVar16 >> 9) * 8) +
                      (ulonglong)(uVar10 & 0x1ff) * 4);
              }
              uVar16 = uVar16 + 1;
              uVar10 = uVar10 + 1;
              lVar11 = local_70;
            } while ((int)uVar16 < iVar5);
          }
          if (local_88[0] == false) {
            UE::Geometry::TDynamicVector<int,512>::Serialize<1,0>(&local_68,param_2);
          }
          else {
            UE::Geometry::TDynamicVector<int,512>::Serialize<1,1>(&local_68,param_2);
          }
          UE::Geometry::TDynamicVector<int,512>::Empty(&local_68,0);
          if (local_68.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Blocks.AllocatorInstance.Data);
          }
        }
      }
      else {
        UE::Geometry::TDynamicVector<int,512>::Serialize<0,0>
                  ((TDynamicVector<int,512> *)&this[1].Name,param_2);
      }
      local_70 = lVar11 + 8;
      puVar13 = (undefined8 *)(ulonglong)(uVar15 + 1);
    } while ((int)(uVar15 + 1) < (int)local_80[0]);
  }
  return;
}

// SerializeLayers<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_> @ 14344c200

void __cdecl
FDynamicMeshAttributeSet_Local::
SerializeLayers<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>_>
          (TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>,TSizedDefaultAllocator<32>_>
           *param_1,FArchive *param_2,FCompactMaps *param_3,bool param_4)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint local_res8 [2];
  undefined8 *local_38 [2];
  undefined8 *puVar11;
  
  local_res8[0] = (param_1->Array).ArrayNum;
  plVar1 = *(longlong **)&param_2->field_0x8;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  puVar9 = (undefined8 *)0x0;
  if (((param_2->field_0x28 & 1) != 0) &&
     (TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,2,UE::Math::TVector2<float>_>,TSizedDefaultAllocator<32>_>
      ::Empty(param_1,local_res8[0]), puVar11 = puVar9, 0 < (int)local_res8[0])) {
    do {
      puVar6 = ::operator_new(0x88);
      puVar8 = puVar9;
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        ((TDynamicVector<unsigned_short,512> *)(puVar6 + 1))->CurBlock = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        UE::Geometry::TDynamicVector<unsigned_short,512>::AddAllocatedBlock
                  ((TDynamicVector<unsigned_short,512> *)(puVar6 + 1));
        *(undefined4 *)((longlong)puVar6 + 0x24) = 0;
        ((TDynamicVector<int,512> *)(puVar6 + 4))->CurBlock = 0;
        puVar6[5] = 0;
        puVar6[6] = 0;
        UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock
                  ((TDynamicVector<int,512> *)(puVar6 + 4));
        *(undefined4 *)(puVar6 + 7) = 0;
        ((TDynamicVector<float,512> *)(puVar6 + 8))->CurBlock = 0;
        *(undefined4 *)((longlong)puVar6 + 0x44) = 0;
        puVar6[9] = 0;
        puVar6[10] = 0;
        UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock
                  ((TDynamicVector<float,512> *)(puVar6 + 8));
        *(undefined4 *)((longlong)puVar6 + 0x5c) = 0;
        ((TDynamicVector<int,512> *)(puVar6 + 0xb))->CurBlock = 0;
        puVar6[0xc] = 0;
        puVar6[0xd] = 0;
        UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock
                  ((TDynamicVector<int,512> *)(puVar6 + 0xb));
        *(undefined4 *)((longlong)puVar6 + 0x74) = 0;
        ((TDynamicVector<int,512> *)(puVar6 + 0xe))->CurBlock = 0;
        puVar6[0xf] = 0;
        puVar6[0x10] = 0;
        UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock
                  ((TDynamicVector<int,512> *)(puVar6 + 0xe));
        *puVar6 = 0;
        puVar8 = puVar6;
      }
      pFVar2 = (param_1->Array).AllocatorInstance.Data;
      local_38[0] = puVar8;
      if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(param_1->Array).ArrayMax * 8))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (param_1->Array).ArrayNum;
      if (iVar5 == (param_1->Array).ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)param_1,&(param_1->Array).ArrayMax);
      }
      uVar10 = (int)puVar11 + 1;
      puVar11 = (undefined8 *)(ulonglong)uVar10;
      (param_1->Array).ArrayNum = iVar5 + 1;
      *(undefined8 **)((param_1->Array).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_38[0];
    } while ((int)uVar10 < (int)local_res8[0]);
  }
  puVar11 = puVar9;
  if (0 < (int)local_res8[0]) {
    do {
      uVar7 = (uint)puVar9;
      uVar10 = 0;
      if ((int)uVar7 < (param_1->Array).ArrayNum) {
        uVar10 = ~uVar7 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UE::Geometry::TDynamicMeshOverlay<float,2>::Serialize
                (*(TDynamicMeshOverlay<float,2> **)
                  ((longlong)puVar11 + (longlong)(param_1->Array).AllocatorInstance.Data),param_2,
                 param_3,param_4);
      puVar9 = (undefined8 *)(ulonglong)(uVar7 + 1);
      puVar11 = puVar11 + 1;
    } while ((int)(uVar7 + 1) < (int)local_res8[0]);
  }
  return;
}

// SerializeLayers<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>_> @ 14344c4c0

void __cdecl
FDynamicMeshAttributeSet_Local::
SerializeLayers<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>_>
          (TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,TSizedDefaultAllocator<32>_>
           *param_1,FArchive *param_2,FCompactMaps *param_3,bool param_4)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint local_res8 [2];
  undefined8 *local_38 [2];
  undefined8 *puVar11;
  
  local_res8[0] = (param_1->Array).ArrayNum;
  plVar1 = *(longlong **)&param_2->field_0x8;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  puVar9 = (undefined8 *)0x0;
  if (((param_2->field_0x28 & 1) != 0) &&
     (TIndirectArray<UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>,TSizedDefaultAllocator<32>_>
      ::Empty(param_1,local_res8[0]), puVar11 = puVar9, 0 < (int)local_res8[0])) {
    do {
      puVar6 = ::operator_new(0x88);
      puVar8 = puVar9;
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        ((TDynamicVector<unsigned_short,512> *)(puVar6 + 1))->CurBlock = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        UE::Geometry::TDynamicVector<unsigned_short,512>::AddAllocatedBlock
                  ((TDynamicVector<unsigned_short,512> *)(puVar6 + 1));
        *(undefined4 *)((longlong)puVar6 + 0x24) = 0;
        ((TDynamicVector<int,512> *)(puVar6 + 4))->CurBlock = 0;
        puVar6[5] = 0;
        puVar6[6] = 0;
        UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock
                  ((TDynamicVector<int,512> *)(puVar6 + 4));
        *(undefined4 *)(puVar6 + 7) = 0;
        ((TDynamicVector<float,512> *)(puVar6 + 8))->CurBlock = 0;
        *(undefined4 *)((longlong)puVar6 + 0x44) = 0;
        puVar6[9] = 0;
        puVar6[10] = 0;
        UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock
                  ((TDynamicVector<float,512> *)(puVar6 + 8));
        *(undefined4 *)((longlong)puVar6 + 0x5c) = 0;
        ((TDynamicVector<int,512> *)(puVar6 + 0xb))->CurBlock = 0;
        puVar6[0xc] = 0;
        puVar6[0xd] = 0;
        UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock
                  ((TDynamicVector<int,512> *)(puVar6 + 0xb));
        *(undefined4 *)((longlong)puVar6 + 0x74) = 0;
        ((TDynamicVector<int,512> *)(puVar6 + 0xe))->CurBlock = 0;
        puVar6[0xf] = 0;
        puVar6[0x10] = 0;
        UE::Geometry::TDynamicVector<int,512>::AddAllocatedBlock
                  ((TDynamicVector<int,512> *)(puVar6 + 0xe));
        *puVar6 = 0;
        puVar8 = puVar6;
      }
      pFVar2 = (param_1->Array).AllocatorInstance.Data;
      local_38[0] = puVar8;
      if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(param_1->Array).ArrayMax * 8))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (param_1->Array).ArrayNum;
      if (iVar5 == (param_1->Array).ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)param_1,&(param_1->Array).ArrayMax);
      }
      uVar10 = (int)puVar11 + 1;
      puVar11 = (undefined8 *)(ulonglong)uVar10;
      (param_1->Array).ArrayNum = iVar5 + 1;
      *(undefined8 **)((param_1->Array).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_38[0];
    } while ((int)uVar10 < (int)local_res8[0]);
  }
  puVar11 = puVar9;
  if (0 < (int)local_res8[0]) {
    do {
      uVar7 = (uint)puVar9;
      uVar10 = 0;
      if ((int)uVar7 < (param_1->Array).ArrayNum) {
        uVar10 = ~uVar7 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UE::Geometry::TDynamicMeshOverlay<float,3>::Serialize
                (*(TDynamicMeshOverlay<float,3> **)
                  ((longlong)puVar11 + (longlong)(param_1->Array).AllocatorInstance.Data),param_2,
                 param_3,param_4);
      puVar9 = (undefined8 *)(ulonglong)(uVar7 + 1);
      puVar11 = puVar11 + 1;
    } while ((int)(uVar7 + 1) < (int)local_res8[0]);
  }
  return;
}

// SerializeLayers<UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>_> @ 14344c780

void __cdecl
FDynamicMeshAttributeSet_Local::
SerializeLayers<UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>_>
          (TIndirectArray<UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>,TSizedDefaultAllocator<32>_>
           *param_1,FArchive *param_2,FCompactMaps *param_3,bool param_4)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> *this;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *puVar17;
  bool local_88 [8];
  uint local_80 [2];
  undefined8 *local_78;
  longlong local_70;
  TDynamicVector<float,512> local_68;
  
  local_80[0] = (param_1->Array).ArrayNum;
  plVar1 = *(longlong **)&param_2->field_0x8;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_2->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_2 + 0x188))(param_2,local_80,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_2,local_80);
    }
  }
  else {
    local_80[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  puVar13 = (undefined8 *)0x0;
  if (((param_2->field_0x28 & 1) != 0) &&
     (TIndirectArray<UE::Geometry::TDynamicVertexAttribute<float,1,UE::Geometry::FDynamicMesh3>,TSizedDefaultAllocator<32>_>
      ::Empty(param_1,local_80[0]), puVar17 = puVar13, 0 < (int)local_80[0])) {
    do {
      puVar7 = ::operator_new(0x30);
      puVar9 = puVar13;
      if (puVar7 != (undefined8 *)0x0) {
        puVar7[1] = 0;
        ((TDynamicVector<float,512> *)(puVar7 + 3))->CurBlock = 0;
        *puVar7 = &___7__TDynamicVertexAttribute_M_00VFDynamicMesh3_Geometry_UE___Geometry_UE__6B_;
        puVar7[2] = 0;
        *(undefined4 *)((longlong)puVar7 + 0x1c) = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock
                  ((TDynamicVector<float,512> *)(puVar7 + 3));
        puVar9 = puVar7;
      }
      pFVar2 = (param_1->Array).AllocatorInstance.Data;
      local_78 = puVar9;
      if (((pFVar2 <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < pFVar2 + (longlong)(param_1->Array).ArrayMax * 8))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (param_1->Array).ArrayNum;
      if (iVar5 == (param_1->Array).ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)param_1,&(param_1->Array).ArrayMax);
      }
      uVar16 = (int)puVar17 + 1;
      (param_1->Array).ArrayNum = iVar5 + 1;
      *(undefined8 **)((param_1->Array).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_78;
      puVar17 = (undefined8 *)(ulonglong)uVar16;
    } while ((int)uVar16 < (int)local_80[0]);
  }
  if (0 < (int)local_80[0]) {
    local_70 = 0;
    do {
      lVar11 = local_70;
      uVar14 = 0;
      uVar15 = (uint)puVar13;
      uVar16 = 0;
      if ((int)uVar15 < (param_1->Array).ArrayNum) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this = *(TDynamicAttributeBase<UE::Geometry::FDynamicMesh3> **)
              ((param_1->Array).AllocatorInstance.Data + lVar11);
      local_88[0] = param_4;
      UE::Geometry::TDynamicAttributeBase<UE::Geometry::FDynamicMesh3>::Serialize(this,param_2);
      (**(code **)(*(longlong *)param_2 + 0x230))(param_2,&FUE5MainStreamObjectVersion::GUID);
      if (((param_2->field_0x28 & 1) == 0) ||
         (iVar5 = FArchiveState::CustomVer
                            ((FArchiveState *)param_2,&FUE5MainStreamObjectVersion::GUID),
         0x37 < iVar5)) {
        ::operator<<(param_2,local_88);
        if ((param_3 == (FCompactMaps *)0x0) || ((param_3->VertMap).ArrayNum == 0)) {
          if (local_88[0] == false) {
            UE::Geometry::TDynamicVector<float,512>::Serialize<1,0>
                      ((TDynamicVector<float,512> *)&this[1].Name,param_2);
          }
          else {
            UE::Geometry::TDynamicVector<float,512>::Serialize<1,1>
                      ((TDynamicVector<float,512> *)&this[1].Name,param_2);
          }
        }
        else {
          local_68.CurBlock = 0;
          local_68.CurBlockUsed = 0;
          local_68.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_68.Blocks.ArrayNum = 0;
          local_68.Blocks.ArrayMax = 0;
          UE::Geometry::TDynamicVector<float,512>::AddAllocatedBlock(&local_68);
          UE::Geometry::TDynamicVector<float,512>::Resize
                    (&local_68,*(uint *)(this[1]._padding_ + 0x50));
          uVar16 = 0;
          iVar5 = this[1].Name.ComparisonIndex.Value * 0x200 + this[1].Name.Number;
          if (0 < iVar5) {
            uVar10 = 0;
            do {
              iVar6 = UE::Geometry::FCompactMaps::GetVertexMapping(param_3,uVar16);
              if (iVar6 != -1) {
                uVar12 = (uint)uVar14;
                uVar8 = uVar14 >> 9;
                uVar14 = (ulonglong)(uVar12 + 1);
                *(undefined4 *)
                 (*(longlong *)(local_68.Blocks.AllocatorInstance.Data + uVar8 * 8) +
                 (ulonglong)(uVar12 & 0x1ff) * 4) =
                     *(undefined4 *)
                      (*(longlong *)(this[2]._padding_ + (ulonglong)(uVar16 >> 9) * 8) +
                      (ulonglong)(uVar10 & 0x1ff) * 4);
              }
              uVar16 = uVar16 + 1;
              uVar10 = uVar10 + 1;
              lVar11 = local_70;
            } while ((int)uVar16 < iVar5);
          }
          if (local_88[0] == false) {
            UE::Geometry::TDynamicVector<float,512>::Serialize<1,0>(&local_68,param_2);
          }
          else {
            UE::Geometry::TDynamicVector<float,512>::Serialize<1,1>(&local_68,param_2);
          }
          UE::Geometry::TDynamicVector<float,512>::Empty(&local_68,0);
          if (local_68.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Blocks.AllocatorInstance.Data);
          }
        }
      }
      else {
        UE::Geometry::TDynamicVector<float,512>::Serialize<0,0>
                  ((TDynamicVector<float,512> *)&this[1].Name,param_2);
      }
      local_70 = lVar11 + 8;
      puVar13 = (undefined8 *)(ulonglong)(uVar15 + 1);
    } while ((int)(uVar15 + 1) < (int)local_80[0]);
  }
  return;
}

