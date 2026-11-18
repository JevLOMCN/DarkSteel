// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StaticMeshDescription
// Functions: 5

// GetPolygonGroupMaterialSlotNames @ 144381060

TMeshAttributesRef<FPolygonGroupID,FName> __thiscall
FStaticMeshAttributes::GetPolygonGroupMaterialSlotNames(FStaticMeshAttributes *this)

{
  longlong lVar1;
  FMeshElementContainer *pFVar2;
  TTuple<FName,FAttributesSetEntry> *pTVar3;
  longlong *plVar4;
  FMeshAttributeArraySetBase *in_RDX;
  
  pFVar2 = FMeshElementChannels::Get
                     (*(FMeshElementChannels **)(*(longlong *)&this->field_0x8 + 0x80),0);
  pTVar3 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)&pFVar2->Attributes,MeshAttribute::PolygonGroup::ImportedMaterialSlotName);
  plVar4 = (longlong *)&pTVar3->field_0x8;
  if (pTVar3 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  if (((plVar4 != (longlong *)0x0) && (lVar1 = *plVar4, *(int *)(lVar1 + 8) == 6)) &&
     (*(int *)(lVar1 + 0xc) == 1)) {
    in_RDX->_padding_ = lVar1;
    return (TMeshAttributesRef<FPolygonGroupID,FName>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TMeshAttributesRef<FPolygonGroupID,FName>)in_RDX;
}

// GetPolygonObjectNames @ 1443810d0

TMeshAttributesRef<FPolygonID,FName> __thiscall
FStaticMeshAttributes::GetPolygonObjectNames(FStaticMeshAttributes *this)

{
  longlong lVar1;
  FMeshElementContainer *pFVar2;
  TTuple<FName,FAttributesSetEntry> *pTVar3;
  longlong *plVar4;
  FMeshAttributeArraySetBase *in_RDX;
  
  pFVar2 = FMeshElementChannels::Get
                     (*(FMeshElementChannels **)(*(longlong *)&this->field_0x8 + 0x78),0);
  pTVar3 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                   *)&pFVar2->Attributes,MeshAttribute::Polygon::ObjectName);
  plVar4 = (longlong *)&pTVar3->field_0x8;
  if (pTVar3 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  if (((plVar4 != (longlong *)0x0) && (lVar1 = *plVar4, *(int *)(lVar1 + 8) == 6)) &&
     (*(int *)(lVar1 + 0xc) == 1)) {
    in_RDX->_padding_ = lVar1;
    return (TMeshAttributesRef<FPolygonID,FName>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TMeshAttributesRef<FPolygonID,FName>)in_RDX;
}

// Register @ 144384c20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FStaticMeshAttributes::Register(FStaticMeshAttributes *this,bool param_1)

{
  FAttributesSetBase *pFVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  FName FVar7;
  bool bVar8;
  uint uVar9;
  FMeshElementContainer *pFVar10;
  TTuple<FName,FAttributesSetEntry> *pTVar11;
  TMeshAttributeArraySet<UE::Math::TVector4<float>_> *pTVar12;
  TMeshAttributeArraySet<UE::Math::TVector4<float>_> *pTVar13;
  TMeshAttributeArraySet<UE::Math::TVector4<float>_> *pTVar14;
  FName local_res8;
  TMeshAttributeArraySet<UE::Math::TVector4<float>_> *local_res18;
  FName local_res20;
  FName *local_58;
  TMeshAttributeArraySet<UE::Math::TVector4<float>_> **local_50;
  
  pFVar10 = FMeshElementChannels::Get
                      (*(FMeshElementChannels **)(*(longlong *)&this->field_0x8 + 0x58),0);
  bVar8 = FAttributesSetBase::HasAttribute
                    (&pFVar10->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
  pTVar14 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0;
  if ((!bVar8) || (!param_1)) {
    iVar2 = *(int *)(*(longlong *)(*(longlong *)&this->field_0x8 + 0x60) + 0x88);
    pFVar10 = FMeshElementChannels::Get
                        (*(FMeshElementChannels **)(*(longlong *)&this->field_0x8 + 0x58),0);
    local_res20 = MeshAttribute::VertexInstance::TextureCoordinate;
    pFVar1 = &pFVar10->Attributes;
    pTVar11 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                      *)pFVar1,MeshAttribute::VertexInstance::TextureCoordinate);
    FVar7 = local_res20;
    pTVar13 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)&pTVar11->field_0x8;
    if (pTVar11 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      pTVar13 = pTVar14;
    }
    if (pTVar13 != (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0) {
      plVar4 = (longlong *)pTVar13->_padding_;
      if (((int)plVar4[1] == 2) && (*(int *)((longlong)plVar4 + 0xc) == 1)) {
        (**(code **)(*plVar4 + 0x70))();
        *(undefined4 *)(pTVar13->_padding_ + 0x14) = 0x21;
        goto LAB_144384dc7;
      }
      local_res8 = local_res20;
      if (*(int *)&(pFVar10->Attributes).Map.field_0x8 !=
          *(int *)&(pFVar10->Attributes).Map.field_0x34) {
        uVar9 = ::GetTypeHash(local_res20.ComparisonIndex.Value);
        TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
        ::RemoveImpl<FName>((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                             *)pFVar1,FVar7.Number + uVar9,&local_res8);
      }
    }
    iVar3 = (pFVar10->Attributes).NumElements;
    local_res18 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0;
    pTVar12 = ::operator_new(0x48);
    pTVar13 = pTVar14;
    if (pTVar12 != (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0) {
      *(undefined4 *)&pTVar12->_padding_ = 2;
      *(undefined4 *)((longlong)&pTVar12->_padding_ + 4) = 1;
      *(int *)&pTVar12->_padding_ = iVar3;
      *(undefined4 *)((longlong)&pTVar12->_padding_ + 4) = 0x21;
      (((TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
         *)&pTVar12->ArrayForChannels)->AllocatorInstance).SecondaryData =
           (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0;
      pTVar12->_padding_ = (longlong)&___7__TMeshAttributeArraySet_U__TVector2_M_Math_UE____6B_;
      ((TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
        *)&pTVar12->ArrayForChannels)->ArrayNum = 0;
      ((TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
        *)&pTVar12->ArrayForChannels)->ArrayMax = 1;
      *(TVector2<float>_u_0 *)&(pTVar12->DefaultValue).field0_0x0 =
           (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      TMeshAttributeArraySet<UE::Math::TVector2<float>_>::SetNumChannels
                ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)pTVar12,iVar2);
      pTVar13 = pTVar12;
    }
    pTVar12 = local_res18;
    if (local_res18 != (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0) {
      plVar4 = &local_res18->_padding_;
      local_res18 = pTVar13;
      (**(code **)*plVar4)(pTVar12,1);
      pTVar13 = local_res18;
    }
    local_res18 = pTVar13;
    local_58 = &local_res20;
    local_50 = &local_res18;
    TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FAttributesSetEntry_&&>_>
              ((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                *)pFVar1,(TPairInitializer<FName_const_&,FAttributesSetEntry_&&> *)&local_res8,
               (bool *)&local_58);
    if (local_res18 != (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0) {
      (**(code **)local_res18->_padding_)();
    }
  }
LAB_144384dc7:
  pFVar10 = FMeshElementChannels::Get
                      (*(FMeshElementChannels **)(*(longlong *)&this->field_0x8 + 0x58),0);
  bVar8 = FAttributesSetBase::HasAttribute
                    (&pFVar10->Attributes,MeshAttribute::VertexInstance::Normal);
  if ((!bVar8) || (!param_1)) {
    pFVar10 = FMeshElementChannels::Get
                        (*(FMeshElementChannels **)(*(longlong *)&this->field_0x8 + 0x58),0);
    FAttributesSetBase::RegisterAttribute<UE::Math::TVector<float>,0>
              (&pFVar10->Attributes,(FName)&local_res8,
               MeshAttribute::VertexInstance::Normal.ComparisonIndex.Value.Value,
               (TVector<float> *)&DAT_00000001,0x54b783f8);
  }
  pFVar10 = FMeshElementChannels::Get
                      (*(FMeshElementChannels **)(*(longlong *)&this->field_0x8 + 0x58),0);
  bVar8 = FAttributesSetBase::HasAttribute
                    (&pFVar10->Attributes,MeshAttribute::VertexInstance::Tangent);
  if ((!bVar8) || (!param_1)) {
    pFVar10 = FMeshElementChannels::Get
                        (*(FMeshElementChannels **)(*(longlong *)&this->field_0x8 + 0x58),0);
    FAttributesSetBase::RegisterAttribute<UE::Math::TVector<float>,0>
              (&pFVar10->Attributes,(FName)&local_res8,
               MeshAttribute::VertexInstance::Tangent.ComparisonIndex.Value.Value,
               (TVector<float> *)&DAT_00000001,0x54b783f8);
  }
  pFVar10 = FMeshElementChannels::Get
                      (*(FMeshElementChannels **)(*(longlong *)&this->field_0x8 + 0x58),0);
  bVar8 = FAttributesSetBase::HasAttribute
                    (&pFVar10->Attributes,MeshAttribute::VertexInstance::BinormalSign);
  if ((!bVar8) || (!param_1)) {
    pFVar10 = FMeshElementChannels::Get
                        (*(FMeshElementChannels **)(*(longlong *)&this->field_0x8 + 0x58),0);
    local_res20 = MeshAttribute::VertexInstance::BinormalSign;
    pFVar1 = &pFVar10->Attributes;
    pTVar11 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                      *)pFVar1,MeshAttribute::VertexInstance::BinormalSign);
    FVar7 = local_res20;
    pTVar13 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)&pTVar11->field_0x8;
    if (pTVar11 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      pTVar13 = pTVar14;
    }
    if (pTVar13 != (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0) {
      plVar4 = (longlong *)pTVar13->_padding_;
      if (((int)plVar4[1] == 3) && (*(int *)((longlong)plVar4 + 0xc) == 1)) {
        (**(code **)(*plVar4 + 0x70))();
        *(undefined4 *)(pTVar13->_padding_ + 0x14) = 0x22;
        goto LAB_144384fec;
      }
      local_res8 = local_res20;
      if (*(int *)&(pFVar10->Attributes).Map.field_0x8 !=
          *(int *)&(pFVar10->Attributes).Map.field_0x34) {
        uVar9 = ::GetTypeHash(local_res20.ComparisonIndex.Value);
        TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
        ::RemoveImpl<FName>((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                             *)pFVar1,FVar7.Number + uVar9,&local_res8);
      }
    }
    iVar2 = (pFVar10->Attributes).NumElements;
    local_res18 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0;
    pTVar12 = ::operator_new(0x48);
    pTVar13 = pTVar14;
    if (pTVar12 != (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0) {
      *(undefined4 *)&pTVar12->_padding_ = 3;
      *(undefined4 *)((longlong)&pTVar12->_padding_ + 4) = 1;
      *(int *)&pTVar12->_padding_ = iVar2;
      *(undefined4 *)((longlong)&pTVar12->_padding_ + 4) = 0x22;
      pTVar12->_padding_ = (longlong)&___7__TMeshAttributeArraySet_M__6B_;
      (((TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
         *)&pTVar12->ArrayForChannels)->AllocatorInstance).SecondaryData =
           (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0;
      ((TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
        *)&pTVar12->ArrayForChannels)->ArrayNum = 0;
      *(undefined8 *)
       &((TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *)&pTVar12->ArrayForChannels)->ArrayMax = 1;
      TMeshAttributeArraySet<float>::SetNumChannels((TMeshAttributeArraySet<float> *)pTVar12,1);
      pTVar13 = pTVar12;
    }
    pTVar12 = local_res18;
    if (local_res18 != (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0) {
      plVar4 = &local_res18->_padding_;
      local_res18 = pTVar13;
      (**(code **)*plVar4)(pTVar12,1);
      pTVar13 = local_res18;
    }
    local_res18 = pTVar13;
    local_58 = &local_res20;
    local_50 = &local_res18;
    TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FAttributesSetEntry_&&>_>
              ((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                *)pFVar1,(TPairInitializer<FName_const_&,FAttributesSetEntry_&&> *)&local_res8,
               (bool *)&local_58);
    if (local_res18 != (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0) {
      (**(code **)local_res18->_padding_)();
    }
  }
LAB_144384fec:
  pFVar10 = FMeshElementChannels::Get
                      (*(FMeshElementChannels **)(*(longlong *)&this->field_0x8 + 0x58),0);
  bVar8 = FAttributesSetBase::HasAttribute
                    (&pFVar10->Attributes,MeshAttribute::VertexInstance::Color);
  if ((!bVar8) || (!param_1)) {
    pFVar10 = FMeshElementChannels::Get
                        (*(FMeshElementChannels **)(*(longlong *)&this->field_0x8 + 0x58),0);
    uVar6 = _UNK_15076b1f8;
    uVar5 = ___xmm_3f8000003f8000003f8000003f800000;
    local_res20 = MeshAttribute::VertexInstance::Color;
    pFVar1 = &pFVar10->Attributes;
    pTVar11 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                      *)pFVar1,MeshAttribute::VertexInstance::Color);
    FVar7 = local_res20;
    pTVar13 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)&pTVar11->field_0x8;
    if (pTVar11 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      pTVar13 = pTVar14;
    }
    if (pTVar13 != (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0) {
      plVar4 = (longlong *)pTVar13->_padding_;
      if (((int)plVar4[1] == 0) && (*(int *)((longlong)plVar4 + 0xc) == 1)) {
        (**(code **)(*plVar4 + 0x70))();
        *(undefined4 *)(pTVar13->_padding_ + 0x14) = 0x21;
        goto LAB_144385160;
      }
      local_res8 = local_res20;
      if (*(int *)&(pFVar10->Attributes).Map.field_0x8 !=
          *(int *)&(pFVar10->Attributes).Map.field_0x34) {
        uVar9 = ::GetTypeHash(local_res20.ComparisonIndex.Value);
        TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
        ::RemoveImpl<FName>((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                             *)pFVar1,FVar7.Number + uVar9,&local_res8);
      }
    }
    iVar2 = (pFVar10->Attributes).NumElements;
    local_res18 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0;
    pTVar12 = ::operator_new(0x50);
    pTVar13 = pTVar14;
    if (pTVar12 != (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0) {
      *(undefined4 *)&pTVar12->_padding_ = 0;
      *(undefined4 *)((longlong)&pTVar12->_padding_ + 4) = 1;
      *(int *)&pTVar12->_padding_ = iVar2;
      *(undefined4 *)((longlong)&pTVar12->_padding_ + 4) = 0x21;
      (pTVar12->ArrayForChannels).AllocatorInstance.SecondaryData =
           (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)0x0;
      pTVar12->_padding_ = (longlong)&___7__TMeshAttributeArraySet_U__TVector4_M_Math_UE____6B_;
      (pTVar12->ArrayForChannels).ArrayNum = 0;
      (pTVar12->ArrayForChannels).ArrayMax = 1;
      *(undefined8 *)&(pTVar12->DefaultValue).field0_0x0 = uVar5;
      *(undefined8 *)((longlong)&(pTVar12->DefaultValue).field0_0x0 + 8) = uVar6;
      TMeshAttributeArraySet<UE::Math::TVector4<float>_>::SetNumChannels(pTVar12,1);
      pTVar13 = pTVar12;
    }
    pTVar12 = local_res18;
    if (local_res18 != (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0) {
      plVar4 = &local_res18->_padding_;
      local_res18 = pTVar13;
      (**(code **)*plVar4)(pTVar12,1);
      pTVar13 = local_res18;
    }
    local_res18 = pTVar13;
    local_58 = &local_res20;
    local_50 = &local_res18;
    TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FAttributesSetEntry_&&>_>
              ((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                *)pFVar1,(TPairInitializer<FName_const_&,FAttributesSetEntry_&&> *)&local_res8,
               (bool *)&local_58);
    if (local_res18 != (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0) {
      (**(code **)local_res18->_padding_)();
    }
  }
LAB_144385160:
  pFVar10 = FMeshElementChannels::Get
                      (*(FMeshElementChannels **)(*(longlong *)&this->field_0x8 + 0x68),0);
  bVar8 = FAttributesSetBase::HasAttribute(&pFVar10->Attributes,MeshAttribute::Edge::IsHard);
  if ((!bVar8) || (!param_1)) {
    pFVar10 = FMeshElementChannels::Get
                        (*(FMeshElementChannels **)(*(longlong *)&this->field_0x8 + 0x68),0);
    local_res20 = MeshAttribute::Edge::IsHard;
    pFVar1 = &pFVar10->Attributes;
    pTVar11 = TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                      *)pFVar1,MeshAttribute::Edge::IsHard);
    FVar7 = local_res20;
    pTVar13 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)&pTVar11->field_0x8;
    if (pTVar11 == (TTuple<FName,FAttributesSetEntry> *)0x0) {
      pTVar13 = pTVar14;
    }
    if (pTVar13 != (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0) {
      plVar4 = (longlong *)pTVar13->_padding_;
      if (((int)plVar4[1] == 5) && (*(int *)((longlong)plVar4 + 0xc) == 1)) {
        (**(code **)(*plVar4 + 0x70))();
        *(undefined4 *)(pTVar13->_padding_ + 0x14) = 0x20;
        goto LAB_1443852c5;
      }
      local_res8 = local_res20;
      if (*(int *)&(pFVar10->Attributes).Map.field_0x8 !=
          *(int *)&(pFVar10->Attributes).Map.field_0x34) {
        uVar9 = ::GetTypeHash(local_res20.ComparisonIndex.Value);
        TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
        ::RemoveImpl<FName>((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                             *)pFVar1,FVar7.Number + uVar9,&local_res8);
      }
    }
    iVar2 = (pFVar10->Attributes).NumElements;
    local_res18 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0;
    pTVar13 = ::operator_new(0x48);
    if (pTVar13 != (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0) {
      *(undefined4 *)&pTVar13->_padding_ = 5;
      *(undefined4 *)((longlong)&pTVar13->_padding_ + 4) = 1;
      *(int *)&pTVar13->_padding_ = iVar2;
      *(undefined4 *)((longlong)&pTVar13->_padding_ + 4) = 0x20;
      (((TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
         *)&pTVar13->ArrayForChannels)->AllocatorInstance).SecondaryData =
           (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0;
      pTVar13->_padding_ = (longlong)&___7__TMeshAttributeArraySet__N__6B_;
      ((TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
        *)&pTVar13->ArrayForChannels)->ArrayNum = 0;
      ((TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
        *)&pTVar13->ArrayForChannels)->ArrayMax = 1;
      *(undefined1 *)&(pTVar13->DefaultValue).field0_0x0 = 0;
      TMeshAttributeArraySet<bool>::SetNumChannels((TMeshAttributeArraySet<bool> *)pTVar13,1);
      pTVar14 = pTVar13;
    }
    pTVar13 = local_res18;
    if (local_res18 != (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0) {
      plVar4 = &local_res18->_padding_;
      local_res18 = pTVar14;
      (**(code **)*plVar4)(pTVar13,1);
      pTVar14 = local_res18;
    }
    local_res18 = pTVar14;
    local_58 = &local_res20;
    local_50 = &local_res18;
    TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FAttributesSetEntry_&&>_>
              ((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                *)pFVar1,(TPairInitializer<FName_const_&,FAttributesSetEntry_&&> *)&local_res8,
               (bool *)&local_58);
    if (local_res18 != (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0) {
      (**(code **)local_res18->_padding_)();
    }
  }
LAB_1443852c5:
  pFVar10 = FMeshElementChannels::Get
                      (*(FMeshElementChannels **)(*(longlong *)&this->field_0x8 + 0x80),0);
  bVar8 = FAttributesSetBase::HasAttribute
                    (&pFVar10->Attributes,MeshAttribute::PolygonGroup::ImportedMaterialSlotName);
  if ((!bVar8) || (!param_1)) {
    pFVar10 = FMeshElementChannels::Get
                        (*(FMeshElementChannels **)(*(longlong *)&this->field_0x8 + 0x80),0);
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    FAttributesSetBase::RegisterAttribute<FName,0>
              (&pFVar10->Attributes,(FName)&local_res18,
               MeshAttribute::PolygonGroup::ImportedMaterialSlotName.ComparisonIndex.Value.Value,
               (FName *)&DAT_00000001,(EMeshAttributeFlags)&local_res8);
  }
  FMeshAttributes::Register((FMeshAttributes *)this,param_1);
  return;
}

// RegisterPolygonObjectNameAttribute @ 1443853d0

void __thiscall
FStaticMeshAttributes::RegisterPolygonObjectNameAttribute(FStaticMeshAttributes *this)

{
  bool bVar1;
  FMeshElementContainer *pFVar2;
  undefined8 local_res8;
  undefined1 local_res10 [24];
  
  pFVar2 = FMeshElementChannels::Get
                     (*(FMeshElementChannels **)(*(longlong *)&this->field_0x8 + 0x78),0);
  bVar1 = FAttributesSetBase::HasAttribute(&pFVar2->Attributes,MeshAttribute::Polygon::ObjectName);
  if (!bVar1) {
    pFVar2 = FMeshElementChannels::Get
                       (*(FMeshElementChannels **)(*(longlong *)&this->field_0x8 + 0x78),0);
    local_res8 = 0;
    FAttributesSetBase::RegisterAttribute<FName,0>
              (&pFVar2->Attributes,(FName)local_res10,
               MeshAttribute::Polygon::ObjectName.ComparisonIndex.Value.Value,(FName *)&DAT_00000001
               ,(EMeshAttributeFlags)&local_res8);
  }
  return;
}

// RegisterTriangleNormalAndTangentAttributes @ 144385450

void __thiscall
FStaticMeshAttributes::RegisterTriangleNormalAndTangentAttributes(FStaticMeshAttributes *this)

{
  FMeshElementContainer *pFVar1;
  undefined1 local_res8 [8];
  
  pFVar1 = FMeshElementChannels::Get
                     (*(FMeshElementChannels **)(*(longlong *)&this->field_0x8 + 0x70),0);
  FAttributesSetBase::RegisterAttribute<UE::Math::TVector<float>,0>
            (&pFVar1->Attributes,(FName)local_res8,
             MeshAttribute::Triangle::Normal.ComparisonIndex.Value.Value,
             (TVector<float> *)&DAT_00000001,0x54b783f8);
  pFVar1 = FMeshElementChannels::Get
                     (*(FMeshElementChannels **)(*(longlong *)&this->field_0x8 + 0x70),0);
  FAttributesSetBase::RegisterAttribute<UE::Math::TVector<float>,0>
            (&pFVar1->Attributes,(FName)local_res8,
             MeshAttribute::Triangle::Tangent.ComparisonIndex.Value.Value,
             (TVector<float> *)&DAT_00000001,0x54b783f8);
  pFVar1 = FMeshElementChannels::Get
                     (*(FMeshElementChannels **)(*(longlong *)&this->field_0x8 + 0x70),0);
  FAttributesSetBase::RegisterAttribute<UE::Math::TVector<float>,0>
            (&pFVar1->Attributes,(FName)local_res8,
             MeshAttribute::Triangle::Binormal.ComparisonIndex.Value.Value,
             (TVector<float> *)&DAT_00000001,0x54b783f8);
  return;
}

