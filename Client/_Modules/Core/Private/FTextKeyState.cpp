// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// FindOrAdd @ 141757780

void __thiscall
FTextKeyState::FindOrAdd(FTextKeyState *this,TStringView<wchar_t> *param_1,FTextKey *param_2)

{
  wchar_t *_Str;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulong64 uVar5;
  TStringView<wchar_t> local_18;
  size_t sVar4;
  
  if ((param_1->Size == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InStr.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextKey.cpp"
                         ,0x89,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  _Str = param_1->DataPtr;
  iVar3 = (int)*(undefined8 *)&param_1->Size;
  if (_Str == (wchar_t *)0x0) {
    iVar3 = 0;
  }
  else {
    if ((0 < iVar3) && (_Str[(longlong)iVar3 + -1] == L'\0')) {
      iVar3 = iVar3 + -1;
    }
    if (iVar3 == -1) {
      sVar4 = wcslen(_Str);
      iVar3 = (int)sVar4;
    }
  }
  uVar5 = CityHash64((char *)_Str,iVar3 * 2);
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FindOrAddImpl(this,&local_18,(int)(uVar5 >> 0x20) * 0x17 + (int)uVar5,param_2);
  return;
}

// FindOrAddData @ 141757850

int __thiscall FTextKeyState::FindOrAddData(FTextKeyState *this,FKeyDataView *param_1)

{
  uint uVar1;
  void *_Src;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  FKeyData *pFVar6;
  FLinearAllocator *pFVar7;
  void *_Dst;
  FGuid *pFVar8;
  undefined8 *puVar9;
  uint uVar10;
  FLLMScope local_res8 [2];
  FMemScope local_res18;
  
  if (this == (FTextKeyState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x1c,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)this);
  iVar5 = FKeyDataAllocator::Find(&this->KeyDataAllocations,param_1);
  if (iVar5 != -1) {
    if (this != (FTextKeyState *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)this);
    }
    return iVar5;
  }
  uVar10 = (this->KeyDataAllocations).Elements.Count;
  ReleaseSRWLockShared((PSRWLOCK)this);
  AcquireSRWLockExclusive((PSRWLOCK)this);
  if ((int)uVar10 < (int)(this->KeyDataAllocations).Elements.Count) {
    iVar5 = FKeyDataAllocator::Find(&this->KeyDataAllocations,param_1);
    if (iVar5 != -1) goto LAB_141757a70;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_int___cdecl_FTextKeyState::FindOrAddData(FTextKeyState::FKeyDataView_const&___ptr64)___ptr64'
      ::__l7::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_int___cdecl_FTextKeyState::FindOrAddData(FTextKeyState::FKeyDataView_const&___ptr64)___ptr64'
                         ::__l7::_thread_safe_static_guard_0__);
    if (`private:_int___cdecl_FTextKeyState::FindOrAddData(FTextKeyState::FKeyDataView_const&___ptr64)___ptr64'
        ::__l7::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`private:_int___cdecl_FTextKeyState::FindOrAddData(FTextKeyState::FKeyDataView_const&___ptr64)___ptr64'
                      ::__l7::LLMScope_Name464,L"Localization/TextKeys");
      _Init_thread_footer(&`private:_int___cdecl_FTextKeyState::FindOrAddData(FTextKeyState::FKeyDataView_const&___ptr64)___ptr64'
                           ::__l7::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `private:_int___cdecl_FTextKeyState::FindOrAddData(FTextKeyState::FKeyDataView_const&___ptr64)___ptr64'
             ::__l7::LLMScope_Name464,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res18,
             &`private:_int___cdecl_FTextKeyState::FindOrAddData(FTextKeyState::FKeyDataView_const&___ptr64)___ptr64'
              ::__l7::LLMScope_Name464,true);
  uVar10 = param_1->StrLen;
  uVar1 = param_1->StrHash;
  if ((int)uVar10 < 0) {
    pFVar8 = FKeyDataView::AsGuid(param_1);
    FKeyDataAllocator::ConditionalRehash
              (&this->KeyDataAllocations,(this->KeyDataAllocations).Elements.Count + 1);
    uVar10 = (this->KeyDataAllocations).HashSize - 1 & uVar1;
    iVar5 = TChunkedPackedArray<FTextKeyState::FKeyData,16>::Add
                      (&(this->KeyDataAllocations).Elements,0x18);
    pFVar6 = TChunkedPackedArray<FTextKeyState::FKeyData,16>::Get
                       (&(this->KeyDataAllocations).Elements,iVar5);
    pFVar6->StrHash = uVar1;
    pFVar6->NextElementIndex = (this->KeyDataAllocations).Hash[uVar10];
    (this->KeyDataAllocations).Hash[uVar10] = iVar5;
    pFVar6 = TChunkedPackedArray<FTextKeyState::FKeyData,16>::Get
                       (&(this->KeyDataAllocations).Elements,iVar5);
    pFVar6->StrLen = -1;
    pFVar7 = GetPersistentLinearAllocator();
    puVar9 = FLinearAllocator::Allocate(pFVar7,0x10,4);
    pFVar6->DataPtr = puVar9;
    uVar3 = *(undefined8 *)&pFVar8->C;
    *puVar9 = *(undefined8 *)pFVar8;
    puVar9[1] = uVar3;
  }
  else {
    _Src = param_1->DataPtr;
    iVar5 = FKeyDataAllocator::Add(&this->KeyDataAllocations,uVar10,uVar1);
    pFVar6 = TChunkedPackedArray<FTextKeyState::FKeyData,16>::Get
                       (&(this->KeyDataAllocations).Elements,iVar5);
    pFVar6->StrLen = uVar10;
    pFVar7 = GetPersistentLinearAllocator();
    _Dst = FLinearAllocator::Allocate(pFVar7,(ulonglong)uVar10,1);
    memcpy(_Dst,_Src,(ulonglong)uVar10);
    pFVar6->DataPtr = _Dst;
  }
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
LAB_141757a70:
  ReleaseSRWLockExclusive((PSRWLOCK)this);
  return iVar5;
}

// FindOrAddImpl @ 141757ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FTextKeyState::FindOrAddImpl
          (FTextKeyState *this,TStringView<wchar_t> *param_1,uint param_2,FTextKey *param_3)

{
  wchar_t _C;
  wchar_t *pwVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uchar *puVar6;
  wchar_t *pwVar7;
  uint uVar8;
  undefined1 auStack_158 [32];
  FGuid local_138;
  FKeyDataView local_128;
  FKeyDataView local_118;
  TStringView<wchar_t> local_108;
  wchar_t *local_f8;
  undefined8 uStack_f0;
  FScriptContainerElement local_e8 [128];
  ForAnyElementType local_68;
  FScriptContainerElement *local_60;
  uint local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_108.DataPtr = param_1->DataPtr;
  local_108.Size = param_1->Size;
  local_108._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_138.A = 0;
  local_138.B = 0;
  local_138.C = 0;
  local_138.D = 0;
  local_f8 = local_108.DataPtr;
  uStack_f0 = local_108._8_8_;
  bVar3 = FGuid::ParseExact(&local_108,Digits,&local_138);
  if (bVar3) {
    pwVar7 = param_1->DataPtr;
    pwVar1 = pwVar7 + (int)*(undefined8 *)&param_1->Size;
    for (; pwVar7 != pwVar1; pwVar7 = pwVar7 + 1) {
      _C = *pwVar7;
      iVar4 = iswdigit(_C);
      if ((iVar4 == 0) && (iVar4 = iswupper(_C), iVar4 == 0)) goto LAB_141757ba2;
    }
    local_128.DataPtr = &local_138;
    local_128.StrLen = -1;
    local_128.StrHash = param_2;
    iVar4 = FindOrAddData(this,&local_128);
    goto LAB_141757c6a;
  }
LAB_141757ba2:
  pwVar1 = param_1->DataPtr;
  iVar4 = param_1->Size;
  local_68.Data = (FScriptContainerElement *)0x0;
  uVar5 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar1,iVar4);
  uVar8 = uVar5;
  local_58 = uVar5;
  if (uVar5 < 0x81) {
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      uVar8 = 0;
      goto LAB_141757bdb;
    }
  }
  else {
LAB_141757bdb:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar8,1);
  }
  local_60 = local_e8;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    local_60 = local_68.Data;
  }
  puVar6 = UE::Core::Private::Convert((uchar *)local_60,uVar5,pwVar1,iVar4);
  if ((puVar6 == (uchar *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_118.DataPtr = local_60;
  local_118.StrLen = local_58;
  local_118.StrHash = param_2;
  iVar4 = FindOrAddData(this,&local_118);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
LAB_141757c6a:
  if ((iVar4 == -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextKey.cpp"
                         ,0x1aa,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  param_3->Index = iVar4;
  return;
}

// GetLegacyTCHARPointerByIndex @ 14175e820

wchar_t * __thiscall FTextKeyState::GetLegacyTCHARPointerByIndex(FTextKeyState *this,int param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  FString *pFVar7;
  FKeyData *this_00;
  FGuid *this_01;
  uint *puVar8;
  undefined1 *puVar9;
  wchar_t *pwVar10;
  FLLMScope local_res8 [2];
  uint local_res10 [2];
  TPairInitializer<int_const_&,FString_&&> local_res18;
  FString local_58;
  uint *local_48;
  FString *local_40;
  
  pwVar10 = L"";
  local_res10[0] = param_1;
  if ((param_1 == -1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextKey.cpp"
                         ,0xa4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pwVar10 = (wchar_t *)(*pcVar3)();
    return pwVar10;
  }
  if ((this == (FTextKeyState *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x1c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pwVar10 = (wchar_t *)(*pcVar3)();
    return pwVar10;
  }
  AcquireSRWLockShared((PSRWLOCK)this);
  iVar1 = *(int *)&(this->LegacyTCHARState).field_0x8;
  iVar2 = *(int *)&(this->LegacyTCHARState).field_0x34;
  if (iVar1 != iVar2) {
    puVar9 = *(undefined1 **)&(this->LegacyTCHARState).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->LegacyTCHARState).field_0x38;
    }
    uVar5 = *(uint *)(puVar9 + (ulonglong)
                               (*(int *)&(this->LegacyTCHARState).field_0x48 - 1U & local_res10[0])
                               * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar8 = (uint *)((longlong)(int)uVar5 * 0x20 + *(longlong *)&this->LegacyTCHARState);
        if (*puVar8 == local_res10[0]) {
          puVar6 = puVar8 + 2;
          if (puVar8 == (uint *)0x0) {
            puVar6 = (uint *)0x0;
          }
          if (puVar6 != (uint *)0x0) {
            if (puVar6[2] != 0) {
              pwVar10 = *(wchar_t **)puVar6;
            }
            if (this == (FTextKeyState *)0x0) {
              return pwVar10;
            }
            ReleaseSRWLockShared((PSRWLOCK)this);
            return pwVar10;
          }
          break;
        }
        uVar5 = puVar8[6];
      } while (uVar5 != 0xffffffff);
    }
  }
  if (this == (FTextKeyState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                       ,0x43,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pwVar10 = (wchar_t *)(*pcVar3)();
      return pwVar10;
    }
  }
  else {
    ReleaseSRWLockShared((PSRWLOCK)this);
  }
  AcquireSRWLockExclusive((PSRWLOCK)this);
  uVar5 = local_res10[0];
  if ((iVar1 - iVar2 <
       *(int *)&(this->LegacyTCHARState).field_0x8 - *(int *)&(this->LegacyTCHARState).field_0x34)
     && (pFVar7 = TMapBase<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>
                  ::Find((TMapBase<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>
                          *)&this->LegacyTCHARState,local_res10[0]), pFVar7 != (FString *)0x0)) {
    if ((pFVar7->Data).ArrayNum != 0) {
      pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
  }
  else {
    this_00 = TChunkedPackedArray<FTextKeyState::FKeyData,16>::Get
                        (&(this->KeyDataAllocations).Elements,uVar5);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_wchar_t_const*___ptr64___cdecl_FTextKeyState::GetLegacyTCHARPointerByIndex(int)___ptr64'
         ::__l14::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_wchar_t_const*___ptr64___cdecl_FTextKeyState::GetLegacyTCHARPointerByIndex(int)___ptr64'
                             ::__l14::_thread_safe_static_guard_0__),
       `public:_wchar_t_const*___ptr64___cdecl_FTextKeyState::GetLegacyTCHARPointerByIndex(int)___ptr64'
       ::__l14::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_wchar_t_const*___ptr64___cdecl_FTextKeyState::GetLegacyTCHARPointerByIndex(int)___ptr64'
                      ::__l14::LLMScope_Name194,L"Localization/Deprecated");
      _Init_thread_footer(&`public:_wchar_t_const*___ptr64___cdecl_FTextKeyState::GetLegacyTCHARPointerByIndex(int)___ptr64'
                           ::__l14::_thread_safe_static_guard_0__);
    }
    FLLMScope::FLLMScope
              (local_res8,
               `public:_wchar_t_const*___ptr64___cdecl_FTextKeyState::GetLegacyTCHARPointerByIndex(int)___ptr64'
               ::__l14::LLMScope_Name194,false,None,Default,true);
    FMemScope::FMemScope
              ((FMemScope *)&local_res18.Value,
               &`public:_wchar_t_const*___ptr64___cdecl_FTextKeyState::GetLegacyTCHARPointerByIndex(int)___ptr64'
                ::__l14::LLMScope_Name194,true);
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    if (this_00->StrLen < 0) {
      this_01 = FKeyData::AsGuid(this_00);
      FGuid::AppendString(this_01,&local_58,Digits);
    }
    else {
      ::FString::AppendChars(&local_58,this_00->DataPtr,this_00->StrLen);
    }
    local_48 = local_res10;
    local_40 = &local_58;
    TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,FString_&&>_>
              ((TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
                *)&this->LegacyTCHARState,&local_res18,(bool *)&local_48);
    if (*(int *)((longlong)(int)local_res18.Key * 0x20 + 0x10 + *(longlong *)&this->LegacyTCHARState
                ) != 0) {
      pwVar10 = *(wchar_t **)
                 ((longlong)(int)local_res18.Key * 0x20 + 8 + *(longlong *)&this->LegacyTCHARState);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    FMemScope::~FMemScope((FMemScope *)&local_res18.Value);
    FLLMScope::~FLLMScope(local_res8);
  }
  if (this != (FTextKeyState *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)this);
  }
  return (wchar_t *)(FScriptContainerElement *)pwVar10;
}

// GetState @ 141761170

FTextKeyState * __cdecl FTextKeyState::GetState(void)

{
  code *pcVar1;
  bool bVar2;
  FTextKeyState *pFVar3;
  
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
  if (((FTextKeyState *)DAT_154eb52a0 == (FTextKeyState *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                         ,0x6d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FTextKeyState *)(*pcVar1)();
    return pFVar3;
  }
  return (FTextKeyState *)DAT_154eb52a0;
}

