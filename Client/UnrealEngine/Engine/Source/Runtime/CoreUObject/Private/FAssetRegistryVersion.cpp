// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// SerializeVersion @ 141ebbf80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FAssetRegistryVersion::SerializeVersion(FArchive *param_1,Type *param_2)

{
  longlong *plVar1;
  FName *pFVar2;
  Type local_res8 [2];
  FName local_res18 [2];
  FGuid local_18;
  
  local_18 = GUID;
  if ((param_1->field_0x28 & 1) != 0) {
    *param_2 = PreVersioning;
  }
  ::operator<<(param_1,&local_18);
  if (((param_1->field_0x29 & 2) == 0) &&
     (((local_18.A == 0x717f9ee7 && local_18.B == 0xe9b0493a) && local_18.D == 0x1b388107) &&
      local_18.C == 0x88b39132)) {
    plVar1 = *(longlong **)&param_1->field_0x8;
    local_res8[0] = *param_2;
    if ((Type *)plVar1[1] < (Type *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(Type *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    *param_2 = local_res8[0];
    pFVar2 = ::FName::FName(local_res18,L"AssetRegistry");
    FArchiveState::SetCustomVersion((FArchiveState *)param_1,&local_18,local_res8[0],*pFVar2);
    return (bool)((byte)~param_1->field_0x29 >> 1 & 1);
  }
  return false;
}

