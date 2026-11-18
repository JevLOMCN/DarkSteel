// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// FEnableOverridableSerializationScope @ 1420e90e0

FEnableOverridableSerializationScope * __thiscall
FEnableOverridableSerializationScope::FEnableOverridableSerializationScope
          (FEnableOverridableSerializationScope *this,bool param_1,FOverriddenPropertySet *param_2)

{
  longlong lVar1;
  
  this->bOverridableSerializationEnabled = false;
  this->bWasOverridableSerializationEnabled = false;
  this->SavedOverriddenProperties = (FOverriddenPropertySet *)0x0;
  if (param_1) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (*(char *)(lVar1 + 0xc98) != '\0') {
      this->bWasOverridableSerializationEnabled = true;
      if (*(char *)(lVar1 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      this->SavedOverriddenProperties = *(FOverriddenPropertySet **)(lVar1 + 0xca0);
      FOverridableSerializationLogic::Disable();
    }
    FOverridableSerializationLogic::Enable(param_2);
    this->bOverridableSerializationEnabled = true;
  }
  return this;
}

// ~FEnableOverridableSerializationScope @ 1420ec100

void __thiscall
FEnableOverridableSerializationScope::~FEnableOverridableSerializationScope
          (FEnableOverridableSerializationScope *this)

{
  if (this->bOverridableSerializationEnabled != false) {
    FOverridableSerializationLogic::Disable();
    if (this->bWasOverridableSerializationEnabled != false) {
      FOverridableSerializationLogic::Enable(this->SavedOverriddenProperties);
      return;
    }
  }
  return;
}

