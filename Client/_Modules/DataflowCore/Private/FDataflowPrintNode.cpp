// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// StaticStruct @ 1443f5d50

UScriptStruct * __cdecl FDataflowPrintNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowPrintNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowPrintNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowPrintNode,(UObject *)pUVar1,
                         L"DataflowPrintNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowPrintNode.OuterSingleton;
}

// GetType @ 1443f5dc0

FName __thiscall FDataflowPrintNode::GetType(FDataflowPrintNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowPrintNode");
  return in_RDX;
}

// IsA @ 1443f5df0

bool __thiscall FDataflowPrintNode::IsA(FDataflowPrintNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowPrintNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443f5e58;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443f5e58:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443f5e76;
      }
    }
  }
  bVar5 = true;
LAB_1443f5e76:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443f5eb0

FStructOnScope * __thiscall FDataflowPrintNode::NewStructOnScope(FDataflowPrintNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowPrintNode.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FDataflowPrintNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowPrintNode,(UObject *)pUVar2,
                           L"DataflowPrintNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowPrintNode.OuterSingleton,
                        (uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443f5f30

void __thiscall FDataflowPrintNode::SerializeInternal(FDataflowPrintNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowPrintNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowPrintNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowPrintNode,(UObject *)pUVar1,
                         L"DataflowPrintNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowPrintNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowPrintNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443f5fad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443f5fc0

FName __thiscall FDataflowPrintNode::GetDisplayName(FDataflowPrintNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Print");
  return in_RDX;
}

// GetCategory @ 1443f5ff0

FName __thiscall FDataflowPrintNode::GetCategory(FDataflowPrintNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Core");
  return in_RDX;
}

// GetTags @ 1443f6020

FString * __thiscall
FDataflowPrintNode::GetTags(FDataflowPrintNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443f6050

UScriptStruct * __thiscall FDataflowPrintNode::TypedScriptStruct(FDataflowPrintNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowPrintNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowPrintNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowPrintNode,(UObject *)pUVar1,
                         L"DataflowPrintNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowPrintNode.OuterSingleton;
}

// Evaluate @ 1443f6090

void __thiscall
FDataflowPrintNode::Evaluate(FDataflowPrintNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  bool bVar1;
  FString *pFVar2;
  FDataflowNode *local_res8;
  FDataflowPrintNode *local_res10;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar2 = FDataflowNode::GetValue<FDataflowStringConvertibleTypes>
                     ((FDataflowNode *)this,&local_18,param_1,&this->Value);
  ::FString::FString(&local_38,"Result=");
  ::FString::ConcatFF(&local_28,&local_38,pFVar2);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_res10 = this;
  if ((param_1->DataLock).Ptr == (FWindowsRecursiveMutex *)0x0) {
    bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &param_1->OnContextHasInfo);
    if (bVar1) {
      TMulticastDelegate<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy>
      ::Broadcast(&param_1->OnContextHasInfo,(FDataflowNode *)this,(FDataflowOutput *)0x0,&local_28)
      ;
    }
    TSet<FDataflowNode_const_*,DefaultKeyFuncs<FDataflowNode_const_*,0>,FDefaultSetAllocator>::
    Emplace<FDataflowNode_const_*_const_&>(&param_1->NodesWithInfo,&local_res8,(bool *)&local_res10)
    ;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// FDataflowPrintNode @ 14442eaa0

FDataflowPrintNode * __thiscall
FDataflowPrintNode::FDataflowPrintNode
          (FDataflowPrintNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  code *pcVar1;
  bool bVar2;
  FDataflowInput *pFVar3;
  FDataflowPrintNode *pFVar4;
  FName local_res8;
  FGuid local_38;
  FConnectionReference local_28;
  
  local_38.A = param_2->A;
  local_38.B = param_2->B;
  local_38.C = param_2->C;
  local_38.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_38);
  this->_padding_ = (longlong)&___7FDataflowPrintNode__6B_;
  ::FString::FString(&(this->Value).Value,"");
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_28.ContainerReference = (void *)0x0;
  local_28.Index = -1;
  local_28.Reference = &this->Value;
  pFVar3 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_28,&local_res8);
  if (pFVar3->_padding_ == 0) {
    pFVar3->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_FDataflowStringConvertibleTypePolicy::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FDataflowPrintNode *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this;
}

