// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SkeletalMeshDescription
// Functions: 3

// FMeshDescriptionTriangleMeshAdapter @ 1443932d0

FMeshDescriptionTriangleMeshAdapter * __thiscall
FMeshDescriptionTriangleMeshAdapter::FMeshDescriptionTriangleMeshAdapter
          (FMeshDescriptionTriangleMeshAdapter *this,FMeshDescription *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  FMeshElementContainer *pFVar5;
  FAttributesSetEntry *pFVar6;
  FMeshAttributeArraySetBase *pFVar7;
  FMeshDescriptionTriangleMeshAdapter *pFVar8;
  FMeshAttributeArraySetBase *pFVar9;
  FVertexInstanceID *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  
  this->Mesh = param_1;
  pFVar9 = (FMeshAttributeArraySetBase *)0x0;
  (this->VertexPositions).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->VertexInstanceNormals).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->VertexInstanceUVs).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->TriangleVertexInstanceIndices).DataPtr = (FVertexInstanceID *)0x0;
  (this->TriangleVertexInstanceIndices).ArrayNum = 0;
  uVar3 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->BuildScale).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->BuildScale).field0_0x0._s_0.Y = (double)uVar3;
  (this->BuildScale).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  this->bScaleNormals = false;
  pFVar5 = FMeshElementChannels::Get(param_1->VertexElements,0);
  pFVar6 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar5->Attributes,MeshAttribute::Vertex::Position);
  if (((pFVar6 == (FAttributesSetEntry *)0x0) || (pFVar7 = (pFVar6->Ptr).Ptr, pFVar7->Type != 1)) ||
     (pFVar7->Extent != 1)) {
    pFVar7 = pFVar9;
  }
  (this->VertexPositions).ArrayPtr = pFVar7;
  pFVar5 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pFVar6 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar5->Attributes,MeshAttribute::VertexInstance::Normal);
  if (((pFVar6 == (FAttributesSetEntry *)0x0) || (pFVar7 = (pFVar6->Ptr).Ptr, pFVar7->Type != 1)) ||
     (pFVar7->Extent != 1)) {
    pFVar7 = pFVar9;
  }
  (this->VertexInstanceNormals).ArrayPtr = pFVar7;
  pFVar5 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pFVar6 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar5->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
  if (((pFVar6 == (FAttributesSetEntry *)0x0) || (pFVar7 = (pFVar6->Ptr).Ptr, pFVar7->Type != 2)) ||
     (pFVar7->Extent != 1)) {
    pFVar7 = pFVar9;
  }
  (this->VertexInstanceUVs).ArrayPtr = pFVar7;
  pFVar5 = FMeshElementChannels::Get(param_1->TriangleElements,0);
  pFVar6 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar5->Attributes,MeshAttribute::Triangle::VertexInstanceIndex);
  if ((pFVar6 != (FAttributesSetEntry *)0x0) && (pFVar9 = (pFVar6->Ptr).Ptr, pFVar9->Type == 4)) {
    uVar1 = pFVar9->Extent;
    if (uVar1 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Extent > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshAttributeArray.h"
                         ,0x484,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FMeshDescriptionTriangleMeshAdapter *)(*pcVar2)();
        return pFVar8;
      }
    }
    if ((pFVar9 != (FMeshAttributeArraySetBase *)0x0) && (pFVar9->NumElements != 0)) {
      if ((int)pFVar9[2].Type < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FMeshDescriptionTriangleMeshAdapter *)(*pcVar2)();
          return pFVar8;
        }
      }
      pFVar7 = (FMeshAttributeArraySetBase *)pFVar9[2]._padding_;
      if ((FMeshAttributeArraySetBase *)pFVar9[2]._padding_ == (FMeshAttributeArraySetBase *)0x0) {
        pFVar7 = pFVar9 + 1;
      }
      if ((int)pFVar7->Type < 1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FMeshDescriptionTriangleMeshAdapter *)(*pcVar2)();
          return pFVar8;
        }
      }
      iStack_20 = uVar1 * pFVar9->NumElements;
      local_28 = (FVertexInstanceID *)pFVar7->_padding_;
      if (iStack_20 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FMeshDescriptionTriangleMeshAdapter *)(*pcVar2)();
          return pFVar8;
        }
      }
      goto LAB_144393506;
    }
  }
  local_28 = (FVertexInstanceID *)0x0;
  iStack_20 = 0;
LAB_144393506:
  (this->TriangleVertexInstanceIndices).DataPtr = local_28;
  *(ulonglong *)&(this->TriangleVertexInstanceIndices).ArrayNum = CONCAT44(uStack_1c,iStack_20);
  return this;
}

// GetTriVertices @ 1443a8380

void __thiscall
FMeshDescriptionTriangleMeshAdapter::GetTriVertices
          (FMeshDescriptionTriangleMeshAdapter *this,int param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  FVertexID FVar6;
  FVertexID *pFVar7;
  code *pcVar8;
  bool bVar9;
  TArrayView<FVertexID,int> *pTVar10;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar11;
  TVector<float> *pTVar12;
  TArrayView<FVertexID,int> local_28;
  
  pTVar10 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                      (&this->Mesh->TriangleVertices,&local_28,param_1);
  iVar5 = pTVar10->ArrayNum;
  pFVar7 = pTVar10->DataPtr;
  if (iVar5 < 1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  FVar6 = *pFVar7;
  pTVar11 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                      ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                       (this->VertexPositions).ArrayPtr,0);
  pTVar12 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar11,(int)FVar6);
  fVar1 = (pTVar12->field0_0x0)._s_0.Y;
  fVar2 = (pTVar12->field0_0x0)._s_0.Z;
  dVar3 = (this->BuildScale).field0_0x0._s_0.Y;
  dVar4 = (this->BuildScale).field0_0x0._s_0.Z;
  (param_2->field0_0x0)._s_0.X =
       (double)(pTVar12->field0_0x0)._s_0.X * (this->BuildScale).field0_0x0._s_0.X;
  (param_2->field0_0x0)._s_0.Y = (double)fVar1 * dVar3;
  (param_2->field0_0x0)._s_0.Z = (double)fVar2 * dVar4;
  if (iVar5 < 2) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  FVar6 = pFVar7[1];
  pTVar11 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                      ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                       (this->VertexPositions).ArrayPtr,0);
  pTVar12 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar11,(int)FVar6);
  fVar1 = (pTVar12->field0_0x0)._s_0.Y;
  fVar2 = (pTVar12->field0_0x0)._s_0.Z;
  dVar3 = (this->BuildScale).field0_0x0._s_0.Y;
  dVar4 = (this->BuildScale).field0_0x0._s_0.Z;
  (param_3->field0_0x0)._s_0.X =
       (double)(pTVar12->field0_0x0)._s_0.X * (this->BuildScale).field0_0x0._s_0.X;
  (param_3->field0_0x0)._s_0.Y = (double)fVar1 * dVar3;
  (param_3->field0_0x0)._s_0.Z = (double)fVar2 * dVar4;
  if (iVar5 < 3) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  FVar6 = pFVar7[2];
  pTVar11 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                      ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                       (this->VertexPositions).ArrayPtr,0);
  pTVar12 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar11,(int)FVar6);
  fVar1 = (pTVar12->field0_0x0)._s_0.Y;
  fVar2 = (pTVar12->field0_0x0)._s_0.Z;
  dVar3 = (this->BuildScale).field0_0x0._s_0.Y;
  dVar4 = (this->BuildScale).field0_0x0._s_0.Z;
  (param_4->field0_0x0)._s_0.X =
       (double)(pTVar12->field0_0x0)._s_0.X * (this->BuildScale).field0_0x0._s_0.X;
  (param_4->field0_0x0)._s_0.Y = (double)fVar1 * dVar3;
  (param_4->field0_0x0)._s_0.Z = (double)fVar2 * dVar4;
  return;
}

// GetTriangle @ 1443a8580

FIndex3i * __thiscall
FMeshDescriptionTriangleMeshAdapter::GetTriangle
          (FMeshDescriptionTriangleMeshAdapter *this,FIndex3i *__return_storage_ptr__,int param_1)

{
  int iVar1;
  FVertexID FVar2;
  FVertexID FVar3;
  FVertexID *pFVar4;
  code *pcVar5;
  bool bVar6;
  TArrayView<FVertexID,int> *pTVar7;
  FIndex3i *pFVar8;
  TArrayView<FVertexID,int> local_18;
  
  pTVar7 = TMeshAttributesRef<int,TArrayView<FVertexID,int>_>::operator[]
                     (&this->Mesh->TriangleVertices,&local_18,param_1);
  iVar1 = pTVar7->ArrayNum;
  pFVar4 = pTVar7->DataPtr;
  if (iVar1 < 3) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FIndex3i *)(*pcVar5)();
      return pFVar8;
    }
  }
  FVar2 = pFVar4[2];
  if (iVar1 < 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FIndex3i *)(*pcVar5)();
      return pFVar8;
    }
  }
  FVar3 = pFVar4[1];
  if (iVar1 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FIndex3i *)(*pcVar5)();
      return pFVar8;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.A = (int)*pFVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.B = (int)FVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.C = (int)FVar2;
  return __return_storage_ptr__;
}

