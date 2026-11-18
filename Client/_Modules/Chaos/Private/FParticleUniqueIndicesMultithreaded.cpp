// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// AddPageAndAcquireNextId @ 144078020

int __thiscall
Chaos::FParticleUniqueIndicesMultithreaded::AddPageAndAcquireNextId
          (FParticleUniqueIndicesMultithreaded *this,bool param_1)

{
  int iVar1;
  int *_Dst;
  uint uVar2;
  int iVar4;
  FUniqueIdx *pFVar5;
  int *piVar6;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  _Dst = ::operator_new(0x1000);
  if (_Dst == (int *)0x0) {
    _Dst = (int *)0x0;
  }
  else {
    memset(_Dst,-1,0x1000);
  }
  iVar4 = (this->Pages).ArrayNum * 0x400;
  piVar6 = _Dst + uVar3;
  *_Dst = iVar4;
  pFVar5 = (FUniqueIdx *)(_Dst + uVar3);
  do {
    *piVar6 = (int)uVar3 + iVar4;
    FLockFreePointerFIFOBase<Chaos::FUniqueIdx,0,1>::Push
              ((FLockFreePointerFIFOBase<Chaos::FUniqueIdx,0,1> *)&this->FreeIndices,pFVar5);
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
    piVar6 = piVar6 + 1;
    pFVar5 = pFVar5 + 1;
  } while ((int)uVar2 < 0x400);
  iVar1 = (this->Pages).ArrayNum;
  piVar6 = &(this->Pages).ArrayMax;
  if (iVar1 == *piVar6) {
    iVar1 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Pages).AllocatorInstance,piVar6);
  }
  (this->Pages).ArrayNum = iVar1 + 1;
  *(int **)((this->Pages).AllocatorInstance.Data + (longlong)iVar1 * 8) = _Dst;
  ::operator_delete((void *)0x0,0x1000);
  iVar1 = -1;
  if (param_1) {
    iVar1 = iVar4;
  }
  return iVar1;
}

// GenerateUniqueIdx @ 14408c190

FUniqueIdx __thiscall
Chaos::FParticleUniqueIndicesMultithreaded::GenerateUniqueIdx
          (FParticleUniqueIndicesMultithreaded *this)

{
  int iVar1;
  FUniqueIdx *pFVar2;
  int *in_RDX;
  bool bVar3;
  
  pFVar2 = FLockFreePointerFIFOBase<Chaos::FUniqueIdx,0,1>::Pop
                     ((FLockFreePointerFIFOBase<Chaos::FUniqueIdx,0,1> *)&this->FreeIndices);
  do {
    if (pFVar2 != (FUniqueIdx *)0x0) {
      *in_RDX = pFVar2->Idx;
LAB_14408c1dc:
      return (FUniqueIdx)(int)in_RDX;
    }
    LOCK();
    bVar3 = this->Block == '\0';
    if (bVar3) {
      this->Block = '\x01';
    }
    UNLOCK();
    if (bVar3) {
      iVar1 = AddPageAndAcquireNextId(this,true);
      do {
        LOCK();
        bVar3 = this->Block == '\x01';
        if (bVar3) {
          this->Block = '\0';
        }
        UNLOCK();
      } while (!bVar3);
      *in_RDX = iVar1;
      goto LAB_14408c1dc;
    }
    pFVar2 = FLockFreePointerFIFOBase<Chaos::FUniqueIdx,0,1>::Pop
                       ((FLockFreePointerFIFOBase<Chaos::FUniqueIdx,0,1> *)&this->FreeIndices);
  } while( true );
}

// ReleaseIdx @ 1440a05c0

void __thiscall
Chaos::FParticleUniqueIndicesMultithreaded::ReleaseIdx
          (FParticleUniqueIndicesMultithreaded *this,FUniqueIdx param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1.Idx == -1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2590006970459095114>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                       ,0x4a,"Unique.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar5 = param_1.Idx >> 0x1f & 0x3ff;
  uVar3 = param_1.Idx + uVar5;
  uVar6 = (int)uVar3 >> 10;
  uVar4 = 0;
  if ((int)uVar6 < (this->Pages).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FLockFreePointerFIFOBase<Chaos::FUniqueIdx,0,1>::Push
            ((FLockFreePointerFIFOBase<Chaos::FUniqueIdx,0,1> *)&this->FreeIndices,
             (FUniqueIdx *)
             (*(longlong *)((this->Pages).AllocatorInstance.Data + (longlong)(int)uVar6 * 8) +
             (longlong)(int)((uVar3 & 0x3ff) - uVar5) * 4));
  return;
}

