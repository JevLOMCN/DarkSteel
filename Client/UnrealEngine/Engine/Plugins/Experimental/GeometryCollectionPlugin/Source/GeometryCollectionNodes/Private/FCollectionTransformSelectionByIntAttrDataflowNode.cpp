// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e856da0

UScriptStruct * __cdecl FCollectionTransformSelectionByIntAttrDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode
                         ,(UObject *)pUVar1,L"CollectionTransformSelectionByIntAttrDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode.
         OuterSingleton;
}

// GetType @ 14e857220

FName __thiscall
FCollectionTransformSelectionByIntAttrDataflowNode::GetType
          (FCollectionTransformSelectionByIntAttrDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCollectionTransformSelectionByIntAttrDataflowNode");
  return in_RDX;
}

// IsA @ 14e857330

bool __thiscall
FCollectionTransformSelectionByIntAttrDataflowNode::IsA
          (FCollectionTransformSelectionByIntAttrDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCollectionTransformSelectionByIntAttrDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e857398;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e857398:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8573b6;
      }
    }
  }
  bVar5 = true;
LAB_14e8573b6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8575b0

FStructOnScope * __thiscall
FCollectionTransformSelectionByIntAttrDataflowNode::NewStructOnScope
          (FCollectionTransformSelectionByIntAttrDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode
                           ,(UObject *)pUVar2,L"CollectionTransformSelectionByIntAttrDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e857630

void __thiscall
FCollectionTransformSelectionByIntAttrDataflowNode::SerializeInternal
          (FCollectionTransformSelectionByIntAttrDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode
                         ,(UObject *)pUVar1,L"CollectionTransformSelectionByIntAttrDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8576ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8576c0

FName __thiscall
FCollectionTransformSelectionByIntAttrDataflowNode::GetDisplayName
          (FCollectionTransformSelectionByIntAttrDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CollectionTransformSelectByIntAttribute");
  return in_RDX;
}

// GetCategory @ 14e8576f0

FName __thiscall
FCollectionTransformSelectionByIntAttrDataflowNode::GetCategory
          (FCollectionTransformSelectionByIntAttrDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Selection|Transform");
  return in_RDX;
}

// GetTags @ 14e857750

FString * __thiscall
FCollectionTransformSelectionByIntAttrDataflowNode::GetTags
          (FCollectionTransformSelectionByIntAttrDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e857800

UScriptStruct * __thiscall
FCollectionTransformSelectionByIntAttrDataflowNode::TypedScriptStruct
          (FCollectionTransformSelectionByIntAttrDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode
                         ,(UObject *)pUVar1,L"CollectionTransformSelectionByIntAttrDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByIntAttrDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e859050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCollectionTransformSelectionByIntAttrDataflowNode::Evaluate
          (FCollectionTransformSelectionByIntAttrDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  ERangeSettingEnum EVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  FManagedArrayCollection *pFVar6;
  FDataflowInput *pFVar7;
  int *piVar8;
  FString *pFVar9;
  FString *pFVar10;
  undefined1 auStackY_368 [32];
  FConnectionReference local_328;
  FContext *local_310;
  FConnectionReference local_308;
  TArray<int,TSizedDefaultAllocator<32>_> local_2f0;
  FCollectionTransformSelectionFacade local_2d8;
  FDataflowSelection local_68;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_368;
  pFVar6 = &this->Collection;
  local_310 = param_1;
  puVar5 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowTransformSelection *)puVar5 == &this->TransformSelection) {
    pFVar6 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar6);
    local_328.Reference = &this->Min;
    local_328.Index = -1;
    local_328.ContainerReference = (void *)0x0;
    pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_328);
    piVar8 = FDataflowInput::GetValue<int>(pFVar7,param_1,local_328.Reference);
    iVar3 = *piVar8;
    local_328.Reference = &this->Max;
    local_328.Index = -1;
    local_328.ContainerReference = (void *)0x0;
    pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_328);
    piVar8 = FDataflowInput::GetValue<int>(pFVar7,param_1,local_328.Reference);
    EVar1 = this->RangeSetting;
    iVar4 = *piVar8;
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::
    FCollectionTransformSelectionFacade(&local_2d8,pFVar6);
    bVar2 = this->bInclusive;
    pFVar9 = ::FString::FString((FString *)&local_308,&this->AttrName);
    pFVar10 = ::FString::FString((FString *)&local_328,&this->GroupName);
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectByIntAttribute
              (&local_2d8,&local_2f0,pFVar10,pFVar9,iVar3,iVar4,bVar2,
               EVar1 == Dataflow_RangeSetting_InsideRange);
    local_68.GroupName = FDataflowTransformSelection::TransformGroupName;
    local_68.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_68.SelectionArray.NumBits = 0;
    local_68.SelectionArray.MaxBits = 0x80;
    FDataflowSelection::InitializeFromCollection(&local_68,pFVar6,false);
    FDataflowSelection::SetFromArray(&local_68,&local_2f0);
    FDataflowNode::SetValue<FDataflowTransformSelection,FDataflowTransformSelection>
              ((FDataflowNode *)this,local_310,(FDataflowTransformSelection *)&local_68,
               &this->TransformSelection);
    if (local_68.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
       ) {
      FMemory::Free((void *)local_68.SelectionArray.AllocatorInstance.SecondaryData);
    }
    if (local_2f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f0.AllocatorInstance.Data);
    }
  }
  else {
    puVar5 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((FManagedArrayCollection *)puVar5 == pFVar6) {
      local_328.ContainerReference = (void *)0x0;
      local_328.Index = -1;
      local_328.Reference = pFVar6;
      pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_328);
      if (pFVar7->Connection == (FDataflowOutput *)0x0) {
        FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,local_328.Reference,pFVar6);
      }
      else {
        local_308.Index = -1;
        local_308.ContainerReference = (void *)0x0;
        local_308.Reference = pFVar6;
        FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_328,&local_308);
      }
    }
  }
  return;
}

// FCollectionTransformSelectionByIntAttrDataflowNode @ 14e916dd0

FCollectionTransformSelectionByIntAttrDataflowNode * __thiscall
FCollectionTransformSelectionByIntAttrDataflowNode::
FCollectionTransformSelectionByIntAttrDataflowNode
          (FCollectionTransformSelectionByIntAttrDataflowNode *this,FNodeParameters *param_1,
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
  this->_padding_ = (longlong)&___7FCollectionTransformSelectionByIntAttrDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  ::FString::FString(&this->GroupName,"Transform");
  ::FString::FString(&this->AttrName,"");
  this->RangeSetting = Dataflow_RangeSetting_InsideRange;
  this->bInclusive = true;
  pFVar1 = &this->TransformSelection;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->Min = 0;
  this->Max = 1000;
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
  local_68.Reference = &this->Min;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->Max;
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

// FCollectionTransformSelectionByIntAttrDataflowNode @ 14e916fa0

FCollectionTransformSelectionByIntAttrDataflowNode * __thiscall
FCollectionTransformSelectionByIntAttrDataflowNode::
FCollectionTransformSelectionByIntAttrDataflowNode
          (FCollectionTransformSelectionByIntAttrDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FCollectionTransformSelectionByIntAttrDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  ::FString::FString(&this->GroupName,"Transform");
  ::FString::FString(&this->AttrName,"");
  this->Max = 1000;
  this->Min = 0;
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

