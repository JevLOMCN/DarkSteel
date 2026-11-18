// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// GetObject @ 1460ce270

UObject * __thiscall UE::MovieScene::FObjectComponent::GetObject(FObjectComponent *this)

{
  UObject *pUVar1;
  FWeakObjectPtr local_res8 [4];
  
  local_res8[0].ObjectIndex = (this->ObjectKey).ObjectIndex;
  if ((local_res8[0].ObjectIndex == 0) && ((this->ObjectKey).ObjectSerialNumber == 0)) {
    return (this->ObjectPtr).field0_0x0.DebugPtr;
  }
  local_res8[0].ObjectSerialNumber = (this->ObjectKey).ObjectSerialNumber;
  pUVar1 = FWeakObjectPtr::Get(local_res8);
  return pUVar1;
}

// IsStrongReference @ 1460d9350

bool __thiscall UE::MovieScene::FObjectComponent::IsStrongReference(FObjectComponent *this)

{
  if (((this->ObjectKey).ObjectIndex == 0) && ((this->ObjectKey).ObjectSerialNumber == 0)) {
    return true;
  }
  return false;
}

