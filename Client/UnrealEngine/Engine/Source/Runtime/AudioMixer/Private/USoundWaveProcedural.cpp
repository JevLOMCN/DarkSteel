// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 3

// IsSeekable @ 146561840

bool __thiscall USoundWaveProcedural::IsSeekable(USoundWaveProcedural *this)

{
  return false;
}

// SerializeCuePoints @ 146572700

void __thiscall
USoundWaveProcedural::SerializeCuePoints(USoundWaveProcedural *this,FArchive *param_1,bool param_2)

{
  return;
}

// StaticClass @ 1465778a0

UClass * __cdecl USoundWaveProcedural::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USoundWaveProcedural.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundWaveProcedural",
               &Z_Registration_Info_UClass_USoundWaveProcedural.InnerSingleton,
               StaticRegisterNativesUSoundWaveProcedural,0x470,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<USoundWaveProcedural>,
               InternalVTableHelperCtorCaller<USoundWaveProcedural>,aFStackX_8,
               USoundWave::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundWaveProcedural.InnerSingleton;
}

