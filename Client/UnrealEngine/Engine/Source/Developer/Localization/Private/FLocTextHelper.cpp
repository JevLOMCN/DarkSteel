// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 87

// FLocTextHelper @ 146b42c70

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

FLocTextHelper * __thiscall
FLocTextHelper::FLocTextHelper
          (FLocTextHelper *this,FString *param_1,FString *param_2,FString *param_3,FString *param_4,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_5,
          TSharedPtr<ILocFileNotifies,1> *param_6,ELocTextPlatformSplitMode param_7)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FLocTextHelper *pFVar5;
  FString *pFVar6;
  FString local_38;
  
  pFVar1 = &this->TargetName;
  this->PlatformSplitMode = param_7;
  (this->TargetPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetName).Data.ArrayNum = 0;
  (this->TargetName).Data.ArrayMax = 0;
  (this->TargetPath).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetPath).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->TargetPath).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  (this->ManifestName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManifestName).Data.AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
  (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManifestName).Data.ArrayNum = (param_2->Data).ArrayNum;
  (this->ManifestName).Data.ArrayMax = (param_2->Data).ArrayMax;
  (param_2->Data).ArrayNum = 0;
  (param_2->Data).ArrayMax = 0;
  (this->ArchiveName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArchiveName).Data.AllocatorInstance.Data = (param_3->Data).AllocatorInstance.Data;
  (param_3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArchiveName).Data.ArrayNum = (param_3->Data).ArrayNum;
  (this->ArchiveName).Data.ArrayMax = (param_3->Data).ArrayMax;
  (param_3->Data).ArrayNum = 0;
  (param_3->Data).ArrayMax = 0;
  (this->NativeCulture).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NativeCulture).Data.AllocatorInstance.Data = (param_4->Data).AllocatorInstance.Data;
  (param_4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NativeCulture).Data.ArrayNum = (param_4->Data).ArrayNum;
  (this->NativeCulture).Data.ArrayMax = (param_4->Data).ArrayMax;
  (param_4->Data).ArrayNum = 0;
  (param_4->Data).ArrayMax = 0;
  (this->ForeignCultures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ForeignCultures).AllocatorInstance.Data = (param_5->AllocatorInstance).Data;
  (param_5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ForeignCultures).ArrayNum = param_5->ArrayNum;
  (this->ForeignCultures).ArrayMax = param_5->ArrayMax;
  param_5->ArrayNum = 0;
  param_5->ArrayMax = 0;
  (this->LocFileNotifies).Object = param_6->Object;
  (this->LocFileNotifies).SharedReferenceCount.ReferenceController =
       (param_6->SharedReferenceCount).ReferenceController;
  (param_6->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_6->Object = (ILocFileNotifies *)0x0;
  (this->CopyrightNotice).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CopyrightNotice).Data.ArrayNum = 0;
  (this->CopyrightNotice).Data.ArrayMax = 0;
  (this->Manifest).Object = (FInternationalizationManifest *)0x0;
  (this->Manifest).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->Archives = 0;
  *(undefined8 *)&(this->Archives).field_0x8 = 0;
  *(undefined8 *)&(this->Archives).field_0x20 = 0;
  *(undefined4 *)&(this->Archives).field_0x28 = 0;
  *(undefined4 *)&(this->Archives).field_0x2c = 0x80;
  *(undefined4 *)&(this->Archives).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Archives).field_0x34 = 0;
  *(undefined8 *)&(this->Archives).field_0x40 = 0;
  *(undefined4 *)&(this->Archives).field_0x48 = 0;
  (this->DependencyPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DependencyPaths).ArrayNum = 0;
  (this->DependencyPaths).ArrayMax = 0;
  (this->Dependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Dependencies).ArrayNum = 0;
  (this->Dependencies).ArrayMax = 0;
  *(undefined8 *)&(this->ConflictTracker).EntriesByKey = 0;
  *(undefined8 *)&(this->ConflictTracker).EntriesByKey.field_0x8 = 0;
  *(undefined8 *)&(this->ConflictTracker).EntriesByKey.field_0x20 = 0;
  *(undefined4 *)&(this->ConflictTracker).EntriesByKey.field_0x28 = 0;
  *(undefined4 *)&(this->ConflictTracker).EntriesByKey.field_0x2c = 0x80;
  *(undefined4 *)&(this->ConflictTracker).EntriesByKey.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConflictTracker).EntriesByKey.field_0x34 = 0;
  *(undefined8 *)&(this->ConflictTracker).EntriesByKey.field_0x40 = 0;
  *(undefined4 *)&(this->ConflictTracker).EntriesByKey.field_0x48 = 0;
  if ((this->TargetPath).Data.ArrayNum < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!TargetPath.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                       ,0x1e8,L"Target path may not be empty!");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FLocTextHelper *)(*pcVar3)();
      return pFVar5;
    }
  }
  if ((this->ManifestName).Data.ArrayNum < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ManifestName.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                       ,0x1e9,L"Manifest name may not be empty!");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FLocTextHelper *)(*pcVar3)();
      return pFVar5;
    }
  }
  if ((this->ArchiveName).Data.ArrayNum < 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ArchiveName.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                       ,0x1ea,L"Archive name may not be empty!");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FLocTextHelper *)(*pcVar3)();
      return pFVar5;
    }
  }
  pFVar6 = FPaths::GetBaseFilename(&local_38,&this->ManifestName,true);
  if (pFVar1 != pFVar6) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TargetName).Data.ArrayNum = (pFVar6->Data).ArrayNum;
    (this->TargetName).Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (1 < (this->NativeCulture).Data.ArrayNum) {
    TArray<FString,TSizedDefaultAllocator<32>_>::Remove(&this->ForeignCultures,&this->NativeCulture)
    ;
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>((FString *)(param_5->AllocatorInstance).Data,param_5->ArrayNum);
  pFVar2 = (param_5->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_6->SharedReferenceCount).ReferenceController);
  return this;
}

// FLocTextHelper @ 146b42fb0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

FLocTextHelper * __thiscall
FLocTextHelper::FLocTextHelper
          (FLocTextHelper *this,FString *param_1,TSharedPtr<ILocFileNotifies,1> *param_2,
          ELocTextPlatformSplitMode param_3)

{
  FScriptContainerElement *pFVar1;
  
  this->PlatformSplitMode = param_3;
  (this->TargetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetName).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetName).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->TargetName).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  (this->TargetPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetPath).Data.ArrayNum = 0;
  (this->TargetPath).Data.ArrayMax = 0;
  (this->ManifestName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManifestName).Data.ArrayNum = 0;
  (this->ManifestName).Data.ArrayMax = 0;
  (this->ArchiveName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArchiveName).Data.ArrayNum = 0;
  (this->ArchiveName).Data.ArrayMax = 0;
  (this->NativeCulture).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NativeCulture).Data.ArrayNum = 0;
  (this->NativeCulture).Data.ArrayMax = 0;
  (this->ForeignCultures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ForeignCultures).ArrayNum = 0;
  (this->ForeignCultures).ArrayMax = 0;
  (this->LocFileNotifies).Object = param_2->Object;
  (this->LocFileNotifies).SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  (param_2->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_2->Object = (ILocFileNotifies *)0x0;
  (this->CopyrightNotice).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CopyrightNotice).Data.ArrayNum = 0;
  (this->CopyrightNotice).Data.ArrayMax = 0;
  (this->Manifest).Object = (FInternationalizationManifest *)0x0;
  (this->Manifest).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->Archives = 0;
  *(undefined8 *)&(this->Archives).field_0x8 = 0;
  *(undefined8 *)&(this->Archives).field_0x20 = 0;
  *(undefined4 *)&(this->Archives).field_0x28 = 0;
  *(undefined4 *)&(this->Archives).field_0x2c = 0x80;
  *(undefined4 *)&(this->Archives).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Archives).field_0x34 = 0;
  *(undefined8 *)&(this->Archives).field_0x40 = 0;
  *(undefined4 *)&(this->Archives).field_0x48 = 0;
  (this->DependencyPaths).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DependencyPaths).ArrayNum = 0;
  (this->DependencyPaths).ArrayMax = 0;
  (this->Dependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Dependencies).ArrayNum = 0;
  (this->Dependencies).ArrayMax = 0;
  *(undefined8 *)&(this->ConflictTracker).EntriesByKey = 0;
  *(undefined8 *)&(this->ConflictTracker).EntriesByKey.field_0x8 = 0;
  *(undefined8 *)&(this->ConflictTracker).EntriesByKey.field_0x20 = 0;
  *(undefined4 *)&(this->ConflictTracker).EntriesByKey.field_0x28 = 0;
  *(undefined4 *)&(this->ConflictTracker).EntriesByKey.field_0x2c = 0x80;
  *(undefined4 *)&(this->ConflictTracker).EntriesByKey.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConflictTracker).EntriesByKey.field_0x34 = 0;
  *(undefined8 *)&(this->ConflictTracker).EntriesByKey.field_0x40 = 0;
  *(undefined4 *)&(this->ConflictTracker).EntriesByKey.field_0x48 = 0;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FLocTextHelper @ 146b44850

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __thiscall FLocTextHelper::~FLocTextHelper(FLocTextHelper *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->ConflictTracker).EntriesByKey.field_0x48 = 0;
  pvVar1 = *(void **)&(this->ConflictTracker).EntriesByKey.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FLocTextConflicts::FConflict,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FLocTextConflicts::FConflict,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FLocTextConflicts::FConflict,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ConflictTracker);
  DestructItems<TSharedPtr<FInternationalizationManifest,1>,int>
            ((TSharedPtr<FInternationalizationManifest,1> *)
             (this->Dependencies).AllocatorInstance.Data,(this->Dependencies).ArrayNum);
  pFVar2 = (this->Dependencies).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>
            ((FString *)(this->DependencyPaths).AllocatorInstance.Data,
             (this->DependencyPaths).ArrayNum);
  pFVar2 = (this->DependencyPaths).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->Archives).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Archives).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Archives);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Manifest).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->CopyrightNotice).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LocFileNotifies).SharedReferenceCount.ReferenceController);
  DestructItems<FString,int>
            ((FString *)(this->ForeignCultures).AllocatorInstance.Data,
             (this->ForeignCultures).ArrayNum);
  pFVar2 = (this->ForeignCultures).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->NativeCulture).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ArchiveName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ManifestName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TargetPath).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TargetName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator() @ 146b473a0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __thiscall
`FLocTextHelper::EnumerateSourceTextsParallel'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  FLocKey *pFVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  TSharedPtr<FManifestEntry,1> local_48;
  FLocKey *local_38;
  TReferenceControllerBase<1> *local_30;
  
  if (**(char **)((longlong)this + 0x10) == '\0') {
    plVar10 = *(longlong **)((longlong)this + 8);
    uVar9 = 0;
    if (param_1 < (int)plVar10[1]) {
      uVar9 = (uint)~param_1 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar2 = *plVar10;
    pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 * 0x20 + 0x18 + lVar2);
    pFVar4 = *(FLocKey **)((longlong)param_1 * 0x20 + 0x10 + lVar2);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (**(char **)((longlong)this + 0x20) == '\0') {
LAB_146b474e7:
      puVar5 = *(undefined8 **)((longlong)this + 0x18);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_38 = pFVar4;
      local_30 = pTVar3;
      cVar8 = (*(code *)*puVar5)(puVar5[1],&local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
      if (cVar8 == '\0') {
        **(undefined1 **)((longlong)this + 0x10) = 1;
      }
    }
    else {
      lVar2 = *(longlong *)this;
      iVar1 = *(int *)(lVar2 + 0x100);
      plVar10 = *(longlong **)(lVar2 + 0xf8);
      plVar11 = plVar10 + (longlong)iVar1 * 2;
      while( true ) {
        if (*(int *)(lVar2 + 0x100) != iVar1) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TSharedPtr<FInternationalizationManifest,1>_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (plVar10 == plVar11) goto LAB_146b474e7;
        if (*plVar10 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        FInternationalizationManifest::FindEntryBySource
                  ((FInternationalizationManifest *)*plVar10,&local_48,pFVar4,
                   (FLocItem *)(pFVar4 + 1));
        if (local_48.Object != (FManifestEntry *)0x0) break;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
        plVar10 = plVar10 + 2;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  return;
}

// operator() @ 146b47560

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall
`FLocTextHelper::EnumerateTranslations'::__l2::<lambda_1>::operator()
          (void *this,TSharedRef<FManifestEntry,1> *param_1)

{
  int iVar1;
  FManifestEntry *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FLocTextHelper *this_00;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  FLocKey *pFVar9;
  FString *pFVar10;
  FManifestEntry *pFVar11;
  bool bVar12;
  FLocKey *pFVar13;
  undefined1 local_res10 [8];
  TSharedPtr<FLocMetadataObject,1> local_58;
  TSharedPtr<FArchiveEntry,1> local_48;
  FArchiveEntry *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  pFVar2 = param_1->Object;
  bVar12 = true;
  iVar1 = (pFVar2->Contexts).ArrayNum;
  pFVar9 = (FLocKey *)(pFVar2->Contexts).AllocatorInstance.Data;
  pFVar13 = (FLocKey *)((longlong)pFVar9 + (longlong)iVar1 * 0x58);
  do {
    if ((pFVar2->Contexts).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FManifestContext,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar9 == pFVar13) goto LAB_146b476e4;
    pTVar3 = *(TReferenceControllerBase<1> **)&pFVar9[3].Str.Data.ArrayNum;
    local_58.Object = (FLocMetadataObject *)pFVar9[3].Str.Data.AllocatorInstance.Data;
    this_00 = *(FLocTextHelper **)this;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      pFVar11 = param_1->Object;
      pFVar10 = *(FString **)((longlong)this + 8);
    }
    else {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      pFVar11 = param_1->Object;
      pFVar10 = *(FString **)((longlong)this + 8);
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_58.SharedReferenceCount.ReferenceController = pTVar3;
    FLocTextHelper::FindTranslationImpl
              (this_00,&local_48,pFVar10,&pFVar11->Namespace,pFVar9,&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (local_48.Object != (FArchiveEntry *)0x0) {
      puVar4 = *(undefined8 **)((longlong)this + 0x10);
      if (local_48.Object == (FArchiveEntry *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      local_38 = local_48.Object;
      pTStack_30 = local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (local_48.Object == (FArchiveEntry *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      cVar8 = (*(code *)*puVar4)(puVar4[1],&local_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_30);
      if (cVar8 == '\0') {
        bVar12 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
LAB_146b476e4:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_1->SharedReferenceCount).ReferenceController);
        return bVar12;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    pFVar9 = (FLocKey *)&pFVar9[3].Hash;
  } while( true );
}

// operator() @ 146b49390

int __thiscall
`FLocTextHelper::GetWordCountReport'::__l2::<lambda_1>::operator()(void *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  (**(code **)(*(longlong *)**(undefined8 **)this + 0x18))();
  iVar3 = (**(code **)(*(longlong *)**(undefined8 **)this + 0x78))();
  iVar1 = 0;
  iVar2 = 0;
  while (iVar3 != -1) {
    iVar4 = iVar1 + 1;
    if (iVar3 <= iVar2) {
      iVar4 = iVar1;
    }
    iVar5 = (**(code **)(*(longlong *)**(undefined8 **)this + 0x78))();
    iVar1 = iVar4;
    iVar2 = iVar3;
    iVar3 = iVar5;
  }
  (**(code **)(*(longlong *)**(undefined8 **)this + 0x50))();
  return iVar1;
}

// operator() @ 146b49710

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
`FLocTextHelper::LoadArchiveImpl'::__l2::<lambda_1>::operator()(void *this,FString *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *pTVar4;
  FText *pFVar5;
  FText *pFVar6;
  FTextFormat *pFVar7;
  bool bVar8;
  FSharedReferencer<1> FVar9;
  TSharedRef<FInternationalizationArchive,1> local_48;
  TSharedPtr<FInternationalizationManifest_const_,1> local_38;
  TSharedPtr<FInternationalizationArchive_const_,1> local_28;
  FTextFormat local_18;
  
  bVar8 = false;
  if (*(longlong **)(*(longlong *)this + 0x68) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(*(longlong *)this + 0x68) + 0x18))();
  }
  lVar1 = *(longlong *)this;
  local_38.Object = (FInternationalizationManifest *)0x0;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_28.Object = (FInternationalizationArchive *)(FInternationalizationManifest *)0x0;
  FVar9.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (1 < *(int *)(lVar1 + 0x50)) {
    pTVar4 = TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
                     *)(lVar1 + 0x98),(FString *)(lVar1 + 0x48));
    if (pTVar4 == (TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *)0x0) {
      local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_38.Object = (FInternationalizationManifest *)0x0;
    }
    else {
      local_38.Object = *(FInternationalizationManifest **)&pTVar4->field_0x10;
      local_48.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)&pTVar4->field_0x18;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    local_48.Object = (FInternationalizationArchive *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_38.SharedReferenceCount,&local_48.SharedReferenceCount);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    local_28.Object = (FInternationalizationArchive *)local_38.Object;
    FVar9.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
  }
  if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar9.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = *(FInternationalizationManifest **)(*(longlong *)this + 0x88);
  local_38.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)(*(longlong *)this + 0x90);
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = (FInternationalizationArchive *)**(undefined8 **)((longlong)this + 8);
  local_48.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)(*(undefined8 **)((longlong)this + 8))[1];
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.SharedReferenceCount.ReferenceController = FVar9.ReferenceController;
  bVar3 = FJsonInternationalizationArchiveSerializer::DeserializeArchiveFromFile
                    (param_1,&local_48,&local_38,&local_28);
  if (bVar3) {
    bVar8 = true;
  }
  else if (**(longlong **)((longlong)this + 0x10) != 0) {
    pFVar5 = FText::FromString((FText *)&local_48,param_1);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_38,L"LocTextHelper",L"Error_LoadArchive_DeserializeFile",
                        L"Failed to deserialize archive \'{0}\'.");
    pFVar7 = FTextFormat::FTextFormat(&local_18,pFVar6,Default);
    pFVar5 = FText::Format<FText>((FText *)&local_28,pFVar7,pFVar5);
    FText::operator=((FText *)**(undefined8 **)((longlong)this + 0x10),pFVar5);
    if ((FInternationalizationManifest *)local_28.Object != (FInternationalizationManifest *)0x0) {
      (**(code **)(*(longlong *)local_28.Object + 0x10))();
    }
    if (local_38.Object != (FInternationalizationManifest *)0x0) {
      (**(code **)(*(longlong *)local_38.Object + 0x10))();
    }
  }
  plVar2 = *(longlong **)(*(longlong *)this + 0x68);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  return bVar8;
}

// operator() @ 146b49910

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
`FLocTextHelper::LoadManifestImpl'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,FName param_2)

{
  longlong *plVar1;
  bool bVar2;
  FText *pFVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  bool bVar6;
  TSharedRef<FInternationalizationManifest,1> local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  bVar6 = false;
  if (*(longlong **)(*(longlong *)this + 0x68) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(*(longlong *)this + 0x68) + 0x18))();
  }
  local_48.Object = (FInternationalizationManifest *)**(undefined8 **)((longlong)this + 8);
  local_48.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)(*(undefined8 **)((longlong)this + 8))[1];
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar2 = FJsonInternationalizationManifestSerializer::DeserializeManifestFromFile
                    (param_1,&local_48,param_2);
  if (bVar2) {
    bVar6 = true;
  }
  else if (**(longlong **)((longlong)this + 0x10) != 0) {
    pFVar3 = FText::FromString(&local_28,param_1);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"LocTextHelper",L"Error_LoadManifest_DeserializeFile",
                        L"Failed to deserialize manifest \'{0}\'.");
    pFVar5 = FTextFormat::FTextFormat(&local_18,pFVar4,Default);
    pFVar3 = FText::Format<FText>((FText *)&local_48,pFVar5,pFVar3);
    FText::operator=((FText *)**(undefined8 **)((longlong)this + 0x10),pFVar3);
    if (local_48.Object != (FInternationalizationManifest *)0x0) {
      (**(code **)(*(longlong *)local_48.Object + 0x10))();
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  plVar1 = *(longlong **)(*(longlong *)this + 0x68);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
  }
  return bVar6;
}

// operator() @ 146b49e60

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
`FLocTextHelper::SanitizeLogOutput'::__l2::<lambda_1>::operator()
          (void *this,TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  wchar_t **ppwVar8;
  FString local_38;
  FString local_28;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,0x1f,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  ppwVar8 = ErrorStrs;
  do {
    ::FString::FString(&local_38,*ppwVar8);
    pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar6 <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 < pFVar6 + (longlong)*piVar1 * 0x10)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar5;
      }
    }
    iVar4 = __return_storage_ptr__->ArrayNum;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar4 + 1;
    pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x10;
    *(undefined8 *)pFVar6 = 0;
    *(FScriptContainerElement **)pFVar6 = local_38.Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar6 + 8) = local_38.Data.ArrayNum;
    *(int *)(pFVar6 + 0xc) = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = *(int *)(pFVar6 + 8);
    lVar7 = (longlong)local_28.Data.ArrayNum;
    _Src = *(void **)pFVar6;
    if (local_28.Data.ArrayNum == 0) {
      local_28.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
                 &local_28.Data.ArrayMax);
      memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar7 * 2);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    ::FString::InsertAt(&local_28,1,L' ');
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    ppwVar8 = ppwVar8 + 1;
  } while ((FEnumParams *)ppwVar8 !=
           &Z_Construct_UEnum_Localization_ELocalizedTextCollapseMode_Statics::EnumParams);
  return __return_storage_ptr__;
}

// operator() @ 146b4a050

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
`FLocTextHelper::SaveArchiveImpl'::__l2::<lambda_1>::operator()
          (void *this,TSharedRef<FInternationalizationArchive_const_,1> *param_1,FString *param_2)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  TRefCountPtr<ITextData> TVar3;
  bool bVar4;
  IFileManager *pIVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  int iVar9;
  wchar_t *pwVar10;
  bool bVar11;
  FText local_58;
  undefined1 local_48 [16];
  FText local_38;
  FTextFormat local_28;
  
  bVar11 = false;
  plVar1 = *(longlong **)(*(longlong *)this + 0x68);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  }
  local_48._0_8_ = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58.Flags = 0;
  local_58._12_4_ = 0;
  local_58.TextData.Reference = (ITextData *)0x0;
  local_48._8_8_ = pTVar2;
  bVar4 = FJsonInternationalizationArchiveSerializer::SerializeArchiveToString
                    ((TSharedRef<FInternationalizationArchive_const_,1> *)local_48,
                     (FString *)&local_58);
  if (bVar4) {
    pIVar5 = IFileManager::Get();
    TVar3.Reference = local_58.TextData.Reference;
    if ((param_2->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    iVar9 = local_58.Flags - 1;
    if (local_58.Flags == 0) {
      iVar9 = 0;
    }
    local_48._8_4_ = iVar9;
    local_48._0_8_ = local_58.TextData.Reference;
    bVar4 = FFileHelper::SaveStringToFile
                      ((TStringView<wchar_t> *)local_48,pwVar10,ForceUnicode,pIVar5,0);
    if (bVar4) {
      if ((FInternationalizationArchive *)TVar3.Reference != (FInternationalizationArchive *)0x0) {
        FMemory::Free(TVar3.Reference);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      bVar11 = true;
      goto LAB_146b4a272;
    }
    if (1 < (byte)LogInternationalizationArchiveSerializer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogInternationalizationArchiveSerializer);
    }
  }
  else {
    TVar3.Reference = local_58.TextData.Reference;
    if (1 < (byte)LogInternationalizationArchiveSerializer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogInternationalizationArchiveSerializer);
      TVar3.Reference = local_58.TextData.Reference;
    }
  }
  if ((FInternationalizationArchive *)TVar3.Reference != (FInternationalizationArchive *)0x0) {
    FMemory::Free(TVar3.Reference);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (**(longlong **)((longlong)this + 8) != 0) {
    pFVar6 = FText::FromString(&local_38,param_2);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"LocTextHelper",L"Error_SaveArchive_SerializeFile",
                        L"Failed to serialize archive \'{0}\'.");
    pFVar8 = FTextFormat::FTextFormat(&local_28,pFVar7,Default);
    pFVar6 = FText::Format<FText>((FText *)local_48,pFVar8,pFVar6);
    FText::operator=((FText *)**(undefined8 **)((longlong)this + 8),pFVar6);
    if ((FInternationalizationArchive *)local_48._0_8_ != (FInternationalizationArchive *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_48._0_8_ + 0x10))();
    }
    if ((FInternationalizationArchive *)local_58.TextData.Reference !=
        (FInternationalizationArchive *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
  }
LAB_146b4a272:
  plVar1 = *(longlong **)(*(longlong *)this + 0x68);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2);
  }
  return bVar11;
}

// operator() @ 146b4a2d0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
`FLocTextHelper::SaveManifestImpl'::__l2::<lambda_1>::operator()
          (void *this,TSharedRef<FInternationalizationManifest_const_,1> *param_1,FString *param_2)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  TRefCountPtr<ITextData> TVar3;
  bool bVar4;
  IFileManager *pIVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  int iVar9;
  wchar_t *pwVar10;
  bool bVar11;
  FText local_58;
  undefined1 local_48 [16];
  FText local_38;
  FTextFormat local_28;
  
  bVar11 = false;
  plVar1 = *(longlong **)(*(longlong *)this + 0x68);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_2);
  }
  local_48._0_8_ = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58.Flags = 0;
  local_58._12_4_ = 0;
  local_58.TextData.Reference = (ITextData *)0x0;
  local_48._8_8_ = pTVar2;
  bVar4 = FJsonInternationalizationManifestSerializer::SerializeManifestToString
                    ((TSharedRef<FInternationalizationManifest_const_,1> *)local_48,
                     (FString *)&local_58);
  if (bVar4) {
    pIVar5 = IFileManager::Get();
    TVar3.Reference = local_58.TextData.Reference;
    if ((param_2->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    iVar9 = local_58.Flags - 1;
    if (local_58.Flags == 0) {
      iVar9 = 0;
    }
    local_48._8_4_ = iVar9;
    local_48._0_8_ = local_58.TextData.Reference;
    bVar4 = FFileHelper::SaveStringToFile
                      ((TStringView<wchar_t> *)local_48,pwVar10,ForceUnicode,pIVar5,0);
    if (bVar4) {
      if ((FInternationalizationManifest *)TVar3.Reference != (FInternationalizationManifest *)0x0)
      {
        FMemory::Free(TVar3.Reference);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      bVar11 = true;
      goto LAB_146b4a4f2;
    }
    if (1 < (byte)LogInternationalizationManifestSerializer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogInternationalizationManifestSerializer);
    }
  }
  else {
    TVar3.Reference = local_58.TextData.Reference;
    if (1 < (byte)LogInternationalizationManifestSerializer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogInternationalizationManifestSerializer);
      TVar3.Reference = local_58.TextData.Reference;
    }
  }
  if ((FInternationalizationManifest *)TVar3.Reference != (FInternationalizationManifest *)0x0) {
    FMemory::Free(TVar3.Reference);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (**(longlong **)((longlong)this + 8) != 0) {
    pFVar6 = FText::FromString(&local_38,param_2);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"LocTextHelper",L"Error_SaveManifest_SerializeFile",
                        L"Failed to serialize manifest \'{0}\'.");
    pFVar8 = FTextFormat::FTextFormat(&local_28,pFVar7,Default);
    pFVar6 = FText::Format<FText>((FText *)local_48,pFVar8,pFVar6);
    FText::operator=((FText *)**(undefined8 **)((longlong)this + 8),pFVar6);
    if ((FInternationalizationManifest *)local_48._0_8_ != (FInternationalizationManifest *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_48._0_8_ + 0x10))();
    }
    if ((FInternationalizationManifest *)local_58.TextData.Reference !=
        (FInternationalizationManifest *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
  }
LAB_146b4a4f2:
  plVar1 = *(longlong **)(*(longlong *)this + 0x68);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_2);
  }
  return bVar11;
}

// operator() @ 146b4b430

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall
`FLocTextHelper::TrimArchive'::__l2::<lambda_1>::operator()
          (void *this,TSharedRef<FManifestEntry,1> *param_1)

{
  int iVar1;
  FManifestEntry *pFVar2;
  longlong *plVar3;
  FInternationalizationArchive *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  FLocKey *pFVar8;
  FLocKey *pFVar9;
  undefined1 local_res10 [8];
  TSharedRef<FArchiveEntry,1> local_58;
  TSharedPtr<FArchiveEntry,1> local_48;
  TSharedPtr<FLocMetadataObject,1> local_38;
  
  pFVar2 = param_1->Object;
  iVar1 = (pFVar2->Contexts).ArrayNum;
  pFVar8 = (FLocKey *)(pFVar2->Contexts).AllocatorInstance.Data;
  pFVar9 = (FLocKey *)((longlong)pFVar8 + (longlong)iVar1 * 0x58);
  while( true ) {
    if ((pFVar2->Contexts).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FManifestContext,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar8 == pFVar9) break;
    plVar3 = *(longlong **)this;
    if (*plVar3 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
    local_38.Object = (FLocMetadataObject *)pFVar8[3].Str.Data.AllocatorInstance.Data;
    pFVar4 = (FInternationalizationArchive *)*plVar3;
    local_38.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&pFVar8[3].Str.Data.ArrayNum;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FInternationalizationArchive::FindEntryByKey
              (pFVar4,&local_48,&param_1->Object->Namespace,pFVar8,&local_38);
    if (local_48.Object != (FArchiveEntry *)0x0) {
      pFVar4 = (FInternationalizationArchive *)**(undefined8 **)((longlong)this + 8);
      if (local_48.Object == (FArchiveEntry *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      local_58.Object = local_48.Object;
      local_58.SharedReferenceCount.ReferenceController =
           local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (local_48.Object == (FArchiveEntry *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
      }
      FInternationalizationArchive::AddEntry(pFVar4,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    pFVar8 = (FLocKey *)&pFVar8[3].Hash;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// operator() @ 146b4cca0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall
`FLocTextHelper::SaveArchiveImpl'::__l6::<lambda_2>::operator()
          (void *this,TSharedRef<FManifestEntry,1> *param_1)

{
  FManifestEntry *pFVar1;
  longlong lVar2;
  FInternationalizationArchive *this_00;
  code *pcVar3;
  FLocKey *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  FInternationalizationArchive *this_01;
  FLocKey *pFVar12;
  undefined1 local_res10 [8];
  uint local_res18;
  FLocKey *local_res20;
  FSharedReferencer<1> local_80;
  TSharedPtr<FArchiveEntry,1> local_78;
  undefined8 local_68;
  FSharedReferencer<1> local_60;
  TSharedRef<FArchiveEntry,1> local_58;
  TSharedPtr<FLocMetadataObject,1> local_48;
  
  pFVar1 = param_1->Object;
  local_res18 = (pFVar1->Contexts).ArrayNum;
  uVar10 = (ulonglong)(int)local_res18;
  pFVar12 = (FLocKey *)(pFVar1->Contexts).AllocatorInstance.Data;
  local_res20 = (FLocKey *)((longlong)pFVar12 + uVar10 * 0x58);
  do {
    pFVar4 = local_res20;
    if ((pFVar1->Contexts).ArrayNum != (int)uVar10) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FManifestContext,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar12 == pFVar4) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return true;
    }
    local_80.ReferenceController =
         (TReferenceControllerBase<1> *)(*(undefined8 **)((longlong)this + 8))[1];
    this_01 = (FInternationalizationArchive *)**(undefined8 **)((longlong)this + 8);
    if (local_80.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_80.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_80.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    lVar2 = *(longlong *)&pFVar12[1].Hash;
    if (lVar2 != 0) {
      plVar11 = *(longlong **)((longlong)this + 0x10);
      uVar7 = ::GetTypeHash((FNameEntryId)(uint)lVar2);
      if ((int)plVar11[1] != *(int *)((longlong)plVar11 + 0x34)) {
        plVar9 = plVar11 + 7;
        if ((longlong *)plVar11[8] != (longlong *)0x0) {
          plVar9 = (longlong *)plVar11[8];
        }
        iVar8 = *(int *)((longlong)plVar9 +
                        (ulonglong)((int)plVar11[9] - 1U & (int)((ulonglong)lVar2 >> 0x20) + uVar7)
                        * 4);
        if (iVar8 != -1) {
          do {
            plVar9 = (longlong *)((longlong)iVar8 * 0x20 + *plVar11);
            if (*plVar9 == lVar2) {
              plVar11 = plVar9 + 1;
              if (plVar9 == (longlong *)0x0) {
                plVar11 = (longlong *)0x0;
              }
              if (plVar11 != (longlong *)0x0) {
                local_60.ReferenceController = (TReferenceControllerBase<1> *)plVar11[1];
                this_01 = (FInternationalizationArchive *)*plVar11;
                if (local_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_60.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)((int)(local_60.ReferenceController)->SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_68 = 0;
                SharedPointerInternals::FSharedReferencer<1>::operator=(&local_80,&local_60);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_60.ReferenceController);
              }
              break;
            }
            iVar8 = (int)plVar9[3];
          } while (iVar8 != -1);
        }
      }
    }
    if ((this_01 == (FInternationalizationArchive *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArchiveToUpdate.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                           ,0x7b6,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    this_00 = (FInternationalizationArchive *)**(undefined8 **)this;
    local_48.Object = (FLocMetadataObject *)pFVar12[3].Str.Data.AllocatorInstance.Data;
    local_48.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&pFVar12[3].Str.Data.ArrayNum;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FInternationalizationArchive::FindEntryByKey
              (this_00,&local_78,&param_1->Object->Namespace,pFVar12,&local_48);
    if (local_78.Object != (FArchiveEntry *)0x0) {
      if ((this_01 == (FInternationalizationArchive *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if ((local_78.Object == (FArchiveEntry *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      local_58.Object = local_78.Object;
      local_58.SharedReferenceCount.ReferenceController =
           local_78.SharedReferenceCount.ReferenceController;
      if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_78.Object == (FArchiveEntry *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      FInternationalizationArchive::AddEntry(this_01,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.ReferenceController);
    uVar10 = (ulonglong)local_res18;
    pFVar12 = (FLocKey *)&pFVar12[3].Hash;
  } while( true );
}

// operator() @ 146b4d470

bool __thiscall
`FLocTextHelper::LoadArchiveImpl'::__l9::<lambda_2>::operator()
          (void *this,wchar_t *param_1,bool param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_48;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_38;
  FString local_28;
  
  if (param_2) {
    iVar7 = 1;
    puVar2 = *(undefined8 **)this;
    puVar3 = *(undefined8 **)((longlong)this + 8);
    iVar8 = *(int *)(puVar2 + 1);
    if (iVar8 == 0) {
      iVar8 = 1;
    }
    pTVar5 = &::FString::FString(&local_28,param_1)->Data;
    if ((pTVar5->ArrayNum != 0) || (iVar6 = 1, iVar8 == 0)) {
      iVar6 = 0;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_48,pTVar5,iVar6 + iVar8);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    iVar8 = *(int *)(puVar2 + 1) + -1;
    if (*(int *)(puVar2 + 1) == 0) {
      iVar8 = 0;
    }
    ::FString::PathAppend((FString *)&local_48,(wchar_t *)*puVar2,iVar8);
    iVar6 = *(int *)(puVar3 + 1);
    iVar8 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar8 = 0;
    }
    if ((local_48.ArrayNum == 0) && (iVar8 != -1)) {
      iVar7 = 2;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_38,&local_48,iVar8 + iVar7);
    ::FString::PathAppend((FString *)&local_38,(wchar_t *)*puVar3,iVar8);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
    bVar4 = FPaths::FileExists((FString *)&local_38);
    if (bVar4) {
      bVar1 = **(byte **)((longlong)this + 0x10);
      bVar4 = LoadArchiveImpl'::__l2::<lambda_1>::operator()
                        (*(void **)((longlong)this + 0x18),(FString *)&local_38);
      **(byte **)((longlong)this + 0x10) = bVar4 & bVar1;
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
  }
  return true;
}

// operator() @ 146b4d5c0

bool __thiscall
`FLocTextHelper::LoadManifestImpl'::__l9::<lambda_2>::operator()
          (void *this,wchar_t *param_1,bool param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  void *this_00;
  bool bVar3;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar4;
  FName *pFVar5;
  ForAnyElementType FVar6;
  int iVar7;
  int iVar8;
  FName local_res20;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  FString local_28;
  
  if (param_2) {
    iVar7 = 1;
    puVar2 = *(undefined8 **)this;
    iVar8 = *(int *)(puVar2 + 1);
    if (iVar8 == 0) {
      iVar8 = 1;
    }
    pTVar4 = &::FString::FString(&local_28,param_1)->Data;
    if ((pTVar4->ArrayNum != 0) || (iVar8 == 0)) {
      iVar7 = 0;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_48,pTVar4,iVar7 + iVar8);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    iVar8 = *(int *)(puVar2 + 1) + -1;
    if (*(int *)(puVar2 + 1) == 0) {
      iVar8 = 0;
    }
    ::FString::PathAppend((FString *)&local_48,(wchar_t *)*puVar2,iVar8);
    bVar3 = FPaths::FileExists((FString *)&local_48);
    if (bVar3) {
      ::FString::FString(&local_28,param_1);
      FPaths::GetCleanFilename(&local_38,&local_28);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      this_00 = *(void **)((longlong)this + 0x10);
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_38.Data.ArrayNum != 0) {
        FVar6.Data = local_38.Data.AllocatorInstance.Data;
      }
      bVar1 = **(byte **)((longlong)this + 8);
      pFVar5 = ::FName::FName(&local_res20,(wchar_t *)FVar6.Data);
      bVar3 = LoadManifestImpl'::__l2::<lambda_1>::operator()(this_00,(FString *)&local_48,*pFVar5);
      **(byte **)((longlong)this + 8) = bVar3 & bVar1;
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.AllocatorInstance.Data);
    }
  }
  return true;
}

// operator() @ 146b4d830

/* WARNING: Removing unreachable block (ram,0x000146b4d97e) */
/* WARNING: Removing unreachable block (ram,0x000146b4d9a3) */

bool __thiscall
`FLocTextHelper::GetWordCountReport'::__l58::<lambda_2>::operator()
          (void *this,TSharedRef<FManifestEntry,1> *param_1)

{
  int iVar1;
  FManifestEntry *pFVar2;
  int iVar3;
  int iVar4;
  ForAnyElementType FVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  undefined1 local_res10 [16];
  FString local_68;
  FLocKey local_58;
  
  iVar3 = GetWordCountReport'::__l2::<lambda_1>::operator()
                    (*(void **)((longlong)this + 0x10),&(param_1->Object->Source).Text);
  pFVar2 = param_1->Object;
  iVar1 = (pFVar2->Contexts).ArrayNum;
  pFVar6 = (pFVar2->Contexts).AllocatorInstance.Data;
  pFVar8 = pFVar6 + (longlong)iVar1 * 0x58;
  while( true ) {
    if ((pFVar2->Contexts).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FManifestContext,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar6 == pFVar8) break;
    if (pFVar6[0x30] == (FScriptContainerElement)0x0) {
      ::FString::PrintfImpl(&local_68,L"%s::%s::%s");
      FVar7.Data = local_68.Data.AllocatorInstance.Data;
      local_58.Str.Data.ArrayNum = local_68.Data.ArrayNum;
      bVar9 = local_68.Data.ArrayNum != 0;
      local_58.Str.Data.ArrayMax = local_68.Data.ArrayMax;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      FVar5.Data = (FScriptContainerElement *)L"";
      if (bVar9) {
        FVar5.Data = FVar7.Data;
      }
      local_58.Str.Data.AllocatorInstance.Data = FVar7.Data;
      local_58.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar5.Data,0);
      iVar4 = TSet<FLocKey,DefaultKeyFuncs<FLocKey,0>,FDefaultSetAllocator>::
              FindIndexByHash<FLocKey>
                        (*(TSet<FLocKey,DefaultKeyFuncs<FLocKey,0>,FDefaultSetAllocator> **)
                          ((longlong)this + 8),local_58.Hash,&local_58);
      if (iVar4 == -1) {
        *(int *)(**(longlong **)this + 8) = *(int *)(**(longlong **)this + 8) + iVar3;
        TSet<FLocKey,DefaultKeyFuncs<FLocKey,0>,FDefaultSetAllocator>::Emplace<FLocKey_const_&>
                  (*(TSet<FLocKey,DefaultKeyFuncs<FLocKey,0>,FDefaultSetAllocator> **)
                    ((longlong)this + 8),(FLocKey *)(local_res10 + 8),(bool *)&local_58);
        FVar7.Data = local_58.Str.Data.AllocatorInstance.Data;
      }
      if (FVar7.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar7.Data);
      }
    }
    pFVar6 = pFVar6 + 0x58;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// operator() @ 146b4de10

/* WARNING: Removing unreachable block (ram,0x000146b4dfca) */
/* WARNING: Removing unreachable block (ram,0x000146b4dfef) */
/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall
`FLocTextHelper::GetWordCountReport'::__l62::<lambda_3>::operator()
          (void *this,TSharedRef<FManifestEntry,1> *param_1)

{
  int iVar1;
  FManifestEntry *pFVar2;
  FManifestEntry *pFVar3;
  FLocTextHelper *this_00;
  int iVar4;
  ForAnyElementType FVar5;
  FLocKey *pFVar6;
  ForAnyElementType FVar7;
  FLocKey *pFVar8;
  bool bVar9;
  undefined1 local_res10 [8];
  int local_res18;
  FString local_c8;
  TSharedPtr<FLocMetadataObject,1> local_b8;
  FLocKey local_a8;
  FLocItem local_90;
  FLocItem local_70;
  
  local_res18 = GetWordCountReport'::__l2::<lambda_1>::operator()
                          (*(void **)((longlong)this + 0x20),&(param_1->Object->Source).Text);
  pFVar2 = param_1->Object;
  iVar1 = (pFVar2->Contexts).ArrayNum;
  pFVar6 = (FLocKey *)(pFVar2->Contexts).AllocatorInstance.Data;
  pFVar8 = (FLocKey *)((longlong)pFVar6 + (longlong)iVar1 * 0x58);
  while( true ) {
    if ((pFVar2->Contexts).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FManifestContext,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar6 == pFVar8) break;
    if (*(char *)&pFVar6[2].Str.Data.AllocatorInstance.Data == '\0') {
      pFVar3 = param_1->Object;
      this_00 = *(FLocTextHelper **)this;
      local_70.Text.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_90.Text.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Object = (FLocMetadataObject *)pFVar6[3].Str.Data.AllocatorInstance.Data;
      local_b8.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)&pFVar6[3].Str.Data.ArrayNum;
      local_70.Text.Data.ArrayNum = 0;
      local_70.Text.Data.ArrayMax = 0;
      local_90.Text.Data.ArrayNum = 0;
      local_90.Text.Data.ArrayMax = 0;
      local_70.MetadataObj.Object = (FLocMetadataObject *)0x0;
      local_70.MetadataObj.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_90.MetadataObj.Object = (FLocMetadataObject *)0x0;
      local_90.MetadataObj.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FLocTextHelper::GetExportText
                (this_00,*(FString **)((longlong)this + 8),&param_1->Object->Namespace,pFVar6,
                 &local_b8,NativeText,&pFVar3->Source,&local_70,&local_90);
      if (1 < local_90.Text.Data.ArrayNum) {
        ::FString::PrintfImpl(&local_c8,L"%s::%s::%s");
        FVar7.Data = local_c8.Data.AllocatorInstance.Data;
        local_a8.Str.Data.ArrayNum = local_c8.Data.ArrayNum;
        bVar9 = local_c8.Data.ArrayNum != 0;
        local_a8.Str.Data.ArrayMax = local_c8.Data.ArrayMax;
        local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c8.Data.ArrayNum = 0;
        local_c8.Data.ArrayMax = 0;
        FVar5.Data = (FScriptContainerElement *)L"";
        if (bVar9) {
          FVar5.Data = FVar7.Data;
        }
        local_a8.Str.Data.AllocatorInstance.Data = FVar7.Data;
        local_a8.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar5.Data,0);
        iVar4 = TSet<FLocKey,DefaultKeyFuncs<FLocKey,0>,FDefaultSetAllocator>::
                FindIndexByHash<FLocKey>
                          (*(TSet<FLocKey,DefaultKeyFuncs<FLocKey,0>,FDefaultSetAllocator> **)
                            ((longlong)this + 0x18),local_a8.Hash,&local_a8);
        if (iVar4 == -1) {
          **(int **)((longlong)this + 0x10) = **(int **)((longlong)this + 0x10) + local_res18;
          TSet<FLocKey,DefaultKeyFuncs<FLocKey,0>,FDefaultSetAllocator>::Emplace<FLocKey_const_&>
                    (*(TSet<FLocKey,DefaultKeyFuncs<FLocKey,0>,FDefaultSetAllocator> **)
                      ((longlong)this + 0x18),(FLocKey *)&stack0x00000020,(bool *)&local_a8);
          FVar7.Data = local_a8.Str.Data.AllocatorInstance.Data;
        }
        if (FVar7.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar7.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_90.MetadataObj.SharedReferenceCount.ReferenceController);
      if (local_90.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Text.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_70.MetadataObj.SharedReferenceCount.ReferenceController);
      if (local_70.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Text.Data.AllocatorInstance.Data);
      }
    }
    pFVar6 = (FLocKey *)&pFVar6[3].Hash;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// AddConflict @ 146b4f470

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __thiscall
FLocTextHelper::AddConflict
          (FLocTextHelper *this,FLocKey *param_1,FLocKey *param_2,
          TSharedPtr<FLocMetadataObject,1> *param_3,FLocItem *param_4,FString *param_5)

{
  FLocTextConflicts::AddConflict(&this->ConflictTracker,param_1,param_2,param_3,param_4,param_5);
  return;
}

// AddDependency @ 146b4f490

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall FLocTextHelper::AddDependency(FLocTextHelper *this,FString *param_1,FText *param_2)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *this_00;
  TArray<TSharedPtr<FInternationalizationManifest,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  TSharedPtr<FInternationalizationManifest,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  TSharedPtr<FInternationalizationManifest,1> local_18;
  
  this_00 = &this->DependencyPaths;
  bVar5 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>(this_00,param_1);
  if (bVar5) {
    bVar5 = true;
  }
  else {
    LoadManifestImpl(this,&local_18,param_1,Load,param_2);
    if (local_18.Object == (FInternationalizationManifest *)0x0) {
      bVar5 = false;
    }
    else {
      pFVar8 = (this_00->AllocatorInstance).Data;
      if ((pFVar8 <= param_1) &&
         (param_1 < pFVar8 + (longlong)(this->DependencyPaths).ArrayMax * 0x10)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      iVar7 = (this->DependencyPaths).ArrayNum;
      piVar1 = &(this->DependencyPaths).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&this_00->AllocatorInstance,piVar1);
      }
      (this->DependencyPaths).ArrayNum = iVar7 + 1;
      ::FString::FString((FString *)((this_00->AllocatorInstance).Data + (longlong)iVar7 * 0x10),
                         param_1);
      pTVar2 = &this->Dependencies;
      pTVar3 = (TSharedPtr<FInternationalizationManifest,1> *)(pTVar2->AllocatorInstance).Data;
      if ((pTVar3 <= &local_18) && (&local_18 < pTVar3 + (this->Dependencies).ArrayMax)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      iVar7 = (this->Dependencies).ArrayNum;
      piVar1 = &(this->Dependencies).ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar2->AllocatorInstance,piVar1);
      }
      pFVar8 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      (this->Dependencies).ArrayNum = iVar7 + 1;
      *(FInternationalizationManifest **)pFVar8 = local_18.Object;
      *(TReferenceControllerBase<1> **)(pFVar8 + 8) =
           local_18.SharedReferenceCount.ReferenceController;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar5 = true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return bVar5;
}

// AddSourceText @ 146b4fc40

/* WARNING: Removing unreachable block (ram,0x000146b50439) */
/* WARNING: Removing unreachable block (ram,0x000146b50449) */
/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLocTextHelper::AddSourceText
          (FLocTextHelper *this,FLocKey *param_1,FLocItem *param_2,FManifestContext *param_3,
          FString *param_4)

{
  int iVar1;
  FLocMetadataObject *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  TSharedPtr<FManifestEntry,1> *pTVar14;
  FManifestContext *pFVar15;
  FString *pFVar16;
  wchar_t *pwVar17;
  FString *pFVar18;
  TLogFieldName<char_const_(&)[3]> local_res8;
  TSharedPtr<FManifestEntry,1> local_388;
  FString local_378;
  TLogFieldName<char_const_(&)[21]> local_368;
  FScriptContainerElement *local_360;
  TLogFieldName<char_const_(&)[13]> local_358;
  FScriptContainerElement *local_350;
  TLogFieldName<char_const_(&)[17]> local_348;
  FScriptContainerElement *local_340;
  TLogFieldName<char_const_(&)[13]> local_338;
  FScriptContainerElement *local_330;
  TLogFieldName<char_const_(&)[5]> local_328;
  FScriptContainerElement *local_320;
  TLogFieldName<char_const_(&)[15]> local_318;
  FScriptContainerElement *local_310;
  TLogFieldName<char_const_(&)[7]> local_308;
  FScriptContainerElement *local_300;
  TLogFieldName<char_const_(&)[13]> local_2f8;
  FScriptContainerElement *local_2f0;
  TLogFieldName<char_const_(&)[9]> local_2e8;
  FScriptContainerElement *local_2e0;
  TLogFieldName<char_const_(&)[5]> local_2d8;
  TLogFieldName<char_const_(&)[3]> local_2d0;
  FScriptContainerElement *local_2c8;
  TLogFieldName<char_const_(&)[13]> local_2c0;
  FScriptContainerElement *local_2b8;
  TLogFieldName<char_const_(&)[5]> local_2b0;
  FScriptContainerElement *local_2a8;
  TLogFieldName<char_const_(&)[15]> local_2a0;
  TLogFieldName<char_const_(&)[7]> local_298;
  FScriptContainerElement *local_290;
  TLogFieldName<char_const_(&)[13]> local_288;
  FScriptContainerElement *local_280;
  TLogFieldName<char_const_(&)[5]> local_278;
  FScriptContainerElement *local_270;
  TLogFieldName<char_const_(&)[9]> local_268;
  FScriptContainerElement *local_260;
  FScriptContainerElement *local_258;
  undefined8 local_250;
  FSharedReferencer<1> local_248;
  FString local_240;
  FString local_230;
  FString local_220;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  TSharedPtr<FLocMetadataObject,1> local_1d0;
  FScriptContainerElement *local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  TSharedPtr<FLocMetadataObject,1> local_1a8;
  FScriptContainerElement *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  TSharedPtr<FLocMetadataObject,1> local_188;
  FScriptContainerElement *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  FScriptContainerElement *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  TSharedPtr<FLocMetadataObject,1> local_158;
  TSharedPtr<FLocMetadataObject,1> local_148;
  TSharedPtr<FManifestEntry,1> local_138;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  bVar5 = false;
  bVar4 = false;
  bVar13 = false;
  bVar6 = false;
  bVar11 = false;
  local_res8.Name = local_res8.Name & 0xffffffff00000000;
  if (((this->Manifest).Object == (FInternationalizationManifest *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Manifest.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                         ,0x3b2,L"Attempted to add source text, but no manifest has been loaded!"),
     bVar9)) {
    pcVar3 = (code *)swi(3);
    uVar10 = (*pcVar3)();
    return (bool)uVar10;
  }
  pwVar17 = L"";
  local_378.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_378.Data.ArrayNum = 0;
  local_378.Data.ArrayMax = 0;
  if (((this->Manifest).Object == (FInternationalizationManifest *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    uVar10 = (*pcVar3)();
    return (bool)uVar10;
  }
  FInternationalizationManifest::FindEntryByContext
            ((this->Manifest).Object,&local_388,param_1,param_3);
  if (local_388.Object == (FManifestEntry *)0x0) {
    pTVar14 = FindDependencyEntry(this,&local_138,param_1,param_3,&local_378);
    if (&local_388 != pTVar14) {
      local_388.Object = pTVar14->Object;
      pTVar14->Object = (FManifestEntry *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_388.SharedReferenceCount,&pTVar14->SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_138.SharedReferenceCount.ReferenceController);
    if (local_388.Object != (FManifestEntry *)0x0) {
      if ((local_388.Object == (FManifestEntry *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        uVar10 = (*pcVar3)();
        return (bool)uVar10;
      }
      pFVar15 = FManifestEntry::FindContext(local_388.Object,&param_3->Key,&param_3->KeyMetadataObj)
      ;
      if (param_3->PlatformName != pFVar15->PlatformName) {
        local_248.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_388.Object = (FManifestEntry *)0x0;
        local_250 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_388.SharedReferenceCount,&local_248);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_248.ReferenceController);
        ::FString::Reset(&local_378,0);
      }
    }
  }
  if (local_388.Object == (FManifestEntry *)0x0) {
    if (((this->Manifest).Object == (FInternationalizationManifest *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar3 = (code *)swi(3);
      uVar10 = (*pcVar3)();
      return (bool)uVar10;
    }
    bVar13 = FInternationalizationManifest::AddSource
                       ((this->Manifest).Object,param_1,param_2,param_3);
    if ((!bVar13) && (1 < (byte)LogLocTextHelper._0_1_)) {
      pFVar2 = (param_2->MetadataObj).Object;
      local_2d0.Name = (char (*) [3])&s_id;
      if (pFVar2 == (FLocMetadataObject *)0x0) {
        local_2c8 = (FScriptContainerElement *)L"";
      }
      else {
        local_158.SharedReferenceCount.ReferenceController =
             (param_2->MetadataObj).SharedReferenceCount.ReferenceController;
        if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        local_158.Object = pFVar2;
        FJsonInternationalizationMetaDataSerializer::MetadataToString(&local_38,&local_158);
        ::FString::PrintfImpl(&local_1e0,L" (meta-data \"%s\")");
        bVar6 = true;
        bVar11 = true;
        local_2c8 = (FScriptContainerElement *)L"";
        if (local_1e0.Data.ArrayNum != 0) {
          local_2c8 = local_1e0.Data.AllocatorInstance.Data;
        }
      }
      bVar5 = false;
      bVar4 = false;
      local_2c0.Name = (char (*) [13])0x1513ff980;
      if ((param_2->Text).Data.ArrayNum == 0) {
        local_2b8 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_2b8 = (param_2->Text).Data.AllocatorInstance.Data;
      }
      local_2b0.Name = (char (*) [5])0x1513ff990;
      pFVar2 = (param_3->KeyMetadataObj).Object;
      if (pFVar2 == (FLocMetadataObject *)0x0) {
        local_2a8 = (FScriptContainerElement *)L"";
      }
      else {
        local_148.SharedReferenceCount.ReferenceController =
             (param_3->KeyMetadataObj).SharedReferenceCount.ReferenceController;
        if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        local_148.Object = pFVar2;
        FJsonInternationalizationMetaDataSerializer::MetadataToString(&local_48,&local_148);
        bVar5 = true;
        bVar4 = true;
        ::FString::PrintfImpl(&local_1f0,L" (meta-data \"%s\")");
        local_2a8 = (FScriptContainerElement *)L"";
        if (local_1f0.Data.ArrayNum != 0) {
          local_2a8 = local_1f0.Data.AllocatorInstance.Data;
        }
      }
      bVar9 = false;
      local_2a0.Name = (char (*) [15])0x1513ff998;
      if ((param_3->Key).Str.Data.ArrayNum == 0) {
        local_260 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_260 = (param_3->Key).Str.Data.AllocatorInstance.Data;
      }
      local_298.Name = (char (*) [7])0x1513ff9a8;
      if ((param_1->Str).Data.ArrayNum == 0) {
        local_290 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_290 = (param_1->Str).Data.AllocatorInstance.Data;
      }
      local_288.Name = (char (*) [13])0x1513ff9b0;
      if (param_4 == (FString *)0x0) {
        local_280 = (FScriptContainerElement *)L"";
      }
      else {
        bVar9 = true;
        ::FString::PrintfImpl(&local_200,L" from %s");
        local_280 = (FScriptContainerElement *)L"";
        if (local_200.Data.ArrayNum != 0) {
          local_280 = local_200.Data.AllocatorInstance.Data;
        }
      }
      local_278.Name = (char (*) [5])0x1514004a4;
      if ((param_3->SourceLocation).Data.ArrayNum != 0) {
        pwVar17 = (wchar_t *)(param_3->SourceLocation).Data.AllocatorInstance.Data;
      }
      local_268.Name = (char (*) [9])0x151400480;
      local_270 = (FScriptContainerElement *)pwVar17;
      UE::Logging::Private::
      LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[9]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[7]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[15]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
                ((FLogCategoryBase *)&LogLocTextHelper,&::LOG_Static,&local_268,
                 (wchar_t **)&local_270,&local_278,(wchar_t **)&local_280,&local_288,
                 (wchar_t **)&local_290,&local_298,(wchar_t **)&local_260,&local_2a0,
                 (wchar_t **)&local_2a8,&local_2b0,(wchar_t **)&local_2b8,&local_2c0,
                 (wchar_t **)&local_2c8,&local_2d0,&LocTextHelper::LocalizationLogIdentifier);
      if ((bVar9) && (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_200.Data.AllocatorInstance.Data);
      }
      if ((bVar4) && (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
      }
      if ((bVar5) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if ((bVar11) && (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
      }
      if ((bVar6) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    if ((local_388.Object == (FManifestEntry *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar3 = (code *)swi(3);
      uVar10 = (*pcVar3)();
      return (bool)uVar10;
    }
    bVar11 = FLocItem::IsExactMatch(param_2,&(local_388.Object)->Source);
    if (bVar11) {
      bVar13 = true;
      if ((local_388.Object == (FManifestEntry *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        uVar10 = (*pcVar3)();
        return (bool)uVar10;
      }
      FManifestEntry::MergeContextPlatformInfo(local_388.Object,param_3);
    }
    else {
      if ((local_388.Object == (FManifestEntry *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        uVar10 = (*pcVar3)();
        return (bool)uVar10;
      }
      pFVar15 = FManifestEntry::FindContext(local_388.Object,&param_3->Key,&param_3->KeyMetadataObj)
      ;
      pFVar18 = &local_378;
      if (local_378.Data.ArrayNum < 2) {
        pFVar18 = &pFVar15->SourceLocation;
      }
      if (2 < (byte)LogLocTextHelper._0_1_) {
        local_res8.Name = (char (*) [3])&s_id;
        if ((local_388.Object == (FManifestEntry *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar3 = (code *)swi(3);
          uVar10 = (*pcVar3)();
          return (bool)uVar10;
        }
        pFVar2 = ((local_388.Object)->Source).MetadataObj.Object;
        if (pFVar2 == (FLocMetadataObject *)0x0) {
          local_258 = (FScriptContainerElement *)L"";
        }
        else {
          local_1d0.SharedReferenceCount.ReferenceController =
               ((local_388.Object)->Source).MetadataObj.SharedReferenceCount.ReferenceController;
          if (local_1d0.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_1d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_1d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          local_1d0.Object = pFVar2;
          pFVar16 = FJsonInternationalizationMetaDataSerializer::MetadataToString
                              (&local_58,&local_1d0);
          SanitizeLogOutput(&local_68,pFVar16);
          ::FString::PrintfImpl(&local_210,L" (meta-data \"%s\")");
          bVar5 = true;
          bVar4 = true;
          bVar13 = true;
          local_258 = (FScriptContainerElement *)L"";
          if (local_210.Data.ArrayNum != 0) {
            local_258 = local_210.Data.AllocatorInstance.Data;
          }
        }
        bVar9 = false;
        bVar6 = false;
        bVar11 = false;
        local_368.Name = (char (*) [21])0x1513ff940;
        if ((local_388.Object == (FManifestEntry *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar3 = (code *)swi(3);
          uVar10 = (*pcVar3)();
          return (bool)uVar10;
        }
        local_1b8 = ((local_388.Object)->Source).Text.Data.AllocatorInstance.Data;
        iVar1 = ((local_388.Object)->Source).Text.Data.ArrayNum;
        iStack_1b0 = iVar1 + -1;
        if (iVar1 == 0) {
          iStack_1b0 = 0;
        }
        local_128._12_4_ = uStack_1ac;
        local_128.Size = iStack_1b0;
        local_128.DataPtr = (wchar_t *)local_1b8;
        pFVar16 = SanitizeLogOutput(&local_78,&local_128);
        if ((pFVar16->Data).ArrayNum == 0) {
          local_360 = (FScriptContainerElement *)0x15060d16c;
        }
        else {
          local_360 = (pFVar16->Data).AllocatorInstance.Data;
        }
        local_358.Name = (char (*) [13])0x1513ff958;
        if ((pFVar18->Data).ArrayNum == 0) {
          local_350 = (FScriptContainerElement *)0x15060d16c;
        }
        else {
          local_350 = (pFVar18->Data).AllocatorInstance.Data;
        }
        local_348.Name = (char (*) [17])0x1513ff968;
        pFVar2 = (param_2->MetadataObj).Object;
        if (pFVar2 == (FLocMetadataObject *)0x0) {
          local_340 = (FScriptContainerElement *)L"";
        }
        else {
          local_1a8.SharedReferenceCount.ReferenceController =
               (param_2->MetadataObj).SharedReferenceCount.ReferenceController;
          if (local_1a8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          local_1a8.Object = pFVar2;
          pFVar16 = FJsonInternationalizationMetaDataSerializer::MetadataToString
                              (&local_88,&local_1a8);
          SanitizeLogOutput(&local_98,pFVar16);
          bVar9 = true;
          bVar6 = true;
          bVar11 = true;
          ::FString::PrintfImpl(&local_220,L" (meta-data \"%s\")");
          local_340 = (FScriptContainerElement *)L"";
          if (local_220.Data.ArrayNum != 0) {
            local_340 = local_220.Data.AllocatorInstance.Data;
          }
        }
        bVar8 = false;
        bVar12 = false;
        local_338.Name = (char (*) [13])0x1513ff980;
        local_198 = (param_2->Text).Data.AllocatorInstance.Data;
        iVar1 = (param_2->Text).Data.ArrayNum;
        iStack_190 = iVar1 + -1;
        if (iVar1 == 0) {
          iStack_190 = 0;
        }
        local_118._12_4_ = uStack_18c;
        local_118.Size = iStack_190;
        local_118.DataPtr = (wchar_t *)local_198;
        pFVar16 = SanitizeLogOutput(&local_a8,&local_118);
        if ((pFVar16->Data).ArrayNum == 0) {
          local_330 = (FScriptContainerElement *)0x15060d16c;
        }
        else {
          local_330 = (pFVar16->Data).AllocatorInstance.Data;
        }
        local_328.Name = (char (*) [5])0x1513ff990;
        pFVar2 = (param_3->KeyMetadataObj).Object;
        if (pFVar2 == (FLocMetadataObject *)0x0) {
          local_320 = (FScriptContainerElement *)L"";
        }
        else {
          local_188.SharedReferenceCount.ReferenceController =
               (param_3->KeyMetadataObj).SharedReferenceCount.ReferenceController;
          if (local_188.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          local_188.Object = pFVar2;
          pFVar16 = FJsonInternationalizationMetaDataSerializer::MetadataToString
                              (&local_b8,&local_188);
          SanitizeLogOutput(&local_c8,pFVar16);
          bVar8 = true;
          bVar12 = true;
          ::FString::PrintfImpl(&local_230,L" (meta-data \"%s\")");
          local_320 = (FScriptContainerElement *)L"";
          if (local_230.Data.ArrayNum != 0) {
            local_320 = local_230.Data.AllocatorInstance.Data;
          }
        }
        bVar7 = false;
        local_318.Name = (char (*) [15])0x1513ff998;
        local_178 = (param_3->Key).Str.Data.AllocatorInstance.Data;
        iVar1 = (param_3->Key).Str.Data.ArrayNum;
        iStack_170 = iVar1 + -1;
        if (iVar1 == 0) {
          iStack_170 = 0;
        }
        local_108._12_4_ = uStack_16c;
        local_108.Size = iStack_170;
        local_108.DataPtr = (wchar_t *)local_178;
        pFVar16 = SanitizeLogOutput(&local_d8,&local_108);
        if ((pFVar16->Data).ArrayNum == 0) {
          local_310 = (FScriptContainerElement *)0x15060d16c;
        }
        else {
          local_310 = (pFVar16->Data).AllocatorInstance.Data;
        }
        local_308.Name = (char (*) [7])0x1513ff9a8;
        local_168 = (param_1->Str).Data.AllocatorInstance.Data;
        iVar1 = (param_1->Str).Data.ArrayNum;
        iStack_160 = iVar1 + -1;
        if (iVar1 == 0) {
          iStack_160 = 0;
        }
        local_f8._12_4_ = uStack_15c;
        local_f8.Size = iStack_160;
        local_f8.DataPtr = (wchar_t *)local_168;
        pFVar16 = SanitizeLogOutput(&local_e8,&local_f8);
        if ((pFVar16->Data).ArrayNum == 0) {
          local_300 = (FScriptContainerElement *)0x15060d16c;
        }
        else {
          local_300 = (pFVar16->Data).AllocatorInstance.Data;
        }
        local_2f8.Name = (char (*) [13])0x1513ff9b0;
        if ((param_3->SourceLocation).Data.ArrayNum == 0) {
          local_2f0 = (FScriptContainerElement *)0x15060d16c;
        }
        else {
          local_2f0 = (param_3->SourceLocation).Data.AllocatorInstance.Data;
        }
        local_2e8.Name = (char (*) [9])0x151400480;
        if (param_4 == (FString *)0x0) {
          local_2e0 = (FScriptContainerElement *)L"";
        }
        else {
          bVar7 = true;
          ::FString::PrintfImpl(&local_240,L" from %s");
          local_2e0 = (FScriptContainerElement *)L"";
          if (local_240.Data.ArrayNum != 0) {
            local_2e0 = local_240.Data.AllocatorInstance.Data;
          }
        }
        local_2d8.Name = (char (*) [5])0x1514004a4;
        UE::Logging::Private::
        LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[9]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[7]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[15]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[17]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[21]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
                  ((FLogCategoryBase *)&LogLocTextHelper,&::LOG_Static,&local_2d8,
                   (wchar_t **)&local_2e0,&local_2e8,(wchar_t **)&local_2f0,&local_2f8,
                   (wchar_t **)&local_300,&local_308,(wchar_t **)&local_310,&local_318,
                   (wchar_t **)&local_320,&local_328,(wchar_t **)&local_330,&local_338,
                   (wchar_t **)&local_340,&local_348,(wchar_t **)&local_350,&local_358,
                   (wchar_t **)&local_360,&local_368,(wchar_t **)&local_258,&local_res8,
                   &LocTextHelper::LocalizationLogIdentifier);
        if ((bVar7) && (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_240.Data.AllocatorInstance.Data);
        }
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        if ((bVar12) && (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_230.Data.AllocatorInstance.Data);
        }
        if ((bVar8) && (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if ((bVar11) && (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_220.Data.AllocatorInstance.Data);
        }
        if ((bVar6) && (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if ((bVar9) && (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if ((bVar4) && (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_210.Data.AllocatorInstance.Data);
        }
        if ((bVar5) && (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if ((bVar13) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      FLocTextConflicts::AddConflict
                (&this->ConflictTracker,param_1,&param_3->Key,&param_3->KeyMetadataObj,param_2,
                 &param_3->SourceLocation);
      if ((local_388.Object == (FManifestEntry *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        uVar10 = (*pcVar3)();
        return (bool)uVar10;
      }
      FLocTextConflicts::AddConflict
                (&this->ConflictTracker,param_1,&param_3->Key,&param_3->KeyMetadataObj,
                 &(local_388.Object)->Source,pFVar18);
      bVar13 = false;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_388.SharedReferenceCount.ReferenceController);
  if (local_378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_378.Data.AllocatorInstance.Data);
  }
  return bVar13;
}

// AddTranslation @ 146b50960

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall
FLocTextHelper::AddTranslation
          (FLocTextHelper *this,FString *param_1,TSharedRef<FArchiveEntry,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *pTVar4;
  FInternationalizationArchive *this_00;
  FInternationalizationArchive *pFVar5;
  
  pTVar4 = TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
                   *)&this->Archives,param_1);
  if (pTVar4 == (TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *)0x0) {
    this_00 = (FInternationalizationArchive *)0x0;
    pFVar5 = this_00;
  }
  else {
    pFVar5 = *(FInternationalizationArchive **)&pTVar4->field_0x18;
    this_00 = *(FInternationalizationArchive **)&pTVar4->field_0x10;
    if (pFVar5 != (FInternationalizationArchive *)0x0) {
      LOCK();
      *(int *)&pFVar5->EntriesBySourceText = *(int *)&pFVar5->EntriesBySourceText + 1;
      UNLOCK();
    }
    if (this_00 != (FInternationalizationArchive *)0x0) goto LAB_146b50a0f;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Archive.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                     ,0x45c,
                     L"Attempted to add a translation, but no valid archive could be found for \'%s\'!"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((this_00 == (FInternationalizationArchive *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
LAB_146b50a0f:
  bVar2 = FInternationalizationArchive::AddEntry(this_00,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return bVar2;
}

// AddTranslation @ 146b50a50

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall
FLocTextHelper::AddTranslation
          (FLocTextHelper *this,FString *param_1,FLocKey *param_2,FLocKey *param_3,
          TSharedPtr<FLocMetadataObject,1> *param_4,FLocItem *param_5,FLocItem *param_6,bool param_7
          )

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *pTVar4;
  FInternationalizationArchive *this_00;
  FInternationalizationArchive *pFVar5;
  TSharedPtr<FLocMetadataObject,1> local_18;
  
  pTVar4 = TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
                   *)&this->Archives,param_1);
  if (pTVar4 == (TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *)0x0) {
    this_00 = (FInternationalizationArchive *)0x0;
    pFVar5 = this_00;
  }
  else {
    pFVar5 = *(FInternationalizationArchive **)&pTVar4->field_0x18;
    this_00 = *(FInternationalizationArchive **)&pTVar4->field_0x10;
    if (pFVar5 != (FInternationalizationArchive *)0x0) {
      LOCK();
      *(int *)&pFVar5->EntriesBySourceText = *(int *)&pFVar5->EntriesBySourceText + 1;
      UNLOCK();
    }
    if (this_00 != (FInternationalizationArchive *)0x0) goto LAB_146b50b08;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Archive.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                     ,0x455,
                     L"Attempted to add a translation, but no valid archive could be found for \'%s\'!"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((this_00 == (FInternationalizationArchive *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
LAB_146b50b08:
  local_18.Object = param_4->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_4->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar2 = FInternationalizationArchive::AddEntry
                    (this_00,param_2,param_3,param_5,param_6,&local_18,param_7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return bVar2;
}

// EnumerateSourceTexts @ 146b57810

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __thiscall
FLocTextHelper::EnumerateSourceTexts
          (FLocTextHelper *this,TFunctionRef<bool___cdecl(TSharedRef<FManifestEntry,1>)> *param_1,
          bool param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FLocKey *pFVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  TSharedPtr<FManifestEntry,1> local_78;
  FLocKey *local_68;
  TReferenceControllerBase<1> *local_60;
  longlong *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  if (((this->Manifest).Object == (FInternationalizationManifest *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Manifest.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                         ,0x411,
                         L"Attempted to enumerate source texts, but no manifest has been loaded!"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((this->Manifest).Object == (FInternationalizationManifest *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FInternationalizationManifest::GetEntriesBySourceTextIterator
            ((this->Manifest).Object,(TConstIterator *)&local_58);
  if (local_50.CurrentBitIndex < (local_50.Array)->NumBits) {
    do {
      pTVar2 = *(TReferenceControllerBase<1> **)
                (*local_58 + 0x18 + (longlong)local_50.CurrentBitIndex * 0x28);
      pFVar3 = *(FLocKey **)(*local_58 + 0x10 + (longlong)local_50.CurrentBitIndex * 0x28);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (param_2) {
        iVar1 = (this->Dependencies).ArrayNum;
        pFVar7 = (this->Dependencies).AllocatorInstance.Data;
        pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
        while( true ) {
          if ((this->Dependencies).ArrayNum != iVar1) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<TSharedPtr<FInternationalizationManifest,1>_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if (pFVar7 == pFVar8) goto LAB_146b57995;
          if ((*(longlong *)pFVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FInternationalizationManifest::FindEntryBySource
                    (*(FInternationalizationManifest **)pFVar7,&local_78,pFVar3,
                     (FLocItem *)(pFVar3 + 1));
          if (local_78.Object != (FManifestEntry *)0x0) break;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_78.SharedReferenceCount.ReferenceController);
          pFVar7 = pFVar7 + 0x10;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.SharedReferenceCount.ReferenceController);
      }
      else {
LAB_146b57995:
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_68 = pFVar3;
        local_60 = pTVar2;
        cVar6 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_68);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_60);
        if (cVar6 == '\0') {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
  }
  return;
}

// EnumerateSourceTextsParallel @ 146b57a40

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __thiscall
FLocTextHelper::EnumerateSourceTextsParallel
          (FLocTextHelper *this,TFunctionRef<bool___cdecl(TSharedRef<FManifestEntry,1>)> *param_1,
          bool param_2)

{
  code *pcVar1;
  bool bVar2;
  <lambda_1> local_res8 [8];
  undefined1 local_res18 [16];
  TArray<TTuple<FString,TSharedRef<FManifestEntry,1>_>,TSizedDefaultAllocator<32>_> local_68;
  TArrayView<std::nullptr_t,int> local_58;
  code *local_48;
  FLocTextHelper **local_40;
  FLocTextHelper *local_38;
  TArray<TTuple<FString,TSharedRef<FManifestEntry,1>_>,TSizedDefaultAllocator<32>_> *local_30;
  <lambda_1> *local_28;
  TFunctionRef<bool___cdecl(TSharedRef<FManifestEntry,1>)> *local_20;
  undefined1 *local_18;
  
  local_res18[0] = param_2;
  if ((this->Manifest).Object == (FInternationalizationManifest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Manifest.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                       ,0x42f,
                       L"Attempted to enumerate source texts, but no manifest has been loaded!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8[0] = (<lambda_1>)0x0;
  if ((this->Manifest).Object == (FInternationalizationManifest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TSet<TTuple<FString,TSharedRef<FManifestEntry,1>_>,FLocKeyMultiMapFuncs<TSharedRef<FManifestEntry,1>_>,FDefaultSetAllocator>
  ::Array((TSet<TTuple<FString,TSharedRef<FManifestEntry,1>_>,FLocKeyMultiMapFuncs<TSharedRef<FManifestEntry,1>_>,FDefaultSetAllocator>
           *)&((this->Manifest).Object)->EntriesBySourceText,&local_68);
  local_30 = &local_68;
  local_28 = local_res8;
  local_58.DataPtr = (void **)0x0;
  local_18 = local_res18;
  local_58.ArrayNum = 0;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`FLocTextHelper::EnumerateSourceTextsParallel'::__l2::<lambda_1>,void,int>
             ::Call;
  local_40 = &local_38;
  local_38 = this;
  local_20 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",local_68.ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_48,
             local_res8[0],None,&local_58);
  DestructItems<TTuple<FString,TSharedRef<FManifestEntry,1>_>,int>
            ((TTuple<FString,TSharedRef<FManifestEntry,1>_> *)local_68.AllocatorInstance.Data,
             local_68.ArrayNum);
  if ((TTuple<FString,TSharedRef<FManifestEntry,1>_> *)local_68.AllocatorInstance.Data !=
      (TTuple<FString,TSharedRef<FManifestEntry,1>_> *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

// EnumerateTranslations @ 146b57ba0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __thiscall
FLocTextHelper::EnumerateTranslations
          (FLocTextHelper *this,FString *param_1,
          TFunctionRef<bool___cdecl(TSharedRef<FArchiveEntry,1>)> *param_2,bool param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *local_38;
  FLocTextHelper **local_30;
  FLocTextHelper *local_28;
  FString *local_20;
  TFunctionRef<bool___cdecl(TSharedRef<FArchiveEntry,1>)> *local_18;
  
  pTVar4 = TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
                   *)&this->Archives,param_1);
  if (pTVar4 == (TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar5 = *(TReferenceControllerBase<1> **)&pTVar4->field_0x18;
    lVar1 = *(longlong *)&pTVar4->field_0x10;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar1 != 0) goto LAB_146b57c2f;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Archive.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                     ,0x485,
                     L"Attempted to enumerate translations, but no valid archive could be found for \'%s\'!"
                    );
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_146b57c2f:
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FLocTextHelper::EnumerateTranslations'::__l2::<lambda_1>,bool,TSharedRef<FManifestEntry,1>_>
             ::Call;
  local_28 = this;
  local_20 = param_1;
  local_18 = param_2;
  EnumerateSourceTexts
            (this,(TFunctionRef<bool___cdecl(TSharedRef<FManifestEntry,1>)> *)&local_38,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// FindDependencyEntry @ 146b5ee90

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

TSharedPtr<FManifestEntry,1> * __thiscall
FLocTextHelper::FindDependencyEntry
          (FLocTextHelper *this,TSharedPtr<FManifestEntry,1> *__return_storage_ptr__,
          FLocKey *param_1,FLocKey *param_2,FString *param_3,FString *param_4)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FInternationalizationManifest *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedPtr<FManifestEntry,1> *pTVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  TSharedPtr<FManifestEntry,1> local_48;
  
  uVar8 = 0;
  uVar9 = uVar8;
  if (0 < (this->Dependencies).ArrayNum) {
    do {
      uVar7 = (uint)uVar8;
      uVar5 = 0;
      if ((int)uVar7 < (this->Dependencies).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedPtr<FManifestEntry,1> *)(*pcVar3)();
        return pTVar6;
      }
      pFVar1 = (this->Dependencies).AllocatorInstance.Data;
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + uVar9 + 8);
      this_00 = *(FInternationalizationManifest **)(pFVar1 + uVar9);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this_00 == (FInternationalizationManifest *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedPtr<FManifestEntry,1> *)(*pcVar3)();
        return pTVar6;
      }
      FInternationalizationManifest::FindEntryByKey(this_00,&local_48,param_1,param_2,param_3);
      if (local_48.Object != (FManifestEntry *)0x0) {
        if (param_4 != (FString *)0x0) {
          uVar5 = 0;
          if ((int)uVar7 < (this->DependencyPaths).ArrayNum) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar6 = (TSharedPtr<FManifestEntry,1> *)(*pcVar3)();
            return pTVar6;
          }
          ::FString::operator=
                    (param_4,(FString *)
                             ((this->DependencyPaths).AllocatorInstance.Data +
                             (longlong)(int)uVar7 * 0x10));
        }
        __return_storage_ptr__->Object = local_48.Object;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             local_48.SharedReferenceCount.ReferenceController;
        if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        return __return_storage_ptr__;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      uVar8 = (ulonglong)(uVar7 + 1);
      uVar9 = uVar9 + 0x10;
    } while ((int)(uVar7 + 1) < (this->Dependencies).ArrayNum);
  }
  __return_storage_ptr__->Object = (FManifestEntry *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// FindDependencyEntry @ 146b5f080

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

TSharedPtr<FManifestEntry,1> * __thiscall
FLocTextHelper::FindDependencyEntry
          (FLocTextHelper *this,TSharedPtr<FManifestEntry,1> *__return_storage_ptr__,
          FLocKey *param_1,FManifestContext *param_2,FString *param_3)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FInternationalizationManifest *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedPtr<FManifestEntry,1> *pTVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  TSharedPtr<FManifestEntry,1> local_48;
  
  uVar8 = 0;
  uVar9 = uVar8;
  if (0 < (this->Dependencies).ArrayNum) {
    do {
      uVar7 = (uint)uVar8;
      uVar5 = 0;
      if ((int)uVar7 < (this->Dependencies).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedPtr<FManifestEntry,1> *)(*pcVar3)();
        return pTVar6;
      }
      pFVar1 = (this->Dependencies).AllocatorInstance.Data;
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + uVar9 + 8);
      this_00 = *(FInternationalizationManifest **)(pFVar1 + uVar9);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this_00 == (FInternationalizationManifest *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedPtr<FManifestEntry,1> *)(*pcVar3)();
        return pTVar6;
      }
      FInternationalizationManifest::FindEntryByContext(this_00,&local_48,param_1,param_2);
      if (local_48.Object != (FManifestEntry *)0x0) {
        if (param_3 != (FString *)0x0) {
          uVar5 = 0;
          if ((int)uVar7 < (this->DependencyPaths).ArrayNum) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar6 = (TSharedPtr<FManifestEntry,1> *)(*pcVar3)();
            return pTVar6;
          }
          ::FString::operator=
                    (param_3,(FString *)
                             ((this->DependencyPaths).AllocatorInstance.Data +
                             (longlong)(int)uVar7 * 0x10));
        }
        __return_storage_ptr__->Object = local_48.Object;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             local_48.SharedReferenceCount.ReferenceController;
        if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        return __return_storage_ptr__;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      uVar8 = (ulonglong)(uVar7 + 1);
      uVar9 = uVar9 + 0x10;
    } while ((int)(uVar7 + 1) < (this->Dependencies).ArrayNum);
  }
  __return_storage_ptr__->Object = (FManifestEntry *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// FindKeysForLegacyTranslation @ 146b5f690

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall
FLocTextHelper::FindKeysForLegacyTranslation
          (FLocTextHelper *this,FString *param_1,FLocKey *param_2,FString *param_3,
          TSharedPtr<FLocMetadataObject,1> *param_4,
          TArray<FLocKey,TSizedDefaultAllocator<32>_> *param_5)

{
  int iVar1;
  FInternationalizationManifest *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *pTVar8;
  FInternationalizationArchive *pFVar9;
  FSharedReferencer<1> FVar10;
  FSharedReferencer<1> FStack_70;
  undefined8 local_68;
  FSharedReferencer<1> local_60;
  TSharedPtr<FLocMetadataObject,1> local_58;
  TSharedRef<FInternationalizationManifest_const_,1> local_48;
  TSharedPtr<FInternationalizationArchive_const_,1> local_38 [2];
  
  if (((this->Manifest).Object == (FInternationalizationManifest *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Manifest.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                         ,0x615,
                         L"Attempted to find a key for a legacy translation, but no manifest has been loaded!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  iVar7 = (this->NativeCulture).Data.ArrayNum;
  pFVar9 = (FInternationalizationArchive *)0x0;
  FVar10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FStack_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (1 < iVar7) {
    iVar1 = (param_1->Data).ArrayNum;
    if (iVar1 == iVar7) {
      if (iVar1 < 2) goto LAB_146b5f7d6;
      iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)(this->NativeCulture).Data.AllocatorInstance.Data);
      bVar5 = iVar7 == 0;
    }
    else {
      bVar5 = iVar7 + iVar1 == 1;
    }
    if (!bVar5) {
      pTVar8 = TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
                       *)&this->Archives,&this->NativeCulture);
      if (pTVar8 == (TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *)0x0) {
        local_60.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar9 = (FInternationalizationArchive *)0x0;
      }
      else {
        pFVar9 = *(FInternationalizationArchive **)&pTVar8->field_0x10;
        local_60.ReferenceController = *(TReferenceControllerBase<1> **)&pTVar8->field_0x18;
        if (local_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_60.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_60.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      local_68 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_70,&local_60);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_60.ReferenceController);
      FVar10.ReferenceController = FStack_70.ReferenceController;
      if ((pFVar9 == (FInternationalizationArchive *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("NativeArchive.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                             ,0x61b,
                             L"Attempted to find a key for a legacy translation, but no valid archive could be found for \'%s\'!"
                            ), FVar10.ReferenceController = FStack_70.ReferenceController, bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
  }
LAB_146b5f7d6:
  local_58.Object = param_4->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (param_4->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FVar10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38[0].Object = pFVar9;
  local_38[0].SharedReferenceCount.ReferenceController = FVar10.ReferenceController;
  if (((this->Manifest).Object == (FInternationalizationManifest *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pFVar2 = (this->Manifest).Object;
  pTVar3 = (this->Manifest).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar2 == (FInternationalizationManifest *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pFVar2;
  local_48.SharedReferenceCount.ReferenceController = pTVar3;
  bVar5 = FindKeysForLegacyTranslation(&local_48,local_38,param_2,param_3,&local_58,param_5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38[0].SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return bVar5;
}

// FindKeysForLegacyTranslation @ 146b5f930

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __cdecl
FLocTextHelper::FindKeysForLegacyTranslation
          (TSharedRef<FInternationalizationManifest_const_,1> *param_1,
          TSharedPtr<FInternationalizationArchive_const_,1> *param_2,FLocKey *param_3,
          FString *param_4,TSharedPtr<FLocMetadataObject,1> *param_5,
          TArray<FLocKey,TSizedDefaultAllocator<32>_> *param_6)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  FLocMetadataObject *this;
  FInternationalizationManifest *this_00;
  code *pcVar6;
  longlong *plVar7;
  ForAnyElementType _Src;
  undefined1 uVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  wchar_t *_Str1;
  wchar_t *_Str2;
  longlong lVar12;
  FLocKey *pFVar13;
  FManifestEntry *pFVar14;
  FLocKey *pFVar15;
  bool bVar16;
  FString local_a8;
  ForAnyElementType local_98;
  undefined8 local_90;
  TSharedPtr<FManifestEntry,1> local_88;
  FLocItem local_78;
  longlong *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  local_a8.Data.ArrayNum = (param_4->Data).ArrayNum;
  lVar12 = (longlong)local_a8.Data.ArrayNum;
  pFVar2 = (param_4->Data).AllocatorInstance.Data;
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_a8.Data.ArrayNum == 0) {
    local_a8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_a8.Data.ArrayNum,0,(ForAnyElementType *)&local_a8,local_a8.Data.ArrayNum,
               &local_a8.Data.ArrayMax);
    memcpy(local_a8.Data.AllocatorInstance.Data,pFVar2,lVar12 * 2);
  }
  plVar7 = (longlong *)CONCAT71(param_5._1_7_,param_5._0_1_);
  if (param_2->Object != (FInternationalizationArchive *)0x0) {
    FInternationalizationArchive::GetEntriesBySourceTextIterator
              (param_2->Object,(TConstIterator *)&local_58);
    if (local_50.CurrentBitIndex < (local_50.Array)->NumBits) {
      do {
        lVar11 = (longlong)local_50.CurrentBitIndex;
        lVar12 = *local_58;
        puVar3 = *(undefined8 **)(lVar12 + 0x10 + lVar11 * 0x28);
        if (*(uint *)(puVar3 + 2) == param_3->Hash) {
          if ((param_3->Str).Data.ArrayNum == 0) {
            _Str2 = L"";
          }
          else {
            _Str2 = (wchar_t *)(param_3->Str).Data.AllocatorInstance.Data;
          }
          if (*(int *)(puVar3 + 1) == 0) {
            _Str1 = L"";
          }
          else {
            _Str1 = (wchar_t *)*puVar3;
          }
          iVar10 = wcscmp(_Str1,_Str2);
          if (iVar10 == 0) {
            iVar10 = *(int *)(puVar3 + 0xb);
            iVar1 = (param_4->Data).ArrayNum;
            if (iVar10 == iVar1) {
              if (1 < iVar10) {
                iVar10 = wcscmp((wchar_t *)puVar3[10],
                                (wchar_t *)(param_4->Data).AllocatorInstance.Data);
                bVar16 = iVar10 == 0;
                goto LAB_146b5fa5d;
              }
            }
            else {
              bVar16 = iVar10 + iVar1 == 1;
LAB_146b5fa5d:
              if (!bVar16) goto LAB_146b5fb18;
            }
            lVar4 = puVar3[0xf];
            if ((lVar4 == 0) && (*plVar7 == 0)) {
LAB_146b5fb43:
              ::FString::operator=(&local_a8,(FString *)(puVar3 + 6));
              break;
            }
            lVar5 = *plVar7;
            if ((lVar5 != 0) == (lVar4 != 0)) {
              if ((lVar4 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x44d,L""), bVar16)) {
                pcVar6 = (code *)swi(3);
                uVar8 = (*pcVar6)();
                return (bool)uVar8;
              }
              this = (FLocMetadataObject *)puVar3[0xf];
              if ((*plVar7 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x44d,L""), bVar16)) {
                pcVar6 = (code *)swi(3);
                uVar8 = (*pcVar6)();
                return (bool)uVar8;
              }
              bVar16 = FLocMetadataObject::operator==(this,(FLocMetadataObject *)*plVar7);
              if (bVar16) {
                puVar3 = *(undefined8 **)(lVar12 + lVar11 * 0x28 + 0x10);
                goto LAB_146b5fb43;
              }
            }
            else if (((lVar5 != 0) && (*(int *)(lVar5 + 8) == *(int *)(lVar5 + 0x34))) ||
                    ((lVar4 != 0 && (*(int *)(lVar4 + 8) == *(int *)(lVar4 + 0x34)))))
            goto LAB_146b5fb43;
          }
        }
LAB_146b5fb18:
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  _Src.Data = local_a8.Data.AllocatorInstance.Data;
  lVar12 = (longlong)local_a8.Data.ArrayNum;
  bVar16 = false;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90._0_4_ = local_a8.Data.ArrayNum;
  this_00 = param_1->Object;
  if (local_a8.Data.ArrayNum == 0) {
    local_78.Text.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Text.Data.ArrayMax = 0;
    local_78.Text.Data.ArrayNum = local_a8.Data.ArrayNum;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_a8.Data.ArrayNum,0,&local_98,local_a8.Data.ArrayNum,
               (int *)((longlong)&local_90 + 4));
    memcpy(local_98.Data,_Src.Data,lVar12 * 2);
    local_78.Text.Data.AllocatorInstance.Data = local_98.Data;
    local_78.Text.Data.ArrayMax = local_90._4_4_;
    local_78.Text.Data.ArrayNum = (int)local_90;
  }
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_78.MetadataObj.Object = (FLocMetadataObject *)0x0;
  local_78.MetadataObj.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  FInternationalizationManifest::FindEntryBySource(this_00,&local_88,param_3,&local_78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.MetadataObj.SharedReferenceCount.ReferenceController);
  if (local_78.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Text.Data.AllocatorInstance.Data);
  }
  if (local_88.Object != (FManifestEntry *)0x0) {
    pFVar14 = local_88.Object;
    if ((local_88.Object == (FManifestEntry *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), pFVar14 = local_88.Object, bVar16)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    iVar10 = (pFVar14->Contexts).ArrayNum;
    pFVar13 = (FLocKey *)(pFVar14->Contexts).AllocatorInstance.Data;
    pFVar15 = (FLocKey *)((longlong)pFVar13 + (longlong)iVar10 * 0x58);
    bVar16 = false;
    while( true ) {
      if ((pFVar14->Contexts).ArrayNum != iVar10) {
        param_5._0_1_ = 0;
        `TCheckedPointerIterator<FManifestContext,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&param_5);
      }
      if (pFVar13 == pFVar15) break;
      pFVar2 = pFVar13[3].Str.Data.AllocatorInstance.Data;
      if ((pFVar2 != (FScriptContainerElement *)0x0) == (*plVar7 != 0)) {
        if (pFVar2 == (FScriptContainerElement *)0x0) {
          if (*plVar7 != 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L"");
            if (bVar9) {
              pcVar6 = (code *)swi(3);
              uVar8 = (*pcVar6)();
              return (bool)uVar8;
            }
            goto LAB_146b5fcbe;
          }
        }
        else {
LAB_146b5fcbe:
          pFVar2 = pFVar13[3].Str.Data.AllocatorInstance.Data;
          if ((*plVar7 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          bVar9 = FLocMetadataObject::operator==
                            ((FLocMetadataObject *)pFVar2,(FLocMetadataObject *)*plVar7);
          if (!bVar9) goto LAB_146b5fd0c;
        }
        TArray<FLocKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FLocKey_const_&>(param_6,pFVar13)
        ;
        bVar16 = true;
      }
LAB_146b5fd0c:
      pFVar13 = (FLocKey *)&pFVar13[3].Hash;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)plVar7[1]);
  return bVar16;
}

// FindSourceText @ 146b5ff20

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

TSharedPtr<FManifestEntry,1> * __thiscall
FLocTextHelper::FindSourceText
          (FLocTextHelper *this,TSharedPtr<FManifestEntry,1> *__return_storage_ptr__,
          FLocKey *param_1,FLocKey *param_2,FString *param_3)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FManifestEntry,1> *pTVar3;
  
  if ((this->Manifest).Object == (FInternationalizationManifest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Manifest.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                       ,0x405,L"Attempted to find source text, but no manifest has been loaded!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FManifestEntry,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->Manifest).Object == (FInternationalizationManifest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FManifestEntry,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FInternationalizationManifest::FindEntryByKey
            ((this->Manifest).Object,__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// FindSourceText @ 146b5ffe0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

TSharedPtr<FManifestEntry,1> * __thiscall
FLocTextHelper::FindSourceText
          (FLocTextHelper *this,TSharedPtr<FManifestEntry,1> *__return_storage_ptr__,
          FLocKey *param_1,FManifestContext *param_2)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FManifestEntry,1> *pTVar3;
  
  if ((this->Manifest).Object == (FInternationalizationManifest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Manifest.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                       ,0x40b,L"Attempted to find source text, but no manifest has been loaded!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FManifestEntry,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  if ((this->Manifest).Object == (FInternationalizationManifest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<FManifestEntry,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FInternationalizationManifest::FindEntryByContext
            ((this->Manifest).Object,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// FindTranslation @ 146b600a0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

TSharedPtr<FArchiveEntry,1> * __thiscall
FLocTextHelper::FindTranslation
          (FLocTextHelper *this,TSharedPtr<FArchiveEntry,1> *__return_storage_ptr__,FString *param_1
          ,FLocKey *param_2,FLocKey *param_3,TSharedPtr<FLocMetadataObject,1> *param_4)

{
  TSharedPtr<FLocMetadataObject,1> local_18;
  
  local_18.Object = param_4->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_4->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FindTranslationImpl(this,__return_storage_ptr__,param_1,param_2,param_3,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// FindTranslationImpl @ 146b60110

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

TSharedPtr<FArchiveEntry,1> * __thiscall
FLocTextHelper::FindTranslationImpl
          (FLocTextHelper *this,TSharedPtr<FArchiveEntry,1> *__return_storage_ptr__,FString *param_1
          ,FLocKey *param_2,FLocKey *param_3,TSharedPtr<FLocMetadataObject,1> *param_4)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *pTVar3;
  TSharedPtr<FArchiveEntry,1> *pTVar4;
  FInternationalizationArchive *this_00;
  FInternationalizationArchive *pFVar5;
  TSharedPtr<FLocMetadataObject,1> local_18;
  
  pTVar3 = TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
                   *)&this->Archives,param_1);
  if (pTVar3 == (TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *)0x0) {
    this_00 = (FInternationalizationArchive *)0x0;
    pFVar5 = this_00;
  }
  else {
    pFVar5 = *(FInternationalizationArchive **)&pTVar3->field_0x18;
    this_00 = *(FInternationalizationArchive **)&pTVar3->field_0x10;
    if (pFVar5 != (FInternationalizationArchive *)0x0) {
      LOCK();
      *(int *)&pFVar5->EntriesBySourceText = *(int *)&pFVar5->EntriesBySourceText + 1;
      UNLOCK();
    }
    if (this_00 != (FInternationalizationArchive *)0x0) goto LAB_146b601cb;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Archive.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                     ,0x7d5,
                     L"Attempted to find a translation, but no valid archive could be found for \'%s\'!"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSharedPtr<FArchiveEntry,1> *)(*pcVar1)();
    return pTVar4;
  }
  if ((this_00 == (FInternationalizationArchive *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSharedPtr<FArchiveEntry,1> *)(*pcVar1)();
    return pTVar4;
  }
LAB_146b601cb:
  local_18.Object = param_4->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_4->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FInternationalizationArchive::FindEntryByKey
            (this_00,__return_storage_ptr__,param_2,param_3,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// GetAllCultures @ 146b70490

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FLocTextHelper::GetAllCultures
          (FLocTextHelper *this,TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          bool param_1)

{
  int iVar1;
  
  if (((param_1) && ((this->ForeignCultures).ArrayNum != 0)) ||
     ((this->NativeCulture).Data.ArrayNum < 2)) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
  }
  else {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
    __return_storage_ptr__->ArrayNum = iVar1 + 1;
    ::FString::FString((FString *)
                       ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar1 * 0x10),
                       &this->NativeCulture);
  }
  TArray<FString,TSizedDefaultAllocator<32>_>::Append<FString,TSizedDefaultAllocator<32>_>
            (__return_storage_ptr__,&this->ForeignCultures);
  return __return_storage_ptr__;
}

// GetConflictReport @ 146b71a70

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

FString * __thiscall
FLocTextHelper::GetConflictReport(FLocTextHelper *this,FString *__return_storage_ptr__)

{
  FLocTextConflicts::GetConflictReport(&this->ConflictTracker,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetCopyrightNotice @ 146b72600

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

FString * __thiscall FLocTextHelper::GetCopyrightNotice(FLocTextHelper *this)

{
  return &this->CopyrightNotice;
}

// GetExportText @ 146b73630

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __thiscall
FLocTextHelper::GetExportText
          (FLocTextHelper *this,FString *param_1,FLocKey *param_2,FLocKey *param_3,
          TSharedPtr<FLocMetadataObject,1> *param_4,ELocTextExportSourceMethod param_5,
          FLocItem *param_6,FLocItem *param_7,FLocItem *param_8)

{
  FLocItem *this_00;
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  TSharedPtr<FArchiveEntry,1> local_88;
  TSharedPtr<FArchiveEntry,1> local_78;
  TSharedPtr<FLocMetadataObject,1> local_68;
  TSharedPtr<FLocMetadataObject,1> local_58;
  FLocItem local_48;
  
  FLocItem::operator=(param_7,param_6);
  local_48.Text.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Text.Data.ArrayNum = 0;
  local_48.Text.Data.ArrayMax = 0;
  local_48.MetadataObj.Object = (FLocMetadataObject *)0x0;
  local_48.MetadataObj.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  FLocItem::operator=(param_8,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.MetadataObj.SharedReferenceCount.ReferenceController);
  if (local_48.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Text.Data.AllocatorInstance.Data);
  }
  if ((param_5 == NativeText) && (iVar3 = (this->NativeCulture).Data.ArrayNum, 1 < iVar3)) {
    iVar1 = (param_1->Data).ArrayNum;
    if (iVar1 == iVar3) {
      if (iVar1 < 2) goto LAB_146b73802;
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)(this->NativeCulture).Data.AllocatorInstance.Data);
      bVar4 = iVar3 == 0;
    }
    else {
      bVar4 = iVar1 + iVar3 == 1;
    }
    if (!bVar4) {
      local_68.Object = param_4->Object;
      local_68.SharedReferenceCount.ReferenceController =
           (param_4->SharedReferenceCount).ReferenceController;
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FindTranslationImpl(this,&local_88,&this->NativeCulture,param_2,param_3,&local_68);
      if (local_88.Object != (FArchiveEntry *)0x0) {
        if ((local_88.Object == (FArchiveEntry *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = &(local_88.Object)->Source;
        if ((local_88.Object == (FArchiveEntry *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar4 = FLocItem::IsExactMatch(this_00,&(local_88.Object)->Translation);
        if (!bVar4) {
          if ((local_88.Object == (FArchiveEntry *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FLocItem::operator=(param_7,&(local_88.Object)->Translation);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
    }
  }
LAB_146b73802:
  local_58.Object = param_4->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (param_4->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FindTranslationImpl(this,&local_78,param_1,param_2,param_3,&local_58);
  if (local_78.Object != (FArchiveEntry *)0x0) {
    if ((local_78.Object == (FArchiveEntry *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar4 = FLocItem::IsExactMatch(&(local_78.Object)->Source,param_7);
    if (bVar4) {
      if ((local_78.Object == (FArchiveEntry *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FLocItem::operator=(param_8,&(local_78.Object)->Translation);
    }
  }
  if ((1 < (param_8->Text).Data.ArrayNum) ||
     (iVar3 = (this->NativeCulture).Data.ArrayNum, iVar3 < 2)) goto LAB_146b73907;
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar1 == iVar3) {
    if (1 < iVar1) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)(this->NativeCulture).Data.AllocatorInstance.Data);
      bVar4 = iVar3 == 0;
      goto LAB_146b738f5;
    }
  }
  else {
    bVar4 = iVar3 + iVar1 == 1;
LAB_146b738f5:
    if (!bVar4) goto LAB_146b73907;
  }
  FLocItem::operator=(param_8,param_7);
LAB_146b73907:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return;
}

// GetForeignCultures @ 146b73c20

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FLocTextHelper::GetForeignCultures(FLocTextHelper *this)

{
  return &this->ForeignCultures;
}

// GetLocFileNotifies @ 146b74600

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

TSharedPtr<ILocFileNotifies,1> * __thiscall
FLocTextHelper::GetLocFileNotifies
          (FLocTextHelper *this,TSharedPtr<ILocFileNotifies,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->LocFileNotifies).Object;
  pTVar1 = (this->LocFileNotifies).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetNativeCulture @ 146b75320

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

FString * __thiscall FLocTextHelper::GetNativeCulture(FLocTextHelper *this)

{
  return &this->NativeCulture;
}

// GetPlatformSplitMode @ 146b75f30

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

ELocTextPlatformSplitMode __thiscall FLocTextHelper::GetPlatformSplitMode(FLocTextHelper *this)

{
  return this->PlatformSplitMode;
}

// GetPlatformsToSplit @ 146b75f40

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FLocTextHelper::GetPlatformsToSplit(FLocTextHelper *this)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  ForAnyElementType FVar11;
  FName *pFVar12;
  FIdentityFunctor aFStackX_8 [8];
  undefined1 auStackX_10 [8];
  undefined1 auStackX_18 [8];
  FName FStackX_20;
  FName FStack_78;
  TArray<FName,TSizedDefaultAllocator<32>_> TStack_70;
  FString FStack_60;
  FString aFStack_50 [2];
  
  uVar9 = (ulonglong)_tls_index;
  if (this->PlatformSplitMode == Confidential) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8) + 0x9d4c) < ::_TSS0
        ) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ConfidentialPlatformNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ConfidentialPlatformNames.ArrayNum = 0;
      ConfidentialPlatformNames.ArrayMax = 0;
      pTVar7 = FDataDrivenPlatformInfoRegistry::GetConfidentialPlatforms();
      pFVar12 = (FName *)(pTVar7->AllocatorInstance).Data;
      iVar8 = pTVar7->ArrayNum;
      pFVar1 = pFVar12 + iVar8;
      while( true ) {
        if (pTVar7->ArrayNum != iVar8) {
          auStackX_10[0] = 0;
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (auStackX_10);
        }
        if (pFVar12 == pFVar1) break;
        FStack_78 = *pFVar12;
        pFVar5 = (FScriptContainerElement *)::FName::ToString(&FStack_78,aFStack_50);
        if (((ConfidentialPlatformNames.AllocatorInstance.Data <= pFVar5) &&
            (pFVar5 < ConfidentialPlatformNames.AllocatorInstance.Data +
                      (longlong)ConfidentialPlatformNames.ArrayMax * 0x10)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar6;
        }
        iVar4 = ConfidentialPlatformNames.ArrayNum;
        if (ConfidentialPlatformNames.ArrayNum == ConfidentialPlatformNames.ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&ConfidentialPlatformNames.AllocatorInstance,
                             &ConfidentialPlatformNames.ArrayMax);
        }
        ConfidentialPlatformNames.ArrayNum = iVar4 + 1;
        pFVar10 = ConfidentialPlatformNames.AllocatorInstance.Data + (longlong)iVar4 * 0x10;
        *(undefined8 *)pFVar10 = 0;
        *(undefined8 *)pFVar10 = *(undefined8 *)pFVar5;
        *(undefined8 *)pFVar5 = 0;
        *(undefined4 *)(pFVar10 + 8) = *(undefined4 *)(pFVar5 + 8);
        *(undefined4 *)(pFVar10 + 0xc) = *(undefined4 *)(pFVar5 + 0xc);
        *(undefined8 *)(pFVar5 + 8) = 0;
        if (aFStack_50[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(aFStack_50[0].Data.AllocatorInstance.Data);
        }
        pFVar12 = pFVar12 + 1;
      }
      AlgoImpl::
      IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
                ((FString *)ConfidentialPlatformNames.AllocatorInstance.Data,
                 ConfidentialPlatformNames.ArrayNum,aFStackX_8[0],(TLess<void> *)auStackX_18);
      atexit(`FLocTextPlatformSplitUtils::GetPlatformsToSplit'::__l5::
             _dynamic_atexit_destructor_for__ConfidentialPlatformNames__);
      _Init_thread_footer(&::_TSS0);
    }
    return &ConfidentialPlatformNames;
  }
  if (this->PlatformSplitMode != All) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8) + 0x9d4c) < ::_TSS2
        ) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      atexit(`FLocTextPlatformSplitUtils::GetPlatformsToSplit'::__l2::
             _dynamic_atexit_destructor_for__EmptyArray__);
      _Init_thread_footer(&::_TSS2);
    }
    return &::EmptyArray;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar9 * 8) + 0x9d4c) < ::_TSS1)
     && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    AllPlatformNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    AllPlatformNames.ArrayNum = 0;
    AllPlatformNames.ArrayMax = 0;
    FDataDrivenPlatformInfoRegistry::GetSortedPlatformNames(&TStack_70,AllPlatformInfos);
    iVar8 = TStack_70.ArrayNum;
    pFVar1 = (FName *)(TStack_70.AllocatorInstance.Data + (longlong)iVar8 * 8);
    FVar11.Data = TStack_70.AllocatorInstance.Data;
    while( true ) {
      if (TStack_70.ArrayNum != iVar8) {
        aFStackX_8[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (aFStackX_8);
      }
      if ((FName *)FVar11.Data == pFVar1) break;
      FStackX_20 = *(FName *)FVar11.Data;
      pFVar5 = (FScriptContainerElement *)::FName::ToString(&FStackX_20,&FStack_60);
      if (((AllPlatformNames.AllocatorInstance.Data <= pFVar5) &&
          (pFVar5 < AllPlatformNames.AllocatorInstance.Data +
                    (longlong)AllPlatformNames.ArrayMax * 0x10)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
      iVar4 = AllPlatformNames.ArrayNum;
      if (AllPlatformNames.ArrayNum == AllPlatformNames.ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&AllPlatformNames.AllocatorInstance,&AllPlatformNames.ArrayMax);
      }
      AllPlatformNames.ArrayNum = iVar4 + 1;
      pFVar10 = AllPlatformNames.AllocatorInstance.Data + (longlong)iVar4 * 0x10;
      *(undefined8 *)pFVar10 = 0;
      *(undefined8 *)pFVar10 = *(undefined8 *)pFVar5;
      *(undefined8 *)pFVar5 = 0;
      *(undefined4 *)(pFVar10 + 8) = *(undefined4 *)(pFVar5 + 8);
      *(undefined4 *)(pFVar10 + 0xc) = *(undefined4 *)(pFVar5 + 0xc);
      *(undefined8 *)(pFVar5 + 8) = 0;
      if (FStack_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_60.Data.AllocatorInstance.Data);
      }
      FVar11.Data = FVar11.Data + 8;
    }
    if (TStack_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_70.AllocatorInstance.Data);
    }
    atexit(`FLocTextPlatformSplitUtils::GetPlatformsToSplit'::__l6::
           _dynamic_atexit_destructor_for__AllPlatformNames__);
    _Init_thread_footer(&::_TSS1);
  }
  return &AllPlatformNames;
}

// GetRuntimeText @ 146b76ca0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __thiscall
FLocTextHelper::GetRuntimeText
          (FLocTextHelper *this,FString *param_1,FLocKey *param_2,FLocKey *param_3,
          TSharedPtr<FLocMetadataObject,1> *param_4,ELocTextExportSourceMethod param_5,
          FLocItem *param_6,FLocItem *param_7,bool param_8)

{
  FLocItem *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TSharedPtr<FArchiveEntry,1> local_78;
  TSharedPtr<FArchiveEntry,1> local_68;
  TSharedPtr<FLocMetadataObject,1> local_58;
  TSharedPtr<FLocMetadataObject,1> local_48;
  FLocItem local_38;
  
  FLocItem::operator=(param_7,param_6);
  local_58.Object = param_4->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (param_4->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FindTranslationImpl(this,&local_68,param_1,param_2,param_3,&local_58);
  if (local_68.Object == (FArchiveEntry *)0x0) goto LAB_146b76f6d;
  if ((local_68.Object == (FArchiveEntry *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((local_68.Object)->Translation).Text.Data.ArrayNum < 2) goto LAB_146b76f6d;
  if (param_8) {
    FLocItem::operator=(param_7,&(local_68.Object)->Translation);
    goto LAB_146b76f6d;
  }
  FLocItem::FLocItem(&local_38,param_6);
  if ((param_5 == NativeText) && (iVar4 = (this->NativeCulture).Data.ArrayNum, 1 < iVar4)) {
    iVar1 = (param_1->Data).ArrayNum;
    if (iVar1 == iVar4) {
      if (iVar1 < 2) goto LAB_146b76ed6;
      iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)(this->NativeCulture).Data.AllocatorInstance.Data);
      bVar3 = iVar4 == 0;
    }
    else {
      bVar3 = iVar1 + iVar4 == 1;
    }
    if (!bVar3) {
      local_48.Object = param_4->Object;
      local_48.SharedReferenceCount.ReferenceController =
           (param_4->SharedReferenceCount).ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FindTranslationImpl(this,&local_78,&this->NativeCulture,param_2,param_3,&local_48);
      if (local_78.Object != (FArchiveEntry *)0x0) {
        if ((local_78.Object == (FArchiveEntry *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = &(local_78.Object)->Source;
        if ((local_78.Object == (FArchiveEntry *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar3 = FLocItem::IsExactMatch(this_00,&(local_78.Object)->Translation);
        if (!bVar3) {
          if ((local_78.Object == (FArchiveEntry *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FLocItem::operator=(&local_38,&(local_78.Object)->Translation);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
    }
  }
LAB_146b76ed6:
  if ((local_68.Object == (FArchiveEntry *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = FLocItem::IsExactMatch(&(local_68.Object)->Source,&local_38);
  if (bVar3) {
    if ((local_68.Object == (FArchiveEntry *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FLocItem::operator=(param_7,&(local_68.Object)->Translation);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.MetadataObj.SharedReferenceCount.ReferenceController);
  if (local_38.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Text.Data.AllocatorInstance.Data);
  }
LAB_146b76f6d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return;
}

// GetTargetName @ 146b76fb0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

FString * __thiscall FLocTextHelper::GetTargetName(FLocTextHelper *this)

{
  return &this->TargetName;
}

// GetTargetPath @ 146b76fc0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

FString * __thiscall FLocTextHelper::GetTargetPath(FLocTextHelper *this)

{
  return &this->TargetPath;
}

// GetWordCountReport @ 146b77170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FLocTextWordCounts * __thiscall
FLocTextHelper::GetWordCountReport
          (FLocTextHelper *this,FLocTextWordCounts *__return_storage_ptr__,FDateTime *param_1,
          wchar_t *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  FString *pFVar7;
  FLocTextWordCounts *pFVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  undefined1 auStackY_248 [32];
  ForAnyElementType local_208;
  int local_200 [2];
  undefined1 local_1f8 [4];
  undefined1 local_1f4 [12];
  wchar_t *local_1e8;
  undefined4 local_1e0 [2];
  TSharedRef<IBreakIterator,1> *local_1d8;
  FString local_1d0;
  TLogFieldName<char_const_(&)[3]> local_1c0;
  FScriptContainerElement *local_1b8;
  TLogFieldName<char_const_(&)[12]> local_1b0;
  TLogFieldName<char_const_(&)[7]> local_1a8;
  TLogFieldName<char_const_(&)[3]> local_1a0;
  TLogFieldName<char_const_(&)[7]> local_198;
  FLocTextWordCounts *local_190;
  FText local_188;
  FString local_178;
  code *local_168;
  undefined8 **local_160;
  FScriptContainerElement *local_158;
  undefined4 *local_150;
  code *local_148;
  FLocTextHelper **local_140;
  TSharedRef<IBreakIterator,1> local_138;
  undefined8 *local_128;
  TSparseArray<TSparseSetElement<FLocKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_120;
  TSharedRef<IBreakIterator,1> **local_118;
  FLocTextHelper *local_110;
  FScriptContainerElement *local_108;
  longlong local_100;
  TSparseArray<TSparseSetElement<FLocKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_f8;
  TSharedRef<IBreakIterator,1> **local_f0;
  TSparseArray<TSparseSetElement<FLocKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_e8;
  void *local_a8;
  undefined4 local_a0;
  TSparseArray<TSparseSetElement<FLocKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pFVar11 = (FScriptContainerElement *)0x0;
  local_1f4._0_4_ = 0;
  (__return_storage_ptr__->Rows).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Rows).ArrayNum = 0;
  (__return_storage_ptr__->Rows).ArrayMax = 0;
  local_1e8 = param_2;
  local_190 = __return_storage_ptr__;
  FBreakIterator::CreateLineBreakIterator(&local_138);
  local_1d8 = &local_138;
  pFVar10 = pFVar11;
  if (local_1e8 == (wchar_t *)0x0) {
LAB_146b771ff:
    bVar3 = false;
  }
  else {
    ::FString::FString(&local_178,local_1e8);
    pFVar10 = (FScriptContainerElement *)&DAT_00000001;
    bVar3 = FPaths::FileExists(&local_178);
    if (!bVar3) goto LAB_146b771ff;
    bVar3 = true;
  }
  if ((pFVar10 != (FScriptContainerElement *)0x0) &&
     (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    local_1d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d0.Data.ArrayNum = 0;
    local_1d0.Data.ArrayMax = 0;
    bVar3 = FFileHelper::LoadFileToString(&local_1d0,local_1e8,None,0);
    if (bVar3) {
      FText::FText(&local_188);
      bVar3 = FLocTextWordCounts::FromCSV(__return_storage_ptr__,&local_1d0,&local_188);
      if ((!bVar3) && (2 < (byte)LogLocTextHelper._0_1_)) {
        local_1c0.Name = (char (*) [3])&s_id;
        pFVar7 = FText::ToString(&local_188);
        if ((pFVar7->Data).ArrayNum == 0) {
          local_1b8 = (FScriptContainerElement *)0x15060d16c;
        }
        else {
          local_1b8 = (pFVar7->Data).AllocatorInstance.Data;
        }
        local_1b0.Name = (char (*) [12])0x151400b50;
        local_1a8.Name = (char (*) [7])0x151400b5c;
        UE::Logging::Private::
        LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[7]>,wchar_t_const_*_&,UE::Logging::Private::TLogFieldName<char_const_(&)[12]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
                  ((FLogCategoryBase *)&LogLocTextHelper,&::LOG_Static,&local_1a8,&local_1e8,
                   &local_1b0,(wchar_t **)&local_1b8,&local_1c0,
                   &LocTextHelper::LocalizationLogIdentifier);
      }
      if (local_188.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
      }
    }
    else if (2 < (byte)LogLocTextHelper._0_1_) {
      local_1a0.Name = (char (*) [3])&s_id;
      local_198.Name = (char (*) [7])0x151400b5c;
      UE::Logging::Private::
      LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[7]>,wchar_t_const_*_&,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
                ((FLogCategoryBase *)&LogLocTextHelper,&::LOG_Static,&local_198,&local_1e8,
                 &local_1a0,&LocTextHelper::LocalizationLogIdentifier);
    }
    if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
    }
  }
  iVar6 = (__return_storage_ptr__->Rows).ArrayNum;
  local_1f4._4_8_ = (FScriptContainerElement *)0x0;
  if (0 < iVar6) {
    iVar9 = iVar6 + -1;
    if ((iVar9 < 0) || (iVar6 <= iVar9)) {
LAB_146b773d5:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LastRowData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                         ,0x553,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar8 = (FLocTextWordCounts *)(*pcVar1)();
        return pFVar8;
      }
    }
    else {
      if ((iVar9 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        pFVar8 = (FLocTextWordCounts *)(*pcVar1)();
        return pFVar8;
      }
      pFVar11 = (__return_storage_ptr__->Rows).AllocatorInstance.Data + (longlong)iVar9 * 0x60;
      if (pFVar11 == (FScriptContainerElement *)0x0) goto LAB_146b773d5;
    }
    if (*(longlong *)pFVar11 == param_1->Ticks) {
      *(undefined4 *)(pFVar11 + 8) = 0;
      local_1f4._4_8_ = pFVar11;
      TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
      Reset((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
             *)(pFVar11 + 0x10));
    }
    if ((FScriptContainerElement *)local_1f4._4_8_ != (FScriptContainerElement *)0x0)
    goto LAB_146b774b8;
  }
  uVar4 = (__return_storage_ptr__->Rows).ArrayNum;
  if (uVar4 == (__return_storage_ptr__->Rows).ArrayMax) {
    uVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x860,(ForAnyElementType *)__return_storage_ptr__,
                       &(__return_storage_ptr__->Rows).ArrayMax);
  }
  (__return_storage_ptr__->Rows).ArrayNum = uVar4 + 1;
  DefaultConstructItems<FLocTextWordCounts::FRowData,int>
            ((__return_storage_ptr__->Rows).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x60,1);
  uVar5 = 0;
  if ((int)uVar4 < (__return_storage_ptr__->Rows).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar8 = (FLocTextWordCounts *)(*pcVar1)();
    return pFVar8;
  }
  local_1f4._4_8_ =
       (__return_storage_ptr__->Rows).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x60;
  *(long64 *)local_1f4._4_8_ = param_1->Ticks;
LAB_146b774b8:
  local_128 = (undefined8 *)(local_1f4 + 4);
  local_e8._0_8_ = 0;
  local_120 = &local_e8;
  local_e8._8_8_ = 0;
  local_118 = &local_1d8;
  local_e8._32_8_ = 0;
  local_160 = &local_128;
  local_e8._40_4_ = 0;
  local_168 = UE::Core::Private::Function::
              TFunctionRefCaller<`FLocTextHelper::GetWordCountReport'::__l58::<lambda_2>,bool,TSharedRef<FManifestEntry,1>_>
              ::Call;
  local_e8._44_4_ = 0x80;
  local_e8._48_4_ = 0xffffffff;
  local_e8._52_4_ = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  EnumerateSourceTexts
            (this,(TFunctionRef<bool___cdecl(TSharedRef<FManifestEntry,1>)> *)&local_168,true);
  local_a0 = 0;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  TSparseArray<TSparseSetElement<FLocKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FLocKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_e8);
  local_208.Data = (FScriptContainerElement *)0x0;
  local_200[0] = 0;
  local_200[1] = 0;
  if (1 < (this->NativeCulture).Data.ArrayNum) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_208,local_200 + 1);
    local_200[0] = iVar6 + 1;
    ::FString::FString((FString *)(local_208.Data + (longlong)iVar6 * 0x10),&this->NativeCulture);
  }
  if (((TArray<FString,TSizedDefaultAllocator<32>_> *)&local_208 == &this->ForeignCultures) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar8 = (FLocTextWordCounts *)(*pcVar1)();
    return pFVar8;
  }
  iVar6 = (this->ForeignCultures).ArrayNum;
  if (iVar6 != 0) {
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar6,&local_208,local_200,local_200 + 1);
    ConstructItems<FString,FString,int>
              (local_208.Data + (longlong)iVar9 * 0x10,
               (FString *)(this->ForeignCultures).AllocatorInstance.Data,iVar6);
  }
  iVar6 = local_200[0];
  pFVar10 = local_208.Data + (longlong)local_200[0] * 0x10;
  FVar12.Data = local_208.Data;
  while( true ) {
    if (local_200[0] != iVar6) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1f8);
    }
    uVar2 = local_1f4._4_8_;
    if (FVar12.Data == pFVar10) break;
    local_150 = local_1e0;
    local_1e0[0] = 0;
    local_158 = FVar12.Data;
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FString_const_&,int_&&>_>
              ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                *)(local_1f4._4_8_ + 0x10),(TPairInitializer<FString_const_&,int_&&> *)local_1f4,
               (bool *)&local_158);
    local_f8 = &local_98;
    local_100 = *(longlong *)(uVar2 + 0x10) + (longlong)(int)local_1f4._0_4_ * 0x20 + 0x10;
    local_98._0_8_ = 0;
    local_f0 = &local_1d8;
    local_140 = &local_110;
    local_98._8_8_ = 0;
    local_98._32_8_ = 0;
    local_98._40_4_ = 0;
    local_98._44_4_ = 0x80;
    local_98._48_4_ = 0xffffffff;
    local_98._52_4_ = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_148 = UE::Core::Private::Function::
                TFunctionRefCaller<`FLocTextHelper::GetWordCountReport'::__l62::<lambda_3>,bool,TSharedRef<FManifestEntry,1>_>
                ::Call;
    local_110 = this;
    local_108 = FVar12.Data;
    EnumerateSourceTexts
              (this,(TFunctionRef<bool___cdecl(TSharedRef<FManifestEntry,1>)> *)&local_148,true);
    local_50 = 0;
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    TSparseArray<TSparseSetElement<FLocKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FLocKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98);
    FVar12.Data = FVar12.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)local_208.Data,local_200[0]);
  pFVar8 = local_190;
  if (local_208.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.SharedReferenceCount.ReferenceController);
  return pFVar8;
}

// HasArchive @ 146b77860

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall FLocTextHelper::HasArchive(FLocTextHelper *this,FString *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *pTVar2;
  longlong lVar3;
  
  pTVar2 = TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
                   *)&this->Archives,param_1);
  if (pTVar2 == (TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *)0x0) {
    lVar3 = 0;
  }
  else {
    pTVar1 = *(TReferenceControllerBase<1> **)&pTVar2->field_0x18;
    lVar3 = *(longlong *)&pTVar2->field_0x10;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return lVar3 != 0;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return lVar3 != 0;
}

// HasForeignArchive @ 146b778e0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall FLocTextHelper::HasForeignArchive(FLocTextHelper *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong lVar6;
  
  bVar2 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                    (&this->ForeignCultures,param_1);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ForeignCultures.Contains(InCulture)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                         ,0x2c9,
                         L"Attempted to check for a foreign culture archive file, but the given culture (%s) wasn\'t set during construction!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  pTVar4 = TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
                   *)&this->Archives,param_1);
  if (pTVar4 == (TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    lVar6 = 0;
  }
  else {
    pTVar5 = *(TReferenceControllerBase<1> **)&pTVar4->field_0x18;
    lVar6 = *(longlong *)&pTVar4->field_0x10;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return lVar6 != 0;
}

// HasManifest @ 146b77990

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall FLocTextHelper::HasManifest(FLocTextHelper *this)

{
  return (this->Manifest).Object != (FInternationalizationManifest *)0x0;
}

// HasNativeArchive @ 146b779b0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall FLocTextHelper::HasNativeArchive(FLocTextHelper *this)

{
  TReferenceControllerBase<1> *pTVar1;
  TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *pTVar2;
  longlong lVar3;
  
  pTVar2 = TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
                   *)&this->Archives,&this->NativeCulture);
  if (pTVar2 == (TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *)0x0) {
    lVar3 = 0;
  }
  else {
    pTVar1 = *(TReferenceControllerBase<1> **)&pTVar2->field_0x18;
    lVar3 = *(longlong *)&pTVar2->field_0x10;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return lVar3 != 0;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return lVar3 != 0;
}

// ImportTranslation @ 146b7a2c0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall
FLocTextHelper::ImportTranslation
          (FLocTextHelper *this,FString *param_1,FLocKey *param_2,FLocKey *param_3,
          TSharedPtr<FLocMetadataObject,1> *param_4,FLocItem *param_5,FLocItem *param_6,bool param_7
          )

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *pTVar4;
  FInternationalizationArchive *this_00;
  FInternationalizationArchive *pFVar5;
  TSharedPtr<FLocMetadataObject,1> local_38;
  TSharedPtr<FLocMetadataObject,1> local_28;
  
  pTVar4 = TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
                   *)&this->Archives,param_1);
  if (pTVar4 == (TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *)0x0) {
    this_00 = (FInternationalizationArchive *)0x0;
    pFVar5 = this_00;
  }
  else {
    pFVar5 = *(FInternationalizationArchive **)&pTVar4->field_0x18;
    this_00 = *(FInternationalizationArchive **)&pTVar4->field_0x10;
    if (pFVar5 != (FInternationalizationArchive *)0x0) {
      LOCK();
      *(int *)&pFVar5->EntriesBySourceText = *(int *)&pFVar5->EntriesBySourceText + 1;
      UNLOCK();
    }
    if (this_00 != (FInternationalizationArchive *)0x0) goto LAB_146b7a376;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Archive.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                     ,0x471,
                     L"Attempted to update a translation, but no valid archive could be found for \'%s\'!"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((this_00 == (FInternationalizationArchive *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
LAB_146b7a376:
  local_38.Object = param_4->Object;
  local_38.SharedReferenceCount.ReferenceController =
       (param_4->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar2 = FInternationalizationArchive::SetTranslation
                    (this_00,param_2,param_3,param_5,param_6,&local_38);
  if (bVar2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->SharedReferenceCount).ReferenceController);
    bVar2 = true;
  }
  else {
    if ((this_00 == (FInternationalizationArchive *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    local_28.Object = param_4->Object;
    local_28.SharedReferenceCount.ReferenceController =
         (param_4->SharedReferenceCount).ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar2 = FInternationalizationArchive::AddEntry
                      (this_00,param_2,param_3,param_5,param_6,&local_28,param_7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->SharedReferenceCount).ReferenceController);
  }
  return bVar2;
}

// LoadAll @ 146b7d3e0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall
FLocTextHelper::LoadAll(FLocTextHelper *this,ELocTextHelperLoadFlags param_1,FText *param_2)

{
  TSharedPtr<FInternationalizationManifest,1> *pTVar1;
  int iVar2;
  FInternationalizationManifest *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  TSharedPtr<FInternationalizationManifest,1> *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  TSharedPtr<FInternationalizationManifest,1> local_58;
  FString local_48;
  TSharedPtr<FInternationalizationManifest,1> local_38;
  
  ::operator/(&local_48,&this->TargetPath,&this->ManifestName);
  pTVar1 = &this->Manifest;
  local_58.Object = (FInternationalizationManifest *)0x0;
  local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != &local_58) {
    pTVar1->Object = (FInternationalizationManifest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Manifest).SharedReferenceCount,&local_58.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  pTVar7 = LoadManifestImpl(this,&local_38,&local_48,param_1,param_2);
  if (pTVar1 != pTVar7) {
    pTVar1->Object = pTVar7->Object;
    pTVar7->Object = (FInternationalizationManifest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Manifest).SharedReferenceCount,&pTVar7->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  pFVar3 = pTVar1->Object;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((pFVar3 != (FInternationalizationManifest *)0x0) &&
     (((this->NativeCulture).Data.ArrayNum < 2 ||
      (bVar5 = LoadArchive(this,&this->NativeCulture,param_1,param_2), bVar5)))) {
    pFVar8 = (this->ForeignCultures).AllocatorInstance.Data;
    iVar2 = (this->ForeignCultures).ArrayNum;
    pFVar9 = pFVar8 + (longlong)iVar2 * 0x10;
    while( true ) {
      if ((this->ForeignCultures).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar8 == pFVar9) break;
      bVar5 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                        (&this->ForeignCultures,(FString *)pFVar8);
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ForeignCultures.Contains(InCulture)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                             ,0x2cf,
                             L"Attempted to load a foreign culture archive file, but the given culture (%s) wasn\'t set during construction!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      bVar5 = LoadArchive(this,(FString *)pFVar8,param_1,param_2);
      if (!bVar5) {
        return false;
      }
      pFVar8 = pFVar8 + 0x10;
    }
    return true;
  }
  return false;
}

// LoadAllArchives @ 146b7d5a0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall
FLocTextHelper::LoadAllArchives(FLocTextHelper *this,ELocTextHelperLoadFlags param_1,FText *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  if (((this->NativeCulture).Data.ArrayNum < 2) ||
     (bVar3 = LoadArchive(this,&this->NativeCulture,param_1,param_2), bVar3)) {
    iVar1 = (this->ForeignCultures).ArrayNum;
    pFVar5 = (this->ForeignCultures).AllocatorInstance.Data;
    pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->ForeignCultures).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar5 == pFVar6) {
        return true;
      }
      bVar3 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                        (&this->ForeignCultures,(FString *)pFVar5);
      if ((!bVar3) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ForeignCultures.Contains(InCulture)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                             ,0x2cf,
                             L"Attempted to load a foreign culture archive file, but the given culture (%s) wasn\'t set during construction!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      bVar3 = LoadArchive(this,(FString *)pFVar5,param_1,param_2);
      if (!bVar3) break;
      pFVar5 = pFVar5 + 0x10;
    }
  }
  return false;
}

// LoadArchive @ 146b7d6a0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall
FLocTextHelper::LoadArchive
          (FLocTextHelper *this,FString *param_1,FString *param_2,ELocTextHelperLoadFlags param_3,
          FText *param_4)

{
  int iVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  wchar_t *pwVar6;
  bool bVar7;
  TSharedPtr<FInternationalizationArchive,1> local_38;
  FString *local_28;
  TSharedPtr<FInternationalizationArchive,1> *local_20;
  
  pwVar6 = L"";
  iVar4 = (this->NativeCulture).Data.ArrayNum;
  if (iVar4 < 2) {
LAB_146b7d70a:
    bVar7 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                      (&this->ForeignCultures,param_1);
    if ((!bVar7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsNativeArchive || bIsForeignArchive",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                           ,0x2f5,
                           L"Attempted to load a culture archive file, but the given culture (%s) wasn\'t set during construction!"
                          ), bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar3 = (*pcVar2)();
      return (bool)uVar3;
    }
  }
  else {
    iVar1 = (param_1->Data).ArrayNum;
    if (iVar1 == iVar4) {
      if (1 < iVar1) {
        iVar4 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                           (wchar_t *)(this->NativeCulture).Data.AllocatorInstance.Data);
        bVar7 = iVar4 == 0;
        goto LAB_146b7d6f5;
      }
    }
    else {
      bVar7 = iVar1 + iVar4 == 1;
LAB_146b7d6f5:
      if (!bVar7) goto LAB_146b7d70a;
    }
    TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>(&this->ForeignCultures,param_1);
  }
  if (((this->Manifest).Object == (FInternationalizationManifest *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Manifest.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                         ,0x2f6,
                         L"Attempted to load a culture archive file, but no manifest has been loaded!"
                        ), bVar7)) {
    pcVar2 = (code *)swi(3);
    uVar3 = (*pcVar2)();
    return (bool)uVar3;
  }
  if (*(int *)&(this->Archives).field_0x8 != *(int *)&(this->Archives).field_0x34) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar6);
    TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FString>
              ((TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
                *)&this->Archives,uVar5,param_1);
  }
  LoadArchiveImpl(this,&local_38,param_2,param_3,param_4);
  if (local_38.Object != (FInternationalizationArchive *)0x0) {
    local_20 = &local_38;
    local_28 = param_1;
    TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,TSharedPtr<FInternationalizationArchive,1>_const_&>_>
              ((TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
                *)&this->Archives,
               (TPairInitializer<FString_const_&,TSharedPtr<FInternationalizationArchive,1>_const_&>
                *)&stack0x00000008,(bool *)&local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return local_38.Object != (FInternationalizationArchive *)0x0;
}

// LoadArchive @ 146b7d850

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall
FLocTextHelper::LoadArchive
          (FLocTextHelper *this,FString *param_1,ELocTextHelperLoadFlags param_2,FText *param_3)

{
  bool bVar1;
  int iVar2;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  pTVar3 = &::operator/(&local_18,&this->TargetPath,param_1)->Data;
  iVar2 = (this->ArchiveName).Data.ArrayNum;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  if ((pTVar3->ArrayNum != 0) || (iVar2 = 2, iVar4 == -1)) {
    iVar2 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_28,pTVar3,iVar4 + iVar2);
  ::FString::PathAppend
            ((FString *)&local_28,(wchar_t *)(this->ArchiveName).Data.AllocatorInstance.Data,iVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  bVar1 = LoadArchive(this,param_1,(FString *)&local_28,param_2,param_3);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return bVar1;
}

// LoadArchiveImpl @ 146b7d930

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSharedPtr<FInternationalizationArchive,1> * __thiscall
FLocTextHelper::LoadArchiveImpl
          (FLocTextHelper *this,TSharedPtr<FInternationalizationArchive,1> *__return_storage_ptr__,
          FString *param_1,ELocTextHelperLoadFlags param_2,FText *param_3)

{
  bool bVar1;
  int iVar2;
  FString *pFVar3;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar4;
  IFileManager *pIVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  ForAnyElementType FVar9;
  int iVar10;
  char local_res20 [8];
  TSharedRef<FInternationalizationArchive,1> local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  char *local_88;
  FLocTextHelper **local_80;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_78;
  FText local_68;
  FString local_58;
  FText local_48;
  FLocTextHelper *local_38;
  TSharedRef<FInternationalizationArchive,1> *local_30;
  FText **local_28;
  
  MakeShared<FInternationalizationArchive,1>(&local_b8);
  local_30 = &local_b8;
  local_28 = &param_3;
  local_38 = this;
  if (((param_2 & Load) == 0) || (bVar1 = FPaths::FileExists(param_1), !bVar1)) {
    if ((param_2 & Create) == 0) {
      if (param_3 != (FText *)0x0) {
        if ((param_2 & Load) == 0) {
          pFVar6 = FText::AsLocalizable_Advanced_LocText
                             ((FText *)local_98,L"LocTextHelper",
                              L"Error_LoadManifest_CallerDidNotSpecifyLoadOrCreate",
                              L"Caller did not specify either Load or Create.");
          FText::operator=(param_3,pFVar6);
          local_68.TextData.Reference = (ITextData *)local_98._0_8_;
        }
        else {
          pFVar6 = FText::FromString(&local_48,param_1);
          pFVar7 = FText::AsLocalizable_Advanced_LocText
                             (&local_68,L"LocTextHelper",L"Error_LoadArchive_MissingArchive",
                              L"Archive \'{0}\' does not exist.");
          pFVar8 = FTextFormat::FTextFormat((FTextFormat *)local_a8,pFVar7,Default);
          pFVar6 = FText::Format<FText>((FText *)local_98,pFVar8,pFVar6);
          FText::operator=(param_3,pFVar6);
          if ((FText *)local_98._0_8_ != (FText *)0x0) {
            (**(code **)(*(longlong *)local_98._0_8_ + 0x10))();
          }
        }
        if ((FText *)local_68.TextData.Reference != (FText *)0x0) {
          (*(code *)(((FText *)local_68.TextData.Reference)->TextData).Reference[2])();
        }
      }
      __return_storage_ptr__->Object = (FInternationalizationArchive *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      goto LAB_146b7dbcf;
    }
  }
  else {
    local_res20[0] =
         `FLocTextHelper::LoadArchiveImpl'::__l2::<lambda_1>::operator()(&local_38,param_1);
    FPaths::GetPath(&local_58,param_1);
    FPaths::GetCleanFilename((FString *)&local_68,param_1);
    FPaths::GetCleanFilename((FString *)&local_48,&local_58);
    pFVar3 = FPaths::GetPlatformLocalizationFolderName((FString *)local_98);
    pTVar4 = &FPaths::GetPath((FString *)local_a8,&local_58)->Data;
    iVar2 = (pFVar3->Data).ArrayNum;
    iVar10 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar10 = 0;
    }
    if ((pTVar4->ArrayNum != 0) || (iVar2 = 2, iVar10 == -1)) {
      iVar2 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_78,pTVar4,iVar10 + iVar2);
    ::FString::PathAppend
              ((FString *)&local_78,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar10);
    if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
    if ((FText *)local_98._0_8_ != (FText *)0x0) {
      FMemory::Free((void *)local_98._0_8_);
    }
    pIVar5 = IFileManager::Get();
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_78.ArrayNum != 0) {
      FVar9.Data = local_78.AllocatorInstance.Data;
    }
    local_98._0_8_ = &local_48;
    local_98._8_8_ = &local_68;
    local_88 = local_res20;
    local_80 = &local_38;
    local_a8._8_8_ = local_98;
    local_a8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FLocTextHelper::LoadArchiveImpl'::__l9::<lambda_2>,bool,wchar_t_const_*,bool>
         ::Call;
    (**(code **)((longlong)*pIVar5 + 0x90))(pIVar5,FVar9.Data,local_a8);
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_48.TextData.Reference);
    }
    if ((FText *)local_68.TextData.Reference != (FText *)0x0) {
      FMemory::Free(local_68.TextData.Reference);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_res20[0] == '\0') {
      __return_storage_ptr__->Object = (FInternationalizationArchive *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      goto LAB_146b7dbcf;
    }
  }
  __return_storage_ptr__->Object = local_b8.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_b8.SharedReferenceCount.ReferenceController;
  if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
LAB_146b7dbcf:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// LoadForeignArchive @ 146b7dc00

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall
FLocTextHelper::LoadForeignArchive
          (FLocTextHelper *this,FString *param_1,FString *param_2,ELocTextHelperLoadFlags param_3,
          FText *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                    (&this->ForeignCultures,param_1);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ForeignCultures.Contains(InCulture)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                         ,0x2d5,
                         L"Attempted to load a foreign culture archive file, but the given culture (%s) wasn\'t set during construction!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = LoadArchive(this,param_1,param_2,param_3,param_4);
  return bVar2;
}

// LoadForeignArchive @ 146b7dca0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall
FLocTextHelper::LoadForeignArchive
          (FLocTextHelper *this,FString *param_1,ELocTextHelperLoadFlags param_2,FText *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                    (&this->ForeignCultures,param_1);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ForeignCultures.Contains(InCulture)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                         ,0x2cf,
                         L"Attempted to load a foreign culture archive file, but the given culture (%s) wasn\'t set during construction!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = LoadArchive(this,param_1,param_2,param_3);
  return bVar2;
}

// LoadManifest @ 146b7e9b0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall
FLocTextHelper::LoadManifest
          (FLocTextHelper *this,FString *param_1,ELocTextHelperLoadFlags param_2,FText *param_3)

{
  TSharedPtr<FInternationalizationManifest,1> *pTVar1;
  TSharedPtr<FInternationalizationManifest,1> *pTVar2;
  TSharedPtr<FInternationalizationManifest,1> local_28;
  TSharedPtr<FInternationalizationManifest,1> local_18;
  
  pTVar1 = &this->Manifest;
  local_28.Object = (FInternationalizationManifest *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != &local_28) {
    pTVar1->Object = (FInternationalizationManifest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Manifest).SharedReferenceCount,&local_28.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  pTVar2 = LoadManifestImpl(this,&local_18,param_1,param_2,param_3);
  if (pTVar1 != pTVar2) {
    pTVar1->Object = pTVar2->Object;
    pTVar2->Object = (FInternationalizationManifest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Manifest).SharedReferenceCount,&pTVar2->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return pTVar1->Object != (FInternationalizationManifest *)0x0;
}

// LoadManifest @ 146b7ea80

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall
FLocTextHelper::LoadManifest(FLocTextHelper *this,ELocTextHelperLoadFlags param_1,FText *param_2)

{
  TSharedPtr<FInternationalizationManifest,1> *pTVar1;
  FInternationalizationManifest *pFVar2;
  TSharedPtr<FInternationalizationManifest,1> *pTVar3;
  TSharedPtr<FInternationalizationManifest,1> local_38;
  FString local_28;
  TSharedPtr<FInternationalizationManifest,1> local_18;
  
  ::operator/(&local_28,&this->TargetPath,&this->ManifestName);
  pTVar1 = &this->Manifest;
  local_38.Object = (FInternationalizationManifest *)0x0;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != &local_38) {
    pTVar1->Object = (FInternationalizationManifest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Manifest).SharedReferenceCount,&local_38.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  pTVar3 = LoadManifestImpl(this,&local_18,&local_28,param_1,param_2);
  if (pTVar1 != pTVar3) {
    pTVar1->Object = pTVar3->Object;
    pTVar3->Object = (FInternationalizationManifest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Manifest).SharedReferenceCount,&pTVar3->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  pFVar2 = pTVar1->Object;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return pFVar2 != (FInternationalizationManifest *)0x0;
}

// LoadManifestImpl @ 146b7eb70

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TSharedPtr<FInternationalizationManifest,1> * __thiscall
FLocTextHelper::LoadManifestImpl
          (FLocTextHelper *this,TSharedPtr<FInternationalizationManifest,1> *__return_storage_ptr__,
          FString *param_1,ELocTextHelperLoadFlags param_2,FText *param_3)

{
  bool bVar1;
  int iVar2;
  FString *pFVar3;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar4;
  IFileManager *pIVar5;
  FText *pFVar6;
  FText *pFVar7;
  FTextFormat *pFVar8;
  ForAnyElementType FVar9;
  int iVar10;
  char local_res20 [8];
  TSharedRef<FInternationalizationManifest,1> local_98;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_88;
  undefined1 local_78 [16];
  FText local_68;
  undefined1 local_58 [16];
  FLocTextHelper **local_48;
  FLocTextHelper *local_40;
  TSharedRef<FInternationalizationManifest,1> *local_38;
  FText **local_30;
  
  MakeShared<FInternationalizationManifest,1>(&local_98);
  local_38 = &local_98;
  local_30 = &param_3;
  local_40 = this;
  if (((param_2 & Load) == 0) || (bVar1 = FPaths::FileExists(param_1), !bVar1)) {
    if ((param_2 & Create) == 0) {
      if (param_3 != (FText *)0x0) {
        if ((param_2 & Load) == 0) {
          pFVar6 = FText::AsLocalizable_Advanced_LocText
                             ((FText *)local_58,L"LocTextHelper",
                              L"Error_LoadManifest_CallerDidNotSpecifyLoadOrCreate",
                              L"Caller did not specify either Load or Create.");
          FText::operator=(param_3,pFVar6);
          local_68.TextData.Reference = (ITextData *)local_58._0_8_;
        }
        else {
          pFVar6 = FText::FromString((FText *)local_78,param_1);
          pFVar7 = FText::AsLocalizable_Advanced_LocText
                             (&local_68,L"LocTextHelper",L"Error_LoadManifest_MissingManifest",
                              L"Manifest \'{0}\' does not exist.");
          pFVar8 = FTextFormat::FTextFormat((FTextFormat *)&local_88,pFVar7,Default);
          pFVar6 = FText::Format<FText>((FText *)local_58,pFVar8,pFVar6);
          FText::operator=(param_3,pFVar6);
          if ((FText *)local_58._0_8_ != (FText *)0x0) {
            (**(code **)(*(longlong *)local_58._0_8_ + 0x10))();
          }
        }
        if ((FText *)local_68.TextData.Reference != (FText *)0x0) {
          (*(code *)(((FText *)local_68.TextData.Reference)->TextData).Reference[2])();
        }
      }
      __return_storage_ptr__->Object = (FInternationalizationManifest *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      goto LAB_146b7ede1;
    }
  }
  else {
    local_res20[0] =
         `FLocTextHelper::LoadManifestImpl'::__l2::<lambda_1>::operator()
                   (&local_40,param_1,(FName)0x0);
    FPaths::GetCleanFilename((FString *)&local_68,param_1);
    pFVar3 = FPaths::GetPlatformLocalizationFolderName((FString *)local_58);
    pTVar4 = &FPaths::GetPath((FString *)local_78,param_1)->Data;
    iVar2 = (pFVar3->Data).ArrayNum;
    iVar10 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar10 = 0;
    }
    if ((pTVar4->ArrayNum != 0) || (iVar2 = 2, iVar10 == -1)) {
      iVar2 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_88,pTVar4,iVar10 + iVar2);
    ::FString::PathAppend
              ((FString *)&local_88,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,iVar10);
    if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_78._0_8_);
    }
    if ((FText *)local_58._0_8_ != (FText *)0x0) {
      FMemory::Free((void *)local_58._0_8_);
    }
    pIVar5 = IFileManager::Get();
    FVar9.Data = (FScriptContainerElement *)L"";
    if (local_88.ArrayNum != 0) {
      FVar9.Data = local_88.AllocatorInstance.Data;
    }
    local_58._0_8_ = &local_68;
    local_58._8_8_ = local_res20;
    local_48 = &local_40;
    local_78._8_8_ = local_58;
    local_78._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FLocTextHelper::LoadManifestImpl'::__l9::<lambda_2>,bool,wchar_t_const_*,bool>
         ::Call;
    (**(code **)((longlong)*pIVar5 + 0x90))(pIVar5,FVar9.Data,local_78);
    if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.AllocatorInstance.Data);
    }
    if ((FText *)local_68.TextData.Reference != (FText *)0x0) {
      FMemory::Free(local_68.TextData.Reference);
    }
    if (local_res20[0] == '\0') {
      __return_storage_ptr__->Object = (FInternationalizationManifest *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      goto LAB_146b7ede1;
    }
  }
  __return_storage_ptr__->Object = local_98.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       local_98.SharedReferenceCount.ReferenceController;
  if (local_98.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_98.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
LAB_146b7ede1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_98.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// LoadNativeArchive @ 146b7ee00

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall
FLocTextHelper::LoadNativeArchive
          (FLocTextHelper *this,FString *param_1,ELocTextHelperLoadFlags param_2,FText *param_3)

{
  bool bVar1;
  
  bVar1 = LoadArchive(this,&this->NativeCulture,param_1,param_2,param_3);
  return bVar1;
}

// LoadNativeArchive @ 146b7ee30

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall
FLocTextHelper::LoadNativeArchive
          (FLocTextHelper *this,ELocTextHelperLoadFlags param_1,FText *param_2)

{
  bool bVar1;
  
  bVar1 = LoadArchive(this,&this->NativeCulture,param_1,param_2);
  return bVar1;
}

// SanitizeLogOutput @ 146b84f90

FString * __cdecl
FLocTextHelper::SanitizeLogOutput(FString *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t *pwVar7;
  ulonglong uVar8;
  wchar_t **ppwVar9;
  undefined1 local_res10 [8];
  
  if ((param_1->Data).ArrayNum < 2) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (param_1->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  ::FString::ReplaceCharWithEscapedCharInline
            (param_1,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
  if (GIsBuildMachine != false) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      `FLocTextHelper::SanitizeLogOutput'::__l2::<lambda_1>::operator()
                (local_res10,&ReplacementStrings);
      atexit(`FLocTextHelper::SanitizeLogOutput'::__l2::
             _dynamic_atexit_destructor_for__ReplacementStrings__);
      _Init_thread_footer(&::_TSS0);
    }
    if ((ReplacementStrings.ArrayNum != 0x1f) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(sizeof(UEArrayCountHelper(ErrorStrs)) - 1) == ReplacementStrings.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                           ,0x609,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    uVar6 = 0;
    ppwVar9 = ErrorStrs;
    uVar8 = uVar6;
    do {
      uVar5 = (uint)uVar6;
      uVar3 = 0;
      if ((int)uVar5 < ReplacementStrings.ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar1)();
        return pFVar4;
      }
      if (*(int *)(ReplacementStrings.AllocatorInstance.Data + uVar8 + 8) == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = *(wchar_t **)(ReplacementStrings.AllocatorInstance.Data + uVar8);
      }
      ::FString::ReplaceInline(param_1,*ppwVar9,pwVar7,IgnoreCase);
      uVar6 = (ulonglong)(uVar5 + 1);
      uVar8 = uVar8 + 0x10;
      ppwVar9 = ppwVar9 + 1;
    } while (uVar5 + 1 < 0x1f);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (param_1->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// SanitizeLogOutput @ 146b85180

FString * __cdecl
FLocTextHelper::SanitizeLogOutput(FString *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  uint uVar5;
  ulonglong uVar6;
  wchar_t **ppwVar7;
  ulonglong uVar8;
  wchar_t *pwVar9;
  undefined1 local_res8 [8];
  FString local_48;
  FString local_38;
  wchar_t *local_28;
  undefined8 uStack_20;
  
  local_28 = param_1->DataPtr;
  uStack_20 = *(undefined8 *)&param_1->Size;
  uVar6 = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pFVar4 = ::FString::ConstructFromPtrSize
                     (&local_38,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
  if (&local_48 != pFVar4) {
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    local_48.Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = (pFVar4->Data).ArrayNum;
    local_48.Data.ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (1 < local_48.Data.ArrayNum) {
    ::FString::ReplaceCharWithEscapedCharInline
              (&local_48,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
    if (GIsBuildMachine != false) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        `FLocTextHelper::SanitizeLogOutput'::__l2::<lambda_1>::operator()
                  (local_res8,&ReplacementStrings);
        atexit(`FLocTextHelper::SanitizeLogOutput'::__l2::
               _dynamic_atexit_destructor_for__ReplacementStrings__);
        _Init_thread_footer(&::_TSS0);
      }
      if ((ReplacementStrings.ArrayNum != 0x1f) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(sizeof(UEArrayCountHelper(ErrorStrs)) - 1) == ReplacementStrings.Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                             ,0x609,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FString *)(*pcVar1)();
        return pFVar4;
      }
      ppwVar7 = ErrorStrs;
      uVar8 = uVar6;
      do {
        uVar5 = (uint)uVar6;
        uVar3 = 0;
        if ((int)uVar5 < ReplacementStrings.ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FString *)(*pcVar1)();
          return pFVar4;
        }
        if (*(int *)(ReplacementStrings.AllocatorInstance.Data + uVar8 + 8) == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = *(wchar_t **)(ReplacementStrings.AllocatorInstance.Data + uVar8);
        }
        ::FString::ReplaceInline(&local_48,*ppwVar7,pwVar9,IgnoreCase);
        uVar6 = (ulonglong)(uVar5 + 1);
        uVar8 = uVar8 + 0x10;
        ppwVar7 = ppwVar7 + 1;
      } while (uVar5 + 1 < 0x1f);
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_48.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_48.Data.ArrayMax;
  return __return_storage_ptr__;
}

// SaveAll @ 146b853c0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall FLocTextHelper::SaveAll(FLocTextHelper *this,FText *param_1)

{
  int iVar1;
  FInternationalizationManifest *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  TSharedRef<FInternationalizationManifest_const_,1> local_78;
  FString local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FTextFormat local_28;
  
  ::operator/(&local_68,&this->TargetPath,&this->ManifestName);
  pFVar2 = (this->Manifest).Object;
  if (pFVar2 == (FInternationalizationManifest *)0x0) {
    if (param_1 != (FText *)0x0) {
      pFVar7 = FText::FromString(&local_38,&local_68);
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"LocTextHelper",L"Error_SaveManifest_NoManifest",
                          L"Failed to save file \'{0}\' as there is no manifest instance to save.");
      pFVar9 = FTextFormat::FTextFormat(&local_28,pFVar8,Default);
      pFVar7 = FText::Format<FText>(&local_58,pFVar9,pFVar7);
      FText::operator=(param_1,pFVar7);
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
    }
    bVar5 = false;
  }
  else {
    pTVar3 = (this->Manifest).SharedReferenceCount.ReferenceController;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_78.Object = pFVar2;
    local_78.SharedReferenceCount.ReferenceController = pTVar3;
    bVar5 = SaveManifestImpl(this,&local_78,&local_68,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((bVar5 != false) &&
     (((this->NativeCulture).Data.ArrayNum < 2 ||
      (bVar5 = SaveArchive(this,&this->NativeCulture,param_1), bVar5)))) {
    pFVar10 = (this->ForeignCultures).AllocatorInstance.Data;
    iVar1 = (this->ForeignCultures).ArrayNum;
    pFVar11 = pFVar10 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->ForeignCultures).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar10 == pFVar11) {
        return true;
      }
      bVar5 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                        (&this->ForeignCultures,(FString *)pFVar10);
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ForeignCultures.Contains(InCulture)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                             ,0x2db,
                             L"Attempted to load a foreign culture archive file, but the given culture (%s) wasn\'t set during construction!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      bVar5 = SaveArchive(this,(FString *)pFVar10,param_1);
      if (!bVar5) break;
      pFVar10 = pFVar10 + 0x10;
    }
  }
  return false;
}

// SaveAllArchives @ 146b855e0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall FLocTextHelper::SaveAllArchives(FLocTextHelper *this,FText *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  if (((this->NativeCulture).Data.ArrayNum < 2) ||
     (bVar3 = SaveArchive(this,&this->NativeCulture,param_1), bVar3)) {
    iVar1 = (this->ForeignCultures).ArrayNum;
    pFVar5 = (this->ForeignCultures).AllocatorInstance.Data;
    pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->ForeignCultures).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar5 == pFVar6) {
        return true;
      }
      bVar3 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                        (&this->ForeignCultures,(FString *)pFVar5);
      if ((!bVar3) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ForeignCultures.Contains(InCulture)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                             ,0x2db,
                             L"Attempted to load a foreign culture archive file, but the given culture (%s) wasn\'t set during construction!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      bVar3 = SaveArchive(this,(FString *)pFVar5,param_1);
      if (!bVar3) break;
      pFVar5 = pFVar5 + 0x10;
    }
  }
  return false;
}

// SaveArchive @ 146b856e0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FLocTextHelper::SaveArchive(FLocTextHelper *this,FString *param_1,FString *param_2,FText *param_3)

{
  int iVar1;
  FInternationalizationArchive *pFVar2;
  code *pcVar3;
  undefined1 uVar4;
  int iVar5;
  TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *pTVar6;
  FText *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  TSharedRef<FInternationalizationArchive_const_,1> local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FTextFormat local_28;
  
  iVar5 = (this->NativeCulture).Data.ArrayNum;
  if (iVar5 < 2) {
LAB_146b8573f:
    bVar11 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                       (&this->ForeignCultures,param_1);
    if ((!bVar11) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("bIsNativeArchive || bIsForeignArchive",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                            ,0x30d,
                            L"Attempted to save a culture archive file, but the given culture (%s) wasn\'t set during construction!"
                           ), bVar11)) {
      pcVar3 = (code *)swi(3);
      uVar4 = (*pcVar3)();
      return (bool)uVar4;
    }
  }
  else {
    iVar1 = (param_1->Data).ArrayNum;
    if (iVar1 == iVar5) {
      if (1 < iVar1) {
        iVar5 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                           (wchar_t *)(this->NativeCulture).Data.AllocatorInstance.Data);
        bVar11 = iVar5 == 0;
        goto LAB_146b8572a;
      }
    }
    else {
      bVar11 = iVar1 + iVar5 == 1;
LAB_146b8572a:
      if (!bVar11) goto LAB_146b8573f;
    }
    TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>(&this->ForeignCultures,param_1);
  }
  pTVar6 = TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
                   *)&this->Archives,param_1);
  if (pTVar6 == (TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar10 = *(TReferenceControllerBase<1> **)&pTVar6->field_0x18;
    pFVar2 = *(FInternationalizationArchive **)&pTVar6->field_0x10;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar2 != (FInternationalizationArchive *)0x0) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68.Object = pFVar2;
      local_68.SharedReferenceCount.ReferenceController = pTVar10;
      bVar11 = SaveArchiveImpl(this,&local_68,param_2,param_3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      goto LAB_146b85889;
    }
  }
  if (param_3 != (FText *)0x0) {
    pFVar7 = FText::FromString(&local_38,param_2);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"LocTextHelper",L"Error_SaveArchive_NoArchive",
                        L"Failed to save file \'{0}\' as there is no archive instance to save.");
    pFVar9 = FTextFormat::FTextFormat(&local_28,pFVar8,Default);
    pFVar7 = FText::Format<FText>(&local_58,pFVar9,pFVar7);
    FText::operator=(param_3,pFVar7);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  bVar11 = false;
LAB_146b85889:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return bVar11;
}

// SaveArchive @ 146b858c0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall FLocTextHelper::SaveArchive(FLocTextHelper *this,FString *param_1,FText *param_2)

{
  bool bVar1;
  int iVar2;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  pTVar3 = &::operator/(&local_18,&this->TargetPath,param_1)->Data;
  iVar2 = (this->ArchiveName).Data.ArrayNum;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  if ((pTVar3->ArrayNum != 0) || (iVar2 = 2, iVar4 == -1)) {
    iVar2 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_28,pTVar3,iVar4 + iVar2);
  ::FString::PathAppend
            ((FString *)&local_28,(wchar_t *)(this->ArchiveName).Data.AllocatorInstance.Data,iVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  bVar1 = SaveArchive(this,param_1,(FString *)&local_28,param_2);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return bVar1;
}

// SaveArchiveImpl @ 146b85990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FLocTextHelper::SaveArchiveImpl
          (FLocTextHelper *this,TSharedRef<FInternationalizationArchive_const_,1> *param_1,
          FString *param_2,FText *param_3)

{
  ulonglong uVar1;
  FName FVar2;
  FName FVar3;
  ILocFileNotifies *pIVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  FLocTextHelper *pFVar9;
  FText **ppFVar10;
  FSharedReferencer<1> FVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  FString *pFVar16;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar17;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar18;
  IFileManager *pIVar19;
  FText *pFVar20;
  FText *pFVar21;
  FTextFormat *pFVar22;
  byte bVar23;
  int iVar24;
  longlong lVar25;
  wchar_t *pwVar26;
  int iVar27;
  int iVar28;
  FScriptContainerElement *pFVar29;
  uint uVar30;
  uint uVar31;
  FScriptContainerElement *pFVar32;
  uint *puVar33;
  ForAnyElementType FVar34;
  FName *this_00;
  FText *local_res20;
  undefined1 auStackY_348 [32];
  undefined1 local_308;
  undefined1 local_307 [7];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_300;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2f0;
  FString local_2e0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2d0;
  FLocTextHelper *local_2c0;
  FText **local_2b8;
  TReferenceControllerBase<1> *local_2b0;
  TReferenceControllerBase<1> *pTStack_2a8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2a0;
  TSharedRef<FInternationalizationArchive_const_,1> local_290;
  TPairInitializer<FName_&&,TSharedRef<FInternationalizationArchive,1>_&&> local_280;
  TSharedRef<FInternationalizationArchive_const_,1> *local_270;
  FString *local_268;
  TSharedRef<FInternationalizationArchive,1> local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  longlong *local_218;
  int iStack_210;
  uint uStack_20c;
  TBitArray<FDefaultBitArrayAllocator> *local_208;
  undefined4 uStack_200;
  uint uStack_1fc;
  int local_1f8;
  undefined4 uStack_1f4;
  int iStack_1f0;
  undefined4 uStack_1ec;
  longlong *local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e0;
  undefined8 uStack_1c0;
  code *local_1b8;
  TSharedRef<FInternationalizationArchive_const_,1> **local_1b0;
  FScriptContainerElement *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  TSharedRef<FInternationalizationArchive,1> **local_198;
  TReferenceControllerBase<1> **local_190;
  TSharedRef<FInternationalizationArchive_const_,1> *local_188;
  TSharedRef<FInternationalizationArchive,1> *local_180;
  undefined1 *local_178;
  FString local_170;
  FString local_160;
  TSharedRef<FInternationalizationArchive_const_,1> local_148;
  FString local_138;
  TStringView<wchar_t> local_128;
  FText local_118;
  FText local_108;
  FText local_f8;
  FTextFormat local_e8 [2];
  undefined4 local_bc;
  undefined1 local_b8 [32];
  uint *local_98;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  ForElementType<FSetElementId> local_78;
  int local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_348;
  local_2b8 = &local_res20;
  local_res20 = param_3;
  local_2c0 = this;
  local_270 = param_1;
  local_268 = param_2;
  if (this->PlatformSplitMode == None) {
    bVar13 = `FLocTextHelper::SaveArchiveImpl'::__l2::<lambda_1>::operator()
                       (&local_2c0,param_1,param_2);
    return bVar13;
  }
  FPaths::GetPath(&local_228,param_2);
  FPaths::GetCleanFilename(&local_238,param_2);
  FPaths::GetCleanFilename(&local_248,&local_228);
  pFVar16 = FPaths::GetPlatformLocalizationFolderName(&local_160);
  pTVar17 = &FPaths::GetPath(&local_170,&local_228)->Data;
  iVar24 = (pFVar16->Data).ArrayNum;
  iVar27 = iVar24 + -1;
  if (iVar24 == 0) {
    iVar27 = 0;
  }
  iVar24 = 0;
  if ((pTVar17->ArrayNum == 0) && (iVar24 = 0, iVar27 + 1 != 0)) {
    iVar24 = 1;
  }
  TArray<wchar_t,TSizedDefaultAllocator<32>_>::TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
            (&local_2d0,pTVar17,iVar24 + iVar27 + 1);
  ::FString::PathAppend
            ((FString *)&local_2d0,(wchar_t *)(pFVar16->Data).AllocatorInstance.Data,iVar27);
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  MakeShared<FInternationalizationArchive,1>(&local_258);
  local_8c = 0x80;
  local_b8._0_8_ = 0;
  local_b8._8_8_ = 0;
  local_98 = (uint *)0x0;
  local_90 = 0;
  local_84 = 0;
  local_78 = (ForElementType<FSetElementId>)0x0;
  local_70 = 0;
  local_88 = 0xffffffff;
  pTVar18 = FLocTextPlatformSplitUtils::GetPlatformsToSplit(&this->PlatformSplitMode);
  pTVar8 = _UNK_150651568;
  pTVar7 = ___xmm_00000000000000000000000000000010;
  iVar27 = pTVar18->ArrayNum;
  pFVar29 = (pTVar18->AllocatorInstance).Data;
  pFVar32 = pFVar29 + (longlong)iVar27 * 0x10;
  while( true ) {
    if (pTVar18->ArrayNum != iVar27) {
      local_308 = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_308);
    }
    if (pFVar29 == pFVar32) break;
    pTStack_2a8 = ::operator_new(0xb8);
    if (pTStack_2a8 == (TReferenceControllerBase<1> *)0x0) {
      local_2b0 = pTVar7;
      pTStack_2a8 = pTVar8;
    }
    else {
      pTStack_2a8->SharedReferenceCount = (atomic<int>)0x1;
      local_2b0 = pTStack_2a8 + 1;
      pTStack_2a8->WeakReferenceCount = (atomic<int>)0x1;
      pTStack_2a8->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFInternationalizationArchive___00_SharedPointerInternals__6B_
      ;
      *(undefined1 *)&pTStack_2a8[1]._padding_ = 2;
      pTStack_2a8[1].SharedReferenceCount = (atomic<int>)0x0;
      pTStack_2a8[1].WeakReferenceCount = (atomic<int>)0x0;
      pTStack_2a8[2]._padding_ = 0;
      pTStack_2a8[3].SharedReferenceCount = (atomic<int>)0x0;
      pTStack_2a8[3].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)&pTStack_2a8[4]._padding_ = 0;
      *(undefined4 *)((longlong)&pTStack_2a8[4]._padding_ + 4) = 0x80;
      pTStack_2a8[4].SharedReferenceCount = (atomic<int>)0xffffffff;
      pTStack_2a8[4].WeakReferenceCount = (atomic<int>)0x0;
      pTStack_2a8[5].SharedReferenceCount = (atomic<int>)0x0;
      pTStack_2a8[5].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)&pTStack_2a8[6]._padding_ = 0;
      pTStack_2a8[6].SharedReferenceCount = (atomic<int>)0x0;
      pTStack_2a8[6].WeakReferenceCount = (atomic<int>)0x0;
      pTStack_2a8[7]._padding_ = 0;
      pTStack_2a8[8].SharedReferenceCount = (atomic<int>)0x0;
      pTStack_2a8[8].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)&pTStack_2a8[9]._padding_ = 0;
      *(undefined4 *)((longlong)&pTStack_2a8[9]._padding_ + 4) = 0x80;
      pTStack_2a8[9].SharedReferenceCount = (atomic<int>)0xffffffff;
      pTStack_2a8[9].WeakReferenceCount = (atomic<int>)0x0;
      pTStack_2a8[10].SharedReferenceCount = (atomic<int>)0x0;
      pTStack_2a8[10].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)&pTStack_2a8[0xb]._padding_ = 0;
      if ((local_2b0 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar13)) {
        pcVar5 = (code *)swi(3);
        uVar14 = (*pcVar5)();
        return (bool)uVar14;
      }
    }
    if (*(int *)(pFVar29 + 8) == 0) {
      pwVar26 = L"";
    }
    else {
      pwVar26 = *(wchar_t **)pFVar29;
    }
    ::FName::FName((FName *)&local_280.Value,pwVar26);
    local_198 = &local_280.Value;
    local_190 = &local_2b0;
    TSet<TTuple<FName,TSharedRef<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_&&,TSharedRef<FInternationalizationArchive,1>_&&>_>
              ((TSet<TTuple<FName,TSharedRef<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
                *)local_b8,&local_280,(bool *)&local_198);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2a8)
    ;
    pFVar29 = pFVar29 + 0x10;
  }
  local_180 = &local_258;
  local_178 = local_b8;
  local_188 = local_270;
  local_1b0 = &local_188;
  local_1b8 = UE::Core::Private::Function::
              TFunctionRefCaller<`FLocTextHelper::SaveArchiveImpl'::__l6::<lambda_2>,bool,TSharedRef<FManifestEntry,1>_>
              ::Call;
  EnumerateSourceTexts
            (this,(TFunctionRef<bool___cdecl(TSharedRef<FManifestEntry,1>)> *)&local_1b8,true);
  FVar11.ReferenceController = local_258.SharedReferenceCount.ReferenceController;
  local_148.Object = local_258.Object;
  local_148.SharedReferenceCount.ReferenceController =
       local_258.SharedReferenceCount.ReferenceController;
  if (local_258.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar13 = `FLocTextHelper::SaveArchiveImpl'::__l2::<lambda_1>::operator()
                     (&local_2c0,&local_148,local_268);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar11.ReferenceController);
  uVar31 = local_90;
  iStack_210 = 0;
  uStack_20c = 1;
  local_1f8 = 0;
  uStack_1fc = 0;
  if (local_90 != 0) {
    puVar33 = (uint *)(local_b8 + 0x10);
    if (local_98 != (uint *)0x0) {
      puVar33 = local_98;
    }
    uVar30 = *puVar33;
    local_1f8 = 0;
    while (uVar30 == 0) {
      lVar25 = (longlong)iStack_210;
      local_1f8 = local_1f8 + 0x20;
      iStack_210 = iStack_210 + 1;
      uStack_1fc = local_90;
      if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_210)
      goto LAB_146b85d8f;
      uVar30 = (puVar33 + 1)[lVar25];
    }
    uStack_20c = -uVar30 & uVar30;
    uVar1 = (ulonglong)uStack_20c * 2 + 1;
    lVar25 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_280.Key._4_4_ = (int)lVar25;
    uStack_1fc = local_280.Key._4_4_ + -1 + local_1f8;
    if ((int)local_90 < (int)uStack_1fc) {
      uStack_1fc = local_90;
    }
  }
LAB_146b85d8f:
  local_218 = (longlong *)local_b8;
  local_208 = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
  uStack_1f4 = local_bc;
  iStack_1f0 = local_b8._8_4_ - local_84;
  uVar30 = local_90 & 0xffffffe0;
  uStack_200 = 0xffffffff;
  TStack_1e0.CurrentBitIndex = uStack_1fc;
  TStack_1e0.UnvisitedBitMask = 0xffffffff;
  TStack_1e0._padding_ = CONCAT44(uStack_20c,iStack_210);
  iVar27 = (int)local_90 >> 5;
  TStack_1e0._28_4_ = local_bc;
  TStack_1e0.BaseBitIndex = local_1f8;
  uStack_1c0 = CONCAT44(uStack_1ec,iStack_1f0);
  bVar23 = (byte)local_90;
  local_1e8 = local_218;
  TStack_1e0.Array = local_208;
  if (((int)local_90 < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar15)) {
    pcVar5 = (code *)swi(3);
    uVar14 = (*pcVar5)();
    return (bool)uVar14;
  }
  if (uVar31 != local_90) {
    puVar33 = (uint *)(local_b8 + 0x10);
    if (local_98 != (uint *)0x0) {
      puVar33 = local_98;
    }
    uVar31 = -1 << (bVar23 & 0x1f) & puVar33[iVar27];
    while (uVar31 == 0) {
      lVar25 = (longlong)iVar27;
      uVar30 = uVar30 + 0x20;
      iVar27 = iVar27 + 1;
      uVar31 = local_90;
      if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar27)
      goto LAB_146b85eb0;
      uVar31 = (puVar33 + 1)[lVar25];
    }
    uVar1 = (ulonglong)(-uVar31 & uVar31) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    uVar31 = (uVar30 - 1) + (int)lVar25;
    if ((int)local_90 < (int)uVar31) {
      uVar31 = local_90;
    }
  }
LAB_146b85eb0:
  do {
    plVar12 = local_1e8;
    if ((int)local_1e8[1] - *(int *)((longlong)local_1e8 + 0x34) != (int)uStack_1c0) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FInternationalizationArchive,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_307);
    }
    if (((TStack_1e0.CurrentBitIndex == uVar31) &&
        (TStack_1e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10))) &&
       (plVar12 == (longlong *)local_b8)) {
      local_70 = 0;
      if (local_78 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_78);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FInternationalizationArchive,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FInternationalizationArchive,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FInternationalizationArchive,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_b8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_258.SharedReferenceCount.ReferenceController);
      if (local_2d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d0.AllocatorInstance.Data);
      }
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data.AllocatorInstance.Data);
      }
      if (local_228.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return bVar13;
      }
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
      return bVar13;
    }
    this_00 = (FName *)((longlong)TStack_1e0.CurrentBitIndex * 0x20 + *plVar12);
    pFVar16 = ::FName::ToString(this_00,&local_138);
    FVar6.Data = local_2d0.AllocatorInstance.Data;
    iVar24 = (pFVar16->Data).ArrayNum;
    iVar27 = iVar24 + -1;
    if (iVar24 == 0) {
      iVar27 = 0;
    }
    iVar24 = iVar27 + 1;
    iVar28 = local_2d0.ArrayNum;
    local_300.ArrayNum = iVar28;
    if ((iVar28 == 0) && (iVar24 != 0)) {
      iVar24 = iVar27 + 2;
LAB_146b85f5e:
      local_300.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar24 != 0) goto LAB_146b85f68;
      local_300.ArrayMax = 0;
    }
    else {
      if (iVar28 == 0) goto LAB_146b85f5e;
LAB_146b85f68:
      local_300.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar30 = iVar24 + iVar28;
      if ((int)uVar30 < iVar28) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar30,0,&local_300.AllocatorInstance,iVar28,&local_300.ArrayMax);
      if (iVar28 != 0) {
        memcpy(local_300.AllocatorInstance.Data,FVar6.Data,(longlong)iVar28 * 2);
      }
    }
    ::FString::PathAppend
              ((FString *)&local_300,(wchar_t *)(pFVar16->Data).AllocatorInstance.Data,iVar27);
    iVar27 = local_248.Data.ArrayNum + -1;
    if (local_248.Data.ArrayNum == 0) {
      iVar27 = 0;
    }
    iVar24 = 0;
    if ((local_300.ArrayNum != 0) || (iVar28 = 1, iVar27 + 1 == 0)) {
      iVar28 = iVar24;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_2a0,&local_300,iVar28 + iVar27 + 1);
    ::FString::PathAppend
              ((FString *)&local_2a0,(wchar_t *)local_248.Data.AllocatorInstance.Data,iVar27);
    iVar27 = local_238.Data.ArrayNum + -1;
    if (local_238.Data.ArrayNum == 0) {
      iVar27 = iVar24;
    }
    if ((local_2a0.ArrayNum != 0) || (iVar28 = 1, iVar27 + 1 == 0)) {
      iVar28 = iVar24;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_2f0,&local_2a0,iVar28 + iVar27 + 1);
    ::FString::PathAppend
              ((FString *)&local_2f0,(wchar_t *)local_238.Data.AllocatorInstance.Data,iVar27);
    if (local_2a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a0.AllocatorInstance.Data);
    }
    if (local_300.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.AllocatorInstance.Data);
    }
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    pFVar9 = local_2c0;
    FVar2 = this_00[2];
    FVar3 = this_00[1];
    if (FVar2 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar2 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar2 + 8) + 1);
      UNLOCK();
    }
    bVar23 = 0;
    pIVar4 = (local_2c0->LocFileNotifies).Object;
    if (pIVar4 != (ILocFileNotifies *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x28))(pIVar4,&local_2f0);
    }
    local_2e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2e0.Data.ArrayNum = 0;
    local_2e0.Data.ArrayMax = 0;
    if (FVar2 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar2 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar2 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar2 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar2 + 8) + 1);
      UNLOCK();
    }
    local_290.Object = (FInternationalizationArchive *)FVar3;
    local_290.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)FVar2;
    bVar15 = FJsonInternationalizationArchiveSerializer::SerializeArchiveToString
                       (&local_290,&local_2e0);
    if (bVar15) {
      pIVar19 = IFileManager::Get();
      FVar6.Data = local_2e0.Data.AllocatorInstance.Data;
      FVar34.Data = (FScriptContainerElement *)L"";
      if (local_2f0.ArrayNum != 0) {
        FVar34.Data = local_2f0.AllocatorInstance.Data;
      }
      iStack_1a0 = local_2e0.Data.ArrayNum + -1;
      local_1a8 = local_2e0.Data.AllocatorInstance.Data;
      if (local_2e0.Data.ArrayNum == 0) {
        iStack_1a0 = 0;
      }
      local_128._12_4_ = uStack_19c;
      local_128.Size = iStack_1a0;
      local_128.DataPtr = (wchar_t *)local_2e0.Data.AllocatorInstance.Data;
      bVar15 = FFileHelper::SaveStringToFile
                         (&local_128,(wchar_t *)FVar34.Data,ForceUnicode,pIVar19,0);
      if (!bVar15) {
        if (1 < (byte)LogInternationalizationArchiveSerializer._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&::LOG_Static,(FLogCategoryBase *)&LogInternationalizationArchiveSerializer);
        }
        goto joined_r0x000146b861b8;
      }
      if (FVar6.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar6.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)FVar2);
      bVar23 = 1;
    }
    else {
      FVar6.Data = local_2e0.Data.AllocatorInstance.Data;
      if (1 < (byte)LogInternationalizationArchiveSerializer._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogInternationalizationArchiveSerializer);
        FVar6.Data = local_2e0.Data.AllocatorInstance.Data;
      }
joined_r0x000146b861b8:
      if (FVar6.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar6.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)FVar2);
      ppFVar10 = local_2b8;
      if (*local_2b8 != (FText *)0x0) {
        pFVar20 = FText::FromString(&local_f8,(FString *)&local_2f0);
        pFVar21 = FText::AsLocalizable_Advanced_LocText
                            (&local_108,L"LocTextHelper",L"Error_SaveArchive_SerializeFile",
                             L"Failed to serialize archive \'{0}\'.");
        pFVar22 = FTextFormat::FTextFormat(local_e8,pFVar21,Default);
        pFVar20 = FText::Format<FText>(&local_118,pFVar22,pFVar20);
        FText::operator=(*ppFVar10,pFVar20);
        if (local_118.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
        }
        if (local_108.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
        }
      }
    }
    pIVar4 = (pFVar9->LocFileNotifies).Object;
    if (pIVar4 != (ILocFileNotifies *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x30))(pIVar4,&local_2f0);
    }
    bVar13 = (bool)(bVar13 & bVar23);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar2);
    if (local_2f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f0.AllocatorInstance.Data);
    }
    TStack_1e0.UnvisitedBitMask = TStack_1e0.UnvisitedBitMask & ~TStack_1e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e0);
  } while( true );
}

// SaveConflictReport @ 146b86370

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FLocTextHelper::SaveConflictReport
          (FLocTextHelper *this,FString *param_1,EConflictReportFormat param_2,FText *param_3)

{
  ILocFileNotifies *pIVar1;
  bool bVar2;
  FText *pFVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  FString *pFVar6;
  IFileManager *pIVar7;
  wchar_t *pwVar8;
  uint uVar9;
  bool bVar10;
  ITextData *pIVar11;
  FText local_68;
  TStringView<wchar_t> local_58;
  FString local_48;
  FText local_38;
  FText local_28;
  
  pIVar1 = (this->LocFileNotifies).Object;
  bVar10 = false;
  bVar2 = false;
  if (pIVar1 != (ILocFileNotifies *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x28))();
  }
  pIVar11 = (ITextData *)0x0;
  if (param_2 == Txt) {
    pFVar6 = FLocTextConflicts::GetConflictReport(&this->ConflictTracker,(FString *)&local_58);
  }
  else {
    if (param_2 != CSV) {
      if (param_3 != (FText *)0x0) {
        pFVar3 = FText::FromString(&local_38,param_1);
        pFVar4 = FText::AsLocalizable_Advanced_LocText
                           ((FText *)&local_58,L"LocTextHelper",
                            L"Error_UnsupportedConflictReportFormat",
                            L"Failed to generate conflict report \'{0}\'. An unsupported conflict report format was specified. Supported formats can be found in EConflictReportFormat."
                           );
        pFVar5 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar4,Default);
        pFVar3 = FText::Format<FText>(&local_68,pFVar5,pFVar3);
        FText::operator=(param_3,pFVar3);
        if (local_68.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
        }
        pIVar11 = (ITextData *)0x0;
        if ((ITextData *)local_58.DataPtr != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_58.DataPtr + 0x10))();
        }
      }
      goto LAB_146b8658a;
    }
    pFVar6 = FLocTextConflicts::GetConflictReportAsCSV(&this->ConflictTracker,(FString *)&local_58);
  }
  uVar9 = 0;
  if (&local_48 != pFVar6) {
    pIVar11 = (ITextData *)(pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar9 = (pFVar6->Data).ArrayNum;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if ((ITextData *)local_58.DataPtr != (ITextData *)0x0) {
    FMemory::Free(local_58.DataPtr);
  }
  pIVar7 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  local_68.Flags = uVar9 - 1;
  if (uVar9 == 0) {
    local_68.Flags = 0;
  }
  local_58._12_4_ = local_68._12_4_;
  local_58.Size = local_68.Flags;
  local_68.TextData.Reference = pIVar11;
  local_58.DataPtr = (wchar_t *)pIVar11;
  bVar2 = FFileHelper::SaveStringToFile(&local_58,pwVar8,AutoDetect,pIVar7,0);
  if (bVar2) {
    bVar2 = true;
  }
  else {
    bVar2 = bVar10;
    if (param_3 != (FText *)0x0) {
      pFVar3 = FText::FromString(&local_28,param_1);
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         (&local_68,L"LocTextHelper",L"Error_SaveConflictReport_SaveStringToFile",
                          L"Failed to save conflict report \'{0}\'.");
      pFVar5 = FTextFormat::FTextFormat((FTextFormat *)&local_38,pFVar4,Default);
      pFVar3 = FText::Format<FText>((FText *)&local_58,pFVar5,pFVar3);
      FText::operator=(param_3,pFVar3);
      if ((ITextData *)local_58.DataPtr != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_58.DataPtr + 0x10))();
      }
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
    }
  }
  pIVar1 = (this->LocFileNotifies).Object;
  if (pIVar1 != (ILocFileNotifies *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,param_1);
  }
LAB_146b8658a:
  if (pIVar11 != (ITextData *)0x0) {
    FMemory::Free(pIVar11);
  }
  return bVar2;
}

// SaveForeignArchive @ 146b865d0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall
FLocTextHelper::SaveForeignArchive
          (FLocTextHelper *this,FString *param_1,FString *param_2,FText *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                    (&this->ForeignCultures,param_1);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ForeignCultures.Contains(InCulture)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                         ,0x2e1,
                         L"Attempted to load a foreign culture archive file, but the given culture (%s) wasn\'t set during construction!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = SaveArchive(this,param_1,param_2,param_3);
  return bVar2;
}

// SaveForeignArchive @ 146b86670

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall
FLocTextHelper::SaveForeignArchive(FLocTextHelper *this,FString *param_1,FText *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = TArray<FString,TSizedDefaultAllocator<32>_>::Contains<FString>
                    (&this->ForeignCultures,param_1);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ForeignCultures.Contains(InCulture)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                         ,0x2db,
                         L"Attempted to load a foreign culture archive file, but the given culture (%s) wasn\'t set during construction!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = SaveArchive(this,param_1,param_2);
  return bVar2;
}

// SaveManifest @ 146b86700

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall FLocTextHelper::SaveManifest(FLocTextHelper *this,FString *param_1,FText *param_2)

{
  FInternationalizationManifest *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  FText *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  TSharedRef<FInternationalizationManifest_const_,1> local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  pFVar1 = (this->Manifest).Object;
  if (pFVar1 != (FInternationalizationManifest *)0x0) {
    pTVar2 = (this->Manifest).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48.Object = pFVar1;
    local_48.SharedReferenceCount.ReferenceController = pTVar2;
    bVar3 = SaveManifestImpl(this,&local_48,param_1,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    return bVar3;
  }
  if (param_2 != (FText *)0x0) {
    pFVar4 = FText::FromString(&local_28,param_1);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"LocTextHelper",L"Error_SaveManifest_NoManifest",
                        L"Failed to save file \'{0}\' as there is no manifest instance to save.");
    pFVar6 = FTextFormat::FTextFormat(&local_18,pFVar5,Default);
    pFVar4 = FText::Format<FText>((FText *)&local_48,pFVar6,pFVar4);
    FText::operator=(param_2,pFVar4);
    if (local_48.Object != (FInternationalizationManifest *)0x0) {
      (**(code **)(*(longlong *)local_48.Object + 0x10))();
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  return false;
}

// SaveManifest @ 146b86810

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall FLocTextHelper::SaveManifest(FLocTextHelper *this,FText *param_1)

{
  FInternationalizationManifest *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  FText *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  TSharedRef<FInternationalizationManifest_const_,1> local_58;
  FString local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  ::operator/(&local_48,&this->TargetPath,&this->ManifestName);
  pFVar1 = (this->Manifest).Object;
  if (pFVar1 == (FInternationalizationManifest *)0x0) {
    if (param_1 != (FText *)0x0) {
      pFVar4 = FText::FromString(&local_28,&local_48);
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_38,L"LocTextHelper",L"Error_SaveManifest_NoManifest",
                          L"Failed to save file \'{0}\' as there is no manifest instance to save.");
      pFVar6 = FTextFormat::FTextFormat(&local_18,pFVar5,Default);
      pFVar4 = FText::Format<FText>((FText *)&local_58,pFVar6,pFVar4);
      FText::operator=(param_1,pFVar4);
      if (local_58.Object != (FInternationalizationManifest *)0x0) {
        (**(code **)(*(longlong *)local_58.Object + 0x10))();
      }
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
    }
    bVar3 = false;
  }
  else {
    pTVar2 = (this->Manifest).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_58.Object = pFVar1;
    local_58.SharedReferenceCount.ReferenceController = pTVar2;
    bVar3 = SaveManifestImpl(this,&local_58,&local_48,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// SaveManifestImpl @ 146b86950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FLocTextHelper::SaveManifestImpl
          (FLocTextHelper *this,TSharedRef<FInternationalizationManifest_const_,1> *param_1,
          FString *param_2,FText *param_3)

{
  FLocKey *pFVar1;
  FName FVar2;
  FLocMetadataObject *pFVar3;
  FName FVar4;
  ILocFileNotifies *pIVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ForAnyElementType FVar11;
  TReferenceControllerBase<1> *pTVar12;
  TReferenceControllerBase<1> *pTVar13;
  FLocTextHelper *pFVar14;
  FText **ppFVar15;
  longlong *plVar16;
  bool bVar17;
  undefined1 uVar18;
  bool bVar19;
  bool bVar20;
  uint uVar21;
  FString *pFVar22;
  FString *pFVar23;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar24;
  FName *pFVar25;
  IFileManager *pIVar26;
  FText *pFVar27;
  FText *pFVar28;
  FTextFormat *pFVar29;
  byte bVar30;
  int iVar31;
  ulonglong uVar32;
  FName *pFVar33;
  longlong lVar34;
  wchar_t *pwVar35;
  ForElementType<FSetElementId> FVar36;
  ForAnyElementType FVar37;
  int iVar38;
  int iVar39;
  uint uVar40;
  FScriptContainerElement *pFVar41;
  FScriptContainerElement *pFVar42;
  uint *puVar43;
  FManifestContext *pFVar44;
  FManifestContext *pFVar45;
  FText *local_res20;
  undefined1 auStackY_448 [32];
  undefined1 local_3c8;
  undefined1 local_3c7;
  undefined1 local_3c6 [2];
  uint local_3c4;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_3c0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_3b0;
  FString local_3a0;
  TSharedRef<FInternationalizationManifest,1> local_388;
  FName local_378;
  FSharedReferencer<1> FStack_370;
  FLocTextHelper *local_368;
  FText **local_360;
  FString *local_358;
  TReferenceControllerBase<1> *local_350;
  TReferenceControllerBase<1> *pTStack_348;
  TSharedRef<FInternationalizationManifest_const_,1> local_340;
  FString local_330;
  FName local_320;
  TLogFieldName<char_const_(&)[3]> local_318;
  FScriptContainerElement *local_310;
  TLogFieldName<char_const_(&)[12]> local_308;
  FScriptContainerElement *local_300;
  TLogFieldName<char_const_(&)[13]> local_2f8;
  FScriptContainerElement *local_2f0;
  TLogFieldName<char_const_(&)[5]> local_2e8;
  FScriptContainerElement *local_2e0;
  TLogFieldName<char_const_(&)[15]> local_2d8;
  FScriptContainerElement *local_2d0;
  TLogFieldName<char_const_(&)[7]> local_2c8;
  FScriptContainerElement *local_2c0;
  TLogFieldName<char_const_(&)[13]> local_2b8;
  TReferenceControllerBase<1> *local_2b0;
  TPairInitializer<FName_&&,TSharedRef<FInternationalizationManifest,1>_&&> local_2a8;
  FName local_298;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  longlong *local_250;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_248;
  longlong *local_228;
  int iStack_220;
  uint uStack_21c;
  TBitArray<FDefaultBitArrayAllocator> *local_218;
  undefined4 uStack_210;
  uint uStack_20c;
  int local_208;
  undefined4 uStack_204;
  int iStack_200;
  undefined4 uStack_1fc;
  longlong *local_1f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1f0;
  undefined8 uStack_1d0;
  TSharedPtr<FLocMetadataObject,1> local_1c8;
  FScriptContainerElement *local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  FName *local_1a8;
  TReferenceControllerBase<1> **local_1a0;
  TSharedPtr<FLocMetadataObject,1> local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  TSharedRef<FInternationalizationManifest_const_,1> local_138;
  FString local_128;
  TStringView<wchar_t> local_118;
  FText local_108;
  FText local_f8;
  FText local_e8;
  FTextFormat local_d8 [2];
  undefined4 local_ac;
  undefined1 local_a8 [32];
  uint *local_88;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  undefined1 local_70 [8];
  ForElementType<FSetElementId> local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_448;
  local_3c4 = 0;
  local_360 = &local_res20;
  local_res20 = param_3;
  local_368 = this;
  local_358 = param_2;
  if (this->PlatformSplitMode == None) {
    bVar19 = `FLocTextHelper::SaveManifestImpl'::__l2::<lambda_1>::operator()
                       (&local_368,param_1,param_2);
    return bVar19;
  }
  FPaths::GetCleanFilename(&local_260,param_2);
  pFVar22 = FPaths::GetPlatformLocalizationFolderName(&local_178);
  pFVar23 = FPaths::GetPath(&local_188,param_2);
  ::operator/(&local_330,pFVar23,pFVar22);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  MakeShared<FInternationalizationManifest,1>(&local_388);
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar20 = false;
  bVar19 = false;
  local_7c = 0x80;
  local_a8._0_8_ = 0;
  local_a8._8_8_ = 0;
  local_88 = (uint *)0x0;
  local_80 = 0;
  local_74 = 0;
  local_68 = (ForElementType<FSetElementId>)0x0;
  local_60 = 0;
  local_78 = 0xffffffff;
  pTVar24 = FLocTextPlatformSplitUtils::GetPlatformsToSplit(&this->PlatformSplitMode);
  pTVar13 = _UNK_150651568;
  pTVar12 = ___xmm_00000000000000000000000000000010;
  iVar38 = pTVar24->ArrayNum;
  pFVar42 = (pTVar24->AllocatorInstance).Data;
  pFVar41 = pFVar42 + (longlong)iVar38 * 0x10;
  while( true ) {
    if (pTVar24->ArrayNum != iVar38) {
      local_3c8 = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_3c8);
    }
    if (pFVar42 == pFVar41) break;
    pTStack_348 = ::operator_new(0xb8);
    if (pTStack_348 == (TReferenceControllerBase<1> *)0x0) {
      local_350 = pTVar12;
      pTStack_348 = pTVar13;
    }
    else {
      pTStack_348->SharedReferenceCount = (atomic<int>)0x1;
      pTStack_348->WeakReferenceCount = (atomic<int>)0x1;
      pTStack_348->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFInternationalizationManifest___00_SharedPointerInternals__6B_
      ;
      *(undefined1 *)&pTStack_348[1]._padding_ = 1;
      pTStack_348[1].SharedReferenceCount = (atomic<int>)0x0;
      pTStack_348[1].WeakReferenceCount = (atomic<int>)0x0;
      pTStack_348[2]._padding_ = 0;
      pTStack_348[3].SharedReferenceCount = (atomic<int>)0x0;
      pTStack_348[3].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)&pTStack_348[4]._padding_ = 0;
      *(undefined4 *)((longlong)&pTStack_348[4]._padding_ + 4) = 0x80;
      pTStack_348[4].SharedReferenceCount = (atomic<int>)0xffffffff;
      pTStack_348[4].WeakReferenceCount = (atomic<int>)0x0;
      pTStack_348[5].SharedReferenceCount = (atomic<int>)0x0;
      pTStack_348[5].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)&pTStack_348[6]._padding_ = 0;
      pTStack_348[6].SharedReferenceCount = (atomic<int>)0x0;
      pTStack_348[6].WeakReferenceCount = (atomic<int>)0x0;
      pTStack_348[7]._padding_ = 0;
      pTStack_348[8].SharedReferenceCount = (atomic<int>)0x0;
      pTStack_348[8].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)&pTStack_348[9]._padding_ = 0;
      *(undefined4 *)((longlong)&pTStack_348[9]._padding_ + 4) = 0x80;
      pTStack_348[9].SharedReferenceCount = (atomic<int>)0xffffffff;
      pTStack_348[9].WeakReferenceCount = (atomic<int>)0x0;
      pTStack_348[10].SharedReferenceCount = (atomic<int>)0x0;
      pTStack_348[10].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)&pTStack_348[0xb]._padding_ = 0;
      local_350 = pTStack_348 + 1;
      if ((local_350 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar17)) {
        pcVar6 = (code *)swi(3);
        uVar18 = (*pcVar6)();
        return (bool)uVar18;
      }
    }
    if (*(int *)(pFVar42 + 8) == 0) {
      pwVar35 = L"";
    }
    else {
      pwVar35 = *(wchar_t **)pFVar42;
    }
    ::FName::FName(&local_320,pwVar35);
    local_1a8 = &local_320;
    local_1a0 = &local_350;
    TSet<TTuple<FName,TSharedRef<FInternationalizationManifest,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FInternationalizationManifest,1>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_&&,TSharedRef<FInternationalizationManifest,1>_&&>_>
              ((TSet<TTuple<FName,TSharedRef<FInternationalizationManifest,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<FInternationalizationManifest,1>,0>,FDefaultSetAllocator>
                *)local_a8,&local_2a8,(bool *)&local_1a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_348)
    ;
    pFVar42 = pFVar42 + 0x10;
  }
  FInternationalizationManifest::GetEntriesBySourceTextIterator
            (param_1->Object,(TConstIterator *)&local_250);
  if (local_248.CurrentBitIndex < (local_248.Array)->NumBits) {
    do {
      local_2b0 = *(TReferenceControllerBase<1> **)
                   (*local_250 + 0x18 + (longlong)local_248.CurrentBitIndex * 0x28);
      pFVar1 = *(FLocKey **)(*local_250 + 0x10 + (longlong)local_248.CurrentBitIndex * 0x28);
      if (local_2b0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_2b0->SharedReferenceCount = (atomic<int>)((int)local_2b0->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_3c4 = pFVar1[2].Hash;
      uVar32 = (ulonglong)(int)local_3c4;
      pFVar45 = *(FManifestContext **)&pFVar1[2].Str.Data.ArrayNum;
      pFVar44 = pFVar45 + uVar32;
      while( true ) {
        if (pFVar1[2].Hash != (uint)uVar32) {
          local_3c7 = 0;
          `TCheckedPointerIterator<FManifestContext,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_3c7);
        }
        if (pFVar45 == pFVar44) break;
        local_378 = (FName)local_388.Object;
        FStack_370.ReferenceController = local_388.SharedReferenceCount.ReferenceController;
        if (local_388.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_388.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_388.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        FVar2 = pFVar45->PlatformName;
        if (FVar2 != (FName)0x0) {
          uVar21 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
          if (local_a8._8_4_ != local_74) {
            FVar36 = (ForElementType<FSetElementId>)local_70;
            if (local_68 != (ForElementType<FSetElementId>)0x0) {
              FVar36 = local_68;
            }
            uVar21 = *(uint *)((longlong)FVar36 +
                              (ulonglong)(local_60 - 1U & FVar2.Number + uVar21) * 4);
            while (uVar21 != 0xffffffff) {
              pFVar33 = (FName *)((longlong)(int)uVar21 * 0x20 + local_a8._0_8_);
              if (*pFVar33 == FVar2) {
                pFVar25 = pFVar33 + 1;
                if (pFVar33 == (FName *)0x0) {
                  pFVar25 = (FName *)0x0;
                }
                if (pFVar25 != (FName *)0x0) {
                  local_298 = pFVar25[1];
                  local_378 = *pFVar25;
                  if (local_298 != (FName)0x0) {
                    LOCK();
                    *(int *)((longlong)local_298 + 8) = *(int *)((longlong)local_298 + 8) + 1;
                    UNLOCK();
                  }
                  local_2a8.Value = (TSharedRef<FInternationalizationManifest,1> *)0x0;
                  SharedPointerInternals::FSharedReferencer<1>::operator=
                            (&FStack_370,(FSharedReferencer<1> *)&local_298);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)local_298);
                }
                break;
              }
              uVar21 = pFVar33[3].ComparisonIndex.Value;
            }
          }
        }
        FVar2 = local_378;
        if (local_378 == (FName)0x0) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("ManifestToUpdate.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                              ,0x6f3,L"");
          if (bVar17) {
            pcVar6 = (code *)swi(3);
            uVar18 = (*pcVar6)();
            return (bool)uVar18;
          }
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar17) {
            pcVar6 = (code *)swi(3);
            uVar18 = (*pcVar6)();
            return (bool)uVar18;
          }
        }
        bVar17 = FInternationalizationManifest::AddSource
                           ((FInternationalizationManifest *)FVar2,pFVar1,(FLocItem *)(pFVar1 + 1),
                            pFVar45);
        if ((!bVar17) && (1 < (byte)LogLocTextHelper._0_1_)) {
          local_318.Name = (char (*) [3])&s_id;
          if (pFVar45->PlatformName == (FName)0x0) {
            local_310 = (FScriptContainerElement *)L"";
          }
          else {
            ::FName::ToString(&pFVar45->PlatformName,&local_148);
            bVar10 = true;
            bVar9 = true;
            ::FString::PrintfImpl(&local_270,L" for platform \"%s\"");
            local_310 = (FScriptContainerElement *)L"";
            if (local_270.Data.ArrayNum != 0) {
              local_310 = local_270.Data.AllocatorInstance.Data;
            }
          }
          local_308.Name = (char (*) [12])0x151401c88;
          pFVar3 = *(FLocMetadataObject **)&pFVar1[1].Hash;
          if (pFVar3 == (FLocMetadataObject *)0x0) {
            local_300 = (FScriptContainerElement *)L"";
          }
          else {
            local_198.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)pFVar1[2].Str.Data.AllocatorInstance.Data;
            if (local_198.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            local_198.Object = pFVar3;
            FJsonInternationalizationMetaDataSerializer::MetadataToString(&local_158,&local_198);
            bVar8 = true;
            bVar7 = true;
            ::FString::PrintfImpl(&local_280,L" (meta-data \"%s\")");
            local_300 = (FScriptContainerElement *)L"";
            if (local_280.Data.ArrayNum != 0) {
              local_300 = local_280.Data.AllocatorInstance.Data;
            }
          }
          local_2f8.Name = (char (*) [13])0x1513ff980;
          if (pFVar1[1].Str.Data.ArrayNum == 0) {
            local_2f0 = (FScriptContainerElement *)0x15060d16c;
          }
          else {
            local_2f0 = pFVar1[1].Str.Data.AllocatorInstance.Data;
          }
          local_2e8.Name = (char (*) [5])0x1513ff990;
          pFVar3 = (pFVar45->KeyMetadataObj).Object;
          if (pFVar3 == (FLocMetadataObject *)0x0) {
            local_2e0 = (FScriptContainerElement *)L"";
          }
          else {
            local_1c8.SharedReferenceCount.ReferenceController =
                 (pFVar45->KeyMetadataObj).SharedReferenceCount.ReferenceController;
            if (local_1c8.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            local_1c8.Object = pFVar3;
            FJsonInternationalizationMetaDataSerializer::MetadataToString(&local_168,&local_1c8);
            bVar20 = true;
            bVar19 = true;
            ::FString::PrintfImpl(&local_290,L" (meta-data \"%s\")");
            local_2e0 = (FScriptContainerElement *)L"";
            if (local_290.Data.ArrayNum != 0) {
              local_2e0 = local_290.Data.AllocatorInstance.Data;
            }
          }
          local_2d8.Name = (char (*) [15])0x1513ff998;
          if ((pFVar45->Key).Str.Data.ArrayNum == 0) {
            local_2d0 = (FScriptContainerElement *)0x15060d16c;
          }
          else {
            local_2d0 = (pFVar45->Key).Str.Data.AllocatorInstance.Data;
          }
          local_2c8.Name = (char (*) [7])0x1513ff9a8;
          if ((pFVar1->Str).Data.ArrayNum == 0) {
            local_2c0 = (FScriptContainerElement *)0x15060d16c;
          }
          else {
            local_2c0 = (pFVar1->Str).Data.AllocatorInstance.Data;
          }
          local_2b8.Name = (char (*) [13])0x1513ff9b0;
          UE::Logging::Private::
          LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[7]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[15]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[12]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
                    ((FLogCategoryBase *)&LogLocTextHelper,&::LOG_Static,&local_2b8,
                     (wchar_t **)&local_2c0,&local_2c8,(wchar_t **)&local_2d0,&local_2d8,
                     (wchar_t **)&local_2e0,&local_2e8,(wchar_t **)&local_2f0,&local_2f8,
                     (wchar_t **)&local_300,&local_308,(wchar_t **)&local_310,&local_318,
                     &LocTextHelper::LocalizationLogIdentifier);
          if ((bVar19) &&
             (bVar19 = false,
             local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_290.Data.AllocatorInstance.Data);
          }
          if ((bVar20) &&
             (bVar20 = false,
             local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_168.Data.AllocatorInstance.Data);
          }
          if ((bVar7) &&
             (bVar7 = false, local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             )) {
            FMemory::Free(local_280.Data.AllocatorInstance.Data);
          }
          if ((bVar8) &&
             (bVar8 = false, local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             )) {
            FMemory::Free(local_158.Data.AllocatorInstance.Data);
          }
          if ((bVar9) &&
             (bVar9 = false, local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             )) {
            FMemory::Free(local_270.Data.AllocatorInstance.Data);
          }
          if ((bVar10) &&
             (bVar10 = false,
             local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_370.ReferenceController);
        uVar32 = (ulonglong)local_3c4;
        pFVar45 = pFVar45 + 1;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2b0)
      ;
      local_248.UnvisitedBitMask = local_248.UnvisitedBitMask & ~local_248._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_248);
    } while (local_248.CurrentBitIndex < (local_248.Array)->NumBits);
  }
  local_138.Object = local_388.Object;
  local_138.SharedReferenceCount.ReferenceController =
       local_388.SharedReferenceCount.ReferenceController;
  if (local_388.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_388.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_388.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar19 = `FLocTextHelper::SaveManifestImpl'::__l2::<lambda_1>::operator()
                     (&local_368,&local_138,local_358);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_388.SharedReferenceCount.ReferenceController);
  uVar21 = local_80;
  iStack_220 = 0;
  uStack_21c = 1;
  local_208 = 0;
  uStack_20c = 0;
  if (local_80 != 0) {
    puVar43 = (uint *)(local_a8 + 0x10);
    if (local_88 != (uint *)0x0) {
      puVar43 = local_88;
    }
    uVar40 = *puVar43;
    local_208 = 0;
    while (uVar40 == 0) {
      lVar34 = (longlong)iStack_220;
      local_208 = local_208 + 0x20;
      iStack_220 = iStack_220 + 1;
      uStack_20c = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_220)
      goto LAB_146b87232;
      uVar40 = (puVar43 + 1)[lVar34];
    }
    uStack_21c = -uVar40 & uVar40;
    uVar32 = (ulonglong)uStack_21c * 2 + 1;
    lVar34 = 0x3f;
    if (uVar32 != 0) {
      for (; uVar32 >> lVar34 == 0; lVar34 = lVar34 + -1) {
      }
    }
    local_2a8.Key._4_4_ = (int)lVar34;
    uStack_20c = local_2a8.Key._4_4_ + -1 + local_208;
    if ((int)local_80 < (int)uStack_20c) {
      uStack_20c = local_80;
    }
  }
LAB_146b87232:
  local_228 = (longlong *)local_a8;
  local_218 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
  uStack_204 = local_ac;
  iStack_200 = local_a8._8_4_ - local_74;
  uVar40 = local_80 & 0xffffffe0;
  uStack_210 = 0xffffffff;
  TStack_1f0.CurrentBitIndex = uStack_20c;
  TStack_1f0.UnvisitedBitMask = 0xffffffff;
  TStack_1f0._padding_ = CONCAT44(uStack_21c,iStack_220);
  iVar38 = (int)local_80 >> 5;
  TStack_1f0._28_4_ = local_ac;
  TStack_1f0.BaseBitIndex = local_208;
  uStack_1d0 = CONCAT44(uStack_1fc,iStack_200);
  bVar30 = (byte)local_80;
  local_1f8 = local_228;
  TStack_1f0.Array = local_218;
  if (((int)local_80 < 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar20)) {
    pcVar6 = (code *)swi(3);
    uVar18 = (*pcVar6)();
    return (bool)uVar18;
  }
  if (uVar21 != local_80) {
    puVar43 = (uint *)(local_a8 + 0x10);
    if (local_88 != (uint *)0x0) {
      puVar43 = local_88;
    }
    uVar21 = -1 << (bVar30 & 0x1f) & puVar43[iVar38];
    while (uVar21 == 0) {
      lVar34 = (longlong)iVar38;
      uVar40 = uVar40 + 0x20;
      iVar38 = iVar38 + 1;
      uVar21 = local_80;
      if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar38)
      goto LAB_146b87380;
      uVar21 = (puVar43 + 1)[lVar34];
    }
    uVar32 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar34 = 0x3f;
    if (uVar32 != 0) {
      for (; uVar32 >> lVar34 == 0; lVar34 = lVar34 + -1) {
      }
    }
    uVar21 = (int)lVar34 + -1 + uVar40;
    if ((int)local_80 < (int)uVar21) {
      uVar21 = local_80;
    }
  }
LAB_146b87380:
  do {
    plVar16 = local_1f8;
    if ((int)local_1f8[1] - *(int *)((longlong)local_1f8 + 0x34) != (int)uStack_1d0) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FInternationalizationManifest,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_3c6);
    }
    if (((TStack_1f0.CurrentBitIndex == uVar21) &&
        (TStack_1f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))) &&
       (plVar16 == (longlong *)local_a8)) {
      local_60 = 0;
      if (local_68 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_68);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FInternationalizationManifest,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FInternationalizationManifest,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<FInternationalizationManifest,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_388.SharedReferenceCount.ReferenceController);
      if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_330.Data.AllocatorInstance.Data);
      }
      if (local_260.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return bVar19;
      }
      FMemory::Free(local_260.Data.AllocatorInstance.Data);
      return bVar19;
    }
    pFVar33 = (FName *)((longlong)TStack_1f0.CurrentBitIndex * 0x20 + *plVar16);
    pFVar22 = ::FName::ToString(pFVar33,&local_128);
    FVar11.Data = local_330.Data.AllocatorInstance.Data;
    iVar31 = (pFVar22->Data).ArrayNum;
    iVar38 = iVar31 + -1;
    if (iVar31 == 0) {
      iVar38 = 0;
    }
    iVar31 = iVar38 + 1;
    iVar39 = local_330.Data.ArrayNum;
    local_3c0.ArrayNum = iVar39;
    if ((iVar39 == 0) && (iVar31 != 0)) {
      iVar31 = iVar38 + 2;
LAB_146b87430:
      local_3c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar31 != 0) goto LAB_146b87439;
      local_3c0.ArrayMax = 0;
    }
    else {
      if (iVar39 == 0) goto LAB_146b87430;
LAB_146b87439:
      local_3c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar40 = iVar31 + iVar39;
      if ((int)uVar40 < iVar39) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar40);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar40,0,&local_3c0.AllocatorInstance,iVar39,&local_3c0.ArrayMax);
      if (iVar39 != 0) {
        memcpy(local_3c0.AllocatorInstance.Data,FVar11.Data,(longlong)iVar39 * 2);
      }
    }
    ::FString::PathAppend
              ((FString *)&local_3c0,(wchar_t *)(pFVar22->Data).AllocatorInstance.Data,iVar38);
    iVar31 = 0;
    iVar38 = local_260.Data.ArrayNum + -1;
    if (local_260.Data.ArrayNum == 0) {
      iVar38 = 0;
    }
    if ((local_3c0.ArrayNum == 0) && (iVar38 + 1 != 0)) {
      iVar31 = 1;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_3b0,&local_3c0,iVar38 + 1 + iVar31);
    ::FString::PathAppend
              ((FString *)&local_3b0,(wchar_t *)local_260.Data.AllocatorInstance.Data,iVar38);
    if (local_3c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c0.AllocatorInstance.Data);
    }
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
    pFVar14 = local_368;
    FVar2 = pFVar33[2];
    FVar4 = pFVar33[1];
    if (FVar2 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar2 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar2 + 8) + 1);
      UNLOCK();
    }
    bVar30 = 0;
    pIVar5 = (local_368->LocFileNotifies).Object;
    if (pIVar5 != (ILocFileNotifies *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x28))(pIVar5,&local_3b0);
    }
    local_3a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3a0.Data.ArrayNum = 0;
    local_3a0.Data.ArrayMax = 0;
    if (FVar2 != (FName)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar2 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar2 + 8) + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)((longlong)FVar2 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar2 + 8) + 1);
      UNLOCK();
    }
    local_340.Object = (FInternationalizationManifest *)FVar4;
    local_340.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)FVar2;
    bVar20 = FJsonInternationalizationManifestSerializer::SerializeManifestToString
                       (&local_340,&local_3a0);
    if (bVar20) {
      pIVar26 = IFileManager::Get();
      FVar11.Data = local_3a0.Data.AllocatorInstance.Data;
      FVar37.Data = (FScriptContainerElement *)L"";
      if (local_3b0.ArrayNum != 0) {
        FVar37.Data = local_3b0.AllocatorInstance.Data;
      }
      iStack_1b0 = local_3a0.Data.ArrayNum + -1;
      local_1b8 = local_3a0.Data.AllocatorInstance.Data;
      if (local_3a0.Data.ArrayNum == 0) {
        iStack_1b0 = 0;
      }
      local_118._12_4_ = uStack_1ac;
      local_118.Size = iStack_1b0;
      local_118.DataPtr = (wchar_t *)local_3a0.Data.AllocatorInstance.Data;
      bVar20 = FFileHelper::SaveStringToFile
                         (&local_118,(wchar_t *)FVar37.Data,ForceUnicode,pIVar26,0);
      if (!bVar20) {
        if (1 < (byte)LogInternationalizationManifestSerializer._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&::LOG_Static,(FLogCategoryBase *)&LogInternationalizationManifestSerializer);
        }
        goto joined_r0x000146b87629;
      }
      if (FVar11.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar11.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)FVar2);
      bVar30 = 1;
    }
    else {
      FVar11.Data = local_3a0.Data.AllocatorInstance.Data;
      if (1 < (byte)LogInternationalizationManifestSerializer._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogInternationalizationManifestSerializer);
        FVar11.Data = local_3a0.Data.AllocatorInstance.Data;
      }
joined_r0x000146b87629:
      if (FVar11.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar11.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)FVar2);
      ppFVar15 = local_360;
      if (*local_360 != (FText *)0x0) {
        pFVar27 = FText::FromString(&local_e8,(FString *)&local_3b0);
        pFVar28 = FText::AsLocalizable_Advanced_LocText
                            (&local_f8,L"LocTextHelper",L"Error_SaveManifest_SerializeFile",
                             L"Failed to serialize manifest \'{0}\'.");
        pFVar29 = FTextFormat::FTextFormat(local_d8,pFVar28,Default);
        pFVar27 = FText::Format<FText>(&local_108,pFVar29,pFVar27);
        FText::operator=(*ppFVar15,pFVar27);
        if (local_108.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
        }
        if (local_f8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
        }
      }
    }
    pIVar5 = (pFVar14->LocFileNotifies).Object;
    if (pIVar5 != (ILocFileNotifies *)0x0) {
      (**(code **)((longlong)*pIVar5 + 0x30))(pIVar5,&local_3b0);
    }
    bVar19 = (bool)(bVar19 & bVar30);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar2);
    if (local_3b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b0.AllocatorInstance.Data);
    }
    TStack_1f0.UnvisitedBitMask = TStack_1f0.UnvisitedBitMask & ~TStack_1f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1f0);
  } while( true );
}

// SaveNativeArchive @ 146b877e0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall
FLocTextHelper::SaveNativeArchive(FLocTextHelper *this,FString *param_1,FText *param_2)

{
  bool bVar1;
  
  bVar1 = SaveArchive(this,&this->NativeCulture,param_1,param_2);
  return bVar1;
}

// SaveNativeArchive @ 146b87800

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall FLocTextHelper::SaveNativeArchive(FLocTextHelper *this,FText *param_1)

{
  bool bVar1;
  
  bVar1 = SaveArchive(this,&this->NativeCulture,param_1);
  return bVar1;
}

// SaveWordCountReport @ 146b87820

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FLocTextHelper::SaveWordCountReport
          (FLocTextHelper *this,FDateTime *param_1,FString *param_2,FText *param_3)

{
  ILocFileNotifies *pIVar1;
  bool bVar2;
  IFileManager *pIVar3;
  FText *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  wchar_t *pwVar7;
  bool bVar8;
  wchar_t *pwVar9;
  FLocTextWordCounts local_78;
  FString local_68;
  TStringView<wchar_t> local_58;
  FText local_48;
  FText local_38;
  FTextFormat local_28;
  
  bVar8 = false;
  pIVar1 = (this->LocFileNotifies).Object;
  if (pIVar1 != (ILocFileNotifies *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,param_2);
  }
  pwVar7 = L"";
  if ((param_2->Data).ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  GetWordCountReport(this,&local_78,param_1,pwVar9);
  FLocTextWordCounts::TrimReport(&local_78);
  FLocTextWordCounts::ToCSV(&local_78,&local_68);
  pIVar3 = IFileManager::Get();
  if ((param_2->Data).ArrayNum != 0) {
    pwVar7 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  local_58.Size = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    local_58.Size = 0;
  }
  local_58.DataPtr = (wchar_t *)local_68.Data.AllocatorInstance.Data;
  bVar2 = FFileHelper::SaveStringToFile(&local_58,pwVar7,AutoDetect,pIVar3,0);
  if (bVar2) {
    bVar8 = true;
  }
  else if (param_3 != (FText *)0x0) {
    pFVar4 = FText::FromString(&local_38,param_2);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_48,L"LocTextHelper",L"Error_SaveWordCountReport_SaveStringToFile",
                        L"Failed to save word count report \'{0}\'.");
    pFVar6 = FTextFormat::FTextFormat(&local_28,pFVar5,Default);
    pFVar4 = FText::Format<FText>((FText *)&local_58,pFVar6,pFVar4);
    FText::operator=(param_3,pFVar4);
    if ((FScriptContainerElement *)local_58.DataPtr != (FScriptContainerElement *)0x0) {
      (**(code **)(*(longlong *)local_58.DataPtr + 0x10))();
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  pIVar1 = (this->LocFileNotifies).Object;
  if (pIVar1 != (ILocFileNotifies *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,param_2);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  DestructItems<FLocTextWordCounts::FRowData,int>
            ((FRowData *)local_78.Rows.AllocatorInstance.Data,local_78.Rows.ArrayNum);
  if ((FRowData *)local_78.Rows.AllocatorInstance.Data != (FRowData *)0x0) {
    FMemory::Free(local_78.Rows.AllocatorInstance.Data);
  }
  return bVar8;
}

// SetCopyrightNotice @ 146b88740

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __thiscall FLocTextHelper::SetCopyrightNotice(FLocTextHelper *this,FString *param_1)

{
  ::FString::operator=(&this->CopyrightNotice,param_1);
  return;
}

// ShouldSplitPlatformData @ 146b88a70

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall FLocTextHelper::ShouldSplitPlatformData(FLocTextHelper *this)

{
  return this->PlatformSplitMode != None;
}

// SortManifest @ 146b88e00

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __thiscall FLocTextHelper::SortManifest(FLocTextHelper *this)

{
  code *pcVar1;
  bool bVar2;
  atomic<int> *paVar3;
  TSharedRef<FInternationalizationManifest,1> local_88;
  FString local_78;
  TSharedRef<FJsonInternationalizationManifestSerializer::FStructuredEntry,1> local_68;
  TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1> local_58;
  TSharedRef<FInternationalizationManifest_const_,1> local_48;
  TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1> local_38;
  TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry_const_,1> local_28 [2];
  
  if ((this->Manifest).Object == (FInternationalizationManifest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Manifest.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                       ,0x2aa,
                       L"Attempted to enumerate source texts, but no manifest has been loaded!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->Manifest).Object == (FInternationalizationManifest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_88.SharedReferenceCount.ReferenceController =
       (this->Manifest).SharedReferenceCount.ReferenceController;
  local_88.Object = (this->Manifest).Object;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_88.Object == (FInternationalizationManifest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  MakeShared<FJsonInternationalizationManifestSerializer::FStructuredEntry,1,FString>
            (&local_68,&local_78);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  local_58.Object = local_68.Object;
  local_58.SharedReferenceCount.ReferenceController =
       local_68.SharedReferenceCount.ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    paVar3 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar3 = &(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  }
  local_48.Object = local_88.Object;
  local_48.SharedReferenceCount.ReferenceController =
       local_88.SharedReferenceCount.ReferenceController;
  if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FJsonInternationalizationManifestSerializer::GenerateStructuredData(&local_48,&local_58);
  local_38.Object = local_68.Object;
  local_38.SharedReferenceCount.ReferenceController =
       local_68.SharedReferenceCount.ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  }
  FJsonInternationalizationManifestSerializer::SortStructuredData(&local_38);
  FInternationalizationManifest::ClearEntries(local_88.Object);
  local_28[0].Object = local_68.Object;
  local_28[0].SharedReferenceCount.ReferenceController =
       local_68.SharedReferenceCount.ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  }
  FJsonInternationalizationManifestSerializer::StructuredDataToManifest(local_28,&local_88);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.SharedReferenceCount.ReferenceController);
  return;
}

// TrimArchive @ 146b8ea00

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __thiscall FLocTextHelper::TrimArchive(FLocTextHelper *this,FString *param_1)

{
  TMap<FString,TSharedPtr<FInternationalizationArchive,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>_>
  *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *pTVar5;
  FInternationalizationArchive *local_78;
  FSharedReferencer<1> FStack_70;
  longlong local_68;
  TReferenceControllerBase<1> *pTStack_60;
  undefined8 local_58;
  FSharedReferencer<1> local_50;
  longlong local_48;
  FSharedReferencer<1> FStack_40;
  TSharedRef<FInternationalizationArchive,1> local_38;
  longlong *local_28;
  TSharedRef<FInternationalizationArchive,1> *local_20;
  code *local_18;
  longlong **local_10;
  
  if (((this->Manifest).Object == (FInternationalizationManifest *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Manifest.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                         ,0x342,
                         L"Attempted to trim an archive file, but no manifest has been loaded!"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = &this->Archives;
  pTVar5 = TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
                   *)this_00,param_1);
  if (pTVar5 == (TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *)0x0) {
    local_68 = 0;
    pTStack_60 = (TReferenceControllerBase<1> *)0x0;
LAB_146b8ea94:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Archive.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                       ,0x345,
                       L"Attempted to trim an archive file, but no valid archive could be found for \'%s\'!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    local_68 = *(longlong *)&pTVar5->field_0x10;
    pTStack_60 = *(TReferenceControllerBase<1> **)&pTVar5->field_0x18;
    if (pTStack_60 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_60->SharedReferenceCount = (atomic<int>)((int)pTStack_60->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_68 == 0) goto LAB_146b8ea94;
  }
  iVar4 = (this->NativeCulture).Data.ArrayNum;
  local_48 = 0;
  FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (1 < iVar4) {
    iVar1 = (param_1->Data).ArrayNum;
    if (iVar1 == iVar4) {
      if (iVar1 < 2) goto LAB_146b8ebbe;
      iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)(this->NativeCulture).Data.AllocatorInstance.Data);
      bVar3 = iVar4 == 0;
    }
    else {
      bVar3 = iVar4 + iVar1 == 1;
    }
    if (!bVar3) {
      pTVar5 = TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
                       *)this_00,&this->NativeCulture);
      if (pTVar5 == (TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *)0x0) {
        local_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_48 = 0;
      }
      else {
        local_48 = *(longlong *)&pTVar5->field_0x10;
        local_50.ReferenceController = *(TReferenceControllerBase<1> **)&pTVar5->field_0x18;
        if (local_50.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_50.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_50.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
      local_58 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_40,&local_50);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_50.ReferenceController);
      if ((local_48 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("NativeArchive.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                             ,0x34b,
                             L"Attempted to trim an archive file, but no valid archive could be found for \'%s\'!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
LAB_146b8ebbe:
  MakeShared<FInternationalizationArchive,1>(&local_38);
  local_28 = &local_68;
  local_20 = &local_38;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FLocTextHelper::TrimArchive'::__l2::<lambda_1>,bool,TSharedRef<FManifestEntry,1>_>
             ::Call;
  EnumerateSourceTexts
            (this,(TFunctionRef<bool___cdecl(TSharedRef<FManifestEntry,1>)> *)&local_18,true);
  local_78 = local_38.Object;
  FStack_70.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
                   *)this_00,param_1);
  if ((pTVar5 == (TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((FInternationalizationArchive **)&pTVar5->field_0x10 != &local_78) {
    *(FInternationalizationArchive **)&pTVar5->field_0x10 = local_78;
    local_78 = (FInternationalizationArchive *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pTVar5->field_0x18,&FStack_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_70.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_40.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  return;
}

// TrimManifest @ 146b8ecd0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLocTextHelper::TrimManifest(FLocTextHelper *this)

{
  FLocItem *pFVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *_Src;
  FLocMetadataObject *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  FManifestContext *pFVar12;
  FString *pFVar13;
  ulonglong uVar14;
  wchar_t *pwVar15;
  byte bVar16;
  FLocKey *pFVar17;
  FLocKey *pFVar18;
  TSharedPtr<FInternationalizationManifest,1> *pTVar19;
  longlong lVar20;
  FManifestEntry *this_00;
  FManifestContext *pFVar21;
  uint local_res10 [2];
  uint local_res18;
  FLocKey *local_res20;
  FString local_3d8;
  TSharedPtr<FManifestEntry,1> local_3c8;
  FString local_3b8;
  FInternationalizationManifest *local_3a8;
  FSharedReferencer<1> FStack_3a0;
  FScriptContainerElement *local_398;
  TLogFieldName<char_const_(&)[21]> local_390;
  FScriptContainerElement *local_388;
  TLogFieldName<char_const_(&)[13]> local_380;
  FScriptContainerElement *local_378;
  TLogFieldName<char_const_(&)[17]> local_370;
  FScriptContainerElement *local_368;
  TLogFieldName<char_const_(&)[13]> local_360;
  FScriptContainerElement *local_358;
  TLogFieldName<char_const_(&)[5]> local_350;
  FScriptContainerElement *local_348;
  TLogFieldName<char_const_(&)[15]> local_340;
  FScriptContainerElement *local_338;
  TLogFieldName<char_const_(&)[7]> local_330;
  FScriptContainerElement *local_328;
  TLogFieldName<char_const_(&)[13]> local_320;
  TLogFieldName<char_const_(&)[3]> local_318;
  FScriptContainerElement *local_310;
  TLogFieldName<char_const_(&)[13]> local_308;
  FScriptContainerElement *local_300;
  TLogFieldName<char_const_(&)[5]> local_2f8;
  FScriptContainerElement *local_2f0;
  TLogFieldName<char_const_(&)[15]> local_2e8;
  FScriptContainerElement *local_2e0;
  TLogFieldName<char_const_(&)[7]> local_2d8;
  FScriptContainerElement *local_2d0;
  FScriptContainerElement *local_2c8;
  TLogFieldName<char_const_(&)[5]> local_2c0;
  FManifestContext *local_2b8;
  TSharedPtr<FInternationalizationManifest,1> *local_2a8;
  TLogFieldName<char_const_(&)[13]> local_2a0;
  TLogFieldName<char_const_(&)[3]> local_298;
  undefined8 local_290;
  FSharedReferencer<1> local_288;
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  FString local_240;
  TSharedRef<FInternationalizationManifest,1> local_228;
  longlong *local_218;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_210;
  FScriptContainerElement *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  TSharedPtr<FLocMetadataObject,1> local_1d8;
  FScriptContainerElement *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  TSharedPtr<FLocMetadataObject,1> local_1b8;
  FScriptContainerElement *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  FScriptContainerElement *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  FString local_188;
  TSharedPtr<FLocMetadataObject,1> local_178;
  TSharedPtr<FLocMetadataObject,1> local_168;
  TSharedPtr<FLocMetadataObject,1> local_158;
  TStringView<wchar_t> local_148;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  TStringView<wchar_t> local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  bVar16 = 0;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  local_res10[0] = 0;
  if (0 < (this->Dependencies).ArrayNum) {
    MakeShared<FInternationalizationManifest,1>(&local_228);
    pTVar19 = &this->Manifest;
    local_2a8 = pTVar19;
    if ((pTVar19->Object == (FInternationalizationManifest *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FInternationalizationManifest::GetEntriesBySourceTextIterator
              (pTVar19->Object,(TConstIterator *)&local_218);
    if (local_210.CurrentBitIndex < (local_210.Array)->NumBits) {
      do {
        pTVar3 = *(TReferenceControllerBase<1> **)
                  (*local_218 + 0x18 + (longlong)local_210.CurrentBitIndex * 0x28);
        local_res20 = *(FLocKey **)(*local_218 + 0x10 + (longlong)local_210.CurrentBitIndex * 0x28);
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_res18 = local_res20[2].Hash;
        uVar14 = (ulonglong)(int)local_res18;
        pFVar21 = *(FManifestContext **)&local_res20[2].Str.Data.ArrayNum;
        local_2b8 = pFVar21 + uVar14;
        pFVar17 = local_res20;
        while( true ) {
          pFVar12 = local_2b8;
          if (pFVar17[2].Hash != (uint)uVar14) {
            local_res10[0] = local_res10[0] & 0xffffff00;
            `TCheckedPointerIterator<FManifestContext,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res10);
          }
          if (pFVar21 == pFVar12) break;
          local_3d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3d8.Data.ArrayNum = 0;
          local_3d8.Data.ArrayMax = 0;
          FindDependencyEntry(this,&local_3c8,pFVar17,pFVar21,&local_3d8);
          this_00 = local_3c8.Object;
          bVar11 = local_3c8.Object == (FManifestEntry *)0x0;
          if (!bVar11) {
            if ((local_3c8.Object == (FManifestEntry *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar12 = FManifestEntry::FindContext(this_00,&pFVar21->Key,&pFVar21->KeyMetadataObj);
            if (pFVar21->PlatformName != pFVar12->PlatformName) {
              local_288.ReferenceController = (TReferenceControllerBase<1> *)0x0;
              local_3c8.Object = (FManifestEntry *)0x0;
              local_290 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&local_3c8.SharedReferenceCount,&local_288);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_288.ReferenceController);
              ::FString::Reset(&local_3d8,0);
              this_00 = local_3c8.Object;
            }
            bVar11 = this_00 == (FManifestEntry *)0x0;
          }
          pFVar18 = pFVar17;
          if (this_00 == (FManifestEntry *)0x0) {
            bVar11 = FInternationalizationManifest::AddSource
                               (local_228.Object,pFVar17,(FLocItem *)(pFVar17 + 1),pFVar21);
            if ((!bVar11) && (1 < (byte)LogLocTextHelper._0_1_)) {
              local_318.Name = (char (*) [3])&s_id;
              pFVar4 = *(FLocMetadataObject **)&pFVar17[1].Hash;
              if (pFVar4 == (FLocMetadataObject *)0x0) {
                local_310 = (FScriptContainerElement *)L"";
              }
              else {
                local_178.SharedReferenceCount.ReferenceController =
                     (TReferenceControllerBase<1> *)pFVar17[2].Str.Data.AllocatorInstance.Data;
                if (local_178.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_178.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_178.Object = pFVar4;
                FJsonInternationalizationMetaDataSerializer::MetadataToString(&local_68,&local_178);
                bVar10 = true;
                bVar9 = true;
                ::FString::PrintfImpl(&local_240,L" (meta-data \"%s\")");
                local_310 = (FScriptContainerElement *)L"";
                if (local_240.Data.ArrayNum != 0) {
                  local_310 = local_240.Data.AllocatorInstance.Data;
                }
              }
              local_308.Name = (char (*) [13])0x1513ff980;
              if (pFVar17[1].Str.Data.ArrayNum == 0) {
                local_300 = (FScriptContainerElement *)0x15060d16c;
              }
              else {
                local_300 = pFVar17[1].Str.Data.AllocatorInstance.Data;
              }
              local_2f8.Name = (char (*) [5])0x1513ff990;
              pFVar4 = (pFVar21->KeyMetadataObj).Object;
              if (pFVar4 == (FLocMetadataObject *)0x0) {
                local_2f0 = (FScriptContainerElement *)L"";
              }
              else {
                local_168.SharedReferenceCount.ReferenceController =
                     (pFVar21->KeyMetadataObj).SharedReferenceCount.ReferenceController;
                if (local_168.SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_168.SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                local_168.Object = pFVar4;
                FJsonInternationalizationMetaDataSerializer::MetadataToString(&local_78,&local_168);
                bVar8 = true;
                bVar7 = true;
                ::FString::PrintfImpl(&local_250,L" (meta-data \"%s\")");
                local_2f0 = (FScriptContainerElement *)L"";
                if (local_250.Data.ArrayNum != 0) {
                  local_2f0 = local_250.Data.AllocatorInstance.Data;
                }
              }
              local_2e8.Name = (char (*) [15])0x1513ff998;
              if ((pFVar21->Key).Str.Data.ArrayNum == 0) {
                local_2e0 = (FScriptContainerElement *)0x15060d16c;
              }
              else {
                local_2e0 = (pFVar21->Key).Str.Data.AllocatorInstance.Data;
              }
              local_2d8.Name = (char (*) [7])0x1513ff9a8;
              if ((pFVar17->Str).Data.ArrayNum == 0) {
                local_2d0 = (FScriptContainerElement *)0x15060d16c;
              }
              else {
                local_2d0 = (pFVar17->Str).Data.AllocatorInstance.Data;
              }
              local_2a0.Name = (char (*) [13])0x1513ff9b0;
              local_2c8 = (FScriptContainerElement *)L"";
              if (local_3d8.Data.ArrayNum != 0) {
                local_2c8 = local_3d8.Data.AllocatorInstance.Data;
              }
              local_2c0.Name = (char (*) [5])&s_file;
              UE::Logging::Private::
              LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[7]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[15]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
                        ((FLogCategoryBase *)&LogLocTextHelper,&::LOG_Static,&local_2c0,
                         (wchar_t **)&local_2c8,&local_2a0,(wchar_t **)&local_2d0,&local_2d8,
                         (wchar_t **)&local_2e0,&local_2e8,(wchar_t **)&local_2f0,&local_2f8,
                         (wchar_t **)&local_300,&local_308,(wchar_t **)&local_310,&local_318,
                         &LocTextHelper::LocalizationLogIdentifier);
              if ((bVar7) &&
                 (bVar7 = false,
                 local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_250.Data.AllocatorInstance.Data);
              }
              if ((bVar8) &&
                 (bVar8 = false,
                 local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_78.Data.AllocatorInstance.Data);
              }
              if ((bVar9) &&
                 (bVar9 = false,
                 local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_240.Data.AllocatorInstance.Data);
              }
              if ((bVar10) &&
                 (bVar10 = false,
                 local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_68.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            if ((bVar11) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar11)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar1 = (FLocItem *)(pFVar17 + 1);
            bVar11 = FLocItem::IsExactMatch(&this_00->Source,pFVar1);
            if (!bVar11) {
              if ((this_00 == (FManifestEntry *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar12 = FManifestEntry::FindContext(this_00,&pFVar21->Key,&pFVar21->KeyMetadataObj);
              if (local_3d8.Data.ArrayNum < 2) {
                pFVar13 = &pFVar12->SourceLocation;
              }
              else {
                pFVar13 = &local_3d8;
              }
              local_3b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_3b8.Data.ArrayNum = (pFVar13->Data).ArrayNum;
              lVar20 = (longlong)local_3b8.Data.ArrayNum;
              _Src = (pFVar13->Data).AllocatorInstance.Data;
              if (local_3b8.Data.ArrayNum == 0) {
                local_3b8.Data.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_3b8.Data.ArrayNum,0,(ForAnyElementType *)&local_3b8,
                           local_3b8.Data.ArrayNum,&local_3b8.Data.ArrayMax);
                memcpy(local_3b8.Data.AllocatorInstance.Data,_Src,lVar20 * 2);
              }
              pFVar18 = local_res20;
              if (2 < (byte)LogLocTextHelper._0_1_) {
                local_298.Name = (char (*) [3])&s_id;
                if ((this_00 == (FManifestEntry *)0x0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                pFVar4 = (this_00->Source).MetadataObj.Object;
                if (pFVar4 == (FLocMetadataObject *)0x0) {
                  local_398 = (FScriptContainerElement *)L"";
                }
                else {
                  local_158.SharedReferenceCount.ReferenceController =
                       (this_00->Source).MetadataObj.SharedReferenceCount.ReferenceController;
                  if (local_158.SharedReferenceCount.ReferenceController !=
                      (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                         (atomic<int>)
                         ((int)(local_158.SharedReferenceCount.ReferenceController)->
                               SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  local_158.Object = pFVar4;
                  pFVar13 = FJsonInternationalizationMetaDataSerializer::MetadataToString
                                      (&local_88,&local_158);
                  SanitizeLogOutput(&local_98,pFVar13);
                  bVar16 = bVar16 | 7;
                  ::FString::PrintfImpl(&local_260,L" (meta-data \"%s\")");
                  local_398 = (FScriptContainerElement *)L"";
                  if (local_260.Data.ArrayNum != 0) {
                    local_398 = local_260.Data.AllocatorInstance.Data;
                  }
                }
                local_390.Name = (char (*) [21])0x1513ff940;
                local_1e8 = (this_00->Source).Text.Data.AllocatorInstance.Data;
                iVar2 = (this_00->Source).Text.Data.ArrayNum;
                iStack_1e0 = iVar2 + -1;
                if (iVar2 == 0) {
                  iStack_1e0 = 0;
                }
                local_d8._12_4_ = uStack_1dc;
                local_d8.Size = iStack_1e0;
                local_d8.DataPtr = (wchar_t *)local_1e8;
                pFVar13 = SanitizeLogOutput(&local_a8,&local_d8);
                pFVar18 = local_res20;
                if ((pFVar13->Data).ArrayNum == 0) {
                  local_388 = (FScriptContainerElement *)0x15060d16c;
                }
                else {
                  local_388 = (pFVar13->Data).AllocatorInstance.Data;
                }
                local_380.Name = (char (*) [13])0x1513ff958;
                local_378 = (FScriptContainerElement *)L"";
                if (local_3d8.Data.ArrayNum != 0) {
                  local_378 = local_3d8.Data.AllocatorInstance.Data;
                }
                local_370.Name = (char (*) [17])0x1513ff968;
                pFVar4 = *(FLocMetadataObject **)&local_res20[1].Hash;
                if (pFVar4 == (FLocMetadataObject *)0x0) {
                  local_368 = (FScriptContainerElement *)L"";
                }
                else {
                  local_1d8.SharedReferenceCount.ReferenceController =
                       (TReferenceControllerBase<1> *)local_res20[2].Str.Data.AllocatorInstance.Data
                  ;
                  if (local_1d8.SharedReferenceCount.ReferenceController !=
                      (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    (local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                         (atomic<int>)
                         ((int)(local_1d8.SharedReferenceCount.ReferenceController)->
                               SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  local_1d8.Object = pFVar4;
                  pFVar13 = FJsonInternationalizationMetaDataSerializer::MetadataToString
                                      (&local_b8,&local_1d8);
                  SanitizeLogOutput(&local_c8,pFVar13);
                  bVar16 = bVar16 | 0x38;
                  ::FString::PrintfImpl(&local_270,L" (meta-data \"%s\")");
                  local_368 = (FScriptContainerElement *)L"";
                  if (local_270.Data.ArrayNum != 0) {
                    local_368 = local_270.Data.AllocatorInstance.Data;
                  }
                }
                local_360.Name = (char (*) [13])0x1513ff980;
                local_1c8 = (pFVar1->Text).Data.AllocatorInstance.Data;
                iVar2 = pFVar17[1].Str.Data.ArrayNum;
                iStack_1c0 = iVar2 + -1;
                if (iVar2 == 0) {
                  iStack_1c0 = 0;
                }
                local_148._12_4_ = uStack_1bc;
                local_148.Size = iStack_1c0;
                local_148.DataPtr = (wchar_t *)local_1c8;
                pFVar13 = SanitizeLogOutput(&local_58,&local_148);
                if ((pFVar13->Data).ArrayNum == 0) {
                  local_358 = (FScriptContainerElement *)0x15060d16c;
                }
                else {
                  local_358 = (pFVar13->Data).AllocatorInstance.Data;
                }
                local_350.Name = (char (*) [5])0x1513ff990;
                pFVar4 = (pFVar21->KeyMetadataObj).Object;
                if (pFVar4 == (FLocMetadataObject *)0x0) {
                  local_348 = (FScriptContainerElement *)L"";
                }
                else {
                  local_1b8.SharedReferenceCount.ReferenceController =
                       (pFVar21->KeyMetadataObj).SharedReferenceCount.ReferenceController;
                  if (local_1b8.SharedReferenceCount.ReferenceController !=
                      (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    (local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                         (atomic<int>)
                         ((int)(local_1b8.SharedReferenceCount.ReferenceController)->
                               SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  local_1b8.Object = pFVar4;
                  pFVar13 = FJsonInternationalizationMetaDataSerializer::MetadataToString
                                      (&local_e8,&local_1b8);
                  SanitizeLogOutput(&local_f8,pFVar13);
                  bVar16 = bVar16 | 0xc0;
                  bVar6 = true;
                  ::FString::PrintfImpl(&local_280,L" (meta-data \"%s\")");
                  local_348 = (FScriptContainerElement *)L"";
                  if (local_280.Data.ArrayNum != 0) {
                    local_348 = local_280.Data.AllocatorInstance.Data;
                  }
                }
                local_340.Name = (char (*) [15])0x1513ff998;
                local_1a8 = (pFVar21->Key).Str.Data.AllocatorInstance.Data;
                iVar2 = (pFVar21->Key).Str.Data.ArrayNum;
                iStack_1a0 = iVar2 + -1;
                if (iVar2 == 0) {
                  iStack_1a0 = 0;
                }
                local_138._12_4_ = uStack_19c;
                local_138.Size = iStack_1a0;
                local_138.DataPtr = (wchar_t *)local_1a8;
                pFVar13 = SanitizeLogOutput(&local_108,&local_138);
                if ((pFVar13->Data).ArrayNum == 0) {
                  local_338 = (FScriptContainerElement *)0x15060d16c;
                }
                else {
                  local_338 = (pFVar13->Data).AllocatorInstance.Data;
                }
                local_330.Name = (char (*) [7])0x1513ff9a8;
                local_198 = (pFVar18->Str).Data.AllocatorInstance.Data;
                iVar2 = (pFVar18->Str).Data.ArrayNum;
                iStack_190 = iVar2 + -1;
                if (iVar2 == 0) {
                  iStack_190 = 0;
                }
                local_128._12_4_ = uStack_18c;
                local_128.Size = iStack_190;
                local_128.DataPtr = (wchar_t *)local_198;
                pFVar13 = SanitizeLogOutput(&local_118,&local_128);
                if ((pFVar13->Data).ArrayNum == 0) {
                  local_328 = (FScriptContainerElement *)0x15060d16c;
                }
                else {
                  local_328 = (pFVar13->Data).AllocatorInstance.Data;
                }
                local_320.Name = (char (*) [13])0x1513ff9b0;
                UE::Logging::Private::
                LogWithFields<UE::Logging::Private::FStaticLogRecord,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[7]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[15]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[5]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[17]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[13]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[21]>,wchar_t_const_*,UE::Logging::Private::TLogFieldName<char_const_(&)[3]>,int_const_&>
                          ((FLogCategoryBase *)&LogLocTextHelper,&::LOG_Static,&local_320,
                           (wchar_t **)&local_328,&local_330,(wchar_t **)&local_338,&local_340,
                           (wchar_t **)&local_348,&local_350,(wchar_t **)&local_358,&local_360,
                           (wchar_t **)&local_368,&local_370,(wchar_t **)&local_378,&local_380,
                           (wchar_t **)&local_388,&local_390,(wchar_t **)&local_398,&local_298,
                           &LocTextHelper::LocalizationLogIdentifier);
                if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_118.Data.AllocatorInstance.Data);
                }
                if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_108.Data.AllocatorInstance.Data);
                }
                if ((bVar6) &&
                   (bVar6 = false,
                   local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_280.Data.AllocatorInstance.Data);
                }
                if (((char)bVar16 < '\0') &&
                   (bVar16 = bVar16 & 0x7f,
                   local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_f8.Data.AllocatorInstance.Data);
                }
                if (((bVar16 & 0x40) != 0) &&
                   (bVar16 = bVar16 & 0xbf,
                   local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_e8.Data.AllocatorInstance.Data);
                }
                if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_58.Data.AllocatorInstance.Data);
                }
                if (((bVar16 & 0x20) != 0) &&
                   (bVar16 = bVar16 & 0xdf,
                   local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_270.Data.AllocatorInstance.Data);
                }
                if (((bVar16 & 0x10) != 0) &&
                   (bVar16 = bVar16 & 0xef,
                   local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_c8.Data.AllocatorInstance.Data);
                }
                if (((bVar16 & 8) != 0) &&
                   (bVar16 = bVar16 & 0xf7,
                   local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_b8.Data.AllocatorInstance.Data);
                }
                if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                }
                if (((bVar16 & 4) != 0) &&
                   (bVar16 = bVar16 & 0xfb,
                   local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_260.Data.AllocatorInstance.Data);
                }
                if (((bVar16 & 2) != 0) &&
                   (bVar16 = bVar16 & 0xfd,
                   local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_98.Data.AllocatorInstance.Data);
                }
                if (((bVar16 & 1) != 0) &&
                   (bVar16 = bVar16 & 0xfe,
                   local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_88.Data.AllocatorInstance.Data);
                }
              }
              if ((pFVar21->SourceLocation).Data.ArrayNum == 0) {
                pwVar15 = L"";
              }
              else {
                pwVar15 = (wchar_t *)(pFVar21->SourceLocation).Data.AllocatorInstance.Data;
              }
              ::FString::FString(&local_188,pwVar15);
              FLocTextConflicts::AddConflict
                        (&this->ConflictTracker,pFVar18,&pFVar21->Key,&pFVar21->KeyMetadataObj,
                         pFVar1,&local_188);
              if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_188.Data.AllocatorInstance.Data);
              }
              if ((this_00 == (FManifestEntry *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar11)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              FLocTextConflicts::AddConflict
                        (&this->ConflictTracker,pFVar18,&pFVar21->Key,&pFVar21->KeyMetadataObj,
                         &this_00->Source,&local_3b8);
              if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
              }
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_3c8.SharedReferenceCount.ReferenceController);
          if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
          }
          pFVar21 = pFVar21 + 1;
          uVar14 = (ulonglong)local_res18;
          pFVar17 = pFVar18;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        local_210.UnvisitedBitMask = local_210.UnvisitedBitMask & ~local_210._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_210);
        pTVar19 = local_2a8;
      } while (local_210.CurrentBitIndex < (local_210.Array)->NumBits);
    }
    local_3a8 = local_228.Object;
    FStack_3a0.ReferenceController = local_228.SharedReferenceCount.ReferenceController;
    if (local_228.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_228.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_228.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar19 != (TSharedPtr<FInternationalizationManifest,1> *)&local_3a8) {
      pTVar19->Object = local_228.Object;
      local_3a8 = (FInternationalizationManifest *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&pTVar19->SharedReferenceCount,&FStack_3a0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_3a0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_228.SharedReferenceCount.ReferenceController);
  }
  return;
}

// UpdateSourceText @ 146b90840

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __thiscall
FLocTextHelper::UpdateSourceText
          (FLocTextHelper *this,TSharedRef<FManifestEntry,1> *param_1,
          TSharedRef<FManifestEntry,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Manifest).Object == (FInternationalizationManifest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Manifest.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                       ,0x3ff,L"Attempted to update source text, but no manifest has been loaded!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->Manifest).Object == (FInternationalizationManifest *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FInternationalizationManifest::UpdateEntry((this->Manifest).Object,param_1,param_2);
  return;
}

// UpdateTranslation @ 146b90a30

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __thiscall
FLocTextHelper::UpdateTranslation
          (FLocTextHelper *this,FString *param_1,TSharedRef<FArchiveEntry,1> *param_2,
          TSharedRef<FArchiveEntry,1> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *pTVar3;
  FInternationalizationArchive *this_00;
  FInternationalizationArchive *pFVar4;
  
  pTVar3 = TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
                   *)&this->Archives,param_1);
  if (pTVar3 == (TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *)0x0) {
    this_00 = (FInternationalizationArchive *)0x0;
    pFVar4 = this_00;
  }
  else {
    pFVar4 = *(FInternationalizationArchive **)&pTVar3->field_0x18;
    this_00 = *(FInternationalizationArchive **)&pTVar3->field_0x10;
    if (pFVar4 != (FInternationalizationArchive *)0x0) {
      LOCK();
      *(int *)&pFVar4->EntriesBySourceText = *(int *)&pFVar4->EntriesBySourceText + 1;
      UNLOCK();
    }
    if (this_00 != (FInternationalizationArchive *)0x0) goto LAB_146b90ae8;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Archive.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                     ,0x46a,
                     L"Attempted to update a translation, but no valid archive could be found for \'%s\'!"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this_00 == (FInternationalizationArchive *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_146b90ae8:
  FInternationalizationArchive::UpdateEntry(this_00,param_2,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  return;
}

// UpdateTranslation @ 146b90b20

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall
FLocTextHelper::UpdateTranslation
          (FLocTextHelper *this,FString *param_1,FLocKey *param_2,FLocKey *param_3,
          TSharedPtr<FLocMetadataObject,1> *param_4,FLocItem *param_5,FLocItem *param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *pTVar4;
  FInternationalizationArchive *this_00;
  FInternationalizationArchive *pFVar5;
  TSharedPtr<FLocMetadataObject,1> local_18;
  
  pTVar4 = TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FInternationalizationArchive,1>,0>,FDefaultSetAllocator>
                   *)&this->Archives,param_1);
  if (pTVar4 == (TTuple<FString,TSharedPtr<FInternationalizationArchive,1>_> *)0x0) {
    this_00 = (FInternationalizationArchive *)0x0;
    pFVar5 = this_00;
  }
  else {
    pFVar5 = *(FInternationalizationArchive **)&pTVar4->field_0x18;
    this_00 = *(FInternationalizationArchive **)&pTVar4->field_0x10;
    if (pFVar5 != (FInternationalizationArchive *)0x0) {
      LOCK();
      *(int *)&pFVar5->EntriesBySourceText = *(int *)&pFVar5->EntriesBySourceText + 1;
      UNLOCK();
    }
    if (this_00 != (FInternationalizationArchive *)0x0) goto LAB_146b90bd8;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Archive.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocTextHelper.cpp"
                     ,0x463,
                     L"Attempted to update a translation, but no valid archive could be found for \'%s\'!"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((this_00 == (FInternationalizationArchive *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
LAB_146b90bd8:
  local_18.Object = param_4->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_4->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar2 = FInternationalizationArchive::SetTranslation
                    (this_00,param_2,param_3,param_5,param_6,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return bVar2;
}

