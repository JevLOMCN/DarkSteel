// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e8d1270

UScriptStruct * __cdecl FSetDynamicStateDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetDynamicStateDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetDynamicStateDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetDynamicStateDataflowNode,(UObject *)pUVar1,
                         L"SetDynamicStateDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSetDynamicStateDataflowNode.OuterSingleton;
}

// GetType @ 14e8d12b0

FName __thiscall FSetDynamicStateDataflowNode::GetType(FSetDynamicStateDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FSetDynamicStateDataflowNode");
  return in_RDX;
}

// IsA @ 14e8d1320

bool __thiscall FSetDynamicStateDataflowNode::IsA(FSetDynamicStateDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FSetDynamicStateDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8d1388;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8d1388:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8d13a6;
      }
    }
  }
  bVar5 = true;
LAB_14e8d13a6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8d13e0

FStructOnScope * __thiscall
FSetDynamicStateDataflowNode::NewStructOnScope(FSetDynamicStateDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FSetDynamicStateDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FSetDynamicStateDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FSetDynamicStateDataflowNode,(UObject *)pUVar2,
                           L"SetDynamicStateDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FSetDynamicStateDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8d1460

void __thiscall
FSetDynamicStateDataflowNode::SerializeInternal
          (FSetDynamicStateDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetDynamicStateDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetDynamicStateDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetDynamicStateDataflowNode,(UObject *)pUVar1,
                         L"SetDynamicStateDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FSetDynamicStateDataflowNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FSetDynamicStateDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8d14dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8d14f0

FName __thiscall FSetDynamicStateDataflowNode::GetDisplayName(FSetDynamicStateDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SetDynamicState");
  return in_RDX;
}

// GetCategory @ 14e8d1520

FName __thiscall FSetDynamicStateDataflowNode::GetCategory(FSetDynamicStateDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Utilities");
  return in_RDX;
}

// GetTags @ 14e8d1550

FString * __thiscall
FSetDynamicStateDataflowNode::GetTags
          (FSetDynamicStateDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8d1580

UScriptStruct * __thiscall
FSetDynamicStateDataflowNode::TypedScriptStruct(FSetDynamicStateDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSetDynamicStateDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FSetDynamicStateDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSetDynamicStateDataflowNode,(UObject *)pUVar1,
                         L"SetDynamicStateDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FSetDynamicStateDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8d16e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FSetDynamicStateDataflowNode::Evaluate
          (FSetDynamicStateDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  EDataflowGeometryCollectionDynamicState EVar2;
  bool bVar3;
  undefined1 *puVar4;
  FManagedArrayCollection *pFVar5;
  FDataflowInput *pFVar6;
  FDataflowSelection *this_00;
  EObjectStateType EVar7;
  undefined1 auStack_188 [32];
  FConnectionReference local_168;
  FCollectionAnchoringFacade local_148;
  FManagedArrayCollection local_d8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  pFVar1 = &this->Collection;
  puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar4 != pFVar1) {
    return;
  }
  pFVar5 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar1);
  FManagedArrayCollection::FManagedArrayCollection(&local_d8,pFVar5);
  local_168.Index = -1;
  local_168.ContainerReference = (void *)0x0;
  local_168.Reference = pFVar1;
  pFVar6 = FDataflowNode::FindInput((FDataflowNode *)this,&local_168);
  if (pFVar6->Connection == (FDataflowOutput *)0x0) goto LAB_14e8d17f9;
  this_00 = (FDataflowSelection *)
            FDataflowNode::GetValue<FDataflowTransformSelection>
                      ((FDataflowNode *)this,param_1,&this->TransformSelection);
  FDataflowSelection::AsArrayValidated
            (this_00,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_168,&local_d8);
  Chaos::Facades::FCollectionAnchoringFacade::FCollectionAnchoringFacade(&local_148,&local_d8);
  bVar3 = Chaos::Facades::FCollectionAnchoringFacade::HasInitialDynamicStateAttribute(&local_148);
  if (bVar3) {
    EVar2 = this->DynamicState;
    if (EVar2 == None) {
      EVar7 = Uninitialized;
    }
    else if (EVar2 == Dynamic) {
LAB_14e8d17c9:
      EVar7 = Dynamic;
    }
    else if (EVar2 == Kinematic) {
      EVar7 = Kinematic;
    }
    else {
      if (EVar2 != Static) goto LAB_14e8d17c9;
      EVar7 = Static;
    }
    Chaos::Facades::FCollectionAnchoringFacade::SetInitialDynamicState
              (&local_148,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_168,EVar7);
  }
  if (local_168.Reference != (FManagedArrayCollection *)0x0) {
    FMemory::Free(local_168.Reference);
  }
LAB_14e8d17f9:
  FDataflowNode::SetValue<FManagedArrayCollection_&,FManagedArrayCollection>
            ((FDataflowNode *)this,param_1,&local_d8,pFVar1);
  FManagedArrayCollection::~FManagedArrayCollection(&local_d8);
  return;
}

// FSetDynamicStateDataflowNode @ 14e92b600

FSetDynamicStateDataflowNode * __thiscall
FSetDynamicStateDataflowNode::FSetDynamicStateDataflowNode
          (FSetDynamicStateDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  this->DynamicState = Kinematic;
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FSetDynamicStateDataflowNode__6B_;
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

