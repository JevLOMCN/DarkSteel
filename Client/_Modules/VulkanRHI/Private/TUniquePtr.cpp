// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 1

// operator= @ 145adcbe0

TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_> * __thiscall
TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_>::operator=
          (TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_> *this,
          TUniquePtr<IMappedFileHandle,TDefaultDelete<IMappedFileHandle>_> *param_1)

{
  IMappedFileHandle *pIVar1;
  
  if (this != param_1) {
    pIVar1 = this->Ptr;
    this->Ptr = param_1->Ptr;
    param_1->Ptr = (IMappedFileHandle *)0x0;
    if (pIVar1 != (IMappedFileHandle *)0x0) {
      (**(code **)pIVar1->_padding_)(pIVar1,1);
    }
  }
  return this;
}

