// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ScreenShotComparisonTools
// Functions: 13

// Construct<FImageComparisonResult> @ 148c381f0

void __cdecl UE::CoreUObject::Private::Construct<FImageComparisonResult>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xac) = 0xff00;
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
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  FText::FText((FText *)((longlong)param_1 + 0xb8));
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 3;
  return;
}

// ConstructForTests<FImageComparisonResult> @ 148c38200

void __cdecl UE::CoreUObject::Private::ConstructForTests<FImageComparisonResult>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xac) = 0xff00;
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
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  FText::FText((FText *)((longlong)param_1 + 0xb8));
  *(undefined8 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 3;
  return;
}

// Destruct<FImageComparisonResult> @ 148c38210

void __cdecl UE::CoreUObject::Private::Destruct<FImageComparisonResult>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 200) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 200));
  }
  if (*(longlong **)((longlong)param_1 + 0xb8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0xb8) + 0x10))();
  }
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

// Copy<FImageComparisonResult> @ 148c38220

bool __cdecl
UE::CoreUObject::Private::Copy<FImageComparisonResult>(void *param_1,void *param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined1 local_res18 [8];
  
  if (param_3 != 0) {
    pvVar7 = param_2;
    puVar8 = param_1;
    do {
      *puVar8 = *(undefined8 *)((longlong)puVar8 + ((longlong)param_2 - (longlong)param_1));
      ::FString::operator=((FString *)(puVar8 + 1),(FString *)((longlong)pvVar7 + 8));
      ::FString::operator=((FString *)(puVar8 + 3),(FString *)((longlong)pvVar7 + 0x18));
      ::FString::operator=((FString *)(puVar8 + 5),(FString *)((longlong)pvVar7 + 0x28));
      ::FString::operator=((FString *)(puVar8 + 7),(FString *)((longlong)pvVar7 + 0x38));
      ::FString::operator=((FString *)(puVar8 + 9),(FString *)((longlong)pvVar7 + 0x48));
      ::FString::operator=((FString *)(puVar8 + 0xb),(FString *)((longlong)pvVar7 + 0x58));
      ::FString::operator=((FString *)(puVar8 + 0xd),(FString *)((longlong)pvVar7 + 0x68));
      ::FString::operator=((FString *)(puVar8 + 0xf),(FString *)((longlong)pvVar7 + 0x78));
      ::FString::operator=((FString *)(puVar8 + 0x11),(FString *)((longlong)pvVar7 + 0x88));
      puVar8[0x13] = *(undefined8 *)((longlong)pvVar7 + 0x98);
      puVar8[0x14] = *(undefined8 *)((longlong)pvVar7 + 0xa0);
      uVar3 = *(undefined4 *)((longlong)pvVar7 + 0xac);
      uVar4 = *(undefined4 *)((longlong)pvVar7 + 0xb0);
      uVar5 = *(undefined4 *)((longlong)pvVar7 + 0xb4);
      *(undefined4 *)(puVar8 + 0x15) = *(undefined4 *)((longlong)pvVar7 + 0xa8);
      *(undefined4 *)((longlong)puVar8 + 0xac) = uVar3;
      *(undefined4 *)(puVar8 + 0x16) = uVar4;
      *(undefined4 *)((longlong)puVar8 + 0xb4) = uVar5;
      plVar1 = *(longlong **)((longlong)pvVar7 + 0xb8);
      plVar2 = (longlong *)puVar8[0x17];
      if (plVar2 != plVar1) {
        puVar8[0x17] = plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))(plVar1,local_res18);
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)(puVar8 + 0x18) = *(undefined4 *)((longlong)pvVar7 + 0xc0);
      ::FString::operator=((FString *)(puVar8 + 0x19),(FString *)((longlong)pvVar7 + 200));
      uVar6 = *(undefined8 *)((longlong)pvVar7 + 0xe0);
      puVar8[0x1b] = *(undefined8 *)((longlong)pvVar7 + 0xd8);
      puVar8[0x1c] = uVar6;
      *(undefined1 *)(puVar8 + 0x1d) = *(undefined1 *)((longlong)pvVar7 + 0xe8);
      *(undefined4 *)((longlong)puVar8 + 0xec) = *(undefined4 *)((longlong)pvVar7 + 0xec);
      param_3 = param_3 + -1;
      pvVar7 = (void *)((longlong)pvVar7 + 0xf0);
      puVar8 = puVar8 + 0x1e;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FImageTolerance> @ 148c383d0

void __cdecl UE::CoreUObject::Private::Construct<FImageTolerance>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0xff00;
  return;
}

// ConstructForTests<FImageTolerance> @ 148c383f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FImageTolerance>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0xff00;
  return;
}

// Destruct<FImageTolerance> @ 148c38410

void __cdecl UE::CoreUObject::Private::Destruct<FImageTolerance>(void *param_1)

{
  return;
}

// Copy<FImageTolerance> @ 148c38460

bool __cdecl
UE::CoreUObject::Private::Copy<FImageTolerance>(void *param_1,void *param_2,int param_3)

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

// Construct<FScreenshotFallbackEntry> @ 148c38540

void __cdecl UE::CoreUObject::Private::Construct<FScreenshotFallbackEntry>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FScreenshotFallbackEntry> @ 148c38560

void __cdecl UE::CoreUObject::Private::ConstructForTests<FScreenshotFallbackEntry>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FScreenshotFallbackEntry> @ 148c38580

void __cdecl UE::CoreUObject::Private::Destruct<FScreenshotFallbackEntry>(void *param_1)

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

// Copy<FScreenshotFallbackEntry> @ 148c385c0

bool __cdecl
UE::CoreUObject::Private::Copy<FScreenshotFallbackEntry>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=(this,pFVar1);
      ::FString::operator=(this + 1,pFVar1 + 1);
      param_3 = param_3 + -1;
      this = this + 2;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FScreenshotFallbackEntry> @ 148c38640

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FScreenshotFallbackEntry>(void *param_1)

{
  uint uVar1;
  int iVar2;
  wchar_t *pwVar3;
  
  iVar2 = *(int *)((longlong)param_1 + 0x18) + -1;
  if (*(int *)((longlong)param_1 + 0x18) == 0) {
    pwVar3 = L"";
    iVar2 = 0;
  }
  else {
    pwVar3 = *(wchar_t **)((longlong)param_1 + 0x10);
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar2,pwVar3);
  return uVar1;
}

