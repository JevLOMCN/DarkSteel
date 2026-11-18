// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 19

// StaticClass @ 1467cf690

UClass * __cdecl UMovieSceneMotionVectorSimulationSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMotionVectorSimulationSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneMotionVectorSimulationSystem",
               &Z_Registration_Info_UClass_UMovieSceneMotionVectorSimulationSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneMotionVectorSimulationSystem,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneMotionVectorSimulationSystem>
               ,InternalVTableHelperCtorCaller<UMovieSceneMotionVectorSimulationSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMotionVectorSimulationSystem.InnerSingleton;
}

// UMovieSceneMotionVectorSimulationSystem @ 14680a0d0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneMotionVectorSimulationSystem * __thiscall
UMovieSceneMotionVectorSimulationSystem::UMovieSceneMotionVectorSimulationSystem
          (UMovieSceneMotionVectorSimulationSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneMotionVectorSimulationSystem__6B_;
  *(undefined8 *)&this->TransformData = 0;
  *(undefined8 *)&(this->TransformData).field_0x8 = 0;
  *(undefined8 *)&(this->TransformData).field_0x20 = 0;
  *(undefined4 *)&(this->TransformData).field_0x28 = 0;
  *(undefined4 *)&(this->TransformData).field_0x2c = 0x80;
  *(undefined4 *)&(this->TransformData).field_0x34 = 0;
  *(undefined4 *)&(this->TransformData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TransformData).field_0x40 = 0;
  *(undefined4 *)&(this->TransformData).field_0x48 = 0;
  this->bPreserveTransforms = false;
  this->bSimulationEnabled = false;
  this->bSimulateTransformsRequested = false;
  return this;
}

// UMovieSceneMotionVectorSimulationSystem @ 14680a140

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneMotionVectorSimulationSystem * __thiscall
UMovieSceneMotionVectorSimulationSystem::UMovieSceneMotionVectorSimulationSystem
          (UMovieSceneMotionVectorSimulationSystem *this,FObjectInitializer *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneMotionVectorSimulationSystem__6B_;
  *(undefined8 *)&this->TransformData = 0;
  *(undefined8 *)&(this->TransformData).field_0x8 = 0;
  *(undefined8 *)&(this->TransformData).field_0x20 = 0;
  *(undefined4 *)&(this->TransformData).field_0x28 = 0;
  *(undefined4 *)&(this->TransformData).field_0x2c = 0x80;
  *(undefined4 *)&(this->TransformData).field_0x34 = 0;
  *(undefined4 *)&(this->TransformData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TransformData).field_0x40 = 0;
  *(undefined4 *)&(this->TransformData).field_0x48 = 0;
  this->bPreserveTransforms = false;
  this->bSimulationEnabled = false;
  this->bSimulateTransformsRequested = false;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0x20;
  return this;
}

// ~UMovieSceneMotionVectorSimulationSystem @ 14680f7f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneMotionVectorSimulationSystem::~UMovieSceneMotionVectorSimulationSystem
          (UMovieSceneMotionVectorSimulationSystem *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneMotionVectorSimulationSystem__6B_;
  *(undefined4 *)&(this->TransformData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TransformData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TransformData);
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// AddSimulatedTransform @ 14681ac60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovieSceneMotionVectorSimulationSystem::AddSimulatedTransform
          (UMovieSceneMotionVectorSimulationSystem *this,USceneComponent *param_1,
          TTransform<double> *param_2,FName param_3)

{
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [16];
  USceneComponent *local_98;
  double *local_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  FName local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_88 = (param_2->Rotation).XY.m128d_f64[0];
  dStack_80 = (param_2->Rotation).XY.m128d_f64[1];
  local_78 = (param_2->Rotation).ZW.m128d_f64[0];
  dStack_70 = (param_2->Rotation).ZW.m128d_f64[1];
  local_68 = (param_2->Translation).XY.m128d_f64[0];
  dStack_60 = (param_2->Translation).XY.m128d_f64[1];
  local_58 = (param_2->Translation).ZW.m128d_f64[0];
  dStack_50 = (param_2->Translation).ZW.m128d_f64[1];
  local_48 = (param_2->Scale3D).XY.m128d_f64[0];
  dStack_40 = (param_2->Scale3D).XY.m128d_f64[1];
  local_38 = (param_2->Scale3D).ZW.m128d_f64[0];
  dStack_30 = (param_2->Scale3D).ZW.m128d_f64[1];
  local_a8._8_4_ = 0;
  local_a8._12_4_ = 0;
  local_28 = param_3;
  if (param_1 != (USceneComponent *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_a8._0_4_ = 0;
    local_a8._4_4_ = 0;
    local_98 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)local_a8,(FObjectPtr)&local_98);
    local_a8._8_8_ = local_a8._0_8_;
  }
  local_98 = (USceneComponent *)(local_a8 + 8);
  local_90 = &local_88;
  TSet<TTuple<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform,1>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FObjectKey_&&,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform_&&>_>
            ((TSet<TTuple<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform,1>,FDefaultSetAllocator>
              *)&this->TransformData,
             (TPairInitializer<FObjectKey_&&,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform_&&>
              *)local_a8,(bool *)&local_98);
  return;
}

// ApplySimulatedTransforms @ 14681d320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovieSceneMotionVectorSimulationSystem::ApplySimulatedTransforms
          (UMovieSceneMotionVectorSimulationSystem *this,USceneComponent *param_1,
          TTransform<double> *param_2)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  int iVar4;
  USceneComponent *pUVar5;
  FName FVar6;
  longlong lVar7;
  code *pcVar8;
  double adVar9 [2];
  uint uVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  FMotionVectorSimulation *this_00;
  longlong lVar15;
  double *pdVar16;
  FScriptContainerElement *pFVar17;
  undefined1 auStack_348 [32];
  undefined1 local_328 [8];
  FWeakObjectPtr local_320;
  FWeakObjectPtr local_318;
  USceneComponent *local_310;
  TTransform<double> *local_308;
  TBaseKeyIterator<1> local_300;
  TBaseKeyIterator<1> local_2e8;
  double local_2c8 [2];
  double local_2b8 [2];
  double local_2a8 [2];
  double local_298 [2];
  double local_288 [2];
  double local_278 [2];
  undefined1 local_248 [48];
  __m128d local_218;
  __m128d local_208;
  __m128d local_1f8;
  double local_1e8;
  double dStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  TTransform<double> local_188;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_348;
  local_308 = param_2;
  if ((param_1 == (USceneComponent *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InComponent",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneMotionVectorSimulationSystem.cpp"
                          ,0x138,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this_00 = FMotionVectorSimulation::Get();
  FMotionVectorSimulation::SetPreviousTransform(this_00,(UObject *)param_1,param_2);
  dVar13 = _UNK_150689688;
  dVar12 = ___xmm_3ff00000000000003ff0000000000000;
  uVar11 = __real_3ff0000000000000;
  pFVar17 = (param_1->AttachChildren).AllocatorInstance.Data;
  iVar4 = (param_1->AttachChildren).ArrayNum;
  pFVar2 = pFVar17 + (longlong)iVar4 * 8;
  do {
    if ((param_1->AttachChildren).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TObjectPtr<USceneComponent>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_328);
    }
    if (pFVar17 == pFVar2) {
      return;
    }
    pUVar5 = *(USceneComponent **)pFVar17;
    if (pUVar5 != (USceneComponent *)0x0) {
      FVar6 = pUVar5->AttachSocketName;
      if (FVar6 == (FName)0x0) {
        pdVar16 = local_2c8;
        local_2c8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
        local_2c8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
        local_2b8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
        local_2b8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
        local_2a8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
        local_2a8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
        local_298[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
        local_298[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
        local_288[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
        local_288[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
        local_278[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
        local_278[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
      }
      else {
        local_318.ObjectIndex = 0;
        local_318.ObjectSerialNumber = 0;
        if (param_1 != (USceneComponent *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          local_320.ObjectIndex = 0;
          local_320.ObjectSerialNumber = 0;
          local_310 = param_1;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          FWeakObjectPtr::operator=(&local_320,(FObjectPtr)&local_310);
          local_318 = local_320;
        }
        TSet<TTuple<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform,1>,FDefaultSetAllocator>
        ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
                  (&local_2e8,
                   (TSet<TTuple<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform,1>,FDefaultSetAllocator>
                    *)&this->TransformData,(FObjectKey *)&local_318);
        local_300._16_8_ = ZEXT48((uint)local_2e8.Index);
        local_300.Set = local_2e8.Set;
        uVar10 = local_2e8.Index;
        while (uVar10 != 0xffffffff) {
          lVar15 = (longlong)(int)uVar10;
          lVar7 = *(longlong *)&(local_300.Set)->Elements;
          if (*(FName *)(lVar7 + 0x70 + lVar15 * 0x90) == FVar6) {
            pdVar16 = (double *)(lVar7 + 0x10 + lVar15 * 0x90);
            local_1e8 = *pdVar16;
            dStack_1e0 = pdVar16[1];
            puVar3 = (undefined8 *)(lVar7 + 0x20 + lVar15 * 0x90);
            local_1d8 = *puVar3;
            uStack_1d0 = puVar3[1];
            puVar3 = (undefined8 *)(lVar7 + 0x30 + lVar15 * 0x90);
            local_1c8 = *puVar3;
            uStack_1c0 = puVar3[1];
            puVar3 = (undefined8 *)(lVar7 + 0x40 + lVar15 * 0x90);
            local_1b8 = *puVar3;
            uStack_1b0 = puVar3[1];
            puVar3 = (undefined8 *)(lVar7 + 0x50 + lVar15 * 0x90);
            local_1a8 = *puVar3;
            uStack_1a0 = puVar3[1];
            puVar3 = (undefined8 *)(lVar7 + 0x60 + lVar15 * 0x90);
            local_198 = *puVar3;
            uStack_190 = puVar3[1];
            goto LAB_14681d528;
          }
          TSet<TTuple<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform,1>,FDefaultSetAllocator>
          ::TBaseKeyIterator<1>::operator++(&local_300);
          uVar10 = local_300.Index;
        }
        (**(code **)(param_1->_padding_ + 0x520))(param_1,&local_1e8,FVar6,2);
LAB_14681d528:
        pdVar16 = &local_1e8;
      }
      local_128.Rotation.XY.m128d_f64[0] = *pdVar16;
      local_128.Rotation.XY.m128d_f64[1] = pdVar16[1];
      local_128.Rotation.ZW.m128d_f64[0] = pdVar16[2];
      local_128.Rotation.ZW.m128d_f64[1] = pdVar16[3];
      local_128.Translation.XY.m128d_f64[0] = pdVar16[4];
      local_128.Translation.XY.m128d_f64[1] = pdVar16[5];
      local_128.Scale3D.XY.m128d_f64[0] = pdVar16[8];
      local_128.Scale3D.XY.m128d_f64[1] = pdVar16[9];
      local_128.Translation.ZW.m128d_f64[0] = pdVar16[6];
      local_128.Translation.ZW.m128d_f64[1] = pdVar16[7];
      adVar9[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      adVar9[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      adVar9[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_248._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_248._8_8_ = adVar9[1];
      local_128.Scale3D.ZW.m128d_f64[0] = pdVar16[10];
      local_128.Scale3D.ZW.m128d_f64[1] = pdVar16[0xb];
      local_248._24_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_248._16_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_248._28_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_248._40_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_248._32_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_248._44_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_218.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_218.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_218.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_208.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_208.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_208.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_1f8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_1f8.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_1f8.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply((TTransform<double> *)local_248,&local_128,local_308);
      if (pUVar5->bAbsoluteLocation != '\0') {
        local_248._40_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_248._32_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_218.m128d_f64[1] = 0.0;
        local_218.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
      if (pUVar5->bAbsoluteRotation != '\0') {
        local_248._8_8_ = UE::Math::TQuat<double>::Identity.Y;
        local_248._0_8_ = UE::Math::TQuat<double>::Identity.X;
        local_248._24_8_ = UE::Math::TQuat<double>::Identity.W;
        local_248._16_8_ = UE::Math::TQuat<double>::Identity.Z;
      }
      if (pUVar5->bAbsoluteScale != '\0') {
        local_208.m128d_f64[1] = dVar13;
        local_208.m128d_f64[0] = dVar12;
        local_1f8.m128d_f64[1] = 0.0;
        local_1f8.m128d_f64[0] = (double)uVar11;
      }
      GetTransform(this,&local_c8,pUVar5);
      local_188.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_188.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_188.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_188.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_188.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_188.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_188.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_188.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_188.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_188.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_188.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_188.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_188.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_188.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_188.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_188.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_188.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_188.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply(&local_188,&local_c8,(TTransform<double> *)local_248);
      ApplySimulatedTransforms(this,pUVar5,&local_188);
    }
    pFVar17 = pFVar17 + 8;
  } while( true );
}

// ComputeSimulatedMotion @ 146821ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneMotionVectorSimulationSystem::ComputeSimulatedMotion
          (UMovieSceneMotionVectorSimulationSystem *this)

{
  FEntityComponentFilter *this_00;
  ulonglong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  FBuiltInComponentTypes *pFVar8;
  FMovieSceneTracksComponentTypes *pFVar9;
  UMovieSceneComponentTransformSystem *pUVar10;
  UMovieSceneEvalTimeSystem *pUVar11;
  FFrameTime FVar12;
  FBuiltInComponentTypes *pFVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  uint uVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  undefined1 auStackY_548 [32];
  undefined1 local_508 [4];
  FComponentTypeID local_504;
  FComponentTypeID local_502;
  FComponentTypeID local_500;
  FComponentTypeID local_4fe;
  FComponentTypeID local_4fc;
  FComponentTypeID local_4fa;
  TArray<FFrameTime,TSizedDefaultAllocator<32>_> local_4f8;
  undefined4 local_4e8;
  TComponentTypeID<double> local_4e4;
  undefined2 uStack_4e2;
  undefined4 local_4e0;
  TComponentTypeID<double> local_4dc;
  undefined2 uStack_4da;
  undefined4 local_4d8;
  TComponentTypeID<double> local_4d4;
  undefined2 uStack_4d2;
  undefined4 local_4d0;
  TComponentTypeID<double> local_4cc;
  undefined2 uStack_4ca;
  undefined4 local_4c8;
  int local_4c0;
  uint uStack_4bc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_4b8;
  undefined4 local_4b0;
  uint uStack_4ac;
  int iStack_4a8;
  undefined4 uStack_4a4;
  int local_4a0;
  <lambda_1> local_498;
  <lambda_2> local_490;
  longlong local_488;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_480;
  undefined8 local_458;
  TStatIdData *pTStack_450;
  byte local_448;
  undefined7 uStack_447;
  Type TStack_440;
  uint uStack_43c;
  TComponentTypeID<UObject_*> local_438;
  undefined4 uStack_436;
  TComponentTypeID<double> TStack_432;
  undefined2 uStack_430;
  undefined4 uStack_42e;
  TComponentTypeID<double> TStack_42a;
  undefined2 uStack_428;
  undefined4 uStack_426;
  TComponentTypeID<double> TStack_422;
  undefined2 uStack_420;
  undefined4 uStack_41e;
  TComponentTypeID<double> TStack_41a;
  undefined2 uStack_418;
  undefined4 uStack_416;
  undefined2 uStack_412;
  undefined8 uStack_410;
  TStatIdData *pTStack_408;
  FScriptContainerElement *local_400;
  undefined8 uStack_3f8;
  undefined8 local_3e8;
  TStatIdData *pTStack_3e0;
  byte local_3d8;
  undefined7 uStack_3d7;
  undefined4 uStack_3d0;
  uint uStack_3cc;
  initializer_list<UE::MovieScene::FComponentTypeID> local_3c8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_3b8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_3a8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_398;
  initializer_list<UE::MovieScene::FComponentTypeID> local_388;
  TSharedRef<FMovieSceneEntitySystemRunner,1> local_378;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> local_368;
  TComponentTypeID<FFrameTime> TStack_366;
  undefined4 uStack_364;
  wchar_t *pwStack_360;
  TStatIdData *pTStack_358;
  ulonglong uStack_350;
  undefined8 uStack_348;
  undefined1 local_340 [8];
  FComponentTypeID local_338;
  TComponentTypeID<unsigned_short> local_336;
  TComponentTypeID<TSharedPtr<FTrackInstancePropertyBindings,1>_> local_334;
  FComponentTypeID local_332;
  FComponentTypeID local_330;
  TComponentTypeID<double> local_32e;
  TComponentTypeID<double> local_32c;
  TComponentTypeID<double> local_32a;
  TComponentTypeID<double> local_328;
  TComponentTypeID<double> local_326;
  TComponentTypeID<double> local_324;
  TComponentTypeID<double> local_322;
  TComponentTypeID<double> local_320;
  FComponentTypeID local_31e [3];
  undefined1 local_318 [32];
  longlong local_2f8;
  wchar_t *pwStack_2f0;
  TStatIdData *local_2e8;
  ForAnyElementType FStack_2e0;
  undefined8 local_2d8;
  FEntityComponentFilter local_2d0;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined1 local_1d8 [8];
  wchar_t *pwStack_1d0;
  TStatId local_1c8;
  ulonglong uStack_1c0;
  undefined8 local_1b8;
  FEntityComponentFilter local_1b0;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_c8;
  undefined4 local_c4;
  FEntityComponentFilter local_b8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_548;
  pFVar8 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar9 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  UMovieSceneEntitySystem::Disable((UMovieSceneEntitySystem *)this);
  pUVar10 = UMovieSceneEntitySystemLinker::FindSystem<UMovieSceneComponentTransformSystem>
                      ((UMovieSceneEntitySystemLinker *)this->_padding_);
  if (pUVar10 != (UMovieSceneComponentTransformSystem *)0x0) {
    UMovieSceneEntitySystem::Disable((UMovieSceneEntitySystem *)pUVar10);
  }
  pUVar11 = UMovieSceneEntitySystemLinker::FindSystem<UMovieSceneEvalTimeSystem>
                      ((UMovieSceneEntitySystemLinker *)this->_padding_);
  if (pUVar11 != (UMovieSceneEvalTimeSystem *)0x0) {
    UMovieSceneEntitySystem::Disable((UMovieSceneEntitySystem *)pUVar11);
  }
  UE::MovieScene::FEntityManager::OnStructureChanged((FEntityManager *)(this->_padding_ + 0x28));
  lVar15 = this->_padding_;
  if ((*(int *)(lVar15 + 0x2d4) == 0) || (*(int *)(lVar15 + 0x2c4) != 0)) {
    local_508[0] = 0;
    `UE::MovieScene::FEntityManager::ModifyGlobalIterationFilter'::__l2::<lambda_1>::operator()
              (local_508);
  }
  this_00 = (FEntityComponentFilter *)(lVar15 + 0x208);
  UE::MovieScene::FEntityComponentFilter::FEntityComponentFilter(&local_b8,this_00);
  local_504.Value = (pFVar9->ComponentTransform).PropertyTag.Value;
  local_3c8._First = &local_504;
  local_3c8._Last = &local_502;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)this_00,&local_3c8);
  lVar15 = this->_padding_;
  local_4f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_4f8.ArrayNum = 0;
  local_4f8.ArrayMax = 0;
  iVar7 = 0;
  if (*(longlong *)(lVar15 + 0x580) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceRegistry.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                       ,0x96,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar7 = local_4f8.ArrayNum;
  }
  lVar15 = *(longlong *)(lVar15 + 0x580);
  uVar6 = *(uint *)(lVar15 + 0x10);
  if (iVar7 < (int)uVar6) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,uVar6 - iVar7,&local_4f8.AllocatorInstance,&local_4f8.ArrayNum,
                       &local_4f8.ArrayMax);
    DefaultConstructItems<FFrameTime,int>
              (local_4f8.AllocatorInstance.Data + (longlong)iVar5 * 8,uVar6 - iVar7);
  }
  else {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    if ((int)uVar6 < iVar7) {
      uVar16 = iVar7 - uVar6;
      if ((int)(uVar16 | uVar6) < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = local_4f8.ArrayNum;
      }
      if (uVar16 != 0) {
        iVar5 = (iVar7 - uVar16) - uVar6;
        if (iVar5 != 0) {
          memmove(local_4f8.AllocatorInstance.Data + (longlong)(int)uVar6 * 8,
                  local_4f8.AllocatorInstance.Data + (longlong)(int)uVar6 * 8 +
                  (longlong)(int)uVar16 * 8,(longlong)iVar5 << 3);
          iVar7 = local_4f8.ArrayNum;
        }
        local_4f8.ArrayNum = iVar7 - uVar16;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,&local_4f8.AllocatorInstance,iVar7 - uVar16,&local_4f8.ArrayMax);
      }
    }
  }
  local_488 = lVar15 + 8;
  uStack_4bc = 1;
  uVar6 = *(uint *)(lVar15 + 0x30);
  pTStack_4b8 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar15 + 0x18);
  local_4c0 = 0;
  uStack_4ac = 0;
  iStack_4a8 = 0;
  if (uVar6 != 0) {
    pTVar17 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar15 + 0x28);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar15 + 0x28) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar17 = pTStack_4b8;
    }
    uVar16 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
    iStack_4a8 = 0;
    local_4c0 = 0;
    while (uVar16 == 0) {
      iStack_4a8 = iStack_4a8 + 0x20;
      lVar15 = (longlong)local_4c0;
      local_4c0 = local_4c0 + 1;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < local_4c0)
      goto LAB_146821dab;
      uVar16 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar15 * 4 + 4);
    }
    uStack_4bc = -uVar16 & uVar16;
    uVar1 = (ulonglong)uStack_4bc * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_4a0 = (int)lVar15;
    uStack_4ac = local_4a0 + -1 + iStack_4a8;
    if ((int)uVar6 < (int)uStack_4ac) {
LAB_146821dab:
      uStack_4ac = uVar6;
    }
  }
  local_4b0 = 0xffffffff;
  local_480._padding_ = CONCAT44(uStack_4bc,local_4c0);
  local_480.UnvisitedBitMask = 0xffffffff;
  local_480.CurrentBitIndex = uStack_4ac;
  local_480._28_4_ = uStack_4a4;
  local_480.BaseBitIndex = iStack_4a8;
  local_480.Array = pTStack_4b8;
  if ((int)uStack_4ac < (int)uVar6) {
    do {
      iVar7 = local_480.CurrentBitIndex;
      lVar15 = (longlong)local_480.CurrentBitIndex;
      FVar12 = UE::MovieScene::GetSimulatedMotionVectorTime((FMovieSceneContext *)local_340);
      uVar2 = *(undefined8 *)FVar12;
      uVar6 = 0;
      if (iVar7 < local_4f8.ArrayNum) {
        uVar6 = (uint)~iVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined8 *)(local_4f8.AllocatorInstance.Data + lVar15 * 8) = uVar2;
      local_480.UnvisitedBitMask = local_480.UnvisitedBitMask & ~local_480._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_480);
    } while (local_480.CurrentBitIndex < (local_480.Array)->NumBits);
  }
  local_368 = pFVar8->InstanceHandle;
  TStack_366 = pFVar8->EvalTime;
  pTStack_450 = &TStatId::TStatId_NAME_None;
  local_458 = 0;
  TStack_440 = AnyHiPriThreadHiPriTask;
  uStack_43c = uStack_43c & 0xffffff00;
  uStack_350 = CONCAT71(uStack_447,local_448) & 0xffffffffffffffe0;
  uStack_348 = CONCAT44(uStack_43c,0x6ff);
  pwStack_360 = (wchar_t *)0x0;
  pTStack_358 = &TStatId::TStatId_NAME_None;
  local_448 = local_448 & 0xe0;
  pFVar13 = UE::MovieScene::FBuiltInComponentTypes::Get();
  local_1d8._2_2_ = TStack_366;
  local_1d8._0_2_ = local_368;
  local_1d8._4_4_ = uStack_364;
  local_500.Value = (pFVar13->Tags).FixedTime.Value;
  pwStack_1d0 = pwStack_360;
  local_1b8._4_4_ = uStack_43c;
  local_1b8._0_4_ = TStack_440;
  local_1c8.StatIdPtr = pTStack_358;
  uStack_1c0 = uStack_350;
  local_1b0.AllMask.Bits.NumBits = 0;
  local_1b0.AllMask.Bits.MaxBits = 0x180;
  local_1b0.NoneMask.Bits.NumBits = 0;
  local_1b0.NoneMask.Bits.MaxBits = 0x180;
  local_1b0.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b0.ComplexMasks.ArrayNum = 0;
  local_1b0.ComplexMasks.ArrayMax = 0;
  local_100 = 0;
  local_fc = 0x180;
  local_c8 = 0;
  local_c4 = 0x180;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_1d8,&local_1b0);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_1d8 + 2),&local_1b0);
  local_3b8._First = &local_500;
  local_3b8._Last = &local_4fe;
  UE::MovieScene::FComponentMask::SetAll(&local_1b0.NoneMask,&local_3b8);
  local_498.FrameTimesByInstance = &local_4f8;
  UE::MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
  ::
  Iterate_PerEntityImpl<_UMovieSceneMotionVectorSimulationSystem::ComputeSimulatedMotion_::__l9::<lambda_1>_>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TWriteAccess<FFrameTime>_>
              *)local_1d8,(FEntityManager *)(this->_padding_ + 0x28),&local_1b0,&local_498);
  if (local_1b0.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.ComplexMasks.AllocatorInstance.Data);
  }
  if (local_4f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f8.AllocatorInstance.Data);
  }
  UMovieSceneEntitySystemLinker::GetRunner
            ((UMovieSceneEntitySystemLinker *)this->_padding_,&local_378);
  FMovieSceneEntitySystemRunner::FlushSingleEvaluationPhase(local_378.Object);
  TStack_41a = pFVar8->DoubleResult[7];
  TStack_422 = pFVar8->DoubleResult[5];
  TStack_42a = pFVar8->DoubleResult[3];
  TStack_432 = pFVar8->DoubleResult[1];
  local_438 = pFVar8->BoundObject;
  local_4e8 = CONCAT22(0x7fff,pFVar8->DoubleResult[0]);
  uStack_436 = local_4e8;
  _local_4e4 = CONCAT22(0x7fff,TStack_432);
  uStack_430 = 0x7fff;
  local_4e0 = CONCAT22(0x7fff,pFVar8->DoubleResult[2]);
  uStack_42e = local_4e0;
  _local_4dc = CONCAT22(0x7fff,TStack_42a);
  uStack_428 = 0x7fff;
  local_4d8 = CONCAT22(0x7fff,pFVar8->DoubleResult[4]);
  uStack_426 = local_4d8;
  _local_4d4 = CONCAT22(0x7fff,TStack_422);
  uStack_420 = 0x7fff;
  local_3e8 = 0;
  pTStack_3e0 = &TStatId::TStatId_NAME_None;
  local_4d0 = CONCAT22(0x7fff,pFVar8->DoubleResult[6]);
  uStack_41e = local_4d0;
  uStack_410 = 0;
  pTStack_408 = &TStatId::TStatId_NAME_None;
  _local_4cc = CONCAT22(0x7fff,TStack_41a);
  local_318._2_4_ = local_4e8;
  local_318._0_2_ = local_438;
  local_318._6_2_ = TStack_432;
  local_318._10_4_ = local_4e0;
  local_318._8_2_ = 0x7fff;
  local_318._14_2_ = TStack_42a;
  uStack_418 = 0x7fff;
  local_318._16_8_ = CONCAT26(TStack_422,CONCAT42(local_4d8,0x7fff));
  local_318._26_4_ = local_4d0;
  local_318._24_2_ = 0x7fff;
  local_318._30_2_ = TStack_41a;
  uStack_3d0 = 0x6ff;
  uStack_3cc = uStack_3cc & 0xffffff00;
  local_400 = (FScriptContainerElement *)(CONCAT71(uStack_3d7,local_3d8) & 0xffffffffffffffe0);
  uStack_3f8._4_4_ = uStack_3cc;
  uStack_3f8._0_4_ = 0x6ff;
  local_4c8 = CONCAT22(0x7fff,pFVar8->DoubleResult[8]);
  uStack_416 = local_4c8;
  local_4fc.Value = (pFVar9->ComponentTransform).PropertyTag.Value;
  local_2d0.AllMask.Bits.NumBits = 0;
  local_2f8 = CONCAT26(uStack_412,CONCAT42(local_4c8,0x7fff));
  local_2d0.AllMask.Bits.MaxBits = 0x180;
  local_2e8 = &TStatId::TStatId_NAME_None;
  pwStack_2f0 = (wchar_t *)0x0;
  local_2d0.NoneMask.Bits.NumBits = 0;
  local_2d0.NoneMask.Bits.MaxBits = 0x180;
  local_2d0.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d0.ComplexMasks.ArrayNum = 0;
  local_2d0.ComplexMasks.ArrayMax = 0;
  local_220 = 0;
  local_21c = 0x180;
  local_1e8 = 0;
  local_1e4 = 0x180;
  local_3d8 = local_3d8 & 0xe0;
  FStack_2e0.Data = local_400;
  local_2d8 = uStack_3f8;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_318,&local_2d0);
  local_3a8._First = &local_4fc;
  local_3a8._Last = &local_4fa;
  UE::MovieScene::FComponentMask::SetAll(&local_2d0.AllMask,&local_3a8);
  local_338.Value = *(ushort *)&pFVar8->CustomPropertyIndex;
  local_336 = pFVar8->FastPropertyOffset;
  local_334 = pFVar8->SlowProperty;
  iVar7 = local_2d0.ComplexMasks.ArrayNum;
  if (local_2d0.ComplexMasks.ArrayNum == local_2d0.ComplexMasks.ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x43c,&local_2d0.ComplexMasks.AllocatorInstance,
                       &local_2d0.ComplexMasks.ArrayMax);
  }
  local_398._First = &local_338;
  pFVar14 = local_2d0.ComplexMasks.AllocatorInstance.Data + (longlong)iVar7 * 0x3c;
  local_398._Last = &local_332;
  *(int *)(pFVar14 + 0x30) = 0;
  *(int *)(pFVar14 + 0x34) = 0x180;
  pFVar14[0x38] = (FScriptContainerElement)0x2;
  local_2d0.ComplexMasks.ArrayNum = iVar7 + 1;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)pFVar14,&local_398);
  local_330.Value = *(ushort *)pFVar8->DoubleResult;
  local_32e = pFVar8->DoubleResult[1];
  local_32c = pFVar8->DoubleResult[2];
  local_32a = pFVar8->DoubleResult[3];
  local_328 = pFVar8->DoubleResult[4];
  local_326 = pFVar8->DoubleResult[5];
  local_324 = pFVar8->DoubleResult[6];
  local_322 = pFVar8->DoubleResult[7];
  local_320 = pFVar8->DoubleResult[8];
  if (local_2d0.ComplexMasks.ArrayNum == local_2d0.ComplexMasks.ArrayMax) {
    local_2d0.ComplexMasks.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x43c,&local_2d0.ComplexMasks.AllocatorInstance,&local_2d0.ComplexMasks.ArrayMax
                   );
  }
  lVar15 = (longlong)local_2d0.ComplexMasks.ArrayNum;
  local_2d0.ComplexMasks.ArrayNum = local_2d0.ComplexMasks.ArrayNum + 1;
  local_388._First = &local_330;
  pFVar14 = local_2d0.ComplexMasks.AllocatorInstance.Data + lVar15 * 0x3c;
  local_388._Last = local_31e;
  *(int *)(pFVar14 + 0x30) = 0;
  *(int *)(pFVar14 + 0x34) = 0x180;
  pFVar14[0x38] = (FScriptContainerElement)0x2;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)pFVar14,&local_388);
  local_490.__this = this;
  UE::MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::
  Iterate_PerEntityImpl<_UMovieSceneMotionVectorSimulationSystem::ComputeSimulatedMotion_::__l2::<lambda_2>_>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
              *)local_318,(FEntityManager *)(this->_padding_ + 0x28),&local_2d0,&local_490);
  if (local_2d0.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d0.ComplexMasks.AllocatorInstance.Data);
  }
  UE::MovieScene::FEntityComponentFilter::operator=(this_00,&local_b8);
  pUVar10 = UMovieSceneEntitySystemLinker::FindSystem<UMovieSceneComponentTransformSystem>
                      ((UMovieSceneEntitySystemLinker *)this->_padding_);
  if (pUVar10 != (UMovieSceneComponentTransformSystem *)0x0) {
    UMovieSceneEntitySystem::Enable((UMovieSceneEntitySystem *)pUVar10);
  }
  pUVar11 = UMovieSceneEntitySystemLinker::FindSystem<UMovieSceneEvalTimeSystem>
                      ((UMovieSceneEntitySystemLinker *)this->_padding_);
  if (pUVar11 != (UMovieSceneEvalTimeSystem *)0x0) {
    UMovieSceneEntitySystem::Enable((UMovieSceneEntitySystem *)pUVar11);
  }
  UMovieSceneEntitySystem::Enable((UMovieSceneEntitySystem *)this);
  UE::MovieScene::FEntityManager::OnStructureChanged((FEntityManager *)(this->_padding_ + 0x28));
  this->bSimulateTransformsRequested = false;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_378.SharedReferenceCount.ReferenceController);
  if (local_b8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// EnableThisFrame @ 146827cd0

void __thiscall
UMovieSceneMotionVectorSimulationSystem::EnableThisFrame
          (UMovieSceneMotionVectorSimulationSystem *this)

{
  this->bSimulationEnabled = true;
  return;
}

// GetPrivateStaticClass @ 1468361e0

UClass * __cdecl UMovieSceneMotionVectorSimulationSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMotionVectorSimulationSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneMotionVectorSimulationSystem",
               &Z_Registration_Info_UClass_UMovieSceneMotionVectorSimulationSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneMotionVectorSimulationSystem,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneMotionVectorSimulationSystem>
               ,InternalVTableHelperCtorCaller<UMovieSceneMotionVectorSimulationSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMotionVectorSimulationSystem.InnerSingleton;
}

// GetSocketTransform @ 146837940

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTransform<double> * __thiscall
UMovieSceneMotionVectorSimulationSystem::GetSocketTransform
          (UMovieSceneMotionVectorSimulationSystem *this,TTransform<double> *__return_storage_ptr__,
          USceneComponent *param_1,FName param_2)

{
  double dVar1;
  longlong lVar2;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18;
  USceneComponent *local_58;
  TBaseKeyIterator<1> local_50;
  TBaseKeyIterator<1> local_38;
  
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  if (param_1 != (USceneComponent *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_58 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_58);
    local_res18 = local_res8;
  }
  TSet<TTuple<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_38,
             (TSet<TTuple<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform,1>,FDefaultSetAllocator>
              *)&this->TransformData,(FObjectKey *)&local_res18);
  local_50._16_8_ = ZEXT48((uint)local_38.Index);
  local_50.Set = local_38.Set;
  while( true ) {
    if (local_38.Index == 0xffffffff) {
      (**(code **)(param_1->_padding_ + 0x520))(param_1,__return_storage_ptr__,param_2,2);
      return __return_storage_ptr__;
    }
    lVar2 = *(longlong *)&(local_50.Set)->Elements + (longlong)local_38.Index * 0x90;
    if (*(FName *)(lVar2 + 0x70) == param_2) break;
    TSet<TTuple<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform,1>,FDefaultSetAllocator>
    ::TBaseKeyIterator<1>::operator++(&local_50);
    local_38.Index = local_50.Index;
  }
  dVar1 = *(double *)(lVar2 + 0x18);
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)(lVar2 + 0x10);
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = *(double *)(lVar2 + 0x28);
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = *(double *)(lVar2 + 0x20);
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar1;
  dVar1 = *(double *)(lVar2 + 0x38);
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = *(double *)(lVar2 + 0x30);
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar1;
  dVar1 = *(double *)(lVar2 + 0x48);
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = *(double *)(lVar2 + 0x40);
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar1;
  dVar1 = *(double *)(lVar2 + 0x58);
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = *(double *)(lVar2 + 0x50);
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = *(double *)(lVar2 + 0x68);
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = *(double *)(lVar2 + 0x60);
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar1;
  return __return_storage_ptr__;
}

// GetTransform @ 146837e10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTransform<double> * __thiscall
UMovieSceneMotionVectorSimulationSystem::GetTransform
          (UMovieSceneMotionVectorSimulationSystem *this,TTransform<double> *__return_storage_ptr__,
          USceneComponent *param_1)

{
  double dVar1;
  longlong lVar2;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18;
  USceneComponent *local_res20;
  TBaseKeyIterator<1> local_48;
  TBaseKeyIterator<1> local_30;
  
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  if (param_1 != (USceneComponent *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res20 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
    local_res18 = local_res8;
  }
  TSet<TTuple<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_30,
             (TSet<TTuple<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform,1>,FDefaultSetAllocator>
              *)&this->TransformData,(FObjectKey *)&local_res18);
  local_48._16_8_ = ZEXT48((uint)local_30.Index);
  local_48.Set = local_30.Set;
  while( true ) {
    if (local_30.Index == 0xffffffff) {
      USceneComponent::GetRelativeTransform(param_1,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
    lVar2 = *(longlong *)&(local_48.Set)->Elements + (longlong)local_30.Index * 0x90;
    if (*(longlong *)(lVar2 + 0x70) == 0) break;
    TSet<TTuple<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform,1>,FDefaultSetAllocator>
    ::TBaseKeyIterator<1>::operator++(&local_48);
    local_30.Index = local_48.Index;
  }
  dVar1 = *(double *)(lVar2 + 0x18);
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = *(double *)(lVar2 + 0x10);
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = *(double *)(lVar2 + 0x28);
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = *(double *)(lVar2 + 0x20);
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar1;
  dVar1 = *(double *)(lVar2 + 0x38);
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = *(double *)(lVar2 + 0x30);
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar1;
  dVar1 = *(double *)(lVar2 + 0x48);
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = *(double *)(lVar2 + 0x40);
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar1;
  dVar1 = *(double *)(lVar2 + 0x58);
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = *(double *)(lVar2 + 0x50);
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = *(double *)(lVar2 + 0x68);
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = *(double *)(lVar2 + 0x60);
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar1;
  return __return_storage_ptr__;
}

// HavePreviousTransformForParent @ 146839320

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UMovieSceneMotionVectorSimulationSystem::HavePreviousTransformForParent
          (UMovieSceneMotionVectorSimulationSystem *this,USceneComponent *param_1)

{
  USceneComponent *pUVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  FWeakObjectPtr local_res10;
  USceneComponent *local_res18 [2];
  
  pUVar1 = (param_1->AttachParent).field0_0x0.DebugPtr;
  if (pUVar1 != (USceneComponent *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18[0] = pUVar1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
    uVar6 = local_res10.ObjectIndex - local_res10.ObjectSerialNumber ^
            (uint)local_res10.ObjectSerialNumber >> 0xd;
    uVar5 = (-0x61c88647 - uVar6) - local_res10.ObjectSerialNumber ^ uVar6 << 8;
    uVar8 = (local_res10.ObjectSerialNumber - uVar5) - uVar6 ^ uVar5 >> 0xd;
    uVar6 = (uVar6 - uVar8) - uVar5 ^ uVar8 >> 0xc;
    uVar5 = (uVar5 - uVar8) - uVar6 ^ uVar6 << 0x10;
    uVar8 = (uVar8 - uVar5) - uVar6 ^ uVar5 >> 5;
    uVar6 = (uVar6 - uVar8) - uVar5 ^ uVar8 >> 3;
    uVar5 = (uVar5 - uVar6) - uVar8 ^ uVar6 << 10;
    if (*(int *)&(this->TransformData).field_0x8 != *(int *)&(this->TransformData).field_0x34) {
      puVar7 = *(undefined1 **)&(this->TransformData).field_0x40;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(this->TransformData).field_0x38;
      }
      iVar9 = *(int *)(puVar7 + (ulonglong)
                                (*(int *)&(this->TransformData).field_0x48 - 1U &
                                ((uVar8 - uVar5) - uVar6 ^ uVar5 >> 0xf)) * 4);
      if (iVar9 != -1) {
        lVar2 = *(longlong *)&this->TransformData;
        do {
          lVar4 = (longlong)iVar9;
          if ((*(int *)(lVar2 + lVar4 * 0x90) == local_res10.ObjectIndex) &&
             (*(uint *)(lVar2 + 4 + lVar4 * 0x90) == local_res10.ObjectSerialNumber)) {
            if (iVar9 != -1) {
              return true;
            }
            break;
          }
          iVar9 = *(int *)(lVar2 + 0x80 + lVar4 * 0x90);
        } while (iVar9 != -1);
      }
    }
    bVar3 = HavePreviousTransformForParent(this,pUVar1);
    if (bVar3) {
      return true;
    }
  }
  return false;
}

// IsRelevantImpl @ 14683f220

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieSceneMotionVectorSimulationSystem::IsRelevantImpl
          (UMovieSceneMotionVectorSimulationSystem *this,UMovieSceneEntitySystemLinker *param_1)

{
  return GMotionVectorSimulation != 0;
}

// OnPostEvaluation @ 1468442e0

void __thiscall
UMovieSceneMotionVectorSimulationSystem::OnPostEvaluation
          (UMovieSceneMotionVectorSimulationSystem *this)

{
  if (this->bSimulateTransformsRequested != false) {
    ComputeSimulatedMotion(this);
  }
  PropagateMotionToComponents(this);
  return;
}

// OnRun @ 146847220

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneMotionVectorSimulationSystem::OnRun
          (UMovieSceneMotionVectorSimulationSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  <lambda_1> local_res20;
  TSharedRef<FMovieSceneEntitySystemRunner,1> local_18;
  
  UMovieSceneEntitySystemLinker::GetRunner
            ((UMovieSceneEntitySystemLinker *)this->_padding_,&local_18);
  if (((local_18.Object)->CurrentPhase == Finalization) && (this->bSimulationEnabled != false)) {
    this_00 = FMovieSceneEntitySystemRunner::GetQueuedEventTriggers(local_18.Object);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddLambda<_UMovieSceneMotionVectorSimulationSystem::OnRun_::__l5::<lambda_1>_>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               this_00,&local_res20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// PreserveSimulatedMotion @ 146857720

void __thiscall
UMovieSceneMotionVectorSimulationSystem::PreserveSimulatedMotion
          (UMovieSceneMotionVectorSimulationSystem *this,bool param_1)

{
  this->bPreserveTransforms = param_1;
  return;
}

// PropagateMotionToComponents @ 1468592f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovieSceneMotionVectorSimulationSystem::PropagateMotionToComponents
          (UMovieSceneMotionVectorSimulationSystem *this)

{
  TMultiMap<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform,1>_>
  *this_00;
  undefined1 *puVar1;
  ulonglong uVar2;
  USceneComponent *pUVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  USceneComponent *pUVar10;
  UClass *pUVar11;
  TTransform<double> *pTVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  undefined1 auStack_328 [32];
  undefined1 local_308 [8];
  FWeakObjectPtr local_300;
  USceneComponent *local_2f8;
  longlong *local_2f0;
  uint uStack_2e8;
  uint uStack_2e4;
  TBitArray<FDefaultBitArrayAllocator> *local_2e0;
  undefined4 uStack_2d8;
  uint uStack_2d4;
  uint local_2d0;
  uint uStack_2cc;
  int iStack_2c8;
  undefined4 uStack_2c4;
  longlong *local_2b8;
  undefined1 auStack_2b0 [16];
  uint uStack_2a0;
  int iStack_29c;
  longlong local_298;
  TSet<TTuple<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform,1>,FDefaultSetAllocator>
  *pTStack_290;
  TSet<TTuple<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform,1>,FDefaultSetAllocator>
  *local_288;
  undefined2 local_280;
  undefined8 local_278;
  int local_270;
  longlong *local_268;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_260;
  undefined8 uStack_240;
  undefined1 local_238 [32];
  longlong local_218;
  TSet<TTuple<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform,1>,FDefaultSetAllocator>
  *pTStack_210;
  undefined1 local_208 [32];
  uint *local_1e8;
  uint local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  int local_1d4;
  ForElementType<FSetElementId> local_1c8;
  int local_1c0;
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  ulonglong local_c8;
  double local_b8;
  double dStack_b0;
  ulonglong local_a8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_328;
  local_1dc = 0x80;
  this_00 = &this->TransformData;
  local_208._0_8_ = 0;
  local_208._8_8_ = 0;
  local_1e8 = (uint *)0x0;
  uVar16 = 0;
  local_1e0 = 0;
  local_1d8 = 0xffffffff;
  local_1d4 = 0;
  local_1c8 = (ForElementType<FSetElementId>)0x0;
  local_1c0 = 0;
  TSet<TTuple<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform,1>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_238,
             (TSet<TTuple<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform,1>,FDefaultSetAllocator>
              *)this_00);
  uVar9 = 1;
  local_280 = 0;
  stack0xfffffffffffffd58 = local_238._16_16_;
  local_2b8 = (longlong *)local_238._0_8_;
  auStack_2b0._0_8_ = local_238._8_8_;
  local_298 = local_218;
  pTStack_290 = pTStack_210;
  iVar8 = local_238._28_4_;
  local_288 = (TSet<TTuple<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform,1>,FDefaultSetAllocator>
               *)this_00;
  if (iVar8 < *(int *)(local_238._16_8_ + 0x18)) {
    do {
      local_300.ObjectIndex = *(int *)(*local_2b8 + (longlong)iVar8 * 0x90);
      local_300.ObjectSerialNumber = *(int *)(*local_2b8 + 4 + (longlong)iVar8 * 0x90);
      pUVar10 = (USceneComponent *)FWeakObjectPtr::Get(&local_300);
      if (pUVar10 == (USceneComponent *)0x0) {
LAB_146859431:
        local_2f8 = (USceneComponent *)0x0;
      }
      else {
        pUVar11 = Z_Construct_UClass_USceneComponent_NoRegister();
        iVar8 = (int)pUVar11->_padding_;
        if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar8) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar8 * 8) !=
            &pUVar11->_padding_)) goto LAB_146859431;
        local_2f8 = pUVar10;
        bVar7 = HavePreviousTransformForParent(this,pUVar10);
        if (!bVar7) {
          TSet<USceneComponent_*,DefaultKeyFuncs<USceneComponent_*,0>,FDefaultSetAllocator>::
          Emplace<USceneComponent_*_const_&>
                    ((TSet<USceneComponent_*,DefaultKeyFuncs<USceneComponent_*,0>,FDefaultSetAllocator>
                      *)local_208,(USceneComponent **)&local_278,(bool *)&local_2f8);
        }
      }
      uStack_2a0 = uStack_2a0 & ~auStack_2b0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_2b0);
      iVar8 = iStack_29c;
    } while (iStack_29c < *(int *)(auStack_2b0._8_8_ + 0x18));
    if (((char)local_280 != '\0') && (local_280._1_1_ != '\0')) {
      uVar15 = *(int *)&(local_288->Elements).field_0x8 - *(int *)&(local_288->Elements).field_0x34;
      if (uVar15 < 4) {
        iVar8 = 1;
      }
      else {
        uVar2 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
        lVar4 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        local_278._4_4_ = (undefined4)lVar4;
        iVar8 = 1 << ((byte)lVar4 & 0x1f);
      }
      if (((0 < (int)uVar15) && (local_288->HashSize < iVar8)) || (iVar8 < local_288->HashSize)) {
        local_288->HashSize = iVar8;
        TSet<TTuple<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform,1>,FDefaultSetAllocator>
        ::Rehash(local_288);
      }
    }
  }
  uVar15 = local_1e0;
  local_2d0 = 0;
  uStack_2d4 = local_2d0;
  if (local_1e0 != 0) {
    puVar17 = (uint *)(local_208 + 0x10);
    if (local_1e8 != (uint *)0x0) {
      puVar17 = local_1e8;
    }
    uVar14 = *puVar17;
    uVar16 = 0;
    local_2d0 = 0;
    while (uVar14 == 0) {
      uVar16 = uVar16 + 1;
      local_2d0 = local_2d0 + 0x20;
      uStack_2d4 = local_1e0;
      if ((int)((local_1e0 - 1) + ((int)(local_1e0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
      goto LAB_14685952f;
      uVar14 = puVar17[(int)uVar16];
    }
    uVar9 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_270 = (int)lVar4;
    uStack_2d4 = local_270 + -1 + local_2d0;
    if ((int)local_1e0 < (int)uStack_2d4) {
      uStack_2d4 = local_1e0;
    }
  }
LAB_14685952f:
  local_2f0 = (longlong *)local_208;
  local_2e0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_208 + 0x10);
  uVar14 = local_1e0 & 0xffffffe0;
  iStack_2c8 = local_208._8_4_ - local_1d4;
  uStack_2d8 = 0xffffffff;
  TStack_260.CurrentBitIndex = uStack_2d4;
  TStack_260.UnvisitedBitMask = 0xffffffff;
  TStack_260._padding_ = CONCAT44(uVar9,uVar16);
  iVar8 = (int)local_1e0 >> 5;
  TStack_260._28_4_ = uStack_2d4;
  TStack_260.BaseBitIndex = local_2d0;
  uStack_240 = CONCAT44(uStack_2c4,iStack_2c8);
  bVar13 = (byte)local_1e0;
  uStack_2e8 = uVar16;
  uStack_2e4 = uVar9;
  uStack_2cc = uStack_2d4;
  local_268 = local_2f0;
  TStack_260.Array = local_2e0;
  if (((int)local_1e0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (uVar15 != local_1e0) {
    puVar17 = (uint *)(local_208 + 0x10);
    if (local_1e8 != (uint *)0x0) {
      puVar17 = local_1e8;
    }
    uVar16 = -1 << (bVar13 & 0x1f) & puVar17[iVar8];
    while (uVar16 == 0) {
      iVar8 = iVar8 + 1;
      uVar14 = uVar14 + 0x20;
      uVar15 = local_1e0;
      if ((int)(((int)(local_1e0 - 1) >> 0x1f & 0x1fU) + (local_1e0 - 1)) >> 5 < iVar8)
      goto LAB_146859640;
      uVar16 = puVar17[iVar8];
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar15 = (int)lVar4 + -1 + uVar14;
    if ((int)local_1e0 < (int)uVar15) {
      uVar15 = local_1e0;
    }
  }
LAB_146859640:
  while( true ) {
    plVar6 = local_268;
    if ((int)local_268[1] - *(int *)((longlong)local_268 + 0x34) != (int)uStack_240) {
      `TSparseArray<TSparseSetElement<USceneComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_308);
    }
    if (((TStack_260.CurrentBitIndex == uVar15) &&
        (TStack_260.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_208 + 0x10))) &&
       (plVar6 == (longlong *)local_208)) break;
    local_1b8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_1b8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    pUVar10 = *(USceneComponent **)(*plVar6 + (longlong)TStack_260.CurrentBitIndex * 0x10);
    local_1b8.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_1b8.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    pUVar3 = (pUVar10->AttachParent).field0_0x0.DebugPtr;
    local_1b8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_1b8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    if (pUVar3 != (USceneComponent *)0x0) {
      (**(code **)(pUVar3->_padding_ + 0x520))(pUVar3,&local_f8,pUVar10->AttachSocketName,0);
      if (pUVar10->bAbsoluteLocation == '\0') {
        local_1b8.Translation.XY.m128d_f64[1] = dStack_d0;
        local_1b8.Translation.XY.m128d_f64[0] = local_d8;
        local_1b8.Translation.ZW.m128d_f64[1] = 0.0;
        local_1b8.Translation.ZW.m128d_f64[0] = (double)local_c8;
      }
      if (pUVar10->bAbsoluteRotation == '\0') {
        local_1b8.Rotation.XY.m128d_f64[1] = dStack_f0;
        local_1b8.Rotation.XY.m128d_f64[0] = local_f8;
        local_1b8.Rotation.ZW.m128d_f64[1] = dStack_e0;
        local_1b8.Rotation.ZW.m128d_f64[0] = local_e8;
      }
      if (pUVar10->bAbsoluteScale == '\0') {
        local_1b8.Scale3D.XY.m128d_f64[1] = dStack_b0;
        local_1b8.Scale3D.XY.m128d_f64[0] = local_b8;
        local_1b8.Scale3D.ZW.m128d_f64[1] = 0.0;
        local_1b8.Scale3D.ZW.m128d_f64[0] = (double)local_a8;
      }
    }
    pTVar12 = GetTransform(this,&local_98,pUVar10);
    local_158.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_158.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_158.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_158.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_158.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_158.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_158.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_158.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_158.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_158.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_158.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_158.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_158.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_158.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_158,pTVar12,&local_1b8);
    ApplySimulatedTransforms(this,pUVar10,&local_158);
    TStack_260.UnvisitedBitMask = TStack_260.UnvisitedBitMask & ~TStack_260._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_260);
  }
  if (this->bPreserveTransforms == false) {
    TSet<TTuple<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform,1>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform>,TDefaultMapHashableKeyFuncs<FObjectKey,UMovieSceneMotionVectorSimulationSystem::FSimulatedTransform,1>,FDefaultSetAllocator>
             *)this_00);
    this->bSimulationEnabled = false;
  }
  local_1c0 = 0;
  if (local_1c8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1c8);
  }
  TSparseArray<TSparseSetElement<USceneComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<USceneComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<USceneComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_208);
  return;
}

// SimulateAllTransforms @ 14686ca00

void __thiscall
UMovieSceneMotionVectorSimulationSystem::SimulateAllTransforms
          (UMovieSceneMotionVectorSimulationSystem *this)

{
  this->bSimulationEnabled = true;
  this->bSimulateTransformsRequested = true;
  return;
}

// StaticRegisterNativesUMovieSceneMotionVectorSimulationSystem @ 14686cb40

void __cdecl
UMovieSceneMotionVectorSimulationSystem::
StaticRegisterNativesUMovieSceneMotionVectorSimulationSystem(void)

{
  return;
}

