// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8ca440

UScriptStruct * __cdecl FRemoveOnBreakDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRemoveOnBreakDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRemoveOnBreakDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRemoveOnBreakDataflowNode,(UObject *)pUVar1,
                         L"RemoveOnBreakDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FRemoveOnBreakDataflowNode.OuterSingleton;
}

// GetType @ 14e8ca4c0

FName __thiscall FRemoveOnBreakDataflowNode::GetType(FRemoveOnBreakDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FRemoveOnBreakDataflowNode");
  return in_RDX;
}

// IsA @ 14e8ca720

bool __thiscall FRemoveOnBreakDataflowNode::IsA(FRemoveOnBreakDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FRemoveOnBreakDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8ca788;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8ca788:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8ca7a6;
      }
    }
  }
  bVar5 = true;
LAB_14e8ca7a6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8ca7e0

FStructOnScope * __thiscall
FRemoveOnBreakDataflowNode::NewStructOnScope(FRemoveOnBreakDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FRemoveOnBreakDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FRemoveOnBreakDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRemoveOnBreakDataflowNode,(UObject *)pUVar2,
                           L"RemoveOnBreakDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FRemoveOnBreakDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8cb560

void __thiscall
FRemoveOnBreakDataflowNode::SerializeInternal(FRemoveOnBreakDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRemoveOnBreakDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRemoveOnBreakDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRemoveOnBreakDataflowNode,(UObject *)pUVar1,
                         L"RemoveOnBreakDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FRemoveOnBreakDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FRemoveOnBreakDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8cb5dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8cb5f0

FName __thiscall FRemoveOnBreakDataflowNode::GetDisplayName(FRemoveOnBreakDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"RemoveOnBreak");
  return in_RDX;
}

// GetCategory @ 14e8cb620

FName __thiscall FRemoveOnBreakDataflowNode::GetCategory(FRemoveOnBreakDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Utilities");
  return in_RDX;
}

// GetTags @ 14e8cb650

FString * __thiscall
FRemoveOnBreakDataflowNode::GetTags
          (FRemoveOnBreakDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8cb680

UScriptStruct * __thiscall
FRemoveOnBreakDataflowNode::TypedScriptStruct(FRemoveOnBreakDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRemoveOnBreakDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FRemoveOnBreakDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRemoveOnBreakDataflowNode,(UObject *)pUVar1,
                         L"RemoveOnBreakDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FRemoveOnBreakDataflowNode.OuterSingleton;
}

// Evaluate @ 14e8cb900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRemoveOnBreakDataflowNode::Evaluate
          (FRemoveOnBreakDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  undefined1 *puVar2;
  FDataflowInput *pFVar3;
  bool *pbVar4;
  TVector2<float> *pTVar5;
  TVector2<float> *pTVar6;
  bool *pbVar7;
  FManagedArrayCollection *pFVar8;
  FDataflowSelection *this_00;
  undefined1 auStack_1c8 [32];
  bool local_1a8 [8];
  FConnectionReference local_1a0;
  FRemoveOnBreakData local_188;
  FConnectionReference local_178;
  FConnectionReference local_160;
  FConnectionReference local_148;
  FCollectionRemoveOnBreakFacade local_130;
  FManagedArrayCollection local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  pFVar1 = &this->Collection;
  puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar2 == pFVar1) {
    local_178.Reference = &this->bEnabledRemoval;
    local_178.ContainerReference = (void *)0x0;
    local_1a8[0] = true;
    local_178.Index = -1;
    pFVar3 = FDataflowNode::FindInput((FDataflowNode *)this,&local_178);
    pbVar4 = FDataflowInput::GetValue<bool>(pFVar3,param_1,local_1a8);
    local_1a0.Reference = &this->PostBreakTimer;
    local_1a0.Index = -1;
    local_1a0.ContainerReference = (void *)0x0;
    pFVar3 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1a0);
    pTVar5 = FDataflowInput::GetValue<UE::Math::TVector2<float>_>
                       (pFVar3,param_1,local_1a0.Reference);
    local_160.Reference = &this->RemovalTimer;
    local_160.Index = -1;
    local_160.ContainerReference = (void *)0x0;
    pFVar3 = FDataflowNode::FindInput((FDataflowNode *)this,&local_160);
    pTVar6 = FDataflowInput::GetValue<UE::Math::TVector2<float>_>
                       (pFVar3,param_1,local_160.Reference);
    local_148.Reference = &this->bClusterCrumbling;
    local_148.Index = -1;
    local_148.ContainerReference = (void *)0x0;
    pFVar3 = FDataflowNode::FindInput((FDataflowNode *)this,&local_148);
    pbVar7 = FDataflowInput::GetValue<bool>(pFVar3,param_1,local_148.Reference);
    pFVar8 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar1);
    FManagedArrayCollection::FManagedArrayCollection(&local_f8,pFVar8);
    GeometryCollection::Facades::FCollectionRemoveOnBreakFacade::FCollectionRemoveOnBreakFacade
              (&local_130,&local_f8);
    GeometryCollection::Facades::FCollectionRemoveOnBreakFacade::DefineSchema(&local_130);
    GeometryCollection::Facades::FRemoveOnBreakData::FRemoveOnBreakData(&local_188);
    GeometryCollection::Facades::FRemoveOnBreakData::SetBreakTimer
              (&local_188,(pTVar5->field0_0x0)._s_0.X,(pTVar5->field0_0x0)._s_0.Y);
    GeometryCollection::Facades::FRemoveOnBreakData::SetRemovalTimer
              (&local_188,(pTVar6->field0_0x0)._s_0.X,(pTVar6->field0_0x0)._s_0.Y);
    GeometryCollection::Facades::FRemoveOnBreakData::SetEnabled(&local_188,*pbVar4);
    GeometryCollection::Facades::FRemoveOnBreakData::SetClusterCrumbling(&local_188,*pbVar7);
    local_178.Index = -1;
    local_178.ContainerReference = (void *)0x0;
    local_178.Reference = &this->TransformSelection;
    pFVar3 = FDataflowNode::FindInput((FDataflowNode *)this,&local_178);
    if (pFVar3->Connection == (FDataflowOutput *)0x0) {
      GeometryCollection::Facades::FCollectionRemoveOnBreakFacade::SetToAll(&local_130,&local_188);
    }
    else {
      this_00 = (FDataflowSelection *)
                FDataflowNode::GetValue<FDataflowTransformSelection>
                          ((FDataflowNode *)this,param_1,&this->TransformSelection);
      local_1a0.Reference = (TVector2<float> *)0x0;
      local_1a0.Index = 0;
      local_1a0._12_4_ = 0;
      FDataflowSelection::AsArrayValidated
                (this_00,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_1a0,&local_f8);
      GeometryCollection::Facades::FCollectionRemoveOnBreakFacade::SetFromIndexArray
                (&local_130,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_1a0,&local_188);
      if (local_1a0.Reference != (TVector2<float> *)0x0) {
        FMemory::Free(local_1a0.Reference);
      }
    }
    FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,&local_f8,pFVar1);
    FManagedArrayCollection::~FManagedArrayCollection(&local_f8);
  }
  return;
}

// FRemoveOnBreakDataflowNode @ 14e92a850

FRemoveOnBreakDataflowNode * __thiscall
FRemoveOnBreakDataflowNode::FRemoveOnBreakDataflowNode
          (FRemoveOnBreakDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FDataflowTransformSelection *pFVar1;
  uint uVar2;
  FDataflowOutput *this_01;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FRemoveOnBreakDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar1 = &this->TransformSelection;
  uVar2 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&pFVar1->field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar2;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  this->bEnabledRemoval = true;
  (this->PostBreakTimer).field0_0x0 = (TVector2<float>_u_0)0x0;
  (this->RemovalTimer).field0_0x0._s_0.X = 0.0;
  (this->RemovalTimer).field0_0x0._s_0.Y = 1.0;
  this->bClusterCrumbling = false;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_68.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = pFVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->bEnabledRemoval;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->PostBreakTimer;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->RemovalTimer;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->bClusterCrumbling;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  local_48.Reference = this_00;
  this_01 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_01,&local_68);
  }
  return this;
}

// FRemoveOnBreakDataflowNode @ 14e92aa30

FRemoveOnBreakDataflowNode * __thiscall
FRemoveOnBreakDataflowNode::FRemoveOnBreakDataflowNode(FRemoveOnBreakDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FRemoveOnBreakDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  uVar1 = FDataflowTransformSelection::TransformGroupName.Number;
  *(uint *)&(this->TransformSelection).field_0x0 =
       FDataflowTransformSelection::TransformGroupName.ComparisonIndex.Value;
  *(uint *)&(this->TransformSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->TransformSelection).field_0x18 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x20 = 0;
  *(undefined4 *)&(this->TransformSelection).field_0x24 = 0x80;
  (this->PostBreakTimer).field0_0x0 = (TVector2<float>_u_0)0x0;
  (this->RemovalTimer).field0_0x0._s_0.X = 0.0;
  this->bClusterCrumbling = false;
  this->bEnabledRemoval = true;
  (this->RemovalTimer).field0_0x0._s_0.Y = 1.0;
  return this;
}

