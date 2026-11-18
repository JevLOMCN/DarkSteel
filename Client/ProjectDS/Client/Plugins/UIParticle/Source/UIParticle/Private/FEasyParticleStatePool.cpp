// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 2

// CreatePool @ 14ac958d0

void __thiscall FEasyParticleStatePool::CreatePool(FEasyParticleStatePool *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulong64 uVar9;
  ulonglong *puVar10;
  FEasyParticleState *this_00;
  ulonglong uVar11;
  longlong *local_18 [2];
  
  if ((0 < param_1) && (this->FreeCount < param_1)) {
    plVar7 = ::operator_new(0x10);
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      if (param_1 < 5) {
        iVar6 = 10;
      }
      else {
        iVar6 = param_1 * 10;
      }
      *(int *)((longlong)plVar7 + 0xc) = iVar6;
      uVar11 = (ulonglong)iVar6;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar11;
      uVar8 = SUB168(ZEXT816(0x410) * auVar4,0);
      *(undefined4 *)(plVar7 + 1) = 0;
      if (SUB168(ZEXT816(0x410) * auVar4,8) != 0) {
        uVar8 = 0xffffffffffffffff;
      }
      uVar9 = uVar8 + 0x10;
      if (0xffffffffffffffef < uVar8) {
        uVar9 = 0xffffffffffffffff;
      }
      puVar10 = operator_new__(uVar9);
      if (puVar10 == (ulonglong *)0x0) {
        *plVar7 = 0;
      }
      else {
        *puVar10 = uVar11;
        this_00 = (FEasyParticleState *)(puVar10 + 2);
        for (; uVar11 != 0; uVar11 = uVar11 - 1) {
          FEasyParticleState::FEasyParticleState(this_00);
          this_00 = this_00 + 1;
        }
        *plVar7 = (longlong)(puVar10 + 2);
      }
    }
    pFVar2 = (this->PoolList).AllocatorInstance.Data;
    local_18[0] = plVar7;
    if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->PoolList).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = (this->PoolList).ArrayNum;
    piVar1 = &(this->PoolList).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,piVar1);
    }
    (this->PoolList).ArrayNum = iVar6 + 1;
    *(longlong **)((this->PoolList).AllocatorInstance.Data + (longlong)iVar6 * 8) = local_18[0];
    this->FreeCount =
         this->FreeCount + (*(int *)((longlong)local_18[0] + 0xc) - (int)local_18[0][1]);
    this->TotalCount =
         this->TotalCount + (*(int *)((longlong)local_18[0] + 0xc) - (int)local_18[0][1]);
  }
  if ((this->PoolList).ArrayNum == 1) {
    this->CurIndex = 0;
  }
  return;
}

// GetFree @ 14ac98320

FEasyParticleState * __thiscall FEasyParticleStatePool::GetFree(FEasyParticleStatePool *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FEasyParticleState *pFVar5;
  uint uVar6;
  longlong *plVar7;
  
  if (this->CurIndex == -1) {
    CreatePool(this,10);
  }
  uVar3 = this->CurIndex;
  pFVar5 = (FEasyParticleState *)0x0;
  uVar6 = 0;
  if ((int)uVar3 < (this->PoolList).ArrayNum) {
    uVar6 = ~uVar3 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FEasyParticleState *)(*pcVar1)();
      return pFVar5;
    }
  }
  plVar7 = *(longlong **)((this->PoolList).AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
  if (*(int *)((longlong)plVar7 + 0xc) <= (int)plVar7[1]) {
    if ((this->PoolList).ArrayNum + -1 <= this->CurIndex) {
      CreatePool(this,10);
    }
    uVar6 = this->CurIndex + 1;
    this->CurIndex = uVar6;
    uVar3 = 0;
    if ((int)uVar6 < (this->PoolList).ArrayNum) {
      uVar3 = ~uVar6 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FEasyParticleState *)(*pcVar1)();
        return pFVar5;
      }
    }
    plVar7 = *(longlong **)((this->PoolList).AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
  }
  if (plVar7 != (longlong *)0x0) {
    if ((int)plVar7[1] < *(int *)((longlong)plVar7 + 0xc)) {
      iVar4 = (int)plVar7[1] + 1;
      *(int *)(plVar7 + 1) = iVar4;
      pFVar5 = (FEasyParticleState *)(*plVar7 + -0x410 + (longlong)iVar4 * 0x410);
      if (pFVar5 != (FEasyParticleState *)0x0) {
        this->FreeCount = this->FreeCount + -1;
      }
    }
    return pFVar5;
  }
  return (FEasyParticleState *)0x0;
}

