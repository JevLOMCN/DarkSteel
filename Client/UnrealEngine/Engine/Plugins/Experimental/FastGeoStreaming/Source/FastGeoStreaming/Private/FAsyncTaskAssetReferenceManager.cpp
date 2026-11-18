// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 3

// AddReferencedObjects @ 14da20280

void __thiscall
FastGeo::FAsyncTaskAssetReferenceManager::AddReferencedObjects
          (FAsyncTaskAssetReferenceManager *this,FReferenceCollector *param_1)

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
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->TasksAssets).field_0x28;
  puVar1 = &(this->TasksAssets).field_0x10;
  iVar11 = 0;
  iVar13 = 0;
  uVar6 = 1;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->TasksAssets).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14da2032d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14da2032d:
  uVar10 = *(uint *)&(this->TasksAssets).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->TasksAssets).field_0x8 -
                       *(int *)&(this->TasksAssets).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->TasksAssets).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(this->TasksAssets).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14da20430;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14da20430:
  while( true ) {
    if (*(int *)&(this->TasksAssets).field_0x8 - *(int *)&(this->TasksAssets).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FGuid,TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    (**(code **)(param_1->_padding_ + 0x90))
              (param_1,*(undefined8 *)
                        (*(longlong *)&this->TasksAssets +
                         (longlong)TStack_60.CurrentBitIndex * 0x28 + 0x10),
               *(undefined4 *)
                (*(longlong *)&this->TasksAssets + 0x18 + (longlong)TStack_60.CurrentBitIndex * 0x28
                ),0,0);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// Get @ 14da29560

FAsyncTaskAssetReferenceManager * __cdecl FastGeo::FAsyncTaskAssetReferenceManager::Get(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FastGeo::FAsyncTaskAssetReferenceManager&___ptr64___cdecl_FastGeo::FAsyncTaskAssetReferenceManager::Get(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FastGeo::FAsyncTaskAssetReferenceManager&___ptr64___cdecl_FastGeo::FAsyncTaskAssetReferenceManager::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FastGeo::FAsyncTaskAssetReferenceManager&___ptr64___cdecl_FastGeo::FAsyncTaskAssetReferenceManager::Get(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FastGeo::FAsyncTaskAssetReferenceManager&___ptr64___cdecl_FastGeo::FAsyncTaskAssetReferenceManager::Get(void)'
      ::__l2::Manager._padding_._0_2_ = 0;
      `public:_static_class_FastGeo::FAsyncTaskAssetReferenceManager&___ptr64___cdecl_FastGeo::FAsyncTaskAssetReferenceManager::Get(void)'
      ::__l2::Manager._padding_ = (longlong)&___7FGCObject__6B_;
      FGCObject::RegisterGCObject
                ((FGCObject *)
                 &`public:_static_class_FastGeo::FAsyncTaskAssetReferenceManager&___ptr64___cdecl_FastGeo::FAsyncTaskAssetReferenceManager::Get(void)'
                  ::__l2::Manager);
      `public:_static_class_FastGeo::FAsyncTaskAssetReferenceManager&___ptr64___cdecl_FastGeo::FAsyncTaskAssetReferenceManager::Get(void)'
      ::__l2::Manager.TasksAssets._44_4_ = 0x80;
      `public:_static_class_FastGeo::FAsyncTaskAssetReferenceManager&___ptr64___cdecl_FastGeo::FAsyncTaskAssetReferenceManager::Get(void)'
      ::__l2::Manager._padding_ = (longlong)&___7FAsyncTaskAssetReferenceManager_FastGeo__6B_;
      `public:_static_class_FastGeo::FAsyncTaskAssetReferenceManager&___ptr64___cdecl_FastGeo::FAsyncTaskAssetReferenceManager::Get(void)'
      ::__l2::Manager.TasksAssets._48_4_ = 0xffffffff;
      `public:_static_class_FastGeo::FAsyncTaskAssetReferenceManager&___ptr64___cdecl_FastGeo::FAsyncTaskAssetReferenceManager::Get(void)'
      ::__l2::Manager.TasksAssets._0_8_ = 0;
      `public:_static_class_FastGeo::FAsyncTaskAssetReferenceManager&___ptr64___cdecl_FastGeo::FAsyncTaskAssetReferenceManager::Get(void)'
      ::__l2::Manager.TasksAssets._8_8_ = 0;
      `public:_static_class_FastGeo::FAsyncTaskAssetReferenceManager&___ptr64___cdecl_FastGeo::FAsyncTaskAssetReferenceManager::Get(void)'
      ::__l2::Manager.TasksAssets._32_8_ = 0;
      `public:_static_class_FastGeo::FAsyncTaskAssetReferenceManager&___ptr64___cdecl_FastGeo::FAsyncTaskAssetReferenceManager::Get(void)'
      ::__l2::Manager.TasksAssets._40_4_ = 0;
      `public:_static_class_FastGeo::FAsyncTaskAssetReferenceManager&___ptr64___cdecl_FastGeo::FAsyncTaskAssetReferenceManager::Get(void)'
      ::__l2::Manager.TasksAssets._52_4_ = 0;
      `public:_static_class_FastGeo::FAsyncTaskAssetReferenceManager&___ptr64___cdecl_FastGeo::FAsyncTaskAssetReferenceManager::Get(void)'
      ::__l2::Manager.TasksAssets._64_8_ = 0;
      `public:_static_class_FastGeo::FAsyncTaskAssetReferenceManager&___ptr64___cdecl_FastGeo::FAsyncTaskAssetReferenceManager::Get(void)'
      ::__l2::Manager.TasksAssets._72_4_ = 0;
      atexit(`FastGeo::FAsyncTaskAssetReferenceManager::Get'::__l2::
             _dynamic_atexit_destructor_for__Manager__);
      _Init_thread_footer(&`public:_static_class_FastGeo::FAsyncTaskAssetReferenceManager&___ptr64___cdecl_FastGeo::FAsyncTaskAssetReferenceManager::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FastGeo::FAsyncTaskAssetReferenceManager&___ptr64___cdecl_FastGeo::FAsyncTaskAssetReferenceManager::Get(void)'
              ::__l2::Manager;
    }
  }
  return &`public:_static_class_FastGeo::FAsyncTaskAssetReferenceManager&___ptr64___cdecl_FastGeo::FAsyncTaskAssetReferenceManager::Get(void)'
          ::__l2::Manager;
}

// GetReferencerName @ 14da2b6c0

FString * __thiscall
FastGeo::FAsyncTaskAssetReferenceManager::GetReferencerName
          (FAsyncTaskAssetReferenceManager *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FAsyncTaskAssetReferenceManager");
  return __return_storage_ptr__;
}

