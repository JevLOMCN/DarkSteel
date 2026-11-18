// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 2

// GetLocalUserNumFromPlatformUserId @ 14ec007d0

int __thiscall
IOnlineIdentity::GetLocalUserNumFromPlatformUserId(IOnlineIdentity *this,FPlatformUserId param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FGenericPlatformMisc::GetUserIndexForPlatformUser(param_1);
  uVar2 = 0xffffffff;
  if (uVar1 < 4) {
    uVar2 = uVar1;
  }
  return uVar2;
}

// GetPlatformUserIdFromLocalUserNum @ 14ec02820

FPlatformUserId __thiscall
IOnlineIdentity::GetPlatformUserIdFromLocalUserNum(IOnlineIdentity *this,int param_1)

{
  undefined4 in_register_00000014;
  uint in_R8D;
  
  if (in_R8D < 4) {
    FGenericPlatformMisc::GetPlatformUserForUserIndex(param_1);
    return (FPlatformUserId)param_1;
  }
  *(undefined4 *)CONCAT44(in_register_00000014,param_1) = 0xffffffff;
  return (FPlatformUserId)param_1;
}

