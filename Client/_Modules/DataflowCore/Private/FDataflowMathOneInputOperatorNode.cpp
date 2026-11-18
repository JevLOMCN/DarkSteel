// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 5

// StaticStruct @ 1443ea100

UScriptStruct * __cdecl FDataflowMathOneInputOperatorNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowMathOneInputOperatorNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowMathOneInputOperatorNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowMathOneInputOperatorNode,
                         (UObject *)pUVar1,L"DataflowMathOneInputOperatorNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowMathOneInputOperatorNode.OuterSingleton;
}

// Evaluate @ 1443ea1c0

void __thiscall
FDataflowMathOneInputOperatorNode::Evaluate
          (FDataflowMathOneInputOperatorNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  undefined1 *puVar1;
  double dVar2;
  double local_res8;
  FDataflowNumericTypes *local_28;
  undefined4 local_20;
  undefined8 local_18;
  
  puVar1 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FDataflowNumericTypes *)puVar1 == &this->Result) {
    local_28 = &this->A;
    local_20 = 0xffffffff;
    local_18 = 0;
    dVar2 = FDataflowNode::GetValue<FDataflowNumericTypes>
                      ((FDataflowNode *)this,param_1,
                       (TConnectionReference<FDataflowNumericTypes> *)&local_28);
    local_res8 = (double)(**(code **)(this->_padding_ + 0x150))(this,param_1,SUB84(dVar2,0));
    FDataflowNode::SetValue<FDataflowNumericTypes>
              ((FDataflowNode *)this,param_1,&local_res8,&this->Result);
  }
  return;
}

// ComputeResult @ 1443ea260

double __thiscall
FDataflowMathOneInputOperatorNode::ComputeResult
          (FDataflowMathOneInputOperatorNode *this,FContext *param_1,double param_2)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5265546007004839976>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowMathNodes.h"
                     ,0x28,"false");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    dVar2 = (double)(*pcVar1)();
    return dVar2;
  }
  return 0.0;
}

// FDataflowMathOneInputOperatorNode @ 14442df30

FDataflowMathOneInputOperatorNode * __thiscall
FDataflowMathOneInputOperatorNode::FDataflowMathOneInputOperatorNode
          (FDataflowMathOneInputOperatorNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FGuid local_18;
  
  local_18.A = param_2->A;
  local_18.B = param_2->B;
  local_18.C = param_2->C;
  local_18.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_18);
  this->_padding_ = (longlong)&___7FDataflowMathOneInputOperatorNode__6B_;
  (this->A).Value = 0.0;
  (this->Result).Value = 0.0;
  return this;
}

// RegisterInputsAndOutputs @ 144458c90

void __thiscall
FDataflowMathOneInputOperatorNode::RegisterInputsAndOutputs(FDataflowMathOneInputOperatorNode *this)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  FDataflowInput *pFVar4;
  FDataflowOutput *pFVar5;
  FName local_res8;
  FName local_res10;
  undefined8 local_res18;
  FConnectionReference local_70;
  FConnectionReference local_58;
  FConnectionReference local_40;
  
  local_70.Reference = &this->A;
  local_70.Index = -1;
  local_70.ContainerReference = (void *)0x0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pFVar4 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_70,&local_res8);
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
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = &this->Result;
  pFVar5 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_58,&local_res10);
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
  local_40.Index = -1;
  local_40.ContainerReference = (void *)0x0;
  local_res18 = 0;
  local_40.Reference = &this->Result;
  pFVar5 = FDataflowNode::FindOutput((FDataflowNode *)this,&local_40);
  FDataflowNode::SetConnectionConcreteType
            ((FDataflowNode *)this,(FDataflowConnection *)pFVar5,FVar2,(FName)0x0);
  return;
}

