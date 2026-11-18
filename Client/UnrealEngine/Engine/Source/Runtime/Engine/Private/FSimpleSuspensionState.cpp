// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FSimpleSuspensionState @ 1482da910

FSimpleSuspensionState * __thiscall
FSimpleSuspensionState::FSimpleSuspensionState
          (FSimpleSuspensionState *this,FSimpleSuspensionState *param_1)

{
  int *piVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  double dVar7;
  
  piVar1 = &(this->SpringDisplacements).ArrayMax;
  (this->SpringDisplacements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar5 = (param_1->SpringDisplacements).ArrayNum;
  pFVar6 = (param_1->SpringDisplacements).AllocatorInstance.Data;
  (this->SpringDisplacements).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,(ForAnyElementType *)this,iVar5,piVar1);
    memcpy((this->SpringDisplacements).AllocatorInstance.Data,pFVar6,(longlong)iVar5 << 2);
  }
  pTVar2 = &this->SpringForces;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->SpringForces).ArrayMax;
  iVar5 = (param_1->SpringForces).ArrayNum;
  pFVar6 = (param_1->SpringForces).AllocatorInstance.Data;
  (this->SpringForces).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar5,0,&pTVar2->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar6,(longlong)iVar5 << 2);
  }
  pTVar3 = &this->SpringContacts;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->SpringContacts).ArrayMax;
  iVar5 = (param_1->SpringContacts).ArrayNum;
  pFVar6 = (param_1->SpringContacts).AllocatorInstance.Data;
  (this->SpringContacts).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar5,0,&pTVar3->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar3->AllocatorInstance).Data,pFVar6,(longlong)iVar5);
  }
  pTVar4 = &this->WorldSpringOrigins;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->WorldSpringOrigins).ArrayMax;
  iVar5 = (param_1->WorldSpringOrigins).ArrayNum;
  pFVar6 = (param_1->WorldSpringOrigins).AllocatorInstance.Data;
  (this->WorldSpringOrigins).ArrayNum = iVar5;
  if (iVar5 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar5,0,&pTVar4->AllocatorInstance,iVar5,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar6,(longlong)iVar5 * 0x18);
  }
  dVar7 = (param_1->TotalForce).field0_0x0._s_0.Y;
  (this->TotalForce).field0_0x0._s_0.X = (param_1->TotalForce).field0_0x0._s_0.X;
  (this->TotalForce).field0_0x0._s_0.Y = dVar7;
  (this->TotalForce).field0_0x0._s_0.Z = (param_1->TotalForce).field0_0x0._s_0.Z;
  dVar7 = (param_1->TotalTorqueRad).field0_0x0._s_0.Y;
  (this->TotalTorqueRad).field0_0x0._s_0.X = (param_1->TotalTorqueRad).field0_0x0._s_0.X;
  (this->TotalTorqueRad).field0_0x0._s_0.Y = dVar7;
  (this->TotalTorqueRad).field0_0x0._s_0.Z = (param_1->TotalTorqueRad).field0_0x0._s_0.Z;
  dVar7 = (param_1->WorldCenterOfMass).field0_0x0._s_0.Y;
  (this->WorldCenterOfMass).field0_0x0._s_0.X = (param_1->WorldCenterOfMass).field0_0x0._s_0.X;
  (this->WorldCenterOfMass).field0_0x0._s_0.Y = dVar7;
  (this->WorldCenterOfMass).field0_0x0._s_0.Z = (param_1->WorldCenterOfMass).field0_0x0._s_0.Z;
  dVar7 = (param_1->WorldSuspensionNormal).field0_0x0._s_0.Y;
  (this->WorldSuspensionNormal).field0_0x0._s_0.X =
       (param_1->WorldSuspensionNormal).field0_0x0._s_0.X;
  (this->WorldSuspensionNormal).field0_0x0._s_0.Y = dVar7;
  (this->WorldSuspensionNormal).field0_0x0._s_0.Z =
       (param_1->WorldSuspensionNormal).field0_0x0._s_0.Z;
  return this;
}

