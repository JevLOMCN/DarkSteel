// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 55

// ~FParticleSystemObjectCascade @ 1456de610

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
FParticleSystemObjectCascade::~FParticleSystemObjectCascade(FParticleSystemObjectCascade *this)

{
  undefined1 *puVar1;
  int iVar2;
  FSceneInterface *pFVar3;
  FTransformObject *pFVar4;
  FScriptContainerElement *pFVar5;
  
  *(undefined ***)this = &_vftable__for__FTransformObjectListener__;
  *(undefined ***)&this->field_0x18 = &_vftable__for__IParticleEmitterInstanceOwner__;
  pFVar3 = ((this->PrimitiveSceneData).SceneProxy)->Scene;
  (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,&this->PrimitiveSceneDesc);
  pFVar4 = (this->TransformObject).Reference;
  if (pFVar4 != (FTransformObject *)0x0) {
    FTransformObject::RemoveListener(pFVar4,(FTransformObjectListener *)this);
    pFVar4 = (this->TransformObject).Reference;
    if (pFVar4 != (FTransformObject *)0x0) {
      (this->TransformObject).Reference = (FTransformObject *)0x0;
      puVar1 = &pFVar4->field_0x18;
      LOCK();
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
        (**(code **)(*(longlong *)pFVar4 + 8))(pFVar4,1);
      }
    }
  }
  pFVar5 = (this->EmitterInstances).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->CustomPrimitiveData).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar4 = (this->TransformObject).Reference;
  if (pFVar4 != (FTransformObject *)0x0) {
    puVar1 = &pFVar4->field_0x18;
    LOCK();
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
      (**(code **)(*(longlong *)pFVar4 + 8))(pFVar4,1);
    }
  }
  *(undefined ***)&this->field_0x18 = &___7IParticleEmitterInstanceOwner__6B_;
  return;
}

// AsComponent @ 1456f8940

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UParticleSystemComponent * __thiscall
FParticleSystemObjectCascade::AsComponent(FParticleSystemObjectCascade *this)

{
  return (UParticleSystemComponent *)0x0;
}

// CreateDynamicData @ 1456fc840

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FParticleDynamicData * __thiscall
FParticleSystemObjectCascade::CreateDynamicData(FParticleSystemObjectCascade *this,Type param_1)

{
  int *piVar1;
  TTransform<double> *pTVar2;
  UParticleSystem *pUVar3;
  longlong *plVar4;
  ForElementType<FDynamicEmitterDataBase_*> FVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  FParticleDynamicData *pFVar17;
  Info *pIVar18;
  FParticleDynamicData *pFVar19;
  ForElementType<FDynamicEmitterDataBase_*> FVar20;
  FParticleDynamicData *pFVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  longlong local_b8 [2];
  undefined1 local_a8 [16];
  double local_98;
  Info local_88 [4];
  
  pFVar17 = FParticleDynamicData::operator_new(0xb0);
  pFVar21 = (FParticleDynamicData *)0x0;
  pFVar19 = pFVar21;
  if (pFVar17 != (FParticleDynamicData *)0x0) {
    (pFVar17->DynamicEmitterDataArray).AllocatorInstance.SecondaryData =
         (ForElementType<FDynamicEmitterDataBase_*>)0x0;
    (pFVar17->DynamicEmitterDataArray).ArrayNum = 0;
    (pFVar17->DynamicEmitterDataArray).ArrayMax = 0xc;
    (pFVar17->PerfStatContext).WorldStats = (FParticlePerfStats *)0x0;
    (pFVar17->PerfStatContext).SystemStats = (FParticlePerfStats *)0x0;
    (pFVar17->PerfStatContext).ComponentStats = (FParticlePerfStats *)0x0;
    pFVar19 = pFVar17;
  }
  if (this->Template != (UParticleSystem *)0x0) {
    pIVar18 = FTransformObject::GetInfo((this->TransformObject).Reference,local_88);
    pTVar2 = pIVar18->WorldTransform;
    pUVar3 = this->Template;
    auVar30 = *(undefined1 (*) [16])(pTVar2->Rotation).ZW.m128d_f64;
    auVar23 = *(undefined1 (*) [16])(pTVar2->Rotation).XY.m128d_f64;
    dVar9 = (pUVar3->MacroUVPosition).field0_0x0._s_0.X * (pTVar2->Scale3D).XY.m128d_f64[0];
    dVar10 = (pUVar3->MacroUVPosition).field0_0x0._s_0.Y * (pTVar2->Scale3D).XY.m128d_f64[1];
    uVar31 = (undefined4)((ulonglong)dVar10 >> 0x20);
    dVar11 = (pUVar3->MacroUVPosition).field0_0x0._s_0.Z * (pTVar2->Scale3D).ZW.m128d_f64[0];
    dVar12 = (pTVar2->Scale3D).ZW.m128d_f64[1] * 0.0;
    dVar13 = (pTVar2->Rotation).ZW.m128d_f64[1];
    auVar33._8_4_ = SUB84(dVar10,0);
    auVar33._0_8_ = dVar9;
    auVar33._12_4_ = uVar31;
    dVar7 = auVar30._0_8_;
    auVar25 = blendpd(auVar23,auVar30,2);
    auVar34._0_8_ = auVar33._8_8_ * auVar23._0_8_ - auVar23._8_8_ * dVar9;
    auVar34._8_8_ = dVar11 * auVar23._8_8_ - dVar7 * dVar10;
    auVar35._8_4_ = SUB84(dVar10,0);
    auVar35._0_8_ = dVar9;
    auVar35._12_4_ = uVar31;
    auVar23._8_4_ = SUB84(dVar12,0);
    auVar23._0_8_ = dVar11;
    auVar23._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    auVar23 = blendpd(auVar35,auVar23,2);
    auVar24._0_8_ = auVar23._0_8_ * dVar7 - auVar25._0_8_ * dVar11;
    auVar24._8_8_ = auVar23._8_8_ * auVar30._8_8_ - auVar25._8_8_ * dVar12;
    auVar23 = *(undefined1 (*) [16])(pTVar2->Rotation).XY.m128d_f64;
    auVar35 = blendpd(auVar34,auVar24,2);
    auVar36._0_8_ = auVar35._0_8_ + auVar35._0_8_;
    auVar36._8_8_ = auVar35._8_8_ + auVar35._8_8_;
    dVar12 = auVar34._8_8_ + auVar34._8_8_;
    dVar8 = auVar24._0_8_ + auVar24._0_8_;
    uVar31 = (undefined4)((ulonglong)dVar8 >> 0x20);
    auVar28._8_4_ = SUB84(dVar8,0);
    auVar28._0_8_ = dVar12;
    auVar28._12_4_ = uVar31;
    auVar26._8_4_ = SUB84(dVar8,0);
    auVar26._0_8_ = dVar12;
    auVar26._12_4_ = uVar31;
    auVar35 = blendpd(auVar26,auVar36,2);
    auVar29._0_8_ = auVar28._8_8_ * auVar23._0_8_ - auVar23._8_8_ * dVar12;
    auVar29._8_8_ = auVar36._0_8_ * auVar23._8_8_ - dVar7 * dVar8;
    auVar25._8_4_ = SUB84(auVar29._8_8_,0);
    auVar25._0_8_ = auVar29._0_8_;
    auVar25._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
    auVar23 = blendpd(auVar23,auVar30,2);
    auVar27._0_8_ = auVar35._0_8_ * dVar7 - auVar23._0_8_ * auVar36._0_8_;
    auVar27._8_8_ = auVar35._8_8_ * auVar30._8_8_ - auVar23._8_8_ * auVar36._8_8_;
    auVar30 = blendpd(auVar29,auVar27,2);
    dVar7 = dVar12 * dVar13 + dVar9 + auVar25._8_8_ + (pTVar2->Translation).XY.m128d_f64[0];
    dVar12 = dVar8 * dVar13 + dVar10 + auVar27._0_8_ + (pTVar2->Translation).XY.m128d_f64[1];
    uVar31 = SUB84(dVar12,0);
    uVar32 = (undefined4)((ulonglong)dVar12 >> 0x20);
    local_a8._8_4_ = uVar31;
    local_a8._0_8_ = dVar7;
    local_a8._12_4_ = uVar32;
    local_98 = auVar36._0_8_ * dVar13 + dVar11 + auVar30._0_8_ +
               (pTVar2->Translation).ZW.m128d_f64[0];
    auVar30._8_4_ = uVar31;
    auVar30._0_8_ = dVar7;
    auVar30._12_4_ = uVar32;
    *(undefined1 (*) [16])&(pFVar19->SystemPositionForMacroUVs).field0_0x0 = auVar30;
    (pFVar19->SystemPositionForMacroUVs).field0_0x0._s_0.Z = local_98;
    pFVar19->SystemRadiusForMacroUVs = this->Template->MacroUVRadius;
  }
  piVar1 = &(pFVar19->DynamicEmitterDataArray).ArrayMax;
  (pFVar19->DynamicEmitterDataArray).ArrayNum = 0;
  if ((pFVar19->DynamicEmitterDataArray).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<FDynamicEmitterDataBase_*>_>
              (8,8,0,&(pFVar19->DynamicEmitterDataArray).AllocatorInstance,0,piVar1);
  }
  uVar15 = (this->EmitterInstances).ArrayNum;
  if (-1 < (int)uVar15) {
    if (*piVar1 < (int)uVar15) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<FDynamicEmitterDataBase_*>_>
                (8,8,uVar15,&(pFVar19->DynamicEmitterDataArray).AllocatorInstance,
                 (pFVar19->DynamicEmitterDataArray).ArrayNum,piVar1);
    }
    pFVar17 = pFVar21;
    if (0 < (this->EmitterInstances).ArrayNum) {
      do {
        uVar22 = (uint)pFVar21;
        local_b8[0] = 0;
        uVar15 = 0;
        if ((int)uVar22 < (this->EmitterInstances).ArrayNum) {
          uVar15 = ~uVar22 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          pFVar19 = (FParticleDynamicData *)(*pcVar6)();
          return pFVar19;
        }
        plVar4 = *(longlong **)
                  ((this->EmitterInstances).AllocatorInstance.Data + -8 +
                  (longlong)&(pFVar17->DynamicEmitterDataArray).AllocatorInstance);
        if ((plVar4 != (longlong *)0x0) &&
           (local_b8[0] = (**(code **)(*plVar4 + 0x120))(plVar4,0,param_1), local_b8[0] != 0)) {
          *(uint *)(local_b8[0] + 0x10) = *(uint *)(local_b8[0] + 0x10) | 2;
          FVar5 = (pFVar19->DynamicEmitterDataArray).AllocatorInstance.SecondaryData;
          FVar20 = (ForElementType<FDynamicEmitterDataBase_*>)&pFVar19->DynamicEmitterDataArray;
          if (FVar5 != (ForElementType<FDynamicEmitterDataBase_*>)0x0) {
            FVar20 = FVar5;
          }
          if ((ulonglong)FVar20 <= local_b8) {
            FVar20 = (ForElementType<FDynamicEmitterDataBase_*>)&pFVar19->DynamicEmitterDataArray;
            if (FVar5 != (ForElementType<FDynamicEmitterDataBase_*>)0x0) {
              FVar20 = FVar5;
            }
            if ((local_b8 < (longlong *)((longlong)FVar20 + (longlong)*piVar1 * 8)) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar14)) {
              pcVar6 = (code *)swi(3);
              pFVar19 = (FParticleDynamicData *)(*pcVar6)();
              return pFVar19;
            }
          }
          iVar16 = (pFVar19->DynamicEmitterDataArray).ArrayNum;
          if (iVar16 == *piVar1) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<FDynamicEmitterDataBase_*>_>
                               (0x808,&(pFVar19->DynamicEmitterDataArray).AllocatorInstance,piVar1);
          }
          (pFVar19->DynamicEmitterDataArray).ArrayNum = iVar16 + 1;
          FVar5 = (pFVar19->DynamicEmitterDataArray).AllocatorInstance.SecondaryData;
          FVar20 = (ForElementType<FDynamicEmitterDataBase_*>)&pFVar19->DynamicEmitterDataArray;
          if (FVar5 != (ForElementType<FDynamicEmitterDataBase_*>)0x0) {
            FVar20 = FVar5;
          }
          *(longlong *)((longlong)FVar20 + (longlong)iVar16 * 8) = local_b8[0];
          *(uint *)(local_b8[0] + 0x14) = uVar22;
          *(uint *)(local_b8[0] + 0x14) = uVar22;
        }
        pFVar21 = (FParticleDynamicData *)(ulonglong)(uVar22 + 1);
        pFVar17 = (FParticleDynamicData *)&pFVar17->DynamicEmitterDataArray;
      } while ((int)(uVar22 + 1) < (this->EmitterInstances).ArrayNum);
    }
    return pFVar19;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
}

// DeactivateNextTick @ 1456fd7e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FParticleSystemObjectCascade::DeactivateNextTick(FParticleSystemObjectCascade *this)

{
  return;
}

// GetAsyncComponentToWorld @ 145707d10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TTransform<double> * __thiscall
FParticleSystemObjectCascade::GetAsyncComponentToWorld(FParticleSystemObjectCascade *this)

{
  Info *pIVar1;
  Info local_28;
  
  pIVar1 = FTransformObject::GetInfo(*(FTransformObject **)&this->field_0x10,&local_28);
  return pIVar1->WorldTransform;
}

// GetAsyncInstanceParameters @ 145707d30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TArrayView<FParticleSysParam_const_,int> * __thiscall
FParticleSystemObjectCascade::GetAsyncInstanceParameters
          (FParticleSystemObjectCascade *this,
          TArrayView<FParticleSysParam_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (FParticleSysParam *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetBounds @ 145707db0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
FParticleSystemObjectCascade::GetBounds(FParticleSystemObjectCascade *this)

{
  return (TBoxSphereBounds<double,double> *)&(this->PrimitiveSceneDesc).SceneProxy;
}

// GetBurstEvents @ 145707dc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TArrayView<FParticleEventBurstData,int> * __thiscall
FParticleSystemObjectCascade::GetBurstEvents
          (FParticleSystemObjectCascade *this,
          TArrayView<FParticleEventBurstData,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (FParticleEventBurstData *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetCollisionEvents @ 145707ea0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TArrayView<FParticleEventCollideData,int> * __thiscall
FParticleSystemObjectCascade::GetCollisionEvents
          (FParticleSystemObjectCascade *this,
          TArrayView<FParticleEventCollideData,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (FParticleEventCollideData *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetComponentRotation @ 145707ec0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRotator<double> * __thiscall
FParticleSystemObjectCascade::GetComponentRotation
          (FParticleSystemObjectCascade *this,TRotator<double> *__return_storage_ptr__)

{
  __return_storage_ptr__->Pitch = 0.0;
  __return_storage_ptr__->Yaw = 0.0;
  __return_storage_ptr__->Roll = 0.0;
  return __return_storage_ptr__;
}

// GetComponentToWorld @ 145707ee0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TTransform<double> * __thiscall
FParticleSystemObjectCascade::GetComponentToWorld(FParticleSystemObjectCascade *this)

{
  Info *pIVar1;
  Info local_28;
  
  pIVar1 = FTransformObject::GetInfo(*(FTransformObject **)&this->field_0x10,&local_28);
  return pIVar1->WorldTransform;
}

// GetComponentTransform @ 145707f00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TTransform<double> * __thiscall
FParticleSystemObjectCascade::GetComponentTransform(FParticleSystemObjectCascade *this)

{
  Info *pIVar1;
  Info local_28;
  
  pIVar1 = FTransformObject::GetInfo(*(FTransformObject **)&this->field_0x10,&local_28);
  return pIVar1->WorldTransform;
}

// GetCurrentDetailMode @ 145708f80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
FParticleSystemObjectCascade::GetCurrentDetailMode(FParticleSystemObjectCascade *this)

{
  return 0;
}

// GetCurrentLODIndex @ 145708f90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall FParticleSystemObjectCascade::GetCurrentLODIndex(FParticleSystemObjectCascade *this)

{
  return 0;
}

// GetDeathEvents @ 145708fa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TArrayView<FParticleEventDeathData,int> * __thiscall
FParticleSystemObjectCascade::GetDeathEvents
          (FParticleSystemObjectCascade *this,
          TArrayView<FParticleEventDeathData,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (FParticleEventDeathData *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetDistributionData @ 145709b20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __thiscall
FParticleSystemObjectCascade::GetDistributionData(FParticleSystemObjectCascade *this)

{
  return (UObject *)0x0;
}

// GetEmitterDelay @ 145709db0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall FParticleSystemObjectCascade::GetEmitterDelay(FParticleSystemObjectCascade *this)

{
  return 0.0;
}

// GetEmitterInstances @ 145709dc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TArrayView<FParticleEmitterInstance_*,int> * __thiscall
FParticleSystemObjectCascade::GetEmitterInstances
          (FParticleSystemObjectCascade *this,
          TArrayView<FParticleEmitterInstance_*,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (FParticleEmitterInstance **)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetEmitterMaterials @ 145709de0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TArrayView<TObjectPtr<UMaterialInterface>,int> * __thiscall
FParticleSystemObjectCascade::GetEmitterMaterials
          (FParticleSystemObjectCascade *this,
          TArrayView<TObjectPtr<UMaterialInterface>,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (TObjectPtr<UMaterialInterface> *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetFXSystem @ 145709e00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FFXSystem * __thiscall FParticleSystemObjectCascade::GetFXSystem(FParticleSystemObjectCascade *this)

{
  return (FFXSystem *)0x0;
}

// GetFloatParameter @ 145709e10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FParticleSystemObjectCascade::GetFloatParameter
          (FParticleSystemObjectCascade *this,FName param_1,float *param_2)

{
  return false;
}

// GetFullName @ 145709e30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
FParticleSystemObjectCascade::GetFullName
          (FParticleSystemObjectCascade *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetInstanceParameters @ 14570a1f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TArrayView<FParticleSysParam_const_,int> * __thiscall
FParticleSystemObjectCascade::GetInstanceParameters
          (FParticleSystemObjectCascade *this,
          TArrayView<FParticleSysParam_const_,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (FParticleSysParam *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetIsWarmingUp @ 14570a210

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FParticleSystemObjectCascade::GetIsWarmingUp(FParticleSystemObjectCascade *this)

{
  return false;
}

// GetJustRegistered @ 14570a220

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FParticleSystemObjectCascade::GetJustRegistered(FParticleSystemObjectCascade *this)

{
  return (bool)(char)(this->EmitterInstances).ArrayMax;
}

// GetKismetEvents @ 14570a230

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TArrayView<FParticleEventKismetData,int> * __thiscall
FParticleSystemObjectCascade::GetKismetEvents
          (FParticleSystemObjectCascade *this,
          TArrayView<FParticleEventKismetData,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (FParticleEventKismetData *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetLWCTile @ 14570a250

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<float> * __thiscall
FParticleSystemObjectCascade::GetLWCTile(FParticleSystemObjectCascade *this)

{
  return (TVector<float> *)&this->EmitterInstances;
}

// GetName @ 14570a330

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
FParticleSystemObjectCascade::GetName
          (FParticleSystemObjectCascade *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetOldPosition @ 14570a3b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
FParticleSystemObjectCascade::GetOldPosition(FParticleSystemObjectCascade *this)

{
  return &UE::Math::TVector<double>::ZeroVector;
}

// GetPartSysVelocity @ 14570a3c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
FParticleSystemObjectCascade::GetPartSysVelocity(FParticleSystemObjectCascade *this)

{
  return &UE::Math::TVector<double>::ZeroVector;
}

// GetPathName @ 14570a3d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
FParticleSystemObjectCascade::GetPathName
          (FParticleSystemObjectCascade *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetRandomStream @ 14570a5f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRandomStream * __thiscall
FParticleSystemObjectCascade::GetRandomStream(FParticleSystemObjectCascade *this)

{
  return (FRandomStream *)&this->Template;
}

// GetScene @ 14570a600

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FSceneInterface * __thiscall
FParticleSystemObjectCascade::GetScene(FParticleSystemObjectCascade *this)

{
  return *(FSceneInterface **)&(this->TransformObject).Reference[3].field_0x10;
}

// GetSceneProxy @ 14570a620

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
FParticleSystemObjectCascade::GetSceneProxy(FParticleSystemObjectCascade *this)

{
  return (FPrimitiveSceneProxy *)(this->TransformObject).Reference;
}

// GetSpawnEvents @ 14570ab00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TArrayView<FParticleEventSpawnData,int> * __thiscall
FParticleSystemObjectCascade::GetSpawnEvents
          (FParticleSystemObjectCascade *this,
          TArrayView<FParticleEventSpawnData,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = (FParticleEventSpawnData *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetTemplate @ 145710330

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UParticleSystem * __thiscall
FParticleSystemObjectCascade::GetTemplate(FParticleSystemObjectCascade *this)

{
  return (UParticleSystem *)(this->PrimitiveSceneDesc).PrimitiveUObject;
}

// GetWarmupTime @ 145710590

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall FParticleSystemObjectCascade::GetWarmupTime(FParticleSystemObjectCascade *this)

{
  return 0.0;
}

// GetWeakWorld @ 1457105a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TWeakObjectPtr<UWorld,FWeakObjectPtr> __thiscall
FParticleSystemObjectCascade::GetWeakWorld(FParticleSystemObjectCascade *this)

{
  FWeakObjectPtr in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return (TWeakObjectPtr<UWorld,FWeakObjectPtr>)in_RDX;
}

// GetWorldEffectiveTimeDilation @ 1457105d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
FParticleSystemObjectCascade::GetWorldEffectiveTimeDilation(FParticleSystemObjectCascade *this)

{
  return 0.0;
}

// GetWorldOriginLocation @ 1457105e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TIntVector3<int> * __thiscall
FParticleSystemObjectCascade::GetWorldOriginLocation
          (FParticleSystemObjectCascade *this,TIntVector3<int> *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0;
  return __return_storage_ptr__;
}

// GetWorldTimeSeconds @ 145710600

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
FParticleSystemObjectCascade::GetWorldTimeSeconds(FParticleSystemObjectCascade *this)

{
  return 0.0;
}

// HasWorld @ 1457106a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FParticleSystemObjectCascade::HasWorld(FParticleSystemObjectCascade *this)

{
  return true;
}

// HasWorldSettings @ 1457106b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FParticleSystemObjectCascade::HasWorldSettings(FParticleSystemObjectCascade *this)

{
  return false;
}

// InitializeSystem @ 1457169b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FParticleSystemObjectCascade::InitializeSystem
          (FParticleSystemObjectCascade *this,FParticleSystemSceneProxyDesc *param_1,
          FParticleSystemStaticState *param_2,FParticleSystemDynamicState *param_3)

{
  TArray<FParticleEmitterInstance_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *_Dst;
  int iVar2;
  UParticleSystem *pUVar3;
  UParticleEmitter *this_00;
  longlong lVar4;
  longlong lVar5;
  TTransform<double> *pTVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  FParticleEmitterInstance *this_01;
  Info *pIVar11;
  TVector<float> *pTVar12;
  uint uVar13;
  int *piVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  undefined1 local_98 [4];
  int local_94;
  longlong local_90;
  TVector<float> local_88;
  TVector<double>_u_0 local_78;
  Info local_58;
  
  if (this->Template != (UParticleSystem *)0x0) {
    uVar17 = (this->Template->Emitters).ArrayNum;
    lVar15 = (longlong)(int)uVar17;
    piVar14 = &(this->EmitterInstances).ArrayNum;
    pTVar1 = &this->EmitterInstances;
    iVar2 = *piVar14;
    if (iVar2 < (int)uVar17) {
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (8,8,uVar17 - iVar2,&pTVar1->AllocatorInstance,piVar14,
                          &(this->EmitterInstances).ArrayMax);
      memset((pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 8,0,
             (longlong)(int)(uVar17 - iVar2) << 3);
    }
    else {
      if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
      }
      if ((int)uVar17 < iVar2) {
        uVar16 = iVar2 - uVar17;
        if (((int)(uVar17 | uVar16) < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (uVar16 != 0) {
          _Dst = (pTVar1->AllocatorInstance).Data + lVar15 * 8;
          iVar10 = ((this->EmitterInstances).ArrayNum - uVar16) - uVar17;
          if (iVar10 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar16 * 8,(longlong)iVar10 << 3);
          }
          piVar14 = &(this->EmitterInstances).ArrayNum;
          *piVar14 = *piVar14 - uVar16;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&pTVar1->AllocatorInstance,(this->EmitterInstances).ArrayNum,
                     &(this->EmitterInstances).ArrayMax);
        }
      }
    }
    local_94 = this->LODLevel;
    bVar9 = 0 < local_94;
    uVar16 = 0;
    local_90 = lVar15;
    if (0 < (int)uVar17) {
      lVar15 = 0;
      do {
        pUVar3 = this->Template;
        uVar13 = ~uVar16 >> 0x1f;
        uVar17 = 0;
        if ((int)uVar16 < (pUVar3->Emitters).ArrayNum) {
          uVar17 = uVar13;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        this_00 = *(UParticleEmitter **)((pUVar3->Emitters).AllocatorInstance.Data + lVar15 * 8);
        if (this_00 != (UParticleEmitter *)0x0) {
          if (iVar2 == 0) {
            this_01 = (FParticleEmitterInstance *)0x0;
          }
          else {
            uVar17 = 0;
            if ((int)uVar16 < (this->EmitterInstances).ArrayNum) {
              uVar17 = uVar13;
            }
            if ((uVar17 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            this_01 = *(FParticleEmitterInstance **)((pTVar1->AllocatorInstance).Data + lVar15 * 8);
          }
          if (((this_00->DetailModeBitmask & 2) == 0) ||
             (bVar8 = UParticleEmitter::HasAnyEnabledLODs(this_00), !bVar8)) {
            if (this_01 != (FParticleEmitterInstance *)0x0) {
              FParticleEmitterInstance::PreDestructorCall(this_01);
              (**(code **)this_01->_padding_)(this_01,1);
              uVar17 = 0;
              if ((int)uVar16 < (this->EmitterInstances).ArrayNum) {
                uVar17 = uVar13;
              }
              if ((uVar17 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              *(undefined8 *)((pTVar1->AllocatorInstance).Data + lVar15 * 8) = 0;
            }
          }
          else {
            if (this_01 == (FParticleEmitterInstance *)0x0) {
              this_01 = (FParticleEmitterInstance *)
                        (**(code **)(this_00->_padding_ + 0x2b0))(this_00,&this->field_0x18);
              uVar17 = 0;
              if ((int)uVar16 < (this->EmitterInstances).ArrayNum) {
                uVar17 = uVar13;
              }
              if ((uVar17 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              *(FParticleEmitterInstance **)((pTVar1->AllocatorInstance).Data + lVar15 * 8) =
                   this_01;
              if (this_01 == (FParticleEmitterInstance *)0x0) goto LAB_145716db5;
            }
            else {
              (**(code **)(this_01->_padding_ + 0xf8))(this_01,0);
              (**(code **)(this_01->_padding_ + 0x100))(this_01,0);
            }
            this_01->bEnabled = '\x01';
            (**(code **)(this_01->_padding_ + 8))(this_01,this_00);
            (**(code **)(this_01->_padding_ + 0x10))(this_01);
            if (((this_00->LODLevels).ArrayNum < 1) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            (**(code **)(this_01->_padding_ + 0x168))
                      (this_01,&param_1->MaterialRelevance,
                       *(undefined8 *)(this_00->LODLevels).AllocatorInstance.Data,
                       GMaxRHIShaderPlatform);
            iVar10 = (this_00->LODLevels).ArrayNum;
            if (local_94 < iVar10) {
              iVar10 = local_94;
            }
            bVar9 = (bool)(bVar9 | iVar2 != 0);
            local_94 = iVar10;
          }
        }
LAB_145716db5:
        uVar16 = uVar16 + 1;
        lVar15 = lVar15 + 1;
      } while (lVar15 < local_90);
    }
    iVar2 = local_94;
    piVar14 = &this->LODLevel;
    if (bVar9) {
      if (local_94 != *piVar14) {
        if ((*piVar14 <= local_94) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("PreferredLODLevel < LODLevel",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\StateStream\\ParticleSystemStateStreamImpl.cpp"
                               ,0x80,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *piVar14 = iVar2;
      }
      uVar17 = 0;
      if (0 < (this->EmitterInstances).ArrayNum) {
        lVar15 = 0;
        do {
          uVar16 = 0;
          if ((int)uVar17 < (this->EmitterInstances).ArrayNum) {
            uVar16 = ~uVar17 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar4 = *(longlong *)((this->EmitterInstances).AllocatorInstance.Data + lVar15);
          if (lVar4 != 0) {
            iVar2 = *piVar14;
            *(int *)(lVar4 + 0x20) = iVar2;
            iVar10 = *(int *)(*(longlong *)(lVar4 + 8) + 0x48);
            if (iVar10 <= iVar2) {
              local_98[0] = 0;
              *(int *)(lVar4 + 0x20) = iVar10 + -1;
              `FParticleSystemObjectCascade::InitializeSystem'::__l57::<lambda_1>::operator()
                        (local_98);
            }
            uVar16 = *(uint *)(lVar4 + 0x20);
            lVar5 = *(longlong *)(lVar4 + 8);
            uVar13 = 0;
            if ((int)uVar16 < *(int *)(lVar5 + 0x48)) {
              uVar13 = ~uVar16 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(undefined8 *)(lVar4 + 0x18) =
                 *(undefined8 *)(*(longlong *)(lVar5 + 0x40) + (longlong)(int)uVar16 * 8);
          }
          uVar17 = uVar17 + 1;
          lVar15 = lVar15 + 8;
        } while ((int)uVar17 < (this->EmitterInstances).ArrayNum);
      }
    }
    pIVar11 = FTransformObject::GetInfo((this->TransformObject).Reference,&local_58);
    pTVar6 = pIVar11->WorldTransform;
    local_78._s_0.X = (pTVar6->Translation).XY.m128d_f64[0];
    local_78._s_0.Y = (pTVar6->Translation).XY.m128d_f64[1];
    local_78._s_0.Z = (pTVar6->Translation).ZW.m128d_f64[0];
    pTVar12 = TLargeWorldRenderScalar<double>::GetTileFor
                        (&local_88,(TVector<double> *)&local_78._s_0);
    *(undefined8 *)&(this->LWCTile).field0_0x0 = *(undefined8 *)&pTVar12->field0_0x0;
    (this->LWCTile).field0_0x0._s_0.Z = (pTVar12->field0_0x0)._s_0.Z;
  }
  return;
}

// IsActive @ 1457183f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FParticleSystemObjectCascade::IsActive(FParticleSystemObjectCascade *this)

{
  return false;
}

// IsGameWorld @ 1457184c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FParticleSystemObjectCascade::IsGameWorld(FParticleSystemObjectCascade *this)

{
  return true;
}

// IsValidLowLevel @ 1457188d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FParticleSystemObjectCascade::IsValidLowLevel(FParticleSystemObjectCascade *this)

{
  return false;
}

// OnTransformObjectDirty @ 145718b30

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
FParticleSystemObjectCascade::OnTransformObjectDirty(FParticleSystemObjectCascade *this)

{
  Info local_28;
  
  FTransformObject::GetInfo((this->TransformObject).Reference,&local_28);
  return;
}

// ReportEventBurst @ 14571fde0

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
FParticleSystemObjectCascade::ReportEventBurst
          (FParticleSystemObjectCascade *this,FName param_1,float param_2,int param_3,
          TVector<double> *param_4,
          TArray<UParticleModuleEventSendToGame_*,TSizedDefaultAllocator<32>_> *param_5)

{
  return;
}

// ReportEventCollision @ 14571fdf0

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
FParticleSystemObjectCascade::ReportEventCollision
          (FParticleSystemObjectCascade *this,FName param_1,float param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,
          TArray<UParticleModuleEventSendToGame_*,TSizedDefaultAllocator<32>_> *param_6,
          float param_7,TVector<double> *param_8,float param_9,int param_10,FName param_11,
          UPhysicalMaterial *param_12)

{
  return;
}

// ReportEventDeath @ 14571fe00

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
FParticleSystemObjectCascade::ReportEventDeath
          (FParticleSystemObjectCascade *this,FName param_1,float param_2,TVector<double> *param_3,
          TVector<double> *param_4,
          TArray<UParticleModuleEventSendToGame_*,TSizedDefaultAllocator<32>_> *param_5,
          float param_6)

{
  return;
}

// ReportEventSpawn @ 14571fe10

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
FParticleSystemObjectCascade::ReportEventSpawn
          (FParticleSystemObjectCascade *this,FName param_1,float param_2,TVector<double> *param_3,
          TVector<double> *param_4,
          TArray<UParticleModuleEventSendToGame_*,TSizedDefaultAllocator<32>_> *param_5)

{
  return;
}

// SetComponentToWorld @ 145721880

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
FParticleSystemObjectCascade::SetComponentToWorld
          (FParticleSystemObjectCascade *this,TTransform<double> *param_1)

{
  return;
}

// Update @ 1457268e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FParticleSystemObjectCascade::Update(FParticleSystemObjectCascade *this)

{
  FParticleEmitterInstance *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  uint uVar5;
  UParticleLODLevel *pUVar6;
  FParticleDynamicData *pFVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar3 = __real_3d088889;
  if (0 < (this->EmitterInstances).ArrayNum) {
    lVar9 = 0;
    uVar8 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->EmitterInstances).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
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
      uVar5 = uVar8 + 1;
      pFVar1 = *(FParticleEmitterInstance **)
                ((this->EmitterInstances).AllocatorInstance.Data + lVar9);
      if ((((int)uVar5 < (this->EmitterInstances).ArrayNum) && ((int)uVar5 < 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((pFVar1 != (FParticleEmitterInstance *)0x0) &&
         (pFVar1->SpriteTemplate != (UParticleEmitter *)0x0)) {
        if (((pFVar1->SpriteTemplate->LODLevels).ArrayNum < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Instance->SpriteTemplate->LODLevels.Num() > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\StateStream\\ParticleSystemStateStreamImpl.cpp"
                               ,0xae,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pUVar6 = UParticleEmitter::GetCurrentLODLevel(pFVar1->SpriteTemplate,pFVar1);
        if ((pUVar6 != (UParticleLODLevel *)0x0) && (pUVar6->bEnabled != 0)) {
          (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1,uVar3,0);
          (**(code **)(pFVar1->_padding_ + 0x218))(pFVar1,uVar8);
        }
      }
      lVar9 = lVar9 + 8;
      uVar8 = uVar5;
    } while ((int)uVar5 < (this->EmitterInstances).ArrayNum);
  }
  pFVar7 = CreateDynamicData(this,((this->PrimitiveSceneData).SceneProxy)->Scene->FeatureLevel);
  FParticleSystemSceneProxy::UpdateData
            ((FParticleSystemSceneProxy *)(this->PrimitiveSceneData).SceneProxy,pFVar7);
  this->bJustRegistered = false;
  return;
}

// operator() @ 1504d23d0

bool __thiscall
`FParticleSystemObjectCascade::InitializeSystem'::__l57::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8202155408027025264>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8202155408027025264>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

