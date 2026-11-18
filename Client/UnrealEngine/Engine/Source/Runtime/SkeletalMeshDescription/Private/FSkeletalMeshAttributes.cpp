// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SkeletalMeshDescription
// Functions: 31

// FSkeletalMeshAttributes @ 144393530

FSkeletalMeshAttributes * __thiscall
FSkeletalMeshAttributes::FSkeletalMeshAttributes
          (FSkeletalMeshAttributes *this,FMeshDescription *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TTuple<FName,FMeshElementTypeWrapper> *pTVar7;
  FSkeletalMeshAttributes *pFVar8;
  longlong *plVar9;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FStaticMeshAttributes__6B_;
  FSkeletalMeshAttributesShared::FSkeletalMeshAttributesShared
            ((FSkeletalMeshAttributesShared *)&this->_padding_,param_1);
  plVar1 = (longlong *)this->_padding_;
  this->_padding_ = (longlong)&___7FSkeletalMeshAttributes__6B_;
  this->BoneElements = (FMeshElementChannels *)0x0;
  this->SourceGeometryPartElements = (FMeshElementChannels *)0x0;
  FVar3 = FSkeletalMeshAttributesShared::BonesElementName;
  uVar5 = ::GetTypeHash(FSkeletalMeshAttributesShared::BonesElementName.ComparisonIndex.Value);
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar9 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar9 = plVar1 + 7;
    }
    iVar6 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar1[9] - 1U & FVar3.Number + uVar5) * 4)
    ;
    if (iVar6 != -1) {
      do {
        if (*(FName *)(*plVar1 + (longlong)iVar6 * 0x18) == FVar3) {
          pTVar7 = TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
                           *)this->_padding_,FSkeletalMeshAttributesShared::BonesElementName);
          if ((pTVar7 == (TTuple<FName,FMeshElementTypeWrapper> *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x288,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            pFVar8 = (FSkeletalMeshAttributes *)(*pcVar2)();
            return pFVar8;
          }
          this->BoneElements = *(FMeshElementChannels **)&pTVar7->field_0x8;
          break;
        }
        iVar6 = *(int *)(*plVar1 + 0x10 + (longlong)iVar6 * 0x18);
      } while (iVar6 != -1);
    }
  }
  FVar3 = FSkeletalMeshAttributesShared::SourceGeometryPartElementName;
  plVar1 = (longlong *)this->_padding_;
  uVar5 = ::GetTypeHash(FSkeletalMeshAttributesShared::SourceGeometryPartElementName.ComparisonIndex
                        .Value);
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar9 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar9 = plVar1 + 7;
    }
    iVar6 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar1[9] - 1U & FVar3.Number + uVar5) * 4)
    ;
    if (iVar6 != -1) {
      while (*(FName *)(*plVar1 + (longlong)iVar6 * 0x18) != FVar3) {
        iVar6 = *(int *)(*plVar1 + 0x10 + (longlong)iVar6 * 0x18);
        if (iVar6 == -1) {
          return this;
        }
      }
      pTVar7 = TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
                       *)this->_padding_,
                      FSkeletalMeshAttributesShared::SourceGeometryPartElementName);
      if ((pTVar7 == (TTuple<FName,FMeshElementTypeWrapper> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FSkeletalMeshAttributes *)(*pcVar2)();
        return pFVar8;
      }
      this->SourceGeometryPartElements = *(FMeshElementChannels **)&pTVar7->field_0x8;
    }
  }
  return this;
}

// BoneAttributes @ 14439e7c0

TAttributesSet<FBoneID> * __thiscall
FSkeletalMeshAttributes::BoneAttributes(FSkeletalMeshAttributes *this)

{
  FMeshElementContainer *pFVar1;
  
  pFVar1 = FMeshElementChannels::Get(this->BoneElements,0);
  return (TAttributesSet<FBoneID> *)&pFVar1->Attributes;
}

// Bones @ 14439e800

TMeshElementContainer<FBoneID> * __thiscall
FSkeletalMeshAttributes::Bones(FSkeletalMeshAttributes *this)

{
  FMeshElementContainer *pFVar1;
  
  pFVar1 = FMeshElementChannels::Get(this->BoneElements,0);
  return (TMeshElementContainer<FBoneID> *)pFVar1;
}

// CreateBone @ 1443a03a0

FBoneID __thiscall FSkeletalMeshAttributes::CreateBone(FSkeletalMeshAttributes *this)

{
  int iVar1;
  FMeshElementContainer *this_00;
  int *in_RDX;
  
  this_00 = FMeshElementChannels::Get(this->BoneElements,0);
  iVar1 = FMeshElementContainer::Add(this_00);
  *in_RDX = iVar1;
  return SUB84(in_RDX,0);
}

// CreateBone @ 1443a03d0

void __thiscall FSkeletalMeshAttributes::CreateBone(FSkeletalMeshAttributes *this,FBoneID param_1)

{
  FMeshElementContainer *this_00;
  
  this_00 = FMeshElementChannels::Get(this->BoneElements,0);
  FMeshElementContainer::Insert(this_00,(int)param_1);
  return;
}

// CreateSourceGeometryPart @ 1443a05e0

FSourceGeometryPartID __thiscall
FSkeletalMeshAttributes::CreateSourceGeometryPart(FSkeletalMeshAttributes *this)

{
  code *pcVar1;
  bool bVar2;
  FSourceGeometryPartID FVar3;
  int iVar4;
  FMeshElementContainer *this_00;
  int *in_RDX;
  
  if (this->_padding_ != 0) {
    this_00 = (FMeshElementContainer *)SourceGeometryParts(this);
    iVar4 = FMeshElementContainer::Add(this_00);
    *in_RDX = iVar4;
    return SUB84(in_RDX,0);
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8382464667758362972>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Private\\SkeletalMeshAttributes.cpp"
                     ,0x15c,"HasSourceGeometryParts()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    FVar3 = (FSourceGeometryPartID)(*pcVar1)();
    return FVar3;
  }
  *in_RDX = -1;
  return SUB84(in_RDX,0);
}

// DeleteBone @ 1443a0650

void __thiscall FSkeletalMeshAttributes::DeleteBone(FSkeletalMeshAttributes *this,FBoneID param_1)

{
  FMeshElementContainer *this_00;
  
  this_00 = FMeshElementChannels::Get(this->BoneElements,0);
  FMeshElementContainer::Remove(this_00,(int)param_1);
  return;
}

// DeleteSourceGeometryPart @ 1443a0680

void __thiscall
FSkeletalMeshAttributes::DeleteSourceGeometryPart
          (FSkeletalMeshAttributes *this,FSourceGeometryPartID param_1)

{
  code *pcVar1;
  bool bVar2;
  FMeshElementContainer *this_00;
  
  if (this->_padding_ != 0) {
    this_00 = (FMeshElementContainer *)SourceGeometryParts(this);
    FMeshElementContainer::Remove(this_00,(int)param_1);
    return;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8382464667758362982>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Private\\SkeletalMeshAttributes.cpp"
                     ,0x166,"HasSourceGeometryParts()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetBoneColors @ 1443a3ce0

TMeshAttributesRef<FBoneID,UE::Math::TVector4<float>_> __thiscall
FSkeletalMeshAttributes::GetBoneColors(FSkeletalMeshAttributes *this)

{
  FMeshAttributeArraySetBase *pFVar1;
  FMeshElementContainer *pFVar2;
  FAttributesSetEntry *pFVar3;
  FMeshAttributeArraySetBase *in_RDX;
  
  pFVar2 = FMeshElementChannels::Get(this->BoneElements,0);
  pFVar3 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar2->Attributes,MeshAttribute::Bone::Color);
  if (((pFVar3 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar3->Ptr).Ptr, pFVar1->Type == 0)) &&
     (pFVar1->Extent == 1)) {
    in_RDX->_padding_ = (longlong)pFVar1;
    return (TMeshAttributesRef<FBoneID,UE::Math::TVector4<float>_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TMeshAttributesRef<FBoneID,UE::Math::TVector4<float>_>)in_RDX;
}

// GetBoneNames @ 1443a3da0

TMeshAttributesRef<FBoneID,FName> __thiscall
FSkeletalMeshAttributes::GetBoneNames(FSkeletalMeshAttributes *this)

{
  FMeshAttributeArraySetBase *pFVar1;
  FMeshElementContainer *pFVar2;
  FAttributesSetEntry *pFVar3;
  FMeshAttributeArraySetBase *in_RDX;
  
  pFVar2 = FMeshElementChannels::Get(this->BoneElements,0);
  pFVar3 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar2->Attributes,MeshAttribute::Bone::Name);
  if (((pFVar3 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar3->Ptr).Ptr, pFVar1->Type == 6)) &&
     (pFVar1->Extent == 1)) {
    in_RDX->_padding_ = (longlong)pFVar1;
    return (TMeshAttributesRef<FBoneID,FName>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TMeshAttributesRef<FBoneID,FName>)in_RDX;
}

// GetBoneParentIndices @ 1443a3e60

TMeshAttributesRef<FBoneID,int> __thiscall
FSkeletalMeshAttributes::GetBoneParentIndices(FSkeletalMeshAttributes *this)

{
  FMeshAttributeArraySetBase *pFVar1;
  FMeshElementContainer *pFVar2;
  FAttributesSetEntry *pFVar3;
  FMeshAttributeArraySetBase *in_RDX;
  
  pFVar2 = FMeshElementChannels::Get(this->BoneElements,0);
  pFVar3 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar2->Attributes,MeshAttribute::Bone::ParentIndex);
  if (((pFVar3 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar3->Ptr).Ptr, pFVar1->Type == 4)) &&
     (pFVar1->Extent == 1)) {
    in_RDX->_padding_ = (longlong)pFVar1;
    return (TMeshAttributesRef<FBoneID,int>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TMeshAttributesRef<FBoneID,int>)in_RDX;
}

// GetBonePoses @ 1443a3f20

TMeshAttributesRef<FBoneID,UE::Math::TTransform<double>_> __thiscall
FSkeletalMeshAttributes::GetBonePoses(FSkeletalMeshAttributes *this)

{
  FMeshAttributeArraySetBase *pFVar1;
  FMeshElementContainer *pFVar2;
  FAttributesSetEntry *pFVar3;
  FMeshAttributeArraySetBase *in_RDX;
  
  pFVar2 = FMeshElementChannels::Get(this->BoneElements,0);
  pFVar3 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar2->Attributes,MeshAttribute::Bone::Pose);
  if (((pFVar3 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar3->Ptr).Ptr, pFVar1->Type == 7)) &&
     (pFVar1->Extent == 1)) {
    in_RDX->_padding_ = (longlong)pFVar1;
    return (TMeshAttributesRef<FBoneID,UE::Math::TTransform<double>_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TMeshAttributesRef<FBoneID,UE::Math::TTransform<double>_>)in_RDX;
}

// GetSourceGeometryPartNames @ 1443a8100

TMeshAttributesRef<FSourceGeometryPartID,FName> __thiscall
FSkeletalMeshAttributes::GetSourceGeometryPartNames(FSkeletalMeshAttributes *this)

{
  code *pcVar1;
  bool bVar2;
  TMeshAttributesRef<FSourceGeometryPartID,FName> TVar3;
  TAttributesSet<FSourceGeometryPartID> *this_00;
  FAttributesSetEntry *pFVar4;
  FMeshAttributeArraySetBase *pFVar5;
  FMeshAttributeArraySetBase *in_RDX;
  
  if (this->_padding_ == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8382464667758362990>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Private\\SkeletalMeshAttributes.cpp"
                       ,0x16e,"HasSourceGeometryParts()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.ArrayPtr = (FMeshAttributeArraySetBase *)(*pcVar1)();
      return (TMeshAttributesRef<FSourceGeometryPartID,FName>)TVar3.ArrayPtr;
    }
  }
  else {
    this_00 = SourceGeometryPartAttributes(this);
    pFVar4 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this_00,MeshAttribute::SourceGeometryPart::Name);
    if (((pFVar4 != (FAttributesSetEntry *)0x0) && (pFVar5 = (pFVar4->Ptr).Ptr, pFVar5->Type == 6))
       && (pFVar5->Extent == 1)) goto LAB_1443a8175;
  }
  pFVar5 = (FMeshAttributeArraySetBase *)0x0;
LAB_1443a8175:
  in_RDX->_padding_ = (longlong)pFVar5;
  return (TMeshAttributesRef<FSourceGeometryPartID,FName>)in_RDX;
}

// GetSourceGeometryPartVertexOffsetAndCounts @ 1443a8220

TMeshAttributesRef<FSourceGeometryPartID,TArrayView<int,int>_> * __thiscall
FSkeletalMeshAttributes::GetSourceGeometryPartVertexOffsetAndCounts
          (FSkeletalMeshAttributes *this,
          TMeshAttributesRef<FSourceGeometryPartID,TArrayView<int,int>_> *__return_storage_ptr__)

{
  uint uVar1;
  FMeshAttributeArraySetBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  TMeshAttributesRef<FSourceGeometryPartID,TArrayView<int,int>_> *pTVar5;
  TAttributesSet<FSourceGeometryPartID> *this_00;
  FAttributesSetEntry *pFVar6;
  
  if (this->_padding_ == 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8382464667758362999>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Private\\SkeletalMeshAttributes.cpp"
                       ,0x177,"HasSourceGeometryParts()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TMeshAttributesRef<FSourceGeometryPartID,TArrayView<int,int>_> *)(*pcVar3)();
      return pTVar5;
    }
    __return_storage_ptr__->Extent = 1;
    __return_storage_ptr__->ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
    return __return_storage_ptr__;
  }
  this_00 = SourceGeometryPartAttributes(this);
  pFVar6 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)this_00,MeshAttribute::SourceGeometryPart::VertexOffsetAndCount);
  if ((pFVar6 != (FAttributesSetEntry *)0x0) && (pFVar2 = (pFVar6->Ptr).Ptr, pFVar2->Type == 4)) {
    uVar1 = pFVar2->Extent;
    __return_storage_ptr__->ArrayPtr = pFVar2;
    __return_storage_ptr__->Extent = uVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->ArrayPtr = (FMeshAttributeArraySetBase *)0x0;
  __return_storage_ptr__->Extent = 1;
  return __return_storage_ptr__;
}

// GetVertexInstanceMorphNormalDelta @ 1443a9ba0

TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_> __thiscall
FSkeletalMeshAttributes::GetVertexInstanceMorphNormalDelta
          (FSkeletalMeshAttributes *this,FName param_1)

{
  FMeshAttributeArraySetBase *pFVar1;
  FMeshElementContainer *pFVar2;
  FName FVar3;
  FAttributesSetEntry *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar2 = FMeshElementChannels::Get(*(FMeshElementChannels **)(this->_padding_ + 0x58),0);
  FVar3 = FSkeletalMeshAttributesShared::CreateMorphTargetAttributeName((FName)local_res8);
  pFVar4 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar2->Attributes,*(FName *)FVar3);
  if (((pFVar4 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar4->Ptr).Ptr, pFVar1->Type == 1)) &&
     (pFVar1->Extent == 1)) {
    *(FMeshAttributeArraySetBase **)param_1 = pFVar1;
    return (TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_>)param_1;
  }
  *(undefined8 *)param_1 = 0;
  return (TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_>)param_1;
}

// GetVertexMorphPositionDelta @ 1443a9cc0

TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_> __thiscall
FSkeletalMeshAttributes::GetVertexMorphPositionDelta(FSkeletalMeshAttributes *this,FName param_1)

{
  FMeshAttributeArraySetBase *pFVar1;
  FMeshElementContainer *pFVar2;
  FName FVar3;
  FAttributesSetEntry *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar2 = FMeshElementChannels::Get(*(FMeshElementChannels **)(this->_padding_ + 0x50),0);
  FVar3 = FSkeletalMeshAttributesShared::CreateMorphTargetAttributeName((FName)local_res8);
  pFVar4 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar2->Attributes,*(FName *)FVar3);
  if (((pFVar4 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar4->Ptr).Ptr, pFVar1->Type == 1)) &&
     (pFVar1->Extent == 1)) {
    *(FMeshAttributeArraySetBase **)param_1 = pFVar1;
    return (TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_>)param_1;
  }
  *(undefined8 *)param_1 = 0;
  return (TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_>)param_1;
}

// GetVertexSkinWeights @ 1443a9de0

FSkinWeightsVertexAttributesRef __thiscall
FSkeletalMeshAttributes::GetVertexSkinWeights(FSkeletalMeshAttributes *this,FName param_1)

{
  FMeshAttributeArraySetBase *pFVar1;
  FMeshElementContainer *pFVar2;
  FName FVar3;
  FAttributesSetEntry *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar2 = FMeshElementChannels::Get(*(FMeshElementChannels **)(this->_padding_ + 0x50),0);
  FVar3 = FSkeletalMeshAttributesShared::CreateSkinWeightAttributeName((FName)local_res8);
  pFVar4 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar2->Attributes,*(FName *)FVar3);
  if (((pFVar4 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar4->Ptr).Ptr, pFVar1->Type == 4)) &&
     (pFVar1->Extent == 0)) {
    *(FMeshAttributeArraySetBase **)param_1 = pFVar1;
    return (FSkinWeightsVertexAttributesRef)param_1;
  }
  *(undefined8 *)param_1 = 0;
  return (FSkinWeightsVertexAttributesRef)param_1;
}

// GetVertexSkinWeightsFromAttributeName @ 1443a9f00

FSkinWeightsVertexAttributesRef __thiscall
FSkeletalMeshAttributes::GetVertexSkinWeightsFromAttributeName
          (FSkeletalMeshAttributes *this,FName param_1)

{
  bool bVar1;
  FMeshElementContainer *pFVar2;
  FAttributesSetEntry *pFVar3;
  FMeshAttributeArraySetBase *pFVar4;
  FName in_R8;
  
  bVar1 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(in_R8);
  if (bVar1) {
    pFVar2 = FMeshElementChannels::Get(*(FMeshElementChannels **)(this->_padding_ + 0x50),0);
    pFVar3 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)&pFVar2->Attributes,in_R8);
    if (((pFVar3 != (FAttributesSetEntry *)0x0) && (pFVar4 = (pFVar3->Ptr).Ptr, pFVar4->Type == 4))
       && (pFVar4->Extent == 0)) goto LAB_1443a9f55;
  }
  pFVar4 = (FMeshAttributeArraySetBase *)0x0;
LAB_1443a9f55:
  *(FMeshAttributeArraySetBase **)param_1 = pFVar4;
  return (FSkinWeightsVertexAttributesRef)param_1;
}

// IsReservedAttributeName @ 1443aa270

bool __cdecl FSkeletalMeshAttributes::IsReservedAttributeName(FName param_1)

{
  bool bVar1;
  
  if (((((((param_1 != MeshAttribute::Vertex::Position) &&
          (param_1 != MeshAttribute::VertexInstance::VertexIndex)) &&
         (param_1 != MeshAttribute::Edge::VertexIndex)) &&
        ((param_1 != MeshAttribute::Triangle::VertexInstanceIndex &&
         (param_1 != MeshAttribute::Triangle::PolygonIndex)))) &&
       (param_1 != MeshAttribute::Triangle::EdgeIndex)) &&
      (((param_1 != MeshAttribute::Triangle::VertexIndex &&
        (param_1 != MeshAttribute::Triangle::UVIndex)) &&
       ((param_1 != MeshAttribute::Triangle::PolygonGroupIndex &&
        (((param_1 != MeshAttribute::UV::UVCoordinate &&
          (param_1 != MeshAttribute::Polygon::PolygonGroupIndex)) &&
         (param_1 != MeshAttribute::VertexInstance::TextureCoordinate)))))))) &&
     (((param_1 != MeshAttribute::VertexInstance::Normal &&
       (param_1 != MeshAttribute::VertexInstance::Tangent)) &&
      ((param_1 != MeshAttribute::VertexInstance::BinormalSign &&
       ((((param_1 != MeshAttribute::VertexInstance::Color &&
          (param_1 != MeshAttribute::Edge::IsHard)) &&
         ((param_1 != MeshAttribute::Triangle::Normal &&
          (((param_1 != MeshAttribute::Triangle::Tangent &&
            (param_1 != MeshAttribute::Triangle::Binormal)) &&
           (param_1 != MeshAttribute::Polygon::ObjectName)))))) &&
        (param_1 != MeshAttribute::PolygonGroup::ImportedMaterialSlotName)))))))) {
    bVar1 = FSkeletalMeshAttributesShared::IsSkinWeightAttribute(param_1);
    if (!bVar1) {
      bVar1 = FSkeletalMeshAttributesShared::IsMorphTargetAttribute(param_1);
      if (((!bVar1) && (param_1 != MeshAttribute::Bone::Name)) &&
         ((param_1 != MeshAttribute::Bone::ParentIndex &&
          ((param_1 != MeshAttribute::Bone::Pose && (param_1 != MeshAttribute::Bone::Color)))))) {
        return false;
      }
    }
  }
  return true;
}

// Register @ 1443aba90

void __thiscall FSkeletalMeshAttributes::Register(FSkeletalMeshAttributes *this,bool param_1)

{
  FAttributesSetBase *this_00;
  longlong *plVar1;
  TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
  *this_01;
  FMeshElementChannels *pFVar2;
  FMeshAttributeArraySetBase *pFVar3;
  FName FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FMeshElementContainer *pFVar8;
  FAttributesSetEntry *pFVar9;
  TMeshAttributeArraySet<UE::Math::TTransform<double>_> *pTVar10;
  longlong *plVar11;
  FMeshElementChannels **ppFVar12;
  TMeshAttributeArraySet<UE::Math::TTransform<double>_> *pTVar13;
  TPairInitializer<FName_const_&,FAttributesSetEntry_&&> local_res8;
  TMeshAttributeArraySet<UE::Math::TTransform<double>_> *local_res18;
  FName local_res20;
  FName *local_48;
  TMeshAttributeArraySet<UE::Math::TTransform<double>_> **local_40;
  
  pFVar8 = FMeshElementChannels::Get(*(FMeshElementChannels **)(this->_padding_ + 0x50),0);
  bVar5 = FAttributesSetBase::HasAttribute(&pFVar8->Attributes,MeshAttribute::Vertex::SkinWeights);
  pTVar13 = (TMeshAttributeArraySet<UE::Math::TTransform<double>_> *)0x0;
  if ((!bVar5) || (!param_1)) {
    pFVar8 = FMeshElementChannels::Get(*(FMeshElementChannels **)(this->_padding_ + 0x50),0);
    local_res8.Key = (FName *)((ulonglong)local_res8.Key & 0xffffffff00000000);
    FAttributesSetBase::RegisterAttribute<int_[0],0>
              (&pFVar8->Attributes,(FName)&local_res18,
               MeshAttribute::Vertex::SkinWeights.ComparisonIndex.Value.Value,(int *)&DAT_00000001,
               (EMeshAttributeFlags)&local_res8);
  }
  FVar4 = FSkeletalMeshAttributesShared::BonesElementName;
  plVar1 = (longlong *)this->_padding_;
  uVar6 = ::GetTypeHash(FSkeletalMeshAttributesShared::BonesElementName.ComparisonIndex.Value);
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar11 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar11 = plVar1 + 7;
    }
    iVar7 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar1[9] - 1U & FVar4.Number + uVar6) * 4
                    );
    if (iVar7 != -1) {
      do {
        if (*(FName *)(*plVar1 + (longlong)iVar7 * 0x18) == FVar4) goto LAB_1443abbb6;
        iVar7 = *(int *)(*plVar1 + 0x10 + (longlong)iVar7 * 0x18);
      } while (iVar7 != -1);
    }
  }
  this_01 = (TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
             *)this->_padding_;
  local_res18 = (TMeshAttributeArraySet<UE::Math::TTransform<double>_> *)
                &FSkeletalMeshAttributesShared::BonesElementName;
  TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FName_&>_>
            (this_01,(TKeyInitializer<FName_&> *)&local_res8,(bool *)&local_res18);
  pFVar2 = *(FMeshElementChannels **)
            (*(longlong *)&this_01->Elements + 8 + (longlong)(int)local_res8.Key._0_4_ * 0x18);
  this->BoneElements = pFVar2;
  this->_padding_ = (longlong)pFVar2;
LAB_1443abbb6:
  ppFVar12 = &this->BoneElements;
  pFVar8 = FMeshElementChannels::Get(*ppFVar12,0);
  bVar5 = FAttributesSetBase::HasAttribute(&pFVar8->Attributes,MeshAttribute::Bone::Name);
  if ((!bVar5) || (!param_1)) {
    pFVar8 = FMeshElementChannels::Get(*ppFVar12,0);
    local_res8.Key = (FName *)0x0;
    FAttributesSetBase::RegisterAttribute<FName,0>
              (&pFVar8->Attributes,(FName)&local_res18,
               MeshAttribute::Bone::Name.ComparisonIndex.Value.Value,(FName *)&DAT_00000001,
               (EMeshAttributeFlags)&local_res8);
  }
  pFVar8 = FMeshElementChannels::Get(*ppFVar12,0);
  bVar5 = FAttributesSetBase::HasAttribute(&pFVar8->Attributes,MeshAttribute::Bone::ParentIndex);
  if ((!bVar5) || (!param_1)) {
    pFVar8 = FMeshElementChannels::Get(*ppFVar12,0);
    local_res8.Key = (FName *)CONCAT44(local_res8.Key._4_4_,0xffffffff);
    FAttributesSetBase::RegisterAttribute<int,0>
              (&pFVar8->Attributes,(FName)&local_res18,
               MeshAttribute::Bone::ParentIndex.ComparisonIndex.Value.Value,(int *)&DAT_00000001,
               (EMeshAttributeFlags)&local_res8);
  }
  pFVar8 = FMeshElementChannels::Get(*ppFVar12,0);
  bVar5 = FAttributesSetBase::HasAttribute(&pFVar8->Attributes,MeshAttribute::Bone::Pose);
  if ((!bVar5) || (!param_1)) {
    pFVar8 = FMeshElementChannels::Get(this->BoneElements,0);
    local_res20 = MeshAttribute::Bone::Pose;
    this_00 = &pFVar8->Attributes;
    pFVar9 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this_00,MeshAttribute::Bone::Pose);
    FVar4 = local_res20;
    if (pFVar9 != (FAttributesSetEntry *)0x0) {
      pFVar3 = (pFVar9->Ptr).Ptr;
      if ((pFVar3->Type == 7) && (pFVar3->Extent == 1)) {
        (**(code **)(pFVar3->_padding_ + 0x70))(pFVar3,1);
        ((pFVar9->Ptr).Ptr)->Flags = Mandatory;
        goto LAB_1443abe29;
      }
      local_res8.Key = (FName *)local_res20;
      if (*(int *)&(pFVar8->Attributes).Map.field_0x8 !=
          *(int *)&(pFVar8->Attributes).Map.field_0x34) {
        uVar6 = ::GetTypeHash(local_res20.ComparisonIndex.Value);
        TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
        ::RemoveImpl<FName>((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                             *)this_00,FVar4.Number + uVar6,(FName *)&local_res8);
      }
    }
    iVar7 = (pFVar8->Attributes).NumElements;
    local_res18 = (TMeshAttributeArraySet<UE::Math::TTransform<double>_> *)0x0;
    pTVar10 = ::operator_new(0xa0);
    if (pTVar10 != (TMeshAttributeArraySet<UE::Math::TTransform<double>_> *)0x0) {
      (pTVar10->ArrayForChannels).AllocatorInstance.SecondaryData =
           (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)0x0;
      *(undefined4 *)&pTVar10->_padding_ = 7;
      *(undefined4 *)((longlong)&pTVar10->_padding_ + 4) = 1;
      *(int *)&pTVar10->_padding_ = iVar7;
      *(undefined4 *)((longlong)&pTVar10->_padding_ + 4) = 0x20;
      pTVar10->_padding_ = (longlong)&___7__TMeshAttributeArraySet_U__TTransform_N_Math_UE____6B_;
      (pTVar10->ArrayForChannels).ArrayNum = 0;
      (pTVar10->ArrayForChannels).ArrayMax = 1;
      *&(pTVar10->DefaultValue).Rotation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      *&(pTVar10->DefaultValue).Rotation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      *&(pTVar10->DefaultValue).Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      *&(pTVar10->DefaultValue).Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      *&(pTVar10->DefaultValue).Scale3D.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      *&(pTVar10->DefaultValue).Scale3D.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      TMeshAttributeArraySet<UE::Math::TTransform<double>_>::SetNumChannels(pTVar10,1);
      pTVar13 = pTVar10;
    }
    pTVar10 = local_res18;
    if (local_res18 != (TMeshAttributeArraySet<UE::Math::TTransform<double>_> *)0x0) {
      plVar1 = &local_res18->_padding_;
      local_res18 = pTVar13;
      (**(code **)*plVar1)(pTVar10,1);
      pTVar13 = local_res18;
    }
    local_res18 = pTVar13;
    local_48 = &local_res20;
    local_40 = &local_res18;
    TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FAttributesSetEntry_&&>_>
              ((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                *)this_00,&local_res8,(bool *)&local_48);
    if (local_res18 != (TMeshAttributeArraySet<UE::Math::TTransform<double>_> *)0x0) {
      (**(code **)local_res18->_padding_)(local_res18,1);
    }
  }
LAB_1443abe29:
  FStaticMeshAttributes::Register((FStaticMeshAttributes *)this,param_1);
  return;
}

// RegisterColorAttribute @ 1443abeb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FSkeletalMeshAttributes::RegisterColorAttribute(FSkeletalMeshAttributes *this)

{
  FMeshElementContainer *pFVar1;
  undefined1 local_res8 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  
  pFVar1 = FMeshElementChannels::Get(this->BoneElements,0);
  local_18 = ___xmm_3f8000003f8000003f8000003f800000;
  uStack_10 = _UNK_15076b1f8;
  FAttributesSetBase::RegisterAttribute<UE::Math::TVector4<float>,0>
            (&pFVar1->Attributes,(FName)local_res8,
             MeshAttribute::Bone::Color.ComparisonIndex.Value.Value,(TVector4<float> *)&DAT_00000001
             ,(EMeshAttributeFlags)&local_18);
  return;
}

// RegisterImportPointIndexAttribute @ 1443abf10

bool __thiscall
FSkeletalMeshAttributes::RegisterImportPointIndexAttribute(FSkeletalMeshAttributes *this)

{
  FMeshElementContainer *pFVar1;
  TMeshAttributesRef<int,int> TVar2;
  undefined4 local_res8 [2];
  undefined1 local_res10 [24];
  
  pFVar1 = FMeshElementChannels::Get(*(FMeshElementChannels **)(this->_padding_ + 0x50),0);
  local_res8[0] = 0xffffffff;
  TVar2 = FAttributesSetBase::RegisterAttribute<int,0>
                    (&pFVar1->Attributes,(FName)local_res10,
                     MeshAttribute::Vertex::ImportPointIndex.ComparisonIndex.Value.Value,
                     (int *)&DAT_00000001,(EMeshAttributeFlags)local_res8);
  return (TVar2.ArrayPtr)->_padding_ != 0;
}

// RegisterMorphTargetAttribute @ 1443abf70

bool __thiscall
FSkeletalMeshAttributes::RegisterMorphTargetAttribute
          (FSkeletalMeshAttributes *this,FName param_1,bool param_2)

{
  FAttributesSetBase *this_00;
  FAttributesSetBase *this_01;
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  uint uVar6;
  FString *pFVar7;
  FName *pFVar8;
  FMeshElementContainer *pFVar9;
  TMeshAttributesRef<int,UE::Math::TVector<float>_> TVar10;
  int iVar11;
  FNameEntryId FVar12;
  FName local_res10;
  uint uStackX_24;
  FName local_68;
  FName local_60;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  FString local_48;
  FString local_38;
  
  if (param_1 != (FName)0x0) {
    local_res10 = param_1;
    pFVar7 = ::FName::ToString(&local_res10,&local_38);
    ::FString::ConcatFF(&local_48,&MorphTargetAttributeNamePrefix,pFVar7);
    iVar11 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar11 = 0;
    }
    pFVar8 = ::FName::FName(&local_60,iVar11,(wchar_t *)local_48.Data.AllocatorInstance.Data,
                            FNAME_Add);
    FVar1 = *pFVar8;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    FVar12 = FVar1.ComparisonIndex.Value;
    bVar3 = ::FName::IsWithinBounds(FVar12);
    if (bVar3) {
      pFVar9 = FMeshElementChannels::Get(*(FMeshElementChannels **)(this->_padding_ + 0x50),0);
      this_00 = &pFVar9->Attributes;
      bVar3 = FAttributesSetBase::HasAttribute(this_00,FVar1);
      if (!bVar3) {
        TVar10 = FAttributesSetBase::RegisterAttribute<UE::Math::TVector<float>,0>
                           (this_00,(FName)local_58,FVar12.Value,(TVector<float> *)&DAT_00000001,
                            0x54b783f8);
        bVar3 = (TVar10.ArrayPtr)->_padding_ != 0;
      }
      pFVar9 = FMeshElementChannels::Get(*(FMeshElementChannels **)(this->_padding_ + 0x58),0);
      this_01 = &pFVar9->Attributes;
      if ((bVar3 == false) || (!param_2)) {
        bVar5 = FAttributesSetBase::HasAttribute(this_01,FVar1);
        if ((bVar5) &&
           (*(int *)&(pFVar9->Attributes).Map.field_0x8 !=
            *(int *)&(pFVar9->Attributes).Map.field_0x34)) {
          local_68 = FVar1;
          uVar6 = ::GetTypeHash(FVar12);
          uStackX_24 = FVar1.Number;
          TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
          ::RemoveImpl<FName>((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                               *)this_01,uStackX_24 + uVar6,&local_68);
        }
      }
      else {
        TVar10 = FAttributesSetBase::RegisterAttribute<UE::Math::TVector<float>,0>
                           (this_01,(FName)local_50,FVar12.Value,(TVector<float> *)&DAT_00000001,
                            0x54b783f8);
        bVar3 = (TVar10.ArrayPtr)->_padding_ != 0;
        if ((TVar10.ArrayPtr)->_padding_ == 0) {
          FAttributesSetBase::UnregisterAttribute(this_00,FVar1);
        }
      }
      return bVar3;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8382464667758362810>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Private\\SkeletalMeshAttributes.cpp"
                       ,0xba,"AttributeName.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return false;
}

// RegisterSkinWeightAttribute @ 1443ac170

bool __thiscall
FSkeletalMeshAttributes::RegisterSkinWeightAttribute(FSkeletalMeshAttributes *this,FName param_1)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  undefined1 uVar4;
  FMeshElementContainer *pFVar5;
  TMeshAttributesRef<int,TArrayAttribute<int>_> TVar6;
  undefined4 local_res10 [2];
  FNameEntryId local_res18;
  uint uStackX_1c;
  undefined1 local_res20 [8];
  
  if ((param_1 != (FName)0x0) &&
     ((param_1.ComparisonIndex.Value.Value !=
       FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName.ComparisonIndex.Value ||
      (param_1.Number != FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName.Number)))) {
    FSkeletalMeshAttributesShared::CreateSkinWeightAttributeName((FName)&local_res18);
    bVar3 = ::FName::IsWithinBounds(local_res18);
    if (bVar3) {
      pFVar5 = FMeshElementChannels::Get(*(FMeshElementChannels **)(this->_padding_ + 0x50),0);
      FVar2.Number = uStackX_1c;
      FVar2.ComparisonIndex.Value = local_res18.Value;
      bVar3 = FAttributesSetBase::HasAttribute(&pFVar5->Attributes,FVar2);
      if (bVar3) {
        return true;
      }
      local_res10[0] = 0;
      pFVar5 = FMeshElementChannels::Get(*(FMeshElementChannels **)(this->_padding_ + 0x50),0);
      TVar6 = FAttributesSetBase::RegisterAttribute<int_[0],0>
                        (&pFVar5->Attributes,(FName)local_res20,local_res18.Value,
                         (int *)&DAT_00000001,(EMeshAttributeFlags)local_res10);
      return (TVar6.ArrayPtr)->_padding_ != 0;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8382464667758362744>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Private\\SkeletalMeshAttributes.cpp"
                       ,0x78,"AttributeName.IsValid()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  return false;
}

// RegisterSourceGeometryPartsAttributes @ 1443ac260

void __thiscall
FSkeletalMeshAttributes::RegisterSourceGeometryPartsAttributes(FSkeletalMeshAttributes *this)

{
  undefined4 uVar1;
  longlong *plVar2;
  TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
  *this_00;
  FMeshElementChannels *pFVar3;
  FMeshAttributeArraySetBase *pFVar4;
  TUniquePtr<FMeshAttributeArraySetBase,TDefaultDelete<FMeshAttributeArraySetBase>_> *pTVar5;
  FName FVar6;
  uint uVar7;
  int iVar8;
  FAttributesSetBase *this_01;
  TAttributesSet<FSourceGeometryPartID> *this_02;
  FAttributesSetEntry *pFVar9;
  TMeshAttributeArraySet<int> *this_03;
  longlong *plVar10;
  TMeshAttributeArraySet<int> *pTVar11;
  TPairInitializer<FName_const_&,FAttributesSetEntry_&&> local_res8;
  FName local_res18;
  FName *local_28;
  FAttributesSetEntry **local_20;
  
  FVar6 = FSkeletalMeshAttributesShared::SourceGeometryPartElementName;
  plVar2 = (longlong *)this->_padding_;
  uVar7 = ::GetTypeHash(FSkeletalMeshAttributesShared::SourceGeometryPartElementName.ComparisonIndex
                        .Value);
  if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
    plVar10 = (longlong *)plVar2[8];
    if ((longlong *)plVar2[8] == (longlong *)0x0) {
      plVar10 = plVar2 + 7;
    }
    iVar8 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar2[9] - 1U & FVar6.Number + uVar7) * 4
                    );
    if (iVar8 != -1) {
      do {
        if (*(FName *)(*plVar2 + (longlong)iVar8 * 0x18) == FVar6) goto LAB_1443ac313;
        iVar8 = *(int *)(*plVar2 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  this_00 = (TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
             *)this->_padding_;
  local_res8.Value =
       (FAttributesSetEntry *)&FSkeletalMeshAttributesShared::SourceGeometryPartElementName;
  TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FName_&>_>
            (this_00,(TKeyInitializer<FName_&> *)&local_res8,(bool *)&local_res8.Value);
  pFVar3 = *(FMeshElementChannels **)
            (*(longlong *)&this_00->Elements + 8 + (longlong)(int)local_res8.Key * 0x18);
  this->SourceGeometryPartElements = pFVar3;
  this->_padding_ = (longlong)pFVar3;
LAB_1443ac313:
  this_01 = (FAttributesSetBase *)SourceGeometryPartAttributes(this);
  pTVar11 = (TMeshAttributeArraySet<int> *)0x0;
  local_res8.Key = (FName *)0x0;
  FAttributesSetBase::RegisterAttribute<FName,0>
            (this_01,(FName)&local_res8.Value,
             MeshAttribute::SourceGeometryPart::Name.ComparisonIndex.Value.Value,
             (FName *)&DAT_00000001,(EMeshAttributeFlags)&local_res8);
  this_02 = SourceGeometryPartAttributes(this);
  local_res18 = MeshAttribute::SourceGeometryPart::VertexOffsetAndCount;
  pFVar9 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)this_02,MeshAttribute::SourceGeometryPart::VertexOffsetAndCount);
  FVar6 = local_res18;
  if (pFVar9 != (FAttributesSetEntry *)0x0) {
    pFVar4 = (pFVar9->Ptr).Ptr;
    if ((pFVar4->Type == 4) && (pFVar4->Extent == 2)) {
      (**(code **)(pFVar4->_padding_ + 0x70))(pFVar4,1);
      ((pFVar9->Ptr).Ptr)->Flags = Mandatory;
      return;
    }
    local_res8.Key = (FName *)local_res18;
    if (*(int *)&this_02->field_0x8 != *(int *)&this_02->field_0x34) {
      uVar7 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
      TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                           *)this_02,FVar6.Number + uVar7,(FName *)&local_res8);
    }
  }
  uVar1 = *(undefined4 *)&this_02->field_0x50;
  local_res8.Value = (FAttributesSetEntry *)0x0;
  this_03 = ::operator_new(0x48);
  if (this_03 != (TMeshAttributeArraySet<int> *)0x0) {
    *(undefined4 *)&this_03->_padding_ = 4;
    *(undefined4 *)((longlong)&this_03->_padding_ + 4) = 2;
    *(undefined4 *)&this_03->_padding_ = uVar1;
    *(undefined4 *)((longlong)&this_03->_padding_ + 4) = 0x20;
    this_03->_padding_ = (longlong)&___7__TMeshAttributeArraySet_H__6B_;
    (this_03->ArrayForChannels).AllocatorInstance.SecondaryData =
         (ForElementType<TMeshAttributeArrayBase<int>_>)0x0;
    (this_03->ArrayForChannels).ArrayNum = 0;
    *(undefined8 *)&(this_03->ArrayForChannels).ArrayMax = 1;
    TMeshAttributeArraySet<int>::SetNumChannels(this_03,1);
    pTVar11 = this_03;
  }
  pFVar9 = local_res8.Value;
  if (local_res8.Value != (FAttributesSetEntry *)0x0) {
    pTVar5 = &(local_res8.Value)->Ptr;
    local_res8.Value = (FAttributesSetEntry *)pTVar11;
    (*(code *)pTVar5->Ptr->_padding_)(pFVar9,1);
    pTVar11 = (TMeshAttributeArraySet<int> *)local_res8.Value;
  }
  local_res8.Value = (FAttributesSetEntry *)pTVar11;
  local_28 = &local_res18;
  local_20 = &local_res8.Value;
  TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FAttributesSetEntry_&&>_>
            ((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              *)this_02,&local_res8,(bool *)&local_28);
  if ((TMeshAttributeArraySet<int> *)local_res8.Value != (TMeshAttributeArraySet<int> *)0x0) {
    (*(code *)**(undefined8 **)&(local_res8.Value)->Ptr)(local_res8.Value,1);
  }
  return;
}

// ReserveNewBones @ 1443acd70

void __thiscall FSkeletalMeshAttributes::ReserveNewBones(FSkeletalMeshAttributes *this,int param_1)

{
  FMeshElementContainer *this_00;
  
  this_00 = FMeshElementChannels::Get(this->BoneElements,0);
  TBitArray<FDefaultBitArrayAllocator>::Reserve(&this_00->BitArray,param_1);
  return;
}

// SourceGeometryPartAttributes @ 1443ad280

TAttributesSet<FSourceGeometryPartID> * __thiscall
FSkeletalMeshAttributes::SourceGeometryPartAttributes(FSkeletalMeshAttributes *this)

{
  code *pcVar1;
  bool bVar2;
  TAttributesSet<FSourceGeometryPartID> *pTVar3;
  TMeshElementContainer<FSourceGeometryPartID> *pTVar4;
  
  if (this->_padding_ != 0) {
    pTVar4 = SourceGeometryParts(this);
    return (TAttributesSet<FSourceGeometryPartID> *)&pTVar4->field_0x20;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8382464667758362962>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Private\\SkeletalMeshAttributes.cpp"
                     ,0x152,"HasSourceGeometryParts()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TAttributesSet<FSourceGeometryPartID> *)(*pcVar1)();
    return pTVar3;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FSkeletalMeshAttributes::SourceGeometryPartAttributes'::__l5::
             _dynamic_atexit_destructor_for__Empty__);
      _Init_thread_footer(&::_TSS0);
      return &::Empty;
    }
  }
  return &::Empty;
}

// SourceGeometryParts @ 1443ad400

TMeshElementContainer<FSourceGeometryPartID> * __thiscall
FSkeletalMeshAttributes::SourceGeometryParts(FSkeletalMeshAttributes *this)

{
  code *pcVar1;
  bool bVar2;
  TMeshElementContainer<FSourceGeometryPartID> *pTVar3;
  FMeshElementContainer *pFVar4;
  
  if (this->_padding_ != 0) {
    pFVar4 = FMeshElementChannels::Get(this->SourceGeometryPartElements,0);
    return (TMeshElementContainer<FSourceGeometryPartID> *)pFVar4;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8382464667758362952>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Private\\SkeletalMeshAttributes.cpp"
                     ,0x148,"HasSourceGeometryParts()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TMeshElementContainer<FSourceGeometryPartID> *)(*pcVar1)();
    return pTVar3;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FSkeletalMeshAttributes::SourceGeometryParts'::__l5::
             _dynamic_atexit_destructor_for__Empty__);
      _Init_thread_footer(&::_TSS0);
      return &::Empty;
    }
  }
  return &::Empty;
}

// UnregisterImportPointIndexAttribute @ 1443b0cf0

void __thiscall
FSkeletalMeshAttributes::UnregisterImportPointIndexAttribute(FSkeletalMeshAttributes *this)

{
  FName FVar1;
  uint uVar2;
  FMeshElementContainer *pFVar3;
  FName local_res8;
  
  pFVar3 = FMeshElementChannels::Get(*(FMeshElementChannels **)(this->_padding_ + 0x50),0);
  FVar1 = MeshAttribute::Vertex::ImportPointIndex;
  local_res8 = MeshAttribute::Vertex::ImportPointIndex;
  if (*(int *)&(pFVar3->Attributes).Map.field_0x8 != *(int *)&(pFVar3->Attributes).Map.field_0x34) {
    uVar2 = ::GetTypeHash(MeshAttribute::Vertex::ImportPointIndex.ComparisonIndex.Value);
    TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
    ::RemoveImpl<FName>((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                         *)&pFVar3->Attributes,FVar1.Number + uVar2,&local_res8);
  }
  return;
}

// UnregisterMorphTargetAttribute @ 1443b0d50

bool __thiscall
FSkeletalMeshAttributes::UnregisterMorphTargetAttribute(FSkeletalMeshAttributes *this,FName param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FString *pFVar6;
  FName *pFVar7;
  FMeshElementContainer *pFVar8;
  int iVar9;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_48;
  FString local_40;
  FString local_30;
  
  if (param_1 != (FName)0x0) {
    local_res10 = param_1;
    pFVar6 = ::FName::ToString(&local_res10,&local_30);
    ::FString::ConcatFF(&local_40,&MorphTargetAttributeNamePrefix,pFVar6);
    iVar9 = local_40.Data.ArrayNum + -1;
    if (local_40.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    pFVar7 = ::FName::FName(&local_48,iVar9,(wchar_t *)local_40.Data.AllocatorInstance.Data,
                            FNAME_Add);
    FVar1 = *pFVar7;
    local_res18 = FVar1;
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    bVar3 = ::FName::IsWithinBounds(FVar1.ComparisonIndex.Value);
    if (bVar3) {
      pFVar8 = FMeshElementChannels::Get(*(FMeshElementChannels **)(this->_padding_ + 0x50),0);
      bVar3 = FAttributesSetBase::HasAttribute(&pFVar8->Attributes,FVar1);
      if (bVar3) {
        pFVar8 = FMeshElementChannels::Get(*(FMeshElementChannels **)(this->_padding_ + 0x50),0);
        local_res20 = FVar1;
        if (*(int *)&(pFVar8->Attributes).Map.field_0x8 !=
            *(int *)&(pFVar8->Attributes).Map.field_0x34) {
          uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
          TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
          ::RemoveImpl<FName>((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                               *)&pFVar8->Attributes,local_res18.Number + uVar5,&local_res20);
        }
        pFVar8 = FMeshElementChannels::Get(*(FMeshElementChannels **)(this->_padding_ + 0x58),0);
        bVar3 = FAttributesSetBase::HasAttribute(&pFVar8->Attributes,FVar1);
        if (bVar3) {
          pFVar8 = FMeshElementChannels::Get(*(FMeshElementChannels **)(this->_padding_ + 0x58),0);
          FAttributesSetBase::UnregisterAttribute(&pFVar8->Attributes,FVar1);
        }
        return true;
      }
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8382464667758362854>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Private\\SkeletalMeshAttributes.cpp"
                         ,0xe6,"AttributeName.IsValid()");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
  }
  return false;
}

// UnregisterSkinWeightAttribute @ 1443b0ed0

bool __thiscall
FSkeletalMeshAttributes::UnregisterSkinWeightAttribute(FSkeletalMeshAttributes *this,FName param_1)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FMeshElementContainer *pFVar6;
  FNameEntryId local_res10;
  uint uStackX_14;
  FName local_res18 [2];
  
  if ((param_1 != (FName)0x0) &&
     ((param_1.ComparisonIndex.Value.Value !=
       FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName.ComparisonIndex.Value ||
      (param_1.Number != FSkeletalMeshAttributesShared::DefaultSkinWeightProfileName.Number)))) {
    FSkeletalMeshAttributesShared::CreateSkinWeightAttributeName((FName)&local_res10);
    FVar2.Number = uStackX_14;
    FVar2.ComparisonIndex.Value = local_res10.Value;
    bVar3 = ::FName::IsWithinBounds(local_res10);
    if (bVar3) {
      pFVar6 = FMeshElementChannels::Get(*(FMeshElementChannels **)(this->_padding_ + 0x50),0);
      bVar3 = FAttributesSetBase::HasAttribute(&pFVar6->Attributes,FVar2);
      if (bVar3) {
        pFVar6 = FMeshElementChannels::Get(*(FMeshElementChannels **)(this->_padding_ + 0x50),0);
        if (*(int *)&(pFVar6->Attributes).Map.field_0x8 !=
            *(int *)&(pFVar6->Attributes).Map.field_0x34) {
          uVar5 = ::GetTypeHash(local_res10);
          TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
          ::RemoveImpl<FName>((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                               *)&pFVar6->Attributes,uVar5 + uStackX_14,local_res18);
        }
        return true;
      }
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8382464667758362765>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Private\\SkeletalMeshAttributes.cpp"
                         ,0x8d,"AttributeName.IsValid()");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
  }
  return false;
}

