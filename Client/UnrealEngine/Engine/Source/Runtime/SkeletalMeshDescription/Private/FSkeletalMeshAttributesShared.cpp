// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SkeletalMeshDescription
// Functions: 34

// FSkeletalMeshAttributesShared @ 144393700

FSkeletalMeshAttributesShared * __thiscall
FSkeletalMeshAttributesShared::FSkeletalMeshAttributesShared
          (FSkeletalMeshAttributesShared *this,FMeshDescription *param_1)

{
  FMeshDescription *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TTuple<FName,FMeshElementTypeWrapper> *pTVar7;
  FSkeletalMeshAttributesShared *pFVar8;
  undefined1 *puVar9;
  
  this->MeshDescriptionShared = param_1;
  this->BoneElementsShared = (FMeshElementChannels *)0x0;
  this->SourceGeometryPartElementsShared = (FMeshElementChannels *)0x0;
  FVar3 = BonesElementName;
  uVar5 = ::GetTypeHash(BonesElementName.ComparisonIndex.Value);
  if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
    puVar9 = *(undefined1 **)&(param_1->Elements).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(param_1->Elements).field_0x38;
    }
    iVar6 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(param_1->Elements).field_0x48 - 1U & FVar3.Number + uVar5)
                              * 4);
    if (iVar6 != -1) {
      do {
        if (*(FName *)(*(longlong *)&param_1->Elements + (longlong)iVar6 * 0x18) == FVar3) {
          pTVar7 = TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
                           *)this->MeshDescriptionShared,BonesElementName);
          if ((pTVar7 == (TTuple<FName,FMeshElementTypeWrapper> *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x27b,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            pFVar8 = (FSkeletalMeshAttributesShared *)(*pcVar2)();
            return pFVar8;
          }
          this->BoneElementsShared = *(FMeshElementChannels **)&pTVar7->field_0x8;
          break;
        }
        iVar6 = *(int *)(*(longlong *)&param_1->Elements + 0x10 + (longlong)iVar6 * 0x18);
      } while (iVar6 != -1);
    }
  }
  FVar3 = SourceGeometryPartElementName;
  pFVar1 = this->MeshDescriptionShared;
  uVar5 = ::GetTypeHash(SourceGeometryPartElementName.ComparisonIndex.Value);
  if (*(int *)&(pFVar1->Elements).field_0x8 != *(int *)&(pFVar1->Elements).field_0x34) {
    puVar9 = *(undefined1 **)&(pFVar1->Elements).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(pFVar1->Elements).field_0x38;
    }
    iVar6 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(pFVar1->Elements).field_0x48 - 1U & FVar3.Number + uVar5) *
                              4);
    if (iVar6 != -1) {
      while (*(FName *)(*(longlong *)&pFVar1->Elements + (longlong)iVar6 * 0x18) != FVar3) {
        iVar6 = *(int *)(*(longlong *)&pFVar1->Elements + 0x10 + (longlong)iVar6 * 0x18);
        if (iVar6 == -1) {
          return this;
        }
      }
      pTVar7 = TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,FMeshElementTypeWrapper>,TDefaultMapHashableKeyFuncs<FName,FMeshElementTypeWrapper,0>,FDefaultSetAllocator>
                       *)this->MeshDescriptionShared,SourceGeometryPartElementName);
      if ((pTVar7 == (TTuple<FName,FMeshElementTypeWrapper> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x27b,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FSkeletalMeshAttributesShared *)(*pcVar2)();
        return pFVar8;
      }
      this->SourceGeometryPartElementsShared = *(FMeshElementChannels **)&pTVar7->field_0x8;
    }
  }
  return this;
}

// BoneAttributes @ 14439e7e0

TAttributesSet<FBoneID> * __thiscall
FSkeletalMeshAttributesShared::BoneAttributes(FSkeletalMeshAttributesShared *this)

{
  FMeshElementContainer *pFVar1;
  
  pFVar1 = FMeshElementChannels::Get(this->BoneElementsShared,0);
  return (TAttributesSet<FBoneID> *)&pFVar1->Attributes;
}

// Bones @ 14439e820

TMeshElementContainer<FBoneID> * __thiscall
FSkeletalMeshAttributesShared::Bones(FSkeletalMeshAttributesShared *this)

{
  FMeshElementContainer *pFVar1;
  
  pFVar1 = FMeshElementChannels::Get(this->BoneElementsShared,0);
  return (TMeshElementContainer<FBoneID> *)pFVar1;
}

// CreateMorphTargetAttributeName @ 1443a0400

FName __cdecl FSkeletalMeshAttributesShared::CreateMorphTargetAttributeName(FName param_1)

{
  code *pcVar1;
  bool bVar2;
  FName FVar3;
  FString *pFVar4;
  FName *pFVar5;
  int iVar6;
  longlong in_RDX;
  FName local_res10;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  if (in_RDX != 0) {
    pFVar4 = ::FName::ToString(&local_res10,&local_18);
    ::FString::ConcatFF(&local_28,&MorphTargetAttributeNamePrefix,pFVar4);
    iVar6 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    pFVar5 = ::FName::FName(local_res18,iVar6,(wchar_t *)local_28.Data.AllocatorInstance.Data,
                            FNAME_Add);
    *(FName *)param_1 = *pFVar5;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return param_1;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8382464667758363110>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Private\\SkeletalMeshAttributes.cpp"
                     ,0x1e6,"!InMorphTargetName.IsNone()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    FVar3 = (FName)(*pcVar1)();
    return FVar3;
  }
  *(undefined8 *)param_1 = 0;
  return param_1;
}

// CreateSkinWeightAttributeName @ 1443a04d0

FName __cdecl FSkeletalMeshAttributesShared::CreateSkinWeightAttributeName(FName param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  FName *pFVar3;
  int iVar4;
  longlong in_RDX;
  FName local_res10;
  FName local_res18 [2];
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if ((in_RDX == 0) ||
     (((uint)in_RDX == DefaultSkinWeightProfileName.ComparisonIndex.Value &&
      ((uint)((ulonglong)in_RDX >> 0x20) == DefaultSkinWeightProfileName.Number)))) {
    *(FName *)param_1 = MeshAttribute::Vertex::SkinWeights;
  }
  else {
    pFVar1 = ::FName::ToString(&local_res10,&local_18);
    pFVar2 = ::FName::ToString(&MeshAttribute::Vertex::SkinWeights,&local_28);
    ::FString::ConcatFC(&local_38,pFVar2,L"-");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    ::FString::ConcatFF(&local_48,&local_38,pFVar1);
    iVar4 = local_48.Data.ArrayNum + -1;
    if (local_48.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    pFVar3 = ::FName::FName(local_res18,iVar4,(wchar_t *)local_48.Data.AllocatorInstance.Data,
                            FNAME_Add);
    *(FName *)param_1 = *pFVar3;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return param_1;
    }
  }
  return param_1;
}

// GetBoneColors @ 1443a3d40

TMeshAttributesRef<FBoneID,UE::Math::TVector4<float>_const_> __thiscall
FSkeletalMeshAttributesShared::GetBoneColors(FSkeletalMeshAttributesShared *this)

{
  FMeshAttributeArraySetBase *pFVar1;
  FMeshElementContainer *pFVar2;
  FAttributesSetEntry *pFVar3;
  FMeshAttributeArraySetBase *in_RDX;
  
  pFVar2 = FMeshElementChannels::Get(this->BoneElementsShared,0);
  pFVar3 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar2->Attributes,MeshAttribute::Bone::Color);
  if (((pFVar3 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar3->Ptr).Ptr, pFVar1->Type == 0)) &&
     (pFVar1->Extent == 1)) {
    in_RDX->_padding_ = (longlong)pFVar1;
    return (TMeshAttributesRef<FBoneID,UE::Math::TVector4<float>_const_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TMeshAttributesRef<FBoneID,UE::Math::TVector4<float>_const_>)in_RDX;
}

// GetBoneNames @ 1443a3e00

TMeshAttributesRef<FBoneID,FName_const_> __thiscall
FSkeletalMeshAttributesShared::GetBoneNames(FSkeletalMeshAttributesShared *this)

{
  FMeshAttributeArraySetBase *pFVar1;
  FMeshElementContainer *pFVar2;
  FAttributesSetEntry *pFVar3;
  FMeshAttributeArraySetBase *in_RDX;
  
  pFVar2 = FMeshElementChannels::Get(this->BoneElementsShared,0);
  pFVar3 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar2->Attributes,MeshAttribute::Bone::Name);
  if (((pFVar3 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar3->Ptr).Ptr, pFVar1->Type == 6)) &&
     (pFVar1->Extent == 1)) {
    in_RDX->_padding_ = (longlong)pFVar1;
    return (TMeshAttributesRef<FBoneID,FName_const_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TMeshAttributesRef<FBoneID,FName_const_>)in_RDX;
}

// GetBoneParentIndices @ 1443a3ec0

TMeshAttributesRef<FBoneID,int_const_> __thiscall
FSkeletalMeshAttributesShared::GetBoneParentIndices(FSkeletalMeshAttributesShared *this)

{
  FMeshAttributeArraySetBase *pFVar1;
  FMeshElementContainer *pFVar2;
  FAttributesSetEntry *pFVar3;
  FMeshAttributeArraySetBase *in_RDX;
  
  pFVar2 = FMeshElementChannels::Get(this->BoneElementsShared,0);
  pFVar3 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar2->Attributes,MeshAttribute::Bone::ParentIndex);
  if (((pFVar3 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar3->Ptr).Ptr, pFVar1->Type == 4)) &&
     (pFVar1->Extent == 1)) {
    in_RDX->_padding_ = (longlong)pFVar1;
    return (TMeshAttributesRef<FBoneID,int_const_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TMeshAttributesRef<FBoneID,int_const_>)in_RDX;
}

// GetBonePoses @ 1443a3f80

TMeshAttributesRef<FBoneID,UE::Math::TTransform<double>_const_> __thiscall
FSkeletalMeshAttributesShared::GetBonePoses(FSkeletalMeshAttributesShared *this)

{
  FMeshAttributeArraySetBase *pFVar1;
  FMeshElementContainer *pFVar2;
  FAttributesSetEntry *pFVar3;
  FMeshAttributeArraySetBase *in_RDX;
  
  pFVar2 = FMeshElementChannels::Get(this->BoneElementsShared,0);
  pFVar3 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar2->Attributes,MeshAttribute::Bone::Pose);
  if (((pFVar3 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar3->Ptr).Ptr, pFVar1->Type == 7)) &&
     (pFVar1->Extent == 1)) {
    in_RDX->_padding_ = (longlong)pFVar1;
    return (TMeshAttributesRef<FBoneID,UE::Math::TTransform<double>_const_>)in_RDX;
  }
  in_RDX->_padding_ = 0;
  return (TMeshAttributesRef<FBoneID,UE::Math::TTransform<double>_const_>)in_RDX;
}

// GetMorphTargetNameFromAttribute @ 1443a4240

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FName __cdecl FSkeletalMeshAttributesShared::GetMorphTargetNameFromAttribute(FName param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FName FVar4;
  FString *this;
  FName *pFVar5;
  int iVar6;
  FName in_RDX;
  int iVar7;
  FName local_res10;
  FName local_res18 [2];
  FString local_28;
  
  bVar3 = IsMorphTargetAttribute(in_RDX);
  if (bVar3) {
    this = ::FName::ToString(&local_res10,&local_28);
    iVar7 = MorphTargetAttributeNamePrefix.Data.ArrayNum + -1;
    if (MorphTargetAttributeNamePrefix.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    ::FString::RemoveAt(this,0,iVar7,No);
    pFVar1 = (this->Data).AllocatorInstance.Data;
    (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar7 = (this->Data).ArrayNum;
    (this->Data).ArrayNum = 0;
    (this->Data).ArrayMax = 0;
    iVar6 = iVar7 + -1;
    if (iVar7 == 0) {
      iVar6 = 0;
    }
    pFVar5 = ::FName::FName(local_res18,iVar6,(wchar_t *)pFVar1,FNAME_Add);
    *(FName *)param_1 = *pFVar5;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    return param_1;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8382464667758363142>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Private\\SkeletalMeshAttributes.cpp"
                     ,0x206,"IsMorphTargetAttribute(InAttributeName)");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    FVar4 = (FName)(*pcVar2)();
    return FVar4;
  }
  *(undefined8 *)param_1 = 0;
  return param_1;
}

// GetMorphTargetNames @ 1443a4340

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FSkeletalMeshAttributesShared::GetMorphTargetNames
          (FSkeletalMeshAttributesShared *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FName *pFVar1;
  int iVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  FMeshElementContainer *pFVar10;
  FString *pFVar11;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar12;
  FName *pFVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  undefined1 local_res8 [8];
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_88;
  TArray<FName,TSizedDefaultAllocator<32>_> local_80;
  FString local_70;
  FString local_60 [2];
  
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  pFVar10 = FMeshElementChannels::Get(this->MeshDescriptionShared->VertexElements,0);
  TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              *)&pFVar10->Attributes,&local_80);
  iVar7 = local_80.ArrayNum;
  uVar14 = (ulonglong)local_80.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar1 = (FName *)(local_80.AllocatorInstance.Data + uVar14 * 8);
  FVar15.Data = local_80.AllocatorInstance.Data;
  do {
    if ((int)uVar14 != iVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FName *)FVar15.Data == pFVar1) {
      if ((FName *)local_80.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_80.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    FVar3 = *(FName *)FVar15.Data;
    local_res10 = FVar3;
    pFVar11 = ::FName::ToString(&local_res10,&local_70);
    iVar9 = MorphTargetAttributeNamePrefix.Data.ArrayNum + -1;
    FVar6 = MorphTargetAttributeNamePrefix.Data.AllocatorInstance;
    if (MorphTargetAttributeNamePrefix.Data.ArrayNum == 0) {
      iVar9 = 0;
      FVar6.Data = (FScriptContainerElement *)L"";
    }
    bVar8 = ::FString::StartsWith(pFVar11,(wchar_t *)FVar6.Data,iVar9,IgnoreCase);
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
    if (bVar8) {
      local_res18 = FVar3;
      bVar8 = IsMorphTargetAttribute(FVar3);
      if (bVar8) {
        pFVar11 = ::FName::ToString(&local_res18,local_60);
        iVar9 = MorphTargetAttributeNamePrefix.Data.ArrayNum + -1;
        if (MorphTargetAttributeNamePrefix.Data.ArrayNum == 0) {
          iVar9 = 0;
        }
        ::FString::RemoveAt(pFVar11,0,iVar9,No);
        pFVar4 = (pFVar11->Data).AllocatorInstance.Data;
        (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar2 = (pFVar11->Data).ArrayNum;
        (pFVar11->Data).ArrayNum = 0;
        (pFVar11->Data).ArrayMax = 0;
        iVar9 = iVar2 + -1;
        if (iVar2 == 0) {
          iVar9 = 0;
        }
        pFVar13 = ::FName::FName(&local_res20,iVar9,(wchar_t *)pFVar4,FNAME_Add);
        local_88 = *pFVar13;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
        }
      }
      else {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<8382464667758363142>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Private\\SkeletalMeshAttributes.cpp"
                           ,0x206,"IsMorphTargetAttribute(InAttributeName)");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pTVar12 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar12;
        }
        local_88.ComparisonIndex.Value = 0;
        local_88.Number = 0;
      }
      pFVar13 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar13 <= &local_88) && (&local_88 < pFVar13 + __return_storage_ptr__->ArrayMax)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        pTVar12 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
        return pTVar12;
      }
      iVar9 = __return_storage_ptr__->ArrayNum;
      if (iVar9 == __return_storage_ptr__->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar9 + 1;
      *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_88;
    }
    uVar14 = local_80._8_8_ & 0xffffffff;
    FVar15.Data = FVar15.Data + 8;
  } while( true );
}

// GetNumBones @ 1443a45e0

int __thiscall FSkeletalMeshAttributesShared::GetNumBones(FSkeletalMeshAttributesShared *this)

{
  FMeshElementContainer *pFVar1;
  
  if (this->BoneElementsShared != (FMeshElementChannels *)0x0) {
    pFVar1 = FMeshElementChannels::Get(this->BoneElementsShared,0);
    return (pFVar1->BitArray).NumBits - pFVar1->NumHoles;
  }
  return 0;
}

// GetNumSourceGeometryParts @ 1443a4610

int __thiscall
FSkeletalMeshAttributesShared::GetNumSourceGeometryParts(FSkeletalMeshAttributesShared *this)

{
  FMeshElementContainer *pFVar1;
  
  if (this->SourceGeometryPartElementsShared != (FMeshElementChannels *)0x0) {
    pFVar1 = FMeshElementChannels::Get(this->SourceGeometryPartElementsShared,0);
    return (pFVar1->BitArray).NumBits - pFVar1->NumHoles;
  }
  return 0;
}

// GetProfileNameFromAttribute @ 1443a6c30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FName __cdecl FSkeletalMeshAttributesShared::GetProfileNameFromAttribute(FName param_1)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  FString *pFVar4;
  FName *pFVar5;
  int iVar6;
  FName in_RDX;
  int iVar7;
  int iVar8;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  if (in_RDX == MeshAttribute::Vertex::SkinWeights) {
    *(FName *)param_1 = DefaultSkinWeightProfileName;
    return param_1;
  }
  pFVar4 = ::FName::ToString(&MeshAttribute::Vertex::SkinWeights,&local_28);
  ::FString::ConcatFC(&local_38,pFVar4,L"-");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar4 = ::FName::ToString(&local_res10,&local_28);
  iVar7 = 0;
  iVar8 = local_38.Data.ArrayNum + -1;
  FVar2.Data = local_38.Data.AllocatorInstance.Data;
  if (local_38.Data.ArrayNum == 0) {
    iVar8 = iVar7;
    FVar2.Data = (FScriptContainerElement *)L"";
  }
  bVar3 = ::FString::StartsWith(pFVar4,(wchar_t *)FVar2.Data,iVar8,IgnoreCase);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pFVar4 = ::FName::ToString(&local_res10,&local_28);
    iVar8 = local_38.Data.ArrayNum + -1;
    if (local_38.Data.ArrayNum == 0) {
      iVar8 = iVar7;
    }
    ::FString::RemoveAt(pFVar4,0,iVar8,No);
    pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar8 = (pFVar4->Data).ArrayNum;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
    iVar6 = iVar8 + -1;
    if (iVar8 == 0) {
      iVar6 = iVar7;
    }
    pFVar5 = ::FName::FName(local_res18,iVar6,(wchar_t *)pFVar1,FNAME_Add);
    *(FName *)param_1 = *pFVar5;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    *(undefined8 *)param_1 = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return param_1;
}

// GetSkinWeightProfileNames @ 1443a6dc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FSkeletalMeshAttributesShared::GetSkinWeightProfileNames
          (FSkeletalMeshAttributesShared *this,
          TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,bool param_1)

{
  int iVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FMeshElementContainer *pFVar10;
  FString *pFVar11;
  FName *pFVar12;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar13;
  ForAnyElementType FVar14;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  char local_res18;
  FName local_res20;
  FName local_b8;
  FName *local_b0;
  FName local_a8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  local_res18 = param_1;
  pFVar10 = FMeshElementChannels::Get(this->MeshDescriptionShared->VertexElements,0);
  TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              *)&pFVar10->Attributes,&local_a0);
  bVar7 = false;
  iVar9 = local_a0.ArrayNum;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_b0 = (FName *)(local_a0.AllocatorInstance.Data + (longlong)local_a0.ArrayNum * 8);
  FVar14.Data = local_a0.AllocatorInstance.Data;
  do {
    while( true ) {
      pFVar12 = local_b0;
      if (local_a0.ArrayNum != iVar9) {
        local_res8[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
        ;
      }
      if ((FName *)FVar14.Data == pFVar12) {
        AlgoImpl::
        IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,_FSkeletalMeshAttributesShared::GetSkinWeightProfileNames_::__l2::<lambda_1>_>_>
                  ((FName *)(__return_storage_ptr__->AllocatorInstance).Data,
                   __return_storage_ptr__->ArrayNum,local_res8[0],(<lambda_1> *)local_res10);
        if ((bVar7) && (local_res18 == '\0')) {
          pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
          if ((pFVar3 < (FScriptContainerElement *)0x15507ace1) &&
             ((&DefaultSkinWeightProfileName <
               (FName *)(pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8) &&
              (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar7)))) {
            pcVar4 = (code *)swi(3);
            pTVar13 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar13;
          }
          iVar9 = __return_storage_ptr__->ArrayNum;
          if (iVar9 == __return_storage_ptr__->ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
          __return_storage_ptr__->ArrayNum = iVar9 + 1;
          memmove(pFVar3 + 8,pFVar3,(longlong)iVar9 << 3);
          *(FName *)(__return_storage_ptr__->AllocatorInstance).Data = DefaultSkinWeightProfileName;
        }
        if ((FName *)local_a0.AllocatorInstance.Data != (FName *)0x0) {
          FMemory::Free(local_a0.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      FVar2 = *(FName *)FVar14.Data;
      if (FVar2 != MeshAttribute::Vertex::SkinWeights) break;
      bVar7 = true;
      FVar14.Data = FVar14.Data + 8;
    }
    bVar6 = IsSkinWeightAttribute(FVar2);
    if (bVar6) {
      local_res20 = FVar2;
      if (FVar2 == MeshAttribute::Vertex::SkinWeights) {
        local_b8 = DefaultSkinWeightProfileName;
      }
      else {
        pFVar11 = ::FName::ToString(&MeshAttribute::Vertex::SkinWeights,&local_80);
        ::FString::ConcatFC(&local_90,pFVar11,L"-");
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
        }
        pFVar11 = ::FName::ToString(&local_res20,&local_70);
        iVar8 = local_90.Data.ArrayNum + -1;
        FVar5.Data = local_90.Data.AllocatorInstance.Data;
        if (local_90.Data.ArrayNum == 0) {
          iVar8 = 0;
          FVar5.Data = (FScriptContainerElement *)L"";
        }
        bVar6 = ::FString::StartsWith(pFVar11,(wchar_t *)FVar5.Data,iVar8,IgnoreCase);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        if (bVar6) {
          pFVar11 = ::FName::ToString(&local_res20,local_60);
          iVar8 = local_90.Data.ArrayNum + -1;
          if (local_90.Data.ArrayNum == 0) {
            iVar8 = 0;
          }
          ::FString::RemoveAt(pFVar11,0,iVar8,No);
          pFVar3 = (pFVar11->Data).AllocatorInstance.Data;
          (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar1 = (pFVar11->Data).ArrayNum;
          (pFVar11->Data).ArrayNum = 0;
          (pFVar11->Data).ArrayMax = 0;
          iVar8 = iVar1 + -1;
          if (iVar1 == 0) {
            iVar8 = 0;
          }
          pFVar12 = ::FName::FName(&local_a8,iVar8,(wchar_t *)pFVar3,FNAME_Add);
          local_b8 = *pFVar12;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
          }
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
        }
        else {
          local_b8.ComparisonIndex.Value = 0;
          local_b8.Number = 0;
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
        }
      }
      pFVar12 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar12 <= &local_b8) && (&local_b8 < pFVar12 + __return_storage_ptr__->ArrayMax)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar13;
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == __return_storage_ptr__->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      *(FName *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_b8;
    }
    FVar14.Data = FVar14.Data + 8;
  } while( true );
}

// GetSourceGeometryPartNames @ 1443a8190

TMeshAttributesRef<FSourceGeometryPartID,FName_const_> __thiscall
FSkeletalMeshAttributesShared::GetSourceGeometryPartNames(FSkeletalMeshAttributesShared *this)

{
  code *pcVar1;
  bool bVar2;
  TMeshAttributesRef<FSourceGeometryPartID,FName_const_> TVar3;
  TAttributesSet<FSourceGeometryPartID> *this_00;
  FAttributesSetEntry *pFVar4;
  FMeshAttributeArraySetBase *pFVar5;
  FMeshAttributeArraySetBase *in_RDX;
  
  if (this->SourceGeometryPartElementsShared == (FMeshElementChannels *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8382464667758363266>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Private\\SkeletalMeshAttributes.cpp"
                       ,0x282,"HasSourceGeometryParts()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.ArrayPtr = (FMeshAttributeArraySetBase *)(*pcVar1)();
      return (TMeshAttributesRef<FSourceGeometryPartID,FName_const_>)TVar3.ArrayPtr;
    }
  }
  else {
    this_00 = SourceGeometryPartAttributes(this);
    pFVar4 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)this_00,MeshAttribute::SourceGeometryPart::Name);
    if (((pFVar4 != (FAttributesSetEntry *)0x0) && (pFVar5 = (pFVar4->Ptr).Ptr, pFVar5->Type == 6))
       && (pFVar5->Extent == 1)) goto LAB_1443a8205;
  }
  pFVar5 = (FMeshAttributeArraySetBase *)0x0;
LAB_1443a8205:
  in_RDX->_padding_ = (longlong)pFVar5;
  return (TMeshAttributesRef<FSourceGeometryPartID,FName_const_>)in_RDX;
}

// GetSourceGeometryPartVertexOffsetAndCounts @ 1443a82d0

TMeshAttributesRef<FSourceGeometryPartID,TArrayView<int_const_,int>_> * __thiscall
FSkeletalMeshAttributesShared::GetSourceGeometryPartVertexOffsetAndCounts
          (FSkeletalMeshAttributesShared *this,
          TMeshAttributesRef<FSourceGeometryPartID,TArrayView<int_const_,int>_>
          *__return_storage_ptr__)

{
  uint uVar1;
  FMeshAttributeArraySetBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  TMeshAttributesRef<FSourceGeometryPartID,TArrayView<int_const_,int>_> *pTVar5;
  TAttributesSet<FSourceGeometryPartID> *this_00;
  FAttributesSetEntry *pFVar6;
  
  if (this->SourceGeometryPartElementsShared == (FMeshElementChannels *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8382464667758363275>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Private\\SkeletalMeshAttributes.cpp"
                       ,0x28b,"HasSourceGeometryParts()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TMeshAttributesRef<FSourceGeometryPartID,TArrayView<int_const_,int>_> *)(*pcVar3)();
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

// GetVertexInstanceMorphNormalDelta @ 1443a9c30

TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_const_> __thiscall
FSkeletalMeshAttributesShared::GetVertexInstanceMorphNormalDelta
          (FSkeletalMeshAttributesShared *this,FName param_1)

{
  FMeshAttributeArraySetBase *pFVar1;
  FMeshElementContainer *pFVar2;
  FName FVar3;
  FAttributesSetEntry *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar2 = FMeshElementChannels::Get(this->MeshDescriptionShared->VertexInstanceElements,0);
  FVar3 = CreateMorphTargetAttributeName((FName)local_res8);
  pFVar4 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar2->Attributes,*(FName *)FVar3);
  if (((pFVar4 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar4->Ptr).Ptr, pFVar1->Type == 1)) &&
     (pFVar1->Extent == 1)) {
    *(FMeshAttributeArraySetBase **)param_1 = pFVar1;
    return (TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_const_>)param_1;
  }
  *(undefined8 *)param_1 = 0;
  return (TMeshAttributesRef<FVertexInstanceID,UE::Math::TVector<float>_const_>)param_1;
}

// GetVertexMorphPositionDelta @ 1443a9d50

TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_const_> __thiscall
FSkeletalMeshAttributesShared::GetVertexMorphPositionDelta
          (FSkeletalMeshAttributesShared *this,FName param_1)

{
  FMeshAttributeArraySetBase *pFVar1;
  FMeshElementContainer *pFVar2;
  FName FVar3;
  FAttributesSetEntry *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar2 = FMeshElementChannels::Get(this->MeshDescriptionShared->VertexElements,0);
  FVar3 = CreateMorphTargetAttributeName((FName)local_res8);
  pFVar4 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar2->Attributes,*(FName *)FVar3);
  if (((pFVar4 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar4->Ptr).Ptr, pFVar1->Type == 1)) &&
     (pFVar1->Extent == 1)) {
    *(FMeshAttributeArraySetBase **)param_1 = pFVar1;
    return (TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_const_>)param_1;
  }
  *(undefined8 *)param_1 = 0;
  return (TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_const_>)param_1;
}

// GetVertexSkinWeights @ 1443a9e70

FSkinWeightsVertexAttributesConstRef __thiscall
FSkeletalMeshAttributesShared::GetVertexSkinWeights
          (FSkeletalMeshAttributesShared *this,FName param_1)

{
  FMeshAttributeArraySetBase *pFVar1;
  FMeshElementContainer *pFVar2;
  FName FVar3;
  FAttributesSetEntry *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar2 = FMeshElementChannels::Get(this->MeshDescriptionShared->VertexElements,0);
  FVar3 = CreateSkinWeightAttributeName((FName)local_res8);
  pFVar4 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar2->Attributes,*(FName *)FVar3);
  if (((pFVar4 != (FAttributesSetEntry *)0x0) && (pFVar1 = (pFVar4->Ptr).Ptr, pFVar1->Type == 4)) &&
     (pFVar1->Extent == 0)) {
    *(FMeshAttributeArraySetBase **)param_1 = pFVar1;
    return (FSkinWeightsVertexAttributesConstRef)param_1;
  }
  *(undefined8 *)param_1 = 0;
  return (FSkinWeightsVertexAttributesConstRef)param_1;
}

// GetVertexSkinWeightsFromAttributeName @ 1443a9f80

FSkinWeightsVertexAttributesConstRef __thiscall
FSkeletalMeshAttributesShared::GetVertexSkinWeightsFromAttributeName
          (FSkeletalMeshAttributesShared *this,FName param_1)

{
  bool bVar1;
  FMeshElementContainer *pFVar2;
  FAttributesSetEntry *pFVar3;
  FMeshAttributeArraySetBase *pFVar4;
  FName in_R8;
  
  bVar1 = IsSkinWeightAttribute(in_R8);
  if (bVar1) {
    pFVar2 = FMeshElementChannels::Get(this->MeshDescriptionShared->VertexElements,0);
    pFVar3 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)&pFVar2->Attributes,in_R8);
    if (((pFVar3 != (FAttributesSetEntry *)0x0) && (pFVar4 = (pFVar3->Ptr).Ptr, pFVar4->Type == 4))
       && (pFVar4->Extent == 0)) goto LAB_1443a9fd5;
  }
  pFVar4 = (FMeshAttributeArraySetBase *)0x0;
LAB_1443a9fd5:
  *(FMeshAttributeArraySetBase **)param_1 = pFVar4;
  return (FSkinWeightsVertexAttributesConstRef)param_1;
}

// HasBoneColorAttribute @ 1443aa000

bool __thiscall
FSkeletalMeshAttributesShared::HasBoneColorAttribute(FSkeletalMeshAttributesShared *this)

{
  bool bVar1;
  FMeshElementContainer *pFVar2;
  
  pFVar2 = FMeshElementChannels::Get(this->BoneElementsShared,0);
  bVar1 = FAttributesSetBase::HasAttribute(&pFVar2->Attributes,MeshAttribute::Bone::Color);
  return bVar1;
}

// HasBoneNameAttribute @ 1443aa030

bool __thiscall
FSkeletalMeshAttributesShared::HasBoneNameAttribute(FSkeletalMeshAttributesShared *this)

{
  bool bVar1;
  FMeshElementContainer *pFVar2;
  
  pFVar2 = FMeshElementChannels::Get(this->BoneElementsShared,0);
  bVar1 = FAttributesSetBase::HasAttribute(&pFVar2->Attributes,MeshAttribute::Bone::Name);
  return bVar1;
}

// HasBoneParentIndexAttribute @ 1443aa060

bool __thiscall
FSkeletalMeshAttributesShared::HasBoneParentIndexAttribute(FSkeletalMeshAttributesShared *this)

{
  bool bVar1;
  FMeshElementContainer *pFVar2;
  
  pFVar2 = FMeshElementChannels::Get(this->BoneElementsShared,0);
  bVar1 = FAttributesSetBase::HasAttribute(&pFVar2->Attributes,MeshAttribute::Bone::ParentIndex);
  return bVar1;
}

// HasBonePoseAttribute @ 1443aa090

bool __thiscall
FSkeletalMeshAttributesShared::HasBonePoseAttribute(FSkeletalMeshAttributesShared *this)

{
  bool bVar1;
  FMeshElementContainer *pFVar2;
  
  pFVar2 = FMeshElementChannels::Get(this->BoneElementsShared,0);
  bVar1 = FAttributesSetBase::HasAttribute(&pFVar2->Attributes,MeshAttribute::Bone::Pose);
  return bVar1;
}

// HasMorphTargetNormalsAttribute @ 1443aa0c0

bool __thiscall
FSkeletalMeshAttributesShared::HasMorphTargetNormalsAttribute
          (FSkeletalMeshAttributesShared *this,FName param_1)

{
  bool bVar1;
  FMeshElementContainer *pFVar2;
  FName FVar3;
  undefined1 local_res8 [8];
  
  pFVar2 = FMeshElementChannels::Get(this->MeshDescriptionShared->VertexInstanceElements,0);
  FVar3 = CreateMorphTargetAttributeName((FName)local_res8);
  bVar1 = FAttributesSetBase::HasAttribute(&pFVar2->Attributes,*(FName *)FVar3);
  return bVar1;
}

// HasMorphTargetPositionsAttribute @ 1443aa110

bool __thiscall
FSkeletalMeshAttributesShared::HasMorphTargetPositionsAttribute
          (FSkeletalMeshAttributesShared *this,FName param_1)

{
  bool bVar1;
  FMeshElementContainer *pFVar2;
  FName FVar3;
  undefined1 local_res8 [8];
  
  pFVar2 = FMeshElementChannels::Get(this->MeshDescriptionShared->VertexElements,0);
  FVar3 = CreateMorphTargetAttributeName((FName)local_res8);
  bVar1 = FAttributesSetBase::HasAttribute(&pFVar2->Attributes,*(FName *)FVar3);
  return bVar1;
}

// IsBoneValid @ 1443aa190

bool __thiscall
FSkeletalMeshAttributesShared::IsBoneValid(FSkeletalMeshAttributesShared *this,FBoneID param_1)

{
  ForElementType<unsigned_int> FVar1;
  
  FVar1 = (ForElementType<unsigned_int>)FMeshElementChannels::Get(this->BoneElementsShared,0);
  if ((-1 < (int)param_1) && ((int)param_1 < *(int *)((longlong)FVar1 + 0x18))) {
    if (*(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar1 = *(ForElementType<unsigned_int> *)((longlong)FVar1 + 0x10);
    }
    if ((*(uint *)((longlong)FVar1 + (ulonglong)((uint)param_1 >> 5) * 4) >> ((uint)param_1 & 0x1f)
        & 1) != 0) {
      return true;
    }
  }
  return false;
}

// IsMorphTargetAttribute @ 1443aa200

bool __cdecl FSkeletalMeshAttributesShared::IsMorphTargetAttribute(FName param_1)

{
  bool bVar1;
  FString *this;
  int iVar2;
  wchar_t *pwVar3;
  int iVar4;
  FName local_res8 [4];
  FString local_18;
  
  local_res8[0] = param_1;
  this = ::FName::ToString(local_res8,&local_18);
  iVar2 = MorphTargetAttributeNamePrefix.Data.ArrayNum;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  pwVar3 = L"";
  if (iVar2 != 0) {
    pwVar3 = (wchar_t *)MorphTargetAttributeNamePrefix.Data.AllocatorInstance;
  }
  bVar1 = ::FString::StartsWith(this,pwVar3,iVar4,IgnoreCase);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// IsSkinWeightAttribute @ 1443aa3d0

bool __cdecl FSkeletalMeshAttributesShared::IsSkinWeightAttribute(FName param_1)

{
  bool bVar1;
  bool bVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  FString *this;
  FString *pFVar5;
  int iVar6;
  FName local_res8;
  undefined4 local_res10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  bVar2 = false;
  bVar1 = false;
  local_res10 = 0;
  local_res8 = param_1;
  if (param_1 != MeshAttribute::Vertex::SkinWeights) {
    this = ::FName::ToString(&local_res8,&local_18);
    pFVar5 = ::FName::ToString(&MeshAttribute::Vertex::SkinWeights,&local_28);
    ::FString::ConcatFC(&local_38,pFVar5,L"-");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    iVar6 = local_38.Data.ArrayNum + -1;
    FVar3.Data = local_38.Data.AllocatorInstance.Data;
    if (local_38.Data.ArrayNum == 0) {
      iVar6 = 0;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    bVar2 = true;
    bVar1 = true;
    bVar4 = ::FString::StartsWith(this,(wchar_t *)FVar3.Data,iVar6,IgnoreCase);
    if (!bVar4) {
      bVar4 = false;
      goto LAB_1443aa46f;
    }
  }
  bVar4 = true;
LAB_1443aa46f:
  if ((bVar1) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// IsSourceGeometryPartValid @ 1443aa4b0

bool __thiscall
FSkeletalMeshAttributesShared::IsSourceGeometryPartValid
          (FSkeletalMeshAttributesShared *this,FSourceGeometryPartID param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TMeshElementContainer<FSourceGeometryPartID> *pTVar4;
  
  if (this->SourceGeometryPartElementsShared == (FMeshElementChannels *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8382464667758363257>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Private\\SkeletalMeshAttributes.cpp"
                       ,0x279,"HasSourceGeometryParts()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    pTVar4 = SourceGeometryParts(this);
    if ((-1 < (int)param_1) && ((int)param_1 < *(int *)&pTVar4->field_0x18)) {
      if (*(TMeshElementContainer<FSourceGeometryPartID> **)&pTVar4->field_0x10 !=
          (TMeshElementContainer<FSourceGeometryPartID> *)0x0) {
        pTVar4 = *(TMeshElementContainer<FSourceGeometryPartID> **)&pTVar4->field_0x10;
      }
      if ((*(uint *)(&pTVar4->field_0x0 + (ulonglong)((uint)param_1 >> 5) * 4) >>
           ((uint)param_1 & 0x1f) & 1) != 0) {
        return true;
      }
    }
  }
  return false;
}

// IsValidSkinWeightProfileName @ 1443aa540

bool __cdecl FSkeletalMeshAttributesShared::IsValidSkinWeightProfileName(FName param_1)

{
  if ((param_1 != (FName)0x0) &&
     ((param_1.ComparisonIndex.Value.Value != DefaultSkinWeightProfileName.ComparisonIndex.Value ||
      (param_1.Number != DefaultSkinWeightProfileName.Number)))) {
    return true;
  }
  return false;
}

// SourceGeometryPartAttributes @ 1443ad340

TAttributesSet<FSourceGeometryPartID> * __thiscall
FSkeletalMeshAttributesShared::SourceGeometryPartAttributes(FSkeletalMeshAttributesShared *this)

{
  code *pcVar1;
  bool bVar2;
  TAttributesSet<FSourceGeometryPartID> *pTVar3;
  TMeshElementContainer<FSourceGeometryPartID> *pTVar4;
  
  if (this->SourceGeometryPartElementsShared != (FMeshElementChannels *)0x0) {
    pTVar4 = SourceGeometryParts(this);
    return (TAttributesSet<FSourceGeometryPartID> *)&pTVar4->field_0x20;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8382464667758363242>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Private\\SkeletalMeshAttributes.cpp"
                     ,0x26a,"HasSourceGeometryParts()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TAttributesSet<FSourceGeometryPartID> *)(*pcVar1)();
    return pTVar3;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FSkeletalMeshAttributesShared::SourceGeometryPartAttributes'::__l5::
             _dynamic_atexit_destructor_for__Empty__);
      _Init_thread_footer(&::_TSS0);
      return &::Empty;
    }
  }
  return &::Empty;
}

// SourceGeometryParts @ 1443ad4c0

TMeshElementContainer<FSourceGeometryPartID> * __thiscall
FSkeletalMeshAttributesShared::SourceGeometryParts(FSkeletalMeshAttributesShared *this)

{
  code *pcVar1;
  bool bVar2;
  TMeshElementContainer<FSourceGeometryPartID> *pTVar3;
  FMeshElementContainer *pFVar4;
  
  if (this->SourceGeometryPartElementsShared != (FMeshElementChannels *)0x0) {
    pFVar4 = FMeshElementChannels::Get(this->SourceGeometryPartElementsShared,0);
    return (TMeshElementContainer<FSourceGeometryPartID> *)pFVar4;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8382464667758363232>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Private\\SkeletalMeshAttributes.cpp"
                     ,0x260,"HasSourceGeometryParts()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TMeshElementContainer<FSourceGeometryPartID> *)(*pcVar1)();
    return pTVar3;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FSkeletalMeshAttributesShared::SourceGeometryParts'::__l5::
             _dynamic_atexit_destructor_for__Empty__);
      _Init_thread_footer(&::_TSS0);
      return &::Empty;
    }
  }
  return &::Empty;
}

