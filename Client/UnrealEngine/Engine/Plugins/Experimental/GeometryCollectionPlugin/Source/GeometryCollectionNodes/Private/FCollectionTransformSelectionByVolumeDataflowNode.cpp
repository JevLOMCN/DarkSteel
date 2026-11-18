// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e848100

UScriptStruct * __cdecl FCollectionTransformSelectionByVolumeDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode
                         ,(UObject *)pUVar1,L"CollectionTransformSelectionByVolumeDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode.
         OuterSingleton;
}

// GetType @ 14e8486c0

FName __thiscall
FCollectionTransformSelectionByVolumeDataflowNode::GetType
          (FCollectionTransformSelectionByVolumeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCollectionTransformSelectionByVolumeDataflowNode");
  return in_RDX;
}

// IsA @ 14e8489c0

bool __thiscall
FCollectionTransformSelectionByVolumeDataflowNode::IsA
          (FCollectionTransformSelectionByVolumeDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCollectionTransformSelectionByVolumeDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e848a28;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e848a28:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e848a46;
      }
    }
  }
  bVar5 = true;
LAB_14e848a46:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e848c20

FStructOnScope * __thiscall
FCollectionTransformSelectionByVolumeDataflowNode::NewStructOnScope
          (FCollectionTransformSelectionByVolumeDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode
                           ,(UObject *)pUVar2,L"CollectionTransformSelectionByVolumeDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e848ce0

void __thiscall
FCollectionTransformSelectionByVolumeDataflowNode::SerializeInternal
          (FCollectionTransformSelectionByVolumeDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode
                         ,(UObject *)pUVar1,L"CollectionTransformSelectionByVolumeDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e848d5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e848d70

FName __thiscall
FCollectionTransformSelectionByVolumeDataflowNode::GetDisplayName
          (FCollectionTransformSelectionByVolumeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CollectionTransformSelectByVolume");
  return in_RDX;
}

// GetCategory @ 14e848da0

FName __thiscall
FCollectionTransformSelectionByVolumeDataflowNode::GetCategory
          (FCollectionTransformSelectionByVolumeDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Selection|Transform");
  return in_RDX;
}

// GetTags @ 14e848e10

FString * __thiscall
FCollectionTransformSelectionByVolumeDataflowNode::GetTags
          (FCollectionTransformSelectionByVolumeDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e848f70

UScriptStruct * __thiscall
FCollectionTransformSelectionByVolumeDataflowNode::TypedScriptStruct
          (FCollectionTransformSelectionByVolumeDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode
                         ,(UObject *)pUVar1,L"CollectionTransformSelectionByVolumeDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByVolumeDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e849250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCollectionTransformSelectionByVolumeDataflowNode::Evaluate
          (FCollectionTransformSelectionByVolumeDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  float fVar1;
  float fVar2;
  ERangeSettingEnum EVar3;
  undefined1 *puVar4;
  FManagedArrayCollection *pFVar5;
  FDataflowInput *pFVar6;
  float *pfVar7;
  undefined1 auStackY_358 [32];
  FConnectionReference local_328;
  FConnectionReference local_310;
  FCollectionTransformSelectionFacade local_2f8;
  FDataflowSelection local_88;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_358;
  pFVar5 = &this->Collection;
  puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowTransformSelection *)puVar4 == &this->TransformSelection) {
    pFVar5 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar5);
    local_328.Reference = &this->VolumeMin;
    local_328.Index = -1;
    local_328.ContainerReference = (void *)0x0;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_328);
    pfVar7 = FDataflowInput::GetValue<float>(pFVar6,param_1,local_328.Reference);
    fVar1 = *pfVar7;
    local_328.Reference = &this->VolumeMax;
    local_328.Index = -1;
    local_328.ContainerReference = (void *)0x0;
    pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_328);
    pfVar7 = FDataflowInput::GetValue<float>(pFVar6,param_1,local_328.Reference);
    EVar3 = this->RangeSetting;
    fVar2 = *pfVar7;
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::
    FCollectionTransformSelectionFacade(&local_2f8,pFVar5);
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectByVolume
              (&local_2f8,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_310,fVar1,fVar2,
               this->bInclusive,EVar3 == Dataflow_RangeSetting_InsideRange);
    local_88.GroupName = FDataflowTransformSelection::TransformGroupName;
    local_88.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_88.SelectionArray.NumBits = 0;
    local_88.SelectionArray.MaxBits = 0x80;
    FDataflowSelection::InitializeFromCollection(&local_88,pFVar5,false);
    FDataflowSelection::SetFromArray
              (&local_88,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_310);
    FDataflowNode::SetValue<FDataflowTransformSelection,FDataflowTransformSelection>
              ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_88,
               &this->TransformSelection);
    if (local_88.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
       ) {
      FMemory::Free((void *)local_88.SelectionArray.AllocatorInstance.SecondaryData);
    }
    if (local_310.Reference != (void *)0x0) {
      FMemory::Free(local_310.Reference);
    }
  }
  else {
    puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((FManagedArrayCollection *)puVar4 == pFVar5) {
      local_310.ContainerReference = (void *)0x0;
      local_310.Index = -1;
      local_310.Reference = pFVar5;
      pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_310);
      if (pFVar6->Connection == (FDataflowOutput *)0x0) {
        FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,local_310.Reference,pFVar5);
      }
      else {
        local_328.Index = -1;
        local_328.ContainerReference = (void *)0x0;
        local_328.Reference = pFVar5;
        FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_310,&local_328);
      }
    }
  }
  return;
}

// FCollectionTransformSelectionByVolumeDataflowNode @ 14e917400

FCollectionTransformSelectionByVolumeDataflowNode * __thiscall
FCollectionTransformSelectionByVolumeDataflowNode::FCollectionTransformSelectionByVolumeDataflowNode
          (FCollectionTransformSelectionByVolumeDataflowNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FDataflowTransformSelection *pFVar1;
  uint uVar2;
  FDataflowOutput *pFVar3;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FCollectionTransformSelectionByVolumeDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  this->RangeSetting = Dataflow_RangeSetting_InsideRange;
  this->bInclusive = true;
  pFVar1 = &this->TransformSelection;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->VolumeMin = 0.0;
  this->VolumeMax = 1000.0;
  uVar2 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar1->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->VolumeMin;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->VolumeMax;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  local_48.Reference = this_00;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = pFVar1;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_68);
  }
  return this;
}

// FCollectionTransformSelectionByVolumeDataflowNode @ 14e9175a0

FCollectionTransformSelectionByVolumeDataflowNode * __thiscall
FCollectionTransformSelectionByVolumeDataflowNode::FCollectionTransformSelectionByVolumeDataflowNode
          (FCollectionTransformSelectionByVolumeDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FCollectionTransformSelectionByVolumeDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  this->VolumeMax = 1000.0;
  this->VolumeMin = 0.0;
  this->RangeSetting = Dataflow_RangeSetting_InsideRange;
  this->bInclusive = true;
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  return this;
}

