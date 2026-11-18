// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TranslationEditor
// Functions: 19

// FTranslationDataManager @ 146b97c90

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

FTranslationDataManager * __thiscall
FTranslationDataManager::FTranslationDataManager
          (FTranslationDataManager *this,FString *param_1,FString *param_2,FString *param_3)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FTranslationDataManager__6B_;
  (this->AllTranslations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllTranslations).ArrayNum = 0;
  (this->AllTranslations).ArrayMax = 0;
  (this->Untranslated).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Untranslated).ArrayNum = 0;
  (this->Untranslated).ArrayMax = 0;
  (this->Review).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Review).ArrayNum = 0;
  (this->Review).ArrayMax = 0;
  (this->Complete).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Complete).ArrayNum = 0;
  (this->Complete).ArrayMax = 0;
  (this->SearchResults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchResults).ArrayNum = 0;
  (this->SearchResults).ArrayMax = 0;
  (this->ChangedOnImport).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChangedOnImport).ArrayNum = 0;
  (this->ChangedOnImport).ArrayMax = 0;
  (this->NativeArchivePtr).Object = (FInternationalizationArchive *)0x0;
  (this->NativeArchivePtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ArchivePtr).Object = (FInternationalizationArchive *)0x0;
  (this->ArchivePtr).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ManifestAtHeadRevisionPtr).Object = (FInternationalizationManifest *)0x0;
  (this->ManifestAtHeadRevisionPtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ManifestName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManifestName).Data.ArrayNum = 0;
  (this->ManifestName).Data.ArrayMax = 0;
  (this->ProjectPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProjectPath).Data.ArrayNum = 0;
  (this->ProjectPath).Data.ArrayMax = 0;
  (this->ArchiveName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArchiveName).Data.ArrayNum = 0;
  (this->ArchiveName).Data.ArrayMax = 0;
  (this->CulturePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CulturePath).Data.ArrayNum = 0;
  (this->CulturePath).Data.ArrayMax = 0;
  ::FString::FString(&this->OpenedManifestFilePath,param_1);
  ::FString::FString(&this->NativeArchiveFilePath,param_2);
  ::FString::FString(&this->OpenedArchiveFilePath,param_3);
  (this->CheckedOutFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CheckedOutFiles).ArrayNum = 0;
  (this->CheckedOutFiles).ArrayMax = 0;
  (this->AssociatedLocalizationTarget).WeakPtr = (FWeakObjectPtr)0x0;
  this->bLoadedSuccessfully = true;
  Initialize(this);
  return this;
}

// FTranslationDataManager @ 146b97dc0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

FTranslationDataManager * __thiscall
FTranslationDataManager::FTranslationDataManager
          (FTranslationDataManager *this,ULocalizationTarget *param_1,FString *param_2)

{
  int *piVar1;
  FString *pFVar2;
  FString *pFVar3;
  FString *pFVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FTranslationDataManager *pFVar14;
  FString *pFVar15;
  FScriptContainerElement *_Src;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  ForAnyElementType local_48 [2];
  
  _Src = (FScriptContainerElement *)0x0;
  this->bLoadedSuccessfully = true;
  this->_padding_ = 0;
  pFVar2 = &this->OpenedArchiveFilePath;
  (this->OpenedArchiveFilePath).Data.ArrayMax = 0;
  pFVar3 = &this->OpenedManifestFilePath;
  this->_padding_ = 0;
  pFVar4 = &this->NativeArchiveFilePath;
  (this->AllTranslations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->OpenedArchiveFilePath).Data.ArrayMax;
  (this->AllTranslations).ArrayNum = 0;
  (this->AllTranslations).ArrayMax = 0;
  this->_padding_ = (longlong)&___7FTranslationDataManager__6B_;
  (this->Untranslated).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Untranslated).ArrayNum = 0;
  (this->Untranslated).ArrayMax = 0;
  (this->Review).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Review).ArrayNum = 0;
  (this->Review).ArrayMax = 0;
  (this->Complete).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Complete).ArrayNum = 0;
  (this->Complete).ArrayMax = 0;
  (this->SearchResults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SearchResults).ArrayNum = 0;
  (this->SearchResults).ArrayMax = 0;
  (this->ChangedOnImport).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChangedOnImport).ArrayNum = 0;
  (this->ChangedOnImport).ArrayMax = 0;
  (this->NativeArchivePtr).Object = (FInternationalizationArchive *)0x0;
  (this->NativeArchivePtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ArchivePtr).Object = (FInternationalizationArchive *)0x0;
  (this->ArchivePtr).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ManifestAtHeadRevisionPtr).Object = (FInternationalizationManifest *)0x0;
  (this->ManifestAtHeadRevisionPtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ManifestName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManifestName).Data.ArrayNum = 0;
  (this->ManifestName).Data.ArrayMax = 0;
  (this->ProjectPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProjectPath).Data.ArrayNum = 0;
  (this->ProjectPath).Data.ArrayMax = 0;
  (this->ArchiveName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ArchiveName).Data.ArrayNum = 0;
  (this->ArchiveName).Data.ArrayMax = 0;
  (this->CulturePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CulturePath).Data.ArrayNum = 0;
  (this->CulturePath).Data.ArrayMax = 0;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpenedManifestFilePath).Data.ArrayNum = 0;
  (this->OpenedManifestFilePath).Data.ArrayMax = 0;
  (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NativeArchiveFilePath).Data.ArrayNum = 0;
  (this->NativeArchiveFilePath).Data.ArrayMax = 0;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OpenedArchiveFilePath).Data.ArrayNum = 0;
  (this->CheckedOutFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CheckedOutFiles).ArrayNum = 0;
  (this->CheckedOutFiles).ArrayMax = 0;
  (this->AssociatedLocalizationTarget).WeakPtr = (FWeakObjectPtr)0x0;
  if (param_1 == (ULocalizationTarget *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("LocalizationTarget",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationDataManager.cpp"
                        ,0x5a,L"");
    if (bVar11) {
      pcVar9 = (code *)swi(3);
      pFVar14 = (FTranslationDataManager *)(*pcVar9)();
      return pFVar14;
    }
  }
  LocalizationConfigurationScript::GetManifestPath(&local_68,param_1);
  uVar6 = (param_1->Settings).NativeCultureIndex;
  local_88.Data.ArrayNum = 0;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayMax = 0;
  if ((-1 < (int)uVar6) && ((int)uVar6 < (param_1->Settings).SupportedCulturesStatistics.ArrayNum))
  {
    uVar12 = 0;
    if ((int)uVar6 < (param_1->Settings).SupportedCulturesStatistics.ArrayNum) {
      uVar12 = ~uVar6 >> 0x1f;
    }
    if (uVar12 == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar9 = (code *)swi(3);
        pFVar14 = (FTranslationDataManager *)(*pcVar9)();
        return pFVar14;
      }
    }
    pFVar8 = (param_1->Settings).SupportedCulturesStatistics.AllocatorInstance.Data;
    iVar13 = *(int *)(pFVar8 + (longlong)(int)uVar6 * 0x18 + 8);
    uVar12 = iVar13 - 1;
    if (iVar13 == 0) {
      uVar12 = 0;
    }
    ::FString::AssignRange(&local_88,*(wchar_t **)(pFVar8 + (longlong)(int)uVar6 * 0x18),uVar12);
  }
  if (local_88.Data.ArrayNum < 2) {
    iVar13 = 0;
  }
  else {
    pFVar15 = LocalizationConfigurationScript::GetArchivePath(&local_58,param_1,&local_88);
    _Src = (pFVar15->Data).AllocatorInstance.Data;
    (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar13 = (pFVar15->Data).ArrayNum;
    (pFVar15->Data).ArrayNum = 0;
    (pFVar15->Data).ArrayMax = 0;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  LocalizationConfigurationScript::GetArchivePath(&local_78,param_1,param_2);
  FVar10.Data = local_68.Data.AllocatorInstance.Data;
  if (pFVar3 != &local_68) {
    piVar5 = &(this->OpenedManifestFilePath).Data.ArrayMax;
    iVar7 = *piVar5;
    (this->OpenedManifestFilePath).Data.ArrayNum = local_68.Data.ArrayNum;
    if ((local_68.Data.ArrayNum == 0) && (iVar7 == 0)) {
      *piVar5 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,iVar7,(ForAnyElementType *)pFVar3,local_68.Data.ArrayNum
                 ,piVar5);
      if (local_68.Data.ArrayNum != 0) {
        memcpy((pFVar3->Data).AllocatorInstance.Data,FVar10.Data,
               (longlong)local_68.Data.ArrayNum * 2);
      }
    }
  }
  if (pFVar4 != (FString *)local_48) {
    iVar7 = (this->NativeArchiveFilePath).Data.ArrayMax;
    piVar5 = &(this->NativeArchiveFilePath).Data.ArrayMax;
    (this->NativeArchiveFilePath).Data.ArrayNum = iVar13;
    if ((iVar13 == 0) && (iVar7 == 0)) {
      *piVar5 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar13,iVar7,(ForAnyElementType *)pFVar4,iVar13,piVar5);
      if (iVar13 != 0) {
        memcpy((pFVar4->Data).AllocatorInstance.Data,_Src,(longlong)iVar13 * 2);
      }
    }
  }
  FVar10.Data = local_78.Data.AllocatorInstance.Data;
  if (pFVar2 != &local_78) {
    iVar13 = *piVar1;
    (this->OpenedArchiveFilePath).Data.ArrayNum = local_78.Data.ArrayNum;
    if ((local_78.Data.ArrayNum == 0) && (iVar13 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_78.Data.ArrayNum,iVar13,(ForAnyElementType *)pFVar2,
                 local_78.Data.ArrayNum,piVar1);
      if (local_78.Data.ArrayNum != 0) {
        memcpy((pFVar2->Data).AllocatorInstance.Data,FVar10.Data,
               (longlong)local_78.Data.ArrayNum * 2);
      }
    }
  }
  Initialize(this);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (_Src != (FScriptContainerElement *)0x0) {
    FMemory::Free(_Src);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FTranslationDataManager @ 146b98ec0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FTranslationDataManager::~FTranslationDataManager(FTranslationDataManager *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  FUObjectItem *this_00;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&___7FTranslationDataManager__6B_;
  pFVar5 = (this->AllTranslations).AllocatorInstance.Data;
  iVar2 = (this->AllTranslations).ArrayNum;
  pFVar3 = pFVar5 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->AllTranslations).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UTranslationUnit_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar3) break;
    this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(*(longlong *)pFVar5 + 0xc));
    FUObjectItem::ClearRootFlags(this_00,RootSet);
    pFVar5 = pFVar5 + 8;
  }
  DestructItems<FString,int>
            ((FString *)(this->CheckedOutFiles).AllocatorInstance.Data,
             (this->CheckedOutFiles).ArrayNum);
  pFVar3 = (this->CheckedOutFiles).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->OpenedArchiveFilePath).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->NativeArchiveFilePath).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->OpenedManifestFilePath).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->CulturePath).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ArchiveName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ProjectPath).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ManifestName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ManifestAtHeadRevisionPtr).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ArchivePtr).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NativeArchivePtr).SharedReferenceCount.ReferenceController);
  pFVar3 = (this->ChangedOnImport).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->SearchResults).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Complete).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Review).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Untranslated).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->AllTranslations).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}

// operator() @ 146b9a250

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __thiscall
`FTranslationDataManager::WriteTranslationData'::__l5::<lambda_1>::operator()
          (void *this,TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong lVar1;
  FInternationalizationArchive *pFVar2;
  void *pvVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  FArchiveEntry *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [8];
  uint local_res18;
  FString *local_res20;
  ForAnyElementType local_138;
  undefined8 local_130;
  ForAnyElementType local_128;
  undefined8 local_120;
  TSharedPtr<FArchiveEntry,1> local_118;
  FString *local_108;
  FScriptContainerElement *local_100;
  FLocKey local_f8;
  FLocKey local_e0;
  FLocKey local_c8;
  FLocKey local_b0;
  FLocItem local_98;
  FLocItem local_78;
  TSharedPtr<FLocMetadataObject,1> local_58;
  TSharedPtr<FLocMetadataObject,1> local_48;
  
  local_res18 = param_1->ArrayNum;
  uVar8 = (ulonglong)(int)local_res18;
  pFVar11 = (param_1->AllocatorInstance).Data;
  local_100 = pFVar11 + uVar8 * 8;
  do {
    pFVar5 = local_100;
    if (param_1->ArrayNum != (int)uVar8) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UTranslationUnit_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar11 == pFVar5) {
      pFVar11 = (param_1->AllocatorInstance).Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      return;
    }
    lVar1 = *(longlong *)pFVar11;
    if (lVar1 != 0) {
      pFVar2 = (FInternationalizationArchive *)**(undefined8 **)this;
      local_58.Object = *(FLocMetadataObject **)(lVar1 + 0xa0);
      local_58.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(lVar1 + 0xa8);
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_res20 = (FString *)(lVar1 + 0x38);
      ::FString::FString(&local_e0.Str,local_res20);
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_e0.Str.Data.ArrayNum != 0) {
        FVar9.Data = local_e0.Str.Data.AllocatorInstance.Data;
      }
      local_e0.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar9.Data,0);
      local_108 = (FString *)(lVar1 + 0x28);
      ::FString::FString(&local_f8.Str,local_108);
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_f8.Str.Data.ArrayNum != 0) {
        FVar9.Data = local_f8.Str.Data.AllocatorInstance.Data;
      }
      local_f8.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar9.Data,0);
      FInternationalizationArchive::FindEntryByKey(pFVar2,&local_118,&local_f8,&local_e0,&local_58);
      if (local_f8.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Str.Data.AllocatorInstance.Data);
      }
      if (local_e0.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Str.Data.AllocatorInstance.Data);
      }
      if (*(char *)(lVar1 + 0x78) != '\0') {
        if (local_118.Object != (FArchiveEntry *)0x0) {
          if ((local_118.Object == (FArchiveEntry *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar10 = local_118.Object;
          iVar7 = ((local_118.Object)->Source).Text.Data.ArrayNum;
          if (iVar7 == *(int *)(lVar1 + 0x50)) {
            if (1 < iVar7) {
              iVar7 = wcscmp((wchar_t *)
                             ((local_118.Object)->Source).Text.Data.AllocatorInstance.Data,
                             *(wchar_t **)(lVar1 + 0x48));
              bVar6 = iVar7 == 0;
              goto LAB_146b9a400;
            }
          }
          else {
            bVar6 = iVar7 + *(int *)(lVar1 + 0x50) == 1;
LAB_146b9a400:
            if (!bVar6) goto LAB_146b9a46b;
          }
          if ((pFVar10 == (FArchiveEntry *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), pFVar10 = local_118.Object, bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = (pFVar10->Translation).Text.Data.ArrayNum;
          if (iVar7 == *(int *)(lVar1 + 0x60)) {
            if (iVar7 < 2) goto LAB_146b9a66b;
            iVar7 = wcscmp((wchar_t *)(pFVar10->Translation).Text.Data.AllocatorInstance.Data,
                           *(wchar_t **)(lVar1 + 0x58));
            bVar6 = iVar7 == 0;
          }
          else {
            bVar6 = iVar7 + *(int *)(lVar1 + 0x60) == 1;
          }
          if (bVar6) goto LAB_146b9a66b;
        }
LAB_146b9a46b:
        pFVar2 = (FInternationalizationArchive *)**(undefined8 **)this;
        local_48.Object = *(FLocMetadataObject **)(lVar1 + 0xa0);
        local_48.SharedReferenceCount.ReferenceController =
             *(TReferenceControllerBase<1> **)(lVar1 + 0xa8);
        if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        iVar7 = *(int *)(lVar1 + 0x60);
        pvVar3 = *(void **)(lVar1 + 0x58);
        local_138.Data = (FScriptContainerElement *)0x0;
        if (iVar7 == 0) {
          local_78.Text.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_78.Text.Data.ArrayNum = iVar7;
          local_78.Text.Data.ArrayMax = 0;
        }
        else {
          local_130._0_4_ = iVar7;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar7,0,&local_138,iVar7,(int *)((longlong)&local_130 + 4));
          memcpy(local_138.Data,pvVar3,(longlong)iVar7 * 2);
          local_78.Text.Data.AllocatorInstance.Data = local_138.Data;
          local_78.Text.Data.ArrayNum = (int)local_130;
          local_78.Text.Data.ArrayMax = local_130._4_4_;
        }
        iVar7 = *(int *)(lVar1 + 0x50);
        pvVar3 = *(void **)(lVar1 + 0x48);
        local_138.Data = (FScriptContainerElement *)0x0;
        local_130 = 0;
        local_128.Data = (FScriptContainerElement *)0x0;
        local_78.MetadataObj.Object = (FLocMetadataObject *)0x0;
        local_78.MetadataObj.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        if (iVar7 == 0) {
          local_98.Text.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_98.Text.Data.ArrayMax = 0;
          local_98.Text.Data.ArrayNum = iVar7;
        }
        else {
          local_120._0_4_ = iVar7;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar7,0,&local_128,iVar7,(int *)((longlong)&local_120 + 4));
          memcpy(local_128.Data,pvVar3,(longlong)iVar7 * 2);
          local_98.Text.Data.AllocatorInstance.Data = local_128.Data;
          local_98.Text.Data.ArrayMax = local_120._4_4_;
          local_98.Text.Data.ArrayNum = (int)local_120;
        }
        local_98.MetadataObj.Object = (FLocMetadataObject *)0x0;
        local_98.MetadataObj.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_128.Data = (FScriptContainerElement *)0x0;
        local_120 = 0;
        ::FString::FString(&local_b0.Str,local_res20);
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_b0.Str.Data.ArrayNum != 0) {
          FVar9.Data = local_b0.Str.Data.AllocatorInstance.Data;
        }
        local_b0.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar9.Data,0);
        ::FString::FString(&local_c8.Str,local_108);
        FVar9.Data = (FScriptContainerElement *)L"";
        if (local_c8.Str.Data.ArrayNum != 0) {
          FVar9.Data = local_c8.Str.Data.AllocatorInstance.Data;
        }
        local_c8.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar9.Data,0);
        FInternationalizationArchive::SetTranslation
                  (pFVar2,&local_c8,&local_b0,&local_98,&local_78,&local_48);
        if (local_c8.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Str.Data.AllocatorInstance.Data);
        }
        if (local_b0.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Str.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98.MetadataObj.SharedReferenceCount.ReferenceController);
        if (local_98.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Text.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78.MetadataObj.SharedReferenceCount.ReferenceController);
        if (local_78.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Text.Data.AllocatorInstance.Data);
        }
        **(undefined1 **)((longlong)this + 8) = 1;
      }
LAB_146b9a66b:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_118.SharedReferenceCount.ReferenceController);
    }
    uVar8 = (ulonglong)local_res18;
    pFVar11 = pFVar11 + 8;
  } while( true );
}

// GetHistoryForTranslationUnits @ 146bacf70

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FTranslationDataManager::GetHistoryForTranslationUnits(FTranslationDataManager *this)

{
  ITextData *pIVar1;
  FInternationalizationArchive *this_00;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  FText *pFVar12;
  ISourceControlModule *pIVar13;
  longlong *plVar14;
  FUpdateStatus *pFVar15;
  FText *pFVar16;
  FText *pFVar17;
  FTextFormat *pFVar18;
  FString *pFVar19;
  undefined8 *puVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  ulonglong uVar23;
  ForAnyElementType FVar24;
  longlong lVar25;
  FSharedReferencer<1> FVar26;
  FUpdateStatus *pFVar27;
  uint uVar28;
  FString *pFVar29;
  FUpdateStatus *pFVar30;
  int *piVar31;
  uint uVar32;
  FUpdateStatus *pFVar33;
  FScriptContainerElement *pFVar34;
  FInternationalizationManifest *this_01;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_598;
  uint local_590;
  FInternationalizationManifest *local_588;
  longlong *local_580;
  TReferenceControllerBase<1> *local_578;
  FString local_570;
  ulonglong local_560;
  ulonglong local_558;
  FScriptContainerElement *local_550;
  FString local_548;
  ForAnyElementType local_538;
  undefined8 local_530;
  FScriptContainerElement *local_528;
  undefined8 local_520;
  FScriptContainerElement *local_518;
  ForAnyElementType FStack_510;
  undefined8 local_508;
  FString local_500;
  TSharedPtr<FManifestEntry,1> local_4f0;
  FString local_4e0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_4d0;
  ForAnyElementType local_4c8;
  ulonglong local_4c0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_4b8;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_4a8
  ;
  TSharedRef<ISourceControlState,1> *local_498;
  undefined8 local_490;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_488;
  FString local_478;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_468
  ;
  ISourceControlState *local_458;
  FSharedReferencer<1> FStack_450;
  TSharedRef<FUpdateStatus,1> local_448;
  FString *local_438;
  TSharedPtr<FInternationalizationManifest,1> local_430;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_420;
  TSharedPtr<FArchiveEntry,1> local_410;
  TRawPtrProxy<FUpdateStatus> local_400;
  longlong local_3f8;
  TReferenceControllerBase<1> *local_3f0;
  FName local_3e8;
  FName local_3e0;
  FScriptContainerElement *local_3d8;
  undefined8 local_3d0;
  FSharedReferencer<1> local_3c8;
  FString local_3c0;
  FString local_3b0;
  FLocKey local_3a0;
  FLocKey local_388;
  FLocKey local_370;
  FString local_358;
  FString local_348;
  TSharedPtr<FCulture,1> local_338;
  FString local_328;
  FString local_318;
  FUpdateStatus *local_308;
  TReferenceControllerBase<1> *pTStack_300;
  FTextFormat local_2f8;
  FText local_2e8;
  TSharedPtr<FCulture,1> local_2d8;
  TSharedPtr<FCulture,1> local_2c8;
  FDestructionSentinel local_2b8;
  FFormatArgumentValue local_2a0;
  FFormatArgumentValue local_278;
  undefined4 local_258;
  FText local_248;
  TSharedPtr<FLocMetadataObject,1> local_238;
  FText local_228;
  FText local_218;
  TSharedRef<FTokenizedMessage,1> local_208;
  FText local_1f8;
  FText local_1e8;
  FText local_1d8;
  TSharedRef<FTokenizedMessage,1> local_1c8;
  FText local_1b8;
  FText local_1a8;
  FText local_198;
  FText local_188;
  FString local_178;
  FString local_168;
  FFormatArgumentValue local_158;
  FFormatArgumentValue local_138;
  FString local_118;
  FText local_108;
  FMessageLog local_f8;
  FText local_c8;
  FText local_b8;
  FTextFormat local_a8;
  FTextFormat local_98;
  FTextFormat local_88;
  FMessageLog local_78;
  
  pFVar12 = FText::AsLocalizable_Advanced_LocText
                      (&local_1a8,L"TranslationDataManager",L"LoadingSourceControlHistory",
                       L"Loading Translation History from Revision Control...");
  FFeedbackContext::BeginSlowTask(GWarn,pFVar12,true,false);
  if (local_1a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
  }
  UnloadHistoryInformation(this);
  pIVar13 = ISourceControlModule::Get();
  plVar14 = (longlong *)(**(code **)((longlong)*pIVar13 + 0x78))(pIVar13);
  pFVar15 = ::operator_new(0x60);
  pFVar30 = (FUpdateStatus *)0x0;
  iVar11 = 0;
  local_400.Object = pFVar30;
  if (pFVar15 != (FUpdateStatus *)0x0) {
    pFVar15->_padding_ = 0;
    pFVar15->_padding_ = (longlong)&___7FUpdateStatus__6B_;
    pFVar15->_padding_ = 0;
    pFVar15->_padding_ = 0;
    pFVar15->_padding_ = 0;
    pFVar15->_padding_ = 0;
    pFVar15->_padding_ = 0;
    pFVar15->_padding_ = 0;
    pFVar15->_padding_ = 0;
    *(undefined4 *)&pFVar15->_padding_ = 0;
    *(undefined4 *)&pFVar15->_padding_ = 0;
    pFVar15->bUpdateHistory = false;
    pFVar15->bGetOpenedOnly = false;
    pFVar15->bUpdateModifiedState = false;
    pFVar15->bUpdateModifiedStateToLocalRevision = false;
    pFVar15->bCheckingAllFiles = false;
    pFVar15->bForceQuiet = false;
    pFVar15->bForceUpdate = false;
    pFVar15->bSetRequireDirPathEndWithSeparator = false;
    local_400.Object = pFVar15;
  }
  TSharedRef<FUpdateStatus,1>::TSharedRef<FUpdateStatus,1><FUpdateStatus>(&local_448,&local_400);
  FVar26.ReferenceController = local_448.SharedReferenceCount.ReferenceController;
  local_308 = local_448.Object;
  pTStack_300 = local_448.SharedReferenceCount.ReferenceController;
  local_4c0 = 0;
  (local_448.Object)->bUpdateHistory = true;
  lVar25 = *plVar14;
  local_4d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_4c8.Data = (FScriptContainerElement *)0x0;
  if (local_448.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_448.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_448.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar7 = (**(code **)(lVar25 + 0xd0))
                    (plVar14,&local_308,&this->OpenedManifestFilePath,0,&local_4d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_300);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_4d0,(FWriteAccessScope *)&local_2b8);
  if (((int)local_4c0 != 0) && (local_4c8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_4c8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_4c8,0,0,0x10);
    local_4c0 = local_4c0 & 0xffffffff00000000;
  }
  if (local_2b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2b8.Accessor,&local_2b8);
  }
  if (local_4c8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_4d0.AccessDetector);
  local_538.Data = (FScriptContainerElement *)0x0;
  local_530 = 0;
  local_498 = (TSharedRef<ISourceControlState,1> *)0x0;
  local_490 = 0;
  iVar8 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x810,&local_538,(int *)((longlong)&local_530 + 4));
  local_530 = CONCAT44(local_530._4_4_,iVar8 + 1);
  ::FString::FString((FString *)(local_538.Data + (longlong)iVar8 * 0x10),
                     &this->OpenedManifestFilePath);
  iVar8 = (**(code **)(*plVar14 + 0xa0))(plVar14,&local_538,&local_498,0);
  if ((iVar7 == 1) && (iVar8 == 1)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  local_458 = (ISourceControlState *)0x0;
  FStack_450.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((int)local_490 == 1) {
    local_3c8.ReferenceController = (local_498->SharedReferenceCount).ReferenceController;
    local_458 = local_498->Object;
    if (local_3c8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_3c8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_3c8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_3d0 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_450,&local_3c8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_3c8.ReferenceController);
  }
  if ((bVar6) && (local_458 != (ISourceControlState *)0x0)) {
    if ((local_458 == (ISourceControlState *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar7 = (**(code **)(*(longlong *)local_458 + 8))();
    uVar28 = iVar7;
    while (uVar28 = uVar28 + -1, -1 < (int)uVar28) {
      local_2c8.Object = (FCulture *)0x0;
      local_2c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_590 = uVar28;
      pFVar12 = FText::AsNumber(&local_c8,iVar7,(FNumberFormattingOptions *)0x0,&local_2c8);
      local_2d8.Object = (FCulture *)0x0;
      local_2d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pFVar16 = FText::AsNumber(&local_b8,iVar7 - uVar28,(FNumberFormattingOptions *)0x0,&local_2d8)
      ;
      pFVar17 = FText::AsLocalizable_Advanced_LocText
                          (&local_188,L"TranslationDataManager",L"LoadingOldManifestRevisionNumber",
                           L"Loading Translation History from Manifest Revision {0} of {1} from Revision Control..."
                          );
      pFVar18 = FTextFormat::FTextFormat(&local_a8,pFVar17,Default);
      local_278.Type = Text;
      FText::FText((FText *)&local_278.TextValue,pFVar16);
      if ((local_278.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_258 = 4;
      FText::FText(&local_248,pFVar12);
      if ((local_248.TextData.Reference == (ITextData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_488.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_488.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,2,0,&local_488.AllocatorInstance,2,&local_488.ArrayMax);
      ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                (local_488.AllocatorInstance.Data,&local_278,2);
      local_2f8.TextFormatData.Object = (pFVar18->TextFormatData).Object;
      local_2f8.TextFormatData.SharedReferenceCount.ReferenceController =
           (pFVar18->TextFormatData).SharedReferenceCount.ReferenceController;
      if (local_2f8.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_2f8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_2f8.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(&local_2e8,&local_2f8,&local_488);
      DestructItems<FFormatArgumentValue,int>
                ((FFormatArgumentValue *)local_488.AllocatorInstance.Data,local_488.ArrayNum);
      if ((FFormatArgumentValue *)local_488.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
        FMemory::Free(local_488.AllocatorInstance.Data);
      }
      if (local_248.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_248.TextData.Reference + 0x10))();
      }
      if (local_278.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_278.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar18->TextFormatData).SharedReferenceCount.ReferenceController);
      pIVar1 = (pFVar16->TextData).Reference;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      pIVar1 = (pFVar12->TextData).Reference;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))();
      }
      FFeedbackContext::StatusUpdate(GWarn,iVar7 - uVar28,iVar7,&local_2e8);
      if (local_2e8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_2e8.TextData.Reference + 0x10))();
      }
      if (local_188.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2d8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2c8.SharedReferenceCount.ReferenceController);
      if ((local_458 == (ISourceControlState *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(*(longlong *)local_458 + 0x10))(local_458,&local_580);
      if (local_580 != (longlong *)0x0) {
        FPaths::ConvertRelativePathToFull(&local_328,&this->OpenedManifestFilePath);
        pFVar19 = FPaths::EngineContentDir(&local_178);
        FPaths::ConvertRelativePathToFull(&local_3b0,pFVar19);
        if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.Data.AllocatorInstance.Data);
        }
        iVar8 = local_3b0.Data.ArrayNum + -1;
        FVar24.Data = local_3b0.Data.AllocatorInstance.Data;
        if (local_3b0.Data.ArrayNum == 0) {
          iVar8 = iVar11;
          FVar24.Data = (FScriptContainerElement *)L"";
        }
        bVar6 = ::FString::StartsWith(&local_328,(wchar_t *)FVar24.Data,iVar8,IgnoreCase);
        local_548.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_548.Data.ArrayNum = 0;
        local_548.Data.ArrayMax = 0;
        local_570.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_570.Data.ArrayNum = 0;
        local_570.Data.ArrayMax = 0;
        if (bVar6) {
          ::FString::operator=(&local_548,L"Engine");
          pFVar19 = FPaths::EngineSavedDir(&local_168);
          if (&local_570 != pFVar19) {
            if (local_570.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_570.Data.AllocatorInstance.Data);
            }
            local_570.Data.AllocatorInstance.Data = (pFVar19->Data).AllocatorInstance.Data;
            (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_570.Data.ArrayNum = (pFVar19->Data).ArrayNum;
            local_570.Data.ArrayMax = (pFVar19->Data).ArrayMax;
            (pFVar19->Data).ArrayNum = 0;
            (pFVar19->Data).ArrayMax = 0;
          }
          if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Data.AllocatorInstance.Data);
          }
        }
        else {
          ::FString::operator=(&local_548,GInternalProjectName);
          pFVar19 = FPaths::ProjectSavedDir();
          ::FString::operator=(&local_570,pFVar19);
        }
        if ((local_580 == (longlong *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        (**(code **)(*local_580 + 0x28))();
        FPaths::GetBaseFilename(&local_118,&this->OpenedManifestFilePath,true);
        ::FString::PrintfImpl(&local_3c0,L"Manifest-%s-%s-Rev-%d");
        FVar24.Data = local_570.Data.AllocatorInstance.Data;
        iVar8 = local_570.Data.ArrayNum;
        lVar25 = (longlong)local_570.Data.ArrayNum;
        local_4b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_4b8.ArrayNum = local_570.Data.ArrayNum;
        uVar22 = local_570.Data.ArrayNum + 0x19 + (uint)(local_570.Data.ArrayNum == 0);
        if ((int)uVar22 < local_570.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar22,0,&local_4b8.AllocatorInstance,local_570.Data.ArrayNum,
                   &local_4b8.ArrayMax);
        if (iVar8 != 0) {
          memcpy(local_4b8.AllocatorInstance.Data,FVar24.Data,lVar25 * 2);
        }
        ::FString::PathAppend((FString *)&local_4b8,L"CachedTranslationHistory",0x18);
        iVar8 = local_3c0.Data.ArrayNum + -1;
        if (local_3c0.Data.ArrayNum == 0) {
          iVar8 = iVar11;
        }
        if ((local_4b8.ArrayNum != 0) || (iVar9 = 1, iVar8 + 1 == 0)) {
          iVar9 = iVar11;
        }
        TArray<wchar_t,TSizedDefaultAllocator<32>_>::
        TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                  (&local_420,&local_4b8,iVar8 + 1 + iVar9);
        ::FString::PathAppend
                  ((FString *)&local_420,(wchar_t *)local_3c0.Data.AllocatorInstance.Data,iVar8);
        if (local_4b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4b8.AllocatorInstance.Data);
        }
        if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
        }
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
        bVar6 = FPaths::FileExists((FString *)&local_420);
        if (!bVar6) {
          if ((local_580 == (longlong *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          (**(code **)(*local_580 + 8))(local_580,&local_420,0);
        }
        ReadManifest(this,&local_430,(FString *)&local_420);
        local_588 = local_430.Object;
        if (local_430.Object == (FInternationalizationManifest *)0x0) {
          local_4a8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_4a8.Pairs.ArrayNum = 0;
          local_4a8.Pairs.ArrayMax = 0;
          pFVar12 = FText::FromString(&local_228,&this->OpenedManifestFilePath);
          local_158.Type = Text;
          TOptional<FText>::TOptional<FText>(&local_158.TextValue,pFVar12);
          ::FString::FString(&local_358,L"ManifestFilePath");
          TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
          Emplace<FString,FFormatArgumentValue>(&local_4a8,&local_358,&local_158);
          if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_358.Data.AllocatorInstance.Data);
          }
          if (local_158.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_158.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          if (local_228.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_228.TextData.Reference + 0x10))();
          }
          local_338.Object = (FCulture *)0x0;
          local_338.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          if ((local_580 == (longlong *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar8 = (**(code **)(*local_580 + 0x28))();
          pFVar12 = FText::AsNumber(&local_218,iVar8,(FNumberFormattingOptions *)0x0,&local_338);
          local_138.Type = Text;
          TOptional<FText>::TOptional<FText>(&local_138.TextValue,pFVar12);
          ::FString::FString(&local_348,L"ManifestRevisionNumber");
          TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
          Emplace<FString,FFormatArgumentValue>(&local_4a8,&local_348,&local_138);
          if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_348.Data.AllocatorInstance.Data);
          }
          if (local_138.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_138.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          if (local_218.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_218.TextData.Reference + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_338.SharedReferenceCount.ReferenceController);
          ::FName::FName(&local_3e8,"TranslationEditor");
          FMessageLog::FMessageLog(&local_78,&local_3e8);
          pFVar12 = FText::AsLocalizable_Advanced_LocText
                              (&local_1e8,L"TranslationDataManager",L"PreviousManifestCorrupt",
                               L"Previous revision {ManifestRevisionNumber} of {ManifestFilePath} failed to load correctly. Ignoring."
                              );
          pFVar18 = FTextFormat::FTextFormat(&local_98,pFVar12,Default);
          pFVar12 = FText::Format(&local_1f8,pFVar18,&local_4a8);
          FMessageLog::Warning(&local_78,&local_208,pFVar12);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_208.SharedReferenceCount.ReferenceController);
          if (local_1f8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
          }
          if (local_1e8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_1e8.TextData.Reference + 0x10))();
          }
          FMessageLog::~FMessageLog(&local_78);
          DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                    ((TTuple<FString,FFormatArgumentValue> *)local_4a8.Pairs.AllocatorInstance.Data,
                     local_4a8.Pairs.ArrayNum);
          if ((TTuple<FString,FFormatArgumentValue> *)local_4a8.Pairs.AllocatorInstance.Data !=
              (TTuple<FString,FFormatArgumentValue> *)0x0) {
            FMemory::Free(local_4a8.Pairs.AllocatorInstance.Data);
          }
        }
        else {
          if ((local_430.Object == (FInternationalizationManifest *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L""), bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          this_01 = local_430.Object;
          local_3f0 = local_430.SharedReferenceCount.ReferenceController;
          if (local_430.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_430.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_430.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          local_588 = local_430.Object;
          if ((local_430.Object == (FInternationalizationManifest *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L""), bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          iVar8 = (this->AllTranslations).ArrayNum;
          uVar23 = (ulonglong)iVar8;
          pFVar34 = (this->AllTranslations).AllocatorInstance.Data;
          local_558 = CONCAT44(local_558._4_4_,iVar8);
          local_3d8 = pFVar34 + uVar23 * 8;
          while( true ) {
            pFVar21 = local_3d8;
            local_550 = pFVar34;
            if ((this->AllTranslations).ArrayNum != (int)uVar23) {
              local_res18[0] = 0;
              `TCheckedPointerIterator<UTranslationUnit_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_res18);
            }
            if (pFVar34 == pFVar21) break;
            lVar25 = *(longlong *)pFVar34;
            local_3f8 = lVar25;
            if (lVar25 != 0) {
              iVar8 = *(int *)(lVar25 + 0x70);
              uVar23 = (ulonglong)iVar8;
              local_560 = CONCAT44(local_560._4_4_,iVar8);
              if (0 < iVar8) {
                pFVar19 = *(FString **)(lVar25 + 0x68);
                pFVar29 = pFVar19 + uVar23 * 3;
                piVar31 = &pFVar19[2].Data.ArrayNum;
                local_438 = pFVar29;
                while( true ) {
                  if (*(int *)(lVar25 + 0x70) != (int)uVar23) {
                    local_res20[0] = 0;
                    `TCheckedPointerIterator<FTranslationContextInfo,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(local_res20);
                  }
                  pFVar34 = local_550;
                  if (pFVar19 == pFVar29) break;
                  local_478.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_478.Data.ArrayNum = 0;
                  local_478.Data.ArrayMax = 0;
                  if (0 < *piVar31) {
                    pFVar34 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(piVar31 + -2))->
                              AllocatorInstance).Data;
                    iVar8 = *(int *)(pFVar34 + 0x20);
                    iVar9 = iVar8 + -1;
                    if (iVar8 == 0) {
                      iVar9 = 0;
                    }
                    ::FString::AssignRange(&local_478,*(wchar_t **)(pFVar34 + 0x18),iVar9);
                  }
                  ::FString::FString(&local_3a0.Str,pFVar19);
                  FVar24.Data = (FScriptContainerElement *)L"";
                  if (local_3a0.Str.Data.ArrayNum != 0) {
                    FVar24.Data = local_3a0.Str.Data.AllocatorInstance.Data;
                  }
                  local_3a0.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar24.Data,0);
                  ::FString::FString(&local_388.Str,(FString *)(lVar25 + 0x28));
                  FVar24.Data = (FScriptContainerElement *)L"";
                  if (local_388.Str.Data.ArrayNum != 0) {
                    FVar24.Data = local_388.Str.Data.AllocatorInstance.Data;
                  }
                  local_388.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar24.Data,0);
                  FInternationalizationManifest::FindEntryByKey
                            (this_01,&local_4f0,&local_388,&local_3a0,(FString *)0x0);
                  if (local_388.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_388.Str.Data.AllocatorInstance.Data);
                  }
                  if (local_3a0.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_3a0.Str.Data.AllocatorInstance.Data);
                  }
                  if (local_4f0.Object != (FManifestEntry *)0x0) {
                    if (*piVar31 != 0) {
                      if ((local_4f0.Object == (FManifestEntry *)0x0) &&
                         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                            ("IsValid()",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                             ,0x458,L""), bVar6)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      iVar8 = ((local_4f0.Object)->Source).Text.Data.ArrayNum;
                      if (iVar8 == local_478.Data.ArrayNum) {
                        if (iVar8 < 2) goto LAB_146badf6d;
                        iVar8 = wcscmp((wchar_t *)
                                       ((local_4f0.Object)->Source).Text.Data.AllocatorInstance.Data
                                       ,(wchar_t *)local_478.Data.AllocatorInstance.Data);
                        bVar6 = iVar8 == 0;
                      }
                      else {
                        bVar6 = iVar8 + local_478.Data.ArrayNum == 1;
                      }
                      if (bVar6) goto LAB_146badf6d;
                    }
                    if (((this->ArchivePtr).Object == (FInternationalizationArchive *)0x0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                           ,0x458,L""), bVar6)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    this_00 = (this->ArchivePtr).Object;
                    local_238.Object = (FLocMetadataObject *)0x0;
                    local_238.SharedReferenceCount.ReferenceController =
                         (TReferenceControllerBase<1> *)0x0;
                    ::FString::FString(&local_370.Str,pFVar19);
                    FVar24.Data = (FScriptContainerElement *)L"";
                    if (local_370.Str.Data.ArrayNum != 0) {
                      FVar24.Data = local_370.Str.Data.AllocatorInstance.Data;
                    }
                    local_370.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar24.Data,0);
                    if ((local_4f0.Object == (FManifestEntry *)0x0) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                           ,0x458,L""), bVar6)) {
                      pcVar2 = (code *)swi(3);
                      (*pcVar2)();
                      return;
                    }
                    FInternationalizationArchive::FindEntryByKey
                              (this_00,&local_410,&(local_4f0.Object)->Namespace,&local_370,
                               &local_238);
                    if (local_370.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                    {
                      FMemory::Free(local_370.Str.Data.AllocatorInstance.Data);
                    }
                    if (local_410.Object != (FArchiveEntry *)0x0) {
                      local_518 = (FScriptContainerElement *)0x0;
                      FStack_510.Data = (FScriptContainerElement *)0x0;
                      local_528 = (void *)0x0;
                      local_520 = 0;
                      local_508 = 0;
                      local_500.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_500.Data.ArrayNum = 0;
                      local_500.Data.ArrayMax = 0;
                      iVar8 = 0;
                      if (local_4f0.Object == (FManifestEntry *)0x0) {
                        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValid()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                           ,0x458,L"");
                        if (bVar6) {
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        iVar8 = local_508._4_4_;
                      }
                      if ((FLocItem *)&FStack_510 != &(local_4f0.Object)->Source) {
                        iVar9 = ((local_4f0.Object)->Source).Text.Data.ArrayNum;
                        pFVar34 = ((local_4f0.Object)->Source).Text.Data.AllocatorInstance.Data;
                        local_508 = CONCAT44(local_508._4_4_,iVar9);
                        if ((iVar9 == 0) && (iVar8 == 0)) {
                          local_508 = 0;
                        }
                        else {
                          UE::Core::Private::
                          ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (2,2,iVar9,iVar8,&FStack_510,iVar9,
                                     (int *)((longlong)&local_508 + 4));
                          if (iVar9 != 0) {
                            memcpy(FStack_510.Data,pFVar34,(longlong)iVar9 * 2);
                          }
                        }
                      }
                      if ((local_410.Object == (FArchiveEntry *)0x0) &&
                         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                            ("IsValid()",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                             ,0x458,L""), bVar6)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      iVar8 = ((local_410.Object)->Translation).Text.Data.ArrayNum;
                      iVar9 = iVar8 + -1;
                      if (iVar8 == 0) {
                        iVar9 = 0;
                      }
                      ::FString::AssignRange
                                (&local_500,
                                 (wchar_t *)
                                 ((local_410.Object)->Translation).Text.Data.AllocatorInstance.Data,
                                 iVar9);
                      if ((local_580 == (longlong *)0x0) &&
                         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                            ("IsValid()",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                             ,0x458,L""), bVar6)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      puVar20 = (undefined8 *)(**(code **)(*local_580 + 0x60))();
                      local_518 = (FScriptContainerElement *)*puVar20;
                      if ((local_580 == (longlong *)0x0) &&
                         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                            ("IsValid()",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                             ,0x458,L""), bVar6)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      iVar8 = (**(code **)(*local_580 + 0x28))();
                      local_4e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_4e0.Data.ArrayNum = 0;
                      local_4e0.Data.ArrayMax = 0;
                      ::FString::AppendInt(&local_4e0,iVar8);
                      if (local_528 != (void *)0x0) {
                        FMemory::Free(local_528);
                      }
                      pFVar34 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(piVar31 + -2))->
                                AllocatorInstance).Data;
                      local_528 = local_4e0.Data.AllocatorInstance.Data;
                      uVar3._0_4_ = local_4e0.Data.ArrayNum;
                      uVar3._4_4_ = local_4e0.Data.ArrayMax;
                      local_520._0_4_ = local_4e0.Data.ArrayNum;
                      local_520._4_4_ = local_4e0.Data.ArrayMax;
                      local_4e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_4e0.Data.ArrayNum = 0;
                      local_4e0.Data.ArrayMax = 0;
                      uVar5 = uVar3;
                      if (((pFVar34 <= (FScriptContainerElement *)&local_528) &&
                          (uVar5 = local_520,
                          (FScriptContainerElement *)&local_528 <
                          pFVar34 + (longlong)piVar31[1] * 0x38)) &&
                         (local_520 = uVar3,
                         bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), uVar5 = local_520, bVar6)) {
                        pcVar2 = (code *)swi(3);
                        (*pcVar2)();
                        return;
                      }
                      local_520 = uVar5;
                      iVar8 = *piVar31;
                      if (iVar8 == piVar31[1]) {
                        iVar8 = UE::Core::Private::
                                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (0x838,(ForAnyElementType *)(piVar31 + -2),piVar31 + 1);
                      }
                      pFVar34 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(piVar31 + -2))->
                                AllocatorInstance).Data;
                      *piVar31 = iVar8 + 1;
                      memmove(pFVar34 + 0x38,pFVar34,(longlong)iVar8 * 0x38);
                      pFVar21 = local_528;
                      pFVar34 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(piVar31 + -2))->
                                AllocatorInstance).Data;
                      *(FScriptContainerElement **)&pFVar34->field_0x0 =
                           (FScriptContainerElement *)0x0;
                      lVar25 = (longlong)(int)local_520;
                      *(int *)&pFVar34[8].field_0x0 = (int)local_520;
                      if ((int)local_520 == 0) {
                        *(int *)(pFVar34 + 0xc) = 0;
                      }
                      else {
                        UE::Core::Private::
                        ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (2,2,(int)local_520,0,(ForAnyElementType *)pFVar34,(int)local_520,
                                   (int *)(pFVar34 + 0xc));
                        memcpy(*(FScriptContainerElement **)&pFVar34->field_0x0,pFVar21,lVar25 * 2);
                      }
                      FVar24.Data = FStack_510.Data;
                      pFVar21 = pFVar34 + 0x18;
                      *(FScriptContainerElement **)&pFVar34[0x10].field_0x0 = local_518;
                      *(FScriptContainerElement **)&pFVar21->field_0x0 =
                           (FScriptContainerElement *)0x0;
                      lVar25 = (longlong)(int)local_508;
                      *(int *)&pFVar34[0x20].field_0x0 = (int)local_508;
                      if ((int)local_508 == 0) {
                        *(int *)(pFVar34 + 0x24) = 0;
                      }
                      else {
                        UE::Core::Private::
                        ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (2,2,(int)local_508,0,(ForAnyElementType *)pFVar21,(int)local_508,
                                   (int *)(pFVar34 + 0x24));
                        memcpy(*(FScriptContainerElement **)&pFVar21->field_0x0,FVar24.Data,
                               lVar25 * 2);
                      }
                      FVar24.Data = local_500.Data.AllocatorInstance.Data;
                      pFVar21 = pFVar34 + 0x28;
                      *(FScriptContainerElement **)&pFVar21->field_0x0 =
                           (FScriptContainerElement *)0x0;
                      lVar25 = (longlong)local_500.Data.ArrayNum;
                      *(int *)&pFVar34[0x30].field_0x0 = local_500.Data.ArrayNum;
                      if (local_500.Data.ArrayNum == 0) {
                        *(int *)(pFVar34 + 0x34) = 0;
                      }
                      else {
                        UE::Core::Private::
                        ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (2,2,local_500.Data.ArrayNum,0,(ForAnyElementType *)pFVar21,
                                   local_500.Data.ArrayNum,(int *)(pFVar34 + 0x34));
                        memcpy(*(FScriptContainerElement **)&pFVar21->field_0x0,FVar24.Data,
                               lVar25 * 2);
                      }
                      if (local_500.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_500.Data.AllocatorInstance.Data);
                      }
                      if (FStack_510.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(FStack_510.Data);
                      }
                      pFVar29 = local_438;
                      this_01 = local_588;
                      if (local_528 != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_528);
                        pFVar29 = local_438;
                        this_01 = local_588;
                      }
                    }
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline
                              (local_410.SharedReferenceCount.ReferenceController);
                    lVar25 = local_3f8;
                  }
LAB_146badf6d:
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_4f0.SharedReferenceCount.ReferenceController)
                  ;
                  if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_478.Data.AllocatorInstance.Data);
                  }
                  uVar23 = local_560 & 0xffffffff;
                  pFVar19 = pFVar19 + 3;
                  piVar31 = piVar31 + 0xc;
                }
              }
            }
            uVar23 = local_558 & 0xffffffff;
            pFVar34 = pFVar34 + 8;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_3f0);
          uVar28 = local_590;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_430.SharedReferenceCount.ReferenceController);
        if (local_420.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_420.AllocatorInstance.Data);
        }
        if (local_570.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_570.Data.AllocatorInstance.Data);
        }
        if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_548.Data.AllocatorInstance.Data);
        }
        if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
        }
        if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_328.Data.AllocatorInstance.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_578)
      ;
      FVar26.ReferenceController = local_448.SharedReferenceCount.ReferenceController;
    }
  }
  else {
    local_468.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_468.Pairs.ArrayNum = 0;
    local_468.Pairs.ArrayMax = 0;
    pFVar12 = FText::FromString(&local_1d8,&this->OpenedManifestFilePath);
    local_2a0.Type = Text;
    FText::FText((FText *)&local_2a0.TextValue,pFVar12);
    if ((local_2a0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ::FString::FString(&local_318,L"ManifestFilePath");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_468,&local_318,&local_2a0);
    if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.Data.AllocatorInstance.Data);
    }
    if (local_2a0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_2a0.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_1d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1d8.TextData.Reference + 0x10))();
    }
    ::FName::FName(&local_3e0,"SourceControl");
    FMessageLog::FMessageLog(&local_f8,&local_3e0);
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_108,L"TranslationDataManager",L"SourceControlStateQueryFailed",
                         L"Failed to query revision control state of file {ManifestFilePath}.");
    pFVar18 = FTextFormat::FTextFormat(&local_88,pFVar12,Default);
    pFVar12 = FText::Format(&local_1b8,pFVar18,&local_468);
    FMessageLog::Warning(&local_f8,&local_1c8,pFVar12);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1c8.SharedReferenceCount.ReferenceController);
    if (local_1b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1b8.TextData.Reference + 0x10))();
    }
    if (local_108.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
    }
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_198,L"TranslationDataManager",L"RetrieveTranslationHistoryFailed",
                         L"Unable to Retrieve Translation History from Revision Control!");
    FMessageLog::Notify(&local_f8,pFVar12,Info,false);
    if (local_198.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog(&local_f8);
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_468.Pairs.AllocatorInstance.Data,
               local_468.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_468.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_468.Pairs.AllocatorInstance.Data);
    }
  }
  iVar11 = (this->AllTranslations).ArrayNum;
  local_590 = 0;
  if (iVar11 < 1) {
LAB_146bae6eb:
    FFeedbackContext::EndSlowTask(GWarn);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_450.ReferenceController);
    DestructItems<TSharedRef<ISourceControlState,1>,int>(local_498,(int)local_490);
    if (local_498 != (TSharedRef<ISourceControlState,1> *)0x0) {
      FMemory::Free(local_498);
    }
    DestructItems<FString,int>((FString *)local_538.Data,(int)local_530);
    if (local_538.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_538.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar26.ReferenceController);
    return;
  }
  local_560 = 0;
  pFVar15 = pFVar30;
LAB_146bae4c1:
  uVar23 = local_560;
  uVar22 = (uint)pFVar15;
  uVar32 = 0;
  uVar28 = uVar32;
  if ((int)uVar22 < iVar11) {
    uVar28 = ~uVar22 >> 0x1f;
  }
  if ((uVar28 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     uVar22 = local_590, bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_598 = *(longlong *)((this->AllTranslations).AllocatorInstance.Data + uVar23);
  if (((local_598 != 0) && (*(int *)(local_598 + 0x60) < 2)) &&
     (local_588 = (FInternationalizationManifest *)0x0, 0 < *(int *)(local_598 + 0x70))) {
    local_550 = (FScriptContainerElement *)0x0;
    pFVar15 = pFVar30;
    do {
      uVar28 = (uint)pFVar15;
      local_558 = 0;
      pFVar15 = pFVar30;
      pFVar27 = pFVar30;
      while( true ) {
        lVar25 = local_598;
        uVar22 = uVar32;
        if ((int)uVar28 < *(int *)(local_598 + 0x70)) {
          uVar22 = ~uVar28 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar4 = local_598;
        uVar22 = (uint)pFVar15;
        if (*(int *)(local_550 + *(longlong *)(lVar25 + 0x68) + 0x28) <= (int)uVar22) break;
        uVar10 = uVar32;
        if ((int)uVar28 < *(int *)(local_598 + 0x70)) {
          uVar10 = ~uVar28 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar25 = *(longlong *)(lVar4 + 0x68) + (longlong)(int)uVar28 * 0x30;
        uVar10 = uVar32;
        if ((int)uVar22 < *(int *)(lVar25 + 0x28)) {
          uVar10 = ~uVar22 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar4 = local_598;
        if (1 < *(int *)((longlong)&pFVar27->_padding_ + *(longlong *)(lVar25 + 0x20))) {
          uVar10 = uVar32;
          if ((int)uVar28 < *(int *)(local_598 + 0x70)) {
            uVar10 = ~uVar28 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar25 = *(longlong *)(lVar4 + 0x68) + (longlong)local_588 * 0x30;
          uVar28 = uVar32;
          if ((int)uVar22 < *(int *)(lVar25 + 0x28)) {
            uVar28 = ~uVar22 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar25 = local_558 * 0x38 + *(longlong *)(lVar25 + 0x20);
          iVar11 = *(int *)(lVar25 + 0x30);
          uVar28 = iVar11 - 1;
          if (iVar11 == 0) {
            uVar28 = uVar32;
          }
          ::FString::AssignRange((FString *)(local_598 + 0x58),*(wchar_t **)(lVar25 + 0x28),uVar28);
          *(undefined1 *)(local_598 + 0x78) = 0;
          pFVar34 = (this->Untranslated).AllocatorInstance.Data;
          pFVar21 = pFVar34;
          goto joined_r0x000146bae855;
        }
        local_558 = local_558 + 1;
        pFVar15 = (FUpdateStatus *)(ulonglong)(uVar22 + 1);
        pFVar27 = (FUpdateStatus *)&pFVar27->_padding_;
      }
      local_550 = local_550 + 0x30;
      local_588 = (FInternationalizationManifest *)&local_588->field_0x1;
      pFVar15 = (FUpdateStatus *)(ulonglong)(uVar28 + 1);
      uVar22 = local_590;
    } while ((int)(uVar28 + 1) < *(int *)(local_598 + 0x70));
  }
  goto LAB_146bae6c6;
joined_r0x000146bae855:
  lVar25 = local_598;
  if (pFVar21 == pFVar34 + (longlong)(this->Untranslated).ArrayNum * 8) goto LAB_146bae98d;
  if (*(longlong *)pFVar21 == local_598) {
    if (((pFVar34 <= (FScriptContainerElement *)&local_598) &&
        ((FScriptContainerElement *)&local_598 <
         pFVar34 + (longlong)(this->Untranslated).ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar11 = (this->Untranslated).ArrayNum;
    lVar25 = local_598;
    if (iVar11 != 0) {
      pFVar34 = (this->Untranslated).AllocatorInstance.Data;
      bVar6 = *(longlong *)pFVar34 != local_598;
      pFVar27 = pFVar30;
      pFVar15 = pFVar30;
      pFVar33 = pFVar30;
      do {
        uVar22 = (uint)pFVar15;
        uVar28 = uVar22;
        do {
          pFVar27 = (FUpdateStatus *)((longlong)&pFVar27->_padding_ + 1);
          uVar28 = uVar28 + 1;
          pFVar15 = (FUpdateStatus *)(ulonglong)uVar28;
          if ((longlong)iVar11 <= (longlong)pFVar27) break;
        } while (bVar6 == (*(longlong *)(pFVar34 + (longlong)pFVar27 * 8) != lVar25));
        if (bVar6 != false) {
          uVar32 = (uint)pFVar33;
          if (uVar32 != uVar22) {
            memmove(pFVar34 + (longlong)(int)uVar32 * 8,pFVar34 + (longlong)(int)uVar22 * 8,
                    (longlong)(int)(uVar28 - uVar22) << 3);
            lVar25 = local_598;
          }
          pFVar33 = (FUpdateStatus *)(ulonglong)(uVar32 + (uVar28 - uVar22));
        }
        bVar6 = (bool)(bVar6 ^ 1);
      } while ((longlong)pFVar27 < (longlong)iVar11);
      (this->Untranslated).ArrayNum = (int)pFVar33;
    }
    goto LAB_146bae98d;
  }
  pFVar21 = pFVar21 + 8;
  goto joined_r0x000146bae855;
LAB_146bae98d:
  pFVar34 = (this->Review).AllocatorInstance.Data;
  for (pFVar21 = pFVar34; pFVar21 != pFVar34 + (longlong)(this->Review).ArrayNum * 8;
      pFVar21 = pFVar21 + 8) {
    uVar22 = local_590;
    if (*(longlong *)pFVar21 == lVar25) goto LAB_146bae6c6;
  }
  if (((pFVar34 <= (FScriptContainerElement *)&local_598) &&
      ((FScriptContainerElement *)&local_598 < pFVar34 + (longlong)(this->Review).ArrayMax * 8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), lVar25 = local_598, bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar11 = (this->Review).ArrayNum;
  piVar31 = &(this->Review).ArrayMax;
  if (iVar11 == *piVar31) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&(this->Review).AllocatorInstance,piVar31);
    lVar25 = local_598;
  }
  (this->Review).ArrayNum = iVar11 + 1;
  *(longlong *)((this->Review).AllocatorInstance.Data + (longlong)iVar11 * 8) = lVar25;
  uVar22 = local_590;
LAB_146bae6c6:
  local_560 = local_560 + 8;
  local_590 = uVar22 + 1;
  pFVar15 = (FUpdateStatus *)(ulonglong)local_590;
  iVar11 = (this->AllTranslations).ArrayNum;
  FVar26.ReferenceController = local_448.SharedReferenceCount.ReferenceController;
  if (iVar11 <= (int)local_590) goto LAB_146bae6eb;
  goto LAB_146bae4c1;
}

// HandlePropertyChanged @ 146bb0ca0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __thiscall
FTranslationDataManager::HandlePropertyChanged(FTranslationDataManager *this,FName param_1)

{
  WriteTranslationData(this,false);
  return;
}

// Initialize @ 146bb1120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall FTranslationDataManager::Initialize(FTranslationDataManager *this)

{
  TMultiMap<FString,TSharedRef<FManifestEntry,1>,FDefaultSetAllocator,FLocKeyMultiMapFuncs<TSharedRef<FManifestEntry,1>_>_>
  *pTVar1;
  FLocItem *this_00;
  FString *pFVar2;
  TSharedPtr<FInternationalizationManifest,1> *this_01;
  ulonglong uVar3;
  ITextData *pIVar4;
  FLocKey *pFVar5;
  longlong lVar6;
  longlong lVar7;
  FInternationalizationArchive *this_02;
  code *pcVar8;
  bool bVar9;
  FTranslationChange *pFVar10;
  int iVar11;
  FText *pFVar12;
  TSharedPtr<FInternationalizationManifest,1> *pTVar13;
  FTextFormat *pFVar14;
  TSharedPtr<FInternationalizationArchive,1> *pTVar15;
  TSharedPtr<FInternationalizationArchive,1> *pTVar16;
  FText *pFVar17;
  FText *pFVar18;
  UObject *pUVar19;
  UTranslationUnit *pUVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  FString *this_03;
  int *piVar24;
  ForAnyElementType FVar25;
  FLocKey *pFVar26;
  FScriptContainerElement *pFVar27;
  uint *puVar28;
  int iVar29;
  int iVar30;
  ForAnyElementType FVar31;
  FLocKey *pFVar32;
  uint uVar33;
  bool bVar34;
  undefined1 auStackY_6c8 [32];
  ForAnyElementType local_678;
  int local_670;
  int local_66c;
  undefined1 local_668 [16];
  undefined1 local_658 [16];
  FTranslationChange *local_648;
  undefined8 local_640;
  int local_638;
  int local_634;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_630
  ;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_620;
  TSharedPtr<FArchiveEntry,1> local_610;
  TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_> local_600;
  int local_5f0 [2];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_5e8
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_5d8
  ;
  FString local_5c8;
  uint local_5b8;
  FTranslationDataManager *local_5b0;
  FString local_5a8;
  undefined4 local_598;
  TMultiMap<FString,TSharedRef<FManifestEntry,1>,FDefaultSetAllocator,FLocKeyMultiMapFuncs<TSharedRef<FManifestEntry,1>_>_>
  *local_590;
  undefined8 uStack_588;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_580;
  uint uStack_578;
  int iStack_574;
  int iStack_570;
  undefined4 uStack_56c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_560;
  TMultiMap<FString,TSharedRef<FManifestEntry,1>,FDefaultSetAllocator,FLocKeyMultiMapFuncs<TSharedRef<FManifestEntry,1>_>_>
  *local_540;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_538;
  FLocTextIdentity local_518;
  int local_4e8;
  FName local_4e4;
  FLocTextIdentity *local_4d8;
  TReferenceControllerBase<1> *local_4d0;
  FName local_4c8;
  FName local_4c0;
  TSharedPtr<FInternationalizationArchive,1> local_4b8;
  TMultiMap<FString,TSharedRef<FManifestEntry,1>,FDefaultSetAllocator,FLocKeyMultiMapFuncs<TSharedRef<FManifestEntry,1>_>_>
  *local_4a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4a0;
  FString local_480;
  TSharedRef<FInternationalizationManifest,1> local_470;
  FString local_460;
  FString local_450;
  FString local_440;
  TSharedPtr<FCulture,1> local_430;
  FTextFormat local_420;
  FText local_410;
  TSharedPtr<FCulture,1> local_400;
  TSharedPtr<FCulture,1> local_3f0;
  TSharedPtr<FLocMetadataObject,1> local_3e0;
  FFormatArgumentValue local_3d0;
  FFormatArgumentValue local_3a8;
  undefined4 local_388;
  FText local_378;
  FText local_368;
  FText local_358;
  undefined8 local_348;
  TReferenceControllerBase<1> *pTStack_340;
  FText local_338;
  TSharedRef<FTokenizedMessage,1> local_328;
  FText local_318;
  FText local_308;
  FText local_2f8;
  FText local_2e8;
  TSharedRef<FTokenizedMessage,1> local_2d8;
  FText local_2c8;
  FText local_2b8;
  FText local_2a8;
  FText local_298;
  TSharedPtr<FInternationalizationManifest,1> local_288;
  FText local_278;
  FText local_268;
  TSharedRef<FTokenizedMessage,1> local_258;
  FFormatArgumentValue local_248;
  FFormatArgumentValue local_228;
  FFormatArgumentValue local_208;
  FText local_1e8;
  FText local_1d8;
  FText local_1c8;
  TSharedPtr<FInternationalizationArchive,1> local_1b8;
  TSharedPtr<FInternationalizationArchive,1> local_1a8;
  FMessageLog local_198;
  FMessageLog local_168;
  FMessageLog local_138;
  FTextFormat local_108;
  FTextFormat local_f8;
  FTextFormat local_e8;
  FTextFormat local_d8;
  FText local_c8;
  FText local_b8 [3];
  undefined1 local_88 [32];
  uint *local_68;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_6c8;
  local_5b0 = this;
  pFVar12 = FText::AsLocalizable_Advanced_LocText
                      (&local_298,L"TranslationDataManager",L"LoadingTranslationData",
                       L"Loading Translation Data...");
  FFeedbackContext::BeginSlowTask(GWarn,pFVar12,true,false);
  if (local_298.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
  }
  local_600.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_600.ArrayNum = 0;
  local_600.ArrayMax = 0;
  pTVar13 = ReadManifest(this,&local_288,&this->OpenedManifestFilePath);
  this_01 = &this->ManifestAtHeadRevisionPtr;
  if (this_01 != pTVar13) {
    this_01->Object = pTVar13->Object;
    pTVar13->Object = (FInternationalizationManifest *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ManifestAtHeadRevisionPtr).SharedReferenceCount,
               &pTVar13->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_288.SharedReferenceCount.ReferenceController);
  if (this_01->Object == (FInternationalizationManifest *)0x0) {
    this->bLoadedSuccessfully = false;
    local_5d8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_5d8.Pairs.ArrayNum = 0;
    local_5d8.Pairs.ArrayMax = 0;
    pFVar12 = FText::FromString(&local_2e8,&this->OpenedManifestFilePath);
    local_3d0.Type = Text;
    FText::FText((FText *)&local_3d0.TextValue,pFVar12);
    if ((local_3d0.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0xbd,
                            L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                           ), bVar34)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    ::FString::FString(&local_460,L"ManifestFilePath");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_5d8,&local_460,&local_3d0);
    if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_460.Data.AllocatorInstance.Data);
    }
    if (local_3d0.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_3d0.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_2e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2e8.TextData.Reference + 0x10))();
    }
    ::FName::FName(&local_4c0,"TranslationEditor");
    FMessageLog::FMessageLog(&local_138,&local_4c0);
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_2b8,L"TranslationDataManager",L"FailedToLoadCurrentManifest",
                         L"Failed to load most current translation manifest ({ManifestFilePath}), unable to load translations."
                        );
    pFVar14 = FTextFormat::FTextFormat(&local_108,pFVar12,Default);
    pFVar12 = FText::Format(&local_2c8,pFVar14,&local_5d8);
    FMessageLog::Error(&local_138,&local_2d8,pFVar12);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d8.SharedReferenceCount.ReferenceController);
    if (local_2c8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2c8.TextData.Reference + 0x10))();
    }
    if (local_2b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2b8.TextData.Reference + 0x10))();
    }
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_2a8,L"TranslationDataManager",L"TranslationLoadError",
                         L"Error Loading Translations!");
    FMessageLog::Notify(&local_138,pFVar12,Info,false);
    if (local_2a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2a8.TextData.Reference + 0x10))();
    }
    FMessageLog::Open(&local_138,Error,false);
    FMessageLog::~FMessageLog(&local_138);
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_5d8.Pairs.AllocatorInstance.Data,
               local_5d8.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_5d8.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_5d8.Pairs.AllocatorInstance.Data);
    }
    goto LAB_146bb27c0;
  }
  TSharedPtr<FInternationalizationManifest,1>::ToSharedRef(this_01,&local_470);
  iVar29 = *(int *)&((local_470.Object)->EntriesBySourceText).field_0x8 -
           *(int *)&((local_470.Object)->EntriesBySourceText).field_0x34;
  local_634 = iVar29;
  if (iVar29 < 1) {
    this->bLoadedSuccessfully = false;
    local_630.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_630.Pairs.ArrayNum = 0;
    local_630.Pairs.ArrayMax = 0;
    pFVar12 = FText::FromString(&local_278,&this->OpenedManifestFilePath);
    local_248.Type = Text;
    TOptional<FText>::TOptional<FText>(&local_248.TextValue,pFVar12);
    ::FString::FString(&local_450,L"ManifestFilePath");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_630,&local_450,&local_248);
    if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_450.Data.AllocatorInstance.Data);
    }
    if (local_248.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_248.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_278.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_278.TextData.Reference + 0x10))();
    }
    local_430.Object = (FCulture *)0x0;
    local_430.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar12 = FText::AsNumber(&local_268,iVar29,(FNumberFormattingOptions *)0x0,&local_430);
    local_228.Type = Text;
    TOptional<FText>::TOptional<FText>(&local_228.TextValue,pFVar12);
    ::FString::FString(&local_440,L"ManifestEntriesCount");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_630,&local_440,&local_228);
    if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_440.Data.AllocatorInstance.Data);
    }
    if (local_228.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_228.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_268.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_268.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_430.SharedReferenceCount.ReferenceController);
    ::FName::FName(&local_4e4,"TranslationEditor");
    FMessageLog::FMessageLog(&local_198,&local_4e4);
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_1d8,L"TranslationDataManager",L"CurrentManifestEmpty",
                         L"Most current translation manifest ({ManifestFilePath}) has {ManifestEntriesCount} entries."
                        );
    pFVar14 = FTextFormat::FTextFormat(&local_d8,pFVar12,Default);
    pFVar12 = FText::Format(&local_1e8,pFVar14,&local_630);
    FMessageLog::Error(&local_198,&local_258,pFVar12);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_258.SharedReferenceCount.ReferenceController);
    if (local_1e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1e8.TextData.Reference + 0x10))();
    }
    if (local_1d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1d8.TextData.Reference + 0x10))();
    }
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_1c8,L"TranslationDataManager",L"TranslationLoadError",
                         L"Error Loading Translations!");
    FMessageLog::Notify(&local_198,pFVar12,Info,false);
    if (local_1c8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1c8.TextData.Reference + 0x10))();
    }
    FMessageLog::Open(&local_198,Error,false);
    FMessageLog::~FMessageLog(&local_198);
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_630.Pairs.AllocatorInstance.Data,
               local_630.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_630.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_630.Pairs.AllocatorInstance.Data);
    }
  }
  pTVar15 = ReadArchive(this,&local_1b8,&this->OpenedArchiveFilePath);
  pTVar16 = &this->ArchivePtr;
  if (pTVar16 != pTVar15) {
    pTVar16->Object = pTVar15->Object;
    pTVar15->Object = (FInternationalizationArchive *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ArchivePtr).SharedReferenceCount,&pTVar15->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b8.SharedReferenceCount.ReferenceController);
  iVar11 = (this->NativeArchiveFilePath).Data.ArrayNum;
  iVar30 = (this->OpenedArchiveFilePath).Data.ArrayNum;
  if (iVar11 == iVar30) {
    if (1 < iVar11) {
      iVar11 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(this->NativeArchiveFilePath).Data.AllocatorInstance.Data,
                          (wchar_t *)(this->OpenedArchiveFilePath).Data.AllocatorInstance.Data);
      bVar34 = iVar11 == 0;
      goto LAB_146bb1523;
    }
LAB_146bb154e:
    local_4b8.Object = pTVar16->Object;
    local_4b8.SharedReferenceCount.ReferenceController =
         (this->ArchivePtr).SharedReferenceCount.ReferenceController;
    if (local_4b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_4b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_4b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar16 = &local_4b8;
    bVar9 = false;
    bVar34 = true;
  }
  else {
    bVar34 = iVar11 + iVar30 == 1;
LAB_146bb1523:
    if (bVar34) goto LAB_146bb154e;
    pTVar16 = ReadArchive(this,&local_1a8,&this->NativeArchiveFilePath);
    bVar34 = false;
    bVar9 = true;
  }
  iVar11 = 0;
  if (&this->NativeArchivePtr != pTVar16) {
    (this->NativeArchivePtr).Object = pTVar16->Object;
    pTVar16->Object = (FInternationalizationArchive *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->NativeArchivePtr).SharedReferenceCount,&pTVar16->SharedReferenceCount);
  }
  if (bVar34) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4b8.SharedReferenceCount.ReferenceController);
  }
  if (bVar9) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a8.SharedReferenceCount.ReferenceController);
  }
  if ((this->ArchivePtr).Object == (FInternationalizationArchive *)0x0) {
    this->bLoadedSuccessfully = false;
    local_5e8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_5e8.Pairs.ArrayNum = 0;
    local_5e8.Pairs.ArrayMax = 0;
    pFVar12 = FText::FromString(&local_338,&this->OpenedArchiveFilePath);
    local_208.Type = Text;
    TOptional<FText>::TOptional<FText>(&local_208.TextValue,pFVar12);
    ::FString::FString(&local_480,L"ArchiveFilePath");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_5e8,&local_480,&local_208);
    if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_480.Data.AllocatorInstance.Data);
    }
    if (local_208.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_208.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_338.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_338.TextData.Reference + 0x10))();
    }
    ::FName::FName(&local_4c8,"TranslationEditor");
    FMessageLog::FMessageLog(&local_168,&local_4c8);
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_308,L"TranslationDataManager",L"FailedToLoadCurrentArchive",
                         L"Failed to load most current translation archive ({ArchiveFilePath}), unable to load translations."
                        );
    pFVar14 = FTextFormat::FTextFormat(&local_e8,pFVar12,Default);
    pFVar12 = FText::Format(&local_318,pFVar14,&local_5e8);
    FMessageLog::Error(&local_168,&local_328,pFVar12);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_328.SharedReferenceCount.ReferenceController);
    if (local_318.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_318.TextData.Reference + 0x10))();
    }
    if (local_308.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_308.TextData.Reference + 0x10))();
    }
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_2f8,L"TranslationDataManager",L"TranslationLoadError",
                         L"Error Loading Translations!");
    FMessageLog::Notify(&local_168,pFVar12,Info,false);
    if (local_2f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2f8.TextData.Reference + 0x10))();
    }
    FMessageLog::Open(&local_168,Error,false);
    FMessageLog::~FMessageLog(&local_168);
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_5e8.Pairs.AllocatorInstance.Data,
               local_5e8.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_5e8.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_5e8.Pairs.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_470.SharedReferenceCount.ReferenceController);
  }
  else {
    local_638 = 0;
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_368,L"TranslationDataManager",L"LoadingCurrentManifest",
                         L"Loading Entries from Current Translation Manifest...");
    FFeedbackContext::BeginSlowTask(GWarn,pFVar12,true,false);
    if (local_368.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_368.TextData.Reference + 0x10))();
    }
    pTVar1 = &(local_470.Object)->EntriesBySourceText;
    local_560._padding_._4_4_ = 1;
    local_560.UnvisitedBitMask = 0xffffffff;
    local_560.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)
         &((local_470.Object)->EntriesBySourceText).field_0x10;
    local_560._padding_._0_4_ = 0;
    local_560.CurrentBitIndex = 0;
    local_560.BaseBitIndex = 0;
    if (*(int *)&((local_470.Object)->EntriesBySourceText).field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_560);
    }
    uStack_588 = CONCAT44(local_560._padding_._4_4_,(undefined4)local_560._padding_);
    uStack_578 = local_560.UnvisitedBitMask;
    iStack_574 = local_560.CurrentBitIndex;
    iStack_570 = local_560.BaseBitIndex;
    uStack_56c = local_560._28_4_;
    pTStack_580 = local_560.Array;
    TStack_538.CurrentBitIndex = local_560.CurrentBitIndex;
    TStack_538.UnvisitedBitMask = local_560.UnvisitedBitMask;
    TStack_538.Array = local_560.Array;
    TStack_538.BaseBitIndex = local_560.BaseBitIndex;
    TStack_538._28_4_ = local_560._28_4_;
    local_590 = pTVar1;
    local_540 = pTVar1;
    TStack_538._padding_ = uStack_588;
    if (local_560.CurrentBitIndex < (local_560.Array)->NumBits) {
      do {
        iVar30 = 0;
        local_3f0.Object = (FCulture *)0x0;
        local_3f0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar12 = FText::AsNumber(&local_c8,iVar29,(FNumberFormattingOptions *)0x0,&local_3f0);
        local_400.Object = (FCulture *)0x0;
        local_400.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar17 = FText::AsNumber(local_b8,iVar11,(FNumberFormattingOptions *)0x0,&local_400);
        pFVar18 = FText::AsLocalizable_Advanced_LocText
                            (&local_358,L"TranslationDataManager",L"LoadingCurrentManifestEntries",
                             L"Loading Entry {0} of {1} from Current Translation Manifest...");
        pFVar14 = FTextFormat::FTextFormat(&local_f8,pFVar18,Default);
        local_3a8.Type = Text;
        FText::FText((FText *)&local_3a8.TextValue,pFVar17);
        if ((local_3a8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0xbd,
                                L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                               ), bVar34)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_388 = 4;
        FText::FText(&local_378,pFVar12);
        if ((local_378.TextData.Reference == (ITextData *)0x0) &&
           (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0xbd,
                                L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                               ), bVar34)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_620.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_620.ArrayNum = 2;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,2,0,&local_620.AllocatorInstance,2,&local_620.ArrayMax);
        ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                  (local_620.AllocatorInstance.Data,&local_3a8,2);
        local_420.TextFormatData.Object = (pFVar14->TextFormatData).Object;
        local_420.TextFormatData.SharedReferenceCount.ReferenceController =
             (pFVar14->TextFormatData).SharedReferenceCount.ReferenceController;
        if (local_420.TextFormatData.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_420.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               = (atomic<int>)
                 ((int)(local_420.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
          UNLOCK();
        }
        FText::Format(&local_410,&local_420,&local_620);
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_620.AllocatorInstance.Data,local_620.ArrayNum);
        if ((FFormatArgumentValue *)local_620.AllocatorInstance.Data != (FFormatArgumentValue *)0x0)
        {
          FMemory::Free(local_620.AllocatorInstance.Data);
        }
        if (local_378.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_378.TextData.Reference + 0x10))();
        }
        if (local_3a8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_3a8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((pFVar14->TextFormatData).SharedReferenceCount.ReferenceController);
        pIVar4 = (pFVar17->TextData).Reference;
        if (pIVar4 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar4 + 0x10))();
        }
        pIVar4 = (pFVar12->TextData).Reference;
        if (pIVar4 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar4 + 0x10))();
        }
        FFeedbackContext::StatusUpdate(GWarn,iVar11,iVar29,&local_410);
        if (local_410.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_410.TextData.Reference + 0x10))();
        }
        if (local_358.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_358.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_400.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3f0.SharedReferenceCount.ReferenceController);
        local_4d0 = *(TReferenceControllerBase<1> **)
                     (*(longlong *)local_540 + 0x18 + (longlong)TStack_538.CurrentBitIndex * 0x28);
        pFVar5 = *(FLocKey **)
                  (*(longlong *)local_540 + 0x10 + (longlong)TStack_538.CurrentBitIndex * 0x28);
        if (local_4d0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_4d0->SharedReferenceCount = (atomic<int>)((int)local_4d0->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_88._0_8_ = 0;
        local_88._8_8_ = 0;
        local_68 = (uint *)0x0;
        local_60 = 0;
        local_5c = 0x80;
        local_58 = 0xffffffff;
        local_54 = 0;
        local_48 = (ForElementType<FSetElementId>)0x0;
        local_40 = 0;
        for (; (iVar29 = 0, -1 < iVar30 && (iVar30 < (int)pFVar5[2].Hash)); iVar30 = iVar30 + 1) {
          local_668._0_8_ = (FScriptContainerElement *)0x0;
          local_668._8_4_ = 0;
          local_668._12_4_ = 0;
          local_658._0_8_ = (FScriptContainerElement *)0x0;
          local_658._8_4_ = 0;
          local_658._12_4_ = 0;
          local_648 = (FTranslationChange *)0x0;
          local_640 = 0;
          if (iVar30 < 0) {
            bVar34 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar34) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar29 = local_658._12_4_;
          }
          pFVar26 = (FLocKey *)((longlong)iVar30 * 0x58 + *(longlong *)&pFVar5[2].Str.Data.ArrayNum)
          ;
          if ((FLocKey *)local_658 != pFVar26 + 1) {
            iVar11 = pFVar26[1].Str.Data.ArrayNum;
            pFVar27 = pFVar26[1].Str.Data.AllocatorInstance.Data;
            local_658._8_4_ = iVar11;
            if ((iVar11 == 0) && (iVar29 == 0)) {
              local_658._8_4_ = 0;
              local_658._12_4_ = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar11,iVar29,(ForAnyElementType *)local_658,iVar11,
                         (int *)(local_658 + 0xc));
              if (iVar11 != 0) {
                memcpy((void *)local_658._0_8_,pFVar27,(longlong)iVar11 * 2);
              }
            }
          }
          if ((FLocKey *)local_668 != pFVar26) {
            iVar29 = (pFVar26->Str).Data.ArrayNum;
            pFVar27 = (pFVar26->Str).Data.AllocatorInstance.Data;
            local_668._8_4_ = iVar29;
            if ((iVar29 == 0) && (local_668._12_4_ == 0)) {
              local_668._8_4_ = 0;
              local_668._12_4_ = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar29,local_668._12_4_,(ForAnyElementType *)local_668,iVar29,
                         (int *)(local_668 + 0xc));
              if (iVar29 != 0) {
                memcpy((void *)local_668._0_8_,pFVar27,(longlong)iVar29 * 2);
              }
            }
          }
          ::FString::FString(&local_5c8,(FString *)pFVar26);
          local_5b8 = pFVar26->Hash;
          ::FString::FString(&local_5a8,&pFVar5->Str);
          FVar25.Data = local_5a8.Data.AllocatorInstance.Data;
          FVar31.Data = local_5c8.Data.AllocatorInstance.Data;
          local_518.Namespace.Hash = pFVar5->Hash;
          local_518.Namespace.Str.Data.ArrayNum = local_5a8.Data.ArrayNum;
          local_518.Namespace.Str.Data.ArrayMax = local_5a8.Data.ArrayMax;
          local_518.Key.Str.Data.ArrayNum = local_5c8.Data.ArrayNum;
          local_518.Key.Str.Data.ArrayMax = local_5c8.Data.ArrayMax;
          local_5a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_598 = 0;
          local_5c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          uVar22 = local_518.Namespace.Hash - local_5b8 ^ local_5b8 >> 0xd;
          local_518.Key.Hash = local_5b8;
          local_518.Namespace.Str.Data.AllocatorInstance.Data = FVar25.Data;
          local_5a8.Data.ArrayNum = 0;
          local_5a8.Data.ArrayMax = 0;
          iVar29 = local_5b8 - uVar22;
          local_518.Key.Str.Data.AllocatorInstance.Data = FVar31.Data;
          local_5c8.Data.ArrayNum = 0;
          local_5c8.Data.ArrayMax = 0;
          uVar21 = (-0x61c88647 - uVar22) - local_5b8 ^ uVar22 << 8;
          local_5b8 = 0;
          uVar33 = iVar29 - uVar21 ^ uVar21 >> 0xd;
          uVar22 = (uVar22 - uVar33) - uVar21 ^ uVar33 >> 0xc;
          uVar21 = (uVar21 - uVar22) - uVar33 ^ uVar22 << 0x10;
          uVar33 = (uVar33 - uVar21) - uVar22 ^ uVar21 >> 5;
          uVar22 = (uVar22 - uVar33) - uVar21 ^ uVar33 >> 3;
          uVar21 = (uVar21 - uVar22) - uVar33 ^ uVar22 << 10;
          uVar21 = (uVar33 - uVar21) - uVar22 ^ uVar21 >> 0xf;
          iVar29 = TSet<TTuple<FLocTextIdentity,UTranslationUnit_*>,TDefaultMapHashableKeyFuncs<FLocTextIdentity,UTranslationUnit_*,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<FLocTextIdentity>
                             ((TSet<TTuple<FLocTextIdentity,UTranslationUnit_*>,TDefaultMapHashableKeyFuncs<FLocTextIdentity,UTranslationUnit_*,0>,FDefaultSetAllocator>
                               *)local_88,uVar21,&local_518);
          if ((iVar29 == -1) || (lVar23 = (longlong)iVar29 * 0x40 + local_88._0_8_, lVar23 == 0)) {
            local_4d8 = &local_518;
            TSet<TTuple<FLocTextIdentity,UTranslationUnit_*>,TDefaultMapHashableKeyFuncs<FLocTextIdentity,UTranslationUnit_*,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TKeyInitializer<FLocTextIdentity_&&>_>
                      ((TSet<TTuple<FLocTextIdentity,UTranslationUnit_*>,TDefaultMapHashableKeyFuncs<FLocTextIdentity,UTranslationUnit_*,0>,FDefaultSetAllocator>
                        *)local_88,(uint)local_5f0,
                       (TKeyInitializer<FLocTextIdentity_&&> *)(ulonglong)uVar21,(bool *)&local_4d8)
            ;
            lVar23 = (longlong)local_5f0[0] * 0x40 + local_88._0_8_;
            FVar25.Data = local_518.Namespace.Str.Data.AllocatorInstance.Data;
            FVar31.Data = local_518.Key.Str.Data.AllocatorInstance.Data;
          }
          if (FVar31.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar31.Data);
            FVar25.Data = local_518.Namespace.Str.Data.AllocatorInstance.Data;
          }
          if (FVar25.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar25.Data);
          }
          if (*(longlong *)(lVar23 + 0x30) == 0) {
            pUVar19 = GetTransientPackageAsObject();
            pUVar20 = NewObject<UTranslationUnit>(pUVar19);
            *(UTranslationUnit **)(lVar23 + 0x30) = pUVar20;
            if ((pUVar20 == (UTranslationUnit *)0x0) &&
               (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TranslationUnit != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\TranslationEditor\\Private\\TranslationDataManager.cpp"
                                    ,0xa0,L""), bVar34)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            UObjectBase::AtomicallySetFlags(*(UObjectBase **)(lVar23 + 0x30),RF_Transactional);
            *(undefined1 *)(*(longlong *)(lVar23 + 0x30) + 0x78) = 0;
            lVar6 = *(longlong *)(lVar23 + 0x30);
            pFVar32 = (FLocKey *)(lVar6 + 0x48);
            if (pFVar32 != pFVar5 + 1) {
              iVar29 = pFVar5[1].Str.Data.ArrayNum;
              piVar24 = (int *)(lVar6 + 0x54);
              pFVar27 = pFVar5[1].Str.Data.AllocatorInstance.Data;
              *(int *)(lVar6 + 0x50) = iVar29;
              if ((iVar29 == 0) && (*piVar24 == 0)) {
                *piVar24 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar29,*piVar24,(ForAnyElementType *)pFVar32,iVar29,piVar24);
                if (iVar29 != 0) {
                  memcpy((pFVar32->Str).Data.AllocatorInstance.Data,pFVar27,(longlong)iVar29 * 2);
                }
              }
            }
            lVar6 = *(longlong *)(lVar23 + 0x30);
            pFVar32 = (FLocKey *)(lVar6 + 0x28);
            if (pFVar32 != pFVar5) {
              iVar29 = (pFVar5->Str).Data.ArrayNum;
              piVar24 = (int *)(lVar6 + 0x34);
              pFVar27 = (pFVar5->Str).Data.AllocatorInstance.Data;
              *(int *)(lVar6 + 0x30) = iVar29;
              if ((iVar29 == 0) && (*piVar24 == 0)) {
                *piVar24 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar29,*piVar24,(ForAnyElementType *)pFVar32,iVar29,piVar24);
                if (iVar29 != 0) {
                  memcpy((pFVar32->Str).Data.AllocatorInstance.Data,pFVar27,(longlong)iVar29 * 2);
                }
              }
            }
            lVar6 = *(longlong *)(lVar23 + 0x30);
            pFVar32 = (FLocKey *)(lVar6 + 0x38);
            if (pFVar32 != pFVar26) {
              iVar29 = (pFVar26->Str).Data.ArrayNum;
              piVar24 = (int *)(lVar6 + 0x44);
              pFVar27 = (pFVar26->Str).Data.AllocatorInstance.Data;
              *(int *)(lVar6 + 0x40) = iVar29;
              if ((iVar29 == 0) && (*piVar24 == 0)) {
                *piVar24 = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,iVar29,*piVar24,(ForAnyElementType *)pFVar32,iVar29,piVar24);
                if (iVar29 != 0) {
                  memcpy((pFVar32->Str).Data.AllocatorInstance.Data,pFVar27,(longlong)iVar29 * 2);
                }
              }
            }
            lVar6 = *(longlong *)&pFVar26[3].Str.Data.ArrayNum;
            lVar7 = *(longlong *)(lVar23 + 0x30);
            pFVar27 = pFVar26[3].Str.Data.AllocatorInstance.Data;
            if (lVar6 != 0) {
              LOCK();
              *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
              UNLOCK();
            }
            local_348 = *(undefined8 *)(lVar7 + 0xa0);
            pTStack_340 = *(TReferenceControllerBase<1> **)(lVar7 + 0xa8);
            *(FScriptContainerElement **)(lVar7 + 0xa0) = pFVar27;
            *(longlong *)(lVar7 + 0xa8) = lVar6;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_340);
          }
          this_02 = (local_5b0->NativeArchivePtr).Object;
          if ((this_02 != (FInternationalizationArchive *)0x0) &&
             (this_02 != (local_5b0->ArchivePtr).Object)) {
            local_3e0.Object = (FLocMetadataObject *)pFVar26[3].Str.Data.AllocatorInstance.Data;
            local_3e0.SharedReferenceCount.ReferenceController =
                 *(TReferenceControllerBase<1> **)&pFVar26[3].Str.Data.ArrayNum;
            if (local_3e0.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_3e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_3e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            FInternationalizationArchive::FindEntryByKey
                      (this_02,&local_610,pFVar5,pFVar26,&local_3e0);
            if (local_610.Object != (FArchiveEntry *)0x0) {
              if ((local_610.Object == (FArchiveEntry *)0x0) &&
                 (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar34)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              this_00 = &(local_610.Object)->Translation;
              if ((local_610.Object == (FArchiveEntry *)0x0) &&
                 (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar34)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              bVar34 = FLocItem::IsExactMatch(this_00,&(local_610.Object)->Source);
              if (!bVar34) {
                if ((local_610.Object == (FArchiveEntry *)0x0) &&
                   (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar34)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                iVar11 = ((local_610.Object)->Translation).Text.Data.ArrayNum;
                iVar29 = iVar11 + -1;
                if (iVar11 == 0) {
                  iVar29 = 0;
                }
                ::FString::AssignRange
                          ((FString *)(*(longlong *)(lVar23 + 0x30) + 0x48),
                           (wchar_t *)
                           ((local_610.Object)->Translation).Text.Data.AllocatorInstance.Data,iVar29
                          );
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_610.SharedReferenceCount.ReferenceController);
          }
          lVar23 = *(longlong *)(lVar23 + 0x30);
          if (((*(undefined1 **)(lVar23 + 0x68) <= local_668) &&
              (local_668 <
               *(undefined1 **)(lVar23 + 0x68) + (longlong)*(int *)(lVar23 + 0x74) * 0x30)) &&
             (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar34)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar29 = *(int *)(lVar23 + 0x70);
          if (iVar29 == *(int *)(lVar23 + 0x74)) {
            iVar29 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x830,(ForAnyElementType *)(lVar23 + 0x68),(int *)(lVar23 + 0x74));
          }
          *(int *)(lVar23 + 0x70) = iVar29 + 1;
          this_03 = (FString *)(*(longlong *)(lVar23 + 0x68) + (longlong)iVar29 * 0x30);
          ::FString::FString(this_03,(FString *)local_668);
          ::FString::FString(this_03 + 1,(FString *)local_658);
          pFVar10 = local_648;
          pFVar2 = this_03 + 2;
          (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          piVar24 = &this_03[2].Data.ArrayMax;
          iVar29 = (int)local_640;
          this_03[2].Data.ArrayNum = (int)local_640;
          if ((int)local_640 == 0) {
            *piVar24 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,(int)local_640,0,(ForAnyElementType *)pFVar2,(int)local_640,piVar24);
            ConstructItems<FTranslationChange,FTranslationChange,int>
                      ((pFVar2->Data).AllocatorInstance.Data,pFVar10,iVar29);
          }
          DestructItems<FTranslationChange,int>(local_648,(int)local_640);
          if (local_648 != (FTranslationChange *)0x0) {
            FMemory::Free(local_648);
          }
          if ((FScriptContainerElement *)local_658._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_658._0_8_);
          }
          if ((FScriptContainerElement *)local_668._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_668._0_8_);
          }
        }
        uVar21 = local_88._8_4_ - local_54;
        local_678.Data = (FScriptContainerElement *)0x0;
        local_670 = 0;
        local_66c = 0;
        if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
        }
        if (uVar21 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar21,&local_678,0,&local_66c);
        }
        uVar21 = 1;
        iStack_574 = iVar29;
        iStack_570 = iVar29;
        if (local_60 != 0) {
          puVar28 = (uint *)(local_88 + 0x10);
          if (local_68 != (uint *)0x0) {
            puVar28 = local_68;
          }
          uVar22 = *puVar28;
          while (uVar22 == 0) {
            lVar23 = (longlong)iVar29;
            iStack_570 = iStack_570 + 0x20;
            iVar29 = iVar29 + 1;
            iStack_574 = local_60;
            if ((int)(local_60 + -1 + (local_60 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar29)
            goto LAB_146bb2192;
            uVar22 = (puVar28 + 1)[lVar23];
          }
          uVar21 = -uVar22 & uVar22;
          uVar3 = (ulonglong)uVar21 * 2 + 1;
          lVar23 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar23 == 0; lVar23 = lVar23 + -1) {
            }
          }
          local_4e8 = (int)lVar23;
          iStack_574 = local_4e8 + -1 + iStack_570;
          if (local_60 < iStack_574) {
            iStack_574 = local_60;
          }
        }
LAB_146bb2192:
        local_590 = (TMultiMap<FString,TSharedRef<FManifestEntry,1>,FDefaultSetAllocator,FLocKeyMultiMapFuncs<TSharedRef<FManifestEntry,1>_>_>
                     *)local_88;
        pTStack_580 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
        uStack_588 = CONCAT44(uVar21,iVar29);
        uStack_578 = 0xffffffff;
        uStack_56c = local_b8[2]._12_4_;
        TStack_4a0.CurrentBitIndex = iStack_574;
        TStack_4a0.UnvisitedBitMask = 0xffffffff;
        TStack_4a0._padding_ = uStack_588;
        TStack_4a0._28_4_ = local_b8[2]._12_4_;
        TStack_4a0.BaseBitIndex = iStack_570;
        local_4a8 = local_590;
        TStack_4a0.Array = pTStack_580;
        iVar29 = iStack_574;
        if (iStack_574 < local_60) {
          do {
            pFVar27 = (FScriptContainerElement *)
                      (*(longlong *)local_4a8 + 0x30 + (longlong)iVar29 * 0x40);
            if (((local_678.Data <= pFVar27) && (pFVar27 < local_678.Data + (longlong)local_66c * 8)
                ) && (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar34)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            if (local_670 == local_66c) {
              local_670 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x808,&local_678,&local_66c);
            }
            *(undefined8 *)(local_678.Data + (longlong)local_670 * 8) = *(undefined8 *)pFVar27;
            TStack_4a0.UnvisitedBitMask = TStack_4a0.UnvisitedBitMask & ~TStack_4a0._padding_._4_4_;
            local_670 = local_670 + 1;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4a0);
            iVar29 = TStack_4a0.CurrentBitIndex;
          } while (TStack_4a0.CurrentBitIndex < (TStack_4a0.Array)->NumBits);
        }
        iVar29 = local_670;
        if (local_670 != 0) {
          iVar11 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (8,8,local_670,&local_600.AllocatorInstance,&local_600.ArrayNum,
                              &local_600.ArrayMax);
          memcpy(local_600.AllocatorInstance.Data + (longlong)iVar11 * 8,local_678.Data,
                 (longlong)iVar29 << 3);
        }
        if (local_678.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_678.Data);
        }
        local_40 = 0;
        if (local_48 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_48);
        }
        TSparseArray<TSparseSetElement<TTuple<FLocTextIdentity,UTranslationUnit_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FLocTextIdentity,UTranslationUnit_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FLocTextIdentity,UTranslationUnit_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_88);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4d0);
        TStack_538.UnvisitedBitMask = TStack_538.UnvisitedBitMask & ~TStack_538._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_538);
        local_638 = local_638 + 1;
        this = local_5b0;
        iVar29 = local_634;
        iVar11 = local_638;
      } while (TStack_538.CurrentBitIndex < (TStack_538.Array)->NumBits);
    }
    FFeedbackContext::EndSlowTask(GWarn);
    LoadFromArchive(this,&local_600,false,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_470.SharedReferenceCount.ReferenceController);
  }
LAB_146bb27c0:
  FFeedbackContext::EndSlowTask(GWarn);
  if (local_600.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_600.AllocatorInstance.Data);
  }
  return;
}

// LoadFromArchive @ 146bb31e0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FTranslationDataManager::LoadFromArchive
          (FTranslationDataManager *this,
          TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2,bool param_3)

{
  int *piVar1;
  int iVar2;
  ITextData *pIVar3;
  void *pvVar4;
  code *pcVar5;
  longlong lVar6;
  FArchiveEntry *pFVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  FText *pFVar11;
  TSharedPtr<FInternationalizationArchive,1> *pTVar12;
  TSharedPtr<FInternationalizationArchive,1> *pTVar13;
  FUObjectItem *pFVar14;
  FText *pFVar15;
  FText *pFVar16;
  FTextFormat *pFVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_> *pTVar23;
  int *piVar24;
  ForAnyElementType *pFVar25;
  TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_> *pTVar26;
  ulonglong uVar27;
  TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_> *pTVar28;
  ulonglong uVar29;
  uint uVar30;
  TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_> *pTVar31;
  bool bVar32;
  uint local_res20;
  longlong local_318;
  ForAnyElementType local_310;
  int local_308;
  int local_304;
  TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_> local_300;
  FString local_2f0;
  FString local_2e0;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_2d0;
  longlong local_2c0;
  TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_> *local_2b8;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_2b0
  ;
  longlong local_2a0;
  TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_> *local_298;
  int *local_290;
  TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_> *local_288;
  longlong local_280;
  TSharedPtr<FArchiveEntry,1> local_278;
  FInternationalizationArchive *local_268;
  int *local_260;
  TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_> *local_258;
  int *local_250;
  TReferenceControllerBase<1> *local_248;
  FName local_240;
  TSharedPtr<FInternationalizationArchive,1> local_238;
  FLocKey local_228;
  FLocKey local_210;
  TSharedPtr<FCulture,1> local_1f8;
  TSharedPtr<FCulture,1> local_1e8;
  TSharedPtr<FLocMetadataObject,1> local_1d8;
  FString local_1c8;
  FTextFormat local_1b8;
  FText local_1a8;
  FFormatArgumentValue local_198;
  FFormatArgumentValue local_178;
  undefined4 local_158;
  FText local_148;
  TSharedPtr<FInternationalizationArchive,1> local_138;
  FText local_128;
  FText local_118;
  TSharedRef<FTokenizedMessage,1> local_108;
  FText local_f8;
  FText local_e8;
  FText local_d8;
  FText local_c8;
  TSharedPtr<FInternationalizationArchive,1> local_b8;
  FMessageLog local_a8;
  FText local_78;
  FText local_68;
  FTextFormat local_58;
  FTextFormat local_48;
  
  pFVar11 = FText::AsLocalizable_Advanced_LocText
                      (&local_c8,L"TranslationDataManager",L"LoadingArchiveEntries",
                       L"Loading Entries from Translation Archive...");
  FFeedbackContext::BeginSlowTask(GWarn,pFVar11,true,false);
  if (local_c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
  }
  iVar9 = 0;
  if (!param_3) goto LAB_146bb3370;
  pTVar12 = ReadArchive(this,&local_b8,&this->OpenedArchiveFilePath);
  pTVar13 = &this->ArchivePtr;
  if (pTVar13 != pTVar12) {
    pTVar13->Object = pTVar12->Object;
    pTVar12->Object = (FInternationalizationArchive *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ArchivePtr).SharedReferenceCount,&pTVar12->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  iVar8 = (this->NativeArchiveFilePath).Data.ArrayNum;
  iVar2 = (this->OpenedArchiveFilePath).Data.ArrayNum;
  if (iVar8 == iVar2) {
    if (1 < iVar8) {
      iVar8 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->NativeArchiveFilePath).Data.AllocatorInstance.Data,
                         (wchar_t *)(this->OpenedArchiveFilePath).Data.AllocatorInstance.Data);
      bVar32 = iVar8 == 0;
      goto LAB_146bb32e6;
    }
LAB_146bb3310:
    local_238.Object = pTVar13->Object;
    local_238.SharedReferenceCount.ReferenceController =
         (this->ArchivePtr).SharedReferenceCount.ReferenceController;
    if (local_238.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar13 = &local_238;
    iVar8 = 2;
  }
  else {
    bVar32 = iVar8 + iVar2 == 1;
LAB_146bb32e6:
    if (bVar32) goto LAB_146bb3310;
    pTVar13 = ReadArchive(this,&local_138,&this->NativeArchiveFilePath);
    iVar8 = iVar9;
    iVar9 = 1;
  }
  if (&this->NativeArchivePtr != pTVar13) {
    (this->NativeArchivePtr).Object = pTVar13->Object;
    pTVar13->Object = (FInternationalizationArchive *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->NativeArchivePtr).SharedReferenceCount,&pTVar13->SharedReferenceCount);
  }
  if (iVar8 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_238.SharedReferenceCount.ReferenceController);
  }
  if (iVar9 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_138.SharedReferenceCount.ReferenceController);
  }
LAB_146bb3370:
  local_268 = (this->ArchivePtr).Object;
  if (local_268 == (FInternationalizationArchive *)0x0) {
    local_2b0.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b0.Pairs.ArrayNum = 0;
    local_2b0.Pairs.ArrayMax = 0;
    pFVar11 = FText::FromString(&local_118,&this->OpenedArchiveFilePath);
    local_198.Type = Text;
    FText::FText((FText *)&local_198.TextValue,pFVar11);
    if ((local_198.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0xbd,
                            L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                           ), bVar32)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    ::FString::FString(&local_1c8,L"ArchiveFilePath");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_2b0,&local_1c8,&local_198);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    if (local_198.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_198.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_118.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
    }
    ::FName::FName(&local_240,"TranslationEditor");
    FMessageLog::FMessageLog(&local_a8,&local_240);
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_d8,L"TranslationDataManager",L"FailedToLoadCurrentArchive",
                         L"Failed to load most current translation archive ({ArchiveFilePath}), unable to load translations."
                        );
    pFVar17 = FTextFormat::FTextFormat(&local_48,pFVar11,Default);
    pFVar11 = FText::Format(&local_f8,pFVar17,&local_2b0);
    FMessageLog::Error(&local_a8,&local_108,pFVar11);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_108.SharedReferenceCount.ReferenceController);
    if (local_f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
    }
    if (local_d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
    }
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_e8,L"TranslationDataManager",L"TranslationLoadError",
                         L"Error Loading Translations!");
    FMessageLog::Notify(&local_a8,pFVar11,Info,false);
    if (local_e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e8.TextData.Reference + 0x10))();
    }
    FMessageLog::Open(&local_a8,Error,false);
    FMessageLog::~FMessageLog(&local_a8);
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_2b0.Pairs.AllocatorInstance.Data,
               local_2b0.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_2b0.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_2b0.Pairs.AllocatorInstance.Data);
    }
  }
  else {
    local_248 = (this->ArchivePtr).SharedReferenceCount.ReferenceController;
    if (local_248 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_248->SharedReferenceCount = (atomic<int>)((int)local_248->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_300.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_300.ArrayNum = 0;
    local_300.ArrayMax = 0;
    if ((&local_300 == param_1) &&
       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar32)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = param_1->ArrayNum;
    if (iVar9 != 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar9,&local_300.AllocatorInstance,&local_300.ArrayNum,
                         &local_300.ArrayMax);
      memcpy(local_300.AllocatorInstance.Data + (longlong)iVar8 * 8,
             (param_1->AllocatorInstance).Data,(longlong)iVar9 << 3);
    }
    piVar24 = &(this->AllTranslations).ArrayMax;
    (this->AllTranslations).ArrayNum = 0;
    local_250 = piVar24;
    if (*piVar24 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->AllTranslations).AllocatorInstance,0,piVar24);
    }
    local_260 = &(this->Untranslated).ArrayMax;
    (this->Untranslated).ArrayNum = 0;
    if (*local_260 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->Untranslated).AllocatorInstance,0,local_260);
    }
    local_2b8 = &this->Review;
    local_290 = &(this->Review).ArrayMax;
    (this->Review).ArrayNum = 0;
    if (*local_290 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_2b8->AllocatorInstance,0,local_290);
    }
    pTVar26 = &this->Complete;
    piVar1 = &(this->Complete).ArrayMax;
    (this->Complete).ArrayNum = 0;
    local_288 = pTVar26;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar26->AllocatorInstance,0,piVar1);
    }
    pTVar31 = &this->ChangedOnImport;
    piVar1 = &(this->ChangedOnImport).ArrayMax;
    (this->ChangedOnImport).ArrayNum = 0;
    local_298 = pTVar31;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar31->AllocatorInstance,0,piVar1);
      local_2b8 = &this->Review;
    }
    pTVar28 = &this->Untranslated;
    local_res20 = 0;
    if (0 < local_300.ArrayNum) {
      pTVar23 = &this->AllTranslations;
      local_280 = 0;
      local_258 = pTVar23;
      do {
        lVar22 = local_280;
        uVar30 = 0;
        if ((int)local_res20 < local_300.ArrayNum) {
          uVar30 = ~local_res20 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar32)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_318 = *(longlong *)(local_300.AllocatorInstance.Data + lVar22);
        if (local_318 != 0) {
          pFVar14 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(local_318 + 0xc));
          if (((uint)((ulonglong)(pFVar14->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) == 0) {
            pFVar14 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(local_318 + 0xc));
            FUObjectItem::SetRootFlags(pFVar14,RootSet);
          }
          pFVar19 = (pTVar23->AllocatorInstance).Data;
          if (((pFVar19 <= (FScriptContainerElement *)&local_318) &&
              ((FScriptContainerElement *)&local_318 < pFVar19 + (longlong)pTVar23->ArrayMax * 8))
             && (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar32)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar9 = pTVar23->ArrayNum;
          if (iVar9 == pTVar23->ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&pTVar23->AllocatorInstance,piVar24);
          }
          pTVar23->ArrayNum = iVar9 + 1;
          local_1e8.Object = (FCulture *)0x0;
          local_1e8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          *(longlong *)((pTVar23->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_318;
          pFVar11 = FText::AsNumber(&local_78,local_300.ArrayNum,(FNumberFormattingOptions *)0x0,
                                    &local_1e8);
          local_1f8.Object = (FCulture *)0x0;
          local_1f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pFVar15 = FText::AsNumber(&local_68,local_res20,(FNumberFormattingOptions *)0x0,&local_1f8
                                   );
          pFVar16 = FText::AsLocalizable_Advanced_LocText
                              (&local_128,L"TranslationDataManager",L"LoadingCurrentArchiveEntries",
                               L"Loading Entry {0} of {1} from Translation Archive...");
          pFVar17 = FTextFormat::FTextFormat(&local_58,pFVar16,Default);
          local_178.Type = Text;
          FText::FText((FText *)&local_178.TextValue,pFVar15);
          if ((local_178.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0xbd,
                                  L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                 ), bVar32)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_158 = 4;
          FText::FText(&local_148,pFVar11);
          if ((local_148.TextData.Reference == (ITextData *)0x0) &&
             (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0xbd,
                                  L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                 ), bVar32)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_2d0.ArrayNum = 2;
          local_2d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,2,0,&local_2d0.AllocatorInstance,2,&local_2d0.ArrayMax);
          ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                    (local_2d0.AllocatorInstance.Data,&local_178,2);
          local_1b8.TextFormatData.Object = (pFVar17->TextFormatData).Object;
          local_1b8.TextFormatData.SharedReferenceCount.ReferenceController =
               (pFVar17->TextFormatData).SharedReferenceCount.ReferenceController;
          if (local_1b8.TextFormatData.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_1b8.TextFormatData.SharedReferenceCount.ReferenceController)->
            SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_1b8.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          FText::Format(&local_1a8,&local_1b8,&local_2d0);
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_2d0.AllocatorInstance.Data,local_2d0.ArrayNum);
          if ((FFormatArgumentValue *)local_2d0.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_2d0.AllocatorInstance.Data);
          }
          if (local_148.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
          }
          if (local_178.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_178.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar17->TextFormatData).SharedReferenceCount.ReferenceController);
          pIVar3 = (pFVar15->TextData).Reference;
          if (pIVar3 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar3 + 0x10))();
          }
          pIVar3 = (pFVar11->TextData).Reference;
          if (pIVar3 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar3 + 0x10))();
          }
          FFeedbackContext::StatusUpdate(GWarn,local_res20,local_300.ArrayNum,&local_1a8);
          if (local_1a8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
          }
          if (local_128.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1f8.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1e8.SharedReferenceCount.ReferenceController);
          local_1d8.Object = *(FLocMetadataObject **)(local_318 + 0xa0);
          local_1d8.SharedReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)(local_318 + 0xa8);
          if (local_1d8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          ::FString::FString(&local_210.Str,(FString *)(local_318 + 0x38));
          FVar18.Data = (FScriptContainerElement *)L"";
          if (local_210.Str.Data.ArrayNum != 0) {
            FVar18.Data = local_210.Str.Data.AllocatorInstance.Data;
          }
          local_210.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar18.Data,0);
          ::FString::FString(&local_228.Str,(FString *)(local_318 + 0x28));
          FVar18.Data = (FScriptContainerElement *)L"";
          if (local_228.Str.Data.ArrayNum != 0) {
            FVar18.Data = local_228.Str.Data.AllocatorInstance.Data;
          }
          local_228.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar18.Data,0);
          FInternationalizationArchive::FindEntryByKey
                    (local_268,&local_278,&local_228,&local_210,&local_1d8);
          if (local_228.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_228.Str.Data.AllocatorInstance.Data);
          }
          if (local_210.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_210.Str.Data.AllocatorInstance.Data);
          }
          if (local_278.Object != (FArchiveEntry *)0x0) {
            local_310.Data = (FScriptContainerElement *)0x0;
            local_308 = *(int *)(local_318 + 0x60);
            lVar22 = (longlong)local_308;
            pvVar4 = *(void **)(local_318 + 0x58);
            if (local_308 == 0) {
              local_304 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_308,0,&local_310,local_308,&local_304);
              memcpy(local_310.Data,pvVar4,lVar22 * 2);
            }
            ::FString::Reset((FString *)(local_318 + 0x58),0);
            if ((local_278.Object == (FArchiveEntry *)0x0) &&
               (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar32)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar7 = local_278.Object;
            lVar22 = local_318;
            if (((local_278.Object)->Translation).Text.Data.ArrayNum < 2) {
              uVar30 = 0;
              local_2c0 = 0;
              if (0 < *(int *)(local_318 + 0x70)) {
                local_2a0 = 0;
                do {
                  uVar20 = 0;
                  uVar27 = uVar20;
                  uVar29 = uVar20;
                  while( true ) {
                    lVar22 = local_318;
                    uVar21 = 0;
                    if ((int)uVar30 < *(int *)(local_318 + 0x70)) {
                      uVar21 = ~uVar30 >> 0x1f;
                    }
                    if ((uVar21 == 0) &&
                       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar32)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    lVar6 = local_318;
                    uVar21 = (uint)uVar20;
                    if (*(int *)(local_2a0 + 0x28 + *(longlong *)(lVar22 + 0x68)) <= (int)uVar21)
                    break;
                    uVar10 = 0;
                    if ((int)uVar30 < *(int *)(local_318 + 0x70)) {
                      uVar10 = ~uVar30 >> 0x1f;
                    }
                    if ((uVar10 == 0) &&
                       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar32)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    lVar22 = *(longlong *)(lVar6 + 0x68) + (longlong)(int)uVar30 * 0x30;
                    uVar10 = 0;
                    if ((int)uVar21 < *(int *)(lVar22 + 0x28)) {
                      uVar10 = ~uVar21 >> 0x1f;
                    }
                    if ((uVar10 == 0) &&
                       (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar32)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                    lVar6 = local_318;
                    if (1 < *(int *)(uVar29 + 0x30 + *(longlong *)(lVar22 + 0x20))) {
                      uVar10 = 0;
                      if ((int)uVar30 < *(int *)(local_318 + 0x70)) {
                        uVar10 = ~uVar30 >> 0x1f;
                      }
                      if ((uVar10 == 0) &&
                         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar32)) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      lVar22 = *(longlong *)(lVar6 + 0x68) + local_2c0 * 0x30;
                      uVar30 = 0;
                      if ((int)uVar21 < *(int *)(lVar22 + 0x28)) {
                        uVar30 = ~uVar21 >> 0x1f;
                      }
                      if ((uVar30 == 0) &&
                         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar32)) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      lVar22 = uVar27 * 0x38 + *(longlong *)(lVar22 + 0x20);
                      iVar9 = *(int *)(lVar22 + 0x30);
                      iVar8 = iVar9 + -1;
                      if (iVar9 == 0) {
                        iVar8 = 0;
                      }
                      ::FString::AssignRange
                                ((FString *)(local_318 + 0x58),*(wchar_t **)(lVar22 + 0x28),iVar8);
                      pTVar26 = local_2b8;
                      pFVar19 = (local_2b8->AllocatorInstance).Data;
                      if (((pFVar19 <= (FScriptContainerElement *)&local_318) &&
                          ((FScriptContainerElement *)&local_318 <
                           pFVar19 + (longlong)local_2b8->ArrayMax * 8)) &&
                         (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar32)) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      iVar9 = pTVar26->ArrayNum;
                      if (iVar9 == pTVar26->ArrayMax) {
                        iVar9 = UE::Core::Private::
                                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (0x808,&pTVar26->AllocatorInstance,local_290);
                        pTVar26->ArrayNum = iVar9;
                      }
                      pTVar26->ArrayNum = iVar9 + 1;
                      pFVar19 = (pTVar26->AllocatorInstance).Data;
                      pTVar31 = local_298;
                      goto LAB_146bb3fa0;
                    }
                    uVar20 = (ulonglong)(uVar21 + 1);
                    uVar27 = uVar27 + 1;
                    uVar29 = uVar29 + 0x38;
                  }
                  local_2a0 = local_2a0 + 0x30;
                  local_2c0 = local_2c0 + 1;
                  uVar30 = uVar30 + 1;
                } while ((int)uVar30 < *(int *)(local_318 + 0x70));
              }
              pFVar19 = (pTVar28->AllocatorInstance).Data;
              if (((pFVar19 <= (FScriptContainerElement *)&local_318) &&
                  ((FScriptContainerElement *)&local_318 <
                   pFVar19 + (longlong)(this->Untranslated).ArrayMax * 8)) &&
                 (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar32)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar9 = (this->Untranslated).ArrayNum;
              if (iVar9 == (this->Untranslated).ArrayMax) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&pTVar28->AllocatorInstance,local_260);
                (this->Untranslated).ArrayNum = iVar9;
              }
              (this->Untranslated).ArrayNum = iVar9 + 1;
              pFVar19 = (pTVar28->AllocatorInstance).Data;
              pTVar31 = local_298;
            }
            else {
              iVar9 = ((local_278.Object)->Source).Text.Data.ArrayNum;
              if (iVar9 == *(int *)(local_318 + 0x50)) {
                if (1 < iVar9) {
                  iVar9 = wcscmp((wchar_t *)
                                 ((local_278.Object)->Source).Text.Data.AllocatorInstance.Data,
                                 *(wchar_t **)(local_318 + 0x48));
                  bVar32 = iVar9 == 0;
                  goto LAB_146bb3e27;
                }
              }
              else {
                bVar32 = iVar9 + *(int *)(local_318 + 0x50) == 1;
LAB_146bb3e27:
                if (!bVar32) {
                  iVar9 = (pFVar7->Translation).Text.Data.ArrayNum;
                  iVar8 = iVar9 + -1;
                  if (iVar9 == 0) {
                    iVar8 = 0;
                  }
                  ::FString::AssignRange
                            ((FString *)(lVar22 + 0x58),
                             (wchar_t *)(pFVar7->Translation).Text.Data.AllocatorInstance.Data,iVar8
                            );
                  pTVar26 = local_2b8;
                  pFVar19 = (local_2b8->AllocatorInstance).Data;
                  if (((pFVar19 <= (FScriptContainerElement *)&local_318) &&
                      ((FScriptContainerElement *)&local_318 <
                       pFVar19 + (longlong)local_2b8->ArrayMax * 8)) &&
                     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar32)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  iVar9 = pTVar26->ArrayNum;
                  if (iVar9 == pTVar26->ArrayMax) {
                    iVar9 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x808,&pTVar26->AllocatorInstance,local_290);
                    pTVar26->ArrayNum = iVar9;
                  }
                  pTVar26->ArrayNum = iVar9 + 1;
                  pFVar19 = (pTVar26->AllocatorInstance).Data;
                  goto LAB_146bb3fa0;
                }
              }
              iVar9 = (pFVar7->Translation).Text.Data.ArrayNum;
              iVar8 = iVar9 + -1;
              if (iVar9 == 0) {
                iVar8 = 0;
              }
              ::FString::AssignRange
                        ((FString *)(lVar22 + 0x58),
                         (wchar_t *)(pFVar7->Translation).Text.Data.AllocatorInstance.Data,iVar8);
              *(undefined1 *)(local_318 + 0x78) = 1;
              pFVar19 = (pTVar26->AllocatorInstance).Data;
              if (((pFVar19 <= (FScriptContainerElement *)&local_318) &&
                  ((FScriptContainerElement *)&local_318 < pFVar19 + (longlong)pTVar26->ArrayMax * 8
                  )) && (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x7a5,
                                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                            ), bVar32)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar9 = pTVar26->ArrayNum;
              if (iVar9 == pTVar26->ArrayMax) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&pTVar26->AllocatorInstance,&pTVar26->ArrayMax);
              }
              pTVar26->ArrayNum = iVar9 + 1;
              pFVar19 = (pTVar26->AllocatorInstance).Data;
            }
LAB_146bb3fa0:
            *(longlong *)(pFVar19 + (longlong)iVar9 * 8) = local_318;
            if (param_2) {
              if (local_308 == *(int *)(local_318 + 0x60)) {
                if (local_308 < 2) goto LAB_146bb4217;
                iVar9 = FGenericPlatformStricmp::Stricmp
                                  ((wchar_t *)local_310.Data,*(wchar_t **)(local_318 + 0x58));
                bVar32 = iVar9 == 0;
              }
              else {
                bVar32 = *(int *)(local_318 + 0x60) + local_308 == 1;
              }
              iVar9 = local_308;
              FVar18.Data = local_310.Data;
              if (!bVar32) {
                local_2e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_2e0.Data.ArrayNum = local_308;
                if (local_308 == 0) {
                  local_2e0.Data.ArrayMax = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,local_308,0,(ForAnyElementType *)&local_2e0,local_308,
                             &local_2e0.Data.ArrayMax);
                  memcpy(local_2e0.Data.AllocatorInstance.Data,FVar18.Data,(longlong)iVar9 * 2);
                }
                ::FString::TrimStartAndEndInline(&local_2e0);
                local_2f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_2f0.Data.ArrayNum = *(int *)(local_318 + 0x60);
                lVar22 = (longlong)local_2f0.Data.ArrayNum;
                pvVar4 = *(void **)(local_318 + 0x58);
                if (local_2f0.Data.ArrayNum == 0) {
                  local_2f0.Data.ArrayMax = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,local_2f0.Data.ArrayNum,0,(ForAnyElementType *)&local_2f0,
                             local_2f0.Data.ArrayNum,&local_2f0.Data.ArrayMax);
                  memcpy(local_2f0.Data.AllocatorInstance.Data,pvVar4,lVar22 * 2);
                }
                ::FString::TrimStartAndEndInline(&local_2f0);
                if (local_2e0.Data.ArrayNum == local_2f0.Data.ArrayNum) {
                  if (1 < local_2e0.Data.ArrayNum) {
                    iVar9 = wcscmp((wchar_t *)local_2e0.Data.AllocatorInstance.Data,
                                   (wchar_t *)local_2f0.Data.AllocatorInstance.Data);
                    bVar32 = iVar9 == 0;
                    goto LAB_146bb40de;
                  }
LAB_146bb4190:
                  pFVar25 = (ForAnyElementType *)(local_318 + 0x58);
                }
                else {
                  bVar32 = local_2e0.Data.ArrayNum + local_2f0.Data.ArrayNum == 1;
LAB_146bb40de:
                  if (bVar32) goto LAB_146bb4190;
                  pFVar19 = (pTVar31->AllocatorInstance).Data;
                  if (((pFVar19 <= (FScriptContainerElement *)&local_318) &&
                      ((FScriptContainerElement *)&local_318 <
                       pFVar19 + (longlong)pTVar31->ArrayMax * 8)) &&
                     (bVar32 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar32)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  iVar9 = pTVar31->ArrayNum;
                  if (iVar9 == pTVar31->ArrayMax) {
                    iVar9 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x808,&pTVar31->AllocatorInstance,&pTVar31->ArrayMax);
                  }
                  pTVar31->ArrayNum = iVar9 + 1;
                  *(longlong *)((pTVar31->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_318
                  ;
                  pFVar25 = (ForAnyElementType *)(local_318 + 0x80);
                }
                iVar9 = local_308;
                FVar18.Data = local_310.Data;
                if (pFVar25 != &local_310) {
                  lVar22 = (longlong)local_308;
                  piVar24 = (int *)((longlong)&pFVar25[1].Data + 4);
                  *(int *)&pFVar25[1].Data = local_308;
                  if ((local_308 == 0) && (*piVar24 == 0)) {
                    *piVar24 = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,local_308,*piVar24,pFVar25,local_308,piVar24);
                    if (iVar9 != 0) {
                      memcpy(pFVar25->Data,FVar18.Data,lVar22 * 2);
                    }
                  }
                }
                if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
                }
                if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
                }
              }
            }
LAB_146bb4217:
            pTVar26 = local_288;
            if (local_310.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_310.Data);
              pTVar26 = local_288;
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_278.SharedReferenceCount.ReferenceController);
          pTVar23 = local_258;
          piVar24 = local_250;
          lVar22 = local_280;
        }
        local_res20 = local_res20 + 1;
        local_280 = lVar22 + 8;
      } while ((int)local_res20 < local_300.ArrayNum);
    }
    if (local_300.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_248);
  }
  FFeedbackContext::EndSlowTask(GWarn);
  return;
}

// OpenSourceControlMessageLog @ 146bb8800

void __cdecl
`FTranslationDataManager::WriteJSONToTextFile'::__l34::Local::OpenSourceControlMessageLog(void)

{
  FMessageLog *this;
  FName local_res8 [4];
  FMessageLog local_38;
  
  ::FName::FName(local_res8,"SourceControl");
  this = FMessageLog::FMessageLog(&local_38,local_res8);
  FMessageLog::Open(this,Info,false);
  FMessageLog::~FMessageLog(&local_38);
  return;
}

// PopulateSearchResultsUsingFilter @ 146bb9360

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __thiscall
FTranslationDataManager::PopulateSearchResultsUsingFilter
          (FTranslationDataManager *this,FString *param_1)

{
  TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  FTranslationChange *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  size_t sVar7;
  ulonglong uVar8;
  wchar_t *pwVar9;
  int *piVar10;
  FString *pFVar11;
  FScriptContainerElement *pFVar12;
  FString *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res20 [8];
  undefined1 local_98 [8];
  longlong local_90;
  uint local_88;
  uint local_84;
  FScriptContainerElement *local_80;
  FString local_78;
  FString local_68;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  FScriptContainerElement *local_48;
  
  pTVar1 = &this->SearchResults;
  piVar10 = &(this->SearchResults).ArrayMax;
  (this->SearchResults).ArrayNum = 0;
  if (*piVar10 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar1->AllocatorInstance,0,piVar10);
  }
  local_84 = (this->AllTranslations).ArrayNum;
  uVar8 = (ulonglong)(int)local_84;
  pFVar12 = (this->AllTranslations).AllocatorInstance.Data;
  pFVar14 = pFVar12 + uVar8 * 8;
  local_80 = pFVar14;
LAB_146bb93ce:
  piVar10 = &(this->SearchResults).ArrayMax;
  local_48 = pFVar12;
  if ((this->AllTranslations).ArrayNum != (int)uVar8) {
    local_res20[0] = 0;
    `TCheckedPointerIterator<UTranslationUnit_*,int,0>::operator!='::__l2::<lambda_1>::operator()
              (local_res20);
  }
  if (pFVar12 == pFVar14) {
    return;
  }
  lVar2 = *(longlong *)pFVar12;
  local_90 = lVar2;
  if (lVar2 != 0) {
    bVar5 = false;
    if ((param_1->Data).ArrayNum == 0) {
      pwVar9 = L"";
LAB_146bb9419:
      sVar7 = wcslen(pwVar9);
      iVar6 = ::FString::Find((FString *)(lVar2 + 0x48),pwVar9,(int)sVar7,IgnoreCase,FromStart,-1);
      if (iVar6 == -1) goto LAB_146bb944f;
    }
    else {
      pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      if ((FScriptContainerElement *)pwVar9 != (FScriptContainerElement *)0x0) goto LAB_146bb9419;
LAB_146bb944f:
      lVar2 = local_90;
      if ((param_1->Data).ArrayNum == 0) {
        pwVar9 = L"";
LAB_146bb946b:
        sVar7 = wcslen(pwVar9);
        iVar6 = ::FString::Find((FString *)(lVar2 + 0x58),pwVar9,(int)sVar7,IgnoreCase,FromStart,-1)
        ;
        if (iVar6 != -1) goto LAB_146bb94f3;
      }
      else {
        pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        if ((FScriptContainerElement *)pwVar9 != (FScriptContainerElement *)0x0) goto LAB_146bb946b;
      }
      lVar2 = local_90;
      if ((param_1->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
        if ((FScriptContainerElement *)pwVar9 == (FScriptContainerElement *)0x0) goto LAB_146bb958b;
      }
      sVar7 = wcslen(pwVar9);
      iVar6 = ::FString::Find((FString *)(lVar2 + 0x28),pwVar9,(int)sVar7,IgnoreCase,FromStart,-1);
      if (iVar6 == -1) goto LAB_146bb958b;
    }
LAB_146bb94f3:
    pFVar14 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar14 <= (FScriptContainerElement *)&local_90) &&
        ((FScriptContainerElement *)&local_90 < pFVar14 + (longlong)*piVar10 * 8)) &&
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
    iVar6 = (this->SearchResults).ArrayNum;
    if (iVar6 == *piVar10) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar1->AllocatorInstance,piVar10);
    }
    (this->SearchResults).ArrayNum = iVar6 + 1;
    bVar5 = true;
    *(longlong *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_90;
LAB_146bb958b:
    lVar2 = local_90;
    local_88 = *(uint *)(local_90 + 0x70);
    uVar8 = (ulonglong)(int)local_88;
    pFVar11 = *(FString **)(local_90 + 0x68);
    pFVar13 = pFVar11 + uVar8 * 3;
    do {
      if (*(int *)(lVar2 + 0x70) != (int)uVar8) {
        local_98[0] = 0;
        `TCheckedPointerIterator<FTranslationContextInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_98);
      }
      pFVar14 = local_80;
      if (pFVar11 == pFVar13) break;
      ::FString::FString(&local_78,pFVar11);
      ::FString::FString(&local_68,pFVar11 + 1);
      iVar6 = pFVar11[2].Data.ArrayNum;
      pFVar3 = (FTranslationChange *)pFVar11[2].Data.AllocatorInstance.Data;
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50 = iVar6;
      if (iVar6 == 0) {
        local_4c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,iVar6,0,&local_58,iVar6,&local_4c);
        ConstructItems<FTranslationChange,FTranslationChange,int>(local_58.Data,pFVar3,iVar6);
      }
      if (!bVar5) {
        if ((param_1->Data).ArrayNum == 0) {
          pwVar9 = L"";
LAB_146bb9655:
          sVar7 = wcslen(pwVar9);
          iVar6 = ::FString::Find(&local_68,pwVar9,(int)sVar7,IgnoreCase,FromStart,-1);
          if (iVar6 != -1) goto LAB_146bb970f;
        }
        else {
          pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
          if ((FScriptContainerElement *)pwVar9 != (FScriptContainerElement *)0x0)
          goto LAB_146bb9655;
        }
        if ((param_1->Data).ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
          if ((FScriptContainerElement *)pwVar9 == (FScriptContainerElement *)0x0)
          goto LAB_146bb96cd;
        }
        sVar7 = wcslen(pwVar9);
        iVar6 = ::FString::Find(&local_78,pwVar9,(int)sVar7,IgnoreCase,FromStart,-1);
        if (iVar6 != -1) goto LAB_146bb970f;
      }
LAB_146bb96cd:
      DestructItems<FTranslationChange,int>((FTranslationChange *)local_58.Data,local_50);
      if ((FTranslationChange *)local_58.Data != (FTranslationChange *)0x0) {
        FMemory::Free(local_58.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      uVar8 = (ulonglong)local_88;
      pFVar11 = pFVar11 + 3;
    } while( true );
  }
  goto LAB_146bb97eb;
LAB_146bb970f:
  pFVar14 = (pTVar1->AllocatorInstance).Data;
  piVar10 = &(this->SearchResults).ArrayMax;
  if (((pFVar14 <= (FScriptContainerElement *)&local_90) &&
      ((FScriptContainerElement *)&local_90 < pFVar14 + (longlong)*piVar10 * 8)) &&
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
  iVar6 = (this->SearchResults).ArrayNum;
  if (iVar6 == *piVar10) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar10);
  }
  (this->SearchResults).ArrayNum = iVar6 + 1;
  *(longlong *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_90;
  DestructItems<FTranslationChange,int>((FTranslationChange *)local_58.Data,local_50);
  if ((FTranslationChange *)local_58.Data != (FTranslationChange *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  pFVar14 = local_80;
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
    pFVar14 = local_80;
  }
LAB_146bb97eb:
  uVar8 = (ulonglong)local_84;
  pFVar12 = local_48 + 8;
  goto LAB_146bb93ce;
}

// PreviewAllTranslationsInEditor @ 146bb9820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __thiscall
FTranslationDataManager::PreviewAllTranslationsInEditor
          (FTranslationDataManager *this,ULocalizationTarget *param_1)

{
  ForAnyElementType FVar1;
  FString *pFVar2;
  FConfigFile *this_00;
  int iVar3;
  undefined1 auStack_198 [32];
  FText local_178;
  TSharedRef<FTokenizedMessage,1> local_168;
  FString local_158;
  FString local_148;
  FMessageLog local_138;
  FConfigFile local_108;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  FPaths::ConvertRelativePathToFull(&local_148,&this->OpenedManifestFilePath);
  pFVar2 = FPaths::EngineContentDir((FString *)&local_178);
  FPaths::ConvertRelativePathToFull(&local_158,pFVar2);
  if (local_178.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_178.TextData.Reference);
  }
  iVar3 = local_158.Data.ArrayNum + -1;
  FVar1.Data = local_158.Data.AllocatorInstance.Data;
  if (local_158.Data.ArrayNum == 0) {
    iVar3 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  ::FString::StartsWith(&local_148,(wchar_t *)FVar1.Data,iVar3,IgnoreCase);
  if (param_1 == (ULocalizationTarget *)0x0) {
    FText::AsLocalizable_Advanced_LocText
              (&local_178,L"TranslationDataManager",L"PreviewAllTranslationsInEditorFail",
               L"Failed to preview translations in Editor!");
    ::FName::FName((FName *)&local_168,"TranslationEditor");
    FMessageLog::FMessageLog(&local_138,(FName *)&local_168);
    FMessageLog::Error(&local_138,&local_168,&local_178);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.SharedReferenceCount.ReferenceController);
    FMessageLog::Notify(&local_138,&local_178,Info,false);
    FMessageLog::~FMessageLog(&local_138);
    if (local_178.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
    }
  }
  else {
    LocalizationConfigurationScript::GetRegenerateResourcesConfigPath((FString *)&local_178,param_1)
    ;
    this_00 = (FConfigFile *)
              LocalizationConfigurationScript::GenerateRegenerateResourcesConfigFile
                        ((FLocalizationConfigurationScript *)&local_108,param_1);
    local_168.Object = (FTokenizedMessage *)0x0;
    local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FConfigFile::Write(this_00,(FString *)&local_178,true,(FString *)&local_168);
    if (local_168.Object != (FTokenizedMessage *)0x0) {
      FMemory::Free(local_168.Object);
    }
    FConfigFile::~FConfigFile(&local_108);
    FTextLocalizationResourceGenerator::GenerateLocResAndUpdateLiveEntriesFromConfig
              ((FString *)&local_178,None);
    if (local_178.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_178.TextData.Reference);
    }
  }
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  return;
}

// ReadArchive @ 146bbba00

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FInternationalizationArchive,1> * __thiscall
FTranslationDataManager::ReadArchive
          (FTranslationDataManager *this,
          TSharedPtr<FInternationalizationArchive,1> *__return_storage_ptr__,FString *param_1)

{
  bool bVar1;
  FInternationalizationArchive *pFVar2;
  TSharedRef<FInternationalizationArchive,1> *pTVar3;
  TRawPtrProxy<FInternationalizationArchive> local_res8;
  TSharedPtr<FInternationalizationArchive,1> local_48;
  TSharedPtr<FInternationalizationManifest_const_,1> local_38;
  TSharedPtr<FInternationalizationArchive_const_,1> local_28;
  TSharedRef<FInternationalizationArchive,1> local_18;
  
  pFVar2 = ::operator_new(0xa8);
  local_res8.Object = (FInternationalizationArchive *)0x0;
  if (pFVar2 != (FInternationalizationArchive *)0x0) {
    pFVar2->FormatVersion = AddedKeys;
    *(undefined8 *)&pFVar2->EntriesBySourceText = 0;
    *(undefined8 *)&(pFVar2->EntriesBySourceText).field_0x8 = 0;
    *(undefined8 *)&(pFVar2->EntriesBySourceText).field_0x20 = 0;
    *(undefined4 *)&(pFVar2->EntriesBySourceText).field_0x28 = 0;
    *(undefined4 *)&(pFVar2->EntriesBySourceText).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar2->EntriesBySourceText).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar2->EntriesBySourceText).field_0x34 = 0;
    *(undefined8 *)&(pFVar2->EntriesBySourceText).field_0x40 = 0;
    *(undefined4 *)&(pFVar2->EntriesBySourceText).field_0x48 = 0;
    *(undefined8 *)&pFVar2->EntriesByKey = 0;
    *(undefined8 *)&(pFVar2->EntriesByKey).field_0x8 = 0;
    *(undefined8 *)&(pFVar2->EntriesByKey).field_0x20 = 0;
    *(undefined4 *)&(pFVar2->EntriesByKey).field_0x28 = 0;
    *(undefined4 *)&(pFVar2->EntriesByKey).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar2->EntriesByKey).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar2->EntriesByKey).field_0x34 = 0;
    *(undefined8 *)&(pFVar2->EntriesByKey).field_0x40 = 0;
    *(undefined4 *)&(pFVar2->EntriesByKey).field_0x48 = 0;
    local_res8.Object = pFVar2;
  }
  TSharedPtr<FInternationalizationArchive,1>::
  TSharedPtr<FInternationalizationArchive,1><FInternationalizationArchive>
            (__return_storage_ptr__,&local_res8);
  local_38.Object = (this->ManifestAtHeadRevisionPtr).Object;
  local_38.SharedReferenceCount.ReferenceController =
       (this->ManifestAtHeadRevisionPtr).SharedReferenceCount.ReferenceController;
  local_28.Object = (FInternationalizationArchive *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = TSharedPtr<FInternationalizationArchive,1>::ToSharedRef(__return_storage_ptr__,&local_18)
  ;
  bVar1 = FJsonInternationalizationArchiveSerializer::DeserializeArchiveFromFile
                    (param_1,pTVar3,&local_38,&local_28);
  if (!bVar1) {
    if (1 < (byte)LogTranslationEditor._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTranslationEditor);
    }
    local_48.Object = (FInternationalizationArchive *)0x0;
    local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (__return_storage_ptr__ != &local_48) {
      __return_storage_ptr__->Object = (FInternationalizationArchive *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_48.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// ReadManifest @ 146bbbb80

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FInternationalizationManifest,1> * __thiscall
FTranslationDataManager::ReadManifest
          (FTranslationDataManager *this,
          TSharedPtr<FInternationalizationManifest,1> *__return_storage_ptr__,FString *param_1)

{
  bool bVar1;
  FInternationalizationManifest *pFVar2;
  TSharedRef<FInternationalizationManifest,1> *pTVar3;
  TRawPtrProxy<FInternationalizationManifest> local_res10;
  TSharedPtr<FInternationalizationManifest,1> local_28;
  TSharedRef<FInternationalizationManifest,1> local_18;
  
  pFVar2 = ::operator_new(0xa8);
  local_res10.Object = (FInternationalizationManifest *)0x0;
  if (pFVar2 != (FInternationalizationManifest *)0x0) {
    pFVar2->FormatVersion = EscapeFixes;
    *(undefined8 *)&pFVar2->EntriesBySourceText = 0;
    *(undefined8 *)&(pFVar2->EntriesBySourceText).field_0x8 = 0;
    *(undefined8 *)&(pFVar2->EntriesBySourceText).field_0x20 = 0;
    *(undefined4 *)&(pFVar2->EntriesBySourceText).field_0x28 = 0;
    *(undefined4 *)&(pFVar2->EntriesBySourceText).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar2->EntriesBySourceText).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar2->EntriesBySourceText).field_0x34 = 0;
    *(undefined8 *)&(pFVar2->EntriesBySourceText).field_0x40 = 0;
    *(undefined4 *)&(pFVar2->EntriesBySourceText).field_0x48 = 0;
    *(undefined8 *)&pFVar2->EntriesByKey = 0;
    *(undefined8 *)&(pFVar2->EntriesByKey).field_0x8 = 0;
    *(undefined8 *)&(pFVar2->EntriesByKey).field_0x20 = 0;
    *(undefined4 *)&(pFVar2->EntriesByKey).field_0x28 = 0;
    *(undefined4 *)&(pFVar2->EntriesByKey).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar2->EntriesByKey).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar2->EntriesByKey).field_0x34 = 0;
    *(undefined8 *)&(pFVar2->EntriesByKey).field_0x40 = 0;
    *(undefined4 *)&(pFVar2->EntriesByKey).field_0x48 = 0;
    local_res10.Object = pFVar2;
  }
  TSharedPtr<FInternationalizationManifest,1>::
  TSharedPtr<FInternationalizationManifest,1><FInternationalizationManifest>
            (__return_storage_ptr__,&local_res10);
  pTVar3 = TSharedPtr<FInternationalizationManifest,1>::ToSharedRef
                     (__return_storage_ptr__,&local_18);
  bVar1 = FJsonInternationalizationManifestSerializer::DeserializeManifestFromFile
                    (param_1,pTVar3,(FName)0x0);
  if (!bVar1) {
    if (1 < (byte)LogTranslationEditor._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTranslationEditor);
    }
    local_28.Object = (FInternationalizationManifest *)0x0;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (__return_storage_ptr__ != &local_28) {
      __return_storage_ptr__->Object = (FInternationalizationManifest *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&__return_storage_ptr__->SharedReferenceCount,&local_28.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// RemoveTranslationUnitArrayfromRoot @ 146bbcc60

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FTranslationDataManager::RemoveTranslationUnitArrayfromRoot
          (FTranslationDataManager *this,
          TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FUObjectItem *this_00;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  pFVar3 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UTranslationUnit_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar3 == pFVar1) break;
    this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(*(longlong *)pFVar3 + 0xc));
    FUObjectItem::ClearRootFlags(this_00,RootSet);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// SaveSelectedTranslations @ 146bbd570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

bool __cdecl
FTranslationDataManager::SaveSelectedTranslations
          (TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  int *piVar1;
  void *_Src;
  FName FVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FPortableObjectEntry *this;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1> *pTVar14;
  TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1> *pTVar15;
  TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_> *pTVar16;
  FString *pFVar17;
  FName *pFVar18;
  FModuleManager *pFVar19;
  IModuleInterface *pIVar20;
  ULocalizationTarget *pUVar21;
  FTranslationDataManager *pFVar22;
  TRawPtrProxy<FTranslationDataManager> TVar23;
  UClass *this_00;
  FString *pFVar24;
  IFileManager *pIVar25;
  longlong *plVar26;
  FUploadLocalizationTargetFile *pFVar27;
  undefined8 *puVar28;
  ulong64 uVar29;
  FConfigFile *this_01;
  ulonglong uVar30;
  wchar_t *pwVar31;
  int iVar32;
  int iVar33;
  longlong lVar34;
  FScriptContainerElement *pFVar35;
  FScriptContainerElement *pFVar36;
  ForAnyElementType FVar37;
  int iVar38;
  FScriptContainerElement *pFVar39;
  undefined1 auStackY_6f8 [32];
  char local_6a8;
  undefined1 local_6a7;
  undefined1 local_6a6;
  undefined1 local_6a5;
  char local_6a4;
  FString local_6a0;
  int local_690;
  FString local_688;
  FString local_678;
  FString local_668;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_658;
  FDelegateAllocation local_650;
  longlong local_640;
  ULocalizationTarget *local_638;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_630;
  FString local_620;
  FString local_610;
  FString local_600;
  ForAnyElementType local_5f0;
  int local_5e8;
  int local_5e4;
  FLocalizationServiceTranslationIdentifier *local_5e0;
  undefined8 local_5d8;
  FString local_5d0;
  FString local_5c0;
  FString local_5b0;
  FTranslationDataManager *local_5a0;
  TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_> *local_598;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_590;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_580;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_570;
  FString local_560;
  TSharedRef<FTranslationDataManager,1> local_550;
  FString local_540;
  FString local_530;
  FScriptContainerElement *local_520;
  TReferenceControllerBase<1> *local_518;
  TPairInitializer<FString_const_&,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>_&&>
  local_510;
  FScriptContainerElement *local_500;
  TRawPtrProxy<FPortableObjectEntry> local_4f8;
  FScriptContainerElement *local_4f0;
  TRawPtrProxy<FUploadLocalizationTargetFile> local_4e8;
  TReferenceControllerBase<1> *local_4e0;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_4d8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_4c8;
  FString local_4b8;
  FString local_4a8;
  FString local_498;
  FString local_488;
  FString local_478;
  longlong *local_468;
  undefined1 auStack_460 [16];
  uint uStack_450;
  uint uStack_44c;
  int local_448;
  int iStack_444;
  FScriptContainerElement *pFStack_440;
  TSet<TTuple<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>,0>,FDefaultSetAllocator>
  *local_438;
  undefined2 local_430;
  TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1> local_428;
  TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1> local_418;
  FString local_408;
  FString local_3f8;
  FString local_3e8;
  FString local_3d8;
  TSharedPtr<FLocMetadataObject,1> local_3c8;
  TSharedRef<FPortableObjectEntry,1> local_3b8;
  FString local_3a8;
  FScriptContainerElement *local_398;
  int iStack_390;
  undefined4 uStack_38c;
  TSharedRef<FUploadLocalizationTargetFile,1> local_388;
  FUploadLocalizationTargetFile *local_378;
  TReferenceControllerBase<1> *pTStack_370;
  FString local_368;
  FString local_358;
  FString *local_348;
  TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1> *local_340;
  FDestructionSentinel local_338;
  FDestructionSentinel local_320;
  FDelegateAllocation *local_308;
  FString local_300;
  FString local_2f0;
  FString local_2e0;
  TSharedRef<FPortableObjectEntry,1> local_2c8;
  TStringView<wchar_t> local_2b8;
  FString local_2a8;
  FString local_298;
  FString local_288;
  undefined1 local_278 [24];
  ForAnyElementType FStack_260;
  undefined1 local_258 [16];
  int local_248;
  int iStack_244;
  ForAnyElementType FStack_240;
  undefined1 local_238 [16];
  ForAnyElementType local_228;
  ForAnyElementType local_220;
  FCulture *local_218;
  ForAnyElementType FStack_210;
  ForAnyElementType local_208;
  FInternationalizationArchive *local_200;
  ForAnyElementType local_1f8;
  FInternationalizationArchive *local_1f0;
  undefined1 local_1e8 [16];
  FSharedReferencer<1> local_1d8;
  ForAnyElementType local_1d0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  int local_1a8;
  int local_1a4;
  void *local_198;
  undefined4 local_190;
  undefined1 local_188 [32];
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  int local_158;
  int local_154;
  ForElementType<FSetElementId> local_148;
  int local_140;
  FConfigFile local_138;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_6f8;
  pFVar35 = (param_1->AllocatorInstance).Data;
  iVar38 = param_1->ArrayNum;
  local_6a8 = '\x01';
  pFVar36 = pFVar35 + (longlong)iVar38 * 8;
  local_188._0_8_ = 0;
  local_188._8_8_ = (FScriptContainerElement *)0x0;
  local_168._0_4_ = 0;
  local_168._4_4_ = 0;
  local_160 = 0;
  local_15c = 0x80;
  local_158 = -1;
  local_154 = 0;
  local_148 = (ForElementType<FSetElementId>)0x0;
  local_140 = 0;
  local_6a4 = param_2;
  local_598 = param_1;
  while( true ) {
    if (param_1->ArrayNum != iVar38) {
      local_6a7 = 0;
      `TCheckedPointerIterator<UTranslationUnit_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_6a7);
    }
    if (pFVar35 == pFVar36) break;
    local_640 = *(longlong *)pFVar35;
    local_688.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_688.Data.ArrayNum = *(int *)(local_640 + 0x98);
    lVar34 = (longlong)local_688.Data.ArrayNum;
    _Src = *(void **)(local_640 + 0x90);
    if (local_688.Data.ArrayNum == 0) {
      local_688.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_688.Data.ArrayNum,0,(ForAnyElementType *)&local_688,
                 local_688.Data.ArrayNum,&local_688.Data.ArrayMax);
      memcpy(local_688.Data.AllocatorInstance.Data,_Src,lVar34 * 2);
    }
    pTVar15 = (TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1> *)0x0;
    if (1 < local_688.Data.ArrayNum) {
      if (local_688.Data.ArrayNum == 0) {
        iVar32 = 0;
      }
      else {
        iVar32 = local_688.Data.ArrayNum + -1;
      }
      uVar11 = FCrc::Strihash_DEPRECATED<wchar_t>
                         (iVar32,(wchar_t *)local_688.Data.AllocatorInstance.Data);
      iVar32 = TSet<TTuple<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>
                         ((TSet<TTuple<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>,0>,FDefaultSetAllocator>
                           *)local_188,uVar11,&local_688);
      if (iVar32 == -1) {
        pTVar14 = ::operator_new(0x10);
        if (pTVar14 != (TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1> *)0x0)
        {
          pTVar14->Object = (TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_> *)0x0;
          (pTVar14->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
          pTVar15 = pTVar14;
        }
        local_510.Value = pTVar15;
        TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>::
        TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1><TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>_>
                  (&local_428,
                   (TRawPtrProxy<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>_> *)
                   &local_510.Value);
        local_348 = &local_688;
        local_340 = &local_428;
        TSet<TTuple<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FString_const_&,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>_&&>_>
                  ((TSet<TTuple<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>,0>,FDefaultSetAllocator>
                    *)local_188,&local_510,(bool *)&local_348);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_428.SharedReferenceCount.ReferenceController);
      }
      TMapBase<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>,0>_>
      ::FindRef((TMapBase<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>,0>_>
                 *)local_188,&local_418,&local_688);
      pTVar16 = TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>::operator->
                          (&local_418);
      pFVar39 = (pTVar16->AllocatorInstance).Data;
      if (((pFVar39 <= (FScriptContainerElement *)&local_640) &&
          ((FScriptContainerElement *)&local_640 < pFVar39 + (longlong)pTVar16->ArrayMax * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
      iVar32 = pTVar16->ArrayNum;
      if (iVar32 == pTVar16->ArrayMax) {
        iVar32 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar16->AllocatorInstance,&pTVar16->ArrayMax);
      }
      pFVar39 = (pTVar16->AllocatorInstance).Data;
      pTVar16->ArrayNum = iVar32 + 1;
      *(longlong *)(pFVar39 + (longlong)iVar32 * 8) = local_640;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_418.SharedReferenceCount.ReferenceController);
    }
    if (local_688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_688.Data.AllocatorInstance.Data);
    }
    pFVar35 = pFVar35 + 8;
  }
  TSet<TTuple<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)(local_278 + 0x10),
             (TSet<TTuple<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>,0>,FDefaultSetAllocator>
              *)local_188);
  local_438 = (TSet<TTuple<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>,0>,FDefaultSetAllocator>
               *)local_188;
  local_430 = 0;
  bVar9 = true;
  stack0xfffffffffffffba8 = local_258;
  local_468 = (longlong *)local_278._16_8_;
  auStack_460._0_8_ = FStack_260.Data;
  local_448 = local_248;
  iStack_444 = iStack_244;
  pFStack_440 = FStack_240.Data;
  uVar30 = local_258._8_8_ >> 0x20;
  if (local_258._12_4_ < *(int *)(local_258._0_8_ + 0x18)) {
LAB_146bbd8c0:
    pFVar17 = (FString *)(*local_468 + (longlong)(int)uVar30 * 0x28);
    ::FString::FString(&local_530,pFVar17);
    FVar37.Data = local_530.Data.AllocatorInstance.Data;
    local_520 = pFVar17[1].Data.AllocatorInstance.Data;
    local_518 = *(TReferenceControllerBase<1> **)&pFVar17[1].Data.ArrayNum;
    if (local_518 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_518->SharedReferenceCount = (atomic<int>)((int)local_518->SharedReferenceCount + 1);
      UNLOCK();
    }
    iVar32 = 0;
    iVar13 = 0;
    local_620.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar38 = local_530.Data.ArrayNum;
    local_620.Data.ArrayNum = iVar38;
    if (iVar38 == 0) {
      local_620.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar38,0,(ForAnyElementType *)&local_620,iVar38,&local_620.Data.ArrayMax);
      memcpy(local_620.Data.AllocatorInstance.Data,FVar37.Data,(longlong)iVar38 * 2);
    }
    FPaths::GetBaseFilename(&local_6a0,&local_620,true);
    FPaths::GetPath(&local_600,&local_620);
    FPaths::GetBaseFilename(&local_5b0,&local_600,true);
    FPaths::GetPath(&local_5c0,&local_600);
    ::FString::FString(&local_408,".archive");
    FVar37.Data = local_600.Data.AllocatorInstance.Data;
    iVar38 = local_6a0.Data.ArrayNum + -1;
    if (local_6a0.Data.ArrayNum == 0) {
      iVar38 = iVar13;
    }
    iVar12 = iVar38 + 1;
    iVar33 = local_600.Data.ArrayNum;
    local_678.Data.ArrayNum = iVar33;
    if ((iVar33 == 0) && (iVar12 != 0)) {
      iVar12 = iVar38 + 2;
LAB_146bbd9ec:
      local_678.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar12 != 0) goto LAB_146bbd9f6;
      local_678.Data.ArrayMax = 0;
    }
    else {
      if (iVar33 == 0) goto LAB_146bbd9ec;
LAB_146bbd9f6:
      local_678.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar11 = iVar33 + iVar12;
      if ((int)uVar11 < iVar33) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar11,0,(ForAnyElementType *)&local_678,iVar33,&local_678.Data.ArrayMax);
      if (iVar33 != 0) {
        memcpy(local_678.Data.AllocatorInstance.Data,FVar37.Data,(longlong)iVar33 * 2);
      }
    }
    ::FString::PathAppend(&local_678,(wchar_t *)local_6a0.Data.AllocatorInstance.Data,iVar38);
    ::FString::ConcatFF(&local_478,&local_678,&local_408);
    if (local_678.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_678.Data.AllocatorInstance.Data);
    }
    if (local_408.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_408.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_3f8,".manifest");
    FVar37.Data = local_5c0.Data.AllocatorInstance.Data;
    iVar38 = local_6a0.Data.ArrayNum + -1;
    if (local_6a0.Data.ArrayNum == 0) {
      iVar38 = iVar13;
    }
    iVar12 = iVar38 + 1;
    iVar33 = local_5c0.Data.ArrayNum;
    local_668.Data.ArrayNum = iVar33;
    if ((iVar33 == 0) && (iVar12 != 0)) {
      iVar12 = iVar38 + 2;
LAB_146bbdad8:
      local_668.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (iVar12 != 0) goto LAB_146bbdae2;
      local_668.Data.ArrayMax = 0;
    }
    else {
      if (iVar33 == 0) goto LAB_146bbdad8;
LAB_146bbdae2:
      local_668.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar11 = iVar12 + iVar33;
      if ((int)uVar11 < iVar33) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar11,0,(ForAnyElementType *)&local_668,iVar33,&local_668.Data.ArrayMax);
      if (iVar33 != 0) {
        memcpy(local_668.Data.AllocatorInstance.Data,FVar37.Data,(longlong)iVar33 * 2);
      }
    }
    ::FString::PathAppend(&local_668,(wchar_t *)local_6a0.Data.AllocatorInstance.Data,iVar38);
    ::FString::ConcatFF(&local_540,&local_668,&local_3f8);
    if (local_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_668.Data.AllocatorInstance.Data);
    }
    if (local_3f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3f8.Data.AllocatorInstance.Data);
    }
    pFVar17 = FPaths::EngineContentDir(&local_300);
    FPaths::ConvertRelativePathToFull(&local_488,pFVar17);
    if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_300.Data.AllocatorInstance.Data);
    }
    iVar38 = local_488.Data.ArrayNum + -1;
    FVar37.Data = local_488.Data.AllocatorInstance.Data;
    if (local_488.Data.ArrayNum == 0) {
      iVar38 = iVar13;
      FVar37.Data = (FScriptContainerElement *)L"";
    }
    bVar9 = ::FString::StartsWith(&local_540,(wchar_t *)FVar37.Data,iVar38,IgnoreCase);
    pFVar18 = ::FName::FName((FName *)(local_278 + 8),"Localization");
    FVar2 = *pFVar18;
    pFVar19 = FModuleManager::Get();
    pIVar20 = FModuleManager::LoadModuleChecked(pFVar19,FVar2);
    FVar37.Data = local_6a0.Data.AllocatorInstance.Data;
    local_5f0.Data = (FScriptContainerElement *)0x0;
    iVar38 = local_6a0.Data.ArrayNum;
    pcVar4 = *(code **)((longlong)*pIVar20 + 0x48);
    local_5e8 = iVar38;
    if (iVar38 == 0) {
      local_5e4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar38,0,&local_5f0,iVar38,&local_5e4);
      memcpy(local_5f0.Data,FVar37.Data,(longlong)iVar38 * 2);
    }
    pUVar21 = (ULocalizationTarget *)(*pcVar4)(pIVar20,&local_5f0,bVar9);
    local_638 = pUVar21;
    if (((pUVar21 != (ULocalizationTarget *)0x0) && (bVar9 = FPaths::FileExists(&local_540), bVar9))
       && (bVar9 = FPaths::FileExists(&local_478), bVar9)) {
      iVar38 = (pUVar21->Settings).NativeCultureIndex;
      local_5d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_5d0.Data.ArrayNum = 0;
      local_5d0.Data.ArrayMax = 0;
      if ((-1 < iVar38) && (iVar38 < (pUVar21->Settings).SupportedCulturesStatistics.ArrayNum)) {
        if ((iVar38 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
        pFVar36 = (pUVar21->Settings).SupportedCulturesStatistics.AllocatorInstance.Data;
        iVar12 = *(int *)(pFVar36 + (longlong)iVar38 * 0x18 + 8);
        iVar33 = iVar12 + -1;
        if (iVar12 == 0) {
          iVar33 = 0;
        }
        ::FString::AssignRange(&local_5d0,*(wchar_t **)(pFVar36 + (longlong)iVar38 * 0x18),iVar33);
      }
      ::FString::FString(&local_3e8,".archive");
      iVar38 = local_5d0.Data.ArrayNum + -1;
      if (local_5d0.Data.ArrayNum == 0) {
        iVar38 = 0;
      }
      if ((local_5c0.Data.ArrayNum != 0) || (iVar12 = 1, iVar38 + 1 == 0)) {
        iVar12 = iVar13;
      }
      local_590.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmptyWithSlack<wchar_t,int>
                (&local_590,(wchar_t *)local_5c0.Data.AllocatorInstance.Data,local_5c0.Data.ArrayNum
                 ,0,iVar12 + iVar38 + 1);
      ::FString::PathAppend
                ((FString *)&local_590,(wchar_t *)local_5d0.Data.AllocatorInstance.Data,iVar38);
      iVar38 = local_6a0.Data.ArrayNum + -1;
      if (local_6a0.Data.ArrayNum == 0) {
        iVar38 = iVar13;
      }
      if ((local_590.ArrayNum != 0) || (iVar12 = 1, iVar38 + 1 == 0)) {
        iVar12 = iVar13;
      }
      TArray<wchar_t,TSizedDefaultAllocator<32>_>::
      TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>
                (&local_4d8,&local_590,iVar38 + 1 + iVar12);
      ::FString::PathAppend
                ((FString *)&local_4d8,(wchar_t *)local_6a0.Data.AllocatorInstance.Data,iVar38);
      ::FString::ConcatFF(&local_358,(FString *)&local_4d8,&local_3e8);
      if (local_4d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4d8.AllocatorInstance.Data);
      }
      if (local_590.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_590.AllocatorInstance.Data);
      }
      if (local_3e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3e8.Data.AllocatorInstance.Data);
      }
      pFVar22 = ::operator_new(0x138);
      if (pFVar22 != (FTranslationDataManager *)0x0) {
        pFVar22->_padding_ = 0;
        pFVar22->_padding_ = 0;
        (pFVar22->AllTranslations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar22->_padding_ = (longlong)&___7FTranslationDataManager__6B_;
        (pFVar22->AllTranslations).ArrayNum = 0;
        (pFVar22->AllTranslations).ArrayMax = 0;
        (pFVar22->Untranslated).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar22->Untranslated).ArrayNum = 0;
        (pFVar22->Untranslated).ArrayMax = 0;
        (pFVar22->Review).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar22->Review).ArrayNum = 0;
        (pFVar22->Review).ArrayMax = 0;
        (pFVar22->Complete).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar22->Complete).ArrayNum = 0;
        (pFVar22->Complete).ArrayMax = 0;
        (pFVar22->SearchResults).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar22->SearchResults).ArrayNum = 0;
        (pFVar22->SearchResults).ArrayMax = 0;
        (pFVar22->ChangedOnImport).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar22->ChangedOnImport).ArrayNum = 0;
        (pFVar22->ChangedOnImport).ArrayMax = 0;
        (pFVar22->NativeArchivePtr).Object = (FInternationalizationArchive *)0x0;
        (pFVar22->NativeArchivePtr).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        (pFVar22->ArchivePtr).Object = (FInternationalizationArchive *)0x0;
        (pFVar22->ArchivePtr).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        (pFVar22->ManifestAtHeadRevisionPtr).Object = (FInternationalizationManifest *)0x0;
        (pFVar22->ManifestAtHeadRevisionPtr).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        (pFVar22->ManifestName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar22->ManifestName).Data.ArrayNum = 0;
        (pFVar22->ManifestName).Data.ArrayMax = 0;
        (pFVar22->ProjectPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar22->ProjectPath).Data.ArrayNum = 0;
        (pFVar22->ProjectPath).Data.ArrayMax = 0;
        (pFVar22->ArchiveName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar22->ArchiveName).Data.ArrayNum = 0;
        (pFVar22->ArchiveName).Data.ArrayMax = 0;
        (pFVar22->CulturePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar22->CulturePath).Data.ArrayNum = 0;
        (pFVar22->CulturePath).Data.ArrayMax = 0;
        ::FString::FString(&pFVar22->OpenedManifestFilePath,&local_540);
        ::FString::FString(&pFVar22->NativeArchiveFilePath,&local_358);
        ::FString::FString(&pFVar22->OpenedArchiveFilePath,&local_478);
        (pFVar22->CheckedOutFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar22->CheckedOutFiles).ArrayNum = 0;
        (pFVar22->CheckedOutFiles).ArrayMax = 0;
        (pFVar22->AssociatedLocalizationTarget).WeakPtr = (FWeakObjectPtr)0x0;
        pFVar22->bLoadedSuccessfully = true;
        Initialize(pFVar22);
      }
      TVar23 = MakeShareable<FTranslationDataManager>((FTranslationDataManager *)local_278);
      TSharedRef<FTranslationDataManager,1>::
      TSharedRef<FTranslationDataManager,1><FTranslationDataManager>
                (&local_550,(TRawPtrProxy<FTranslationDataManager> *)TVar23.Object);
      pFVar22 = local_550.Object;
      local_5a0 = local_550.Object;
      if ((local_550.Object)->bLoadedSuccessfully != false) {
        local_238._0_8_ = (FScriptContainerElement *)0x0;
        local_218 = (FCulture *)0x0;
        FStack_210.Data = (FScriptContainerElement *)0x0;
        local_238._8_8_ = (FScriptContainerElement *)0x0;
        local_228.Data = (FScriptContainerElement *)0x0;
        local_220.Data = (FScriptContainerElement *)0x0;
        local_208.Data = (FScriptContainerElement *)0x0;
        local_200 = (FInternationalizationArchive *)0x0;
        local_1f8.Data = (FScriptContainerElement *)0x0;
        local_1f0 = (FInternationalizationArchive *)0x0;
        local_1e8._0_8_ = (TReferenceControllerBase<1> *)0x0;
        local_1e8._8_8_ = (FInternationalizationManifest *)0x0;
        local_1d8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_1d0.Data = (FScriptContainerElement *)0x0;
        local_1b8._0_4_ = 0;
        local_1b8._4_4_ = 0;
        local_1b0 = 0;
        local_1ac = 0x80;
        local_1a8 = -1;
        local_1a4 = 0;
        local_198 = (void *)0x0;
        local_190 = 0;
        ::FString::operator=((FString *)local_1e8,&local_6a0);
        ::FString::FString(&local_3d8,L"");
        FPortableObjectFormatDOM::SetLanguage
                  ((FPortableObjectFormatDOM *)local_238,&local_5b0,&local_3d8);
        if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
        }
        this_00 = Z_Construct_UClass_UGeneralProjectSettings_NoRegister();
        if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(this_00);
        }
        FPortableObjectFormatDOM::CreateNewHeader
                  ((FPortableObjectFormatDOM *)local_238,
                   (FString *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x20);
        PortableObjectPipeline::UpdatePOFileHeaderForSettings
                  ((FPortableObjectFormatDOM *)local_238,
                   (pUVar21->Settings).ExportSettings.CollapseMode,
                   (pUVar21->Settings).ExportSettings.POFormat);
        pFVar36 = local_520;
        local_4f0 = local_520;
        local_4e0 = local_518;
        if (local_518 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_518->SharedReferenceCount = (atomic<int>)((int)local_518->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_520 == (FScriptContainerElement *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar10 = (*pcVar4)();
          return (bool)uVar10;
        }
LAB_146bbe0de:
        do {
          iVar38 = 0;
          local_690 = iVar32;
          if ((iVar32 < 0) || (*(int *)(pFVar36 + 8) <= iVar32)) goto LAB_146bbe3dd;
          if ((iVar32 < 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar4 = (code *)swi(3);
            uVar10 = (*pcVar4)();
            return (bool)uVar10;
          }
          pFVar39 = (pFVar22->AllTranslations).AllocatorInstance.Data;
          iVar38 = (pFVar22->AllTranslations).ArrayNum;
          pFVar35 = pFVar39 + (longlong)iVar38 * 8;
          lVar34 = *(longlong *)(*(longlong *)pFVar36 + (longlong)iVar32 * 8);
          local_500 = pFVar35;
          while( true ) {
            if ((pFVar22->AllTranslations).ArrayNum != iVar38) {
              local_6a6 = 0;
              `TCheckedPointerIterator<UTranslationUnit_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_6a6);
            }
            if (pFVar39 == pFVar35) break;
            lVar3 = *(longlong *)pFVar39;
            iVar32 = *(int *)(lVar3 + 0x30);
            if (iVar32 == *(int *)(lVar34 + 0x30)) {
              if (1 < iVar32) {
                iVar32 = wcscmp(*(wchar_t **)(lVar3 + 0x28),*(wchar_t **)(lVar34 + 0x28));
                bVar9 = iVar32 == 0;
                goto LAB_146bbe199;
              }
LAB_146bbe1a0:
              iVar32 = *(int *)(lVar3 + 0x70);
              pFVar17 = *(FString **)(lVar3 + 0x68);
              pFVar24 = pFVar17 + (longlong)iVar32 * 3;
              while( true ) {
                if (*(int *)(lVar3 + 0x70) != iVar32) {
                  local_6a5 = 0;
                  `TCheckedPointerIterator<FTranslationContextInfo,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(&local_6a5);
                }
                pFVar35 = local_500;
                pFVar22 = local_5a0;
                if (pFVar17 == pFVar24) break;
                iVar13 = (pFVar17->Data).ArrayNum;
                if (iVar13 == *(int *)(lVar34 + 0x40)) {
                  if (1 < iVar13) {
                    iVar13 = wcscmp((wchar_t *)(pFVar17->Data).AllocatorInstance.Data,
                                    *(wchar_t **)(lVar34 + 0x38));
                    bVar9 = iVar13 == 0;
                    goto LAB_146bbe1f1;
                  }
LAB_146bbe212:
                  iVar38 = *(int *)(lVar34 + 0x60) + -1;
                  if (*(int *)(lVar34 + 0x60) == 0) {
                    iVar38 = 0;
                  }
                  ::FString::AssignRange
                            ((FString *)(lVar3 + 0x58),*(wchar_t **)(lVar34 + 0x58),iVar38);
                  local_4f8.Object = ::operator_new(0x90);
                  if (local_4f8.Object == (FPortableObjectEntry *)0x0) {
                    local_4f8.Object = (FPortableObjectEntry *)0x0;
                  }
                  else {
                    (local_4f8.Object)->_padding_ = 0;
                    (local_4f8.Object)->_padding_ = 0;
                    (local_4f8.Object)->_padding_ = 0;
                    (local_4f8.Object)->_padding_ = 0;
                    (local_4f8.Object)->_padding_ = 0;
                    (local_4f8.Object)->_padding_ = 0;
                    ((local_4f8.Object)->MsgStr).AllocatorInstance.Data =
                         (FScriptContainerElement *)0x0;
                    ((local_4f8.Object)->MsgStr).ArrayNum = 0;
                    ((local_4f8.Object)->MsgStr).ArrayMax = 0;
                    ((local_4f8.Object)->ExtractedComments).AllocatorInstance.Data =
                         (FScriptContainerElement *)0x0;
                    ((local_4f8.Object)->ExtractedComments).ArrayNum = 0;
                    ((local_4f8.Object)->ExtractedComments).ArrayMax = 0;
                    ((local_4f8.Object)->TranslatorComments).AllocatorInstance.Data =
                         (FScriptContainerElement *)0x0;
                    ((local_4f8.Object)->TranslatorComments).ArrayNum = 0;
                    ((local_4f8.Object)->TranslatorComments).ArrayMax = 0;
                    ((local_4f8.Object)->ReferenceComments).AllocatorInstance.Data =
                         (FScriptContainerElement *)0x0;
                    ((local_4f8.Object)->ReferenceComments).ArrayNum = 0;
                    ((local_4f8.Object)->ReferenceComments).ArrayMax = 0;
                    ((local_4f8.Object)->Flags).AllocatorInstance.Data =
                         (FScriptContainerElement *)0x0;
                    ((local_4f8.Object)->Flags).ArrayNum = 0;
                    ((local_4f8.Object)->Flags).ArrayMax = 0;
                    ((local_4f8.Object)->UnknownElements).AllocatorInstance.Data =
                         (FScriptContainerElement *)0x0;
                    ((local_4f8.Object)->UnknownElements).ArrayNum = 0;
                    ((local_4f8.Object)->UnknownElements).ArrayMax = 0;
                  }
                  TSharedRef<FPortableObjectEntry,1>::
                  TSharedRef<FPortableObjectEntry,1><FPortableObjectEntry>(&local_3b8,&local_4f8);
                  this = local_3b8.Object;
                  pUVar21 = local_638;
                  local_3c8.Object = (FLocMetadataObject *)0x0;
                  local_3c8.SharedReferenceCount.ReferenceController =
                       (TReferenceControllerBase<1> *)0x0;
                  PortableObjectPipeline::PopulateBasicPOFileEntry
                            (local_3b8.Object,(FString *)(lVar3 + 0x28),pFVar17,&local_3c8,
                             (FString *)(lVar3 + 0x48),(FString *)(lVar3 + 0x58),
                             (local_638->Settings).ExportSettings.CollapseMode,
                             (local_638->Settings).ExportSettings.POFormat);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_3c8.SharedReferenceCount.ReferenceController)
                  ;
                  FPortableObjectEntry::AddReference(this,pFVar17 + 1);
                  pFVar24 = PortableObjectPipeline::GetConditionedKeyForExtractedComment
                                      (&local_2f0,pFVar17);
                  FPortableObjectEntry::AddExtractedComment(this,pFVar24);
                  if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
                  }
                  pFVar17 = PortableObjectPipeline::GetConditionedReferenceForExtractedComment
                                      (&local_2e0,pFVar17 + 1);
                  FPortableObjectEntry::AddExtractedComment(this,pFVar17);
                  if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
                  }
                  FVar8.ReferenceController = local_3b8.SharedReferenceCount.ReferenceController;
                  local_2c8.Object = local_3b8.Object;
                  local_2c8.SharedReferenceCount.ReferenceController =
                       local_3b8.SharedReferenceCount.ReferenceController;
                  if (local_3b8.SharedReferenceCount.ReferenceController !=
                      (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    (local_3b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                         (atomic<int>)
                         ((int)(local_3b8.SharedReferenceCount.ReferenceController)->
                               SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  FPortableObjectFormatDOM::AddEntry
                            ((FPortableObjectFormatDOM *)local_238,&local_2c8);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(FVar8.ReferenceController);
                  iVar32 = local_690 + 1;
                  pFVar36 = local_4f0;
                  pFVar22 = local_5a0;
                  goto LAB_146bbe0de;
                }
                bVar9 = *(int *)(lVar34 + 0x40) + iVar13 == 1;
LAB_146bbe1f1:
                if (bVar9) goto LAB_146bbe212;
                pFVar17 = pFVar17 + 3;
              }
            }
            else {
              bVar9 = iVar32 + *(int *)(lVar34 + 0x30) == 1;
LAB_146bbe199:
              if (bVar9) goto LAB_146bbe1a0;
            }
            pFVar39 = pFVar39 + 8;
          }
          iVar32 = local_690 + 1;
          pFVar36 = local_4f0;
          pUVar21 = local_638;
        } while( true );
      }
      goto LAB_146bbea9b;
    }
    local_6a8 = '\0';
    goto LAB_146bbebed;
  }
LAB_146bbed0f:
  local_140 = 0;
  if (local_148 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_148);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_188);
  pFVar36 = (local_598->AllocatorInstance).Data;
  if (pFVar36 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar36);
  }
  return bVar9;
LAB_146bbe3dd:
  iVar32 = 0;
  if (local_6a4 != '\0') {
    ::FString::FString(&local_3a8,".po");
    ::FString::FString(&local_4b8,"Temp");
    pFVar17 = FPaths::ProjectSavedDir();
    iVar13 = local_4b8.Data.ArrayNum + -1;
    if (local_4b8.Data.ArrayNum == 0) {
      iVar13 = iVar38;
    }
    iVar12 = iVar32;
    if (((pFVar17->Data).ArrayNum == 0) && (iVar13 + 1 != 0)) {
      iVar12 = 1;
    }
    local_630.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar12 = iVar13 + 1 + iVar12;
    iVar33 = (pFVar17->Data).ArrayNum;
    pFVar36 = (pFVar17->Data).AllocatorInstance.Data;
    local_630.ArrayNum = iVar33;
    if ((iVar33 == 0) && (iVar12 == 0)) {
      local_630.ArrayMax = 0;
    }
    else {
      uVar11 = iVar33 + iVar12;
      if ((int)uVar11 < iVar33) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar11,0,&local_630.AllocatorInstance,iVar33,&local_630.ArrayMax);
      if (iVar33 != 0) {
        memcpy(local_630.AllocatorInstance.Data,pFVar36,(longlong)iVar33 * 2);
      }
    }
    ::FString::PathAppend
              ((FString *)&local_630,(wchar_t *)local_4b8.Data.AllocatorInstance.Data,iVar13);
    iVar13 = local_5b0.Data.ArrayNum + -1;
    if (local_5b0.Data.ArrayNum == 0) {
      iVar13 = iVar38;
    }
    if ((local_630.ArrayNum != 0) || (iVar12 = 1, iVar13 + 1 == 0)) {
      iVar12 = iVar32;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_580,&local_630,iVar13 + 1 + iVar12);
    ::FString::PathAppend
              ((FString *)&local_580,(wchar_t *)local_5b0.Data.AllocatorInstance.Data,iVar13);
    iVar13 = local_6a0.Data.ArrayNum + -1;
    if (local_6a0.Data.ArrayNum == 0) {
      iVar13 = iVar38;
    }
    if ((local_580.ArrayNum != 0) || (iVar38 = 1, iVar13 + 1 == 0)) {
      iVar38 = iVar32;
    }
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::
    TArray<wchar_t,TSizedDefaultAllocator<32>_><wchar_t>(&local_4c8,&local_580,iVar38 + iVar13 + 1);
    ::FString::PathAppend
              ((FString *)&local_4c8,(wchar_t *)local_6a0.Data.AllocatorInstance.Data,iVar13);
    ::FString::ConcatFF(&local_610,(FString *)&local_4c8,&local_3a8);
    if (local_4c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4c8.AllocatorInstance.Data);
    }
    if (local_580.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_580.AllocatorInstance.Data);
    }
    if (local_630.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_630.AllocatorInstance.Data);
    }
    if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
    }
    if (local_3a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a8.Data.AllocatorInstance.Data);
    }
    pIVar25 = IFileManager::Get();
    FVar37.Data = (FScriptContainerElement *)L"";
    if (local_610.Data.ArrayNum != 0) {
      FVar37.Data = local_610.Data.AllocatorInstance.Data;
    }
    pFVar17 = FPortableObjectFormatDOM::ToString((FPortableObjectFormatDOM *)local_238,&local_2a8);
    iVar38 = (pFVar17->Data).ArrayNum;
    local_398 = (pFVar17->Data).AllocatorInstance.Data;
    iStack_390 = iVar38 + -1;
    if (iVar38 == 0) {
      iStack_390 = iVar32;
    }
    local_2b8._12_4_ = uStack_38c;
    local_2b8.Size = iStack_390;
    local_2b8.DataPtr = (wchar_t *)local_398;
    FFileHelper::SaveStringToFile(&local_2b8,(wchar_t *)FVar37.Data,AutoDetect,pIVar25,0);
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
    }
    uVar11 = (pUVar21->Settings).Guid.A;
    uVar5 = (pUVar21->Settings).Guid.B;
    uVar6 = (pUVar21->Settings).Guid.C;
    uVar7 = (pUVar21->Settings).Guid.D;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_class_ILocalizationServiceModule&___ptr64___cdecl_ILocalizationServiceModule::Get(void)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_ILocalizationServiceModule&___ptr64___cdecl_ILocalizationServiceModule::Get(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_ILocalizationServiceModule&___ptr64___cdecl_ILocalizationServiceModule::Get(void)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_ILocalizationServiceModule&___ptr64___cdecl_ILocalizationServiceModule::Get(void)'
                      ::__l2::LocalizationServiceModule,"LocalizationService");
      _Init_thread_footer(&`public:_static_class_ILocalizationServiceModule&___ptr64___cdecl_ILocalizationServiceModule::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FVar2 = `public:_static_class_ILocalizationServiceModule&___ptr64___cdecl_ILocalizationServiceModule::Get(void)'
            ::__l2::LocalizationServiceModule;
    pFVar19 = FModuleManager::Get();
    pIVar20 = FModuleManager::LoadModuleChecked(pFVar19,FVar2);
    plVar26 = (longlong *)(**(code **)((longlong)*pIVar20 + 0x50))(pIVar20);
    pFVar27 = ::operator_new(0x60);
    if (pFVar27 == (FUploadLocalizationTargetFile *)0x0) {
      pFVar27 = (FUploadLocalizationTargetFile *)0x0;
    }
    else {
      pFVar27->_padding_ = 0;
      pFVar27->_padding_ = 0;
      pFVar27->_padding_ = (longlong)&___7FUploadLocalizationTargetFile__6B_;
      (pFVar27->InTargetGuid).A = 0;
      (pFVar27->InTargetGuid).B = 0;
      (pFVar27->InTargetGuid).C = 0;
      (pFVar27->InTargetGuid).D = 0;
      (pFVar27->InLocale).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar27->InLocale).Data.ArrayNum = 0;
      (pFVar27->InLocale).Data.ArrayMax = 0;
      (pFVar27->InRelativeInputFilePathAndName).Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (pFVar27->InRelativeInputFilePathAndName).Data.ArrayNum = 0;
      (pFVar27->InRelativeInputFilePathAndName).Data.ArrayMax = 0;
      FText::FText(&pFVar27->OutErrorText);
      pFVar27->bPreserveAllText = true;
      if ((((pFVar27->_padding_ != 0) && (pFVar27->_padding_ != 0)) &&
          (0 < *(int *)(pFVar27->_padding_ + 8))) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InObject || !InObject->DoesSharedInstanceExist()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x7a5,L"Trying to share an already-shared object"), bVar9)) {
        pcVar4 = (code *)swi(3);
        uVar10 = (*pcVar4)();
        return (bool)uVar10;
      }
    }
    local_4e8.Object = pFVar27;
    TSharedRef<FUploadLocalizationTargetFile,1>::
    TSharedRef<FUploadLocalizationTargetFile,1><FUploadLocalizationTargetFile>
              (&local_388,&local_4e8);
    pFVar27 = local_388.Object;
    local_570.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ((local_388.Object)->InTargetGuid).A = uVar11;
    ((local_388.Object)->InTargetGuid).B = uVar5;
    ((local_388.Object)->InTargetGuid).C = uVar6;
    ((local_388.Object)->InTargetGuid).D = uVar7;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
              (&local_570,(wchar_t *)local_5b0.Data.AllocatorInstance.Data,local_5b0.Data.ArrayNum,0
              );
    iVar38 = local_570.ArrayNum + -1;
    if (local_570.ArrayNum == 0) {
      iVar38 = iVar32;
    }
    ::FString::AssignRange(&pFVar27->InLocale,(wchar_t *)local_570.AllocatorInstance.Data,iVar38);
    if (local_570.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_570.AllocatorInstance.Data);
    }
    pFVar17 = FPaths::ProjectDir(&local_298);
    if ((pFVar17->Data).ArrayNum == 0) {
      pwVar31 = L"";
    }
    else {
      pwVar31 = (wchar_t *)(pFVar17->Data).AllocatorInstance.Data;
    }
    FPaths::MakePathRelativeTo(&local_610,pwVar31);
    if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_298.Data.AllocatorInstance.Data);
    }
    iVar38 = local_610.Data.ArrayNum;
    FVar37.Data = local_610.Data.AllocatorInstance.Data;
    pFVar17 = &pFVar27->InRelativeInputFilePathAndName;
    if (pFVar17 != &local_610) {
      piVar1 = &(pFVar27->InRelativeInputFilePathAndName).Data.ArrayMax;
      iVar32 = *piVar1;
      (pFVar27->InRelativeInputFilePathAndName).Data.ArrayNum = local_610.Data.ArrayNum;
      if ((local_610.Data.ArrayNum == 0) && (iVar32 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_610.Data.ArrayNum,iVar32,(ForAnyElementType *)pFVar17,
                   local_610.Data.ArrayNum,piVar1);
        if (iVar38 != 0) {
          memcpy((pFVar17->Data).AllocatorInstance.Data,FVar37.Data,(longlong)iVar38 * 2);
        }
      }
    }
    pFVar27->bPreserveAllText = true;
    local_658.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_650.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_650.DelegateSize = 0;
    pcVar4 = *(code **)(*plVar26 + 0x68);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_658,(FWriteAccessScope *)&local_320);
    local_308 = &local_650;
    puVar28 = UE::Core::Private::DelegateAllocate(0x20,&local_650);
    if (puVar28 != (undefined8 *)0x0) {
      *puVar28 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEBV__TSharedRef_VILocalizationServiceOperation___00__W4Type_ELocalizationServiceOperationCommandResult___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar29 = FDelegateHandle::GenerateNewID();
      puVar28[2] = uVar29;
      *puVar28 = &
                 ___7__TBaseStaticDelegateInstance___A6AXAEBV__TSharedRef_VILocalizationServiceOperation___00__W4Type_ELocalizationServiceOperationCommandResult___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar28[3] = SaveSelectedTranslationsToTranslationServiceCallback;
    }
    if (local_320.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_320.Accessor,&local_320);
    }
    FVar8.ReferenceController = local_388.SharedReferenceCount.ReferenceController;
    local_378 = local_388.Object;
    pTStack_370 = local_388.SharedReferenceCount.ReferenceController;
    local_5e0 = (FLocalizationServiceTranslationIdentifier *)0x0;
    local_5d8 = 0;
    if (local_388.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_388.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_388.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar4)(plVar26,&local_378,&local_5e0,1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_370)
    ;
    DestructItems<FLocalizationServiceTranslationIdentifier,int>(local_5e0,(int)local_5d8);
    if (local_5e0 != (FLocalizationServiceTranslationIdentifier *)0x0) {
      FMemory::Free(local_5e0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_658,(FWriteAccessScope *)&local_338);
    if ((local_650.DelegateSize != 0) &&
       (local_650.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_650.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_650,0,0,0x10);
      local_650.DelegateSize = 0;
    }
    if (local_338.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_338.Accessor,&local_338);
    }
    if (local_650.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_650.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_658.AccessDetector);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar8.ReferenceController);
    pUVar21 = local_638;
    if (local_610.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_610.Data.AllocatorInstance.Data);
      pUVar21 = local_638;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_4e0);
  local_190 = 0;
  if (local_198 != (void *)0x0) {
    FMemory::Free(local_198);
  }
  TSparseArray<TSparseSetElement<TTuple<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPortableObjectEntryKey,TSharedPtr<FPortableObjectEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_1d8);
  if ((TReferenceControllerBase<1> *)local_1e8._0_8_ != (TReferenceControllerBase<1> *)0x0) {
    FMemory::Free((void *)local_1e8._0_8_);
  }
  DestructItems<TTuple<FString,FString>,int>
            ((TTuple<FString,FString> *)local_1f8.Data,(int)local_1f0);
  if ((TTuple<FString,FString> *)local_1f8.Data != (TTuple<FString,FString> *)0x0) {
    FMemory::Free(local_1f8.Data);
  }
  DestructItems<FString,int>((FString *)local_208.Data,(int)local_200);
  if (local_208.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FStack_210.Data);
  if (local_228.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data);
  }
  if ((FScriptContainerElement *)local_238._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_238._0_8_);
  }
  pFVar22 = local_550.Object;
  if ((local_6a8 == '\0') || (bVar9 = WriteTranslationData(local_550.Object,false), !bVar9)) {
LAB_146bbea9b:
    iVar32 = 0;
  }
  else {
    iVar32 = 1;
  }
  local_6a8 = (char)iVar32;
  FPaths::ConvertRelativePathToFull(&local_368,&pFVar22->OpenedManifestFilePath);
  pFVar17 = FPaths::EngineContentDir(&local_288);
  FPaths::ConvertRelativePathToFull(&local_498,pFVar17);
  if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data.AllocatorInstance.Data);
  }
  iVar38 = local_498.Data.ArrayNum + -1;
  FVar37.Data = local_498.Data.AllocatorInstance.Data;
  if (local_498.Data.ArrayNum == 0) {
    iVar38 = 0;
    FVar37.Data = (FScriptContainerElement *)L"";
  }
  ::FString::StartsWith(&local_368,(wchar_t *)FVar37.Data,iVar38,IgnoreCase);
  LocalizationConfigurationScript::GetRegenerateResourcesConfigPath(&local_4a8,pUVar21);
  this_01 = (FConfigFile *)
            LocalizationConfigurationScript::GenerateRegenerateResourcesConfigFile
                      ((FLocalizationConfigurationScript *)&local_138,pUVar21);
  local_560.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_560.Data.ArrayNum = 0;
  local_560.Data.ArrayMax = 0;
  FConfigFile::Write(this_01,&local_4a8,true,&local_560);
  if (local_560.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_560.Data.AllocatorInstance.Data);
  }
  FConfigFile::~FConfigFile(&local_138);
  FTextLocalizationResourceGenerator::GenerateLocResAndUpdateLiveEntriesFromConfig(&local_4a8,None);
  if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
  }
  if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_498.Data.AllocatorInstance.Data);
  }
  if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_550.SharedReferenceCount.ReferenceController);
  if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_358.Data.AllocatorInstance.Data);
  }
  if (local_5d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5d0.Data.AllocatorInstance.Data);
  }
LAB_146bbebed:
  bVar9 = SUB41(iVar32,0);
  iVar38 = 1;
  if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_488.Data.AllocatorInstance.Data);
  }
  if (local_540.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_540.Data.AllocatorInstance.Data);
  }
  if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.Data.AllocatorInstance.Data);
  }
  if (local_5c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5c0.Data.AllocatorInstance.Data);
  }
  if (local_5b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5b0.Data.AllocatorInstance.Data);
  }
  if (local_600.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_600.Data.AllocatorInstance.Data);
  }
  if (local_6a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6a0.Data.AllocatorInstance.Data);
  }
  if (local_620.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_620.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_518);
  if (local_530.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_530.Data.AllocatorInstance.Data);
  }
  uStack_450 = uStack_450 & ~auStack_460._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_460);
  uVar30 = (ulonglong)uStack_44c;
  if (*(int *)(auStack_460._8_8_ + 0x18) <= (int)uStack_44c) goto code_r0x000146bbecb4;
  goto LAB_146bbd8c0;
code_r0x000146bbecb4:
  if (((char)local_430 != '\0') && (local_430._1_1_ != '\0')) {
    uVar11 = *(int *)&(local_438->Elements).field_0x8 - *(int *)&(local_438->Elements).field_0x34;
    if (3 < uVar11) {
      uVar30 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
      lVar34 = 0x3f;
      if (uVar30 != 0) {
        for (; uVar30 >> lVar34 == 0; lVar34 = lVar34 + -1) {
        }
      }
      iVar38 = 1 << ((byte)lVar34 & 0x1f);
    }
    if (((0 < (int)uVar11) && (local_438->HashSize < iVar38)) || (iVar38 < local_438->HashSize)) {
      local_438->HashSize = iVar38;
      TSet<TTuple<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>,1>,0>,FDefaultSetAllocator>
      ::Rehash(local_438);
    }
  }
  goto LAB_146bbed0f;
}

// SaveSelectedTranslationsToTranslationServiceCallback @ 146bbedf0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __cdecl
FTranslationDataManager::SaveSelectedTranslationsToTranslationServiceCallback
          (TSharedRef<ILocalizationServiceOperation,1> *param_1,Type param_2)

{
  int iVar1;
  ILocalizationServiceOperation *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  void *pvVar4;
  FScriptContainerElement *_Src;
  code *pcVar5;
  ForAnyElementType _Src_00;
  bool bVar6;
  FText *pFVar7;
  FString *pFVar8;
  FInternationalization *this;
  FText *pFVar9;
  FText *pFVar10;
  FTextFormat *pFVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  FString local_248;
  FString local_238;
  ForAnyElementType local_228;
  undefined8 local_220;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FText local_1e8;
  TSharedPtr<FCulture,1> local_1d8;
  FText local_1c8;
  FText local_1b8;
  FText local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FText local_168;
  TSharedRef<FTokenizedMessage,1> local_158;
  FText local_148;
  FText local_138;
  TSharedRef<FTokenizedMessage,1> local_128;
  TSharedRef<FTokenizedMessage,1> local_118;
  FMessageLog local_108;
  FMessageLog local_d8;
  FText local_a8;
  FText local_98;
  FTextFormat local_88;
  FText local_78;
  FText local_68;
  FTextFormat local_58;
  
  pIVar2 = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pFVar7 = FText::GetEmpty();
  local_1e8.TextData.Reference = (pFVar7->TextData).Reference;
  if (local_1e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1e8.TextData.Reference + 8))
              (local_1e8.TextData.Reference,local_res10);
  }
  local_1e8.Flags = pFVar7->Flags;
  FVar13.Data = (FScriptContainerElement *)0x0;
  local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.Data.ArrayNum = 0;
  local_238.Data.ArrayMax = 0;
  ::FString::FString(&local_208,"");
  ::FString::FString(&local_1f8,"");
  ::FString::FString(&local_248,"");
  if (pIVar2 != (ILocalizationServiceOperation *)0x0) {
    local_1c8.TextData.Reference = *(ITextData **)(pIVar2 + 3);
    if (local_1c8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1c8.TextData.Reference + 8))
                (local_1c8.TextData.Reference,local_res8);
    }
    local_1c8.Flags = *(uint *)&pIVar2[3].field_0x8;
    FText::operator=(&local_1e8,&local_1c8);
    if (local_1c8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1c8.TextData.Reference + 0x10))();
    }
    local_228.Data = (FScriptContainerElement *)0x0;
    iVar1 = *(int *)(pIVar2 + 2);
    pvVar4 = *(void **)&pIVar2[1].field_0x10;
    local_220 = CONCAT44(local_220._4_4_,iVar1);
    if (iVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,0,&local_228,iVar1,(int *)((longlong)&local_220 + 4));
      memcpy(local_228.Data,pvVar4,(longlong)iVar1 * 2);
      FVar13.Data = local_228.Data;
    }
    local_228.Data = (FScriptContainerElement *)0x0;
    local_220 = 0;
    if (&local_238 != (FString *)&pIVar2[2].field_0x8) {
      iVar1 = *(int *)&pIVar2[2].field_0x10;
      pvVar4 = *(void **)&pIVar2[2].field_0x8;
      local_238.Data.ArrayNum = iVar1;
      if (((iVar1 != 0) || (local_238.Data.ArrayMax != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar1,local_238.Data.ArrayMax,(ForAnyElementType *)&local_238,iVar1,
                     &local_238.Data.ArrayMax), iVar1 != 0)) {
        memcpy(local_238.Data.AllocatorInstance.Data,pvVar4,(longlong)iVar1 * 2);
      }
    }
    pFVar8 = FPaths::GetBaseFilename(&local_198,&local_238,true);
    if (&local_208 != pFVar8) {
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
      }
      local_208.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
      (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_208.Data.ArrayNum = (pFVar8->Data).ArrayNum;
      local_208.Data.ArrayMax = (pFVar8->Data).ArrayMax;
      (pFVar8->Data).ArrayNum = 0;
      (pFVar8->Data).ArrayMax = 0;
    }
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    pFVar8 = FPaths::GetPath(&local_188,&local_238);
    if (&local_1f8 != pFVar8) {
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      local_1f8.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
      (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8.Data.ArrayNum = (pFVar8->Data).ArrayNum;
      local_1f8.Data.ArrayMax = (pFVar8->Data).ArrayMax;
      (pFVar8->Data).ArrayNum = 0;
      (pFVar8->Data).ArrayMax = 0;
    }
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    pFVar8 = FPaths::GetBaseFilename(&local_178,&local_1f8,true);
    if (&local_248 != pFVar8) {
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      local_248.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
      (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_248.Data.ArrayNum = (pFVar8->Data).ArrayNum;
      local_248.Data.ArrayMax = (pFVar8->Data).ArrayMax;
      (pFVar8->Data).ArrayNum = 0;
      (pFVar8->Data).ArrayMax = 0;
    }
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
  }
  this = FInternationalization::Get();
  FInternationalization::GetCulture(this,&local_1d8,&local_248);
  _Src_00.Data = local_248.Data.AllocatorInstance.Data;
  lVar12 = (longlong)local_248.Data.ArrayNum;
  local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.Data.ArrayNum = local_248.Data.ArrayNum;
  if (local_248.Data.ArrayNum == 0) {
    local_218.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_248.Data.ArrayNum,0,(ForAnyElementType *)&local_218,local_248.Data.ArrayNum
               ,&local_218.Data.ArrayMax);
    memcpy(local_218.Data.AllocatorInstance.Data,_Src_00.Data,lVar12 * 2);
  }
  if (local_1d8.Object != (FCulture *)0x0) {
    if ((local_1d8.Object == (FCulture *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar8 = FCulture::GetDisplayName(local_1d8.Object);
    if (&local_248 != pFVar8) {
      iVar1 = (pFVar8->Data).ArrayNum;
      _Src = (pFVar8->Data).AllocatorInstance.Data;
      local_248.Data.ArrayNum = iVar1;
      if ((iVar1 == 0) && (local_248.Data.ArrayMax == 0)) {
        local_248.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,local_248.Data.ArrayMax,(ForAnyElementType *)&local_248,iVar1,
                   &local_248.Data.ArrayMax);
        if (iVar1 != 0) {
          memcpy(local_248.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
        }
      }
    }
  }
  if ((param_2 == Succeeded) && (bVar6 = FText::IsEmpty(&local_1e8), bVar6)) {
    pFVar7 = FText::FromString(&local_a8,&local_208);
    pFVar9 = FText::FromString(&local_98,&local_218);
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_168,L"TranslationDataManager",
                         L"SaveSelectedTranslationsToTranslationServiceSuccess",
                         L"{0} translations for {1} target uploaded for processing to Translation Service."
                        );
    pFVar11 = FTextFormat::FTextFormat(&local_88,pFVar10,Default);
    FText::Format<FText,FText>(&local_1b8,pFVar11,pFVar9,pFVar7);
    if (local_168.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
    }
    ::FName::FName(&local_res18,"TranslationEditor");
    FMessageLog::FMessageLog(&local_d8,&local_res18);
    FMessageLog::Info(&local_d8,&local_158,&local_1b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    FMessageLog::Notify(&local_d8,&local_1b8,Info,true);
    FMessageLog::~FMessageLog(&local_d8);
  }
  else {
    bVar6 = FText::IsEmpty(&local_1e8);
    if (bVar6) {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_148,L"TranslationDataManager",
                          L"SaveToLocalizationServiceUnspecifiedError",
                          L"An unspecified error occured when trying to save to the Localization Service."
                         );
      FText::operator=(&local_1e8,pFVar7);
      if (local_148.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
      }
    }
    pFVar7 = FText::FromString(&local_78,&local_208);
    pFVar9 = FText::FromString(&local_68,&local_218);
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_138,L"TranslationDataManager",
                         L"SaveSelectedTranslationsToTranslationServiceFail",
                         L"{0} translations for {1} target failed to save to Translation Service!");
    pFVar11 = FTextFormat::FTextFormat(&local_58,pFVar10,Default);
    FText::Format<FText,FText>(&local_1a8,pFVar11,pFVar9,pFVar7);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    ::FName::FName(&local_res20,"TranslationEditor");
    FMessageLog::FMessageLog(&local_108,&local_res20);
    FMessageLog::Error(&local_108,&local_128,&local_1a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_128.SharedReferenceCount.ReferenceController);
    FMessageLog::Error(&local_108,&local_118,&local_1e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_118.SharedReferenceCount.ReferenceController);
    FMessageLog::Notify(&local_108,&local_1a8,Info,false);
    FMessageLog::~FMessageLog(&local_108);
    local_1b8.TextData.Reference = local_1a8.TextData.Reference;
  }
  if (local_1b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1b8.TextData.Reference + 0x10))();
  }
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d8.SharedReferenceCount.ReferenceController);
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  if (FVar13.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar13.Data);
  }
  if (local_1e8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1e8.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// UnloadHistoryInformation @ 146bc2780

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __thiscall FTranslationDataManager::UnloadHistoryInformation(FTranslationDataManager *this)

{
  int *piVar1;
  int iVar2;
  FTranslationChange *pFVar3;
  code *pcVar4;
  UTranslationUnit *pUVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 local_res10 [8];
  longlong local_res18;
  UTranslationUnit *local_78;
  FString local_70;
  FString local_60;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  iVar8 = (this->AllTranslations).ArrayNum;
  uVar12 = 0;
  if (0 < iVar8) {
    local_res18 = 0;
    do {
      lVar11 = local_res18;
      uVar7 = 0;
      if ((int)uVar12 < iVar8) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_78 = *(UTranslationUnit **)((this->AllTranslations).AllocatorInstance.Data + lVar11);
      if ((local_78 != (UTranslationUnit *)0x0) && (local_78->HasBeenReviewed == false)) {
        pFVar10 = (this->Untranslated).AllocatorInstance.Data;
        for (pFVar9 = pFVar10; pFVar9 != pFVar10 + (longlong)(this->Untranslated).ArrayNum * 8;
            pFVar9 = pFVar9 + 8) {
          if (*(UTranslationUnit **)pFVar9 == local_78) goto LAB_146bc28ea;
        }
        if (((pFVar10 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 <
             pFVar10 + (longlong)(this->Untranslated).ArrayMax * 8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (this->Untranslated).ArrayNum;
        piVar1 = &(this->Untranslated).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->Untranslated).AllocatorInstance,piVar1);
        }
        (this->Untranslated).ArrayNum = iVar8 + 1;
        *(UTranslationUnit **)((this->Untranslated).AllocatorInstance.Data + (longlong)iVar8 * 8) =
             local_78;
LAB_146bc28ea:
        pFVar9 = (this->Review).AllocatorInstance.Data;
        pFVar10 = pFVar9 + (longlong)(this->Review).ArrayNum * 8;
        for (; pFVar9 != pFVar10; pFVar9 = pFVar9 + 8) {
          if (*(UTranslationUnit **)pFVar9 == local_78) {
            TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_>::Remove(&this->Review,&local_78);
            break;
          }
        }
        ::FString::Empty(&local_78->Translation);
        pUVar5 = local_78;
        iVar8 = (local_78->Contexts).ArrayNum;
        pFVar10 = (local_78->Contexts).AllocatorInstance.Data;
        pFVar9 = pFVar10 + (longlong)iVar8 * 0x30;
        while( true ) {
          if ((pUVar5->Contexts).ArrayNum != iVar8) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<FTranslationContextInfo,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res10);
          }
          lVar11 = local_res18;
          if (pFVar10 == pFVar9) break;
          ::FString::FString(&local_70,(FString *)pFVar10);
          ::FString::FString(&local_60,(FString *)(pFVar10 + 0x10));
          iVar2 = *(int *)&pFVar10[0x28].field_0x0;
          pFVar3 = (FTranslationChange *)
                   (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar10[0x20].field_0x0)->
                   AllocatorInstance).Data;
          local_50.Data = (FScriptContainerElement *)0x0;
          if (iVar2 == 0) {
            local_44[0] = 0;
            local_48 = iVar2;
          }
          else {
            local_48 = iVar2;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,iVar2,0,&local_50,iVar2,local_44);
            ConstructItems<FTranslationChange,FTranslationChange,int>(local_50.Data,pFVar3,iVar2);
          }
          DestructItems<FTranslationChange,int>((FTranslationChange *)local_50.Data,local_48);
          local_48 = 0;
          if (local_44[0] != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,0,&local_50,0,local_44);
          }
          DestructItems<FTranslationChange,int>((FTranslationChange *)local_50.Data,local_48);
          if ((FTranslationChange *)local_50.Data != (FTranslationChange *)0x0) {
            FMemory::Free(local_50.Data);
          }
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
          pFVar10 = pFVar10 + 0x30;
        }
      }
      iVar8 = (this->AllTranslations).ArrayNum;
      local_res18 = lVar11 + 8;
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < iVar8);
  }
  return;
}

// WriteJSONToTextFile @ 146bc3d20

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTranslationDataManager::WriteJSONToTextFile
          (FTranslationDataManager *this,FString *param_1,FString *param_2)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  int iVar9;
  ISourceControlModule *pIVar10;
  FText *pFVar11;
  FTextFormat *pFVar12;
  IFileManager *pIVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  FName *pFVar16;
  ISlateStyle *pIVar17;
  FSlateNotificationManager *this_00;
  wchar_t *pwVar18;
  FScriptContainerElement *pFVar19;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar20;
  FScriptContainerElement *pFVar21;
  bool bVar22;
  FName local_res18;
  FName local_res20;
  undefined1 local_5e8 [8];
  FDelegateAllocation local_5e0;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_5d0
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_5c0
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_5b0
  ;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_5a0
  ;
  FText local_590;
  undefined1 local_580;
  undefined1 local_578 [8];
  ForAnyElementType FStack_570;
  ulonglong local_568;
  FName local_560;
  FName local_558;
  <lambda_1> local_550;
  FString local_548;
  FScriptContainerElement *local_538;
  int iStack_530;
  undefined4 uStack_52c;
  FString local_528;
  FString local_518;
  FString local_508;
  FDestructionSentinel local_4f8;
  FDestructionSentinel local_4e0;
  FFormatArgumentValue local_4c8;
  FDestructionSentinel local_4a8;
  FDelegateAllocation *local_490;
  FFormatArgumentValue local_488;
  FFormatArgumentValue local_468;
  FFormatArgumentValue local_448;
  FName local_428;
  FText local_420;
  TSharedRef<FTokenizedMessage,1> local_410;
  FText local_400;
  FText local_3f0;
  FText local_3e0;
  TStringView<wchar_t> local_3c8;
  FText local_3b8;
  TSharedRef<FTokenizedMessage,1> local_3a8;
  FText local_398;
  FText local_388;
  FText local_378;
  FText local_368;
  FText local_358;
  TSharedPtr<SNotificationItem,1> local_348;
  FText local_338;
  TSharedRef<FTokenizedMessage,1> local_328;
  FText local_318;
  FText local_308;
  FText local_2f8;
  TSharedRef<FTokenizedMessage,1> local_2e8;
  FText local_2d8;
  FText local_2c8;
  FText local_2b8;
  FMessageLog local_2a8;
  FMessageLog local_278;
  FMessageLog local_248;
  FNotificationInfo local_218;
  FTextFormat local_b0;
  FTextFormat local_a0;
  FTextFormat local_90;
  FMessageLog local_80;
  FTextFormat local_50;
  
  bVar8 = false;
  bVar6 = true;
  if ((param_2->Data).ArrayNum < 2) {
    return false;
  }
  pIVar10 = ISourceControlModule::Get();
  cVar5 = (**(code **)((longlong)*pIVar10 + 0x70))(pIVar10);
  if (cVar5 != '\0') {
    pTVar20 = &this->CheckedOutFiles;
    pFVar19 = (pTVar20->AllocatorInstance).Data;
    pFVar21 = pFVar19 + (longlong)(this->CheckedOutFiles).ArrayNum * 0x10;
    for (; pFVar19 != pFVar21; pFVar19 = pFVar19 + 0x10) {
      iVar9 = *(int *)(pFVar19 + 8);
      iVar2 = (param_2->Data).ArrayNum;
      if (iVar9 == iVar2) {
        if (1 < iVar9) {
          iVar9 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)pFVar19,(wchar_t *)(param_2->Data).AllocatorInstance.Data)
          ;
          bVar22 = iVar9 == 0;
          goto LAB_146bc3db7;
        }
LAB_146bc3ff4:
        bVar8 = true;
        goto LAB_146bc4099;
      }
      bVar22 = iVar9 + iVar2 == 1;
LAB_146bc3db7:
      if (bVar22) goto LAB_146bc3ff4;
    }
    bVar22 = USourceControlHelpers::CheckOutOrAddFile(param_2,false);
    if (!bVar22) {
      local_5c0.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_5c0.Pairs.ArrayNum = 0;
      local_5c0.Pairs.ArrayMax = 0;
      pFVar11 = FText::FromString(&local_420,param_2);
      local_488.Type = Text;
      FText::FText((FText *)&local_488.TextValue,pFVar11);
      if ((local_488.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
      ::FString::FString(&local_548,L"Filename");
      TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
      Emplace<FString,FFormatArgumentValue>(&local_5c0,&local_548,&local_488);
      if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_548.Data.AllocatorInstance.Data);
      }
      if (local_488.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_488.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_420.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_420.TextData.Reference + 0x10))();
      }
      ::FName::FName(&local_res18,"SourceControl");
      FMessageLog::FMessageLog(&local_2a8,&local_res18);
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          (&local_3f0,L"TranslationDataManager",L"CheckoutFailed",
                           L"Check out of file \'{Filename}\' failed.");
      pFVar12 = FTextFormat::FTextFormat(&local_b0,pFVar11,Default);
      pFVar11 = FText::Format(&local_400,pFVar12,&local_5c0);
      FMessageLog::Error(&local_2a8,&local_410,pFVar11);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_410.SharedReferenceCount.ReferenceController);
      if (local_400.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_400.TextData.Reference + 0x10))();
      }
      if (local_3f0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3f0.TextData.Reference + 0x10))();
      }
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          (&local_3e0,L"TranslationDataManager",L"TranslationArchiveCheckoutFailed",
                           L"Failed to Check Out Translation Archive!");
      FMessageLog::Notify(&local_2a8,pFVar11,Info,false);
      if (local_3e0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3e0.TextData.Reference + 0x10))();
      }
      FMessageLog::Open(&local_2a8,Error,false);
      FMessageLog::~FMessageLog(&local_2a8);
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_5c0.Pairs.AllocatorInstance.Data,
                 local_5c0.Pairs.ArrayNum);
      if ((TTuple<FString,FFormatArgumentValue> *)local_5c0.Pairs.AllocatorInstance.Data !=
          (TTuple<FString,FFormatArgumentValue> *)0x0) {
        FMemory::Free(local_5c0.Pairs.AllocatorInstance.Data);
      }
      return false;
    }
    pFVar19 = (pTVar20->AllocatorInstance).Data;
    if (((pFVar19 <= param_2) &&
        (param_2 < pFVar19 + (longlong)(this->CheckedOutFiles).ArrayMax * 0x10)) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar22)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    iVar9 = (this->CheckedOutFiles).ArrayNum;
    piVar1 = &(this->CheckedOutFiles).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar20->AllocatorInstance,piVar1);
    }
    pFVar19 = (pTVar20->AllocatorInstance).Data;
    (this->CheckedOutFiles).ArrayNum = iVar9 + 1;
    ::FString::FString((FString *)(pFVar19 + (longlong)iVar9 * 0x10),param_2);
  }
LAB_146bc4099:
  pIVar13 = IFileManager::Get();
  if ((param_2->Data).ArrayNum == 0) {
    pwVar18 = L"";
  }
  else {
    pwVar18 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  local_538 = (param_1->Data).AllocatorInstance.Data;
  iVar9 = (param_1->Data).ArrayNum;
  iStack_530 = iVar9 + -1;
  if (iVar9 == 0) {
    iStack_530 = 0;
  }
  local_3c8._12_4_ = uStack_52c;
  local_3c8.Size = iStack_530;
  local_3c8.DataPtr = (wchar_t *)local_538;
  bVar22 = FFileHelper::SaveStringToFile(&local_3c8,pwVar18,ForceUnicode,pIVar13,0);
  if (!bVar22) {
    if (bVar8) {
      bVar8 = false;
      bVar6 = USourceControlHelpers::CheckOutOrAddFile(param_2,false);
      if (!bVar6) {
        local_5b0.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5b0.Pairs.ArrayNum = 0;
        local_5b0.Pairs.ArrayMax = 0;
        pFVar11 = FText::FromString(&local_3b8,param_2);
        local_468.Type = Text;
        FText::FText((FText *)&local_468.TextValue,pFVar11);
        if ((local_468.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        ::FString::FString(&local_528,L"Filename");
        TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
        Emplace<FString,FFormatArgumentValue>(&local_5b0,&local_528,&local_468);
        if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_528.Data.AllocatorInstance.Data);
        }
        if (local_468.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_468.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        if (local_3b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_3b8.TextData.Reference + 0x10))();
        }
        ::FName::FName(&local_res20,"SourceControl");
        FMessageLog::FMessageLog(&local_278,&local_res20);
        pFVar11 = FText::AsLocalizable_Advanced_LocText
                            (&local_388,L"TranslationDataManager",L"CheckoutFailed",
                             L"Check out of file \'{Filename}\' failed.");
        pFVar12 = FTextFormat::FTextFormat(&local_50,pFVar11,Default);
        pFVar11 = FText::Format(&local_398,pFVar12,&local_5b0);
        FMessageLog::Error(&local_278,&local_3a8,pFVar11);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_3a8.SharedReferenceCount.ReferenceController);
        if (local_398.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_398.TextData.Reference + 0x10))();
        }
        if (local_388.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_388.TextData.Reference + 0x10))();
        }
        pFVar11 = FText::AsLocalizable_Advanced_LocText
                            (&local_2b8,L"TranslationDataManager",
                             L"TranslationArchiveCheckoutFailed",
                             L"Failed to Check Out Translation Archive!");
        FMessageLog::Notify(&local_278,pFVar11,Info,false);
        if (local_2b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_2b8.TextData.Reference + 0x10))();
        }
        FMessageLog::Open(&local_278,Error,false);
        pFVar19 = (this->CheckedOutFiles).AllocatorInstance.Data;
        if (((pFVar19 <= param_2) &&
            (param_2 < pFVar19 + (longlong)(this->CheckedOutFiles).ArrayMax * 0x10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        local_550.Item = param_2;
        TArray<FString,TSizedDefaultAllocator<32>_>::
        RemoveAll<_TArray<FString,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
                  (&this->CheckedOutFiles,&local_550);
        FMessageLog::~FMessageLog(&local_278);
        DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                  ((TTuple<FString,FFormatArgumentValue> *)local_5b0.Pairs.AllocatorInstance.Data,
                   local_5b0.Pairs.ArrayNum);
        if ((TTuple<FString,FFormatArgumentValue> *)local_5b0.Pairs.AllocatorInstance.Data !=
            (TTuple<FString,FFormatArgumentValue> *)0x0) {
          FMemory::Free(local_5b0.Pairs.AllocatorInstance.Data);
        }
      }
    }
    local_5d0.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_5d0.Pairs.ArrayNum = 0;
    local_5d0.Pairs.ArrayMax = 0;
    pFVar11 = FText::FromString(&local_318,param_2);
    local_448.Type = Text;
    FText::FText((FText *)&local_448.TextValue,pFVar11);
    if ((local_448.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    ::FString::FString(&local_518,L"Filename");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_5d0,&local_518,&local_448);
    if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_518.Data.AllocatorInstance.Data);
    }
    if (local_448.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_448.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_318.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_318.TextData.Reference + 0x10))();
    }
    ::FName::FName(&local_560,"TranslationEditor");
    FMessageLog::FMessageLog(&local_248,&local_560);
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_2c8,L"TranslationDataManager",L"WriteFileFailed",
                         L"Failed to write localization entries to file \'{Filename}\'.");
    pFVar12 = FTextFormat::FTextFormat(&local_a0,pFVar11,Default);
    pFVar11 = FText::Format(&local_338,pFVar12,&local_5d0);
    FMessageLog::Error(&local_248,&local_328,pFVar11);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_328.SharedReferenceCount.ReferenceController);
    if (local_338.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_338.TextData.Reference + 0x10))();
    }
    if (local_2c8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2c8.TextData.Reference + 0x10))();
    }
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_308,L"TranslationDataManager",L"FileWriteFailed",
                         L"Failed to Write Translations to File!");
    FMessageLog::Notify(&local_248,pFVar11,Info,false);
    if (local_308.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_308.TextData.Reference + 0x10))();
    }
    FMessageLog::Open(&local_248,Error,false);
    bVar6 = false;
    FMessageLog::~FMessageLog(&local_248);
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_5d0.Pairs.AllocatorInstance.Data,
               local_5d0.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_5d0.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_5d0.Pairs.AllocatorInstance.Data);
    }
  }
  if ((!bVar8) && (bVar6)) {
    local_5a0.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_5a0.Pairs.ArrayNum = 0;
    local_5a0.Pairs.ArrayMax = 0;
    pFVar11 = FText::FromString(&local_2f8,param_2);
    local_4c8.Type = Text;
    FText::FText((FText *)&local_4c8.TextValue,pFVar11);
    if ((local_4c8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar8)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    ::FString::FString(&local_508,L"Filename");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_5a0,&local_508,&local_4c8);
    if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_508.Data.AllocatorInstance.Data);
    }
    if (local_4c8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_4c8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_2f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2f8.TextData.Reference + 0x10))();
    }
    ::FName::FName(&local_558,"SourceControl");
    FMessageLog::FMessageLog(&local_80,&local_558);
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_378,L"TranslationDataManager",L"TranslationArchiveCheckedOut",
                         L"Successfully checked out and saved translation archive \'{Filename}\'. Please check-in this file later via your revision control application."
                        );
    pFVar12 = FTextFormat::FTextFormat(&local_90,pFVar11,Default);
    pFVar11 = FText::Format(&local_2d8,pFVar12,&local_5a0);
    FMessageLog::Info(&local_80,&local_2e8,pFVar11);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2e8.SharedReferenceCount.ReferenceController);
    if (local_2d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2d8.TextData.Reference + 0x10))();
    }
    if (local_378.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_378.TextData.Reference + 0x10))();
    }
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_368,L"TranslationDataManager",L"ArchiveCheckedOut",
                         L"Translation Archive Successfully Checked Out and Saved.");
    FNotificationInfo::FNotificationInfo(&local_218,pFVar11);
    if (local_368.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_368.TextData.Reference + 0x10))();
    }
    local_218.ExpireDuration = 5.0;
    local_5e8 = (undefined1  [8])0x0;
    local_5e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_5e0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5e8,
               (FWriteAccessScope *)&local_4a8);
    local_490 = &local_5e0;
    puVar14 = UE::Core::Private::DelegateAllocate(0x20,&local_5e0);
    if (puVar14 != (undefined8 *)0x0) {
      *puVar14 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar15 = FDelegateHandle::GenerateNewID();
      puVar14[2] = uVar15;
      *puVar14 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      puVar14[3] = `FTranslationDataManager::WriteJSONToTextFile'::__l34::Local::
                   OpenSourceControlMessageLog;
    }
    if (local_4a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4a8.Accessor,&local_4a8);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_218.Hyperlink,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5e8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5e8,
               (FWriteAccessScope *)&local_4e0);
    if ((local_5e0.DelegateSize != 0) &&
       (local_5e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_5e0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_5e0,0,0,0x10);
      local_5e0.DelegateSize = 0;
    }
    if (local_4e0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4e0.Accessor,&local_4e0);
    }
    if (local_5e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_5e0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_5e8);
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_358,L"TranslationDataManager",L"ShowMessageLogHyperlink",
                         L"Show Message Log");
    FText::FText(&local_590,pFVar11);
    local_580 = 1;
    local_568 = 0;
    local_578 = (undefined1  [8])0x0;
    FStack_570.Data = (FScriptContainerElement *)0x0;
    FText::operator=(&local_218.HyperlinkText.Value,&local_590);
    local_218.HyperlinkText.bIsSet = (bool)local_580;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_218.HyperlinkText.Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_578);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_578,
               (FWriteAccessScope *)&local_4f8);
    if (((int)local_568 != 0) && (FStack_570.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_570.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_570,0,0,0x10);
      local_568 = local_568 & 0xffffffff00000000;
    }
    if (local_4f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_4f8.Accessor,&local_4f8);
    }
    if (FStack_570.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_570.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_578);
    if (local_590.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_590.TextData.Reference + 0x10))();
    }
    if (local_358.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_358.TextData.Reference + 0x10))();
    }
    local_218.bFireAndForget = true;
    local_218.bUseSuccessFailIcons = true;
    pFVar16 = ::FName::FName(&local_428,L"NotificationList.SuccessImage");
    FVar3 = *pFVar16;
    pIVar17 = FAppStyle::Get();
    local_218.Image = (FSlateBrush *)(**(code **)((longlong)*pIVar17 + 0x50))(pIVar17,FVar3,0,0);
    this_00 = FSlateNotificationManager::Get();
    FSlateNotificationManager::AddNotification(this_00,&local_348,&local_218);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_348.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_218.ForWindow.SharedReferenceCount.ReferenceController);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_218.HyperlinkText.Getter);
    if (local_218.HyperlinkText.Value.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_218.HyperlinkText.Value.TextData.Reference + 0x10))();
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_218.Hyperlink);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_218.CheckBoxText.Getter);
    if (local_218.CheckBoxText.Value.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_218.CheckBoxText.Value.TextData.Reference + 0x10))();
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_218.CheckBoxStateChanged);
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_218.CheckBoxState.Getter);
    DestructItems<FNotificationButtonInfo,int>
              ((FNotificationButtonInfo *)local_218.ButtonDetails.AllocatorInstance.Data,
               local_218.ButtonDetails.ArrayNum);
    if ((FNotificationButtonInfo *)local_218.ButtonDetails.AllocatorInstance.Data !=
        (FNotificationButtonInfo *)0x0) {
      FMemory::Free(local_218.ButtonDetails.AllocatorInstance.Data);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_218.SubText.Getter);
    if (local_218.SubText.Value.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_218.SubText.Value.TextData.Reference + 0x10))();
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_218.Text.Getter);
    if (local_218.Text.Value.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_218.Text.Value.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_218.ContentWidget.SharedReferenceCount.ReferenceController);
    FMessageLog::~FMessageLog(&local_80);
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_5a0.Pairs.AllocatorInstance.Data,
               local_5a0.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_5a0.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_5a0.Pairs.AllocatorInstance.Data);
    }
  }
  return bVar6;
}

// WriteTranslationData @ 146bc4ab0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall
FTranslationDataManager::WriteTranslationData(FTranslationDataManager *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong lVar5;
  char local_res8 [8];
  TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_> local_88;
  TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_> local_78;
  TArray<UTranslationUnit_*,TSizedDefaultAllocator<32>_> local_68;
  FString local_58;
  FInternationalizationArchive *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  FInternationalizationArchive **local_38;
  char *local_30;
  TSharedRef<FInternationalizationArchive_const_,1> local_28;
  
  local_48 = (this->ArchivePtr).Object;
  if (local_48 == (FInternationalizationArchive *)0x0) {
    return false;
  }
  pTStack_40 = (this->ArchivePtr).SharedReferenceCount.ReferenceController;
  if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_48 == (FInternationalizationArchive *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_88.ArrayNum = (this->Untranslated).ArrayNum;
  lVar5 = (longlong)local_88.ArrayNum;
  local_38 = &local_48;
  pFVar1 = (this->Untranslated).AllocatorInstance.Data;
  local_30 = local_res8;
  local_res8[0] = '\0';
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_88.ArrayNum == 0) {
    local_88.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_88.ArrayNum,0,&local_88.AllocatorInstance,local_88.ArrayNum,
               &local_88.ArrayMax);
    memcpy(local_88.AllocatorInstance.Data,pFVar1,lVar5 << 3);
  }
  `FTranslationDataManager::WriteTranslationData'::__l5::<lambda_1>::operator()(&local_38,&local_88)
  ;
  local_78.ArrayNum = (this->Review).ArrayNum;
  lVar5 = (longlong)local_78.ArrayNum;
  pFVar1 = (this->Review).AllocatorInstance.Data;
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_78.ArrayNum == 0) {
    local_78.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_78.ArrayNum,0,&local_78.AllocatorInstance,local_78.ArrayNum,
               &local_78.ArrayMax);
    memcpy(local_78.AllocatorInstance.Data,pFVar1,lVar5 << 3);
  }
  `FTranslationDataManager::WriteTranslationData'::__l5::<lambda_1>::operator()(&local_38,&local_78)
  ;
  local_68.ArrayNum = (this->Complete).ArrayNum;
  lVar5 = (longlong)local_68.ArrayNum;
  pFVar1 = (this->Complete).AllocatorInstance.Data;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_68.ArrayNum == 0) {
    local_68.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_68.ArrayNum,0,&local_68.AllocatorInstance,local_68.ArrayNum,
               &local_68.ArrayMax);
    memcpy(local_68.AllocatorInstance.Data,pFVar1,lVar5 << 3);
  }
  `FTranslationDataManager::WriteTranslationData'::__l5::<lambda_1>::operator()(&local_38,&local_68)
  ;
  bVar3 = true;
  if ((param_1) || (local_res8[0] != '\0')) {
    local_28.Object = local_48;
    local_28.SharedReferenceCount.ReferenceController = pTStack_40;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    if (pTStack_40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_40->SharedReferenceCount = (atomic<int>)((int)pTStack_40->SharedReferenceCount + 1);
      UNLOCK();
    }
    FJsonInternationalizationArchiveSerializer::SerializeArchiveToString(&local_28,&local_58);
    bVar3 = WriteJSONToTextFile(this,&local_58,&this->OpenedArchiveFilePath);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  return bVar3;
}

