// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StaticMeshDescription
// Functions: 7

// FLayoutUVMeshDescriptionView @ 14436a540

FLayoutUVMeshDescriptionView * __thiscall
FLayoutUVMeshDescriptionView::FLayoutUVMeshDescriptionView
          (FLayoutUVMeshDescriptionView *this,FMeshDescription *param_1,uint param_2,uint param_3)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  int *piVar4;
  FScriptContainerElement *pFVar5;
  int *piVar6;
  int *piVar7;
  FVertexInstanceID FVar8;
  FMeshDescription *pFVar9;
  FVertexInstanceID *pFVar10;
  TVector2<float>_u_0_s_0 TVar11;
  code *pcVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  FMeshElementContainer *pFVar16;
  TTuple<FName,FAttributesSetEntry> *pTVar17;
  FMeshAttributeArraySetBase *pFVar18;
  TArrayView<FVertexInstanceID,int> *pTVar19;
  FLayoutUVMeshDescriptionView *pFVar20;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *pTVar21;
  TVector2<float>_u_0_s_0 *pTVar22;
  int iVar23;
  longlong *plVar24;
  longlong lVar25;
  uint uVar26;
  longlong lVar27;
  longlong lVar28;
  uint uVar29;
  uint uVar30;
  FTriangleID *pFVar31;
  TElementIDs local_b8;
  longlong local_b0;
  longlong local_a8;
  FTriangleID *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_98;
  TArrayView<FTriangleID_const_,int> local_78;
  TArrayView<FVertexInstanceID,int> local_68;
  TConstIterator local_58;
  
  this->MeshDescription = param_1;
  pTVar1 = &this->RemapVerts;
  pTVar2 = &this->FlattenedTexCoords;
  this->DstChannel = param_3;
  this->_padding_ = (longlong)&___7FLayoutUVMeshDescriptionView__6B_;
  piVar6 = &(this->FlattenedTexCoords).ArrayNum;
  (this->Positions).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  piVar3 = &(this->RemapVerts).ArrayNum;
  (this->Normals).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  piVar4 = &(this->RemapVerts).ArrayMax;
  (this->TexCoords).ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  piVar7 = &(this->FlattenedTexCoords).ArrayMax;
  this->SrcChannel = param_2;
  this->NumIndices = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar3 = 0;
  *piVar4 = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar6 = 0;
  *piVar7 = 0;
  pFVar16 = FMeshElementChannels::Get(param_1->VertexElements,0);
  pTVar17 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar16->Attributes,MeshAttribute::Vertex::Position);
  plVar24 = (longlong *)&pTVar17->field_0x8;
  if (pTVar17 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar24 = (longlong *)0x0;
  }
  if (((plVar24 == (longlong *)0x0) ||
      (pFVar18 = (FMeshAttributeArraySetBase *)*plVar24, pFVar18->Type != 1)) ||
     (pFVar18->Extent != 1)) {
    pFVar18 = (FMeshAttributeArraySetBase *)0x0;
  }
  (this->Positions).ArrayPtr = pFVar18;
  pFVar16 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar17 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar16->Attributes,MeshAttribute::VertexInstance::Normal);
  plVar24 = (longlong *)&pTVar17->field_0x8;
  if (pTVar17 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar24 = (longlong *)0x0;
  }
  if (((plVar24 == (longlong *)0x0) ||
      (pFVar18 = (FMeshAttributeArraySetBase *)*plVar24, pFVar18->Type != 1)) ||
     (pFVar18->Extent != 1)) {
    pFVar18 = (FMeshAttributeArraySetBase *)0x0;
  }
  (this->Normals).ArrayPtr = pFVar18;
  pFVar16 = FMeshElementChannels::Get(param_1->VertexInstanceElements,0);
  pTVar17 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                    *)&pFVar16->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
  plVar24 = (longlong *)&pTVar17->field_0x8;
  if (pTVar17 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar24 = (longlong *)0x0;
  }
  if (((plVar24 == (longlong *)0x0) ||
      (pFVar18 = (FMeshAttributeArraySetBase *)*plVar24, pFVar18->Type != 2)) ||
     (pFVar18->Extent != 1)) {
    pFVar18 = (FMeshAttributeArraySetBase *)0x0;
  }
  pFVar9 = this->MeshDescription;
  (this->TexCoords).ArrayPtr = pFVar18;
  pFVar16 = FMeshElementChannels::Get(pFVar9->TriangleElements,0);
  iVar23 = (pFVar16->BitArray).NumBits - pFVar16->NumHoles;
  uVar29 = iVar23 * 3;
  this->NumIndices = uVar29;
  iVar14 = *piVar6;
  if (iVar14 < (int)uVar29) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar29 - iVar14,&pTVar2->AllocatorInstance,piVar6,piVar7);
  }
  else {
    if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar29);
    }
    if ((int)uVar29 < iVar14) {
      uVar30 = iVar14 + iVar23 * -3;
      if ((int)(uVar30 | uVar29) < 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar13) {
          pcVar12 = (code *)swi(3);
          pFVar20 = (FLayoutUVMeshDescriptionView *)(*pcVar12)();
          return pFVar20;
        }
      }
      if (uVar30 != 0) {
        pFVar5 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar29 * 8;
        iVar14 = (*piVar6 - uVar30) + iVar23 * -3;
        if (iVar14 != 0) {
          memmove(pFVar5,pFVar5 + (longlong)(int)uVar30 * 8,(longlong)iVar14 << 3);
        }
        *piVar6 = *piVar6 - uVar30;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,&pTVar2->AllocatorInstance,*piVar6,piVar7);
      }
    }
  }
  iVar14 = *piVar3;
  uVar29 = this->NumIndices;
  if (iVar14 < (int)uVar29) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar29 - iVar14,&pTVar1->AllocatorInstance,piVar3,piVar4);
  }
  else {
    if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar29);
    }
    if ((int)uVar29 < iVar14) {
      uVar30 = iVar14 - uVar29;
      if ((int)(uVar29 | uVar30) < 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar13) {
          pcVar12 = (code *)swi(3);
          pFVar20 = (FLayoutUVMeshDescriptionView *)(*pcVar12)();
          return pFVar20;
        }
      }
      if (uVar30 != 0) {
        pFVar5 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar29 * 4;
        iVar14 = (*piVar3 - uVar30) - uVar29;
        if (iVar14 != 0) {
          memmove(pFVar5,pFVar5 + (longlong)(int)uVar30 * 4,(longlong)iVar14 << 2);
        }
        *piVar3 = *piVar3 - uVar30;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&pTVar1->AllocatorInstance,*piVar3,piVar4);
      }
    }
  }
  uVar29 = 0;
  local_b8.Array = &FMeshElementChannels::Get(this->MeshDescription->PolygonElements,0)->BitArray;
  TMeshElementContainer<FPolygonID>::TElementIDs::begin(&local_b8,(TConstIterator *)&local_98);
  TMeshElementContainer<FPolygonID>::TElementIDs::end(&local_b8,&local_58);
  lVar25 = 0;
  local_b0 = 0;
  while( true ) {
    if ((local_98.CurrentBitIndex == local_58.Iterator.CurrentBitIndex) &&
       (local_98.Array == local_58.Iterator.Array)) break;
    iVar14 = -1;
    if (local_98.CurrentBitIndex < (local_98.Array)->NumBits) {
      iVar14 = local_98.CurrentBitIndex;
    }
    FMeshElementIndexer::Find<FTriangleID>
              (&this->MeshDescription->PolygonToTriangles,&local_78,iVar14,0);
    local_a0 = local_78.DataPtr + local_78.ArrayNum;
    if (local_78.DataPtr != local_a0) {
      lVar27 = lVar25 * 4 + 8;
      uVar30 = uVar29 + 2;
      lVar28 = lVar25 * 8 + 0x10;
      pFVar31 = local_78.DataPtr;
      do {
        local_a8 = lVar27;
        pTVar19 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                            (&this->MeshDescription->TriangleVertexInstances,&local_68,(int)*pFVar31
                            );
        pFVar10 = pTVar19->DataPtr;
        if (pTVar19->ArrayNum < 1) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar13) {
            pcVar12 = (code *)swi(3);
            pFVar20 = (FLayoutUVMeshDescriptionView *)(*pcVar12)();
            return pFVar20;
          }
        }
        FVar8 = *pFVar10;
        pTVar21 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                            ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)
                             (this->TexCoords).ArrayPtr,this->SrcChannel);
        pTVar22 = (TVector2<float>_u_0_s_0 *)
                  TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                            (pTVar21,(int)FVar8);
        TVar11 = *pTVar22;
        uVar15 = 0;
        if ((int)uVar29 < *piVar6) {
          uVar15 = ~uVar29 >> 0x1f;
        }
        if (uVar15 == 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar12 = (code *)swi(3);
            pFVar20 = (FLayoutUVMeshDescriptionView *)(*pcVar12)();
            return pFVar20;
          }
        }
        ((TVector2<float>_u_0 *)((pTVar2->AllocatorInstance).Data + lVar28 + -0x10))->_s_0 = TVar11;
        uVar15 = 0;
        if ((int)uVar29 < (this->RemapVerts).ArrayNum) {
          uVar15 = ~uVar29 >> 0x1f;
        }
        if (uVar15 == 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar12 = (code *)swi(3);
            pFVar20 = (FLayoutUVMeshDescriptionView *)(*pcVar12)();
            return pFVar20;
          }
        }
        *(FVertexInstanceID *)((pTVar1->AllocatorInstance).Data + lVar27 + -8) = FVar8;
        pTVar19 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                            (&this->MeshDescription->TriangleVertexInstances,&local_68,(int)*pFVar31
                            );
        pFVar10 = pTVar19->DataPtr;
        if (pTVar19->ArrayNum < 2) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar13) {
            pcVar12 = (code *)swi(3);
            pFVar20 = (FLayoutUVMeshDescriptionView *)(*pcVar12)();
            return pFVar20;
          }
        }
        FVar8 = pFVar10[1];
        pTVar21 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                            ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)
                             (this->TexCoords).ArrayPtr,this->SrcChannel);
        pTVar22 = (TVector2<float>_u_0_s_0 *)
                  TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                            (pTVar21,(int)FVar8);
        uVar26 = ~(uVar30 - 1) >> 0x1f;
        TVar11 = *pTVar22;
        uVar15 = 0;
        if ((int)(uVar30 - 1) < *piVar6) {
          uVar15 = uVar26;
        }
        if (uVar15 == 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar12 = (code *)swi(3);
            pFVar20 = (FLayoutUVMeshDescriptionView *)(*pcVar12)();
            return pFVar20;
          }
        }
        ((TVector2<float>_u_0 *)((pTVar2->AllocatorInstance).Data + lVar28 + -8))->_s_0 = TVar11;
        uVar15 = 0;
        if ((int)(uVar30 - 1) < (this->RemapVerts).ArrayNum) {
          uVar15 = uVar26;
        }
        if (uVar15 == 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar12 = (code *)swi(3);
            pFVar20 = (FLayoutUVMeshDescriptionView *)(*pcVar12)();
            return pFVar20;
          }
        }
        lVar27 = local_a8;
        *(FVertexInstanceID *)((pTVar1->AllocatorInstance).Data + local_a8 + -4) = FVar8;
        pTVar19 = TMeshAttributesRef<int,TArrayView<FVertexInstanceID,int>_>::operator[]
                            (&this->MeshDescription->TriangleVertexInstances,&local_68,(int)*pFVar31
                            );
        pFVar10 = pTVar19->DataPtr;
        if (pTVar19->ArrayNum < 3) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar13) {
            pcVar12 = (code *)swi(3);
            pFVar20 = (FLayoutUVMeshDescriptionView *)(*pcVar12)();
            return pFVar20;
          }
        }
        FVar8 = pFVar10[2];
        pTVar21 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                            ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)
                             (this->TexCoords).ArrayPtr,this->SrcChannel);
        pTVar22 = (TVector2<float>_u_0_s_0 *)
                  TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                            (pTVar21,(int)FVar8);
        TVar11 = *pTVar22;
        uVar15 = 0;
        if ((int)uVar30 < *piVar6) {
          uVar15 = ~uVar30 >> 0x1f;
        }
        if (uVar15 == 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar12 = (code *)swi(3);
            pFVar20 = (FLayoutUVMeshDescriptionView *)(*pcVar12)();
            return pFVar20;
          }
        }
        ((TVector2<float>_u_0 *)((pTVar2->AllocatorInstance).Data + lVar28))->_s_0 = TVar11;
        uVar15 = 0;
        if ((int)uVar30 < (this->RemapVerts).ArrayNum) {
          uVar15 = ~uVar30 >> 0x1f;
        }
        if (uVar15 == 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar12 = (code *)swi(3);
            pFVar20 = (FLayoutUVMeshDescriptionView *)(*pcVar12)();
            return pFVar20;
          }
        }
        uVar29 = uVar29 + 3;
        uVar30 = uVar30 + 3;
        lVar28 = lVar28 + 0x18;
        pFVar31 = pFVar31 + 1;
        *(FVertexInstanceID *)((pTVar1->AllocatorInstance).Data + lVar27) = FVar8;
        lVar27 = lVar27 + 0xc;
        lVar25 = local_b0 + 3;
        local_b0 = lVar25;
        local_a8 = lVar27;
      } while (pFVar31 != local_a0);
    }
    local_98.UnvisitedBitMask = local_98.UnvisitedBitMask & ~local_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_98);
  }
  return this;
}

// GetInputTexcoord @ 144380db0

TVector2<float> __thiscall
FLayoutUVMeshDescriptionView::GetInputTexcoord(FLayoutUVMeshDescriptionView *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector2<float> TVar4;
  undefined4 in_register_00000014;
  TVector2<float>_u_0 TVar5;
  uint in_R8D;
  
  TVar5._s_0.Y = (float)in_register_00000014;
  TVar5._s_0.X = (float)param_1;
  uVar3 = 0;
  if ((int)in_R8D < (this->FlattenedTexCoords).ArrayNum) {
    uVar3 = ~in_R8D >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar4.field0_0x0 = (TVector2<float>_u_0)(*pcVar1)();
      return (TVector2<float>)TVar4.field0_0x0;
    }
  }
  *(undefined8 *)TVar5 =
       *(undefined8 *)
        ((this->FlattenedTexCoords).AllocatorInstance.Data + (longlong)(int)in_R8D * 8);
  return (TVector2<float>)TVar5;
}

// GetNormal @ 144380ee0

TVector<float> * __thiscall
FLayoutUVMeshDescriptionView::GetNormal
          (FLayoutUVMeshDescriptionView *this,TVector<float> *__return_storage_ptr__,uint param_1)

{
  int iVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TVector<float> *pTVar6;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_00;
  
  uVar5 = 0;
  if ((int)param_1 < (this->RemapVerts).ArrayNum) {
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
  iVar1 = *(int *)((this->RemapVerts).AllocatorInstance.Data + (longlong)(int)param_1 * 4);
  this_00 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                      ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(this->Normals).ArrayPtr
                       ,0);
  pTVar6 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(this_00,iVar1);
  fVar2 = (pTVar6->field0_0x0)._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&pTVar6->field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar2;
  return __return_storage_ptr__;
}

// GetNumIndices @ 144381040

uint __thiscall FLayoutUVMeshDescriptionView::GetNumIndices(FLayoutUVMeshDescriptionView *this)

{
  return this->NumIndices;
}

// GetPosition @ 144381140

TVector<float> * __thiscall
FLayoutUVMeshDescriptionView::GetPosition
          (FLayoutUVMeshDescriptionView *this,TVector<float> *__return_storage_ptr__,uint param_1)

{
  int iVar1;
  FVertexID FVar2;
  float fVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<float> *pTVar7;
  TMeshAttributeArrayBase<FVertexID> *this_00;
  FVertexID *pFVar8;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *this_01;
  
  uVar6 = 0;
  if ((int)param_1 < (this->RemapVerts).ArrayNum) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<float> *)(*pcVar4)();
      return pTVar7;
    }
  }
  iVar1 = *(int *)((this->RemapVerts).AllocatorInstance.Data + (longlong)(int)param_1 * 4);
  this_00 = TMeshAttributeArraySet<FVertexID>::GetArrayForChannel
                      ((TMeshAttributeArraySet<FVertexID> *)
                       (this->MeshDescription->VertexInstanceVertices).ArrayPtr,0);
  pFVar8 = TMeshAttributeArrayBase<FVertexID>::GetElementBase(this_00,iVar1);
  FVar2 = *pFVar8;
  this_01 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                      ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)
                       (this->Positions).ArrayPtr,0);
  pTVar7 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(this_01,(int)FVar2);
  fVar3 = (pTVar7->field0_0x0)._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&pTVar7->field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar3;
  return __return_storage_ptr__;
}

// InitOutputTexcoords @ 1443845b0

void __thiscall
FLayoutUVMeshDescriptionView::InitOutputTexcoords(FLayoutUVMeshDescriptionView *this,uint param_1)

{
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *this_00;
  code *pcVar1;
  bool bVar2;
  
  this_00 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)(this->TexCoords).ArrayPtr;
  if ((uint)(this_00->ArrayForChannels).ArrayNum <= this->DstChannel) {
    TMeshAttributeArraySet<UE::Math::TVector2<float>_>::SetNumChannels(this_00,this->DstChannel + 1)
    ;
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2226201907385337703>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StaticMeshDescription\\Private\\StaticMeshOperations.cpp"
                       ,0x767,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetOutputTexcoord @ 144388110

void __thiscall
FLayoutUVMeshDescriptionView::SetOutputTexcoord
          (FLayoutUVMeshDescriptionView *this,uint param_1,TVector2<float> *param_2)

{
  int iVar1;
  TVector2<float>_u_0 TVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *this_00;
  TVector2<float>_u_0 *pTVar6;
  
  uVar5 = 0;
  if ((int)param_1 < (this->RemapVerts).ArrayNum) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TVar2 = param_2->field0_0x0;
  iVar1 = *(int *)((this->RemapVerts).AllocatorInstance.Data + (longlong)(int)param_1 * 4);
  this_00 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                      ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)
                       (this->TexCoords).ArrayPtr,this->DstChannel);
  pTVar6 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase(this_00,iVar1)->
            field0_0x0;
  *pTVar6 = TVar2;
  return;
}

