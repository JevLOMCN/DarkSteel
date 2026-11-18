// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenCVLensDistortion
// Functions: 8

// Construct<FOpenCVCameraViewInfo> @ 14d7c6140

void __cdecl UE::CoreUObject::Private::Construct<FOpenCVCameraViewInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FOpenCVCameraViewInfo> @ 14d7c6150

void __cdecl UE::CoreUObject::Private::ConstructForTests<FOpenCVCameraViewInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FOpenCVCameraViewInfo> @ 14d7c6160

void __cdecl UE::CoreUObject::Private::Destruct<FOpenCVCameraViewInfo>(void *param_1)

{
  return;
}

// Copy<FOpenCVCameraViewInfo> @ 14d7c6170

bool __cdecl
UE::CoreUObject::Private::Copy<FOpenCVCameraViewInfo>(void *param_1,void *param_2,int param_3)

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

// Construct<FOpenCVLensDistortionParameters> @ 14d7c6910

void __cdecl UE::CoreUObject::Private::Construct<FOpenCVLensDistortionParameters>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x41) = 0;
  *(undefined2 *)((longlong)param_1 + 0x45) = 0;
  *(undefined1 *)((longlong)param_1 + 0x47) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x3fe0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3fe0000000000000;
  *(undefined1 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FOpenCVLensDistortionParameters> @ 14d7c6960

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOpenCVLensDistortionParameters>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x3fe0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3fe0000000000000;
  return;
}

// Destruct<FOpenCVLensDistortionParameters> @ 14d7c69a0

void __cdecl UE::CoreUObject::Private::Destruct<FOpenCVLensDistortionParameters>(void *param_1)

{
  return;
}

// Copy<FOpenCVLensDistortionParameters> @ 14d7c69b0

bool __cdecl
UE::CoreUObject::Private::Copy<FOpenCVLensDistortionParameters>
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
  undefined8 uVar9;
  longlong lVar10;
  
  if (param_3 != 0) {
    lVar10 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar10 + 0x40 + (longlong)param_1);
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
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x48);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

