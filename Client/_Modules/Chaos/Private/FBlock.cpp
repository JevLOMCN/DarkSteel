// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// GetNextFree @ 1438bb2b0

FCharacterGroundConstraintHandle * __thiscall
Chaos::TObjectPool<Chaos::FCharacterGroundConstraintHandle>::FBlock::GetNextFree(FBlock *this)

{
  code *pcVar1;
  bool bVar2;
  TItem<Chaos::FCharacterGroundConstraintHandle,void> *pTVar3;
  FCharacterGroundConstraintHandle *pFVar4;
  
  if (this->FreeList != -1) {
    pTVar3 = this->Begin + this->FreeList;
    this->FreeList = pTVar3->NextFree;
    pTVar3->NextFree = -1;
    this->NumFree = this->NumFree + -1;
    return &pTVar3->Object;
  }
  if (this->NumValid < this->NumInBlock) {
    pTVar3 = this->Next;
    this->Next = pTVar3 + 1;
    pTVar3->bLive = false;
    pTVar3->NextFree = -1;
    this->NumFree = this->NumFree + -1;
    this->NumValid = this->NumValid + 1;
    return &pTVar3->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                     ,0x16c,
                     L"Attempt to request a free item from a full block (Freelist is empty, NumValid is %d, NumInBlock is %d, NumFree is %d)"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FCharacterGroundConstraintHandle *)(*pcVar1)();
    return pFVar4;
  }
  return (FCharacterGroundConstraintHandle *)0x0;
}

// GetNextFree @ 1439d33a0

FPBDCollisionConstraint * __thiscall
Chaos::TObjectPool<Chaos::FPBDCollisionConstraint>::FBlock::GetNextFree(FBlock *this)

{
  code *pcVar1;
  bool bVar2;
  TItem<Chaos::FPBDCollisionConstraint,void> *pTVar3;
  FPBDCollisionConstraint *pFVar4;
  
  if (this->FreeList != -1) {
    pTVar3 = this->Begin + this->FreeList;
    this->FreeList = pTVar3->NextFree;
    pTVar3->NextFree = -1;
    this->NumFree = this->NumFree + -1;
    return &pTVar3->Object;
  }
  if (this->NumValid < this->NumInBlock) {
    pTVar3 = this->Next;
    this->Next = pTVar3 + 1;
    pTVar3->bLive = false;
    pTVar3->NextFree = -1;
    this->NumFree = this->NumFree + -1;
    this->NumValid = this->NumValid + 1;
    return &pTVar3->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                     ,0x16c,
                     L"Attempt to request a free item from a full block (Freelist is empty, NumValid is %d, NumInBlock is %d, NumFree is %d)"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FPBDCollisionConstraint *)(*pcVar1)();
    return pFVar4;
  }
  return (FPBDCollisionConstraint *)0x0;
}

// GetNextFree @ 143b680f0

FPBDIsland * __thiscall
Chaos::TObjectPool<Chaos::Private::FPBDIsland>::FBlock::GetNextFree(FBlock *this)

{
  code *pcVar1;
  bool bVar2;
  TItem<Chaos::Private::FPBDIsland,void> *pTVar3;
  FPBDIsland *pFVar4;
  
  if (this->FreeList != -1) {
    pTVar3 = this->Begin + this->FreeList;
    this->FreeList = pTVar3->NextFree;
    pTVar3->NextFree = -1;
    this->NumFree = this->NumFree + -1;
    return &pTVar3->Object;
  }
  if (this->NumValid < this->NumInBlock) {
    pTVar3 = this->Next;
    this->Next = pTVar3 + 1;
    pTVar3->bLive = false;
    pTVar3->NextFree = -1;
    this->NumFree = this->NumFree + -1;
    this->NumValid = this->NumValid + 1;
    return &pTVar3->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                     ,0x16c,
                     L"Attempt to request a free item from a full block (Freelist is empty, NumValid is %d, NumInBlock is %d, NumFree is %d)"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FPBDIsland *)(*pcVar1)();
    return pFVar4;
  }
  return (FPBDIsland *)0x0;
}

// GetNextFree @ 143b681b0

FPBDIslandConstraint * __thiscall
Chaos::TObjectPool<Chaos::Private::FPBDIslandConstraint>::FBlock::GetNextFree(FBlock *this)

{
  code *pcVar1;
  bool bVar2;
  TItem<Chaos::Private::FPBDIslandConstraint,void> *pTVar3;
  FPBDIslandConstraint *pFVar4;
  
  if (this->FreeList != -1) {
    pTVar3 = this->Begin + this->FreeList;
    this->FreeList = pTVar3->NextFree;
    pTVar3->NextFree = -1;
    this->NumFree = this->NumFree + -1;
    return &pTVar3->Object;
  }
  if (this->NumValid < this->NumInBlock) {
    pTVar3 = this->Next;
    this->Next = pTVar3 + 1;
    pTVar3->bLive = false;
    pTVar3->NextFree = -1;
    this->NumFree = this->NumFree + -1;
    this->NumValid = this->NumValid + 1;
    return &pTVar3->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                     ,0x16c,
                     L"Attempt to request a free item from a full block (Freelist is empty, NumValid is %d, NumInBlock is %d, NumFree is %d)"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FPBDIslandConstraint *)(*pcVar1)();
    return pFVar4;
  }
  return (FPBDIslandConstraint *)0x0;
}

// GetNextFree @ 143b68260

FPBDIslandMergeSet * __thiscall
Chaos::TObjectPool<Chaos::Private::FPBDIslandMergeSet>::FBlock::GetNextFree(FBlock *this)

{
  code *pcVar1;
  bool bVar2;
  TItem<Chaos::Private::FPBDIslandMergeSet,void> *pTVar3;
  FPBDIslandMergeSet *pFVar4;
  
  if (this->FreeList != -1) {
    pTVar3 = this->Begin + this->FreeList;
    this->FreeList = pTVar3->NextFree;
    pTVar3->NextFree = -1;
    this->NumFree = this->NumFree + -1;
    return &pTVar3->Object;
  }
  if (this->NumValid < this->NumInBlock) {
    pTVar3 = this->Next;
    this->Next = pTVar3 + 1;
    pTVar3->bLive = false;
    pTVar3->NextFree = -1;
    this->NumFree = this->NumFree + -1;
    this->NumValid = this->NumValid + 1;
    return &pTVar3->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                     ,0x16c,
                     L"Attempt to request a free item from a full block (Freelist is empty, NumValid is %d, NumInBlock is %d, NumFree is %d)"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FPBDIslandMergeSet *)(*pcVar1)();
    return pFVar4;
  }
  return (FPBDIslandMergeSet *)0x0;
}

// GetNextFree @ 143b68310

FPBDIslandParticle * __thiscall
Chaos::TObjectPool<Chaos::Private::FPBDIslandParticle>::FBlock::GetNextFree(FBlock *this)

{
  code *pcVar1;
  bool bVar2;
  TItem<Chaos::Private::FPBDIslandParticle,void> *pTVar3;
  FPBDIslandParticle *pFVar4;
  
  if (this->FreeList != -1) {
    pTVar3 = this->Begin + this->FreeList;
    this->FreeList = pTVar3->NextFree;
    pTVar3->NextFree = -1;
    this->NumFree = this->NumFree + -1;
    return &pTVar3->Object;
  }
  if (this->NumValid < this->NumInBlock) {
    pTVar3 = this->Next;
    this->Next = pTVar3 + 1;
    pTVar3->bLive = false;
    pTVar3->NextFree = -1;
    this->NumFree = this->NumFree + -1;
    this->NumValid = this->NumValid + 1;
    return &pTVar3->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\ChaosCore\\Public\\Chaos\\ObjectPool.h"
                     ,0x16c,
                     L"Attempt to request a free item from a full block (Freelist is empty, NumValid is %d, NumInBlock is %d, NumFree is %d)"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FPBDIslandParticle *)(*pcVar1)();
    return pFVar4;
  }
  return (FPBDIslandParticle *)0x0;
}

