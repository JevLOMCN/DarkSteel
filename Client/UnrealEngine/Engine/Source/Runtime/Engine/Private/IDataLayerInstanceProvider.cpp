// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// ~IDataLayerInstanceProvider @ 148a443a0

void __thiscall
IDataLayerInstanceProvider::~IDataLayerInstanceProvider(IDataLayerInstanceProvider *this)

{
  *this = (IDataLayerInstanceProvider)&___7IDataLayerInstanceProvider__6B_;
  return;
}

// GetRootExternalDataLayerAsset @ 148a5b090

UExternalDataLayerAsset * __thiscall
IDataLayerInstanceProvider::GetRootExternalDataLayerAsset(IDataLayerInstanceProvider *this)

{
  UExternalDataLayerInstance *this_00;
  UExternalDataLayerAsset *pUVar1;
  
  this_00 = (UExternalDataLayerInstance *)(**(code **)((longlong)*this + 0x20))();
  if (this_00 != (UExternalDataLayerInstance *)0x0) {
    pUVar1 = UExternalDataLayerInstance::GetExternalDataLayerAsset(this_00);
    return pUVar1;
  }
  return (UExternalDataLayerAsset *)0x0;
}

// _getUObject @ 148a6e590

UObject * __thiscall IDataLayerInstanceProvider::_getUObject(IDataLayerInstanceProvider *this)

{
  return (UObject *)0x0;
}

