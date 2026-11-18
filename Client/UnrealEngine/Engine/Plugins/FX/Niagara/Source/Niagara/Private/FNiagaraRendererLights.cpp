// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// FNiagaraRendererLights @ 149333aa0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNiagaraRendererLights * __thiscall
FNiagaraRendererLights::FNiagaraRendererLights
          (FNiagaraRendererLights *this,Type param_1,UNiagaraRendererProperties *param_2,
          FNiagaraEmitterInstance *param_3)

{
  FNiagaraRenderer::FNiagaraRenderer((FNiagaraRenderer *)this,param_1,param_2,param_3);
  *(uint *)&this->field_0x140 = *(uint *)&this->field_0x140 | 2;
  *(undefined ***)this = &___7FNiagaraRendererLights__6B_;
  return this;
}

// GatherSimpleLights @ 149347970

void __thiscall
FNiagaraRendererLights::GatherSimpleLights(FNiagaraRendererLights *this,FSimpleLightArray *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  FSimpleLightPerViewEntry *pFVar4;
  int iVar5;
  longlong lVar6;
  FSimpleLightEntry *pFVar7;
  FSimpleLightPerViewEntry *pFVar8;
  code *pcVar9;
  double dVar10;
  undefined8 uVar11;
  FSimpleLightId FVar12;
  FSimpleLightEntry *pFVar13;
  float fVar14;
  float *pfVar15;
  bool bVar16;
  bool bVar17;
  undefined1 uVar18;
  bool bVar19;
  int iVar20;
  FSimpleLightEntry *pFVar21;
  FSimpleLightEntry *pFVar22;
  undefined1 local_res18 [8];
  FSimpleLightEntry *local_res20;
  
  if ((NiagaraRendererLightsPrivate::GbRendererEnabled) &&
     (lVar6 = *(longlong *)&this->field_0x8, lVar6 != 0)) {
    iVar5 = (param_1->InstanceData).ArrayNum;
    iVar20 = *(int *)(lVar6 + 0x30);
    uVar3 = iVar5 + iVar20;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    piVar1 = &(param_1->InstanceData).ArrayMax;
    if ((param_1->InstanceData).ArrayMax < (int)uVar3) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSimpleLightEntry>_>
                (0x30,8,uVar3,(ForElementType<FSimpleLightEntry> *)param_1,iVar5,piVar1);
    }
    iVar5 = (param_1->PerViewData).ArrayNum;
    uVar3 = iVar5 + iVar20;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    piVar2 = &(param_1->PerViewData).ArrayMax;
    if ((param_1->PerViewData).ArrayMax < (int)uVar3) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSimpleLightPerViewEntry>_>
                (0x18,8,uVar3,&(param_1->PerViewData).AllocatorInstance,iVar5,piVar2);
    }
    pFVar22 = *(FSimpleLightEntry **)(lVar6 + 0x28);
    iVar5 = *(int *)(lVar6 + 0x30);
    pFVar21 = pFVar22 + 1;
    local_res20 = (FSimpleLightEntry *)((longlong)pFVar22 + (longlong)iVar5 * 0x48);
    while( true ) {
      if (*(int *)(lVar6 + 0x30) != iVar5) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FNiagaraRendererLights::SimpleLightData_const_,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar22 == local_res20) break;
      pFVar7 = (FSimpleLightEntry *)(param_1->PerViewData).AllocatorInstance.Data;
      if (((pFVar7 <= pFVar21) &&
          (pFVar21 < (FSimpleLightEntry *)((TVector<double> *)&pFVar7->Color + *piVar2))) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar19)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar20 = (param_1->PerViewData).ArrayNum;
      if (iVar20 == *piVar2) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSimpleLightPerViewEntry>_>
                           (0x818,&(param_1->PerViewData).AllocatorInstance,piVar2);
        (param_1->PerViewData).ArrayNum = iVar20;
      }
      (param_1->PerViewData).ArrayNum = iVar20 + 1;
      dVar10 = (((TVector<double> *)&pFVar21->Color)->field0_0x0)._s_0.Y;
      pFVar8 = (param_1->PerViewData).AllocatorInstance.Data;
      pFVar4 = pFVar8 + iVar20;
      (pFVar4->Position).field0_0x0._s_0.X =
           (((TVector<double> *)&pFVar21->Color)->field0_0x0)._s_0.X;
      (pFVar4->Position).field0_0x0._s_0.Y = dVar10;
      pFVar8[iVar20].Position.field0_0x0._s_0.Z = *(double *)&pFVar21->Exponent;
      pFVar7 = (param_1->InstanceData).AllocatorInstance.Data;
      if (((pFVar7 <= pFVar22) && (pFVar22 < pFVar7 + *piVar1)) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar19)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar20 = (param_1->InstanceData).ArrayNum;
      if (iVar20 == *piVar1) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FSimpleLightEntry>_>
                           (0x830,(ForElementType<FSimpleLightEntry> *)param_1,piVar1);
      }
      (param_1->InstanceData).ArrayNum = iVar20 + 1;
      uVar11 = *(undefined8 *)((longlong)&(pFVar22->Color).field0_0x0 + 8);
      pFVar7 = (param_1->InstanceData).AllocatorInstance.Data;
      *(undefined8 *)&pFVar7[iVar20].Color.field0_0x0 = *(undefined8 *)&(pFVar22->Color).field0_0x0;
      *(undefined8 *)((longlong)&pFVar7[iVar20].Color.field0_0x0 + 8) = uVar11;
      fVar14 = pFVar22->InverseExposureBlend;
      uVar11 = *(undefined8 *)&pFVar22->VolumetricScatteringIntensity;
      pFVar13 = pFVar7 + iVar20;
      pFVar13->Exponent = pFVar22->Exponent;
      pFVar13->InverseExposureBlend = fVar14;
      *(undefined8 *)(&pFVar13->Exponent + 2) = uVar11;
      pfVar15 = &pFVar22->DiffuseScale;
      bVar19 = pFVar22->bAffectTranslucency;
      bVar16 = pFVar22->bAllowMegaLights;
      bVar17 = pFVar22->bMegaLightsCastShadows;
      uVar18 = pFVar22->field_0x27;
      FVar12 = pFVar22->LightId;
      pFVar22 = (FSimpleLightEntry *)&pFVar22[1].VolumetricScatteringIntensity;
      pFVar21 = (FSimpleLightEntry *)&pFVar21[1].VolumetricScatteringIntensity;
      pFVar7 = pFVar7 + iVar20;
      pFVar7->DiffuseScale = *pfVar15;
      pFVar7->bAffectTranslucency = bVar19;
      pFVar7->bAllowMegaLights = bVar16;
      pFVar7->bMegaLightsCastShadows = bVar17;
      pFVar7->field_0x27 = uVar18;
      *(FSimpleLightId *)(&pFVar7->DiffuseScale + 2) = FVar12;
    }
  }
  return;
}

// GenerateDynamicData @ 149349a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNiagaraDynamicDataBase * __thiscall
FNiagaraRendererLights::GenerateDynamicData
          (FNiagaraRendererLights *this,FNiagaraSceneProxy *param_1,
          UNiagaraRendererProperties *param_2,FNiagaraEmitterInstance *param_3)

{
  FNiagaraParameterStore *this_00;
  undefined8 *puVar1;
  int *piVar2;
  FName FVar3;
  FNiagaraSystemInstance *this_01;
  FNiagaraDataBuffer *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  EShadingPath EVar17;
  int iVar18;
  uint uVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGenLights> FVar21;
  UClass *pUVar22;
  FNiagaraDataSet *pFVar23;
  UObject *pUVar24;
  FNiagaraDynamicDataBase *pFVar25;
  TTransform<double> *pTVar26;
  FLinearColor *pFVar27;
  UNiagaraSettings *pUVar28;
  SimpleLightData *pSVar29;
  FString *pFVar30;
  wchar_t *pwVar31;
  int iVar32;
  wchar_t *pwVar33;
  FScriptContainerElement *pFVar34;
  longlong lVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  FNameEntryId FVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar57;
  double dVar62;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  double dVar63;
  undefined4 uVar66;
  undefined1 auVar64 [16];
  double dVar67;
  undefined4 uVar68;
  undefined1 auVar65 [16];
  double dVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined4 uVar78;
  undefined4 uVar79;
  float fVar80;
  undefined1 auStackY_418 [32];
  FNiagaraDynamicDataBase *local_3b0;
  float local_3a8;
  float local_3a4;
  FColor_u_0 local_3a0 [2];
  FName local_398;
  byte local_390;
  undefined1 local_388 [8];
  FScriptContainerElement *local_380;
  float local_378;
  FName local_370;
  FNiagaraRendererLights *local_368;
  FNiagaraDataSetReaderFloat<float> local_360;
  TVector<float>_u_0 local_350;
  int local_340;
  float local_33c;
  uint local_338;
  FName local_330;
  TVector<float>_u_0 local_328;
  undefined1 local_318 [16];
  FNiagaraDataBuffer *local_308;
  undefined4 local_300;
  uint uStack_2fc;
  FLinearColor_u_0 local_2f8;
  FLinearColor_u_0 local_2e8;
  FNiagaraDataSetReaderFloat<float> local_2d8;
  FNiagaraDataSetReaderFloat<float> local_2c8;
  FNiagaraDataSetReaderFloat<float> local_2b8;
  FNiagaraDataSetReaderFloat<float> local_2a8;
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  double local_268;
  double dStack_260;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  FNiagaraDataSetReaderFloat<FNiagaraPosition> local_228;
  FNiagaraDataSetReaderFloat<FLinearColor> local_208;
  TTransform<double> local_1d8;
  FLinearColor local_178 [3];
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_418;
  if (((this->field_0x140 & 2) == 0) ||
     ((((local_368 = this,
        EVar17 = FSceneInterface::GetShadingPath(*(Type *)(param_1->_padding_ + 8)),
        EVar17 != Deferred &&
        ((FSceneInterface::GetShaderPlatform((FSceneInterface *)param_1->_padding_),
         FReadOnlyCVARCache::bMobileDeferredShadingValue == false ||
         (FReadOnlyCVARCache::bMobileHDR == false)))) &&
       ((FReadOnlyCVARCache::MobileForwardLocalLightsValue < 1 ||
        (FReadOnlyCVARCache::bMobileForwardParticleLights == false)))) ||
      (bVar16 = FNiagaraRenderer::IsRendererEnabled((FNiagaraRenderer *)this,param_2,param_3),
      !bVar16)))) {
    return (FNiagaraDynamicDataBase *)0x0;
  }
  pFVar25 = (FNiagaraDynamicDataBase *)0x0;
  FVar21 = StatPtr_STAT_NiagaraGenLights;
  if (StatPtr_STAT_NiagaraGenLights == (FThreadSafeStaticStat<FStat_STAT_NiagaraGenLights>)0x0) {
    pFVar20 = ::FName::FName(&local_330,"STAT_NiagaraGenLights");
    FVar21 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGenLights>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGenLights,*pFVar20,
                        L"Generate Particle Lights","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara"
                        ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_398.ComparisonIndex.Value = 0;
  local_398.Number = 0;
  local_390 = 0;
  FVar3 = *(FName *)FVar21;
  if ((FVar3.ComparisonIndex.Value.Value != 0) || (FVar3.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_3a0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_3a0[0]._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      local_390 = local_390 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_370.ComparisonIndex.Value = FVar3.ComparisonIndex.Value.Value;
        local_370.Number = FVar3.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_370,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererLights.cpp"
                   ,0x7f);
        local_390 = local_390 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_398 = FVar3;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      local_390 = local_390 | 4;
    }
  }
  if (param_2 == (UNiagaraRendererProperties *)0x0) {
    pFVar30 = GetTypeName<UNiagaraLightRendererProperties_const_>((FString *)local_258);
    if ((pFVar30->Data).ArrayNum == 0) {
      pwVar31 = L"";
    }
    else {
      pwVar31 = (wchar_t *)(pFVar30->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar31);
  }
  pUVar22 = Z_Construct_UClass_UNiagaraLightRendererProperties_NoRegister();
  iVar18 = (int)pUVar22->_padding_;
  if ((*(int *)(param_2->_padding_ + 0x38) < iVar18) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar18 * 8)
      != &pUVar22->_padding_)) {
    pFVar30 = GetTypeName<UNiagaraLightRendererProperties_const_>((FString *)local_288);
    pwVar31 = L"";
    if ((pFVar30->Data).ArrayNum == 0) {
      pwVar33 = L"";
    }
    else {
      pwVar33 = (wchar_t *)(pFVar30->Data).AllocatorInstance.Data;
    }
    pFVar30 = GetFullNameForCastLogError<UNiagaraRendererProperties_const_>
                        ((FString *)local_298,param_2);
    if ((pFVar30->Data).ArrayNum != 0) {
      pwVar31 = (wchar_t *)(pFVar30->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar31,pwVar33);
  }
  pFVar23 = FNiagaraEmitterInstance::GetParticleData(param_3);
  local_308 = pFVar23->CurrentData;
  local_3b0 = pFVar25;
  if ((local_308 != (FNiagaraDataBuffer *)0x0) &&
     (param_3->ParentSystemInstance != (FNiagaraSystemInstance *)0x0)) {
    if ((param_2->bAllowInCullProxies == false) &&
       (pUVar24 = FWeakObjectPtr::Get(&(param_3->ParentSystemInstance->AttachComponent).WeakPtr),
       pUVar24 != (UObject *)0x0)) {
      pUVar22 = Z_Construct_UClass_UNiagaraCullProxyComponent_NoRegister();
      iVar18 = (int)pUVar22->_padding_;
      if ((iVar18 <= *(int *)(*(longlong *)&pUVar24->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar24->field_0x10 + 0x30) + (longlong)iVar18 * 8) ==
          &pUVar22->_padding_)) goto LAB_14934a796;
    }
    this_01 = param_3->ParentSystemInstance;
    local_3b0 = ::operator_new(0x38);
    if (local_3b0 == (FNiagaraDynamicDataBase *)0x0) {
      local_3b0 = (FNiagaraDynamicDataBase *)0x0;
    }
    else {
      FNiagaraDynamicDataBase::FNiagaraDynamicDataBase(local_3b0,param_3);
      local_3b0->_padding_ = (longlong)&___7FNiagaraDynamicDataLights__6B_;
      local_3b0[1]._padding_ = 0;
      local_3b0[1].MaterialRelevance.field0_0x0.Raw = 0;
    }
    pUVar24 = FWeakObjectPtr::Get(&(this_01->AttachComponent).WeakPtr);
    if ((pUVar24 == (UObject *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerComponent",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererLights.cpp"
                            ,0x9d,L""), bVar16)) {
      pcVar5 = (code *)swi(3);
      pFVar25 = (FNiagaraDynamicDataBase *)(*pcVar5)();
      return pFVar25;
    }
    if (((local_368->field_0x140 & 1) == 0) && ((param_1->DynamicData).bUseCullProxy == false)) {
      pTVar26 = FNiagaraSystemInstance::GetLWCSimToWorld(this_01,&local_148,false);
    }
    else {
      pTVar26 = &local_1d8;
      local_1d8.Rotation.XY.m128d_f64[0] = *(double *)&pUVar24[0xc].field_0x10;
      local_1d8.Rotation.XY.m128d_f64[1] = *(double *)&pUVar24[0xc].field_0x18;
      local_1d8.Rotation.ZW.m128d_f64[0] = *(double *)&pUVar24[0xc].field_0x20;
      local_1d8.Rotation.ZW.m128d_f64[1] = *(double *)(pUVar24 + 0xd);
      local_1d8.Translation.XY.m128d_f64[0] = *(double *)&pUVar24[0xd].field_0x8;
      local_1d8.Translation.XY.m128d_f64[1] = *(double *)&pUVar24[0xd].field_0x10;
      local_1d8.Translation.ZW.m128d_f64[0] = *(double *)&pUVar24[0xd].field_0x18;
      local_1d8.Translation.ZW.m128d_f64[1] = *(double *)&pUVar24[0xd].field_0x20;
      local_1d8.Scale3D.XY.m128d_f64[0] = *(double *)(pUVar24 + 0xe);
      local_1d8.Scale3D.XY.m128d_f64[1] = *(double *)&pUVar24[0xe].field_0x8;
      local_1d8.Scale3D.ZW.m128d_f64[0] = *(double *)&pUVar24[0xe].field_0x10;
      local_1d8.Scale3D.ZW.m128d_f64[1] = *(double *)&pUVar24[0xe].field_0x18;
    }
    local_298._0_8_ = (pTVar26->Translation).XY.m128d_f64[0];
    local_298._8_8_ = (pTVar26->Translation).XY.m128d_f64[1];
    this_00 = &param_3->RendererBindings;
    auVar49 = *(undefined1 (*) [16])(pTVar26->Rotation).XY.m128d_f64;
    auVar70 = *(undefined1 (*) [16])(pTVar26->Rotation).ZW.m128d_f64;
    pFVar34 = (FScriptContainerElement *)(pTVar26->Scale3D).XY.m128d_f64[0];
    dVar6 = (pTVar26->Scale3D).XY.m128d_f64[1];
    local_288._0_8_ = (pTVar26->Translation).ZW.m128d_f64[0];
    local_288._8_8_ = (pTVar26->Translation).ZW.m128d_f64[1];
    local_268 = (pTVar26->Scale3D).ZW.m128d_f64[0];
    dStack_260 = (pTVar26->Scale3D).ZW.m128d_f64[1];
    local_350._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_350._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_278 = auVar49;
    local_258._0_8_ = pFVar34;
    local_258._8_8_ = dVar6;
    local_248 = auVar70;
    FNiagaraParameterStore::GetParameterValueOrDefault<UE::Math::TVector<float>_>
              (this_00,(TVector<float> *)&local_328._s_0,
               (FNiagaraVariableBase *)&param_2[1].RendererEnabledBinding.DataSetName,
               (TVector<float> *)&local_350._s_0);
    pFVar27 = UNiagaraLightRendererProperties::GetDefaultColor(local_178);
    FNiagaraParameterStore::GetParameterValueOrDefault<FLinearColor>
              (this_00,(FLinearColor *)&local_2e8._s_0,
               (FNiagaraVariableBase *)
               ((longlong)&param_2[1].AttributeBindings.AllocatorInstance.Data + 4),pFVar27);
    local_3a4 = UNiagaraLightRendererProperties::GetDefaultRadius();
    fVar36 = FNiagaraParameterStore::GetParameterValueOrDefault<float>
                       (this_00,(FNiagaraVariableBase *)((longlong)&param_2[2]._padding_ + 4),
                        &local_3a4);
    local_3a8 = UNiagaraLightRendererProperties::GetDefaultVolumetricScattering();
    fVar37 = FNiagaraParameterStore::GetParameterValueOrDefault<float>
                       (this_00,(FNiagaraVariableBase *)
                                &param_2[2].Platforms.DeviceProfileStates.ArrayMax,&local_3a8);
    local_378 = fVar37;
    FNiagaraParameterStore::GetParameterValueOrDefault<FNiagaraBool>
              (this_00,(FNiagaraVariableBase *)local_388,
               (FNiagaraBool *)&param_2[1].Platforms.DeviceProfileStates.ArrayMax);
    iVar18 = FNiagaraParameterStore::GetParameterValueOrDefault<int>
                       (this_00,(FNiagaraVariableBase *)&param_2[2].Platforms.field_0x2c,
                        (int *)&param_2[1].Platforms);
    local_340 = iVar18;
    fVar38 = FNiagaraParameterStore::GetParameterValueOrDefault<float>
                       (this_00,(FNiagaraVariableBase *)&param_2[1].Platforms.field_0x2c,
                        (float *)((longlong)&param_2[1]._padding_ + 4));
    FVar39.Value = (uint)FNiagaraParameterStore::GetParameterValueOrDefault<float>
                                   (this_00,(FNiagaraVariableBase *)
                                            &param_2[2].RendererEnabledBinding.DataSetName,
                                    (float *)&param_2[1]._padding_);
    local_370.ComparisonIndex.Value = FVar39.Value;
    local_33c = FNiagaraParameterStore::GetParameterValueOrDefault<float>
                          (this_00,(FNiagaraVariableBase *)
                                   ((longlong)&param_2[2].AttributeBindings.AllocatorInstance.Data +
                                   4),(float *)((longlong)&param_2[1]._padding_ + 4));
    if ((param_2[1]._padding_ & 0x2000000000) == 0) {
      pUVar28 = GetDefault<UNiagaraSettings>();
      fVar80 = pUVar28->DefaultLightInverseExposureBlend;
    }
    else {
      fVar80 = *(float *)((longlong)&param_2[1]._padding_ + 4);
    }
    uVar19 = *(uint *)(param_1->_padding_ + 0x18c);
    local_338 = uVar19;
    if ((char)param_2[1]._padding_ == '\0') {
      FNiagaraDataSetAccessorFloat<FNiagaraPosition>::GetReader
                ((FNiagaraDataSetAccessorFloat<FNiagaraPosition> *)
                 ((longlong)&param_2[3]._padding_ + 4),&local_228,pFVar23);
      FNiagaraDataSetReaderFloat<FLinearColor>::FNiagaraDataSetReaderFloat<FLinearColor>
                (&local_208,pFVar23->CurrentData,*(bool *)((longlong)&param_2[3]._padding_ + 4),
                 (int)param_2[3]._padding_);
      pFVar4 = pFVar23->CurrentData;
      local_360.bIsFloat = *(bool *)((longlong)&param_2[3]._padding_ + 4);
      iVar18 = (int)param_2[3]._padding_;
      local_360.bIsValid = false;
      local_360.NumInstances = 0;
      local_360.ComponentData[0] = (uchar *)0x0;
      if ((pFVar4 != (FNiagaraDataBuffer *)0x0) && (iVar18 != -1)) {
        local_360.bIsValid = true;
        if (local_360.bIsFloat == false) {
          local_360.ComponentData[0] =
               (uchar *)((pFVar4->HalfData).AllocatorInstance.Data + iVar18 * pFVar4->HalfStride);
        }
        else {
          local_360.ComponentData[0] =
               (uchar *)((pFVar4->FloatData).AllocatorInstance.Data + iVar18 * pFVar4->FloatStride);
        }
        local_360.NumInstances = pFVar4->NumInstances;
      }
      FNiagaraDataSetAccessorFloat<float>::GetReader
                ((FNiagaraDataSetAccessorFloat<float> *)((longlong)&param_2[3]._padding_ + 4),
                 &local_2d8,pFVar23);
      FNiagaraDataSetAccessorFloat<float>::GetReader
                ((FNiagaraDataSetAccessorFloat<float> *)
                 ((longlong)&param_2[3].Platforms.DeviceProfileStates.AllocatorInstance.Data + 4),
                 &local_2c8,pFVar23);
      pFVar4 = pFVar23->CurrentData;
      iVar18 = param_2[3].Platforms.DeviceProfileStates.ArrayMax;
      bVar16 = false;
      local_3a4 = 0.0;
      local_330.ComparisonIndex.Value = 0;
      local_330.Number = 0;
      if ((pFVar4 != (FNiagaraDataBuffer *)0x0) && (iVar18 != -1)) {
        bVar16 = true;
        local_330 = (FName)((ulonglong)(iVar18 * pFVar4->Int32Stride) +
                           (longlong)(pFVar4->Int32Data).AllocatorInstance.Data);
        local_3a4 = (float)pFVar4->NumInstances;
      }
      iVar18 = *(int *)&param_2[3].Platforms.CVarConditions.AllocatorInstance.Data;
      bVar12 = false;
      local_3a8 = 0.0;
      local_380 = (FScriptContainerElement *)0x0;
      if ((pFVar4 != (FNiagaraDataBuffer *)0x0) && (iVar18 != -1)) {
        bVar12 = true;
        local_380 = (pFVar4->Int32Data).AllocatorInstance.Data + iVar18 * pFVar4->Int32Stride;
        local_3a8 = (float)pFVar4->NumInstances;
      }
      pFVar34 = local_380;
      FNiagaraDataSetAccessorFloat<float>::GetReader
                ((FNiagaraDataSetAccessorFloat<float> *)
                 &param_2[3].Platforms.CVarConditions.ArrayNum,&local_2b8,pFVar23);
      FNiagaraDataSetAccessorFloat<float>::GetReader
                ((FNiagaraDataSetAccessorFloat<float> *)&param_2[3].Platforms.QualityLevelMask,
                 &local_2a8,pFVar23);
      pFVar4 = pFVar23->CurrentData;
      iVar18 = *(int *)((longlong)&param_2[3].Platforms.CVarConditions.AllocatorInstance.Data + 4);
      bVar13 = false;
      local_3a0[0].Bits = 0;
      local_368 = (FNiagaraRendererLights *)0x0;
      if ((pFVar4 != (FNiagaraDataBuffer *)0x0) && (iVar18 != -1)) {
        bVar13 = true;
        local_368 = (FNiagaraRendererLights *)
                    ((pFVar4->Int32Data).AllocatorInstance.Data + iVar18 * pFVar4->Int32Stride);
        local_3a0[0] = (FColor_u_0)pFVar4->NumInstances;
      }
      if (local_308->NumInstances != 0) {
        uVar10._4_4_ = local_328._s_0.Y;
        uVar10._0_4_ = local_328._s_0.X;
        do {
          iVar32 = (int)pFVar25;
          lVar35 = (longlong)iVar32;
          iVar18 = local_340;
          if ((bVar12) && (iVar32 < (int)local_3a8)) {
            iVar18 = *(int *)(pFVar34 + lVar35 * 4);
          }
          uVar19 = local_388._0_4_;
          if ((bVar16) && (iVar32 < (int)local_3a4)) {
            uVar19 = *(uint *)((longlong)local_330 + lVar35 * 4);
          }
          if ((uVar19 == 0) ||
             (iVar18 != *(int *)&param_2[1].Platforms.DeviceProfileStates.AllocatorInstance.Data)) {
            bVar11 = false;
          }
          else {
            bVar11 = true;
          }
          fVar40 = fVar36;
          if ((local_360.bIsValid != false) && (iVar32 < local_360.NumInstances)) {
            fVar40 = FNiagaraDataSetReaderFloat<float>::Get(&local_360,iVar32);
          }
          fVar40 = fVar40 * *(float *)&param_2[1]._padding_;
          if ((bVar11) && (0.0 < fVar40)) {
            iVar18 = *(int *)&local_3b0[1].MaterialRelevance.field0_0x0;
            piVar2 = (int *)((longlong)&local_3b0[1].MaterialRelevance.field0_0x0 + 4);
            if (iVar18 == *piVar2) {
              iVar18 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x848,(ForAnyElementType *)(local_3b0 + 1),piVar2);
            }
            *(int *)&local_3b0[1].MaterialRelevance.field0_0x0 = iVar18 + 1;
            puVar1 = (undefined8 *)(local_3b0[1]._padding_ + (longlong)iVar18 * 0x48);
            DefaultConstructItems<FNiagaraRendererLights::SimpleLightData,int>(puVar1,1);
            uVar14 = CONCAT44(local_2e8._s_0.G,local_2e8._s_0.R);
            uVar15 = CONCAT44(local_2e8._s_0.A,local_2e8._s_0.B);
            if ((local_208.bIsValid != false) && (iVar32 < local_208.NumInstances)) {
              FNiagaraDataSetReaderFloat<FLinearColor>::Get
                        (&local_208,(FLinearColor *)&local_2f8._s_0,iVar32);
              uVar14 = local_2f8._0_8_;
              uVar15 = local_2f8._8_8_;
            }
            local_2f8._8_8_ = uVar15;
            local_2f8._0_8_ = uVar14;
            uVar66 = __real_3f800000;
            if ((param_2[1]._padding_ & 0x1000000000) != 0) {
              uVar66 = local_2f8._s_0.A;
            }
            if ((local_228.bIsValid == false) || (local_228.NumInstances <= iVar32)) {
              local_318._8_4_ = local_328._s_0.Z;
              local_318._0_8_ = uVar10;
            }
            else {
              FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
                        (&local_228,(FNiagaraPosition *)local_318,iVar32);
            }
            uVar68 = local_318._8_4_;
            *(float *)((longlong)puVar1 + 0xc) = fVar40;
            fVar40 = *(float *)&param_2[1]._padding_;
            *puVar1 = CONCAT44(local_2f8._s_0.G * (float)uVar66 +
                               *(float *)((longlong)&param_2[1]._padding_ + 4),
                               local_2f8._s_0.R * (float)uVar66 + *(float *)&param_2[1]._padding_);
            *(float *)(puVar1 + 1) = local_2f8._s_0.B * (float)uVar66 + fVar40;
            local_350._0_8_ = local_318._0_8_;
            if ((param_2[1]._padding_ & 0x100000000) == 0) {
              fVar40 = fVar38;
              if ((local_2d8.bIsValid != false) && (iVar32 < local_2d8.NumInstances)) {
                fVar40 = FNiagaraDataSetReaderFloat<float>::Get(&local_2d8,iVar32);
              }
            }
            else {
              fVar40 = 0.0;
            }
            *(float *)(puVar1 + 2) = fVar40;
            *(float *)((longlong)puVar1 + 0x14) = fVar80;
            *(byte *)((longlong)puVar1 + 0x24) =
                 (byte)(*(uint *)((longlong)&param_2[1]._padding_ + 4) >> 1) & 1;
            *(byte *)((longlong)puVar1 + 0x25) =
                 (byte)(*(uint *)((longlong)&param_2[1]._padding_ + 4) >> 2) & 1;
            *(byte *)((longlong)puVar1 + 0x26) =
                 (byte)(*(uint *)((longlong)&param_2[1]._padding_ + 4) >> 3) & 1;
            if ((local_2c8.bIsValid != false) && (iVar32 < local_2c8.NumInstances)) {
              fVar37 = FNiagaraDataSetReaderFloat<float>::Get(&local_2c8,iVar32);
            }
            *(float *)(puVar1 + 3) = fVar37;
            if ((local_2b8.bIsValid != false) && (iVar32 < local_2b8.NumInstances)) {
              FVar39.Value = (uint)FNiagaraDataSetReaderFloat<float>::Get(&local_2b8,iVar32);
            }
            *(uint *)((longlong)puVar1 + 0x1c) = FVar39.Value;
            fVar37 = local_33c;
            if ((local_2a8.bIsValid != false) && (iVar32 < local_2a8.NumInstances)) {
              fVar37 = FNiagaraDataSetReaderFloat<float>::Get(&local_2a8,iVar32);
            }
            *(float *)(puVar1 + 4) = fVar37;
            if ((bVar13) && (iVar32 < (int)local_3a0[0])) {
              local_300 = *(undefined4 *)(&local_368->field_0x0 + lVar35 * 4);
            }
            else {
              local_300 = 0xffffffff;
            }
            uStack_2fc = local_338;
            puVar1[5] = CONCAT44(local_338,local_300);
            dVar57 = local_248._0_8_;
            dVar9 = (double)(float)uVar68 * local_268;
            dVar63 = dStack_260 * 0.0;
            dVar6 = (double)local_258._0_8_ * (double)local_350._s_0.X;
            dVar7 = (double)local_258._8_8_ * (double)local_350._s_0.Y;
            uVar66 = (undefined4)((ulonglong)dVar7 >> 0x20);
            dVar69 = local_278._8_8_;
            dVar62 = local_248._8_8_;
            auVar70 = blendpd(local_278,local_248,2);
            auVar72._8_4_ = SUB84(dVar7,0);
            auVar72._0_8_ = dVar6;
            auVar72._12_4_ = uVar66;
            auVar48._8_4_ = SUB84(dVar7,0);
            auVar48._0_8_ = dVar6;
            auVar48._12_4_ = uVar66;
            auVar8._8_4_ = SUB84(dVar63,0);
            auVar8._0_8_ = dVar9;
            auVar8._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
            auVar49 = blendpd(auVar48,auVar8,2);
            auVar41._8_4_ = local_248._0_4_;
            auVar41._0_8_ = dVar69;
            auVar41._12_4_ = local_248._4_4_;
            auVar73._0_8_ = auVar72._8_8_ * local_278._0_8_ - dVar69 * dVar6;
            auVar73._8_8_ = dVar9 * dVar69 - auVar41._8_8_ * dVar7;
            auVar64._8_4_ = SUB84(auVar73._8_8_,0);
            auVar64._0_8_ = auVar73._0_8_;
            auVar64._12_4_ = (int)((ulonglong)auVar73._8_8_ >> 0x20);
            auVar50._0_8_ = auVar49._0_8_ * dVar57 - auVar70._0_8_ * dVar9;
            auVar50._8_8_ = auVar49._8_8_ * dVar62 - auVar70._8_8_ * dVar63;
            auVar49 = blendpd(auVar73,auVar50,2);
            dVar63 = auVar64._8_8_ + auVar64._8_8_;
            dVar67 = auVar50._0_8_ + auVar50._0_8_;
            auVar74._0_8_ = auVar49._0_8_ + auVar49._0_8_;
            auVar74._8_8_ = auVar49._8_8_ + auVar49._8_8_;
            uVar66 = SUB84(dVar67,0);
            auVar58._8_4_ = uVar66;
            auVar58._0_8_ = dVar63;
            uVar68 = (undefined4)((ulonglong)dVar67 >> 0x20);
            auVar58._12_4_ = uVar68;
            auVar42._8_4_ = uVar66;
            auVar42._0_8_ = dVar63;
            auVar42._12_4_ = uVar68;
            auVar51._8_4_ = uVar66;
            auVar51._0_8_ = dVar63;
            auVar51._12_4_ = uVar68;
            auVar49 = blendpd(auVar51,auVar74,2);
            auVar59._0_8_ = auVar58._8_8_ * local_278._0_8_ - dVar63 * dVar69;
            auVar59._8_8_ = auVar74._0_8_ * dVar69 - auVar42._8_8_ * dVar57;
            auVar43._8_4_ = SUB84(auVar74._8_8_,0);
            auVar43._0_8_ = auVar74._0_8_;
            auVar43._12_4_ = (int)((ulonglong)auVar74._8_8_ >> 0x20);
            auVar52._0_8_ = auVar49._0_8_ * dVar57 - auVar74._0_8_ * auVar70._0_8_;
            auVar52._8_8_ = auVar49._8_8_ * dVar62 - auVar43._8_8_ * auVar70._8_8_;
            auVar44._8_4_ = SUB84(auVar59._8_8_,0);
            auVar44._0_8_ = auVar59._0_8_;
            auVar44._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
            auVar49 = blendpd(auVar59,auVar52,2);
            puVar1[6] = dVar63 * dVar62 + dVar6 + auVar44._8_8_ + (double)local_298._0_8_;
            puVar1[7] = dVar67 * dVar62 + dVar7 + auVar52._0_8_ + (double)local_298._8_8_;
            puVar1[8] = auVar74._0_8_ * dVar62 + dVar9 + auVar49._0_8_ + (double)local_288._0_8_;
            fVar37 = local_378;
            FVar39.Value = local_370.ComparisonIndex.Value;
          }
          pFVar25 = (FNiagaraDynamicDataBase *)(ulonglong)(iVar32 + 1U);
          pFVar34 = local_380;
        } while (iVar32 + 1U < local_308->NumInstances);
      }
    }
    else {
      fVar36 = fVar36 * *(float *)&param_2[1]._padding_;
      if (((local_388._0_4_ != 0) &&
          (iVar18 == *(int *)&param_2[1].Platforms.DeviceProfileStates.AllocatorInstance.Data)) &&
         (0.0 < fVar36)) {
        uVar66 = __real_3f800000;
        if ((param_2[1]._padding_ & 0x1000000000) != 0) {
          uVar66 = local_2e8._s_0.A;
        }
        pSVar29 = TArray<FNiagaraRendererLights::SimpleLightData,TSizedDefaultAllocator<32>_>::
                  AddDefaulted_GetRef((TArray<FNiagaraRendererLights::SimpleLightData,TSizedDefaultAllocator<32>_>
                                       *)(local_3b0 + 1));
        (pSVar29->LightEntry).Radius = fVar36;
        fVar36 = *(float *)&param_2[1]._padding_;
        *(ulonglong *)&(pSVar29->LightEntry).Color.field0_0x0 =
             CONCAT44(local_2e8._s_0.G * (float)uVar66 +
                      *(float *)((longlong)&param_2[1]._padding_ + 4),
                      local_2e8._s_0.R * (float)uVar66 + *(float *)&param_2[1]._padding_);
        (pSVar29->LightEntry).Color.field0_0x0._s_0.Z = local_2e8._s_0.B * (float)uVar66 + fVar36;
        fVar36 = 0.0;
        if ((param_2[1]._padding_ & 0x100000000) == 0) {
          fVar36 = fVar38;
        }
        dVar62 = auVar49._8_8_;
        (pSVar29->LightEntry).Exponent = fVar36;
        (pSVar29->LightEntry).InverseExposureBlend = fVar80;
        (pSVar29->LightEntry).bAffectTranslucency =
             (bool)((byte)(*(uint *)((longlong)&param_2[1]._padding_ + 4) >> 1) & 1);
        dVar9 = auVar70._0_8_;
        (pSVar29->LightEntry).bAllowMegaLights =
             (bool)((byte)(*(uint *)((longlong)&param_2[1]._padding_ + 4) >> 2) & 1);
        local_380 = (FScriptContainerElement *)((ulonglong)uVar19 << 0x20);
        (pSVar29->LightEntry).bMegaLightsCastShadows =
             (bool)((byte)(*(uint *)((longlong)&param_2[1]._padding_ + 4) >> 3) & 1);
        (pSVar29->LightEntry).VolumetricScatteringIntensity = fVar37;
        dVar57 = (double)pFVar34 * (double)local_328._s_0.X;
        dVar6 = dVar6 * (double)local_328._s_0.Y;
        uVar78 = SUB84(dVar6,0);
        uVar79 = (undefined4)((ulonglong)dVar6 >> 0x20);
        (pSVar29->LightEntry).SpecularScale = *(float *)&param_2[1]._padding_;
        (pSVar29->LightEntry).DiffuseScale = *(float *)((longlong)&param_2[1]._padding_ + 4);
        (pSVar29->LightEntry).LightId.Packed = (ulong64)local_380;
        auVar65 = blendpd(auVar49,auVar70,2);
        dVar7 = (double)local_328._s_0.Z * local_268;
        uVar66 = SUB84(dStack_260 * 0.0,0);
        uVar68 = (undefined4)((ulonglong)(dStack_260 * 0.0) >> 0x20);
        auVar75._8_4_ = uVar78;
        auVar75._0_8_ = dVar57;
        auVar75._12_4_ = uVar79;
        dVar63 = auVar70._8_8_;
        auVar45._8_4_ = uVar78;
        auVar45._0_8_ = dVar57;
        auVar45._12_4_ = uVar79;
        auVar53._8_4_ = uVar78;
        auVar53._0_8_ = dVar57;
        auVar53._12_4_ = uVar79;
        auVar76._0_8_ = auVar75._8_8_ * auVar49._0_8_ - dVar57 * dVar62;
        auVar76._8_8_ = dVar7 * dVar62 - auVar45._8_8_ * dVar9;
        auVar70._8_4_ = uVar66;
        auVar70._0_8_ = dVar7;
        auVar70._12_4_ = uVar68;
        auVar70 = blendpd(auVar53,auVar70,2);
        auVar71._8_4_ = SUB84(auVar76._8_8_,0);
        auVar71._0_8_ = auVar76._0_8_;
        auVar71._12_4_ = (int)((ulonglong)auVar76._8_8_ >> 0x20);
        auVar46._8_4_ = uVar66;
        auVar46._0_8_ = dVar7;
        auVar46._12_4_ = uVar68;
        auVar54._0_8_ = auVar70._0_8_ * dVar9 - dVar7 * auVar65._0_8_;
        auVar54._8_8_ = auVar70._8_8_ * dVar63 - auVar46._8_8_ * auVar65._8_8_;
        auVar70 = blendpd(auVar76,auVar54,2);
        dVar69 = auVar71._8_8_ + auVar71._8_8_;
        dVar67 = auVar54._0_8_ + auVar54._0_8_;
        auVar77._0_8_ = auVar70._0_8_ + auVar70._0_8_;
        auVar77._8_8_ = auVar70._8_8_ + auVar70._8_8_;
        uVar66 = SUB84(dVar67,0);
        auVar60._8_4_ = uVar66;
        auVar60._0_8_ = dVar69;
        uVar68 = (undefined4)((ulonglong)dVar67 >> 0x20);
        auVar60._12_4_ = uVar68;
        auVar47._8_4_ = uVar66;
        auVar47._0_8_ = dVar69;
        auVar47._12_4_ = uVar68;
        auVar55._8_4_ = uVar66;
        auVar55._0_8_ = dVar69;
        auVar55._12_4_ = uVar68;
        auVar70 = blendpd(auVar55,auVar77,2);
        auVar61._0_8_ = auVar60._8_8_ * auVar49._0_8_ - dVar69 * dVar62;
        auVar61._8_8_ = auVar77._0_8_ * dVar62 - auVar47._8_8_ * dVar9;
        auVar49._8_4_ = SUB84(auVar77._8_8_,0);
        auVar49._0_8_ = auVar77._0_8_;
        auVar49._12_4_ = (int)((ulonglong)auVar77._8_8_ >> 0x20);
        auVar56._0_8_ = auVar70._0_8_ * dVar9 - auVar77._0_8_ * auVar65._0_8_;
        auVar56._8_8_ = auVar70._8_8_ * dVar63 - auVar49._8_8_ * auVar65._8_8_;
        auVar65._8_4_ = SUB84(auVar61._8_8_,0);
        auVar65._0_8_ = auVar61._0_8_;
        auVar65._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
        auVar49 = blendpd(auVar61,auVar56,2);
        (pSVar29->PerViewEntry).Position.field0_0x0._s_0.X =
             dVar69 * dVar63 + dVar57 + auVar65._8_8_ + (double)local_298._0_8_;
        (pSVar29->PerViewEntry).Position.field0_0x0._s_0.Y =
             dVar67 * dVar63 + dVar6 + auVar56._0_8_ + (double)local_298._8_8_;
        (pSVar29->PerViewEntry).Position.field0_0x0._s_0.Z =
             auVar77._0_8_ * dVar63 + dVar7 + auVar49._0_8_ + (double)local_288._0_8_;
      }
    }
  }
LAB_14934a796:
  if ((local_390 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_390 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_390 & 4) != 0) {
    FThreadStats::AddMessage(local_398,CycleScopeEnd);
  }
  return local_3b0;
}

// GetViewRelevance @ 1493571d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FNiagaraRendererLights::GetViewRelevance
          (FNiagaraRendererLights *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1,FNiagaraSceneProxy *param_2)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  if ((this->field_0x140 & 2) != 0) {
    bVar5 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)param_2,param_1);
    if ((bVar5) &&
       ((param_1->Family->EngineShowFlags).Particles == 1 &&
        (param_1->Family->EngineShowFlags).Niagara == 1)) {
      uVar6 = 4;
      goto LAB_149357238;
    }
  }
  uVar6 = 0;
LAB_149357238:
  puVar2 = &__return_storage_ptr__->field_0x8;
  uVar4 = *(uint *)puVar2;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0xfb;
  uVar7 = uVar4 & 0xfffffff1 | uVar6;
  puVar3 = &__return_storage_ptr__->field_0x8;
  __return_storage_ptr__->bDynamicRelevance = 0;
  __return_storage_ptr__->bShadowRelevance = 0;
  __return_storage_ptr__->bDrawRelevance = uVar6 >> 2;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       (*(int *)&this->field_0x140 << 0xb ^ uVar7) & 0x1000 ^ uVar7;
  return __return_storage_ptr__;
}

