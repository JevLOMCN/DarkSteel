// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 8

// TNetChunkedArray<unsigned_short,100,TSizedDefaultAllocator<32>_> @ 144265d10

TNetChunkedArray<unsigned_short,100,TSizedDefaultAllocator<32>_> * __thiscall
UE::Net::TNetChunkedArray<unsigned_short,100,TSizedDefaultAllocator<32>_>::
TNetChunkedArray<unsigned_short,100,TSizedDefaultAllocator<32>_>
          (TNetChunkedArray<unsigned_short,100,TSizedDefaultAllocator<32>_> *this,int param_1,
          EInitMemory param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  bool bVar6;
  uint uVar7;
  ulong64 uVar8;
  void *_Dst;
  TNetChunkedArray<unsigned_short,100,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  ulonglong uVar11;
  void *local_28 [2];
  
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  this->_padding_ = 0;
  *puVar1 = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  if (*puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(int *)&this->_padding_ = param_1;
  puVar2 = (undefined8 *)this->_padding_;
  this->NumPreAllocatedChunks = 0;
  uVar5 = (param_1 + 99) / 100;
  for (iVar10 = (int)this->_padding_; iVar10 != 0; iVar10 = iVar10 + -1) {
    ::operator_delete((void *)*puVar2,200);
    puVar2 = puVar2 + 1;
  }
  if (-1 < (int)uVar5) {
    *(undefined4 *)&this->_padding_ = 0;
    if (*puVar1 != uVar5) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar5,(ForAnyElementType *)this,0,(int *)puVar1);
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (longlong)(int)uVar5;
    uVar8 = SUB168(ZEXT816(200) * auVar4,0);
    if (SUB168(ZEXT816(200) * auVar4,8) != 0) {
      uVar8 = 0xffffffffffffffff;
    }
    _Dst = operator_new__(uVar8);
    if (0 < (int)uVar5) {
      uVar11 = (ulonglong)uVar5;
      if (param_2 == Zero) {
        do {
          memset(_Dst,0,200);
          local_28[0] = _Dst;
          if ((((void **)this->_padding_ <= local_28) &&
              (local_28 < (void **)this->_padding_ + (int)*puVar1)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TNetChunkedArray<unsigned_short,100,TSizedDefaultAllocator<32>_> *)(*pcVar3)()
            ;
            return pTVar9;
          }
          uVar7 = (uint)this->_padding_;
          if (uVar7 == *puVar1) {
            uVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,(ForAnyElementType *)this,(int *)puVar1);
          }
          _Dst = (void *)((longlong)_Dst + 200);
          *(uint *)&this->_padding_ = uVar7 + 1;
          *(void **)(this->_padding_ + (longlong)(int)uVar7 * 8) = local_28[0];
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      else {
        do {
          local_28[0] = _Dst;
          if ((((void **)this->_padding_ <= local_28) &&
              (local_28 < (void **)this->_padding_ + (int)*puVar1)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TNetChunkedArray<unsigned_short,100,TSizedDefaultAllocator<32>_> *)(*pcVar3)()
            ;
            return pTVar9;
          }
          uVar7 = (uint)this->_padding_;
          if (uVar7 == *puVar1) {
            uVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,(ForAnyElementType *)this,(int *)puVar1);
          }
          _Dst = (void *)((longlong)_Dst + 200);
          *(uint *)&this->_padding_ = uVar7 + 1;
          *(void **)(this->_padding_ + (longlong)(int)uVar7 * 8) = local_28[0];
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
    }
    this->NumPreAllocatedChunks = uVar5;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
}

// TNetChunkedArray<unsigned_char_*,100,TSizedDefaultAllocator<32>_> @ 144265fe0

TNetChunkedArray<unsigned_char_*,100,TSizedDefaultAllocator<32>_> * __thiscall
UE::Net::TNetChunkedArray<unsigned_char_*,100,TSizedDefaultAllocator<32>_>::
TNetChunkedArray<unsigned_char_*,100,TSizedDefaultAllocator<32>_>
          (TNetChunkedArray<unsigned_char_*,100,TSizedDefaultAllocator<32>_> *this,int param_1,
          EInitMemory param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  bool bVar6;
  uint uVar7;
  ulong64 uVar8;
  void *_Dst;
  TNetChunkedArray<unsigned_char_*,100,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  ulonglong uVar11;
  void *local_28 [2];
  
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  this->_padding_ = 0;
  *puVar1 = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  if (*puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(int *)&this->_padding_ = param_1;
  puVar2 = (undefined8 *)this->_padding_;
  this->NumPreAllocatedChunks = 0;
  uVar5 = (param_1 + 99) / 100;
  for (iVar10 = (int)this->_padding_; iVar10 != 0; iVar10 = iVar10 + -1) {
    ::operator_delete((void *)*puVar2,800);
    puVar2 = puVar2 + 1;
  }
  if (-1 < (int)uVar5) {
    *(undefined4 *)&this->_padding_ = 0;
    if (*puVar1 != uVar5) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar5,(ForAnyElementType *)this,0,(int *)puVar1);
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (longlong)(int)uVar5;
    uVar8 = SUB168(ZEXT816(800) * auVar4,0);
    if (SUB168(ZEXT816(800) * auVar4,8) != 0) {
      uVar8 = 0xffffffffffffffff;
    }
    _Dst = operator_new__(uVar8);
    if (0 < (int)uVar5) {
      uVar11 = (ulonglong)uVar5;
      if (param_2 == Zero) {
        do {
          memset(_Dst,0,800);
          local_28[0] = _Dst;
          if ((((void **)this->_padding_ <= local_28) &&
              (local_28 < (void **)this->_padding_ + (int)*puVar1)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TNetChunkedArray<unsigned_char_*,100,TSizedDefaultAllocator<32>_> *)
                     (*pcVar3)();
            return pTVar9;
          }
          uVar7 = (uint)this->_padding_;
          if (uVar7 == *puVar1) {
            uVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,(ForAnyElementType *)this,(int *)puVar1);
          }
          _Dst = (void *)((longlong)_Dst + 800);
          *(uint *)&this->_padding_ = uVar7 + 1;
          *(void **)(this->_padding_ + (longlong)(int)uVar7 * 8) = local_28[0];
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      else {
        do {
          local_28[0] = _Dst;
          if ((((void **)this->_padding_ <= local_28) &&
              (local_28 < (void **)this->_padding_ + (int)*puVar1)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar3 = (code *)swi(3);
            pTVar9 = (TNetChunkedArray<unsigned_char_*,100,TSizedDefaultAllocator<32>_> *)
                     (*pcVar3)();
            return pTVar9;
          }
          uVar7 = (uint)this->_padding_;
          if (uVar7 == *puVar1) {
            uVar7 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,(ForAnyElementType *)this,(int *)puVar1);
          }
          _Dst = (void *)((longlong)_Dst + 800);
          *(uint *)&this->_padding_ = uVar7 + 1;
          *(void **)(this->_padding_ + (longlong)(int)uVar7 * 8) = local_28[0];
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
    }
    this->NumPreAllocatedChunks = uVar5;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
}

// TNetChunkedArray<TObjectPtr<UObject>,100,TSizedDefaultAllocator<32>_> @ 1442662b0

TNetChunkedArray<TObjectPtr<UObject>,100,TSizedDefaultAllocator<32>_> * __thiscall
UE::Net::TNetChunkedArray<TObjectPtr<UObject>,100,TSizedDefaultAllocator<32>_>::
TNetChunkedArray<TObjectPtr<UObject>,100,TSizedDefaultAllocator<32>_>
          (TNetChunkedArray<TObjectPtr<UObject>,100,TSizedDefaultAllocator<32>_> *this,int param_1,
          EInitMemory param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  bool bVar6;
  uint uVar7;
  ulong64 uVar8;
  void *_Dst;
  TNetChunkedArray<TObjectPtr<UObject>,100,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  ulonglong uVar11;
  void *_Dst_00;
  void *local_28 [2];
  
  _Dst_00 = (void *)0x0;
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  this->_padding_ = 0;
  *puVar1 = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  if (*puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(int *)&this->_padding_ = param_1;
  puVar2 = (undefined8 *)this->_padding_;
  this->NumPreAllocatedChunks = 0;
  uVar5 = (param_1 + 99) / 100;
  for (iVar10 = (int)this->_padding_; iVar10 != 0; iVar10 = iVar10 + -1) {
    ::operator_delete((void *)*puVar2,800);
    puVar2 = puVar2 + 1;
  }
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  *(undefined4 *)&this->_padding_ = 0;
  if (*puVar1 != uVar5) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar5,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (longlong)(int)uVar5;
  uVar8 = SUB168(ZEXT816(800) * auVar4,0);
  if (SUB168(ZEXT816(800) * auVar4,8) != 0) {
    uVar8 = 0xffffffffffffffff;
  }
  _Dst = operator_new__(uVar8);
  if (_Dst != (void *)0x0) {
    if (uVar5 == 0) goto LAB_14426656c;
    memset(_Dst,0,(longlong)(int)uVar5 * 800);
    _Dst_00 = _Dst;
  }
  if (0 < (int)uVar5) {
    uVar11 = (ulonglong)uVar5;
    if (param_2 == Zero) {
      do {
        memset(_Dst_00,0,800);
        local_28[0] = _Dst_00;
        if ((((void **)this->_padding_ <= local_28) &&
            (local_28 < (void **)this->_padding_ + (int)*puVar1)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TNetChunkedArray<TObjectPtr<UObject>,100,TSizedDefaultAllocator<32>_> *)
                   (*pcVar3)();
          return pTVar9;
        }
        uVar7 = (uint)this->_padding_;
        if (uVar7 == *puVar1) {
          uVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)this,(int *)puVar1);
        }
        _Dst_00 = (void *)((longlong)_Dst_00 + 800);
        *(uint *)&this->_padding_ = uVar7 + 1;
        *(void **)(this->_padding_ + (longlong)(int)uVar7 * 8) = local_28[0];
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    else {
      do {
        local_28[0] = _Dst_00;
        if ((((void **)this->_padding_ <= local_28) &&
            (local_28 < (void **)this->_padding_ + (int)*puVar1)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TNetChunkedArray<TObjectPtr<UObject>,100,TSizedDefaultAllocator<32>_> *)
                   (*pcVar3)();
          return pTVar9;
        }
        uVar7 = (uint)this->_padding_;
        if (uVar7 == *puVar1) {
          uVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)this,(int *)puVar1);
        }
        _Dst_00 = (void *)((longlong)_Dst_00 + 800);
        *(uint *)&this->_padding_ = uVar7 + 1;
        *(void **)(this->_padding_ + (longlong)(int)uVar7 * 8) = local_28[0];
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
LAB_14426656c:
  this->NumPreAllocatedChunks = uVar5;
  return this;
}

// TNetChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,100,TSizedDefaultAllocator<32>_> @ 1442665b0

/* WARNING: Enum "EIrisAsyncLoadingPriority": Some values do not have unique names */

TNetChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,100,TSizedDefaultAllocator<32>_>
* __thiscall
UE::Net::
TNetChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,100,TSizedDefaultAllocator<32>_>
::
TNetChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,100,TSizedDefaultAllocator<32>_>
          (TNetChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,100,TSizedDefaultAllocator<32>_>
           *this,int param_1,EInitMemory param_2)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulong64 uVar6;
  void *_Dst;
  TNetChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,100,TSizedDefaultAllocator<32>_>
  *pTVar7;
  void *pvVar8;
  ulonglong uVar9;
  void *local_28 [2];
  
  TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
  ::
  TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
            ((TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>
              *)this,0);
  this->NumPreAllocatedChunks = 0;
  *(int *)&this->_padding_ = param_1;
  uVar3 = (param_1 + 99) / 100;
  TIndirectArray<TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::Empty((TIndirectArray<TChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,5600,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *)this,uVar3);
  uVar9 = (ulonglong)(int)uVar3;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar9;
  uVar6 = SUB168(ZEXT816(0x15e0) * auVar2,0);
  if (SUB168(ZEXT816(0x15e0) * auVar2,8) != 0) {
    uVar6 = 0xffffffffffffffff;
  }
  _Dst = operator_new__(uVar6);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)0x0;
  }
  else {
    pvVar8 = _Dst;
    if (uVar3 == 0) goto LAB_1442667ff;
    do {
      _vector_constructor_iterator_
                (pvVar8,0x38,100,
                 Net::Private::FNetRefHandleManager::FReplicatedObjectData::FReplicatedObjectData);
      pvVar8 = (void *)((longlong)pvVar8 + 0x15e0);
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (0 < (int)uVar3) {
    uVar9 = (ulonglong)uVar3;
    if (param_2 == Zero) {
      do {
        memset(_Dst,0,0x15e0);
        local_28[0] = _Dst;
        if ((((void **)this->_padding_ <= local_28) &&
            (local_28 < (void **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar1 = (code *)swi(3);
          pTVar7 = (TNetChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,100,TSizedDefaultAllocator<32>_>
                    *)(*pcVar1)();
          return pTVar7;
        }
        iVar5 = (int)this->_padding_;
        if (iVar5 == *(int *)((longlong)&this->_padding_ + 4)) {
          iVar5 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)this,(int *)((longlong)&this->_padding_ + 4)
                            );
        }
        _Dst = (void *)((longlong)_Dst + 0x15e0);
        *(int *)&this->_padding_ = iVar5 + 1;
        *(void **)(this->_padding_ + (longlong)iVar5 * 8) = local_28[0];
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    else {
      do {
        local_28[0] = _Dst;
        if ((((void **)this->_padding_ <= local_28) &&
            (local_28 < (void **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar1 = (code *)swi(3);
          pTVar7 = (TNetChunkedArray<UE::Net::Private::FNetRefHandleManager::FReplicatedObjectData,100,TSizedDefaultAllocator<32>_>
                    *)(*pcVar1)();
          return pTVar7;
        }
        iVar5 = (int)this->_padding_;
        if (iVar5 == *(int *)((longlong)&this->_padding_ + 4)) {
          iVar5 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)this,(int *)((longlong)&this->_padding_ + 4)
                            );
        }
        _Dst = (void *)((longlong)_Dst + 0x15e0);
        *(int *)&this->_padding_ = iVar5 + 1;
        *(void **)(this->_padding_ + (longlong)iVar5 * 8) = local_28[0];
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
LAB_1442667ff:
  this->NumPreAllocatedChunks = uVar3;
  return this;
}

// AddToIndexUninitialized @ 14426c7b0

void __thiscall
UE::Net::TNetChunkedArray<unsigned_short,100,TSizedDefaultAllocator<32>_>::AddToIndexUninitialized
          (TNetChunkedArray<unsigned_short,100,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  ulonglong uVar4;
  int iVar5;
  void *local_18 [2];
  
  iVar5 = (int)this->_padding_;
  if (iVar5 <= param_1) {
    iVar5 = (param_1 - iVar5) + 1;
    if ((iVar5 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Count>=0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ChunkedArray.h"
                           ,0xf4,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar5 = (int)this->_padding_ + iVar5;
    *(int *)&this->_padding_ = iVar5;
    iVar2 = (iVar5 + 99) / 100;
    iVar5 = (int)this->_padding_;
    if (iVar5 < iVar2) {
      uVar4 = (ulonglong)(uint)(iVar2 - iVar5);
      do {
        local_18[0] = ::operator_new(200);
        if ((((void **)this->_padding_ <= local_18) &&
            (local_18 < (void **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar5 = (int)this->_padding_;
        if (iVar5 == *(int *)((longlong)&this->_padding_ + 4)) {
          iVar5 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)this,(int *)((longlong)&this->_padding_ + 4)
                            );
        }
        *(int *)&this->_padding_ = iVar5 + 1;
        *(void **)(this->_padding_ + (longlong)iVar5 * 8) = local_18[0];
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  return;
}

// AddToIndexUninitialized @ 14426c900

void __thiscall
UE::Net::TNetChunkedArray<TObjectPtr<UObject>,100,TSizedDefaultAllocator<32>_>::
AddToIndexUninitialized
          (TNetChunkedArray<TObjectPtr<UObject>,100,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  undefined8 *local_18 [2];
  
  iVar8 = (int)this->_padding_;
  if (iVar8 <= param_1) {
    iVar8 = (param_1 - iVar8) + 1;
    if ((iVar8 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Count>=0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ChunkedArray.h"
                           ,0xf4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar8 = (int)this->_padding_ + iVar8;
    *(int *)&this->_padding_ = iVar8;
    iVar2 = (iVar8 + 99) / 100;
    iVar8 = (int)this->_padding_;
    if (iVar8 < iVar2) {
      uVar7 = (ulonglong)(uint)(iVar2 - iVar8);
      do {
        local_18[0] = ::operator_new(800);
        if (local_18[0] != (undefined8 *)0x0) {
          lVar6 = 6;
          puVar3 = local_18[0];
          do {
            puVar5 = puVar3;
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5[2] = 0;
            puVar5[3] = 0;
            puVar5[4] = 0;
            puVar5[5] = 0;
            puVar5[6] = 0;
            puVar5[7] = 0;
            puVar5[8] = 0;
            puVar5[9] = 0;
            puVar5[10] = 0;
            puVar5[0xb] = 0;
            puVar5[0xc] = 0;
            puVar5[0xd] = 0;
            puVar5[0xe] = 0;
            puVar5[0xf] = 0;
            lVar6 = lVar6 + -1;
            puVar3 = puVar5 + 0x10;
          } while (lVar6 != 0);
          puVar5[0x10] = 0;
          puVar5[0x11] = 0;
          puVar5[0x12] = 0;
          puVar5[0x13] = 0;
        }
        if ((((undefined8 **)this->_padding_ <= local_18) &&
            (local_18 < (undefined8 **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4)))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar8 = (int)this->_padding_;
        if (iVar8 == *(int *)((longlong)&this->_padding_ + 4)) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)this,(int *)((longlong)&this->_padding_ + 4)
                            );
        }
        *(int *)&this->_padding_ = iVar8 + 1;
        *(undefined8 **)(this->_padding_ + (longlong)iVar8 * 8) = local_18[0];
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  return;
}

// AddToIndexZeroed @ 14426caa0

void __thiscall
UE::Net::TNetChunkedArray<unsigned_char_*,100,TSizedDefaultAllocator<32>_>::AddToIndexZeroed
          (TNetChunkedArray<unsigned_char_*,100,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  void *local_18 [2];
  
  iVar9 = (int)this->_padding_;
  iVar1 = (int)this->_padding_;
  uVar7 = (ulonglong)iVar1;
  if (iVar9 <= param_1) {
    iVar9 = (param_1 - iVar9) + 1;
    if ((iVar9 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Count>=0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ChunkedArray.h"
                           ,0xf4,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar9 = (int)this->_padding_ + iVar9;
    *(int *)&this->_padding_ = iVar9;
    iVar3 = (iVar9 + 99) / 100;
    iVar9 = (int)this->_padding_;
    if (iVar9 < iVar3) {
      uVar5 = (ulonglong)(uint)(iVar3 - iVar9);
      do {
        local_18[0] = ::operator_new(800);
        if ((((void **)this->_padding_ <= local_18) &&
            (local_18 < (void **)this->_padding_ + *(int *)((longlong)&this->_padding_ + 4))) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar9 = (int)this->_padding_;
        if (iVar9 == *(int *)((longlong)&this->_padding_ + 4)) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)this,(int *)((longlong)&this->_padding_ + 4)
                            );
        }
        *(int *)&this->_padding_ = iVar9 + 1;
        *(void **)(this->_padding_ + (longlong)iVar9 * 8) = local_18[0];
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  if (iVar1 < (int)this->_padding_) {
    lVar8 = uVar7 * 8;
    do {
      memset(*(void **)(lVar8 + this->_padding_),0,800);
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      lVar8 = lVar8 + 8;
    } while ((int)uVar6 < (int)this->_padding_);
  }
  return;
}

// TNetChunkedArray<UE::Net::FWorldLocations::FObjectInfo,2048,TSizedDefaultAllocator<32>_> @ 1442f5750

TNetChunkedArray<UE::Net::FWorldLocations::FObjectInfo,2048,TSizedDefaultAllocator<32>_> *
__thiscall
UE::Net::TNetChunkedArray<UE::Net::FWorldLocations::FObjectInfo,2048,TSizedDefaultAllocator<32>_>::
TNetChunkedArray<UE::Net::FWorldLocations::FObjectInfo,2048,TSizedDefaultAllocator<32>_>
          (TNetChunkedArray<UE::Net::FWorldLocations::FObjectInfo,2048,TSizedDefaultAllocator<32>_>
           *this,int param_1,EInitMemory param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  ulong64 uVar8;
  void *pvVar9;
  longlong lVar10;
  TNetChunkedArray<UE::Net::FWorldLocations::FObjectInfo,2048,TSizedDefaultAllocator<32>_> *pTVar11;
  undefined4 *puVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  void *_Dst;
  uint uVar16;
  void *local_28 [2];
  
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  this->_padding_ = 0;
  *puVar1 = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  if (*puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(int *)&this->_padding_ = param_1;
  puVar2 = (undefined8 *)this->_padding_;
  this->NumPreAllocatedChunks = 0;
  uVar16 = (int)((param_1 + 0x7ff >> 0x1f & 0x7ffU) + param_1 + 0x7ff) >> 0xb;
  uVar15 = (ulonglong)uVar16;
  for (iVar13 = (int)this->_padding_; iVar13 != 0; iVar13 = iVar13 + -1) {
    ::operator_delete((void *)*puVar2,0x10000);
    puVar2 = puVar2 + 1;
  }
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(uVar15);
  }
  *(undefined4 *)&this->_padding_ = 0;
  if (*puVar1 != uVar16) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar16,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  uVar14 = (ulonglong)(int)uVar16;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar14;
  uVar8 = SUB168(ZEXT816(0x10000) * auVar4,0);
  if (SUB168(ZEXT816(0x10000) * auVar4,8) != 0) {
    uVar8 = 0xffffffffffffffff;
  }
  pvVar9 = operator_new__(uVar8);
  _Dst = (void *)0x0;
  if (pvVar9 != (void *)0x0) {
    if (uVar16 == 0) goto LAB_1442f5a2d;
    puVar12 = (undefined4 *)((longlong)pvVar9 + 0x1c);
    do {
      uVar14 = uVar14 - 1;
      lVar10 = 0x800;
      do {
        uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        *(double *)(puVar12 + -7) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        *(undefined8 *)(puVar12 + -5) = uVar5;
        *(double *)(puVar12 + -3) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        puVar12[-1] = 0;
        *puVar12 = 0x7f7fffff;
        puVar12 = puVar12 + 8;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      _Dst = pvVar9;
    } while (uVar14 != 0);
  }
  if (0 < (int)uVar16) {
    if (param_2 == Zero) {
      do {
        memset(_Dst,0,0x10000);
        local_28[0] = _Dst;
        if ((((void **)this->_padding_ <= local_28) &&
            (local_28 < (void **)this->_padding_ + (int)*puVar1)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          pTVar11 = (TNetChunkedArray<UE::Net::FWorldLocations::FObjectInfo,2048,TSizedDefaultAllocator<32>_>
                     *)(*pcVar3)();
          return pTVar11;
        }
        uVar7 = (uint)this->_padding_;
        if (uVar7 == *puVar1) {
          uVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)this,(int *)puVar1);
        }
        _Dst = (void *)((longlong)_Dst + 0x10000);
        *(uint *)&this->_padding_ = uVar7 + 1;
        *(void **)(this->_padding_ + (longlong)(int)uVar7 * 8) = local_28[0];
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    else {
      do {
        local_28[0] = _Dst;
        if ((((void **)this->_padding_ <= local_28) &&
            (local_28 < (void **)this->_padding_ + (int)*puVar1)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          pTVar11 = (TNetChunkedArray<UE::Net::FWorldLocations::FObjectInfo,2048,TSizedDefaultAllocator<32>_>
                     *)(*pcVar3)();
          return pTVar11;
        }
        uVar7 = (uint)this->_padding_;
        if (uVar7 == *puVar1) {
          uVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)this,(int *)puVar1);
        }
        _Dst = (void *)((longlong)_Dst + 0x10000);
        *(uint *)&this->_padding_ = uVar7 + 1;
        *(void **)(this->_padding_ + (longlong)(int)uVar7 * 8) = local_28[0];
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
  }
LAB_1442f5a2d:
  this->NumPreAllocatedChunks = uVar16;
  return this;
}

