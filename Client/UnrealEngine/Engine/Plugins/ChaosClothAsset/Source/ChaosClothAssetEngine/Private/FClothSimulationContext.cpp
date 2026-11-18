// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 2

// FClothSimulationContext @ 14dc33fd0

FClothSimulationContext * __thiscall
UE::Chaos::ClothAsset::FClothSimulationContext::FClothSimulationContext
          (FClothSimulationContext *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->ComponentTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->ComponentTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->ComponentTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->ComponentTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->ComponentTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->ComponentTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->ComponentTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->ComponentTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->ComponentTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->ComponentTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->ComponentTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->BoneTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneTransforms).ArrayNum = 0;
  (this->BoneTransforms).ArrayMax = 0;
  (this->RefToLocalMatrices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RefToLocalMatrices).ArrayNum = 0;
  (this->RefToLocalMatrices).ArrayMax = 0;
  this->bTeleport = false;
  this->bReset = false;
  this->bResetRestLengthsWithMorphTarget = false;
  (this->ResetRestLengthsMorphTargetName).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ResetRestLengthsMorphTargetName).Data.ArrayNum = 0;
  (this->ResetRestLengthsMorphTargetName).Data.ArrayMax = 0;
  (this->CacheData).CachedPositions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CacheData).CachedPositions.ArrayNum = 0;
  (this->CacheData).CachedPositions.ArrayMax = 0;
  (this->CacheData).CachedVelocities.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CacheData).CachedVelocities.ArrayNum = 0;
  (this->CacheData).CachedVelocities.ArrayMax = 0;
  (this->CacheData).CacheIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CacheData).CacheIndices.ArrayNum = 0;
  (this->CacheData).CacheIndices.ArrayMax = 0;
  *(undefined8 *)&(this->CacheData).CachedReferenceSpaceTransforms = 0;
  *(undefined8 *)&(this->CacheData).CachedReferenceSpaceTransforms.field_0x8 = 0;
  *(undefined8 *)&(this->CacheData).CachedReferenceSpaceTransforms.field_0x20 = 0;
  *(undefined4 *)&(this->CacheData).CachedReferenceSpaceTransforms.field_0x28 = 0;
  *(undefined4 *)&(this->CacheData).CachedReferenceSpaceTransforms.field_0x2c = 0x80;
  *(undefined4 *)&(this->CacheData).CachedReferenceSpaceTransforms.field_0x34 = 0;
  *(undefined4 *)&(this->CacheData).CachedReferenceSpaceTransforms.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CacheData).CachedReferenceSpaceTransforms.field_0x40 = 0;
  *(undefined4 *)&(this->CacheData).CachedReferenceSpaceTransforms.field_0x48 = 0;
  (this->RequiredExtraBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequiredExtraBones).ArrayNum = 0;
  (this->RequiredExtraBones).ArrayMax = 0;
  return this;
}

// Fill @ 14dc46c10

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

void __thiscall
UE::Chaos::ClothAsset::FClothSimulationContext::Fill
          (FClothSimulationContext *this,IClothComponentAdapter *param_1,float param_2,float param_3
          ,bool param_4,FClothingSimulationCacheData *param_5)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  TMap<int,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>_>
  *pTVar5;
  int *piVar6;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar7;
  FClothingSimulationCacheData *pFVar8;
  undefined4 *puVar9;
  double dVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  longlong *plVar13;
  FScriptContainerElement *pFVar14;
  code *pcVar15;
  undefined1 auVar16 [16];
  double dVar17;
  FClothingSimulationCacheData *pFVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  FReferenceSkeleton *this_00;
  longlong *plVar27;
  char cVar28;
  bool bVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  longlong lVar34;
  FString *pFVar35;
  UObject *pUVar36;
  USkinnedMeshComponent *this_01;
  UActorComponent *this_02;
  UWorld *this_03;
  IConsoleManager *pIVar37;
  ulonglong uVar38;
  longlong lVar39;
  ulonglong uVar40;
  uint uVar41;
  TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *pTVar42;
  uint uVar43;
  UObject *pUVar44;
  undefined8 *puVar45;
  int iVar46;
  bool bVar47;
  float fVar48;
  float fVar49;
  double dVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined1 auStackY_1c8 [32];
  undefined1 local_197 [3];
  uint local_194;
  TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *local_190;
  FReferenceSkeleton *local_188;
  UObject *local_180;
  int *local_178;
  UObject *local_170;
  float local_168 [2];
  IClothComponentAdapter *local_160;
  UObject *local_158;
  int local_150;
  int *local_140;
  FClothingSimulationCacheData *local_138;
  longlong *local_130;
  TReferenceControllerBase<1> *local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_138 = param_5;
  bVar47 = -1 < CpuChannel->Enabled;
  local_160 = param_1;
  if (bVar47) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId18,"FClothSimulationContext_Fill",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAssetEngine\\Private\\ChaosClothAsset\\ClothSimulationContext.cpp"
               ,0x12);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId18);
  }
  fVar49 = param_2;
  if (param_3 <= param_2) {
    fVar49 = param_3;
  }
  this->DeltaTime = fVar49;
  lVar34 = (**(code **)*param_1)(param_1);
  this->LodIndex = *(int *)(lVar34 + 0x7b4);
  if ((!param_4) && (cVar28 = (**(code **)((longlong)*param_1 + 0x68))(param_1), cVar28 == '\0'))
  goto LAB_14dc479b9;
  (**(code **)((longlong)*param_1 + 0x10))(param_1,&local_158);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar37 = IConsoleManager::Get();
    CVarMaxDeltaTimeTeleportMultiplier =
         (IConsoleVariable *)(**(code **)((longlong)*pIVar37 + 0xc0))(pIVar37);
    _Init_thread_footer(&::_TSS0);
  }
  fVar48 = __real_3fc00000;
  if (CVarMaxDeltaTimeTeleportMultiplier != (IConsoleVariable *)0x0) {
    fVar48 = (float)(**(code **)(*(longlong *)CVarMaxDeltaTimeTeleportMultiplier + 0xd0))();
  }
  cVar28 = (**(code **)((longlong)*param_1 + 0x28))(param_1);
  this->bTeleport = fVar48 * param_3 < param_2 || cVar28 != '\0';
  this->bReset = cVar28 == '\x02';
  bVar29 = (bool)(**(code **)((longlong)*param_1 + 0x40))(param_1);
  this->bResetRestLengthsWithMorphTarget = bVar29;
  if (bVar29 != false) {
    pFVar35 = (FString *)(**(code **)((longlong)*param_1 + 0x48))(param_1);
    ::FString::operator=(&this->ResetRestLengthsMorphTargetName,pFVar35);
  }
  fVar48 = __real_3f800000;
  if (this->bTeleport == false) {
    if (this->bReset == false) {
      if (param_2 <= 0.0) goto LAB_14dc46df8;
      fVar48 = fVar49 / param_2;
    }
  }
  else if (this->bReset == false) {
LAB_14dc46df8:
    fVar48 = 0.0;
  }
  this->VelocityScale = fVar48;
  lVar34 = (**(code **)*param_1)(param_1);
  dVar10 = *(double *)(lVar34 + 0x1f8);
  (this->ComponentTransform).Rotation.XY.m128d_f64[0] = *(double *)(lVar34 + 0x1f0);
  (this->ComponentTransform).Rotation.XY.m128d_f64[1] = dVar10;
  dVar10 = *(double *)(lVar34 + 0x208);
  (this->ComponentTransform).Rotation.ZW.m128d_f64[0] = *(double *)(lVar34 + 0x200);
  (this->ComponentTransform).Rotation.ZW.m128d_f64[1] = dVar10;
  dVar10 = *(double *)(lVar34 + 0x218);
  (this->ComponentTransform).Translation.XY.m128d_f64[0] = *(double *)(lVar34 + 0x210);
  (this->ComponentTransform).Translation.XY.m128d_f64[1] = dVar10;
  dVar10 = *(double *)(lVar34 + 0x228);
  (this->ComponentTransform).Translation.ZW.m128d_f64[0] = *(double *)(lVar34 + 0x220);
  (this->ComponentTransform).Translation.ZW.m128d_f64[1] = dVar10;
  uVar51 = *(undefined4 *)(lVar34 + 0x234);
  uVar52 = *(undefined4 *)(lVar34 + 0x238);
  uVar53 = *(undefined4 *)(lVar34 + 0x23c);
  *(undefined4 *)(this->ComponentTransform).Scale3D.XY.m128d_f64 = *(undefined4 *)(lVar34 + 0x230);
  *(undefined4 *)((longlong)(this->ComponentTransform).Scale3D.XY.m128d_f64 + 4) = uVar51;
  *(undefined4 *)((this->ComponentTransform).Scale3D.XY.m128d_f64 + 1) = uVar52;
  *(undefined4 *)((longlong)(this->ComponentTransform).Scale3D.XY.m128d_f64 + 0xc) = uVar53;
  uVar51 = *(undefined4 *)(lVar34 + 0x244);
  uVar52 = *(undefined4 *)(lVar34 + 0x248);
  uVar53 = *(undefined4 *)(lVar34 + 0x24c);
  *(undefined4 *)(this->ComponentTransform).Scale3D.ZW.m128d_f64 = *(undefined4 *)(lVar34 + 0x240);
  *(undefined4 *)((longlong)(this->ComponentTransform).Scale3D.ZW.m128d_f64 + 4) = uVar51;
  *(undefined4 *)((this->ComponentTransform).Scale3D.ZW.m128d_f64 + 1) = uVar52;
  *(undefined4 *)((longlong)(this->ComponentTransform).Scale3D.ZW.m128d_f64 + 0xc) = uVar53;
  fVar49 = (float)(**(code **)((longlong)*param_1 + 0x50))(param_1);
  this->SolverGeometryScale = fVar49;
  local_188 = (FReferenceSkeleton *)(**(code **)((longlong)*param_1 + 0x20))(param_1);
  if (local_188 == (FReferenceSkeleton *)0x0) {
    uVar40 = 0;
  }
  else {
    uVar40 = (ulonglong)(uint)(local_188->FinalRefBoneInfo).ArrayNum;
  }
  uVar41 = (uint)uVar40;
  local_194 = uVar41;
  lVar34 = (**(code **)*param_1)(param_1);
  pUVar36 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar34 + 0x5b0));
  local_170 = pUVar36;
  if (pUVar36 == (UObject *)0x0) {
    if (!param_4) {
      lVar34 = (**(code **)*param_1)(param_1);
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
                (&this->BoneTransforms,
                 (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)*(int *)(lVar34 + 0x660) * 0x10 + lVar34 + 0x618));
      goto LAB_14dc475b5;
    }
    if ((int)uVar41 < 0) goto LAB_14dc47a10;
    (this->BoneTransforms).ArrayNum = 0;
    if ((this->BoneTransforms).ArrayMax < (int)uVar41) goto LAB_14dc46eea;
LAB_14dc46f04:
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::AddDefaulted
              (&this->BoneTransforms,uVar41);
  }
  else {
    lVar34 = (**(code **)*param_1)(param_1);
    pUVar44 = (UObject *)(lVar34 + 0x688);
    uVar30 = *(uint *)(lVar34 + 0x690);
    uVar38 = (ulonglong)uVar30;
    local_180 = pUVar44;
    if (uVar30 == 0) {
      if ((int)uVar41 < 0) {
LAB_14dc47a10:
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum(uVar40);
      }
      (this->BoneTransforms).ArrayNum = 0;
      if ((this->BoneTransforms).ArrayMax != uVar41) {
LAB_14dc46eea:
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,uVar41,&(this->BoneTransforms).AllocatorInstance,0,
                   &(this->BoneTransforms).ArrayMax);
      }
      goto LAB_14dc46f04;
    }
    local_194 = uVar30;
    if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(uVar38);
    }
    piVar6 = &(this->BoneTransforms).ArrayMax;
    (this->BoneTransforms).ArrayNum = 0;
    if (*piVar6 < (int)uVar30) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,uVar30,&(this->BoneTransforms).AllocatorInstance,0,piVar6);
    }
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::AddDefaulted
              (&this->BoneTransforms,uVar30);
    this_00 = local_188;
    uVar40 = uVar38;
    if (param_4) {
LAB_14dc475b5:
      local_190 = &this->RefToLocalMatrices;
      if ((int)uVar40 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum(uVar40);
      }
    }
    else {
      uVar41 = 0;
      local_178 = (int *)((longlong)*(int *)&pUVar36[0x28].field_0x20 << 4);
      if ((int)uVar30 < 1) goto LAB_14dc475b5;
      lVar34 = 0;
      local_190 = (TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *)0x0;
      do {
        pTVar42 = local_190;
        if (((int)uVar41 < 0) || (*(int *)&pUVar44->field_0x8 <= (int)uVar41)) {
LAB_14dc470f5:
          if (this_00 != (FReferenceSkeleton *)0x0) {
            uVar30 = FReferenceSkeleton::GetParentIndexInternal
                               (this_00,uVar41,&this_00->FinalRefBoneInfo);
            if ((((int)uVar30 < 0) || ((this->BoneTransforms).ArrayNum <= (int)uVar30)) ||
               ((int)uVar41 <= (int)uVar30)) {
              uVar43 = ~uVar41 >> 0x1f;
              uVar30 = 0;
              if ((int)uVar41 < (this_00->FinalRefBonePose).ArrayNum) {
                uVar30 = uVar43;
              }
              if ((uVar30 == 0) &&
                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar29)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              pFVar12 = (this_00->FinalRefBonePose).AllocatorInstance.Data;
              pFVar14 = pFVar12 + lVar34;
              uVar51 = *(undefined4 *)pFVar14;
              uVar52 = *(undefined4 *)(pFVar14 + 4);
              uVar53 = *(undefined4 *)(pFVar14 + 8);
              uVar54 = *(undefined4 *)(pFVar14 + 0xc);
              pFVar14 = pFVar12 + lVar34 + 0x10;
              uVar55 = *(undefined4 *)pFVar14;
              uVar56 = *(undefined4 *)(pFVar14 + 4);
              uVar57 = *(undefined4 *)(pFVar14 + 8);
              uVar58 = *(undefined4 *)(pFVar14 + 0xc);
              pFVar14 = pFVar12 + lVar34 + 0x20;
              uVar59 = *(undefined4 *)pFVar14;
              uVar60 = *(undefined4 *)(pFVar14 + 4);
              uVar61 = *(undefined4 *)(pFVar14 + 8);
              uVar62 = *(undefined4 *)(pFVar14 + 0xc);
              pFVar14 = pFVar12 + lVar34 + 0x30;
              uVar63 = *(undefined4 *)pFVar14;
              uVar64 = *(undefined4 *)(pFVar14 + 4);
              uVar65 = *(undefined4 *)(pFVar14 + 8);
              uVar66 = *(undefined4 *)(pFVar14 + 0xc);
              pFVar14 = pFVar12 + lVar34 + 0x40;
              uVar67 = *(undefined4 *)pFVar14;
              uVar68 = *(undefined4 *)(pFVar14 + 4);
              uVar69 = *(undefined4 *)(pFVar14 + 8);
              uVar70 = *(undefined4 *)(pFVar14 + 0xc);
              pFVar12 = pFVar12 + lVar34 + 0x50;
              uVar71 = *(undefined4 *)pFVar12;
              uVar72 = *(undefined4 *)(pFVar12 + 4);
              uVar73 = *(undefined4 *)(pFVar12 + 8);
              uVar74 = *(undefined4 *)(pFVar12 + 0xc);
            }
            else {
              uVar43 = 0;
              if ((int)uVar30 < (this->BoneTransforms).ArrayNum) {
                uVar43 = ~uVar30 >> 0x1f;
              }
              if ((uVar43 == 0) &&
                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar29)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              pFVar14 = (this->BoneTransforms).AllocatorInstance.Data;
              uVar43 = ~uVar41 >> 0x1f;
              uVar31 = 0;
              if ((int)uVar41 < (this_00->FinalRefBonePose).ArrayNum) {
                uVar31 = uVar43;
              }
              if ((uVar31 == 0) &&
                 (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar29)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              local_108.Rotation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
              local_108.Rotation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_108.Rotation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
              local_108.Rotation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
              local_108.Rotation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_108.Rotation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
              local_108.Translation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
              local_108.Translation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_108.Translation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
              local_108.Translation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
              local_108.Translation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_108.Translation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
              local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
              local_108.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
              local_108.Scale3D.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
              local_108.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
              UE::Math::TTransform<double>::Multiply
                        (&local_108,(TTransform<double> *)(pFVar14 + (longlong)(int)uVar30 * 0x60),
                         (TTransform<double> *)
                         ((this_00->FinalRefBonePose).AllocatorInstance.Data +
                         (longlong)(int)uVar41 * 0x60));
              uVar51 = local_108.Rotation.XY.m128d_f64[0]._0_4_;
              uVar52 = local_108.Rotation.XY.m128d_f64[0]._4_4_;
              uVar53 = local_108.Rotation.XY.m128d_f64[1]._0_4_;
              uVar54 = local_108.Rotation.XY.m128d_f64[1]._4_4_;
              uVar55 = local_108.Rotation.ZW.m128d_f64[0]._0_4_;
              uVar56 = local_108.Rotation.ZW.m128d_f64[0]._4_4_;
              uVar57 = local_108.Rotation.ZW.m128d_f64[1]._0_4_;
              uVar58 = local_108.Rotation.ZW.m128d_f64[1]._4_4_;
              uVar59 = local_108.Translation.XY.m128d_f64[0]._0_4_;
              uVar60 = local_108.Translation.XY.m128d_f64[0]._4_4_;
              uVar61 = local_108.Translation.XY.m128d_f64[1]._0_4_;
              uVar62 = local_108.Translation.XY.m128d_f64[1]._4_4_;
              uVar63 = local_108.Translation.ZW.m128d_f64[0]._0_4_;
              uVar64 = local_108.Translation.ZW.m128d_f64[0]._4_4_;
              uVar65 = local_108.Translation.ZW.m128d_f64[1]._0_4_;
              uVar66 = local_108.Translation.ZW.m128d_f64[1]._4_4_;
              uVar67 = local_108.Scale3D.XY.m128d_f64[0]._0_4_;
              uVar68 = local_108.Scale3D.XY.m128d_f64[0]._4_4_;
              uVar69 = local_108.Scale3D.XY.m128d_f64[1]._0_4_;
              uVar70 = local_108.Scale3D.XY.m128d_f64[1]._4_4_;
              uVar71 = local_108.Scale3D.ZW.m128d_f64[0]._0_4_;
              uVar72 = local_108.Scale3D.ZW.m128d_f64[0]._4_4_;
              uVar73 = local_108.Scale3D.ZW.m128d_f64[1]._0_4_;
              uVar74 = local_108.Scale3D.ZW.m128d_f64[1]._4_4_;
            }
            uVar30 = uVar43 & (int)uVar41 < (this->BoneTransforms).ArrayNum;
            goto joined_r0x00014dc472d3;
          }
        }
        else {
          local_188 = (FReferenceSkeleton *)CONCAT44(local_188._4_4_,~uVar41 >> 0x1f);
          if (((int)uVar41 < 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          iVar32 = *(int *)(*(longlong *)local_180 + (longlong)pTVar42 * 4);
          if ((iVar32 == -1) ||
             (*(int *)((longlong)&local_170->field_0x0 + (longlong)(local_178 + 0x188)) <= iVar32))
          goto LAB_14dc470f5;
          if ((iVar32 < 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          lVar39 = (longlong)iVar32 * 0x60;
          lVar11 = *(longlong *)((longlong)&local_170->field_0x0 + (longlong)(local_178 + 0x186));
          puVar9 = (undefined4 *)(lVar39 + lVar11);
          uVar51 = *puVar9;
          uVar52 = puVar9[1];
          uVar53 = puVar9[2];
          uVar54 = puVar9[3];
          puVar9 = (undefined4 *)(lVar39 + 0x10 + lVar11);
          uVar55 = *puVar9;
          uVar56 = puVar9[1];
          uVar57 = puVar9[2];
          uVar58 = puVar9[3];
          puVar9 = (undefined4 *)(lVar39 + 0x20 + lVar11);
          uVar59 = *puVar9;
          uVar60 = puVar9[1];
          uVar61 = puVar9[2];
          uVar62 = puVar9[3];
          puVar9 = (undefined4 *)(lVar39 + 0x30 + lVar11);
          uVar63 = *puVar9;
          uVar64 = puVar9[1];
          uVar65 = puVar9[2];
          uVar66 = puVar9[3];
          puVar9 = (undefined4 *)(lVar39 + 0x40 + lVar11);
          uVar67 = *puVar9;
          uVar68 = puVar9[1];
          uVar69 = puVar9[2];
          uVar70 = puVar9[3];
          puVar9 = (undefined4 *)(lVar39 + 0x50 + lVar11);
          uVar71 = *puVar9;
          uVar72 = puVar9[1];
          uVar73 = puVar9[2];
          uVar74 = puVar9[3];
          uVar30 = 0;
          if ((int)uVar41 < (this->BoneTransforms).ArrayNum) {
            uVar30 = (uint)local_188;
          }
joined_r0x00014dc472d3:
          if ((uVar30 == 0) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar29)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          pFVar12 = (this->BoneTransforms).AllocatorInstance.Data;
          pFVar14 = pFVar12 + lVar34;
          *(undefined4 *)pFVar14 = uVar51;
          *(undefined4 *)(pFVar14 + 4) = uVar52;
          *(undefined4 *)(pFVar14 + 8) = uVar53;
          *(undefined4 *)(pFVar14 + 0xc) = uVar54;
          pFVar14 = pFVar12 + lVar34 + 0x10;
          *(undefined4 *)pFVar14 = uVar55;
          *(undefined4 *)(pFVar14 + 4) = uVar56;
          *(undefined4 *)(pFVar14 + 8) = uVar57;
          *(undefined4 *)(pFVar14 + 0xc) = uVar58;
          pFVar14 = pFVar12 + lVar34 + 0x20;
          *(undefined4 *)pFVar14 = uVar59;
          *(undefined4 *)(pFVar14 + 4) = uVar60;
          *(undefined4 *)(pFVar14 + 8) = uVar61;
          *(undefined4 *)(pFVar14 + 0xc) = uVar62;
          pFVar14 = pFVar12 + lVar34 + 0x30;
          *(undefined4 *)pFVar14 = uVar63;
          *(undefined4 *)(pFVar14 + 4) = uVar64;
          *(undefined4 *)(pFVar14 + 8) = uVar65;
          *(undefined4 *)(pFVar14 + 0xc) = uVar66;
          pFVar14 = pFVar12 + lVar34 + 0x40;
          *(undefined4 *)pFVar14 = uVar67;
          *(undefined4 *)(pFVar14 + 4) = uVar68;
          *(undefined4 *)(pFVar14 + 8) = uVar69;
          *(undefined4 *)(pFVar14 + 0xc) = uVar70;
          pFVar12 = pFVar12 + lVar34 + 0x50;
          *(undefined4 *)pFVar12 = uVar71;
          *(undefined4 *)(pFVar12 + 4) = uVar72;
          *(undefined4 *)(pFVar12 + 8) = uVar73;
          *(undefined4 *)(pFVar12 + 0xc) = uVar74;
        }
        local_190 = (TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *)
                    ((longlong)local_190 + 1);
        uVar41 = uVar41 + 1;
        lVar34 = lVar34 + 0x60;
        pUVar44 = local_180;
      } while ((longlong)local_190 < (longlong)(int)local_194);
      uVar40 = (ulonglong)local_194;
      param_1 = local_160;
    }
  }
  pTVar42 = &this->RefToLocalMatrices;
  local_178 = &(this->RefToLocalMatrices).ArrayMax;
  local_140 = &(this->RefToLocalMatrices).ArrayNum;
  *local_140 = 0;
  uVar41 = (uint)uVar40;
  local_190 = pTVar42;
  if ((this->RefToLocalMatrices).ArrayMax < (int)uVar41) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,uVar41,&pTVar42->AllocatorInstance,0,local_178);
  }
  pTVar7 = &this->RequiredExtraBones;
  (this->RequiredExtraBones).ArrayNum = 0;
  if ((this->RequiredExtraBones).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,&pTVar7->AllocatorInstance,0,&(this->RequiredExtraBones).ArrayMax);
  }
  bVar29 = true;
  if (!param_4) {
    uVar40 = (ulonglong)local_150;
    local_188 = (FReferenceSkeleton *)CONCAT44(local_188._4_4_,local_150);
    local_170 = (UObject *)((longlong)&local_158->field_0x0 + uVar40 * 8);
    pUVar36 = local_158;
    bVar29 = true;
    while( true ) {
      pUVar44 = local_170;
      local_180 = pUVar36;
      if (local_150 != (int)uVar40) {
        local_197[0] = 0;
        `TCheckedPointerIterator<UChaosClothAssetBase_const_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_197);
      }
      pTVar42 = local_190;
      param_1 = local_160;
      uVar41 = local_194;
      if (pUVar36 == pUVar44) break;
      plVar13 = *(longlong **)pUVar36;
      if (plVar13 != (longlong *)0x0) {
        iVar46 = 0;
        iVar32 = (**(code **)(*plVar13 + 0x4c8))(plVar13);
        if (0 < iVar32) {
          do {
            (**(code **)(*plVar13 + 0x4d0))(plVar13,&local_130,iVar46);
            plVar27 = local_130;
            if (local_130 != (longlong *)0x0) {
              iVar32 = this->LodIndex;
              if ((-1 < iVar32) && (iVar32 < (int)local_130[1])) {
                if ((iVar32 < 0) &&
                   (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar29)) {
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                puVar45 = (undefined8 *)(*plVar27 + 0x40 + (longlong)iVar32 * 0x1f0);
                if ((pTVar7 == (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)puVar45) &&
                   (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(void*)this != (void*)&Source",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x96e,L""), bVar29)) {
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                iVar32 = *(int *)(puVar45 + 1);
                if (iVar32 != 0) {
                  iVar33 = Core::Private::
                           ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (2,2,iVar32,&pTVar7->AllocatorInstance,
                                      &(this->RequiredExtraBones).ArrayNum,
                                      &(this->RequiredExtraBones).ArrayMax);
                  memcpy((pTVar7->AllocatorInstance).Data + (longlong)iVar33 * 2,(void *)*puVar45,
                         (longlong)iVar32 * 2);
                }
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_128);
            iVar46 = iVar46 + 1;
            iVar32 = (**(code **)(*plVar13 + 0x4c8))(plVar13);
            pUVar36 = local_180;
          } while (iVar46 < iVar32);
        }
        bVar29 = false;
      }
      uVar40 = (ulonglong)local_188 & 0xffffffff;
      pUVar36 = (UObject *)&pUVar36->field_0x8;
    }
  }
  if (bVar29) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,uVar41,&pTVar42->AllocatorInstance,&pTVar42->ArrayNum,local_178);
    piVar6 = local_140;
    pTVar42 = local_190;
    uVar38 = 0;
    lVar34 = (longlong)(int)uVar41;
    uVar40 = uVar38;
    if (0 < lVar34) {
      do {
        uVar26 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
        uVar25 = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
        uVar24 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
        uVar23 = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
        uVar22 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
        uVar21 = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
        uVar20 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
        uVar19 = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
        uVar30 = (uint)uVar38;
        uVar41 = 0;
        if ((int)uVar30 < *piVar6) {
          uVar41 = ~uVar30 >> 0x1f;
        }
        if ((uVar41 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        pFVar14 = (pTVar42->AllocatorInstance).Data;
        uVar38 = (ulonglong)(uVar30 + 1);
        *(undefined8 *)(pFVar14 + uVar40) = uVar19;
        *(undefined8 *)(pFVar14 + uVar40 + 8) = uVar20;
        *(undefined8 *)(pFVar14 + uVar40 + 0x10) = uVar21;
        *(undefined8 *)(pFVar14 + uVar40 + 0x10 + 8) = uVar22;
        *(undefined8 *)(pFVar14 + uVar40 + 0x20) = uVar23;
        *(undefined8 *)(pFVar14 + uVar40 + 0x20 + 8) = uVar24;
        *(undefined8 *)(pFVar14 + uVar40 + 0x30) = uVar25;
        *(undefined8 *)(pFVar14 + uVar40 + 0x30 + 8) = uVar26;
        lVar34 = lVar34 + -1;
        uVar40 = uVar40 + 0x40;
      } while (lVar34 != 0);
    }
  }
  else {
    this_01 = (USkinnedMeshComponent *)(**(code **)*param_1)(param_1);
    USkinnedMeshComponent::GetCurrentRefToLocalMatrices(this_01,pTVar42,this->LodIndex,pTVar7);
  }
  this_02 = (UActorComponent *)(**(code **)*param_1)(param_1);
  this_03 = this_02->WorldPrivate;
  if ((this_03 == (UWorld *)0x0) &&
     (this_03 = UActorComponent::GetWorld_Uncached(this_02), this_03 == (UWorld *)0x0)) {
    (this->WorldGravity).field0_0x0._s_0.X = 0.0;
    (this->WorldGravity).field0_0x0._s_0.Y = 0.0;
    (this->WorldGravity).field0_0x0._s_0.Z = -981.0;
LAB_14dc47824:
    uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (this->WindVelocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
    ;
    (this->WindVelocity).field0_0x0._s_0.Y = (double)uVar19;
    (this->WindVelocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
    ;
  }
  else {
    fVar49 = UWorld::GetGravityZ(this_03);
    (this->WorldGravity).field0_0x0._s_0.X = 0.0;
    (this->WorldGravity).field0_0x0._s_0.Y = 0.0;
    (this->WorldGravity).field0_0x0._s_0.Z = (double)fVar49;
    if (this_03->Scene == (FSceneInterface *)0x0) goto LAB_14dc47824;
    lVar34 = (**(code **)*param_1)(param_1);
    local_120 = *(undefined4 *)(lVar34 + 0x210);
    uStack_11c = *(undefined4 *)(lVar34 + 0x214);
    uStack_118 = *(undefined4 *)(lVar34 + 0x218);
    uStack_114 = *(undefined4 *)(lVar34 + 0x21c);
    local_110 = *(undefined4 *)(lVar34 + 0x220);
    uStack_10c = *(undefined4 *)(lVar34 + 0x224);
    (**(code **)(this_03->Scene->_padding_ + 0x3a0))
              (this_03->Scene,&local_120,&this->WindVelocity,local_168);
    dVar50 = (double)local_168[0];
    dVar17 = (this->WindVelocity).field0_0x0._s_0.Y * dVar50;
    dVar10 = (this->WindVelocity).field0_0x0._s_0.Z;
    auVar16._8_4_ = SUB84(dVar17,0);
    auVar16._0_8_ = (this->WindVelocity).field0_0x0._s_0.X * dVar50;
    auVar16._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    *(undefined1 (*) [16])&(this->WindVelocity).field0_0x0 = auVar16;
    (this->WindVelocity).field0_0x0._s_0.Z = dVar50 * dVar10;
  }
  pFVar18 = local_138;
  pFVar8 = &this->CacheData;
  if (local_138 == (FClothingSimulationCacheData *)0x0) {
    iVar32 = (this->CacheData).CachedPositions.ArrayMax;
    (this->CacheData).CachedPositions.ArrayNum = 0;
    if (iVar32 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)pFVar8,0,&(this->CacheData).CachedPositions.ArrayMax)
      ;
    }
    iVar32 = (this->CacheData).CachedVelocities.ArrayMax;
    (this->CacheData).CachedVelocities.ArrayNum = 0;
    if (iVar32 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->CacheData).CachedVelocities.AllocatorInstance,0,
                 &(this->CacheData).CachedVelocities.ArrayMax);
    }
    iVar32 = (this->CacheData).CacheIndices.ArrayMax;
    (this->CacheData).CacheIndices.ArrayNum = 0;
    if (iVar32 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->CacheData).CacheIndices.AllocatorInstance,0,
                 &(this->CacheData).CacheIndices.ArrayMax);
    }
    TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
             *)&(this->CacheData).CachedReferenceSpaceTransforms);
  }
  else {
    if (pFVar8 != local_138) {
      pFVar14 = (pFVar8->CachedPositions).AllocatorInstance.Data;
      if (pFVar14 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar14);
      }
      (pFVar8->CachedPositions).AllocatorInstance.Data =
           (pFVar18->CachedPositions).AllocatorInstance.Data;
      (pFVar18->CachedPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->CacheData).CachedPositions.ArrayNum = (pFVar18->CachedPositions).ArrayNum;
      (this->CacheData).CachedPositions.ArrayMax = (pFVar18->CachedPositions).ArrayMax;
      (pFVar18->CachedPositions).ArrayNum = 0;
      (pFVar18->CachedPositions).ArrayMax = 0;
    }
    pTVar1 = &pFVar18->CachedVelocities;
    pTVar2 = &(this->CacheData).CachedVelocities;
    if (pTVar2 != pTVar1) {
      pFVar14 = (pTVar2->AllocatorInstance).Data;
      if (pFVar14 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar14);
      }
      (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->CacheData).CachedVelocities.ArrayNum = (pFVar18->CachedVelocities).ArrayNum;
      (this->CacheData).CachedVelocities.ArrayMax = (pFVar18->CachedVelocities).ArrayMax;
      (pFVar18->CachedVelocities).ArrayNum = 0;
      (pFVar18->CachedVelocities).ArrayMax = 0;
    }
    pTVar3 = &pFVar18->CacheIndices;
    pTVar4 = &(this->CacheData).CacheIndices;
    if (pTVar4 != pTVar3) {
      pFVar14 = (pTVar4->AllocatorInstance).Data;
      if (pFVar14 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar14);
      }
      (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
      (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->CacheData).CacheIndices.ArrayNum = (pFVar18->CacheIndices).ArrayNum;
      (this->CacheData).CacheIndices.ArrayMax = (pFVar18->CacheIndices).ArrayMax;
      (pFVar18->CacheIndices).ArrayNum = 0;
      (pFVar18->CacheIndices).ArrayMax = 0;
    }
    pTVar5 = &(this->CacheData).CachedReferenceSpaceTransforms;
    if (pTVar5 != &pFVar18->CachedReferenceSpaceTransforms) {
      TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>_>
                ((TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                  *)pTVar5,
                 (TSet<TTuple<int,UE::Math::TTransform<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>,FDefaultSetAllocator>
                  *)&pFVar18->CachedReferenceSpaceTransforms);
    }
  }
  if (local_158 != (UObject *)0x0) {
    FMemory::Free(local_158);
  }
LAB_14dc479b9:
  if (bVar47) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

