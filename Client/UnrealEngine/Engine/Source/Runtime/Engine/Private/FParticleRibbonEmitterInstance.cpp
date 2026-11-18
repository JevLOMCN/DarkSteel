// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 25

// FParticleRibbonEmitterInstance @ 1481c76e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FParticleRibbonEmitterInstance * __thiscall
FParticleRibbonEmitterInstance::FParticleRibbonEmitterInstance
          (FParticleRibbonEmitterInstance *this,IParticleEmitterInstanceOwner *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  FParticleTrailsEmitterInstance_Base::FParticleTrailsEmitterInstance_Base
            ((FParticleTrailsEmitterInstance_Base *)this,param_1);
  *(uint *)&this->field_0x2e0 = *(uint *)&this->field_0x2e0 | 2;
  this->TrailTypeData = (UParticleModuleTypeDataRibbon *)0x0;
  piVar1 = &(this->CurrentSourceRotation).ArrayMax;
  this->SpawnPerUnitModule = (UParticleModuleSpawnPerUnit *)0x0;
  this->SourceModule = (UParticleModuleTrailSource *)0x0;
  *(undefined ***)this = &___7FParticleRibbonEmitterInstance__6B_;
  piVar2 = &(this->CurrentSourceUp).ArrayMax;
  *piVar1 = 0;
  piVar3 = &(this->CurrentLifetimes).ArrayMax;
  this->TrailModule_Source_Offset = -1;
  (this->CurrentSourcePosition).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentSourcePosition).ArrayNum = 0;
  (this->CurrentSourcePosition).ArrayMax = 0;
  (this->CurrentSourceRotation).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentSourceUp).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentSourceUp).ArrayNum = 0;
  *piVar2 = 0;
  (this->CurrentSourceTangent).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentSourceTangent).ArrayNum = 0;
  (this->CurrentSourceTangent).ArrayMax = 0;
  (this->CurrentSourceTangentStrength).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentSourceTangentStrength).ArrayNum = 0;
  (this->CurrentSourceTangentStrength).ArrayMax = 0;
  (this->LastSourcePosition).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastSourcePosition).ArrayNum = 0;
  (this->LastSourcePosition).ArrayMax = 0;
  (this->LastSourceRotation).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastSourceRotation).ArrayNum = 0;
  (this->LastSourceRotation).ArrayMax = 0;
  (this->LastSourceUp).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastSourceUp).ArrayNum = 0;
  (this->LastSourceUp).ArrayMax = 0;
  (this->LastSourceTangent).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastSourceTangent).ArrayNum = 0;
  (this->LastSourceTangent).ArrayMax = 0;
  (this->LastSourceTangentStrength).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastSourceTangentStrength).ArrayNum = 0;
  (this->LastSourceTangentStrength).ArrayMax = 0;
  this->SourceActor = (AActor *)0x0;
  (this->SourceOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceOffsets).ArrayNum = 0;
  (this->SourceOffsets).ArrayMax = 0;
  this->SourceEmitter = (FParticleEmitterInstance *)0x0;
  this->LastSelectedParticleIndex = -1;
  (this->SourceIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceIndices).ArrayNum = 0;
  (this->SourceIndices).ArrayMax = 0;
  (this->SourceTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceTimes).ArrayNum = 0;
  (this->SourceTimes).ArrayMax = 0;
  (this->LastSourceTimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastSourceTimes).ArrayNum = 0;
  (this->LastSourceTimes).ArrayMax = 0;
  (this->CurrentLifetimes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentLifetimes).ArrayNum = 0;
  *piVar3 = 0;
  (this->CurrentSizes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentSizes).ArrayNum = 0;
  (this->CurrentSizes).ArrayMax = 0;
  this->HeadOnlyParticles = 0;
  (this->CurrentSourceRotation).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,0,&(this->CurrentSourceRotation).AllocatorInstance,0,piVar1);
  }
  (this->CurrentSourceUp).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->CurrentSourceUp).AllocatorInstance,0,piVar2);
  }
  piVar1 = &(this->CurrentSourceTangent).ArrayMax;
  (this->CurrentSourceTangent).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->CurrentSourceTangent).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->CurrentSourceTangentStrength).ArrayMax;
  (this->CurrentSourceTangentStrength).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->CurrentSourceTangentStrength).AllocatorInstance,0,piVar1);
  }
  (this->LastSourcePosition).ArrayNum = 0;
  if ((this->LastSourcePosition).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->LastSourcePosition).AllocatorInstance,0,
               &(this->LastSourcePosition).ArrayMax);
  }
  (this->LastSourceRotation).ArrayNum = 0;
  if ((this->LastSourceRotation).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,0,&(this->LastSourceRotation).AllocatorInstance,0,
               &(this->LastSourceRotation).ArrayMax);
  }
  (this->LastSourceUp).ArrayNum = 0;
  if ((this->LastSourceUp).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->LastSourceUp).AllocatorInstance,0,&(this->LastSourceUp).ArrayMax);
  }
  (this->LastSourceTangent).ArrayNum = 0;
  if ((this->LastSourceTangent).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->LastSourceTangent).AllocatorInstance,0,
               &(this->LastSourceTangent).ArrayMax);
  }
  (this->LastSourceTangentStrength).ArrayNum = 0;
  if ((this->LastSourceTangentStrength).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->LastSourceTangentStrength).AllocatorInstance,0,
               &(this->LastSourceTangentStrength).ArrayMax);
  }
  (this->SourceOffsets).ArrayNum = 0;
  if ((this->SourceOffsets).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->SourceOffsets).AllocatorInstance,0,&(this->SourceOffsets).ArrayMax);
  }
  (this->SourceIndices).ArrayNum = 0;
  if ((this->SourceIndices).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SourceIndices).AllocatorInstance,0,&(this->SourceIndices).ArrayMax);
  }
  (this->SourceTimes).ArrayNum = 0;
  if ((this->SourceTimes).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SourceTimes).AllocatorInstance,0,&(this->SourceTimes).ArrayMax);
  }
  piVar1 = &(this->LastSourceTimes).ArrayMax;
  (this->LastSourceTimes).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->LastSourceTimes).AllocatorInstance,0,piVar1);
  }
  (this->CurrentLifetimes).ArrayNum = 0;
  if (*piVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->CurrentLifetimes).AllocatorInstance,0,piVar3);
  }
  return this;
}

// ~FParticleRibbonEmitterInstance @ 1481c91e0

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
FParticleRibbonEmitterInstance::~FParticleRibbonEmitterInstance
          (FParticleRibbonEmitterInstance *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7FParticleRibbonEmitterInstance__6B_;
  pFVar1 = (this->CurrentSizes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentLifetimes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LastSourceTimes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceTimes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceOffsets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LastSourceTangentStrength).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LastSourceTangent).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LastSourceUp).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LastSourceRotation).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LastSourcePosition).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentSourceTangentStrength).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentSourceTangent).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentSourceUp).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentSourceRotation).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentSourcePosition).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FParticleTrailsEmitterInstance_Base::~FParticleTrailsEmitterInstance_Base
            ((FParticleTrailsEmitterInstance_Base *)this);
  return;
}

// ApplyWorldOffset @ 1481d4820

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
FParticleRibbonEmitterInstance::ApplyWorldOffset
          (FParticleRibbonEmitterInstance *this,TVector<double> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  TVector<double>_u_0 local_38;
  
  local_38._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_38._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_38._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  FParticleEmitterInstance::ApplyWorldOffset
            ((FParticleEmitterInstance *)this,(TVector<double> *)&local_38._s_0,param_2);
  iVar4 = (this->CurrentSourcePosition).ArrayNum;
  pFVar5 = (this->CurrentSourcePosition).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)iVar4 * 0x18;
  while( true ) {
    if ((this->CurrentSourcePosition).ArrayNum != iVar4) {
      `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    *(double *)pFVar5 = (param_1->field0_0x0)._s_0.X + *(double *)pFVar5;
    dVar3 = (param_1->field0_0x0)._s_0.Z;
    *(double *)(pFVar5 + 8) = *(double *)(pFVar5 + 8) + dVar2;
    *(double *)(pFVar5 + 0x10) = dVar3 + *(double *)(pFVar5 + 0x10);
    pFVar5 = pFVar5 + 0x18;
  }
  iVar4 = (this->LastSourcePosition).ArrayNum;
  pFVar5 = (this->LastSourcePosition).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)iVar4 * 0x18;
  while( true ) {
    if ((this->LastSourcePosition).ArrayNum != iVar4) {
      `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    *(double *)pFVar5 = *(double *)pFVar5 + (param_1->field0_0x0)._s_0.X;
    dVar3 = (param_1->field0_0x0)._s_0.Z;
    *(double *)(pFVar5 + 8) = *(double *)(pFVar5 + 8) + dVar2;
    *(double *)(pFVar5 + 0x10) = dVar3 + *(double *)(pFVar5 + 0x10);
    pFVar5 = pFVar5 + 0x18;
  }
  return;
}

// DetermineVertexAndTriangleCount @ 1481e12b0

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
FParticleRibbonEmitterInstance::DetermineVertexAndTriangleCount
          (FParticleRibbonEmitterInstance *this)

{
  float fVar1;
  UParticleModuleTypeDataRibbon *pUVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  byte bVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  int iVar24;
  float fVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  float fVar34;
  float fVar35;
  int local_res8;
  longlong local_res18;
  
  iVar23 = 0;
  fVar34 = 0.0;
  fVar35 = 0.0;
  pUVar2 = this->TrailTypeData;
  *(undefined8 *)&this->field_0x280 = 0;
  this->HeadOnlyParticles = 0;
  fVar10 = __real_3f000000;
  fVar9 = __real_3f800000;
  fVar8 = __real_322bcc77;
  fVar1 = pUVar2->DistanceTessellationStepSize;
  fVar25 = (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  local_res8 = 0;
  bVar16 = pUVar2->bEnableTangentDiffInterpScale;
  if ((__real_322bcc77 <
       (float)((uint)pUVar2->TangentTessellationScalar & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
     (bVar16 != 0)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  iVar24 = 0;
  iVar15 = 0;
  if (0 < *(int *)&this->field_0x18c) {
    local_res18 = 0;
    dVar31 = __real_3e45798ee0000000;
    dVar32 = __real_3ff0000000000000;
    do {
      uVar17 = 0;
      lVar22 = (longlong)*(int *)&this->field_0x24;
      lVar21 = (longlong)
               (int)((uint)*(ushort *)(local_res18 + *(longlong *)&this->field_0x170) *
                    *(int *)&this->field_0x188) + *(longlong *)&this->field_0x168;
      uVar13 = *(uint *)(lVar22 + lVar21);
      puVar18 = (uint *)(lVar22 + lVar21);
      uVar14 = uVar13 & 0xf0000000;
      if (((uVar14 == 0x40000000) || (uVar14 == 0x10000000)) && ((uVar13 & 0x3fff) == 0x3fff)) {
        puVar18[7] = 0;
        puVar18[2] = 0;
        this->HeadOnlyParticles = this->HeadOnlyParticles + 1;
      }
      else if ((uVar14 == 0x80000000) && (uVar13 = (int)uVar13 >> 0xe & 0x3fff, uVar13 != 0x3fff)) {
        lVar20 = *(longlong *)&this->field_0x168 +
                 (longlong)(int)(*(int *)&this->field_0x188 * uVar13);
        puVar19 = (uint *)(lVar20 + lVar22);
        while( true ) {
          lVar22 = lVar20;
          dVar4 = *(double *)(lVar21 + 0x20) - *(double *)(lVar22 + 0x20);
          dVar30 = *(double *)(lVar21 + 0x18) - *(double *)(lVar22 + 0x18);
          dVar26 = *(double *)(lVar21 + 0x28) - *(double *)(lVar22 + 0x28);
          auVar27._0_8_ = dVar26 * dVar26;
          auVar27._8_8_ = 0;
          dVar26 = (double)(float)puVar18[10];
          dVar5 = (double)(float)puVar18[0xb];
          dVar6 = (double)(float)puVar18[0xc];
          auVar28._8_8_ = 0;
          auVar28._0_8_ = dVar4 * dVar4 + dVar30 * dVar30 + auVar27._0_8_;
          auVar28 = sqrtpd(auVar27,auVar28);
          dVar4 = dVar5 * dVar5 + dVar26 * dVar26 + dVar6 * dVar6;
          if (dVar31 < dVar4) {
            dVar32 = dVar32 / SQRT(dVar4);
            dVar26 = dVar26 * dVar32;
            dVar5 = dVar5 * dVar32;
            dVar6 = dVar6 * dVar32;
            dVar31 = __real_3e45798ee0000000;
          }
          dVar33 = (double)(float)puVar19[10];
          dVar30 = (double)(float)puVar19[0xb];
          dVar4 = (double)(float)puVar19[0xc];
          dVar32 = dVar30 * dVar30 + dVar33 * dVar33 + dVar4 * dVar4;
          if (dVar31 < dVar32) {
            dVar32 = __real_3ff0000000000000 / SQRT(dVar32);
            dVar33 = dVar33 * dVar32;
            dVar30 = dVar30 * dVar32;
            dVar4 = dVar4 * dVar32;
            dVar31 = __real_3e45798ee0000000;
          }
          if (bVar7) {
            fVar34 = ((float)(dVar30 * dVar5 + dVar33 * dVar26 + dVar4 * dVar6) - fVar9) *
                     __real_bf000000;
          }
          if (((fVar8 < fVar25) && (fVar35 = (float)auVar28._0_8_ / fVar1, bVar16 != 0)) &&
             (fVar34 < fVar10)) {
            fVar29 = fVar34;
            if (fVar10 <= fVar34) {
              fVar29 = fVar10;
            }
            if (fVar29 <= 0.0) {
              fVar29 = 0.0;
            }
            fVar35 = fVar35 * fVar29 * __real_40000000;
          }
          iVar12 = (int)(fVar34 * this->TrailTypeData->TangentTessellationScalar);
          iVar15 = FXConsoleVariables::MaxTangentTessellation;
          if (iVar12 < FXConsoleVariables::MaxTangentTessellation) {
            iVar15 = iVar12;
          }
          iVar12 = FXConsoleVariables::MaxDistanceTessellation;
          if ((int)fVar35 < FXConsoleVariables::MaxDistanceTessellation) {
            iVar12 = (int)fVar35;
          }
          uVar13 = 1;
          if (0 < iVar12 + iVar15) {
            uVar13 = iVar12 + iVar15;
          }
          puVar18[7] = uVar13;
          fVar29 = fVar9;
          if (fVar10 < fVar34) {
            fVar29 = fVar9 - fVar34 * fVar10;
          }
          puVar18[8] = (uint)fVar29;
          *(uint *)&this->field_0x280 = *(int *)&this->field_0x280 + uVar13 * 2;
          uVar17 = uVar17 + uVar13 * 2;
          uVar13 = (int)*puVar19 >> 0xe & 0x3fff;
          if (uVar13 == 0x3fff) break;
          lVar20 = (longlong)(int)(uVar13 * *(int *)&this->field_0x188) +
                   *(longlong *)&this->field_0x168;
          puVar18 = puVar19;
          puVar19 = (uint *)(*(int *)&this->field_0x24 + lVar20);
          lVar21 = lVar22;
          dVar32 = __real_3ff0000000000000;
        }
        *(int *)&this->field_0x280 = *(int *)&this->field_0x280 + 2;
        if ((((*puVar19 & 0xf0000000) != 0x40000000) && ((*puVar19 & 0xf0000000) != 0x10000000)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(((CurrTrailData->Flags & 0xf0000000) == 0x40000000) || ((CurrTrailData->Flags & 0xf0000000) == 0x10000000))"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                                ,0xa19,L""), bVar11)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        dVar31 = __real_3e45798ee0000000;
        dVar32 = __real_3ff0000000000000;
        local_res8 = local_res8 + 2 + uVar17;
        iVar23 = iVar23 + 1;
        puVar19[2] = uVar17;
        puVar19[7] = 1;
      }
      iVar24 = iVar24 + 1;
      local_res18 = local_res18 + 2;
      iVar15 = local_res8;
    } while (iVar24 < *(int *)&this->field_0x18c);
  }
  *(int *)&this->field_0x288 = iVar23;
  if (iVar23 < 1) {
    *(undefined4 *)&this->field_0x284 = 0;
    return;
  }
  *(int *)&this->field_0x284 = iVar15 + (iVar23 + -2) * 2;
  return;
}

// FillReplayData @ 1481ec4b0

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
FParticleRibbonEmitterInstance::FillReplayData
          (FParticleRibbonEmitterInstance *this,FDynamicEmitterReplayDataBase *param_1)

{
  int *piVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  float fVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_FParticleRibbonEmitterInstance::FillReplayData(FDynamicEmitterReplayDataBase_&)_::_2_::FStat_STAT_ParticleRibbonEmitterInstance_FillReplayData>
  FVar11;
  UParticleLODLevel *pUVar12;
  longlong lVar13;
  UObjectBaseUtility *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  longlong lVar14;
  UMaterialInterface *pUVar15;
  int iVar16;
  LARGE_INTEGER LVar17;
  FNameEntryId FVar18;
  LARGE_INTEGER local_res8;
  FName local_res18 [2];
  FString local_58;
  FStatMessage local_48;
  
  FVar18.Value = 0;
  local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_ParticleRibbonEmitterInstance_FillReplayData ==
        (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_FParticleRibbonEmitterInstance::FillReplayData(FDynamicEmitterReplayDataBase_&)_::_2_::FStat_STAT_ParticleRibbonEmitterInstance_FillReplayData>
         )0x0) {
      pFVar10 = ::FName::FName((FName *)&local_res8.s,
                               "STAT_ParticleRibbonEmitterInstance_FillReplayData");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_ParticleRibbonEmitterInstance_FillReplayData,*pFVar10,
                 L"STAT_ParticleRibbonEmitterInstance_FillReplayData","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_ParticleRibbonEmitterInstance_FillReplayData;
  if (StatPtr_STAT_ParticleRibbonEmitterInstance_FillReplayData ==
      (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_FParticleRibbonEmitterInstance::FillReplayData(FDynamicEmitterReplayDataBase_&)_::_2_::FStat_STAT_ParticleRibbonEmitterInstance_FillReplayData>
       )0x0) {
    pFVar10 = ::FName::FName(local_res18,"STAT_ParticleRibbonEmitterInstance_FillReplayData");
    FVar11 = (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_FParticleRibbonEmitterInstance::FillReplayData(FDynamicEmitterReplayDataBase_&)_::_2_::FStat_STAT_ParticleRibbonEmitterInstance_FillReplayData>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_ParticleRibbonEmitterInstance_FillReplayData,*pFVar10,
                          L"STAT_ParticleRibbonEmitterInstance_FillReplayData","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar17 = *(LARGE_INTEGER *)FVar11;
  bVar3 = false;
  bVar5 = false;
  if ((LVar17.s.LowPart == 0) && (LVar17.s.HighPart == 0)) {
LAB_1481ec620:
    bVar4 = false;
    LVar17._0_4_ = 0;
    LVar17._4_4_ = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                   ,0xac5);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1481ec620;
    local_res8 = LVar17;
    FThreadStats::AddMessage((FName)LVar17.s,CycleScopeStart);
    bVar4 = true;
    FVar18.Value = LVar17.s.LowPart;
  }
  if ((((0 < *(int *)&this->field_0x18c) && ((this->field_0x160 & 1) != 0)) &&
      (pUVar12 = UParticleEmitter::GetLODLevel(*(UParticleEmitter **)&this->field_0x8,0),
      pUVar12 != (UParticleLODLevel *)0x0)) && (pUVar12->bEnabled != 0)) {
    DetermineVertexAndTriangleCount(this);
    if (*(int *)&this->field_0x284 + 2 < 0x10000) {
      bVar6 = FParticleEmitterInstance::FillReplayData((FParticleEmitterInstance *)this,param_1);
      if (bVar6) {
        if (0 < *(int *)&this->field_0x284) {
          param_1->eEmitterType = DET_Ribbon;
          pUVar15 = FParticleTrailsEmitterInstance_Base::GetCurrentMaterial
                              ((FParticleTrailsEmitterInstance_Base *)this);
          param_1[1]._padding_ = (longlong)pUVar15;
          *(undefined2 *)&param_1[1].field_0x5c = 0;
          bVar6 = true;
          *(undefined4 *)((longlong)&param_1[2].DataContainer.ParticleData + 4) =
               *(undefined4 *)&this->field_0x194;
          fVar2 = (float)this->TrailTypeData->MaxTessellationBetweenParticles;
          fVar8 = 1.4013e-45;
          if (fVar2 != 0.0) {
            fVar8 = fVar2;
          }
          param_1[2].Scale.field0_0x0._s_0.X = fVar8;
          iVar16 = this->TrailTypeData->SheetsPerTrail;
          iVar9 = 1;
          if (iVar16 != 0) {
            iVar9 = iVar16;
          }
          iVar16 = 1;
          if (1 < iVar9) {
            iVar16 = iVar9;
          }
          *(int *)((longlong)&param_1[2].DataContainer.ParticleIndices + 4) = iVar16;
          param_1[2].DataContainer.ParticleDataNumBytes = *(int *)&this->field_0x280;
          param_1[2].DataContainer.ParticleIndicesNumShorts = *(int *)&this->field_0x284 + 2;
          param_1[2].DataContainer.MemBlockSize = *(int *)&this->field_0x284;
          *(undefined4 *)&param_1[2].DataContainer.ParticleIndices =
               *(undefined4 *)&this->field_0x288;
          *(undefined4 *)&param_1[2].DataContainer.field_0xc = 2;
          *(undefined4 *)&param_1[2].DataContainer.ParticleData = *(undefined4 *)&this->field_0x24;
          goto LAB_1481ec7b8;
        }
        if (((0 < *(int *)&this->field_0x18c) &&
            (*(int *)&this->field_0x18c != this->HeadOnlyParticles)) &&
           ((this->TrailTypeData->bClipSourceSegement == 0 &&
            (cVar7 = (**(code **)(**(longlong **)&this->field_0x10 + 0x38))(), cVar7 != '\0')))) {
          lVar14 = (**(code **)(**(longlong **)&this->field_0x10 + 0xd8))();
          if (lVar14 != 0) {
            lVar13 = (**(code **)(**(longlong **)&this->field_0x10 + 0xd8))();
            local_res8 = *(LARGE_INTEGER *)(lVar13 + 0x18);
            ::FName::ToString((FName *)&local_res8.s,&local_58);
          }
          ::FString::PrintfImpl
                    ((FString *)&local_48,
                     L"RIBBON: GetDynamicData -- TriangleCount == %d (APC = %4d) for PSys %s");
          if ((lVar14 != 0) && ((uchar  [8])local_58.Data.AllocatorInstance.Data != (uchar  [8])0x0)
             ) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_48.StatData.Pad;
          if (4 < (byte)LogParticles._0_1_) {
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)&PTR_u__s_151a3cb20,
                       (FLogCategoryBase *)&LogParticles);
            local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_48.StatData.Pad;
          }
          goto LAB_1481ec7ab;
        }
      }
    }
    else if ((((2 < (byte)LogParticles._0_1_) &&
              (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
              2 < (byte)LogParticles._0_1_)) &&
             (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
             2 < (byte)LogParticles._0_1_)) &&
            (((UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
              2 < (byte)LogParticles._0_1_ &&
              (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
              2 < (byte)LogParticles._0_1_)) &&
             (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
             2 < (byte)LogParticles._0_1_)))) {
      lVar13 = (**(code **)(**(longlong **)&this->field_0x10 + 0xd8))();
      lVar14 = **(longlong **)&this->field_0x10;
      if (lVar13 == 0) {
        (**(code **)(lVar14 + 0x80))(*(longlong **)&this->field_0x10,&local_58);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      }
      else {
        this_00 = (UObjectBaseUtility *)(**(code **)(lVar14 + 0xd8))();
        UObjectBaseUtility::GetPathName(this_00,(FString *)&local_48,(UObject *)0x0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_48.StatData.Pad;
      }
LAB_1481ec7ab:
      if ((uchar  [8])local_58.Data.AllocatorInstance.Data != (uchar  [8])0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  bVar6 = false;
LAB_1481ec7b8:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && ((FName)LVar17.QuadPart != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_48.NameAndInfo.Number = LVar17.s.HighPart & 0xffff6fffU | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar18.Value;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_01,&local_48);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return bVar6;
}

// GetAllocatedSize @ 1481f42c0

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
FParticleRibbonEmitterInstance::GetAllocatedSize
          (FParticleRibbonEmitterInstance *this,int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  iVar2 = 0;
  iVar4 = iVar2;
  iVar3 = iVar2;
  if (*(longlong *)&this->field_0x168 != 0) {
    iVar4 = *(int *)&this->field_0x188 * *(int *)&this->field_0x18c;
    iVar3 = *(int *)&this->field_0x188 * *(int *)&this->field_0x194;
  }
  if (*(longlong *)&this->field_0x170 != 0) {
    iVar1 = *(int *)&this->field_0x18c * 2;
    iVar2 = *(int *)&this->field_0x194 * 2;
  }
  *param_1 = iVar1 + 0x430 + iVar4;
  *param_2 = iVar2 + 0x430 + iVar3;
  return;
}

// GetDynamicData @ 1481f6380

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
FParticleRibbonEmitterInstance::GetDynamicData
          (FParticleRibbonEmitterInstance *this,bool param_1,Type param_2)

{
  int *piVar1;
  float fVar2;
  uint uVar3;
  LARGE_INTEGER LVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_public:_virtual_struct_FDynamicEmitterDataBase_*___cdecl_FParticleRibbonEmitterInstance::GetDynamicData(bool,ERHIFeatureLevel::Type)_::_2_::FStat_STAT_ParticleRibbonEmitterInstance_GetDynamicData>
  FVar10;
  UParticleLODLevel *pUVar11;
  FDynamicEmitterDataBase *this_00;
  FThreadSafeStaticStat<FStat_STAT_DynamicEmitterCount> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_DynamicRibbonCount> FVar15;
  FThreadSafeStaticStat<FStat_STAT_DynamicEmitterMem> FVar16;
  uint uVar17;
  FDynamicEmitterDataBase *pFVar18;
  LARGE_INTEGER local_res8;
  undefined1 local_res10;
  FName local_res20;
  LARGE_INTEGER local_58;
  FStatMessage local_48;
  
  pFVar18 = (FDynamicEmitterDataBase *)0x0;
  local_res10 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_ParticleRibbonEmitterInstance_GetDynamicData ==
        (FThreadSafeStaticStat<_public:_virtual_struct_FDynamicEmitterDataBase_*___cdecl_FParticleRibbonEmitterInstance::GetDynamicData(bool,ERHIFeatureLevel::Type)_::_2_::FStat_STAT_ParticleRibbonEmitterInstance_GetDynamicData>
         )0x0) {
      pFVar9 = ::FName::FName((FName *)&local_res8.s,
                              "STAT_ParticleRibbonEmitterInstance_GetDynamicData");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_ParticleRibbonEmitterInstance_GetDynamicData,*pFVar9,
                 L"STAT_ParticleRibbonEmitterInstance_GetDynamicData","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar10 = StatPtr_STAT_ParticleRibbonEmitterInstance_GetDynamicData;
  if (StatPtr_STAT_ParticleRibbonEmitterInstance_GetDynamicData ==
      (FThreadSafeStaticStat<_public:_virtual_struct_FDynamicEmitterDataBase_*___cdecl_FParticleRibbonEmitterInstance::GetDynamicData(bool,ERHIFeatureLevel::Type)_::_2_::FStat_STAT_ParticleRibbonEmitterInstance_GetDynamicData>
       )0x0) {
    pFVar9 = ::FName::FName(&local_res20,"STAT_ParticleRibbonEmitterInstance_GetDynamicData");
    FVar10 = (FThreadSafeStaticStat<_public:_virtual_struct_FDynamicEmitterDataBase_*___cdecl_FParticleRibbonEmitterInstance::GetDynamicData(bool,ERHIFeatureLevel::Type)_::_2_::FStat_STAT_ParticleRibbonEmitterInstance_GetDynamicData>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_ParticleRibbonEmitterInstance_GetDynamicData,*pFVar9,
                          L"STAT_ParticleRibbonEmitterInstance_GetDynamicData","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar4 = *(LARGE_INTEGER *)FVar10;
  bVar5 = false;
  bVar7 = false;
  local_58.s.LowPart = 0;
  local_58.s.HighPart = 0;
  if ((LVar4.s.LowPart == 0) && (LVar4.s.HighPart == 0)) {
LAB_1481f64ea:
    bVar6 = false;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar4;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                   ,0xa48);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1481f64ea;
    local_res8 = LVar4;
    FThreadStats::AddMessage((FName)LVar4.s,CycleScopeStart);
    bVar6 = true;
    local_58 = LVar4;
  }
  pUVar11 = UParticleEmitter::GetLODLevel(*(UParticleEmitter **)&this->field_0x8,0);
  cVar8 = (**(code **)(*(longlong *)this + 0x118))(this,pUVar11);
  if ((cVar8 != '\0') && ((this->field_0x160 & 1) != 0)) {
    this_00 = FDynamicEmitterDataBase::operator_new(0x150);
    if (this_00 != (FDynamicEmitterDataBase *)0x0) {
      FDynamicEmitterDataBase::FDynamicEmitterDataBase
                (this_00,(pUVar11->RequiredModule).field0_0x0.DebugPtr);
      uVar3 = *(uint *)((longlong)&this_00[2]._padding_ + 4);
      *(uint *)&this_00[1].StatID.StatIdPtr = *(uint *)&this_00[1].StatID.StatIdPtr & 0xfffffffe;
      this_00[1]._padding_ = 0;
      *(uint *)((longlong)&this_00[2]._padding_ + 4) = uVar3 & 0xffffffc2 | 2;
      this_00->_padding_ = (longlong)&___7FDynamicRibbonEmitterData__6B_;
      *(undefined4 *)&this_00[2]._padding_ = 0xffffffff;
      *(undefined4 *)&this_00[2].StatID.StatIdPtr = 0x41480000;
      *(undefined8 *)((longlong)&this_00[2].StatID.StatIdPtr + 4) = 0x41c80000;
      FDynamicSpriteEmitterReplayDataBase::FDynamicSpriteEmitterReplayDataBase
                ((FDynamicSpriteEmitterReplayDataBase *)(this_00 + 3));
      this_00[0xc]._padding_ = 0;
      this_00[3]._padding_ = (longlong)&___7FDynamicRibbonEmitterReplayData__6B_;
      this_00[0xc].StatID.StatIdPtr = (TStatIdData *)0x0;
      *(undefined4 *)&this_00[0xc].field_0x10 = 0xffffffff;
      this_00[0xc].EmitterIndex = 0;
      *(undefined4 *)&this_00[0xd]._padding_ = 1;
      *(undefined8 *)((longlong)&this_00[0xd]._padding_ + 4) = 1;
      pFVar18 = this_00;
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FVar12 = StatPtr_STAT_DynamicEmitterCount;
      if (StatPtr_STAT_DynamicEmitterCount ==
          (FThreadSafeStaticStat<FStat_STAT_DynamicEmitterCount>)0x0) {
        pFVar9 = ::FName::FName((FName *)&local_res8.s,"STAT_DynamicEmitterCount");
        FVar12 = (FThreadSafeStaticStat<FStat_STAT_DynamicEmitterCount>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DynamicEmitterCount,*pFVar9,
                            L"DynEmitter Count","STATGROUP_ParticleMem","STATCAT_Advanced",
                            L"Particle Mem",true,true,ST_int64,false,false,MCR_Invalid);
      }
      LVar4 = *(LARGE_INTEGER *)FVar12;
      local_res8 = LVar4;
      if ((((FName)LVar4.QuadPart != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar13 == (FThreadStats *)0x0) {
          pFVar14 = FThreadStatsPool::Get();
          pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
        }
        local_48.NameAndInfo.Number = LVar4.s.HighPart & 0xffffafffU | 0xa000;
        local_48.StatData.Pad[0] = '\x01';
        local_48.StatData.Pad[1] = '\0';
        local_48.StatData.Pad[2] = '\0';
        local_48.StatData.Pad[3] = '\0';
        local_48.StatData.Pad[4] = '\0';
        local_48.StatData.Pad[5] = '\0';
        local_48.StatData.Pad[6] = '\0';
        local_48.StatData.Pad[7] = '\0';
        local_res8 = LVar4;
        local_48.NameAndInfo.Index.Value = LVar4.s.LowPart;
        FThreadStats::AddStatMessage(pFVar13,&local_48);
        FStatsTrace::Add((FName *)&local_res8.s,1);
        if (pFVar13->ScopeCount == 0) {
          FThreadStats::Flush(pFVar13,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar13,false,false);
        }
      }
      if (FThreadStats::bPrimaryEnable != false) {
        FVar15 = StatPtr_STAT_DynamicRibbonCount;
        if (StatPtr_STAT_DynamicRibbonCount ==
            (FThreadSafeStaticStat<FStat_STAT_DynamicRibbonCount>)0x0) {
          pFVar9 = ::FName::FName((FName *)&local_res8.s,"STAT_DynamicRibbonCount");
          FVar15 = (FThreadSafeStaticStat<FStat_STAT_DynamicRibbonCount>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DynamicRibbonCount,*pFVar9,
                              L"DynRibbon Count","STATGROUP_ParticleMem","STATCAT_Advanced",
                              L"Particle Mem",true,true,ST_int64,false,false,MCR_Invalid);
        }
        LVar4 = *(LARGE_INTEGER *)FVar15;
        local_res8 = LVar4;
        if ((((FName)LVar4.QuadPart != (FName)0x0) &&
            (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar13 == (FThreadStats *)0x0) {
            pFVar14 = FThreadStatsPool::Get();
            pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
          }
          local_48.NameAndInfo.Number = LVar4.s.HighPart & 0xffffafffU | 0xa000;
          local_48.StatData.Pad[0] = '\x01';
          local_48.StatData.Pad[1] = '\0';
          local_48.StatData.Pad[2] = '\0';
          local_48.StatData.Pad[3] = '\0';
          local_48.StatData.Pad[4] = '\0';
          local_48.StatData.Pad[5] = '\0';
          local_48.StatData.Pad[6] = '\0';
          local_48.StatData.Pad[7] = '\0';
          local_res8 = LVar4;
          local_48.NameAndInfo.Index.Value = LVar4.s.LowPart;
          FThreadStats::AddStatMessage(pFVar13,&local_48);
          FStatsTrace::Add((FName *)&local_res8.s,1);
          if (pFVar13->ScopeCount == 0) {
            FThreadStats::Flush(pFVar13,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar13,false,false);
          }
        }
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FVar16 = StatPtr_STAT_DynamicEmitterMem;
      if (StatPtr_STAT_DynamicEmitterMem == (FThreadSafeStaticStat<FStat_STAT_DynamicEmitterMem>)0x0
         ) {
        pFVar9 = ::FName::FName((FName *)&local_res8.s,"STAT_DynamicEmitterMem");
        FVar16 = (FThreadSafeStaticStat<FStat_STAT_DynamicEmitterMem>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DynamicEmitterMem,*pFVar9,
                            L"DynEmitter Mem","STATGROUP_ParticleMem","STATCAT_Advanced",
                            L"Particle Mem",true,true,ST_int64,false,false,MCR_Invalid);
      }
      LVar4 = *(LARGE_INTEGER *)FVar16;
      local_res8 = LVar4;
      if ((((FName)LVar4.QuadPart != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar13 == (FThreadStats *)0x0) {
          pFVar14 = FThreadStatsPool::Get();
          pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
        }
        local_48.NameAndInfo.Number = LVar4.s.HighPart & 0xffffafffU | 0xa000;
        local_48.StatData.Pad[0] = 'P';
        local_48.StatData.Pad[1] = '\x01';
        local_48.StatData.Pad[2] = '\0';
        local_48.StatData.Pad[3] = '\0';
        local_48.StatData.Pad[4] = '\0';
        local_48.StatData.Pad[5] = '\0';
        local_48.StatData.Pad[6] = '\0';
        local_48.StatData.Pad[7] = '\0';
        local_res8 = LVar4;
        local_48.NameAndInfo.Index.Value = LVar4.s.LowPart;
        FThreadStats::AddStatMessage(pFVar13,&local_48);
        FStatsTrace::Add((FName *)&local_res8.s,0x150);
        if (pFVar13->ScopeCount == 0) {
          FThreadStats::Flush(pFVar13,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar13,false,false);
        }
      }
    }
    uVar17 = (this->TrailTypeData->bClipSourceSegement ^
             *(uint *)((longlong)&pFVar18[2]._padding_ + 4)) & 1 ^
             *(uint *)((longlong)&pFVar18[2]._padding_ + 4);
    *(uint *)((longlong)&pFVar18[2]._padding_ + 4) = uVar17;
    uVar17 = (*(int *)&this->TrailTypeData->field_0x4c * 2 ^ uVar17) & 2 ^ uVar17;
    *(uint *)((longlong)&pFVar18[2]._padding_ + 4) = uVar17;
    uVar17 = (*(int *)&this->TrailTypeData->field_0x4c * 2 ^ uVar17) & 4 ^ uVar17;
    *(uint *)((longlong)&pFVar18[2]._padding_ + 4) = uVar17;
    uVar17 = (*(int *)&this->TrailTypeData->field_0x4c * 2 ^ uVar17) & 8 ^ uVar17;
    uVar3 = *(uint *)&pFVar18[0xd].field_0x10;
    *(uint *)((longlong)&pFVar18[2]._padding_ + 4) = uVar17;
    uVar17 = (*(int *)&this->TrailTypeData->field_0x4c * 2 ^ uVar17) & 0x10 ^ uVar17;
    *(uint *)((longlong)&pFVar18[2]._padding_ + 4) = uVar17;
    *(float *)&pFVar18[2].StatID.StatIdPtr = this->TrailTypeData->DistanceTessellationStepSize;
    *(float *)((longlong)&pFVar18[2].StatID.StatIdPtr + 4) =
         this->TrailTypeData->TangentTessellationScalar;
    *(uint *)&pFVar18[0xd].field_0x10 =
         ((this->TrailTypeData->RenderAxis).Value ^ uVar3) & 3 ^ uVar3;
    fVar2 = this->TrailTypeData->TilingDistance;
    *(float *)&pFVar18[2].field_0x10 = fVar2;
    uVar3 = uVar17 | 0x20;
    if (fVar2 <= 0.0) {
      uVar3 = uVar17 & 0xffffffdf;
    }
    *(uint *)((longlong)&pFVar18[2]._padding_ + 4) = uVar3;
    cVar8 = (**(code **)(*(longlong *)this + 0x220))(this,pFVar18 + 3);
    if (cVar8 != '\0') {
      (*(code *)((undefined8 *)pFVar18->_padding_)[0xe])(pFVar18,local_res10);
      goto LAB_1481f6a98;
    }
    (**(code **)pFVar18->_padding_)(pFVar18,1);
  }
  pFVar18 = (FDynamicEmitterDataBase *)0x0;
LAB_1481f6a98:
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && ((FName)local_58.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_48.NameAndInfo.Index.Value = local_58._0_4_;
      local_48.NameAndInfo.Number = local_58.s.HighPart & 0xffff6fffU | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,&local_48);
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
  return pFVar18;
}

// GetParticleLifetimeAndSize @ 1481fcd90

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
FParticleRibbonEmitterInstance::GetParticleLifetimeAndSize
          (FParticleRibbonEmitterInstance *this,int param_1,FBaseParticle *param_2,bool param_3,
          float *param_4,float *param_5)

{
  UObject *pUVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  UClass *pUVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  FObjectPtr_u_0 *this_00;
  longlong lVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  FParticleRibbonEmitterInstance *local_res8;
  int local_res10;
  FBaseParticle *local_res18;
  
  uVar10 = 0;
  lVar11 = (longlong)param_1;
  local_res10 = param_1;
  local_res18 = param_2;
  if (param_3) {
    lVar11 = *(longlong *)&this->field_0x8;
    if ((*(int *)(lVar11 + 0x48) < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar11 = **(longlong **)(lVar11 + 0x40);
    if ((lVar11 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("LODLevel",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                           ,0x49b,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    fVar14 = __real_3f800000;
    uVar8 = 0;
    uVar12 = uVar10;
    if (0 < *(int *)(lVar11 + 0x78)) {
      do {
        uVar9 = (uint)uVar10;
        uVar5 = uVar8;
        if ((int)uVar9 < *(int *)(lVar11 + 0x78)) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = (FObjectPtr_u_0 *)(*(longlong *)(lVar11 + 0x70) + uVar12);
        if (this_00->Handle != (UObject *)0x0) {
          pUVar6 = Z_Construct_UClass_UParticleModuleLifetime_NoRegister();
          bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar6);
          if ((bVar4) && (pUVar1 = this_00->Handle, pUVar1 != (UObject *)0x0)) {
            pcVar2 = *(code **)(*(longlong *)pUVar1 + 0x3a0);
            uVar7 = (**(code **)(**(longlong **)&this->field_0x10 + 8))();
            local_res8 = this;
            fVar13 = (float)(*pcVar2)(pUVar1,&local_res8,*(undefined4 *)&this->field_0x1a0,uVar7);
            if ((0.0 < fVar13) &&
               ((fVar13 = fVar14 / fVar13, fVar13 != 0.0 &&
                (fVar15 = fVar14 / fVar13, fVar14 = fVar13, fVar15 < __real_3a83126f)))) {
              fVar14 = __real_4479ffff;
            }
            break;
          }
        }
        uVar10 = (ulonglong)(uVar9 + 1);
        uVar12 = uVar12 + 8;
      } while ((int)(uVar9 + 1) < *(int *)(lVar11 + 0x78));
    }
    lVar11 = (longlong)local_res10;
    uVar5 = uVar8;
    if (local_res10 < (this->CurrentLifetimes).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(float *)((this->CurrentLifetimes).AllocatorInstance.Data + lVar11 * 4) = fVar14;
    fVar14 = (local_res18->Size).field0_0x0._s_0.X;
    if (local_res10 < (this->CurrentSizes).ArrayNum) {
      uVar8 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(float *)((this->CurrentSizes).AllocatorInstance.Data + lVar11 * 4) = fVar14;
  }
  iVar3 = local_res10;
  uVar8 = 0;
  if (local_res10 < (this->CurrentLifetimes).ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *param_4 = *(float *)((this->CurrentLifetimes).AllocatorInstance.Data + lVar11 * 4);
  uVar8 = 0;
  if (iVar3 < (this->CurrentSizes).ArrayNum) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *param_5 = *(float *)((this->CurrentSizes).AllocatorInstance.Data + lVar11 * 4);
  return;
}

// GetReplayData @ 1481fe310

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
FParticleRibbonEmitterInstance::GetReplayData(FParticleRibbonEmitterInstance *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FDynamicRibbonEmitterReplayData *pFVar4;
  FDynamicEmitterReplayDataBase *pFVar5;
  
  if (*(int *)&this->field_0x18c < 1) {
    return (FDynamicEmitterReplayDataBase *)0x0;
  }
  if ((this->field_0x160 & 1) == 0) {
    return (FDynamicEmitterReplayDataBase *)0x0;
  }
  pFVar4 = ::operator_new(0x100);
  if (pFVar4 == (FDynamicRibbonEmitterReplayData *)0x0) {
    pFVar4 = (FDynamicRibbonEmitterReplayData *)0x0;
  }
  else {
    pFVar4 = FDynamicRibbonEmitterReplayData::FDynamicRibbonEmitterReplayData(pFVar4);
    if (pFVar4 != (FDynamicRibbonEmitterReplayData *)0x0) goto LAB_1481fe378;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("NewEmitterReplayData != 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                     ,0xa84,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FDynamicEmitterReplayDataBase *)(*pcVar1)();
    return pFVar5;
  }
LAB_1481fe378:
  cVar3 = (**(code **)(*(longlong *)this + 0x220))(this,pFVar4);
  if (cVar3 == '\0') {
    if (pFVar4 != (FDynamicRibbonEmitterReplayData *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    return (FDynamicEmitterReplayDataBase *)0x0;
  }
  return (FDynamicEmitterReplayDataBase *)pFVar4;
}

// GetResourceSizeEx @ 1481fe490

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
FParticleRibbonEmitterInstance::GetResourceSizeEx
          (FParticleRibbonEmitterInstance *this,FResourceSizeEx *param_1)

{
  Type TVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  TVar1 = FResourceSizeEx::GetResourceSizeMode(param_1);
  if ((TVar1 == EstimatedTotal) ||
     (lVar2 = (**(code **)(**(longlong **)&this->field_0x10 + 0xf8))(), lVar2 != 0)) {
    iVar4 = 0;
    iVar3 = iVar4;
    if (*(longlong *)&this->field_0x168 != 0) {
      iVar3 = *(int *)&this->field_0x188 * *(int *)&this->field_0x194;
    }
    if (*(longlong *)&this->field_0x170 != 0) {
      iVar4 = *(int *)&this->field_0x194 * 2;
    }
    FResourceSizeEx::AddUnknownMemoryBytes(param_1,0x430);
    FResourceSizeEx::AddUnknownMemoryBytes(param_1,(longlong)iVar3);
    FResourceSizeEx::AddUnknownMemoryBytes(param_1,(longlong)iVar4);
    lVar2 = (longlong)*(int *)&this->field_0x194;
    if (*(int *)&this->field_0x30 == 0) {
      lVar2 = lVar2 * 5;
    }
    FResourceSizeEx::AddUnknownMemoryBytes(param_1,lVar2 << 4);
  }
  return;
}

// GetSpawnPerUnitAmount @ 1481fee20

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
FParticleRibbonEmitterInstance::GetSpawnPerUnitAmount
          (FParticleRibbonEmitterInstance *this,float param_1,int param_2,int *param_3,
          float *param_4)

{
  UParticleModuleSpawnPerUnit **ppUVar1;
  float fVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  float fVar17;
  bool bVar18;
  undefined1 uVar19;
  bool bVar20;
  uint uVar21;
  int iVar22;
  UObject *pUVar23;
  uchar *puVar24;
  UParticleModuleSpawnPerUnit *pUVar25;
  uint uVar26;
  longlong lVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  double dVar32;
  float fVar33;
  float fVar34;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_110;
  TVector<double>_u_0 local_f8 [8];
  
  lVar27 = (longlong)param_2;
  if (((this->CurrentSourcePosition).ArrayNum <= param_2) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentSourcePosition.Num() > InTrailIdx",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                          ,0x3d0,L""), bVar18)) {
    pcVar8 = (code *)swi(3);
    uVar19 = (*pcVar8)();
    return (bool)uVar19;
  }
  if (((this->LastSourcePosition).ArrayNum <= param_2) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("LastSourcePosition.Num() > InTrailIdx",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                          ,0x3d1,L""), bVar18)) {
    pcVar8 = (code *)swi(3);
    uVar19 = (*pcVar8)();
    return (bool)uVar19;
  }
  ppUVar1 = &this->SpawnPerUnitModule;
  if ((*ppUVar1 == (UParticleModuleSpawnPerUnit *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("SpawnPerUnitModule != 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                          ,0x3d2,L""), bVar18)) {
    pcVar8 = (code *)swi(3);
    uVar19 = (*pcVar8)();
    return (bool)uVar19;
  }
  pUVar25 = *ppUVar1;
  if ((pUVar25 != (UParticleModuleSpawnPerUnit *)0x0) && ((char)pUVar25->_padding_ < '\0')) {
    bVar18 = false;
    pUVar23 = (UObject *)(**(code **)(**(longlong **)&this->field_0x10 + 8))();
    fVar28 = FRawDistributionFloat::GetValue
                       (&pUVar25->SpawnPerUnit,*(float *)&this->field_0x1a0,pUVar23,
                        (FRandomStream *)0x0);
    fVar28 = fVar28 / (*ppUVar1)->UnitScalar;
    if (fVar28 < 0.0) {
      *param_3 = 0;
      *param_4 = 0.0;
    }
    else {
      uVar26 = (uint)~param_2 >> 0x1f;
      uVar21 = 0;
      if (param_2 < *(int *)&this->field_0x2c8) {
        uVar21 = uVar26;
      }
      if ((uVar21 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar8 = (code *)swi(3);
        uVar19 = (*pcVar8)();
        return (bool)uVar19;
      }
      fVar31 = *(float *)(*(longlong *)&this->field_0x2c0 + lVar27 * 4);
      uVar21 = 0;
      if (param_2 < (this->CurrentSourcePosition).ArrayNum) {
        uVar21 = uVar26;
      }
      if ((uVar21 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar8 = (code *)swi(3);
        uVar19 = (*pcVar8)();
        return (bool)uVar19;
      }
      pFVar6 = (this->CurrentSourcePosition).AllocatorInstance.Data;
      uVar21 = 0;
      if (param_2 < (this->LastSourcePosition).ArrayNum) {
        uVar21 = uVar26;
      }
      if ((uVar21 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar8 = (code *)swi(3);
        uVar19 = (*pcVar8)();
        return (bool)uVar19;
      }
      pFVar7 = (this->LastSourcePosition).AllocatorInstance.Data;
      local_110._s_0.Y =
           *(double *)(pFVar6 + lVar27 * 0x18 + 8) - *(double *)(pFVar7 + lVar27 * 0x18 + 8);
      local_110._s_0.Z =
           *(double *)(pFVar6 + lVar27 * 0x18 + 0x10) - *(double *)(pFVar7 + lVar27 * 0x18 + 0x10);
      local_110._s_0.X = *(double *)(pFVar6 + lVar27 * 0x18) - *(double *)(pFVar7 + lVar27 * 0x18);
      auVar29._0_8_ = local_110._s_0.Z * local_110._s_0.Z;
      auVar29._8_8_ = 0;
      auVar30._8_8_ = 0;
      auVar30._0_8_ =
           local_110._s_0.Y * local_110._s_0.Y + local_110._s_0.X * local_110._s_0.X + auVar29._0_8_
      ;
      auVar30 = sqrtpd(auVar29,auVar30);
      fVar34 = (float)auVar30._0_8_;
      fVar2 = (*ppUVar1)->MaxFrameDistance;
      if (((0.0 < fVar2) && (fVar2 < fVar34)) || (__real_54800000 < fVar34)) {
        fVar34 = 0.0;
        puVar24 = FParticleEmitterInstance::GetModuleInstanceData
                            ((FParticleEmitterInstance *)this,(UParticleModule *)*ppUVar1);
        puVar24[0] = '\0';
        puVar24[1] = '\0';
        puVar24[2] = '\0';
        puVar24[3] = '\0';
        uVar21 = 0;
        if (param_2 < (this->CurrentSourcePosition).ArrayNum) {
          uVar21 = uVar26;
        }
        if ((uVar21 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar8 = (code *)swi(3);
          uVar19 = (*pcVar8)();
          return (bool)uVar19;
        }
        pFVar7 = (this->CurrentSourcePosition).AllocatorInstance.Data;
        pFVar6 = pFVar7 + lVar27 * 0x18;
        uVar14 = *(undefined8 *)pFVar6;
        uVar15 = *(undefined8 *)(pFVar6 + 8);
        uVar3 = *(undefined8 *)(pFVar7 + lVar27 * 0x18 + 0x10);
        uVar21 = 0;
        if (param_2 < (this->LastSourcePosition).ArrayNum) {
          uVar21 = uVar26;
        }
        if ((uVar21 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar8 = (code *)swi(3);
          uVar19 = (*pcVar8)();
          return (bool)uVar19;
        }
        pFVar7 = (this->LastSourcePosition).AllocatorInstance.Data;
        pFVar6 = pFVar7 + lVar27 * 0x18;
        *(undefined8 *)pFVar6 = uVar14;
        *(undefined8 *)(pFVar6 + 8) = uVar15;
        *(undefined8 *)(pFVar7 + lVar27 * 0x18 + 0x10) = uVar3;
      }
      fVar17 = __real_3f800000;
      dVar16 = __real_3e45798ee0000000;
      fVar2 = __real_38d1b717;
      dVar9 = __real_3ff0000000000000;
      fVar33 = 0.0;
      if (0.0 < this->TrailTypeData->TangentSpawningScalar) {
        fVar33 = *(float *)&this->field_0x290;
        if (*(int *)&this->field_0x18c == 0) {
          if (fVar33 == 0.0) {
            fVar33 = __real_38d1b717;
          }
          uVar21 = 0;
          if (param_2 < (this->CurrentSourcePosition).ArrayNum) {
            uVar21 = uVar26;
          }
          if ((uVar21 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar8 = (code *)swi(3);
            uVar19 = (*pcVar8)();
            return (bool)uVar19;
          }
          uVar21 = 0;
          if (param_2 < (this->LastSourcePosition).ArrayNum) {
            uVar21 = uVar26;
          }
          if ((uVar21 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar8 = (code *)swi(3);
            uVar19 = (*pcVar8)();
            return (bool)uVar19;
          }
          uVar21 = 0;
          if (param_2 < (this->CurrentSourcePosition).ArrayNum) {
            uVar21 = uVar26;
          }
          if ((uVar21 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar8 = (code *)swi(3);
            uVar19 = (*pcVar8)();
            return (bool)uVar19;
          }
          pFVar6 = (this->CurrentSourcePosition).AllocatorInstance.Data;
          uVar21 = 0;
          if (param_2 < (this->LastSourcePosition).ArrayNum) {
            uVar21 = uVar26;
          }
          if ((uVar21 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar8 = (code *)swi(3);
            uVar19 = (*pcVar8)();
            return (bool)uVar19;
          }
          pFVar7 = (this->LastSourcePosition).AllocatorInstance.Data;
          dVar4 = *(double *)(pFVar6 + lVar27 * 0x18);
          pFVar6 = pFVar6 + lVar27 * 0x18 + 8;
          dVar12 = *(double *)pFVar6;
          dVar5 = *(double *)(pFVar7 + lVar27 * 0x18);
          dVar32 = dVar9 / (double)fVar33;
          pFVar7 = pFVar7 + lVar27 * 0x18 + 8;
          dVar13 = *(double *)pFVar7;
          uVar21 = 0;
          if (param_2 < (this->LastSourceTangent).ArrayNum) {
            uVar21 = uVar26;
          }
          dVar11 = (*(double *)(pFVar6 + 8) - *(double *)(pFVar7 + 8)) * dVar32;
          if ((uVar21 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar8 = (code *)swi(3);
            uVar19 = (*pcVar8)();
            return (bool)uVar19;
          }
          pFVar6 = (this->LastSourceTangent).AllocatorInstance.Data;
          *(double *)(pFVar6 + lVar27 * 0x18) = (dVar4 - dVar5) * dVar32;
          auVar10._8_4_ = SUB84(dVar11,0);
          auVar10._0_8_ = (dVar12 - dVar13) * dVar32;
          auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
          *(undefined1 (*) [16])(pFVar6 + lVar27 * 0x18 + 8) = auVar10;
        }
        uVar21 = 0;
        if (param_2 < *(int *)&this->field_0x2a8) {
          uVar21 = uVar26;
        }
        if ((uVar21 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar8 = (code *)swi(3);
          uVar19 = (*pcVar8)();
          return (bool)uVar19;
        }
        fVar33 = fVar33 - *(float *)(*(longlong *)&this->field_0x2a0 + lVar27 * 4);
        if (fVar33 == 0.0) {
          fVar33 = fVar2;
        }
        dVar9 = dVar9 / (double)fVar33;
        local_128._s_0.X = local_110._s_0.X * dVar9;
        local_128._s_0.Y = local_110._s_0.Y * dVar9;
        local_128._s_0.Z = dVar9 * local_110._s_0.Z;
        UE::Math::TVector<double>::Normalize((TVector<double> *)&local_128._s_0,dVar16);
        uVar21 = 0;
        if (param_2 < (this->LastSourceTangent).ArrayNum) {
          uVar21 = uVar26;
        }
        if ((uVar21 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar8 = (code *)swi(3);
          uVar19 = (*pcVar8)();
          return (bool)uVar19;
        }
        pFVar6 = (this->LastSourceTangent).AllocatorInstance.Data;
        local_f8[0]._16_8_ = *(undefined8 *)(pFVar6 + lVar27 * 0x18 + 0x10);
        pFVar6 = pFVar6 + lVar27 * 0x18;
        local_f8[0]._0_8_ = *(undefined8 *)pFVar6;
        local_f8[0]._8_8_ = *(undefined8 *)(pFVar6 + 8);
        UE::Math::TVector<double>::Normalize((TVector<double> *)&local_f8[0]._s_0,dVar16);
        fVar33 = ((float)((double)local_f8[0]._8_8_ * local_128._s_0.Y +
                          (double)local_f8[0]._0_8_ * local_128._s_0.X +
                         (double)local_f8[0]._16_8_ * local_128._s_0.Z) - fVar17) * __real_bf000000;
      }
      if (fVar34 <= 0.0) {
        bVar18 = false;
        *param_3 = 0;
        *param_4 = 0.0;
      }
      else {
        bVar18 = this->SpawnPerUnitModule->MovementTolerance * this->SpawnPerUnitModule->UnitScalar
                 < fVar34;
        UE::Math::TVector<double>::Normalize((TVector<double> *)&local_110._s_0,dVar16);
        fVar2 = this->TrailTypeData->TangentSpawningScalar;
        fVar34 = fVar34 + fVar31;
        fVar28 = fVar34 * fVar28;
        if (param_1 <= 0.0) {
          fVar31 = 0.0;
        }
        else {
          fVar31 = fVar17 / param_1;
        }
        if (((this->TrailTypeData->bSpawnInitialParticle == 0) || (*(int *)&this->field_0x18c != 0))
           || (fVar17 <= fVar2 * fVar33 + fVar28)) {
          iVar22 = (int)ROUND(((fVar33 + fVar33) * fVar2 + fVar28 + fVar28) - __real_3f000000) >> 1;
        }
        else {
          iVar22 = 1;
        }
        *param_3 = iVar22;
        *param_4 = (float)iVar22 * fVar31;
        fVar34 = fVar34 - (float)*param_3 * this->SpawnPerUnitModule->UnitScalar;
        uVar21 = 0;
        if (param_2 < *(int *)&this->field_0x2c8) {
          uVar21 = (uint)~param_2 >> 0x1f;
        }
        if (fVar34 <= 0.0) {
          fVar34 = 0.0;
        }
        if ((uVar21 == 0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar20)) {
          pcVar8 = (code *)swi(3);
          uVar19 = (*pcVar8)();
          return (bool)uVar19;
        }
        *(float *)(*(longlong *)&this->field_0x2c0 + lVar27 * 4) = fVar34;
      }
    }
    pUVar25 = this->SpawnPerUnitModule;
    if (pUVar25->bIgnoreSpawnRateWhenMoving != 0) {
      return !bVar18;
    }
  }
  return (bool)((byte)pUVar25->_padding_ & 1);
}

// InitParameters @ 148203780

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
FParticleRibbonEmitterInstance::InitParameters
          (FParticleRibbonEmitterInstance *this,UParticleEmitter *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int *piVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  int iVar6;
  UParticleModuleTypeDataRibbon *pUVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  UParticleLODLevel *pUVar11;
  UClass *pUVar12;
  FString *pFVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  FString local_48;
  FString local_38;
  FString local_28;
  
  FParticleEmitterInstance::InitParameters((FParticleEmitterInstance *)this,param_1);
  pUVar11 = UParticleEmitter::GetLODLevel(param_1,0);
  pwVar14 = L"";
  if (pUVar11 == (UParticleLODLevel *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("LODLevel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                       ,0x32c,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if ((pUVar11->TypeDataModule).field0_0x0.DebugPtr == (UParticleModuleTypeDataBase *)0x0) {
    pFVar13 = GetTypeName<UParticleModuleTypeDataRibbon>(&local_28);
    if ((pFVar13->Data).ArrayNum != 0) {
      pwVar14 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar14);
  }
  pUVar12 = Z_Construct_UClass_UParticleModuleTypeDataRibbon_NoRegister();
  bVar9 = FObjectPtr::IsA((FObjectPtr *)&pUVar11->TypeDataModule,pUVar12);
  if ((!bVar9) ||
     (pUVar7 = (UParticleModuleTypeDataRibbon *)(pUVar11->TypeDataModule).field0_0x0.DebugPtr,
     pUVar7 == (UParticleModuleTypeDataRibbon *)0x0)) {
    pFVar13 = GetTypeName<UParticleModuleTypeDataRibbon>(&local_48);
    if ((pFVar13->Data).ArrayNum == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    pFVar13 = GetFullNameForCastLogError<UParticleModuleTypeDataBase>
                        (&local_38,(pUVar11->TypeDataModule).field0_0x0.DebugPtr);
    if ((pFVar13->Data).ArrayNum != 0) {
      pwVar14 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar14,pwVar15);
  }
  this->TrailTypeData = pUVar7;
  if (pUVar7->MaxTrailCount < 1) {
    pUVar7->MaxTrailCount = 1;
  }
  *(uint *)&this->field_0x298 =
       (*(uint *)&this->field_0x298 ^ this->TrailTypeData->bDeadTrailsOnDeactivate) & 1 ^
       *(uint *)&this->field_0x298;
  uVar5 = this->TrailTypeData->MaxTrailCount;
  *(uint *)&this->field_0x28c = uVar5;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  puVar1 = &this->field_0x2ac;
  *(undefined4 *)&this->field_0x2a8 = 0;
  if (*(uint *)puVar1 != uVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar5,(ForAnyElementType *)&this->field_0x2a0,0,(int *)puVar1);
  }
  iVar6 = *(int *)&this->field_0x28c;
  iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,iVar6,(ForAnyElementType *)&this->field_0x2a0,(int *)&this->field_0x2a8,
                      (int *)puVar1);
  memset((void *)(*(longlong *)&this->field_0x2a0 + (longlong)iVar10 * 4),0,(longlong)iVar6 << 2);
  uVar5 = *(uint *)&this->field_0x28c;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  piVar2 = &(this->CurrentSourcePosition).ArrayMax;
  (this->CurrentSourcePosition).ArrayNum = 0;
  if (*piVar2 != uVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar5,&(this->CurrentSourcePosition).AllocatorInstance,0,piVar2);
  }
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::AddZeroed
            (&this->CurrentSourcePosition,*(int *)&this->field_0x28c);
  uVar5 = *(uint *)&this->field_0x28c;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  piVar2 = &(this->CurrentSourceRotation).ArrayMax;
  (this->CurrentSourceRotation).ArrayNum = 0;
  if (*piVar2 != uVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,uVar5,&(this->CurrentSourceRotation).AllocatorInstance,0,piVar2);
  }
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::AddZeroed
            (&this->CurrentSourceRotation,*(int *)&this->field_0x28c);
  uVar5 = *(uint *)&this->field_0x28c;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  piVar2 = &(this->CurrentSourceUp).ArrayMax;
  (this->CurrentSourceUp).ArrayNum = 0;
  if (*piVar2 != uVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar5,&(this->CurrentSourceUp).AllocatorInstance,0,piVar2);
  }
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::AddZeroed
            (&this->CurrentSourceUp,*(int *)&this->field_0x28c);
  uVar5 = *(uint *)&this->field_0x28c;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  piVar2 = &(this->CurrentSourceTangent).ArrayMax;
  (this->CurrentSourceTangent).ArrayNum = 0;
  if (*piVar2 != uVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar5,&(this->CurrentSourceTangent).AllocatorInstance,0,piVar2);
  }
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::AddZeroed
            (&this->CurrentSourceTangent,*(int *)&this->field_0x28c);
  uVar5 = *(uint *)&this->field_0x28c;
  if (-1 < (int)uVar5) {
    piVar2 = &(this->CurrentSourceTangentStrength).ArrayMax;
    piVar3 = &(this->CurrentSourceTangentStrength).ArrayNum;
    *piVar3 = 0;
    if (*piVar2 != uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar5,&(this->CurrentSourceTangentStrength).AllocatorInstance,0,piVar2);
    }
    iVar6 = *(int *)&this->field_0x28c;
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar6,&(this->CurrentSourceTangentStrength).AllocatorInstance,piVar3,
                        piVar2);
    memset((this->CurrentSourceTangentStrength).AllocatorInstance.Data + (longlong)iVar10 * 4,0,
           (longlong)iVar6 << 2);
    uVar5 = *(uint *)&this->field_0x28c;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    piVar2 = &(this->LastSourcePosition).ArrayMax;
    (this->LastSourcePosition).ArrayNum = 0;
    if (*piVar2 != uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar5,&(this->LastSourcePosition).AllocatorInstance,0,piVar2);
    }
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::AddZeroed
              (&this->LastSourcePosition,*(int *)&this->field_0x28c);
    uVar5 = *(uint *)&this->field_0x28c;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    piVar2 = &(this->LastSourceRotation).ArrayMax;
    (this->LastSourceRotation).ArrayNum = 0;
    if (*piVar2 != uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,0x10,uVar5,&(this->LastSourceRotation).AllocatorInstance,0,piVar2);
    }
    TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::AddZeroed
              (&this->LastSourceRotation,*(int *)&this->field_0x28c);
    uVar5 = *(uint *)&this->field_0x28c;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    piVar2 = &(this->LastSourceUp).ArrayMax;
    (this->LastSourceUp).ArrayNum = 0;
    if (*piVar2 != uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar5,&(this->LastSourceUp).AllocatorInstance,0,piVar2);
    }
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::AddZeroed
              (&this->LastSourceUp,*(int *)&this->field_0x28c);
    uVar5 = *(uint *)&this->field_0x28c;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    piVar2 = &(this->LastSourceTangent).ArrayMax;
    (this->LastSourceTangent).ArrayNum = 0;
    if (*piVar2 != uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar5,&(this->LastSourceTangent).AllocatorInstance,0,piVar2);
    }
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::AddZeroed
              (&this->LastSourceTangent,*(int *)&this->field_0x28c);
    uVar5 = *(uint *)&this->field_0x28c;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    piVar2 = &(this->LastSourceTangentStrength).ArrayMax;
    piVar3 = &(this->LastSourceTangentStrength).ArrayNum;
    *piVar3 = 0;
    if (*piVar2 != uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar5,&(this->LastSourceTangentStrength).AllocatorInstance,0,piVar2);
    }
    iVar6 = *(int *)&this->field_0x28c;
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,iVar6,&(this->LastSourceTangentStrength).AllocatorInstance,piVar3,piVar2
                       );
    memset((this->LastSourceTangentStrength).AllocatorInstance.Data + (longlong)iVar10 * 4,0,
           (longlong)iVar6 << 2);
    uVar5 = *(uint *)&this->field_0x28c;
    if (-1 < (int)uVar5) {
      puVar1 = &this->field_0x2cc;
      *(undefined4 *)&this->field_0x2c8 = 0;
      if (*(uint *)puVar1 != uVar5) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar5,(ForAnyElementType *)&this->field_0x2c0,0,(int *)puVar1);
      }
      iVar6 = *(int *)&this->field_0x28c;
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,iVar6,(ForAnyElementType *)&this->field_0x2c0,
                          (int *)&this->field_0x2c8,(int *)puVar1);
      memset((void *)(*(longlong *)&this->field_0x2c0 + (longlong)iVar10 * 4),0,(longlong)iVar6 << 2
            );
      uVar5 = *(uint *)&this->field_0x28c;
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
      }
      puVar1 = &this->field_0x2dc;
      *(undefined4 *)&this->field_0x2d8 = 0;
      if (*(uint *)puVar1 != uVar5) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar5,(ForAnyElementType *)&this->field_0x2d0,0,(int *)puVar1);
      }
      iVar6 = *(int *)&this->field_0x28c;
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,iVar6,(ForAnyElementType *)&this->field_0x2d0,
                          (int *)&this->field_0x2d8,(int *)puVar1);
      memset((void *)(*(longlong *)&this->field_0x2d0 + (longlong)iVar10 * 4),0,(longlong)iVar6 << 2
            );
      uVar5 = *(uint *)&this->field_0x28c;
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
      }
      piVar2 = &(this->SourceOffsets).ArrayMax;
      (this->SourceOffsets).ArrayNum = 0;
      if (*piVar2 != uVar5) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,uVar5,&(this->SourceOffsets).AllocatorInstance,0,piVar2);
      }
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::AddZeroed
                (&this->SourceOffsets,*(int *)&this->field_0x28c);
      uVar5 = *(uint *)&this->field_0x28c;
      pTVar4 = &this->SourceIndices;
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
      }
      piVar2 = &(this->SourceIndices).ArrayMax;
      (this->SourceIndices).ArrayNum = 0;
      if (*piVar2 != uVar5) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar5,&pTVar4->AllocatorInstance,0,piVar2);
      }
      iVar6 = *(int *)&this->field_0x28c;
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,iVar6,&pTVar4->AllocatorInstance,&(this->SourceIndices).ArrayNum,
                          piVar2);
      memset((pTVar4->AllocatorInstance).Data + (longlong)iVar10 * 4,0,(longlong)iVar6 << 2);
      memset((pTVar4->AllocatorInstance).Data,0xff,(longlong)*(int *)&this->field_0x28c << 2);
      uVar5 = *(uint *)&this->field_0x28c;
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
      }
      piVar2 = &(this->SourceTimes).ArrayMax;
      piVar3 = &(this->SourceTimes).ArrayNum;
      *piVar3 = 0;
      if (*piVar2 != uVar5) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar5,&(this->SourceTimes).AllocatorInstance,0,piVar2);
      }
      iVar6 = *(int *)&this->field_0x28c;
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,iVar6,&(this->SourceTimes).AllocatorInstance,piVar3,piVar2);
      memset((this->SourceTimes).AllocatorInstance.Data + (longlong)iVar10 * 4,0,
             (longlong)iVar6 << 2);
      uVar5 = *(uint *)&this->field_0x28c;
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
      }
      piVar2 = &(this->LastSourceTimes).ArrayMax;
      piVar3 = &(this->LastSourceTimes).ArrayNum;
      *piVar3 = 0;
      if (*piVar2 != uVar5) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar5,&(this->LastSourceTimes).AllocatorInstance,0,piVar2);
      }
      iVar6 = *(int *)&this->field_0x28c;
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,iVar6,&(this->LastSourceTimes).AllocatorInstance,piVar3,piVar2);
      memset((this->LastSourceTimes).AllocatorInstance.Data + (longlong)iVar10 * 4,0,
             (longlong)iVar6 << 2);
      uVar5 = *(uint *)&this->field_0x28c;
      if (-1 < (int)uVar5) {
        piVar2 = &(this->CurrentLifetimes).ArrayMax;
        piVar3 = &(this->CurrentLifetimes).ArrayNum;
        *piVar3 = 0;
        if (*piVar2 != uVar5) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar5,&(this->CurrentLifetimes).AllocatorInstance,0,piVar2);
        }
        iVar6 = *(int *)&this->field_0x28c;
        iVar10 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,iVar6,&(this->CurrentLifetimes).AllocatorInstance,piVar3,piVar2);
        memset((this->CurrentLifetimes).AllocatorInstance.Data + (longlong)iVar10 * 4,0,
               (longlong)iVar6 << 2);
        uVar5 = *(uint *)&this->field_0x28c;
        if (-1 < (int)uVar5) {
          piVar2 = &(this->CurrentSizes).ArrayMax;
          piVar3 = &(this->CurrentSizes).ArrayNum;
          *piVar3 = 0;
          if (*piVar2 != uVar5) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar5,&(this->CurrentSizes).AllocatorInstance,0,piVar2);
          }
          iVar6 = *(int *)&this->field_0x28c;
          iVar10 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (4,4,iVar6,&(this->CurrentSizes).AllocatorInstance,piVar3,piVar2);
          memset((this->CurrentSizes).AllocatorInstance.Data + (longlong)iVar10 * 4,0,
                 (longlong)iVar6 << 2);
          *(undefined8 *)&this->field_0x280 = 0;
          ResolveSource(this);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
      }
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
}

// IsDynamicDataRequired @ 148205810

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
FParticleRibbonEmitterInstance::IsDynamicDataRequired
          (FParticleRibbonEmitterInstance *this,UParticleLODLevel *param_1)

{
  bool bVar1;
  
  bVar1 = FParticleEmitterInstance::IsDynamicDataRequired((FParticleEmitterInstance *)this,param_1);
  if (bVar1) {
    return 1 < *(int *)&this->field_0x18c;
  }
  return true;
}

// OnEmitterInstanceKilled @ 148208b20

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
FParticleRibbonEmitterInstance::OnEmitterInstanceKilled
          (FParticleRibbonEmitterInstance *this,FParticleEmitterInstance *param_1)

{
  if (this->SourceEmitter == param_1) {
    this->SourceEmitter = (FParticleEmitterInstance *)0x0;
  }
  return;
}

// ResolveSource @ 148212fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FParticleRibbonEmitterInstance::ResolveSource(FParticleRibbonEmitterInstance *this)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  uchar uVar4;
  UParticleModuleTrailSource *pUVar5;
  FScriptContainerElement *pFVar6;
  FParticleEmitterInstance *pFVar7;
  code *pcVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  wchar_t *_Str;
  ForAnyElementType _Str_00;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  longlong local_158;
  int local_150;
  longlong local_148;
  int local_140;
  FString local_138;
  FParticleSysParam local_128;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  pUVar5 = this->SourceModule;
  if ((pUVar5 != (UParticleModuleTrailSource *)0x0) && (pUVar5->SourceName != (FName)0x0)) {
    uVar4 = (pUVar5->SourceMethod).Value;
    if (uVar4 == '\x01') {
      if (this->SourceEmitter == (FParticleEmitterInstance *)0x0) {
        (**(code **)(**(longlong **)&this->field_0x10 + 0xe8))
                  (*(longlong **)&this->field_0x10,&local_148);
        uVar13 = 0;
        if (0 < local_140) {
          lVar15 = 0;
          iVar12 = local_140;
          do {
            uVar14 = 0;
            if ((int)uVar13 < iVar12) {
              uVar14 = ~uVar13 >> 0x1f;
            }
            if (uVar14 == 0) {
              local_160 = (longlong)iVar12;
              local_168 = (longlong)(int)uVar13;
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld");
              iVar12 = local_140;
              if (bVar10) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            pFVar7 = *(FParticleEmitterInstance **)(lVar15 + local_148);
            if ((pFVar7 != (FParticleEmitterInstance *)0x0) &&
               (pFVar7->SpriteTemplate->EmitterName == this->SourceModule->SourceName)) {
              this->SourceEmitter = pFVar7;
              return;
            }
            uVar13 = uVar13 + 1;
            lVar15 = lVar15 + 8;
          } while ((int)uVar13 < iVar12);
        }
      }
    }
    else if ((uVar4 == '\x02') && (this->SourceActor == (AActor *)0x0)) {
      (**(code **)(**(longlong **)&this->field_0x10 + 0xa8))
                (*(longlong **)&this->field_0x10,&local_158);
      uVar14 = 0;
      local_128.Name.ComparisonIndex.Value = 0;
      local_128.Name.Number = 0;
      local_128.Vector.field0_0x0._s_0.Y = 0.0;
      local_128.Vector.field0_0x0._s_0.Z = 0.0;
      local_128.Vector_Low.field0_0x0._s_0.X = 0.0;
      local_128.Vector_Low.field0_0x0._s_0.Y = 0.0;
      local_128.Actor.field0_0x0.DebugPtr = (TObjectPtr<AActor>_u_0)0x0;
      local_128.Material.field0_0x0.DebugPtr = (TObjectPtr<UMaterialInterface>_u_0)0x0;
      local_128.AsyncActorToWorld.Rotation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      local_128.AsyncActorToWorld.Rotation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      local_128.AsyncActorToWorld.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_128.AsyncActorToWorld.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_128.AsyncActorToWorld.Scale3D.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_128.AsyncActorToWorld.Scale3D.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      local_128.Vector.field0_0x0._s_0.X = 0.0;
      local_128.Vector_Low.field0_0x0._s_0.Z = 0.0;
      local_128.ParamType.Value = '\0';
      local_128.Scalar = 0.0;
      local_128.Scalar_Low = 0.0;
      local_128.Color.field0_0x0.Bits = (FColor_u_0)0x0;
      local_128.AsyncActorVelocity.field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_128.bAsyncDataCopyIsValid = false;
      local_128.AsyncActorVelocity.field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_128.AsyncActorVelocity.field0_0x0._s_0.Y =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar13 = uVar14;
      if (0 < local_150) {
        do {
          uVar11 = 0;
          if ((int)uVar13 < local_150) {
            uVar11 = ~uVar13 >> 0x1f;
          }
          if (uVar11 == 0) {
            local_160 = (longlong)local_150;
            local_168 = (longlong)(int)uVar13;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar10) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          FParticleSysParam::operator=
                    (&local_128,(FParticleSysParam *)((longlong)(int)uVar13 * 0xe0 + local_158));
          if (local_128.Name == this->SourceModule->SourceName) {
            this->SourceActor = (AActor *)local_128.Actor.field0_0x0;
            break;
          }
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < local_150);
      }
      if ((0 < this->SourceModule->SourceOffsetCount) && (0 < local_150)) {
        do {
          uVar11 = 0;
          uVar13 = uVar11;
          if ((int)uVar14 < local_150) {
            uVar13 = ~uVar14 >> 0x1f;
          }
          if (uVar13 == 0) {
            local_160 = (longlong)local_150;
            local_168 = (longlong)(int)uVar14;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               );
            if (bVar10) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          FParticleSysParam::operator=
                    (&local_128,(FParticleSysParam *)((longlong)(int)uVar14 * 0xe0 + local_158));
          ::FName::ToString(&local_128.Name,&local_138);
          _Str_00.Data = (FScriptContainerElement *)L"";
          if (local_138.Data.ArrayNum != 0) {
            _Str_00.Data = local_138.Data.AllocatorInstance.Data;
          }
          _Str = wcsstr((wchar_t *)_Str_00.Data,L"TrailSourceOffset");
          if (_Str != (wchar_t *)0x0) {
            uVar13 = _wtoi(_Str);
            lVar15 = (longlong)(int)uVar13;
            if (-1 < (int)uVar13) {
              if (local_128.ParamType.Value == '\x03') {
                pTVar2 = &this->SourceOffsets;
                iVar12 = (this->SourceOffsets).ArrayNum;
                piVar1 = &(this->SourceOffsets).ArrayMax;
                if (iVar12 == *piVar1) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x818,&pTVar2->AllocatorInstance,piVar1);
                }
                (this->SourceOffsets).ArrayNum = iVar12 + 1;
                pFVar3 = (pTVar2->AllocatorInstance).Data + lVar15 * 0x18;
                memmove(pFVar3 + 0x18,pFVar3,(longlong)(int)(iVar12 - uVar13) * 0x18);
                iVar12 = (this->SourceOffsets).ArrayNum;
                if ((int)uVar13 < iVar12) {
                  uVar11 = ~uVar13 >> 0x1f;
                }
                if ((uVar11 == 0) &&
                   (local_168 = lVar15, local_160 = (longlong)iVar12,
                   bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar10)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pFVar6 = (pTVar2->AllocatorInstance).Data;
                pFVar3 = pFVar6 + lVar15 * 0x18;
                *(double *)pFVar3 = local_128.Vector.field0_0x0._s_0.X;
                *(double *)(pFVar3 + 8) = local_128.Vector.field0_0x0._s_0.Y;
                *(double *)(pFVar6 + lVar15 * 0x18 + 0x10) = local_128.Vector.field0_0x0._s_0.Z;
              }
              else if (local_128.ParamType.Value == '\x01') {
                pTVar2 = &this->SourceOffsets;
                iVar12 = (this->SourceOffsets).ArrayNum;
                piVar1 = &(this->SourceOffsets).ArrayMax;
                if (iVar12 == *piVar1) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x818,&pTVar2->AllocatorInstance,piVar1);
                }
                (this->SourceOffsets).ArrayNum = iVar12 + 1;
                pFVar3 = (pTVar2->AllocatorInstance).Data + lVar15 * 0x18;
                memmove(pFVar3 + 0x18,pFVar3,(longlong)(int)(iVar12 - uVar13) * 0x18);
                pFVar6 = (pTVar2->AllocatorInstance).Data;
                pFVar3 = pFVar6 + lVar15 * 0x18;
                *(undefined8 *)pFVar3 = 0;
                *(undefined8 *)(pFVar3 + 8) = 0;
                *(undefined8 *)(pFVar6 + lVar15 * 0x18 + 0x10) = 0;
                iVar12 = (this->SourceOffsets).ArrayNum;
                dVar9 = (double)local_128.Scalar;
                if ((int)uVar13 < iVar12) {
                  uVar11 = ~uVar13 >> 0x1f;
                }
                if ((uVar11 == 0) &&
                   (local_168 = lVar15, local_160 = (longlong)iVar12,
                   bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar10)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pFVar3 = (pTVar2->AllocatorInstance).Data;
                *(double *)(pFVar3 + lVar15 * 0x18) = dVar9;
                *(undefined8 *)(pFVar3 + lVar15 * 0x18 + 8) = 0;
                *(undefined8 *)(pFVar3 + lVar15 * 0x18 + 0x10) = 0;
              }
            }
          }
          if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < local_150);
      }
    }
  }
  return;
}

// ResolveSourcePoint @ 148213590

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
FParticleRibbonEmitterInstance::ResolveSourcePoint
          (FParticleRibbonEmitterInstance *this,int param_1,TVector<double> *param_2,
          TQuat<double> *param_3,TVector<double> *param_4,TVector<double> *param_5,float *param_6)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  uchar uVar3;
  UParticleModuleTrailSource *pUVar4;
  USceneComponent *pUVar5;
  IParticleEmitterInstanceOwner *pIVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  float fVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  undefined1 uVar18;
  int iVar19;
  TTransform<double> *pTVar20;
  TQuat<double> *pTVar21;
  double *pdVar22;
  FRandomStream *pFVar23;
  longlong lVar24;
  TVector<double> *pTVar25;
  undefined1 (*pauVar26) [16];
  FParticleEmitterInstance *pFVar27;
  uint uVar28;
  uint uVar29;
  longlong lVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar38;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar56;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined4 uVar62;
  undefined4 uVar63;
  double dVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  FContext local_res8;
  IParticleEmitterInstanceOwner *local_238;
  IParticleEmitterInstanceOwner *local_230;
  IParticleEmitterInstanceOwner *local_228;
  TVector<double>_u_0 local_220;
  TVector<double>_u_0 local_208;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  TRotator<double> local_1c8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  double local_188;
  undefined1 local_180 [16];
  double local_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined1 local_148 [16];
  undefined1 local_128 [48];
  TVector<double> local_f8 [2];
  TQuat<double> local_c8 [4];
  
  lVar30 = (longlong)param_1;
  (**(code **)**(undefined8 **)&this->field_0x10)();
  dVar64 = __real_3ff0000000000000;
  pUVar4 = this->SourceModule;
  if (pUVar4 != (UParticleModuleTrailSource *)0x0) {
    uVar3 = (pUVar4->SourceMethod).Value;
    if (uVar3 == '\x01') {
      if (this->SourceEmitter == (FParticleEmitterInstance *)0x0) {
        ResolveSource(this);
      }
      pFVar27 = this->SourceEmitter;
      if (((pFVar27 != (FParticleEmitterInstance *)0x0) &&
          (pFVar27->ParticleIndices != (ushort *)0x0)) && (0 < pFVar27->ActiveParticles)) {
        uVar28 = (uint)~param_1 >> 0x1f;
        uVar29 = 0;
        if (param_1 < (this->SourceIndices).ArrayNum) {
          uVar29 = uVar28;
        }
        if ((uVar29 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          uVar18 = (*pcVar8)();
          return (bool)uVar18;
        }
        fVar14 = __real_3f800000;
        if (*(int *)((this->SourceIndices).AllocatorInstance.Data + lVar30 * 4) != -1) {
          pFVar27 = this->SourceEmitter;
          pcVar8 = *(code **)(pFVar27->_padding_ + 0x110);
          uVar29 = 0;
          if (param_1 < (this->SourceIndices).ArrayNum) {
            uVar29 = uVar28;
          }
          if ((uVar29 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar8 = (code *)swi(3);
            uVar18 = (*pcVar8)();
            return (bool)uVar18;
          }
          lVar24 = (*pcVar8)(pFVar27,*(undefined4 *)
                                      ((this->SourceIndices).AllocatorInstance.Data + lVar30 * 4));
          if ((lVar24 == 0) || (fVar14 < *(float *)(lVar24 + 0x90))) {
            uVar29 = 0;
            if (param_1 < (this->SourceIndices).ArrayNum) {
              uVar29 = uVar28;
            }
            if ((uVar29 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar8 = (code *)swi(3);
              uVar18 = (*pcVar8)();
              return (bool)uVar18;
            }
            *(undefined4 *)((this->SourceIndices).AllocatorInstance.Data + lVar30 * 4) = 0xffffffff;
          }
        }
        uVar29 = 0;
        if (param_1 < (this->SourceIndices).ArrayNum) {
          uVar29 = uVar28;
        }
        if ((uVar29 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar8 = (code *)swi(3);
          uVar18 = (*pcVar8)();
          return (bool)uVar18;
        }
        bVar17 = true;
        if ((*(int *)((this->SourceIndices).AllocatorInstance.Data + lVar30 * 4) == -1) &&
           (pFVar27 = this->SourceEmitter, 0 < pFVar27->ActiveParticles)) {
          iVar19 = 0;
          uVar3 = (this->SourceModule->SelectionMethod).Value;
          if (uVar3 == '\0') {
            local_res8.Owner = (FParticleEmitterInstance *)this;
            pFVar23 = UParticleModule::GetRandomStream
                                ((UParticleModule *)this->SourceModule,&local_res8);
            pFVar27 = this->SourceEmitter;
            iVar19 = pFVar27->ActiveParticles;
            if (iVar19 < 1) {
              iVar19 = 0;
            }
            else {
              uVar29 = pFVar23->Seed * 0xbb38435 + 0x3619636b;
              pFVar23->Seed = uVar29;
              pFVar27 = this->SourceEmitter;
              iVar19 = (int)(((float)(uVar29 >> 9 | 0x3f800000) - fVar14) * (float)iVar19);
            }
LAB_148213b84:
            if (iVar19 != -1) goto LAB_148213b89;
            uVar29 = 0xffffffff;
          }
          else {
            if (uVar3 == '\x01') {
              iVar19 = this->LastSelectedParticleIndex + 1;
              this->LastSelectedParticleIndex = iVar19;
              if (pFVar27->ActiveParticles <= iVar19) {
                this->LastSelectedParticleIndex = 0;
              }
              do {
                bVar16 = false;
                uVar29 = 0;
                if (*(int *)&this->field_0x28c < 1) break;
                lVar24 = 0;
                do {
                  if (uVar29 != param_1) {
                    uVar28 = 0;
                    if ((int)uVar29 < (this->SourceIndices).ArrayNum) {
                      uVar28 = ~uVar29 >> 0x1f;
                    }
                    if ((uVar28 == 0) &&
                       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar15)) {
                      pcVar8 = (code *)swi(3);
                      uVar18 = (*pcVar8)();
                      return (bool)uVar18;
                    }
                    if (*(uint *)((this->SourceIndices).AllocatorInstance.Data + lVar24) ==
                        (uint)this->SourceEmitter->ParticleIndices[this->LastSelectedParticleIndex])
                    {
                      bVar16 = true;
                    }
                  }
                  uVar29 = uVar29 + 1;
                  lVar24 = lVar24 + 4;
                } while ((int)uVar29 < *(int *)&this->field_0x28c);
                if (bVar16) {
                  this->LastSelectedParticleIndex = this->LastSelectedParticleIndex + 1;
                }
                else if (!bVar16) break;
              } while (this->LastSelectedParticleIndex < this->SourceEmitter->ActiveParticles);
              pFVar27 = this->SourceEmitter;
              iVar19 = this->LastSelectedParticleIndex;
              if (pFVar27->ActiveParticles <= iVar19) {
                this->LastSelectedParticleIndex = -1;
                iVar19 = -1;
              }
              goto LAB_148213b84;
            }
LAB_148213b89:
            uVar29 = (uint)pFVar27->ParticleIndices[iVar19];
          }
          uVar28 = 0;
          if (param_1 < (this->SourceIndices).ArrayNum) {
            uVar28 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar28 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar8 = (code *)swi(3);
            uVar18 = (*pcVar8)();
            return (bool)uVar18;
          }
          *(uint *)((this->SourceIndices).AllocatorInstance.Data + lVar30 * 4) = uVar29;
        }
        uVar29 = 0;
        if (param_1 < (this->SourceIndices).ArrayNum) {
          uVar29 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar8 = (code *)swi(3);
          uVar18 = (*pcVar8)();
          return (bool)uVar18;
        }
        iVar19 = *(int *)((this->SourceIndices).AllocatorInstance.Data + lVar30 * 4);
        if (iVar19 < 0) {
          pTVar25 = (TVector<double> *)0x0;
        }
        else {
          pTVar25 = (TVector<double> *)
                    (**(code **)(this->SourceEmitter->_padding_ + 0x110))
                              (this->SourceEmitter,iVar19);
        }
        pFVar27 = this->SourceEmitter;
        if (pTVar25 == (TVector<double> *)0x0) {
          lVar24 = (**(code **)((longlong)*pFVar27->Component + 0x10))();
          local_1b0 = *(double *)(lVar24 + 0x20);
          dStack_1a8 = *(double *)(lVar24 + 0x28);
          local_1a0 = *(double *)(lVar24 + 0x30);
          (param_2->field0_0x0)._s_0.X = local_1b0;
          (param_2->field0_0x0)._s_0.Y = dStack_1a8;
          (param_2->field0_0x0)._s_0.Z = local_1a0;
          pdVar22 = (double *)(**(code **)(**(longlong **)&this->field_0x10 + 0xc0))();
          dVar40 = pdVar22[1];
          (param_5->field0_0x0)._s_0.X = *pdVar22;
          (param_5->field0_0x0)._s_0.Y = dVar40;
          (param_5->field0_0x0)._s_0.Z = pdVar22[2];
          uVar29 = 0;
          if (param_1 < (this->SourceTimes).ArrayNum) {
            uVar29 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar8 = (code *)swi(3);
            uVar18 = (*pcVar8)();
            return (bool)uVar18;
          }
          *(undefined4 *)((this->SourceTimes).AllocatorInstance.Data + lVar30 * 4) = 0;
          uVar29 = 0;
          if (param_1 < (this->SourceIndices).ArrayNum) {
            uVar29 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar8 = (code *)swi(3);
            uVar18 = (*pcVar8)();
            return (bool)uVar18;
          }
          *(undefined4 *)((this->SourceIndices).AllocatorInstance.Data + lVar30 * 4) = 0xffffffff;
        }
        else {
          dVar40 = (pFVar27->SimulationToWorld).M[3][0];
          auVar43._0_8_ = (pFVar27->SimulationToWorld).M[3][1];
          dVar13 = (pFVar27->SimulationToWorld).M[3][2];
          pIVar6 = pFVar27->Component;
          local_208._s_0.X = dVar40;
          local_208._s_0.Y = auVar43._0_8_;
          local_208._s_0.Z = dVar13;
          bVar16 = UE::Math::TVector<double>::ContainsNaN(pTVar25 + 1);
          if ((((bVar16) &&
               (local_238 = pIVar6,
               bVar16 = `FParticleRibbonEmitterInstance::ResolveSourcePoint'::__l47::<lambda_1>::
                        operator()(&local_238), !bVar16)) ||
              ((bVar16 = UE::Math::TVector<double>::ContainsNaN(pTVar25), bVar16 &&
               (local_230 = pIVar6,
               bVar16 = `FParticleRibbonEmitterInstance::ResolveSourcePoint'::__l47::<lambda_2>::
                        operator()(&local_230), !bVar16)))) ||
             ((bVar16 = UE::Math::TVector<double>::ContainsNaN((TVector<double> *)&local_208._s_0),
              bVar16 && (local_228 = pIVar6,
                        bVar16 = `FParticleRibbonEmitterInstance::ResolveSourcePoint'::__l47::
                                 <lambda_3>::operator()(&local_228), !bVar16)))) {
            if ((2 < (byte)LogParticles._0_1_) &&
               (((UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles)
                 , 2 < (byte)LogParticles._0_1_ &&
                 (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles)
                 , 2 < (byte)LogParticles._0_1_)) &&
                (UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles),
                2 < (byte)LogParticles._0_1_)))) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
            }
            iVar19 = 0;
            if (0 < this->SourceEmitter->ActiveParticles) {
              do {
                if (2 < (byte)LogParticles._0_1_) {
                  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles)
                  ;
                }
                iVar19 = iVar19 + 1;
              } while (iVar19 < this->SourceEmitter->ActiveParticles);
            }
            if (2 < (byte)LogParticles._0_1_) {
              UE::Logging::Private::BasicLog<3>
                        ((FStaticBasicLogRecord *)&PTR_u_______________P_151a3c170,
                         (FLogCategoryBase *)&LogParticles);
            }
            iVar19 = 0;
            if (0 < this->SourceEmitter->ActiveParticles) {
              do {
                if (2 < (byte)LogParticles._0_1_) {
                  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles)
                  ;
                }
                lVar24 = (**(code **)(this->SourceEmitter->_padding_ + 0x110))
                                   (this->SourceEmitter,iVar19);
                if (lVar24 == 0) {
                  if (2 < (byte)LogParticles._0_1_) {
                    UE::Logging::Private::BasicLog<3>
                              (&::LOG_Static,(FLogCategoryBase *)&LogParticles);
                  }
                }
                else if (((((2 < (byte)LogParticles._0_1_) &&
                           (UE::Logging::Private::BasicLog<3>
                                      (&::LOG_Static,(FLogCategoryBase *)&LogParticles),
                           2 < (byte)LogParticles._0_1_)) &&
                          ((UE::Logging::Private::BasicLog<3>
                                      (&::LOG_Static,(FLogCategoryBase *)&LogParticles),
                           2 < (byte)LogParticles._0_1_ &&
                           ((UE::Logging::Private::BasicLog<3>
                                       (&::LOG_Static,(FLogCategoryBase *)&LogParticles),
                            2 < (byte)LogParticles._0_1_ &&
                            (UE::Logging::Private::BasicLog<3>
                                       (&::LOG_Static,(FLogCategoryBase *)&LogParticles),
                            2 < (byte)LogParticles._0_1_)))))) &&
                         (UE::Logging::Private::BasicLog<3>
                                    (&::LOG_Static,(FLogCategoryBase *)&LogParticles),
                         2 < (byte)LogParticles._0_1_)) &&
                        (((((UE::Logging::Private::BasicLog<3>
                                       (&::LOG_Static,(FLogCategoryBase *)&LogParticles),
                            2 < (byte)LogParticles._0_1_ &&
                            (UE::Logging::Private::BasicLog<3>
                                       (&::LOG_Static,(FLogCategoryBase *)&LogParticles),
                            2 < (byte)LogParticles._0_1_)) &&
                           (UE::Logging::Private::BasicLog<3>
                                      (&::LOG_Static,(FLogCategoryBase *)&LogParticles),
                           2 < (byte)LogParticles._0_1_)) &&
                          ((UE::Logging::Private::BasicLog<3>
                                      (&::LOG_Static,(FLogCategoryBase *)&LogParticles),
                           2 < (byte)LogParticles._0_1_ &&
                           (UE::Logging::Private::BasicLog<3>
                                      (&::LOG_Static,(FLogCategoryBase *)&LogParticles),
                           2 < (byte)LogParticles._0_1_)))) &&
                         ((UE::Logging::Private::BasicLog<3>
                                     (&::LOG_Static,(FLogCategoryBase *)&LogParticles),
                          2 < (byte)LogParticles._0_1_ &&
                          ((UE::Logging::Private::BasicLog<3>
                                      (&::LOG_Static,(FLogCategoryBase *)&LogParticles),
                           2 < (byte)LogParticles._0_1_ &&
                           (UE::Logging::Private::BasicLog<3>
                                      (&::LOG_Static,(FLogCategoryBase *)&LogParticles),
                           2 < (byte)LogParticles._0_1_)))))))) {
                  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles)
                  ;
                }
                iVar19 = iVar19 + 1;
              } while (iVar19 < this->SourceEmitter->ActiveParticles);
            }
            bVar17 = false;
          }
          else {
            dVar38 = pTVar25[1].field0_0x0._s_0.Y;
            dVar2 = pTVar25[1].field0_0x0._s_0.Z;
            (param_2->field0_0x0)._s_0.X = dVar40 + pTVar25[1].field0_0x0._s_0.X;
            (param_2->field0_0x0)._s_0.Y = auVar43._0_8_ + dVar38;
            (param_2->field0_0x0)._s_0.Z = dVar13 + dVar2;
            dVar40 = pTVar25[1].field0_0x0._s_0.Y;
            auVar43._0_8_ = pTVar25[1].field0_0x0._s_0.Z;
            dVar13 = (pTVar25->field0_0x0)._s_0.Y;
            dVar38 = (pTVar25->field0_0x0)._s_0.Z;
            (param_5->field0_0x0)._s_0.X =
                 pTVar25[1].field0_0x0._s_0.X - (pTVar25->field0_0x0)._s_0.X;
            (param_5->field0_0x0)._s_0.Y = dVar40 - dVar13;
            (param_5->field0_0x0)._s_0.Z = auVar43._0_8_ - dVar38;
            uVar62 = *(undefined4 *)&pTVar25[6].field0_0x0;
            uVar29 = 0;
            if (param_1 < (this->SourceTimes).ArrayNum) {
              uVar29 = (uint)~param_1 >> 0x1f;
            }
            if ((uVar29 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar8 = (code *)swi(3);
              uVar18 = (*pcVar8)();
              return (bool)uVar18;
            }
            *(undefined4 *)((this->SourceTimes).AllocatorInstance.Data + lVar30 * 4) = uVar62;
          }
        }
        dVar40 = (param_5->field0_0x0)._s_0.X;
        auVar43._0_8_ = (param_5->field0_0x0)._s_0.Y;
        dVar13 = (param_5->field0_0x0)._s_0.Z;
        *param_6 = (float)(auVar43._0_8_ * auVar43._0_8_ + dVar40 * dVar40 + dVar13 * dVar13);
        pauVar26 = (undefined1 (*) [16])
                   (**(code **)((longlong)*this->SourceEmitter->Component + 0x10))();
        local_198 = 0;
        uStack_190 = 0;
        local_188 = dVar64;
        auVar49 = pauVar26[1];
        dVar39 = auVar49._0_8_;
        dVar2 = dVar64 * *(double *)pauVar26[5];
        dVar40 = *(double *)(pauVar26[5] + 8) * 0.0;
        dVar41 = *(double *)(pauVar26[1] + 8);
        dVar13 = *(double *)pauVar26[4] * 0.0;
        dVar38 = *(double *)(pauVar26[4] + 8) * 0.0;
        uVar62 = (undefined4)((ulonglong)dVar38 >> 0x20);
        local_148 = *pauVar26;
        auVar50 = blendpd(local_148,auVar49,2);
        auVar68._8_4_ = SUB84(dVar38,0);
        auVar68._0_8_ = dVar13;
        auVar68._12_4_ = uVar62;
        auVar69._0_8_ = auVar68._8_8_ * local_148._0_8_ - local_148._8_8_ * dVar13;
        auVar69._8_8_ = dVar2 * local_148._8_8_ - dVar39 * dVar38;
        auVar57._8_4_ = SUB84(dVar38,0);
        auVar57._0_8_ = dVar13;
        auVar57._12_4_ = uVar62;
        auVar46._8_4_ = SUB84(dVar40,0);
        auVar46._0_8_ = dVar2;
        auVar46._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
        auVar43 = blendpd(auVar57,auVar46,2);
        auVar54._0_8_ = auVar43._0_8_ * dVar39 - auVar50._0_8_ * dVar2;
        auVar54._8_8_ = auVar43._8_8_ * auVar49._8_8_ - auVar50._8_8_ * dVar40;
        auVar46 = *pauVar26;
        auVar57 = blendpd(auVar69,auVar54,2);
        dVar40 = auVar69._8_8_ + auVar69._8_8_;
        auVar43._0_8_ = auVar54._0_8_ + auVar54._0_8_;
        uVar62 = (undefined4)((ulonglong)auVar43._0_8_ >> 0x20);
        auVar70._0_8_ = auVar57._0_8_ + auVar57._0_8_;
        auVar70._8_8_ = auVar57._8_8_ + auVar57._8_8_;
        auVar58._8_4_ = SUB84(auVar43._0_8_,0);
        auVar58._0_8_ = dVar40;
        auVar58._12_4_ = uVar62;
        auVar51._8_4_ = SUB84(auVar43._0_8_,0);
        auVar51._0_8_ = dVar40;
        auVar51._12_4_ = uVar62;
        auVar57 = blendpd(auVar51,auVar70,2);
        auVar59._0_8_ = auVar58._8_8_ * auVar46._0_8_ - auVar46._8_8_ * dVar40;
        auVar59._8_8_ = auVar70._0_8_ * auVar46._8_8_ - dVar39 * auVar43._0_8_;
        auVar46 = blendpd(auVar46,auVar49,2);
        auVar50._8_4_ = SUB84(auVar59._8_8_,0);
        auVar50._0_8_ = auVar59._0_8_;
        auVar50._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
        auVar52._0_8_ = auVar57._0_8_ * dVar39 - auVar46._0_8_ * auVar70._0_8_;
        auVar52._8_8_ = auVar57._8_8_ * auVar49._8_8_ - auVar46._8_8_ * auVar70._8_8_;
        dVar40 = dVar40 * dVar41 + dVar13 + auVar50._8_8_;
        auVar43._0_8_ = auVar43._0_8_ * dVar41 + dVar38 + auVar52._0_8_;
        uVar62 = SUB84(auVar43._0_8_,0);
        uVar63 = (undefined4)((ulonglong)auVar43._0_8_ >> 0x20);
        auVar43 = blendpd(auVar59,auVar52,2);
        auVar49._8_4_ = uVar62;
        auVar49._0_8_ = dVar40;
        auVar49._12_4_ = uVar63;
        *(undefined1 (*) [16])&param_4->field0_0x0 = auVar49;
        local_180._8_4_ = uVar62;
        local_180._0_8_ = dVar40;
        local_180._12_4_ = uVar63;
        local_170 = auVar70._0_8_ * dVar41 + dVar2 + auVar43._0_8_;
        (param_4->field0_0x0)._s_0.Z = local_170;
        param_3->X = 0.0;
        param_3->Y = 0.0;
        param_3->Z = 0.0;
        param_3->W = 1.0;
        if (bVar17) {
          return true;
        }
      }
    }
    else if ((uVar3 == '\x02') && (pUVar4->SourceName != (FName)0x0)) {
      if (this->SourceActor == (AActor *)0x0) {
        ResolveSource(this);
      }
      if (this->SourceActor != (AActor *)0x0) {
        pUVar5 = (this->SourceActor->RootComponent).field0_0x0.DebugPtr;
        if (pUVar5 == (USceneComponent *)0x0) {
          pTVar20 = &UE::Math::TTransform<double>::Identity;
        }
        else {
          pTVar20 = &pUVar5->ComponentToWorld;
        }
        auVar49 = *(undefined1 (*) [16])(pTVar20->Rotation).XY.m128d_f64;
        auVar46 = *(undefined1 (*) [16])(pTVar20->Rotation).ZW.m128d_f64;
        dVar2 = (pTVar20->Translation).XY.m128d_f64[1];
        dVar40 = (pTVar20->Scale3D).XY.m128d_f64[0];
        dVar13 = (pTVar20->Scale3D).XY.m128d_f64[1];
        dVar38 = (pTVar20->Scale3D).ZW.m128d_f64[0];
        dVar41 = (pTVar20->Scale3D).ZW.m128d_f64[1];
        auVar43._0_8_ = (pTVar20->Translation).ZW.m128d_f64[0];
        (param_2->field0_0x0)._s_0.X = (pTVar20->Translation).XY.m128d_f64[0];
        (param_2->field0_0x0)._s_0.Y = dVar2;
        (param_2->field0_0x0)._s_0.Z = auVar43._0_8_;
        local_1e8 = auVar49;
        local_1d8 = auVar46;
        UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_1e8,&local_1c8);
        pTVar21 = UE::Math::TRotator<double>::Quaternion(&local_1c8,local_c8);
        auVar43._0_8_ = pTVar21->Y;
        dVar2 = pTVar21->Z;
        dVar39 = pTVar21->W;
        param_3->X = pTVar21->X;
        param_3->Y = auVar43._0_8_;
        param_3->Z = dVar2;
        param_3->W = dVar39;
        pdVar22 = (double *)
                  (**(code **)(this->SourceActor->_padding_ + 0x360))(this->SourceActor,local_128);
        dVar64 = dVar64 * dVar38;
        dVar41 = dVar41 * 0.0;
        auVar43._0_8_ = pdVar22[1];
        dVar39 = auVar46._0_8_;
        dVar56 = auVar49._8_8_;
        (param_5->field0_0x0)._s_0.X = *pdVar22;
        (param_5->field0_0x0)._s_0.Y = auVar43._0_8_;
        auVar43._0_8_ = pdVar22[2];
        (param_5->field0_0x0)._s_0.Z = auVar43._0_8_;
        dVar38 = (param_5->field0_0x0)._s_0.Y;
        dVar2 = (param_5->field0_0x0)._s_0.X;
        auVar57 = blendpd(auVar49,auVar46,2);
        dVar12 = auVar46._8_8_;
        *param_6 = (float)(dVar38 * dVar38 + dVar2 * dVar2 + auVar43._0_8_ * auVar43._0_8_);
        dVar40 = dVar40 * 0.0;
        dVar13 = dVar13 * 0.0;
        uVar62 = (undefined4)((ulonglong)dVar13 >> 0x20);
        auVar31._8_4_ = auVar46._0_4_;
        auVar31._0_8_ = dVar56;
        auVar31._12_4_ = auVar46._4_4_;
        auVar65._8_4_ = SUB84(dVar13,0);
        auVar65._0_8_ = dVar40;
        auVar65._12_4_ = uVar62;
        auVar42._8_4_ = SUB84(dVar13,0);
        auVar42._0_8_ = dVar40;
        auVar42._12_4_ = uVar62;
        auVar10._8_4_ = SUB84(dVar41,0);
        auVar10._0_8_ = dVar64;
        auVar10._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
        auVar43 = blendpd(auVar42,auVar10,2);
        auVar66._0_8_ = auVar65._8_8_ * auVar49._0_8_ - dVar56 * dVar40;
        auVar66._8_8_ = dVar64 * dVar56 - auVar31._8_8_ * dVar13;
        auVar44._0_8_ = auVar43._0_8_ * dVar39 - auVar57._0_8_ * dVar64;
        auVar44._8_8_ = auVar43._8_8_ * dVar12 - auVar57._8_8_ * dVar41;
        dVar38 = auVar66._8_8_ + auVar66._8_8_;
        dVar2 = auVar44._0_8_ + auVar44._0_8_;
        uVar62 = SUB84(dVar2,0);
        uVar63 = (undefined4)((ulonglong)dVar2 >> 0x20);
        auVar43 = blendpd(auVar66,auVar44,2);
        auVar67._0_8_ = auVar43._0_8_ + auVar43._0_8_;
        auVar67._8_8_ = auVar43._8_8_ + auVar43._8_8_;
        auVar47._8_4_ = uVar62;
        auVar47._0_8_ = dVar38;
        auVar47._12_4_ = uVar63;
        auVar32._8_4_ = uVar62;
        auVar32._0_8_ = dVar38;
        auVar32._12_4_ = uVar63;
        auVar45._8_4_ = uVar62;
        auVar45._0_8_ = dVar38;
        auVar45._12_4_ = uVar63;
        auVar46 = blendpd(auVar45,auVar67,2);
        auVar48._0_8_ = auVar47._8_8_ * auVar49._0_8_ - dVar38 * dVar56;
        auVar48._8_8_ = auVar67._0_8_ * dVar56 - auVar32._8_8_ * dVar39;
        auVar33._8_4_ = SUB84(auVar67._8_8_,0);
        auVar33._0_8_ = auVar67._0_8_;
        auVar33._12_4_ = (int)((ulonglong)auVar67._8_8_ >> 0x20);
        auVar43._0_8_ = auVar46._0_8_ * dVar39 - auVar67._0_8_ * auVar57._0_8_;
        auVar43._8_8_ = auVar46._8_8_ * dVar12 - auVar33._8_8_ * auVar57._8_8_;
        auVar34._8_4_ = SUB84(auVar48._8_8_,0);
        auVar34._0_8_ = auVar48._0_8_;
        auVar34._12_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
        dVar40 = dVar38 * dVar12 + dVar40;
        dVar13 = dVar2 * dVar12 + dVar13;
        auVar49 = blendpd(auVar48,auVar43,2);
        dVar38 = auVar34._8_8_;
        dVar64 = auVar67._0_8_ * dVar12 + dVar64 + auVar49._0_8_;
        goto LAB_1482147a4;
      }
    }
  }
  lVar24 = (**(code **)(**(longlong **)&this->field_0x10 + 0x10))();
  local_168 = *(double *)(lVar24 + 0x20);
  dStack_160 = *(double *)(lVar24 + 0x28);
  local_158 = *(double *)(lVar24 + 0x30);
  (param_2->field0_0x0)._s_0.X = local_168;
  (param_2->field0_0x0)._s_0.Y = dStack_160;
  (param_2->field0_0x0)._s_0.Z = local_158;
  pUVar4 = this->SourceModule;
  if (((pUVar4 != (UParticleModuleTrailSource *)0x0) && (0 < pUVar4->SourceOffsetCount)) &&
     (param_1 < (pUVar4->SourceOffsetDefaults).ArrayNum)) {
    if ((param_1 < 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar8 = (code *)swi(3);
      uVar18 = (*pcVar8)();
      return (bool)uVar18;
    }
    pFVar7 = (pUVar4->SourceOffsetDefaults).AllocatorInstance.Data;
    pFVar1 = pFVar7 + lVar30 * 0x18;
    dVar40 = *(double *)pFVar1;
    auVar43._0_8_ = *(double *)(pFVar1 + 8);
    local_220._s_0.Z = (double)*(undefined8 *)(pFVar7 + lVar30 * 0x18 + 0x10);
    local_220._s_0.X = dVar40;
    local_220._s_0.Y = auVar43._0_8_;
    if ((*(longlong *)&this->field_0x18 != 0) &&
       ((*(byte *)(*(longlong *)(*(longlong *)&this->field_0x18 + 0x30) + 0x71) & 1) == 0)) {
      pTVar20 = (TTransform<double> *)(**(code **)(**(longlong **)&this->field_0x10 + 0x10))();
      pTVar25 = UE::Math::TTransform<double>::TransformVector
                          (pTVar20,local_f8,(TVector<double> *)&local_220._s_0);
      local_220._s_0.Z = (pTVar25->field0_0x0)._s_0.Z;
      dVar40 = (pTVar25->field0_0x0)._s_0.X;
      auVar43._0_8_ = (pTVar25->field0_0x0)._s_0.Y;
    }
    (param_2->field0_0x0)._s_0.X = dVar40 + (param_2->field0_0x0)._s_0.X;
    (param_2->field0_0x0)._s_0.Y = auVar43._0_8_ + (param_2->field0_0x0)._s_0.Y;
    (param_2->field0_0x0)._s_0.Z = local_220._s_0.Z + (param_2->field0_0x0)._s_0.Z;
  }
  pdVar22 = (double *)(**(code **)(**(longlong **)&this->field_0x10 + 0x10))();
  dVar40 = pdVar22[1];
  auVar43._0_8_ = pdVar22[2];
  dVar13 = pdVar22[3];
  param_3->X = *pdVar22;
  param_3->Y = dVar40;
  param_3->Z = auVar43._0_8_;
  param_3->W = dVar13;
  pdVar22 = (double *)(**(code **)(**(longlong **)&this->field_0x10 + 0xc0))();
  dVar40 = pdVar22[1];
  (param_5->field0_0x0)._s_0.X = *pdVar22;
  (param_5->field0_0x0)._s_0.Y = dVar40;
  dVar40 = pdVar22[2];
  (param_5->field0_0x0)._s_0.Z = dVar40;
  auVar43._0_8_ = (param_5->field0_0x0)._s_0.X;
  dVar13 = (param_5->field0_0x0)._s_0.Y;
  *param_6 = (float)(dVar13 * dVar13 + auVar43._0_8_ * auVar43._0_8_ + dVar40 * dVar40);
  pauVar26 = (undefined1 (*) [16])(**(code **)(**(longlong **)&this->field_0x10 + 0x10))();
  auVar49 = pauVar26[1];
  dVar41 = auVar49._0_8_;
  dVar40 = *(double *)pauVar26[4] * 0.0;
  dVar13 = *(double *)(pauVar26[4] + 8) * 0.0;
  uVar62 = (undefined4)((ulonglong)dVar13 >> 0x20);
  dVar64 = dVar64 * *(double *)pauVar26[5];
  auVar43._0_8_ = *(double *)(pauVar26[5] + 8) * 0.0;
  auVar46 = *pauVar26;
  auVar71._8_4_ = SUB84(dVar13,0);
  auVar71._0_8_ = dVar40;
  auVar71._12_4_ = uVar62;
  dVar2 = *(double *)(pauVar26[1] + 8);
  auVar57 = blendpd(auVar46,auVar49,2);
  auVar72._0_8_ = auVar71._8_8_ * auVar46._0_8_ - auVar46._8_8_ * dVar40;
  auVar72._8_8_ = dVar64 * auVar46._8_8_ - dVar41 * dVar13;
  auVar35._8_4_ = SUB84(dVar13,0);
  auVar35._0_8_ = dVar40;
  auVar35._12_4_ = uVar62;
  auVar11._8_4_ = SUB84(auVar43._0_8_,0);
  auVar11._0_8_ = dVar64;
  auVar11._12_4_ = (int)((ulonglong)auVar43._0_8_ >> 0x20);
  auVar46 = blendpd(auVar35,auVar11,2);
  auVar36._0_8_ = auVar46._0_8_ * dVar41 - auVar57._0_8_ * dVar64;
  auVar36._8_8_ = auVar46._8_8_ * auVar49._8_8_ - auVar57._8_8_ * auVar43._0_8_;
  auVar46 = *pauVar26;
  auVar43 = blendpd(auVar72,auVar36,2);
  auVar73._0_8_ = auVar43._0_8_ + auVar43._0_8_;
  auVar73._8_8_ = auVar43._8_8_ + auVar43._8_8_;
  auVar43._0_8_ = auVar72._8_8_ + auVar72._8_8_;
  dVar38 = auVar36._0_8_ + auVar36._0_8_;
  uVar62 = (undefined4)((ulonglong)dVar38 >> 0x20);
  auVar60._8_4_ = SUB84(dVar38,0);
  auVar60._0_8_ = auVar43._0_8_;
  auVar60._12_4_ = uVar62;
  auVar53._8_4_ = SUB84(dVar38,0);
  auVar53._0_8_ = auVar43._0_8_;
  auVar53._12_4_ = uVar62;
  auVar54 = blendpd(auVar53,auVar73,2);
  auVar57 = blendpd(auVar46,auVar49,2);
  auVar61._0_8_ = auVar60._8_8_ * auVar46._0_8_ - auVar46._8_8_ * auVar43._0_8_;
  auVar61._8_8_ = auVar73._0_8_ * auVar46._8_8_ - dVar41 * dVar38;
  auVar37._8_4_ = SUB84(auVar61._8_8_,0);
  auVar37._0_8_ = auVar61._0_8_;
  auVar37._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
  auVar55._0_8_ = auVar54._0_8_ * dVar41 - auVar57._0_8_ * auVar73._0_8_;
  auVar55._8_8_ = auVar54._8_8_ * auVar49._8_8_ - auVar57._8_8_ * auVar73._8_8_;
  auVar49 = blendpd(auVar61,auVar55,2);
  dVar64 = auVar73._0_8_ * dVar2 + dVar64 + auVar49._0_8_;
  dVar40 = auVar43._0_8_ * dVar2 + dVar40;
  dVar13 = dVar38 * dVar2 + dVar13;
  dVar38 = auVar37._8_8_;
  auVar43._0_8_ = auVar55._0_8_;
LAB_1482147a4:
  auVar9._8_4_ = SUB84(dVar13 + auVar43._0_8_,0);
  auVar9._0_8_ = dVar40 + dVar38;
  auVar9._12_4_ = (int)((ulonglong)(dVar13 + auVar43._0_8_) >> 0x20);
  *(undefined1 (*) [16])&param_4->field0_0x0 = auVar9;
  (param_4->field0_0x0)._s_0.Z = dVar64;
  return true;
}

// SetupTrailModules @ 148219a90

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
FParticleRibbonEmitterInstance::SetupTrailModules(FParticleRibbonEmitterInstance *this)

{
  TArray<TObjectPtr<UParticleModule>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  UParticleModuleTrailSource *pUVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UParticleLODLevel *pUVar8;
  UClass *pUVar9;
  int *piVar10;
  longlong lVar11;
  int iVar12;
  UParticleModuleTrailSource *pUVar13;
  UParticleModuleTrailSource *pUVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  
  pUVar8 = UParticleEmitter::GetLODLevel(*(UParticleEmitter **)&this->field_0x8,0);
  if ((pUVar8 == (UParticleLODLevel *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODLevel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                         ,0x7da,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar15 = 0;
  if (0 < (pUVar8->Modules).ArrayNum) {
    lVar16 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar15 < (pUVar8->Modules).ArrayNum) {
        uVar6 = ~uVar15 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar3 = *(UParticleModuleTrailSource **)((pUVar8->Modules).AllocatorInstance.Data + lVar16);
      if (pUVar3 == (UParticleModuleTrailSource *)0x0) {
LAB_148219b90:
        pUVar13 = (UParticleModuleTrailSource *)0x0;
        if (pUVar3 != (UParticleModuleTrailSource *)0x0) goto LAB_148219b97;
LAB_148219bbf:
        pUVar14 = (UParticleModuleTrailSource *)0x0;
      }
      else {
        pUVar9 = Z_Construct_UClass_UParticleModuleSpawnPerUnit_NoRegister();
        iVar12 = (int)pUVar9->_padding_;
        if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar12) ||
           (pUVar13 = pUVar3,
           (longlong *)
           *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
           &pUVar9->_padding_)) goto LAB_148219b90;
LAB_148219b97:
        pUVar9 = Z_Construct_UClass_UParticleModuleTrailSource_NoRegister();
        iVar12 = (int)pUVar9->_padding_;
        if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar12) ||
           (pUVar14 = pUVar3,
           (longlong *)
           *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
           &pUVar9->_padding_)) goto LAB_148219bbf;
      }
      if (pUVar13 == (UParticleModuleTrailSource *)0x0) {
        if (pUVar14 != (UParticleModuleTrailSource *)0x0) {
          lVar17 = *(longlong *)&this->field_0x8;
          this->SourceModule = pUVar14;
          uVar6 = ((uint)((ulonglong)pUVar14 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar14 >> 4)) *
                  -0x7a143595;
          uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
          if (*(int *)(lVar17 + 0x68) != *(int *)(lVar17 + 0x94)) {
            lVar11 = lVar17 + 0x98;
            if (*(longlong *)(lVar17 + 0xa0) != 0) {
              lVar11 = *(longlong *)(lVar17 + 0xa0);
            }
            iVar12 = *(int *)(lVar11 + (ulonglong)
                                       (*(int *)(lVar17 + 0xa8) - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4)
            ;
            if (iVar12 != -1) {
              lVar17 = *(longlong *)(lVar17 + 0x60);
              do {
                if (*(UParticleModuleTrailSource **)(lVar17 + (longlong)iVar12 * 0x18) == pUVar14) {
                  if (((iVar12 != -1) && (lVar17 = lVar17 + (longlong)iVar12 * 0x18, lVar17 != 0))
                     && (piVar10 = (int *)(lVar17 + 8), piVar10 != (int *)0x0)) {
                    this->TrailModule_Source_Offset = *piVar10;
                  }
                  break;
                }
                iVar12 = *(int *)(lVar17 + 0x10 + (longlong)iVar12 * 0x18);
              } while (iVar12 != -1);
            }
          }
          goto LAB_148219c8e;
        }
      }
      else {
        this->SpawnPerUnitModule = (UParticleModuleSpawnPerUnit *)pUVar13;
LAB_148219c8e:
        iVar12 = (pUVar8->UpdateModules).ArrayNum + -1;
        if (-1 < iVar12) {
          lVar11 = (longlong)iVar12;
          pTVar1 = &pUVar8->UpdateModules;
          lVar17 = lVar11 * 8;
          do {
            if (((pUVar8->UpdateModules).ArrayNum <= iVar12) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pUVar13 = *(UParticleModuleTrailSource **)((pTVar1->AllocatorInstance).Data + lVar17);
            if (pUVar13 == (UParticleModuleTrailSource *)0x0) {
              bVar5 = pUVar3 == (UParticleModuleTrailSource *)0x0;
            }
            else {
              bVar5 = pUVar13 == pUVar3;
            }
            if (bVar5) {
              if (((pUVar8->UpdateModules).ArrayNum <= iVar12) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar2 = (pTVar1->AllocatorInstance).Data + lVar11 * 8;
              iVar7 = ((pUVar8->UpdateModules).ArrayNum - iVar12) + -1;
              if (iVar7 != 0) {
                memmove(pFVar2,pFVar2 + 8,(longlong)iVar7 << 3);
              }
              piVar10 = &(pUVar8->UpdateModules).ArrayNum;
              *piVar10 = *piVar10 + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,&pTVar1->AllocatorInstance,(pUVar8->UpdateModules).ArrayNum,
                         &(pUVar8->UpdateModules).ArrayMax);
            }
            lVar11 = lVar11 + -1;
            lVar17 = lVar17 + -8;
            iVar12 = iVar12 + -1;
          } while (-1 < iVar12);
        }
        iVar12 = (pUVar8->SpawnModules).ArrayNum + -1;
        if (-1 < iVar12) {
          lVar11 = (longlong)iVar12;
          lVar17 = lVar11 * 8;
          do {
            if (((pUVar8->SpawnModules).ArrayNum <= iVar12) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pUVar13 = *(UParticleModuleTrailSource **)
                       ((pUVar8->SpawnModules).AllocatorInstance.Data + lVar17);
            if (pUVar13 == (UParticleModuleTrailSource *)0x0) {
              bVar5 = pUVar3 == (UParticleModuleTrailSource *)0x0;
            }
            else {
              bVar5 = pUVar13 == pUVar3;
            }
            if (bVar5) {
              if (((pUVar8->SpawnModules).ArrayNum <= iVar12) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar2 = (pUVar8->SpawnModules).AllocatorInstance.Data + lVar11 * 8;
              iVar7 = ((pUVar8->SpawnModules).ArrayNum - iVar12) + -1;
              if (iVar7 != 0) {
                memmove(pFVar2,pFVar2 + 8,(longlong)iVar7 << 3);
              }
              piVar10 = &(pUVar8->SpawnModules).ArrayNum;
              *piVar10 = *piVar10 + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,&(pUVar8->SpawnModules).AllocatorInstance,
                         (pUVar8->SpawnModules).ArrayNum,&(pUVar8->SpawnModules).ArrayMax);
            }
            lVar11 = lVar11 + -1;
            lVar17 = lVar17 + -8;
            iVar12 = iVar12 + -1;
          } while (-1 < iVar12);
        }
        iVar12 = (pUVar8->SpawningModules).ArrayNum + -1;
        if (-1 < iVar12) {
          lVar11 = (longlong)iVar12;
          lVar17 = lVar11 * 8;
          do {
            if (((pUVar8->SpawningModules).ArrayNum <= iVar12) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pUVar13 = *(UParticleModuleTrailSource **)
                       ((pUVar8->SpawningModules).AllocatorInstance.Data + lVar17);
            if (pUVar13 == (UParticleModuleTrailSource *)0x0) {
              bVar5 = pUVar3 == (UParticleModuleTrailSource *)0x0;
            }
            else {
              bVar5 = pUVar13 == pUVar3;
            }
            if (bVar5) {
              if (((pUVar8->SpawningModules).ArrayNum <= iVar12) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar2 = (pUVar8->SpawningModules).AllocatorInstance.Data + lVar11 * 8;
              iVar7 = ((pUVar8->SpawningModules).ArrayNum - iVar12) + -1;
              if (iVar7 != 0) {
                memmove(pFVar2,pFVar2 + 8,(longlong)iVar7 << 3);
              }
              piVar10 = &(pUVar8->SpawningModules).ArrayNum;
              *piVar10 = *piVar10 + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,&(pUVar8->SpawningModules).AllocatorInstance,
                         (pUVar8->SpawningModules).ArrayNum,&(pUVar8->SpawningModules).ArrayMax);
            }
            lVar11 = lVar11 + -1;
            lVar17 = lVar17 + -8;
            iVar12 = iVar12 + -1;
          } while (-1 < iVar12);
        }
      }
      uVar15 = uVar15 + 1;
      lVar16 = lVar16 + 8;
    } while ((int)uVar15 < (pUVar8->Modules).ArrayNum);
  }
  return;
}

// Spawn @ 14821b140

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
FParticleRibbonEmitterInstance::Spawn(FParticleRibbonEmitterInstance *this,float param_1)

{
  undefined1 *puVar1;
  TVector<float> *pTVar2;
  float fVar3;
  double dVar4;
  int iVar5;
  float fVar6;
  longlong *plVar7;
  FName FVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  bool bVar17;
  char cVar18;
  bool bVar19;
  uint uVar20;
  UObject *pUVar21;
  undefined1 (*pauVar22) [16];
  longlong lVar23;
  FName *pFVar24;
  FThreadSafeStaticStat<FStat_STAT_TrailParticlesSpawned> FVar25;
  FThreadStats *pFVar26;
  FThreadStatsPool *pFVar27;
  FTrailsBaseTypeDataPayload *pFVar28;
  FTrailsBaseTypeDataPayload *pFVar29;
  FThreadSafeStaticStat<FStat_STAT_SpriteParticlesSpawned> FVar30;
  FThreadSafeStaticStat<FStat_STAT_TrailParticles> FVar31;
  int iVar32;
  uint uVar33;
  FTrailsBaseTypeDataPayload *pFVar35;
  ushort *puVar36;
  ForAnyElementType FVar37;
  wchar_t *pwVar38;
  bool bVar39;
  int iVar40;
  byte *pbVar41;
  uint uVar42;
  FBaseParticle *pFVar43;
  FTrailsBaseTypeDataPayload *pFVar44;
  FTrailsBaseTypeDataPayload *pFVar45;
  FTrailsBaseTypeDataPayload *pFVar46;
  FTrailsBaseTypeDataPayload *pFVar47;
  FNameEntryId FVar48;
  longlong lVar49;
  longlong lVar50;
  uchar auVar51 [8];
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar55 [16];
  double dVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  double dVar61;
  double dVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined4 uVar68;
  float fVar69;
  double dVar70;
  double dVar71;
  float fVar72;
  undefined1 auVar73 [16];
  bool local_res18;
  uint local_264;
  uint local_250;
  FBaseParticle *local_248;
  int local_22c;
  byte *local_228;
  FTrailsBaseTypeDataPayload *local_220;
  FString local_218;
  longlong local_208;
  uint local_200;
  uint uStack_1fc;
  uint local_1f8;
  uint uStack_1f4;
  FString *local_1f0;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  FString local_1c8;
  FString local_1b8;
  FStatMessage local_1a8;
  FStatMessage local_198;
  FStatMessage local_188;
  FParticleRibbonEmitterInstance *local_178;
  undefined4 local_170;
  float local_16c;
  FBaseParticle *local_168;
  FParticleRibbonEmitterInstance *local_160;
  uint local_158;
  float local_154;
  FBaseParticle *local_150;
  FName local_148;
  FName local_140;
  FName local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  double local_120;
  undefined1 local_118 [16];
  double local_108;
  undefined1 local_f8 [16];
  double local_e8;
  byte *pbVar34;
  
  pbVar41 = (byte *)0x0;
  bVar39 = false;
  bVar17 = Spawn_Source(this,param_1);
  if (bVar17) {
    lVar50 = *(longlong *)&this->field_0x8;
    if ((*(int *)(lVar50 + 0x48) < 1) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar9 = (code *)swi(3);
      fVar52 = (float)(*pcVar9)();
      return fVar52;
    }
    lVar50 = **(longlong **)(lVar50 + 0x40);
    local_208 = lVar50;
    if ((lVar50 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("LODLevel",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                            ,0x4d4,L""), bVar17)) {
      pcVar9 = (code *)swi(3);
      fVar52 = (float)(*pcVar9)();
      return fVar52;
    }
    if ((*(longlong *)(lVar50 + 0x30) == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("LODLevel->RequiredModule",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                            ,0x4d5,L""), bVar17)) {
      pcVar9 = (code *)swi(3);
      fVar52 = (float)(*pcVar9)();
      return fVar52;
    }
    fVar52 = *(float *)&this->field_0x198;
    lVar23 = *(longlong *)(lVar50 + 0x50);
    pUVar21 = (UObject *)(**(code **)(**(longlong **)&this->field_0x10 + 8))();
    fVar53 = *(float *)&this->field_0x1a0;
    UParticleModuleSpawn::GetGlobalRateScale(*(UParticleModuleSpawn **)(lVar50 + 0x50));
    FRawDistributionFloat::GetValue
              ((FRawDistributionFloat *)(lVar23 + 0x68),fVar53,pUVar21,(FRandomStream *)0x0);
    fVar53 = UParticleEmitter::GetQualityLevelSpawnRateMult(*(UParticleEmitter **)&this->field_0x8);
    lVar23 = *(longlong *)(lVar50 + 0x50);
    pUVar21 = (UObject *)(**(code **)(**(longlong **)&this->field_0x10 + 8))();
    fVar54 = FRawDistributionFloat::GetValue
                       ((FRawDistributionFloat *)(lVar23 + 0x38),*(float *)&this->field_0x1a0,
                        pUVar21,(FRandomStream *)0x0);
    dVar13 = __real_3ff0000000000000;
    iVar5 = this->TrailTypeData->MaxParticleInTrailCount;
    dVar11 = (double)fVar53;
    if (__real_3ff0000000000000 <= (double)fVar53) {
      dVar11 = __real_3ff0000000000000;
    }
    if (dVar11 <= 0.0) {
      dVar11 = 0.0;
    }
    fVar54 = (float)((double)fVar54 * dVar11);
    fVar53 = fVar54 * param_1 + fVar52;
    iVar40 = (int)ROUND((fVar53 + fVar53) - __real_3f000000) >> 1;
    *(float *)&this->field_0x198 = fVar53 - (float)iVar40;
    iVar32 = iVar40;
    if (0 < iVar5) {
      if (0 < (iVar40 - iVar5) + *(int *)&this->field_0x18c) {
        (**(code **)(*(longlong *)this + 0x230))(this,0);
      }
      iVar32 = iVar5;
      if (iVar5 < iVar40) {
        iVar32 = iVar40;
      }
    }
    iVar32 = iVar32 + *(int *)&this->field_0x18c;
    if ((iVar32 < *(int *)&this->field_0x194) ||
       (cVar18 = (**(code **)(*(longlong *)this + 0x18))(this,(int)SQRT((float)iVar32) + iVar32 + 1)
       , cVar18 != '\0')) {
      uVar16 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      local_248 = (FBaseParticle *)0x0;
      local_250 = 0xffffffff;
      local_220 = (FTrailsBaseTypeDataPayload *)0x0;
      uVar20 = local_250;
      pFVar43 = local_248;
      pFVar47 = local_220;
      if (0 < *(int *)&this->field_0x18c) {
        puVar36 = *(ushort **)&this->field_0x170;
        pbVar34 = pbVar41;
        do {
          pFVar43 = (FBaseParticle *)
                    ((longlong)(int)(*(int *)&this->field_0x188 * (uint)*puVar36) +
                    *(longlong *)&this->field_0x168);
          pFVar47 = (FTrailsBaseTypeDataPayload *)
                    ((longlong)&(pFVar43->OldLocation).field0_0x0 +
                    (longlong)*(int *)&this->field_0x24);
          if (((*(uint *)((longlong)&(pFVar43->OldLocation).field0_0x0 +
                         (longlong)*(int *)&this->field_0x24) & 0xf0000000) == 0x40000000) &&
             (uVar20 = (uint)*puVar36, pFVar47->TrailIndex == 0)) break;
          uVar33 = (int)pbVar34 + 1;
          pbVar34 = (byte *)(ulonglong)uVar33;
          puVar36 = puVar36 + 1;
          uVar20 = local_250;
          pFVar43 = local_248;
          pFVar47 = local_220;
        } while ((int)uVar33 < *(int *)&this->field_0x18c);
      }
      local_220 = pFVar47;
      local_248 = pFVar43;
      local_250 = uVar20;
      local_res18 = local_248 == (FBaseParticle *)0x0;
      local_228 = (byte *)0x0;
      bVar17 = __real_322bcc77 <
               (float)((uint)this->TrailTypeData->TilingDistance &
                      __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (((*(UParticleModule **)(lVar50 + 0x58) != (UParticleModule *)0x0) &&
          (local_228 = FParticleEmitterInstance::GetModuleInstanceData
                                 ((FParticleEmitterInstance *)this,
                                  *(UParticleModule **)(lVar50 + 0x58)), local_228 != (byte *)0x0))
         && ((*local_228 & 9) == 0)) {
        local_228 = pbVar41;
      }
      fVar15 = __real_3f800000;
      fVar53 = *(float *)&this->field_0x290;
      if ((0.0 < fVar54) && (0 < iVar40)) {
        fVar54 = __real_3f800000 / fVar54;
        if ((this->TrailTypeData->RenderAxis).Value == '\x01') {
          pauVar22 = (undefined1 (*) [16])(**(code **)(**(longlong **)&this->field_0x10 + 0x10))();
          local_120 = dVar13;
          local_130 = 0;
          uStack_128 = 0;
          auVar65 = pauVar22[1];
          dVar70 = *(double *)pauVar22[4] * 0.0;
          dVar71 = *(double *)(pauVar22[4] + 8) * 0.0;
          auVar73._0_8_ = dVar13 * *(double *)pauVar22[5];
          auVar73._8_8_ = *(double *)(pauVar22[5] + 8) * 0.0;
          local_f8 = *pauVar22;
          dVar4 = *(double *)(pauVar22[1] + 8);
          auVar57 = blendpd(local_f8,auVar65,2);
          dVar11 = auVar65._0_8_;
          dVar12 = auVar73._0_8_ * local_f8._8_8_ - dVar11 * dVar71;
          auVar55._8_4_ = SUB84(dVar71,0);
          auVar55._0_8_ = dVar70;
          auVar55._12_4_ = (int)((ulonglong)dVar71 >> 0x20);
          auVar55 = blendpd(auVar55,auVar73,2);
          auVar66._8_4_ = SUB84(dVar12,0);
          auVar66._0_8_ = dVar71 * local_f8._0_8_ - local_f8._8_8_ * dVar70;
          auVar66._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
          auVar58._0_8_ = auVar55._0_8_ * dVar11 - auVar57._0_8_ * auVar73._0_8_;
          auVar58._8_8_ = auVar55._8_8_ * auVar65._8_8_ - auVar57._8_8_ * auVar73._8_8_;
          auVar55 = *pauVar22;
          auVar57 = blendpd(auVar66,auVar58,2);
          dVar12 = dVar12 + dVar12;
          dVar56 = auVar58._0_8_ + auVar58._0_8_;
          uVar68 = (undefined4)((ulonglong)dVar56 >> 0x20);
          auVar67._0_8_ = auVar57._0_8_ + auVar57._0_8_;
          auVar67._8_8_ = auVar57._8_8_ + auVar57._8_8_;
          auVar63._8_4_ = SUB84(dVar56,0);
          auVar63._0_8_ = dVar12;
          auVar63._12_4_ = uVar68;
          auVar59._8_4_ = SUB84(dVar56,0);
          auVar59._0_8_ = dVar12;
          auVar59._12_4_ = uVar68;
          auVar58 = blendpd(auVar55,auVar65,2);
          auVar64._0_8_ = auVar63._8_8_ * auVar55._0_8_ - auVar55._8_8_ * dVar12;
          auVar64._8_8_ = auVar67._0_8_ * auVar55._8_8_ - dVar11 * dVar56;
          auVar55 = blendpd(auVar59,auVar67,2);
          auVar57._8_4_ = SUB84(auVar64._8_8_,0);
          auVar57._0_8_ = auVar64._0_8_;
          auVar57._12_4_ = (int)((ulonglong)auVar64._8_8_ >> 0x20);
          auVar60._0_8_ = auVar55._0_8_ * dVar11 - auVar58._0_8_ * auVar67._0_8_;
          auVar60._8_8_ = auVar55._8_8_ * auVar65._8_8_ - auVar58._8_8_ * auVar67._8_8_;
          dVar11 = dVar4 * dVar12 + dVar70 + auVar57._8_8_;
          dVar12 = dVar4 * dVar56 + dVar71 + auVar60._0_8_;
          auVar65 = blendpd(auVar64,auVar60,2);
          local_108 = dVar4 * auVar67._0_8_ + auVar73._0_8_ + auVar65._0_8_;
          local_118._8_4_ = SUB84(dVar12,0);
          local_118._0_8_ = dVar11;
          local_118._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
          local_e8 = local_108;
          dVar56 = local_108;
        }
        else {
          dVar11 = 0.0;
          dVar12 = 0.0;
          dVar56 = dVar13;
        }
        fVar14 = __real_38d1b717;
        local_264 = 0;
        do {
          uVar20 = (uint)pbVar41;
          if ((*(int *)&this->field_0x194 < *(int *)&this->field_0x18c) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ActiveParticles <= MaxActiveParticles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                                  ,0x549,L""), bVar19)) {
            pcVar9 = (code *)swi(3);
            fVar52 = (float)(*pcVar9)();
            return fVar52;
          }
          uVar33 = (uint)*(ushort *)
                          (*(longlong *)&this->field_0x170 +
                          (longlong)*(int *)&this->field_0x18c * 2);
          fVar69 = ((fVar54 * fVar52 + param_1) - fVar54) - (float)(int)uVar20 * fVar54;
          pFVar43 = (FBaseParticle *)
                    ((longlong)(int)(uVar33 * *(int *)&this->field_0x188) +
                    *(longlong *)&this->field_0x168);
          pFVar47 = (FTrailsBaseTypeDataPayload *)
                    ((longlong)&(pFVar43->OldLocation).field0_0x0 +
                    (longlong)*(int *)&this->field_0x24);
          fVar72 = (float)(int)(uVar20 + 1) * (fVar15 / (float)iVar40);
          if (__real_3f800000 <= fVar72) {
            fVar72 = __real_3f800000;
          }
          if (fVar72 <= __real_00000000) {
            fVar72 = __real_00000000;
          }
          (**(code **)(*(longlong *)this + 200))
                    (this,pFVar43,&this->field_0x48,&UE::Math::TVector<double>::ZeroVector);
          if (*(longlong **)(lVar50 + 0x48) != (longlong *)0x0) {
            local_170 = *(undefined4 *)&this->field_0x24;
            local_178 = this;
            local_16c = fVar69;
            local_168 = pFVar43;
            (**(code **)(**(longlong **)(lVar50 + 0x48) + 0x2b8))();
          }
          lVar23 = local_208;
          uVar42 = 0;
          lVar49 = 0;
          if (0 < *(int *)(lVar50 + 0x78)) {
            do {
              uVar20 = 0;
              if ((int)uVar42 < *(int *)(lVar23 + 0x78)) {
                uVar20 = ~uVar42 >> 0x1f;
              }
              if ((uVar20 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar9 = (code *)swi(3);
                fVar52 = (float)(*pcVar9)();
                return fVar52;
              }
              plVar7 = *(longlong **)(*(longlong *)(lVar23 + 0x70) + lVar49 * 8);
              if ((char)plVar7[5] < '\0') {
                uVar20 = 0;
                if ((int)uVar42 < *(int *)(lVar23 + 0x78)) {
                  uVar20 = ~uVar42 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar9 = (code *)swi(3);
                  fVar52 = (float)(*pcVar9)();
                  return fVar52;
                }
                pcVar9 = *(code **)(*plVar7 + 0x2b8);
                local_158 = FParticleEmitterInstance::GetModuleDataOffset
                                      ((FParticleEmitterInstance *)this,
                                       *(UParticleModule **)
                                        (*(longlong *)(lVar23 + 0x70) + lVar49 * 8));
                local_160 = this;
                local_154 = fVar69;
                local_150 = pFVar43;
                (*pcVar9)(plVar7,&local_160);
              }
              uVar42 = uVar42 + 1;
              lVar49 = lVar49 + 1;
              lVar50 = local_208;
              uVar20 = local_264;
            } while ((int)uVar42 < *(int *)(lVar23 + 0x78));
          }
          (**(code **)(*(longlong *)this + 0xd0))
                    (this,pFVar43,
                     __real_3f800000 - (float)(int)(uVar20 + 1) * (fVar15 / (float)iVar40));
          pTVar2 = &pFVar43->Size;
          GetParticleLifetimeAndSize
                    (this,0,pFVar43,local_res18,&pFVar43->OneOverMaxLifetime,(float *)pTVar2);
          fVar3 = pFVar43->OneOverMaxLifetime;
          (pFVar43->Size).field0_0x0._s_0.Y = (pTVar2->field0_0x0)._s_0.X;
          fVar6 = (pFVar43->Size).field0_0x0._s_0.Z;
          *(undefined8 *)&(pFVar43->BaseSize).field0_0x0 = *(undefined8 *)&pTVar2->field0_0x0;
          (pFVar43->BaseSize).field0_0x0._s_0.Z = fVar6;
          pFVar43->RelativeTime = fVar69 * fVar3;
          if (local_228 != (byte *)0x0) {
            (**(code **)(**(longlong **)(lVar50 + 0x58) + 0x398))();
          }
          pFVar47->Flags = pFVar47->Flags | 0xfffffff;
          uVar20 = __xmm_80000000800000008000000080000000;
          auVar65 = ZEXT416(__xmm_80000000800000008000000080000000);
          iVar32 = 0;
          pFVar47->TrailIndex = 0;
          fVar69 = (pFVar43->Velocity).field0_0x0._s_0.Z;
          fVar3 = (pFVar43->Velocity).field0_0x0._s_0.Y;
          pFVar47[1].Flags = (uint)(param_1 * (pFVar43->Velocity).field0_0x0._s_0.X) ^ uVar20;
          pFVar47[1].TrailIndex = (uint)(param_1 * fVar3) ^ uVar20;
          pFVar47[1].TriangleCount = (uint)(param_1 * fVar69) ^ uVar20;
          pFVar47->SpawnTime = fVar72 * param_1 + fVar53;
          pFVar47->SpawnDelta = (float)(int)local_264 * fVar54;
          pFVar47[1].SpawnTime = (float)dVar11;
          pFVar47[1].SpawnDelta = (float)dVar12;
          pFVar47[1].TiledU = (float)dVar56;
          pFVar47->bInterpolatedSpawn = 0;
          pFVar47->bMovementSpawned = 0;
          pFVar47->SpawnedTessellationPoints = 1;
          if (local_res18 == false) {
            if ((local_248 != (FBaseParticle *)0x0) &&
               (bVar19 = FParticleTrailsEmitterInstance_Base::AddParticleHelper
                                   ((FParticleTrailsEmitterInstance_Base *)this,0,local_250,
                                    local_220,uVar33,pFVar47), bVar19)) goto LAB_14821ba93;
          }
          else {
            pFVar47->Flags = pFVar47->Flags & 0xfffffff;
            pFVar47->Flags = pFVar47->Flags | 0x40000000;
            if ((*(int *)&this->field_0x2d8 < 1) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar9 = (code *)swi(3);
              fVar52 = (float)(*pcVar9)();
              return fVar52;
            }
            local_res18 = false;
            **(undefined4 **)&this->field_0x2d0 = 0;
            pFVar47->TiledU = 0.0;
LAB_14821ba93:
            if (bVar17) {
              if (local_248 == (FBaseParticle *)0x0) {
                pFVar47->TiledU = 0.0;
              }
              else {
                dVar4 = (pFVar43->Location).field0_0x0._s_0.X -
                        (local_248->Location).field0_0x0._s_0.X;
                dVar70 = (pFVar43->Location).field0_0x0._s_0.Y -
                         (local_248->Location).field0_0x0._s_0.Y;
                dVar71 = (pFVar43->Location).field0_0x0._s_0.Z -
                         (local_248->Location).field0_0x0._s_0.Z;
                auVar10._8_8_ = 0;
                auVar10._0_8_ = dVar4 * dVar4 + dVar70 * dVar70 + dVar71 * dVar71;
                auVar65 = sqrtpd(auVar65,auVar10);
                if ((*(int *)&this->field_0x2d8 < 1) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar9 = (code *)swi(3);
                  fVar52 = (float)(*pcVar9)();
                  return fVar52;
                }
                **(float **)&this->field_0x2d0 =
                     (float)((double)**(float **)&this->field_0x2d0 + auVar65._0_8_);
                if ((*(int *)&this->field_0x2d8 < 1) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar9 = (code *)swi(3);
                  fVar52 = (float)(*pcVar9)();
                  return fVar52;
                }
                pFVar47->TiledU =
                     **(float **)&this->field_0x2d0 / this->TrailTypeData->TilingDistance;
              }
            }
            *(int *)&this->field_0x18c = *(int *)&this->field_0x18c + 1;
            if ((((float)(pFVar47[1].Flags & uVar16) <= fVar14) &&
                ((float)(pFVar47[1].TrailIndex & uVar16) <= fVar14)) &&
               (pFVar28 = pFVar47, (float)(pFVar47[1].TriangleCount & uVar16) <= fVar14)) {
              do {
                uVar20 = pFVar28->Flags & 0x3fff;
                pFVar44 = (FTrailsBaseTypeDataPayload *)0x0;
                pFVar28 = (FTrailsBaseTypeDataPayload *)0x0;
                if (uVar20 == 0x3fff) break;
                pFVar44 = (FTrailsBaseTypeDataPayload *)
                          ((longlong)(int)(uVar20 * *(int *)&this->field_0x188) +
                          *(longlong *)&this->field_0x168);
                pFVar28 = (FTrailsBaseTypeDataPayload *)
                          ((longlong)&pFVar44->Flags + (longlong)*(int *)&this->field_0x24);
              } while (pFVar28->bInterpolatedSpawn != 0);
              if (pFVar44 != (FTrailsBaseTypeDataPayload *)0x0) {
                dVar4 = (pFVar43->Location).field0_0x0._s_0.Y;
                dVar70 = *(double *)&pFVar44->PinchScaleFactor;
                dVar61 = dVar13 / (double)(pFVar47->SpawnTime - pFVar28->SpawnTime);
                dVar71 = (pFVar43->Location).field0_0x0._s_0.Z;
                dVar62 = *(double *)(pFVar44 + 1);
                pFVar47[1].Flags =
                     (int)(float)(((pFVar43->Location).field0_0x0._s_0.X -
                                  *(double *)&pFVar44->SpawnedTessellationPoints) * dVar61);
                pFVar47[1].TrailIndex = (int)(float)((dVar4 - dVar70) * dVar61);
                pFVar47[1].TriangleCount = (int)(float)((dVar71 - dVar62) * dVar61);
              }
            }
            local_220 = pFVar47;
            if ((iVar5 < *(int *)&this->field_0x18c) &&
               (cVar18 = (**(code **)(**(longlong **)&this->field_0x10 + 0x38))(), cVar18 != '\0'))
            {
              lVar23 = (**(code **)(**(longlong **)&this->field_0x10 + 0xd8))();
              if (lVar23 == 0) {
                FVar37.Data = (FScriptContainerElement *)L"No template";
              }
              else {
                lVar23 = (**(code **)(**(longlong **)&this->field_0x10 + 0xd8))();
                bVar39 = true;
                local_1d0 = *(FName *)(lVar23 + 0x18);
                ::FName::ToString(&local_1d0,&local_1c8);
                FVar37.Data = (FScriptContainerElement *)L"";
                if (local_1c8.Data.ArrayNum != 0) {
                  FVar37.Data = local_1c8.Data.AllocatorInstance.Data;
                }
              }
              ::FString::FString(&local_218,(wchar_t *)FVar37.Data);
              if ((bVar39) &&
                 (bVar39 = false,
                 local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
              }
              EnterCriticalSection((LPCRITICAL_SECTION)&GMaxParticleInTrailCountWarningCS);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                atexit(`FParticleRibbonEmitterInstance::Spawn'::__l106::
                       _dynamic_atexit_destructor_for__TemplateMaxCountWarnings__);
                _Init_thread_footer(&::_TSS0);
              }
              if (local_218.Data.ArrayNum == 0) {
                pwVar38 = L"";
              }
              else {
                iVar32 = local_218.Data.ArrayNum + -1;
                pwVar38 = (wchar_t *)local_218.Data.AllocatorInstance.Data;
              }
              uVar20 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar32,pwVar38);
              iVar32 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                       ::FindIndexByHash<FString>
                                 ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                                   *)&TemplateMaxCountWarnings,uVar20,&local_218);
              if ((iVar32 == -1) ||
                 (lVar23 = (longlong)iVar32 * 0x20 + TemplateMaxCountWarnings._0_8_, lVar23 == 0)) {
                local_1f0 = &local_218;
                TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                          ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                            *)&TemplateMaxCountWarnings,(uint)&local_22c,
                           (TKeyInitializer<FString_const_&> *)(ulonglong)uVar20,(bool *)&local_1f0)
                ;
                lVar23 = (longlong)local_22c * 0x20 + TemplateMaxCountWarnings._0_8_;
              }
              LeaveCriticalSection((LPCRITICAL_SECTION)&GMaxParticleInTrailCountWarningCS);
              if (*(int *)(lVar23 + 0x10) < *(int *)&this->field_0x18c) {
                *(int *)(lVar23 + 0x10) = *(int *)&this->field_0x18c;
                ::FString::PrintfImpl(&local_1b8,L"Ribbon with too many particles: %5d vs. %5d, %s")
                ;
                if (4 < (byte)LogParticles._0_1_) {
                  UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles)
                  ;
                }
                if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
                }
              }
              if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_218.Data.AllocatorInstance.Data);
              }
            }
            if (FThreadStats::bPrimaryEnable != false) {
              FVar25 = StatPtr_STAT_TrailParticlesSpawned;
              if (StatPtr_STAT_TrailParticlesSpawned ==
                  (FThreadSafeStaticStat<FStat_STAT_TrailParticlesSpawned>)0x0) {
                pFVar24 = ::FName::FName(&local_148,"STAT_TrailParticlesSpawned");
                FVar25 = (FThreadSafeStaticStat<FStat_STAT_TrailParticlesSpawned>)
                         FThreadSafeStaticStatBase::DoSetup
                                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TrailParticlesSpawned
                                    ,*pFVar24,L"Trail Ptcls Spawned","STATGROUP_Particles",
                                    "STATCAT_Advanced",L"Particles",true,true,ST_int64,false,false,
                                    MCR_Invalid);
              }
              FVar8 = *(FName *)FVar25;
              FVar48 = FVar8.ComparisonIndex.Value;
              uVar20 = FVar8.Number;
              local_200 = FVar48.Value;
              uStack_1fc = uVar20;
              if (((FVar8 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
                 (FThreadStats::TlsSlot != 0xffffffff)) {
                pFVar26 = TlsGetValue(FThreadStats::TlsSlot);
                if (pFVar26 == (FThreadStats *)0x0) {
                  pFVar27 = FThreadStatsPool::Get();
                  pFVar26 = FThreadStatsPool::GetFromPool(pFVar27);
                }
                local_1a8.NameAndInfo.Number = uVar20 & 0xffffafff | 0xa000;
                local_1a8.StatData.Pad[0] = '\x01';
                local_1a8.StatData.Pad[1] = '\0';
                local_1a8.StatData.Pad[2] = '\0';
                local_1a8.StatData.Pad[3] = '\0';
                local_1a8.StatData.Pad[4] = '\0';
                local_1a8.StatData.Pad[5] = '\0';
                local_1a8.StatData.Pad[6] = '\0';
                local_1a8.StatData.Pad[7] = '\0';
                local_1e8 = FVar8;
                local_1a8.NameAndInfo.Index.Value = FVar48.Value;
                FThreadStats::AddStatMessage(pFVar26,&local_1a8);
                FStatsTrace::Add(&local_1e8,1);
                if (pFVar26->ScopeCount == 0) {
                  FThreadStats::Flush(pFVar26,false,false);
                }
                else if (FThreadStats::bIsRawStatsActive != false) {
                  FThreadStats::FlushRawStats(pFVar26,false,false);
                }
              }
            }
            pFVar44 = (FTrailsBaseTypeDataPayload *)0x0;
            pFVar28 = pFVar47;
            if (this->TrailTypeData->bEnablePreviousTangentRecalculation == 1 &&
                this->TrailTypeData->bTangentRecalculationEveryFrame == 0) {
              do {
                uVar20 = pFVar28->Flags & 0x3fff;
                pFVar45 = pFVar44;
                pFVar28 = pFVar44;
                if (uVar20 == 0x3fff) break;
                pFVar45 = (FTrailsBaseTypeDataPayload *)
                          ((longlong)(int)(uVar20 * *(int *)&this->field_0x188) +
                          *(longlong *)&this->field_0x168);
                pFVar28 = (FTrailsBaseTypeDataPayload *)
                          ((longlong)&pFVar45->Flags + (longlong)*(int *)&this->field_0x24);
              } while (pFVar28->bInterpolatedSpawn != 0);
              if (pFVar45 != (FTrailsBaseTypeDataPayload *)0x0) {
                pFVar29 = pFVar28;
                pFVar35 = pFVar44;
                pFVar46 = pFVar44;
                if (pFVar28 != (FTrailsBaseTypeDataPayload *)0x0) {
                  do {
                    uVar20 = pFVar29->Flags & 0x3fff;
                    pFVar35 = pFVar44;
                    pFVar46 = pFVar44;
                    if (uVar20 == 0x3fff) break;
                    pFVar35 = (FTrailsBaseTypeDataPayload *)
                              ((longlong)(int)(uVar20 * *(int *)&this->field_0x188) +
                              *(longlong *)&this->field_0x168);
                    pFVar46 = (FTrailsBaseTypeDataPayload *)
                              ((longlong)&pFVar35->Flags + (longlong)*(int *)&this->field_0x24);
                    pFVar29 = pFVar46;
                  } while (pFVar46->bInterpolatedSpawn != 0);
                }
                if (pFVar35 == (FTrailsBaseTypeDataPayload *)0x0) {
                  fVar72 = pFVar28->SpawnTime;
                  dVar4 = *(double *)&pFVar45->SpawnedTessellationPoints;
                  dVar71 = (pFVar43->Location).field0_0x0._s_0.Y -
                           *(double *)&pFVar45->PinchScaleFactor;
                  dVar70 = (pFVar43->Location).field0_0x0._s_0.Z - *(double *)(pFVar45 + 1);
                }
                else {
                  fVar72 = pFVar46->SpawnTime;
                  dVar4 = *(double *)&pFVar35->SpawnedTessellationPoints;
                  dVar71 = (pFVar43->Location).field0_0x0._s_0.Y -
                           *(double *)&pFVar35->PinchScaleFactor;
                  dVar70 = (pFVar43->Location).field0_0x0._s_0.Z - *(double *)(pFVar35 + 1);
                }
                dVar62 = dVar13 / (double)(pFVar47->SpawnTime - fVar72);
                pFVar28[1].Flags =
                     (int)(float)(((pFVar43->Location).field0_0x0._s_0.X - dVar4) * dVar62);
                pFVar28[1].TrailIndex = (int)(float)(dVar71 * dVar62);
                pFVar28[1].TriangleCount = (int)(float)(dVar70 * dVar62);
              }
            }
            fVar72 = pFVar47->SpawnTime;
            if ((*(int *)&this->field_0x2a8 < 1) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar9 = (code *)swi(3);
              fVar52 = (float)(*pcVar9)();
              return fVar52;
            }
            **(float **)&this->field_0x2a0 = fVar72;
            local_250 = uVar33;
            local_248 = pFVar43;
          }
          if (FThreadStats::bPrimaryEnable != false) {
            FVar30 = StatPtr_STAT_SpriteParticlesSpawned;
            if (StatPtr_STAT_SpriteParticlesSpawned ==
                (FThreadSafeStaticStat<FStat_STAT_SpriteParticlesSpawned>)0x0) {
              pFVar24 = ::FName::FName(&local_140,"STAT_SpriteParticlesSpawned");
              FVar30 = (FThreadSafeStaticStat<FStat_STAT_SpriteParticlesSpawned>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SpriteParticlesSpawned,
                                  *pFVar24,L"Sprite Ptcls Spawned","STATGROUP_Particles",
                                  "STATCAT_Advanced",L"Particles",true,true,ST_int64,false,false,
                                  MCR_Invalid);
            }
            FVar8 = *(FName *)FVar30;
            FVar48 = FVar8.ComparisonIndex.Value;
            uVar20 = FVar8.Number;
            local_1f8 = FVar48.Value;
            uStack_1f4 = uVar20;
            if (((FVar8 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              pFVar26 = TlsGetValue(FThreadStats::TlsSlot);
              if (pFVar26 == (FThreadStats *)0x0) {
                pFVar27 = FThreadStatsPool::Get();
                pFVar26 = FThreadStatsPool::GetFromPool(pFVar27);
              }
              local_198.NameAndInfo.Number = uVar20 & 0xffffafff | 0xa000;
              local_198.StatData.Pad[0] = '\x01';
              local_198.StatData.Pad[1] = '\0';
              local_198.StatData.Pad[2] = '\0';
              local_198.StatData.Pad[3] = '\0';
              local_198.StatData.Pad[4] = '\0';
              local_198.StatData.Pad[5] = '\0';
              local_198.StatData.Pad[6] = '\0';
              local_198.StatData.Pad[7] = '\0';
              local_1e0 = FVar8;
              local_198.NameAndInfo.Index.Value = FVar48.Value;
              FThreadStats::AddStatMessage(pFVar26,&local_198);
              FStatsTrace::Add(&local_1e0,1);
              if (pFVar26->ScopeCount == 0) {
                FThreadStats::Flush(pFVar26,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(pFVar26,false,false);
              }
            }
          }
          local_264 = local_264 + 1;
          pbVar41 = (byte *)(ulonglong)local_264;
        } while ((int)local_264 < iVar40);
      }
      auVar51 = (uchar  [8])(longlong)*(int *)&this->field_0x18c;
      if ((auVar51 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
        FVar31 = StatPtr_STAT_TrailParticles;
        if (StatPtr_STAT_TrailParticles == (FThreadSafeStaticStat<FStat_STAT_TrailParticles>)0x0) {
          pFVar24 = ::FName::FName(&local_138,"STAT_TrailParticles");
          FVar31 = (FThreadSafeStaticStat<FStat_STAT_TrailParticles>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TrailParticles,*pFVar24,
                              L"Trail Particles","STATGROUP_Particles","STATCAT_Advanced",
                              L"Particles",true,true,ST_int64,false,false,MCR_Invalid);
        }
        FVar8 = *(FName *)FVar31;
        if (((FVar8 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar26 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar26 == (FThreadStats *)0x0) {
            pFVar27 = FThreadStatsPool::Get();
            pFVar26 = FThreadStatsPool::GetFromPool(pFVar27);
          }
          local_188.NameAndInfo.Number = FVar8.Number & 0xffffafff | 0xa000;
          local_1d8 = FVar8;
          local_188.StatData.Pad = auVar51;
          local_188.NameAndInfo.Index.Value = FVar8.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar26,&local_188);
          FStatsTrace::Add(&local_1d8,(long64)auVar51);
          if (pFVar26->ScopeCount == 0) {
            FThreadStats::Flush(pFVar26,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar26,false,false);
          }
        }
      }
      fVar52 = *(float *)&this->field_0x198;
    }
  }
  else {
    fVar52 = *(float *)&this->field_0x198;
  }
  return fVar52;
}

// Spawn_RateAndBurst @ 14821d3d0

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
FParticleRibbonEmitterInstance::Spawn_RateAndBurst
          (FParticleRibbonEmitterInstance *this,float param_1)

{
  return *(float *)&this->field_0x198;
}

// Spawn_Source @ 14821d3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
FParticleRibbonEmitterInstance::Spawn_Source(FParticleRibbonEmitterInstance *this,float param_1)

{
  undefined1 *puVar1;
  TVector<float> *pTVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  uchar uVar7;
  int iVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  UParticleModule *pUVar13;
  longlong *plVar14;
  FName FVar15;
  code *pcVar16;
  double dVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  longlong lVar21;
  bool bVar22;
  undefined1 uVar23;
  char cVar24;
  uint uVar25;
  uint uVar26;
  FBaseParticle *pFVar27;
  undefined8 *puVar28;
  FThreadSafeStaticStat<FStat_STAT_TrailParticlesSpawned> FVar29;
  FName *pFVar30;
  FThreadSafeStaticStat<FStat_STAT_TrailParticles> FVar31;
  FThreadStats *pFVar32;
  FThreadStatsPool *pFVar33;
  int iVar34;
  FBaseParticle *pFVar35;
  ushort *puVar36;
  bool bVar37;
  uint uVar38;
  TQuat<double> *pTVar39;
  longlong lVar40;
  FBaseParticle *pFVar41;
  FBaseParticle *pFVar42;
  FBaseParticle *pFVar43;
  FBaseParticle *pFVar44;
  uchar auVar45 [8];
  uint uVar46;
  int *piVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  float fVar50;
  float fVar51;
  double dVar52;
  double dVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar66;
  float fVar67;
  double dVar68;
  undefined1 auVar69 [16];
  float fVar70;
  uint uVar71;
  uint uVar72;
  float fVar73;
  float fVar74;
  double dVar75;
  double dVar76;
  float fVar77;
  double dVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined4 uVar82;
  undefined8 uVar83;
  double dVar84;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auStackY_4d8 [32];
  bool local_478;
  undefined1 local_477;
  int local_474;
  int local_46c;
  longlong local_458;
  uint local_440;
  uint local_43c;
  double local_430;
  FBaseParticle *local_428;
  double local_408;
  double local_400;
  FBaseParticle *local_3f8;
  float local_3e4;
  float local_3e0;
  float local_3dc;
  int local_3d8;
  longlong local_3d0;
  longlong local_3c8;
  undefined1 local_3c0 [16];
  longlong local_3b0;
  FBaseParticle *local_3a8;
  double local_3a0;
  double local_398;
  FName local_390;
  FName local_388;
  double local_380;
  FName local_378;
  FStatMessage local_370;
  FStatMessage local_360;
  double local_350;
  double dStack_348;
  double local_340;
  FString local_338;
  FString local_328;
  undefined1 local_318 [16];
  double local_308;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double local_2e0;
  double dStack_2d8;
  double local_2d0;
  FParticleRibbonEmitterInstance *local_2c8;
  uint local_2c0;
  float local_2bc;
  FBaseParticle *local_2b8;
  FParticleRibbonEmitterInstance *local_2b0;
  undefined4 local_2a8;
  float local_2a4;
  FBaseParticle *local_2a0;
  TVector<double>_u_0 local_298;
  TVector<double>_u_0 local_280;
  TVector<double>_u_0 local_268;
  undefined8 local_250;
  FName local_248;
  FName local_240;
  double local_238;
  double dStack_230;
  double local_228;
  double local_220;
  double dStack_218;
  double local_210;
  undefined1 local_208 [16];
  double local_1f8;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  TQuat<double> local_1c8;
  undefined1 local_1a8 [16];
  undefined8 local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  lVar9 = *(longlong *)&this->field_0x8;
  bVar37 = false;
  local_477 = 1;
  if ((*(int *)(lVar9 + 0x48) < 1) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar22)) {
    pcVar16 = (code *)swi(3);
    uVar23 = (*pcVar16)();
    return (bool)uVar23;
  }
  lVar9 = **(longlong **)(lVar9 + 0x40);
  if ((lVar9 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("LODLevel",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                          ,0x61d,L""), bVar22)) {
    pcVar16 = (code *)swi(3);
    uVar23 = (*pcVar16)();
    return (bool)uVar23;
  }
  if ((*(longlong *)(lVar9 + 0x30) == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("LODLevel->RequiredModule",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                          ,0x61e,L""), bVar22)) {
    pcVar16 = (code *)swi(3);
    uVar23 = (*pcVar16)();
    return (bool)uVar23;
  }
  local_43c = 0;
  iVar8 = this->TrailTypeData->MaxParticleInTrailCount;
  uVar23 = 1;
  if (0 < *(int *)&this->field_0x28c) {
    uVar79 = SUB84(__real_3ff0000000000000,0);
    uVar80 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    uVar81 = (undefined4)__real_3e45798ee0000000;
    uVar82 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
    local_458 = 0;
    local_3d0 = 0;
    local_3c8 = 0;
    fVar51 = __real_3f800000;
    fVar73 = __real_322bcc77;
    uVar25 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    do {
      if ((this->SpawnPerUnitModule != (UParticleModuleSpawnPerUnit *)0x0) &&
         ((this->SpawnPerUnitModule->_padding_ & 0x80) != 0)) {
        local_477 = (**(code **)(*(longlong *)this + 0x260))(this);
      }
      local_46c = 0;
      if (0 < iVar8) {
        if (0 < *(int *)&this->field_0x18c - iVar8) {
          (**(code **)(*(longlong *)this + 0x230))(this,local_43c);
        }
        if ((iVar8 < *(int *)&this->field_0x18c) &&
           (local_46c = iVar8 - *(int *)&this->field_0x18c, local_46c < 0)) {
          local_46c = 0;
        }
      }
      iVar34 = *(int *)&this->field_0x18c + local_46c;
      if ((iVar34 < *(int *)&this->field_0x194) ||
         (cVar24 = (**(code **)(*(longlong *)this + 0x18))
                             (this,(int)SQRT((float)iVar34) + 1 + iVar34), cVar24 != '\0')) {
        local_3f8 = (FBaseParticle *)0x0;
        iVar34 = 0;
        local_440 = 0xffffffff;
        local_428 = (FBaseParticle *)0x0;
        uVar26 = local_440;
        pFVar41 = local_428;
        pFVar42 = local_3f8;
        if (0 < *(int *)&this->field_0x18c) {
          puVar36 = *(ushort **)&this->field_0x170;
          do {
            pFVar42 = (FBaseParticle *)
                      ((longlong)(int)(*(int *)&this->field_0x188 * (uint)*puVar36) +
                      *(longlong *)&this->field_0x168);
            pFVar41 = (FBaseParticle *)
                      ((longlong)&(pFVar42->OldLocation).field0_0x0 +
                      (longlong)*(int *)&this->field_0x24);
            if ((*(uint *)((longlong)&(pFVar42->OldLocation).field0_0x0 +
                          (longlong)*(int *)&this->field_0x24 + 4) == local_43c) &&
               (uVar26 = (uint)*puVar36,
               (*(uint *)&(pFVar41->OldLocation).field0_0x0 & 0xf0000000) == 0x40000000)) break;
            iVar34 = iVar34 + 1;
            puVar36 = puVar36 + 1;
            uVar26 = local_440;
            pFVar41 = local_428;
            pFVar42 = local_3f8;
          } while (iVar34 < *(int *)&this->field_0x18c);
        }
        local_3f8 = pFVar42;
        local_428 = pFVar41;
        local_440 = uVar26;
        if (this->TrailTypeData->bDeadTrailsOnSourceLoss != 0) {
          uVar38 = ~local_43c >> 0x1f;
          uVar26 = 0;
          if ((int)local_43c < (this->LastSourceTimes).ArrayNum) {
            uVar26 = uVar38;
          }
          if ((uVar26 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar16 = (code *)swi(3);
            uVar23 = (*pcVar16)();
            return (bool)uVar23;
          }
          pFVar10 = (this->LastSourceTimes).AllocatorInstance.Data;
          uVar26 = 0;
          if ((int)local_43c < (this->SourceTimes).ArrayNum) {
            uVar26 = uVar38;
          }
          if ((uVar26 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar16 = (code *)swi(3);
            uVar23 = (*pcVar16)();
            return (bool)uVar23;
          }
          if (*(float *)((this->SourceTimes).AllocatorInstance.Data + local_458 * 4) <
              *(float *)(pFVar10 + local_3d0)) {
            if (local_428 != (FBaseParticle *)0x0) {
              *(uint *)&(local_428->OldLocation).field0_0x0 =
                   *(uint *)&(local_428->OldLocation).field0_0x0 & 0xfffffff;
              *(uint *)&(local_428->OldLocation).field0_0x0 =
                   *(uint *)&(local_428->OldLocation).field0_0x0 | 0x10000000;
            }
            uVar26 = 0;
            uVar25 = uVar26;
            if ((int)local_43c < (this->CurrentSourcePosition).ArrayNum) {
              uVar25 = uVar38;
            }
            if ((uVar25 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar16 = (code *)swi(3);
              uVar23 = (*pcVar16)();
              return (bool)uVar23;
            }
            pFVar11 = (this->CurrentSourcePosition).AllocatorInstance.Data;
            pFVar10 = pFVar11 + local_3c8;
            uVar18 = *(undefined8 *)pFVar10;
            uVar83 = *(undefined8 *)(pFVar10 + 8);
            uVar6 = *(undefined8 *)(pFVar11 + local_3c8 + 0x10);
            uVar25 = uVar26;
            if ((int)local_43c < (this->LastSourcePosition).ArrayNum) {
              uVar25 = uVar38;
            }
            if ((uVar25 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar16 = (code *)swi(3);
              uVar23 = (*pcVar16)();
              return (bool)uVar23;
            }
            pFVar11 = (this->LastSourcePosition).AllocatorInstance.Data;
            pFVar10 = pFVar11 + local_458 * 0x18;
            *(undefined8 *)pFVar10 = uVar18;
            *(undefined8 *)(pFVar10 + 8) = uVar83;
            *(undefined8 *)(pFVar11 + local_458 * 0x18 + 0x10) = uVar6;
            uVar25 = uVar26;
            if ((int)local_43c < (this->CurrentSourceRotation).ArrayNum) {
              uVar25 = uVar38;
            }
            if ((uVar25 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar16 = (code *)swi(3);
              uVar23 = (*pcVar16)();
              return (bool)uVar23;
            }
            pFVar11 = (this->CurrentSourceRotation).AllocatorInstance.Data;
            lVar40 = local_458 * 0x20;
            pFVar10 = pFVar11 + lVar40;
            uVar6 = *(undefined8 *)pFVar10;
            uVar18 = *(undefined8 *)(pFVar10 + 8);
            pFVar11 = pFVar11 + lVar40 + 0x10;
            uVar83 = *(undefined8 *)pFVar11;
            uVar20 = *(undefined8 *)(pFVar11 + 8);
            if ((int)local_43c < (this->LastSourceRotation).ArrayNum) {
              uVar26 = uVar38;
            }
            if ((uVar26 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar16 = (code *)swi(3);
              uVar23 = (*pcVar16)();
              return (bool)uVar23;
            }
            pFVar11 = (this->LastSourceRotation).AllocatorInstance.Data;
            pFVar10 = pFVar11 + lVar40;
            *(undefined8 *)pFVar10 = uVar6;
            *(undefined8 *)(pFVar10 + 8) = uVar18;
            pFVar11 = pFVar11 + lVar40 + 0x10;
            *(undefined8 *)pFVar11 = uVar83;
            *(undefined8 *)(pFVar11 + 8) = uVar20;
            uVar26 = 0;
            uVar25 = uVar26;
            if ((int)local_43c < (this->CurrentSourceTangent).ArrayNum) {
              uVar25 = uVar38;
            }
            if ((uVar25 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar16 = (code *)swi(3);
              uVar23 = (*pcVar16)();
              return (bool)uVar23;
            }
            pFVar11 = (this->CurrentSourceTangent).AllocatorInstance.Data;
            pFVar10 = pFVar11 + local_458 * 0x18;
            uVar18 = *(undefined8 *)pFVar10;
            uVar83 = *(undefined8 *)(pFVar10 + 8);
            uVar6 = *(undefined8 *)(pFVar11 + local_458 * 0x18 + 0x10);
            uVar25 = uVar26;
            if ((int)local_43c < (this->LastSourceTangent).ArrayNum) {
              uVar25 = uVar38;
            }
            if ((uVar25 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar16 = (code *)swi(3);
              uVar23 = (*pcVar16)();
              return (bool)uVar23;
            }
            pFVar11 = (this->LastSourceTangent).AllocatorInstance.Data;
            pFVar10 = pFVar11 + local_458 * 0x18;
            *(undefined8 *)pFVar10 = uVar18;
            *(undefined8 *)(pFVar10 + 8) = uVar83;
            *(undefined8 *)(pFVar11 + local_458 * 0x18 + 0x10) = uVar6;
            uVar25 = uVar26;
            if ((int)local_43c < (this->CurrentSourceUp).ArrayNum) {
              uVar25 = uVar38;
            }
            if ((uVar25 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar16 = (code *)swi(3);
              uVar23 = (*pcVar16)();
              return (bool)uVar23;
            }
            pFVar11 = (this->CurrentSourceUp).AllocatorInstance.Data;
            pFVar10 = pFVar11 + local_458 * 0x18;
            uVar18 = *(undefined8 *)pFVar10;
            uVar83 = *(undefined8 *)(pFVar10 + 8);
            uVar6 = *(undefined8 *)(pFVar11 + local_458 * 0x18 + 0x10);
            uVar25 = uVar26;
            if ((int)local_43c < (this->LastSourceUp).ArrayNum) {
              uVar25 = uVar38;
            }
            if ((uVar25 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar16 = (code *)swi(3);
              uVar23 = (*pcVar16)();
              return (bool)uVar23;
            }
            pFVar11 = (this->LastSourceUp).AllocatorInstance.Data;
            pFVar10 = pFVar11 + local_458 * 0x18;
            *(undefined8 *)pFVar10 = uVar18;
            *(undefined8 *)(pFVar10 + 8) = uVar83;
            *(undefined8 *)(pFVar11 + local_458 * 0x18 + 0x10) = uVar6;
            if ((int)local_43c < (this->SourceTimes).ArrayNum) {
              uVar26 = uVar38;
            }
            if ((uVar26 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar16 = (code *)swi(3);
              uVar23 = (*pcVar16)();
              return (bool)uVar23;
            }
            uVar3 = *(undefined4 *)((this->SourceTimes).AllocatorInstance.Data + local_458 * 4);
            uVar25 = 0;
            if ((int)local_43c < (this->LastSourceTimes).ArrayNum) {
              uVar25 = uVar38;
            }
            if ((uVar25 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar16 = (code *)swi(3);
              uVar23 = (*pcVar16)();
              return (bool)uVar23;
            }
            *(undefined4 *)((this->LastSourceTimes).AllocatorInstance.Data + local_458 * 4) = uVar3;
            uVar25 = 0;
            if ((int)local_43c < (this->SourceIndices).ArrayNum) {
              uVar25 = uVar38;
            }
            if ((uVar25 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar16 = (code *)swi(3);
              uVar23 = (*pcVar16)();
              return (bool)uVar23;
            }
            uVar25 = __xmm_7fffffff7fffffff7fffffff7fffffff;
            fVar73 = __real_322bcc77;
            *(undefined4 *)((this->SourceIndices).AllocatorInstance.Data + local_458 * 4) =
                 0xffffffff;
            goto LAB_14821fb08;
          }
        }
        local_478 = local_3f8 == (FBaseParticle *)0x0;
        fVar4 = this->TrailTypeData->TilingDistance;
        if (*(UParticleModule **)(lVar9 + 0x58) != (UParticleModule *)0x0) {
          FParticleEmitterInstance::GetModuleInstanceData
                    ((FParticleEmitterInstance *)this,*(UParticleModule **)(lVar9 + 0x58));
        }
        fVar5 = *(float *)&this->field_0x290;
        if (0 < local_46c) {
          uVar38 = ~local_43c >> 0x1f;
          uVar26 = 0;
          if ((int)local_43c < *(int *)&this->field_0x2a8) {
            uVar26 = uVar38;
          }
          if ((uVar26 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar16 = (code *)swi(3);
            uVar23 = (*pcVar16)();
            return (bool)uVar23;
          }
          fVar50 = *(float *)(*(longlong *)&this->field_0x2a0 + local_458 * 4);
          fVar66 = fVar73;
          if (*(float *)&this->field_0x19c <= fVar50 && fVar50 != *(float *)&this->field_0x19c) {
            uVar26 = 0;
            if ((int)local_43c < (this->CurrentSourcePosition).ArrayNum) {
              uVar26 = uVar38;
            }
            if ((uVar26 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar16 = (code *)swi(3);
              uVar23 = (*pcVar16)();
              return (bool)uVar23;
            }
            pFVar10 = (this->CurrentSourcePosition).AllocatorInstance.Data;
            uVar26 = 0;
            if ((int)local_43c < (this->LastSourcePosition).ArrayNum) {
              uVar26 = uVar38;
            }
            if ((uVar26 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar16 = (code *)swi(3);
              uVar23 = (*pcVar16)();
              return (bool)uVar23;
            }
            pFVar11 = (this->LastSourcePosition).AllocatorInstance.Data;
            dVar52 = *(double *)(pFVar10 + local_458 * 0x18);
            pFVar10 = pFVar10 + local_458 * 0x18 + 8;
            dVar53 = *(double *)pFVar10;
            dVar84 = *(double *)(pFVar10 + 8);
            dVar60 = *(double *)(pFVar11 + local_458 * 0x18);
            dVar56 = (double)CONCAT44(uVar80,uVar79) / (double)fVar5;
            pFVar11 = pFVar11 + local_458 * 0x18 + 8;
            dVar17 = *(double *)pFVar11;
            dVar75 = *(double *)(pFVar11 + 8);
            uVar26 = 0;
            if ((int)local_43c < (this->LastSourceTangent).ArrayNum) {
              uVar26 = ~local_43c >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar16 = (code *)swi(3);
              uVar23 = (*pcVar16)();
              return (bool)uVar23;
            }
            pFVar10 = (this->LastSourceTangent).AllocatorInstance.Data;
            *(double *)(pFVar10 + local_458 * 0x18) = (dVar52 - dVar60) * dVar56;
            pFVar10 = pFVar10 + local_458 * 0x18 + 8;
            *(double *)pFVar10 = (dVar53 - dVar17) * dVar56;
            *(double *)(pFVar10 + 8) = (dVar84 - dVar75) * dVar56;
            fVar66 = __real_322bcc77;
          }
          pFVar41 = (FBaseParticle *)0x0;
          if (this->TrailTypeData->bEnablePreviousTangentRecalculation == 1 &&
              this->TrailTypeData->bTangentRecalculationEveryFrame == 0) {
            pFVar42 = pFVar41;
            pFVar44 = pFVar41;
            if ((local_3f8 != (FBaseParticle *)0x0) &&
               (pFVar27 = local_428, pFVar35 = local_3f8, local_428 != (FBaseParticle *)0x0)) {
              while ((pFVar42 = pFVar27, pFVar44 = pFVar35,
                     (*(byte *)((longlong)&(pFVar27->Location).field0_0x0 + 0xc) & 1) != 0 &&
                     (uVar26 = *(uint *)&(pFVar27->OldLocation).field0_0x0 & 0x3fff,
                     pFVar42 = (FBaseParticle *)0x0, pFVar44 = (FBaseParticle *)0x0,
                     uVar26 != 0x3fff))) {
                pFVar35 = (FBaseParticle *)
                          ((longlong)(int)(uVar26 * *(int *)&this->field_0x188) +
                          *(longlong *)&this->field_0x168);
                pFVar27 = (FBaseParticle *)
                          ((longlong)&(pFVar35->OldLocation).field0_0x0 +
                          (longlong)*(int *)&this->field_0x24);
              }
            }
            if (pFVar44 != (FBaseParticle *)0x0) {
              pFVar27 = pFVar42;
              pFVar35 = pFVar41;
              pFVar43 = pFVar41;
              if (pFVar42 != (FBaseParticle *)0x0) {
                do {
                  uVar26 = *(uint *)&(pFVar27->OldLocation).field0_0x0 & 0x3fff;
                  pFVar35 = pFVar41;
                  pFVar43 = pFVar41;
                  if (uVar26 == 0x3fff) break;
                  pFVar35 = (FBaseParticle *)
                            ((longlong)(int)(uVar26 * *(int *)&this->field_0x188) +
                            *(longlong *)&this->field_0x168);
                  pFVar43 = (FBaseParticle *)
                            ((longlong)&(pFVar35->OldLocation).field0_0x0 +
                            (longlong)*(int *)&this->field_0x24);
                  pFVar27 = pFVar43;
                } while ((*(byte *)((longlong)&(pFVar43->Location).field0_0x0 + 0xc) & 1) != 0);
              }
              if (pFVar35 != (FBaseParticle *)0x0) {
                uVar26 = 0;
                if ((int)local_43c < (this->CurrentSourcePosition).ArrayNum) {
                  uVar26 = ~local_43c >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar16 = (code *)swi(3);
                  uVar23 = (*pcVar16)();
                  return (bool)uVar23;
                }
                pFVar10 = (this->CurrentSourcePosition).AllocatorInstance.Data;
                fVar50 = fVar5 - *(float *)((longlong)&(pFVar43->OldLocation).field0_0x0 + 0xc);
                local_3c0._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                local_3c0._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                uVar18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                uVar83 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                if (fVar66 < fVar50) {
                  dVar52 = (double)CONCAT44(uVar80,uVar79) / (double)fVar50;
                  uVar83 = dVar52 * ((*(double *)(pFVar10 + local_458 * 0x18) -
                                     *(double *)&this->field_0x248) -
                                    (pFVar35->Location).field0_0x0._s_0.X);
                  uVar6 = dVar52 * ((*(double *)(pFVar10 + local_458 * 0x18 + 8) -
                                    *(double *)&this->field_0x250) -
                                   (pFVar35->Location).field0_0x0._s_0.Y);
                  local_3c0._8_4_ = (int)uVar6;
                  local_3c0._0_8_ = uVar83;
                  local_3c0._12_4_ = (int)((ulonglong)uVar6 >> 0x20);
                  uVar18 = dVar52 * ((*(double *)(pFVar10 + local_458 * 0x18 + 0x10) -
                                     *(double *)&this->field_0x258) -
                                    (pFVar35->Location).field0_0x0._s_0.Z);
                }
                local_308 = (double)uVar18;
                if (0 < *(int *)&(pFVar42->Location).field0_0x0) {
                  uVar26 = *(int *)&(pFVar43->OldLocation).field0_0x0 >> 0xe & 0x3fff;
                  if ((uVar26 == 0x3fff) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Prev != (0x0fffc000 >> 14)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                                          ,0x6dc,L""), bVar22)) {
                    pcVar16 = (code *)swi(3);
                    uVar23 = (*pcVar16)();
                    return (bool)uVar23;
                  }
                  puVar28 = (undefined8 *)
                            ((longlong)(int)(uVar26 * *(int *)&this->field_0x188) +
                            *(longlong *)&this->field_0x168);
                  piVar47 = (int *)((longlong)*(int *)&this->field_0x24 + (longlong)puVar28);
                  iVar34 = *(int *)&(pFVar42->Location).field0_0x0;
                  fVar50 = fVar51 / (float)iVar34;
                  if (0 < iVar34) {
                    dVar52 = (double)(*(float *)((longlong)&(pFVar42->OldLocation).field0_0x0 + 0xc)
                                     - *(float *)((longlong)&(pFVar43->OldLocation).field0_0x0 + 0xc
                                                 ));
                    local_474 = 1;
                    dVar84 = (double)uVar83 * dVar52;
                    dVar60 = (double)uVar6 * dVar52;
                    dVar52 = (double)uVar18 * dVar52;
                    dVar53 = (double)fVar50;
                    do {
                      local_280._s_0.X =
                           (double)*(float *)((longlong)&(pFVar43->Location).field0_0x0 + 0x10);
                      local_3e4 = fVar50 * (float)local_474;
                      fVar70 = local_3e4 * local_3e4;
                      fVar66 = fVar70 * local_3e4;
                      fVar67 = fVar66 - fVar70;
                      local_280._s_0.Y =
                           (double)*(float *)((longlong)&(pFVar43->Location).field0_0x0 + 0x14);
                      fVar77 = (fVar66 - (float)local_474 * (fVar50 + fVar50) * local_3e4) +
                               local_3e4;
                      fVar74 = fVar70 * __real_40400000 - (fVar66 + fVar66);
                      fVar51 = ((fVar66 + fVar66) - fVar70 * __real_40400000) + fVar51;
                      local_280._s_0.Z = (double)(pFVar43->BaseVelocity).field0_0x0._s_0.X;
                      dVar17 = (double)fVar77 * local_280._s_0.X +
                               (double)fVar51 * (pFVar35->Location).field0_0x0._s_0.X +
                               (double)fVar67 * dVar84 +
                               (double)fVar74 * (pFVar44->Location).field0_0x0._s_0.X;
                      dVar75 = (double)fVar77 * local_280._s_0.Y +
                               (double)fVar51 * (pFVar35->Location).field0_0x0._s_0.Y +
                               (double)fVar67 * dVar60 +
                               (double)fVar74 * (pFVar44->Location).field0_0x0._s_0.Y;
                      uVar79 = SUB84(dVar75,0);
                      uVar80 = (undefined4)((ulonglong)dVar75 >> 0x20);
                      local_208._8_4_ = uVar79;
                      local_208._0_8_ = dVar17;
                      local_208._12_4_ = uVar80;
                      dVar75 = (double)fVar77 * local_280._s_0.Z +
                               (double)fVar51 * (pFVar35->Location).field0_0x0._s_0.Z +
                               (double)fVar67 * dVar52 +
                               (double)fVar74 * (pFVar44->Location).field0_0x0._s_0.Z;
                      local_298._s_0.X = dVar84;
                      local_298._s_0.Y = dVar60;
                      local_298._s_0.Z = dVar52;
                      local_238 = local_280._s_0.X;
                      dStack_230 = local_280._s_0.Y;
                      local_228 = local_280._s_0.Z;
                      local_220 = dVar84;
                      dStack_218 = dVar60;
                      local_210 = dVar52;
                      local_1f8 = dVar75;
                      FMath::CubicInterpDerivative<UE::Math::TVector<double>,float>
                                ((TVector<double> *)&local_268._s_0,&pFVar35->Location,
                                 (TVector<double> *)&local_280._s_0,&pFVar44->Location,
                                 (TVector<double> *)&local_298._s_0,&local_3e4);
                      *puVar28 = puVar28[3];
                      puVar28[1] = puVar28[4];
                      puVar28[2] = puVar28[5];
                      auVar69._8_4_ = uVar79;
                      auVar69._0_8_ = dVar17;
                      auVar69._12_4_ = uVar80;
                      *(undefined1 (*) [16])(puVar28 + 3) = auVar69;
                      puVar28[5] = dVar75;
                      piVar47[10] = (int)(float)(dVar53 * local_268._s_0.X);
                      piVar47[0xb] = (int)(float)(dVar53 * local_268._s_0.Y);
                      piVar47[0xc] = (int)(float)(dVar53 * local_268._s_0.Z);
                      if (local_474 < *(int *)&(pFVar42->Location).field0_0x0) {
                        uVar26 = *piVar47 >> 0xe & 0x3fff;
                        if ((uVar26 == 0x3fff) &&
                           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Prev != (0x0fffc000 >> 14)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                                                ,0x6fd,L""), bVar22)) {
                          pcVar16 = (code *)swi(3);
                          uVar23 = (*pcVar16)();
                          return (bool)uVar23;
                        }
                        puVar28 = (undefined8 *)
                                  ((longlong)(int)(uVar26 * *(int *)&this->field_0x188) +
                                  *(longlong *)&this->field_0x168);
                        piVar47 = (int *)((longlong)*(int *)&this->field_0x24 + (longlong)puVar28);
                      }
                      bVar22 = local_474 < *(int *)&(pFVar42->Location).field0_0x0;
                      fVar51 = __real_3f800000;
                      local_474 = local_474 + 1;
                    } while (bVar22);
                    uVar79 = SUB84(__real_3ff0000000000000,0);
                    uVar80 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
                  }
                }
                uVar26 = 0;
                if ((int)local_43c < (this->LastSourceTangent).ArrayNum) {
                  uVar26 = ~local_43c >> 0x1f;
                }
                if ((uVar26 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar16 = (code *)swi(3);
                  uVar23 = (*pcVar16)();
                  return (bool)uVar23;
                }
                pFVar11 = (this->LastSourceTangent).AllocatorInstance.Data;
                uVar81 = (undefined4)__real_3e45798ee0000000;
                uVar82 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
                pFVar10 = pFVar11 + local_458 * 0x18;
                *(undefined8 *)pFVar10 = local_3c0._0_8_;
                *(undefined8 *)(pFVar10 + 8) = local_3c0._8_8_;
                *(undefined8 *)(pFVar11 + local_458 * 0x18 + 0x10) = uVar18;
              }
            }
          }
          uVar26 = 0;
          if ((int)local_43c < *(int *)&this->field_0x2a8) {
            uVar26 = ~local_43c >> 0x1f;
          }
          if ((uVar26 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar16 = (code *)swi(3);
            uVar23 = (*pcVar16)();
            return (bool)uVar23;
          }
          fVar50 = fVar5 - *(float *)(*(longlong *)&this->field_0x2a0 + local_458 * 4);
          local_3e0 = fVar50;
          if ((fVar50 < 0.0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Diff >= 0.0f",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                                  ,0x70c,L""), bVar22)) {
            pcVar16 = (code *)swi(3);
            uVar23 = (*pcVar16)();
            return (bool)uVar23;
          }
          local_408 = 0.0;
          local_400 = 0.0;
          local_430 = (double)CONCAT44(uVar80,uVar79);
          fVar66 = fVar51 / (float)local_46c;
          local_3dc = param_1 * fVar66;
          puVar28 = (undefined8 *)(**(code **)(**(longlong **)&this->field_0x10 + 0x10))();
          local_474 = 0;
          local_380 = (double)fVar50;
          local_3c0._0_8_ = local_458 * 3;
          local_148 = *puVar28;
          uStack_140 = puVar28[1];
          local_138 = puVar28[2];
          uStack_130 = puVar28[3];
          local_128 = puVar28[4];
          uStack_120 = puVar28[5];
          local_118 = puVar28[6];
          uStack_110 = puVar28[7];
          local_108 = puVar28[8];
          uStack_100 = puVar28[9];
          local_f8 = puVar28[10];
          uStack_f0 = puVar28[0xb];
          local_3b0 = (longlong)(int)local_43c << 5;
          local_3d8 = local_46c + -1;
          local_3a0 = (double)fVar66;
          uVar26 = ~local_43c >> 0x1f;
          lVar40 = local_458 * 3;
          fVar50 = fVar66;
          do {
            dVar52 = local_380;
            fVar67 = fVar50;
            if (fVar51 <= fVar50) {
              fVar67 = fVar51;
            }
            uVar38 = 0;
            if ((int)local_43c < (this->CurrentSourceTangent).ArrayNum) {
              uVar38 = uVar26;
            }
            if (fVar67 <= 0.0) {
              fVar67 = 0.0;
            }
            if ((uVar38 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar16 = (code *)swi(3);
              uVar23 = (*pcVar16)();
              return (bool)uVar23;
            }
            pFVar11 = (this->CurrentSourceTangent).AllocatorInstance.Data;
            pFVar10 = pFVar11 + lVar40 * 8;
            local_2e0 = *(double *)pFVar10 * dVar52;
            dStack_2d8 = *(double *)(pFVar10 + 8) * dVar52;
            local_2d0 = dVar52 * *(double *)(pFVar11 + lVar40 * 8 + 0x10);
            uVar38 = 0;
            if ((int)local_43c < (this->CurrentSourcePosition).ArrayNum) {
              uVar38 = uVar26;
            }
            if ((uVar38 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar16 = (code *)swi(3);
              uVar23 = (*pcVar16)();
              return (bool)uVar23;
            }
            pFVar10 = (this->CurrentSourcePosition).AllocatorInstance.Data;
            uVar38 = 0;
            if ((int)local_43c < (this->LastSourceTangent).ArrayNum) {
              uVar38 = uVar26;
            }
            if ((uVar38 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar16 = (code *)swi(3);
              uVar23 = (*pcVar16)();
              return (bool)uVar23;
            }
            pFVar12 = (this->LastSourceTangent).AllocatorInstance.Data;
            pFVar11 = pFVar12 + lVar40 * 8;
            local_2f8 = *(double *)pFVar11 * dVar52;
            dStack_2f0 = *(double *)(pFVar11 + 8) * dVar52;
            local_2e8 = dVar52 * *(double *)(pFVar12 + lVar40 * 8 + 0x10);
            uVar38 = 0;
            if ((int)local_43c < (this->LastSourcePosition).ArrayNum) {
              uVar38 = uVar26;
            }
            if ((uVar38 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar16 = (code *)swi(3);
              uVar23 = (*pcVar16)();
              return (bool)uVar23;
            }
            pFVar12 = (this->LastSourcePosition).AllocatorInstance.Data;
            fVar74 = fVar67 * fVar67;
            fVar70 = (fVar67 + fVar67) * fVar74;
            fVar77 = fVar74 * __real_40400000 - fVar70;
            fVar51 = (fVar70 - fVar74 * __real_40400000) + fVar51;
            fVar70 = fVar67 * fVar74 - fVar74;
            fVar74 = (fVar67 * fVar74 - fVar67 * (fVar67 + fVar67)) + fVar67;
            pFVar11 = pFVar12 + lVar40 * 8;
            uVar38 = 0;
            if ((int)local_43c < (this->CurrentSourceRotation).ArrayNum) {
              uVar38 = uVar26;
            }
            local_340 = (double)fVar77 * *(double *)(pFVar10 + lVar40 * 8 + 0x10) +
                        (double)fVar70 * local_2d0 +
                        (double)fVar51 * *(double *)(pFVar12 + lVar40 * 8 + 0x10) +
                        (double)fVar74 * local_2e8;
            pFVar10 = pFVar10 + lVar40 * 8;
            local_350 = (double)fVar51 * *(double *)pFVar11 + (double)fVar74 * local_2f8 +
                        (double)fVar70 * local_2e0 + (double)fVar77 * *(double *)pFVar10;
            dStack_348 = (double)fVar51 * *(double *)(pFVar11 + 8) + (double)fVar74 * dStack_2f0 +
                         (double)fVar70 * dStack_2d8 + (double)fVar77 * *(double *)(pFVar10 + 8);
            if ((uVar38 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar16 = (code *)swi(3);
              uVar23 = (*pcVar16)();
              return (bool)uVar23;
            }
            lVar21 = local_3b0;
            pTVar39 = (TQuat<double> *)
                      ((this->CurrentSourceRotation).AllocatorInstance.Data + local_3b0);
            uVar38 = 0;
            if ((int)local_43c < (this->LastSourceRotation).ArrayNum) {
              uVar38 = uVar26;
            }
            if ((uVar38 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar16 = (code *)swi(3);
              uVar23 = (*pcVar16)();
              return (bool)uVar23;
            }
            auVar85._0_8_ = (double)fVar67;
            auVar85._8_8_ = 0;
            pTVar39 = UE::Math::TQuat<double>::Slerp_NotNormalized
                                (&local_1c8,
                                 (TQuat<double> *)
                                 ((this->LastSourceRotation).AllocatorInstance.Data + lVar21),
                                 pTVar39,auVar85._0_8_);
            uVar46 = 0;
            dVar60 = pTVar39->X;
            dVar53 = pTVar39->Y;
            dVar84 = pTVar39->Z;
            dVar17 = pTVar39->W;
            uVar38 = 0;
            if ((int)local_43c < (this->CurrentSourceTangent).ArrayNum) {
              uVar38 = uVar26;
            }
            local_250 = CONCAT44(uVar82,uVar81);
            dVar75 = dVar60 * dVar60 + dVar84 * dVar84;
            dVar56 = dVar53 * dVar53 + dVar17 * dVar17;
            auVar54._8_4_ = SUB84(dVar56,0);
            auVar54._0_8_ = dVar75;
            auVar54._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
            auVar55._0_8_ = auVar54._8_8_ + dVar75;
            auVar55._8_8_ = dVar75 + dVar56;
            auVar69 = sqrtpd(auVar85,auVar55);
            uVar48 = -(ulonglong)((double)CONCAT44(uVar82,uVar81) <= auVar55._0_8_);
            uVar49 = -(ulonglong)((double)CONCAT44(uVar82,uVar81) <= auVar55._8_8_);
            uVar71 = (uint)(uVar48 >> 0x20);
            uVar72 = (uint)(uVar49 >> 0x20);
            auVar85 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar69)
            ;
            auVar86._0_8_ = uVar48 & (ulonglong)(auVar85._0_8_ * dVar60);
            uVar19 = uVar49 & (ulonglong)(auVar85._8_8_ * dVar53);
            auVar86._8_4_ = (undefined4)uVar19;
            auVar86._12_4_ = (undefined4)(uVar19 >> 0x20);
            auVar61._0_4_ =
                 ~(uint)uVar48 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
            auVar61._4_4_ =
                 ~uVar71 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                                 0x20);
            auVar61._8_4_ =
                 ~(uint)uVar49 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
            auVar61._12_4_ =
                 ~uVar72 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                                 0x20);
            auVar86 = auVar86 | auVar61;
            auVar69 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar69)
            ;
            auVar64._0_4_ =
                 ~(uint)uVar48 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
            auVar64._4_4_ =
                 ~uVar71 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                                 0x20);
            auVar64._8_4_ =
                 ~(uint)uVar49 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
            auVar64._12_4_ =
                 ~uVar72 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                                 0x20);
            auVar62._0_8_ = (ulonglong)(auVar69._0_8_ * dVar84) & uVar48;
            uVar49 = (ulonglong)(auVar69._8_8_ * dVar17) & uVar49;
            auVar62._8_4_ = (undefined4)uVar49;
            auVar62._12_4_ = (undefined4)(uVar49 >> 0x20);
            local_318 = auVar64 | auVar62;
            local_1e8 = auVar86;
            local_1d8 = local_318;
            if ((uVar38 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar16 = (code *)swi(3);
              uVar23 = (*pcVar16)();
              return (bool)uVar23;
            }
            pFVar10 = (this->CurrentSourceTangent).AllocatorInstance.Data;
            dVar53 = dVar52 * *(double *)(pFVar10 + lVar40 * 8);
            dVar60 = dVar52 * *(double *)(pFVar10 + lVar40 * 8 + 8);
            dVar84 = dVar52 * *(double *)(pFVar10 + lVar40 * 8 + 0x10);
            uVar38 = 0;
            if ((int)local_43c < (this->CurrentSourcePosition).ArrayNum) {
              uVar38 = uVar26;
            }
            if ((uVar38 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar16 = (code *)swi(3);
              uVar23 = (*pcVar16)();
              return (bool)uVar23;
            }
            pFVar10 = (this->CurrentSourcePosition).AllocatorInstance.Data;
            uVar38 = 0;
            if ((int)local_43c < (this->LastSourceTangent).ArrayNum) {
              uVar38 = uVar26;
            }
            if ((uVar38 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar16 = (code *)swi(3);
              uVar23 = (*pcVar16)();
              return (bool)uVar23;
            }
            pFVar11 = (this->LastSourceTangent).AllocatorInstance.Data;
            dVar17 = dVar52 * *(double *)(pFVar11 + lVar40 * 8);
            dVar75 = dVar52 * *(double *)(pFVar11 + lVar40 * 8 + 8);
            dVar52 = dVar52 * *(double *)(pFVar11 + lVar40 * 8 + 0x10);
            uVar38 = 0;
            if ((int)local_43c < (this->LastSourcePosition).ArrayNum) {
              uVar38 = uVar26;
            }
            if ((uVar38 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar16 = (code *)swi(3);
              uVar23 = (*pcVar16)();
              return (bool)uVar23;
            }
            pFVar11 = (this->LastSourcePosition).AllocatorInstance.Data;
            dVar63 = *(double *)(pFVar10 + lVar40 * 8) * __real_4018000000000000;
            dVar68 = *(double *)(pFVar11 + lVar40 * 8) * __real_4018000000000000;
            uVar7 = (this->TrailTypeData->RenderAxis).Value;
            dVar56 = *(double *)(pFVar11 + lVar40 * 8 + 0x10) * __real_4018000000000000;
            dVar78 = *(double *)(pFVar10 + lVar40 * 8 + 0x10) * __real_4018000000000000;
            dVar57 = dVar17 * __real_4010000000000000;
            dVar76 = (double)(fVar67 * fVar67);
            dVar58 = (dVar17 + dVar53) * __real_4008000000000000;
            dVar59 = dVar52 * __real_4010000000000000;
            local_398 = (*(double *)(pFVar10 + lVar40 * 8 + 8) * __real_4018000000000000 -
                        (dVar75 * __real_4010000000000000 +
                         *(double *)(pFVar11 + lVar40 * 8 + 8) * __real_4018000000000000 +
                        dVar60 + dVar60)) * (double)fVar67 +
                        (((dVar60 + dVar75) * __real_4008000000000000 +
                         *(double *)(pFVar11 + lVar40 * 8 + 8) * __real_4018000000000000) -
                        *(double *)(pFVar10 + lVar40 * 8 + 8) * __real_4018000000000000) * dVar76 +
                        dVar75;
            dVar60 = (dVar52 + dVar84) * __real_4008000000000000;
            if (uVar7 == '\x01') {
              uVar38 = 0;
              if ((int)local_43c < (this->CurrentSourceUp).ArrayNum) {
                uVar38 = uVar26;
              }
              if ((uVar38 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar16 = (code *)swi(3);
                uVar23 = (*pcVar16)();
                return (bool)uVar23;
              }
              pFVar10 = (this->CurrentSourceUp).AllocatorInstance.Data;
              uVar38 = 0;
              if ((int)local_43c < (this->LastSourceUp).ArrayNum) {
                uVar38 = uVar26;
              }
              if ((uVar38 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar16 = (code *)swi(3);
                uVar23 = (*pcVar16)();
                return (bool)uVar23;
              }
              pFVar11 = (this->LastSourceUp).AllocatorInstance.Data;
              local_408 = (*(double *)(pFVar10 + lVar40 * 8) - *(double *)(pFVar11 + lVar40 * 8)) *
                          (double)fVar67 + *(double *)(pFVar11 + lVar40 * 8);
              local_400 = (*(double *)(pFVar10 + lVar40 * 8 + 8) -
                          *(double *)(pFVar11 + lVar40 * 8 + 8)) * (double)fVar67 +
                          *(double *)(pFVar11 + lVar40 * 8 + 8);
              local_430 = (*(double *)(pFVar10 + lVar40 * 8 + 0x10) -
                          *(double *)(pFVar11 + lVar40 * 8 + 0x10)) * (double)fVar67 +
                          *(double *)(pFVar11 + lVar40 * 8 + 0x10);
            }
            else if (uVar7 == '\x02') {
              local_408 = 0.0;
              local_400 = 0.0;
              local_430 = __real_3ff0000000000000;
            }
            uVar38 = (uint)*(ushort *)
                            (*(longlong *)&this->field_0x170 +
                            (longlong)*(int *)&this->field_0x18c * 2);
            fVar74 = fVar67 * local_3e0;
            iVar34 = *(int *)&this->field_0x24;
            pFVar42 = (FBaseParticle *)
                      ((longlong)(int)(uVar38 * *(int *)&this->field_0x188) +
                      *(longlong *)&this->field_0x168);
            fVar70 = (__real_3f800000 - fVar67) * local_3e0;
            pFVar41 = (FBaseParticle *)
                      ((longlong)&(pFVar42->OldLocation).field0_0x0 + (longlong)iVar34);
            fVar51 = param_1 - (float)local_474 * local_3dc;
            local_188 = local_350;
            dStack_180 = dStack_348;
            local_198 = local_318._0_8_;
            uStack_190 = local_318._8_8_;
            local_168 = ___xmm_3ff00000000000003ff0000000000000;
            uStack_160 = _UNK_150689688;
            local_158 = ___xmm_00000000000000003ff0000000000000;
            uStack_150 = _UNK_150689518;
            local_178 = local_340;
            uStack_170 = 0;
            local_3a8 = pFVar41;
            local_1a8 = auVar86;
            (**(code **)(**(longlong **)&this->field_0x10 + 0x128))
                      (*(longlong **)&this->field_0x10,local_1a8);
            (**(code **)(*(longlong *)this + 200))
                      (this,pFVar42,&local_350,&UE::Math::TVector<double>::ZeroVector);
            if (0 < *(int *)(lVar9 + 0x78)) {
              lVar40 = 0;
              do {
                uVar71 = 0;
                if ((int)uVar46 < *(int *)(lVar9 + 0x78)) {
                  uVar71 = ~uVar46 >> 0x1f;
                }
                if ((uVar71 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar16 = (code *)swi(3);
                  uVar23 = (*pcVar16)();
                  return (bool)uVar23;
                }
                pUVar13 = *(UParticleModule **)(lVar40 + *(longlong *)(lVar9 + 0x70));
                if ((pUVar13 != (UParticleModule *)0x0) && ((bool)pUVar13->bEnabled)) {
                  pcVar16 = *(code **)(pUVar13->_padding_ + 0x2b8);
                  local_2c0 = FParticleEmitterInstance::GetModuleDataOffset
                                        ((FParticleEmitterInstance *)this,pUVar13);
                  local_2c8 = this;
                  local_2bc = fVar51;
                  local_2b8 = pFVar42;
                  (*pcVar16)(pUVar13,&local_2c8);
                }
                uVar46 = uVar46 + 1;
                lVar40 = lVar40 + 8;
                pFVar41 = local_3a8;
              } while ((int)uVar46 < *(int *)(lVar9 + 0x78));
            }
            plVar14 = *(longlong **)(lVar9 + 0x48);
            if (plVar14 != (longlong *)0x0) {
              local_2a8 = *(undefined4 *)&this->field_0x24;
              local_2b0 = this;
              local_2a4 = fVar51;
              local_2a0 = pFVar42;
              (**(code **)(*plVar14 + 0x2b8))(plVar14,&local_2b0);
            }
            (**(code **)(*(longlong *)this + 0xd0))(this,pFVar42);
            pTVar2 = &pFVar42->Size;
            GetParticleLifetimeAndSize
                      (this,local_43c,pFVar42,local_478,&pFVar42->OneOverMaxLifetime,(float *)pTVar2
                      );
            fVar51 = fVar51 * pFVar42->OneOverMaxLifetime;
            (pFVar42->Size).field0_0x0._s_0.Y = (pTVar2->field0_0x0)._s_0.X;
            fVar77 = (pFVar42->Size).field0_0x0._s_0.Z;
            *(undefined8 *)&(pFVar42->BaseSize).field0_0x0 = *(undefined8 *)&pTVar2->field0_0x0;
            (pFVar42->BaseSize).field0_0x0._s_0.Z = fVar77;
            pFVar42->RelativeTime = fVar51;
            (**(code **)(**(longlong **)&this->field_0x10 + 0x128))
                      (*(longlong **)&this->field_0x10,&local_148);
            *(uint *)&(pFVar41->OldLocation).field0_0x0 =
                 *(uint *)&(pFVar41->OldLocation).field0_0x0 | 0xfffffff;
            *(uint *)((longlong)&(pFVar41->OldLocation).field0_0x0 + 4) = local_43c;
            *(float *)((longlong)&(pFVar41->Location).field0_0x0 + 0x10) =
                 (float)(local_3a0 *
                        ((dVar63 - (dVar57 + dVar68 + dVar53 + dVar53)) * (double)fVar67 +
                         ((dVar58 + dVar68) - dVar63) * dVar76 + dVar17));
            *(float *)((longlong)&(pFVar41->Location).field0_0x0 + 0x14) =
                 (float)(local_3a0 * local_398);
            (pFVar41->BaseVelocity).field0_0x0._s_0.X =
                 (float)(local_3a0 *
                        ((dVar78 - (dVar59 + dVar56 + dVar84 + dVar84)) * (double)fVar67 +
                         ((dVar60 + dVar56) - dVar78) * dVar76 + dVar52));
            *(float *)((longlong)&(pFVar41->OldLocation).field0_0x0 + 0xc) = fVar5 - fVar70;
            *(float *)((longlong)&(pFVar41->OldLocation).field0_0x0 + 0x10) = fVar74;
            (pFVar41->BaseVelocity).field0_0x0._s_0.Y = (float)local_408;
            (pFVar41->BaseVelocity).field0_0x0._s_0.Z = (float)local_400;
            pFVar41->Rotation = (float)local_430;
            uVar46 = *(uint *)((longlong)&(pFVar41->Location).field0_0x0 + 0xc);
            uVar71 = uVar46 & 0xfffffffe | 2;
            if (local_474 != local_3d8) {
              uVar71 = uVar46 | 3;
            }
            *(uint *)((longlong)&(pFVar41->Location).field0_0x0 + 0xc) = uVar71;
            *(int *)((longlong)&(pFVar42->Location).field0_0x0 + (longlong)iVar34) = local_46c;
            if (local_478 == false) {
              if ((local_3f8 != (FBaseParticle *)0x0) &&
                 (bVar22 = FParticleTrailsEmitterInstance_Base::AddParticleHelper
                                     ((FParticleTrailsEmitterInstance_Base *)this,local_43c,
                                      local_440,(FTrailsBaseTypeDataPayload *)local_428,uVar38,
                                      (FTrailsBaseTypeDataPayload *)pFVar41), bVar22))
              goto LAB_14821f1cd;
            }
            else {
              *(uint *)&(pFVar41->OldLocation).field0_0x0 =
                   *(uint *)&(pFVar41->OldLocation).field0_0x0 & 0xfffffff;
              *(uint *)&(pFVar41->OldLocation).field0_0x0 =
                   *(uint *)&(pFVar41->OldLocation).field0_0x0 | 0x40000000;
              uVar46 = 0;
              if ((int)local_43c < *(int *)&this->field_0x2d8) {
                uVar46 = uVar26;
              }
              if ((uVar46 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar16 = (code *)swi(3);
                uVar23 = (*pcVar16)();
                return (bool)uVar23;
              }
              local_478 = false;
              *(undefined4 *)(*(longlong *)&this->field_0x2d0 + local_458 * 4) = 0;
              *(undefined4 *)((longlong)&(pFVar41->OldLocation).field0_0x0 + 0x14) = 0;
LAB_14821f1cd:
              if (fVar73 < (float)((uint)fVar4 & uVar25)) {
                if (local_3f8 == (FBaseParticle *)0x0) {
                  *(undefined4 *)((longlong)&(pFVar41->OldLocation).field0_0x0 + 0x14) = 0;
                }
                else {
                  dVar53 = (pFVar42->Location).field0_0x0._s_0.Y -
                           (local_3f8->Location).field0_0x0._s_0.Y;
                  dVar60 = (pFVar42->Location).field0_0x0._s_0.X -
                           (local_3f8->Location).field0_0x0._s_0.X;
                  dVar52 = (pFVar42->Location).field0_0x0._s_0.Z -
                           (local_3f8->Location).field0_0x0._s_0.Z;
                  uVar46 = 0;
                  if ((int)local_43c < *(int *)&this->field_0x2d8) {
                    uVar46 = uVar26;
                  }
                  auVar65._0_8_ = dVar53 * dVar53 + dVar60 * dVar60 + dVar52 * dVar52;
                  auVar65._8_8_ = 0;
                  auVar69 = sqrtpd(ZEXT416((uint)fVar51),auVar65);
                  if ((uVar46 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar16 = (code *)swi(3);
                    uVar23 = (*pcVar16)();
                    return (bool)uVar23;
                  }
                  *(float *)(*(longlong *)&this->field_0x2d0 + local_458 * 4) =
                       (float)((double)*(float *)(*(longlong *)&this->field_0x2d0 + local_458 * 4) +
                              auVar69._0_8_);
                  uVar46 = 0;
                  if ((int)local_43c < *(int *)&this->field_0x2d8) {
                    uVar46 = uVar26;
                  }
                  if ((uVar46 == 0) &&
                     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar22)) {
                    pcVar16 = (code *)swi(3);
                    uVar23 = (*pcVar16)();
                    return (bool)uVar23;
                  }
                  *(float *)((longlong)&(pFVar41->OldLocation).field0_0x0 + 0x14) =
                       *(float *)(*(longlong *)&this->field_0x2d0 + local_458 * 4) /
                       this->TrailTypeData->TilingDistance;
                }
              }
              *(int *)&this->field_0x18c = *(int *)&this->field_0x18c + 1;
              if ((iVar8 < *(int *)&this->field_0x18c) &&
                 (cVar24 = (**(code **)(**(longlong **)&this->field_0x10 + 0x38))(), cVar24 != '\0')
                 ) {
                lVar40 = (**(code **)(**(longlong **)&this->field_0x10 + 0xd8))();
                if (lVar40 != 0) {
                  lVar40 = (**(code **)(**(longlong **)&this->field_0x10 + 0xd8))();
                  bVar37 = true;
                  local_390 = *(FName *)(lVar40 + 0x18);
                  ::FName::ToString(&local_390,&local_338);
                }
                ::FString::PrintfImpl(&local_328,L"Ribbon with too many particles: %5d vs. %5d, %s")
                ;
                if ((bVar37) &&
                   (bVar37 = false,
                   local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                  FMemory::Free(local_338.Data.AllocatorInstance.Data);
                }
                if (4 < (byte)LogParticles._0_1_) {
                  UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogParticles)
                  ;
                }
                if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_328.Data.AllocatorInstance.Data);
                }
              }
              local_440 = uVar38;
              local_428 = pFVar41;
              local_3f8 = pFVar42;
              if (FThreadStats::bPrimaryEnable != false) {
                FVar29 = StatPtr_STAT_TrailParticlesSpawned;
                if (StatPtr_STAT_TrailParticlesSpawned ==
                    (FThreadSafeStaticStat<FStat_STAT_TrailParticlesSpawned>)0x0) {
                  pFVar30 = ::FName::FName(&local_248,"STAT_TrailParticlesSpawned");
                  FVar29 = (FThreadSafeStaticStat<FStat_STAT_TrailParticlesSpawned>)
                           FThreadSafeStaticStatBase::DoSetup
                                     ((FThreadSafeStaticStatBase *)
                                      &StatPtr_STAT_TrailParticlesSpawned,*pFVar30,
                                      L"Trail Ptcls Spawned","STATGROUP_Particles",
                                      "STATCAT_Advanced",L"Particles",true,true,ST_int64,false,false
                                      ,MCR_Invalid);
                }
                FVar15 = *(FName *)FVar29;
                if (((FVar15 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
                   (FThreadStats::TlsSlot != 0xffffffff)) {
                  pFVar32 = TlsGetValue(FThreadStats::TlsSlot);
                  if (pFVar32 == (FThreadStats *)0x0) {
                    pFVar33 = FThreadStatsPool::Get();
                    pFVar32 = FThreadStatsPool::GetFromPool(pFVar33);
                  }
                  local_370.NameAndInfo.Number = FVar15.Number & 0xffffafff | 0xa000;
                  local_370.StatData.Pad[0] = '\x01';
                  local_370.StatData.Pad[1] = '\0';
                  local_370.StatData.Pad[2] = '\0';
                  local_370.StatData.Pad[3] = '\0';
                  local_370.StatData.Pad[4] = '\0';
                  local_370.StatData.Pad[5] = '\0';
                  local_370.StatData.Pad[6] = '\0';
                  local_370.StatData.Pad[7] = '\0';
                  local_388 = FVar15;
                  local_370.NameAndInfo.Index.Value = FVar15.ComparisonIndex.Value.Value;
                  FThreadStats::AddStatMessage(pFVar32,&local_370);
                  FStatsTrace::Add(&local_388,1);
                  if (pFVar32->ScopeCount == 0) {
                    FThreadStats::Flush(pFVar32,false,false);
                  }
                  else if (FThreadStats::bIsRawStatsActive != false) {
                    FThreadStats::FlushRawStats(pFVar32,false,false);
                  }
                }
              }
            }
            fVar50 = fVar50 + fVar66;
            local_474 = local_474 + 1;
            uVar81 = (undefined4)__real_3e45798ee0000000;
            uVar82 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
            lVar40 = local_3c0._0_8_;
            fVar51 = __real_3f800000;
          } while (local_474 < local_46c);
          uVar26 = 0;
          uVar25 = uVar26;
          if ((int)local_43c < (this->CurrentSourcePosition).ArrayNum) {
            uVar25 = ~local_43c >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar16 = (code *)swi(3);
            uVar23 = (*pcVar16)();
            return (bool)uVar23;
          }
          pFVar11 = (this->CurrentSourcePosition).AllocatorInstance.Data;
          pFVar10 = pFVar11 + local_458 * 0x18;
          uVar18 = *(undefined8 *)pFVar10;
          uVar83 = *(undefined8 *)(pFVar10 + 8);
          uVar6 = *(undefined8 *)(pFVar11 + local_458 * 0x18 + 0x10);
          uVar25 = uVar26;
          if ((int)local_43c < (this->LastSourcePosition).ArrayNum) {
            uVar25 = ~local_43c >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar16 = (code *)swi(3);
            uVar23 = (*pcVar16)();
            return (bool)uVar23;
          }
          pFVar11 = (this->LastSourcePosition).AllocatorInstance.Data;
          pFVar10 = pFVar11 + local_458 * 0x18;
          *(undefined8 *)pFVar10 = uVar18;
          *(undefined8 *)(pFVar10 + 8) = uVar83;
          *(undefined8 *)(pFVar11 + local_458 * 0x18 + 0x10) = uVar6;
          uVar25 = uVar26;
          if ((int)local_43c < (this->CurrentSourceRotation).ArrayNum) {
            uVar25 = ~local_43c >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar16 = (code *)swi(3);
            uVar23 = (*pcVar16)();
            return (bool)uVar23;
          }
          pFVar11 = (this->CurrentSourceRotation).AllocatorInstance.Data;
          lVar40 = local_458 * 0x20;
          pFVar10 = pFVar11 + lVar40;
          uVar6 = *(undefined8 *)pFVar10;
          uVar18 = *(undefined8 *)(pFVar10 + 8);
          pFVar11 = pFVar11 + lVar40 + 0x10;
          uVar83 = *(undefined8 *)pFVar11;
          uVar20 = *(undefined8 *)(pFVar11 + 8);
          uVar25 = uVar26;
          if ((int)local_43c < (this->LastSourceRotation).ArrayNum) {
            uVar25 = ~local_43c >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar16 = (code *)swi(3);
            uVar23 = (*pcVar16)();
            return (bool)uVar23;
          }
          pFVar11 = (this->LastSourceRotation).AllocatorInstance.Data;
          pFVar10 = pFVar11 + lVar40;
          *(undefined8 *)pFVar10 = uVar6;
          *(undefined8 *)(pFVar10 + 8) = uVar18;
          pFVar11 = pFVar11 + lVar40 + 0x10;
          *(undefined8 *)pFVar11 = uVar83;
          *(undefined8 *)(pFVar11 + 8) = uVar20;
          uVar25 = uVar26;
          if ((int)local_43c < (this->CurrentSourceTangent).ArrayNum) {
            uVar25 = ~local_43c >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar16 = (code *)swi(3);
            uVar23 = (*pcVar16)();
            return (bool)uVar23;
          }
          pFVar11 = (this->CurrentSourceTangent).AllocatorInstance.Data;
          pFVar10 = pFVar11 + local_458 * 0x18;
          uVar18 = *(undefined8 *)pFVar10;
          uVar83 = *(undefined8 *)(pFVar10 + 8);
          uVar6 = *(undefined8 *)(pFVar11 + local_458 * 0x18 + 0x10);
          uVar25 = uVar26;
          if ((int)local_43c < (this->LastSourceTangent).ArrayNum) {
            uVar25 = ~local_43c >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar16 = (code *)swi(3);
            uVar23 = (*pcVar16)();
            return (bool)uVar23;
          }
          pFVar11 = (this->LastSourceTangent).AllocatorInstance.Data;
          pFVar10 = pFVar11 + local_458 * 0x18;
          *(undefined8 *)pFVar10 = uVar18;
          *(undefined8 *)(pFVar10 + 8) = uVar83;
          *(undefined8 *)(pFVar11 + local_458 * 0x18 + 0x10) = uVar6;
          uVar25 = uVar26;
          if ((int)local_43c < (this->CurrentSourceUp).ArrayNum) {
            uVar25 = ~local_43c >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar16 = (code *)swi(3);
            uVar23 = (*pcVar16)();
            return (bool)uVar23;
          }
          pFVar11 = (this->CurrentSourceUp).AllocatorInstance.Data;
          pFVar10 = pFVar11 + local_458 * 0x18;
          uVar18 = *(undefined8 *)pFVar10;
          uVar83 = *(undefined8 *)(pFVar10 + 8);
          uVar6 = *(undefined8 *)(pFVar11 + local_458 * 0x18 + 0x10);
          uVar25 = uVar26;
          if ((int)local_43c < (this->LastSourceUp).ArrayNum) {
            uVar25 = ~local_43c >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar16 = (code *)swi(3);
            uVar23 = (*pcVar16)();
            return (bool)uVar23;
          }
          pFVar11 = (this->LastSourceUp).AllocatorInstance.Data;
          pFVar10 = pFVar11 + local_458 * 0x18;
          *(undefined8 *)pFVar10 = uVar18;
          *(undefined8 *)(pFVar10 + 8) = uVar83;
          *(undefined8 *)(pFVar11 + local_458 * 0x18 + 0x10) = uVar6;
          uVar25 = uVar26;
          if ((int)local_43c < *(int *)&this->field_0x2a8) {
            uVar25 = ~local_43c >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar16 = (code *)swi(3);
            uVar23 = (*pcVar16)();
            return (bool)uVar23;
          }
          *(float *)(*(longlong *)&this->field_0x2a0 + local_458 * 4) = fVar5;
          uVar25 = uVar26;
          if ((int)local_43c < (this->SourceTimes).ArrayNum) {
            uVar25 = ~local_43c >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar16 = (code *)swi(3);
            uVar23 = (*pcVar16)();
            return (bool)uVar23;
          }
          uVar79 = *(undefined4 *)((this->SourceTimes).AllocatorInstance.Data + local_458 * 4);
          uVar25 = uVar26;
          if ((int)local_43c < (this->LastSourceTimes).ArrayNum) {
            uVar25 = ~local_43c >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar16 = (code *)swi(3);
            uVar23 = (*pcVar16)();
            return (bool)uVar23;
          }
          *(undefined4 *)((this->LastSourceTimes).AllocatorInstance.Data + local_458 * 4) = uVar79;
          fVar51 = __real_3f800000;
          if ((this->SourceModule != (UParticleModuleTrailSource *)0x0) &&
             ((this->SourceModule->SourceMethod).Value == '\x01')) {
            uVar25 = uVar26;
            if ((int)local_43c < (this->SourceTimes).ArrayNum) {
              uVar25 = ~local_43c >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar16 = (code *)swi(3);
              uVar23 = (*pcVar16)();
              return (bool)uVar23;
            }
            fVar51 = __real_3f800000;
            if (__real_3f800000 <
                *(float *)((this->SourceTimes).AllocatorInstance.Data + local_458 * 4)) {
              *(uint *)&(local_428->OldLocation).field0_0x0 =
                   *(uint *)&(local_428->OldLocation).field0_0x0 & 0xfffffff;
              *(uint *)&(local_428->OldLocation).field0_0x0 =
                   *(uint *)&(local_428->OldLocation).field0_0x0 | 0x10000000;
              if ((int)local_43c < (this->SourceIndices).ArrayNum) {
                uVar26 = ~local_43c >> 0x1f;
              }
              if ((uVar26 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar16 = (code *)swi(3);
                uVar23 = (*pcVar16)();
                return (bool)uVar23;
              }
              *(undefined4 *)((this->SourceIndices).AllocatorInstance.Data + local_458 * 4) =
                   0xffffffff;
            }
          }
          uVar79 = SUB84(__real_3ff0000000000000,0);
          uVar80 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
          uVar81 = (undefined4)__real_3e45798ee0000000;
          uVar82 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
          fVar73 = __real_322bcc77;
          uVar25 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        }
      }
LAB_14821fb08:
      local_3d0 = local_3d0 + 4;
      local_43c = local_43c + 1;
      local_3c8 = local_3c8 + 0x18;
      local_458 = local_458 + 1;
      uVar23 = local_477;
    } while ((int)local_43c < *(int *)&this->field_0x28c);
  }
  auVar45 = (uchar  [8])(longlong)*(int *)&this->field_0x18c;
  if ((auVar45 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar31 = StatPtr_STAT_TrailParticles;
    if (StatPtr_STAT_TrailParticles == (FThreadSafeStaticStat<FStat_STAT_TrailParticles>)0x0) {
      pFVar30 = ::FName::FName(&local_240,"STAT_TrailParticles");
      FVar31 = (FThreadSafeStaticStat<FStat_STAT_TrailParticles>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TrailParticles,*pFVar30,
                          L"Trail Particles","STATGROUP_Particles","STATCAT_Advanced",L"Particles",
                          true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar15 = *(FName *)FVar31;
    if (((FVar15 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar32 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar32 == (FThreadStats *)0x0) {
        pFVar33 = FThreadStatsPool::Get();
        pFVar32 = FThreadStatsPool::GetFromPool(pFVar33);
      }
      local_360.NameAndInfo.Number = FVar15.Number & 0xffffafff | 0xa000;
      local_378 = FVar15;
      local_360.StatData.Pad = auVar45;
      local_360.NameAndInfo.Index.Value = FVar15.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar32,&local_360);
      FStatsTrace::Add(&local_378,(long64)auVar45);
      if (pFVar32->ScopeCount == 0) {
        FThreadStats::Flush(pFVar32,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar32,false,false);
      }
    }
  }
  return (bool)uVar23;
}

// Tick_RecalculateTangents @ 148221f30

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
FParticleRibbonEmitterInstance::Tick_RecalculateTangents
          (FParticleRibbonEmitterInstance *this,float param_1,UParticleLODLevel *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ushort *puVar5;
  FRibbonTypeDataPayload *pFVar6;
  FRibbonTypeDataPayload *pFVar7;
  FBaseParticle *pFVar8;
  FBaseParticle *pFVar9;
  longlong lVar10;
  FBaseParticle *pFVar11;
  FRibbonTypeDataPayload *pFVar12;
  int local_res8;
  
  if ((this->TrailTypeData->bTangentRecalculationEveryFrame != 0) &&
     (local_res8 = 0, 0 < *(int *)&this->field_0x28c)) {
    do {
      iVar4 = 0;
      if (0 < *(int *)&this->field_0x18c) {
        lVar10 = (longlong)*(int *)&this->field_0x24;
        puVar5 = *(ushort **)&this->field_0x170;
        do {
          pFVar11 = (FBaseParticle *)
                    ((longlong)(int)((uint)*puVar5 * *(int *)&this->field_0x188) +
                    *(longlong *)&this->field_0x168);
          uVar1 = *(uint *)((longlong)&(pFVar11->OldLocation).field0_0x0 + lVar10);
          pFVar12 = (FRibbonTypeDataPayload *)
                    ((longlong)&(pFVar11->OldLocation).field0_0x0 + lVar10);
          if (((uVar1 & 0xf0000000) == 0x40000000) && (*(int *)&pFVar12->field_0x4 == local_res8)) {
            if ((pFVar11 != (FBaseParticle *)0x0) && ((uVar1 & 0x3fff) != 0x3fff)) {
              pFVar8 = (FBaseParticle *)0x0;
              pFVar6 = (FRibbonTypeDataPayload *)0x0;
              if ((*(uint *)pFVar12 & 0x3fff) != 0x3fff) {
                pFVar8 = (FBaseParticle *)
                         ((longlong)(int)(*(int *)&this->field_0x188 * (*(uint *)pFVar12 & 0x3fff))
                         + *(longlong *)&this->field_0x168);
                pFVar6 = (FRibbonTypeDataPayload *)
                         ((longlong)&(pFVar8->OldLocation).field0_0x0 + lVar10);
              }
              if (pFVar8 != (FBaseParticle *)0x0) {
                TrailsBase_CalculateTangent
                          (pFVar11,pFVar12,pFVar8,pFVar6,
                           *(float *)&pFVar12->field_0xc - *(float *)&pFVar6->field_0xc,pFVar12);
                while( true ) {
                  pFVar9 = pFVar8;
                  pFVar7 = pFVar6;
                  pFVar6 = (FRibbonTypeDataPayload *)0x0;
                  pFVar8 = (FBaseParticle *)0x0;
                  if ((pFVar7 != (FRibbonTypeDataPayload *)0x0) &&
                     ((*(uint *)pFVar7 & 0x3fff) != 0x3fff)) {
                    pFVar8 = (FBaseParticle *)
                             ((longlong)
                              (int)((*(uint *)pFVar7 & 0x3fff) * *(int *)&this->field_0x188) +
                             *(longlong *)&this->field_0x168);
                    pFVar6 = (FRibbonTypeDataPayload *)
                             ((longlong)&(pFVar8->OldLocation).field0_0x0 +
                             (longlong)*(int *)&this->field_0x24);
                  }
                  if ((pFVar9 == pFVar11) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("CurrParticle != PrevParticle",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                                         ,0x3b2,L""), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  if ((pFVar9 == pFVar8) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("CurrParticle != NextParticle",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleTrail2EmitterInstance.cpp"
                                         ,0x3b3,L""), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  if (pFVar8 == (FBaseParticle *)0x0) break;
                  TrailsBase_CalculateTangent
                            (pFVar11,pFVar12,pFVar8,pFVar6,
                             *(float *)&pFVar7->field_0xc - *(float *)&pFVar6->field_0xc,pFVar7);
                  pFVar11 = pFVar9;
                  pFVar12 = pFVar7;
                }
                TrailsBase_CalculateTangent
                          (pFVar11,pFVar12,pFVar9,pFVar7,
                           *(float *)&pFVar12->field_0xc - *(float *)&pFVar7->field_0xc,pFVar7);
              }
            }
            break;
          }
          iVar4 = iVar4 + 1;
          puVar5 = puVar5 + 1;
        } while (iVar4 < *(int *)&this->field_0x18c);
      }
      local_res8 = local_res8 + 1;
    } while (local_res8 < *(int *)&this->field_0x28c);
  }
  return;
}

// UpdateSourceData @ 148226060

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
FParticleRibbonEmitterInstance::UpdateSourceData
          (FParticleRibbonEmitterInstance *this,float param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  bool bVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  bool bVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  double dVar28;
  float fVar29;
  float local_res20 [2];
  longlong local_118;
  longlong local_110;
  longlong local_108;
  TVector<double>_u_0 local_100;
  TVector<double>_u_0 local_e8;
  TQuat<double> local_c8;
  TVector<double>_u_0 local_a8 [4];
  
  dVar19 = __real_3ff0000000000000;
  fVar2 = *(float *)&this->field_0x290;
  if ((this->SourceModule == (UParticleModuleTrailSource *)0x0) ||
     ((this->SourceModule->SourceMethod).Value != '\x01')) {
    bVar18 = false;
  }
  else {
    bVar18 = true;
  }
  uVar24 = 0;
  if (0 < *(int *)&this->field_0x28c) {
    lVar26 = 0;
    local_110 = 0;
    local_108 = 0;
    local_118 = 0;
    do {
      uVar25 = ~uVar24 >> 0x1f;
      uVar23 = 0;
      if ((int)uVar24 < (this->SourceIndices).ArrayNum) {
        uVar23 = uVar25;
      }
      if ((uVar23 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar6 = *(int *)((this->SourceIndices).AllocatorInstance.Data + local_108);
      bVar22 = ResolveSourcePoint(this,uVar24,(TVector<double> *)&local_100._s_0,&local_c8,
                                  (TVector<double> *)&local_e8._s_0,
                                  (TVector<double> *)&local_a8[0]._s_0,local_res20);
      if (bVar22) {
        uVar23 = 0;
        if ((int)uVar24 < (this->SourceIndices).ArrayNum) {
          uVar23 = uVar25;
        }
        if ((uVar23 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar22)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar16 = local_100._s_0.Z;
        uVar15 = local_100._s_0.Y;
        uVar14 = local_100._s_0.X;
        if ((*(int *)((this->SourceIndices).AllocatorInstance.Data + lVar26 * 4) == -1) && (bVar18))
        {
          uVar23 = 0;
          if ((int)uVar24 < (this->LastSourcePosition).ArrayNum) {
            uVar23 = uVar25;
          }
          if ((uVar23 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar21 = local_a8[0]._s_0.Z;
          uVar20 = local_a8[0]._s_0.Y;
          uVar17 = local_a8[0]._s_0.X;
          pFVar7 = (this->LastSourcePosition).AllocatorInstance.Data;
          pFVar1 = pFVar7 + local_118;
          *(undefined8 *)pFVar1 = uVar14;
          *(undefined8 *)(pFVar1 + 8) = uVar15;
          *(undefined8 *)(pFVar7 + local_118 + 0x10) = uVar16;
          uVar23 = 0;
          if ((int)uVar24 < (this->LastSourceTangent).ArrayNum) {
            uVar23 = uVar25;
          }
          if ((uVar23 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          fVar29 = local_res20[0];
          pFVar7 = (this->LastSourceTangent).AllocatorInstance.Data;
          pFVar1 = pFVar7 + lVar26 * 0x18;
          *(undefined8 *)pFVar1 = uVar17;
          *(undefined8 *)(pFVar1 + 8) = uVar20;
          *(undefined8 *)(pFVar7 + lVar26 * 0x18 + 0x10) = uVar21;
          uVar23 = 0;
          if ((int)uVar24 < (this->LastSourceTangentStrength).ArrayNum) {
            uVar23 = uVar25;
          }
          if ((uVar23 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          dVar13 = local_c8.W;
          dVar12 = local_c8.Z;
          dVar5 = local_c8.Y;
          dVar4 = local_c8.X;
          *(float *)((this->LastSourceTangentStrength).AllocatorInstance.Data + lVar26 * 4) = fVar29
          ;
          uVar23 = 0;
          if ((int)uVar24 < (this->LastSourceRotation).ArrayNum) {
            uVar23 = uVar25;
          }
          if ((uVar23 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar16 = local_e8._s_0.Z;
          uVar15 = local_e8._s_0.Y;
          uVar14 = local_e8._s_0.X;
          pFVar7 = (this->LastSourceRotation).AllocatorInstance.Data;
          pFVar1 = pFVar7 + local_110;
          *(double *)pFVar1 = dVar4;
          *(double *)(pFVar1 + 8) = dVar5;
          pFVar7 = pFVar7 + local_110 + 0x10;
          *(double *)pFVar7 = dVar12;
          *(double *)(pFVar7 + 8) = dVar13;
          uVar23 = 0;
          if ((int)uVar24 < (this->LastSourceUp).ArrayNum) {
            uVar23 = uVar25;
          }
          if ((uVar23 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar21 = local_100._s_0.Z;
          uVar20 = local_100._s_0.Y;
          uVar17 = local_100._s_0.X;
          pFVar7 = (this->LastSourceUp).AllocatorInstance.Data;
          pFVar1 = pFVar7 + lVar26 * 0x18;
          *(undefined8 *)pFVar1 = uVar14;
          *(undefined8 *)(pFVar1 + 8) = uVar15;
          *(undefined8 *)(pFVar7 + lVar26 * 0x18 + 0x10) = uVar16;
          uVar23 = 0;
          if ((int)uVar24 < (this->CurrentSourcePosition).ArrayNum) {
            uVar23 = uVar25;
          }
          if ((uVar23 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar16 = local_a8[0]._s_0.Z;
          uVar15 = local_a8[0]._s_0.Y;
          uVar14 = local_a8[0]._s_0.X;
          pFVar7 = (this->CurrentSourcePosition).AllocatorInstance.Data;
          pFVar1 = pFVar7 + lVar26 * 0x18;
          *(undefined8 *)pFVar1 = uVar17;
          *(undefined8 *)(pFVar1 + 8) = uVar20;
          *(undefined8 *)(pFVar7 + lVar26 * 0x18 + 0x10) = uVar21;
          uVar23 = 0;
          if ((int)uVar24 < (this->CurrentSourceTangent).ArrayNum) {
            uVar23 = uVar25;
          }
          if ((uVar23 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          fVar29 = local_res20[0];
          pFVar7 = (this->CurrentSourceTangent).AllocatorInstance.Data;
          pFVar1 = pFVar7 + lVar26 * 0x18;
          *(undefined8 *)pFVar1 = uVar14;
          *(undefined8 *)(pFVar1 + 8) = uVar15;
          *(undefined8 *)(pFVar7 + lVar26 * 0x18 + 0x10) = uVar16;
          uVar23 = 0;
          if ((int)uVar24 < (this->CurrentSourceTangentStrength).ArrayNum) {
            uVar23 = uVar25;
          }
          if ((uVar23 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          dVar13 = local_c8.W;
          dVar12 = local_c8.Z;
          dVar5 = local_c8.Y;
          dVar4 = local_c8.X;
          *(float *)((this->CurrentSourceTangentStrength).AllocatorInstance.Data + lVar26 * 4) =
               fVar29;
          uVar23 = 0;
          if ((int)uVar24 < (this->CurrentSourceRotation).ArrayNum) {
            uVar23 = uVar25;
          }
          if ((uVar23 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar16 = local_e8._s_0.Z;
          uVar15 = local_e8._s_0.Y;
          uVar14 = local_e8._s_0.X;
          pFVar7 = (this->CurrentSourceRotation).AllocatorInstance.Data;
          pFVar1 = pFVar7 + lVar26 * 0x20;
          *(double *)pFVar1 = dVar4;
          *(double *)(pFVar1 + 8) = dVar5;
          pFVar7 = pFVar7 + lVar26 * 0x20 + 0x10;
          *(double *)pFVar7 = dVar12;
          *(double *)(pFVar7 + 8) = dVar13;
          uVar23 = 0;
          if ((int)uVar24 < (this->CurrentSourceUp).ArrayNum) {
            uVar23 = uVar25;
          }
          if ((uVar23 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar7 = (this->CurrentSourceUp).AllocatorInstance.Data;
          pFVar1 = pFVar7 + lVar26 * 0x18;
          *(undefined8 *)pFVar1 = uVar14;
          *(undefined8 *)(pFVar1 + 8) = uVar15;
          *(undefined8 *)(pFVar7 + lVar26 * 0x18 + 0x10) = uVar16;
          uVar23 = 0;
          if ((int)uVar24 < *(int *)&this->field_0x2a8) {
            uVar23 = uVar25;
          }
          if ((uVar23 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          *(undefined4 *)(*(longlong *)&this->field_0x2a0 + lVar26 * 4) = 0;
        }
        else {
          if ((param_2) || ((iVar6 == -1 && (bVar18)))) {
            uVar23 = 0;
            if ((int)uVar24 < (this->LastSourcePosition).ArrayNum) {
              uVar23 = uVar25;
            }
            if ((uVar23 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar7 = (this->LastSourcePosition).AllocatorInstance.Data;
            pFVar1 = pFVar7 + lVar26 * 0x18;
            *(undefined8 *)pFVar1 = uVar14;
            *(undefined8 *)(pFVar1 + 8) = uVar15;
            *(undefined8 *)(pFVar7 + lVar26 * 0x18 + 0x10) = uVar16;
            uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
            uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
            uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
            uVar23 = 0;
            if ((int)uVar24 < (this->LastSourceTangent).ArrayNum) {
              uVar23 = uVar25;
            }
            if ((uVar23 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            fVar29 = local_res20[0];
            pFVar7 = (this->LastSourceTangent).AllocatorInstance.Data;
            pFVar1 = pFVar7 + lVar26 * 0x18;
            *(undefined8 *)pFVar1 = uVar14;
            *(undefined8 *)(pFVar1 + 8) = uVar15;
            *(undefined8 *)(pFVar7 + lVar26 * 0x18 + 0x10) = uVar16;
            uVar23 = 0;
            if ((int)uVar24 < (this->LastSourceTangentStrength).ArrayNum) {
              uVar23 = uVar25;
            }
            if ((uVar23 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar16 = local_e8._s_0.Z;
            uVar15 = local_e8._s_0.Y;
            uVar14 = local_e8._s_0.X;
            *(float *)((this->LastSourceTangentStrength).AllocatorInstance.Data + lVar26 * 4) =
                 fVar29;
            uVar23 = 0;
            if ((int)uVar24 < (this->LastSourceUp).ArrayNum) {
              uVar23 = uVar25;
            }
            if ((uVar23 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar7 = (this->LastSourceUp).AllocatorInstance.Data;
            pFVar1 = pFVar7 + lVar26 * 0x18;
            *(undefined8 *)pFVar1 = uVar14;
            *(undefined8 *)(pFVar1 + 8) = uVar15;
            *(undefined8 *)(pFVar7 + lVar26 * 0x18 + 0x10) = uVar16;
            uVar3 = *(undefined4 *)&this->field_0x290;
            uVar23 = 0;
            if ((int)uVar24 < *(int *)&this->field_0x2a8) {
              uVar23 = uVar25;
            }
            if ((uVar23 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            *(undefined4 *)(*(longlong *)&this->field_0x2a0 + lVar26 * 4) = uVar3;
          }
          uVar16 = local_100._s_0.Z;
          uVar15 = local_100._s_0.Y;
          uVar14 = local_100._s_0.X;
          uVar23 = 0;
          if ((int)uVar24 < (this->CurrentSourcePosition).ArrayNum) {
            uVar23 = uVar25;
          }
          if ((uVar23 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          dVar13 = local_c8.W;
          dVar12 = local_c8.Z;
          dVar5 = local_c8.Y;
          dVar4 = local_c8.X;
          pFVar7 = (this->CurrentSourcePosition).AllocatorInstance.Data;
          pFVar1 = pFVar7 + lVar26 * 0x18;
          *(undefined8 *)pFVar1 = uVar14;
          *(undefined8 *)(pFVar1 + 8) = uVar15;
          *(undefined8 *)(pFVar7 + lVar26 * 0x18 + 0x10) = uVar16;
          uVar23 = 0;
          if ((int)uVar24 < (this->CurrentSourceRotation).ArrayNum) {
            uVar23 = uVar25;
          }
          if ((uVar23 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar7 = (this->CurrentSourceRotation).AllocatorInstance.Data;
          lVar27 = lVar26 * 0x20;
          pFVar1 = pFVar7 + lVar27;
          *(double *)pFVar1 = dVar4;
          *(double *)(pFVar1 + 8) = dVar5;
          pFVar7 = pFVar7 + lVar27 + 0x10;
          *(double *)pFVar7 = dVar12;
          *(double *)(pFVar7 + 8) = dVar13;
          uVar23 = 0;
          if ((int)uVar24 < *(int *)&this->field_0x2a8) {
            uVar23 = uVar25;
          }
          if ((uVar23 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          fVar29 = fVar2 - *(float *)(*(longlong *)&this->field_0x2a0 + lVar26 * 4);
          if (fVar29 == 0.0) {
            uVar23 = 0;
            if ((int)uVar24 < (this->CurrentSourceTangent).ArrayNum) {
              uVar23 = uVar25;
            }
            if ((uVar23 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar1 = (this->CurrentSourceTangent).AllocatorInstance.Data;
            *(undefined8 *)(pFVar1 + lVar26 * 0x18) = 0x3ff0000000000000;
            *(undefined8 *)(pFVar1 + lVar26 * 0x18 + 8) = 0;
            *(undefined8 *)(pFVar1 + lVar26 * 0x18 + 0x10) = 0;
          }
          else {
            uVar23 = 0;
            if ((int)uVar24 < (this->CurrentSourcePosition).ArrayNum) {
              uVar23 = uVar25;
            }
            if ((uVar23 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar1 = (this->CurrentSourcePosition).AllocatorInstance.Data;
            uVar23 = 0;
            if ((int)uVar24 < (this->LastSourcePosition).ArrayNum) {
              uVar23 = uVar25;
            }
            if ((uVar23 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar8 = (this->LastSourcePosition).AllocatorInstance.Data;
            pFVar7 = pFVar1 + lVar26 * 0x18 + 8;
            dVar12 = *(double *)pFVar7;
            dVar4 = *(double *)(pFVar1 + lVar26 * 0x18);
            dVar5 = *(double *)(pFVar8 + lVar26 * 0x18);
            dVar28 = dVar19 / (double)fVar29;
            pFVar8 = pFVar8 + lVar26 * 0x18 + 8;
            dVar13 = *(double *)pFVar8;
            uVar23 = 0;
            if ((int)uVar24 < (this->CurrentSourceTangent).ArrayNum) {
              uVar23 = uVar25;
            }
            dVar11 = (*(double *)(pFVar7 + 8) - *(double *)(pFVar8 + 8)) * dVar28;
            if ((uVar23 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar1 = (this->CurrentSourceTangent).AllocatorInstance.Data;
            *(double *)(pFVar1 + lVar26 * 0x18) = (dVar4 - dVar5) * dVar28;
            auVar10._8_4_ = SUB84(dVar11,0);
            auVar10._0_8_ = (dVar12 - dVar13) * dVar28;
            auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
            *(undefined1 (*) [16])(pFVar1 + lVar26 * 0x18 + 8) = auVar10;
          }
          fVar29 = local_res20[0];
          uVar23 = 0;
          if ((int)uVar24 < (this->CurrentSourceTangentStrength).ArrayNum) {
            uVar23 = uVar25;
          }
          if ((uVar23 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar16 = local_e8._s_0.Z;
          uVar15 = local_e8._s_0.Y;
          uVar14 = local_e8._s_0.X;
          *(float *)((this->CurrentSourceTangentStrength).AllocatorInstance.Data + lVar26 * 4) =
               fVar29;
          uVar23 = 0;
          if ((int)uVar24 < (this->CurrentSourceUp).ArrayNum) {
            uVar23 = uVar25;
          }
          if ((uVar23 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar7 = (this->CurrentSourceUp).AllocatorInstance.Data;
          pFVar1 = pFVar7 + lVar26 * 0x18;
          *(undefined8 *)pFVar1 = uVar14;
          *(undefined8 *)(pFVar1 + 8) = uVar15;
          *(undefined8 *)(pFVar7 + lVar26 * 0x18 + 0x10) = uVar16;
          if (param_2) {
            uVar23 = 0;
            if ((int)uVar24 < (this->CurrentSourceRotation).ArrayNum) {
              uVar23 = uVar25;
            }
            if ((uVar23 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar7 = (this->CurrentSourceRotation).AllocatorInstance.Data;
            pFVar1 = pFVar7 + lVar27;
            uVar14 = *(undefined8 *)pFVar1;
            uVar15 = *(undefined8 *)(pFVar1 + 8);
            pFVar7 = pFVar7 + lVar27 + 0x10;
            uVar16 = *(undefined8 *)pFVar7;
            uVar17 = *(undefined8 *)(pFVar7 + 8);
            uVar23 = 0;
            if ((int)uVar24 < (this->LastSourceRotation).ArrayNum) {
              uVar23 = uVar25;
            }
            if ((uVar23 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar7 = (this->LastSourceRotation).AllocatorInstance.Data;
            pFVar1 = pFVar7 + lVar27;
            *(undefined8 *)pFVar1 = uVar14;
            *(undefined8 *)(pFVar1 + 8) = uVar15;
            pFVar7 = pFVar7 + lVar27 + 0x10;
            *(undefined8 *)pFVar7 = uVar16;
            *(undefined8 *)(pFVar7 + 8) = uVar17;
          }
        }
      }
      local_118 = local_118 + 0x18;
      local_108 = local_108 + 4;
      local_110 = local_110 + 0x20;
      uVar24 = uVar24 + 1;
      lVar26 = lVar26 + 1;
    } while ((int)uVar24 < *(int *)&this->field_0x28c);
  }
  return;
}

// operator() @ 150528050

bool __thiscall
`FParticleRibbonEmitterInstance::ResolveSourcePoint'::__l47::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  FName local_res10;
  FString local_28;
  void *local_18 [2];
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_338795202221176580>);
  if (bVar4) {
    (**(code **)(**(longlong **)this + 0x90))(*(longlong **)this,local_18);
    lVar6 = (**(code **)(**(longlong **)this + 0xd8))();
    if (lVar6 == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(lVar6 + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_338795202221176580>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_150528121;
    }
  }
  bVar4 = false;
LAB_150528121:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1505281f0

bool __thiscall
`FParticleRibbonEmitterInstance::ResolveSourcePoint'::__l47::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  FName local_res10;
  FString local_28;
  void *local_18 [2];
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_338795202221176579>);
  if (bVar4) {
    (**(code **)(**(longlong **)this + 0x90))(*(longlong **)this,local_18);
    lVar6 = (**(code **)(**(longlong **)this + 0xd8))();
    if (lVar6 == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(lVar6 + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_338795202221176579>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1505282c1;
    }
  }
  bVar4 = false;
LAB_1505282c1:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 150528310

bool __thiscall
`FParticleRibbonEmitterInstance::ResolveSourcePoint'::__l47::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  FName local_res10;
  FString local_28;
  void *local_18 [2];
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_338795202221176578>);
  if (bVar4) {
    (**(code **)(**(longlong **)this + 0x90))(*(longlong **)this,local_18);
    lVar6 = (**(code **)(**(longlong **)this + 0xd8))();
    if (lVar6 == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(lVar6 + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_338795202221176578>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1505283e1;
    }
  }
  bVar4 = false;
LAB_1505283e1:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

