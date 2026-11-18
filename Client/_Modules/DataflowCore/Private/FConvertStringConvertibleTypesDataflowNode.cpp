// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// StaticStruct @ 1443e3250

UScriptStruct * __cdecl FConvertStringConvertibleTypesDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvertStringConvertibleTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertStringConvertibleTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertStringConvertibleTypesDataflowNode,
                         (UObject *)pUVar1,L"ConvertStringConvertibleTypesDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FConvertStringConvertibleTypesDataflowNode.OuterSingleton
  ;
}

// GetType @ 1443e3290

FName __thiscall
FConvertStringConvertibleTypesDataflowNode::GetType
          (FConvertStringConvertibleTypesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FConvertStringConvertibleTypesDataflowNode");
  return in_RDX;
}

// IsA @ 1443e32c0

bool __thiscall
FConvertStringConvertibleTypesDataflowNode::IsA
          (FConvertStringConvertibleTypesDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FConvertStringConvertibleTypesDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443e3328;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443e3328:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443e3346;
      }
    }
  }
  bVar5 = true;
LAB_1443e3346:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443e3380

FStructOnScope * __thiscall
FConvertStringConvertibleTypesDataflowNode::NewStructOnScope
          (FConvertStringConvertibleTypesDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FConvertStringConvertibleTypesDataflowNode.OuterSingleton
        == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FConvertStringConvertibleTypesDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FConvertStringConvertibleTypesDataflowNode,
                           (UObject *)pUVar2,L"ConvertStringConvertibleTypesDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FConvertStringConvertibleTypesDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443e3400

void __thiscall
FConvertStringConvertibleTypesDataflowNode::SerializeInternal
          (FConvertStringConvertibleTypesDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvertStringConvertibleTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertStringConvertibleTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertStringConvertibleTypesDataflowNode,
                         (UObject *)pUVar1,L"ConvertStringConvertibleTypesDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FConvertStringConvertibleTypesDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FConvertStringConvertibleTypesDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443e347d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443e3490

FName __thiscall
FConvertStringConvertibleTypesDataflowNode::GetDisplayName
          (FConvertStringConvertibleTypesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"ConvertStringConvertibleTypes");
  return in_RDX;
}

// GetCategory @ 1443e34c0

FName __thiscall
FConvertStringConvertibleTypesDataflowNode::GetCategory
          (FConvertStringConvertibleTypesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Convert");
  return in_RDX;
}

// GetTags @ 1443e34f0

FString * __thiscall
FConvertStringConvertibleTypesDataflowNode::GetTags
          (FConvertStringConvertibleTypesDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443e3520

UScriptStruct * __thiscall
FConvertStringConvertibleTypesDataflowNode::TypedScriptStruct
          (FConvertStringConvertibleTypesDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvertStringConvertibleTypesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertStringConvertibleTypesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConvertStringConvertibleTypesDataflowNode,
                         (UObject *)pUVar1,L"ConvertStringConvertibleTypesDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FConvertStringConvertibleTypesDataflowNode.OuterSingleton
  ;
}

// Evaluate @ 1443e3560

void __thiscall
FConvertStringConvertibleTypesDataflowNode::Evaluate
          (FConvertStringConvertibleTypesDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  FDataflowOutput *pFVar2;
  undefined1 local_res8 [8];
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_38;
  undefined1 local_28 [16];
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *local_18;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowStringConvertibleTypes *)puVar1 == &this->Out) {
    FDataflowNode::GetValue<FDataflowStringConvertibleTypes>
              ((FDataflowNode *)this,(FString *)&local_38,param_1,&this->In);
    local_28._8_4_ = 0xffffffff;
    local_18 = (TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> *)0x0;
    local_28._0_8_ = &this->Out;
    pFVar2 = FDataflowNode::FindOutput((FDataflowNode *)this,(FConnectionReference *)local_28);
    if (pFVar2 == (FDataflowOutput *)0x0) {
      `FDataflowNode::SetValue<FDataflowStringConvertibleTypes>'::__l7::<lambda_1>::operator()
                (local_res8);
    }
    else {
      local_18 = &local_38;
      local_28._0_8_ = pFVar2;
      local_28._8_8_ = param_1;
      FDataflowStringConvertibleTypePolicy::
      VisitPolicyByType<_FDataflowOutput::SetValueFromAnyType<FDataflowStringConvertibleTypes>_::__l2::<lambda_1>_>
                ((FName)pFVar2->_padding_,(<lambda_1> *)local_28);
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return;
}

// FConvertStringConvertibleTypesDataflowNode @ 14442afe0

FConvertStringConvertibleTypesDataflowNode * __thiscall
FConvertStringConvertibleTypesDataflowNode::FConvertStringConvertibleTypesDataflowNode
          (FConvertStringConvertibleTypesDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  code *pcVar1;
  bool bVar2;
  FDataflowInput *pFVar3;
  FConvertStringConvertibleTypesDataflowNode *pFVar4;
  FDataflowOutput *pFVar5;
  FName local_res8;
  FName local_res18 [2];
  FGuid local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  FConnectionReference local_60;
  FConnectionReference local_48;
  
  local_88.A = param_2->A;
  local_88.B = param_2->B;
  local_88.C = param_2->C;
  local_88.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_88);
  this->_padding_ = (longlong)&___7FConvertStringConvertibleTypesDataflowNode__6B_;
  ::FString::FString(&(this->In).Value,"");
  ::FString::FString(&(this->Out).Value,"");
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_60.ContainerReference = (void *)0x0;
  local_60.Index = -1;
  local_60.Reference = &this->In;
  pFVar3 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_60,&local_res8);
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
      pFVar4 = (FConvertStringConvertibleTypesDataflowNode *)(*pcVar1)();
      return pFVar4;
    }
  }
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_78 = 0;
  local_70 = 0xffffffff;
  local_68 = 0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Out;
  pFVar5 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,local_res18);
  if (pFVar5->_padding_ == 0) {
    pFVar5->_padding_ =
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
      pFVar4 = (FConvertStringConvertibleTypesDataflowNode *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this;
}

