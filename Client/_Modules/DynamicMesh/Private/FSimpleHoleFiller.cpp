// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 6

// ~FSimpleHoleFiller @ 14c6e19e0

void __thiscall UE::Geometry::FSimpleHoleFiller::~FSimpleHoleFiller(FSimpleHoleFiller *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSimpleHoleFiller_Geometry_UE__6B_;
  pFVar1 = (this->Loop).BowtieVertices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Loop).Edges.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Loop).Vertices.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// Validate @ 14c77bfd0

EOperationValidationResult __thiscall
UE::Geometry::FSimpleHoleFiller::Validate(FSimpleHoleFiller *this)

{
  bool bVar1;
  
  bVar1 = FEdgeLoop::IsBoundaryLoop(&this->Loop,this->Mesh);
  return (EOperationValidationResult)!bVar1;
}

// Fill @ 14c804710

bool __thiscall UE::Geometry::FSimpleHoleFiller::Fill(FSimpleHoleFiller *this,int param_1)

{
  int iVar1;
  int iVar2;
  FDynamicMesh3 *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int local_res10 [2];
  FIndex3i_u_0 local_18;
  
  if ((param_1 < 0) && (pFVar3 = this->Mesh, (pFVar3->TriangleGroups).bIsSet != false)) {
    param_1 = pFVar3->GroupIDCounter;
    pFVar3->GroupIDCounter = param_1 + 1;
  }
  iVar1 = (this->Loop).Vertices.ArrayNum;
  if (2 < iVar1) {
    if (iVar1 != 3) {
      if (this->FillType == PolygonEarClipping) {
        bVar5 = Fill_EarClip(this,param_1);
        return bVar5;
      }
      bVar5 = Fill_Fan(this,param_1);
      return bVar5;
    }
    iVar1 = *(int *)((this->Loop).Vertices.AllocatorInstance.Data + 4);
    if ((this->Loop).Vertices.ArrayNum < 3) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    iVar2 = *(int *)((this->Loop).Vertices.AllocatorInstance.Data + 8);
    if ((this->Loop).Vertices.ArrayNum < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    local_18._s_0.A = *(undefined4 *)(this->Loop).Vertices.AllocatorInstance.Data;
    local_18._s_0.B = iVar2;
    local_18._s_0.C = iVar1;
    local_res10[0] = FDynamicMesh3::AppendTriangle(this->Mesh,(FIndex3i *)&local_18._s_0,param_1);
    if (-1 < local_res10[0]) {
      TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
                ((TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,local_res10,1,
                 *(int *)((longlong)&this->_padding_ + 4));
      this->NewVertex = -1;
      return true;
    }
  }
  return false;
}

// Fill_EarClip @ 14c805700

bool __thiscall UE::Geometry::FSimpleHoleFiller::Fill_EarClip(FSimpleHoleFiller *this,int param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FDynamicMesh3 *pFVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  longlong lVar17;
  undefined1 local_res8 [8];
  int local_res10;
  int local_98 [2];
  FIndex3i_u_0 local_90;
  undefined8 local_80;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_70;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uVar14 = 0;
  lVar17 = (longlong)(this->Loop).Vertices.ArrayNum;
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  local_res10 = param_1;
  if (0 < lVar17) {
    lVar15 = 0;
    do {
      pFVar5 = this->Mesh;
      uVar10 = 0;
      if ((int)uVar14 < (this->Loop).Vertices.ArrayNum) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      uVar10 = *(uint *)((this->Loop).Vertices.AllocatorInstance.Data + lVar15 * 4);
      uVar12 = (ulonglong)(uVar10 & 0x1ff);
      lVar13 = *(longlong *)
                ((pFVar5->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar10 >> 9) * 8);
      puVar2 = (undefined8 *)(lVar13 + uVar12 * 0x18);
      local_50 = *puVar2;
      uStack_48 = puVar2[1];
      local_40 = *(undefined8 *)(lVar13 + 0x10 + uVar12 * 0x18);
      if ((local_70.AllocatorInstance.Data <= (FScriptContainerElement *)&local_50) &&
         ((FScriptContainerElement *)&local_50 <
          local_70.AllocatorInstance.Data + (longlong)local_70.ArrayMax * 0x18)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      if (local_70.ArrayNum == local_70.ArrayMax) {
        local_70.ArrayNum =
             Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_70.AllocatorInstance,&local_70.ArrayMax);
      }
      lVar13 = (longlong)local_70.ArrayNum;
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 1;
      local_70.ArrayNum = local_70.ArrayNum + 1;
      *(undefined8 *)(local_70.AllocatorInstance.Data + lVar13 * 0x18) = local_50;
      *(undefined8 *)(local_70.AllocatorInstance.Data + lVar13 * 0x18 + 8) = uStack_48;
      *(undefined8 *)(local_70.AllocatorInstance.Data + lVar13 * 0x18 + 0x10) = local_40;
    } while (lVar15 < lVar17);
  }
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  PolygonTriangulation::TriangulateSimplePolygon<double>(&local_70,&local_60,true);
  iVar7 = local_60.ArrayNum;
  pFVar3 = local_60.AllocatorInstance.Data + (longlong)local_60.ArrayNum * 0xc;
  FVar16.Data = local_60.AllocatorInstance.Data;
  while( true ) {
    if (local_60.ArrayNum != iVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FIndex3i,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar16.Data == pFVar3) break;
    iVar11 = *(int *)(FVar16.Data + 8);
    local_80 = *(longlong *)FVar16.Data;
    if (iVar11 < 0 || (this->Loop).Vertices.ArrayNum <= iVar11) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
    }
    iVar11 = *(int *)((this->Loop).Vertices.AllocatorInstance.Data + (longlong)iVar11 * 4);
    lVar17 = (longlong)local_80._4_4_;
    if (local_80 < 0 || (this->Loop).Vertices.ArrayNum <= local_80._4_4_) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
    }
    iVar4 = *(int *)((this->Loop).Vertices.AllocatorInstance.Data + lVar17 * 4);
    lVar17 = (longlong)(int)local_80;
    if ((int)local_80 < 0 || (this->Loop).Vertices.ArrayNum <= (int)local_80) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
    }
    local_90._s_0.A = *(undefined4 *)((this->Loop).Vertices.AllocatorInstance.Data + lVar17 * 4);
    local_90._s_0.B = iVar4;
    local_90._s_0.C = iVar11;
    local_98[0] = FDynamicMesh3::AppendTriangle(this->Mesh,(FIndex3i *)&local_90._s_0,local_res10);
    if (-1 < local_98[0]) {
      if (((int *)this->_padding_ <= local_98) &&
         (local_98 < (int *)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      iVar11 = (int)this->_padding_;
      piVar1 = (int *)((longlong)&this->_padding_ + 4);
      if (iVar11 == *piVar1) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)&this->_padding_,piVar1);
      }
      *(int *)&this->_padding_ = iVar11 + 1;
      *(int *)(this->_padding_ + (longlong)iVar11 * 4) = local_98[0];
    }
    FVar16.Data = FVar16.Data + 0xc;
  }
  bVar8 = (int)this->_padding_ == local_60.ArrayNum;
  if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  return bVar8;
}

// Fill_Fan @ 14c805b10

bool __thiscall UE::Geometry::FSimpleHoleFiller::Fill_Fan(FSimpleHoleFiller *this,int param_1)

{
  longlong *plVar1;
  int *piVar2;
  double *pdVar3;
  FDynamicMesh3 *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ForAnyElementType _Src;
  int iVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  double dVar19;
  FDynamicMeshEditor local_res8;
  FDynamicMeshEditResult local_128;
  TVector<double>_u_0 local_b8;
  undefined8 local_a0;
  float local_98;
  undefined8 local_94;
  float local_8c;
  TVector2<float>_u_0 local_88;
  undefined2 local_80;
  undefined1 local_7e;
  
  iVar13 = (this->Loop).Vertices.ArrayNum;
  uVar17 = 0;
  uVar18 = uVar17;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (0 < iVar13) {
    do {
      pFVar4 = this->Mesh;
      uVar16 = (uint)uVar17;
      uVar12 = 0;
      if ((int)uVar16 < iVar13) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
      uVar17 = (ulonglong)(uVar16 + 1);
      iVar13 = (this->Loop).Vertices.ArrayNum;
      uVar12 = *(uint *)((this->Loop).Vertices.AllocatorInstance.Data + uVar18);
      uVar14 = (ulonglong)(uVar12 & 0x1ff);
      lVar15 = *(longlong *)
                ((pFVar4->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 >> 9) * 8);
      pdVar3 = (double *)(lVar15 + uVar14 * 0x18);
      uVar8 = (double)uVar8 + *(double *)(lVar15 + 0x10 + uVar14 * 0x18);
      uVar6 = (double)uVar6 + *pdVar3;
      uVar7 = (double)uVar7 + pdVar3[1];
      uVar18 = uVar18 + 4;
    } while ((int)(uVar16 + 1) < iVar13);
  }
  local_98 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_8c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_88 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  local_80 = 0;
  local_7e = 0;
  dVar19 = __real_3ff0000000000000 / (double)(this->Loop).Vertices.ArrayNum;
  local_b8._s_0.X = dVar19 * (double)uVar6;
  local_b8._s_0.Y = dVar19 * (double)uVar7;
  local_b8._s_0.Z = dVar19 * (double)uVar8;
  local_a0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_94 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  iVar13 = FDynamicMesh3::AppendVertex(this->Mesh,(FVertexInfo *)&local_b8._s_0);
  local_res8.Mesh = this->Mesh;
  this->NewVertex = iVar13;
  local_128.NewVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.NewVertices.ArrayNum = 0;
  local_128.NewVertices.ArrayMax = 0;
  local_128.NewTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.NewTriangles.ArrayNum = 0;
  local_128.NewTriangles.ArrayMax = 0;
  local_128.NewQuads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.NewQuads.ArrayNum = 0;
  local_128.NewQuads.ArrayMax = 0;
  local_128.NewPolygons.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.NewPolygons.ArrayNum = 0;
  local_128.NewPolygons.ArrayMax = 0;
  local_128.NewGroups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.NewGroups.ArrayNum = 0;
  local_128.NewGroups.ArrayMax = 0;
  local_128.NewNormalOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.NewNormalOverlayElements.ArrayNum = 0;
  local_128.NewNormalOverlayElements.ArrayMax = 0;
  local_128.NewColorOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.NewColorOverlayElements.ArrayNum = 0;
  local_128.NewColorOverlayElements.ArrayMax = 0;
  bVar10 = FDynamicMeshEditor::AddTriangleFan_OrderedVertexLoop
                     (&local_res8,iVar13,&(this->Loop).Vertices,param_1,&local_128);
  _Src.Data = local_128.NewTriangles.AllocatorInstance.Data;
  if (bVar10) {
    plVar1 = &this->_padding_;
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)plVar1 != &local_128.NewTriangles) {
      iVar9 = local_128.NewTriangles.ArrayNum;
      lVar15 = (longlong)local_128.NewTriangles.ArrayNum;
      piVar2 = (int *)((longlong)&this->_padding_ + 4);
      iVar13 = *piVar2;
      *(int *)&this->_padding_ = local_128.NewTriangles.ArrayNum;
      if ((local_128.NewTriangles.ArrayNum == 0) && (iVar13 == 0)) {
        *piVar2 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_128.NewTriangles.ArrayNum,iVar13,(ForAnyElementType *)plVar1,
                   local_128.NewTriangles.ArrayNum,piVar2);
        if (iVar9 != 0) {
          memcpy((void *)*plVar1,_Src.Data,lVar15 << 2);
        }
      }
    }
    bVar10 = true;
  }
  else {
    FDynamicMesh3::RemoveVertex(this->Mesh,this->NewVertex,false);
    this->NewVertex = -1;
    bVar10 = false;
  }
  if (local_128.NewColorOverlayElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.NewColorOverlayElements.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             local_128.NewNormalOverlayElements.AllocatorInstance.Data,
             local_128.NewNormalOverlayElements.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)
      local_128.NewNormalOverlayElements.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_128.NewNormalOverlayElements.AllocatorInstance.Data);
  }
  if (local_128.NewGroups.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.NewGroups.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_128.NewPolygons.AllocatorInstance.Data
             ,local_128.NewPolygons.ArrayNum);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_128.NewPolygons.AllocatorInstance.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_128.NewPolygons.AllocatorInstance.Data);
  }
  if (local_128.NewQuads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.NewQuads.AllocatorInstance.Data);
  }
  if (local_128.NewTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.NewTriangles.AllocatorInstance.Data);
  }
  if (local_128.NewVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.NewVertices.AllocatorInstance.Data);
  }
  return bVar10;
}

// UpdateAttributes @ 14c84f4e0

bool __thiscall
UE::Geometry::FSimpleHoleFiller::UpdateAttributes
          (FSimpleHoleFiller *this,
          TArray<TMap<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  TDynamicMeshOverlay<float,2> *this_00;
  TTuple<int,UE::Math::TVector2<float>_> *pTVar10;
  uint uVar11;
  ForElementType<FSetElementId> FVar12;
  FDynamicMeshAttributeSet *this_01;
  FScriptContainerElement *pFVar13;
  int iVar14;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar15;
  longlong lVar16;
  TSet<TTuple<int,TTuple<int,UE::Math::TVector2<float>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>,FDefaultSetAllocator>
  *this_02;
  longlong lVar17;
  float fVar18;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 local_f8;
  uint local_f0;
  FIndex3i_u_0 local_e8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_d8;
  longlong local_d0;
  TPairInitializer<int_const_&,TTuple<int,UE::Math::TVector2<float>_>_&&> local_c8;
  FDynamicMeshEditor local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 local_a0;
  undefined4 local_98;
  int *local_90;
  undefined4 *local_88;
  
  this_01 = (this->Mesh->AttributeSet).Ptr;
  if ((this_01 != (FDynamicMeshAttributeSet *)0x0) &&
     (pTVar15 = (TArray<int,TSizedDefaultAllocator<32>_> *)&this->_padding_,
     (int)this->_padding_ != 0)) {
    local_d8 = pTVar15;
    local_c8.Value = (TTuple<int,UE::Math::TVector2<float>_> *)this_01;
    iVar8 = (**(code **)(this_01->_padding_ + 0xa8))(this_01);
    if (param_1->ArrayNum == iVar8) {
      local_f0 = 0;
      iVar8 = (**(code **)(this_01->_padding_ + 0xa8))(this_01);
      fVar5 = __real_3f800000;
      if (0 < iVar8) {
        lVar17 = 0;
        local_d0 = 0;
        do {
          this_00 = (TDynamicMeshOverlay<float,2> *)
                    FDynamicMeshAttributeSet::GetUVLayer(this_01,local_f0);
          uVar11 = 0;
          if ((int)local_f0 < param_1->ArrayNum) {
            uVar11 = ~local_f0 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          this_02 = (TSet<TTuple<int,TTuple<int,UE::Math::TVector2<float>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>,FDefaultSetAllocator>
                     *)((param_1->AllocatorInstance).Data + lVar17);
          uVar11 = this->NewVertex;
          if (uVar11 != 0xffffffff) {
            if (*(int *)&(this_02->Elements).field_0x8 != *(int *)&(this_02->Elements).field_0x34) {
              FVar3 = (this_02->Hash).SecondaryData;
              FVar12 = (ForElementType<FSetElementId>)&this_02->Hash;
              if (FVar3 != (ForElementType<FSetElementId>)0x0) {
                FVar12 = FVar3;
              }
              iVar8 = *(int *)((longlong)FVar12 + (ulonglong)(this_02->HashSize - 1U & uVar11) * 4);
              if (iVar8 != -1) {
                do {
                  if (*(uint *)(*(longlong *)&this_02->Elements + (longlong)iVar8 * 0x18) == uVar11)
                  goto LAB_14c84f752;
                  iVar8 = *(int *)(*(longlong *)&this_02->Elements + 0x10 + (longlong)iVar8 * 0x18);
                } while (iVar8 != -1);
              }
            }
            pFVar13 = (this->Loop).Vertices.AllocatorInstance.Data;
            iVar8 = (this->Loop).Vertices.ArrayNum;
            local_f8._4_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._4_4_;
            local_f8._0_4_ = UE::Math::TVector2<float>::ZeroVector.field0_0x0._0_4_;
            pFVar1 = pFVar13 + (longlong)iVar8 * 4;
            while( true ) {
              if ((this->Loop).Vertices.ArrayNum != iVar8) {
                local_res18[0] = 0;
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_res18);
              }
              if (pFVar13 == pFVar1) break;
              pTVar10 = TMapBase<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>
                        ::FindChecked((TMapBase<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>
                                       *)this_02,*(int *)pFVar13);
              pFVar13 = pFVar13 + 4;
              local_f8._0_4_ = (float)local_f8 + *(float *)&pTVar10->field_0x4;
              local_f8._4_4_ = local_f8._4_4_ + *(float *)&pTVar10->field_0x8;
            }
            local_b0 = 0xffffffff;
            fVar18 = fVar5 / (float)(this->Loop).Vertices.ArrayNum;
            local_f8 = CONCAT44(local_f8._4_4_ * fVar18,(float)local_f8 * fVar18);
            local_ac = local_f8;
            local_88 = &local_b0;
            local_90 = &this->NewVertex;
            TSet<TTuple<int,TTuple<int,UE::Math::TVector2<float>_>_>,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<int_const_&,TTuple<int,UE::Math::TVector2<float>_>_&&>_>
                      (this_02,&local_c8,(bool *)&local_90);
            pTVar15 = local_d8;
          }
LAB_14c84f752:
          pFVar13 = (pTVar15->AllocatorInstance).Data;
          iVar8 = (int)*(longlong *)&pTVar15->ArrayNum;
          pFVar1 = pFVar13 + (longlong)iVar8 * 4;
          while( true ) {
            if ((int)*(longlong *)&pTVar15->ArrayNum != iVar8) {
              local_res20[0] = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res20);
            }
            this_01 = (FDynamicMeshAttributeSet *)local_c8.Value;
            if (pFVar13 == pFVar1) break;
            uVar11 = *(uint *)pFVar13;
            iVar14 = 0;
            lVar16 = 0;
            lVar17 = *(longlong *)
                      ((this->Mesh->Triangles).Blocks.AllocatorInstance.Data +
                      (ulonglong)(uVar11 >> 9) * 8);
            local_a0 = *(undefined8 *)(lVar17 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
            local_98 = *(undefined4 *)(lVar17 + 8 + (ulonglong)(uVar11 & 0x1ff) * 0xc);
            local_e8._0_8_ = 0xffffffffffffffff;
            local_e8._s_0.C = -1;
            do {
              uVar2 = *(uint *)((longlong)&local_a0 + lVar16);
              if (*(int *)&(this_02->Elements).field_0x8 == *(int *)&(this_02->Elements).field_0x34)
              {
                return false;
              }
              FVar3 = (this_02->Hash).SecondaryData;
              FVar12 = (ForElementType<FSetElementId>)&this_02->Hash;
              if (FVar3 != (ForElementType<FSetElementId>)0x0) {
                FVar12 = FVar3;
              }
              iVar9 = *(int *)((longlong)FVar12 + (ulonglong)(this_02->HashSize - 1U & uVar2) * 4);
              if (iVar9 == -1) {
                return false;
              }
              while (*(uint *)(*(longlong *)&this_02->Elements + (longlong)iVar9 * 0x18) != uVar2) {
                iVar9 = *(int *)(*(longlong *)&this_02->Elements + 0x10 + (longlong)iVar9 * 0x18);
                if (iVar9 == -1) {
                  return false;
                }
              }
              pTVar10 = TMapBase<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>
                        ::FindChecked((TMapBase<int,TTuple<int,UE::Math::TVector2<float>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TTuple<int,UE::Math::TVector2<float>_>,0>_>
                                       *)this_02,uVar2);
              uVar2 = *(uint *)pTVar10;
              if (uVar2 == 0xffffffff) {
                iVar9 = TDynamicMeshOverlay<float,2>::AppendElement
                                  (this_00,(float *)&pTVar10->field_0x4);
                *(int *)((longlong)&local_e8 + lVar16) = iVar9;
                *(int *)pTVar10 = iVar9;
              }
              else {
                if ((int)uVar2 < 0) {
                  return false;
                }
                if ((int)((this_00->ElementsRefCounts).RefCounts.CurBlock * 0x200 +
                         (this_00->ElementsRefCounts).RefCounts.CurBlockUsed) <= (int)uVar2) {
                  return false;
                }
                if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                  ((this_00->ElementsRefCounts).RefCounts.Blocks.
                                                   AllocatorInstance.Data +
                                                  (ulonglong)(uVar2 >> 9) * 8) +
                                                (ulonglong)(uVar2 & 0x1ff) * 2) - 1U)) {
                  return false;
                }
                *(uint *)((longlong)&local_e8 + lVar16) = uVar2;
              }
              iVar14 = iVar14 + 1;
              lVar16 = lVar16 + 4;
            } while (iVar14 < 3);
            TDynamicMeshOverlay<float,2>::SetTriangle
                      (this_00,uVar11,(FIndex3i *)&local_e8._s_0,true);
            pFVar13 = pFVar13 + 4;
            pTVar15 = local_d8;
          }
          local_f0 = local_f0 + 1;
          lVar17 = local_d0 + 0x50;
          local_d0 = lVar17;
          iVar8 = (**(code **)(*(longlong *)&(local_c8.Value)->field_0x0 + 0xa8))(local_c8.Value);
        } while ((int)local_f0 < iVar8);
      }
      local_b8.Mesh = this->Mesh;
      FDynamicMeshEditor::SetTriangleNormals(&local_b8,pTVar15);
      return true;
    }
    bVar6 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1516107143202209912>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SimpleHoleFiller.cpp"
                       ,0x78,"VidUVMaps.Num() == Attributes->NumUVLayers()");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  return false;
}

