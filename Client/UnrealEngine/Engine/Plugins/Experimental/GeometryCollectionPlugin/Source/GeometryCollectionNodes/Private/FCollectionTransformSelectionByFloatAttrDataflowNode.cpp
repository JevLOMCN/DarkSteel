// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e853340

UScriptStruct * __cdecl FCollectionTransformSelectionByFloatAttrDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode
                         ,(UObject *)pUVar1,L"CollectionTransformSelectionByFloatAttrDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode.
         OuterSingleton;
}

// GetType @ 14e8536b0

FName __thiscall
FCollectionTransformSelectionByFloatAttrDataflowNode::GetType
          (FCollectionTransformSelectionByFloatAttrDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCollectionTransformSelectionByFloatAttrDataflowNode");
  return in_RDX;
}

// IsA @ 14e8536e0

bool __thiscall
FCollectionTransformSelectionByFloatAttrDataflowNode::IsA
          (FCollectionTransformSelectionByFloatAttrDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCollectionTransformSelectionByFloatAttrDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e853748;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e853748:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e853766;
      }
    }
  }
  bVar5 = true;
LAB_14e853766:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8537b0

FStructOnScope * __thiscall
FCollectionTransformSelectionByFloatAttrDataflowNode::NewStructOnScope
          (FCollectionTransformSelectionByFloatAttrDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode
                           ,(UObject *)pUVar2,L"CollectionTransformSelectionByFloatAttrDataflowNode"
                          );
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e853880

void __thiscall
FCollectionTransformSelectionByFloatAttrDataflowNode::SerializeInternal
          (FCollectionTransformSelectionByFloatAttrDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode
                         ,(UObject *)pUVar1,L"CollectionTransformSelectionByFloatAttrDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8538fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e853910

FName __thiscall
FCollectionTransformSelectionByFloatAttrDataflowNode::GetDisplayName
          (FCollectionTransformSelectionByFloatAttrDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CollectionTransformSelectByFloatAttribute");
  return in_RDX;
}

// GetCategory @ 14e853a50

FName __thiscall
FCollectionTransformSelectionByFloatAttrDataflowNode::GetCategory
          (FCollectionTransformSelectionByFloatAttrDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Selection|Transform");
  return in_RDX;
}

// GetTags @ 14e853b00

FString * __thiscall
FCollectionTransformSelectionByFloatAttrDataflowNode::GetTags
          (FCollectionTransformSelectionByFloatAttrDataflowNode *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e853b70

UScriptStruct * __thiscall
FCollectionTransformSelectionByFloatAttrDataflowNode::TypedScriptStruct
          (FCollectionTransformSelectionByFloatAttrDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode
                         ,(UObject *)pUVar1,L"CollectionTransformSelectionByFloatAttrDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionByFloatAttrDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e8541f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCollectionTransformSelectionByFloatAttrDataflowNode::Evaluate
          (FCollectionTransformSelectionByFloatAttrDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  float fVar1;
  float fVar2;
  ERangeSettingEnum EVar3;
  bool bVar4;
  undefined1 *puVar5;
  FManagedArrayCollection *pFVar6;
  FDataflowInput *pFVar7;
  float *pfVar8;
  FString *pFVar9;
  FString *pFVar10;
  undefined1 auStackY_378 [32];
  FConnectionReference local_338;
  FConnectionReference local_320;
  TArray<int,TSizedDefaultAllocator<32>_> local_308;
  FCollectionTransformSelectionFacade local_2f8;
  FDataflowSelection local_88;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_378;
  pFVar6 = &this->Collection;
  puVar5 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowTransformSelection *)puVar5 == &this->TransformSelection) {
    pFVar6 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar6);
    local_338.Reference = &this->Min;
    local_338.Index = -1;
    local_338.ContainerReference = (void *)0x0;
    pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_338);
    pfVar8 = FDataflowInput::GetValue<float>(pFVar7,param_1,local_338.Reference);
    fVar1 = *pfVar8;
    local_338.Reference = &this->Max;
    local_338.Index = -1;
    local_338.ContainerReference = (void *)0x0;
    pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_338);
    pfVar8 = FDataflowInput::GetValue<float>(pFVar7,param_1,local_338.Reference);
    EVar3 = this->RangeSetting;
    fVar2 = *pfVar8;
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::
    FCollectionTransformSelectionFacade(&local_2f8,pFVar6);
    bVar4 = this->bInclusive;
    pFVar9 = ::FString::FString((FString *)&local_320,&this->AttrName);
    pFVar10 = ::FString::FString((FString *)&local_338,&this->GroupName);
    GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectByFloatAttribute
              (&local_2f8,&local_308,pFVar10,pFVar9,fVar1,fVar2,bVar4,
               EVar3 == Dataflow_RangeSetting_InsideRange);
    local_88.GroupName = FDataflowTransformSelection::TransformGroupName;
    local_88.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_88.SelectionArray.NumBits = 0;
    local_88.SelectionArray.MaxBits = 0x80;
    FDataflowSelection::InitializeFromCollection(&local_88,pFVar6,false);
    FDataflowSelection::SetFromArray(&local_88,&local_308);
    FDataflowNode::SetValue<FDataflowTransformSelection,FDataflowTransformSelection>
              ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_88,
               &this->TransformSelection);
    if (local_88.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
       ) {
      FMemory::Free((void *)local_88.SelectionArray.AllocatorInstance.SecondaryData);
    }
    if (local_308.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_308.AllocatorInstance.Data);
    }
  }
  else {
    puVar5 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((FManagedArrayCollection *)puVar5 == pFVar6) {
      local_338.ContainerReference = (void *)0x0;
      local_338.Index = -1;
      local_338.Reference = pFVar6;
      pFVar7 = FDataflowNode::FindInput((FDataflowNode *)this,&local_338);
      if (pFVar7->Connection == (FDataflowOutput *)0x0) {
        FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,local_338.Reference,pFVar6);
      }
      else {
        local_320.Index = -1;
        local_320.ContainerReference = (void *)0x0;
        local_320.Reference = pFVar6;
        FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_338,&local_320);
      }
    }
  }
  return;
}

// FCollectionTransformSelectionByFloatAttrDataflowNode @ 14e916b60

FCollectionTransformSelectionByFloatAttrDataflowNode * __thiscall
FCollectionTransformSelectionByFloatAttrDataflowNode::
FCollectionTransformSelectionByFloatAttrDataflowNode
          (FCollectionTransformSelectionByFloatAttrDataflowNode *this,FNodeParameters *param_1,
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
  this->_padding_ = (longlong)&___7FCollectionTransformSelectionByFloatAttrDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  ::FString::FString(&this->GroupName,"Transform");
  ::FString::FString(&this->AttrName,"");
  this->RangeSetting = Dataflow_RangeSetting_InsideRange;
  this->bInclusive = true;
  pFVar1 = &this->TransformSelection;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->Min = 0.0;
  this->Max = 1000.0;
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

// FCollectionTransformSelectionByFloatAttrDataflowNode @ 14e916d30

FCollectionTransformSelectionByFloatAttrDataflowNode * __thiscall
FCollectionTransformSelectionByFloatAttrDataflowNode::
FCollectionTransformSelectionByFloatAttrDataflowNode
          (FCollectionTransformSelectionByFloatAttrDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FCollectionTransformSelectionByFloatAttrDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  ::FString::FString(&this->GroupName,"Transform");
  ::FString::FString(&this->AttrName,"");
  this->Max = 1000.0;
  this->Min = 0.0;
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

