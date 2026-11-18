// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 8

// ~TSparseArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FStorageEntry,FDefaultSparseArrayAllocator> @ 14314faf0

void __thiscall
TSparseArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FStorageEntry,FDefaultSparseArrayAllocator>
::
~TSparseArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FStorageEntry,FDefaultSparseArrayAllocator>
          (TSparseArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FStorageEntry,FDefaultSparseArrayAllocator>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,0x10,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<FName_const_,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14314fb90

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName_const_,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<FName_const_,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<FName_const_,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  DestroyElements(this,0,*(int *)&this->field_0x8);
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<void_*,FHttpRequestCommon_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14314fc30

void __thiscall
TSparseArray<TSparseSetElement<TTuple<void_*,FHttpRequestCommon_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<void_*,FHttpRequestCommon_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<void_*,FHttpRequestCommon_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14314fcd0

void __thiscall
TSparseArray<TSparseSetElement<TTuple<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (TSparseArray<TSparseSetElement<TTuple<UE::EventLoop::TResourceHandle<UE::EventLoop::FTimerHandleTraits>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *this)

{
  *(undefined4 *)&this->field_0x8 = 0;
  if (*(int *)&this->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
  }
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  if ((*(int *)&this->field_0x2c < 0) || (0x80 < *(int *)&this->field_0x2c)) {
    *(undefined4 *)&this->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x10,0);
  }
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// ~TSparseArray<TSparseSetElement<TTuple<enum_EHttpFlushReason,FHttpManager::FHttpFlushTimeLimit>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_> @ 14314fd70

void __thiscall
TSparseArray<TSparseSetElement<TTuple<enum_EHttpFlushReason,FHttpManager::FHttpFlushTimeLimit>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::
~TSparseArray<TSparseSetElement<TTuple<enum_EHttpFlushReason,FHttpManager::FHttpFlushTimeLimit>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          (void *this)

{
  *(undefined4 *)((longlong)this + 8) = 0;
  if (*(int *)((longlong)this + 0xc) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,this,0,(int *)((longlong)this + 0xc));
  }
  *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x34) = 0;
  *(undefined4 *)((longlong)this + 0x28) = 0;
  if ((*(int *)((longlong)this + 0x2c) < 0) || (0x80 < *(int *)((longlong)this + 0x2c))) {
    *(undefined4 *)((longlong)this + 0x2c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),0);
  }
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// DestroyElements @ 14315c640

void __thiscall
TSparseArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FStorageEntry,FDefaultSparseArrayAllocator>
::DestroyElements(TSparseArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FStorageEntry,FDefaultSparseArrayAllocator>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  
  uVar7 = (ulonglong)param_1;
  if ((longlong)uVar7 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar9 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    plVar11 = (longlong *)(uVar7 * 0x70 + 0x38 + *(longlong *)this);
    lVar8 = (longlong)(param_1 + param_2) - uVar7;
    do {
      iVar6 = (int)uVar7;
      if ((-1 < iVar6) && (iVar6 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar6) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar10 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar10 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar6;
        if (iVar6 < 0) {
          iVar4 = iVar6 + 0x1f;
        }
        if (((*(uint *)(puVar10 + (longlong)(iVar4 >> 5) * 4) & uVar9) != 0) && (plVar11[-5] != 0))
        {
          plVar5 = plVar11 + -3;
          if ((longlong *)*plVar11 != (longlong *)0x0) {
            plVar5 = (longlong *)*plVar11;
          }
          (**(code **)(*plVar5 + 0x10))();
        }
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
      plVar11 = plVar11 + 0xe;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}

// DestroyElements @ 14315c740

void __thiscall
TSparseArray<TSparseSetElement<TTuple<FName_const_,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
::DestroyElements(TSparseArray<TSparseSetElement<TTuple<FName_const_,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *this,int param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  
  uVar6 = (ulonglong)param_1;
  if ((longlong)uVar6 < (longlong)(param_1 + param_2)) {
    bVar2 = (byte)param_1 & 0x1f;
    uVar8 = 1 << bVar2 | 1U >> 0x20 - bVar2;
    puVar10 = (undefined8 *)(uVar6 * 0x20 + 8 + *(longlong *)this);
    lVar7 = (longlong)(param_1 + param_2) - uVar6;
    do {
      iVar5 = (int)uVar6;
      if ((-1 < iVar5) && (iVar5 < *(int *)&this->field_0x28)) {
        if ((*(int *)&this->field_0x28 <= iVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar9 = &this->field_0x10;
        if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
          puVar9 = *(undefined1 **)&this->field_0x20;
        }
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = iVar5 + 0x1f;
        }
        if (((*(uint *)(puVar9 + (longlong)(iVar4 >> 5) * 4) & uVar8) != 0) &&
           ((void *)*puVar10 != (void *)0x0)) {
          FMemory::Free((void *)*puVar10);
        }
      }
      uVar6 = (ulonglong)(iVar5 + 1);
      uVar8 = uVar8 << 1 | (uint)((int)uVar8 < 0);
      puVar10 = puVar10 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// RemoveAt @ 143178340

void __thiscall
TSparseArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FStorageEntry,FDefaultSparseArrayAllocator>
::RemoveAt(TSparseArray<UE::EventLoop::TManagedStorage<UE::EventLoop::FTimerData,UE::EventLoop::FTimerManagerDefaultTraits::FStorageTraits>::FStorageEntry,FDefaultSparseArrayAllocator>
           *this,int param_1,int param_2)

{
  longlong lVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  uVar10 = (ulonglong)param_1;
  DestroyElements(this,param_1,param_2);
  lVar1 = *(longlong *)this;
  if (param_2 != 0) {
    bVar3 = (byte)param_1 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    puVar12 = (undefined4 *)(uVar10 * 0x70 + lVar1);
    do {
      iVar9 = (int)uVar10;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      if (((*(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar11) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationFlags[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                             ,0xc5,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)&this->field_0x34 != 0) {
        *(int *)((longlong)*(int *)&this->field_0x30 * 0x70 + lVar1) = iVar9;
      }
      *puVar12 = 0xffffffff;
      if (*(int *)&this->field_0x34 < 1) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)&this->field_0x30;
      }
      puVar12[1] = uVar6;
      *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
      *(int *)&this->field_0x30 = iVar9;
      if (((iVar9 < 0) || (*(int *)&this->field_0x28 <= iVar9)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar8 = &this->field_0x10;
      if (*(undefined1 **)&this->field_0x20 != (undefined1 *)0x0) {
        puVar8 = *(undefined1 **)&this->field_0x20;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      puVar12 = puVar12 + 0x1c;
      uVar7 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)(iVar5 >> 5) * 4) & uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

