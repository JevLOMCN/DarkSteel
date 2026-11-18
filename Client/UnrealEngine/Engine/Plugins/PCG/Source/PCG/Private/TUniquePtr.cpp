// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// operator= @ 149ad3c70

TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_> * __thiscall
TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>::operator=
          (TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>
           *this,TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>
                 *param_1)

{
  IPCGAttributeAccessor *pIVar1;
  
  if (this != param_1) {
    pIVar1 = this->Ptr;
    this->Ptr = param_1->Ptr;
    param_1->Ptr = (IPCGAttributeAccessor *)0x0;
    if (pIVar1 != (IPCGAttributeAccessor *)0x0) {
      (**(code **)pIVar1->_padding_)(pIVar1,1);
    }
  }
  return this;
}

// operator= @ 149ad3cb0

TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> * __thiscall
TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>::operator=
          (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> *this,
          TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> *param_1)

{
  IPCGAttributeAccessor *pIVar1;
  
  if (this != param_1) {
    pIVar1 = this->Ptr;
    this->Ptr = param_1->Ptr;
    param_1->Ptr = (IPCGAttributeAccessor *)0x0;
    if (pIVar1 != (IPCGAttributeAccessor *)0x0) {
      (**(code **)pIVar1->_padding_)(pIVar1,1);
    }
  }
  return this;
}

// operator= @ 149ad3cf0

TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_> * __thiscall
TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>::operator=
          (TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_> *this,
          TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_> *param_1)

{
  IPCGAttributeAccessorKeys *pIVar1;
  
  if (this != param_1) {
    pIVar1 = this->Ptr;
    this->Ptr = param_1->Ptr;
    param_1->Ptr = (IPCGAttributeAccessorKeys *)0x0;
    if (pIVar1 != (IPCGAttributeAccessorKeys *)0x0) {
      (**(code **)pIVar1->_padding_)(pIVar1,1);
    }
  }
  return this;
}

// operator= @ 149bea630

TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_> *
__thiscall
TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>::
operator=(TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
          *this,TUniquePtr<IPCGAttributeAccessorKeys_const_,TDefaultDelete<IPCGAttributeAccessorKeys_const_>_>
                *param_1)

{
  IPCGAttributeAccessorKeys *pIVar1;
  
  if (this != param_1) {
    pIVar1 = this->Ptr;
    this->Ptr = param_1->Ptr;
    param_1->Ptr = (IPCGAttributeAccessorKeys *)0x0;
    if (pIVar1 != (IPCGAttributeAccessorKeys *)0x0) {
      (**(code **)pIVar1->_padding_)(pIVar1,1);
    }
  }
  return this;
}

