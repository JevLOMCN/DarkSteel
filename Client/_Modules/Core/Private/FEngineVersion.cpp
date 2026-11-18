// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 11

// FEngineVersion @ 1418bb220

FEngineVersion * __thiscall
FEngineVersion::FEngineVersion
          (FEngineVersion *this,ushort param_1,ushort param_2,ushort param_3,uint param_4,
          FString *param_5)

{
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->Branch).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Branch).Data.ArrayNum = 0;
  (this->Branch).Data.ArrayMax = 0;
  Set(this,param_1,param_2,param_3,param_4,param_5);
  return this;
}

// CompatibleWith @ 1418cac20

FEngineVersion * __cdecl FEngineVersion::CompatibleWith(void)

{
  FGlobalEngineVersions *pFVar1;
  
  pFVar1 = TLazySingleton<FGlobalEngineVersions>::Get();
  return &pFVar1->CompatibleWith;
}

// Current @ 1418d4980

FEngineVersion * __cdecl FEngineVersion::Current(void)

{
  code *pcVar1;
  bool bVar2;
  FEngineVersion *pFVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TLazySingleton<struct_FGlobalEngineVersions>&___ptr64___cdecl_TLazySingleton<FGlobalEngineVersions>::GetLazy(void_(__cdecl*)(void*___ptr64))'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TLazySingleton<struct_FGlobalEngineVersions>&___ptr64___cdecl_TLazySingleton<FGlobalEngineVersions>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TLazySingleton<struct_FGlobalEngineVersions>&___ptr64___cdecl_TLazySingleton<FGlobalEngineVersions>::GetLazy(void_(__cdecl*)(void*___ptr64))'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FGlobalEngineVersions::FGlobalEngineVersions
              ((FGlobalEngineVersions *)
               &`private:_static_class_TLazySingleton<struct_FGlobalEngineVersions>&___ptr64___cdecl_TLazySingleton<FGlobalEngineVersions>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                ::__l2::Singleton);
    DAT_154f09f68 =
         &`private:_static_class_TLazySingleton<struct_FGlobalEngineVersions>&___ptr64___cdecl_TLazySingleton<FGlobalEngineVersions>::GetLazy(void_(__cdecl*)(void*___ptr64))'
          ::__l2::Singleton;
    atexit(`TLazySingleton<FGlobalEngineVersions>::GetLazy'::__l2::
           _dynamic_atexit_destructor_for__Singleton__);
    _Init_thread_footer(&`private:_static_class_TLazySingleton<struct_FGlobalEngineVersions>&___ptr64___cdecl_TLazySingleton<FGlobalEngineVersions>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (((FEngineVersion *)DAT_154f09f68 == (FEngineVersion *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                         ,0x6d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FEngineVersion *)(*pcVar1)();
    return pFVar3;
  }
  return (FEngineVersion *)DAT_154f09f68;
}

// Empty @ 1418d7200

void __thiscall FEngineVersion::Empty(FEngineVersion *this)

{
  int *piVar1;
  int iVar2;
  undefined1 local_18 [24];
  
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0;
  if (&this->Branch != (FString *)local_18) {
    iVar2 = (this->Branch).Data.ArrayMax;
    piVar1 = &(this->Branch).Data.ArrayMax;
    (this->Branch).Data.ArrayNum = 0;
    if (iVar2 == 0) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,iVar2,(ForAnyElementType *)&this->Branch,0,piVar1);
  }
  return;
}

// ExactMatch @ 1418d8830

bool __thiscall FEngineVersion::ExactMatch(FEngineVersion *this,FEngineVersion *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (((((short)this->_padding_ == (short)param_1->_padding_) &&
       (*(short *)((longlong)&this->_padding_ + 2) == *(short *)((longlong)&param_1->_padding_ + 2))
       ) && (*(short *)((longlong)&this->_padding_ + 4) ==
             *(short *)((longlong)&param_1->_padding_ + 4))) &&
     ((int)this->_padding_ == (int)param_1->_padding_)) {
    iVar2 = (this->Branch).Data.ArrayNum;
    iVar1 = (param_1->Branch).Data.ArrayNum;
    if (iVar2 == iVar1) {
      if (iVar2 < 2) {
        return true;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->Branch).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->Branch).Data.AllocatorInstance.Data);
      bVar3 = iVar2 == 0;
    }
    else {
      bVar3 = iVar2 + iVar1 == 1;
    }
    if (bVar3) {
      return true;
    }
  }
  return false;
}

// GetBranchDescriptor @ 1418dd990

FString * __thiscall FEngineVersion::GetBranchDescriptor(FEngineVersion *this)

{
  return &this->Branch;
}

// IsCompatibleWith @ 1418e2b00

bool __thiscall FEngineVersion::IsCompatibleWith(FEngineVersion *this,FEngineVersionBase *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  uVar2 = (uint)this->_padding_;
  uVar5 = uVar2 & 0x7fffffff;
  if (uVar5 == 0) {
    return true;
  }
  uVar4 = param_1->Changelist & 0x7fffffff;
  if (uVar4 == 0) {
    return true;
  }
  uVar1 = (ushort)this->_padding_;
  if (uVar1 == param_1->Major) {
    uVar1 = *(ushort *)((longlong)&this->_padding_ + 2);
    bVar6 = param_1->Minor < uVar1;
    if (param_1->Minor == uVar1) {
      uVar1 = *(ushort *)((longlong)&this->_padding_ + 4);
      bVar6 = param_1->Patch < uVar1;
      if (param_1->Patch == uVar1) {
        if ((byte)(uVar2 >> 0x1f) != (byte)(param_1->Changelist >> 0x1f)) {
          return true;
        }
        bVar6 = uVar4 < uVar5;
        if (uVar4 == uVar5) {
          return true;
        }
        iVar3 = 3;
      }
      else {
        iVar3 = 2;
      }
    }
    else {
      iVar3 = 1;
    }
  }
  else {
    iVar3 = 0;
    bVar6 = param_1->Major < uVar1;
  }
  if ((!bVar6) && ((GSkipChangelistCompatibilityVersionCheck == 0 || (iVar3 != 3)))) {
    return false;
  }
  return true;
}

// Parse @ 1418ea320

bool __cdecl FEngineVersion::Parse(FString *param_1,FEngineVersion *param_2)

{
  int *piVar1;
  wchar_t wVar2;
  int iVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  FString *pFVar9;
  wchar_t *_Str;
  int iVar10;
  FScriptContainerElement *_Src;
  wchar_t *local_res8;
  FString local_48;
  FString local_38;
  
  if ((param_1->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar5 = _wcstoui64(_Str,&local_res8,10);
  if ((((uVar5 < 0x10000) && (wVar2 = *local_res8, local_res8 = local_res8 + 1, wVar2 == L'.')) &&
      (uVar6 = _wcstoui64(local_res8,&local_res8,10), uVar6 < 0x10000)) &&
     ((wVar2 = *local_res8, local_res8 = local_res8 + 1, wVar2 == L'.' &&
      (uVar7 = _wcstoui64(local_res8,&local_res8,10), uVar7 < 0x10000)))) {
    uVar8 = 0;
    if (*local_res8 == L'-') {
      local_res8 = local_res8 + 1;
      uVar8 = _wcstoui64(local_res8,&local_res8,10);
      if (0xffffffff < uVar8) goto LAB_1418ea53a;
    }
    iVar10 = 0;
    _Src = (FScriptContainerElement *)0x0;
    if (*local_res8 == L'+') {
      local_res8 = local_res8 + 1;
      pFVar9 = ::FString::FString(&local_48,local_res8);
      iVar10 = 0;
      if (&local_38 != pFVar9) {
        _Src = (pFVar9->Data).AllocatorInstance.Data;
        (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar10 = (pFVar9->Data).ArrayNum;
        (pFVar9->Data).ArrayNum = 0;
        (pFVar9->Data).ArrayMax = 0;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    *(short *)&param_2->_padding_ = (short)uVar5;
    *(short *)((longlong)&param_2->_padding_ + 2) = (short)uVar6;
    *(short *)((longlong)&param_2->_padding_ + 4) = (short)uVar7;
    *(int *)&param_2->_padding_ = (int)uVar8;
    pFVar9 = &param_2->Branch;
    if (pFVar9 != &local_38) {
      iVar3 = (param_2->Branch).Data.ArrayMax;
      piVar1 = &(param_2->Branch).Data.ArrayMax;
      (param_2->Branch).Data.ArrayNum = iVar10;
      if ((iVar10 == 0) && (iVar3 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar10,iVar3,(ForAnyElementType *)pFVar9,iVar10,piVar1);
        if (iVar10 != 0) {
          memcpy((pFVar9->Data).AllocatorInstance.Data,_Src,(longlong)iVar10 * 2);
        }
      }
    }
    if (_Src != (FScriptContainerElement *)0x0) {
      FMemory::Free(_Src);
    }
    bVar4 = true;
  }
  else {
LAB_1418ea53a:
    bVar4 = false;
  }
  return bVar4;
}

// Set @ 1418f8b40

void __thiscall
FEngineVersion::Set(FEngineVersion *this,ushort param_1,ushort param_2,ushort param_3,uint param_4,
                   FString *param_5)

{
  FString *pFVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  pFVar1 = &this->Branch;
  *(uint *)&this->_padding_ = param_4;
  *(ushort *)&this->_padding_ = param_1;
  *(ushort *)((longlong)&this->_padding_ + 2) = param_2;
  *(ushort *)((longlong)&this->_padding_ + 4) = param_3;
  if (pFVar1 != param_5) {
    iVar3 = (this->Branch).Data.ArrayMax;
    piVar2 = &(this->Branch).Data.ArrayMax;
    iVar4 = (param_5->Data).ArrayNum;
    _Src = (param_5->Data).AllocatorInstance.Data;
    (this->Branch).Data.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar4,iVar3,(ForAnyElementType *)pFVar1,iVar4,piVar2);
    if (iVar4 != 0) {
      memcpy((pFVar1->Data).AllocatorInstance.Data,_Src,(longlong)iVar4 * 2);
    }
  }
  return;
}

// TearDown @ 1418f9f90

void __cdecl FEngineVersion::TearDown(void)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TLazySingleton<struct_FGlobalEngineVersions>&___ptr64___cdecl_TLazySingleton<FGlobalEngineVersions>::GetLazy(void_(__cdecl*)(void*___ptr64))'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLazySingleton<struct_FGlobalEngineVersions>&___ptr64___cdecl_TLazySingleton<FGlobalEngineVersions>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLazySingleton<struct_FGlobalEngineVersions>&___ptr64___cdecl_TLazySingleton<FGlobalEngineVersions>::GetLazy(void_(__cdecl*)(void*___ptr64))'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      DAT_154f09f68 = 0;
      atexit(`TLazySingleton<FGlobalEngineVersions>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<struct_FGlobalEngineVersions>&___ptr64___cdecl_TLazySingleton<FGlobalEngineVersions>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  lVar1 = DAT_154f09f68;
  if (DAT_154f09f68 != 0) {
    if (*(void **)(DAT_154f09f68 + 0x30) != (void *)0x0) {
      FMemory::Free(*(void **)(DAT_154f09f68 + 0x30));
    }
    if (*(void **)(lVar1 + 0x10) != (void *)0x0) {
      FMemory::Free(*(void **)(lVar1 + 0x10));
    }
    DAT_154f09f68 = 0;
  }
  return;
}

// ToString @ 1418fc380

FString * __thiscall
FEngineVersion::ToString
          (FEngineVersion *this,FString *__return_storage_ptr__,EVersionComponent param_1)

{
  int iVar1;
  int iVar2;
  FString local_18;
  
  ::FString::PrintfImpl(__return_storage_ptr__,L"%u");
  if (0 < (int)param_1) {
    ::FString::PrintfImpl(&local_18,L".%u");
    iVar2 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (1 < (int)param_1) {
      ::FString::PrintfImpl(&local_18,L".%u");
      iVar2 = local_18.Data.ArrayNum + -1;
      if (local_18.Data.ArrayNum == 0) {
        iVar2 = 0;
      }
      ::FString::AppendChars
                (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (2 < (int)param_1) {
        ::FString::PrintfImpl(&local_18,L"-%u");
        iVar2 = local_18.Data.ArrayNum + -1;
        if (local_18.Data.ArrayNum == 0) {
          iVar2 = 0;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        if (3 < (int)param_1) {
          iVar1 = (this->Branch).Data.ArrayNum;
          iVar2 = iVar1 + -1;
          if (iVar1 == 0) {
            iVar2 = 0;
          }
          if (0 < iVar2) {
            ::FString::PrintfImpl(&local_18,L"+%s");
            iVar2 = local_18.Data.ArrayNum + -1;
            if (local_18.Data.ArrayNum == 0) {
              iVar2 = 0;
            }
            ::FString::AppendChars
                      (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2)
            ;
            if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_18.Data.AllocatorInstance.Data);
            }
          }
        }
      }
    }
    return __return_storage_ptr__;
  }
  return __return_storage_ptr__;
}

