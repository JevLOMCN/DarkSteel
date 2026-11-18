// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 693

// Construct<FTypedElementUObjectColumn> @ 142c79e00

void __cdecl UE::CoreUObject::Private::Construct<FTypedElementUObjectColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FTypedElementUObjectColumn> @ 142c79e10

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTypedElementUObjectColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FTypedElementUObjectColumn> @ 142c79e20

void __cdecl UE::CoreUObject::Private::Destruct<FTypedElementUObjectColumn>(void *param_1)

{
  return;
}

// Construct<FTypedElementPackageLoadedPathColumn> @ 142c79e30

void __cdecl
UE::CoreUObject::Private::Construct<FTypedElementPackageLoadedPathColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FTypedElementPackageLoadedPathColumn> @ 142c79e40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementPackageLoadedPathColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FTypedElementPackageLoadedPathColumn> @ 142c79e50

void __cdecl UE::CoreUObject::Private::Destruct<FTypedElementPackageLoadedPathColumn>(void *param_1)

{
  return;
}

// Copy<FTypedElementUObjectColumn> @ 142c79e60

bool __cdecl
UE::CoreUObject::Private::Copy<FTypedElementUObjectColumn>(void *param_1,void *param_2,int param_3)

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

// Copy<FTypedElementPackageLoadedPathColumn> @ 142c79e90

bool __cdecl
UE::CoreUObject::Private::Copy<FTypedElementPackageLoadedPathColumn>
          (void *param_1,void *param_2,int param_3)

{
  FPackagePath *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FPackagePath::operator=
                (this,(FPackagePath *)(((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FUnresolvedTableRowParentColumn> @ 142c7a0b0

void __cdecl UE::CoreUObject::Private::Construct<FUnresolvedTableRowParentColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FUnresolvedTableRowParentColumn> @ 142c7a110

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FUnresolvedTableRowParentColumn>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FUnresolvedTableRowParentColumn> @ 142c7a120

void __cdecl UE::CoreUObject::Private::Destruct<FUnresolvedTableRowParentColumn>(void *param_1)

{
  byte bVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x10);
  if (9 < bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    return;
  case 5:
    return;
  case 6:
    return;
  case 8:
    return;
  case 9:
    pvVar2 = *(void **)param_1;
    if (pvVar2 != (void *)0x0) {
      if (*(void **)((longlong)pvVar2 + 0x10) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar2 + 0x10));
      }
      ::operator_delete(pvVar2,0x20);
      return;
    }
    return;
  }
  pvVar2 = *(void **)param_1;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  if (pvVar2 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar2,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar2);
  }
  return;
}

// Copy<FUnresolvedTableRowParentColumn> @ 142c7a240

bool __cdecl
UE::CoreUObject::Private::Copy<FUnresolvedTableRowParentColumn>
          (void *param_1,void *param_2,int param_3)

{
  FMapKey *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      Editor::DataStorage::FMapKey::operator=
                (this,(FMapKey *)(((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTedsRowHandle> @ 142c7a490

void __cdecl UE::CoreUObject::Private::Construct<FTedsRowHandle>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FTedsRowHandle> @ 142c7a4a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTedsRowHandle>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FTedsRowHandle> @ 142c7a4b0

void __cdecl UE::CoreUObject::Private::Destruct<FTedsRowHandle>(void *param_1)

{
  return;
}

// Construct<FTypedElementPackagePathColumn> @ 142c7a4c0

void __cdecl UE::CoreUObject::Private::Construct<FTypedElementPackagePathColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FTypedElementPackagePathColumn> @ 142c7a510

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementPackagePathColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FTypedElementPackagePathColumn> @ 142c7a520

void __cdecl UE::CoreUObject::Private::Destruct<FTypedElementPackagePathColumn>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FTedsRowHandle> @ 142c7a540

bool __cdecl UE::CoreUObject::Private::Copy<FTedsRowHandle>(void *param_1,void *param_2,int param_3)

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

// Copy<FTypedElementPackagePathColumn> @ 142c7a600

bool __cdecl
UE::CoreUObject::Private::Copy<FTypedElementPackagePathColumn>
          (void *param_1,void *param_2,int param_3)

{
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      ::FString::operator=
                (this,(FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// GetStructTypeHash<FTedsRowHandle> @ 142c7a790

uint __cdecl UE::CoreUObject::Private::GetStructTypeHash<FTedsRowHandle>(void *param_1)

{
  return (int)((ulonglong)*(undefined8 *)param_1 >> 0x20) * 0x17 + (int)*(undefined8 *)param_1;
}

// GetStructTypeHash<FTypedElementPackagePathColumn> @ 142c7a7b0

uint __cdecl
UE::CoreUObject::Private::GetStructTypeHash<FTypedElementPackagePathColumn>(void *param_1)

{
  uint uVar1;
  int iVar2;
  wchar_t *pwVar3;
  
  iVar2 = *(int *)((longlong)param_1 + 8) + -1;
  if (*(int *)((longlong)param_1 + 8) == 0) {
    pwVar3 = L"";
    iVar2 = 0;
  }
  else {
    pwVar3 = *(wchar_t **)param_1;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar2,pwVar3);
  return uVar1;
}

// Construct<FTableRowParentColumn> @ 142c7a8a0

void __cdecl UE::CoreUObject::Private::Construct<FTableRowParentColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FTableRowParentColumn> @ 142c7a8b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTableRowParentColumn>(void *param_1)

{
  return;
}

// Construct<FEditorDataStorageUiDecoratorWidgetFactoryTag> @ 142c7aa80

void __cdecl
UE::CoreUObject::Private::Construct<FEditorDataStorageUiDecoratorWidgetFactoryTag>(void *param_1)

{
  return;
}

// ConstructForTests<FEditorDataStorageUiDecoratorWidgetFactoryTag> @ 142c7aa90

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FEditorDataStorageUiDecoratorWidgetFactoryTag>
          (void *param_1)

{
  return;
}

// Construct<FTedsTypedElementColumn> @ 142c7ab20

void __cdecl UE::CoreUObject::Private::Construct<FTedsTypedElementColumn>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  return;
}

// ConstructForTests<FTedsTypedElementColumn> @ 142c7ab80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTedsTypedElementColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  return;
}

// Destruct<FTedsTypedElementColumn> @ 142c7aba0

void __cdecl UE::CoreUObject::Private::Destruct<FTedsTypedElementColumn>(void *param_1)

{
  if (*(FTypedElementInternalData **)param_1 != (FTypedElementInternalData *)0x0) {
    FTypedElementInternalData::ReleaseRef
              (*(FTypedElementInternalData **)param_1,*(int *)((longlong)param_1 + 8));
  }
  *(undefined4 *)((longlong)param_1 + 8) = 0xffffffff;
  *(undefined8 *)param_1 = 0;
  return;
}

// Copy<FTedsTypedElementColumn> @ 142c7ac30

bool __cdecl
UE::CoreUObject::Private::Copy<FTedsTypedElementColumn>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  FTypedElementInternalData *this;
  int iVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      if (puVar3 != puVar1) {
        if ((FTypedElementInternalData *)*puVar3 != (FTypedElementInternalData *)0x0) {
          FTypedElementInternalData::ReleaseRef
                    ((FTypedElementInternalData *)*puVar3,*(int *)(puVar3 + 1));
        }
        *puVar3 = 0;
        *(undefined4 *)(puVar3 + 1) = 0xffffffff;
        this = (FTypedElementInternalData *)*puVar1;
        if (this != (FTypedElementInternalData *)0x0) {
          *puVar3 = this;
          iVar2 = FTypedElementInternalData::AddRef(this,true);
          *(int *)(puVar3 + 1) = iVar2;
        }
      }
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTypedElementPackageUpdatedTag> @ 142c7aec0

void __cdecl UE::CoreUObject::Private::Construct<FTypedElementPackageUpdatedTag>(void *param_1)

{
  return;
}

// ConstructForTests<FTypedElementPackageUpdatedTag> @ 142c7aed0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementPackageUpdatedTag>(void *param_1)

{
  return;
}

// Construct<FScriptTypedElementHandle> @ 142c7b180

void __cdecl UE::CoreUObject::Private::Construct<FScriptTypedElementHandle>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FScriptTypedElementHandle> @ 142c7b190

void __cdecl UE::CoreUObject::Private::ConstructForTests<FScriptTypedElementHandle>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FScriptTypedElementHandle> @ 142c7b1a0

void __cdecl UE::CoreUObject::Private::Destruct<FScriptTypedElementHandle>(void *param_1)

{
  int *piVar1;
  
  if (*(longlong *)param_1 != 0) {
    piVar1 = (int *)(*(longlong *)param_1 + 8);
    *piVar1 = *piVar1 + -1;
    if (*(int *)((longlong)*(void **)param_1 + 8) == 0) {
      ::operator_delete(*(void **)param_1,0x10);
      *(undefined8 *)param_1 = 0;
    }
  }
  return;
}

// Copy<FScriptTypedElementHandle> @ 142c7b260

bool __cdecl
UE::CoreUObject::Private::Copy<FScriptTypedElementHandle>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_3 != 0) {
    plVar2 = param_1;
    do {
      lVar1 = *(longlong *)(((longlong)param_2 - (longlong)param_1) + (longlong)plVar2);
      *plVar2 = lVar1;
      if (lVar1 != 0) {
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      }
      param_3 = param_3 + -1;
      plVar2 = plVar2 + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTypedElementPackageReference> @ 142c7b370

void __cdecl UE::CoreUObject::Private::Construct<FTypedElementPackageReference>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FTypedElementPackageReference> @ 142c7b390

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementPackageReference>(void *param_1)

{
  return;
}

// Construct<FSCCExternallyLockedColumn> @ 142c7b460

void __cdecl UE::CoreUObject::Private::Construct<FSCCExternallyLockedColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FSCCExternallyLockedColumn> @ 142c7b470

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSCCExternallyLockedColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FSCCExternallyLockedColumn> @ 142c7b480

void __cdecl UE::CoreUObject::Private::Destruct<FSCCExternallyLockedColumn>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FSCCExternallyLockedColumn> @ 142c7b4e0

bool __cdecl
UE::CoreUObject::Private::Copy<FSCCExternallyLockedColumn>(void *param_1,void *param_2,int param_3)

{
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      ::FString::operator=
                (this,(FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTypedElementPackageUnresolvedReference> @ 142c7b5b0

void __cdecl
UE::CoreUObject::Private::Construct<FTypedElementPackageUnresolvedReference>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FTypedElementPackageUnresolvedReference> @ 142c7b5c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementPackageUnresolvedReference>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FTypedElementPackageUnresolvedReference> @ 142c7b5d0

void __cdecl
UE::CoreUObject::Private::Destruct<FTypedElementPackageUnresolvedReference>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FTypedElementPackageUnresolvedReference> @ 142c7b5f0

bool __cdecl
UE::CoreUObject::Private::Copy<FTypedElementPackageUnresolvedReference>
          (void *param_1,void *param_2,int param_3)

{
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      ::FString::operator=
                (this,(FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FFolderTag> @ 142c7b840

void __cdecl UE::CoreUObject::Private::Construct<FFolderTag>(void *param_1)

{
  return;
}

// ConstructForTests<FFolderTag> @ 142c7b850

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFolderTag>(void *param_1)

{
  return;
}

// Construct<FObjectOverrideColumn> @ 142c7ba10

void __cdecl UE::CoreUObject::Private::Construct<FObjectOverrideColumn>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  return;
}

// ConstructForTests<FObjectOverrideColumn> @ 142c7ba20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FObjectOverrideColumn>(void *param_1)

{
  return;
}

// Construct<FEditorDataStorageUObjectIdNameColumn> @ 142c7bb30

void __cdecl
UE::CoreUObject::Private::Construct<FEditorDataStorageUObjectIdNameColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FEditorDataStorageUObjectIdNameColumn> @ 142c7bb40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FEditorDataStorageUObjectIdNameColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FEditorDataStorageUObjectIdNameColumn> @ 142c7bb50

void __cdecl
UE::CoreUObject::Private::Destruct<FEditorDataStorageUObjectIdNameColumn>(void *param_1)

{
  return;
}

// Copy<FEditorDataStorageUObjectIdNameColumn> @ 142c7bba0

bool __cdecl
UE::CoreUObject::Private::Copy<FEditorDataStorageUObjectIdNameColumn>
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

// Construct<FSCCUserInfo> @ 142c7bc90

void __cdecl UE::CoreUObject::Private::Construct<FSCCUserInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FSCCUserInfo> @ 142c7bca0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSCCUserInfo>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FSCCUserInfo> @ 142c7bcf0

void __cdecl UE::CoreUObject::Private::Destruct<FSCCUserInfo>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FSCCUserInfo> @ 142c7bd10

bool __cdecl UE::CoreUObject::Private::Copy<FSCCUserInfo>(void *param_1,void *param_2,int param_3)

{
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      ::FString::operator=
                (this,(FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FFavoriteTag> @ 142c7be20

void __cdecl UE::CoreUObject::Private::Construct<FFavoriteTag>(void *param_1)

{
  return;
}

// ConstructForTests<FFavoriteTag> @ 142c7be30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFavoriteTag>(void *param_1)

{
  return;
}

// Construct<FTypedElementPropertyBagPlaceholderTypeInfoColumn> @ 142c7be40

void __cdecl
UE::CoreUObject::Private::Construct<FTypedElementPropertyBagPlaceholderTypeInfoColumn>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FTypedElementPropertyBagPlaceholderTypeInfoColumn> @ 142c7be50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementPropertyBagPlaceholderTypeInfoColumn>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FTypedElementPropertyBagPlaceholderTypeInfoColumn> @ 142c7be60

void __cdecl
UE::CoreUObject::Private::Destruct<FTypedElementPropertyBagPlaceholderTypeInfoColumn>(void *param_1)

{
  return;
}

// Copy<FTypedElementPropertyBagPlaceholderTypeInfoColumn> @ 142c7be70

bool __cdecl
UE::CoreUObject::Private::Copy<FTypedElementPropertyBagPlaceholderTypeInfoColumn>
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

// Construct<FSCCExternalRevisionIdColumn> @ 142c7bf60

void __cdecl UE::CoreUObject::Private::Construct<FSCCExternalRevisionIdColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FSCCExternalRevisionIdColumn> @ 142c7bf80

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSCCExternalRevisionIdColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FSCCExternalRevisionIdColumn> @ 142c7bfa0

void __cdecl UE::CoreUObject::Private::Destruct<FSCCExternalRevisionIdColumn>(void *param_1)

{
  return;
}

// Copy<FSCCExternalRevisionIdColumn> @ 142c7bfb0

bool __cdecl
UE::CoreUObject::Private::Copy<FSCCExternalRevisionIdColumn>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FNameColumn> @ 142c7c030

void __cdecl UE::CoreUObject::Private::Construct<FNameColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FNameColumn> @ 142c7c040

void __cdecl UE::CoreUObject::Private::ConstructForTests<FNameColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FNameColumn> @ 142c7c050

void __cdecl UE::CoreUObject::Private::Destruct<FNameColumn>(void *param_1)

{
  return;
}

// Copy<FNameColumn> @ 142c7c060

bool __cdecl UE::CoreUObject::Private::Copy<FNameColumn>(void *param_1,void *param_2,int param_3)

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

// Construct<FTypedElementLoosePropertyTag> @ 142c7c090

void __cdecl UE::CoreUObject::Private::Construct<FTypedElementLoosePropertyTag>(void *param_1)

{
  return;
}

// ConstructForTests<FTypedElementLoosePropertyTag> @ 142c7c0a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementLoosePropertyTag>(void *param_1)

{
  return;
}

// Construct<FSCCRevisionIdColumn> @ 142c7c0b0

void __cdecl UE::CoreUObject::Private::Construct<FSCCRevisionIdColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FSCCRevisionIdColumn> @ 142c7c0d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSCCRevisionIdColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FSCCRevisionIdColumn> @ 142c7c0f0

void __cdecl UE::CoreUObject::Private::Destruct<FSCCRevisionIdColumn>(void *param_1)

{
  return;
}

// Copy<FSCCRevisionIdColumn> @ 142c7c100

bool __cdecl
UE::CoreUObject::Private::Copy<FSCCRevisionIdColumn>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTypedElementRowReferenceColumn> @ 142c7c140

void __cdecl UE::CoreUObject::Private::Construct<FTypedElementRowReferenceColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FTypedElementRowReferenceColumn> @ 142c7c150

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementRowReferenceColumn>(void *param_1)

{
  return;
}

// Construct<FTypedElementPropertyBagPlaceholderTag> @ 142c7c160

void __cdecl
UE::CoreUObject::Private::Construct<FTypedElementPropertyBagPlaceholderTag>(void *param_1)

{
  return;
}

// ConstructForTests<FTypedElementPropertyBagPlaceholderTag> @ 142c7c170

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementPropertyBagPlaceholderTag>(void *param_1)

{
  return;
}

// Construct<FSCCRevisionId> @ 142c7c180

void __cdecl UE::CoreUObject::Private::Construct<FSCCRevisionId>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FSCCRevisionId> @ 142c7c1a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSCCRevisionId>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FSCCRevisionId> @ 142c7c1c0

void __cdecl UE::CoreUObject::Private::Destruct<FSCCRevisionId>(void *param_1)

{
  return;
}

// Copy<FSCCRevisionId> @ 142c7c210

bool __cdecl UE::CoreUObject::Private::Copy<FSCCRevisionId>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTypedElementSyncFromWorldInteractiveTag> @ 142c7c250

void __cdecl
UE::CoreUObject::Private::Construct<FTypedElementSyncFromWorldInteractiveTag>(void *param_1)

{
  return;
}

// ConstructForTests<FTypedElementSyncFromWorldInteractiveTag> @ 142c7c260

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementSyncFromWorldInteractiveTag>(void *param_1)

{
  return;
}

// Construct<FEditorDataStorageLevelTag> @ 142c7c270

void __cdecl UE::CoreUObject::Private::Construct<FEditorDataStorageLevelTag>(void *param_1)

{
  return;
}

// ConstructForTests<FEditorDataStorageLevelTag> @ 142c7c280

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEditorDataStorageLevelTag>(void *param_1)

{
  return;
}

// Construct<FSCCStatusColumn> @ 142c7c290

void __cdecl UE::CoreUObject::Private::Construct<FSCCStatusColumn>(void *param_1)

{
  *(undefined4 *)param_1 = 1;
  return;
}

// ConstructForTests<FSCCStatusColumn> @ 142c7c2a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSCCStatusColumn>(void *param_1)

{
  *(undefined4 *)param_1 = 1;
  return;
}

// Destruct<FSCCStatusColumn> @ 142c7c2b0

void __cdecl UE::CoreUObject::Private::Destruct<FSCCStatusColumn>(void *param_1)

{
  return;
}

// Construct<FTypedElementSyncFromWorldTag> @ 142c7c2c0

void __cdecl UE::CoreUObject::Private::Construct<FTypedElementSyncFromWorldTag>(void *param_1)

{
  return;
}

// ConstructForTests<FTypedElementSyncFromWorldTag> @ 142c7c2d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementSyncFromWorldTag>(void *param_1)

{
  return;
}

// Copy<FSCCStatusColumn> @ 142c7c2e0

bool __cdecl
UE::CoreUObject::Private::Copy<FSCCStatusColumn>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTypedElementLevelColumn> @ 142c7c310

void __cdecl UE::CoreUObject::Private::Construct<FTypedElementLevelColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FTypedElementLevelColumn> @ 142c7c320

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTypedElementLevelColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FTypedElementLevelColumn> @ 142c7c330

void __cdecl UE::CoreUObject::Private::Destruct<FTypedElementLevelColumn>(void *param_1)

{
  return;
}

// Copy<FTypedElementLevelColumn> @ 142c7c340

bool __cdecl
UE::CoreUObject::Private::Copy<FTypedElementLevelColumn>(void *param_1,void *param_2,int param_3)

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

// Construct<FTypedElementSyncBackToWorldTag> @ 142c7c370

void __cdecl UE::CoreUObject::Private::Construct<FTypedElementSyncBackToWorldTag>(void *param_1)

{
  return;
}

// ConstructForTests<FTypedElementSyncBackToWorldTag> @ 142c7c380

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementSyncBackToWorldTag>(void *param_1)

{
  return;
}

// Construct<FSCCNotCurrentTag> @ 142c7c390

void __cdecl UE::CoreUObject::Private::Construct<FSCCNotCurrentTag>(void *param_1)

{
  return;
}

// ConstructForTests<FSCCNotCurrentTag> @ 142c7c3a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSCCNotCurrentTag>(void *param_1)

{
  return;
}

// Construct<FEditorDataStorageWorldTag> @ 142c7c3e0

void __cdecl UE::CoreUObject::Private::Construct<FEditorDataStorageWorldTag>(void *param_1)

{
  return;
}

// ConstructForTests<FEditorDataStorageWorldTag> @ 142c7c3f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEditorDataStorageWorldTag>(void *param_1)

{
  return;
}

// Construct<FScriptTypedElementListProxy> @ 142c7c450

void __cdecl UE::CoreUObject::Private::Construct<FScriptTypedElementListProxy>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FScriptTypedElementListProxy> @ 142c7c460

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FScriptTypedElementListProxy>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FScriptTypedElementListProxy> @ 142c7c470

void __cdecl UE::CoreUObject::Private::Destruct<FScriptTypedElementListProxy>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Copy<FScriptTypedElementListProxy> @ 142c7c480

bool __cdecl
UE::CoreUObject::Private::Copy<FScriptTypedElementListProxy>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      lVar1 = *(longlong *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1) + 8);
      uVar2 = *(undefined8 *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1));
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pTVar3 = (TReferenceControllerBase<1> *)puVar4[1];
      *puVar4 = uVar2;
      puVar4[1] = lVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTypedElementWorldColumn> @ 142c7c500

void __cdecl UE::CoreUObject::Private::Construct<FTypedElementWorldColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FTypedElementWorldColumn> @ 142c7c510

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTypedElementWorldColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FTypedElementWorldColumn> @ 142c7c560

void __cdecl UE::CoreUObject::Private::Destruct<FTypedElementWorldColumn>(void *param_1)

{
  return;
}

// Copy<FTypedElementWorldColumn> @ 142c7c5b0

bool __cdecl
UE::CoreUObject::Private::Copy<FTypedElementWorldColumn>(void *param_1,void *param_2,int param_3)

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

// Construct<FSCCExternallyEditedTag> @ 142c7c5e0

void __cdecl UE::CoreUObject::Private::Construct<FSCCExternallyEditedTag>(void *param_1)

{
  return;
}

// ConstructForTests<FSCCExternallyEditedTag> @ 142c7c5f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSCCExternallyEditedTag>(void *param_1)

{
  return;
}

// Construct<FTypedElementActorTag> @ 142c7c7c0

void __cdecl UE::CoreUObject::Private::Construct<FTypedElementActorTag>(void *param_1)

{
  return;
}

// ConstructForTests<FTypedElementActorTag> @ 142c7c7d0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTypedElementActorTag>(void *param_1)

{
  return;
}

// Construct<FSCCLockedTag> @ 142c7c7e0

void __cdecl UE::CoreUObject::Private::Construct<FSCCLockedTag>(void *param_1)

{
  return;
}

// ConstructForTests<FSCCLockedTag> @ 142c7c7f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSCCLockedTag>(void *param_1)

{
  return;
}

// Construct<FTypedElementClassDefaultObjectTag> @ 142c7c8c0

void __cdecl UE::CoreUObject::Private::Construct<FTypedElementClassDefaultObjectTag>(void *param_1)

{
  return;
}

// ConstructForTests<FTypedElementClassDefaultObjectTag> @ 142c7c8d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementClassDefaultObjectTag>(void *param_1)

{
  return;
}

// Construct<FSCCStagedTag> @ 142c7c8e0

void __cdecl UE::CoreUObject::Private::Construct<FSCCStagedTag>(void *param_1)

{
  return;
}

// ConstructForTests<FSCCStagedTag> @ 142c7c8f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSCCStagedTag>(void *param_1)

{
  return;
}

// Construct<FTypedElementLabelHashColumn> @ 142c7c900

void __cdecl UE::CoreUObject::Private::Construct<FTypedElementLabelHashColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FTypedElementLabelHashColumn> @ 142c7c910

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementLabelHashColumn>(void *param_1)

{
  return;
}

// Construct<FTypedElementExternalObjectColumn> @ 142c7c9e0

void __cdecl UE::CoreUObject::Private::Construct<FTypedElementExternalObjectColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FTypedElementExternalObjectColumn> @ 142c7c9f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementExternalObjectColumn>(void *param_1)

{
  return;
}

// Construct<FSCCInChangelistTag> @ 142c7ca80

void __cdecl UE::CoreUObject::Private::Construct<FSCCInChangelistTag>(void *param_1)

{
  return;
}

// ConstructForTests<FSCCInChangelistTag> @ 142c7ca90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSCCInChangelistTag>(void *param_1)

{
  return;
}

// Construct<FTypedElementLabelColumn> @ 142c7cce0

void __cdecl UE::CoreUObject::Private::Construct<FTypedElementLabelColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FTypedElementLabelColumn> @ 142c7cd30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTypedElementLabelColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FTypedElementLabelColumn> @ 142c7cd40

void __cdecl UE::CoreUObject::Private::Destruct<FTypedElementLabelColumn>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FTypedElementLabelColumn> @ 142c7cea0

bool __cdecl
UE::CoreUObject::Private::Copy<FTypedElementLabelColumn>(void *param_1,void *param_2,int param_3)

{
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      ::FString::operator=
                (this,(FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTypedElementUObjectIdColumn> @ 142c7cfe0

void __cdecl UE::CoreUObject::Private::Construct<FTypedElementUObjectIdColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FTypedElementUObjectIdColumn> @ 142c7cff0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementUObjectIdColumn>(void *param_1)

{
  return;
}

// Construct<FTypedElementPivotOffset> @ 142c7d000

void __cdecl UE::CoreUObject::Private::Construct<FTypedElementPivotOffset>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FTypedElementPivotOffset> @ 142c7d020

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTypedElementPivotOffset>(void *param_1)

{
  return;
}

// Construct<FTypedElementIconOverrideColumn> @ 142c7d0b0

void __cdecl UE::CoreUObject::Private::Construct<FTypedElementIconOverrideColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FTypedElementIconOverrideColumn> @ 142c7d0c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementIconOverrideColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FTypedElementIconOverrideColumn> @ 142c7d0d0

void __cdecl UE::CoreUObject::Private::Destruct<FTypedElementIconOverrideColumn>(void *param_1)

{
  return;
}

// Copy<FTypedElementIconOverrideColumn> @ 142c7d120

bool __cdecl
UE::CoreUObject::Private::Copy<FTypedElementIconOverrideColumn>
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

// Copy<FTedsWidgetConstructorBase> @ 142c81db0

bool __cdecl
UE::CoreUObject::Private::Copy<FTedsWidgetConstructorBase>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  ForAnyElementType *pFVar2;
  int *piVar3;
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar4;
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  TBitArray<FDefaultBitArrayAllocator> *pTVar5;
  int iVar6;
  FScriptContainerElement *_Src;
  void *pvVar7;
  
  pvVar7 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    pFVar1 = (ForAnyElementType *)((longlong)pvVar7 + (longlong)param_2 + (8 - (longlong)param_1));
    pFVar2 = (ForAnyElementType *)((longlong)pvVar7 + 8);
    if (pFVar2 != pFVar1) {
      iVar6 = *(int *)((longlong)pvVar7 + (longlong)param_2 + (0x10 - (longlong)param_1));
      piVar3 = (int *)((longlong)pvVar7 + 0x14);
      _Src = pFVar1->Data;
      *(int *)((longlong)pvVar7 + 0x10) = iVar6;
      if ((iVar6 == 0) && (*piVar3 == 0)) {
        *piVar3 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar6,*piVar3,pFVar2,iVar6,piVar3);
        if (iVar6 != 0) {
          memcpy(pFVar2->Data,_Src,(longlong)iVar6 << 3);
        }
      }
    }
    pTVar4 = (TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)pvVar7 + (longlong)param_2 + (0x18 - (longlong)param_1));
    this = (TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *)((longlong)pvVar7 + 0x18);
    if (this != pTVar4) {
      Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)((longlong)pvVar7 + 0x50),
                 (int *)((longlong)pvVar7 + 0x60),
                 (ForElementType<FSetElementId> *)
                 ((longlong)pvVar7 + (longlong)param_2 + (0x50 - (longlong)param_1)),
                 *(int *)((longlong)pvVar7 + (longlong)param_2 + (0x60 - (longlong)param_1)));
      iVar6 = *(int *)((longlong)pvVar7 + (longlong)param_2 + (0x20 - (longlong)param_1));
      TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty(this,iVar6);
      Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,iVar6,(ForAnyElementType *)this,(int *)((longlong)pvVar7 + 0x20),
                 (int *)((longlong)pvVar7 + 0x24));
      pTVar5 = (TBitArray<FDefaultBitArrayAllocator> *)
               ((longlong)pvVar7 + (longlong)param_2 + (0x28 - (longlong)param_1));
      *(undefined4 *)((longlong)pvVar7 + 0x48) =
           *(undefined4 *)((longlong)pvVar7 + (longlong)param_2 + (0x48 - (longlong)param_1));
      *(undefined4 *)((longlong)pvVar7 + 0x4c) =
           *(undefined4 *)((longlong)pvVar7 + (longlong)param_2 + (0x4c - (longlong)param_1));
      if ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)pvVar7 + 0x28) != pTVar5) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)pvVar7 + 0x28),pTVar5);
      }
      if (iVar6 != 0) {
        memcpy(*(void **)this,*(void **)pTVar4,(longlong)iVar6 * 0x18);
      }
    }
    *(undefined8 *)((longlong)pvVar7 + 0x68) =
         *(undefined8 *)((longlong)pvVar7 + (longlong)param_2 + (0x68 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar7 + 0x70) =
         *(undefined8 *)((longlong)pvVar7 + (longlong)param_2 + (0x70 - (longlong)param_1));
    *(undefined8 *)((longlong)pvVar7 + 0x78) =
         *(undefined8 *)((longlong)pvVar7 + (longlong)param_2 + (0x78 - (longlong)param_1));
    pvVar7 = (void *)((longlong)pvVar7 + 0x80);
  }
  return true;
}

// Construct<FTestTagColumnA> @ 142c82030

void __cdecl UE::CoreUObject::Private::Construct<FTestTagColumnA>(void *param_1)

{
  return;
}

// ConstructForTests<FTestTagColumnA> @ 142c82040

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTestTagColumnA>(void *param_1)

{
  return;
}

// Construct<FEditorDataStorageColumn> @ 142c82110

void __cdecl UE::CoreUObject::Private::Construct<FEditorDataStorageColumn>(void *param_1)

{
  return;
}

// ConstructForTests<FEditorDataStorageColumn> @ 142c82120

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEditorDataStorageColumn>(void *param_1)

{
  return;
}

// Construct<FTypedElementViewportOverlayColorColumn> @ 142c82170

void __cdecl
UE::CoreUObject::Private::Construct<FTypedElementViewportOverlayColorColumn>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FTypedElementViewportOverlayColorColumn> @ 142c82180

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementViewportOverlayColorColumn>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// Destruct<FTypedElementViewportOverlayColorColumn> @ 142c82190

void __cdecl
UE::CoreUObject::Private::Destruct<FTypedElementViewportOverlayColorColumn>(void *param_1)

{
  return;
}

// Copy<FTypedElementViewportOverlayColorColumn> @ 142c82220

bool __cdecl
UE::CoreUObject::Private::Copy<FTypedElementViewportOverlayColorColumn>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTedsDecoratorWidgetConstructor> @ 142c82340

void __cdecl UE::CoreUObject::Private::Construct<FTedsDecoratorWidgetConstructor>(void *param_1)

{
  FWeakObjectPtr *this;
  undefined8 local_res8 [4];
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined ***)param_1 = &___7FTedsDecoratorWidgetConstructor__6B_;
  this = (FWeakObjectPtr *)((longlong)param_1 + 0x80);
  local_res8[0] = 0;
  this->ObjectIndex = 0;
  this->ObjectSerialNumber = 0;
  FWeakObjectPtr::operator=(this,(FObjectPtr)local_res8);
  return;
}

// ConstructForTests<FTedsDecoratorWidgetConstructor> @ 142c823f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTedsDecoratorWidgetConstructor>(void *param_1)

{
  FWeakObjectPtr *this;
  undefined8 local_res8 [4];
  
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined ***)param_1 = &___7FTedsDecoratorWidgetConstructor__6B_;
  this = (FWeakObjectPtr *)((longlong)param_1 + 0x80);
  local_res8[0] = 0;
  this->ObjectIndex = 0;
  this->ObjectSerialNumber = 0;
  FWeakObjectPtr::operator=(this,(FObjectPtr)local_res8);
  return;
}

// Destruct<FTedsDecoratorWidgetConstructor> @ 142c82460

void __cdecl UE::CoreUObject::Private::Destruct<FTedsDecoratorWidgetConstructor>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  return;
}

// Construct<FTestColumnString> @ 142c824b0

void __cdecl UE::CoreUObject::Private::Construct<FTestColumnString>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FTestColumnString> @ 142c824c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTestColumnString>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FTestColumnString> @ 142c824d0

void __cdecl UE::CoreUObject::Private::Destruct<FTestColumnString>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FTedsDecoratorWidgetConstructor> @ 142c82530

bool __cdecl
UE::CoreUObject::Private::Copy<FTedsDecoratorWidgetConstructor>
          (void *param_1,void *param_2,int param_3)

{
  FTedsWidgetConstructorBase *pFVar1;
  FTedsWidgetConstructorBase *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FTedsWidgetConstructorBase *)
               (((longlong)param_2 - (longlong)param_1) + (longlong)this);
      FTedsWidgetConstructorBase::operator=(this,pFVar1);
      this[1]._padding_ = pFVar1[1]._padding_;
      param_3 = param_3 + -1;
      this = (FTedsWidgetConstructorBase *)&this[1].MatchedColumnTypes;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FTestColumnString> @ 142c82660

bool __cdecl
UE::CoreUObject::Private::Copy<FTestColumnString>(void *param_1,void *param_2,int param_3)

{
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      ::FString::operator=
                (this,(FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWidgetFactoryConstructorColumn> @ 142c827a0

void __cdecl UE::CoreUObject::Private::Construct<FWidgetFactoryConstructorColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FWidgetFactoryConstructorColumn> @ 142c827f0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FWidgetFactoryConstructorColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FWidgetFactoryConstructorColumn> @ 142c82800

void __cdecl UE::CoreUObject::Private::Destruct<FWidgetFactoryConstructorColumn>(void *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142c82810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// Construct<FTypedElementViewportOutlineColorColumn> @ 142c82860

void __cdecl
UE::CoreUObject::Private::Construct<FTypedElementViewportOutlineColorColumn>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  return;
}

// ConstructForTests<FTypedElementViewportOutlineColorColumn> @ 142c82870

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementViewportOutlineColorColumn>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  return;
}

// Destruct<FTypedElementViewportOutlineColorColumn> @ 142c82880

void __cdecl
UE::CoreUObject::Private::Destruct<FTypedElementViewportOutlineColorColumn>(void *param_1)

{
  return;
}

// Copy<FTypedElementViewportOutlineColorColumn> @ 142c828d0

bool __cdecl
UE::CoreUObject::Private::Copy<FTypedElementViewportOutlineColorColumn>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      param_1 = (void *)((longlong)param_1 + 1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTestColumnInt> @ 142c82980

void __cdecl UE::CoreUObject::Private::Construct<FTestColumnInt>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FTestColumnInt> @ 142c82990

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTestColumnInt>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// Destruct<FTestColumnInt> @ 142c829a0

void __cdecl UE::CoreUObject::Private::Destruct<FTestColumnInt>(void *param_1)

{
  return;
}

// Copy<FTestColumnInt> @ 142c82b70

bool __cdecl UE::CoreUObject::Private::Copy<FTestColumnInt>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTypedElementFloatValueCacheColumn> @ 142c82cc0

void __cdecl UE::CoreUObject::Private::Construct<FTypedElementFloatValueCacheColumn>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FTypedElementFloatValueCacheColumn> @ 142c82cd0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementFloatValueCacheColumn>(void *param_1)

{
  return;
}

// Construct<FWidgetFactoryConditionsColumn> @ 142c82cf0

void __cdecl UE::CoreUObject::Private::Construct<FWidgetFactoryConditionsColumn>(void *param_1)

{
  memset(param_1,0,0x2a8);
  Editor::DataStorage::Queries::FConditions::FConditions(param_1);
  return;
}

// ConstructForTests<FWidgetFactoryConditionsColumn> @ 142c82d20

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FWidgetFactoryConditionsColumn>(void *param_1)

{
  int *piVar1;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> *pFVar2;
  ForElementType<FName> *pFVar3;
  int *piVar4;
  int *piVar5;
  FWeakObjectPtr *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  ForElementType<FName> *pFVar10;
  ForElementType<FName> *pFVar11;
  FWeakObjectPtr *pFVar12;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> *pFVar13;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> *pFVar14;
  void *pvVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 uStackX_8;
  uchar auStack_48 [4];
  FWeakObjectPtr FStack_44;
  uchar uStack_3c;
  uchar uStack_3b;
  uchar uStack_3a;
  uchar uStack_39;
  uchar uStack_38;
  uchar uStack_37;
  uchar uStack_36;
  uchar uStack_35;
  
  pFVar2 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> *)
           ((longlong)param_1 + 0x140);
  *(undefined8 *)((longlong)param_1 + 0x100) = 0;
  pFVar3 = (ForElementType<FName> *)((longlong)param_1 + 400);
  *(undefined4 *)((longlong)param_1 + 0x108) = 0;
  piVar4 = (int *)((longlong)param_1 + 0x29c);
  lVar16 = 0x20;
  uStack_3c = '\0';
  uStack_3b = '\0';
  uStack_3a = '\0';
  uStack_39 = '\0';
  uStack_38 = '\0';
  uStack_37 = '\0';
  uStack_36 = '\0';
  uStack_35 = '\0';
  piVar5 = (int *)((longlong)param_1 + 0x10c);
  *piVar5 = 0x20;
  piVar1 = (int *)((longlong)param_1 + 0x18c);
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined4 *)((longlong)param_1 + 0x138) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x20;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined4 *)((longlong)param_1 + 0x188) = 0;
  *piVar1 = 0x40;
  *(undefined8 *)((longlong)param_1 + 0x290) = 0;
  *piVar4 = 0x20;
  *(undefined2 *)((longlong)param_1 + 0x2a0) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2a2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x298) = 0;
  if (*piVar4 != 0x20) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
              (8,4,0x20,pFVar3,0,piVar4);
  }
  lVar17 = 0x20;
  do {
    pFVar11 = *(ForElementType<FName> **)((longlong)param_1 + 0x290);
    pFVar10 = pFVar3;
    if (pFVar11 != (ForElementType<FName> *)0x0) {
      pFVar10 = pFVar11;
    }
    if (pFVar10 <= (ForElementType<FName> *)&stack0xffffffffffffffc4) {
      if (pFVar11 == (ForElementType<FName> *)0x0) {
        pFVar11 = pFVar3;
      }
      if ((&stack0xffffffffffffffc4 < pFVar11->InlineData + (longlong)*piVar4 * 8) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar9 = *(int *)((longlong)param_1 + 0x298);
    if (iVar9 == *piVar4) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                        (0x408,pFVar3,piVar4);
    }
    *(int *)((longlong)param_1 + 0x298) = iVar9 + 1;
    pFVar11 = pFVar3;
    if (*(ForElementType<FName> **)((longlong)param_1 + 0x290) != (ForElementType<FName> *)0x0) {
      pFVar11 = *(ForElementType<FName> **)((longlong)param_1 + 0x290);
    }
    *(undefined8 *)(pFVar11->InlineData + (longlong)iVar9 * 8) = _uStack_3c;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  FStack_44.ObjectIndex = 0;
  FStack_44.ObjectSerialNumber = 0;
  uStackX_8 = 0;
  FWeakObjectPtr::operator=(&FStack_44,(FObjectPtr)&stack0x00000008);
  *(undefined4 *)((longlong)param_1 + 0x108) = 0;
  if (*piVar5 != 0x20) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_>
              (8,4,0x20,param_1,0,piVar5);
  }
  do {
    pFVar6 = *(FWeakObjectPtr **)((longlong)param_1 + 0x100);
    pFVar12 = param_1;
    if (pFVar6 != (FWeakObjectPtr *)0x0) {
      pFVar12 = pFVar6;
    }
    if (pFVar12 <= &FStack_44) {
      pFVar12 = param_1;
      if (pFVar6 != (FWeakObjectPtr *)0x0) {
        pFVar12 = pFVar6;
      }
      if ((&FStack_44 < pFVar12 + *piVar5) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar9 = *(int *)((longlong)param_1 + 0x108);
    if (iVar9 == *piVar5) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_>
                        (0x408,param_1,piVar5);
    }
    *(int *)((longlong)param_1 + 0x108) = iVar9 + 1;
    pvVar15 = param_1;
    if (*(void **)((longlong)param_1 + 0x100) != (void *)0x0) {
      pvVar15 = *(void **)((longlong)param_1 + 0x100);
    }
    *(FWeakObjectPtr *)((longlong)pvVar15 + (longlong)iVar9 * 8) = FStack_44;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  auStack_48[0] = '\0';
  *(undefined4 *)((longlong)param_1 + 0x188) = 0;
  if (*piVar1 == 0x40) {
    lVar16 = 0x40;
  }
  else {
    lVar16 = 0x40;
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::Queries::FConditions::Token>_>
              (1,1,0x40,pFVar2,0,piVar1);
  }
  do {
    pFVar14 = *(ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> **)
               ((longlong)param_1 + 0x180);
    pFVar13 = pFVar2;
    if (pFVar14 != (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> *)0x0) {
      pFVar13 = pFVar14;
    }
    if (pFVar13 <=
        (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> *)auStack_48) {
      if (pFVar14 == (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> *)0x0) {
        pFVar14 = pFVar2;
      }
      if ((auStack_48 < pFVar14->InlineData + *piVar1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar9 = *(int *)((longlong)param_1 + 0x188);
    if (iVar9 == *piVar1) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::Queries::FConditions::Token>_>
                        (0x101,pFVar2,piVar1);
    }
    *(int *)((longlong)param_1 + 0x188) = iVar9 + 1;
    pFVar14 = pFVar2;
    if (*(ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> **)
         ((longlong)param_1 + 0x180) !=
        (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> *)0x0) {
      pFVar14 = *(ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> **)
                 ((longlong)param_1 + 0x180);
    }
    pFVar14->InlineData[iVar9] = auStack_48[0];
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  return;
}

// Destruct<FWidgetFactoryConditionsColumn> @ 142c82d30

void __cdecl UE::CoreUObject::Private::Destruct<FWidgetFactoryConditionsColumn>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x290) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x290));
  }
  if (*(void **)((longlong)param_1 + 0x180) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x180));
  }
  if (*(void **)((longlong)param_1 + 0x130) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x130));
  }
  if (*(void **)((longlong)param_1 + 0x100) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x100));
    return;
  }
  return;
}

// Copy<FWidgetFactoryConditionsColumn> @ 142c82e10

bool __cdecl
UE::CoreUObject::Private::Copy<FWidgetFactoryConditionsColumn>
          (void *param_1,void *param_2,int param_3)

{
  FConditions *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      Editor::DataStorage::Queries::FConditions::operator=
                (this,(FConditions *)(((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTestColumnDynamic> @ 142c82e60

void __cdecl UE::CoreUObject::Private::Construct<FTestColumnDynamic>(void *param_1)

{
  return;
}

// ConstructForTests<FTestColumnDynamic> @ 142c82e70

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTestColumnDynamic>(void *param_1)

{
  return;
}

// Construct<FTypedElementI64IntValueCacheColumn> @ 142c82f00

void __cdecl UE::CoreUObject::Private::Construct<FTypedElementI64IntValueCacheColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FTypedElementI64IntValueCacheColumn> @ 142c82f10

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementI64IntValueCacheColumn>(void *param_1)

{
  return;
}

// Construct<FWidgetConstructorNameColumn> @ 142c82f70

void __cdecl UE::CoreUObject::Private::Construct<FWidgetConstructorNameColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FWidgetConstructorNameColumn> @ 142c82fc0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FWidgetConstructorNameColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FWidgetConstructorNameColumn> @ 142c82fd0

void __cdecl UE::CoreUObject::Private::Destruct<FWidgetConstructorNameColumn>(void *param_1)

{
  return;
}

// Construct<FTestColumnG> @ 142c83020

void __cdecl UE::CoreUObject::Private::Construct<FTestColumnG>(void *param_1)

{
  return;
}

// Copy<FWidgetConstructorNameColumn> @ 142c83030

bool __cdecl
UE::CoreUObject::Private::Copy<FWidgetConstructorNameColumn>
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

// ConstructForTests<FTestColumnG> @ 142c83060

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTestColumnG>(void *param_1)

{
  return;
}

// Construct<FTypedElementU64IntValueCacheColumn> @ 142c830b0

void __cdecl UE::CoreUObject::Private::Construct<FTypedElementU64IntValueCacheColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FTypedElementU64IntValueCacheColumn> @ 142c83100

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementU64IntValueCacheColumn>(void *param_1)

{
  return;
}

// Construct<FTestColumnF> @ 142c83190

void __cdecl UE::CoreUObject::Private::Construct<FTestColumnF>(void *param_1)

{
  return;
}

// ConstructForTests<FTestColumnF> @ 142c831a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTestColumnF>(void *param_1)

{
  return;
}

// Construct<FWidgetFactoryConstructorTypeInfoColumn> @ 142c83220

void __cdecl
UE::CoreUObject::Private::Construct<FWidgetFactoryConstructorTypeInfoColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FWidgetFactoryConstructorTypeInfoColumn> @ 142c842e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FWidgetFactoryConstructorTypeInfoColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FWidgetFactoryConstructorTypeInfoColumn> @ 142c842f0

void __cdecl
UE::CoreUObject::Private::Destruct<FWidgetFactoryConstructorTypeInfoColumn>(void *param_1)

{
  return;
}

// Copy<FWidgetFactoryConstructorTypeInfoColumn> @ 142c84340

bool __cdecl
UE::CoreUObject::Private::Copy<FWidgetFactoryConstructorTypeInfoColumn>
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

// Construct<FTypedElementI32IntValueCacheColumn> @ 142c84400

void __cdecl UE::CoreUObject::Private::Construct<FTypedElementI32IntValueCacheColumn>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FTypedElementI32IntValueCacheColumn> @ 142c844b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementI32IntValueCacheColumn>(void *param_1)

{
  return;
}

// Construct<FTestColumnE> @ 142c84810

void __cdecl UE::CoreUObject::Private::Construct<FTestColumnE>(void *param_1)

{
  return;
}

// ConstructForTests<FTestColumnE> @ 142c84820

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTestColumnE>(void *param_1)

{
  return;
}

// Construct<FWidgetFactoryColumn> @ 142c84830

void __cdecl UE::CoreUObject::Private::Construct<FWidgetFactoryColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FWidgetFactoryColumn> @ 142c84840

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWidgetFactoryColumn>(void *param_1)

{
  return;
}

// Construct<FTypedElementU32IntValueCacheColumn> @ 142c84890

void __cdecl UE::CoreUObject::Private::Construct<FTypedElementU32IntValueCacheColumn>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FTypedElementU32IntValueCacheColumn> @ 142c848a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementU32IntValueCacheColumn>(void *param_1)

{
  return;
}

// Construct<FTestColumnD> @ 142c848f0

void __cdecl UE::CoreUObject::Private::Construct<FTestColumnD>(void *param_1)

{
  return;
}

// ConstructForTests<FTestColumnD> @ 142c84960

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTestColumnD>(void *param_1)

{
  return;
}

// Construct<FWidgetPurposeNameColumn> @ 142c84c10

void __cdecl UE::CoreUObject::Private::Construct<FWidgetPurposeNameColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FWidgetPurposeNameColumn> @ 142c84c30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWidgetPurposeNameColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FWidgetPurposeNameColumn> @ 142c84c50

void __cdecl UE::CoreUObject::Private::Destruct<FWidgetPurposeNameColumn>(void *param_1)

{
  return;
}

// Copy<FWidgetPurposeNameColumn> @ 142c84cd0

bool __cdecl
UE::CoreUObject::Private::Copy<FWidgetPurposeNameColumn>(void *param_1,void *param_2,int param_3)

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

// Construct<FHideRowFromUITag> @ 142c85e50

void __cdecl UE::CoreUObject::Private::Construct<FHideRowFromUITag>(void *param_1)

{
  return;
}

// ConstructForTests<FHideRowFromUITag> @ 142c85e60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FHideRowFromUITag>(void *param_1)

{
  return;
}

// Construct<FTestColumnC> @ 142c85f30

void __cdecl UE::CoreUObject::Private::Construct<FTestColumnC>(void *param_1)

{
  return;
}

// ConstructForTests<FTestColumnC> @ 142c85f40

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTestColumnC>(void *param_1)

{
  return;
}

// Construct<FWidgetPurposeColumn> @ 142c85f90

void __cdecl UE::CoreUObject::Private::Construct<FWidgetPurposeColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FWidgetPurposeColumn> @ 142c85fb0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FWidgetPurposeColumn>(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FWidgetPurposeColumn> @ 142c85fc0

void __cdecl UE::CoreUObject::Private::Destruct<FWidgetPurposeColumn>(void *param_1)

{
  byte bVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x18);
  if (9 < bVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    return;
  case 5:
    return;
  case 6:
    return;
  case 8:
    return;
  case 9:
    pvVar2 = *(void **)((longlong)param_1 + 8);
    if (pvVar2 != (void *)0x0) {
      if (*(void **)((longlong)pvVar2 + 0x10) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar2 + 0x10));
      }
      ::operator_delete(pvVar2,0x20);
      return;
    }
    return;
  }
  pvVar2 = *(void **)((longlong)param_1 + 8);
  if (pvVar2 == (void *)0x0) {
    return;
  }
  if (pvVar2 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar2,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar2);
  }
  return;
}

// Construct<FTypedElementScriptStructTypeInfoColumn> @ 142c86020

void __cdecl
UE::CoreUObject::Private::Construct<FTypedElementScriptStructTypeInfoColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FTypedElementScriptStructTypeInfoColumn> @ 142c86030

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementScriptStructTypeInfoColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FTypedElementScriptStructTypeInfoColumn> @ 142c86040

void __cdecl
UE::CoreUObject::Private::Destruct<FTypedElementScriptStructTypeInfoColumn>(void *param_1)

{
  return;
}

// Copy<FWidgetPurposeColumn> @ 142c86050

bool __cdecl
UE::CoreUObject::Private::Copy<FWidgetPurposeColumn>(void *param_1,void *param_2,int param_3)

{
  undefined1 *puVar1;
  
  if (param_3 != 0) {
    puVar1 = param_1;
    do {
      *puVar1 = puVar1[(longlong)param_2 - (longlong)param_1];
      Editor::DataStorage::FMapKey::operator=
                ((FMapKey *)(puVar1 + 8),
                 (FMapKey *)(puVar1 + ((longlong)param_2 - (longlong)param_1) + 8));
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 0x20;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FTypedElementScriptStructTypeInfoColumn> @ 142c860b0

bool __cdecl
UE::CoreUObject::Private::Copy<FTypedElementScriptStructTypeInfoColumn>
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

// Construct<FTestColumnB> @ 142c860e0

void __cdecl UE::CoreUObject::Private::Construct<FTestColumnB>(void *param_1)

{
  return;
}

// ConstructForTests<FTestColumnB> @ 142c860f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTestColumnB>(void *param_1)

{
  return;
}

// Construct<FTypedElementClassTypeInfoColumn> @ 142c86100

void __cdecl UE::CoreUObject::Private::Construct<FTypedElementClassTypeInfoColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FTypedElementClassTypeInfoColumn> @ 142c86110

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementClassTypeInfoColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FTypedElementClassTypeInfoColumn> @ 142c86120

void __cdecl UE::CoreUObject::Private::Destruct<FTypedElementClassTypeInfoColumn>(void *param_1)

{
  return;
}

// Copy<FTypedElementClassTypeInfoColumn> @ 142c86130

bool __cdecl
UE::CoreUObject::Private::Copy<FTypedElementClassTypeInfoColumn>
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

// Construct<FTestColumnA> @ 142c86160

void __cdecl UE::CoreUObject::Private::Construct<FTestColumnA>(void *param_1)

{
  return;
}

// ConstructForTests<FTestColumnA> @ 142c86170

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTestColumnA>(void *param_1)

{
  return;
}

// Construct<FEditorDataStorageWebImageColumn> @ 142c86180

void __cdecl UE::CoreUObject::Private::Construct<FEditorDataStorageWebImageColumn>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FEditorDataStorageWebImageColumn> @ 142c861e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FEditorDataStorageWebImageColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FEditorDataStorageWebImageColumn> @ 142c861f0

void __cdecl UE::CoreUObject::Private::Destruct<FEditorDataStorageWebImageColumn>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FEditorDataStorageWebImageColumn> @ 142c86360

bool __cdecl
UE::CoreUObject::Private::Copy<FEditorDataStorageWebImageColumn>
          (void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  int *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=((FString *)this,pFVar1);
      *(undefined2 *)(this + 4) = *(undefined2 *)&pFVar1[1].Data.AllocatorInstance.Data;
      *(undefined2 *)((longlong)this + 0x12) =
           *(undefined2 *)((longlong)&pFVar1[1].Data.AllocatorInstance.Data + 2);
      param_3 = param_3 + -1;
      this = this + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTypedElementLocalTransformColumn> @ 142c86520

void __cdecl UE::CoreUObject::Private::Construct<FTypedElementLocalTransformColumn>(void *param_1)

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
  return;
}

// ConstructForTests<FTypedElementLocalTransformColumn> @ 142c86550

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementLocalTransformColumn>(void *param_1)

{
  return;
}

// Destruct<FTypedElementLocalTransformColumn> @ 142c86560

void __cdecl UE::CoreUObject::Private::Destruct<FTypedElementLocalTransformColumn>(void *param_1)

{
  return;
}

// Copy<FTypedElementLocalTransformColumn> @ 142c86570

bool __cdecl
UE::CoreUObject::Private::Copy<FTypedElementLocalTransformColumn>
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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  
  if (param_3 != 0) {
    lVar13 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar13 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar13 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0x40 + (longlong)param_1);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0x50 + (longlong)param_1);
      uVar11 = *puVar1;
      uVar12 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar13 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      *(undefined8 *)((longlong)param_1 + 0x40) = uVar9;
      *(undefined8 *)((longlong)param_1 + 0x48) = uVar10;
      *(undefined8 *)((longlong)param_1 + 0x50) = uVar11;
      *(undefined8 *)((longlong)param_1 + 0x58) = uVar12;
      param_1 = (void *)((longlong)param_1 + 0x60);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FWidgetPurposeReferenceColumn> @ 142c865d0

void __cdecl UE::CoreUObject::Private::Construct<FWidgetPurposeReferenceColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FWidgetPurposeReferenceColumn> @ 142c865e0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FWidgetPurposeReferenceColumn>(void *param_1)

{
  return;
}

// Construct<FEditorDataStorageUrlColumn> @ 142c865f0

void __cdecl UE::CoreUObject::Private::Construct<FEditorDataStorageUrlColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FEditorDataStorageUrlColumn> @ 142c86600

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEditorDataStorageUrlColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FEditorDataStorageUrlColumn> @ 142c86610

void __cdecl UE::CoreUObject::Private::Destruct<FEditorDataStorageUrlColumn>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FEditorDataStorageUrlColumn> @ 142c86630

bool __cdecl
UE::CoreUObject::Private::Copy<FEditorDataStorageUrlColumn>(void *param_1,void *param_2,int param_3)

{
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      ::FString::operator=
                (this,(FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTEDSProcessorTests_Linked> @ 142c86680

void __cdecl UE::CoreUObject::Private::Construct<FTEDSProcessorTests_Linked>(void *param_1)

{
  return;
}

// Construct<FIsInEditingModeTag> @ 142c86690

void __cdecl UE::CoreUObject::Private::Construct<FIsInEditingModeTag>(void *param_1)

{
  return;
}

// ConstructForTests<FTEDSProcessorTests_Linked> @ 142c866a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTEDSProcessorTests_Linked>(void *param_1)

{
  return;
}

// ConstructForTests<FIsInEditingModeTag> @ 142c866b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FIsInEditingModeTag>(void *param_1)

{
  return;
}

// Construct<FVisibleInEditorColumn> @ 142c867e0

void __cdecl UE::CoreUObject::Private::Construct<FVisibleInEditorColumn>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// ConstructForTests<FVisibleInEditorColumn> @ 142c867f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FVisibleInEditorColumn>(void *param_1)

{
  *(undefined1 *)param_1 = 1;
  return;
}

// Destruct<FVisibleInEditorColumn> @ 142c868c0

void __cdecl UE::CoreUObject::Private::Destruct<FVisibleInEditorColumn>(void *param_1)

{
  return;
}

// Copy<FVisibleInEditorColumn> @ 142c86910

bool __cdecl
UE::CoreUObject::Private::Copy<FVisibleInEditorColumn>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      param_1 = (void *)((longlong)param_1 + 1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTEDSProcessorTests_SecondaryTag> @ 142c86b00

void __cdecl UE::CoreUObject::Private::Construct<FTEDSProcessorTests_SecondaryTag>(void *param_1)

{
  return;
}

// Construct<FSlateColorColumn> @ 142c86b10

void __cdecl UE::CoreUObject::Private::Construct<FSlateColorColumn>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 2;
  *(undefined8 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  return;
}

// ConstructForTests<FTEDSProcessorTests_SecondaryTag> @ 142c86b40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTEDSProcessorTests_SecondaryTag>(void *param_1)

{
  return;
}

// ConstructForTests<FSlateColorColumn> @ 142c86b90

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSlateColorColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x10) = 2;
  return;
}

// Destruct<FSlateColorColumn> @ 142c86bc0

void __cdecl UE::CoreUObject::Private::Destruct<FSlateColorColumn>(void *param_1)

{
  return;
}

// Copy<FSlateColorColumn> @ 142c86bd0

bool __cdecl
UE::CoreUObject::Private::Copy<FSlateColorColumn>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      *(undefined4 *)(puVar4 + 2) = uVar2;
      param_3 = param_3 + -1;
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x14);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTEDSProcessorTests_PrimaryTag> @ 142c86e90

void __cdecl UE::CoreUObject::Private::Construct<FTEDSProcessorTests_PrimaryTag>(void *param_1)

{
  return;
}

// ConstructForTests<FTEDSProcessorTests_PrimaryTag> @ 142c86ea0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTEDSProcessorTests_PrimaryTag>(void *param_1)

{
  return;
}

// Construct<FDescriptionColumn> @ 142c86ef0

void __cdecl UE::CoreUObject::Private::Construct<FDescriptionColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FText::FText(param_1);
  return;
}

// ConstructForTests<FDescriptionColumn> @ 142c86f10

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDescriptionColumn>(void *param_1)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 auStackX_8 [32];
  
  pFVar2 = FText::GetEmpty();
  *(undefined8 *)param_1 = 0;
  pIVar1 = (pFVar2->TextData).Reference;
  *(ITextData **)param_1 = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,auStackX_8);
  }
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FDescriptionColumn> @ 142c86f20

void __cdecl UE::CoreUObject::Private::Destruct<FDescriptionColumn>(void *param_1)

{
  if (*(longlong **)param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142c86f2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)param_1 + 0x10))();
    return;
  }
  return;
}

// Copy<FDescriptionColumn> @ 142c86f40

bool __cdecl
UE::CoreUObject::Private::Copy<FDescriptionColumn>(void *param_1,void *param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 local_res18 [8];
  
  if (param_3 != 0) {
    plVar3 = param_1;
    do {
      plVar1 = *(longlong **)((longlong)plVar3 + ((longlong)param_2 - (longlong)param_1));
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != plVar1) {
        *plVar3 = (longlong)plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))(plVar1,local_res18,plVar3);
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)(plVar3 + 1) =
           *(undefined4 *)((longlong)plVar3 + ((longlong)param_2 - (longlong)param_1) + 8);
      param_3 = param_3 + -1;
      plVar3 = plVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTEDSProcessorTestsReferenceColumn> @ 142c87060

void __cdecl UE::CoreUObject::Private::Construct<FTEDSProcessorTestsReferenceColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FTEDSProcessorTestsReferenceColumn> @ 142c87070

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTEDSProcessorTestsReferenceColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FTEDSProcessorTestsReferenceColumn> @ 142c87090

void __cdecl UE::CoreUObject::Private::Destruct<FTEDSProcessorTestsReferenceColumn>(void *param_1)

{
  return;
}

// Copy<FTEDSProcessorTestsReferenceColumn> @ 142c870a0

bool __cdecl
UE::CoreUObject::Private::Copy<FTEDSProcessorTestsReferenceColumn>
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

// Construct<FDisplayNameColumn> @ 142c87110

void __cdecl UE::CoreUObject::Private::Construct<FDisplayNameColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  FText::FText(param_1);
  return;
}

// ConstructForTests<FDisplayNameColumn> @ 142c87130

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDisplayNameColumn>(void *param_1)

{
  ITextData *pIVar1;
  FText *pFVar2;
  undefined1 auStackX_8 [32];
  
  pFVar2 = FText::GetEmpty();
  *(undefined8 *)param_1 = 0;
  pIVar1 = (pFVar2->TextData).Reference;
  *(ITextData **)param_1 = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,auStackX_8);
  }
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FDisplayNameColumn> @ 142c87140

void __cdecl UE::CoreUObject::Private::Destruct<FDisplayNameColumn>(void *param_1)

{
  if (*(longlong **)param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142c8714b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)param_1 + 0x10))();
    return;
  }
  return;
}

// Copy<FDisplayNameColumn> @ 142c87160

bool __cdecl
UE::CoreUObject::Private::Copy<FDisplayNameColumn>(void *param_1,void *param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 local_res18 [8];
  
  if (param_3 != 0) {
    plVar3 = param_1;
    do {
      plVar1 = *(longlong **)((longlong)plVar3 + ((longlong)param_2 - (longlong)param_1));
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != plVar1) {
        *plVar3 = (longlong)plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))(plVar1,local_res18,plVar3);
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      *(undefined4 *)(plVar3 + 1) =
           *(undefined4 *)((longlong)plVar3 + ((longlong)param_2 - (longlong)param_1) + 8);
      param_3 = param_3 + -1;
      plVar3 = plVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSimpleWidgetConstructor> @ 142c87200

void __cdecl UE::CoreUObject::Private::Construct<FSimpleWidgetConstructor>(void *param_1)

{
  UScriptStruct *pUVar1;
  UPackage *pUVar2;
  
  if (Z_Registration_Info_UScriptStruct_FSimpleWidgetConstructor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FSimpleWidgetConstructor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSimpleWidgetConstructor,(UObject *)pUVar2,
                         L"SimpleWidgetConstructor");
  }
  pUVar1 = Z_Registration_Info_UScriptStruct_FSimpleWidgetConstructor.OuterSingleton;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(UScriptStruct **)((longlong)param_1 + 0x78) = pUVar1;
  *(undefined ***)param_1 = &___7FSimpleWidgetConstructor__6B_;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  return;
}

// ConstructForTests<FSimpleWidgetConstructor> @ 142c87210

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSimpleWidgetConstructor>(void *param_1)

{
  UScriptStruct *pUVar1;
  UPackage *pUVar2;
  
  if (Z_Registration_Info_UScriptStruct_FSimpleWidgetConstructor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FSimpleWidgetConstructor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSimpleWidgetConstructor,(UObject *)pUVar2,
                         L"SimpleWidgetConstructor");
  }
  pUVar1 = Z_Registration_Info_UScriptStruct_FSimpleWidgetConstructor.OuterSingleton;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(UScriptStruct **)((longlong)param_1 + 0x78) = pUVar1;
  *(undefined ***)param_1 = &___7FSimpleWidgetConstructor__6B_;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  return;
}

// Destruct<FSimpleWidgetConstructor> @ 142c87220

void __cdecl UE::CoreUObject::Private::Destruct<FSimpleWidgetConstructor>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  return;
}

// Copy<FSimpleWidgetConstructor> @ 142c87270

bool __cdecl
UE::CoreUObject::Private::Copy<FSimpleWidgetConstructor>(void *param_1,void *param_2,int param_3)

{
  FTedsWidgetConstructorBase *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FTedsWidgetConstructorBase::operator=
                (this,(FTedsWidgetConstructorBase *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTestTagColumnD> @ 142c87640

void __cdecl UE::CoreUObject::Private::Construct<FTestTagColumnD>(void *param_1)

{
  return;
}

// ConstructForTests<FTestTagColumnD> @ 142c87690

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTestTagColumnD>(void *param_1)

{
  return;
}

// Construct<FTypedElementSlateWidgetReferenceDeletesRowTag> @ 142c87820

void __cdecl
UE::CoreUObject::Private::Construct<FTypedElementSlateWidgetReferenceDeletesRowTag>(void *param_1)

{
  return;
}

// ConstructForTests<FTypedElementSlateWidgetReferenceDeletesRowTag> @ 142c878a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementSlateWidgetReferenceDeletesRowTag>
          (void *param_1)

{
  return;
}

// Construct<FTestTagColumnC> @ 142c88850

void __cdecl UE::CoreUObject::Private::Construct<FTestTagColumnC>(void *param_1)

{
  return;
}

// ConstructForTests<FTestTagColumnC> @ 142c88860

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTestTagColumnC>(void *param_1)

{
  return;
}

// Construct<FTypedElementSlateWidgetReferenceColumn> @ 142c888b0

void __cdecl
UE::CoreUObject::Private::Construct<FTypedElementSlateWidgetReferenceColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// ConstructForTests<FTypedElementSlateWidgetReferenceColumn> @ 142c888d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementSlateWidgetReferenceColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  return;
}

// Destruct<FTypedElementSlateWidgetReferenceColumn> @ 142c888f0

void __cdecl
UE::CoreUObject::Private::Destruct<FTypedElementSlateWidgetReferenceColumn>(void *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = *(longlong **)((longlong)param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  plVar3 = *(longlong **)((longlong)param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// Copy<FTypedElementSlateWidgetReferenceColumn> @ 142c88900

bool __cdecl
UE::CoreUObject::Private::Copy<FTypedElementSlateWidgetReferenceColumn>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  if (param_3 != 0) {
    puVar7 = param_1;
    do {
      lVar4 = *(longlong *)(((longlong)param_2 - (longlong)param_1) + 8 + (longlong)puVar7);
      puVar2 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar7);
      uVar5 = *puVar2;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
        UNLOCK();
      }
      plVar6 = (longlong *)puVar7[1];
      *puVar7 = uVar5;
      puVar7[1] = lVar4;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      lVar4 = puVar2[3];
      uVar5 = puVar2[2];
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
        UNLOCK();
      }
      plVar6 = (longlong *)puVar7[3];
      puVar7[2] = uVar5;
      puVar7[3] = lVar4;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      lVar4 = puVar2[5];
      uVar5 = puVar2[4];
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
        UNLOCK();
      }
      plVar6 = (longlong *)puVar7[5];
      puVar7[4] = uVar5;
      puVar7[5] = lVar4;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      param_3 = param_3 + -1;
      puVar7 = puVar7 + 6;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTypedElementWidgetConstructor> @ 142c88a80

void __cdecl UE::CoreUObject::Private::Construct<FTypedElementWidgetConstructor>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined ***)param_1 = &___7FTypedElementWidgetConstructor__6B_;
  return;
}

// ConstructForTests<FTypedElementWidgetConstructor> @ 142c88ad0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementWidgetConstructor>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined ***)param_1 = &___7FTypedElementWidgetConstructor__6B_;
  return;
}

// Destruct<FTypedElementWidgetConstructor> @ 142c88b20

void __cdecl UE::CoreUObject::Private::Destruct<FTypedElementWidgetConstructor>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  return;
}

// Copy<FTypedElementWidgetConstructor> @ 142c88b70

bool __cdecl
UE::CoreUObject::Private::Copy<FTypedElementWidgetConstructor>
          (void *param_1,void *param_2,int param_3)

{
  FTedsWidgetConstructorBase *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      FTedsWidgetConstructorBase::operator=
                (this,(FTedsWidgetConstructorBase *)
                      (((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FEditorDataStorageTag> @ 142c88cc0

void __cdecl UE::CoreUObject::Private::Construct<FEditorDataStorageTag>(void *param_1)

{
  return;
}

// ConstructForTests<FEditorDataStorageTag> @ 142c88d10

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEditorDataStorageTag>(void *param_1)

{
  return;
}

// Construct<FTestTagColumnB> @ 142c88de0

void __cdecl UE::CoreUObject::Private::Construct<FTestTagColumnB>(void *param_1)

{
  return;
}

// ConstructForTests<FTestTagColumnB> @ 142c88df0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTestTagColumnB>(void *param_1)

{
  return;
}

// Construct<FTypedElementSelectionColumn> @ 142c89060

void __cdecl UE::CoreUObject::Private::Construct<FTypedElementSelectionColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FTypedElementSelectionColumn> @ 142c89080

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FTypedElementSelectionColumn>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FTypedElementSelectionColumn> @ 142c89090

void __cdecl UE::CoreUObject::Private::Destruct<FTypedElementSelectionColumn>(void *param_1)

{
  return;
}

// Copy<FTypedElementSelectionColumn> @ 142c890a0

bool __cdecl
UE::CoreUObject::Private::Copy<FTypedElementSelectionColumn>
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

// Construct<FTedsWidgetConstructorBase> @ 142c890d0

void __cdecl UE::CoreUObject::Private::Construct<FTedsWidgetConstructorBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FTedsWidgetConstructorBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// ConstructForTests<FTedsWidgetConstructorBase> @ 142c89120

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTedsWidgetConstructorBase>(void *param_1)

{
  *(undefined ***)param_1 = &___7FTedsWidgetConstructorBase__6B_;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  return;
}

// Destruct<FTedsWidgetConstructorBase> @ 142c89170

void __cdecl UE::CoreUObject::Private::Destruct<FTedsWidgetConstructorBase>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x60) = 0;
  if (*(void **)((longlong)param_1 + 0x58) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x58));
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x18));
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  return;
}

// DereferenceIfNecessary<UTypedElementRegistry,UTypedElementRegistry_*_&> @ 142c8c930

UTypedElementRegistry * __cdecl
UE::Core::Private::DereferenceIfNecessary<UTypedElementRegistry,UTypedElementRegistry_*_&>
          (UTypedElementRegistry **param_1)

{
  return *param_1;
}

// GetDataStorageFeature<UE::Editor::DataStorage::ICoreProvider> @ 142c8e820

ICoreProvider * __cdecl
UE::Editor::DataStorage::GetDataStorageFeature<UE::Editor::DataStorage::ICoreProvider>
          (FName param_1)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  ICoreProvider *pIVar4;
  
  pIVar2 = IModularFeatures::Get();
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,param_1);
  if (0 < iVar1) {
    pIVar2 = IModularFeatures::Get();
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,param_1,0);
    pIVar4 = (ICoreProvider *)(lVar3 + -8);
    if (lVar3 == 0) {
      pIVar4 = (ICoreProvider *)0x0;
    }
    return pIVar4;
  }
  return (ICoreProvider *)0x0;
}

// GetMutableDataStorageFeature<UE::Editor::DataStorage::ICoreProvider> @ 142c8f620

ICoreProvider * __cdecl
UE::Editor::DataStorage::GetMutableDataStorageFeature<UE::Editor::DataStorage::ICoreProvider>
          (FName param_1)

{
  int iVar1;
  IModularFeatures *pIVar2;
  longlong lVar3;
  ICoreProvider *pIVar4;
  
  pIVar2 = IModularFeatures::Get();
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,param_1);
  if (0 < iVar1) {
    pIVar2 = IModularFeatures::Get();
    lVar3 = (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,param_1,0);
    pIVar4 = (ICoreProvider *)(lVar3 + -8);
    if (lVar3 == 0) {
      pIVar4 = (ICoreProvider *)0x0;
    }
    return pIVar4;
  }
  return (ICoreProvider *)0x0;
}

// ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>_> @ 142c90530

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> *param_5,int param_6
          ,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
  ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>_> @ 142c905d0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_> *param_5,int param_6,
          int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
  ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_> @ 142c90670

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> *param_5,int param_6,
          int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_> @ 142c90710

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> *param_5,int param_6,
          int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_> @ 142c907b0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> *param_5,int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>_> @ 142c90850

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription> *param_5,int param_6,
          int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
  ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FColumnMetaData>_> @ 142c908f0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FColumnMetaData>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Editor::DataStorage::FColumnMetaData> *param_5,int param_6,int *param_7
          )

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
  ForElementType<UE::Editor::DataStorage::FColumnMetaData>::ResizeAllocation(param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_> @ 142c90990

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
          (uint param_1,uint param_2,int param_3,int param_4,ForElementType<FName> *param_5,
          int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_> @ 142c90a30

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
          (uint param_1,uint param_2,int param_3,int param_4,ForElementType<FName> *param_5,
          int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>_> @ 142c90ad0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags> *param_5,
          int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
  ForElementType<enum_UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FColumnMetaData::EFlags>_> @ 142c90b70

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FColumnMetaData::EFlags>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags> *param_5,int param_6,
          int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
  ForElementType<enum_UE::Editor::DataStorage::FColumnMetaData::EFlags>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>_> @ 142c90c10

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType> *param_5,
          int param_6,int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
  ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryAccessType>_> @ 142c90cb0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryAccessType>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Editor::DataStorage::EQueryAccessType> *param_5,int param_6,
          int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
  ForElementType<enum_UE::Editor::DataStorage::EQueryAccessType>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryDependencyFlags>_> @ 142c90d50

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryDependencyFlags>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags> *param_5,int param_6,
          int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
  ForElementType<enum_UE::Editor::DataStorage::EQueryDependencyFlags>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocForCopy<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::Queries::FConditions::Token>_> @ 142c90df0

void __cdecl
UE::Core::Private::
ReallocForCopy<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::Queries::FConditions::Token>_>
          (uint param_1,uint param_2,int param_3,int param_4,
          ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> *param_5,int param_6,
          int *param_7)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x41) {
      iVar1 = 0x40;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 <= param_4) {
    *param_7 = param_4;
    return;
  }
  TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
  ForElementType<enum_UE::Editor::DataStorage::Queries::FConditions::Token>::ResizeAllocation
            (param_5,0,iVar1,uVar3);
  *param_7 = iVar1;
  return;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>_> @ 142c90e90

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>_>
          (ushort param_1,
          ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>_> @ 142c90f60

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>_>
          (ushort param_1,ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_> @ 142c91030

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_>
          (ushort param_1,
          ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> *param_2,int *param_3
          )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_> @ 142c91100

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_>
          (ushort param_1,
          ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> *param_2,int *param_3
          )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_> @ 142c911d0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
          (ushort param_1,ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>_> @ 142c912a0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>_>
          (ushort param_1,
          ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FColumnMetaData>_> @ 142c91370

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FColumnMetaData>_>
          (ushort param_1,ForElementType<UE::Editor::DataStorage::FColumnMetaData> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Editor::DataStorage::FColumnMetaData>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_> @ 142c91440

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
          (ushort param_1,ForElementType<FName> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>::
    ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FColumnMetaData::EFlags>_> @ 142c91510

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FColumnMetaData::EFlags>_>
          (ushort param_1,ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<enum_UE::Editor::DataStorage::FColumnMetaData::EFlags>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>_> @ 142c915e0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>_>
          (ushort param_1,
          ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryAccessType>_> @ 142c916b0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryAccessType>_>
          (ushort param_1,ForElementType<UE::Editor::DataStorage::EQueryAccessType> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<enum_UE::Editor::DataStorage::EQueryAccessType>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryDependencyFlags>_> @ 142c91780

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryDependencyFlags>_>
          (ushort param_1,ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags> *param_2,
          int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<enum_UE::Editor::DataStorage::EQueryDependencyFlags>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::Queries::FConditions::Token>_> @ 142c91850

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::Queries::FConditions::Token>_>
          (ushort param_1,
          ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> *param_2,int *param_3
          )

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x41) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
    ForElementType<enum_UE::Editor::DataStorage::Queries::FConditions::Token>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>_> @ 142c91920

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 9) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>_> @ 142c91a00

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 3) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_> @ 142c91ae0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> *param_4,int *param_5
          ,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 9) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_> @ 142c91bc0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> *param_4,int *param_5,int *param_6
          )

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 3) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>_> @ 142c91ca0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 9) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FColumnMetaData>_> @ 142c91d80

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FColumnMetaData>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Editor::DataStorage::FColumnMetaData> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 9) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Editor::DataStorage::FColumnMetaData>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>_> @ 142c91e60

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 0x21) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<enum_UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>::
    ResizeAllocation(param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FColumnMetaData::EFlags>_> @ 142c91f40

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FColumnMetaData::EFlags>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 9) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<enum_UE::Editor::DataStorage::FColumnMetaData::EFlags>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>_> @ 142c92020

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType> *param_4,
          int *param_5,int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 9) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryAccessType>_> @ 142c92100

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryAccessType>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Editor::DataStorage::EQueryAccessType> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 9) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<enum_UE::Editor::DataStorage::EQueryAccessType>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryDependencyFlags>_> @ 142c921e0

int __cdecl
UE::Core::Private::
ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryDependencyFlags>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags> *param_4,int *param_5,
          int *param_6)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar2 = *param_5;
  uVar6 = *param_6;
  uVar1 = iVar2 + param_3;
  *param_5 = uVar1;
  if (uVar6 - iVar2 < (uint)param_3) {
    if ((int)uVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      if (uVar6 < 3) {
        uVar6 = 0;
      }
      if (uVar6 == 0) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar3,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<enum_UE::Editor::DataStorage::EQueryDependencyFlags>::ResizeAllocation
              (param_4,iVar2,iVar8,uVar7);
    *param_6 = iVar8;
  }
  return iVar2;
}

// ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>_> @ 142c922c0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>_>
          (uint param_1,uint param_2,
          ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> *param_3,int param_4
          ,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 9) {
    iVar2 = 8;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_> @ 142c92380

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_>
          (uint param_1,uint param_2,
          ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 9) {
    iVar2 = 8;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>_> @ 142c92440

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>_>
          (uint param_1,uint param_2,
          ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 9) {
    iVar2 = 8;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FColumnMetaData>_> @ 142c92500

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FColumnMetaData>_>
          (uint param_1,uint param_2,
          ForElementType<UE::Editor::DataStorage::FColumnMetaData> *param_3,int param_4,int *param_5
          )

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 9) {
    iVar2 = 8;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Editor::DataStorage::FColumnMetaData>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>_> @ 142c925c0

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>_>
          (uint param_1,uint param_2,
          ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 0x21) {
    iVar2 = 0x20;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<enum_UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>::
    ResizeAllocation(param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FColumnMetaData::EFlags>_> @ 142c92680

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FColumnMetaData::EFlags>_>
          (uint param_1,uint param_2,
          ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 9) {
    iVar2 = 8;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<enum_UE::Editor::DataStorage::FColumnMetaData::EFlags>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>_> @ 142c92740

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>_>
          (uint param_1,uint param_2,
          ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType> *param_3,
          int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 9) {
    iVar2 = 8;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryAccessType>_> @ 142c92800

void __cdecl
UE::Core::Private::
ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryAccessType>_>
          (uint param_1,uint param_2,
          ForElementType<UE::Editor::DataStorage::EQueryAccessType> *param_3,int param_4,
          int *param_5)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1;
  iVar1 = *param_5;
  if ((uint)param_4 < 9) {
    iVar2 = 8;
  }
  else {
    iVar2 = iVar1;
    if ((((0x3fff < (longlong)(iVar1 - param_4) * uVar4) || (param_4 * 3 < iVar1 * 2)) &&
        ((0x40 < iVar1 - param_4 || (param_4 == 0)))) && (iVar2 = param_4, 0 < param_4)) {
      uVar3 = FMemory::QuantizeSize((longlong)param_4 * uVar4,0);
      iVar2 = (int)(uVar3 / uVar4);
    }
  }
  if (iVar2 != iVar1) {
    *param_5 = iVar2;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<enum_UE::Editor::DataStorage::EQueryAccessType>::ResizeAllocation
              (param_3,param_4,iVar2,uVar4);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>_> @ 142c928c0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> *param_4,int param_5
          ,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>_> @ 142c92940

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_> @ 142c929c0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_> @ 142c92a40

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_> @ 142c92ac0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>_> @ 142c92b40

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FColumnMetaData>_> @ 142c92bc0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FColumnMetaData>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Editor::DataStorage::FColumnMetaData> *param_4,int param_5,int *param_6
          )

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<UE::Editor::DataStorage::FColumnMetaData>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_> @ 142c92c40

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FName> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_> @ 142c92cc0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
          (uint param_1,uint param_2,int param_3,ForElementType<FName> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>::
    ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FColumnMetaData::EFlags>_> @ 142c92d40

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FColumnMetaData::EFlags>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<enum_UE::Editor::DataStorage::FColumnMetaData::EFlags>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>_> @ 142c92dc0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryAccessType>_> @ 142c92e40

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryAccessType>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Editor::DataStorage::EQueryAccessType> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<enum_UE::Editor::DataStorage::EQueryAccessType>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryDependencyFlags>_> @ 142c92ec0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryDependencyFlags>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 3) {
      iVar1 = 2;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::
    ForElementType<enum_UE::Editor::DataStorage::EQueryDependencyFlags>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::Queries::FConditions::Token>_> @ 142c92f40

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::Queries::FConditions::Token>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> *param_4,int param_5,
          int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x41) {
      iVar1 = 0x40;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
    ForElementType<enum_UE::Editor::DataStorage::Queries::FConditions::Token>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// VisitApplyEncoded<1,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c93770

ulong64 __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FHasher *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  return param_2->_padding_;
}

// VisitApplyEncoded<1,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c93780

ulong64 __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FHasher *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  return param_2->_padding_;
}

// VisitApplyEncoded<1,0,UE::Editor::DataStorage::FKeyComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c93790

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,UE::Editor::DataStorage::FKeyComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FKeyComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  *pTVar1;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  *pTVar2;
  
  pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
            *)0x0;
  pTVar2 = param_1->Key;
  if (param_1->Key->TypeIndex != '\x01') {
    pTVar2 = pTVar1;
  }
  if (pTVar2 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                 *)0x0) {
    pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
              *)(ulonglong)(pTVar2->_padding_ == param_2->_padding_);
  }
  return SUB81(pTVar1,0);
}

// VisitApplyEncoded<1,0,UE::Editor::DataStorage::FKeyCopy,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c937c0

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
* __cdecl UE::Core::Private::
          VisitApplyEncoded<1,0,UE::Editor::DataStorage::FKeyCopy,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                     *__return_storage_ptr__,FKeyCopy *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  __return_storage_ptr__->_padding_ = param_2->_padding_;
  __return_storage_ptr__->TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<1,0,UE::Editor::DataStorage::FKeyMove,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_> @ 142c937e0

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
* __cdecl UE::Core::Private::
          VisitApplyEncoded<1,0,UE::Editor::DataStorage::FKeyMove,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                     *__return_storage_ptr__,FKeyMove *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  __return_storage_ptr__->_padding_ = param_2->_padding_;
  __return_storage_ptr__->TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<1,0,UE::Editor::DataStorage::FKeyToKeyViewConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c93800

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
* __cdecl UE::Core::Private::
          VisitApplyEncoded<1,0,UE::Editor::DataStorage::FKeyToKeyViewConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                     *__return_storage_ptr__,FKeyToKeyViewConverter *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  __return_storage_ptr__->_padding_ = param_2->_padding_;
  __return_storage_ptr__->TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<1,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c93820

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FKeyViewComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  *pTVar1;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  *pTVar2;
  
  pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
            *)0x0;
  pTVar2 = param_1->Key;
  if (param_1->Key->TypeIndex != '\x01') {
    pTVar2 = pTVar1;
  }
  if (pTVar2 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                 *)0x0) {
    pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)(ulonglong)(pTVar2->_padding_ == param_2->_padding_);
  }
  return SUB81(pTVar1,0);
}

// VisitApplyEncoded<1,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c93850

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FKeyViewComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  *pTVar1;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  *pTVar2;
  
  pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
            *)0x0;
  pTVar2 = param_1->Key;
  if (param_1->Key->TypeIndex != '\x01') {
    pTVar2 = pTVar1;
  }
  if (pTVar2 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                 *)0x0) {
    pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)(ulonglong)(pTVar2->_padding_ == param_2->_padding_);
  }
  return SUB81(pTVar1,0);
}

// VisitApplyEncoded<1,0,UE::Editor::DataStorage::FKeyViewToKeyConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c93880

FMapKey * __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,UE::Editor::DataStorage::FKeyViewToKeyConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FMapKey *__return_storage_ptr__,FKeyViewToKeyConverter *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  (__return_storage_ptr__->Key)._padding_ = param_2->_padding_;
  (__return_storage_ptr__->Key).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<1,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c938a0

FString * __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FString *__return_storage_ptr__,FToString *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"Pointer(0x%p)");
  return __return_storage_ptr__;
}

// VisitApplyEncoded<1,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c938d0

FString * __cdecl
UE::Core::Private::
VisitApplyEncoded<1,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FString *__return_storage_ptr__,FToString *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"Pointer(0x%p)");
  return __return_storage_ptr__;
}

// VisitApplyEncoded<2,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c93990

ulong64 __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FHasher *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  return param_2->_padding_;
}

// VisitApplyEncoded<2,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c939a0

ulong64 __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FHasher *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  return param_2->_padding_;
}

// VisitApplyEncoded<2,0,UE::Editor::DataStorage::FKeyComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c939b0

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,UE::Editor::DataStorage::FKeyComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FKeyComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  *pTVar1;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  *pTVar2;
  
  pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
            *)0x0;
  pTVar2 = param_1->Key;
  if (param_1->Key->TypeIndex != '\x02') {
    pTVar2 = pTVar1;
  }
  if (pTVar2 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                 *)0x0) {
    pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
              *)(ulonglong)(pTVar2->_padding_ == param_2->_padding_);
  }
  return SUB81(pTVar1,0);
}

// VisitApplyEncoded<2,0,UE::Editor::DataStorage::FKeyCopy,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c939e0

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
* __cdecl UE::Core::Private::
          VisitApplyEncoded<2,0,UE::Editor::DataStorage::FKeyCopy,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                     *__return_storage_ptr__,FKeyCopy *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  __return_storage_ptr__->_padding_ = param_2->_padding_;
  __return_storage_ptr__->TypeIndex = '\x02';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<2,0,UE::Editor::DataStorage::FKeyMove,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_> @ 142c93a00

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
* __cdecl UE::Core::Private::
          VisitApplyEncoded<2,0,UE::Editor::DataStorage::FKeyMove,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                     *__return_storage_ptr__,FKeyMove *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  __return_storage_ptr__->_padding_ = param_2->_padding_;
  __return_storage_ptr__->TypeIndex = '\x02';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<2,0,UE::Editor::DataStorage::FKeyToKeyViewConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c93a20

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
* __cdecl UE::Core::Private::
          VisitApplyEncoded<2,0,UE::Editor::DataStorage::FKeyToKeyViewConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                     *__return_storage_ptr__,FKeyToKeyViewConverter *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  __return_storage_ptr__->_padding_ = param_2->_padding_;
  __return_storage_ptr__->TypeIndex = '\x02';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<2,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c93a40

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FKeyViewComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  *pTVar1;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  *pTVar2;
  
  pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
            *)0x0;
  pTVar2 = param_1->Key;
  if (param_1->Key->TypeIndex != '\x02') {
    pTVar2 = pTVar1;
  }
  if (pTVar2 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                 *)0x0) {
    pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)(ulonglong)(pTVar2->_padding_ == param_2->_padding_);
  }
  return SUB81(pTVar1,0);
}

// VisitApplyEncoded<2,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c93a70

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FKeyViewComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  *pTVar1;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  *pTVar2;
  
  pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
            *)0x0;
  pTVar2 = param_1->Key;
  if (param_1->Key->TypeIndex != '\x02') {
    pTVar2 = pTVar1;
  }
  if (pTVar2 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                 *)0x0) {
    pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)(ulonglong)(pTVar2->_padding_ == param_2->_padding_);
  }
  return SUB81(pTVar1,0);
}

// VisitApplyEncoded<2,0,UE::Editor::DataStorage::FKeyViewToKeyConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c93aa0

FMapKey * __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,UE::Editor::DataStorage::FKeyViewToKeyConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FMapKey *__return_storage_ptr__,FKeyViewToKeyConverter *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  (__return_storage_ptr__->Key)._padding_ = param_2->_padding_;
  (__return_storage_ptr__->Key).TypeIndex = '\x02';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<2,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c93ac0

FString * __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FString *__return_storage_ptr__,FToString *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"UObject(0x%p)");
  return __return_storage_ptr__;
}

// VisitApplyEncoded<2,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c93af0

FString * __cdecl
UE::Core::Private::
VisitApplyEncoded<2,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FString *__return_storage_ptr__,FToString *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"UObject(0x%p)");
  return __return_storage_ptr__;
}

// VisitApplyEncoded<3,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c93c20

ulong64 __cdecl
UE::Core::Private::
VisitApplyEncoded<3,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FHasher *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  return param_2->_padding_;
}

// VisitApplyEncoded<3,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c93c30

ulong64 __cdecl
UE::Core::Private::
VisitApplyEncoded<3,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FHasher *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  return param_2->_padding_;
}

// VisitApplyEncoded<3,0,UE::Editor::DataStorage::FKeyComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c93c40

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<3,0,UE::Editor::DataStorage::FKeyComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FKeyComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  *pTVar1;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  *pTVar2;
  
  pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
            *)0x0;
  pTVar2 = param_1->Key;
  if (param_1->Key->TypeIndex != '\x03') {
    pTVar2 = pTVar1;
  }
  if (pTVar2 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                 *)0x0) {
    pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
              *)(ulonglong)(pTVar2->_padding_ == param_2->_padding_);
  }
  return SUB81(pTVar1,0);
}

// VisitApplyEncoded<3,0,UE::Editor::DataStorage::FKeyCopy,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c93c70

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
* __cdecl UE::Core::Private::
          VisitApplyEncoded<3,0,UE::Editor::DataStorage::FKeyCopy,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                     *__return_storage_ptr__,FKeyCopy *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  __return_storage_ptr__->_padding_ = param_2->_padding_;
  __return_storage_ptr__->TypeIndex = '\x03';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<3,0,UE::Editor::DataStorage::FKeyMove,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_> @ 142c93c90

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
* __cdecl UE::Core::Private::
          VisitApplyEncoded<3,0,UE::Editor::DataStorage::FKeyMove,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                     *__return_storage_ptr__,FKeyMove *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  __return_storage_ptr__->_padding_ = param_2->_padding_;
  __return_storage_ptr__->TypeIndex = '\x03';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<3,0,UE::Editor::DataStorage::FKeyToKeyViewConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c93cb0

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
* __cdecl UE::Core::Private::
          VisitApplyEncoded<3,0,UE::Editor::DataStorage::FKeyToKeyViewConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                     *__return_storage_ptr__,FKeyToKeyViewConverter *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  __return_storage_ptr__->_padding_ = param_2->_padding_;
  __return_storage_ptr__->TypeIndex = '\x03';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<3,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c93cd0

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<3,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FKeyViewComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  *pTVar1;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  *pTVar2;
  
  pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
            *)0x0;
  pTVar2 = param_1->Key;
  if (param_1->Key->TypeIndex != '\x03') {
    pTVar2 = pTVar1;
  }
  if (pTVar2 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                 *)0x0) {
    pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)(ulonglong)(pTVar2->_padding_ == param_2->_padding_);
  }
  return SUB81(pTVar1,0);
}

// VisitApplyEncoded<3,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c93d00

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<3,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FKeyViewComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  *pTVar1;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  *pTVar2;
  
  pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
            *)0x0;
  pTVar2 = param_1->Key;
  if (param_1->Key->TypeIndex != '\x03') {
    pTVar2 = pTVar1;
  }
  if (pTVar2 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                 *)0x0) {
    pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)(ulonglong)(pTVar2->_padding_ == param_2->_padding_);
  }
  return SUB81(pTVar1,0);
}

// VisitApplyEncoded<3,0,UE::Editor::DataStorage::FKeyViewToKeyConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c93d30

FMapKey * __cdecl
UE::Core::Private::
VisitApplyEncoded<3,0,UE::Editor::DataStorage::FKeyViewToKeyConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FMapKey *__return_storage_ptr__,FKeyViewToKeyConverter *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  (__return_storage_ptr__->Key)._padding_ = param_2->_padding_;
  (__return_storage_ptr__->Key).TypeIndex = '\x03';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<3,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c93d50

FString * __cdecl
UE::Core::Private::
VisitApplyEncoded<3,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FString *__return_storage_ptr__,FToString *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%lld");
  return __return_storage_ptr__;
}

// VisitApplyEncoded<3,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c93d80

FString * __cdecl
UE::Core::Private::
VisitApplyEncoded<3,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FString *__return_storage_ptr__,FToString *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%lld");
  return __return_storage_ptr__;
}

// VisitApplyEncoded<4,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c93e30

ulong64 __cdecl
UE::Core::Private::
VisitApplyEncoded<4,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FHasher *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  return param_2->_padding_;
}

// VisitApplyEncoded<4,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c93e40

ulong64 __cdecl
UE::Core::Private::
VisitApplyEncoded<4,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FHasher *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  return param_2->_padding_;
}

// VisitApplyEncoded<4,0,UE::Editor::DataStorage::FKeyComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c93e50

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<4,0,UE::Editor::DataStorage::FKeyComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FKeyComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  *pTVar1;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  *pTVar2;
  
  pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
            *)0x0;
  pTVar2 = param_1->Key;
  if (param_1->Key->TypeIndex != '\x04') {
    pTVar2 = pTVar1;
  }
  if (pTVar2 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                 *)0x0) {
    pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
              *)(ulonglong)(pTVar2->_padding_ == param_2->_padding_);
  }
  return SUB81(pTVar1,0);
}

// VisitApplyEncoded<4,0,UE::Editor::DataStorage::FKeyCopy,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c93e80

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
* __cdecl UE::Core::Private::
          VisitApplyEncoded<4,0,UE::Editor::DataStorage::FKeyCopy,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                     *__return_storage_ptr__,FKeyCopy *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  __return_storage_ptr__->_padding_ = param_2->_padding_;
  __return_storage_ptr__->TypeIndex = '\x04';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<4,0,UE::Editor::DataStorage::FKeyMove,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_> @ 142c93ea0

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
* __cdecl UE::Core::Private::
          VisitApplyEncoded<4,0,UE::Editor::DataStorage::FKeyMove,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                     *__return_storage_ptr__,FKeyMove *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  __return_storage_ptr__->_padding_ = param_2->_padding_;
  __return_storage_ptr__->TypeIndex = '\x04';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<4,0,UE::Editor::DataStorage::FKeyToKeyViewConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c93ec0

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
* __cdecl UE::Core::Private::
          VisitApplyEncoded<4,0,UE::Editor::DataStorage::FKeyToKeyViewConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                     *__return_storage_ptr__,FKeyToKeyViewConverter *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  __return_storage_ptr__->_padding_ = param_2->_padding_;
  __return_storage_ptr__->TypeIndex = '\x04';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<4,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c93ee0

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<4,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FKeyViewComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  *pTVar1;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  *pTVar2;
  
  pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
            *)0x0;
  pTVar2 = param_1->Key;
  if (param_1->Key->TypeIndex != '\x04') {
    pTVar2 = pTVar1;
  }
  if (pTVar2 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                 *)0x0) {
    pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)(ulonglong)(pTVar2->_padding_ == param_2->_padding_);
  }
  return SUB81(pTVar1,0);
}

// VisitApplyEncoded<4,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c93f10

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<4,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FKeyViewComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  *pTVar1;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  *pTVar2;
  
  pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
            *)0x0;
  pTVar2 = param_1->Key;
  if (param_1->Key->TypeIndex != '\x04') {
    pTVar2 = pTVar1;
  }
  if (pTVar2 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                 *)0x0) {
    pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)(ulonglong)(pTVar2->_padding_ == param_2->_padding_);
  }
  return SUB81(pTVar1,0);
}

// VisitApplyEncoded<4,0,UE::Editor::DataStorage::FKeyViewToKeyConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c93f40

FMapKey * __cdecl
UE::Core::Private::
VisitApplyEncoded<4,0,UE::Editor::DataStorage::FKeyViewToKeyConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FMapKey *__return_storage_ptr__,FKeyViewToKeyConverter *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  (__return_storage_ptr__->Key)._padding_ = param_2->_padding_;
  (__return_storage_ptr__->Key).TypeIndex = '\x04';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<4,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c93f60

FString * __cdecl
UE::Core::Private::
VisitApplyEncoded<4,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FString *__return_storage_ptr__,FToString *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%llu");
  return __return_storage_ptr__;
}

// VisitApplyEncoded<4,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c93f90

FString * __cdecl
UE::Core::Private::
VisitApplyEncoded<4,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FString *__return_storage_ptr__,FToString *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%llu");
  return __return_storage_ptr__;
}

// VisitApplyEncoded<5,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c93fc0

ulong64 __cdecl
UE::Core::Private::
VisitApplyEncoded<5,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FHasher *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  longlong lVar1;
  float fVar2;
  
  fVar2 = *(float *)&param_2->_padding_;
  lVar1 = 0;
  if ((__real_5f000000 <= fVar2) && (fVar2 = fVar2 - __real_5f000000, fVar2 < __real_5f000000)) {
    lVar1 = -0x8000000000000000;
  }
  return (longlong)fVar2 + lVar1;
}

// VisitApplyEncoded<5,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c94000

ulong64 __cdecl
UE::Core::Private::
VisitApplyEncoded<5,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FHasher *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  longlong lVar1;
  float fVar2;
  
  fVar2 = *(float *)&param_2->_padding_;
  lVar1 = 0;
  if ((__real_5f000000 <= fVar2) && (fVar2 = fVar2 - __real_5f000000, fVar2 < __real_5f000000)) {
    lVar1 = -0x8000000000000000;
  }
  return (longlong)fVar2 + lVar1;
}

// VisitApplyEncoded<5,0,UE::Editor::DataStorage::FKeyComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c94040

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<5,0,UE::Editor::DataStorage::FKeyComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FKeyComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  *pTVar1;
  
  pTVar1 = param_1->Key;
  if (param_1->Key->TypeIndex != '\x05') {
    pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
              *)0x0;
  }
  if ((pTVar1 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                  *)0x0) && (*(float *)&param_2->_padding_ == *(float *)&pTVar1->_padding_)) {
    return true;
  }
  return false;
}

// VisitApplyEncoded<5,0,UE::Editor::DataStorage::FKeyCopy,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c94070

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
* __cdecl UE::Core::Private::
          VisitApplyEncoded<5,0,UE::Editor::DataStorage::FKeyCopy,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                     *__return_storage_ptr__,FKeyCopy *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  *(int *)&__return_storage_ptr__->_padding_ = (int)param_2->_padding_;
  __return_storage_ptr__->TypeIndex = '\x05';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<5,0,UE::Editor::DataStorage::FKeyMove,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_> @ 142c94090

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
* __cdecl UE::Core::Private::
          VisitApplyEncoded<5,0,UE::Editor::DataStorage::FKeyMove,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                     *__return_storage_ptr__,FKeyMove *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  *(int *)&__return_storage_ptr__->_padding_ = (int)param_2->_padding_;
  __return_storage_ptr__->TypeIndex = '\x05';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<5,0,UE::Editor::DataStorage::FKeyToKeyViewConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c940b0

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
* __cdecl UE::Core::Private::
          VisitApplyEncoded<5,0,UE::Editor::DataStorage::FKeyToKeyViewConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                     *__return_storage_ptr__,FKeyToKeyViewConverter *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  *(int *)&__return_storage_ptr__->_padding_ = (int)param_2->_padding_;
  __return_storage_ptr__->TypeIndex = '\x05';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<5,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c940d0

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<5,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FKeyViewComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  *pTVar1;
  
  pTVar1 = param_1->Key;
  if (param_1->Key->TypeIndex != '\x05') {
    pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)0x0;
  }
  if ((pTVar1 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                  *)0x0) && (*(float *)&param_2->_padding_ == *(float *)&pTVar1->_padding_)) {
    return true;
  }
  return false;
}

// VisitApplyEncoded<5,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c94100

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<5,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FKeyViewComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  *pTVar1;
  
  pTVar1 = param_1->Key;
  if (param_1->Key->TypeIndex != '\x05') {
    pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)0x0;
  }
  if ((pTVar1 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                  *)0x0) && (*(float *)&param_2->_padding_ == *(float *)&pTVar1->_padding_)) {
    return true;
  }
  return false;
}

// VisitApplyEncoded<5,0,UE::Editor::DataStorage::FKeyViewToKeyConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c94130

FMapKey * __cdecl
UE::Core::Private::
VisitApplyEncoded<5,0,UE::Editor::DataStorage::FKeyViewToKeyConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FMapKey *__return_storage_ptr__,FKeyViewToKeyConverter *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  *(int *)&(__return_storage_ptr__->Key)._padding_ = (int)param_2->_padding_;
  (__return_storage_ptr__->Key).TypeIndex = '\x05';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<5,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c94150

FString * __cdecl
UE::Core::Private::
VisitApplyEncoded<5,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FString *__return_storage_ptr__,FToString *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  ::FString::SanitizeFloat(__return_storage_ptr__,(double)*(float *)&param_2->_padding_,1);
  return __return_storage_ptr__;
}

// VisitApplyEncoded<5,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c94180

FString * __cdecl
UE::Core::Private::
VisitApplyEncoded<5,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FString *__return_storage_ptr__,FToString *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  ::FString::SanitizeFloat(__return_storage_ptr__,(double)*(float *)&param_2->_padding_,1);
  return __return_storage_ptr__;
}

// VisitApplyEncoded<6,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c941b0

ulong64 __cdecl
UE::Core::Private::
VisitApplyEncoded<6,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FHasher *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  longlong lVar1;
  double dVar2;
  
  dVar2 = (double)param_2->_padding_;
  lVar1 = 0;
  if ((__real_43e0000000000000 <= dVar2) &&
     (dVar2 = dVar2 - __real_43e0000000000000, dVar2 < __real_43e0000000000000)) {
    lVar1 = -0x8000000000000000;
  }
  return (longlong)dVar2 + lVar1;
}

// VisitApplyEncoded<6,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c941f0

ulong64 __cdecl
UE::Core::Private::
VisitApplyEncoded<6,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FHasher *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  longlong lVar1;
  double dVar2;
  
  dVar2 = (double)param_2->_padding_;
  lVar1 = 0;
  if ((__real_43e0000000000000 <= dVar2) &&
     (dVar2 = dVar2 - __real_43e0000000000000, dVar2 < __real_43e0000000000000)) {
    lVar1 = -0x8000000000000000;
  }
  return (longlong)dVar2 + lVar1;
}

// VisitApplyEncoded<6,0,UE::Editor::DataStorage::FKeyComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c94230

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<6,0,UE::Editor::DataStorage::FKeyComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FKeyComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  *pTVar1;
  
  pTVar1 = param_1->Key;
  if (param_1->Key->TypeIndex != '\x06') {
    pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
              *)0x0;
  }
  if ((pTVar1 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                  *)0x0) && ((double)param_2->_padding_ == (double)pTVar1->_padding_)) {
    return true;
  }
  return false;
}

// VisitApplyEncoded<6,0,UE::Editor::DataStorage::FKeyCopy,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c94260

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
* __cdecl UE::Core::Private::
          VisitApplyEncoded<6,0,UE::Editor::DataStorage::FKeyCopy,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                     *__return_storage_ptr__,FKeyCopy *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  __return_storage_ptr__->_padding_ = param_2->_padding_;
  __return_storage_ptr__->TypeIndex = '\x06';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<6,0,UE::Editor::DataStorage::FKeyMove,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_> @ 142c94280

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
* __cdecl UE::Core::Private::
          VisitApplyEncoded<6,0,UE::Editor::DataStorage::FKeyMove,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                     *__return_storage_ptr__,FKeyMove *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  __return_storage_ptr__->_padding_ = param_2->_padding_;
  __return_storage_ptr__->TypeIndex = '\x06';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<6,0,UE::Editor::DataStorage::FKeyToKeyViewConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c942a0

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
* __cdecl UE::Core::Private::
          VisitApplyEncoded<6,0,UE::Editor::DataStorage::FKeyToKeyViewConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                     *__return_storage_ptr__,FKeyToKeyViewConverter *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  __return_storage_ptr__->_padding_ = param_2->_padding_;
  __return_storage_ptr__->TypeIndex = '\x06';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<6,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c942c0

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<6,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FKeyViewComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  *pTVar1;
  
  pTVar1 = param_1->Key;
  if (param_1->Key->TypeIndex != '\x06') {
    pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)0x0;
  }
  if ((pTVar1 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                  *)0x0) && ((double)param_2->_padding_ == (double)pTVar1->_padding_)) {
    return true;
  }
  return false;
}

// VisitApplyEncoded<6,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c942f0

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<6,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FKeyViewComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  *pTVar1;
  
  pTVar1 = param_1->Key;
  if (param_1->Key->TypeIndex != '\x06') {
    pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)0x0;
  }
  if ((pTVar1 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                  *)0x0) && ((double)param_2->_padding_ == (double)pTVar1->_padding_)) {
    return true;
  }
  return false;
}

// VisitApplyEncoded<6,0,UE::Editor::DataStorage::FKeyViewToKeyConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c94320

FMapKey * __cdecl
UE::Core::Private::
VisitApplyEncoded<6,0,UE::Editor::DataStorage::FKeyViewToKeyConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FMapKey *__return_storage_ptr__,FKeyViewToKeyConverter *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  (__return_storage_ptr__->Key)._padding_ = param_2->_padding_;
  (__return_storage_ptr__->Key).TypeIndex = '\x06';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<6,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c94340

FString * __cdecl
UE::Core::Private::
VisitApplyEncoded<6,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FString *__return_storage_ptr__,FToString *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  ::FString::SanitizeFloat(__return_storage_ptr__,(double)param_2->_padding_,1);
  return __return_storage_ptr__;
}

// VisitApplyEncoded<6,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c94370

FString * __cdecl
UE::Core::Private::
VisitApplyEncoded<6,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FString *__return_storage_ptr__,FToString *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  ::FString::SanitizeFloat(__return_storage_ptr__,(double)param_2->_padding_,1);
  return __return_storage_ptr__;
}

// VisitApplyEncoded<7,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c943a0

ulong64 __cdecl
UE::Core::Private::
VisitApplyEncoded<7,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FHasher *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  ulong64 uVar1;
  
  uVar1 = CityHash64((char *)param_2->_padding_,(int)param_2->_padding_ * 2);
  return uVar1;
}

// VisitApplyEncoded<7,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c943c0

ulong64 __cdecl
UE::Core::Private::
VisitApplyEncoded<7,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FHasher *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  int iVar1;
  ulong64 uVar2;
  
  iVar1 = (int)param_2->_padding_;
  if (iVar1 != 0) {
    uVar2 = CityHash64((char *)param_2->_padding_,(iVar1 + -1) * 2);
    return uVar2;
  }
  uVar2 = CityHash64((char *)L"",0);
  return uVar2;
}

// VisitApplyEncoded<7,0,UE::Editor::DataStorage::FKeyComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c943f0

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<7,0,UE::Editor::DataStorage::FKeyComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FKeyComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  int iVar1;
  int iVar2;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  *pTVar3;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  *pTVar4;
  
  pTVar3 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
            *)0x0;
  pTVar4 = param_1->Key;
  if (param_1->Key->TypeIndex != '\a') {
    pTVar4 = pTVar3;
  }
  if (pTVar4 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                 *)0x0) {
    iVar2 = (int)pTVar4->_padding_;
    iVar1 = (int)param_2->_padding_;
    if (iVar2 != iVar1) {
      return iVar2 + iVar1 == 1;
    }
    if (1 < iVar2) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)pTVar4->_padding_,(wchar_t *)param_2->_padding_);
      return iVar2 == 0;
    }
    pTVar3 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
              *)&DAT_00000001;
  }
  return SUB81(pTVar3,0);
}

// VisitApplyEncoded<7,0,UE::Editor::DataStorage::FKeyCopy,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c94450

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
* __cdecl UE::Core::Private::
          VisitApplyEncoded<7,0,UE::Editor::DataStorage::FKeyCopy,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                     *__return_storage_ptr__,FKeyCopy *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  ::FString::FString((FString *)__return_storage_ptr__,(FString *)param_2);
  __return_storage_ptr__->TypeIndex = '\a';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<7,0,UE::Editor::DataStorage::FKeyMove,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_> @ 142c94480

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
* __cdecl UE::Core::Private::
          VisitApplyEncoded<7,0,UE::Editor::DataStorage::FKeyMove,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                     *__return_storage_ptr__,FKeyMove *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = param_2->_padding_;
  param_2->_padding_ = 0;
  *(int *)&__return_storage_ptr__->_padding_ = (int)param_2->_padding_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_2->_padding_ + 4);
  param_2->_padding_ = 0;
  __return_storage_ptr__->TypeIndex = '\a';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<7,0,UE::Editor::DataStorage::FKeyToKeyViewConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c944b0

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
* __cdecl UE::Core::Private::
          VisitApplyEncoded<7,0,UE::Editor::DataStorage::FKeyToKeyViewConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                     *__return_storage_ptr__,FKeyToKeyViewConverter *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  int iVar1;
  int iVar2;
  
  __return_storage_ptr__->_padding_ = param_2->_padding_;
  iVar1 = (int)param_2->_padding_;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  *(int *)&__return_storage_ptr__->_padding_ = iVar2;
  __return_storage_ptr__->TypeIndex = '\a';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<7,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c944e0

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<7,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FKeyViewComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  int iVar1;
  int iVar2;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  *pTVar3;
  int iVar4;
  
  pTVar3 = param_1->Key;
  if (param_1->Key->TypeIndex != '\a') {
    pTVar3 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)0x0;
  }
  if (pTVar3 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                 *)0x0) {
    iVar1 = (int)pTVar3->_padding_;
    iVar4 = (int)param_2->_padding_;
    if (iVar1 == iVar4) {
      if ((iVar1 != 0) && (iVar4 != 0)) {
        iVar2 = iVar4;
        if (iVar1 < iVar4) {
          iVar2 = iVar1;
        }
        iVar2 = FGenericPlatformStricmp::Strnicmp
                          ((wchar_t *)pTVar3->_padding_,(wchar_t *)param_2->_padding_,
                           (longlong)iVar2);
        if (iVar2 != 0) {
          return false;
        }
      }
      if (iVar1 == iVar4) {
        return true;
      }
    }
  }
  return false;
}

// VisitApplyEncoded<7,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c94560

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<7,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FKeyViewComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  *pTVar4;
  
  pTVar4 = param_1->Key;
  if (param_1->Key->TypeIndex != '\a') {
    pTVar4 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)0x0;
  }
  if (pTVar4 == (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                 *)0x0) {
    return false;
  }
  iVar2 = (int)param_2->_padding_;
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  iVar2 = (int)pTVar4->_padding_;
  if (iVar2 == iVar3) {
    if ((iVar2 != 0) && (iVar3 != 0)) {
      iVar1 = iVar3;
      if (iVar2 < iVar3) {
        iVar1 = iVar2;
      }
      iVar1 = FGenericPlatformStricmp::Strnicmp
                        ((wchar_t *)pTVar4->_padding_,(wchar_t *)param_2->_padding_,(longlong)iVar1)
      ;
      if (iVar1 != 0) {
        return false;
      }
    }
    if (iVar2 == iVar3) {
      return true;
    }
  }
  return false;
}

// VisitApplyEncoded<7,0,UE::Editor::DataStorage::FKeyViewToKeyConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c945f0

FMapKey * __cdecl
UE::Core::Private::
VisitApplyEncoded<7,0,UE::Editor::DataStorage::FKeyViewToKeyConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FMapKey *__return_storage_ptr__,FKeyViewToKeyConverter *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  FString *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FString local_28;
  FString local_18;
  
  pFVar1 = ::FString::ConstructFromPtrSize
                     (&local_28,(wchar_t *)param_2->_padding_,(int)param_2->_padding_);
  pFVar4 = (FScriptContainerElement *)0x0;
  iVar3 = 0;
  iVar2 = iVar3;
  if (&local_18 != pFVar1) {
    pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar3 = (pFVar1->Data).ArrayNum;
    iVar2 = (pFVar1->Data).ArrayMax;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  (__return_storage_ptr__->Key)._padding_ = (longlong)pFVar4;
  *(int *)&(__return_storage_ptr__->Key)._padding_ = iVar3;
  *(int *)((longlong)&(__return_storage_ptr__->Key)._padding_ + 4) = iVar2;
  (__return_storage_ptr__->Key).TypeIndex = '\a';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<7,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c94680

FString * __cdecl
UE::Core::Private::
VisitApplyEncoded<7,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FString *__return_storage_ptr__,FToString *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar2 = ::FString::ConstructFromPtrSize
                     (&local_18,(wchar_t *)param_2->_padding_,(int)param_2->_padding_);
  if (__return_storage_ptr__ != pFVar2) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// VisitApplyEncoded<7,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c94710

FString * __cdecl
UE::Core::Private::
VisitApplyEncoded<7,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FString *__return_storage_ptr__,FToString *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  ::FString::FString(__return_storage_ptr__,(FString *)param_2);
  return __return_storage_ptr__;
}

// VisitApplyEncoded<8,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c94730

ulong64 __cdecl
UE::Core::Private::
VisitApplyEncoded<8,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FHasher *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  return *(ulong64 *)param_2->_padding_;
}

// VisitApplyEncoded<8,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c94740

ulong64 __cdecl
UE::Core::Private::
VisitApplyEncoded<8,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FHasher *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  return param_2->_padding_;
}

// VisitApplyEncoded<8,0,UE::Editor::DataStorage::FKeyComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c94750

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<8,0,UE::Editor::DataStorage::FKeyComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FKeyComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  *pTVar1;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  *pTVar2;
  
  pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
            *)0x0;
  pTVar2 = param_1->Key;
  if (param_1->Key->TypeIndex != '\b') {
    pTVar2 = pTVar1;
  }
  if (pTVar2 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                 *)0x0) {
    pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
              *)(ulonglong)(pTVar2->_padding_ == param_2->_padding_);
  }
  return SUB81(pTVar1,0);
}

// VisitApplyEncoded<8,0,UE::Editor::DataStorage::FKeyCopy,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c94780

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
* __cdecl UE::Core::Private::
          VisitApplyEncoded<8,0,UE::Editor::DataStorage::FKeyCopy,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                     *__return_storage_ptr__,FKeyCopy *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  __return_storage_ptr__->_padding_ = param_2->_padding_;
  __return_storage_ptr__->TypeIndex = '\b';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<8,0,UE::Editor::DataStorage::FKeyMove,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_> @ 142c947a0

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
* __cdecl UE::Core::Private::
          VisitApplyEncoded<8,0,UE::Editor::DataStorage::FKeyMove,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                     *__return_storage_ptr__,FKeyMove *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  __return_storage_ptr__->_padding_ = param_2->_padding_;
  __return_storage_ptr__->TypeIndex = '\b';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<8,0,UE::Editor::DataStorage::FKeyToKeyViewConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c947c0

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
* __cdecl UE::Core::Private::
          VisitApplyEncoded<8,0,UE::Editor::DataStorage::FKeyToKeyViewConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                     *__return_storage_ptr__,FKeyToKeyViewConverter *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  __return_storage_ptr__->_padding_ = (longlong)param_2;
  __return_storage_ptr__->TypeIndex = '\b';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<8,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c947e0

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<8,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FKeyViewComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  *pTVar1;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  *pTVar2;
  
  pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
            *)0x0;
  pTVar2 = param_1->Key;
  if (param_1->Key->TypeIndex != '\b') {
    pTVar2 = pTVar1;
  }
  if (pTVar2 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                 *)0x0) {
    pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)(ulonglong)(*(longlong *)pTVar2->_padding_ == *(longlong *)param_2->_padding_);
  }
  return SUB81(pTVar1,0);
}

// VisitApplyEncoded<8,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c94810

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<8,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FKeyViewComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  *pTVar1;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  *pTVar2;
  
  pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
            *)0x0;
  pTVar2 = param_1->Key;
  if (param_1->Key->TypeIndex != '\b') {
    pTVar2 = pTVar1;
  }
  if (pTVar2 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                 *)0x0) {
    pTVar1 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)(ulonglong)(*(longlong *)pTVar2->_padding_ == param_2->_padding_);
  }
  return SUB81(pTVar1,0);
}

// VisitApplyEncoded<8,0,UE::Editor::DataStorage::FKeyViewToKeyConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c94840

FMapKey * __cdecl
UE::Core::Private::
VisitApplyEncoded<8,0,UE::Editor::DataStorage::FKeyViewToKeyConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FMapKey *__return_storage_ptr__,FKeyViewToKeyConverter *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  (__return_storage_ptr__->Key)._padding_ = *(longlong *)param_2->_padding_;
  (__return_storage_ptr__->Key).TypeIndex = '\b';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<8,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c94860

FString * __cdecl
UE::Core::Private::
VisitApplyEncoded<8,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FString *__return_storage_ptr__,FToString *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  ::FName::ToString((FName *)param_2->_padding_,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// VisitApplyEncoded<8,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c94890

FString * __cdecl
UE::Core::Private::
VisitApplyEncoded<8,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FString *__return_storage_ptr__,FToString *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  ::FName::ToString((FName *)param_2,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// VisitApplyEncoded<9,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c948c0

ulong64 __cdecl
UE::Core::Private::
VisitApplyEncoded<9,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FHasher *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  ulong64 uVar1;
  
  uVar1 = Editor::DataStorage::FHasher::operator()(param_1,(FSoftObjectPath *)param_2->_padding_);
  return uVar1;
}

// VisitApplyEncoded<9,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c948d0

ulong64 __cdecl
UE::Core::Private::
VisitApplyEncoded<9,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FHasher *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  ulong64 uVar1;
  
  uVar1 = Editor::DataStorage::FHasher::operator()(param_1,(FSoftObjectPath *)param_2->_padding_);
  return uVar1;
}

// VisitApplyEncoded<9,0,UE::Editor::DataStorage::FKeyComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c948e0

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<9,0,UE::Editor::DataStorage::FKeyComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FKeyComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  *pTVar4;
  bool bVar5;
  
  pTVar4 = param_1->Key;
  if (param_1->Key->TypeIndex != '\t') {
    pTVar4 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
              *)0x0;
  }
  if (((pTVar4 == (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                   *)0x0) || (plVar1 = (longlong *)pTVar4->_padding_, plVar1 == (longlong *)0x0)) ||
     (plVar2 = (longlong *)param_2->_padding_, plVar2 == (longlong *)0x0)) {
    return false;
  }
  if ((*plVar1 == *plVar2) && (plVar1[1] == plVar2[1])) {
    iVar3 = (int)plVar1[3];
    if (iVar3 == (int)plVar2[3]) {
      if (iVar3 < 2) {
        return true;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp((uchar *)plVar1[2],(uchar *)plVar2[2]);
      bVar5 = iVar3 == 0;
    }
    else {
      bVar5 = iVar3 + (int)plVar2[3] == 1;
    }
    if (bVar5) {
      return true;
    }
  }
  return false;
}

// VisitApplyEncoded<9,0,UE::Editor::DataStorage::FKeyCopy,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c94910

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
* __cdecl UE::Core::Private::
          VisitApplyEncoded<9,0,UE::Editor::DataStorage::FKeyCopy,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                     *__return_storage_ptr__,FKeyCopy *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  FSoftObjectPath *pFVar1;
  FSoftObjectPath *this;
  FSoftObjectPath *pFVar2;
  
  pFVar1 = (FSoftObjectPath *)param_2->_padding_;
  this = ::operator_new(0x20);
  pFVar2 = (FSoftObjectPath *)0x0;
  if (this != (FSoftObjectPath *)0x0) {
    pFVar2 = FSoftObjectPath::FSoftObjectPath(this,pFVar1);
  }
  __return_storage_ptr__->_padding_ = (longlong)pFVar2;
  __return_storage_ptr__->TypeIndex = '\t';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<9,0,UE::Editor::DataStorage::FKeyMove,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_> @ 142c94960

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
* __cdecl UE::Core::Private::
          VisitApplyEncoded<9,0,UE::Editor::DataStorage::FKeyMove,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                     *__return_storage_ptr__,FKeyMove *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  __return_storage_ptr__->_padding_ = param_2->_padding_;
  param_2->_padding_ = 0;
  __return_storage_ptr__->TypeIndex = '\t';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<9,0,UE::Editor::DataStorage::FKeyToKeyViewConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c94980

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
* __cdecl UE::Core::Private::
          VisitApplyEncoded<9,0,UE::Editor::DataStorage::FKeyToKeyViewConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                     *__return_storage_ptr__,FKeyToKeyViewConverter *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  __return_storage_ptr__->_padding_ = param_2->_padding_;
  __return_storage_ptr__->TypeIndex = '\t';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<9,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c949a0

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<9,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FKeyViewComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  bool bVar1;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  *pTVar2;
  
  pTVar2 = param_1->Key;
  if (param_1->Key->TypeIndex != '\t') {
    pTVar2 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
              *)0x0;
  }
  if (pTVar2 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                 *)0x0) {
    bVar1 = FSoftObjectPath::operator==
                      ((FSoftObjectPath *)pTVar2->_padding_,(FSoftObjectPath *)param_2->_padding_);
    return bVar1;
  }
  return false;
}

// VisitApplyEncoded<9,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c949d0

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<9,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FKeyViewComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  bool bVar1;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  *pTVar2;
  
  if ((FSoftObjectPath *)param_2->_padding_ != (FSoftObjectPath *)0x0) {
    pTVar2 = param_1->Key;
    if (param_1->Key->TypeIndex != '\t') {
      pTVar2 = (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                *)0x0;
    }
    if (pTVar2 != (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                   *)0x0) {
      bVar1 = FSoftObjectPath::operator==
                        ((FSoftObjectPath *)pTVar2->_padding_,(FSoftObjectPath *)param_2->_padding_)
      ;
      return bVar1;
    }
  }
  return false;
}

// VisitApplyEncoded<9,0,UE::Editor::DataStorage::FKeyViewToKeyConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c94a00

FMapKey * __cdecl
UE::Core::Private::
VisitApplyEncoded<9,0,UE::Editor::DataStorage::FKeyViewToKeyConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FMapKey *__return_storage_ptr__,FKeyViewToKeyConverter *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  FSoftObjectPath *pFVar1;
  FSoftObjectPath local_28;
  
  pFVar1 = FSoftObjectPath::FSoftObjectPath(&local_28,(FSoftObjectPath *)param_2->_padding_);
  Editor::DataStorage::FMapKey::FMapKey(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// VisitApplyEncoded<9,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c94a30

FString * __cdecl
UE::Core::Private::
VisitApplyEncoded<9,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FString *__return_storage_ptr__,FToString *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  FSoftObjectPath::ToString((FSoftObjectPath *)param_2->_padding_,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// VisitApplyEncoded<9,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c94a60

FString * __cdecl
UE::Core::Private::
VisitApplyEncoded<9,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FString *__return_storage_ptr__,FToString *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  FString *pFVar1;
  bool bVar2;
  FString local_28;
  FString local_18;
  
  bVar2 = (FSoftObjectPath *)param_2->_padding_ == (FSoftObjectPath *)0x0;
  if (bVar2) {
    pFVar1 = ::FString::FString(&local_28,L"Empty path");
  }
  else {
    pFVar1 = FSoftObjectPath::ToString((FSoftObjectPath *)param_2->_padding_,&local_18);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar1->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  if (bVar2) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// VisitApplyEncoded<0,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c94b90

ulong64 __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FHasher *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  return 0;
}

// VisitApplyEncoded<0,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c94ba0

ulong64 __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,UE::Editor::DataStorage::FHasher,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FHasher *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  return 0;
}

// VisitApplyEncoded<0,0,UE::Editor::DataStorage::FKeyComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c94bb0

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,UE::Editor::DataStorage::FKeyComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FKeyComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1->Key->TypeIndex;
  if (9 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)*(undefined1 *)
                ((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + uVar4);
}

// VisitApplyEncoded<0,0,UE::Editor::DataStorage::FKeyCopy,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c94c00

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
* __cdecl UE::Core::Private::
          VisitApplyEncoded<0,0,UE::Editor::DataStorage::FKeyCopy,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                     *__return_storage_ptr__,FKeyCopy *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  __return_storage_ptr__->TypeIndex = '\0';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<0,0,UE::Editor::DataStorage::FKeyMove,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_> @ 142c94c10

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
* __cdecl UE::Core::Private::
          VisitApplyEncoded<0,0,UE::Editor::DataStorage::FKeyMove,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                     *__return_storage_ptr__,FKeyMove *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  __return_storage_ptr__->TypeIndex = '\0';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<0,0,UE::Editor::DataStorage::FKeyToKeyViewConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c94c20

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
* __cdecl UE::Core::Private::
          VisitApplyEncoded<0,0,UE::Editor::DataStorage::FKeyToKeyViewConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                     *__return_storage_ptr__,FKeyToKeyViewConverter *param_1,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_2)

{
  __return_storage_ptr__->TypeIndex = '\0';
  return __return_storage_ptr__;
}

// VisitApplyEncoded<0,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c94c30

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FKeyViewComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1->Key->TypeIndex;
  if (9 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)*(undefined1 *)
                ((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + uVar4);
}

// VisitApplyEncoded<0,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c94c80

bool __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,UE::Editor::DataStorage::FKeyViewComparer,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FKeyViewComparer *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_1->Key->TypeIndex;
  if (9 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)*(undefined1 *)
                ((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + uVar4);
}

// VisitApplyEncoded<0,0,UE::Editor::DataStorage::FKeyViewToKeyConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c94cd0

FMapKey * __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,UE::Editor::DataStorage::FKeyViewToKeyConverter,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FMapKey *__return_storage_ptr__,FKeyViewToKeyConverter *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  (__return_storage_ptr__->Key)._padding_ = 0;
  (__return_storage_ptr__->Key)._padding_ = 0;
  *(undefined8 *)&(__return_storage_ptr__->Key).TypeIndex = 0;
  return __return_storage_ptr__;
}

// VisitApplyEncoded<0,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c94cf0

FString * __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FString *__return_storage_ptr__,FToString *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_2)

{
  ::FString::FString(__return_storage_ptr__,L"Empty");
  return __return_storage_ptr__;
}

// VisitApplyEncoded<0,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c94d20

FString * __cdecl
UE::Core::Private::
VisitApplyEncoded<0,0,UE::Editor::DataStorage::FToString,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FString *__return_storage_ptr__,FToString *param_1,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_2)

{
  ::FString::FString(__return_storage_ptr__,L"Empty");
  return __return_storage_ptr__;
}

// VisitImpl<UE::Editor::DataStorage::FHasher,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c94d90

ulong64 __cdecl
UE::Core::Private::
VisitImpl<UE::Editor::DataStorage::FHasher,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (ulong64 param_1,FHasher *param_2,
          TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9> *param_3,
          TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_5)

{
  ulong64 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142c94da6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FHasher,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FHasher&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
            ::__l2::Invokers[param_1])(param_2,param_5);
  return uVar1;
}

// VisitImpl<UE::Editor::DataStorage::FHasher,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c94db0

ulong64 __cdecl
UE::Core::Private::
VisitImpl<UE::Editor::DataStorage::FHasher,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (ulong64 param_1,FHasher *param_2,
          TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9> *param_3,
          TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_5)

{
  ulong64 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142c94dc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FHasher,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FHasher&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
            ::__l2::Invokers[param_1])(param_2,param_5);
  return uVar1;
}

// VisitImpl<UE::Editor::DataStorage::FKeyComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c94dd0

bool __cdecl
UE::Core::Private::
VisitImpl<UE::Editor::DataStorage::FKeyComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (ulong64 param_1,FKeyComparer *param_2,
          TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9> *param_3,
          TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_5)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142c94de6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
            ::__l2::Invokers[param_1])(param_2,param_5);
  return bVar1;
}

// VisitImpl<UE::Editor::DataStorage::FKeyCopy,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c94df0

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
* __cdecl UE::Core::Private::
          VisitImpl<UE::Editor::DataStorage::FKeyCopy,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                     *__return_storage_ptr__,ulong64 param_1,FKeyCopy *param_2,
                    TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9> *param_3,
                    TIntegerSequence<unsigned___int64,0> *param_4,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_5)

{
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyCopy,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyCopy&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
    ::__l2::Invokers[param_1])(__return_storage_ptr__,param_2,param_5);
  return __return_storage_ptr__;
}

// VisitImpl<UE::Editor::DataStorage::FKeyMove,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_> @ 142c94e20

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
* __cdecl UE::Core::Private::
          VisitImpl<UE::Editor::DataStorage::FKeyMove,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                     *__return_storage_ptr__,ulong64 param_1,FKeyMove *param_2,
                    TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9> *param_3,
                    TIntegerSequence<unsigned___int64,0> *param_4,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_5)

{
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyMove,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_>(unsigned___int64,UE::Editor::DataStorage::FKeyMove&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>&&___ptr64)'
    ::__l2::Invokers[param_1])(__return_storage_ptr__,param_2,param_5);
  return __return_storage_ptr__;
}

// VisitImpl<UE::Editor::DataStorage::FKeyToKeyViewConverter,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c94e50

TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
* __cdecl UE::Core::Private::
          VisitImpl<UE::Editor::DataStorage::FKeyToKeyViewConverter,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
                    (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
                     *__return_storage_ptr__,ulong64 param_1,FKeyToKeyViewConverter *param_2,
                    TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9> *param_3,
                    TIntegerSequence<unsigned___int64,0> *param_4,
                    TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
                    *param_5)

{
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyToKeyViewConverter,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyToKeyViewConverter&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
    ::__l2::Invokers[param_1])(__return_storage_ptr__,param_2,param_5);
  return __return_storage_ptr__;
}

// VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c94e80

bool __cdecl
UE::Core::Private::
VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (ulong64 param_1,FKeyViewComparer *param_2,
          TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9> *param_3,
          TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_5)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142c94e96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
            ::__l2::Invokers[param_1])(param_2,param_5);
  return bVar1;
}

// VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c94ea0

bool __cdecl
UE::Core::Private::
VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (ulong64 param_1,FKeyViewComparer *param_2,
          TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9> *param_3,
          TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_5)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142c94eb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
            ::__l2::Invokers[param_1])(param_2,param_5);
  return bVar1;
}

// VisitImpl<UE::Editor::DataStorage::FKeyViewToKeyConverter,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c94ec0

FMapKey * __cdecl
UE::Core::Private::
VisitImpl<UE::Editor::DataStorage::FKeyViewToKeyConverter,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FMapKey *__return_storage_ptr__,ulong64 param_1,FKeyViewToKeyConverter *param_2,
          TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9> *param_3,
          TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_5)

{
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewToKeyConverter,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewToKeyConverter&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
    ::__l2::Invokers[param_1])(__return_storage_ptr__,param_2,param_5);
  return __return_storage_ptr__;
}

// VisitImpl<UE::Editor::DataStorage::FToString,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&> @ 142c94ef0

FString * __cdecl
UE::Core::Private::
VisitImpl<UE::Editor::DataStorage::FToString,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>_const_&>
          (FString *__return_storage_ptr__,ulong64 param_1,FToString *param_2,
          TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9> *param_3,
          TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
          *param_5)

{
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FToString,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FToString&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const*___ptr64,FSoftObjectPath_const*___ptr64>_const&___ptr64)'
    ::__l2::Invokers[param_1])(__return_storage_ptr__,param_2,param_5);
  return __return_storage_ptr__;
}

// VisitImpl<UE::Editor::DataStorage::FToString,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&> @ 142c94f20

FString * __cdecl
UE::Core::Private::
VisitImpl<UE::Editor::DataStorage::FToString,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const_&>
          (FString *__return_storage_ptr__,ulong64 param_1,FToString *param_2,
          TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9> *param_3,
          TIntegerSequence<unsigned___int64,0> *param_4,
          TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
          *param_5)

{
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FToString,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FToString&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
    ::__l2::Invokers[param_1])(__return_storage_ptr__,param_2,param_5);
  return __return_storage_ptr__;
}

// Count @ 142c959a0

Count * __thiscall UE::Editor::DataStorage::Queries::Count::Count(Count *this)

{
  FQueryDescription::FQueryDescription(&this->Query);
  (this->Query).Action = Count;
  return this;
}

// Select @ 142c98a70

Select * __thiscall UE::Editor::DataStorage::Queries::Select::Select(Select *this)

{
  FQueryDescription::FQueryDescription(&this->Query);
  (this->Query).Action = Select;
  return this;
}

// operator() @ 142c9f130

bool __thiscall
`UE::TypedElementFramework::ConvertToNativeTypedElementList'::__l8::<lambda_1>::operator()
          (void *this,FScriptTypedElementHandle *param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  FScriptTypedElementInternalDataControlBlock *pFVar3;
  FTypedElementInternalData *this_00;
  longlong *plVar4;
  FTypedElementReferences *lpCriticalSection;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  FTypedElementHandle local_28;
  
  pFVar3 = (param_1->InternalData).ControlBlock;
  if ((pFVar3 == (FScriptTypedElementInternalDataControlBlock *)0x0) ||
     (this_00 = pFVar3->Data, this_00 == (FTypedElementInternalData *)0x0)) {
    return true;
  }
  local_28.DataPtr = this_00;
  iVar10 = FTypedElementInternalData::AddRef(this_00,true);
  plVar4 = *(longlong **)this;
  local_28.ReferenceId = iVar10;
  if (*plVar4 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
  }
  TTypedElementList<FTypedElementHandle>::Add
            ((TTypedElementList<FTypedElementHandle> *)*plVar4,&local_28);
  if (this_00 != (FTypedElementInternalData *)0x0) {
    LOCK();
    this_00->RefCount = this_00->RefCount + -1;
    UNLOCK();
    lpCriticalSection = (this_00->References).Ptr;
    if ((lpCriticalSection != (FTypedElementReferences *)0x0) && (iVar10 != -1)) {
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      lVar5 = *(longlong *)&lpCriticalSection->References;
      puVar1 = &(lpCriticalSection->References).field_0x10;
      bVar7 = (byte)iVar10 & 0x1f;
      uVar14 = 1 << bVar7 | 1U >> 0x20 - bVar7;
      if ((iVar10 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar10)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      puVar12 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      lVar2 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      if ((*(uint *)(puVar12 + lVar2) & uVar14) == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      if (*(int *)&(lpCriticalSection->References).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(lpCriticalSection->References).field_0x30 * 0x108 + lVar5) =
             iVar10;
      }
      uVar11 = 0xffffffff;
      puVar13 = (undefined4 *)((longlong)iVar10 * 0x108 + lVar5);
      *puVar13 = 0xffffffff;
      if (0 < *(int *)&(lpCriticalSection->References).field_0x34) {
        uVar11 = *(undefined4 *)&(lpCriticalSection->References).field_0x30;
      }
      puVar13[1] = uVar11;
      puVar12 = &(lpCriticalSection->References).field_0x34;
      *(int *)puVar12 = *(int *)puVar12 + 1;
      *(int *)&(lpCriticalSection->References).field_0x30 = iVar10;
      if ((iVar10 < 0) || (*(int *)&(lpCriticalSection->References).field_0x28 <= iVar10)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
      }
      puVar12 = *(undefined1 **)&(lpCriticalSection->References).field_0x20;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar1;
      }
      *(uint *)(puVar12 + lVar2) = *(uint *)(puVar12 + lVar2) & ~uVar14;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return true;
    }
  }
  return true;
}

// operator() @ 142c9f350

bool __thiscall
`UE::TypedElementFramework::ConvertToScriptTypedElementList'::__l8::<lambda_1>::operator()
          (void *this,FTypedElementHandle *param_1)

{
  longlong *plVar1;
  TTypedElementList<FScriptTypedElementHandle> *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FScriptTypedElementHandle FVar5;
  void *local_res8;
  
  plVar1 = *(longlong **)this;
  if ((*plVar1 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  this_00 = (TTypedElementList<FScriptTypedElementHandle> *)*plVar1;
  FVar5 = UTypedElementRegistry::CreateScriptHandle
                    ((UTypedElementRegistry *)**(undefined8 **)((longlong)this + 8),
                     (FTypedElementId *)&local_res8);
  TTypedElementList<FScriptTypedElementHandle>::AddElementImpl
            (this_00,(FScriptTypedElementHandle *)FVar5.InternalData.ControlBlock);
  if ((local_res8 != (void *)0x0) &&
     (*(int *)((longlong)local_res8 + 8) = *(int *)((longlong)local_res8 + 8) + -1,
     *(int *)((longlong)local_res8 + 8) == 0)) {
    ::operator_delete(local_res8,0x10);
  }
  return true;
}

// operator&& @ 142ca0100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FConditions * __cdecl
UE::Editor::DataStorage::Queries::operator&&
          (FConditions *__return_storage_ptr__,FConditions *param_1,FConditions *param_2)

{
  code *pcVar1;
  bool bVar2;
  FConditions *pFVar3;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> FVar4;
  ulonglong uVar5;
  undefined1 auStack_318 [32];
  ulonglong local_2f8;
  longlong local_2f0;
  FConditions local_2e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_318;
  pFVar3 = param_2;
  if ((param_1->ColumnCount == '\0') || (pFVar3 = param_1, param_2->ColumnCount == '\0')) {
    FConditions::FConditions(__return_storage_ptr__,pFVar3);
  }
  else {
    FConditions::FConditions(&local_2e8);
    uVar5 = (ulonglong)local_2e8.TokenCount;
    if (local_2e8.Tokens.ArrayNum <= (int)(uint)local_2e8.TokenCount) {
      local_2f8 = (ulonglong)(int)(uint)local_2e8.TokenCount;
      local_2f0 = (longlong)local_2e8.Tokens.ArrayNum;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FConditions *)(*pcVar1)();
        return pFVar3;
      }
    }
    FVar4 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)&local_2e8.Tokens;
    if (local_2e8.Tokens.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
      FVar4 = local_2e8.Tokens.AllocatorInstance.SecondaryData;
    }
    *(undefined1 *)(uVar5 + (longlong)FVar4) = 3;
    local_2e8.TokenCount = local_2e8.TokenCount + 1;
    FConditions::AppendQuery(&local_2e8,param_1);
    uVar5 = (ulonglong)local_2e8.TokenCount;
    if (local_2e8.Tokens.ArrayNum <= (int)(uint)local_2e8.TokenCount) {
      local_2f8 = (ulonglong)(int)(uint)local_2e8.TokenCount;
      local_2f0 = (longlong)local_2e8.Tokens.ArrayNum;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FConditions *)(*pcVar1)();
        return pFVar3;
      }
    }
    FVar4 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)&local_2e8.Tokens;
    if (local_2e8.Tokens.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
      FVar4 = local_2e8.Tokens.AllocatorInstance.SecondaryData;
    }
    *(undefined1 *)(uVar5 + (longlong)FVar4) = 4;
    local_2e8.TokenCount = local_2e8.TokenCount + 1;
    uVar5 = (ulonglong)local_2e8.TokenCount;
    if ((local_2e8.Tokens.ArrayNum <= (int)(uint)local_2e8.TokenCount) &&
       (local_2f8 = uVar5, local_2f0 = (longlong)local_2e8.Tokens.ArrayNum,
       bVar2 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FConditions *)(*pcVar1)();
      return pFVar3;
    }
    FVar4 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)&local_2e8.Tokens;
    if (local_2e8.Tokens.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
      FVar4 = local_2e8.Tokens.AllocatorInstance.SecondaryData;
    }
    *(undefined1 *)(uVar5 + (longlong)FVar4) = 1;
    local_2e8.TokenCount = local_2e8.TokenCount + 1;
    uVar5 = (ulonglong)local_2e8.TokenCount;
    if ((local_2e8.Tokens.ArrayNum <= (int)(uint)local_2e8.TokenCount) &&
       (local_2f8 = uVar5, local_2f0 = (longlong)local_2e8.Tokens.ArrayNum,
       bVar2 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FConditions *)(*pcVar1)();
      return pFVar3;
    }
    FVar4 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)&local_2e8.Tokens;
    if (local_2e8.Tokens.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
      FVar4 = local_2e8.Tokens.AllocatorInstance.SecondaryData;
    }
    *(undefined1 *)(uVar5 + (longlong)FVar4) = 3;
    local_2e8.TokenCount = local_2e8.TokenCount + 1;
    FConditions::AppendQuery(&local_2e8,param_2);
    uVar5 = (ulonglong)local_2e8.TokenCount;
    if (local_2e8.Tokens.ArrayNum <= (int)(uint)local_2e8.TokenCount) {
      local_2f8 = (ulonglong)(int)(uint)local_2e8.TokenCount;
      local_2f0 = (longlong)local_2e8.Tokens.ArrayNum;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FConditions *)(*pcVar1)();
        return pFVar3;
      }
    }
    FVar4 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)&local_2e8.Tokens;
    if (local_2e8.Tokens.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
      FVar4 = local_2e8.Tokens.AllocatorInstance.SecondaryData;
    }
    *(undefined1 *)(uVar5 + (longlong)FVar4) = 4;
    local_2e8.TokenCount = local_2e8.TokenCount + 1;
    FConditions::FConditions(__return_storage_ptr__,&local_2e8);
    if (local_2e8.Identifiers.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
      FMemory::Free((void *)local_2e8.Identifiers.AllocatorInstance.SecondaryData);
    }
    if (local_2e8.Tokens.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
      FMemory::Free((void *)local_2e8.Tokens.AllocatorInstance.SecondaryData);
    }
    if (local_2e8.ColumnFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)0x0) {
      FMemory::Free((void *)local_2e8.ColumnFlags.AllocatorInstance.SecondaryData);
    }
    if (local_2e8.Columns.AllocatorInstance.SecondaryData !=
        (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
      FMemory::Free((void *)local_2e8.Columns.AllocatorInstance.SecondaryData);
    }
  }
  return __return_storage_ptr__;
}

// operator&& @ 142ca03e0

FConditions * __cdecl
UE::Editor::DataStorage::Queries::operator&&
          (FConditions *__return_storage_ptr__,FConditions *param_1,FColumnBase *param_2)

{
  byte bVar1;
  FWeakObjectPtr FVar2;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  FConditions *pFVar7;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar8;
  ForElementType<FName> FVar9;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> FVar10;
  
  FConditions::FConditions(__return_storage_ptr__,param_1);
  bVar1 = __return_storage_ptr__->ColumnCount;
  FVar2 = (param_2->TypeInfo).WeakPtr;
  if ((__return_storage_ptr__->Columns).ArrayNum <= (int)(uint)bVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FConditions *)(*pcVar5)();
      return pFVar7;
    }
  }
  FVar3 = (__return_storage_ptr__->Columns).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)
          __return_storage_ptr__;
  if (FVar3 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    FVar8 = FVar3;
  }
  *(FWeakObjectPtr *)((longlong)FVar8 + (ulonglong)bVar1 * 8) = FVar2;
  bVar1 = __return_storage_ptr__->ColumnCount;
  FVar4 = param_2->Identifier;
  if ((__return_storage_ptr__->Identifiers).ArrayNum <= (int)(uint)bVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FConditions *)(*pcVar5)();
      return pFVar7;
    }
  }
  FVar9 = (__return_storage_ptr__->Identifiers).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FName>)0x0) {
    FVar9 = (ForElementType<FName>)&__return_storage_ptr__->Identifiers;
  }
  *(FName *)((longlong)FVar9 + (ulonglong)bVar1 * 8) = FVar4;
  __return_storage_ptr__->ColumnCount = __return_storage_ptr__->ColumnCount + '\x01';
  bVar1 = __return_storage_ptr__->TokenCount;
  if ((__return_storage_ptr__->Tokens).ArrayNum <= (int)(uint)bVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FConditions *)(*pcVar5)();
      return pFVar7;
    }
  }
  FVar10 = (__return_storage_ptr__->Tokens).AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
    FVar10 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)
             &__return_storage_ptr__->Tokens;
  }
  *(undefined1 *)((longlong)FVar10 + (ulonglong)bVar1) = 1;
  __return_storage_ptr__->TokenCount = __return_storage_ptr__->TokenCount + '\x01';
  return __return_storage_ptr__;
}

// operator&& @ 142ca0550

FConditions * __cdecl
UE::Editor::DataStorage::Queries::operator&&
          (FConditions *__return_storage_ptr__,FColumnBase *param_1,FColumnBase *param_2)

{
  byte bVar1;
  FWeakObjectPtr FVar2;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  FConditions *pFVar7;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar8;
  ForElementType<FName> FVar9;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> FVar10;
  FColumnBase local_18;
  
  local_18.TypeInfo.WeakPtr = (param_1->TypeInfo).WeakPtr;
  local_18.Identifier = param_1->Identifier;
  FConditions::FConditions(__return_storage_ptr__,&local_18);
  bVar1 = __return_storage_ptr__->ColumnCount;
  FVar2 = (param_2->TypeInfo).WeakPtr;
  if ((__return_storage_ptr__->Columns).ArrayNum <= (int)(uint)bVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FConditions *)(*pcVar5)();
      return pFVar7;
    }
  }
  FVar3 = (__return_storage_ptr__->Columns).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)
          __return_storage_ptr__;
  if (FVar3 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    FVar8 = FVar3;
  }
  *(FWeakObjectPtr *)((longlong)FVar8 + (ulonglong)bVar1 * 8) = FVar2;
  bVar1 = __return_storage_ptr__->ColumnCount;
  FVar4 = param_2->Identifier;
  if ((__return_storage_ptr__->Identifiers).ArrayNum <= (int)(uint)bVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FConditions *)(*pcVar5)();
      return pFVar7;
    }
  }
  FVar9 = (__return_storage_ptr__->Identifiers).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FName>)0x0) {
    FVar9 = (ForElementType<FName>)&__return_storage_ptr__->Identifiers;
  }
  *(FName *)((longlong)FVar9 + (ulonglong)bVar1 * 8) = FVar4;
  __return_storage_ptr__->ColumnCount = __return_storage_ptr__->ColumnCount + '\x01';
  bVar1 = __return_storage_ptr__->TokenCount;
  if ((__return_storage_ptr__->Tokens).ArrayNum <= (int)(uint)bVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FConditions *)(*pcVar5)();
      return pFVar7;
    }
  }
  FVar10 = (__return_storage_ptr__->Tokens).AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
    FVar10 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)
             &__return_storage_ptr__->Tokens;
  }
  *(undefined1 *)((longlong)FVar10 + (ulonglong)bVar1) = 1;
  __return_storage_ptr__->TokenCount = __return_storage_ptr__->TokenCount + '\x01';
  return __return_storage_ptr__;
}

// operator&& @ 142ca06d0

FConditions * __cdecl
UE::Editor::DataStorage::Queries::operator&&
          (FConditions *__return_storage_ptr__,FColumnBase *param_1,FConditions *param_2)

{
  TArray<UE::Editor::DataStorage::Queries::FConditions::Token,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  FConditions *pFVar5;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> FVar6;
  FColumnBase local_18;
  
  local_18.TypeInfo.WeakPtr = (param_1->TypeInfo).WeakPtr;
  local_18.Identifier = param_1->Identifier;
  FConditions::FConditions(__return_storage_ptr__,&local_18);
  if (param_2->ColumnCount != '\0') {
    pTVar1 = &__return_storage_ptr__->Tokens;
    bVar4 = __return_storage_ptr__->TokenCount;
    if ((__return_storage_ptr__->Tokens).ArrayNum <= (int)(uint)bVar4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FConditions *)(*pcVar2)();
        return pFVar5;
      }
    }
    FVar6 = (__return_storage_ptr__->Tokens).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
      FVar6 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)pTVar1;
    }
    *(undefined1 *)((longlong)FVar6 + (ulonglong)bVar4) = 1;
    bVar4 = __return_storage_ptr__->TokenCount + 1;
    __return_storage_ptr__->TokenCount = bVar4;
    if ((__return_storage_ptr__->Tokens).ArrayNum <= (int)(uint)bVar4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FConditions *)(*pcVar2)();
        return pFVar5;
      }
    }
    FVar6 = (__return_storage_ptr__->Tokens).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
      FVar6 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)pTVar1;
    }
    *(undefined1 *)((longlong)FVar6 + (ulonglong)bVar4) = 3;
    __return_storage_ptr__->TokenCount = __return_storage_ptr__->TokenCount + '\x01';
    FConditions::AppendQuery(__return_storage_ptr__,param_2);
    bVar4 = __return_storage_ptr__->TokenCount;
    if ((__return_storage_ptr__->Tokens).ArrayNum <= (int)(uint)bVar4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FConditions *)(*pcVar2)();
        return pFVar5;
      }
    }
    FVar6 = (__return_storage_ptr__->Tokens).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
      FVar6 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)pTVar1;
    }
    *(undefined1 *)((longlong)FVar6 + (ulonglong)bVar4) = 4;
    __return_storage_ptr__->TokenCount = __return_storage_ptr__->TokenCount + '\x01';
  }
  return __return_storage_ptr__;
}

// operator|| @ 142ca0850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FConditions * __cdecl
UE::Editor::DataStorage::Queries::operator||
          (FConditions *__return_storage_ptr__,FConditions *param_1,FConditions *param_2)

{
  code *pcVar1;
  bool bVar2;
  FConditions *pFVar3;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> FVar4;
  ulonglong uVar5;
  undefined1 auStack_318 [32];
  ulonglong local_2f8;
  longlong local_2f0;
  FConditions local_2e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_318;
  pFVar3 = param_2;
  if ((param_1->ColumnCount == '\0') || (pFVar3 = param_1, param_2->ColumnCount == '\0')) {
    FConditions::FConditions(__return_storage_ptr__,pFVar3);
  }
  else {
    FConditions::FConditions(&local_2e8);
    uVar5 = (ulonglong)local_2e8.TokenCount;
    if (local_2e8.Tokens.ArrayNum <= (int)(uint)local_2e8.TokenCount) {
      local_2f8 = (ulonglong)(int)(uint)local_2e8.TokenCount;
      local_2f0 = (longlong)local_2e8.Tokens.ArrayNum;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FConditions *)(*pcVar1)();
        return pFVar3;
      }
    }
    FVar4 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)&local_2e8.Tokens;
    if (local_2e8.Tokens.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
      FVar4 = local_2e8.Tokens.AllocatorInstance.SecondaryData;
    }
    *(undefined1 *)(uVar5 + (longlong)FVar4) = 3;
    local_2e8.TokenCount = local_2e8.TokenCount + 1;
    FConditions::AppendQuery(&local_2e8,param_1);
    uVar5 = (ulonglong)local_2e8.TokenCount;
    if (local_2e8.Tokens.ArrayNum <= (int)(uint)local_2e8.TokenCount) {
      local_2f8 = (ulonglong)(int)(uint)local_2e8.TokenCount;
      local_2f0 = (longlong)local_2e8.Tokens.ArrayNum;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FConditions *)(*pcVar1)();
        return pFVar3;
      }
    }
    FVar4 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)&local_2e8.Tokens;
    if (local_2e8.Tokens.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
      FVar4 = local_2e8.Tokens.AllocatorInstance.SecondaryData;
    }
    *(undefined1 *)(uVar5 + (longlong)FVar4) = 4;
    local_2e8.TokenCount = local_2e8.TokenCount + 1;
    uVar5 = (ulonglong)local_2e8.TokenCount;
    if ((local_2e8.Tokens.ArrayNum <= (int)(uint)local_2e8.TokenCount) &&
       (local_2f8 = uVar5, local_2f0 = (longlong)local_2e8.Tokens.ArrayNum,
       bVar2 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FConditions *)(*pcVar1)();
      return pFVar3;
    }
    FVar4 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)&local_2e8.Tokens;
    if (local_2e8.Tokens.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
      FVar4 = local_2e8.Tokens.AllocatorInstance.SecondaryData;
    }
    *(undefined1 *)(uVar5 + (longlong)FVar4) = 2;
    local_2e8.TokenCount = local_2e8.TokenCount + 1;
    uVar5 = (ulonglong)local_2e8.TokenCount;
    if ((local_2e8.Tokens.ArrayNum <= (int)(uint)local_2e8.TokenCount) &&
       (local_2f8 = uVar5, local_2f0 = (longlong)local_2e8.Tokens.ArrayNum,
       bVar2 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FConditions *)(*pcVar1)();
      return pFVar3;
    }
    FVar4 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)&local_2e8.Tokens;
    if (local_2e8.Tokens.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
      FVar4 = local_2e8.Tokens.AllocatorInstance.SecondaryData;
    }
    *(undefined1 *)(uVar5 + (longlong)FVar4) = 3;
    local_2e8.TokenCount = local_2e8.TokenCount + 1;
    FConditions::AppendQuery(&local_2e8,param_2);
    uVar5 = (ulonglong)local_2e8.TokenCount;
    if (local_2e8.Tokens.ArrayNum <= (int)(uint)local_2e8.TokenCount) {
      local_2f8 = (ulonglong)(int)(uint)local_2e8.TokenCount;
      local_2f0 = (longlong)local_2e8.Tokens.ArrayNum;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FConditions *)(*pcVar1)();
        return pFVar3;
      }
    }
    FVar4 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)&local_2e8.Tokens;
    if (local_2e8.Tokens.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
      FVar4 = local_2e8.Tokens.AllocatorInstance.SecondaryData;
    }
    *(undefined1 *)(uVar5 + (longlong)FVar4) = 4;
    local_2e8.TokenCount = local_2e8.TokenCount + 1;
    FConditions::FConditions(__return_storage_ptr__,&local_2e8);
    if (local_2e8.Identifiers.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
      FMemory::Free((void *)local_2e8.Identifiers.AllocatorInstance.SecondaryData);
    }
    if (local_2e8.Tokens.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
      FMemory::Free((void *)local_2e8.Tokens.AllocatorInstance.SecondaryData);
    }
    if (local_2e8.ColumnFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)0x0) {
      FMemory::Free((void *)local_2e8.ColumnFlags.AllocatorInstance.SecondaryData);
    }
    if (local_2e8.Columns.AllocatorInstance.SecondaryData !=
        (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
      FMemory::Free((void *)local_2e8.Columns.AllocatorInstance.SecondaryData);
    }
  }
  return __return_storage_ptr__;
}

// operator|| @ 142ca0b30

FConditions * __cdecl
UE::Editor::DataStorage::Queries::operator||
          (FConditions *__return_storage_ptr__,FConditions *param_1,FColumnBase *param_2)

{
  byte bVar1;
  FWeakObjectPtr FVar2;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  FConditions *pFVar7;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar8;
  ForElementType<FName> FVar9;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> FVar10;
  
  FConditions::FConditions(__return_storage_ptr__,param_1);
  bVar1 = __return_storage_ptr__->ColumnCount;
  FVar2 = (param_2->TypeInfo).WeakPtr;
  if ((__return_storage_ptr__->Columns).ArrayNum <= (int)(uint)bVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FConditions *)(*pcVar5)();
      return pFVar7;
    }
  }
  FVar3 = (__return_storage_ptr__->Columns).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)
          __return_storage_ptr__;
  if (FVar3 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    FVar8 = FVar3;
  }
  *(FWeakObjectPtr *)((longlong)FVar8 + (ulonglong)bVar1 * 8) = FVar2;
  bVar1 = __return_storage_ptr__->ColumnCount;
  FVar4 = param_2->Identifier;
  if ((__return_storage_ptr__->Identifiers).ArrayNum <= (int)(uint)bVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FConditions *)(*pcVar5)();
      return pFVar7;
    }
  }
  FVar9 = (__return_storage_ptr__->Identifiers).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FName>)0x0) {
    FVar9 = (ForElementType<FName>)&__return_storage_ptr__->Identifiers;
  }
  *(FName *)((longlong)FVar9 + (ulonglong)bVar1 * 8) = FVar4;
  __return_storage_ptr__->ColumnCount = __return_storage_ptr__->ColumnCount + '\x01';
  bVar1 = __return_storage_ptr__->TokenCount;
  if ((__return_storage_ptr__->Tokens).ArrayNum <= (int)(uint)bVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FConditions *)(*pcVar5)();
      return pFVar7;
    }
  }
  FVar10 = (__return_storage_ptr__->Tokens).AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
    FVar10 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)
             &__return_storage_ptr__->Tokens;
  }
  *(undefined1 *)((longlong)FVar10 + (ulonglong)bVar1) = 2;
  __return_storage_ptr__->TokenCount = __return_storage_ptr__->TokenCount + '\x01';
  return __return_storage_ptr__;
}

// operator|| @ 142ca0ca0

FConditions * __cdecl
UE::Editor::DataStorage::Queries::operator||
          (FConditions *__return_storage_ptr__,FColumnBase *param_1,FColumnBase *param_2)

{
  byte bVar1;
  FWeakObjectPtr FVar2;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  FConditions *pFVar7;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar8;
  ForElementType<FName> FVar9;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> FVar10;
  FColumnBase local_18;
  
  local_18.TypeInfo.WeakPtr = (param_1->TypeInfo).WeakPtr;
  local_18.Identifier = param_1->Identifier;
  FConditions::FConditions(__return_storage_ptr__,&local_18);
  bVar1 = __return_storage_ptr__->ColumnCount;
  FVar2 = (param_2->TypeInfo).WeakPtr;
  if ((__return_storage_ptr__->Columns).ArrayNum <= (int)(uint)bVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FConditions *)(*pcVar5)();
      return pFVar7;
    }
  }
  FVar3 = (__return_storage_ptr__->Columns).AllocatorInstance.SecondaryData;
  FVar8 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)
          __return_storage_ptr__;
  if (FVar3 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    FVar8 = FVar3;
  }
  *(FWeakObjectPtr *)((longlong)FVar8 + (ulonglong)bVar1 * 8) = FVar2;
  bVar1 = __return_storage_ptr__->ColumnCount;
  FVar4 = param_2->Identifier;
  if ((__return_storage_ptr__->Identifiers).ArrayNum <= (int)(uint)bVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FConditions *)(*pcVar5)();
      return pFVar7;
    }
  }
  FVar9 = (__return_storage_ptr__->Identifiers).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FName>)0x0) {
    FVar9 = (ForElementType<FName>)&__return_storage_ptr__->Identifiers;
  }
  *(FName *)((longlong)FVar9 + (ulonglong)bVar1 * 8) = FVar4;
  __return_storage_ptr__->ColumnCount = __return_storage_ptr__->ColumnCount + '\x01';
  bVar1 = __return_storage_ptr__->TokenCount;
  if ((__return_storage_ptr__->Tokens).ArrayNum <= (int)(uint)bVar1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FConditions *)(*pcVar5)();
      return pFVar7;
    }
  }
  FVar10 = (__return_storage_ptr__->Tokens).AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
    FVar10 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)
             &__return_storage_ptr__->Tokens;
  }
  *(undefined1 *)((longlong)FVar10 + (ulonglong)bVar1) = 2;
  __return_storage_ptr__->TokenCount = __return_storage_ptr__->TokenCount + '\x01';
  return __return_storage_ptr__;
}

// operator|| @ 142ca0e20

FConditions * __cdecl
UE::Editor::DataStorage::Queries::operator||
          (FConditions *__return_storage_ptr__,FColumnBase *param_1,FConditions *param_2)

{
  TArray<UE::Editor::DataStorage::Queries::FConditions::Token,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  FConditions *pFVar5;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> FVar6;
  FColumnBase local_18;
  
  local_18.TypeInfo.WeakPtr = (param_1->TypeInfo).WeakPtr;
  local_18.Identifier = param_1->Identifier;
  FConditions::FConditions(__return_storage_ptr__,&local_18);
  if (param_2->ColumnCount != '\0') {
    pTVar1 = &__return_storage_ptr__->Tokens;
    bVar4 = __return_storage_ptr__->TokenCount;
    if ((__return_storage_ptr__->Tokens).ArrayNum <= (int)(uint)bVar4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FConditions *)(*pcVar2)();
        return pFVar5;
      }
    }
    FVar6 = (__return_storage_ptr__->Tokens).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
      FVar6 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)pTVar1;
    }
    *(undefined1 *)((longlong)FVar6 + (ulonglong)bVar4) = 2;
    bVar4 = __return_storage_ptr__->TokenCount + 1;
    __return_storage_ptr__->TokenCount = bVar4;
    if ((__return_storage_ptr__->Tokens).ArrayNum <= (int)(uint)bVar4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FConditions *)(*pcVar2)();
        return pFVar5;
      }
    }
    FVar6 = (__return_storage_ptr__->Tokens).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
      FVar6 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)pTVar1;
    }
    *(undefined1 *)((longlong)FVar6 + (ulonglong)bVar4) = 3;
    __return_storage_ptr__->TokenCount = __return_storage_ptr__->TokenCount + '\x01';
    FConditions::AppendQuery(__return_storage_ptr__,param_2);
    bVar4 = __return_storage_ptr__->TokenCount;
    if ((__return_storage_ptr__->Tokens).ArrayNum <= (int)(uint)bVar4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FConditions *)(*pcVar2)();
        return pFVar5;
      }
    }
    FVar6 = (__return_storage_ptr__->Tokens).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
      FVar6 = (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)pTVar1;
    }
    *(undefined1 *)((longlong)FVar6 + (ulonglong)bVar4) = 4;
    __return_storage_ptr__->TokenCount = __return_storage_ptr__->TokenCount + '\x01';
  }
  return __return_storage_ptr__;
}

// AccessesHierarchy @ 142ca1e50

Select * __thiscall
UE::Editor::DataStorage::Queries::Select::AccessesHierarchy(Select *this,FName *param_1)

{
  (this->Query).Hierarchy = *param_1;
  return this;
}

// AreEditorDataStorageFeaturesEnabled @ 142ca63e0

bool __cdecl UE::Editor::DataStorage::AreEditorDataStorageFeaturesEnabled(void)

{
  int iVar1;
  IModularFeatures *pIVar2;
  
  pIVar2 = IModularFeatures::Get();
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,StorageFeatureName);
  if (0 < iVar1) {
    pIVar2 = IModularFeatures::Get();
    iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,CompatibilityFeatureName);
    if (0 < iVar1) {
      pIVar2 = IModularFeatures::Get();
      iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2,UiFeatureName);
      if (0 < iVar1) {
        return true;
      }
    }
  }
  return false;
}

// AreMergeablePrecheck @ 142ca6450

bool __cdecl
UE::Editor::DataStorage::Queries::Private::AreMergeablePrecheck
          (FQueryDescription *param_1,FQueryDescription *param_2,FText *param_3)

{
  ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType> FVar1;
  FText *pFVar2;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType> FVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FText local_18;
  
  if ((*(longlong *)&(param_1->Callback).Function == 0) ||
     (*(longlong *)&(param_2->Callback).Function == 0)) {
    if ((((param_1->Conditions).bIsSet == false) || ((param_2->ConditionTypes).ArrayNum == 0)) &&
       (((param_2->Conditions).bIsSet == false || ((param_1->ConditionTypes).ArrayNum == 0)))) {
      if (((*(int *)&(param_1->MetaData).field_0x10 == *(int *)&(param_1->MetaData).field_0x3c) &&
          (*(int *)&(param_1->MetaData).field_0x60 == *(int *)&(param_1->MetaData).field_0x8c)) ||
         ((*(int *)&(param_2->MetaData).field_0x10 == *(int *)&(param_2->MetaData).field_0x3c &&
          (*(int *)&(param_2->MetaData).field_0x60 == *(int *)&(param_2->MetaData).field_0x8c)))) {
        FVar3 = (param_2->ConditionTypes).AllocatorInstance.SecondaryData;
        if (FVar3 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0)
        {
          FVar3 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)
                  &param_2->ConditionTypes;
        }
        FVar1 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)
                ((longlong)FVar3 + (longlong)(param_2->ConditionTypes).ArrayNum * 2);
        for (; FVar3 != FVar1;
            FVar3 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)
                    ((longlong)FVar3 + 2)) {
          if (*(short *)FVar3 == 1) goto LAB_142ca6577;
        }
        FVar3 = (param_2->DynamicConditionOperations).AllocatorInstance.SecondaryData;
        if (FVar3 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0)
        {
          FVar3 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)
                  &param_2->DynamicConditionOperations;
        }
        FVar1 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)
                ((longlong)FVar3 + (longlong)(param_2->DynamicConditionOperations).ArrayNum * 2);
        while( true ) {
          if (FVar3 == FVar1) {
            return true;
          }
          if (*(short *)FVar3 == 1) break;
          FVar3 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)
                  ((longlong)FVar3 + 2);
        }
LAB_142ca6577:
        FVar3 = (param_1->ConditionTypes).AllocatorInstance.SecondaryData;
        if (FVar3 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0)
        {
          FVar3 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)
                  &param_1->ConditionTypes;
        }
        FVar1 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)
                ((longlong)FVar3 + (longlong)(param_1->ConditionTypes).ArrayNum * 2);
        for (; FVar3 != FVar1;
            FVar3 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)
                    ((longlong)FVar3 + 2)) {
          if (*(short *)FVar3 == 1) goto LAB_142ca65e8;
        }
        FVar3 = (param_1->DynamicConditionOperations).AllocatorInstance.SecondaryData;
        if (FVar3 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0)
        {
          FVar3 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)
                  &param_1->DynamicConditionOperations;
        }
        FVar1 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)
                ((longlong)FVar3 + (longlong)(param_1->DynamicConditionOperations).ArrayNum * 2);
        if (FVar3 == FVar1) {
          return true;
        }
        while (*(short *)FVar3 != 1) {
          FVar3 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)
                  ((longlong)FVar3 + 2);
          if (FVar3 == FVar1) {
            return true;
          }
        }
LAB_142ca65e8:
        if (param_3 == (FText *)0x0) {
          return false;
        }
        pwVar5 = 
        L"Cannot merge two queries if they both .Any<> conditions, use the FConditions syntax instead to merge them properly"
        ;
        pwVar4 = L"CannotMerge_Any";
      }
      else {
        if (param_3 == (FText *)0x0) {
          return false;
        }
        pwVar5 = 
        L"Cannot merge two queries if they both contain metadata, since FMetaData currently does not support merging"
        ;
        pwVar4 = L"CannotMerge_Metadata";
      }
    }
    else {
      if (param_3 == (FText *)0x0) {
        return false;
      }
      pwVar5 = 
      L"Cannot merge two queries if one of them uses the FConditionsSyntax and the other uses the legacy .All/.Any/.None syntax"
      ;
      pwVar4 = L"CannotMerge_FConditions";
    }
  }
  else {
    if (param_3 == (FText *)0x0) {
      return false;
    }
    pwVar5 = L"Cannot merge two queries if both contain a callback";
    pwVar4 = L"CannotMerge_Callbacks";
  }
  pFVar2 = FText::AsLocalizable_Advanced_LocText(&local_18,L"TypedElementQueryUtils",pwVar4,pwVar5);
  FText::operator=(param_3,pFVar2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return false;
}

// Compile @ 142ca8210

FQueryDescription * __thiscall UE::Editor::DataStorage::Queries::Select::Compile(Select *this)

{
  return &this->Query;
}

// ConvertKeyToKeyViewTest @ 142ca8a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::Editor::DataStorage::Tests::Private::ConvertKeyToKeyViewTest(FMapKey *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAutomationTestFramework *pFVar4;
  undefined1 auStack_68 [32];
  FKeyToKeyViewConverter local_48 [8];
  FString local_40;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
  local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyToKeyViewConverter,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyToKeyViewConverter&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
    ::__l2::Invokers[(param_1->Key).TypeIndex])(&local_30,local_48,&param_1->Key);
  local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)&local_30;
  bVar3 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
            ::__l2::Invokers[(param_1->Key).TypeIndex])((FKeyViewComparer *)&local_40,&param_1->Key)
  ;
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_40,L"Key to View comparison failed");
    (*pcVar2)(pFVar1,&local_40,0);
    if ((TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
         *)local_40.Data.AllocatorInstance.Data !=
        (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
         *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)&local_30;
  bVar3 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyViewComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyViewComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
            ::__l2::Invokers[(param_1->Key).TypeIndex])((FKeyViewComparer *)&local_40,&param_1->Key)
  ;
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_40,L"View to Key comparison failed");
    (*pcVar2)(pFVar1,&local_40,0);
    if ((TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
         *)local_40.Data.AllocatorInstance.Data !=
        (TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,TStringView<wchar_t>,FName_const_*,FSoftObjectPath_const_*>
         *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// ConvertToNativeTypedElementList @ 142ca8d50

TSharedPtr<TTypedElementList<FTypedElementHandle>,1> * __cdecl
UE::TypedElementFramework::ConvertToNativeTypedElementList
          (TSharedPtr<TTypedElementList<FTypedElementHandle>,1> *__return_storage_ptr__,
          TSharedPtr<TTypedElementList<FScriptTypedElementHandle>_const_,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TTypedElementList<FScriptTypedElementHandle> *pTVar3;
  code *pcVar4;
  bool bVar5;
  UTypedElementRegistry *pUVar6;
  TTypedElementList<FTypedElementHandle> *pTVar7;
  TSharedPtr<TTypedElementList<FTypedElementHandle>,1> *pTVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  TRawPtrProxy<TTypedElementList<FTypedElementHandle>_> local_res18;
  TTypedElementList<FTypedElementHandle> **local_res20;
  TTypedElementList<FTypedElementHandle> *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  TSharedRef<TTypedElementList<FTypedElementHandle>,1> local_38;
  
  if (param_1->Object != (TTypedElementList<FScriptTypedElementHandle> *)0x0) {
    pUVar6 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&(param_1->Object->Registry).WeakPtr);
    if (pUVar6 != (UTypedElementRegistry *)0x0) {
      pTVar7 = ::operator_new(0xe0);
      if (pTVar7 == (TTypedElementList<FTypedElementHandle> *)0x0) {
        local_res18.Object = (TTypedElementList<FTypedElementHandle> *)0x0;
      }
      else {
        local_res18.Object =
             TTypedElementList<FTypedElementHandle>::TTypedElementList<FTypedElementHandle>
                       (pTVar7,pUVar6);
        if ((((local_res18.Object != (TTypedElementList<FTypedElementHandle> *)0x0) &&
             ((local_res18.Object)->_padding_ != 0)) && ((local_res18.Object)->_padding_ != 0)) &&
           (0 < *(int *)((local_res18.Object)->_padding_ + 8))) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InObject || !InObject->DoesSharedInstanceExist()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x7a5,L"Trying to share an already-shared object");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TSharedPtr<TTypedElementList<FTypedElementHandle>,1> *)(*pcVar4)();
            return pTVar8;
          }
        }
      }
      TSharedRef<TTypedElementList<FTypedElementHandle>,1>::
      TSharedRef<TTypedElementList<FTypedElementHandle>,1><TTypedElementList<FTypedElementHandle>_>
                (&local_38,&local_res18);
      local_48 = local_38.Object;
      pTStack_40 = local_38.SharedReferenceCount.ReferenceController;
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      if (local_48 == (TTypedElementList<FTypedElementHandle> *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TSharedPtr<TTypedElementList<FTypedElementHandle>,1> *)(*pcVar4)();
          return pTVar8;
        }
      }
      pTVar7 = local_48;
      if (param_1->Object == (TTypedElementList<FScriptTypedElementHandle> *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TSharedPtr<TTypedElementList<FTypedElementHandle>,1> *)(*pcVar4)();
          return pTVar8;
        }
      }
      TTypedElementList<FTypedElementHandle>::Reserve
                (pTVar7,(param_1->Object->ElementHandles).ArrayNum);
      if (param_1->Object == (TTypedElementList<FScriptTypedElementHandle> *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TSharedPtr<TTypedElementList<FTypedElementHandle>,1> *)(*pcVar4)();
          return pTVar8;
        }
      }
      pTVar3 = param_1->Object;
      local_res20 = &local_48;
      pFVar9 = (pTVar3->ElementHandles).AllocatorInstance.Data;
      iVar2 = (pTVar3->ElementHandles).ArrayNum;
      pFVar1 = pFVar9 + (longlong)iVar2 * 8;
      while( true ) {
        if ((pTVar3->ElementHandles).ArrayNum != iVar2) {
          `TCheckedPointerIterator<FScriptTypedElementHandle_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res10);
        }
        if (pFVar9 == pFVar1) break;
        if ((*(longlong **)&pFVar9->field_0x0 != (longlong *)0x0) &&
           (**(longlong **)&pFVar9->field_0x0 != 0)) {
          bVar5 = Core::Private::Function::
                  TFunctionRefCaller<`UE::TypedElementFramework::ConvertToNativeTypedElementList'::__l8::<lambda_1>,bool,FScriptTypedElementHandle_const_&>
                  ::Call(&local_res20,(FScriptTypedElementHandle *)pFVar9);
          if (!bVar5) break;
        }
        pFVar9 = pFVar9 + 8;
      }
      __return_storage_ptr__->Object = local_48;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTStack_40;
      pTStack_40 = (TReferenceControllerBase<1> *)0x0;
      local_48 = (TTypedElementList<FTypedElementHandle> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->Object = (TTypedElementList<FTypedElementHandle> *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// ConvertToScriptTypedElementList @ 142ca91b0

TSharedPtr<TTypedElementList<FScriptTypedElementHandle>,1> * __cdecl
UE::TypedElementFramework::ConvertToScriptTypedElementList
          (TSharedPtr<TTypedElementList<FScriptTypedElementHandle>,1> *__return_storage_ptr__,
          TSharedPtr<TTypedElementList<FTypedElementHandle>_const_,1> *param_1)

{
  int iVar1;
  TTypedElementList<FTypedElementHandle> *pTVar2;
  code *pcVar3;
  bool bVar4;
  UTypedElementRegistry *pUVar5;
  TTypedElementList<FScriptTypedElementHandle> *pTVar6;
  TSharedPtr<TTypedElementList<FScriptTypedElementHandle>,1> *pTVar7;
  FTypedElementHandle *pFVar8;
  FTypedElementHandle *pFVar9;
  undefined1 local_res10 [8];
  TRawPtrProxy<TTypedElementList<FScriptTypedElementHandle>_> local_res18;
  UTypedElementRegistry *local_res20;
  TTypedElementList<FScriptTypedElementHandle> *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  TTypedElementList<FScriptTypedElementHandle> **local_48;
  UTypedElementRegistry **local_40;
  TSharedRef<TTypedElementList<FScriptTypedElementHandle>,1> local_38;
  
  if (param_1->Object != (TTypedElementList<FTypedElementHandle> *)0x0) {
    pUVar5 = (UTypedElementRegistry *)FWeakObjectPtr::Get(&(param_1->Object->Registry).WeakPtr);
    if (pUVar5 != (UTypedElementRegistry *)0x0) {
      local_res20 = pUVar5;
      pTVar6 = ::operator_new(0xe0);
      if (pTVar6 == (TTypedElementList<FScriptTypedElementHandle> *)0x0) {
        local_res18.Object = (TTypedElementList<FScriptTypedElementHandle> *)0x0;
      }
      else {
        local_res18.Object =
             TTypedElementList<FScriptTypedElementHandle>::
             TTypedElementList<FScriptTypedElementHandle>(pTVar6,pUVar5);
        if ((((local_res18.Object != (TTypedElementList<FScriptTypedElementHandle> *)0x0) &&
             ((local_res18.Object)->_padding_ != 0)) && ((local_res18.Object)->_padding_ != 0)) &&
           (0 < *(int *)((local_res18.Object)->_padding_ + 8))) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InObject || !InObject->DoesSharedInstanceExist()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x7a5,L"Trying to share an already-shared object");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TSharedPtr<TTypedElementList<FScriptTypedElementHandle>,1> *)(*pcVar3)();
            return pTVar7;
          }
        }
      }
      TSharedRef<TTypedElementList<FScriptTypedElementHandle>,1>::
      TSharedRef<TTypedElementList<FScriptTypedElementHandle>,1><TTypedElementList<FScriptTypedElementHandle>_>
                (&local_38,&local_res18);
      local_58 = local_38.Object;
      pTStack_50 = local_38.SharedReferenceCount.ReferenceController;
      if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      if (local_58 == (TTypedElementList<FScriptTypedElementHandle> *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TSharedPtr<TTypedElementList<FScriptTypedElementHandle>,1> *)(*pcVar3)();
          return pTVar7;
        }
      }
      pTVar6 = local_58;
      if (param_1->Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TSharedPtr<TTypedElementList<FScriptTypedElementHandle>,1> *)(*pcVar3)();
          return pTVar7;
        }
      }
      TTypedElementList<FScriptTypedElementHandle>::Reserve
                (pTVar6,(param_1->Object->ElementHandles).ArrayNum);
      if (param_1->Object == (TTypedElementList<FTypedElementHandle> *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar7 = (TSharedPtr<TTypedElementList<FScriptTypedElementHandle>,1> *)(*pcVar3)();
          return pTVar7;
        }
      }
      pTVar2 = param_1->Object;
      local_48 = &local_58;
      local_40 = &local_res20;
      iVar1 = (pTVar2->ElementHandles).ArrayNum;
      pFVar8 = (FTypedElementHandle *)(pTVar2->ElementHandles).AllocatorInstance.Data;
      pFVar9 = pFVar8 + iVar1;
      while( true ) {
        if ((pTVar2->ElementHandles).ArrayNum != iVar1) {
          `TCheckedPointerIterator<FTypedElementHandle_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res10);
        }
        if (pFVar8 == pFVar9) break;
        if (pFVar8->DataPtr != (FTypedElementInternalData *)0x0) {
          bVar4 = Core::Private::Function::
                  TFunctionRefCaller<`UE::TypedElementFramework::ConvertToScriptTypedElementList'::__l8::<lambda_1>,bool,FTypedElementHandle_const_&>
                  ::Call(&local_48,pFVar8);
          if (!bVar4) break;
        }
        pFVar8 = pFVar8 + 1;
      }
      __return_storage_ptr__->Object = local_58;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTStack_50;
      pTStack_50 = (TReferenceControllerBase<1> *)0x0;
      local_58 = (TTypedElementList<FScriptTypedElementHandle> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->Object = (TTypedElementList<FScriptTypedElementHandle> *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// CopyKeyTest @ 142ca93f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::Editor::DataStorage::Tests::Private::CopyKeyTest(FMapKey *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAutomationTestFramework *pFVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [32];
  FKeyCopy local_58 [8];
  FKeyComparer local_50;
  FString local_48;
  FString local_38;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyCopy,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyCopy&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
    ::__l2::Invokers[(param_1->Key).TypeIndex])(&local_28,local_58,&param_1->Key);
  uVar5 = (ulonglong)local_28.TypeIndex;
  if (9 < uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5) != '\0') {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_48,L"Copied key was not empty as expected.");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  local_50.Key = &param_1->Key;
  bVar3 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
            ::__l2::Invokers[local_28.TypeIndex])(&local_50,&local_28);
  if (!bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_38,L"Original and copied key don\'t have the same value.");
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (9 < local_28.TypeIndex) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_28.TypeIndex])(&local_28);
  return;
}

// DependsOn @ 142caa710

FDependency __thiscall UE::Editor::DataStorage::Queries::Count::DependsOn(Count *this)

{
  FQueryDescription *in_RDX;
  
  *(Count **)(in_RDX->Callback).BeforeGroups.AllocatorInstance.InlineData = this;
  return (FDependency)in_RDX;
}

// DependsOn @ 142caa740

FDependency __thiscall UE::Editor::DataStorage::Queries::Select::DependsOn(Select *this)

{
  FQueryDescription *in_RDX;
  
  *(Select **)(in_RDX->Callback).BeforeGroups.AllocatorInstance.InlineData = this;
  return (FDependency)in_RDX;
}

// GetDynamicColumnIdentifier @ 142cad470

FName __cdecl
UE::Editor::DataStorage::ColumnUtils::GetDynamicColumnIdentifier(UScriptStruct *param_1)

{
  param_1->_padding_ = 0;
  return (FName)param_1;
}

// GetTypeHash @ 142caedc0

uint __cdecl UE::Editor::DataStorage::GetTypeHash(FDynamicColumnDescription *param_1)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  
  FVar1 = param_1->Identifier;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  uVar3 = ((uint)((ulonglong)param_1->TemplateType >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->TemplateType >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  return uVar3 * 0x40 + uVar2 + 0x9e3779b9 + FVar1.Number + (uVar3 >> 2) ^ uVar3;
}

// GetTypeHash @ 142caee30

uint __cdecl UE::Editor::DataStorage::GetTypeHash(FValueTag *param_1)

{
  FName FVar1;
  uint uVar2;
  
  FVar1 = param_1->Name;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  return uVar2 + FVar1.Number;
}

// IsDerivedFromDynamicTemplate @ 142cafa00

bool __cdecl
UE::Editor::DataStorage::ColumnUtils::IsDerivedFromDynamicTemplate(UScriptStruct *param_1)

{
  return false;
}

// IsDynamicTemplate @ 142cafa50

bool __cdecl UE::Editor::DataStorage::ColumnUtils::IsDynamicTemplate(UScriptStruct *param_1)

{
  return false;
}

// MergeConditions @ 142cb08c0

void __cdecl
UE::Editor::DataStorage::Queries::Private::MergeConditions
          (FQueryDescription *param_1,FQueryDescription *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> FVar5;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> _Src;
  
  if (param_1 == param_2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = (param_2->ConditionOperators).ArrayNum;
  if (iVar1 != 0) {
    iVar4 = Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>_>
                      (8,4,iVar1,&(param_1->ConditionOperators).AllocatorInstance,
                       &(param_1->ConditionOperators).ArrayNum,
                       &(param_1->ConditionOperators).ArrayMax);
    _Src = (param_2->ConditionOperators).AllocatorInstance.SecondaryData;
    FVar5 = (param_1->ConditionOperators).AllocatorInstance.SecondaryData;
    if (_Src == (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)0x0) {
      _Src = (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)
             &param_2->ConditionOperators;
    }
    if (FVar5 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)0x0) {
      FVar5 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)
              &param_1->ConditionOperators;
    }
    memcpy((void *)((longlong)FVar5 + (longlong)iVar4 * 8),(void *)_Src,(longlong)iVar1 << 3);
  }
  TArray<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  ::
  Append<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            (&param_1->ConditionTypes,&param_2->ConditionTypes);
  TArray<UE::Editor::DataStorage::FDynamicColumnDescription,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  ::
  Append<UE::Editor::DataStorage::FDynamicColumnDescription,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            (&param_1->DynamicConditionDescriptions,&param_2->DynamicConditionDescriptions);
  TArray<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  ::
  Append<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            (&param_1->DynamicConditionOperations,&param_2->DynamicConditionOperations);
  return;
}

// MergeQueries @ 142cb09e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Editor::DataStorage::Queries::MergeQueries
          (FQueryDescription *param_1,FQueryDescription *param_2,FText *param_3)

{
  TFunction<void___cdecl(UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::IQueryContext_&)>
  *pTVar1;
  TArray<UE::Editor::DataStorage::FQueryDescription::FValueTagData,TSizedDefaultAllocator<32>_>
  *pTVar2;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar3;
  TOptional<UE::Editor::DataStorage::Queries::FConditions> *this;
  int iVar4;
  ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_> FVar5;
  ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags> FVar6;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> FVar7;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> FVar8;
  ForElementType<FName> FVar9;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token> FVar10;
  ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags> FVar11;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar12;
  code *pcVar13;
  bool bVar14;
  EActionType EVar15;
  bool bVar16;
  undefined1 uVar17;
  int iVar18;
  FConditions *pFVar19;
  FConditions *pFVar20;
  ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags> FVar21;
  ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_> _Src;
  ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags> _Src_00;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> _Src_01;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> _Src_02;
  ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_> FVar22;
  ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> FVar23;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> FVar24;
  undefined1 auStackY_1528 [32];
  FConditions local_14f8;
  FConditions local_1248;
  FConditions local_f98;
  FQueryDescription local_ce8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1528;
  bVar14 = Private::AreMergeablePrecheck(param_1,param_2,param_3);
  bVar16 = false;
  if (bVar14) {
    FQueryDescription::FQueryDescription(&local_ce8,param_1);
    EVar15 = Select;
    if (param_2->Action != Select) {
      EVar15 = param_1->Action;
    }
    pTVar1 = &(param_2->Callback).Function;
    param_1->Action = EVar15;
    if (*(longlong *)pTVar1 != 0) {
      TFunction<void___cdecl(UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::IQueryContext_&)>
      ::operator=(&(param_1->Callback).Function,pTVar1);
      param_1->bShouldBatchModifications = param_2->bShouldBatchModifications;
    }
    pTVar2 = &param_1->ValueTags;
    if ((pTVar2 == &param_2->ValueTags) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar16)) {
      pcVar13 = (code *)swi(3);
      uVar17 = (*pcVar13)();
      return (bool)uVar17;
    }
    iVar4 = (param_2->ValueTags).ArrayNum;
    if (iVar4 != 0) {
      iVar18 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,4,iVar4,&pTVar2->AllocatorInstance,&(param_1->ValueTags).ArrayNum,
                          &(param_1->ValueTags).ArrayMax);
      memcpy((pTVar2->AllocatorInstance).Data + (longlong)iVar18 * 0x10,
             (param_2->ValueTags).AllocatorInstance.Data,(longlong)iVar4 << 4);
    }
    FVar22 = (ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>)
             &param_1->DependencyTypes;
    if ((FVar22 == (ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>)
                   &param_2->DependencyTypes) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar16)) {
      pcVar13 = (code *)swi(3);
      uVar17 = (*pcVar13)();
      return (bool)uVar17;
    }
    iVar4 = (param_2->DependencyTypes).ArrayNum;
    if (iVar4 != 0) {
      iVar18 = Core::Private::
               ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>_>
                         (8,4,iVar4,
                          (ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_> *)FVar22,
                          &(param_1->DependencyTypes).ArrayNum,&(param_1->DependencyTypes).ArrayMax)
      ;
      FVar5 = (param_2->DependencyTypes).AllocatorInstance.SecondaryData;
      _Src = (ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>)
             &param_2->DependencyTypes;
      if (FVar5 != (ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>)0x0) {
        _Src = FVar5;
      }
      FVar5 = (param_1->DependencyTypes).AllocatorInstance.SecondaryData;
      if (FVar5 != (ForElementType<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>_>)0x0) {
        FVar22 = FVar5;
      }
      memcpy((void *)((longlong)FVar22 + (longlong)iVar18 * 8),(void *)_Src,(longlong)iVar4 << 3);
    }
    FVar21 = (ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags>)
             &param_1->DependencyFlags;
    if ((FVar21 == (ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags>)
                   &param_2->DependencyFlags) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar16)) {
      pcVar13 = (code *)swi(3);
      uVar17 = (*pcVar13)();
      return (bool)uVar17;
    }
    iVar4 = (param_2->DependencyFlags).ArrayNum;
    if (iVar4 != 0) {
      iVar18 = Core::Private::
               ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryDependencyFlags>_>
                         (1,1,iVar4,
                          (ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags> *)FVar21,
                          &(param_1->DependencyFlags).ArrayNum,&(param_1->DependencyFlags).ArrayMax)
      ;
      FVar6 = (param_2->DependencyFlags).AllocatorInstance.SecondaryData;
      _Src_00 = (ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags>)
                &param_2->DependencyFlags;
      if (FVar6 != (ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags>)0x0) {
        _Src_00 = FVar6;
      }
      FVar6 = (param_1->DependencyFlags).AllocatorInstance.SecondaryData;
      if (FVar6 != (ForElementType<UE::Editor::DataStorage::EQueryDependencyFlags>)0x0) {
        FVar21 = FVar6;
      }
      memcpy((void *)((longlong)iVar18 + (longlong)FVar21),(void *)_Src_00,(longlong)iVar4);
    }
    FVar23 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)&param_1->CachedDependencies;
    if ((FVar23 == (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)
                   &param_2->CachedDependencies) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar16)) {
      pcVar13 = (code *)swi(3);
      uVar17 = (*pcVar13)();
      return (bool)uVar17;
    }
    iVar4 = (param_2->CachedDependencies).ArrayNum;
    if (iVar4 != 0) {
      iVar18 = Core::Private::
               ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>_>
                         (8,4,iVar4,
                          (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_> *)FVar23,
                          &(param_1->CachedDependencies).ArrayNum,
                          &(param_1->CachedDependencies).ArrayMax);
      FVar7 = (param_2->CachedDependencies).AllocatorInstance.SecondaryData;
      _Src_01 = (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)
                &param_2->CachedDependencies;
      if (FVar7 != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
        _Src_01 = FVar7;
      }
      FVar7 = (param_1->CachedDependencies).AllocatorInstance.SecondaryData;
      if (FVar7 != (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
        FVar23 = FVar7;
      }
      memcpy((void *)((longlong)FVar23 + (longlong)iVar18 * 8),(void *)_Src_01,(longlong)iVar4 << 3)
      ;
    }
    pTVar3 = &param_1->Subqueries;
    if ((pTVar3 == &param_2->Subqueries) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar16)) {
      pcVar13 = (code *)swi(3);
      uVar17 = (*pcVar13)();
      return (bool)uVar17;
    }
    iVar4 = (param_2->Subqueries).ArrayNum;
    if (iVar4 != 0) {
      iVar18 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,iVar4,&pTVar3->AllocatorInstance,&(param_1->Subqueries).ArrayNum,
                          &(param_1->Subqueries).ArrayMax);
      memcpy((pTVar3->AllocatorInstance).Data + (longlong)iVar18 * 8,
             (param_2->Subqueries).AllocatorInstance.Data,(longlong)iVar4 << 3);
    }
    Private::MergeSelect(param_1,param_2);
    if (((param_1->Conditions).bIsSet == false) && ((param_2->Conditions).bIsSet == false)) {
      FVar24 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)
               &param_1->ConditionOperators;
      if ((FVar24 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)
                     &param_2->ConditionOperators) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x96e,L""), bVar16)) {
        pcVar13 = (code *)swi(3);
        uVar17 = (*pcVar13)();
        return (bool)uVar17;
      }
      iVar4 = (param_2->ConditionOperators).ArrayNum;
      if (iVar4 != 0) {
        iVar18 = Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>_>
                           (8,4,iVar4,
                            (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> *
                            )FVar24,&(param_1->ConditionOperators).ArrayNum,
                            &(param_1->ConditionOperators).ArrayMax);
        FVar8 = (param_2->ConditionOperators).AllocatorInstance.SecondaryData;
        _Src_02 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)
                  &param_2->ConditionOperators;
        if (FVar8 != (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)0x0) {
          _Src_02 = FVar8;
        }
        FVar8 = (param_1->ConditionOperators).AllocatorInstance.SecondaryData;
        if (FVar8 != (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)0x0) {
          FVar24 = FVar8;
        }
        memcpy((void *)((longlong)FVar24 + (longlong)iVar18 * 8),(void *)_Src_02,
               (longlong)iVar4 << 3);
      }
      TArray<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
      ::
      Append<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                (&param_1->ConditionTypes,&param_2->ConditionTypes);
      TArray<UE::Editor::DataStorage::FDynamicColumnDescription,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
      ::
      Append<UE::Editor::DataStorage::FDynamicColumnDescription,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                (&param_1->DynamicConditionDescriptions,&param_2->DynamicConditionDescriptions);
      TArray<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
      ::
      Append<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
                (&param_1->DynamicConditionOperations,&param_2->DynamicConditionOperations);
    }
    else {
      pFVar19 = FConditions::FConditions(&local_f98);
      if ((param_2->Conditions).bIsSet != false) {
        pFVar19 = &(param_2->Conditions).TypedValue;
      }
      this = &param_1->Conditions;
      pFVar20 = FConditions::FConditions(&local_1248);
      if ((param_1->Conditions).bIsSet != false) {
        pFVar20 = &this->TypedValue;
      }
      pFVar19 = operator&&(&local_14f8,pFVar20,pFVar19);
      if ((TOptional<UE::Editor::DataStorage::Queries::FConditions> *)pFVar19 != this) {
        if ((param_1->Conditions).bIsSet != false) {
          FVar9 = (param_1->Conditions).TypedValue.Identifiers.AllocatorInstance.SecondaryData;
          if (FVar9 != (ForElementType<FName>)0x0) {
            FMemory::Free((void *)FVar9);
          }
          FVar10 = (param_1->Conditions).TypedValue.Tokens.AllocatorInstance.SecondaryData;
          if (FVar10 != (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
            FMemory::Free((void *)FVar10);
          }
          FVar11 = (param_1->Conditions).TypedValue.ColumnFlags.AllocatorInstance.SecondaryData;
          if (FVar11 != (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>
                        )0x0) {
            FMemory::Free((void *)FVar11);
          }
          FVar12 = (param_1->Conditions).TypedValue.Columns.AllocatorInstance.SecondaryData;
          if (FVar12 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
            FMemory::Free((void *)FVar12);
          }
        }
        FConditions::FConditions(&this->TypedValue,pFVar19);
        (param_1->Conditions).bIsSet = true;
      }
      if (local_14f8.Identifiers.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
        FMemory::Free((void *)local_14f8.Identifiers.AllocatorInstance.SecondaryData);
      }
      if (local_14f8.Tokens.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
        FMemory::Free((void *)local_14f8.Tokens.AllocatorInstance.SecondaryData);
      }
      if (local_14f8.ColumnFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)0x0) {
        FMemory::Free((void *)local_14f8.ColumnFlags.AllocatorInstance.SecondaryData);
      }
      if (local_14f8.Columns.AllocatorInstance.SecondaryData !=
          (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
        FMemory::Free((void *)local_14f8.Columns.AllocatorInstance.SecondaryData);
      }
      if (local_1248.Identifiers.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
        FMemory::Free((void *)local_1248.Identifiers.AllocatorInstance.SecondaryData);
      }
      if (local_1248.Tokens.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
        FMemory::Free((void *)local_1248.Tokens.AllocatorInstance.SecondaryData);
      }
      if (local_1248.ColumnFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)0x0) {
        FMemory::Free((void *)local_1248.ColumnFlags.AllocatorInstance.SecondaryData);
      }
      if (local_1248.Columns.AllocatorInstance.SecondaryData !=
          (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
        FMemory::Free((void *)local_1248.Columns.AllocatorInstance.SecondaryData);
      }
      if (local_f98.Identifiers.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
        FMemory::Free((void *)local_f98.Identifiers.AllocatorInstance.SecondaryData);
      }
      if (local_f98.Tokens.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Editor::DataStorage::Queries::FConditions::Token>)0x0) {
        FMemory::Free((void *)local_f98.Tokens.AllocatorInstance.SecondaryData);
      }
      if (local_f98.ColumnFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Editor::DataStorage::Queries::FConditions::EColumnFlags>)0x0) {
        FMemory::Free((void *)local_f98.ColumnFlags.AllocatorInstance.SecondaryData);
      }
      if (local_f98.Columns.AllocatorInstance.SecondaryData !=
          (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
        FMemory::Free((void *)local_f98.Columns.AllocatorInstance.SecondaryData);
      }
    }
    bVar16 = Private::ResolveDuplicatesInQuery(param_1,param_3);
    if (!bVar16) {
      FQueryDescription::operator=(param_1,&local_ce8);
    }
    FQueryDescription::~FQueryDescription(&local_ce8);
  }
  return bVar16;
}

// MergeSelect @ 142cb1030

void __cdecl
UE::Editor::DataStorage::Queries::Private::MergeSelect
          (FQueryDescription *param_1,FQueryDescription *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar5;
  ForElementType<UE::Editor::DataStorage::FColumnMetaData> FVar6;
  ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags> FVar7;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> _Src;
  ForElementType<UE::Editor::DataStorage::FColumnMetaData> FVar8;
  ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags> _Src_00;
  
  if (param_1 == param_2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = (param_2->SelectionTypes).ArrayNum;
  if (iVar1 != 0) {
    iVar4 = Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_>
                      (8,4,iVar1,&(param_1->SelectionTypes).AllocatorInstance,
                       &(param_1->SelectionTypes).ArrayNum,&(param_1->SelectionTypes).ArrayMax);
    _Src = (param_2->SelectionTypes).AllocatorInstance.SecondaryData;
    FVar5 = (param_1->SelectionTypes).AllocatorInstance.SecondaryData;
    if (_Src == (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
      _Src = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)
             &param_2->SelectionTypes;
    }
    if (FVar5 == (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
      FVar5 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)
              &param_1->SelectionTypes;
    }
    memcpy((void *)((longlong)FVar5 + (longlong)iVar4 * 8),(void *)_Src,(longlong)iVar1 << 3);
  }
  TArray<enum_UE::Editor::DataStorage::EQueryAccessType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  ::
  Append<enum_UE::Editor::DataStorage::EQueryAccessType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            (&param_1->SelectionAccessTypes,&param_2->SelectionAccessTypes);
  if (param_1 == param_2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = (param_2->SelectionMetaData).ArrayNum;
  if (iVar1 != 0) {
    iVar4 = Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FColumnMetaData>_>
                      (0xb8,8,iVar1,&(param_1->SelectionMetaData).AllocatorInstance,
                       &(param_1->SelectionMetaData).ArrayNum,&(param_1->SelectionMetaData).ArrayMax
                      );
    FVar8 = (param_2->SelectionMetaData).AllocatorInstance.SecondaryData;
    FVar6 = (param_1->SelectionMetaData).AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)0x0) {
      FVar8 = (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)&param_2->SelectionMetaData;
    }
    if (FVar6 == (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)0x0) {
      FVar6 = (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)&param_1->SelectionMetaData;
    }
    ConstructItems<UE::Editor::DataStorage::FColumnMetaData,UE::Editor::DataStorage::FColumnMetaData,int>
              ((void *)((longlong)FVar6 + (longlong)iVar4 * 0xb8),(FColumnMetaData *)FVar8,iVar1);
  }
  TArray<UE::Editor::DataStorage::FDynamicColumnDescription,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  ::
  Append<UE::Editor::DataStorage::FDynamicColumnDescription,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            (&param_1->DynamicSelectionTypes,&param_2->DynamicSelectionTypes);
  TArray<enum_UE::Editor::DataStorage::EQueryAccessType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  ::
  Append<enum_UE::Editor::DataStorage::EQueryAccessType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            (&param_1->DynamicSelectionAccessTypes,&param_2->DynamicSelectionAccessTypes);
  if (param_1 == param_2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = (param_2->DynamicSelectionMetaData).ArrayNum;
  if (iVar1 != 0) {
    iVar4 = Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FColumnMetaData::EFlags>_>
                      (4,4,iVar1,&(param_1->DynamicSelectionMetaData).AllocatorInstance,
                       &(param_1->DynamicSelectionMetaData).ArrayNum,
                       &(param_1->DynamicSelectionMetaData).ArrayMax);
    _Src_00 = (param_2->DynamicSelectionMetaData).AllocatorInstance.SecondaryData;
    FVar7 = (param_1->DynamicSelectionMetaData).AllocatorInstance.SecondaryData;
    if (_Src_00 == (ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags>)0x0) {
      _Src_00 = (ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags>)
                &param_2->DynamicSelectionMetaData;
    }
    if (FVar7 == (ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags>)0x0) {
      FVar7 = (ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags>)
              &param_1->DynamicSelectionMetaData;
    }
    memcpy((void *)((longlong)FVar7 + (longlong)iVar4 * 4),(void *)_Src_00,(longlong)iVar1 << 2);
  }
  return;
}

// MoveKeyTest @ 142cb1470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::Editor::DataStorage::Tests::Private::MoveKeyTest(FMapKey *param_1)

{
  FAutomationTestBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  FAutomationTestFramework *pFVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [32];
  FKeyMove local_58 [8];
  FKeyComparer local_50;
  FString local_48;
  FString local_38;
  TVariant<FEmptyVariantState,void_const_*,UObject_const_*,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>
  local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_78;
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyMove,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_>(unsigned___int64,UE::Editor::DataStorage::FKeyMove&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>&&___ptr64)'
    ::__l2::Invokers[(param_1->Key).TypeIndex])(&local_28,local_58,&param_1->Key);
  uVar5 = (ulonglong)(param_1->Key).TypeIndex;
  if (9 < uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar5])(param_1);
  uVar5 = (ulonglong)local_28.TypeIndex;
  (param_1->Key).TypeIndex = '\0';
  if (9 < uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5) != '\0') {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_48,L"Moved key is empty.");
    (*pcVar2)(pFVar1,&local_48,0);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  local_50.Key = &param_1->Key;
  bVar3 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Editor::DataStorage::FKeyComparer,0,1,2,3,4,5,6,7,8,9,0,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64>(unsigned___int64,UE::Editor::DataStorage::FKeyComparer&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2,3,4,5,6,7,8,9>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>_const&___ptr64)'
            ::__l2::Invokers[local_28.TypeIndex])(&local_50,&local_28);
  if (bVar3) {
    pFVar4 = FAutomationTestFramework::Get();
    pFVar1 = pFVar4->CurrentTest;
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x28);
    ::FString::FString(&local_38,L"Original and moved shouldn\'t have the same value.");
    (*pcVar2)(pFVar1,&local_38,0);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  if (9 < local_28.TypeIndex) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,void_const*___ptr64,UObject_const*___ptr64,__int64,unsigned___int64,float,double,FString,FName,TUniquePtr<FSoftObjectPath,TDefaultDelete<FSoftObjectPath>_>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_28.TypeIndex])(&local_28);
  return;
}

// OnEditorDataStorageFeaturesEnabled @ 142cb20e0

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
UE::Editor::DataStorage::OnEditorDataStorageFeaturesEnabled(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::Editor::DataStorage::OnEditorDataStorageFeaturesEnabled'::__l2::
             _dynamic_atexit_destructor_for__OnTedsFeaturesEnabled__);
      _Init_thread_footer(&::_TSS0);
      return &OnTedsFeaturesEnabled;
    }
  }
  return &OnTedsFeaturesEnabled;
}

// ReadOnly @ 142cb32a0

Select * __thiscall
UE::Editor::DataStorage::Queries::Select::ReadOnly(Select *this,FDynamicColumnDescription *param_1)

{
  int *piVar1;
  TArray<UE::Editor::DataStorage::FDynamicColumnDescription,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  TArray<UE::Editor::DataStorage::EQueryAccessType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  TArray<UE::Editor::DataStorage::FColumnMetaData::EFlags,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  undefined8 *puVar5;
  FName FVar6;
  int iVar7;
  ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription> FVar8;
  ForElementType<UE::Editor::DataStorage::EQueryAccessType> FVar9;
  ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags> FVar10;
  
  iVar7 = (this->Query).DynamicSelectionTypes.ArrayNum;
  piVar1 = &(this->Query).DynamicSelectionTypes.ArrayMax;
  pTVar2 = &(this->Query).DynamicSelectionTypes;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>_>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Query).DynamicSelectionTypes.ArrayNum = iVar7 + 1;
  piVar1 = &(this->Query).DynamicSelectionAccessTypes.ArrayMax;
  FVar8 = (this->Query).DynamicSelectionTypes.AllocatorInstance.SecondaryData;
  FVar6 = param_1->Identifier;
  if (FVar8 == (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0) {
    FVar8 = (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)pTVar2;
  }
  pTVar3 = &(this->Query).DynamicSelectionAccessTypes;
  puVar5 = (undefined8 *)((longlong)FVar8 + (longlong)iVar7 * 0x10);
  *puVar5 = param_1->TemplateType;
  *(FName *)(puVar5 + 1) = FVar6;
  iVar7 = (this->Query).DynamicSelectionAccessTypes.ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryAccessType>_>
                      (0x101,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->Query).DynamicSelectionAccessTypes.ArrayNum = iVar7 + 1;
  piVar1 = &(this->Query).DynamicSelectionMetaData.ArrayMax;
  FVar9 = (this->Query).DynamicSelectionAccessTypes.AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0) {
    FVar9 = (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)pTVar3;
  }
  pTVar4 = &(this->Query).DynamicSelectionMetaData;
  *(undefined1 *)((longlong)FVar9 + (longlong)iVar7) = 0;
  iVar7 = (this->Query).DynamicSelectionMetaData.ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FColumnMetaData::EFlags>_>
                      (0x404,&pTVar4->AllocatorInstance,piVar1);
  }
  (this->Query).DynamicSelectionMetaData.ArrayNum = iVar7 + 1;
  FVar10 = (this->Query).DynamicSelectionMetaData.AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags>)0x0) {
    FVar10 = (ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags>)pTVar4;
  }
  *(undefined4 *)((longlong)FVar10 + (longlong)iVar7 * 4) = 0;
  return this;
}

// ReadOnly @ 142cb33a0

Select * __thiscall
UE::Editor::DataStorage::Queries::Select::ReadOnly(Select *this,UScriptStruct *param_1)

{
  int *piVar1;
  TArray<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  TArray<UE::Editor::DataStorage::EQueryAccessType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  TArray<UE::Editor::DataStorage::FColumnMetaData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  FWeakObjectPtr *this_00;
  uchar *puVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  Select *pSVar9;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar10;
  ForElementType<UE::Editor::DataStorage::EQueryAccessType> FVar11;
  longlong lVar12;
  ForElementType<UE::Editor::DataStorage::FColumnMetaData> FVar13;
  UScriptStruct *local_res8;
  
  if (param_1 == (UScriptStruct *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Target",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementQueryBuilder.cpp"
                       ,0x1a8,
                       L"The Select section in the Typed Elements query builder doesn\'t support nullptrs as Read-Only input."
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pSVar9 = (Select *)(*pcVar6)();
      return pSVar9;
    }
  }
  iVar8 = (this->Query).SelectionTypes.ArrayNum;
  piVar1 = &(this->Query).SelectionTypes.ArrayMax;
  pTVar2 = &(this->Query).SelectionTypes;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_>
                      (0x408,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Query).SelectionTypes.ArrayNum = iVar8 + 1;
  FVar10 = (this->Query).SelectionTypes.AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    FVar10 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)pTVar2;
  }
  this_00 = (FWeakObjectPtr *)((longlong)FVar10 + (longlong)iVar8 * 8);
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  this_00->ObjectIndex = 0;
  this_00->ObjectSerialNumber = 0;
  local_res8 = param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_res8);
  iVar8 = (this->Query).SelectionAccessTypes.ArrayNum;
  piVar1 = &(this->Query).SelectionAccessTypes.ArrayMax;
  pTVar3 = &(this->Query).SelectionAccessTypes;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryAccessType>_>
                      (0x101,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->Query).SelectionAccessTypes.ArrayNum = iVar8 + 1;
  piVar1 = &(this->Query).SelectionMetaData.ArrayMax;
  FVar11 = (this->Query).SelectionAccessTypes.AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0) {
    FVar11 = (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)pTVar3;
  }
  pTVar4 = &(this->Query).SelectionMetaData;
  *(undefined1 *)((longlong)FVar11 + (longlong)iVar8) = 0;
  iVar8 = (this->Query).SelectionMetaData.ArrayNum;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FColumnMetaData>_>
                      (0x8b8,&pTVar4->AllocatorInstance,piVar1);
  }
  (this->Query).SelectionMetaData.ArrayNum = iVar8 + 1;
  FVar13 = (this->Query).SelectionMetaData.AllocatorInstance.SecondaryData;
  if (FVar13 == (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)0x0) {
    FVar13 = (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)pTVar4;
  }
  lVar12 = (longlong)iVar8 * 0xb8;
  puVar5 = (uchar *)((longlong)FVar13 + 8) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5[4] = '\0';
  puVar5[5] = '\0';
  puVar5[6] = '\0';
  puVar5[7] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x10) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5[4] = '\0';
  puVar5[5] = '\0';
  puVar5[6] = '\0';
  puVar5[7] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x28) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5[4] = '\0';
  puVar5[5] = '\0';
  puVar5[6] = '\0';
  puVar5[7] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x30) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x34) + lVar12;
  puVar5[0] = 0x80;
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x3c) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x38) + lVar12;
  puVar5[0] = 0xff;
  puVar5[1] = 0xff;
  puVar5[2] = 0xff;
  puVar5[3] = 0xff;
  puVar5 = (uchar *)((longlong)FVar13 + 0x48) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5[4] = '\0';
  puVar5[5] = '\0';
  puVar5[6] = '\0';
  puVar5[7] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x50) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x58) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5[4] = '\0';
  puVar5[5] = '\0';
  puVar5[6] = '\0';
  puVar5[7] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x60) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5[4] = '\0';
  puVar5[5] = '\0';
  puVar5[6] = '\0';
  puVar5[7] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x78) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5[4] = '\0';
  puVar5[5] = '\0';
  puVar5[6] = '\0';
  puVar5[7] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x80) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x84) + lVar12;
  puVar5[0] = 0x80;
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x8c) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x88) + lVar12;
  puVar5[0] = 0xff;
  puVar5[1] = 0xff;
  puVar5[2] = 0xff;
  puVar5[3] = 0xff;
  puVar5 = (uchar *)((longlong)FVar13 + 0x98) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5[4] = '\0';
  puVar5[5] = '\0';
  puVar5[6] = '\0';
  puVar5[7] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0xa0) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  *(undefined ***)((longlong)FVar13 + lVar12) = &___7FColumnMetaData_DataStorage_Editor_UE__6B_;
  puVar5 = (uchar *)((longlong)FVar13 + 0xb0) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  *(UScriptStruct **)((uchar *)((longlong)FVar13 + 0xa8) + lVar12) = param_1;
  return this;
}

// ReadOnly @ 142cb35a0

Select * __thiscall
UE::Editor::DataStorage::Queries::Select::ReadOnly
          (Select *this,UScriptStruct *param_1,EOptional param_2)

{
  int *piVar1;
  TArray<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  TArray<UE::Editor::DataStorage::EQueryAccessType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  TArray<UE::Editor::DataStorage::FColumnMetaData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  FWeakObjectPtr *this_00;
  uchar *puVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  Select *pSVar9;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar10;
  ForElementType<UE::Editor::DataStorage::EQueryAccessType> FVar11;
  longlong lVar12;
  ForElementType<UE::Editor::DataStorage::FColumnMetaData> FVar13;
  UScriptStruct *local_res8;
  
  if (param_1 == (UScriptStruct *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Target",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementQueryBuilder.cpp"
                       ,0x1c8,
                       L"The Select section in the Typed Elements query builder doesn\'t support nullptrs as Read-Only input."
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pSVar9 = (Select *)(*pcVar6)();
      return pSVar9;
    }
  }
  iVar8 = (this->Query).SelectionTypes.ArrayNum;
  piVar1 = &(this->Query).SelectionTypes.ArrayMax;
  pTVar2 = &(this->Query).SelectionTypes;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_>
                      (0x408,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Query).SelectionTypes.ArrayNum = iVar8 + 1;
  FVar10 = (this->Query).SelectionTypes.AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    FVar10 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)pTVar2;
  }
  this_00 = (FWeakObjectPtr *)((longlong)FVar10 + (longlong)iVar8 * 8);
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  this_00->ObjectIndex = 0;
  this_00->ObjectSerialNumber = 0;
  local_res8 = param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_res8);
  iVar8 = (this->Query).SelectionAccessTypes.ArrayNum;
  piVar1 = &(this->Query).SelectionAccessTypes.ArrayMax;
  pTVar3 = &(this->Query).SelectionAccessTypes;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryAccessType>_>
                      (0x101,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->Query).SelectionAccessTypes.ArrayNum = iVar8 + 1;
  piVar1 = &(this->Query).SelectionMetaData.ArrayMax;
  FVar11 = (this->Query).SelectionAccessTypes.AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0) {
    FVar11 = (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)pTVar3;
  }
  pTVar4 = &(this->Query).SelectionMetaData;
  *(bool *)((longlong)FVar11 + (longlong)iVar8) = param_2 == Yes;
  iVar8 = (this->Query).SelectionMetaData.ArrayNum;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FColumnMetaData>_>
                      (0x8b8,&pTVar4->AllocatorInstance,piVar1);
  }
  (this->Query).SelectionMetaData.ArrayNum = iVar8 + 1;
  FVar13 = (this->Query).SelectionMetaData.AllocatorInstance.SecondaryData;
  if (FVar13 == (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)0x0) {
    FVar13 = (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)pTVar4;
  }
  lVar12 = (longlong)iVar8 * 0xb8;
  puVar5 = (uchar *)((longlong)FVar13 + 8) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5[4] = '\0';
  puVar5[5] = '\0';
  puVar5[6] = '\0';
  puVar5[7] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x10) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5[4] = '\0';
  puVar5[5] = '\0';
  puVar5[6] = '\0';
  puVar5[7] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x28) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5[4] = '\0';
  puVar5[5] = '\0';
  puVar5[6] = '\0';
  puVar5[7] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x30) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x34) + lVar12;
  puVar5[0] = 0x80;
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x38) + lVar12;
  puVar5[0] = 0xff;
  puVar5[1] = 0xff;
  puVar5[2] = 0xff;
  puVar5[3] = 0xff;
  puVar5 = (uchar *)((longlong)FVar13 + 0x3c) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x48) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5[4] = '\0';
  puVar5[5] = '\0';
  puVar5[6] = '\0';
  puVar5[7] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x50) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x58) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5[4] = '\0';
  puVar5[5] = '\0';
  puVar5[6] = '\0';
  puVar5[7] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x60) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5[4] = '\0';
  puVar5[5] = '\0';
  puVar5[6] = '\0';
  puVar5[7] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x78) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5[4] = '\0';
  puVar5[5] = '\0';
  puVar5[6] = '\0';
  puVar5[7] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x80) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x84) + lVar12;
  puVar5[0] = 0x80;
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x88) + lVar12;
  puVar5[0] = 0xff;
  puVar5[1] = 0xff;
  puVar5[2] = 0xff;
  puVar5[3] = 0xff;
  puVar5 = (uchar *)((longlong)FVar13 + 0x8c) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x98) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5[4] = '\0';
  puVar5[5] = '\0';
  puVar5[6] = '\0';
  puVar5[7] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0xa0) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  *(undefined ***)((longlong)FVar13 + lVar12) = &___7FColumnMetaData_DataStorage_Editor_UE__6B_;
  *(UScriptStruct **)((uchar *)((longlong)FVar13 + 0xa8) + lVar12) = param_1;
  puVar5 = (uchar *)((longlong)FVar13 + 0xb0) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  return this;
}

// ReadOnly @ 142cb37b0

Select * __thiscall
UE::Editor::DataStorage::Queries::Select::ReadOnly
          (Select *this,TArrayView<UScriptStruct_const_*_const,int> *param_1)

{
  int *piVar1;
  UScriptStruct **ppUVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  UScriptStruct **ppUVar6;
  
  iVar3 = param_1->ArrayNum;
  iVar4 = (this->Query).SelectionTypes.ArrayNum;
  uVar5 = iVar4 + iVar3;
  if (-1 < (int)uVar5) {
    if ((this->Query).SelectionTypes.ArrayMax < (int)uVar5) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_>
                (8,4,uVar5,&(this->Query).SelectionTypes.AllocatorInstance,iVar4,
                 &(this->Query).SelectionTypes.ArrayMax);
    }
    if ((this->Query).SelectionAccessTypes.ArrayMax < (int)uVar5) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryAccessType>_>
                (1,1,uVar5,&(this->Query).SelectionAccessTypes.AllocatorInstance,
                 (this->Query).SelectionAccessTypes.ArrayNum,
                 &(this->Query).SelectionAccessTypes.ArrayMax);
    }
    piVar1 = &(this->Query).SelectionMetaData.ArrayMax;
    if (*piVar1 < (int)uVar5) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FColumnMetaData>_>
                (0xb8,8,uVar5,&(this->Query).SelectionMetaData.AllocatorInstance,
                 (this->Query).SelectionMetaData.ArrayNum,piVar1);
    }
    ppUVar6 = param_1->DataPtr;
    ppUVar2 = ppUVar6 + iVar3;
    for (; ppUVar6 != ppUVar2; ppUVar6 = ppUVar6 + 1) {
      ReadOnly(this,*ppUVar6);
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
}

// ReadOnly @ 142cb38c0

Select * __thiscall
UE::Editor::DataStorage::Queries::Select::ReadOnly
          (Select *this,TArrayView<UScriptStruct_const_*_const,int> *param_1,EOptional param_2)

{
  int *piVar1;
  UScriptStruct **ppUVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  UScriptStruct **ppUVar6;
  
  iVar3 = param_1->ArrayNum;
  iVar4 = (this->Query).SelectionTypes.ArrayNum;
  uVar5 = iVar4 + iVar3;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  if ((this->Query).SelectionTypes.ArrayMax < (int)uVar5) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_>
              (8,4,uVar5,&(this->Query).SelectionTypes.AllocatorInstance,iVar4,
               &(this->Query).SelectionTypes.ArrayMax);
  }
  if ((this->Query).SelectionAccessTypes.ArrayMax < (int)uVar5) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryAccessType>_>
              (1,1,uVar5,&(this->Query).SelectionAccessTypes.AllocatorInstance,
               (this->Query).SelectionAccessTypes.ArrayNum,
               &(this->Query).SelectionAccessTypes.ArrayMax);
  }
  piVar1 = &(this->Query).SelectionMetaData.ArrayMax;
  if (*piVar1 < (int)uVar5) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FColumnMetaData>_>
              (0xb8,8,uVar5,&(this->Query).SelectionMetaData.AllocatorInstance,
               (this->Query).SelectionMetaData.ArrayNum,piVar1);
  }
  ppUVar6 = param_1->DataPtr;
  ppUVar2 = ppUVar6 + iVar3;
  for (; ppUVar6 != ppUVar2; ppUVar6 = ppUVar6 + 1) {
    ReadOnly(this,*ppUVar6,param_2);
  }
  return this;
}

// ReadWrite @ 142cb3c70

Select * __thiscall
UE::Editor::DataStorage::Queries::Select::ReadWrite(Select *this,FDynamicColumnDescription *param_1)

{
  int *piVar1;
  TArray<UE::Editor::DataStorage::FDynamicColumnDescription,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  TArray<UE::Editor::DataStorage::EQueryAccessType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  TArray<UE::Editor::DataStorage::FColumnMetaData::EFlags,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  undefined8 *puVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription> FVar9;
  ForElementType<UE::Editor::DataStorage::EQueryAccessType> FVar10;
  ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags> FVar11;
  undefined1 local_res8 [8];
  
  if ((param_1->Identifier == (FName)0x0) &&
     (bVar7 = `UE::Editor::DataStorage::Queries::Select::ReadWrite'::__l3::<lambda_1>::operator()
                        (local_res8), !bVar7)) {
    return this;
  }
  iVar8 = (this->Query).DynamicSelectionTypes.ArrayNum;
  piVar1 = &(this->Query).DynamicSelectionTypes.ArrayMax;
  pTVar2 = &(this->Query).DynamicSelectionTypes;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>_>
                      (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Query).DynamicSelectionTypes.ArrayNum = iVar8 + 1;
  piVar1 = &(this->Query).DynamicSelectionAccessTypes.ArrayMax;
  FVar9 = (this->Query).DynamicSelectionTypes.AllocatorInstance.SecondaryData;
  FVar6 = param_1->Identifier;
  pTVar3 = &(this->Query).DynamicSelectionAccessTypes;
  if (FVar9 == (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0) {
    FVar9 = (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)pTVar2;
  }
  puVar5 = (undefined8 *)((longlong)FVar9 + (longlong)iVar8 * 0x10);
  *puVar5 = param_1->TemplateType;
  *(FName *)(puVar5 + 1) = FVar6;
  iVar8 = (this->Query).DynamicSelectionAccessTypes.ArrayNum;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryAccessType>_>
                      (0x101,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->Query).DynamicSelectionAccessTypes.ArrayNum = iVar8 + 1;
  piVar1 = &(this->Query).DynamicSelectionMetaData.ArrayMax;
  FVar10 = (this->Query).DynamicSelectionAccessTypes.AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0) {
    FVar10 = (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)pTVar3;
  }
  pTVar4 = &(this->Query).DynamicSelectionMetaData;
  *(undefined1 *)((longlong)FVar10 + (longlong)iVar8) = 2;
  iVar8 = (this->Query).DynamicSelectionMetaData.ArrayNum;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FColumnMetaData::EFlags>_>
                      (0x404,&pTVar4->AllocatorInstance,piVar1);
  }
  (this->Query).DynamicSelectionMetaData.ArrayNum = iVar8 + 1;
  FVar11 = (this->Query).DynamicSelectionMetaData.AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags>)0x0) {
    FVar11 = (ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags>)pTVar4;
  }
  *(undefined4 *)((longlong)FVar11 + (longlong)iVar8 * 4) = 1;
  return this;
}

// ReadWrite @ 142cb3d90

Select * __thiscall
UE::Editor::DataStorage::Queries::Select::ReadWrite(Select *this,UScriptStruct *param_1)

{
  int *piVar1;
  TArray<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  TArray<UE::Editor::DataStorage::EQueryAccessType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  TArray<UE::Editor::DataStorage::FColumnMetaData,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  FWeakObjectPtr *this_00;
  uchar *puVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  Select *pSVar9;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar10;
  ForElementType<UE::Editor::DataStorage::EQueryAccessType> FVar11;
  longlong lVar12;
  ForElementType<UE::Editor::DataStorage::FColumnMetaData> FVar13;
  UScriptStruct *local_res8;
  
  if (param_1 == (UScriptStruct *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Target",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementQueryBuilder.cpp"
                       ,0x1e2,
                       L"The Select section in the Typed Elements query builder doesn\'t support nullptrs as Read/Write input."
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pSVar9 = (Select *)(*pcVar6)();
      return pSVar9;
    }
  }
  iVar8 = (this->Query).SelectionTypes.ArrayNum;
  piVar1 = &(this->Query).SelectionTypes.ArrayMax;
  pTVar2 = &(this->Query).SelectionTypes;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_>
                      (0x408,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Query).SelectionTypes.ArrayNum = iVar8 + 1;
  FVar10 = (this->Query).SelectionTypes.AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    FVar10 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)pTVar2;
  }
  this_00 = (FWeakObjectPtr *)((longlong)FVar10 + (longlong)iVar8 * 8);
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  this_00->ObjectIndex = 0;
  this_00->ObjectSerialNumber = 0;
  local_res8 = param_1;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UScriptStruct *)0x0)) {
    GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_res8);
  iVar8 = (this->Query).SelectionAccessTypes.ArrayNum;
  piVar1 = &(this->Query).SelectionAccessTypes.ArrayMax;
  pTVar3 = &(this->Query).SelectionAccessTypes;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryAccessType>_>
                      (0x101,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->Query).SelectionAccessTypes.ArrayNum = iVar8 + 1;
  piVar1 = &(this->Query).SelectionMetaData.ArrayMax;
  FVar11 = (this->Query).SelectionAccessTypes.AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0) {
    FVar11 = (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)pTVar3;
  }
  pTVar4 = &(this->Query).SelectionMetaData;
  *(undefined1 *)((longlong)FVar11 + (longlong)iVar8) = 2;
  iVar8 = (this->Query).SelectionMetaData.ArrayNum;
  if (iVar8 == *piVar1) {
    iVar8 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FColumnMetaData>_>
                      (0x8b8,&pTVar4->AllocatorInstance,piVar1);
  }
  (this->Query).SelectionMetaData.ArrayNum = iVar8 + 1;
  FVar13 = (this->Query).SelectionMetaData.AllocatorInstance.SecondaryData;
  if (FVar13 == (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)0x0) {
    FVar13 = (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)pTVar4;
  }
  lVar12 = (longlong)iVar8 * 0xb8;
  puVar5 = (uchar *)((longlong)FVar13 + 8) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5[4] = '\0';
  puVar5[5] = '\0';
  puVar5[6] = '\0';
  puVar5[7] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x10) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5[4] = '\0';
  puVar5[5] = '\0';
  puVar5[6] = '\0';
  puVar5[7] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x28) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5[4] = '\0';
  puVar5[5] = '\0';
  puVar5[6] = '\0';
  puVar5[7] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x30) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x34) + lVar12;
  puVar5[0] = 0x80;
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x3c) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x38) + lVar12;
  puVar5[0] = 0xff;
  puVar5[1] = 0xff;
  puVar5[2] = 0xff;
  puVar5[3] = 0xff;
  puVar5 = (uchar *)((longlong)FVar13 + 0x48) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5[4] = '\0';
  puVar5[5] = '\0';
  puVar5[6] = '\0';
  puVar5[7] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x50) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x58) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5[4] = '\0';
  puVar5[5] = '\0';
  puVar5[6] = '\0';
  puVar5[7] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x60) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5[4] = '\0';
  puVar5[5] = '\0';
  puVar5[6] = '\0';
  puVar5[7] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x78) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5[4] = '\0';
  puVar5[5] = '\0';
  puVar5[6] = '\0';
  puVar5[7] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x80) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x84) + lVar12;
  puVar5[0] = 0x80;
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x8c) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0x88) + lVar12;
  puVar5[0] = 0xff;
  puVar5[1] = 0xff;
  puVar5[2] = 0xff;
  puVar5[3] = 0xff;
  puVar5 = (uchar *)((longlong)FVar13 + 0x98) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  puVar5[4] = '\0';
  puVar5[5] = '\0';
  puVar5[6] = '\0';
  puVar5[7] = '\0';
  puVar5 = (uchar *)((longlong)FVar13 + 0xa0) + lVar12;
  puVar5[0] = '\0';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  *(undefined ***)((longlong)FVar13 + lVar12) = &___7FColumnMetaData_DataStorage_Editor_UE__6B_;
  *(UScriptStruct **)((uchar *)((longlong)FVar13 + 0xa8) + lVar12) = param_1;
  puVar5 = (uchar *)((longlong)FVar13 + 0xb0) + lVar12;
  puVar5[0] = '\x01';
  puVar5[1] = '\0';
  puVar5[2] = '\0';
  puVar5[3] = '\0';
  return this;
}

// ReadWrite @ 142cb3fa0

Select * __thiscall
UE::Editor::DataStorage::Queries::Select::ReadWrite
          (Select *this,TArrayView<UScriptStruct_const_*_const,int> *param_1)

{
  int *piVar1;
  UScriptStruct **ppUVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  UScriptStruct **ppUVar6;
  
  iVar3 = param_1->ArrayNum;
  iVar4 = (this->Query).SelectionTypes.ArrayNum;
  uVar5 = iVar4 + iVar3;
  if (-1 < (int)uVar5) {
    if ((this->Query).SelectionTypes.ArrayMax < (int)uVar5) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_>
                (8,4,uVar5,&(this->Query).SelectionTypes.AllocatorInstance,iVar4,
                 &(this->Query).SelectionTypes.ArrayMax);
    }
    if ((this->Query).SelectionAccessTypes.ArrayMax < (int)uVar5) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::EQueryAccessType>_>
                (1,1,uVar5,&(this->Query).SelectionAccessTypes.AllocatorInstance,
                 (this->Query).SelectionAccessTypes.ArrayNum,
                 &(this->Query).SelectionAccessTypes.ArrayMax);
    }
    piVar1 = &(this->Query).SelectionMetaData.ArrayMax;
    if (*piVar1 < (int)uVar5) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FColumnMetaData>_>
                (0xb8,8,uVar5,&(this->Query).SelectionMetaData.AllocatorInstance,
                 (this->Query).SelectionMetaData.ArrayNum,piVar1);
    }
    ppUVar6 = param_1->DataPtr;
    ppUVar2 = ppUVar6 + iVar3;
    for (; ppUVar6 != ppUVar2; ppUVar6 = ppUVar6 + 1) {
      ReadWrite(this,*ppUVar6);
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
}

// RemoveCondition @ 142cb76a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Editor::DataStorage::Queries::Private::RemoveCondition
          (FQueryDescription *param_1,int param_2,bool param_3)

{
  int *piVar1;
  void *_Dst;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> FVar5;
  int iVar6;
  
  if (param_3) {
    TArray<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
    ::RemoveAt(&param_1->DynamicConditionOperations,param_2,Default);
    TArray<UE::Editor::DataStorage::FDynamicColumnDescription,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
    ::RemoveAt(&param_1->DynamicConditionDescriptions,param_2,Default);
    return;
  }
  uVar4 = 0;
  if (param_2 < (param_1->ConditionOperators).ArrayNum) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar5 = (param_1->ConditionOperators).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)0x0) {
    FVar5 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)
            &param_1->ConditionOperators;
  }
  iVar6 = (param_1->ConditionOperators).ArrayNum + ~param_2;
  _Dst = (void *)((longlong)FVar5 + (longlong)param_2 * 8);
  if (iVar6 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar6 << 3);
  }
  piVar1 = &(param_1->ConditionOperators).ArrayNum;
  *piVar1 = *piVar1 + -1;
  Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>_>
            (8,4,&(param_1->ConditionOperators).AllocatorInstance,
             (param_1->ConditionOperators).ArrayNum,&(param_1->ConditionOperators).ArrayMax);
  TArray<enum_UE::Editor::DataStorage::FQueryDescription::EOperatorType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  ::RemoveAt(&param_1->ConditionTypes,param_2,Default);
  return;
}

// RemoveSelection @ 142cb8c00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Editor::DataStorage::Queries::Private::RemoveSelection
          (FQueryDescription *param_1,int param_2,bool param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar4;
  ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags> FVar5;
  ForElementType<UE::Editor::DataStorage::FColumnMetaData> FVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  void *pvVar11;
  uint uVar12;
  
  lVar10 = (longlong)param_2;
  uVar9 = ~param_2;
  uVar12 = uVar9 >> 0x1f;
  if (param_3) {
    TArray<enum_UE::Editor::DataStorage::EQueryAccessType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
    ::RemoveAt(&param_1->DynamicSelectionAccessTypes,param_2,Default);
    TArray<UE::Editor::DataStorage::FDynamicColumnDescription,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
    ::RemoveAt(&param_1->DynamicSelectionTypes,param_2,Default);
    uVar8 = 0;
    if (param_2 < (param_1->DynamicSelectionMetaData).ArrayNum) {
      uVar8 = uVar12;
    }
    if (uVar8 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FVar5 = (param_1->DynamicSelectionMetaData).AllocatorInstance.SecondaryData;
    if (FVar5 == (ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags>)0x0) {
      FVar5 = (ForElementType<UE::Editor::DataStorage::FColumnMetaData::EFlags>)
              &param_1->DynamicSelectionMetaData;
    }
    pvVar11 = (void *)((longlong)FVar5 + lVar10 * 4);
    iVar7 = (param_1->DynamicSelectionMetaData).ArrayNum + uVar9;
    if (iVar7 != 0) {
      memmove(pvVar11,(void *)((longlong)pvVar11 + 4),(longlong)iVar7 << 2);
    }
    piVar1 = &(param_1->DynamicSelectionMetaData).ArrayNum;
    *piVar1 = *piVar1 + -1;
    Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_UE::Editor::DataStorage::FColumnMetaData::EFlags>_>
              (4,4,&(param_1->DynamicSelectionMetaData).AllocatorInstance,
               (param_1->DynamicSelectionMetaData).ArrayNum,
               &(param_1->DynamicSelectionMetaData).ArrayMax);
  }
  else {
    TArray<enum_UE::Editor::DataStorage::EQueryAccessType,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
    ::RemoveAt(&param_1->SelectionAccessTypes,param_2,Default);
    uVar8 = 0;
    if (param_2 < (param_1->SelectionTypes).ArrayNum) {
      uVar8 = uVar12;
    }
    if (uVar8 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FVar4 = (param_1->SelectionTypes).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
      FVar4 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)
              &param_1->SelectionTypes;
    }
    pvVar11 = (void *)((longlong)FVar4 + lVar10 * 8);
    iVar7 = (param_1->SelectionTypes).ArrayNum + uVar9;
    if (iVar7 != 0) {
      memmove(pvVar11,(void *)((longlong)pvVar11 + 8),(longlong)iVar7 << 3);
    }
    piVar1 = &(param_1->SelectionTypes).ArrayNum;
    *piVar1 = *piVar1 + -1;
    Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>_>
              (8,4,&(param_1->SelectionTypes).AllocatorInstance,(param_1->SelectionTypes).ArrayNum,
               &(param_1->SelectionTypes).ArrayMax);
    uVar8 = 0;
    if (param_2 < (param_1->SelectionMetaData).ArrayNum) {
      uVar8 = uVar12;
    }
    if (uVar8 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FVar6 = (param_1->SelectionMetaData).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)0x0) {
      FVar6 = (ForElementType<UE::Editor::DataStorage::FColumnMetaData>)&param_1->SelectionMetaData;
    }
    pvVar11 = (void *)(lVar10 * 0xb8 + (longlong)FVar6);
    *(undefined4 *)((longlong)pvVar11 + 0xa0) = 0;
    if (*(void **)((longlong)pvVar11 + 0x98) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar11 + 0x98));
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)((longlong)pvVar11 + 0x58));
    *(undefined4 *)((longlong)pvVar11 + 0x50) = 0;
    if (*(void **)((longlong)pvVar11 + 0x48) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar11 + 0x48));
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,TVariant<bool,unsigned___int64,__int64,double,FString>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)((longlong)pvVar11 + 8));
    iVar7 = (param_1->SelectionMetaData).ArrayNum + uVar9;
    if (iVar7 != 0) {
      memmove(pvVar11,(void *)((longlong)pvVar11 + 0xb8),(longlong)iVar7 * 0xb8);
    }
    piVar1 = &(param_1->SelectionMetaData).ArrayNum;
    *piVar1 = *piVar1 + -1;
    Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Editor::DataStorage::FColumnMetaData>_>
              (0xb8,8,&(param_1->SelectionMetaData).AllocatorInstance,
               (param_1->SelectionMetaData).ArrayNum,&(param_1->SelectionMetaData).ArrayMax);
  }
  return;
}

// Resolve @ 142cb9e80

EConflictResolution __cdecl
UE::Editor::DataStorage::Queries::Private::Resolve(EOperatorType param_1,EOperatorType param_2)

{
  code *pcVar1;
  bool bVar2;
  EConflictResolution EVar3;
  
  if (param_1 == SimpleAll) {
    EVar3 = First;
    if (param_2 == SimpleNone) {
      EVar3 = Conflict;
    }
    return EVar3;
  }
  if (param_1 == SimpleAny) {
    if (param_2 == SimpleNone) {
      return Conflict;
    }
    return (EConflictResolution)(param_2 == SimpleAll);
  }
  if (param_1 == SimpleNone) {
    EVar3 = First;
    if (param_2 != SimpleNone) {
      EVar3 = Conflict;
    }
    return EVar3;
  }
  if (param_1 != SimpleOptional) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementQueryBuilder.cpp"
                       ,0x27c,
                       L"Unknown EOperatorType value found when trying to resolve conditions.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    return Unknown;
  }
  return Second;
}

// Resolve @ 142cb9f20

EConflictResolution __cdecl
UE::Editor::DataStorage::Queries::Private::Resolve
          (EQueryAccessType param_1,EQueryAccessType param_2)

{
  code *pcVar1;
  bool bVar2;
  EConflictResolution EVar3;
  
  if (param_1 == ReadOnly) {
    return (EConflictResolution)(param_2 == ReadWrite);
  }
  if (param_1 == OptionalReadOnly) {
    return Second;
  }
  if (param_1 == ReadWrite) {
    return First;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementQueryBuilder.cpp"
                     ,0x254,
                     L"Unknown EQueryAccessType value found when trying to resolve conditions.");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  return Unknown;
}

// Resolve @ 142cb9f90

EConflictResolution __cdecl
UE::Editor::DataStorage::Queries::Private::Resolve(EQueryAccessType param_1,EOperatorType param_2)

{
  code *pcVar1;
  bool bVar2;
  EConflictResolution EVar3;
  
  if (param_1 != ReadOnly) {
    if (param_1 == OptionalReadOnly) {
      if (param_2 == SimpleNone) {
        return Conflict;
      }
      return (EConflictResolution)(param_2 != SimpleOptional);
    }
    if (param_1 != ReadWrite) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementQueryBuilder.cpp"
                         ,0x29c,
                         L"Unknown EQueryAccessType value found when trying to resolve conditions.")
      ;
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
      return Unknown;
    }
  }
  EVar3 = First;
  if (param_2 == SimpleNone) {
    EVar3 = Conflict;
  }
  return EVar3;
}

// ResolveConditionDuplicate @ 142cba010

bool __cdecl
UE::Editor::DataStorage::Queries::Private::ResolveConditionDuplicate
          (FQueryDescription *param_1,int param_2,int param_3,bool param_4,FText *param_5)

{
  short sVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FText *pFVar6;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType> FVar7;
  int iVar8;
  short sVar9;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType> FVar10;
  FText local_28;
  
  if (param_4) {
    FVar10 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)
             &param_1->DynamicConditionOperations;
    uVar5 = 0;
    if (param_2 < (param_1->DynamicConditionOperations).ArrayNum) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FVar7 = (param_1->DynamicConditionOperations).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
      FVar7 = FVar10;
    }
    sVar9 = *(short *)((longlong)FVar7 + (longlong)param_2 * 2);
    uVar5 = 0;
    if (param_3 < (param_1->DynamicConditionOperations).ArrayNum) {
      uVar5 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FVar7 = (param_1->DynamicConditionOperations).AllocatorInstance.SecondaryData;
  }
  else {
    FVar10 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)
             &param_1->ConditionTypes;
    uVar5 = 0;
    if (param_2 < (param_1->ConditionTypes).ArrayNum) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FVar7 = (param_1->ConditionTypes).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
      FVar7 = FVar10;
    }
    sVar9 = *(short *)((longlong)FVar7 + (longlong)param_2 * 2);
    uVar5 = 0;
    if (param_3 < (param_1->ConditionTypes).ArrayNum) {
      uVar5 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FVar7 = (param_1->ConditionTypes).AllocatorInstance.SecondaryData;
  }
  if (FVar7 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
    FVar7 = FVar10;
  }
  sVar1 = *(short *)((longlong)FVar7 + (longlong)param_3 * 2);
  if (sVar9 == 0) {
    iVar8 = 0;
    if (sVar1 == 2) {
      iVar8 = 2;
    }
LAB_142cba22c:
    if (iVar8 == 0) goto LAB_142cba2b1;
    if (iVar8 != 1) {
      if (iVar8 != 2) {
LAB_142cba23a:
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementQueryBuilder.cpp"
                           ,0x2fe,L"Unknown EOperatorType value found when trying to merge queries."
                          );
        if (!bVar3) {
          return false;
        }
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
LAB_142cba264:
      if (param_5 != (FText *)0x0) {
        pFVar6 = FText::AsLocalizable_Advanced_LocText
                           (&local_28,L"TypedElementQueryUtils",L"CannotMerge_ConditionConflict",
                            L"Cannot merge two queries if they contain the same requirement under conflicting conditions (None and All/Any)"
                           );
        FText::operator=(param_5,pFVar6);
        if (local_28.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
        }
      }
      return false;
    }
  }
  else if (sVar9 == 1) {
    if (sVar1 == 2) goto LAB_142cba264;
    if (sVar1 != 0) goto LAB_142cba2b1;
  }
  else {
    if (sVar9 == 2) {
      iVar8 = 0;
      if (sVar1 != 2) {
        iVar8 = 2;
      }
      goto LAB_142cba22c;
    }
    if (sVar9 != 3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementQueryBuilder.cpp"
                         ,0x27c,
                         L"Unknown EOperatorType value found when trying to resolve conditions.");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      goto LAB_142cba23a;
    }
  }
  param_3 = param_2;
LAB_142cba2b1:
  RemoveCondition(param_1,param_3,param_4);
  return true;
}

// ResolveConditionSelectionDuplicate @ 142cba2e0

bool __cdecl
UE::Editor::DataStorage::Queries::Private::ResolveConditionSelectionDuplicate
          (FQueryDescription *param_1,int param_2,int param_3,bool param_4,FText *param_5)

{
  short sVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FText *pFVar6;
  ForElementType<UE::Editor::DataStorage::EQueryAccessType> FVar7;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType> FVar8;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType> FVar9;
  char cVar10;
  FText local_28;
  
  if (param_4) {
    uVar5 = 0;
    if (param_2 < (param_1->DynamicSelectionAccessTypes).ArrayNum) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FVar7 = (param_1->DynamicSelectionAccessTypes).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0) {
      FVar7 = (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)
              &param_1->DynamicSelectionAccessTypes;
    }
    FVar9 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)
            &param_1->DynamicConditionOperations;
    cVar10 = *(char *)((longlong)FVar7 + (longlong)param_2);
    uVar5 = 0;
    if (param_3 < (param_1->DynamicConditionOperations).ArrayNum) {
      uVar5 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FVar8 = (param_1->DynamicConditionOperations).AllocatorInstance.SecondaryData;
  }
  else {
    uVar5 = 0;
    if (param_2 < (param_1->SelectionAccessTypes).ArrayNum) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FVar7 = (param_1->SelectionAccessTypes).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0) {
      FVar7 = (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)
              &param_1->SelectionAccessTypes;
    }
    FVar9 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)
            &param_1->ConditionTypes;
    cVar10 = *(char *)((longlong)FVar7 + (longlong)param_2);
    uVar5 = 0;
    if (param_3 < (param_1->ConditionTypes).ArrayNum) {
      uVar5 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FVar8 = (param_1->ConditionTypes).AllocatorInstance.SecondaryData;
  }
  if (FVar8 == (ForElementType<UE::Editor::DataStorage::FQueryDescription::EOperatorType>)0x0) {
    FVar8 = FVar9;
  }
  sVar1 = *(short *)((longlong)FVar8 + (longlong)param_3 * 2);
  if (cVar10 == '\0') {
LAB_142cba4e6:
    cVar10 = '\0';
    if (sVar1 == 2) {
      cVar10 = '\x02';
    }
LAB_142cba4f1:
    if (cVar10 == '\0') {
      RemoveCondition(param_1,param_3,param_4);
    }
    else {
      if (cVar10 != '\x01') {
        if (cVar10 == '\x02') {
LAB_142cba52d:
          if (param_5 != (FText *)0x0) {
            pFVar6 = FText::AsLocalizable_Advanced_LocText
                               (&local_28,L"TypedElementQueryUtils",
                                L"CannotMerge_SelectAndConditionConflict",
                                L"Cannot merge two queries if they contain conflicting requirements in the Select() and Where() clauses"
                               );
            FText::operator=(param_5,pFVar6);
            if (local_28.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
            }
          }
          return false;
        }
        goto LAB_142cba503;
      }
      RemoveSelection(param_1,param_2,param_4);
    }
    bVar3 = true;
  }
  else {
    if (cVar10 == '\x01') {
      if (sVar1 == 2) goto LAB_142cba52d;
      cVar10 = sVar1 != 3;
      goto LAB_142cba4f1;
    }
    if (cVar10 == '\x02') goto LAB_142cba4e6;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementQueryBuilder.cpp"
                       ,0x29c,
                       L"Unknown EQueryAccessType value found when trying to resolve conditions.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
LAB_142cba503:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementQueryBuilder.cpp"
                       ,0x322,L"Unknown EOperatorType value found when trying to merge queries.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    bVar3 = false;
  }
  return bVar3;
}

// ResolveDuplicatesInQuery @ 142cba5c0

bool __cdecl
UE::Editor::DataStorage::Queries::Private::ResolveDuplicatesInQuery
          (FQueryDescription *param_1,FText *param_2)

{
  TArray<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  TArray<UE::Editor::DataStorage::FDynamicColumnDescription,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar3;
  ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription> FVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar8;
  ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription> FVar9;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar10;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> FVar11;
  int iVar12;
  uint uVar13;
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar14;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> FVar15;
  ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription> FVar16;
  ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription> FVar17;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> FVar18;
  ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription> FVar19;
  uint uVar20;
  ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator> FVar21;
  
  uVar20 = 0;
  if (0 < (param_1->SelectionTypes).ArrayNum) {
    pTVar1 = &param_1->SelectionTypes;
    do {
      iVar12 = (param_1->SelectionTypes).ArrayNum;
      if ((iVar12 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Count >= 0 && Count <= this->Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x55b,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      FVar14 = (param_1->SelectionTypes).AllocatorInstance.SecondaryData;
      FVar10 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)pTVar1;
      if (FVar14 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
        FVar10 = FVar14;
      }
      FVar14 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)
               ((longlong)FVar10 + (longlong)iVar12 * 8);
      if (FVar14 != FVar10) {
        do {
          FVar14 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)
                   ((longlong)FVar14 + -8);
          uVar13 = 0;
          if ((int)uVar20 < (param_1->SelectionTypes).ArrayNum) {
            uVar13 = ~uVar20 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          FVar3 = (param_1->SelectionTypes).AllocatorInstance.SecondaryData;
          FVar8 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)pTVar1;
          if (FVar3 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
            FVar8 = FVar3;
          }
          bVar6 = TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>::
                  UEOpEquals<UScriptStruct_const_,bool>
                            ((TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)FVar14,
                             (TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)
                             ((longlong)FVar8 + (longlong)(int)uVar20 * 8));
          if (bVar6) {
            uVar13 = (uint)((longlong)FVar14 - (longlong)FVar10 >> 3);
            if ((uVar13 != 0xffffffff) && (uVar13 != uVar20)) {
              ResolveSelectDuplicate(param_1,uVar20,uVar13,false);
            }
            break;
          }
        } while (FVar14 != FVar10);
      }
      FVar18 = (param_1->ConditionOperators).AllocatorInstance.SecondaryData;
      FVar21 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)
               &param_1->ConditionOperators;
      if (FVar18 != (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)0x0) {
        FVar21 = FVar18;
      }
      FVar18 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)
               ((longlong)FVar21 + (longlong)(param_1->ConditionOperators).ArrayNum * 8);
      if (FVar21 != FVar18) {
        FVar15 = FVar21;
        do {
          uVar13 = 0;
          if ((int)uVar20 < (param_1->SelectionTypes).ArrayNum) {
            uVar13 = ~uVar20 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          FVar14 = (param_1->SelectionTypes).AllocatorInstance.SecondaryData;
          FVar10 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)pTVar1;
          if (FVar14 != (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
            FVar10 = FVar14;
          }
          bVar6 = TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>::
                  UEOpEquals<UScriptStruct_const_,bool>
                            ((TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)FVar15,
                             (TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)
                             ((longlong)FVar10 + (longlong)(int)uVar20 * 8));
          if (bVar6) {
            iVar12 = (int)((longlong)FVar15 - (longlong)FVar21 >> 3);
            if ((iVar12 != -1) &&
               (bVar6 = ResolveConditionSelectionDuplicate(param_1,uVar20,iVar12,false,param_2),
               !bVar6)) {
              return false;
            }
            break;
          }
          FVar15 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)
                   ((longlong)FVar15 + 8);
        } while (FVar15 != FVar18);
      }
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < (param_1->SelectionTypes).ArrayNum);
  }
  uVar20 = 0;
  if (0 < (param_1->DynamicSelectionTypes).ArrayNum) {
    pTVar2 = &param_1->DynamicSelectionTypes;
    do {
      iVar12 = (param_1->DynamicSelectionTypes).ArrayNum;
      if ((iVar12 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Count >= 0 && Count <= this->Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x55b,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      FVar16 = (param_1->DynamicSelectionTypes).AllocatorInstance.SecondaryData;
      FVar19 = (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)pTVar2;
      if (FVar16 != (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0) {
        FVar19 = FVar16;
      }
      FVar16 = (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)
               ((longlong)iVar12 * 0x10 + (longlong)FVar19);
      if (FVar16 != FVar19) {
        do {
          FVar17 = (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)
                   ((longlong)FVar16 + -0x10);
          uVar13 = 0;
          if ((int)uVar20 < (param_1->DynamicSelectionTypes).ArrayNum) {
            uVar13 = ~uVar20 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          FVar4 = (param_1->DynamicSelectionTypes).AllocatorInstance.SecondaryData;
          FVar9 = (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)pTVar2;
          if (FVar4 != (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0) {
            FVar9 = FVar4;
          }
          if ((*(longlong *)FVar17 == *(longlong *)((longlong)FVar9 + (longlong)(int)uVar20 * 0x10))
             && (*(longlong *)((longlong)FVar16 + -8) ==
                 *(longlong *)((uchar *)((longlong)FVar9 + 8) + (longlong)(int)uVar20 * 0x10))) {
            uVar13 = (uint)((longlong)FVar17 - (longlong)FVar19 >> 4);
            if ((uVar13 != 0xffffffff) && (uVar13 != uVar20)) {
              ResolveSelectDuplicate(param_1,uVar20,uVar13,true);
            }
            break;
          }
          FVar16 = FVar17;
        } while (FVar17 != FVar19);
      }
      FVar16 = (param_1->DynamicConditionDescriptions).AllocatorInstance.SecondaryData;
      FVar19 = (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)
               &param_1->DynamicConditionDescriptions;
      if (FVar16 != (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0) {
        FVar19 = FVar16;
      }
      FVar16 = (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)
               ((longlong)(param_1->DynamicConditionDescriptions).ArrayNum * 0x10 + (longlong)FVar19
               );
      if (FVar19 != FVar16) {
        FVar17 = FVar19;
        do {
          uVar13 = 0;
          if ((int)uVar20 < (param_1->DynamicSelectionTypes).ArrayNum) {
            uVar13 = ~uVar20 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          FVar4 = (param_1->DynamicSelectionTypes).AllocatorInstance.SecondaryData;
          FVar9 = (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)pTVar2;
          if (FVar4 != (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0) {
            FVar9 = FVar4;
          }
          if ((*(longlong *)FVar17 == *(longlong *)((longlong)FVar9 + (longlong)(int)uVar20 * 0x10))
             && (*(longlong *)((longlong)FVar17 + 8) ==
                 *(longlong *)((uchar *)((longlong)FVar9 + 8) + (longlong)(int)uVar20 * 0x10))) {
            iVar12 = (int)((longlong)FVar17 - (longlong)FVar19 >> 4);
            if ((iVar12 != -1) &&
               (bVar6 = ResolveConditionSelectionDuplicate(param_1,uVar20,iVar12,true,param_2),
               !bVar6)) {
              return false;
            }
            break;
          }
          FVar17 = (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)
                   ((longlong)FVar17 + 0x10);
        } while (FVar17 != FVar16);
      }
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < (param_1->DynamicSelectionTypes).ArrayNum);
  }
  uVar20 = 0;
  if (0 < (param_1->ConditionOperators).ArrayNum) {
    do {
      iVar12 = (param_1->ConditionOperators).ArrayNum;
      if ((iVar12 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Count >= 0 && Count <= this->Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x55b,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      FVar18 = (param_1->ConditionOperators).AllocatorInstance.SecondaryData;
      FVar21 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)
               &param_1->ConditionOperators;
      if (FVar18 != (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)0x0) {
        FVar21 = FVar18;
      }
      FVar18 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)
               ((longlong)FVar21 + (longlong)iVar12 * 8);
      if (FVar18 != FVar21) {
        do {
          FVar18 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)
                   ((longlong)FVar18 + -8);
          uVar13 = 0;
          if ((int)uVar20 < (param_1->ConditionOperators).ArrayNum) {
            uVar13 = ~uVar20 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          FVar15 = (param_1->ConditionOperators).AllocatorInstance.SecondaryData;
          FVar11 = (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)
                   &param_1->ConditionOperators;
          if (FVar15 != (ForElementType<UE::Editor::DataStorage::FQueryDescription::FOperator>)0x0)
          {
            FVar11 = FVar15;
          }
          bVar6 = TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>::
                  UEOpEquals<UScriptStruct_const_,bool>
                            ((TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)FVar18,
                             (TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)
                             ((longlong)FVar11 + (longlong)(int)uVar20 * 8));
          if (bVar6) {
            uVar13 = (uint)((longlong)FVar18 - (longlong)FVar21 >> 3);
            if (((uVar13 != 0xffffffff) && (uVar13 != uVar20)) &&
               (bVar6 = ResolveConditionDuplicate(param_1,uVar20,uVar13,false,param_2), !bVar6)) {
              return false;
            }
            break;
          }
        } while (FVar18 != FVar21);
      }
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < (param_1->ConditionOperators).ArrayNum);
  }
  uVar20 = 0;
  if (0 < (param_1->DynamicConditionDescriptions).ArrayNum) {
    do {
      iVar12 = (param_1->DynamicConditionDescriptions).ArrayNum;
      if ((iVar12 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Count >= 0 && Count <= this->Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x55b,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      FVar16 = (param_1->DynamicConditionDescriptions).AllocatorInstance.SecondaryData;
      FVar19 = (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)
               &param_1->DynamicConditionDescriptions;
      if (FVar16 != (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0) {
        FVar19 = FVar16;
      }
      FVar16 = (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)
               ((longlong)iVar12 * 0x10 + (longlong)FVar19);
      if (FVar16 != FVar19) {
        do {
          FVar17 = (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)
                   ((longlong)FVar16 + -0x10);
          uVar13 = 0;
          if ((int)uVar20 < (param_1->DynamicConditionDescriptions).ArrayNum) {
            uVar13 = ~uVar20 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          FVar4 = (param_1->DynamicConditionDescriptions).AllocatorInstance.SecondaryData;
          FVar9 = (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)
                  &param_1->DynamicConditionDescriptions;
          if (FVar4 != (ForElementType<UE::Editor::DataStorage::FDynamicColumnDescription>)0x0) {
            FVar9 = FVar4;
          }
          if ((*(longlong *)FVar17 == *(longlong *)((longlong)FVar9 + (longlong)(int)uVar20 * 0x10))
             && (*(longlong *)((longlong)FVar16 + -8) ==
                 *(longlong *)((uchar *)((longlong)FVar9 + 8) + (longlong)(int)uVar20 * 0x10))) {
            uVar13 = (uint)((longlong)FVar17 - (longlong)FVar19 >> 4);
            if ((uVar13 != 0xffffffff) &&
               ((uVar13 != uVar20 &&
                (bVar6 = ResolveConditionDuplicate(param_1,uVar20,uVar13,true,param_2), !bVar6)))) {
              return false;
            }
            break;
          }
          FVar16 = FVar17;
        } while (FVar17 != FVar19);
      }
      uVar20 = uVar20 + 1;
    } while ((int)uVar20 < (param_1->DynamicConditionDescriptions).ArrayNum);
  }
  return true;
}

// ResolveSelectDuplicate @ 142cbaca0

/* WARNING: Removing unreachable block (ram,0x000142cbaeaf) */
/* WARNING: Removing unreachable block (ram,0x000142cbaec3) */

void __cdecl
UE::Editor::DataStorage::Queries::Private::ResolveSelectDuplicate
          (FQueryDescription *param_1,int param_2,int param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ForElementType<UE::Editor::DataStorage::EQueryAccessType> FVar4;
  char cVar5;
  ForElementType<UE::Editor::DataStorage::EQueryAccessType> FVar6;
  
  if (param_4) {
    FVar6 = (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)
            &param_1->DynamicSelectionAccessTypes;
    uVar3 = 0;
    if (param_2 < (param_1->DynamicSelectionAccessTypes).ArrayNum) {
      uVar3 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar4 = (param_1->DynamicSelectionAccessTypes).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0) {
      FVar4 = FVar6;
    }
    cVar5 = *(char *)((longlong)FVar4 + (longlong)param_2);
    uVar3 = 0;
    if (param_3 < (param_1->DynamicSelectionAccessTypes).ArrayNum) {
      uVar3 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar4 = (param_1->DynamicSelectionAccessTypes).AllocatorInstance.SecondaryData;
  }
  else {
    FVar6 = (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)
            &param_1->SelectionAccessTypes;
    uVar3 = 0;
    if (param_2 < (param_1->SelectionAccessTypes).ArrayNum) {
      uVar3 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar4 = (param_1->SelectionAccessTypes).AllocatorInstance.SecondaryData;
    if (FVar4 == (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0) {
      FVar4 = FVar6;
    }
    cVar5 = *(char *)((longlong)FVar4 + (longlong)param_2);
    uVar3 = 0;
    if (param_3 < (param_1->SelectionAccessTypes).ArrayNum) {
      uVar3 = (uint)~param_3 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar4 = (param_1->SelectionAccessTypes).AllocatorInstance.SecondaryData;
  }
  if (FVar4 == (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0) {
    FVar4 = FVar6;
  }
  if (cVar5 == '\0') {
    if (*(char *)((longlong)FVar4 + (longlong)param_3) == '\x02') goto LAB_142cbaef1;
  }
  else {
    if (cVar5 == '\x01') goto LAB_142cbaef1;
    if (cVar5 != '\x02') {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementQueryBuilder.cpp"
                         ,0x254,
                         L"Unknown EQueryAccessType value found when trying to resolve conditions.")
      ;
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementQueryBuilder.cpp"
                         ,0x2d9,
                         L"Unknown EQueryAccessType value found when trying to merge queries.");
      if (!bVar2) {
        return;
      }
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  param_2 = param_3;
LAB_142cbaef1:
  RemoveSelection(param_1,param_2,param_4);
  return;
}

// SetColumnValue @ 142cbaf40

void __cdecl
UE::Editor::DataStorage::ColumnUtils::SetColumnValue
          (void *param_1,UScriptStruct *param_2,FName param_3,FString *param_4)

{
  int iVar1;
  code *pcVar2;
  FFeedbackContext *pFVar3;
  bool bVar4;
  FProperty *this;
  wchar_t *pwVar5;
  
  this = UStruct::FindPropertyByName((UStruct *)param_2,param_3);
  if ((this != (FProperty *)0x0) ||
     (this = (FProperty *)(**(code **)(param_2->_padding_ + 0x308))(param_2),
     this != (FProperty *)0x0)) {
    pFVar3 = GWarn;
    if ((this->ArrayDim < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4)
       ) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pwVar5 = L"";
    if ((param_1 == (void *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar1 = this->Offset_Internal;
    if ((param_4->Data).ArrayNum != 0) {
      pwVar5 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
    }
    bVar4 = FProperty::ValidateImportFlags(this,0,(FOutputDevice *)pFVar3);
    if ((bVar4) && ((FScriptContainerElement *)pwVar5 != (FScriptContainerElement *)0x0)) {
      (**(code **)(this->_padding_ + 0xe8))
                (this,pwVar5,(longlong)iVar1 + (longlong)param_1,0,0,0x8000000,pFVar3);
    }
  }
  return;
}

// SetColumnValues @ 142cbb070

void __cdecl
UE::Editor::DataStorage::ColumnUtils::SetColumnValues
          (void *param_1,UScriptStruct *param_2,
          TArrayView<UE::Editor::DataStorage::ColumnUtils::Argument_const_,int> *param_3)

{
  Argument *pAVar1;
  int iVar2;
  code *pcVar3;
  FFeedbackContext *pFVar4;
  bool bVar5;
  FProperty *this;
  wchar_t *pwVar6;
  Argument *pAVar7;
  
  pAVar7 = param_3->DataPtr;
  pAVar1 = pAVar7 + param_3->ArrayNum;
  do {
    if (pAVar7 == pAVar1) {
      return;
    }
    this = UStruct::FindPropertyByName((UStruct *)param_2,pAVar7->Name);
    if ((this != (FProperty *)0x0) ||
       (this = (FProperty *)(**(code **)(param_2->_padding_ + 0x308))(param_2),
       this != (FProperty *)0x0)) {
      pFVar4 = GWarn;
      if ((this->ArrayDim < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((param_1 == (void *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContainerPtr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x2de,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar2 = this->Offset_Internal;
      if ((pAVar7->Value).Data.ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pAVar7->Value).Data.AllocatorInstance.Data;
      }
      bVar5 = FProperty::ValidateImportFlags(this,0,(FOutputDevice *)pFVar4);
      if ((bVar5) && ((FScriptContainerElement *)pwVar6 != (FScriptContainerElement *)0x0)) {
        (**(code **)(this->_padding_ + 0xe8))
                  (this,pwVar6,(longlong)iVar2 + (longlong)param_1,0,0,0x8000000,pFVar4);
      }
    }
    pAVar7 = pAVar7 + 1;
  } while( true );
}

// Type @ 142cc1030

UScriptStruct * __cdecl UE::Editor::DataStorage::Queries::Type(FTopLevelAssetPath *param_1)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UScriptStruct *pUVar4;
  FTopLevelAssetPath local_28;
  FString local_18;
  
  local_28.PackageName = param_1->PackageName;
  local_28.AssetName = param_1->AssetName;
  pUVar3 = Z_Construct_UClass_UScriptStruct_NoRegister();
  pUVar4 = (UScriptStruct *)StaticFindObject(pUVar3,&local_28,ExactClass);
  if (pUVar4 == (UScriptStruct *)0x0) {
    FTopLevelAssetPath::ToString(param_1,&local_18);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StructInfo",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\Elements\\Framework\\TypedElementQueryBuilder.cpp"
                       ,0x12,
                       L"Type name \'%s\' used as part of building a typed element query was not found."
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UScriptStruct *)(*pcVar1)();
      return pUVar4;
    }
  }
  return pUVar4;
}

// TypeOptional @ 142cc10e0

UScriptStruct * __cdecl UE::Editor::DataStorage::Queries::TypeOptional(FTopLevelAssetPath *param_1)

{
  UClass *pUVar1;
  UScriptStruct *pUVar2;
  FTopLevelAssetPath local_18;
  
  pUVar1 = Z_Construct_UClass_UScriptStruct_NoRegister();
  local_18.PackageName = param_1->PackageName;
  local_18.AssetName = param_1->AssetName;
  pUVar2 = (UScriptStruct *)StaticFindObject(pUVar1,&local_18,ExactClass);
  return pUVar2;
}

// Where @ 142cc25a0

FSimpleQuery __thiscall UE::Editor::DataStorage::Queries::Count::Where(Count *this)

{
  FQueryDescription *in_RDX;
  
  *(Count **)(in_RDX->Callback).BeforeGroups.AllocatorInstance.InlineData = this;
  return (FSimpleQuery)in_RDX;
}

// Where @ 142cc25b0

FQueryConditionQuery __thiscall
UE::Editor::DataStorage::Queries::Select::Where(Select *this,FConditions *param_1)

{
  FConditions *in_R8;
  
  TOptional<UE::Editor::DataStorage::Queries::FConditions>::
  Emplace<UE::Editor::DataStorage::Queries::FConditions_const_&>(&(this->Query).Conditions,in_R8);
  *(Select **)(param_1->Columns).AllocatorInstance.InlineData = this;
  return (FQueryConditionQuery)(FQueryDescription *)param_1;
}

// Where @ 142cc25f0

FSimpleQuery __thiscall UE::Editor::DataStorage::Queries::Select::Where(Select *this)

{
  FQueryDescription *in_RDX;
  
  *(Select **)(in_RDX->Callback).BeforeGroups.AllocatorInstance.InlineData = this;
  return (FSimpleQuery)in_RDX;
}

// Construct<FTest_PingPongDurPhys> @ 142cc4cb0

void __cdecl UE::CoreUObject::Private::Construct<FTest_PingPongDurPhys>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FTest_PingPongDurPhys> @ 142cc4cc0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTest_PingPongDurPhys>(void *param_1)

{
  return;
}

// Construct<FTest_PingPongPrePhys> @ 142cc5250

void __cdecl UE::CoreUObject::Private::Construct<FTest_PingPongPrePhys>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FTest_PingPongPrePhys> @ 142cc5260

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTest_PingPongPrePhys>(void *param_1)

{
  return;
}

// GetTestFlags @ 142ccc0f0

EAutomationTestFlags __thiscall
UE::Editor::DataStorage::Tests::QueryMergeTestFixture::GetTestFlags(QueryMergeTestFixture *this)

{
  return EngineFilter|EditorContext;
}

// GetTestSourceFileName @ 142ccc100

FString * __thiscall
UE::Editor::DataStorage::Tests::QueryMergeTestFixture::GetTestSourceFileName
          (QueryMergeTestFixture *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Tests\\Elements\\Framework\\TypedElementQueryMergeTests.cpp"
                    );
  return __return_storage_ptr__;
}

// GetTestSourceFileLine @ 142ccc130

int __thiscall
UE::Editor::DataStorage::Tests::QueryMergeTestFixture::GetTestSourceFileLine
          (QueryMergeTestFixture *this)

{
  return 0x11;
}

// GetBeautifiedTestName @ 142ccc140

FString * __thiscall
UE::Editor::DataStorage::Tests::QueryMergeTestFixture::GetBeautifiedTestName
          (QueryMergeTestFixture *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Editor.DataStorage.QueryMerge");
  return __return_storage_ptr__;
}

// Define @ 142ccc170

void __thiscall
UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define(QueryMergeTestFixture *this)

{
  FString local_48;
  code *local_38 [2];
  undefined **local_28;
  QueryMergeTestFixture *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_38[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = this;
  FAutomationSpecBase::BeforeEach
            ((FAutomationSpecBase *)this,(TFunction<void___cdecl(void)> *)local_38);
  local_10 = 0;
  local_28 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_38[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>,void>
                ::Call;
  local_20 = this;
  ::FString::FString(&local_48,"QueryMerge");
  FAutomationSpecBase::Describe
            ((FAutomationSpecBase *)this,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  local_10 = 0;
  local_28 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_38[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_3>,void>
                ::Call;
  local_20 = this;
  FAutomationSpecBase::AfterEach
            ((FAutomationSpecBase *)this,(TFunction<void___cdecl(void)> *)local_38);
  return;
}

// Construct<FTest_PingPongPostPhys> @ 142ccc5e0

void __cdecl UE::CoreUObject::Private::Construct<FTest_PingPongPostPhys>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FTest_PingPongPostPhys> @ 142ccc5f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTest_PingPongPostPhys>(void *param_1)

{
  return;
}

// AddColumnToSelect<FTEDSProcessorTestsReferenceColumn_*> @ 142cce000

void __cdecl
UE::Editor::DataStorage::Queries::Private::AddColumnToSelect<FTEDSProcessorTestsReferenceColumn_*>
          (Select *param_1)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = FTEDSProcessorTestsReferenceColumn::StaticStruct();
  Queries::Select::ReadWrite(param_1,pUVar1);
  return;
}

// AddColumnToSelect<FTest_PingPongDurPhys_*> @ 142cce030

void __cdecl
UE::Editor::DataStorage::Queries::Private::AddColumnToSelect<FTest_PingPongDurPhys_*>
          (Select *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTest_PingPongDurPhys.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FTest_PingPongDurPhys.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTest_PingPongDurPhys,(UObject *)pUVar1,
                         L"Test_PingPongDurPhys");
  }
  Queries::Select::ReadWrite
            (param_1,Z_Registration_Info_UScriptStruct_FTest_PingPongDurPhys.OuterSingleton);
  return;
}

// AddColumnToSelect<FTest_PingPongPostPhys_*> @ 142cce080

void __cdecl
UE::Editor::DataStorage::Queries::Private::AddColumnToSelect<FTest_PingPongPostPhys_*>
          (Select *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTest_PingPongPostPhys.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FTest_PingPongPostPhys.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTest_PingPongPostPhys,(UObject *)pUVar1,
                         L"Test_PingPongPostPhys");
  }
  Queries::Select::ReadWrite
            (param_1,Z_Registration_Info_UScriptStruct_FTest_PingPongPostPhys.OuterSingleton);
  return;
}

// AddColumnToSelect<FTest_PingPongPrePhys_*> @ 142cce0d0

void __cdecl
UE::Editor::DataStorage::Queries::Private::AddColumnToSelect<FTest_PingPongPrePhys_*>
          (Select *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTest_PingPongPrePhys,(UObject *)pUVar1,
                         L"Test_PingPongPrePhys");
  }
  Queries::Select::ReadWrite
            (param_1,Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.OuterSingleton);
  return;
}

// CalculatePrefix<signed_char> @ 142cd01a0

void __cdecl
UE::Editor::DataStorage::Private::CalculatePrefix<signed_char>
          (FPrefixInfo *param_1,int param_2,int param_3,schar *param_4)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  
  if (param_2 - param_3 < 8) {
    iVar1 = (param_3 - param_2) * 8 + 0x38;
    uVar3 = ((ulonglong)(byte)-(*param_4 >> 7) | 0x80) ^ (ulonglong)(byte)*param_4;
    bVar2 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar3 = uVar3 >> (-bVar2 & 0x3f);
    }
    else {
      uVar3 = uVar3 << (bVar2 & 0x3f);
    }
    param_1->Prefix = param_1->Prefix | uVar3;
    param_1->bHasRemainingBytes = 8 < (param_2 - param_3) + 1U;
  }
  return;
}

// CalculatePrefix<signed_char,unsigned_short_&,unsigned___int64_&> @ 142cd0210

void __cdecl
UE::Editor::DataStorage::Private::CalculatePrefix<signed_char,unsigned_short_&,unsigned___int64_&>
          (FPrefixInfo *param_1,int param_2,int param_3,schar *param_4,ushort *param_5,
          ulong64 *param_6)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  
  if (param_3 < param_2 + 1) {
    if (7 < param_2 - param_3) {
      return;
    }
    uVar3 = ((ulonglong)(byte)-(*param_4 >> 7) | 0x80) ^ (ulonglong)(byte)*param_4;
    iVar1 = (param_3 - param_2) * 8 + 0x38;
    bVar2 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar3 = uVar3 >> (-bVar2 & 0x3f);
    }
    else {
      uVar3 = uVar3 << (bVar2 & 0x3f);
    }
    param_1->Prefix = param_1->Prefix | uVar3;
  }
  CalculatePrefix<unsigned_short,unsigned___int64_&>(param_1,param_2 + 1,param_3,param_5,param_6);
  return;
}

// CalculatePrefix<signed_char,unsigned_short_const_&,unsigned___int64_const_&> @ 142cd0290

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<signed_char,unsigned_short_const_&,unsigned___int64_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,schar *param_4,ushort *param_5,
          ulong64 *param_6)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  
  if (param_3 < param_2 + 1) {
    if (7 < param_2 - param_3) {
      return;
    }
    uVar3 = ((ulonglong)(byte)-(*param_4 >> 7) | 0x80) ^ (ulonglong)(byte)*param_4;
    iVar1 = (param_3 - param_2) * 8 + 0x38;
    bVar2 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar3 = uVar3 >> (-bVar2 & 0x3f);
    }
    else {
      uVar3 = uVar3 << (bVar2 & 0x3f);
    }
    param_1->Prefix = param_1->Prefix | uVar3;
  }
  CalculatePrefix<unsigned_short,unsigned___int64_const_&>
            (param_1,param_2 + 1,param_3,param_5,param_6);
  return;
}

// CalculatePrefix<unsigned_char> @ 142cd0310

void __cdecl
UE::Editor::DataStorage::Private::CalculatePrefix<unsigned_char>
          (FPrefixInfo *param_1,int param_2,int param_3,uchar *param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = param_2 - param_3;
  if (iVar3 < 8) {
    iVar1 = (param_3 - param_2) * 8 + 0x38;
    bVar2 = (byte)iVar1;
    if (-1 < iVar1) {
      param_1->Prefix = param_1->Prefix | (ulonglong)*param_4 << (bVar2 & 0x3f);
      param_1->bHasRemainingBytes = 8 < iVar3 + 1U;
      return;
    }
    param_1->Prefix = param_1->Prefix | (ulonglong)(*param_4 >> (-bVar2 & 0x3f));
    param_1->bHasRemainingBytes = 8 < iVar3 + 1U;
  }
  return;
}

// CalculatePrefix<unsigned_char,unsigned_short_const_&> @ 142cd0370

void __cdecl
UE::Editor::DataStorage::Private::CalculatePrefix<unsigned_char,unsigned_short_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,uchar *param_4,ushort *param_5)

{
  byte bVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar5 = param_2 + 1;
  if (param_3 < iVar5) {
    if (param_2 - param_3 < 8) {
      iVar3 = (param_3 - param_2) * 8 + 0x38;
      bVar1 = (byte)iVar3;
      if (iVar3 < 0) {
        uVar2 = (ulonglong)(*param_4 >> (-bVar1 & 0x3f));
      }
      else {
        uVar2 = (ulonglong)*param_4 << (bVar1 & 0x3f);
      }
      uVar2 = uVar2 | param_1->Prefix;
      param_1->Prefix = uVar2;
      if (iVar5 - param_3 < 8) {
        iVar3 = (param_3 - iVar5) * 8 + 0x30;
        bVar1 = (byte)iVar3;
        if (iVar3 < 0) {
          uVar4 = (ulonglong)(*param_5 >> (-bVar1 & 0x3f));
        }
        else {
          uVar4 = (ulonglong)*param_5 << (bVar1 & 0x3f);
        }
        param_1->Prefix = uVar2 | uVar4;
        param_1->bHasRemainingBytes = 8 < (iVar5 - param_3) + 2U;
      }
    }
  }
  else {
    iVar3 = iVar5 - param_3;
    if (iVar3 < 8) {
      iVar5 = (param_3 - iVar5) * 8 + 0x30;
      bVar1 = (byte)iVar5;
      if (-1 < iVar5) {
        param_1->Prefix = param_1->Prefix | (ulonglong)*param_5 << (bVar1 & 0x3f);
        param_1->bHasRemainingBytes = 8 < iVar3 + 2U;
        return;
      }
      param_1->Prefix = param_1->Prefix | (ulonglong)(*param_5 >> (-bVar1 & 0x3f));
      param_1->bHasRemainingBytes = 8 < iVar3 + 2U;
      return;
    }
  }
  return;
}

// CalculatePrefix<unsigned_char,unsigned_short_const_&,unsigned_int_const_&> @ 142cd0460

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<unsigned_char,unsigned_short_const_&,unsigned_int_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,uchar *param_4,ushort *param_5,uint *param_6
          )

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  
  if (param_3 < param_2 + 1) {
    if (7 < param_2 - param_3) {
      return;
    }
    iVar1 = (param_3 - param_2) * 8 + 0x38;
    bVar2 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar3 = (ulonglong)(*param_4 >> (-bVar2 & 0x3f));
    }
    else {
      uVar3 = (ulonglong)*param_4 << (bVar2 & 0x3f);
    }
    param_1->Prefix = param_1->Prefix | uVar3;
  }
  CalculatePrefix<unsigned_short,unsigned_int_const_&>(param_1,param_2 + 1,param_3,param_5,param_6);
  return;
}

// CalculatePrefix<unsigned_char,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&> @ 142cd04c0

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<unsigned_char,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,uchar *param_4,ushort *param_5,uint *param_6
          ,ulong64 *param_7)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar5 = param_2 + 1;
  if (param_3 < iVar5) {
    if (7 < param_2 - param_3) {
      return;
    }
    iVar1 = (param_3 - param_2) * 8 + 0x38;
    bVar2 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar3 = (ulonglong)(*param_4 >> (-bVar2 & 0x3f));
    }
    else {
      uVar3 = (ulonglong)*param_4 << (bVar2 & 0x3f);
    }
    uVar3 = uVar3 | param_1->Prefix;
    param_1->Prefix = uVar3;
    if (param_3 < param_2 + 3) {
      if (7 < iVar5 - param_3) {
        return;
      }
      iVar5 = (param_3 - iVar5) * 8 + 0x30;
      bVar2 = (byte)iVar5;
      if (iVar5 < 0) {
        uVar4 = (ulonglong)(*param_5 >> (-bVar2 & 0x3f));
      }
      else {
        uVar4 = (ulonglong)*param_5 << (bVar2 & 0x3f);
      }
      param_1->Prefix = uVar4 | uVar3;
    }
  }
  else if (param_3 < param_2 + 3) {
    if (7 < iVar5 - param_3) {
      return;
    }
    iVar5 = (param_3 - iVar5) * 8 + 0x30;
    bVar2 = (byte)iVar5;
    if (iVar5 < 0) {
      param_1->Prefix = param_1->Prefix | (ulonglong)(*param_5 >> (-bVar2 & 0x3f));
    }
    else {
      param_1->Prefix = param_1->Prefix | (ulonglong)*param_5 << (bVar2 & 0x3f);
    }
  }
  CalculatePrefix<unsigned_int,unsigned___int64_const_&>
            (param_1,param_2 + 3,param_3,param_6,param_7);
  return;
}

// CalculatePrefix<unsigned_char,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&> @ 142cd05b0

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<unsigned_char,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,uchar *param_4,ushort *param_5,uint *param_6
          ,ulong64 *param_7,ushort *param_8)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  
  if (param_3 < param_2 + 1) {
    if (7 < param_2 - param_3) {
      return;
    }
    iVar1 = (param_3 - param_2) * 8 + 0x38;
    bVar2 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar3 = (ulonglong)(*param_4 >> (-bVar2 & 0x3f));
    }
    else {
      uVar3 = (ulonglong)*param_4 << (bVar2 & 0x3f);
    }
    param_1->Prefix = param_1->Prefix | uVar3;
  }
  CalculatePrefix<unsigned_short,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&>
            (param_1,param_2 + 1,param_3,param_5,param_6,param_7,param_8);
  return;
}

// CalculatePrefix<unsigned_char,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&> @ 142cd0630

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<unsigned_char,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,uchar *param_4,ushort *param_5,uint *param_6
          ,ulong64 *param_7,ushort *param_8,uchar *param_9)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = param_2 + 1;
  if (param_3 < iVar4) {
    if (param_2 - param_3 < 8) {
      iVar1 = (param_3 - param_2) * 8 + 0x38;
      bVar2 = (byte)iVar1;
      if (iVar1 < 0) {
        uVar3 = (ulonglong)(*param_4 >> (-bVar2 & 0x3f));
      }
      else {
        uVar3 = (ulonglong)*param_4 << (bVar2 & 0x3f);
      }
      param_1->Prefix = param_1->Prefix | uVar3;
      CalculatePrefix<unsigned_short,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&>
                (param_1,iVar4,param_3,param_5,param_6,param_7,param_8,param_9);
    }
  }
  else {
    iVar1 = param_2 + 3;
    if (iVar1 <= param_3) {
      CalculatePrefix<unsigned_int,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&>
                (param_1,iVar1,param_3,param_6,param_7,param_8,param_9);
      return;
    }
    if (iVar4 - param_3 < 8) {
      iVar4 = (param_3 - iVar4) * 8 + 0x30;
      bVar2 = (byte)iVar4;
      if (iVar4 < 0) {
        uVar3 = (ulonglong)(*param_5 >> (-bVar2 & 0x3f));
      }
      else {
        uVar3 = (ulonglong)*param_5 << (bVar2 & 0x3f);
      }
      param_1->Prefix = param_1->Prefix | uVar3;
      CalculatePrefix<unsigned_int,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&>
                (param_1,iVar1,param_3,param_6,param_7,param_8,param_9);
      return;
    }
  }
  return;
}

// CalculatePrefix<unsigned_char,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&,unsigned_short_const_&> @ 142cd0780

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<unsigned_char,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&,unsigned_short_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,uchar *param_4,ushort *param_5,uint *param_6
          ,ulong64 *param_7,ushort *param_8,uchar *param_9,ushort *param_10)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  
  if (param_3 < param_2 + 1) {
    if (7 < param_2 - param_3) {
      return;
    }
    iVar1 = (param_3 - param_2) * 8 + 0x38;
    bVar2 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar3 = (ulonglong)(*param_4 >> (-bVar2 & 0x3f));
    }
    else {
      uVar3 = (ulonglong)*param_4 << (bVar2 & 0x3f);
    }
    param_1->Prefix = param_1->Prefix | uVar3;
  }
  CalculatePrefix<unsigned_short,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&,unsigned_short_const_&>
            (param_1,param_2 + 1,param_3,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}

// CalculatePrefix<short> @ 142cd0820

void __cdecl
UE::Editor::DataStorage::Private::CalculatePrefix<short>
          (FPrefixInfo *param_1,int param_2,int param_3,short *param_4)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  
  if (param_2 - param_3 < 8) {
    iVar1 = (param_3 - param_2) * 8 + 0x30;
    uVar3 = ((ulonglong)(ushort)-(*param_4 >> 0xf) | 0x8000) ^ (ulonglong)(ushort)*param_4;
    bVar2 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar3 = uVar3 >> (-bVar2 & 0x3f);
    }
    else {
      uVar3 = uVar3 << (bVar2 & 0x3f);
    }
    param_1->Prefix = param_1->Prefix | uVar3;
    param_1->bHasRemainingBytes = 8 < (param_2 - param_3) + 2U;
  }
  return;
}

// CalculatePrefix<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_&> @ 142cd0890

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_&>
          (FPrefixInfo *param_1,int param_2,int param_3,short *param_4,
          TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>
          *param_5)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  FPrefixInfo *pFVar16;
  byte bVar17;
  ulonglong uVar18;
  int iVar19;
  TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_> local_28;
  FPrefixInfo local_18;
  
  iVar19 = param_2 + 2;
  if (param_3 < iVar19) {
    if (7 < param_2 - param_3) {
      return;
    }
    uVar18 = ((ulonglong)(ushort)-(*param_4 >> 0xf) | 0x8000) ^ (ulonglong)(ushort)*param_4;
    iVar1 = (param_3 - param_2) * 8 + 0x30;
    bVar17 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar18 = uVar18 >> (-bVar17 & 0x3f);
    }
    else {
      uVar18 = uVar18 << (bVar17 & 0x3f);
    }
    param_1->Prefix = param_1->Prefix | uVar18;
  }
  if (1 < (int)(8 - (iVar19 - param_3 & 7U))) {
    local_28.View.DataPtr = (param_5->View).DataPtr;
    local_28.View.Size = (param_5->View).Size;
    local_28.View._12_4_ = *(undefined4 *)&(param_5->View).field_0xc;
    pFVar16 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
              ::CalculatePrefix(&local_18,iVar19,param_3,&local_28);
    bVar17 = *(byte *)((longlong)&pFVar16->Prefix + 1);
    bVar2 = *(byte *)((longlong)&pFVar16->Prefix + 2);
    bVar3 = *(byte *)((longlong)&pFVar16->Prefix + 3);
    bVar4 = *(byte *)((longlong)&pFVar16->Prefix + 4);
    bVar5 = *(byte *)((longlong)&pFVar16->Prefix + 5);
    bVar6 = *(byte *)((longlong)&pFVar16->Prefix + 6);
    bVar7 = *(byte *)((longlong)&pFVar16->Prefix + 7);
    bVar8 = pFVar16->bHasRemainingBytes;
    bVar9 = *(byte *)((longlong)&param_1->Prefix + 1);
    bVar10 = *(byte *)((longlong)&param_1->Prefix + 2);
    bVar11 = *(byte *)((longlong)&param_1->Prefix + 3);
    bVar12 = *(byte *)((longlong)&param_1->Prefix + 4);
    bVar13 = *(byte *)((longlong)&param_1->Prefix + 5);
    bVar14 = *(byte *)((longlong)&param_1->Prefix + 6);
    bVar15 = *(byte *)((longlong)&param_1->Prefix + 7);
    *(byte *)&param_1->Prefix = (byte)param_1->Prefix | (byte)pFVar16->Prefix;
    *(byte *)((longlong)&param_1->Prefix + 1) = bVar9 | bVar17;
    *(byte *)((longlong)&param_1->Prefix + 2) = bVar10 | bVar2;
    *(byte *)((longlong)&param_1->Prefix + 3) = bVar11 | bVar3;
    *(byte *)((longlong)&param_1->Prefix + 4) = bVar12 | bVar4;
    *(byte *)((longlong)&param_1->Prefix + 5) = bVar13 | bVar5;
    *(byte *)((longlong)&param_1->Prefix + 6) = bVar14 | bVar6;
    *(byte *)((longlong)&param_1->Prefix + 7) = bVar15 | bVar7;
    param_1->bHasRemainingBytes = bVar8;
  }
  return;
}

// CalculatePrefix<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_const_&> @ 142cd0950

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<short,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,short *param_4,
          TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>
          *param_5)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  FPrefixInfo *pFVar16;
  byte bVar17;
  ulonglong uVar18;
  int iVar19;
  TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_> local_28;
  FPrefixInfo local_18;
  
  iVar19 = param_2 + 2;
  if (param_3 < iVar19) {
    if (7 < param_2 - param_3) {
      return;
    }
    uVar18 = ((ulonglong)(ushort)-(*param_4 >> 0xf) | 0x8000) ^ (ulonglong)(ushort)*param_4;
    iVar1 = (param_3 - param_2) * 8 + 0x30;
    bVar17 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar18 = uVar18 >> (-bVar17 & 0x3f);
    }
    else {
      uVar18 = uVar18 << (bVar17 & 0x3f);
    }
    param_1->Prefix = param_1->Prefix | uVar18;
  }
  if (1 < (int)(8 - (iVar19 - param_3 & 7U))) {
    local_28.View.DataPtr = (param_5->View).DataPtr;
    local_28.View.Size = (param_5->View).Size;
    local_28.View._12_4_ = *(undefined4 *)&(param_5->View).field_0xc;
    pFVar16 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
              ::CalculatePrefix(&local_18,iVar19,param_3,&local_28);
    bVar17 = *(byte *)((longlong)&pFVar16->Prefix + 1);
    bVar2 = *(byte *)((longlong)&pFVar16->Prefix + 2);
    bVar3 = *(byte *)((longlong)&pFVar16->Prefix + 3);
    bVar4 = *(byte *)((longlong)&pFVar16->Prefix + 4);
    bVar5 = *(byte *)((longlong)&pFVar16->Prefix + 5);
    bVar6 = *(byte *)((longlong)&pFVar16->Prefix + 6);
    bVar7 = *(byte *)((longlong)&pFVar16->Prefix + 7);
    bVar8 = pFVar16->bHasRemainingBytes;
    bVar9 = *(byte *)((longlong)&param_1->Prefix + 1);
    bVar10 = *(byte *)((longlong)&param_1->Prefix + 2);
    bVar11 = *(byte *)((longlong)&param_1->Prefix + 3);
    bVar12 = *(byte *)((longlong)&param_1->Prefix + 4);
    bVar13 = *(byte *)((longlong)&param_1->Prefix + 5);
    bVar14 = *(byte *)((longlong)&param_1->Prefix + 6);
    bVar15 = *(byte *)((longlong)&param_1->Prefix + 7);
    *(byte *)&param_1->Prefix = (byte)param_1->Prefix | (byte)pFVar16->Prefix;
    *(byte *)((longlong)&param_1->Prefix + 1) = bVar9 | bVar17;
    *(byte *)((longlong)&param_1->Prefix + 2) = bVar10 | bVar2;
    *(byte *)((longlong)&param_1->Prefix + 3) = bVar11 | bVar3;
    *(byte *)((longlong)&param_1->Prefix + 4) = bVar12 | bVar4;
    *(byte *)((longlong)&param_1->Prefix + 5) = bVar13 | bVar5;
    *(byte *)((longlong)&param_1->Prefix + 6) = bVar14 | bVar6;
    *(byte *)((longlong)&param_1->Prefix + 7) = bVar15 | bVar7;
    param_1->bHasRemainingBytes = bVar8;
  }
  return;
}

// CalculatePrefix<unsigned_short> @ 142cd0a10

void __cdecl
UE::Editor::DataStorage::Private::CalculatePrefix<unsigned_short>
          (FPrefixInfo *param_1,int param_2,int param_3,ushort *param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = param_2 - param_3;
  if (iVar3 < 8) {
    iVar1 = (param_3 - param_2) * 8 + 0x30;
    bVar2 = (byte)iVar1;
    if (-1 < iVar1) {
      param_1->Prefix = param_1->Prefix | (ulonglong)*param_4 << (bVar2 & 0x3f);
      param_1->bHasRemainingBytes = 8 < iVar3 + 2U;
      return;
    }
    param_1->Prefix = param_1->Prefix | (ulonglong)(*param_4 >> (-bVar2 & 0x3f));
    param_1->bHasRemainingBytes = 8 < iVar3 + 2U;
  }
  return;
}

// CalculatePrefix<unsigned_short,unsigned___int64_&> @ 142cd0a70

void __cdecl
UE::Editor::DataStorage::Private::CalculatePrefix<unsigned_short,unsigned___int64_&>
          (FPrefixInfo *param_1,int param_2,int param_3,ushort *param_4,ulong64 *param_5)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  
  iVar6 = param_2 + 2;
  if (param_3 < iVar6) {
    if (param_2 - param_3 < 8) {
      iVar4 = (param_3 - param_2) * 8 + 0x30;
      bVar2 = (byte)iVar4;
      if (iVar4 < 0) {
        uVar3 = (ulonglong)(*param_4 >> (-bVar2 & 0x3f));
      }
      else {
        uVar3 = (ulonglong)*param_4 << (bVar2 & 0x3f);
      }
      uVar3 = uVar3 | param_1->Prefix;
      param_1->Prefix = uVar3;
      if (iVar6 - param_3 < 8) {
        cVar1 = (char)(param_3 - iVar6);
        if ((param_3 - iVar6) * 8 < 0) {
          uVar5 = *param_5 >> (cVar1 * -8 & 0x3fU);
        }
        else {
          uVar5 = *param_5 << (cVar1 * '\b' & 0x3fU);
        }
        param_1->Prefix = uVar3 | uVar5;
        param_1->bHasRemainingBytes = 8 < (iVar6 - param_3) + 8U;
      }
    }
  }
  else {
    iVar4 = iVar6 - param_3;
    if (iVar4 < 8) {
      cVar1 = (char)(param_3 - iVar6);
      if (-1 < (param_3 - iVar6) * 8) {
        param_1->Prefix = param_1->Prefix | *param_5 << (cVar1 * '\b' & 0x3fU);
        param_1->bHasRemainingBytes = 8 < iVar4 + 8U;
        return;
      }
      param_1->Prefix = param_1->Prefix | *param_5 >> (cVar1 * -8 & 0x3fU);
      param_1->bHasRemainingBytes = 8 < iVar4 + 8U;
      return;
    }
  }
  return;
}

// CalculatePrefix<unsigned_short,unsigned_char_const_&> @ 142cd0b70

void __cdecl
UE::Editor::DataStorage::Private::CalculatePrefix<unsigned_short,unsigned_char_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,ushort *param_4,uchar *param_5)

{
  byte bVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar5 = param_2 + 2;
  if (param_3 < iVar5) {
    if (param_2 - param_3 < 8) {
      iVar3 = (param_3 - param_2) * 8 + 0x30;
      bVar1 = (byte)iVar3;
      if (iVar3 < 0) {
        uVar2 = (ulonglong)(*param_4 >> (-bVar1 & 0x3f));
      }
      else {
        uVar2 = (ulonglong)*param_4 << (bVar1 & 0x3f);
      }
      uVar2 = uVar2 | param_1->Prefix;
      param_1->Prefix = uVar2;
      if (iVar5 - param_3 < 8) {
        iVar3 = (param_3 - iVar5) * 8 + 0x38;
        bVar1 = (byte)iVar3;
        if (iVar3 < 0) {
          uVar4 = (ulonglong)(*param_5 >> (-bVar1 & 0x3f));
        }
        else {
          uVar4 = (ulonglong)*param_5 << (bVar1 & 0x3f);
        }
        param_1->Prefix = uVar2 | uVar4;
        param_1->bHasRemainingBytes = 8 < (iVar5 - param_3) + 1U;
      }
    }
  }
  else {
    iVar3 = iVar5 - param_3;
    if (iVar3 < 8) {
      iVar5 = (param_3 - iVar5) * 8 + 0x38;
      bVar1 = (byte)iVar5;
      if (-1 < iVar5) {
        param_1->Prefix = param_1->Prefix | (ulonglong)*param_5 << (bVar1 & 0x3f);
        param_1->bHasRemainingBytes = 8 < iVar3 + 1U;
        return;
      }
      param_1->Prefix = param_1->Prefix | (ulonglong)(*param_5 >> (-bVar1 & 0x3f));
      param_1->bHasRemainingBytes = 8 < iVar3 + 1U;
      return;
    }
  }
  return;
}

// CalculatePrefix<unsigned_short,unsigned_char_const_&,unsigned_short_const_&> @ 142cd0c60

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<unsigned_short,unsigned_char_const_&,unsigned_short_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,ushort *param_4,uchar *param_5,
          ushort *param_6)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  
  if (param_3 < param_2 + 2) {
    if (7 < param_2 - param_3) {
      return;
    }
    iVar1 = (param_3 - param_2) * 8 + 0x30;
    bVar2 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar3 = (ulonglong)(*param_4 >> (-bVar2 & 0x3f));
    }
    else {
      uVar3 = (ulonglong)*param_4 << (bVar2 & 0x3f);
    }
    param_1->Prefix = param_1->Prefix | uVar3;
  }
  CalculatePrefix<unsigned_char,unsigned_short_const_&>(param_1,param_2 + 2,param_3,param_5,param_6)
  ;
  return;
}

// CalculatePrefix<unsigned_short,unsigned_int_const_&> @ 142cd0cc0

void __cdecl
UE::Editor::DataStorage::Private::CalculatePrefix<unsigned_short,unsigned_int_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,ushort *param_4,uint *param_5)

{
  byte bVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar5 = param_2 + 2;
  if (param_3 < iVar5) {
    if (param_2 - param_3 < 8) {
      iVar3 = (param_3 - param_2) * 8 + 0x30;
      bVar1 = (byte)iVar3;
      if (iVar3 < 0) {
        uVar2 = (ulonglong)(*param_4 >> (-bVar1 & 0x3f));
      }
      else {
        uVar2 = (ulonglong)*param_4 << (bVar1 & 0x3f);
      }
      uVar2 = uVar2 | param_1->Prefix;
      param_1->Prefix = uVar2;
      if (iVar5 - param_3 < 8) {
        iVar3 = (param_3 - iVar5) * 8 + 0x20;
        bVar1 = (byte)iVar3;
        if (iVar3 < 0) {
          uVar4 = (ulonglong)(*param_5 >> (-bVar1 & 0x3f));
        }
        else {
          uVar4 = (ulonglong)*param_5 << (bVar1 & 0x3f);
        }
        param_1->Prefix = uVar2 | uVar4;
        param_1->bHasRemainingBytes = 8 < (iVar5 - param_3) + 4U;
      }
    }
  }
  else {
    iVar3 = iVar5 - param_3;
    if (iVar3 < 8) {
      iVar5 = (param_3 - iVar5) * 8 + 0x20;
      bVar1 = (byte)iVar5;
      if (-1 < iVar5) {
        param_1->Prefix = param_1->Prefix | (ulonglong)*param_5 << (bVar1 & 0x3f);
        param_1->bHasRemainingBytes = 8 < iVar3 + 4U;
        return;
      }
      param_1->Prefix = param_1->Prefix | (ulonglong)(*param_5 >> (-bVar1 & 0x3f));
      param_1->bHasRemainingBytes = 8 < iVar3 + 4U;
      return;
    }
  }
  return;
}

// CalculatePrefix<unsigned_short,unsigned_int_const_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_const_&> @ 142cd0db0

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<unsigned_short,unsigned_int_const_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,ushort *param_4,uint *param_5,
          TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>
          *param_6)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  
  if (param_3 < param_2 + 2) {
    if (7 < param_2 - param_3) {
      return;
    }
    iVar1 = (param_3 - param_2) * 8 + 0x30;
    bVar2 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar3 = (ulonglong)(*param_4 >> (-bVar2 & 0x3f));
    }
    else {
      uVar3 = (ulonglong)*param_4 << (bVar2 & 0x3f);
    }
    param_1->Prefix = param_1->Prefix | uVar3;
  }
  CalculatePrefix<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_const_&>
            (param_1,param_2 + 2,param_3,param_5,param_6);
  return;
}

// CalculatePrefix<unsigned_short,unsigned_int_const_&,unsigned___int64_const_&> @ 142cd0e10

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<unsigned_short,unsigned_int_const_&,unsigned___int64_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,ushort *param_4,uint *param_5,
          ulong64 *param_6)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  
  if (param_3 < param_2 + 2) {
    if (7 < param_2 - param_3) {
      return;
    }
    iVar1 = (param_3 - param_2) * 8 + 0x30;
    bVar2 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar3 = (ulonglong)(*param_4 >> (-bVar2 & 0x3f));
    }
    else {
      uVar3 = (ulonglong)*param_4 << (bVar2 & 0x3f);
    }
    param_1->Prefix = param_1->Prefix | uVar3;
  }
  CalculatePrefix<unsigned_int,unsigned___int64_const_&>
            (param_1,param_2 + 2,param_3,param_5,param_6);
  return;
}

// CalculatePrefix<unsigned_short,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&> @ 142cd0e70

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<unsigned_short,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,ushort *param_4,uint *param_5,
          ulong64 *param_6,ushort *param_7)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar5 = param_2 + 2;
  if (param_3 < iVar5) {
    if (7 < param_2 - param_3) {
      return;
    }
    iVar1 = (param_3 - param_2) * 8 + 0x30;
    bVar2 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar3 = (ulonglong)(*param_4 >> (-bVar2 & 0x3f));
    }
    else {
      uVar3 = (ulonglong)*param_4 << (bVar2 & 0x3f);
    }
    uVar3 = uVar3 | param_1->Prefix;
    param_1->Prefix = uVar3;
    if (param_3 < param_2 + 6) {
      if (7 < iVar5 - param_3) {
        return;
      }
      iVar5 = (param_3 - iVar5) * 8 + 0x20;
      bVar2 = (byte)iVar5;
      if (iVar5 < 0) {
        uVar4 = (ulonglong)(*param_5 >> (-bVar2 & 0x3f));
      }
      else {
        uVar4 = (ulonglong)*param_5 << (bVar2 & 0x3f);
      }
      param_1->Prefix = uVar4 | uVar3;
    }
  }
  else if (param_3 < param_2 + 6) {
    if (7 < iVar5 - param_3) {
      return;
    }
    iVar5 = (param_3 - iVar5) * 8 + 0x20;
    bVar2 = (byte)iVar5;
    if (iVar5 < 0) {
      param_1->Prefix = param_1->Prefix | (ulonglong)(*param_5 >> (-bVar2 & 0x3f));
    }
    else {
      param_1->Prefix = param_1->Prefix | (ulonglong)*param_5 << (bVar2 & 0x3f);
    }
  }
  CalculatePrefix<unsigned___int64,unsigned_short_const_&>
            (param_1,param_2 + 6,param_3,param_6,param_7);
  return;
}

// CalculatePrefix<unsigned_short,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&> @ 142cd0f60

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<unsigned_short,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,ushort *param_4,uint *param_5,
          ulong64 *param_6,ushort *param_7,uchar *param_8)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  
  if (param_3 < param_2 + 2) {
    if (7 < param_2 - param_3) {
      return;
    }
    iVar1 = (param_3 - param_2) * 8 + 0x30;
    bVar2 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar3 = (ulonglong)(*param_4 >> (-bVar2 & 0x3f));
    }
    else {
      uVar3 = (ulonglong)*param_4 << (bVar2 & 0x3f);
    }
    param_1->Prefix = param_1->Prefix | uVar3;
  }
  CalculatePrefix<unsigned_int,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&>
            (param_1,param_2 + 2,param_3,param_5,param_6,param_7,param_8);
  return;
}

// CalculatePrefix<unsigned_short,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&,unsigned_short_const_&> @ 142cd0fe0

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<unsigned_short,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&,unsigned_short_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,ushort *param_4,uint *param_5,
          ulong64 *param_6,ushort *param_7,uchar *param_8,ushort *param_9)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = param_2 + 2;
  if (param_3 < iVar4) {
    if (param_2 - param_3 < 8) {
      iVar1 = (param_3 - param_2) * 8 + 0x30;
      bVar2 = (byte)iVar1;
      if (iVar1 < 0) {
        uVar3 = (ulonglong)(*param_4 >> (-bVar2 & 0x3f));
      }
      else {
        uVar3 = (ulonglong)*param_4 << (bVar2 & 0x3f);
      }
      param_1->Prefix = param_1->Prefix | uVar3;
      CalculatePrefix<unsigned_int,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&,unsigned_short_const_&>
                (param_1,iVar4,param_3,param_5,param_6,param_7,param_8,param_9);
    }
  }
  else {
    iVar1 = param_2 + 6;
    if (iVar1 <= param_3) {
      CalculatePrefix<unsigned___int64,unsigned_short_const_&,unsigned_char_const_&,unsigned_short_const_&>
                (param_1,iVar1,param_3,param_6,param_7,param_8,param_9);
      return;
    }
    if (iVar4 - param_3 < 8) {
      iVar4 = (param_3 - iVar4) * 8 + 0x20;
      bVar2 = (byte)iVar4;
      if (iVar4 < 0) {
        uVar3 = (ulonglong)(*param_5 >> (-bVar2 & 0x3f));
      }
      else {
        uVar3 = (ulonglong)*param_5 << (bVar2 & 0x3f);
      }
      param_1->Prefix = param_1->Prefix | uVar3;
      CalculatePrefix<unsigned___int64,unsigned_short_const_&,unsigned_char_const_&,unsigned_short_const_&>
                (param_1,iVar1,param_3,param_6,param_7,param_8,param_9);
      return;
    }
  }
  return;
}

// CalculatePrefix<unsigned_short,unsigned___int64_const_&> @ 142cd1130

void __cdecl
UE::Editor::DataStorage::Private::CalculatePrefix<unsigned_short,unsigned___int64_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,ushort *param_4,ulong64 *param_5)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  
  iVar6 = param_2 + 2;
  if (param_3 < iVar6) {
    if (param_2 - param_3 < 8) {
      iVar4 = (param_3 - param_2) * 8 + 0x30;
      bVar2 = (byte)iVar4;
      if (iVar4 < 0) {
        uVar3 = (ulonglong)(*param_4 >> (-bVar2 & 0x3f));
      }
      else {
        uVar3 = (ulonglong)*param_4 << (bVar2 & 0x3f);
      }
      uVar3 = uVar3 | param_1->Prefix;
      param_1->Prefix = uVar3;
      if (iVar6 - param_3 < 8) {
        cVar1 = (char)(param_3 - iVar6);
        if ((param_3 - iVar6) * 8 < 0) {
          uVar5 = *param_5 >> (cVar1 * -8 & 0x3fU);
        }
        else {
          uVar5 = *param_5 << (cVar1 * '\b' & 0x3fU);
        }
        param_1->Prefix = uVar3 | uVar5;
        param_1->bHasRemainingBytes = 8 < (iVar6 - param_3) + 8U;
      }
    }
  }
  else {
    iVar4 = iVar6 - param_3;
    if (iVar4 < 8) {
      cVar1 = (char)(param_3 - iVar6);
      if (-1 < (param_3 - iVar6) * 8) {
        param_1->Prefix = param_1->Prefix | *param_5 << (cVar1 * '\b' & 0x3fU);
        param_1->bHasRemainingBytes = 8 < iVar4 + 8U;
        return;
      }
      param_1->Prefix = param_1->Prefix | *param_5 >> (cVar1 * -8 & 0x3fU);
      param_1->bHasRemainingBytes = 8 < iVar4 + 8U;
      return;
    }
  }
  return;
}

// CalculatePrefix<int> @ 142cd1230

void __cdecl
UE::Editor::DataStorage::Private::CalculatePrefix<int>
          (FPrefixInfo *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  
  if (param_2 - param_3 < 8) {
    iVar1 = (param_3 - param_2) * 8 + 0x20;
    uVar3 = ((ulonglong)(uint)-(*param_4 >> 0x1f) | 0x80000000) ^ (ulonglong)(uint)*param_4;
    bVar2 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar3 = uVar3 >> (-bVar2 & 0x3f);
    }
    else {
      uVar3 = uVar3 << (bVar2 & 0x3f);
    }
    param_1->Prefix = param_1->Prefix | uVar3;
    param_1->bHasRemainingBytes = 8 < (param_2 - param_3) + 4U;
  }
  return;
}

// CalculatePrefix<unsigned_int> @ 142cd12a0

void __cdecl
UE::Editor::DataStorage::Private::CalculatePrefix<unsigned_int>
          (FPrefixInfo *param_1,int param_2,int param_3,uint *param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = param_2 - param_3;
  if (iVar3 < 8) {
    iVar1 = (param_3 - param_2) * 8 + 0x20;
    bVar2 = (byte)iVar1;
    if (-1 < iVar1) {
      param_1->Prefix = param_1->Prefix | (ulonglong)*param_4 << (bVar2 & 0x3f);
      param_1->bHasRemainingBytes = 8 < iVar3 + 4U;
      return;
    }
    param_1->Prefix = param_1->Prefix | (ulonglong)(*param_4 >> (-bVar2 & 0x3f));
    param_1->bHasRemainingBytes = 8 < iVar3 + 4U;
  }
  return;
}

// CalculatePrefix<unsigned_int,unsigned_int_&> @ 142cd1300

void __cdecl
UE::Editor::DataStorage::Private::CalculatePrefix<unsigned_int,unsigned_int_&>
          (FPrefixInfo *param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  byte bVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar5 = param_2 + 4;
  if (param_3 < iVar5) {
    if (param_2 - param_3 < 8) {
      iVar3 = (param_3 - param_2) * 8 + 0x20;
      bVar1 = (byte)iVar3;
      if (iVar3 < 0) {
        uVar2 = (ulonglong)(*param_4 >> (-bVar1 & 0x3f));
      }
      else {
        uVar2 = (ulonglong)*param_4 << (bVar1 & 0x3f);
      }
      uVar2 = uVar2 | param_1->Prefix;
      param_1->Prefix = uVar2;
      if (iVar5 - param_3 < 8) {
        iVar3 = (param_3 - iVar5) * 8 + 0x20;
        bVar1 = (byte)iVar3;
        if (iVar3 < 0) {
          uVar4 = (ulonglong)(*param_5 >> (-bVar1 & 0x3f));
        }
        else {
          uVar4 = (ulonglong)*param_5 << (bVar1 & 0x3f);
        }
        param_1->Prefix = uVar2 | uVar4;
        param_1->bHasRemainingBytes = 8 < (iVar5 - param_3) + 4U;
      }
    }
  }
  else {
    iVar3 = iVar5 - param_3;
    if (iVar3 < 8) {
      iVar5 = (param_3 - iVar5) * 8 + 0x20;
      bVar1 = (byte)iVar5;
      if (-1 < iVar5) {
        param_1->Prefix = param_1->Prefix | (ulonglong)*param_5 << (bVar1 & 0x3f);
        param_1->bHasRemainingBytes = 8 < iVar3 + 4U;
        return;
      }
      param_1->Prefix = param_1->Prefix | (ulonglong)(*param_5 >> (-bVar1 & 0x3f));
      param_1->bHasRemainingBytes = 8 < iVar3 + 4U;
      return;
    }
  }
  return;
}

// CalculatePrefix<unsigned_int,unsigned_int_&,unsigned_int_&> @ 142cd13f0

void __cdecl
UE::Editor::DataStorage::Private::CalculatePrefix<unsigned_int,unsigned_int_&,unsigned_int_&>
          (FPrefixInfo *param_1,int param_2,int param_3,uint *param_4,uint *param_5,uint *param_6)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  
  if (param_3 < param_2 + 4) {
    if (7 < param_2 - param_3) {
      return;
    }
    iVar1 = (param_3 - param_2) * 8 + 0x20;
    bVar2 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar3 = (ulonglong)(*param_4 >> (-bVar2 & 0x3f));
    }
    else {
      uVar3 = (ulonglong)*param_4 << (bVar2 & 0x3f);
    }
    param_1->Prefix = param_1->Prefix | uVar3;
  }
  CalculatePrefix<unsigned_int,unsigned_int_&>(param_1,param_2 + 4,param_3,param_5,param_6);
  return;
}

// CalculatePrefix<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_&> @ 142cd1450

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_&>
          (FPrefixInfo *param_1,int param_2,int param_3,uint *param_4,
          TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>
          *param_5)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  FPrefixInfo *pFVar16;
  byte bVar17;
  ulonglong uVar18;
  int iVar19;
  TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_> local_28;
  FPrefixInfo local_18;
  
  iVar19 = param_2 + 4;
  if (param_3 < iVar19) {
    if (7 < param_2 - param_3) {
      return;
    }
    iVar1 = (param_3 - param_2) * 8 + 0x20;
    bVar17 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar18 = (ulonglong)(*param_4 >> (-bVar17 & 0x3f));
    }
    else {
      uVar18 = (ulonglong)*param_4 << (bVar17 & 0x3f);
    }
    param_1->Prefix = param_1->Prefix | uVar18;
  }
  if (1 < (int)(8 - (iVar19 - param_3 & 7U))) {
    local_28.View.DataPtr = (param_5->View).DataPtr;
    local_28.View.Size = (param_5->View).Size;
    local_28.View._12_4_ = *(undefined4 *)&(param_5->View).field_0xc;
    pFVar16 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
              ::CalculatePrefix(&local_18,iVar19,param_3,&local_28);
    bVar17 = *(byte *)((longlong)&pFVar16->Prefix + 1);
    bVar2 = *(byte *)((longlong)&pFVar16->Prefix + 2);
    bVar3 = *(byte *)((longlong)&pFVar16->Prefix + 3);
    bVar4 = *(byte *)((longlong)&pFVar16->Prefix + 4);
    bVar5 = *(byte *)((longlong)&pFVar16->Prefix + 5);
    bVar6 = *(byte *)((longlong)&pFVar16->Prefix + 6);
    bVar7 = *(byte *)((longlong)&pFVar16->Prefix + 7);
    bVar8 = pFVar16->bHasRemainingBytes;
    bVar9 = *(byte *)((longlong)&param_1->Prefix + 1);
    bVar10 = *(byte *)((longlong)&param_1->Prefix + 2);
    bVar11 = *(byte *)((longlong)&param_1->Prefix + 3);
    bVar12 = *(byte *)((longlong)&param_1->Prefix + 4);
    bVar13 = *(byte *)((longlong)&param_1->Prefix + 5);
    bVar14 = *(byte *)((longlong)&param_1->Prefix + 6);
    bVar15 = *(byte *)((longlong)&param_1->Prefix + 7);
    *(byte *)&param_1->Prefix = (byte)param_1->Prefix | (byte)pFVar16->Prefix;
    *(byte *)((longlong)&param_1->Prefix + 1) = bVar9 | bVar17;
    *(byte *)((longlong)&param_1->Prefix + 2) = bVar10 | bVar2;
    *(byte *)((longlong)&param_1->Prefix + 3) = bVar11 | bVar3;
    *(byte *)((longlong)&param_1->Prefix + 4) = bVar12 | bVar4;
    *(byte *)((longlong)&param_1->Prefix + 5) = bVar13 | bVar5;
    *(byte *)((longlong)&param_1->Prefix + 6) = bVar14 | bVar6;
    *(byte *)((longlong)&param_1->Prefix + 7) = bVar15 | bVar7;
    param_1->bHasRemainingBytes = bVar8;
  }
  return;
}

// CalculatePrefix<unsigned_int,unsigned_char_const_&> @ 142cd14f0

void __cdecl
UE::Editor::DataStorage::Private::CalculatePrefix<unsigned_int,unsigned_char_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,uint *param_4,uchar *param_5)

{
  byte bVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar5 = param_2 + 4;
  if (param_3 < iVar5) {
    if (param_2 - param_3 < 8) {
      iVar3 = (param_3 - param_2) * 8 + 0x20;
      bVar1 = (byte)iVar3;
      if (iVar3 < 0) {
        uVar2 = (ulonglong)(*param_4 >> (-bVar1 & 0x3f));
      }
      else {
        uVar2 = (ulonglong)*param_4 << (bVar1 & 0x3f);
      }
      uVar2 = uVar2 | param_1->Prefix;
      param_1->Prefix = uVar2;
      if (iVar5 - param_3 < 8) {
        iVar3 = (param_3 - iVar5) * 8 + 0x38;
        bVar1 = (byte)iVar3;
        if (iVar3 < 0) {
          uVar4 = (ulonglong)(*param_5 >> (-bVar1 & 0x3f));
        }
        else {
          uVar4 = (ulonglong)*param_5 << (bVar1 & 0x3f);
        }
        param_1->Prefix = uVar2 | uVar4;
        param_1->bHasRemainingBytes = 8 < (iVar5 - param_3) + 1U;
      }
    }
  }
  else {
    iVar3 = iVar5 - param_3;
    if (iVar3 < 8) {
      iVar5 = (param_3 - iVar5) * 8 + 0x38;
      bVar1 = (byte)iVar5;
      if (-1 < iVar5) {
        param_1->Prefix = param_1->Prefix | (ulonglong)*param_5 << (bVar1 & 0x3f);
        param_1->bHasRemainingBytes = 8 < iVar3 + 1U;
        return;
      }
      param_1->Prefix = param_1->Prefix | (ulonglong)(*param_5 >> (-bVar1 & 0x3f));
      param_1->bHasRemainingBytes = 8 < iVar3 + 1U;
      return;
    }
  }
  return;
}

// CalculatePrefix<unsigned_int,unsigned_char_const_&,unsigned_short_const_&> @ 142cd15e0

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<unsigned_int,unsigned_char_const_&,unsigned_short_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,uint *param_4,uchar *param_5,ushort *param_6
          )

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  
  if (param_3 < param_2 + 4) {
    if (7 < param_2 - param_3) {
      return;
    }
    iVar1 = (param_3 - param_2) * 8 + 0x20;
    bVar2 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar3 = (ulonglong)(*param_4 >> (-bVar2 & 0x3f));
    }
    else {
      uVar3 = (ulonglong)*param_4 << (bVar2 & 0x3f);
    }
    param_1->Prefix = param_1->Prefix | uVar3;
  }
  CalculatePrefix<unsigned_char,unsigned_short_const_&>(param_1,param_2 + 4,param_3,param_5,param_6)
  ;
  return;
}

// CalculatePrefix<unsigned_int,unsigned_char_const_&,unsigned_short_const_&,unsigned_int_const_&> @ 142cd1640

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<unsigned_int,unsigned_char_const_&,unsigned_short_const_&,unsigned_int_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,uint *param_4,uchar *param_5,ushort *param_6
          ,uint *param_7)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar5 = param_2 + 4;
  if (param_3 < iVar5) {
    if (7 < param_2 - param_3) {
      return;
    }
    iVar1 = (param_3 - param_2) * 8 + 0x20;
    bVar2 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar3 = (ulonglong)(*param_4 >> (-bVar2 & 0x3f));
    }
    else {
      uVar3 = (ulonglong)*param_4 << (bVar2 & 0x3f);
    }
    uVar3 = uVar3 | param_1->Prefix;
    param_1->Prefix = uVar3;
    if (param_3 < param_2 + 5) {
      if (7 < iVar5 - param_3) {
        return;
      }
      iVar5 = (param_3 - iVar5) * 8 + 0x38;
      bVar2 = (byte)iVar5;
      if (iVar5 < 0) {
        uVar4 = (ulonglong)(*param_5 >> (-bVar2 & 0x3f));
      }
      else {
        uVar4 = (ulonglong)*param_5 << (bVar2 & 0x3f);
      }
      param_1->Prefix = uVar4 | uVar3;
    }
  }
  else if (param_3 < param_2 + 5) {
    if (7 < iVar5 - param_3) {
      return;
    }
    iVar5 = (param_3 - iVar5) * 8 + 0x38;
    bVar2 = (byte)iVar5;
    if (iVar5 < 0) {
      param_1->Prefix = param_1->Prefix | (ulonglong)(*param_5 >> (-bVar2 & 0x3f));
    }
    else {
      param_1->Prefix = param_1->Prefix | (ulonglong)*param_5 << (bVar2 & 0x3f);
    }
  }
  CalculatePrefix<unsigned_short,unsigned_int_const_&>(param_1,param_2 + 5,param_3,param_6,param_7);
  return;
}

// CalculatePrefix<unsigned_int,unsigned_char_const_&,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&> @ 142cd1730

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<unsigned_int,unsigned_char_const_&,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,uint *param_4,uchar *param_5,ushort *param_6
          ,uint *param_7,ulong64 *param_8)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  
  if (param_3 < param_2 + 4) {
    if (7 < param_2 - param_3) {
      return;
    }
    iVar1 = (param_3 - param_2) * 8 + 0x20;
    bVar2 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar3 = (ulonglong)(*param_4 >> (-bVar2 & 0x3f));
    }
    else {
      uVar3 = (ulonglong)*param_4 << (bVar2 & 0x3f);
    }
    param_1->Prefix = param_1->Prefix | uVar3;
  }
  CalculatePrefix<unsigned_char,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&>
            (param_1,param_2 + 4,param_3,param_5,param_6,param_7,param_8);
  return;
}

// CalculatePrefix<unsigned_int,unsigned_char_const_&,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&> @ 142cd17b0

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<unsigned_int,unsigned_char_const_&,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,uint *param_4,uchar *param_5,ushort *param_6
          ,uint *param_7,ulong64 *param_8,ushort *param_9)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = param_2 + 4;
  if (param_3 < iVar4) {
    if (param_2 - param_3 < 8) {
      iVar1 = (param_3 - param_2) * 8 + 0x20;
      bVar2 = (byte)iVar1;
      if (iVar1 < 0) {
        uVar3 = (ulonglong)(*param_4 >> (-bVar2 & 0x3f));
      }
      else {
        uVar3 = (ulonglong)*param_4 << (bVar2 & 0x3f);
      }
      param_1->Prefix = param_1->Prefix | uVar3;
      CalculatePrefix<unsigned_char,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&>
                (param_1,iVar4,param_3,param_5,param_6,param_7,param_8,param_9);
    }
  }
  else {
    iVar1 = param_2 + 5;
    if (iVar1 <= param_3) {
      CalculatePrefix<unsigned_short,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&>
                (param_1,iVar1,param_3,param_6,param_7,param_8,param_9);
      return;
    }
    if (iVar4 - param_3 < 8) {
      iVar4 = (param_3 - iVar4) * 8 + 0x38;
      bVar2 = (byte)iVar4;
      if (iVar4 < 0) {
        uVar3 = (ulonglong)(*param_5 >> (-bVar2 & 0x3f));
      }
      else {
        uVar3 = (ulonglong)*param_5 << (bVar2 & 0x3f);
      }
      param_1->Prefix = param_1->Prefix | uVar3;
      CalculatePrefix<unsigned_short,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&>
                (param_1,iVar1,param_3,param_6,param_7,param_8,param_9);
      return;
    }
  }
  return;
}

// CalculatePrefix<unsigned_int,unsigned_char_const_&,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&> @ 142cd1900

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<unsigned_int,unsigned_char_const_&,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,uint *param_4,uchar *param_5,ushort *param_6
          ,uint *param_7,ulong64 *param_8,ushort *param_9,uchar *param_10)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  
  if (param_3 < param_2 + 4) {
    if (7 < param_2 - param_3) {
      return;
    }
    iVar1 = (param_3 - param_2) * 8 + 0x20;
    bVar2 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar3 = (ulonglong)(*param_4 >> (-bVar2 & 0x3f));
    }
    else {
      uVar3 = (ulonglong)*param_4 << (bVar2 & 0x3f);
    }
    param_1->Prefix = param_1->Prefix | uVar3;
  }
  CalculatePrefix<unsigned_char,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&>
            (param_1,param_2 + 4,param_3,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}

// CalculatePrefix<unsigned_int,unsigned_char_const_&,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&,unsigned_short_const_&> @ 142cd19a0

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<unsigned_int,unsigned_char_const_&,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&,unsigned_short_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,uint *param_4,uchar *param_5,ushort *param_6
          ,uint *param_7,ulong64 *param_8,ushort *param_9,uchar *param_10,ushort *param_11)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  
  if (param_3 < param_2 + 4) {
    if (7 < param_2 - param_3) {
      return;
    }
    iVar1 = (param_3 - param_2) * 8 + 0x20;
    bVar2 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar3 = (ulonglong)(*param_4 >> (-bVar2 & 0x3f));
    }
    else {
      uVar3 = (ulonglong)*param_4 << (bVar2 & 0x3f);
    }
    param_1->Prefix = param_1->Prefix | uVar3;
  }
  CalculatePrefix<unsigned_char,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&,unsigned_short_const_&>
            (param_1,param_2 + 4,param_3,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  return;
}

// CalculatePrefix<unsigned_int,unsigned_int_const_&> @ 142cd1a50

void __cdecl
UE::Editor::DataStorage::Private::CalculatePrefix<unsigned_int,unsigned_int_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  byte bVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar5 = param_2 + 4;
  if (param_3 < iVar5) {
    if (param_2 - param_3 < 8) {
      iVar3 = (param_3 - param_2) * 8 + 0x20;
      bVar1 = (byte)iVar3;
      if (iVar3 < 0) {
        uVar2 = (ulonglong)(*param_4 >> (-bVar1 & 0x3f));
      }
      else {
        uVar2 = (ulonglong)*param_4 << (bVar1 & 0x3f);
      }
      uVar2 = uVar2 | param_1->Prefix;
      param_1->Prefix = uVar2;
      if (iVar5 - param_3 < 8) {
        iVar3 = (param_3 - iVar5) * 8 + 0x20;
        bVar1 = (byte)iVar3;
        if (iVar3 < 0) {
          uVar4 = (ulonglong)(*param_5 >> (-bVar1 & 0x3f));
        }
        else {
          uVar4 = (ulonglong)*param_5 << (bVar1 & 0x3f);
        }
        param_1->Prefix = uVar2 | uVar4;
        param_1->bHasRemainingBytes = 8 < (iVar5 - param_3) + 4U;
      }
    }
  }
  else {
    iVar3 = iVar5 - param_3;
    if (iVar3 < 8) {
      iVar5 = (param_3 - iVar5) * 8 + 0x20;
      bVar1 = (byte)iVar5;
      if (-1 < iVar5) {
        param_1->Prefix = param_1->Prefix | (ulonglong)*param_5 << (bVar1 & 0x3f);
        param_1->bHasRemainingBytes = 8 < iVar3 + 4U;
        return;
      }
      param_1->Prefix = param_1->Prefix | (ulonglong)(*param_5 >> (-bVar1 & 0x3f));
      param_1->bHasRemainingBytes = 8 < iVar3 + 4U;
      return;
    }
  }
  return;
}

// CalculatePrefix<unsigned_int,unsigned_int_const_&,unsigned_int_const_&> @ 142cd1b40

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<unsigned_int,unsigned_int_const_&,unsigned_int_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,uint *param_4,uint *param_5,uint *param_6)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  
  if (param_3 < param_2 + 4) {
    if (7 < param_2 - param_3) {
      return;
    }
    iVar1 = (param_3 - param_2) * 8 + 0x20;
    bVar2 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar3 = (ulonglong)(*param_4 >> (-bVar2 & 0x3f));
    }
    else {
      uVar3 = (ulonglong)*param_4 << (bVar2 & 0x3f);
    }
    param_1->Prefix = param_1->Prefix | uVar3;
  }
  CalculatePrefix<unsigned_int,unsigned_int_const_&>(param_1,param_2 + 4,param_3,param_5,param_6);
  return;
}

// CalculatePrefix<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_const_&> @ 142cd1ba0

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,uint *param_4,
          TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>
          *param_5)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  FPrefixInfo *pFVar16;
  byte bVar17;
  ulonglong uVar18;
  int iVar19;
  TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_> local_28;
  FPrefixInfo local_18;
  
  iVar19 = param_2 + 4;
  if (param_3 < iVar19) {
    if (7 < param_2 - param_3) {
      return;
    }
    iVar1 = (param_3 - param_2) * 8 + 0x20;
    bVar17 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar18 = (ulonglong)(*param_4 >> (-bVar17 & 0x3f));
    }
    else {
      uVar18 = (ulonglong)*param_4 << (bVar17 & 0x3f);
    }
    param_1->Prefix = param_1->Prefix | uVar18;
  }
  if (1 < (int)(8 - (iVar19 - param_3 & 7U))) {
    local_28.View.DataPtr = (param_5->View).DataPtr;
    local_28.View.Size = (param_5->View).Size;
    local_28.View._12_4_ = *(undefined4 *)&(param_5->View).field_0xc;
    pFVar16 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
              ::CalculatePrefix(&local_18,iVar19,param_3,&local_28);
    bVar17 = *(byte *)((longlong)&pFVar16->Prefix + 1);
    bVar2 = *(byte *)((longlong)&pFVar16->Prefix + 2);
    bVar3 = *(byte *)((longlong)&pFVar16->Prefix + 3);
    bVar4 = *(byte *)((longlong)&pFVar16->Prefix + 4);
    bVar5 = *(byte *)((longlong)&pFVar16->Prefix + 5);
    bVar6 = *(byte *)((longlong)&pFVar16->Prefix + 6);
    bVar7 = *(byte *)((longlong)&pFVar16->Prefix + 7);
    bVar8 = pFVar16->bHasRemainingBytes;
    bVar9 = *(byte *)((longlong)&param_1->Prefix + 1);
    bVar10 = *(byte *)((longlong)&param_1->Prefix + 2);
    bVar11 = *(byte *)((longlong)&param_1->Prefix + 3);
    bVar12 = *(byte *)((longlong)&param_1->Prefix + 4);
    bVar13 = *(byte *)((longlong)&param_1->Prefix + 5);
    bVar14 = *(byte *)((longlong)&param_1->Prefix + 6);
    bVar15 = *(byte *)((longlong)&param_1->Prefix + 7);
    *(byte *)&param_1->Prefix = (byte)param_1->Prefix | (byte)pFVar16->Prefix;
    *(byte *)((longlong)&param_1->Prefix + 1) = bVar9 | bVar17;
    *(byte *)((longlong)&param_1->Prefix + 2) = bVar10 | bVar2;
    *(byte *)((longlong)&param_1->Prefix + 3) = bVar11 | bVar3;
    *(byte *)((longlong)&param_1->Prefix + 4) = bVar12 | bVar4;
    *(byte *)((longlong)&param_1->Prefix + 5) = bVar13 | bVar5;
    *(byte *)((longlong)&param_1->Prefix + 6) = bVar14 | bVar6;
    *(byte *)((longlong)&param_1->Prefix + 7) = bVar15 | bVar7;
    param_1->bHasRemainingBytes = bVar8;
  }
  return;
}

// CalculatePrefix<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_const_&> @ 142cd1c40

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,uint *param_4,
          TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>
          *param_5)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  FPrefixInfo *pFVar16;
  byte bVar17;
  ulonglong uVar18;
  int iVar19;
  TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_> local_28;
  FPrefixInfo local_18;
  
  iVar19 = param_2 + 4;
  if (param_3 < iVar19) {
    if (7 < param_2 - param_3) {
      return;
    }
    iVar1 = (param_3 - param_2) * 8 + 0x20;
    bVar17 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar18 = (ulonglong)(*param_4 >> (-bVar17 & 0x3f));
    }
    else {
      uVar18 = (ulonglong)*param_4 << (bVar17 & 0x3f);
    }
    param_1->Prefix = param_1->Prefix | uVar18;
  }
  if (1 < (int)(8 - (iVar19 - param_3 & 7U))) {
    local_28.View.DataPtr = (param_5->View).DataPtr;
    local_28.View.Size = (param_5->View).Size;
    local_28.View._12_4_ = *(undefined4 *)&(param_5->View).field_0xc;
    pFVar16 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
              ::CalculatePrefix(&local_18,iVar19,param_3,&local_28);
    bVar17 = *(byte *)((longlong)&pFVar16->Prefix + 1);
    bVar2 = *(byte *)((longlong)&pFVar16->Prefix + 2);
    bVar3 = *(byte *)((longlong)&pFVar16->Prefix + 3);
    bVar4 = *(byte *)((longlong)&pFVar16->Prefix + 4);
    bVar5 = *(byte *)((longlong)&pFVar16->Prefix + 5);
    bVar6 = *(byte *)((longlong)&pFVar16->Prefix + 6);
    bVar7 = *(byte *)((longlong)&pFVar16->Prefix + 7);
    bVar8 = pFVar16->bHasRemainingBytes;
    bVar9 = *(byte *)((longlong)&param_1->Prefix + 1);
    bVar10 = *(byte *)((longlong)&param_1->Prefix + 2);
    bVar11 = *(byte *)((longlong)&param_1->Prefix + 3);
    bVar12 = *(byte *)((longlong)&param_1->Prefix + 4);
    bVar13 = *(byte *)((longlong)&param_1->Prefix + 5);
    bVar14 = *(byte *)((longlong)&param_1->Prefix + 6);
    bVar15 = *(byte *)((longlong)&param_1->Prefix + 7);
    *(byte *)&param_1->Prefix = (byte)param_1->Prefix | (byte)pFVar16->Prefix;
    *(byte *)((longlong)&param_1->Prefix + 1) = bVar9 | bVar17;
    *(byte *)((longlong)&param_1->Prefix + 2) = bVar10 | bVar2;
    *(byte *)((longlong)&param_1->Prefix + 3) = bVar11 | bVar3;
    *(byte *)((longlong)&param_1->Prefix + 4) = bVar12 | bVar4;
    *(byte *)((longlong)&param_1->Prefix + 5) = bVar13 | bVar5;
    *(byte *)((longlong)&param_1->Prefix + 6) = bVar14 | bVar6;
    *(byte *)((longlong)&param_1->Prefix + 7) = bVar15 | bVar7;
    param_1->bHasRemainingBytes = bVar8;
  }
  return;
}

// CalculatePrefix<unsigned_int,unsigned___int64_const_&> @ 142cd1ce0

void __cdecl
UE::Editor::DataStorage::Private::CalculatePrefix<unsigned_int,unsigned___int64_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,uint *param_4,ulong64 *param_5)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  
  iVar6 = param_2 + 4;
  if (param_3 < iVar6) {
    if (param_2 - param_3 < 8) {
      iVar4 = (param_3 - param_2) * 8 + 0x20;
      bVar2 = (byte)iVar4;
      if (iVar4 < 0) {
        uVar3 = (ulonglong)(*param_4 >> (-bVar2 & 0x3f));
      }
      else {
        uVar3 = (ulonglong)*param_4 << (bVar2 & 0x3f);
      }
      uVar3 = uVar3 | param_1->Prefix;
      param_1->Prefix = uVar3;
      if (iVar6 - param_3 < 8) {
        cVar1 = (char)(param_3 - iVar6);
        if ((param_3 - iVar6) * 8 < 0) {
          uVar5 = *param_5 >> (cVar1 * -8 & 0x3fU);
        }
        else {
          uVar5 = *param_5 << (cVar1 * '\b' & 0x3fU);
        }
        param_1->Prefix = uVar3 | uVar5;
        param_1->bHasRemainingBytes = 8 < (iVar6 - param_3) + 8U;
      }
    }
  }
  else {
    iVar4 = iVar6 - param_3;
    if (iVar4 < 8) {
      cVar1 = (char)(param_3 - iVar6);
      if (-1 < (param_3 - iVar6) * 8) {
        param_1->Prefix = param_1->Prefix | *param_5 << (cVar1 * '\b' & 0x3fU);
        param_1->bHasRemainingBytes = 8 < iVar4 + 8U;
        return;
      }
      param_1->Prefix = param_1->Prefix | *param_5 >> (cVar1 * -8 & 0x3fU);
      param_1->bHasRemainingBytes = 8 < iVar4 + 8U;
      return;
    }
  }
  return;
}

// CalculatePrefix<unsigned_int,unsigned___int64_const_&,unsigned_short_const_&> @ 142cd1de0

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<unsigned_int,unsigned___int64_const_&,unsigned_short_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,uint *param_4,ulong64 *param_5,
          ushort *param_6)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  
  if (param_3 < param_2 + 4) {
    if (7 < param_2 - param_3) {
      return;
    }
    iVar1 = (param_3 - param_2) * 8 + 0x20;
    bVar2 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar3 = (ulonglong)(*param_4 >> (-bVar2 & 0x3f));
    }
    else {
      uVar3 = (ulonglong)*param_4 << (bVar2 & 0x3f);
    }
    param_1->Prefix = param_1->Prefix | uVar3;
  }
  CalculatePrefix<unsigned___int64,unsigned_short_const_&>
            (param_1,param_2 + 4,param_3,param_5,param_6);
  return;
}

// CalculatePrefix<unsigned_int,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&> @ 142cd1e40

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<unsigned_int,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,uint *param_4,ulong64 *param_5,
          ushort *param_6,uchar *param_7)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  
  iVar6 = param_2 + 4;
  if (param_3 < iVar6) {
    if (7 < param_2 - param_3) {
      return;
    }
    iVar1 = (param_3 - param_2) * 8 + 0x20;
    bVar3 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar4 = (ulonglong)(*param_4 >> (-bVar3 & 0x3f));
    }
    else {
      uVar4 = (ulonglong)*param_4 << (bVar3 & 0x3f);
    }
    uVar4 = uVar4 | param_1->Prefix;
    param_1->Prefix = uVar4;
    if (param_3 < param_2 + 0xc) {
      if (7 < iVar6 - param_3) {
        return;
      }
      cVar2 = (char)(param_3 - iVar6);
      if ((param_3 - iVar6) * 8 < 0) {
        uVar5 = *param_5 >> (cVar2 * -8 & 0x3fU);
      }
      else {
        uVar5 = *param_5 << (cVar2 * '\b' & 0x3fU);
      }
      param_1->Prefix = uVar4 | uVar5;
    }
  }
  else if (param_3 < param_2 + 0xc) {
    if (7 < iVar6 - param_3) {
      return;
    }
    cVar2 = (char)(param_3 - iVar6);
    if ((param_3 - iVar6) * 8 < 0) {
      param_1->Prefix = param_1->Prefix | *param_5 >> (cVar2 * -8 & 0x3fU);
    }
    else {
      param_1->Prefix = param_1->Prefix | *param_5 << (cVar2 * '\b' & 0x3fU);
    }
  }
  CalculatePrefix<unsigned_short,unsigned_char_const_&>
            (param_1,param_2 + 0xc,param_3,param_6,param_7);
  return;
}

// CalculatePrefix<unsigned_int,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&,unsigned_short_const_&> @ 142cd1f20

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<unsigned_int,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&,unsigned_short_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,uint *param_4,ulong64 *param_5,
          ushort *param_6,uchar *param_7,ushort *param_8)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  
  if (param_3 < param_2 + 4) {
    if (7 < param_2 - param_3) {
      return;
    }
    iVar1 = (param_3 - param_2) * 8 + 0x20;
    bVar2 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar3 = (ulonglong)(*param_4 >> (-bVar2 & 0x3f));
    }
    else {
      uVar3 = (ulonglong)*param_4 << (bVar2 & 0x3f);
    }
    param_1->Prefix = param_1->Prefix | uVar3;
  }
  CalculatePrefix<unsigned___int64,unsigned_short_const_&,unsigned_char_const_&,unsigned_short_const_&>
            (param_1,param_2 + 4,param_3,param_5,param_6,param_7,param_8);
  return;
}

// CalculatePrefix<float> @ 142cd1fa0

void __cdecl
UE::Editor::DataStorage::Private::CalculatePrefix<float>
          (FPrefixInfo *param_1,int param_2,int param_3,float *param_4)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  
  if (param_2 - param_3 < 8) {
    iVar1 = (param_3 - param_2) * 8 + 0x20;
    uVar3 = ((ulonglong)(uint)((int)*param_4 >> 0x1f) | 0x80000000) ^ (ulonglong)(uint)*param_4;
    bVar2 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar3 = uVar3 >> (-bVar2 & 0x3f);
    }
    else {
      uVar3 = uVar3 << (bVar2 & 0x3f);
    }
    param_1->Prefix = param_1->Prefix | uVar3;
    param_1->bHasRemainingBytes = 8 < (param_2 - param_3) + 4U;
  }
  return;
}

// CalculatePrefix<double> @ 142cd2010

void __cdecl
UE::Editor::DataStorage::Private::CalculatePrefix<double>
          (FPrefixInfo *param_1,int param_2,int param_3,double *param_4)

{
  char cVar1;
  ulonglong uVar2;
  
  if (param_2 - param_3 < 8) {
    cVar1 = (char)(param_3 - param_2);
    uVar2 = ((longlong)*param_4 >> 0x3f | 0x8000000000000000U) ^ (ulonglong)*param_4;
    if ((param_3 - param_2) * 8 < 0) {
      uVar2 = uVar2 >> (cVar1 * -8 & 0x3fU);
    }
    else {
      uVar2 = uVar2 << (cVar1 * '\b' & 0x3fU);
    }
    param_1->Prefix = param_1->Prefix | uVar2;
    param_1->bHasRemainingBytes = 8 < (param_2 - param_3) + 8U;
  }
  return;
}

// CalculatePrefix<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_> @ 142cd2090

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_>
          (FPrefixInfo *param_1,int param_2,int param_3,
          TSortNameView<UE::Editor::DataStorage::TSortByName<0>_> *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  ulong64 uVar16;
  FPrefixInfo *pFVar17;
  TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_> local_58;
  FPrefixInfo local_48;
  FName *local_38;
  FString local_30;
  char local_20;
  
  if ((param_4->View != (FName *)0x0) && (param_4->bIsCached == false)) {
    ::FString::Reset(&param_4->Cache,0);
    if (*param_4->View != (FName)0x0) {
      ::FName::ToString(param_4->View,&param_4->Cache);
    }
    param_4->bIsCached = true;
  }
  if (1 < (int)(8 - (param_2 - param_3 & 7U))) {
    local_38 = param_4->View;
    ::FString::FString(&local_30,&param_4->Cache);
    local_20 = param_4->bIsCached;
    if ((local_38 != (FName *)0x0) && ((bool)local_20 == false)) {
      ::FString::Reset(&local_30,0);
      if (*local_38 != (FName)0x0) {
        ::FName::ToString(local_38,&local_30);
      }
      local_20 = '\x01';
    }
    local_58.View.Size = local_30.Data.ArrayNum + -1;
    if (local_30.Data.ArrayNum == 0) {
      local_58.View.Size = 0;
    }
    local_58.View.DataPtr = (wchar_t *)local_30.Data.AllocatorInstance.Data;
    pFVar17 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
              ::CalculatePrefix(&local_48,param_2,param_3,&local_58);
    uVar16 = pFVar17->Prefix;
    bVar1 = *(byte *)((longlong)&pFVar17->Prefix + 1);
    bVar2 = *(byte *)((longlong)&pFVar17->Prefix + 2);
    bVar3 = *(byte *)((longlong)&pFVar17->Prefix + 3);
    bVar4 = *(byte *)((longlong)&pFVar17->Prefix + 4);
    bVar5 = *(byte *)((longlong)&pFVar17->Prefix + 5);
    bVar6 = *(byte *)((longlong)&pFVar17->Prefix + 6);
    bVar7 = *(byte *)((longlong)&pFVar17->Prefix + 7);
    bVar8 = pFVar17->bHasRemainingBytes;
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    bVar9 = *(byte *)((longlong)&param_1->Prefix + 1);
    bVar10 = *(byte *)((longlong)&param_1->Prefix + 2);
    bVar11 = *(byte *)((longlong)&param_1->Prefix + 3);
    bVar12 = *(byte *)((longlong)&param_1->Prefix + 4);
    bVar13 = *(byte *)((longlong)&param_1->Prefix + 5);
    bVar14 = *(byte *)((longlong)&param_1->Prefix + 6);
    bVar15 = *(byte *)((longlong)&param_1->Prefix + 7);
    *(byte *)&param_1->Prefix = (byte)param_1->Prefix | (byte)uVar16;
    *(byte *)((longlong)&param_1->Prefix + 1) = bVar9 | bVar1;
    *(byte *)((longlong)&param_1->Prefix + 2) = bVar10 | bVar2;
    *(byte *)((longlong)&param_1->Prefix + 3) = bVar11 | bVar3;
    *(byte *)((longlong)&param_1->Prefix + 4) = bVar12 | bVar4;
    *(byte *)((longlong)&param_1->Prefix + 5) = bVar13 | bVar5;
    *(byte *)((longlong)&param_1->Prefix + 6) = bVar14 | bVar6;
    *(byte *)((longlong)&param_1->Prefix + 7) = bVar15 | bVar7;
    param_1->bHasRemainingBytes = bVar8;
  }
  return;
}

// CalculatePrefix<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_> @ 142cd21f0

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_>
          (FPrefixInfo *param_1,int param_2,int param_3,
          TSortNameView<UE::Editor::DataStorage::FSortById> *param_4)

{
  int iVar1;
  TSortNameView<UE::Editor::DataStorage::FSortById> TVar2;
  byte bVar3;
  ulonglong uVar4;
  uint uStack_10;
  
  if (param_2 - param_3 < 8) {
    TVar2 = *param_4;
    if ((TVar2.View == (FName *)0x0) || (TVar2.bIsCached != false)) {
      uStack_10 = TVar2.Cache;
    }
    else {
      uStack_10 = (TVar2.View)->Number;
    }
    uVar4 = ((ulonglong)(uint)-((int)uStack_10 >> 0x1f) | 0x80000000) ^ (ulonglong)uStack_10;
    iVar1 = (param_3 - param_2) * 8 + 0x20;
    bVar3 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar4 = uVar4 >> (-bVar3 & 0x3f);
    }
    else {
      uVar4 = uVar4 << (bVar3 & 0x3f);
    }
    param_1->Prefix = param_1->Prefix | uVar4;
    param_1->bHasRemainingBytes = 8 < (param_2 - param_3) + 4U;
  }
  return;
}

// CalculatePrefix<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_> @ 142cd2280

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>
          (FPrefixInfo *param_1,int param_2,int param_3,
          TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_> *param_4
          )

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  FPrefixInfo *pFVar16;
  TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_> local_28;
  FPrefixInfo local_18;
  
  if (0 < (int)(8 - (param_2 - param_3 & 7U))) {
    local_28.View.DataPtr = (param_4->View).DataPtr;
    local_28.View.Size = (param_4->View).Size;
    local_28.View._12_4_ = *(undefined4 *)&(param_4->View).field_0xc;
    pFVar16 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>
              ::CalculatePrefix(&local_18,param_2,param_3,&local_28);
    bVar1 = *(byte *)((longlong)&pFVar16->Prefix + 1);
    bVar2 = *(byte *)((longlong)&pFVar16->Prefix + 2);
    bVar3 = *(byte *)((longlong)&pFVar16->Prefix + 3);
    bVar4 = *(byte *)((longlong)&pFVar16->Prefix + 4);
    bVar5 = *(byte *)((longlong)&pFVar16->Prefix + 5);
    bVar6 = *(byte *)((longlong)&pFVar16->Prefix + 6);
    bVar7 = *(byte *)((longlong)&pFVar16->Prefix + 7);
    bVar8 = pFVar16->bHasRemainingBytes;
    bVar9 = *(byte *)((longlong)&param_1->Prefix + 1);
    bVar10 = *(byte *)((longlong)&param_1->Prefix + 2);
    bVar11 = *(byte *)((longlong)&param_1->Prefix + 3);
    bVar12 = *(byte *)((longlong)&param_1->Prefix + 4);
    bVar13 = *(byte *)((longlong)&param_1->Prefix + 5);
    bVar14 = *(byte *)((longlong)&param_1->Prefix + 6);
    bVar15 = *(byte *)((longlong)&param_1->Prefix + 7);
    *(byte *)&param_1->Prefix = (byte)param_1->Prefix | (byte)pFVar16->Prefix;
    *(byte *)((longlong)&param_1->Prefix + 1) = bVar9 | bVar1;
    *(byte *)((longlong)&param_1->Prefix + 2) = bVar10 | bVar2;
    *(byte *)((longlong)&param_1->Prefix + 3) = bVar11 | bVar3;
    *(byte *)((longlong)&param_1->Prefix + 4) = bVar12 | bVar4;
    *(byte *)((longlong)&param_1->Prefix + 5) = bVar13 | bVar5;
    *(byte *)((longlong)&param_1->Prefix + 6) = bVar14 | bVar6;
    *(byte *)((longlong)&param_1->Prefix + 7) = bVar15 | bVar7;
    param_1->bHasRemainingBytes = bVar8;
  }
  return;
}

// CalculatePrefix<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_> @ 142cd22e0

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
          (FPrefixInfo *param_1,int param_2,int param_3,
          TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>
          *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  FPrefixInfo *pFVar16;
  TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_> local_28;
  FPrefixInfo local_18;
  
  if (1 < (int)(8 - (param_2 - param_3 & 7U))) {
    local_28.View.DataPtr = (param_4->View).DataPtr;
    local_28.View.Size = (param_4->View).Size;
    local_28.View._12_4_ = *(undefined4 *)&(param_4->View).field_0xc;
    pFVar16 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
              ::CalculatePrefix(&local_18,param_2,param_3,&local_28);
    bVar1 = *(byte *)((longlong)&pFVar16->Prefix + 1);
    bVar2 = *(byte *)((longlong)&pFVar16->Prefix + 2);
    bVar3 = *(byte *)((longlong)&pFVar16->Prefix + 3);
    bVar4 = *(byte *)((longlong)&pFVar16->Prefix + 4);
    bVar5 = *(byte *)((longlong)&pFVar16->Prefix + 5);
    bVar6 = *(byte *)((longlong)&pFVar16->Prefix + 6);
    bVar7 = *(byte *)((longlong)&pFVar16->Prefix + 7);
    bVar8 = pFVar16->bHasRemainingBytes;
    bVar9 = *(byte *)((longlong)&param_1->Prefix + 1);
    bVar10 = *(byte *)((longlong)&param_1->Prefix + 2);
    bVar11 = *(byte *)((longlong)&param_1->Prefix + 3);
    bVar12 = *(byte *)((longlong)&param_1->Prefix + 4);
    bVar13 = *(byte *)((longlong)&param_1->Prefix + 5);
    bVar14 = *(byte *)((longlong)&param_1->Prefix + 6);
    bVar15 = *(byte *)((longlong)&param_1->Prefix + 7);
    *(byte *)&param_1->Prefix = (byte)param_1->Prefix | (byte)pFVar16->Prefix;
    *(byte *)((longlong)&param_1->Prefix + 1) = bVar9 | bVar1;
    *(byte *)((longlong)&param_1->Prefix + 2) = bVar10 | bVar2;
    *(byte *)((longlong)&param_1->Prefix + 3) = bVar11 | bVar3;
    *(byte *)((longlong)&param_1->Prefix + 4) = bVar12 | bVar4;
    *(byte *)((longlong)&param_1->Prefix + 5) = bVar13 | bVar5;
    *(byte *)((longlong)&param_1->Prefix + 6) = bVar14 | bVar6;
    *(byte *)((longlong)&param_1->Prefix + 7) = bVar15 | bVar7;
    param_1->bHasRemainingBytes = bVar8;
  }
  return;
}

// CalculatePrefix<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_> @ 142cd2340

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>
          (FPrefixInfo *param_1,int param_2,int param_3,
          TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_> *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  FPrefixInfo *pFVar16;
  TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_> local_28;
  FPrefixInfo local_18;
  
  if (0 < (int)(8 - (param_2 - param_3 & 7U))) {
    local_28.View.DataPtr = (param_4->View).DataPtr;
    local_28.View.Size = (param_4->View).Size;
    local_28.View._12_4_ = *(undefined4 *)&(param_4->View).field_0xc;
    pFVar16 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>
              ::CalculatePrefix(&local_18,param_2,param_3,&local_28);
    bVar1 = *(byte *)((longlong)&pFVar16->Prefix + 1);
    bVar2 = *(byte *)((longlong)&pFVar16->Prefix + 2);
    bVar3 = *(byte *)((longlong)&pFVar16->Prefix + 3);
    bVar4 = *(byte *)((longlong)&pFVar16->Prefix + 4);
    bVar5 = *(byte *)((longlong)&pFVar16->Prefix + 5);
    bVar6 = *(byte *)((longlong)&pFVar16->Prefix + 6);
    bVar7 = *(byte *)((longlong)&pFVar16->Prefix + 7);
    bVar8 = pFVar16->bHasRemainingBytes;
    bVar9 = *(byte *)((longlong)&param_1->Prefix + 1);
    bVar10 = *(byte *)((longlong)&param_1->Prefix + 2);
    bVar11 = *(byte *)((longlong)&param_1->Prefix + 3);
    bVar12 = *(byte *)((longlong)&param_1->Prefix + 4);
    bVar13 = *(byte *)((longlong)&param_1->Prefix + 5);
    bVar14 = *(byte *)((longlong)&param_1->Prefix + 6);
    bVar15 = *(byte *)((longlong)&param_1->Prefix + 7);
    *(byte *)&param_1->Prefix = (byte)param_1->Prefix | (byte)pFVar16->Prefix;
    *(byte *)((longlong)&param_1->Prefix + 1) = bVar9 | bVar1;
    *(byte *)((longlong)&param_1->Prefix + 2) = bVar10 | bVar2;
    *(byte *)((longlong)&param_1->Prefix + 3) = bVar11 | bVar3;
    *(byte *)((longlong)&param_1->Prefix + 4) = bVar12 | bVar4;
    *(byte *)((longlong)&param_1->Prefix + 5) = bVar13 | bVar5;
    *(byte *)((longlong)&param_1->Prefix + 6) = bVar14 | bVar6;
    *(byte *)((longlong)&param_1->Prefix + 7) = bVar15 | bVar7;
    param_1->bHasRemainingBytes = bVar8;
  }
  return;
}

// CalculatePrefix<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_> @ 142cd23a0

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
          (FPrefixInfo *param_1,int param_2,int param_3,
          TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>
          *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  FPrefixInfo *pFVar16;
  TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_> local_28;
  FPrefixInfo local_18;
  
  if (1 < (int)(8 - (param_2 - param_3 & 7U))) {
    local_28.View.DataPtr = (param_4->View).DataPtr;
    local_28.View.Size = (param_4->View).Size;
    local_28.View._12_4_ = *(undefined4 *)&(param_4->View).field_0xc;
    pFVar16 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
              ::CalculatePrefix(&local_18,param_2,param_3,&local_28);
    bVar1 = *(byte *)((longlong)&pFVar16->Prefix + 1);
    bVar2 = *(byte *)((longlong)&pFVar16->Prefix + 2);
    bVar3 = *(byte *)((longlong)&pFVar16->Prefix + 3);
    bVar4 = *(byte *)((longlong)&pFVar16->Prefix + 4);
    bVar5 = *(byte *)((longlong)&pFVar16->Prefix + 5);
    bVar6 = *(byte *)((longlong)&pFVar16->Prefix + 6);
    bVar7 = *(byte *)((longlong)&pFVar16->Prefix + 7);
    bVar8 = pFVar16->bHasRemainingBytes;
    bVar9 = *(byte *)((longlong)&param_1->Prefix + 1);
    bVar10 = *(byte *)((longlong)&param_1->Prefix + 2);
    bVar11 = *(byte *)((longlong)&param_1->Prefix + 3);
    bVar12 = *(byte *)((longlong)&param_1->Prefix + 4);
    bVar13 = *(byte *)((longlong)&param_1->Prefix + 5);
    bVar14 = *(byte *)((longlong)&param_1->Prefix + 6);
    bVar15 = *(byte *)((longlong)&param_1->Prefix + 7);
    *(byte *)&param_1->Prefix = (byte)param_1->Prefix | (byte)pFVar16->Prefix;
    *(byte *)((longlong)&param_1->Prefix + 1) = bVar9 | bVar1;
    *(byte *)((longlong)&param_1->Prefix + 2) = bVar10 | bVar2;
    *(byte *)((longlong)&param_1->Prefix + 3) = bVar11 | bVar3;
    *(byte *)((longlong)&param_1->Prefix + 4) = bVar12 | bVar4;
    *(byte *)((longlong)&param_1->Prefix + 5) = bVar13 | bVar5;
    *(byte *)((longlong)&param_1->Prefix + 6) = bVar14 | bVar6;
    *(byte *)((longlong)&param_1->Prefix + 7) = bVar15 | bVar7;
    param_1->bHasRemainingBytes = bVar8;
  }
  return;
}

// CalculatePrefix<__int64> @ 142cd2400

void __cdecl
UE::Editor::DataStorage::Private::CalculatePrefix<__int64>
          (FPrefixInfo *param_1,int param_2,int param_3,long64 *param_4)

{
  char cVar1;
  ulonglong uVar2;
  
  if (param_2 - param_3 < 8) {
    cVar1 = (char)(param_3 - param_2);
    uVar2 = (-(*param_4 >> 0x3f) | 0x8000000000000000U) ^ *param_4;
    if ((param_3 - param_2) * 8 < 0) {
      uVar2 = uVar2 >> (cVar1 * -8 & 0x3fU);
    }
    else {
      uVar2 = uVar2 << (cVar1 * '\b' & 0x3fU);
    }
    param_1->Prefix = param_1->Prefix | uVar2;
    param_1->bHasRemainingBytes = 8 < (param_2 - param_3) + 8U;
  }
  return;
}

// CalculatePrefix<unsigned___int64> @ 142cd2470

void __cdecl
UE::Editor::DataStorage::Private::CalculatePrefix<unsigned___int64>
          (FPrefixInfo *param_1,int param_2,int param_3,ulong64 *param_4)

{
  char cVar1;
  int iVar2;
  
  iVar2 = param_2 - param_3;
  if (iVar2 < 8) {
    cVar1 = (char)(param_3 - param_2);
    if (-1 < (param_3 - param_2) * 8) {
      param_1->Prefix = param_1->Prefix | *param_4 << (cVar1 * '\b' & 0x3fU);
      param_1->bHasRemainingBytes = 8 < iVar2 + 8U;
      return;
    }
    param_1->Prefix = param_1->Prefix | *param_4 >> (cVar1 * -8 & 0x3fU);
    param_1->bHasRemainingBytes = 8 < iVar2 + 8U;
  }
  return;
}

// CalculatePrefix<unsigned___int64,unsigned___int64_&> @ 142cd24d0

void __cdecl
UE::Editor::DataStorage::Private::CalculatePrefix<unsigned___int64,unsigned___int64_&>
          (FPrefixInfo *param_1,int param_2,int param_3,ulong64 *param_4,ulong64 *param_5)

{
  char cVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar5 = param_2 + 8;
  if (param_3 < iVar5) {
    if (param_2 - param_3 < 8) {
      cVar1 = (char)(param_3 - param_2);
      if ((param_3 - param_2) * 8 < 0) {
        uVar2 = *param_4 >> (cVar1 * -8 & 0x3fU);
      }
      else {
        uVar2 = *param_4 << (cVar1 * '\b' & 0x3fU);
      }
      uVar2 = uVar2 | param_1->Prefix;
      param_1->Prefix = uVar2;
      if (iVar5 - param_3 < 8) {
        cVar1 = (char)(param_3 - iVar5);
        if ((param_3 - iVar5) * 8 < 0) {
          uVar4 = *param_5 >> (cVar1 * -8 & 0x3fU);
        }
        else {
          uVar4 = *param_5 << (cVar1 * '\b' & 0x3fU);
        }
        param_1->Prefix = uVar2 | uVar4;
        param_1->bHasRemainingBytes = 8 < (iVar5 - param_3) + 8U;
      }
    }
  }
  else {
    iVar3 = iVar5 - param_3;
    if (iVar3 < 8) {
      cVar1 = (char)(param_3 - iVar5);
      if (-1 < (param_3 - iVar5) * 8) {
        param_1->Prefix = param_1->Prefix | *param_5 << (cVar1 * '\b' & 0x3fU);
        param_1->bHasRemainingBytes = 8 < iVar3 + 8U;
        return;
      }
      param_1->Prefix = param_1->Prefix | *param_5 >> (cVar1 * -8 & 0x3fU);
      param_1->bHasRemainingBytes = 8 < iVar3 + 8U;
      return;
    }
  }
  return;
}

// CalculatePrefix<unsigned___int64,unsigned___int64_&,unsigned___int64_&> @ 142cd25c0

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<unsigned___int64,unsigned___int64_&,unsigned___int64_&>
          (FPrefixInfo *param_1,int param_2,int param_3,ulong64 *param_4,ulong64 *param_5,
          ulong64 *param_6)

{
  char cVar1;
  ulonglong uVar2;
  
  if (param_3 < param_2 + 8) {
    if (7 < param_2 - param_3) {
      return;
    }
    cVar1 = (char)(param_3 - param_2);
    if ((param_3 - param_2) * 8 < 0) {
      uVar2 = *param_4 >> (cVar1 * -8 & 0x3fU);
    }
    else {
      uVar2 = *param_4 << (cVar1 * '\b' & 0x3fU);
    }
    param_1->Prefix = param_1->Prefix | uVar2;
  }
  CalculatePrefix<unsigned___int64,unsigned___int64_&>(param_1,param_2 + 8,param_3,param_5,param_6);
  return;
}

// CalculatePrefix<unsigned___int64,unsigned_short_const_&> @ 142cd2620

void __cdecl
UE::Editor::DataStorage::Private::CalculatePrefix<unsigned___int64,unsigned_short_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,ulong64 *param_4,ushort *param_5)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  
  iVar6 = param_2 + 8;
  if (param_3 < iVar6) {
    if (param_2 - param_3 < 8) {
      cVar1 = (char)(param_3 - param_2);
      if ((param_3 - param_2) * 8 < 0) {
        uVar3 = *param_4 >> (cVar1 * -8 & 0x3fU);
      }
      else {
        uVar3 = *param_4 << (cVar1 * '\b' & 0x3fU);
      }
      uVar3 = uVar3 | param_1->Prefix;
      param_1->Prefix = uVar3;
      if (iVar6 - param_3 < 8) {
        iVar4 = (param_3 - iVar6) * 8 + 0x30;
        bVar2 = (byte)iVar4;
        if (iVar4 < 0) {
          uVar5 = (ulonglong)(*param_5 >> (-bVar2 & 0x3f));
        }
        else {
          uVar5 = (ulonglong)*param_5 << (bVar2 & 0x3f);
        }
        param_1->Prefix = uVar3 | uVar5;
        param_1->bHasRemainingBytes = 8 < (iVar6 - param_3) + 2U;
      }
    }
  }
  else {
    iVar4 = iVar6 - param_3;
    if (iVar4 < 8) {
      iVar6 = (param_3 - iVar6) * 8 + 0x30;
      bVar2 = (byte)iVar6;
      if (-1 < iVar6) {
        param_1->Prefix = param_1->Prefix | (ulonglong)*param_5 << (bVar2 & 0x3f);
        param_1->bHasRemainingBytes = 8 < iVar4 + 2U;
        return;
      }
      param_1->Prefix = param_1->Prefix | (ulonglong)(*param_5 >> (-bVar2 & 0x3f));
      param_1->bHasRemainingBytes = 8 < iVar4 + 2U;
      return;
    }
  }
  return;
}

// CalculatePrefix<unsigned___int64,unsigned_short_const_&,unsigned_char_const_&> @ 142cd2710

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<unsigned___int64,unsigned_short_const_&,unsigned_char_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,ulong64 *param_4,ushort *param_5,
          uchar *param_6)

{
  char cVar1;
  ulonglong uVar2;
  
  if (param_3 < param_2 + 8) {
    if (7 < param_2 - param_3) {
      return;
    }
    cVar1 = (char)(param_3 - param_2);
    if ((param_3 - param_2) * 8 < 0) {
      uVar2 = *param_4 >> (cVar1 * -8 & 0x3fU);
    }
    else {
      uVar2 = *param_4 << (cVar1 * '\b' & 0x3fU);
    }
    param_1->Prefix = param_1->Prefix | uVar2;
  }
  CalculatePrefix<unsigned_short,unsigned_char_const_&>(param_1,param_2 + 8,param_3,param_5,param_6)
  ;
  return;
}

// CalculatePrefix<unsigned___int64,unsigned_short_const_&,unsigned_char_const_&,unsigned_short_const_&> @ 142cd2770

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<unsigned___int64,unsigned_short_const_&,unsigned_char_const_&,unsigned_short_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,ulong64 *param_4,ushort *param_5,
          uchar *param_6,ushort *param_7)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar5 = param_2 + 8;
  if (param_3 < iVar5) {
    if (7 < param_2 - param_3) {
      return;
    }
    cVar1 = (char)(param_3 - param_2);
    if ((param_3 - param_2) * 8 < 0) {
      uVar3 = *param_4 >> (cVar1 * -8 & 0x3fU);
    }
    else {
      uVar3 = *param_4 << (cVar1 * '\b' & 0x3fU);
    }
    uVar3 = uVar3 | param_1->Prefix;
    param_1->Prefix = uVar3;
    if (param_3 < param_2 + 10) {
      if (7 < iVar5 - param_3) {
        return;
      }
      iVar5 = (param_3 - iVar5) * 8 + 0x30;
      bVar2 = (byte)iVar5;
      if (iVar5 < 0) {
        uVar4 = (ulonglong)(*param_5 >> (-bVar2 & 0x3f));
      }
      else {
        uVar4 = (ulonglong)*param_5 << (bVar2 & 0x3f);
      }
      param_1->Prefix = uVar3 | uVar4;
    }
  }
  else if (param_3 < param_2 + 10) {
    if (7 < iVar5 - param_3) {
      return;
    }
    iVar5 = (param_3 - iVar5) * 8 + 0x30;
    bVar2 = (byte)iVar5;
    if (iVar5 < 0) {
      param_1->Prefix = param_1->Prefix | (ulonglong)(*param_5 >> (-bVar2 & 0x3f));
    }
    else {
      param_1->Prefix = param_1->Prefix | (ulonglong)*param_5 << (bVar2 & 0x3f);
    }
  }
  CalculatePrefix<unsigned_char,unsigned_short_const_&>
            (param_1,param_2 + 10,param_3,param_6,param_7);
  return;
}

// CalculatePrefix<unsigned___int64,unsigned___int64_const_&> @ 142cd2850

void __cdecl
UE::Editor::DataStorage::Private::CalculatePrefix<unsigned___int64,unsigned___int64_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,ulong64 *param_4,ulong64 *param_5)

{
  char cVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar5 = param_2 + 8;
  if (param_3 < iVar5) {
    if (param_2 - param_3 < 8) {
      cVar1 = (char)(param_3 - param_2);
      if ((param_3 - param_2) * 8 < 0) {
        uVar2 = *param_4 >> (cVar1 * -8 & 0x3fU);
      }
      else {
        uVar2 = *param_4 << (cVar1 * '\b' & 0x3fU);
      }
      uVar2 = uVar2 | param_1->Prefix;
      param_1->Prefix = uVar2;
      if (iVar5 - param_3 < 8) {
        cVar1 = (char)(param_3 - iVar5);
        if ((param_3 - iVar5) * 8 < 0) {
          uVar4 = *param_5 >> (cVar1 * -8 & 0x3fU);
        }
        else {
          uVar4 = *param_5 << (cVar1 * '\b' & 0x3fU);
        }
        param_1->Prefix = uVar2 | uVar4;
        param_1->bHasRemainingBytes = 8 < (iVar5 - param_3) + 8U;
      }
    }
  }
  else {
    iVar3 = iVar5 - param_3;
    if (iVar3 < 8) {
      cVar1 = (char)(param_3 - iVar5);
      if (-1 < (param_3 - iVar5) * 8) {
        param_1->Prefix = param_1->Prefix | *param_5 << (cVar1 * '\b' & 0x3fU);
        param_1->bHasRemainingBytes = 8 < iVar3 + 8U;
        return;
      }
      param_1->Prefix = param_1->Prefix | *param_5 >> (cVar1 * -8 & 0x3fU);
      param_1->bHasRemainingBytes = 8 < iVar3 + 8U;
      return;
    }
  }
  return;
}

// CalculatePrefix<unsigned___int64,unsigned___int64_const_&,unsigned___int64_const_&> @ 142cd2940

void __cdecl
UE::Editor::DataStorage::Private::
CalculatePrefix<unsigned___int64,unsigned___int64_const_&,unsigned___int64_const_&>
          (FPrefixInfo *param_1,int param_2,int param_3,ulong64 *param_4,ulong64 *param_5,
          ulong64 *param_6)

{
  char cVar1;
  ulonglong uVar2;
  
  if (param_3 < param_2 + 8) {
    if (7 < param_2 - param_3) {
      return;
    }
    cVar1 = (char)(param_3 - param_2);
    if ((param_3 - param_2) * 8 < 0) {
      uVar2 = *param_4 >> (cVar1 * -8 & 0x3fU);
    }
    else {
      uVar2 = *param_4 << (cVar1 * '\b' & 0x3fU);
    }
    param_1->Prefix = param_1->Prefix | uVar2;
  }
  CalculatePrefix<unsigned___int64,unsigned___int64_const_&>
            (param_1,param_2 + 8,param_3,param_5,param_6);
  return;
}

// CalculatePrefix<bool> @ 142cd29a0

void __cdecl
UE::Editor::DataStorage::Private::CalculatePrefix<bool>
          (FPrefixInfo *param_1,int param_2,int param_3,bool *param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = param_2 - param_3;
  if (iVar3 < 8) {
    iVar1 = (param_3 - param_2) * 8 + 0x38;
    bVar2 = (byte)iVar1;
    if (-1 < iVar1) {
      param_1->Prefix = param_1->Prefix | (ulonglong)*param_4 << (bVar2 & 0x3f);
      param_1->bHasRemainingBytes = 8 < iVar3 + 1U;
      return;
    }
    param_1->Prefix = param_1->Prefix | (ulonglong)(byte)(*param_4 >> (-bVar2 & 0x3f));
    param_1->bHasRemainingBytes = 8 < iVar3 + 1U;
  }
  return;
}

// CreateSortPrefix<signed_char_&,unsigned_short_&,unsigned___int64_&> @ 142cd5f30

FPrefixInfo * __cdecl
UE::Editor::DataStorage::CreateSortPrefix<signed_char_&,unsigned_short_&,unsigned___int64_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,schar *param_2,ushort *param_3,
          ulong64 *param_4)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if ((int)param_1 < 1) {
    if (7 < (int)-param_1) {
      return __return_storage_ptr__;
    }
    uVar3 = ((ulonglong)(byte)-(*param_2 >> 7) | 0x80) ^ (ulonglong)(byte)*param_2;
    iVar1 = param_1 * 8 + 0x38;
    bVar2 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar4 = uVar3 >> (-bVar2 & 0x3f);
    }
    else {
      uVar4 = uVar3 << (bVar2 & 0x3f);
    }
    __return_storage_ptr__->Prefix = uVar4;
  }
  Private::CalculatePrefix<unsigned_short,unsigned___int64_&>
            (__return_storage_ptr__,1,param_1,param_3,param_4);
  return __return_storage_ptr__;
}

// CreateSortPrefix<short_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_&> @ 142cd5fb0

FPrefixInfo * __cdecl
UE::Editor::DataStorage::
CreateSortPrefix<short_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,short *param_2,
          TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>
          *param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  FPrefixInfo *pFVar16;
  byte bVar17;
  ulonglong uVar18;
  ulong64 uVar19;
  TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_> local_28;
  FPrefixInfo local_18;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if ((int)param_1 < 2) {
    if (7 < (int)-param_1) {
      return __return_storage_ptr__;
    }
    uVar18 = ((ulonglong)(ushort)-(*param_2 >> 0xf) | 0x8000) ^ (ulonglong)(ushort)*param_2;
    iVar1 = param_1 * 8 + 0x30;
    bVar17 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar19 = uVar18 >> (-bVar17 & 0x3f);
    }
    else {
      uVar19 = uVar18 << (bVar17 & 0x3f);
    }
    __return_storage_ptr__->Prefix = uVar19;
  }
  if (1 < (int)(8 - (2 - param_1 & 7))) {
    local_28.View.DataPtr = (param_3->View).DataPtr;
    local_28.View.Size = (param_3->View).Size;
    local_28.View._12_4_ = *(undefined4 *)&(param_3->View).field_0xc;
    pFVar16 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
              ::CalculatePrefix(&local_18,2,param_1,&local_28);
    bVar17 = *(byte *)((longlong)&pFVar16->Prefix + 1);
    bVar2 = *(byte *)((longlong)&pFVar16->Prefix + 2);
    bVar3 = *(byte *)((longlong)&pFVar16->Prefix + 3);
    bVar4 = *(byte *)((longlong)&pFVar16->Prefix + 4);
    bVar5 = *(byte *)((longlong)&pFVar16->Prefix + 5);
    bVar6 = *(byte *)((longlong)&pFVar16->Prefix + 6);
    bVar7 = *(byte *)((longlong)&pFVar16->Prefix + 7);
    bVar8 = pFVar16->bHasRemainingBytes;
    bVar9 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 1);
    bVar10 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 2);
    bVar11 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 3);
    bVar12 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 4);
    bVar13 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 5);
    bVar14 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 6);
    bVar15 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 7);
    *(byte *)&__return_storage_ptr__->Prefix =
         (byte)__return_storage_ptr__->Prefix | (byte)pFVar16->Prefix;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 1) = bVar9 | bVar17;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 2) = bVar10 | bVar2;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 3) = bVar11 | bVar3;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 4) = bVar12 | bVar4;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 5) = bVar13 | bVar5;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 6) = bVar14 | bVar6;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 7) = bVar15 | bVar7;
    __return_storage_ptr__->bHasRemainingBytes = bVar8;
  }
  return __return_storage_ptr__;
}

// CreateSortPrefix<unsigned_int_&,unsigned_int_&,unsigned_int_&> @ 142cd6070

FPrefixInfo * __cdecl
UE::Editor::DataStorage::CreateSortPrefix<unsigned_int_&,unsigned_int_&,unsigned_int_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,uint *param_2,uint *param_3,
          uint *param_4)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if ((int)param_1 < 4) {
    if (7 < (int)-param_1) {
      return __return_storage_ptr__;
    }
    iVar3 = param_1 * 8 + 0x20;
    bVar2 = (byte)iVar3;
    if (iVar3 < 0) {
      uVar1 = (ulonglong)(*param_2 >> (-bVar2 & 0x3f));
    }
    else {
      uVar1 = (ulonglong)*param_2 << (bVar2 & 0x3f);
    }
    __return_storage_ptr__->Prefix = uVar1;
  }
  Private::CalculatePrefix<unsigned_int,unsigned_int_&>
            (__return_storage_ptr__,4,param_1,param_3,param_4);
  return __return_storage_ptr__;
}

// CreateSortPrefix<unsigned_int_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_&> @ 142cd60e0

FPrefixInfo * __cdecl
UE::Editor::DataStorage::
CreateSortPrefix<unsigned_int_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,uint *param_2,
          TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>
          *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  ulonglong uVar15;
  FPrefixInfo *pFVar16;
  byte bVar17;
  int iVar18;
  TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_> local_28;
  FPrefixInfo local_18;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if ((int)param_1 < 4) {
    if (7 < (int)-param_1) {
      return __return_storage_ptr__;
    }
    iVar18 = param_1 * 8 + 0x20;
    bVar17 = (byte)iVar18;
    if (iVar18 < 0) {
      uVar15 = (ulonglong)(*param_2 >> (-bVar17 & 0x3f));
    }
    else {
      uVar15 = (ulonglong)*param_2 << (bVar17 & 0x3f);
    }
    __return_storage_ptr__->Prefix = uVar15;
  }
  if (1 < (int)(8 - (-param_1 - 4 & 7))) {
    local_28.View.DataPtr = (param_3->View).DataPtr;
    local_28.View.Size = (param_3->View).Size;
    local_28.View._12_4_ = *(undefined4 *)&(param_3->View).field_0xc;
    pFVar16 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
              ::CalculatePrefix(&local_18,4,param_1,&local_28);
    bVar17 = *(byte *)((longlong)&pFVar16->Prefix + 1);
    bVar1 = *(byte *)((longlong)&pFVar16->Prefix + 2);
    bVar2 = *(byte *)((longlong)&pFVar16->Prefix + 3);
    bVar3 = *(byte *)((longlong)&pFVar16->Prefix + 4);
    bVar4 = *(byte *)((longlong)&pFVar16->Prefix + 5);
    bVar5 = *(byte *)((longlong)&pFVar16->Prefix + 6);
    bVar6 = *(byte *)((longlong)&pFVar16->Prefix + 7);
    bVar7 = pFVar16->bHasRemainingBytes;
    bVar8 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 1);
    bVar9 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 2);
    bVar10 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 3);
    bVar11 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 4);
    bVar12 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 5);
    bVar13 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 6);
    bVar14 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 7);
    *(byte *)&__return_storage_ptr__->Prefix =
         (byte)__return_storage_ptr__->Prefix | (byte)pFVar16->Prefix;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 1) = bVar8 | bVar17;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 2) = bVar9 | bVar1;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 3) = bVar10 | bVar2;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 4) = bVar11 | bVar3;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 5) = bVar12 | bVar4;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 6) = bVar13 | bVar5;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 7) = bVar14 | bVar6;
    __return_storage_ptr__->bHasRemainingBytes = bVar7;
  }
  return __return_storage_ptr__;
}

// CreateSortPrefix<unsigned___int64_&,unsigned___int64_&,unsigned___int64_&> @ 142cd6180

FPrefixInfo * __cdecl
UE::Editor::DataStorage::CreateSortPrefix<unsigned___int64_&,unsigned___int64_&,unsigned___int64_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,ulong64 *param_2,ulong64 *param_3,
          ulong64 *param_4)

{
  ulonglong uVar1;
  byte bVar2;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if ((int)param_1 < 8) {
    if (7 < (int)-param_1) {
      return __return_storage_ptr__;
    }
    bVar2 = (byte)(param_1 * 8);
    if ((int)(param_1 * 8) < 0) {
      uVar1 = *param_2 >> (-bVar2 & 0x3f);
    }
    else {
      uVar1 = *param_2 << (bVar2 & 0x3f);
    }
    __return_storage_ptr__->Prefix = uVar1;
  }
  Private::CalculatePrefix<unsigned___int64,unsigned___int64_&>
            (__return_storage_ptr__,8,param_1,param_3,param_4);
  return __return_storage_ptr__;
}

// CreateSortPrefix<signed_char_const_&> @ 142cd61f0

FPrefixInfo * __cdecl
UE::Editor::DataStorage::CreateSortPrefix<signed_char_const_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,schar *param_2)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if ((int)-param_1 < 8) {
    iVar1 = param_1 * 8 + 0x38;
    uVar3 = ((ulonglong)(byte)-(*param_2 >> 7) | 0x80) ^ (ulonglong)(byte)*param_2;
    bVar2 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar4 = uVar3 >> (-bVar2 & 0x3f);
    }
    else {
      uVar4 = uVar3 << (bVar2 & 0x3f);
    }
    __return_storage_ptr__->Prefix = uVar4;
    __return_storage_ptr__->bHasRemainingBytes = 8 < -param_1 + 1;
  }
  return __return_storage_ptr__;
}

// CreateSortPrefix<signed_char_const_&,unsigned_short_const_&,unsigned___int64_const_&> @ 142cd6260

FPrefixInfo * __cdecl
UE::Editor::DataStorage::
CreateSortPrefix<signed_char_const_&,unsigned_short_const_&,unsigned___int64_const_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,schar *param_2,ushort *param_3,
          ulong64 *param_4)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if ((int)param_1 < 1) {
    if (7 < (int)-param_1) {
      return __return_storage_ptr__;
    }
    uVar3 = ((ulonglong)(byte)-(*param_2 >> 7) | 0x80) ^ (ulonglong)(byte)*param_2;
    iVar1 = param_1 * 8 + 0x38;
    bVar2 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar4 = uVar3 >> (-bVar2 & 0x3f);
    }
    else {
      uVar4 = uVar3 << (bVar2 & 0x3f);
    }
    __return_storage_ptr__->Prefix = uVar4;
  }
  Private::CalculatePrefix<unsigned_short,unsigned___int64_const_&>
            (__return_storage_ptr__,1,param_1,param_3,param_4);
  return __return_storage_ptr__;
}

// CreateSortPrefix<unsigned_char_const_&> @ 142cd62e0

FPrefixInfo * __cdecl
UE::Editor::DataStorage::CreateSortPrefix<unsigned_char_const_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,uchar *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if ((int)-param_1 < 8) {
    iVar3 = param_1 * 8 + 0x38;
    bVar2 = (byte)iVar3;
    if (iVar3 < 0) {
      uVar1 = (ulonglong)(*param_2 >> (-bVar2 & 0x3f));
    }
    else {
      uVar1 = (ulonglong)*param_2 << (bVar2 & 0x3f);
    }
    __return_storage_ptr__->Prefix = uVar1;
    __return_storage_ptr__->bHasRemainingBytes = 8 < -param_1 + 1;
  }
  return __return_storage_ptr__;
}

// CreateSortPrefix<short_const_&> @ 142cd6330

FPrefixInfo * __cdecl
UE::Editor::DataStorage::CreateSortPrefix<short_const_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,short *param_2)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if ((int)-param_1 < 8) {
    iVar1 = param_1 * 8 + 0x30;
    uVar3 = ((ulonglong)(ushort)-(*param_2 >> 0xf) | 0x8000) ^ (ulonglong)(ushort)*param_2;
    bVar2 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar4 = uVar3 >> (-bVar2 & 0x3f);
    }
    else {
      uVar4 = uVar3 << (bVar2 & 0x3f);
    }
    __return_storage_ptr__->Prefix = uVar4;
    __return_storage_ptr__->bHasRemainingBytes = 8 < -param_1 + 2;
  }
  return __return_storage_ptr__;
}

// CreateSortPrefix<short_const_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_const_&> @ 142cd63a0

FPrefixInfo * __cdecl
UE::Editor::DataStorage::
CreateSortPrefix<short_const_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_const_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,short *param_2,
          TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>
          *param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  FPrefixInfo *pFVar16;
  byte bVar17;
  ulonglong uVar18;
  ulong64 uVar19;
  TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_> local_28;
  FPrefixInfo local_18;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if ((int)param_1 < 2) {
    if (7 < (int)-param_1) {
      return __return_storage_ptr__;
    }
    uVar18 = ((ulonglong)(ushort)-(*param_2 >> 0xf) | 0x8000) ^ (ulonglong)(ushort)*param_2;
    iVar1 = param_1 * 8 + 0x30;
    bVar17 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar19 = uVar18 >> (-bVar17 & 0x3f);
    }
    else {
      uVar19 = uVar18 << (bVar17 & 0x3f);
    }
    __return_storage_ptr__->Prefix = uVar19;
  }
  if (1 < (int)(8 - (2 - param_1 & 7))) {
    local_28.View.DataPtr = (param_3->View).DataPtr;
    local_28.View.Size = (param_3->View).Size;
    local_28.View._12_4_ = *(undefined4 *)&(param_3->View).field_0xc;
    pFVar16 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
              ::CalculatePrefix(&local_18,2,param_1,&local_28);
    bVar17 = *(byte *)((longlong)&pFVar16->Prefix + 1);
    bVar2 = *(byte *)((longlong)&pFVar16->Prefix + 2);
    bVar3 = *(byte *)((longlong)&pFVar16->Prefix + 3);
    bVar4 = *(byte *)((longlong)&pFVar16->Prefix + 4);
    bVar5 = *(byte *)((longlong)&pFVar16->Prefix + 5);
    bVar6 = *(byte *)((longlong)&pFVar16->Prefix + 6);
    bVar7 = *(byte *)((longlong)&pFVar16->Prefix + 7);
    bVar8 = pFVar16->bHasRemainingBytes;
    bVar9 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 1);
    bVar10 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 2);
    bVar11 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 3);
    bVar12 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 4);
    bVar13 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 5);
    bVar14 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 6);
    bVar15 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 7);
    *(byte *)&__return_storage_ptr__->Prefix =
         (byte)__return_storage_ptr__->Prefix | (byte)pFVar16->Prefix;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 1) = bVar9 | bVar17;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 2) = bVar10 | bVar2;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 3) = bVar11 | bVar3;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 4) = bVar12 | bVar4;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 5) = bVar13 | bVar5;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 6) = bVar14 | bVar6;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 7) = bVar15 | bVar7;
    __return_storage_ptr__->bHasRemainingBytes = bVar8;
  }
  return __return_storage_ptr__;
}

// CreateSortPrefix<unsigned_short_const_&> @ 142cd6460

FPrefixInfo * __cdecl
UE::Editor::DataStorage::CreateSortPrefix<unsigned_short_const_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,ushort *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if ((int)-param_1 < 8) {
    iVar3 = param_1 * 8 + 0x30;
    bVar2 = (byte)iVar3;
    if (iVar3 < 0) {
      uVar1 = (ulonglong)(*param_2 >> (-bVar2 & 0x3f));
    }
    else {
      uVar1 = (ulonglong)*param_2 << (bVar2 & 0x3f);
    }
    __return_storage_ptr__->Prefix = uVar1;
    __return_storage_ptr__->bHasRemainingBytes = 8 < -param_1 + 2;
  }
  return __return_storage_ptr__;
}

// CreateSortPrefix<unsigned_short_const_&,unsigned_int_const_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_const_&> @ 142cd64b0

FPrefixInfo * __cdecl
UE::Editor::DataStorage::
CreateSortPrefix<unsigned_short_const_&,unsigned_int_const_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_const_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,ushort *param_2,uint *param_3,
          TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>
          *param_4)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if ((int)param_1 < 2) {
    if (7 < (int)-param_1) {
      return __return_storage_ptr__;
    }
    iVar3 = param_1 * 8 + 0x30;
    bVar2 = (byte)iVar3;
    if (iVar3 < 0) {
      uVar1 = (ulonglong)(*param_2 >> (-bVar2 & 0x3f));
    }
    else {
      uVar1 = (ulonglong)*param_2 << (bVar2 & 0x3f);
    }
    __return_storage_ptr__->Prefix = uVar1;
  }
  Private::
  CalculatePrefix<unsigned_int,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_const_&>
            (__return_storage_ptr__,2,param_1,param_3,param_4);
  return __return_storage_ptr__;
}

// CreateSortPrefix<int_const_&> @ 142cd6520

FPrefixInfo * __cdecl
UE::Editor::DataStorage::CreateSortPrefix<int_const_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if ((int)-param_1 < 8) {
    iVar1 = param_1 * 8 + 0x20;
    uVar3 = ((ulonglong)(uint)-(*param_2 >> 0x1f) | 0x80000000) ^ (ulonglong)(uint)*param_2;
    bVar2 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar4 = uVar3 >> (-bVar2 & 0x3f);
    }
    else {
      uVar4 = uVar3 << (bVar2 & 0x3f);
    }
    __return_storage_ptr__->Prefix = uVar4;
    __return_storage_ptr__->bHasRemainingBytes = 8 < -param_1 + 4;
  }
  return __return_storage_ptr__;
}

// CreateSortPrefix<unsigned_int_const_&> @ 142cd6590

FPrefixInfo * __cdecl
UE::Editor::DataStorage::CreateSortPrefix<unsigned_int_const_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,uint *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if ((int)-param_1 < 8) {
    iVar3 = param_1 * 8 + 0x20;
    bVar2 = (byte)iVar3;
    if (iVar3 < 0) {
      uVar1 = (ulonglong)(*param_2 >> (-bVar2 & 0x3f));
    }
    else {
      uVar1 = (ulonglong)*param_2 << (bVar2 & 0x3f);
    }
    __return_storage_ptr__->Prefix = uVar1;
    __return_storage_ptr__->bHasRemainingBytes = 8 < -param_1 + 4;
  }
  return __return_storage_ptr__;
}

// CreateSortPrefix<unsigned_int_const_&,unsigned_char_const_&> @ 142cd65e0

FPrefixInfo * __cdecl
UE::Editor::DataStorage::CreateSortPrefix<unsigned_int_const_&,unsigned_char_const_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,uint *param_2,uchar *param_3)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if ((int)param_1 < 4) {
    if (7 < (int)-param_1) {
      return __return_storage_ptr__;
    }
    iVar4 = param_1 * 8 + 0x20;
    bVar2 = (byte)iVar4;
    if (iVar4 < 0) {
      uVar5 = (ulonglong)(*param_2 >> (-bVar2 & 0x3f));
    }
    else {
      uVar5 = (ulonglong)*param_2 << (bVar2 & 0x3f);
    }
    __return_storage_ptr__->Prefix = uVar5;
    iVar4 = 4 - param_1;
    if (7 < iVar4) {
      return __return_storage_ptr__;
    }
    iVar3 = param_1 * 8 + 0x18;
    bVar2 = (byte)iVar3;
    if (iVar3 < 0) {
      uVar1 = (ulonglong)(*param_3 >> (-bVar2 & 0x3f));
    }
    else {
      uVar1 = (ulonglong)*param_3 << (bVar2 & 0x3f);
    }
    uVar1 = uVar1 | uVar5;
  }
  else {
    iVar4 = 4 - param_1;
    if (7 < iVar4) {
      return __return_storage_ptr__;
    }
    iVar3 = param_1 * 8 + 0x18;
    bVar2 = (byte)iVar3;
    if (iVar3 < 0) {
      uVar1 = (ulonglong)(*param_3 >> (-bVar2 & 0x3f));
    }
    else {
      uVar1 = (ulonglong)*param_3 << (bVar2 & 0x3f);
    }
  }
  __return_storage_ptr__->Prefix = uVar1;
  __return_storage_ptr__->bHasRemainingBytes = 8 < iVar4 + 1U;
  return __return_storage_ptr__;
}

// CreateSortPrefix<unsigned_int_const_&,unsigned_char_const_&,unsigned_short_const_&> @ 142cd66a0

FPrefixInfo * __cdecl
UE::Editor::DataStorage::
CreateSortPrefix<unsigned_int_const_&,unsigned_char_const_&,unsigned_short_const_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,uint *param_2,uchar *param_3,
          ushort *param_4)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if ((int)param_1 < 4) {
    if (7 < (int)-param_1) {
      return __return_storage_ptr__;
    }
    iVar3 = param_1 * 8 + 0x20;
    bVar2 = (byte)iVar3;
    if (iVar3 < 0) {
      uVar1 = (ulonglong)(*param_2 >> (-bVar2 & 0x3f));
    }
    else {
      uVar1 = (ulonglong)*param_2 << (bVar2 & 0x3f);
    }
    __return_storage_ptr__->Prefix = uVar1;
  }
  Private::CalculatePrefix<unsigned_char,unsigned_short_const_&>
            (__return_storage_ptr__,4,param_1,param_3,param_4);
  return __return_storage_ptr__;
}

// CreateSortPrefix<unsigned_int_const_&,unsigned_char_const_&,unsigned_short_const_&,unsigned_int_const_&> @ 142cd6710

FPrefixInfo * __cdecl
UE::Editor::DataStorage::
CreateSortPrefix<unsigned_int_const_&,unsigned_char_const_&,unsigned_short_const_&,unsigned_int_const_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,uint *param_2,uchar *param_3,
          ushort *param_4,uint *param_5)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if ((int)param_1 < 4) {
    if (7 < (int)-param_1) {
      return __return_storage_ptr__;
    }
    iVar3 = param_1 * 8 + 0x20;
    bVar2 = (byte)iVar3;
    if (iVar3 < 0) {
      uVar4 = (ulonglong)(*param_2 >> (-bVar2 & 0x3f));
    }
    else {
      uVar4 = (ulonglong)*param_2 << (bVar2 & 0x3f);
    }
    __return_storage_ptr__->Prefix = uVar4;
    if (7 < (int)(4 - param_1)) {
      return __return_storage_ptr__;
    }
    iVar3 = param_1 * 8 + 0x18;
    bVar2 = (byte)iVar3;
    if (iVar3 < 0) {
      uVar1 = (ulonglong)(*param_3 >> (-bVar2 & 0x3f));
    }
    else {
      uVar1 = (ulonglong)*param_3 << (bVar2 & 0x3f);
    }
    uVar1 = uVar1 | uVar4;
  }
  else {
    if (4 < (int)param_1) goto LAB_142cd67b7;
    if (7 < (int)(4 - param_1)) {
      return __return_storage_ptr__;
    }
    iVar3 = param_1 * 8 + 0x18;
    bVar2 = (byte)iVar3;
    if (iVar3 < 0) {
      uVar1 = (ulonglong)(*param_3 >> (-bVar2 & 0x3f));
    }
    else {
      uVar1 = (ulonglong)*param_3 << (bVar2 & 0x3f);
    }
  }
  __return_storage_ptr__->Prefix = uVar1;
LAB_142cd67b7:
  Private::CalculatePrefix<unsigned_short,unsigned_int_const_&>
            (__return_storage_ptr__,5,param_1,param_4,param_5);
  return __return_storage_ptr__;
}

// CreateSortPrefix<unsigned_int_const_&,unsigned_char_const_&,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&> @ 142cd67f0

FPrefixInfo * __cdecl
UE::Editor::DataStorage::
CreateSortPrefix<unsigned_int_const_&,unsigned_char_const_&,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,uint *param_2,uchar *param_3,
          ushort *param_4,uint *param_5,ulong64 *param_6)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if ((int)param_1 < 4) {
    if (7 < (int)-param_1) {
      return __return_storage_ptr__;
    }
    iVar3 = param_1 * 8 + 0x20;
    bVar2 = (byte)iVar3;
    if (iVar3 < 0) {
      uVar1 = (ulonglong)(*param_2 >> (-bVar2 & 0x3f));
    }
    else {
      uVar1 = (ulonglong)*param_2 << (bVar2 & 0x3f);
    }
    __return_storage_ptr__->Prefix = uVar1;
  }
  Private::
  CalculatePrefix<unsigned_char,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&>
            (__return_storage_ptr__,4,param_1,param_3,param_4,param_5,param_6);
  return __return_storage_ptr__;
}

// CreateSortPrefix<unsigned_int_const_&,unsigned_char_const_&,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&> @ 142cd6870

FPrefixInfo * __cdecl
UE::Editor::DataStorage::
CreateSortPrefix<unsigned_int_const_&,unsigned_char_const_&,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,uint *param_2,uchar *param_3,
          ushort *param_4,uint *param_5,ulong64 *param_6,ushort *param_7)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if ((int)param_1 < 4) {
    if (7 < (int)-param_1) {
      return __return_storage_ptr__;
    }
    iVar3 = param_1 * 8 + 0x20;
    bVar2 = (byte)iVar3;
    if (iVar3 < 0) {
      uVar4 = (ulonglong)(*param_2 >> (-bVar2 & 0x3f));
    }
    else {
      uVar4 = (ulonglong)*param_2 << (bVar2 & 0x3f);
    }
    __return_storage_ptr__->Prefix = uVar4;
    if (7 < (int)(4 - param_1)) {
      return __return_storage_ptr__;
    }
    iVar3 = param_1 * 8 + 0x18;
    bVar2 = (byte)iVar3;
    if (iVar3 < 0) {
      uVar1 = (ulonglong)(*param_3 >> (-bVar2 & 0x3f));
    }
    else {
      uVar1 = (ulonglong)*param_3 << (bVar2 & 0x3f);
    }
    uVar1 = uVar1 | uVar4;
  }
  else {
    if (4 < (int)param_1) goto LAB_142cd691b;
    if (7 < (int)(4 - param_1)) {
      return __return_storage_ptr__;
    }
    iVar3 = param_1 * 8 + 0x18;
    bVar2 = (byte)iVar3;
    if (iVar3 < 0) {
      uVar1 = (ulonglong)(*param_3 >> (-bVar2 & 0x3f));
    }
    else {
      uVar1 = (ulonglong)*param_3 << (bVar2 & 0x3f);
    }
  }
  __return_storage_ptr__->Prefix = uVar1;
LAB_142cd691b:
  Private::
  CalculatePrefix<unsigned_short,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&>
            (__return_storage_ptr__,5,param_1,param_4,param_5,param_6,param_7);
  return __return_storage_ptr__;
}

// CreateSortPrefix<unsigned_int_const_&,unsigned_char_const_&,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&> @ 142cd6960

FPrefixInfo * __cdecl
UE::Editor::DataStorage::
CreateSortPrefix<unsigned_int_const_&,unsigned_char_const_&,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,uint *param_2,uchar *param_3,
          ushort *param_4,uint *param_5,ulong64 *param_6,ushort *param_7,uchar *param_8)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if ((int)param_1 < 4) {
    if (7 < (int)-param_1) {
      return __return_storage_ptr__;
    }
    iVar3 = param_1 * 8 + 0x20;
    bVar2 = (byte)iVar3;
    if (iVar3 < 0) {
      uVar1 = (ulonglong)(*param_2 >> (-bVar2 & 0x3f));
    }
    else {
      uVar1 = (ulonglong)*param_2 << (bVar2 & 0x3f);
    }
    __return_storage_ptr__->Prefix = uVar1;
  }
  Private::
  CalculatePrefix<unsigned_char,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&>
            (__return_storage_ptr__,4,param_1,param_3,param_4,param_5,param_6,param_7,param_8);
  return __return_storage_ptr__;
}

// CreateSortPrefix<unsigned_int_const_&,unsigned_char_const_&,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&,unsigned_short_const_&> @ 142cd6a00

FPrefixInfo * __cdecl
UE::Editor::DataStorage::
CreateSortPrefix<unsigned_int_const_&,unsigned_char_const_&,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&,unsigned_short_const_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,uint *param_2,uchar *param_3,
          ushort *param_4,uint *param_5,ulong64 *param_6,ushort *param_7,uchar *param_8,
          ushort *param_9)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if ((int)param_1 < 4) {
    if (7 < (int)-param_1) {
      return __return_storage_ptr__;
    }
    iVar3 = param_1 * 8 + 0x20;
    bVar2 = (byte)iVar3;
    if (iVar3 < 0) {
      uVar1 = (ulonglong)(*param_2 >> (-bVar2 & 0x3f));
    }
    else {
      uVar1 = (ulonglong)*param_2 << (bVar2 & 0x3f);
    }
    __return_storage_ptr__->Prefix = uVar1;
  }
  Private::
  CalculatePrefix<unsigned_char,unsigned_short_const_&,unsigned_int_const_&,unsigned___int64_const_&,unsigned_short_const_&,unsigned_char_const_&,unsigned_short_const_&>
            (__return_storage_ptr__,4,param_1,param_3,param_4,param_5,param_6,param_7,param_8,
             param_9);
  return __return_storage_ptr__;
}

// CreateSortPrefix<unsigned_int_const_&,unsigned_int_const_&,unsigned_int_const_&> @ 142cd6ab0

FPrefixInfo * __cdecl
UE::Editor::DataStorage::
CreateSortPrefix<unsigned_int_const_&,unsigned_int_const_&,unsigned_int_const_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,uint *param_2,uint *param_3,
          uint *param_4)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if ((int)param_1 < 4) {
    if (7 < (int)-param_1) {
      return __return_storage_ptr__;
    }
    iVar3 = param_1 * 8 + 0x20;
    bVar2 = (byte)iVar3;
    if (iVar3 < 0) {
      uVar1 = (ulonglong)(*param_2 >> (-bVar2 & 0x3f));
    }
    else {
      uVar1 = (ulonglong)*param_2 << (bVar2 & 0x3f);
    }
    __return_storage_ptr__->Prefix = uVar1;
  }
  Private::CalculatePrefix<unsigned_int,unsigned_int_const_&>
            (__return_storage_ptr__,4,param_1,param_3,param_4);
  return __return_storage_ptr__;
}

// CreateSortPrefix<unsigned_int_const_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_const_&> @ 142cd6b20

FPrefixInfo * __cdecl
UE::Editor::DataStorage::
CreateSortPrefix<unsigned_int_const_&,UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_const_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,uint *param_2,
          TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>
          *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  ulonglong uVar15;
  FPrefixInfo *pFVar16;
  byte bVar17;
  int iVar18;
  TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_> local_28;
  FPrefixInfo local_18;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if ((int)param_1 < 4) {
    if (7 < (int)-param_1) {
      return __return_storage_ptr__;
    }
    iVar18 = param_1 * 8 + 0x20;
    bVar17 = (byte)iVar18;
    if (iVar18 < 0) {
      uVar15 = (ulonglong)(*param_2 >> (-bVar17 & 0x3f));
    }
    else {
      uVar15 = (ulonglong)*param_2 << (bVar17 & 0x3f);
    }
    __return_storage_ptr__->Prefix = uVar15;
  }
  if (1 < (int)(8 - (-param_1 - 4 & 7))) {
    local_28.View.DataPtr = (param_3->View).DataPtr;
    local_28.View.Size = (param_3->View).Size;
    local_28.View._12_4_ = *(undefined4 *)&(param_3->View).field_0xc;
    pFVar16 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
              ::CalculatePrefix(&local_18,4,param_1,&local_28);
    bVar17 = *(byte *)((longlong)&pFVar16->Prefix + 1);
    bVar1 = *(byte *)((longlong)&pFVar16->Prefix + 2);
    bVar2 = *(byte *)((longlong)&pFVar16->Prefix + 3);
    bVar3 = *(byte *)((longlong)&pFVar16->Prefix + 4);
    bVar4 = *(byte *)((longlong)&pFVar16->Prefix + 5);
    bVar5 = *(byte *)((longlong)&pFVar16->Prefix + 6);
    bVar6 = *(byte *)((longlong)&pFVar16->Prefix + 7);
    bVar7 = pFVar16->bHasRemainingBytes;
    bVar8 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 1);
    bVar9 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 2);
    bVar10 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 3);
    bVar11 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 4);
    bVar12 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 5);
    bVar13 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 6);
    bVar14 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 7);
    *(byte *)&__return_storage_ptr__->Prefix =
         (byte)__return_storage_ptr__->Prefix | (byte)pFVar16->Prefix;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 1) = bVar8 | bVar17;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 2) = bVar9 | bVar1;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 3) = bVar10 | bVar2;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 4) = bVar11 | bVar3;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 5) = bVar12 | bVar4;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 6) = bVar13 | bVar5;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 7) = bVar14 | bVar6;
    __return_storage_ptr__->bHasRemainingBytes = bVar7;
  }
  return __return_storage_ptr__;
}

// CreateSortPrefix<float_const_&> @ 142cd6bc0

FPrefixInfo * __cdecl
UE::Editor::DataStorage::CreateSortPrefix<float_const_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,float *param_2)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if ((int)-param_1 < 8) {
    iVar1 = param_1 * 8 + 0x20;
    uVar3 = ((ulonglong)(uint)((int)*param_2 >> 0x1f) | 0x80000000) ^ (ulonglong)(uint)*param_2;
    bVar2 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar4 = uVar3 >> (-bVar2 & 0x3f);
    }
    else {
      uVar4 = uVar3 << (bVar2 & 0x3f);
    }
    __return_storage_ptr__->Prefix = uVar4;
    __return_storage_ptr__->bHasRemainingBytes = 8 < -param_1 + 4;
  }
  return __return_storage_ptr__;
}

// CreateSortPrefix<double_const_&> @ 142cd6c30

FPrefixInfo * __cdecl
UE::Editor::DataStorage::CreateSortPrefix<double_const_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,double *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if ((int)-param_1 < 8) {
    uVar2 = ((longlong)*param_2 >> 0x3f | 0x8000000000000000U) ^ (ulonglong)*param_2;
    bVar1 = (byte)(param_1 * 8);
    if ((int)(param_1 * 8) < 0) {
      uVar3 = uVar2 >> (-bVar1 & 0x3f);
    }
    else {
      uVar3 = uVar2 << (bVar1 & 0x3f);
    }
    __return_storage_ptr__->Prefix = uVar3;
    __return_storage_ptr__->bHasRemainingBytes = 8 < -param_1 + 8;
  }
  return __return_storage_ptr__;
}

// CreateSortPrefix<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_const_&> @ 142cd6cb0

FPrefixInfo * __cdecl
UE::Editor::DataStorage::
CreateSortPrefix<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::TSortByName<0>_>_const_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,
          TSortNameView<UE::Editor::DataStorage::TSortByName<0>_> *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  ulong64 uVar16;
  FPrefixInfo *pFVar17;
  TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_> local_58;
  FPrefixInfo local_48;
  FName *local_38;
  FString local_30;
  char local_20;
  
  __return_storage_ptr__->bHasRemainingBytes = true;
  __return_storage_ptr__->Prefix = 0;
  if ((param_2->View != (FName *)0x0) && (param_2->bIsCached == false)) {
    ::FString::Reset(&param_2->Cache,0);
    if (*param_2->View != (FName)0x0) {
      ::FName::ToString(param_2->View,&param_2->Cache);
    }
    param_2->bIsCached = true;
  }
  if (1 < (int)(8 - (-param_1 & 7))) {
    local_38 = param_2->View;
    ::FString::FString(&local_30,&param_2->Cache);
    local_20 = param_2->bIsCached;
    if ((local_38 != (FName *)0x0) && ((bool)local_20 == false)) {
      ::FString::Reset(&local_30,0);
      if (*local_38 != (FName)0x0) {
        ::FName::ToString(local_38,&local_30);
      }
      local_20 = '\x01';
    }
    local_58.View.Size = local_30.Data.ArrayNum + -1;
    if (local_30.Data.ArrayNum == 0) {
      local_58.View.Size = 0;
    }
    local_58.View.DataPtr = (wchar_t *)local_30.Data.AllocatorInstance.Data;
    pFVar17 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
              ::CalculatePrefix(&local_48,0,param_1,&local_58);
    uVar16 = pFVar17->Prefix;
    bVar1 = *(byte *)((longlong)&pFVar17->Prefix + 1);
    bVar2 = *(byte *)((longlong)&pFVar17->Prefix + 2);
    bVar3 = *(byte *)((longlong)&pFVar17->Prefix + 3);
    bVar4 = *(byte *)((longlong)&pFVar17->Prefix + 4);
    bVar5 = *(byte *)((longlong)&pFVar17->Prefix + 5);
    bVar6 = *(byte *)((longlong)&pFVar17->Prefix + 6);
    bVar7 = *(byte *)((longlong)&pFVar17->Prefix + 7);
    bVar8 = pFVar17->bHasRemainingBytes;
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    bVar9 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 1);
    bVar10 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 2);
    bVar11 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 3);
    bVar12 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 4);
    bVar13 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 5);
    bVar14 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 6);
    bVar15 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 7);
    *(byte *)&__return_storage_ptr__->Prefix = (byte)__return_storage_ptr__->Prefix | (byte)uVar16;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 1) = bVar9 | bVar1;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 2) = bVar10 | bVar2;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 3) = bVar11 | bVar3;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 4) = bVar12 | bVar4;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 5) = bVar13 | bVar5;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 6) = bVar14 | bVar6;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 7) = bVar15 | bVar7;
    __return_storage_ptr__->bHasRemainingBytes = bVar8;
  }
  return __return_storage_ptr__;
}

// CreateSortPrefix<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_const_&> @ 142cd6e10

FPrefixInfo * __cdecl
UE::Editor::DataStorage::
CreateSortPrefix<UE::Editor::DataStorage::TSortNameView<UE::Editor::DataStorage::FSortById>_const_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,
          TSortNameView<UE::Editor::DataStorage::FSortById> *param_2)

{
  int iVar1;
  TSortNameView<UE::Editor::DataStorage::FSortById> TVar2;
  byte bVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  uint uStack_10;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if ((int)-param_1 < 8) {
    TVar2 = *param_2;
    if ((TVar2.View == (FName *)0x0) || (TVar2.bIsCached != false)) {
      uStack_10 = TVar2.Cache;
    }
    else {
      uStack_10 = (TVar2.View)->Number;
    }
    uVar4 = ((ulonglong)(uint)-((int)uStack_10 >> 0x1f) | 0x80000000) ^ (ulonglong)uStack_10;
    iVar1 = param_1 * 8 + 0x20;
    bVar3 = (byte)iVar1;
    if (iVar1 < 0) {
      uVar5 = uVar4 >> (-bVar3 & 0x3f);
    }
    else {
      uVar5 = uVar4 << (bVar3 & 0x3f);
    }
    __return_storage_ptr__->Prefix = uVar5;
    __return_storage_ptr__->bHasRemainingBytes = 8 < -param_1 + 4;
  }
  return __return_storage_ptr__;
}

// CreateSortPrefix<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_const_&> @ 142cd6eb0

FPrefixInfo * __cdecl
UE::Editor::DataStorage::
CreateSortPrefix<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_const_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,
          TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_> *param_2
          )

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  FPrefixInfo *pFVar16;
  TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_> local_28;
  FPrefixInfo local_18;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if (0 < (int)(8 - (-param_1 & 7))) {
    local_28.View.DataPtr = (param_2->View).DataPtr;
    local_28.View.Size = (param_2->View).Size;
    local_28.View._12_4_ = *(undefined4 *)&(param_2->View).field_0xc;
    pFVar16 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<char>_>_>
              ::CalculatePrefix(&local_18,0,param_1,&local_28);
    bVar1 = *(byte *)((longlong)&pFVar16->Prefix + 1);
    bVar2 = *(byte *)((longlong)&pFVar16->Prefix + 2);
    bVar3 = *(byte *)((longlong)&pFVar16->Prefix + 3);
    bVar4 = *(byte *)((longlong)&pFVar16->Prefix + 4);
    bVar5 = *(byte *)((longlong)&pFVar16->Prefix + 5);
    bVar6 = *(byte *)((longlong)&pFVar16->Prefix + 6);
    bVar7 = *(byte *)((longlong)&pFVar16->Prefix + 7);
    bVar8 = pFVar16->bHasRemainingBytes;
    bVar9 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 1);
    bVar10 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 2);
    bVar11 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 3);
    bVar12 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 4);
    bVar13 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 5);
    bVar14 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 6);
    bVar15 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 7);
    *(byte *)&__return_storage_ptr__->Prefix =
         (byte)__return_storage_ptr__->Prefix | (byte)pFVar16->Prefix;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 1) = bVar9 | bVar1;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 2) = bVar10 | bVar2;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 3) = bVar11 | bVar3;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 4) = bVar12 | bVar4;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 5) = bVar13 | bVar5;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 6) = bVar14 | bVar6;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 7) = bVar15 | bVar7;
    __return_storage_ptr__->bHasRemainingBytes = bVar8;
  }
  return __return_storage_ptr__;
}

// CreateSortPrefix<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_const_&> @ 142cd6f20

FPrefixInfo * __cdecl
UE::Editor::DataStorage::
CreateSortPrefix<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_const_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,
          TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>
          *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  FPrefixInfo *pFVar16;
  TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_> local_28;
  FPrefixInfo local_18;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if (1 < (int)(8 - (-param_1 & 7))) {
    local_28.View.DataPtr = (param_2->View).DataPtr;
    local_28.View.Size = (param_2->View).Size;
    local_28.View._12_4_ = *(undefined4 *)&(param_2->View).field_0xc;
    pFVar16 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseInsensitive,TStringView<wchar_t>_>_>
              ::CalculatePrefix(&local_18,0,param_1,&local_28);
    bVar1 = *(byte *)((longlong)&pFVar16->Prefix + 1);
    bVar2 = *(byte *)((longlong)&pFVar16->Prefix + 2);
    bVar3 = *(byte *)((longlong)&pFVar16->Prefix + 3);
    bVar4 = *(byte *)((longlong)&pFVar16->Prefix + 4);
    bVar5 = *(byte *)((longlong)&pFVar16->Prefix + 5);
    bVar6 = *(byte *)((longlong)&pFVar16->Prefix + 6);
    bVar7 = *(byte *)((longlong)&pFVar16->Prefix + 7);
    bVar8 = pFVar16->bHasRemainingBytes;
    bVar9 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 1);
    bVar10 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 2);
    bVar11 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 3);
    bVar12 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 4);
    bVar13 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 5);
    bVar14 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 6);
    bVar15 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 7);
    *(byte *)&__return_storage_ptr__->Prefix =
         (byte)__return_storage_ptr__->Prefix | (byte)pFVar16->Prefix;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 1) = bVar9 | bVar1;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 2) = bVar10 | bVar2;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 3) = bVar11 | bVar3;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 4) = bVar12 | bVar4;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 5) = bVar13 | bVar5;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 6) = bVar14 | bVar6;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 7) = bVar15 | bVar7;
    __return_storage_ptr__->bHasRemainingBytes = bVar8;
  }
  return __return_storage_ptr__;
}

// CreateSortPrefix<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_const_&> @ 142cd6f90

FPrefixInfo * __cdecl
UE::Editor::DataStorage::
CreateSortPrefix<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_const_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,
          TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_> *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  FPrefixInfo *pFVar16;
  TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_> local_28;
  FPrefixInfo local_18;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if (0 < (int)(8 - (-param_1 & 7))) {
    local_28.View.DataPtr = (param_2->View).DataPtr;
    local_28.View.Size = (param_2->View).Size;
    local_28.View._12_4_ = *(undefined4 *)&(param_2->View).field_0xc;
    pFVar16 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<char>_>_>
              ::CalculatePrefix(&local_18,0,param_1,&local_28);
    bVar1 = *(byte *)((longlong)&pFVar16->Prefix + 1);
    bVar2 = *(byte *)((longlong)&pFVar16->Prefix + 2);
    bVar3 = *(byte *)((longlong)&pFVar16->Prefix + 3);
    bVar4 = *(byte *)((longlong)&pFVar16->Prefix + 4);
    bVar5 = *(byte *)((longlong)&pFVar16->Prefix + 5);
    bVar6 = *(byte *)((longlong)&pFVar16->Prefix + 6);
    bVar7 = *(byte *)((longlong)&pFVar16->Prefix + 7);
    bVar8 = pFVar16->bHasRemainingBytes;
    bVar9 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 1);
    bVar10 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 2);
    bVar11 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 3);
    bVar12 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 4);
    bVar13 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 5);
    bVar14 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 6);
    bVar15 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 7);
    *(byte *)&__return_storage_ptr__->Prefix =
         (byte)__return_storage_ptr__->Prefix | (byte)pFVar16->Prefix;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 1) = bVar9 | bVar1;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 2) = bVar10 | bVar2;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 3) = bVar11 | bVar3;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 4) = bVar12 | bVar4;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 5) = bVar13 | bVar5;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 6) = bVar14 | bVar6;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 7) = bVar15 | bVar7;
    __return_storage_ptr__->bHasRemainingBytes = bVar8;
  }
  return __return_storage_ptr__;
}

// CreateSortPrefix<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_const_&> @ 142cd7000

FPrefixInfo * __cdecl
UE::Editor::DataStorage::
CreateSortPrefix<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_const_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,
          TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>
          *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  FPrefixInfo *pFVar16;
  TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_> local_28;
  FPrefixInfo local_18;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if (1 < (int)(8 - (-param_1 & 7))) {
    local_28.View.DataPtr = (param_2->View).DataPtr;
    local_28.View.Size = (param_2->View).Size;
    local_28.View._12_4_ = *(undefined4 *)&(param_2->View).field_0xc;
    pFVar16 = TSortTypeInfo<UE::Editor::DataStorage::TSortStringView<UE::Editor::DataStorage::FSortCaseSensitive,TStringView<wchar_t>_>_>
              ::CalculatePrefix(&local_18,0,param_1,&local_28);
    bVar1 = *(byte *)((longlong)&pFVar16->Prefix + 1);
    bVar2 = *(byte *)((longlong)&pFVar16->Prefix + 2);
    bVar3 = *(byte *)((longlong)&pFVar16->Prefix + 3);
    bVar4 = *(byte *)((longlong)&pFVar16->Prefix + 4);
    bVar5 = *(byte *)((longlong)&pFVar16->Prefix + 5);
    bVar6 = *(byte *)((longlong)&pFVar16->Prefix + 6);
    bVar7 = *(byte *)((longlong)&pFVar16->Prefix + 7);
    bVar8 = pFVar16->bHasRemainingBytes;
    bVar9 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 1);
    bVar10 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 2);
    bVar11 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 3);
    bVar12 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 4);
    bVar13 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 5);
    bVar14 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 6);
    bVar15 = *(byte *)((longlong)&__return_storage_ptr__->Prefix + 7);
    *(byte *)&__return_storage_ptr__->Prefix =
         (byte)__return_storage_ptr__->Prefix | (byte)pFVar16->Prefix;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 1) = bVar9 | bVar1;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 2) = bVar10 | bVar2;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 3) = bVar11 | bVar3;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 4) = bVar12 | bVar4;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 5) = bVar13 | bVar5;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 6) = bVar14 | bVar6;
    *(byte *)((longlong)&__return_storage_ptr__->Prefix + 7) = bVar15 | bVar7;
    __return_storage_ptr__->bHasRemainingBytes = bVar8;
  }
  return __return_storage_ptr__;
}

// CreateSortPrefix<__int64_const_&> @ 142cd7070

FPrefixInfo * __cdecl
UE::Editor::DataStorage::CreateSortPrefix<__int64_const_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,long64 *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if ((int)-param_1 < 8) {
    uVar2 = (-(*param_2 >> 0x3f) | 0x8000000000000000U) ^ *param_2;
    bVar1 = (byte)(param_1 * 8);
    if ((int)(param_1 * 8) < 0) {
      uVar3 = uVar2 >> (-bVar1 & 0x3f);
    }
    else {
      uVar3 = uVar2 << (bVar1 & 0x3f);
    }
    __return_storage_ptr__->Prefix = uVar3;
    __return_storage_ptr__->bHasRemainingBytes = 8 < -param_1 + 8;
  }
  return __return_storage_ptr__;
}

// CreateSortPrefix<unsigned___int64_const_&> @ 142cd70e0

FPrefixInfo * __cdecl
UE::Editor::DataStorage::CreateSortPrefix<unsigned___int64_const_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,ulong64 *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if ((int)-param_1 < 8) {
    bVar2 = (byte)(param_1 * 8);
    if ((int)(param_1 * 8) < 0) {
      uVar1 = *param_2 >> (-bVar2 & 0x3f);
    }
    else {
      uVar1 = *param_2 << (bVar2 & 0x3f);
    }
    __return_storage_ptr__->Prefix = uVar1;
    __return_storage_ptr__->bHasRemainingBytes = 8 < -param_1 + 8;
  }
  return __return_storage_ptr__;
}

// CreateSortPrefix<unsigned___int64_const_&,unsigned___int64_const_&,unsigned___int64_const_&> @ 142cd7130

FPrefixInfo * __cdecl
UE::Editor::DataStorage::
CreateSortPrefix<unsigned___int64_const_&,unsigned___int64_const_&,unsigned___int64_const_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,ulong64 *param_2,ulong64 *param_3,
          ulong64 *param_4)

{
  ulonglong uVar1;
  byte bVar2;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if ((int)param_1 < 8) {
    if (7 < (int)-param_1) {
      return __return_storage_ptr__;
    }
    bVar2 = (byte)(param_1 * 8);
    if ((int)(param_1 * 8) < 0) {
      uVar1 = *param_2 >> (-bVar2 & 0x3f);
    }
    else {
      uVar1 = *param_2 << (bVar2 & 0x3f);
    }
    __return_storage_ptr__->Prefix = uVar1;
  }
  Private::CalculatePrefix<unsigned___int64,unsigned___int64_const_&>
            (__return_storage_ptr__,8,param_1,param_3,param_4);
  return __return_storage_ptr__;
}

// CreateSortPrefix<bool_const_&> @ 142cd71a0

FPrefixInfo * __cdecl
UE::Editor::DataStorage::CreateSortPrefix<bool_const_&>
          (FPrefixInfo *__return_storage_ptr__,uint param_1,bool *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  
  __return_storage_ptr__->Prefix = 0;
  __return_storage_ptr__->bHasRemainingBytes = true;
  if ((int)-param_1 < 8) {
    iVar3 = param_1 * 8 + 0x38;
    bVar2 = (byte)iVar3;
    if (iVar3 < 0) {
      uVar1 = (ulonglong)(byte)(*param_2 >> (-bVar2 & 0x3f));
    }
    else {
      uVar1 = (ulonglong)*param_2 << (bVar2 & 0x3f);
    }
    __return_storage_ptr__->Prefix = uVar1;
    __return_storage_ptr__->bHasRemainingBytes = 8 < -param_1 + 1;
  }
  return __return_storage_ptr__;
}

// ReadOnly<FTEDSProcessorTestsReferenceColumn> @ 142cde790

Select * __thiscall
UE::Editor::DataStorage::Queries::Select::ReadOnly<FTEDSProcessorTestsReferenceColumn>(Select *this)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = FTEDSProcessorTestsReferenceColumn::StaticStruct();
  ReadOnly(this,pUVar1);
  return this;
}

// ReadOnly<FTestColumnA> @ 142cde7c0

Select * __thiscall UE::Editor::DataStorage::Queries::Select::ReadOnly<FTestColumnA>(Select *this)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = FTestColumnA::StaticStruct();
  ReadOnly(this,pUVar1);
  return this;
}

// ReadOnly<FTestColumnB> @ 142cde7f0

Select * __thiscall UE::Editor::DataStorage::Queries::Select::ReadOnly<FTestColumnB>(Select *this)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = FTestColumnB::StaticStruct();
  ReadOnly(this,pUVar1);
  return this;
}

// ReadOnly<FTestColumnC> @ 142cde820

Select * __thiscall UE::Editor::DataStorage::Queries::Select::ReadOnly<FTestColumnC>(Select *this)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = FTestColumnC::StaticStruct();
  ReadOnly(this,pUVar1);
  return this;
}

// ReadWrite<FTestColumnA,FTestColumnB> @ 142cde850

Select * __thiscall
UE::Editor::DataStorage::Queries::Select::ReadWrite<FTestColumnA,FTestColumnB>(Select *this)

{
  UScriptStruct *local_28;
  UScriptStruct *local_20;
  TArrayView<UScriptStruct_const_*_const,int> local_18;
  
  local_28 = FTestColumnA::StaticStruct();
  local_20 = FTestColumnB::StaticStruct();
  local_18.ArrayNum = 2;
  local_18.DataPtr = &local_28;
  ReadWrite(this,&local_18);
  return this;
}

// ReadWrite<FTestColumnB> @ 142cde8b0

Select * __thiscall UE::Editor::DataStorage::Queries::Select::ReadWrite<FTestColumnB>(Select *this)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = FTestColumnB::StaticStruct();
  ReadWrite(this,pUVar1);
  return this;
}

// ReadWrite<FTestColumnD> @ 142cde8e0

Select * __thiscall UE::Editor::DataStorage::Queries::Select::ReadWrite<FTestColumnD>(Select *this)

{
  UScriptStruct *pUVar1;
  
  pUVar1 = FTestColumnD::StaticStruct();
  ReadWrite(this,pUVar1);
  return this;
}

// ReadWrite<FTestColumnDynamic> @ 142cde910

Select * __thiscall
UE::Editor::DataStorage::Queries::Select::ReadWrite<FTestColumnDynamic>(Select *this,FName *param_1)

{
  FDynamicColumnDescription local_18;
  
  local_18.TemplateType = FTestColumnDynamic::StaticStruct();
  local_18.Identifier = *param_1;
  ReadWrite(this,&local_18);
  return this;
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_> @ 142cde960

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
          (ushort param_1,ForElementType<FName> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 3) {
      iVar8 = 2;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 3) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// RegisterDependencies<UE::Editor::DataStorage::IQueryContext_&> @ 142cdea30

void __cdecl
UE::Editor::DataStorage::Queries::Private::
RegisterDependencies<UE::Editor::DataStorage::IQueryContext_&>(FQueryDescription *param_1)

{
  return;
}

// ToUpper<1,char> @ 142cdedb0

char __cdecl UE::Editor::DataStorage::Private::ToUpper<1,char>(char param_1)

{
  return param_1;
}

// ToUpper<1,wchar_t> @ 142cdedc0

wchar_t __cdecl UE::Editor::DataStorage::Private::ToUpper<1,wchar_t>(wchar_t param_1)

{
  return param_1;
}

// ToUpper<0,char> @ 142cdedd0

char __cdecl UE::Editor::DataStorage::Private::ToUpper<0,char>(char param_1)

{
  return param_1 - (-((int)param_1 - 0x61U < 0x1a) & 0x20U);
}

// ToUpper<0,wchar_t> @ 142cdedf0

wchar_t __cdecl UE::Editor::DataStorage::Private::ToUpper<0,wchar_t>(wchar_t param_1)

{
  return param_1 - (-(ushort)((ushort)param_1 - 0x61 < 0x1a) & 0x20);
}

// operator() @ 142ce5d00

void __thiscall
`UE::Editor::DataStorage::Queries::Private::
BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_1>,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_1>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTEDSProcessorTestsReferenceColumn_*>'
::__l2::<lambda_1>::operator()(void *this,FQueryDescription *param_1,IQueryContext *param_2)

{
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar1;
  ForElementType<UE::Editor::DataStorage::EQueryAccessType> FVar2;
  FTEDSProcessorTestsReferenceColumn *local_res8;
  ulong64 *local_18 [2];
  
  FVar2 = (param_1->SelectionAccessTypes).AllocatorInstance.SecondaryData;
  FVar1 = (param_1->SelectionTypes).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0) {
    FVar2 = (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)
            &param_1->SelectionAccessTypes;
  }
  if (FVar1 == (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    FVar1 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)
            &param_1->SelectionTypes;
  }
  (**(code **)((longlong)*param_2 + 0x30))(param_2,1,&local_res8,FVar1,FVar2);
  (**(code **)((longlong)*param_2 + 0x10))(param_2,local_18);
  Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_1>::operator()
            (this,param_2,local_18[0],local_res8);
  return;
}

// operator() @ 142ce5d90

void __thiscall
`UE::Editor::DataStorage::Queries::Private::
BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_1>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_1>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPrePhys_*>'
::__l2::<lambda_1>::operator()(void *this,FQueryDescription *param_1,IQueryContext *param_2)

{
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar1;
  ForElementType<UE::Editor::DataStorage::EQueryAccessType> FVar2;
  FTest_PingPongPrePhys *local_res8;
  ulong64 *local_18 [2];
  
  FVar2 = (param_1->SelectionAccessTypes).AllocatorInstance.SecondaryData;
  FVar1 = (param_1->SelectionTypes).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0) {
    FVar2 = (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)
            &param_1->SelectionAccessTypes;
  }
  if (FVar1 == (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    FVar1 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)
            &param_1->SelectionTypes;
  }
  (**(code **)((longlong)*param_2 + 0x30))(param_2,1,&local_res8,FVar1,FVar2);
  (**(code **)((longlong)*param_2 + 0x10))(param_2,local_18);
  `UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_1>::operator()
            (this,param_2,local_18[0],local_res8);
  return;
}

// operator() @ 142ce5e20

void __thiscall
`UE::Editor::DataStorage::Queries::Private::
BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_2>,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_2>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTEDSProcessorTestsReferenceColumn_*>'
::__l2::<lambda_1>::operator()(void *this,FQueryDescription *param_1,IQueryContext *param_2)

{
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar1;
  ForElementType<UE::Editor::DataStorage::EQueryAccessType> FVar2;
  FTEDSProcessorTestsReferenceColumn *local_res8;
  ulong64 *local_18 [2];
  
  FVar2 = (param_1->SelectionAccessTypes).AllocatorInstance.SecondaryData;
  FVar1 = (param_1->SelectionTypes).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0) {
    FVar2 = (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)
            &param_1->SelectionAccessTypes;
  }
  if (FVar1 == (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    FVar1 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)
            &param_1->SelectionTypes;
  }
  (**(code **)((longlong)*param_2 + 0x30))(param_2,1,&local_res8,FVar1,FVar2);
  (**(code **)((longlong)*param_2 + 0x10))(param_2,local_18);
  Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_2>::operator()
            (this,param_2,local_18[0],local_res8);
  return;
}

// operator() @ 142ce5eb0

void __thiscall
`UE::Editor::DataStorage::Queries::Private::
BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_2>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_2>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongDurPhys_*>'
::__l2::<lambda_1>::operator()(void *this,FQueryDescription *param_1,IQueryContext *param_2)

{
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar1;
  ForElementType<UE::Editor::DataStorage::EQueryAccessType> FVar2;
  FTest_PingPongDurPhys *local_res8;
  ulong64 *local_18 [2];
  
  FVar2 = (param_1->SelectionAccessTypes).AllocatorInstance.SecondaryData;
  FVar1 = (param_1->SelectionTypes).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0) {
    FVar2 = (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)
            &param_1->SelectionAccessTypes;
  }
  if (FVar1 == (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    FVar1 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)
            &param_1->SelectionTypes;
  }
  (**(code **)((longlong)*param_2 + 0x30))(param_2,1,&local_res8,FVar1,FVar2);
  (**(code **)((longlong)*param_2 + 0x10))(param_2,local_18);
  `UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_2>::operator()
            (this,param_2,local_18[0],local_res8);
  return;
}

// operator() @ 142ce5f40

void __thiscall
`UE::Editor::DataStorage::Queries::Private::
BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_3>,`UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_3>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTest_PingPongPostPhys_*>'
::__l2::<lambda_1>::operator()(void *this,FQueryDescription *param_1,IQueryContext *param_2)

{
  ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_> FVar1;
  ForElementType<UE::Editor::DataStorage::EQueryAccessType> FVar2;
  FTest_PingPongPostPhys *local_res8;
  ulong64 *local_18 [2];
  
  FVar2 = (param_1->SelectionAccessTypes).AllocatorInstance.SecondaryData;
  FVar1 = (param_1->SelectionTypes).AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)0x0) {
    FVar2 = (ForElementType<UE::Editor::DataStorage::EQueryAccessType>)
            &param_1->SelectionAccessTypes;
  }
  if (FVar1 == (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)0x0) {
    FVar1 = (ForElementType<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>_>)
            &param_1->SelectionTypes;
  }
  (**(code **)((longlong)*param_2 + 0x30))(param_2,1,&local_res8,FVar1,FVar2);
  (**(code **)((longlong)*param_2 + 0x10))(param_2,local_18);
  `UTest_PingPongBetweenPhaseFactory::RegisterQueries'::__l2::<lambda_3>::operator()
            (this,param_2,local_18[0],local_res8);
  return;
}

// operator() @ 142ce6d40

void __thiscall
`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_1>::operator()
          (void *this)

{
  FAutomationTestBase *this_00;
  longlong *plVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  FName *pFVar5;
  IModularFeatures *pIVar6;
  longlong lVar7;
  longlong lVar8;
  UScriptStruct *pUVar9;
  FName local_res8;
  undefined1 local_28 [16];
  undefined8 *local_18;
  undefined4 uStack_10;
  
  pFVar5 = ::FName::FName(&local_res8,"Identifier1");
  *(FName *)(*(longlong *)this + 0x1d0) = *pFVar5;
  pFVar5 = ::FName::FName(&local_res8,"Identifier2");
  *(FName *)(*(longlong *)this + 0x1d8) = *pFVar5;
  pFVar5 = ::FName::FName(&local_res8,"Identifier3");
  *(FName *)(*(longlong *)this + 0x1e0) = *pFVar5;
  FVar3 = UE::Editor::DataStorage::StorageFeatureName;
  pIVar6 = IModularFeatures::Get();
  iVar4 = (**(code **)((longlong)*pIVar6 + 0x18))(pIVar6);
  if (iVar4 < 1) {
    lVar8 = 0;
  }
  else {
    pIVar6 = IModularFeatures::Get();
    lVar7 = (**(code **)((longlong)*pIVar6 + 0x20))(pIVar6,FVar3,0);
    lVar8 = lVar7 + -8;
    if (lVar7 == 0) {
      lVar8 = 0;
    }
  }
  *(longlong *)(*(longlong *)this + 0x198) = lVar8;
  this_00 = *(FAutomationTestBase **)this;
  lVar8 = *(longlong *)&this_00[1].ExpectedMessages.Elements.field_0x10;
  ::FString::FString((FString *)local_28,"");
  pUVar9 = (UScriptStruct *)L"";
  if (local_28._8_4_ != 0) {
    pUVar9 = (UScriptStruct *)local_28._0_8_;
  }
  FAutomationTestBase::TestTrue(this_00,(wchar_t *)pUVar9,lVar8 != 0);
  if ((UScriptStruct *)local_28._0_8_ != (UScriptStruct *)0x0) {
    FMemory::Free((void *)local_28._0_8_);
  }
  lVar8 = *(longlong *)this;
  lVar7 = (**(code **)(**(longlong **)(lVar8 + 0x198) + 0x20))
                    (*(longlong **)(lVar8 + 0x198),lVar8 + 0x1a0);
  if (lVar7 == -1) {
    plVar1 = *(longlong **)(lVar8 + 0x198);
    pcVar2 = *(code **)(*plVar1 + 0x18);
    local_28._0_8_ = FTestColumnA::StaticStruct();
    local_28._8_8_ = FTestTagColumnA::StaticStruct();
    local_18 = (undefined8 *)local_28;
    uStack_10 = 2;
    lVar7 = (*pcVar2)(plVar1,&local_18,lVar8 + 0x1a0);
  }
  *(longlong *)(*(longlong *)this + 0x1a8) = lVar7;
  UE::Editor::DataStorage::Tests::QueryMergeTestFixture::RegisterTestTableRows
            (*(QueryMergeTestFixture **)this);
  return;
}

// operator() @ 142ce6ef0

void __thiscall
`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::RegisterAndRunQuery'::__l2::<lambda_1>::
operator()(void *this,IDirectQueryContext *param_1,ulong64 *param_2)

{
  bool *pbVar1;
  ulonglong uVar2;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *this_00;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  bool *pbVar9;
  ulong64 local_res8;
  undefined1 local_18 [16];
  
  this_00 = *(TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> **)
             this;
  plVar7 = (longlong *)(**(code **)((longlong)*param_1 + 0x10))(param_1,local_18);
  pbVar9 = (bool *)*plVar7;
  lVar4 = plVar7[1];
  uVar5 = *(int *)&(this_00->Elements).field_0x8 - *(int *)&(this_00->Elements).field_0x34;
  uVar8 = uVar5 + (int)lVar4;
  if (uVar5 < uVar8) {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar8);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this_00,uVar8);
    if (uVar8 < 4) {
      iVar6 = 1;
    }
    else {
      uVar2 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar3 & 0x1f);
    }
    if ((this_00->HashSize == 0) || (this_00->HashSize < iVar6)) {
      this_00->HashSize = iVar6;
      TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Rehash
                (this_00);
    }
  }
  pbVar1 = pbVar9 + (longlong)(int)lVar4 * 8;
  for (; pbVar9 != pbVar1; pbVar9 = pbVar9 + 8) {
    TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
    Emplace<unsigned___int64_const_&>(this_00,&local_res8,pbVar9);
  }
  return;
}

// operator() @ 142ce6fd0

void __thiscall
`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterCommands'::__l2::<lambda_1>::operator()
          (void *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ICoreProvider *pIVar3;
  wchar_t *_Str;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  if (param_1->ArrayNum == 1) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    iVar2 = _wtoi(_Str);
    if (0 < iVar2) {
      pIVar3 = UE::Editor::DataStorage::
               GetMutableDataStorageFeature<UE::Editor::DataStorage::ICoreProvider>
                         (UE::Editor::DataStorage::StorageFeatureName);
      local_10 = local_res10;
      local_18 = UE::Core::Private::Function::
                 TFunctionRefCaller<``UE::Editor::DataStorage::Debug::ProcessorTests::RegisterCommands'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,unsigned___int64>
                 ::Call;
      (**(code **)((longlong)*pIVar3 + 0x68))
                (pIVar3,UE::Editor::DataStorage::Debug::ProcessorTests::PrimaryTable,iVar2,&local_18
                );
    }
  }
  return;
}

// operator() @ 142ce7050

void __thiscall
`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_1>::operator()
          (void *this,IQueryContext *param_1,ulong64 *param_2,
          FTEDSProcessorTestsReferenceColumn *param_3)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  ulong64 uVar6;
  UScriptStruct *pUVar7;
  ulong64 *puVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint7 uStack_2f;
  
  iVar5 = (**(code **)((longlong)*param_1 + 8))(param_1);
  if (iVar5 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar11 = 0;
  if (0 < iVar5) {
    lVar9 = 0;
    do {
      uVar10 = (uint)((int)uVar11 < iVar5) & ~uVar11 >> 0x1f;
      if ((uVar10 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      cVar4 = (**(code **)((longlong)*param_1 + 0x88))(param_1,param_3->Reference);
      if (cVar4 == '\0') {
        uVar6 = (**(code **)((longlong)*param_1 + 0xa0))
                          (param_1,UE::Editor::DataStorage::Debug::ProcessorTests::SecondaryTable);
        param_3->Reference = uVar6;
        if ((uVar10 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar1 = param_2[lVar9];
        pUVar7 = FTEDSProcessorTestsReferenceColumn::StaticStruct();
        puVar8 = (ulong64 *)
                 (**(code **)((longlong)*param_1 + 0xe0))
                           (param_1,uVar6,pUVar7,
                            ICommonQueryWithEnvironmentContext::
                            AddColumn<FTEDSProcessorTestsReferenceColumn>'::__l3::<lambda_1>::
                            <lambda_invoker_cdecl>);
        *puVar8 = uVar1;
        puVar8[1] = (ulonglong)uStack_2f << 8;
      }
      uVar11 = uVar11 + 1;
      lVar9 = lVar9 + 1;
      param_3 = param_3 + 1;
    } while (lVar9 < iVar5);
  }
  return;
}

// operator() @ 142ce8970

void __thiscall
`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()
          (void *this)

{
  FAutomationSpecBase *pFVar1;
  FString local_48;
  code *local_38 [2];
  undefined **local_28;
  FAutomationSpecBase *local_20;
  undefined8 local_10;
  
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"ValidMerge");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar1 = *(FAutomationSpecBase **)this;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<``UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::`2'::<lambda_2>::operator()'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<``UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_2>::operator()'::__l2::<lambda_2>,void>
                ::Call;
  local_20 = pFVar1;
  ::FString::FString(&local_48,"InvalidMerge");
  FAutomationSpecBase::Describe(pFVar1,&local_48,(TFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 142ce8a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_2>::operator()
          (void *this,IQueryContext *param_1,ulong64 *param_2,
          FTEDSProcessorTestsReferenceColumn *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined ***pppuVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  code **local_98;
  longlong local_90;
  ulong64 *local_88;
  code *local_80;
  code **local_78;
  undefined1 local_70 [8];
  code *local_68 [2];
  undefined **local_58;
  ulong64 local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_88 = param_2;
  iVar3 = (**(code **)((longlong)*param_1 + 8))(param_1);
  lVar8 = (longlong)iVar3;
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar5 = 0;
  if (0 < iVar3) {
    lVar7 = 0;
    do {
      uVar6 = (uint)((int)uVar5 < iVar3) & ~uVar5 >> 0x1f;
      if (uVar6 == 0) {
        local_98 = (code **)(longlong)(int)uVar5;
        local_90 = lVar8;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_40 = (undefined ***)0x0;
      pcVar1 = *(code **)((longlong)*param_1 + 0x128);
      local_58 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::CreateSubqueryCallbackBinding<``UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::`2'::<lambda_2>::operator()'::`5'::<lambda_1>_>'::`2'::<lambda_1>,0,0>
                  ::_vftable_;
      local_50 = local_88[lVar7];
      local_68[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UE::Editor::DataStorage::Queries::CreateSubqueryCallbackBinding<``UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::ISubqueryContext_&>
                    ::Call;
      local_78 = local_68;
      local_80 = UE::Core::Private::Function::
                 TFunctionRefCaller<TFunction<void___cdecl(UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::ISubqueryContext_&)>,void,UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::ISubqueryContext_&>
                 ::Call;
      if (uVar6 == 0) {
        local_98 = (code **)(longlong)(int)uVar5;
        local_90 = lVar8;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_98 = &local_80;
      (*pcVar1)(param_1,local_70,0,param_3->Reference);
      if (local_68[0] != (code *)0x0) {
        pppuVar4 = &local_58;
        if (local_40 != (undefined ***)0x0) {
          pppuVar4 = local_40;
        }
        (*(code *)(*pppuVar4)[2])();
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 1;
      param_3 = param_3 + 1;
    } while (lVar7 < lVar8);
  }
  return;
}

// operator() @ 142ce9880

void __thiscall
`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::Define'::__l2::<lambda_3>::operator()
          (void *this)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  
  lVar4 = *(longlong *)this;
  puVar6 = *(undefined8 **)(lVar4 + 0x1b0);
  iVar2 = *(int *)(lVar4 + 0x1b8);
  puVar1 = puVar6 + iVar2;
  while( true ) {
    if (*(int *)(lVar4 + 0x1b8) != iVar2) {
      `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    lVar5 = *(longlong *)this;
    if (puVar6 == puVar1) break;
    (**(code **)(**(longlong **)(lVar5 + 0x198) + 0x70))(*(longlong **)(lVar5 + 0x198),*puVar6);
    puVar6 = puVar6 + 1;
  }
  uVar3 = *(uint *)(lVar5 + 0x1b8);
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  *(undefined4 *)(lVar5 + 0x1b8) = 0;
  if (*(uint *)(lVar5 + 0x1bc) != uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,(ForAnyElementType *)(lVar5 + 0x1b0),0,(int *)(lVar5 + 0x1bc));
  }
  lVar4 = *(longlong *)this;
  puVar6 = *(undefined8 **)(lVar4 + 0x1c0);
  iVar2 = *(int *)(lVar4 + 0x1c8);
  puVar1 = puVar6 + iVar2;
  while( true ) {
    if (*(int *)(lVar4 + 0x1c8) != iVar2) {
      `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    lVar5 = *(longlong *)this;
    if (puVar6 == puVar1) break;
    (**(code **)(**(longlong **)(lVar5 + 0x198) + 0x1b0))(*(longlong **)(lVar5 + 0x198),*puVar6);
    puVar6 = puVar6 + 1;
  }
  uVar3 = *(uint *)(lVar5 + 0x1c8);
  if (-1 < (int)uVar3) {
    *(undefined4 *)(lVar5 + 0x1c8) = 0;
    if (*(uint *)(lVar5 + 0x1cc) != uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar3,(ForAnyElementType *)(lVar5 + 0x1c0),0,(int *)(lVar5 + 0x1cc));
    }
    *(undefined8 *)(*(longlong *)this + 0x198) = 0;
    *(undefined8 *)(*(longlong *)this + 0x1d0) = 0;
    *(undefined8 *)(*(longlong *)this + 0x1d8) = 0;
    *(undefined8 *)(*(longlong *)this + 0x1e0) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// operator() @ 142cea660

void __thiscall
UE::Editor::DataStorage::<lambda_5>::operator()
          (<lambda_5> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  wchar_t *_Str;
  ICoreProvider *local_res10 [3];
  code *local_18;
  ICoreProvider **local_10;
  
  if (0 < param_1->ArrayNum) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (*(int *)(pFVar1 + 8) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)pFVar1;
    }
    iVar2 = _wtoi(_Str);
    local_res10[0] =
         GetMutableDataStorageFeature<UE::Editor::DataStorage::ICoreProvider>(StorageFeatureName);
    local_10 = local_res10;
    local_18 = Core::Private::Function::
               TFunctionRefCaller<`UE::Editor::DataStorage::<lambda_5>::operator()'::__l5::<lambda_1>,void,unsigned___int64>
               ::Call;
    (**(code **)((longlong)*local_res10[0] + 0x68))
              (local_res10[0],DataStorage::Private::PerformanceTestCommandTable,iVar2,&local_18);
  }
  return;
}

// operator() @ 142cea6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Editor::DataStorage::<lambda_6>::operator()
          (<lambda_6> *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  IModularFeatures *pIVar5;
  longlong lVar6;
  Select *this_00;
  FSimpleQuery this_01;
  UPackage *pUVar7;
  FQueryDescription *pFVar8;
  undefined8 uVar9;
  undefined ***pppuVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_d58 [32];
  undefined1 local_d38 [8];
  undefined8 *local_d30;
  ulonglong local_d28;
  undefined1 local_d20 [8];
  code *local_d18;
  code **local_d10;
  code *local_d08 [2];
  undefined **local_cf8;
  undefined8 **local_cf0;
  undefined ***local_ce0;
  FQueryDescription local_cd8;
  ulonglong local_28;
  
  FVar3 = StorageFeatureName;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d58;
  pIVar5 = IModularFeatures::Get();
  iVar4 = (**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,FVar3);
  if (iVar4 < 1) {
    plVar13 = (longlong *)0x0;
  }
  else {
    pIVar5 = IModularFeatures::Get();
    lVar6 = (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,FVar3,0);
    plVar13 = (longlong *)(lVar6 + -8);
    if (lVar6 == 0) {
      plVar13 = (longlong *)0x0;
    }
  }
  pcVar2 = *(code **)(*plVar13 + 0x1a8);
  this_00 = Queries::Select::Select((Select *)&local_cd8);
  this_01 = Queries::Select::Where(this_00);
  if (Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar7 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTest_PingPongPrePhys,(UObject *)pUVar7,
                         L"Test_PingPongPrePhys");
  }
  Queries::FSimpleQuery::All
            ((FSimpleQuery *)this_01.Query,
             Z_Registration_Info_UScriptStruct_FTest_PingPongPrePhys.OuterSingleton);
  pFVar8 = Queries::FSimpleQuery::Compile(this_01.Query);
  uVar9 = (*pcVar2)(plVar13,pFVar8);
  FQueryDescription::~FQueryDescription(&local_cd8);
  local_d30 = (undefined8 *)0x0;
  local_cf8 = &Core::Private::Function::
               TFunction_OwnedObject<`UE::Editor::DataStorage::Queries::CreateDirectQueryCallbackBinding<`UE::Editor::DataStorage::<lambda_6>::operator()'::`2'::<lambda_1>_>'::`2'::<lambda_1>,0,0>
               ::_vftable_;
  local_cf0 = &local_d30;
  local_d28 = 0;
  local_ce0 = (undefined ***)0x0;
  local_d08[0] = Core::Private::Function::
                 TFunctionRefCaller<`UE::Editor::DataStorage::Queries::CreateDirectQueryCallbackBinding<`UE::Editor::DataStorage::<lambda_6>::operator()'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::IDirectQueryContext_&>
                 ::Call;
  local_d10 = local_d08;
  local_d18 = Core::Private::Function::
              TFunctionRefCaller<TFunction<void___cdecl(UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::IDirectQueryContext_&)>,void,UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::IDirectQueryContext_&>
              ::Call;
  (**(code **)(*plVar13 + 0x1d8))(plVar13,local_d20,uVar9,&local_d18);
  if (local_d08[0] != (code *)0x0) {
    pppuVar10 = &local_cf8;
    if (local_ce0 != (undefined ***)0x0) {
      pppuVar10 = local_ce0;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  iVar4 = (int)local_d28;
  uVar11 = (ulonglong)(int)local_d28;
  puVar1 = local_d30 + uVar11;
  puVar12 = local_d30;
  while( true ) {
    if ((int)uVar11 != iVar4) {
      `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_d38);
    }
    if (puVar12 == puVar1) break;
    (**(code **)(*plVar13 + 0x70))(plVar13,*puVar12);
    uVar11 = local_d28 & 0xffffffff;
    puVar12 = puVar12 + 1;
  }
  (**(code **)(*plVar13 + 0x1b0))(plVar13,uVar9);
  if (local_d30 != (undefined8 *)0x0) {
    FMemory::Free(local_d30);
  }
  return;
}

// Compare @ 142cf4500

bool __cdecl
UE::Editor::DataStorage::Tests::Private::Compare
          (FRowHandleArray *param_1,TArrayView<unsigned___int64_const_,int> *param_2)

{
  ulong64 *puVar1;
  int iVar2;
  ulong64 uVar3;
  int iVar4;
  ulong64 *puVar5;
  longlong lVar6;
  FRowHandleArrayView local_18;
  
  FRowHandleArray::GetRows(param_1,&local_18);
  iVar2 = param_2->ArrayNum;
  iVar4 = FRowHandleArrayView::Num(&local_18);
  if (iVar4 != iVar2) {
    return false;
  }
  puVar5 = FRowHandleArrayView::GetData(&local_18);
  iVar4 = 0;
  if (0 < iVar2) {
    lVar6 = (longlong)param_2->DataPtr - (longlong)puVar5;
    do {
      uVar3 = *puVar5;
      puVar1 = (ulong64 *)(lVar6 + (longlong)puVar5);
      puVar5 = puVar5 + 1;
      if (uVar3 != *puVar1) {
        return false;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return true;
}

// CreateTestRow @ 142cf46e0

ulong64 __thiscall
UE::Editor::DataStorage::Tests::QueryMergeTestFixture::CreateTestRow
          (QueryMergeTestFixture *this,ulong64 param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulong64 uVar6;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar7;
  ulong64 local_18 [2];
  
  local_18[0] = (**(code **)((longlong)*this->TedsInterface + 0x58))();
  pTVar7 = &this->Rows;
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->Rows).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
  }
  iVar5 = (this->Rows).ArrayNum;
  piVar1 = &(this->Rows).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar7->AllocatorInstance,piVar1);
  }
  (this->Rows).ArrayNum = iVar5 + 1;
  *(ulong64 *)((pTVar7->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_18[0];
  return local_18[0];
}

// OnProcessorTestsEnabled @ 142cf7a60

void __cdecl
UE::Editor::DataStorage::Debug::ProcessorTests::OnProcessorTestsEnabled(IConsoleVariable *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  IConsoleManager *pIVar3;
  FName FVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  undefined8 uVar10;
  IModularFeatures *pIVar11;
  longlong lVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  longlong *plVar15;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  
  cVar5 = (**(code **)(*(longlong *)param_1 + 0xc0))();
  FVar4 = StorageFeatureName;
  if (cVar5 == '\0') {
    pIVar11 = IModularFeatures::Get();
    iVar7 = (**(code **)((longlong)*pIVar11 + 0x18))(pIVar11,FVar4);
    if (iVar7 < 1) {
      plVar15 = (longlong *)0x0;
    }
    else {
      pIVar11 = IModularFeatures::Get();
      lVar12 = (**(code **)((longlong)*pIVar11 + 0x20))(pIVar11,FVar4);
      plVar15 = (longlong *)(lVar12 + -8);
      if (lVar12 == 0) {
        plVar15 = (longlong *)0x0;
      }
    }
    iVar7 = RegisteredQueries.ArrayNum;
    uVar13 = (ulonglong)RegisteredQueries.ArrayNum;
    pFVar1 = RegisteredQueries.AllocatorInstance.Data + uVar13 * 8;
    FVar14.Data = RegisteredQueries.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar13 != iVar7) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar14.Data == pFVar1) break;
      (**(code **)(*plVar15 + 0x1b0))(plVar15,*(undefined8 *)FVar14.Data);
      uVar13 = (ulonglong)(uint)RegisteredQueries.ArrayNum;
      FVar14.Data = FVar14.Data + 8;
    }
    RegisteredQueries.ArrayNum = 0;
    if (RegisteredQueries.ArrayMax != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&RegisteredQueries.AllocatorInstance,0,&RegisteredQueries.ArrayMax);
    }
    iVar7 = RegisteredCommands.ArrayNum;
    uVar13 = (ulonglong)RegisteredCommands.ArrayNum;
    pFVar1 = RegisteredCommands.AllocatorInstance.Data + uVar13 * 8;
    FVar14.Data = RegisteredCommands.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar13 != iVar7) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<IConsoleCommand_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (FVar14.Data == pFVar1) break;
      uVar10 = *(undefined8 *)FVar14.Data;
      if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
          (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Singleton != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x4fb,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))(IConsoleManager::Singleton,uVar10)
      ;
      uVar13 = (ulonglong)(uint)RegisteredCommands.ArrayNum;
      FVar14.Data = FVar14.Data + 8;
    }
    RegisteredCommands.ArrayNum = 0;
    if (RegisteredCommands.ArrayMax != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&RegisteredCommands.AllocatorInstance,0,&RegisteredCommands.ArrayMax);
    }
    return;
  }
  RegisterProcessors();
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = IConsoleManager::Singleton;
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  pcVar2 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  local_30 = &local_70;
  puVar8 = Core::Private::DelegateAllocate(0x20,&local_70);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterCommands'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  uVar10 = (*pcVar2)(pIVar3,L"TEDS.Tests.ProcessorTests.AddPrimaryRows",L"",&local_78,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  if (RegisteredCommands.ArrayNum == RegisteredCommands.ArrayMax) {
    RegisteredCommands.ArrayNum =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&RegisteredCommands.AllocatorInstance,&RegisteredCommands.ArrayMax);
  }
  lVar12 = (longlong)RegisteredCommands.ArrayNum;
  RegisteredCommands.ArrayNum = RegisteredCommands.ArrayNum + 1;
  *(undefined8 *)(RegisteredCommands.AllocatorInstance.Data + lVar12 * 8) = uVar10;
  return;
}

// PrepareForQueryBinding @ 142cf7dd0

void __cdecl
UE::Editor::DataStorage::Queries::Private::PrepareForQueryBinding
          (FQueryDescription *param_1,FProcessor *param_2)

{
  FName *pFVar1;
  int *piVar2;
  TArray<FName,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<FName> FVar7;
  ForElementType<FName> FVar8;
  
  (param_1->Callback).Type = Processor;
  pFVar1 = &param_2->BeforeGroup;
  (param_1->Callback).Phase = param_2->Phase;
  (param_1->Callback).Group = param_2->Group;
  (param_1->Callback).ActivationName = param_2->ActivationName;
  (param_1->Callback).Active = param_2->ActivationName == (FName)0x0;
  if (*pFVar1 != (FName)0x0) {
    FVar8 = (param_1->Callback).BeforeGroups.AllocatorInstance.SecondaryData;
    FVar7 = (ForElementType<FName>)param_1;
    if (FVar8 != (ForElementType<FName>)0x0) {
      FVar7 = FVar8;
    }
    if ((ulonglong)FVar7 <= pFVar1) {
      FVar7 = (ForElementType<FName>)param_1;
      if (FVar8 != (ForElementType<FName>)0x0) {
        FVar7 = FVar8;
      }
      if ((pFVar1 < (undefined1 *)
                    ((longlong)FVar7 + (longlong)(param_1->Callback).BeforeGroups.ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (param_1->Callback).BeforeGroups.ArrayNum;
    piVar2 = &(param_1->Callback).BeforeGroups.ArrayMax;
    if (iVar6 == *piVar2) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                        (0x408,(ForElementType<FName> *)param_1,piVar2);
    }
    (param_1->Callback).BeforeGroups.ArrayNum = iVar6 + 1;
    FVar8 = (param_1->Callback).BeforeGroups.AllocatorInstance.SecondaryData;
    FVar7 = (ForElementType<FName>)param_1;
    if (FVar8 != (ForElementType<FName>)0x0) {
      FVar7 = FVar8;
    }
    *(FName *)((longlong)FVar7 + (longlong)iVar6 * 8) = *pFVar1;
  }
  pFVar1 = &param_2->AfterGroup;
  if (param_2->AfterGroup != (FName)0x0) {
    FVar8 = (param_1->Callback).AfterGroups.AllocatorInstance.SecondaryData;
    pTVar3 = &(param_1->Callback).AfterGroups;
    if (FVar8 == (ForElementType<FName>)0x0) {
      FVar8 = (ForElementType<FName>)pTVar3;
    }
    if ((((ulonglong)FVar8 <= pFVar1) &&
        (pFVar1 < (undefined1 *)
                  ((longlong)FVar8 + (longlong)(param_1->Callback).AfterGroups.ArrayMax * 8))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (param_1->Callback).AfterGroups.ArrayNum;
    piVar2 = &(param_1->Callback).AfterGroups.ArrayMax;
    if (iVar6 == *piVar2) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                        (0x408,&pTVar3->AllocatorInstance,piVar2);
    }
    (param_1->Callback).AfterGroups.ArrayNum = iVar6 + 1;
    FVar8 = (param_1->Callback).AfterGroups.AllocatorInstance.SecondaryData;
    if (FVar8 == (ForElementType<FName>)0x0) {
      FVar8 = (ForElementType<FName>)pTVar3;
    }
    *(FName *)((longlong)FVar8 + (longlong)iVar6 * 8) = *pFVar1;
  }
  (param_1->Callback).ExecutionMode = param_2->ExecutionMode;
  param_1->bShouldBatchModifications = param_2->bBatchModifications;
  return;
}

// RegisterAndRunQuery @ 142cf7fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> * __thiscall
UE::Editor::DataStorage::Tests::QueryMergeTestFixture::RegisterAndRunQuery
          (QueryMergeTestFixture *this,
          TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>
          *__return_storage_ptr__,FQueryDescription *param_1)

{
  int *piVar1;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar7;
  longlong lVar8;
  undefined ***pppuVar9;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  FScriptContainerElement *local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_78;
  code *local_70;
  code **local_68;
  undefined1 local_60 [8];
  code *local_58 [2];
  undefined **local_48;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_78 = (**(code **)((longlong)*this->TedsInterface + 0x1a8))(this->TedsInterface,param_1);
  pTVar2 = &this->QueryHandles;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_78) &&
     (lVar8 = (longlong)(this->QueryHandles).ArrayMax,
     (FScriptContainerElement *)&local_78 < pFVar3 + lVar8 * 8)) {
    local_90 = (longlong)(this->QueryHandles).ArrayNum;
    local_88 = 8;
    local_a8 = &local_78;
    local_a0 = pFVar3;
    local_98 = lVar8;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *)
               (*pcVar4)();
      return pTVar7;
    }
  }
  iVar6 = (this->QueryHandles).ArrayNum;
  piVar1 = &(this->QueryHandles).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->QueryHandles).ArrayNum = iVar6 + 1;
  *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_78;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  local_30 = (undefined ***)0x0;
  local_48 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1____CreateDirectQueryCallbackBinding_V<lambda_1>__1__RegisterAndRunQuery_QueryMergeTestFixture_Tests_DataStorage_Editor_UE__IEAA_AV__TSet__KU__DefaultKeyFuncs__K_0A___VFDefaultSetAllocator____AEAUFQueryDescription_567__Z__Queries_DataStorage_Editor_UE__YA_AV__TFunction___A6AXAEBUFQueryDescription_DataStorage_Editor_UE__AEAUIDirectQueryContext_234__Z____QEAV1_1__RegisterAndRunQuery_QueryMergeTestFixture_Tests_345_IEAA_AV__TSet__KU__DefaultKeyFuncs__K_0A___VFDefaultSetAllocator____AEAUFQueryDescription_345__Z__Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_58[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::Editor::DataStorage::Queries::CreateDirectQueryCallbackBinding<`UE::Editor::DataStorage::Tests::QueryMergeTestFixture::RegisterAndRunQuery'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::IDirectQueryContext_&>
                ::Call;
  local_68 = local_58;
  local_70 = Core::Private::Function::
             TFunctionRefCaller<TFunction<void___cdecl(UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::IDirectQueryContext_&)>,void,UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::IDirectQueryContext_&>
             ::Call;
  local_40 = __return_storage_ptr__;
  (**(code **)((longlong)*this->TedsInterface + 0x1d8))
            (this->TedsInterface,local_60,local_78,&local_70);
  if (local_58[0] != (code *)0x0) {
    pppuVar9 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar9 = local_30;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  return __return_storage_ptr__;
}

// RegisterCommands @ 142cf8160

void __cdecl UE::Editor::DataStorage::Debug::ProcessorTests::RegisterCommands(void)

{
  code *pcVar1;
  IConsoleManager *pIVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDestructionSentinel local_28;
  FDelegateAllocation *local_10;
  
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar2 = IConsoleManager::Singleton;
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  pcVar1 = *(code **)((longlong)*IConsoleManager::Singleton + 0xa0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_28);
  local_10 = &local_50;
  puVar4 = Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterCommands'::`2'::<lambda_1>_>
               ::_vftable_;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  uVar6 = (*pcVar1)(pIVar2,L"TEDS.Tests.ProcessorTests.AddPrimaryRows",L"",&local_58,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  if (RegisteredCommands.ArrayNum == RegisteredCommands.ArrayMax) {
    RegisteredCommands.ArrayNum =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&RegisteredCommands.AllocatorInstance,&RegisteredCommands.ArrayMax);
  }
  lVar7 = (longlong)RegisteredCommands.ArrayNum;
  RegisteredCommands.ArrayNum = RegisteredCommands.ArrayNum + 1;
  *(undefined8 *)(RegisteredCommands.AllocatorInstance.Data + lVar7 * 8) = uVar6;
  return;
}

// RegisterProcessors @ 142cf8330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors(void)

{
  code *pcVar1;
  FName FVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  IModularFeatures *pIVar9;
  longlong lVar10;
  FName *pFVar11;
  FProcessor *pFVar12;
  UScriptStruct *pUVar13;
  FSimpleQuery FVar14;
  FQueryDescription *pFVar15;
  undefined8 uVar16;
  Select *this;
  ulong64 uVar17;
  FDependency this_00;
  FDependency *this_01;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined1 auStack_d98 [32];
  undefined1 local_d78;
  UScriptStruct **local_d68;
  undefined4 uStack_d60;
  FName local_d58;
  UScriptStruct *local_d50;
  UScriptStruct *local_d48;
  FName local_d40;
  FProcessor local_d38;
  code *local_d08;
  undefined8 uStack_d00;
  longlong local_cf8;
  undefined1 uStack_cf0;
  undefined3 uStack_cef;
  undefined4 uStack_cec;
  undefined8 local_ce8;
  longlong *plStack_ce0;
  undefined1 local_cd8 [80];
  undefined4 local_c88;
  undefined4 uStack_c84;
  undefined4 uStack_c80;
  undefined4 uStack_c7c;
  undefined4 local_c78;
  undefined4 uStack_c74;
  undefined4 uStack_c70;
  undefined4 uStack_c6c;
  FName local_c68;
  ulonglong local_28;
  
  FVar2 = StorageFeatureName;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d98;
  pIVar9 = IModularFeatures::Get();
  iVar8 = (**(code **)((longlong)*pIVar9 + 0x18))(pIVar9,FVar2);
  if (iVar8 < 1) {
    plVar20 = (longlong *)0x0;
  }
  else {
    pIVar9 = IModularFeatures::Get();
    lVar10 = (**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,FVar2,0);
    plVar20 = (longlong *)(lVar10 + -8);
    if (lVar10 == 0) {
      plVar20 = (longlong *)0x0;
    }
  }
  if (PrimaryTable == 0xffffffffffffffff) {
    pFVar11 = ::FName::FName(&local_d58,L"ProcessorTests Primary Table");
    pcVar1 = *(code **)(*plVar20 + 0x18);
    local_d50 = FTEDSProcessorTestsReferenceColumn::StaticStruct();
    local_d48 = FTEDSProcessorTests_PrimaryTag::StaticStruct();
    local_d68 = &local_d50;
    uStack_d60 = 2;
    PrimaryTable = (*pcVar1)(plVar20,&local_d68,pFVar11);
  }
  if (SecondaryTable == 0xffffffffffffffff) {
    pFVar11 = ::FName::FName(&local_d58,L"ProcessorTests Secondary Table");
    pcVar1 = *(code **)(*plVar20 + 0x18);
    local_d50 = FTEDSProcessorTestsReferenceColumn::StaticStruct();
    local_d48 = FTEDSProcessorTests_SecondaryTag::StaticStruct();
    local_d68 = &local_d50;
    uStack_d60 = 2;
    SecondaryTable = (*pcVar1)(plVar20,&local_d68,pFVar11);
  }
  pcVar1 = *(code **)(*plVar20 + 0x1a8);
  pFVar11 = (FName *)(**(code **)(*plVar20 + 0x1c0))(plVar20,&local_d58,0);
  pFVar12 = Queries::FProcessor::FProcessor(&local_d38,PrePhysics,*pFVar11);
  pFVar11 = ::FName::FName(&local_d40,L"TEST: Creating a row for primary reference column");
  FVar2 = *pFVar11;
  Queries::Select::Select((Select *)local_cd8);
  pUVar13 = FTEDSProcessorTestsReferenceColumn::StaticStruct();
  Queries::Select::ReadWrite((Select *)local_cd8,pUVar13);
  Queries::Private::PrepareForQueryBinding((FQueryDescription *)local_cd8,pFVar12);
  uVar5 = uStack_c7c;
  uVar4 = uStack_c80;
  uVar3 = local_cd8._72_8_;
  local_d08 = (code *)local_cd8._64_8_;
  uVar16 = CONCAT44(uStack_c74,local_c78);
  plVar19 = (longlong *)CONCAT44(uStack_c6c,uStack_c70);
  uStack_cf0 = local_d78;
  local_cd8._64_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_1>,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_1>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTEDSProcessorTestsReferenceColumn_*>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::IQueryContext_&>
       ::Call;
  local_cd8._72_8_ = uStack_d00;
  local_c78 = (undefined4)local_ce8;
  uStack_c74 = local_ce8._4_4_;
  uStack_c70 = 0;
  uStack_c6c = 0;
  local_c68 = FVar2;
  local_c88 = 0x509d9e28;
  uStack_c84 = 1;
  uStack_c80 = _uStack_cf0;
  uStack_c7c = uStack_cec;
  uStack_d00 = uVar3;
  _uStack_cf0 = uVar4;
  uStack_cec = uVar5;
  local_ce8 = uVar16;
  if (local_d08 != (code *)0x0) {
    plVar18 = &local_cf8;
    if (plVar19 != (longlong *)0x0) {
      plVar18 = plVar19;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  FVar14 = Queries::Select::Where((Select *)local_cd8);
  pUVar13 = FTEDSProcessorTests_PrimaryTag::StaticStruct();
  Queries::FSimpleQuery::All((FSimpleQuery *)FVar14.Query,pUVar13);
  pUVar13 = FTEDSProcessorTests_Linked::StaticStruct();
  Queries::FSimpleQuery::None((FSimpleQuery *)FVar14.Query,pUVar13);
  pFVar15 = Queries::FSimpleQuery::Compile(FVar14.Query);
  uVar16 = (*pcVar1)(plVar20,pFVar15);
  FQueryDescription::~FQueryDescription((FQueryDescription *)local_cd8);
  if (RegisteredQueries.ArrayNum == RegisteredQueries.ArrayMax) {
    RegisteredQueries.ArrayNum =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&RegisteredQueries.AllocatorInstance,&RegisteredQueries.ArrayMax);
  }
  lVar10 = (longlong)RegisteredQueries.ArrayNum;
  RegisteredQueries.ArrayNum = RegisteredQueries.ArrayNum + 1;
  *(undefined8 *)(RegisteredQueries.AllocatorInstance.Data + lVar10 * 8) = uVar16;
  pcVar1 = *(code **)(*plVar20 + 0x1a8);
  this = Queries::Select::Select((Select *)local_cd8);
  pUVar13 = FTEDSProcessorTestsReferenceColumn::StaticStruct();
  Queries::Select::ReadOnly(this,pUVar13);
  FVar14 = Queries::Select::Where(this);
  pUVar13 = FTEDSProcessorTests_PrimaryTag::StaticStruct();
  Queries::FSimpleQuery::All((FSimpleQuery *)FVar14.Query,pUVar13);
  pUVar13 = FTEDSProcessorTests_Linked::StaticStruct();
  Queries::FSimpleQuery::None((FSimpleQuery *)FVar14.Query,pUVar13);
  pFVar15 = Queries::FSimpleQuery::Compile(FVar14.Query);
  uVar17 = (*pcVar1)(plVar20,pFVar15);
  FQueryDescription::~FQueryDescription((FQueryDescription *)local_cd8);
  if (RegisteredQueries.ArrayNum == RegisteredQueries.ArrayMax) {
    RegisteredQueries.ArrayNum =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&RegisteredQueries.AllocatorInstance,&RegisteredQueries.ArrayMax);
  }
  lVar10 = (longlong)RegisteredQueries.ArrayNum;
  RegisteredQueries.ArrayNum = RegisteredQueries.ArrayNum + 1;
  *(ulong64 *)(RegisteredQueries.AllocatorInstance.Data + lVar10 * 8) = uVar17;
  pcVar1 = *(code **)(*plVar20 + 0x1a8);
  pFVar11 = (FName *)(**(code **)(*plVar20 + 0x1c0))(plVar20,&local_d68,0);
  pFVar12 = Queries::FProcessor::FProcessor(&local_d38,DuringPhysics,*pFVar11);
  pFVar11 = ::FName::FName(&local_d40,L"TEST: Creating a row for secondary reference column");
  FVar2 = *pFVar11;
  Queries::Select::Select((Select *)local_cd8);
  pUVar13 = FTEDSProcessorTestsReferenceColumn::StaticStruct();
  Queries::Select::ReadWrite((Select *)local_cd8,pUVar13);
  Queries::Private::PrepareForQueryBinding((FQueryDescription *)local_cd8,pFVar12);
  uVar7 = uStack_c7c;
  uVar6 = uStack_c80;
  uVar5 = uStack_c84;
  uVar4 = local_c88;
  uVar3 = local_cd8._72_8_;
  local_d08 = (code *)local_cd8._64_8_;
  uVar16 = CONCAT44(uStack_c74,local_c78);
  plStack_ce0 = (longlong *)CONCAT44(uStack_c6c,uStack_c70);
  uStack_cf0 = local_d78;
  local_cd8._64_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Editor::DataStorage::Queries::Private::BindQueryFunction_Expand<UE::Editor::DataStorage::IQueryContext,0,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_2>,`UE::Editor::DataStorage::Debug::ProcessorTests::RegisterProcessors'::__l2::<lambda_2>,UE::Editor::DataStorage::IQueryContext_&,unsigned___int64_const_*,FTEDSProcessorTestsReferenceColumn_*>'::__l2::<lambda_1>,void,UE::Editor::DataStorage::FQueryDescription_const_&,UE::Editor::DataStorage::IQueryContext_&>
       ::Call;
  local_cd8._72_8_ = uStack_d00;
  local_c78 = (undefined4)local_ce8;
  uStack_c74 = local_ce8._4_4_;
  uStack_c70 = 0;
  uStack_c6c = 0;
  local_c68 = FVar2;
  local_c88 = 0x509d9e48;
  uStack_c84 = 1;
  uStack_c80 = _uStack_cf0;
  uStack_c7c = uStack_cec;
  uStack_d00 = uVar3;
  local_cf8 = CONCAT44(uVar5,uVar4);
  _uStack_cf0 = uVar6;
  uStack_cec = uVar7;
  local_ce8 = uVar16;
  if (local_d08 != (code *)0x0) {
    plVar19 = &local_cf8;
    if (plStack_ce0 != (longlong *)0x0) {
      plVar19 = plStack_ce0;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  FVar14 = Queries::Select::Where((Select *)local_cd8);
  pUVar13 = FTEDSProcessorTests_SecondaryTag::StaticStruct();
  Queries::FSimpleQuery::All((FSimpleQuery *)FVar14.Query,pUVar13);
  pUVar13 = FTEDSProcessorTests_Linked::StaticStruct();
  Queries::FSimpleQuery::None((FSimpleQuery *)FVar14.Query,pUVar13);
  this_00 = Queries::FSimpleQuery::DependsOn(FVar14.Query);
  this_01 = Queries::FDependency::SubQuery((FDependency *)this_00.Query,uVar17);
  pFVar15 = Queries::FDependency::Compile(this_01);
  uVar16 = (*pcVar1)(plVar20,pFVar15);
  FQueryDescription::~FQueryDescription((FQueryDescription *)local_cd8);
  if (RegisteredQueries.ArrayNum == RegisteredQueries.ArrayMax) {
    RegisteredQueries.ArrayNum =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&RegisteredQueries.AllocatorInstance,&RegisteredQueries.ArrayMax);
  }
  lVar10 = (longlong)RegisteredQueries.ArrayNum;
  RegisteredQueries.ArrayNum = RegisteredQueries.ArrayNum + 1;
  *(undefined8 *)(RegisteredQueries.AllocatorInstance.Data + lVar10 * 8) = uVar16;
  return;
}

// RegisterTestTableRows @ 142cf8d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
UE::Editor::DataStorage::Tests::QueryMergeTestFixture::RegisterTestTableRows
          (QueryMergeTestFixture *this)

{
  ICoreProvider *pIVar1;
  code *pcVar2;
  ulong64 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  UScriptStruct *local_58;
  FName FStack_50;
  UScriptStruct *local_48;
  FName FStack_40;
  UScriptStruct *local_38;
  UScriptStruct *local_30;
  UScriptStruct *local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
  uVar3 = CreateTestRow(this,this->TestTable);
  ICoreProvider::AddColumns<FTestColumnB,FTestColumnC,FTestColumnD>(this->TedsInterface,uVar3);
  pIVar1 = this->TedsInterface;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0xb8);
  local_38 = FTestTagColumnB::StaticStruct();
  local_30 = FTestTagColumnC::StaticStruct();
  local_28 = FTestTagColumnD::StaticStruct();
  local_58 = (UScriptStruct *)&stack0xffffffffffffffc8;
  FStack_40.ComparisonIndex.Value = 3;
  FStack_50.ComparisonIndex.Value = 3;
  FStack_50.Number = FStack_40.Number;
  local_48 = local_58;
  (*pcVar2)(pIVar1,uVar3,&local_58);
  pIVar1 = this->TedsInterface;
  local_48 = FTestColumnDynamic::StaticStruct();
  FStack_40 = this->Identifier1;
  uVar4 = (**(code **)((longlong)*pIVar1 + 0x128))(pIVar1,&local_48);
  (**(code **)((longlong)*pIVar1 + 0xa8))(pIVar1,uVar3,uVar4);
  pIVar1 = this->TedsInterface;
  local_48 = FTestColumnDynamic::StaticStruct();
  FStack_40 = this->Identifier2;
  uVar4 = (**(code **)((longlong)*pIVar1 + 0x128))(pIVar1,&local_48);
  (**(code **)((longlong)*pIVar1 + 0xa8))(pIVar1,uVar3,uVar4);
  pIVar1 = this->TedsInterface;
  local_48 = FTestColumnDynamic::StaticStruct();
  FStack_40 = this->Identifier3;
  uVar4 = (**(code **)((longlong)*pIVar1 + 0x128))(pIVar1,&local_48);
  (**(code **)((longlong)*pIVar1 + 0xa8))(pIVar1,uVar3,uVar4);
  uVar3 = CreateTestRow(this,this->TestTable);
  pIVar1 = this->TedsInterface;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0xb8);
  local_48 = FTestColumnB::StaticStruct();
  FStack_40 = (FName)FTestColumnD::StaticStruct();
  local_58 = (UScriptStruct *)&local_48;
  FStack_50.ComparisonIndex.Value = 2;
  (*pcVar2)(pIVar1,uVar3,&local_58);
  pIVar1 = this->TedsInterface;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0xb8);
  local_58 = FTestTagColumnB::StaticStruct();
  FStack_50 = (FName)FTestTagColumnC::StaticStruct();
  local_48 = (UScriptStruct *)&local_58;
  FStack_40.ComparisonIndex.Value = 2;
  (*pcVar2)(pIVar1,uVar3,&local_48);
  pIVar1 = this->TedsInterface;
  local_58 = FTestColumnDynamic::StaticStruct();
  FStack_50 = this->Identifier1;
  uVar4 = (**(code **)((longlong)*pIVar1 + 0x128))(pIVar1,&local_58);
  (**(code **)((longlong)*pIVar1 + 0xa8))(pIVar1,uVar3,uVar4);
  uVar3 = CreateTestRow(this,this->TestTable);
  pIVar1 = this->TedsInterface;
  local_58 = FTestColumnDynamic::StaticStruct();
  FStack_50 = this->Identifier2;
  uVar4 = (**(code **)((longlong)*pIVar1 + 0x128))(pIVar1,&local_58);
  (**(code **)((longlong)*pIVar1 + 0xa8))(pIVar1,uVar3,uVar4);
  uVar3 = CreateTestRow(this,this->TestTable);
  pIVar1 = this->TedsInterface;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0xb8);
  local_58 = FTestColumnC::StaticStruct();
  FStack_50 = (FName)FTestColumnD::StaticStruct();
  local_48 = (UScriptStruct *)&local_58;
  FStack_40.ComparisonIndex.Value = 2;
  (*pcVar2)(pIVar1,uVar3,&local_48);
  pIVar1 = this->TedsInterface;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0xb8);
  local_48 = FTestTagColumnD::StaticStruct();
  local_58 = (UScriptStruct *)&local_48;
  FStack_50.ComparisonIndex.Value = 1;
  (*pcVar2)(pIVar1,uVar3,&local_58);
  pIVar1 = this->TedsInterface;
  local_58 = FTestColumnDynamic::StaticStruct();
  FStack_50 = this->Identifier3;
  uVar4 = (**(code **)((longlong)*pIVar1 + 0x128))(pIVar1,&local_58);
  (**(code **)((longlong)*pIVar1 + 0xa8))(pIVar1,uVar3,uVar4);
  uVar3 = CreateTestRow(this,this->TestTable);
  ICoreProvider::AddColumns<FTestColumnB,FTestColumnC,FTestColumnD>(this->TedsInterface,uVar3);
  pIVar1 = this->TedsInterface;
  local_58 = FTestColumnDynamic::StaticStruct();
  FStack_50 = this->Identifier2;
  uVar4 = (**(code **)((longlong)*pIVar1 + 0x128))(pIVar1,&local_58);
  (**(code **)((longlong)*pIVar1 + 0xa8))(pIVar1,uVar3,uVar4);
  pIVar1 = this->TedsInterface;
  local_58 = FTestColumnDynamic::StaticStruct();
  FStack_50 = this->Identifier3;
  uVar4 = (**(code **)((longlong)*pIVar1 + 0x128))(pIVar1,&local_58);
  (**(code **)((longlong)*pIVar1 + 0xa8))(pIVar1,uVar3,uVar4);
  return;
}

// TestMatching @ 142d19230

bool __cdecl
UE::Editor::DataStorage::Tests::TestMatching
          (FConditions *param_1,
          TArray<UE::Editor::DataStorage::Queries::FColumnBase,TSizedDefaultAllocator<32>_> *param_2
          ,bool param_3,bool param_4)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  IModularFeatures *pIVar9;
  longlong lVar10;
  FEditorStorageQueryConditionCompileContext *pFVar11;
  FAutomationTestFramework *pFVar12;
  ulonglong uVar13;
  ICoreProvider *pIVar14;
  wchar_t *pwVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  undefined1 local_res10 [8];
  <lambda_1> local_res18;
  undefined1 local_res20 [8];
  FWeakObjectPtr local_98;
  TArray<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_90;
  FString local_80;
  FColumnBase *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<UE::Editor::DataStorage::Queries::FColumnBase_const_,int> local_58;
  FEditorStorageQueryConditionCompileContext local_48;
  
  FVar4 = StorageFeatureName;
  local_res18 = (<lambda_1>)param_3;
  pIVar9 = IModularFeatures::Get();
  iVar8 = (**(code **)((longlong)*pIVar9 + 0x18))(pIVar9,FVar4);
  if (iVar8 < 1) {
    pIVar14 = (ICoreProvider *)0x0;
  }
  else {
    pIVar9 = IModularFeatures::Get();
    lVar10 = (**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,FVar4,0);
    pIVar14 = (ICoreProvider *)(lVar10 + -8);
    if (lVar10 == 0) {
      pIVar14 = (ICoreProvider *)0x0;
    }
  }
  pFVar11 = Queries::FEditorStorageQueryConditionCompileContext::
            FEditorStorageQueryConditionCompileContext(&local_48,pIVar14);
  Queries::FConditions::Compile(param_1,(IQueryConditionCompileContext *)pFVar11);
  if (param_4) {
    AlgoImpl::
    IntroSortInternal<UE::Editor::DataStorage::Queries::FColumnBase_const_,int,_UE::Editor::DataStorage::Tests::TestMatching_::__l5::<lambda_1>,TLess<void>_>
              ((FColumnBase *)(param_2->AllocatorInstance).Data,param_2->ArrayNum,local_res18,
               (TLess<void>)local_res18);
  }
  local_68 = (FColumnBase *)(param_2->AllocatorInstance).Data;
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar8 = param_2->ArrayNum;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  if ((iVar8 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  local_58._12_4_ = uStack_5c;
  local_58.ArrayNum = iVar8;
  local_58.DataPtr = local_68;
  iStack_60 = iVar8;
  bVar5 = Queries::FConditions::Verify(param_1,&local_90,&local_58,false);
  pwVar15 = L"[Fail] ";
  if (bVar5 == param_3) {
    pwVar15 = L"[Pass] ";
  }
  ::FString::FString(&local_80,pwVar15);
  Queries::FConditions::AppendToString(param_1,&local_80);
  if (param_3) {
    iVar8 = local_90.ArrayNum;
    uVar13 = (ulonglong)local_90.ArrayNum;
    pFVar1 = (FWeakObjectPtr *)(local_90.AllocatorInstance.Data + uVar13 * 8);
    FVar18.Data = local_90.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar13 != iVar8) {
        `TCheckedPointerIterator<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      param_3 = (bool)local_res18;
      if ((FWeakObjectPtr *)FVar18.Data == pFVar1) break;
      iVar2 = param_2->ArrayNum;
      local_98 = *(FWeakObjectPtr *)FVar18.Data;
      pFVar16 = (param_2->AllocatorInstance).Data;
      pFVar17 = pFVar16 + (longlong)iVar2 * 0x10;
      while( true ) {
        if (param_2->ArrayNum != iVar2) {
          `TCheckedPointerIterator<UE::Editor::DataStorage::Queries::FColumnBase_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar16 == pFVar17) {
          bVar5 = false;
          ::FString::AppendChars(&local_80," [Match failed]",0xf);
          param_3 = (bool)local_res18;
          goto LAB_142d1943d;
        }
        bVar7 = TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>::
                UEOpEquals<UScriptStruct_const_,bool>
                          ((TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)&local_98,
                           (TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)pFVar16);
        if (bVar7) break;
        pFVar16 = pFVar16 + 0x10;
      }
      uVar13 = local_90._8_8_ & 0xffffffff;
      FVar18.Data = FVar18.Data + 8;
    }
  }
LAB_142d1943d:
  pFVar12 = FAutomationTestFramework::Get();
  (**(code **)(pFVar12->CurrentTest->_padding_ + 0x50))(pFVar12->CurrentTest,&local_80,0,0);
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.AllocatorInstance.Data);
  }
  return (bool)(bVar5 ^ param_3 ^ 1);
}

// TestQueryMerge_Success @ 142d194c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Editor::DataStorage::Tests::QueryMergeTestFixture::TestQueryMerge_Success
          (QueryMergeTestFixture *this,FQueryDescription *param_1,FQueryDescription *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> *pTVar4;
  undefined1 auStack_e98 [32];
  FText local_e78;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> local_e68;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> local_e18;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> local_dc8;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> local_d78;
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator> local_d28;
  FQueryDescription local_cd8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e98;
  FQueryDescription::FQueryDescription(&local_cd8,param_1);
  FText::FText(&local_e78);
  bVar3 = Queries::MergeQueries(&local_cd8,param_2,&local_e78);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Expected successful merge between simple queries",bVar3);
  RegisterAndRunQuery(this,&local_e18,param_1);
  RegisterAndRunQuery(this,&local_e68,param_2);
  RegisterAndRunQuery(this,&local_d78,&local_cd8);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Expected Query1 to have valid results",
             local_e18.Elements._8_4_ != local_e18.Elements._52_4_);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,L"Expected Query2 to have valid results",
             local_e68.Elements._8_4_ != local_e68.Elements._52_4_);
  TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::Intersect
            (&local_e18,&local_dc8,&local_e68);
  pTVar4 = TSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,FDefaultSetAllocator>::
           Difference(&local_d78,&local_d28,&local_dc8);
  iVar1 = *(int *)&(pTVar4->Elements).field_0x34;
  iVar2 = *(int *)&(pTVar4->Elements).field_0x8;
  local_d28.HashSize = 0;
  if (local_d28.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_d28.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_d28.Elements);
  FAutomationTestBase::TestTrue
            ((FAutomationTestBase *)this,
             L"Expected merge query output to be the same as the intersection of the individual query outputs"
             ,iVar2 == iVar1);
  local_dc8.HashSize = 0;
  if (local_dc8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_dc8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_dc8.Elements);
  local_d78.HashSize = 0;
  if (local_d78.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_d78.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_d78.Elements);
  local_e68.HashSize = 0;
  if (local_e68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_e68.Elements);
  local_e18.HashSize = 0;
  if (local_e18.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e18.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_e18.Elements);
  if (local_e78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e78.TextData.Reference + 0x10))();
  }
  FQueryDescription::~FQueryDescription(&local_cd8);
  return;
}

// UnregisterCommands @ 142d19af0

void __cdecl UE::Editor::DataStorage::Debug::ProcessorTests::UnregisterCommands(void)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  undefined1 local_res8 [8];
  
  iVar4 = RegisteredCommands.ArrayNum;
  uVar6 = (ulonglong)RegisteredCommands.ArrayNum;
  pFVar1 = RegisteredCommands.AllocatorInstance.Data + uVar6 * 8;
  FVar7.Data = RegisteredCommands.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar6 != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<IConsoleCommand_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar7.Data == pFVar1) break;
    uVar2 = *(undefined8 *)FVar7.Data;
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      IConsoleManager::SetupSingleton();
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Singleton != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x4fb,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    (**(code **)((longlong)*IConsoleManager::Singleton + 0xb8))(IConsoleManager::Singleton,uVar2);
    uVar6 = (ulonglong)(uint)RegisteredCommands.ArrayNum;
    FVar7.Data = FVar7.Data + 8;
  }
  RegisteredCommands.ArrayNum = 0;
  if (RegisteredCommands.ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&RegisteredCommands.AllocatorInstance,0,&RegisteredCommands.ArrayMax);
  }
  return;
}

// UnregisterProcessors @ 142d19c00

void __cdecl UE::Editor::DataStorage::Debug::ProcessorTests::UnregisterProcessors(void)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  int iVar3;
  IModularFeatures *pIVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  
  FVar2 = StorageFeatureName;
  pIVar4 = IModularFeatures::Get();
  iVar3 = (**(code **)((longlong)*pIVar4 + 0x18))(pIVar4,FVar2);
  if (iVar3 < 1) {
    plVar8 = (longlong *)0x0;
  }
  else {
    pIVar4 = IModularFeatures::Get();
    lVar5 = (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,FVar2);
    plVar8 = (longlong *)(lVar5 + -8);
    if (lVar5 == 0) {
      plVar8 = (longlong *)0x0;
    }
  }
  iVar3 = RegisteredQueries.ArrayNum;
  uVar6 = (ulonglong)RegisteredQueries.ArrayNum;
  pFVar1 = RegisteredQueries.AllocatorInstance.Data + uVar6 * 8;
  FVar7.Data = RegisteredQueries.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar6 != iVar3) {
      `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar7.Data == pFVar1) break;
    (**(code **)(*plVar8 + 0x1b0))(plVar8,*(undefined8 *)FVar7.Data);
    uVar6 = (ulonglong)(uint)RegisteredQueries.ArrayNum;
    FVar7.Data = FVar7.Data + 8;
  }
  RegisteredQueries.ArrayNum = 0;
  if (RegisteredQueries.ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&RegisteredQueries.AllocatorInstance,0,&RegisteredQueries.ArrayMax);
  }
  return;
}

// operator() @ 1504992d0

bool __thiscall
`UE::Editor::DataStorage::Queries::Select::ReadWrite'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2880507215351905799>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2880507215351905799>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

