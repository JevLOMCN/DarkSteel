// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// FTextHistory_NamedFormat @ 1417371e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FTextHistory_NamedFormat * __thiscall
FTextHistory_NamedFormat::FTextHistory_NamedFormat
          (FTextHistory_NamedFormat *this,FString *param_1,FTextFormat *param_2,
          TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
          *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FTextHistory_Generated__6B_;
  this->_padding_ = 0;
  this->_padding_ = (longlong)(param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&this->_padding_ = (param_1->Data).ArrayNum;
  *(int *)((longlong)&this->_padding_ + 4) = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  FTextHistory::MarkDisplayStringUpToDate((FTextHistory *)this);
  this->_padding_ = (longlong)&___7FTextHistory_NamedFormat__6B_;
  (this->SourceFmt).TextFormatData.Object = (param_2->TextFormatData).Object;
  pTVar1 = (param_2->TextFormatData).SharedReferenceCount.ReferenceController;
  (this->SourceFmt).TextFormatData.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->Arguments).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Arguments).Pairs.AllocatorInstance.Data = (param_3->Pairs).AllocatorInstance.Data;
  (param_3->Pairs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Arguments).Pairs.ArrayNum = (param_3->Pairs).ArrayNum;
  (this->Arguments).Pairs.ArrayMax = (param_3->Pairs).ArrayMax;
  (param_3->Pairs).ArrayNum = 0;
  (param_3->Pairs).ArrayMax = 0;
  return this;
}

// BuildInvariantDisplayString @ 141749f50

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FString * __thiscall
FTextHistory_NamedFormat::BuildInvariantDisplayString
          (FTextHistory_NamedFormat *this,FString *__return_storage_ptr__)

{
  FTextFormatter::FormatStr(__return_storage_ptr__,&this->SourceFmt,&this->Arguments,true,true);
  return __return_storage_ptr__;
}

// BuildLocalizedDisplayString @ 14174a880

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FString * __thiscall
FTextHistory_NamedFormat::BuildLocalizedDisplayString
          (FTextHistory_NamedFormat *this,FString *__return_storage_ptr__)

{
  FTextFormatter::FormatStr(__return_storage_ptr__,&this->SourceFmt,&this->Arguments,true,false);
  return __return_storage_ptr__;
}

// GetHistoricFormatData @ 14175dcd0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FTextHistory_NamedFormat::GetHistoricFormatData
          (FTextHistory_NamedFormat *this,FText *param_1,
          TArray<FHistoricTextFormatData,TSizedDefaultAllocator<32>_> *param_2)

{
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> *pTVar1;
  FScriptContainerElement *pFVar2;
  TTuple<FString,FFormatArgumentValue> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FTextFormatData *pFVar5;
  code *pcVar6;
  bool bVar7;
  FText *pFVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  undefined1 local_res8 [8];
  ForAnyElementType local_68;
  undefined8 local_60;
  FText local_58;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> *local_48
  ;
  longlong lStack_40;
  FText local_38;
  
  pFVar8 = FTextFormat::GetSourceText(&this->SourceFmt,&local_38);
  plVar9 = (longlong *)(**(code **)((longlong)*(pFVar8->TextData).Reference + 0x48))();
  (**(code **)(*plVar9 + 0x98))(plVar9,pFVar8,param_2);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  pTVar1 = &this->Arguments;
  local_58.Flags = 0;
  lStack_40 = (ulonglong)(uint)local_58._12_4_ << 0x20;
  local_58.TextData.Reference = (ITextData *)pTVar1;
  local_48 = pTVar1;
  for (iVar11 = 0; (-1 < iVar11 && (iVar11 < (this->Arguments).Pairs.ArrayNum)); iVar11 = iVar11 + 1
      ) {
    if (iVar11 < 0) {
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
    lVar10 = (longlong)iVar11;
    pFVar2 = (pTVar1->Pairs).AllocatorInstance.Data;
    if (*(int *)(pFVar2 + lVar10 * 0x30 + 0x10) == 4) {
      if (*(longlong *)(pFVar2 + lVar10 * 0x30 + 0x20) == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      plVar9 = (longlong *)(**(code **)(**(longlong **)(pFVar2 + lVar10 * 0x30 + 0x20) + 0x48))();
      (**(code **)(*plVar9 + 0x98))(plVar9,pFVar2 + lVar10 * 0x30 + 0x20,param_2);
    }
  }
  iVar11 = (this->Arguments).Pairs.ArrayNum;
  pTVar3 = (TTuple<FString,FFormatArgumentValue> *)(pTVar1->Pairs).AllocatorInstance.Data;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = CONCAT44(local_60._4_4_,iVar11);
  if (iVar11 == 0) {
    local_60 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar11,0,&local_68,iVar11,(int *)((longlong)&local_60 + 4));
    ConstructItems<TTuple<FString,FFormatArgumentValue>,TTuple<FString,FFormatArgumentValue>,int>
              (local_68.Data,pTVar3,iVar11);
  }
  pTVar4 = (this->SourceFmt).TextFormatData.SharedReferenceCount.ReferenceController;
  pFVar5 = (this->SourceFmt).TextFormatData.Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar11 = param_2->ArrayNum;
  if (iVar11 == param_2->ArrayMax) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar11 + 1;
  local_58.TextData.Reference = (param_1->TextData).Reference;
  pFVar8 = (FText *)((param_2->AllocatorInstance).Data + (longlong)iVar11 * 0x30);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 8))
              (local_58.TextData.Reference,local_res8);
  }
  local_58.Flags = param_1->Flags;
  FText::FText(pFVar8,&local_58);
  pFVar8[1].TextData.Reference = (ITextData *)pFVar5;
  *(TReferenceControllerBase<1> **)&pFVar8[1].Flags = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar8[2].TextData.Reference = (ITextData *)0x0;
  pFVar8[2].TextData.Reference = (ITextData *)local_68.Data;
  local_68.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].Flags = (uint)local_60;
  *(undefined4 *)&pFVar8[2].field_0xc = local_60._4_4_;
  local_60 = 0;
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_68.Data,(uint)local_60);
  if ((TTuple<FString,FFormatArgumentValue> *)local_68.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return;
}

// GetType @ 141761c00

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

ETextHistoryType __thiscall FTextHistory_NamedFormat::GetType(FTextHistory_NamedFormat *this)

{
  return NamedFormat;
}

// IdenticalTo @ 141763480

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FTextHistory_NamedFormat::IdenticalTo
          (FTextHistory_NamedFormat *this,FTextHistory *param_1,ETextIdenticalModeFlags param_2)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  FFormatArgumentValue *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  bVar3 = FTextFormat::IdenticalTo(&this->SourceFmt,(FTextFormat *)&param_1[1].Mutex,param_2);
  if (bVar3) {
    iVar1 = (this->Arguments).Pairs.ArrayNum;
    if (iVar1 == *(int *)&param_1[2].Mutex) {
      pFVar6 = (this->Arguments).Pairs.AllocatorInstance.Data;
      bVar3 = true;
      pFVar7 = pFVar6 + (longlong)iVar1 * 0x30;
      while( true ) {
        if ((this->Arguments).Pairs.ArrayNum != iVar1) {
          `TCheckedPointerIterator<TTuple<FString,FFormatArgumentValue>_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar6 == pFVar7) {
          return bVar3;
        }
        pFVar5 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                 ::Find((TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                         *)&param_1[2]._padding_,(FString *)pFVar6);
        if ((pFVar5 == (FFormatArgumentValue *)0x0) ||
           (bVar4 = FFormatArgumentValue::IdenticalTo
                              ((FFormatArgumentValue *)(pFVar6 + 0x10),pFVar5,param_2), !bVar4)) {
          bVar2 = 0;
        }
        else {
          bVar2 = 1;
        }
        bVar3 = (bool)(bVar3 & bVar2);
        if (!bVar3) break;
        pFVar6 = pFVar6 + 0x30;
      }
      return bVar3;
    }
  }
  return false;
}

// ReadFromBuffer @ 1417701e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

wchar_t * __thiscall
FTextHistory_NamedFormat::ReadFromBuffer
          (FTextHistory_NamedFormat *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  int *piVar1;
  wchar_t wVar2;
  TReferenceControllerBase<1> *pTVar3;
  FTextFormatData *pFVar4;
  int iVar5;
  FText *pFVar6;
  wchar_t *pwVar7;
  TSharedRef<FTextFormatPatternDefinition_const_,1> *pTVar8;
  TTuple<FString,FFormatArgumentValue> *pTVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  ETextFormatFlags local_68 [8];
  undefined1 local_60 [8];
  TSharedRef<FTextFormatData,1> local_58;
  FText local_48;
  FFormatArgumentValue local_38;
  
  iVar5 = wcsncmp(param_1,*TextStringificationUtil::LocGenFormatNamedMarker,0x13);
  if (iVar5 == 0) {
    pwVar11 = param_1 + 0x13;
    wVar2 = param_1[0x13];
    while ((wVar2 != L'\0' && ((wVar2 == L' ' || (wVar2 == L'\t'))))) {
      pwVar7 = pwVar11 + 1;
      pwVar11 = pwVar11 + 1;
      wVar2 = *pwVar7;
    }
    if (*pwVar11 == L'(') {
      pwVar7 = pwVar11 + 1;
      if (pwVar11 == (wchar_t *)0x0) {
        pwVar7 = (wchar_t *)0x0;
      }
      if (pwVar7 != (wchar_t *)0x0) {
        pFVar6 = FText::GetEmpty();
        local_58.Object = (FTextFormatData *)(pFVar6->TextData).Reference;
        if (local_58.Object != (FTextFormatData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_58.Object + 8))(local_58.Object,local_60);
        }
        wVar2 = *pwVar7;
        pwVar11 = (wchar_t *)0x0;
        local_58.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)
             ((ulonglong)local_58.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
        while ((wVar2 != L'\0' && ((wVar2 == L' ' || (wVar2 == L'\t'))))) {
          pwVar10 = pwVar7 + 1;
          pwVar7 = pwVar7 + 1;
          wVar2 = *pwVar10;
        }
        pwVar7 = FTextStringHelper::ReadFromBuffer
                           (pwVar7,(FText *)&local_58,(wchar_t *)0x0,(wchar_t *)0x0,true);
        pFVar4 = local_58.Object;
        if (pwVar7 != (wchar_t *)0x0) {
          local_68[0] = Default;
          pTVar8 = FTextFormatPatternDefinition::GetDefault
                             ((TSharedRef<FTextFormatPatternDefinition_const_,1> *)&local_38);
          local_48.TextData.Reference = (ITextData *)pFVar4;
          if (pFVar4 != (FTextFormatData *)0x0) {
            (**(code **)((longlong)*(ITextData *)pFVar4 + 8))(pFVar4,local_60);
          }
          local_48.Flags = (uint)local_58.SharedReferenceCount.ReferenceController;
          MakeShared<FTextFormatData,1,FText,enum_ETextFormatFlags_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_>
                    (&local_58,&local_48,local_68,pTVar8);
          if ((FTextFormatData *)local_48.TextData.Reference != (FTextFormatData *)0x0) {
            (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_38.field1_0x8);
          pTVar3 = (this->SourceFmt).TextFormatData.SharedReferenceCount.ReferenceController;
          (this->SourceFmt).TextFormatData.Object = local_58.Object;
          (this->SourceFmt).TextFormatData.SharedReferenceCount.ReferenceController =
               local_58.SharedReferenceCount.ReferenceController;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
          piVar1 = &(this->Arguments).Pairs.ArrayMax;
          pTVar9 = (TTuple<FString,FFormatArgumentValue> *)
                   (this->Arguments).Pairs.AllocatorInstance.Data;
          iVar5 = (this->Arguments).Pairs.ArrayNum;
          if (*piVar1 < 0) {
            DestructItems<TTuple<FString,FFormatArgumentValue>,int>(pTVar9,iVar5);
            (this->Arguments).Pairs.ArrayNum = 0;
            if (*piVar1 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x30,8,0,(ForAnyElementType *)&this->Arguments,0,piVar1);
            }
          }
          else {
            DestructItems<TTuple<FString,FFormatArgumentValue>,int>(pTVar9,iVar5);
            (this->Arguments).Pairs.ArrayNum = 0;
          }
          while( true ) {
            wVar2 = *pwVar7;
            while ((wVar2 != L'\0' && ((wVar2 == L' ' || (wVar2 == L'\t'))))) {
              pwVar10 = pwVar7 + 1;
              pwVar7 = pwVar7 + 1;
              wVar2 = *pwVar10;
            }
            wVar2 = *pwVar7;
            if (wVar2 != L',') goto joined_r0x0001417704f3;
            pwVar7 = pwVar7 + 1;
            local_58.Object = (FTextFormatData *)0x0;
            local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            wVar2 = *pwVar7;
            while ((wVar2 != L'\0' && ((wVar2 == L' ' || (wVar2 == L'\t'))))) {
              pwVar10 = pwVar7 + 1;
              pwVar7 = pwVar7 + 1;
              wVar2 = *pwVar10;
            }
            pwVar7 = TextStringificationUtil::ReadQuotedStringFromBuffer
                               (pwVar7,(FString *)&local_58);
            if (pwVar7 == (wchar_t *)0x0) break;
            wVar2 = *pwVar7;
            while ((wVar2 != L'\0' && ((wVar2 == L' ' || (wVar2 == L'\t'))))) {
              pwVar10 = pwVar7 + 1;
              pwVar7 = pwVar7 + 1;
              wVar2 = *pwVar10;
            }
            if (*pwVar7 != L',') break;
            pwVar10 = pwVar7 + 1;
            if (pwVar7 == (wchar_t *)0x0) {
              pwVar10 = (wchar_t *)0x0;
            }
            if (pwVar10 == (wchar_t *)0x0) break;
            pTVar9 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                     ::AllocateMemoryForEmplace<FString_&>(&this->Arguments,(FString *)&local_58);
            local_38.Type = Text;
            pFVar6 = FText::GetEmpty();
            TOptional<FText>::TOptional<FText>(&local_38.TextValue,pFVar6);
            TTuple<FString,FFormatArgumentValue>::
            TTuple<FString,FFormatArgumentValue><FString,FFormatArgumentValue>
                      (pTVar9,(FString *)&local_58,&local_38);
            if (local_38.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)
                           *(ITextData *)local_38.TextValue.field0_0x0.TypedValue.TextData.Reference
                          + 0x10))();
            }
            wVar2 = *pwVar10;
            while ((wVar2 != L'\0' && ((wVar2 == L' ' || (wVar2 == L'\t'))))) {
              pwVar7 = pwVar10 + 1;
              pwVar10 = pwVar10 + 1;
              wVar2 = *pwVar7;
            }
            pwVar7 = FFormatArgumentValue::FromExportedString
                               ((FFormatArgumentValue *)&pTVar9->field_0x10,pwVar10);
            if (pwVar7 == (wchar_t *)0x0) break;
            if (local_58.Object != (FTextFormatData *)0x0) {
              FMemory::Free(local_58.Object);
            }
          }
          if (local_58.Object != (FTextFormatData *)0x0) {
            FMemory::Free(local_58.Object);
          }
        }
        goto LAB_141770534;
      }
    }
  }
  return (wchar_t *)0x0;
joined_r0x0001417704f3:
  while ((wVar2 != L'\0' && ((wVar2 == L' ' || (wVar2 == L'\t'))))) {
    pwVar11 = pwVar7 + 1;
    pwVar7 = pwVar7 + 1;
    wVar2 = *pwVar11;
  }
  pwVar11 = (wchar_t *)0x0;
  if ((pwVar7 == (wchar_t *)0x0) || (*pwVar7 == L')')) {
    pwVar10 = pwVar7 + 1;
    if (pwVar7 == (wchar_t *)0x0) {
      pwVar10 = (wchar_t *)0x0;
    }
    if (pwVar10 != (wchar_t *)0x0) {
      FTextHistory::MarkDisplayStringOutOfDate((FTextHistory *)this);
      pwVar11 = pwVar10;
    }
  }
LAB_141770534:
  if (pFVar4 != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)pFVar4 + 0x10))(pFVar4);
  }
  return pwVar11;
}

// Serialize @ 14177b3d0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FTextHistory_NamedFormat::Serialize(FTextHistory_NamedFormat *this,FStructuredArchiveRecord param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FArchive *pFVar2;
  FText *pFVar3;
  TSharedRef<FTextFormatPatternDefinition_const_,1> *pTVar4;
  TRefCountPtr<ITextData> TVar5;
  FSlotBase local_res8;
  FSlotBase local_res10;
  undefined1 local_res18 [16];
  ITextData *local_58;
  uint local_50;
  FText local_48;
  TSharedRef<FTextFormatPatternDefinition_const_,1> local_38;
  TSharedRef<FTextFormatData,1> local_28;
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  if ((pFVar2->field_0x28 & 1) != 0) {
    FTextHistory::MarkDisplayStringOutOfDate((FTextHistory *)this);
  }
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  if ((pFVar2->field_0x28 & 4) == 0) {
    if ((pFVar2->field_0x28 & 1) == 0) goto LAB_14177b507;
    pFVar3 = FText::GetEmpty();
    local_58 = (pFVar3->TextData).Reference;
    if (local_58 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58 + 8))(local_58,&local_res8);
    }
    local_50 = 0;
    pFVar2 = (local_res10.StructuredArchive)->Formatter->Inner;
    (**(code **)(*(longlong *)pFVar2 + 0x170))(pFVar2,&local_58);
    local_res8.StructuredArchive._0_1_ = 1;
    pTVar4 = FTextFormatPatternDefinition::GetDefault(&local_38);
    local_48.TextData.Reference = local_58;
    if (local_58 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58 + 8))(local_58,local_res18);
    }
    local_48.Flags = local_50;
    MakeShared<FTextFormatData,1,FText,enum_ETextFormatFlags_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_>
              (&local_28,&local_48,(ETextFormatFlags *)&local_res8,pTVar4);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    pTVar1 = (this->SourceFmt).TextFormatData.SharedReferenceCount.ReferenceController;
    (this->SourceFmt).TextFormatData.Object = local_28.Object;
    (this->SourceFmt).TextFormatData.SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    TVar5.Reference = local_58;
  }
  else {
    FTextFormat::GetSourceText(&this->SourceFmt,&local_48);
    pFVar2 = (local_res10.StructuredArchive)->Formatter->Inner;
    (**(code **)(*(longlong *)pFVar2 + 0x170))(pFVar2,&local_48);
    TVar5.Reference = local_48.TextData.Reference;
  }
  if (TVar5.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar5.Reference + 0x10))();
  }
LAB_14177b507:
  local_res8.StructuredArchive = local_res10.StructuredArchive;
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  TArrayPrivateFriend::Serialize<TTuple<FString,FFormatArgumentValue>,TSizedDefaultAllocator<32>_>
            (pFVar2,&(this->Arguments).Pairs);
  if ((pFVar2->field_0x28 & 1) != 0) {
    AlgoImpl::
    IntroSortInternal<TTuple<FString,FFormatArgumentValue>,int,TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
              ((TTuple<FString,FFormatArgumentValue> *)
               (this->Arguments).Pairs.AllocatorInstance.Data,(this->Arguments).Pairs.ArrayNum,
               local_res10.StructuredArchive._0_1_,
               (FLocKeySortedMapLess)local_res10.StructuredArchive._0_1_);
  }
  return;
}

// ShouldReadFromBuffer @ 14177e110

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FTextHistory_NamedFormat::ShouldReadFromBuffer(FTextHistory_NamedFormat *this,wchar_t *param_1)

{
  int iVar1;
  
  iVar1 = wcsncmp(param_1,*TextStringificationUtil::LocGenFormatNamedMarker,0x13);
  return iVar1 == 0;
}

// StaticShouldReadFromBuffer @ 14177eb80

bool __cdecl FTextHistory_NamedFormat::StaticShouldReadFromBuffer(wchar_t *param_1)

{
  int iVar1;
  
  iVar1 = wcsncmp(param_1,*TextStringificationUtil::LocGenFormatNamedMarker,0x13);
  return iVar1 == 0;
}

// WriteToBuffer @ 141785480

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FTextHistory_NamedFormat::WriteToBuffer
          (FTextHistory_NamedFormat *this,FString *param_1,bool param_2)

{
  FTextHistory_NamedFormat *local_res8;
  code *local_28;
  FTextHistory_NamedFormat **local_20;
  FString local_18;
  
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`FTextHistory_NamedFormat::WriteToBuffer'::__l2::<lambda_1>,void,TFunctionRef<void___cdecl(FString_const_*,FFormatArgumentValue_const_&)>_>
             ::Call;
  local_res8 = this;
  ::FString::FString(&local_18,*TextStringificationUtil::LocGenFormatNamedMarker);
  TextStringificationUtil::WriteTextFormatToBuffer
            (param_1,&local_18,&this->SourceFmt,param_2,
             (TFunctionRef<void___cdecl(TFunctionRef<void___cdecl(FString_const_*,FFormatArgumentValue_const_&)>)>
              *)&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

