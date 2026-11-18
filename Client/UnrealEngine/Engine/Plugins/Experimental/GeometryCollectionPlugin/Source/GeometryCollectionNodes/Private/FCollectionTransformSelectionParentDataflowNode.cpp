// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e8e1d10

UScriptStruct * __cdecl FCollectionTransformSelectionParentDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionParentDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionParentDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionParentDataflowNode
                           ,(UObject *)pUVar1,L"CollectionTransformSelectionParentDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionParentDataflowNode.
         OuterSingleton;
}

// GetType @ 14e8e1d60

FName __thiscall
FCollectionTransformSelectionParentDataflowNode::GetType
          (FCollectionTransformSelectionParentDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCollectionTransformSelectionParentDataflowNode");
  return in_RDX;
}

// IsA @ 14e8e1dd0

bool __thiscall
FCollectionTransformSelectionParentDataflowNode::IsA
          (FCollectionTransformSelectionParentDataflowNode *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_18);
  ::FName::FName(local_res18,"FCollectionTransformSelectionParentDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8e1e38;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8e1e38:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8e1e56;
      }
    }
  }
  bVar5 = true;
LAB_14e8e1e56:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8e1e90

FStructOnScope * __thiscall
FCollectionTransformSelectionParentDataflowNode::NewStructOnScope
          (FCollectionTransformSelectionParentDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionParentDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionParentDataflowNode.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionParentDataflowNode
                           ,(UObject *)pUVar2,L"CollectionTransformSelectionParentDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionParentDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8e1f50

void __thiscall
FCollectionTransformSelectionParentDataflowNode::SerializeInternal
          (FCollectionTransformSelectionParentDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionParentDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionParentDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionParentDataflowNode
                           ,(UObject *)pUVar1,L"CollectionTransformSelectionParentDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionParentDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionParentDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8e1fcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8e1fe0

FName __thiscall
FCollectionTransformSelectionParentDataflowNode::GetDisplayName
          (FCollectionTransformSelectionParentDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CollectionTransformSelectParent");
  return in_RDX;
}

// GetCategory @ 14e8e2010

FName __thiscall
FCollectionTransformSelectionParentDataflowNode::GetCategory
          (FCollectionTransformSelectionParentDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Selection|Transform");
  return in_RDX;
}

// GetTags @ 14e8e2040

FString * __thiscall
FCollectionTransformSelectionParentDataflowNode::GetTags
          (FCollectionTransformSelectionParentDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8e2070

UScriptStruct * __thiscall
FCollectionTransformSelectionParentDataflowNode::TypedScriptStruct
          (FCollectionTransformSelectionParentDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionParentDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionParentDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionParentDataflowNode
                           ,(UObject *)pUVar1,L"CollectionTransformSelectionParentDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionParentDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e8e2170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCollectionTransformSelectionParentDataflowNode::Evaluate
          (FCollectionTransformSelectionParentDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  FDataflowTransformSelection *pFVar1;
  undefined1 *puVar2;
  FManagedArrayCollection *pFVar3;
  FDataflowTransformSelection *pFVar4;
  FDataflowInput *pFVar5;
  uint uVar6;
  ForElementType<unsigned_int> _Dst;
  void *_Src;
  undefined1 auStack_318 [32];
  FConnectionReference local_2f8;
  FCollectionTransformSelectionFacade local_2d8;
  undefined1 local_68 [24];
  ForElementType<unsigned_int> local_50;
  int local_48;
  uint local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_318;
  pFVar1 = &this->TransformSelection;
  pFVar3 = &this->Collection;
  puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowTransformSelection *)puVar2 == pFVar1) {
    pFVar3 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar3);
    pFVar4 = FDataflowNode::GetValue<FDataflowTransformSelection>
                       ((FDataflowNode *)this,param_1,pFVar1);
    local_68._0_4_ = *(uint *)&pFVar4->field_0x0;
    local_68._4_4_ = *(uint *)&pFVar4->field_0x4;
    local_50 = (ForElementType<unsigned_int>)0x0;
    local_44 = 0;
    local_48 = 0;
    uVar6 = *(int *)&pFVar4->field_0x20 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar6) {
      local_44 = 0x80;
      if (0x80 < (int)uVar6) {
        local_44 = uVar6;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 8),0);
    }
    local_48 = *(int *)&pFVar4->field_0x20;
    if (local_48 != 0) {
      _Src = *(void **)&pFVar4->field_0x18;
      if (*(void **)&pFVar4->field_0x18 == (void *)0x0) {
        _Src = &pFVar4->field_0x8;
      }
      _Dst = (ForElementType<unsigned_int>)((longlong)local_68 + 8);
      if (local_50 != (ForElementType<unsigned_int>)0x0) {
        _Dst = local_50;
      }
      memcpy((void *)_Dst,_Src,(ulonglong)(local_48 + 0x1fU >> 5) << 2);
    }
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::
    FCollectionTransformSelectionFacade(&local_2d8,pFVar3);
    FDataflowSelection::AsArray
              ((FDataflowSelection *)local_68,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_2f8)
    ;
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectParent
              (&local_2d8,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_2f8);
    FDataflowSelection::SetFromArray
              ((FDataflowSelection *)local_68,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_2f8)
    ;
    FDataflowNode::SetValue<FDataflowTransformSelection,FDataflowTransformSelection>
              ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)local_68,pFVar1);
    if (local_2f8.Reference != (void *)0x0) {
      FMemory::Free(local_2f8.Reference);
    }
    if (local_50 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_50);
    }
  }
  else {
    puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((FManagedArrayCollection *)puVar2 == pFVar3) {
      local_2f8.ContainerReference = (void *)0x0;
      local_2f8.Index = -1;
      local_2f8.Reference = pFVar3;
      pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_2f8);
      if (pFVar5->Connection == (FDataflowOutput *)0x0) {
        FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,local_2f8.Reference,pFVar3);
      }
      else {
        local_68._8_4_ = -1;
        local_68._16_8_ = (void *)0x0;
        local_68._0_8_ = pFVar3;
        FDataflowNode::ForwardInput
                  ((FDataflowNode *)this,param_1,&local_2f8,(FConnectionReference *)local_68);
      }
    }
  }
  return;
}

// FCollectionTransformSelectionParentDataflowNode @ 14e918c40

FCollectionTransformSelectionParentDataflowNode * __thiscall
FCollectionTransformSelectionParentDataflowNode::FCollectionTransformSelectionParentDataflowNode
          (FCollectionTransformSelectionParentDataflowNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  FDataflowTransformSelection *pFVar1;
  FManagedArrayCollection *this_00;
  uint uVar2;
  FDataflowOutput *pFVar3;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  pFVar1 = &this->TransformSelection;
  this->_padding_ = (longlong)&___7FCollectionTransformSelectionParentDataflowNode__6B_;
  this_00 = &this->Collection;
  uVar2 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar1->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = pFVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_58.Reference = this_00;
  local_38.Reference = this_00;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_58);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_58.Reference = pFVar1;
  local_38.Reference = pFVar1;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (FDataflowTransformSelection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_58);
  }
  return this;
}

