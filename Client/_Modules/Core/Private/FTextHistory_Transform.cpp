// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// FTextHistory_Transform @ 1417375c0

FTextHistory_Transform * __thiscall
FTextHistory_Transform::FTextHistory_Transform
          (FTextHistory_Transform *this,FString *param_1,FText *param_2,ETransformType param_3)

{
  ITextData *pIVar1;
  
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
  this->_padding_ = (longlong)&___7FTextHistory_Transform__6B_;
  FText::FText(&this->SourceText,param_2);
  this->TransformType = param_3;
  pIVar1 = (param_2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return this;
}

// BuildInvariantDisplayString @ 14174a090

FString * __thiscall
FTextHistory_Transform::BuildInvariantDisplayString
          (FTextHistory_Transform *this,FString *__return_storage_ptr__)

{
  longlong *plVar1;
  FString local_18;
  
  FText::Rebuild(&this->SourceText);
  if (this->TransformType == ToLower) {
    plVar1 = (longlong *)(**(code **)((longlong)*(this->SourceText).TextData.Reference + 0x48))();
    (**(code **)(*plVar1 + 0x68))(plVar1,&local_18);
    FTextTransformer::ToLower(__return_storage_ptr__,&local_18);
  }
  else {
    if (this->TransformType != ToUpper) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
    plVar1 = (longlong *)(**(code **)((longlong)*(this->SourceText).TextData.Reference + 0x48))();
    (**(code **)(*plVar1 + 0x68))(plVar1,&local_18);
    FTextTransformer::ToUpper(__return_storage_ptr__,&local_18);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// BuildLocalizedDisplayString @ 14174a990

FString * __thiscall
FTextHistory_Transform::BuildLocalizedDisplayString
          (FTextHistory_Transform *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  
  FText::Rebuild(&this->SourceText);
  if (this->TransformType == ToLower) {
    FText::Rebuild(&this->SourceText);
    pFVar1 = (FString *)(**(code **)((longlong)*(this->SourceText).TextData.Reference + 0x28))();
    FTextTransformer::ToLower(__return_storage_ptr__,pFVar1);
    return __return_storage_ptr__;
  }
  if (this->TransformType != ToUpper) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  FText::Rebuild(&this->SourceText);
  pFVar1 = (FString *)(**(code **)((longlong)*(this->SourceText).TextData.Reference + 0x28))();
  FTextTransformer::ToUpper(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetHistoricFormatData @ 14175e2c0

void __thiscall
FTextHistory_Transform::GetHistoricFormatData
          (FTextHistory_Transform *this,FText *param_1,
          TArray<FHistoricTextFormatData,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)((longlong)*(this->SourceText).TextData.Reference + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x00014175e2f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x98))(plVar1,&this->SourceText,param_2,*(code **)(*plVar1 + 0x98));
  return;
}

// GetHistoricNumericData @ 14175e490

bool __thiscall
FTextHistory_Transform::GetHistoricNumericData
          (FTextHistory_Transform *this,FText *param_1,FHistoricTextNumericData *param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)((longlong)*(this->SourceText).TextData.Reference + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x00014175e4c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*plVar2 + 0xa0))(plVar2,&this->SourceText,param_2,*(code **)(*plVar2 + 0xa0))
  ;
  return (bool)uVar1;
}

// GetType @ 141761c40

ETextHistoryType __thiscall FTextHistory_Transform::GetType(FTextHistory_Transform *this)

{
  return Transform;
}

// IdenticalTo @ 141763820

bool __thiscall
FTextHistory_Transform::IdenticalTo
          (FTextHistory_Transform *this,FTextHistory *param_1,ETextIdenticalModeFlags param_2)

{
  bool bVar1;
  
  bVar1 = FText::IdenticalTo(&this->SourceText,(FText *)&param_1[1].Mutex,param_2);
  if ((bVar1) && (this->TransformType == (ETransformType)param_1[2]._padding_)) {
    return true;
  }
  return false;
}

// ReadFromBuffer @ 141770bb0

wchar_t * __thiscall
FTextHistory_Transform::ReadFromBuffer
          (FTextHistory_Transform *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  wchar_t wVar1;
  ETransformType EVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  iVar3 = wcsncmp(param_1,*TextStringificationUtil::LocGenToLowerMarker,0xe);
  EVar2 = ToLower;
  if (iVar3 != 0) {
    iVar3 = wcsncmp(param_1,*TextStringificationUtil::LocGenToUpperMarker,0xe);
    if (iVar3 != 0) {
      return (wchar_t *)0x0;
    }
    EVar2 = ToUpper;
  }
  pwVar4 = param_1 + 0xe;
  this->TransformType = EVar2;
  wVar1 = *pwVar4;
  while ((wVar1 != L'\0' && ((wVar1 == L' ' || (wVar1 == L'\t'))))) {
    pwVar5 = pwVar4 + 1;
    pwVar4 = pwVar4 + 1;
    wVar1 = *pwVar5;
  }
  if (*pwVar4 == L'(') {
    pwVar5 = pwVar4 + 1;
    if (pwVar4 == (wchar_t *)0x0) {
      pwVar5 = (wchar_t *)0x0;
    }
    if (pwVar5 != (wchar_t *)0x0) {
      wVar1 = *pwVar5;
      while ((wVar1 != L'\0' && ((wVar1 == L' ' || (wVar1 == L'\t'))))) {
        pwVar4 = pwVar5 + 1;
        pwVar5 = pwVar5 + 1;
        wVar1 = *pwVar4;
      }
      pwVar4 = FTextStringHelper::ReadFromBuffer
                         (pwVar5,&this->SourceText,(wchar_t *)0x0,(wchar_t *)0x0,true);
      if (pwVar4 != (wchar_t *)0x0) {
        wVar1 = *pwVar4;
        while ((wVar1 != L'\0' && ((wVar1 == L' ' || (wVar1 == L'\t'))))) {
          pwVar5 = pwVar4 + 1;
          pwVar4 = pwVar4 + 1;
          wVar1 = *pwVar5;
        }
        if (*pwVar4 == L')') {
          pwVar5 = pwVar4 + 1;
          if (pwVar4 == (wchar_t *)0x0) {
            pwVar5 = (wchar_t *)0x0;
          }
          if (pwVar5 != (wchar_t *)0x0) {
            FTextHistory::MarkDisplayStringOutOfDate((FTextHistory *)this);
            return pwVar5;
          }
        }
      }
    }
  }
  return (wchar_t *)0x0;
}

// Serialize @ 14177c120

void __thiscall
FTextHistory_Transform::Serialize(FTextHistory_Transform *this,FStructuredArchiveRecord param_1)

{
  ETransformType *pEVar1;
  FArchive *pFVar2;
  FSlotBase local_res8;
  FSlotBase local_res10 [3];
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  if ((pFVar2->field_0x28 & 1) != 0) {
    FTextHistory::MarkDisplayStringOutOfDate((FTextHistory *)this);
  }
  UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  pFVar2 = (local_res10[0].StructuredArchive)->Formatter->Inner;
  (**(code **)(*(longlong *)pFVar2 + 0x170))(pFVar2,&this->SourceText);
  pFVar2 = (local_res10[0].StructuredArchive)->Formatter->Inner;
  pEVar1 = (ETransformType *)**(undefined8 **)&pFVar2->field_0x8;
  if (pEVar1 + 1 <= (ETransformType *)(*(undefined8 **)&pFVar2->field_0x8)[1]) {
    this->TransformType = *pEVar1;
    **(longlong **)&pFVar2->field_0x8 = **(longlong **)&pFVar2->field_0x8 + 1;
    return;
  }
  (**(code **)(*(longlong *)pFVar2 + 0x188))(pFVar2,&this->TransformType,1);
  return;
}

// ShouldReadFromBuffer @ 14177e1a0

bool __thiscall
FTextHistory_Transform::ShouldReadFromBuffer(FTextHistory_Transform *this,wchar_t *param_1)

{
  int iVar1;
  
  iVar1 = wcsncmp(param_1,*TextStringificationUtil::LocGenToLowerMarker,0xe);
  if (iVar1 != 0) {
    iVar1 = wcsncmp(param_1,*TextStringificationUtil::LocGenToUpperMarker,0xe);
    if (iVar1 != 0) {
      return false;
    }
  }
  return true;
}

// StaticShouldReadFromBuffer @ 14177ec10

bool __cdecl FTextHistory_Transform::StaticShouldReadFromBuffer(wchar_t *param_1)

{
  int iVar1;
  
  iVar1 = wcsncmp(param_1,*TextStringificationUtil::LocGenToLowerMarker,0xe);
  if (iVar1 != 0) {
    iVar1 = wcsncmp(param_1,*TextStringificationUtil::LocGenToUpperMarker,0xe);
    if (iVar1 != 0) {
      return false;
    }
  }
  return true;
}

// WriteToBuffer @ 141785870

bool __thiscall
FTextHistory_Transform::WriteToBuffer(FTextHistory_Transform *this,FString *param_1,bool param_2)

{
  wchar_t *pwVar1;
  
  if (this->TransformType == ToLower) {
    pwVar1 = L"LOCGEN_TOLOWER(";
  }
  else {
    if (this->TransformType != ToUpper) goto LAB_1417858b7;
    pwVar1 = L"LOCGEN_TOUPPER(";
  }
  ::FString::AppendChars(param_1,pwVar1,0xf);
LAB_1417858b7:
  FTextStringHelper::WriteToBuffer(param_1,&this->SourceText,true,param_2);
  ::FString::AppendChars(param_1,L")",1);
  return true;
}

