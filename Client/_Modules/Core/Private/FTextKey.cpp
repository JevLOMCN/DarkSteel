// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 17

// FTextKey @ 141737660

FTextKey * __thiscall FTextKey::FTextKey(FTextKey *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  local_18.Size = iVar2;
  FTextKey(this,&local_18);
  return this;
}

// FTextKey @ 1417376b0

FTextKey * __thiscall FTextKey::FTextKey(FTextKey *this,wchar_t *param_1)

{
  size_t sVar1;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 0;
  local_18.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_1);
    local_18.Size = (int)sVar1;
  }
  FTextKey(this,&local_18);
  return this;
}

// FTextKey @ 141737700

FTextKey * __thiscall FTextKey::FTextKey(FTextKey *this,TStringView<wchar_t> *param_1)

{
  code *pcVar1;
  wchar_t *_Str;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  FTextKeyState *this_00;
  FTextKey *pFVar5;
  ulong64 uVar7;
  TStringView<wchar_t> local_28 [2];
  size_t sVar6;
  
  iVar4 = param_1->Size;
  this->Index = -1;
  if (iVar4 != 0) {
    this_00 = FTextKeyState::GetState();
    _Str = param_1->DataPtr;
    uVar2._0_4_ = param_1->Size;
    uVar2._4_4_ = *(undefined4 *)&param_1->field_0xc;
    iVar4 = param_1->Size;
    if (iVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InStr.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextKey.cpp"
                         ,0x89,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FTextKey *)(*pcVar1)();
        return pFVar5;
      }
    }
    if (_Str == (wchar_t *)0x0) {
      iVar4 = 0;
    }
    else {
      if ((0 < iVar4) && (_Str[(longlong)iVar4 + -1] == L'\0')) {
        iVar4 = iVar4 + -1;
      }
      if (iVar4 == -1) {
        sVar6 = wcslen(_Str);
        iVar4 = (int)sVar6;
      }
    }
    uVar7 = CityHash64((char *)_Str,iVar4 * 2);
    local_28[0].DataPtr = _Str;
    local_28[0]._8_8_ = uVar2;
    FTextKeyState::FindOrAddImpl(this_00,local_28,(int)(uVar7 >> 0x20) * 0x17 + (int)uVar7,this);
  }
  return this;
}

// AppendString @ 141744370

void __thiscall FTextKey::AppendString(FTextKey *this,TStringBuilderBase<wchar_t> *param_1)

{
  int iVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FTextKeyState *SRWLock;
  FKeyData *pFVar6;
  wchar_t *pwVar7;
  
  if (this->Index != -1) {
    SRWLock = FTextKeyState::GetState();
    iVar1 = this->Index;
    if ((iVar1 == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextKey.cpp"
                           ,0xea,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((SRWLock == (FTextKeyState *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x1c,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    pFVar6 = TChunkedPackedArray<FTextKeyState::FKeyData,16>::Get
                       (&(SRWLock->KeyDataAllocations).Elements,iVar1);
    iVar1 = pFVar6->StrLen;
    if (iVar1 < 0) {
      if ((iVar1 != -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsGuid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextKey.cpp"
                             ,0x157,L"AsGuid called on a FKeyData that doesn\'t reference a GUID!"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FGuid::AppendString(pFVar6->DataPtr,param_1,Digits);
    }
    else {
      puVar2 = pFVar6->DataPtr;
      iVar5 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,puVar2,iVar1);
      if (param_1->End < param_1->CurPos + iVar5) {
        TStringBuilderBase<wchar_t>::Extend(param_1,(longlong)iVar5);
      }
      if (iVar1 != 0) {
        pwVar7 = UE::Core::Private::Convert(param_1->CurPos,iVar5,puVar2,iVar1);
        param_1->CurPos = pwVar7;
      }
    }
    if (SRWLock != (FTextKeyState *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
  }
  return;
}

// AppendString @ 1417444d0

void __thiscall FTextKey::AppendString(FTextKey *this,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FTextKeyState *SRWLock;
  FKeyData *pFVar4;
  
  if (this->Index != -1) {
    SRWLock = FTextKeyState::GetState();
    iVar1 = this->Index;
    if ((iVar1 == -1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextKey.cpp"
                           ,0xd9,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((SRWLock == (FTextKeyState *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x1c,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    pFVar4 = TChunkedPackedArray<FTextKeyState::FKeyData,16>::Get
                       (&(SRWLock->KeyDataAllocations).Elements,iVar1);
    iVar1 = pFVar4->StrLen;
    if (iVar1 < 0) {
      if ((iVar1 != -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsGuid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextKey.cpp"
                             ,0x157,L"AsGuid called on a FKeyData that doesn\'t reference a GUID!"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FGuid::AppendString(pFVar4->DataPtr,param_1,Digits);
    }
    else {
      ::FString::AppendChars(param_1,pFVar4->DataPtr,iVar1);
    }
    if (SRWLock != (FTextKeyState *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
  }
  return;
}

// CompactDataStructures @ 14174c5b0

void __cdecl FTextKey::CompactDataStructures(void)

{
  code *pcVar1;
  bool bVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TLazySingleton<class_FTextKeyState>&___ptr64___cdecl_TLazySingleton<FTextKeyState>::GetLazy(void_(__cdecl*)(void*___ptr64))'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TLazySingleton<class_FTextKeyState>&___ptr64___cdecl_TLazySingleton<FTextKeyState>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TLazySingleton<class_FTextKeyState>&___ptr64___cdecl_TLazySingleton<FTextKeyState>::GetLazy(void_(__cdecl*)(void*___ptr64))'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FLazySingleton::Construct<FTextKeyState>
              (&`private:_static_class_TLazySingleton<class_FTextKeyState>&___ptr64___cdecl_TLazySingleton<FTextKeyState>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                ::__l2::Singleton);
    DAT_154eb52a0 =
         &`private:_static_class_TLazySingleton<class_FTextKeyState>&___ptr64___cdecl_TLazySingleton<FTextKeyState>::GetLazy(void_(__cdecl*)(void*___ptr64))'
          ::__l2::Singleton;
    atexit(`TLazySingleton<FTextKeyState>::GetLazy'::__l2::
           _dynamic_atexit_destructor_for__Singleton__);
    _Init_thread_footer(&`private:_static_class_TLazySingleton<class_FTextKeyState>&___ptr64___cdecl_TLazySingleton<FTextKeyState>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((DAT_154eb52a0 == (TLazySingleton<class_FTextKeyState> *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                         ,0x6d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetChars @ 14175baf0

wchar_t * __thiscall FTextKey::GetChars(FTextKey *this)

{
  FTextKeyState *this_00;
  wchar_t *pwVar1;
  
  if (this->Index != -1) {
    this_00 = FTextKeyState::GetState();
    pwVar1 = FTextKeyState::GetLegacyTCHARPointerByIndex(this_00,this->Index);
    return pwVar1;
  }
  return L"";
}

// SerializeAsString @ 14177c1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FTextKey::SerializeAsString(FTextKey *this,FArchive *param_1)

{
  FTextKeyState *this_00;
  undefined1 auStack_168 [32];
  TStringView<wchar_t> local_148;
  undefined1 local_138 [16];
  wchar_t *local_128;
  undefined2 local_120;
  wchar_t local_118 [112];
  ForElementType<wchar_t> local_38;
  int local_30;
  int local_2c;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_168;
  if ((param_1->field_0x28 & 1) == 0) {
    local_138._0_8_ = local_118;
    local_120._0_1_ = false;
    local_120._1_1_ = false;
    local_138._8_8_ = local_118;
    local_128 = (wchar_t *)local_18;
    AppendString(this,(TStringBuilderBase<wchar_t> *)local_138);
    if (local_128 < (wchar_t *)(local_138._8_8_ + 2)) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)local_138,1);
    }
    *(wchar_t *)local_138._8_8_ = L'\0';
    TextKeyUtil::SaveKeyString(param_1,(wchar_t *)local_138._0_8_);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_138);
  }
  else {
    local_2c = 0x80;
    local_38 = (ForElementType<wchar_t>)0x0;
    local_30 = 0;
    TextKeyUtil::LoadKeyString
              (param_1,(TArray<wchar_t,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> *
                       )local_138);
    if (local_30 < 2) {
      this->Index = -1;
    }
    else {
      this_00 = FTextKeyState::GetState();
      local_148.DataPtr = (wchar_t *)local_138;
      if (local_38 != (ForElementType<wchar_t>)0x0) {
        local_148.DataPtr = (wchar_t *)local_38;
      }
      local_148.Size = local_30 + -1;
      FTextKeyState::FindOrAdd(this_00,&local_148,this);
    }
    if (local_38 != (ForElementType<wchar_t>)0x0) {
      FMemory::Free((void *)local_38);
    }
  }
  return;
}

// SerializeAsString @ 14177c300

void __thiscall FTextKey::SerializeAsString(FTextKey *this,FStructuredArchiveSlot param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  UE::StructuredArchive::Private::FSlotBase::GetArchiveState(local_res10);
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  SerializeAsString(this,pFVar1);
  return;
}

// SerializeDiscardHash @ 14177c340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FTextKey::SerializeDiscardHash(FTextKey *this,FArchive *param_1)

{
  longlong *plVar1;
  FTextKeyState *this_00;
  undefined1 auStack_188 [32];
  uint local_168 [4];
  TStringView<wchar_t> local_158;
  undefined1 local_148 [16];
  wchar_t *local_138;
  undefined2 local_130;
  wchar_t local_128 [112];
  ForElementType<wchar_t> local_48;
  int local_40;
  int local_3c;
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_188;
  if ((param_1->field_0x28 & 1) == 0) {
    local_168[0] = ::GetTypeHash(this);
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_168,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_168);
      }
    }
    else {
      local_168[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    local_148._0_8_ = local_128;
    local_130._0_1_ = false;
    local_130._1_1_ = false;
    local_148._8_8_ = local_128;
    local_138 = (wchar_t *)local_28;
    AppendString(this,(TStringBuilderBase<wchar_t> *)local_148);
    if (local_138 < (wchar_t *)(local_148._8_8_ + 2)) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)local_148,1);
    }
    *(wchar_t *)local_148._8_8_ = L'\0';
    TextKeyUtil::SaveKeyString(param_1,(wchar_t *)local_148._0_8_);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)local_148);
  }
  else {
    plVar1 = *(longlong **)&param_1->field_0x8;
    local_168[0] = 0;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_168,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_168);
      }
    }
    else {
      local_168[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    local_48 = (ForElementType<wchar_t>)0x0;
    local_40 = 0;
    local_3c = 0x80;
    TextKeyUtil::LoadKeyString
              (param_1,(TArray<wchar_t,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> *
                       )local_148);
    if (local_40 < 2) {
      this->Index = -1;
    }
    else {
      this_00 = FTextKeyState::GetState();
      local_158.DataPtr = (wchar_t *)local_148;
      if (local_48 != (ForElementType<wchar_t>)0x0) {
        local_158.DataPtr = (wchar_t *)local_48;
      }
      local_158.Size = local_40 + -1;
      FTextKeyState::FindOrAdd(this_00,&local_158,this);
    }
    if (local_48 != (ForElementType<wchar_t>)0x0) {
      FMemory::Free((void *)local_48);
    }
  }
  return;
}

// SerializeDiscardHash @ 14177c520

void __thiscall FTextKey::SerializeDiscardHash(FTextKey *this,FStructuredArchiveSlot param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  UE::StructuredArchive::Private::FSlotBase::GetArchiveState(local_res10);
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  SerializeDiscardHash(this,pFVar1);
  return;
}

// SerializeWithHash @ 14177cdc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FTextKey::SerializeWithHash(FTextKey *this,FArchive *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  FTextKeyState *this_00;
  undefined1 auStack_2b8 [32];
  uint local_298;
  uint local_294 [3];
  ForElementType<wchar_t> local_288;
  int iStack_280;
  undefined4 uStack_27c;
  TStringView<wchar_t> local_278;
  undefined4 local_25c;
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [128];
  TArray<wchar_t,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> local_138;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  if ((param_1->field_0x28 & 1) == 0) {
    local_294[0] = ::GetTypeHash(this);
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_294,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_294);
      }
    }
    else {
      local_294[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    local_258.Base = local_238;
    local_258.bIsDynamic = false;
    local_258.bIsExternal = false;
    local_258.CurPos = local_238;
    local_258.End = (wchar_t *)&local_138;
    AppendString(this,&local_258);
    if (local_258.End <
        (TArray<wchar_t,TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>_> *)
        (local_258.CurPos + 1)) {
      TStringBuilderBase<wchar_t>::Extend(&local_258,1);
    }
    *local_258.CurPos = L'\0';
    TextKeyUtil::SaveKeyString(param_1,local_258.Base);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  }
  else {
    plVar1 = *(longlong **)&param_1->field_0x8;
    local_298 = 0;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_298,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_298);
      }
    }
    else {
      local_298 = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    local_138.AllocatorInstance.SecondaryData = (ForElementType<wchar_t>)0x0;
    local_138.ArrayNum = 0;
    local_138.ArrayMax = 0x80;
    TextKeyUtil::LoadKeyString(param_1,&local_138);
    if (local_138.ArrayNum < 2) {
      this->Index = -1;
    }
    else {
      this_00 = FTextKeyState::GetState();
      uVar3 = local_298;
      local_288 = (ForElementType<wchar_t>)&local_138;
      if (local_138.AllocatorInstance.SecondaryData != (ForElementType<wchar_t>)0x0) {
        local_288 = local_138.AllocatorInstance.SecondaryData;
      }
      iStack_280 = local_138.ArrayNum + -1;
      uStack_27c = local_25c;
      if (iStack_280 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InStr.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextKey.cpp"
                           ,0x98,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_278._12_4_ = uStack_27c;
      local_278.Size = iStack_280;
      local_278.DataPtr = (wchar_t *)local_288;
      FTextKeyState::FindOrAddImpl(this_00,&local_278,uVar3,this);
    }
    if (local_138.AllocatorInstance.SecondaryData != (ForElementType<wchar_t>)0x0) {
      FMemory::Free((void *)local_138.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// SerializeWithHash @ 14177d000

void __thiscall FTextKey::SerializeWithHash(FTextKey *this,FStructuredArchiveSlot param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  UE::StructuredArchive::Private::FSlotBase::GetArchiveState(local_res10);
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  SerializeWithHash(this,pFVar1);
  return;
}

// TearDown @ 14177ee00

void __cdecl FTextKey::TearDown(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TLazySingleton<class_FTextKeyState>&___ptr64___cdecl_TLazySingleton<FTextKeyState>::GetLazy(void_(__cdecl*)(void*___ptr64))'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLazySingleton<class_FTextKeyState>&___ptr64___cdecl_TLazySingleton<FTextKeyState>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLazySingleton<class_FTextKeyState>&___ptr64___cdecl_TLazySingleton<FTextKeyState>::GetLazy(void_(__cdecl*)(void*___ptr64))'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      DAT_154eb52a0 = 0;
      atexit(`TLazySingleton<FTextKeyState>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<class_FTextKeyState>&___ptr64___cdecl_TLazySingleton<FTextKeyState>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  TLazySingleton<FTextKeyState>::Reset
            ((TLazySingleton<FTextKeyState> *)
             &`private:_static_class_TLazySingleton<class_FTextKeyState>&___ptr64___cdecl_TLazySingleton<FTextKeyState>::GetLazy(void_(__cdecl*)(void*___ptr64))'
              ::__l2::Singleton);
  return;
}

// ToString @ 14177f8c0

FString * __thiscall FTextKey::ToString(FTextKey *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  AppendString(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToString @ 14177f8f0

void __thiscall FTextKey::ToString(FTextKey *this,TStringBuilderBase<wchar_t> *param_1)

{
  param_1->CurPos = param_1->Base;
  AppendString(this,param_1);
  return;
}

// ToString @ 14177f910

void __thiscall FTextKey::ToString(FTextKey *this,FString *param_1)

{
  ::FString::Reset(param_1,0);
  AppendString(this,param_1);
  return;
}

