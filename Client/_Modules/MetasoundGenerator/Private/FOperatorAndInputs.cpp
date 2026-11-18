// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 1

// ~FOperatorAndInputs @ 14b2a8550

void __thiscall Metasound::FOperatorAndInputs::~FOperatorAndInputs(FOperatorAndInputs *this)

{
  FScriptContainerElement *pFVar1;
  IOperator *pIVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RenderCost).SharedReferenceCount.ReferenceController);
  DestructItems<Metasound::VertexPrivate::FSubInterfaceLayout,int>
            ((FSubInterfaceLayout *)(this->Inputs).SubInterfaces.AllocatorInstance.Data,
             (this->Inputs).SubInterfaces.ArrayNum);
  pFVar1 = (this->Inputs).SubInterfaces.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Metasound::VertexDataPrivate::FInputBinding,int>
            ((FInputBinding *)(this->Inputs).Bindings.AllocatorInstance.Data,
             (this->Inputs).Bindings.ArrayNum);
  pFVar1 = (this->Inputs).Bindings.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->Operator).Ptr;
  if (pIVar2 != (IOperator *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014b2a85ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar2)(pIVar2,1);
    return;
  }
  return;
}

