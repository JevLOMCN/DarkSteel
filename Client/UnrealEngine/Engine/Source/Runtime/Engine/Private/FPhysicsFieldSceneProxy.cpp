// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FPhysicsFieldSceneProxy @ 14834ae90

FPhysicsFieldSceneProxy * __thiscall
FPhysicsFieldSceneProxy::FPhysicsFieldSceneProxy
          (FPhysicsFieldSceneProxy *this,UPhysicsFieldComponent *param_1)

{
  this->FieldResource = (FPhysicsFieldResource *)0x0;
  this->DebugResource = (FPhysicsFieldResource *)0x0;
  if (param_1 != (UPhysicsFieldComponent *)0x0) {
    if (param_1->FieldInstance != (FPhysicsFieldInstance *)0x0) {
      this->FieldResource = param_1->FieldInstance->FieldResource;
    }
    if (param_1->DebugInstance != (FPhysicsFieldInstance *)0x0) {
      this->DebugResource = param_1->DebugInstance->FieldResource;
    }
  }
  return this;
}

// ~FPhysicsFieldSceneProxy @ 14834d490

void __thiscall FPhysicsFieldSceneProxy::~FPhysicsFieldSceneProxy(FPhysicsFieldSceneProxy *this)

{
  return;
}

