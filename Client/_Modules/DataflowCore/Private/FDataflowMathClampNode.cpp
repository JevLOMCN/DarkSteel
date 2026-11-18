// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// StaticStruct @ 1443fb980

UScriptStruct * __cdecl FDataflowMathClampNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathClampNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathClampNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathClampNode,(UObject *)pUVar1,
                         L"DataflowMathClampNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathClampNode.OuterSingleton;
}

// GetType @ 1443fb9c0

FName __thiscall FDataflowMathClampNode::GetType(FDataflowMathClampNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowMathClampNode");
  return in_RDX;
}

// IsA @ 1443fb9f0

bool __thiscall FDataflowMathClampNode::IsA(FDataflowMathClampNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowMathClampNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443fba58;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443fba58:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443fba76;
      }
    }
  }
  bVar5 = true;
LAB_1443fba76:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443fbab0

FStructOnScope * __thiscall FDataflowMathClampNode::NewStructOnScope(FDataflowMathClampNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowMathClampNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FDataflowMathClampNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathClampNode,(UObject *)pUVar2,
                           L"DataflowMathClampNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowMathClampNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443fbb30

void __thiscall
FDataflowMathClampNode::SerializeInternal(FDataflowMathClampNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathClampNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathClampNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathClampNode,(UObject *)pUVar1,
                         L"DataflowMathClampNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathClampNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathClampNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443fbbad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443fbbc0

FName __thiscall FDataflowMathClampNode::GetDisplayName(FDataflowMathClampNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Clamp");
  return in_RDX;
}

// GetCategory @ 1443fbbf0

FName __thiscall FDataflowMathClampNode::GetCategory(FDataflowMathClampNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Scalar");
  return in_RDX;
}

// GetTags @ 1443fbc60

FString * __thiscall
FDataflowMathClampNode::GetTags(FDataflowMathClampNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Saturate Limits");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443fbc90

UScriptStruct * __thiscall FDataflowMathClampNode::TypedScriptStruct(FDataflowMathClampNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathClampNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathClampNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathClampNode,(UObject *)pUVar1,
                         L"DataflowMathClampNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathClampNode.OuterSingleton;
}

// ComputeResult @ 1443fbe40

double __thiscall
FDataflowMathClampNode::ComputeResult(FDataflowMathClampNode *this,FContext *param_1,double param_2)

{
  double dVar1;
  double dVar2;
  FDataflowNumericTypes *local_48;
  undefined4 local_40;
  undefined8 local_38;
  
  local_48 = &this->Min;
  local_40 = 0xffffffff;
  local_38 = 0;
  dVar1 = FDataflowNode::GetValue<FDataflowNumericTypes>
                    ((FDataflowNode *)this,param_1,
                     (TConnectionReference<FDataflowNumericTypes> *)&local_48);
  local_48 = &this->Max;
  local_40 = 0xffffffff;
  local_38 = 0;
  dVar2 = FDataflowNode::GetValue<FDataflowNumericTypes>
                    ((FDataflowNode *)this,param_1,
                     (TConnectionReference<FDataflowNumericTypes> *)&local_48);
  if (param_2 <= dVar2) {
    dVar2 = param_2;
  }
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  return dVar2;
}

// FDataflowMathClampNode @ 14442ced0

FDataflowMathClampNode * __thiscall
FDataflowMathClampNode::FDataflowMathClampNode
          (FDataflowMathClampNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowNumericTypes *pFVar1;
  FDataflowNumericTypes *pFVar2;
  code *pcVar3;
  bool bVar4;
  FDataflowInput *pFVar5;
  FDataflowMathClampNode *pFVar6;
  FName local_res8;
  FName local_res18 [2];
  FGuid local_68;
  FConnectionReference local_58;
  FConnectionReference local_40;
  
  local_68.A = param_2->A;
  local_68.B = param_2->B;
  local_68.C = param_2->C;
  local_68.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_68);
  pFVar1 = &this->Min;
  this->_padding_ = (longlong)&___7FDataflowMathClampNode__6B_;
  pFVar2 = &this->Max;
  this->_padding_ = 0;
  this->_padding_ = 0;
  pFVar1->Value = 0.0;
  pFVar2->Value = 0.0;
  FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs
            ((FDataflowMathOneInputOperatorNode *)this);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = pFVar1;
  pFVar5 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_58,&local_res8);
  if (pFVar5->_padding_ == 0) {
    pFVar5->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FDataflowMathClampNode *)(*pcVar3)();
      return pFVar6;
    }
  }
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_40.Index = -1;
  local_40.ContainerReference = (void *)0x0;
  local_40.Reference = pFVar2;
  pFVar5 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_40,local_res18);
  if (pFVar5->_padding_ == 0) {
    pFVar5->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FDataflowMathClampNode *)(*pcVar3)();
      return pFVar6;
    }
  }
  pFVar1->Value = 0.0;
  pFVar2->Value = 1.0;
  return this;
}

