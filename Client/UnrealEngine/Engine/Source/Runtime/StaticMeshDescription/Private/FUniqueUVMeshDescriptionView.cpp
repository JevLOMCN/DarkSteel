// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StaticMeshDescription
// Functions: 7

// FUniqueUVMeshDescriptionView @ 14436ad60

FUniqueUVMeshDescriptionView * __thiscall
FUniqueUVMeshDescriptionView::FUniqueUVMeshDescriptionView
          (FUniqueUVMeshDescriptionView *this,FMeshDescription *param_1,bool param_2,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FMeshDescription *pFVar2;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FMeshElementContainer *pFVar8;
  TTuple<FName,FAttributesSetEntry> *pTVar9;
  FMeshAttributeArraySetBase *pFVar10;
  FUniqueUVMeshDescriptionView *pFVar11;
  FScriptContainerElement *_Dst;
  uint uVar12;
  FMeshAttributeArraySetBase *pFVar13;
  uint uVar14;
  
  this->MeshDescription = param_1;
  pFVar13 = (FMeshAttributeArraySetBase *)0x0;
  this->_padding_ = (longlong)&___7FUniqueUVMeshDescriptionView__6B_;
  (this->Positions).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->Normals).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->TexCoords).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  (this->RemapTriangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemapTriangles).ArrayNum = 0;
  (this->RemapTriangles).ArrayMax = 0;
  (this->UniqueVerts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueVerts).ArrayNum = 0;
  (this->UniqueVerts).ArrayMax = 0;
  pFVar2 = this->MeshDescription;
  this->OutputTexCoords = param_3;
  pFVar8 = FMeshElementChannels::Get(pFVar2->VertexElements,0);
  pTVar9 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)&pFVar8->Attributes,MeshAttribute::Vertex::Position);
  pFVar10 = (FMeshAttributeArraySetBase *)&pTVar9->field_0x8;
  if (pTVar9 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pFVar10 = pFVar13;
  }
  if (((pFVar10 == (FMeshAttributeArraySetBase *)0x0) ||
      (pFVar10 = (FMeshAttributeArraySetBase *)pFVar10->_padding_, pFVar10->Type != 1)) ||
     (pFVar10->Extent != 1)) {
    pFVar10 = pFVar13;
  }
  (this->Positions).ArrayPtr = pFVar10;
  pFVar8 = FMeshElementChannels::Get(pFVar2->VertexInstanceElements,0);
  pTVar9 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)&pFVar8->Attributes,MeshAttribute::VertexInstance::Normal);
  pFVar10 = (FMeshAttributeArraySetBase *)&pTVar9->field_0x8;
  if (pTVar9 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pFVar10 = pFVar13;
  }
  if (((pFVar10 == (FMeshAttributeArraySetBase *)0x0) ||
      (pFVar10 = (FMeshAttributeArraySetBase *)pFVar10->_padding_, pFVar10->Type != 1)) ||
     (pFVar10->Extent != 1)) {
    pFVar10 = pFVar13;
  }
  (this->Normals).ArrayPtr = pFVar10;
  pFVar8 = FMeshElementChannels::Get(pFVar2->VertexInstanceElements,0);
  pTVar9 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)&pFVar8->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
  pFVar10 = (FMeshAttributeArraySetBase *)&pTVar9->field_0x8;
  if (pTVar9 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    pFVar10 = pFVar13;
  }
  if (((pFVar10 == (FMeshAttributeArraySetBase *)0x0) ||
      (pFVar10 = (FMeshAttributeArraySetBase *)pFVar10->_padding_, pFVar10->Type != 2)) ||
     (pFVar10->Extent != 1)) {
    pFVar10 = pFVar13;
  }
  pFVar2 = this->MeshDescription;
  pTVar3 = this->OutputTexCoords;
  (this->TexCoords).ArrayPtr = pFVar10;
  pFVar8 = FMeshElementChannels::Get(pFVar2->VertexInstanceElements,0);
  iVar7 = pTVar3->ArrayNum;
  piVar1 = &pTVar3->ArrayNum;
  uVar12 = (pFVar8->BitArray).NumBits - pFVar8->NumHoles;
  if (iVar7 < (int)uVar12) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar12 - iVar7,&pTVar3->AllocatorInstance,piVar1,&pTVar3->ArrayMax);
    memset((pTVar3->AllocatorInstance).Data + (longlong)iVar6 * 0x10,0,
           (longlong)(int)(uVar12 - iVar7) << 4);
  }
  else {
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    if ((int)uVar12 < iVar7) {
      uVar14 = iVar7 - uVar12;
      if (((int)(uVar14 | uVar12) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FUniqueUVMeshDescriptionView *)(*pcVar4)();
        return pFVar11;
      }
      if (uVar14 != 0) {
        _Dst = (pTVar3->AllocatorInstance).Data + (longlong)(int)uVar12 * 0x10;
        iVar7 = (*piVar1 - uVar14) - uVar12;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar14 * 0x10,(longlong)iVar7 << 4);
        }
        *piVar1 = *piVar1 - uVar14;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&pTVar3->AllocatorInstance,*piVar1,&pTVar3->ArrayMax);
      }
    }
  }
  bVar5 = GatherUniqueTriangles
                    (this->MeshDescription,param_2,&this->RemapTriangles,&this->UniqueVerts,
                     (TArray<FTriangleID,TSizedDefaultAllocator<32>_> *)0x0);
  this->bMustRemap = bVar5;
  return this;
}

// GetInputTexcoord @ 144380e40

TVector2<float> __thiscall
FUniqueUVMeshDescriptionView::GetInputTexcoord(FUniqueUVMeshDescriptionView *this,uint param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TVector2<float> TVar5;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this_00;
  TVector2<float>_u_0_s_0 *pTVar6;
  undefined4 in_register_00000014;
  TVector2<float>_u_0 TVar7;
  uint in_R8D;
  
  TVar7._s_0.Y = (float)in_register_00000014;
  TVar7._s_0.X = (float)param_1;
  uVar4 = 0;
  if ((int)in_R8D < (this->UniqueVerts).ArrayNum) {
    uVar4 = ~in_R8D >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar5.field0_0x0 = (TVector2<float>_u_0)(*pcVar2)();
      return (TVector2<float>)TVar5.field0_0x0;
    }
  }
  iVar1 = *(int *)((this->UniqueVerts).AllocatorInstance.Data + (longlong)(int)in_R8D * 4);
  this_00 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                      ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)
                       (this->TexCoords).ArrayPtr,0);
  pTVar6 = (TVector2<float>_u_0_s_0 *)
           TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase(this_00,iVar1);
  *(TVector2<float>_u_0_s_0 *)TVar7 = *pTVar6;
  return (TVector2<float>)TVar7;
}

// GetNormal @ 144380f90

TVector<float> * __thiscall
FUniqueUVMeshDescriptionView::GetNormal
          (FUniqueUVMeshDescriptionView *this,TVector<float> *__return_storage_ptr__,uint param_1)

{
  int iVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<float> *pTVar6;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_00;
  
  uVar5 = 0;
  if ((int)param_1 < (this->UniqueVerts).ArrayNum) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TVector<float> *)(*pcVar3)();
      return pTVar6;
    }
  }
  iVar1 = *(int *)((this->UniqueVerts).AllocatorInstance.Data + (longlong)(int)param_1 * 4);
  this_00 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                      ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(this->Normals).ArrayPtr
                       ,0);
  pTVar6 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(this_00,iVar1);
  fVar2 = (pTVar6->field0_0x0)._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&pTVar6->field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2;
  return __return_storage_ptr__;
}

// GetNumIndices @ 144381050

uint __thiscall FUniqueUVMeshDescriptionView::GetNumIndices(FUniqueUVMeshDescriptionView *this)

{
  return (this->UniqueVerts).ArrayNum;
}

// GetPosition @ 144381210

TVector<float> * __thiscall
FUniqueUVMeshDescriptionView::GetPosition
          (FUniqueUVMeshDescriptionView *this,TVector<float> *__return_storage_ptr__,uint param_1)

{
  int iVar1;
  FVertexID FVar2;
  float fVar3;
  FMeshDescription *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TVector<float> *pTVar8;
  TMeshAttributeArrayBase<FVertexID> *this_00;
  FVertexID *pFVar9;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_01;
  
  pFVar4 = this->MeshDescription;
  uVar7 = 0;
  if ((int)param_1 < (this->UniqueVerts).ArrayNum) {
    uVar7 = ~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TVector<float> *)(*pcVar5)();
      return pTVar8;
    }
  }
  iVar1 = *(int *)((this->UniqueVerts).AllocatorInstance.Data + (longlong)(int)param_1 * 4);
  this_00 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                      ((TMeshAttributeArraySet<FVertexID> *)
                       (pFVar4->VertexInstanceVertices).ArrayPtr,0);
  pFVar9 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_00,iVar1);
  FVar2 = *pFVar9;
  this_01 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                      ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                       (this->Positions).ArrayPtr,0);
  pTVar8 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(this_01,(int)FVar2);
  fVar3 = (pTVar8->field0_0x0)._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&pTVar8->field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar3;
  return __return_storage_ptr__;
}

// InitOutputTexcoords @ 144384610

void __thiscall
FUniqueUVMeshDescriptionView::InitOutputTexcoords(FUniqueUVMeshDescriptionView *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != (this->UniqueVerts).ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num == UniqueVerts.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StaticMeshDescription\\Private\\StaticMeshOperations.cpp"
                       ,0x83d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetOutputTexcoord @ 1443881b0

void __thiscall
FUniqueUVMeshDescriptionView::SetOutputTexcoord
          (FUniqueUVMeshDescriptionView *this,uint param_1,TVector2<float> *param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  
  pTVar4 = this->OutputTexCoords;
  fVar1 = (param_2->field0_0x0)._s_0.X;
  fVar2 = (param_2->field0_0x0)._s_0.Y;
  uVar3 = 0;
  if ((int)param_1 < (this->UniqueVerts).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar3 = *(uint *)((this->UniqueVerts).AllocatorInstance.Data + (longlong)(int)param_1 * 4);
  uVar8 = 0;
  if ((int)uVar3 < pTVar4->ArrayNum) {
    uVar8 = ~uVar3 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar5 = (pTVar4->AllocatorInstance).Data;
  *(double *)(pFVar5 + (longlong)(int)uVar3 * 0x10) = (double)fVar1;
  *(double *)(pFVar5 + (longlong)(int)uVar3 * 0x10 + 8) = (double)fVar2;
  return;
}

