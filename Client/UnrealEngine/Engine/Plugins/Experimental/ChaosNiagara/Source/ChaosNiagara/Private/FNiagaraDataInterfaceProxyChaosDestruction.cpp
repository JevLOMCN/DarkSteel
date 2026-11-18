// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosNiagara
// Functions: 5

// ConsumePerInstanceDataFromGameThread @ 14e98c080

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxyChaosDestruction::ConsumePerInstanceDataFromGameThread
          (FNiagaraDataInterfaceProxyChaosDestruction *this,void *param_1,ulong64 *param_2)

{
  undefined8 *puVar1;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined8 *puVar5;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> *pTVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  bool bVar13;
  FNiagaraDIChaosDestruction_GPUData *this_00;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar14;
  
  this_00 = TMapBase<unsigned___int64,FNiagaraDIChaosDestruction_GPUData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDIChaosDestruction_GPUData,0>_>
            ::Find((TMapBase<unsigned___int64,FNiagaraDIChaosDestruction_GPUData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDIChaosDestruction_GPUData,0>_>
                    *)&this->SystemsToGPUInstanceData,*param_2);
  if (this_00 == (FNiagaraDIChaosDestruction_GPUData *)0x0) {
    bVar13 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_6200727800874267204>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosNiagara\\Source\\ChaosNiagara\\Private\\NiagaraDataInterfaceChaosDestruction.cpp"
                        ,0xdbc,"DataPtr");
    if (bVar13) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  else {
    FNiagaraDIChaosDestruction_GPUData::ResetAll(this_00);
    this_00->SolverTime = *(float *)((longlong)param_1 + 400);
    this_00->LastSpawnedPointID = *(int *)((longlong)param_1 + 0x194);
    if (this_00 != param_1) {
      pFVar11 = (this_00->PositionArray).AllocatorInstance.Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      (this_00->PositionArray).AllocatorInstance.Data = *(FScriptContainerElement **)param_1;
      *(undefined8 *)param_1 = 0;
      (this_00->PositionArray).ArrayNum = *(int *)((longlong)param_1 + 8);
      (this_00->PositionArray).ArrayMax = *(int *)((longlong)param_1 + 0xc);
      *(undefined8 *)((longlong)param_1 + 8) = 0;
    }
    puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
    pTVar2 = &this_00->VelocityArray;
    if (pTVar2 != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)puVar1) {
      pFVar11 = (pTVar2->AllocatorInstance).Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)*puVar1;
      *puVar1 = 0;
      (this_00->VelocityArray).ArrayNum = *(int *)((longlong)param_1 + 0x18);
      (this_00->VelocityArray).ArrayMax = *(int *)((longlong)param_1 + 0x1c);
      *(undefined8 *)((longlong)param_1 + 0x18) = 0;
    }
    puVar1 = (undefined8 *)((longlong)param_1 + 0x20);
    pTVar14 = &this_00->ExtentMinArray;
    if (pTVar14 != (TArray<float,TSizedDefaultAllocator<32>_> *)puVar1) {
      pFVar11 = (pTVar14->AllocatorInstance).Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)*puVar1;
      *puVar1 = 0;
      (this_00->ExtentMinArray).ArrayNum = *(int *)((longlong)param_1 + 0x28);
      (this_00->ExtentMinArray).ArrayMax = *(int *)((longlong)param_1 + 0x2c);
      *(undefined8 *)((longlong)param_1 + 0x28) = 0;
    }
    puVar1 = (undefined8 *)((longlong)param_1 + 0x30);
    pTVar14 = &this_00->ExtentMaxArray;
    if (pTVar14 != (TArray<float,TSizedDefaultAllocator<32>_> *)puVar1) {
      pFVar11 = (pTVar14->AllocatorInstance).Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)*puVar1;
      *puVar1 = 0;
      (this_00->ExtentMaxArray).ArrayNum = *(int *)((longlong)param_1 + 0x38);
      (this_00->ExtentMaxArray).ArrayMax = *(int *)((longlong)param_1 + 0x3c);
      *(undefined8 *)((longlong)param_1 + 0x38) = 0;
    }
    puVar1 = (undefined8 *)((longlong)param_1 + 0x40);
    pTVar14 = &this_00->VolumeArray;
    if (pTVar14 != (TArray<float,TSizedDefaultAllocator<32>_> *)puVar1) {
      pFVar11 = (pTVar14->AllocatorInstance).Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)*puVar1;
      *puVar1 = 0;
      (this_00->VolumeArray).ArrayNum = *(int *)((longlong)param_1 + 0x48);
      (this_00->VolumeArray).ArrayMax = *(int *)((longlong)param_1 + 0x4c);
      *(undefined8 *)((longlong)param_1 + 0x48) = 0;
    }
    puVar1 = (undefined8 *)((longlong)param_1 + 0x50);
    pTVar3 = &this_00->SolverIDArray;
    if (pTVar3 != (TArray<int,TSizedDefaultAllocator<32>_> *)puVar1) {
      pFVar11 = (pTVar3->AllocatorInstance).Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)*puVar1;
      *puVar1 = 0;
      (this_00->SolverIDArray).ArrayNum = *(int *)((longlong)param_1 + 0x58);
      (this_00->SolverIDArray).ArrayMax = *(int *)((longlong)param_1 + 0x5c);
      *(undefined8 *)((longlong)param_1 + 0x58) = 0;
    }
    puVar1 = (undefined8 *)((longlong)param_1 + 0x60);
    pTVar14 = &this_00->DensityArray;
    if (pTVar14 != (TArray<float,TSizedDefaultAllocator<32>_> *)puVar1) {
      pFVar11 = (pTVar14->AllocatorInstance).Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)*puVar1;
      *puVar1 = 0;
      (this_00->DensityArray).ArrayNum = *(int *)((longlong)param_1 + 0x68);
      (this_00->DensityArray).ArrayMax = *(int *)((longlong)param_1 + 0x6c);
      *(undefined8 *)((longlong)param_1 + 0x68) = 0;
    }
    puVar1 = (undefined8 *)((longlong)param_1 + 0x70);
    pTVar14 = &this_00->FrictionArray;
    if (pTVar14 != (TArray<float,TSizedDefaultAllocator<32>_> *)puVar1) {
      pFVar11 = (pTVar14->AllocatorInstance).Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)*puVar1;
      *puVar1 = 0;
      (this_00->FrictionArray).ArrayNum = *(int *)((longlong)param_1 + 0x78);
      (this_00->FrictionArray).ArrayMax = *(int *)((longlong)param_1 + 0x7c);
      *(undefined8 *)((longlong)param_1 + 0x78) = 0;
    }
    puVar1 = (undefined8 *)((longlong)param_1 + 0x80);
    pTVar14 = &this_00->RestitutionArray;
    if (pTVar14 != (TArray<float,TSizedDefaultAllocator<32>_> *)puVar1) {
      pFVar11 = (pTVar14->AllocatorInstance).Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)*puVar1;
      *puVar1 = 0;
      (this_00->RestitutionArray).ArrayNum = *(int *)((longlong)param_1 + 0x88);
      (this_00->RestitutionArray).ArrayMax = *(int *)((longlong)param_1 + 0x8c);
      *(undefined8 *)((longlong)param_1 + 0x88) = 0;
    }
    puVar1 = (undefined8 *)((longlong)param_1 + 0x150);
    pTVar2 = &this_00->TransformTranslationArray;
    if (pTVar2 != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)puVar1) {
      pFVar11 = (pTVar2->AllocatorInstance).Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)*puVar1;
      *puVar1 = 0;
      (this_00->TransformTranslationArray).ArrayNum = *(int *)((longlong)param_1 + 0x158);
      (this_00->TransformTranslationArray).ArrayMax = *(int *)((longlong)param_1 + 0x15c);
      *(undefined8 *)((longlong)param_1 + 0x158) = 0;
    }
    puVar1 = (undefined8 *)((longlong)param_1 + 0x160);
    pTVar4 = &this_00->TransformRotationArray;
    if (pTVar4 != (TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> *)puVar1) {
      pFVar11 = (pTVar4->AllocatorInstance).Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)*puVar1;
      *puVar1 = 0;
      (this_00->TransformRotationArray).ArrayNum = *(int *)((longlong)param_1 + 0x168);
      (this_00->TransformRotationArray).ArrayMax = *(int *)((longlong)param_1 + 0x16c);
      *(undefined8 *)((longlong)param_1 + 0x168) = 0;
    }
    puVar1 = (undefined8 *)((longlong)param_1 + 0x170);
    pTVar2 = &this_00->TransformScaleArray;
    if (pTVar2 != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)puVar1) {
      pFVar11 = (pTVar2->AllocatorInstance).Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)*puVar1;
      *puVar1 = 0;
      (this_00->TransformScaleArray).ArrayNum = *(int *)((longlong)param_1 + 0x178);
      (this_00->TransformScaleArray).ArrayMax = *(int *)((longlong)param_1 + 0x17c);
      *(undefined8 *)((longlong)param_1 + 0x178) = 0;
    }
    puVar1 = (undefined8 *)((longlong)param_1 + 0x180);
    pTVar2 = &this_00->BoundsArray;
    if (pTVar2 != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)puVar1) {
      pFVar11 = (pTVar2->AllocatorInstance).Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)*puVar1;
      *puVar1 = 0;
      (this_00->BoundsArray).ArrayNum = *(int *)((longlong)param_1 + 0x188);
      (this_00->BoundsArray).ArrayMax = *(int *)((longlong)param_1 + 0x18c);
      *(undefined8 *)((longlong)param_1 + 0x188) = 0;
    }
    puVar5 = (undefined8 *)((longlong)param_1 + 0x90);
    pTVar3 = &this_00->SurfaceTypeArray;
    if (pTVar3 != (TArray<int,TSizedDefaultAllocator<32>_> *)puVar5) {
      pFVar11 = (pTVar3->AllocatorInstance).Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)*puVar5;
      *puVar5 = 0;
      (this_00->SurfaceTypeArray).ArrayNum = *(int *)((longlong)param_1 + 0x98);
      (this_00->SurfaceTypeArray).ArrayMax = *(int *)((longlong)param_1 + 0x9c);
      *(undefined8 *)((longlong)param_1 + 0x98) = 0;
    }
    puVar5 = (undefined8 *)((longlong)param_1 + 0xa0);
    pTVar6 = &this_00->ColorArray;
    if (pTVar6 != (TArray<FLinearColor,TSizedDefaultAllocator<32>_> *)puVar5) {
      pFVar11 = (pTVar6->AllocatorInstance).Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)*puVar5;
      *puVar5 = 0;
      (this_00->ColorArray).ArrayNum = *(int *)((longlong)param_1 + 0xa8);
      (this_00->ColorArray).ArrayMax = *(int *)((longlong)param_1 + 0xac);
      *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
    }
    puVar5 = (undefined8 *)((longlong)param_1 + 0xb0);
    pTVar2 = &this_00->IncomingLocationArray;
    if (pTVar2 != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)puVar5) {
      pFVar11 = (pTVar2->AllocatorInstance).Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)*puVar5;
      *puVar5 = 0;
      (this_00->IncomingLocationArray).ArrayNum = *(int *)((longlong)param_1 + 0xb8);
      (this_00->IncomingLocationArray).ArrayMax = *(int *)((longlong)param_1 + 0xbc);
      *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
    }
    puVar5 = (undefined8 *)((longlong)param_1 + 0xc0);
    pTVar2 = &this_00->IncomingAccumulatedImpulseArray;
    if (pTVar2 != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)puVar5) {
      pFVar11 = (pTVar2->AllocatorInstance).Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)*puVar5;
      *puVar5 = 0;
      (this_00->IncomingAccumulatedImpulseArray).ArrayNum = *(int *)((longlong)param_1 + 200);
      (this_00->IncomingAccumulatedImpulseArray).ArrayMax = *(int *)((longlong)param_1 + 0xcc);
      *(undefined8 *)((longlong)param_1 + 200) = 0;
    }
    puVar5 = (undefined8 *)((longlong)param_1 + 0xd0);
    pTVar2 = &this_00->IncomingNormalArray;
    if (pTVar2 != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)puVar5) {
      pFVar11 = (pTVar2->AllocatorInstance).Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)*puVar5;
      *puVar5 = 0;
      (this_00->IncomingNormalArray).ArrayNum = *(int *)((longlong)param_1 + 0xd8);
      (this_00->IncomingNormalArray).ArrayMax = *(int *)((longlong)param_1 + 0xdc);
      *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
    }
    puVar5 = (undefined8 *)((longlong)param_1 + 0xe0);
    pTVar2 = &this_00->IncomingVelocity1Array;
    if (pTVar2 != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)puVar5) {
      pFVar11 = (pTVar2->AllocatorInstance).Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)*puVar5;
      *puVar5 = 0;
      (this_00->IncomingVelocity1Array).ArrayNum = *(int *)((longlong)param_1 + 0xe8);
      (this_00->IncomingVelocity1Array).ArrayMax = *(int *)((longlong)param_1 + 0xec);
      *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
    }
    puVar5 = (undefined8 *)((longlong)param_1 + 0xf0);
    pTVar2 = &this_00->IncomingVelocity2Array;
    if (pTVar2 != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)puVar5) {
      pFVar11 = (pTVar2->AllocatorInstance).Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)*puVar5;
      *puVar5 = 0;
      (this_00->IncomingVelocity2Array).ArrayNum = *(int *)((longlong)param_1 + 0xf8);
      (this_00->IncomingVelocity2Array).ArrayMax = *(int *)((longlong)param_1 + 0xfc);
      *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
    }
    puVar5 = (undefined8 *)((longlong)param_1 + 0x100);
    pTVar2 = &this_00->IncomingAngularVelocity1Array;
    if (pTVar2 != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)puVar5) {
      pFVar11 = (pTVar2->AllocatorInstance).Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)*puVar5;
      *puVar5 = 0;
      (this_00->IncomingAngularVelocity1Array).ArrayNum = *(int *)((longlong)param_1 + 0x108);
      (this_00->IncomingAngularVelocity1Array).ArrayMax = *(int *)((longlong)param_1 + 0x10c);
      *(undefined8 *)((longlong)param_1 + 0x108) = 0;
    }
    puVar7 = (undefined8 *)((longlong)param_1 + 0x110);
    pTVar2 = &this_00->IncomingAngularVelocity2Array;
    if (pTVar2 != (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)puVar7) {
      pFVar11 = (pTVar2->AllocatorInstance).Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)*puVar7;
      *puVar7 = 0;
      (this_00->IncomingAngularVelocity2Array).ArrayNum = *(int *)((longlong)param_1 + 0x118);
      (this_00->IncomingAngularVelocity2Array).ArrayMax = *(int *)((longlong)param_1 + 0x11c);
      *(undefined8 *)((longlong)param_1 + 0x118) = 0;
    }
    puVar8 = (undefined8 *)((longlong)param_1 + 0x120);
    pTVar14 = &this_00->IncomingMass1Array;
    if (pTVar14 != (TArray<float,TSizedDefaultAllocator<32>_> *)puVar8) {
      pFVar11 = (pTVar14->AllocatorInstance).Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)*puVar8;
      *puVar8 = 0;
      (this_00->IncomingMass1Array).ArrayNum = *(int *)((longlong)param_1 + 0x128);
      (this_00->IncomingMass1Array).ArrayMax = *(int *)((longlong)param_1 + 300);
      *(undefined8 *)((longlong)param_1 + 0x128) = 0;
    }
    puVar9 = (undefined8 *)((longlong)param_1 + 0x130);
    pTVar14 = &this_00->IncomingMass2Array;
    if (pTVar14 != (TArray<float,TSizedDefaultAllocator<32>_> *)puVar9) {
      pFVar11 = (pTVar14->AllocatorInstance).Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)*puVar9;
      *puVar9 = 0;
      (this_00->IncomingMass2Array).ArrayNum = *(int *)((longlong)param_1 + 0x138);
      (this_00->IncomingMass2Array).ArrayMax = *(int *)((longlong)param_1 + 0x13c);
      *(undefined8 *)((longlong)param_1 + 0x138) = 0;
    }
    puVar10 = (undefined8 *)((longlong)param_1 + 0x140);
    pTVar14 = &this_00->IncomingTimeArray;
    if (pTVar14 != (TArray<float,TSizedDefaultAllocator<32>_> *)puVar10) {
      pFVar11 = (pTVar14->AllocatorInstance).Data;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar11);
      }
      (pTVar14->AllocatorInstance).Data = (FScriptContainerElement *)*puVar10;
      *puVar10 = 0;
      (this_00->IncomingTimeArray).ArrayNum = *(int *)((longlong)param_1 + 0x148);
      (this_00->IncomingTimeArray).ArrayMax = *(int *)((longlong)param_1 + 0x14c);
      *(undefined8 *)((longlong)param_1 + 0x148) = 0;
    }
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    if (*(void **)((longlong)param_1 + 0x170) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 0x170));
    }
    if (*(void **)((longlong)param_1 + 0x160) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 0x160));
    }
    if (*(void **)((longlong)param_1 + 0x150) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 0x150));
    }
    if ((void *)*puVar10 != (void *)0x0) {
      FMemory::Free((void *)*puVar10);
    }
    if ((void *)*puVar9 != (void *)0x0) {
      FMemory::Free((void *)*puVar9);
    }
    if ((void *)*puVar8 != (void *)0x0) {
      FMemory::Free((void *)*puVar8);
    }
    if ((void *)*puVar7 != (void *)0x0) {
      FMemory::Free((void *)*puVar7);
    }
    if ((void *)*puVar5 != (void *)0x0) {
      FMemory::Free((void *)*puVar5);
    }
    if (*(void **)((longlong)param_1 + 0xf0) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 0xf0));
    }
    if (*(void **)((longlong)param_1 + 0xe0) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 0xe0));
    }
    if (*(void **)((longlong)param_1 + 0xd0) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 0xd0));
    }
    if (*(void **)((longlong)param_1 + 0xc0) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 0xc0));
    }
    if (*(void **)((longlong)param_1 + 0xb0) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 0xb0));
    }
    if (*(void **)((longlong)param_1 + 0xa0) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 0xa0));
    }
    if (*(void **)((longlong)param_1 + 0x90) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 0x90));
    }
    if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 0x80));
    }
    if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 0x70));
    }
    if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 0x60));
    }
    if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 0x50));
    }
    if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 0x40));
    }
    if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 0x30));
    }
    if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 0x20));
    }
    if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)param_1 + 0x10));
    }
    if (*(void **)param_1 != (void *)0x0) {
      FMemory::Free(*(void **)param_1);
    }
  }
  return;
}

// CreatePerInstanceData @ 14e991480

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxyChaosDestruction::CreatePerInstanceData
          (FNiagaraDataInterfaceProxyChaosDestruction *this,ulong64 *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined1 *puVar5;
  ulong64 *local_278;
  FNiagaraDIChaosDestruction_GPUData *local_270;
  FNiagaraDIChaosDestruction_GPUData local_268;
  
  bVar3 = IsInRenderingThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosNiagara\\Source\\ChaosNiagara\\Private\\NiagaraDataInterfaceChaosDestruction.cpp"
                         ,0xdac,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar1 = *param_1;
  if (*(int *)&(this->SystemsToGPUInstanceData).field_0x8 !=
      *(int *)&(this->SystemsToGPUInstanceData).field_0x34) {
    puVar5 = *(undefined1 **)&(this->SystemsToGPUInstanceData).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->SystemsToGPUInstanceData).field_0x38;
    }
    iVar4 = *(int *)(puVar5 + ((ulonglong)(*(int *)&(this->SystemsToGPUInstanceData).field_0x48 - 1)
                              & (uVar1 >> 0x20) * 0x17 + uVar1) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar4 * 0x270 + *(longlong *)&this->SystemsToGPUInstanceData)
            == uVar1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!SystemsToGPUInstanceData.Contains(SystemInstance)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosNiagara\\Source\\ChaosNiagara\\Private\\NiagaraDataInterfaceChaosDestruction.cpp"
                             ,0xdad,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x270 + 0x268 +
                        *(longlong *)&this->SystemsToGPUInstanceData);
      } while (iVar4 != -1);
    }
  }
  memset(&local_268,0,0x260);
  local_278 = param_1;
  local_270 = FNiagaraDIChaosDestruction_GPUData::FNiagaraDIChaosDestruction_GPUData(&local_268);
  TSet<TTuple<unsigned___int64,FNiagaraDIChaosDestruction_GPUData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDIChaosDestruction_GPUData,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_const_&,FNiagaraDIChaosDestruction_GPUData_&&>_>
            ((TSet<TTuple<unsigned___int64,FNiagaraDIChaosDestruction_GPUData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDIChaosDestruction_GPUData,0>,FDefaultSetAllocator>
              *)&this->SystemsToGPUInstanceData,
             (TPairInitializer<unsigned___int64_const_&,FNiagaraDIChaosDestruction_GPUData_&&> *)
             &stack0x00000008,(bool *)&local_278);
  FNiagaraDIChaosDestruction_GPUData::~FNiagaraDIChaosDestruction_GPUData(&local_268);
  return;
}

// DestroyInstanceData @ 14e9916f0

void __thiscall
FNiagaraDataInterfaceProxyChaosDestruction::DestroyInstanceData
          (FNiagaraDataInterfaceProxyChaosDestruction *this,ulong64 *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined1 *puVar5;
  ulong64 local_res8;
  
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosNiagara\\Source\\ChaosNiagara\\Private\\NiagaraDataInterfaceChaosDestruction.cpp"
                       ,0xdb3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = *param_1;
  if (*(int *)&(this->SystemsToGPUInstanceData).field_0x8 !=
      *(int *)&(this->SystemsToGPUInstanceData).field_0x34) {
    puVar5 = *(undefined1 **)&(this->SystemsToGPUInstanceData).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->SystemsToGPUInstanceData).field_0x38;
    }
    iVar4 = *(int *)(puVar5 + ((uVar1 >> 0x20) * 0x17 + uVar1 &
                              (ulonglong)(*(int *)&(this->SystemsToGPUInstanceData).field_0x48 - 1))
                              * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar4 * 0x270 + *(longlong *)&this->SystemsToGPUInstanceData)
            == uVar1) goto LAB_14e9917b2;
        iVar4 = *(int *)((longlong)iVar4 * 0x270 + 0x268 +
                        *(longlong *)&this->SystemsToGPUInstanceData);
      } while (iVar4 != -1);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("SystemsToGPUInstanceData.Contains(SystemInstance)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosNiagara\\Source\\ChaosNiagara\\Private\\NiagaraDataInterfaceChaosDestruction.cpp"
                     ,0xdb4,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14e9917b2:
  local_res8 = *param_1;
  if (*(int *)&(this->SystemsToGPUInstanceData).field_0x8 !=
      *(int *)&(this->SystemsToGPUInstanceData).field_0x34) {
    TSet<TTuple<unsigned___int64,FNiagaraDIChaosDestruction_GPUData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDIChaosDestruction_GPUData,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FNiagaraDIChaosDestruction_GPUData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDIChaosDestruction_GPUData,0>,FDefaultSetAllocator>
                *)&this->SystemsToGPUInstanceData,(int)(local_res8 >> 0x20) * 0x17 + (int)local_res8
               ,&local_res8);
  }
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 14e9a2530

int __thiscall
FNiagaraDataInterfaceProxyChaosDestruction::PerInstanceDataPassedToRenderThreadSize
          (FNiagaraDataInterfaceProxyChaosDestruction *this)

{
  return 0x198;
}

// PostSimulate @ 14e9a3260

void __thiscall
FNiagaraDataInterfaceProxyChaosDestruction::PostSimulate
          (FNiagaraDataInterfaceProxyChaosDestruction *this,
          FNDIGpuComputePostSimulateContext *param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<unsigned___int64,FNiagaraDIChaosDestruction_GPUData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDIChaosDestruction_GPUData,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<unsigned___int64,FNiagaraDIChaosDestruction_GPUData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDIChaosDestruction_GPUData,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<unsigned___int64,FNiagaraDIChaosDestruction_GPUData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDIChaosDestruction_GPUData,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  if (param_1->bFinalPostSimulate != false) {
    TSet<TTuple<unsigned___int64,FNiagaraDIChaosDestruction_GPUData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDIChaosDestruction_GPUData,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_78,
               (TSet<TTuple<unsigned___int64,FNiagaraDIChaosDestruction_GPUData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDIChaosDestruction_GPUData,0>,FDefaultSetAllocator>
                *)&this->SystemsToGPUInstanceData);
    local_10 = 0;
    stack0xffffffffffffffc8 = local_78._16_16_;
    local_48 = (longlong *)local_78._0_8_;
    auStack_40._0_8_ = local_78._8_8_;
    local_28 = local_58;
    pTStack_20 = pTStack_50;
    uVar3 = local_78._24_8_ >> 0x20;
    local_18 = (TSet<TTuple<unsigned___int64,FNiagaraDIChaosDestruction_GPUData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDIChaosDestruction_GPUData,0>,FDefaultSetAllocator>
                *)&this->SystemsToGPUInstanceData;
    if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
      do {
        lVar4 = (longlong)(int)uVar3 * 0x270;
        lVar1 = *local_48;
        uStack_30 = uStack_30 & ~auStack_40._4_4_;
        *(undefined8 *)(lVar4 + 0x1a0 + lVar1) = 0;
        *(undefined8 *)(lVar4 + 0x1a8 + lVar1) = 0;
        *(undefined8 *)(lVar4 + 0x1b0 + lVar1) = 0;
        *(undefined8 *)(lVar4 + 0x1b8 + lVar1) = 0;
        *(undefined8 *)(lVar4 + 0x1c0 + lVar1) = 0;
        *(undefined8 *)(lVar4 + 0x1c8 + lVar1) = 0;
        *(undefined8 *)(lVar4 + 0x1d0 + lVar1) = 0;
        *(undefined8 *)(lVar4 + 0x1d8 + lVar1) = 0;
        *(undefined8 *)(lVar4 + 0x1e0 + lVar1) = 0;
        *(undefined8 *)(lVar4 + 0x1e8 + lVar1) = 0;
        *(undefined8 *)(lVar4 + 0x1f0 + lVar1) = 0;
        *(undefined8 *)(lVar4 + 0x1f8 + lVar1) = 0;
        *(undefined8 *)(lVar4 + 0x200 + lVar1) = 0;
        *(undefined8 *)(lVar4 + 0x208 + lVar1) = 0;
        *(undefined8 *)(lVar4 + 0x210 + lVar1) = 0;
        *(undefined8 *)(lVar4 + 0x218 + lVar1) = 0;
        *(undefined8 *)(lVar4 + 0x220 + lVar1) = 0;
        *(undefined8 *)(lVar4 + 0x228 + lVar1) = 0;
        *(undefined8 *)(lVar4 + 0x230 + lVar1) = 0;
        *(undefined8 *)(lVar4 + 0x238 + lVar1) = 0;
        *(undefined8 *)(lVar4 + 0x240 + lVar1) = 0;
        *(undefined8 *)(lVar4 + 0x248 + lVar1) = 0;
        *(undefined8 *)(lVar4 + 0x250 + lVar1) = 0;
        *(undefined8 *)(lVar4 + 600 + lVar1) = 0;
        *(undefined8 *)(lVar4 + 0x260 + lVar1) = 0;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
        uVar3 = (ulonglong)uStack_2c;
      } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
      if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
        uVar5 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
        if (uVar5 < 4) {
          iVar2 = 1;
        }
        else {
          uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
          lVar1 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          iVar2 = 1 << ((byte)lVar1 & 0x1f);
        }
        if (((0 < (int)uVar5) && (local_18->HashSize < iVar2)) || (iVar2 < local_18->HashSize)) {
          local_18->HashSize = iVar2;
          TSet<TTuple<unsigned___int64,FNiagaraDIChaosDestruction_GPUData>,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDIChaosDestruction_GPUData,0>,FDefaultSetAllocator>
          ::Rehash(local_18);
        }
      }
    }
  }
  return;
}

