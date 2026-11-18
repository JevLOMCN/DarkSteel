// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 2

// TUniquePtr<UTypedElementRegistry::FRegisteredElementType,TDefaultDelete<UTypedElementRegistry::FRegisteredElementType>_> @ 142c95980

TUniquePtr<UTypedElementRegistry::FRegisteredElementType,TDefaultDelete<UTypedElementRegistry::FRegisteredElementType>_>
* __thiscall
TUniquePtr<UTypedElementRegistry::FRegisteredElementType,TDefaultDelete<UTypedElementRegistry::FRegisteredElementType>_>
::
TUniquePtr<UTypedElementRegistry::FRegisteredElementType,TDefaultDelete<UTypedElementRegistry::FRegisteredElementType>_>
          (TUniquePtr<UTypedElementRegistry::FRegisteredElementType,TDefaultDelete<UTypedElementRegistry::FRegisteredElementType>_>
           *this)

{
  this->Ptr = (FRegisteredElementType *)0x0;
  return this;
}

// ~TUniquePtr<UTypedElementRegistry::FRegisteredElementType,TDefaultDelete<UTypedElementRegistry::FRegisteredElementType>_> @ 142c99f20

void __thiscall
TUniquePtr<UTypedElementRegistry::FRegisteredElementType,TDefaultDelete<UTypedElementRegistry::FRegisteredElementType>_>
::
~TUniquePtr<UTypedElementRegistry::FRegisteredElementType,TDefaultDelete<UTypedElementRegistry::FRegisteredElementType>_>
          (TUniquePtr<UTypedElementRegistry::FRegisteredElementType,TDefaultDelete<UTypedElementRegistry::FRegisteredElementType>_>
           *this)

{
  FRegisteredElementType *pFVar1;
  
  pFVar1 = this->Ptr;
  if (pFVar1 != (FRegisteredElementType *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142c99f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

