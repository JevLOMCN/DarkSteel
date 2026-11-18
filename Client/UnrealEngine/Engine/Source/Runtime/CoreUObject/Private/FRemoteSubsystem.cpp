// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// CreateRequest @ 14219b220

void * __thiscall
FRemoteSubsystem<UE::RemoteObject::Transfer::FRemoteObjectRequest>::CreateRequest
          (FRemoteSubsystem<UE::RemoteObject::Transfer::FRemoteObjectRequest> *this,
          FRemoteTransactionId param_1,FRemoteWorkPriority param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  void *pvVar7;
  uint *puVar8;
  uint local_28;
  undefined4 uStack_24;
  uint *puStack_20;
  
  puVar8 = (uint *)0x0;
  puVar6 = ::operator_new(0x158);
  if (puVar6 != (uint *)0x0) {
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[0x16] = 0;
    puVar6[0x17] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0x80;
    puVar6[0x10] = 0xffffffff;
    puVar6[0x11] = 0;
    puVar6[0x14] = 0;
    puVar6[0x15] = 0;
    puVar6[0x1c] = 0;
    puVar6[0x1d] = 0;
    puVar6[0x1e] = 0;
    puVar6[0x1f] = 0;
    puVar6[0x26] = 0;
    puVar6[0x27] = 0;
    puVar6[0x2a] = 0;
    puVar6[0x2b] = 0;
    puVar6[0x18] = 0;
    puVar6[0x19] = 0;
    puVar6[0x1a] = 0;
    puVar6[0x1b] = 0;
    puVar6[0x20] = 0;
    puVar6[0x21] = 0;
    puVar6[0x22] = 0;
    puVar6[0x23] = 0x80;
    puVar6[0x24] = 0xffffffff;
    puVar6[0x25] = 0;
    puVar6[0x28] = 0;
    puVar6[0x29] = 0;
    puVar6[0x30] = 0;
    puVar6[0x31] = 0;
    puVar6[0x32] = 0;
    puVar6[0x33] = 0;
    puVar6[0x3a] = 0;
    puVar6[0x3b] = 0;
    puVar6[0x3e] = 0;
    puVar6[0x3f] = 0;
    puVar6[0x2c] = 0;
    puVar6[0x2d] = 0;
    puVar6[0x2e] = 0;
    puVar6[0x2f] = 0;
    puVar6[0x34] = 0;
    puVar6[0x35] = 0;
    puVar6[0x36] = 0;
    puVar6[0x37] = 0x80;
    puVar6[0x38] = 0xffffffff;
    puVar6[0x39] = 0;
    puVar6[0x3c] = 0;
    puVar6[0x3d] = 0;
    puVar6[0x40] = 0;
    puVar6[0x41] = 0;
    puVar6[0x46] = 0;
    puVar6[0x47] = 0;
    puVar6[0x48] = 0;
    puVar6[0x49] = 0;
    puVar6[0x50] = 0;
    puVar6[0x51] = 0;
    puVar6[0x54] = 0;
    puVar6[0x55] = 0;
    puVar6[0x42] = 0;
    puVar6[0x43] = 0;
    puVar6[0x44] = 0;
    puVar6[0x45] = 0;
    puVar6[0x4a] = 0;
    puVar6[0x4b] = 0;
    puVar6[0x4c] = 0;
    puVar6[0x4d] = 0x80;
    puVar6[0x4e] = 0xffffffff;
    puVar6[0x4f] = 0;
    puVar6[0x52] = 0;
    puVar6[0x53] = 0;
    puVar8 = puVar6;
  }
  *puVar8 = param_1.Id;
  *(ulong64 *)(puVar8 + 2) = param_2.PackedData;
  local_28 = param_1.Id;
  puStack_20 = puVar8;
  if ((((uint *)this->_padding_ <= &local_28) &&
      (&local_28 < (uint *)this->_padding_ + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 4)
      ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar3)();
    return pvVar7;
  }
  iVar5 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar5 + 1;
  puVar2 = (undefined8 *)(this->_padding_ + (longlong)iVar5 * 0x10);
  *puVar2 = CONCAT44(uStack_24,local_28);
  puVar2[1] = puStack_20;
  return puVar8;
}

// DestroyRequest @ 14219b470

void __thiscall
FRemoteSubsystem<UE::RemoteObject::Transfer::FRemoteObjectRequest>::DestroyRequest
          (FRemoteSubsystem<UE::RemoteObject::Transfer::FRemoteObjectRequest> *this,
          FRemoteTransactionId param_1)

{
  ForElementType<FSetElementId> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FRemoteObjectRequest *pFVar5;
  void *pvVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  uVar10 = 0xffffffff;
  uVar9 = 0;
  uVar4 = 0xffffffff;
  if ((int)this->_padding_ < 1) {
LAB_14219b508:
    uVar10 = uVar4;
    if (uVar10 != 0xffffffff) goto LAB_14219b54b;
  }
  else {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar9 < (int)this->_padding_) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = uVar9;
      if (*(uint *)(this->_padding_ + lVar8) == param_1.Id) goto LAB_14219b508;
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 0x10;
    } while ((int)uVar9 < (int)this->_padding_);
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("RequestIndex != INDEX_NONE",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\RemoteExecutor.h"
                     ,0xaf,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14219b54b:
  pFVar5 = GetRequestByIndex(this,uVar10);
  uVar4 = 0;
  if ((int)uVar10 < (int)this->_padding_) {
    uVar4 = ~uVar10 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar6 = (void *)((longlong)(int)uVar10 * 0x10 + this->_padding_);
  iVar7 = (int)this->_padding_ + ~uVar10;
  if (iVar7 != 0) {
    memmove(pvVar6,(void *)((longlong)pvVar6 + 0x10),(longlong)iVar7 << 4);
  }
  *(int *)&this->_padding_ = (int)this->_padding_ + -1;
  if (pFVar5 == (FRemoteObjectRequest *)0x0) {
    return;
  }
  (pFVar5->UsedObjects).HashSize = 0;
  FVar1 = (pFVar5->UsedObjects).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FRemoteObjectId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FRemoteObjectId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(pFVar5->UsedObjects).Elements);
  (pFVar5->RequiredObjectsCanonicalRoots).HashSize = 0;
  FVar1 = (pFVar5->RequiredObjectsCanonicalRoots).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FRemoteObjectId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FRemoteObjectId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(pFVar5->RequiredObjectsCanonicalRoots).Elements);
  *(undefined4 *)&(pFVar5->RequiredObjectsCanonicalRootByObjectID).field_0x48 = 0;
  pvVar6 = *(void **)&(pFVar5->RequiredObjectsCanonicalRootByObjectID).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<FRemoteObjectId,FRemoteObjectId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRemoteObjectId,FRemoteObjectId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRemoteObjectId,FRemoteObjectId>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&pFVar5->RequiredObjectsCanonicalRootByObjectID);
  (pFVar5->RequiredObjects).HashSize = 0;
  FVar1 = (pFVar5->RequiredObjects).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FRemoteObjectId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FRemoteObjectId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(pFVar5->RequiredObjects).Elements);
  ::operator_delete(pFVar5,0x158);
  return;
}

// SetActiveRequest @ 14219b6a0

void __thiscall
FRemoteSubsystem<UE::RemoteObject::Transfer::FRemoteObjectRequest>::SetActiveRequest
          (FRemoteSubsystem<UE::RemoteObject::Transfer::FRemoteObjectRequest> *this,
          FRemoteTransactionId param_1)

{
  FRemoteObjectRequest *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (int)this->_padding_) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (int)this->_padding_) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(uint *)(this->_padding_ + lVar6) == param_1.Id) {
        pFVar1 = *(FRemoteObjectRequest **)(this->_padding_ + 8 + lVar6);
        this->ActiveRequest = pFVar1;
        if (pFVar1 != (FRemoteObjectRequest *)0x0) {
          return;
        }
        goto LAB_14219b736;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((int)uVar5 < (int)this->_padding_);
  }
  this->ActiveRequest = (FRemoteObjectRequest *)0x0;
LAB_14219b736:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ActiveRequest",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\RemoteExecutor.h"
                     ,0xb8,L"");
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// ClearActiveRequest @ 14219b790

void __thiscall
FRemoteSubsystem<UE::RemoteObject::Transfer::FRemoteObjectRequest>::ClearActiveRequest
          (FRemoteSubsystem<UE::RemoteObject::Transfer::FRemoteObjectRequest> *this)

{
  this->ActiveRequest = (FRemoteObjectRequest *)0x0;
  return;
}

// GetRequestByIndex @ 1421d0700

FRemoteObjectRequest * __thiscall
FRemoteSubsystem<UE::RemoteObject::Transfer::FRemoteObjectRequest>::GetRequestByIndex
          (FRemoteSubsystem<UE::RemoteObject::Transfer::FRemoteObjectRequest> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRemoteObjectRequest *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRemoteObjectRequest *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FRemoteObjectRequest **)(this->_padding_ + 8 + (longlong)param_1 * 0x10);
}

