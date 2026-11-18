// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 5

// Compute @ 14c71f310

void __thiscall
UE::Geometry::FDynamicSubmesh3::Compute
          (FDynamicSubmesh3 *this,TArrayView<int_const_,int> *param_1,int param_2,bool param_3)

{
  FDynamicMesh3 *this_00;
  FDynamicMeshAttributeSet *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDynamicMesh3 *pFVar5;
  FDynamicMeshAttributeSet *this_01;
  FDynamicMeshAttributeSet *pFVar6;
  FDynamicMeshEditor local_res8;
  FDynamicMeshEditResult local_2b8;
  FDynamicMesh3 local_248;
  
  if (this->BaseMesh == (FDynamicMesh3 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BaseMesh",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicSubmesh3.h"
                       ,0xf9,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = FDynamicMesh3::GetComponentsFlags(this->BaseMesh);
  this_00 = &this->Submesh;
  pFVar5 = FDynamicMesh3::FDynamicMesh3
                     (&local_248,(EMeshComponents)iVar4 & (EMeshComponents)param_2);
  FDynamicMesh3::operator=(this_00,pFVar5);
  FDynamicMesh3::~FDynamicMesh3(&local_248);
  if ((param_3) && ((this->BaseMesh->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0)) {
    FDynamicMesh3::EnableAttributes(this_00);
    pFVar1 = (this->Submesh).AttributeSet.Ptr;
    this_01 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
      this_01 = pFVar1;
    }
    pFVar1 = (this->BaseMesh->AttributeSet).Ptr;
    pFVar6 = (FDynamicMeshAttributeSet *)0x0;
    if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar6 = pFVar1;
    }
    FDynamicMeshAttributeSet::EnableMatchingAttributes(this_01,pFVar6,true,false);
  }
  local_2b8.NewVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b8.NewVertices.ArrayNum = 0;
  local_2b8.NewVertices.ArrayMax = 0;
  local_2b8.NewTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b8.NewTriangles.ArrayNum = 0;
  local_2b8.NewTriangles.ArrayMax = 0;
  local_2b8.NewQuads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b8.NewQuads.ArrayNum = 0;
  local_2b8.NewQuads.ArrayMax = 0;
  local_2b8.NewPolygons.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b8.NewPolygons.ArrayNum = 0;
  local_2b8.NewPolygons.ArrayMax = 0;
  local_2b8.NewGroups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b8.NewGroups.ArrayNum = 0;
  local_2b8.NewGroups.ArrayMax = 0;
  local_2b8.NewNormalOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b8.NewNormalOverlayElements.ArrayNum = 0;
  local_2b8.NewNormalOverlayElements.ArrayMax = 0;
  local_2b8.NewColorOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b8.NewColorOverlayElements.ArrayNum = 0;
  local_2b8.NewColorOverlayElements.ArrayMax = 0;
  local_res8.Mesh = this_00;
  FDynamicMeshEditor::AppendTriangles
            (&local_res8,this->BaseMesh,param_1,&this->Mappings,&local_2b8,this->bComputeTriMaps);
  ComputeBoundaryInfo(this,param_1);
  if (local_2b8.NewColorOverlayElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.NewColorOverlayElements.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             local_2b8.NewNormalOverlayElements.AllocatorInstance.Data,
             local_2b8.NewNormalOverlayElements.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)
      local_2b8.NewNormalOverlayElements.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_2b8.NewNormalOverlayElements.AllocatorInstance.Data);
  }
  if (local_2b8.NewGroups.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.NewGroups.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_2b8.NewPolygons.AllocatorInstance.Data
             ,local_2b8.NewPolygons.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_2b8.NewPolygons.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_2b8.NewPolygons.AllocatorInstance.Data);
  }
  if (local_2b8.NewQuads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.NewQuads.AllocatorInstance.Data);
  }
  if (local_2b8.NewTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.NewTriangles.AllocatorInstance.Data);
  }
  if (local_2b8.NewVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.NewVertices.AllocatorInstance.Data);
  }
  return;
}

// ComputeBoundaryInfo @ 14c71fc50

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::FDynamicSubmesh3::ComputeBoundaryInfo
          (FDynamicSubmesh3 *this,TArrayView<int_const_,int> *param_1)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  ForElementType<FSetElementId> FVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  uint *puVar11;
  int iVar12;
  bool *pbVar13;
  FScriptContainerElement FVar14;
  FScriptContainerElement FVar15;
  uint local_res8 [2];
  uint local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  TOptional<TArray<bool,TSizedDefaultAllocator<32>_>_>_u_0 local_f8;
  int local_e8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_e0;
  undefined8 local_88;
  undefined8 local_80;
  uint *local_78;
  int local_70;
  int local_6c;
  int local_68 [2];
  uint *local_60;
  undefined8 local_58;
  undefined4 local_50;
  
  if ((this->BaseMesh == (FDynamicMesh3 *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BaseMesh",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\DynamicSubmesh3.h"
                         ,0x11b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar12 = (this->BaseMesh->TriangleRefCounts).RefCounts.CurBlockUsed +
           (this->BaseMesh->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  local_f8.TypedValue.AllocatorInstance.Data = (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_f8.TypedValue.ArrayNum = 0;
  local_f8.TypedValue.ArrayMax = -1;
  local_e0.Elements._0_8_ = 0;
  local_e0.Elements._8_4_ = 0;
  local_e0.Elements._12_4_ = -1;
  local_e0.Elements._32_8_ = 0;
  local_e0.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_e0.Elements._48_8_ = _UNK_150631d98;
  local_e0.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_e0.HashSize = 0;
  if ((iVar12 < 32000) || (__real_3d4ccccd <= (float)param_1->ArrayNum / (float)iVar12)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  FIndexFlagSet::InitManual((FIndexFlagSet *)&local_f8.TypedValue,bVar3,iVar12);
  puVar11 = (uint *)param_1->DataPtr;
  puVar1 = puVar11 + param_1->ArrayNum;
  for (; puVar11 != puVar1; puVar11 = puVar11 + 1) {
    local_res10[0] = *puVar11;
    lVar9 = (longlong)(int)local_res10[0];
    if (local_f8.TypedValue.ArrayMax == -1) {
      if (local_e0.Elements._12_4_ == -1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Sparse.IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\SparseIndexCollectionTypes.h"
                           ,0x66,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((local_e0.Elements._12_4_ == -1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_e0,local_res18,(bool *)local_res10);
    }
    else {
      uVar4 = 0;
      if ((int)local_res10[0] < local_f8.TypedValue.ArrayNum) {
        uVar4 = ~local_res10[0] >> 0x1f;
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
      if (*(FScriptContainerElement *)(lVar9 + (longlong)local_f8.TypedValue.AllocatorInstance.Data)
          == (FScriptContainerElement)0x0) {
        *(FScriptContainerElement *)(lVar9 + (longlong)local_f8.TypedValue.AllocatorInstance.Data) =
             (FScriptContainerElement)0x1;
        local_e8 = local_e8 + 1;
      }
    }
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->BaseBorderV);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->BaseBorderE);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->BaseBoundaryE);
  local_78 = (uint *)param_1->DataPtr;
  local_60 = local_78 + param_1->ArrayNum;
  if (local_78 != local_78 + param_1->ArrayNum) {
    do {
      uVar6 = (ulonglong)(*local_78 & 0x1ff);
      lVar10 = 0;
      lVar9 = *(longlong *)
               ((this->BaseMesh->TriangleEdges).Blocks.AllocatorInstance.Data +
               (ulonglong)(*local_78 >> 9) * 8);
      local_58 = *(undefined8 *)(lVar9 + uVar6 * 0xc);
      local_50 = *(undefined4 *)(lVar9 + 8 + uVar6 * 0xc);
      do {
        local_res8[0] = *(uint *)((longlong)&local_58 + lVar10 * 4);
        uVar6 = *(ulonglong *)
                 (*(longlong *)
                   ((this->BaseMesh->Edges).Blocks.AllocatorInstance.Data +
                   (ulonglong)(local_res8[0] >> 9) * 8) + 8 +
                 (ulonglong)(local_res8[0] & 0x1ff) * 0x10);
        local_88 = uVar6;
        if ((int)(uVar6 >> 0x20) == -1) {
          pbVar13 = (bool *)local_res8;
          piVar8 = local_res20;
          this_00 = &this->BaseBoundaryE;
LAB_14c720180:
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (this_00,piVar8,pbVar13);
        }
        else {
          uVar4 = (uint)uVar6;
          if (local_f8.TypedValue.ArrayMax == -1) {
            if (local_e0.Elements._12_4_ == -1) {
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Sparse.IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\SparseIndexCollectionTypes.h"
                                 ,0x51,L"");
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if ((local_e0.Elements._12_4_ == -1) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsSet()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                     ,0x1bd,
                                     L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                    ), bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            if (local_e0.Elements._8_4_ != local_e0.Elements._52_4_) {
              FVar7 = (ForElementType<FSetElementId>)&local_e0.Hash;
              if (local_e0.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar7 = local_e0.Hash.SecondaryData;
              }
              for (iVar12 = *(int *)((longlong)FVar7 +
                                    ((ulonglong)(local_e0.HashSize - 1) & uVar6 & 0xffffffff) * 4);
                  iVar12 != -1;
                  iVar12 = *(int *)(local_e0.Elements._0_8_ + 4 + (longlong)iVar12 * 0xc)) {
                if (*(uint *)(local_e0.Elements._0_8_ + (longlong)iVar12 * 0xc) == uVar4)
                goto LAB_14c71ffff;
              }
            }
            iVar12 = -1;
LAB_14c71ffff:
            FVar14 = (FScriptContainerElement)(iVar12 != -1);
          }
          else {
            uVar5 = 0;
            if ((int)uVar4 < local_f8.TypedValue.ArrayNum) {
              uVar5 = ~uVar4 >> 0x1f;
            }
            if ((uVar5 == 0) &&
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
            FVar14 = *(FScriptContainerElement *)
                      ((longlong)(int)uVar4 + (longlong)local_f8.TypedValue.AllocatorInstance.Data);
          }
          if (local_f8.TypedValue.ArrayMax == -1) {
            if (local_e0.Elements._12_4_ == -1) {
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Sparse.IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\SparseIndexCollectionTypes.h"
                                 ,0x51,L"");
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if ((local_e0.Elements._12_4_ == -1) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsSet()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                     ,0x1bd,
                                     L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                    ), bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            if (local_e0.Elements._8_4_ != local_e0.Elements._52_4_) {
              FVar7 = (ForElementType<FSetElementId>)&local_e0.Hash;
              if (local_e0.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar7 = local_e0.Hash.SecondaryData;
              }
              for (iVar12 = *(int *)((longlong)FVar7 +
                                    (ulonglong)(local_e0.HashSize - 1U & local_88._4_4_) * 4);
                  iVar12 != -1;
                  iVar12 = *(int *)(local_e0.Elements._0_8_ + 4 + (longlong)iVar12 * 0xc)) {
                if (*(uint *)(local_e0.Elements._0_8_ + (longlong)iVar12 * 0xc) == local_88._4_4_)
                goto LAB_14c720110;
              }
            }
            iVar12 = -1;
LAB_14c720110:
            FVar15 = (FScriptContainerElement)(iVar12 != -1);
          }
          else {
            lVar9 = (longlong)(int)local_88._4_4_;
            uVar4 = 0;
            if ((int)local_88._4_4_ < local_f8.TypedValue.ArrayNum) {
              uVar4 = ~local_88._4_4_ >> 0x1f;
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
            FVar15 = *(FScriptContainerElement *)
                      (lVar9 + (longlong)local_f8.TypedValue.AllocatorInstance.Data);
          }
          if (FVar14 != FVar15) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&this->BaseBorderE,&local_70,(bool *)local_res8);
            local_80 = *(undefined8 *)
                        (*(longlong *)
                          ((this->BaseMesh->Edges).Blocks.AllocatorInstance.Data +
                          (ulonglong)(local_res8[0] >> 9) * 8) +
                        (ulonglong)(local_res8[0] & 0x1ff) * 0x10);
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&this->BaseBorderV,&local_6c,(bool *)&local_80);
            pbVar13 = (bool *)((longlong)&local_80 + 4);
            piVar8 = local_68;
            this_00 = &this->BaseBorderV;
            goto LAB_14c720180;
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < 3);
      local_78 = local_78 + 1;
    } while (local_78 != local_60);
  }
  if (local_e0.Elements._12_4_ != -1) {
    local_e0.HashSize = 0;
    if (local_e0.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_e0.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_e0.Elements);
  }
  if ((local_f8.TypedValue.ArrayMax != -1) &&
     (local_f8.TypedValue.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_f8.TypedValue.AllocatorInstance.Data);
  }
  return;
}

// FDynamicSubmesh3 @ 14c7b2660

FDynamicSubmesh3 * __thiscall
UE::Geometry::FDynamicSubmesh3::FDynamicSubmesh3
          (FDynamicSubmesh3 *this,FDynamicMesh3 *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,int param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  FDynamicSubmesh3 *pFVar3;
  TArrayView<int_const_,int> local_18;
  
  this->BaseMesh = param_1;
  FDynamicMesh3::FDynamicMesh3(&this->Submesh);
  FMeshIndexMappings::FMeshIndexMappings(&this->Mappings);
  *(undefined8 *)&(this->BaseBorderE).Elements = 0;
  *(undefined8 *)&(this->BaseBorderE).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->BaseBorderE).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->BaseBorderE).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->BaseBorderE).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->BaseBorderE).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BaseBorderE).Elements.field_0x34 = 0;
  (this->BaseBorderE).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->BaseBorderE).HashSize = 0;
  *(undefined8 *)&(this->BaseBoundaryE).Elements = 0;
  *(undefined8 *)&(this->BaseBoundaryE).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->BaseBoundaryE).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->BaseBoundaryE).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->BaseBoundaryE).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->BaseBoundaryE).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BaseBoundaryE).Elements.field_0x34 = 0;
  (this->BaseBoundaryE).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->BaseBoundaryE).HashSize = 0;
  *(undefined8 *)&(this->BaseBorderV).Elements = 0;
  *(undefined8 *)&(this->BaseBorderV).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->BaseBorderV).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->BaseBorderV).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->BaseBorderV).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->BaseBorderV).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BaseBorderV).Elements.field_0x34 = 0;
  (this->BaseBorderV).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->BaseBorderV).HashSize = 0;
  this->bComputeTriMaps = true;
  local_18.DataPtr = (int *)(param_2->AllocatorInstance).Data;
  local_18.ArrayNum = param_2->ArrayNum;
  if (local_18.ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FDynamicSubmesh3 *)(*pcVar1)();
      return pFVar3;
    }
  }
  Compute(this,&local_18,param_3,param_4);
  return this;
}

// FDynamicSubmesh3 @ 14c7b27d0

FDynamicSubmesh3 * __thiscall
UE::Geometry::FDynamicSubmesh3::FDynamicSubmesh3(FDynamicSubmesh3 *this)

{
  this->BaseMesh = (FDynamicMesh3 *)0x0;
  FDynamicMesh3::FDynamicMesh3(&this->Submesh);
  FMeshIndexMappings::FMeshIndexMappings(&this->Mappings);
  *(undefined8 *)&(this->BaseBorderE).Elements = 0;
  *(undefined8 *)&(this->BaseBorderE).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->BaseBorderE).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->BaseBorderE).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->BaseBorderE).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->BaseBorderE).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BaseBorderE).Elements.field_0x34 = 0;
  (this->BaseBorderE).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->BaseBorderE).HashSize = 0;
  *(undefined8 *)&(this->BaseBoundaryE).Elements = 0;
  *(undefined8 *)&(this->BaseBoundaryE).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->BaseBoundaryE).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->BaseBoundaryE).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->BaseBoundaryE).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->BaseBoundaryE).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BaseBoundaryE).Elements.field_0x34 = 0;
  (this->BaseBoundaryE).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->BaseBoundaryE).HashSize = 0;
  *(undefined8 *)&(this->BaseBorderV).Elements = 0;
  *(undefined8 *)&(this->BaseBorderV).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->BaseBorderV).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->BaseBorderV).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->BaseBorderV).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->BaseBorderV).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BaseBorderV).Elements.field_0x34 = 0;
  (this->BaseBorderV).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->BaseBorderV).HashSize = 0;
  this->bComputeTriMaps = true;
  return this;
}

// ~FDynamicSubmesh3 @ 14c7b7100

void __thiscall UE::Geometry::FDynamicSubmesh3::~FDynamicSubmesh3(FDynamicSubmesh3 *this)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->BaseBorderV).HashSize = 0;
  FVar1 = (this->BaseBorderV).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->BaseBorderV).Elements);
  (this->BaseBoundaryE).HashSize = 0;
  FVar1 = (this->BaseBoundaryE).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->BaseBoundaryE).Elements);
  (this->BaseBorderE).HashSize = 0;
  FVar1 = (this->BaseBorderE).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->BaseBorderE).Elements);
  FMeshIndexMappings::~FMeshIndexMappings(&this->Mappings);
  FDynamicMesh3::~FDynamicMesh3(&this->Submesh);
  return;
}

