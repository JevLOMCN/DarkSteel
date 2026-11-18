// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// Evaluate @ 14e82db20

void __thiscall
FMakeRootProxyMeshArrayDataflowNode::Evaluate
          (FMakeRootProxyMeshArrayDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> *pTVar1;
  FProperty *pFVar2;
  uint uVar3;
  undefined1 *puVar4;
  FDataflowOutput *this_00;
  FTimestamp FVar5;
  FGuid *pFVar6;
  ulong64 uVar7;
  undefined1 local_res8 [8];
  FGuid local_58;
  FConnectionReference local_48;
  
  pTVar1 = &this->RootProxyMeshes;
  puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> *)puVar4 == pTVar1) {
    local_48.Index = -1;
    local_48.ContainerReference = (void *)0x0;
    local_48.Reference = pTVar1;
    this_00 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_48);
    if (this_00 == (FDataflowOutput *)0x0) {
      `FDataflowNode::
      SetValue<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_const_&,TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_>'
      ::__l7::<lambda_1>::operator()(local_res8);
    }
    else if (this_00->_padding_ != 0) {
      FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
      uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
      pFVar6 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_58);
      pFVar2 = (FProperty *)this_00->_padding_;
      uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
      UE::Dataflow::FContext::
      SetData<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_const_&>
                (param_1,(uint)uVar7,pFVar2,pTVar1,pFVar6,uVar3,(FTimestamp *)FVar5.Value);
      return;
    }
  }
  return;
}

// StaticStruct @ 14e8de070

UScriptStruct * __cdecl FMakeRootProxyMeshArrayDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeRootProxyMeshArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeRootProxyMeshArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeRootProxyMeshArrayDataflowNode,
                         (UObject *)pUVar1,L"MakeRootProxyMeshArrayDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeRootProxyMeshArrayDataflowNode.OuterSingleton;
}

// GetType @ 14e8de3e0

FName __thiscall
FMakeRootProxyMeshArrayDataflowNode::GetType(FMakeRootProxyMeshArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FMakeRootProxyMeshArrayDataflowNode");
  return in_RDX;
}

// IsA @ 14e8de480

bool __thiscall
FMakeRootProxyMeshArrayDataflowNode::IsA(FMakeRootProxyMeshArrayDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FMakeRootProxyMeshArrayDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8de4e8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8de4e8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8de506;
      }
    }
  }
  bVar5 = true;
LAB_14e8de506:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8de540

FStructOnScope * __thiscall
FMakeRootProxyMeshArrayDataflowNode::NewStructOnScope(FMakeRootProxyMeshArrayDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMakeRootProxyMeshArrayDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FMakeRootProxyMeshArrayDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMakeRootProxyMeshArrayDataflowNode,
                           (UObject *)pUVar2,L"MakeRootProxyMeshArrayDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FMakeRootProxyMeshArrayDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8de6b0

void __thiscall
FMakeRootProxyMeshArrayDataflowNode::SerializeInternal
          (FMakeRootProxyMeshArrayDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeRootProxyMeshArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeRootProxyMeshArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeRootProxyMeshArrayDataflowNode,
                         (UObject *)pUVar1,L"MakeRootProxyMeshArrayDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FMakeRootProxyMeshArrayDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FMakeRootProxyMeshArrayDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8de72d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8de740

FName __thiscall
FMakeRootProxyMeshArrayDataflowNode::GetDisplayName(FMakeRootProxyMeshArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"MakeRootProxyMeshArray");
  return in_RDX;
}

// GetCategory @ 14e8de770

FName __thiscall
FMakeRootProxyMeshArrayDataflowNode::GetCategory(FMakeRootProxyMeshArrayDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection");
  return in_RDX;
}

// GetTags @ 14e8de7a0

FString * __thiscall
FMakeRootProxyMeshArrayDataflowNode::GetTags
          (FMakeRootProxyMeshArrayDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8de7d0

UScriptStruct * __thiscall
FMakeRootProxyMeshArrayDataflowNode::TypedScriptStruct(FMakeRootProxyMeshArrayDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMakeRootProxyMeshArrayDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FMakeRootProxyMeshArrayDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMakeRootProxyMeshArrayDataflowNode,
                         (UObject *)pUVar1,L"MakeRootProxyMeshArrayDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FMakeRootProxyMeshArrayDataflowNode.OuterSingleton;
}

// FMakeRootProxyMeshArrayDataflowNode @ 14e9233e0

FMakeRootProxyMeshArrayDataflowNode * __thiscall
FMakeRootProxyMeshArrayDataflowNode::FMakeRootProxyMeshArrayDataflowNode
          (FMakeRootProxyMeshArrayDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8 [4];
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  local_48.Index = -1;
  local_res8[0].ComparisonIndex.Value = 0;
  local_res8[0].Number = 0;
  this->_padding_ = (longlong)&___7FMakeRootProxyMeshArrayDataflowNode__6B_;
  local_28.Reference = &this->RootProxyMeshes;
  local_48.Reference = (void *)0x0;
  (((TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> *)local_28.Reference)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->RootProxyMeshes).ArrayNum = 0;
  (this->RootProxyMeshes).ArrayMax = 0;
  local_48.ContainerReference = (void *)0x0;
  local_28.ContainerReference = (void *)0x0;
  local_28.Index = -1;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_48);
  }
  return this;
}

