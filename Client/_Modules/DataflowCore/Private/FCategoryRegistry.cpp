// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 4

// Get @ 14444a170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FCategoryRegistry * __cdecl UE::Dataflow::FCategoryRegistry::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FCategoryRegistry *pFVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TLazySingleton<struct_UE::Dataflow::FCategoryRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FCategoryRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TLazySingleton<struct_UE::Dataflow::FCategoryRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FCategoryRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TLazySingleton<struct_UE::Dataflow::FCategoryRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FCategoryRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Singleton = 0;
    _DAT_15507c238 = 0;
    _DAT_15507c250 = 0;
    _DAT_15507c270 = 0;
    _DAT_15507c278 = 0;
    DAT_15507c280 =
         &`private:_static_class_TLazySingleton<struct_UE::Dataflow::FCategoryRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FCategoryRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
          ::__l2::Singleton;
    _DAT_15507c258 = ___xmm_00000000ffffffff0000008000000000;
    uRam000000015507c260 = _UNK_150631d98;
    atexit(`TLazySingleton<UE::Dataflow::FCategoryRegistry>::GetLazy'::__l2::
           _dynamic_atexit_destructor_for__Singleton__);
    _Init_thread_footer(&`private:_static_class_TLazySingleton<struct_UE::Dataflow::FCategoryRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FCategoryRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((DAT_15507c280 == (TLazySingleton<struct_UE::Dataflow::FCategoryRegistry> *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                         ,0x6d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FCategoryRegistry *)(*pcVar1)();
    return pFVar3;
  }
  return (FCategoryRegistry *)DAT_15507c280;
}

// IsCategoryForAssetType @ 144451440

bool __thiscall
UE::Dataflow::FCategoryRegistry::IsCategoryForAssetType
          (FCategoryRegistry *this,FName param_1,FName param_2)

{
  FName *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  FName *pFVar3;
  
  pTVar2 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                   *)this,param_1);
  if (pTVar2 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
    pFVar1 = pFVar3 + pTVar2->ArrayNum;
    while( true ) {
      if (pFVar3 == pFVar1) {
        return false;
      }
      if (*pFVar3 == param_2) break;
      pFVar3 = pFVar3 + 1;
    }
  }
  return true;
}

// RegisterCategoryForAssetType @ 1444546f0

void __thiscall
UE::Dataflow::FCategoryRegistry::RegisterCategoryForAssetType
          (FCategoryRegistry *this,FName param_1,FName param_2)

{
  uint uVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  FName local_res10;
  FName local_res18 [2];
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  this_00 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
            ::FindOrAddImpl<FName_const_&>
                      ((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                        *)this,uVar1 + param_1.Number,&local_res10);
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(this_00,local_res18);
  return;
}

// TearDown @ 1444669c0

void __cdecl UE::Dataflow::FCategoryRegistry::TearDown(void)

{
  void *pvVar1;
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TLazySingleton<struct_UE::Dataflow::FCategoryRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FCategoryRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLazySingleton<struct_UE::Dataflow::FCategoryRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FCategoryRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLazySingleton<struct_UE::Dataflow::FCategoryRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FCategoryRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      DAT_15507c280 =
           (TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *)0x0;
      atexit(`TLazySingleton<UE::Dataflow::FCategoryRegistry>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<struct_UE::Dataflow::FCategoryRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FCategoryRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  this = DAT_15507c280;
  if (DAT_15507c280 !=
      (TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
       *)0x0) {
    *(undefined4 *)&DAT_15507c280[1].field_0x10 = 0;
    pvVar1 = *(void **)&this[1].field_0x8;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (this);
    DAT_15507c280 =
         (TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *)0x0;
  }
  return;
}

