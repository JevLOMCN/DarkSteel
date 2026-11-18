// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 5

// FSmoothingOpBase @ 14c9470d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FSmoothingOpBase * __thiscall
UE::Geometry::FSmoothingOpBase::FSmoothingOpBase
          (FSmoothingOpBase *this,FDynamicMesh3 *param_1,FOptions *param_2)

{
  undefined4 *puVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  FSmoothingOpBase *pFVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  
  FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)this);
  this->_padding_ = (longlong)&___7FSmoothingOpBase_Geometry_UE__6B_;
  FOptions::FOptions(&this->SmoothOptions,param_2);
  (this->PositionBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PositionBuffer).ArrayNum = 0;
  (this->PositionBuffer).ArrayMax = 0;
  (this->SavedMesh).Ptr = (FDynamicMesh3 *)0x0;
  (this->SmoothedToOriginalMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SmoothedToOriginalMap).ArrayNum = 0;
  (this->SmoothedToOriginalMap).ArrayMax = 0;
  FDynamicMesh3::Copy((FDynamicMesh3 *)this->_padding_,param_1,true,true,true,true);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->PositionBuffer,
             *(int *)(this->_padding_ + 0x20) * 0x200 + *(int *)(this->_padding_ + 0x24),Default);
  lVar4 = this->_padding_;
  uVar18 = *(int *)(lVar4 + 0x24) + *(int *)(lVar4 + 0x20) * 0x200;
  uVar17 = 0;
  if ((uVar18 != 0) &&
     (uVar17 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar4 + 0x28) - 1U))) {
    uVar17 = 1;
    uVar15 = 1;
    if ((int)uVar18 < 2) goto joined_r0x00014c9471e3;
    do {
      lVar8 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
      lVar5 = (*(undefined8 **)(lVar4 + 0x28))[uVar17 >> 9];
      if ((*(short *)(lVar8 + lVar5) != 0) && (*(short *)(lVar8 + lVar5) != -1)) break;
      uVar15 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar15;
    } while ((int)uVar15 < (int)uVar18);
  }
  uVar15 = (uint)uVar17;
joined_r0x00014c9471e3:
  do {
    if (uVar15 == uVar18) {
      return this;
    }
    while( true ) {
      uVar16 = (uint)uVar17;
      lVar5 = *(longlong *)(*(longlong *)(this->_padding_ + 0x10) + (uVar17 >> 9) * 8);
      puVar1 = (undefined4 *)(lVar5 + (ulonglong)(uVar16 & 0x1ff) * 0x18);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      uVar11 = puVar1[2];
      uVar12 = puVar1[3];
      uVar3 = *(undefined8 *)(lVar5 + 0x10 + (ulonglong)(uVar16 & 0x1ff) * 0x18);
      uVar15 = 0;
      if ((int)uVar16 < (this->PositionBuffer).ArrayNum) {
        uVar15 = ~uVar16 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        pFVar14 = (FSmoothingOpBase *)(*pcVar7)();
        return pFVar14;
      }
      pFVar6 = (this->PositionBuffer).AllocatorInstance.Data;
      uVar15 = uVar16 + 1;
      uVar17 = (ulonglong)uVar15;
      pFVar2 = pFVar6 + (longlong)(int)uVar16 * 0x18;
      *(undefined4 *)pFVar2 = uVar9;
      *(undefined4 *)(pFVar2 + 4) = uVar10;
      *(undefined4 *)(pFVar2 + 8) = uVar11;
      *(undefined4 *)(pFVar2 + 0xc) = uVar12;
      *(undefined8 *)(pFVar6 + (longlong)(int)uVar16 * 0x18 + 0x10) = uVar3;
      if ((int)uVar18 <= (int)uVar15) break;
      while( true ) {
        lVar8 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
        lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x28) + (uVar17 >> 9) * 8);
        if ((*(short *)(lVar8 + lVar5) != 0) && (*(short *)(lVar8 + lVar5) != -1)) break;
        uVar15 = (uint)uVar17 + 1;
        uVar17 = (ulonglong)uVar15;
        if ((int)uVar18 <= (int)uVar15) goto joined_r0x00014c9471e3;
      }
    }
  } while( true );
}

// FSmoothingOpBase @ 14c947310

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FSmoothingOpBase * __thiscall
UE::Geometry::FSmoothingOpBase::FSmoothingOpBase
          (FSmoothingOpBase *this,FDynamicMesh3 *param_1,FOptions *param_2,FDynamicSubmesh3 *param_3
          )

{
  undefined4 *puVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *this_01;
  TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_> *pTVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  FDynamicMesh3 *pFVar11;
  FDynamicMesh3 *pFVar12;
  undefined8 *puVar13;
  FSmoothingOpBase *pFVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  FDynamicMesh3 *pFVar18;
  uint uVar19;
  longlong lVar20;
  longlong local_50;
  longlong local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  FDynamicMeshOperator::FDynamicMeshOperator((FDynamicMeshOperator *)this);
  this->_padding_ = (longlong)&___7FSmoothingOpBase_Geometry_UE__6B_;
  FOptions::FOptions(&this->SmoothOptions,param_2);
  pFVar18 = (FDynamicMesh3 *)0x0;
  this_00 = &this->PositionBuffer;
  this_01 = &this->SmoothedToOriginalMap;
  pTVar4 = &this->SavedMesh;
  (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->PositionBuffer).ArrayNum = 0;
  (this->PositionBuffer).ArrayMax = 0;
  pTVar4->Ptr = (FDynamicMesh3 *)0x0;
  (this_01->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->SmoothedToOriginalMap).ArrayNum = 0;
  (this->SmoothedToOriginalMap).ArrayMax = 0;
  pFVar11 = ::operator_new(0x230);
  pFVar12 = pFVar18;
  if (pFVar11 != (FDynamicMesh3 *)0x0) {
    pFVar12 = FDynamicMesh3::FDynamicMesh3(pFVar11,param_1);
  }
  if (pTVar4 == (TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_>
                 *)&local_50) {
    if (pFVar12 != (FDynamicMesh3 *)0x0) {
      puVar13 = (undefined8 *)pFVar12->_padding_;
      goto LAB_14c9473d6;
    }
  }
  else {
    pFVar11 = pTVar4->Ptr;
    pTVar4->Ptr = pFVar12;
    if (pFVar11 != (FDynamicMesh3 *)0x0) {
      puVar13 = (undefined8 *)pFVar11->_padding_;
      pFVar12 = pFVar11;
LAB_14c9473d6:
      (*(code *)*puVar13)(pFVar12,1);
    }
  }
  pFVar11 = ::operator_new(0x230);
  pFVar12 = pFVar18;
  if (pFVar11 != (FDynamicMesh3 *)0x0) {
    pFVar12 = FDynamicMesh3::FDynamicMesh3(pFVar11,&param_3->Submesh);
  }
  plVar3 = &this->_padding_;
  if (plVar3 == &local_48) {
    if (pFVar12 != (FDynamicMesh3 *)0x0) {
      puVar13 = (undefined8 *)pFVar12->_padding_;
      goto LAB_14c94742f;
    }
  }
  else {
    pFVar11 = (FDynamicMesh3 *)*plVar3;
    *plVar3 = (longlong)pFVar12;
    if (pFVar11 != (FDynamicMesh3 *)0x0) {
      puVar13 = (undefined8 *)pFVar11->_padding_;
      pFVar12 = pFVar11;
LAB_14c94742f:
      (*(code *)*puVar13)(pFVar12,1);
    }
  }
  iVar15 = *(int *)(*plVar3 + 0x24) + *(int *)(*plVar3 + 0x20) * 0x200;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(this_00,iVar15,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(this_01,iVar15,Default);
  lVar6 = *plVar3;
  uVar19 = *(int *)(lVar6 + 0x24) + *(int *)(lVar6 + 0x20) * 0x200;
  if ((uVar19 != 0) &&
     (pFVar18 = (FDynamicMesh3 *)0x0,
     0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar6 + 0x28) - 1U))) {
    pFVar18 = (FDynamicMesh3 *)&DAT_00000001;
    uVar16 = 1;
    if ((int)uVar19 < 2) goto LAB_14c9474d3;
    do {
      lVar20 = (ulonglong)((uint)pFVar18 & 0x1ff) * 2;
      lVar7 = (*(undefined8 **)(lVar6 + 0x28))[(ulonglong)pFVar18 >> 9];
      if ((*(short *)(lVar20 + lVar7) != 0) && (*(short *)(lVar20 + lVar7) != -1)) break;
      uVar16 = (uint)pFVar18 + 1;
      pFVar18 = (FDynamicMesh3 *)(ulonglong)uVar16;
    } while ((int)uVar16 < (int)uVar19);
  }
  uVar16 = (uint)pFVar18;
LAB_14c9474d3:
  if (uVar16 != uVar19) {
LAB_14c9474f0:
    do {
      uVar17 = (uint)pFVar18;
      lVar20 = (longlong)(int)uVar17;
      lVar7 = *(longlong *)(*(longlong *)(*plVar3 + 0x10) + ((ulonglong)pFVar18 >> 9) * 8);
      puVar1 = (undefined4 *)(lVar7 + (ulonglong)(uVar17 & 0x1ff) * 0x18);
      local_40 = *puVar1;
      uStack_3c = puVar1[1];
      uStack_38 = puVar1[2];
      uStack_34 = puVar1[3];
      uVar5 = *(undefined8 *)(lVar7 + 0x10 + (ulonglong)(uVar17 & 0x1ff) * 0x18);
      uVar16 = 0;
      if ((int)uVar17 < (this->PositionBuffer).ArrayNum) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        pFVar14 = (FSmoothingOpBase *)(*pcVar9)();
        return pFVar14;
      }
      pFVar8 = (this_00->AllocatorInstance).Data;
      pFVar2 = pFVar8 + lVar20 * 0x18;
      *(undefined4 *)pFVar2 = local_40;
      *(undefined4 *)(pFVar2 + 4) = uStack_3c;
      *(undefined4 *)(pFVar2 + 8) = uStack_38;
      *(undefined4 *)(pFVar2 + 0xc) = uStack_34;
      *(undefined8 *)(pFVar8 + lVar20 * 0x18 + 0x10) = uVar5;
      iVar15 = TIndexMap<int>::GetFrom(&(param_3->Mappings).VertexMap,uVar17);
      uVar16 = 0;
      if ((int)uVar17 < (this->SmoothedToOriginalMap).ArrayNum) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        pFVar14 = (FSmoothingOpBase *)(*pcVar9)();
        return pFVar14;
      }
      uVar17 = uVar17 + 1;
      pFVar18 = (FDynamicMesh3 *)(ulonglong)uVar17;
      *(int *)((this_01->AllocatorInstance).Data + lVar20 * 4) = iVar15;
      if ((int)uVar17 < (int)uVar19) {
        do {
          lVar7 = ((ulonglong)pFVar18 >> 9) * 8;
          lVar20 = (ulonglong)((uint)pFVar18 & 0x1ff) * 2;
          if ((*(short *)(lVar20 + *(longlong *)(lVar7 + *(longlong *)(lVar6 + 0x28))) != 0) &&
             (*(short *)(lVar20 + *(longlong *)(*(longlong *)(lVar6 + 0x28) + lVar7)) != -1))
          goto LAB_14c9474f0;
          uVar17 = (uint)pFVar18 + 1;
          pFVar18 = (FDynamicMesh3 *)(ulonglong)uVar17;
        } while ((int)uVar17 < (int)uVar19);
      }
    } while (uVar17 != uVar19);
  }
  return this;
}

// ~FSmoothingOpBase @ 14c949860

void __thiscall UE::Geometry::FSmoothingOpBase::~FSmoothingOpBase(FSmoothingOpBase *this)

{
  FScriptContainerElement *pFVar1;
  FDynamicMesh3 *pFVar2;
  
  this->_padding_ = (longlong)&___7FSmoothingOpBase_Geometry_UE__6B_;
  pFVar1 = (this->SmoothedToOriginalMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->SavedMesh).Ptr;
  if (pFVar2 != (FDynamicMesh3 *)0x0) {
    (**(code **)pFVar2->_padding_)(pFVar2,1);
  }
  pFVar1 = (this->PositionBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SmoothOptions).WeightMap.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SmoothOptions).BaseNormals.SharedReferenceCount.ReferenceController);
  FDynamicMeshOperator::~FDynamicMeshOperator((FDynamicMeshOperator *)this);
  return;
}

// SetTransform @ 14c9859f0

void __thiscall
UE::Geometry::FSmoothingOpBase::SetTransform(FSmoothingOpBase *this,TTransformSRT3<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->Rotation).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(param_1->Rotation).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Rotation).field0_0x0._s_0.W;
  this->_padding_ = (longlong)(param_1->Rotation).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Translation).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(param_1->Translation).field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Scale3D).field0_0x0._s_0.X;
  this->_padding_ = (longlong)(param_1->Translation).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->Scale3D).field0_0x0._s_0.Z;
  this->_padding_ = (longlong)(param_1->Scale3D).field0_0x0._s_0.Y;
  this->_padding_ = (longlong)dVar1;
  return;
}

// UpdateResultMesh @ 14c986ed0

void __thiscall UE::Geometry::FSmoothingOpBase::UpdateResultMesh(FSmoothingOpBase *this)

{
  longlong *plVar1;
  FMutex *this_00;
  uint *puVar2;
  TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_> *pTVar3;
  atomic<unsigned_char> *this_01;
  atomic<unsigned_char> aVar4;
  FMutex FVar5;
  undefined8 uVar6;
  FDynamicMesh3 *pFVar7;
  FScriptContainerElement *pFVar8;
  FDynamicMesh3 *pFVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  FDynamicMeshAttributeSet *pFVar13;
  code *pcVar14;
  undefined8 uVar15;
  bool bVar16;
  short sVar17;
  uint uVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  longlong lVar27;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *pTVar28;
  FMeshNormals local_78;
  undefined8 local_50;
  
  pFVar7 = (this->SavedMesh).Ptr;
  if (pFVar7 != (FDynamicMesh3 *)0x0) {
    uVar24 = (pFVar7->VertexRefCounts).RefCounts.CurBlockUsed +
             (pFVar7->VertexRefCounts).RefCounts.CurBlock * 0x200;
    uVar23 = 0;
    if ((uVar24 != 0) &&
       (pFVar8 = (pFVar7->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar23 = 0,
       0xfffd < (ushort)(**(short **)pFVar8 - 1U))) {
      uVar23 = 1;
      uVar21 = 1;
      if (1 < (int)uVar24) {
        do {
          uVar23 = uVar21;
          uVar21 = (ulonglong)((uint)uVar23 & 0x1ff);
          lVar19 = *(longlong *)(pFVar8 + (uVar23 >> 9) * 8);
          if ((*(short *)(lVar19 + uVar21 * 2) != 0) && (*(short *)(lVar19 + uVar21 * 2) != -1))
          break;
          uVar22 = (uint)uVar23 + 1;
          uVar23 = (ulonglong)uVar22;
          uVar21 = uVar23;
        } while ((int)uVar22 < (int)uVar24);
      }
    }
    uVar22 = (uint)uVar23;
joined_r0x00014c98715b:
    if (uVar22 != uVar24) {
LAB_14c986f90:
      pFVar8 = (this->SmoothedToOriginalMap).AllocatorInstance.Data;
      uVar22 = (uint)uVar23;
      for (pFVar20 = pFVar8;
          pFVar20 != pFVar8 + (longlong)(this->SmoothedToOriginalMap).ArrayNum * 4;
          pFVar20 = pFVar20 + 4) {
        pFVar26 = pFVar8;
        if (*(uint *)pFVar20 == uVar22) goto LAB_14c986fc5;
      }
      goto LAB_14c987122;
    }
    pTVar3 = &this->SavedMesh;
    plVar1 = &this->_padding_;
    if ((TUniquePtr<UE::Geometry::FDynamicMesh3,TDefaultDelete<UE::Geometry::FDynamicMesh3>_> *)
        plVar1 != pTVar3) {
      puVar11 = (undefined8 *)*plVar1;
      *plVar1 = (longlong)pTVar3->Ptr;
      pTVar3->Ptr = (FDynamicMesh3 *)0x0;
      if (puVar11 != (undefined8 *)0x0) {
        (**(code **)*puVar11)();
      }
    }
    goto LAB_14c98736d;
  }
  lVar19 = this->_padding_;
  uVar24 = *(int *)(lVar19 + 0x20) * 0x200 + *(int *)(lVar19 + 0x24);
  uVar23 = 0;
  if ((uVar24 != 0) &&
     (uVar23 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar19 + 0x28) - 1U))) {
    uVar23 = 1;
    uVar22 = 1;
    if ((int)uVar24 < 2) goto joined_r0x00014c9871f8;
    do {
      uVar21 = (ulonglong)((uint)uVar23 & 0x1ff);
      lVar10 = (*(undefined8 **)(lVar19 + 0x28))[uVar23 >> 9];
      if ((*(short *)(lVar10 + uVar21 * 2) != 0) && (*(short *)(lVar10 + uVar21 * 2) != -1)) break;
      uVar22 = (uint)uVar23 + 1;
      uVar23 = (ulonglong)uVar22;
    } while ((int)uVar22 < (int)uVar24);
  }
  uVar22 = (uint)uVar23;
joined_r0x00014c9871f8:
  do {
    if (uVar22 == uVar24) {
LAB_14c98736d:
      pTVar28 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
      local_78.Mesh = (FDynamicMesh3 *)this->_padding_;
      pFVar13 = ((local_78.Mesh)->AttributeSet).Ptr;
      if (pFVar13 == (FDynamicMeshAttributeSet *)0x0) {
        FMeshNormals::QuickComputeVertexNormals(local_78.Mesh,false);
      }
      else {
        local_78.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Normals.ArrayNum = 0;
        local_78.Normals.ArrayMax = 0;
        if (0 < (pFVar13->NormalLayers).Array.ArrayNum) {
          pTVar28 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                     (pFVar13->NormalLayers).Array.AllocatorInstance.Data;
        }
        FMeshNormals::Compute_Overlay_FaceAvg(&local_78,pTVar28,true,true);
        FMeshNormals::CopyToOverlay(&local_78,pTVar28,false);
        if (local_78.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Normals.AllocatorInstance.Data);
          return;
        }
      }
      return;
    }
    while( true ) {
      uVar22 = (uint)uVar23;
      uVar18 = 0;
      if ((int)uVar22 < (this->PositionBuffer).ArrayNum) {
        uVar18 = ~uVar22 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pFVar8 = (this->PositionBuffer).AllocatorInstance.Data;
      lVar10 = this->_padding_;
      lVar27 = (longlong)(int)uVar22;
      local_50 = *(undefined8 *)(pFVar8 + lVar27 * 0x18 + 0x10);
      uVar6 = *(undefined8 *)(pFVar8 + lVar27 * 0x18 + 8);
      sVar17 = _dclass(*(undefined8 *)(pFVar8 + lVar27 * 0x18));
      if (((sVar17 < 1) && (sVar17 = _dclass(uVar6), sVar17 < 1)) &&
         (sVar17 = _dclass(local_50), sVar17 < 1)) {
        uVar15 = *(undefined8 *)(pFVar8 + lVar27 * 0x18 + 8);
        uVar6 = *(undefined8 *)(pFVar8 + lVar27 * 0x18 + 0x10);
        lVar12 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + (uVar23 >> 9) * 8);
        puVar11 = (undefined8 *)(lVar12 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
        *puVar11 = *(undefined8 *)(pFVar8 + lVar27 * 0x18);
        puVar11[1] = uVar15;
        *(undefined8 *)(lVar12 + 0x10 + (ulonglong)(uVar22 & 0x1ff) * 0x18) = uVar6;
        if (*(char *)(lVar10 + 0x21c) != '\0') {
          this_01 = (atomic<unsigned_char> *)(lVar10 + 0x21d);
          LOCK();
          FVar5.State = *this_01;
          if (FVar5.State == (atomic<unsigned_char>)0x0) {
            *this_01 = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (FVar5.State != (atomic<unsigned_char>)0x0) {
            FMutex::LockSlow((FMutex *)this_01);
          }
          *(int *)(lVar10 + 0x220) = *(int *)(lVar10 + 0x220) + 1;
          LOCK();
          aVar4 = *this_01;
          *this_01 = (atomic<unsigned_char>)((char)*this_01 + -1);
          UNLOCK();
          if (((byte)aVar4 & 2) != 0) {
            FMutex::WakeWaitingThread((FMutex *)this_01);
          }
        }
      }
      uVar22 = uVar22 + 1;
      uVar23 = (ulonglong)uVar22;
      if ((int)uVar24 <= (int)uVar22) break;
      while( true ) {
        uVar21 = (ulonglong)((uint)uVar23 & 0x1ff);
        lVar10 = *(longlong *)(*(longlong *)(lVar19 + 0x28) + (uVar23 >> 9) * 8);
        if ((*(short *)(lVar10 + uVar21 * 2) != 0) && (*(short *)(lVar10 + uVar21 * 2) != -1))
        break;
        uVar22 = (uint)uVar23 + 1;
        uVar23 = (ulonglong)uVar22;
        if ((int)uVar24 <= (int)uVar22) goto joined_r0x00014c9871f8;
      }
    }
  } while( true );
  while (pFVar26 = pFVar26 + 4,
        pFVar26 != pFVar8 + (longlong)(this->SmoothedToOriginalMap).ArrayNum * 4) {
LAB_14c986fc5:
    if (*(uint *)pFVar26 == uVar22) {
      uVar25 = (uint)((longlong)pFVar26 - (longlong)pFVar8 >> 2);
      uVar18 = 0;
      if ((int)uVar25 < (this->PositionBuffer).ArrayNum) {
        uVar18 = ~uVar25 >> 0x1f;
      }
      if (uVar18 != 0) goto LAB_14c987037;
      goto LAB_14c987001;
    }
  }
  uVar25 = 0xffffffff;
LAB_14c987001:
  bVar16 = ::FDebug::CheckVerifyFailedImpl2
                     ("(Index >= 0) & (Index < ArrayNum)",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                      ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  if (bVar16) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
LAB_14c987037:
  pFVar8 = (this->PositionBuffer).AllocatorInstance.Data;
  lVar19 = (longlong)(int)uVar25;
  pFVar9 = (this->SavedMesh).Ptr;
  local_50 = *(undefined8 *)(pFVar8 + lVar19 * 0x18 + 0x10);
  uVar6 = *(undefined8 *)(pFVar8 + lVar19 * 0x18 + 8);
  sVar17 = _dclass(*(undefined8 *)(pFVar8 + lVar19 * 0x18));
  if (((sVar17 < 1) && (sVar17 = _dclass(uVar6), sVar17 < 1)) &&
     (sVar17 = _dclass(local_50), sVar17 < 1)) {
    uVar15 = *(undefined8 *)(pFVar8 + lVar19 * 0x18 + 8);
    uVar6 = *(undefined8 *)(pFVar8 + lVar19 * 0x18 + 0x10);
    lVar10 = *(longlong *)((pFVar9->Vertices).Blocks.AllocatorInstance.Data + (uVar23 >> 9) * 8);
    puVar11 = (undefined8 *)(lVar10 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
    *puVar11 = *(undefined8 *)(pFVar8 + lVar19 * 0x18);
    puVar11[1] = uVar15;
    *(undefined8 *)(lVar10 + 0x10 + (ulonglong)(uVar22 & 0x1ff) * 0x18) = uVar6;
    if ((pFVar9->ChangeStampShape).bIsEnabled != false) {
      this_00 = &(pFVar9->ChangeStampShape).Mutex;
      LOCK();
      bVar16 = this_00->State == (atomic<unsigned_char>)0x0;
      if (bVar16) {
        this_00->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar16) {
        FMutex::LockSlow(this_00);
      }
      puVar2 = &(pFVar9->ChangeStampShape).Value;
      *puVar2 = *puVar2 + 1;
      LOCK();
      aVar4 = this_00->State;
      this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
      UNLOCK();
      if (((byte)aVar4 & 2) != 0) {
        FMutex::WakeWaitingThread(this_00);
      }
    }
  }
LAB_14c987122:
  uVar22 = uVar22 + 1;
  uVar23 = (ulonglong)uVar22;
  if ((int)uVar24 <= (int)uVar22) goto joined_r0x00014c98715b;
  while( true ) {
    sVar17 = *(short *)(*(longlong *)
                         ((pFVar7->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                         (uVar23 >> 9) * 8) + (ulonglong)((uint)uVar23 & 0x1ff) * 2);
    if ((sVar17 != 0) && (sVar17 != -1)) break;
    uVar22 = (uint)uVar23 + 1;
    uVar23 = (ulonglong)uVar22;
    if ((int)uVar24 <= (int)uVar22) goto joined_r0x00014c98715b;
  }
  goto LAB_14c986f90;
}

