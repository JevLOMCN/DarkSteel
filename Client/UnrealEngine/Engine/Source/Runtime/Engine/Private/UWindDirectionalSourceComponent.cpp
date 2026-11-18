// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 26

// StaticClass @ 147337630

UClass * __cdecl UWindDirectionalSourceComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWindDirectionalSourceComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WindDirectionalSourceComponent",
               &Z_Registration_Info_UClass_UWindDirectionalSourceComponent.InnerSingleton,
               StaticRegisterNativesUWindDirectionalSourceComponent,0x270,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWindDirectionalSourceComponent>,
               InternalVTableHelperCtorCaller<UWindDirectionalSourceComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWindDirectionalSourceComponent.InnerSingleton;
}

// UWindDirectionalSourceComponent @ 147340f10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWindDirectionalSourceComponent * __thiscall
UWindDirectionalSourceComponent::UWindDirectionalSourceComponent
          (UWindDirectionalSourceComponent *this,FVTableHelper *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// ~UWindDirectionalSourceComponent @ 1473423c0

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
UWindDirectionalSourceComponent::~UWindDirectionalSourceComponent
          (UWindDirectionalSourceComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// GetPrivateStaticClass @ 1473504a0

UClass * __cdecl UWindDirectionalSourceComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWindDirectionalSourceComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"WindDirectionalSourceComponent",
               &Z_Registration_Info_UClass_UWindDirectionalSourceComponent.InnerSingleton,
               StaticRegisterNativesUWindDirectionalSourceComponent,0x270,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWindDirectionalSourceComponent>,
               InternalVTableHelperCtorCaller<UWindDirectionalSourceComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWindDirectionalSourceComponent.InnerSingleton;
}

// StaticRegisterNativesUWindDirectionalSourceComponent @ 1473589a0

void __cdecl
UWindDirectionalSourceComponent::StaticRegisterNativesUWindDirectionalSourceComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UWindDirectionalSourceComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetMaximumGustAmount @ 147361a30

void __cdecl
UWindDirectionalSourceComponent::execSetMaximumGustAmount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetMaximumGustAmount((UWindDirectionalSourceComponent *)param_1,local_res10[0]);
  return;
}

// execSetMinimumGustAmount @ 147361ac0

void __cdecl
UWindDirectionalSourceComponent::execSetMinimumGustAmount
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetMinimumGustAmount((UWindDirectionalSourceComponent *)param_1,local_res10[0]);
  return;
}

// execSetRadius @ 147361d90

void __cdecl
UWindDirectionalSourceComponent::execSetRadius(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetRadius((UWindDirectionalSourceComponent *)param_1,local_res10[0]);
  return;
}

// execSetSpeed @ 147361e20

void __cdecl
UWindDirectionalSourceComponent::execSetSpeed(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetSpeed((UWindDirectionalSourceComponent *)param_1,local_res10[0]);
  return;
}

// execSetStrength @ 147361eb0

void __cdecl
UWindDirectionalSourceComponent::execSetStrength(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetStrength((UWindDirectionalSourceComponent *)param_1,local_res10[0]);
  return;
}

// execSetWindType @ 1473622f0

void __cdecl
UWindDirectionalSourceComponent::execSetWindType(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EWindSourceType local_res10 [24];
  
  local_res10[0] = Directional;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetWindType((UWindDirectionalSourceComponent *)param_1,local_res10[0]);
  return;
}

// UWindDirectionalSourceComponent @ 1489b7510

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWindDirectionalSourceComponent * __thiscall
UWindDirectionalSourceComponent::UWindDirectionalSourceComponent
          (UWindDirectionalSourceComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 8;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->Strength = 0.1;
  this->Speed = 0.1;
  this->MinGustAmount = 0.1;
  this->MaxGustAmount = 0.2;
  return this;
}

// Activate @ 1489c2220

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
UWindDirectionalSourceComponent::Activate(UWindDirectionalSourceComponent *this,bool param_1)

{
  UWorld *pUVar1;
  
  UActorComponent::Activate((UActorComponent *)this,param_1);
  if ((this->_padding_ & 2) != 0) {
    pUVar1 = (UWorld *)this->_padding_;
    if (pUVar1 == (UWorld *)0x0) {
      pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
                    /* WARNING: Could not recover jumptable at 0x0001489c225d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->Scene->_padding_ + 0x378))(pUVar1->Scene,this);
    return;
  }
  return;
}

// CreateRenderState_Concurrent @ 1489d48c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UWindDirectionalSourceComponent::CreateRenderState_Concurrent
          (UWindDirectionalSourceComponent *this,FRegisterComponentContext *param_1)

{
  UWorld *pUVar1;
  
  UActorComponent::CreateRenderState_Concurrent((UActorComponent *)this,param_1);
  pUVar1 = (UWorld *)this->_padding_;
  if (pUVar1 == (UWorld *)0x0) {
    pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
                    /* WARNING: Could not recover jumptable at 0x0001489d48f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar1->Scene->_padding_ + 0x378))(pUVar1->Scene,this);
  return;
}

// CreateSceneProxy @ 1489d4cb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FWindSourceSceneProxy * __thiscall
UWindDirectionalSourceComponent::CreateSceneProxy(UWindDirectionalSourceComponent *this)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  FWindSourceSceneProxy *pFVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 uVar21;
  double dVar22;
  double dVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  if (this->bPointWind == 0) {
    pFVar10 = ::operator_new(0x48);
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (pFVar10 != (FWindSourceSceneProxy *)0x0) {
      auVar20._0_8_ = this->_padding_;
      auVar20._8_8_ = this->_padding_;
      dVar4 = (double)this->_padding_;
      dVar22 = (double)__xmm_00000000000000003ff0000000000000;
      auVar14._0_8_ = this->_padding_;
      auVar14._8_8_ = this->_padding_;
      fVar1 = this->Strength;
      fVar5 = this->Speed;
      fVar6 = this->MinGustAmount;
      fVar7 = this->MaxGustAmount;
      dVar25 = __xmm_00000000000000003ff0000000000000._8_8_;
      auVar23._0_8_ = dVar25 * (double)auVar14._0_8_ - (double)auVar14._8_8_ * dVar22;
      auVar23._8_8_ = (double)auVar14._8_8_ * 0.0 - (double)auVar20._0_8_ * dVar25;
      auVar11 = blendpd(___xmm_00000000000000003ff0000000000000,ZEXT816(0),2);
      auVar14 = blendpd(auVar14,auVar20,2);
      auVar12._0_8_ = auVar11._0_8_ * (double)auVar20._0_8_ - auVar14._0_8_ * 0.0;
      auVar12._8_8_ = auVar11._8_8_ * (double)auVar20._8_8_ - auVar14._8_8_ * 0.0;
      auVar11._0_8_ = this->_padding_;
      auVar11._8_8_ = this->_padding_;
      auVar14 = blendpd(auVar23,auVar12,2);
      dVar2 = auVar23._8_8_ + auVar23._8_8_;
      dVar3 = auVar12._0_8_ + auVar12._0_8_;
      uVar21 = (undefined4)((ulonglong)dVar3 >> 0x20);
      auVar24._0_8_ = auVar14._0_8_ + auVar14._0_8_;
      auVar24._8_8_ = auVar14._8_8_ + auVar14._8_8_;
      auVar18._8_4_ = SUB84(dVar3,0);
      auVar18._0_8_ = dVar2;
      auVar18._12_4_ = uVar21;
      auVar15._8_4_ = SUB84(dVar3,0);
      auVar15._0_8_ = dVar2;
      auVar15._12_4_ = uVar21;
      auVar16 = blendpd(auVar15,auVar24,2);
      auVar19._0_8_ = auVar18._8_8_ * (double)auVar11._0_8_ - (double)auVar11._8_8_ * dVar2;
      auVar19._8_8_ = auVar24._0_8_ * (double)auVar11._8_8_ - (double)auVar20._0_8_ * dVar3;
      auVar13._8_4_ = SUB84(auVar19._8_8_,0);
      auVar13._0_8_ = auVar19._0_8_;
      auVar13._12_4_ = (int)((ulonglong)auVar19._8_8_ >> 0x20);
      auVar14 = blendpd(auVar11,auVar20,2);
      auVar17._0_8_ = auVar16._0_8_ * (double)auVar20._0_8_ - auVar14._0_8_ * auVar24._0_8_;
      auVar17._8_8_ = auVar16._8_8_ * (double)auVar20._8_8_ - auVar14._8_8_ * auVar24._8_8_;
      dVar3 = dVar3 * dVar4 + dVar25 + auVar17._0_8_;
      auVar20 = blendpd(auVar19,auVar17,2);
      (pFVar10->Position).field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (pFVar10->Position).field0_0x0._s_0.Y = (double)uVar9;
      uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      auVar16._8_4_ = SUB84(dVar3,0);
      auVar16._0_8_ = dVar2 * dVar4 + dVar22 + auVar13._8_8_;
      auVar16._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      *(undefined1 (*) [16])&(pFVar10->Direction).field0_0x0 = auVar16;
      (pFVar10->Direction).field0_0x0._s_0.Z = auVar24._0_8_ * dVar4 + auVar20._0_8_;
      pFVar10->Strength = fVar1;
      pFVar10->Speed = fVar5;
      pFVar10->MinGustAmt = fVar6;
      pFVar10->MaxGustAmt = fVar7;
      (pFVar10->Position).field0_0x0._s_0.Z = (double)uVar9;
      pFVar10->Radius = 0.0;
      pFVar10->bIsPointSource = false;
    }
    return pFVar10;
  }
  pFVar10 = ::operator_new(0x48);
  if (pFVar10 == (FWindSourceSceneProxy *)0x0) {
    return (FWindSourceSceneProxy *)0x0;
  }
  dVar3 = (double)this->_padding_;
  dVar2 = (double)this->_padding_;
  fVar1 = this->Radius;
  fVar5 = this->Strength;
  fVar6 = this->Speed;
  fVar7 = this->MinGustAmount;
  fVar8 = this->MaxGustAmount;
  (pFVar10->Position).field0_0x0._s_0.X = (double)this->_padding_;
  (pFVar10->Position).field0_0x0._s_0.Y = dVar3;
  (pFVar10->Position).field0_0x0._s_0.Z = dVar2;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (pFVar10->Direction).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (pFVar10->Direction).field0_0x0._s_0.Y = (double)uVar9;
  (pFVar10->Direction).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pFVar10->Radius = fVar1;
  pFVar10->Strength = fVar5;
  pFVar10->Speed = fVar6;
  pFVar10->MinGustAmt = fVar7;
  pFVar10->MaxGustAmt = fVar8;
  pFVar10->bIsPointSource = true;
  return pFVar10;
}

// Deactivate @ 1489d5970

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UWindDirectionalSourceComponent::Deactivate(UWindDirectionalSourceComponent *this)

{
  UWorld *pUVar1;
  
  UActorComponent::Deactivate((UActorComponent *)this);
  if (this->SceneProxy != (FWindSourceSceneProxy *)0x0) {
    pUVar1 = (UWorld *)this->_padding_;
    if (pUVar1 == (UWorld *)0x0) {
      pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
                    /* WARNING: Could not recover jumptable at 0x0001489d59ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->Scene->_padding_ + 0x380))(pUVar1->Scene,this);
    return;
  }
  return;
}

// DestroyRenderState_Concurrent @ 1489d6140

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
UWindDirectionalSourceComponent::DestroyRenderState_Concurrent
          (UWindDirectionalSourceComponent *this)

{
  UWorld *pUVar1;
  
  UActorComponent::DestroyRenderState_Concurrent((UActorComponent *)this);
  pUVar1 = (UWorld *)this->_padding_;
  if (pUVar1 == (UWorld *)0x0) {
    pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
                    /* WARNING: Could not recover jumptable at 0x0001489d6174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar1->Scene->_padding_ + 0x380))(pUVar1->Scene,this);
  return;
}

// GetWindParameters @ 1489f0f50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UWindDirectionalSourceComponent::GetWindParameters
          (UWindDirectionalSourceComponent *this,TVector<double> *param_1,FWindData *param_2,
          float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 uVar18;
  double dVar19;
  double dVar22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  TVector<double>_u_0 local_98;
  double local_80;
  double dStack_78;
  double local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58;
  undefined1 local_54;
  
  if (this->bPointWind != 0) {
    local_98._s_0.X = (double)this->_padding_;
    local_98._s_0.Y = (double)this->_padding_;
    local_98._s_0.Z = (double)this->_padding_;
    local_68._0_4_ = this->Strength;
    local_68._4_4_ = this->Speed;
    uStack_60._0_4_ = this->MinGustAmount;
    uStack_60._4_4_ = this->MaxGustAmount;
    local_80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_54 = 1;
    local_58 = this->Radius;
    local_70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    bVar7 = FWindSourceSceneProxy::GetWindParameters
                      ((FWindSourceSceneProxy *)&local_98._s_0,param_1,param_2,param_3);
    return bVar7;
  }
  auVar17._0_8_ = this->_padding_;
  auVar17._8_8_ = this->_padding_;
  dVar6 = (double)this->_padding_;
  dVar19 = (double)__xmm_00000000000000003ff0000000000000;
  auVar8._0_8_ = this->_padding_;
  auVar8._8_8_ = this->_padding_;
  dVar22 = __xmm_00000000000000003ff0000000000000._8_8_;
  auVar11 = blendpd(auVar8,auVar17,2);
  auVar20._0_8_ = dVar22 * (double)auVar8._0_8_ - (double)auVar8._8_8_ * dVar19;
  auVar20._8_8_ = (double)auVar8._8_8_ * 0.0 - (double)auVar17._0_8_ * dVar22;
  auVar8 = blendpd(___xmm_00000000000000003ff0000000000000,ZEXT816(0),2);
  auVar9._0_8_ = auVar8._0_8_ * (double)auVar17._0_8_ - auVar11._0_8_ * 0.0;
  auVar9._8_8_ = auVar8._8_8_ * (double)auVar17._8_8_ - auVar11._8_8_ * 0.0;
  auVar11._0_8_ = this->_padding_;
  auVar11._8_8_ = this->_padding_;
  auVar8 = blendpd(auVar20,auVar9,2);
  dVar4 = auVar20._8_8_ + auVar20._8_8_;
  dVar5 = auVar9._0_8_ + auVar9._0_8_;
  uVar18 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar21._0_8_ = auVar8._0_8_ + auVar8._0_8_;
  auVar21._8_8_ = auVar8._8_8_ + auVar8._8_8_;
  auVar15._8_4_ = SUB84(dVar5,0);
  auVar15._0_8_ = dVar4;
  auVar15._12_4_ = uVar18;
  auVar12._8_4_ = SUB84(dVar5,0);
  auVar12._0_8_ = dVar4;
  auVar12._12_4_ = uVar18;
  auVar13 = blendpd(auVar12,auVar21,2);
  auVar16._0_8_ = auVar15._8_8_ * (double)auVar11._0_8_ - (double)auVar11._8_8_ * dVar4;
  auVar16._8_8_ = auVar21._0_8_ * (double)auVar11._8_8_ - (double)auVar17._0_8_ * dVar5;
  auVar8 = blendpd(auVar11,auVar17,2);
  auVar10._8_4_ = SUB84(auVar16._8_8_,0);
  auVar10._0_8_ = auVar16._0_8_;
  auVar10._12_4_ = (int)((ulonglong)auVar16._8_8_ >> 0x20);
  auVar14._0_8_ = auVar13._0_8_ * (double)auVar17._0_8_ - auVar8._0_8_ * auVar21._0_8_;
  auVar14._8_8_ = auVar13._8_8_ * (double)auVar17._8_8_ - auVar8._8_8_ * auVar21._8_8_;
  fVar1 = this->Speed;
  auVar17 = blendpd(auVar16,auVar14,2);
  fVar2 = this->MinGustAmount;
  fVar3 = this->MaxGustAmount;
  dVar5 = dVar5 * dVar6 + dVar22 + auVar14._0_8_;
  *param_3 = this->Strength;
  auVar13._8_4_ = SUB84(dVar5,0);
  auVar13._0_8_ = dVar4 * dVar6 + dVar19 + auVar10._8_8_;
  auVar13._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])&(param_2->Direction).field0_0x0 = auVar13;
  (param_2->Direction).field0_0x0._s_0.Z = auVar21._0_8_ * dVar6 + auVar17._0_8_;
  param_2->Speed = fVar1;
  param_2->MinGustAmt = fVar2;
  param_2->MaxGustAmt = fVar3;
  return true;
}

// SendRenderDynamicData_Concurrent @ 148a10ec0

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
UWindDirectionalSourceComponent::SendRenderDynamicData_Concurrent
          (UWindDirectionalSourceComponent *this)

{
  UWorld *pUVar1;
  
  UActorComponent::SendRenderDynamicData_Concurrent((UActorComponent *)this);
  pUVar1 = (UWorld *)this->_padding_;
  if (pUVar1 == (UWorld *)0x0) {
    pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
                    /* WARNING: Could not recover jumptable at 0x000148a10ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar1->Scene->_padding_ + 0x388))(pUVar1->Scene,this);
  return;
}

// SendRenderTransform_Concurrent @ 148a10f10

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
UWindDirectionalSourceComponent::SendRenderTransform_Concurrent
          (UWindDirectionalSourceComponent *this)

{
  UWorld *pUVar1;
  
  UActorComponent::SendRenderTransform_Concurrent((UActorComponent *)this);
  pUVar1 = (UWorld *)this->_padding_;
  if (pUVar1 == (UWorld *)0x0) {
    pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
                    /* WARNING: Could not recover jumptable at 0x000148a10f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pUVar1->Scene->_padding_ + 0x388))(pUVar1->Scene,this);
  return;
}

// SetMaximumGustAmount @ 148a15890

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
UWindDirectionalSourceComponent::SetMaximumGustAmount
          (UWindDirectionalSourceComponent *this,float param_1)

{
  this->MaxGustAmount = param_1;
  UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this);
  return;
}

// SetMinimumGustAmount @ 148a15a20

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
UWindDirectionalSourceComponent::SetMinimumGustAmount
          (UWindDirectionalSourceComponent *this,float param_1)

{
  this->MinGustAmount = param_1;
  UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this);
  return;
}

// SetRadius @ 148a164f0

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
UWindDirectionalSourceComponent::SetRadius(UWindDirectionalSourceComponent *this,float param_1)

{
  this->Radius = param_1;
  UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this);
  return;
}

// SetSpeed @ 148a16620

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
UWindDirectionalSourceComponent::SetSpeed(UWindDirectionalSourceComponent *this,float param_1)

{
  this->Speed = param_1;
  UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this);
  return;
}

// SetStrength @ 148a16780

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
UWindDirectionalSourceComponent::SetStrength(UWindDirectionalSourceComponent *this,float param_1)

{
  this->Strength = param_1;
  UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this);
  return;
}

// SetWindType @ 148a16880

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
UWindDirectionalSourceComponent::SetWindType
          (UWindDirectionalSourceComponent *this,EWindSourceType param_1)

{
  this->bPointWind = 0;
  *(uint *)&this->field_0x264 = *(uint *)&this->field_0x264 | (uint)(param_1 == Point);
  UActorComponent::MarkRenderDynamicDataDirty((UActorComponent *)this);
  return;
}

