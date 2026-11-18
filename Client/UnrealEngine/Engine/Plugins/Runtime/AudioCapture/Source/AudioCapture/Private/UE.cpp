// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCapture
// Functions: 8

// Construct<FAudioInputDeviceInfo> @ 14d0cd5e0

void __cdecl UE::CoreUObject::Private::Construct<FAudioInputDeviceInfo>(void *param_1)

{
  ::FString::FString(param_1,"");
  ::FString::FString((FString *)((longlong)param_1 + 0x10),"");
  *(byte *)((longlong)param_1 + 0x28) = *(byte *)((longlong)param_1 + 0x28) | 1;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FAudioInputDeviceInfo> @ 14d0cd620

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAudioInputDeviceInfo>(void *param_1)

{
  ::FString::FString(param_1,"");
  ::FString::FString((FString *)((longlong)param_1 + 0x10),"");
  *(byte *)((longlong)param_1 + 0x28) = *(byte *)((longlong)param_1 + 0x28) | 1;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FAudioInputDeviceInfo> @ 14d0cd660

void __cdecl UE::CoreUObject::Private::Destruct<FAudioInputDeviceInfo>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FAudioInputDeviceInfo> @ 14d0cd6a0

bool __cdecl
UE::CoreUObject::Private::Copy<FAudioInputDeviceInfo>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  FString *pFVar2;
  int iVar3;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_2 + 0x10));
    iVar3 = (((FString *)((longlong)param_1 + 0x20))->Data).ArrayNum;
    *(undefined4 *)&(((FString *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data =
         *(undefined4 *)&(((FString *)((longlong)param_2 + 0x20))->Data).AllocatorInstance.Data;
    *(undefined4 *)
     ((longlong)&(((FString *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data + 4) =
         *(undefined4 *)
          ((longlong)&(((FString *)((longlong)param_2 + 0x20))->Data).AllocatorInstance.Data + 4);
    pFVar2 = (FString *)((longlong)param_2 + 0x20);
    param_2 = (void *)((longlong)param_2 + 0x30);
    piVar1 = &(((FString *)((longlong)param_1 + 0x20))->Data).ArrayNum;
    *(byte *)piVar1 = (byte)*piVar1 ^ ((byte)iVar3 ^ (byte)(pFVar2->Data).ArrayNum) & 1;
    param_1 = (FString *)((longlong)param_1 + 0x30);
  }
  return true;
}

// Construct<FAudioCaptureDeviceInfo> @ 14d0cdfa0

void __cdecl UE::CoreUObject::Private::Construct<FAudioCaptureDeviceInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FAudioCaptureDeviceInfo> @ 14d0cdfb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAudioCaptureDeviceInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FAudioCaptureDeviceInfo> @ 14d0cdfc0

void __cdecl UE::CoreUObject::Private::Destruct<FAudioCaptureDeviceInfo>(void *param_1)

{
  return;
}

// Copy<FAudioCaptureDeviceInfo> @ 14d0cdfd0

bool __cdecl
UE::CoreUObject::Private::Copy<FAudioCaptureDeviceInfo>(void *param_1,void *param_2,int param_3)

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

