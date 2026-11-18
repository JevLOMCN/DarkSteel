// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 51

// BuildTopDown @ 14950db80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::BuildTopDown(TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
               *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
              TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  uint *puVar1;
  TDynamicVector<UE::Math::TVector<double>,512> *this_00;
  TDynamicVector<UE::Math::TVector<double>,512> *this_01;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  TDynamicVector<int,512> *this_02;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  FBoxesSet local_168;
  FBoxesSet local_f8;
  ulonglong local_88;
  TVector<double>_u_0 local_80;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  this_00 = &local_f8.BoxExtents;
  uVar19 = 0;
  local_f8.BoxToIndex.CurBlock = 0;
  local_f8.BoxToIndex.CurBlockUsed = 0;
  local_f8.BoxToIndex.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.BoxToIndex.Blocks.ArrayNum = 0;
  local_f8.BoxToIndex.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&local_f8.BoxToIndex);
  local_f8.BoxCenters.CurBlock = 0;
  local_f8.BoxCenters.CurBlockUsed = 0;
  local_f8.BoxCenters.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.BoxCenters.Blocks.ArrayNum = 0;
  local_f8.BoxCenters.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_f8.BoxCenters);
  local_f8.BoxExtents.CurBlock = 0;
  local_f8.BoxExtents.CurBlockUsed = 0;
  local_f8.BoxExtents.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.BoxExtents.Blocks.ArrayNum = 0;
  local_f8.BoxExtents.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(this_00);
  local_f8.IndexList.CurBlock = 0;
  local_f8.IndexList.CurBlockUsed = 0;
  local_f8.IndexList.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.IndexList.Blocks.ArrayNum = 0;
  local_f8.IndexList.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&local_f8.IndexList);
  local_f8.IBoxCur = 0;
  local_f8.IIndicesCur = 0;
  local_168.BoxToIndex.CurBlock = 0;
  local_168.BoxToIndex.CurBlockUsed = 0;
  local_168.BoxToIndex.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.BoxToIndex.Blocks.ArrayNum = 0;
  local_168.BoxToIndex.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&local_168.BoxToIndex);
  local_168.BoxCenters.CurBlock = 0;
  local_168.BoxCenters.CurBlockUsed = 0;
  local_168.BoxCenters.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.BoxCenters.Blocks.ArrayNum = 0;
  local_168.BoxCenters.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_168.BoxCenters);
  local_168.BoxExtents.CurBlock = 0;
  local_168.BoxExtents.CurBlockUsed = 0;
  local_168.BoxExtents.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.BoxExtents.Blocks.ArrayNum = 0;
  local_168.BoxExtents.Blocks.ArrayMax = 0;
  TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&local_168.BoxExtents);
  local_168.IndexList.CurBlock = 0;
  local_168.IndexList.CurBlockUsed = 0;
  local_168.IndexList.Blocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.IndexList.Blocks.ArrayNum = 0;
  local_168.IndexList.Blocks.ArrayMax = 0;
  TDynamicVector<int,512>::AddAllocatedBlock(&local_168.IndexList);
  local_168.IBoxCur = 0;
  local_168.IIndicesCur = 0;
  local_80._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_80._s_0.Y = _UNK_150a9e648;
  local_80._s_0.Z = ___xmm_ffefffffffffffff7fefffffffffffff;
  uStack_68 = _UNK_150a9e6d8;
  local_60 = ___xmm_ffefffffffffffffffefffffffffffff;
  uStack_58 = _UNK_1508ffb58;
  iVar8 = SplitTriSetMidpoint(this,param_1,param_2,0,param_3,0,this->TopDownLeafMaxTriCount,
                              &local_f8,&local_168,(TAxisAlignedBox3<double> *)&local_80._s_0);
  TDynamicVector<int,512>::operator=(&this->BoxToIndex,&local_f8.BoxToIndex);
  TDynamicVector<UE::Math::TVector<double>,512>::operator=(&this->BoxCenters,&local_f8.BoxCenters);
  this_01 = &this->BoxExtents;
  TDynamicVector<UE::Math::TVector<double>,512>::operator=(this_01,this_00);
  TDynamicVector<int,512>::operator=(&this->IndexList,&local_f8.IndexList);
  uVar14 = local_f8.IIndicesCur;
  iVar7 = local_f8.IBoxCur;
  this->TrianglesEnd = local_f8.IIndicesCur;
  uVar12 = local_f8.IBoxCur;
  if (0 < local_168.IBoxCur) {
    do {
      uVar9 = (this->BoxCenters).CurBlockUsed;
      uVar18 = (uint)uVar19;
      uVar10 = (ulonglong)(uVar18 & 0x1ff);
      local_88 = uVar19 >> 9;
      uVar13 = (this->BoxCenters).CurBlock;
      uVar16 = uVar13 * 0x200 + uVar9;
      uVar3 = *(undefined8 *)
               (*(longlong *)(local_168.BoxCenters.Blocks.AllocatorInstance.Data + local_88 * 8) +
                0x10 + uVar10 * 0x18);
      puVar2 = (undefined8 *)
               (*(longlong *)(local_168.BoxCenters.Blocks.AllocatorInstance.Data + local_88 * 8) +
               uVar10 * 0x18);
      uVar5 = *puVar2;
      uVar6 = puVar2[1];
      if (uVar12 == uVar16) {
        if (uVar9 == 0x200) {
          if (uVar13 == (this->BoxCenters).Blocks.ArrayNum - 1U) {
            TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&this->BoxCenters);
          }
          (this->BoxCenters).CurBlock = (this->BoxCenters).CurBlock + 1;
          uVar13 = (this->BoxCenters).CurBlock;
          (this->BoxCenters).CurBlockUsed = 0;
        }
        lVar11 = (longlong)(int)(this->BoxCenters).CurBlockUsed;
        lVar4 = *(longlong *)
                 ((this->BoxCenters).Blocks.AllocatorInstance.Data + (longlong)(int)uVar13 * 8);
        puVar2 = (undefined8 *)(lVar4 + lVar11 * 0x18);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        *(undefined8 *)(lVar4 + 0x10 + lVar11 * 0x18) = uVar3;
        puVar1 = &(this->BoxCenters).CurBlockUsed;
        *puVar1 = *puVar1 + 1;
      }
      else if (uVar16 < uVar12) {
        TDynamicVector<UE::Math::TVector<double>,512>::Resize(&this->BoxCenters,uVar12);
        uVar9 = (this->BoxCenters).CurBlockUsed;
        if (uVar9 == 0x200) {
          if ((this->BoxCenters).CurBlock == (this->BoxCenters).Blocks.ArrayNum - 1U) {
            TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(&this->BoxCenters);
          }
          (this->BoxCenters).CurBlock = (this->BoxCenters).CurBlock + 1;
          uVar9 = 0;
          (this->BoxCenters).CurBlockUsed = 0;
        }
        lVar4 = *(longlong *)
                 ((this->BoxCenters).Blocks.AllocatorInstance.Data +
                 (longlong)(int)(this->BoxCenters).CurBlock * 8);
        puVar2 = (undefined8 *)(lVar4 + (longlong)(int)uVar9 * 0x18);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        *(undefined8 *)(lVar4 + 0x10 + (longlong)(int)uVar9 * 0x18) = uVar3;
        puVar1 = &(this->BoxCenters).CurBlockUsed;
        *puVar1 = *puVar1 + 1;
      }
      else {
        lVar4 = *(longlong *)
                 ((this->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 >> 9) * 8);
        puVar2 = (undefined8 *)(lVar4 + (ulonglong)(uVar12 & 0x1ff) * 0x18);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        *(undefined8 *)(lVar4 + 0x10 + (ulonglong)(uVar12 & 0x1ff) * 0x18) = uVar3;
      }
      uVar9 = this_01->CurBlock;
      uVar13 = (this->BoxExtents).CurBlockUsed;
      uVar16 = uVar9 * 0x200 + uVar13;
      uVar3 = *(undefined8 *)
               (*(longlong *)(local_168.BoxExtents.Blocks.AllocatorInstance.Data + local_88 * 8) +
                0x10 + uVar10 * 0x18);
      puVar2 = (undefined8 *)
               (*(longlong *)(local_168.BoxExtents.Blocks.AllocatorInstance.Data + local_88 * 8) +
               uVar10 * 0x18);
      uVar5 = *puVar2;
      uVar6 = puVar2[1];
      if (uVar12 == uVar16) {
        if (uVar13 == 0x200) {
          if (uVar9 == (this->BoxExtents).Blocks.ArrayNum - 1U) {
            TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(this_01);
          }
          this_01->CurBlock = this_01->CurBlock + 1;
          uVar9 = this_01->CurBlock;
          (this->BoxExtents).CurBlockUsed = 0;
        }
        lVar11 = (longlong)(int)(this->BoxExtents).CurBlockUsed;
        lVar4 = *(longlong *)
                 ((this->BoxExtents).Blocks.AllocatorInstance.Data + (longlong)(int)uVar9 * 8);
        puVar2 = (undefined8 *)(lVar4 + lVar11 * 0x18);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        *(undefined8 *)(lVar4 + 0x10 + lVar11 * 0x18) = uVar3;
        puVar1 = &(this->BoxExtents).CurBlockUsed;
        *puVar1 = *puVar1 + 1;
      }
      else if (uVar16 < uVar12) {
        TDynamicVector<UE::Math::TVector<double>,512>::Resize(this_01,uVar12);
        uVar9 = (this->BoxExtents).CurBlockUsed;
        if (uVar9 == 0x200) {
          if (this_01->CurBlock == (this->BoxExtents).Blocks.ArrayNum - 1U) {
            TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(this_01);
          }
          this_01->CurBlock = this_01->CurBlock + 1;
          uVar9 = 0;
          (this->BoxExtents).CurBlockUsed = 0;
        }
        lVar4 = *(longlong *)
                 ((this->BoxExtents).Blocks.AllocatorInstance.Data +
                 (longlong)(int)this_01->CurBlock * 8);
        puVar2 = (undefined8 *)(lVar4 + (longlong)(int)uVar9 * 0x18);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        *(undefined8 *)(lVar4 + 0x10 + (longlong)(int)uVar9 * 0x18) = uVar3;
        puVar1 = &(this->BoxExtents).CurBlockUsed;
        *puVar1 = *puVar1 + 1;
      }
      else {
        lVar4 = *(longlong *)
                 ((this->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 >> 9) * 8);
        puVar2 = (undefined8 *)(lVar4 + (ulonglong)(uVar12 & 0x1ff) * 0x18);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        *(undefined8 *)(lVar4 + 0x10 + (ulonglong)(uVar12 & 0x1ff) * 0x18) = uVar3;
      }
      uVar9 = (this->BoxToIndex).CurBlockUsed;
      iVar17 = uVar14 + *(int *)(*(longlong *)
                                  (local_168.BoxToIndex.Blocks.AllocatorInstance.Data +
                                  (uVar19 >> 9) * 8) + (ulonglong)(uVar18 & 0x1ff) * 4);
      uVar13 = (this->BoxToIndex).CurBlock;
      uVar16 = uVar13 * 0x200 + uVar9;
      if (uVar12 == uVar16) {
        if (uVar9 == 0x200) {
          if (uVar13 == (this->BoxToIndex).Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(&this->BoxToIndex);
          }
          (this->BoxToIndex).CurBlock = (this->BoxToIndex).CurBlock + 1;
          uVar13 = (this->BoxToIndex).CurBlock;
          (this->BoxToIndex).CurBlockUsed = 0;
        }
        *(int *)(*(longlong *)
                  ((this->BoxToIndex).Blocks.AllocatorInstance.Data + (longlong)(int)uVar13 * 8) +
                (longlong)(int)(this->BoxToIndex).CurBlockUsed * 4) = iVar17;
        puVar1 = &(this->BoxToIndex).CurBlockUsed;
        *puVar1 = *puVar1 + 1;
      }
      else if (uVar16 < uVar12) {
        TDynamicVector<int,512>::Resize(&this->BoxToIndex,uVar12);
        uVar9 = (this->BoxToIndex).CurBlockUsed;
        if (uVar9 == 0x200) {
          if ((this->BoxToIndex).CurBlock == (this->BoxToIndex).Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(&this->BoxToIndex);
          }
          (this->BoxToIndex).CurBlock = (this->BoxToIndex).CurBlock + 1;
          uVar9 = 0;
          (this->BoxToIndex).CurBlockUsed = 0;
        }
        *(int *)(*(longlong *)
                  ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                  (longlong)(int)(this->BoxToIndex).CurBlock * 8) + (longlong)(int)uVar9 * 4) =
             iVar17;
        puVar1 = &(this->BoxToIndex).CurBlockUsed;
        *puVar1 = *puVar1 + 1;
      }
      else {
        *(int *)(*(longlong *)
                  ((this->BoxToIndex).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 >> 9) * 8)
                + (ulonglong)(uVar12 & 0x1ff) * 4) = iVar17;
      }
      uVar19 = (ulonglong)(uVar18 + 1);
      uVar12 = uVar12 + 1;
    } while ((int)(uVar18 + 1) < local_168.IBoxCur);
  }
  this_02 = &this->IndexList;
  if (0 < local_168.IIndicesCur) {
    iVar17 = -uVar14;
    do {
      uVar12 = iVar17 + uVar14;
      uVar12 = *(uint *)(*(longlong *)
                          (local_168.IndexList.Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar12 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 4);
      if ((int)uVar12 < 0) {
        uVar12 = ~uVar12;
      }
      else {
        uVar12 = uVar12 + iVar7;
      }
      uVar9 = this_02->CurBlock;
      iVar15 = uVar12 + 1;
      uVar12 = (this->IndexList).CurBlockUsed;
      uVar13 = uVar9 * 0x200 + uVar12;
      if (uVar14 == uVar13) {
        if (uVar12 == 0x200) {
          if (uVar9 == (this->IndexList).Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(this_02);
          }
          this_02->CurBlock = this_02->CurBlock + 1;
          uVar9 = this_02->CurBlock;
          (this->IndexList).CurBlockUsed = 0;
        }
        *(int *)(*(longlong *)
                  ((this->IndexList).Blocks.AllocatorInstance.Data + (longlong)(int)uVar9 * 8) +
                (longlong)(int)(this->IndexList).CurBlockUsed * 4) = iVar15;
        puVar1 = &(this->IndexList).CurBlockUsed;
        *puVar1 = *puVar1 + 1;
      }
      else if (uVar13 < uVar14) {
        TDynamicVector<int,512>::Resize(this_02,uVar14);
        uVar12 = (this->IndexList).CurBlockUsed;
        if (uVar12 == 0x200) {
          if (this_02->CurBlock == (this->IndexList).Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(this_02);
          }
          this_02->CurBlock = this_02->CurBlock + 1;
          uVar12 = 0;
          (this->IndexList).CurBlockUsed = 0;
        }
        *(int *)(*(longlong *)
                  ((this->IndexList).Blocks.AllocatorInstance.Data +
                  (longlong)(int)this_02->CurBlock * 8) + (longlong)(int)uVar12 * 4) = iVar15;
        puVar1 = &(this->IndexList).CurBlockUsed;
        *puVar1 = *puVar1 + 1;
      }
      else {
        *(int *)(*(longlong *)
                  ((this->IndexList).Blocks.AllocatorInstance.Data + (ulonglong)(uVar14 >> 9) * 8) +
                (ulonglong)(uVar14 & 0x1ff) * 4) = iVar15;
      }
      uVar14 = uVar14 + 1;
    } while ((int)(iVar17 + uVar14) < local_168.IIndicesCur);
  }
  this->RootIndex = iVar7 + iVar8;
  TDynamicVector<int,512>::Empty(&local_168.IndexList,0);
  if (local_168.IndexList.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.IndexList.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_168.BoxExtents,0);
  if (local_168.BoxExtents.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.BoxExtents.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_168.BoxCenters,0);
  if (local_168.BoxCenters.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.BoxCenters.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<int,512>::Empty(&local_168.BoxToIndex,0);
  if (local_168.BoxToIndex.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.BoxToIndex.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<int,512>::Empty(&local_f8.IndexList,0);
  if (local_f8.IndexList.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.IndexList.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(this_00,0);
  if (local_f8.BoxExtents.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.BoxExtents.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_f8.BoxCenters,0);
  if (local_f8.BoxCenters.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.BoxCenters.Blocks.AllocatorInstance.Data);
  }
  TDynamicVector<int,512>::Empty(&local_f8.BoxToIndex,0);
  if (local_f8.BoxToIndex.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.BoxToIndex.Blocks.AllocatorInstance.Data);
  }
  return;
}

// BuildTopDown @ 14950e2c0

void __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::BuildTopDown(TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
               *this,bool param_1)

{
  uint uVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  short sVar6;
  int iVar7;
  TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_> *this_00;
  double dVar8;
  double dVar9;
  int local_f8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_f0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_e0;
  double local_d0;
  double dStack_c8;
  double local_c0;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_a0;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_50;
  TVector<double>_u_0 local_38 [2];
  
  local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax = 0;
  uVar1 = this->Mesh->SourceTriangles->ArrayNum;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar1,&local_f0.AllocatorInstance,0,&local_f0.ArrayMax);
  }
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  uVar1 = this->Mesh->SourceTriangles->ArrayNum;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if (0 < (int)uVar1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar1,&local_e0.AllocatorInstance,0,&local_e0.ArrayMax);
  }
  dVar4 = __real_3fd5555555555555;
  this_00 = this->Mesh;
  local_f8[0] = 0;
  if (0 < this_00->SourceTriangles->ArrayNum) {
    do {
      if ((-1 < local_f8[0]) && (local_f8[0] < this_00->SourceTriangles->ArrayNum)) {
        TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>::
        GetTriVertices(this_00,local_f8[0],(TVector<double> *)&local_b8._s_0,
                       (TVector<double> *)&local_a0._s_0,(TVector<double> *)&local_88._s_0);
        dVar9 = (local_b8._s_0.X + local_a0._s_0.X + local_88._s_0.X) * dVar4;
        dVar3 = (local_b8._s_0.Y + local_a0._s_0.Y + local_88._s_0.Y) * dVar4;
        dVar8 = (local_b8._s_0.Z + local_a0._s_0.Z + local_88._s_0.Z) * dVar4;
        sVar6 = _dclass(SUB84(dVar3 * dVar3 + dVar9 * dVar9 + dVar8 * dVar8,0));
        if ((sVar6 != 2) && (sVar6 < 1)) {
          if (((local_f0.AllocatorInstance.Data <= (FScriptContainerElement *)local_f8) &&
              ((FScriptContainerElement *)local_f8 <
               local_f0.AllocatorInstance.Data + (longlong)local_f0.ArrayMax * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar7 = local_f0.ArrayNum;
          if (local_f0.ArrayNum == local_f0.ArrayMax) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_f0.AllocatorInstance,&local_f0.ArrayMax);
          }
          local_f0.ArrayNum = iVar7 + 1;
          *(int *)(local_f0.AllocatorInstance.Data + (longlong)iVar7 * 4) = local_f8[0];
          TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>::
          GetTriVertices(this->Mesh,local_f8[0],(TVector<double> *)&local_68._s_0,
                         (TVector<double> *)&local_50._s_0,(TVector<double> *)&local_38[0]._s_0);
          local_d0 = (local_68._s_0.X + local_50._s_0.X + (double)local_38[0]._0_8_) * dVar4;
          dStack_c8 = (local_68._s_0.Y + local_50._s_0.Y + (double)local_38[0]._8_8_) * dVar4;
          local_c0 = (local_68._s_0.Z + local_50._s_0.Z + (double)local_38[0]._16_8_) * dVar4;
          if (((local_e0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_d0) &&
              ((FScriptContainerElement *)&local_d0 <
               local_e0.AllocatorInstance.Data + (longlong)local_e0.ArrayMax * 0x18)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar7 = local_e0.ArrayNum;
          if (local_e0.ArrayNum == local_e0.ArrayMax) {
            iVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_e0.AllocatorInstance,&local_e0.ArrayMax);
          }
          local_e0.ArrayNum = iVar7 + 1;
          *(double *)(local_e0.AllocatorInstance.Data + (longlong)iVar7 * 0x18) = local_d0;
          *(double *)(local_e0.AllocatorInstance.Data + (longlong)iVar7 * 0x18 + 8) = dStack_c8;
          *(double *)(local_e0.AllocatorInstance.Data + (longlong)iVar7 * 0x18 + 0x10) = local_c0;
        }
      }
      this_00 = this->Mesh;
      local_f8[0] = local_f8[0] + 1;
    } while (local_f8[0] < this_00->SourceTriangles->ArrayNum);
  }
  BuildTopDown(this,&local_f0,&local_e0,local_f0.ArrayNum);
  if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.AllocatorInstance.Data);
  }
  if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.AllocatorInstance.Data);
  }
  return;
}

// SplitTriSetMidpoint @ 149526cc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::SplitTriSetMidpoint
          (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,int param_3,
          int param_4,int param_5,int param_6,FBoxesSet *param_7,FBoxesSet *param_8,
          TAxisAlignedBox3<double> *param_9)

{
  int *piVar1;
  uint *puVar2;
  TVector<double> *pTVar3;
  longlong lVar4;
  double dVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  FBoxesSet *pFVar14;
  TAxisAlignedBox3<double> *pTVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  double *pdVar20;
  TAxisAlignedBox3<double> *pTVar21;
  longlong lVar22;
  undefined8 uVar23;
  uint uVar24;
  longlong *plVar25;
  uint uVar26;
  ulonglong uVar27;
  TDynamicVector<int,512> *this_00;
  TDynamicVector<UE::Math::TVector<double>,512> *pTVar28;
  uint uVar29;
  int iVar30;
  longlong lVar31;
  uint uVar32;
  uint uVar33;
  int iVar34;
  undefined4 uVar35;
  double dVar36;
  undefined4 uVar39;
  undefined8 uVar37;
  double dVar38;
  undefined4 uVar40;
  undefined4 uVar42;
  double dVar41;
  longlong local_1b0;
  int local_1a8;
  longlong local_1a0;
  int local_178 [2];
  int local_170;
  int local_16c;
  longlong local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  TVector<double>_u_0 local_130;
  double dStack_118;
  double local_110;
  double dStack_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  TAxisAlignedBox3<double> local_d0 [3];
  
  pTVar15 = param_9;
  pFVar14 = param_7;
  iVar17 = param_4;
  local_1b0 = (longlong)param_3;
  if (param_1->ArrayNum < 1) {
    pdVar20 = &local_160;
    local_160 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_158 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_150 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_148 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_140 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_138 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    pdVar20 = &local_100;
    local_100 = ___xmm_7fefffffffffffff7fefffffffffffff;
    dStack_f8 = _UNK_150a9e648;
    local_e0 = ___xmm_ffefffffffffffffffefffffffffffff;
    dStack_d8 = _UNK_1508ffb58;
    local_f0 = ___xmm_ffefffffffffffff7fefffffffffffff;
    dStack_e8 = _UNK_150a9e6d8;
  }
  dVar36 = pdVar20[1];
  dVar5 = pdVar20[2];
  dVar41 = pdVar20[3];
  (param_9->Min).field0_0x0._s_0.X = *pdVar20;
  (param_9->Min).field0_0x0._s_0.Y = dVar36;
  dVar36 = pdVar20[4];
  dVar38 = pdVar20[5];
  (param_9->Min).field0_0x0._s_0.Z = dVar5;
  (param_9->Max).field0_0x0._s_0.X = dVar41;
  (param_9->Max).field0_0x0._s_0.Y = dVar36;
  (param_9->Max).field0_0x0._s_0.Z = dVar38;
  if (param_6 < param_4) {
    local_178[0] = param_5;
    Core::Private::Function::CheckCallable(*(void **)&this->GetSplitAxis);
    plVar8 = *(longlong **)&(this->GetSplitAxis).field_0x28;
    pcVar10 = *(code **)&this->GetSplitAxis;
    plVar25 = (longlong *)&(this->GetSplitAxis).field_0x10;
    if (plVar8 != (longlong *)0x0) {
      plVar25 = plVar8;
    }
    uVar23 = (**(code **)(*plVar25 + 8))();
    uVar35 = (undefined4)__real_7fefffffffffffff;
    uVar39 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
    uVar40 = (undefined4)__real_ffefffffffffffff;
    uVar42 = (undefined4)((ulonglong)__real_ffefffffffffffff >> 0x20);
    uVar18 = (*pcVar10)(uVar23,local_178,pTVar15);
    iVar34 = 0;
    uVar29 = 0;
    uVar27 = (ulonglong)(int)uVar18;
    uVar33 = 0;
    if (0 < iVar17) {
      lVar31 = (uVar27 + local_1b0 * 3) * 8;
      uVar26 = param_3;
      do {
        uVar32 = uVar33;
        if ((int)uVar26 < param_2->ArrayNum) {
          uVar32 = ~uVar26 >> 0x1f;
        }
        if (uVar32 == 0) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar10 = (code *)swi(3);
            iVar17 = (*pcVar10)();
            return iVar17;
          }
        }
        pFVar7 = (param_2->AllocatorInstance).Data;
        if (2 < uVar27) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidIndex(Index)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                              ,0x7a2,L"");
          if (bVar16) {
            pcVar10 = (code *)swi(3);
            iVar17 = (*pcVar10)();
            return iVar17;
          }
        }
        dVar36 = *(double *)(pFVar7 + lVar31);
        uVar26 = uVar26 + 1;
        dVar5 = dVar36;
        if ((double)CONCAT44(uVar39,uVar35) <= dVar36) {
          dVar5 = (double)CONCAT44(uVar39,uVar35);
        }
        lVar31 = lVar31 + 0x18;
        if (dVar36 <= (double)CONCAT44(uVar42,uVar40)) {
          dVar36 = (double)CONCAT44(uVar42,uVar40);
        }
        uVar35 = SUB84(dVar5,0);
        uVar39 = (undefined4)((ulonglong)dVar5 >> 0x20);
        uVar40 = SUB84(dVar36,0);
        uVar42 = (undefined4)((ulonglong)dVar36 >> 0x20);
      } while ((int)(uVar26 - param_3) < iVar17);
    }
    dVar5 = __real_3fe0000000000000;
    dVar36 = ((double)CONCAT44(uVar42,uVar40) + (double)CONCAT44(uVar39,uVar35)) *
             __real_3fe0000000000000;
    if ((double)CONCAT44(uVar42,uVar40) - (double)CONCAT44(uVar39,uVar35) <= __real_3e45798ee2308c3a
       ) {
      iVar34 = iVar17 / 2;
      iVar17 = iVar17 - iVar34;
    }
    else {
      local_1a8 = iVar17 + -1;
      local_168 = (longlong)local_1a8;
      if (0 < local_1a8) {
        local_1a0 = 0;
        iVar34 = 0;
        while( true ) {
          uVar26 = iVar34 + param_3;
          lVar31 = (uVar27 + (param_3 + local_1a0) * 3) * 8;
          while( true ) {
            uVar32 = uVar33;
            if ((int)uVar26 < param_2->ArrayNum) {
              uVar32 = ~uVar26 >> 0x1f;
            }
            if (uVar32 == 0) {
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar16) {
                pcVar10 = (code *)swi(3);
                iVar17 = (*pcVar10)();
                return iVar17;
              }
            }
            pFVar7 = (param_2->AllocatorInstance).Data;
            if (2 < uVar18) {
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L"");
              if (bVar16) {
                pcVar10 = (code *)swi(3);
                iVar17 = (*pcVar10)();
                return iVar17;
              }
            }
            if (dVar36 < *(double *)(pFVar7 + lVar31)) break;
            local_1a0 = local_1a0 + 1;
            iVar34 = iVar34 + 1;
            uVar26 = uVar26 + 1;
            lVar31 = lVar31 + 0x18;
          }
          uVar26 = param_3 + local_1a8;
          lVar22 = (local_1b0 + local_168) * 0x18;
          lVar31 = local_168;
          while( true ) {
            uVar19 = 0;
            uVar32 = uVar19;
            if ((int)uVar26 < param_2->ArrayNum) {
              uVar32 = ~uVar26 >> 0x1f;
            }
            if (uVar32 == 0) {
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar16) {
                pcVar10 = (code *)swi(3);
                iVar17 = (*pcVar10)();
                return iVar17;
              }
            }
            pFVar7 = (param_2->AllocatorInstance).Data;
            if (2 < uVar18) {
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidIndex(Index)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                  ,0x7a2,L"");
              if (bVar16) {
                pcVar10 = (code *)swi(3);
                iVar17 = (*pcVar10)();
                return iVar17;
              }
            }
            if (*(double *)(pFVar7 + uVar27 * 8 + lVar22) <= dVar36) break;
            local_1a8 = local_1a8 + -1;
            uVar26 = uVar26 - 1;
            lVar31 = lVar31 + -1;
            lVar22 = lVar22 + -0x18;
          }
          iVar17 = param_4;
          local_168 = lVar31;
          if (lVar31 <= local_1a0) break;
          lVar22 = (longlong)param_3;
          uVar32 = (uint)~(iVar34 + param_3) >> 0x1f;
          uVar26 = uVar19;
          if (iVar34 + param_3 < param_2->ArrayNum) {
            uVar26 = uVar32;
          }
          if (uVar26 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar10 = (code *)swi(3);
              iVar17 = (*pcVar10)();
              return iVar17;
            }
          }
          pFVar9 = (param_2->AllocatorInstance).Data;
          lVar4 = lVar22 + lVar31;
          pFVar7 = pFVar9 + (local_1b0 + local_1a0) * 0x18;
          uVar37 = *(undefined8 *)pFVar7;
          uVar11 = *(undefined8 *)(pFVar7 + 8);
          uVar23 = *(undefined8 *)(pFVar9 + (local_1b0 + local_1a0) * 0x18 + 0x10);
          uVar24 = (uint)~(local_1a8 + param_3) >> 0x1f;
          uVar26 = uVar19;
          if (local_1a8 + param_3 < param_2->ArrayNum) {
            uVar26 = uVar24;
          }
          if (uVar26 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar10 = (code *)swi(3);
              iVar17 = (*pcVar10)();
              return iVar17;
            }
          }
          pFVar9 = (param_2->AllocatorInstance).Data;
          pFVar7 = pFVar9 + lVar4 * 0x18;
          uVar12 = *(undefined8 *)pFVar7;
          uVar13 = *(undefined8 *)(pFVar7 + 8);
          uVar6 = *(undefined8 *)(pFVar9 + lVar4 * 0x18 + 0x10);
          uVar26 = uVar19;
          if (iVar34 + param_3 < param_2->ArrayNum) {
            uVar26 = uVar32;
          }
          if (uVar26 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar10 = (code *)swi(3);
              iVar17 = (*pcVar10)();
              return iVar17;
            }
          }
          pFVar9 = (param_2->AllocatorInstance).Data;
          pFVar7 = pFVar9 + (local_1a0 + lVar22) * 0x18;
          *(undefined8 *)pFVar7 = uVar12;
          *(undefined8 *)(pFVar7 + 8) = uVar13;
          *(undefined8 *)(pFVar9 + (local_1a0 + lVar22) * 0x18 + 0x10) = uVar6;
          uVar26 = uVar19;
          if (local_1a8 + param_3 < param_2->ArrayNum) {
            uVar26 = uVar24;
          }
          if (uVar26 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar10 = (code *)swi(3);
              iVar17 = (*pcVar10)();
              return iVar17;
            }
          }
          pFVar9 = (param_2->AllocatorInstance).Data;
          pFVar7 = pFVar9 + lVar4 * 0x18;
          *(undefined8 *)pFVar7 = uVar37;
          *(undefined8 *)(pFVar7 + 8) = uVar11;
          *(undefined8 *)(pFVar9 + lVar4 * 0x18 + 0x10) = uVar23;
          uVar26 = uVar19;
          if (iVar34 + param_3 < param_1->ArrayNum) {
            uVar26 = (uint)~(iVar34 + param_3) >> 0x1f;
          }
          if (uVar26 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar10 = (code *)swi(3);
              iVar17 = (*pcVar10)();
              return iVar17;
            }
          }
          uVar35 = *(undefined4 *)((param_1->AllocatorInstance).Data + (local_1a0 + lVar22) * 4);
          uVar26 = uVar19;
          if (local_1a8 + param_3 < param_1->ArrayNum) {
            uVar26 = (uint)~(local_1a8 + param_3) >> 0x1f;
          }
          if (uVar26 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar10 = (code *)swi(3);
              iVar17 = (*pcVar10)();
              return iVar17;
            }
          }
          uVar39 = *(undefined4 *)((param_1->AllocatorInstance).Data + (lVar22 + lVar31) * 4);
          if (iVar34 + param_3 < param_1->ArrayNum) {
            uVar19 = (uint)~(iVar34 + param_3) >> 0x1f;
          }
          if (uVar19 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar10 = (code *)swi(3);
              iVar17 = (*pcVar10)();
              return iVar17;
            }
          }
          *(undefined4 *)((param_1->AllocatorInstance).Data + (local_1a0 + lVar22) * 4) = uVar39;
          uVar26 = uVar33;
          if (local_1a8 + param_3 < param_1->ArrayNum) {
            uVar26 = (uint)~(local_1a8 + param_3) >> 0x1f;
          }
          if (uVar26 == 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar16) {
              pcVar10 = (code *)swi(3);
              iVar17 = (*pcVar10)();
              return iVar17;
            }
          }
          *(undefined4 *)((param_1->AllocatorInstance).Data + (lVar22 + lVar31) * 4) = uVar35;
        }
      }
      iVar17 = iVar17 - iVar34;
    }
    pFVar14 = param_7;
    iVar30 = param_5 + 1;
    local_130._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
    local_130._s_0.Y = _UNK_150a9e648;
    local_130._s_0.Z = ___xmm_ffefffffffffffff7fefffffffffffff;
    dStack_118 = _UNK_150a9e6d8;
    local_110 = ___xmm_ffefffffffffffffffefffffffffffff;
    dStack_108 = _UNK_1508ffb58;
    local_170 = SplitTriSetMidpoint(this,param_1,param_2,param_3,iVar34,iVar30,param_6,param_7,
                                    param_8,param_9);
    local_16c = SplitTriSetMidpoint(this,param_1,param_2,iVar34 + param_3,iVar17,iVar30,param_6,
                                    pFVar14,param_8,(TAxisAlignedBox3<double> *)&local_130._s_0);
    pTVar15 = param_9;
    pFVar14 = param_8;
    pTVar3 = &param_9->Max;
    dVar36 = (param_9->Min).field0_0x0._s_0.Y;
    uVar23 = local_130._s_0.Y;
    if (dVar36 <= local_130._s_0.Y) {
      uVar23 = dVar36;
    }
    dVar36 = (param_9->Min).field0_0x0._s_0.X;
    uVar37 = local_130._s_0.X;
    if (dVar36 <= local_130._s_0.X) {
      uVar37 = dVar36;
    }
    (param_9->Min).field0_0x0._s_0.Y = (double)uVar23;
    (param_9->Min).field0_0x0._s_0.X = (double)uVar37;
    dVar36 = (pTVar3->field0_0x0)._s_0.X;
    dVar41 = dStack_118;
    if (dStack_118 <= dVar36) {
      dVar41 = dVar36;
    }
    dVar36 = (param_9->Min).field0_0x0._s_0.Z;
    uVar23 = local_130._s_0.Z;
    if (dVar36 <= local_130._s_0.Z) {
      uVar23 = dVar36;
    }
    (pTVar3->field0_0x0)._s_0.X = dVar41;
    (param_9->Min).field0_0x0._s_0.Z = (double)uVar23;
    dVar36 = (param_9->Max).field0_0x0._s_0.Z;
    dVar41 = dStack_108;
    if (dStack_108 <= dVar36) {
      dVar41 = dVar36;
    }
    dVar36 = (param_9->Max).field0_0x0._s_0.Y;
    dVar38 = local_110;
    if (local_110 <= dVar36) {
      dVar38 = dVar36;
    }
    (param_9->Max).field0_0x0._s_0.Z = dVar41;
    (param_9->Max).field0_0x0._s_0.Y = dVar38;
    uVar18 = param_8->IBoxCur;
    param_8->IBoxCur = uVar18 + 1;
    TDynamicVector<int,512>::InsertAt(&param_8->BoxToIndex,&param_8->IIndicesCur,uVar18);
    uVar33 = pFVar14->IIndicesCur;
    pFVar14->IIndicesCur = uVar33 + 1;
    TDynamicVector<int,512>::InsertAt(&pFVar14->IndexList,&local_170,uVar33);
    uVar33 = pFVar14->IIndicesCur;
    pFVar14->IIndicesCur = uVar33 + 1;
    TDynamicVector<int,512>::InsertAt(&pFVar14->IndexList,&local_16c,uVar33);
    uVar26 = (pFVar14->BoxCenters).CurBlock;
    pTVar28 = &pFVar14->BoxCenters;
    uVar33 = (pFVar14->BoxCenters).CurBlockUsed;
    uVar32 = uVar26 * 0x200 + uVar33;
    dVar36 = ((pTVar15->Min).field0_0x0._s_0.X + (pTVar3->field0_0x0)._s_0.X) * dVar5;
    dVar41 = ((pTVar15->Max).field0_0x0._s_0.Y + (pTVar15->Min).field0_0x0._s_0.Y) * dVar5;
    dVar38 = ((pTVar15->Max).field0_0x0._s_0.Z + (pTVar15->Min).field0_0x0._s_0.Z) * dVar5;
    if (uVar18 == uVar32) {
      if (uVar33 == 0x200) {
        if (uVar26 == (pFVar14->BoxCenters).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar28);
        }
        pTVar28->CurBlock = pTVar28->CurBlock + 1;
        uVar26 = pTVar28->CurBlock;
        (pFVar14->BoxCenters).CurBlockUsed = 0;
        uVar33 = uVar29;
      }
    }
    else {
      if (uVar18 <= uVar32) {
        uVar27 = (ulonglong)(uVar18 & 0x1ff);
        lVar31 = *(longlong *)
                  ((pFVar14->BoxCenters).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar18 >> 9) * 8);
        *(double *)(lVar31 + uVar27 * 0x18) = dVar36;
        *(double *)(lVar31 + 8 + uVar27 * 0x18) = dVar41;
        *(double *)(lVar31 + 0x10 + uVar27 * 0x18) = dVar38;
        goto LAB_149527bef;
      }
      TDynamicVector<UE::Math::TVector<double>,512>::Resize(pTVar28,uVar18);
      uVar33 = (pFVar14->BoxCenters).CurBlockUsed;
      if (uVar33 == 0x200) {
        if (pTVar28->CurBlock == (pFVar14->BoxCenters).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar28);
        }
        pTVar28->CurBlock = pTVar28->CurBlock + 1;
        (pFVar14->BoxCenters).CurBlockUsed = 0;
        uVar33 = uVar29;
      }
      uVar26 = pTVar28->CurBlock;
    }
    lVar22 = (longlong)(int)uVar33;
    lVar31 = *(longlong *)
              ((pFVar14->BoxCenters).Blocks.AllocatorInstance.Data + (longlong)(int)uVar26 * 8);
    *(double *)(lVar31 + lVar22 * 0x18) = dVar36;
    *(double *)(lVar31 + 8 + lVar22 * 0x18) = dVar41;
    *(double *)(lVar31 + 0x10 + lVar22 * 0x18) = dVar38;
    puVar2 = &(pFVar14->BoxCenters).CurBlockUsed;
    *puVar2 = *puVar2 + 1;
LAB_149527bef:
    pFVar14 = param_8;
    pTVar28 = &param_8->BoxExtents;
    uVar26 = pTVar28->CurBlock;
    uVar33 = (param_8->BoxExtents).CurBlockUsed;
    uVar32 = uVar26 * 0x200 + uVar33;
    dVar36 = ((pTVar15->Max).field0_0x0._s_0.X - (pTVar15->Min).field0_0x0._s_0.X) * dVar5;
    dVar41 = ((pTVar15->Max).field0_0x0._s_0.Y - (pTVar15->Min).field0_0x0._s_0.Y) * dVar5;
    dVar5 = ((pTVar15->Max).field0_0x0._s_0.Z - (pTVar15->Min).field0_0x0._s_0.Z) * dVar5;
    if (uVar18 == uVar32) {
      if (uVar33 == 0x200) {
        if (uVar26 == (param_8->BoxExtents).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar28);
        }
        pTVar28->CurBlock = pTVar28->CurBlock + 1;
        uVar26 = pTVar28->CurBlock;
        (pFVar14->BoxExtents).CurBlockUsed = 0;
        uVar33 = uVar29;
      }
    }
    else {
      if (uVar18 <= uVar32) {
        uVar27 = (ulonglong)(uVar18 & 0x1ff);
        lVar31 = *(longlong *)
                  ((param_8->BoxExtents).Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar18 >> 9) * 8);
        *(double *)(lVar31 + uVar27 * 0x18) = dVar36;
        *(double *)(lVar31 + 8 + uVar27 * 0x18) = dVar41;
        *(double *)(lVar31 + 0x10 + uVar27 * 0x18) = dVar5;
        return uVar18;
      }
      TDynamicVector<UE::Math::TVector<double>,512>::Resize(pTVar28,uVar18);
      uVar33 = (pFVar14->BoxExtents).CurBlockUsed;
      if (uVar33 == 0x200) {
        if (pTVar28->CurBlock == (pFVar14->BoxExtents).Blocks.ArrayNum - 1U) {
          TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar28);
        }
        pTVar28->CurBlock = pTVar28->CurBlock + 1;
        (pFVar14->BoxExtents).CurBlockUsed = 0;
        uVar33 = uVar29;
      }
      uVar26 = pTVar28->CurBlock;
    }
    lVar22 = (longlong)(int)uVar33;
    lVar31 = *(longlong *)
              ((pFVar14->BoxExtents).Blocks.AllocatorInstance.Data + (longlong)(int)uVar26 * 8);
    *(double *)(lVar31 + lVar22 * 0x18) = dVar36;
    *(double *)(lVar31 + 8 + lVar22 * 0x18) = dVar41;
    *(double *)(lVar31 + 0x10 + lVar22 * 0x18) = dVar5;
    puVar2 = &(pFVar14->BoxExtents).CurBlockUsed;
    *puVar2 = *puVar2 + 1;
    return uVar18;
  }
  uVar18 = param_7->IBoxCur;
  piVar1 = &param_7->IIndicesCur;
  param_7->IBoxCur = uVar18 + 1;
  param_9._0_4_ = uVar18;
  TDynamicVector<int,512>::InsertAt(&param_7->BoxToIndex,piVar1,uVar18);
  uVar33 = *piVar1;
  this_00 = &pFVar14->IndexList;
  *piVar1 = uVar33 + 1;
  TDynamicVector<int,512>::InsertAt(this_00,&param_4,uVar33);
  if (0 < iVar17) {
    local_1b0 = local_1b0 * 4;
    param_6 = param_3;
    do {
      uVar18 = *piVar1;
      *piVar1 = uVar18 + 1;
      uVar29 = ~param_6;
      uVar33 = 0;
      if (param_6 < param_1->ArrayNum) {
        uVar33 = uVar29 >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        iVar17 = (*pcVar10)();
        return iVar17;
      }
      uVar33 = this_00->CurBlock;
      uVar26 = (pFVar14->IndexList).CurBlockUsed;
      uVar32 = uVar33 * 0x200 + uVar26;
      pFVar7 = (param_1->AllocatorInstance).Data;
      if (uVar18 == uVar32) {
        if (uVar26 == 0x200) {
          if (uVar33 == (pFVar14->IndexList).Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(this_00);
          }
          this_00->CurBlock = this_00->CurBlock + 1;
          uVar26 = 0;
          uVar33 = this_00->CurBlock;
          (pFVar14->IndexList).CurBlockUsed = 0;
        }
        *(undefined4 *)
         (*(longlong *)
           ((pFVar14->IndexList).Blocks.AllocatorInstance.Data + (longlong)(int)uVar33 * 8) +
         (longlong)(int)uVar26 * 4) = *(undefined4 *)(pFVar7 + local_1b0);
        puVar2 = &(pFVar14->IndexList).CurBlockUsed;
        *puVar2 = *puVar2 + 1;
      }
      else if (uVar32 < uVar18) {
        TDynamicVector<int,512>::Resize(this_00,uVar18);
        uVar18 = (pFVar14->IndexList).CurBlockUsed;
        if (uVar18 == 0x200) {
          if (this_00->CurBlock == (pFVar14->IndexList).Blocks.ArrayNum - 1U) {
            TDynamicVector<int,512>::AddAllocatedBlock(this_00);
          }
          this_00->CurBlock = this_00->CurBlock + 1;
          uVar18 = 0;
          (pFVar14->IndexList).CurBlockUsed = 0;
        }
        *(undefined4 *)
         (*(longlong *)
           ((pFVar14->IndexList).Blocks.AllocatorInstance.Data +
           (longlong)(int)this_00->CurBlock * 8) + (longlong)(int)uVar18 * 4) =
             *(undefined4 *)(pFVar7 + local_1b0);
        puVar2 = &(pFVar14->IndexList).CurBlockUsed;
        *puVar2 = *puVar2 + 1;
      }
      else {
        *(undefined4 *)
         (*(longlong *)
           ((pFVar14->IndexList).Blocks.AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8) +
         (ulonglong)(uVar18 & 0x1ff) * 4) = *(undefined4 *)(pFVar7 + local_1b0);
      }
      uVar18 = 0;
      if (param_6 < param_1->ArrayNum) {
        uVar18 = uVar29 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        iVar17 = (*pcVar10)();
        return iVar17;
      }
      pTVar21 = TMeshQueries<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
                ::GetTriBounds(local_d0,this->Mesh,
                               *(int *)((param_1->AllocatorInstance).Data + local_1b0));
      param_6 = param_6 + 1;
      local_1b0 = local_1b0 + 4;
      dVar5 = (pTVar21->Min).field0_0x0._s_0.X;
      dVar36 = (pTVar15->Min).field0_0x0._s_0.X;
      if (dVar36 <= dVar5) {
        dVar5 = dVar36;
      }
      (pTVar15->Min).field0_0x0._s_0.X = dVar5;
      dVar5 = (pTVar21->Min).field0_0x0._s_0.Y;
      dVar36 = (pTVar15->Min).field0_0x0._s_0.Y;
      if (dVar36 <= dVar5) {
        dVar5 = dVar36;
      }
      (pTVar15->Min).field0_0x0._s_0.Y = dVar5;
      dVar5 = (pTVar21->Min).field0_0x0._s_0.Z;
      dVar36 = (pTVar15->Min).field0_0x0._s_0.Z;
      if (dVar36 <= dVar5) {
        dVar5 = dVar36;
      }
      (pTVar15->Min).field0_0x0._s_0.Z = dVar5;
      dVar5 = (pTVar21->Max).field0_0x0._s_0.X;
      dVar36 = (pTVar15->Max).field0_0x0._s_0.X;
      if (dVar5 <= dVar36) {
        dVar5 = dVar36;
      }
      (pTVar15->Max).field0_0x0._s_0.X = dVar5;
      dVar36 = (pTVar21->Max).field0_0x0._s_0.Y;
      dVar5 = (pTVar15->Max).field0_0x0._s_0.Y;
      if (dVar36 <= dVar5) {
        dVar36 = dVar5;
      }
      (pTVar15->Max).field0_0x0._s_0.Y = dVar36;
      dVar5 = (pTVar21->Max).field0_0x0._s_0.Z;
      dVar36 = (pTVar15->Max).field0_0x0._s_0.Z;
      if (dVar5 <= dVar36) {
        dVar5 = dVar36;
      }
      (pTVar15->Max).field0_0x0._s_0.Z = dVar5;
      uVar18 = (uint)param_9;
    } while (param_6 - param_3 < iVar17);
  }
  pFVar14 = param_7;
  dVar38 = __real_3fe0000000000000;
  pTVar28 = &param_7->BoxCenters;
  uVar29 = pTVar28->CurBlock;
  uVar33 = (param_7->BoxCenters).CurBlockUsed;
  uVar26 = uVar29 * 0x200 + uVar33;
  dVar36 = ((pTVar15->Max).field0_0x0._s_0.X + (pTVar15->Min).field0_0x0._s_0.X) *
           __real_3fe0000000000000;
  dVar5 = ((pTVar15->Max).field0_0x0._s_0.Y + (pTVar15->Min).field0_0x0._s_0.Y) *
          __real_3fe0000000000000;
  dVar41 = ((pTVar15->Max).field0_0x0._s_0.Z + (pTVar15->Min).field0_0x0._s_0.Z) *
           __real_3fe0000000000000;
  if (uVar18 == uVar26) {
    if (uVar33 == 0x200) {
      if (uVar29 == (param_7->BoxCenters).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar28);
      }
      pTVar28->CurBlock = pTVar28->CurBlock + 1;
      uVar33 = 0;
      uVar29 = pTVar28->CurBlock;
      (pFVar14->BoxCenters).CurBlockUsed = 0;
    }
  }
  else {
    if (uVar18 <= uVar26) {
      uVar27 = (ulonglong)(uVar18 & 0x1ff);
      lVar31 = *(longlong *)
                ((param_7->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8)
      ;
      *(double *)(lVar31 + uVar27 * 0x18) = dVar36;
      *(double *)(lVar31 + 8 + uVar27 * 0x18) = dVar5;
      *(double *)(lVar31 + 0x10 + uVar27 * 0x18) = dVar41;
      goto LAB_1495271a7;
    }
    TDynamicVector<UE::Math::TVector<double>,512>::Resize(pTVar28,uVar18);
    uVar33 = (pFVar14->BoxCenters).CurBlockUsed;
    if (uVar33 == 0x200) {
      if (pTVar28->CurBlock == (pFVar14->BoxCenters).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar28);
      }
      pTVar28->CurBlock = pTVar28->CurBlock + 1;
      uVar33 = 0;
      (pFVar14->BoxCenters).CurBlockUsed = 0;
    }
    uVar29 = pTVar28->CurBlock;
  }
  lVar22 = (longlong)(int)uVar33;
  lVar31 = *(longlong *)
            ((pFVar14->BoxCenters).Blocks.AllocatorInstance.Data + (longlong)(int)uVar29 * 8);
  *(double *)(lVar31 + lVar22 * 0x18) = dVar36;
  *(double *)(lVar31 + 8 + lVar22 * 0x18) = dVar5;
  *(double *)(lVar31 + 0x10 + lVar22 * 0x18) = dVar41;
  puVar2 = &(pFVar14->BoxCenters).CurBlockUsed;
  *puVar2 = *puVar2 + 1;
LAB_1495271a7:
  pFVar14 = param_7;
  pTVar28 = &param_7->BoxExtents;
  uVar29 = pTVar28->CurBlock;
  uVar33 = (param_7->BoxExtents).CurBlockUsed;
  uVar26 = uVar29 * 0x200 + uVar33;
  dVar36 = ((pTVar15->Max).field0_0x0._s_0.X - (pTVar15->Min).field0_0x0._s_0.X) * dVar38;
  dVar5 = ((pTVar15->Max).field0_0x0._s_0.Y - (pTVar15->Min).field0_0x0._s_0.Y) * dVar38;
  dVar38 = ((pTVar15->Max).field0_0x0._s_0.Z - (pTVar15->Min).field0_0x0._s_0.Z) * dVar38;
  if (uVar18 == uVar26) {
    if (uVar33 == 0x200) {
      if (uVar29 == (param_7->BoxExtents).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar28);
      }
      pTVar28->CurBlock = pTVar28->CurBlock + 1;
      uVar33 = 0;
      uVar29 = pTVar28->CurBlock;
      (pFVar14->BoxExtents).CurBlockUsed = 0;
    }
  }
  else {
    if (uVar18 <= uVar26) {
      uVar27 = (ulonglong)(uVar18 & 0x1ff);
      lVar31 = *(longlong *)
                ((param_7->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8)
      ;
      *(double *)(lVar31 + uVar27 * 0x18) = dVar36;
      *(double *)(lVar31 + 8 + uVar27 * 0x18) = dVar5;
      *(double *)(lVar31 + 0x10 + uVar27 * 0x18) = dVar38;
      return ~uVar18;
    }
    TDynamicVector<UE::Math::TVector<double>,512>::Resize(pTVar28,uVar18);
    uVar33 = (pFVar14->BoxExtents).CurBlockUsed;
    if (uVar33 == 0x200) {
      if (pTVar28->CurBlock == (pFVar14->BoxExtents).Blocks.ArrayNum - 1U) {
        TDynamicVector<UE::Math::TVector<double>,512>::AddAllocatedBlock(pTVar28);
      }
      pTVar28->CurBlock = pTVar28->CurBlock + 1;
      (pFVar14->BoxExtents).CurBlockUsed = 0;
      uVar33 = 0;
    }
    uVar29 = pTVar28->CurBlock;
  }
  lVar22 = (longlong)(int)uVar33;
  lVar31 = *(longlong *)
            ((pFVar14->BoxExtents).Blocks.AllocatorInstance.Data + (longlong)(int)uVar29 * 8);
  *(double *)(lVar31 + lVar22 * 0x18) = dVar36;
  *(double *)(lVar31 + 8 + lVar22 * 0x18) = dVar5;
  *(double *)(lVar31 + 0x10 + lVar22 * 0x18) = dVar38;
  puVar2 = &(pFVar14->BoxExtents).CurBlockUsed;
  *puVar2 = *puVar2 + 1;
  return ~uVar18;
}

// <lambda_invoker_cdecl> @ 14958a910

int __cdecl
`UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::MakeDefaultSplitAxisFunc'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (int param_1,TAxisAlignedBox3<double> *param_2)

{
  return param_1 + (param_1 / 3 + (param_1 >> 0x1f) +
                   (int)(((longlong)param_1 / 3 + ((longlong)param_1 >> 0x3f) & 0xffffffffU) >> 0x1f
                        )) * -3;
}

// <lambda_invoker_cdecl> @ 14958a930

bool __cdecl
`UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::FindAllIntersections'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (TIntrTriangle3Triangle3<double> *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Test(param_1);
  if (bVar1) {
    UE::Geometry::TIntrTriangle3Triangle3<double>::Find(param_1);
    return param_1->Result == Intersects;
  }
  return false;
}

// <lambda_invoker_cdecl> @ 14958a970

bool __cdecl
`UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::FindAllSelfIntersections'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (TIntrTriangle3Triangle3<double> *param_1)

{
  bool bVar1;
  
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Test(param_1);
  if (bVar1) {
    UE::Geometry::TIntrTriangle3Triangle3<double>::Find(param_1);
    return param_1->Result == Intersects;
  }
  return false;
}

// FindHitTriangle<UE::Math::TRay<double>_> @ 14958ce00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::FindHitTriangle<UE::Math::TRay<double>_>
          (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,int param_1,TRay<double> *param_2,double *param_3,int *param_4,
          TVector<double> *param_5,FQueryOptions *param_6)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_> *pTVar4;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  longlong *plVar16;
  uint uVar17;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar18;
  longlong lVar19;
  uint uVar20;
  undefined1 auStackY_208 [32];
  uint local_1c8 [2];
  uint *local_1c0;
  FQueryOptions *local_1b8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_1b0;
  FScriptContainerElement *local_1a8;
  ulonglong local_1a0;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *local_198;
  TRay<double> *local_190;
  TVector<double> *local_188;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  TVector<double>_u_0 local_128;
  double dStack_110;
  double local_108;
  double dStack_100;
  TVector<double>_u_0 local_f8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  double local_b0;
  TVector<double>_u_0 local_a8;
  EIntersectionType local_90 [2];
  ulonglong local_88;
  
  dVar10 = __real_3e45798ee2308c3a;
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_198 = &(this->IndexList).Blocks;
  local_1c0 = (uint *)param_4;
  local_1b8 = param_6;
  local_188 = param_5;
  uVar20 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  local_190 = param_2;
  if (this->TrianglesEnd <= (int)uVar20) {
    do {
      pFVar1 = (this->IndexList).Blocks.AllocatorInstance.Data;
      uVar17 = *(uint *)(*(longlong *)(pFVar1 + (ulonglong)(uVar20 >> 9) * 8) +
                        (ulonglong)(uVar20 & 0x1ff) * 4);
      if ((int)uVar17 < 0) {
        uVar17 = ~uVar17;
        dVar8 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar17,param_2);
        if (*param_3 + dVar10 < dVar8) {
          return;
        }
      }
      else {
        uVar13 = uVar17 - 1;
        uVar17 = *(int *)(*(longlong *)(pFVar1 + (ulonglong)(uVar20 + 1 >> 9) * 8) +
                         (ulonglong)(uVar20 + 1 & 0x1ff) * 4) - 1;
        dVar8 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar13,param_2);
        dVar9 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar17,param_2);
        if (dVar9 <= dVar8) {
          if (*param_3 + dVar10 < dVar9) {
            return;
          }
          FindHitTriangle<UE::Math::TRay<double>_>
                    (this,uVar17,param_2,param_3,(int *)local_1c0,param_5,param_6);
          uVar17 = uVar13;
          if (*param_3 + dVar10 < dVar8) {
            return;
          }
        }
        else {
          if (*param_3 + dVar10 < dVar8) {
            return;
          }
          FindHitTriangle<UE::Math::TRay<double>_>
                    (this,uVar13,param_2,param_3,(int *)local_1c0,param_5,param_6);
          if (*param_3 + dVar10 < dVar9) {
            return;
          }
        }
      }
      uVar20 = *(uint *)(*(longlong *)
                          ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar17 >> 9) * 8) + (ulonglong)(uVar17 & 0x1ff) * 4);
    } while (this->TrianglesEnd <= (int)uVar20);
  }
  pTVar18 = &(this->IndexList).Blocks;
  uVar17 = *(uint *)(*(longlong *)((pTVar18->AllocatorInstance).Data + (ulonglong)(uVar20 >> 9) * 8)
                    + (ulonglong)(uVar20 & 0x1ff) * 4);
  local_1a0 = (ulonglong)uVar17;
  if (0 < (int)uVar17) {
    do {
      uVar20 = uVar20 + 1;
      uVar17 = *(uint *)(*(longlong *)
                          ((pTVar18->AllocatorInstance).Data + (ulonglong)(uVar20 >> 9) * 8) +
                        (ulonglong)(uVar20 & 0x1ff) * 4);
      lVar19 = (longlong)(int)uVar17;
      if (*(void **)&param_6->TriangleFilterF == (void *)0x0) {
LAB_14958d088:
        pTVar4 = this->Mesh;
        pTVar5 = pTVar4->SourceTriangles;
        uVar13 = 0;
        if ((int)uVar17 < pTVar5->ArrayNum) {
          uVar13 = ~uVar17 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_1a8 = (pTVar5->AllocatorInstance).Data;
        local_1b0 = pTVar4->SourceVertices;
        uVar13 = *(uint *)(local_1a8 + lVar19 * 0xc);
        uVar14 = 0;
        if ((int)uVar13 < local_1b0->ArrayNum) {
          uVar14 = ~uVar13 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar6 = (local_1b0->AllocatorInstance).Data;
        uVar14 = *(uint *)(local_1a8 + lVar19 * 0xc + 4);
        pFVar1 = pFVar6 + (longlong)(int)uVar13 * 0x18;
        local_178 = *(double *)pFVar1;
        dStack_170 = *(double *)(pFVar1 + 8);
        local_168 = *(double *)(pFVar6 + (longlong)(int)uVar13 * 0x18 + 0x10);
        local_1b0 = pTVar4->SourceVertices;
        uVar13 = 0;
        if ((int)uVar14 < local_1b0->ArrayNum) {
          uVar13 = ~uVar14 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar7 = pTVar4->SourceVertices;
        pFVar6 = (local_1b0->AllocatorInstance).Data;
        pFVar1 = pFVar6 + (longlong)(int)uVar14 * 0x18;
        uStack_160 = *(undefined8 *)pFVar1;
        uStack_158 = *(undefined8 *)(pFVar1 + 8);
        uStack_150 = *(undefined8 *)(pFVar6 + (longlong)(int)uVar14 * 0x18 + 0x10);
        uVar13 = *(uint *)(local_1a8 + lVar19 * 0xc + 8);
        uVar14 = 0;
        if ((int)uVar13 < pTVar7->ArrayNum) {
          uVar14 = ~uVar13 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar6 = (pTVar7->AllocatorInstance).Data;
        pFVar1 = pFVar6 + (longlong)(int)uVar13 * 0x18;
        local_148 = *(undefined8 *)pFVar1;
        uStack_140 = *(undefined8 *)(pFVar1 + 8);
        local_138 = *(undefined8 *)(pFVar6 + (longlong)(int)uVar13 * 0x18 + 0x10);
        local_128._s_0.X = (local_190->Origin).field0_0x0._s_0.X;
        local_128._s_0.Y = (local_190->Origin).field0_0x0._s_0.Y;
        local_128._s_0.Z = (local_190->Origin).field0_0x0._s_0.Z;
        dStack_110 = (local_190->Direction).field0_0x0._s_0.X;
        local_108 = (local_190->Direction).field0_0x0._s_0.Y;
        dStack_100 = (local_190->Direction).field0_0x0._s_0.Z;
        local_f8._s_0.X = local_178;
        local_f8._s_0.Y = dStack_170;
        local_f8._s_0.Z = local_168;
        uStack_e0 = uStack_160;
        local_d8 = uStack_158;
        uStack_d0 = uStack_150;
        local_c8 = local_148;
        uStack_c0 = uStack_140;
        local_b8 = local_138;
        bVar12 = TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                           ((TRay<double> *)&local_128._s_0,(TTriangle3<double> *)&local_f8._s_0,
                            &local_b0,(TVector<double> *)&local_a8._s_0,local_90);
        param_6 = local_1b8;
        if ((bVar12) && (local_b0 < *param_3)) {
          *param_3 = local_b0;
          *local_1c0 = uVar17;
          (local_188->field0_0x0)._s_0.X = local_a8._s_0.X;
          (local_188->field0_0x0)._s_0.Y = local_a8._s_0.Y;
          (local_188->field0_0x0)._s_0.Z = local_a8._s_0.Z;
        }
      }
      else {
        local_1c8[0] = uVar17;
        Core::Private::Function::CheckCallable(*(void **)&param_6->TriangleFilterF);
        plVar2 = *(longlong **)&(param_6->TriangleFilterF).field_0x28;
        pcVar3 = *(code **)&param_6->TriangleFilterF;
        plVar16 = (longlong *)&(param_6->TriangleFilterF).field_0x10;
        if (plVar2 != (longlong *)0x0) {
          plVar16 = plVar2;
        }
        uVar15 = (**(code **)(*plVar16 + 8))();
        cVar11 = (*pcVar3)(uVar15,local_1c8);
        if (cVar11 != '\0') goto LAB_14958d088;
      }
      local_1a0 = local_1a0 - 1;
      pTVar18 = local_198;
    } while (local_1a0 != 0);
  }
  return;
}

// FindHitTriangles<UE::Math::TRay<double>_> @ 14958d320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::FindHitTriangles<UE::Math::TRay<double>_>
          (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,int param_1,TRay<double> *param_2,
          TArray<MeshIntersection::FHitIntersectionResult,TSizedDefaultAllocator<32>_> *param_3,
          FQueryOptions *param_4)

{
  double dVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_> *pTVar6;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  char cVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined8 uVar20;
  longlong lVar21;
  longlong *plVar22;
  uint uVar23;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *pTVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStackY_238 [32];
  uint local_208 [2];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_200;
  longlong local_1f8;
  FScriptContainerElement *local_1f0;
  ulonglong local_1e8;
  TArray<UE::Geometry::TDynamicVector<int,512>::TBlock_*,TSizedDefaultAllocator<32>_> *local_1e0;
  TRay<double> *local_1d8;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  uint local_178;
  undefined4 uStack_174;
  double dStack_170;
  TVector<double>_u_0 local_148;
  double dStack_130;
  double local_128;
  double dStack_120;
  TVector<double>_u_0 local_118;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  double local_d0;
  TVector<double>_u_0 local_c8;
  EIntersectionType local_b0 [2];
  ulonglong local_a8;
  
  dVar13 = __real_47efffffe0000000;
  dVar12 = __real_3e45798ee2308c3a;
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1e0 = &(this->IndexList).Blocks;
  uVar27 = SUB84(__real_47efffffe0000000,0);
  uVar28 = (undefined4)((ulonglong)__real_47efffffe0000000 >> 0x20);
  dVar1 = param_4->MaxDistance;
  uVar25 = SUB84(dVar1,0);
  uVar26 = (int)((ulonglong)dVar1 >> 0x20);
  if (__real_47efffffe0000000 <= dVar1) {
    uVar25 = uVar27;
    uVar26 = uVar28;
  }
  uVar23 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  local_1d8 = param_2;
  if (this->TrianglesEnd <= (int)uVar23) {
    do {
      pFVar3 = (this->IndexList).Blocks.AllocatorInstance.Data;
      dVar1 = (double)CONCAT44(uVar26,uVar25) + dVar12;
      uVar2 = *(uint *)(*(longlong *)(pFVar3 + (ulonglong)(uVar23 >> 9) * 8) +
                       (ulonglong)(uVar23 & 0x1ff) * 4);
      if ((int)uVar2 < 0) {
        dVar10 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,~uVar2,param_2);
        uVar23 = ~uVar2;
      }
      else {
        uVar2 = uVar2 - 1;
        uVar23 = *(int *)(*(longlong *)(pFVar3 + (ulonglong)(uVar23 + 1 >> 9) * 8) +
                         (ulonglong)(uVar23 + 1 & 0x1ff) * 4) - 1;
        dVar11 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar2,param_2);
        dVar10 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar23,param_2);
        if (dVar10 <= dVar11) {
          if (dVar1 < dVar10) {
            return;
          }
          FindHitTriangles<UE::Math::TRay<double>_>(this,uVar23,param_2,param_3,param_4);
          uVar23 = uVar2;
          dVar10 = dVar11;
        }
        else {
          if (dVar1 < dVar11) {
            return;
          }
          FindHitTriangles<UE::Math::TRay<double>_>(this,uVar2,param_2,param_3,param_4);
        }
      }
      if (dVar1 < dVar10) {
        return;
      }
      dVar1 = param_4->MaxDistance;
      uVar25 = SUB84(dVar1,0);
      uVar26 = (int)((ulonglong)dVar1 >> 0x20);
      if (dVar13 <= dVar1) {
        uVar25 = uVar27;
        uVar26 = uVar28;
      }
      uVar23 = *(uint *)(*(longlong *)
                          ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar23 >> 9) * 8) + (ulonglong)(uVar23 & 0x1ff) * 4);
    } while (this->TrianglesEnd <= (int)uVar23);
  }
  pTVar24 = &(this->IndexList).Blocks;
  uVar2 = *(uint *)(*(longlong *)((pTVar24->AllocatorInstance).Data + (ulonglong)(uVar23 >> 9) * 8)
                   + (ulonglong)(uVar23 & 0x1ff) * 4);
  local_1e8 = (ulonglong)uVar2;
  if (0 < (int)uVar2) {
    do {
      uVar23 = uVar23 + 1;
      uVar2 = *(uint *)(*(longlong *)
                         ((pTVar24->AllocatorInstance).Data + (ulonglong)(uVar23 >> 9) * 8) +
                       (ulonglong)(uVar23 & 0x1ff) * 4);
      if (*(void **)&param_4->TriangleFilterF == (void *)0x0) {
LAB_14958d578:
        pTVar6 = this->Mesh;
        pTVar7 = pTVar6->SourceTriangles;
        uVar17 = 0;
        if ((int)uVar2 < pTVar7->ArrayNum) {
          uVar17 = ~uVar2 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_1f0 = (pTVar7->AllocatorInstance).Data;
        local_1f8 = (longlong)(int)uVar2 * 3;
        local_200 = pTVar6->SourceVertices;
        uVar17 = *(uint *)(local_1f0 + (longlong)(int)uVar2 * 0xc);
        uVar18 = 0;
        if ((int)uVar17 < local_200->ArrayNum) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar8 = (local_200->AllocatorInstance).Data;
        pFVar3 = pFVar8 + (longlong)(int)uVar17 * 0x18;
        local_1c8 = *(double *)pFVar3;
        dStack_1c0 = *(double *)(pFVar3 + 8);
        local_1b8 = *(double *)(pFVar8 + (longlong)(int)uVar17 * 0x18 + 0x10);
        local_200 = pTVar6->SourceVertices;
        uVar17 = *(uint *)(local_1f0 + local_1f8 * 4 + 4);
        uVar18 = 0;
        if ((int)uVar17 < local_200->ArrayNum) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar9 = pTVar6->SourceVertices;
        pFVar8 = (local_200->AllocatorInstance).Data;
        pFVar3 = pFVar8 + (longlong)(int)uVar17 * 0x18;
        uStack_1b0 = *(undefined8 *)pFVar3;
        uStack_1a8 = *(undefined8 *)(pFVar3 + 8);
        uStack_1a0 = *(undefined8 *)(pFVar8 + (longlong)(int)uVar17 * 0x18 + 0x10);
        uVar17 = *(uint *)(local_1f0 + local_1f8 * 4 + 8);
        uVar18 = 0;
        if ((int)uVar17 < pTVar9->ArrayNum) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar8 = (pTVar9->AllocatorInstance).Data;
        pFVar3 = pFVar8 + (longlong)(int)uVar17 * 0x18;
        local_198 = *(undefined8 *)pFVar3;
        uStack_190 = *(undefined8 *)(pFVar3 + 8);
        local_188 = *(undefined8 *)(pFVar8 + (longlong)(int)uVar17 * 0x18 + 0x10);
        local_148._s_0.X = (local_1d8->Origin).field0_0x0._s_0.X;
        local_148._s_0.Y = (local_1d8->Origin).field0_0x0._s_0.Y;
        local_148._s_0.Z = (local_1d8->Origin).field0_0x0._s_0.Z;
        dStack_130 = (local_1d8->Direction).field0_0x0._s_0.X;
        local_128 = (local_1d8->Direction).field0_0x0._s_0.Y;
        dStack_120 = (local_1d8->Direction).field0_0x0._s_0.Z;
        local_118._s_0.X = local_1c8;
        local_118._s_0.Y = dStack_1c0;
        local_118._s_0.Z = local_1b8;
        uStack_100 = uStack_1b0;
        local_f8 = uStack_1a8;
        uStack_f0 = uStack_1a0;
        local_e8 = local_198;
        uStack_e0 = uStack_190;
        local_d8 = local_188;
        bVar16 = TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                           ((TRay<double> *)&local_148._s_0,(TTriangle3<double> *)&local_118._s_0,
                            &local_d0,(TVector<double> *)&local_c8._s_0,local_b0);
        uVar14 = local_c8._s_0.Y;
        uVar20 = local_c8._s_0.X;
        if ((bVar16) && (local_d0 <= (double)CONCAT44(uVar26,uVar25) + dVar12)) {
          iVar19 = param_3->ArrayNum;
          dStack_170 = local_d0;
          local_178 = uVar2;
          if (iVar19 == param_3->ArrayMax) {
            iVar19 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          lVar21 = (longlong)iVar19;
          param_3->ArrayNum = iVar19 + 1;
          pFVar3 = (param_3->AllocatorInstance).Data;
          *(ulonglong *)(pFVar3 + lVar21 * 0x28) = CONCAT44(uStack_174,local_178);
          *(double *)(pFVar3 + lVar21 * 0x28 + 8) = dStack_170;
          *(undefined8 *)(pFVar3 + lVar21 * 0x28 + 0x10) = uVar20;
          *(undefined8 *)(pFVar3 + lVar21 * 0x28 + 0x10 + 8) = uVar14;
          *(double *)(pFVar3 + lVar21 * 0x28 + 0x20) = local_c8._s_0.Z;
        }
      }
      else {
        local_208[0] = uVar2;
        Core::Private::Function::CheckCallable(*(void **)&param_4->TriangleFilterF);
        plVar4 = *(longlong **)&(param_4->TriangleFilterF).field_0x28;
        pcVar5 = *(code **)&param_4->TriangleFilterF;
        plVar22 = (longlong *)&(param_4->TriangleFilterF).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar22 = plVar4;
        }
        uVar20 = (**(code **)(*plVar22 + 8))();
        cVar15 = (*pcVar5)(uVar20,local_208);
        if (cVar15 != '\0') goto LAB_14958d578;
      }
      local_1e8 = local_1e8 - 1;
      pTVar24 = local_1e0;
    } while (local_1e8 != 0);
  }
  return;
}

// box_ray_intersect_t<UE::Math::TRay<double>_> @ 14959bc50

double __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::box_ray_intersect_t<UE::Math::TRay<double>_>
          (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,int param_1,TRay<double> *param_2)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  int local_res8 [2];
  EIntersectionType local_res10 [2];
  double local_res18;
  double local_res20;
  TVector<double> local_88;
  TVector<double> local_70;
  TVector<double>_u_0 local_58;
  double local_40;
  double local_38;
  double local_30;
  
  dVar6 = __real_7fefffffffffffff;
  dVar1 = this->BoxEps;
  uVar5 = (ulonglong)(param_1 & 0x1ff);
  local_res10[0] = Empty;
  lVar2 = *(longlong *)
           ((this->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  local_40 = *(double *)(lVar2 + uVar5 * 0x18);
  lVar3 = *(longlong *)
           ((this->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  local_30 = *(double *)(lVar2 + 0x10 + uVar5 * 0x18);
  local_38 = *(double *)(lVar2 + 8 + uVar5 * 0x18);
  dVar4 = dVar1 + *(double *)(lVar3 + 8 + uVar5 * 0x18);
  dVar7 = dVar1 + *(double *)(lVar3 + uVar5 * 0x18);
  dVar1 = dVar1 + *(double *)(lVar3 + 0x10 + uVar5 * 0x18);
  local_58._s_0.Y = local_38 - dVar4;
  local_58._s_0.X = local_40 - dVar7;
  local_38 = local_38 + dVar4;
  local_res20 = __real_7fefffffffffffff;
  local_40 = local_40 + dVar7;
  local_58._s_0.Z = local_30 - dVar1;
  local_30 = local_30 + dVar1;
  local_res18 = 0.0;
  TIntrRay3AxisAlignedBox3<double>::DoClipping
            (&local_res18,&local_res20,&param_2->Origin,&param_2->Direction,
             (TAxisAlignedBox3<double> *)&local_58._s_0,true,local_res8,&local_70,&local_88,
             local_res10);
  if (local_res10[0] != Empty) {
    dVar6 = local_res18;
  }
  return dVar6;
}

// find_nearest_tri<1> @ 14959dd70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::find_nearest_tri<1>
          (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,int param_1,TVector<double> *param_2,double *param_3,int *param_4,
          FQueryOptions *param_5)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  bool bVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined1 auStackY_1a8 [32];
  int local_178 [2];
  ulonglong local_170;
  int *local_168;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 TStack_140;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_108;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_168 = param_4;
  pFVar2 = (this->IndexList).Blocks.AllocatorInstance.Data;
  uVar14 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  local_170 = (ulonglong)uVar14;
  lVar3 = *(longlong *)(pFVar2 + (ulonglong)(uVar14 >> 9) * 8);
  if (this->TrianglesEnd <= (int)uVar14) {
    uVar12 = *(uint *)(lVar3 + (ulonglong)(uVar14 & 0x1ff) * 4);
    if ((int)uVar12 < 0) {
      uVar12 = ~uVar12;
      dVar6 = BoxDistanceSqr(this,uVar12,param_2);
      if (*param_3 <= dVar6 && dVar6 != *param_3) {
        return false;
      }
    }
    else {
      iVar13 = uVar12 - 1;
      uVar12 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar14 + 1 >> 9) * 8) +
                       (ulonglong)(uVar14 + 1 & 0x1ff) * 4) - 1;
      dVar6 = BoxDistanceSqr(this,iVar13,param_2);
      dVar7 = BoxDistanceSqr(this,uVar12,param_2);
      if (dVar7 <= dVar6) {
        if (*param_3 <= dVar7) {
          return false;
        }
        bVar9 = find_nearest_tri<1>(this,uVar12,param_2,param_3,param_4,param_5);
        if (!bVar9) {
          if (*param_3 <= dVar6) {
            return false;
          }
          bVar9 = find_nearest_tri<1>(this,iVar13,param_2,param_3,param_4,param_5);
          return bVar9;
        }
        return true;
      }
      if (*param_3 <= dVar6) {
        return false;
      }
      bVar9 = find_nearest_tri<1>(this,iVar13,param_2,param_3,param_4,param_5);
      if (bVar9) {
        return true;
      }
      if (*param_3 <= dVar7) {
        return false;
      }
    }
    bVar9 = find_nearest_tri<1>(this,uVar12,param_2,param_3,param_4,param_5);
    if (!bVar9) {
      return false;
    }
    return true;
  }
  iVar13 = *(int *)(lVar3 + (ulonglong)(uVar14 & 0x1ff) * 4);
  if (iVar13 < 1) {
    return false;
  }
  uVar14 = uVar14 + 1;
  do {
    iVar1 = *(int *)(*(longlong *)
                      ((this->IndexList).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar14 >> 9) * 8) + (ulonglong)(uVar14 & 0x1ff) * 4);
    if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14959de7c:
      TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>::
      GetTriVertices(this->Mesh,iVar1,(TVector<double> *)&local_158._s_0,
                     (TVector<double> *)&TStack_140._s_0,(TVector<double> *)&local_128._s_0);
      local_108._s_0.X = (param_2->field0_0x0)._s_0.X;
      local_108._s_0.Y = (param_2->field0_0x0)._s_0.Y;
      local_108._s_0.Z = (param_2->field0_0x0)._s_0.Z;
      local_f0 = local_158._s_0.X;
      dStack_e8 = local_158._s_0.Y;
      local_d0 = TStack_140._s_0.Y;
      dStack_c8 = TStack_140._s_0.Z;
      local_e0 = local_158._s_0.Z;
      dStack_d8 = TStack_140._s_0.X;
      local_b0 = local_128._s_0.Z;
      local_c0 = local_128._s_0.X;
      dStack_b8 = local_128._s_0.Y;
      dVar6 = TDistPoint3Triangle3<double>::ComputeResult
                        ((TDistPoint3Triangle3<double> *)&local_108._s_0);
      if (dVar6 < *param_3) {
        *param_3 = dVar6;
        *local_168 = iVar1;
        return true;
      }
    }
    else {
      local_178[0] = iVar1;
      Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
      plVar4 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
      pcVar5 = *(code **)&param_5->TriangleFilterF;
      plVar11 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
      if (plVar4 != (longlong *)0x0) {
        plVar11 = plVar4;
      }
      uVar10 = (**(code **)(*plVar11 + 8))();
      cVar8 = (*pcVar5)(uVar10,local_178);
      if (cVar8 != '\0') goto LAB_14959de7c;
    }
    uVar14 = uVar14 + 1;
    if (iVar13 < (int)(uVar14 - (int)local_170)) {
      return false;
    }
  } while( true );
}

// find_nearest_tri<0> @ 14959e0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::find_nearest_tri<0>
          (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,int param_1,TVector<double> *param_2,double *param_3,int *param_4,
          FQueryOptions *param_5)

{
  uint uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  undefined8 uVar10;
  longlong *plVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStackY_198 [32];
  int local_168 [2];
  int *local_160;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 TStack_140;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_108;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_160 = param_4;
  pFVar3 = (this->IndexList).Blocks.AllocatorInstance.Data;
  uVar1 = *(uint *)(*(longlong *)
                     ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                     (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  lVar4 = *(longlong *)(pFVar3 + (ulonglong)(uVar1 >> 9) * 8);
  if ((int)uVar1 < this->TrianglesEnd) {
    uVar2 = *(uint *)(lVar4 + (ulonglong)(uVar1 & 0x1ff) * 4);
    if (0 < (int)uVar2) {
      uVar13 = (ulonglong)uVar2;
      do {
        uVar1 = uVar1 + 1;
        iVar14 = *(int *)(*(longlong *)
                           ((this->IndexList).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar1 >> 9) * 8) + (ulonglong)(uVar1 & 0x1ff) * 4);
        if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_14959e19c:
          TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>::
          GetTriVertices(this->Mesh,iVar14,(TVector<double> *)&local_158._s_0,
                         (TVector<double> *)&TStack_140._s_0,(TVector<double> *)&local_128._s_0);
          local_108._s_0.X = (param_2->field0_0x0)._s_0.X;
          local_108._s_0.Y = (param_2->field0_0x0)._s_0.Y;
          local_108._s_0.Z = (param_2->field0_0x0)._s_0.Z;
          local_f0 = local_158._s_0.X;
          dStack_e8 = local_158._s_0.Y;
          local_d0 = TStack_140._s_0.Y;
          dStack_c8 = TStack_140._s_0.Z;
          local_e0 = local_158._s_0.Z;
          dStack_d8 = TStack_140._s_0.X;
          local_b0 = local_128._s_0.Z;
          local_c0 = local_128._s_0.X;
          dStack_b8 = local_128._s_0.Y;
          dVar7 = TDistPoint3Triangle3<double>::ComputeResult
                            ((TDistPoint3Triangle3<double> *)&local_108._s_0);
          if (dVar7 < *param_3) {
            *param_3 = dVar7;
            *local_160 = iVar14;
          }
        }
        else {
          local_168[0] = iVar14;
          Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
          plVar5 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
          pcVar6 = *(code **)&param_5->TriangleFilterF;
          plVar11 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
          if (plVar5 != (longlong *)0x0) {
            plVar11 = plVar5;
          }
          uVar10 = (**(code **)(*plVar11 + 8))();
          cVar9 = (*pcVar6)(uVar10,local_168);
          if (cVar9 != '\0') goto LAB_14959e19c;
        }
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  else {
    uVar2 = *(uint *)(lVar4 + (ulonglong)(uVar1 & 0x1ff) * 4);
    if ((int)uVar2 < 0) {
      dVar7 = BoxDistanceSqr(this,~uVar2,param_2);
      if (dVar7 < *param_3 || dVar7 == *param_3) {
        find_nearest_tri<0>(this,~uVar2,param_2,param_3,param_4,param_5);
      }
    }
    else {
      iVar12 = uVar2 - 1;
      iVar14 = *(int *)(*(longlong *)(pFVar3 + (ulonglong)(uVar1 + 1 >> 9) * 8) +
                       (ulonglong)(uVar1 + 1 & 0x1ff) * 4) + -1;
      dVar7 = BoxDistanceSqr(this,iVar12,param_2);
      dVar8 = BoxDistanceSqr(this,iVar14,param_2);
      if (dVar8 <= dVar7) {
        if (*param_3 <= dVar8) {
          return false;
        }
        find_nearest_tri<0>(this,iVar14,param_2,param_3,param_4,param_5);
        iVar14 = iVar12;
        if (*param_3 <= dVar7) {
          return false;
        }
      }
      else {
        if (*param_3 <= dVar7) {
          return false;
        }
        find_nearest_tri<0>(this,iVar12,param_2,param_3,param_4,param_5);
        if (*param_3 <= dVar8) {
          return false;
        }
      }
      find_nearest_tri<0>(this,iVar14,param_2,param_3,param_4,param_5);
    }
  }
  return false;
}

// ~TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_> @ 1495a8a90

void __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::
~TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
          (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  TDynamicVector<int,512>::Empty(&this->IndexList,0);
  pFVar1 = (this->IndexList).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(&this->BoxExtents,0);
  pFVar1 = (this->BoxExtents).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<UE::Math::TVector<double>,512>::Empty(&this->BoxCenters,0);
  pFVar1 = (this->BoxCenters).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDynamicVector<int,512>::Empty(&this->BoxToIndex,0);
  pFVar1 = (this->BoxToIndex).Blocks.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->GetSplitAxis != 0) {
    plVar2 = *(longlong **)&(this->GetSplitAxis).field_0x28;
    plVar3 = (longlong *)&(this->GetSplitAxis).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return;
}

// operator() @ 1495ae0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::TestSelfIntersection'::__l2::<lambda_1>::operator()
          (void *this,TIntrTriangle3Triangle3<double> *param_1)

{
  bool bVar1;
  undefined1 auStack_d8 [32];
  TVector<double>_u_0 local_b8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  TVector<double>_u_0 local_68;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8._s_0.X = (param_1->Triangle1).V[0].field0_0x0._s_0.X;
  local_b8._s_0.Y = (param_1->Triangle1).V[0].field0_0x0._s_0.Y;
  local_b8._s_0.Z = (param_1->Triangle1).V[0].field0_0x0._s_0.Z;
  dStack_a0 = (param_1->Triangle1).V[1].field0_0x0._s_0.X;
  local_98 = (param_1->Triangle1).V[1].field0_0x0._s_0.Y;
  dStack_90 = (param_1->Triangle1).V[1].field0_0x0._s_0.Z;
  local_88 = (param_1->Triangle1).V[2].field0_0x0._s_0.X;
  dStack_80 = (param_1->Triangle1).V[2].field0_0x0._s_0.Y;
  local_78 = (param_1->Triangle1).V[2].field0_0x0._s_0.Z;
  local_68._s_0.X = (param_1->Triangle0).V[0].field0_0x0._s_0.X;
  local_68._s_0.Y = (param_1->Triangle0).V[0].field0_0x0._s_0.Y;
  local_68._s_0.Z = (param_1->Triangle0).V[0].field0_0x0._s_0.Z;
  dStack_50 = (param_1->Triangle0).V[1].field0_0x0._s_0.X;
  local_48 = (param_1->Triangle0).V[1].field0_0x0._s_0.Y;
  dStack_40 = (param_1->Triangle0).V[1].field0_0x0._s_0.Z;
  local_38 = (param_1->Triangle0).V[2].field0_0x0._s_0.X;
  dStack_30 = (param_1->Triangle0).V[2].field0_0x0._s_0.Y;
  local_28 = (param_1->Triangle0).V[2].field0_0x0._s_0.Z;
  bVar1 = UE::Geometry::TIntrTriangle3Triangle3<double>::Intersects
                    ((TTriangle3<double> *)&local_68._s_0,(TTriangle3<double> *)&local_b8._s_0,
                     __real_3e45798ee2308c3a);
  param_1->Quantity = 0;
  param_1->Result = (bVar1 ^ 1) + Intersects;
  param_1->Type = -(uint)bVar1 & Unknown;
  return bVar1;
}

// AddTriTriIntersectionResult @ 1495b92c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::AddTriTriIntersectionResult
          (TIntrTriangle3Triangle3<double> *param_1,int param_2,int param_3,
          FIntersectionsQueryResult *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  TArray<MeshIntersection::FSegmentIntersection,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined1 auStack_238 [32];
  int *local_218;
  FScriptContainerElement *local_210;
  longlong local_208;
  longlong local_200;
  undefined8 local_1f8;
  int local_1e8;
  int iStack_1e4;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  int local_1c8;
  int iStack_1c4;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  int local_190;
  int iStack_18c;
  double dStack_188;
  double dStack_180;
  double dStack_178;
  double local_170;
  double dStack_168;
  double local_160;
  int local_158;
  int iStack_154;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  int local_120;
  int iStack_11c;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  int local_e8;
  int iStack_e4;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  int iStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_238;
  iStack_50 = param_1->Quantity;
  if (iStack_50 == 1) {
    dStack_1e0 = param_1->Points[0].field0_0x0._s_0.X;
    dStack_1d8 = param_1->Points[0].field0_0x0._s_0.Y;
    dStack_1d0 = param_1->Points[0].field0_0x0._s_0.Z;
    pFVar7 = (param_4->Points).AllocatorInstance.Data;
    local_1e8 = param_2;
    iStack_1e4 = param_3;
    if ((pFVar7 <= (FScriptContainerElement *)&local_1e8) &&
       (lVar6 = (longlong)(param_4->Points).ArrayMax,
       (FScriptContainerElement *)&local_1e8 < pFVar7 + lVar6 * 0x20)) {
      local_200 = (longlong)(param_4->Points).ArrayNum;
      local_1f8 = 0x20;
      local_218 = &local_1e8;
      local_210 = pFVar7;
      local_208 = lVar6;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (param_4->Points).ArrayNum;
    piVar1 = &(param_4->Points).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,(ForAnyElementType *)param_4,piVar1);
    }
    (param_4->Points).ArrayNum = iVar5 + 1;
    pFVar2 = (param_4->Points).AllocatorInstance.Data;
    pFVar7 = pFVar2 + (longlong)iVar5 * 0x20;
    *(ulonglong *)pFVar7 = CONCAT44(iStack_1e4,local_1e8);
    *(double *)(pFVar7 + 8) = dStack_1e0;
    pFVar2 = pFVar2 + (longlong)iVar5 * 0x20 + 0x10;
    *(double *)pFVar2 = dStack_1d8;
    *(double *)(pFVar2 + 8) = dStack_1d0;
  }
  else if (iStack_50 == 2) {
    dStack_1c0 = param_1->Points[0].field0_0x0._s_0.X;
    dStack_1b8 = param_1->Points[0].field0_0x0._s_0.Y;
    dStack_1b0 = param_1->Points[0].field0_0x0._s_0.Z;
    local_1a8 = param_1->Points[1].field0_0x0._s_0.X;
    dStack_1a0 = param_1->Points[1].field0_0x0._s_0.Y;
    local_198 = param_1->Points[1].field0_0x0._s_0.Z;
    pFVar7 = (param_4->Segments).AllocatorInstance.Data;
    local_1c8 = param_2;
    iStack_1c4 = param_3;
    if ((pFVar7 <= (FScriptContainerElement *)&local_1c8) &&
       (lVar6 = (longlong)(param_4->Segments).ArrayMax,
       (FScriptContainerElement *)&local_1c8 < pFVar7 + lVar6 * 0x38)) {
      local_200 = (longlong)(param_4->Segments).ArrayNum;
      local_1f8 = 0x38;
      local_218 = &local_1c8;
      local_210 = pFVar7;
      local_208 = lVar6;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (param_4->Segments).ArrayNum;
    piVar1 = &(param_4->Segments).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&(param_4->Segments).AllocatorInstance,piVar1);
    }
    (param_4->Segments).ArrayNum = iVar5 + 1;
    lVar6 = (longlong)iVar5 * 0x38;
    pFVar7 = (param_4->Segments).AllocatorInstance.Data;
    *(ulonglong *)(pFVar7 + lVar6) = CONCAT44(iStack_1c4,local_1c8);
    *(double *)(pFVar7 + lVar6 + 8) = dStack_1c0;
    *(double *)(pFVar7 + lVar6 + 0x10) = dStack_1b8;
    *(double *)(pFVar7 + lVar6 + 0x10 + 8) = dStack_1b0;
    *(double *)(pFVar7 + lVar6 + 0x20) = local_1a8;
    *(double *)(pFVar7 + lVar6 + 0x20 + 8) = dStack_1a0;
    *(double *)(pFVar7 + lVar6 + 0x30) = local_198;
  }
  else if (2 < iStack_50) {
    dStack_188 = param_1->Points[0].field0_0x0._s_0.X;
    dStack_180 = param_1->Points[0].field0_0x0._s_0.Y;
    dStack_178 = param_1->Points[0].field0_0x0._s_0.Z;
    if (param_1->Type == MultiSegment) {
      pTVar8 = &param_4->Segments;
      local_160 = param_1->Points[1].field0_0x0._s_0.Z;
      local_170 = param_1->Points[1].field0_0x0._s_0.X;
      dStack_168 = param_1->Points[1].field0_0x0._s_0.Y;
      pFVar7 = (pTVar8->AllocatorInstance).Data;
      local_190 = param_2;
      iStack_18c = param_3;
      if ((pFVar7 <= (FScriptContainerElement *)&local_190) &&
         (lVar6 = (longlong)(param_4->Segments).ArrayMax,
         (FScriptContainerElement *)&local_190 < pFVar7 + lVar6 * 0x38)) {
        local_200 = (longlong)(param_4->Segments).ArrayNum;
        local_1f8 = 0x38;
        local_218 = &local_190;
        local_210 = pFVar7;
        local_208 = lVar6;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = (param_4->Segments).ArrayNum;
      if (iVar5 == (param_4->Segments).ArrayMax) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,&pTVar8->AllocatorInstance,&(param_4->Segments).ArrayMax);
      }
      (param_4->Segments).ArrayNum = iVar5 + 1;
      lVar6 = (longlong)iVar5 * 0x38;
      pFVar7 = (pTVar8->AllocatorInstance).Data;
      *(ulonglong *)(pFVar7 + lVar6) = CONCAT44(iStack_18c,local_190);
      *(double *)(pFVar7 + lVar6 + 8) = dStack_188;
      *(double *)(pFVar7 + lVar6 + 0x10) = dStack_180;
      *(double *)(pFVar7 + lVar6 + 0x10 + 8) = dStack_178;
      *(double *)(pFVar7 + lVar6 + 0x20) = local_170;
      *(double *)(pFVar7 + lVar6 + 0x20 + 8) = dStack_168;
      *(double *)(pFVar7 + lVar6 + 0x30) = local_160;
      dStack_150 = param_1->Points[2].field0_0x0._s_0.X;
      dStack_148 = param_1->Points[2].field0_0x0._s_0.Y;
      pFVar7 = (pTVar8->AllocatorInstance).Data;
      dStack_140 = param_1->Points[2].field0_0x0._s_0.Z;
      local_128 = param_1->Points[3].field0_0x0._s_0.Z;
      local_138 = param_1->Points[3].field0_0x0._s_0.X;
      dStack_130 = param_1->Points[3].field0_0x0._s_0.Y;
      local_158 = param_2;
      iStack_154 = param_3;
      if ((pFVar7 <= (FScriptContainerElement *)&local_158) &&
         (lVar6 = (longlong)(param_4->Segments).ArrayMax,
         (FScriptContainerElement *)&local_158 < pFVar7 + lVar6 * 0x38)) {
        local_200 = (longlong)(param_4->Segments).ArrayNum;
        local_1f8 = 0x38;
        local_218 = &local_158;
        local_210 = pFVar7;
        local_208 = lVar6;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = (param_4->Segments).ArrayNum;
      if (iVar5 == (param_4->Segments).ArrayMax) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,&pTVar8->AllocatorInstance,&(param_4->Segments).ArrayMax);
      }
      (param_4->Segments).ArrayNum = iVar5 + 1;
      lVar6 = (longlong)iVar5 * 0x38;
      pFVar7 = (pTVar8->AllocatorInstance).Data;
      *(ulonglong *)(pFVar7 + lVar6) = CONCAT44(iStack_154,local_158);
      *(double *)(pFVar7 + lVar6 + 8) = dStack_150;
      *(double *)(pFVar7 + lVar6 + 0x10) = dStack_148;
      *(double *)(pFVar7 + lVar6 + 0x10 + 8) = dStack_140;
      *(double *)(pFVar7 + lVar6 + 0x20) = local_138;
      *(double *)(pFVar7 + lVar6 + 0x20 + 8) = dStack_130;
      *(double *)(pFVar7 + lVar6 + 0x30) = local_128;
      if (4 < param_1->Quantity) {
        dStack_118 = param_1->Points[4].field0_0x0._s_0.X;
        dStack_110 = param_1->Points[4].field0_0x0._s_0.Y;
        pFVar7 = (pTVar8->AllocatorInstance).Data;
        dStack_108 = param_1->Points[4].field0_0x0._s_0.Z;
        local_f0 = param_1->Points[5].field0_0x0._s_0.Z;
        local_100 = param_1->Points[5].field0_0x0._s_0.X;
        dStack_f8 = param_1->Points[5].field0_0x0._s_0.Y;
        local_120 = param_2;
        iStack_11c = param_3;
        if ((pFVar7 <= (FScriptContainerElement *)&local_120) &&
           (lVar6 = (longlong)(param_4->Segments).ArrayMax,
           (FScriptContainerElement *)&local_120 < pFVar7 + lVar6 * 0x38)) {
          local_200 = (longlong)(param_4->Segments).ArrayNum;
          local_1f8 = 0x38;
          local_218 = &local_120;
          local_210 = pFVar7;
          local_208 = lVar6;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar5 = (param_4->Segments).ArrayNum;
        if (iVar5 == (param_4->Segments).ArrayMax) {
          iVar5 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x838,&pTVar8->AllocatorInstance,&(param_4->Segments).ArrayMax);
        }
        (param_4->Segments).ArrayNum = iVar5 + 1;
        lVar6 = (longlong)iVar5 * 0x38;
        pFVar7 = (pTVar8->AllocatorInstance).Data;
        *(ulonglong *)(pFVar7 + lVar6) = CONCAT44(iStack_11c,local_120);
        *(double *)(pFVar7 + lVar6 + 8) = dStack_118;
        *(double *)(pFVar7 + lVar6 + 0x10) = dStack_110;
        *(double *)(pFVar7 + lVar6 + 0x10 + 8) = dStack_108;
        *(double *)(pFVar7 + lVar6 + 0x20) = local_100;
        *(double *)(pFVar7 + lVar6 + 0x20 + 8) = dStack_f8;
        *(double *)(pFVar7 + lVar6 + 0x30) = local_f0;
      }
    }
    else {
      pFVar7 = (param_4->Polygons).AllocatorInstance.Data;
      local_b8 = param_1->Points[1].field0_0x0._s_0.Z;
      dStack_a0 = param_1->Points[2].field0_0x0._s_0.Z;
      local_88 = param_1->Points[3].field0_0x0._s_0.Z;
      dStack_70 = param_1->Points[4].field0_0x0._s_0.Z;
      local_58 = param_1->Points[5].field0_0x0._s_0.Z;
      local_c8 = param_1->Points[1].field0_0x0._s_0.X;
      dStack_c0 = param_1->Points[1].field0_0x0._s_0.Y;
      dStack_b0 = param_1->Points[2].field0_0x0._s_0.X;
      dStack_a8 = param_1->Points[2].field0_0x0._s_0.Y;
      local_98 = param_1->Points[3].field0_0x0._s_0.X;
      dStack_90 = param_1->Points[3].field0_0x0._s_0.Y;
      dStack_80 = param_1->Points[4].field0_0x0._s_0.X;
      dStack_78 = param_1->Points[4].field0_0x0._s_0.Y;
      local_68 = param_1->Points[5].field0_0x0._s_0.X;
      dStack_60 = param_1->Points[5].field0_0x0._s_0.Y;
      local_e8 = param_2;
      iStack_e4 = param_3;
      dStack_e0 = dStack_188;
      dStack_d8 = dStack_180;
      dStack_d0 = dStack_178;
      if ((pFVar7 <= (FScriptContainerElement *)&local_e8) &&
         (lVar6 = (longlong)(param_4->Polygons).ArrayMax,
         (FScriptContainerElement *)&local_e8 < pFVar7 + lVar6 * 0xa0)) {
        local_200 = (longlong)(param_4->Polygons).ArrayNum;
        local_1f8 = 0xa0;
        local_218 = &local_e8;
        local_210 = pFVar7;
        local_208 = lVar6;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = (param_4->Polygons).ArrayNum;
      piVar1 = &(param_4->Polygons).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x8a0,&(param_4->Polygons).AllocatorInstance,piVar1);
      }
      (param_4->Polygons).ArrayNum = iVar5 + 1;
      pFVar7 = (param_4->Polygons).AllocatorInstance.Data + (longlong)iVar5 * 0xa0;
      *(ulonglong *)pFVar7 = CONCAT44(iStack_e4,local_e8);
      *(double *)(pFVar7 + 8) = dStack_e0;
      *(double *)(pFVar7 + 0x10) = dStack_d8;
      *(double *)(pFVar7 + 0x18) = dStack_d0;
      *(double *)(pFVar7 + 0x20) = local_c8;
      *(double *)(pFVar7 + 0x28) = dStack_c0;
      *(double *)(pFVar7 + 0x30) = local_b8;
      *(double *)(pFVar7 + 0x38) = dStack_b0;
      *(double *)(pFVar7 + 0x40) = dStack_a8;
      *(double *)(pFVar7 + 0x48) = dStack_a0;
      *(double *)(pFVar7 + 0x50) = local_98;
      *(double *)(pFVar7 + 0x58) = dStack_90;
      *(double *)(pFVar7 + 0x60) = local_88;
      *(double *)(pFVar7 + 0x68) = dStack_80;
      *(double *)(pFVar7 + 0x70) = dStack_78;
      *(double *)(pFVar7 + 0x78) = dStack_70;
      *(double *)(pFVar7 + 0x80) = local_68;
      *(double *)(pFVar7 + 0x88) = dStack_60;
      *(double *)(pFVar7 + 0x90) = local_58;
      *(ulonglong *)(pFVar7 + 0x98) = CONCAT44(uStack_4c,iStack_50);
    }
  }
  return;
}

// BoxDistanceSqr @ 1495ba660

double __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::BoxDistanceSqr(TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
                 *this,int param_1,TVector<double> *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  uVar2 = (ulonglong)(param_1 & 0x1ff);
  lVar1 = *(longlong *)
           ((this->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar5 = (param_2->field0_0x0)._s_0.X - *(double *)(lVar1 + uVar2 * 0x18);
  dVar4 = (param_2->field0_0x0)._s_0.Y - *(double *)(lVar1 + 8 + uVar2 * 0x18);
  dVar3 = (param_2->field0_0x0)._s_0.Z - *(double *)(lVar1 + 0x10 + uVar2 * 0x18);
  lVar1 = *(longlong *)
           ((this->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar5 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          *(double *)(lVar1 + uVar2 * 0x18);
  dVar4 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          *(double *)(lVar1 + 8 + uVar2 * 0x18);
  dVar3 = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) -
          *(double *)(lVar1 + 0x10 + uVar2 * 0x18);
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  return dVar5 * dVar5 + dVar4 * dVar4 + dVar3 * dVar3;
}

// DoTraversal @ 1495bd260

void __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::DoTraversal(TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
              *this,FTreeTraversal *param_1,FQueryOptions *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  char cVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined4 local_res8 [2];
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  
  uVar9 = (ulonglong)(this->RootIndex & 0x1ff);
  uVar11 = (ulonglong)((uint)this->RootIndex >> 9);
  local_res8[0] = 0;
  lVar4 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar11 * 8);
  local_40 = *(double *)(lVar4 + uVar9 * 0x18);
  lVar5 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar11 * 8);
  local_38 = *(double *)(lVar4 + 8 + uVar9 * 0x18);
  local_30 = *(double *)(lVar4 + 0x10 + uVar9 * 0x18);
  dVar1 = *(double *)(lVar5 + uVar9 * 0x18);
  dVar2 = *(double *)(lVar5 + 8 + uVar9 * 0x18);
  local_58 = local_40 - dVar1;
  dVar3 = *(double *)(lVar5 + 0x10 + uVar9 * 0x18);
  local_50 = local_38 - dVar2;
  local_40 = local_40 + dVar1;
  local_38 = local_38 + dVar2;
  local_48 = local_30 - dVar3;
  local_30 = local_30 + dVar3;
  Core::Private::Function::CheckCallable(*(void **)&param_1->NextBoxF);
  plVar6 = *(longlong **)&(param_1->NextBoxF).field_0x28;
  pcVar7 = *(code **)&param_1->NextBoxF;
  plVar12 = (longlong *)&(param_1->NextBoxF).field_0x10;
  if (plVar6 != (longlong *)0x0) {
    plVar12 = plVar6;
  }
  uVar10 = (**(code **)(*plVar12 + 8))();
  cVar8 = (*pcVar7)(uVar10,&local_58,local_res8);
  if (cVar8 != '\0') {
    (**(code **)(this->_padding_ + 0x80))(this,this->RootIndex,0,param_1,param_2);
  }
  return;
}

// FindAllHitTriangles @ 1495bdc00

bool __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::FindAllHitTriangles
          (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,TRay<double> *param_1,
          TArray<MeshIntersection::FHitIntersectionResult,TSizedDefaultAllocator<32>_> *param_2,
          FQueryOptions *param_3)

{
  FIdentityFunctor local_res8 [32];
  
  FindHitTriangles<UE::Math::TRay<double>_>(this,this->RootIndex,param_1,param_2,param_3);
  if (param_2->ArrayNum == 0) {
    return false;
  }
  AlgoImpl::
  IntroSortInternal<MeshIntersection::FHitIntersectionResult,int,FIdentityFunctor,TDereferenceWrapper<MeshIntersection::FHitIntersectionResult,_UE::Geometry::TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::FindAllHitTrianglesImpl<UE::Math::TRay<double>_>_::__l2::<lambda_1>_>_>
            ((FHitIntersectionResult *)(param_2->AllocatorInstance).Data,param_2->ArrayNum,
             local_res8[0],(<lambda_1> *)local_res8);
  return true;
}

// FindAllIntersections @ 1495bdc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntersectionsQueryResult * __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::FindAllIntersections
          (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,FIntersectionsQueryResult *__return_storage_ptr__,
          TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
          *param_1,TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                   *param_2,FQueryOptions *param_3,FQueryOptions *param_4,
          TFunction<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *pTVar5;
  FIntersectionsQueryResult *pFVar6;
  longlong *plVar7;
  undefined1 auStackY_f8 [32];
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_a0;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *plStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if (*(longlong *)param_5 == 0) {
    local_88 = *(longlong *)param_5;
    uVar3 = *(undefined8 *)&param_5->field_0x8;
    local_78 = *(longlong *)&param_5->field_0x10;
    uStack_70 = *(undefined8 *)&param_5->field_0x18;
    uVar2 = *(undefined8 *)&param_5->field_0x20;
    plStack_60 = *(longlong **)&param_5->field_0x28;
    *(code **)param_5 =
         Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(UE::Geometry::TIntrTriangle3Triangle3<double>_&),bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
         ::Call;
    *(undefined8 *)&param_5->field_0x8 = uStack_80;
    *(undefined4 *)&param_5->field_0x10 = 0x50a9df30;
    *(undefined4 *)&param_5->field_0x14 = 1;
    *(undefined4 *)&param_5->field_0x18 = 0x4958a930;
    *(undefined4 *)&param_5->field_0x1c = 1;
    *(undefined4 *)&param_5->field_0x20 = (undefined4)local_68;
    *(undefined4 *)&param_5->field_0x24 = local_68._4_4_;
    *(undefined4 *)&param_5->field_0x28 = 0;
    *(undefined4 *)&param_5->field_0x2c = 0;
    local_68 = uVar2;
    uStack_80 = uVar3;
    if (local_88 != 0) {
      plVar7 = &local_78;
      if (plStack_60 != (longlong *)0x0) {
        plVar7 = plStack_60;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  (__return_storage_ptr__->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Points).ArrayNum = 0;
  (__return_storage_ptr__->Points).ArrayMax = 0;
  (__return_storage_ptr__->Segments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Segments).ArrayNum = 0;
  (__return_storage_ptr__->Segments).ArrayMax = 0;
  (__return_storage_ptr__->Polygons).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Polygons).ArrayNum = 0;
  (__return_storage_ptr__->Polygons).ArrayMax = 0;
  if ((this->RootIndex < 0) ||
     ((param_3->bAllowUnsafeModifiedMeshQueries == false && (this->MeshChangeStamp != 1)))) {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2828200105734046772>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\MeshAABBTree3.h"
                       ,0x434,"IsValid(Options.bAllowUnsafeModifiedMeshQueries)");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FIntersectionsQueryResult *)(*pcVar1)();
      return pFVar6;
    }
    if (*(longlong *)param_5 != 0) {
      plVar7 = (longlong *)&param_5->field_0x10;
      if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
        plVar7 = *(longlong **)&param_5->field_0x28;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  else {
    pTVar5 = TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>::
             TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)><TFunction<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>_&>
                       (&local_a0,param_5);
    find_intersections(this,this->RootIndex,param_1,param_2,param_1->RootIndex,0,
                       __return_storage_ptr__,pTVar5,param_3,param_4);
    if (*(longlong *)param_5 != 0) {
      plVar7 = (longlong *)&param_5->field_0x10;
      if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
        plVar7 = *(longlong **)&param_5->field_0x28;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// FindAllSelfIntersections @ 1495bde30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FIntersectionsQueryResult * __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::FindAllSelfIntersections
          (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,FIntersectionsQueryResult *__return_storage_ptr__,bool param_1,
          FQueryOptions *param_2,
          TFunction<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  FIntersectionsQueryResult *pFVar5;
  longlong *plVar6;
  undefined1 auStackY_a8 [32];
  code *local_78;
  TFunction<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (*(longlong *)param_3 == 0) {
    local_68 = *(longlong *)param_3;
    uVar3 = *(undefined8 *)&param_3->field_0x8;
    local_58 = *(longlong *)&param_3->field_0x10;
    uStack_50 = *(undefined8 *)&param_3->field_0x18;
    uVar2 = *(undefined8 *)&param_3->field_0x20;
    plStack_40 = *(longlong **)&param_3->field_0x28;
    *(code **)param_3 =
         Core::Private::Function::
         TFunctionRefCaller<bool_(__cdecl*)(UE::Geometry::TIntrTriangle3Triangle3<double>_&),bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
         ::Call;
    *(undefined8 *)&param_3->field_0x8 = uStack_60;
    *(undefined4 *)&param_3->field_0x10 = 0x50a9df30;
    *(undefined4 *)&param_3->field_0x14 = 1;
    *(undefined4 *)&param_3->field_0x18 = 0x4958a970;
    *(undefined4 *)&param_3->field_0x1c = 1;
    *(undefined4 *)&param_3->field_0x20 = (undefined4)local_48;
    *(undefined4 *)&param_3->field_0x24 = local_48._4_4_;
    *(undefined4 *)&param_3->field_0x28 = 0;
    *(undefined4 *)&param_3->field_0x2c = 0;
    local_48 = uVar2;
    uStack_60 = uVar3;
    if (local_68 != 0) {
      plVar6 = &local_58;
      if (plStack_40 != (longlong *)0x0) {
        plVar6 = plStack_40;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  (__return_storage_ptr__->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Points).ArrayNum = 0;
  (__return_storage_ptr__->Points).ArrayMax = 0;
  (__return_storage_ptr__->Segments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Segments).ArrayNum = 0;
  (__return_storage_ptr__->Segments).ArrayMax = 0;
  (__return_storage_ptr__->Polygons).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Polygons).ArrayNum = 0;
  (__return_storage_ptr__->Polygons).ArrayMax = 0;
  if (*(longlong *)param_3 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsBound(InFunc)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                       ,0x1d0,L"Cannot bind a null/unbound callable to a TFunctionRef");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FIntersectionsQueryResult *)(*pcVar1)();
      return pFVar5;
    }
  }
  local_70 = param_3;
  local_78 = Core::Private::Function::
             TFunctionRefCaller<TFunction<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>,bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
             ::Call;
  find_self_intersections
            (this,__return_storage_ptr__,param_1,
             (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *)
             &local_78,param_2);
  if (*(longlong *)param_3 != 0) {
    plVar6 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar6 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return __return_storage_ptr__;
}

// FindNearestHitTriangle @ 1495bdfb0

int __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::FindNearestHitTriangle
          (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,TRay<double> *param_1,FQueryOptions *param_2)

{
  int local_res8 [4];
  double local_res18 [2];
  TVector<double>_u_0 local_28;
  
  local_res18[0] = param_2->MaxDistance;
  if (__real_47efffffe0000000 <= param_2->MaxDistance) {
    local_res18[0] = __real_47efffffe0000000;
  }
  local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_res8[0] = -1;
  local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FindHitTriangle<UE::Math::TRay<double>_>
            (this,this->RootIndex,param_1,local_res18,local_res8,(TVector<double> *)&local_28._s_0,
             param_2);
  return local_res8[0];
}

// FindNearestHitTriangle @ 1495be030

bool __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::FindNearestHitTriangle
          (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,TRay<double> *param_1,double *param_2,int *param_3,TVector<double> *param_4,
          FQueryOptions *param_5)

{
  undefined8 uVar1;
  double dVar2;
  
  *param_3 = -1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_4->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_4->field0_0x0)._s_0.Y = (double)uVar1;
  (param_4->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = param_5->MaxDistance;
  if (__real_47efffffe0000000 <= param_5->MaxDistance) {
    dVar2 = __real_47efffffe0000000;
  }
  *param_2 = dVar2;
  FindHitTriangle<UE::Math::TRay<double>_>
            (this,this->RootIndex,param_1,param_2,param_3,param_4,param_5);
  return *param_3 != -1;
}

// FindNearestHitTriangle @ 1495be0b0

bool __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::FindNearestHitTriangle
          (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,TRay<double> *param_1,double *param_2,int *param_3,FQueryOptions *param_4)

{
  double dVar1;
  TVector<double>_u_0 local_28;
  
  *param_3 = -1;
  dVar1 = param_4->MaxDistance;
  if (__real_47efffffe0000000 <= param_4->MaxDistance) {
    dVar1 = __real_47efffffe0000000;
  }
  local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *param_2 = dVar1;
  FindHitTriangle<UE::Math::TRay<double>_>
            (this,this->RootIndex,param_1,param_2,param_3,(TVector<double> *)&local_28._s_0,param_4)
  ;
  return *param_3 != -1;
}

// FindNearestPoint @ 1495be130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TVector<double> * __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::FindNearestPoint(TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
                   *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1,
                  FQueryOptions *param_2)

{
  double dVar1;
  undefined8 uVar2;
  TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_> *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TVector<double> *pTVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStackY_178 [32];
  undefined1 local_138 [16];
  double local_128;
  double dStack_120;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 TStack_100;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_c8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double dStack_88;
  double local_80;
  double dStack_78;
  double local_70;
  double local_50;
  double dStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  iVar5 = (**(code **)(this->_padding_ + 0x20))(this,param_1,local_138);
  local_128 = (param_1->field0_0x0)._s_0.X;
  dStack_120 = (param_1->field0_0x0)._s_0.Y;
  if (iVar5 < 0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_128;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_120;
    uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
    uVar7 = (undefined4)uVar2;
    uVar8 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  else {
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    this_00 = this->Mesh;
    if (this_00->SourceTriangles->ArrayNum <= iVar5) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mesh.IsTriangle(TriIdx)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\MeshQueries.h"
                         ,0x1e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TVector<double> *)(*pcVar3)();
        return pTVar6;
      }
    }
    TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>::
    GetTriVertices(this_00,iVar5,(TVector<double> *)&local_118._s_0,
                   (TVector<double> *)&TStack_100._s_0,(TVector<double> *)&local_e8._s_0);
    local_c8._s_0.X = local_128;
    local_c8._s_0.Y = dStack_120;
    local_b0 = local_118._s_0.X;
    dStack_a8 = local_118._s_0.Y;
    local_90 = TStack_100._s_0.Y;
    dStack_88 = TStack_100._s_0.Z;
    local_a0 = local_118._s_0.Z;
    dStack_98 = TStack_100._s_0.X;
    local_70 = local_e8._s_0.Z;
    local_80 = local_e8._s_0.X;
    dStack_78 = local_e8._s_0.Y;
    local_c8._s_0.Z = dVar1;
    TDistPoint3Triangle3<double>::ComputeResult((TDistPoint3Triangle3<double> *)&local_c8._s_0);
    uVar7 = (undefined4)local_40;
    uVar8 = (undefined4)((ulonglong)local_40 >> 0x20);
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_50;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_48;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(uVar8,uVar7);
  return __return_storage_ptr__;
}

// FindNearestTriangle @ 1495be2a0

int __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::FindNearestTriangle
          (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,TVector<double> *param_1,double *param_2,FQueryOptions *param_3)

{
  double dVar1;
  double dVar2;
  int local_res8 [8];
  
  dVar1 = param_3->MaxDistance;
  dVar2 = __real_7fefffffffffffff;
  if (dVar1 < __real_7fefffffffffffff) {
    dVar2 = dVar1 * dVar1;
  }
  *param_2 = dVar2;
  local_res8[0] = -1;
  find_nearest_tri<0>(this,this->RootIndex,param_1,param_2,local_res8,param_3);
  return local_res8[0];
}

// FindNearestTriangles @ 1495be300

FIndex2i __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::FindNearestTriangles
          (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
                 *param_1,
          TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_2,
          double *param_3,FQueryOptions *param_4,FQueryOptions *param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double local_res8 [4];
  FQueryOptions *in_stack_00000038;
  
  dVar2 = __real_7fefffffffffffff;
  local_res8[0] = __real_7fefffffffffffff;
  dVar1 = param_5->MaxDistance;
  if (dVar1 < __real_7fefffffffffffff) {
    local_res8[0] = dVar1 * dVar1;
  }
  param_1->_padding_ = -1;
  find_nearest_triangles
            (this,this->RootIndex,
             (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
              *)param_2,
             (TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *)
             param_3,*(int *)&param_2[3].field_0x2c,0,local_res8,(FIndex2i *)param_1,param_5,
             in_stack_00000038);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_res8[0];
  if (local_res8[0] < dVar2) {
    auVar3 = sqrtpd(auVar3,auVar3);
    param_4->MaxDistance = auVar3._0_8_;
    return (FIndex2i)(FIndex2i_u_0)param_1;
  }
  param_4->MaxDistance = dVar2;
  return (FIndex2i)(FIndex2i_u_0)param_1;
}

// FindNearestVertex @ 1495be3c0

int __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::FindNearestVertex(TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
                    *this,TVector<double> *param_1,double *param_2,double param_3,
                   FQueryOptions *param_4)

{
  double dVar1;
  int local_res8 [8];
  
  dVar1 = __real_7fefffffffffffff;
  if (param_3 < __real_7fefffffffffffff) {
    dVar1 = param_3 * param_3;
  }
  *param_2 = dVar1;
  local_res8[0] = -1;
  find_nearest_vertex(this,this->RootIndex,param_1,param_2,local_res8,param_4);
  return local_res8[0];
}

// GetBox @ 1495be510

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::GetBox(TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
         *this,TAxisAlignedBox3<double> *__return_storage_ptr__,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  uVar9 = (ulonglong)(param_1 & 0x1ff);
  lVar7 = *(longlong *)
           ((this->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar1 = *(double *)(lVar7 + 0x10 + uVar9 * 0x18);
  lVar8 = *(longlong *)
           ((this->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar2 = *(double *)(lVar7 + uVar9 * 0x18);
  dVar3 = *(double *)(lVar7 + 8 + uVar9 * 0x18);
  dVar4 = *(double *)(lVar8 + 0x10 + uVar9 * 0x18);
  dVar5 = *(double *)(lVar8 + uVar9 * 0x18);
  dVar6 = *(double *)(lVar8 + 8 + uVar9 * 0x18);
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar2 - dVar5;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar3 - dVar6;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar1 - dVar4;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar2 + dVar5;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar3 + dVar6;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar1 + dVar4;
  return __return_storage_ptr__;
}

// GetBox @ 1495be5d0

TAxisAlignedBox3<double> * __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::GetBox(TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
         *this,TAxisAlignedBox3<double> *__return_storage_ptr__,int param_1,
        TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  TVector<double>_u_0 local_78;
  double local_60;
  double local_58;
  double local_50;
  code *local_48 [2];
  undefined **local_38;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_30;
  undefined8 local_20;
  
  if (*(longlong *)param_2 != 0) {
    uVar3 = (ulonglong)(param_1 & 0x1ff);
    local_20 = 0;
    lVar1 = *(longlong *)
             ((this->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8
             );
    local_60 = *(double *)(lVar1 + uVar3 * 0x18);
    lVar2 = *(longlong *)
             ((this->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8
             );
    local_58 = *(double *)(lVar1 + 8 + uVar3 * 0x18);
    local_50 = *(double *)(lVar1 + 0x10 + uVar3 * 0x18);
    local_38 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__4__GetBox___TMeshAABBTree3_U__TIndexVectorMeshArrayAdapter_UFIndex3i_Geometry_UE__NU__TVector_N_Math_3__Geometry_UE___Geometry_UE__IEBA_AU__TAxisAlignedBox3_N_45_HAEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z___Z__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_78._s_0.X = local_60 - *(double *)(lVar2 + uVar3 * 0x18);
    local_78._s_0.Y = local_58 - *(double *)(lVar2 + 8 + uVar3 * 0x18);
    local_60 = local_60 + *(double *)(lVar2 + uVar3 * 0x18);
    local_58 = local_58 + *(double *)(lVar2 + 8 + uVar3 * 0x18);
    local_78._s_0.Z = local_50 - *(double *)(lVar2 + 0x10 + uVar3 * 0x18);
    local_50 = local_50 + *(double *)(lVar2 + 0x10 + uVar3 * 0x18);
    local_48[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::GetBox'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
                  ::Call;
    local_30 = param_2;
    TAxisAlignedBox3<double>::TAxisAlignedBox3<double>
              (__return_storage_ptr__,(TAxisAlignedBox3<double> *)&local_78._s_0,
               (TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *)
               local_48);
    return __return_storage_ptr__;
  }
  GetBox(this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// IsInside @ 1495c47d0

bool __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::IsInside(TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,TVector<double> *param_1)

{
  return false;
}

// IsWithinDistanceSquared @ 1495c4c50

bool __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::IsWithinDistanceSquared
          (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,TVector<double> *param_1,double param_2,int *param_3,FQueryOptions *param_4)

{
  double local_res18 [2];
  
  *param_3 = -1;
  local_res18[0] = param_2;
  find_nearest_tri<1>(this,this->RootIndex,param_1,local_res18,param_3,param_4);
  return *param_3 != -1;
}

// SupportsNearestTriangle @ 1495ca6b0

bool __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::SupportsNearestTriangle
          (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this)

{
  return true;
}

// SupportsPointContainment @ 1495ca6c0

bool __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::SupportsPointContainment
          (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this)

{
  return false;
}

// SupportsTriangleRayIntersection @ 1495ca6d0

bool __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::SupportsTriangleRayIntersection
          (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this)

{
  return true;
}

// TestAnyHitTriangle @ 1495ca6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::TestAnyHitTriangle
          (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,int param_1,TRay<double> *param_2,int *param_3,double param_4,
          FQueryOptions *param_5)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_> *pTVar4;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  undefined8 uVar15;
  longlong *plVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStackY_228 [32];
  uint local_1f8 [2];
  int local_1f0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_1e8;
  FScriptContainerElement *local_1e0;
  ulonglong local_1d8;
  TVector<double>_u_0 local_1d0;
  TVector<double>_u_0 local_1b8;
  TVector<double>_u_0 local_1a0;
  double local_188;
  double dStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  TVector<double>_u_0 local_138;
  double dStack_120;
  double local_118;
  double dStack_110;
  TVector<double>_u_0 local_108;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double local_c0;
  TVector<double> local_b8;
  EIntersectionType local_a0 [2];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pFVar1 = (this->IndexList).Blocks.AllocatorInstance.Data;
  uVar19 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  local_1d8 = (ulonglong)uVar19;
  lVar20 = *(longlong *)(pFVar1 + (ulonglong)(uVar19 >> 9) * 8);
  if (this->TrianglesEnd <= (int)uVar19) {
    uVar17 = *(uint *)(lVar20 + (ulonglong)(uVar19 & 0x1ff) * 4);
    dVar10 = param_4 + __real_3e45798ee2308c3a;
    if ((int)uVar17 < 0) {
      uVar17 = ~uVar17;
      dVar8 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar17,param_2);
    }
    else {
      iVar18 = uVar17 - 1;
      uVar17 = *(int *)(*(longlong *)(pFVar1 + (ulonglong)(uVar19 + 1 >> 9) * 8) +
                       (ulonglong)(uVar19 + 1 & 0x1ff) * 4) - 1;
      dVar9 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,iVar18,param_2);
      dVar8 = box_ray_intersect_t<UE::Math::TRay<double>_>(this,uVar17,param_2);
      if (dVar8 <= dVar9) {
        if (dVar10 < dVar8) {
          return false;
        }
        bVar12 = TestAnyHitTriangle(this,uVar17,param_2,param_3,param_4,param_5);
        if (!bVar12) {
          if (dVar10 < dVar9) {
            return false;
          }
          bVar12 = TestAnyHitTriangle(this,iVar18,param_2,param_3,param_4,param_5);
          return bVar12;
        }
        return true;
      }
      if (dVar10 < dVar9) {
        return false;
      }
      bVar12 = TestAnyHitTriangle(this,iVar18,param_2,param_3,param_4,param_5);
      if (bVar12) {
        return true;
      }
    }
    if ((dVar8 <= dVar10) &&
       (bVar12 = TestAnyHitTriangle(this,uVar17,param_2,param_3,param_4,param_5), bVar12)) {
      return true;
    }
    return false;
  }
  local_1f0 = *(int *)(lVar20 + (ulonglong)(uVar19 & 0x1ff) * 4);
  if (local_1f0 < 1) {
    return false;
  }
  uVar19 = uVar19 + 1;
  do {
    uVar17 = *(uint *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar19 >> 9) * 8) + (ulonglong)(uVar19 & 0x1ff) * 4);
    lVar20 = (longlong)(int)uVar17;
    if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_1495ca7eb:
      pTVar4 = this->Mesh;
      pTVar5 = pTVar4->SourceTriangles;
      uVar14 = 0;
      if ((int)uVar17 < pTVar5->ArrayNum) {
        uVar14 = ~uVar17 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        uVar13 = (*pcVar3)();
        return (bool)uVar13;
      }
      local_1e0 = (pTVar5->AllocatorInstance).Data;
      local_1e8 = pTVar4->SourceVertices;
      uVar17 = *(uint *)(local_1e0 + lVar20 * 0xc);
      uVar14 = 0;
      if ((int)uVar17 < local_1e8->ArrayNum) {
        uVar14 = ~uVar17 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        uVar13 = (*pcVar3)();
        return (bool)uVar13;
      }
      pFVar6 = (local_1e8->AllocatorInstance).Data;
      uVar14 = *(uint *)(local_1e0 + lVar20 * 0xc + 4);
      pFVar1 = pFVar6 + (longlong)(int)uVar17 * 0x18;
      local_1b8._s_0.X = (double)*(undefined8 *)pFVar1;
      local_1b8._s_0.Y = (double)*(undefined8 *)(pFVar1 + 8);
      local_1b8._s_0.Z = (double)*(undefined8 *)(pFVar6 + (longlong)(int)uVar17 * 0x18 + 0x10);
      local_1e8 = pTVar4->SourceVertices;
      uVar17 = 0;
      if ((int)uVar14 < local_1e8->ArrayNum) {
        uVar17 = ~uVar14 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        uVar13 = (*pcVar3)();
        return (bool)uVar13;
      }
      pTVar7 = pTVar4->SourceVertices;
      pFVar6 = (local_1e8->AllocatorInstance).Data;
      pFVar1 = pFVar6 + (longlong)(int)uVar14 * 0x18;
      dVar10 = *(double *)pFVar1;
      dVar8 = *(double *)(pFVar1 + 8);
      local_1d0._s_0.Z = (double)*(undefined8 *)(pFVar6 + (longlong)(int)uVar14 * 0x18 + 0x10);
      uVar21 = SUB84(local_1d0._s_0.Z,0);
      uVar22 = (undefined4)((ulonglong)local_1d0._s_0.Z >> 0x20);
      uVar17 = *(uint *)(local_1e0 + lVar20 * 0xc + 8);
      lVar20 = (longlong)(int)uVar17;
      uVar14 = 0;
      if ((int)uVar17 < pTVar7->ArrayNum) {
        uVar14 = ~uVar17 >> 0x1f;
      }
      local_1d0._0_8_ = dVar10;
      local_1d0._8_8_ = dVar8;
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        uVar13 = (*pcVar3)();
        return (bool)uVar13;
      }
      pFVar1 = (pTVar7->AllocatorInstance).Data;
      local_1a0._s_0.X = (double)*(undefined8 *)(pFVar1 + lVar20 * 0x18);
      local_1a0._s_0.Y = (double)*(undefined8 *)(pFVar1 + lVar20 * 0x18 + 8);
      local_1a0._s_0.Z = (double)*(undefined8 *)(pFVar1 + lVar20 * 0x18 + 0x10);
      bVar12 = IntersectionUtil::RayTriangleTest<double>
                         (&param_2->Origin,&param_2->Direction,(TVector<double> *)&local_1b8._s_0,
                          (TVector<double> *)&local_1d0._s_0,(TVector<double> *)&local_1a0._s_0);
      if (bVar12) {
        local_138._s_0.X = (param_2->Origin).field0_0x0._s_0.X;
        local_138._s_0.Y = (param_2->Origin).field0_0x0._s_0.Y;
        local_138._s_0.Z = (param_2->Origin).field0_0x0._s_0.Z;
        dStack_120 = (param_2->Direction).field0_0x0._s_0.X;
        local_148 = *(undefined8 *)(pFVar1 + lVar20 * 0x18 + 0x10);
        local_158 = *(undefined8 *)(pFVar1 + lVar20 * 0x18);
        uStack_150 = *(undefined8 *)(pFVar1 + lVar20 * 0x18 + 8);
        local_118 = (param_2->Direction).field0_0x0._s_0.Y;
        dStack_110 = (param_2->Direction).field0_0x0._s_0.Z;
        uStack_168._0_4_ = SUB84(dVar8,0);
        uStack_168._4_4_ = (undefined4)((ulonglong)dVar8 >> 0x20);
        local_170._0_4_ = SUB84(dVar10,0);
        local_170._4_4_ = (undefined4)((ulonglong)dVar10 >> 0x20);
        uStack_178 = local_1b8._16_4_;
        uStack_174 = local_1b8._20_4_;
        local_108._16_4_ = local_1b8._16_4_;
        local_108._20_4_ = local_1b8._20_4_;
        uStack_f0 = (undefined4)local_170;
        uStack_ec = local_170._4_4_;
        local_188 = local_1b8._s_0.X;
        dStack_180 = local_1b8._s_0.Y;
        local_108._s_0.X = local_1b8._s_0.X;
        local_108._s_0.Y = local_1b8._s_0.Y;
        local_e8 = (undefined4)uStack_168;
        uStack_e4 = uStack_168._4_4_;
        local_170 = dVar10;
        uStack_168 = dVar8;
        uStack_160 = uVar21;
        uStack_15c = uVar22;
        uStack_e0 = uVar21;
        uStack_dc = uVar22;
        local_d8 = local_158;
        uStack_d0 = uStack_150;
        local_c8 = local_148;
        bVar12 = TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                           ((TRay<double> *)&local_138._s_0,(TTriangle3<double> *)&local_108._s_0,
                            &local_c0,&local_b8,local_a0);
        if ((bVar12) && (local_c0 < param_5->MaxDistance)) {
          return true;
        }
      }
    }
    else {
      local_1f8[0] = uVar17;
      Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
      plVar2 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
      pcVar3 = *(code **)&param_5->TriangleFilterF;
      plVar16 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar16 = plVar2;
      }
      uVar15 = (**(code **)(*plVar16 + 8))();
      cVar11 = (*pcVar3)(uVar15,local_1f8);
      if (cVar11 != '\0') goto LAB_1495ca7eb;
    }
    uVar19 = uVar19 + 1;
    if (local_1f0 < (int)(uVar19 - (int)local_1d8)) {
      return false;
    }
  } while( true );
}

// TestAnyHitTriangle @ 1495cac00

bool __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::TestAnyHitTriangle
          (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,TRay<double> *param_1,FQueryOptions *param_2)

{
  bool bVar1;
  double dVar2;
  int local_res8 [8];
  
  dVar2 = param_2->MaxDistance;
  if (__real_47efffffe0000000 <= param_2->MaxDistance) {
    dVar2 = __real_47efffffe0000000;
  }
  local_res8[0] = -1;
  bVar1 = TestAnyHitTriangle(this,this->RootIndex,param_1,local_res8,dVar2,param_2);
  return bVar1;
}

// TestIntersection @ 1495cac50

bool __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::TestIntersection(TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
                   *this,TTriangle3<double> *param_1,FQueryOptions *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_res8 [32];
  code *local_68;
  undefined1 *local_60;
  TVector<double>_u_0 local_58;
  double local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_40 = param_1->V[1].field0_0x0._s_0.X;
  dVar1 = param_1->V[1].field0_0x0._s_0.Y;
  uVar5 = SUB84(dVar1,0);
  uVar6 = (undefined4)((ulonglong)dVar1 >> 0x20);
  local_60 = local_res8;
  dVar2 = param_1->V[0].field0_0x0._s_0.X;
  local_58._s_0.X = local_40;
  if (dVar2 <= local_40) {
    local_58._s_0.X = dVar2;
  }
  dVar2 = param_1->V[1].field0_0x0._s_0.Z;
  uVar7 = SUB84(dVar2,0);
  uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar3 = param_1->V[0].field0_0x0._s_0.Y;
  local_58._s_0.Y = dVar1;
  if (dVar3 <= dVar1) {
    local_58._s_0.Y = dVar3;
  }
  dVar3 = param_1->V[0].field0_0x0._s_0.X;
  if (local_40 <= dVar3) {
    local_40 = dVar3;
  }
  dVar3 = *(double *)((longlong)&param_1->V[0].field0_0x0 + 8);
  if (dVar1 <= dVar3) {
    uVar5 = SUB84(dVar3,0);
    uVar6 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  dVar1 = param_1->V[2].field0_0x0._s_0.X;
  if (dVar1 <= local_58._s_0.X) {
    local_58._s_0.X = dVar1;
  }
  dVar1 = param_1->V[2].field0_0x0._s_0.Y;
  if (dVar1 <= local_58._s_0.Y) {
    local_58._s_0.Y = dVar1;
  }
  dVar1 = param_1->V[2].field0_0x0._s_0.X;
  if (local_40 <= dVar1) {
    local_40 = dVar1;
  }
  dVar1 = *(double *)((longlong)&param_1->V[2].field0_0x0 + 8);
  if ((double)CONCAT44(uVar6,uVar5) <= dVar1) {
    uVar5 = SUB84(dVar1,0);
    uVar6 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  dVar1 = param_1->V[0].field0_0x0._s_0.Z;
  local_58._s_0.Z = dVar2;
  if (dVar1 <= dVar2) {
    local_58._s_0.Z = dVar1;
  }
  dVar1 = *(double *)((longlong)&param_1->V[0].field0_0x0 + 0x10);
  if (dVar2 <= dVar1) {
    uVar7 = SUB84(dVar1,0);
    uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  local_38 = CONCAT44(uVar6,uVar5);
  dVar1 = param_1->V[2].field0_0x0._s_0.Z;
  if (dVar1 <= local_58._s_0.Z) {
    local_58._s_0.Z = dVar1;
  }
  dVar1 = *(double *)((longlong)&param_1->V[2].field0_0x0 + 0x10);
  if ((double)CONCAT44(uVar8,uVar7) <= dVar1) {
    uVar7 = SUB84(dVar1,0);
    uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  local_30 = CONCAT44(uVar8,uVar7);
  local_68 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::TestIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
             ::Call;
  iVar4 = find_any_intersection
                    (this,this->RootIndex,param_1,(TAxisAlignedBox3<double> *)&local_58._s_0,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                      *)&local_68,param_2);
  return (bool)((byte)((uint)iVar4 >> 0x1f) ^ 1);
}

// TestIntersection @ 1495cad30

bool __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::TestIntersection(TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
                   *this,TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
                         *param_1,
                  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                  *param_2,FQueryOptions *param_3,FQueryOptions *param_4)

{
  bool bVar1;
  TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  *local_res8 [4];
  code *local_18;
  TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  **local_10;
  
  local_10 = local_res8;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::TestIntersection'::__l6::<lambda_1>,bool,UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&>
             ::Call;
  local_res8[0] = this;
  bVar1 = find_any_intersection
                    (this,this->RootIndex,param_1,param_2,param_1->RootIndex,0,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
                      *)&local_18,param_3,param_4);
  return bVar1;
}

// TestIntersection @ 1495cada0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::TestIntersection(TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
                   *this,TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>
                         *param_1,TAxisAlignedBox3<double> *param_2,
                  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                  *param_3,FQueryOptions *param_4)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  uint uVar4;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  undefined1 uVar15;
  char cVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  TAxisAlignedBox3<double> *pTVar20;
  undefined8 uVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_1c0;
  TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  *local_1b8;
  FQueryOptions *local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  code *local_108 [2];
  undefined **local_f8;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_f0;
  undefined8 local_e0;
  TAxisAlignedBox3<double> local_d8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  dVar2 = (param_2->Min).field0_0x0._s_0.X;
  local_1b0 = param_4;
  local_1b8 = this;
  if (((dVar2 < (param_2->Max).field0_0x0._s_0.X || dVar2 == (param_2->Max).field0_0x0._s_0.X) &&
      (dVar2 = (param_2->Min).field0_0x0._s_0.Y, pdVar1 = &(param_2->Max).field0_0x0._s_0.Y,
      dVar2 < *pdVar1 || dVar2 == *pdVar1)) &&
     (dVar2 = (param_2->Min).field0_0x0._s_0.Z, pdVar1 = &(param_2->Max).field0_0x0._s_0.Z,
     dVar2 < *pdVar1 || dVar2 == *pdVar1)) {
    if (*(longlong *)param_3 != 0) {
      local_e0 = 0;
      local_f8 = &
                 ___7__TFunction_OwnedObject_V<lambda_1>__L___TestIntersection___TMeshAABBTree3_U__TIndexVectorMeshArrayAdapter_UFIndex3i_Geometry_UE__NU__TVector_N_Math_3__Geometry_UE___Geometry_UE__UEBA_NPEBU__TIndexVectorMeshArrayAdapter_UFIndex3i_Geometry_UE__NU__TVector_N_Math_3__45_U__TAxisAlignedBox3_N_45_AEBV__TFunction___A6A_AU__TVector_N_Math_UE__AEBU123__Z__AEBUFQueryOptions_IMeshSpatial_45__Z__0A__0A__Function_Private_Core_UE__6B_
      ;
      local_108[0] = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::TestIntersection'::__l11::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
                     ::Call;
      local_f0 = param_3;
      pTVar20 = TAxisAlignedBox3<double>::TAxisAlignedBox3<double>
                          (&local_d8,param_2,
                           (TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                            *)local_108);
      dVar2 = (pTVar20->Min).field0_0x0._s_0.Y;
      dVar11 = (pTVar20->Min).field0_0x0._s_0.Z;
      dVar12 = (pTVar20->Max).field0_0x0._s_0.X;
      (param_2->Min).field0_0x0._s_0.X = (pTVar20->Min).field0_0x0._s_0.X;
      (param_2->Min).field0_0x0._s_0.Y = dVar2;
      dVar2 = (pTVar20->Max).field0_0x0._s_0.Y;
      dVar13 = (pTVar20->Max).field0_0x0._s_0.Z;
      (param_2->Min).field0_0x0._s_0.Z = dVar11;
      (param_2->Max).field0_0x0._s_0.X = dVar12;
      (param_2->Max).field0_0x0._s_0.Y = dVar2;
      (param_2->Max).field0_0x0._s_0.Z = dVar13;
    }
    bVar14 = box_box_intersect(this,this->RootIndex,param_2);
    if (!bVar14) {
      return false;
    }
  }
  uVar25 = 0;
  local_1a8 = (longlong)param_1->SourceTriangles->ArrayNum;
  if (0 < local_1a8) {
    local_1c8 = 0;
    lVar24 = 0;
    do {
      pTVar5 = param_1->SourceTriangles;
      iVar3 = pTVar5->ArrayNum;
      if (*(longlong *)param_3 == 0) {
        uVar17 = 0;
        if ((int)uVar25 < iVar3) {
          uVar17 = ~uVar25 >> 0x1f;
        }
        if (uVar17 == 0) {
          local_1d8 = (longlong)(int)uVar25;
          local_1d0 = (longlong)iVar3;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar14) {
            pcVar10 = (code *)swi(3);
            uVar15 = (*pcVar10)();
            return (bool)uVar15;
          }
        }
        pFVar6 = (pTVar5->AllocatorInstance).Data;
        pTVar8 = param_1->SourceVertices;
        uVar17 = *(uint *)(pFVar6 + lVar24);
        lVar23 = (longlong)(int)uVar17;
        iVar3 = pTVar8->ArrayNum;
        uVar19 = 0;
        if ((int)uVar17 < iVar3) {
          uVar19 = ~uVar17 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (local_1d8 = lVar23, local_1d0 = (longlong)iVar3,
           bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar14)) {
          pcVar10 = (code *)swi(3);
          uVar15 = (*pcVar10)();
          return (bool)uVar15;
        }
        pFVar9 = (pTVar8->AllocatorInstance).Data;
        pTVar8 = param_1->SourceVertices;
        pFVar7 = pFVar9 + lVar23 * 0x18;
        local_a8 = *(undefined8 *)pFVar7;
        uStack_a0 = *(undefined8 *)(pFVar7 + 8);
        local_98 = *(undefined8 *)(pFVar9 + lVar23 * 0x18 + 0x10);
        uVar17 = *(uint *)(pFVar6 + lVar24 + 4);
        lVar23 = (longlong)(int)uVar17;
        iVar3 = pTVar8->ArrayNum;
        uVar19 = 0;
        if ((int)uVar17 < iVar3) {
          uVar19 = ~uVar17 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (local_1d8 = lVar23, local_1d0 = (longlong)iVar3,
           bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar14)) {
          pcVar10 = (code *)swi(3);
          uVar15 = (*pcVar10)();
          return (bool)uVar15;
        }
        pFVar9 = (pTVar8->AllocatorInstance).Data;
        pTVar8 = param_1->SourceVertices;
        pFVar7 = pFVar9 + lVar23 * 0x18;
        local_90 = *(undefined8 *)pFVar7;
        uStack_88 = *(undefined8 *)(pFVar7 + 8);
        local_80 = *(undefined8 *)(pFVar9 + lVar23 * 0x18 + 0x10);
        uVar17 = *(uint *)(pFVar6 + lVar24 + 8);
        lVar23 = (longlong)(int)uVar17;
        iVar3 = pTVar8->ArrayNum;
        uVar19 = 0;
        if ((int)uVar17 < iVar3) {
          uVar19 = ~uVar17 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (local_1d8 = lVar23, local_1d0 = (longlong)iVar3,
           bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar14)) {
          pcVar10 = (code *)swi(3);
          uVar15 = (*pcVar10)();
          return (bool)uVar15;
        }
        pFVar7 = (pTVar8->AllocatorInstance).Data;
        pFVar6 = pFVar7 + lVar23 * 0x18;
        local_78 = *(undefined4 *)pFVar6;
        uStack_74 = *(undefined4 *)(pFVar6 + 4);
        uStack_70 = *(undefined4 *)(pFVar6 + 8);
        uStack_6c = *(undefined4 *)(pFVar6 + 0xc);
        uVar21 = *(undefined8 *)(pFVar7 + lVar23 * 0x18 + 0x10);
        uVar28 = (undefined4)uVar21;
        uVar29 = (undefined4)((ulonglong)uVar21 >> 0x20);
      }
      else {
        uVar17 = 0;
        if ((int)uVar25 < iVar3) {
          uVar17 = ~uVar25 >> 0x1f;
        }
        if (uVar17 == 0) {
          local_1d8 = (longlong)(int)uVar25;
          local_1d0 = (longlong)iVar3;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar14) {
            pcVar10 = (code *)swi(3);
            uVar15 = (*pcVar10)();
            return (bool)uVar15;
          }
        }
        pFVar6 = (pTVar5->AllocatorInstance).Data;
        uVar17 = *(uint *)(pFVar6 + lVar24);
        lVar23 = (longlong)(int)uVar17;
        uVar19 = *(uint *)(pFVar6 + lVar24 + 4);
        lVar26 = (longlong)(int)uVar19;
        uVar4 = *(uint *)(pFVar6 + lVar24 + 8);
        lVar27 = (longlong)(int)uVar4;
        local_1c0 = param_1->SourceVertices;
        uVar18 = 0;
        if ((int)uVar17 < local_1c0->ArrayNum) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (local_1d8 = lVar23, local_1d0 = (longlong)local_1c0->ArrayNum,
           bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar14)) {
          pcVar10 = (code *)swi(3);
          uVar15 = (*pcVar10)();
          return (bool)uVar15;
        }
        pFVar7 = (local_1c0->AllocatorInstance).Data;
        pFVar6 = pFVar7 + lVar23 * 0x18;
        local_1a0 = *(undefined8 *)pFVar6;
        uStack_198 = *(undefined8 *)(pFVar6 + 8);
        local_190 = *(undefined8 *)(pFVar7 + lVar23 * 0x18 + 0x10);
        Core::Private::Function::CheckCallable(*(void **)param_3);
        pcVar10 = *(code **)param_3;
        plVar22 = *(longlong **)&param_3->field_0x28;
        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
          plVar22 = (longlong *)&param_3->field_0x10;
        }
        uVar21 = (**(code **)(*plVar22 + 8))();
        (*pcVar10)(&local_188,uVar21,&local_1a0);
        pTVar8 = param_1->SourceVertices;
        local_a8 = local_188;
        uStack_a0 = uStack_180;
        local_98 = local_178;
        iVar3 = pTVar8->ArrayNum;
        uVar17 = 0;
        if ((int)uVar19 < iVar3) {
          uVar17 = ~uVar19 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (local_1d8 = lVar26, local_1d0 = (longlong)iVar3,
           bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar14)) {
          pcVar10 = (code *)swi(3);
          uVar15 = (*pcVar10)();
          return (bool)uVar15;
        }
        pFVar7 = (pTVar8->AllocatorInstance).Data;
        pFVar6 = pFVar7 + lVar26 * 0x18;
        local_170 = *(undefined8 *)pFVar6;
        uStack_168 = *(undefined8 *)(pFVar6 + 8);
        local_160 = *(undefined8 *)(pFVar7 + lVar26 * 0x18 + 0x10);
        Core::Private::Function::CheckCallable(*(void **)param_3);
        pcVar10 = *(code **)param_3;
        plVar22 = *(longlong **)&param_3->field_0x28;
        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
          plVar22 = (longlong *)&param_3->field_0x10;
        }
        uVar21 = (**(code **)(*plVar22 + 8))();
        (*pcVar10)(&local_158,uVar21,&local_170);
        pTVar8 = param_1->SourceVertices;
        local_80 = local_148;
        local_90 = local_158;
        uStack_88 = uStack_150;
        iVar3 = pTVar8->ArrayNum;
        uVar17 = 0;
        if ((int)uVar4 < iVar3) {
          uVar17 = ~uVar4 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (local_1d8 = lVar27, local_1d0 = (longlong)iVar3,
           bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar14)) {
          pcVar10 = (code *)swi(3);
          uVar15 = (*pcVar10)();
          return (bool)uVar15;
        }
        pFVar7 = (pTVar8->AllocatorInstance).Data;
        pFVar6 = pFVar7 + lVar27 * 0x18;
        local_140 = *(undefined8 *)pFVar6;
        uStack_138 = *(undefined8 *)(pFVar6 + 8);
        local_130 = *(undefined8 *)(pFVar7 + lVar27 * 0x18 + 0x10);
        Core::Private::Function::CheckCallable(*(void **)param_3);
        pcVar10 = *(code **)param_3;
        plVar22 = *(longlong **)&param_3->field_0x28;
        if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
          plVar22 = (longlong *)&param_3->field_0x10;
        }
        uVar21 = (**(code **)(*plVar22 + 8))();
        (*pcVar10)(&local_128,uVar21,&local_140);
        uVar28 = (undefined4)local_118;
        uVar29 = (undefined4)((ulonglong)local_118 >> 0x20);
        local_78 = local_128;
        uStack_74 = uStack_124;
        uStack_70 = uStack_120;
        uStack_6c = uStack_11c;
      }
      local_68 = CONCAT44(uVar29,uVar28);
      cVar16 = (**(code **)(local_1b8->_padding_ + 0x88))(local_1b8,&local_a8,local_1b0);
      if (cVar16 != '\0') {
        return true;
      }
      uVar25 = uVar25 + 1;
      local_1c8 = local_1c8 + 1;
      lVar24 = lVar24 + 0xc;
    } while (local_1c8 < local_1a8);
  }
  return false;
}

// TestSelfIntersection @ 1495cb300

bool __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::TestSelfIntersection
          (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,bool param_1,FQueryOptions *param_2)

{
  bool bVar1;
  undefined1 local_res20 [8];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res20;
  local_18 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>::TestSelfIntersection'::__l2::<lambda_1>,bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
             ::Call;
  bVar1 = find_self_intersections
                    (this,(FIntersectionsQueryResult *)0x0,param_1,
                     (TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *)
                     &local_18,param_2);
  return bVar1;
}

// TreeTraversalImpl @ 1495cb340

void __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::TreeTraversalImpl(TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
                    *this,int param_1,int param_2,FTreeTraversal *param_3,FQueryOptions *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  uint uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  int local_res8 [2];
  int local_res10 [2];
  int local_98 [2];
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  
  uVar15 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if ((int)uVar15 < this->TrianglesEnd) {
    local_res8[0] = param_2;
    local_res10[0] = param_1;
    local_98[0] = param_1;
    Core::Private::Function::CheckCallable(*(void **)&param_3->BeginBoxTrianglesF);
    plVar5 = *(longlong **)&(param_3->BeginBoxTrianglesF).field_0x28;
    pcVar6 = *(code **)&param_3->BeginBoxTrianglesF;
    plVar13 = (longlong *)&(param_3->BeginBoxTrianglesF).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar13 = plVar5;
    }
    uVar12 = (**(code **)(*plVar13 + 8))();
    (*pcVar6)(uVar12,local_98,local_res8);
    uVar11 = *(uint *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar15 >> 9) * 8) + (ulonglong)(uVar15 & 0x1ff) * 4);
    if (0 < (int)uVar11) {
      uVar17 = (ulonglong)uVar11;
      do {
        uVar15 = uVar15 + 1;
        iVar16 = *(int *)(*(longlong *)
                           ((this->IndexList).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar15 >> 9) * 8) + (ulonglong)(uVar15 & 0x1ff) * 4);
        if (*(void **)&param_4->TriangleFilterF == (void *)0x0) {
LAB_1495cb456:
          local_res8[0] = iVar16;
          Core::Private::Function::CheckCallable(*(void **)&param_3->NextTriangleF);
          plVar5 = *(longlong **)&(param_3->NextTriangleF).field_0x28;
          pcVar6 = *(code **)&param_3->NextTriangleF;
          plVar13 = (longlong *)&(param_3->NextTriangleF).field_0x10;
          if (plVar5 != (longlong *)0x0) {
            plVar13 = plVar5;
          }
          uVar12 = (**(code **)(*plVar13 + 8))();
          (*pcVar6)(uVar12,local_res8);
        }
        else {
          local_res8[0] = iVar16;
          Core::Private::Function::CheckCallable(*(void **)&param_4->TriangleFilterF);
          plVar5 = *(longlong **)&(param_4->TriangleFilterF).field_0x28;
          pcVar6 = *(code **)&param_4->TriangleFilterF;
          plVar13 = (longlong *)&(param_4->TriangleFilterF).field_0x10;
          if (plVar5 != (longlong *)0x0) {
            plVar13 = plVar5;
          }
          uVar12 = (**(code **)(*plVar13 + 8))();
          cVar10 = (*pcVar6)(uVar12,local_res8);
          if (cVar10 != '\0') goto LAB_1495cb456;
        }
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    Core::Private::Function::CheckCallable(*(void **)&param_3->EndBoxTrianglesF);
    pcVar6 = *(code **)&param_3->EndBoxTrianglesF;
    plVar5 = *(longlong **)&(param_3->EndBoxTrianglesF).field_0x28;
    plVar13 = (longlong *)&(param_3->EndBoxTrianglesF).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar13 = plVar5;
    }
    uVar12 = (**(code **)(*plVar13 + 8))();
    (*pcVar6)(uVar12,local_res10);
  }
  else {
    pFVar7 = (this->BoxCenters).Blocks.AllocatorInstance.Data;
    uVar11 = *(uint *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar15 >> 9) * 8) + (ulonglong)(uVar15 & 0x1ff) * 4);
    if ((int)uVar11 < 0) {
      uVar11 = ~uVar11;
      uVar17 = (ulonglong)(uVar11 & 0x1ff);
      lVar8 = *(longlong *)(pFVar7 + (ulonglong)(uVar11 >> 9) * 8);
      local_78 = *(double *)(lVar8 + uVar17 * 0x18);
      lVar9 = *(longlong *)
               ((this->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 >> 9) * 8);
      local_70 = *(double *)(lVar8 + 8 + uVar17 * 0x18);
      local_68 = *(double *)(lVar8 + 0x10 + uVar17 * 0x18);
      dVar1 = *(double *)(lVar9 + uVar17 * 0x18);
      dVar2 = *(double *)(lVar9 + 8 + uVar17 * 0x18);
      local_90 = local_78 - dVar1;
      dVar3 = *(double *)(lVar9 + 0x10 + uVar17 * 0x18);
      local_88 = local_70 - dVar2;
      local_78 = local_78 + dVar1;
      local_70 = local_70 + dVar2;
      local_80 = local_68 - dVar3;
      local_68 = local_68 + dVar3;
      local_res10[0] = param_2 + 1;
      Core::Private::Function::CheckCallable(*(void **)&param_3->NextBoxF);
      plVar5 = *(longlong **)&(param_3->NextBoxF).field_0x28;
      pcVar6 = *(code **)&param_3->NextBoxF;
      plVar13 = (longlong *)&(param_3->NextBoxF).field_0x10;
      if (plVar5 != (longlong *)0x0) {
        plVar13 = plVar5;
      }
      uVar12 = (**(code **)(*plVar13 + 8))();
      cVar10 = (*pcVar6)(uVar12,&local_90,local_res10);
      if (cVar10 != '\0') {
        (**(code **)(this->_padding_ + 0x80))(this,uVar11,param_2 + 1,param_3,param_4);
      }
    }
    else {
      uVar14 = (ulonglong)(uVar11 - 1 >> 9);
      uVar17 = (ulonglong)(uVar11 - 1 & 0x1ff);
      iVar16 = param_2 + 1;
      lVar8 = *(longlong *)(pFVar7 + uVar14 * 8);
      local_78 = *(double *)(lVar8 + uVar17 * 0x18);
      local_70 = *(double *)(lVar8 + 8 + uVar17 * 0x18);
      lVar9 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar14 * 8);
      local_68 = *(double *)(lVar8 + 0x10 + uVar17 * 0x18);
      dVar1 = *(double *)(lVar9 + uVar17 * 0x18);
      dVar2 = *(double *)(lVar9 + 8 + uVar17 * 0x18);
      local_90 = local_78 - dVar1;
      dVar3 = *(double *)(lVar9 + 0x10 + uVar17 * 0x18);
      local_88 = local_70 - dVar2;
      local_78 = local_78 + dVar1;
      local_70 = local_70 + dVar2;
      local_80 = local_68 - dVar3;
      local_68 = local_68 + dVar3;
      local_res10[0] = iVar16;
      Core::Private::Function::CheckCallable(*(void **)&param_3->NextBoxF);
      plVar5 = *(longlong **)&(param_3->NextBoxF).field_0x28;
      pcVar6 = *(code **)&param_3->NextBoxF;
      plVar13 = (longlong *)&(param_3->NextBoxF).field_0x10;
      if (plVar5 != (longlong *)0x0) {
        plVar13 = plVar5;
      }
      uVar12 = (**(code **)(*plVar13 + 8))();
      cVar10 = (*pcVar6)(uVar12,&local_90,local_res10);
      if (cVar10 != '\0') {
        (**(code **)(this->_padding_ + 0x80))(this,uVar11 - 1,iVar16,param_3,param_4);
      }
      iVar4 = *(int *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar15 + 1 >> 9) * 8) + (ulonglong)(uVar15 + 1 & 0x1ff) * 4);
      uVar15 = iVar4 - 1;
      uVar14 = (ulonglong)(uVar15 >> 9);
      uVar17 = (ulonglong)(iVar4 - 1U & 0x1ff);
      lVar8 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar14 * 8);
      local_78 = *(double *)(lVar8 + uVar17 * 0x18);
      lVar9 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar14 * 8);
      local_70 = *(double *)(lVar8 + 8 + uVar17 * 0x18);
      local_68 = *(double *)(lVar8 + 0x10 + uVar17 * 0x18);
      dVar1 = *(double *)(lVar9 + uVar17 * 0x18);
      dVar2 = *(double *)(lVar9 + 8 + uVar17 * 0x18);
      local_90 = local_78 - dVar1;
      dVar3 = *(double *)(lVar9 + 0x10 + uVar17 * 0x18);
      local_88 = local_70 - dVar2;
      local_78 = local_78 + dVar1;
      local_70 = local_70 + dVar2;
      local_80 = local_68 - dVar3;
      local_68 = local_68 + dVar3;
      local_res10[0] = iVar16;
      Core::Private::Function::CheckCallable(*(void **)&param_3->NextBoxF);
      plVar5 = *(longlong **)&(param_3->NextBoxF).field_0x28;
      pcVar6 = *(code **)&param_3->NextBoxF;
      plVar13 = (longlong *)&(param_3->NextBoxF).field_0x10;
      if (plVar5 != (longlong *)0x0) {
        plVar13 = plVar5;
      }
      uVar12 = (**(code **)(*plVar13 + 8))();
      cVar10 = (*pcVar6)(uVar12,&local_90,local_res10);
      if (cVar10 != '\0') {
        (**(code **)(this->_padding_ + 0x80))(this,uVar15,iVar16,param_3,param_4);
      }
    }
  }
  return;
}

// box_box_distsqr @ 1495da070

double __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::box_box_distsqr(TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
                  *this,int param_1,TAxisAlignedBox3<double> *param_2)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  TVector<double>_u_0 local_58;
  double local_40;
  double local_38;
  double local_30;
  
  dVar7 = this->BoxEps;
  uVar6 = (ulonglong)(param_1 & 0x1ff);
  lVar2 = *(longlong *)
           ((this->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  local_40 = *(double *)(lVar2 + uVar6 * 0x18);
  lVar3 = *(longlong *)
           ((this->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  local_38 = *(double *)(lVar2 + 8 + uVar6 * 0x18);
  local_30 = *(double *)(lVar2 + 0x10 + uVar6 * 0x18);
  pdVar1 = (double *)(lVar3 + uVar6 * 0x18);
  dVar5 = dVar7 + *(double *)(lVar3 + 0x10 + uVar6 * 0x18);
  dVar4 = dVar7 + *pdVar1;
  dVar7 = dVar7 + pdVar1[1];
  local_58._s_0.X = local_40 - dVar4;
  local_40 = local_40 + dVar4;
  local_58._s_0.Y = local_38 - dVar7;
  local_38 = local_38 + dVar7;
  local_58._s_0.Z = local_30 - dVar5;
  local_30 = local_30 + dVar5;
  dVar7 = TAxisAlignedBox3<double>::DistanceSquared
                    ((TAxisAlignedBox3<double> *)&local_58._s_0,param_2);
  return dVar7;
}

// box_box_intersect @ 1495da150

bool __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::box_box_intersect(TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
                    *this,int param_1,TAxisAlignedBox3<double> *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  bool bVar9;
  ulonglong uVar10;
  double dVar11;
  
  dVar2 = this->BoxEps;
  uVar10 = (ulonglong)(param_1 & 0x1ff);
  lVar6 = *(longlong *)
           ((this->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar3 = *(double *)(lVar6 + 0x10 + uVar10 * 0x18);
  lVar7 = *(longlong *)
           ((this->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar4 = *(double *)(lVar6 + uVar10 * 0x18);
  dVar5 = *(double *)(lVar6 + 8 + uVar10 * 0x18);
  dVar11 = dVar2 + *(double *)(lVar7 + 0x10 + uVar10 * 0x18);
  pdVar1 = (double *)(lVar7 + uVar10 * 0x18);
  dVar8 = dVar2 + *pdVar1;
  dVar2 = dVar2 + pdVar1[1];
  if (((((param_2->Max).field0_0x0._s_0.X <= dVar4 - dVar8) ||
       (dVar4 + dVar8 <= (param_2->Min).field0_0x0._s_0.X)) ||
      ((param_2->Max).field0_0x0._s_0.Y <= dVar5 - dVar2)) ||
     (((dVar5 + dVar2 <= (param_2->Min).field0_0x0._s_0.Y ||
       ((param_2->Max).field0_0x0._s_0.Z <= dVar3 - dVar11)) ||
      (dVar3 + dVar11 <= (param_2->Min).field0_0x0._s_0.Z)))) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  return bVar9;
}

// box_contains @ 1495da270

bool __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::box_contains(TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
               *this,int param_1,TVector<double> *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar12 = this->BoxEps;
  uVar9 = (ulonglong)(param_1 & 0x1ff);
  lVar6 = *(longlong *)
           ((this->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar2 = *(double *)(lVar6 + 0x10 + uVar9 * 0x18);
  lVar7 = *(longlong *)
           ((this->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar3 = *(double *)(lVar6 + uVar9 * 0x18);
  dVar4 = *(double *)(lVar6 + 8 + uVar9 * 0x18);
  pdVar1 = (double *)(lVar7 + uVar9 * 0x18);
  dVar11 = dVar12 + *(double *)(lVar7 + 0x10 + uVar9 * 0x18);
  dVar8 = dVar12 + *pdVar1;
  dVar12 = dVar12 + pdVar1[1];
  dVar10 = dVar3 - dVar8;
  if ((((dVar10 < (param_2->field0_0x0)._s_0.X || dVar10 == (param_2->field0_0x0)._s_0.X) &&
       (dVar10 = (param_2->field0_0x0)._s_0.Y, dVar4 - dVar12 <= dVar10)) &&
      (dVar5 = (param_2->field0_0x0)._s_0.Z, dVar2 - dVar11 <= dVar5)) &&
     ((((param_2->field0_0x0)._s_0.X <= dVar3 + dVar8 && (dVar10 <= dVar4 + dVar12)) &&
      (dVar5 <= dVar2 + dVar11)))) {
    return true;
  }
  return false;
}

// find_any_intersection @ 1495edd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::find_any_intersection
          (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,int param_1,TTriangle3<double> *param_2,TAxisAlignedBox3<double> *param_3,
          TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
          *param_4,FQueryOptions *param_5)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_> *pTVar7;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  char cVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined8 uVar17;
  longlong *plVar18;
  longlong lVar19;
  uint uVar20;
  undefined1 auStackY_138 [32];
  uint local_108 [2];
  int local_100;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  *local_f8;
  TTriangle3<double> *local_f0;
  ulonglong local_e8;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_e0;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_d0;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_c0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  pFVar3 = (this->IndexList).Blocks.AllocatorInstance.Data;
  local_f8 = param_4;
  uVar20 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  local_e8 = (ulonglong)uVar20;
  lVar19 = (ulonglong)(uVar20 & 0x1ff) * 4;
  lVar4 = *(longlong *)(pFVar3 + (ulonglong)(uVar20 >> 9) * 8);
  local_f0 = param_2;
  if ((int)uVar20 < this->TrianglesEnd) {
    local_100 = *(int *)(lVar19 + lVar4);
    if (0 < local_100) {
      uVar20 = uVar20 + 1;
      do {
        uVar2 = *(uint *)(*(longlong *)
                           ((this->IndexList).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar20 >> 9) * 8) + (ulonglong)(uVar20 & 0x1ff) * 4);
        lVar19 = (longlong)(int)uVar2;
        if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_1495ede6b:
          pTVar7 = this->Mesh;
          pTVar8 = pTVar7->SourceTriangles;
          uVar13 = 0;
          if ((int)uVar2 < pTVar8->ArrayNum) {
            uVar13 = ~uVar2 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            iVar14 = (*pcVar6)();
            return iVar14;
          }
          pFVar3 = (pTVar8->AllocatorInstance).Data;
          uVar13 = *(uint *)(pFVar3 + lVar19 * 0xc);
          pTVar9 = pTVar7->SourceVertices;
          uVar15 = 0;
          if ((int)uVar13 < pTVar9->ArrayNum) {
            uVar15 = ~uVar13 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            iVar14 = (*pcVar6)();
            return iVar14;
          }
          pFVar10 = (pTVar9->AllocatorInstance).Data;
          pFVar1 = pFVar10 + (longlong)(int)uVar13 * 0x18;
          local_a8 = *(undefined8 *)pFVar1;
          uStack_a0 = *(undefined8 *)(pFVar1 + 8);
          local_98 = *(undefined8 *)(pFVar10 + (longlong)(int)uVar13 * 0x18 + 0x10);
          uVar13 = *(uint *)(pFVar3 + lVar19 * 0xc + 4);
          pTVar9 = pTVar7->SourceVertices;
          uVar15 = 0;
          if ((int)uVar13 < pTVar9->ArrayNum) {
            uVar15 = ~uVar13 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            iVar14 = (*pcVar6)();
            return iVar14;
          }
          pFVar10 = (pTVar9->AllocatorInstance).Data;
          pFVar1 = pFVar10 + (longlong)(int)uVar13 * 0x18;
          local_90 = *(undefined8 *)pFVar1;
          uStack_88 = *(undefined8 *)(pFVar1 + 8);
          local_80 = *(undefined8 *)(pFVar10 + (longlong)(int)uVar13 * 0x18 + 0x10);
          uVar13 = *(uint *)(pFVar3 + lVar19 * 0xc + 8);
          pTVar9 = pTVar7->SourceVertices;
          uVar15 = 0;
          if ((int)uVar13 < pTVar9->ArrayNum) {
            uVar15 = ~uVar13 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            iVar14 = (*pcVar6)();
            return iVar14;
          }
          pFVar1 = (pTVar9->AllocatorInstance).Data;
          pFVar3 = pFVar1 + (longlong)(int)uVar13 * 0x18;
          local_78 = *(undefined4 *)pFVar3;
          uStack_74 = *(undefined4 *)(pFVar3 + 4);
          uStack_70 = *(undefined4 *)(pFVar3 + 8);
          uStack_6c = *(undefined4 *)(pFVar3 + 0xc);
          local_68 = *(undefined8 *)(pFVar1 + (longlong)(int)uVar13 * 0x18 + 0x10);
          cVar11 = (**(code **)local_f8)(*(undefined8 *)&local_f8->field_0x8,local_f0,&local_a8);
          if (cVar11 != '\0') {
            return uVar2;
          }
        }
        else {
          local_108[0] = uVar2;
          Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
          plVar5 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
          pcVar6 = *(code **)&param_5->TriangleFilterF;
          plVar18 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
          if (plVar5 != (longlong *)0x0) {
            plVar18 = plVar5;
          }
          uVar17 = (**(code **)(*plVar18 + 8))();
          cVar11 = (*pcVar6)(uVar17,local_108);
          if (cVar11 != '\0') goto LAB_1495ede6b;
        }
        uVar20 = uVar20 + 1;
      } while ((int)(uVar20 - (int)local_e8) <= local_100);
    }
  }
  else {
    uVar2 = *(uint *)(lVar19 + lVar4);
    if (-1 < (int)uVar2) {
      iVar16 = -1;
      iVar14 = *(int *)(*(longlong *)(pFVar3 + (ulonglong)(uVar20 + 1 >> 9) * 8) +
                       (ulonglong)(uVar20 + 1 & 0x1ff) * 4);
      bVar12 = box_box_intersect(this,uVar2 - 1,param_3);
      if (bVar12) {
        local_d0._0_8_ = *(undefined8 *)param_4;
        local_d0._8_8_ = *(undefined8 *)&param_4->field_0x8;
        iVar16 = find_any_intersection(this,uVar2 - 1,param_2,param_3,&local_d0,param_5);
        if (iVar16 != -1) {
          return iVar16;
        }
      }
      bVar12 = box_box_intersect(this,iVar14 + -1,param_3);
      if (!bVar12) {
        return iVar16;
      }
      local_c0._0_8_ = *(undefined8 *)param_4;
      local_c0._8_8_ = *(undefined8 *)&param_4->field_0x8;
      iVar14 = find_any_intersection(this,iVar14 + -1,param_2,param_3,&local_c0,param_5);
      return iVar14;
    }
    bVar12 = box_box_intersect(this,~uVar2,param_3);
    if (bVar12) {
      local_e0._0_8_ = *(undefined8 *)param_4;
      local_e0._8_8_ = *(undefined8 *)&param_4->field_0x8;
      iVar14 = find_any_intersection(this,~uVar2,param_2,param_3,&local_e0,param_5);
      return iVar14;
    }
  }
  return -1;
}

// find_any_intersection @ 1495ee190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::find_any_intersection
          (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,int param_1,
          TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
          *param_2,TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                   *param_3,int param_4,int param_5,
          TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
          *param_6,FQueryOptions *param_7,FQueryOptions *param_8)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_> *pTVar8;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  char cVar17;
  bool bVar18;
  undefined1 uVar19;
  uint uVar20;
  undefined8 uVar21;
  uint uVar22;
  longlong *plVar23;
  longlong *plVar24;
  undefined1 *puVar25;
  longlong lVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  uint uVar29;
  int iVar30;
  undefined1 auStackY_368 [32];
  int local_2f4;
  int local_2f0 [2];
  uint local_2e8 [2];
  uint local_2e0;
  ulonglong local_2d8;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  *local_2d0;
  TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  *local_2c8;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_2c0;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_2b0;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_2a0;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_290;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_280;
  TFunctionRef<bool___cdecl(UE::Geometry::TTriangle3<double>_const_&,UE::Geometry::TTriangle3<double>_const_&)>
  local_270;
  TVector<double>_u_0 local_260;
  double local_248;
  double local_240;
  double local_238;
  TVector<double>_u_0 local_230;
  double local_218;
  double local_210;
  double local_208;
  TVector<double>_u_0 local_200;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  TAxisAlignedBox3<double> local_188;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_368;
  uVar28 = (ulonglong)((uint)param_1 >> 9);
  uVar27 = (ulonglong)(param_1 & 0x1ff);
  local_2d0 = param_6;
  uVar29 = *(uint *)(*(longlong *)((this->BoxToIndex).Blocks.AllocatorInstance.Data + uVar28 * 8) +
                    uVar27 * 4);
  uVar22 = *(uint *)(*(longlong *)
                      ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
  local_2e0 = uVar29;
  local_2c8 = this;
  if ((int)uVar29 < this->TrianglesEnd) {
    if ((int)uVar22 < param_2->TrianglesEnd) {
      local_2f4 = 1;
      iVar30 = *(int *)(*(longlong *)
                         ((this->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar29 >> 9) * 8) + (ulonglong)(uVar29 & 0x1ff) * 4);
      iVar5 = *(int *)(*(longlong *)
                        ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar22 >> 9) * 8) + (ulonglong)(uVar22 & 0x1ff) * 4);
      if (iVar5 < 1) {
        return false;
      }
      do {
        uVar22 = uVar22 + 1;
        local_2d8 = (ulonglong)uVar22;
        iVar6 = *(int *)(*(longlong *)
                          ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar22 >> 9) * 8) + (ulonglong)(uVar22 & 0x1ff) * 4);
        if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_1495ee33c:
          TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>::
          GetTriVertices(param_2->Mesh,iVar6,(TVector<double> *)&local_158._s_0,
                         (TVector<double> *)&local_140._s_0,(TVector<double> *)&local_128._s_0);
          if (*(void **)param_3 != (void *)0x0) {
            Core::Private::Function::CheckCallable(*(void **)param_3);
            pcVar7 = *(code **)param_3;
            puVar25 = &param_3->field_0x10;
            plVar23 = *(longlong **)&param_3->field_0x28;
            if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
              plVar23 = (longlong *)puVar25;
            }
            uVar21 = (**(code **)(*plVar23 + 8))();
            (*pcVar7)(&local_1d0,uVar21,&local_158);
            local_158._s_0.X = local_1d0;
            local_158._s_0.Y = dStack_1c8;
            local_158._s_0.Z = local_1c0;
            Core::Private::Function::CheckCallable(*(void **)param_3);
            pcVar7 = *(code **)param_3;
            plVar23 = *(longlong **)&param_3->field_0x28;
            if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
              plVar23 = (longlong *)puVar25;
            }
            uVar21 = (**(code **)(*plVar23 + 8))();
            (*pcVar7)(&local_1b8,uVar21,&local_140);
            local_140._s_0.X = local_1b8;
            local_140._s_0.Y = dStack_1b0;
            local_140._s_0.Z = local_1a8;
            Core::Private::Function::CheckCallable(*(void **)param_3);
            pcVar7 = *(code **)param_3;
            plVar23 = *(longlong **)&param_3->field_0x28;
            if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
              plVar23 = (longlong *)puVar25;
            }
            uVar21 = (**(code **)(*plVar23 + 8))();
            (*pcVar7)(&local_1a0,uVar21,&local_128);
            local_128._s_0.X = local_1a0;
            local_128._s_0.Y = dStack_198;
            local_128._s_0.Z = local_190;
          }
          if (0 < iVar30) {
            uVar22 = uVar29 + 1;
            do {
              uVar20 = *(uint *)(*(longlong *)
                                  ((this->IndexList).Blocks.AllocatorInstance.Data +
                                  (ulonglong)(uVar22 >> 9) * 8) + (ulonglong)(uVar22 & 0x1ff) * 4);
              lVar26 = (longlong)(int)uVar20;
              if (*(void **)&param_7->TriangleFilterF == (void *)0x0) {
LAB_1495ee4d9:
                pTVar8 = this->Mesh;
                pTVar9 = pTVar8->SourceTriangles;
                uVar29 = 0;
                if ((int)uVar20 < pTVar9->ArrayNum) {
                  uVar29 = ~uVar20 >> 0x1f;
                }
                if ((uVar29 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar7 = (code *)swi(3);
                  uVar19 = (*pcVar7)();
                  return (bool)uVar19;
                }
                pFVar10 = (pTVar9->AllocatorInstance).Data;
                pTVar11 = pTVar8->SourceVertices;
                uVar29 = *(uint *)(pFVar10 + lVar26 * 0xc);
                uVar20 = 0;
                if ((int)uVar29 < pTVar11->ArrayNum) {
                  uVar20 = ~uVar29 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar7 = (code *)swi(3);
                  uVar19 = (*pcVar7)();
                  return (bool)uVar19;
                }
                pFVar12 = (pTVar11->AllocatorInstance).Data;
                pFVar1 = pFVar12 + (longlong)(int)uVar29 * 0x18;
                local_108 = *(undefined8 *)pFVar1;
                uStack_100 = *(undefined8 *)(pFVar1 + 8);
                local_f8 = *(undefined8 *)(pFVar12 + (longlong)(int)uVar29 * 0x18 + 0x10);
                uVar29 = *(uint *)(pFVar10 + lVar26 * 0xc + 4);
                pTVar11 = pTVar8->SourceVertices;
                uVar20 = 0;
                if ((int)uVar29 < pTVar11->ArrayNum) {
                  uVar20 = ~uVar29 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar7 = (code *)swi(3);
                  uVar19 = (*pcVar7)();
                  return (bool)uVar19;
                }
                pFVar12 = (pTVar11->AllocatorInstance).Data;
                pFVar1 = pFVar12 + (longlong)(int)uVar29 * 0x18;
                local_f0 = *(undefined8 *)pFVar1;
                uStack_e8 = *(undefined8 *)(pFVar1 + 8);
                local_e0 = *(undefined8 *)(pFVar12 + (longlong)(int)uVar29 * 0x18 + 0x10);
                uVar29 = *(uint *)(pFVar10 + lVar26 * 0xc + 8);
                pTVar11 = pTVar8->SourceVertices;
                uVar20 = 0;
                if ((int)uVar29 < pTVar11->ArrayNum) {
                  uVar20 = ~uVar29 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar18)) {
                  pcVar7 = (code *)swi(3);
                  uVar19 = (*pcVar7)();
                  return (bool)uVar19;
                }
                pFVar1 = (pTVar11->AllocatorInstance).Data;
                pFVar10 = pFVar1 + (longlong)(int)uVar29 * 0x18;
                local_d8 = *(undefined4 *)pFVar10;
                uStack_d4 = *(undefined4 *)(pFVar10 + 4);
                uStack_d0 = *(undefined4 *)(pFVar10 + 8);
                uStack_cc = *(undefined4 *)(pFVar10 + 0xc);
                local_c8 = *(undefined8 *)(pFVar1 + (longlong)(int)uVar29 * 0x18 + 0x10);
                cVar17 = (**(code **)local_2d0)
                                   (*(undefined8 *)&local_2d0->field_0x8,&local_158,&local_108);
                this = local_2c8;
                uVar29 = local_2e0;
                if (cVar17 != '\0') {
                  return true;
                }
              }
              else {
                local_2e8[0] = uVar20;
                Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
                plVar23 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
                pcVar7 = *(code **)&param_7->TriangleFilterF;
                plVar24 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
                if (plVar23 != (longlong *)0x0) {
                  plVar24 = plVar23;
                }
                uVar21 = (**(code **)(*plVar24 + 8))();
                cVar17 = (*pcVar7)(uVar21,local_2e8);
                if (cVar17 != '\0') goto LAB_1495ee4d9;
              }
              uVar22 = uVar22 + 1;
            } while ((int)(uVar22 - uVar29) <= iVar30);
          }
        }
        else {
          local_2f0[0] = iVar6;
          Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
          plVar23 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
          pcVar7 = *(code **)&param_8->TriangleFilterF;
          plVar24 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
          if (plVar23 != (longlong *)0x0) {
            plVar24 = plVar23;
          }
          uVar21 = (**(code **)(*plVar24 + 8))();
          cVar17 = (*pcVar7)(uVar21,local_2f0);
          if (cVar17 != '\0') goto LAB_1495ee33c;
        }
        local_2f4 = local_2f4 + 1;
        uVar22 = (uint)local_2d8;
        if (iVar5 < local_2f4) {
          return false;
        }
      } while( true );
    }
  }
  else if (((param_5 & 1U) != 0) || ((int)uVar22 < param_2->TrianglesEnd)) {
    GetBox(param_2,&local_188,param_4,param_3);
    pFVar10 = (this->IndexList).Blocks.AllocatorInstance.Data;
    uVar22 = *(uint *)(*(longlong *)(pFVar10 + (ulonglong)(uVar29 >> 9) * 8) +
                      (ulonglong)(uVar29 & 0x1ff) * 4);
    if ((int)uVar22 < 0) {
      bVar18 = box_box_intersect(this,~uVar22,&local_188);
      if (!bVar18) {
        return false;
      }
      local_290._0_8_ = *(undefined8 *)param_6;
      local_290._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar18 = find_any_intersection
                         (this,~uVar22,param_2,param_3,param_4,param_5 + 1,&local_290,param_7,
                          param_8);
      return bVar18;
    }
    iVar30 = *(int *)(*(longlong *)(pFVar10 + (ulonglong)(uVar29 + 1 >> 9) * 8) +
                     (ulonglong)(uVar29 + 1 & 0x1ff) * 4) + -1;
    bVar18 = box_box_intersect(this,uVar22 - 1,&local_188);
    if (bVar18) {
      local_280._0_8_ = *(undefined8 *)param_6;
      local_280._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar18 = find_any_intersection
                         (this,uVar22 - 1,param_2,param_3,param_4,param_5 + 1,&local_280,param_7,
                          param_8);
      if (bVar18) {
        return true;
      }
    }
    bVar18 = box_box_intersect(this,iVar30,&local_188);
    if (bVar18) {
      local_270._0_8_ = *(undefined8 *)param_6;
      local_270._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar18 = find_any_intersection
                         (this,iVar30,param_2,param_3,param_4,param_5 + 1,&local_270,param_7,param_8
                         );
      return bVar18;
    }
    return false;
  }
  lVar26 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar28 * 8);
  dVar2 = *(double *)(lVar26 + uVar27 * 0x18);
  lVar13 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar28 * 8);
  dVar3 = *(double *)(lVar26 + 8 + uVar27 * 0x18);
  dVar4 = *(double *)(lVar26 + 0x10 + uVar27 * 0x18);
  dVar14 = dVar2 - *(double *)(lVar13 + uVar27 * 0x18);
  dVar15 = dVar3 - *(double *)(lVar13 + 8 + uVar27 * 0x18);
  dVar16 = dVar4 - *(double *)(lVar13 + 0x10 + uVar27 * 0x18);
  dVar2 = dVar2 + *(double *)(lVar13 + uVar27 * 0x18);
  dVar3 = dVar3 + *(double *)(lVar13 + 8 + uVar27 * 0x18);
  dVar4 = dVar4 + *(double *)(lVar13 + 0x10 + uVar27 * 0x18);
  pFVar10 = (param_2->IndexList).Blocks.AllocatorInstance.Data;
  uVar29 = *(uint *)(*(longlong *)(pFVar10 + (ulonglong)(uVar22 >> 9) * 8) +
                    (ulonglong)(uVar22 & 0x1ff) * 4);
  if ((int)uVar29 < 0) {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_260._s_0,~uVar29,param_3);
    if (((local_260._s_0.X < dVar2) && (dVar14 < local_248)) &&
       ((local_260._s_0.Y < dVar3 &&
        (((dVar15 < local_240 && (local_260._s_0.Z < dVar4)) && (dVar16 < local_238)))))) {
      local_2c0._0_8_ = *(undefined8 *)param_6;
      local_2c0._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar18 = find_any_intersection
                         (this,param_1,param_2,param_3,param_4,param_5 + 1,&local_2c0,param_7,
                          param_8);
      return bVar18;
    }
    return false;
  }
  iVar30 = *(int *)(*(longlong *)(pFVar10 + (ulonglong)(uVar22 + 1 >> 9) * 8) +
                   (ulonglong)(uVar22 + 1 & 0x1ff) * 4) + -1;
  GetBox(param_2,(TAxisAlignedBox3<double> *)&local_230._s_0,uVar29 - 1,param_3);
  if ((((local_230._s_0.X < dVar2) && (dVar14 < local_218)) && (local_230._s_0.Y < dVar3)) &&
     (((dVar15 < local_210 && (local_230._s_0.Z < dVar4)) && (dVar16 < local_208)))) {
    local_2b0._0_8_ = *(undefined8 *)param_6;
    local_2b0._8_8_ = *(undefined8 *)&param_6->field_0x8;
    bVar18 = find_any_intersection
                       (this,param_1,param_2,param_3,uVar29 - 1,param_5 + 1,&local_2b0,param_7,
                        param_8);
    if (bVar18) {
      return true;
    }
  }
  GetBox(param_2,(TAxisAlignedBox3<double> *)&local_200._s_0,iVar30,param_3);
  if (dVar2 <= local_200._s_0.X) {
    return false;
  }
  if (local_1e8 <= dVar14) {
    return false;
  }
  if (dVar3 <= local_200._s_0.Y) {
    return false;
  }
  if (local_1e0 <= dVar15) {
    return false;
  }
  if (local_200._s_0.Z < dVar4) {
    if (dVar16 < local_1d8) {
      local_2a0._0_8_ = *(undefined8 *)param_6;
      local_2a0._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar18 = find_any_intersection
                         (this,param_1,param_2,param_3,iVar30,param_5 + 1,&local_2a0,param_7,param_8
                         );
      return bVar18;
    }
    return false;
  }
  return false;
}

// find_intersections @ 1495f0d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::find_intersections
          (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,int param_1,
          TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
          *param_2,TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                   *param_3,int param_4,int param_5,FIntersectionsQueryResult *param_6,
          TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_7,
          FQueryOptions *param_8,FQueryOptions *param_9)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  code *pcVar8;
  TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_> *pTVar9;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  *pTVar19;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *pTVar20;
  char cVar21;
  bool bVar22;
  uint uVar23;
  uint uVar24;
  undefined8 uVar25;
  uint uVar26;
  longlong *plVar27;
  longlong *plVar28;
  int iVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  uint uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auStackY_4e8 [32];
  FIntersectionsQueryResult *pFVar36;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *pTVar37;
  int local_498 [2];
  FIntersectionsQueryResult *local_490;
  TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  *local_488;
  FQueryOptions *local_480;
  TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *local_478;
  uint local_470;
  uint local_468 [2];
  int local_460;
  uint local_45c;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_458;
  TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  *local_450;
  ulonglong local_448;
  ulonglong local_440;
  ulonglong local_438;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *local_430;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_428;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_418;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_408;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_3f8;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_3e8;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_3d8;
  TVector<double>_u_0 local_3c8;
  double local_3b0;
  double local_3a8;
  double local_3a0;
  TVector<double>_u_0 local_398;
  double local_380;
  double local_378;
  double local_370;
  TVector<double>_u_0 local_368;
  double local_350;
  double local_348;
  double local_340;
  double local_338;
  double dStack_330;
  double local_328;
  double local_320;
  double dStack_318;
  double local_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  double local_2f8;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  TAxisAlignedBox3<double> local_298;
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 TStack_230;
  TVector<double>_u_0 local_218;
  TVector<double>_u_0 local_1f8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160;
  ulonglong local_15c;
  undefined4 local_154;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  local_490 = param_6;
  local_480 = param_9;
  uVar32 = (ulonglong)((uint)param_1 >> 9);
  uVar31 = (ulonglong)(param_1 & 0x1ff);
  local_430 = param_7;
  uVar33 = *(uint *)(*(longlong *)((this->BoxToIndex).Blocks.AllocatorInstance.Data + uVar32 * 8) +
                    uVar31 * 4);
  uVar26 = *(uint *)(*(longlong *)
                      ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
  local_168 = __real_3e45798ee2308c3a;
  local_160 = 0;
  local_15c = 0;
  local_154 = 0;
  local_498[0] = param_1;
  local_488 = param_2;
  local_478 = param_3;
  local_470 = uVar33;
  local_450 = this;
  if ((int)uVar33 < this->TrianglesEnd) {
    if ((int)uVar26 < param_2->TrianglesEnd) {
      uVar33 = *(uint *)(*(longlong *)
                          ((this->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar33 >> 9) * 8) + (ulonglong)(uVar33 & 0x1ff) * 4);
      uVar23 = *(uint *)(*(longlong *)
                          ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar26 >> 9) * 8) + (ulonglong)(uVar26 & 0x1ff) * 4);
      local_438 = (ulonglong)uVar23;
      local_45c = uVar33;
      if ((int)uVar23 < 1) {
        return;
      }
      do {
        uVar26 = uVar26 + 1;
        local_440 = (ulonglong)uVar26;
        iVar29 = *(int *)(*(longlong *)
                           ((local_488->IndexList).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar26 >> 9) * 8) + (ulonglong)(uVar26 & 0x1ff) * 4);
        local_460 = iVar29;
        if (*(void **)&param_9->TriangleFilterF == (void *)0x0) {
LAB_1495f0eb0:
          TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>::
          GetTriVertices(local_488->Mesh,iVar29,(TVector<double> *)&local_248._s_0,
                         (TVector<double> *)&TStack_230._s_0,(TVector<double> *)&local_218._s_0);
          pTVar20 = local_478;
          if (*(void **)local_478 == (void *)0x0) {
            uVar34 = SUB84(local_218._s_0.Z,0);
            uVar35 = (undefined4)((ulonglong)local_218._16_8_ >> 0x20);
          }
          else {
            Core::Private::Function::CheckCallable(*(void **)local_478);
            puVar1 = &pTVar20->field_0x10;
            pcVar8 = *(code **)pTVar20;
            plVar27 = *(longlong **)&pTVar20->field_0x28;
            if (*(longlong **)&pTVar20->field_0x28 == (longlong *)0x0) {
              plVar27 = (longlong *)puVar1;
            }
            uVar25 = (**(code **)(*plVar27 + 8))();
            (*pcVar8)(&local_338,uVar25,&local_248);
            local_248._s_0.X = local_338;
            local_248._s_0.Y = dStack_330;
            local_248._s_0.Z = local_328;
            Core::Private::Function::CheckCallable(*(void **)pTVar20);
            pcVar8 = *(code **)pTVar20;
            plVar27 = *(longlong **)&pTVar20->field_0x28;
            if (*(longlong **)&pTVar20->field_0x28 == (longlong *)0x0) {
              plVar27 = (longlong *)puVar1;
            }
            uVar25 = (**(code **)(*plVar27 + 8))();
            (*pcVar8)(&local_320,uVar25,&TStack_230);
            TStack_230._s_0.X = local_320;
            TStack_230._s_0.Y = dStack_318;
            TStack_230._s_0.Z = local_310;
            Core::Private::Function::CheckCallable(*(void **)pTVar20);
            pcVar8 = *(code **)pTVar20;
            plVar27 = *(longlong **)&pTVar20->field_0x28;
            if (*(longlong **)&pTVar20->field_0x28 == (longlong *)0x0) {
              plVar27 = (longlong *)puVar1;
            }
            uVar25 = (**(code **)(*plVar27 + 8))();
            (*pcVar8)(&local_308,uVar25,&local_218);
            uVar34 = SUB84(local_2f8,0);
            uVar35 = (undefined4)((ulonglong)local_2f8 >> 0x20);
            local_218._0_4_ = local_308;
            local_218._4_4_ = uStack_304;
            local_218._8_4_ = uStack_300;
            local_218._12_4_ = uStack_2fc;
            local_218._16_8_ = local_2f8;
          }
          local_1f8._s_0.X = local_248._s_0.X;
          local_1f8._s_0.Y = local_248._s_0.Y;
          local_1d8 = TStack_230._s_0.Y;
          dStack_1d0 = TStack_230._s_0.Z;
          local_15c = local_15c & 0xffffffff00000000;
          local_1f8._s_0.Z = local_248._s_0.Z;
          dStack_1e0 = TStack_230._s_0.X;
          local_1b8 = CONCAT44(uVar35,uVar34);
          local_1c8 = local_218._0_4_;
          uStack_1c4 = local_218._4_4_;
          uStack_1c0 = local_218._8_4_;
          uStack_1bc = local_218._12_4_;
          if (0 < (int)uVar33) {
            local_448 = (ulonglong)uVar33;
            uVar33 = local_470;
            do {
              uVar33 = uVar33 + 1;
              uVar26 = *(uint *)(*(longlong *)
                                  ((this->IndexList).Blocks.AllocatorInstance.Data +
                                  (ulonglong)(uVar33 >> 9) * 8) + (ulonglong)(uVar33 & 0x1ff) * 4);
              lVar30 = (longlong)(int)uVar26;
              if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_1495f109a:
                pTVar9 = this->Mesh;
                pTVar10 = pTVar9->SourceTriangles;
                uVar23 = 0;
                if ((int)uVar26 < pTVar10->ArrayNum) {
                  uVar23 = ~uVar26 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                local_458 = pTVar9->SourceVertices;
                pFVar11 = (pTVar10->AllocatorInstance).Data;
                uVar23 = *(uint *)(pFVar11 + lVar30 * 0xc);
                uVar24 = 0;
                if ((int)uVar23 < local_458->ArrayNum) {
                  uVar24 = ~uVar23 >> 0x1f;
                }
                if ((uVar24 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                uVar24 = *(uint *)(pFVar11 + lVar30 * 0xc + 4);
                pFVar12 = (local_458->AllocatorInstance).Data;
                pFVar2 = pFVar12 + (longlong)(int)uVar23 * 0x18;
                local_2e8 = *(undefined8 *)pFVar2;
                uStack_2e0 = *(undefined8 *)(pFVar2 + 8);
                local_2d8 = *(undefined8 *)(pFVar12 + (longlong)(int)uVar23 * 0x18 + 0x10);
                local_458 = pTVar9->SourceVertices;
                uVar23 = 0;
                if ((int)uVar24 < local_458->ArrayNum) {
                  uVar23 = ~uVar24 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                uVar23 = *(uint *)(pFVar11 + lVar30 * 0xc + 8);
                pTVar13 = pTVar9->SourceVertices;
                pFVar2 = (local_458->AllocatorInstance).Data;
                pFVar11 = pFVar2 + (longlong)(int)uVar24 * 0x18;
                uStack_2d0 = *(undefined8 *)pFVar11;
                uStack_2c8 = *(undefined8 *)(pFVar11 + 8);
                uStack_2c0 = *(undefined8 *)(pFVar2 + (longlong)(int)uVar24 * 0x18 + 0x10);
                uVar24 = 0;
                if ((int)uVar23 < pTVar13->ArrayNum) {
                  uVar24 = ~uVar23 >> 0x1f;
                }
                if ((uVar24 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pFVar2 = (pTVar13->AllocatorInstance).Data;
                pFVar11 = pFVar2 + (longlong)(int)uVar23 * 0x18;
                local_2b8 = *(undefined4 *)pFVar11;
                uStack_2b4 = *(undefined4 *)(pFVar11 + 4);
                uStack_2b0 = *(undefined4 *)(pFVar11 + 8);
                uStack_2ac = *(undefined4 *)(pFVar11 + 0xc);
                local_2a8 = *(undefined8 *)(pFVar2 + (longlong)(int)uVar23 * 0x18 + 0x10);
                local_1b0 = local_2e8;
                uStack_1a8 = uStack_2e0;
                local_15c = local_15c & 0xffffffff00000000;
                local_190 = (undefined4)uStack_2c8;
                uStack_18c = uStack_2c8._4_4_;
                uStack_188 = (undefined4)uStack_2c0;
                uStack_184 = uStack_2c0._4_4_;
                local_1a0 = (undefined4)local_2d8;
                uStack_19c = local_2d8._4_4_;
                uStack_198 = (undefined4)uStack_2d0;
                uStack_194 = uStack_2d0._4_4_;
                local_180 = local_2b8;
                uStack_17c = uStack_2b4;
                uStack_178 = uStack_2b0;
                uStack_174 = uStack_2ac;
                local_170 = local_2a8;
                cVar21 = (**(code **)local_430)(*(undefined8 *)&local_430->field_0x8,&local_1f8);
                this = local_450;
                if (cVar21 != '\0') {
                  AddTriTriIntersectionResult
                            ((TIntrTriangle3Triangle3<double> *)&local_1f8._s_0,uVar26,local_460,
                             local_490);
                  this = local_450;
                }
              }
              else {
                local_468[0] = uVar26;
                Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
                plVar27 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
                pcVar8 = *(code **)&param_8->TriangleFilterF;
                plVar28 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
                if (plVar27 != (longlong *)0x0) {
                  plVar28 = plVar27;
                }
                uVar25 = (**(code **)(*plVar28 + 8))();
                cVar21 = (*pcVar8)(uVar25,local_468);
                if (cVar21 != '\0') goto LAB_1495f109a;
              }
              local_448 = local_448 - 1;
            } while (local_448 != 0);
            local_448 = 0;
            param_9 = local_480;
            uVar33 = local_45c;
          }
        }
        else {
          local_498[0] = iVar29;
          Core::Private::Function::CheckCallable(*(void **)&param_9->TriangleFilterF);
          plVar27 = *(longlong **)&(param_9->TriangleFilterF).field_0x28;
          pcVar8 = *(code **)&param_9->TriangleFilterF;
          plVar28 = (longlong *)&(param_9->TriangleFilterF).field_0x10;
          if (plVar27 != (longlong *)0x0) {
            plVar28 = plVar27;
          }
          uVar25 = (**(code **)(*plVar28 + 8))();
          cVar21 = (*pcVar8)(uVar25,local_498);
          if (cVar21 != '\0') goto LAB_1495f0eb0;
        }
        uVar26 = (uint)local_440;
        local_438 = local_438 - 1;
        if (local_438 == 0) {
          return;
        }
      } while( true );
    }
  }
  else if (((param_5 & 1U) != 0) || ((int)uVar26 < param_2->TrianglesEnd)) {
    GetBox(param_2,&local_298,param_4,param_3);
    uVar33 = *(uint *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar33 >> 9) * 8) + (ulonglong)(uVar33 & 0x1ff) * 4);
    if ((int)uVar33 < 0) {
      bVar22 = box_box_intersect(this,~uVar33,&local_298);
      if (!bVar22) {
        return;
      }
      local_3f8._0_8_ = *(undefined8 *)param_7;
      local_3f8._8_8_ = *(undefined8 *)&param_7->field_0x8;
      find_intersections(this,~uVar33,local_488,local_478,param_4,param_5 + 1,local_490,&local_3f8,
                         param_8,local_480);
      return;
    }
    bVar22 = box_box_intersect(this,uVar33 - 1,&local_298);
    pTVar19 = local_488;
    if (bVar22) {
      local_3e8._0_8_ = *(undefined8 *)param_7;
      local_3e8._8_8_ = *(undefined8 *)&param_7->field_0x8;
      find_intersections(this,uVar33 - 1,local_488,local_478,param_4,param_5 + 1,local_490,
                         &local_3e8,param_8,local_480);
    }
    iVar29 = *(int *)(*(longlong *)
                       ((this->IndexList).Blocks.AllocatorInstance.Data +
                       (ulonglong)(local_470 + 1 >> 9) * 8) + (ulonglong)(local_470 + 1 & 0x1ff) * 4
                     );
    bVar22 = box_box_intersect(this,iVar29 + -1,&local_298);
    if (!bVar22) {
      return;
    }
    local_3d8._0_8_ = *(undefined8 *)param_7;
    local_3d8._8_8_ = *(undefined8 *)&param_7->field_0x8;
    find_intersections(this,iVar29 + -1,pTVar19,local_478,param_4,param_5 + 1,local_490,&local_3d8,
                       param_8,local_480);
    return;
  }
  dVar4 = this->BoxEps;
  lVar30 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar32 * 8);
  dVar5 = *(double *)(lVar30 + uVar31 * 0x18);
  lVar14 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar32 * 8);
  dVar6 = *(double *)(lVar30 + 8 + uVar31 * 0x18);
  dVar7 = *(double *)(lVar30 + 0x10 + uVar31 * 0x18);
  pdVar3 = (double *)(lVar14 + uVar31 * 0x18);
  dVar16 = pdVar3[1] + dVar4;
  dVar15 = *pdVar3 + dVar4;
  dVar4 = *(double *)(lVar14 + 0x10 + uVar31 * 0x18) + dVar4;
  uVar33 = *(uint *)(*(longlong *)
                      ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar26 >> 9) * 8) + (ulonglong)(uVar26 & 0x1ff) * 4);
  dVar17 = dVar6 - dVar16;
  dVar6 = dVar6 + dVar16;
  dVar16 = dVar5 - dVar15;
  dVar18 = dVar7 - dVar4;
  dVar5 = dVar5 + dVar15;
  dVar7 = dVar7 + dVar4;
  if ((int)uVar33 < 0) {
    uVar33 = ~uVar33;
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_3c8._s_0,uVar33,param_3);
    if (dVar5 <= local_3c8._s_0.X) {
      return;
    }
    if (local_3b0 <= dVar16) {
      return;
    }
    if (dVar6 <= local_3c8._s_0.Y) {
      return;
    }
    if (local_3a8 <= dVar17) {
      return;
    }
    if (dVar7 <= local_3c8._s_0.Z) {
      return;
    }
    if (local_3a0 <= dVar18) {
      return;
    }
    local_428._0_8_ = *(undefined8 *)param_7;
    pTVar37 = &local_428;
    local_428._8_8_ = *(undefined8 *)&param_7->field_0x8;
    iVar29 = local_498[0];
    pFVar36 = local_490;
  }
  else {
    GetBox(param_2,(TAxisAlignedBox3<double> *)&local_398._s_0,uVar33 - 1,param_3);
    pFVar36 = local_490;
    iVar29 = local_498[0];
    if ((((local_398._s_0.X < dVar5) && (dVar16 < local_380)) && (local_398._s_0.Y < dVar6)) &&
       (((dVar17 < local_378 && (local_398._s_0.Z < dVar7)) && (dVar18 < local_370)))) {
      local_418._0_8_ = *(undefined8 *)param_7;
      local_418._8_8_ = *(undefined8 *)&param_7->field_0x8;
      find_intersections(this,local_498[0],local_488,local_478,uVar33 - 1,param_5 + 1,local_490,
                         &local_418,param_8,local_480);
    }
    uVar33 = *(int *)(*(longlong *)
                       ((local_488->IndexList).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar26 + 1 >> 9) * 8) + (ulonglong)(uVar26 + 1 & 0x1ff) * 4) - 1;
    GetBox(local_488,(TAxisAlignedBox3<double> *)&local_368._s_0,uVar33,local_478);
    if (dVar5 <= local_368._s_0.X) {
      return;
    }
    if (local_350 <= dVar16) {
      return;
    }
    if (dVar6 <= local_368._s_0.Y) {
      return;
    }
    if (local_348 <= dVar17) {
      return;
    }
    if (dVar7 <= local_368._s_0.Z) {
      return;
    }
    if (local_340 <= dVar18) {
      return;
    }
    local_408._0_8_ = *(undefined8 *)param_7;
    pTVar37 = &local_408;
    local_408._8_8_ = *(undefined8 *)&param_7->field_0x8;
  }
  find_intersections(this,iVar29,local_488,local_478,uVar33,param_5 + 1,pFVar36,pTVar37,param_8,
                     local_480);
  return;
}

// find_nearest_triangles @ 1495f17f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::find_nearest_triangles
          (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,int param_1,
          TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
          *param_2,TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)>
                   *param_3,int param_4,int param_5,double *param_6,FIndex2i *param_7,
          FQueryOptions *param_8,FQueryOptions *param_9)

{
  undefined1 *puVar1;
  double *pdVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  longlong lVar8;
  longlong lVar9;
  TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_> *pTVar10;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar11;
  FScriptContainerElement *pFVar12;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  FIndex2i_u_0 FVar18;
  char cVar19;
  bool bVar20;
  uint uVar21;
  undefined8 uVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong *plVar25;
  longlong *plVar26;
  int iVar27;
  ulonglong uVar28;
  uint uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auStackY_488 [32];
  ulonglong local_410;
  int local_408 [2];
  uint local_400;
  uint local_3f8 [2];
  int local_3f0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_3e8;
  longlong local_3e0;
  FScriptContainerElement *local_3d8;
  uint local_3d0;
  int iStack_3cc;
  ulonglong local_3c8;
  ulonglong local_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  TVector<double>_u_0 local_3a0;
  double local_388;
  double local_380;
  double local_378;
  TVector<double>_u_0 local_370;
  double local_358;
  double local_350;
  double local_348;
  TVector<double>_u_0 local_340;
  double local_328;
  double local_320;
  double local_318;
  TVector<double>_u_0 local_310;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double dStack_2d8;
  double local_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  double local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double dStack_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 TStack_230;
  TVector<double>_u_0 local_218;
  TDistTriangle3Triangle3<double> local_1f8;
  ulonglong local_f8;
  
  dVar14 = __real_3fd0000000000000;
  uVar6 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar29 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_488;
  iVar27 = param_5 + 1;
LAB_1495f18d0:
  do {
    while( true ) {
      dVar36 = __real_bff0000000000000;
      uVar28 = (ulonglong)(param_1 & 0x1ff);
      uVar24 = (ulonglong)((uint)param_1 >> 9);
      uVar5 = *(uint *)(*(longlong *)((this->BoxToIndex).Blocks.AllocatorInstance.Data + uVar24 * 8)
                       + uVar28 * 4);
      uVar23 = *(uint *)(*(longlong *)
                          ((param_2->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)((uint)param_4 >> 9) * 8) + (ulonglong)(param_4 & 0x1ff) * 4);
      if ((int)uVar5 < this->TrianglesEnd) break;
      if (((param_5 & 1U) == 0) && (param_2->TrianglesEnd <= (int)uVar23)) goto LAB_1495f1b37;
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_3a0._s_0,param_4,param_3);
      pFVar3 = (this->IndexList).Blocks.AllocatorInstance.Data;
      uVar23 = *(uint *)(*(longlong *)(pFVar3 + (ulonglong)(uVar5 >> 9) * 8) +
                        (ulonglong)(uVar5 & 0x1ff) * 4);
      if ((int)uVar23 < 0) {
        dStack_3b0 = this->BoxEps;
        param_1 = ~uVar23;
        uVar24 = (ulonglong)(param_1 & 0x1ff);
        lVar8 = *(longlong *)
                 ((this->BoxCenters).Blocks.AllocatorInstance.Data +
                 (ulonglong)((uint)param_1 >> 9) * 8);
        dVar36 = *(double *)(lVar8 + uVar24 * 0x18);
        dVar34 = *(double *)(lVar8 + 8 + uVar24 * 0x18);
        lVar9 = *(longlong *)
                 ((this->BoxExtents).Blocks.AllocatorInstance.Data +
                 (ulonglong)((uint)param_1 >> 9) * 8);
        dVar4 = *(double *)(lVar8 + 0x10 + uVar24 * 0x18);
        pdVar2 = (double *)(lVar9 + uVar24 * 0x18);
        local_3a8 = *(double *)(lVar9 + 0x10 + uVar24 * 0x18) + dStack_3b0;
        local_3b8 = *pdVar2 + dStack_3b0;
        dStack_3b0 = pdVar2[1] + dStack_3b0;
        dVar16 = dVar4 - local_3a8;
        dVar4 = dVar4 + local_3a8;
        dVar33 = dVar36 - local_3b8;
        dVar32 = dVar34 - dStack_3b0;
        dVar34 = dVar34 + dStack_3b0;
        dVar36 = dVar36 + local_3b8;
        dVar35 = (local_3a0._s_0.X + local_388) - (dVar36 + dVar33);
        dVar36 = (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) & uVar6,SUB84(dVar35,0) & uVar29
                                 ) - ((local_388 - local_3a0._s_0.X) + (dVar36 - dVar33));
        if (dVar36 <= 0.0) {
          dVar36 = 0.0;
        }
        dVar33 = (local_3a0._s_0.Y + local_380) - (dVar34 + dVar32);
        dVar34 = (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & uVar6,SUB84(dVar33,0) & uVar29
                                 ) - ((local_380 - local_3a0._s_0.Y) + (dVar34 - dVar32));
        if (dVar34 <= 0.0) {
          dVar34 = 0.0;
        }
        dVar33 = (local_3a0._s_0.Z + local_378) - (dVar4 + dVar16);
        dVar4 = (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & uVar6,SUB84(dVar33,0) & uVar29)
                - ((local_378 - local_3a0._s_0.Z) + (dVar4 - dVar16));
        if (dVar4 <= 0.0) {
          dVar4 = 0.0;
        }
        bVar20 = (dVar34 * dVar34 + dVar36 * dVar36 + dVar4 * dVar4) * dVar14 < *param_6;
        goto LAB_1495f2127;
      }
      uVar23 = uVar23 - 1;
      param_1 = *(int *)(*(longlong *)(pFVar3 + (ulonglong)(uVar5 + 1 >> 9) * 8) +
                        (ulonglong)(uVar5 + 1 & 0x1ff) * 4) - 1;
      dVar36 = box_box_distsqr(this,uVar23,(TAxisAlignedBox3<double> *)&local_3a0._s_0);
      dVar34 = box_box_distsqr(this,param_1,(TAxisAlignedBox3<double> *)&local_3a0._s_0);
      if (dVar34 < dVar36) {
        if (dVar34 < *param_6) {
          find_nearest_triangles
                    (this,param_1,param_2,param_3,param_4,iVar27,param_6,param_7,param_8,param_9);
        }
        bVar20 = dVar36 < *param_6;
        param_1 = uVar23;
        goto LAB_1495f2127;
      }
      if (dVar36 < *param_6) {
        find_nearest_triangles
                  (this,uVar23,param_2,param_3,param_4,iVar27,param_6,param_7,param_8,param_9);
      }
      if (*param_6 <= dVar34) {
        return;
      }
      param_5 = param_5 + 1;
      iVar27 = iVar27 + 1;
    }
    if ((int)uVar23 < param_2->TrianglesEnd) {
      local_400 = *(uint *)(*(longlong *)
                             ((this->IndexList).Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar5 >> 9) * 8) + (ulonglong)(uVar5 & 0x1ff) * 4);
      uVar29 = *(uint *)(*(longlong *)
                          ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar23 >> 9) * 8) + (ulonglong)(uVar23 & 0x1ff) * 4);
      local_410 = (ulonglong)uVar29;
      local_1f8.DistanceSquared = __real_bff0000000000000;
      if ((int)uVar29 < 1) {
        return;
      }
      break;
    }
LAB_1495f1b37:
    lVar8 = *(longlong *)((this->BoxCenters).Blocks.AllocatorInstance.Data + uVar24 * 8);
    dVar36 = *(double *)(lVar8 + uVar28 * 0x18);
    lVar9 = *(longlong *)((this->BoxExtents).Blocks.AllocatorInstance.Data + uVar24 * 8);
    dVar34 = *(double *)(lVar8 + 8 + uVar28 * 0x18);
    dVar4 = *(double *)(lVar8 + 0x10 + uVar28 * 0x18);
    pFVar3 = (param_2->IndexList).Blocks.AllocatorInstance.Data;
    dVar33 = dVar36 - *(double *)(lVar9 + uVar28 * 0x18);
    dVar32 = dVar34 - *(double *)(lVar9 + 8 + uVar28 * 0x18);
    dVar35 = dVar4 - *(double *)(lVar9 + 0x10 + uVar28 * 0x18);
    dVar36 = dVar36 + *(double *)(lVar9 + uVar28 * 0x18);
    dVar34 = dVar34 + *(double *)(lVar9 + 8 + uVar28 * 0x18);
    dVar4 = dVar4 + *(double *)(lVar9 + 0x10 + uVar28 * 0x18);
    dVar16 = dVar36 - dVar33;
    dVar36 = dVar36 + dVar33;
    dVar33 = dVar34 + dVar32;
    dVar34 = dVar34 - dVar32;
    dVar32 = dVar4 + dVar35;
    dVar4 = dVar4 - dVar35;
    uVar5 = *(uint *)(*(longlong *)(pFVar3 + (ulonglong)(uVar23 >> 9) * 8) +
                     (ulonglong)(uVar23 & 0x1ff) * 4);
    if ((int)uVar5 < 0) {
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_370._s_0,~uVar5,param_3);
      dVar36 = dVar36 - (local_370._s_0.X + local_358);
      dVar36 = (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) & uVar6,SUB84(dVar36,0) & uVar29)
               - ((local_358 - local_370._s_0.X) + dVar16);
      if (dVar36 <= 0.0) {
        dVar36 = 0.0;
      }
      dVar33 = dVar33 - (local_370._s_0.Y + local_350);
      dVar34 = (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & uVar6,SUB84(dVar33,0) & uVar29)
               - ((local_350 - local_370._s_0.Y) + dVar34);
      if (dVar34 <= 0.0) {
        dVar34 = 0.0;
      }
      dVar32 = dVar32 - (local_370._s_0.Z + local_348);
      dVar4 = (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) & uVar6,SUB84(dVar32,0) & uVar29) -
              ((local_348 - local_370._s_0.Z) + dVar4);
      if (dVar4 <= 0.0) {
        dVar4 = 0.0;
      }
      bVar20 = (dVar34 * dVar34 + dVar36 * dVar36 + dVar4 * dVar4) * dVar14 < *param_6;
      param_4 = ~uVar5;
    }
    else {
      uVar5 = uVar5 - 1;
      param_4 = *(int *)(*(longlong *)(pFVar3 + (ulonglong)(uVar23 + 1 >> 9) * 8) +
                        (ulonglong)(uVar23 + 1 & 0x1ff) * 4) - 1;
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_340._s_0,uVar5,param_3);
      GetBox(param_2,(TAxisAlignedBox3<double> *)&local_310._s_0,param_4,param_3);
      dVar35 = dVar36 - (local_340._s_0.X + local_328);
      dVar35 = (double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) & uVar6,SUB84(dVar35,0) & uVar29)
               - ((local_328 - local_340._s_0.X) + dVar16);
      if (dVar35 <= 0.0) {
        dVar35 = 0.0;
      }
      dVar17 = dVar33 - (local_340._s_0.Y + local_320);
      dVar17 = (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & uVar6,SUB84(dVar17,0) & uVar29)
               - ((local_320 - local_340._s_0.Y) + dVar34);
      if (dVar17 <= 0.0) {
        dVar17 = 0.0;
      }
      dVar15 = dVar32 - (local_340._s_0.Z + local_318);
      dVar15 = (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar6,SUB84(dVar15,0) & uVar29)
               - ((local_318 - local_340._s_0.Z) + dVar4);
      if (dVar15 <= 0.0) {
        dVar15 = 0.0;
      }
      dVar36 = dVar36 - (local_310._s_0.X + local_2f8);
      dVar36 = (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) & uVar6,SUB84(dVar36,0) & uVar29)
               - ((local_2f8 - local_310._s_0.X) + dVar16);
      if (dVar36 <= 0.0) {
        dVar36 = 0.0;
      }
      dVar33 = dVar33 - (local_310._s_0.Y + local_2f0);
      dVar16 = (dVar17 * dVar17 + dVar35 * dVar35 + dVar15 * dVar15) * dVar14;
      dVar34 = (double)CONCAT44((uint)((ulonglong)dVar33 >> 0x20) & uVar6,SUB84(dVar33,0) & uVar29)
               - ((local_2f0 - local_310._s_0.Y) + dVar34);
      if (dVar34 <= 0.0) {
        dVar34 = 0.0;
      }
      dVar32 = dVar32 - (local_310._s_0.Z + local_2e8);
      dVar4 = (double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) & uVar6,SUB84(dVar32,0) & uVar29) -
              ((local_2e8 - local_310._s_0.Z) + dVar4);
      if (dVar4 <= 0.0) {
        dVar4 = 0.0;
      }
      dVar36 = (dVar34 * dVar34 + dVar36 * dVar36 + dVar4 * dVar4) * dVar14;
      if (dVar16 <= dVar36) {
        if (dVar16 < *param_6) {
          find_nearest_triangles
                    (this,param_1,param_2,param_3,uVar5,iVar27,param_6,param_7,param_8,param_9);
        }
        if (*param_6 <= dVar36) {
          return;
        }
        param_5 = param_5 + 1;
        iVar27 = iVar27 + 1;
        goto LAB_1495f18d0;
      }
      if (dVar36 < *param_6) {
        find_nearest_triangles
                  (this,param_1,param_2,param_3,param_4,iVar27,param_6,param_7,param_8,param_9);
      }
      bVar20 = dVar16 < *param_6;
      param_4 = uVar5;
    }
LAB_1495f2127:
    if (!bVar20) {
      return;
    }
    param_5 = param_5 + 1;
    iVar27 = iVar27 + 1;
  } while( true );
LAB_1495f19a0:
  uVar23 = uVar23 + 1;
  local_3c0 = (ulonglong)uVar23;
  iVar27 = *(int *)(*(longlong *)
                     ((param_2->IndexList).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar23 >> 9) * 8) + (ulonglong)(uVar23 & 0x1ff) * 4);
  local_3f0 = iVar27;
  if (*(void **)&param_9->TriangleFilterF == (void *)0x0) {
LAB_1495f19fd:
    TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>::
    GetTriVertices(param_2->Mesh,iVar27,(TVector<double> *)&local_248._s_0,
                   (TVector<double> *)&TStack_230._s_0,(TVector<double> *)&local_218._s_0);
    if (*(void **)param_3 == (void *)0x0) {
      uVar30 = SUB84(local_218._s_0.Z,0);
      uVar31 = (undefined4)((ulonglong)local_218._16_8_ >> 0x20);
    }
    else {
      Core::Private::Function::CheckCallable(*(void **)param_3);
      puVar1 = &param_3->field_0x10;
      pcVar7 = *(code **)param_3;
      plVar25 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar25 = (longlong *)puVar1;
      }
      uVar22 = (**(code **)(*plVar25 + 8))();
      (*pcVar7)(&local_2e0,uVar22,&local_248);
      local_248._s_0.X = local_2e0;
      local_248._s_0.Y = dStack_2d8;
      local_248._s_0.Z = local_2d0;
      Core::Private::Function::CheckCallable(*(void **)param_3);
      pcVar7 = *(code **)param_3;
      plVar25 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar25 = (longlong *)puVar1;
      }
      uVar22 = (**(code **)(*plVar25 + 8))();
      (*pcVar7)(&local_2c8,uVar22,&TStack_230);
      TStack_230._s_0.X = local_2c8;
      TStack_230._s_0.Y = dStack_2c0;
      TStack_230._s_0.Z = local_2b8;
      Core::Private::Function::CheckCallable(*(void **)param_3);
      pcVar7 = *(code **)param_3;
      plVar25 = *(longlong **)&param_3->field_0x28;
      if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
        plVar25 = (longlong *)puVar1;
      }
      uVar22 = (**(code **)(*plVar25 + 8))();
      (*pcVar7)(&local_2b0,uVar22,&local_218);
      uVar30 = SUB84(local_2a0,0);
      uVar31 = (undefined4)((ulonglong)local_2a0 >> 0x20);
      local_218._0_4_ = local_2b0;
      local_218._4_4_ = uStack_2ac;
      local_218._8_4_ = uStack_2a8;
      local_218._12_4_ = uStack_2a4;
      local_218._16_8_ = local_2a0;
    }
    local_1f8.DistanceSquared = dVar36;
    local_1f8.Triangle[0].V[2].field0_0x0._s_0.Z = (double)CONCAT44(uVar31,uVar30);
    local_1f8.Triangle[0].V[0].field0_0x0._s_0.X = local_248._s_0.X;
    local_1f8.Triangle[0].V[0].field0_0x0._s_0.Y = local_248._s_0.Y;
    local_1f8.Triangle[0].V[1].field0_0x0._s_0.Y = TStack_230._s_0.Y;
    local_1f8.Triangle[0].V[1].field0_0x0._s_0.Z = TStack_230._s_0.Z;
    local_1f8.Triangle[0].V[0].field0_0x0._s_0.Z = local_248._s_0.Z;
    local_1f8.Triangle[0].V[1].field0_0x0._s_0.X = TStack_230._s_0.X;
    uVar29 = uVar5;
    uVar24 = (ulonglong)local_400;
    local_1f8.Triangle[0].V[2].field0_0x0._0_4_ = local_218._0_4_;
    local_1f8.Triangle[0].V[2].field0_0x0._4_4_ = local_218._4_4_;
    local_1f8.Triangle[0].V[2].field0_0x0._8_4_ = local_218._8_4_;
    local_1f8.Triangle[0].V[2].field0_0x0._12_4_ = local_218._12_4_;
    if (0 < (int)local_400) {
      do {
        local_3c8 = uVar24;
        uVar29 = uVar29 + 1;
        uVar6 = *(uint *)(*(longlong *)
                           ((this->IndexList).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar29 >> 9) * 8) + (ulonglong)(uVar29 & 0x1ff) * 4);
        if (*(void **)&param_8->TriangleFilterF == (void *)0x0) {
LAB_1495f226a:
          pTVar10 = this->Mesh;
          pTVar11 = pTVar10->SourceTriangles;
          uVar23 = 0;
          if ((int)uVar6 < pTVar11->ArrayNum) {
            uVar23 = ~uVar6 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_3d8 = (pTVar11->AllocatorInstance).Data;
          local_3e0 = (longlong)(int)uVar6 * 3;
          local_3e8 = pTVar10->SourceVertices;
          uVar23 = *(uint *)(local_3d8 + (longlong)(int)uVar6 * 0xc);
          uVar21 = 0;
          if ((int)uVar23 < local_3e8->ArrayNum) {
            uVar21 = ~uVar23 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar12 = (local_3e8->AllocatorInstance).Data;
          pFVar3 = pFVar12 + (longlong)(int)uVar23 * 0x18;
          local_298 = *(double *)pFVar3;
          dStack_290 = *(double *)(pFVar3 + 8);
          local_288 = *(double *)(pFVar12 + (longlong)(int)uVar23 * 0x18 + 0x10);
          local_3e8 = pTVar10->SourceVertices;
          uVar23 = *(uint *)(local_3d8 + local_3e0 * 4 + 4);
          uVar21 = 0;
          if ((int)uVar23 < local_3e8->ArrayNum) {
            uVar21 = ~uVar23 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pTVar13 = pTVar10->SourceVertices;
          pFVar12 = (local_3e8->AllocatorInstance).Data;
          pFVar3 = pFVar12 + (longlong)(int)uVar23 * 0x18;
          dStack_280 = *(double *)pFVar3;
          dStack_278 = *(double *)(pFVar3 + 8);
          dStack_270 = *(double *)(pFVar12 + (longlong)(int)uVar23 * 0x18 + 0x10);
          uVar23 = *(uint *)(local_3d8 + local_3e0 * 4 + 8);
          uVar21 = 0;
          if ((int)uVar23 < pTVar13->ArrayNum) {
            uVar21 = ~uVar23 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar20)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar12 = (pTVar13->AllocatorInstance).Data;
          pFVar3 = pFVar12 + (longlong)(int)uVar23 * 0x18;
          local_268 = *(double *)pFVar3;
          dStack_260 = *(double *)(pFVar3 + 8);
          local_258 = *(double *)(pFVar12 + (longlong)(int)uVar23 * 0x18 + 0x10);
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.X = local_298;
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.Y = dStack_290;
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.Y = dStack_278;
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.Z = dStack_270;
          local_1f8.DistanceSquared = dVar36;
          local_1f8.Triangle[1].V[0].field0_0x0._s_0.Z = local_288;
          local_1f8.Triangle[1].V[1].field0_0x0._s_0.X = dStack_280;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.X = local_268;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.Y = dStack_260;
          local_1f8.Triangle[1].V[2].field0_0x0._s_0.Z = local_258;
          dVar14 = TDistTriangle3Triangle3<double>::ComputeResult(&local_1f8);
          if (dVar14 < *param_6) {
            iStack_3cc = local_3f0;
            FVar18._s_0.B = local_3f0;
            FVar18._s_0.A = uVar6;
            *param_6 = dVar14;
            param_7->field0_0x0 = FVar18;
            local_3d0 = uVar6;
          }
        }
        else {
          local_3f8[0] = uVar6;
          Core::Private::Function::CheckCallable(*(void **)&param_8->TriangleFilterF);
          plVar25 = *(longlong **)&(param_8->TriangleFilterF).field_0x28;
          pcVar7 = *(code **)&param_8->TriangleFilterF;
          plVar26 = (longlong *)&(param_8->TriangleFilterF).field_0x10;
          if (plVar25 != (longlong *)0x0) {
            plVar26 = plVar25;
          }
          uVar22 = (**(code **)(*plVar26 + 8))();
          cVar19 = (*pcVar7)(uVar22,local_3f8);
          if (cVar19 != '\0') goto LAB_1495f226a;
        }
        uVar24 = local_3c8 - 1;
      } while (local_3c8 - 1 != 0);
      local_3c8 = 0;
    }
  }
  else {
    local_408[0] = iVar27;
    Core::Private::Function::CheckCallable(*(void **)&param_9->TriangleFilterF);
    plVar25 = *(longlong **)&(param_9->TriangleFilterF).field_0x28;
    pcVar7 = *(code **)&param_9->TriangleFilterF;
    plVar26 = (longlong *)&(param_9->TriangleFilterF).field_0x10;
    if (plVar25 != (longlong *)0x0) {
      plVar26 = plVar25;
    }
    uVar22 = (**(code **)(*plVar26 + 8))();
    cVar19 = (*pcVar7)(uVar22,local_408);
    if (cVar19 != '\0') goto LAB_1495f19fd;
  }
  uVar23 = (uint)local_3c0;
  local_410 = local_410 - 1;
  if (local_410 == 0) {
    return;
  }
  goto LAB_1495f19a0;
}

// find_nearest_vertex @ 1495f2560

void __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::find_nearest_vertex
          (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,int param_1,TVector<double> *param_2,double *param_3,int *param_4,
          FQueryOptions *param_5)

{
  TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_> **ppTVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  uint local_res10 [2];
  ulonglong local_88;
  
  uVar16 = *(uint *)(*(longlong *)
                      ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 4);
  if (this->TrianglesEnd <= (int)uVar16) {
    do {
      pFVar3 = (this->IndexList).Blocks.AllocatorInstance.Data;
      uVar15 = *(uint *)(*(longlong *)(pFVar3 + (ulonglong)(uVar16 >> 9) * 8) +
                        (ulonglong)(uVar16 & 0x1ff) * 4);
      if ((int)uVar15 < 0) {
        uVar15 = ~uVar15;
        dVar18 = BoxDistanceSqr(this,uVar15,param_2);
        if (*param_3 <= dVar18 && dVar18 != *param_3) {
          return;
        }
      }
      else {
        uVar11 = uVar15 - 1;
        uVar15 = *(int *)(*(longlong *)(pFVar3 + (ulonglong)(uVar16 + 1 >> 9) * 8) +
                         (ulonglong)(uVar16 + 1 & 0x1ff) * 4) - 1;
        dVar18 = BoxDistanceSqr(this,uVar11,param_2);
        dVar19 = BoxDistanceSqr(this,uVar15,param_2);
        if (dVar19 <= dVar18) {
          if (*param_3 <= dVar19) {
            return;
          }
          find_nearest_vertex(this,uVar15,param_2,param_3,param_4,param_5);
          uVar15 = uVar11;
          if (*param_3 <= dVar18) {
            return;
          }
        }
        else {
          if (*param_3 <= dVar18) {
            return;
          }
          find_nearest_vertex(this,uVar11,param_2,param_3,param_4,param_5);
          if (*param_3 <= dVar19) {
            return;
          }
        }
      }
      uVar16 = *(uint *)(*(longlong *)
                          ((this->BoxToIndex).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar15 >> 9) * 8) + (ulonglong)(uVar15 & 0x1ff) * 4);
    } while (this->TrianglesEnd <= (int)uVar16);
  }
  uVar15 = *(uint *)(*(longlong *)
                      ((this->IndexList).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar16 >> 9) * 8) + (ulonglong)(uVar16 & 0x1ff) * 4);
  local_88 = (ulonglong)uVar15;
  if (0 < (int)uVar15) {
    do {
      uVar16 = uVar16 + 1;
      uVar15 = *(uint *)(*(longlong *)
                          ((this->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar16 >> 9) * 8) + (ulonglong)(uVar16 & 0x1ff) * 4);
      lVar17 = (longlong)(int)uVar15;
      if (*(void **)&param_5->TriangleFilterF == (void *)0x0) {
LAB_1495f278b:
        ppTVar1 = &this->Mesh;
        pTVar6 = this->Mesh->SourceTriangles;
        uVar11 = 0;
        if ((int)uVar15 < pTVar6->ArrayNum) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (pTVar6->AllocatorInstance).Data;
        uVar15 = *(uint *)(pFVar3 + lVar17 * 0xc);
        uVar11 = *(uint *)(pFVar3 + lVar17 * 0xc + 4);
        uVar2 = *(uint *)(pFVar3 + lVar17 * 0xc + 8);
        pTVar7 = (*ppTVar1)->SourceVertices;
        uVar12 = 0;
        if ((int)uVar15 < pTVar7->ArrayNum) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar8 = (pTVar7->AllocatorInstance).Data;
        pFVar3 = pFVar8 + (longlong)(int)uVar15 * 0x18;
        dVar20 = (param_2->field0_0x0)._s_0.X - *(double *)pFVar3;
        dVar19 = (param_2->field0_0x0)._s_0.Y - *(double *)(pFVar3 + 8);
        dVar18 = (param_2->field0_0x0)._s_0.Z -
                 *(double *)(pFVar8 + (longlong)(int)uVar15 * 0x18 + 0x10);
        dVar18 = dVar20 * dVar20 + dVar19 * dVar19 + dVar18 * dVar18;
        if (dVar18 < *param_3) {
          *param_3 = dVar18;
          *param_4 = uVar15;
        }
        pTVar7 = (*ppTVar1)->SourceVertices;
        uVar15 = 0;
        if ((int)uVar11 < pTVar7->ArrayNum) {
          uVar15 = ~uVar11 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar8 = (pTVar7->AllocatorInstance).Data;
        pFVar3 = pFVar8 + (longlong)(int)uVar11 * 0x18;
        dVar20 = (param_2->field0_0x0)._s_0.X - *(double *)pFVar3;
        dVar18 = (param_2->field0_0x0)._s_0.Z -
                 *(double *)(pFVar8 + (longlong)(int)uVar11 * 0x18 + 0x10);
        dVar19 = (param_2->field0_0x0)._s_0.Y - *(double *)(pFVar3 + 8);
        dVar18 = dVar20 * dVar20 + dVar19 * dVar19 + dVar18 * dVar18;
        if (dVar18 < *param_3) {
          *param_3 = dVar18;
          *param_4 = uVar11;
        }
        pTVar7 = (*ppTVar1)->SourceVertices;
        uVar15 = 0;
        if ((int)uVar2 < pTVar7->ArrayNum) {
          uVar15 = ~uVar2 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar8 = (pTVar7->AllocatorInstance).Data;
        pFVar3 = pFVar8 + (longlong)(int)uVar2 * 0x18;
        dVar20 = (param_2->field0_0x0)._s_0.X - *(double *)pFVar3;
        dVar18 = (param_2->field0_0x0)._s_0.Z -
                 *(double *)(pFVar8 + (longlong)(int)uVar2 * 0x18 + 0x10);
        dVar19 = (param_2->field0_0x0)._s_0.Y - *(double *)(pFVar3 + 8);
        dVar18 = dVar20 * dVar20 + dVar19 * dVar19 + dVar18 * dVar18;
        if (dVar18 < *param_3) {
          *param_3 = dVar18;
          *param_4 = uVar2;
        }
      }
      else {
        local_res10[0] = uVar15;
        Core::Private::Function::CheckCallable(*(void **)&param_5->TriangleFilterF);
        plVar4 = *(longlong **)&(param_5->TriangleFilterF).field_0x28;
        pcVar5 = *(code **)&param_5->TriangleFilterF;
        plVar14 = (longlong *)&(param_5->TriangleFilterF).field_0x10;
        if (plVar4 != (longlong *)0x0) {
          plVar14 = plVar4;
        }
        uVar13 = (**(code **)(*plVar14 + 8))();
        cVar9 = (*pcVar5)(uVar13,local_res10);
        if (cVar9 != '\0') goto LAB_1495f278b;
      }
      local_88 = local_88 - 1;
    } while (local_88 != 0);
  }
  return;
}

// find_self_intersections @ 1495f3460

bool __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::find_self_intersections
          (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,FIntersectionsQueryResult *param_1,bool param_2,
          TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_3,
          FQueryOptions *param_4)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_38;
  
  bVar2 = false;
  uVar4 = 0;
  if (0 < this->TrianglesEnd) {
    do {
      uVar3 = uVar4 + 1 +
              *(int *)(*(longlong *)
                        ((this->IndexList).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar4 >> 9) * 8) + (ulonglong)(uVar4 & 0x1ff) * 4);
      for (iVar5 = uVar4 + 2; iVar5 < (int)uVar3; iVar5 = iVar5 + 1) {
        uVar4 = uVar4 + 1;
        local_38._0_8_ = *(undefined8 *)param_3;
        local_38._8_8_ = *(undefined8 *)&param_3->field_0x8;
        bVar1 = find_tri_tri_intersections
                          (this,*(int *)(*(longlong *)
                                          ((this->IndexList).Blocks.AllocatorInstance.Data +
                                          (ulonglong)(uVar4 >> 9) * 8) +
                                        (ulonglong)(uVar4 & 0x1ff) * 4),iVar5,uVar3,param_1,param_2,
                           &local_38,param_4);
        if ((bVar1) || (bVar1 = bVar2 != false, bVar2 = false, bVar1)) {
          bVar2 = true;
        }
        if ((param_1 == (FIntersectionsQueryResult *)0x0) && (bVar2 != false)) {
          return bVar2;
        }
      }
      uVar4 = uVar3;
    } while ((int)uVar3 < this->TrianglesEnd);
  }
  local_38._0_8_ = *(undefined8 *)param_3;
  local_38._8_8_ = *(undefined8 *)&param_3->field_0x8;
  bVar1 = find_self_intersections_acrossboxes
                    (this,this->RootIndex,-1,param_1,param_2,0,&local_38,param_4);
  if ((bVar1) || (bVar1 = false, bVar2 != false)) {
    bVar1 = true;
  }
  return bVar1;
}

// find_self_intersections_acrossboxes @ 1495f35f0

bool __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::find_self_intersections_acrossboxes
          (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,int param_1,int param_2,FIntersectionsQueryResult *param_3,bool param_4,int param_5
          ,TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_6,
          FQueryOptions *param_7)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_88;
  TVector<double>_u_0 local_78;
  double local_60;
  double local_58;
  double local_50;
  
  bVar6 = false;
  if (param_1 < 0) {
    return false;
  }
  pFVar2 = (this->BoxToIndex).Blocks.AllocatorInstance.Data;
  uVar7 = *(uint *)(*(longlong *)(pFVar2 + (ulonglong)((uint)param_1 >> 9) * 8) +
                   (ulonglong)(param_1 & 0x1ff) * 4);
  uVar9 = (ulonglong)uVar7;
  if (param_2 < 0) {
    uVar13 = 0xffffffff;
  }
  else {
    uVar13 = *(uint *)(*(longlong *)(pFVar2 + (ulonglong)((uint)param_2 >> 9) * 8) +
                      (ulonglong)(param_2 & 0x1ff) * 4);
  }
  iVar12 = this->TrianglesEnd;
  if ((int)uVar7 < iVar12) {
    if ((int)uVar13 < iVar12) {
      if (param_2 == -1) {
        return false;
      }
      uVar11 = uVar7 + 1;
      iVar12 = *(int *)(*(longlong *)
                         ((this->IndexList).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar7 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4) + 1 + uVar7;
      if ((int)uVar11 < iVar12) {
        while( true ) {
          local_88._0_8_ = *(undefined8 *)param_6;
          pFVar2 = (this->IndexList).Blocks.AllocatorInstance.Data;
          local_88._8_8_ = *(undefined8 *)&param_6->field_0x8;
          bVar5 = find_tri_tri_intersections
                            (this,*(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar11 >> 9) * 8) +
                                          (ulonglong)(uVar11 & 0x1ff) * 4),uVar13 + 1,
                             *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar13 >> 9) * 8) +
                                     (ulonglong)(uVar13 & 0x1ff) * 4) + 1 + uVar13,param_3,param_4,
                             &local_88,param_7);
          if ((bVar5) || (bVar6 != false)) {
            bVar6 = true;
          }
          if ((param_3 == (FIntersectionsQueryResult *)0x0) && (bVar6 != false)) break;
          uVar11 = uVar11 + 1;
          if (iVar12 <= (int)uVar11) {
            return bVar6;
          }
        }
        return true;
      }
      return false;
    }
LAB_1495f37a5:
    uVar9 = (ulonglong)uVar13;
    param_2 = param_1;
  }
  else if (iVar12 <= (int)uVar13) {
    uVar7 = param_5 & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    if (uVar7 == 1) goto LAB_1495f37a5;
  }
  uVar7 = (uint)uVar9;
  if (param_2 < 0) {
    pFVar2 = (this->IndexList).Blocks.AllocatorInstance.Data;
    iVar12 = param_5 + 1;
    uVar13 = *(uint *)(*(longlong *)(pFVar2 + (uVar9 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4);
    if (-1 < (int)uVar13) {
      iVar10 = uVar13 - 1;
      iVar1 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                      (ulonglong)(uVar7 + 1 & 0x1ff) * 4);
      uVar7 = iVar1 - 1;
      local_88._0_8_ = *(undefined8 *)param_6;
      local_88._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar6 = find_self_intersections_acrossboxes
                        (this,iVar10,-1,param_3,param_4,iVar12,&local_88,param_7);
      if ((param_3 == (FIntersectionsQueryResult *)0x0) && (bVar6)) {
        return true;
      }
      local_88._0_8_ = *(undefined8 *)param_6;
      local_88._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar5 = find_self_intersections_acrossboxes
                        (this,uVar7,-1,param_3,param_4,iVar12,&local_88,param_7);
      if ((bVar5) || (bVar5 = false, bVar6)) {
        bVar5 = true;
      }
      if ((param_3 == (FIntersectionsQueryResult *)0x0) && (bVar5 != false)) {
        return true;
      }
      uVar9 = (ulonglong)(iVar1 - 1U & 0x1ff);
      lVar3 = *(longlong *)
               ((this->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)(uVar7 >> 9) * 8);
      local_60 = *(double *)(lVar3 + uVar9 * 0x18);
      lVar4 = *(longlong *)
               ((this->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)(uVar7 >> 9) * 8);
      local_58 = *(double *)(lVar3 + 8 + uVar9 * 0x18);
      local_50 = *(double *)(lVar3 + 0x10 + uVar9 * 0x18);
      local_78._s_0.X = local_60 - *(double *)(lVar4 + uVar9 * 0x18);
      local_78._s_0.Y = local_58 - *(double *)(lVar4 + 8 + uVar9 * 0x18);
      local_60 = local_60 + *(double *)(lVar4 + uVar9 * 0x18);
      local_58 = local_58 + *(double *)(lVar4 + 8 + uVar9 * 0x18);
      local_78._s_0.Z = local_50 - *(double *)(lVar4 + 0x10 + uVar9 * 0x18);
      local_50 = local_50 + *(double *)(lVar4 + 0x10 + uVar9 * 0x18);
      bVar6 = box_box_intersect(this,iVar10,(TAxisAlignedBox3<double> *)&local_78._s_0);
      if (!bVar6) {
        return bVar5;
      }
      local_88._0_8_ = *(undefined8 *)param_6;
      local_88._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar6 = find_self_intersections_acrossboxes
                        (this,iVar10,uVar7,param_3,param_4,iVar12,&local_88,param_7);
      if ((bVar6) || (bVar6 = false, bVar5 != false)) {
        bVar6 = true;
      }
      if (param_3 == (FIntersectionsQueryResult *)0x0) {
        if (bVar6 != false) {
          return true;
        }
        return false;
      }
      return bVar6;
    }
    local_88._0_8_ = *(undefined8 *)param_6;
    uVar13 = ~uVar13;
    param_2 = 0xffffffff;
    local_88._8_8_ = *(undefined8 *)&param_6->field_0x8;
  }
  else {
    uVar8 = (ulonglong)(param_2 & 0x1ff);
    lVar3 = *(longlong *)
             ((this->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_2 >> 9) * 8
             );
    local_60 = *(double *)(lVar3 + uVar8 * 0x18);
    lVar4 = *(longlong *)
             ((this->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_2 >> 9) * 8
             );
    local_58 = *(double *)(lVar3 + 8 + uVar8 * 0x18);
    local_50 = *(double *)(lVar3 + 0x10 + uVar8 * 0x18);
    pFVar2 = (this->IndexList).Blocks.AllocatorInstance.Data;
    local_78._s_0.X = local_60 - *(double *)(lVar4 + uVar8 * 0x18);
    local_78._s_0.Y = local_58 - *(double *)(lVar4 + 8 + uVar8 * 0x18);
    local_60 = local_60 + *(double *)(lVar4 + uVar8 * 0x18);
    local_58 = local_58 + *(double *)(lVar4 + 8 + uVar8 * 0x18);
    local_78._s_0.Z = local_50 - *(double *)(lVar4 + 0x10 + uVar8 * 0x18);
    local_50 = local_50 + *(double *)(lVar4 + 0x10 + uVar8 * 0x18);
    uVar13 = *(uint *)(*(longlong *)(pFVar2 + (uVar9 >> 9) * 8) + (ulonglong)(uVar7 & 0x1ff) * 4);
    if (-1 < (int)uVar13) {
      iVar12 = *(int *)(*(longlong *)(pFVar2 + (ulonglong)(uVar7 + 1 >> 9) * 8) +
                       (ulonglong)(uVar7 + 1 & 0x1ff) * 4) + -1;
      bVar5 = box_box_intersect(this,uVar13 - 1,(TAxisAlignedBox3<double> *)&local_78._s_0);
      if (bVar5) {
        local_88._0_8_ = *(undefined8 *)param_6;
        local_88._8_8_ = *(undefined8 *)&param_6->field_0x8;
        bVar6 = find_self_intersections_acrossboxes
                          (this,uVar13 - 1,param_2,param_3,param_4,param_5 + 1,&local_88,param_7);
        if ((param_3 == (FIntersectionsQueryResult *)0x0) && (bVar6)) {
          return true;
        }
      }
      bVar5 = box_box_intersect(this,iVar12,(TAxisAlignedBox3<double> *)&local_78._s_0);
      if (!bVar5) {
        return bVar6;
      }
      local_88._0_8_ = *(undefined8 *)param_6;
      local_88._8_8_ = *(undefined8 *)&param_6->field_0x8;
      bVar5 = find_self_intersections_acrossboxes
                        (this,iVar12,param_2,param_3,param_4,param_5 + 1,&local_88,param_7);
      if ((bVar5) || (bVar5 = false, bVar6 != false)) {
        bVar5 = true;
      }
      goto joined_r0x0001495f39a1;
    }
    uVar13 = ~uVar13;
    bVar6 = box_box_intersect(this,uVar13,(TAxisAlignedBox3<double> *)&local_78._s_0);
    if (!bVar6) {
      return false;
    }
    local_88._0_8_ = *(undefined8 *)param_6;
    local_88._8_8_ = *(undefined8 *)&param_6->field_0x8;
  }
  bVar5 = find_self_intersections_acrossboxes
                    (this,uVar13,param_2,param_3,param_4,param_5 + 1,&local_88,param_7);
joined_r0x0001495f39a1:
  if (param_3 != (FIntersectionsQueryResult *)0x0) {
    return bVar5;
  }
  if (bVar5 != false) {
    return true;
  }
  return false;
}

// find_tri_tri_intersections @ 1495f3c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::
TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
::find_tri_tri_intersections
          (TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
           *this,int param_1,int param_2,int param_3,FIntersectionsQueryResult *param_4,bool param_5
          ,TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *param_6,
          FQueryOptions *param_7)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_> *pTVar6;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  char cVar9;
  bool bVar10;
  undefined1 uVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  longlong lVar16;
  uint uVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStackY_2b8 [32];
  int local_288 [2];
  uint local_280 [2];
  int local_278;
  int local_274;
  TMeshAABBTree3<UE::Geometry::TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>_>
  *local_270;
  FQueryOptions *local_268;
  int local_260 [4];
  int local_250 [4];
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *local_240;
  FIntersectionsQueryResult *local_238;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  TVector<double>_u_0 local_1d8;
  TVector<double>_u_0 TStack_1c0;
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_188;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_240 = param_6;
  lVar20 = (longlong)param_1;
  local_238 = param_4;
  local_268 = param_7;
  local_278 = param_1;
  local_274 = param_3;
  local_270 = this;
  if (*(void **)&param_7->TriangleFilterF != (void *)0x0) {
    local_288[0] = param_1;
    Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
    plVar2 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
    pcVar3 = *(code **)&param_7->TriangleFilterF;
    plVar18 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar18 = plVar2;
    }
    uVar15 = (**(code **)(*plVar18 + 8))();
    cVar9 = (*pcVar3)(uVar15,local_288);
    if (cVar9 == '\0') {
      return false;
    }
  }
  cVar9 = '\0';
  TIndexVectorMeshArrayAdapter<UE::Geometry::FIndex3i,double,UE::Math::TVector<double>_>::
  GetTriVertices(this->Mesh,param_1,(TVector<double> *)&local_1d8._s_0,
                 (TVector<double> *)&TStack_1c0._s_0,(TVector<double> *)&local_1a8._s_0);
  local_f8 = __real_3e45798ee2308c3a;
  local_188._s_0.X = local_1d8._s_0.X;
  local_188._s_0.Y = local_1d8._s_0.Y;
  local_168 = TStack_1c0._s_0.Y;
  dStack_160 = TStack_1c0._s_0.Z;
  local_188._s_0.Z = local_1d8._s_0.Z;
  dStack_170 = TStack_1c0._s_0.X;
  local_e8 = 0;
  local_ec = 0;
  local_148 = local_1a8._s_0.Z;
  local_f0 = 0;
  local_158 = local_1a8._s_0.X;
  dStack_150 = local_1a8._s_0.Y;
  pTVar4 = this->Mesh->SourceTriangles;
  uVar17 = 0;
  if (param_1 < pTVar4->ArrayNum) {
    uVar17 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar3 = (code *)swi(3);
    uVar11 = (*pcVar3)();
    return (bool)uVar11;
  }
  pFVar5 = (pTVar4->AllocatorInstance).Data;
  local_260[0] = *(int *)(pFVar5 + lVar20 * 0xc);
  local_260[1] = *(undefined4 *)(pFVar5 + lVar20 * 0xc + 4);
  local_260[2] = *(undefined4 *)(pFVar5 + lVar20 * 0xc + 8);
  if (param_2 < param_3) {
    do {
      uVar17 = *(uint *)(*(longlong *)
                          ((this->IndexList).Blocks.AllocatorInstance.Data +
                          (ulonglong)((uint)param_2 >> 9) * 8) + (ulonglong)(param_2 & 0x1ff) * 4);
      lVar20 = (longlong)(int)uVar17;
      if (*(void **)&param_7->TriangleFilterF == (void *)0x0) {
LAB_1495f3e2d:
        pTVar4 = this->Mesh->SourceTriangles;
        uVar13 = 0;
        if ((int)uVar17 < pTVar4->ArrayNum) {
          uVar13 = ~uVar17 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          uVar11 = (*pcVar3)();
          return (bool)uVar11;
        }
        pFVar5 = (pTVar4->AllocatorInstance).Data;
        local_250[0] = *(int *)(pFVar5 + lVar20 * 0xc);
        local_250[1] = *(undefined4 *)(pFVar5 + lVar20 * 0xc + 4);
        local_250[2] = *(undefined4 *)(pFVar5 + lVar20 * 0xc + 8);
        if (param_5) {
          bVar10 = false;
          lVar19 = 0;
          do {
            if (bVar10) goto LAB_1495f40ea;
            lVar16 = 0;
            do {
              if (local_260[lVar19] == local_250[lVar16]) {
                bVar10 = true;
                break;
              }
              lVar16 = lVar16 + 1;
            } while (lVar16 < 3);
            lVar19 = lVar19 + 1;
          } while (lVar19 < 3);
          if (bVar10) goto LAB_1495f40ea;
        }
        pTVar6 = this->Mesh;
        pTVar4 = pTVar6->SourceTriangles;
        uVar13 = 0;
        if ((int)uVar17 < pTVar4->ArrayNum) {
          uVar13 = ~uVar17 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          uVar11 = (*pcVar3)();
          return (bool)uVar11;
        }
        pFVar5 = (pTVar4->AllocatorInstance).Data;
        pTVar7 = pTVar6->SourceVertices;
        uVar13 = *(uint *)(pFVar5 + lVar20 * 0xc);
        uVar14 = 0;
        if ((int)uVar13 < pTVar7->ArrayNum) {
          uVar14 = ~uVar13 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          uVar11 = (*pcVar3)();
          return (bool)uVar11;
        }
        pFVar8 = (pTVar7->AllocatorInstance).Data;
        uVar14 = *(uint *)(pFVar5 + lVar20 * 0xc + 4);
        pTVar7 = pTVar6->SourceVertices;
        pFVar1 = pFVar8 + (longlong)(int)uVar13 * 0x18;
        local_228 = *(undefined8 *)pFVar1;
        uStack_220 = *(undefined8 *)(pFVar1 + 8);
        local_218 = *(undefined8 *)(pFVar8 + (longlong)(int)uVar13 * 0x18 + 0x10);
        uVar13 = 0;
        if ((int)uVar14 < pTVar7->ArrayNum) {
          uVar13 = ~uVar14 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          uVar11 = (*pcVar3)();
          return (bool)uVar11;
        }
        pFVar1 = (pTVar7->AllocatorInstance).Data;
        uVar13 = *(uint *)(pFVar5 + lVar20 * 0xc + 8);
        pTVar7 = pTVar6->SourceVertices;
        pFVar5 = pFVar1 + (longlong)(int)uVar14 * 0x18;
        uStack_210 = *(undefined8 *)pFVar5;
        uStack_208 = *(undefined8 *)(pFVar5 + 8);
        uStack_200 = *(undefined8 *)(pFVar1 + (longlong)(int)uVar14 * 0x18 + 0x10);
        uVar14 = 0;
        if ((int)uVar13 < pTVar7->ArrayNum) {
          uVar14 = ~uVar13 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          uVar11 = (*pcVar3)();
          return (bool)uVar11;
        }
        pFVar1 = (pTVar7->AllocatorInstance).Data;
        pFVar5 = pFVar1 + (longlong)(int)uVar13 * 0x18;
        local_1f8 = *(undefined4 *)pFVar5;
        uStack_1f4 = *(undefined4 *)(pFVar5 + 4);
        uStack_1f0 = *(undefined4 *)(pFVar5 + 8);
        uStack_1ec = *(undefined4 *)(pFVar5 + 0xc);
        local_1e8 = *(undefined8 *)(pFVar1 + (longlong)(int)uVar13 * 0x18 + 0x10);
        local_140 = local_228;
        uStack_138 = uStack_220;
        local_ec = 0;
        local_130 = (undefined4)local_218;
        uStack_12c = local_218._4_4_;
        uStack_128 = (undefined4)uStack_210;
        uStack_124 = uStack_210._4_4_;
        local_120 = (undefined4)uStack_208;
        uStack_11c = uStack_208._4_4_;
        uStack_118 = (undefined4)uStack_200;
        uStack_114 = uStack_200._4_4_;
        local_110 = local_1f8;
        uStack_10c = uStack_1f4;
        uStack_108 = uStack_1f0;
        uStack_104 = uStack_1ec;
        local_100 = local_1e8;
        cVar9 = (**(code **)local_240)(*(undefined8 *)&local_240->field_0x8,&local_188);
        this = local_270;
        param_7 = local_268;
        if (cVar9 != '\0') {
          if (local_238 == (FIntersectionsQueryResult *)0x0) {
            return true;
          }
          AddTriTriIntersectionResult
                    ((TIntrTriangle3Triangle3<double> *)&local_188._s_0,local_278,uVar17,local_238);
          this = local_270;
          param_7 = local_268;
        }
      }
      else {
        local_280[0] = uVar17;
        Core::Private::Function::CheckCallable(*(void **)&param_7->TriangleFilterF);
        plVar2 = *(longlong **)&(param_7->TriangleFilterF).field_0x28;
        pcVar3 = *(code **)&param_7->TriangleFilterF;
        plVar18 = (longlong *)&(param_7->TriangleFilterF).field_0x10;
        if (plVar2 != (longlong *)0x0) {
          plVar18 = plVar2;
        }
        uVar15 = (**(code **)(*plVar18 + 8))();
        cVar12 = (*pcVar3)(uVar15,local_280);
        if (cVar12 != '\0') goto LAB_1495f3e2d;
      }
LAB_1495f40ea:
      param_2 = param_2 + 1;
    } while (param_2 < local_274);
  }
  return (bool)cVar9;
}

