// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// ~FJointStateBase @ 143afd560

void __thiscall Chaos::FJointStateBase::~FJointStateBase(FJointStateBase *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->JointProxies).Buffer.ArrayNum != 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4501203830188278414>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\RewindData.h"
                       ,0x28e,"Buffer.Num() == 0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->JointProxies).Buffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((this->JointSettings).Buffer.ArrayNum != 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4501203830188278414>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\RewindData.h"
                       ,0x28e,"Buffer.Num() == 0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->JointSettings).Buffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// IsInSync<1> @ 1440c2db0

bool __thiscall
Chaos::FJointStateBase::IsInSync<1>
          (FJointStateBase *this,FPBDJointConstraintHandle *param_1,FFrameAndPhase param_2,
          FDirtyPropertiesPool *param_3)

{
  bool bVar1;
  
  bVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::
          IsInSync<Chaos::FPBDJointConstraintHandle>(&this->JointSettings,param_1,param_2,param_3);
  return bVar1;
}

// IsInSync<0> @ 1440c2ee0

bool __thiscall
Chaos::FJointStateBase::IsInSync<0>
          (FJointStateBase *this,FPBDJointConstraintHandle *param_1,FFrameAndPhase param_2,
          FDirtyPropertiesPool *param_3)

{
  bool bVar1;
  
  bVar1 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::
          IsInSync<Chaos::FPBDJointConstraintHandle>(&this->JointSettings,param_1,param_2,param_3);
  return bVar1;
}

// ClearEntryAndFuture @ 1440d7940

void __thiscall
Chaos::FJointStateBase::ClearEntryAndFuture(FJointStateBase *this,FFrameAndPhase param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if ((this->JointSettings).NumValid != 0) {
    iVar6 = param_1.Frame;
    do {
      uVar7 = (this->JointSettings).Next - 1;
      if ((int)uVar7 < 0) {
        uVar7 = (this->JointSettings).Buffer.ArrayNum - 1;
      }
      uVar4 = 0;
      if ((int)uVar7 < (this->JointSettings).Buffer.ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
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
      uVar4 = *(uint *)((this->JointSettings).Buffer.AllocatorInstance.Data +
                       (longlong)(int)uVar7 * 8 + 4);
      iVar5 = (int)(uVar4 * 4) >> 2;
      if ((iVar5 < iVar6) ||
         ((iVar5 == iVar6 && ((uVar4 & 0xc0000000) < ((uint)param_1 & 0xc0000000))))) break;
      piVar1 = &(this->JointSettings).NumValid;
      *piVar1 = *piVar1 + -1;
      (this->JointSettings).Next = uVar7;
    } while (*piVar1 != 0);
  }
  if ((this->JointProxies).NumValid != 0) {
    iVar6 = param_1.Frame;
    do {
      uVar7 = (this->JointProxies).Next - 1;
      if ((int)uVar7 < 0) {
        uVar7 = (this->JointProxies).Buffer.ArrayNum - 1;
      }
      uVar4 = 0;
      if ((int)uVar7 < (this->JointProxies).Buffer.ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
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
      uVar4 = *(uint *)((this->JointProxies).Buffer.AllocatorInstance.Data +
                       (longlong)(int)uVar7 * 8 + 4);
      iVar5 = (int)(uVar4 * 4) >> 2;
      if (iVar5 < iVar6) {
        return;
      }
      if ((iVar5 == iVar6) && ((uVar4 & 0xc0000000) < ((uint)param_1 & 0xc0000000))) {
        return;
      }
      piVar1 = &(this->JointProxies).NumValid;
      *piVar1 = *piVar1 + -1;
      (this->JointProxies).Next = uVar7;
    } while (*piVar1 != 0);
  }
  return;
}

// IsClean @ 1440e8270

bool __thiscall Chaos::FJointStateBase::IsClean(FJointStateBase *this,FFrameAndPhase param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  iVar4 = TParticlePropertyBuffer<Chaos::FPBDJointSettings,7,1>::FindIdx
                    (&this->JointSettings,param_1);
  if (iVar4 == -1) {
    uVar7 = (this->JointProxies).Next;
    iVar4 = 0;
    if (0 < (this->JointProxies).NumValid) {
      iVar8 = param_1.Frame;
      uVar9 = 0xffffffff;
      do {
        uVar7 = uVar7 - 1;
        if ((int)uVar7 < 0) {
          uVar7 = (this->JointProxies).Buffer.ArrayNum - 1;
        }
        uVar5 = 0;
        if ((int)uVar7 < (this->JointProxies).Buffer.ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
        }
        uVar5 = *(uint *)((this->JointProxies).Buffer.AllocatorInstance.Data +
                         (longlong)(int)uVar7 * 8 + 4);
        iVar6 = (int)(uVar5 * 4) >> 2;
      } while ((iVar8 <= iVar6) &&
              (((iVar6 != iVar8 || (((uint)param_1 & 0xc0000000) <= (uVar5 & 0xc0000000))) &&
               (iVar4 = iVar4 + 1, uVar9 = uVar7, iVar4 < (this->JointProxies).NumValid))));
      if (uVar9 != 0xffffffff) goto LAB_1440e8354;
    }
    bVar2 = true;
  }
  else {
LAB_1440e8354:
    bVar2 = false;
  }
  return bVar2;
}

