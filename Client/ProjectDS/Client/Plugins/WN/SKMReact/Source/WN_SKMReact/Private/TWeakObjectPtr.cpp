// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_SKMReact
// Functions: 3

// UEOpEquals @ 14acd8ec0

bool __thiscall
TWeakObjectPtr<UMeshComponent,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UMeshComponent,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14acd8ee0

bool __thiscall
TWeakObjectPtr<UPhysicalMaterial,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UPhysicalMaterial,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14acd8f00

bool __thiscall
TWeakObjectPtr<UWN_SKMReactComponent,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UWN_SKMReactComponent,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

