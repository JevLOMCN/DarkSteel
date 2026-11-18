// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 24

// FPolyglotTextData @ 141734c20

FPolyglotTextData * __thiscall
FPolyglotTextData::FPolyglotTextData
          (FPolyglotTextData *this,ELocalizedTextSourceCategory *param_1,FString *param_2,
          FString *param_3,FString *param_4,FString *param_5)

{
  ITextData *pIVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  FPolyglotTextData *pFVar5;
  undefined1 local_res8 [8];
  
  this->Category = *param_1;
  ::FString::FString(&this->NativeCulture,param_5);
  ::FString::FString(&this->Namespace,param_2);
  ::FString::FString(&this->Key,param_3);
  ::FString::FString(&this->NativeString,param_4);
  *(undefined8 *)&this->LocalizedStrings = 0;
  *(undefined8 *)&(this->LocalizedStrings).field_0x8 = 0;
  *(undefined8 *)&(this->LocalizedStrings).field_0x20 = 0;
  *(undefined4 *)&(this->LocalizedStrings).field_0x28 = 0;
  *(undefined4 *)&(this->LocalizedStrings).field_0x2c = 0x80;
  *(undefined4 *)&(this->LocalizedStrings).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LocalizedStrings).field_0x34 = 0;
  *(undefined8 *)&(this->LocalizedStrings).field_0x40 = 0;
  *(undefined4 *)&(this->LocalizedStrings).field_0x48 = 0;
  this->bIsMinimalPatch = false;
  pFVar4 = FText::GetEmpty();
  (this->CachedText).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (pFVar4->TextData).Reference;
  (this->CachedText).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->CachedText).Flags = 0;
  if (((this->Key).Data.ArrayNum < 2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Key.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\PolyglotTextData.cpp"
                         ,0x14,
                         L"Polyglot data cannot have an empty key! (Namespace: \'%s\', Key: \'%s\', Native String: \'%s\')"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FPolyglotTextData *)(*pcVar2)();
    return pFVar5;
  }
  if (((this->NativeString).Data.ArrayNum < 2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!NativeString.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\PolyglotTextData.cpp"
                         ,0x15,
                         L"Polyglot data cannot have an empty native string! (Namespace: \'%s\', Key: \'%s\', Native String: \'%s\')"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FPolyglotTextData *)(*pcVar2)();
    return pFVar5;
  }
  return this;
}

// ~FPolyglotTextData @ 141739320

void __thiscall FPolyglotTextData::~FPolyglotTextData(FPolyglotTextData *this)

{
  ITextData *pIVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  
  pIVar1 = (this->CachedText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  *(undefined4 *)&(this->LocalizedStrings).field_0x48 = 0;
  pvVar2 = *(void **)&(this->LocalizedStrings).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LocalizedStrings);
  pFVar3 = (this->NativeString).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Key).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Namespace).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->NativeCulture).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// AddLocalizedString @ 141742a10

void __thiscall
FPolyglotTextData::AddLocalizedString(FPolyglotTextData *this,FString *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *local_18;
  FString *local_10;
  
  if ((param_1->Data).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InCulture.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\PolyglotTextData.cpp"
                       ,0x85,L"Culture name cannot be empty!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)&this->LocalizedStrings,
             (TPairInitializer<FString_const_&,FString_const_&> *)&stack0x00000008,(bool *)&local_18
            );
  return;
}

// CacheText @ 14174ac60

void __thiscall FPolyglotTextData::CacheText(FPolyglotTextData *this,FText *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FText *pFVar4;
  FTextLocalizationManager *this_00;
  FTextKeyState *pFVar5;
  size_t sVar6;
  ulong64 uVar7;
  int iVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  FTextKey local_res8 [2];
  FTextKey local_res18 [2];
  undefined4 uStack_8c;
  FText local_88;
  FText local_78;
  TArrayView<FPolyglotTextData_const_,int> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  undefined4 local_2c;
  undefined4 local_1c;
  
  if ((this->Key).Data.ArrayNum < 2) {
    if (param_1 != (FText *)0x0) {
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         (&local_88,L"PolyglotTextData",L"ValidationError_NoKey",
                          L"Polyglot data has no key set");
      FText::operator=(param_1,pFVar4);
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
        ClearCache(this);
        return;
      }
    }
  }
  else if ((this->NativeString).Data.ArrayNum < 2) {
    if (param_1 != (FText *)0x0) {
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         (&local_78,L"PolyglotTextData",L"ValidationError_NoNativeString",
                          L"Polyglot data has no native string set");
      FText::operator=(param_1,pFVar4);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
        ClearCache(this);
        return;
      }
    }
  }
  else {
    this_00 = FTextLocalizationManager::Get();
    if (((this_00->PolyglotTextSource).Object == (FPolyglotTextSource *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("PolyglotTextSource.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextLocalizationManager.cpp"
                           ,0x39d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_68._12_4_ = uStack_8c;
    local_68.ArrayNum = 1;
    local_68.DataPtr = this;
    FTextLocalizationManager::RegisterPolyglotTextData(this_00,&local_68,true);
    iVar9 = (this->Key).Data.ArrayNum;
    pFVar1 = (this->Key).Data.AllocatorInstance.Data;
    local_res8[0].Index = -1;
    iVar11 = 0;
    iVar8 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar8 = 0;
    }
    if (iVar8 != 0) {
      pFVar5 = FTextKeyState::GetState();
      if (pFVar1 == (FScriptContainerElement *)0x0) {
        pFVar10 = (FScriptContainerElement *)0x0;
        iVar9 = iVar11;
      }
      else {
        iVar9 = iVar8;
        if ((0 < iVar8) && (*(short *)(pFVar1 + ((longlong)iVar8 + -1) * 2) == 0)) {
          iVar9 = iVar8 + -1;
        }
        pFVar10 = pFVar1;
        if (iVar9 == -1) {
          sVar6 = wcslen((wchar_t *)pFVar1);
          iVar9 = (int)sVar6;
        }
      }
      uVar7 = CityHash64((char *)pFVar10,iVar9 * 2);
      local_58._12_4_ = local_2c;
      local_58.Size = iVar8;
      local_58.DataPtr = (wchar_t *)pFVar1;
      FTextKeyState::FindOrAddImpl
                (pFVar5,&local_58,(int)(uVar7 >> 0x20) * 0x17 + (int)uVar7,local_res8);
    }
    iVar9 = (this->Namespace).Data.ArrayNum;
    pFVar1 = (this->Namespace).Data.AllocatorInstance.Data;
    local_res18[0].Index = -1;
    iVar8 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar8 = 0;
    }
    if (iVar8 != 0) {
      pFVar5 = FTextKeyState::GetState();
      if (pFVar1 == (FScriptContainerElement *)0x0) {
        pFVar10 = (FScriptContainerElement *)0x0;
      }
      else {
        iVar11 = iVar8;
        if ((0 < iVar8) && (*(short *)(pFVar1 + ((longlong)iVar8 + -1) * 2) == 0)) {
          iVar11 = iVar8 + -1;
        }
        pFVar10 = pFVar1;
        if (iVar11 == -1) {
          sVar6 = wcslen((wchar_t *)pFVar1);
          iVar11 = (int)sVar6;
        }
      }
      uVar7 = CityHash64((char *)pFVar10,iVar11 * 2);
      local_48._12_4_ = local_1c;
      local_48.Size = iVar8;
      local_48.DataPtr = (wchar_t *)pFVar1;
      FTextKeyState::FindOrAddImpl
                (pFVar5,&local_48,(int)(uVar7 >> 0x20) * 0x17 + (int)uVar7,local_res18);
    }
    bVar3 = FText::FindTextInLiveTable_Advanced
                      (local_res18,local_res8,&this->CachedText,&this->NativeString);
    if (bVar3) {
      return;
    }
  }
  ClearCache(this);
  return;
}

// ClearCache @ 14174b7f0

void __thiscall FPolyglotTextData::ClearCache(FPolyglotTextData *this)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  uint uVar3;
  FText *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = FText::GetEmpty();
  pIVar1 = (this->CachedText).TextData.Reference;
  pIVar2 = (pFVar4->TextData).Reference;
  if (pIVar1 == pIVar2) {
    uVar3 = pFVar4->Flags;
  }
  else {
    (this->CachedText).TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
    uVar3 = pFVar4->Flags;
  }
  (this->CachedText).Flags = uVar3;
  return;
}

// ClearLocalizedStrings @ 14174b870

void __thiscall FPolyglotTextData::ClearLocalizedStrings(FPolyglotTextData *this)

{
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
           *)&this->LocalizedStrings);
  return;
}

// GetCategory @ 14175bae0

ELocalizedTextSourceCategory __thiscall FPolyglotTextData::GetCategory(FPolyglotTextData *this)

{
  return this->Category;
}

// GetIdentity @ 14175e510

void __thiscall
FPolyglotTextData::GetIdentity(FPolyglotTextData *this,FString *param_1,FString *param_2)

{
  ::FString::operator=(param_1,&this->Namespace);
  ::FString::operator=(param_2,&this->Key);
  return;
}

// GetKey @ 14175e5d0

FString * __thiscall FPolyglotTextData::GetKey(FPolyglotTextData *this)

{
  return &this->Key;
}

// GetLocalizedCultures @ 14175f620

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FPolyglotTextData::GetLocalizedCultures
          (FPolyglotTextData *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FIdentityFunctor local_res8 [32];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&this->LocalizedStrings,__return_storage_ptr__);
  AlgoImpl::
  IntroSortInternal<FString,int,FIdentityFunctor,TDereferenceWrapper<FString,TLess<void>_>_>
            ((FString *)(__return_storage_ptr__->AllocatorInstance).Data,
             __return_storage_ptr__->ArrayNum,local_res8[0],(TLess<void> *)local_res8);
  return __return_storage_ptr__;
}

// GetLocalizedString @ 14175f660

bool __thiscall
FPolyglotTextData::GetLocalizedString(FPolyglotTextData *this,FString *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FString *pFVar4;
  
  if ((param_1->Data).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InCulture.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\PolyglotTextData.cpp"
                       ,0x93,L"Culture name cannot be empty!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pFVar4 = TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           ::Find((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                   *)&this->LocalizedStrings,param_1);
  if (pFVar4 != (FString *)0x0) {
    ::FString::operator=(param_2,pFVar4);
    return true;
  }
  return false;
}

// GetNamespace @ 14175fbf0

FString * __thiscall FPolyglotTextData::GetNamespace(FPolyglotTextData *this)

{
  return &this->Namespace;
}

// GetNativeCulture @ 14175fd20

FString * __thiscall FPolyglotTextData::GetNativeCulture(FPolyglotTextData *this)

{
  return &this->NativeCulture;
}

// GetNativeString @ 141760630

FString * __thiscall FPolyglotTextData::GetNativeString(FPolyglotTextData *this)

{
  return &this->NativeString;
}

// GetText @ 1417615d0

FText * __thiscall FPolyglotTextData::GetText(FPolyglotTextData *this,FText *__return_storage_ptr__)

{
  ITextData *pIVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  
  FText::Rebuild(&this->CachedText);
  lVar2 = (**(code **)((longlong)*(this->CachedText).TextData.Reference + 0x28))();
  if (*(int *)(lVar2 + 8) < 2) {
    CacheText(this,(FText *)0x0);
  }
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar1 = (this->CachedText).TextData.Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  __return_storage_ptr__->Flags = (this->CachedText).Flags;
  return __return_storage_ptr__;
}

// IsMinimalPatch @ 141766f90

void __thiscall FPolyglotTextData::IsMinimalPatch(FPolyglotTextData *this,bool param_1)

{
  this->bIsMinimalPatch = param_1;
  return;
}

// IsMinimalPatch @ 141766fa0

bool __thiscall FPolyglotTextData::IsMinimalPatch(FPolyglotTextData *this)

{
  return this->bIsMinimalPatch;
}

// IsValid @ 1417670e0

bool __thiscall FPolyglotTextData::IsValid(FPolyglotTextData *this,FText *param_1)

{
  FText *pFVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  FText local_18;
  
  if ((this->Key).Data.ArrayNum < 2) {
    if (param_1 == (FText *)0x0) {
      return false;
    }
    pwVar3 = L"Polyglot data has no key set";
    pwVar2 = L"ValidationError_NoKey";
  }
  else {
    if (1 < (this->NativeString).Data.ArrayNum) {
      return true;
    }
    if (param_1 == (FText *)0x0) {
      return false;
    }
    pwVar3 = L"Polyglot data has no native string set";
    pwVar2 = L"ValidationError_NoNativeString";
  }
  pFVar1 = FText::AsLocalizable_Advanced_LocText(&local_18,L"PolyglotTextData",pwVar2,pwVar3);
  FText::operator=(param_1,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return false;
}

// RemoveLocalizedString @ 141776c40

void __thiscall FPolyglotTextData::RemoveLocalizedString(FPolyglotTextData *this,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  
  if (((param_1->Data).ArrayNum < 2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InCulture.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\PolyglotTextData.cpp"
                         ,0x8c,L"Culture name cannot be empty!"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(int *)&(this->LocalizedStrings).field_0x8 != *(int *)&(this->LocalizedStrings).field_0x34) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar6 = L"";
      iVar5 = 0;
    }
    else {
      pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::RemoveImpl<FString>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&this->LocalizedStrings,uVar4,param_1);
  }
  return;
}

// ResolveNativeCulture @ 1417778f0

FString * __thiscall
FPolyglotTextData::ResolveNativeCulture(FPolyglotTextData *this,FString *__return_storage_ptr__)

{
  FString local_18;
  
  if (1 < (this->NativeCulture).Data.ArrayNum) {
    ::FString::FString(__return_storage_ptr__,&this->NativeCulture);
    return __return_storage_ptr__;
  }
  TextLocalizationResourceUtil::GetNativeCultureName(&local_18,this->Category);
  if (local_18.Data.ArrayNum < 2) {
    ::FString::operator=(&local_18,L"en");
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayMax = local_18.Data.ArrayMax;
  (__return_storage_ptr__->Data).ArrayNum = local_18.Data.ArrayNum;
  return __return_storage_ptr__;
}

// SetCategory @ 14177d090

void __thiscall
FPolyglotTextData::SetCategory(FPolyglotTextData *this,ELocalizedTextSourceCategory param_1)

{
  ClearCache(this);
  this->Category = param_1;
  return;
}

// SetIdentity @ 14177d1a0

void __thiscall
FPolyglotTextData::SetIdentity(FPolyglotTextData *this,FString *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_2->Data).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InKey.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\PolyglotTextData.cpp"
                       ,0x5f,L"Polyglot data cannot have an empty key!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ClearCache(this);
  ::FString::operator=(&this->Namespace,param_1);
  ::FString::operator=(&this->Key,param_2);
  return;
}

// SetNativeCulture @ 14177d930

void __thiscall FPolyglotTextData::SetNativeCulture(FPolyglotTextData *this,FString *param_1)

{
  ClearCache(this);
  ::FString::operator=(&this->NativeCulture,param_1);
  return;
}

// SetNativeString @ 14177d970

void __thiscall FPolyglotTextData::SetNativeString(FPolyglotTextData *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((param_1->Data).ArrayNum < 2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InNativeString.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\PolyglotTextData.cpp"
                       ,0x78,L"Polyglot data cannot have an empty native string!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ClearCache(this);
  ::FString::operator=(&this->NativeString,param_1);
  return;
}

