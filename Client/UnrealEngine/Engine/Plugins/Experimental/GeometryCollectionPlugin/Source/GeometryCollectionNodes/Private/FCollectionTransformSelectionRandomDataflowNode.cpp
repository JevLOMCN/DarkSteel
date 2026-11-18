// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8d40a0

UScriptStruct * __cdecl FCollectionTransformSelectionRandomDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode
                           ,(UObject *)pUVar1,L"CollectionTransformSelectionRandomDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode.
         OuterSingleton;
}

// GetType @ 14e8d4460

FName __thiscall
FCollectionTransformSelectionRandomDataflowNode::GetType
          (FCollectionTransformSelectionRandomDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCollectionTransformSelectionRandomDataflowNode");
  return in_RDX;
}

// IsA @ 14e8d4490

bool __thiscall
FCollectionTransformSelectionRandomDataflowNode::IsA
          (FCollectionTransformSelectionRandomDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCollectionTransformSelectionRandomDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8d44f8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8d44f8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8d4516;
      }
    }
  }
  bVar5 = true;
LAB_14e8d4516:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8d4550

FStructOnScope * __thiscall
FCollectionTransformSelectionRandomDataflowNode::NewStructOnScope
          (FCollectionTransformSelectionRandomDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode
                           ,(UObject *)pUVar2,L"CollectionTransformSelectionRandomDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8d45d0

void __thiscall
FCollectionTransformSelectionRandomDataflowNode::SerializeInternal
          (FCollectionTransformSelectionRandomDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode
                           ,(UObject *)pUVar1,L"CollectionTransformSelectionRandomDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8d464d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8d4660

FName __thiscall
FCollectionTransformSelectionRandomDataflowNode::GetDisplayName
          (FCollectionTransformSelectionRandomDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CollectionTransformSelectRandom");
  return in_RDX;
}

// GetCategory @ 14e8d4690

FName __thiscall
FCollectionTransformSelectionRandomDataflowNode::GetCategory
          (FCollectionTransformSelectionRandomDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Selection|Transform");
  return in_RDX;
}

// GetTags @ 14e8d4740

FString * __thiscall
FCollectionTransformSelectionRandomDataflowNode::GetTags
          (FCollectionTransformSelectionRandomDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8d4770

UScriptStruct * __thiscall
FCollectionTransformSelectionRandomDataflowNode::TypedScriptStruct
          (FCollectionTransformSelectionRandomDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode
                           ,(UObject *)pUVar1,L"CollectionTransformSelectionRandomDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionRandomDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e8d4ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCollectionTransformSelectionRandomDataflowNode::Evaluate
          (FCollectionTransformSelectionRandomDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  float fVar1;
  float fVar2;
  undefined1 *puVar3;
  FManagedArrayCollection *pFVar4;
  FDataflowInput *pFVar5;
  float *pfVar6;
  undefined1 auStackY_348 [32];
  FConnectionReference local_318;
  FConnectionReference local_300;
  FCollectionTransformSelectionFacade local_2e8;
  FDataflowSelection local_78;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_348;
  pFVar4 = &this->Collection;
  puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowTransformSelection *)puVar3 == &this->TransformSelection) {
    pFVar4 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar4);
    local_318.Reference = &this->RandomSeed;
    local_318.Index = -1;
    local_318.ContainerReference = (void *)0x0;
    pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_318);
    pfVar6 = FDataflowInput::GetValue<float>(pFVar5,param_1,local_318.Reference);
    fVar1 = *pfVar6;
    local_318.Reference = &this->RandomThreshold;
    local_318.Index = -1;
    local_318.ContainerReference = (void *)0x0;
    pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_318);
    pfVar6 = FDataflowInput::GetValue<float>(pFVar5,param_1,local_318.Reference);
    fVar2 = *pfVar6;
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::
    FCollectionTransformSelectionFacade(&local_2e8,pFVar4);
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectRandom
              (&local_2e8,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_300,this->bDeterministic
               ,fVar1,fVar2);
    local_78.GroupName = FDataflowTransformSelection::TransformGroupName;
    local_78.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_78.SelectionArray.NumBits = 0;
    local_78.SelectionArray.MaxBits = 0x80;
    FDataflowSelection::InitializeFromCollection(&local_78,pFVar4,false);
    FDataflowSelection::SetFromArray
              (&local_78,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_300);
    FDataflowNode::SetValue<FDataflowTransformSelection,FDataflowTransformSelection>
              ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_78,
               &this->TransformSelection);
    if (local_78.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
       ) {
      FMemory::Free((void *)local_78.SelectionArray.AllocatorInstance.SecondaryData);
    }
    if (local_300.Reference != (void *)0x0) {
      FMemory::Free(local_300.Reference);
    }
  }
  else {
    puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((FManagedArrayCollection *)puVar3 == pFVar4) {
      local_300.ContainerReference = (void *)0x0;
      local_300.Index = -1;
      local_300.Reference = pFVar4;
      pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_300);
      if (pFVar5->Connection == (FDataflowOutput *)0x0) {
        FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,local_300.Reference,pFVar4);
      }
      else {
        local_318.Index = -1;
        local_318.ContainerReference = (void *)0x0;
        local_318.Reference = pFVar4;
        FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_300,&local_318);
      }
    }
  }
  return;
}

// FCollectionTransformSelectionRandomDataflowNode @ 14e918da0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FCollectionTransformSelectionRandomDataflowNode * __thiscall
FCollectionTransformSelectionRandomDataflowNode::FCollectionTransformSelectionRandomDataflowNode
          (FCollectionTransformSelectionRandomDataflowNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  float *pfVar1;
  FDataflowTransformSelection *pFVar2;
  uint uVar3;
  FDataflowOutput *pFVar4;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this->bDeterministic = false;
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FCollectionTransformSelectionRandomDataflowNode__6B_;
  pfVar1 = &this->RandomSeed;
  *pfVar1 = 0.0;
  this->RandomThreshold = 0.5;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar2 = &this->TransformSelection;
  uVar3 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar2->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar2->field_0x4 = uVar3;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  uVar3 = rand();
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  *pfVar1 = (float)(uVar3 & 0x7fff) * ___real_40c35187 - __real_47c35000;
  local_68.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = pfVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->RandomThreshold;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  local_48.Reference = this_00;
  pFVar4 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar4,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = pFVar2;
  pFVar4 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar4,&local_68);
  }
  return this;
}

// FCollectionTransformSelectionRandomDataflowNode @ 14e918f70

FCollectionTransformSelectionRandomDataflowNode * __thiscall
FCollectionTransformSelectionRandomDataflowNode::FCollectionTransformSelectionRandomDataflowNode
          (FCollectionTransformSelectionRandomDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->bDeterministic = false;
  this->_padding_ = (longlong)&___7FCollectionTransformSelectionRandomDataflowNode__6B_;
  this->RandomSeed = 0.0;
  this->RandomThreshold = 0.5;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  return this;
}

