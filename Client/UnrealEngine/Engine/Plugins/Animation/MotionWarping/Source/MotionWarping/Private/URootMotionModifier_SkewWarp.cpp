// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 10

// StaticClass @ 14ceff8c0

UClass * __cdecl URootMotionModifier_SkewWarp::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URootMotionModifier_SkewWarp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"RootMotionModifier_SkewWarp",
               &Z_Registration_Info_UClass_URootMotionModifier_SkewWarp.InnerSingleton,
               StaticRegisterNativesURootMotionModifier_SkewWarp,0x370,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URootMotionModifier_SkewWarp>,
               InternalVTableHelperCtorCaller<URootMotionModifier_SkewWarp>,local_res8,
               URootMotionModifier_Warp::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URootMotionModifier_SkewWarp.InnerSingleton;
}

// URootMotionModifier_SkewWarp @ 14cf05320

URootMotionModifier_SkewWarp * __thiscall
URootMotionModifier_SkewWarp::URootMotionModifier_SkewWarp
          (URootMotionModifier_SkewWarp *this,FVTableHelper *param_1)

{
  URootMotionModifier_Warp::URootMotionModifier_Warp((URootMotionModifier_Warp *)this,param_1);
  this->MaxSpeedClampRatio = 0.0;
  this->_padding_ = (longlong)&___7URootMotionModifier_SkewWarp__6B_;
  return this;
}

// URootMotionModifier_SkewWarp @ 14cf05360

URootMotionModifier_SkewWarp * __thiscall
URootMotionModifier_SkewWarp::URootMotionModifier_SkewWarp
          (URootMotionModifier_SkewWarp *this,FObjectInitializer *param_1)

{
  URootMotionModifier_Warp::URootMotionModifier_Warp((URootMotionModifier_Warp *)this,param_1);
  this->MaxSpeedClampRatio = 0.0;
  this->_padding_ = (longlong)&___7URootMotionModifier_SkewWarp__6B_;
  return this;
}

// ~URootMotionModifier_SkewWarp @ 14cf05b90

void __thiscall
URootMotionModifier_SkewWarp::~URootMotionModifier_SkewWarp(URootMotionModifier_SkewWarp *this)

{
  this->_padding_ = (longlong)&___7URootMotionModifier__6B_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// AddRootMotionModifierSkewWarp @ 14cf07c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

URootMotionModifier_SkewWarp * __cdecl
URootMotionModifier_SkewWarp::AddRootMotionModifierSkewWarp
          (UMotionWarpingComponent *param_1,UAnimSequenceBase *param_2,float param_3,float param_4,
          FName param_5,EWarpPointAnimProvider param_6,TTransform<double> *param_7,FName param_8,
          bool param_9,bool param_10,bool param_11,EMotionWarpRotationType param_12,
          EMotionWarpRotationMethod param_13,float param_14,float param_15)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  URootMotionModifier_SkewWarp *pUVar7;
  UClass *pUVar8;
  longlong *plVar9;
  undefined1 auStackY_f8 [32];
  UAnimSequenceBase *local_c8 [2];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if (param_1 == (UMotionWarpingComponent *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5546418154990730994>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\MotionWarping\\Source\\MotionWarping\\Private\\RootMotionModifier_SkewWarp.cpp"
                       ,0x10e,"InMotionWarpingComp");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      pUVar7 = (URootMotionModifier_SkewWarp *)(*pcVar1)();
      return pUVar7;
    }
    pUVar7 = (URootMotionModifier_SkewWarp *)0x0;
  }
  else {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar8 = StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar8);
    local_b8._8_8_ = param_1;
    pUVar7 = (URootMotionModifier_SkewWarp *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar9 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar9 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    local_c8[0] = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UAnimSequenceBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar7->_padding_,(FObjectPtr)local_c8);
    pUVar7->_padding_ = (longlong)param_5;
    *(EWarpPointAnimProvider *)&pUVar7->_padding_ = param_6;
    *(float *)&pUVar7->_padding_ = param_3;
    *(float *)((longlong)&pUVar7->_padding_ + 4) = param_4;
    dVar2 = (param_7->Rotation).XY.m128d_f64[1];
    dVar3 = (param_7->Rotation).ZW.m128d_f64[0];
    dVar4 = (param_7->Rotation).ZW.m128d_f64[1];
    pUVar7->_padding_ = (longlong)(param_7->Rotation).XY.m128d_f64[0];
    pUVar7->_padding_ = (longlong)dVar2;
    dVar2 = (param_7->Translation).XY.m128d_f64[0];
    dVar5 = (param_7->Translation).XY.m128d_f64[1];
    pUVar7->_padding_ = (longlong)dVar3;
    pUVar7->_padding_ = (longlong)dVar4;
    dVar3 = (param_7->Translation).ZW.m128d_f64[0];
    dVar4 = (param_7->Translation).ZW.m128d_f64[1];
    pUVar7->_padding_ = (longlong)dVar2;
    pUVar7->_padding_ = (longlong)dVar5;
    dVar2 = (param_7->Scale3D).XY.m128d_f64[0];
    dVar5 = (param_7->Scale3D).XY.m128d_f64[1];
    pUVar7->_padding_ = (longlong)dVar3;
    pUVar7->_padding_ = (longlong)dVar4;
    dVar3 = (param_7->Scale3D).ZW.m128d_f64[0];
    dVar4 = (param_7->Scale3D).ZW.m128d_f64[1];
    pUVar7->_padding_ = (longlong)param_8;
    *(bool *)&pUVar7->_padding_ = param_9;
    *(bool *)((longlong)&pUVar7->_padding_ + 1) = param_10;
    *(bool *)&pUVar7->_padding_ = param_11;
    pUVar7->_padding_ = (longlong)dVar2;
    pUVar7->_padding_ = (longlong)dVar5;
    *(EMotionWarpRotationType *)((longlong)&pUVar7->_padding_ + 1) = param_12;
    pUVar7->_padding_ = (longlong)dVar3;
    pUVar7->_padding_ = (longlong)dVar4;
    *(EMotionWarpRotationMethod *)((longlong)&pUVar7->_padding_ + 2) = param_13;
    *(float *)((longlong)&pUVar7->_padding_ + 4) = param_14;
    *(float *)&pUVar7->_padding_ = param_15;
    UMotionWarpingComponent::AddModifier(param_1,(URootMotionModifier *)pUVar7);
  }
  return pUVar7;
}

// GetPrivateStaticClass @ 14cf10d40

UClass * __cdecl URootMotionModifier_SkewWarp::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URootMotionModifier_SkewWarp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"RootMotionModifier_SkewWarp",
               &Z_Registration_Info_UClass_URootMotionModifier_SkewWarp.InnerSingleton,
               StaticRegisterNativesURootMotionModifier_SkewWarp,0x370,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<URootMotionModifier_SkewWarp>,
               InternalVTableHelperCtorCaller<URootMotionModifier_SkewWarp>,local_res8,
               URootMotionModifier_Warp::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URootMotionModifier_SkewWarp.InnerSingleton;
}

// ProcessRootMotion @ 14cf18940

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

TTransform<double> * __thiscall
URootMotionModifier_SkewWarp::ProcessRootMotion
          (URootMotionModifier_SkewWarp *this,TTransform<double> *__return_storage_ptr__,
          TTransform<double> *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  longlong *plVar3;
  USceneComponent *pUVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  ForAnyElementType FVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  TConsoleVariableData<int> *pTVar10;
  TConsoleVariableData<float> *pTVar11;
  bool bVar12;
  UClass *pUVar13;
  AActor *this_00;
  UAnimSequenceBase *pUVar14;
  TTransform<double> *pTVar15;
  longlong lVar16;
  TVector<double> *pTVar17;
  TQuat<double> *pTVar18;
  UWorld *pUVar19;
  float fVar20;
  uint uVar21;
  double dVar22;
  uint uVar30;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uVar31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar32;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  double dVar51;
  double dVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar60;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined1 auStackY_6b8 [32];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_648;
  TVector<double>_u_0 local_638;
  double local_620;
  double local_618;
  double local_610;
  double local_608;
  double dStack_600;
  TVector<double>_u_0 local_5f8;
  double local_5d8;
  double dStack_5d0;
  double local_5c8;
  TVector<double>_u_0 local_5c0;
  double local_5a8 [2];
  double local_598;
  TVector<double>_u_0 local_590;
  TVector<double>_u_0 local_578;
  uint local_558;
  uint uStack_554;
  uint uStack_550;
  uint uStack_54c;
  double local_548;
  double dStack_540;
  TVector<double>_u_0 local_538;
  TVector<double>_u_0 local_520;
  TVector<double>_u_0 local_508;
  TRotator<double> local_4e8;
  undefined1 local_4c8 [32];
  double local_4a8;
  double dStack_4a0;
  double local_498;
  double local_490;
  double dStack_488;
  double local_480;
  double local_478;
  double dStack_470;
  undefined8 local_468;
  undefined4 local_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined8 local_450;
  double local_448;
  double dStack_440;
  double local_438;
  undefined1 local_430 [16];
  double local_420;
  double local_418;
  double dStack_410;
  double local_408;
  undefined4 local_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined8 local_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  double local_3b8;
  double dStack_3b0;
  TVector<double> local_3a8;
  TQuat<double> local_388;
  TQuat<double> local_368;
  TQuat<double> local_348;
  undefined1 local_328 [40];
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_6b8;
  lVar16 = this->_padding_;
  if (lVar16 != 0) {
    pUVar13 = UMotionWarpingComponent::StaticClass();
    iVar2 = (int)pUVar13->_padding_;
    if ((((iVar2 <= *(int *)(*(longlong *)(lVar16 + 0x10) + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) + (longlong)iVar2 * 8)
          == &pUVar13->_padding_)) &&
        (plVar3 = *(longlong **)(lVar16 + 0xe0), plVar3 != (longlong *)0x0)) &&
       (this_00 = (AActor *)(**(code **)(*plVar3 + 0x2b0))(plVar3), this_00 != (AActor *)0x0)) {
      local_328._0_8_ = (param_1->Rotation).XY.m128d_f64[0];
      local_328._8_8_ = (param_1->Rotation).XY.m128d_f64[1];
      local_328._16_16_ = *(undefined1 (*) [16])(param_1->Rotation).ZW.m128d_f64;
      fVar20 = *(float *)&this->_padding_;
      fVar1 = *(float *)((longlong)&this->_padding_ + 4);
      unique0x10002230 = *&(param_1->Translation).XY.m128d_f64;
      local_2f8 = (param_1->Translation).ZW.m128d_f64[0];
      dStack_2f0 = (param_1->Translation).ZW.m128d_f64[1];
      local_2e8 = (param_1->Scale3D).XY.m128d_f64[0];
      dStack_2e0 = (param_1->Scale3D).XY.m128d_f64[1];
      local_2d8 = (param_1->Scale3D).ZW.m128d_f64[0];
      dStack_2d0 = (param_1->Scale3D).ZW.m128d_f64[1];
      pUVar14 = (UAnimSequenceBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      UMotionWarpingUtilities::ExtractRootMotionFromAnimation(&local_208,pUVar14,fVar20,fVar1);
      fVar20 = *(float *)((longlong)&this->_padding_ + 4);
      fVar1 = *(float *)((longlong)&this->_padding_ + 4);
      if (fVar1 <= fVar20) {
        fVar20 = fVar1;
      }
      fVar1 = *(float *)&this->_padding_;
      pUVar14 = (UAnimSequenceBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      UMotionWarpingUtilities::ExtractRootMotionFromAnimation(&local_1a8,pUVar14,fVar1,fVar20);
      fVar20 = *(float *)((longlong)&this->_padding_ + 4);
      fVar1 = *(float *)((longlong)&this->_padding_ + 4);
      uVar61 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
      uVar62 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
      uVar63 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
      uVar64 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
      uVar65 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
      uVar66 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
      local_648 = (TArray<wchar_t,TSizedDefaultAllocator<32>_>)
                  UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      local_5f8._s_0.X = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
      local_5f8._s_0.Y = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
      local_268.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_268.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      if (fVar1 < fVar20) {
        pUVar14 = (UAnimSequenceBase *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        pTVar15 = UMotionWarpingUtilities::ExtractRootMotionFromAnimation
                            (&local_148,pUVar14,fVar1,fVar20);
        local_648 = *(TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(pTVar15->Rotation).XY.m128d_f64
        ;
        local_5f8._0_16_ = *(undefined1 (*) [16])(pTVar15->Rotation).ZW.m128d_f64;
        uVar61 = *(undefined4 *)(pTVar15->Translation).XY.m128d_f64;
        uVar62 = *(undefined4 *)((longlong)(pTVar15->Translation).XY.m128d_f64 + 4);
        uVar63 = *(undefined4 *)((pTVar15->Translation).XY.m128d_f64 + 1);
        uVar64 = *(undefined4 *)((longlong)(pTVar15->Translation).XY.m128d_f64 + 0xc);
        uVar65 = *(undefined4 *)(pTVar15->Translation).ZW.m128d_f64;
        uVar66 = *(undefined4 *)((longlong)(pTVar15->Translation).ZW.m128d_f64 + 4);
        local_268.Scale3D.XY.m128d_f64 = *&(pTVar15->Scale3D).XY.m128d_f64;
        local_268.Scale3D.ZW.m128d_f64 = *&(pTVar15->Scale3D).ZW.m128d_f64;
      }
      if ((char)this->_padding_ != '\0') {
        if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
          if ((char)this->_padding_ == '\0') {
            (**(code **)(*plVar3 + 0x2c0))(plVar3,&local_620);
            lVar16 = (**(code **)(*plVar3 + 0x2b0))(plVar3);
            lVar16 = *(longlong *)(lVar16 + 0x1b8);
            if (lVar16 == 0) {
              dVar51 = 0.0;
              dVar32 = 0.0;
              local_3c8 = 0;
              uStack_3c0 = 0;
              local_3b8 = ___xmm_3ff00000000000000000000000000000;
              dStack_3b0 = _UNK_15061cbc8;
              local_608 = ___xmm_3ff00000000000000000000000000000;
              dStack_600 = _UNK_15061cbc8;
            }
            else {
              dVar51 = *(double *)(lVar16 + 0x1f0);
              dVar32 = *(double *)(lVar16 + 0x1f8);
              local_3d8 = *(double *)(lVar16 + 0x200);
              dStack_3d0 = *(double *)(lVar16 + 0x208);
              local_608 = local_3d8;
              dStack_600 = dStack_3d0;
              local_3e8 = dVar51;
              dStack_3e0 = dVar32;
            }
            (**(code **)(*plVar3 + 0x2c8))(plVar3,&local_5d8);
            if (*(char *)((longlong)&this->_padding_ + 2) == '\0') {
              local_5c8 = 0.0;
            }
            (**(code **)(*plVar3 + 0x2d0))(plVar3);
            dVar40 = local_610;
            dVar45 = __real_3f1a36e2e0000000;
            dVar55 = (double)this->_padding_;
            dVar60 = (double)this->_padding_;
            local_638._s_0.Z = (double)this->_padding_;
            uVar53 = SUB84(local_638._s_0.Z,0);
            uVar54 = (undefined4)((ulonglong)local_638._s_0.Z >> 0x20);
            local_5c0._s_0.Z = local_1a8.Translation.ZW.m128d_f64[0];
            local_520._s_0.Z = local_208.Translation.ZW.m128d_f64[0];
            local_5c0._s_0.X = local_1a8.Translation.XY.m128d_f64[0];
            local_5c0._s_0.Y = local_1a8.Translation.XY.m128d_f64[1];
            local_520._s_0.X = local_208.Translation.XY.m128d_f64[0];
            local_520._s_0.Y = local_208.Translation.XY.m128d_f64[1];
            if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
              local_638._s_0.Z = local_610;
              uVar53 = SUB84(local_610,0);
              uVar54 = (int)((ulonglong)local_610 >> 0x20);
            }
            local_538._s_0.Z = (double)this->_padding_;
            local_538._s_0.X = (double)this->_padding_;
            local_538._s_0.Y = (double)this->_padding_;
            local_638._s_0.X = dVar55;
            local_638._s_0.Y = dVar60;
            bVar12 = UE::Math::TVector<double>::IsNearlyZero
                               ((TVector<double> *)&local_538._s_0,__real_3f1a36e2e0000000);
            if (bVar12) {
              local_590._s_0.X = dVar55 - local_620;
              local_590._s_0.Z = (double)CONCAT44(uVar54,uVar53) - dVar40;
              local_590._s_0.Y = dVar60 - local_618;
              if (((dVar45 < (double)CONCAT44((uint)((ulonglong)local_590._s_0.X >> 0x20) &
                                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                              SUB84(local_590._s_0.X,0) &
                                              (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
                  (dVar45 < (double)CONCAT44((uint)((ulonglong)local_590._s_0.Y >> 0x20) &
                                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                             SUB84(local_590._s_0.Y,0) &
                                             (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
                 (uVar33 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
                 uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
                 uVar31 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
                 dVar45 < (double)CONCAT44((uint)((ulonglong)local_590._s_0.Z >> 0x20) &
                                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                           SUB84(local_590._s_0.Z,0) &
                                           (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
                fVar20 = (*(float *)((longlong)&this->_padding_ + 4) - *(float *)&this->_padding_) /
                         (*(float *)((longlong)&this->_padding_ + 4) - *(float *)&this->_padding_);
                if (__real_3f800000 <= fVar20) {
                  fVar20 = __real_3f800000;
                }
                if (fVar20 <= 0.0) {
                  fVar20 = 0.0;
                }
                fVar20 = FAlphaBlend::AlphaToBlendOption
                                   (fVar20,*(EAlphaBlendOption *)((longlong)&this->_padding_ + 3),
                                    (UCurveFloat *)this->_padding_);
                local_490 = (double)this->_padding_;
                dStack_488 = (double)this->_padding_;
                local_480 = (double)this->_padding_;
                dVar40 = (double)fVar20;
                dVar45 = ((double)CONCAT44(uVar54,uVar53) - local_480) * dVar40 + local_480;
                if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
                  dVar45 = local_610;
                }
                dVar51 = dVar51 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
                dVar32 = dVar32 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
                dVar57 = local_608 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
                dVar22 = dStack_600 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
                dVar56 = ((dVar55 - local_490) * dVar40 + local_490) - local_620;
                dVar60 = ((dVar60 - dStack_488) * dVar40 + dStack_488) - local_618;
                pTVar18 = UE::Math::TVector<double>::ToOrientationQuat
                                    ((TVector<double> *)&local_590._s_0,&local_388);
                auVar48._8_4_ = SUB84(dVar51,0);
                auVar48._0_8_ = dVar51;
                auVar48._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
                dVar40 = pTVar18->Z;
                dVar44 = pTVar18->W;
                dVar50 = pTVar18->X;
                dVar52 = pTVar18->Y;
                auVar38._8_4_ = SUB84(dVar32,0);
                auVar38._0_8_ = dVar32;
                auVar38._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
                auVar34._8_4_ = SUB84(dVar22,0);
                auVar34._0_8_ = dVar22;
                auVar34._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
                auVar47._8_4_ = SUB84(dVar57,0);
                auVar47._0_8_ = dVar57;
                auVar47._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
                local_4c8._0_8_ =
                     dVar51 * dVar44 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                     dVar22 * dVar50 +
                     dVar32 * dVar40 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                     dVar57 * dVar52 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
                local_4c8._8_8_ =
                     auVar48._8_8_ * dVar40 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                     auVar34._8_8_ * dVar52 +
                     auVar38._8_8_ * dVar44 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                     auVar47._8_8_ * dVar50 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
                local_478 = ___xmm_00000000000000003ff0000000000000;
                dStack_470 = _UNK_150689518;
                dVar55 = dVar51 * dVar50 *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                         dVar22 * dVar44 +
                         dVar32 * dVar52 *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                         dVar57 * dVar40 *
                         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
                local_508._s_0.X = ___xmm_00000000000000003ff0000000000000;
                local_508._s_0.Y = _UNK_150689518;
                local_468 = 0;
                local_4c8._24_4_ = SUB84(dVar55,0);
                local_4c8._16_8_ =
                     dVar51 * dVar52 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                     dVar22 * dVar40 +
                     dVar32 * dVar50 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                     dVar57 * dVar44 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
                local_4c8._28_4_ = (int)((ulonglong)dVar55 >> 0x20);
                local_508._s_0.Z = 0.0;
                UE::Math::TQuat<double>::RotateVector
                          ((TQuat<double> *)local_4c8,(TVector<double> *)&local_578._s_0,
                           (TVector<double> *)&local_508._s_0);
                dVar32 = SQRT(dVar60 * dVar60 + dVar56 * dVar56 +
                              (dVar45 - local_610) * (dVar45 - local_610));
                dVar57 = local_578._s_0.Z * dVar32;
                dVar60 = local_578._s_0.X * dVar32;
                dVar32 = local_578._s_0.Y * dVar32;
                uVar21 = (uint)__xmm_80000000000000008000000000000000;
                local_558 = local_558 ^ uVar21;
                uVar30 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
                uStack_554 = uStack_554 ^ uVar30;
                uStack_550 = uStack_550 ^ uVar21;
                uStack_54c = uStack_54c ^ uVar30;
                dVar55 = (double)CONCAT44((uint)((ulonglong)local_548 >> 0x20) ^ uVar30,
                                          SUB84(local_548,0) ^ uVar21);
                dVar51 = dVar57 * (double)CONCAT44(uStack_54c,uStack_550) - dVar32 * dVar55;
                local_450 = CONCAT44(uVar66,uVar65);
                dVar51 = dVar51 + dVar51;
                dVar40 = dVar60 * dVar55 - dVar57 * (double)CONCAT44(uStack_554,local_558);
                dVar40 = dVar40 + dVar40;
                dVar45 = dVar32 * (double)CONCAT44(uStack_554,local_558) -
                         dVar60 * (double)CONCAT44(uStack_54c,uStack_550);
                dVar45 = dVar45 + dVar45;
                local_448 = ((double)CONCAT44(uStack_54c,uStack_550) * dVar45 - dVar55 * dVar40) +
                            dStack_540 * dVar51 + dVar60 + (double)CONCAT44(uVar62,uVar61);
                dStack_440 = (dVar51 * dVar55 - (double)CONCAT44(uStack_554,local_558) * dVar45) +
                             dStack_540 * dVar40 + dVar32 + (double)CONCAT44(uVar64,uVar63);
                local_438 = ((double)CONCAT44(uStack_554,local_558) * dVar40 -
                            dVar51 * (double)CONCAT44(uStack_54c,uStack_550)) +
                            dStack_540 * dVar45 + dVar57 + (double)CONCAT44(uVar66,uVar65);
                uVar33 = local_438;
                uVar23 = local_448;
                uVar31 = dStack_440;
                local_460 = uVar61;
                uStack_45c = uVar62;
                uStack_458 = uVar63;
                uStack_454 = uVar64;
              }
              dStack_300 = (double)uVar31;
              local_328._32_8_ = uVar23;
            }
            else {
              if ((((double)CONCAT44(local_1a8.Translation.XY.m128d_f64[0]._4_4_ &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     local_1a8.Translation.XY.m128d_f64[0]._0_4_ &
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= dVar45) &&
                  ((double)CONCAT44(local_1a8.Translation.XY.m128d_f64[1]._4_4_ &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    local_1a8.Translation.XY.m128d_f64[1]._0_4_ &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= dVar45)) &&
                 ((double)CONCAT44((uint)((ulonglong)local_5c0._16_8_ >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(local_5c0._s_0.Z,0) &
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= dVar45))
              goto LAB_14cf195fa;
              pUVar4 = (this_00->RootComponent).field0_0x0.DebugPtr;
              local_268.Translation.XY.m128d_f64[0] = local_5d8;
              local_268.Translation.XY.m128d_f64[1] = dStack_5d0;
              pTVar15 = &pUVar4->ComponentToWorld;
              local_268.Rotation.ZW.m128d_f64[0] = local_548;
              local_268.Rotation.ZW.m128d_f64[1] = dStack_540;
              local_268.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
              local_268.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
              local_268.Translation.ZW.m128d_f64[0] = local_5c8;
              local_268.Translation.ZW.m128d_f64[1] = 0.0;
              local_268.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
              local_268.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
              if (pUVar4 == (USceneComponent *)0x0) {
                pTVar15 = &UE::Math::TTransform<double>::Identity;
              }
              local_2c8.Rotation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_2c8.Rotation.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[1];
              local_2c8.Rotation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_2c8.Rotation.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[3];
              local_2c8.Translation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_2c8.Translation.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[1];
              local_2c8.Translation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_2c8.Translation.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[3];
              local_2c8.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_2c8.Scale3D.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[1];
              local_2c8.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              local_2c8.Scale3D.ZW.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[3];
              UE::Math::TTransform<double>::Multiply(&local_2c8,&local_268,pTVar15);
              dVar55 = dVar55 - local_2c8.Translation.XY.m128d_f64[0];
              dVar60 = dVar60 - local_2c8.Translation.XY.m128d_f64[1];
              dVar22 = (double)CONCAT44(uVar54,uVar53) - local_2c8.Translation.ZW.m128d_f64[0];
              dVar50 = local_2c8.Rotation.XY.m128d_f64[0] *
                       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
              dVar52 = local_2c8.Rotation.XY.m128d_f64[1] *
                       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
              dVar51 = local_2c8.Rotation.ZW.m128d_f64[0] *
                       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
              dVar32 = local_2c8.Rotation.ZW.m128d_f64[1] *
                       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
              auVar43._8_4_ = SUB84(dVar52,0);
              auVar43._0_8_ = dVar50;
              uVar53 = (undefined4)((ulonglong)dVar52 >> 0x20);
              auVar43._12_4_ = uVar53;
              auVar9._8_8_ = dVar60;
              auVar9._0_8_ = dVar55;
              auVar46._8_4_ = SUB84(dVar52,0);
              auVar46._0_8_ = dVar50;
              auVar46._12_4_ = uVar53;
              dVar44 = auVar43._8_8_;
              auVar6._8_4_ = SUB84(dVar32,0);
              auVar6._0_8_ = dVar51;
              auVar6._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
              auVar47 = blendpd(auVar46,auVar6,2);
              auVar24._8_4_ = SUB84(dVar51,0);
              auVar24._0_8_ = dVar44;
              auVar24._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
              auVar8._8_8_ = 0;
              auVar8._0_8_ = dVar22;
              auVar34 = blendpd(auVar9,auVar8,2);
              auVar58._0_8_ = dVar60 * dVar50 - dVar44 * dVar55;
              auVar58._8_8_ = dVar22 * dVar52 - auVar24._8_8_ * dVar60;
              auVar35._0_8_ = auVar34._0_8_ * dVar51 - auVar47._0_8_ * dVar22;
              auVar35._8_8_ = auVar34._8_8_ * dVar32 - auVar47._8_8_ * 0.0;
              auVar34 = blendpd(auVar58,auVar35,2);
              dVar40 = auVar58._8_8_ + auVar58._8_8_;
              dVar57 = auVar35._0_8_ + auVar35._0_8_;
              uVar53 = SUB84(dVar57,0);
              uVar54 = (undefined4)((ulonglong)dVar57 >> 0x20);
              auVar59._0_8_ = auVar34._0_8_ + auVar34._0_8_;
              auVar59._8_8_ = auVar34._8_8_ + auVar34._8_8_;
              auVar41._8_4_ = uVar53;
              auVar41._0_8_ = dVar40;
              auVar41._12_4_ = uVar54;
              auVar25._8_4_ = uVar53;
              auVar25._0_8_ = dVar40;
              auVar25._12_4_ = uVar54;
              auVar36._8_4_ = uVar53;
              auVar36._0_8_ = dVar40;
              auVar36._12_4_ = uVar54;
              auVar34 = blendpd(auVar36,auVar59,2);
              auVar42._0_8_ = auVar41._8_8_ * dVar50 - dVar40 * dVar44;
              auVar42._8_8_ = auVar59._0_8_ * dVar52 - auVar25._8_8_ * dVar51;
              auVar26._8_4_ = SUB84(auVar59._8_8_,0);
              auVar26._0_8_ = auVar59._0_8_;
              auVar26._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
              auVar37._0_8_ = auVar34._0_8_ * dVar51 - auVar59._0_8_ * auVar47._0_8_;
              auVar37._8_8_ = auVar34._8_8_ * dVar32 - auVar26._8_8_ * auVar47._8_8_;
              auVar27._8_4_ = SUB84(auVar42._8_8_,0);
              auVar27._0_8_ = auVar42._0_8_;
              auVar27._12_4_ = (int)((ulonglong)auVar42._8_8_ >> 0x20);
              dVar51 = dVar40 * dVar32 + dVar55 + auVar27._8_8_;
              dVar55 = dVar57 * dVar32 + dVar60 + auVar37._0_8_;
              auVar34 = blendpd(auVar42,auVar37,2);
              local_418 = (double)this->_padding_;
              dStack_410 = (double)this->_padding_;
              local_638._s_0.X = dVar51 - local_418;
              local_420 = auVar59._0_8_ * dVar32 + dVar22 + auVar34._0_8_;
              local_408 = (double)this->_padding_;
              local_430._8_4_ = SUB84(dVar55,0);
              local_430._0_8_ = dVar51;
              local_430._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
              local_638._s_0.Y = dVar55 - dStack_410;
              local_638._s_0.Z = local_420 - local_408;
              local_4e8.Roll = local_638._s_0.Z;
              pTVar17 = WarpTranslation(&local_3a8,&UE::Math::TTransform<double>::Identity,
                                        (TVector<double> *)&local_5c0._s_0,
                                        (TVector<double> *)&local_520._s_0,
                                        (TVector<double> *)&local_638._s_0);
              fVar20 = this->MaxSpeedClampRatio;
              local_328._32_8_ = (double)CONCAT44(uVar62,uVar61) + (pTVar17->field0_0x0)._s_0.X;
              dStack_300 = (double)CONCAT44(uVar64,uVar63) + (pTVar17->field0_0x0)._s_0.Y;
              local_3f0 = CONCAT44(uVar66,uVar65);
              uVar33 = (double)CONCAT44(uVar66,uVar65) + (pTVar17->field0_0x0)._s_0.Z;
              local_400 = uVar61;
              uStack_3fc = uVar62;
              uStack_3f8 = uVar63;
              uStack_3f4 = uVar64;
              if (fVar20 <= 0.0) {
              }
              else {
                dVar51 = local_1a8.Translation.XY.m128d_f64[1] *
                         local_1a8.Translation.XY.m128d_f64[1] +
                         local_1a8.Translation.XY.m128d_f64[0] *
                         local_1a8.Translation.XY.m128d_f64[0];
                if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
                  dVar51 = (double)((float)SQRT(dVar51 + local_5c0._s_0.Z * local_5c0._s_0.Z) *
                                   fVar20);
                  if (dVar45 <= dVar51) {
                    dVar32 = dStack_300 * dStack_300 +
                             (double)local_328._32_8_ * (double)local_328._32_8_ +
                             (double)uVar33 * (double)uVar33;
                    if (dVar32 <= dVar51 * dVar51) goto LAB_14cf190ca;
                    dVar51 = (__real_3ff0000000000000 / SQRT(dVar32)) * dVar51;
                    uVar33 = (double)uVar33 * dVar51;
                    local_4a8 = (double)local_328._32_8_ * dVar51;
                    dStack_4a0 = dStack_300 * dVar51;
                    dStack_300 = dStack_4a0;
                    local_328._32_8_ = local_4a8;
                    local_498 = (double)uVar33;
                  }
                  else {
                    dStack_300 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                    local_328._32_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                    uVar33 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                  }
                }
                else {
                  dVar51 = (double)((float)SQRT(dVar51) * fVar20);
                  if (dVar45 <= dVar51) {
                    dVar32 = dStack_300 * dStack_300 +
                             (double)local_328._32_8_ * (double)local_328._32_8_;
                    if (dVar32 <= dVar51 * dVar51) {
LAB_14cf190ca:
                    }
                    else {
                      local_608 = __real_3ff0000000000000 / SQRT(dVar32);
                      local_5a8[1] = dStack_300 * local_608 * dVar51;
                      local_5a8[0] = (double)local_328._32_8_ * local_608 * dVar51;
                      local_598 = (double)uVar33;
                      unique0x10003128 = local_5a8;
                    }
                  }
                  else {
                    local_5a8 = (double  [2])ZEXT416(0);
                    local_598 = (double)uVar33;
                    unique0x10003118 = local_5a8;
                  }
                }
              }
            }
            dStack_2f0 = 0.0;
            local_2f8 = (double)uVar33;
          }
        }
        else {
          dStack_300 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_328._32_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_2f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          dStack_2f0 = 0.0;
        }
      }
LAB_14cf195fa:
      fVar20 = __real_3f800000;
      if ((char)this->_padding_ != '\0') {
        pTVar18 = URootMotionModifier_Warp::WarpRotation
                            ((URootMotionModifier_Warp *)this,&local_368,&local_1a8,&local_208,
                             param_2);
        dVar22 = local_5f8._0_8_;
        FVar7 = local_648.AllocatorInstance.Data;
        dVar57 = local_5f8._8_8_;
        dVar55 = pTVar18->Z;
        dVar60 = pTVar18->W;
        auVar49._8_4_ = (int)local_648.AllocatorInstance.Data;
        auVar49._0_8_ = FVar7.Data;
        auVar49._12_4_ = local_648.AllocatorInstance.Data._4_4_;
        dVar45 = pTVar18->X;
        dVar40 = pTVar18->Y;
        dVar32 = local_648._8_8_;
        auVar28._8_4_ = local_5f8._8_4_;
        auVar28._0_8_ = dVar57;
        auVar28._12_4_ = local_5f8._12_4_;
        auVar39._8_4_ = local_648.ArrayNum;
        auVar39._0_8_ = dVar32;
        auVar39._12_4_ = local_648.ArrayMax;
        auVar29._8_4_ = local_5f8._0_4_;
        auVar29._0_8_ = dVar22;
        auVar29._12_4_ = local_5f8._4_4_;
        local_328._0_8_ =
             (double)FVar7.Data * dVar60 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar57 * dVar45 +
             dVar32 * dVar55 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar22 * dVar40 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        local_328._8_8_ =
             auVar49._8_8_ * dVar55 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             auVar28._8_8_ * dVar40 +
             auVar39._8_8_ * dVar60 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             auVar29._8_8_ * dVar45 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar51 = (double)FVar7.Data * dVar45 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + dVar57 * dVar60 +
                 dVar32 * dVar40 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 dVar22 * dVar55 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        local_328._24_4_ = SUB84(dVar51,0);
        local_328._16_8_ =
             (double)FVar7.Data * dVar40 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + dVar57 * dVar55 +
             dVar32 * dVar45 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             dVar22 * dVar60 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        local_328._28_4_ = (int)((ulonglong)dVar51 >> 0x20);
      }
      pTVar10 = FMotionWarpingCVars::CVarMotionWarpingDebug.Ref;
      bVar12 = IsInParallelGameThread();
      if (((!bVar12) && (bVar12 = IsInGameThread(), !bVar12)) &&
         (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007945>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6c9,"GetShadowIndex() == 0"), bVar12)) {
        pcVar5 = (code *)swi(3);
        pTVar15 = (TTransform<double> *)(*pcVar5)();
        return pTVar15;
      }
      iVar2 = pTVar10->ShadowedValue[0];
      if ((iVar2 == 1) || (iVar2 == 3)) {
        ::FString::FString((FString *)&local_648,L"SkewWarp");
        URootMotionModifier_Warp::PrintLog
                  ((URootMotionModifier_Warp *)this,(FString *)&local_648,param_1,
                   (TTransform<double> *)local_328);
        if (local_648.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_648.AllocatorInstance.Data);
        }
      }
      pTVar11 = FMotionWarpingCVars::CVarMotionWarpingDrawDebugDuration.Ref;
      if (iVar2 - 2U < 2) {
        bVar12 = IsInParallelGameThread();
        if (((!bVar12) && (bVar12 = IsInGameThread(), !bVar12)) &&
           (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<6409875433831007945>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x6c9,"GetShadowIndex() == 0"), bVar12)) {
          pcVar5 = (code *)swi(3);
          pTVar15 = (TTransform<double> *)(*pcVar5)();
          return pTVar15;
        }
        fVar1 = pTVar11->ShadowedValue[0];
        pTVar18 = URootMotionModifier_Warp::GetTargetRotation
                            ((URootMotionModifier_Warp *)this,&local_348);
        UE::Math::TQuat<double>::Rotator(pTVar18,&local_4e8);
        local_5f8._s_0.X = (double)this->_padding_;
        local_5f8._s_0.Y = (double)this->_padding_;
        local_5f8._s_0.Z = (double)this->_padding_;
        pUVar19 = AActor::GetWorld(this_00);
        DrawDebugCoordinateSystem
                  (pUVar19,(TVector<double> *)&local_5f8._s_0,&local_4e8,__real_42480000,false,fVar1
                   ,'\0',fVar20);
      }
      (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (double)local_328._0_8_;
      (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)local_328._8_8_;
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)local_328._16_8_;
      (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)local_328._24_8_;
      (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (double)local_328._32_8_;
      (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dStack_300;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_2f8;
      (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dStack_2f0;
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_2e8;
      (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dStack_2e0;
      goto LAB_14cf198f5;
    }
  }
  dVar51 = (param_1->Rotation).XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar51;
  dVar51 = (param_1->Rotation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar51;
  dVar51 = (param_1->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar51;
  dVar51 = (param_1->Translation).ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar51;
  dVar51 = (param_1->Scale3D).XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar51;
  local_2d8 = (param_1->Scale3D).ZW.m128d_f64[0];
  dStack_2d0 = (param_1->Scale3D).ZW.m128d_f64[1];
LAB_14cf198f5:
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_2d8;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dStack_2d0;
  return __return_storage_ptr__;
}

// StaticRegisterNativesURootMotionModifier_SkewWarp @ 14cf1bfe0

void __cdecl URootMotionModifier_SkewWarp::StaticRegisterNativesURootMotionModifier_SkewWarp(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_URootMotionModifier_SkewWarp_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// WarpTranslation @ 14cf1ecb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __cdecl
URootMotionModifier_SkewWarp::WarpTranslation
          (TVector<double> *__return_storage_ptr__,TTransform<double> *param_1,
          TVector<double> *param_2,TVector<double> *param_3,TVector<double> *param_4)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined8 uVar9;
  undefined1 auVar10 [12];
  undefined8 uVar11;
  double dVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  TMatrix<double> *pTVar16;
  double dVar17;
  undefined4 uVar24;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar21 [16];
  double dVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined4 uVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  double dVar39;
  undefined1 auVar38 [16];
  double dVar40;
  float fVar41;
  undefined4 uVar42;
  float _X;
  undefined1 auStack_4c8 [32];
  TVector<double>_u_0 local_4a8;
  double local_488;
  double dStack_480;
  undefined8 local_478;
  TVector<double>_u_0 local_470;
  double local_458;
  undefined1 local_448 [16];
  TVector<double>_u_0 local_438;
  double dStack_420;
  double local_418;
  double local_408;
  double local_3f8;
  double local_3e8;
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [72];
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  TMatrix<double> local_338;
  TMatrix<double> local_2b8;
  TMatrix<double> local_238;
  TMatrix<double> local_1b8;
  TMatrix<double> local_138;
  ulonglong local_b8;
  
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar25 = __real_3ff0000000000000;
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_4c8;
  if ((((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)*(undefined8 *)&param_2->field0_0x0 &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3f1a36e2e0000000)
      && (uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8),
         (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
         __real_3f1a36e2e0000000)) &&
     (uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10),
     (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
     __real_3f1a36e2e0000000)) {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar9;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  auVar19 = *(undefined1 (*) [16])(param_1->Translation).XY.m128d_f64;
  local_3e8 = auVar19._0_8_;
  uVar34 = auVar19._12_4_;
  local_3f8 = (param_1->Translation).ZW.m128d_f64[0];
  local_418 = (param_4->field0_0x0)._s_0.X - local_3e8;
  local_3e8 = (local_3e8 + (param_3->field0_0x0)._s_0.X) - local_3e8;
  dVar17 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar4 = (param_1->Rotation).ZW.m128d_f64[1];
  local_478 = (local_3f8 + (param_3->field0_0x0)._s_0.Z) - local_3f8;
  dStack_480 = auVar19._8_8_;
  local_408 = (param_4->field0_0x0)._s_0.Y - dStack_480;
  uVar24 = auVar19._8_4_;
  dVar2 = (param_1->Rotation).XY.m128d_f64[0];
  dVar3 = (param_1->Rotation).XY.m128d_f64[1];
  dStack_480 = (dStack_480 + (param_3->field0_0x0)._s_0.Y) - dStack_480;
  local_3f8 = (param_4->field0_0x0)._s_0.Z - local_3f8;
  local_3d8._0_8_ = dStack_480;
  local_3c8._0_8_ = local_478;
  dVar36 = dStack_480 * dStack_480 + local_3e8 * local_3e8 + (double)local_478 * (double)local_478;
  local_488 = local_3e8;
  if (dVar36 != __real_3ff0000000000000) {
    if (dVar36 < __real_3e45798ee0000000) {
      dStack_480 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_488 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_478 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
      goto LAB_14cf1eee2;
    }
    uVar24 = 0;
    local_458 = __real_3ff0000000000000 / SQRT(dVar36);
    local_478 = local_458 * (double)local_478;
    uVar34 = 0;
    dStack_480 = local_458 * dStack_480;
    local_488 = local_458 * local_3e8;
  }
  uVar9 = dStack_480;
  uVar1 = local_488;
  uVar11 = CONCAT44(uVar34,uVar24);
LAB_14cf1eee2:
  uVar15 = local_478;
  local_448._8_4_ = (int)uVar11;
  local_448._0_8_ = uVar9;
  local_448._12_4_ = (int)((ulonglong)uVar11 >> 0x20);
  dVar35 = dVar17 + dVar17;
  dVar36 = (double)CONCAT44((uint)((ulonglong)(dVar3 + dVar3) >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar3 + dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000);
  dVar27 = (double)CONCAT44((uint)((ulonglong)(dVar2 + dVar2) >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar2 + dVar2,0) ^ (uint)__xmm_80000000000000008000000000000000);
  dVar35 = ((dVar3 * dVar36 - dVar17 * dVar35) + __real_3ff0000000000000) * (double)uVar1 +
           (dVar4 * dVar35 - dVar2 * dVar36) * (double)uVar9 +
           (dVar4 * dVar36 + dVar2 * dVar35) * (double)local_478;
  dVar36 = dVar3 + dVar3;
  local_458._0_4_ =
       (float)(double)CONCAT44((uint)((ulonglong)dVar35 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar35,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar35 = dVar4 * dVar36 - dVar17 * dVar27;
  dVar40 = dVar17 * dVar36 + dVar4 * dVar27;
  dVar36 = (dVar2 * dVar27 - dVar3 * dVar36) + __real_3ff0000000000000;
  local_4a8._s_0.X = dVar35;
  local_4a8._s_0.Y = dVar40;
  local_4a8._s_0.Z = dVar36;
  local_438._s_0.X = dVar2;
  local_438._s_0.Y = dVar3;
  local_438._s_0.Z = dVar17;
  dStack_420 = dVar4;
  UE::Math::TRotationMatrix<double>::MakeFromXZ
            (&local_338,(TVector<double> *)&local_488,(TVector<double> *)&local_4a8._s_0);
  uVar9 = _UNK_15061cc88;
  uVar14 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar13 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar36 = (double)local_448._0_8_ * dVar40 + (double)uVar1 * dVar35 + (double)uVar15 * dVar36;
  fVar41 = (float)(double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar36,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (local_458._0_4_ < fVar41) {
    local_4a8._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_4a8._s_0.Y = _UNK_150689518;
    local_4a8._s_0.Z = 0.0;
    UE::Math::TQuat<double>::RotateVector
              ((TQuat<double> *)&local_438._s_0,(TVector<double> *)&local_470._s_0,
               (TVector<double> *)&local_4a8._s_0);
    pTVar16 = UE::Math::TRotationMatrix<double>::MakeFromXZ
                        (&local_138,(TVector<double> *)&local_488,(TVector<double> *)&local_470._s_0
                        );
    local_338.M[0][0] = pTVar16->M[0][0];
    local_338.M[0][1] = pTVar16->M[0][1];
    local_338.M[0][2] = pTVar16->M[0][2];
    local_338.M[0][3] = pTVar16->M[0][3];
    local_338.M[1][0] = pTVar16->M[1][0];
    local_338.M[1][1] = pTVar16->M[1][1];
    local_338.M[1][2] = pTVar16->M[1][2];
    local_338.M[1][3] = pTVar16->M[1][3];
    local_338.M[2][0] = pTVar16->M[2][0];
    local_338.M[2][1] = pTVar16->M[2][1];
    local_338.M[2][2] = pTVar16->M[2][2];
    local_338.M[2][3] = pTVar16->M[2][3];
    local_338.M[3][0] = pTVar16->M[3][0];
    local_338.M[3][1] = pTVar16->M[3][1];
    local_338.M[3][2] = pTVar16->M[3][2];
    local_338.M[3][3] = pTVar16->M[3][3];
    local_458._0_4_ = fVar41;
  }
  dVar36 = dVar2 + dVar2;
  dVar35 = (double)CONCAT44((uint)((ulonglong)(dVar17 + dVar17) >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar17 + dVar17,0) ^ (uint)__xmm_80000000000000008000000000000000)
  ;
  dVar36 = ((dVar17 * dVar35 - dVar2 * dVar36) + dVar25) * (double)local_448._0_8_ +
           (dVar3 * dVar36 + dVar4 * dVar35) * (double)uVar1 +
           (dVar4 * dVar36 - dVar3 * dVar35) * (double)uVar15;
  if (local_458._0_4_ <
      (float)(double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) & uVar14,SUB84(dVar36,0) & uVar13))
  {
    local_4a8._s_0.Z = dVar25;
    local_4a8._s_0.X = 0.0;
    local_4a8._s_0.Y = 0.0;
    UE::Math::TQuat<double>::RotateVector
              ((TQuat<double> *)&local_438._s_0,(TVector<double> *)&local_470._s_0,
               (TVector<double> *)&local_4a8._s_0);
    pTVar16 = UE::Math::TRotationMatrix<double>::MakeFromXZ
                        (&local_138,(TVector<double> *)&local_488,(TVector<double> *)&local_470._s_0
                        );
    local_338.M[0][0] = pTVar16->M[0][0];
    local_338.M[0][1] = pTVar16->M[0][1];
    local_338.M[0][2] = pTVar16->M[0][2];
    local_338.M[0][3] = pTVar16->M[0][3];
    local_338.M[1][0] = pTVar16->M[1][0];
    local_338.M[1][1] = pTVar16->M[1][1];
    local_338.M[1][2] = pTVar16->M[1][2];
    local_338.M[1][3] = pTVar16->M[1][3];
    local_338.M[2][0] = pTVar16->M[2][0];
    local_338.M[2][1] = pTVar16->M[2][1];
    local_338.M[2][2] = pTVar16->M[2][2];
    local_338.M[2][3] = pTVar16->M[2][3];
    local_338.M[3][0] = pTVar16->M[3][0];
    local_338.M[3][1] = pTVar16->M[3][1];
    local_338.M[3][2] = pTVar16->M[3][2];
    local_338.M[3][3] = pTVar16->M[3][3];
  }
  UE::Math::TMatrix<double>::InverseFast(&local_338,(TMatrix<double> *)local_3b8);
  auVar19 = *(undefined1 (*) [16])&param_2->field0_0x0;
  dVar17 = auVar19._0_8_;
  dVar4 = auVar19._8_8_;
  dVar36 = (param_2->field0_0x0)._s_0.Z;
  auVar28._8_4_ = SUB84(dVar36,0);
  auVar28._0_8_ = dVar36;
  auVar28._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
  auVar18._8_4_ = auVar19._8_4_;
  auVar18._0_8_ = dVar4;
  auVar18._12_4_ = auVar19._12_4_;
  dVar2 = dVar17 * (double)local_3b8._0_8_ + dVar4 * (double)local_3b8._32_8_ +
          dVar36 * (double)local_3b8._64_8_ + local_358 * 0.0;
  uVar34 = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar3 = dVar17 * (double)local_3b8._8_8_ + auVar18._8_8_ * (double)local_3b8._40_8_ +
          auVar28._8_8_ * dStack_370 + dStack_350 * 0.0;
  uVar24 = SUB84(dVar3,0);
  uVar42 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar27 = dVar17 * (double)local_3b8._16_8_ + dVar4 * (double)local_3b8._48_8_ + dVar36 * local_368
           + local_348 * 0.0;
  UE::Math::TMatrix<double>::InverseFast(&local_338,(TMatrix<double> *)local_3b8);
  auVar19._8_4_ = SUB84(local_418,0);
  auVar19._0_8_ = local_418;
  auVar19._12_4_ = (int)((ulonglong)local_418 >> 0x20);
  auVar29._8_4_ = SUB84(local_3f8,0);
  auVar29._0_8_ = local_3f8;
  auVar29._12_4_ = (int)((ulonglong)local_3f8 >> 0x20);
  dVar3 = local_408 * (double)local_3b8._32_8_ + local_418 * (double)local_3b8._0_8_ +
          local_3f8 * (double)local_3b8._64_8_ + local_358 * 0.0;
  dVar35 = local_408 * (double)local_3b8._40_8_ + auVar19._8_8_ * (double)local_3b8._8_8_ +
           auVar29._8_8_ * dStack_370 + dStack_350 * 0.0;
  dVar4 = local_408 * (double)local_3b8._48_8_ + local_418 * (double)local_3b8._16_8_ +
          local_3f8 * local_368 + local_348 * 0.0;
  UE::Math::TMatrix<double>::InverseFast(&local_338,(TMatrix<double> *)local_3b8);
  dVar12 = __real_3e45798ee0000000;
  auVar20._8_4_ = SUB84(local_3e8,0);
  auVar20._0_8_ = local_3e8;
  auVar20._12_4_ = (int)((ulonglong)local_3e8 >> 0x20);
  auVar30._8_4_ = local_3c8._0_4_;
  auVar30._0_8_ = local_3c8._0_8_;
  auVar30._12_4_ = local_3c8._4_4_;
  dVar40 = (double)local_3d8._0_8_ * (double)local_3b8._32_8_ + local_3e8 * (double)local_3b8._0_8_
           + (double)local_3c8._0_8_ * (double)local_3b8._64_8_ + local_358 * 0.0;
  dVar5 = (double)local_3d8._0_8_ * (double)local_3b8._40_8_ +
          auVar20._8_8_ * (double)local_3b8._8_8_ + auVar30._8_8_ * dStack_370 + dStack_350 * 0.0;
  dVar36 = (double)local_3d8._0_8_ * (double)local_3b8._48_8_ + local_3e8 * (double)local_3b8._16_8_
           + (double)local_3c8._0_8_ * local_368 + local_348 * 0.0;
  dVar17 = (double)local_3d8._0_8_ * (double)local_3b8._56_8_ + local_3e8 * (double)local_3b8._24_8_
           + (double)local_3c8._0_8_ * dStack_360 + dStack_340 * 0.0;
  auVar6._4_8_ = uVar9;
  auVar6._0_4_ = (int)((ulonglong)dVar3 >> 0x20);
  auVar37._0_8_ = auVar6._0_8_ << 0x20;
  auVar37._8_4_ = SUB84(dVar35,0);
  auVar37._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
  dVar39 = auVar37._8_8_;
  local_3d8._8_4_ = SUB84(dVar17,0);
  local_3d8._0_8_ = dVar36;
  local_3d8._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  local_3c8._8_4_ = SUB84(dVar5,0);
  local_3c8._0_8_ = dVar40;
  local_3c8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_478 = dVar4;
  local_488 = dVar3;
  dStack_480 = dVar39;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&local_488,__real_3e45798ee0000000);
  local_448._8_8_ = dVar5;
  local_448._0_8_ = dVar5;
  local_438._s_0.X = dVar40;
  local_438._8_8_ = dVar5;
  local_438._s_0.Z = dVar36;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&local_438._s_0,dVar12);
  local_470._s_0.Z = 0.0;
  local_470._s_0.X = local_488;
  local_470._s_0.Y = dStack_480;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&local_470._s_0,dVar12);
  uVar9 = local_438._8_8_;
  local_4a8._s_0.X = local_438._s_0.X;
  local_4a8._s_0.Y = local_438._s_0.Y;
  local_4a8._s_0.Z = 0.0;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&local_4a8._s_0,dVar12);
  dVar36 = __real_bff0000000000000;
  dVar35 = local_4a8._s_0.X * local_470._s_0.X + local_4a8._s_0.Y * local_470._s_0.Y +
           local_4a8._s_0.Z * local_470._s_0.Z;
  dVar17 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar35) && (dVar17 = dVar35, dVar25 <= dVar35)) {
    dVar17 = dVar25;
  }
  dVar17 = acos(dVar17);
  dVar17 = UE::Math::TRotator<double>::NormalizeAxis((double)((float)dVar17 * __real_42652ee0));
  fVar41 = (float)(dVar17 * __real_3f91df46a2529d39);
  if (local_470._s_0.Y < 0.0) {
    fVar41 = (float)((uint)fVar41 ^ __xmm_80000000800000008000000080000000);
  }
  local_470._s_0.X = local_488;
  local_470._s_0.Z = (double)local_478;
  local_470._s_0.Y = 0.0;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&local_470._s_0,__real_3e45798ee0000000);
  local_4a8._s_0.X = local_438._s_0.X;
  local_4a8._s_0.Z = local_438._s_0.Z;
  local_4a8._s_0.Y = 0.0;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&local_4a8._s_0,__real_3e45798ee0000000);
  dVar17 = local_4a8._s_0.Y * local_470._s_0.Y + local_4a8._s_0.X * local_470._s_0.X +
           local_4a8._s_0.Z * local_470._s_0.Z;
  if ((dVar36 <= dVar17) && (dVar36 = dVar17, dVar25 <= dVar17)) {
    dVar36 = dVar25;
  }
  dVar36 = acos(dVar36);
  dVar36 = UE::Math::TRotator<double>::NormalizeAxis((double)((float)dVar36 * __real_42652ee0));
  local_3b8._40_8_ = _UNK_15061cbc8;
  local_3b8._32_8_ = ___xmm_3ff00000000000000000000000000000;
  _X = (float)(dVar36 * __real_3f91df46a2529d39);
  if (local_470._s_0.Z < 0.0) {
    _X = (float)((uint)_X ^ __xmm_80000000800000008000000080000000);
  }
  local_4a8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_4a8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_4a8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar36 = dVar25 / SQRT((double)local_448._0_8_ * (double)local_448._0_8_ +
                         (double)local_3c8._0_8_ * (double)local_3c8._0_8_ +
                         (double)local_3d8._0_8_ * (double)local_3d8._0_8_);
  fVar26 = (float)(((double)uVar9 * dVar39 + local_438._s_0.X * dVar3 + local_438._s_0.Z * dVar4) *
                  dVar36);
  if (fVar26 == 0.0) {
    dVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dVar35 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if ((((((double)local_3c8._0_8_ != 0.0) || ((double)local_448._0_8_ != 0.0)) ||
         ((double)local_3d8._0_8_ != 0.0)) &&
        (((dVar3 != 0.0 || (dVar39 != 0.0)) || (dVar4 != 0.0)))) &&
       (((auVar10._4_4_ = uVar24, auVar10._0_4_ = uVar34, auVar10._8_4_ = uVar42,
         dVar40 = auVar10._4_8_, dVar2 != 0.0 || (dVar40 != 0.0)) || (dVar27 != 0.0)))) {
      dVar36 = (double)((float)(SQRT(dVar39 * dVar39 + dVar3 * dVar3 + dVar4 * dVar4) * dVar36) *
                       (float)SQRT(dVar40 * dVar40 + dVar2 * dVar2 + dVar27 * dVar27));
      dVar25 = dVar36 * (double)local_478;
      dVar17 = dVar36 * local_488;
      dVar35 = dVar36 * dStack_480;
    }
  }
  else {
    local_238.M[3][0] = 0.0;
    local_238.M[3][1] = 0.0;
    local_238.M[0][0] = (double)fVar26;
    local_238.M[0][3] = 0.0;
    local_238.M[1][3] = 0.0;
    local_238.M[2][3] = 0.0;
    local_238.M[1][2] = 0.0;
    local_238.M[2][2] = dVar25;
    local_2b8.M[0][3] = 0.0;
    local_2b8.M[1][3] = 0.0;
    local_2b8.M[2][3] = 0.0;
    local_2b8.M[0][0] = dVar25;
    local_238.M[3][2] = ___xmm_3ff00000000000000000000000000000;
    local_238.M[3][3] = _UNK_15061cbc8;
    local_238.M[0][1] = 0.0;
    local_238.M[0][2] = 0.0;
    local_238.M[1][0] = ___xmm_3ff00000000000000000000000000000;
    local_238.M[1][1] = _UNK_15061cbc8;
    local_238.M[2][0] = 0.0;
    local_238.M[2][1] = 0.0;
    local_2b8.M[3][0] = 0.0;
    local_2b8.M[3][1] = 0.0;
    local_2b8.M[3][2] = ___xmm_3ff00000000000000000000000000000;
    local_2b8.M[3][3] = _UNK_15061cbc8;
    fVar41 = tanf(fVar41);
    local_2b8.M[0][2] = 0.0;
    local_2b8.M[0][1] = (double)fVar41;
    local_2b8.M[1][2] = 0.0;
    local_2b8.M[2][0] = 0.0;
    local_2b8.M[2][1] = 0.0;
    local_358 = 0.0;
    dStack_350 = 0.0;
    local_3b8._0_8_ = ___xmm_00000000000000003ff0000000000000;
    local_3b8._8_8_ = _UNK_150689518;
    local_2b8.M[2][2] = dVar25;
    local_3b8._24_8_ = 0.0;
    local_3b8._56_8_ = 0.0;
    dStack_360 = 0.0;
    local_2b8.M[1][0] = (double)local_3b8._32_8_;
    local_2b8.M[1][1] = (double)local_3b8._40_8_;
    local_348 = (double)local_3b8._32_8_;
    dStack_340 = (double)local_3b8._40_8_;
    fVar41 = tanf(_X);
    local_3b8._48_8_ = 0.0;
    local_3b8._16_8_ = (undefined8)fVar41;
    register0x00001200 = ZEXT416(0);
    local_368 = dVar25;
    VectorMatrixMultiply(&local_138,&local_238,&local_2b8);
    VectorMatrixMultiply(&local_1b8,&local_138,(TMatrix<double> *)local_3b8);
    auVar7._4_8_ = extraout_XMM0_Qb;
    auVar7._0_4_ = uVar34;
    auVar21._0_8_ = auVar7._0_8_ << 0x20;
    auVar21._8_4_ = uVar24;
    auVar21._12_4_ = uVar42;
    dVar25 = auVar21._8_8_;
    auVar22._8_4_ = SUB84(dVar2,0);
    auVar22._0_8_ = dVar2;
    auVar22._12_4_ = uVar34;
    auVar38._8_4_ = uVar24;
    auVar38._0_8_ = dVar25;
    auVar38._12_4_ = uVar42;
    auVar31._8_4_ = SUB84(dVar27,0);
    auVar31._0_8_ = dVar27;
    auVar31._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
    local_1b8.M[2][1] = auVar31._8_8_ * local_1b8.M[2][1];
    dVar17 = dVar25 * local_1b8.M[1][0] + dVar2 * local_1b8.M[0][0] + dVar27 * local_1b8.M[2][0] +
             local_1b8.M[3][0] * 0.0;
    dVar36 = auVar38._8_8_ * local_1b8.M[1][1] + auVar22._8_8_ * local_1b8.M[0][1] +
             local_1b8.M[2][1] + local_1b8.M[3][1] * 0.0;
    auVar8._4_8_ = local_1b8.M[2][1];
    auVar8._0_4_ = (int)((ulonglong)dVar17 >> 0x20);
    auVar32._0_8_ = auVar8._0_8_ << 0x20;
    auVar32._8_4_ = SUB84(dVar36,0);
    auVar32._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
    dVar25 = dVar25 * local_1b8.M[1][2] + dVar2 * local_1b8.M[0][2] + dVar27 * local_1b8.M[2][2] +
             local_1b8.M[3][2] * 0.0;
    dVar35 = auVar32._8_8_;
  }
  auVar23._8_4_ = SUB84(dVar17,0);
  auVar23._0_8_ = dVar17;
  auVar23._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  auVar33._8_4_ = SUB84(dVar25,0);
  auVar33._0_8_ = dVar25;
  auVar33._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       dVar35 * local_338.M[1][0] + dVar17 * local_338.M[0][0] + dVar25 * local_338.M[2][0] +
       local_338.M[3][0] * 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       dVar35 * local_338.M[1][2] + dVar17 * local_338.M[0][2] + dVar25 * local_338.M[2][2] +
       local_338.M[3][2] * 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       dVar35 * local_338.M[1][1] + auVar23._8_8_ * local_338.M[0][1] +
       auVar33._8_8_ * local_338.M[2][1] + local_338.M[3][1] * 0.0;
  return __return_storage_ptr__;
}

// execAddRootMotionModifierSkewWarp @ 14cf20d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
URootMotionModifier_SkewWarp::execAddRootMotionModifierSkewWarp
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  longlong lVar10;
  UObject *pUVar11;
  UMotionWarpingComponent *this;
  double dVar12;
  double dVar13;
  double dVar14;
  FWeakObjectPtr FVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  bool bVar25;
  UClass *pUVar26;
  URootMotionModifier *pUVar27;
  longlong *plVar28;
  undefined1 auStackY_258 [32];
  undefined1 local_228;
  undefined1 local_227;
  undefined1 local_226;
  undefined1 local_225;
  undefined1 local_224;
  undefined1 local_223;
  undefined1 local_222;
  int local_220;
  int local_21c;
  int local_218;
  undefined4 local_214;
  undefined4 local_210;
  float local_20c;
  float local_208 [2];
  double local_200;
  longlong local_1f8;
  UObject *local_1f0;
  UMotionWarpingComponent *local_1e8;
  UObject *local_1e0;
  undefined8 *local_1d8;
  undefined1 local_1c8 [128];
  double local_148;
  double dStack_140;
  double local_138;
  FWeakObjectPtr FStack_130;
  undefined1 local_128 [16];
  double local_118;
  double dStack_110;
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_1e8 = (UMotionWarpingComponent *)0x0;
  local_1d8 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1e8);
  }
  local_1f0 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f0);
  }
  local_208[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_208,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_208);
  }
  local_20c = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20c);
  }
  local_1f8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f8);
  }
  local_226 = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_226,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_226);
  }
  local_148 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_140 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_138 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  FStack_130 = (FWeakObjectPtr)(double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_118 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_110 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_128._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_128._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_128._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_f8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_f0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_108._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_108._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_108._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_200 = 0.0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_200,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_200);
  }
  local_220 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_220,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_220);
  }
  local_224 = local_220 != 0;
  local_21c = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_21c,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_21c);
  }
  local_223 = local_21c != 0;
  local_218 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_218,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_218);
  }
  local_222 = local_218 != 0;
  local_227 = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_227,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_227);
  }
  local_228 = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_228,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_228);
  }
  local_210 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_210,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_210);
  }
  local_214 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_214,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_214);
  }
  dVar24 = dStack_f0;
  dVar23 = local_f8;
  dVar20 = dStack_110;
  dVar19 = local_118;
  FVar15 = FStack_130;
  dVar14 = local_138;
  dVar13 = dStack_140;
  dVar12 = local_148;
  this = local_1e8;
  pUVar11 = local_1f0;
  lVar10 = local_1f8;
  dVar9 = local_200;
  fVar8 = local_208[0];
  fVar7 = local_20c;
  uVar6 = local_210;
  uVar5 = local_214;
  uVar4 = local_227;
  uVar3 = local_228;
  uVar16 = local_128._0_8_;
  uVar18 = local_128._8_8_;
  uVar21 = local_108._0_8_;
  uVar22 = local_108._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_225 = local_226;
  if (local_1e8 == (UMotionWarpingComponent *)0x0) {
    bVar25 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_5546418154990730994>,true,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\MotionWarping\\Source\\MotionWarping\\Private\\RootMotionModifier_SkewWarp.cpp"
                        ,0x10e,"InMotionWarpingComp");
    if (bVar25) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)local_1e8,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar26 = StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar26);
    local_1c8._8_8_ = this;
    pUVar27 = (URootMotionModifier *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar28 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar28 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar28 + 0x10))(plVar28);
    }
    local_1e0 = pUVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    FWeakObjectPtr::operator=(&(pUVar27->Animation).WeakPtr,(FObjectPtr)&local_1e0);
    auVar17 = local_128;
    pUVar27[1]._padding_ = (longlong)dVar12;
    pUVar27[1]._padding_ = (longlong)dVar13;
    *(undefined1 *)&pUVar27[1]._padding_ = local_225;
    pUVar27[1]._padding_ = (longlong)dVar14;
    pUVar27[1].Animation.WeakPtr = FVar15;
    *(undefined1 *)(pUVar27[1].StartTransform.Translation.XY.m128d_f64 + 1) = local_224;
    local_128._0_4_ = (undefined4)uVar16;
    local_128._4_4_ = SUB84(uVar16,4);
    pUVar27[1].StartTime = (float)local_128._0_4_;
    pUVar27[1].EndTime = (float)local_128._4_4_;
    local_128._8_4_ = (undefined4)uVar18;
    local_128._12_4_ = SUB84(uVar18,4);
    pUVar27[1].PreviousPosition = (float)local_128._8_4_;
    pUVar27[1].CurrentPosition = (float)local_128._12_4_;
    *(undefined1 *)((longlong)pUVar27[1].StartTransform.Translation.XY.m128d_f64 + 9) = local_223;
    *(double *)&pUVar27[1].Weight = dVar19;
    pUVar27[1]._padding_ = (longlong)dVar20;
    *(undefined1 *)(pUVar27[1].StartTransform.Translation.ZW.m128d_f64 + 1) = local_222;
    pUVar27[1].StartTransform.Rotation.XY.m128d_f64[0] = (double)uVar21;
    pUVar27[1].StartTransform.Rotation.XY.m128d_f64[1] = (double)uVar22;
    pUVar27[1]._padding_ = lVar10;
    pUVar27->StartTime = fVar8;
    pUVar27->EndTime = fVar7;
    *(undefined4 *)((longlong)pUVar27[1].StartTransform.Translation.ZW.m128d_f64 + 0xc) = uVar6;
    *(undefined4 *)pUVar27[1].StartTransform.Scale3D.XY.m128d_f64 = uVar5;
    pUVar27[1].StartTransform.Rotation.ZW.m128d_f64[0] = dVar23;
    pUVar27[1].StartTransform.Rotation.ZW.m128d_f64[1] = dVar24;
    pUVar27[1].StartTransform.Translation.XY.m128d_f64[0] = dVar9;
    *(undefined1 *)((longlong)pUVar27[1].StartTransform.Translation.ZW.m128d_f64 + 9) = uVar4;
    *(undefined1 *)((longlong)pUVar27[1].StartTransform.Translation.ZW.m128d_f64 + 10) = uVar3;
    local_128 = auVar17;
    UMotionWarpingComponent::AddModifier(this,pUVar27);
    *local_1d8 = pUVar27;
  }
  return;
}

