// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e82da10

UScriptStruct * __cdecl FCollectionTransformSelectionLevelDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode,
                           (UObject *)pUVar1,L"CollectionTransformSelectionLevelDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode.
         OuterSingleton;
}

// GetType @ 14e82dd90

FName __thiscall
FCollectionTransformSelectionLevelDataflowNode::GetType
          (FCollectionTransformSelectionLevelDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCollectionTransformSelectionLevelDataflowNode");
  return in_RDX;
}

// IsA @ 14e82de10

bool __thiscall
FCollectionTransformSelectionLevelDataflowNode::IsA
          (FCollectionTransformSelectionLevelDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCollectionTransformSelectionLevelDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e82de78;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e82de78:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e82de96;
      }
    }
  }
  bVar5 = true;
LAB_14e82de96:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e82ded0

FStructOnScope * __thiscall
FCollectionTransformSelectionLevelDataflowNode::NewStructOnScope
          (FCollectionTransformSelectionLevelDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode,
                           (UObject *)pUVar2,L"CollectionTransformSelectionLevelDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e82df80

void __thiscall
FCollectionTransformSelectionLevelDataflowNode::SerializeInternal
          (FCollectionTransformSelectionLevelDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode,
                           (UObject *)pUVar1,L"CollectionTransformSelectionLevelDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e82dffd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e82e010

FName __thiscall
FCollectionTransformSelectionLevelDataflowNode::GetDisplayName
          (FCollectionTransformSelectionLevelDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CollectionTransformSelectSameLevel");
  return in_RDX;
}

// GetCategory @ 14e82e100

FName __thiscall
FCollectionTransformSelectionLevelDataflowNode::GetCategory
          (FCollectionTransformSelectionLevelDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Selection|Transform");
  return in_RDX;
}

// GetTags @ 14e82e1c0

FString * __thiscall
FCollectionTransformSelectionLevelDataflowNode::GetTags
          (FCollectionTransformSelectionLevelDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e82e240

UScriptStruct * __thiscall
FCollectionTransformSelectionLevelDataflowNode::TypedScriptStruct
          (FCollectionTransformSelectionLevelDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode,
                           (UObject *)pUVar1,L"CollectionTransformSelectionLevelDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionTransformSelectionLevelDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e82e690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCollectionTransformSelectionLevelDataflowNode::Evaluate
          (FCollectionTransformSelectionLevelDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  FDataflowTransformSelection *pFVar1;
  FManagedArrayCollection *pFVar2;
  bool bVar3;
  undefined1 *puVar4;
  FManagedArrayCollection *pFVar5;
  FDataflowTransformSelection *pFVar6;
  uint uVar7;
  ForElementType<unsigned_int> _Dst;
  void *_Src;
  undefined1 auStack_478 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_458;
  FCollectionHierarchyFacade local_448;
  FCollectionTransformSelectionFacade local_398;
  FDataflowSelection local_128;
  FManagedArrayCollection local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_478;
  pFVar1 = &this->TransformSelection;
  pFVar2 = &this->Collection;
  puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((FDataflowTransformSelection *)puVar4 != pFVar1) &&
     (puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (FManagedArrayCollection *)puVar4 != pFVar2)) {
    return;
  }
  pFVar5 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar2);
  FManagedArrayCollection::FManagedArrayCollection(&local_f8,pFVar5);
  pFVar6 = FDataflowNode::GetValue<FDataflowTransformSelection>
                     ((FDataflowNode *)this,param_1,pFVar1);
  local_128.GroupName.ComparisonIndex.Value = *(uint *)&pFVar6->field_0x0;
  local_128.GroupName.Number = *(uint *)&pFVar6->field_0x4;
  local_128.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_128.SelectionArray.MaxBits = 0;
  local_128.SelectionArray.NumBits = 0;
  uVar7 = *(int *)&pFVar6->field_0x20 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar7) {
    local_128.SelectionArray.MaxBits = 0x80;
    if (0x80 < (int)uVar7) {
      local_128.SelectionArray.MaxBits = uVar7;
    }
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_128.SelectionArray,0);
  }
  local_128.SelectionArray.NumBits = *(int *)&pFVar6->field_0x20;
  if (local_128.SelectionArray.NumBits != 0) {
    _Src = *(void **)&pFVar6->field_0x18;
    if (*(void **)&pFVar6->field_0x18 == (void *)0x0) {
      _Src = &pFVar6->field_0x8;
    }
    _Dst = (ForElementType<unsigned_int>)&local_128.SelectionArray;
    if (local_128.SelectionArray.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      _Dst = local_128.SelectionArray.AllocatorInstance.SecondaryData;
    }
    memcpy((void *)_Dst,_Src,(ulonglong)(local_128.SelectionArray.NumBits + 0x1fU >> 5) << 2);
  }
  Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade(&local_448,&local_f8);
  bVar3 = Chaos::Facades::FCollectionHierarchyFacade::HasLevelAttribute(&local_448);
  if (!bVar3) {
    Chaos::Facades::FCollectionHierarchyFacade::GenerateLevelAttribute(&local_448);
  }
  GeometryCollection::Facades::FCollectionTransformSelectionFacade::
  FCollectionTransformSelectionFacade(&local_398,&local_f8);
  FDataflowSelection::AsArray(&local_128,&local_458);
  GeometryCollection::Facades::FCollectionTransformSelectionFacade::SelectLevel
            (&local_398,&local_458);
  FDataflowSelection::SetFromArray(&local_128,&local_458);
  FDataflowNode::SetValue<FDataflowTransformSelection,FDataflowTransformSelection>
            ((FDataflowNode *)this,param_1,(FDataflowTransformSelection *)&local_128,pFVar1);
  FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
            ((FDataflowNode *)this,param_1,&local_f8,pFVar2);
  if (local_458.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_458.AllocatorInstance.Data);
  }
  if (local_128.SelectionArray.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0)
  {
    FMemory::Free((void *)local_128.SelectionArray.AllocatorInstance.SecondaryData);
  }
  FManagedArrayCollection::~FManagedArrayCollection(&local_f8);
  return;
}

// FCollectionTransformSelectionLevelDataflowNode @ 14e9189b0

FCollectionTransformSelectionLevelDataflowNode * __thiscall
FCollectionTransformSelectionLevelDataflowNode::FCollectionTransformSelectionLevelDataflowNode
          (FCollectionTransformSelectionLevelDataflowNode *this,FNodeParameters *param_1,
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
  this->_padding_ = (longlong)&___7FCollectionTransformSelectionLevelDataflowNode__6B_;
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

