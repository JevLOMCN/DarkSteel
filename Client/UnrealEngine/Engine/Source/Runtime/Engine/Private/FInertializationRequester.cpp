// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// AddDebugRecord @ 1474b95f0

void __thiscall
UE::Anim::FInertializationRequester::AddDebugRecord
          (FInertializationRequester *this,FAnimInstanceProxy *param_1,int param_2)

{
  FAnimTrace::OutputAnimNodeAttribute
            (this->Proxy,param_1,this->NodeId,param_2,IInertializationRequester::Attribute);
  return;
}

// GetTag @ 1474e0140

FName __thiscall UE::Anim::FInertializationRequester::GetTag(FInertializationRequester *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->Node->Tag;
  return in_RDX;
}

// RequestInertialization @ 1474f55f0

void __thiscall
UE::Anim::FInertializationRequester::RequestInertialization
          (FInertializationRequester *this,FInertializationRequest *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001474f55f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->Node->_padding_ + 0xa0))();
  return;
}

// RequestInertialization @ 1474f5610

void __thiscall
UE::Anim::FInertializationRequester::RequestInertialization
          (FInertializationRequester *this,float param_1,UBlendProfile *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001474f5617. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->Node->_padding_ + 0xa8))();
  return;
}

