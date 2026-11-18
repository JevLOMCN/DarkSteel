// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 2

// ~FDeprecatedNodeAPIFactory @ 14af426e0

void __thiscall
Metasound::Frontend::NodeRegistrationPrivate::FDeprecatedNodeAPIFactory::~FDeprecatedNodeAPIFactory
          (FDeprecatedNodeAPIFactory *this)

{
  INode *pIVar1;
  
  pIVar1 = (this->Node).Ptr;
  if (pIVar1 != (INode *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014af426f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar1)(pIVar1,1);
    return;
  }
  return;
}

// CreateOperator @ 14af76130

TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_> __thiscall
Metasound::Frontend::NodeRegistrationPrivate::FDeprecatedNodeAPIFactory::CreateOperator
          (FDeprecatedNodeAPIFactory *this,FBuildOperatorParams *param_1,FBuildResults *param_2)

{
  undefined8 *puVar1;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  INode *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30._0_4_ = (param_2->Errors).ArrayNum;
  local_30._4_4_ = (param_2->Errors).ArrayMax;
  local_38 = (this->Node).Ptr;
  local_28 = *(undefined8 *)&param_2->InternalDataReferences;
  local_20 = *(undefined8 *)&(param_2->InternalDataReferences).field_0x8;
  local_18 = *(undefined8 *)&(param_2->InternalDataReferences).field_0x10;
  local_10 = *(undefined8 *)&(param_2->InternalDataReferences).field_0x18;
  puVar1 = (undefined8 *)(**(code **)((longlong)*local_38 + 0x48))(local_38,local_48);
  (**(code **)(*(longlong *)*puVar1 + 8))((longlong *)*puVar1,param_1,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  return (TUniquePtr<Metasound::IOperator,TDefaultDelete<Metasound::IOperator>_>)
         (IOperator *)param_1;
}

