// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e866650

UScriptStruct * __cdecl FDataflowGetArrayElementNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowGetArrayElementNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDataflowGetArrayElementNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowGetArrayElementNode,(UObject *)pUVar1,
                         L"DataflowGetArrayElementNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowGetArrayElementNode.OuterSingleton;
}

// GetType @ 14e866940

FName __thiscall FDataflowGetArrayElementNode::GetType(FDataflowGetArrayElementNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowGetArrayElementNode");
  return in_RDX;
}

// IsA @ 14e866aa0

bool __thiscall FDataflowGetArrayElementNode::IsA(FDataflowGetArrayElementNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowGetArrayElementNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e866b08;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e866b08:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e866b26;
      }
    }
  }
  bVar5 = true;
LAB_14e866b26:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e866bf0

FStructOnScope * __thiscall
FDataflowGetArrayElementNode::NewStructOnScope(FDataflowGetArrayElementNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowGetArrayElementNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FDataflowGetArrayElementNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowGetArrayElementNode,(UObject *)pUVar2,
                           L"DataflowGetArrayElementNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowGetArrayElementNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e866cd0

void __thiscall
FDataflowGetArrayElementNode::SerializeInternal
          (FDataflowGetArrayElementNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowGetArrayElementNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDataflowGetArrayElementNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowGetArrayElementNode,(UObject *)pUVar1,
                         L"DataflowGetArrayElementNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FDataflowGetArrayElementNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FDataflowGetArrayElementNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e866d4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e866dd0

FName __thiscall FDataflowGetArrayElementNode::GetDisplayName(FDataflowGetArrayElementNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetArrayElement");
  return in_RDX;
}

// GetCategory @ 14e866fa0

FName __thiscall FDataflowGetArrayElementNode::GetCategory(FDataflowGetArrayElementNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities|Array");
  return in_RDX;
}

// GetTags @ 14e866fd0

FString * __thiscall
FDataflowGetArrayElementNode::GetTags
          (FDataflowGetArrayElementNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Index At");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e867000

UScriptStruct * __thiscall
FDataflowGetArrayElementNode::TypedScriptStruct(FDataflowGetArrayElementNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowGetArrayElementNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDataflowGetArrayElementNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowGetArrayElementNode,(UObject *)pUVar1,
                         L"DataflowGetArrayElementNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowGetArrayElementNode.OuterSingleton;
}

// Evaluate @ 14e867340

void __thiscall
FDataflowGetArrayElementNode::Evaluate
          (FDataflowGetArrayElementNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FDataflowArrayTypes *pFVar1;
  undefined1 *puVar2;
  FDataflowInput *this_00;
  int *piVar3;
  FDataflowOutput *this_01;
  undefined1 local_res8 [8];
  FConnectionReference local_78;
  FConnectionReference local_60;
  FContextValue local_48;
  FContextValue local_30;
  
  pFVar1 = &this->Array;
  puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowArrayTypes *)puVar2 == pFVar1) {
    local_78.ContainerReference = (void *)0x0;
    local_60.ContainerReference = (void *)0x0;
    local_78.Index = -1;
    local_60.Index = -1;
    local_78.Reference = pFVar1;
    local_60.Reference = pFVar1;
    FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_60,&local_78);
  }
  else {
    puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((FDataflowAllTypes *)puVar2 == &this->Element) {
      FDataflowNode::GetValue<FDataflowArrayTypes>((FDataflowNode *)this,&local_30,param_1,pFVar1);
      local_78.Reference = &this->Index;
      local_78.Index = -1;
      local_78.ContainerReference = (void *)0x0;
      this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_78);
      piVar3 = FDataflowInput::GetValue<int>(this_00,param_1,local_78.Reference);
      UE::Dataflow::FContextValue::GetAt(&local_30,&local_48,*piVar3);
      local_60.Index = -1;
      local_60.ContainerReference = (void *)0x0;
      local_60.Reference = &this->Element;
      this_01 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_60);
      if (this_01 == (FDataflowOutput *)0x0) {
        `FDataflowNode::SetValue<FDataflowAllTypes>'::__l7::<lambda_1>::operator()(local_res8);
      }
      else {
        FDataflowOutput::SetValue<UE::Dataflow::FContextValue>(this_01,&local_48,param_1);
      }
      if (local_48.CacheElement.Ptr != (FContextCacheElementBase *)0x0) {
        (**(code **)(local_48.CacheElement.Ptr)->_padding_)(local_48.CacheElement.Ptr,1);
      }
      if (local_30.CacheElement.Ptr != (FContextCacheElementBase *)0x0) {
        (**(code **)(local_30.CacheElement.Ptr)->_padding_)(local_30.CacheElement.Ptr,1);
      }
    }
  }
  return;
}

// GetDependentConnectionType @ 14e8678d0

FName __thiscall
FDataflowGetArrayElementNode::GetDependentConnectionType
          (FDataflowGetArrayElementNode *this,FDataflowConnection *param_1,
          FDataflowConnection *param_2)

{
  undefined1 *puVar1;
  longlong *in_R9;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((FDataflowArrayTypes *)puVar1 == &this->Array) &&
     (puVar1 = (undefined1 *)(**(code **)(*in_R9 + 0x20))(),
     (FDataflowAllTypes *)puVar1 == &this->Element)) {
    FDataflowArrayTypePolicy::GetElementType((FName)param_1);
    return (FName)param_1;
  }
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((FDataflowAllTypes *)puVar1 == &this->Element) &&
     (puVar1 = (undefined1 *)(**(code **)(*in_R9 + 0x20))(),
     (FDataflowArrayTypes *)puVar1 == &this->Array)) {
    FDataflowArrayTypePolicy::GetArrayType((FName)param_1);
    return (FName)param_1;
  }
  FDataflowNode::GetDependentConnectionType((FDataflowNode *)this,param_1,param_2);
  return (FName)param_1;
}

// FDataflowGetArrayElementNode @ 14e91b2e0

FDataflowGetArrayElementNode * __thiscall
FDataflowGetArrayElementNode::FDataflowGetArrayElementNode
          (FDataflowGetArrayElementNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowArrayTypes *pFVar1;
  void *pvVar2;
  FDataflowInput *this_00;
  FDataflowOutput *pFVar3;
  ulonglong uVar4;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  uVar4 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7FDataflowGetArrayElementNode__6B_;
  pvVar2 = ThreadLocalStoragePointer;
  this->Index = 0;
  if (*(int *)(*(longlong *)((longlong)pvVar2 + uVar4 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ArrayElementDependencyGroup,"ArrayElement");
      _Init_thread_footer(&::_TSS0);
    }
  }
  pFVar1 = &this->Array;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = pFVar1;
  this_00 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this,&local_58,&local_res8);
  FDataflowConnection::SetTypePolicy
            ((FDataflowConnection *)this_00,
             (IDataflowTypePolicy *)
             &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_FDataflowArrayTypePolicy::GetInterface(void)'
              ::__l2::Instance);
  FDataflowConnection::SetTypeDependencyGroup
            ((FDataflowConnection *)this_00,ArrayElementDependencyGroup);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->Index;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
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
  FDataflowConnection::SetTypePolicy
            ((FDataflowConnection *)pFVar3,
             (IDataflowTypePolicy *)
             &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_FDataflowArrayTypePolicy::GetInterface(void)'
              ::__l2::Instance);
  if (local_58.Reference != (FDataflowArrayTypes *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_58);
  }
  FDataflowConnection::SetTypeDependencyGroup
            ((FDataflowConnection *)pFVar3,ArrayElementDependencyGroup);
  local_38.Reference = &this->Element;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  pFVar3 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  FDataflowConnection::SetTypePolicy
            ((FDataflowConnection *)pFVar3,
             (IDataflowTypePolicy *)
             &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_FDataflowAllTypesPolicy::GetInterface(void)'
              ::__l2::Instance);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar3,&local_58);
  }
  FDataflowConnection::SetTypeDependencyGroup
            ((FDataflowConnection *)pFVar3,ArrayElementDependencyGroup);
  return this;
}

