// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// ComputeSpringParams @ 1482ecfd0

void __thiscall
FSimpleSuspension::ComputeSpringParams(FSimpleSuspension *this,float param_1,float param_2)

{
  FSimpleSuspensionHelpers::ComputeSpringParams
            (&(this->SuspensionParams).LocalSpringOrigins,
             &(this->SuspensionParams).LocalCenterOfMass,param_1,
             &(this->SuspensionParams).LocalSuspensionNormal,
             (this->SuspensionParams).LocalGroundDistance,(this->SuspensionParams).NaturalFrequency,
             (this->SuspensionParams).DampingRatio,param_2,
             (TArray<FSimpleSuspensionSpringParams,TSizedDefaultAllocator<32>_> *)this);
  return;
}

// Setup @ 148323050

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FSimpleSuspension::Setup(FSimpleSuspension *this,FSimpleSuspensionParams *param_1)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar3;
  uint uVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  
  uVar4 = (this->SuspensionParams).SpringParams.ArrayNum;
  if ((this->SuspensionParams).LocalSpringOrigins.ArrayNum != uVar4) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6232448831594692624>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\SimpleSuspension.cpp"
                       ,0x10,"SuspensionParams.LocalSpringOrigins.Num() == Count");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&(this->SuspensionState).SpringDisplacements,uVar4,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&(this->SuspensionState).SpringForces,uVar4,Default);
  pTVar3 = &(this->SuspensionState).SpringContacts;
  iVar9 = (this->SuspensionState).SpringContacts.ArrayNum;
  piVar1 = &(this->SuspensionState).SpringContacts.ArrayNum;
  if (iVar9 < (int)uVar4) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,uVar4 - iVar9,&pTVar3->AllocatorInstance,piVar1,
                       &(this->SuspensionState).SpringContacts.ArrayMax);
    memset((pTVar3->AllocatorInstance).Data + iVar8,0,(longlong)(int)(uVar4 - iVar9));
  }
  else {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if ((int)uVar4 < iVar9) {
      uVar11 = iVar9 - uVar4;
      if ((int)(uVar11 | uVar4) < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (uVar11 != 0) {
        pFVar10 = (pTVar3->AllocatorInstance).Data + (int)uVar4;
        iVar9 = (*piVar1 - uVar4) - uVar11;
        if (iVar9 != 0) {
          memmove(pFVar10,pFVar10 + (int)uVar11,(longlong)iVar9);
        }
        *piVar1 = *piVar1 - uVar11;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,&pTVar3->AllocatorInstance,*piVar1,
                   &(this->SuspensionState).SpringContacts.ArrayMax);
      }
    }
  }
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&(this->SuspensionState).WorldSpringOrigins,uVar4,Default);
  if (this != (FSimpleSuspension *)param_1) {
    iVar9 = (param_1->SpringParams).ArrayNum;
    piVar1 = &(this->SuspensionParams).SpringParams.ArrayMax;
    pFVar10 = (param_1->SpringParams).AllocatorInstance.Data;
    iVar8 = *piVar1;
    (this->SuspensionParams).SpringParams.ArrayNum = iVar9;
    if ((iVar9 == 0) && (iVar8 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar9,iVar8,(ForAnyElementType *)this,iVar9,piVar1);
      if (iVar9 != 0) {
        memcpy((this->SuspensionParams).SpringParams.AllocatorInstance.Data,pFVar10,
               (longlong)iVar9 << 4);
      }
    }
  }
  pTVar2 = &(this->SuspensionParams).LocalSpringOrigins;
  if (pTVar2 != &param_1->LocalSpringOrigins) {
    iVar9 = (param_1->LocalSpringOrigins).ArrayNum;
    piVar1 = &(this->SuspensionParams).LocalSpringOrigins.ArrayMax;
    pFVar10 = (param_1->LocalSpringOrigins).AllocatorInstance.Data;
    iVar8 = *piVar1;
    (this->SuspensionParams).LocalSpringOrigins.ArrayNum = iVar9;
    if ((iVar9 == 0) && (iVar8 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar9,iVar8,&pTVar2->AllocatorInstance,iVar9,piVar1);
      if (iVar9 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,pFVar10,(longlong)iVar9 * 0x18);
      }
    }
  }
  dVar6 = (param_1->LocalCenterOfMass).field0_0x0._s_0.Y;
  (this->SuspensionParams).LocalCenterOfMass.field0_0x0._s_0.X =
       (param_1->LocalCenterOfMass).field0_0x0._s_0.X;
  (this->SuspensionParams).LocalCenterOfMass.field0_0x0._s_0.Y = dVar6;
  (this->SuspensionParams).LocalCenterOfMass.field0_0x0._s_0.Z =
       (param_1->LocalCenterOfMass).field0_0x0._s_0.Z;
  dVar6 = (param_1->LocalSuspensionNormal).field0_0x0._s_0.Y;
  (this->SuspensionParams).LocalSuspensionNormal.field0_0x0._s_0.X =
       (param_1->LocalSuspensionNormal).field0_0x0._s_0.X;
  (this->SuspensionParams).LocalSuspensionNormal.field0_0x0._s_0.Y = dVar6;
  (this->SuspensionParams).LocalSuspensionNormal.field0_0x0._s_0.Z =
       (param_1->LocalSuspensionNormal).field0_0x0._s_0.Z;
  (this->SuspensionParams).LocalGroundDistance = param_1->LocalGroundDistance;
  (this->SuspensionParams).NaturalFrequency = param_1->NaturalFrequency;
  (this->SuspensionParams).DampingRatio = param_1->DampingRatio;
  return;
}

// Setup @ 1483232f0

void __thiscall
FSimpleSuspension::Setup
          (FSimpleSuspension *this,FSimpleSuspensionParams *param_1,float param_2,float param_3)

{
  Setup(this,param_1);
  FSimpleSuspensionHelpers::ComputeSpringParams
            (&(this->SuspensionParams).LocalSpringOrigins,
             &(this->SuspensionParams).LocalCenterOfMass,param_2,
             &(this->SuspensionParams).LocalSuspensionNormal,
             (this->SuspensionParams).LocalGroundDistance,(this->SuspensionParams).NaturalFrequency,
             (this->SuspensionParams).DampingRatio,param_3,
             (TArray<FSimpleSuspensionSpringParams,TSizedDefaultAllocator<32>_> *)this);
  return;
}

// Update @ 148326620

void __thiscall
FSimpleSuspension::Update
          (FSimpleSuspension *this,TTransform<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,
          TFunction<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,int,UE::Math::TVector<double>_&,UE::Math::TVector<double>_&)>
          *param_4)

{
  TVector<double> *pTVar1;
  TVector<double> *pTVar2;
  FScriptContainerElement *pFVar3;
  FSimpleSuspensionState *pFVar4;
  longlong lVar5;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_d8;
  FSimpleSuspensionState local_c8;
  
  pTVar2 = &(this->SuspensionState).WorldSuspensionNormal;
  pTVar1 = &(this->SuspensionState).WorldCenterOfMass;
  FSimpleSuspensionHelpers::ComputeWorldSuspensionCoordinates
            (&(this->SuspensionParams).LocalCenterOfMass,
             &(this->SuspensionParams).LocalSuspensionNormal,
             &(this->SuspensionParams).LocalSpringOrigins,param_1,pTVar1,pTVar2,
             &(this->SuspensionState).WorldSpringOrigins);
  pFVar4 = FSimpleSuspensionState::FSimpleSuspensionState(&local_c8,&this->SuspensionState);
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = (pFVar4->WorldSpringOrigins).ArrayNum;
  lVar5 = (longlong)local_d8.ArrayNum;
  pFVar3 = (pFVar4->WorldSpringOrigins).AllocatorInstance.Data;
  if (local_d8.ArrayNum == 0) {
    local_d8.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,local_d8.ArrayNum,0,&local_d8.AllocatorInstance,local_d8.ArrayNum,
               &local_d8.ArrayMax);
    memcpy(local_d8.AllocatorInstance.Data,pFVar3,lVar5 * 0x18);
  }
  FSimpleSuspensionHelpers::ComputeSuspensionDisplacements
            (&local_d8,(TArray<FSimpleSuspensionSpringParams,TSizedDefaultAllocator<32>_> *)this,
             &pFVar4->WorldSuspensionNormal,param_4,&pFVar4->SpringDisplacements);
  pFVar3 = (pFVar4->WorldSpringOrigins).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (pFVar4->SpringContacts).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (pFVar4->SpringForces).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (pFVar4->SpringDisplacements).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  local_d8.ArrayNum = (this->SuspensionState).WorldSpringOrigins.ArrayNum;
  lVar5 = (longlong)local_d8.ArrayNum;
  pFVar3 = (this->SuspensionState).WorldSpringOrigins.AllocatorInstance.Data;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_d8.ArrayNum == 0) {
    local_d8.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,local_d8.ArrayNum,0,&local_d8.AllocatorInstance,local_d8.ArrayNum,
               &local_d8.ArrayMax);
    memcpy(local_d8.AllocatorInstance.Data,pFVar3,lVar5 * 0x18);
  }
  FSimpleSuspensionHelpers::ComputeSuspensionForces
            (param_2,param_3,pTVar1,pTVar2,&local_d8,
             (TArray<FSimpleSuspensionSpringParams,TSizedDefaultAllocator<32>_> *)this,
             &(this->SuspensionState).SpringDisplacements,&(this->SuspensionState).TotalForce,
             &(this->SuspensionState).TotalTorqueRad,&(this->SuspensionState).SpringForces);
  return;
}

