// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 4

// Construct @ 14e711e00

void __cdecl
UE::Core::Private::TMoveConstructorCaller<TOptional<UE::Interchange::FImportBlockedImage>_>::
Construct(void *param_1,void *param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  
  *(undefined1 *)((longlong)param_1 + 0x68) = 0;
  cVar2 = *(char *)((longlong)param_2 + 0x68);
  *(char *)((longlong)param_1 + 0x68) = cVar2;
  if (cVar2 == '\0') {
    return;
  }
  uVar3 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)param_1 = uVar3;
  *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar1 = *(undefined1 *)((longlong)param_2 + 0x20);
  *(undefined1 *)((longlong)param_1 + 0x28) = 0;
  *(undefined1 *)((longlong)param_1 + 0x20) = uVar1;
  cVar2 = *(char *)((longlong)param_2 + 0x28);
  *(char *)((longlong)param_1 + 0x28) = cVar2;
  if (cVar2 != '\0') {
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  }
  *(undefined1 *)((longlong)param_1 + 0x60) = 0;
  cVar2 = *(char *)((longlong)param_2 + 0x60);
  *(char *)((longlong)param_1 + 0x60) = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)((longlong)param_1 + 0x30) = 0;
    *(undefined8 *)((longlong)param_1 + 0x30) = *(undefined8 *)((longlong)param_2 + 0x30);
    *(undefined8 *)((longlong)param_2 + 0x30) = 0;
    *(undefined4 *)((longlong)param_1 + 0x38) = *(undefined4 *)((longlong)param_2 + 0x38);
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
    *(undefined8 *)((longlong)param_2 + 0x38) = 0;
    *(undefined8 *)((longlong)param_1 + 0x40) = 0;
    *(undefined8 *)((longlong)param_1 + 0x40) = *(undefined8 *)((longlong)param_2 + 0x40);
    *(undefined8 *)((longlong)param_2 + 0x40) = 0;
    *(undefined4 *)((longlong)param_1 + 0x48) = *(undefined4 *)((longlong)param_2 + 0x48);
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
    *(undefined8 *)((longlong)param_2 + 0x48) = 0;
    *(undefined8 *)((longlong)param_1 + 0x50) = 0;
    *(undefined8 *)((longlong)param_1 + 0x50) = *(undefined8 *)((longlong)param_2 + 0x50);
    *(undefined8 *)((longlong)param_2 + 0x50) = 0;
    *(undefined4 *)((longlong)param_1 + 0x58) = *(undefined4 *)((longlong)param_2 + 0x58);
    *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
    *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  }
  return;
}

// Construct @ 14e711e20

void __cdecl
UE::Core::Private::TMoveConstructorCaller<TOptional<UE::Interchange::FImportImage>_>::Construct
          (void *param_1,void *param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  
  *(undefined1 *)((longlong)param_1 + 0x70) = 0;
  cVar2 = *(char *)((longlong)param_2 + 0x70);
  *(char *)((longlong)param_1 + 0x70) = cVar2;
  if (cVar2 == '\0') {
    return;
  }
  *(undefined ***)param_1 = &___7FImportImage_Interchange_UE__6B_;
  uVar3 = *(undefined8 *)((longlong)param_2 + 8);
  *(undefined8 *)((longlong)param_2 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)((longlong)param_1 + 0x20) = *(undefined4 *)((longlong)param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar1 = *(undefined1 *)((longlong)param_2 + 0x28);
  *(undefined1 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28) = uVar1;
  cVar2 = *(char *)((longlong)param_2 + 0x30);
  *(char *)((longlong)param_1 + 0x30) = cVar2;
  if (cVar2 != '\0') {
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  }
  *(undefined1 *)((longlong)param_1 + 0x68) = 0;
  cVar2 = *(char *)((longlong)param_2 + 0x68);
  *(char *)((longlong)param_1 + 0x68) = cVar2;
  if (cVar2 != '\0') {
    *(undefined8 *)((longlong)param_1 + 0x38) = 0;
    *(undefined8 *)((longlong)param_1 + 0x38) = *(undefined8 *)((longlong)param_2 + 0x38);
    *(undefined8 *)((longlong)param_2 + 0x38) = 0;
    *(undefined4 *)((longlong)param_1 + 0x40) = *(undefined4 *)((longlong)param_2 + 0x40);
    *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
    *(undefined8 *)((longlong)param_2 + 0x40) = 0;
    *(undefined8 *)((longlong)param_1 + 0x48) = 0;
    *(undefined8 *)((longlong)param_1 + 0x48) = *(undefined8 *)((longlong)param_2 + 0x48);
    *(undefined8 *)((longlong)param_2 + 0x48) = 0;
    *(undefined4 *)((longlong)param_1 + 0x50) = *(undefined4 *)((longlong)param_2 + 0x50);
    *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
    *(undefined8 *)((longlong)param_2 + 0x50) = 0;
    *(undefined8 *)((longlong)param_1 + 0x58) = 0;
    *(undefined8 *)((longlong)param_1 + 0x58) = *(undefined8 *)((longlong)param_2 + 0x58);
    *(undefined8 *)((longlong)param_2 + 0x58) = 0;
    *(undefined4 *)((longlong)param_1 + 0x60) = *(undefined4 *)((longlong)param_2 + 0x60);
    *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
    *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  }
  return;
}

// Construct @ 14e711e40

void __cdecl
UE::Core::Private::TMoveConstructorCaller<TOptional<UE::Interchange::FImportLightProfile>_>::
Construct(void *param_1,void *param_2)

{
  char cVar1;
  
  *(undefined1 *)((longlong)param_1 + 0x90) = 0;
  cVar1 = *(char *)((longlong)param_2 + 0x90);
  *(char *)((longlong)param_1 + 0x90) = cVar1;
  if (cVar1 == '\0') {
    return;
  }
  Interchange::FImportImage::FImportImage(param_1,param_2);
  *(undefined ***)param_1 = &___7FImportLightProfile_Interchange_UE__6B_;
  *(undefined4 *)((longlong)param_1 + 0x70) = *(undefined4 *)((longlong)param_2 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = *(undefined8 *)((longlong)param_2 + 0x78);
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = *(undefined8 *)((longlong)param_2 + 0x80);
  *(undefined8 *)((longlong)param_1 + 0x88) = *(undefined8 *)((longlong)param_2 + 0x88);
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  *(undefined8 *)((longlong)param_2 + 0x88) = 0;
  return;
}

// Construct @ 14e711e70

void __cdecl
UE::Core::Private::TMoveConstructorCaller<TOptional<UE::Interchange::FImportSlicedImage>_>::
Construct(void *param_1,void *param_2)

{
  char cVar1;
  
  *(undefined1 *)((longlong)param_1 + 0x78) = 0;
  cVar1 = *(char *)((longlong)param_2 + 0x78);
  *(char *)((longlong)param_1 + 0x78) = cVar1;
  if (cVar1 != '\0') {
    Interchange::FImportImage::FImportImage(param_1,param_2);
    *(undefined ***)param_1 = &___7FImportSlicedImage_Interchange_UE__6B_;
    *(undefined4 *)((longlong)param_1 + 0x70) = *(undefined4 *)((longlong)param_2 + 0x70);
    *(undefined1 *)((longlong)param_1 + 0x74) = *(undefined1 *)((longlong)param_2 + 0x74);
  }
  return;
}

