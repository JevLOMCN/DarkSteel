// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e8891b0

UScriptStruct * __cdecl FPruneInCollectionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPruneInCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FPruneInCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode,(UObject *)pUVar1,
                         L"PruneInCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FPruneInCollectionDataflowNode.OuterSingleton;
}

// GetType @ 14e889460

FName __thiscall FPruneInCollectionDataflowNode::GetType(FPruneInCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FPruneInCollectionDataflowNode");
  return in_RDX;
}

// IsA @ 14e889490

bool __thiscall
FPruneInCollectionDataflowNode::IsA(FPruneInCollectionDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FPruneInCollectionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8894f8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8894f8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e889516;
      }
    }
  }
  bVar5 = true;
LAB_14e889516:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e889570

FStructOnScope * __thiscall
FPruneInCollectionDataflowNode::NewStructOnScope(FPruneInCollectionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FPruneInCollectionDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FPruneInCollectionDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode,
                           (UObject *)pUVar2,L"PruneInCollectionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FPruneInCollectionDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8895f0

void __thiscall
FPruneInCollectionDataflowNode::SerializeInternal
          (FPruneInCollectionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPruneInCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FPruneInCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode,(UObject *)pUVar1,
                         L"PruneInCollectionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FPruneInCollectionDataflowNode.OuterSingleton,param_1
             ,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FPruneInCollectionDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e88966d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e889680

FName __thiscall
FPruneInCollectionDataflowNode::GetDisplayName(FPruneInCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"PruneInCollection");
  return in_RDX;
}

// GetCategory @ 14e8897f0

FName __thiscall FPruneInCollectionDataflowNode::GetCategory(FPruneInCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Edit");
  return in_RDX;
}

// GetTags @ 14e889820

FString * __thiscall
FPruneInCollectionDataflowNode::GetTags
          (FPruneInCollectionDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e889850

UScriptStruct * __thiscall
FPruneInCollectionDataflowNode::TypedScriptStruct(FPruneInCollectionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPruneInCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FPruneInCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPruneInCollectionDataflowNode,(UObject *)pUVar1,
                         L"PruneInCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FPruneInCollectionDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8899d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPruneInCollectionDataflowNode::Evaluate
          (FPruneInCollectionDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  bool bVar2;
  int iVar3;
  undefined1 *puVar4;
  FManagedArrayCollection *this_00;
  FDataflowSelection *this_01;
  FGeometryCollection *pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  
  pFVar1 = &this->Collection;
  puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar4 == pFVar1) {
    this_00 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar1)
    ;
    this_01 = (FDataflowSelection *)
              FDataflowNode::GetValue<FDataflowTransformSelection>
                        ((FDataflowNode *)this,param_1,&this->TransformSelection);
    iVar3 = FManagedArrayCollection::NumElements(this_00,FTransformCollection::TransformGroup);
    if ((this_01->SelectionArray).NumBits == iVar3) {
      bVar2 = FDataflowSelection::AnySelected(this_01);
      if ((bVar2) &&
         (pFVar5 = FManagedArrayCollection::NewCopy<FGeometryCollection>(this_00),
         pFVar5 != (FGeometryCollection *)0x0)) {
        local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_28.ArrayNum = 0;
        local_28.ArrayMax = 0;
        FDataflowSelection::AsArray(this_01,&local_28);
        FFractureEngineEdit::DeleteBranch(pFVar5,&local_28);
        FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,(FManagedArrayCollection *)pFVar5,pFVar1);
        if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.AllocatorInstance.Data);
        }
        (**(code **)pFVar5->_padding_)(pFVar5,1);
        return;
      }
    }
    else {
      ::FString::FString((FString *)&local_28,
                         "TransformSelection\'s number of elements doesn\'t match number of transforms in Collection."
                        );
      if (1 < (byte)LogTemp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
    }
    FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,this_00,pFVar1);
  }
  return;
}

// FPruneInCollectionDataflowNode @ 14e9285c0

FPruneInCollectionDataflowNode * __thiscall
FPruneInCollectionDataflowNode::FPruneInCollectionDataflowNode
          (FPruneInCollectionDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FDataflowTransformSelection *pFVar1;
  uint uVar2;
  FDataflowOutput *this_01;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FPruneInCollectionDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar1 = &this->TransformSelection;
  uVar2 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar1->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
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
  this_01 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_01,&local_58);
  }
  return this;
}

