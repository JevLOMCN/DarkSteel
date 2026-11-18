// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FieldSystemEngine
// Functions: 4

// FFieldSystemSceneProxy @ 14632a8c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FFieldSystemSceneProxy * __thiscall
FFieldSystemSceneProxy::FFieldSystemSceneProxy
          (FFieldSystemSceneProxy *this,UFieldSystemComponent *param_1)

{
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(UPrimitiveComponent *)param_1,(FName)0x0);
  *(undefined ***)this = &___7FFieldSystemSceneProxy__6B_;
  return this;
}

// ~FFieldSystemSceneProxy @ 14632b5e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FFieldSystemSceneProxy::~FFieldSystemSceneProxy(FFieldSystemSceneProxy *this)

{
  *(undefined ***)this = &___7FFieldSystemSceneProxy__6B_;
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  return;
}

// GetMemoryFootprint @ 14632f1f0

uint __thiscall FFieldSystemSceneProxy::GetMemoryFootprint(FFieldSystemSceneProxy *this)

{
  return *(int *)&this->field_0x104 * 4 + 0x280;
}

// GetTypeHash @ 146330bb0

ulong64 __thiscall FFieldSystemSceneProxy::GetTypeHash(FFieldSystemSceneProxy *this)

{
  return 0x1551aa9c8;
}

