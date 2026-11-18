// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// GetTypeName @ 1474e0450

FName __thiscall UE::Anim::IInertializationRequester::GetTypeName(IInertializationRequester *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

// RequestInertialization @ 1474f5630

void __thiscall
UE::Anim::IInertializationRequester::RequestInertialization
          (IInertializationRequester *this,FInertializationRequest *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001474f563b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x28))
            (this,param_1->Duration,(param_1->BlendProfile).field0_0x0.DebugPtr);
  return;
}

