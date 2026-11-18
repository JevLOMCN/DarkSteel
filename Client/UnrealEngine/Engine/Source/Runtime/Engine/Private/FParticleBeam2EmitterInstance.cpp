// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 39

// FParticleBeam2EmitterInstance @ 1480f36c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FParticleBeam2EmitterInstance * __thiscall
FParticleBeam2EmitterInstance::FParticleBeam2EmitterInstance
          (FParticleBeam2EmitterInstance *this,IParticleEmitterInstanceOwner *param_1)

{
  int *piVar1;
  byte *pbVar2;
  int *piVar3;
  
  FParticleEmitterInstance::FParticleEmitterInstance((FParticleEmitterInstance *)this,param_1);
  this->BeamModule_SourceModifier_Offset = -1;
  this->BeamTypeData = (UParticleModuleTypeDataBeam2 *)0x0;
  this->BeamModule_Source = (UParticleModuleBeamSource *)0x0;
  piVar3 = &(this->UserSetSourceArray).ArrayMax;
  this->BeamModule_Target = (UParticleModuleBeamTarget *)0x0;
  this->BeamModule_Noise = (UParticleModuleBeamNoise *)0x0;
  this->_padding_ = (longlong)&___7FParticleBeam2EmitterInstance__6B_;
  *piVar3 = 0;
  piVar1 = &(this->BeamTrianglesPerSheet).ArrayMax;
  this->BeamModule_SourceModifier = (UParticleModuleBeamModifier *)0x0;
  this->BeamModule_TargetModifier = (UParticleModuleBeamModifier *)0x0;
  this->BeamModule_TargetModifier_Offset = -1;
  this->FirstEmission = true;
  this->TickCount = 0;
  this->ForceSpawnCount = 0;
  this->BeamMethod = 0;
  (this->TextureTiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->TextureTiles).ArrayMax = 0;
  this->SourceActor = (AActor *)0x0;
  this->SourceEmitter = (FParticleEmitterInstance *)0x0;
  (this->UserSetSourceArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserSetSourceTangentArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserSetSourceTangentArray).ArrayNum = 0;
  (this->UserSetSourceTangentArray).ArrayMax = 0;
  (this->UserSetSourceStrengthArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserSetSourceStrengthArray).ArrayNum = 0;
  (this->UserSetSourceStrengthArray).ArrayMax = 0;
  (this->DistanceArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DistanceArray).ArrayNum = 0;
  (this->DistanceArray).ArrayMax = 0;
  (this->TargetPointArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetPointArray).ArrayNum = 0;
  (this->TargetPointArray).ArrayMax = 0;
  (this->TargetTangentArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetTangentArray).ArrayNum = 0;
  (this->TargetTangentArray).ArrayMax = 0;
  (this->UserSetTargetStrengthArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserSetTargetStrengthArray).ArrayNum = 0;
  (this->UserSetTargetStrengthArray).ArrayMax = 0;
  this->TargetActor = (AActor *)0x0;
  this->TargetEmitter = (FParticleEmitterInstance *)0x0;
  (this->TargetPointSourceNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TargetPointSourceNames).ArrayNum = 0;
  (this->TargetPointSourceNames).ArrayMax = 0;
  (this->UserSetTargetArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserSetTargetArray).ArrayNum = 0;
  (this->UserSetTargetArray).ArrayMax = 0;
  (this->UserSetTargetTangentArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UserSetTargetTangentArray).ArrayNum = 0;
  (this->UserSetTargetTangentArray).ArrayMax = 0;
  this->VertexCount = 0;
  this->TriangleCount = 0;
  (this->BeamTrianglesPerSheet).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BeamTrianglesPerSheet).ArrayNum = 0;
  *piVar1 = 0;
  (this->TextureTiles).ArrayNum = 0;
  (this->UserSetSourceArray).ArrayNum = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->UserSetSourceArray).AllocatorInstance,0,piVar3);
  }
  piVar3 = &(this->UserSetSourceTangentArray).ArrayMax;
  (this->UserSetSourceTangentArray).ArrayNum = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->UserSetSourceTangentArray).AllocatorInstance,0,piVar3);
  }
  piVar3 = &(this->UserSetSourceStrengthArray).ArrayMax;
  (this->UserSetSourceStrengthArray).ArrayNum = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->UserSetSourceStrengthArray).AllocatorInstance,0,piVar3);
  }
  piVar3 = &(this->DistanceArray).ArrayMax;
  (this->DistanceArray).ArrayNum = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->DistanceArray).AllocatorInstance,0,piVar3);
  }
  (this->TargetPointArray).ArrayNum = 0;
  if ((this->TargetPointArray).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->TargetPointArray).AllocatorInstance,0,
               &(this->TargetPointArray).ArrayMax);
  }
  (this->TargetTangentArray).ArrayNum = 0;
  if ((this->TargetTangentArray).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->TargetTangentArray).AllocatorInstance,0,
               &(this->TargetTangentArray).ArrayMax);
  }
  (this->UserSetTargetStrengthArray).ArrayNum = 0;
  if ((this->UserSetTargetStrengthArray).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->UserSetTargetStrengthArray).AllocatorInstance,0,
               &(this->UserSetTargetStrengthArray).ArrayMax);
  }
  (this->TargetPointSourceNames).ArrayNum = 0;
  if ((this->TargetPointSourceNames).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->TargetPointSourceNames).AllocatorInstance,0,
               &(this->TargetPointSourceNames).ArrayMax);
  }
  piVar3 = &(this->UserSetTargetArray).ArrayMax;
  (this->UserSetTargetArray).ArrayNum = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->UserSetTargetArray).AllocatorInstance,0,piVar3);
  }
  piVar3 = &(this->UserSetTargetTangentArray).ArrayMax;
  (this->UserSetTargetTangentArray).ArrayNum = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->UserSetTargetTangentArray).AllocatorInstance,0,piVar3);
  }
  (this->BeamTrianglesPerSheet).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->BeamTrianglesPerSheet).AllocatorInstance,0,piVar1);
  }
  pbVar2 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar2 = *pbVar2 | 1;
  return this;
}

// ~FParticleBeam2EmitterInstance @ 1480f6b00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FParticleBeam2EmitterInstance::~FParticleBeam2EmitterInstance(FParticleBeam2EmitterInstance *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FParticleBeam2EmitterInstance__6B_;
  piVar1 = &(this->TextureTiles).ArrayMax;
  (this->TextureTiles).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->TextureTiles).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->UserSetSourceArray).ArrayMax;
  (this->UserSetSourceArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->UserSetSourceArray).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->UserSetSourceTangentArray).ArrayMax;
  (this->UserSetSourceTangentArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->UserSetSourceTangentArray).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->UserSetSourceStrengthArray).ArrayMax;
  (this->UserSetSourceStrengthArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->UserSetSourceStrengthArray).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->DistanceArray).ArrayMax;
  (this->DistanceArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->DistanceArray).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->TargetPointArray).ArrayMax;
  (this->TargetPointArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->TargetPointArray).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->TargetTangentArray).ArrayMax;
  (this->TargetTangentArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->TargetTangentArray).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->UserSetTargetStrengthArray).ArrayMax;
  (this->UserSetTargetStrengthArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->UserSetTargetStrengthArray).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->TargetPointSourceNames).ArrayMax;
  (this->TargetPointSourceNames).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->TargetPointSourceNames).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->UserSetTargetArray).ArrayMax;
  (this->UserSetTargetArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->UserSetTargetArray).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->UserSetTargetTangentArray).ArrayMax;
  (this->UserSetTargetTangentArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->UserSetTargetTangentArray).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->BeamTrianglesPerSheet).ArrayMax;
  (this->BeamTrianglesPerSheet).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->BeamTrianglesPerSheet).AllocatorInstance,0,piVar1);
  }
  pFVar2 = (this->BeamTrianglesPerSheet).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->UserSetTargetTangentArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->UserSetTargetArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TargetPointSourceNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->UserSetTargetStrengthArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TargetTangentArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TargetPointArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DistanceArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->UserSetSourceStrengthArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->UserSetSourceTangentArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->UserSetSourceArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TextureTiles).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FParticleEmitterInstance::~FParticleEmitterInstance((FParticleEmitterInstance *)this);
  return;
}

// ApplyWorldOffset @ 1480fde30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FParticleBeam2EmitterInstance::ApplyWorldOffset
          (FParticleBeam2EmitterInstance *this,TVector<double> *param_1,bool param_2)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  bool bVar8;
  UParticleLODLevel *pUVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  
  dVar6 = (param_1->field0_0x0)._s_0.X;
  dVar7 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  FParticleEmitterInstance::UpdateTransforms((FParticleEmitterInstance *)this);
  this->_padding_ = (longlong)(dVar6 + (double)this->_padding_);
  this->_padding_ = (longlong)(dVar7 + (double)this->_padding_);
  this->_padding_ = (longlong)(dVar1 + (double)this->_padding_);
  this->_padding_ = (longlong)(dVar6 + (double)this->_padding_);
  this->_padding_ = (longlong)(dVar7 + (double)this->_padding_);
  this->_padding_ = (longlong)(dVar1 + (double)this->_padding_);
  pUVar9 = FParticleEmitterInstance::GetCurrentLODLevelChecked((FParticleEmitterInstance *)this);
  if (((pUVar9->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace == 0) {
    dVar6 = (param_1->field0_0x0)._s_0.Y;
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    this->_padding_ = (longlong)(param_1->field0_0x0)._s_0.X;
    this->_padding_ = (longlong)dVar6;
    this->_padding_ = (longlong)dVar1;
  }
  for (iVar12 = 0;
      (iVar11 = 0, -1 < iVar12 && (iVar11 = 0, iVar12 < (this->UserSetSourceArray).ArrayNum));
      iVar12 = iVar12 + 1) {
    if (iVar12 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    dVar6 = (param_1->field0_0x0)._s_0.Y;
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    lVar10 = (longlong)iVar12;
    pFVar2 = (this->UserSetSourceArray).AllocatorInstance.Data;
    *(double *)(pFVar2 + lVar10 * 0x18) =
         (param_1->field0_0x0)._s_0.X + *(double *)(pFVar2 + lVar10 * 0x18);
    dVar1 = dVar1 + *(double *)(pFVar2 + lVar10 * 0x18 + 8 + 8);
    auVar4._8_4_ = SUB84(dVar1,0);
    auVar4._0_8_ = dVar6 + *(double *)(pFVar2 + lVar10 * 0x18 + 8);
    auVar4._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    *(undefined1 (*) [16])(pFVar2 + lVar10 * 0x18 + 8) = auVar4;
  }
  for (; (-1 < iVar11 && (iVar11 < (this->TargetPointArray).ArrayNum)); iVar11 = iVar11 + 1) {
    if (iVar11 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    dVar6 = (param_1->field0_0x0)._s_0.Y;
    dVar1 = (param_1->field0_0x0)._s_0.Z;
    lVar10 = (longlong)iVar11;
    pFVar2 = (this->TargetPointArray).AllocatorInstance.Data;
    *(double *)(pFVar2 + lVar10 * 0x18) =
         (param_1->field0_0x0)._s_0.X + *(double *)(pFVar2 + lVar10 * 0x18);
    dVar1 = dVar1 + *(double *)(pFVar2 + lVar10 * 0x18 + 8 + 8);
    auVar5._8_4_ = SUB84(dVar1,0);
    auVar5._0_8_ = dVar6 + *(double *)(pFVar2 + lVar10 * 0x18 + 8);
    auVar5._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    *(undefined1 (*) [16])(pFVar2 + lVar10 * 0x18 + 8) = auVar5;
  }
  return;
}

// DetermineVertexAndTriangleCount @ 1481072f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FParticleBeam2EmitterInstance::DetermineVertexAndTriangleCount(FParticleBeam2EmitterInstance *this)

{
  int *piVar1;
  int *piVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 local_res8 [2];
  undefined4 local_res10;
  int local_res18;
  int local_res20;
  longlong local_a0 [12];
  
  iVar8 = 0;
  iVar9 = 0;
  iVar13 = 0;
  if ((this->BeamTypeData == (UParticleModuleTypeDataBeam2 *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BeamTypeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeam2EmitterInstance.cpp"
                         ,0x452,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar3 = &this->BeamTrianglesPerSheet;
  uVar7 = *(uint *)((longlong)&this->_padding_ + 4);
  iVar12 = this->BeamTypeData->Sheets;
  local_res18 = 1;
  if (iVar12 != 0) {
    local_res18 = iVar12;
  }
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  piVar1 = &(this->BeamTrianglesPerSheet).ArrayMax;
  piVar2 = &(this->BeamTrianglesPerSheet).ArrayNum;
  *piVar2 = 0;
  if (*piVar1 != uVar7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar7,&pTVar3->AllocatorInstance,0,piVar1);
  }
  iVar12 = *(int *)((longlong)&this->_padding_ + 4);
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar12,&pTVar3->AllocatorInstance,piVar2,piVar1);
  memset((pTVar3->AllocatorInstance).Data + (longlong)iVar6 * 4,0,(longlong)iVar12 << 2);
  uVar11 = 0;
  uVar14 = uVar11;
  uVar15 = uVar11;
  iVar12 = iVar8;
  if (0 < *(int *)((longlong)&this->_padding_ + 4)) {
    do {
      local_res8[0] = *(undefined4 *)((longlong)&this->_padding_ + 4);
      local_a0[0] = 0;
      local_a0[9] = 0;
      local_a0[8] = 0;
      local_a0[7] = 0;
      local_a0[6] = 0;
      local_a0[5] = 0;
      local_a0[4] = 0;
      local_a0[3] = 0;
      local_a0[2] = 0;
      local_a0[1] = 0;
      local_res20 = iVar12;
      (**(code **)(this->BeamTypeData->_padding_ + 0x3f0))
                (this->BeamTypeData,this,
                 (longlong)(int)((uint)*(ushort *)(uVar15 + this->_padding_) * (int)this->_padding_)
                 + this->_padding_,local_res8,local_a0,local_a0 + 9,local_a0 + 8,local_a0 + 7,
                 local_a0 + 6,local_a0 + 5,local_a0 + 4,local_a0 + 3,local_a0 + 2,local_a0 + 1);
      uVar10 = (uint)uVar11;
      local_res10 = *(undefined4 *)(local_a0[0] + 0xa0);
      uVar7 = 0;
      if ((int)uVar10 < (this->BeamTrianglesPerSheet).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)((pTVar3->AllocatorInstance).Data + uVar14) = local_res10;
      iVar6 = *(int *)(local_a0[0] + 0xa0);
      iVar9 = iVar8;
      iVar13 = iVar12;
      if (0 < iVar6) {
        iVar9 = 0;
        iVar13 = iVar12 + (iVar6 + 2) * local_res18;
        if (local_res20 < 1) {
          iVar9 = -4;
        }
        iVar9 = iVar9 + (iVar6 + 4) * local_res18 + iVar8;
      }
      uVar11 = (ulonglong)(uVar10 + 1);
      uVar14 = uVar14 + 4;
      uVar15 = uVar15 + 2;
      iVar8 = iVar9;
      iVar12 = iVar13;
    } while ((int)(uVar10 + 1) < *(int *)((longlong)&this->_padding_ + 4));
  }
  this->VertexCount = iVar13;
  this->TriangleCount = iVar9;
  return;
}

// FillReplayData @ 148108ce0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FParticleBeam2EmitterInstance::FillReplayData
          (FParticleBeam2EmitterInstance *this,FDynamicEmitterReplayDataBase *param_1)

{
  double dVar1;
  double dVar2;
  UParticleModuleBeamNoise *pUVar3;
  code *pcVar4;
  EDynamicEmitterType EVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  undefined1 uVar11;
  EDynamicEmitterType EVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_FParticleBeam2EmitterInstance::FillReplayData(FDynamicEmitterReplayDataBase_&)_::_2_::FStat_STAT_ParticleBeam2EmitterInstance_FillReplayData>
  FVar14;
  UMaterial *pUVar15;
  UObject *pUVar16;
  TVector<double> *pTVar17;
  byte bVar18;
  int iVar19;
  size_t _Size;
  FName FVar20;
  uint uVar21;
  ulonglong uVar22;
  uchar *_Dst;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int iVar26;
  float fVar27;
  FColor_u_0 local_res18 [2];
  undefined4 local_res20;
  undefined4 local_d8;
  undefined4 local_d4;
  FName local_d0;
  longlong local_c8;
  FName local_c0;
  FName local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  FName local_60;
  FName local_58;
  TVector<double> local_50;
  
  uVar25 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_ParticleBeam2EmitterInstance_FillReplayData ==
        (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_FParticleBeam2EmitterInstance::FillReplayData(FDynamicEmitterReplayDataBase_&)_::_2_::FStat_STAT_ParticleBeam2EmitterInstance_FillReplayData>
         )0x0) {
      pFVar13 = ::FName::FName(&local_60,"STAT_ParticleBeam2EmitterInstance_FillReplayData");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_ParticleBeam2EmitterInstance_FillReplayData,*pFVar13,
                 L"STAT_ParticleBeam2EmitterInstance_FillReplayData","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar14 = StatPtr_STAT_ParticleBeam2EmitterInstance_FillReplayData;
  if (StatPtr_STAT_ParticleBeam2EmitterInstance_FillReplayData ==
      (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_FParticleBeam2EmitterInstance::FillReplayData(FDynamicEmitterReplayDataBase_&)_::_2_::FStat_STAT_ParticleBeam2EmitterInstance_FillReplayData>
       )0x0) {
    pFVar13 = ::FName::FName(&local_58,"STAT_ParticleBeam2EmitterInstance_FillReplayData");
    FVar14 = (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_FParticleBeam2EmitterInstance::FillReplayData(FDynamicEmitterReplayDataBase_&)_::_2_::FStat_STAT_ParticleBeam2EmitterInstance_FillReplayData>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_ParticleBeam2EmitterInstance_FillReplayData,*pFVar13,
                          L"STAT_ParticleBeam2EmitterInstance_FillReplayData","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar14;
  bVar7 = false;
  bVar6 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  bVar9 = false;
  bVar8 = false;
  if ((FVar20.ComparisonIndex.Value.Value != 0) || (FVar20.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar7 = false;
      bVar6 = true;
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d0.ComparisonIndex.Value = FVar20.ComparisonIndex.Value.Value;
        local_d0.Number = FVar20.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d0,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeam2EmitterInstance.cpp"
                   ,0x50c);
        bVar7 = true;
        bVar6 = true;
        bVar9 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_c0 = FVar20;
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar8 = true;
      goto LAB_148108e63;
    }
  }
  bVar7 = bVar9;
  bVar6 = bVar8;
  bVar8 = false;
  local_c0 = local_b8;
  FVar20 = local_b8;
LAB_148108e63:
  if ((((*(int *)((longlong)&this->_padding_ + 4) < 1) ||
       (bVar9 = FParticleEmitterInstance::FillReplayData((FParticleEmitterInstance *)this,param_1),
       !bVar9)) || (this->_padding_ == 0)) || ((*(byte *)(this->_padding_ + 0x2c) & 1) == 0)) {
    bVar9 = false;
  }
  else {
    param_1->eEmitterType = DET_Beam2;
    pUVar15 = (UMaterial *)this->_padding_;
    if ((pUVar15 == (UMaterial *)0x0) ||
       (cVar10 = (**(code **)(pUVar15->_padding_ + 0x378))(pUVar15,2), cVar10 == '\0')) {
      pUVar15 = UMaterial::GetDefaultMaterial(MD_Surface);
    }
    this->_padding_ = (longlong)pUVar15;
    param_1[1]._padding_ = (longlong)pUVar15;
    *(undefined2 *)&param_1[1].field_0x5c = 0;
    DetermineVertexAndTriangleCount(this);
    param_1[2].Scale.field0_0x0._s_0.X = (float)this->BeamTypeData->UpVectorStepSize;
    TArray<int,TSizedDefaultAllocator<32>_>::Empty
              ((TArray<int,TSizedDefaultAllocator<32>_> *)&param_1[2].DataContainer.ParticleData,
               (this->BeamTrianglesPerSheet).ArrayNum);
    TArray<int,TSizedDefaultAllocator<32>_>::AddZeroed
              ((TArray<int,TSizedDefaultAllocator<32>_> *)&param_1[2].DataContainer.ParticleData,
               (this->BeamTrianglesPerSheet).ArrayNum);
    uVar22 = uVar25;
    uVar24 = uVar25;
    if (0 < (this->BeamTrianglesPerSheet).ArrayNum) {
      do {
        uVar23 = (uint)uVar22;
        uVar21 = 0;
        if ((int)uVar23 < (this->BeamTrianglesPerSheet).ArrayNum) {
          uVar21 = ~uVar23 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar11 = (*pcVar4)();
          return (bool)uVar11;
        }
        local_res20 = *(undefined4 *)((this->BeamTrianglesPerSheet).AllocatorInstance.Data + uVar24)
        ;
        uVar21 = 0;
        if ((int)uVar23 < *(int *)&param_1[2].DataContainer.ParticleIndices) {
          uVar21 = ~uVar23 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          uVar11 = (*pcVar4)();
          return (bool)uVar11;
        }
        *(undefined4 *)(param_1[2].DataContainer.ParticleData + uVar24) = local_res20;
        uVar22 = (ulonglong)(uVar23 + 1);
        uVar24 = uVar24 + 4;
      } while ((int)(uVar23 + 1) < (this->BeamTrianglesPerSheet).ArrayNum);
    }
    local_d8 = 0;
    (**(code **)(this->BeamTypeData->_padding_ + 0x3f8))
              (this->BeamTypeData,this,0,(undefined1 *)((longlong)&this->_padding_ + 4),
               (undefined1 *)((longlong)&param_1[2].Scale.field0_0x0 + 4),
               (undefined1 *)((longlong)&param_1[2].Scale.field0_0x0 + 8),&param_1[2].SortMode,
               &param_1[2].MacroUVOverride,&param_1[2].MacroUVOverride.Radius,
               &param_1[2].MacroUVOverride.Position,&local_d8,
               (undefined1 *)((longlong)&param_1[2].MacroUVOverride.Position.field0_0x0 + 4),
               (undefined1 *)((longlong)&param_1[2].MacroUVOverride.Position.field0_0x0 + 8));
    param_1[2].DataContainer.MemBlockSize = this->VertexCount;
    param_1[2].field_0x5f = this->BeamModule_Source != (UParticleModuleBeamSource *)0x0;
    *(bool *)&param_1[3]._padding_ = this->BeamModule_Target != (UParticleModuleBeamTarget *)0x0;
    if (this->BeamModule_Noise == (UParticleModuleBeamNoise *)0x0) {
      *(undefined2 *)&param_1[2].field_0x5c = 0;
      bVar18 = 0;
    }
    else {
      param_1[2].field_0x5d = 0;
      param_1[2].field_0x5c = this->BeamModule_Noise->bLowFreq_Enabled;
      bVar18 = this->BeamModule_Noise->bSmooth;
    }
    param_1[2].field_0x5e = bVar18;
    uVar21 = this->BeamTypeData->Sheets;
    uVar23 = 1;
    if (0 < (int)uVar21) {
      uVar23 = uVar21;
    }
    uVar21 = 1;
    if (1 < uVar23) {
      uVar21 = uVar23;
    }
    *(uint *)((longlong)&param_1[3]._padding_ + 4) = uVar21;
    *(int *)&param_1[3].DataContainer.ParticleIndices = this->BeamTypeData->TextureTile;
    *(float *)((longlong)&param_1[3].DataContainer.ParticleIndices + 4) =
         this->BeamTypeData->TextureTileDistance;
    *(uchar *)&param_1[3].Scale.field0_0x0 = (this->BeamTypeData->TaperMethod).Value;
    param_1[3].Scale.field0_0x0._s_0.Y = (float)this->BeamTypeData->InterpolationPoints;
    param_1[3].eEmitterType = DET_Sprite;
    param_1[3].ActiveParticleCount = 0;
    param_1[3].ParticleStride = 0x3f800000;
    *(undefined4 *)&param_1[3].field_0x14 = 0x3f800000;
    pUVar3 = this->BeamModule_Noise;
    if ((pUVar3 != (UParticleModuleBeamNoise *)0x0) && (pUVar3->bLowFreq_Enabled != 0)) {
      EVar5 = DET_Sprite;
      if (0 < pUVar3->Frequency) {
        EVar5 = pUVar3->Frequency;
      }
      EVar12 = DET_Sprite;
      if (DET_Sprite < EVar5) {
        EVar12 = EVar5;
      }
      param_1[3].eEmitterType = EVar12;
      iVar19 = this->BeamModule_Noise->NoiseTessellation;
      iVar26 = 1;
      if (0 < iVar19) {
        iVar26 = iVar19;
      }
      param_1[3].ActiveParticleCount = iVar26;
      fVar27 = FRawDistributionFloat::GetValue
                         (&this->BeamModule_Noise->NoiseTangentStrength,*(float *)&this->_padding_,
                          (UObject *)0x0,(FRandomStream *)0x0);
      *(float *)&param_1[3].field_0x14 = fVar27;
      pUVar3 = this->BeamModule_Noise;
      pUVar16 = (UObject *)(**(code **)(*(longlong *)this->_padding_ + 8))();
      fVar27 = FRawDistributionFloat::GetValue
                         (&pUVar3->NoiseRangeScale,*(float *)&this->_padding_,pUVar16,
                          (FRandomStream *)0x0);
      param_1[3].ParticleStride = (int)fVar27;
      pTVar17 = FRawDistributionVector::GetValue
                          (&this->BeamModule_Noise->NoiseSpeed,&local_50,*(float *)&this->_padding_,
                           (UObject *)0x0,0,(FRandomStream *)0x0);
      dVar1 = (pTVar17->field0_0x0)._s_0.Y;
      dVar2 = (pTVar17->field0_0x0)._s_0.Z;
      param_1[3].DataContainer.MemBlockSize = (int)(float)(pTVar17->field0_0x0)._s_0.X;
      param_1[3].DataContainer.ParticleDataNumBytes = (int)(float)dVar1;
      param_1[3].DataContainer.ParticleIndicesNumShorts = (int)(float)dVar2;
      *(float *)&param_1[3].DataContainer.field_0xc = this->BeamModule_Noise->NoiseLockTime;
      *(float *)&param_1[3].DataContainer.ParticleData = this->BeamModule_Noise->NoiseLockRadius;
      *(byte *)((longlong)&param_1[3]._padding_ + 1) = this->BeamModule_Noise->bTargetNoise;
      *(float *)((longlong)&param_1[3].DataContainer.ParticleData + 4) =
           this->BeamModule_Noise->NoiseTension;
    }
    param_1[2].DataContainer.ParticleDataNumBytes = 0;
    uVar22 = uVar25;
    uVar24 = uVar25;
    if (0 < *(int *)((longlong)&this->_padding_ + 4)) {
      do {
        local_d4 = *(undefined4 *)((longlong)&this->_padding_ + 4);
        local_c8 = 0;
        local_68 = 0;
        local_70 = 0;
        local_78 = 0;
        local_80 = 0;
        local_88 = 0;
        local_90 = 0;
        local_98 = 0;
        local_a0 = 0;
        local_a8 = 0;
        (**(code **)(this->BeamTypeData->_padding_ + 0x3f0))
                  (this->BeamTypeData,this,
                   (longlong)
                   (int)((uint)*(ushort *)(this->_padding_ + uVar24 * 2) * (int)this->_padding_) +
                   this->_padding_,&local_d4,&local_c8,&local_68,&local_70,&local_78,&local_80,
                   &local_88,&local_90,&local_98,&local_a0,&local_a8);
        if (0 < *(int *)(local_c8 + 0xa0)) {
          iVar19 = param_1[2].DataContainer.ParticleDataNumBytes;
          if (iVar19 == 0) {
            param_1[2].DataContainer.ParticleDataNumBytes = 2;
            iVar19 = 2;
          }
          iVar19 = (*(int *)(local_c8 + 0xa0) + 4) * *(int *)((longlong)&param_1[3]._padding_ + 4) +
                   iVar19;
          param_1[2].DataContainer.ParticleDataNumBytes = iVar19 + -4;
          if (0 < (longlong)uVar24) {
            param_1[2].DataContainer.ParticleDataNumBytes = iVar19;
          }
        }
        uVar21 = (int)uVar22 + 1;
        FVar20 = local_c0;
        uVar22 = (ulonglong)uVar21;
        uVar24 = uVar24 + 1;
      } while ((int)uVar21 < *(int *)((longlong)&this->_padding_ + 4));
    }
    iVar19 = 4;
    if (param_1[2].DataContainer.ParticleDataNumBytes < 0x3a99) {
      iVar19 = 2;
    }
    param_1[2].DataContainer.ParticleIndicesNumShorts = iVar19;
    _Dst = (param_1->DataContainer).ParticleData;
    if (0 < param_1->ActiveParticleCount) {
      _Size = (size_t)(int)this->_padding_;
      uVar22 = uVar25;
      do {
        memcpy(_Dst,(void *)((longlong)
                             (int)((uint)*(ushort *)(uVar25 + this->_padding_) * (int)_Size) +
                            this->_padding_),_Size);
        _Size = (size_t)(int)this->_padding_;
        uVar25 = uVar25 + 2;
        _Dst = _Dst + _Size;
        uVar21 = (int)uVar22 + 1;
        uVar22 = (ulonglong)uVar21;
      } while ((int)uVar21 < param_1->ActiveParticleCount);
    }
    bVar9 = true;
    *(byte *)((longlong)&param_1[3].Scale.field0_0x0 + 8) = this->BeamTypeData->RenderGeometry;
    *(byte *)((longlong)&param_1[3].Scale.field0_0x0 + 9) = this->BeamTypeData->RenderDirectLine;
    *(byte *)((longlong)&param_1[3].Scale.field0_0x0 + 10) = this->BeamTypeData->RenderLines;
    *(byte *)((longlong)&param_1[3].Scale.field0_0x0 + 0xb) = this->BeamTypeData->RenderTessellation
    ;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar20,CycleScopeEnd);
  }
  return bVar9;
}

// ForceUpdateBoundingBox @ 14810b300

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FParticleBeam2EmitterInstance::ForceUpdateBoundingBox(FParticleBeam2EmitterInstance *this)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined4 uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  float fVar37;
  float local_res8 [2];
  undefined1 (*local_res10) [16];
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120 [7];
  undefined7 uStack_e7;
  
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar11;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar16 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  lVar1 = this->_padding_;
  uVar19 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  *(undefined1 *)&this->_padding_ = 0;
  lVar12 = this->_padding_;
  *(int *)&this->_padding_ = (int)this->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar16;
  *(int *)&this->_padding_ = (int)lVar1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar19;
  this->_padding_ = lVar12;
  fVar37 = __real_3f800000;
  lVar12 = (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  dVar27 = *(double *)(lVar12 + 0x30);
  auVar2 = *(undefined1 (*) [16])(lVar12 + 0x20);
  uVar16 = auVar2._8_4_;
  uVar19 = auVar2._12_4_;
  if ((char)this->_padding_ == '\0') {
    this->_padding_ = auVar2._0_8_;
    this->_padding_ = auVar2._8_8_;
    *(undefined1 *)&this->_padding_ = 1;
    this->_padding_ = auVar2._0_8_;
    this->_padding_ = auVar2._8_8_;
    this->_padding_ = (longlong)dVar27;
    this->_padding_ = (longlong)dVar27;
  }
  else {
    dVar21 = (double)this->_padding_;
    uVar15 = auVar2._0_4_;
    uVar18 = auVar2._4_4_;
    if (dVar21 <= auVar2._0_8_) {
      uVar15 = SUB84(dVar21,0);
      uVar18 = (undefined4)((ulonglong)dVar21 >> 0x20);
    }
    dVar21 = dVar27;
    if ((double)this->_padding_ <= dVar27) {
      dVar21 = (double)this->_padding_;
    }
    if (dVar27 <= (double)this->_padding_) {
      dVar27 = (double)this->_padding_;
    }
    this->_padding_ = CONCAT44(uVar18,uVar15);
    dVar24 = (double)this->_padding_;
    dVar6 = auVar2._8_8_;
    if (dVar24 <= dVar6) {
      uVar16 = SUB84(dVar24,0);
      uVar19 = (undefined4)((ulonglong)dVar24 >> 0x20);
    }
    this->_padding_ = (longlong)dVar21;
    dVar21 = (double)this->_padding_;
    if ((double)this->_padding_ <= dVar6) {
      dVar21 = dVar6;
    }
    this->_padding_ = (longlong)dVar27;
    this->_padding_ = CONCAT44(uVar19,uVar16);
    dVar27 = (double)this->_padding_;
    uVar16 = SUB84(dVar27,0);
    uVar19 = (int)((ulonglong)dVar27 >> 0x20);
    if (dVar27 <= auVar2._0_8_) {
      uVar16 = auVar2._0_4_;
      uVar19 = auVar2._4_4_;
    }
    this->_padding_ = (longlong)dVar21;
    this->_padding_ = CONCAT44(uVar19,uVar16);
  }
  dVar21 = 0.0;
  dVar27 = 0.0;
  if (this->BeamModule_Noise != (UParticleModuleBeamNoise *)0x0) {
    FRawDistributionVector::GetOutRange
              (&this->BeamModule_Noise->NoiseRange,local_res8,(float *)&local_res10);
    dVar21 = (double)local_res8[0];
    dVar27 = (double)local_res10._0_4_;
  }
  lVar12 = (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar13 = 0;
  uVar16 = *(undefined4 *)(lVar12 + 0x40);
  dVar30 = *(double *)(lVar12 + 0x40);
  uVar19 = *(undefined4 *)(lVar12 + 0x48);
  dVar26 = *(double *)(lVar12 + 0x48);
  dVar6 = *(double *)(lVar12 + 0x50);
  uVar14 = uVar13;
  dVar24 = dVar6;
  if (0 < *(int *)((longlong)&this->_padding_ + 4)) {
    do {
      local_res8[0] = *(float *)((longlong)&this->_padding_ + 4);
      lVar12 = (longlong)(int)((uint)*(ushort *)(this->_padding_ + uVar14) * (int)this->_padding_) +
               this->_padding_;
      local_res10 = (undefined1 (*) [16])0x0;
      local_120[0] = 0;
      local_128 = 0;
      local_130 = 0;
      local_138 = 0;
      local_140 = 0;
      local_148 = 0;
      local_150 = 0;
      local_res20 = 0;
      local_res18 = 0;
      (**(code **)(this->BeamTypeData->_padding_ + 0x3f0))
                (this->BeamTypeData,this,lVar12,local_res8,&local_res10,local_120,&local_128,
                 &local_130,&local_138,&local_140,&local_148,&local_150,&local_res20,&local_res18,
                 uVar16,uVar19,dVar24);
      dVar5 = (double)*(float *)(lVar12 + 100) * dVar26;
      dVar7 = (double)*(float *)(lVar12 + 0x60) * dVar30;
      dVar8 = (double)*(float *)(lVar12 + 0x68) * dVar6;
      if ((char)this->_padding_ == '\0') {
        lVar1 = *(longlong *)(lVar12 + 0x20);
        this->_padding_ = *(longlong *)(lVar12 + 0x18);
        this->_padding_ = lVar1;
        lVar1 = *(longlong *)(lVar12 + 0x28);
        this->_padding_ = lVar1;
        *(undefined1 *)&this->_padding_ = 1;
        this->_padding_ = this->_padding_;
        this->_padding_ = this->_padding_;
        this->_padding_ = lVar1;
      }
      else {
        dVar24 = (double)this->_padding_;
        uVar15 = SUB84(dVar24,0);
        uVar18 = (undefined4)((ulonglong)dVar24 >> 0x20);
        dVar23 = *(double *)(lVar12 + 0x18);
        if (dVar23 <= dVar24) {
          uVar15 = SUB84(dVar23,0);
          uVar18 = (undefined4)((ulonglong)dVar23 >> 0x20);
        }
        this->_padding_ = CONCAT44(uVar18,uVar15);
        dVar24 = *(double *)(lVar12 + 0x20);
        if ((double)this->_padding_ <= *(double *)(lVar12 + 0x20)) {
          dVar24 = (double)this->_padding_;
        }
        this->_padding_ = (longlong)dVar24;
        dVar24 = *(double *)(lVar12 + 0x28);
        uVar15 = SUB84(dVar24,0);
        uVar18 = (undefined4)((ulonglong)dVar24 >> 0x20);
        dVar23 = (double)this->_padding_;
        if (dVar23 <= dVar24) {
          uVar15 = SUB84(dVar23,0);
          uVar18 = (undefined4)((ulonglong)dVar23 >> 0x20);
        }
        this->_padding_ = CONCAT44(uVar18,uVar15);
        dVar24 = (double)this->_padding_;
        if ((double)this->_padding_ <= *(double *)(lVar12 + 0x18)) {
          dVar24 = *(double *)(lVar12 + 0x18);
        }
        dVar23 = (double)this->_padding_;
        uVar15 = SUB84(dVar23,0);
        uVar18 = (undefined4)((ulonglong)dVar23 >> 0x20);
        this->_padding_ = (longlong)dVar24;
        dVar24 = *(double *)(lVar12 + 0x20);
        if (dVar23 <= dVar24) {
          uVar15 = SUB84(dVar24,0);
          uVar18 = (undefined4)((ulonglong)dVar24 >> 0x20);
        }
        this->_padding_ = CONCAT44(uVar18,uVar15);
        dVar24 = (double)this->_padding_;
        if ((double)this->_padding_ <= *(double *)(lVar12 + 0x28)) {
          dVar24 = *(double *)(lVar12 + 0x28);
        }
        this->_padding_ = (longlong)dVar24;
      }
      dVar24 = dVar21 + *(double *)(lVar12 + 0x18);
      dVar23 = dVar21 + *(double *)(lVar12 + 0x20);
      dVar28 = dVar21 + *(double *)(lVar12 + 0x28);
      dVar29 = dVar24;
      if ((double)this->_padding_ <= dVar24) {
        dVar29 = (double)this->_padding_;
      }
      dVar22 = dVar23;
      if ((double)this->_padding_ <= dVar23) {
        dVar22 = (double)this->_padding_;
      }
      if (dVar23 <= (double)this->_padding_) {
        dVar23 = (double)this->_padding_;
      }
      this->_padding_ = (longlong)dVar29;
      dVar29 = dVar28;
      if ((double)this->_padding_ <= dVar28) {
        dVar29 = (double)this->_padding_;
      }
      this->_padding_ = (longlong)dVar22;
      this->_padding_ = (longlong)dVar23;
      dVar23 = (double)this->_padding_;
      if ((double)this->_padding_ <= dVar24) {
        dVar23 = dVar24;
      }
      this->_padding_ = (longlong)dVar29;
      dVar24 = (double)this->_padding_;
      if ((double)this->_padding_ <= dVar28) {
        dVar24 = dVar28;
      }
      this->_padding_ = (longlong)dVar23;
      this->_padding_ = (longlong)dVar24;
      dVar24 = dVar27 + *(double *)(lVar12 + 0x18);
      dVar29 = dVar27 + *(double *)(lVar12 + 0x20);
      dVar23 = dVar27 + *(double *)(lVar12 + 0x28);
      if ((char)this->_padding_ == '\0') {
        this->_padding_ = (longlong)dVar24;
        this->_padding_ = (longlong)dVar29;
        this->_padding_ = (longlong)dVar23;
        *(undefined1 *)&this->_padding_ = 1;
        this->_padding_ = this->_padding_;
        this->_padding_ = this->_padding_;
        this->_padding_ = this->_padding_;
      }
      else {
        dVar28 = dVar24;
        if ((double)this->_padding_ <= dVar24) {
          dVar28 = (double)this->_padding_;
        }
        dVar22 = dVar29;
        if ((double)this->_padding_ <= dVar29) {
          dVar22 = (double)this->_padding_;
        }
        if (dVar29 <= (double)this->_padding_) {
          dVar29 = (double)this->_padding_;
        }
        this->_padding_ = (longlong)dVar28;
        dVar28 = dVar23;
        if ((double)this->_padding_ <= dVar23) {
          dVar28 = (double)this->_padding_;
        }
        this->_padding_ = (longlong)dVar22;
        dVar22 = (double)this->_padding_;
        if ((double)this->_padding_ <= dVar24) {
          dVar22 = dVar24;
        }
        this->_padding_ = (longlong)dVar29;
        this->_padding_ = (longlong)dVar28;
        dVar24 = (double)this->_padding_;
        if ((double)this->_padding_ <= dVar23) {
          dVar24 = dVar23;
        }
        this->_padding_ = (longlong)dVar22;
        this->_padding_ = (longlong)dVar24;
      }
      auVar2 = *local_res10;
      uVar15 = auVar2._0_4_;
      uVar18 = auVar2._4_4_;
      uVar17 = auVar2._8_4_;
      uVar20 = auVar2._12_4_;
      dVar24 = *(double *)local_res10[1];
      uVar31 = (undefined4)((ulonglong)dVar24 >> 0x20);
      dVar23 = (double)this->_padding_;
      dVar29 = auVar2._0_8_;
      if (dVar23 <= dVar29) {
        uVar15 = SUB84(dVar23,0);
        uVar18 = (undefined4)((ulonglong)dVar23 >> 0x20);
      }
      dVar28 = auVar2._8_8_;
      dVar23 = (double)this->_padding_;
      if ((double)this->_padding_ <= dVar29) {
        dVar23 = dVar29;
      }
      this->_padding_ = CONCAT44(uVar18,uVar15);
      dVar29 = (double)this->_padding_;
      if (dVar29 <= dVar28) {
        uVar17 = SUB84(dVar29,0);
        uVar20 = (undefined4)((ulonglong)dVar29 >> 0x20);
      }
      if (dVar28 <= (double)this->_padding_) {
        dVar28 = (double)this->_padding_;
      }
      this->_padding_ = (longlong)dVar23;
      this->_padding_ = CONCAT44(uVar20,uVar17);
      dVar23 = (double)this->_padding_;
      uVar15 = SUB84(dVar24,0);
      uVar18 = uVar31;
      if (dVar23 <= dVar24) {
        uVar15 = SUB84(dVar23,0);
        uVar18 = (undefined4)((ulonglong)dVar23 >> 0x20);
      }
      this->_padding_ = (longlong)dVar28;
      this->_padding_ = CONCAT44(uVar18,uVar15);
      dVar23 = (double)this->_padding_;
      uVar15 = SUB84(dVar23,0);
      uVar18 = (int)((ulonglong)dVar23 >> 0x20);
      if (dVar23 <= dVar24) {
        uVar15 = SUB84(dVar24,0);
        uVar18 = uVar31;
      }
      this->_padding_ = CONCAT44(uVar18,uVar15);
      dVar29 = *(double *)(*local_res10 + 8) + dVar21;
      dVar23 = *(double *)*local_res10 + dVar21;
      dVar24 = *(double *)local_res10[1] + dVar21;
      if ((char)this->_padding_ == '\0') {
        this->_padding_ = (longlong)dVar23;
        this->_padding_ = (longlong)dVar29;
        this->_padding_ = (longlong)dVar24;
        *(undefined1 *)&this->_padding_ = 1;
        this->_padding_ = this->_padding_;
        this->_padding_ = this->_padding_;
        this->_padding_ = this->_padding_;
      }
      else {
        dVar28 = dVar23;
        if ((double)this->_padding_ <= dVar23) {
          dVar28 = (double)this->_padding_;
        }
        dVar22 = dVar29;
        if ((double)this->_padding_ <= dVar29) {
          dVar22 = (double)this->_padding_;
        }
        if (dVar29 <= (double)this->_padding_) {
          dVar29 = (double)this->_padding_;
        }
        this->_padding_ = (longlong)dVar28;
        dVar28 = dVar24;
        if ((double)this->_padding_ <= dVar24) {
          dVar28 = (double)this->_padding_;
        }
        this->_padding_ = (longlong)dVar22;
        dVar22 = (double)this->_padding_;
        if ((double)this->_padding_ <= dVar23) {
          dVar22 = dVar23;
        }
        this->_padding_ = (longlong)dVar29;
        this->_padding_ = (longlong)dVar28;
        dVar23 = (double)this->_padding_;
        if ((double)this->_padding_ <= dVar24) {
          dVar23 = dVar24;
        }
        this->_padding_ = (longlong)dVar22;
        this->_padding_ = (longlong)dVar23;
      }
      dVar23 = *(double *)local_res10[1] + dVar27;
      dVar28 = *(double *)*local_res10 + dVar27;
      dVar24 = *(double *)(*local_res10 + 8) + dVar27;
      dVar29 = dVar28;
      if ((double)this->_padding_ <= dVar28) {
        dVar29 = (double)this->_padding_;
      }
      if (dVar28 <= (double)this->_padding_) {
        dVar28 = (double)this->_padding_;
      }
      dVar22 = dVar24;
      if ((double)this->_padding_ <= dVar24) {
        dVar22 = (double)this->_padding_;
      }
      if (dVar24 <= (double)this->_padding_) {
        dVar24 = (double)this->_padding_;
      }
      this->_padding_ = (longlong)dVar29;
      dVar29 = dVar23;
      if ((double)this->_padding_ <= dVar23) {
        dVar29 = (double)this->_padding_;
      }
      if (dVar23 <= (double)this->_padding_) {
        dVar23 = (double)this->_padding_;
      }
      this->_padding_ = (longlong)dVar22;
      this->_padding_ = (longlong)dVar28;
      this->_padding_ = (longlong)dVar24;
      this->_padding_ = (longlong)dVar29;
      this->_padding_ = (longlong)dVar23;
      dVar24 = *(double *)(local_res10[4] + 8);
      auVar2 = *(undefined1 (*) [16])(local_res10[3] + 8);
      uVar15 = auVar2._8_4_;
      uVar18 = auVar2._12_4_;
      if ((char)this->_padding_ == '\0') {
        this->_padding_ = auVar2._0_8_;
        this->_padding_ = auVar2._8_8_;
        lVar12 = *(longlong *)(local_res10[4] + 8);
        this->_padding_ = lVar12;
        *(undefined1 *)&this->_padding_ = 1;
        this->_padding_ = this->_padding_;
        this->_padding_ = this->_padding_;
        this->_padding_ = lVar12;
      }
      else {
        dVar23 = (double)this->_padding_;
        uVar17 = SUB84(dVar23,0);
        uVar20 = (int)((ulonglong)dVar23 >> 0x20);
        if (auVar2._0_8_ <= dVar23) {
          uVar17 = auVar2._0_4_;
          uVar20 = auVar2._4_4_;
        }
        this->_padding_ = CONCAT44(uVar20,uVar17);
        dVar23 = (double)this->_padding_;
        uVar17 = uVar15;
        uVar20 = uVar18;
        if (auVar2._8_8_ <= dVar23) {
          uVar17 = SUB84(dVar23,0);
          uVar20 = (undefined4)((ulonglong)dVar23 >> 0x20);
        }
        if (dVar22 <= auVar2._8_8_) {
          uVar15 = SUB84(dVar22,0);
          uVar18 = (undefined4)((ulonglong)dVar22 >> 0x20);
        }
        dVar23 = dVar24;
        if ((double)this->_padding_ <= dVar24) {
          dVar23 = (double)this->_padding_;
        }
        this->_padding_ = CONCAT44(uVar20,uVar17);
        this->_padding_ = CONCAT44(uVar18,uVar15);
        uVar15 = SUB84(dVar28,0);
        uVar18 = (int)((ulonglong)dVar28 >> 0x20);
        if (dVar28 <= auVar2._0_8_) {
          uVar15 = auVar2._0_4_;
          uVar18 = auVar2._4_4_;
        }
        this->_padding_ = (longlong)dVar23;
        this->_padding_ = CONCAT44(uVar18,uVar15);
        dVar23 = (double)this->_padding_;
        uVar15 = SUB84(dVar23,0);
        uVar18 = (undefined4)((ulonglong)dVar23 >> 0x20);
        if (dVar23 <= dVar24) {
          uVar15 = SUB84(dVar24,0);
          uVar18 = (undefined4)((ulonglong)dVar24 >> 0x20);
        }
        this->_padding_ = CONCAT44(uVar18,uVar15);
      }
      dVar23 = *(double *)(local_res10[4] + 8) + dVar21;
      dVar29 = *(double *)(local_res10[3] + 8) + dVar21;
      dVar24 = *(double *)local_res10[4] + dVar21;
      dVar28 = dVar29;
      if (dVar29 <= (double)this->_padding_) {
        dVar28 = (double)this->_padding_;
      }
      if ((double)this->_padding_ <= dVar29) {
        dVar29 = (double)this->_padding_;
      }
      dVar22 = dVar24;
      if (dVar24 <= (double)this->_padding_) {
        dVar22 = (double)this->_padding_;
      }
      if ((double)this->_padding_ <= dVar24) {
        dVar24 = (double)this->_padding_;
      }
      this->_padding_ = (longlong)dVar28;
      this->_padding_ = (longlong)dVar29;
      dVar29 = dVar23;
      if (dVar23 <= (double)this->_padding_) {
        dVar29 = (double)this->_padding_;
      }
      if ((double)this->_padding_ <= dVar23) {
        dVar23 = (double)this->_padding_;
      }
      this->_padding_ = (longlong)dVar22;
      this->_padding_ = (longlong)dVar24;
      this->_padding_ = (longlong)dVar29;
      this->_padding_ = (longlong)dVar23;
      dVar24 = *(double *)(local_res10[4] + 8);
      dVar28 = *(double *)local_res10[4] + dVar27;
      dVar29 = *(double *)(local_res10[3] + 8) + dVar27;
      dVar23 = dVar24 + dVar27;
      if ((char)this->_padding_ == '\0') {
        this->_padding_ = (longlong)dVar29;
        this->_padding_ = (longlong)dVar28;
        this->_padding_ = (longlong)dVar23;
        *(undefined1 *)&this->_padding_ = 1;
        this->_padding_ = this->_padding_;
        this->_padding_ = this->_padding_;
        this->_padding_ = this->_padding_;
      }
      else {
        dVar22 = dVar29;
        if ((double)this->_padding_ <= dVar29) {
          dVar22 = (double)this->_padding_;
        }
        dVar25 = dVar28;
        if ((double)this->_padding_ <= dVar28) {
          dVar25 = (double)this->_padding_;
        }
        this->_padding_ = (longlong)dVar22;
        this->_padding_ = (longlong)dVar25;
        dVar22 = (double)this->_padding_;
        if (dVar23 <= (double)this->_padding_) {
          dVar22 = dVar23;
        }
        dVar25 = (double)this->_padding_;
        if ((double)this->_padding_ <= dVar29) {
          dVar25 = dVar29;
        }
        this->_padding_ = (longlong)dVar22;
        dVar29 = (double)this->_padding_;
        uVar18 = SUB84(dVar29,0);
        this->_padding_ = (longlong)dVar25;
        uVar15 = (int)((ulonglong)dVar29 >> 0x20);
        if (dVar29 <= dVar28) {
          uVar18 = SUB84(dVar28,0);
          uVar15 = (int)((ulonglong)dVar28 >> 0x20);
        }
        dVar29 = (double)this->_padding_;
        if ((double)this->_padding_ <= dVar23) {
          dVar29 = dVar23;
        }
        this->_padding_ = CONCAT44(uVar15,uVar18);
        this->_padding_ = (longlong)dVar29;
      }
      uVar32 = SUB84(dVar5,0) & uVar9;
      uVar33 = (uint)((ulonglong)dVar5 >> 0x20) & uVar10;
      uVar34 = SUB84(dVar7,0) & uVar9;
      uVar35 = (uint)((ulonglong)dVar7 >> 0x20) & uVar10;
      if ((double)CONCAT44(uVar33,uVar32) <= (double)CONCAT44(uVar35,uVar34)) {
        uVar32 = uVar34;
        uVar33 = uVar35;
      }
      uVar35 = SUB84(dVar8,0) & uVar9;
      uVar36 = (uint)((ulonglong)dVar8 >> 0x20) & uVar10;
      uVar34 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar34;
      if ((double)CONCAT44(uVar33,uVar32) <= (double)CONCAT44(uVar36,uVar35)) {
        uVar32 = uVar35;
        uVar33 = uVar36;
      }
      dVar5 = (double)CONCAT44(uVar33,uVar32);
      if ((double)CONCAT44(uVar33,uVar32) <= (double)fVar37) {
        dVar5 = (double)fVar37;
      }
      fVar37 = (float)dVar5;
      uVar14 = uVar14 + 2;
    } while ((int)uVar34 < *(int *)((longlong)&this->_padding_ + 4));
  }
  dVar27 = (double)fVar37;
  dVar6 = (double)this->_padding_ - dVar27;
  dVar30 = dVar27 + (double)this->_padding_;
  dVar26 = (double)this->_padding_ - dVar27;
  dVar21 = (double)this->_padding_ - dVar27;
  dVar24 = dVar27 + (double)this->_padding_;
  dVar27 = dVar27 + (double)this->_padding_;
  auVar4._8_4_ = SUB84(dVar26,0);
  auVar4._0_8_ = dVar6;
  auVar4._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
  this->_padding_ = (longlong)dVar6;
  this->_padding_ = auVar4._8_8_;
  auVar2._8_4_ = SUB84(dVar30,0);
  auVar2._0_8_ = dVar21;
  auVar2._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
  this->_padding_ = (longlong)dVar21;
  this->_padding_ = auVar2._8_8_;
  auVar3._8_4_ = SUB84(dVar27,0);
  auVar3._0_8_ = dVar24;
  auVar3._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
  this->_padding_ = (longlong)dVar24;
  this->_padding_ = auVar3._8_8_;
  this->_padding_ = CONCAT71(uStack_e7,1);
  return;
}

// GetAllocatedSize @ 14810fdc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FParticleBeam2EmitterInstance::GetAllocatedSize
          (FParticleBeam2EmitterInstance *this,int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if (this->_padding_ != 0) {
    iVar1 = (int)this->_padding_;
    iVar2 = *(int *)((longlong)&this->_padding_ + 4);
    *param_1 = iVar1 * *(int *)((longlong)&this->_padding_ + 4) + 0x3c0;
    *param_2 = iVar1 * iVar2 + 0x3c0;
    return;
  }
  *param_1 = 0x3c0;
  *param_2 = 0x3c0;
  return;
}

// GetBeamEndPoint @ 14810ff80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FParticleBeam2EmitterInstance::GetBeamEndPoint
          (FParticleBeam2EmitterInstance *this,TVector<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  
  if ((this->UserSetTargetArray).ArrayNum < 1) {
    return false;
  }
  pFVar1 = (this->UserSetTargetArray).AllocatorInstance.Data;
  dVar2 = *(double *)(pFVar1 + 8);
  (param_1->field0_0x0)._s_0.X = *(double *)pFVar1;
  (param_1->field0_0x0)._s_0.Y = dVar2;
  (param_1->field0_0x0)._s_0.Z = *(double *)(pFVar1 + 0x10);
  return true;
}

// GetBeamSourcePoint @ 14810ffc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FParticleBeam2EmitterInstance::GetBeamSourcePoint
          (FParticleBeam2EmitterInstance *this,int param_1,TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  
  if (-1 < param_1) {
    iVar2 = (this->UserSetSourceArray).ArrayNum;
    if (param_1 + 1 <= iVar2) {
      uVar8 = 0;
      if (param_1 < iVar2) {
        uVar8 = (uint)~param_1 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      pFVar3 = (this->UserSetSourceArray).AllocatorInstance.Data;
      pFVar1 = pFVar3 + (longlong)param_1 * 0x18;
      dVar5 = *(double *)(pFVar1 + 8);
      (param_2->field0_0x0)._s_0.X = *(double *)pFVar1;
      (param_2->field0_0x0)._s_0.Y = dVar5;
      (param_2->field0_0x0)._s_0.Z = *(double *)(pFVar3 + (longlong)param_1 * 0x18 + 0x10);
      return true;
    }
  }
  return false;
}

// GetBeamSourceStrength @ 148110090

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FParticleBeam2EmitterInstance::GetBeamSourceStrength
          (FParticleBeam2EmitterInstance *this,int param_1,float *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  if (-1 < param_1) {
    iVar1 = (this->UserSetSourceStrengthArray).ArrayNum;
    if (param_1 + 1 <= iVar1) {
      uVar5 = 0;
      if (param_1 < iVar1) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      *param_2 = *(float *)((this->UserSetSourceStrengthArray).AllocatorInstance.Data +
                           (longlong)param_1 * 4);
      return true;
    }
  }
  return false;
}

// GetBeamSourceTangent @ 148110150

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FParticleBeam2EmitterInstance::GetBeamSourceTangent
          (FParticleBeam2EmitterInstance *this,int param_1,TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  
  if (-1 < param_1) {
    iVar2 = (this->UserSetSourceTangentArray).ArrayNum;
    if (param_1 + 1 <= iVar2) {
      uVar8 = 0;
      if (param_1 < iVar2) {
        uVar8 = (uint)~param_1 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      pFVar3 = (this->UserSetSourceTangentArray).AllocatorInstance.Data;
      pFVar1 = pFVar3 + (longlong)param_1 * 0x18;
      dVar5 = *(double *)(pFVar1 + 8);
      (param_2->field0_0x0)._s_0.X = *(double *)pFVar1;
      (param_2->field0_0x0)._s_0.Y = dVar5;
      (param_2->field0_0x0)._s_0.Z = *(double *)(pFVar3 + (longlong)param_1 * 0x18 + 0x10);
      return true;
    }
  }
  return false;
}

// GetBeamTargetPoint @ 148110220

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FParticleBeam2EmitterInstance::GetBeamTargetPoint
          (FParticleBeam2EmitterInstance *this,int param_1,TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  
  if (-1 < param_1) {
    iVar2 = (this->UserSetTargetArray).ArrayNum;
    if (param_1 + 1 <= iVar2) {
      uVar8 = 0;
      if (param_1 < iVar2) {
        uVar8 = (uint)~param_1 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      pFVar3 = (this->UserSetTargetArray).AllocatorInstance.Data;
      pFVar1 = pFVar3 + (longlong)param_1 * 0x18;
      dVar5 = *(double *)(pFVar1 + 8);
      (param_2->field0_0x0)._s_0.X = *(double *)pFVar1;
      (param_2->field0_0x0)._s_0.Y = dVar5;
      (param_2->field0_0x0)._s_0.Z = *(double *)(pFVar3 + (longlong)param_1 * 0x18 + 0x10);
      return true;
    }
  }
  return false;
}

// GetBeamTargetStrength @ 1481102f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FParticleBeam2EmitterInstance::GetBeamTargetStrength
          (FParticleBeam2EmitterInstance *this,int param_1,float *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  if (-1 < param_1) {
    iVar1 = (this->UserSetTargetStrengthArray).ArrayNum;
    if (param_1 + 1 <= iVar1) {
      uVar5 = 0;
      if (param_1 < iVar1) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      *param_2 = *(float *)((this->UserSetTargetStrengthArray).AllocatorInstance.Data +
                           (longlong)param_1 * 4);
      return true;
    }
  }
  return false;
}

// GetBeamTargetTangent @ 1481103b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FParticleBeam2EmitterInstance::GetBeamTargetTangent
          (FParticleBeam2EmitterInstance *this,int param_1,TVector<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  
  if (-1 < param_1) {
    iVar2 = (this->UserSetTargetTangentArray).ArrayNum;
    if (param_1 + 1 <= iVar2) {
      uVar8 = 0;
      if (param_1 < iVar2) {
        uVar8 = (uint)~param_1 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
      }
      pFVar3 = (this->UserSetTargetTangentArray).AllocatorInstance.Data;
      pFVar1 = pFVar3 + (longlong)param_1 * 0x18;
      dVar5 = *(double *)(pFVar1 + 8);
      (param_2->field0_0x0)._s_0.X = *(double *)pFVar1;
      (param_2->field0_0x0)._s_0.Y = dVar5;
      (param_2->field0_0x0)._s_0.Z = *(double *)(pFVar3 + (longlong)param_1 * 0x18 + 0x10);
      return true;
    }
  }
  return false;
}

// GetCurrentMaterial @ 148110b00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMaterialInterface * __thiscall
FParticleBeam2EmitterInstance::GetCurrentMaterial(FParticleBeam2EmitterInstance *this)

{
  UMaterialInterface *pUVar1;
  char cVar2;
  UMaterial *pUVar3;
  
  pUVar1 = (UMaterialInterface *)this->_padding_;
  if (pUVar1 != (UMaterialInterface *)0x0) {
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x378))(pUVar1,2);
    if (cVar2 != '\0') {
      this->_padding_ = (longlong)pUVar1;
      return pUVar1;
    }
  }
  pUVar3 = UMaterial::GetDefaultMaterial(MD_Surface);
  this->_padding_ = (longlong)pUVar3;
  return (UMaterialInterface *)pUVar3;
}

// GetDynamicData @ 148112a90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FDynamicEmitterDataBase * __thiscall
FParticleBeam2EmitterInstance::GetDynamicData
          (FParticleBeam2EmitterInstance *this,bool param_1,Type param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_public:_virtual_struct_FDynamicEmitterDataBase_*___cdecl_FParticleBeam2EmitterInstance::GetDynamicData(bool,ERHIFeatureLevel::Type)_::_2_::FStat_STAT_ParticleBeam2EmitterInstance_GetDynamicData>
  FVar6;
  FDynamicBeam2EmitterData *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_DynamicEmitterCount> FVar8;
  FThreadSafeStaticStat<FStat_STAT_DynamicBeamCount> FVar9;
  FThreadSafeStaticStat<FStat_STAT_DynamicEmitterMem> FVar10;
  longlong lVar11;
  FName FVar12;
  FDynamicBeam2EmitterData *pFVar13;
  FDynamicBeam2EmitterData *pFVar14;
  FName local_res8;
  FName local_res20;
  FString local_58;
  FString local_48;
  
  pFVar13 = (FDynamicBeam2EmitterData *)0x0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_ParticleBeam2EmitterInstance_GetDynamicData ==
        (FThreadSafeStaticStat<_public:_virtual_struct_FDynamicEmitterDataBase_*___cdecl_FParticleBeam2EmitterInstance::GetDynamicData(bool,ERHIFeatureLevel::Type)_::_2_::FStat_STAT_ParticleBeam2EmitterInstance_GetDynamicData>
         )0x0) {
      pFVar5 = ::FName::FName(&local_res8,"STAT_ParticleBeam2EmitterInstance_GetDynamicData");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_ParticleBeam2EmitterInstance_GetDynamicData,*pFVar5,
                 L"STAT_ParticleBeam2EmitterInstance_GetDynamicData","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar6 = StatPtr_STAT_ParticleBeam2EmitterInstance_GetDynamicData;
  if (StatPtr_STAT_ParticleBeam2EmitterInstance_GetDynamicData ==
      (FThreadSafeStaticStat<_public:_virtual_struct_FDynamicEmitterDataBase_*___cdecl_FParticleBeam2EmitterInstance::GetDynamicData(bool,ERHIFeatureLevel::Type)_::_2_::FStat_STAT_ParticleBeam2EmitterInstance_GetDynamicData>
       )0x0) {
    pFVar5 = ::FName::FName(&local_res20,"STAT_ParticleBeam2EmitterInstance_GetDynamicData");
    FVar6 = (FThreadSafeStaticStat<_public:_virtual_struct_FDynamicEmitterDataBase_*___cdecl_FParticleBeam2EmitterInstance::GetDynamicData(bool,ERHIFeatureLevel::Type)_::_2_::FStat_STAT_ParticleBeam2EmitterInstance_GetDynamicData>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_STAT_ParticleBeam2EmitterInstance_GetDynamicData,*pFVar5,
                         L"STAT_ParticleBeam2EmitterInstance_GetDynamicData","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar6;
  bVar1 = false;
  bVar3 = false;
  if ((FVar12.ComparisonIndex.Value.Value != 0) || (FVar12.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar1 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = FVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeam2EmitterInstance.cpp"
                   ,0x490);
        bVar1 = true;
        bVar3 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar12;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar2 = true;
      goto LAB_148112bfd;
    }
  }
  bVar2 = false;
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
LAB_148112bfd:
  cVar4 = (**(code **)(this->_padding_ + 0x118))(this,this->_padding_);
  if ((cVar4 != '\0') && ((this->_padding_ & 1) != 0)) {
    if ((*(uint *)((longlong)&this->_padding_ + 4) < 0x801) && ((uint)this->_padding_ < 0x5241)) {
      pFVar7 = FDynamicEmitterDataBase::operator_new(0x198);
      pFVar14 = pFVar13;
      if (pFVar7 != (FDynamicBeam2EmitterData *)0x0) {
        *(uint *)&pFVar7->_padding_ = (uint)pFVar7->_padding_ & 0xfffffffe;
        *(uint *)&pFVar7->_padding_ = (uint)pFVar7->_padding_ & 0xfffffffe;
        pFVar7->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
        pFVar7->_padding_ = (longlong)&___7FDynamicBeam2EmitterData__6B_;
        *(undefined4 *)((longlong)&pFVar7->_padding_ + 4) = 0xffffffff;
        pFVar7->_padding_ = 0;
        FDynamicBeam2EmitterReplayData::FDynamicBeam2EmitterReplayData(&pFVar7->Source);
        pFVar7->LastFramePreRendered = -1;
        pFVar14 = pFVar7;
      }
      if (FThreadStats::bPrimaryEnable != false) {
        FVar8 = StatPtr_STAT_DynamicEmitterCount;
        if (StatPtr_STAT_DynamicEmitterCount ==
            (FThreadSafeStaticStat<FStat_STAT_DynamicEmitterCount>)0x0) {
          pFVar5 = ::FName::FName(&local_res8,"STAT_DynamicEmitterCount");
          FVar8 = (FThreadSafeStaticStat<FStat_STAT_DynamicEmitterCount>)
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DynamicEmitterCount,*pFVar5,
                             L"DynEmitter Count","STATGROUP_ParticleMem","STATCAT_Advanced",
                             L"Particle Mem",true,true,ST_int64,false,false,MCR_Invalid);
        }
        local_res8 = *(FName *)FVar8;
        FThreadStats::AddMessage<__int64>(local_res8,Add,1,false);
        if (FThreadStats::bPrimaryEnable != false) {
          FVar9 = StatPtr_STAT_DynamicBeamCount;
          if (StatPtr_STAT_DynamicBeamCount ==
              (FThreadSafeStaticStat<FStat_STAT_DynamicBeamCount>)0x0) {
            pFVar5 = ::FName::FName(&local_res8,"STAT_DynamicBeamCount");
            FVar9 = (FThreadSafeStaticStat<FStat_STAT_DynamicBeamCount>)
                    FThreadSafeStaticStatBase::DoSetup
                              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DynamicBeamCount,*pFVar5,
                               L"DynBeam Count","STATGROUP_ParticleMem","STATCAT_Advanced",
                               L"Particle Mem",true,true,ST_int64,false,false,MCR_Invalid);
          }
          local_res8 = *(FName *)FVar9;
          FThreadStats::AddMessage<__int64>(local_res8,Add,1,false);
          if (FThreadStats::bPrimaryEnable != false) {
            FVar10 = StatPtr_STAT_DynamicEmitterMem;
            if (StatPtr_STAT_DynamicEmitterMem ==
                (FThreadSafeStaticStat<FStat_STAT_DynamicEmitterMem>)0x0) {
              pFVar5 = ::FName::FName(&local_res8,"STAT_DynamicEmitterMem");
              FVar10 = (FThreadSafeStaticStat<FStat_STAT_DynamicEmitterMem>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DynamicEmitterMem,
                                  *pFVar5,L"DynEmitter Mem","STATGROUP_ParticleMem",
                                  "STATCAT_Advanced",L"Particle Mem",true,true,ST_int64,false,false,
                                  MCR_Invalid);
            }
            local_res8 = *(FName *)FVar10;
            FThreadStats::AddMessage<__int64>(local_res8,Add,0x198,false);
          }
        }
      }
      cVar4 = (**(code **)(this->_padding_ + 0x220))(this,&pFVar14->Source);
      if (cVar4 == '\0') {
        if (pFVar14 != (FDynamicBeam2EmitterData *)0x0) {
          (**(code **)pFVar14->_padding_)(pFVar14,1);
        }
      }
      else {
        FDynamicBeam2EmitterData::Init(pFVar14,param_1);
        pFVar13 = pFVar14;
      }
    }
    else {
      cVar4 = (**(code **)(*(longlong *)this->_padding_ + 0x38))();
      if (cVar4 != '\0') {
        lVar11 = (**(code **)(*(longlong *)this->_padding_ + 0xd8))();
        pFVar14 = pFVar13;
        if (lVar11 != 0) {
          lVar11 = (**(code **)(*(longlong *)this->_padding_ + 0xd8))();
          local_res8 = *(FName *)(lVar11 + 0x18);
          ::FName::ToString(&local_res8,&local_48);
          pFVar14 = (FDynamicBeam2EmitterData *)&DAT_00000001;
        }
        ::FString::PrintfImpl(&local_58,L"BeamEmitter with too much data: %s");
        if ((pFVar14 != (FDynamicBeam2EmitterData *)0x0) &&
           (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        local_res8.ComparisonIndex.Value = 0xffff0000;
        UEngine::AddOnScreenDebugMessage
                  (GEngine,(ulong64)this,__real_40a00000,(FColor)0xffff0000,&local_58,true,
                   &UE::Math::TVector2<double>::UnitVector);
        if (4 < (byte)LogParticles._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FThreadStats::AddMessage(FVar12,CycleScopeEnd);
  }
  return (FDynamicEmitterDataBase *)pFVar13;
}

// GetReplayData @ 148118c10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FDynamicEmitterReplayDataBase * __thiscall
FParticleBeam2EmitterInstance::GetReplayData(FParticleBeam2EmitterInstance *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FDynamicBeam2EmitterReplayData *pFVar4;
  FDynamicEmitterReplayDataBase *pFVar5;
  
  pFVar4 = ::operator_new(0x168);
  if (pFVar4 == (FDynamicBeam2EmitterReplayData *)0x0) {
    pFVar4 = (FDynamicBeam2EmitterReplayData *)0x0;
  }
  else {
    pFVar4 = FDynamicBeam2EmitterReplayData::FDynamicBeam2EmitterReplayData(pFVar4);
    if (pFVar4 != (FDynamicBeam2EmitterReplayData *)0x0) goto LAB_148118c66;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("NewEmitterReplayData != 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeam2EmitterInstance.cpp"
                     ,0x4cc,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FDynamicEmitterReplayDataBase *)(*pcVar1)();
    return pFVar5;
  }
LAB_148118c66:
  cVar3 = (**(code **)(this->_padding_ + 0x220))(this,pFVar4);
  if (cVar3 != '\0') {
    return (FDynamicEmitterReplayDataBase *)pFVar4;
  }
  if (pFVar4 != (FDynamicBeam2EmitterReplayData *)0x0) {
    (**(code **)pFVar4->_padding_)(pFVar4,1);
  }
  return (FDynamicEmitterReplayDataBase *)0x0;
}

// GetResourceSizeEx @ 148118e80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FParticleBeam2EmitterInstance::GetResourceSizeEx
          (FParticleBeam2EmitterInstance *this,FResourceSizeEx *param_1)

{
  Type TVar1;
  longlong lVar2;
  int iVar3;
  
  TVar1 = FResourceSizeEx::GetResourceSizeMode(param_1);
  if ((TVar1 != EstimatedTotal) &&
     (lVar2 = (**(code **)(*(longlong *)this->_padding_ + 0xf8))(), lVar2 == 0)) {
    return;
  }
  if (this->_padding_ == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)this->_padding_ * *(int *)((longlong)&this->_padding_ + 4);
  }
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,0x198);
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,(longlong)iVar3);
  lVar2 = (longlong)*(int *)((longlong)&this->_padding_ + 4);
  if ((int)this->_padding_ == 0) {
    lVar2 = lVar2 * 5;
  }
  FResourceSizeEx::AddUnknownMemoryBytes(param_1,lVar2 << 4);
  return;
}

// Init @ 14811df10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FParticleBeam2EmitterInstance::Init(FParticleBeam2EmitterInstance *this)

{
  int *piVar1;
  UParticleModuleTypeDataBeam2 *pUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_BeamEmitterInstance_Init> FVar9;
  UParticleModuleTypeDataBeam2 *pUVar10;
  uint *puVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  longlong lVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_38;
  
  lVar15 = 0;
  FVar9 = StatPtr_STAT_BeamEmitterInstance_Init;
  if (StatPtr_STAT_BeamEmitterInstance_Init ==
      (FThreadSafeStaticStat<FStat_STAT_BeamEmitterInstance_Init>)0x0) {
    pFVar8 = ::FName::FName(&local_res20,"STAT_BeamEmitterInstance_Init");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_BeamEmitterInstance_Init>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BeamEmitterInstance_Init,*pFVar8,
                       L"BeamEmitterInstance Init","STATGROUP_Particles","STATCAT_Advanced",
                       L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar13.Value;
        local_res10.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeam2EmitterInstance.cpp"
                   ,0x1be);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar13.Value;
      local_res18.s.HighPart = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar5 = true;
      goto LAB_14811e062;
    }
  }
  bVar5 = false;
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
LAB_14811e062:
  if ((this->_padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SpriteTemplate",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeam2EmitterInstance.cpp"
                         ,0x1c1,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((*(int *)(this->_padding_ + 0x48) < 1) ||
      (lVar15 = **(longlong **)(this->_padding_ + 0x40), lVar15 == 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODLevel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeam2EmitterInstance.cpp"
                         ,0x1c3,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar10 = CastChecked<UParticleModuleTypeDataBeam2,UParticleModuleTypeDataBase>
                      ((TObjectPtr<UParticleModuleTypeDataBase> *)(lVar15 + 0x48),NullChecked);
  this->BeamTypeData = pUVar10;
  if (((pUVar10->LOD_BeamModule_Source).ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar2 = this->BeamTypeData;
  this->BeamModule_Source =
       *(UParticleModuleBeamSource **)(pUVar10->LOD_BeamModule_Source).AllocatorInstance.Data;
  if (((pUVar2->LOD_BeamModule_Target).ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar10 = this->BeamTypeData;
  this->BeamModule_Target =
       *(UParticleModuleBeamTarget **)(pUVar2->LOD_BeamModule_Target).AllocatorInstance.Data;
  if (((pUVar10->LOD_BeamModule_Noise).ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar2 = this->BeamTypeData;
  this->BeamModule_Noise =
       *(UParticleModuleBeamNoise **)(pUVar10->LOD_BeamModule_Noise).AllocatorInstance.Data;
  if (((pUVar2->LOD_BeamModule_SourceModifier).ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar10 = this->BeamTypeData;
  this->BeamModule_SourceModifier =
       *(UParticleModuleBeamModifier **)
        (pUVar2->LOD_BeamModule_SourceModifier).AllocatorInstance.Data;
  if (((pUVar10->LOD_BeamModule_TargetModifier).ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->BeamModule_TargetModifier =
       *(UParticleModuleBeamModifier **)
        (pUVar10->LOD_BeamModule_TargetModifier).AllocatorInstance.Data;
  FParticleEmitterInstance::Init((FParticleEmitterInstance *)this);
  if ((this->BeamTypeData == (UParticleModuleTypeDataBeam2 *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("BeamTypeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeam2EmitterInstance.cpp"
                         ,0x3d4,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar10 = this->BeamTypeData;
  if ((0 < (pUVar10->LOD_BeamModule_SourceModifier).ArrayNum) &&
     (puVar11 = TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
                ::Find((TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
                        *)(this->_padding_ + 0x60),
                       *(UParticleModule **)
                        (pUVar10->LOD_BeamModule_SourceModifier).AllocatorInstance.Data),
     puVar11 != (uint *)0x0)) {
    this->BeamModule_SourceModifier_Offset = *puVar11;
  }
  if ((0 < (pUVar10->LOD_BeamModule_TargetModifier).ArrayNum) &&
     (puVar11 = TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
                ::Find((TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
                        *)(this->_padding_ + 0x60),
                       *(UParticleModule **)
                        (pUVar10->LOD_BeamModule_TargetModifier).AllocatorInstance.Data),
     puVar11 != (uint *)0x0)) {
    this->BeamModule_TargetModifier_Offset = *puVar11;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// InitParameters @ 14811fbc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FParticleBeam2EmitterInstance::InitParameters
          (FParticleBeam2EmitterInstance *this,UParticleEmitter *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  byte bVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  UParticleModuleTypeDataBeam2 *pUVar8;
  longlong lVar9;
  int *piVar10;
  
  FParticleEmitterInstance::InitParameters((FParticleEmitterInstance *)this,param_1);
  lVar9 = 0;
  if ((((param_1->LODLevels).ArrayNum < 1) ||
      (lVar9 = *(longlong *)(param_1->LODLevels).AllocatorInstance.Data, lVar9 == 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODLevel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeam2EmitterInstance.cpp"
                         ,0x18a,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pUVar8 = CastChecked<UParticleModuleTypeDataBeam2,UParticleModuleTypeDataBase>
                     ((TObjectPtr<UParticleModuleTypeDataBase> *)(lVar9 + 0x48),NullChecked);
  this->BeamTypeData = pUVar8;
  if ((pUVar8 == (UParticleModuleTypeDataBeam2 *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("BeamTypeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeam2EmitterInstance.cpp"
                         ,0x18c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar3 = *(byte *)(*(longlong *)(lVar9 + 0x30) + 0x71);
  if ((bVar3 & 1) != 0) {
    *(byte *)(*(longlong *)(lVar9 + 0x30) + 0x71) = bVar3 & 0xfe;
  }
  this->BeamModule_Source = (UParticleModuleBeamSource *)0x0;
  this->BeamModule_Target = (UParticleModuleBeamTarget *)0x0;
  this->BeamModule_Noise = (UParticleModuleBeamNoise *)0x0;
  this->BeamModule_SourceModifier = (UParticleModuleBeamModifier *)0x0;
  this->BeamModule_TargetModifier = (UParticleModuleBeamModifier *)0x0;
  if (this->BeamTypeData->MaxBeamCount == 0) {
    this->BeamTypeData->MaxBeamCount = 1;
  }
  pTVar2 = &this->TextureTiles;
  piVar1 = &(this->TextureTiles).ArrayMax;
  this->BeamCount = this->BeamTypeData->MaxBeamCount;
  this->FirstEmission = true;
  this->TickCount = 0;
  this->ForceSpawnCount = 0;
  this->BeamMethod = (uint)(this->BeamTypeData->BeamMethod).Value;
  (this->TextureTiles).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  piVar10 = &this->BeamTypeData->TextureTile;
  if (((pFVar4 <= piVar10) && (piVar10 < pFVar4 + (longlong)*piVar1 * 4)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = (this->TextureTiles).ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->TextureTiles).ArrayNum = iVar7 + 1;
  *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 4) = *piVar10;
  piVar1 = &(this->UserSetSourceArray).ArrayMax;
  (this->UserSetSourceArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->UserSetSourceArray).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->UserSetSourceTangentArray).ArrayMax;
  (this->UserSetSourceTangentArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->UserSetSourceTangentArray).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->UserSetSourceStrengthArray).ArrayMax;
  (this->UserSetSourceStrengthArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->UserSetSourceStrengthArray).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->DistanceArray).ArrayMax;
  (this->DistanceArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->DistanceArray).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->TargetPointArray).ArrayMax;
  (this->TargetPointArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->TargetPointArray).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->TargetPointSourceNames).ArrayMax;
  (this->TargetPointSourceNames).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->TargetPointSourceNames).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->UserSetTargetArray).ArrayMax;
  (this->UserSetTargetArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->UserSetTargetArray).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->UserSetTargetTangentArray).ArrayMax;
  (this->UserSetTargetTangentArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->UserSetTargetTangentArray).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->UserSetTargetStrengthArray).ArrayMax;
  (this->UserSetTargetStrengthArray).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->UserSetTargetStrengthArray).AllocatorInstance,0,piVar1);
  }
  ResolveSource(this);
  ResolveTarget(this);
  return;
}

// KillParticles @ 1481239b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FParticleBeam2EmitterInstance::KillParticles(FParticleBeam2EmitterInstance *this)

{
  int *piVar1;
  ushort uVar2;
  longlong lVar3;
  FName FVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  byte *pbVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_BeamParticlesKilled> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  int iVar11;
  longlong lVar12;
  FName local_res10;
  FName local_res18;
  FStatMessage local_58 [2];
  
  if (0 < *(int *)((longlong)&this->_padding_ + 4)) {
    lVar3 = this->_padding_;
    if ((lVar3 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("LODLevel",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeam2EmitterInstance.cpp"
                           ,0x3ac,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pbVar8 = (byte *)0x0;
    if (((*(UParticleModule **)(lVar3 + 0x58) != (UParticleModule *)0x0) &&
        (pbVar8 = FParticleEmitterInstance::GetModuleInstanceData
                            ((FParticleEmitterInstance *)this,*(UParticleModule **)(lVar3 + 0x58)),
        pbVar8 != (byte *)0x0)) && ((*pbVar8 & 2) == 0)) {
      pbVar8 = (byte *)0x0;
    }
    fVar6 = __real_3f800000;
    iVar11 = *(int *)((longlong)&this->_padding_ + 4) + -1;
    lVar12 = (longlong)iVar11;
    if (-1 < iVar11) {
      do {
        uVar2 = *(ushort *)(this->_padding_ + lVar12 * 2);
        if (fVar6 < *(float *)((longlong)(int)((uint)uVar2 * (int)this->_padding_) + this->_padding_
                              + 0x90)) {
          if (pbVar8 != (byte *)0x0) {
            (**(code **)(**(longlong **)(lVar3 + 0x58) + 0x3a0))(*(longlong **)(lVar3 + 0x58),this);
          }
          *(undefined2 *)(this->_padding_ + lVar12 * 2) =
               *(undefined2 *)
                (this->_padding_ + -2 + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 2);
          *(ushort *)(this->_padding_ + -2 + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 2)
               = uVar2;
          piVar1 = (int *)((longlong)&this->_padding_ + 4);
          *piVar1 = *piVar1 + -1;
          if (FThreadStats::bPrimaryEnable != false) {
            FVar10 = StatPtr_STAT_BeamParticlesKilled;
            if (StatPtr_STAT_BeamParticlesKilled ==
                (FThreadSafeStaticStat<FStat_STAT_BeamParticlesKilled>)0x0) {
              pFVar9 = ::FName::FName(&local_res18,"STAT_BeamParticlesKilled");
              FVar10 = (FThreadSafeStaticStat<FStat_STAT_BeamParticlesKilled>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BeamParticlesKilled,
                                  *pFVar9,L"Beam Ptcls Killed","STATGROUP_Particles",
                                  "STATCAT_Advanced",L"Particles",true,true,ST_int64,false,false,
                                  MCR_Invalid);
            }
            FVar4 = *(FName *)FVar10;
            if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              this_00 = TlsGetValue(FThreadStats::TlsSlot);
              if (this_00 == (FThreadStats *)0x0) {
                this_01 = FThreadStatsPool::Get();
                this_00 = FThreadStatsPool::GetFromPool(this_01);
              }
              local_58[0].NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
              local_58[0].StatData.Pad[0] = '\x01';
              local_58[0].StatData.Pad[1] = '\0';
              local_58[0].StatData.Pad[2] = '\0';
              local_58[0].StatData.Pad[3] = '\0';
              local_58[0].StatData.Pad[4] = '\0';
              local_58[0].StatData.Pad[5] = '\0';
              local_58[0].StatData.Pad[6] = '\0';
              local_58[0].StatData.Pad[7] = '\0';
              local_res10 = FVar4;
              local_58[0].NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
              FThreadStats::AddStatMessage(this_00,local_58);
              FStatsTrace::Add(&local_res10,1);
              if (this_00->ScopeCount == 0) {
                FThreadStats::Flush(this_00,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(this_00,false,false);
              }
            }
          }
        }
        lVar12 = lVar12 + -1;
      } while (-1 < lVar12);
    }
  }
  return;
}

// OnEmitterInstanceKilled @ 148124500

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FParticleBeam2EmitterInstance::OnEmitterInstanceKilled
          (FParticleBeam2EmitterInstance *this,FParticleEmitterInstance *param_1)

{
  if (this->SourceEmitter == param_1) {
    this->SourceEmitter = (FParticleEmitterInstance *)0x0;
  }
  if (this->TargetEmitter == param_1) {
    this->TargetEmitter = (FParticleEmitterInstance *)0x0;
  }
  return;
}

// PostSpawn @ 148126d00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FParticleBeam2EmitterInstance::PostSpawn
          (FParticleBeam2EmitterInstance *this,FBaseParticle *param_1,float param_2,float param_3)

{
  UParticleModuleBeamSource *pUVar1;
  longlong lVar2;
  code *pcVar3;
  UParticleModuleBeamModifier *pUVar4;
  UParticleModuleBeamTarget *pUVar5;
  UParticleModuleBeamNoise *pUVar6;
  longlong *plVar7;
  FParticleBeam2EmitterInstance *local_58;
  uint local_50;
  float local_4c;
  FBaseParticle *local_48;
  
  pUVar1 = this->BeamModule_Source;
  lVar2 = this->_padding_;
  if ((pUVar1 != (UParticleModuleBeamSource *)0x0) && ((char)pUVar1->_padding_ < '\0')) {
    pcVar3 = *(code **)(pUVar1->_padding_ + 0x2b8);
    local_50 = FParticleEmitterInstance::GetModuleDataOffset
                         ((FParticleEmitterInstance *)this,(UParticleModule *)pUVar1);
    local_58 = this;
    local_4c = param_3;
    local_48 = param_1;
    (*pcVar3)(pUVar1,&local_58);
  }
  pUVar4 = this->BeamModule_SourceModifier;
  if ((pUVar4 != (UParticleModuleBeamModifier *)0x0) && ((char)pUVar4->_padding_ < '\0')) {
    local_50 = this->BeamModule_SourceModifier_Offset;
    local_58 = this;
    local_4c = param_3;
    local_48 = param_1;
    (**(code **)(pUVar4->_padding_ + 0x2b8))(pUVar4,&local_58);
  }
  pUVar5 = this->BeamModule_Target;
  if ((pUVar5 != (UParticleModuleBeamTarget *)0x0) && ((char)pUVar5->_padding_ < '\0')) {
    pcVar3 = *(code **)(pUVar5->_padding_ + 0x2b8);
    local_50 = FParticleEmitterInstance::GetModuleDataOffset
                         ((FParticleEmitterInstance *)this,(UParticleModule *)pUVar5);
    local_58 = this;
    local_4c = param_3;
    local_48 = param_1;
    (*pcVar3)(pUVar5,&local_58);
  }
  pUVar4 = this->BeamModule_TargetModifier;
  if ((pUVar4 != (UParticleModuleBeamModifier *)0x0) && ((char)pUVar4->_padding_ < '\0')) {
    local_50 = this->BeamModule_TargetModifier_Offset;
    local_58 = this;
    local_4c = param_3;
    local_48 = param_1;
    (**(code **)(pUVar4->_padding_ + 0x2b8))(pUVar4,&local_58);
  }
  pUVar6 = this->BeamModule_Noise;
  if ((pUVar6 != (UParticleModuleBeamNoise *)0x0) && ((char)pUVar6->_padding_ < '\0')) {
    pcVar3 = *(code **)(pUVar6->_padding_ + 0x2b8);
    local_50 = FParticleEmitterInstance::GetModuleDataOffset
                         ((FParticleEmitterInstance *)this,(UParticleModule *)pUVar6);
    local_58 = this;
    local_4c = param_3;
    local_48 = param_1;
    (*pcVar3)(pUVar6,&local_58);
  }
  plVar7 = *(longlong **)(lVar2 + 0x48);
  if (plVar7 != (longlong *)0x0) {
    local_50 = *(uint *)((longlong)&this->_padding_ + 4);
    local_58 = this;
    local_4c = param_3;
    local_48 = param_1;
    (**(code **)(*plVar7 + 0x2b8))(plVar7,&local_58);
  }
  FParticleEmitterInstance::PostSpawn((FParticleEmitterInstance *)this,param_1,param_2,param_3);
  return;
}

// RequiredBytes @ 148129f80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

uint __thiscall FParticleBeam2EmitterInstance::RequiredBytes(FParticleBeam2EmitterInstance *this)

{
  uint uVar1;
  
  uVar1 = FParticleEmitterInstance::RequiredBytes((FParticleEmitterInstance *)this);
  return uVar1 + 4;
}

// ResolveSource @ 14812bc50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FParticleBeam2EmitterInstance::ResolveSource(FParticleBeam2EmitterInstance *this)

{
  uchar uVar1;
  UParticleModuleBeamSource *pUVar2;
  FParticleEmitterInstance *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  longlong local_108;
  int local_100;
  longlong local_f8;
  int local_f0;
  FParticleSysParam local_e8;
  
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeam2EmitterInstance.cpp"
                         ,0x3ee,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar2 = this->BeamModule_Source;
  if ((pUVar2 != (UParticleModuleBeamSource *)0x0) && (pUVar2->SourceName != (FName)0x0)) {
    uVar1 = (pUVar2->SourceMethod).Value;
    if ((uVar1 == '\x02') || (uVar1 == '\x03')) {
      if (this->SourceEmitter == (FParticleEmitterInstance *)0x0) {
        (**(code **)(*(longlong *)this->_padding_ + 0xe8))((longlong *)this->_padding_,&local_108);
        uVar7 = 0;
        if (0 < local_100) {
          lVar8 = 0;
          iVar9 = local_100;
          do {
            uVar6 = 0;
            if ((int)uVar7 < iVar9) {
              uVar6 = ~uVar7 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               iVar9 = local_100, bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar3 = *(FParticleEmitterInstance **)(lVar8 + local_108);
            if ((pFVar3 != (FParticleEmitterInstance *)0x0) &&
               (pFVar3->SpriteTemplate->EmitterName == this->BeamModule_Source->SourceName)) {
              this->SourceEmitter = pFVar3;
              return;
            }
            uVar7 = uVar7 + 1;
            lVar8 = lVar8 + 8;
          } while ((int)uVar7 < iVar9);
        }
      }
    }
    else if (uVar1 == '\x04') {
      (**(code **)(*(longlong *)this->_padding_ + 0xe0))((longlong *)this->_padding_,&local_f8);
      local_e8.Vector.field0_0x0._s_0.Y = 0.0;
      local_e8.Vector.field0_0x0._s_0.Z = 0.0;
      local_e8.Vector_Low.field0_0x0._s_0.X = 0.0;
      local_e8.Vector_Low.field0_0x0._s_0.Y = 0.0;
      uVar7 = 0;
      local_e8.Actor.field0_0x0.DebugPtr = (TObjectPtr<AActor>_u_0)0x0;
      local_e8.Material.field0_0x0.DebugPtr = (TObjectPtr<UMaterialInterface>_u_0)0x0;
      local_e8.AsyncActorToWorld.Rotation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      local_e8.AsyncActorToWorld.Rotation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      local_e8.AsyncActorToWorld.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_e8.AsyncActorToWorld.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_e8.AsyncActorToWorld.Scale3D.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_e8.AsyncActorToWorld.Scale3D.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      local_e8.Vector.field0_0x0._s_0.X = 0.0;
      local_e8.Vector_Low.field0_0x0._s_0.Z = 0.0;
      local_e8.Name.ComparisonIndex.Value = 0;
      local_e8.Name.Number = 0;
      local_e8.ParamType.Value = '\0';
      local_e8.Scalar = 0.0;
      local_e8.Scalar_Low = 0.0;
      local_e8.Color.field0_0x0.Bits = (FColor_u_0)0x0;
      local_e8.AsyncActorVelocity.field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_e8.bAsyncDataCopyIsValid = false;
      local_e8.AsyncActorVelocity.field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_e8.AsyncActorVelocity.field0_0x0._s_0.Y =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      if (0 < local_f0) {
        do {
          uVar6 = 0;
          if ((int)uVar7 < local_f0) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FParticleSysParam::operator=
                    (&local_e8,(FParticleSysParam *)((longlong)(int)uVar7 * 0xe0 + local_f8));
          if (local_e8.Name == this->BeamModule_Source->SourceName) {
            this->SourceActor = (AActor *)local_e8.Actor.field0_0x0;
            return;
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < local_f0);
      }
    }
  }
  return;
}

// ResolveTarget @ 14812ca40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FParticleBeam2EmitterInstance::ResolveTarget(FParticleBeam2EmitterInstance *this)

{
  uchar uVar1;
  UParticleModuleBeamTarget *pUVar2;
  FParticleEmitterInstance *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  longlong local_108;
  int local_100;
  longlong local_f8;
  int local_f0;
  FParticleSysParam local_e8;
  
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeam2EmitterInstance.cpp"
                         ,0x41e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar2 = this->BeamModule_Target;
  if ((pUVar2 != (UParticleModuleBeamTarget *)0x0) && (pUVar2->TargetName != (FName)0x0)) {
    uVar1 = (pUVar2->TargetMethod).Value;
    if ((uVar1 == '\x02') || (uVar1 == '\x03')) {
      if (this->TargetEmitter == (FParticleEmitterInstance *)0x0) {
        (**(code **)(*(longlong *)this->_padding_ + 0xe8))((longlong *)this->_padding_,&local_108);
        uVar7 = 0;
        if (0 < local_100) {
          lVar8 = 0;
          iVar9 = local_100;
          do {
            uVar6 = 0;
            if ((int)uVar7 < iVar9) {
              uVar6 = ~uVar7 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               iVar9 = local_100, bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar3 = *(FParticleEmitterInstance **)(lVar8 + local_108);
            if ((pFVar3 != (FParticleEmitterInstance *)0x0) &&
               (pFVar3->SpriteTemplate->EmitterName == this->BeamModule_Target->TargetName)) {
              this->TargetEmitter = pFVar3;
              return;
            }
            uVar7 = uVar7 + 1;
            lVar8 = lVar8 + 8;
          } while ((int)uVar7 < iVar9);
        }
      }
    }
    else if (uVar1 == '\x04') {
      (**(code **)(*(longlong *)this->_padding_ + 0xe0))((longlong *)this->_padding_,&local_f8);
      local_e8.Vector.field0_0x0._s_0.Y = 0.0;
      local_e8.Vector.field0_0x0._s_0.Z = 0.0;
      local_e8.Vector_Low.field0_0x0._s_0.X = 0.0;
      local_e8.Vector_Low.field0_0x0._s_0.Y = 0.0;
      uVar7 = 0;
      local_e8.Actor.field0_0x0.DebugPtr = (TObjectPtr<AActor>_u_0)0x0;
      local_e8.Material.field0_0x0.DebugPtr = (TObjectPtr<UMaterialInterface>_u_0)0x0;
      local_e8.AsyncActorToWorld.Rotation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      local_e8.AsyncActorToWorld.Rotation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      local_e8.AsyncActorToWorld.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_e8.AsyncActorToWorld.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_e8.AsyncActorToWorld.Scale3D.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_e8.AsyncActorToWorld.Scale3D.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      local_e8.Vector.field0_0x0._s_0.X = 0.0;
      local_e8.Vector_Low.field0_0x0._s_0.Z = 0.0;
      local_e8.Name.ComparisonIndex.Value = 0;
      local_e8.Name.Number = 0;
      local_e8.ParamType.Value = '\0';
      local_e8.Scalar = 0.0;
      local_e8.Scalar_Low = 0.0;
      local_e8.Color.field0_0x0.Bits = (FColor_u_0)0x0;
      local_e8.AsyncActorVelocity.field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_e8.bAsyncDataCopyIsValid = false;
      local_e8.AsyncActorVelocity.field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_e8.AsyncActorVelocity.field0_0x0._s_0.Y =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      if (0 < local_f0) {
        do {
          uVar6 = 0;
          if ((int)uVar7 < local_f0) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FParticleSysParam::operator=
                    (&local_e8,(FParticleSysParam *)((longlong)(int)uVar7 * 0xe0 + local_f8));
          if (local_e8.Name == this->BeamModule_Target->TargetName) {
            this->TargetActor = (AActor *)local_e8.Actor.field0_0x0;
            return;
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < local_f0);
      }
    }
  }
  return;
}

// SetBeamEndPoint @ 14812ef90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FParticleBeam2EmitterInstance::SetBeamEndPoint
          (FParticleBeam2EmitterInstance *this,TVector<double> *param_1)

{
  int *piVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  
  piVar1 = &(this->UserSetTargetArray).ArrayNum;
  if ((this->UserSetTargetArray).ArrayNum < 1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,1,&(this->UserSetTargetArray).AllocatorInstance,piVar1,
               &(this->UserSetTargetArray).ArrayMax);
  }
  uVar5 = *(undefined4 *)&param_1->field0_0x0;
  uVar6 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
  uVar7 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
  uVar8 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  if ((*piVar1 < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->UserSetTargetArray).AllocatorInstance.Data;
  *(undefined4 *)pFVar3 = uVar5;
  *(undefined4 *)(pFVar3 + 4) = uVar6;
  *(undefined4 *)(pFVar3 + 8) = uVar7;
  *(undefined4 *)(pFVar3 + 0xc) = uVar8;
  *(double *)(pFVar3 + 0x10) = dVar2;
  return;
}

// SetBeamSourcePoint @ 14812f070

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FParticleBeam2EmitterInstance::SetBeamSourcePoint
          (FParticleBeam2EmitterInstance *this,TVector<double> *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  uint uVar12;
  
  if (-1 < param_2) {
    iVar4 = (this->UserSetSourceArray).ArrayNum;
    piVar1 = &(this->UserSetSourceArray).ArrayNum;
    if (iVar4 < param_2 + 1) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,(param_2 - iVar4) + 1,&(this->UserSetSourceArray).AllocatorInstance,piVar1,
                 &(this->UserSetSourceArray).ArrayMax);
    }
    uVar7 = *(undefined4 *)&param_1->field0_0x0;
    uVar8 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
    uVar9 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
    uVar10 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
    dVar3 = (param_1->field0_0x0)._s_0.Z;
    uVar12 = 0;
    if (param_2 < *piVar1) {
      uVar12 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (this->UserSetSourceArray).AllocatorInstance.Data;
    pFVar2 = pFVar5 + (longlong)param_2 * 0x18;
    *(undefined4 *)pFVar2 = uVar7;
    *(undefined4 *)(pFVar2 + 4) = uVar8;
    *(undefined4 *)(pFVar2 + 8) = uVar9;
    *(undefined4 *)(pFVar2 + 0xc) = uVar10;
    *(double *)(pFVar5 + (longlong)param_2 * 0x18 + 0x10) = dVar3;
  }
  return;
}

// SetBeamSourceStrength @ 14812f180

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FParticleBeam2EmitterInstance::SetBeamSourceStrength
          (FParticleBeam2EmitterInstance *this,float param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  if (-1 < param_2) {
    iVar2 = (this->UserSetSourceStrengthArray).ArrayNum;
    piVar1 = &(this->UserSetSourceStrengthArray).ArrayNum;
    if (iVar2 < param_2 + 1) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(param_2 - iVar2) + 1,&(this->UserSetSourceStrengthArray).AllocatorInstance,
                 piVar1,&(this->UserSetSourceStrengthArray).ArrayMax);
    }
    uVar5 = 0;
    if (param_2 < *piVar1) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(float *)((this->UserSetSourceStrengthArray).AllocatorInstance.Data + (longlong)param_2 * 4) =
         param_1;
  }
  return;
}

// SetBeamSourceTangent @ 14812f260

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FParticleBeam2EmitterInstance::SetBeamSourceTangent
          (FParticleBeam2EmitterInstance *this,TVector<double> *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  uint uVar12;
  
  if (-1 < param_2) {
    iVar4 = (this->UserSetSourceTangentArray).ArrayNum;
    piVar1 = &(this->UserSetSourceTangentArray).ArrayNum;
    if (iVar4 < param_2 + 1) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,(param_2 - iVar4) + 1,&(this->UserSetSourceTangentArray).AllocatorInstance,
                 piVar1,&(this->UserSetSourceTangentArray).ArrayMax);
    }
    uVar7 = *(undefined4 *)&param_1->field0_0x0;
    uVar8 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
    uVar9 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
    uVar10 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
    dVar3 = (param_1->field0_0x0)._s_0.Z;
    uVar12 = 0;
    if (param_2 < *piVar1) {
      uVar12 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (this->UserSetSourceTangentArray).AllocatorInstance.Data;
    pFVar2 = pFVar5 + (longlong)param_2 * 0x18;
    *(undefined4 *)pFVar2 = uVar7;
    *(undefined4 *)(pFVar2 + 4) = uVar8;
    *(undefined4 *)(pFVar2 + 8) = uVar9;
    *(undefined4 *)(pFVar2 + 0xc) = uVar10;
    *(double *)(pFVar5 + (longlong)param_2 * 0x18 + 0x10) = dVar3;
  }
  return;
}

// SetBeamTargetPoint @ 14812f370

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FParticleBeam2EmitterInstance::SetBeamTargetPoint
          (FParticleBeam2EmitterInstance *this,TVector<double> *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  uint uVar12;
  
  if (-1 < param_2) {
    iVar4 = (this->UserSetTargetArray).ArrayNum;
    piVar1 = &(this->UserSetTargetArray).ArrayNum;
    if (iVar4 < param_2 + 1) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,(param_2 - iVar4) + 1,&(this->UserSetTargetArray).AllocatorInstance,piVar1,
                 &(this->UserSetTargetArray).ArrayMax);
    }
    uVar7 = *(undefined4 *)&param_1->field0_0x0;
    uVar8 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
    uVar9 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
    uVar10 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
    dVar3 = (param_1->field0_0x0)._s_0.Z;
    uVar12 = 0;
    if (param_2 < *piVar1) {
      uVar12 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (this->UserSetTargetArray).AllocatorInstance.Data;
    pFVar2 = pFVar5 + (longlong)param_2 * 0x18;
    *(undefined4 *)pFVar2 = uVar7;
    *(undefined4 *)(pFVar2 + 4) = uVar8;
    *(undefined4 *)(pFVar2 + 8) = uVar9;
    *(undefined4 *)(pFVar2 + 0xc) = uVar10;
    *(double *)(pFVar5 + (longlong)param_2 * 0x18 + 0x10) = dVar3;
  }
  return;
}

// SetBeamTargetStrength @ 14812f480

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FParticleBeam2EmitterInstance::SetBeamTargetStrength
          (FParticleBeam2EmitterInstance *this,float param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  if (-1 < param_2) {
    iVar2 = (this->UserSetTargetStrengthArray).ArrayNum;
    piVar1 = &(this->UserSetTargetStrengthArray).ArrayNum;
    if (iVar2 < param_2 + 1) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(param_2 - iVar2) + 1,&(this->UserSetTargetStrengthArray).AllocatorInstance,
                 piVar1,&(this->UserSetTargetStrengthArray).ArrayMax);
    }
    uVar5 = 0;
    if (param_2 < *piVar1) {
      uVar5 = (uint)~param_2 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(float *)((this->UserSetTargetStrengthArray).AllocatorInstance.Data + (longlong)param_2 * 4) =
         param_1;
  }
  return;
}

// SetBeamTargetTangent @ 14812f560

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FParticleBeam2EmitterInstance::SetBeamTargetTangent
          (FParticleBeam2EmitterInstance *this,TVector<double> *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  uint uVar12;
  
  if (-1 < param_2) {
    iVar4 = (this->UserSetTargetTangentArray).ArrayNum;
    piVar1 = &(this->UserSetTargetTangentArray).ArrayNum;
    if (iVar4 < param_2 + 1) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,(param_2 - iVar4) + 1,&(this->UserSetTargetTangentArray).AllocatorInstance,
                 piVar1,&(this->UserSetTargetTangentArray).ArrayMax);
    }
    uVar7 = *(undefined4 *)&param_1->field0_0x0;
    uVar8 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
    uVar9 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
    uVar10 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
    dVar3 = (param_1->field0_0x0)._s_0.Z;
    uVar12 = 0;
    if (param_2 < *piVar1) {
      uVar12 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (this->UserSetTargetTangentArray).AllocatorInstance.Data;
    pFVar2 = pFVar5 + (longlong)param_2 * 0x18;
    *(undefined4 *)pFVar2 = uVar7;
    *(undefined4 *)(pFVar2 + 4) = uVar8;
    *(undefined4 *)(pFVar2 + 8) = uVar9;
    *(undefined4 *)(pFVar2 + 0xc) = uVar10;
    *(double *)(pFVar5 + (longlong)param_2 * 0x18 + 0x10) = dVar3;
  }
  return;
}

// SetCurrentLODIndex @ 14812f6c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FParticleBeam2EmitterInstance::SetCurrentLODIndex
          (FParticleBeam2EmitterInstance *this,int param_1,bool param_2)

{
  UParticleModuleTypeDataBeam2 *pUVar1;
  UParticleModuleTypeDataBeam2 *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  FParticleEmitterInstance::SetCurrentLODIndex((FParticleEmitterInstance *)this,param_1,param_2);
  uVar5 = (uint)this->_padding_;
  pUVar1 = this->BeamTypeData;
  uVar6 = 0;
  if ((int)uVar5 < (pUVar1->LOD_BeamModule_Source).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar2 = this->BeamTypeData;
  uVar6 = (uint)this->_padding_;
  this->BeamModule_Source =
       *(UParticleModuleBeamSource **)
        ((pUVar1->LOD_BeamModule_Source).AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
  uVar5 = 0;
  if ((int)uVar6 < (pUVar2->LOD_BeamModule_Target).ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar1 = this->BeamTypeData;
  uVar5 = (uint)this->_padding_;
  this->BeamModule_Target =
       *(UParticleModuleBeamTarget **)
        ((pUVar2->LOD_BeamModule_Target).AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
  uVar6 = 0;
  if ((int)uVar5 < (pUVar1->LOD_BeamModule_Noise).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar2 = this->BeamTypeData;
  uVar6 = (uint)this->_padding_;
  this->BeamModule_Noise =
       *(UParticleModuleBeamNoise **)
        ((pUVar1->LOD_BeamModule_Noise).AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
  uVar5 = 0;
  if ((int)uVar6 < (pUVar2->LOD_BeamModule_SourceModifier).ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar1 = this->BeamTypeData;
  uVar5 = (uint)this->_padding_;
  this->BeamModule_SourceModifier =
       *(UParticleModuleBeamModifier **)
        ((pUVar2->LOD_BeamModule_SourceModifier).AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
  uVar6 = 0;
  if ((int)uVar5 < (pUVar1->LOD_BeamModule_TargetModifier).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->BeamModule_TargetModifier =
       *(UParticleModuleBeamModifier **)
        ((pUVar1->LOD_BeamModule_TargetModifier).AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
  return;
}

// SetupBeamModifierModulesOffsets @ 148131b20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FParticleBeam2EmitterInstance::SetupBeamModifierModulesOffsets(FParticleBeam2EmitterInstance *this)

{
  UParticleModuleTypeDataBeam2 *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint *puVar4;
  
  if (this->BeamTypeData == (UParticleModuleTypeDataBeam2 *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("BeamTypeData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeam2EmitterInstance.cpp"
                       ,0x3d4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar1 = this->BeamTypeData;
  if (0 < (pUVar1->LOD_BeamModule_SourceModifier).ArrayNum) {
    puVar4 = TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
             ::Find((TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
                     *)(this->_padding_ + 0x60),
                    *(UParticleModule **)
                     (pUVar1->LOD_BeamModule_SourceModifier).AllocatorInstance.Data);
    if (puVar4 != (uint *)0x0) {
      this->BeamModule_SourceModifier_Offset = *puVar4;
    }
  }
  if (0 < (pUVar1->LOD_BeamModule_TargetModifier).ArrayNum) {
    puVar4 = TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
             ::Find((TMapBase<UParticleModule_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UParticleModule_*,unsigned_int,0>_>
                     *)(this->_padding_ + 0x60),
                    *(UParticleModule **)
                     (pUVar1->LOD_BeamModule_TargetModifier).AllocatorInstance.Data);
    if (puVar4 != (uint *)0x0) {
      this->BeamModule_TargetModifier_Offset = *puVar4;
    }
  }
  return;
}

// SpawnBeamParticles @ 148135ef0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall
FParticleBeam2EmitterInstance::SpawnBeamParticles
          (FParticleBeam2EmitterInstance *this,float param_1,float param_2,float param_3,int param_4
          ,float param_5)

{
  int *piVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_BeamSpawnTime> FVar11;
  FThreadSafeStaticStat<FStat_STAT_BeamParticles> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  int iVar15;
  int iVar16;
  FName FVar17;
  int iVar18;
  uchar auVar19 [8];
  FNameEntryId FVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  FName local_res8;
  FColor_u_0 local_res10 [2];
  FName local_f8;
  FName local_f0;
  FName local_e0;
  LARGE_INTEGER local_d8;
  FStatMessage local_d0;
  FStatMessage local_c0;
  FStatMessage local_b0;
  FName local_a0;
  FName local_98;
  FName local_90 [11];
  
  FVar11 = StatPtr_STAT_BeamSpawnTime;
  if (StatPtr_STAT_BeamSpawnTime == (FThreadSafeStaticStat<FStat_STAT_BeamSpawnTime>)0x0) {
    pFVar10 = ::FName::FName(&local_a0,"STAT_BeamSpawnTime");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_BeamSpawnTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BeamSpawnTime,*pFVar10,
                        L"Beam Spawn Time GT","STATGROUP_Particles","STATCAT_Advanced",L"Particles",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar4 = false;
  bVar6 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  if ((FVar17.ComparisonIndex.Value.Value != 0) || (FVar17.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.ComparisonIndex.Value = FVar17.ComparisonIndex.Value.Value;
        local_res8.Number = FVar17.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeam2EmitterInstance.cpp"
                   ,0x32d);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_f8 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar5 = true;
      goto LAB_148136055;
    }
  }
  bVar5 = false;
  FVar17 = local_f0;
LAB_148136055:
  fVar23 = __real_3f800000 / param_2;
  fVar21 = param_2 * param_3 + param_1;
  iVar15 = (int)ROUND((fVar21 + fVar21) - __real_3f000000) >> 1;
  iVar16 = iVar15;
  if (iVar15 < param_4) {
    iVar16 = param_4;
  }
  fVar22 = fVar21 - (float)iVar15;
  if (__real_38d1b717 < param_5) {
    fVar22 = (fVar21 - (float)iVar15) - param_5 / (float)param_4;
    if (fVar22 <= 0.0) {
      fVar22 = 0.0;
    }
  }
  iVar15 = *(int *)((longlong)&this->_padding_ + 4);
  if ((iVar15 == 0) && (iVar16 == 0)) {
    iVar16 = 1;
  }
  iVar18 = this->BeamCount - iVar15;
  if (iVar15 + iVar16 <= this->BeamCount) {
    iVar18 = iVar16;
  }
  iVar15 = iVar15 + iVar18;
  if ((iVar15 < *(int *)((longlong)&this->_padding_ + 4)) ||
     (cVar7 = (**(code **)(this->_padding_ + 0x18))(this,(int)SQRT((float)iVar15) + 1 + iVar15),
     cVar7 == '\x01')) {
    if ((this->_padding_ == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("LODLevel",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeam2EmitterInstance.cpp"
                           ,0x366,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      fVar21 = (float)(*pcVar3)();
      return fVar21;
    }
    FParticleEmitterInstance::SpawnParticles
              ((FParticleEmitterInstance *)this,iVar18,(fVar23 * param_1 + param_3) - fVar23,fVar23,
               (TVector<double> *)&this->_padding_,&UE::Math::TVector<double>::ZeroVector,
               (FParticleEventInstancePayload *)0x0);
    if (0 < this->ForceSpawnCount) {
      this->ForceSpawnCount = 0;
    }
    auVar19 = (uchar  [8])(longlong)*(int *)((longlong)&this->_padding_ + 4);
    if ((auVar19 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
      FVar12 = StatPtr_STAT_BeamParticles;
      if (StatPtr_STAT_BeamParticles == (FThreadSafeStaticStat<FStat_STAT_BeamParticles>)0x0) {
        pFVar10 = ::FName::FName(local_90,"STAT_BeamParticles");
        FVar12 = (FThreadSafeStaticStat<FStat_STAT_BeamParticles>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BeamParticles,*pFVar10,
                            L"Beam Particles","STATGROUP_Particles","STATCAT_Advanced",L"Particles",
                            true,true,ST_int64,false,false,MCR_Invalid);
      }
      FVar2 = *(FName *)FVar12;
      FVar20 = FVar2.ComparisonIndex.Value;
      uVar9 = FVar2.Number;
      local_res8.ComparisonIndex.Value = FVar20.Value;
      local_res8.Number = uVar9;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar13 == (FThreadStats *)0x0) {
          pFVar14 = FThreadStatsPool::Get();
          pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
        }
        local_c0.NameAndInfo.Number = uVar9 & 0xffffafff | 0xa000;
        local_e0 = FVar2;
        local_c0.StatData.Pad = auVar19;
        local_c0.NameAndInfo.Index.Value = FVar20.Value;
        FThreadStats::AddStatMessage(pFVar13,&local_c0);
        FStatsTrace::Add(&local_e0,(long64)auVar19);
        if (pFVar13->ScopeCount == 0) {
          FThreadStats::Flush(pFVar13,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar13,false,false);
        }
      }
    }
  }
  else {
    auVar19 = (uchar  [8])(longlong)*(int *)((longlong)&this->_padding_ + 4);
    fVar22 = param_1;
    if ((auVar19 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
      FVar12 = StatPtr_STAT_BeamParticles;
      if (StatPtr_STAT_BeamParticles == (FThreadSafeStaticStat<FStat_STAT_BeamParticles>)0x0) {
        pFVar10 = ::FName::FName(&local_98,"STAT_BeamParticles");
        FVar12 = (FThreadSafeStaticStat<FStat_STAT_BeamParticles>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BeamParticles,*pFVar10,
                            L"Beam Particles","STATGROUP_Particles","STATCAT_Advanced",L"Particles",
                            true,true,ST_int64,false,false,MCR_Invalid);
      }
      FVar2 = *(FName *)FVar12;
      FVar20 = FVar2.ComparisonIndex.Value;
      uVar9 = FVar2.Number;
      local_res8.ComparisonIndex.Value = FVar20.Value;
      local_res8.Number = uVar9;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar13 == (FThreadStats *)0x0) {
          pFVar14 = FThreadStatsPool::Get();
          pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
        }
        local_d0.NameAndInfo.Number = uVar9 & 0xffffafff | 0xa000;
        local_f8 = FVar2;
        local_d0.StatData.Pad = auVar19;
        local_d0.NameAndInfo.Index.Value = FVar20.Value;
        FThreadStats::AddStatMessage(pFVar13,&local_d0);
        FStatsTrace::Add(&local_f8,(long64)auVar19);
        if (pFVar13->ScopeCount == 0) {
          FThreadStats::Flush(pFVar13,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar13,false,false);
        }
      }
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar17 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_b0.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_b0.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_d8);
      local_b0.StatData.Pad[4] = '\0';
      local_b0.StatData.Pad[5] = '\0';
      local_b0.StatData.Pad[6] = '\0';
      local_b0.StatData.Pad[7] = '\0';
      local_b0.StatData.Pad[0] = local_d8.s.LowPart._0_1_;
      local_b0.StatData.Pad[1] = local_d8.s.LowPart._1_1_;
      local_b0.StatData.Pad[2] = local_d8.s.LowPart._2_1_;
      local_b0.StatData.Pad[3] = local_d8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar13,&local_b0);
      piVar1 = &pFVar13->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
  }
  return fVar22;
}

// Tick @ 148139030

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FParticleBeam2EmitterInstance::Tick(FParticleBeam2EmitterInstance *this,float param_1,bool param_2)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  FName FVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_BeamTickTime> FVar15;
  UObject *pUVar16;
  FThreadSafeStaticStat<FStat_STAT_BeamParticlesUpdateCalls> FVar17;
  FThreadStats *pFVar18;
  FThreadStatsPool *pFVar19;
  FNameEntryId FVar20;
  FName FVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint local_res8;
  uint uStackX_c;
  float local_res10 [2];
  FColor_u_0 local_res20 [2];
  FName local_b8;
  FName local_b0;
  LARGE_INTEGER local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FStatMessage local_80;
  FStatMessage local_70 [3];
  
  FVar15 = StatPtr_STAT_BeamTickTime;
  local_res10[0] = param_1;
  if (StatPtr_STAT_BeamTickTime == (FThreadSafeStaticStat<FStat_STAT_BeamTickTime>)0x0) {
    pFVar14 = ::FName::FName(&local_a0,"STAT_BeamTickTime");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_BeamTickTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BeamTickTime,*pFVar14,
                        L"Beam Tick Time GT","STATGROUP_Particles","STATCAT_Advanced",L"Particles",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar15;
  bVar8 = false;
  bVar10 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  FVar20 = FVar21.ComparisonIndex.Value;
  uVar13 = FVar21.Number;
  if ((FVar20.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8.ComparisonIndex.Value = FVar20.Value;
        local_b8.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b8,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeam2EmitterInstance.cpp"
                   ,0x1d9);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar20.Value;
      uStackX_c = uVar13;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar9 = true;
      goto LAB_14813917c;
    }
  }
  bVar9 = false;
  FVar21 = local_90;
LAB_14813917c:
  lVar4 = this->_padding_;
  if ((lVar4 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("LODLevel",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeam2EmitterInstance.cpp"
                          ,0x1dc,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  (**(code **)(this->_padding_ + 0x28))(this,local_res10[0]);
  if ((this->_padding_ & 1) == 0) {
    FParticleEmitterInstance::FakeBursts((FParticleEmitterInstance *)this);
  }
  else {
    (**(code **)(this->_padding_ + 0xe0))();
    if ((((this->_padding_ & 0x30) != 0) || (param_2)) ||
       (*(float *)&this->_padding_ <= 0.0 && *(float *)&this->_padding_ != 0.0)) {
      if ((this->_padding_ & 0x400) != 0) {
        FParticleEmitterInstance::FakeBursts((FParticleEmitterInstance *)this);
      }
    }
    else {
      iVar3 = *(int *)(*(longlong *)(lVar4 + 0x30) + 0x114);
      if (((iVar3 == 0) || ((int)this->_padding_ < iVar3)) ||
         (fVar22 = (float)iVar3 * *(float *)&this->_padding_,
         pfVar2 = (float *)((longlong)&this->_padding_ + 4), *pfVar2 <= fVar22 && fVar22 != *pfVar2)
         ) {
        lVar5 = *(longlong *)(lVar4 + 0x50);
        pUVar16 = (UObject *)(**(code **)(*(longlong *)this->_padding_ + 8))();
        fVar22 = FRawDistributionFloat::GetValue
                           ((FRawDistributionFloat *)(lVar5 + 0x38),*(float *)&this->_padding_,
                            pUVar16,(FRandomStream *)0x0);
        local_res8 = 0;
        fVar23 = (float)(**(code **)(this->_padding_ + 0x98))(this,local_res10,&local_res8);
        fVar22 = fVar22 + fVar23;
        if (local_res10[0] <= 0.0) {
          fVar24 = 0.0;
        }
        else {
          fVar24 = __real_3f800000 / local_res10[0];
        }
        uVar13 = this->BeamCount;
        if (*(int *)((longlong)&this->_padding_ + 4) < (int)uVar13) {
          if (fVar22 <= 0.0) {
            fVar22 = fVar24;
          }
          if ((this->BeamTypeData->bAlwaysOn != 0) &&
             (local_res8 = uVar13, __real_38d1b717 < local_res10[0])) {
            fVar23 = (float)(int)uVar13 * fVar24;
            fVar22 = fVar22 + fVar23;
          }
        }
        if (0.0 < fVar22) {
          fVar22 = SpawnBeamParticles(this,*(float *)&this->_padding_,fVar22,local_res10[0],
                                      local_res8,fVar23);
          *(float *)&this->_padding_ = fVar22;
        }
      }
    }
    (**(code **)(this->_padding_ + 0xa0))(this,local_res10[0]);
    this->_padding_ = *(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x30);
    (**(code **)(this->_padding_ + 0x38))(this,local_res10[0],lVar4);
    (**(code **)(this->_padding_ + 0x40))(this,local_res10[0]);
    (**(code **)(this->_padding_ + 0x68))(this,local_res10[0]);
    if (!param_2) {
      this->FirstEmission = false;
    }
    this->TickCount = this->TickCount + 1;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  }
  *(float *)&this->_padding_ = *(float *)&this->_padding_ + *(float *)&this->_padding_;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar11;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (FThreadStats::bPrimaryEnable != false) {
    FVar17 = StatPtr_STAT_BeamParticlesUpdateCalls;
    if (StatPtr_STAT_BeamParticlesUpdateCalls ==
        (FThreadSafeStaticStat<FStat_STAT_BeamParticlesUpdateCalls>)0x0) {
      pFVar14 = ::FName::FName(&local_98,"STAT_BeamParticlesUpdateCalls");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_BeamParticlesUpdateCalls>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BeamParticlesUpdateCalls,
                          *pFVar14,L"Beam Ptcl Update Calls","STATGROUP_BeamParticles",
                          "STATCAT_Advanced",L"Beam Particles",true,true,ST_int64,false,false,
                          MCR_Invalid);
    }
    FVar6 = *(FName *)FVar17;
    FVar20 = FVar6.ComparisonIndex.Value;
    uVar13 = FVar6.Number;
    local_res8 = FVar20.Value;
    uStackX_c = uVar13;
    if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      local_80.NameAndInfo.Number = uVar13 & 0xffffafff | 0xa000;
      local_80.StatData.Pad[0] = '\x01';
      local_80.StatData.Pad[1] = '\0';
      local_80.StatData.Pad[2] = '\0';
      local_80.StatData.Pad[3] = '\0';
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_b0 = FVar6;
      local_80.NameAndInfo.Index.Value = FVar20.Value;
      FThreadStats::AddStatMessage(pFVar18,&local_80);
      FStatsTrace::Add(&local_b0,1);
      if (pFVar18->ScopeCount == 0) {
        FThreadStats::Flush(pFVar18,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar18,false,false);
      }
    }
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar9) && (FVar21 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar18 == (FThreadStats *)0x0) {
      pFVar19 = FThreadStatsPool::Get();
      pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
    }
    if (pFVar18->bWaitForExplicitFlush < pFVar18->ScopeCount) {
      local_70[0].NameAndInfo.Index = FVar21.ComparisonIndex.Value;
      local_70[0].NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a8);
      local_70[0].StatData.Pad[4] = '\0';
      local_70[0].StatData.Pad[5] = '\0';
      local_70[0].StatData.Pad[6] = '\0';
      local_70[0].StatData.Pad[7] = '\0';
      local_70[0].StatData.Pad[0] = local_a8.s.LowPart._0_1_;
      local_70[0].StatData.Pad[1] = local_a8.s.LowPart._1_1_;
      local_70[0].StatData.Pad[2] = local_a8.s.LowPart._2_1_;
      local_70[0].StatData.Pad[3] = local_a8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar18,local_70);
      piVar1 = &pFVar18->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar18,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar18,false,false);
      }
    }
  }
  return;
}

// Tick_ModulePostUpdate @ 14813bbe0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FParticleBeam2EmitterInstance::Tick_ModulePostUpdate
          (FParticleBeam2EmitterInstance *this,float param_1,UParticleLODLevel *param_2)

{
  UParticleModuleBeamSource *pUVar1;
  code *pcVar2;
  UParticleModuleBeamModifier *pUVar3;
  UParticleModuleBeamTarget *pUVar4;
  UParticleModuleBeamNoise *pUVar5;
  UParticleModuleTypeDataBase *pUVar6;
  FParticleBeam2EmitterInstance *local_28;
  uint local_20;
  float local_1c;
  
  if ((param_2->TypeDataModule).field0_0x0.DebugPtr != (UParticleModuleTypeDataBase *)0x0) {
    pUVar1 = this->BeamModule_Source;
    if ((pUVar1 != (UParticleModuleBeamSource *)0x0) && ((char)pUVar1->_padding_ < '\0')) {
      pcVar2 = *(code **)(pUVar1->_padding_ + 0x2c0);
      local_20 = FParticleEmitterInstance::GetModuleDataOffset
                           ((FParticleEmitterInstance *)this,(UParticleModule *)pUVar1);
      local_28 = this;
      local_1c = param_1;
      (*pcVar2)(pUVar1,&local_28);
    }
    pUVar3 = this->BeamModule_SourceModifier;
    if ((pUVar3 != (UParticleModuleBeamModifier *)0x0) && ((char)pUVar3->_padding_ < '\0')) {
      local_20 = this->BeamModule_SourceModifier_Offset;
      local_28 = this;
      local_1c = param_1;
      (**(code **)(pUVar3->_padding_ + 0x2c0))(pUVar3,&local_28);
    }
    pUVar4 = this->BeamModule_Target;
    if ((pUVar4 != (UParticleModuleBeamTarget *)0x0) && ((char)pUVar4->_padding_ < '\0')) {
      pcVar2 = *(code **)(pUVar4->_padding_ + 0x2c0);
      local_20 = FParticleEmitterInstance::GetModuleDataOffset
                           ((FParticleEmitterInstance *)this,(UParticleModule *)pUVar4);
      local_28 = this;
      local_1c = param_1;
      (*pcVar2)(pUVar4,&local_28);
    }
    pUVar3 = this->BeamModule_TargetModifier;
    if ((pUVar3 != (UParticleModuleBeamModifier *)0x0) && ((char)pUVar3->_padding_ < '\0')) {
      local_20 = this->BeamModule_TargetModifier_Offset;
      local_28 = this;
      local_1c = param_1;
      (**(code **)(pUVar3->_padding_ + 0x2c0))(pUVar3,&local_28);
    }
    pUVar5 = this->BeamModule_Noise;
    if ((pUVar5 != (UParticleModuleBeamNoise *)0x0) && ((char)pUVar5->_padding_ < '\0')) {
      pcVar2 = *(code **)(pUVar5->_padding_ + 0x2c0);
      local_20 = FParticleEmitterInstance::GetModuleDataOffset
                           ((FParticleEmitterInstance *)this,(UParticleModule *)pUVar5);
      local_28 = this;
      local_1c = param_1;
      (*pcVar2)(pUVar5,&local_28);
    }
    pUVar6 = (param_2->TypeDataModule).field0_0x0.DebugPtr;
    if (pUVar6 != (UParticleModuleTypeDataBase *)0x0) {
      local_20 = *(undefined4 *)((longlong)&this->_padding_ + 4);
      local_28 = this;
      local_1c = param_1;
      (**(code **)(*(longlong *)pUVar6 + 0x2c0))(pUVar6,&local_28);
    }
  }
  return;
}

// UpdateBoundingBox @ 14813e8b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FParticleBeam2EmitterInstance::UpdateBoundingBox(FParticleBeam2EmitterInstance *this,float param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  byte bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  bool bVar12;
  longlong lVar13;
  uint uVar14;
  float fVar15;
  char cVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_ParticleUpdateBounds> FVar18;
  longlong lVar19;
  uint uVar20;
  char cVar21;
  FColor_u_0 FVar22;
  FName FVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  double *pdVar26;
  undefined1 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  double dVar35;
  undefined8 uVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  float fVar48;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FName local_res18;
  float local_res20 [2];
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined1 (*local_190) [16];
  FName local_188;
  FName local_180;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  double local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_e0;
  undefined7 uStack_df;
  
  FVar18 = StatPtr_STAT_ParticleUpdateBounds;
  if (StatPtr_STAT_ParticleUpdateBounds ==
      (FThreadSafeStaticStat<FStat_STAT_ParticleUpdateBounds>)0x0) {
    pFVar17 = ::FName::FName(&local_res18,"STAT_ParticleUpdateBounds");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_ParticleUpdateBounds>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ParticleUpdateBounds,*pFVar17,
                        L"Update Bounds Time GT","STATGROUP_Particles","STATCAT_Advanced",
                        L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar18;
  uVar27 = 0;
  local_180.ComparisonIndex.Value = 0;
  local_180.Number = 0;
  local_res8.Bits = local_res8.Bits & 0xffffff00;
  FVar22.Bits = (uint)FVar23.ComparisonIndex.Value;
  uVar20 = FVar23.Number;
  if ((FVar22.Bits != 0) || (uVar20 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      uVar27 = 1;
      local_res8._s_0.B = 1;
      if (-1 < CpuChannel->Enabled) {
        local_res8.Bits = FVar22.Bits;
        uStackX_c = uVar20;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8._s_0,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleBeam2EmitterInstance.cpp"
                   ,0x27d);
        uVar27 = 3;
        local_res8._s_0.B = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.Bits = FVar22.Bits;
      uStackX_c = uVar20;
      local_188 = FVar23;
      FThreadStats::AddMessage(FVar23,CycleScopeStart);
      local_res8.Bits = CONCAT31(local_res8.Bits._1_3_,uVar27) | 4;
      uVar27 = uVar27 | 4;
      goto LAB_14813ea4d;
    }
  }
  local_188 = local_180;
  FVar23 = local_180;
LAB_14813ea4d:
  lVar19 = (**(code **)(*(longlong *)this->_padding_ + 0xd8))();
  cVar16 = (**(code **)(*(longlong *)this->_padding_ + 0x100))();
  uVar51 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  fVar48 = __real_3f800000;
  if (((cVar16 == '\0') && (lVar19 != 0)) && ((*(byte *)(lVar19 + 0xf4) & 2) == 0)) {
    local_res18.ComparisonIndex.Value._0_1_ = '\x01';
    this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    this->_padding_ = uVar51;
    this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar30 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    lVar13 = this->_padding_;
    uVar34 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    *(undefined1 *)&this->_padding_ = 0;
    lVar19 = this->_padding_;
    *(int *)&this->_padding_ = (int)this->_padding_;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar30;
    *(int *)&this->_padding_ = (int)lVar13;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar34;
    this->_padding_ = lVar19;
    lVar19 = (**(code **)(*(longlong *)this->_padding_ + 0x10))();
    dVar35 = *(double *)(lVar19 + 0x30);
    auVar5 = *(undefined1 (*) [16])(lVar19 + 0x20);
    uVar30 = auVar5._0_4_;
    uVar34 = auVar5._4_4_;
    uVar29 = auVar5._8_4_;
    uVar33 = auVar5._12_4_;
    if ((char)this->_padding_ == '\0') {
      this->_padding_ = auVar5._0_8_;
      this->_padding_ = auVar5._8_8_;
      *(undefined1 *)&this->_padding_ = 1;
      this->_padding_ = auVar5._0_8_;
      this->_padding_ = auVar5._8_8_;
      this->_padding_ = (longlong)dVar35;
      this->_padding_ = (longlong)dVar35;
    }
    else {
      dVar3 = (double)this->_padding_;
      uVar28 = uVar30;
      uVar32 = uVar34;
      if (dVar3 <= auVar5._0_8_) {
        uVar28 = SUB84(dVar3,0);
        uVar32 = (undefined4)((ulonglong)dVar3 >> 0x20);
      }
      dVar39 = auVar5._8_8_;
      dVar3 = (double)this->_padding_;
      if (auVar5._0_8_ <= dVar3) {
        uVar30 = SUB84(dVar3,0);
        uVar34 = (undefined4)((ulonglong)dVar3 >> 0x20);
      }
      this->_padding_ = CONCAT44(uVar32,uVar28);
      dVar3 = (double)this->_padding_;
      if (dVar3 <= dVar39) {
        uVar29 = SUB84(dVar3,0);
        uVar33 = (undefined4)((ulonglong)dVar3 >> 0x20);
      }
      if (dVar39 <= (double)this->_padding_) {
        dVar39 = (double)this->_padding_;
      }
      this->_padding_ = CONCAT44(uVar34,uVar30);
      this->_padding_ = CONCAT44(uVar33,uVar29);
      uVar30 = SUB84(dVar35,0);
      uVar34 = (undefined4)((ulonglong)dVar35 >> 0x20);
      dVar3 = (double)this->_padding_;
      if (dVar3 <= dVar35) {
        uVar30 = SUB84(dVar3,0);
        uVar34 = (undefined4)((ulonglong)dVar3 >> 0x20);
      }
      if (dVar35 <= (double)this->_padding_) {
        dVar35 = (double)this->_padding_;
      }
      this->_padding_ = (longlong)dVar39;
      this->_padding_ = CONCAT44(uVar34,uVar30);
      this->_padding_ = (longlong)dVar35;
    }
  }
  else {
    local_res18.ComparisonIndex.Value._0_1_ = '\0';
  }
  dVar3 = 0.0;
  dVar35 = 0.0;
  if (this->BeamModule_Noise != (UParticleModuleBeamNoise *)0x0) {
    FRawDistributionVector::GetOutRange
              (&this->BeamModule_Noise->NoiseRange,local_res20,(float *)&local_190);
    dVar3 = (double)local_res20[0];
    dVar35 = (double)local_190._0_4_;
  }
  lVar19 = (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  cVar16 = (char)local_res18.ComparisonIndex.Value;
  fVar15 = __real_40c90fdb;
  uVar14 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar20 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar24 = 0;
  uVar49 = *(undefined8 *)(lVar19 + 0x40);
  uVar50 = *(undefined8 *)(lVar19 + 0x48);
  uVar51 = *(double *)(lVar19 + 0x50);
  bVar6 = *(byte *)(this->_padding_ + 0x37);
  if (0 < *(int *)((longlong)&this->_padding_ + 4)) {
    uVar30 = (undefined4)uVar49;
    uVar34 = (undefined4)((ulonglong)uVar49 >> 0x20);
    uVar29 = (undefined4)uVar50;
    uVar33 = (undefined4)((ulonglong)uVar50 >> 0x20);
    uVar25 = uVar24;
    local_128 = (double)uVar51;
    local_120 = uVar50;
    local_118 = uVar49;
    do {
      local_res20[0] = *(float *)((longlong)&this->_padding_ + 4);
      local_190 = (undefined1 (*) [16])0x0;
      local_130 = 0;
      local_138 = 0;
      local_140 = 0;
      local_148 = 0;
      local_150 = 0;
      local_158 = 0;
      local_160 = 0;
      local_168 = 0;
      local_170 = 0;
      pdVar26 = (double *)
                ((longlong)(int)((uint)*(ushort *)(this->_padding_ + uVar25) * (int)this->_padding_)
                + this->_padding_);
      uVar42 = *(uint *)((longlong)pdVar26 + 0x6c);
      *(uint *)((longlong)pdVar26 + 0x6c) = uVar42 & 0xfdffffff;
      (**(code **)(this->BeamTypeData->_padding_ + 0x3f0))
                (this->BeamTypeData,this,pdVar26,local_res20,&local_190,&local_130,&local_138,
                 &local_140,&local_148,&local_150,&local_158,&local_160,&local_168,&local_170,uVar49
                 ,uVar50,uVar51);
      *pdVar26 = pdVar26[3];
      pdVar26[1] = pdVar26[4];
      pdVar26[2] = pdVar26[5];
      if (((uVar42 >> 0x19 & 1) == 0) || ((~bVar6 & 1) == 0)) {
        bVar12 = false;
        dVar39 = (double)param_1;
        uVar7 = (double)*(float *)(pdVar26 + 9) * dVar39;
        uVar8 = (double)*(float *)(pdVar26 + 8) * dVar39;
        uVar36 = (double)*(float *)((longlong)pdVar26 + 0x44) * dVar39;
      }
      else {
        bVar12 = true;
        uVar36 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        uVar51 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
      dVar39 = (double)uVar8 + pdVar26[3];
      pdVar26[3] = dVar39;
      pdVar26[4] = (double)uVar36 + pdVar26[4];
      pdVar26[5] = (double)uVar7 + pdVar26[5];
      if (bVar12) {
        fVar31 = 0.0;
      }
      else {
        fVar31 = param_1 * *(float *)((longlong)pdVar26 + 0x5c);
      }
      *(float *)((longlong)pdVar26 + 0x3c) = fVar31 + *(float *)((longlong)pdVar26 + 0x3c);
      *pdVar26 = *pdVar26 + (double)this->_padding_;
      pdVar26[1] = pdVar26[1] + (double)this->_padding_;
      pdVar26[2] = (double)this->_padding_ + pdVar26[2];
      dVar41 = (double)*(float *)(pdVar26 + 0xc) * (double)CONCAT44(uVar34,uVar30);
      dVar10 = (double)*(float *)((longlong)pdVar26 + 100) * (double)CONCAT44(uVar33,uVar29);
      dVar11 = (double)*(float *)(pdVar26 + 0xd) * local_128;
      if (cVar16 != '\0') {
        cVar21 = (char)this->_padding_;
        plVar1 = &this->_padding_;
        plVar2 = &this->_padding_;
        if (cVar21 == '\0') {
          dVar39 = pdVar26[4];
          cVar21 = '\x01';
          this->_padding_ = (longlong)pdVar26[3];
          this->_padding_ = (longlong)dVar39;
          dVar39 = pdVar26[5];
          this->_padding_ = (longlong)dVar39;
          *(undefined1 *)&this->_padding_ = 1;
          this->_padding_ = this->_padding_;
          this->_padding_ = this->_padding_;
          this->_padding_ = (longlong)dVar39;
        }
        else {
          if ((double)this->_padding_ <= dVar39) {
            dVar39 = (double)this->_padding_;
          }
          this->_padding_ = (longlong)dVar39;
          dVar39 = pdVar26[4];
          uVar30 = SUB84(dVar39,0);
          uVar34 = (undefined4)((ulonglong)dVar39 >> 0x20);
          dVar4 = (double)this->_padding_;
          if (dVar4 <= dVar39) {
            uVar30 = SUB84(dVar4,0);
            uVar34 = (undefined4)((ulonglong)dVar4 >> 0x20);
          }
          this->_padding_ = CONCAT44(uVar34,uVar30);
          dVar39 = (double)this->_padding_;
          uVar30 = SUB84(dVar39,0);
          uVar34 = (undefined4)((ulonglong)dVar39 >> 0x20);
          dVar4 = pdVar26[5];
          if (dVar4 <= dVar39) {
            uVar30 = SUB84(dVar4,0);
            uVar34 = (undefined4)((ulonglong)dVar4 >> 0x20);
          }
          this->_padding_ = CONCAT44(uVar34,uVar30);
          dVar39 = pdVar26[3];
          if (pdVar26[3] <= (double)this->_padding_) {
            dVar39 = (double)this->_padding_;
          }
          this->_padding_ = (longlong)dVar39;
          dVar39 = pdVar26[4];
          uVar30 = SUB84(dVar39,0);
          uVar34 = (undefined4)((ulonglong)dVar39 >> 0x20);
          dVar4 = (double)*plVar1;
          if (dVar39 <= dVar4) {
            uVar30 = SUB84(dVar4,0);
            uVar34 = (undefined4)((ulonglong)dVar4 >> 0x20);
          }
          *plVar1 = CONCAT44(uVar34,uVar30);
          dVar39 = (double)*plVar2;
          if ((double)*plVar2 <= pdVar26[5]) {
            dVar39 = pdVar26[5];
          }
          *plVar2 = (longlong)dVar39;
        }
        dVar39 = dVar3 + pdVar26[3];
        dVar4 = dVar3 + pdVar26[4];
        dVar40 = dVar3 + pdVar26[5];
        if (cVar21 == '\0') {
          this->_padding_ = (longlong)dVar39;
          this->_padding_ = (longlong)dVar4;
          this->_padding_ = (longlong)dVar40;
          *(undefined1 *)&this->_padding_ = 1;
          this->_padding_ = this->_padding_;
          this->_padding_ = this->_padding_;
          this->_padding_ = this->_padding_;
        }
        else {
          dVar37 = dVar39;
          if ((double)this->_padding_ <= dVar39) {
            dVar37 = (double)this->_padding_;
          }
          dVar38 = (double)this->_padding_;
          if (dVar4 <= (double)this->_padding_) {
            dVar38 = dVar4;
          }
          this->_padding_ = (longlong)dVar37;
          dVar37 = (double)this->_padding_;
          if (dVar40 <= (double)this->_padding_) {
            dVar37 = dVar40;
          }
          this->_padding_ = (longlong)dVar38;
          if (dVar40 <= (double)*plVar2) {
            dVar40 = (double)*plVar2;
          }
          dVar38 = (double)this->_padding_;
          if ((double)this->_padding_ <= dVar39) {
            dVar38 = dVar39;
          }
          this->_padding_ = (longlong)dVar37;
          dVar39 = (double)*plVar1;
          if ((double)*plVar1 <= dVar4) {
            dVar39 = dVar4;
          }
          *plVar2 = (longlong)dVar40;
          this->_padding_ = (longlong)dVar38;
          *plVar1 = (longlong)dVar39;
        }
        cVar21 = (char)this->_padding_;
        dVar40 = dVar35 + pdVar26[3];
        dVar4 = dVar35 + pdVar26[4];
        dVar39 = dVar35 + pdVar26[5];
        if (cVar21 == '\0') {
          this->_padding_ = (longlong)dVar40;
          cVar21 = '\x01';
          *plVar1 = (longlong)dVar4;
          *plVar2 = (longlong)dVar39;
          *(undefined1 *)&this->_padding_ = 1;
          this->_padding_ = this->_padding_;
          this->_padding_ = this->_padding_;
          this->_padding_ = this->_padding_;
        }
        else {
          dVar37 = dVar4;
          if ((double)this->_padding_ <= dVar4) {
            dVar37 = (double)this->_padding_;
          }
          dVar38 = (double)this->_padding_;
          if (dVar40 <= (double)this->_padding_) {
            dVar38 = dVar40;
          }
          if (dVar40 <= (double)this->_padding_) {
            dVar40 = (double)this->_padding_;
          }
          this->_padding_ = (longlong)dVar37;
          this->_padding_ = (longlong)dVar38;
          dVar37 = (double)this->_padding_;
          if (dVar39 <= (double)this->_padding_) {
            dVar37 = dVar39;
          }
          this->_padding_ = (longlong)dVar40;
          if (dVar39 <= (double)*plVar2) {
            dVar39 = (double)*plVar2;
          }
          this->_padding_ = (longlong)dVar37;
          dVar40 = (double)*plVar1;
          if ((double)*plVar1 <= dVar4) {
            dVar40 = dVar4;
          }
          *plVar2 = (longlong)dVar39;
          *plVar1 = (longlong)dVar40;
        }
        dVar39 = *(double *)local_190[1];
        auVar5 = *local_190;
        uVar30 = auVar5._0_4_;
        uVar34 = auVar5._4_4_;
        uVar29 = auVar5._8_4_;
        uVar33 = auVar5._12_4_;
        if (cVar21 == '\0') {
          this->_padding_ = auVar5._0_8_;
          this->_padding_ = auVar5._8_8_;
          lVar19 = *(longlong *)local_190[1];
          this->_padding_ = lVar19;
          *(undefined1 *)&this->_padding_ = 1;
          this->_padding_ = this->_padding_;
          this->_padding_ = this->_padding_;
          this->_padding_ = lVar19;
        }
        else {
          dVar4 = (double)this->_padding_;
          uVar28 = uVar30;
          uVar32 = uVar34;
          if (dVar4 <= auVar5._0_8_) {
            uVar28 = SUB84(dVar4,0);
            uVar32 = (undefined4)((ulonglong)dVar4 >> 0x20);
          }
          dVar40 = auVar5._8_8_;
          dVar4 = (double)this->_padding_;
          if (auVar5._0_8_ <= dVar4) {
            uVar30 = SUB84(dVar4,0);
            uVar34 = (undefined4)((ulonglong)dVar4 >> 0x20);
          }
          this->_padding_ = CONCAT44(uVar32,uVar28);
          dVar4 = (double)this->_padding_;
          if (dVar4 <= dVar40) {
            uVar29 = SUB84(dVar4,0);
            uVar33 = (undefined4)((ulonglong)dVar4 >> 0x20);
          }
          if (dVar40 <= (double)*plVar1) {
            dVar40 = (double)*plVar1;
          }
          this->_padding_ = CONCAT44(uVar34,uVar30);
          this->_padding_ = CONCAT44(uVar33,uVar29);
          uVar30 = SUB84(dVar39,0);
          uVar34 = (undefined4)((ulonglong)dVar39 >> 0x20);
          dVar4 = (double)this->_padding_;
          if (dVar4 <= dVar39) {
            uVar30 = SUB84(dVar4,0);
            uVar34 = (undefined4)((ulonglong)dVar4 >> 0x20);
          }
          if (dVar39 <= (double)*plVar2) {
            dVar39 = (double)*plVar2;
          }
          *plVar1 = (longlong)dVar40;
          this->_padding_ = CONCAT44(uVar34,uVar30);
          *plVar2 = (longlong)dVar39;
        }
        cVar21 = (char)this->_padding_;
        dVar4 = *(double *)*local_190 + dVar3;
        dVar40 = *(double *)(*local_190 + 8) + dVar3;
        dVar39 = *(double *)local_190[1] + dVar3;
        if (cVar21 == '\0') {
          this->_padding_ = (longlong)dVar4;
          cVar21 = '\x01';
          *plVar1 = (longlong)dVar40;
          *plVar2 = (longlong)dVar39;
          *(undefined1 *)&this->_padding_ = 1;
          this->_padding_ = this->_padding_;
          this->_padding_ = this->_padding_;
          this->_padding_ = this->_padding_;
        }
        else {
          dVar37 = dVar4;
          if ((double)this->_padding_ <= dVar4) {
            dVar37 = (double)this->_padding_;
          }
          dVar38 = dVar40;
          if ((double)this->_padding_ <= dVar40) {
            dVar38 = (double)this->_padding_;
          }
          if (dVar4 <= (double)this->_padding_) {
            dVar4 = (double)this->_padding_;
          }
          if (dVar40 <= (double)*plVar1) {
            dVar40 = (double)*plVar1;
          }
          this->_padding_ = (longlong)dVar37;
          dVar37 = dVar39;
          if ((double)this->_padding_ <= dVar39) {
            dVar37 = (double)this->_padding_;
          }
          if (dVar39 <= (double)*plVar2) {
            dVar39 = (double)*plVar2;
          }
          this->_padding_ = (longlong)dVar38;
          this->_padding_ = (longlong)dVar4;
          *plVar1 = (longlong)dVar40;
          this->_padding_ = (longlong)dVar37;
          *plVar2 = (longlong)dVar39;
        }
        dVar39 = *(double *)local_190[1] + dVar35;
        dVar40 = *(double *)(*local_190 + 8) + dVar35;
        dVar4 = *(double *)*local_190 + dVar35;
        if (cVar21 == '\0') {
          this->_padding_ = (longlong)dVar4;
          *plVar1 = (longlong)dVar40;
          *plVar2 = (longlong)dVar39;
          *(undefined1 *)&this->_padding_ = 1;
          this->_padding_ = this->_padding_;
          this->_padding_ = this->_padding_;
          this->_padding_ = this->_padding_;
        }
        else {
          dVar37 = dVar4;
          if ((double)this->_padding_ <= dVar4) {
            dVar37 = (double)this->_padding_;
          }
          dVar38 = dVar40;
          if ((double)this->_padding_ <= dVar40) {
            dVar38 = (double)this->_padding_;
          }
          if (dVar4 <= (double)this->_padding_) {
            dVar4 = (double)this->_padding_;
          }
          if (dVar40 <= (double)*plVar1) {
            dVar40 = (double)*plVar1;
          }
          this->_padding_ = (longlong)dVar37;
          dVar37 = dVar39;
          if ((double)this->_padding_ <= dVar39) {
            dVar37 = (double)this->_padding_;
          }
          if (dVar39 <= (double)*plVar2) {
            dVar39 = (double)*plVar2;
          }
          this->_padding_ = (longlong)dVar38;
          this->_padding_ = (longlong)dVar4;
          *plVar1 = (longlong)dVar40;
          this->_padding_ = (longlong)dVar37;
          *plVar2 = (longlong)dVar39;
        }
        cVar21 = (char)this->_padding_;
        dVar39 = *(double *)(local_190[4] + 8);
        auVar5 = *(undefined1 (*) [16])(local_190[3] + 8);
        uVar30 = auVar5._0_4_;
        uVar34 = auVar5._4_4_;
        uVar29 = auVar5._8_4_;
        uVar33 = auVar5._12_4_;
        if (cVar21 == '\0') {
          this->_padding_ = auVar5._0_8_;
          this->_padding_ = auVar5._8_8_;
          cVar21 = '\x01';
          lVar19 = *(longlong *)(local_190[4] + 8);
          this->_padding_ = lVar19;
          *(undefined1 *)&this->_padding_ = 1;
          this->_padding_ = this->_padding_;
          this->_padding_ = this->_padding_;
          this->_padding_ = lVar19;
        }
        else {
          dVar4 = (double)this->_padding_;
          uVar28 = uVar30;
          uVar32 = uVar34;
          if (dVar4 <= auVar5._0_8_) {
            uVar28 = SUB84(dVar4,0);
            uVar32 = (undefined4)((ulonglong)dVar4 >> 0x20);
          }
          dVar40 = auVar5._8_8_;
          dVar4 = (double)this->_padding_;
          if (auVar5._0_8_ <= dVar4) {
            uVar30 = SUB84(dVar4,0);
            uVar34 = (undefined4)((ulonglong)dVar4 >> 0x20);
          }
          this->_padding_ = CONCAT44(uVar32,uVar28);
          dVar4 = (double)this->_padding_;
          if (dVar4 <= dVar40) {
            uVar29 = SUB84(dVar4,0);
            uVar33 = (undefined4)((ulonglong)dVar4 >> 0x20);
          }
          if (dVar40 <= (double)*plVar1) {
            dVar40 = (double)*plVar1;
          }
          this->_padding_ = CONCAT44(uVar34,uVar30);
          this->_padding_ = CONCAT44(uVar33,uVar29);
          uVar30 = SUB84(dVar39,0);
          uVar34 = (undefined4)((ulonglong)dVar39 >> 0x20);
          dVar4 = (double)this->_padding_;
          if (dVar4 <= dVar39) {
            uVar30 = SUB84(dVar4,0);
            uVar34 = (undefined4)((ulonglong)dVar4 >> 0x20);
          }
          if (dVar39 <= (double)*plVar2) {
            dVar39 = (double)*plVar2;
          }
          *plVar1 = (longlong)dVar40;
          this->_padding_ = CONCAT44(uVar34,uVar30);
          *plVar2 = (longlong)dVar39;
        }
        dVar39 = *(double *)(local_190[4] + 8) + dVar3;
        dVar40 = *(double *)local_190[4] + dVar3;
        dVar4 = *(double *)(local_190[3] + 8) + dVar3;
        if (cVar21 == '\0') {
          this->_padding_ = (longlong)dVar4;
          *plVar1 = (longlong)dVar40;
          *plVar2 = (longlong)dVar39;
          *(undefined1 *)&this->_padding_ = 1;
          this->_padding_ = this->_padding_;
          this->_padding_ = this->_padding_;
          this->_padding_ = this->_padding_;
        }
        else {
          dVar37 = (double)this->_padding_;
          if (dVar4 <= (double)this->_padding_) {
            dVar37 = dVar4;
          }
          dVar38 = (double)this->_padding_;
          if (dVar40 <= (double)this->_padding_) {
            dVar38 = dVar40;
          }
          this->_padding_ = (longlong)dVar37;
          dVar37 = dVar39;
          if ((double)this->_padding_ <= dVar39) {
            dVar37 = (double)this->_padding_;
          }
          if (dVar39 <= (double)*plVar2) {
            dVar39 = (double)*plVar2;
          }
          this->_padding_ = (longlong)dVar38;
          dVar38 = (double)this->_padding_;
          if ((double)this->_padding_ <= dVar4) {
            dVar38 = dVar4;
          }
          this->_padding_ = (longlong)dVar37;
          dVar4 = (double)*plVar1;
          if ((double)*plVar1 <= dVar40) {
            dVar4 = dVar40;
          }
          *plVar2 = (longlong)dVar39;
          this->_padding_ = (longlong)dVar38;
          *plVar1 = (longlong)dVar4;
        }
        uVar51 = *(undefined8 *)(local_190[4] + 8);
        dVar4 = *(double *)(local_190[3] + 8) + dVar35;
        dVar40 = *(double *)local_190[4] + dVar35;
        dVar39 = (double)uVar51 + dVar35;
        if ((char)this->_padding_ == '\0') {
          this->_padding_ = (longlong)dVar4;
          *plVar1 = (longlong)dVar40;
          *plVar2 = (longlong)dVar39;
          *(undefined1 *)&this->_padding_ = 1;
          this->_padding_ = this->_padding_;
          this->_padding_ = this->_padding_;
          this->_padding_ = this->_padding_;
        }
        else {
          dVar37 = (double)this->_padding_;
          if (dVar4 <= (double)this->_padding_) {
            dVar37 = dVar4;
          }
          dVar38 = (double)this->_padding_;
          if (dVar40 <= (double)this->_padding_) {
            dVar38 = dVar40;
          }
          this->_padding_ = (longlong)dVar37;
          this->_padding_ = (longlong)dVar38;
          dVar37 = (double)this->_padding_;
          if (dVar39 <= (double)this->_padding_) {
            dVar37 = dVar39;
          }
          dVar38 = (double)this->_padding_;
          if ((double)this->_padding_ <= dVar4) {
            dVar38 = dVar4;
          }
          this->_padding_ = (longlong)dVar37;
          this->_padding_ = (longlong)dVar38;
          dVar4 = (double)*plVar1;
          if ((double)*plVar1 <= dVar40) {
            dVar4 = dVar40;
          }
          dVar40 = (double)*plVar2;
          if ((double)*plVar2 <= dVar39) {
            dVar40 = dVar39;
          }
          *plVar1 = (longlong)dVar4;
          *plVar2 = (longlong)dVar40;
        }
      }
      fVar31 = FGenericPlatformMath::Fmod(*(float *)((longlong)pdVar26 + 0x3c),fVar15);
      uVar42 = SUB84(dVar10,0) & uVar20;
      uVar43 = (uint)((ulonglong)dVar10 >> 0x20) & uVar14;
      *(float *)((longlong)pdVar26 + 0x3c) = fVar31;
      uVar46 = SUB84(dVar11,0) & uVar20;
      uVar47 = (uint)((ulonglong)dVar11 >> 0x20) & uVar14;
      uVar44 = SUB84(dVar41,0) & uVar20;
      uVar45 = (uint)((ulonglong)dVar41 >> 0x20) & uVar14;
      if ((double)CONCAT44(uVar43,uVar42) <= (double)CONCAT44(uVar45,uVar44)) {
        uVar42 = uVar44;
        uVar43 = uVar45;
      }
      uVar44 = (int)uVar24 + 1;
      uVar24 = (ulonglong)uVar44;
      uVar25 = uVar25 + 2;
      if ((double)CONCAT44(uVar43,uVar42) <= (double)CONCAT44(uVar47,uVar46)) {
        uVar42 = uVar46;
        uVar43 = uVar47;
      }
      uVar29 = (undefined4)local_120;
      uVar33 = (undefined4)((ulonglong)local_120 >> 0x20);
      dVar39 = (double)CONCAT44(uVar43,uVar42);
      if ((double)CONCAT44(uVar43,uVar42) <= (double)fVar48) {
        dVar39 = (double)fVar48;
      }
      fVar48 = (float)dVar39;
      uVar30 = (undefined4)local_118;
      uVar34 = (undefined4)((ulonglong)local_118 >> 0x20);
    } while ((int)uVar44 < *(int *)((longlong)&this->_padding_ + 4));
    FVar23 = local_188;
    uVar27 = local_res8._s_0.B;
  }
  if ((char)local_res18.ComparisonIndex.Value != '\0') {
    dVar35 = (double)fVar48;
    local_e0 = 1;
    dVar41 = dVar35 + (double)this->_padding_;
    dVar3 = (double)this->_padding_ - dVar35;
    dVar39 = dVar35 + (double)this->_padding_;
    dVar10 = dVar35 + (double)this->_padding_;
    this->_padding_ = (longlong)((double)this->_padding_ - dVar35);
    this->_padding_ = (longlong)((double)this->_padding_ - dVar35);
    auVar5._8_4_ = SUB84(dVar41,0);
    auVar5._0_8_ = dVar3;
    auVar5._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
    this->_padding_ = (longlong)dVar3;
    this->_padding_ = auVar5._8_8_;
    auVar9._8_4_ = SUB84(dVar10,0);
    auVar9._0_8_ = dVar39;
    auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    this->_padding_ = (longlong)dVar39;
    this->_padding_ = auVar9._8_8_;
    this->_padding_ = CONCAT71(uStack_df,1);
  }
  if ((uVar27 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((uVar27 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((uVar27 & 4) != 0) {
    FThreadStats::AddMessage(FVar23,CycleScopeEnd);
  }
  return;
}

