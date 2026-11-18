// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// StaticStruct @ 1443e7d90

UScriptStruct * __cdecl FConvertStringArrayTypesDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvertStringArrayTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertStringArrayTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertStringArrayTypesDataflowNode,
                         (UObject *)pUVar1,L"ConvertStringArrayTypesDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FConvertStringArrayTypesDataflowNode.OuterSingleton;
}

// GetType @ 1443e7de0

FName __thiscall
FConvertStringArrayTypesDataflowNode::GetType(FConvertStringArrayTypesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FConvertStringArrayTypesDataflowNode");
  return in_RDX;
}

// IsA @ 1443e7ea0

bool __thiscall
FConvertStringArrayTypesDataflowNode::IsA(FConvertStringArrayTypesDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FConvertStringArrayTypesDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443e7f08;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443e7f08:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443e7f26;
      }
    }
  }
  bVar5 = true;
LAB_1443e7f26:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443e7f60

FStructOnScope * __thiscall
FConvertStringArrayTypesDataflowNode::NewStructOnScope(FConvertStringArrayTypesDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FConvertStringArrayTypesDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FConvertStringArrayTypesDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FConvertStringArrayTypesDataflowNode,
                           (UObject *)pUVar2,L"ConvertStringArrayTypesDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FConvertStringArrayTypesDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443e7fe0

void __thiscall
FConvertStringArrayTypesDataflowNode::SerializeInternal
          (FConvertStringArrayTypesDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvertStringArrayTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertStringArrayTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertStringArrayTypesDataflowNode,
                         (UObject *)pUVar1,L"ConvertStringArrayTypesDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FConvertStringArrayTypesDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FConvertStringArrayTypesDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443e805d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443e8070

FName __thiscall
FConvertStringArrayTypesDataflowNode::GetDisplayName(FConvertStringArrayTypesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"ConvertStringArrayTypes");
  return in_RDX;
}

// GetCategory @ 1443e80a0

FName __thiscall
FConvertStringArrayTypesDataflowNode::GetCategory(FConvertStringArrayTypesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Convert");
  return in_RDX;
}

// GetTags @ 1443e8150

FString * __thiscall
FConvertStringArrayTypesDataflowNode::GetTags
          (FConvertStringArrayTypesDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443e8180

UScriptStruct * __thiscall
FConvertStringArrayTypesDataflowNode::TypedScriptStruct(FConvertStringArrayTypesDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvertStringArrayTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertStringArrayTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertStringArrayTypesDataflowNode,
                         (UObject *)pUVar1,L"ConvertStringArrayTypesDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FConvertStringArrayTypesDataflowNode.OuterSingleton;
}

// Evaluate @ 1443e8430

void __thiscall
FConvertStringArrayTypesDataflowNode::Evaluate
          (FConvertStringArrayTypesDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  FDataflowInput *this_00;
  FDataflowOutput *pFVar2;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_48;
  undefined1 local_38 [16];
  TArray<FString,TSizedDefaultAllocator<32>_> *local_28;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowStringArrayTypes *)puVar1 == &this->Out) {
    local_38._8_4_ = -1;
    local_28 = (void *)0x0;
    local_38._0_8_ = &this->In;
    this_00 = FDataflowNode::FindInput((FDataflowNode *)this,(FConnectionReference *)local_38);
    FDataflowInput::GetValueFromAnyType<FDataflowStringArrayTypes>
              (this_00,&local_48,param_1,&(this->In).Value);
    local_38._8_4_ = 0xffffffff;
    local_28 = (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0;
    local_38._0_8_ = &this->Out;
    pFVar2 = FDataflowNode::FindOutput((FDataflowNode *)this,(FConnectionReference *)local_38);
    if (pFVar2 == (FDataflowOutput *)0x0) {
      `FDataflowNode::SetValue<FDataflowStringArrayTypes>'::__l7::<lambda_1>::operator()(local_res8)
      ;
    }
    else {
      local_28 = &local_48;
      local_38._0_8_ = pFVar2;
      local_38._8_8_ = param_1;
      if ((FName)pFVar2->_padding_ ==
          TDataflowSingleTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>_>::TypeName) {
        `FDataflowOutput::SetValueFromAnyType<FDataflowStringArrayTypes>'::__l2::<lambda_1>::
        operator()<TDataflowSingleTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
                  (local_38,(TDataflowSingleTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>_>
                            )local_res8);
      }
      else {
        local_28 = &local_48;
        if ((FName)pFVar2->_padding_ ==
            TDataflowSingleTypePolicy<TArray<FName,TSizedDefaultAllocator<32>_>_>::TypeName) {
          `FDataflowOutput::SetValueFromAnyType<FDataflowStringArrayTypes>'::__l2::<lambda_1>::
          operator()<TDataflowSingleTypePolicy<TArray<FName,TSizedDefaultAllocator<32>_>_>_>
                    (local_38,(TDataflowSingleTypePolicy<TArray<FName,TSizedDefaultAllocator<32>_>_>
                              )local_res8);
        }
      }
    }
    DestructItems<FString,int>((FString *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return;
}

// FConvertStringArrayTypesDataflowNode @ 14442ae70

FConvertStringArrayTypesDataflowNode * __thiscall
FConvertStringArrayTypesDataflowNode::FConvertStringArrayTypesDataflowNode
          (FConvertStringArrayTypesDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  code *pcVar1;
  bool bVar2;
  FDataflowInput *pFVar3;
  FConvertStringArrayTypesDataflowNode *pFVar4;
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
  this->_padding_ = (longlong)&___7FConvertStringArrayTypesDataflowNode__6B_;
  local_50.Reference = &this->In;
  (this->Out).Value.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (((FDataflowStringArrayTypes *)local_50.Reference)->Value).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->In).Value.ArrayNum = 0;
  (this->In).Value.ArrayMax = 0;
  (this->Out).Value.ArrayNum = 0;
  (this->Out).Value.ArrayMax = 0;
  local_50.ContainerReference = (void *)0x0;
  pFVar3 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_50,&local_res8);
  if (pFVar3->_padding_ == 0) {
    pFVar3->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>,TArray<FName,TSizedDefaultAllocator<32>_>_>::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConvertStringArrayTypesDataflowNode *)(*pcVar1)();
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
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<TArray<FString,TSizedDefaultAllocator<32>_>,TArray<FName,TSizedDefaultAllocator<32>_>_>::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConvertStringArrayTypesDataflowNode *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this;
}

