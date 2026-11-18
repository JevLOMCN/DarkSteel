// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 2

// GetPresetColor @ 146559ff0

FColor __thiscall USoundEffectSubmixPreset::GetPresetColor(USoundEffectSubmixPreset *this)

{
  undefined4 *in_RDX;
  
  *in_RDX = 0xffa25465;
  return (FColor)SUB84(in_RDX,0);
}

// StaticClass @ 146577880

UClass * __cdecl USoundEffectSubmixPreset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USoundEffectSubmixPreset.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundEffectSubmixPreset",
               &Z_Registration_Info_UClass_USoundEffectSubmixPreset.InnerSingleton,
               StaticRegisterNativesUSoundEffectSubmixPreset,0x68,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundEffectSubmixPreset>,
               InternalVTableHelperCtorCaller<USoundEffectSubmixPreset>,aFStackX_8,
               USoundEffectPreset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundEffectSubmixPreset.InnerSingleton;
}

