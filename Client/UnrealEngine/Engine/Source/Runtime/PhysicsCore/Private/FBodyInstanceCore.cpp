// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 3

// StaticStruct @ 1441347c0

UScriptStruct * __cdecl FBodyInstanceCore::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBodyInstanceCore.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsCore();
    Z_Registration_Info_UScriptStruct_FBodyInstanceCore.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBodyInstanceCore,(UObject *)pUVar1,
                         L"BodyInstanceCore");
  }
  return Z_Registration_Info_UScriptStruct_FBodyInstanceCore.OuterSingleton;
}

// FBodyInstanceCore @ 14419ff10

FBodyInstanceCore * __thiscall FBodyInstanceCore::FBodyInstanceCore(FBodyInstanceCore *this)

{
  undefined1 *puVar1;
  
  puVar1 = &this->field_0x8;
  this->bSimulatePhysics = '\0';
  this->bGenerateWakeEvents = '\0';
  this->bStartAwake = '\x01';
  this->bAutoWeld = '\0';
  this->bGyroscopicTorqueEnabled = '\0';
  this->bUpdateKinematicFromSimulation = '\0';
  this->bEnableGravity = '\x01';
  this->bOverrideMass = '\0';
  (this->BodySetup).WeakPtr = (FWeakObjectPtr)0x0;
  this->bUpdateMassWhenScaleChanges = UseDeprecatedBehaviorUpdateMassScaleChanges == 0;
  this->bDirtyMassProps = '\0';
  return this;
}

// ShouldInstanceSimulatingPhysics @ 1441ba140

bool __thiscall FBodyInstanceCore::ShouldInstanceSimulatingPhysics(FBodyInstanceCore *this)

{
  bool bVar1;
  UObject *pUVar2;
  UPhysicsSettingsCore *pUVar3;
  uchar uVar4;
  
  if (this->bSimulatePhysics != 0) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this);
      pUVar3 = UPhysicsSettingsCore::Get();
      uVar4 = (pUVar3->DefaultShapeComplexity).Value;
      if (pUVar2[1].field_0x9 != '\0') {
        uVar4 = pUVar2[1].field_0x9;
      }
      if (uVar4 != '\x03') {
        return true;
      }
    }
  }
  return false;
}

