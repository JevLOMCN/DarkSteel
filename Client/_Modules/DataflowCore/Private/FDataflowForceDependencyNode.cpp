// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// StaticStruct @ 1443f6530

UScriptStruct * __cdecl FDataflowForceDependencyNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowForceDependencyNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowForceDependencyNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowForceDependencyNode,(UObject *)pUVar1,
                         L"DataflowForceDependencyNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowForceDependencyNode.OuterSingleton;
}

// GetType @ 1443f6570

FName __thiscall FDataflowForceDependencyNode::GetType(FDataflowForceDependencyNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowForceDependencyNode");
  return in_RDX;
}

// IsA @ 1443f65a0

bool __thiscall FDataflowForceDependencyNode::IsA(FDataflowForceDependencyNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowForceDependencyNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443f6608;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443f6608:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443f6626;
      }
    }
  }
  bVar5 = true;
LAB_1443f6626:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443f6660

FStructOnScope * __thiscall
FDataflowForceDependencyNode::NewStructOnScope(FDataflowForceDependencyNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowForceDependencyNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FDataflowForceDependencyNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowForceDependencyNode,(UObject *)pUVar2,
                           L"DataflowForceDependencyNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowForceDependencyNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443f66e0

void __thiscall
FDataflowForceDependencyNode::SerializeInternal
          (FDataflowForceDependencyNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowForceDependencyNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowForceDependencyNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowForceDependencyNode,(UObject *)pUVar1,
                         L"DataflowForceDependencyNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FDataflowForceDependencyNode.OuterSingleton,param_1,
             (uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FDataflowForceDependencyNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443f675d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443f6770

FName __thiscall FDataflowForceDependencyNode::GetDisplayName(FDataflowForceDependencyNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"ForceDependency");
  return in_RDX;
}

// GetCategory @ 1443f67a0

FName __thiscall FDataflowForceDependencyNode::GetCategory(FDataflowForceDependencyNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FlowControl");
  return in_RDX;
}

// GetTags @ 1443f67d0

FString * __thiscall
FDataflowForceDependencyNode::GetTags
          (FDataflowForceDependencyNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443f6800

UScriptStruct * __thiscall
FDataflowForceDependencyNode::TypedScriptStruct(FDataflowForceDependencyNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowForceDependencyNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowForceDependencyNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowForceDependencyNode,(UObject *)pUVar1,
                         L"DataflowForceDependencyNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowForceDependencyNode.OuterSingleton;
}

// Evaluate @ 1443f6840

void __thiscall
FDataflowForceDependencyNode::Evaluate
          (FDataflowForceDependencyNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FDataflowAnyType *pFVar1;
  undefined1 *puVar2;
  FDataflowInput *pFVar3;
  FDataflowOutput *this_00;
  FConnectionReference local_38;
  FConnectionReference local_20;
  
  pFVar1 = &this->Value;
  puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowAnyType *)puVar2 == pFVar1) {
    local_38.Reference = &this->DependentValue;
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    pFVar3 = FDataflowNode::FindInput((FDataflowNode *)this,&local_38);
    FDataflowInput::PullValue(pFVar3,param_1);
    local_38.Index = -1;
    local_38.ContainerReference = (void *)0x0;
    local_20.Index = -1;
    local_20.ContainerReference = (void *)0x0;
    local_38.Reference = pFVar1;
    local_20.Reference = pFVar1;
    this_00 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_38);
    if (this_00 != (FDataflowOutput *)0x0) {
      pFVar3 = FDataflowNode::FindInput((FDataflowNode *)this,&local_20);
      if (pFVar3 != (FDataflowInput *)0x0) {
        FDataflowOutput::ForwardInput(this_00,pFVar3,param_1);
      }
    }
  }
  return;
}

// FDataflowForceDependencyNode @ 14442c290

FDataflowForceDependencyNode * __thiscall
FDataflowForceDependencyNode::FDataflowForceDependencyNode
          (FDataflowForceDependencyNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowAnyType *pFVar1;
  code *pcVar2;
  bool bVar3;
  FDataflowInput *pFVar4;
  FDataflowForceDependencyNode *pFVar5;
  FDataflowOutput *this_00;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  FConnectionReference local_98;
  FConnectionReference local_80;
  FConnectionReference local_68;
  FConnectionReference local_50;
  FGuid local_38;
  
  local_38.A = param_2->A;
  local_38.B = param_2->B;
  local_38.C = param_2->C;
  local_38.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_38);
  local_80.Index = -1;
  this->_padding_ = (longlong)&___7FDataflowForceDependencyNode__6B_;
  local_80.Reference = &this->DependentValue;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_80.ContainerReference = (void *)0x0;
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
      pFVar5 = (FDataflowForceDependencyNode *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar1 = &this->Value;
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = pFVar1;
  pFVar4 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res18);
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
      pFVar5 = (FDataflowForceDependencyNode *)(*pcVar2)();
      return pFVar5;
    }
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  local_98.Index = -1;
  local_98.ContainerReference = (void *)0x0;
  local_50.Index = -1;
  local_50.ContainerReference = (void *)0x0;
  local_98.Reference = pFVar1;
  local_50.Reference = pFVar1;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_50,&local_res20);
  if (this_00->_padding_ == 0) {
    this_00->_padding_ =
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
      pFVar5 = (FDataflowForceDependencyNode *)(*pcVar2)();
      return pFVar5;
    }
  }
  if (pFVar1 != (FDataflowAnyType *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_98);
  }
  return this;
}

