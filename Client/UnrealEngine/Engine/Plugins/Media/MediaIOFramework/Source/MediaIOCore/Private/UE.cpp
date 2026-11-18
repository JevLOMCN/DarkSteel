// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 61

// Construct<FMediaIODevice> @ 14d77b570

void __cdecl UE::CoreUObject::Private::Construct<FMediaIODevice>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FMediaIODevice> @ 14d77b590

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMediaIODevice>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FMediaIODevice> @ 14d77b5b0

void __cdecl UE::CoreUObject::Private::Destruct<FMediaIODevice>(void *param_1)

{
  return;
}

// Copy<FMediaIODevice> @ 14d77b5c0

bool __cdecl UE::CoreUObject::Private::Copy<FMediaIODevice>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMediaIOAutoDetectableTimecodeFormat_Backup> @ 14d77bbe0

void __cdecl
UE::CoreUObject::Private::Construct<FMediaIOAutoDetectableTimecodeFormat_Backup>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FMediaIOAutoDetectableTimecodeFormat_Backup> @ 14d77bbf0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMediaIOAutoDetectableTimecodeFormat_Backup>
          (void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  return;
}

// Destruct<FMediaIOAutoDetectableTimecodeFormat_Backup> @ 14d77bc10

void __cdecl
UE::CoreUObject::Private::Destruct<FMediaIOAutoDetectableTimecodeFormat_Backup>(void *param_1)

{
  return;
}

// Copy<FMediaIOAutoDetectableTimecodeFormat_Backup> @ 14d77bc20

bool __cdecl
UE::CoreUObject::Private::Copy<FMediaIOAutoDetectableTimecodeFormat_Backup>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMediaCaptureOptions> @ 14d77cd70

void __cdecl UE::CoreUObject::Private::Construct<FMediaCaptureOptions>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 2) = 0;
  FOpenColorIOColorConversionSettings::FOpenColorIOColorConversionSettings
            ((FOpenColorIOColorConversionSettings *)((longlong)param_1 + 8));
  ((TIntPoint<int>_u_0 *)((longlong)param_1 + 0xa8))->_s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0x10100;
  *(undefined2 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xbc) = 5;
  return;
}

// ConstructForTests<FMediaCaptureOptions> @ 14d77cde0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMediaCaptureOptions>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 2) = 0;
  FOpenColorIOColorConversionSettings::FOpenColorIOColorConversionSettings
            ((FOpenColorIOColorConversionSettings *)((longlong)param_1 + 8));
  ((TIntPoint<int>_u_0 *)((longlong)param_1 + 0xa8))->_s_0 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0x10100;
  *(undefined2 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xbc) = 5;
  return;
}

// Destruct<FMediaCaptureOptions> @ 14d77ce50

void __cdecl UE::CoreUObject::Private::Destruct<FMediaCaptureOptions>(void *param_1)

{
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            ((FOpenColorIOColorConversionSettings *)((longlong)param_1 + 8));
  return;
}

// PostSerialize<FMediaCaptureOptions> @ 14d77cf30

void __cdecl
UE::CoreUObject::Private::PostSerialize<FMediaCaptureOptions>(FArchive *param_1,void *param_2)

{
  return;
}

// Copy<FMediaCaptureOptions> @ 14d77cf80

bool __cdecl
UE::CoreUObject::Private::Copy<FMediaCaptureOptions>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_1 + lVar1 + 1);
      *(undefined1 *)((longlong)param_1 + 2) = *(undefined1 *)((longlong)param_1 + lVar1 + 2);
      FOpenColorIOColorConversionSettings::operator=
                ((FOpenColorIOColorConversionSettings *)((longlong)param_1 + 8),
                 (FOpenColorIOColorConversionSettings *)((longlong)param_1 + lVar1 + 8));
      *(undefined8 *)((longlong)param_1 + 0xa8) = *(undefined8 *)((longlong)param_1 + lVar1 + 0xa8);
      *(undefined1 *)((longlong)param_1 + 0xb0) = *(undefined1 *)((longlong)param_1 + lVar1 + 0xb0);
      *(undefined1 *)((longlong)param_1 + 0xb1) = *(undefined1 *)((longlong)param_1 + lVar1 + 0xb1);
      *(undefined1 *)((longlong)param_1 + 0xb2) = *(undefined1 *)((longlong)param_1 + lVar1 + 0xb2);
      *(undefined1 *)((longlong)param_1 + 0xb3) = *(undefined1 *)((longlong)param_1 + lVar1 + 0xb3);
      *(undefined1 *)((longlong)param_1 + 0xb4) = *(undefined1 *)((longlong)param_1 + lVar1 + 0xb4);
      *(undefined1 *)((longlong)param_1 + 0xb5) = *(undefined1 *)((longlong)param_1 + lVar1 + 0xb5);
      *(undefined4 *)((longlong)param_1 + 0xb8) = *(undefined4 *)((longlong)param_1 + lVar1 + 0xb8);
      *(undefined1 *)((longlong)param_1 + 0xbc) = *(undefined1 *)((longlong)param_1 + lVar1 + 0xbc);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0xc0);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMediaIOVideoTimecodeConfiguration> @ 14d77da70

void __cdecl UE::CoreUObject::Private::Construct<FMediaIOVideoTimecodeConfiguration>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(FName *)((longlong)param_1 + 0x10) = MediaIOCoreDefinitions::NAME_Protocol;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x1e;
  *(undefined4 *)((longlong)param_1 + 0x28) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x780;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0x438;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0xff;
  return;
}

// ConstructForTests<FMediaIOVideoTimecodeConfiguration> @ 14d77dad0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMediaIOVideoTimecodeConfiguration>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(FName *)((longlong)param_1 + 0x10) = MediaIOCoreDefinitions::NAME_Protocol;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x1e;
  *(undefined4 *)((longlong)param_1 + 0x28) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x780;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x438;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0xff;
  return;
}

// Destruct<FMediaIOVideoTimecodeConfiguration> @ 14d77db30

void __cdecl UE::CoreUObject::Private::Destruct<FMediaIOVideoTimecodeConfiguration>(void *param_1)

{
  return;
}

// Copy<FMediaIOVideoTimecodeConfiguration> @ 14d77db40

bool __cdecl
UE::CoreUObject::Private::Copy<FMediaIOVideoTimecodeConfiguration>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    lVar9 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar9 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar9 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar9 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      param_1 = (void *)((longlong)param_1 + 0x40);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMediaIOOutputConfiguration> @ 14d77db90

void __cdecl UE::CoreUObject::Private::Construct<FMediaIOOutputConfiguration>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(FName *)((longlong)param_1 + 0x10) = MediaIOCoreDefinitions::NAME_Protocol;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x1e;
  *(undefined4 *)((longlong)param_1 + 0x28) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x780;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x438;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined1 *)param_1 = 0;
  return;
}

// ConstructForTests<FMediaIOOutputConfiguration> @ 14d77dc00

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMediaIOOutputConfiguration>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(FName *)((longlong)param_1 + 0x10) = MediaIOCoreDefinitions::NAME_Protocol;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x1e;
  *(undefined4 *)((longlong)param_1 + 0x28) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x780;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x438;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined1 *)param_1 = 0;
  return;
}

// Destruct<FMediaIOOutputConfiguration> @ 14d77dc70

void __cdecl UE::CoreUObject::Private::Destruct<FMediaIOOutputConfiguration>(void *param_1)

{
  return;
}

// Copy<FMediaIOOutputConfiguration> @ 14d77e0c0

bool __cdecl
UE::CoreUObject::Private::Copy<FMediaIOOutputConfiguration>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  
  if (param_3 != 0) {
    lVar11 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar11 + 0x40 + (longlong)param_1);
      uVar3 = *(undefined4 *)(lVar11 + 0x48 + (longlong)param_1);
      uVar4 = ((undefined8 *)(lVar11 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar11 + 0x10 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar11 + 0x20 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar11 + 0x30 + (longlong)param_1);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar11 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar10;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x48) = uVar3;
      param_1 = (void *)((longlong)param_1 + 0x4c);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMediaIOInputConfiguration> @ 14d77e3e0

void __cdecl UE::CoreUObject::Private::Construct<FMediaIOInputConfiguration>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(FName *)((longlong)param_1 + 0x10) = MediaIOCoreDefinitions::NAME_Protocol;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x1e;
  *(undefined4 *)((longlong)param_1 + 0x28) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x780;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x438;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  *(undefined1 *)param_1 = 1;
  return;
}

// ConstructForTests<FMediaIOInputConfiguration> @ 14d77e440

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMediaIOInputConfiguration>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(FName *)((longlong)param_1 + 0x10) = MediaIOCoreDefinitions::NAME_Protocol;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x1e;
  *(undefined4 *)((longlong)param_1 + 0x28) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x780;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x438;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0xffffffff;
  *(undefined1 *)param_1 = 1;
  return;
}

// Destruct<FMediaIOInputConfiguration> @ 14d77e4a0

void __cdecl UE::CoreUObject::Private::Destruct<FMediaIOInputConfiguration>(void *param_1)

{
  return;
}

// Copy<FMediaIOInputConfiguration> @ 14d77e4f0

bool __cdecl
UE::CoreUObject::Private::Copy<FMediaIOInputConfiguration>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  
  if (param_3 != 0) {
    lVar10 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined4 *)(lVar10 + 0x40 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar10 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar10 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      puVar1 = (undefined8 *)(lVar10 + 0x20 + (longlong)param_1);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      puVar1 = (undefined8 *)(lVar10 + 0x30 + (longlong)param_1);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar10 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar9;
      *(undefined4 *)((longlong)param_1 + 0x40) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x44);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMediaIOConfiguration> @ 14d77e950

void __cdecl UE::CoreUObject::Private::Construct<FMediaIOConfiguration>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(FName *)((longlong)param_1 + 0x10) = MediaIOCoreDefinitions::NAME_Protocol;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x1e;
  *(undefined4 *)((longlong)param_1 + 0x28) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x780;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x438;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  return;
}

// ConstructForTests<FMediaIOConfiguration> @ 14d77e9b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMediaIOConfiguration>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  *(FName *)((longlong)param_1 + 0x10) = MediaIOCoreDefinitions::NAME_Protocol;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x1e;
  *(undefined4 *)((longlong)param_1 + 0x28) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x780;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x438;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  return;
}

// Destruct<FMediaIOConfiguration> @ 14d77ea10

void __cdecl UE::CoreUObject::Private::Destruct<FMediaIOConfiguration>(void *param_1)

{
  return;
}

// Copy<FMediaIOConfiguration> @ 14d77ea20

bool __cdecl
UE::CoreUObject::Private::Copy<FMediaIOConfiguration>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    lVar9 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar9 + 0x30 + (longlong)param_1);
      uVar3 = *(undefined4 *)(lVar9 + 0x38 + (longlong)param_1);
      uVar4 = ((undefined8 *)(lVar9 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar9 + 0x10 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x20 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar9 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x38) = uVar3;
      param_1 = (void *)((longlong)param_1 + 0x3c);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMediaIOMode> @ 14d77ecc0

void __cdecl UE::CoreUObject::Private::Construct<FMediaIOMode>(void *param_1)

{
  *(undefined4 *)param_1 = 0x1e;
  *(undefined4 *)((longlong)param_1 + 4) = 1;
  *(undefined4 *)((longlong)param_1 + 8) = 0x780;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x438;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  return;
}

// ConstructForTests<FMediaIOMode> @ 14d77ecf0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMediaIOMode>(void *param_1)

{
  *(undefined4 *)param_1 = 0x1e;
  *(undefined4 *)((longlong)param_1 + 4) = 1;
  *(undefined4 *)((longlong)param_1 + 8) = 0x780;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x438;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  return;
}

// Destruct<FMediaIOMode> @ 14d77ed20

void __cdecl UE::CoreUObject::Private::Destruct<FMediaIOMode>(void *param_1)

{
  return;
}

// Copy<FMediaIOMode> @ 14d77ed70

bool __cdecl UE::CoreUObject::Private::Copy<FMediaIOMode>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMediaIOConnection> @ 14d77edb0

void __cdecl UE::CoreUObject::Private::Construct<FMediaIOConnection>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(FName *)((longlong)param_1 + 0xc) = MediaIOCoreDefinitions::NAME_Protocol;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  return;
}

// ConstructForTests<FMediaIOConnection> @ 14d77ede0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMediaIOConnection>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  *(FName *)((longlong)param_1 + 0xc) = MediaIOCoreDefinitions::NAME_Protocol;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  return;
}

// Destruct<FMediaIOConnection> @ 14d77ee10

void __cdecl UE::CoreUObject::Private::Destruct<FMediaIOConnection>(void *param_1)

{
  return;
}

// Copy<FMediaIOConnection> @ 14d77ee20

bool __cdecl
UE::CoreUObject::Private::Copy<FMediaIOConnection>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar6 + (longlong)param_1);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      param_1 = (void *)((longlong)param_1 + 0x20);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// DeleterFunc<UE::MediaCaptureData::FFrameManager> @ 14d782870

void __cdecl
UE::Core::Private::PimplPtr::DeleterFunc<UE::MediaCaptureData::FFrameManager>(void *param_1)

{
  MediaCaptureData::FFrameManager::~FFrameManager((FFrameManager *)((longlong)param_1 + 0x10));
  ::operator_delete(param_1,0x70);
  return;
}

// DeleterFunc<UE::MediaCapture::FRenderPipeline> @ 14d7828a0

void __cdecl
UE::Core::Private::PimplPtr::DeleterFunc<UE::MediaCapture::FRenderPipeline>(void *param_1)

{
  DestructItems<UE::MediaCapture::FRenderPass,int>
            (*(FRenderPass **)((longlong)param_1 + 0x18),*(int *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  ::operator_delete(param_1,0x30);
  return;
}

// DeleterFunc<UE::MediaCaptureData::FSyncPointWatcher> @ 14d7828e0

void __cdecl
UE::Core::Private::PimplPtr::DeleterFunc<UE::MediaCaptureData::FSyncPointWatcher>(void *param_1)

{
  MediaCaptureData::FSyncPointWatcher::~FSyncPointWatcher
            ((FSyncPointWatcher *)((longlong)param_1 + 0x10));
  ::operator_delete(param_1,0x60);
  return;
}

// DereferenceIfNecessary<FMediaCaptureSceneViewExtension,FMediaCaptureSceneViewExtension_*_&> @ 14d782910

FMediaCaptureSceneViewExtension * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FMediaCaptureSceneViewExtension,FMediaCaptureSceneViewExtension_*_&>
          (FMediaCaptureSceneViewExtension **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FMediaIOCorePlayerBase,FMediaIOCorePlayerBase_*_&> @ 14d782930

FMediaIOCorePlayerBase * __cdecl
UE::Core::Private::DereferenceIfNecessary<FMediaIOCorePlayerBase,FMediaIOCorePlayerBase_*_&>
          (FMediaIOCorePlayerBase **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UMediaCapture,UMediaCapture_*_&> @ 14d782950

UMediaCapture * __cdecl
UE::Core::Private::DereferenceIfNecessary<UMediaCapture,UMediaCapture_*_&>(UMediaCapture **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UMediaIOCoreSubsystem,UMediaIOCoreSubsystem_*_&> @ 14d782970

UMediaIOCoreSubsystem * __cdecl
UE::Core::Private::DereferenceIfNecessary<UMediaIOCoreSubsystem,UMediaIOCoreSubsystem_*_&>
          (UMediaIOCoreSubsystem **param_1)

{
  return *param_1;
}

// ReallocForCopy<2,TAlignedHeapAllocator<4096>::ForAnyElementType> @ 14d788340

void __cdecl
UE::Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<4096>::ForAnyElementType>
          (uint param_1,uint param_2,int param_3,int param_4,ForAnyElementType *param_5,int param_6,
          int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar4,0x1000);
    iVar1 = (int)(uVar2 / uVar4);
    if (iVar1 < param_3) {
      iVar1 = 0x7fffffff;
    }
  }
  if ((param_4 < iVar1) &&
     ((param_4 = iVar1, param_5->Data != (FScriptContainerElement *)0x0 || (iVar1 != 0)))) {
    if ((iVar1 < 0) || (0x7ffffffe < uVar4 - 1)) {
                    /* WARNING: Subroutine does not return */
      OnInvalidAlignedHeapAllocatorNum(iVar1,uVar4);
    }
    pFVar3 = FMemory::Realloc(param_5->Data,(longlong)iVar1 * uVar4,0x1000);
    param_5->Data = pFVar3;
  }
  *param_7 = param_4;
  return;
}

// ReallocGrow<2,TAlignedHeapAllocator<4096>::ForAnyElementType> @ 14d7883f0

int __cdecl
UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<4096>::ForAnyElementType>
          (uint param_1,uint param_2,int param_3,ForAnyElementType *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  FScriptContainerElement *pFVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar2 = *param_5;
  iVar7 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if ((uint)(iVar7 - iVar2) < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar8 = (ulonglong)param_1;
    uVar6 = (ulonglong)(int)uVar1;
    if (iVar7 == 0) {
      uVar3 = 4;
      if (4 < uVar6) {
        uVar3 = uVar6;
      }
    }
    else {
      uVar3 = (uVar6 * 3 >> 3) + 0x10 + uVar6;
    }
    uVar4 = FMemory::QuantizeSize(uVar8 * uVar3,0x1000);
    iVar7 = (int)(uVar4 / uVar8);
    if (iVar7 < (int)uVar1) {
      iVar7 = 0x7fffffff;
    }
    if ((param_4->Data != (FScriptContainerElement *)0x0) || (iVar7 != 0)) {
      if ((iVar7 < 0) || (0x7ffffffe < uVar8 - 1)) {
                    /* WARNING: Subroutine does not return */
        OnInvalidAlignedHeapAllocatorNum(iVar7,uVar8);
      }
      pFVar5 = FMemory::Realloc(param_4->Data,(longlong)iVar7 * uVar8,0x1000);
      param_4->Data = pFVar5;
    }
    *param_6 = iVar7;
  }
  return iVar2;
}

// ReallocShrink<2,TAlignedHeapAllocator<4096>::ForAnyElementType> @ 14d7884f0

void __cdecl
UE::Core::Private::ReallocShrink<2,TAlignedHeapAllocator<4096>::ForAnyElementType>
          (uint param_1,uint param_2,ForAnyElementType *param_3,int param_4,int *param_5)

{
  int iVar1;
  ulong64 uVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if (((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
     ((0x40 < iVar1 - param_4 || (param_4 == 0)))) {
    if (0 < param_4) {
      uVar2 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0x1000);
      param_4 = (int)(uVar2 / uVar4);
    }
    if (param_4 != iVar1) {
      *param_5 = param_4;
      if ((param_3->Data != (FScriptContainerElement *)0x0) || (param_4 != 0)) {
        if ((param_4 < 0) || (0x7ffffffe < uVar4 - 1)) {
                    /* WARNING: Subroutine does not return */
          OnInvalidAlignedHeapAllocatorNum(param_4,uVar4);
        }
        pFVar3 = FMemory::Realloc(param_3->Data,(longlong)param_4 * uVar4,0x1000);
        param_3->Data = pFVar3;
      }
    }
  }
  return;
}

// ReallocTo<2,TAlignedHeapAllocator<4096>::ForAnyElementType> @ 14d7885c0

void __cdecl
UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<4096>::ForAnyElementType>
          (uint param_1,uint param_2,int param_3,ForAnyElementType *param_4,int param_5,int *param_6
          )

{
  int iVar1;
  ulong64 uVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar4,0x1000);
    iVar1 = (int)(uVar2 / uVar4);
    if (iVar1 < param_3) {
      iVar1 = 0x7fffffff;
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    if ((param_4->Data != (FScriptContainerElement *)0x0) || (iVar1 != 0)) {
      if ((iVar1 < 0) || (0x7ffffffe < uVar4 - 1)) {
                    /* WARNING: Subroutine does not return */
        OnInvalidAlignedHeapAllocatorNum(iVar1,uVar4);
      }
      pFVar3 = FMemory::Realloc(param_4->Data,(longlong)iVar1 * uVar4,0x1000);
      param_4->Data = pFVar3;
    }
  }
  return;
}

// AddResamplePass @ 14d7964e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
UE::MediaCapture::Resample::AddResamplePass
          (FRDGBuilder *param_1,FScreenPassTexture *param_2,FRDGTexture *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  FRDGTexture *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FParameters *pFVar8;
  FGlobalShaderMap *this;
  FShaderType *pFVar9;
  FName this_00;
  FRDGEventName *pFVar10;
  undefined1 local_res10 [8];
  TIntRect<int>_u_0 local_a0;
  undefined1 local_90;
  int local_80;
  int iStack_7c;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_78;
  FString local_68;
  TShaderRefBase<UE::MediaCapture::Resample::FMediaCaptureResamplePS,FShaderMapPointerTable>
  local_58;
  FRDGEventName local_48;
  
  if ((param_2->Texture == (FRDGTexture *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputTexture.Texture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureRenderPass.cpp"
                         ,0x44,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar4 = param_2->Texture;
  local_80 = *(int *)&(pFVar4->Desc).field_0x24;
  iStack_7c = *(int *)&(pFVar4->Desc).field_0x28;
  if (pFVar4 != (FRDGTexture *)0x0) {
    iVar2 = (pFVar4->VisualizeTextureExtent).field0_0x0._s_0.X;
    iVar7 = local_80;
    if (local_80 < iVar2) {
      iVar7 = iVar2;
    }
    (pFVar4->VisualizeTextureExtent).field0_0x0._s_0.X = iVar7;
    iVar2 = (pFVar4->VisualizeTextureExtent).field0_0x0._s_0.Y;
    iVar7 = iStack_7c;
    if (iStack_7c < iVar2) {
      iVar7 = iVar2;
    }
    (pFVar4->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar7;
  }
  puVar1 = &(param_3->Desc).field_0x24;
  iVar2 = *(int *)puVar1;
  iVar7 = *(int *)&(param_3->Desc).field_0x28;
  local_a0._s_0.Max.field0_0x0 = (TIntPoint<int>)*(undefined8 *)puVar1;
  local_a0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  iVar3 = (param_3->VisualizeTextureExtent).field0_0x0._s_0.X;
  if (iVar2 < iVar3) {
    iVar2 = iVar3;
  }
  iVar3 = (param_3->VisualizeTextureExtent).field0_0x0._s_0.Y;
  (param_3->VisualizeTextureExtent).field0_0x0._s_0.X = iVar2;
  if (iVar7 < iVar3) {
    iVar7 = iVar3;
  }
  local_90 = 0;
  (param_3->VisualizeTextureExtent).field0_0x0._s_0.Y = iVar7;
  pFVar8 = FMediaCaptureResamplePS::AllocateAndSetParameters(param_1,param_2->Texture,param_3);
  this = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar9 = (FShaderType *)FMediaCaptureResamplePS::GetStaticType();
  FGlobalShaderMap::GetShader(this,&local_78,pFVar9,0);
  if (local_78.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_00,&local_68);
    FMediaCaptureResamplePS::GetStaticType();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FMediaCaptureResamplePS::GetStaticType();
  local_58.ShaderContent = (FMediaCaptureResamplePS *)local_78.ShaderContent;
  local_58.ShaderMap = local_78.ShaderMap;
  pFVar10 = FRDGEventName::FRDGEventName(&local_48,L"MediaCapture Resample(%s) %dx%d -> %dx%d");
  FPixelShaderUtils::AddFullscreenPass<UE::MediaCapture::Resample::FMediaCaptureResamplePS>
            (param_1,this,pFVar10,&local_58,pFVar8,(TIntRect<int> *)&local_a0._s_0,
             (FRHIBlendState *)0x0,(FRHIRasterizerState *)0x0,(FRHIDepthStencilState *)0x0,0,None);
  if (local_48.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.FormattedEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// CreateBuffer @ 14d79e940

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __cdecl
UE::MediaIOTests::CreateBuffer
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong lVar7;
  uint uVar8;
  FScriptContainerElement local_18 [16];
  
  uVar8 = 0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,0x1fa400,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  do {
    lVar7 = 0x780;
    do {
      local_18[0] = (FScriptContainerElement)0x5;
      if ((uVar8 & 1) != 0) {
        local_18[0] = (FScriptContainerElement)0xa;
      }
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar2 <= local_18) && (local_18 < pFVar2 + *piVar1)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar6;
        }
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      (__return_storage_ptr__->AllocatorInstance).Data[iVar5] = local_18[0];
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar2 <= local_18) && (local_18 < pFVar2 + *piVar1)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar6;
        }
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      (__return_storage_ptr__->AllocatorInstance).Data[iVar5] = local_18[0];
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar2 <= local_18) && (local_18 < pFVar2 + *piVar1)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar6;
        }
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      (__return_storage_ptr__->AllocatorInstance).Data[iVar5] = local_18[0];
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if ((pFVar2 <= local_18) && (local_18 < pFVar2 + *piVar1)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar6;
        }
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      (__return_storage_ptr__->AllocatorInstance).Data[iVar5] = local_18[0];
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    uVar8 = uVar8 + 1;
  } while (uVar8 < 0x438);
  return __return_storage_ptr__;
}

// GetColorConversionResources @ 14d7a9770

FOpenColorIORenderPassResources * __cdecl
UE::MediaCapture::ColorConversion::GetColorConversionResources
          (FOpenColorIORenderPassResources *__return_storage_ptr__,UMediaCapture *param_1)

{
  FOpenColorIOColorConversionSettings *this;
  bool bVar1;
  FOpenColorIORenderPassResources *pFVar2;
  FOpenColorIORenderPassResources local_38;
  
  __return_storage_ptr__->ShaderResource = (FOpenColorIOTransformResource *)0x0;
  (__return_storage_ptr__->TextureResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->TextureResources).ArrayNum = 0;
  (__return_storage_ptr__->TextureResources).ArrayMax = 0;
  (__return_storage_ptr__->TransformName).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TransformName).Data.ArrayNum = 0;
  (__return_storage_ptr__->TransformName).Data.ArrayMax = 0;
  if (param_1 != (UMediaCapture *)0x0) {
    this = &(param_1->DesiredCaptureOptions).ColorConversionSettings;
    bVar1 = FOpenColorIOColorConversionSettings::IsValid(this);
    if (bVar1) {
      pFVar2 = FOpenColorIORendering::GetRenderPassResources(&local_38,this,GMaxRHIFeatureLevel);
      FOpenColorIORenderPassResources::operator=(__return_storage_ptr__,pFVar2);
      if (local_38.TransformName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.TransformName.Data.AllocatorInstance.Data);
      }
      if (local_38.TextureResources.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.TextureResources.AllocatorInstance.Data);
      }
    }
    return __return_storage_ptr__;
  }
  return __return_storage_ptr__;
}

// GetCopyInfo @ 14d7a99d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::MediaCapture::GetCopyInfo
          (FCaptureFrameArgs *param_1,FRHICopyTextureInfo *param_2,TVector2<double> *param_3,
          TVector2<double> *param_4)

{
  EMediaCaptureCroppingType EVar1;
  UMediaCapture *pUVar2;
  FRHITexture *pFVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  
  (param_3->field0_0x0)._s_0.X = 0.0;
  (param_3->field0_0x0)._s_0.Y = 1.0;
  (param_4->field0_0x0)._s_0.X = 0.0;
  (param_4->field0_0x0)._s_0.Y = 1.0;
  iVar7 = (param_1->DesiredSize).field0_0x0._s_0.Y;
  (param_2->Size).field0_0x0._s_0.X = (param_1->DesiredSize).field0_0x0._s_0.X;
  (param_2->Size).field0_0x0._s_0.Y = iVar7;
  (param_2->Size).field0_0x0._s_0.Z = 1;
  pUVar2 = (param_1->MediaCapture).field0_0x0.DebugPtr;
  EVar1 = (pUVar2->DesiredCaptureOptions).Crop;
  if (EVar1 == None) {
    return;
  }
  if (EVar1 == Center) {
    iVar7 = (param_1->DesiredSize).field0_0x0._s_0.Y;
    iVar4 = MediaCaptureData::FCaptureFrameArgs::GetSizeY(param_1);
    if (param_1->RDGResourceToCapture == (FRDGTexture *)0x0) {
      pFVar3 = (param_1->ResourceToCapture).Reference;
      (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3);
      lVar6 = (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3);
      iVar5 = *(int *)(lVar6 + 0x24);
    }
    else {
      iVar5 = *(int *)&(param_1->RDGResourceToCapture->Desc).field_0x24;
    }
    (param_2->SourcePosition).field0_0x0._s_0.X =
         (iVar5 - (param_1->DesiredSize).field0_0x0._s_0.X) / 2;
    (param_2->SourcePosition).field0_0x0._s_0.Y = (iVar4 - iVar7) / 2;
  }
  else {
    if (EVar1 != Custom) goto LAB_14d7a9aaa;
    iVar7 = (pUVar2->DesiredCaptureOptions).CustomCapturePoint.field0_0x0._s_0.Y;
    (param_2->SourcePosition).field0_0x0._s_0.X =
         (pUVar2->DesiredCaptureOptions).CustomCapturePoint.field0_0x0._s_0.X;
    (param_2->SourcePosition).field0_0x0._s_0.Y = iVar7;
  }
  (param_2->SourcePosition).field0_0x0._s_0.Z = 0;
LAB_14d7a9aaa:
  if (param_1->RDGResourceToCapture == (FRDGTexture *)0x0) {
    pFVar3 = (param_1->ResourceToCapture).Reference;
    (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3);
    lVar6 = (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3);
    iVar7 = *(int *)(lVar6 + 0x24);
  }
  else {
    iVar7 = *(int *)&(param_1->RDGResourceToCapture->Desc).field_0x24;
  }
  (param_3->field0_0x0)._s_0.X =
       (double)((float)(param_2->SourcePosition).field0_0x0._s_0.X / (float)iVar7);
  if (param_1->RDGResourceToCapture == (FRDGTexture *)0x0) {
    pFVar3 = (param_1->ResourceToCapture).Reference;
    (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3);
    lVar6 = (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3);
    iVar7 = *(int *)(lVar6 + 0x24);
  }
  else {
    iVar7 = *(int *)&(param_1->RDGResourceToCapture->Desc).field_0x24;
  }
  (param_3->field0_0x0)._s_0.Y =
       (double)((float)((param_2->SourcePosition).field0_0x0._s_0.X +
                       (param_2->Size).field0_0x0._s_0.X) / (float)iVar7);
  if (param_1->RDGResourceToCapture == (FRDGTexture *)0x0) {
    pFVar3 = (param_1->ResourceToCapture).Reference;
    lVar6 = (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3);
    iVar7 = *(int *)(lVar6 + 0x28);
    (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3);
  }
  else {
    iVar7 = *(int *)&(param_1->RDGResourceToCapture->Desc).field_0x28;
  }
  (param_4->field0_0x0)._s_0.X =
       (double)((float)(param_2->SourcePosition).field0_0x0._s_0.Y / (float)iVar7);
  if (param_1->RDGResourceToCapture == (FRDGTexture *)0x0) {
    pFVar3 = (param_1->ResourceToCapture).Reference;
    lVar6 = (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3);
    iVar7 = *(int *)(lVar6 + 0x28);
    (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3);
  }
  else {
    iVar7 = *(int *)&(param_1->RDGResourceToCapture->Desc).field_0x28;
  }
  (param_4->field0_0x0)._s_0.Y =
       (double)((float)((param_2->SourcePosition).field0_0x0._s_0.Y +
                       (param_2->Size).field0_0x0._s_0.Y) / (float)iVar7);
  return;
}

// InitializeColorConversionPassOutputTexture @ 14d7afdb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_> * __cdecl
UE::MediaCapture::InitializeColorConversionPassOutputTexture
          (TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>
           *__return_storage_ptr__,FInitializePassOutputArgs *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_> *pTVar3;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [24];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined2 local_44;
  ForElementType<EPixelFormat> local_40;
  undefined4 local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if ((param_1->InputResource == (FRDGViewableResource *)0x0) ||
     (param_1->InputResource->Type != Texture)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Args.InputResource && Args.InputResource->Type == ERDGViewableResourceType::Texture"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureRenderPass.cpp"
                       ,0x99,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  local_88._16_8_ = 0;
  local_5c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_70 = 1;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_54 = 1;
  local_50 = 1;
  local_4c = 0x10001;
  local_48 = 0x101;
  local_44 = 0xff00;
  local_40.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_30 = 0;
  local_2c = 1;
  FRHITextureDesc::operator=
            ((FRHITextureDesc *)(local_88 + 0x10),(FRHITextureDesc *)(param_1->InputResource + 1));
  local_70 = 1;
  local_88._16_8_ = local_88._16_8_ & 0xfffffffff7fdeffd | 1;
  local_48._1_1_ = 1;
  uStack_6c = FLinearColor::White.field0_0x0._0_4_;
  uStack_68 = FLinearColor::White.field0_0x0._4_8_;
  uStack_60 = FLinearColor::White.field0_0x0._12_4_;
  local_30 = 0;
  if (local_2c != 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
              (1,1,0,&local_40,0,&local_2c);
  }
  AllocatePooledTexture((FRDGTextureDesc *)local_88,(wchar_t *)(local_88 + 0x10));
  __return_storage_ptr__->_padding_ = local_88._0_8_;
  local_88._0_8_ = 0;
  __return_storage_ptr__->TypeIndex = '\0';
  if (local_40.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_40.SecondaryData);
  }
  return __return_storage_ptr__;
}

// InitializeResamplePassOutputTexture @ 14d7b0840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_> * __cdecl
UE::MediaCapture::InitializeResamplePassOutputTexture
          (TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_>
           *__return_storage_ptr__,FInitializePassOutputArgs *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_> *pTVar3;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [24];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined2 local_44;
  ForElementType<EPixelFormat> local_40;
  undefined4 local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  if ((param_1->InputResource == (FRDGViewableResource *)0x0) ||
     (param_1->InputResource->Type != Texture)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Args.InputResource && Args.InputResource->Type == ERDGViewableResourceType::Texture"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureRenderPass.cpp"
                       ,0xa8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TVariant<TRefCountPtr<IPooledRenderTarget>,TRefCountPtr<FRDGPooledBuffer>_> *)
               (*pcVar1)();
      return pTVar3;
    }
  }
  local_88._16_8_ = 0;
  local_5c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_70 = 1;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_54 = 1;
  local_50 = 1;
  local_4c = 0x10001;
  local_48 = 0x101;
  local_44 = 0xff00;
  local_40.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_30 = 0;
  local_2c = 1;
  FRHITextureDesc::operator=
            ((FRHITextureDesc *)(local_88 + 0x10),(FRHITextureDesc *)(param_1->InputResource + 1));
  local_48._1_1_ = 1;
  local_88._16_8_ = local_88._16_8_ & 0xfffffffff7fdeffd | 1;
  local_30 = 0;
  if (local_2c != 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_EPixelFormat>_>
              (1,1,0,&local_40,0,&local_2c);
  }
  local_54 = (param_1->MediaCapture->DesiredSize).field0_0x0._s_0.X;
  local_50 = (param_1->MediaCapture->DesiredSize).field0_0x0._s_0.Y;
  local_88._16_8_ = 0x4020001;
  local_70 = 1;
  local_68 = 0;
  local_60 = 0;
  AllocatePooledTexture((FRDGTextureDesc *)local_88,(wchar_t *)(local_88 + 0x10));
  __return_storage_ptr__->_padding_ = local_88._0_8_;
  local_88._0_8_ = 0;
  __return_storage_ptr__->TypeIndex = '\0';
  if (local_40.SecondaryData != (ForElementType<EPixelFormat>)0x0) {
    FMemory::Free((void *)local_40.SecondaryData);
  }
  return __return_storage_ptr__;
}

// TestBlendDeinterlace @ 14d7bec60

void __cdecl UE::MediaIOTests::TestBlendDeinterlace(FAutomationTestBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  byte *pbVar5;
  undefined1 auVar6 [16];
  FColorFormatArgs local_res10 [4];
  FFrameRate local_res18 [2];
  undefined1 local_148 [8];
  FDelegateAllocation local_140;
  TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_> local_130;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_120;
  TOptional<FTimecode> local_110;
  undefined **local_f0;
  TDelegateBase<FNotThreadSafeDelegateMode> local_e8;
  undefined1 local_d0;
  FVideoFrame local_c8;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  FDelegateAllocation *local_58;
  TDelegateBase<FNotThreadSafeDelegateMode> local_50 [2];
  
  CreateBuffer(&local_120);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = __real_3fe0000000000000;
  local_110.TypedValue._21_2_ = local_50[1]._21_2_;
  local_110.TypedValue._23_1_ = local_50[1]._23_1_;
  local_c8.VideoBuffer = local_120.AllocatorInstance.Data;
  local_c8.BufferSize = local_120.ArrayNum;
  local_c8.FrameRate = local_res18;
  auVar6 = roundpd(auVar6,auVar6,1);
  local_c8.Time.Ticks = (long64)auVar6._0_8_;
  local_c8.Timecode = &local_110;
  local_c8.ColorFormatArgs = local_res10;
  local_res18[0].Numerator = 60000;
  local_res18[0].Denominator = 1;
  local_110.TypedValue.Subframe = 0.0;
  local_110.TypedValue.bDropFrameFormat = false;
  local_110.TypedValue.Hours = 0;
  local_110.TypedValue.Minutes = 0;
  local_110.TypedValue.Seconds = 0;
  local_110.TypedValue.Frames = 0;
  local_110.bIsSet = true;
  local_res10[0].Encoding = Linear;
  local_res10[0].ColorSpaceType = sRGB;
  local_c8.Stride = 0x1e00;
  local_c8.Width = 0x780;
  local_c8.Height = 0x438;
  local_c8.SampleFormat = CharBGRA;
  local_148 = (undefined1  [8])0x0;
  local_140.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_140.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_148,
             (FWriteAccessScope *)&local_70);
  local_58 = &local_140;
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_140);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VFMediaIOCoreTextureSampleBase___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestBlendDeinterlace'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            (local_50,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_148);
  local_f0 = &___7FDeinterlacer_MediaIOCore_UE__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            (&local_e8,local_50);
  local_d0 = 0;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(local_50);
  local_f0 = &___7FBlendDeinterlacer_MediaIOCore_UE__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_148,
             (FWriteAccessScope *)&local_88);
  if ((local_140.DelegateSize != 0) &&
     (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_140.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_140,0,0,0x10);
    local_140.DelegateSize = 0;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (local_140.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_140.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_148);
  MediaIOCore::FBlendDeinterlacer::Deinterlace((FBlendDeinterlacer *)&local_f0,&local_130,&local_c8)
  ;
  FAutomationTestBase::TestEqual(param_1,L"One Sample was created",local_130.ArrayNum,1);
  if (local_130.ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pbVar5 = (byte *)(**(code **)**(undefined8 **)local_130.AllocatorInstance.Data)();
  FAutomationTestBase::TestEqual(param_1,L"Sample line is averaged",(uint)*pbVar5,8);
  DestructItems<TSharedRef<FMediaIOCoreTextureSampleBase,1>,int>
            ((TSharedRef<FMediaIOCoreTextureSampleBase,1> *)local_130.AllocatorInstance.Data,
             local_130.ArrayNum);
  if ((TSharedRef<FMediaIOCoreTextureSampleBase,1> *)local_130.AllocatorInstance.Data !=
      (TSharedRef<FMediaIOCoreTextureSampleBase,1> *)0x0) {
    FMemory::Free(local_130.AllocatorInstance.Data);
  }
  local_f0 = &___7FDeinterlacer_MediaIOCore_UE__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_e8);
  if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.AllocatorInstance.Data);
  }
  return;
}

// TestBobDeinterlace @ 14d7bef30

void __cdecl UE::MediaIOTests::TestBobDeinterlace(FAutomationTestBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 auVar7 [16];
  FColorFormatArgs local_res10 [4];
  FFrameRate local_res18 [2];
  undefined1 local_198 [8];
  FDelegateAllocation local_190;
  TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_> local_180;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_170;
  TOptional<FTimecode> local_160;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  undefined **local_100;
  TDelegateBase<FNotThreadSafeDelegateMode> local_f8;
  undefined1 local_e0;
  FVideoFrame local_d8;
  FDestructionSentinel local_98;
  FDestructionSentinel local_80;
  FDelegateAllocation *local_68;
  TDelegateBase<FNotThreadSafeDelegateMode> local_60 [2];
  
  CreateBuffer(&local_170);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = __real_3fe0000000000000;
  local_160.TypedValue._21_2_ = local_60[1]._21_2_;
  local_160.TypedValue._23_1_ = local_60[1]._23_1_;
  local_d8.VideoBuffer = local_170.AllocatorInstance.Data;
  local_d8.BufferSize = local_170.ArrayNum;
  local_d8.FrameRate = local_res18;
  auVar7 = roundpd(auVar7,auVar7,1);
  local_d8.Time.Ticks = (long64)auVar7._0_8_;
  local_d8.Timecode = &local_160;
  local_d8.ColorFormatArgs = local_res10;
  local_res18[0].Numerator = 60000;
  local_res18[0].Denominator = 1;
  local_160.TypedValue.Subframe = 0.0;
  local_160.TypedValue.bDropFrameFormat = false;
  local_160.TypedValue.Hours = 0;
  local_160.TypedValue.Minutes = 0;
  local_160.TypedValue.Seconds = 0;
  local_160.TypedValue.Frames = 0;
  local_160.bIsSet = true;
  local_res10[0].Encoding = Linear;
  local_res10[0].ColorSpaceType = sRGB;
  local_d8.Stride = 0x1e00;
  local_d8.Width = 0x780;
  local_d8.Height = 0x438;
  local_d8.SampleFormat = CharBGRA;
  local_198 = (undefined1  [8])0x0;
  local_190.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_190.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
             (FWriteAccessScope *)&local_80);
  local_68 = &local_190;
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_190);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VFMediaIOCoreTextureSampleBase___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestBobDeinterlace'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            (local_60,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_198);
  local_100 = &___7FDeinterlacer_MediaIOCore_UE__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            (&local_f8,local_60);
  local_e0 = 0;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(local_60);
  local_100 = &___7FBobDeinterlacer_MediaIOCore_UE__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_198,
             (FWriteAccessScope *)&local_98);
  if ((local_190.DelegateSize != 0) &&
     (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_190.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_190,0,0,0x10);
    local_190.DelegateSize = 0;
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  if (local_190.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_190.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_198);
  MediaIOCore::FBobDeinterlacer::Deinterlace((FBobDeinterlacer *)&local_100,&local_180,&local_d8);
  FAutomationTestBase::TestEqual(param_1,L"Samples were created",local_180.ArrayNum,2);
  if (local_180.ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar5 = (char *)(**(code **)**(undefined8 **)local_180.AllocatorInstance.Data)();
  if (local_180.ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar6 = (char *)(**(code **)((TSharedRef<FMediaIOCoreTextureSampleBase,1> *)
                               (local_180.AllocatorInstance.Data + 0x10))->Object->_padding_)();
  if (*pcVar5 != '\x05') {
    pcVar1 = *(code **)(param_1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_140,L"%s: The two values are not equal.");
    (*pcVar1)(param_1,&local_140,0);
    if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
    }
  }
  if (pcVar5[0x1e00] != '\x05') {
    pcVar1 = *(code **)(param_1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_130,L"%s: The two values are not equal.");
    (*pcVar1)(param_1,&local_130,0);
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
  }
  if (*pcVar6 != '\n') {
    pcVar1 = *(code **)(param_1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_120,L"%s: The two values are not equal.");
    (*pcVar1)(param_1,&local_120,0);
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
  }
  if (pcVar6[0x1e00] != '\n') {
    pcVar1 = *(code **)(param_1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_110,L"%s: The two values are not equal.");
    (*pcVar1)(param_1,&local_110,0);
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<TSharedRef<FMediaIOCoreTextureSampleBase,1>,int>
            ((TSharedRef<FMediaIOCoreTextureSampleBase,1> *)local_180.AllocatorInstance.Data,
             local_180.ArrayNum);
  if ((TSharedRef<FMediaIOCoreTextureSampleBase,1> *)local_180.AllocatorInstance.Data !=
      (TSharedRef<FMediaIOCoreTextureSampleBase,1> *)0x0) {
    FMemory::Free(local_180.AllocatorInstance.Data);
  }
  local_100 = &___7FDeinterlacer_MediaIOCore_UE__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_f8);
  if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.AllocatorInstance.Data);
  }
  return;
}

// TestDiscardDeinterlace @ 14d7bf340

void __cdecl UE::MediaIOTests::TestDiscardDeinterlace(FAutomationTestBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  char *pcVar5;
  undefined1 auVar6 [16];
  FColorFormatArgs local_res10 [4];
  FFrameRate local_res18;
  undefined1 local_168 [8];
  FDelegateAllocation local_160;
  TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_> local_150;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_140;
  TOptional<FTimecode> local_130;
  FString local_110;
  FString local_100;
  undefined **local_f0;
  TDelegateBase<FNotThreadSafeDelegateMode> local_e8;
  undefined1 local_d0;
  FVideoFrame local_c8;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  FDelegateAllocation *local_58;
  TDelegateBase<FNotThreadSafeDelegateMode> local_50 [2];
  
  CreateBuffer(&local_140);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = __real_3fe0000000000000;
  local_130.TypedValue._21_2_ = local_50[1]._21_2_;
  local_130.TypedValue._23_1_ = local_50[1]._23_1_;
  local_c8.VideoBuffer = local_140.AllocatorInstance.Data;
  local_c8.BufferSize = local_140.ArrayNum;
  local_c8.FrameRate = &local_res18;
  auVar6 = roundpd(auVar6,auVar6,1);
  local_c8.Time.Ticks = (long64)auVar6._0_8_;
  local_c8.Timecode = &local_130;
  local_c8.ColorFormatArgs = local_res10;
  local_res18.Numerator = 60000;
  local_res18.Denominator = 1;
  local_130.TypedValue.Subframe = 0.0;
  local_130.TypedValue.bDropFrameFormat = false;
  local_130.TypedValue.Hours = 0;
  local_130.TypedValue.Minutes = 0;
  local_130.TypedValue.Seconds = 0;
  local_130.TypedValue.Frames = 0;
  local_130.bIsSet = true;
  local_res10[0].Encoding = Linear;
  local_res10[0].ColorSpaceType = sRGB;
  local_c8.Stride = 0x1e00;
  local_c8.Width = 0x780;
  local_c8.Height = 0x438;
  local_c8.SampleFormat = CharBGRA;
  local_168 = (undefined1  [8])0x0;
  local_160.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_160.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_168,
             (FWriteAccessScope *)&local_70);
  local_58 = &local_160;
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_160);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VFMediaIOCoreTextureSampleBase___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestDiscardDeinterlace'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            (local_50,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_168);
  local_f0 = &___7FDeinterlacer_MediaIOCore_UE__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            (&local_e8,local_50);
  local_d0 = 0;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(local_50);
  local_f0 = &___7FDiscardDeinterlacer_MediaIOCore_UE__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_168,
             (FWriteAccessScope *)&local_88);
  if ((local_160.DelegateSize != 0) &&
     (local_160.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_160.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_160,0,0,0x10);
    local_160.DelegateSize = 0;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (local_160.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_160.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_168);
  MediaIOCore::FDiscardDeinterlacer::Deinterlace
            ((FDiscardDeinterlacer *)&local_f0,&local_150,&local_c8);
  FAutomationTestBase::TestEqual(param_1,L"One sample was created",local_150.ArrayNum,1);
  if (local_150.ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar5 = (char *)(**(code **)**(undefined8 **)local_150.AllocatorInstance.Data)();
  if (*pcVar5 != '\x05') {
    pcVar1 = *(code **)(param_1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_110,L"%s: The two values are not equal.");
    (*pcVar1)(param_1,&local_110,0);
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
  }
  if (pcVar5[0x1e00] != '\x05') {
    pcVar1 = *(code **)(param_1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_100,L"%s: The two values are not equal.");
    (*pcVar1)(param_1,&local_100,0);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<TSharedRef<FMediaIOCoreTextureSampleBase,1>,int>
            ((TSharedRef<FMediaIOCoreTextureSampleBase,1> *)local_150.AllocatorInstance.Data,
             local_150.ArrayNum);
  if ((TSharedRef<FMediaIOCoreTextureSampleBase,1> *)local_150.AllocatorInstance.Data !=
      (TSharedRef<FMediaIOCoreTextureSampleBase,1> *)0x0) {
    FMemory::Free(local_150.AllocatorInstance.Data);
  }
  local_f0 = &___7FDeinterlacer_MediaIOCore_UE__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_e8);
  if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.AllocatorInstance.Data);
  }
  return;
}

// TestDiscardDeinterlaceBottomFieldOrder @ 14d7bf680

void __cdecl UE::MediaIOTests::TestDiscardDeinterlaceBottomFieldOrder(FAutomationTestBase *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  char *pcVar5;
  undefined1 auVar6 [16];
  FColorFormatArgs local_res10 [4];
  FFrameRate local_res18;
  undefined1 local_168 [8];
  FDelegateAllocation local_160;
  TArray<TSharedRef<FMediaIOCoreTextureSampleBase,1>,TSizedDefaultAllocator<32>_> local_150;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_140;
  TOptional<FTimecode> local_130;
  FString local_110;
  FString local_100;
  undefined **local_f0;
  TDelegateBase<FNotThreadSafeDelegateMode> local_e8;
  undefined1 local_d0;
  FVideoFrame local_c8;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  FDelegateAllocation *local_58;
  TDelegateBase<FNotThreadSafeDelegateMode> local_50 [2];
  
  CreateBuffer(&local_140);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = __real_3fe0000000000000;
  local_130.TypedValue._21_2_ = local_50[1]._21_2_;
  local_130.TypedValue._23_1_ = local_50[1]._23_1_;
  local_c8.VideoBuffer = local_140.AllocatorInstance.Data;
  local_c8.BufferSize = local_140.ArrayNum;
  local_c8.FrameRate = &local_res18;
  auVar6 = roundpd(auVar6,auVar6,1);
  local_c8.Time.Ticks = (long64)auVar6._0_8_;
  local_c8.Timecode = &local_130;
  local_c8.ColorFormatArgs = local_res10;
  local_res18.Numerator = 60000;
  local_res18.Denominator = 1;
  local_130.TypedValue.Subframe = 0.0;
  local_130.TypedValue.bDropFrameFormat = false;
  local_130.TypedValue.Hours = 0;
  local_130.TypedValue.Minutes = 0;
  local_130.TypedValue.Seconds = 0;
  local_130.TypedValue.Frames = 0;
  local_130.bIsSet = true;
  local_res10[0].Encoding = Linear;
  local_res10[0].ColorSpaceType = sRGB;
  local_c8.Stride = 0x1e00;
  local_c8.Width = 0x780;
  local_c8.Height = 0x438;
  local_c8.SampleFormat = CharBGRA;
  local_168 = (undefined1  [8])0x0;
  local_160.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_160.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_168,
             (FWriteAccessScope *)&local_70);
  local_58 = &local_160;
  puVar3 = Core::Private::DelegateAllocate(0x20,&local_160);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6A_AV__TSharedPtr_VFMediaIOCoreTextureSampleBase___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &TBaseFunctorDelegateInstance<TSharedPtr<FMediaIOCoreTextureSampleBase,1>___cdecl(void),FDefaultDelegateUserPolicy,`UE::MediaIOTests::TestDiscardDeinterlaceBottomFieldOrder'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            (local_50,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_168);
  local_f0 = &___7FDeinterlacer_MediaIOCore_UE__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            (&local_e8,local_50);
  local_d0 = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(local_50);
  local_f0 = &___7FDiscardDeinterlacer_MediaIOCore_UE__6B_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_168,
             (FWriteAccessScope *)&local_88);
  if ((local_160.DelegateSize != 0) &&
     (local_160.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_160.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_160,0,0,0x10);
    local_160.DelegateSize = 0;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (local_160.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_160.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_168);
  MediaIOCore::FDiscardDeinterlacer::Deinterlace
            ((FDiscardDeinterlacer *)&local_f0,&local_150,&local_c8);
  FAutomationTestBase::TestEqual(param_1,L"One sample was created",local_150.ArrayNum,1);
  if (local_150.ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pcVar5 = (char *)(**(code **)**(undefined8 **)local_150.AllocatorInstance.Data)();
  if (*pcVar5 != '\n') {
    pcVar1 = *(code **)(param_1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_110,L"%s: The two values are not equal.");
    (*pcVar1)(param_1,&local_110,0);
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
  }
  if (pcVar5[0x1e00] != '\n') {
    pcVar1 = *(code **)(param_1->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_100,L"%s: The two values are not equal.");
    (*pcVar1)(param_1,&local_100,0);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
  }
  DestructItems<TSharedRef<FMediaIOCoreTextureSampleBase,1>,int>
            ((TSharedRef<FMediaIOCoreTextureSampleBase,1> *)local_150.AllocatorInstance.Data,
             local_150.ArrayNum);
  if ((TSharedRef<FMediaIOCoreTextureSampleBase,1> *)local_150.AllocatorInstance.Data !=
      (TSharedRef<FMediaIOCoreTextureSampleBase,1> *)0x0) {
    FMemory::Free(local_150.AllocatorInstance.Data);
  }
  local_f0 = &___7FDeinterlacer_MediaIOCore_UE__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_e8);
  if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.AllocatorInstance.Data);
  }
  return;
}

// ValidateSceneViewport @ 14d7c3560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __cdecl
UE::MediaCapture::Private::ValidateSceneViewport
          (TSharedPtr<FSceneViewport,1> *param_1,FMediaCaptureOptions *param_2,
          TIntPoint<int> *param_3,EPixelFormat param_4,bool param_5)

{
  FSceneViewport *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  EPixelFormat EVar5;
  Type TVar6;
  TSet<EPixelFormat,DefaultKeyFuncs<EPixelFormat,0>,FDefaultSetAllocator> *pTVar7;
  IConsoleManager *pIVar8;
  longlong *plVar9;
  TConsoleVariableData<int> *pTVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  TIntPoint<int>_u_0 local_res8;
  
  pFVar1 = param_1->Object;
  if (pFVar1 == (FSceneViewport *)0x0) {
    if (1 < (byte)LogMediaIOCore._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
      return false;
    }
  }
  else {
    (**(code **)(pFVar1->_padding_ + 0x1e0))(&pFVar1->_padding_,&local_res8);
    if ((param_2->ResizeMethod == ResizeInRenderPass) ||
       (bVar3 = ValidateSize((TIntPoint<int>)local_res8,param_3,param_2,param_5), bVar3)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        pIVar8 = IConsoleManager::Get();
        plVar9 = (longlong *)
                 (**(code **)((longlong)*pIVar8 + 0xc0))(pIVar8,L"r.DefaultBackBufferPixelFormat",1)
        ;
        pTVar10 = (TConsoleVariableData<int> *)0x0;
        if (plVar9 != (longlong *)0x0) {
          pTVar10 = (TConsoleVariableData<int> *)(**(code **)(*plVar9 + 0x68))(plVar9);
        }
        CVarDefaultBackBufferPixelFormat = pTVar10;
        _Init_thread_footer(&::_TSS0);
      }
      pTVar10 = CVarDefaultBackBufferPixelFormat;
      bVar3 = IsInParallelGameThread();
      if (((!bVar3) && (bVar3 = IsInGameThread(), !bVar3)) &&
         (bVar3 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      TVar6 = EDefaultBackBufferPixelFormat::FromInt(pTVar10->ShadowedValue[0]);
      EVar5 = EDefaultBackBufferPixelFormat::Convert2PixelFormat(TVar6);
      if (param_4 == EVar5) {
        return true;
      }
      pTVar7 = UMediaCapture::GetSupportedRgbaSwizzleFormats();
      if (*(int *)&(pTVar7->Elements).field_0x8 != *(int *)&(pTVar7->Elements).field_0x34) {
        FVar11 = (pTVar7->Hash).SecondaryData;
        if (FVar11 == (ForElementType<FSetElementId>)0x0) {
          FVar11 = (ForElementType<FSetElementId>)&pTVar7->Hash;
        }
        iVar12 = *(int *)((longlong)FVar11 +
                         ((ulonglong)(pTVar7->HashSize - 1) & (ulonglong)EVar5) * 4);
        if (iVar12 != -1) {
          do {
            if (*(EPixelFormat *)(*(longlong *)&pTVar7->Elements + (longlong)iVar12 * 0xc) == EVar5)
            {
              if ((iVar12 != -1) && (param_2->bConvertToDesiredPixelFormat != false)) {
                if ((byte)LogMediaIOCore._0_1_ < 3) {
                  return true;
                }
                GetPixelFormatString(param_4);
                GetPixelFormatString(EVar5);
                Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
                return true;
              }
              break;
            }
            iVar12 = *(int *)(*(longlong *)&pTVar7->Elements + 4 + (longlong)iVar12 * 0xc);
          } while (iVar12 != -1);
        }
      }
      if (1 < (byte)LogMediaIOCore._0_1_) {
        GetPixelFormatString(param_4);
        GetPixelFormatString(EVar5);
        pTVar7 = UMediaCapture::GetSupportedRgbaSwizzleFormats();
        if (*(int *)&(pTVar7->Elements).field_0x8 != *(int *)&(pTVar7->Elements).field_0x34) {
          FVar11 = (pTVar7->Hash).SecondaryData;
          if (FVar11 == (ForElementType<FSetElementId>)0x0) {
            FVar11 = (ForElementType<FSetElementId>)&pTVar7->Hash;
          }
          iVar12 = *(int *)((longlong)FVar11 +
                           ((ulonglong)(pTVar7->HashSize - 1) & (ulonglong)EVar5) * 4);
          if (iVar12 != -1) {
            do {
              if (*(EPixelFormat *)(*(longlong *)&pTVar7->Elements + (longlong)iVar12 * 0xc) ==
                  EVar5) break;
              iVar12 = *(int *)(*(longlong *)&pTVar7->Elements + 4 + (longlong)iVar12 * 0xc);
            } while (iVar12 != -1);
          }
        }
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
      }
    }
  }
  return false;
}

// ValidateSize @ 14d7c3880

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::MediaCapture::Private::ValidateSize
          (TIntPoint<int> param_1,TIntPoint<int> *param_2,FMediaCaptureOptions *param_3,bool param_4
          )

{
  TIntPoint<int>_u_0_s_0 TVar1;
  int iVar2;
  int iVar3;
  
  if (param_3->Crop == None) {
    if (((param_2->field0_0x0)._s_0.X == param_1.field0_0x0._0_4_) &&
       ((param_2->field0_0x0)._s_0.Y == param_1.field0_0x0._4_4_)) {
      return true;
    }
    if (1 < (byte)LogMediaIOCore._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
      return false;
    }
  }
  else {
    iVar3 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._4_4_;
    iVar2 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._0_4_;
    if (param_3->Crop == Custom) {
      if (((param_3->CustomCapturePoint).field0_0x0._s_0.X < 0) ||
         ((param_3->CustomCapturePoint).field0_0x0._s_0.Y < 0)) {
        if ((byte)LogMediaIOCore._0_1_ < 2) {
          return false;
        }
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
        return false;
      }
      TVar1 = (param_3->CustomCapturePoint).field0_0x0._s_0;
      iVar3 = TVar1.Y;
      iVar2 = TVar1.X;
    }
    if ((iVar2 + (param_2->field0_0x0)._s_0.X <= param_1.field0_0x0._0_4_) &&
       ((param_2->field0_0x0)._s_0.Y + iVar3 <= param_1.field0_0x0._4_4_)) {
      return true;
    }
    if (1 < (byte)LogMediaIOCore._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
    }
  }
  return false;
}

// ValidateTextureRenderTarget2D @ 14d7c3e30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::MediaCapture::Private::ValidateTextureRenderTarget2D
          (UTextureRenderTarget2D *param_1,FMediaCaptureOptions *param_2,TIntPoint<int> *param_3,
          EPixelFormat param_4,bool param_5)

{
  bool bVar1;
  EPixelFormat EVar2;
  byte bVar3;
  int iVar4;
  TSet<EPixelFormat,DefaultKeyFuncs<EPixelFormat,0>,FDefaultSetAllocator> *pTVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (param_1 == (UTextureRenderTarget2D *)0x0) {
    if (1 < (byte)LogMediaIOCore._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
      return false;
    }
  }
  else if ((param_2->ResizeMethod == ResizeInRenderPass) ||
          (bVar1 = ValidateSize((TIntPoint<int>)*(TIntPoint<int>_u_0 *)&param_1->SizeX,param_3,
                                param_2,param_5), bVar1)) {
    EVar2 = (**(code **)(param_1->_padding_ + 0x3d0))(param_1);
    if (param_4 == EVar2) {
      return true;
    }
    pTVar5 = UMediaCapture::GetSupportedRgbaSwizzleFormats();
    bVar3 = (**(code **)(param_1->_padding_ + 0x3d0))(param_1);
    if (*(int *)&(pTVar5->Elements).field_0x8 != *(int *)&(pTVar5->Elements).field_0x34) {
      FVar6 = (pTVar5->Hash).SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&pTVar5->Hash;
      }
      iVar4 = *(int *)((longlong)FVar6 + ((ulonglong)(pTVar5->HashSize - 1) & (ulonglong)bVar3) * 4)
      ;
      if (iVar4 != -1) {
        do {
          if (*(byte *)(*(longlong *)&pTVar5->Elements + (longlong)iVar4 * 0xc) == bVar3) {
            if (param_2->bConvertToDesiredPixelFormat != false) {
              if ((byte)LogMediaIOCore._0_1_ < 3) {
                return true;
              }
              GetPixelFormatString(param_4);
              EVar2 = (**(code **)(param_1->_padding_ + 0x3d0))(param_1);
              GetPixelFormatString(EVar2);
              Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
              return true;
            }
            break;
          }
          iVar4 = *(int *)(*(longlong *)&pTVar5->Elements + 4 + (longlong)iVar4 * 0xc);
        } while (iVar4 != -1);
      }
    }
    if (1 < (byte)LogMediaIOCore._0_1_) {
      GetPixelFormatString(param_4);
      EVar2 = (**(code **)(param_1->_padding_ + 0x3d0))(param_1);
      GetPixelFormatString(EVar2);
      pTVar5 = UMediaCapture::GetSupportedRgbaSwizzleFormats();
      bVar3 = (**(code **)(param_1->_padding_ + 0x3d0))(param_1);
      if (*(int *)&(pTVar5->Elements).field_0x8 != *(int *)&(pTVar5->Elements).field_0x34) {
        FVar6 = (pTVar5->Hash).SecondaryData;
        if (FVar6 == (ForElementType<FSetElementId>)0x0) {
          FVar6 = (ForElementType<FSetElementId>)&pTVar5->Hash;
        }
        iVar4 = *(int *)((longlong)FVar6 +
                        ((ulonglong)(pTVar5->HashSize - 1) & (ulonglong)bVar3) * 4);
        if (iVar4 != -1) {
          do {
            if (*(byte *)(*(longlong *)&pTVar5->Elements + (longlong)iVar4 * 0xc) == bVar3) break;
            iVar4 = *(int *)(*(longlong *)&pTVar5->Elements + 4 + (longlong)iVar4 * 0xc);
          } while (iVar4 != -1);
        }
      }
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
    }
  }
  return false;
}

