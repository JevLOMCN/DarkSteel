// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FInitBodySpawnParams @ 1481c75b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FInitBodySpawnParams * __thiscall
FInitBodySpawnParams::FInitBodySpawnParams(FInitBodySpawnParams *this,UPrimitiveComponent *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if ((param_1 == (UPrimitiveComponent *)0x0) ||
     ((param_1->field_0x1ab != '\x02' && (param_1->bStaticWhenNotMoveable != '\0')))) {
    this->bStaticPhysics = true;
    if (param_1 == (UPrimitiveComponent *)0x0) goto LAB_1481c761d;
  }
  else {
    this->bStaticPhysics = false;
  }
  pUVar2 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    this->bPhysicsTypeDeterminesSimulation = true;
    return this;
  }
LAB_1481c761d:
  this->bPhysicsTypeDeterminesSimulation = false;
  return this;
}

// FInitBodySpawnParams @ 1481c7640

FInitBodySpawnParams * __thiscall
FInitBodySpawnParams::FInitBodySpawnParams(FInitBodySpawnParams *this,bool param_1,bool param_2)

{
  this->bStaticPhysics = param_1;
  this->bPhysicsTypeDeterminesSimulation = param_2;
  return this;
}

