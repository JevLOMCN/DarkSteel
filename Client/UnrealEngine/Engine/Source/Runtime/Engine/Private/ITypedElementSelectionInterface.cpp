// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// ~ITypedElementSelectionInterface @ 147b3d3e0

void __thiscall
ITypedElementSelectionInterface::~ITypedElementSelectionInterface
          (ITypedElementSelectionInterface *this)

{
  *this = (ITypedElementSelectionInterface)&___7ITypedElementSelectionInterface__6B_;
  return;
}

// AllowSelectionModifiers @ 147b44f40

bool __thiscall
ITypedElementSelectionInterface::AllowSelectionModifiers
          (ITypedElementSelectionInterface *this,FTypedElementHandle *param_1,
          TSharedPtr<TTypedElementList<FTypedElementHandle>_const_,1> *param_2)

{
  return true;
}

// CanDeselectElement @ 147b4a1a0

bool __thiscall
ITypedElementSelectionInterface::CanDeselectElement
          (ITypedElementSelectionInterface *this,FTypedElementHandle *param_1,
          FTypedElementSelectionOptions *param_2)

{
  return true;
}

// CanSelectElement @ 147b4ae80

bool __thiscall
ITypedElementSelectionInterface::CanSelectElement
          (ITypedElementSelectionInterface *this,FTypedElementHandle *param_1,
          FTypedElementSelectionOptions *param_2)

{
  return true;
}

// CreateTransactedElementImpl @ 147b4f3e0

TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>
__thiscall
ITypedElementSelectionInterface::CreateTransactedElementImpl(ITypedElementSelectionInterface *this)

{
  ITypedElementTransactedElement *in_RDX;
  
  in_RDX->_padding_ = 0;
  return (TUniquePtr<ITypedElementTransactedElement,TDefaultDelete<ITypedElementTransactedElement>_>
         )in_RDX;
}

// GetSelectionElement @ 147b6ea80

FTypedElementHandle * __thiscall
ITypedElementSelectionInterface::GetSelectionElement
          (ITypedElementSelectionInterface *this,FTypedElementHandle *__return_storage_ptr__,
          FTypedElementHandle *param_1,
          TSharedPtr<TTypedElementList<FTypedElementHandle>_const_,1> *param_2,
          ETypedElementSelectionMethod param_3)

{
  FTypedElementInternalData *this_00;
  int iVar1;
  
  __return_storage_ptr__->DataPtr = (FTypedElementInternalData *)0x0;
  __return_storage_ptr__->ReferenceId = -1;
  this_00 = param_1->DataPtr;
  if (this_00 != (FTypedElementInternalData *)0x0) {
    __return_storage_ptr__->DataPtr = this_00;
    iVar1 = FTypedElementInternalData::AddRef(this_00,true);
    __return_storage_ptr__->ReferenceId = iVar1;
  }
  return __return_storage_ptr__;
}

// ShouldPreventTransactions @ 147b8e290

bool __thiscall
ITypedElementSelectionInterface::ShouldPreventTransactions
          (ITypedElementSelectionInterface *this,FTypedElementHandle *param_1)

{
  return false;
}

// _getUObject @ 147b91f00

UObject * __thiscall
ITypedElementSelectionInterface::_getUObject(ITypedElementSelectionInterface *this)

{
  return (UObject *)0x0;
}

