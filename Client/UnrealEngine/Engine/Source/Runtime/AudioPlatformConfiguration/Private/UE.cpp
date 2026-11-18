// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioPlatformConfiguration
// Functions: 4

// Construct<FPlatformRuntimeAudioCompressionOverrides> @ 144539960

void __cdecl
UE::CoreUObject::Private::Construct<FPlatformRuntimeAudioCompressionOverrides>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0x40a00000;
  return;
}

// ConstructForTests<FPlatformRuntimeAudioCompressionOverrides> @ 144539980

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FPlatformRuntimeAudioCompressionOverrides>
          (void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 4) = 0x40a00000;
  return;
}

// Destruct<FPlatformRuntimeAudioCompressionOverrides> @ 1445399a0

void __cdecl
UE::CoreUObject::Private::Destruct<FPlatformRuntimeAudioCompressionOverrides>(void *param_1)

{
  return;
}

// Copy<FPlatformRuntimeAudioCompressionOverrides> @ 1445399b0

bool __cdecl
UE::CoreUObject::Private::Copy<FPlatformRuntimeAudioCompressionOverrides>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

