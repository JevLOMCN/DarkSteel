// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e87af90

UScriptStruct * __cdecl FMaterialInterfaceTextureOverrideDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMaterialInterfaceTextureOverrideDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMaterialInterfaceTextureOverrideDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMaterialInterfaceTextureOverrideDataflowNode,
                         (UObject *)pUVar1,L"MaterialInterfaceTextureOverrideDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMaterialInterfaceTextureOverrideDataflowNode.
         OuterSingleton;
}

// GetType @ 14e87b180

FName __thiscall
FMaterialInterfaceTextureOverrideDataflowNode::GetType
          (FMaterialInterfaceTextureOverrideDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMaterialInterfaceTextureOverrideDataflowNode");
  return in_RDX;
}

// IsA @ 14e87b1b0

bool __thiscall
FMaterialInterfaceTextureOverrideDataflowNode::IsA
          (FMaterialInterfaceTextureOverrideDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FMaterialInterfaceTextureOverrideDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e87b218;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e87b218:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e87b236;
      }
    }
  }
  bVar5 = true;
LAB_14e87b236:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e87b280

FStructOnScope * __thiscall
FMaterialInterfaceTextureOverrideDataflowNode::NewStructOnScope
          (FMaterialInterfaceTextureOverrideDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMaterialInterfaceTextureOverrideDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FMaterialInterfaceTextureOverrideDataflowNode.OuterSingleton
           = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialInterfaceTextureOverrideDataflowNode
                             ,(UObject *)pUVar2,L"MaterialInterfaceTextureOverrideDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMaterialInterfaceTextureOverrideDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e87b320

void __thiscall
FMaterialInterfaceTextureOverrideDataflowNode::SerializeInternal
          (FMaterialInterfaceTextureOverrideDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMaterialInterfaceTextureOverrideDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMaterialInterfaceTextureOverrideDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMaterialInterfaceTextureOverrideDataflowNode,
                         (UObject *)pUVar1,L"MaterialInterfaceTextureOverrideDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FMaterialInterfaceTextureOverrideDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FMaterialInterfaceTextureOverrideDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e87b39d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e87b3b0

FName __thiscall
FMaterialInterfaceTextureOverrideDataflowNode::GetDisplayName
          (FMaterialInterfaceTextureOverrideDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MaterialInterfaceTextureOverride");
  return in_RDX;
}

// GetCategory @ 14e87b3e0

FName __thiscall
FMaterialInterfaceTextureOverrideDataflowNode::GetCategory
          (FMaterialInterfaceTextureOverrideDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Materials");
  return in_RDX;
}

// GetTags @ 14e87b410

FString * __thiscall
FMaterialInterfaceTextureOverrideDataflowNode::GetTags
          (FMaterialInterfaceTextureOverrideDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Material Texture Override");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e87b450

UScriptStruct * __thiscall
FMaterialInterfaceTextureOverrideDataflowNode::TypedScriptStruct
          (FMaterialInterfaceTextureOverrideDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMaterialInterfaceTextureOverrideDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMaterialInterfaceTextureOverrideDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMaterialInterfaceTextureOverrideDataflowNode,
                         (UObject *)pUVar1,L"MaterialInterfaceTextureOverrideDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMaterialInterfaceTextureOverrideDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e87d540

void __thiscall
FMaterialInterfaceTextureOverrideDataflowNode::Evaluate
          (FMaterialInterfaceTextureOverrideDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  TObjectPtr<UMaterialInterface> *pTVar1;
  FDataflowInput *pFVar2;
  FConnectionReference local_38;
  FConnectionReference local_20;
  
  ::FString::FString((FString *)&local_38,
                     L"FMaterialInterfaceTextureOverrideDataflowNode is only available in Editor");
  UE::Dataflow::FContext::Error(param_1,(FString *)&local_38,(FDataflowNode *)this,param_2);
  if (local_38.Reference != (void *)0x0) {
    FMemory::Free(local_38.Reference);
  }
  pTVar1 = &this->Material;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = pTVar1;
  pFVar2 = FDataflowNode::FindInput((FDataflowNode *)this,&local_38);
  if (pFVar2->Connection != (FDataflowOutput *)0x0) {
    local_20.Index = -1;
    local_20.ContainerReference = (void *)0x0;
    local_20.Reference = pTVar1;
    FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_38,&local_20);
    return;
  }
  FDataflowNode::SetValue<TObjectPtr<UMaterialInterface>_const_&,TObjectPtr<UMaterialInterface>_>
            ((FDataflowNode *)this,param_1,local_38.Reference,pTVar1);
  return;
}

// FMaterialInterfaceTextureOverrideDataflowNode @ 14e9242e0

FMaterialInterfaceTextureOverrideDataflowNode * __thiscall
FMaterialInterfaceTextureOverrideDataflowNode::FMaterialInterfaceTextureOverrideDataflowNode
          (FMaterialInterfaceTextureOverrideDataflowNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  TObjectPtr<UMaterialInterface> *pTVar1;
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  local_58.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FMaterialInterfaceTextureOverrideDataflowNode__6B_;
  pTVar1 = &this->Material;
  (pTVar1->field0_0x0).DebugPtr = (UMaterialInterface *)0x0;
  (this->TargetTexture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->OverrideTexture).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = pTVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_58.Reference = pTVar1;
  local_38.Reference = pTVar1;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (TObjectPtr<UMaterialInterface> *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_58);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->TargetTexture;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_38,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->OverrideTexture;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_38,&local_res8);
  return this;
}

