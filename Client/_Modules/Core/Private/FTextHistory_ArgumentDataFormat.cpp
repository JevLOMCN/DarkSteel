// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// FTextHistory_ArgumentDataFormat @ 141736830

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FTextHistory_ArgumentDataFormat * __thiscall
FTextHistory_ArgumentDataFormat::FTextHistory_ArgumentDataFormat
          (FTextHistory_ArgumentDataFormat *this,FString *param_1,FTextFormat *param_2,
          TArray<FFormatArgumentData,TSizedDefaultAllocator<32>_> *param_3)

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
  this->_padding_ = (longlong)&___7FTextHistory_ArgumentDataFormat__6B_;
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

// operator() @ 14173e7c0

void __thiscall
`FTextHistory_ArgumentDataFormat::WriteToBuffer'::__l2::<lambda_1>::operator()
          (void *this,
          TFunctionRef<void___cdecl(FString_const_*,FFormatArgumentValue_const_&)> *param_1)

{
  FFormatArgumentData *pFVar1;
  int iVar2;
  longlong lVar3;
  FFormatArgumentValue *pFVar4;
  FFormatArgumentData *this_00;
  FFormatArgumentData *local_res8;
  FFormatArgumentValue local_38;
  
  lVar3 = *(longlong *)this;
  iVar2 = *(int *)(lVar3 + 0x40);
  this_00 = *(FFormatArgumentData **)(lVar3 + 0x38);
  pFVar1 = this_00 + iVar2;
  while( true ) {
    if (*(int *)(lVar3 + 0x40) != iVar2) {
      `TCheckedPointerIterator<FFormatArgumentData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (this_00 == pFVar1) break;
    pFVar4 = FFormatArgumentData::ToArgumentValue(this_00,&local_38);
    local_res8 = this_00;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res8,pFVar4);
    if (local_38.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_38.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    this_00 = this_00 + 1;
  }
  return;
}

// BuildInvariantDisplayString @ 141749830

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FString * __thiscall
FTextHistory_ArgumentDataFormat::BuildInvariantDisplayString
          (FTextHistory_ArgumentDataFormat *this,FString *__return_storage_ptr__)

{
  FTextFormatter::FormatStr(__return_storage_ptr__,&this->SourceFmt,&this->Arguments,true,true);
  return __return_storage_ptr__;
}

// BuildLocalizedDisplayString @ 14174a160

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FString * __thiscall
FTextHistory_ArgumentDataFormat::BuildLocalizedDisplayString
          (FTextHistory_ArgumentDataFormat *this,FString *__return_storage_ptr__)

{
  FTextFormatter::FormatStr(__return_storage_ptr__,&this->SourceFmt,&this->Arguments,true,false);
  return __return_storage_ptr__;
}

// GetHistoricFormatData @ 14175d780

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FTextHistory_ArgumentDataFormat::GetHistoricFormatData
          (FTextHistory_ArgumentDataFormat *this,FText *param_1,
          TArray<FHistoricTextFormatData,TSizedDefaultAllocator<32>_> *param_2)

{
  char cVar1;
  FTextFormatData *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  FKeyForward FVar5;
  TArray<FHistoricTextFormatData,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  FText *pFVar11;
  longlong *plVar12;
  wchar_t *_Str1;
  ulonglong uVar13;
  wchar_t *_Str2;
  FText *this_00;
  undefined8 uVar14;
  TTuple<FString,FFormatArgumentValue> *this_01;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  FKeyForward local_res8 [8];
  FText *local_res10;
  TArray<FHistoricTextFormatData,TSizedDefaultAllocator<32>_> *local_res18;
  undefined1 local_res20 [8];
  TArray<TTuple<FString,FFormatArgumentValue>,TSizedDefaultAllocator<32>_> local_f8;
  undefined4 local_e8;
  ulonglong local_e0;
  TOptional<FText>_u_0 local_d8;
  uint local_c8;
  undefined1 local_c4 [4];
  FScriptContainerElement *local_c0;
  FTextFormat *local_b8;
  FText local_b0;
  undefined4 local_a0;
  ulonglong local_98;
  TOptional<FText>_u_0 local_90;
  FText local_80;
  ulonglong local_68;
  
  local_b8 = &this->SourceFmt;
  local_res10 = param_1;
  local_res18 = param_2;
  pFVar11 = FTextFormat::GetSourceText(local_b8,&local_80);
  plVar12 = (longlong *)(**(code **)((longlong)*(pFVar11->TextData).Reference + 0x48))();
  (**(code **)(*plVar12 + 0x98))(plVar12,pFVar11,param_2);
  if (local_80.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
  }
  iVar10 = (this->Arguments).ArrayNum;
  pFVar15 = (this->Arguments).AllocatorInstance.Data;
  pFVar16 = pFVar15 + (longlong)iVar10 * 0x48;
  while( true ) {
    if ((this->Arguments).ArrayNum != iVar10) {
      local_res8[0] = (FKeyForward)0x0;
      `TCheckedPointerIterator<FFormatArgumentData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar15 == pFVar16) break;
    if (pFVar15[0x10] == (FScriptContainerElement)0x4) {
      plVar12 = (longlong *)(**(code **)(**(longlong **)(pFVar15 + 0x18) + 0x48))();
      (**(code **)(*plVar12 + 0x98))(plVar12,pFVar15 + 0x18,param_2);
    }
    pFVar15 = pFVar15 + 0x48;
  }
  uVar8 = (this->Arguments).ArrayNum;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  if (0 < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,uVar8,&local_f8.AllocatorInstance,0,&local_f8.ArrayMax);
  }
  FVar5 = local_res8[0];
  local_c8 = (this->Arguments).ArrayNum;
  uVar13 = (ulonglong)(int)local_c8;
  pFVar16 = (this->Arguments).AllocatorInstance.Data;
  local_c0 = pFVar16 + uVar13 * 0x48;
  do {
    pFVar15 = local_c0;
    if ((this->Arguments).ArrayNum != (int)uVar13) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FFormatArgumentData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    pTVar6 = local_res18;
    if (pFVar16 == pFVar15) {
      pFVar2 = (local_b8->TextFormatData).Object;
      pTVar3 = (local_b8->TextFormatData).SharedReferenceCount.ReferenceController;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      iVar10 = local_res18->ArrayNum;
      if (iVar10 == local_res18->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&local_res18->AllocatorInstance,&local_res18->ArrayMax);
      }
      pFVar11 = local_res10;
      pTVar6->ArrayNum = iVar10 + 1;
      local_b0.TextData.Reference = (local_res10->TextData).Reference;
      this_00 = (FText *)((pTVar6->AllocatorInstance).Data + (longlong)iVar10 * 0x30);
      if (local_b0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b0.TextData.Reference + 8))
                  (local_b0.TextData.Reference,local_c4);
      }
      local_b0.Flags = pFVar11->Flags;
      FText::FText(this_00,&local_b0);
      this_00[1].TextData.Reference = (ITextData *)pFVar2;
      *(TReferenceControllerBase<1> **)&this_00[1].Flags = pTVar3;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      this_00[2].TextData.Reference = (ITextData *)0x0;
      this_00[2].TextData.Reference = (ITextData *)local_f8.AllocatorInstance.Data;
      local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      this_00[2].Flags = local_f8.ArrayNum;
      *(int *)&this_00[2].field_0xc = local_f8.ArrayMax;
      local_f8.ArrayNum = 0;
      local_f8.ArrayMax = 0;
      if (local_b0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_f8.AllocatorInstance.Data,
                 local_f8.ArrayNum);
      if ((TTuple<FString,FFormatArgumentValue> *)local_f8.AllocatorInstance.Data !=
          (TTuple<FString,FFormatArgumentValue> *)0x0) {
        FMemory::Free(local_f8.AllocatorInstance.Data);
      }
      return;
    }
    local_e8 = 4;
    pFVar11 = FText::GetEmpty();
    TOptional<FText>::TOptional<FText>((TOptional<FText> *)&local_d8.TypedValue,pFVar11);
    cVar1 = pFVar16[0x10].field_0x0;
    if (cVar1 == '\0') {
      local_e0 = *(ulonglong *)(pFVar16 + 0x28);
      local_e8 = 0;
LAB_14175da0d:
      if (local_d8.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_d8.TypedValue.TextData.Reference + 0x10))();
        local_d8.TypedValue.Flags = 0;
        local_d8.TypedValue.TextData.Reference = (TRefCountPtr<ITextData>)(ITextData *)0x0;
      }
    }
    else {
      if (cVar1 == '\x02') {
        local_e0 = CONCAT44((int)(local_68 >> 0x20),*(undefined4 *)&pFVar16[0x30].field_0x0);
        local_e8 = 2;
        local_68 = local_e0;
        goto LAB_14175da0d;
      }
      if (cVar1 == '\x03') {
        local_e0 = *(ulonglong *)(pFVar16 + 0x38);
        local_e8 = 3;
        goto LAB_14175da0d;
      }
      if (cVar1 == '\x05') {
        local_e0 = (ulonglong)(byte)pFVar16[0x40].field_0x0;
        local_e8 = 5;
        goto LAB_14175da0d;
      }
      local_a0 = 4;
      TOptional<FText>::TOptional<FText>
                ((TOptional<FText> *)&local_90.TypedValue,(FText *)(pFVar16 + 0x18));
      uVar14 = local_90.TypedValue.TextData.Reference;
      local_e0 = local_98;
      local_e8 = local_a0;
      if (local_90.TypedValue.TextData.Reference == (ITextData *)0x0) {
        if (local_d8.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_d8.TypedValue.TextData.Reference + 0x10))();
          local_d8.TypedValue.TextData.Reference = (TRefCountPtr<ITextData>)(ITextData *)0x0;
          local_d8.TypedValue.Flags = 0;
        }
      }
      else {
        if (local_d8.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_d8.TypedValue.TextData.Reference + 0x10))();
        }
        FText::FText(&local_d8.TypedValue,&local_90.TypedValue);
        uVar14 = local_90.TypedValue.TextData.Reference;
        if ((local_d8.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x171,
                               L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                              ), uVar14 = local_90.TypedValue.TextData.Reference, bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if ((ITextData *)uVar14 != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)uVar14 + 0x10))(uVar14);
      }
    }
    uVar8 = AlgoImpl::
            LowerBoundInternal<TTuple<FString,FFormatArgumentValue>_const_,int,FString,TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::FKeyForward,FLocKeySortedMapLess>
                      ((TTuple<FString,FFormatArgumentValue> *)local_f8.AllocatorInstance.Data,
                       local_f8.ArrayNum,(FString *)pFVar16,FVar5,(FLocKeySortedMapLess)FVar5);
    if (((int)uVar8 < 0) || (local_f8.ArrayNum < (int)uVar8)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InsertIndex >= 0 && InsertIndex <= Pairs.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                         ,0x249,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (-1 < (int)uVar8) {
        goto LAB_14175da83;
      }
LAB_14175db26:
      TArray<TTuple<FString,FFormatArgumentValue>,TSizedDefaultAllocator<32>_>::
      InsertUninitializedImpl(&local_f8,uVar8,1);
      this_01 = (TTuple<FString,FFormatArgumentValue> *)
                (local_f8.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x30);
    }
    else {
LAB_14175da83:
      if (local_f8.ArrayNum <= (int)uVar8) goto LAB_14175db26;
      uVar9 = 0;
      if ((int)uVar8 < local_f8.ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_01 = (TTuple<FString,FFormatArgumentValue> *)
                (local_f8.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x30);
      if (*(int *)&this_01->field_0x8 == 0) {
        _Str2 = L"";
      }
      else {
        _Str2 = *(wchar_t **)this_01;
      }
      if (*(int *)(pFVar16 + 8) == 0) {
        _Str1 = L"";
      }
      else {
        _Str1 = *(wchar_t **)pFVar16;
      }
      iVar10 = wcscmp(_Str1,_Str2);
      if (iVar10 < 0) goto LAB_14175db26;
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>(this_01,1);
    }
    ::FString::FString((FString *)this_01,(FString *)pFVar16);
    *(undefined4 *)&this_01->field_0x10 = local_e8;
    *(ulonglong *)&this_01->field_0x18 = local_e0;
    *(ulonglong *)&this_01->field_0x18 = local_e0;
    *(undefined4 *)&this_01->field_0x18 = (undefined4)local_e0;
    *(ulonglong *)&this_01->field_0x18 = local_e0;
    *(undefined8 *)&this_01->field_0x20 = 0;
    *(undefined4 *)&this_01->field_0x28 = 0;
    if ((local_d8.TypedValue.TextData.Reference != (ITextData *)0x0) &&
       (FText::FText((FText *)&this_01->field_0x20,&local_d8.TypedValue),
       local_d8.TypedValue.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*(ITextData *)local_d8.TypedValue.TextData.Reference + 0x10))();
    }
    uVar13 = (ulonglong)local_c8;
    pFVar16 = pFVar16 + 0x48;
  } while( true );
}

// GetType @ 141761b80

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

ETextHistoryType __thiscall
FTextHistory_ArgumentDataFormat::GetType(FTextHistory_ArgumentDataFormat *this)

{
  return ArgumentFormat;
}

// IdenticalTo @ 141763020

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FTextHistory_ArgumentDataFormat::IdenticalTo
          (FTextHistory_ArgumentDataFormat *this,FTextHistory *param_1,
          ETextIdenticalModeFlags param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  FFormatArgumentValue *this_00;
  FFormatArgumentValue *pFVar7;
  uint uVar8;
  FFormatArgumentValue local_68;
  FFormatArgumentValue local_48;
  
  bVar3 = FTextFormat::IdenticalTo(&this->SourceFmt,(FTextFormat *)&param_1[1].Mutex,param_2);
  if ((!bVar3) || (iVar1 = (this->Arguments).ArrayNum, iVar1 != *(int *)&param_1[2].Mutex)) {
    return false;
  }
  uVar8 = 0;
  bVar3 = true;
  if (0 < iVar1) {
    do {
      if (bVar3 == false) {
        return false;
      }
      uVar6 = 0;
      if ((int)uVar8 < (this->Arguments).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      this_00 = FFormatArgumentData::ToArgumentValue
                          ((FFormatArgumentData *)
                           ((this->Arguments).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x48),
                           &local_48);
      uVar6 = 0;
      if ((int)uVar8 < *(int *)&param_1[2].Mutex) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      pFVar7 = FFormatArgumentData::ToArgumentValue
                         ((FFormatArgumentData *)
                          (*(longlong *)&param_1[2]._padding_ + (longlong)(int)uVar8 * 0x48),
                          &local_68);
      bVar4 = FFormatArgumentValue::IdenticalTo(this_00,pFVar7,param_2);
      bVar3 = (bool)(bVar3 & bVar4);
      if (local_68.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_68.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      if (local_48.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)
                     *(ITextData *)local_48.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (this->Arguments).ArrayNum);
  }
  return bVar3;
}

// ReadFromBuffer @ 14176f2b0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

wchar_t * __thiscall
FTextHistory_ArgumentDataFormat::ReadFromBuffer
          (FTextHistory_ArgumentDataFormat *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  return (wchar_t *)0x0;
}

// Serialize @ 14177a3b0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FTextHistory_ArgumentDataFormat::Serialize
          (FTextHistory_ArgumentDataFormat *this,FStructuredArchiveRecord param_1)

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
    if ((pFVar2->field_0x28 & 1) == 0) goto LAB_14177a4f0;
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
LAB_14177a4f0:
  operator<<<FFormatArgumentData>
            ((FStructuredArchiveSlot)local_res10.StructuredArchive,&this->Arguments);
  return;
}

// ShouldReadFromBuffer @ 14177df80

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FTextHistory_ArgumentDataFormat::ShouldReadFromBuffer
          (FTextHistory_ArgumentDataFormat *this,wchar_t *param_1)

{
  return false;
}

// StaticShouldReadFromBuffer @ 14177ea00

bool __cdecl FTextHistory_ArgumentDataFormat::StaticShouldReadFromBuffer(wchar_t *param_1)

{
  return false;
}

// WriteToBuffer @ 141784b90

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FTextHistory_ArgumentDataFormat::WriteToBuffer
          (FTextHistory_ArgumentDataFormat *this,FString *param_1,bool param_2)

{
  FTextHistory_ArgumentDataFormat *local_res8;
  code *local_28;
  FTextHistory_ArgumentDataFormat **local_20;
  FString local_18;
  
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`FTextHistory_ArgumentDataFormat::WriteToBuffer'::__l2::<lambda_1>,void,TFunctionRef<void___cdecl(FString_const_*,FFormatArgumentValue_const_&)>_>
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

