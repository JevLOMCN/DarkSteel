// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 16

// FTextHistory_Base @ 141736fa0

FTextHistory_Base * __thiscall
FTextHistory_Base::FTextHistory_Base
          (FTextHistory_Base *this,FTextId *param_1,FString *param_2,
          TDisplayStringPtr<FString_const_> *param_3)

{
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FTextHistory_Base__6B_;
  this->TextId = *param_1;
  (this->SourceString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceString).Data.AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
  (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceString).Data.ArrayNum = (param_2->Data).ArrayNum;
  (this->SourceString).Data.ArrayMax = (param_2->Data).ArrayMax;
  (param_2->Data).ArrayNum = 0;
  (param_2->Data).ArrayMax = 0;
  this->LocalizedString = (TDisplayStringPtr<FString_const_>)0x0;
  this->LocalizedString = *param_3;
  *param_3 = (TDisplayStringPtr<FString_const_>)0x0;
  FTextHistory::MarkDisplayStringUpToDate((FTextHistory *)this);
  return this;
}

// FTextHistory_Base @ 141737010

FTextHistory_Base * __thiscall
FTextHistory_Base::FTextHistory_Base(FTextHistory_Base *this,FTextId *param_1,FString *param_2)

{
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FTextHistory_Base__6B_;
  this->TextId = *param_1;
  (this->SourceString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceString).Data.AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
  (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceString).Data.ArrayNum = (param_2->Data).ArrayNum;
  (this->SourceString).Data.ArrayMax = (param_2->Data).ArrayMax;
  (param_2->Data).ArrayNum = 0;
  (param_2->Data).ArrayMax = 0;
  this->LocalizedString = (TDisplayStringPtr<FString_const_>)0x0;
  return this;
}

// BuildInvariantDisplayString @ 141749f20

FString * __thiscall
FTextHistory_Base::BuildInvariantDisplayString
          (FTextHistory_Base *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->SourceString);
  return __return_storage_ptr__;
}

// CanUpdateDisplayString @ 14174b6d0

bool __thiscall FTextHistory_Base::CanUpdateDisplayString(FTextHistory_Base *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((TextLocalizationManager::DisplayStringSupport != 0) &&
     (TextLocalizationManager::DisplayStringSupport != 1)) {
    if (TextLocalizationManager::DisplayStringSupport == 2) {
      return false;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
                       ,0x2b7,L"Unknown EDisplayStringSupport!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  if (((this->TextId).Namespace.Index == -1) && ((this->TextId).Key.Index == -1)) {
    return false;
  }
  return true;
}

// GetDisplayString @ 14175c930

FString * __thiscall FTextHistory_Base::GetDisplayString(FTextHistory_Base *this)

{
  FString *pFVar1;
  
  pFVar1 = (FString *)((longlong)this->LocalizedString + 8);
  if (this->LocalizedString == (TDisplayStringPtr<FString_const_>)0x0) {
    pFVar1 = &this->SourceString;
  }
  return pFVar1;
}

// GetLocalizedString @ 14175f710

TDisplayStringPtr<FString_const_> __thiscall
FTextHistory_Base::GetLocalizedString(FTextHistory_Base *this)

{
  TDisplayStringPtr<FString_const_> TVar1;
  TDisplayStringPtr<FString_const_> in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  TVar1 = this->LocalizedString;
  *(TDisplayStringPtr<FString_const_> *)in_RDX = TVar1;
  if (TVar1 != (TDisplayStringPtr<FString_const_>)0x0) {
    LOCK();
    *(int *)TVar1 = *(int *)TVar1 + 1;
    UNLOCK();
  }
  return in_RDX;
}

// GetSourceString @ 141760f80

FString * __thiscall FTextHistory_Base::GetSourceString(FTextHistory_Base *this)

{
  return &this->SourceString;
}

// GetTextId @ 141761750

FTextId __thiscall FTextHistory_Base::GetTextId(FTextHistory_Base *this)

{
  FTextId in_RDX;
  
  *(FTextId *)in_RDX = this->TextId;
  return in_RDX;
}

// GetType @ 141761bf0

ETextHistoryType __thiscall FTextHistory_Base::GetType(FTextHistory_Base *this)

{
  return Base;
}

// IdenticalTo @ 1417633a0

bool __thiscall
FTextHistory_Base::IdenticalTo
          (FTextHistory_Base *this,FTextHistory *param_1,ETextIdenticalModeFlags param_2)

{
  return false;
}

// ReadFromBuffer @ 14176fb20

/* WARNING: Type propagation algorithm not settling */

wchar_t * __thiscall
FTextHistory_Base::ReadFromBuffer
          (FTextHistory_Base *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  wchar_t wVar1;
  int iVar2;
  wchar_t *pwVar3;
  FGuid *pFVar4;
  FTextKeyState *pFVar5;
  size_t sVar6;
  ulong64 uVar7;
  TStringView<wchar_t> *pTVar8;
  wchar_t *pwVar9;
  FTextId FVar10;
  FTextKey FVar11;
  uint uVar12;
  FTextKey FVar13;
  uint uVar14;
  uint uVar15;
  FTextId _Str;
  FTextId _Str_00;
  FTextId _Str_01;
  bool bVar17;
  FTextId local_68;
  undefined8 local_60;
  FString local_58;
  TStringView<wchar_t> local_48;
  FTextId local_38;
  uint uStack_30;
  uint uStack_2c;
  wchar_t *pwVar16;
  
  pwVar16 = (wchar_t *)0x0;
  uVar14 = 0;
  uVar15 = 0;
  local_68 = (FTextId)((ulonglong)local_68 & 0xffffffff00000000);
  iVar2 = wcsncmp(param_1,*TextStringificationUtil::NsLocTextMarker,9);
  if (iVar2 == 0) {
    pwVar3 = param_1 + 9;
    wVar1 = param_1[9];
    while ((wVar1 != L'\0' && ((wVar1 == L' ' || (wVar1 == L'\t'))))) {
      pwVar9 = pwVar3 + 1;
      pwVar3 = pwVar3 + 1;
      wVar1 = *pwVar9;
    }
    if (*pwVar3 == L'(') {
      pwVar9 = pwVar3 + 1;
      if (pwVar3 == (wchar_t *)0x0) {
        pwVar9 = (wchar_t *)0x0;
      }
      if (pwVar9 != (wchar_t *)0x0) {
        wVar1 = *pwVar9;
        local_48.DataPtr = (wchar_t *)0x0;
        local_48.Size = 0;
        local_48._12_4_ = 0;
        while ((wVar1 != L'\0' && ((wVar1 == L' ' || (wVar1 == L'\t'))))) {
          pwVar3 = pwVar9 + 1;
          pwVar9 = pwVar9 + 1;
          wVar1 = *pwVar3;
        }
        pwVar3 = TextStringificationUtil::ReadQuotedStringFromBuffer(pwVar9,(FString *)&local_48);
        FVar10 = (FTextId)local_48.DataPtr;
        if ((pwVar3 != (wchar_t *)0x0) &&
           (pwVar3 = TextStringificationUtil::SkipWhitespaceAndCharacter(pwVar3,L','),
           FVar10 = (FTextId)local_48.DataPtr, pwVar3 != (wchar_t *)0x0)) {
          local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_58.Data.ArrayNum = 0;
          local_58.Data.ArrayMax = 0;
          wVar1 = *pwVar3;
          while ((wVar1 != L'\0' && ((wVar1 == L' ' || (wVar1 == L'\t'))))) {
            pwVar9 = pwVar3 + 1;
            pwVar3 = pwVar3 + 1;
            wVar1 = *pwVar9;
          }
          pwVar3 = TextStringificationUtil::ReadQuotedStringFromBuffer(pwVar3,&local_58);
          if ((pwVar3 != (wchar_t *)0x0) &&
             (pwVar3 = TextStringificationUtil::SkipWhitespaceAndCharacter(pwVar3,L','),
             pwVar3 != (wchar_t *)0x0)) {
            wVar1 = *pwVar3;
            while ((wVar1 != L'\0' && ((wVar1 == L' ' || (wVar1 == L'\t'))))) {
              pwVar9 = pwVar3 + 1;
              pwVar3 = pwVar3 + 1;
              wVar1 = *pwVar9;
            }
            pwVar3 = TextStringificationUtil::ReadQuotedStringFromBuffer(pwVar3,&this->SourceString)
            ;
            if ((pwVar3 != (wchar_t *)0x0) &&
               (pwVar3 = TextStringificationUtil::SkipWhitespaceAndCharacter(pwVar3,L')'),
               pwVar3 != (wchar_t *)0x0)) {
              if (local_58.Data.ArrayNum < 2) {
                pFVar4 = FGuid::NewGuid((FGuid *)&local_38);
                local_68.Namespace.Index = 0;
                local_68.Key.Index = 0;
                local_60._0_4_ = 0;
                local_60._4_4_ = 0;
                FGuid::AppendString(pFVar4,(FString *)&local_68,Digits);
                if ((FTextId)local_58.Data.AllocatorInstance.Data != (FTextId)0x0) {
                  FMemory::Free(local_58.Data.AllocatorInstance.Data);
                }
                local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_68;
                local_58.Data.ArrayNum = (uint)local_60;
                local_58.Data.ArrayMax = local_60._4_4_;
              }
              TextNamespaceUtil::StripPackageNamespaceInline((FString *)&local_48);
              _Str = (FTextId)local_58.Data.AllocatorInstance;
              local_38 = (FTextId)local_58.Data.AllocatorInstance.Data;
              local_68.Namespace.Index = 0xffffffff;
              uVar12 = local_58.Data.ArrayNum - 1;
              if (local_58.Data.ArrayNum == 0) {
                uVar12 = uVar14;
              }
              FVar13.Index = -1;
              if (uVar12 != 0) {
                uStack_30 = uVar12;
                pFVar5 = FTextKeyState::GetState();
                if (_Str == (FTextId)0x0) {
                  _Str.Namespace.Index = 0;
                  _Str.Key.Index = 0;
                  uVar12 = uVar15;
                }
                else {
                  if ((0 < (int)uVar12) &&
                     (*(short *)((FScriptContainerElement *)((longlong)_Str + -2) +
                                (longlong)(int)uVar12 * 2) == 0)) {
                    uVar12 = uVar12 - 1;
                  }
                  if (uVar12 == 0xffffffff) {
                    sVar6 = wcslen((wchar_t *)_Str);
                    uVar12 = (uint)sVar6;
                  }
                }
                uVar7 = CityHash64((char *)_Str,uVar12 * 2);
                FTextKeyState::FindOrAddImpl
                          (pFVar5,(TStringView<wchar_t> *)&local_38,
                           (int)(uVar7 >> 0x20) * 0x17 + (int)uVar7,(FTextKey *)&local_68);
                FVar13.Index = local_68.Namespace.Index;
              }
              _Str_00 = (FTextId)local_48.DataPtr;
              local_38 = (FTextId)local_48.DataPtr;
              local_68.Namespace.Index = 0xffffffff;
              uVar12 = local_48.Size - 1;
              if (local_48.Size == 0) {
                uVar12 = uVar14;
              }
              uStack_30 = uVar12;
              FVar11.Index = -1;
              if (uVar12 != 0) {
                pFVar5 = FTextKeyState::GetState();
                if (_Str_00 == (FTextId)0x0) {
                  _Str_00.Namespace.Index = 0;
                  _Str_00.Key.Index = 0;
                }
                else {
                  uVar15 = uVar12;
                  if ((0 < (int)uVar12) &&
                     (*(short *)((FScriptContainerElement *)((longlong)_Str_00 + -2) +
                                (longlong)(int)uVar12 * 2) == 0)) {
                    uVar15 = uVar12 - 1;
                  }
                  if (uVar15 == 0xffffffff) {
                    sVar6 = wcslen((wchar_t *)_Str_00);
                    uVar15 = (uint)sVar6;
                  }
                }
                uVar7 = CityHash64((char *)_Str_00,uVar15 * 2);
                FTextKeyState::FindOrAddImpl
                          (pFVar5,(TStringView<wchar_t> *)&local_38,
                           (int)(uVar7 >> 0x20) * 0x17 + (int)uVar7,(FTextKey *)&local_68);
                FVar11.Index = local_68.Namespace.Index;
              }
              local_68.Key.Index = FVar13.Index;
              local_68.Namespace.Index = FVar11.Index;
              this->TextId = local_68;
              UE::Text::Private::TDisplayStringPtr<FString_const_>::Reset(&this->LocalizedString);
              FTextHistory::MarkDisplayStringOutOfDate((FTextHistory *)this);
              pwVar16 = pwVar3;
            }
          }
          FVar10 = (FTextId)local_48.DataPtr;
          if ((FTextId)local_58.Data.AllocatorInstance.Data != (FTextId)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
            FVar10 = (FTextId)local_48.DataPtr;
          }
        }
LAB_14176fe68:
        if (FVar10 == (FTextId)0x0) {
          return pwVar16;
        }
        FMemory::Free((void *)FVar10);
        return pwVar16;
      }
    }
  }
  else {
    iVar2 = wcsncmp(param_1,*TextStringificationUtil::LocTextMarker,7);
    if (iVar2 == 0) {
      pwVar3 = param_1 + 7;
      wVar1 = param_1[7];
      while ((wVar1 != L'\0' && ((wVar1 == L' ' || (wVar1 == L'\t'))))) {
        pwVar9 = pwVar3 + 1;
        pwVar3 = pwVar3 + 1;
        wVar1 = *pwVar9;
      }
      if (*pwVar3 == L'(') {
        pwVar9 = pwVar3 + 1;
        if (pwVar3 == (wchar_t *)0x0) {
          pwVar9 = (wchar_t *)0x0;
        }
        if (pwVar9 != (wchar_t *)0x0) {
          wVar1 = *pwVar9;
          local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_58.Data.ArrayNum = 0;
          local_58.Data.ArrayMax = 0;
          while ((wVar1 != L'\0' && ((wVar1 == L' ' || (wVar1 == L'\t'))))) {
            pwVar3 = pwVar9 + 1;
            pwVar9 = pwVar9 + 1;
            wVar1 = *pwVar3;
          }
          pwVar3 = TextStringificationUtil::ReadQuotedStringFromBuffer(pwVar9,&local_58);
          FVar10 = (FTextId)local_58.Data.AllocatorInstance;
          if ((pwVar3 != (wchar_t *)0x0) &&
             (pwVar3 = TextStringificationUtil::SkipWhitespaceAndCharacter(pwVar3,L','),
             FVar10 = (FTextId)local_58.Data.AllocatorInstance, pwVar3 != (wchar_t *)0x0)) {
            wVar1 = *pwVar3;
            while ((wVar1 != L'\0' && ((wVar1 == L' ' || (wVar1 == L'\t'))))) {
              pwVar9 = pwVar3 + 1;
              pwVar3 = pwVar3 + 1;
              wVar1 = *pwVar9;
            }
            pwVar3 = TextStringificationUtil::ReadQuotedStringFromBuffer(pwVar3,&this->SourceString)
            ;
            FVar10 = (FTextId)local_58.Data.AllocatorInstance;
            if ((pwVar3 != (wchar_t *)0x0) &&
               (pwVar3 = TextStringificationUtil::SkipWhitespaceAndCharacter(pwVar3,L')'),
               FVar10 = (FTextId)local_58.Data.AllocatorInstance, pwVar3 != (wchar_t *)0x0)) {
              if (local_58.Data.ArrayNum < 2) {
                pFVar4 = FGuid::NewGuid((FGuid *)&local_68);
                local_48.DataPtr = (wchar_t *)0x0;
                local_48.Size = 0;
                local_48._12_4_ = 0;
                FGuid::AppendString(pFVar4,(FString *)&local_48,Digits);
                if ((FTextId)local_58.Data.AllocatorInstance.Data != (FTextId)0x0) {
                  FMemory::Free(local_58.Data.AllocatorInstance.Data);
                }
                local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_48.DataPtr;
                local_58.Data.ArrayNum = local_48.Size;
                local_58.Data.ArrayMax = local_48._12_4_;
              }
              bVar17 = param_2 == (wchar_t *)0x0;
              if (bVar17) {
                local_48.DataPtr = (wchar_t *)0x0;
                pTVar8 = &local_48;
                local_48.Size = 0;
                local_48._12_4_ = 0;
              }
              else {
                pTVar8 = (TStringView<wchar_t> *)::FString::FString((FString *)&local_68,param_2);
              }
              local_38 = (FTextId)(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar8->DataPtr)
                                  ->AllocatorInstance).Data;
              (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar8->DataPtr)->AllocatorInstance)
              .Data = (FScriptContainerElement *)0x0;
              uStack_30 = pTVar8->Size;
              _uStack_30 = *(undefined8 *)&pTVar8->Size;
              *(undefined8 *)&pTVar8->Size = 0;
              if ((bVar17) && ((FTextId)local_48.DataPtr != (FTextId)0x0)) {
                FMemory::Free(local_48.DataPtr);
              }
              if ((!bVar17) && (local_68 != (FTextId)0x0)) {
                FMemory::Free((void *)local_68);
              }
              TextNamespaceUtil::StripPackageNamespaceInline((FString *)&local_38);
              FVar10 = (FTextId)local_58.Data.AllocatorInstance;
              local_48.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
              local_68.Namespace.Index = 0xffffffff;
              uVar12 = local_58.Data.ArrayNum - 1;
              if (local_58.Data.ArrayNum == 0) {
                uVar12 = uVar14;
              }
              local_48._12_4_ = SUB84(_uStack_30,4);
              local_48.Size = uVar12;
              FVar13.Index = -1;
              if (uVar12 != 0) {
                pFVar5 = FTextKeyState::GetState();
                if (FVar10 == (FTextId)0x0) {
                  FVar10.Namespace.Index = 0;
                  FVar10.Key.Index = 0;
                  uVar12 = uVar15;
                }
                else {
                  if ((0 < (int)uVar12) &&
                     (*(short *)((FScriptContainerElement *)((longlong)FVar10 + -2) +
                                (longlong)(int)uVar12 * 2) == 0)) {
                    uVar12 = uVar12 - 1;
                  }
                  if (uVar12 == 0xffffffff) {
                    sVar6 = wcslen((wchar_t *)FVar10);
                    uVar12 = (uint)sVar6;
                  }
                }
                uVar7 = CityHash64((char *)FVar10,uVar12 * 2);
                FTextKeyState::FindOrAddImpl
                          (pFVar5,&local_48,(int)(uVar7 >> 0x20) * 0x17 + (int)uVar7,
                           (FTextKey *)&local_68);
                FVar13.Index = local_68.Namespace.Index;
              }
              _Str_01 = local_38;
              local_48.DataPtr = (wchar_t *)local_38;
              local_68.Namespace.Index = 0xffffffff;
              uVar12 = uStack_30 - 1;
              if (uStack_30 == 0) {
                uVar12 = uVar14;
              }
              local_48._12_4_ = SUB84(_uStack_30,4);
              local_48.Size = uVar12;
              FVar11.Index = -1;
              if (uVar12 != 0) {
                pFVar5 = FTextKeyState::GetState();
                if (_Str_01 == (FTextId)0x0) {
                  _Str_01.Namespace.Index = 0;
                  _Str_01.Key.Index = 0;
                }
                else {
                  uVar15 = uVar12;
                  if ((0 < (int)uVar12) &&
                     (*(short *)((FScriptContainerElement *)((longlong)_Str_01 + -2) +
                                (longlong)(int)uVar12 * 2) == 0)) {
                    uVar15 = uVar12 - 1;
                  }
                  if (uVar15 == 0xffffffff) {
                    sVar6 = wcslen((wchar_t *)_Str_01);
                    uVar15 = (uint)sVar6;
                  }
                }
                uVar7 = CityHash64((char *)_Str_01,uVar15 * 2);
                FTextKeyState::FindOrAddImpl
                          (pFVar5,&local_48,(int)(uVar7 >> 0x20) * 0x17 + (int)uVar7,
                           (FTextKey *)&local_68);
                FVar11.Index = local_68.Namespace.Index;
              }
              local_68.Key.Index = FVar13.Index;
              local_68.Namespace.Index = FVar11.Index;
              this->TextId = local_68;
              UE::Text::Private::TDisplayStringPtr<FString_const_>::Reset(&this->LocalizedString);
              FTextHistory::MarkDisplayStringOutOfDate((FTextHistory *)this);
              FVar10 = (FTextId)local_58.Data.AllocatorInstance;
              pwVar16 = pwVar3;
              if (local_38 != (FTextId)0x0) {
                FMemory::Free((void *)local_38);
                FVar10 = (FTextId)local_58.Data.AllocatorInstance;
              }
            }
          }
          goto LAB_14176fe68;
        }
      }
    }
  }
  return (wchar_t *)0x0;
}

// Serialize @ 14177adc0

void __thiscall
FTextHistory_Base::Serialize(FTextHistory_Base *this,FStructuredArchiveRecord param_1)

{
  FScriptContainerElement *pFVar1;
  FTextId FVar2;
  TRefCountPtr<UE::Text::Private::FRefCountedDisplayString> TVar3;
  FArchive *pFVar4;
  FTextKeyState *this_00;
  size_t sVar5;
  ulong64 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  ForAnyElementType FVar9;
  int iVar10;
  int iVar11;
  FSlotBase local_res10;
  TRefCountPtr<UE::Text::Private::FRefCountedDisplayString> local_res18;
  FSlotBase local_res20;
  FString local_58;
  FString local_48;
  TStringView<wchar_t> local_38;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar4 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  if ((pFVar4->field_0x28 & 1) != 0) {
    local_res20.StructuredArchive = local_res10.StructuredArchive;
    local_res18.Reference._0_4_ = 0xffffffff;
    UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_res20);
    pFVar4 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res20);
    FTextKey::SerializeAsString((FTextKey *)&local_res18,pFVar4);
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_res10.StructuredArchive;
    local_res20.StructuredArchive._0_4_ = 0xffffffff;
    UE::StructuredArchive::Private::FSlotBase::GetArchiveState((FSlotBase *)&local_58);
    pFVar4 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive((FSlotBase *)&local_58)
    ;
    FTextKey::SerializeAsString((FTextKey *)&local_res20,pFVar4);
    ::operator<<((local_res10.StructuredArchive)->Formatter->Inner,&this->SourceString);
    FVar2.Key.Index = local_res20.StructuredArchive._0_4_;
    FVar2.Namespace.Index = (int)local_res18.Reference;
    this->TextId = FVar2;
    local_res18.Reference = (FRefCountedDisplayString *)0x0;
    TRefCountPtr<UE::Text::Private::FRefCountedDisplayString>::operator=
              ((TRefCountPtr<UE::Text::Private::FRefCountedDisplayString> *)&this->LocalizedString,
               &local_res18);
    TVar3.Reference = local_res18.Reference;
    if (local_res18.Reference != (FRefCountedDisplayString *)0x0) {
      LOCK();
      lVar8 = (local_res18.Reference)->_padding_;
      *(int *)&(local_res18.Reference)->_padding_ = (int)(local_res18.Reference)->_padding_ + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        pFVar1 = ((local_res18.Reference)->DisplayString).Data.AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        ::operator_delete(TVar3.Reference,0x18);
      }
    }
    FTextHistory::MarkDisplayStringOutOfDate((FTextHistory *)this);
    return;
  }
  if ((pFVar4->field_0x28 & 4) != 0) {
    local_res18.Reference._0_4_ = (this->TextId).Namespace.Index;
    local_res20.StructuredArchive._0_4_ = (this->TextId).Key.Index;
    if ((*(longlong *)&pFVar4->field_0x68 != 0) &&
       (*(longlong *)(*(longlong *)&pFVar4->field_0x68 + 0x10) != 0)) {
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      FTextKey::AppendString((FTextKey *)&local_res18,&local_48);
      FVar9.Data = local_48.Data.AllocatorInstance.Data;
      lVar8 = (longlong)local_48.Data.ArrayNum;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = local_48.Data.ArrayNum;
      iVar11 = 0;
      if (local_48.Data.ArrayNum == 0) {
        local_58.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,
                   local_48.Data.ArrayNum,&local_58.Data.ArrayMax);
        memcpy(local_58.Data.AllocatorInstance.Data,FVar9.Data,lVar8 * 2);
      }
      TextNamespaceUtil::StripPackageNamespaceInline(&local_58);
      FVar9.Data = local_58.Data.AllocatorInstance.Data;
      local_38.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
      local_res18.Reference._0_4_ = 0xffffffff;
      iVar10 = local_58.Data.ArrayNum + -1;
      if (local_58.Data.ArrayNum == 0) {
        iVar10 = 0;
      }
      local_38.Size = iVar10;
      uVar7 = 0xffffffff;
      if (iVar10 != 0) {
        this_00 = FTextKeyState::GetState();
        if (FVar9.Data == (FScriptContainerElement *)0x0) {
          FVar9.Data = (FScriptContainerElement *)0x0;
        }
        else {
          iVar11 = iVar10;
          if ((0 < iVar10) && (*(short *)(FVar9.Data + (longlong)iVar10 * 2 + -2) == 0)) {
            iVar11 = iVar10 + -1;
          }
          if (iVar11 == -1) {
            sVar5 = wcslen((wchar_t *)FVar9.Data);
            iVar11 = (int)sVar5;
          }
        }
        uVar6 = CityHash64((char *)FVar9.Data,iVar11 * 2);
        FTextKeyState::FindOrAddImpl
                  (this_00,&local_38,(int)(uVar6 >> 0x20) * 0x17 + (int)uVar6,
                   (FTextKey *)&local_res18);
        uVar7 = (int)local_res18.Reference;
      }
      local_res18.Reference._0_4_ = uVar7;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_res10.StructuredArchive;
    UE::StructuredArchive::Private::FSlotBase::GetArchiveState((FSlotBase *)&local_58);
    pFVar4 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive((FSlotBase *)&local_58)
    ;
    FTextKey::SerializeAsString((FTextKey *)&local_res18,pFVar4);
    local_res18.Reference = (FRefCountedDisplayString *)local_res10.StructuredArchive;
    UE::StructuredArchive::Private::FSlotBase::GetArchiveState((FSlotBase *)&local_res18);
    pFVar4 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive
                       ((FSlotBase *)&local_res18);
    FTextKey::SerializeAsString((FTextKey *)&local_res20,pFVar4);
    ::operator<<((local_res10.StructuredArchive)->Formatter->Inner,&this->SourceString);
  }
  return;
}

// ShouldReadFromBuffer @ 14177e0b0

bool __thiscall FTextHistory_Base::ShouldReadFromBuffer(FTextHistory_Base *this,wchar_t *param_1)

{
  int iVar1;
  
  iVar1 = wcsncmp(param_1,*TextStringificationUtil::NsLocTextMarker,9);
  if (iVar1 != 0) {
    iVar1 = wcsncmp(param_1,*TextStringificationUtil::LocTextMarker,7);
    if (iVar1 != 0) {
      return false;
    }
  }
  return true;
}

// StaticShouldReadFromBuffer @ 14177eb30

bool __cdecl FTextHistory_Base::StaticShouldReadFromBuffer(wchar_t *param_1)

{
  int iVar1;
  
  iVar1 = wcsncmp(param_1,*TextStringificationUtil::NsLocTextMarker,9);
  if (iVar1 != 0) {
    iVar1 = wcsncmp(param_1,*TextStringificationUtil::LocTextMarker,7);
    if (iVar1 != 0) {
      return false;
    }
  }
  return true;
}

// UpdateDisplayString @ 141782100

void __thiscall FTextHistory_Base::UpdateDisplayString(FTextHistory_Base *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FTextLocalizationManager *this_00;
  TDisplayStringPtr<FString_const_> TVar4;
  TDisplayStringPtr<FString_const_> TVar5;
  FString local_res8;
  int *local_res18;
  undefined1 local_28 [16];
  
  if ((((this->TextId).Namespace.Index == -1) && ((this->TextId).Key.Index == -1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!TextId.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextHistory.cpp"
                         ,0x389,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TVar5 = (TDisplayStringPtr<FString_const_>)0x0;
  this_00 = FTextLocalizationManager::Get();
  local_res8.Data.AllocatorInstance.Data._0_4_ = (this->TextId).Key.Index;
  local_res8.Data.ArrayNum = (this->TextId).Namespace.Index;
  TVar4 = FTextLocalizationManager::GetDisplayString
                    (this_00,(FTextKey *)&local_res18,(FTextKey *)&local_res8.Data.ArrayNum,
                     &local_res8);
  if ((TDisplayStringPtr<FString_const_>)local_28 != TVar4) {
    TVar5 = *(TDisplayStringPtr<FString_const_> *)TVar4;
    *(undefined8 *)TVar4 = 0;
  }
  if (local_res18 != (int *)0x0) {
    LOCK();
    iVar1 = *local_res18;
    *local_res18 = *local_res18 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      if (*(void **)(local_res18 + 2) != (void *)0x0) {
        FMemory::Free(*(void **)(local_res18 + 2));
      }
      ::operator_delete(local_res18,0x18);
    }
  }
  TVar4 = this->LocalizedString;
  if (TVar4 != TVar5) {
    this->LocalizedString = TVar5;
    if (TVar5 != (TDisplayStringPtr<FString_const_>)0x0) {
      LOCK();
      *(int *)TVar5 = *(int *)TVar5 + 1;
      UNLOCK();
    }
    if (TVar4 != (TDisplayStringPtr<FString_const_>)0x0) {
      LOCK();
      iVar1 = *(int *)TVar4;
      *(int *)TVar4 = *(int *)TVar4 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        if (*(void **)((longlong)TVar4 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)TVar4 + 8));
        }
        ::operator_delete((void *)TVar4,0x18);
      }
    }
  }
  if (TVar5 != (TDisplayStringPtr<FString_const_>)0x0) {
    LOCK();
    iVar1 = *(int *)TVar5;
    *(int *)TVar5 = *(int *)TVar5 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      if (*(void **)((longlong)TVar5 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)TVar5 + 8));
      }
      ::operator_delete((void *)TVar5,0x18);
    }
  }
  return;
}

// WriteToBuffer @ 1417851c0

bool __thiscall
FTextHistory_Base::WriteToBuffer(FTextHistory_Base *this,FString *param_1,bool param_2)

{
  FScriptContainerElement *_Src;
  ForAnyElementType FVar1;
  longlong lVar2;
  int iVar3;
  FTextKey local_res8 [2];
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_res8[0].Index = (this->TextId).Namespace.Index;
  if ((local_res8[0].Index == -1) && ((this->TextId).Key.Index == -1)) {
    return false;
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FTextKey::AppendString(local_res8,&local_38);
  local_res8[0].Index = (this->TextId).Key.Index;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FTextKey::AppendString(local_res8,&local_28);
  if (param_2) {
    TextNamespaceUtil::StripPackageNamespaceInline(&local_38);
  }
  ::FString::AppendChars(param_1,L"NSLOCTEXT(\"",0xb);
  FVar1.Data = local_38.Data.AllocatorInstance.Data;
  lVar2 = (longlong)local_38.Data.ArrayNum;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = local_38.Data.ArrayNum;
  if (local_38.Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_38.Data.ArrayNum,
               &local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,FVar1.Data,lVar2 * 2);
  }
  ::FString::ReplaceCharWithEscapedCharInline
            (&local_48,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
  iVar3 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar3);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::AppendChars(param_1,L"\", \"",4);
  FVar1.Data = local_28.Data.AllocatorInstance.Data;
  lVar2 = (longlong)local_28.Data.ArrayNum;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = local_28.Data.ArrayNum;
  if (local_28.Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_28.Data.ArrayNum,
               &local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,FVar1.Data,lVar2 * 2);
  }
  ::FString::ReplaceCharWithEscapedCharInline
            (&local_48,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
  iVar3 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar3);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::AppendChars(param_1,L"\", \"",4);
  local_48.Data.ArrayNum = (this->SourceString).Data.ArrayNum;
  lVar2 = (longlong)local_48.Data.ArrayNum;
  _Src = (this->SourceString).Data.AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_48.Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_48.Data.ArrayNum,
               &local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  ::FString::ReplaceCharWithEscapedCharInline
            (&local_48,(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)0x0);
  iVar3 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar3);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::AppendChars(param_1,L"\")",2);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return true;
}

