// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// ~FDirtyPropertiesManager @ 14388cb10

void __thiscall
Chaos::FDirtyPropertiesManager::~FDirtyPropertiesManager(FDirtyPropertiesManager *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<Chaos::FMaterialData,int>
            ((FMaterialData *)(this->MaterialsShapePool).Elements.AllocatorInstance.Data,
             (this->MaterialsShapePool).Elements.ArrayNum);
  pFVar1 = (this->MaterialsShapePool).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CollisionDataShapePool).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ClusterVelocitiesPool).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ClusterXRPool).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GroundParticleProxyPool).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CharacterParticleProxyPool).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CharacterGroundConstraintDynamicDataPool).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CharacterGroundConstraintSettingsPool).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SuspensionPhysicsObjectPool).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SuspensionLocationPool).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SuspensionParticleProxyPool).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SuspensionSettingsPool).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->JointPhysicsObjectsPool).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->JointParticleProxiesPool).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->JointSettingsPool).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->KinematicTargetPool).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MassPropsPool).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Chaos::FParticleNonFrequentData,int>
            ((FParticleNonFrequentData *)(this->NonFrequentDataPool).Elements.AllocatorInstance.Data
             ,(this->NonFrequentDataPool).Elements.ArrayNum);
  pFVar1 = (this->NonFrequentDataPool).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DynamicMiscPool).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DynamicsPool).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VelocitiesPool).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->XRPool).Elements.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// PrepareBuckets @ 1438c5680

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FDirtyPropertiesManager::PrepareBuckets
          (FDirtyPropertiesManager *this,FDirtyProxiesBucketInfo *param_1)

{
  int *piVar1;
  TDirtyElementPool<Chaos::FProxyBasePairProperty> *pTVar2;
  TDirtyElementPool<Chaos::FPhysicsObjectPairProperty> *pTVar3;
  TDirtyElementPool<Chaos::FPBDSuspensionSettings> *pTVar4;
  TDirtyElementPool<Chaos::FSuspensionLocation> *pTVar5;
  TDirtyElementPool<Chaos::FPhysicsObjectProperty> *pTVar6;
  TDirtyElementPool<Chaos::FCharacterGroundConstraintSettings> *pTVar7;
  TDirtyElementPool<Chaos::FCharacterGroundConstraintDynamicData> *pTVar8;
  uint uVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  
  TDirtyElementPool<Chaos::FParticlePositionRotation>::SetNum(&this->XRPool,param_1->Num[0xb]);
  TDirtyElementPool<Chaos::FParticleVelocities>::SetNum(&this->VelocitiesPool,param_1->Num[0xb]);
  iVar13 = (this->DynamicsPool).Elements.ArrayNum;
  piVar1 = &(this->DynamicsPool).Elements.ArrayNum;
  uVar9 = param_1->Num[0xb];
  if (iVar13 < (int)uVar9) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,4,uVar9 - iVar13,(ForAnyElementType *)&this->DynamicsPool,piVar1,
               &(this->DynamicsPool).Elements.ArrayMax);
  }
  else {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if ((int)uVar9 < iVar13) {
      uVar15 = iVar13 - uVar9;
      if ((int)(uVar9 | uVar15) < 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar11) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (uVar15 != 0) {
        pFVar14 = (this->DynamicsPool).Elements.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x30
        ;
        iVar13 = (*piVar1 - uVar9) - uVar15;
        if (iVar13 != 0) {
          memmove(pFVar14,pFVar14 + (longlong)(int)uVar15 * 0x30,(longlong)iVar13 * 0x30);
        }
        *piVar1 = *piVar1 - uVar15;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,4,(ForAnyElementType *)&this->DynamicsPool,*piVar1,
                   &(this->DynamicsPool).Elements.ArrayMax);
      }
    }
  }
  iVar13 = (this->DynamicMiscPool).Elements.ArrayNum;
  piVar1 = &(this->DynamicMiscPool).Elements.ArrayNum;
  uVar9 = param_1->Num[0xb];
  if (iVar13 < (int)uVar9) {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x2c,4,uVar9 - iVar13,(ForAnyElementType *)&this->DynamicMiscPool,piVar1,
                        &(this->DynamicMiscPool).Elements.ArrayMax);
    DefaultConstructItems<Chaos::FParticleDynamicMisc,int>
              ((this->DynamicMiscPool).Elements.AllocatorInstance.Data + (longlong)iVar12 * 0x2c,
               uVar9 - iVar13);
  }
  else {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if ((int)uVar9 < iVar13) {
      uVar15 = iVar13 - uVar9;
      if ((int)(uVar9 | uVar15) < 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar11) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (uVar15 != 0) {
        pFVar14 = (this->DynamicMiscPool).Elements.AllocatorInstance.Data +
                  (longlong)(int)uVar9 * 0x2c;
        iVar13 = (*piVar1 - uVar9) - uVar15;
        if (iVar13 != 0) {
          memmove(pFVar14,pFVar14 + (longlong)(int)uVar15 * 0x2c,(longlong)iVar13 * 0x2c);
        }
        *piVar1 = *piVar1 - uVar15;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x2c,4,(ForAnyElementType *)&this->DynamicMiscPool,*piVar1,
                   &(this->DynamicMiscPool).Elements.ArrayMax);
      }
    }
  }
  iVar13 = (this->NonFrequentDataPool).Elements.ArrayNum;
  uVar9 = param_1->Num[0xb];
  piVar1 = &(this->NonFrequentDataPool).Elements.ArrayNum;
  if (iVar13 < (int)uVar9) {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x28,8,uVar9 - iVar13,(ForAnyElementType *)&this->NonFrequentDataPool,piVar1
                        ,&(this->NonFrequentDataPool).Elements.ArrayMax);
    DefaultConstructItems<Chaos::FParticleNonFrequentData,int>
              ((this->NonFrequentDataPool).Elements.AllocatorInstance.Data + (longlong)iVar12 * 0x28
               ,uVar9 - iVar13);
  }
  else {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if ((int)uVar9 < iVar13) {
      uVar15 = iVar13 - uVar9;
      if ((int)(uVar15 | uVar9) < 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar11) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (uVar15 != 0) {
        TArray<Chaos::FParticleNonFrequentData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (&(this->NonFrequentDataPool).Elements,uVar9,uVar15);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,(ForAnyElementType *)&this->NonFrequentDataPool,*piVar1,
                   &(this->NonFrequentDataPool).Elements.ArrayMax);
      }
    }
  }
  iVar13 = (this->MassPropsPool).Elements.ArrayNum;
  piVar1 = &(this->MassPropsPool).Elements.ArrayNum;
  uVar9 = param_1->Num[0xb];
  if (iVar13 < (int)uVar9) {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x60,0x10,uVar9 - iVar13,(ForAnyElementType *)&this->MassPropsPool,piVar1,
                        &(this->MassPropsPool).Elements.ArrayMax);
    DefaultConstructItems<Chaos::FParticleMassProps,int>
              ((this->MassPropsPool).Elements.AllocatorInstance.Data + (longlong)iVar12 * 0x60,
               uVar9 - iVar13);
  }
  else {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if ((int)uVar9 < iVar13) {
      uVar15 = iVar13 - uVar9;
      if ((int)(uVar15 | uVar9) < 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar11) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (uVar15 != 0) {
        pFVar14 = (this->MassPropsPool).Elements.AllocatorInstance.Data +
                  (longlong)(int)uVar9 * 0x60;
        iVar13 = (*piVar1 - uVar9) - uVar15;
        if (iVar13 != 0) {
          memmove(pFVar14,pFVar14 + (longlong)(int)uVar15 * 0x60,(longlong)iVar13 * 0x60);
        }
        *piVar1 = *piVar1 - uVar15;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,(ForAnyElementType *)&this->MassPropsPool,*piVar1,
                   &(this->MassPropsPool).Elements.ArrayMax);
      }
    }
  }
  TArray<Chaos::FKinematicTarget,TSizedDefaultAllocator<32>_>::SetNum
            (&(this->KinematicTargetPool).Elements,param_1->Num[0xb],Default);
  iVar13 = (this->JointSettingsPool).Elements.ArrayNum;
  piVar1 = &(this->JointSettingsPool).Elements.ArrayNum;
  uVar9 = param_1->Num[8];
  if (iVar13 < (int)uVar9) {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (800,0x10,uVar9 - iVar13,(ForAnyElementType *)&this->JointSettingsPool,piVar1
                        ,&(this->JointSettingsPool).Elements.ArrayMax);
    DefaultConstructItems<Chaos::FPBDJointSettings,int>
              ((this->JointSettingsPool).Elements.AllocatorInstance.Data + (longlong)iVar12 * 800,
               uVar9 - iVar13);
  }
  else {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if ((int)uVar9 < iVar13) {
      uVar15 = iVar13 - uVar9;
      if ((int)(uVar15 | uVar9) < 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar11) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (uVar15 != 0) {
        pFVar14 = (this->JointSettingsPool).Elements.AllocatorInstance.Data +
                  (longlong)(int)uVar9 * 800;
        iVar13 = (*piVar1 - uVar15) - uVar9;
        if (iVar13 != 0) {
          memmove(pFVar14,pFVar14 + (longlong)(int)uVar15 * 800,(longlong)iVar13 * 800);
        }
        *piVar1 = *piVar1 - uVar15;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (800,0x10,(ForAnyElementType *)&this->JointSettingsPool,*piVar1,
                   &(this->JointSettingsPool).Elements.ArrayMax);
      }
    }
  }
  uVar9 = param_1->Num[8];
  pTVar2 = &this->JointParticleProxiesPool;
  iVar13 = (this->JointParticleProxiesPool).Elements.ArrayNum;
  piVar1 = &(this->JointParticleProxiesPool).Elements.ArrayNum;
  if (iVar13 < (int)uVar9) {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,uVar9 - iVar13,(ForAnyElementType *)pTVar2,piVar1,
                        &(this->JointParticleProxiesPool).Elements.ArrayMax);
    DefaultConstructItems<Chaos::FProxyBasePairProperty,int>
              ((pTVar2->Elements).AllocatorInstance.Data + (longlong)iVar12 * 0x10,uVar9 - iVar13);
  }
  else {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if ((int)uVar9 < iVar13) {
      uVar15 = iVar13 - uVar9;
      if ((int)(uVar15 | uVar9) < 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar11) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (uVar15 != 0) {
        pFVar14 = (pTVar2->Elements).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10;
        iVar13 = (*piVar1 - uVar15) - uVar9;
        if (iVar13 != 0) {
          memmove(pFVar14,pFVar14 + (longlong)(int)uVar15 * 0x10,(longlong)iVar13 << 4);
        }
        *piVar1 = *piVar1 - uVar15;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(ForAnyElementType *)pTVar2,*piVar1,
                   &(this->JointParticleProxiesPool).Elements.ArrayMax);
      }
    }
  }
  uVar9 = param_1->Num[8];
  pTVar3 = &this->JointPhysicsObjectsPool;
  iVar13 = (this->JointPhysicsObjectsPool).Elements.ArrayNum;
  piVar1 = &(this->JointPhysicsObjectsPool).Elements.ArrayNum;
  if (iVar13 < (int)uVar9) {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,uVar9 - iVar13,(ForAnyElementType *)pTVar3,piVar1,
                        &(this->JointPhysicsObjectsPool).Elements.ArrayMax);
    DefaultConstructItems<Chaos::FPhysicsObjectPairProperty,int>
              ((pTVar3->Elements).AllocatorInstance.Data + (longlong)iVar12 * 0x10,uVar9 - iVar13);
  }
  else {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if ((int)uVar9 < iVar13) {
      uVar15 = iVar13 - uVar9;
      if ((int)(uVar15 | uVar9) < 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar11) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (uVar15 != 0) {
        pFVar14 = (pTVar3->Elements).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10;
        iVar13 = (*piVar1 - uVar15) - uVar9;
        if (iVar13 != 0) {
          memmove(pFVar14,pFVar14 + (longlong)(int)uVar15 * 0x10,(longlong)iVar13 << 4);
        }
        *piVar1 = *piVar1 - uVar15;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,(ForAnyElementType *)pTVar3,*piVar1,
                   &(this->JointPhysicsObjectsPool).Elements.ArrayMax);
      }
    }
  }
  uVar9 = param_1->Num[9];
  pTVar4 = &this->SuspensionSettingsPool;
  iVar13 = (this->SuspensionSettingsPool).Elements.ArrayNum;
  piVar1 = &(this->SuspensionSettingsPool).Elements.ArrayNum;
  if (iVar13 < (int)uVar9) {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x88,8,uVar9 - iVar13,(ForAnyElementType *)pTVar4,piVar1,
                        &(this->SuspensionSettingsPool).Elements.ArrayMax);
    DefaultConstructItems<Chaos::FPBDSuspensionSettings,int>
              ((pTVar4->Elements).AllocatorInstance.Data + (longlong)iVar12 * 0x88,uVar9 - iVar13);
  }
  else {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if ((int)uVar9 < iVar13) {
      uVar15 = iVar13 - uVar9;
      if ((int)(uVar15 | uVar9) < 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar11) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (uVar15 != 0) {
        pFVar14 = (pTVar4->Elements).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x88;
        iVar13 = (*piVar1 - uVar9) - uVar15;
        if (iVar13 != 0) {
          memmove(pFVar14,pFVar14 + (longlong)(int)uVar15 * 0x88,(longlong)iVar13 * 0x88);
        }
        *piVar1 = *piVar1 - uVar15;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x88,8,(ForAnyElementType *)pTVar4,*piVar1,
                   &(this->SuspensionSettingsPool).Elements.ArrayMax);
      }
    }
  }
  TDirtyElementPool<Chaos::FParticleProxyProperty>::SetNum
            (&this->SuspensionParticleProxyPool,param_1->Num[9]);
  uVar9 = param_1->Num[9];
  pTVar5 = &this->SuspensionLocationPool;
  iVar13 = (this->SuspensionLocationPool).Elements.ArrayNum;
  piVar1 = &(this->SuspensionLocationPool).Elements.ArrayNum;
  if (iVar13 < (int)uVar9) {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x18,8,uVar9 - iVar13,(ForAnyElementType *)pTVar5,piVar1,
                        &(this->SuspensionLocationPool).Elements.ArrayMax);
    DefaultConstructItems<Chaos::FSuspensionLocation,int>
              ((pTVar5->Elements).AllocatorInstance.Data + (longlong)iVar12 * 0x18,uVar9 - iVar13);
  }
  else {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if ((int)uVar9 < iVar13) {
      uVar15 = iVar13 - uVar9;
      if ((int)(uVar15 | uVar9) < 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar11) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (uVar15 != 0) {
        pFVar14 = (pTVar5->Elements).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x18;
        iVar13 = (*piVar1 - uVar9) - uVar15;
        if (iVar13 != 0) {
          memmove(pFVar14,pFVar14 + (longlong)(int)uVar15 * 0x18,(longlong)iVar13 * 0x18);
        }
        *piVar1 = *piVar1 - uVar15;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,(ForAnyElementType *)pTVar5,*piVar1,
                   &(this->SuspensionLocationPool).Elements.ArrayMax);
      }
    }
  }
  uVar9 = param_1->Num[9];
  pTVar6 = &this->SuspensionPhysicsObjectPool;
  iVar13 = (this->SuspensionPhysicsObjectPool).Elements.ArrayNum;
  piVar1 = &(this->SuspensionPhysicsObjectPool).Elements.ArrayNum;
  if (iVar13 < (int)uVar9) {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,uVar9 - iVar13,(ForAnyElementType *)pTVar6,piVar1,
                        &(this->SuspensionPhysicsObjectPool).Elements.ArrayMax);
    DefaultConstructItems<Chaos::FPhysicsObjectProperty,int>
              ((pTVar6->Elements).AllocatorInstance.Data + (longlong)iVar12 * 8,uVar9 - iVar13);
  }
  else {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if ((int)uVar9 < iVar13) {
      uVar15 = iVar13 - uVar9;
      if ((int)(uVar15 | uVar9) < 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar11) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (uVar15 != 0) {
        pFVar14 = (pTVar6->Elements).AllocatorInstance.Data + (longlong)(int)uVar9 * 8;
        iVar13 = (*piVar1 - uVar9) - uVar15;
        if (iVar13 != 0) {
          memmove(pFVar14,pFVar14 + (longlong)(int)uVar15 * 8,(longlong)iVar13 << 3);
        }
        *piVar1 = *piVar1 - uVar15;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,(ForAnyElementType *)pTVar6,*piVar1,
                   &(this->SuspensionPhysicsObjectPool).Elements.ArrayMax);
      }
    }
  }
  uVar9 = param_1->Num[10];
  pTVar7 = &this->CharacterGroundConstraintSettingsPool;
  iVar13 = (this->CharacterGroundConstraintSettingsPool).Elements.ArrayNum;
  piVar1 = &(this->CharacterGroundConstraintSettingsPool).Elements.ArrayNum;
  if (iVar13 < (int)uVar9) {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x78,8,uVar9 - iVar13,(ForAnyElementType *)pTVar7,piVar1,
                        &(this->CharacterGroundConstraintSettingsPool).Elements.ArrayMax);
    DefaultConstructItems<Chaos::FCharacterGroundConstraintSettings,int>
              ((pTVar7->Elements).AllocatorInstance.Data + (longlong)iVar12 * 0x78,uVar9 - iVar13);
  }
  else {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if ((int)uVar9 < iVar13) {
      uVar15 = iVar13 - uVar9;
      if ((int)(uVar15 | uVar9) < 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar11) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (uVar15 != 0) {
        pFVar14 = (pTVar7->Elements).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x78;
        iVar13 = (*piVar1 - uVar15) - uVar9;
        if (iVar13 != 0) {
          memmove(pFVar14,pFVar14 + (longlong)(int)uVar15 * 0x78,(longlong)iVar13 * 0x78);
        }
        *piVar1 = *piVar1 - uVar15;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x78,8,(ForAnyElementType *)pTVar7,*piVar1,
                   &(this->CharacterGroundConstraintSettingsPool).Elements.ArrayMax);
      }
    }
  }
  uVar9 = param_1->Num[10];
  pTVar8 = &this->CharacterGroundConstraintDynamicDataPool;
  iVar13 = (this->CharacterGroundConstraintDynamicDataPool).Elements.ArrayNum;
  piVar1 = &(this->CharacterGroundConstraintDynamicDataPool).Elements.ArrayNum;
  if (iVar13 < (int)uVar9) {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x48,8,uVar9 - iVar13,(ForAnyElementType *)pTVar8,piVar1,
                        &(this->CharacterGroundConstraintDynamicDataPool).Elements.ArrayMax);
    DefaultConstructItems<Chaos::FCharacterGroundConstraintDynamicData,int>
              ((pTVar8->Elements).AllocatorInstance.Data + (longlong)iVar12 * 0x48,uVar9 - iVar13);
  }
  else {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if ((int)uVar9 < iVar13) {
      uVar15 = iVar13 - uVar9;
      if ((int)(uVar15 | uVar9) < 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x458,
                            L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                           );
        if (bVar11) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (uVar15 != 0) {
        pFVar14 = (pTVar8->Elements).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x48;
        iVar13 = (*piVar1 - uVar15) - uVar9;
        if (iVar13 != 0) {
          memmove(pFVar14,pFVar14 + (longlong)(int)uVar15 * 0x48,(longlong)iVar13 * 0x48);
        }
        *piVar1 = *piVar1 - uVar15;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,(ForAnyElementType *)pTVar8,*piVar1,
                   &(this->CharacterGroundConstraintDynamicDataPool).Elements.ArrayMax);
      }
    }
  }
  TDirtyElementPool<Chaos::FParticleProxyProperty>::SetNum
            (&this->CharacterParticleProxyPool,param_1->Num[10]);
  TDirtyElementPool<Chaos::FParticleProxyProperty>::SetNum
            (&this->GroundParticleProxyPool,param_1->Num[10]);
  TDirtyElementPool<Chaos::FParticlePositionRotation>::SetNum
            (&this->ClusterXRPool,param_1->Num[0xc]);
  TDirtyElementPool<Chaos::FParticleVelocities>::SetNum
            (&this->ClusterVelocitiesPool,param_1->Num[0xc]);
  return;
}

// SetNumShapes @ 1440b3950

void __thiscall
Chaos::FDirtyPropertiesManager::SetNumShapes(FDirtyPropertiesManager *this,int param_1)

{
  int *piVar1;
  TDirtyElementPool<Chaos::FCollisionData> *pTVar2;
  TDirtyElementPool<Chaos::FMaterialData> *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *_Dst;
  uint uVar7;
  
  pTVar2 = &this->CollisionDataShapePool;
  iVar6 = (this->CollisionDataShapePool).Elements.ArrayNum;
  piVar1 = &(this->CollisionDataShapePool).Elements.ArrayNum;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,param_1 - iVar6,(ForAnyElementType *)pTVar2,piVar1,
                       &(this->CollisionDataShapePool).Elements.ArrayMax);
    DefaultConstructItems<Chaos::FCollisionData,int>
              ((pTVar2->Elements).AllocatorInstance.Data + (longlong)iVar5 * 0x30,param_1 - iVar6);
  }
  else {
    if (param_1 < 0) goto LAB_1440b3b65;
    if (param_1 < iVar6) {
      uVar7 = iVar6 - param_1;
      if ((int)(uVar7 | param_1) < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (uVar7 != 0) {
        _Dst = (pTVar2->Elements).AllocatorInstance.Data + (longlong)param_1 * 0x30;
        iVar6 = (*piVar1 - uVar7) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar7 * 0x30,(longlong)iVar6 * 0x30);
        }
        *piVar1 = *piVar1 - uVar7;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,(ForAnyElementType *)pTVar2,*piVar1,
                   &(this->CollisionDataShapePool).Elements.ArrayMax);
      }
    }
  }
  this_00 = &this->MaterialsShapePool;
  iVar6 = (this->MaterialsShapePool).Elements.ArrayNum;
  piVar1 = &(this->MaterialsShapePool).Elements.ArrayNum;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,param_1 - iVar6,(ForAnyElementType *)this_00,piVar1,
                       &(this->MaterialsShapePool).Elements.ArrayMax);
    DefaultConstructItems<Chaos::FMaterialData,int>
              ((this_00->Elements).AllocatorInstance.Data + (longlong)iVar5 * 0x40,param_1 - iVar6);
  }
  else {
    if (param_1 < 0) {
LAB_1440b3b65:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar7 = iVar6 - param_1;
      if ((int)(uVar7 | param_1) < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (uVar7 != 0) {
        TArray<Chaos::FMaterialData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (&this_00->Elements,param_1,uVar7);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,(ForAnyElementType *)this_00,*piVar1,
                   &(this->MaterialsShapePool).Elements.ArrayMax);
      }
    }
  }
  return;
}

