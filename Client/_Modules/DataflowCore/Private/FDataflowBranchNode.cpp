// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// StaticStruct @ 1443f1140

UScriptStruct * __cdecl FDataflowBranchNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowBranchNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowBranchNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowBranchNode,(UObject *)pUVar1,
                         L"DataflowBranchNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowBranchNode.OuterSingleton;
}

// GetType @ 1443f11d0

FName __thiscall FDataflowBranchNode::GetType(FDataflowBranchNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowBranchNode");
  return in_RDX;
}

// IsA @ 1443f1200

bool __thiscall FDataflowBranchNode::IsA(FDataflowBranchNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowBranchNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443f1268;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443f1268:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443f1286;
      }
    }
  }
  bVar5 = true;
LAB_1443f1286:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443f12c0

FStructOnScope * __thiscall FDataflowBranchNode::NewStructOnScope(FDataflowBranchNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowBranchNode.OuterSingleton == (UScriptStruct *)0x0
       ) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FDataflowBranchNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowBranchNode,(UObject *)pUVar2,
                           L"DataflowBranchNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowBranchNode.OuterSingleton,
                        (uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443f1350

void __thiscall FDataflowBranchNode::SerializeInternal(FDataflowBranchNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowBranchNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowBranchNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowBranchNode,(UObject *)pUVar1,
                         L"DataflowBranchNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowBranchNode.OuterSingleton,param_1
             ,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowBranchNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443f13cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443f13e0

FName __thiscall FDataflowBranchNode::GetDisplayName(FDataflowBranchNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Branch");
  return in_RDX;
}

// GetCategory @ 1443f1410

FName __thiscall FDataflowBranchNode::GetCategory(FDataflowBranchNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FlowControl");
  return in_RDX;
}

// GetTags @ 1443f1440

FString * __thiscall
FDataflowBranchNode::GetTags(FDataflowBranchNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443f1470

UScriptStruct * __thiscall FDataflowBranchNode::TypedScriptStruct(FDataflowBranchNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowBranchNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowBranchNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowBranchNode,(UObject *)pUVar1,
                         L"DataflowBranchNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowBranchNode.OuterSingleton;
}

// Evaluate @ 1443f14b0

void __thiscall
FDataflowBranchNode::Evaluate(FDataflowBranchNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  FDataflowInput *pFVar2;
  bool *pbVar3;
  FDataflowOutput *this_00;
  void *pvVar4;
  FConnectionReference local_48;
  FConnectionReference local_30;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowAnyType *)puVar1 == &this->Result) {
    local_48.ContainerReference = (void *)0x0;
    local_48.Index = -1;
    local_48.Reference = &this->bCondition;
    pFVar2 = FDataflowNode::FindInput((FDataflowNode *)this,&local_48);
    pbVar3 = FDataflowInput::GetValue<bool>(pFVar2,param_1,&this->bCondition);
    local_48.Index = -1;
    local_48.ContainerReference = (void *)0x0;
    pvVar4 = (void *)((longlong)this + (0x249 - (ulonglong)(*pbVar3 != false)));
    local_48.Reference = pvVar4;
    pFVar2 = FDataflowNode::FindInput((FDataflowNode *)this,&local_48);
    if (pFVar2->Connection == (FDataflowOutput *)0x0) {
      FDataflowOutput::SetNullValue(param_2,param_1);
    }
    else {
      local_48.Index = -1;
      local_48.ContainerReference = (void *)0x0;
      local_30.Index = -1;
      local_30.ContainerReference = (void *)0x0;
      local_48.Reference = &this->Result;
      local_30.Reference = pvVar4;
      this_00 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_48);
      if ((this_00 != (FDataflowOutput *)0x0) &&
         (pFVar2 = FDataflowNode::FindInput((FDataflowNode *)this,&local_30),
         pFVar2 != (FDataflowInput *)0x0)) {
        FDataflowOutput::ForwardInput(this_00,pFVar2,param_1);
      }
    }
  }
  return;
}

// FDataflowBranchNode @ 14442bc30

FDataflowBranchNode * __thiscall
FDataflowBranchNode::FDataflowBranchNode
          (FDataflowBranchNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  code *pcVar1;
  void *pvVar2;
  bool bVar3;
  FDataflowInput *pFVar4;
  FDataflowBranchNode *pFVar5;
  FDataflowOutput *pFVar6;
  ulonglong uVar7;
  FName local_res8 [2];
  FName local_res18;
  FName local_res20;
  FName local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  FConnectionReference local_a8;
  FConnectionReference local_90;
  FConnectionReference local_78;
  FConnectionReference local_60;
  FGuid local_48;
  
  local_48.A = param_2->A;
  local_48.B = param_2->B;
  local_48.C = param_2->C;
  local_48.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_48);
  uVar7 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7FDataflowBranchNode__6B_;
  pvVar2 = ThreadLocalStoragePointer;
  this->bCondition = true;
  if (*(int *)(*(longlong *)((longlong)pvVar2 + uVar7 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&MainTypeGroup,"Main");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_a8.Index = -1;
  local_a8.Reference = &this->TrueValue;
  local_res8[0].ComparisonIndex.Value = 0;
  local_res8[0].Number = 0;
  local_a8.ContainerReference = (void *)0x0;
  pFVar4 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_a8,local_res8);
  if (pFVar4->_padding_ == 0) {
    pFVar4->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_FDataflowAllTypesPolicy::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FDataflowBranchNode *)(*pcVar1)();
      return pFVar5;
    }
  }
  if ((pFVar4->_padding_ & 0x30000000000) == 0x10000000000) {
    *(FName *)((longlong)&pFVar4->_padding_ + 4) = MainTypeGroup;
  }
  local_90.Reference = &this->FalseValue;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_90.Index = -1;
  local_90.ContainerReference = (void *)0x0;
  pFVar4 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_90,&local_res18);
  if (pFVar4->_padding_ == 0) {
    pFVar4->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_FDataflowAllTypesPolicy::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FDataflowBranchNode *)(*pcVar1)();
      return pFVar5;
    }
  }
  if ((pFVar4->_padding_ & 0x30000000000) == 0x10000000000) {
    *(FName *)((longlong)&pFVar4->_padding_ + 4) = MainTypeGroup;
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  local_78.Index = -1;
  local_78.ContainerReference = (void *)0x0;
  local_78.Reference = &this->bCondition;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_78,&local_res20);
  local_60.Reference = &this->Result;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  local_c0 = 0;
  local_b8 = 0xffffffff;
  local_b0 = 0;
  local_60.Index = -1;
  local_60.ContainerReference = (void *)0x0;
  pFVar6 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_60,&local_c8);
  if (pFVar6->_padding_ == 0) {
    pFVar6->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_FDataflowAllTypesPolicy::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FDataflowBranchNode *)(*pcVar1)();
      return pFVar5;
    }
  }
  if ((pFVar6->_padding_ & 0x30000000000) == 0x10000000000) {
    *(FName *)((longlong)&pFVar6->_padding_ + 4) = MainTypeGroup;
  }
  return this;
}

