// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 3

// FInputRayHit @ 149638c70

FInputRayHit * __thiscall FInputRayHit::FInputRayHit(FInputRayHit *this)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  (this->HitObject).WeakPtr = (FWeakObjectPtr)0x0;
  this->bHit = false;
  this->HitDepth = 3.4028234663852886e+38;
  (this->HitNormal).field0_0x0._s_0.X = 0.0;
  (this->HitNormal).field0_0x0._s_0.Y = 0.0;
  (this->HitNormal).field0_0x0._s_0.Z = 1.0;
  this->bHasHitNormal = false;
  this->HitIdentifier = 0;
  this->HitOwner = (void *)0x0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  (this->HitObject).WeakPtr = local_res8;
  return this;
}

// StaticStruct @ 14966d4f0

UScriptStruct * __cdecl FInputRayHit::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInputRayHit.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InteractiveToolsFramework();
    Z_Registration_Info_UScriptStruct_FInputRayHit.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInputRayHit,(UObject *)pUVar1,L"InputRayHit");
  }
  return Z_Registration_Info_UScriptStruct_FInputRayHit.OuterSingleton;
}

// FInputRayHit @ 149682b80

FInputRayHit * __thiscall FInputRayHit::FInputRayHit(FInputRayHit *this,double param_1)

{
  FWeakObjectPtr local_res8;
  undefined8 local_res10 [3];
  
  (this->HitObject).WeakPtr = (FWeakObjectPtr)0x0;
  this->HitDepth = param_1;
  this->bHit = true;
  (this->HitNormal).field0_0x0._s_0.X = 0.0;
  (this->HitNormal).field0_0x0._s_0.Y = 0.0;
  (this->HitNormal).field0_0x0._s_0.Z = 1.0;
  this->bHasHitNormal = false;
  this->HitIdentifier = 0;
  this->HitOwner = (void *)0x0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  (this->HitObject).WeakPtr = local_res8;
  return this;
}

