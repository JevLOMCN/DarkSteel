// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// FParticleCollisions @ 1439c0a00

FParticleCollisions * __thiscall
Chaos::FParticleCollisions::FParticleCollisions(FParticleCollisions *this)

{
  (this->MidPhases).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MidPhases).ArrayNum = 0;
  (this->MidPhases).ArrayMax = 0;
  return this;
}

// ~FParticleCollisions @ 1439c0e60

void __thiscall Chaos::FParticleCollisions::~FParticleCollisions(FParticleCollisions *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->MidPhases).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// AddMidPhase @ 1439c5750

void __thiscall
Chaos::FParticleCollisions::AddMidPhase
          (FParticleCollisions *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          FParticlePairMidPhase *param_2)

{
  int *piVar1;
  FIDKey FVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  
  if ((param_1 != param_2->Particle0) && (param_1 != param_2->Particle1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InParticle == Particle0) || (InParticle == Particle1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\ParticlePairMidPhase.h"
                       ,0x136,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar7 = 0x38;
  if (param_1 != param_2->Particle0) {
    lVar7 = 0x3c;
  }
  if (*(int *)((longlong)&param_2->_padding_ + lVar7) != -1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InMidPhase->GetParticleCollisionsIndex(InParticle) == INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\ParticleCollisions.cpp"
                       ,0x15,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->MidPhases).ArrayNum;
  piVar1 = &(this->MidPhases).ArrayMax;
  FVar2 = (param_2->ParticlePairKey).Key;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->MidPhases).ArrayNum = iVar6 + 1;
  pFVar3 = (this->MidPhases).AllocatorInstance.Data;
  *(FIDKey *)(pFVar3 + (longlong)iVar6 * 0x10) = FVar2;
  *(FParticlePairMidPhase **)(pFVar3 + (longlong)iVar6 * 0x10 + 8) = param_2;
  FParticlePairMidPhase::SetParticleCollisionsIndex(param_2,param_1,iVar6);
  return;
}

// RemoveMidPhase @ 1439dd2f0

void __thiscall
Chaos::FParticleCollisions::RemoveMidPhase
          (FParticleCollisions *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          FParticlePairMidPhase *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  
  if ((param_1 != param_2->Particle0) && (param_1 != param_2->Particle1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InParticle == Particle0) || (InParticle == Particle1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\ParticlePairMidPhase.h"
                       ,0x136,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar9 = 0x38;
  if (param_1 != param_2->Particle0) {
    lVar9 = 0x3c;
  }
  uVar2 = *(uint *)((longlong)&param_2->_padding_ + lVar9);
  if (uVar2 == 0xffffffff) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\ParticleCollisions.cpp"
                       ,0x23,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar7 = 0;
  if ((int)uVar2 < (this->MidPhases).ArrayNum) {
    uVar7 = ~uVar2 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar3 = (this->MidPhases).ArrayNum;
  pFVar4 = (this->MidPhases).AllocatorInstance.Data;
  iVar8 = iVar3 + ~uVar2;
  if (1 < iVar8) {
    iVar8 = 1;
  }
  if (iVar8 != 0) {
    memmove(pFVar4 + (longlong)(int)uVar2 * 0x10,pFVar4 + (longlong)(iVar3 - iVar8) * 0x10,
            (longlong)iVar8 << 4);
  }
  piVar1 = &(this->MidPhases).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,(ForAnyElementType *)this,(this->MidPhases).ArrayNum,&(this->MidPhases).ArrayMax
            );
  FParticlePairMidPhase::SetParticleCollisionsIndex(param_2,param_1,-1);
  if ((int)uVar2 < (this->MidPhases).ArrayNum) {
    if ((int)uVar2 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FParticlePairMidPhase::SetParticleCollisionsIndex
              (*(FParticlePairMidPhase **)
                ((this->MidPhases).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x10 + 8),param_1
               ,uVar2);
  }
  return;
}

// FParticleCollisions @ 143afa600

FParticleCollisions * __thiscall
Chaos::FParticleCollisions::FParticleCollisions
          (FParticleCollisions *this,FParticleCollisions *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->MidPhases).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->MidPhases).ArrayMax;
  iVar2 = (param_1->MidPhases).ArrayNum;
  _Src = (param_1->MidPhases).AllocatorInstance.Data;
  (this->MidPhases).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  memcpy((this->MidPhases).AllocatorInstance.Data,_Src,(longlong)iVar2 << 4);
  return this;
}

// GetMidPhase @ 143c07110

FParticlePairMidPhase * __thiscall
Chaos::FParticleCollisions::GetMidPhase(FParticleCollisions *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FParticlePairMidPhase *pFVar3;
  
  if ((-1 < param_1) && (param_1 < (this->MidPhases).ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FParticlePairMidPhase *)(*pcVar1)();
        return pFVar3;
      }
    }
    return *(FParticlePairMidPhase **)
            ((this->MidPhases).AllocatorInstance.Data + (longlong)param_1 * 0x10 + 8);
  }
  return (FParticlePairMidPhase *)0x0;
}

