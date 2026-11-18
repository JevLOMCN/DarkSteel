// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// FNiagaraRendererDecals @ 149333a50

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

FNiagaraRendererDecals * __thiscall
FNiagaraRendererDecals::FNiagaraRendererDecals
          (FNiagaraRendererDecals *this,Type param_1,UNiagaraRendererProperties *param_2,
          FNiagaraEmitterInstance *param_3)

{
  FNiagaraRenderer::FNiagaraRenderer((FNiagaraRenderer *)this,param_1,param_2,param_3);
  this->_padding_ = (longlong)&___7FNiagaraRendererDecals__6B_;
  (this->WeakOwnerComponent).WeakPtr = (FWeakObjectPtr)0x0;
  (this->WeakMaterial).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ActiveDecalProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveDecalProxies).ArrayNum = 0;
  (this->ActiveDecalProxies).ArrayMax = 0;
  return this;
}

// ~FNiagaraRendererDecals @ 1493366c0

void __thiscall FNiagaraRendererDecals::~FNiagaraRendererDecals(FNiagaraRendererDecals *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  
  iVar1 = (this->ActiveDecalProxies).ArrayNum;
  this->_padding_ = (longlong)&___7FNiagaraRendererDecals__6B_;
  if (iVar1 != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveDecalProxies.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererDecals.cpp"
                       ,0x53,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = (this->ActiveDecalProxies).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  puVar3 = (undefined8 *)this->_padding_;
  this->_padding_ = (longlong)&___7FNiagaraRenderer__6B_;
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FRayTracingGeometry::~FRayTracingGeometry((FRayTracingGeometry *)&this->_padding_);
  FRWBuffer::~FRWBuffer((FRWBuffer *)&this->_padding_);
  return;
}

// DestroyRenderState_Concurrent @ 149345490

void __thiscall FNiagaraRendererDecals::DestroyRenderState_Concurrent(FNiagaraRendererDecals *this)

{
  int *piVar1;
  undefined1 local_res8 [32];
  
  ReleaseAllDecals(this);
  if ((this->ActiveDecalProxies).ArrayNum != 0) {
    `FNiagaraRendererDecals::DestroyRenderState_Concurrent'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  piVar1 = &(this->ActiveDecalProxies).ArrayMax;
  (this->ActiveDecalProxies).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ActiveDecalProxies).AllocatorInstance,0,piVar1);
  }
  return;
}

// GenerateDynamicData @ 149348340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNiagaraDynamicDataBase * __thiscall
FNiagaraRendererDecals::GenerateDynamicData
          (FNiagaraRendererDecals *this,FNiagaraSceneProxy *param_1,
          UNiagaraRendererProperties *param_2,FNiagaraEmitterInstance *param_3)

{
  FNiagaraParameterStore *this_00;
  FScriptContainerElement *pFVar1;
  TArray<FDeferredDecalProxy_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FNiagaraSystemInstance *this_01;
  FNiagaraDataBuffer *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [12];
  undefined1 auVar16 [12];
  float fVar17;
  FNiagaraDataSet *pFVar18;
  FNiagaraDataBuffer *pFVar19;
  TQuat<float> TVar20;
  bool bVar21;
  FNiagaraBool FVar22;
  int iVar23;
  int iVar24;
  FNiagaraDynamicDataBase *pFVar25;
  FNiagaraTypeDefinition *pFVar26;
  int *piVar27;
  FScriptContainerElement *pFVar28;
  USceneComponent *pUVar29;
  UClass *pUVar30;
  TTransform<double> *pTVar31;
  UMaterialInterface *pUVar32;
  TArrayView<UMaterialInterface_*_const,int> *pTVar33;
  undefined4 extraout_var;
  longlong lVar34;
  FDeferredDecalProxy *pFVar35;
  FDeferredDecalProxy *pFVar36;
  FString *pFVar37;
  int iVar38;
  wchar_t *pwVar39;
  uint uVar40;
  wchar_t *pwVar41;
  UMaterialInterface *pUVar42;
  float fVar43;
  undefined8 uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 extraout_XMM0_02 [16];
  undefined1 extraout_XMM0_03 [16];
  undefined1 extraout_XMM0_04 [16];
  undefined8 uVar58;
  undefined1 auVar54 [16];
  undefined4 uVar59;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 extraout_XMM0_05 [16];
  undefined1 extraout_XMM0_06 [16];
  undefined1 extraout_XMM0_07 [16];
  undefined1 extraout_XMM0_08 [16];
  undefined1 extraout_XMM0_09 [16];
  undefined1 extraout_XMM0_10 [16];
  undefined1 auVar57 [16];
  float fVar60;
  float fVar61;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar78;
  double dVar79;
  float fVar85;
  float fVar86;
  float fVar88;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  double dVar87;
  double dVar89;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  double dVar99;
  double dVar100;
  undefined1 auVar101 [16];
  double dVar104;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  uint uVar105;
  uint uVar106;
  double dVar107;
  double dVar108;
  double dVar109;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  double dVar112;
  undefined4 uVar113;
  undefined4 uVar114;
  undefined4 uVar115;
  undefined4 uVar116;
  undefined4 uVar117;
  undefined4 uVar118;
  undefined4 uVar119;
  double dVar120;
  double dVar121;
  undefined1 auVar122 [16];
  TQuat<float> TVar123;
  undefined1 auStackY_668 [32];
  int local_618;
  ForAnyElementType local_610;
  undefined8 local_608;
  float local_600;
  longlong local_5f8;
  uint local_5f0;
  int local_5ec;
  int local_5e8;
  FNiagaraSceneProxy *local_5e0;
  char local_5d8;
  uint local_5d4;
  FScriptContainerElement *local_5d0;
  char local_5c8;
  uint local_5c4;
  FScriptContainerElement *local_5c0;
  char local_5b8;
  uint local_5b4;
  FScriptContainerElement *local_5b0;
  undefined4 local_5a8;
  float local_5a4;
  int local_5a0;
  float local_59c;
  UWorld *local_598;
  undefined8 local_590;
  TVector<float>_u_0 local_580;
  TVector<float>_u_0 local_570;
  FNiagaraDataSet *local_560;
  float local_558;
  undefined1 local_548 [12];
  undefined4 uStack_53c;
  undefined8 local_538;
  FNiagaraDataBuffer *local_530;
  TVector<float>_u_0 local_528;
  TRotator<float> local_518;
  undefined8 local_508;
  undefined1 local_4f8 [16];
  UMaterialInterface *local_4e8;
  USceneComponent *local_4e0;
  FNiagaraDataSetReaderFloat<float> local_4d8;
  undefined1 local_4c8 [16];
  double local_4b8;
  double local_4b0;
  double dStack_4a8;
  double local_4a0;
  TQuat<float> local_498;
  FLinearColor_u_0 local_488;
  double local_478;
  double dStack_470;
  double local_468;
  double dStack_460;
  FLinearColor_u_0 local_458;
  FNiagaraDataSet *local_448;
  float local_440;
  UMaterialInterface **local_438;
  undefined8 uStack_430;
  TQuat<float> local_428;
  double local_418;
  double dStack_410;
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  FNiagaraDataSetReaderFloat<FNiagaraPosition> local_3e8;
  FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_> local_3c8;
  FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_> local_3a8;
  FNiagaraDataSetReaderFloat<FLinearColor> local_380;
  double local_358;
  double dStack_350;
  double local_348;
  double local_340;
  double dStack_338;
  double local_330;
  TTransform<double> local_328;
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double dStack_288;
  double local_280;
  double dStack_278;
  double local_270;
  double dStack_268;
  double local_260;
  FString local_258;
  FString local_248;
  FString local_238;
  TArrayView<UMaterialInterface_*_const,int> local_228;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_668;
  pwVar41 = L"";
  local_5e0 = param_1;
  if ((param_3->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParticleDataSet",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                          ,0x3a,L""), bVar21)) {
    pcVar5 = (code *)swi(3);
    pFVar25 = (FNiagaraDynamicDataBase *)(*pcVar5)();
    return pFVar25;
  }
  local_590 = param_3->ParticleDataSet;
  this_01 = param_3->ParentSystemInstance;
  local_530 = local_590->CurrentData;
  if (((local_530 == (FNiagaraDataBuffer *)0x0) || (this_01 == (FNiagaraSystemInstance *)0x0)) ||
     ((local_538 = 0, (param_2->RendererEnabledBinding).ParamMapVariable.Name != (FName)0x0 &&
      ((((pFVar26 = FNiagaraTypeDefinitionHandle::Resolve
                              (&(param_2->RendererEnabledBinding).ParamMapVariable.TypeDefHandle),
         (pFVar26->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0 &&
         (piVar27 = (int *)(**(code **)((param_3->RendererBindings)._padding_ + 0x58))
                                     (&param_3->RendererBindings,
                                      &(param_2->RendererEnabledBinding).ParamMapVariable,0),
         piVar27 != (int *)0x0)) && (*piVar27 != -1)) &&
       ((pFVar28 = (param_3->RendererBindings).ParameterData.AllocatorInstance.Data + *piVar27,
        pFVar28 != (FScriptContainerElement *)0x0 && (*(int *)pFVar28 == 0)))))))) {
    ReleaseAllDecals(this);
  }
  else {
    local_598 = this_01->World;
    if (((local_598 == (UWorld *)0x0) || (local_598->Scene == (FSceneInterface *)0x0)) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("World && World->Scene",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererDecals.cpp"
                            ,0x8f,L""), bVar21)) {
      pcVar5 = (code *)swi(3);
      pFVar25 = (FNiagaraDynamicDataBase *)(*pcVar5)();
      return pFVar25;
    }
    pUVar29 = (USceneComponent *)FWeakObjectPtr::Get(&(this_01->AttachComponent).WeakPtr);
    local_4e0 = pUVar29;
    if ((pUVar29 == (USceneComponent *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("OwnerComponent",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererDecals.cpp"
                            ,0x92,L""), bVar21)) {
      pcVar5 = (code *)swi(3);
      pFVar25 = (FNiagaraDynamicDataBase *)(*pcVar5)();
      return pFVar25;
    }
    local_4f8._8_8_ = pUVar29;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar29 != (USceneComponent *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar29);
    }
    FWeakObjectPtr::operator=
              (&(this->WeakOwnerComponent).WeakPtr,(FObjectPtr)((longlong)local_4f8 + 8));
    if (param_2 == (UNiagaraRendererProperties *)0x0) {
      pFVar37 = GetTypeName<UNiagaraDecalRendererProperties_const_>(&local_238);
      if ((pFVar37->Data).ArrayNum != 0) {
        pwVar41 = (wchar_t *)(pFVar37->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar41);
    }
    pUVar30 = Z_Construct_UClass_UNiagaraDecalRendererProperties_NoRegister();
    iVar24 = (int)pUVar30->_padding_;
    if ((*(int *)(param_2->_padding_ + 0x38) < iVar24) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar24 * 8) !=
        &pUVar30->_padding_)) {
      pFVar37 = GetTypeName<UNiagaraDecalRendererProperties_const_>(&local_248);
      if ((pFVar37->Data).ArrayNum == 0) {
        pwVar39 = L"";
      }
      else {
        pwVar39 = (wchar_t *)(pFVar37->Data).AllocatorInstance.Data;
      }
      pFVar37 = GetFullNameForCastLogError<UNiagaraRendererProperties_const_>(&local_258,param_2);
      if ((pFVar37->Data).ArrayNum != 0) {
        pwVar41 = (wchar_t *)(pFVar37->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar41,pwVar39);
    }
    if (((this->_padding_ & 1) == 0) && ((local_5e0->DynamicData).bUseCullProxy == false)) {
      pTVar31 = FNiagaraSystemInstance::GetLWCSimToWorld(this_01,&local_148,false);
    }
    else {
      pTVar31 = &local_328;
      local_328.Rotation.XY.m128d_f64[0] = (pUVar29->ComponentToWorld).Rotation.XY.m128d_f64[0];
      local_328.Rotation.XY.m128d_f64[1] = (pUVar29->ComponentToWorld).Rotation.XY.m128d_f64[1];
      local_328.Rotation.ZW.m128d_f64[0] = (pUVar29->ComponentToWorld).Rotation.ZW.m128d_f64[0];
      local_328.Rotation.ZW.m128d_f64[1] = (pUVar29->ComponentToWorld).Rotation.ZW.m128d_f64[1];
      local_328.Translation.XY.m128d_f64[0] =
           (pUVar29->ComponentToWorld).Translation.XY.m128d_f64[0];
      local_328.Translation.XY.m128d_f64[1] =
           (pUVar29->ComponentToWorld).Translation.XY.m128d_f64[1];
      local_328.Translation.ZW.m128d_f64[0] =
           (pUVar29->ComponentToWorld).Translation.ZW.m128d_f64[0];
      local_328.Translation.ZW.m128d_f64[1] =
           (pUVar29->ComponentToWorld).Translation.ZW.m128d_f64[1];
      local_328.Scale3D.XY.m128d_f64[0] = (pUVar29->ComponentToWorld).Scale3D.XY.m128d_f64[0];
      local_328.Scale3D.XY.m128d_f64[1] = (pUVar29->ComponentToWorld).Scale3D.XY.m128d_f64[1];
      local_328.Scale3D.ZW.m128d_f64[0] = (pUVar29->ComponentToWorld).Scale3D.ZW.m128d_f64[0];
      local_328.Scale3D.ZW.m128d_f64[1] = (pUVar29->ComponentToWorld).Scale3D.ZW.m128d_f64[1];
    }
    uVar44 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_478 = (pTVar31->Translation).XY.m128d_f64[0];
    dStack_470 = (pTVar31->Translation).XY.m128d_f64[1];
    auVar47 = *(undefined1 (*) [16])(pTVar31->Rotation).XY.m128d_f64;
    auVar90 = *(undefined1 (*) [16])(pTVar31->Rotation).ZW.m128d_f64;
    uVar115 = auVar90._0_4_;
    uVar118 = auVar90._4_4_;
    uVar117 = auVar90._8_4_;
    uVar119 = auVar90._12_4_;
    auVar110 = *(undefined1 (*) [16])(pTVar31->Scale3D).XY.m128d_f64;
    uVar59 = auVar110._0_4_;
    uVar113 = auVar110._4_4_;
    uVar114 = auVar110._8_4_;
    uVar116 = auVar110._12_4_;
    dVar13 = (pTVar31->Scale3D).ZW.m128d_f64[0];
    dVar100 = (pTVar31->Scale3D).ZW.m128d_f64[1];
    local_468 = (pTVar31->Translation).ZW.m128d_f64[0];
    dStack_460 = (pTVar31->Translation).ZW.m128d_f64[1];
    local_600 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_518.Pitch = -90.0;
    local_518.Yaw = 0.0;
    local_518.Roll = 90.0;
    _local_548 = auVar90;
    local_418 = dVar13;
    dStack_410 = dVar100;
    local_408 = auVar47;
    local_3f8 = auVar110;
    UE::Math::TRotator<float>::Quaternion(&local_518,&local_428);
    fVar17 = __real_3f800000;
    local_528._s_0.X = 50.0;
    local_528._s_0.Y = 50.0;
    local_528._s_0.Z = 50.0;
    local_5a8 = 0xffffffff;
    local_5a4 = 1.0;
    local_5a0 = 0;
    if ((int)this->_padding_ == 0) {
      pUVar42 = (UMaterialInterface *)0x0;
    }
    else {
      if (((int)this->_padding_ < 1) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar5 = (code *)swi(3);
        pFVar25 = (FNiagaraDynamicDataBase *)(*pcVar5)();
        return pFVar25;
      }
      pUVar42 = *(UMaterialInterface **)this->_padding_;
    }
    local_5e0 = (FNiagaraSceneProxy *)pUVar42;
    pUVar32 = (UMaterialInterface *)FWeakObjectPtr::Get(&(this->WeakMaterial).WeakPtr);
    if (pUVar42 != pUVar32) {
      local_4e8 = pUVar42;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar42 != (UMaterialInterface *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar42);
      }
      FWeakObjectPtr::operator=(&(this->WeakMaterial).WeakPtr,(FObjectPtr)&local_4e8);
      ReleaseAllDecals(this);
    }
    if ((((0 < (int)param_2[2].OuterEmitterVersion.C) || (0 < param_2[2].AttributeBindings.ArrayNum)
         ) || (0 < (int)param_2[3]._padding_)) || (0 < (int)param_2[3]._padding_)) {
      pcVar5 = *(code **)(this->_padding_ + 0x78);
      pTVar33 = MakeArrayView<TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>_const_&,TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>_>
                          (&local_228,
                           (TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)
                           &this->_padding_);
      local_438 = pTVar33->DataPtr;
      uStack_430 = *(undefined8 *)&pTVar33->ArrayNum;
      (*pcVar5)(this,&param_2[2].OuterEmitterVersion,param_3,&local_438);
    }
    uVar105 = 0;
    this_00 = &param_3->RendererBindings;
    local_5f0 = 0;
    local_610.Data = (FScriptContainerElement *)0x0;
    local_608 = 0;
    FVar22 = FNiagaraParameterStore::GetParameterValueOrDefault<FNiagaraBool>
                       (this_00,(FNiagaraVariableBase *)local_4f8,
                        (FNiagaraBool *)&param_2[2].Platforms.QualityLevelMask);
    iVar24 = *(int *)CONCAT44(extraout_var,FVar22.Value);
    local_5ec = FNiagaraParameterStore::GetParameterValueOrDefault<int>
                          (this_00,&param_2[2].RendererEnabledBinding.ParamMapVariable,
                           (int *)&param_2[1]._padding_);
    pFVar26 = FNiagaraTypeDefinitionHandle::Resolve
                        ((FNiagaraTypeDefinitionHandle *)
                         &param_2[1].Platforms.DeviceProfileStates.ArrayNum);
    iVar23 = FNiagaraTypeDefinition::GetSize(pFVar26);
    if ((iVar23 != 0xc) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Parameter.GetSizeInBytes() == sizeof(T)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                            ,0x1ae,L""), bVar21)) {
      pcVar5 = (code *)swi(3);
      pFVar25 = (FNiagaraDynamicDataBase *)(*pcVar5)();
      return pFVar25;
    }
    piVar27 = (int *)(**(code **)(this_00->_padding_ + 0x58))(this_00,&param_2[1].Platforms,0);
    if (piVar27 != (int *)0x0) {
      iVar23 = *piVar27;
      lVar34 = (longlong)iVar23;
      if (iVar23 != -1) {
        if (((iVar23 < 0) ||
            ((ulonglong)(longlong)(param_3->RendererBindings).ParameterData.ArrayNum < lVar34 + 0xcU
            )) && (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())"
                                       ,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                                       ,0x17f,L""), bVar21)) {
          pcVar5 = (code *)swi(3);
          pFVar25 = (FNiagaraDynamicDataBase *)(*pcVar5)();
          return pFVar25;
        }
        pFVar28 = (param_3->RendererBindings).ParameterData.AllocatorInstance.Data;
        uVar44 = *(undefined8 *)(pFVar28 + lVar34);
        local_600 = *(float *)(pFVar28 + lVar34 + 8);
        local_448 = (FNiagaraDataSet *)uVar44;
        local_440 = local_600;
      }
    }
    local_508 = (FNiagaraDataSet *)uVar44;
    pFVar26 = FNiagaraTypeDefinitionHandle::Resolve
                        ((FNiagaraTypeDefinitionHandle *)&param_2[1].Platforms.LastBuiltFrame);
    iVar23 = FNiagaraTypeDefinition::GetSize(pFVar26);
    if ((iVar23 != 0x10) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Parameter.GetSizeInBytes() == sizeof(T)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                            ,0x1ae,L""), bVar21)) {
      pcVar5 = (code *)swi(3);
      pFVar25 = (FNiagaraDynamicDataBase *)(*pcVar5)();
      return pFVar25;
    }
    piVar27 = (int *)(**(code **)(this_00->_padding_ + 0x58))
                               (this_00,&param_2[1].Platforms.QualityLevelMask,0);
    if (piVar27 != (int *)0x0) {
      iVar23 = *piVar27;
      if (iVar23 != -1) {
        if (((iVar23 < 0) ||
            ((ulonglong)(longlong)(param_3->RendererBindings).ParameterData.ArrayNum <
             (longlong)iVar23 + 0x10U)) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Offset >= 0) && (Offset + sizeof(T) <= ParameterData.Num())",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraParameterStore.h"
                                ,0x17f,L""), bVar21)) {
          pcVar5 = (code *)swi(3);
          pFVar25 = (FNiagaraDynamicDataBase *)(*pcVar5)();
          return pFVar25;
        }
        pFVar28 = (param_3->RendererBindings).ParameterData.AllocatorInstance.Data + iVar23;
        local_428.X = *(float *)pFVar28;
        local_428.Y = *(float *)(pFVar28 + 4);
        local_428.Z = *(float *)(pFVar28 + 8);
        local_428.W = *(float *)(pFVar28 + 0xc);
        local_218 = local_428.X;
        fStack_214 = local_428.Y;
        fStack_210 = local_428.Z;
        fStack_20c = local_428.W;
      }
    }
    fVar60 = local_428.Y * local_428.Y + local_428.X * local_428.X;
    fVar72 = local_428.X * local_428.X + local_428.Y * local_428.Y;
    fVar74 = local_428.W * local_428.W + local_428.Z * local_428.Z;
    fVar76 = local_428.Z * local_428.Z + local_428.W * local_428.W;
    auVar92._0_4_ = fVar74 + fVar60;
    auVar92._4_4_ = fVar76 + fVar72;
    auVar92._8_4_ = fVar60 + fVar74;
    auVar92._12_4_ = fVar72 + fVar76;
    auVar45 = sqrtps(auVar92,auVar92);
    auVar45 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar45);
    auVar122._0_4_ =
         (uint)(auVar45._0_4_ * local_428.X) &
         -(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar92._0_4_);
    auVar122._4_4_ = (uint)(auVar45._4_4_ * local_428.Y) & -(uint)(_UNK_1506895d4 <= auVar92._4_4_);
    auVar122._8_4_ = (uint)(auVar45._8_4_ * local_428.Z) & -(uint)(_UNK_1506895d8 <= auVar92._8_4_);
    auVar122._12_4_ =
         (uint)(auVar45._12_4_ * local_428.W) & -(uint)(_UNK_1506895dc <= auVar92._12_4_);
    auVar45._0_4_ =
         ~-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 <= auVar92._0_4_) &
         GlobalVectorConstants::Float0001.m128_u32[0];
    auVar45._4_4_ =
         ~-(uint)(_UNK_1506895d4 <= auVar92._4_4_) & GlobalVectorConstants::Float0001.m128_u32[1];
    auVar45._8_4_ =
         ~-(uint)(_UNK_1506895d8 <= auVar92._8_4_) & GlobalVectorConstants::Float0001.m128_u32[2];
    auVar45._12_4_ =
         ~-(uint)(_UNK_1506895dc <= auVar92._12_4_) & GlobalVectorConstants::Float0001.m128_u32[3];
    TVar123 = (TQuat<float>)(auVar122 | auVar45);
    FNiagaraParameterStore::GetParameterValueOrDefault<UE::Math::TVector<float>_>
              (this_00,(TVector<float> *)&local_570._s_0,
               &param_2[1].RendererEnabledBinding.ParamMapVariable,(TVector<float> *)&local_528._s_0
              );
    FNiagaraParameterStore::GetParameterValueOrDefault<FLinearColor>
              (this_00,(FLinearColor *)&local_458._s_0,(FNiagaraVariableBase *)&param_2[2].Platforms
               ,&FLinearColor::White);
    fVar60 = FNiagaraParameterStore::GetParameterValueOrDefault<float>
                       (this_00,(FNiagaraVariableBase *)&param_2[1].OuterEmitterVersion.C,&local_5a4
                       );
    local_59c = fVar60;
    local_5e8 = FNiagaraParameterStore::GetParameterValueOrDefault<int>
                          (this_00,(FNiagaraVariableBase *)&param_2[2]._padding_,&local_5a0);
    pFVar19 = local_530;
    if (*(char *)((longlong)&param_2[1]._padding_ + 4) == '\0') {
      uVar106 = local_530->NumInstances;
      if ((int)uVar106 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar106);
      }
      if (local_608._4_4_ < (int)uVar106) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xd0,0x10,uVar106,&local_610,(int)local_608,(int *)((longlong)&local_608 + 4));
      }
      pFVar18 = local_590;
      FNiagaraDataSetAccessorFloat<FNiagaraPosition>::GetReader
                ((FNiagaraDataSetAccessorFloat<FNiagaraPosition> *)
                 &param_2[3].Platforms.DeviceProfileStates.ArrayNum,&local_3e8,local_590);
      FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_>::
      FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_>
                (&local_3a8,pFVar18->CurrentData,
                 *(bool *)&param_2[3].Platforms.CVarConditions.AllocatorInstance.Data,
                 *(int *)((longlong)&param_2[3].Platforms.CVarConditions.AllocatorInstance.Data + 4)
                );
      FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_>::GetReader
                ((FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_> *)
                 &param_2[3].Platforms.CVarConditions.ArrayNum,&local_3c8,pFVar18);
      FNiagaraDataSetReaderFloat<FLinearColor>::FNiagaraDataSetReaderFloat<FLinearColor>
                (&local_380,pFVar18->CurrentData,(bool)param_2[3].Platforms.field_0x2c,
                 param_2[3].SortOrderHint);
      FNiagaraDataSetAccessorFloat<float>::GetReader
                ((FNiagaraDataSetAccessorFloat<float> *)&param_2[3].Platforms.QualityLevelMask,
                 &local_4d8,pFVar18);
      fVar17 = __real_3f000000;
      pFVar3 = pFVar18->CurrentData;
      uVar40 = 0;
      uVar106 = param_2[3].Platforms.LastBuiltFrame;
      local_5c8 = '\0';
      local_5c4 = 0;
      local_5c0 = (FScriptContainerElement *)0x0;
      if ((pFVar3 != (FNiagaraDataBuffer *)0x0) && (uVar106 != 0xffffffff)) {
        local_5c8 = '\x01';
        local_5c0 = (pFVar3->Int32Data).AllocatorInstance.Data + uVar106 * pFVar3->Int32Stride;
        local_5c4 = pFVar3->NumInstances;
      }
      local_5b8 = '\0';
      local_5b4 = 0;
      local_5b0 = (FScriptContainerElement *)0x0;
      if ((pFVar3 != (FNiagaraDataBuffer *)0x0) && (*(int *)&param_2[3].MotionVectorSetting != -1))
      {
        local_5b8 = '\x01';
        local_5b0 = (pFVar3->Int32Data).AllocatorInstance.Data +
                    *(int *)&param_2[3].MotionVectorSetting * pFVar3->Int32Stride;
        local_5b4 = pFVar3->NumInstances;
      }
      uVar106 = param_2[3].RendererEnabledBinding.RootName.ComparisonIndex.Value;
      local_5d8 = '\0';
      local_5d4 = 0;
      local_5d0 = (FScriptContainerElement *)0x0;
      if ((pFVar3 != (FNiagaraDataBuffer *)0x0) && (uVar106 != 0xffffffff)) {
        local_5d8 = '\x01';
        local_5d0 = (pFVar3->Int32Data).AllocatorInstance.Data + uVar106 * pFVar3->Int32Stride;
        local_5d4 = pFVar3->NumInstances;
      }
      if (pFVar19->NumInstances != 0) {
        iVar24 = -(uint)(iVar24 != 0);
        local_5f8 = 0;
        fVar60 = ___xmm_322bcc77322bcc77322bcc77322bcc77;
        fVar72 = _UNK_1506895d4;
        fVar74 = _UNK_1506895d8;
        fVar76 = _UNK_1506895dc;
        do {
          lVar34 = (longlong)(int)uVar40;
          iVar23 = iVar24;
          if ((local_5b8 != '\0') && ((int)uVar40 < (int)local_5b4)) {
            iVar23 = *(int *)(local_5b0 + lVar34 * 4);
          }
          iVar38 = local_5ec;
          if ((local_5d8 != '\0') && ((int)uVar40 < (int)local_5d4)) {
            iVar38 = *(int *)(local_5d0 + lVar34 * 4);
          }
          if ((iVar23 != 0) && (iVar38 == (int)param_2[1]._padding_)) {
            if ((local_3e8.bIsValid == false) || (local_3e8.NumInstances <= (int)uVar40)) {
              local_558 = local_600;
              local_560 = (FNiagaraDataSet *)uVar44;
            }
            else {
              FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
                        (&local_3e8,(FNiagaraPosition *)&local_560,uVar40);
            }
            fVar43 = local_558;
            local_590 = local_560;
            TVar20 = TVar123;
            if ((local_3a8.bIsValid != false) && ((int)uVar40 < local_3a8.NumInstances)) {
              FNiagaraDataSetReaderFloat<UE::Math::TQuat<float>_>::Get(&local_3a8,&local_498,uVar40)
              ;
              TVar20 = local_498;
            }
            local_498 = TVar20;
            fVar78 = local_498.X;
            fVar85 = local_498.Y;
            fVar86 = local_498.Z;
            fVar88 = local_498.W;
            auVar8._4_4_ = uVar118;
            auVar8._0_4_ = uVar115;
            auVar8._8_4_ = uVar117;
            auVar8._12_4_ = uVar119;
            auVar90 = blendpd(local_408,auVar8,2);
            fVar61 = fVar85 * fVar85 + fVar78 * fVar78;
            fVar73 = fVar78 * fVar78 + fVar85 * fVar85;
            fVar75 = fVar88 * fVar88 + fVar86 * fVar86;
            fVar77 = fVar86 * fVar86 + fVar88 * fVar88;
            auVar46._0_4_ = fVar75 + fVar61;
            auVar46._4_4_ = fVar77 + fVar73;
            auVar46._8_4_ = fVar61 + fVar75;
            auVar46._12_4_ = fVar73 + fVar77;
            auVar101._0_8_ = (double)CONCAT44(uVar113,uVar59);
            auVar101._8_4_ = uVar114;
            auVar101._12_4_ = uVar116;
            dVar108 = (double)CONCAT44(uVar119,uVar117);
            auVar47 = sqrtps(auVar46,auVar46);
            auVar110 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar47);
            local_348 = (double)fVar43;
            dVar100 = local_348 * local_418;
            dVar121 = dStack_410 * 0.0;
            dVar13 = local_408._8_8_;
            local_358 = (double)(float)local_590;
            dStack_350 = (double)local_590._4_4_;
            dVar99 = auVar101._0_8_ * local_358;
            dVar104 = auVar101._8_8_ * dStack_350;
            auVar93._8_4_ = SUB84(dVar104,0);
            auVar93._0_8_ = dVar99;
            uVar59 = (undefined4)((ulonglong)dVar104 >> 0x20);
            auVar93._12_4_ = uVar59;
            auVar48._8_4_ = uVar115;
            auVar48._0_8_ = dVar13;
            auVar48._12_4_ = uVar118;
            auVar62._8_4_ = SUB84(dVar104,0);
            auVar62._0_8_ = dVar99;
            auVar62._12_4_ = uVar59;
            dVar107 = local_408._0_8_;
            auVar6._8_4_ = SUB84(dVar121,0);
            auVar6._0_8_ = dVar100;
            auVar6._12_4_ = (int)((ulonglong)dVar121 >> 0x20);
            auVar47 = blendpd(auVar62,auVar6,2);
            auVar94._0_8_ = auVar93._8_8_ * dVar107 - dVar13 * dVar99;
            auVar94._8_8_ = dVar100 * dVar13 - auVar48._8_8_ * dVar104;
            auVar63._0_8_ =
                 auVar47._0_8_ * (double)CONCAT44(uVar118,uVar115) - auVar90._0_8_ * dVar100;
            auVar63._8_8_ =
                 auVar47._8_8_ * (double)CONCAT44(uVar119,uVar117) - auVar90._8_8_ * dVar121;
            auVar47 = blendpd(auVar94,auVar63,2);
            dVar121 = auVar94._8_8_ + auVar94._8_8_;
            dVar11 = auVar63._0_8_ + auVar63._0_8_;
            uVar59 = SUB84(dVar11,0);
            uVar113 = (undefined4)((ulonglong)dVar11 >> 0x20);
            auVar95._0_8_ = auVar47._0_8_ + auVar47._0_8_;
            auVar95._8_8_ = auVar47._8_8_ + auVar47._8_8_;
            auVar80._8_4_ = uVar59;
            auVar80._0_8_ = dVar121;
            auVar80._12_4_ = uVar113;
            auVar49._8_4_ = uVar59;
            auVar49._0_8_ = dVar121;
            auVar49._12_4_ = uVar113;
            auVar64._8_4_ = uVar59;
            auVar64._0_8_ = dVar121;
            auVar64._12_4_ = uVar113;
            auVar47 = blendpd(auVar64,auVar95,2);
            auVar81._0_8_ = auVar80._8_8_ * dVar107 - dVar121 * dVar13;
            auVar81._8_8_ =
                 auVar95._0_8_ * dVar13 - auVar49._8_8_ * (double)CONCAT44(uVar118,uVar115);
            auVar50._8_4_ = SUB84(auVar95._8_8_,0);
            auVar50._0_8_ = auVar95._0_8_;
            auVar50._12_4_ = (int)((ulonglong)auVar95._8_8_ >> 0x20);
            auVar65._0_8_ = auVar47._0_8_ * (double)local_548._0_8_ - auVar95._0_8_ * auVar90._0_8_;
            auVar65._8_8_ = auVar47._8_8_ * stack0xfffffffffffffac0 - auVar50._8_8_ * auVar90._8_8_;
            auVar51._8_4_ = SUB84(auVar81._8_8_,0);
            auVar51._0_8_ = auVar81._0_8_;
            auVar51._12_4_ = (int)((ulonglong)auVar81._8_8_ >> 0x20);
            auVar47 = blendpd(auVar81,auVar65,2);
            dVar121 = dVar121 * dVar108 + dVar99 + auVar51._8_8_ + local_478;
            dVar11 = dVar11 * (double)CONCAT44(uVar119,uVar117) + dVar104 + auVar65._0_8_ +
                     dStack_470;
            uVar115 = SUB84(dVar11,0);
            uVar59 = (undefined4)((ulonglong)dVar11 >> 0x20);
            local_4b8 = auVar95._0_8_ * dVar108 + dVar100 + auVar47._0_8_ + local_468;
            local_4c8._8_4_ = uVar115;
            local_4c8._0_8_ = dVar121;
            local_4c8._12_4_ = uVar59;
            auVar91._0_8_ =
                 (double)(float)((uint)(auVar110._0_4_ * fVar78) & -(uint)(fVar60 <= auVar46._0_4_)
                                | ~-(uint)(fVar60 <= auVar46._0_4_) &
                                  GlobalVectorConstants::Float0001.m128_u32[0]);
            dVar100 = (double)(float)((uint)(auVar110._4_4_ * fVar85) &
                                      -(uint)(fVar72 <= auVar46._4_4_) |
                                     ~-(uint)(fVar72 <= auVar46._4_4_) &
                                     GlobalVectorConstants::Float0001.m128_u32[1]);
            auVar91._8_4_ = SUB84(dVar100,0);
            auVar91._12_4_ = (int)((ulonglong)dVar100 >> 0x20);
            dVar79 = (double)(float)((uint)(auVar110._8_4_ * fVar86) &
                                     -(uint)(fVar74 <= auVar46._8_4_) |
                                    ~-(uint)(fVar74 <= auVar46._8_4_) &
                                    GlobalVectorConstants::Float0001.m128_u32[2]);
            dVar87 = auVar91._8_8_;
            dVar104 = (double)(float)((uint)(auVar110._12_4_ * fVar88) &
                                      -(uint)(fVar76 <= auVar46._12_4_) |
                                     ~-(uint)(fVar76 <= auVar46._12_4_) &
                                     GlobalVectorConstants::Float0001.m128_u32[3]);
            auVar52._8_4_ = uVar117;
            auVar52._0_8_ = dVar108;
            auVar52._12_4_ = uVar119;
            auVar66._8_4_ = SUB84(dVar104,0);
            auVar66._0_8_ = dVar79;
            auVar66._12_4_ = (int)((ulonglong)dVar104 >> 0x20);
            auVar53._8_4_ = SUB84(auVar91._0_8_,0);
            auVar53._0_8_ = dVar87;
            auVar53._12_4_ = (int)((ulonglong)auVar91._0_8_ >> 0x20);
            dVar11 = dVar107 * dVar104 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                     dVar108 * auVar91._0_8_ +
                     dVar79 * dVar13 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                     dVar87 * (double)local_548._0_8_ *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
            dVar99 = dVar107 * dVar79 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                     auVar52._8_8_ * dVar100 +
                     auVar66._8_8_ * dVar13 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                     auVar53._8_8_ * (double)local_548._0_8_ *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
            uVar114 = SUB84(dVar99,0);
            uVar116 = (undefined4)((ulonglong)dVar99 >> 0x20);
            dVar108 = dVar107 * dVar87 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                      dVar108 * dVar79 +
                      auVar91._0_8_ * dVar13 *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                      dVar104 * (double)local_548._0_8_ *
                      GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
            dVar13 = dVar107 * auVar91._0_8_ *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                     (double)CONCAT44(uVar119,uVar117) * dVar104 +
                     dVar100 * dVar13 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                     dVar79 * (double)local_548._0_8_ *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
            uVar118 = SUB84(dVar13,0);
            uVar113 = (undefined4)((ulonglong)dVar13 >> 0x20);
            if ((local_3c8.bIsValid == false) || (local_3c8.NumInstances <= (int)uVar40)) {
              local_580._0_8_ = CONCAT44(local_570._s_0.Y,local_570._s_0.X);
              local_580._s_0.Z = local_570._s_0.Z;
            }
            else {
              FNiagaraDataSetReaderFloat<UE::Math::TVector<float>_>::Get
                        (&local_3c8,(TVector<float> *)&local_580._s_0,uVar40);
            }
            dVar100 = (double)(local_580._s_0.X * fVar17);
            dVar13 = (double)(local_580._s_0.Y * fVar17);
            dVar107 = (double)(local_580._s_0.Z * fVar17);
            if ((local_380.bIsValid == false) || (local_380.NumInstances <= (int)uVar40)) {
              local_488._0_8_ = local_458._0_8_;
              local_488._8_8_ = local_458._8_8_;
            }
            else {
              FNiagaraDataSetReaderFloat<FLinearColor>::Get
                        (&local_380,(FLinearColor *)&local_488._s_0,uVar40);
            }
            fVar43 = local_59c;
            if ((local_4d8.bIsValid != false) && ((int)uVar40 < local_4d8.NumInstances)) {
              fVar43 = FNiagaraDataSetReaderFloat<float>::Get(&local_4d8,uVar40);
            }
            if ((local_5c8 == '\0') || ((int)local_5c4 <= (int)uVar40)) {
              local_618 = local_5e8;
            }
            else {
              local_618 = *(int *)(local_5c0 + lVar34 * 4);
            }
            iVar23 = (int)local_608;
            if ((int)local_608 == local_608._4_4_) {
              iVar23 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x10d0,&local_610,(int *)((longlong)&local_608 + 4));
            }
            local_608 = CONCAT44(local_608._4_4_,iVar23 + 1);
            pFVar28 = local_610.Data + (longlong)iVar23 * 0xd0;
            DefaultConstructItems<FDeferredDecalUpdateParams,int>(pFVar28,1);
            uVar58 = extraout_XMM0._8_8_;
            if ((int)uVar105 < (this->ActiveDecalProxies).ArrayNum) {
              uVar106 = 0;
              if ((int)uVar105 < (this->ActiveDecalProxies).ArrayNum) {
                uVar106 = ~uVar105 >> 0x1f;
              }
              if (uVar106 == 0) {
                bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                uVar58 = extraout_XMM0_00._8_8_;
                if (bVar21) {
                  pcVar5 = (code *)swi(3);
                  pFVar25 = (FNiagaraDynamicDataBase *)(*pcVar5)();
                  return pFVar25;
                }
              }
              *(undefined8 *)(pFVar28 + 0x60) =
                   *(undefined8 *)((this->ActiveDecalProxies).AllocatorInstance.Data + local_5f8);
              pFVar28[0xcc] = (FScriptContainerElement)0x1;
              local_5f0 = uVar105;
            }
            else {
              pFVar35 = ::operator_new(0xe0);
              uVar58 = extraout_XMM0_01._8_8_;
              pFVar36 = (FDeferredDecalProxy *)0x0;
              if (pFVar35 != (FDeferredDecalProxy *)0x0) {
                pFVar36 = FDeferredDecalProxy::FDeferredDecalProxy
                                    (pFVar35,pUVar29,(UMaterialInterface *)local_5e0);
                uVar58 = extraout_XMM0_02._8_8_;
              }
              pFVar1 = pFVar28 + 0x60;
              pFVar28[0xcc] = (FScriptContainerElement)0x0;
              pTVar2 = &this->ActiveDecalProxies;
              *(FDeferredDecalProxy **)pFVar1 = pFVar36;
              pFVar4 = (pTVar2->AllocatorInstance).Data;
              if ((pFVar4 <= pFVar1) &&
                 (pFVar1 < pFVar4 + (longlong)(this->ActiveDecalProxies).ArrayMax * 8)) {
                bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                uVar58 = extraout_XMM0_03._8_8_;
                if (bVar21) {
                  pcVar5 = (code *)swi(3);
                  pFVar25 = (FNiagaraDynamicDataBase *)(*pcVar5)();
                  return pFVar25;
                }
              }
              iVar23 = (this->ActiveDecalProxies).ArrayNum;
              piVar27 = &(this->ActiveDecalProxies).ArrayMax;
              if (iVar23 == *piVar27) {
                iVar23 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&pTVar2->AllocatorInstance,piVar27);
                uVar58 = extraout_XMM0_04._8_8_;
              }
              (this->ActiveDecalProxies).ArrayNum = iVar23 + 1;
              *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar23 * 8) =
                   *(undefined8 *)pFVar1;
              pUVar29 = local_4e0;
            }
            auVar15._4_8_ = uVar58;
            auVar15._0_4_ = (int)((ulonglong)dVar121 >> 0x20);
            auVar54._0_8_ = auVar15._0_8_ << 0x20;
            auVar54._8_4_ = uVar115;
            auVar54._12_4_ = uVar59;
            uStack_1e0 = auVar54._8_8_;
            local_1f8._8_4_ = uVar118;
            local_1f8._0_8_ = dVar108;
            local_1f8._12_4_ = uVar113;
            auVar14._8_4_ = uVar114;
            auVar14._0_8_ = dVar11;
            auVar14._12_4_ = uVar116;
            *(undefined1 (*) [16])pFVar28 = auVar14;
            local_5f0 = local_5f0 + 1;
            local_5f8 = local_5f8 + 8;
            auVar12._8_4_ = uVar118;
            auVar12._0_8_ = dVar108;
            auVar12._12_4_ = uVar113;
            *(undefined1 (*) [16])(pFVar28 + 0x10) = auVar12;
            fVar61 = __real_3f800000;
            auVar9._8_4_ = uVar115;
            auVar9._0_8_ = dVar121;
            auVar9._12_4_ = uVar59;
            *(undefined1 (*) [16])(pFVar28 + 0x68) = auVar9;
            *(double *)(pFVar28 + 0x20) = dVar121;
            *(undefined8 *)(pFVar28 + 0x28) = uStack_1e0;
            *(double *)(pFVar28 + 0x30) = local_4b8;
            *(undefined8 *)(pFVar28 + 0x38) = 0;
            *(double *)(pFVar28 + 0x40) = dVar100;
            *(double *)(pFVar28 + 0x48) = dVar13;
            *(double *)(pFVar28 + 0x50) = dVar107;
            *(undefined8 *)(pFVar28 + 0x58) = 0;
            uStack_1b0 = 0;
            dStack_2b0 = (double)CONCAT44((uint)((ulonglong)dVar100 >> 0x20) &
                                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                          SUB84(dVar100,0) &
                                          (uint)__xmm_7fffffffffffffff7fffffffffffffff);
            local_208._8_4_ = uVar114;
            local_208._0_8_ = dVar11;
            local_208._12_4_ = uVar116;
            uVar105 = SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
            uVar106 = (uint)((ulonglong)dVar13 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
            if (dStack_2b0 <= (double)CONCAT44(uVar106,uVar105)) {
              dStack_2b0 = (double)CONCAT44(uVar106,uVar105);
            }
            local_1d8 = local_4b8;
            uStack_1d0 = 0;
            dVar108 = (double)CONCAT44((uint)((ulonglong)dVar107 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar107,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff);
            local_2c8._8_4_ = uVar115;
            local_2c8._0_8_ = dVar121;
            local_2c8._12_4_ = uVar59;
            if (dStack_2b0 <= dVar108) {
              dStack_2b0 = dVar108;
            }
            dStack_2b0 = dStack_2b0 + dStack_2b0;
            *(double *)(pFVar28 + 0x78) = local_4b8;
            *(double *)(pFVar28 + 0x80) = dStack_2b0;
            local_2b8 = local_4b8;
            *(double *)(pFVar28 + 0x88) = dStack_2b0;
            *(double *)(pFVar28 + 0x90) = dStack_2b0;
            *(double *)(pFVar28 + 0x98) = dStack_2b0;
            fVar76 = _UNK_1506895dc;
            fVar74 = _UNK_1506895d8;
            fVar72 = _UNK_1506895d4;
            fVar60 = ___xmm_322bcc77322bcc77322bcc77322bcc77;
            fVar73 = fVar61 - fVar43;
            if (fVar61 <= fVar61 - fVar43) {
              fVar73 = fVar61;
            }
            dVar108 = local_598->TimeSeconds;
            *(undefined8 *)(pFVar28 + 0xa4) = 0x3f800000;
            if (fVar73 <= __real_00000000) {
              fVar73 = __real_00000000;
            }
            *(float *)(pFVar28 + 0xa0) = (float)(dVar108 - (double)fVar73);
            *(undefined4 *)(pFVar28 + 0xb4) = *(undefined4 *)((longlong)&param_2[1]._padding_ + 4);
            *(int *)(pFVar28 + 0xb8) = local_618;
            *(undefined8 *)(pFVar28 + 0xbc) = local_488._0_8_;
            *(undefined8 *)(pFVar28 + 0xc4) = local_488._8_8_;
            uVar59 = local_3f8._0_4_;
            uVar113 = local_3f8._4_4_;
            uVar114 = local_3f8._8_4_;
            uVar116 = local_3f8._12_4_;
            uVar115 = local_548._0_4_;
            uVar118 = local_548._4_4_;
            uVar117 = local_548._8_4_;
            uVar119 = uStack_53c;
            local_2a8 = dStack_2b0;
            dStack_2a0 = dStack_2b0;
            local_298 = dStack_2b0;
            local_1e8 = dVar121;
            local_1c8 = dVar100;
            dStack_1c0 = dVar13;
            local_1b8 = dVar107;
            uVar105 = local_5f0;
          }
          uVar40 = uVar40 + 1;
        } while (uVar40 < local_530->NumInstances);
      }
    }
    else {
      uVar105 = 0;
      if ((iVar24 != 0) && (local_5ec == (int)param_2[1]._padding_)) {
        local_330 = (double)local_600;
        local_340 = (double)(float)local_508;
        dStack_338 = (double)local_508._4_4_;
        dVar121 = auVar110._0_8_ * local_340;
        dVar108 = auVar110._8_8_ * dStack_338;
        uVar59 = (undefined4)((ulonglong)dVar108 >> 0x20);
        auVar102._0_8_ = local_330 * dVar13;
        auVar102._8_8_ = dVar100 * 0.0;
        auVar92 = blendpd(auVar47,auVar90,2);
        dVar11 = auVar90._0_8_;
        dVar13 = auVar47._8_8_;
        auVar96._8_4_ = SUB84(dVar108,0);
        auVar96._0_8_ = dVar121;
        auVar96._12_4_ = uVar59;
        auVar110._8_4_ = uVar115;
        auVar110._0_8_ = dVar13;
        auVar110._12_4_ = uVar118;
        dVar99 = auVar47._0_8_;
        auVar67._8_4_ = SUB84(dVar108,0);
        auVar67._0_8_ = dVar121;
        auVar67._12_4_ = uVar59;
        auVar97._0_8_ = auVar96._8_8_ * dVar99 - dVar13 * dVar121;
        auVar97._8_8_ = auVar102._0_8_ * dVar13 - auVar110._8_8_ * dVar108;
        auVar47 = blendpd(auVar67,auVar102,2);
        dVar107 = auVar90._8_8_;
        auVar111._8_4_ = uVar117;
        auVar111._0_8_ = dVar107;
        auVar111._12_4_ = uVar119;
        auVar68._0_8_ = auVar47._0_8_ * dVar11 - auVar92._0_8_ * auVar102._0_8_;
        auVar68._8_8_ = auVar47._8_8_ * dVar107 - auVar92._8_8_ * auVar102._8_8_;
        auVar47._8_4_ = SUB84(auVar97._8_8_,0);
        auVar47._0_8_ = auVar97._0_8_;
        auVar47._12_4_ = (int)((ulonglong)auVar97._8_8_ >> 0x20);
        dVar100 = auVar47._8_8_ + auVar47._8_8_;
        dVar104 = auVar68._0_8_ + auVar68._0_8_;
        auVar47 = blendpd(auVar97,auVar68,2);
        auVar82._8_4_ = SUB84(dVar104,0);
        auVar82._0_8_ = dVar100;
        uVar59 = (undefined4)((ulonglong)dVar104 >> 0x20);
        auVar82._12_4_ = uVar59;
        auVar69._8_4_ = SUB84(dVar104,0);
        auVar69._0_8_ = dVar100;
        auVar69._12_4_ = uVar59;
        auVar98._0_8_ = auVar47._0_8_ + auVar47._0_8_;
        auVar98._8_8_ = auVar47._8_8_ + auVar47._8_8_;
        auVar47 = blendpd(auVar69,auVar98,2);
        auVar83._0_8_ = auVar82._8_8_ * dVar99 - dVar13 * dVar100;
        auVar83._8_8_ = auVar98._0_8_ * dVar13 - dVar11 * dVar104;
        auVar90._8_4_ = SUB84(auVar83._8_8_,0);
        auVar90._0_8_ = auVar83._0_8_;
        auVar90._12_4_ = (int)((ulonglong)auVar83._8_8_ >> 0x20);
        auVar70._0_8_ = auVar47._0_8_ * dVar11 - auVar92._0_8_ * auVar98._0_8_;
        auVar70._8_8_ = auVar47._8_8_ * dVar107 - auVar92._8_8_ * auVar98._8_8_;
        auVar47 = blendpd(auVar83,auVar70,2);
        dVar109 = dVar107 * dVar100 + dVar121 + auVar90._8_8_ + local_478;
        dVar112 = auVar111._8_8_ * dVar104 + dVar108 + auVar70._0_8_ + dStack_470;
        dVar89 = (double)TVar123.X;
        local_4a0 = dVar107 * auVar98._0_8_ + auVar102._0_8_ + auVar47._0_8_ + local_468;
        dVar79 = (double)TVar123.Z;
        dVar100 = (double)TVar123.Y;
        dVar104 = (double)TVar123.W;
        auVar84._8_4_ = SUB84(dVar100,0);
        auVar84._0_8_ = dVar89;
        auVar84._12_4_ = (int)((ulonglong)dVar100 >> 0x20);
        auVar103._8_4_ = SUB84(dVar104,0);
        auVar103._0_8_ = dVar79;
        uVar59 = (undefined4)((ulonglong)dVar104 >> 0x20);
        auVar103._12_4_ = uVar59;
        dVar87 = auVar84._8_8_;
        auVar55._8_4_ = uVar117;
        auVar55._0_8_ = dVar107;
        auVar55._12_4_ = uVar119;
        auVar71._8_4_ = SUB84(dVar104,0);
        auVar71._0_8_ = dVar79;
        auVar71._12_4_ = uVar59;
        local_548._8_4_ = uVar115;
        local_548._0_8_ = dVar11;
        uStack_53c = uVar118;
        auVar56._8_4_ = SUB84(dVar89,0);
        auVar56._0_8_ = dVar87;
        auVar56._12_4_ = (int)((ulonglong)dVar89 >> 0x20);
        dVar108 = dVar99 * auVar103._8_8_ *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar107 * dVar89
                  + dVar79 * dVar13 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                  dVar87 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar121 = dVar99 * dVar79 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
                  + auVar55._8_8_ * dVar100 +
                  auVar71._8_8_ * dVar13 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                  auVar56._8_8_ * stack0xfffffffffffffac0 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        uVar118 = SUB84(dVar121,0);
        uVar113 = (undefined4)((ulonglong)dVar121 >> 0x20);
        dVar120 = (double)(local_570._s_0.Z * __real_3f000000);
        dVar121 = dVar99 * dVar87 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
                  + dVar107 * dVar79 +
                  dVar89 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
                  + auVar103._8_8_ * dVar11 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar13 = dVar99 * dVar89 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 dVar107 * dVar104 +
                 dVar100 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
                 + dVar79 * stack0xfffffffffffffac0 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        uVar115 = SUB84(dVar13,0);
        uVar59 = (undefined4)((ulonglong)dVar13 >> 0x20);
        dVar100 = (double)(local_570._s_0.X * __real_3f000000);
        dVar13 = (double)(local_570._s_0.Y * __real_3f000000);
        iVar24 = (int)local_608;
        local_4b0 = dVar109;
        dStack_4a8 = dVar112;
        if ((int)local_608 == local_608._4_4_) {
          iVar24 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10d0,&local_610,(int *)((longlong)&local_608 + 4));
        }
        local_608 = CONCAT44(local_608._4_4_,iVar24 + 1);
        pFVar28 = local_610.Data + (longlong)iVar24 * 0xd0;
        DefaultConstructItems<FDeferredDecalUpdateParams,int>(pFVar28,1);
        uVar44 = extraout_XMM0_05._8_8_;
        if ((this->ActiveDecalProxies).ArrayNum < 1) {
          pFVar35 = ::operator_new(0xe0);
          uVar44 = extraout_XMM0_07._8_8_;
          pFVar36 = (FDeferredDecalProxy *)0x0;
          if (pFVar35 != (FDeferredDecalProxy *)0x0) {
            pFVar36 = FDeferredDecalProxy::FDeferredDecalProxy
                                (pFVar35,pUVar29,(UMaterialInterface *)local_5e0);
            uVar44 = extraout_XMM0_08._8_8_;
          }
          pFVar1 = pFVar28 + 0x60;
          pFVar28[0xcc] = (FScriptContainerElement)0x0;
          pTVar2 = &this->ActiveDecalProxies;
          *(FDeferredDecalProxy **)pFVar1 = pFVar36;
          pFVar4 = (pTVar2->AllocatorInstance).Data;
          if ((pFVar4 <= pFVar1) &&
             (pFVar1 < pFVar4 + (longlong)(this->ActiveDecalProxies).ArrayMax * 8)) {
            bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            uVar44 = extraout_XMM0_09._8_8_;
            if (bVar21) {
              pcVar5 = (code *)swi(3);
              pFVar25 = (FNiagaraDynamicDataBase *)(*pcVar5)();
              return pFVar25;
            }
          }
          iVar24 = (this->ActiveDecalProxies).ArrayNum;
          piVar27 = &(this->ActiveDecalProxies).ArrayMax;
          if (iVar24 == *piVar27) {
            iVar24 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar2->AllocatorInstance,piVar27);
            uVar44 = extraout_XMM0_10._8_8_;
          }
          (this->ActiveDecalProxies).ArrayNum = iVar24 + 1;
          *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar24 * 8) =
               *(undefined8 *)pFVar1;
        }
        else {
          if ((this->ActiveDecalProxies).ArrayNum < 1) {
            bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            uVar44 = extraout_XMM0_06._8_8_;
            if (bVar21) {
              pcVar5 = (code *)swi(3);
              pFVar25 = (FNiagaraDynamicDataBase *)(*pcVar5)();
              return pFVar25;
            }
          }
          *(undefined8 *)(pFVar28 + 0x60) =
               *(undefined8 *)(this->ActiveDecalProxies).AllocatorInstance.Data;
          pFVar28[0xcc] = (FScriptContainerElement)0x1;
        }
        auVar10._8_4_ = uVar118;
        auVar10._0_8_ = dVar108;
        auVar10._12_4_ = uVar113;
        *(undefined1 (*) [16])pFVar28 = auVar10;
        uVar105 = 1;
        auVar7._8_4_ = uVar115;
        auVar7._0_8_ = dVar121;
        auVar7._12_4_ = uVar59;
        *(undefined1 (*) [16])(pFVar28 + 0x10) = auVar7;
        *(double *)(pFVar28 + 0x68) = dVar109;
        *(double *)(pFVar28 + 0x70) = dVar112;
        auVar16._4_8_ = uVar44;
        auVar16._0_4_ = (int)((ulonglong)dVar109 >> 0x20);
        auVar57._0_8_ = auVar16._0_8_ << 0x20;
        auVar57._8_4_ = SUB84(dVar112,0);
        auVar57._12_4_ = (int)((ulonglong)dVar112 >> 0x20);
        local_1a8._8_4_ = uVar118;
        local_1a8._0_8_ = dVar108;
        local_1a8._12_4_ = uVar113;
        uStack_180 = auVar57._8_8_;
        *(double *)(pFVar28 + 0x20) = dVar109;
        *(undefined8 *)(pFVar28 + 0x28) = uStack_180;
        local_198._8_4_ = uVar115;
        local_198._0_8_ = dVar121;
        local_198._12_4_ = uVar59;
        dStack_278 = (double)CONCAT44((uint)((ulonglong)dVar100 >> 0x20) &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      SUB84(dVar100,0) &
                                      (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        uStack_150 = 0;
        uVar106 = SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar40 = (uint)((ulonglong)dVar13 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        dVar121 = (double)CONCAT44((uint)((ulonglong)dVar120 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar120,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        local_178 = local_4a0;
        uStack_170 = 0;
        if (dStack_278 <= (double)CONCAT44(uVar40,uVar106)) {
          dStack_278 = (double)CONCAT44(uVar40,uVar106);
        }
        *(double *)(pFVar28 + 0x30) = local_4a0;
        *(undefined8 *)(pFVar28 + 0x38) = 0;
        *(double *)(pFVar28 + 0x40) = dVar100;
        *(double *)(pFVar28 + 0x48) = dVar13;
        *(double *)(pFVar28 + 0x50) = dVar120;
        *(undefined8 *)(pFVar28 + 0x58) = 0;
        if (dStack_278 <= dVar121) {
          dStack_278 = dVar121;
        }
        dStack_278 = dStack_278 + dStack_278;
        *(double *)(pFVar28 + 0x78) = local_4a0;
        *(double *)(pFVar28 + 0x80) = dStack_278;
        local_280 = local_4a0;
        *(double *)(pFVar28 + 0x88) = dStack_278;
        *(double *)(pFVar28 + 0x90) = dStack_278;
        fVar72 = fVar17 - fVar60;
        if (fVar17 <= fVar17 - fVar60) {
          fVar72 = fVar17;
        }
        *(double *)(pFVar28 + 0x98) = dStack_278;
        dVar121 = local_598->TimeSeconds;
        *(undefined8 *)(pFVar28 + 0xa4) = 0x3f800000;
        if (fVar72 <= __real_00000000) {
          fVar72 = __real_00000000;
        }
        *(float *)(pFVar28 + 0xa0) = (float)(dVar121 - (double)fVar72);
        *(undefined4 *)(pFVar28 + 0xb4) = *(undefined4 *)((longlong)&param_2[1]._padding_ + 4);
        *(int *)(pFVar28 + 0xb8) = local_5e8;
        *(undefined8 *)(pFVar28 + 0xbc) = local_458._0_8_;
        *(undefined8 *)(pFVar28 + 0xc4) = local_458._8_8_;
        local_290 = dVar109;
        dStack_288 = dVar112;
        local_270 = dStack_278;
        dStack_268 = dStack_278;
        local_260 = dStack_278;
        local_188 = dVar109;
        local_168 = dVar100;
        dStack_160 = dVar13;
        local_158 = dVar120;
      }
    }
    if ((int)uVar105 < (this->ActiveDecalProxies).ArrayNum) {
      do {
        iVar24 = (int)local_608;
        if ((int)local_608 == local_608._4_4_) {
          iVar24 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10d0,&local_610,(int *)((longlong)&local_608 + 4));
        }
        local_608 = CONCAT44(local_608._4_4_,iVar24 + 1);
        pFVar28 = local_610.Data + (longlong)iVar24 * 0xd0;
        DefaultConstructItems<FDeferredDecalUpdateParams,int>(pFVar28,1);
        pFVar28[0xcc] = (FScriptContainerElement)0x2;
        if (((this->ActiveDecalProxies).ArrayNum < 1) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar5 = (code *)swi(3);
          pFVar25 = (FNiagaraDynamicDataBase *)(*pcVar5)();
          return pFVar25;
        }
        uVar44 = *(undefined8 *)
                  ((this->ActiveDecalProxies).AllocatorInstance.Data +
                  (longlong)(this->ActiveDecalProxies).ArrayNum * 8 + -8);
        piVar27 = &(this->ActiveDecalProxies).ArrayNum;
        *piVar27 = *piVar27 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->ActiveDecalProxies).AllocatorInstance,
                   (this->ActiveDecalProxies).ArrayNum,&(this->ActiveDecalProxies).ArrayMax);
        *(undefined8 *)(pFVar28 + 0x60) = uVar44;
      } while ((int)uVar105 < (this->ActiveDecalProxies).ArrayNum);
    }
    if (0 < (int)local_608) {
      (**(code **)(local_598->Scene->_padding_ + 0x150))(local_598->Scene,&local_610);
    }
    if (local_610.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_610.Data);
    }
  }
  return (FNiagaraDynamicDataBase *)0x0;
}

// GetViewRelevance @ 149357190

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FNiagaraRendererDecals::GetViewRelevance
          (FNiagaraRendererDecals *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1,FNiagaraSceneProxy *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(byte *)((longlong)&__return_storage_ptr__->_padding_ + 4) =
       *(byte *)((longlong)&__return_storage_ptr__->_padding_ + 4) & 0xfb;
  puVar2 = &__return_storage_ptr__->field_0x8;
  __return_storage_ptr__->bDynamicRelevance = 0;
  __return_storage_ptr__->bHasSimpleLights = 0;
  __return_storage_ptr__->bRenderInMainPass = 1;
  __return_storage_ptr__->bShadowRelevance = 0;
  __return_storage_ptr__->bDrawRelevance = 0;
  return __return_storage_ptr__;
}

// ReleaseAllDecals @ 149365340

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNiagaraRendererDecals::ReleaseAllDecals(FNiagaraRendererDecals *this)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  UActorComponent *this_00;
  UWorld *pUVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  ForAnyElementType local_38;
  int local_30 [2];
  
  if ((((0 < (this->ActiveDecalProxies).ArrayNum) &&
       (this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->WeakOwnerComponent).WeakPtr),
       this_00 != (UActorComponent *)0x0)) &&
      ((pUVar7 = this_00->WorldPrivate, pUVar7 != (UWorld *)0x0 ||
       (pUVar7 = UActorComponent::GetWorld_Uncached(this_00), pUVar7 != (UWorld *)0x0)))) &&
     (pUVar7->Scene != (FSceneInterface *)0x0)) {
    iVar1 = (this->ActiveDecalProxies).ArrayNum;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30[0] = 0;
    local_30[1] = 0;
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xd0,0x10,iVar1,&local_38,local_30,local_30 + 1);
    DefaultConstructItems<FDeferredDecalUpdateParams,int>
              (local_38.Data + (longlong)iVar5 * 0xd0,iVar1);
    uVar8 = 0;
    if (0 < (this->ActiveDecalProxies).ArrayNum) {
      lVar9 = 0;
      lVar11 = 0;
      do {
        uVar10 = ~uVar8 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar8 < local_30[0]) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_38.Data[lVar9 + 0xcc] = (FScriptContainerElement)0x2;
        uVar6 = 0;
        if ((int)uVar8 < (this->ActiveDecalProxies).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar2 = *(undefined8 *)((this->ActiveDecalProxies).AllocatorInstance.Data + lVar11);
        uVar6 = 0;
        if ((int)uVar8 < local_30[0]) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar8 = uVar8 + 1;
        lVar11 = lVar11 + 8;
        *(undefined8 *)(local_38.Data + lVar9 + 0x60) = uVar2;
        lVar9 = lVar9 + 0xd0;
      } while ((int)uVar8 < (this->ActiveDecalProxies).ArrayNum);
    }
    (**(code **)(pUVar7->Scene->_padding_ + 0x150))(pUVar7->Scene,&local_38);
    (this->ActiveDecalProxies).ArrayNum = 0;
    if ((this->ActiveDecalProxies).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->ActiveDecalProxies).AllocatorInstance,0,
                 &(this->ActiveDecalProxies).ArrayMax);
    }
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
  }
  return;
}

// operator() @ 150540ec0

bool __thiscall
`FNiagaraRendererDecals::DestroyRenderState_Concurrent'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8019154831593701488>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8019154831593701488>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

