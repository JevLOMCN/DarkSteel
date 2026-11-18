// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 11

// StaticClass @ 14cefecb0

UClass * __cdecl UMotionWarpingSwitchOffAngleToTargetCondition::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionWarpingSwitchOffAngleToTargetCondition.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"MotionWarpingSwitchOffAngleToTargetCondition",
               &Z_Registration_Info_UClass_UMotionWarpingSwitchOffAngleToTargetCondition.
                InnerSingleton,StaticRegisterNativesUMotionWarpingSwitchOffAngleToTargetCondition,
               0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMotionWarpingSwitchOffAngleToTargetCondition>,
               InternalVTableHelperCtorCaller<UMotionWarpingSwitchOffAngleToTargetCondition>,
               local_res8,UMotionWarpingSwitchOffCondition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionWarpingSwitchOffAngleToTargetCondition.InnerSingleton;
}

// UMotionWarpingSwitchOffAngleToTargetCondition @ 14cf044b0

UMotionWarpingSwitchOffAngleToTargetCondition * __thiscall
UMotionWarpingSwitchOffAngleToTargetCondition::UMotionWarpingSwitchOffAngleToTargetCondition
          (UMotionWarpingSwitchOffAngleToTargetCondition *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0x101;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMotionWarpingSwitchOffAngleToTargetCondition__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  return this;
}

// UMotionWarpingSwitchOffAngleToTargetCondition @ 14cf044f0

UMotionWarpingSwitchOffAngleToTargetCondition * __thiscall
UMotionWarpingSwitchOffAngleToTargetCondition::UMotionWarpingSwitchOffAngleToTargetCondition
          (UMotionWarpingSwitchOffAngleToTargetCondition *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0x101;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMotionWarpingSwitchOffAngleToTargetCondition__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  return this;
}

// ~UMotionWarpingSwitchOffAngleToTargetCondition @ 14cf058f0

void __thiscall
UMotionWarpingSwitchOffAngleToTargetCondition::~UMotionWarpingSwitchOffAngleToTargetCondition
          (UMotionWarpingSwitchOffAngleToTargetCondition *this)

{
  this->_padding_ = (longlong)&___7UMotionWarpingSwitchOffCondition__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CalculateAngleToTarget @ 14cf09800

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall
UMotionWarpingSwitchOffAngleToTargetCondition::CalculateAngleToTarget
          (UMotionWarpingSwitchOffAngleToTargetCondition *this)

{
  USceneComponent *this_00;
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TVector<double>_u_0 *pTVar5;
  TVector<double> *pTVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  TVector<double>_u_0 local_80;
  TVector<double> local_68 [4];
  
  this_00 = *(USceneComponent **)(this->_padding_ + 0x1b8);
  if (this_00 == (USceneComponent *)0x0) {
    pTVar5 = &local_80;
    local_80._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
    local_80._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
    local_80._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  }
  else {
    pTVar5 = &USceneComponent::GetForwardVector(this_00,(TVector<double> *)&local_80._s_0)->
              field0_0x0;
  }
  dVar2 = (((TVector<double>_u_0 *)&(pTVar5->_s_0).X)->_s_0).X;
  dVar4 = (pTVar5->_s_0).Y;
  dVar10 = (pTVar5->_s_0).Z;
  pTVar6 = UMotionWarpingSwitchOffCondition::GetTargetLocation
                     ((UMotionWarpingSwitchOffCondition *)this,local_68);
  lVar1 = *(longlong *)(this->_padding_ + 0x1b8);
  if (lVar1 == 0) {
    uVar14 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar15 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  }
  else {
    uVar14 = *(undefined4 *)(lVar1 + 0x220);
    uVar15 = *(undefined4 *)(lVar1 + 0x224);
    uVar9 = *(double *)(lVar1 + 0x210);
    uVar11 = *(double *)(lVar1 + 0x218);
  }
  dVar12 = (pTVar6->field0_0x0)._s_0.X - (double)uVar9;
  local_80._s_0.Z = (double)CONCAT44(uVar15,uVar14);
  dVar3 = (pTVar6->field0_0x0)._s_0.Y - (double)uVar11;
  dVar13 = (pTVar6->field0_0x0)._s_0.Z - local_80._s_0.Z;
  if (this->bIgnoreZAxis == false) {
    uVar14 = SUB84(dVar10,0);
    uVar15 = (undefined4)((ulonglong)dVar10 >> 0x20);
  }
  else {
    dVar13 = 0.0;
    uVar14 = 0;
    uVar15 = 0;
    dVar10 = dVar4 * dVar4 + dVar2 * dVar2;
    if (__real_3e45798ee0000000 < dVar10) {
      dVar10 = __real_3ff0000000000000 / SQRT(dVar10);
      dVar2 = dVar2 * dVar10;
      dVar4 = dVar4 * dVar10;
    }
  }
  dVar10 = dVar3 * dVar3 + dVar12 * dVar12 + dVar13 * dVar13;
  if (__real_3e45798ee0000000 < dVar10) {
    dVar10 = __real_3ff0000000000000 / SQRT(dVar10);
    dVar12 = dVar12 * dVar10;
    dVar3 = dVar3 * dVar10;
    dVar13 = dVar13 * dVar10;
  }
  uVar7 = SUB84(__real_bff0000000000000,0);
  uVar8 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  dVar10 = dVar12 * dVar2 + dVar3 * dVar4 + (double)CONCAT44(uVar15,uVar14) * dVar13;
  if (__real_bff0000000000000 <= dVar10) {
    if (__real_3ff0000000000000 <= dVar10) {
      dVar10 = __real_3ff0000000000000;
    }
    uVar7 = SUB84(dVar10,0);
    uVar8 = (undefined4)((ulonglong)dVar10 >> 0x20);
  }
  dVar10 = acos((double)CONCAT44(uVar8,uVar7));
  return (float)(dVar10 * __real_404ca5dc1a63c1f8);
}

// CreateSwitchOffAngleToTargetCondition @ 14cf0ac10

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMotionWarpingSwitchOffAngleToTargetCondition * __cdecl
UMotionWarpingSwitchOffAngleToTargetCondition::CreateSwitchOffAngleToTargetCondition
          (AActor *param_1,ESwitchOffConditionEffect param_2,ESwitchOffConditionAngleOp param_3,
          float param_4,bool param_5,bool param_6,AActor *param_7)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMotionWarpingSwitchOffAngleToTargetCondition *pUVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar2);
  local_b8._8_8_ = pUVar1;
  pUVar3 = (UMotionWarpingSwitchOffAngleToTargetCondition *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar4 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pUVar3->_padding_ = (longlong)param_1;
  *(bool *)&pUVar3->_padding_ = param_6;
  pUVar3->Angle = param_4;
  *(ESwitchOffConditionEffect *)((longlong)&pUVar3->_padding_ + 1) = param_2;
  pUVar3->Operator = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_7 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_7);
  }
  pUVar3->_padding_ = (longlong)param_7;
  return pUVar3;
}

// ExtraDebugInfo @ 14cf0c710

FString * __thiscall
UMotionWarpingSwitchOffAngleToTargetCondition::ExtraDebugInfo
          (UMotionWarpingSwitchOffAngleToTargetCondition *this,FString *__return_storage_ptr__)

{
  CalculateAngleToTarget(this);
  ::FString::PrintfImpl(__return_storage_ptr__,L"Angle: %f %c %f");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14cf105e0

UClass * __cdecl UMotionWarpingSwitchOffAngleToTargetCondition::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionWarpingSwitchOffAngleToTargetCondition.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"MotionWarpingSwitchOffAngleToTargetCondition",
               &Z_Registration_Info_UClass_UMotionWarpingSwitchOffAngleToTargetCondition.
                InnerSingleton,StaticRegisterNativesUMotionWarpingSwitchOffAngleToTargetCondition,
               0x58,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMotionWarpingSwitchOffAngleToTargetCondition>,
               InternalVTableHelperCtorCaller<UMotionWarpingSwitchOffAngleToTargetCondition>,
               local_res8,UMotionWarpingSwitchOffCondition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionWarpingSwitchOffAngleToTargetCondition.InnerSingleton;
}

// OnCheck @ 14cf12b80

bool __thiscall
UMotionWarpingSwitchOffAngleToTargetCondition::OnCheck
          (UMotionWarpingSwitchOffAngleToTargetCondition *this)

{
  float fVar1;
  
  if (this->Operator == LessThan) {
    fVar1 = CalculateAngleToTarget(this);
    return fVar1 < this->Angle;
  }
  fVar1 = CalculateAngleToTarget(this);
  return this->Angle <= fVar1 && fVar1 != this->Angle;
}

// StaticRegisterNativesUMotionWarpingSwitchOffAngleToTargetCondition @ 14cf1bdf0

void __cdecl
UMotionWarpingSwitchOffAngleToTargetCondition::
StaticRegisterNativesUMotionWarpingSwitchOffAngleToTargetCondition(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UMotionWarpingSwitchOffAngleToTargetCondition_Statics::Funcs
  ;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCreateSwitchOffAngleToTargetCondition @ 14cf21bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UMotionWarpingSwitchOffAngleToTargetCondition::execCreateSwitchOffAngleToTargetCondition
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  longlong *plVar9;
  uchar *puVar10;
  bool bVar11;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined1 local_f7 [3];
  int local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  uchar local_e8 [8];
  UObject *local_e0;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_e8[0] = '\0';
  local_e8[1] = '\0';
  local_e8[2] = '\0';
  local_e8[3] = '\0';
  local_e8[4] = '\0';
  local_e8[5] = '\0';
  local_e8[6] = '\0';
  local_e8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8);
  }
  local_f7[0] = 0;
  puVar10 = local_e8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f7,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f7);
  }
  local_f8 = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_f0 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  local_ec = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_ec,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_ec);
  }
  local_f4 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f4);
  }
  bVar11 = local_f4 != 0;
  local_e0 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  pUVar6 = local_e0;
  uVar5 = local_f0;
  uVar4 = local_f7[0];
  uVar3 = local_f8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = *(UObject **)puVar10;
  pUVar7 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar7,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_d8,pUVar8);
  local_d8._8_8_ = pUVar7;
  pUVar7 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
  if (local_d8._64_8_ != 0) {
    plVar9 = (longlong *)(local_d8 + 0x50);
    if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_d8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  *(UObject **)&pUVar7[1].field_0x8 = pUVar2;
  *(undefined4 *)&pUVar7[1].field_0x24 = uVar5;
  pUVar7[1].field_0x1 = uVar4;
  pUVar7[1].field_0x20 = uVar3;
  *(bool *)(pUVar7 + 1) = bVar11;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  *(UObject **)&pUVar7[1].field_0x10 = pUVar6;
  *(UObject **)param_3 = pUVar7;
  return;
}

