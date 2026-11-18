// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// FindOrCache @ 141757ce0

FText * __thiscall
FTextCache::FindOrCache
          (FTextCache *this,FText *__return_storage_ptr__,FString *param_1,FTextId *param_2)

{
  ITextData IVar1;
  FText *pFVar2;
  ITextData *pIVar3;
  ITextData *pIVar4;
  TRefCountPtr<ITextData> TVar5;
  uint local_res8;
  int iStackX_c;
  FLLMScope local_res18 [2];
  undefined1 local_res20 [8];
  FMemScope local_78;
  TRefCountPtr<ITextData> local_70;
  uint local_68;
  FText local_60;
  FTextId *local_50;
  FString **local_48;
  FString *local_40;
  TRefCountPtr<ITextData> *local_38;
  uint *local_30;
  
  FLLMScope::FLLMScope(local_res18,Localization,false,None,Default,true);
  FMemScope::FMemScope(&local_78,Localization,true);
  pFVar2 = FText::GetEmpty();
  local_70.Reference = (pFVar2->TextData).Reference;
  if (local_70.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.Reference + 8))(local_70.Reference,local_res20);
  }
  local_38 = &local_70;
  local_30 = &local_res8;
  pIVar4 = (ITextData *)0x0;
  local_48 = &local_40;
  local_68 = 0;
  local_res8 = local_res8 & 0xffffff00;
  local_50 = param_2;
  local_40 = param_1;
  TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
  ::
  Apply<UE::TWriteScopeLock<UE::FPlatformRWLock>,_TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>::FindAndApply<_FTextCache::FindOrCache_::__l3::<lambda_1>_>_::__l2::<lambda_1>_>
            ((TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
              *)this,param_2,(<lambda_1> *)&local_50);
  if ((char)local_res8 == '\0') {
    if (local_70.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_70.Reference + 0x10))();
    }
    local_res8 = (param_2->Namespace).Index;
    iStackX_c = (param_2->Key).Index;
    pIVar3 = ::operator_new(0x38);
    if (pIVar3 != (ITextData *)0x0) {
      pIVar3[1] = (ITextData)0x0;
      *pIVar3 = (ITextData)&___7FTextHistory_Base__6B_;
      IVar1._4_4_ = iStackX_c;
      IVar1._0_4_ = local_res8;
      *(undefined1 *)(pIVar3 + 2) = 0;
      pIVar3[3] = IVar1;
      pIVar3[4] = (ITextData)0x0;
      pIVar3[4] = (ITextData)(param_1->Data).AllocatorInstance.Data;
      (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pIVar3 + 5) = (param_1->Data).ArrayNum;
      *(int *)&pIVar3[5].field_0x4 = (param_1->Data).ArrayMax;
      (param_1->Data).ArrayNum = 0;
      (param_1->Data).ArrayMax = 0;
      pIVar3[6] = (ITextData)0x0;
      LOCK();
      *(int *)(pIVar3 + 1) = *(int *)(pIVar3 + 1) + 1;
      UNLOCK();
      pIVar4 = pIVar3;
    }
    local_60.Flags = 8;
    local_60.TextData.Reference = pIVar4;
    TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
    ::Add((TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
           *)this,param_2,&local_60);
    (__return_storage_ptr__->TextData).Reference = local_60.TextData.Reference;
    __return_storage_ptr__->Flags = local_60.Flags;
    local_60.TextData.Reference = (ITextData *)0x0;
    pFVar2 = FText::GetEmpty();
    TVar5.Reference = local_60.TextData.Reference;
    pIVar4 = (pFVar2->TextData).Reference;
    if (local_60.TextData.Reference != pIVar4) {
      local_60.TextData.Reference = pIVar4;
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 8))(pIVar4,&local_res8);
      }
      if (TVar5.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar5.Reference + 0x10))(TVar5.Reference);
      }
    }
    local_60.Flags = 0;
    TVar5.Reference = local_60.TextData.Reference;
  }
  else {
    (__return_storage_ptr__->TextData).Reference = local_70.Reference;
    __return_storage_ptr__->Flags = local_68;
    local_70.Reference = (ITextData *)0x0;
    pFVar2 = FText::GetEmpty();
    TVar5.Reference = local_70.Reference;
    pIVar4 = (pFVar2->TextData).Reference;
    if (local_70.Reference != pIVar4) {
      local_70.Reference = pIVar4;
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res20);
      }
      if (TVar5.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar5.Reference + 0x10))(TVar5.Reference);
      }
    }
    local_68 = 0;
    TVar5.Reference = local_70.Reference;
  }
  if (TVar5.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*TVar5.Reference + 0x10))();
  }
  FMemScope::~FMemScope(&local_78);
  FLLMScope::~FLLMScope(local_res18);
  return __return_storage_ptr__;
}

// FindOrCache @ 141757f00

FText * __thiscall
FTextCache::FindOrCache
          (FTextCache *this,FText *__return_storage_ptr__,wchar_t *param_1,FTextId *param_2)

{
  size_t sVar1;
  TStringView<wchar_t> local_18;
  
  local_18.Size = 0;
  local_18.DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_1);
    local_18.Size = (int)sVar1;
  }
  FindOrCache(this,__return_storage_ptr__,&local_18,param_2);
  return __return_storage_ptr__;
}

// FindOrCache @ 141757f70

FText * __thiscall
FTextCache::FindOrCache
          (FTextCache *this,FText *__return_storage_ptr__,TStringView<wchar_t> *param_1,
          FTextId *param_2)

{
  FTextId FVar1;
  TRefCountPtr<ITextData> TVar2;
  FText *pFVar3;
  ITextData *pIVar4;
  ForAnyElementType FVar5;
  int iVar6;
  ITextData IVar7;
  TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
  *local_res8;
  uint local_res18 [2];
  FLLMScope local_res20 [2];
  FString local_98;
  FText local_88;
  FTextId local_78;
  TStringView<wchar_t> **local_70;
  FMemScope local_68;
  TStringView<wchar_t> *local_60;
  FString *local_58;
  uint *local_50;
  ITextData local_48 [2];
  
  local_res8 = (TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
                *)this;
  FLLMScope::FLLMScope(local_res20,Localization,false,None,Default,true);
  FMemScope::FMemScope(&local_68,Localization,true);
  pFVar3 = FText::GetEmpty();
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)(pFVar3->TextData).Reference;
  if ((ITextData *)local_98.Data.AllocatorInstance.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_98.Data.AllocatorInstance.Data + 8))
              (local_98.Data.AllocatorInstance.Data,&local_78);
  }
  local_58 = &local_98;
  local_50 = local_res18;
  IVar7 = (ITextData)0x0;
  local_70 = &local_60;
  iVar6 = 0;
  local_98.Data.ArrayNum = 0;
  local_res18[0] = local_res18[0] & 0xffffff00;
  local_78 = (FTextId)param_2;
  local_60 = param_1;
  TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
  ::
  Apply<UE::TWriteScopeLock<UE::FPlatformRWLock>,_TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>::FindAndApply<_FTextCache::FindOrCache_::__l3::<lambda_1>_>_::__l2::<lambda_1>_>
            ((TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
              *)this,param_2,(<lambda_1> *)&local_78);
  if ((char)local_res18[0] == '\0') {
    if ((ITextData *)local_98.Data.AllocatorInstance.Data != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_98.Data.AllocatorInstance.Data + 0x10))();
    }
    FVar1 = *param_2;
    pIVar4 = (ITextData *)
             ::FString::ConstructFromPtrSize
                       (&local_98,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
    local_res18[0] = 0;
    if (local_48 != pIVar4) {
      IVar7 = *pIVar4;
      *pIVar4 = (ITextData)0x0;
      local_res18[0] = *(uint *)&pIVar4[1].field_0x4;
      iVar6 = *(int *)(pIVar4 + 1);
      pIVar4[1] = (ITextData)0x0;
    }
    if ((ITextData *)local_98.Data.AllocatorInstance.Data != (ITextData *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    local_78 = FVar1;
    pIVar4 = ::operator_new(0x38);
    local_88.TextData.Reference = (ITextData *)(ITextData)0x0;
    if (pIVar4 != (ITextData *)0x0) {
      pIVar4[1] = (ITextData)0x0;
      *pIVar4 = (ITextData)&___7FTextHistory_Base__6B_;
      *(undefined1 *)(pIVar4 + 2) = 0;
      *(FTextId *)(pIVar4 + 3) = local_78;
      pIVar4[4] = IVar7;
      *(int *)(pIVar4 + 5) = iVar6;
      *(uint *)&pIVar4[5].field_0x4 = local_res18[0];
      pIVar4[6] = (ITextData)0x0;
      LOCK();
      *(int *)(pIVar4 + 1) = *(int *)(pIVar4 + 1) + 1;
      UNLOCK();
      local_88.TextData.Reference = pIVar4;
      IVar7 = (ITextData)0x0;
    }
    local_88.Flags = 8;
    if (IVar7 != (ITextData)0x0) {
      FMemory::Free((void *)IVar7);
    }
    TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
    ::Add(local_res8,param_2,&local_88);
    (__return_storage_ptr__->TextData).Reference = local_88.TextData.Reference;
    __return_storage_ptr__->Flags = local_88.Flags;
    local_88.TextData.Reference = (ITextData *)0x0;
    pFVar3 = FText::GetEmpty();
    TVar2.Reference = local_88.TextData.Reference;
    pIVar4 = (pFVar3->TextData).Reference;
    if (local_88.TextData.Reference != pIVar4) {
      local_88.TextData.Reference = pIVar4;
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 8))(pIVar4,&local_res8);
      }
      if (TVar2.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar2.Reference + 0x10))(TVar2.Reference);
      }
    }
    local_88.Flags = 0;
    FVar5.Data = (FScriptContainerElement *)local_88.TextData.Reference;
  }
  else {
    (__return_storage_ptr__->TextData).Reference = (ITextData *)local_98.Data.AllocatorInstance.Data
    ;
    __return_storage_ptr__->Flags = local_98.Data.ArrayNum;
    local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar3 = FText::GetEmpty();
    FVar5.Data = local_98.Data.AllocatorInstance.Data;
    pIVar4 = (pFVar3->TextData).Reference;
    if ((ITextData *)local_98.Data.AllocatorInstance.Data != pIVar4) {
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)pIVar4;
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 8))(pIVar4,&local_res8);
      }
      if ((ITextData *)FVar5.Data != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)FVar5.Data + 0x10))(FVar5.Data);
      }
    }
    local_98.Data.ArrayNum = 0;
    FVar5.Data = local_98.Data.AllocatorInstance.Data;
  }
  if ((ITextData *)FVar5.Data != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)FVar5.Data + 0x10))();
  }
  FMemScope::~FMemScope(&local_68);
  FLLMScope::~FLLMScope(local_res20);
  return __return_storage_ptr__;
}

// Get @ 14175b500

FTextCache * __cdecl FTextCache::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FTextCache *pFVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TLazySingleton<class_FTextCache>&___ptr64___cdecl_TLazySingleton<FTextCache>::GetLazy(void_(__cdecl*)(void*___ptr64))'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TLazySingleton<class_FTextCache>&___ptr64___cdecl_TLazySingleton<FTextCache>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TLazySingleton<class_FTextCache>&___ptr64___cdecl_TLazySingleton<FTextCache>::GetLazy(void_(__cdecl*)(void*___ptr64))'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    lVar5 = 0x20;
    puVar4 = &DAT_154eb52c0;
    do {
      puVar4[-2] = 0;
      puVar4[-1] = 0;
      *puVar4 = 0;
      puVar4[3] = 0;
      *(undefined4 *)(puVar4 + 4) = 0;
      *(undefined4 *)((longlong)puVar4 + 0x24) = 0x80;
      *(undefined4 *)(puVar4 + 5) = 0xffffffff;
      *(undefined4 *)((longlong)puVar4 + 0x2c) = 0;
      puVar4[7] = 0;
      *(undefined4 *)(puVar4 + 8) = 0;
      puVar4 = puVar4 + 0xb;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    DAT_154eb5db0 =
         &`private:_static_class_TLazySingleton<class_FTextCache>&___ptr64___cdecl_TLazySingleton<FTextCache>::GetLazy(void_(__cdecl*)(void*___ptr64))'
          ::__l2::Singleton;
    atexit(`TLazySingleton<FTextCache>::GetLazy'::__l2::_dynamic_atexit_destructor_for__Singleton__)
    ;
    _Init_thread_footer(&`private:_static_class_TLazySingleton<class_FTextCache>&___ptr64___cdecl_TLazySingleton<FTextCache>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((DAT_154eb5db0 == (TLazySingleton<class_FTextCache> *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                         ,0x6d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FTextCache *)(*pcVar1)();
    return pFVar3;
  }
  return (FTextCache *)DAT_154eb5db0;
}

// RemoveCache @ 1417766a0

void __thiscall
FTextCache::RemoveCache
          (FTextCache *this,TSet<FTextId,DefaultKeyFuncs<FTextId,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  PSRWLOCK SRWLock;
  uint uVar10;
  uint uVar11;
  FTextId *pFVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar13 = 0;
  uVar6 = 1;
  iVar16 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar11 = *puVar17;
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar13;
      iVar16 = iVar16 + 0x20;
      iVar13 = iVar13 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14177673d;
      uVar11 = puVar17[lVar8 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iVar7 = local_res18 + -1 + iVar16;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14177673d:
  uVar11 = *(uint *)&(param_1->Elements).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar13);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar11 != uVar6) {
    puVar15 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar13 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar13;
      uVar10 = uVar10 + 0x20;
      iVar13 = iVar13 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_141776840;
      uVar11 = *(uint *)(puVar15 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    uVar11 = local_res20 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_141776840:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_40) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<FTextId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar12 = (FTextId *)
              ((longlong)TStack_60.CurrentBitIndex * 0x10 + *(longlong *)&param_1->Elements);
    uVar6 = ::GetTypeHash(&pFVar12->Key);
    uVar10 = ::GetTypeHash((FTextKey *)pFVar12);
    uVar14 = uVar10 - uVar6 ^ uVar6 >> 0xd;
    uVar10 = (-0x61c88647 - uVar14) - uVar6 ^ uVar14 << 8;
    uVar9 = (uVar6 - uVar10) - uVar14 ^ uVar10 >> 0xd;
    uVar14 = (uVar14 - uVar9) - uVar10 ^ uVar9 >> 0xc;
    uVar6 = (uVar10 - uVar14) - uVar9 ^ uVar14 << 0x10;
    uVar10 = (uVar9 - uVar6) - uVar14 ^ uVar6 >> 5;
    uVar9 = (uVar14 - uVar10) - uVar6 ^ uVar10 >> 3;
    uVar6 = (uVar6 - uVar9) - uVar10 ^ uVar9 << 10;
    uVar6 = (uVar10 - uVar6) - uVar9 ^ uVar6 >> 0xf;
    SRWLock = (PSRWLOCK)(&(this->CachedText).field_0x0 + (ulonglong)(uVar6 & 0x1f) * 0x58);
    if ((SRWLock == (PSRWLOCK)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    AcquireSRWLockExclusive(SRWLock);
    if (*(int *)&SRWLock[2].Ptr != *(int *)((longlong)&SRWLock[7].Ptr + 4)) {
      TSet<TTuple<FTextId,FText>,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FDefaultSetAllocator>
      ::RemoveImpl<FTextId>
                ((TSet<TTuple<FTextId,FText>,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FDefaultSetAllocator>
                  *)(SRWLock + 1),uVar6,pFVar12);
    }
    ReleaseSRWLockExclusive(SRWLock);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// RemoveCache @ 1417769a0

void __thiscall FTextCache::RemoveCache(FTextCache *this,FTextId *param_1)

{
  FTextId *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  PSRWLOCK SRWLock;
  uint uVar7;
  
  pFVar1 = param_1 + 1;
  while( true ) {
    if (param_1 == pFVar1) {
      return;
    }
    uVar4 = ::GetTypeHash(&param_1->Key);
    uVar5 = ::GetTypeHash(&param_1->Namespace);
    uVar7 = uVar5 - uVar4 ^ uVar4 >> 0xd;
    uVar5 = (-0x61c88647 - uVar7) - uVar4 ^ uVar7 << 8;
    uVar6 = (uVar4 - uVar5) - uVar7 ^ uVar5 >> 0xd;
    uVar7 = (uVar7 - uVar6) - uVar5 ^ uVar6 >> 0xc;
    uVar4 = (uVar5 - uVar7) - uVar6 ^ uVar7 << 0x10;
    uVar5 = (uVar6 - uVar4) - uVar7 ^ uVar4 >> 5;
    uVar6 = (uVar7 - uVar5) - uVar4 ^ uVar5 >> 3;
    uVar4 = (uVar4 - uVar6) - uVar5 ^ uVar6 << 10;
    uVar4 = (uVar5 - uVar4) - uVar6 ^ uVar4 >> 0xf;
    SRWLock = (PSRWLOCK)(&(this->CachedText).field_0x0 + (ulonglong)(uVar4 & 0x1f) * 0x58);
    if ((SRWLock == (PSRWLOCK)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L""), bVar3)) break;
    AcquireSRWLockExclusive(SRWLock);
    if (*(int *)&SRWLock[2].Ptr != *(int *)((longlong)&SRWLock[7].Ptr + 4)) {
      TSet<TTuple<FTextId,FText>,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FDefaultSetAllocator>
      ::RemoveImpl<FTextId>
                ((TSet<TTuple<FTextId,FText>,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FDefaultSetAllocator>
                  *)(SRWLock + 1),uVar4,param_1);
    }
    ReleaseSRWLockExclusive(SRWLock);
    param_1 = param_1 + 1;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// RemoveCache @ 141776af0

void __thiscall FTextCache::RemoveCache(FTextCache *this,TArrayView<FTextId_const_,int> *param_1)

{
  FTextId *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  PSRWLOCK SRWLock;
  FTextId *pFVar7;
  uint uVar8;
  
  pFVar7 = param_1->DataPtr;
  pFVar1 = pFVar7 + param_1->ArrayNum;
  while( true ) {
    if (pFVar7 == pFVar1) {
      return;
    }
    uVar4 = ::GetTypeHash(&pFVar7->Key);
    uVar5 = ::GetTypeHash(&pFVar7->Namespace);
    uVar8 = uVar5 - uVar4 ^ uVar4 >> 0xd;
    uVar5 = (-0x61c88647 - uVar8) - uVar4 ^ uVar8 << 8;
    uVar6 = (uVar4 - uVar5) - uVar8 ^ uVar5 >> 0xd;
    uVar8 = (uVar8 - uVar6) - uVar5 ^ uVar6 >> 0xc;
    uVar4 = (uVar5 - uVar8) - uVar6 ^ uVar8 << 0x10;
    uVar5 = (uVar6 - uVar4) - uVar8 ^ uVar4 >> 5;
    uVar6 = (uVar8 - uVar5) - uVar4 ^ uVar5 >> 3;
    uVar4 = (uVar4 - uVar6) - uVar5 ^ uVar6 << 10;
    uVar4 = (uVar5 - uVar4) - uVar6 ^ uVar4 >> 0xf;
    SRWLock = (PSRWLOCK)(&(this->CachedText).field_0x0 + (ulonglong)(uVar4 & 0x1f) * 0x58);
    if ((SRWLock == (PSRWLOCK)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L""), bVar3)) break;
    AcquireSRWLockExclusive(SRWLock);
    if (*(int *)&SRWLock[2].Ptr != *(int *)((longlong)&SRWLock[7].Ptr + 4)) {
      TSet<TTuple<FTextId,FText>,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FDefaultSetAllocator>
      ::RemoveImpl<FTextId>
                ((TSet<TTuple<FTextId,FText>,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FDefaultSetAllocator>
                  *)(SRWLock + 1),uVar4,pFVar7);
    }
    ReleaseSRWLockExclusive(SRWLock);
    pFVar7 = pFVar7 + 1;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// TearDown @ 14177ed70

void __cdecl FTextCache::TearDown(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TLazySingleton<class_FTextCache>&___ptr64___cdecl_TLazySingleton<FTextCache>::GetLazy(void_(__cdecl*)(void*___ptr64))'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLazySingleton<class_FTextCache>&___ptr64___cdecl_TLazySingleton<FTextCache>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLazySingleton<class_FTextCache>&___ptr64___cdecl_TLazySingleton<FTextCache>::GetLazy(void_(__cdecl*)(void*___ptr64))'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      DAT_154eb5db0 =
           (TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
            *)0x0;
      atexit(`TLazySingleton<FTextCache>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<class_FTextCache>&___ptr64___cdecl_TLazySingleton<FTextCache>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (DAT_154eb5db0 !=
      (TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
       *)0x0) {
    TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
    ::
    ~TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
              (DAT_154eb5db0);
    DAT_154eb5db0 =
         (TStripedMapBase<32,TMap<FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>_>,FTextId,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextId,FText,0>,FTransactionallySafeStripedMapLockingPolicy>
          *)0x0;
  }
  return;
}

