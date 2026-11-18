// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e841220

UScriptStruct * __cdecl FGetNumArrayElementsDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetNumArrayElementsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetNumArrayElementsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode,
                         (UObject *)pUVar1,L"GetNumArrayElementsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetNumArrayElementsDataflowNode.OuterSingleton;
}

// GetType @ 14e841260

FName __thiscall FGetNumArrayElementsDataflowNode::GetType(FGetNumArrayElementsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGetNumArrayElementsDataflowNode");
  return in_RDX;
}

// IsA @ 14e841390

bool __thiscall
FGetNumArrayElementsDataflowNode::IsA(FGetNumArrayElementsDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGetNumArrayElementsDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8413f8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8413f8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e841416;
      }
    }
  }
  bVar5 = true;
LAB_14e841416:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e841450

FStructOnScope * __thiscall
FGetNumArrayElementsDataflowNode::NewStructOnScope(FGetNumArrayElementsDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGetNumArrayElementsDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FGetNumArrayElementsDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode,
                           (UObject *)pUVar2,L"GetNumArrayElementsDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGetNumArrayElementsDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e841510

void __thiscall
FGetNumArrayElementsDataflowNode::SerializeInternal
          (FGetNumArrayElementsDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetNumArrayElementsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetNumArrayElementsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode,
                         (UObject *)pUVar1,L"GetNumArrayElementsDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGetNumArrayElementsDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGetNumArrayElementsDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e84158d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e842080

FName __thiscall
FGetNumArrayElementsDataflowNode::GetDisplayName(FGetNumArrayElementsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetNumArrayElements");
  return in_RDX;
}

// GetCategory @ 14e842100

FName __thiscall
FGetNumArrayElementsDataflowNode::GetCategory(FGetNumArrayElementsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities|Array");
  return in_RDX;
}

// GetTags @ 14e842160

FString * __thiscall
FGetNumArrayElementsDataflowNode::GetTags
          (FGetNumArrayElementsDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e842190

UScriptStruct * __thiscall
FGetNumArrayElementsDataflowNode::TypedScriptStruct(FGetNumArrayElementsDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetNumArrayElementsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FGetNumArrayElementsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetNumArrayElementsDataflowNode,
                         (UObject *)pUVar1,L"GetNumArrayElementsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetNumArrayElementsDataflowNode.OuterSingleton;
}

// Evaluate @ 14e842710

void __thiscall
FGetNumArrayElementsDataflowNode::Evaluate
          (FGetNumArrayElementsDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  FDataflowInput *pFVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar7;
  int local_res8 [2];
  FConnectionReference local_38;
  
  puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((int *)puVar2 == &this->NumElements) {
    local_38.ContainerReference = (void *)0x0;
    local_38.Index = -1;
    local_38.Reference = &this->FloatArray;
    pFVar3 = FDataflowNode::FindInput((FDataflowNode *)this,&local_38);
    if (pFVar3->Connection == (FDataflowOutput *)0x0) {
      local_38.Index = -1;
      local_38.ContainerReference = (void *)0x0;
      local_38.Reference = &this->IntArray;
      pFVar3 = FDataflowNode::FindInput((FDataflowNode *)this,&local_38);
      local_38.Index = -1;
      local_38.ContainerReference = (void *)0x0;
      if (pFVar3->Connection == (FDataflowOutput *)0x0) {
        local_38.Reference = &this->Points;
        pFVar3 = FDataflowNode::FindInput((FDataflowNode *)this,&local_38);
        if (pFVar3->Connection == (FDataflowOutput *)0x0) {
          bVar1 = FDataflowNode::
                  IsConnected<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                            ((FDataflowNode *)this,&this->Vector3fArray);
          if (bVar1) {
            pTVar7 = FDataflowNode::
                     GetValue<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                               ((FDataflowNode *)this,param_1,&this->Vector3fArray);
            local_res8[0] = pTVar7->ArrayNum;
          }
          else {
            local_res8[0] = 0;
          }
        }
        else {
          pTVar6 = FDataflowNode::
                   GetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                             ((FDataflowNode *)this,param_1,&this->Points);
          local_res8[0] = pTVar6->ArrayNum;
        }
      }
      else {
        local_38.Reference = &this->IntArray;
        pFVar3 = FDataflowNode::FindInput((FDataflowNode *)this,&local_38);
        pTVar5 = FDataflowInput::GetValue<TArray<int,TSizedDefaultAllocator<32>_>_>
                           (pFVar3,param_1,local_38.Reference);
        local_res8[0] = pTVar5->ArrayNum;
      }
    }
    else {
      pTVar4 = FDataflowNode::GetValue<TArray<float,TSizedDefaultAllocator<32>_>_>
                         ((FDataflowNode *)this,param_1,&this->FloatArray);
      local_res8[0] = pTVar4->ArrayNum;
    }
    FDataflowNode::SetValue<int,int>((FDataflowNode *)this,param_1,local_res8,&this->NumElements);
  }
  return;
}

// FGetNumArrayElementsDataflowNode @ 14e921340

FGetNumArrayElementsDataflowNode * __thiscall
FGetNumArrayElementsDataflowNode::FGetNumArrayElementsDataflowNode
          (FGetNumArrayElementsDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  local_68.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FGetNumArrayElementsDataflowNode__6B_;
  local_68.Reference = &this->FloatArray;
  (this->IntArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (((TArray<float,TSizedDefaultAllocator<32>_> *)local_68.Reference)->AllocatorInstance).Data =
       (FScriptContainerElement *)0x0;
  (this->FloatArray).ArrayNum = 0;
  (this->FloatArray).ArrayMax = 0;
  (this->IntArray).ArrayNum = 0;
  (this->IntArray).ArrayMax = 0;
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  (this->Vector3fArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vector3fArray).ArrayNum = 0;
  (this->Vector3fArray).ArrayMax = 0;
  this->NumElements = 0;
  local_68.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->IntArray;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->Points;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->Vector3fArray;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->NumElements;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_68);
  }
  return this;
}

// FGetNumArrayElementsDataflowNode @ 14e9214b0

FGetNumArrayElementsDataflowNode * __thiscall
FGetNumArrayElementsDataflowNode::FGetNumArrayElementsDataflowNode
          (FGetNumArrayElementsDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FGetNumArrayElementsDataflowNode__6B_;
  (this->FloatArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloatArray).ArrayNum = 0;
  (this->FloatArray).ArrayMax = 0;
  (this->IntArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IntArray).ArrayNum = 0;
  (this->IntArray).ArrayMax = 0;
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  (this->Vector3fArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vector3fArray).ArrayNum = 0;
  (this->Vector3fArray).ArrayMax = 0;
  this->NumElements = 0;
  return this;
}

