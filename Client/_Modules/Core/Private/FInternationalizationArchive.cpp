// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// AddEntry @ 1416df0f0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall
FInternationalizationArchive::AddEntry
          (FInternationalizationArchive *this,TSharedRef<FArchiveEntry,1> *param_1)

{
  FArchiveEntry *pFVar1;
  bool bVar2;
  TSharedPtr<FLocMetadataObject,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = (pFVar1->KeyMetadataObj).Object;
  bVar2 = pFVar1->bIsOptional;
  local_18.SharedReferenceCount.ReferenceController =
       (pFVar1->KeyMetadataObj).SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar1 = param_1->Object;
  bVar2 = AddEntry(this,&pFVar1->Namespace,&pFVar1->Key,&pFVar1->Source,&pFVar1->Translation,
                   &local_18,bVar2);
  return bVar2;
}

// AddEntry @ 1416df150

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall
FInternationalizationArchive::AddEntry
          (FInternationalizationArchive *this,FLocKey *param_1,FLocKey *param_2,FLocItem *param_3,
          FLocItem *param_4,TSharedPtr<FLocMetadataObject,1> *param_5,bool param_6)

{
  code *pcVar1;
  FArchiveEntry *pFVar2;
  bool bVar3;
  undefined1 uVar4;
  FArchiveEntry *this_00;
  TPairInitializer<FString_const_&,TSharedRef<FArchiveEntry,1>_const_&> local_res18;
  TSharedPtr<FArchiveEntry,1> local_d8;
  TSharedRef<FArchiveEntry,1> local_c8;
  TSharedRef<FArchiveEntry,1> local_b8;
  undefined1 local_a8 [8];
  TPairInitializer<FLocKey_const_&,TSharedRef<FArchiveEntry,1>_const_&> local_a0;
  TSharedPtr<FLocMetadataObject,1> local_90;
  TSharedPtr<FLocMetadataObject,1> local_80;
  FLocItem *local_70;
  TSharedRef<FArchiveEntry,1> *local_68;
  FLocKey *local_60;
  TSharedRef<FArchiveEntry,1> *local_58;
  FLocItem *local_50;
  TSharedRef<FArchiveEntry,1> *local_48;
  FLocKey *local_40;
  TSharedRef<FArchiveEntry,1> *local_38;
  
  if ((param_2->Str).Data.ArrayNum < 2) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_5->SharedReferenceCount).ReferenceController);
    bVar3 = false;
  }
  else {
    local_90.Object = param_5->Object;
    local_90.SharedReferenceCount.ReferenceController =
         (param_5->SharedReferenceCount).ReferenceController;
    if (local_90.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FindEntryByKey(this,&local_d8,param_1,param_2,&local_90);
    pFVar2 = local_d8.Object;
    if (local_d8.Object != (FArchiveEntry *)0x0) {
      if ((local_d8.Object == (FArchiveEntry *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      bVar3 = FLocItem::operator==(&pFVar2->Source,param_3);
      if (bVar3) {
        if ((pFVar2 == (FArchiveEntry *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        bVar3 = FLocItem::operator==(&pFVar2->Translation,param_4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_5->SharedReferenceCount).ReferenceController);
        return bVar3;
      }
    }
    this_00 = ::operator_new(0x88);
    local_a0.Value = (TSharedRef<FArchiveEntry,1> *)0x0;
    if (this_00 != (FArchiveEntry *)0x0) {
      local_80.Object = param_5->Object;
      local_80.SharedReferenceCount.ReferenceController =
           (param_5->SharedReferenceCount).ReferenceController;
      if (local_80.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_a0.Value =
           (TSharedRef<FArchiveEntry,1> *)
           FArchiveEntry::FArchiveEntry(this_00,param_1,param_2,param_3,param_4,&local_80,param_6);
    }
    TSharedRef<FArchiveEntry,1>::TSharedRef<FArchiveEntry,1><FArchiveEntry>
              (&local_c8,(TRawPtrProxy<FArchiveEntry> *)&local_a0.Value);
    if (pFVar2 == (FArchiveEntry *)0x0) {
      local_48 = &local_c8;
      local_50 = param_3;
      TSet<TTuple<FString,TSharedRef<FArchiveEntry,1>_>,FLocKeyMultiMapFuncs<TSharedRef<FArchiveEntry,1>_>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,TSharedRef<FArchiveEntry,1>_const_&>_>
                ((TSet<TTuple<FString,TSharedRef<FArchiveEntry,1>_>,FLocKeyMultiMapFuncs<TSharedRef<FArchiveEntry,1>_>,FDefaultSetAllocator>
                  *)&this->EntriesBySourceText,
                 (TPairInitializer<FString_const_&,TSharedRef<FArchiveEntry,1>_const_&> *)
                 (local_a8 + 4),(bool *)&local_50);
      local_38 = &local_c8;
      local_40 = param_2;
      TSet<TTuple<FLocKey,TSharedRef<FArchiveEntry,1>_>,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FArchiveEntry,1>,1>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FLocKey_const_&,TSharedRef<FArchiveEntry,1>_const_&>_>
                ((TSet<TTuple<FLocKey,TSharedRef<FArchiveEntry,1>_>,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FArchiveEntry,1>,1>,FDefaultSetAllocator>
                  *)&this->EntriesByKey,&local_a0,(bool *)&local_40);
    }
    else {
      if ((pFVar2 == (FArchiveEntry *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      local_b8.Object = local_d8.Object;
      local_b8.SharedReferenceCount.ReferenceController =
           local_d8.SharedReferenceCount.ReferenceController;
      if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar2 == (FArchiveEntry *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      pFVar2 = local_b8.Object;
      TMultiMap<FString,TSharedRef<FArchiveEntry,1>,FDefaultSetAllocator,FLocKeyMultiMapFuncs<TSharedRef<FArchiveEntry,1>_>_>
      ::RemoveSingle(&this->EntriesBySourceText,&((local_b8.Object)->Source).Text,&local_b8);
      local_70 = &(local_c8.Object)->Source;
      local_68 = &local_c8;
      TSet<TTuple<FString,TSharedRef<FArchiveEntry,1>_>,FLocKeyMultiMapFuncs<TSharedRef<FArchiveEntry,1>_>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,TSharedRef<FArchiveEntry,1>_const_&>_>
                ((TSet<TTuple<FString,TSharedRef<FArchiveEntry,1>_>,FLocKeyMultiMapFuncs<TSharedRef<FArchiveEntry,1>_>,FDefaultSetAllocator>
                  *)&this->EntriesBySourceText,&local_res18,(bool *)&local_70);
      TMultiMap<FLocKey,TSharedRef<FArchiveEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FArchiveEntry,1>,1>_>
      ::RemoveSingle(&this->EntriesByKey,&pFVar2->Key,&local_b8);
      local_60 = &(local_c8.Object)->Key;
      local_58 = &local_c8;
      TSet<TTuple<FLocKey,TSharedRef<FArchiveEntry,1>_>,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FArchiveEntry,1>,1>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FLocKey_const_&,TSharedRef<FArchiveEntry,1>_const_&>_>
                ((TSet<TTuple<FLocKey,TSharedRef<FArchiveEntry,1>_>,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FArchiveEntry,1>,1>,FDefaultSetAllocator>
                  *)&this->EntriesByKey,
                 (TPairInitializer<FLocKey_const_&,TSharedRef<FArchiveEntry,1>_const_&> *)local_a8,
                 (bool *)&local_60);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_5->SharedReferenceCount).ReferenceController);
    bVar3 = true;
  }
  return bVar3;
}

// FindEntryByKey @ 1416eea80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

TSharedPtr<FArchiveEntry,1> * __thiscall
FInternationalizationArchive::FindEntryByKey
          (FInternationalizationArchive *this,TSharedPtr<FArchiveEntry,1> *__return_storage_ptr__,
          FLocKey *param_1,FLocKey *param_2,TSharedPtr<FLocMetadataObject,1> *param_3)

{
  FArchiveEntry *pFVar1;
  FLocMetadataObject *pFVar2;
  FLocMetadataObject *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  TSharedPtr<FArchiveEntry,1> *pTVar9;
  wchar_t *_Str1;
  wchar_t *_Str2;
  ForElementType<TSharedRef<FArchiveEntry,1>_> FVar10;
  ForElementType<TSharedRef<FArchiveEntry,1>_> FVar11;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  TArray<TSharedRef<FArchiveEntry,1>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_90;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_90.ArrayMax = 4;
  local_90.AllocatorInstance.SecondaryData = (ForElementType<TSharedRef<FArchiveEntry,1>_>)0x0;
  local_90.ArrayNum = 0;
  TMultiMap<FLocKey,TSharedRef<FArchiveEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FArchiveEntry,1>,1>_>
  ::MultiFind<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
            (&this->EntriesByKey,param_2,&local_90,false);
  iVar6 = local_90.ArrayNum;
  FVar10 = (ForElementType<TSharedRef<FArchiveEntry,1>_>)&local_90;
  if (local_90.AllocatorInstance.SecondaryData != (ForElementType<TSharedRef<FArchiveEntry,1>_>)0x0)
  {
    FVar10 = local_90.AllocatorInstance.SecondaryData;
  }
  FVar11 = (ForElementType<TSharedRef<FArchiveEntry,1>_>)
           ((longlong)local_90.ArrayNum * 0x10 + (longlong)FVar10);
  do {
    if (local_90.ArrayNum != iVar6) {
      local_98[0] = 0;
      `TCheckedPointerIterator<TSharedRef<FArchiveEntry,1>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_98);
    }
    if (FVar10 == FVar11) {
      __return_storage_ptr__->Object = (FArchiveEntry *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      goto LAB_1416eec47;
    }
    pFVar1 = *(FArchiveEntry **)FVar10;
    if ((pFVar1->Namespace).Hash == param_1->Hash) {
      if ((param_1->Str).Data.ArrayNum == 0) {
        _Str2 = L"";
      }
      else {
        _Str2 = (wchar_t *)(param_1->Str).Data.AllocatorInstance.Data;
      }
      if ((pFVar1->Namespace).Str.Data.ArrayNum == 0) {
        _Str1 = L"";
      }
      else {
        _Str1 = (wchar_t *)(pFVar1->Namespace).Str.Data.AllocatorInstance.Data;
      }
      iVar8 = wcscmp(_Str1,_Str2);
      if (iVar8 == 0) {
        pFVar2 = (pFVar1->KeyMetadataObj).Object;
        if ((pFVar2 == (FLocMetadataObject *)0x0) && (param_3->Object == (FLocMetadataObject *)0x0))
        {
LAB_1416eeba3:
          __return_storage_ptr__->Object = pFVar1;
LAB_1416eeba6:
          pTVar4 = ((FSharedReferencer<1> *)((longlong)FVar10 + 8))->ReferenceController;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
          if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
            UNLOCK();
          }
LAB_1416eec47:
          FVar10 = (ForElementType<TSharedRef<FArchiveEntry,1>_>)&local_90;
          if (local_90.AllocatorInstance.SecondaryData !=
              (ForElementType<TSharedRef<FArchiveEntry,1>_>)0x0) {
            FVar10 = local_90.AllocatorInstance.SecondaryData;
          }
          DestructItems<TSharedRef<FArchiveEntry,1>,int>
                    ((TSharedRef<FArchiveEntry,1> *)FVar10,local_90.ArrayNum);
          if (local_90.AllocatorInstance.SecondaryData !=
              (ForElementType<TSharedRef<FArchiveEntry,1>_>)0x0) {
            FMemory::Free((void *)local_90.AllocatorInstance.SecondaryData);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((param_3->SharedReferenceCount).ReferenceController);
          return __return_storage_ptr__;
        }
        pFVar3 = param_3->Object;
        if ((pFVar3 != (FLocMetadataObject *)0x0) == (pFVar2 != (FLocMetadataObject *)0x0)) {
          if ((pFVar2 == (FLocMetadataObject *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TSharedPtr<FArchiveEntry,1> *)(*pcVar5)();
            return pTVar9;
          }
          pFVar2 = (pFVar1->KeyMetadataObj).Object;
          if ((param_3->Object == (FLocMetadataObject *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar7)) {
            pcVar5 = (code *)swi(3);
            pTVar9 = (TSharedPtr<FArchiveEntry,1> *)(*pcVar5)();
            return pTVar9;
          }
          bVar7 = FLocMetadataObject::operator==(pFVar2,param_3->Object);
          if (bVar7) {
            __return_storage_ptr__->Object = *(FArchiveEntry **)FVar10;
            goto LAB_1416eeba6;
          }
        }
        else if (((pFVar3 != (FLocMetadataObject *)0x0) &&
                 (*(int *)&(pFVar3->Values).field_0x8 == *(int *)&(pFVar3->Values).field_0x34)) ||
                ((pFVar2 != (FLocMetadataObject *)0x0 &&
                 (*(int *)&(pFVar2->Values).field_0x8 == *(int *)&(pFVar2->Values).field_0x34))))
        goto LAB_1416eeba3;
      }
    }
    FVar10 = (ForElementType<TSharedRef<FArchiveEntry,1>_>)((longlong)FVar10 + 0x10);
  } while( true );
}

// SetTranslation @ 141712460

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __thiscall
FInternationalizationArchive::SetTranslation
          (FInternationalizationArchive *this,FLocKey *param_1,FLocKey *param_2,FLocItem *param_3,
          FLocItem *param_4,TSharedPtr<FLocMetadataObject,1> *param_5)

{
  code *pcVar1;
  TSharedPtr<FLocMetadataObject,1> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  FArchiveEntry *this_00;
  TSharedRef<FArchiveEntry,1> *pTVar5;
  FLocMetadataObject *this_01;
  FLocMetadataObject *pFVar6;
  TSharedPtr<FLocMetadataObject,1> *this_02;
  TRawPtrProxy<FLocMetadataObject> local_98;
  TSharedPtr<FArchiveEntry,1> local_90;
  TSharedPtr<FLocMetadataObject,1> local_80;
  TSharedPtr<FLocMetadataObject,1> local_70;
  TSharedPtr<FLocMetadataObject,1> local_60;
  TSharedRef<FArchiveEntry,1> local_50;
  TSharedRef<FArchiveEntry,1> local_40;
  
  pTVar2 = param_5;
  local_70.Object = param_5->Object;
  local_70.SharedReferenceCount.ReferenceController =
       (param_5->SharedReferenceCount).ReferenceController;
  if (local_70.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_70.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FindEntryByKey(this,&local_90,param_1,param_2,&local_70);
  if (local_90.Object == (FArchiveEntry *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_90.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar2->SharedReferenceCount).ReferenceController);
    bVar3 = false;
  }
  else {
    if (local_90.Object == (FArchiveEntry *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    bVar3 = FLocItem::operator==(&(local_90.Object)->Source,param_3);
    if (bVar3) {
      if (local_90.Object == (FArchiveEntry *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
      }
      if (&(local_90.Object)->Translation != param_4) {
        ::FString::operator=(&((local_90.Object)->Translation).Text,&param_4->Text);
        this_02 = &((local_90.Object)->Translation).MetadataObj;
        pFVar6 = (FLocMetadataObject *)0x0;
        local_80.Object = (FLocMetadataObject *)0x0;
        local_80.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (this_02 != &local_80) {
          this_02->Object = (FLocMetadataObject *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&((local_90.Object)->Translation).MetadataObj.SharedReferenceCount,
                     &local_80.SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_80.SharedReferenceCount.ReferenceController);
        if ((param_4->MetadataObj).Object != (FLocMetadataObject *)0x0) {
          this_01 = ::operator_new(0x50);
          if (this_01 != (FLocMetadataObject *)0x0) {
            if ((param_4->MetadataObj).Object == (FLocMetadataObject *)0x0) {
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L"");
              if (bVar3) {
                pcVar1 = (code *)swi(3);
                uVar4 = (*pcVar1)();
                return (bool)uVar4;
              }
            }
            pFVar6 = FLocMetadataObject::FLocMetadataObject(this_01,(param_4->MetadataObj).Object);
          }
          local_98.Object = pFVar6;
          TSharedPtr<FLocMetadataObject,1>::operator=<FLocMetadataObject>(this_02,&local_98);
        }
      }
    }
    else {
      this_00 = ::operator_new(0x88);
      if (this_00 == (FArchiveEntry *)0x0) {
        param_5 = (TSharedPtr<FLocMetadataObject,1> *)0x0;
      }
      else {
        if (local_90.Object == (FArchiveEntry *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return (bool)uVar4;
          }
        }
        local_60.Object = pTVar2->Object;
        bVar3 = (local_90.Object)->bIsOptional;
        local_60.SharedReferenceCount.ReferenceController =
             (pTVar2->SharedReferenceCount).ReferenceController;
        if (local_60.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_60.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_60.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        param_5 = (TSharedPtr<FLocMetadataObject,1> *)
                  FArchiveEntry::FArchiveEntry
                            (this_00,param_1,param_2,param_3,param_4,&local_60,bVar3);
      }
      TSharedRef<FArchiveEntry,1>::TSharedRef<FArchiveEntry,1><FArchiveEntry>
                (&local_50,(TRawPtrProxy<FArchiveEntry> *)&param_5);
      pTVar5 = TSharedPtr<FArchiveEntry,1>::ToSharedRef(&local_90,&local_40);
      UpdateEntry(this,pTVar5,&local_50);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_40.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_50.SharedReferenceCount.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_90.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar2->SharedReferenceCount).ReferenceController);
    bVar3 = true;
  }
  return bVar3;
}

// UpdateEntry @ 141719bb0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __thiscall
FInternationalizationArchive::UpdateEntry
          (FInternationalizationArchive *this,TSharedRef<FArchiveEntry,1> *param_1,
          TSharedRef<FArchiveEntry,1> *param_2)

{
  FLocItem *local_18;
  TSharedRef<FArchiveEntry,1> *local_10;
  
  TMultiMap<FString,TSharedRef<FArchiveEntry,1>,FDefaultSetAllocator,FLocKeyMultiMapFuncs<TSharedRef<FArchiveEntry,1>_>_>
  ::RemoveSingle(&this->EntriesBySourceText,&(param_1->Object->Source).Text,param_1);
  local_18 = &param_2->Object->Source;
  local_10 = param_2;
  TSet<TTuple<FString,TSharedRef<FArchiveEntry,1>_>,FLocKeyMultiMapFuncs<TSharedRef<FArchiveEntry,1>_>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,TSharedRef<FArchiveEntry,1>_const_&>_>
            ((TSet<TTuple<FString,TSharedRef<FArchiveEntry,1>_>,FLocKeyMultiMapFuncs<TSharedRef<FArchiveEntry,1>_>,FDefaultSetAllocator>
              *)&this->EntriesBySourceText,
             (TPairInitializer<FString_const_&,TSharedRef<FArchiveEntry,1>_const_&> *)
             &stack0x00000008,(bool *)&local_18);
  TMultiMap<FLocKey,TSharedRef<FArchiveEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FArchiveEntry,1>,1>_>
  ::RemoveSingle(&this->EntriesByKey,&param_1->Object->Key,param_1);
  local_18 = (FLocItem *)&param_2->Object->Key;
  local_10 = param_2;
  TSet<TTuple<FLocKey,TSharedRef<FArchiveEntry,1>_>,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FArchiveEntry,1>,1>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FLocKey_const_&,TSharedRef<FArchiveEntry,1>_const_&>_>
            ((TSet<TTuple<FLocKey,TSharedRef<FArchiveEntry,1>_>,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FArchiveEntry,1>,1>,FDefaultSetAllocator>
              *)&this->EntriesByKey,
             (TPairInitializer<FLocKey_const_&,TSharedRef<FArchiveEntry,1>_const_&> *)
             &stack0x00000008,(bool *)&local_18);
  return;
}

// FInternationalizationArchive @ 141be4320

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

FInternationalizationArchive * __thiscall
FInternationalizationArchive::FInternationalizationArchive(FInternationalizationArchive *this)

{
  this->FormatVersion = AddedKeys;
  *(undefined8 *)&this->EntriesBySourceText = 0;
  *(undefined8 *)&(this->EntriesBySourceText).field_0x8 = 0;
  *(undefined8 *)&(this->EntriesBySourceText).field_0x20 = 0;
  *(undefined4 *)&(this->EntriesBySourceText).field_0x28 = 0;
  *(undefined4 *)&(this->EntriesBySourceText).field_0x2c = 0x80;
  *(undefined4 *)&(this->EntriesBySourceText).field_0x34 = 0;
  *(undefined4 *)&(this->EntriesBySourceText).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EntriesBySourceText).field_0x40 = 0;
  *(undefined4 *)&(this->EntriesBySourceText).field_0x48 = 0;
  *(undefined8 *)&this->EntriesByKey = 0;
  *(undefined8 *)&(this->EntriesByKey).field_0x8 = 0;
  *(undefined8 *)&(this->EntriesByKey).field_0x20 = 0;
  *(undefined4 *)&(this->EntriesByKey).field_0x28 = 0;
  *(undefined4 *)&(this->EntriesByKey).field_0x2c = 0x80;
  *(undefined4 *)&(this->EntriesByKey).field_0x34 = 0;
  *(undefined4 *)&(this->EntriesByKey).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EntriesByKey).field_0x40 = 0;
  *(undefined4 *)&(this->EntriesByKey).field_0x48 = 0;
  return this;
}

// ~FInternationalizationArchive @ 141becca0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __thiscall
FInternationalizationArchive::~FInternationalizationArchive(FInternationalizationArchive *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->EntriesByKey).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EntriesByKey).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EntriesByKey);
  *(undefined4 *)&(this->EntriesBySourceText).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EntriesBySourceText).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EntriesBySourceText);
  return;
}

// GetEntriesBySourceTextIterator @ 141c01810

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

TConstIterator * __thiscall
FInternationalizationArchive::GetEntriesBySourceTextIterator
          (FInternationalizationArchive *this,TConstIterator *__return_storage_ptr__)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(this->EntriesBySourceText).field_0x28;
  puVar1 = &(this->EntriesBySourceText).field_0x10;
  iVar7 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(this->EntriesBySourceText).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar7;
      iVar9 = iVar9 + 0x20;
      iVar7 = iVar7 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar7) goto LAB_141c018a6;
      uVar4 = puVar10[lVar8 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar6 = (int)lVar8 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_141c018a6:
  *(TMultiMap<FString,TSharedRef<FArchiveEntry,1>,FDefaultSetAllocator,FLocKeyMultiMapFuncs<TSharedRef<FArchiveEntry,1>_>_>
    **)__return_storage_ptr__ = &this->EntriesBySourceText;
  *(ulonglong *)&__return_storage_ptr__->field_0x8 = CONCAT44(uVar5,iVar7);
  *(undefined1 **)&__return_storage_ptr__->field_0x10 = puVar1;
  *(ulonglong *)&__return_storage_ptr__->field_0x18 = CONCAT44(iVar6,0xffffffff);
  *(ulonglong *)&__return_storage_ptr__->field_0x20 = CONCAT44(iVar6,iVar9);
  return __return_storage_ptr__;
}

