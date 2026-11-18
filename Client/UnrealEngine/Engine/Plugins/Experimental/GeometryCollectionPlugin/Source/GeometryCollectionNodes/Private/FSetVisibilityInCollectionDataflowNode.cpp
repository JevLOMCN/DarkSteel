// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e88ae40

UScriptStruct * __cdecl FSetVisibilityInCollectionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetVisibilityInCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetVisibilityInCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode,
                         (UObject *)pUVar1,L"SetVisibilityInCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSetVisibilityInCollectionDataflowNode.OuterSingleton;
}

// GetType @ 14e88b130

FName __thiscall
FSetVisibilityInCollectionDataflowNode::GetType(FSetVisibilityInCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FSetVisibilityInCollectionDataflowNode");
  return in_RDX;
}

// IsA @ 14e88b160

bool __thiscall
FSetVisibilityInCollectionDataflowNode::IsA
          (FSetVisibilityInCollectionDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FSetVisibilityInCollectionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e88b1c8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e88b1c8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e88b1e6;
      }
    }
  }
  bVar5 = true;
LAB_14e88b1e6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e88b230

FStructOnScope * __thiscall
FSetVisibilityInCollectionDataflowNode::NewStructOnScope
          (FSetVisibilityInCollectionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FSetVisibilityInCollectionDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FSetVisibilityInCollectionDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode,
                           (UObject *)pUVar2,L"SetVisibilityInCollectionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FSetVisibilityInCollectionDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e88b430

void __thiscall
FSetVisibilityInCollectionDataflowNode::SerializeInternal
          (FSetVisibilityInCollectionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetVisibilityInCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetVisibilityInCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode,
                         (UObject *)pUVar1,L"SetVisibilityInCollectionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FSetVisibilityInCollectionDataflowNode.OuterSingleton
             ,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FSetVisibilityInCollectionDataflowNode.OuterSingleton
             ,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e88b4ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e88b580

FName __thiscall
FSetVisibilityInCollectionDataflowNode::GetDisplayName(FSetVisibilityInCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SetVisibilityInCollection");
  return in_RDX;
}

// GetCategory @ 14e88b630

FName __thiscall
FSetVisibilityInCollectionDataflowNode::GetCategory(FSetVisibilityInCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Edit");
  return in_RDX;
}

// GetTags @ 14e88b6a0

FString * __thiscall
FSetVisibilityInCollectionDataflowNode::GetTags
          (FSetVisibilityInCollectionDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e88b770

UScriptStruct * __thiscall
FSetVisibilityInCollectionDataflowNode::TypedScriptStruct
          (FSetVisibilityInCollectionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetVisibilityInCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetVisibilityInCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetVisibilityInCollectionDataflowNode,
                         (UObject *)pUVar1,L"SetVisibilityInCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSetVisibilityInCollectionDataflowNode.OuterSingleton;
}

// Evaluate @ 14e88b950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSetVisibilityInCollectionDataflowNode::Evaluate
          (FSetVisibilityInCollectionDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  bool bVar2;
  int iVar3;
  undefined1 *puVar4;
  FDataflowSelection *this_00;
  FDataflowSelection *this_01;
  FDataflowInput *pFVar5;
  FManagedArrayCollection *pFVar6;
  undefined1 auStack_138 [32];
  FConnectionReference local_118;
  FManagedArrayCollection local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  pFVar1 = &this->Collection;
  puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar4 == pFVar1) {
    this_00 = (FDataflowSelection *)
              FDataflowNode::GetValue<FDataflowTransformSelection>
                        ((FDataflowNode *)this,param_1,&this->TransformSelection);
    this_01 = (FDataflowSelection *)
              FDataflowNode::GetValue<FDataflowFaceSelection>
                        ((FDataflowNode *)this,param_1,&this->FaceSelection);
    local_118.Index = -1;
    local_118.ContainerReference = (void *)0x0;
    local_118.Reference = &this->TransformSelection;
    pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_118);
    if (pFVar5->Connection == (FDataflowOutput *)0x0) {
      local_118.Index = -1;
      local_118.ContainerReference = (void *)0x0;
      local_118.Reference = &this->FaceSelection;
      pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_118);
      if (pFVar5->Connection == (FDataflowOutput *)0x0) {
        ::FString::FString((FString *)&local_118,
                           "A TransformSelection or a FaceSelection must be connected as input.");
        if (1 < (byte)LogTemp._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        }
        if (local_118.Reference != (FDataflowTransformSelection *)0x0) {
          FMemory::Free(local_118.Reference);
        }
      }
      else {
        pFVar6 = FDataflowNode::GetValue<FManagedArrayCollection>
                           ((FDataflowNode *)this,param_1,pFVar1);
        FManagedArrayCollection::FManagedArrayCollection(&local_f8,pFVar6);
        iVar3 = FManagedArrayCollection::NumElements(&local_f8,FGeometryCollection::FacesGroup);
        if ((this_01->SelectionArray).NumBits == iVar3) {
          bVar2 = FDataflowSelection::AnySelected(this_01);
          if (bVar2) {
            local_118.Reference = (void *)0x0;
            local_118.Index = 0;
            local_118._12_4_ = 0;
            FDataflowSelection::AsArray
                      (this_01,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_118);
            FFractureEngineEdit::SetVisibilityInCollectionFromFaceSelection
                      (&local_f8,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_118,
                       this->Visibility == Dataflow_VisibilityOptions_Visible);
            FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
                      ((FDataflowNode *)this,param_1,&local_f8,pFVar1);
            if (local_118.Reference != (void *)0x0) {
              FMemory::Free(local_118.Reference);
            }
            FManagedArrayCollection::~FManagedArrayCollection(&local_f8);
            return;
          }
        }
        else {
          ::FString::FString((FString *)&local_118,
                             "TransformSelection\'s number of elements doesn\'t match number of transforms in Collection."
                            );
          if (1 < (byte)LogTemp._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
          }
          if (local_118.Reference != (FDataflowTransformSelection *)0x0) {
            FMemory::Free(local_118.Reference);
          }
        }
        FManagedArrayCollection::~FManagedArrayCollection(&local_f8);
      }
    }
    else {
      pFVar6 = FDataflowNode::GetValue<FManagedArrayCollection>
                         ((FDataflowNode *)this,param_1,pFVar1);
      FManagedArrayCollection::FManagedArrayCollection(&local_f8,pFVar6);
      iVar3 = FManagedArrayCollection::NumElements(&local_f8,FTransformCollection::TransformGroup);
      if ((this_00->SelectionArray).NumBits == iVar3) {
        bVar2 = FDataflowSelection::AnySelected(this_00);
        if (bVar2) {
          local_118.Reference = (void *)0x0;
          local_118.Index = 0;
          local_118._12_4_ = 0;
          FDataflowSelection::AsArray(this_00,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_118)
          ;
          FFractureEngineEdit::SetVisibilityInCollectionFromTransformSelection
                    (&local_f8,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_118,
                     this->Visibility == Dataflow_VisibilityOptions_Visible);
          FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
                    ((FDataflowNode *)this,param_1,&local_f8,pFVar1);
          if (local_118.Reference != (void *)0x0) {
            FMemory::Free(local_118.Reference);
          }
          FManagedArrayCollection::~FManagedArrayCollection(&local_f8);
          return;
        }
      }
      else {
        ::FString::FString((FString *)&local_118,
                           "TransformSelection\'s number of elements doesn\'t match number of transforms in Collection."
                          );
        if (1 < (byte)LogTemp._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        }
        if (local_118.Reference != (FDataflowTransformSelection *)0x0) {
          FMemory::Free(local_118.Reference);
        }
      }
      FManagedArrayCollection::~FManagedArrayCollection(&local_f8);
    }
    pFVar6 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar1);
    FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,pFVar6,pFVar1);
  }
  return;
}

// FSetVisibilityInCollectionDataflowNode @ 14e92c1b0

FSetVisibilityInCollectionDataflowNode * __thiscall
FSetVisibilityInCollectionDataflowNode::FSetVisibilityInCollectionDataflowNode
          (FSetVisibilityInCollectionDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FDataflowTransformSelection *pFVar1;
  FDataflowFaceSelection *pFVar2;
  uint uVar3;
  FDataflowOutput *this_01;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this->Visibility = Dataflow_VisibilityOptions_Invisible;
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FSetVisibilityInCollectionDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar1 = &this->TransformSelection;
  uVar3 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar1->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar3;
  pFVar2 = &this->FaceSelection;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  uVar3 = FDataflowFaceSelection::FacesGroupName.Number;
  *(uint *)&pFVar2->field_0x0 = FDataflowFaceSelection::FacesGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar2->field_0x4 = uVar3;
  *(undefined8 *)&(this->FaceSelection).field_0x18 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x20 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x24 = 0x80;
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
  local_58.Reference = pFVar2;
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

// FSetVisibilityInCollectionDataflowNode @ 14e92c320

FSetVisibilityInCollectionDataflowNode * __thiscall
FSetVisibilityInCollectionDataflowNode::FSetVisibilityInCollectionDataflowNode
          (FSetVisibilityInCollectionDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->Visibility = Dataflow_VisibilityOptions_Invisible;
  this->_padding_ = (longlong)&___7FSetVisibilityInCollectionDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  uVar1 = FDataflowFaceSelection::FacesGroupName.Number;
  *(uint *)&(this->FaceSelection).field_0x0 =
       FDataflowFaceSelection::FacesGroupName.ComparisonIndex.Value;
  *(uint *)&(this->FaceSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->FaceSelection).field_0x18 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x20 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x24 = 0x80;
  return this;
}

