// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// FTabSpawnerEntry @ 1426fd4c0

/* WARNING: Enum "Type": Some values do not have unique names */

FTabSpawnerEntry * __thiscall
FTabSpawnerEntry::FTabSpawnerEntry
          (FTabSpawnerEntry *this,FName *param_1,
          TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
          *param_2,TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                   *param_3)

{
  TOptional<bool> *pTVar1;
  FSlateIcon *pFVar2;
  FText *pFVar3;
  FName *pFVar4;
  FName local_res8;
  undefined1 local_58;
  undefined1 local_57 [7];
  FText local_50;
  FSlateIcon local_40;
  
  pFVar2 = FSlateIcon::FSlateIcon(&local_40);
  pFVar3 = FText::FText(&local_50);
  FWorkspaceItem::FWorkspaceItem((FWorkspaceItem *)this,param_1,pFVar3,pFVar2,false);
  if (local_50.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
  }
  this->_padding_ = (longlong)&___7FTabSpawnerEntry__6B_;
  this->TabType = *param_1;
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            (&this->OnSpawnTab,param_2);
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
            (&this->CanSpawnTab,param_3);
  (this->MenuType).bIsSet = true;
  *(undefined8 *)&(this->OnFindTabToReuse).field_0x10 = 0;
  *(undefined8 *)&this->OnFindTabToReuse = 0;
  *(undefined8 *)&(this->OnFindTabToReuse).field_0x8 = 0;
  (this->MenuType).Value = Enabled;
  *(undefined8 *)&(this->MenuType).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->MenuType).Getter = 0;
  *(undefined8 *)&(this->MenuType).Getter.field_0x8 = 0;
  this->bHiddenTabName = false;
  (this->bIsLocked).bIsSet = false;
  (this->SpawnedTabPtr).Object = (SDockTab *)0x0;
  (this->SpawnedTabPtr).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bAutoGenerateMenuEntry = true;
  this->bCanSidebarTab = true;
  this->ReadOnlyBehavior = Disabled;
  pFVar4 = ::FName::FName(&local_res8,L"HomeScreen");
  if (*param_1 == *pFVar4) {
    pTVar1 = &this->bIsLocked;
    this->bHiddenTabName = true;
    if ((TOptional<bool> *)&local_58 != pTVar1) {
      pTVar1->TypedValue = true;
      pTVar1->bIsSet = true;
    }
  }
  pFVar4 = ::FName::FName(&local_res8,L"LevelEditor");
  if ((*param_1 == *pFVar4) && (pTVar1 = &this->bIsLocked, (TOptional<bool> *)local_57 != pTVar1)) {
    pTVar1->TypedValue = true;
    pTVar1->bIsSet = true;
  }
  return this;
}

// AsSpawnerEntry @ 14270da40

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FTabSpawnerEntry,1> * __thiscall
FTabSpawnerEntry::AsSpawnerEntry
          (FTabSpawnerEntry *this,TSharedPtr<FTabSpawnerEntry,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FTabSpawnerEntry *pFVar2;
  TSharedRef<FWorkspaceItem,1> *pTVar3;
  TSharedRef<FWorkspaceItem,1> local_18;
  
  pTVar3 = TSharedFromThis<FWorkspaceItem,1>::AsShared
                     ((TSharedFromThis<FWorkspaceItem,1> *)&this->_padding_,&local_18);
  pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
  pFVar2 = (FTabSpawnerEntry *)pTVar3->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    __return_storage_ptr__->Object = pFVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    __return_storage_ptr__->Object = pFVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// IsSoleTabInstanceSpawned @ 14274e160

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FTabSpawnerEntry::IsSoleTabInstanceSpawned(FTabSpawnerEntry *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if ((((this->SpawnedTabPtr).Object != (SDockTab *)0x0) &&
      (pTVar1 = (this->SpawnedTabPtr).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

