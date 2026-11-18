// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e8dcd80

UScriptStruct * __cdecl FGetNumElementsInCollectionGroupDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetNumElementsInCollectionGroupDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetNumElementsInCollectionGroupDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetNumElementsInCollectionGroupDataflowNode,
                         (UObject *)pUVar1,L"GetNumElementsInCollectionGroupDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetNumElementsInCollectionGroupDataflowNode.
         OuterSingleton;
}

// GetType @ 14e8dcf70

FName __thiscall
FGetNumElementsInCollectionGroupDataflowNode::GetType
          (FGetNumElementsInCollectionGroupDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGetNumElementsInCollectionGroupDataflowNode");
  return in_RDX;
}

// IsA @ 14e8dd4c0

bool __thiscall
FGetNumElementsInCollectionGroupDataflowNode::IsA
          (FGetNumElementsInCollectionGroupDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGetNumElementsInCollectionGroupDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8dd528;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8dd528:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8dd546;
      }
    }
  }
  bVar5 = true;
LAB_14e8dd546:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8dd5b0

FStructOnScope * __thiscall
FGetNumElementsInCollectionGroupDataflowNode::NewStructOnScope
          (FGetNumElementsInCollectionGroupDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGetNumElementsInCollectionGroupDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGetNumElementsInCollectionGroupDataflowNode.OuterSingleton
           = GetStaticStruct(Z_Construct_UScriptStruct_FGetNumElementsInCollectionGroupDataflowNode,
                             (UObject *)pUVar2,L"GetNumElementsInCollectionGroupDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGetNumElementsInCollectionGroupDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8dd750

void __thiscall
FGetNumElementsInCollectionGroupDataflowNode::SerializeInternal
          (FGetNumElementsInCollectionGroupDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetNumElementsInCollectionGroupDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetNumElementsInCollectionGroupDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetNumElementsInCollectionGroupDataflowNode,
                         (UObject *)pUVar1,L"GetNumElementsInCollectionGroupDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGetNumElementsInCollectionGroupDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGetNumElementsInCollectionGroupDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8dd7cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8dd850

FName __thiscall
FGetNumElementsInCollectionGroupDataflowNode::GetDisplayName
          (FGetNumElementsInCollectionGroupDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetNumElementsInCollectionGroup");
  return in_RDX;
}

// GetCategory @ 14e8dd8b0

FName __thiscall
FGetNumElementsInCollectionGroupDataflowNode::GetCategory
          (FGetNumElementsInCollectionGroupDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Utilities");
  return in_RDX;
}

// GetTags @ 14e8dd920

FString * __thiscall
FGetNumElementsInCollectionGroupDataflowNode::GetTags
          (FGetNumElementsInCollectionGroupDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8dda20

UScriptStruct * __thiscall
FGetNumElementsInCollectionGroupDataflowNode::TypedScriptStruct
          (FGetNumElementsInCollectionGroupDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetNumElementsInCollectionGroupDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetNumElementsInCollectionGroupDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetNumElementsInCollectionGroupDataflowNode,
                         (UObject *)pUVar1,L"GetNumElementsInCollectionGroupDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetNumElementsInCollectionGroupDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e8ddd20

void __thiscall
FGetNumElementsInCollectionGroupDataflowNode::Evaluate
          (FGetNumElementsInCollectionGroupDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  EStandardGroupNameEnum EVar1;
  FName FVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  FManagedArrayCollection *this_00;
  FName *pFVar6;
  wchar_t *pwVar7;
  int local_res8 [4];
  FName local_res18;
  FName local_res20;
  
  puVar5 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((int *)puVar5 == &this->NumElements) {
    this_00 = FDataflowNode::GetValue<FManagedArrayCollection>
                        ((FDataflowNode *)this,param_1,&this->Collection);
    EVar1 = this->GroupName;
    local_res8[0] = 0;
    if (EVar1 == Dataflow_EStandardGroupNameEnum_Custom) {
      if ((this->CustomGroupName).Data.ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(this->CustomGroupName).Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_res20,pwVar7);
      local_res18 = *pFVar6;
    }
    else {
      local_res18 = FTransformCollection::TransformGroup;
      if ((((EVar1 != Dataflow_EStandardGroupNameEnum_Transform) &&
           (local_res18 = FGeometryCollection::GeometryGroup,
           EVar1 != Dataflow_EStandardGroupNameEnum_Geometry)) &&
          (local_res18 = FGeometryCollection::FacesGroup,
          EVar1 != Dataflow_EStandardGroupNameEnum_Faces)) &&
         (((local_res18 = FGeometryCollection::VerticesGroup,
           EVar1 != Dataflow_EStandardGroupNameEnum_Vertices &&
           (local_res18 = FGeometryCollection::MaterialGroup,
           EVar1 != Dataflow_EStandardGroupNameEnum_Material)) &&
          (local_res18.ComparisonIndex.Value = 0, local_res18.Number = 0,
          EVar1 == Dataflow_EStandardGroupNameEnum_Breaking)))) {
        local_res18 = FGeometryCollection::BreakingGroup;
      }
    }
    uVar3 = ::FName::GetStringLength(&local_res18);
    FVar2 = local_res18;
    if (uVar3 != 0) {
      uVar3 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
      if (*(int *)&(this_00->GroupInfo).field_0x8 != *(int *)&(this_00->GroupInfo).field_0x34) {
        puVar5 = *(undefined1 **)&(this_00->GroupInfo).field_0x40;
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &(this_00->GroupInfo).field_0x38;
        }
        iVar4 = *(int *)(puVar5 + (ulonglong)
                                  (*(int *)&(this_00->GroupInfo).field_0x48 - 1U &
                                  FVar2.Number + uVar3) * 4);
        if (iVar4 != -1) {
          do {
            if (*(FName *)(*(longlong *)&this_00->GroupInfo + (longlong)iVar4 * 0x14) == FVar2) {
              local_res8[0] = FManagedArrayCollection::NumElements(this_00,local_res18);
              break;
            }
            iVar4 = *(int *)(*(longlong *)&this_00->GroupInfo + 0xc + (longlong)iVar4 * 0x14);
          } while (iVar4 != -1);
        }
      }
    }
    FDataflowNode::SetValue<int_&,int>((FDataflowNode *)this,param_1,local_res8,&this->NumElements);
  }
  return;
}

// FGetNumElementsInCollectionGroupDataflowNode @ 14e921520

FGetNumElementsInCollectionGroupDataflowNode * __thiscall
FGetNumElementsInCollectionGroupDataflowNode::FGetNumElementsInCollectionGroupDataflowNode
          (FGetNumElementsInCollectionGroupDataflowNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  this->_padding_ = (longlong)&___7FGetNumElementsInCollectionGroupDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  this->GroupName = Dataflow_EStandardGroupNameEnum_Transform;
  ::FString::FString(&this->CustomGroupName,"");
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->NumElements = 0;
  local_48.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.Reference = &this->Collection;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Reference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = &this->NumElements;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,&local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_48);
  }
  return this;
}

