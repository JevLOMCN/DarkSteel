// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e869a60

UScriptStruct * __cdecl FDataflowConvertToArrayNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowConvertToArrayNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDataflowConvertToArrayNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowConvertToArrayNode,(UObject *)pUVar1,
                         L"DataflowConvertToArrayNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowConvertToArrayNode.OuterSingleton;
}

// GetType @ 14e869bd0

FName __thiscall FDataflowConvertToArrayNode::GetType(FDataflowConvertToArrayNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowConvertToArrayNode");
  return in_RDX;
}

// IsA @ 14e869c80

bool __thiscall FDataflowConvertToArrayNode::IsA(FDataflowConvertToArrayNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowConvertToArrayNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e869ce8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e869ce8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e869d06;
      }
    }
  }
  bVar5 = true;
LAB_14e869d06:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e869dd0

FStructOnScope * __thiscall
FDataflowConvertToArrayNode::NewStructOnScope(FDataflowConvertToArrayNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowConvertToArrayNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FDataflowConvertToArrayNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowConvertToArrayNode,(UObject *)pUVar2,
                           L"DataflowConvertToArrayNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowConvertToArrayNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e869eb0

void __thiscall
FDataflowConvertToArrayNode::SerializeInternal(FDataflowConvertToArrayNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowConvertToArrayNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDataflowConvertToArrayNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowConvertToArrayNode,(UObject *)pUVar1,
                         L"DataflowConvertToArrayNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowConvertToArrayNode.OuterSingleton
             ,param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowConvertToArrayNode.OuterSingleton
             ,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e869f2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e869f70

FName __thiscall FDataflowConvertToArrayNode::GetDisplayName(FDataflowConvertToArrayNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"ConvertToArray");
  return in_RDX;
}

// GetCategory @ 14e86a010

FName __thiscall FDataflowConvertToArrayNode::GetCategory(FDataflowConvertToArrayNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities|Array");
  return in_RDX;
}

// GetTags @ 14e86a040

FString * __thiscall
FDataflowConvertToArrayNode::GetTags
          (FDataflowConvertToArrayNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Element");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e86a180

UScriptStruct * __thiscall
FDataflowConvertToArrayNode::TypedScriptStruct(FDataflowConvertToArrayNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowConvertToArrayNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FDataflowConvertToArrayNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowConvertToArrayNode,(UObject *)pUVar1,
                         L"DataflowConvertToArrayNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowConvertToArrayNode.OuterSingleton;
}

// Evaluate @ 14e86a3c0

void __thiscall
FDataflowConvertToArrayNode::Evaluate
          (FDataflowConvertToArrayNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 *puVar3;
  FDataflowInput *pFVar4;
  ulong64 uVar5;
  FDataflowOutput *pFVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  FConnectionReference local_78;
  FConnectionReference local_60;
  FContextValue local_48;
  FContextValue local_30;
  
  puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowArrayTypes *)puVar3 == &this->Array) {
    local_78.Reference = &this->Element;
    local_78.Index = -1;
    local_78.ContainerReference = (void *)0x0;
    pFVar4 = FDataflowNode::FindInput((FDataflowNode *)this,&local_78);
    uVar7 = 0;
    pFVar6 = pFVar4->Connection;
    if (pFVar6 != (FDataflowOutput *)0x0) {
      bVar2 = FDataflowOutput::HasFrozenValue(pFVar6);
      if (bVar2) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4141872740057481682>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowInputOutput.h"
                           ,0x1d2,"false");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else {
        bVar2 = FDataflowOutput::Evaluate(pFVar6,param_1);
        if (bVar2) {
          uVar5 = CityHash64((char *)&pFVar6->_padding_,0x10);
          uVar7 = (uint)uVar5;
        }
      }
    }
    UE::Dataflow::FContextValue::FContextValue(&local_30,(IContextCacheStore *)param_1,uVar7);
    UE::Dataflow::FContextValue::ToArray(&local_30,&local_48);
    local_60.Index = -1;
    local_60.ContainerReference = (void *)0x0;
    local_60.Reference = &this->Array;
    pFVar6 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_60);
    if (pFVar6 == (FDataflowOutput *)0x0) {
      `FDataflowNode::SetValue<FDataflowArrayTypes>'::__l7::<lambda_1>::operator()(local_res8);
    }
    else {
      FDataflowOutput::SetValue<UE::Dataflow::FContextValue>(pFVar6,&local_48,param_1);
    }
    if (local_48.CacheElement.Ptr != (FContextCacheElementBase *)0x0) {
      (**(code **)(local_48.CacheElement.Ptr)->_padding_)(local_48.CacheElement.Ptr,1);
    }
    if (local_30.CacheElement.Ptr != (FContextCacheElementBase *)0x0) {
      (**(code **)(local_30.CacheElement.Ptr)->_padding_)(local_30.CacheElement.Ptr,1);
    }
  }
  return;
}

// GetDependentConnectionType @ 14e86ab60

FName __thiscall
FDataflowConvertToArrayNode::GetDependentConnectionType
          (FDataflowConvertToArrayNode *this,FDataflowConnection *param_1,
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

// FDataflowConvertToArrayNode @ 14e91b160

FDataflowConvertToArrayNode * __thiscall
FDataflowConvertToArrayNode::FDataflowConvertToArrayNode
          (FDataflowConvertToArrayNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowInput *this_00;
  FDataflowOutput *this_01;
  ulonglong uVar1;
  FName local_res8;
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  uVar1 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7FDataflowConvertToArrayNode__6B_;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&ArrayElementDependencyGroup,"ArrayElement");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_48.Index = -1;
  local_48.Reference = &this->Element;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.ContainerReference = (void *)0x0;
  this_00 = FDataflowNode::RegisterInputConnectionInternal
                      ((FDataflowNode *)this,&local_48,&local_res8);
  FDataflowConnection::SetTypePolicy
            ((FDataflowConnection *)this_00,
             (IDataflowTypePolicy *)
             &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_FDataflowAllTypesPolicy::GetInterface(void)'
              ::__l2::Instance);
  FDataflowConnection::SetTypeDependencyGroup
            ((FDataflowConnection *)this_00,ArrayElementDependencyGroup);
  local_28.Reference = &this->Array;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Reference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  this_01 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,&local_res8);
  FDataflowConnection::SetTypePolicy
            ((FDataflowConnection *)this_01,
             (IDataflowTypePolicy *)
             &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_FDataflowArrayTypePolicy::GetInterface(void)'
              ::__l2::Instance);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_01,&local_48);
  }
  FDataflowConnection::SetTypeDependencyGroup
            ((FDataflowConnection *)this_01,ArrayElementDependencyGroup);
  return this;
}

