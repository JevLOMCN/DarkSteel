// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FPhysicsReplicationLOD @ 1482d96d0

FPhysicsReplicationLOD * __thiscall
FPhysicsReplicationLOD::FPhysicsReplicationLOD
          (FPhysicsReplicationLOD *this,FPhysScene_Chaos *param_1)

{
  FPhysicsSolverBase *this_00;
  undefined3 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  UPhysicsSettings *pUVar5;
  FPhysicsReplicationLODAsync *pFVar6;
  FPhysicsReplicationLODAsync *pFVar7;
  
  this->bEnabled = false;
  this->_padding_ = (longlong)&___7FPhysicsReplicationLOD__6B_;
  this->PhysicsReplicationLODAsync = (FPhysicsReplicationLODAsync *)0x0;
  this->PhysScene = param_1;
  pUVar5 = UPhysicsSettings::Get();
  this->bEnabled =
       (pUVar5->PhysicsPrediction).PhysicsReplicationLODSettings.bEnablePhysicsReplicationLOD;
  this_00 = (FPhysicsSolverBase *)this->PhysScene->_padding_;
  if (this_00 != (FPhysicsSolverBase *)0x0) {
    pFVar6 = ::operator_new(0x210);
    pFVar7 = (FPhysicsReplicationLODAsync *)0x0;
    if (pFVar6 != (FPhysicsReplicationLODAsync *)0x0) {
      pFVar7 = FPhysicsReplicationLODAsync::FPhysicsReplicationLODAsync(pFVar6);
    }
    if ((pFVar7->_padding_ & 0x100) != 0) {
      this_00->bSolverHasFrozenGameThreadCallbacks = true;
    }
    pFVar6 = (FPhysicsReplicationLODAsync *)&pFVar7->_padding_;
    if (pFVar7 == (FPhysicsReplicationLODAsync *)0x0) {
      pFVar6 = (FPhysicsReplicationLODAsync *)0x0;
    }
    Chaos::FPhysicsSolverBase::RegisterSimCallbackObject_External
              (this_00,(ISimCallbackObject *)pFVar6);
    this->PhysicsReplicationLODAsync = pFVar7;
    pFVar7->bEnabled =
         (pUVar5->PhysicsPrediction).PhysicsReplicationLODSettings.bEnablePhysicsReplicationLOD;
    pFVar7 = this->PhysicsReplicationLODAsync;
    uVar1 = *(undefined3 *)&(pUVar5->PhysicsPrediction).PhysicsReplicationLODSettings.field_0x1;
    fVar2 = (pUVar5->PhysicsPrediction).PhysicsReplicationLODSettings.MinimumBaseDistance;
    fVar3 = (pUVar5->PhysicsPrediction).PhysicsReplicationLODSettings.BaseDistanceRadiusMultiplier;
    fVar4 = (pUVar5->PhysicsPrediction).PhysicsReplicationLODSettings.
            BaseDistancesForResimulationMode;
    (pFVar7->DefaultSettings).bEnablePhysicsReplicationLOD =
         (pUVar5->PhysicsPrediction).PhysicsReplicationLODSettings.bEnablePhysicsReplicationLOD;
    *(undefined3 *)&(pFVar7->DefaultSettings).field_0x1 = uVar1;
    (pFVar7->DefaultSettings).MinimumBaseDistance = fVar2;
    (pFVar7->DefaultSettings).BaseDistanceRadiusMultiplier = fVar3;
    (pFVar7->DefaultSettings).BaseDistancesForResimulationMode = fVar4;
    fVar2 = (pUVar5->PhysicsPrediction).PhysicsReplicationLODSettings.TimeOverDistance;
    (pFVar7->DefaultSettings).BaseDistancesForFullPrediction =
         (pUVar5->PhysicsPrediction).PhysicsReplicationLODSettings.BaseDistancesForFullPrediction;
    (pFVar7->DefaultSettings).TimeOverDistance = fVar2;
  }
  return this;
}

// ~FPhysicsReplicationLOD @ 1482ddb80

void __thiscall FPhysicsReplicationLOD::~FPhysicsReplicationLOD(FPhysicsReplicationLOD *this)

{
  FPhysicsSolverBase *this_00;
  
  this->_padding_ = (longlong)&___7FPhysicsReplicationLOD__6B_;
  if (this->PhysicsReplicationLODAsync != (FPhysicsReplicationLODAsync *)0x0) {
    this_00 = (FPhysicsSolverBase *)this->PhysScene->_padding_;
    if (this_00 != (FPhysicsSolverBase *)0x0) {
      Chaos::FPhysicsSolverBase::UnregisterAndFreeSimCallbackObject_External
                (this_00,(ISimCallbackObject *)&this->PhysicsReplicationLODAsync->_padding_);
    }
    this->_padding_ = (longlong)&___7IPhysicsReplicationLOD__6B_;
    return;
  }
  this->_padding_ = (longlong)&___7IPhysicsReplicationLOD__6B_;
  return;
}

// GetPhysicsReplicationLOD_Internal @ 14830bab0

IPhysicsReplicationLODAsync * __thiscall
FPhysicsReplicationLOD::GetPhysicsReplicationLOD_Internal(FPhysicsReplicationLOD *this)

{
  return (IPhysicsReplicationLODAsync *)this->PhysicsReplicationLODAsync;
}

// IsEnabled @ 148310ac0

bool __thiscall FPhysicsReplicationLOD::IsEnabled(FPhysicsReplicationLOD *this)

{
  if ((PhysicsReplicationLODCVars::OverrideEnabled != -1) &&
     ((this->bEnabled != false || (PhysicsReplicationLODCVars::OverrideEnabled == 1)))) {
    return true;
  }
  return false;
}

// RegisterFocalPoint_External @ 14831ac30

void __thiscall
FPhysicsReplicationLOD::RegisterFocalPoint_External
          (FPhysicsReplicationLOD *this,FPhysicsObject *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSimCallbackInput *pFVar5;
  FPhysicsObject *local_res10 [3];
  
  if (((param_1 != (FPhysicsObject *)0x0) &&
      (this->PhysicsReplicationLODAsync != (FPhysicsReplicationLODAsync *)0x0)) &&
     (local_res10[0] = param_1,
     pFVar5 = Chaos::ISimCallbackObject::GetProducerInputData_External
                        ((ISimCallbackObject *)&this->PhysicsReplicationLODAsync->_padding_),
     pFVar5 != (FSimCallbackInput *)0x0)) {
    if (((*(FPhysicsObject ***)&pFVar5[1].NumSteps <= local_res10) &&
        (local_res10 <
         *(FPhysicsObject ***)&pFVar5[1].NumSteps + *(int *)((longlong)&pFVar5[2]._padding_ + 4)))
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = (int)pFVar5[2]._padding_;
    piVar1 = (int *)((longlong)&pFVar5[2]._padding_ + 4);
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&pFVar5[1].NumSteps,piVar1);
    }
    *(int *)&pFVar5[2]._padding_ = iVar4 + 1;
    *(FPhysicsObject **)(*(longlong *)&pFVar5[1].NumSteps + (longlong)iVar4 * 8) = local_res10[0];
  }
  return;
}

// RegisterFocalPoint_External @ 14831ad20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FPhysicsReplicationLOD::RegisterFocalPoint_External
          (FPhysicsReplicationLOD *this,UPrimitiveComponent *param_1,FName param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  FName local_res18 [2];
  
  if (param_1 != (UPrimitiveComponent *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 0x18);
    local_res18[0] = param_2;
    uVar2 = (**(code **)(*(longlong *)&param_1->field_0x260 + 0x18))
                      (&param_1->field_0x260,local_res18);
    (*pcVar1)(this,uVar2);
  }
  return;
}

// SetEnabled @ 148321780

void __thiscall FPhysicsReplicationLOD::SetEnabled(FPhysicsReplicationLOD *this,bool param_1)

{
  bool *pbVar1;
  FSimCallbackInput *pFVar2;
  
  pbVar1 = &this->bEnabled;
  *pbVar1 = param_1;
  if (this->PhysicsReplicationLODAsync != (FPhysicsReplicationLODAsync *)0x0) {
    pFVar2 = Chaos::ISimCallbackObject::GetProducerInputData_External
                       ((ISimCallbackObject *)&this->PhysicsReplicationLODAsync->_padding_);
    if ((pFVar2 != (FSimCallbackInput *)0x0) && ((FSimCallbackInput *)pbVar1 != pFVar2 + 1)) {
      *(bool *)&pFVar2[1]._padding_ = *pbVar1;
      *(undefined1 *)((longlong)&pFVar2[1]._padding_ + 1) = 1;
    }
  }
  return;
}

// UnregisterFocalPoint_External @ 1483261e0

void __thiscall
FPhysicsReplicationLOD::UnregisterFocalPoint_External
          (FPhysicsReplicationLOD *this,FPhysicsObject *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FSimCallbackInput *pFVar5;
  FPhysicsObject *local_res10 [3];
  
  if (((param_1 != (FPhysicsObject *)0x0) &&
      (this->PhysicsReplicationLODAsync != (FPhysicsReplicationLODAsync *)0x0)) &&
     (local_res10[0] = param_1,
     pFVar5 = Chaos::ISimCallbackObject::GetProducerInputData_External
                        ((ISimCallbackObject *)&this->PhysicsReplicationLODAsync->_padding_),
     pFVar5 != (FSimCallbackInput *)0x0)) {
    if (((*(FPhysicsObject ***)&pFVar5[2].NumSteps <= local_res10) &&
        (local_res10 <
         *(FPhysicsObject ***)&pFVar5[2].NumSteps + *(int *)((longlong)&pFVar5[3]._padding_ + 4)))
       && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = (int)pFVar5[3]._padding_;
    piVar1 = (int *)((longlong)&pFVar5[3]._padding_ + 4);
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&pFVar5[2].NumSteps,piVar1);
    }
    *(int *)&pFVar5[3]._padding_ = iVar4 + 1;
    *(FPhysicsObject **)(*(longlong *)&pFVar5[2].NumSteps + (longlong)iVar4 * 8) = local_res10[0];
  }
  return;
}

// UnregisterFocalPoint_External @ 1483262d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FPhysicsReplicationLOD::UnregisterFocalPoint_External
          (FPhysicsReplicationLOD *this,UPrimitiveComponent *param_1,FName param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  FName local_res18 [2];
  
  if (param_1 != (UPrimitiveComponent *)0x0) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    local_res18[0] = param_2;
    uVar2 = (**(code **)(*(longlong *)&param_1->field_0x260 + 0x18))
                      (&param_1->field_0x260,local_res18);
    (*pcVar1)(this,uVar2);
  }
  return;
}

