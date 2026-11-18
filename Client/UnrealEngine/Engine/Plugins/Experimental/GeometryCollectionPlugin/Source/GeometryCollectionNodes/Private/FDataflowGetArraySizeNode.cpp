// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 11

// StaticStruct @ 14e863c00

UScriptStruct * __cdecl FDataflowGetArraySizeNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowGetArraySizeNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDataflowGetArraySizeNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowGetArraySizeNode,(UObject *)pUVar1,
                         L"DataflowGetArraySizeNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowGetArraySizeNode.OuterSingleton;
}

// GetType @ 14e863fd0

FName __thiscall FDataflowGetArraySizeNode::GetType(FDataflowGetArraySizeNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowGetArraySizeNode");
  return in_RDX;
}

// IsA @ 14e8640d0

bool __thiscall FDataflowGetArraySizeNode::IsA(FDataflowGetArraySizeNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowGetArraySizeNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e864138;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e864138:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e864156;
      }
    }
  }
  bVar5 = true;
LAB_14e864156:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8641c0

FStructOnScope * __thiscall
FDataflowGetArraySizeNode::NewStructOnScope(FDataflowGetArraySizeNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowGetArraySizeNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FDataflowGetArraySizeNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowGetArraySizeNode,(UObject *)pUVar2,
                           L"DataflowGetArraySizeNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowGetArraySizeNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e864280

void __thiscall
FDataflowGetArraySizeNode::SerializeInternal(FDataflowGetArraySizeNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowGetArraySizeNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDataflowGetArraySizeNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowGetArraySizeNode,(UObject *)pUVar1,
                         L"DataflowGetArraySizeNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowGetArraySizeNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowGetArraySizeNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8642fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e864310

FName __thiscall FDataflowGetArraySizeNode::GetDisplayName(FDataflowGetArraySizeNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetArraySize");
  return in_RDX;
}

// GetCategory @ 14e864340

FName __thiscall FDataflowGetArraySizeNode::GetCategory(FDataflowGetArraySizeNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities|Array");
  return in_RDX;
}

// GetTags @ 14e864370

FString * __thiscall
FDataflowGetArraySizeNode::GetTags(FDataflowGetArraySizeNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Count Length Num");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e8643a0

UScriptStruct * __thiscall
FDataflowGetArraySizeNode::TypedScriptStruct(FDataflowGetArraySizeNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowGetArraySizeNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDataflowGetArraySizeNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowGetArraySizeNode,(UObject *)pUVar1,
                         L"DataflowGetArraySizeNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowGetArraySizeNode.OuterSingleton;
}

// Evaluate @ 14e8643e0

void __thiscall
FDataflowGetArraySizeNode::Evaluate
          (FDataflowGetArraySizeNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  int local_res8 [2];
  FContextValue local_28;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((int *)puVar1 == &this->Size) {
    FDataflowNode::GetValue<FDataflowArrayTypes>
              ((FDataflowNode *)this,&local_28,param_1,&this->Array);
    local_res8[0] = UE::Dataflow::FContextValue::Num(&local_28);
    FDataflowNode::SetValue<int,int>((FDataflowNode *)this,param_1,local_res8,&this->Size);
    if (local_28.CacheElement.Ptr != (FContextCacheElementBase *)0x0) {
      (**(code **)(local_28.CacheElement.Ptr)->_padding_)(local_28.CacheElement.Ptr,1);
    }
  }
  return;
}

// FDataflowGetArraySizeNode @ 14e91b4f0

FDataflowGetArraySizeNode * __thiscall
FDataflowGetArraySizeNode::FDataflowGetArraySizeNode
          (FDataflowGetArraySizeNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowInput *this_00;
  FDataflowOutput *this_01;
  FName local_res8;
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  local_48.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FDataflowGetArraySizeNode__6B_;
  local_48.Reference = &this->Array;
  this->Size = 0;
  local_48.ContainerReference = (void *)0x0;
  this_00 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this,&local_48,&local_res8);
  FDataflowConnection::SetTypePolicy
            ((FDataflowConnection *)this_00,
             (IDataflowTypePolicy *)
             &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_FDataflowArrayTypePolicy::GetInterface(void)'
              ::__l2::Instance);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Reference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = &this->Size;
  this_01 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,&local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_01,&local_48);
  }
  return this;
}

