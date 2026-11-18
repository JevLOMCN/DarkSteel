// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// StaticStruct @ 1443f0b00

UScriptStruct * __cdecl FDataflowReRouteNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowReRouteNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowReRouteNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowReRouteNode,(UObject *)pUVar1,
                         L"DataflowReRouteNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowReRouteNode.OuterSingleton;
}

// GetType @ 1443f0b40

FName __thiscall FDataflowReRouteNode::GetType(FDataflowReRouteNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowReRouteNode");
  return in_RDX;
}

// IsA @ 1443f0b70

bool __thiscall FDataflowReRouteNode::IsA(FDataflowReRouteNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowReRouteNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443f0bd8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443f0bd8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443f0bf6;
      }
    }
  }
  bVar5 = true;
LAB_1443f0bf6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443f0c30

FStructOnScope * __thiscall FDataflowReRouteNode::NewStructOnScope(FDataflowReRouteNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowReRouteNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FDataflowReRouteNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowReRouteNode,(UObject *)pUVar2,
                           L"DataflowReRouteNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowReRouteNode.OuterSingleton
                        ,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443f0cb0

void __thiscall
FDataflowReRouteNode::SerializeInternal(FDataflowReRouteNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowReRouteNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowReRouteNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowReRouteNode,(UObject *)pUVar1,
                         L"DataflowReRouteNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowReRouteNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowReRouteNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443f0d2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443f0d40

FName __thiscall FDataflowReRouteNode::GetDisplayName(FDataflowReRouteNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"ReRouteNode");
  return in_RDX;
}

// GetCategory @ 1443f0d70

FName __thiscall FDataflowReRouteNode::GetCategory(FDataflowReRouteNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Core");
  return in_RDX;
}

// GetTags @ 1443f0da0

FString * __thiscall
FDataflowReRouteNode::GetTags(FDataflowReRouteNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443f0dd0

UScriptStruct * __thiscall FDataflowReRouteNode::TypedScriptStruct(FDataflowReRouteNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowReRouteNode.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowReRouteNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowReRouteNode,(UObject *)pUVar1,
                         L"DataflowReRouteNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowReRouteNode.OuterSingleton;
}

// Evaluate @ 1443f0e90

void __thiscall
FDataflowReRouteNode::Evaluate
          (FDataflowReRouteNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FDataflowOutput *this_00;
  FDataflowInput *pFVar1;
  FConnectionReference local_38;
  FConnectionReference local_20;
  
  local_38.Reference = &this->Value;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_20.Index = -1;
  local_20.ContainerReference = (void *)0x0;
  local_20.Reference = local_38.Reference;
  this_00 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_38);
  if (this_00 != (FDataflowOutput *)0x0) {
    pFVar1 = FDataflowNode::FindInput((FDataflowNode *)this,&local_20);
    if (pFVar1 != (FDataflowInput *)0x0) {
      FDataflowOutput::ForwardInput(this_00,pFVar1,param_1);
    }
  }
  return;
}

// FDataflowReRouteNode @ 14442eb70

FDataflowReRouteNode * __thiscall
FDataflowReRouteNode::FDataflowReRouteNode
          (FDataflowReRouteNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowAnyType *pFVar1;
  code *pcVar2;
  bool bVar3;
  FDataflowInput *pFVar4;
  FDataflowReRouteNode *pFVar5;
  FDataflowOutput *pFVar6;
  ulonglong uVar7;
  FName local_res8;
  FName local_res18;
  FConnectionReference local_80;
  FConnectionReference local_68;
  FConnectionReference local_50;
  FGuid local_38;
  
  local_38.A = param_2->A;
  local_38.B = param_2->B;
  local_38.C = param_2->C;
  local_38.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_38);
  uVar7 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7FDataflowReRouteNode__6B_;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar7 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&MainTypeGroup,"Main");
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_80.Index = -1;
  pFVar1 = &this->Value;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_80.ContainerReference = (void *)0x0;
  local_80.Reference = pFVar1;
  pFVar4 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_80,&local_res8);
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
      pcVar2 = (code *)swi(3);
      pFVar5 = (FDataflowReRouteNode *)(*pcVar2)();
      return pFVar5;
    }
  }
  if ((pFVar4->_padding_ & 0x30000000000) == 0x10000000000) {
    *(FName *)((longlong)&pFVar4->_padding_ + 4) = MainTypeGroup;
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = pFVar1;
  pFVar6 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res18);
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
      pcVar2 = (code *)swi(3);
      pFVar5 = (FDataflowReRouteNode *)(*pcVar2)();
      return pFVar5;
    }
  }
  local_50.Index = -1;
  local_50.ContainerReference = (void *)0x0;
  local_50.Reference = pFVar1;
  pFVar6 = FDataflowOutput::SetPassthroughInput(pFVar6,&local_50);
  if ((pFVar6->_padding_ & 0x30000000000) == 0x10000000000) {
    *(FName *)((longlong)&pFVar6->_padding_ + 4) = MainTypeGroup;
  }
  return this;
}

