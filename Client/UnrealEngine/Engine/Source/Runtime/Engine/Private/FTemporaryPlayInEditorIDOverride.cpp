// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FTemporaryPlayInEditorIDOverride @ 148b1df10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTemporaryPlayInEditorIDOverride * __thiscall
FTemporaryPlayInEditorIDOverride::FTemporaryPlayInEditorIDOverride
          (FTemporaryPlayInEditorIDOverride *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::GetPlayInEditorID();
  this->PreviousID = iVar1;
  iVar1 = UE::GetPlayInEditorID();
  if (iVar1 != param_1) {
    UE::SetPlayInEditorID(param_1);
    UEngine::GetWorldContextFromPIEInstance(GEngine,param_1);
  }
  return this;
}

// ~FTemporaryPlayInEditorIDOverride @ 148b1edc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTemporaryPlayInEditorIDOverride::~FTemporaryPlayInEditorIDOverride
          (FTemporaryPlayInEditorIDOverride *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = this->PreviousID;
  iVar2 = UE::GetPlayInEditorID();
  if (iVar2 != iVar1) {
    UE::SetPlayInEditorID(iVar1);
    UEngine::GetWorldContextFromPIEInstance(GEngine,iVar1);
    return;
  }
  return;
}

// SetID @ 148b76180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTemporaryPlayInEditorIDOverride::SetID(FTemporaryPlayInEditorIDOverride *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::GetPlayInEditorID();
  if (iVar1 != param_1) {
    UE::SetPlayInEditorID(param_1);
    UEngine::GetWorldContextFromPIEInstance(GEngine,param_1);
    return;
  }
  return;
}

