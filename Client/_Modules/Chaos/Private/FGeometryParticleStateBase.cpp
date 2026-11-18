// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 9

// ~FGeometryParticleStateBase @ 143afd260

void __thiscall
Chaos::FGeometryParticleStateBase::~FGeometryParticleStateBase(FGeometryParticleStateBase *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  DestructItems<Chaos::FPerShapeDataStateBase,int>
            ((FPerShapeDataStateBase *)(this->ShapesArrayState).PerShapeData.AllocatorInstance.Data,
             (this->ShapesArrayState).PerShapeData.ArrayNum);
  pFVar1 = (this->ShapesArrayState).PerShapeData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((this->TargetStates).Buffer.ArrayNum != 0) {
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
  pFVar1 = (this->TargetStates).Buffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((this->TargetVelocities).Buffer.ArrayNum != 0) {
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
  pFVar1 = (this->TargetVelocities).Buffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((this->TargetPositions).Buffer.ArrayNum != 0) {
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
  pFVar1 = (this->TargetPositions).Buffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((this->KinematicTarget).Buffer.ArrayNum != 0) {
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
  pFVar1 = (this->KinematicTarget).Buffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((this->MassProps).Buffer.ArrayNum != 0) {
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
  pFVar1 = (this->MassProps).Buffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((this->DynamicsMisc).Buffer.ArrayNum != 0) {
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
  pFVar1 = (this->DynamicsMisc).Buffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((this->Dynamics).Buffer.ArrayNum != 0) {
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
  pFVar1 = (this->Dynamics).Buffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((this->Velocities).Buffer.ArrayNum != 0) {
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
  pFVar1 = (this->Velocities).Buffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((this->NonFrequentData).Buffer.ArrayNum != 0) {
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
  pFVar1 = (this->NonFrequentData).Buffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((this->ParticlePositionRotation).Buffer.ArrayNum != 0) {
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
  pFVar1 = (this->ParticlePositionRotation).Buffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

// IsInSync<1> @ 1440c2cb0

bool __thiscall
Chaos::FGeometryParticleStateBase::IsInSync<1>
          (FGeometryParticleStateBase *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          FFrameAndPhase param_2,FDirtyPropertiesPool *param_3)

{
  bool bVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  
  bVar1 = TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::
          IsInSync<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                    (&this->ParticlePositionRotation,param_1,param_2,param_3);
  if ((bVar1) &&
     (bVar1 = TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1>::
              IsInSync<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                        (&this->NonFrequentData,param_1,param_2,param_3), bVar1)) {
    pTVar2 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      pTVar2 = param_1;
    }
    if ((pTVar2 == (TGeometryParticleHandleImp<double,3,1> *)0x0) ||
       ((bVar1 = TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::
                 IsInSync<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_>
                           (&this->Velocities,
                            (TKinematicGeometryParticleHandleImp<double,3,1> *)pTVar2,param_2,
                            param_3), bVar1 &&
        (bVar1 = TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0>::
                 IsInSync<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_>
                           (&this->KinematicTarget,
                            (TKinematicGeometryParticleHandleImp<double,3,1> *)pTVar2,param_2,
                            param_3), bVar1)))) {
      pTVar2 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
        pTVar2 = param_1;
      }
      if (pTVar2 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        return true;
      }
      bVar1 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::
              IsInSync<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                        (&this->DynamicsMisc,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar2,
                         param_2,param_3);
      if (bVar1) {
        bVar1 = TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1>::
                IsInSync<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                          (&this->MassProps,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar2,param_2
                           ,param_3);
        return bVar1;
      }
    }
  }
  return false;
}

// IsInSync<0> @ 1440c2dd0

bool __thiscall
Chaos::FGeometryParticleStateBase::IsInSync<0>
          (FGeometryParticleStateBase *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          FFrameAndPhase param_2,FDirtyPropertiesPool *param_3)

{
  bool bVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  
  bVar1 = TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::
          IsInSync<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                    (&this->ParticlePositionRotation,param_1,param_2,param_3);
  if ((bVar1) &&
     (bVar1 = TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1>::
              IsInSync<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                        (&this->NonFrequentData,param_1,param_2,param_3), bVar1)) {
    pTVar2 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      pTVar2 = param_1;
    }
    if ((pTVar2 == (TGeometryParticleHandleImp<double,3,1> *)0x0) ||
       ((bVar1 = TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::
                 IsInSync<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_>
                           (&this->Velocities,
                            (TKinematicGeometryParticleHandleImp<double,3,1> *)pTVar2,param_2,
                            param_3), bVar1 &&
        (bVar1 = TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0>::
                 IsInSync<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_>
                           (&this->KinematicTarget,
                            (TKinematicGeometryParticleHandleImp<double,3,1> *)pTVar2,param_2,
                            param_3), bVar1)))) {
      pTVar2 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
        pTVar2 = param_1;
      }
      if (pTVar2 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        return true;
      }
      bVar1 = TParticlePropertyBuffer<Chaos::FParticleDynamics,2,0>::
              IsInSync<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                        (&this->Dynamics,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar2,param_2,
                         param_3);
      if ((bVar1) &&
         (bVar1 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::
                  IsInSync<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                            (&this->DynamicsMisc,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar2,
                             param_2,param_3), bVar1)) {
        bVar1 = TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1>::
                IsInSync<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                          (&this->MassProps,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar2,param_2
                           ,param_3);
        return bVar1;
      }
    }
  }
  return false;
}

// FGeometryParticleStateBase @ 1440cb8f0

FGeometryParticleStateBase * __thiscall
Chaos::FGeometryParticleStateBase::FGeometryParticleStateBase
          (FGeometryParticleStateBase *this,FGeometryParticleStateBase *param_1)

{
  TArray<Chaos::FPropertyInterval,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  pTVar1 = &(this->Dynamics).Buffer;
  (this->ParticlePositionRotation).Next = (param_1->ParticlePositionRotation).Next;
  (this->ParticlePositionRotation).NumValid = (param_1->ParticlePositionRotation).NumValid;
  (this->ParticlePositionRotation).Capacity = (param_1->ParticlePositionRotation).Capacity;
  (this->ParticlePositionRotation).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParticlePositionRotation).Buffer.AllocatorInstance.Data =
       (param_1->ParticlePositionRotation).Buffer.AllocatorInstance.Data;
  (param_1->ParticlePositionRotation).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->ParticlePositionRotation).Buffer.ArrayNum =
       (param_1->ParticlePositionRotation).Buffer.ArrayNum;
  (this->ParticlePositionRotation).Buffer.ArrayMax =
       (param_1->ParticlePositionRotation).Buffer.ArrayMax;
  (param_1->ParticlePositionRotation).Buffer.ArrayNum = 0;
  (param_1->ParticlePositionRotation).Buffer.ArrayMax = 0;
  (param_1->ParticlePositionRotation).Next = 0;
  (param_1->ParticlePositionRotation).NumValid = 0;
  (this->NonFrequentData).Next = (param_1->NonFrequentData).Next;
  (this->NonFrequentData).NumValid = (param_1->NonFrequentData).NumValid;
  (this->NonFrequentData).Capacity = (param_1->NonFrequentData).Capacity;
  (this->NonFrequentData).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NonFrequentData).Buffer.AllocatorInstance.Data =
       (param_1->NonFrequentData).Buffer.AllocatorInstance.Data;
  (param_1->NonFrequentData).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NonFrequentData).Buffer.ArrayNum = (param_1->NonFrequentData).Buffer.ArrayNum;
  (this->NonFrequentData).Buffer.ArrayMax = (param_1->NonFrequentData).Buffer.ArrayMax;
  (param_1->NonFrequentData).Buffer.ArrayNum = 0;
  (param_1->NonFrequentData).Buffer.ArrayMax = 0;
  (param_1->NonFrequentData).Next = 0;
  (param_1->NonFrequentData).NumValid = 0;
  (this->Velocities).Next = (param_1->Velocities).Next;
  (this->Velocities).NumValid = (param_1->Velocities).NumValid;
  (this->Velocities).Capacity = (param_1->Velocities).Capacity;
  (this->Velocities).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Velocities).Buffer.AllocatorInstance.Data =
       (param_1->Velocities).Buffer.AllocatorInstance.Data;
  (param_1->Velocities).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Velocities).Buffer.ArrayNum = (param_1->Velocities).Buffer.ArrayNum;
  (this->Velocities).Buffer.ArrayMax = (param_1->Velocities).Buffer.ArrayMax;
  (param_1->Velocities).Buffer.ArrayNum = 0;
  (param_1->Velocities).Buffer.ArrayMax = 0;
  (param_1->Velocities).Next = 0;
  (param_1->Velocities).NumValid = 0;
  (this->Dynamics).Next = (param_1->Dynamics).Next;
  (this->Dynamics).NumValid = (param_1->Dynamics).NumValid;
  (this->Dynamics).Capacity = (param_1->Dynamics).Capacity;
  piVar2 = &(this->Dynamics).Buffer.ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Dynamics).Buffer.ArrayNum;
  pFVar4 = (param_1->Dynamics).Buffer.AllocatorInstance.Data;
  (this->Dynamics).Buffer.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 3);
  }
  pTVar1 = &(this->KinematicTarget).Buffer;
  (this->DynamicsMisc).Next = (param_1->DynamicsMisc).Next;
  (this->DynamicsMisc).NumValid = (param_1->DynamicsMisc).NumValid;
  (this->DynamicsMisc).Capacity = (param_1->DynamicsMisc).Capacity;
  (this->DynamicsMisc).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicsMisc).Buffer.AllocatorInstance.Data =
       (param_1->DynamicsMisc).Buffer.AllocatorInstance.Data;
  (param_1->DynamicsMisc).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicsMisc).Buffer.ArrayNum = (param_1->DynamicsMisc).Buffer.ArrayNum;
  (this->DynamicsMisc).Buffer.ArrayMax = (param_1->DynamicsMisc).Buffer.ArrayMax;
  (param_1->DynamicsMisc).Buffer.ArrayNum = 0;
  (param_1->DynamicsMisc).Buffer.ArrayMax = 0;
  (param_1->DynamicsMisc).Next = 0;
  (param_1->DynamicsMisc).NumValid = 0;
  (this->MassProps).Next = (param_1->MassProps).Next;
  (this->MassProps).NumValid = (param_1->MassProps).NumValid;
  (this->MassProps).Capacity = (param_1->MassProps).Capacity;
  (this->MassProps).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MassProps).Buffer.AllocatorInstance.Data =
       (param_1->MassProps).Buffer.AllocatorInstance.Data;
  (param_1->MassProps).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MassProps).Buffer.ArrayNum = (param_1->MassProps).Buffer.ArrayNum;
  (this->MassProps).Buffer.ArrayMax = (param_1->MassProps).Buffer.ArrayMax;
  (param_1->MassProps).Buffer.ArrayNum = 0;
  (param_1->MassProps).Buffer.ArrayMax = 0;
  (param_1->MassProps).Next = 0;
  (param_1->MassProps).NumValid = 0;
  (this->KinematicTarget).Next = (param_1->KinematicTarget).Next;
  (this->KinematicTarget).NumValid = (param_1->KinematicTarget).NumValid;
  (this->KinematicTarget).Capacity = (param_1->KinematicTarget).Capacity;
  piVar2 = &(this->KinematicTarget).Buffer.ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->KinematicTarget).Buffer.ArrayNum;
  pFVar4 = (param_1->KinematicTarget).Buffer.AllocatorInstance.Data;
  (this->KinematicTarget).Buffer.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 3);
  }
  pTVar1 = &(this->TargetPositions).Buffer;
  (this->TargetPositions).Next = (param_1->TargetPositions).Next;
  (this->TargetPositions).NumValid = (param_1->TargetPositions).NumValid;
  (this->TargetPositions).Capacity = (param_1->TargetPositions).Capacity;
  piVar2 = &(this->TargetPositions).Buffer.ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->TargetPositions).Buffer.ArrayNum;
  pFVar4 = (param_1->TargetPositions).Buffer.AllocatorInstance.Data;
  (this->TargetPositions).Buffer.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 3);
  }
  pTVar1 = &(this->TargetVelocities).Buffer;
  (this->TargetVelocities).Next = (param_1->TargetVelocities).Next;
  (this->TargetVelocities).NumValid = (param_1->TargetVelocities).NumValid;
  (this->TargetVelocities).Capacity = (param_1->TargetVelocities).Capacity;
  piVar2 = &(this->TargetVelocities).Buffer.ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->TargetVelocities).Buffer.ArrayNum;
  pFVar4 = (param_1->TargetVelocities).Buffer.AllocatorInstance.Data;
  (this->TargetVelocities).Buffer.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 3);
  }
  pTVar1 = &(this->TargetStates).Buffer;
  (this->TargetStates).Next = (param_1->TargetStates).Next;
  (this->TargetStates).NumValid = (param_1->TargetStates).NumValid;
  (this->TargetStates).Capacity = (param_1->TargetStates).Capacity;
  piVar2 = &(this->TargetStates).Buffer.ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->TargetStates).Buffer.ArrayNum;
  pFVar4 = (param_1->TargetStates).Buffer.AllocatorInstance.Data;
  (this->TargetStates).Buffer.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 3);
  }
  (this->ShapesArrayState).PerShapeData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShapesArrayState).PerShapeData.AllocatorInstance.Data =
       (param_1->ShapesArrayState).PerShapeData.AllocatorInstance.Data;
  (param_1->ShapesArrayState).PerShapeData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShapesArrayState).PerShapeData.ArrayNum = (param_1->ShapesArrayState).PerShapeData.ArrayNum
  ;
  (this->ShapesArrayState).PerShapeData.ArrayMax = (param_1->ShapesArrayState).PerShapeData.ArrayMax
  ;
  (param_1->ShapesArrayState).PerShapeData.ArrayNum = 0;
  (param_1->ShapesArrayState).PerShapeData.ArrayMax = 0;
  uVar5 = *(undefined8 *)&(param_1->PreCorrectionXR).MX.field_0x8;
  *(undefined8 *)&(this->PreCorrectionXR).MX = *(undefined8 *)&(param_1->PreCorrectionXR).MX;
  *(undefined8 *)&(this->PreCorrectionXR).MX.field_0x8 = uVar5;
  lVar6 = (param_1->PreCorrectionXR)._padding_;
  *(undefined8 *)&(this->PreCorrectionXR).MX.field_0x10 =
       *(undefined8 *)&(param_1->PreCorrectionXR).MX.field_0x10;
  (this->PreCorrectionXR)._padding_ = lVar6;
  uVar5 = *(undefined8 *)&(param_1->PreCorrectionXR).MR.field_0x8;
  *(undefined8 *)&(this->PreCorrectionXR).MR = *(undefined8 *)&(param_1->PreCorrectionXR).MR;
  *(undefined8 *)&(this->PreCorrectionXR).MR.field_0x8 = uVar5;
  return this;
}

// FGeometryParticleStateBase @ 1440cbd70

FGeometryParticleStateBase * __thiscall
Chaos::FGeometryParticleStateBase::FGeometryParticleStateBase
          (FGeometryParticleStateBase *this,int param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 * 3;
  iVar1 = iVar2;
  if (param_2) {
    iVar1 = param_1;
  }
  (this->ParticlePositionRotation).Capacity = iVar1;
  (this->ParticlePositionRotation).Next = 0;
  (this->ParticlePositionRotation).NumValid = 0;
  (this->ParticlePositionRotation).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar1 = iVar2;
  if (param_2) {
    iVar1 = param_1;
  }
  (this->ParticlePositionRotation).Buffer.ArrayNum = 0;
  (this->ParticlePositionRotation).Buffer.ArrayMax = 0;
  (this->NonFrequentData).Capacity = iVar1;
  (this->NonFrequentData).Next = 0;
  (this->NonFrequentData).NumValid = 0;
  iVar1 = iVar2;
  if (param_2) {
    iVar1 = param_1;
  }
  (this->NonFrequentData).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NonFrequentData).Buffer.ArrayNum = 0;
  (this->NonFrequentData).Buffer.ArrayMax = 0;
  (this->Velocities).Capacity = iVar1;
  (this->Velocities).Next = 0;
  (this->Velocities).NumValid = 0;
  iVar1 = iVar2;
  if (param_2) {
    iVar1 = param_1;
  }
  (this->Velocities).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Velocities).Buffer.ArrayNum = 0;
  (this->Velocities).Buffer.ArrayMax = 0;
  (this->Dynamics).Capacity = iVar1;
  (this->Dynamics).Next = 0;
  (this->Dynamics).NumValid = 0;
  iVar1 = iVar2;
  if (param_2) {
    iVar1 = param_1;
  }
  (this->Dynamics).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Dynamics).Buffer.ArrayNum = 0;
  (this->Dynamics).Buffer.ArrayMax = 0;
  (this->DynamicsMisc).Capacity = iVar1;
  (this->DynamicsMisc).Next = 0;
  (this->DynamicsMisc).NumValid = 0;
  iVar1 = iVar2;
  if (param_2) {
    iVar1 = param_1;
  }
  (this->DynamicsMisc).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (param_2) {
    iVar2 = param_1;
  }
  (this->DynamicsMisc).Buffer.ArrayNum = 0;
  (this->DynamicsMisc).Buffer.ArrayMax = 0;
  (this->MassProps).Capacity = iVar1;
  (this->MassProps).Next = 0;
  (this->MassProps).NumValid = 0;
  (this->MassProps).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MassProps).Buffer.ArrayNum = 0;
  (this->MassProps).Buffer.ArrayMax = 0;
  (this->KinematicTarget).Next = 0;
  (this->KinematicTarget).NumValid = 0;
  (this->KinematicTarget).Capacity = iVar2;
  (this->KinematicTarget).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->KinematicTarget).Buffer.ArrayNum = 0;
  (this->KinematicTarget).Buffer.ArrayMax = 0;
  (this->TargetPositions).Next = 0;
  (this->TargetPositions).NumValid = 0;
  (this->TargetPositions).Capacity = param_1;
  (this->TargetPositions).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetPositions).Buffer.ArrayNum = 0;
  (this->TargetPositions).Buffer.ArrayMax = 0;
  (this->TargetVelocities).Next = 0;
  (this->TargetVelocities).NumValid = 0;
  (this->TargetVelocities).Capacity = param_1;
  (this->TargetVelocities).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetVelocities).Buffer.ArrayNum = 0;
  (this->TargetVelocities).Buffer.ArrayMax = 0;
  (this->TargetStates).Next = 0;
  (this->TargetStates).NumValid = 0;
  (this->TargetStates).Capacity = param_1;
  (this->TargetStates).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetStates).Buffer.ArrayNum = 0;
  (this->TargetStates).Buffer.ArrayMax = 0;
  (this->ShapesArrayState).PerShapeData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShapesArrayState).PerShapeData.ArrayNum = 0;
  (this->ShapesArrayState).PerShapeData.ArrayMax = 0;
  *(undefined8 *)&(this->PreCorrectionXR).MR = 0;
  *(undefined8 *)&(this->PreCorrectionXR).MR.field_0x8 = 0;
  return this;
}

// ClearEntryAndFuture @ 1440d7440

void __thiscall
Chaos::FGeometryParticleStateBase::ClearEntryAndFuture
          (FGeometryParticleStateBase *this,FFrameAndPhase param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if ((this->ParticlePositionRotation).NumValid != 0) {
    iVar6 = param_1.Frame;
    do {
      uVar7 = (this->ParticlePositionRotation).Next - 1;
      if ((int)uVar7 < 0) {
        uVar7 = (this->ParticlePositionRotation).Buffer.ArrayNum - 1;
      }
      uVar4 = 0;
      if ((int)uVar7 < (this->ParticlePositionRotation).Buffer.ArrayNum) {
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
      uVar4 = *(uint *)((this->ParticlePositionRotation).Buffer.AllocatorInstance.Data +
                       (longlong)(int)uVar7 * 8 + 4);
      iVar5 = (int)(uVar4 * 4) >> 2;
      if ((iVar5 < iVar6) ||
         ((iVar5 == iVar6 && ((uVar4 & 0xc0000000) < ((uint)param_1 & 0xc0000000))))) break;
      piVar1 = &(this->ParticlePositionRotation).NumValid;
      *piVar1 = *piVar1 + -1;
      (this->ParticlePositionRotation).Next = uVar7;
    } while (*piVar1 != 0);
  }
  if ((this->NonFrequentData).NumValid != 0) {
    iVar6 = param_1.Frame;
    do {
      uVar7 = (this->NonFrequentData).Next - 1;
      if ((int)uVar7 < 0) {
        uVar7 = (this->NonFrequentData).Buffer.ArrayNum - 1;
      }
      uVar4 = 0;
      if ((int)uVar7 < (this->NonFrequentData).Buffer.ArrayNum) {
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
      uVar4 = *(uint *)((this->NonFrequentData).Buffer.AllocatorInstance.Data +
                       (longlong)(int)uVar7 * 8 + 4);
      iVar5 = (int)(uVar4 * 4) >> 2;
      if ((iVar5 < iVar6) ||
         ((iVar5 == iVar6 && ((uVar4 & 0xc0000000) < ((uint)param_1 & 0xc0000000))))) break;
      piVar1 = &(this->NonFrequentData).NumValid;
      *piVar1 = *piVar1 + -1;
      (this->NonFrequentData).Next = uVar7;
    } while (*piVar1 != 0);
  }
  if ((this->Velocities).NumValid != 0) {
    iVar6 = param_1.Frame;
    do {
      uVar7 = (this->Velocities).Next - 1;
      if ((int)uVar7 < 0) {
        uVar7 = (this->Velocities).Buffer.ArrayNum - 1;
      }
      uVar4 = 0;
      if ((int)uVar7 < (this->Velocities).Buffer.ArrayNum) {
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
      uVar4 = *(uint *)((this->Velocities).Buffer.AllocatorInstance.Data +
                       (longlong)(int)uVar7 * 8 + 4);
      iVar5 = (int)(uVar4 * 4) >> 2;
      if ((iVar5 < iVar6) ||
         ((iVar5 == iVar6 && ((uVar4 & 0xc0000000) < ((uint)param_1 & 0xc0000000))))) break;
      piVar1 = &(this->Velocities).NumValid;
      *piVar1 = *piVar1 + -1;
      (this->Velocities).Next = uVar7;
    } while (*piVar1 != 0);
  }
  if ((this->Dynamics).NumValid != 0) {
    iVar6 = param_1.Frame;
    do {
      uVar7 = (this->Dynamics).Next - 1;
      if ((int)uVar7 < 0) {
        uVar7 = (this->Dynamics).Buffer.ArrayNum - 1;
      }
      uVar4 = 0;
      if ((int)uVar7 < (this->Dynamics).Buffer.ArrayNum) {
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
      uVar4 = *(uint *)((this->Dynamics).Buffer.AllocatorInstance.Data +
                       (longlong)(int)uVar7 * 8 + 4);
      iVar5 = (int)(uVar4 * 4) >> 2;
      if ((iVar5 < iVar6) ||
         ((iVar5 == iVar6 && ((uVar4 & 0xc0000000) < ((uint)param_1 & 0xc0000000))))) break;
      piVar1 = &(this->Dynamics).NumValid;
      *piVar1 = *piVar1 + -1;
      (this->Dynamics).Next = uVar7;
    } while (*piVar1 != 0);
  }
  if ((this->DynamicsMisc).NumValid != 0) {
    iVar6 = param_1.Frame;
    do {
      uVar7 = (this->DynamicsMisc).Next - 1;
      if ((int)uVar7 < 0) {
        uVar7 = (this->DynamicsMisc).Buffer.ArrayNum - 1;
      }
      uVar4 = 0;
      if ((int)uVar7 < (this->DynamicsMisc).Buffer.ArrayNum) {
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
      uVar4 = *(uint *)((this->DynamicsMisc).Buffer.AllocatorInstance.Data +
                       (longlong)(int)uVar7 * 8 + 4);
      iVar5 = (int)(uVar4 * 4) >> 2;
      if ((iVar5 < iVar6) ||
         ((iVar5 == iVar6 && ((uVar4 & 0xc0000000) < ((uint)param_1 & 0xc0000000))))) break;
      piVar1 = &(this->DynamicsMisc).NumValid;
      *piVar1 = *piVar1 + -1;
      (this->DynamicsMisc).Next = uVar7;
    } while (*piVar1 != 0);
  }
  if ((this->MassProps).NumValid != 0) {
    iVar6 = param_1.Frame;
    do {
      uVar7 = (this->MassProps).Next - 1;
      if ((int)uVar7 < 0) {
        uVar7 = (this->MassProps).Buffer.ArrayNum - 1;
      }
      uVar4 = 0;
      if ((int)uVar7 < (this->MassProps).Buffer.ArrayNum) {
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
      uVar4 = *(uint *)((this->MassProps).Buffer.AllocatorInstance.Data +
                       (longlong)(int)uVar7 * 8 + 4);
      iVar5 = (int)(uVar4 * 4) >> 2;
      if ((iVar5 < iVar6) ||
         ((iVar5 == iVar6 && ((uVar4 & 0xc0000000) < ((uint)param_1 & 0xc0000000))))) break;
      piVar1 = &(this->MassProps).NumValid;
      *piVar1 = *piVar1 + -1;
      (this->MassProps).Next = uVar7;
    } while (*piVar1 != 0);
  }
  if ((this->KinematicTarget).NumValid != 0) {
    iVar6 = param_1.Frame;
    do {
      uVar7 = (this->KinematicTarget).Next - 1;
      if ((int)uVar7 < 0) {
        uVar7 = (this->KinematicTarget).Buffer.ArrayNum - 1;
      }
      uVar4 = 0;
      if ((int)uVar7 < (this->KinematicTarget).Buffer.ArrayNum) {
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
      uVar4 = *(uint *)((this->KinematicTarget).Buffer.AllocatorInstance.Data +
                       (longlong)(int)uVar7 * 8 + 4);
      iVar5 = (int)(uVar4 * 4) >> 2;
      if (iVar5 < iVar6) {
        return;
      }
      if ((iVar5 == iVar6) && ((uVar4 & 0xc0000000) < ((uint)param_1 & 0xc0000000))) {
        return;
      }
      piVar1 = &(this->KinematicTarget).NumValid;
      *piVar1 = *piVar1 + -1;
      (this->KinematicTarget).Next = uVar7;
    } while (*piVar1 != 0);
  }
  return;
}

// IsCleanExcludingDynamics @ 1440e8370

bool __thiscall
Chaos::FGeometryParticleStateBase::IsCleanExcludingDynamics
          (FGeometryParticleStateBase *this,FFrameAndPhase param_1)

{
  int iVar1;
  
  iVar1 = TParticlePropertyBuffer<Chaos::FParticlePositionRotation,0,1>::FindIdx
                    (&this->ParticlePositionRotation,param_1);
  if (iVar1 == -1) {
    iVar1 = TParticlePropertyBuffer<Chaos::FParticleNonFrequentData,4,1>::FindIdx
                      (&this->NonFrequentData,param_1);
    if (iVar1 == -1) {
      iVar1 = TParticlePropertyBuffer<Chaos::FParticleVelocities,1,1>::FindIdx
                        (&this->Velocities,param_1);
      if (iVar1 == -1) {
        iVar1 = TParticlePropertyBuffer<Chaos::FParticleDynamicMisc,3,1>::FindIdx
                          (&this->DynamicsMisc,param_1);
        if (iVar1 == -1) {
          iVar1 = TParticlePropertyBuffer<Chaos::FParticleMassProps,5,1>::FindIdx
                            (&this->MassProps,param_1);
          if (iVar1 == -1) {
            iVar1 = TParticlePropertyBuffer<Chaos::FKinematicTarget,6,0>::FindIdx
                              (&this->KinematicTarget,param_1);
            if (iVar1 == -1) {
              return true;
            }
          }
        }
      }
    }
  }
  return false;
}

// SyncDirtyDynamics @ 1440f2da0

void __thiscall
Chaos::FGeometryParticleStateBase::SyncDirtyDynamics
          (FGeometryParticleStateBase *this,FDirtyPropData *param_1,FDirtyChaosProperties *param_2,
          FConstDirtyPropData *param_3)

{
  return;
}

// SyncSimWritablePropsFromSim @ 1440f3130

void __thiscall
Chaos::FGeometryParticleStateBase::SyncSimWritablePropsFromSim
          (FGeometryParticleStateBase *this,FDirtyPropData *param_1,
          TPBDRigidParticleHandleImp<double,3,1> *param_2)

{
  return;
}

