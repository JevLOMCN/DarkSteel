// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 29

// ~TPropertyPool<Chaos::FParticleProxyProperty> @ 143afbf10

void __thiscall
Chaos::TPropertyPool<Chaos::FParticleProxyProperty>::~TPropertyPool<Chaos::FParticleProxyProperty>
          (TPropertyPool<Chaos::FParticleProxyProperty> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->Elements).ArrayNum != (this->FreeList).ArrayNum) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3544308180613855942>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleDirtyFlags.h"
                       ,0x53a,"Elements.Num() == FreeList.Num()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->FreeList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TPropertyPool<Chaos::FProxyBasePairProperty> @ 143afbf80

void __thiscall
Chaos::TPropertyPool<Chaos::FProxyBasePairProperty>::~TPropertyPool<Chaos::FProxyBasePairProperty>
          (TPropertyPool<Chaos::FProxyBasePairProperty> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->Elements).ArrayNum != (this->FreeList).ArrayNum) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3544308180613855942>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleDirtyFlags.h"
                       ,0x53a,"Elements.Num() == FreeList.Num()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->FreeList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TPropertyPool<Chaos::FKinematicTarget> @ 143afbff0

void __thiscall
Chaos::TPropertyPool<Chaos::FKinematicTarget>::~TPropertyPool<Chaos::FKinematicTarget>
          (TPropertyPool<Chaos::FKinematicTarget> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->Elements).ArrayNum != (this->FreeList).ArrayNum) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3544308180613855942>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleDirtyFlags.h"
                       ,0x53a,"Elements.Num() == FreeList.Num()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->FreeList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TPropertyPool<Chaos::FPBDJointSettings> @ 143afc060

void __thiscall
Chaos::TPropertyPool<Chaos::FPBDJointSettings>::~TPropertyPool<Chaos::FPBDJointSettings>
          (TPropertyPool<Chaos::FPBDJointSettings> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->Elements).ArrayNum != (this->FreeList).ArrayNum) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3544308180613855942>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleDirtyFlags.h"
                       ,0x53a,"Elements.Num() == FreeList.Num()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->FreeList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TPropertyPool<Chaos::FParticleDynamicMisc> @ 143afc0d0

void __thiscall
Chaos::TPropertyPool<Chaos::FParticleDynamicMisc>::~TPropertyPool<Chaos::FParticleDynamicMisc>
          (TPropertyPool<Chaos::FParticleDynamicMisc> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->Elements).ArrayNum != (this->FreeList).ArrayNum) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3544308180613855942>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleDirtyFlags.h"
                       ,0x53a,"Elements.Num() == FreeList.Num()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->FreeList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TPropertyPool<Chaos::FParticleDynamics> @ 143afc140

void __thiscall
Chaos::TPropertyPool<Chaos::FParticleDynamics>::~TPropertyPool<Chaos::FParticleDynamics>
          (TPropertyPool<Chaos::FParticleDynamics> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->Elements).ArrayNum != (this->FreeList).ArrayNum) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3544308180613855942>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleDirtyFlags.h"
                       ,0x53a,"Elements.Num() == FreeList.Num()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->FreeList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TPropertyPool<Chaos::FParticleMassProps> @ 143afc1b0

void __thiscall
Chaos::TPropertyPool<Chaos::FParticleMassProps>::~TPropertyPool<Chaos::FParticleMassProps>
          (TPropertyPool<Chaos::FParticleMassProps> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->Elements).ArrayNum != (this->FreeList).ArrayNum) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3544308180613855942>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleDirtyFlags.h"
                       ,0x53a,"Elements.Num() == FreeList.Num()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->FreeList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TPropertyPool<Chaos::FParticleNonFrequentData> @ 143afc220

void __thiscall
Chaos::TPropertyPool<Chaos::FParticleNonFrequentData>::
~TPropertyPool<Chaos::FParticleNonFrequentData>
          (TPropertyPool<Chaos::FParticleNonFrequentData> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->Elements).ArrayNum != (this->FreeList).ArrayNum) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3544308180613855942>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleDirtyFlags.h"
                       ,0x53a,"Elements.Num() == FreeList.Num()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->FreeList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Chaos::FParticleNonFrequentData,int>
            ((FParticleNonFrequentData *)(this->Elements).AllocatorInstance.Data,
             (this->Elements).ArrayNum);
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TPropertyPool<Chaos::FParticlePositionRotation> @ 143afc2a0

void __thiscall
Chaos::TPropertyPool<Chaos::FParticlePositionRotation>::
~TPropertyPool<Chaos::FParticlePositionRotation>
          (TPropertyPool<Chaos::FParticlePositionRotation> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->Elements).ArrayNum != (this->FreeList).ArrayNum) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3544308180613855942>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleDirtyFlags.h"
                       ,0x53a,"Elements.Num() == FreeList.Num()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->FreeList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~TPropertyPool<Chaos::FParticleVelocities> @ 143afc310

void __thiscall
Chaos::TPropertyPool<Chaos::FParticleVelocities>::~TPropertyPool<Chaos::FParticleVelocities>
          (TPropertyPool<Chaos::FParticleVelocities> *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->Elements).ArrayNum != (this->FreeList).ArrayNum) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3544308180613855942>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleDirtyFlags.h"
                       ,0x53a,"Elements.Num() == FreeList.Num()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->FreeList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddElement @ 1440d22f0

FKinematicTarget * __thiscall
Chaos::TPropertyPool<Chaos::FKinematicTarget>::AddElement
          (TPropertyPool<Chaos::FKinematicTarget> *this,int *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FKinematicTarget *pFVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = (this->FreeList).ArrayNum;
  if (iVar7 == 0) {
    piVar1 = &(this->Elements).ArrayNum;
    uVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,0x10,1,(ForAnyElementType *)this,piVar1,&(this->Elements).ArrayMax);
    DefaultConstructItems<Chaos::FKinematicTarget,int>
              ((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x30,1);
    *param_1 = uVar4;
    uVar6 = 0;
    if ((int)uVar4 < *piVar1) {
      uVar6 = ~uVar4 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FKinematicTarget *)(*pcVar2)();
        return pFVar5;
      }
    }
    pFVar5 = (FKinematicTarget *)
             ((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x30);
  }
  else {
    if (iVar7 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FKinematicTarget *)(*pcVar2)();
        return pFVar5;
      }
    }
    iVar7 = (this->FreeList).ArrayNum;
    uVar6 = *(uint *)((this->FreeList).AllocatorInstance.Data + (longlong)iVar7 * 4 + -4);
    iVar7 = iVar7 + -1;
    (this->FreeList).ArrayNum = iVar7;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&(this->FreeList).AllocatorInstance,iVar7,&(this->FreeList).ArrayMax);
    *param_1 = uVar6;
    uVar4 = 0;
    if ((int)uVar6 < (this->Elements).ArrayNum) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FKinematicTarget *)(*pcVar2)();
        return pFVar5;
      }
    }
    pFVar5 = (FKinematicTarget *)
             ((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x30);
  }
  return pFVar5;
}

// AddElement @ 1440d2490

FPBDJointSettings * __thiscall
Chaos::TPropertyPool<Chaos::FPBDJointSettings>::AddElement
          (TPropertyPool<Chaos::FPBDJointSettings> *this,int *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPBDJointSettings *pFVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = (this->FreeList).ArrayNum;
  if (iVar7 == 0) {
    piVar1 = &(this->Elements).ArrayNum;
    uVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (800,0x10,1,(ForAnyElementType *)this,piVar1,&(this->Elements).ArrayMax);
    DefaultConstructItems<Chaos::FPBDJointSettings,int>
              ((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar4 * 800,1);
    *param_1 = uVar4;
    uVar6 = 0;
    if ((int)uVar4 < *piVar1) {
      uVar6 = ~uVar4 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FPBDJointSettings *)(*pcVar2)();
        return pFVar5;
      }
    }
    pFVar5 = (FPBDJointSettings *)
             ((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar4 * 800);
  }
  else {
    if (iVar7 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FPBDJointSettings *)(*pcVar2)();
        return pFVar5;
      }
    }
    iVar7 = (this->FreeList).ArrayNum;
    uVar6 = *(uint *)((this->FreeList).AllocatorInstance.Data + (longlong)iVar7 * 4 + -4);
    iVar7 = iVar7 + -1;
    (this->FreeList).ArrayNum = iVar7;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&(this->FreeList).AllocatorInstance,iVar7,&(this->FreeList).ArrayMax);
    *param_1 = uVar6;
    uVar4 = 0;
    if ((int)uVar6 < (this->Elements).ArrayNum) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FPBDJointSettings *)(*pcVar2)();
        return pFVar5;
      }
    }
    pFVar5 = (FPBDJointSettings *)
             ((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar6 * 800);
  }
  return pFVar5;
}

// AddElement @ 1440d2630

FParticleDynamicMisc * __thiscall
Chaos::TPropertyPool<Chaos::FParticleDynamicMisc>::AddElement
          (TPropertyPool<Chaos::FParticleDynamicMisc> *this,int *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FParticleDynamicMisc *pFVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = (this->FreeList).ArrayNum;
  if (iVar7 == 0) {
    piVar1 = &(this->Elements).ArrayNum;
    uVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x2c,4,1,(ForAnyElementType *)this,piVar1,&(this->Elements).ArrayMax);
    DefaultConstructItems<Chaos::FParticleDynamicMisc,int>
              ((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x2c,1);
    *param_1 = uVar4;
    uVar6 = 0;
    if ((int)uVar4 < *piVar1) {
      uVar6 = ~uVar4 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FParticleDynamicMisc *)(*pcVar2)();
        return pFVar5;
      }
    }
    pFVar5 = (FParticleDynamicMisc *)
             ((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x2c);
  }
  else {
    if (iVar7 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FParticleDynamicMisc *)(*pcVar2)();
        return pFVar5;
      }
    }
    iVar7 = (this->FreeList).ArrayNum;
    uVar6 = *(uint *)((this->FreeList).AllocatorInstance.Data + (longlong)iVar7 * 4 + -4);
    iVar7 = iVar7 + -1;
    (this->FreeList).ArrayNum = iVar7;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&(this->FreeList).AllocatorInstance,iVar7,&(this->FreeList).ArrayMax);
    *param_1 = uVar6;
    uVar4 = 0;
    if ((int)uVar6 < (this->Elements).ArrayNum) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FParticleDynamicMisc *)(*pcVar2)();
        return pFVar5;
      }
    }
    pFVar5 = (FParticleDynamicMisc *)
             ((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x2c);
  }
  return pFVar5;
}

// AddElement @ 1440d27c0

FParticleDynamics * __thiscall
Chaos::TPropertyPool<Chaos::FParticleDynamics>::AddElement
          (TPropertyPool<Chaos::FParticleDynamics> *this,int *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FParticleDynamics *pFVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = (this->FreeList).ArrayNum;
  if (iVar7 == 0) {
    piVar1 = &(this->Elements).ArrayNum;
    uVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,4,1,(ForAnyElementType *)this,piVar1,&(this->Elements).ArrayMax);
    *param_1 = uVar4;
    uVar6 = 0;
    if ((int)uVar4 < *piVar1) {
      uVar6 = ~uVar4 >> 0x1f;
    }
  }
  else {
    if ((iVar7 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FParticleDynamics *)(*pcVar2)();
      return pFVar5;
    }
    iVar7 = (this->FreeList).ArrayNum;
    uVar4 = *(uint *)((this->FreeList).AllocatorInstance.Data + (longlong)iVar7 * 4 + -4);
    iVar7 = iVar7 + -1;
    (this->FreeList).ArrayNum = iVar7;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&(this->FreeList).AllocatorInstance,iVar7,&(this->FreeList).ArrayMax);
    *param_1 = uVar4;
    uVar6 = 0;
    if ((int)uVar4 < (this->Elements).ArrayNum) {
      uVar6 = ~uVar4 >> 0x1f;
    }
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FParticleDynamics *)(*pcVar2)();
    return pFVar5;
  }
  return (FParticleDynamics *)
         ((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x30);
}

// AddElement @ 1440d2910

FParticleMassProps * __thiscall
Chaos::TPropertyPool<Chaos::FParticleMassProps>::AddElement
          (TPropertyPool<Chaos::FParticleMassProps> *this,int *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FParticleMassProps *pFVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = (this->FreeList).ArrayNum;
  if (iVar7 == 0) {
    piVar1 = &(this->Elements).ArrayNum;
    uVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,0x10,1,(ForAnyElementType *)this,piVar1,&(this->Elements).ArrayMax);
    DefaultConstructItems<Chaos::FParticleMassProps,int>
              ((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x60,1);
    *param_1 = uVar4;
    uVar6 = 0;
    if ((int)uVar4 < *piVar1) {
      uVar6 = ~uVar4 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FParticleMassProps *)(*pcVar2)();
        return pFVar5;
      }
    }
    pFVar5 = (FParticleMassProps *)
             ((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x60);
  }
  else {
    if (iVar7 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FParticleMassProps *)(*pcVar2)();
        return pFVar5;
      }
    }
    iVar7 = (this->FreeList).ArrayNum;
    uVar6 = *(uint *)((this->FreeList).AllocatorInstance.Data + (longlong)iVar7 * 4 + -4);
    iVar7 = iVar7 + -1;
    (this->FreeList).ArrayNum = iVar7;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&(this->FreeList).AllocatorInstance,iVar7,&(this->FreeList).ArrayMax);
    *param_1 = uVar6;
    uVar4 = 0;
    if ((int)uVar6 < (this->Elements).ArrayNum) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FParticleMassProps *)(*pcVar2)();
        return pFVar5;
      }
    }
    pFVar5 = (FParticleMassProps *)
             ((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x60);
  }
  return pFVar5;
}

// AddElement @ 1440d2ab0

FParticleNonFrequentData * __thiscall
Chaos::TPropertyPool<Chaos::FParticleNonFrequentData>::AddElement
          (TPropertyPool<Chaos::FParticleNonFrequentData> *this,int *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FParticleNonFrequentData *pFVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = (this->FreeList).ArrayNum;
  if (iVar7 == 0) {
    piVar1 = &(this->Elements).ArrayNum;
    uVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,piVar1,&(this->Elements).ArrayMax);
    DefaultConstructItems<Chaos::FParticleNonFrequentData,int>
              ((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x28,1);
    *param_1 = uVar4;
    uVar6 = 0;
    if ((int)uVar4 < *piVar1) {
      uVar6 = ~uVar4 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FParticleNonFrequentData *)(*pcVar2)();
        return pFVar5;
      }
    }
    pFVar5 = (FParticleNonFrequentData *)
             ((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x28);
  }
  else {
    if (iVar7 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FParticleNonFrequentData *)(*pcVar2)();
        return pFVar5;
      }
    }
    iVar7 = (this->FreeList).ArrayNum;
    uVar6 = *(uint *)((this->FreeList).AllocatorInstance.Data + (longlong)iVar7 * 4 + -4);
    iVar7 = iVar7 + -1;
    (this->FreeList).ArrayNum = iVar7;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&(this->FreeList).AllocatorInstance,iVar7,&(this->FreeList).ArrayMax);
    *param_1 = uVar6;
    uVar4 = 0;
    if ((int)uVar6 < (this->Elements).ArrayNum) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FParticleNonFrequentData *)(*pcVar2)();
        return pFVar5;
      }
    }
    pFVar5 = (FParticleNonFrequentData *)
             ((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x28);
  }
  return pFVar5;
}

// AddElement @ 1440d2c50

FParticlePositionRotation * __thiscall
Chaos::TPropertyPool<Chaos::FParticlePositionRotation>::AddElement
          (TPropertyPool<Chaos::FParticlePositionRotation> *this,int *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FParticlePositionRotation *pFVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = (this->FreeList).ArrayNum;
  if (iVar7 == 0) {
    piVar1 = &(this->Elements).ArrayNum;
    uVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,0x10,1,(ForAnyElementType *)this,piVar1,&(this->Elements).ArrayMax);
    DefaultConstructItems<Chaos::FParticlePositionRotation,int>
              ((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x30,1);
    *param_1 = uVar4;
    uVar6 = 0;
    if ((int)uVar4 < *piVar1) {
      uVar6 = ~uVar4 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FParticlePositionRotation *)(*pcVar2)();
        return pFVar5;
      }
    }
    pFVar5 = (FParticlePositionRotation *)
             ((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x30);
  }
  else {
    if (iVar7 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FParticlePositionRotation *)(*pcVar2)();
        return pFVar5;
      }
    }
    iVar7 = (this->FreeList).ArrayNum;
    uVar6 = *(uint *)((this->FreeList).AllocatorInstance.Data + (longlong)iVar7 * 4 + -4);
    iVar7 = iVar7 + -1;
    (this->FreeList).ArrayNum = iVar7;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&(this->FreeList).AllocatorInstance,iVar7,&(this->FreeList).ArrayMax);
    *param_1 = uVar6;
    uVar4 = 0;
    if ((int)uVar6 < (this->Elements).ArrayNum) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FParticlePositionRotation *)(*pcVar2)();
        return pFVar5;
      }
    }
    pFVar5 = (FParticlePositionRotation *)
             ((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x30);
  }
  return pFVar5;
}

// AddElement @ 1440d2df0

FParticleVelocities * __thiscall
Chaos::TPropertyPool<Chaos::FParticleVelocities>::AddElement
          (TPropertyPool<Chaos::FParticleVelocities> *this,int *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FParticleVelocities *pFVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = (this->FreeList).ArrayNum;
  if (iVar7 == 0) {
    piVar1 = &(this->Elements).ArrayNum;
    uVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,4,1,(ForAnyElementType *)this,piVar1,&(this->Elements).ArrayMax);
    *param_1 = uVar4;
    uVar6 = 0;
    if ((int)uVar4 < *piVar1) {
      uVar6 = ~uVar4 >> 0x1f;
    }
  }
  else {
    if ((iVar7 < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FParticleVelocities *)(*pcVar2)();
      return pFVar5;
    }
    iVar7 = (this->FreeList).ArrayNum;
    uVar4 = *(uint *)((this->FreeList).AllocatorInstance.Data + (longlong)iVar7 * 4 + -4);
    iVar7 = iVar7 + -1;
    (this->FreeList).ArrayNum = iVar7;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&(this->FreeList).AllocatorInstance,iVar7,&(this->FreeList).ArrayMax);
    *param_1 = uVar4;
    uVar6 = 0;
    if ((int)uVar4 < (this->Elements).ArrayNum) {
      uVar6 = ~uVar4 >> 0x1f;
    }
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FParticleVelocities *)(*pcVar2)();
    return pFVar5;
  }
  return (FParticleVelocities *)
         ((this->Elements).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x18);
}

// GetElement @ 1440e3a60

FKinematicTarget * __thiscall
Chaos::TPropertyPool<Chaos::FKinematicTarget>::GetElement
          (TPropertyPool<Chaos::FKinematicTarget> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FKinematicTarget *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FKinematicTarget *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FKinematicTarget *)((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x30);
}

// GetElement @ 1440e3ae0

FPBDJointSettings * __thiscall
Chaos::TPropertyPool<Chaos::FPBDJointSettings>::GetElement
          (TPropertyPool<Chaos::FPBDJointSettings> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPBDJointSettings *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPBDJointSettings *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPBDJointSettings *)((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 800);
}

// GetElement @ 1440e3b60

FParticleDynamicMisc * __thiscall
Chaos::TPropertyPool<Chaos::FParticleDynamicMisc>::GetElement
          (TPropertyPool<Chaos::FParticleDynamicMisc> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FParticleDynamicMisc *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FParticleDynamicMisc *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FParticleDynamicMisc *)
         ((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x2c);
}

// GetElement @ 1440e3be0

FParticleDynamicMisc * __thiscall
Chaos::TPropertyPool<Chaos::FParticleDynamicMisc>::GetElement
          (TPropertyPool<Chaos::FParticleDynamicMisc> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FParticleDynamicMisc *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FParticleDynamicMisc *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FParticleDynamicMisc *)
         ((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x2c);
}

// GetElement @ 1440e3c60

FParticleDynamics * __thiscall
Chaos::TPropertyPool<Chaos::FParticleDynamics>::GetElement
          (TPropertyPool<Chaos::FParticleDynamics> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FParticleDynamics *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FParticleDynamics *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FParticleDynamics *)((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x30);
}

// GetElement @ 1440e3ce0

FParticleMassProps * __thiscall
Chaos::TPropertyPool<Chaos::FParticleMassProps>::GetElement
          (TPropertyPool<Chaos::FParticleMassProps> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FParticleMassProps *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FParticleMassProps *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FParticleMassProps *)((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x60);
}

// GetElement @ 1440e3d60

FParticleNonFrequentData * __thiscall
Chaos::TPropertyPool<Chaos::FParticleNonFrequentData>::GetElement
          (TPropertyPool<Chaos::FParticleNonFrequentData> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FParticleNonFrequentData *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FParticleNonFrequentData *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FParticleNonFrequentData *)
         ((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x28);
}

// GetElement @ 1440e3de0

FParticlePositionRotation * __thiscall
Chaos::TPropertyPool<Chaos::FParticlePositionRotation>::GetElement
          (TPropertyPool<Chaos::FParticlePositionRotation> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FParticlePositionRotation *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FParticlePositionRotation *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FParticlePositionRotation *)
         ((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x30);
}

// GetElement @ 1440e3e60

FParticlePositionRotation * __thiscall
Chaos::TPropertyPool<Chaos::FParticlePositionRotation>::GetElement
          (TPropertyPool<Chaos::FParticlePositionRotation> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FParticlePositionRotation *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FParticlePositionRotation *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FParticlePositionRotation *)
         ((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x30);
}

// GetElement @ 1440e3ee0

FParticleVelocities * __thiscall
Chaos::TPropertyPool<Chaos::FParticleVelocities>::GetElement
          (TPropertyPool<Chaos::FParticleVelocities> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FParticleVelocities *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FParticleVelocities *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FParticleVelocities *)((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x18)
  ;
}

// GetElement @ 1440e3f60

FParticleVelocities * __thiscall
Chaos::TPropertyPool<Chaos::FParticleVelocities>::GetElement
          (TPropertyPool<Chaos::FParticleVelocities> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FParticleVelocities *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Elements).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FParticleVelocities *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FParticleVelocities *)((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x18)
  ;
}

