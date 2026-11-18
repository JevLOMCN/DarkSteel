// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// FTextHistory_OrderedFormat @ 1417372a0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FTextHistory_OrderedFormat * __thiscall
FTextHistory_OrderedFormat::FTextHistory_OrderedFormat
          (FTextHistory_OrderedFormat *this,FString *param_1,FTextFormat *param_2,
          TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> *param_3)

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
  this->_padding_ = (longlong)&___7FTextHistory_OrderedFormat__6B_;
  (this->SourceFmt).TextFormatData.Object = (param_2->TextFormatData).Object;
  pTVar1 = (param_2->TextFormatData).SharedReferenceCount.ReferenceController;
  (this->SourceFmt).TextFormatData.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (this->Arguments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Arguments).AllocatorInstance.Data = (param_3->AllocatorInstance).Data;
  (param_3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Arguments).ArrayNum = param_3->ArrayNum;
  (this->Arguments).ArrayMax = param_3->ArrayMax;
  param_3->ArrayNum = 0;
  param_3->ArrayMax = 0;
  return this;
}

// operator() @ 14173e850

void __thiscall
`FTextHistory_OrderedFormat::WriteToBuffer'::__l2::<lambda_1>::operator()
          (void *this,
          TFunctionRef<void___cdecl(FString_const_*,FFormatArgumentValue_const_&)> *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res8;
  
  lVar2 = *(longlong *)this;
  iVar1 = *(int *)(lVar2 + 0x40);
  lVar3 = *(longlong *)(lVar2 + 0x38);
  lVar4 = (longlong)iVar1 * 0x20 + lVar3;
  while( true ) {
    if (*(int *)(lVar2 + 0x40) != iVar1) {
      `TCheckedPointerIterator<FFormatArgumentValue_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (lVar3 == lVar4) break;
    local_res8 = 0;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res8,lVar3);
    lVar3 = lVar3 + 0x20;
  }
  return;
}

// BuildInvariantDisplayString @ 141749f80

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FString * __thiscall
FTextHistory_OrderedFormat::BuildInvariantDisplayString
          (FTextHistory_OrderedFormat *this,FString *__return_storage_ptr__)

{
  FTextFormatter::FormatStr(__return_storage_ptr__,&this->SourceFmt,&this->Arguments,true,true);
  return __return_storage_ptr__;
}

// BuildLocalizedDisplayString @ 14174a8b0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FString * __thiscall
FTextHistory_OrderedFormat::BuildLocalizedDisplayString
          (FTextHistory_OrderedFormat *this,FString *__return_storage_ptr__)

{
  FTextFormatter::FormatStr(__return_storage_ptr__,&this->SourceFmt,&this->Arguments,true,false);
  return __return_storage_ptr__;
}

// GetHistoricFormatData @ 14175df80

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FTextHistory_OrderedFormat::GetHistoricFormatData
          (FTextHistory_OrderedFormat *this,FText *param_1,
          TArray<FHistoricTextFormatData,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FTextFormatData *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FText *pFVar8;
  longlong *plVar9;
  TTuple<FString,FFormatArgumentValue> *pTVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_68;
  FString local_58;
  FText local_48;
  FText local_38;
  
  pFVar8 = FTextFormat::GetSourceText(&this->SourceFmt,&local_38);
  plVar9 = (longlong *)(**(code **)((longlong)*(pFVar8->TextData).Reference + 0x48))();
  (**(code **)(*plVar9 + 0x98))(plVar9,pFVar8,param_2);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  for (iVar12 = 0; (-1 < iVar12 && (iVar12 < (this->Arguments).ArrayNum)); iVar12 = iVar12 + 1) {
    if (iVar12 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar2 = (this->Arguments).AllocatorInstance.Data;
    lVar11 = (longlong)iVar12 * 0x20;
    if (*(int *)(pFVar2 + lVar11) == 4) {
      if (*(longlong *)(pFVar2 + lVar11 + 0x10) == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      plVar9 = (longlong *)(**(code **)(**(longlong **)(pFVar2 + lVar11 + 0x10) + 0x48))();
      (**(code **)(*plVar9 + 0x98))(plVar9,pFVar2 + lVar11 + 0x10,param_2);
    }
  }
  uVar13 = (this->Arguments).ArrayNum;
  local_68.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Pairs.ArrayNum = 0;
  local_68.Pairs.ArrayMax = 0;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (0 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,uVar13,(ForAnyElementType *)&local_68,0,&local_68.Pairs.ArrayMax);
  }
  uVar13 = 0;
  piVar1 = &(this->Arguments).ArrayNum;
  if (0 < *piVar1) {
    do {
      uVar7 = 0;
      if ((int)uVar13 < *piVar1) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pFVar2 = (this->Arguments).AllocatorInstance.Data;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_58,uVar13);
      pTVar10 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                ::AllocateMemoryForEmplace<FString_&>(&local_68,&local_58);
      *(undefined8 *)pTVar10 = 0;
      *(FScriptContainerElement **)pTVar10 = local_58.Data.AllocatorInstance.Data;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)&pTVar10->field_0x8 = local_58.Data.ArrayNum;
      *(int *)&pTVar10->field_0xc = local_58.Data.ArrayMax;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      FFormatArgumentValue::FFormatArgumentValue
                ((FFormatArgumentValue *)&pTVar10->field_0x10,
                 (FFormatArgumentValue *)(pFVar2 + (longlong)(int)uVar13 * 0x20));
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (this->Arguments).ArrayNum);
  }
  pTVar3 = (this->SourceFmt).TextFormatData.SharedReferenceCount.ReferenceController;
  pFVar4 = (this->SourceFmt).TextFormatData.Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar12 = param_2->ArrayNum;
  if (iVar12 == param_2->ArrayMax) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar12 + 1;
  local_48.TextData.Reference = (param_1->TextData).Reference;
  pFVar8 = (FText *)((param_2->AllocatorInstance).Data + (longlong)iVar12 * 0x30);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 8))
              (local_48.TextData.Reference,local_res8);
  }
  local_48.Flags = param_1->Flags;
  FText::FText(pFVar8,&local_48);
  pFVar8[1].TextData.Reference = (ITextData *)pFVar4;
  *(TReferenceControllerBase<1> **)&pFVar8[1].Flags = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar8[2].TextData.Reference = (ITextData *)0x0;
  pFVar8[2].TextData.Reference = (ITextData *)local_68.Pairs.AllocatorInstance.Data;
  local_68.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar8[2].Flags = local_68.Pairs.ArrayNum;
  *(int *)&pFVar8[2].field_0xc = local_68.Pairs.ArrayMax;
  local_68.Pairs.ArrayNum = 0;
  local_68.Pairs.ArrayMax = 0;
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  DestructItems<TTuple<FString,FFormatArgumentValue>,int>
            ((TTuple<FString,FFormatArgumentValue> *)local_68.Pairs.AllocatorInstance.Data,
             local_68.Pairs.ArrayNum);
  if ((TTuple<FString,FFormatArgumentValue> *)local_68.Pairs.AllocatorInstance.Data !=
      (TTuple<FString,FFormatArgumentValue> *)0x0) {
    FMemory::Free(local_68.Pairs.AllocatorInstance.Data);
  }
  return;
}

// GetType @ 141761c10

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

ETextHistoryType __thiscall FTextHistory_OrderedFormat::GetType(FTextHistory_OrderedFormat *this)

{
  return OrderedFormat;
}

// IdenticalTo @ 141763560

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FTextHistory_OrderedFormat::IdenticalTo
          (FTextHistory_OrderedFormat *this,FTextHistory *param_1,ETextIdenticalModeFlags param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  
  bVar4 = FTextFormat::IdenticalTo(&this->SourceFmt,(FTextFormat *)&param_1[1].Mutex,param_2);
  if ((!bVar4) || (iVar1 = (this->Arguments).ArrayNum, iVar1 != *(int *)&param_1[2].Mutex)) {
    return false;
  }
  bVar4 = true;
  uVar8 = 0;
  if (0 < iVar1) {
    do {
      if (bVar4 == false) {
        return false;
      }
      uVar7 = 0;
      if ((int)uVar8 < (this->Arguments).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar2 = (this->Arguments).AllocatorInstance.Data;
      uVar7 = 0;
      if ((int)uVar8 < *(int *)&param_1[2].Mutex) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      bVar5 = FFormatArgumentValue::IdenticalTo
                        ((FFormatArgumentValue *)(pFVar2 + (longlong)(int)uVar8 * 0x20),
                         (FFormatArgumentValue *)
                         (*(longlong *)&param_1[2]._padding_ + (longlong)(int)uVar8 * 0x20),param_2)
      ;
      bVar4 = (bool)(bVar4 & bVar5);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (this->Arguments).ArrayNum);
  }
  return bVar4;
}

// ReadFromBuffer @ 141770590

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

wchar_t * __thiscall
FTextHistory_OrderedFormat::ReadFromBuffer
          (FTextHistory_OrderedFormat *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  int *piVar1;
  wchar_t wVar2;
  TReferenceControllerBase<1> *pTVar3;
  FTextFormatData *pFVar4;
  int iVar5;
  FText *pFVar6;
  wchar_t *pwVar7;
  TSharedRef<FTextFormatPatternDefinition_const_,1> *pTVar8;
  FFormatArgumentValue *pFVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  ETextFormatFlags local_58 [8];
  undefined1 local_50 [8];
  TSharedRef<FTextFormatData,1> local_48;
  FText local_38;
  TSharedRef<FTextFormatPatternDefinition_const_,1> local_28;
  
  iVar5 = wcsncmp(param_1,*TextStringificationUtil::LocGenFormatOrderedMarker,0x15);
  if (iVar5 == 0) {
    pwVar10 = param_1 + 0x15;
    wVar2 = param_1[0x15];
    while ((wVar2 != L'\0' && ((wVar2 == L' ' || (wVar2 == L'\t'))))) {
      pwVar7 = pwVar10 + 1;
      pwVar10 = pwVar10 + 1;
      wVar2 = *pwVar7;
    }
    if (*pwVar10 == L'(') {
      pwVar7 = pwVar10 + 1;
      if (pwVar10 == (wchar_t *)0x0) {
        pwVar7 = (wchar_t *)0x0;
      }
      if (pwVar7 != (wchar_t *)0x0) {
        pFVar6 = FText::GetEmpty();
        local_48.Object = (FTextFormatData *)(pFVar6->TextData).Reference;
        if (local_48.Object != (FTextFormatData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_48.Object + 8))(local_48.Object,local_50);
        }
        wVar2 = *pwVar7;
        pwVar10 = (wchar_t *)0x0;
        local_48.SharedReferenceCount.ReferenceController._0_4_ = 0;
        while ((wVar2 != L'\0' && ((wVar2 == L' ' || (wVar2 == L'\t'))))) {
          pwVar11 = pwVar7 + 1;
          pwVar7 = pwVar7 + 1;
          wVar2 = *pwVar11;
        }
        pwVar7 = FTextStringHelper::ReadFromBuffer
                           (pwVar7,(FText *)&local_48,(wchar_t *)0x0,(wchar_t *)0x0,true);
        pFVar4 = local_48.Object;
        if (pwVar7 != (wchar_t *)0x0) {
          local_58[0] = Default;
          pTVar8 = FTextFormatPatternDefinition::GetDefault(&local_28);
          local_38.TextData.Reference = (ITextData *)pFVar4;
          if (pFVar4 != (FTextFormatData *)0x0) {
            (**(code **)((longlong)*(ITextData *)pFVar4 + 8))(pFVar4,local_50);
          }
          local_38.Flags = (uint)local_48.SharedReferenceCount.ReferenceController;
          MakeShared<FTextFormatData,1,FText,enum_ETextFormatFlags_&,TSharedRef<FTextFormatPatternDefinition_const_,1>_>
                    (&local_48,&local_38,local_58,pTVar8);
          if ((FTextFormatData *)local_38.TextData.Reference != (FTextFormatData *)0x0) {
            (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_28.SharedReferenceCount.ReferenceController);
          pTVar3 = (this->SourceFmt).TextFormatData.SharedReferenceCount.ReferenceController;
          (this->SourceFmt).TextFormatData.Object = local_48.Object;
          (this->SourceFmt).TextFormatData.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)
               CONCAT44(local_48.SharedReferenceCount.ReferenceController._4_4_,
                        (uint)local_48.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
          piVar1 = &(this->Arguments).ArrayMax;
          pFVar9 = (FFormatArgumentValue *)(this->Arguments).AllocatorInstance.Data;
          iVar5 = (this->Arguments).ArrayNum;
          if (*piVar1 < 0) {
            DestructItems<FFormatArgumentValue,int>(pFVar9,iVar5);
            (this->Arguments).ArrayNum = 0;
            if (*piVar1 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,0,&(this->Arguments).AllocatorInstance,0,piVar1);
            }
          }
          else {
            DestructItems<FFormatArgumentValue,int>(pFVar9,iVar5);
            (this->Arguments).ArrayNum = 0;
          }
          do {
            wVar2 = *pwVar7;
            while ((wVar2 != L'\0' && ((wVar2 == L' ' || (wVar2 == L'\t'))))) {
              pwVar11 = pwVar7 + 1;
              pwVar7 = pwVar7 + 1;
              wVar2 = *pwVar11;
            }
            wVar2 = *pwVar7;
            if (wVar2 != L',') goto joined_r0x000141770861;
            iVar5 = (this->Arguments).ArrayNum;
            if (iVar5 == *piVar1) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x820,&(this->Arguments).AllocatorInstance,piVar1);
            }
            (this->Arguments).ArrayNum = iVar5 + 1;
            pFVar9 = (FFormatArgumentValue *)
                     ((this->Arguments).AllocatorInstance.Data + (longlong)iVar5 * 0x20);
            DefaultConstructItems<FFormatArgumentValue,int>(pFVar9,1);
            wVar2 = pwVar7[1];
            while ((wVar2 != L'\0' && ((wVar2 == L' ' || (wVar2 == L'\t'))))) {
              wVar2 = pwVar7[2];
              pwVar7 = pwVar7 + 1;
            }
            pwVar7 = FFormatArgumentValue::FromExportedString(pFVar9,pwVar7 + 1);
          } while (pwVar7 != (wchar_t *)0x0);
        }
        goto LAB_141770820;
      }
    }
  }
  return (wchar_t *)0x0;
joined_r0x000141770861:
  while ((wVar2 != L'\0' && ((wVar2 == L' ' || (wVar2 == L'\t'))))) {
    pwVar11 = pwVar7 + 1;
    pwVar7 = pwVar7 + 1;
    wVar2 = *pwVar11;
  }
  if ((pwVar7 == (wchar_t *)0x0) || (*pwVar7 == L')')) {
    pwVar11 = pwVar7 + 1;
    if (pwVar7 == (wchar_t *)0x0) {
      pwVar11 = (wchar_t *)0x0;
    }
    if (pwVar11 != (wchar_t *)0x0) {
      FTextHistory::MarkDisplayStringOutOfDate((FTextHistory *)this);
      pwVar10 = pwVar11;
    }
  }
LAB_141770820:
  if (pFVar4 != (FTextFormatData *)0x0) {
    (**(code **)((longlong)*(ITextData *)pFVar4 + 0x10))(pFVar4);
  }
  return pwVar10;
}

// Serialize @ 14177b560

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FTextHistory_OrderedFormat::Serialize
          (FTextHistory_OrderedFormat *this,FStructuredArchiveRecord param_1)

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
    if ((pFVar2->field_0x28 & 1) == 0) goto LAB_14177b6a0;
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
LAB_14177b6a0:
  operator<<<FFormatArgumentValue>
            ((FStructuredArchiveSlot)local_res10.StructuredArchive,&this->Arguments);
  return;
}

// ShouldReadFromBuffer @ 14177e140

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FTextHistory_OrderedFormat::ShouldReadFromBuffer(FTextHistory_OrderedFormat *this,wchar_t *param_1)

{
  int iVar1;
  
  iVar1 = wcsncmp(param_1,*TextStringificationUtil::LocGenFormatOrderedMarker,0x15);
  return iVar1 == 0;
}

// StaticShouldReadFromBuffer @ 14177ebb0

bool __cdecl FTextHistory_OrderedFormat::StaticShouldReadFromBuffer(wchar_t *param_1)

{
  int iVar1;
  
  iVar1 = wcsncmp(param_1,*TextStringificationUtil::LocGenFormatOrderedMarker,0x15);
  return iVar1 == 0;
}

// WriteToBuffer @ 141785510

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FTextHistory_OrderedFormat::WriteToBuffer
          (FTextHistory_OrderedFormat *this,FString *param_1,bool param_2)

{
  FTextHistory_OrderedFormat *local_res8;
  code *local_28;
  FTextHistory_OrderedFormat **local_20;
  FString local_18;
  
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`FTextHistory_OrderedFormat::WriteToBuffer'::__l2::<lambda_1>,void,TFunctionRef<void___cdecl(FString_const_*,FFormatArgumentValue_const_&)>_>
             ::Call;
  local_res8 = this;
  ::FString::FString(&local_18,*TextStringificationUtil::LocGenFormatOrderedMarker);
  TextStringificationUtil::WriteTextFormatToBuffer
            (param_1,&local_18,&this->SourceFmt,param_2,
             (TFunctionRef<void___cdecl(TFunctionRef<void___cdecl(FString_const_*,FFormatArgumentValue_const_&)>)>
              *)&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

