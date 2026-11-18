// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FromCStringAnsi @ 141871100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FToBoolHelper::FromCStringAnsi(char *param_1)

{
  bool bVar1;
  size_t sVar2;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_138._padding_ = 0;
  if (param_1 == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar2 = strlen(param_1);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,param_1,(int)sVar2,Yes);
  }
  bVar1 = FromCStringWide(local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return bVar1;
}

// FromCStringUtf8 @ 1418711a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl FToBoolHelper::FromCStringUtf8(uchar *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  size_t sVar5;
  wchar_t *pwVar6;
  uint uVar7;
  undefined1 auStack_158 [32];
  FScriptContainerElement local_138 [256];
  ForAnyElementType local_38;
  FScriptContainerElement *local_30;
  int local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_38.Data = (FScriptContainerElement *)0x0;
  if (param_1 == (uchar *)0x0) {
    local_30 = (FScriptContainerElement *)0x0;
    local_28 = 0;
    goto LAB_14187129e;
  }
  sVar5 = strlen((char *)param_1);
  local_28 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,param_1,(int)sVar5);
  uVar1 = local_28 + 1;
  uVar7 = uVar1;
  if (uVar1 < 0x81) {
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      uVar7 = 0;
      goto LAB_141871213;
    }
  }
  else {
LAB_141871213:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_38,0,uVar7,2);
  }
  local_30 = local_138;
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    local_30 = local_38.Data;
  }
  pwVar6 = UE::Core::Private::Convert((wchar_t *)local_30,uVar1,param_1,(int)sVar5 + 1);
  if ((pwVar6 == (wchar_t *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringConv.h"
                         ,0x25,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_14187129e:
  bVar3 = FromCStringWide((wchar_t *)local_30);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return bVar3;
}

// FromCStringWide @ 1418712f0

bool __cdecl FToBoolHelper::FromCStringWide(wchar_t *param_1)

{
  code *pcVar1;
  TLazySingleton<struct_FCoreTextsSingleton> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TLazySingleton<struct_FCoreTextsSingleton>&___ptr64___cdecl_TLazySingleton<FCoreTextsSingleton>::GetLazy(void_(__cdecl*)(void*___ptr64))'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLazySingleton<struct_FCoreTextsSingleton>&___ptr64___cdecl_TLazySingleton<FCoreTextsSingleton>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLazySingleton<struct_FCoreTextsSingleton>&___ptr64___cdecl_TLazySingleton<FCoreTextsSingleton>::GetLazy(void_(__cdecl*)(void*___ptr64))'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FLazySingleton::Construct<FCoreTextsSingleton>
                (&`private:_static_class_TLazySingleton<struct_FCoreTextsSingleton>&___ptr64___cdecl_TLazySingleton<FCoreTextsSingleton>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                  ::__l2::Singleton);
      DAT_154f07508 =
           &`private:_static_class_TLazySingleton<struct_FCoreTextsSingleton>&___ptr64___cdecl_TLazySingleton<FCoreTextsSingleton>::GetLazy(void_(__cdecl*)(void*___ptr64))'
            ::__l2::Singleton;
      atexit(`TLazySingleton<FCoreTextsSingleton>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<struct_FCoreTextsSingleton>&___ptr64___cdecl_TLazySingleton<FCoreTextsSingleton>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pwVar8 = L"";
  if (DAT_154f07508 == (TLazySingleton<struct_FCoreTextsSingleton> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                       ,0x6d,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  pTVar2 = DAT_154f07508;
  iVar5 = FGenericPlatformStricmp::Stricmp(param_1,L"True");
  if (iVar5 != 0) {
    iVar5 = FGenericPlatformStricmp::Stricmp(param_1,L"Yes");
    if (iVar5 != 0) {
      iVar5 = FGenericPlatformStricmp::Stricmp(param_1,L"On");
      if (iVar5 != 0) {
        pFVar6 = FText::ToString(*(FText **)(pTVar2 + 0x50));
        if ((pFVar6->Data).ArrayNum == 0) {
          pwVar7 = L"";
        }
        else {
          pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        }
        iVar5 = FGenericPlatformStricmp::Stricmp(param_1,pwVar7);
        if (iVar5 != 0) {
          pFVar6 = FText::ToString(*(FText **)(pTVar2 + 0x60));
          if ((pFVar6->Data).ArrayNum == 0) {
            pwVar7 = L"";
          }
          else {
            pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
          }
          iVar5 = FGenericPlatformStricmp::Stricmp(param_1,pwVar7);
          if (iVar5 != 0) {
            iVar5 = FGenericPlatformStricmp::Stricmp(param_1,L"False");
            if (iVar5 != 0) {
              iVar5 = FGenericPlatformStricmp::Stricmp(param_1,L"No");
              if (iVar5 != 0) {
                iVar5 = FGenericPlatformStricmp::Stricmp(param_1,L"Off");
                if (iVar5 != 0) {
                  pFVar6 = FText::ToString(*(FText **)(pTVar2 + 0x58));
                  if ((pFVar6->Data).ArrayNum == 0) {
                    pwVar7 = L"";
                  }
                  else {
                    pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
                  }
                  iVar5 = FGenericPlatformStricmp::Stricmp(param_1,pwVar7);
                  if (iVar5 != 0) {
                    pFVar6 = FText::ToString(*(FText **)(pTVar2 + 0x68));
                    if ((pFVar6->Data).ArrayNum != 0) {
                      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
                    }
                    iVar5 = FGenericPlatformStricmp::Stricmp(param_1,pwVar8);
                    if (iVar5 != 0) {
                      iVar5 = _wtoi(param_1);
                      return iVar5 != 0;
                    }
                  }
                }
              }
            }
            return false;
          }
        }
      }
    }
  }
  return true;
}

