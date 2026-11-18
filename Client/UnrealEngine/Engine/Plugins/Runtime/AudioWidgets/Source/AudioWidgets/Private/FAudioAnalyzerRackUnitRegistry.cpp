// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 6

// Get @ 14d92aa00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FAudioAnalyzerRackUnitRegistry * __cdecl AudioWidgets::FAudioAnalyzerRackUnitRegistry::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FAudioAnalyzerRackUnitRegistry *pFVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TLazySingleton<class_AudioWidgets::FAudioAnalyzerRackUnitRegistry>&___ptr64___cdecl_TLazySingleton<AudioWidgets::FAudioAnalyzerRackUnitRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TLazySingleton<class_AudioWidgets::FAudioAnalyzerRackUnitRegistry>&___ptr64___cdecl_TLazySingleton<AudioWidgets::FAudioAnalyzerRackUnitRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TLazySingleton<class_AudioWidgets::FAudioAnalyzerRackUnitRegistry>&___ptr64___cdecl_TLazySingleton<AudioWidgets::FAudioAnalyzerRackUnitRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Singleton = 0;
    _DAT_155371238 = 0;
    _DAT_155371250 = 0;
    _DAT_155371270 = 0;
    _DAT_155371278 = 0;
    DAT_155371280 =
         &`private:_static_class_TLazySingleton<class_AudioWidgets::FAudioAnalyzerRackUnitRegistry>&___ptr64___cdecl_TLazySingleton<AudioWidgets::FAudioAnalyzerRackUnitRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
          ::__l2::Singleton;
    _DAT_155371258 = ___xmm_00000000ffffffff0000008000000000;
    uRam0000000155371260 = _UNK_150631d98;
    atexit(`TLazySingleton<AudioWidgets::FAudioAnalyzerRackUnitRegistry>::GetLazy'::__l2::
           _dynamic_atexit_destructor_for__Singleton__);
    _Init_thread_footer(&`private:_static_class_TLazySingleton<class_AudioWidgets::FAudioAnalyzerRackUnitRegistry>&___ptr64___cdecl_TLazySingleton<AudioWidgets::FAudioAnalyzerRackUnitRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((DAT_155371280 == (TLazySingleton<class_AudioWidgets::FAudioAnalyzerRackUnitRegistry> *)0x0)
     && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                           ("Ptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                            ,0x6d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FAudioAnalyzerRackUnitRegistry *)(*pcVar1)();
    return pFVar3;
  }
  return (FAudioAnalyzerRackUnitRegistry *)DAT_155371280;
}

// GetRegisteredRackUnitTypeNames @ 14d934200

void __thiscall
AudioWidgets::FAudioAnalyzerRackUnitRegistry::GetRegisteredRackUnitTypeNames
          (FAudioAnalyzerRackUnitRegistry *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->RegisteredRackUnitTypes).field_0x8 -
           *(int *)&(this->RegisteredRackUnitTypes).field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->RegisteredRackUnitTypes).field_0x28;
  TStack_40.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(this->RegisteredRackUnitTypes).field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->RegisteredRackUnitTypes).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar13;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14d89ccc2;
      uVar5 = puVar13[lVar9 + 1];
    }
    uVar11 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_14d89ccc2:
  TStack_40._padding_ = CONCAT44(uVar11,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->RegisteredRackUnitTypes).field_0x28) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&this->RegisteredRackUnitTypes +
               (longlong)TStack_40.CurrentBitIndex * 0x18);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           *(undefined8 *)pFVar2;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GetRegisteredRackUnitTypes @ 14d934210

void __thiscall
AudioWidgets::FAudioAnalyzerRackUnitRegistry::GetRegisteredRackUnitTypes
          (FAudioAnalyzerRackUnitRegistry *this,
          TArray<AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->RegisteredRackUnitTypes).field_0x8 -
           *(int *)&(this->RegisteredRackUnitTypes).field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->RegisteredRackUnitTypes).field_0x28;
  TStack_40.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(this->RegisteredRackUnitTypes).field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->RegisteredRackUnitTypes).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar13;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14d89cf13;
      uVar5 = puVar13[lVar9 + 1];
    }
    uVar11 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_14d89cf13:
  TStack_40._padding_ = CONCAT44(uVar11,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->RegisteredRackUnitTypes).field_0x28) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&this->RegisteredRackUnitTypes +
               ((longlong)TStack_40.CurrentBitIndex * 3 + 1) * 8);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           *(undefined8 *)pFVar2;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// MakeRackUnit @ 14d943290

TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> * __thiscall
AudioWidgets::FAudioAnalyzerRackUnitRegistry::MakeRackUnit
          (FAudioAnalyzerRackUnitRegistry *this,
          TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> *__return_storage_ptr__,FName param_1,
          FAudioAnalyzerRackUnitConstructParams *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> *pTVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  FReadAccessScope local_28;
  
  uVar4 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  plVar8 = (longlong *)0x0;
  plVar9 = plVar8;
  if (*(int *)&(this->RegisteredRackUnitTypes).field_0x8 !=
      *(int *)&(this->RegisteredRackUnitTypes).field_0x34) {
    puVar7 = *(undefined1 **)&(this->RegisteredRackUnitTypes).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->RegisteredRackUnitTypes).field_0x38;
    }
    iVar5 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->RegisteredRackUnitTypes).field_0x48 - 1U &
                              param_1.Number + uVar4) * 4);
    if (iVar5 != -1) {
      do {
        plVar9 = (longlong *)(*(longlong *)&this->RegisteredRackUnitTypes + (longlong)iVar5 * 0x18);
        if (*(FName *)(*(longlong *)&this->RegisteredRackUnitTypes + (longlong)iVar5 * 0x18) ==
            param_1) {
          if (plVar9 != (longlong *)0x0) goto LAB_14d943345;
          break;
        }
        iVar5 = (int)plVar9[2];
        plVar9 = plVar8;
      } while (iVar5 != -1);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1> *)(*pcVar2)();
    return pTVar6;
  }
LAB_14d943345:
  lVar1 = plVar9[1];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x38),&local_28);
  if (*(int *)(lVar1 + 0x48) != 0) {
    plVar8 = *(longlong **)(lVar1 + 0x40);
  }
  (**(code **)(*plVar8 + 0x60))(plVar8,__return_storage_ptr__,param_2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return __return_storage_ptr__;
}

// RegisterRackUnitType @ 14d962840

void __thiscall
AudioWidgets::FAudioAnalyzerRackUnitRegistry::RegisterRackUnitType
          (FAudioAnalyzerRackUnitRegistry *this,FAudioAnalyzerRackUnitTypeInfo *param_1)

{
  TPairInitializer<FName_const_&,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*_const_&>
  local_res8 [2];
  FAudioAnalyzerRackUnitTypeInfo *local_18;
  FAudioAnalyzerRackUnitTypeInfo ***local_10;
  
  local_10 = &local_res8[0].Value;
  local_res8[0].Value = (FAudioAnalyzerRackUnitTypeInfo **)param_1;
  local_18 = param_1;
  TSet<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>,TDefaultMapHashableKeyFuncs<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_const_&,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*_const_&>_>
            ((TSet<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>,TDefaultMapHashableKeyFuncs<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,0>,FDefaultSetAllocator>
              *)this,local_res8,(bool *)&local_18);
  return;
}

// TearDown @ 14d975a40

void __cdecl AudioWidgets::FAudioAnalyzerRackUnitRegistry::TearDown(void)

{
  void *pvVar1;
  TSparseArray<TSparseSetElement<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *this;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TLazySingleton<class_AudioWidgets::FAudioAnalyzerRackUnitRegistry>&___ptr64___cdecl_TLazySingleton<AudioWidgets::FAudioAnalyzerRackUnitRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLazySingleton<class_AudioWidgets::FAudioAnalyzerRackUnitRegistry>&___ptr64___cdecl_TLazySingleton<AudioWidgets::FAudioAnalyzerRackUnitRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLazySingleton<class_AudioWidgets::FAudioAnalyzerRackUnitRegistry>&___ptr64___cdecl_TLazySingleton<AudioWidgets::FAudioAnalyzerRackUnitRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      DAT_155371280 =
           (TSparseArray<TSparseSetElement<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            *)0x0;
      atexit(`TLazySingleton<AudioWidgets::FAudioAnalyzerRackUnitRegistry>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<class_AudioWidgets::FAudioAnalyzerRackUnitRegistry>&___ptr64___cdecl_TLazySingleton<AudioWidgets::FAudioAnalyzerRackUnitRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  this = DAT_155371280;
  if (DAT_155371280 !=
      (TSparseArray<TSparseSetElement<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
       *)0x0) {
    *(undefined4 *)&DAT_155371280[1].field_0x10 = 0;
    pvVar1 = *(void **)&this[1].field_0x8;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (this);
    DAT_155371280 =
         (TSparseArray<TSparseSetElement<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          *)0x0;
  }
  return;
}

