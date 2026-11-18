// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticStruct @ 148676ee0

UScriptStruct * __cdecl FSoundConcurrencySettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSoundConcurrencySettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSoundConcurrencySettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSoundConcurrencySettings,(UObject *)pUVar1,
                         L"SoundConcurrencySettings");
  }
  return Z_Registration_Info_UScriptStruct_FSoundConcurrencySettings.OuterSingleton;
}

// FSoundConcurrencySettings @ 148695520

FSoundConcurrencySettings * __thiscall
FSoundConcurrencySettings::FSoundConcurrencySettings(FSoundConcurrencySettings *this)

{
  undefined1 *puVar1;
  
  this->bLimitToOwner = '\0';
  this->bEnableMaxCountPlatformScaling = '\0';
  this->bVolumeScaleCanRelease = '\0';
  this->RetriggerTime = 0.0;
  this->MaxCount = 0x10;
  (this->ResolutionRule).Value = '\x03';
  (this->PlatformMaxCount).Default = 0x10;
  this->VolumeScale = 1.0;
  this->VolumeScaleMode = Default;
  this->VolumeScaleAttackTime = 0.01;
  this->VolumeScaleReleaseTime = 0.5;
  this->VoiceStealReleaseTime = 0.0;
  return this;
}

// GetMaxCount @ 1486c12f0

int __thiscall FSoundConcurrencySettings::GetMaxCount(FSoundConcurrencySettings *this)

{
  int iVar1;
  int iVar2;
  
  if (this->bEnableMaxCountPlatformScaling != '\0') {
    iVar1 = (this->PlatformMaxCount).Default;
    iVar2 = 0x10;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
    return iVar2;
  }
  iVar1 = 0x10;
  if (0 < this->MaxCount) {
    iVar1 = this->MaxCount;
  }
  return iVar1;
}

// GetVolumeScale @ 1486c9ab0

float __thiscall FSoundConcurrencySettings::GetVolumeScale(FSoundConcurrencySettings *this)

{
  float fVar1;
  
  fVar1 = this->VolumeScale;
  if (__real_3f800000 <= this->VolumeScale) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}

// IsEvictionSupported @ 1486d1010

bool __thiscall FSoundConcurrencySettings::IsEvictionSupported(FSoundConcurrencySettings *this)

{
  switch((this->ResolutionRule).Value) {
  default:
    return true;
  case '\x04':
  case '\x05':
  case '\x06':
    return false;
  }
}

// SetMaxCount @ 1486ee920

bool __thiscall FSoundConcurrencySettings::SetMaxCount(FSoundConcurrencySettings *this,int param_1)

{
  if ((0 < param_1) && (this->bEnableMaxCountPlatformScaling == '\0')) {
    this->MaxCount = param_1;
    return true;
  }
  return false;
}

