// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 15

// FHairDescription @ 14e07c930

FHairDescription * __thiscall FHairDescription::FHairDescription(FHairDescription *this)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong *plVar3;
  TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_> *pTVar4;
  FName FVar5;
  FAttributesSetEntry *pFVar6;
  FName FVar7;
  uint uVar8;
  int iVar9;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_00;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar10;
  undefined1 *puVar11;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *pTVar12;
  TPairInitializer<FName_const_&,FAttributesSetEntry_&&> local_res8;
  FName local_res18 [2];
  FName *local_48;
  FAttributesSetEntry **local_40;
  
  pTVar12 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
  *(undefined8 *)&this->VertexAttributesSet = 0;
  *(undefined8 *)&(this->VertexAttributesSet).field_0x8 = 0;
  *(undefined8 *)&(this->VertexAttributesSet).field_0x20 = 0;
  *(undefined4 *)&(this->VertexAttributesSet).field_0x28 = 0;
  *(undefined4 *)&(this->VertexAttributesSet).field_0x2c = 0x80;
  *(undefined4 *)&(this->VertexAttributesSet).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VertexAttributesSet).field_0x34 = 0;
  *(undefined8 *)&(this->VertexAttributesSet).field_0x40 = 0;
  *(undefined4 *)&(this->VertexAttributesSet).field_0x48 = 0;
  *(undefined4 *)&(this->VertexAttributesSet).field_0x50 = 0;
  *(undefined8 *)&this->StrandAttributesSet = 0;
  *(undefined8 *)&(this->StrandAttributesSet).field_0x8 = 0;
  *(undefined8 *)&(this->StrandAttributesSet).field_0x20 = 0;
  *(undefined4 *)&(this->StrandAttributesSet).field_0x28 = 0;
  *(undefined4 *)&(this->StrandAttributesSet).field_0x2c = 0x80;
  *(undefined4 *)&(this->StrandAttributesSet).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StrandAttributesSet).field_0x34 = 0;
  *(undefined8 *)&(this->StrandAttributesSet).field_0x40 = 0;
  *(undefined4 *)&(this->StrandAttributesSet).field_0x48 = 0;
  *(undefined4 *)&(this->StrandAttributesSet).field_0x50 = 0;
  *(undefined8 *)&(this->GroomAttributesSet).field_0x0 = 0;
  *(undefined8 *)&(this->GroomAttributesSet).field_0x8 = 0;
  *(undefined8 *)&(this->GroomAttributesSet).field_0x20 = 0;
  *(undefined4 *)&(this->GroomAttributesSet).field_0x28 = 0;
  *(undefined4 *)&(this->GroomAttributesSet).field_0x2c = 0x80;
  *(undefined4 *)&(this->GroomAttributesSet).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GroomAttributesSet).field_0x34 = 0;
  *(undefined8 *)&(this->GroomAttributesSet).field_0x40 = 0;
  *(undefined4 *)&(this->GroomAttributesSet).field_0x48 = 0;
  *(undefined4 *)&(this->GroomAttributesSet).field_0x50 = 0;
  this->NumVertices = 0;
  FVar5 = HairAttribute::Strand::VertexCount;
  this->NumStrands = 0;
  local_res18[0] = HairAttribute::Strand::VertexCount;
  uVar8 = ::GetTypeHash(HairAttribute::Strand::VertexCount.ComparisonIndex.Value);
  FVar7 = local_res18[0];
  if (*(int *)&(this->StrandAttributesSet).field_0x8 !=
      *(int *)&(this->StrandAttributesSet).field_0x34) {
    puVar11 = *(undefined1 **)&(this->StrandAttributesSet).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->StrandAttributesSet).field_0x38;
    }
    iVar9 = *(int *)(puVar11 +
                    (ulonglong)
                    (*(int *)&(this->StrandAttributesSet).field_0x48 - 1U & FVar5.Number + uVar8) *
                    4);
    if (iVar9 != -1) {
      do {
        lVar1 = *(longlong *)&this->StrandAttributesSet + (longlong)iVar9 * 0x18;
        if (*(FName *)(*(longlong *)&this->StrandAttributesSet + (longlong)iVar9 * 0x18) == FVar5) {
          pTVar10 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(lVar1 + 8);
          if (lVar1 == 0) {
            pTVar10 = pTVar12;
          }
          if (pTVar10 != (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) {
            plVar3 = (longlong *)pTVar10->_padding_;
            if (((int)plVar3[1] == 4) && (*(int *)((longlong)plVar3 + 0xc) == 1)) {
              (**(code **)(*plVar3 + 0x70))(plVar3,1);
              *(undefined4 *)(pTVar10->_padding_ + 0x14) = 0;
              goto LAB_14e07cb7b;
            }
            local_res8.Key = (FName *)local_res18[0];
            uVar8 = ::GetTypeHash(local_res18[0].ComparisonIndex.Value);
            TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                                 *)&this->StrandAttributesSet,FVar7.Number + uVar8,
                                (FName *)&local_res8);
          }
          break;
        }
        iVar9 = *(int *)(lVar1 + 0x10);
      } while (iVar9 != -1);
    }
  }
  uVar2 = *(undefined4 *)&(this->StrandAttributesSet).field_0x50;
  local_res8.Value = (FAttributesSetEntry *)0x0;
  this_00 = ::operator_new(0x48);
  pTVar10 = pTVar12;
  if (this_00 != (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) {
    *(undefined4 *)&this_00->_padding_ = 4;
    *(undefined4 *)((longlong)&this_00->_padding_ + 4) = 1;
    *(undefined4 *)&this_00->_padding_ = uVar2;
    *(undefined4 *)((longlong)&this_00->_padding_ + 4) = 0;
    this_00->_padding_ = (longlong)&___7__TMeshAttributeArraySet_H__6B_;
    (((TArray<TMeshAttributeArrayBase<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
       *)&this_00->ArrayForChannels)->AllocatorInstance).SecondaryData =
         (ForElementType<TMeshAttributeArrayBase<int>_>)0x0;
    ((TArray<TMeshAttributeArrayBase<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
      *)&this_00->ArrayForChannels)->ArrayNum = 0;
    *(undefined8 *)
     &((TArray<TMeshAttributeArrayBase<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
        *)&this_00->ArrayForChannels)->ArrayMax = 1;
    TMeshAttributeArraySet<int>::SetNumChannels((TMeshAttributeArraySet<int> *)this_00,1);
    pTVar10 = this_00;
  }
  pFVar6 = local_res8.Value;
  if (local_res8.Value != (FAttributesSetEntry *)0x0) {
    pTVar4 = &(local_res8.Value)->Ptr;
    local_res8.Value = (FAttributesSetEntry *)pTVar10;
    (*(code *)pTVar4->Ptr->_padding_)(pFVar6,1);
    pTVar10 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)local_res8.Value;
  }
  local_res8.Value = (FAttributesSetEntry *)pTVar10;
  local_48 = local_res18;
  local_40 = &local_res8.Value;
  TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FAttributesSetEntry_&&>_>
            ((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              *)&this->StrandAttributesSet,&local_res8,(bool *)&local_48);
  if ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)local_res8.Value !=
      (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) {
    (*(code *)**(undefined8 **)&(local_res8.Value)->Ptr)(local_res8.Value,1);
  }
LAB_14e07cb7b:
  FVar5 = HairAttribute::Vertex::Position;
  local_res18[0] = HairAttribute::Vertex::Position;
  uVar8 = ::GetTypeHash(HairAttribute::Vertex::Position.ComparisonIndex.Value);
  FVar7 = local_res18[0];
  if (*(int *)&(this->VertexAttributesSet).field_0x8 !=
      *(int *)&(this->VertexAttributesSet).field_0x34) {
    puVar11 = *(undefined1 **)&(this->VertexAttributesSet).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->VertexAttributesSet).field_0x38;
    }
    iVar9 = *(int *)(puVar11 +
                    (ulonglong)
                    (*(int *)&(this->VertexAttributesSet).field_0x48 - 1U & FVar5.Number + uVar8) *
                    4);
    if (iVar9 != -1) {
      do {
        lVar1 = *(longlong *)&this->VertexAttributesSet + (longlong)iVar9 * 0x18;
        if (*(FName *)(*(longlong *)&this->VertexAttributesSet + (longlong)iVar9 * 0x18) == FVar5) {
          pTVar10 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(lVar1 + 8);
          if (lVar1 == 0) {
            pTVar10 = pTVar12;
          }
          if (pTVar10 != (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) {
            plVar3 = (longlong *)pTVar10->_padding_;
            if (((int)plVar3[1] == 1) && (*(int *)((longlong)plVar3 + 0xc) == 1)) {
              (**(code **)(*plVar3 + 0x70))(plVar3,1);
              *(undefined4 *)(pTVar10->_padding_ + 0x14) = 0;
              goto LAB_14e07ccff;
            }
            local_res8.Key = (FName *)local_res18[0];
            uVar8 = ::GetTypeHash(local_res18[0].ComparisonIndex.Value);
            TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                                 *)this,FVar7.Number + uVar8,(FName *)&local_res8);
          }
          break;
        }
        iVar9 = *(int *)(lVar1 + 0x10);
      } while (iVar9 != -1);
    }
  }
  uVar2 = *(undefined4 *)&(this->VertexAttributesSet).field_0x50;
  local_res8.Value = (FAttributesSetEntry *)0x0;
  pTVar10 = ::operator_new(0x50);
  if (pTVar10 != (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) {
    (pTVar10->ArrayForChannels).AllocatorInstance.SecondaryData =
         (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)0x0;
    *(undefined4 *)&pTVar10->_padding_ = 1;
    *(undefined4 *)((longlong)&pTVar10->_padding_ + 4) = 1;
    *(undefined4 *)&pTVar10->_padding_ = uVar2;
    *(undefined4 *)((longlong)&pTVar10->_padding_ + 4) = 0;
    pTVar10->_padding_ = (longlong)&___7__TMeshAttributeArraySet_U__TVector_M_Math_UE____6B_;
    (pTVar10->ArrayForChannels).ArrayNum = 0;
    (pTVar10->ArrayForChannels).ArrayMax = 1;
    *(undefined8 *)&(pTVar10->DefaultValue).field0_0x0 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    (pTVar10->DefaultValue).field0_0x0._s_0.Z =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    TMeshAttributeArraySet<UE::Math::TVector<float>_>::SetNumChannels(pTVar10,1);
    pTVar12 = pTVar10;
  }
  pFVar6 = local_res8.Value;
  if (local_res8.Value != (FAttributesSetEntry *)0x0) {
    pTVar4 = &(local_res8.Value)->Ptr;
    local_res8.Value = (FAttributesSetEntry *)pTVar12;
    (*(code *)pTVar4->Ptr->_padding_)(pFVar6,1);
    pTVar12 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)local_res8.Value;
  }
  local_res8.Value = (FAttributesSetEntry *)pTVar12;
  local_48 = local_res18;
  local_40 = &local_res8.Value;
  TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FAttributesSetEntry_&&>_>
            ((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              *)this,&local_res8,(bool *)&local_48);
  if ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)local_res8.Value !=
      (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0) {
    (*(code *)**(undefined8 **)&(local_res8.Value)->Ptr)(local_res8.Value,1);
  }
LAB_14e07ccff:
  FAttributesSetBase::Initialize((FAttributesSetBase *)&this->GroomAttributesSet,1);
  return this;
}

// AddStrand @ 14e08a980

FStrandID __thiscall FHairDescription::AddStrand(FHairDescription *this)

{
  int iVar1;
  int *in_RDX;
  
  iVar1 = this->NumStrands;
  *in_RDX = iVar1;
  this->NumStrands = iVar1 + 1;
  FAttributesSetBase::Insert((FAttributesSetBase *)&this->StrandAttributesSet,iVar1);
  return SUB84(in_RDX,0);
}

// AddVertex @ 14e08b640

FVertexID __thiscall FHairDescription::AddVertex(FHairDescription *this)

{
  int iVar1;
  int *in_RDX;
  
  iVar1 = this->NumVertices;
  *in_RDX = iVar1;
  this->NumVertices = iVar1 + 1;
  FAttributesSetBase::Insert((FAttributesSetBase *)this,iVar1);
  return SUB84(in_RDX,0);
}

// HasAOAttributes @ 14e0a3e90

bool __thiscall FHairDescription::HasAOAttributes(FHairDescription *this)

{
  bool bVar1;
  
  bVar1 = HasAttribute(this,AO);
  return bVar1;
}

// HasAttribute @ 14e0a3ea0

bool __thiscall FHairDescription::HasAttribute(FHairDescription *this,EHairAttribute param_1)

{
  FAttributesSetEntry *pFVar1;
  FMeshAttributeArraySetBase *pFVar2;
  FName FVar3;
  TAttributesSet<FStrandID> *this_00;
  bool bVar4;
  
  switch(param_1) {
  case RootUV:
    pFVar1 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)&this->StrandAttributesSet,HairAttribute::Strand::RootUV);
    if (pFVar1 != (FAttributesSetEntry *)0x0) {
      pFVar2 = (pFVar1->Ptr).Ptr;
      bVar4 = pFVar2->Type == 2;
LAB_14e0a3f65:
      if ((bVar4) && (pFVar2->Extent == 1)) goto LAB_14e0a3f6f;
    }
    break;
  case ClumpID:
    pFVar1 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)&this->StrandAttributesSet,HairAttribute::Strand::ClumpID);
    FVar3 = HairAttribute::Strand::ClumpID;
    if (((pFVar1 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar1->Ptr).Ptr, pFVar2->Type == 4))
       && ((pFVar2->Extent == 1 && (pFVar2 != (FMeshAttributeArraySetBase *)0x0)))) {
      return true;
    }
    goto LAB_14e0a40c4;
  case StrandID:
    pFVar1 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)&this->StrandAttributesSet,HairAttribute::Strand::ID);
    if (pFVar1 != (FAttributesSetEntry *)0x0) {
      pFVar2 = (pFVar1->Ptr).Ptr;
      bVar4 = pFVar2->Type == 4;
      goto LAB_14e0a3f65;
    }
    break;
  case PrecomputedGuideWeights:
    this_00 = &this->StrandAttributesSet;
    pFVar1 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this_00,HairAttribute::Strand::ClosestGuides);
    if (((pFVar1 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar1->Ptr).Ptr, pFVar2->Type == 4))
       && ((pFVar2->Extent == 1 &&
           ((((pFVar2 != (FMeshAttributeArraySetBase *)0x0 &&
              (pFVar1 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                        ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                                *)this_00,HairAttribute::Strand::GuideWeights),
              pFVar1 != (FAttributesSetEntry *)0x0)) &&
             (pFVar2 = (pFVar1->Ptr).Ptr, pFVar2->Type == 3)) &&
            ((pFVar2->Extent == 1 && (pFVar2 != (FMeshAttributeArraySetBase *)0x0)))))))) {
      return true;
    }
    pFVar1 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this_00,HairAttribute::Strand::ClosestGuides);
    if (pFVar1 == (FAttributesSetEntry *)0x0) {
      return false;
    }
    pFVar2 = (pFVar1->Ptr).Ptr;
    if (pFVar2->Type != 1) {
      return false;
    }
    if (pFVar2->Extent != 1) {
      return false;
    }
    FVar3 = HairAttribute::Strand::GuideWeights;
    if (pFVar2 == (FMeshAttributeArraySetBase *)0x0) {
      return false;
    }
LAB_14e0a40c4:
    pFVar1 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)&this->StrandAttributesSet,FVar3);
    if (pFVar1 != (FAttributesSetEntry *)0x0) {
      pFVar2 = (pFVar1->Ptr).Ptr;
      bVar4 = pFVar2->Type == 1;
LAB_14e0a40d5:
      if (((bVar4) && (pFVar2->Extent == 1)) && (pFVar2 != (FMeshAttributeArraySetBase *)0x0)) {
        return true;
      }
    }
switchD_14e0a3ec6_default:
    return false;
  case Color:
    pFVar1 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this,HairAttribute::Vertex::Color);
    if (pFVar1 != (FAttributesSetEntry *)0x0) {
      pFVar2 = (pFVar1->Ptr).Ptr;
      bVar4 = pFVar2->Type == 1;
      goto LAB_14e0a3f65;
    }
    break;
  case Roughness:
    pFVar1 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this,HairAttribute::Vertex::Roughness);
    if (pFVar1 != (FAttributesSetEntry *)0x0) {
      pFVar2 = (pFVar1->Ptr).Ptr;
      bVar4 = pFVar2->Type == 3;
      goto LAB_14e0a3f65;
    }
    break;
  case AO:
    pFVar1 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this,HairAttribute::Vertex::AO);
    if (pFVar1 != (FAttributesSetEntry *)0x0) {
      pFVar2 = (pFVar1->Ptr).Ptr;
      bVar4 = pFVar2->Type == 3;
      goto LAB_14e0a3f65;
    }
    break;
  case Width:
    pFVar1 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this,HairAttribute::Vertex::Width);
    if ((((pFVar1 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar1->Ptr).Ptr, pFVar2->Type == 3))
        && (pFVar2->Extent == 1)) && (pFVar2 != (FMeshAttributeArraySetBase *)0x0)) {
      return true;
    }
    pFVar1 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)&this->StrandAttributesSet,HairAttribute::Strand::Width);
    if (((pFVar1 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar1->Ptr).Ptr, pFVar2->Type == 3))
       && ((pFVar2->Extent == 1 && (pFVar2 != (FMeshAttributeArraySetBase *)0x0)))) {
      return true;
    }
    pFVar1 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)&this->GroomAttributesSet,HairAttribute::Groom::Width);
    if (pFVar1 == (FAttributesSetEntry *)0x0) {
      return false;
    }
    pFVar2 = (pFVar1->Ptr).Ptr;
    bVar4 = pFVar2->Type == 3;
    goto LAB_14e0a40d5;
  default:
    goto switchD_14e0a3ec6_default;
  }
  pFVar2 = (FMeshAttributeArraySetBase *)0x0;
LAB_14e0a3f6f:
  return pFVar2 != (FMeshAttributeArraySetBase *)0x0;
}

// HasClumpID @ 14e0a41b0

bool __thiscall FHairDescription::HasClumpID(FHairDescription *this)

{
  bool bVar1;
  
  bVar1 = HasAttribute(this,ClumpID);
  return bVar1;
}

// HasColorAttributes @ 14e0a41c0

bool __thiscall FHairDescription::HasColorAttributes(FHairDescription *this)

{
  bool bVar1;
  
  bVar1 = HasAttribute(this,Color);
  return bVar1;
}

// HasGuideWeights @ 14e0a41d0

bool __thiscall FHairDescription::HasGuideWeights(FHairDescription *this)

{
  bool bVar1;
  
  bVar1 = HasAttribute(this,PrecomputedGuideWeights);
  return bVar1;
}

// HasRootUV @ 14e0a42b0

bool __thiscall FHairDescription::HasRootUV(FHairDescription *this)

{
  bool bVar1;
  
  bVar1 = HasAttribute(this,RootUV);
  return bVar1;
}

// HasRoughnessAttributes @ 14e0a42c0

bool __thiscall FHairDescription::HasRoughnessAttributes(FHairDescription *this)

{
  bool bVar1;
  
  bVar1 = HasAttribute(this,Roughness);
  return bVar1;
}

// InitializeStrands @ 14e0a65c0

void __thiscall FHairDescription::InitializeStrands(FHairDescription *this,int param_1)

{
  this->NumStrands = param_1;
  FAttributesSetBase::Initialize((FAttributesSetBase *)&this->StrandAttributesSet,param_1);
  return;
}

// InitializeVertices @ 14e0a65e0

void __thiscall FHairDescription::InitializeVertices(FHairDescription *this,int param_1)

{
  this->NumVertices = param_1;
  FAttributesSetBase::Initialize((FAttributesSetBase *)this,param_1);
  return;
}

// IsValid @ 14e0a97f0

bool __thiscall FHairDescription::IsValid(FHairDescription *this)

{
  if ((0 < this->NumStrands) && (0 < this->NumVertices)) {
    return true;
  }
  return false;
}

// Reset @ 14e0a9e90

void __thiscall FHairDescription::Reset(FHairDescription *this)

{
  this->NumVertices = 0;
  this->NumStrands = 0;
  FAttributesSetBase::Initialize((FAttributesSetBase *)this,0);
  FAttributesSetBase::Initialize((FAttributesSetBase *)&this->StrandAttributesSet,0);
  FAttributesSetBase::Initialize((FAttributesSetBase *)&this->GroomAttributesSet,0);
  return;
}

// Serialize @ 14e0ac270

void __thiscall FHairDescription::Serialize(FHairDescription *this,FArchive *param_1)

{
  int *piVar1;
  int *piVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEditorObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FReleaseObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5MainStreamObjectVersion::GUID);
  piVar1 = &this->NumVertices;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &this->NumStrands;
  piVar2 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  ::operator<<(param_1,(FAttributesSetBase *)this);
  ::operator<<(param_1,(FAttributesSetBase *)&this->StrandAttributesSet);
  ::operator<<(param_1,(FAttributesSetBase *)&this->GroomAttributesSet);
  return;
}

