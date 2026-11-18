// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 10

// StaticClass @ 14cf00b50

UClass * __cdecl UAttributeBasedRootMotionComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAttributeBasedRootMotionComponent.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"AttributeBasedRootMotionComponent",
               &Z_Registration_Info_UClass_UAttributeBasedRootMotionComponent.InnerSingleton,
               StaticRegisterNativesUAttributeBasedRootMotionComponent,0x1a0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UAttributeBasedRootMotionComponent>,
               InternalVTableHelperCtorCaller<UAttributeBasedRootMotionComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAttributeBasedRootMotionComponent.InnerSingleton;
}

// UAttributeBasedRootMotionComponent @ 14cf03f70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAttributeBasedRootMotionComponent * __thiscall
UAttributeBasedRootMotionComponent::UAttributeBasedRootMotionComponent
          (UAttributeBasedRootMotionComponent *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->bEnableRootMotion = true;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  this->Mode = ApplyDelta;
  FTickFunction::FTickFunction((FTickFunction *)&this->PrePhysicsTickFunction);
  (this->PrePhysicsTickFunction)._padding_ =
       (longlong)&___7FAttributeBasedRootMotionComponentPrePhysicsTickFunction__6B_;
  (this->CharacterOwner).WeakPtr = (FWeakObjectPtr)0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->PrevTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->PrevTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->PrevTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->PrevTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->PrevTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->PrevTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->PrevTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->PrevTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->PrevTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->PrevTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->PrevTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->PrevTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->PrevTransformValid = false;
  (this->TranslationVelocity).field0_0x0._s_0.X = 0.0;
  (this->TranslationVelocity).field0_0x0._s_0.Y = 0.0;
  (this->TranslationVelocity).field0_0x0._s_0.Z = 0.0;
  (this->RotationVelocity).field0_0x0._s_0.X = 0.0;
  (this->RotationVelocity).field0_0x0._s_0.Y = 0.0;
  (this->RotationVelocity).field0_0x0._s_0.Z = 0.0;
  return this;
}

// UAttributeBasedRootMotionComponent @ 14cf04080

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAttributeBasedRootMotionComponent * __thiscall
UAttributeBasedRootMotionComponent::UAttributeBasedRootMotionComponent
          (UAttributeBasedRootMotionComponent *this,FObjectInitializer *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->bEnableRootMotion = true;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  this->Mode = ApplyDelta;
  FTickFunction::FTickFunction((FTickFunction *)&this->PrePhysicsTickFunction);
  (this->PrePhysicsTickFunction)._padding_ =
       (longlong)&___7FAttributeBasedRootMotionComponentPrePhysicsTickFunction__6B_;
  (this->CharacterOwner).WeakPtr = (FWeakObjectPtr)0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->PrevTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->PrevTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->PrevTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->PrevTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->PrevTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->PrevTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->PrevTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->PrevTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->PrevTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->PrevTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->PrevTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->PrevTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->field_0x9b = this->field_0x9b | 1;
  (this->TranslationVelocity).field0_0x0._s_0.X = 0.0;
  (this->TranslationVelocity).field0_0x0._s_0.Y = 0.0;
  (this->TranslationVelocity).field0_0x0._s_0.Z = 0.0;
  (this->RotationVelocity).field0_0x0._s_0.X = 0.0;
  (this->RotationVelocity).field0_0x0._s_0.Y = 0.0;
  (this->RotationVelocity).field0_0x0._s_0.Z = 0.0;
  this->field_0x42 = this->field_0x42 | 2;
  this->PrevTransformValid = false;
  this->field_0x40 = 5;
  return this;
}

// ~UAttributeBasedRootMotionComponent @ 14cf056e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UAttributeBasedRootMotionComponent::~UAttributeBasedRootMotionComponent
          (UAttributeBasedRootMotionComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  FTickFunction::~FTickFunction((FTickFunction *)&this->PrePhysicsTickFunction);
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14cf10170

UClass * __cdecl UAttributeBasedRootMotionComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAttributeBasedRootMotionComponent.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"AttributeBasedRootMotionComponent",
               &Z_Registration_Info_UClass_UAttributeBasedRootMotionComponent.InnerSingleton,
               StaticRegisterNativesUAttributeBasedRootMotionComponent,0x1a0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UAttributeBasedRootMotionComponent>,
               InternalVTableHelperCtorCaller<UAttributeBasedRootMotionComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAttributeBasedRootMotionComponent.InnerSingleton;
}

// InitializeComponent @ 14cf11fe0

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
UAttributeBasedRootMotionComponent::InitializeComponent(UAttributeBasedRootMotionComponent *this)

{
  byte *pbVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  UObject *local_res8;
  
  UActorComponent::InitializeComponent((UActorComponent *)this);
  local_res8 = *(UObject **)&this->field_0xa8;
  if (local_res8 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_ACharacter_NoRegister();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&local_res8->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&local_res8->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar5->_padding_)) goto LAB_14cf12028;
  }
  local_res8 = (UObject *)0x0;
LAB_14cf12028:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=(&(this->CharacterOwner).WeakPtr,(FObjectPtr)&local_res8);
  pUVar6 = FWeakObjectPtr::Get(&(this->CharacterOwner).WeakPtr);
  if (pUVar6 == (UObject *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Character",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\MotionWarping\\Source\\MotionWarping\\Private\\AttributeBasedRootMotionComponent.cpp"
                       ,0x22,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pbVar1 = (byte *)((longlong)&(this->PrePhysicsTickFunction)._padding_ + 2);
  *pbVar1 = *pbVar1 | 6;
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->PrePhysicsTickFunction,true);
  *(undefined1 *)&(this->PrePhysicsTickFunction)._padding_ = 0;
  (this->PrePhysicsTickFunction).Target = this;
  return;
}

// PrePhysicsTickComponent @ 14cf136d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UAttributeBasedRootMotionComponent::PrePhysicsTickComponent
          (UAttributeBasedRootMotionComponent *this,float param_1)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined8 uVar15;
  UObject *pUVar16;
  double dVar17;
  undefined1 local_88 [16];
  double local_78;
  double local_70;
  TQuat<double> local_68 [3];
  
  if (((this->bEnableRootMotion != false) &&
      (pUVar16 = FWeakObjectPtr::Get(&(this->CharacterOwner).WeakPtr), pUVar16 != (UObject *)0x0))
     && (lVar3 = *(longlong *)(pUVar16 + 0x15), lVar3 != 0)) {
    fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
    fVar5 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar6 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar7 = GlobalVectorConstants::Float1110.m128_f32[3];
    dVar17 = (double)param_1;
    dVar1 = (this->TranslationVelocity).field0_0x0._s_0.X;
    dVar2 = (this->TranslationVelocity).field0_0x0._s_0.Z;
    dVar8 = dVar17 * (this->TranslationVelocity).field0_0x0._s_0.Y;
    dVar9 = (this->RotationVelocity).field0_0x0._s_0.Y * dVar17 * _UNK_150689678;
    local_78 = dVar17 * (this->RotationVelocity).field0_0x0._s_0.Z *
               ___xmm_3fe00000000000003fe0000000000000;
    local_88._8_4_ = SUB84(dVar9,0);
    local_88._0_8_ =
         (this->RotationVelocity).field0_0x0._s_0.X * dVar17 *
         ___xmm_3fe00000000000003fe0000000000000;
    local_88._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    local_70 = 0.0;
    UE::Math::TQuat<double>::Exp((TQuat<double> *)local_88,local_68);
    *(undefined1 *)(lVar3 + 0xf40) = 1;
    *(double *)(lVar3 + 0xf50) = local_68[0].X;
    *(double *)(lVar3 + 0xf58) = local_68[0].Y;
    *(double *)(lVar3 + 0xf60) = local_68[0].Z;
    *(double *)(lVar3 + 0xf68) = local_68[0].W;
    auVar11._8_4_ = SUB84(dVar8,0);
    auVar11._0_8_ = dVar17 * dVar1;
    auVar11._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *(undefined1 (*) [16])(lVar3 + 0xf70) = auVar11;
    auVar10._8_4_ = SUB84(dVar17,0);
    auVar10._0_8_ = dVar17 * dVar2;
    auVar10._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    *(undefined1 (*) [16])(lVar3 + 0xf80) = auVar10;
    auVar13._8_4_ = SUB84((double)fVar5,0);
    auVar13._0_8_ = (double)fVar4;
    auVar13._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
    *(undefined1 (*) [16])(lVar3 + 0xf90) = auVar13;
    auVar12._8_4_ = SUB84((double)fVar7,0);
    auVar12._0_8_ = (double)fVar6;
    auVar12._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
    *(undefined1 (*) [16])(lVar3 + 4000) = auVar12;
    uVar15 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Z;
    uVar14 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Y;
    *(double *)(lVar3 + 0xf90) = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.X;
    *(undefined8 *)(lVar3 + 0xf98) = uVar14;
    *(undefined8 *)(lVar3 + 4000) = uVar15;
    *(undefined8 *)(lVar3 + 0xfa8) = 0;
    *(undefined4 *)(lVar3 + 0xf44) = 0x3f800000;
  }
  return;
}

// RegisterComponentTickFunctions @ 14cf1af60

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
UAttributeBasedRootMotionComponent::RegisterComponentTickFunctions
          (UAttributeBasedRootMotionComponent *this,bool param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  ULevel *pUVar6;
  UObject *pUVar7;
  UObject *local_res8;
  
  UActorComponent::RegisterComponentTickFunctions((UActorComponent *)this,param_1);
  if (this->Mode != ApplyVelocity) {
    return;
  }
  if (!param_1) {
    FTickFunction::UnRegisterTickFunction((FTickFunction *)&this->PrePhysicsTickFunction);
    return;
  }
  pUVar5 = *(UObject **)&this->field_0xa8;
  if (pUVar5 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_ACharacter_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       (local_res8 = pUVar5,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
       &pUVar4->_padding_)) goto LAB_14cf1afc8;
  }
  local_res8 = (UObject *)0x0;
LAB_14cf1afc8:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=(&(this->CharacterOwner).WeakPtr,(FObjectPtr)&local_res8);
  pUVar5 = FWeakObjectPtr::Get(&(this->CharacterOwner).WeakPtr);
  if ((pUVar5 == (UObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Character",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\MotionWarping\\Source\\MotionWarping\\Private\\AttributeBasedRootMotionComponent.cpp"
                         ,0x35,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar7 = (UObject *)0x0;
  if (*(UObject **)(pUVar5 + 0x15) != (UObject *)0x0) {
    pUVar7 = *(UObject **)(pUVar5 + 0x15);
  }
  pUVar6 = UActorComponent::GetComponentLevel((UActorComponent *)this);
  FTickFunction::RegisterTickFunction((FTickFunction *)&this->PrePhysicsTickFunction,pUVar6);
  FTickFunction::AddPrerequisite
            ((FTickFunction *)&pUVar7[1].field_0x10,(UObject *)this,
             (FTickFunction *)&this->PrePhysicsTickFunction);
  return;
}

// StaticRegisterNativesUAttributeBasedRootMotionComponent @ 14cf1bd30

void __cdecl
UAttributeBasedRootMotionComponent::StaticRegisterNativesUAttributeBasedRootMotionComponent(void)

{
  return;
}

// TickComponent @ 14cf1c030

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

void __thiscall
UAttributeBasedRootMotionComponent::TickComponent
          (UAttributeBasedRootMotionComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  UObject *pUVar9;
  UScriptStruct *pUVar10;
  double *pdVar11;
  TTransform<double> *pTVar12;
  TTransform<double> *pTVar13;
  double dVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  undefined4 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  FName local_res8;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_b8;
  TQuat<double> local_98 [4];
  
  if (this->bEnableRootMotion != false) {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&RootMotionAttributeName,"RootMotionDelta");
      _Init_thread_footer(&::_TSS0);
    }
    if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      RootMotionAttributeId.Namespace = UE::Anim::BoneAttributeNamespace;
      RootMotionAttributeId.Name = RootMotionAttributeName;
      _Init_thread_footer(&::_TSS1);
    }
    UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
    pUVar9 = FWeakObjectPtr::Get(&(this->CharacterOwner).WeakPtr);
    if ((pUVar9 != (UObject *)0x0) && (lVar2 = *(longlong *)&pUVar9[0x14].field_0x20, lVar2 != 0)) {
      iVar1 = *(int *)(lVar2 + 0x660);
      pUVar10 = FTransformAnimationAttribute::StaticStruct();
      pdVar11 = (double *)
                UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::Find
                          ((TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
                           ((longlong)iVar1 * 0x40 + 0xf38 + lVar2),pUVar10,&RootMotionAttributeId);
      local_98[0].W = __real_3ff0000000000000;
      if (pdVar11 != (double *)0x0) {
        dVar16 = pdVar11[5];
        local_b8._s_0.Z = pdVar11[6];
        dVar4 = __real_3ff0000000000000 / (double)param_1;
        (this->TranslationVelocity).field0_0x0._s_0.X = pdVar11[4] * dVar4;
        (this->TranslationVelocity).field0_0x0._s_0.Y = dVar16 * dVar4;
        (this->TranslationVelocity).field0_0x0._s_0.Z = local_b8._s_0.Z * dVar4;
        if (pdVar11[3] * UE::Math::TQuat<double>::Identity.W +
            pdVar11[2] * UE::Math::TQuat<double>::Identity.Z +
            pdVar11[1] * UE::Math::TQuat<double>::Identity.Y +
            *pdVar11 * UE::Math::TQuat<double>::Identity.X < 0.0) {
          local_98[0].W = __real_bff0000000000000;
        }
        local_98[0].X = *pdVar11 * local_98[0].W;
        local_98[0].Y = pdVar11[1] * local_98[0].W;
        local_98[0].Z = pdVar11[2] * local_98[0].W;
        local_98[0].W = pdVar11[3] * local_98[0].W;
        UE::Math::TQuat<double>::Log(local_98,(TQuat<double> *)&local_b8._s_0);
        dVar16 = local_b8._s_0.Y * _UNK_150689698;
        dVar17 = local_b8._s_0.Z * ___xmm_40000000000000004000000000000000;
        (this->RotationVelocity).field0_0x0._s_0.X =
             local_b8._s_0.X * ___xmm_40000000000000004000000000000000 * dVar4;
        (this->RotationVelocity).field0_0x0._s_0.Y = dVar16 * dVar4;
        (this->RotationVelocity).field0_0x0._s_0.Z = dVar17 * dVar4;
        if ((this->Mode == ApplyDelta) && (lVar3 = *(longlong *)(pUVar9 + 0x15), lVar3 != 0)) {
          *(undefined1 *)(lVar3 + 0xf40) = 1;
          dVar4 = pdVar11[1];
          *(double *)(lVar3 + 0xf50) = *pdVar11;
          *(double *)(lVar3 + 0xf58) = dVar4;
          dVar4 = pdVar11[3];
          *(double *)(lVar3 + 0xf60) = pdVar11[2];
          *(double *)(lVar3 + 0xf68) = dVar4;
          dVar4 = pdVar11[5];
          *(double *)(lVar3 + 0xf70) = pdVar11[4];
          *(double *)(lVar3 + 0xf78) = dVar4;
          dVar4 = pdVar11[7];
          *(double *)(lVar3 + 0xf80) = pdVar11[6];
          *(double *)(lVar3 + 0xf88) = dVar4;
          dVar4 = pdVar11[9];
          *(double *)(lVar3 + 0xf90) = pdVar11[8];
          *(double *)(lVar3 + 0xf98) = dVar4;
          dVar4 = pdVar11[0xb];
          *(double *)(lVar3 + 4000) = pdVar11[10];
          *(double *)(lVar3 + 0xfa8) = dVar4;
          uVar8 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Z;
          uVar7 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Y;
          *(double *)(lVar3 + 0xf90) = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.X;
          *(undefined8 *)(lVar3 + 0xf98) = uVar7;
          *(undefined8 *)(lVar3 + 4000) = uVar8;
          *(undefined8 *)(lVar3 + 0xfa8) = 0;
          *(undefined4 *)(lVar3 + 0xf44) = 0x3f800000;
        }
        if (FVisualLogger::bIsRecording != 0) {
          lVar3 = *(longlong *)(pUVar9 + 0xb);
          pTVar13 = (TTransform<double> *)(lVar3 + 0x1f0);
          if (lVar3 == 0) {
            pTVar13 = &UE::Math::TTransform<double>::Identity;
          }
          auVar23 = *(undefined1 (*) [16])(lVar2 + 0x200);
          pTVar12 = &UE::Math::TTransform<double>::Identity;
          if (lVar3 != 0) {
            pTVar12 = (TTransform<double> *)(lVar3 + 0x1f0);
          }
          dVar5 = (this->TranslationVelocity).field0_0x0._s_0.Z * *(double *)(lVar2 + 0x240);
          dVar24 = *(double *)(lVar2 + 0x248) * 0.0;
          dVar6 = *(double *)(lVar2 + 0x208);
          dVar16 = *(double *)(lVar2 + 0x230) * (this->TranslationVelocity).field0_0x0._s_0.X;
          dVar17 = *(double *)(lVar2 + 0x238) * (this->TranslationVelocity).field0_0x0._s_0.Y;
          uVar26 = (undefined4)((ulonglong)dVar17 >> 0x20);
          auVar14 = *(undefined1 (*) [16])(lVar2 + 0x1f0);
          auVar18 = blendpd(auVar14,auVar23,2);
          auVar27._8_4_ = SUB84(dVar17,0);
          auVar27._0_8_ = dVar16;
          auVar27._12_4_ = uVar26;
          dVar4 = auVar23._0_8_;
          auVar28._0_8_ = auVar27._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar16;
          auVar28._8_8_ = dVar5 * auVar14._8_8_ - dVar4 * dVar17;
          auVar29._8_4_ = SUB84(dVar17,0);
          auVar29._0_8_ = dVar16;
          auVar29._12_4_ = uVar26;
          auVar14._8_4_ = SUB84(dVar24,0);
          auVar14._0_8_ = dVar5;
          auVar14._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
          auVar14 = blendpd(auVar29,auVar14,2);
          auVar15._0_8_ = auVar14._0_8_ * dVar4 - auVar18._0_8_ * dVar5;
          auVar15._8_8_ = auVar14._8_8_ * auVar23._8_8_ - auVar18._8_8_ * dVar24;
          auVar14 = *(undefined1 (*) [16])(lVar2 + 0x1f0);
          auVar29 = blendpd(auVar28,auVar15,2);
          dVar24 = auVar28._8_8_ + auVar28._8_8_;
          dVar25 = auVar15._0_8_ + auVar15._0_8_;
          auVar30._0_8_ = auVar29._0_8_ + auVar29._0_8_;
          auVar30._8_8_ = auVar29._8_8_ + auVar29._8_8_;
          auVar21._8_4_ = SUB84(dVar25,0);
          auVar21._0_8_ = dVar24;
          uVar26 = (undefined4)((ulonglong)dVar25 >> 0x20);
          auVar21._12_4_ = uVar26;
          auVar19._8_4_ = SUB84(dVar25,0);
          auVar19._0_8_ = dVar24;
          auVar19._12_4_ = uVar26;
          auVar29 = blendpd(auVar19,auVar30,2);
          auVar22._0_8_ = auVar21._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar24;
          auVar22._8_8_ = auVar30._0_8_ * auVar14._8_8_ - dVar4 * dVar25;
          auVar14 = blendpd(auVar14,auVar23,2);
          auVar18._8_4_ = SUB84(auVar22._8_8_,0);
          auVar18._0_8_ = auVar22._0_8_;
          auVar18._12_4_ = (int)((ulonglong)auVar22._8_8_ >> 0x20);
          auVar20._0_8_ = auVar29._0_8_ * dVar4 - auVar14._0_8_ * auVar30._0_8_;
          auVar20._8_8_ = auVar29._8_8_ * auVar23._8_8_ - auVar14._8_8_ * auVar30._8_8_;
          auVar23 = blendpd(auVar22,auVar20,2);
          local_d8._s_0.X =
               (dVar24 * dVar6 + dVar16 + auVar18._8_8_) * __real_3fb999999999999a +
               (pTVar13->Translation).XY.m128d_f64[0];
          local_d8._s_0.Y =
               (dVar25 * dVar6 + dVar17 + auVar20._0_8_) * __real_3fb999999999999a +
               (pTVar13->Translation).XY.m128d_f64[1];
          local_d8._s_0.Z =
               (auVar30._0_8_ * dVar6 + dVar5 + auVar23._0_8_) * __real_3fb999999999999a +
               (pTVar13->Translation).ZW.m128d_f64[0];
          local_b8._0_16_ = *(undefined1 (*) [16])(pTVar12->Translation).XY.m128d_f64;
          local_b8._s_0.Z = (pTVar12->Translation).ZW.m128d_f64[0];
          ::FName::FName(&local_res8,"Root Motion");
          FVisualLogger::ArrowLineLogfImpl
                    ((UObject *)this,&local_res8,Display,(TVector<double> *)&local_b8._s_0,
                     (TVector<double> *)&local_d8._s_0,&FColor::Green,0,L"");
        }
      }
    }
  }
  return;
}

