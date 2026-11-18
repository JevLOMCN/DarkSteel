// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 28

// GetApplicationWillTerminateDelegate @ 141872570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> * __cdecl
FCoreDelegates::GetApplicationWillTerminateDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Singleton,4000);
      ::Singleton._48_8_ = ___xmm_00000000000000020000000000000000;
      ::Singleton._56_8_ = _UNK_150631d48;
      ::Singleton._40_8_ = 0;
      atexit(`FCoreDelegates::GetApplicationWillTerminateDelegate'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// GetGPUOutOfMemoryDelegate @ 141873890

TMulticastDelegate<void___cdecl(unsigned___int64,unsigned___int64),FDefaultDelegateUserPolicy> *
__cdecl FCoreDelegates::GetGPUOutOfMemoryDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FCoreDelegates::GetGPUOutOfMemoryDelegate'::__l2::
             _dynamic_atexit_destructor_for__OnGPUOOM__);
      _Init_thread_footer(&::_TSS0);
      return &OnGPUOOM;
    }
  }
  return &OnGPUOOM;
}

// GetHotfixDelegate @ 1418739b0

TDelegate<void___cdecl(void_*,int),FDefaultDelegateUserPolicy> * __cdecl
FCoreDelegates::GetHotfixDelegate(Type param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TDelegate<void___cdecl(void_*,int),FDefaultDelegateUserPolicy> *pTVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if (HotFixDelegates.ArrayNum <= (int)param_1) {
    uVar5 = param_1 + 1;
    if (HotFixDelegates.ArrayNum < (int)uVar5) {
      iVar6 = uVar5 - HotFixDelegates.ArrayNum;
      iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,iVar6,&HotFixDelegates.AllocatorInstance,&HotFixDelegates.ArrayNum,
                         &HotFixDelegates.ArrayMax);
      DefaultConstructItems<TDelegate<void___cdecl(void_*,int),FDefaultDelegateUserPolicy>,int>
                (HotFixDelegates.AllocatorInstance.Data + (longlong)iVar3 * 0x18,iVar6);
    }
    else {
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
      }
      if ((int)uVar5 < HotFixDelegates.ArrayNum) {
        uVar7 = HotFixDelegates.ArrayNum - uVar5;
        if (((int)(uVar7 | uVar5) < 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          pTVar4 = (TDelegate<void___cdecl(void_*,int),FDefaultDelegateUserPolicy> *)(*pcVar1)();
          return pTVar4;
        }
        if (uVar7 != 0) {
          pTVar4 = (TDelegate<void___cdecl(void_*,int),FDefaultDelegateUserPolicy> *)
                   (HotFixDelegates.AllocatorInstance.Data + (longlong)(int)uVar5 * 0x18);
          DestructItems<TDelegate<void___cdecl(void_*,int),FDefaultDelegateUserPolicy>,int>
                    (pTVar4,uVar7);
          iVar3 = (HotFixDelegates.ArrayNum - uVar7) - uVar5;
          if (iVar3 != 0) {
            memmove(pTVar4,pTVar4 + (int)uVar7,(longlong)iVar3 * 0x18);
          }
          HotFixDelegates.ArrayNum = HotFixDelegates.ArrayNum - uVar7;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,&HotFixDelegates.AllocatorInstance,HotFixDelegates.ArrayNum,
                     &HotFixDelegates.ArrayMax);
        }
      }
    }
  }
  uVar5 = 0;
  if ((int)param_1 < HotFixDelegates.ArrayNum) {
    uVar5 = ~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TDelegate<void___cdecl(void_*,int),FDefaultDelegateUserPolicy> *)(*pcVar1)();
    return pTVar4;
  }
  return (TDelegate<void___cdecl(void_*,int),FDefaultDelegateUserPolicy> *)
         (HotFixDelegates.AllocatorInstance.Data + (longlong)(int)param_1 * 0x18);
}

// GetLowLevelAllocatorMemoryTrimDelegate @ 141873e30

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
FCoreDelegates::GetLowLevelAllocatorMemoryTrimDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FCoreDelegates::GetLowLevelAllocatorMemoryTrimDelegate'::__l2::
             _dynamic_atexit_destructor_for__OnLowLevelAllocatorMemoryTrim__);
      _Init_thread_footer(&::_TSS0);
      return &OnLowLevelAllocatorMemoryTrim;
    }
  }
  return &OnLowLevelAllocatorMemoryTrim;
}

// GetMemoryTrimDelegate @ 141874630

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
FCoreDelegates::GetMemoryTrimDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FCoreDelegates::GetMemoryTrimDelegate'::__l2::
             _dynamic_atexit_destructor_for__OnMemoryTrim__);
      _Init_thread_footer(&::_TSS0);
      return &OnMemoryTrim;
    }
  }
  return &OnMemoryTrim;
}

// GetOnAsyncLoadPackage @ 141874760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMulticastDelegate<void___cdecl(TStringView<wchar_t>),FDefaultTSDelegateUserPolicy> * __cdecl
FCoreDelegates::GetOnAsyncLoadPackage(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Singleton,4000);
      ::Singleton._48_8_ = ___xmm_00000000000000020000000000000000;
      ::Singleton._56_8_ = _UNK_150631d48;
      ::Singleton._40_8_ = 0;
      atexit(`FCoreDelegates::GetOnAsyncLoadPackage'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// GetOnFileOpenedForReadFromPakFile @ 141874810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMulticastDelegate<void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy> *
__cdecl FCoreDelegates::GetOnFileOpenedForReadFromPakFile(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Singleton,4000);
      ::Singleton._48_8_ = ___xmm_00000000000000020000000000000000;
      ::Singleton._56_8_ = _UNK_150631d48;
      ::Singleton._40_8_ = 0;
      atexit(`FCoreDelegates::GetOnFileOpenedForReadFromPakFile'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// GetOnPakFileMounted2 @ 1418748c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMulticastDelegate<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy> * __cdecl
FCoreDelegates::GetOnPakFileMounted2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Singleton,4000);
      ::Singleton._48_8_ = ___xmm_00000000000000020000000000000000;
      ::Singleton._56_8_ = _UNK_150631d48;
      ::Singleton._40_8_ = 0;
      atexit(`FCoreDelegates::GetOnPakFileMounted2'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// GetOnPakFileUnmounted @ 141874970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMulticastDelegate<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy> * __cdecl
FCoreDelegates::GetOnPakFileUnmounted(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Singleton,4000);
      ::Singleton._48_8_ = ___xmm_00000000000000020000000000000000;
      ::Singleton._56_8_ = _UNK_150631d48;
      ::Singleton._40_8_ = 0;
      atexit(`FCoreDelegates::GetOnPakFileUnmounted'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// GetOnPakFileUnmounting @ 141874a20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMulticastDelegate<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy> * __cdecl
FCoreDelegates::GetOnPakFileUnmounting(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Singleton,4000);
      ::Singleton._48_8_ = ___xmm_00000000000000020000000000000000;
      ::Singleton._56_8_ = _UNK_150631d48;
      ::Singleton._40_8_ = 0;
      atexit(`FCoreDelegates::GetOnPakFileUnmounting'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// GetOutOfMemoryDelegate @ 141874b80

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
FCoreDelegates::GetOutOfMemoryDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FCoreDelegates::GetOutOfMemoryDelegate'::__l2::_dynamic_atexit_destructor_for__OnOOM__
            );
      _Init_thread_footer(&::_TSS0);
      return &OnOOM;
    }
  }
  return &OnOOM;
}

// GetPakEncryptionKeyDelegate @ 141874c00

TDelegate<void___cdecl(unsigned_char_*),FDefaultDelegateUserPolicy> * __cdecl
FCoreDelegates::GetPakEncryptionKeyDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FCoreDelegates::GetPakEncryptionKeyDelegate'::__l2::
             _dynamic_atexit_destructor_for__PakEncryptionKeyDelegate__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &PakEncryptionKeyDelegate;
}

// GetPakSigningKeysDelegate @ 141874c70

TDelegate<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
* __cdecl FCoreDelegates::GetPakSigningKeysDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FCoreDelegates::GetPakSigningKeysDelegate'::__l2::
             _dynamic_atexit_destructor_for__PakSigningKeysDelegate__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &PakSigningKeysDelegate;
}

// GetPreMainInitDelegate @ 141875390

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
FCoreDelegates::GetPreMainInitDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FCoreDelegates::GetPreMainInitDelegate'::__l2::
             _dynamic_atexit_destructor_for__StaticDelegate__);
      _Init_thread_footer(&::_TSS0);
      return &StaticDelegate;
    }
  }
  return &StaticDelegate;
}

// GetRefreshLowLevelAllocatorDelegate @ 141875420

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
FCoreDelegates::GetRefreshLowLevelAllocatorDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FCoreDelegates::GetRefreshLowLevelAllocatorDelegate'::__l2::
             _dynamic_atexit_destructor_for__OnRefreshLowLevelAllocator__);
      _Init_thread_footer(&::_TSS0);
      return &OnRefreshLowLevelAllocator;
    }
  }
  return &OnRefreshLowLevelAllocator;
}

// GetRegisterEncryptionKeyMulticastDelegate @ 1418754a0

TMulticastDelegate<void___cdecl(FGuid_const_&,FAES::FAESKey_const_&),FDefaultDelegateUserPolicy> *
__cdecl FCoreDelegates::GetRegisterEncryptionKeyMulticastDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FCoreDelegates::GetRegisterEncryptionKeyMulticastDelegate'::__l2::
             _dynamic_atexit_destructor_for__RegisterEncryptionKeyDelegate__);
      _Init_thread_footer(&::_TSS0);
      return &RegisterEncryptionKeyDelegate;
    }
  }
  return &RegisterEncryptionKeyDelegate;
}

// TSAccessExtraBinaryConfigData @ 141892e60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMulticastDelegate<void___cdecl(FCoreDelegates::FExtraBinaryConfigData_&),FDefaultTSDelegateUserPolicy>
* __cdecl FCoreDelegates::TSAccessExtraBinaryConfigData(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Singleton,4000);
      ::Singleton._48_8_ = ___xmm_00000000000000020000000000000000;
      ::Singleton._56_8_ = _UNK_150631d48;
      ::Singleton._40_8_ = 0;
      atexit(`FCoreDelegates::TSAccessExtraBinaryConfigData'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// TSConfigReadyForUse @ 141892f10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> * __cdecl
FCoreDelegates::TSConfigReadyForUse(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Singleton,4000);
      ::Singleton._48_8_ = ___xmm_00000000000000020000000000000000;
      ::Singleton._56_8_ = _UNK_150631d48;
      ::Singleton._40_8_ = 0;
      atexit(`FCoreDelegates::TSConfigReadyForUse'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// TSCountPreLoadConfigFileRespondersDelegate @ 141892fc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMulticastDelegate<void___cdecl(wchar_t_const_*,int_&),FDefaultTSDelegateUserPolicy> * __cdecl
FCoreDelegates::TSCountPreLoadConfigFileRespondersDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Singleton,4000);
      ::Singleton._48_8_ = ___xmm_00000000000000020000000000000000;
      ::Singleton._56_8_ = _UNK_150631d48;
      ::Singleton._40_8_ = 0;
      atexit(`FCoreDelegates::TSCountPreLoadConfigFileRespondersDelegate'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// TSOnConfigSectionNameRead @ 141893070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMulticastDelegate<void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy> *
__cdecl FCoreDelegates::TSOnConfigSectionNameRead(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Singleton,4000);
      ::Singleton._48_8_ = ___xmm_00000000000000020000000000000000;
      ::Singleton._56_8_ = _UNK_150631d48;
      ::Singleton._40_8_ = 0;
      atexit(`FCoreDelegates::TSOnConfigSectionNameRead'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// TSOnConfigSectionRead @ 141893120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMulticastDelegate<void___cdecl(wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy> *
__cdecl FCoreDelegates::TSOnConfigSectionRead(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Singleton,4000);
      ::Singleton._48_8_ = ___xmm_00000000000000020000000000000000;
      ::Singleton._56_8_ = _UNK_150631d48;
      ::Singleton._40_8_ = 0;
      atexit(`FCoreDelegates::TSOnConfigSectionRead'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// TSOnConfigSectionsChanged @ 1418931d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMulticastDelegate<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
* __cdecl FCoreDelegates::TSOnConfigSectionsChanged(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Singleton,4000);
      ::Singleton._48_8_ = ___xmm_00000000000000020000000000000000;
      ::Singleton._56_8_ = _UNK_150631d48;
      ::Singleton._40_8_ = 0;
      atexit(`FCoreDelegates::TSOnConfigSectionsChanged'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// TSOnConfigValueRead @ 141893280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMulticastDelegate<void___cdecl(wchar_t_const_*,wchar_t_const_*,wchar_t_const_*),FDefaultTSDelegateUserPolicy>
* __cdecl FCoreDelegates::TSOnConfigValueRead(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Singleton,4000);
      ::Singleton._48_8_ = ___xmm_00000000000000020000000000000000;
      ::Singleton._56_8_ = _UNK_150631d48;
      ::Singleton._40_8_ = 0;
      atexit(`FCoreDelegates::TSOnConfigValueRead'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// TSOnFConfigCreated @ 141893330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMulticastDelegate<void___cdecl(FConfigFile_const_*),FDefaultTSDelegateUserPolicy> * __cdecl
FCoreDelegates::TSOnFConfigCreated(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Singleton,4000);
      ::Singleton._48_8_ = ___xmm_00000000000000020000000000000000;
      ::Singleton._56_8_ = _UNK_150631d48;
      ::Singleton._40_8_ = 0;
      atexit(`FCoreDelegates::TSOnFConfigCreated'::__l2::_dynamic_atexit_destructor_for__Singleton__
            );
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// TSOnFConfigDeleted @ 1418933e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMulticastDelegate<void___cdecl(FConfigFile_const_*),FDefaultTSDelegateUserPolicy> * __cdecl
FCoreDelegates::TSOnFConfigDeleted(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Singleton,4000);
      ::Singleton._48_8_ = ___xmm_00000000000000020000000000000000;
      ::Singleton._56_8_ = _UNK_150631d48;
      ::Singleton._40_8_ = 0;
      atexit(`FCoreDelegates::TSOnFConfigDeleted'::__l2::_dynamic_atexit_destructor_for__Singleton__
            );
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// TSPreDeleteConfigFileDelegate @ 141893490

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMulticastDelegate<void___cdecl(wchar_t_const_*,bool_&),FDefaultTSDelegateUserPolicy> * __cdecl
FCoreDelegates::TSPreDeleteConfigFileDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Singleton,4000);
      ::Singleton._48_8_ = ___xmm_00000000000000020000000000000000;
      ::Singleton._56_8_ = _UNK_150631d48;
      ::Singleton._40_8_ = 0;
      atexit(`FCoreDelegates::TSPreDeleteConfigFileDelegate'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// TSPreLoadConfigFileDelegate @ 141893540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMulticastDelegate<void___cdecl(wchar_t_const_*,FString_&),FDefaultTSDelegateUserPolicy> * __cdecl
FCoreDelegates::TSPreLoadConfigFileDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Singleton,4000);
      ::Singleton._48_8_ = ___xmm_00000000000000020000000000000000;
      ::Singleton._56_8_ = _UNK_150631d48;
      ::Singleton._40_8_ = 0;
      atexit(`FCoreDelegates::TSPreLoadConfigFileDelegate'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

// TSPreSaveConfigFileDelegate @ 1418935f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMulticastDelegate<void___cdecl(wchar_t_const_*,FString_const_&,int_&),FDefaultTSDelegateUserPolicy>
* __cdecl FCoreDelegates::TSPreSaveConfigFileDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Singleton,4000);
      ::Singleton._48_8_ = ___xmm_00000000000000020000000000000000;
      ::Singleton._56_8_ = _UNK_150631d48;
      ::Singleton._40_8_ = 0;
      atexit(`FCoreDelegates::TSPreSaveConfigFileDelegate'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return &::Singleton;
    }
  }
  return &::Singleton;
}

