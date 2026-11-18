// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// Pop<UE::GC::FAROQueue::FFew> @ 141ff3f70

TArrayView<UObject_*,int> * __thiscall
UE::GC::FAROQueue::Pop<UE::GC::FAROQueue::FFew>
          (FAROQueue *this,TArrayView<UObject_*,int> *__return_storage_ptr__)

{
  FAROBlock **ppFVar1;
  atomic<unsigned_int> aVar2;
  atomic<unsigned_int> aVar3;
  FAROBlock *pFVar4;
  code *pcVar5;
  atomic<unsigned_int> aVar6;
  bool bVar7;
  uint uVar8;
  TArrayView<UObject_*,int> *pTVar9;
  int iVar10;
  
  do {
    while( true ) {
      aVar2 = this->Head;
      aVar3 = this->Tail;
      if ((uint)aVar2 <= (uint)aVar3) {
        __return_storage_ptr__->DataPtr = (UObject **)0x0;
        __return_storage_ptr__->ArrayNum = 0;
        return __return_storage_ptr__;
      }
      aVar6 = (atomic<unsigned_int>)((int)aVar3 + 4U);
      if ((uint)aVar2 < (int)aVar3 + 4U) {
        aVar6 = aVar2;
      }
      if ((0xff < (uint)aVar3 >> 9) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Idx / FAROBlock::NumWords < MaxBlocks",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x9c8,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
        return pTVar9;
      }
      uVar8 = (uint)aVar3 & 0x1ff;
      if ((0x1fe < uVar8) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x9c9,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
        return pTVar9;
      }
      ppFVar1 = GAROBlocks.Blocks + ((uint)aVar3 >> 9);
      if ((GAROBlocks.Blocks[(uint)aVar3 >> 9] == (FAROBlock *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Blocks[Idx / FAROBlock::NumWords]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x9ca,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
        return pTVar9;
      }
      pFVar4 = *ppFVar1;
      if (((uint)aVar3 & 0xfffffe00) + 0x1fe < (uint)aVar6) break;
      LOCK();
      bVar7 = aVar3 == this->Tail;
      if (bVar7) {
        this->Tail = aVar6;
      }
      UNLOCK();
      if (bVar7) {
        iVar10 = (int)aVar6 - (int)aVar3;
        __return_storage_ptr__->ArrayNum = iVar10;
        goto LAB_141ff4097;
      }
    }
    if ((0xff < (uint)aVar3 >> 9) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Idx / FAROBlock::NumWords < MaxBlocks",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x9d1,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
      return pTVar9;
    }
    if ((0x1fe < uVar8) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x9d2,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
      return pTVar9;
    }
    if ((*ppFVar1 == (FAROBlock *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Blocks[Idx / FAROBlock::NumWords]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x9d3,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
      return pTVar9;
    }
    if ((((*ppFVar1)->FirstIndexInNextBlock & 0x1ff) != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock % FAROBlock::NumWords == 0"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x9d4,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
      return pTVar9;
    }
    if ((0x1ffff < ((*ppFVar1)->FirstIndexInNextBlock & 0xfffffe00)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock / FAROBlock::NumWords < MaxBlocks"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x9d5,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
      return pTVar9;
    }
    LOCK();
    bVar7 = aVar3 == this->Tail;
    if (bVar7) {
      this->Tail = (atomic<unsigned_int>)(*ppFVar1)->FirstIndexInNextBlock;
    }
    UNLOCK();
  } while (!bVar7);
  iVar10 = 0x1ff - uVar8;
  __return_storage_ptr__->ArrayNum = iVar10;
LAB_141ff4097:
  __return_storage_ptr__->DataPtr = pFVar4->Objects + ((ulonglong)(uint)aVar3 & 0x1ff);
  if ((iVar10 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
    return pTVar9;
  }
  return __return_storage_ptr__;
}

// Pop<UE::GC::FAROQueue::FMany> @ 141ff4220

TArrayView<UObject_*,int> * __thiscall
UE::GC::FAROQueue::Pop<UE::GC::FAROQueue::FMany>
          (FAROQueue *this,TArrayView<UObject_*,int> *__return_storage_ptr__)

{
  FAROBlock **ppFVar1;
  atomic<unsigned_int> aVar2;
  atomic<unsigned_int> aVar3;
  FAROBlock *pFVar4;
  code *pcVar5;
  atomic<unsigned_int> aVar6;
  bool bVar7;
  uint uVar8;
  TArrayView<UObject_*,int> *pTVar9;
  int iVar10;
  
  do {
    while( true ) {
      aVar2 = this->Head;
      aVar3 = this->Tail;
      if ((uint)aVar2 <= (uint)aVar3) {
        __return_storage_ptr__->DataPtr = (UObject **)0x0;
        __return_storage_ptr__->ArrayNum = 0;
        return __return_storage_ptr__;
      }
      aVar6 = (atomic<unsigned_int>)((int)aVar3 + 0x40U);
      if ((uint)aVar2 < (int)aVar3 + 0x40U) {
        aVar6 = aVar2;
      }
      if ((0xff < (uint)aVar3 >> 9) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Idx / FAROBlock::NumWords < MaxBlocks",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x9c8,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
        return pTVar9;
      }
      uVar8 = (uint)aVar3 & 0x1ff;
      if ((0x1fe < uVar8) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x9c9,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
        return pTVar9;
      }
      ppFVar1 = GAROBlocks.Blocks + ((uint)aVar3 >> 9);
      if ((GAROBlocks.Blocks[(uint)aVar3 >> 9] == (FAROBlock *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Blocks[Idx / FAROBlock::NumWords]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x9ca,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
        return pTVar9;
      }
      pFVar4 = *ppFVar1;
      if (((uint)aVar3 & 0xfffffe00) + 0x1fe < (uint)aVar6) break;
      LOCK();
      bVar7 = aVar3 == this->Tail;
      if (bVar7) {
        this->Tail = aVar6;
      }
      UNLOCK();
      if (bVar7) {
        iVar10 = (int)aVar6 - (int)aVar3;
        __return_storage_ptr__->ArrayNum = iVar10;
        goto LAB_141ff4347;
      }
    }
    if ((0xff < (uint)aVar3 >> 9) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Idx / FAROBlock::NumWords < MaxBlocks",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x9d1,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
      return pTVar9;
    }
    if ((0x1fe < uVar8) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x9d2,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
      return pTVar9;
    }
    if ((*ppFVar1 == (FAROBlock *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Blocks[Idx / FAROBlock::NumWords]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x9d3,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
      return pTVar9;
    }
    if ((((*ppFVar1)->FirstIndexInNextBlock & 0x1ff) != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock % FAROBlock::NumWords == 0"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x9d4,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
      return pTVar9;
    }
    if ((0x1ffff < ((*ppFVar1)->FirstIndexInNextBlock & 0xfffffe00)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock / FAROBlock::NumWords < MaxBlocks"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x9d5,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
      return pTVar9;
    }
    LOCK();
    bVar7 = aVar3 == this->Tail;
    if (bVar7) {
      this->Tail = (atomic<unsigned_int>)(*ppFVar1)->FirstIndexInNextBlock;
    }
    UNLOCK();
  } while (!bVar7);
  iVar10 = 0x1ff - uVar8;
  __return_storage_ptr__->ArrayNum = iVar10;
LAB_141ff4347:
  __return_storage_ptr__->DataPtr = pFVar4->Objects + ((ulonglong)(uint)aVar3 & 0x1ff);
  if ((iVar10 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
    return pTVar9;
  }
  return __return_storage_ptr__;
}

// Steal<UE::GC::FAROQueue::FFew> @ 141ff9440

TArrayView<UObject_*,int> * __thiscall
UE::GC::FAROQueue::Steal<UE::GC::FAROQueue::FFew>
          (FAROQueue *this,TArrayView<UObject_*,int> *__return_storage_ptr__)

{
  FAROBlock **ppFVar1;
  atomic<unsigned_int> aVar2;
  atomic<unsigned_int> aVar3;
  FAROBlock *pFVar4;
  code *pcVar5;
  atomic<unsigned_int> aVar6;
  bool bVar7;
  uint uVar8;
  TArrayView<UObject_*,int> *pTVar9;
  int iVar10;
  
  do {
    while( true ) {
      aVar2 = this->Head;
      aVar3 = this->Tail;
      if ((uint)aVar2 <= (uint)aVar3) {
        __return_storage_ptr__->DataPtr = (UObject **)0x0;
        __return_storage_ptr__->ArrayNum = 0;
        return __return_storage_ptr__;
      }
      aVar6 = (atomic<unsigned_int>)((int)aVar3 + 4U);
      if ((uint)aVar2 < (int)aVar3 + 4U) {
        aVar6 = aVar2;
      }
      if ((0xff < (uint)aVar3 >> 9) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Idx / FAROBlock::NumWords < MaxBlocks",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x9c8,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
        return pTVar9;
      }
      uVar8 = (uint)aVar3 & 0x1ff;
      if ((0x1fe < uVar8) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x9c9,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
        return pTVar9;
      }
      ppFVar1 = GAROBlocks.Blocks + ((uint)aVar3 >> 9);
      if ((GAROBlocks.Blocks[(uint)aVar3 >> 9] == (FAROBlock *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Blocks[Idx / FAROBlock::NumWords]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x9ca,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
        return pTVar9;
      }
      pFVar4 = *ppFVar1;
      if (((uint)aVar3 & 0xfffffe00) + 0x1fe < (uint)aVar6) break;
      LOCK();
      bVar7 = aVar3 == this->Tail;
      if (bVar7) {
        this->Tail = aVar6;
      }
      UNLOCK();
      if (bVar7) {
        iVar10 = (int)aVar6 - (int)aVar3;
        __return_storage_ptr__->ArrayNum = iVar10;
        goto LAB_141ff9568;
      }
    }
    if ((0xff < (uint)aVar3 >> 9) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Idx / FAROBlock::NumWords < MaxBlocks",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x9d1,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
      return pTVar9;
    }
    if ((0x1fe < uVar8) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x9d2,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
      return pTVar9;
    }
    if ((*ppFVar1 == (FAROBlock *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Blocks[Idx / FAROBlock::NumWords]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x9d3,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
      return pTVar9;
    }
    if ((((*ppFVar1)->FirstIndexInNextBlock & 0x1ff) != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock % FAROBlock::NumWords == 0"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x9d4,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
      return pTVar9;
    }
    if ((0x1ffff < ((*ppFVar1)->FirstIndexInNextBlock & 0xfffffe00)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock / FAROBlock::NumWords < MaxBlocks"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x9d5,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
      return pTVar9;
    }
    LOCK();
    bVar7 = aVar3 == this->Tail;
    if (bVar7) {
      this->Tail = (atomic<unsigned_int>)(*ppFVar1)->FirstIndexInNextBlock;
    }
    UNLOCK();
  } while (!bVar7);
  iVar10 = 0x1ff - uVar8;
  __return_storage_ptr__->ArrayNum = iVar10;
LAB_141ff9568:
  __return_storage_ptr__->DataPtr = pFVar4->Objects + ((ulonglong)(uint)aVar3 & 0x1ff);
  if ((iVar10 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
    return pTVar9;
  }
  return __return_storage_ptr__;
}

// Steal<UE::GC::FAROQueue::FMany> @ 141ff96f0

TArrayView<UObject_*,int> * __thiscall
UE::GC::FAROQueue::Steal<UE::GC::FAROQueue::FMany>
          (FAROQueue *this,TArrayView<UObject_*,int> *__return_storage_ptr__)

{
  FAROBlock **ppFVar1;
  atomic<unsigned_int> aVar2;
  atomic<unsigned_int> aVar3;
  FAROBlock *pFVar4;
  code *pcVar5;
  atomic<unsigned_int> aVar6;
  bool bVar7;
  uint uVar8;
  TArrayView<UObject_*,int> *pTVar9;
  int iVar10;
  
  do {
    while( true ) {
      aVar2 = this->Head;
      aVar3 = this->Tail;
      if ((uint)aVar2 <= (uint)aVar3) {
        __return_storage_ptr__->DataPtr = (UObject **)0x0;
        __return_storage_ptr__->ArrayNum = 0;
        return __return_storage_ptr__;
      }
      aVar6 = (atomic<unsigned_int>)((int)aVar3 + 0x40U);
      if ((uint)aVar2 < (int)aVar3 + 0x40U) {
        aVar6 = aVar2;
      }
      if ((0xff < (uint)aVar3 >> 9) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Idx / FAROBlock::NumWords < MaxBlocks",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x9c8,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
        return pTVar9;
      }
      uVar8 = (uint)aVar3 & 0x1ff;
      if ((0x1fe < uVar8) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x9c9,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
        return pTVar9;
      }
      ppFVar1 = GAROBlocks.Blocks + ((uint)aVar3 >> 9);
      if ((GAROBlocks.Blocks[(uint)aVar3 >> 9] == (FAROBlock *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Blocks[Idx / FAROBlock::NumWords]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x9ca,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
        return pTVar9;
      }
      pFVar4 = *ppFVar1;
      if (((uint)aVar3 & 0xfffffe00) + 0x1fe < (uint)aVar6) break;
      LOCK();
      bVar7 = aVar3 == this->Tail;
      if (bVar7) {
        this->Tail = aVar6;
      }
      UNLOCK();
      if (bVar7) {
        iVar10 = (int)aVar6 - (int)aVar3;
        __return_storage_ptr__->ArrayNum = iVar10;
        goto LAB_141ff9818;
      }
    }
    if ((0xff < (uint)aVar3 >> 9) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Idx / FAROBlock::NumWords < MaxBlocks",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x9d1,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
      return pTVar9;
    }
    if ((0x1fe < uVar8) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Idx % FAROBlock::NumWords < FAROBlock::Capacity",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x9d2,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
      return pTVar9;
    }
    if ((*ppFVar1 == (FAROBlock *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Blocks[Idx / FAROBlock::NumWords]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x9d3,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
      return pTVar9;
    }
    if ((((*ppFVar1)->FirstIndexInNextBlock & 0x1ff) != 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock % FAROBlock::NumWords == 0"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x9d4,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
      return pTVar9;
    }
    if ((0x1ffff < ((*ppFVar1)->FirstIndexInNextBlock & 0xfffffe00)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Blocks[Idx / FAROBlock::NumWords]->FirstIndexInNextBlock / FAROBlock::NumWords < MaxBlocks"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                           ,0x9d5,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
      return pTVar9;
    }
    LOCK();
    bVar7 = aVar3 == this->Tail;
    if (bVar7) {
      this->Tail = (atomic<unsigned_int>)(*ppFVar1)->FirstIndexInNextBlock;
    }
    UNLOCK();
  } while (!bVar7);
  iVar10 = 0x1ff - uVar8;
  __return_storage_ptr__->ArrayNum = iVar10;
LAB_141ff9818:
  __return_storage_ptr__->DataPtr = pFVar4->Objects + ((ulonglong)(uint)aVar3 & 0x1ff);
  if ((iVar10 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TArrayView<UObject_*,int> *)(*pcVar5)();
    return pTVar9;
  }
  return __return_storage_ptr__;
}

// FAROQueue @ 142010be0

FAROQueue * __thiscall UE::GC::FAROQueue::FAROQueue(FAROQueue *this,int param_1)

{
  code *pcVar1;
  atomic<unsigned_int> aVar2;
  atomic<unsigned_int> aVar3;
  bool bVar4;
  ulonglong uVar5;
  FAROBlock *pFVar6;
  FAROQueue *pFVar7;
  atomic<unsigned_int> local_res10;
  
  this->Head = (atomic<unsigned_int>)0x0;
  this->WorkerIndex = param_1;
  this->Tail = (atomic<unsigned_int>)0x0;
  aVar3 = GAROBlocks.NumBlocks;
  if (GAROBlocks.bFull == (atomic<bool>)0x0) {
    LOCK();
    aVar2 = (atomic<unsigned_int>)((int)GAROBlocks.NumBlocks + 1);
    UNLOCK();
    if ((uint)GAROBlocks.NumBlocks < 0x100) {
      uVar5 = (ulonglong)(uint)GAROBlocks.NumBlocks;
      GAROBlocks.NumBlocks = aVar2;
      if ((GAROBlocks.Blocks[uVar5] != (FAROBlock *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Blocks[BlockIdx] == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                             ,0x9be,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        pFVar7 = (FAROQueue *)(*pcVar1)();
        return pFVar7;
      }
      local_res10 = (atomic<unsigned_int>)((int)aVar3 << 9);
      pFVar6 = FPageAllocator::AllocatePage(&GScratchPages,param_1);
      GAROBlocks.Blocks[uVar5] = pFVar6;
      this->HeadBlock = pFVar6;
      if (pFVar6 != (FAROBlock *)0x0) goto LAB_142010d60;
    }
    else {
      GAROBlocks.bFull = (atomic<bool>)0x1;
      LOCK();
      UNLOCK();
      this->HeadBlock = (FAROBlock *)0x0;
    }
  }
  else {
    this->HeadBlock = (FAROBlock *)0x0;
  }
  if ((GSlowARO.bValid == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0xb1d,L"Must call Get() at least once first"), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FAROQueue *)(*pcVar1)();
    return pFVar7;
  }
  if ((GSlowARO.bValid == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                         ,0xb1d,L"Must call Get() at least once first"), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FAROQueue *)(*pcVar1)();
    return pFVar7;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("HeadBlock",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                     ,0x9f9,
                     L"One head block per worker must exist during worker setup, the assumption MaxWorkers * slow AROs <= MaxBlocks %s with %d slow AROs registered."
                    );
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FAROQueue *)(*pcVar1)();
    return pFVar7;
  }
LAB_142010d60:
  this->HeadBlock->FirstIndexInNextBlock = 0xffffffff;
  this->Head = local_res10;
  this->Tail = local_res10;
  return this;
}

// ~FAROQueue @ 1420131a0

void __thiscall UE::GC::FAROQueue::~FAROQueue(FAROQueue *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Head != this->Tail) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Head.load() == Tail.load()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\GarbageCollection.cpp"
                       ,0xa01,L"Failed to flush ARO calls");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

