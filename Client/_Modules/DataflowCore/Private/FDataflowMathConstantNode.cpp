// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 13

// StaticStruct @ 1443fac20

UScriptStruct * __cdecl FDataflowMathConstantNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathConstantNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathConstantNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathConstantNode,(UObject *)pUVar1,
                         L"DataflowMathConstantNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathConstantNode.OuterSingleton;
}

// GetType @ 1443faca0

FName __thiscall FDataflowMathConstantNode::GetType(FDataflowMathConstantNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowMathConstantNode");
  return in_RDX;
}

// IsA @ 1443facf0

bool __thiscall FDataflowMathConstantNode::IsA(FDataflowMathConstantNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowMathConstantNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443fad58;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443fad58:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443fad76;
      }
    }
  }
  bVar5 = true;
LAB_1443fad76:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443fadb0

FStructOnScope * __thiscall
FDataflowMathConstantNode::NewStructOnScope(FDataflowMathConstantNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowMathConstantNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FDataflowMathConstantNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathConstantNode,(UObject *)pUVar2,
                           L"DataflowMathConstantNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowMathConstantNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443fae30

void __thiscall
FDataflowMathConstantNode::SerializeInternal(FDataflowMathConstantNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathConstantNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathConstantNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathConstantNode,(UObject *)pUVar1,
                         L"DataflowMathConstantNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathConstantNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FDataflowMathConstantNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443faead. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443faec0

FName __thiscall FDataflowMathConstantNode::GetDisplayName(FDataflowMathConstantNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Constants");
  return in_RDX;
}

// GetCategory @ 1443faef0

FName __thiscall FDataflowMathConstantNode::GetCategory(FDataflowMathConstantNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Math|Scalar");
  return in_RDX;
}

// GetTags @ 1443faf20

FString * __thiscall
FDataflowMathConstantNode::GetTags(FDataflowMathConstantNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "Pi Half Two Four Inverse SquareRoot Sqrt Cube Square e Gamma Golden Ratio");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443faf90

UScriptStruct * __thiscall
FDataflowMathConstantNode::TypedScriptStruct(FDataflowMathConstantNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathConstantNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathConstantNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathConstantNode,(UObject *)pUVar1,
                         L"DataflowMathConstantNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathConstantNode.OuterSingleton;
}

// Evaluate @ 1443fb130

void __thiscall
FDataflowMathConstantNode::Evaluate
          (FDataflowMathConstantNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  double local_res8;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowNumericTypes *)puVar1 == &this->Result) {
    switch(this->Constant) {
    case Dataflow_Math_Constants_Pi:
      local_res8 = __real_400921fb54442d18;
      break;
    case Dataflow_Math_Constants_HalfPi:
      local_res8 = __real_3ff921fb54442d18;
      break;
    case Dataflow_Math_Constants_TwoPi:
      local_res8 = __real_401921fb54442d18;
      break;
    case Dataflow_Math_Constants_FourPi:
      local_res8 = __real_402921fb54442d18;
      break;
    case Dataflow_Math_Constants_InvPi:
      local_res8 = __real_3fd45f306dc9c883;
      break;
    case Dataflow_Math_Constants_InvTwoPi:
      local_res8 = __real_3fc45f306dc9c883;
      break;
    case Dataflow_Math_Constants_Sqrt2:
      local_res8 = __real_3ff6a09e667f3bcd;
      break;
    case Dataflow_Math_Constants_InvSqrt2:
      local_res8 = __real_3fe6a09e667f3bcc;
      break;
    case Dataflow_Math_Constants_Sqrt3:
      local_res8 = __real_3ffbb67ae8584caa;
      break;
    case Dataflow_Math_Constants_InvSqrt3:
      local_res8 = __real_3fe279a74590331d;
      break;
    case Dataflow_Math_Constants_E:
      local_res8 = __real_4005bf0a8b145769;
      break;
    case Dataflow_Math_Constants_Gamma:
      local_res8 = __real_3fe2788cfc6fb619;
      break;
    case Dataflow_Math_Constants_GoldenRatio:
      local_res8 = __real_3ff9e3779b97f4a4;
      break;
    default:
      `FDataflowMathConstantNode::GetConstant'::__l2::<lambda_1>::operator()(&local_res8);
      local_res8 = 0.0;
    }
    FDataflowNode::SetValue<FDataflowNumericTypes>
              ((FDataflowNode *)this,param_1,&local_res8,&this->Result);
  }
  return;
}

// FDataflowMathConstantNode @ 14442d030

FDataflowMathConstantNode * __thiscall
FDataflowMathConstantNode::FDataflowMathConstantNode
          (FDataflowMathConstantNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowNumericTypes *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FDataflowOutput *pFVar5;
  FDataflowMathConstantNode *pFVar6;
  FName local_res8;
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
  this->Constant = Dataflow_Math_Constants_Pi;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar1 = &this->Result;
  this->_padding_ = (longlong)&___7FDataflowMathConstantNode__6B_;
  pFVar1->Value = 0.0;
  local_68 = 0;
  local_60 = 0xffffffff;
  local_58 = 0;
  local_50.Index = -1;
  local_50.ContainerReference = (void *)0x0;
  local_50.Reference = pFVar1;
  pFVar5 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_50,&local_res8);
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
      pcVar2 = (code *)swi(3);
      pFVar6 = (FDataflowMathConstantNode *)(*pcVar2)();
      return pFVar6;
    }
  }
  FVar3 = TDataflowSingleTypePolicy<float>::TypeName;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = pFVar1;
  pFVar5 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_38);
  FDataflowNode::SetConnectionConcreteType
            ((FDataflowNode *)this,(FDataflowConnection *)pFVar5,FVar3,(FName)0x0);
  return this;
}

// GetConstant @ 14444b250

double __thiscall FDataflowMathConstantNode::GetConstant(FDataflowMathConstantNode *this)

{
  undefined1 local_res8 [32];
  
  switch(this->Constant) {
  case Dataflow_Math_Constants_Pi:
    return __real_400921fb54442d18;
  case Dataflow_Math_Constants_HalfPi:
    return __real_3ff921fb54442d18;
  case Dataflow_Math_Constants_TwoPi:
    return __real_401921fb54442d18;
  case Dataflow_Math_Constants_FourPi:
    return __real_402921fb54442d18;
  case Dataflow_Math_Constants_InvPi:
    return __real_3fd45f306dc9c883;
  case Dataflow_Math_Constants_InvTwoPi:
    return __real_3fc45f306dc9c883;
  case Dataflow_Math_Constants_Sqrt2:
    return __real_3ff6a09e667f3bcd;
  case Dataflow_Math_Constants_InvSqrt2:
    return __real_3fe6a09e667f3bcc;
  case Dataflow_Math_Constants_Sqrt3:
    return __real_3ffbb67ae8584caa;
  case Dataflow_Math_Constants_InvSqrt3:
    return __real_3fe279a74590331d;
  case Dataflow_Math_Constants_E:
    return __real_4005bf0a8b145769;
  case Dataflow_Math_Constants_Gamma:
    return __real_3fe2788cfc6fb619;
  case Dataflow_Math_Constants_GoldenRatio:
    return __real_3ff9e3779b97f4a4;
  default:
    `FDataflowMathConstantNode::GetConstant'::__l2::<lambda_1>::operator()(local_res8);
    return 0.0;
  }
}

// operator() @ 1504be540

bool __thiscall `FDataflowMathConstantNode::GetConstant'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4337095732558298426>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4337095732558298426>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

