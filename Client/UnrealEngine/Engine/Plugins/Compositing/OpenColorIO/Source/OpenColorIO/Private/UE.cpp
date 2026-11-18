// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 21

// Construct<FOpenColorIODisplayConfiguration> @ 14d7649e0

void __cdecl UE::CoreUObject::Private::Construct<FOpenColorIODisplayConfiguration>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xa5) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa7) = 0;
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa0) = 0;
  return;
}

// ConstructForTests<FOpenColorIODisplayConfiguration> @ 14d764a70

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOpenColorIODisplayConfiguration>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa0) = 0;
  return;
}

// Destruct<FOpenColorIODisplayConfiguration> @ 14d764ae0

void __cdecl UE::CoreUObject::Private::Destruct<FOpenColorIODisplayConfiguration>(void *param_1)

{
  FOpenColorIOColorConversionSettings::~FOpenColorIOColorConversionSettings
            ((FOpenColorIOColorConversionSettings *)((longlong)param_1 + 8));
  return;
}

// SerializeArchive<FOpenColorIODisplayConfiguration> @ 14d764af0

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FOpenColorIODisplayConfiguration>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  return false;
}

// PostSerialize<FOpenColorIODisplayConfiguration> @ 14d764b20

void __cdecl
UE::CoreUObject::Private::PostSerialize<FOpenColorIODisplayConfiguration>
          (FArchive *param_1,void *param_2)

{
  bool bVar1;
  int iVar2;
  
  if (((((param_1->field_0x28 & 1) != 0) &&
       (iVar2 = FArchiveState::CustomVer
                          ((FArchiveState *)param_1,&FUE5ReleaseStreamObjectVersion::GUID),
       iVar2 < 0x2f)) && (*(longlong *)((longlong)param_2 + 8) != 0)) &&
     ((*(uint *)(*(longlong *)((longlong)param_2 + 8) + 8) >> 0x1e & 1) == 0)) {
    if ((*(int *)((longlong)param_2 + 0x78) < 2) || (*(int *)((longlong)param_2 + 0x88) < 2)) {
      if (*(int *)((longlong)param_2 + 0x18) < 2) {
        return;
      }
      if (*(int *)((longlong)param_2 + 0x48) < 2) {
        return;
      }
      bVar1 = UOpenColorIOConfiguration::HasTransform
                        (*(UOpenColorIOConfiguration **)((longlong)param_2 + 8),
                         (FString *)((longlong)param_2 + 0x10),(FString *)((longlong)param_2 + 0x40)
                        );
    }
    else {
      if (*(int *)((longlong)param_2 + 0x18) < 2) {
        return;
      }
      bVar1 = UOpenColorIOConfiguration::HasTransform
                        (*(UOpenColorIOConfiguration **)((longlong)param_2 + 8),
                         (FString *)((longlong)param_2 + 0x10),(FString *)((longlong)param_2 + 0x70)
                         ,(FString *)((longlong)param_2 + 0x80),
                         *(EOpenColorIOViewTransformDirection *)((longlong)param_2 + 0xa0));
    }
    if (bVar1 != false) {
      *(undefined1 *)param_2 = 1;
    }
  }
  return;
}

// Copy<FOpenColorIODisplayConfiguration> @ 14d764bc0

bool __cdecl
UE::CoreUObject::Private::Copy<FOpenColorIODisplayConfiguration>
          (void *param_1,void *param_2,int param_3)

{
  undefined1 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      *puVar1 = puVar1[(longlong)param_2 - (longlong)param_1];
      FOpenColorIOColorConversionSettings::operator=
                ((FOpenColorIOColorConversionSettings *)(puVar1 + 8),
                 (FOpenColorIOColorConversionSettings *)
                 (puVar1 + ((longlong)param_2 - (longlong)param_1) + 8));
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 0xa8;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FOpenColorIOColorConversionSettings> @ 14d764d90

void __cdecl UE::CoreUObject::Private::Construct<FOpenColorIOColorConversionSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined1 *)((longlong)param_1 + 0x98) = 0;
  return;
}

// ConstructForTests<FOpenColorIOColorConversionSettings> @ 14d764e00

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FOpenColorIOColorConversionSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined1 *)((longlong)param_1 + 0x98) = 0;
  return;
}

// Destruct<FOpenColorIOColorConversionSettings> @ 14d764e70

void __cdecl UE::CoreUObject::Private::Destruct<FOpenColorIOColorConversionSettings>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x88) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x88));
  }
  if (*(void **)((longlong)param_1 + 0x78) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x78));
  }
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// PostSerialize<FOpenColorIOColorConversionSettings> @ 14d764e80

void __cdecl
UE::CoreUObject::Private::PostSerialize<FOpenColorIOColorConversionSettings>
          (FArchive *param_1,void *param_2)

{
  return;
}

// Copy<FOpenColorIOColorConversionSettings> @ 14d764e90

bool __cdecl
UE::CoreUObject::Private::Copy<FOpenColorIOColorConversionSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      ::FString::operator=((FString *)(puVar2 + 1),(FString *)(puVar1 + 1));
      ::FString::operator=((FString *)(puVar2 + 3),(FString *)(puVar1 + 3));
      ::FString::operator=((FString *)(puVar2 + 5),(FString *)(puVar1 + 5));
      ::FString::operator=((FString *)(puVar2 + 7),(FString *)(puVar1 + 7));
      ::FString::operator=((FString *)(puVar2 + 9),(FString *)(puVar1 + 9));
      ::FString::operator=((FString *)(puVar2 + 0xb),(FString *)(puVar1 + 0xb));
      ::FString::operator=((FString *)(puVar2 + 0xd),(FString *)(puVar1 + 0xd));
      ::FString::operator=((FString *)(puVar2 + 0xf),(FString *)(puVar1 + 0xf));
      ::FString::operator=((FString *)(puVar2 + 0x11),(FString *)(puVar1 + 0x11));
      *(undefined1 *)(puVar2 + 0x13) = *(undefined1 *)(puVar1 + 0x13);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 0x14;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FOpenColorIODisplayView> @ 14d764fc0

void __cdecl UE::CoreUObject::Private::Construct<FOpenColorIODisplayView>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FOpenColorIODisplayView> @ 14d764fe0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FOpenColorIODisplayView>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FOpenColorIODisplayView> @ 14d765000

void __cdecl UE::CoreUObject::Private::Destruct<FOpenColorIODisplayView>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FOpenColorIODisplayView> @ 14d765050

bool __cdecl
UE::CoreUObject::Private::Copy<FOpenColorIODisplayView>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_2 + 0x10));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_2 + 0x20));
    param_2 = (void *)((longlong)param_2 + 0x30);
    param_1 = (FString *)((longlong)param_1 + 0x30);
  }
  return true;
}

// Construct<FOpenColorIOColorSpace> @ 14d765610

void __cdecl UE::CoreUObject::Private::Construct<FOpenColorIOColorSpace>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FOpenColorIOColorSpace> @ 14d765630

void __cdecl UE::CoreUObject::Private::ConstructForTests<FOpenColorIOColorSpace>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FOpenColorIOColorSpace> @ 14d765650

void __cdecl UE::CoreUObject::Private::Destruct<FOpenColorIOColorSpace>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FOpenColorIOColorSpace> @ 14d765730

bool __cdecl
UE::CoreUObject::Private::Copy<FOpenColorIOColorSpace>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_2 + 0x10));
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x20),(FString *)((longlong)param_2 + 0x20));
    param_2 = (void *)((longlong)param_2 + 0x30);
    param_1 = (FString *)((longlong)param_1 + 0x30);
  }
  return true;
}

// DeleterFunc<FOpenColorIOWrapperConfig> @ 14d766890

void __cdecl UE::Core::Private::PimplPtr::DeleterFunc<FOpenColorIOWrapperConfig>(void *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)param_1 + 0x18);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
  }
  ::operator_delete(param_1,0x20);
  return;
}

// DereferenceIfNecessary<FOpenColorIODisplayExtension,FOpenColorIODisplayExtension_*_&> @ 14d7668d0

FOpenColorIODisplayExtension * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FOpenColorIODisplayExtension,FOpenColorIODisplayExtension_*_&>
          (FOpenColorIODisplayExtension **param_1)

{
  return *param_1;
}

