// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 4

// FFactory @ 14ad39680

FFactory * __thiscall
Metasound::FNodeFacade::FFactory::FFactory
          (FFactory *this,
          _func___cdecl_TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>_FBuildOperatorParams_ptr_FBuildResults_ptr
          *param_1)

{
  this->CreateFunc = param_1;
  this->_padding_ = (longlong)&___7FFactory_FNodeFacade_Metasound__6B_;
  return this;
}

// ~FFactory @ 14ad3db20

void __thiscall Metasound::FGraph::FFactory::~FFactory(FFactory *this)

{
  return;
}

// CreateOperator @ 14ad4c600

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::FGraph::FFactory::CreateOperator
          (FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  longlong *plVar1;
  FOperatorBuilder local_68;
  ForAnyElementType local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_48.Data = (param_2->Errors).AllocatorInstance.Data;
  plVar1 = *(longlong **)&(param_2->InternalDataReferences).field_0x10;
  local_40._0_4_ = (param_2->Errors).ArrayNum;
  local_40._4_4_ = (param_2->Errors).ArrayMax;
  local_38 = *(undefined8 *)&param_2->InternalDataReferences;
  local_30 = *(undefined8 *)&(param_2->InternalDataReferences).field_0x8;
  local_28 = *(undefined8 *)&(param_2->InternalDataReferences).field_0x18;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
    return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
           (IOperator *)param_1;
  }
  local_68._padding_ = (longlong)&___7FOperatorBuilder_Metasound__6B_;
  local_68.BuilderSettings._8_2_ = DevSettings._8_2_;
  local_68.BuilderSettings._0_8_ = DevSettings._0_8_;
  FOperatorBuilder::BuildGraphOperator
            (&local_68,(FBuildGraphOperatorParams *)param_1,
             (FBuildResults *)&stack0xffffffffffffffb8);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

// CreateOperator @ 14ad4c6b0

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::FNodeFacade::FFactory::CreateOperator
          (FFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  (*this->CreateFunc)(param_1,param_2);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

