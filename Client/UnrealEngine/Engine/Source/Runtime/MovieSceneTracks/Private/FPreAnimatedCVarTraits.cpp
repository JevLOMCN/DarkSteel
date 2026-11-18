// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// CachePreAnimatedValue @ 1468ac530

FString * __cdecl
UE::MovieScene::FPreAnimatedCVarTraits::CachePreAnimatedValue
          (FString *__return_storage_ptr__,FString *param_1)

{
  longlong *plVar1;
  void **ppvVar2;
  wchar_t *pwVar3;
  bool bVar4;
  void *local_28;
  undefined8 local_20;
  void *local_18 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FString___cdecl_UE::MovieScene::FPreAnimatedCVarTraits::CachePreAnimatedValue(FString_const&___ptr64)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FString___cdecl_UE::MovieScene::FPreAnimatedCVarTraits::CachePreAnimatedValue(FString_const&___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FString___cdecl_UE::MovieScene::FPreAnimatedCVarTraits::CachePreAnimatedValue(FString_const&___ptr64)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FString___cdecl_UE::MovieScene::FPreAnimatedCVarTraits::CachePreAnimatedValue(FString_const&___ptr64)'
      ::__l2::ConsoleManager = IConsoleManager::Get();
      _Init_thread_footer(&`public:_static_class_FString___cdecl_UE::MovieScene::FPreAnimatedCVarTraits::CachePreAnimatedValue(FString_const&___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  plVar1 = (longlong *)
           (**(code **)((longlong)
                        *`public:_static_class_FString___cdecl_UE::MovieScene::FPreAnimatedCVarTraits::CachePreAnimatedValue(FString_const&___ptr64)'
                         ::__l2::ConsoleManager + 0xc0))
                     (`public:_static_class_FString___cdecl_UE::MovieScene::FPreAnimatedCVarTraits::CachePreAnimatedValue(FString_const&___ptr64)'
                      ::__l2::ConsoleManager,pwVar3,1);
  bVar4 = plVar1 == (longlong *)0x0;
  if (bVar4) {
    local_28 = (void *)0x0;
    ppvVar2 = &local_28;
    local_20 = 0;
  }
  else {
    ppvVar2 = (void **)(**(code **)(*plVar1 + 0xd8))(plVar1,local_18);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = *ppvVar2;
  *ppvVar2 = (void *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = *(int *)(ppvVar2 + 1);
  (__return_storage_ptr__->Data).ArrayMax = *(int *)((longlong)ppvVar2 + 0xc);
  ppvVar2[1] = (void *)0x0;
  if (bVar4) {
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
  }
  if ((!bVar4) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  return __return_storage_ptr__;
}

// RestorePreAnimatedValue @ 1468cbf30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FPreAnimatedCVarTraits::RestorePreAnimatedValue
          (FPreAnimatedCVarTraits *this,FString *param_1,FString *param_2,
          FRestoreStateParams *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  undefined1 local_38 [16];
  uint local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_void___cdecl_UE::MovieScene::FPreAnimatedCVarTraits::RestorePreAnimatedValue(FString_const&___ptr64,FString_const&___ptr64,UE::MovieScene::FRestoreStateParams_const&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_void___cdecl_UE::MovieScene::FPreAnimatedCVarTraits::RestorePreAnimatedValue(FString_const&___ptr64,FString_const&___ptr64,UE::MovieScene::FRestoreStateParams_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_void___cdecl_UE::MovieScene::FPreAnimatedCVarTraits::RestorePreAnimatedValue(FString_const&___ptr64,FString_const&___ptr64,UE::MovieScene::FRestoreStateParams_const&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_void___cdecl_UE::MovieScene::FPreAnimatedCVarTraits::RestorePreAnimatedValue(FString_const&___ptr64,FString_const&___ptr64,UE::MovieScene::FRestoreStateParams_const&___ptr64)___ptr64'
      ::__l2::ConsoleManager = IConsoleManager::Get();
      _Init_thread_footer(&`public:_void___cdecl_UE::MovieScene::FPreAnimatedCVarTraits::RestorePreAnimatedValue(FString_const&___ptr64,FString_const&___ptr64,UE::MovieScene::FRestoreStateParams_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pwVar5 = L"";
  if ((param_1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  plVar2 = (longlong *)
           (**(code **)((longlong)
                        *`public:_void___cdecl_UE::MovieScene::FPreAnimatedCVarTraits::RestorePreAnimatedValue(FString_const&___ptr64,FString_const&___ptr64,UE::MovieScene::FRestoreStateParams_const&___ptr64)___ptr64'
                         ::__l2::ConsoleManager + 0xc0))
                     (`public:_void___cdecl_UE::MovieScene::FPreAnimatedCVarTraits::RestorePreAnimatedValue(FString_const&___ptr64,FString_const&___ptr64,UE::MovieScene::FRestoreStateParams_const&___ptr64)___ptr64'
                      ::__l2::ConsoleManager,pwVar4,1);
  if (plVar2 != (longlong *)0x0) {
    if ((param_2->Data).ArrayNum != 0) {
      pwVar5 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    local_18 = 0;
    local_20 = 0;
    local_24 = 1;
    local_10 = 0x1000000;
    local_14 = 0xf000000;
    local_28 = (**(code **)(*plVar2 + 0x18))(plVar2);
    lVar1 = *plVar2;
    local_28 = local_28 & 0xff000000;
    uVar3 = (**(code **)(lVar1 + 0xa8))(plVar2,local_38,&local_28);
    (**(code **)(lVar1 + 0xb0))(plVar2,pwVar5,uVar3);
  }
  return;
}

