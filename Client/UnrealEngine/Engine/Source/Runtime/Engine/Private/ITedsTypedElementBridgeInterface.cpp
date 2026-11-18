// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// ~ITedsTypedElementBridgeInterface @ 147b3d320

void __thiscall
ITedsTypedElementBridgeInterface::~ITedsTypedElementBridgeInterface
          (ITedsTypedElementBridgeInterface *this)

{
  *this = (ITedsTypedElementBridgeInterface)&___7ITedsTypedElementBridgeInterface__6B_;
  return;
}

// GetRowHandle @ 147b6dac0

FTedsRowHandle __thiscall
ITedsTypedElementBridgeInterface::GetRowHandle
          (ITedsTypedElementBridgeInterface *this,FTypedElementHandle *param_1)

{
  param_1->DataPtr = (FTypedElementInternalData *)0x0;
  return (FTedsRowHandle)(ulong64)param_1;
}

// _getUObject @ 147b91ea0

UObject * __thiscall
ITedsTypedElementBridgeInterface::_getUObject(ITedsTypedElementBridgeInterface *this)

{
  return (UObject *)0x0;
}

