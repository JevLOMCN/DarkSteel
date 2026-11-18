// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// StaticStruct @ 1443e3780

UScriptStruct * __cdecl FConvertUObjectConvertibleTypesDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvertUObjectConvertibleTypesDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertUObjectConvertibleTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertUObjectConvertibleTypesDataflowNode,
                         (UObject *)pUVar1,L"ConvertUObjectConvertibleTypesDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FConvertUObjectConvertibleTypesDataflowNode.
         OuterSingleton;
}

// GetType @ 1443e37d0

FName __thiscall
FConvertUObjectConvertibleTypesDataflowNode::GetType
          (FConvertUObjectConvertibleTypesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FConvertUObjectConvertibleTypesDataflowNode");
  return in_RDX;
}

// IsA @ 1443e3800

bool __thiscall
FConvertUObjectConvertibleTypesDataflowNode::IsA
          (FConvertUObjectConvertibleTypesDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FConvertUObjectConvertibleTypesDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443e3868;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443e3868:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443e3886;
      }
    }
  }
  bVar5 = true;
LAB_1443e3886:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443e38c0

FStructOnScope * __thiscall
FConvertUObjectConvertibleTypesDataflowNode::NewStructOnScope
          (FConvertUObjectConvertibleTypesDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FConvertUObjectConvertibleTypesDataflowNode.OuterSingleton
        == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FConvertUObjectConvertibleTypesDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FConvertUObjectConvertibleTypesDataflowNode,
                           (UObject *)pUVar2,L"ConvertUObjectConvertibleTypesDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FConvertUObjectConvertibleTypesDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443e3940

void __thiscall
FConvertUObjectConvertibleTypesDataflowNode::SerializeInternal
          (FConvertUObjectConvertibleTypesDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvertUObjectConvertibleTypesDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertUObjectConvertibleTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertUObjectConvertibleTypesDataflowNode,
                         (UObject *)pUVar1,L"ConvertUObjectConvertibleTypesDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FConvertUObjectConvertibleTypesDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FConvertUObjectConvertibleTypesDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443e39bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443e39d0

FName __thiscall
FConvertUObjectConvertibleTypesDataflowNode::GetDisplayName
          (FConvertUObjectConvertibleTypesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"ConvertUObjectConvertibleTypes");
  return in_RDX;
}

// GetCategory @ 1443e3a00

FName __thiscall
FConvertUObjectConvertibleTypesDataflowNode::GetCategory
          (FConvertUObjectConvertibleTypesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Convert");
  return in_RDX;
}

// GetTags @ 1443e3a30

FString * __thiscall
FConvertUObjectConvertibleTypesDataflowNode::GetTags
          (FConvertUObjectConvertibleTypesDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443e3a60

UScriptStruct * __thiscall
FConvertUObjectConvertibleTypesDataflowNode::TypedScriptStruct
          (FConvertUObjectConvertibleTypesDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvertUObjectConvertibleTypesDataflowNode.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertUObjectConvertibleTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertUObjectConvertibleTypesDataflowNode,
                         (UObject *)pUVar1,L"ConvertUObjectConvertibleTypesDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FConvertUObjectConvertibleTypesDataflowNode.
         OuterSingleton;
}

// Evaluate @ 1443e3aa0

void __thiscall
FConvertUObjectConvertibleTypesDataflowNode::Evaluate
          (FConvertUObjectConvertibleTypesDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  FDataflowInput *this_00;
  FDataflowOutput *pFVar3;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  undefined1 local_38 [16];
  undefined1 *local_28;
  
  puVar2 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowUObjectConvertibleTypes *)puVar2 == &this->Out) {
    local_38._0_8_ = &this->In;
    local_38._8_4_ = -1;
    local_28 = (void *)0x0;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)local_38);
    FDataflowInput::GetValueFromAnyType<FDataflowUObjectConvertibleTypes>
              (this_00,(FContext *)local_res18,(TObjectPtr<UObject> *)param_1);
    local_38._8_4_ = -1;
    local_28 = (void *)0x0;
    local_38._0_8_ = &this->Out;
    pFVar3 = FDataflowNode::FindOutput((FDataflowNode *)this,(FConnectionReference *)local_38);
    if (pFVar3 == (FDataflowOutput *)0x0) {
      `FDataflowNode::SetValue<FDataflowUObjectConvertibleTypes>'::__l7::<lambda_1>::operator()
                (local_res8);
    }
    else {
      local_28 = local_res18;
      local_38._0_8_ = pFVar3;
      local_38._8_8_ = param_1;
      bVar1 = FDataflowUObjectConvertibleTypePolicy::SupportsTypeStatic((FName)pFVar3->_padding_);
      if (bVar1) {
        `FDataflowOutput::SetValueFromAnyType<FDataflowUObjectConvertibleTypes>'::__l2::<lambda_1>::
        operator()<TDataflowSingleTypePolicy<TObjectPtr<UObject>_>_>
                  (local_38,(TDataflowSingleTypePolicy<TObjectPtr<UObject>_>)local_res8);
        return;
      }
    }
  }
  return;
}

// FConvertUObjectConvertibleTypesDataflowNode @ 14442b710

FConvertUObjectConvertibleTypesDataflowNode * __thiscall
FConvertUObjectConvertibleTypesDataflowNode::FConvertUObjectConvertibleTypesDataflowNode
          (FConvertUObjectConvertibleTypesDataflowNode *this,FNodeParameters *param_1,FGuid *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FDataflowInput *pFVar3;
  FConvertUObjectConvertibleTypesDataflowNode *pFVar4;
  FDataflowOutput *pFVar5;
  FName local_res8;
  FName local_res18;
  FGuid local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  FConnectionReference local_50;
  FConnectionReference local_38;
  
  local_78.A = param_2->A;
  local_78.B = param_2->B;
  local_78.C = param_2->C;
  local_78.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_78);
  local_50.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FConvertUObjectConvertibleTypesDataflowNode__6B_;
  local_50.Reference = &this->In;
  (this->Out).Value.field0_0x0.DebugPtr = (UObject *)0x0;
  (((FDataflowUObjectConvertibleTypes *)local_50.Reference)->Value).field0_0x0.DebugPtr =
       (UObject *)0x0;
  local_50.ContainerReference = (void *)0x0;
  pFVar3 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_50,&local_res8);
  if (pFVar3->_padding_ == 0) {
    pFVar3->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_FDataflowUObjectConvertibleTypePolicy::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConvertUObjectConvertibleTypesDataflowNode *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_68 = 0;
  local_60 = 0xffffffff;
  local_58 = 0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->Out;
  pFVar5 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res18);
  if (pFVar5->_padding_ == 0) {
    pFVar5->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_FDataflowUObjectConvertibleTypePolicy::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConvertUObjectConvertibleTypesDataflowNode *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this;
}

