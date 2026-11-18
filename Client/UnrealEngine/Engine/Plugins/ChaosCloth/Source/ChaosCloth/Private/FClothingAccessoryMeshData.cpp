// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 9

// FClothingAccessoryMeshData @ 14db8eeb0

FClothingAccessoryMeshData * __thiscall
Chaos::FClothingAccessoryMeshData::FClothingAccessoryMeshData
          (FClothingAccessoryMeshData *this,FClothingAccessoryMeshData *param_1)

{
  this->NumParticles = param_1->NumParticles;
  this->AccessoryMesh = param_1->AccessoryMesh;
  (this->OldAnimationPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldAnimationPositions).AllocatorInstance.Data =
       (param_1->OldAnimationPositions).AllocatorInstance.Data;
  (param_1->OldAnimationPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldAnimationPositions).ArrayNum = (param_1->OldAnimationPositions).ArrayNum;
  (this->OldAnimationPositions).ArrayMax = (param_1->OldAnimationPositions).ArrayMax;
  (param_1->OldAnimationPositions).ArrayNum = 0;
  (param_1->OldAnimationPositions).ArrayMax = 0;
  (this->AnimationPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationPositions).AllocatorInstance.Data =
       (param_1->AnimationPositions).AllocatorInstance.Data;
  (param_1->AnimationPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationPositions).ArrayNum = (param_1->AnimationPositions).ArrayNum;
  (this->AnimationPositions).ArrayMax = (param_1->AnimationPositions).ArrayMax;
  (param_1->AnimationPositions).ArrayNum = 0;
  (param_1->AnimationPositions).ArrayMax = 0;
  (this->InterpolatedAnimationPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterpolatedAnimationPositions).AllocatorInstance.Data =
       (param_1->InterpolatedAnimationPositions).AllocatorInstance.Data;
  (param_1->InterpolatedAnimationPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterpolatedAnimationPositions).ArrayNum =
       (param_1->InterpolatedAnimationPositions).ArrayNum;
  (this->InterpolatedAnimationPositions).ArrayMax =
       (param_1->InterpolatedAnimationPositions).ArrayMax;
  (param_1->InterpolatedAnimationPositions).ArrayNum = 0;
  (param_1->InterpolatedAnimationPositions).ArrayMax = 0;
  (this->OldAnimationNormals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldAnimationNormals).AllocatorInstance.Data =
       (param_1->OldAnimationNormals).AllocatorInstance.Data;
  (param_1->OldAnimationNormals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldAnimationNormals).ArrayNum = (param_1->OldAnimationNormals).ArrayNum;
  (this->OldAnimationNormals).ArrayMax = (param_1->OldAnimationNormals).ArrayMax;
  (param_1->OldAnimationNormals).ArrayNum = 0;
  (param_1->OldAnimationNormals).ArrayMax = 0;
  (this->AnimationNormals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationNormals).AllocatorInstance.Data =
       (param_1->AnimationNormals).AllocatorInstance.Data;
  (param_1->AnimationNormals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationNormals).ArrayNum = (param_1->AnimationNormals).ArrayNum;
  (this->AnimationNormals).ArrayMax = (param_1->AnimationNormals).ArrayMax;
  (param_1->AnimationNormals).ArrayNum = 0;
  (param_1->AnimationNormals).ArrayMax = 0;
  (this->InterpolatedAnimationNormals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterpolatedAnimationNormals).AllocatorInstance.Data =
       (param_1->InterpolatedAnimationNormals).AllocatorInstance.Data;
  (param_1->InterpolatedAnimationNormals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterpolatedAnimationNormals).ArrayNum = (param_1->InterpolatedAnimationNormals).ArrayNum;
  (this->InterpolatedAnimationNormals).ArrayMax = (param_1->InterpolatedAnimationNormals).ArrayMax;
  (param_1->InterpolatedAnimationNormals).ArrayNum = 0;
  (param_1->InterpolatedAnimationNormals).ArrayMax = 0;
  (this->AnimationVelocities).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationVelocities).AllocatorInstance.Data =
       (param_1->AnimationVelocities).AllocatorInstance.Data;
  (param_1->AnimationVelocities).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationVelocities).ArrayNum = (param_1->AnimationVelocities).ArrayNum;
  (this->AnimationVelocities).ArrayMax = (param_1->AnimationVelocities).ArrayMax;
  (param_1->AnimationVelocities).ArrayNum = 0;
  (param_1->AnimationVelocities).ArrayMax = 0;
  return this;
}

// FClothingAccessoryMeshData @ 14db8efb0

FClothingAccessoryMeshData * __thiscall
Chaos::FClothingAccessoryMeshData::FClothingAccessoryMeshData
          (FClothingAccessoryMeshData *this,int param_1,FClothingSimulationAccessoryMesh *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FClothingAccessoryMeshData *pFVar5;
  
  this->NumParticles = param_1;
  (this->OldAnimationPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldAnimationPositions).ArrayNum = 0;
  (this->OldAnimationPositions).ArrayMax = 0;
  (this->AnimationPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationPositions).ArrayNum = 0;
  (this->AnimationPositions).ArrayMax = 0;
  (this->InterpolatedAnimationPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterpolatedAnimationPositions).ArrayNum = 0;
  (this->InterpolatedAnimationPositions).ArrayMax = 0;
  (this->OldAnimationNormals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OldAnimationNormals).ArrayNum = 0;
  (this->OldAnimationNormals).ArrayMax = 0;
  (this->AnimationNormals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationNormals).ArrayNum = 0;
  (this->AnimationNormals).ArrayMax = 0;
  (this->InterpolatedAnimationNormals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InterpolatedAnimationNormals).ArrayNum = 0;
  (this->InterpolatedAnimationNormals).ArrayMax = 0;
  (this->AnimationVelocities).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationVelocities).ArrayNum = 0;
  (this->AnimationVelocities).ArrayMax = 0;
  iVar1 = this->NumParticles;
  this->AccessoryMesh = param_2;
  iVar4 = (**(code **)(param_2->_padding_ + 8))(param_2);
  if (iVar1 != iVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumParticles == AccessoryMesh.GetNumPoints()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingAccessoryMeshData.cpp"
                       ,0x11,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FClothingAccessoryMeshData *)(*pcVar2)();
      return pFVar5;
    }
  }
  return this;
}

// ~FClothingAccessoryMeshData @ 14db9f3b0

void __thiscall
Chaos::FClothingAccessoryMeshData::~FClothingAccessoryMeshData(FClothingAccessoryMeshData *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->AnimationVelocities).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InterpolatedAnimationNormals).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AnimationNormals).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OldAnimationNormals).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InterpolatedAnimationPositions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AnimationPositions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OldAnimationPositions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AllocateParticles @ 14dbbb480

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FClothingAccessoryMeshData::AllocateParticles(FClothingAccessoryMeshData *this)

{
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->OldAnimationPositions,this->NumParticles,Default);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->AnimationPositions,this->NumParticles,Default);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->InterpolatedAnimationPositions,this->NumParticles,Default);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->OldAnimationNormals,this->NumParticles,Default);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->AnimationNormals,this->NumParticles,Default);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->InterpolatedAnimationNormals,this->NumParticles,Default);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->AnimationVelocities,this->NumParticles,Default);
  return;
}

// ApplyPreSimulationTransforms @ 14dbbde30

void __thiscall
Chaos::FClothingAccessoryMeshData::ApplyPreSimulationTransforms
          (FClothingAccessoryMeshData *this,TVector<float,3> *param_1,
          TRigidTransform<float,3> *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  code *pcVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId61,"FClothingAccessoryMeshData_ApplyPreSimulationTransforms"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingAccessoryMeshData.cpp"
               ,0x3d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId61);
  }
  iVar10 = (this->OldAnimationPositions).ArrayNum;
  if (bChaos_PreSimulationTransforms_ISPC_Enabled == false) {
    uVar19 = 0;
    if (0 < iVar10) {
      lVar20 = 0;
      fVar28 = __real_3f800000 / param_3;
      do {
        uVar21 = ~uVar19 >> 0x1f;
        uVar18 = 0;
        if ((int)uVar19 < (this->OldAnimationPositions).ArrayNum) {
          uVar18 = uVar21;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        fVar5 = *(float *)param_2;
        fVar6 = *(float *)&param_2->field_0x4;
        fVar7 = *(float *)&param_2->field_0x8;
        fVar8 = *(float *)&param_2->field_0xc;
        pFVar11 = (this->OldAnimationPositions).AllocatorInstance.Data;
        fVar1 = *(float *)(pFVar11 + lVar20 + 8);
        uVar9 = *(undefined8 *)(pFVar11 + lVar20);
        fVar26 = (float)uVar9;
        fVar27 = (float)((ulonglong)uVar9 >> 0x20);
        uVar18 = 0;
        if ((int)uVar19 < (this->OldAnimationPositions).ArrayNum) {
          uVar18 = uVar21;
        }
        fVar23 = fVar27 * fVar5 - fVar6 * fVar26;
        fVar24 = fVar1 * fVar6 - fVar7 * fVar27;
        fVar25 = fVar26 * fVar7 - fVar5 * fVar1;
        fVar24 = fVar24 + fVar24;
        fVar25 = fVar25 + fVar25;
        fVar23 = fVar23 + fVar23;
        fVar14 = *(float *)&param_2->field_0x10;
        fVar15 = *(float *)&param_2->field_0x14;
        fVar16 = *(float *)&param_2->field_0x18;
        fVar2 = *(float *)&param_1->field_0x8;
        fVar3 = *(float *)param_1;
        fVar4 = *(float *)&param_1->field_0x4;
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pFVar11 = (this->OldAnimationPositions).AllocatorInstance.Data;
        *(float *)(pFVar11 + lVar20) =
             (fVar8 * fVar24 + fVar26 + (fVar23 * fVar6 - fVar25 * fVar7) + fVar14) - fVar3;
        *(float *)(pFVar11 + lVar20 + 4) =
             (fVar8 * fVar25 + fVar27 + (fVar24 * fVar7 - fVar23 * fVar5) + fVar15) - fVar4;
        *(float *)(pFVar11 + lVar20 + 8) =
             (fVar8 * fVar23 + fVar1 + (fVar25 * fVar5 - fVar24 * fVar6) + fVar16) - fVar2;
        uVar18 = 0;
        if ((int)uVar19 < (this->AnimationPositions).ArrayNum) {
          uVar18 = uVar21;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pFVar11 = (this->AnimationPositions).AllocatorInstance.Data;
        uVar18 = 0;
        if ((int)uVar19 < (this->OldAnimationPositions).ArrayNum) {
          uVar18 = uVar21;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pFVar12 = (this->OldAnimationPositions).AllocatorInstance.Data;
        fVar1 = *(float *)(pFVar11 + lVar20);
        fVar5 = *(float *)(pFVar11 + lVar20 + 4);
        fVar6 = *(float *)(pFVar11 + lVar20 + 8);
        fVar7 = *(float *)(pFVar12 + lVar20);
        fVar8 = *(float *)(pFVar12 + lVar20 + 4);
        fVar26 = *(float *)(pFVar12 + lVar20 + 8);
        uVar18 = 0;
        if ((int)uVar19 < (this->AnimationVelocities).ArrayNum) {
          uVar18 = uVar21;
        }
        if ((uVar18 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pFVar11 = (this->AnimationVelocities).AllocatorInstance.Data;
        uVar19 = uVar19 + 1;
        *(float *)(pFVar11 + lVar20) = (fVar1 - fVar7) * fVar28;
        *(float *)(pFVar11 + lVar20 + 4) = (fVar5 - fVar8) * fVar28;
        *(float *)(pFVar11 + lVar20 + 8) = (fVar6 - fVar26) * fVar28;
        lVar20 = lVar20 + 0xc;
      } while ((int)uVar19 < (this->OldAnimationPositions).ArrayNum);
    }
  }
  else {
    ApplyAnimationPreSimulationTransform
              ((this->OldAnimationPositions).AllocatorInstance.Data,
               (this->AnimationVelocities).AllocatorInstance.Data,
               (this->AnimationPositions).AllocatorInstance.Data,param_2,param_1,param_3,iVar10);
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// DeallocateParticles @ 14dbd3100

void __thiscall
Chaos::FClothingAccessoryMeshData::DeallocateParticles(FClothingAccessoryMeshData *this)

{
  int *piVar1;
  
  piVar1 = &(this->OldAnimationPositions).ArrayMax;
  (this->OldAnimationPositions).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->OldAnimationPositions).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->AnimationPositions).ArrayMax;
  (this->AnimationPositions).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->AnimationPositions).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->InterpolatedAnimationPositions).ArrayMax;
  (this->InterpolatedAnimationPositions).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->InterpolatedAnimationPositions).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->OldAnimationNormals).ArrayMax;
  (this->OldAnimationNormals).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->OldAnimationNormals).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->AnimationNormals).ArrayMax;
  (this->AnimationNormals).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->AnimationNormals).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->InterpolatedAnimationNormals).ArrayMax;
  (this->InterpolatedAnimationNormals).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->InterpolatedAnimationNormals).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->AnimationVelocities).ArrayMax;
  (this->AnimationVelocities).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->AnimationVelocities).AllocatorInstance,0,piVar1);
  }
  return;
}

// PreSubstep @ 14dc095c0

void __thiscall
Chaos::FClothingAccessoryMeshData::PreSubstep(FClothingAccessoryMeshData *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId87,"FClothingAccessoryMeshData_PreSubstep",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingAccessoryMeshData.cpp"
               ,0x57);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId87);
  }
  fVar8 = __real_3f800000;
  fVar7 = __real_322bcc77;
  iVar4 = (this->InterpolatedAnimationPositions).ArrayNum;
  if (bChaos_PreSubstepInterpolation_ISPC_Enabled == false) {
    uVar11 = 0;
    if (0 < iVar4) {
      lVar12 = 0;
      fVar19 = __real_3f800000 - param_1;
      do {
        uVar13 = ~uVar11 >> 0x1f;
        uVar10 = 0;
        if ((int)uVar11 < (this->AnimationPositions).ArrayNum) {
          uVar10 = uVar13;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (this->AnimationPositions).AllocatorInstance.Data;
        fVar15 = *(float *)(pFVar5 + lVar12);
        fVar16 = *(float *)(pFVar5 + lVar12 + 4);
        fVar1 = *(float *)(pFVar5 + lVar12 + 8);
        uVar10 = 0;
        if ((int)uVar11 < (this->OldAnimationPositions).ArrayNum) {
          uVar10 = uVar13;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (this->OldAnimationPositions).AllocatorInstance.Data;
        fVar18 = *(float *)(pFVar5 + lVar12 + 8);
        fVar2 = *(float *)(pFVar5 + lVar12 + 4);
        fVar3 = *(float *)(pFVar5 + lVar12);
        uVar10 = 0;
        if ((int)uVar11 < (this->InterpolatedAnimationPositions).ArrayNum) {
          uVar10 = uVar13;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (this->InterpolatedAnimationPositions).AllocatorInstance.Data;
        *(float *)(pFVar5 + lVar12) = fVar19 * fVar3 + param_1 * fVar15;
        *(float *)(pFVar5 + lVar12 + 4) = fVar19 * fVar2 + param_1 * fVar16;
        *(float *)(pFVar5 + lVar12 + 8) = fVar19 * fVar18 + param_1 * fVar1;
        uVar10 = 0;
        if ((int)uVar11 < (this->AnimationNormals).ArrayNum) {
          uVar10 = uVar13;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (this->AnimationNormals).AllocatorInstance.Data;
        fVar15 = *(float *)(pFVar5 + lVar12);
        fVar16 = *(float *)(pFVar5 + lVar12 + 4);
        fVar1 = *(float *)(pFVar5 + lVar12 + 8);
        uVar10 = 0;
        if ((int)uVar11 < (this->OldAnimationNormals).ArrayNum) {
          uVar10 = uVar13;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (this->OldAnimationNormals).AllocatorInstance.Data;
        fVar18 = fVar19 * *(float *)(pFVar5 + lVar12) + param_1 * fVar15;
        fVar16 = fVar19 * *(float *)(pFVar5 + lVar12 + 4) + param_1 * fVar16;
        uVar17 = fVar19 * *(float *)(pFVar5 + lVar12 + 8) + param_1 * fVar1;
        fVar15 = fVar18 * fVar18 + fVar16 * fVar16 + (float)uVar17 * (float)uVar17;
        if (fVar15 != fVar8) {
          if (fVar7 <= fVar15) {
            fVar15 = __real_3f800000 / SQRT(fVar15);
            fVar16 = fVar16 * fVar15;
            fVar18 = fVar15 * fVar18;
            uVar17 = (float)uVar17 * fVar15;
          }
          else {
            fVar18 = (float)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
            fVar16 = (float)((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >>
                            0x20);
            uVar17 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          }
        }
        uVar10 = 0;
        if ((int)uVar11 < (this->InterpolatedAnimationNormals).ArrayNum) {
          uVar10 = uVar13;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (this->InterpolatedAnimationNormals).AllocatorInstance.Data;
        uVar11 = uVar11 + 1;
        *(ulonglong *)(pFVar5 + lVar12) = CONCAT44(fVar16,fVar18);
        *(undefined4 *)(pFVar5 + lVar12 + 8) = uVar17;
        lVar12 = lVar12 + 0xc;
      } while ((int)uVar11 < (this->InterpolatedAnimationPositions).ArrayNum);
    }
  }
  else {
    PreSubstepInterpolation
              ((this->InterpolatedAnimationPositions).AllocatorInstance.Data,
               (this->InterpolatedAnimationNormals).AllocatorInstance.Data,
               (this->AnimationPositions).AllocatorInstance.Data,
               (this->OldAnimationPositions).AllocatorInstance.Data,
               (this->AnimationNormals).AllocatorInstance.Data,
               (this->OldAnimationNormals).AllocatorInstance.Data,param_1,0,iVar4);
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ResetStartPose @ 14dc0fe30

void __thiscall Chaos::FClothingAccessoryMeshData::ResetStartPose(FClothingAccessoryMeshData *this)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_> *pTVar7;
  uint uVar8;
  
  pTVar7 = TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::operator=
                     (&this->InterpolatedAnimationPositions,&this->AnimationPositions);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::operator=
            (&this->OldAnimationPositions,pTVar7);
  pTVar7 = TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::operator=
                     (&this->InterpolatedAnimationNormals,&this->AnimationNormals);
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::operator=
            (&this->OldAnimationNormals,pTVar7);
  pTVar7 = &this->AnimationVelocities;
  piVar1 = &(this->AnimationVelocities).ArrayMax;
  (this->AnimationVelocities).ArrayNum = 0;
  if ((this->AnimationVelocities).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&pTVar7->AllocatorInstance,0,piVar1);
  }
  uVar3 = this->NumParticles;
  iVar6 = (this->AnimationVelocities).ArrayNum;
  if ((int)uVar3 <= iVar6) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if ((int)uVar3 < iVar6) {
      uVar8 = iVar6 - uVar3;
      if (((int)(uVar8 | uVar3) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar8 != 0) {
        _Dst = (pTVar7->AllocatorInstance).Data + (longlong)(int)uVar3 * 0xc;
        iVar6 = ((this->AnimationVelocities).ArrayNum - uVar3) - uVar8;
        if (iVar6 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar8 * 0xc,(longlong)iVar6 * 0xc);
        }
        piVar2 = &(this->AnimationVelocities).ArrayNum;
        *piVar2 = *piVar2 - uVar8;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,&pTVar7->AllocatorInstance,(this->AnimationVelocities).ArrayNum,piVar1);
      }
    }
    return;
  }
  TArray<Chaos::TVector<float,3>,TSizedDefaultAllocator<32>_>::AddZeroed(pTVar7,uVar3 - iVar6);
  return;
}

// Update @ 14dc1daa0

void __thiscall
Chaos::FClothingAccessoryMeshData::Update
          (FClothingAccessoryMeshData *this,FClothingSimulationSolver *param_1)

{
  int iVar1;
  int iVar2;
  FClothingSimulationAccessoryMesh *this_00;
  code *pcVar3;
  bool bVar4;
  TArrayView<Chaos::TVector<float,3>,int> local_28;
  TArrayView<Chaos::TVector<float,3>,int> local_18;
  
  if ((this->AnimationPositions).ArrayNum == this->NumParticles) {
    local_28.DataPtr = (TVector<float,3> *)(this->AnimationNormals).AllocatorInstance.Data;
    this_00 = this->AccessoryMesh;
    iVar1 = (this->AnimationNormals).ArrayNum;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_18.DataPtr = (TVector<float,3> *)(this->AnimationPositions).AllocatorInstance.Data;
    iVar2 = (this->AnimationPositions).ArrayNum;
    local_28.ArrayNum = iVar1;
    if (iVar2 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_18.ArrayNum = iVar2;
    if (param_1 == (FClothingSimulationSolver *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Solver",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationAccessoryMesh.cpp"
                         ,0xc5,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FClothingSimulationAccessoryMesh::SkinPhysicsMesh
              (this_00,-1,0.0,param_1->LocalSpaceScale,&param_1->LocalSpaceLocation,&local_18,
               &local_28);
  }
  return;
}

