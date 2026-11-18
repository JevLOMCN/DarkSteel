// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineSettings
// Functions: 12

// Construct<FAutoCompleteCommand> @ 143129410

void __cdecl UE::CoreUObject::Private::Construct<FAutoCompleteCommand>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffb4b4b4;
  return;
}

// ConstructForTests<FAutoCompleteCommand> @ 143129440

void __cdecl UE::CoreUObject::Private::ConstructForTests<FAutoCompleteCommand>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffb4b4b4;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FAutoCompleteCommand> @ 143129460

void __cdecl UE::CoreUObject::Private::Destruct<FAutoCompleteCommand>(void *param_1)

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

// Copy<FAutoCompleteCommand> @ 1431294a0

bool __cdecl
UE::CoreUObject::Private::Copy<FAutoCompleteCommand>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_2 + 0x10));
    pFVar1 = (FString *)((longlong)param_2 + 0x20);
    param_2 = (void *)((longlong)param_2 + 0x28);
    *(undefined4 *)((longlong)param_1 + 0x20) =
         *(undefined4 *)&(pFVar1->Data).AllocatorInstance.Data;
    param_1 = (int *)((longlong)param_1 + 0x28);
  }
  return true;
}

// Construct<FTemplateMapInfoOverride> @ 143129530

void __cdecl UE::CoreUObject::Private::Construct<FTemplateMapInfoOverride>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  FText::FText((FText *)((longlong)param_1 + 0x40));
  return;
}

// ConstructForTests<FTemplateMapInfoOverride> @ 143129560

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTemplateMapInfoOverride>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  FText::FText((FText *)((longlong)param_1 + 0x40));
  return;
}

// Destruct<FTemplateMapInfoOverride> @ 143129590

void __cdecl UE::CoreUObject::Private::Destruct<FTemplateMapInfoOverride>(void *param_1)

{
  if (*(longlong **)((longlong)param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)((longlong)param_1 + 0x40) + 0x10))();
  }
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    return;
  }
  return;
}

// Copy<FTemplateMapInfoOverride> @ 1431295e0

bool __cdecl
UE::CoreUObject::Private::Copy<FTemplateMapInfoOverride>(void *param_1,void *param_2,int param_3)

{
  FName FVar1;
  FName FVar2;
  FSoftObjectPath *pFVar3;
  undefined1 local_res18 [8];
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FSoftObjectPath::operator=(param_1,param_2);
    FSoftObjectPath::operator=
              ((FSoftObjectPath *)((longlong)param_1 + 0x20),
               (FSoftObjectPath *)((longlong)param_2 + 0x20));
    FVar1 = (((FSoftObjectPath *)((longlong)param_2 + 0x40))->AssetPath).PackageName;
    FVar2 = (((FSoftObjectPath *)((longlong)param_1 + 0x40))->AssetPath).PackageName;
    if (FVar2 != FVar1) {
      (((FSoftObjectPath *)((longlong)param_1 + 0x40))->AssetPath).PackageName = FVar1;
      if (FVar1 != (FName)0x0) {
        (**(code **)(*(longlong *)FVar1 + 8))(FVar1,local_res18);
      }
      if (FVar2 != (FName)0x0) {
        (**(code **)(*(longlong *)FVar2 + 0x10))(FVar2);
      }
    }
    pFVar3 = (FSoftObjectPath *)((longlong)param_2 + 0x40);
    param_2 = &((FSoftObjectPath *)((longlong)param_2 + 0x40))->SubPathString;
    (((FSoftObjectPath *)((longlong)param_1 + 0x40))->AssetPath).AssetName.ComparisonIndex.Value =
         (pFVar3->AssetPath).AssetName.ComparisonIndex.Value;
    param_1 = &((FSoftObjectPath *)((longlong)param_1 + 0x40))->SubPathString;
  }
  return true;
}

// Construct<FGameModeName> @ 143129690

void __cdecl UE::CoreUObject::Private::Construct<FGameModeName>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FGameModeName> @ 1431296b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FGameModeName>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FGameModeName> @ 1431296d0

void __cdecl UE::CoreUObject::Private::Destruct<FGameModeName>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x20));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FGameModeName> @ 143129710

bool __cdecl UE::CoreUObject::Private::Copy<FGameModeName>(void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=(this,pFVar1);
      FSoftObjectPath::operator=((FSoftObjectPath *)(this + 1),(FSoftObjectPath *)(pFVar1 + 1));
      param_3 = param_3 + -1;
      this = this + 3;
    } while (param_3 != 0);
  }
  return true;
}

