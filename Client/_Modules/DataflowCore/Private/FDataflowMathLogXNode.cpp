// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 11

// StaticStruct @ 1443f9130

UScriptStruct * __cdecl FDataflowMathLogXNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathLogXNode.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathLogXNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathLogXNode,(UObject *)pUVar1,
                         L"DataflowMathLogXNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathLogXNode.OuterSingleton;
}

// GetType @ 1443f91e0

FName __thiscall FDataflowMathLogXNode::GetType(FDataflowMathLogXNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowMathLogXNode");
  return in_RDX;
}

// IsA @ 1443f9210

bool __thiscall FDataflowMathLogXNode::IsA(FDataflowMathLogXNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowMathLogXNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443f9278;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443f9278:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443f9296;
      }
    }
  }
  bVar5 = true;
LAB_1443f9296:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443f92d0

FStructOnScope * __thiscall FDataflowMathLogXNode::NewStructOnScope(FDataflowMathLogXNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowMathLogXNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FDataflowMathLogXNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathLogXNode,(UObject *)pUVar2,
                           L"DataflowMathLogXNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowMathLogXNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443f9350

void __thiscall
FDataflowMathLogXNode::SerializeInternal(FDataflowMathLogXNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathLogXNode.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathLogXNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathLogXNode,(UObject *)pUVar1,
                         L"DataflowMathLogXNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathLogXNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathLogXNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443f93cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443f9430

FName __thiscall FDataflowMathLogXNode::GetDisplayName(FDataflowMathLogXNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"LogX");
  return in_RDX;
}

// GetCategory @ 1443f9460

FName __thiscall FDataflowMathLogXNode::GetCategory(FDataflowMathLogXNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Scalar");
  return in_RDX;
}

// GetTags @ 1443f9490

FString * __thiscall
FDataflowMathLogXNode::GetTags(FDataflowMathLogXNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Logarithm");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443f94c0

UScriptStruct * __thiscall FDataflowMathLogXNode::TypedScriptStruct(FDataflowMathLogXNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathLogXNode.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathLogXNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathLogXNode,(UObject *)pUVar1,
                         L"DataflowMathLogXNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathLogXNode.OuterSingleton;
}

// ComputeResult @ 1443f9550

double __thiscall
FDataflowMathLogXNode::ComputeResult(FDataflowMathLogXNode *this,FContext *param_1,double param_2)

{
  double dVar1;
  double dVar2;
  FDataflowNumericTypes *local_48;
  undefined4 local_40;
  undefined8 local_38;
  
  local_48 = &this->Base;
  local_40 = 0xffffffff;
  local_38 = 0;
  dVar1 = FDataflowNode::GetValue<FDataflowNumericTypes>
                    ((FDataflowNode *)this,param_1,
                     (TConnectionReference<FDataflowNumericTypes> *)&local_48);
  dVar2 = 0.0;
  if (0.0 < dVar1) {
    dVar2 = log(param_2);
    dVar1 = log(dVar1);
    dVar2 = dVar2 / dVar1;
  }
  return dVar2;
}

// FDataflowMathLogXNode @ 14442d560

FDataflowMathLogXNode * __thiscall
FDataflowMathLogXNode::FDataflowMathLogXNode
          (FDataflowMathLogXNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  code *pcVar1;
  bool bVar2;
  FDataflowInput *pFVar3;
  FDataflowMathLogXNode *pFVar4;
  FName local_res8;
  FGuid local_38;
  FConnectionReference local_28;
  
  local_38.A = param_2->A;
  local_38.B = param_2->B;
  local_38.C = param_2->C;
  local_38.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_38);
  this->_padding_ = (longlong)&___7FDataflowMathLogXNode__6B_;
  this->_padding_ = 0;
  (this->Base).Value = 10.0;
  this->_padding_ = 0;
  FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs
            ((FDataflowMathOneInputOperatorNode *)this);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = &this->Base;
  pFVar3 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_28,&local_res8);
  if (pFVar3->_padding_ == 0) {
    pFVar3->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FDataflowMathLogXNode *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this;
}

