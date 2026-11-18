// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147b9bb20

UScriptStruct * __cdecl FActivateDevicePropertyParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FActivateDevicePropertyParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FActivateDevicePropertyParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FActivateDevicePropertyParams,(UObject *)pUVar1,
                         L"ActivateDevicePropertyParams");
  }
  return Z_Registration_Info_UScriptStruct_FActivateDevicePropertyParams.OuterSingleton;
}

// FActivateDevicePropertyParams @ 147bb8450

FActivateDevicePropertyParams * __thiscall
FActivateDevicePropertyParams::FActivateDevicePropertyParams(FActivateDevicePropertyParams *this)

{
  undefined1 *puVar1;
  FPlatformUserId FVar2;
  
  FVar2.InternalId = FSlateApplicationBase::SlateAppPrimaryPlatformUser.InternalId;
  this->bLooping = '\0';
  this->bPlayWhilePaused = '\0';
  this->bIgnoreTimeDilation = '\0';
  (this->UserId).InternalId = FVar2.InternalId;
  (this->DeviceId).InternalId = -1;
  return this;
}

