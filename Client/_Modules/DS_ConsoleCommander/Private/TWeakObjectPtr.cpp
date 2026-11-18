// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DS_ConsoleCommander
// Functions: 2

// UEOpEquals @ 14c27d520

bool __thiscall
TWeakObjectPtr<UDS_WidgetComponent,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UDS_WidgetComponent,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

// UEOpEquals @ 14c27d540

bool __thiscall
TWeakObjectPtr<UShapeComponent,FWeakObjectPtr>::UEOpEquals
          (TWeakObjectPtr<UShapeComponent,FWeakObjectPtr> *this,void *param_1)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  return !bVar1;
}

