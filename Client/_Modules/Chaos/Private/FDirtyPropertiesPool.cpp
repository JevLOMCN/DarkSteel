// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// ~FDirtyPropertiesPool @ 143afcf90

void __thiscall Chaos::FDirtyPropertiesPool::~FDirtyPropertiesPool(FDirtyPropertiesPool *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  TPropertyPool<Chaos::FParticleVelocities>::~TPropertyPool<Chaos::FParticleVelocities>
            (&this->ClusterVelocitiesPool);
  TPropertyPool<Chaos::FParticlePositionRotation>::~TPropertyPool<Chaos::FParticlePositionRotation>
            (&this->ClusterXRPool);
  TPropertyPool<Chaos::FParticleProxyProperty>::~TPropertyPool<Chaos::FParticleProxyProperty>
            (&this->GroundParticleProxyPool);
  TPropertyPool<Chaos::FParticleProxyProperty>::~TPropertyPool<Chaos::FParticleProxyProperty>
            (&this->CharacterParticleProxyPool);
  if ((this->CharacterGroundConstraintDynamicDataPool).Elements.ArrayNum !=
      (this->CharacterGroundConstraintDynamicDataPool).FreeList.ArrayNum) {
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
  pFVar1 = (this->CharacterGroundConstraintDynamicDataPool).FreeList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CharacterGroundConstraintDynamicDataPool).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((this->CharacterGroundConstraintSettingsPool).Elements.ArrayNum !=
      (this->CharacterGroundConstraintSettingsPool).FreeList.ArrayNum) {
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
  pFVar1 = (this->CharacterGroundConstraintSettingsPool).FreeList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CharacterGroundConstraintSettingsPool).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((this->SuspensionPhysicsObjectPool).Elements.ArrayNum !=
      (this->SuspensionPhysicsObjectPool).FreeList.ArrayNum) {
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
  pFVar1 = (this->SuspensionPhysicsObjectPool).FreeList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SuspensionPhysicsObjectPool).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((this->SuspensionLocationPool).Elements.ArrayNum !=
      (this->SuspensionLocationPool).FreeList.ArrayNum) {
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
  pFVar1 = (this->SuspensionLocationPool).FreeList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SuspensionLocationPool).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TPropertyPool<Chaos::FParticleProxyProperty>::~TPropertyPool<Chaos::FParticleProxyProperty>
            (&this->SuspensionParticleProxyPool);
  if ((this->SuspensionSettingsPool).Elements.ArrayNum !=
      (this->SuspensionSettingsPool).FreeList.ArrayNum) {
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
  pFVar1 = (this->SuspensionSettingsPool).FreeList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SuspensionSettingsPool).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((this->JointPhysicsObjectsPool).Elements.ArrayNum !=
      (this->JointPhysicsObjectsPool).FreeList.ArrayNum) {
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
  pFVar1 = (this->JointPhysicsObjectsPool).FreeList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->JointPhysicsObjectsPool).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TPropertyPool<Chaos::FProxyBasePairProperty>::~TPropertyPool<Chaos::FProxyBasePairProperty>
            (&this->JointParticleProxiesPool);
  TPropertyPool<Chaos::FPBDJointSettings>::~TPropertyPool<Chaos::FPBDJointSettings>
            (&this->JointSettingsPool);
  TPropertyPool<Chaos::FKinematicTarget>::~TPropertyPool<Chaos::FKinematicTarget>
            (&this->KinematicTargetPool);
  TPropertyPool<Chaos::FParticleMassProps>::~TPropertyPool<Chaos::FParticleMassProps>
            (&this->MassPropsPool);
  TPropertyPool<Chaos::FParticleNonFrequentData>::~TPropertyPool<Chaos::FParticleNonFrequentData>
            (&this->NonFrequentDataPool);
  TPropertyPool<Chaos::FParticleDynamicMisc>::~TPropertyPool<Chaos::FParticleDynamicMisc>
            (&this->DynamicMiscPool);
  TPropertyPool<Chaos::FParticleDynamics>::~TPropertyPool<Chaos::FParticleDynamics>
            (&this->DynamicsPool);
  TPropertyPool<Chaos::FParticleVelocities>::~TPropertyPool<Chaos::FParticleVelocities>
            (&this->VelocitiesPool);
  TPropertyPool<Chaos::FParticlePositionRotation>::~TPropertyPool<Chaos::FParticlePositionRotation>
            (&this->XRPool);
  return;
}

// FDirtyPropertiesPool @ 1440caf90

FDirtyPropertiesPool * __thiscall
Chaos::FDirtyPropertiesPool::FDirtyPropertiesPool(FDirtyPropertiesPool *this)

{
  (this->XRPool).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->XRPool).Elements.ArrayNum = 0;
  (this->XRPool).Elements.ArrayMax = 0;
  (this->XRPool).FreeList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->XRPool).FreeList.ArrayNum = 0;
  (this->XRPool).FreeList.ArrayMax = 0;
  (this->VelocitiesPool).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VelocitiesPool).Elements.ArrayNum = 0;
  (this->VelocitiesPool).Elements.ArrayMax = 0;
  (this->VelocitiesPool).FreeList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VelocitiesPool).FreeList.ArrayNum = 0;
  (this->VelocitiesPool).FreeList.ArrayMax = 0;
  (this->DynamicsPool).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicsPool).Elements.ArrayNum = 0;
  (this->DynamicsPool).Elements.ArrayMax = 0;
  (this->DynamicsPool).FreeList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicsPool).FreeList.ArrayNum = 0;
  (this->DynamicsPool).FreeList.ArrayMax = 0;
  (this->DynamicMiscPool).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicMiscPool).Elements.ArrayNum = 0;
  (this->DynamicMiscPool).Elements.ArrayMax = 0;
  (this->DynamicMiscPool).FreeList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicMiscPool).FreeList.ArrayNum = 0;
  (this->DynamicMiscPool).FreeList.ArrayMax = 0;
  (this->NonFrequentDataPool).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NonFrequentDataPool).Elements.ArrayNum = 0;
  (this->NonFrequentDataPool).Elements.ArrayMax = 0;
  (this->NonFrequentDataPool).FreeList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NonFrequentDataPool).FreeList.ArrayNum = 0;
  (this->NonFrequentDataPool).FreeList.ArrayMax = 0;
  (this->MassPropsPool).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MassPropsPool).Elements.ArrayNum = 0;
  (this->MassPropsPool).Elements.ArrayMax = 0;
  (this->MassPropsPool).FreeList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MassPropsPool).FreeList.ArrayNum = 0;
  (this->MassPropsPool).FreeList.ArrayMax = 0;
  (this->KinematicTargetPool).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KinematicTargetPool).Elements.ArrayNum = 0;
  (this->KinematicTargetPool).Elements.ArrayMax = 0;
  (this->KinematicTargetPool).FreeList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KinematicTargetPool).FreeList.ArrayNum = 0;
  (this->KinematicTargetPool).FreeList.ArrayMax = 0;
  (this->JointSettingsPool).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->JointSettingsPool).Elements.ArrayNum = 0;
  (this->JointSettingsPool).Elements.ArrayMax = 0;
  (this->JointSettingsPool).FreeList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->JointSettingsPool).FreeList.ArrayNum = 0;
  (this->JointSettingsPool).FreeList.ArrayMax = 0;
  (this->JointParticleProxiesPool).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->JointParticleProxiesPool).Elements.ArrayNum = 0;
  (this->JointParticleProxiesPool).Elements.ArrayMax = 0;
  (this->JointParticleProxiesPool).FreeList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->JointParticleProxiesPool).FreeList.ArrayNum = 0;
  (this->JointParticleProxiesPool).FreeList.ArrayMax = 0;
  (this->JointPhysicsObjectsPool).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->JointPhysicsObjectsPool).Elements.ArrayNum = 0;
  (this->JointPhysicsObjectsPool).Elements.ArrayMax = 0;
  (this->JointPhysicsObjectsPool).FreeList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->JointPhysicsObjectsPool).FreeList.ArrayNum = 0;
  (this->JointPhysicsObjectsPool).FreeList.ArrayMax = 0;
  (this->SuspensionSettingsPool).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SuspensionSettingsPool).Elements.ArrayNum = 0;
  (this->SuspensionSettingsPool).Elements.ArrayMax = 0;
  (this->SuspensionSettingsPool).FreeList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SuspensionSettingsPool).FreeList.ArrayNum = 0;
  (this->SuspensionSettingsPool).FreeList.ArrayMax = 0;
  (this->SuspensionParticleProxyPool).Elements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SuspensionParticleProxyPool).Elements.ArrayNum = 0;
  (this->SuspensionParticleProxyPool).Elements.ArrayMax = 0;
  (this->SuspensionParticleProxyPool).FreeList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SuspensionParticleProxyPool).FreeList.ArrayNum = 0;
  (this->SuspensionParticleProxyPool).FreeList.ArrayMax = 0;
  (this->SuspensionLocationPool).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SuspensionLocationPool).Elements.ArrayNum = 0;
  (this->SuspensionLocationPool).Elements.ArrayMax = 0;
  (this->SuspensionLocationPool).FreeList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SuspensionLocationPool).FreeList.ArrayNum = 0;
  (this->SuspensionLocationPool).FreeList.ArrayMax = 0;
  (this->SuspensionPhysicsObjectPool).Elements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SuspensionPhysicsObjectPool).Elements.ArrayNum = 0;
  (this->SuspensionPhysicsObjectPool).Elements.ArrayMax = 0;
  (this->SuspensionPhysicsObjectPool).FreeList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SuspensionPhysicsObjectPool).FreeList.ArrayNum = 0;
  (this->SuspensionPhysicsObjectPool).FreeList.ArrayMax = 0;
  (this->CharacterGroundConstraintSettingsPool).Elements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CharacterGroundConstraintSettingsPool).Elements.ArrayNum = 0;
  (this->CharacterGroundConstraintSettingsPool).Elements.ArrayMax = 0;
  (this->CharacterGroundConstraintSettingsPool).FreeList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CharacterGroundConstraintSettingsPool).FreeList.ArrayNum = 0;
  (this->CharacterGroundConstraintSettingsPool).FreeList.ArrayMax = 0;
  (this->CharacterGroundConstraintDynamicDataPool).Elements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CharacterGroundConstraintDynamicDataPool).Elements.ArrayNum = 0;
  (this->CharacterGroundConstraintDynamicDataPool).Elements.ArrayMax = 0;
  (this->CharacterGroundConstraintDynamicDataPool).FreeList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CharacterGroundConstraintDynamicDataPool).FreeList.ArrayNum = 0;
  (this->CharacterGroundConstraintDynamicDataPool).FreeList.ArrayMax = 0;
  (this->CharacterParticleProxyPool).Elements.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CharacterParticleProxyPool).Elements.ArrayNum = 0;
  (this->CharacterParticleProxyPool).Elements.ArrayMax = 0;
  (this->CharacterParticleProxyPool).FreeList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CharacterParticleProxyPool).FreeList.ArrayNum = 0;
  (this->CharacterParticleProxyPool).FreeList.ArrayMax = 0;
  (this->GroundParticleProxyPool).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroundParticleProxyPool).Elements.ArrayNum = 0;
  (this->GroundParticleProxyPool).Elements.ArrayMax = 0;
  (this->GroundParticleProxyPool).FreeList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroundParticleProxyPool).FreeList.ArrayNum = 0;
  (this->GroundParticleProxyPool).FreeList.ArrayMax = 0;
  (this->ClusterXRPool).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClusterXRPool).Elements.ArrayNum = 0;
  (this->ClusterXRPool).Elements.ArrayMax = 0;
  (this->ClusterXRPool).FreeList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClusterXRPool).FreeList.ArrayNum = 0;
  (this->ClusterXRPool).FreeList.ArrayMax = 0;
  (this->ClusterVelocitiesPool).Elements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClusterVelocitiesPool).Elements.ArrayNum = 0;
  (this->ClusterVelocitiesPool).Elements.ArrayMax = 0;
  (this->ClusterVelocitiesPool).FreeList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClusterVelocitiesPool).FreeList.ArrayNum = 0;
  (this->ClusterVelocitiesPool).FreeList.ArrayMax = 0;
  return this;
}

