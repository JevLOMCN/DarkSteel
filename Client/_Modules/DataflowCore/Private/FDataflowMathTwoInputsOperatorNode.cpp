// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 6

// StaticStruct @ 1443ea370

UScriptStruct * __cdecl FDataflowMathTwoInputsOperatorNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathTwoInputsOperatorNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathTwoInputsOperatorNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathTwoInputsOperatorNode,
                         (UObject *)pUVar1,L"DataflowMathTwoInputsOperatorNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathTwoInputsOperatorNode.OuterSingleton;
}

// Evaluate @ 1443ea7f0

void __thiscall
FDataflowMathTwoInputsOperatorNode::Evaluate
          (FDataflowMathTwoInputsOperatorNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  double dVar2;
  double dVar3;
  double local_res8;
  FDataflowNumericTypes *local_38;
  undefined4 local_30;
  undefined8 local_28;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowNumericTypes *)puVar1 == &this->Result) {
    local_38 = &this->A;
    local_30 = 0xffffffff;
    local_28 = 0;
    dVar2 = FDataflowNode::GetValue<FDataflowNumericTypes>
                      ((FDataflowNode *)this,param_1,
                       (TConnectionReference<FDataflowNumericTypes> *)&local_38);
    local_38 = &this->B;
    local_30 = 0xffffffff;
    local_28 = 0;
    dVar3 = FDataflowNode::GetValue<FDataflowNumericTypes>
                      ((FDataflowNode *)this,param_1,
                       (TConnectionReference<FDataflowNumericTypes> *)&local_38);
    local_res8 = (double)(**(code **)(this->_padding_ + 0x150))
                                   (this,param_1,SUB84(dVar2,0),SUB84(dVar3,0));
    FDataflowNode::SetValue<FDataflowNumericTypes>
              ((FDataflowNode *)this,param_1,&local_res8,&this->Result);
  }
  return;
}

// ComputeResult @ 1443eaab0

double __thiscall
FDataflowMathTwoInputsOperatorNode::ComputeResult
          (FDataflowMathTwoInputsOperatorNode *this,FContext *param_1,double param_2,double param_3)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5265546007004840001>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowMathNodes.h"
                     ,0x41,"false");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    dVar2 = (double)(*pcVar1)();
    return dVar2;
  }
  return 0.0;
}

// FDataflowMathTwoInputsOperatorNode @ 14442e3f0

FDataflowMathTwoInputsOperatorNode * __thiscall
FDataflowMathTwoInputsOperatorNode::FDataflowMathTwoInputsOperatorNode
          (FDataflowMathTwoInputsOperatorNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FGuid local_18;
  
  local_18.A = param_2->A;
  local_18.B = param_2->B;
  local_18.C = param_2->C;
  local_18.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_18);
  this->_padding_ = (longlong)&___7FDataflowMathTwoInputsOperatorNode__6B_;
  (this->A).Value = 0.0;
  (this->B).Value = 0.0;
  (this->Result).Value = 0.0;
  return this;
}

// operator= @ 144434350

FDataflowMathTwoInputsOperatorNode * __thiscall
FDataflowMathTwoInputsOperatorNode::operator=
          (FDataflowMathTwoInputsOperatorNode *this,FDataflowMathTwoInputsOperatorNode *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDataflowMathTwoInputsOperatorNode *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowNode.h"
                     ,0x51,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDataflowMathTwoInputsOperatorNode *)(*pcVar1)();
    return pFVar3;
  }
  (this->A).Value = (param_1->A).Value;
  (this->B).Value = (param_1->B).Value;
  (this->Result).Value = (param_1->Result).Value;
  return this;
}

// RegisterInputsAndOutputs @ 144458e10

void __thiscall
FDataflowMathTwoInputsOperatorNode::RegisterInputsAndOutputs
          (FDataflowMathTwoInputsOperatorNode *this)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  FDataflowInput *pFVar4;
  FDataflowOutput *pFVar5;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  undefined8 local_res20;
  FConnectionReference local_a0;
  FConnectionReference local_88;
  FConnectionReference local_70;
  FConnectionReference local_58;
  
  local_a0.Index = -1;
  local_a0.Reference = &this->A;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_a0.ContainerReference = (void *)0x0;
  pFVar4 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_a0,&local_res8);
  if (pFVar4->_padding_ == 0) {
    pFVar4->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_88.Reference = &this->B;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  local_88.Index = -1;
  local_88.ContainerReference = (void *)0x0;
  pFVar4 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_88,&local_res10);
  if (pFVar4->_padding_ == 0) {
    pFVar4->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_70.Index = -1;
  local_70.ContainerReference = (void *)0x0;
  local_70.Reference = &this->Result;
  pFVar5 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_70,&local_res18);
  if (pFVar5->_padding_ == 0) {
    pFVar5->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<double,float,__int64,unsigned___int64,int,unsigned_int,short,unsigned_short,signed_char,unsigned_char>::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVar2 = TDataflowSingleTypePolicy<float>::TypeName;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_res20 = 0;
  local_58.Reference = &this->Result;
  pFVar5 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_58);
  FDataflowNode::SetConnectionConcreteType
            ((FDataflowNode *)this,(FDataflowConnection *)pFVar5,FVar2,(FName)0x0);
  return;
}

