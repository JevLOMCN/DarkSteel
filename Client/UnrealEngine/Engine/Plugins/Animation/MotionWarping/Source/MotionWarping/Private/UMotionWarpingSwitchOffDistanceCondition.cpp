// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 13

// StaticClass @ 14cefebb0

UClass * __cdecl UMotionWarpingSwitchOffDistanceCondition::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionWarpingSwitchOffDistanceCondition.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"MotionWarpingSwitchOffDistanceCondition",
               &Z_Registration_Info_UClass_UMotionWarpingSwitchOffDistanceCondition.InnerSingleton,
               StaticRegisterNativesUMotionWarpingSwitchOffDistanceCondition,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UMotionWarpingSwitchOffDistanceCondition>,
               InternalVTableHelperCtorCaller<UMotionWarpingSwitchOffDistanceCondition>,local_res8,
               UMotionWarpingSwitchOffCondition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionWarpingSwitchOffDistanceCondition.InnerSingleton;
}

// UMotionWarpingSwitchOffDistanceCondition @ 14cf046d0

UMotionWarpingSwitchOffDistanceCondition * __thiscall
UMotionWarpingSwitchOffDistanceCondition::UMotionWarpingSwitchOffDistanceCondition
          (UMotionWarpingSwitchOffDistanceCondition *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0x101;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMotionWarpingSwitchOffDistanceCondition__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  return this;
}

// UMotionWarpingSwitchOffDistanceCondition @ 14cf04710

UMotionWarpingSwitchOffDistanceCondition * __thiscall
UMotionWarpingSwitchOffDistanceCondition::UMotionWarpingSwitchOffDistanceCondition
          (UMotionWarpingSwitchOffDistanceCondition *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0x101;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMotionWarpingSwitchOffDistanceCondition__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  return this;
}

// ~UMotionWarpingSwitchOffDistanceCondition @ 14cf05970

void __thiscall
UMotionWarpingSwitchOffDistanceCondition::~UMotionWarpingSwitchOffDistanceCondition
          (UMotionWarpingSwitchOffDistanceCondition *this)

{
  this->_padding_ = (longlong)&___7UMotionWarpingSwitchOffCondition__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CalculateSqDistance2D @ 14cf0a460

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
UMotionWarpingSwitchOffDistanceCondition::CalculateSqDistance2D
          (UMotionWarpingSwitchOffDistanceCondition *this)

{
  longlong lVar1;
  double dVar2;
  TVector<double> *pTVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  TVector<double> local_38 [2];
  
  lVar1 = *(longlong *)(this->_padding_ + 0x1b8);
  local_38[0].field0_0x0._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  if (lVar1 != 0) {
    local_38[0].field0_0x0._16_8_ = *(double *)(lVar1 + 0x220);
    uVar5 = *(undefined4 *)(lVar1 + 0x210);
    uVar6 = *(undefined4 *)(lVar1 + 0x214);
    uVar7 = *(undefined4 *)(lVar1 + 0x218);
    uVar8 = *(undefined4 *)(lVar1 + 0x21c);
  }
  pTVar3 = UMotionWarpingSwitchOffCondition::GetTargetLocation
                     ((UMotionWarpingSwitchOffCondition *)this,local_38);
  dVar4 = (double)CONCAT44(uVar6,uVar5) - (pTVar3->field0_0x0)._s_0.X;
  dVar2 = (double)CONCAT44(uVar8,uVar7) - (pTVar3->field0_0x0)._s_0.Y;
  return (float)(dVar2 * dVar2 + dVar4 * dVar4);
}

// CalculateSqDistance @ 14cf0a4e0

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
UMotionWarpingSwitchOffDistanceCondition::CalculateSqDistance
          (UMotionWarpingSwitchOffDistanceCondition *this)

{
  longlong lVar1;
  double dVar2;
  TVector<double> *pTVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  TVector<double> local_30 [2];
  
  lVar1 = *(longlong *)(this->_padding_ + 0x1b8);
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  if (lVar1 != 0) {
    uVar4 = *(double *)(lVar1 + 0x220);
    uVar7 = *(undefined4 *)(lVar1 + 0x210);
    uVar8 = *(undefined4 *)(lVar1 + 0x214);
    uVar9 = *(undefined4 *)(lVar1 + 0x218);
    uVar10 = *(undefined4 *)(lVar1 + 0x21c);
  }
  pTVar3 = UMotionWarpingSwitchOffCondition::GetTargetLocation
                     ((UMotionWarpingSwitchOffCondition *)this,local_30);
  dVar2 = (double)CONCAT44(uVar10,uVar9) - (pTVar3->field0_0x0)._s_0.Y;
  dVar5 = (double)uVar4 - (pTVar3->field0_0x0)._s_0.Z;
  dVar6 = (double)CONCAT44(uVar8,uVar7) - (pTVar3->field0_0x0)._s_0.X;
  return (float)(dVar2 * dVar2 + dVar6 * dVar6 + dVar5 * dVar5);
}

// CalculateZDistance @ 14cf0a570

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
UMotionWarpingSwitchOffDistanceCondition::CalculateZDistance
          (UMotionWarpingSwitchOffDistanceCondition *this)

{
  longlong lVar1;
  TVector<double> *pTVar2;
  undefined8 uVar3;
  double dVar4;
  TVector<double> local_20;
  
  lVar1 = *(longlong *)(this->_padding_ + 0x1b8);
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (lVar1 != 0) {
    uVar3 = *(double *)(lVar1 + 0x220);
  }
  pTVar2 = UMotionWarpingSwitchOffCondition::GetTargetLocation
                     ((UMotionWarpingSwitchOffCondition *)this,&local_20);
  dVar4 = (double)uVar3 - (pTVar2->field0_0x0)._s_0.Z;
  return (float)(double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
}

// CreateSwitchOffDistanceCondition @ 14cf0b030

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

UMotionWarpingSwitchOffDistanceCondition * __cdecl
UMotionWarpingSwitchOffDistanceCondition::CreateSwitchOffDistanceCondition
          (AActor *param_1,ESwitchOffConditionEffect param_2,ESwitchOffConditionDistanceOp param_3,
          float param_4,bool param_5,AActor *param_6)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMotionWarpingSwitchOffDistanceCondition *pUVar3;
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
  pUVar3 = (UMotionWarpingSwitchOffDistanceCondition *)
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
  *(bool *)&pUVar3->_padding_ = param_5;
  pUVar3->Distance = param_4;
  *(ESwitchOffConditionEffect *)((longlong)&pUVar3->_padding_ + 1) = param_2;
  pUVar3->Operator = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_6 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_6);
  }
  pUVar3->_padding_ = (longlong)param_6;
  return pUVar3;
}

// ExtraDebugInfo @ 14cf0ca70

FString * __thiscall
UMotionWarpingSwitchOffDistanceCondition::ExtraDebugInfo
          (UMotionWarpingSwitchOffDistanceCondition *this,FString *__return_storage_ptr__)

{
  ESwitchOffConditionDistanceAxesType EVar1;
  wchar_t *pwVar2;
  
  EVar1 = this->AxesType;
  if (EVar1 == AllAxes) {
    CalculateSqDistance(this);
    pwVar2 = L"Distance: %f %c %f";
  }
  else if (EVar1 == IgnoreZAxis) {
    CalculateSqDistance2D(this);
    pwVar2 = L"Distance2D: %f %c %f";
  }
  else {
    if (EVar1 != OnlyZAxis) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
    CalculateZDistance(this);
    pwVar2 = L"Distance Z: %f %c %f";
  }
  ::FString::PrintfImpl(__return_storage_ptr__,pwVar2);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14cf108d0

UClass * __cdecl UMotionWarpingSwitchOffDistanceCondition::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionWarpingSwitchOffDistanceCondition.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"MotionWarpingSwitchOffDistanceCondition",
               &Z_Registration_Info_UClass_UMotionWarpingSwitchOffDistanceCondition.InnerSingleton,
               StaticRegisterNativesUMotionWarpingSwitchOffDistanceCondition,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UMotionWarpingSwitchOffDistanceCondition>,
               InternalVTableHelperCtorCaller<UMotionWarpingSwitchOffDistanceCondition>,local_res8,
               UMotionWarpingSwitchOffCondition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionWarpingSwitchOffDistanceCondition.InnerSingleton;
}

// OnCheck @ 14cf12d90

bool __thiscall
UMotionWarpingSwitchOffDistanceCondition::OnCheck(UMotionWarpingSwitchOffDistanceCondition *this)

{
  ESwitchOffConditionDistanceAxesType EVar1;
  float fVar2;
  
  EVar1 = this->AxesType;
  if (EVar1 == AllAxes) {
    if (this->Operator == LessThan) {
      fVar2 = CalculateSqDistance(this);
      return fVar2 < this->Distance * this->Distance;
    }
    fVar2 = CalculateSqDistance(this);
  }
  else {
    if (EVar1 != IgnoreZAxis) {
      if (EVar1 != OnlyZAxis) {
        return false;
      }
      if (this->Operator == LessThan) {
        fVar2 = CalculateZDistance(this);
        return fVar2 < this->Distance;
      }
      fVar2 = CalculateZDistance(this);
      return this->Distance <= fVar2 && fVar2 != this->Distance;
    }
    if (this->Operator == LessThan) {
      fVar2 = CalculateSqDistance2D(this);
      return fVar2 < this->Distance * this->Distance;
    }
    fVar2 = CalculateSqDistance2D(this);
  }
  return this->Distance * this->Distance < fVar2;
}

// StaticRegisterNativesUMotionWarpingSwitchOffDistanceCondition @ 14cf1bec0

void __cdecl
UMotionWarpingSwitchOffDistanceCondition::
StaticRegisterNativesUMotionWarpingSwitchOffDistanceCondition(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UMotionWarpingSwitchOffDistanceCondition_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCreateSwitchOffDistanceCondition @ 14cf22510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UMotionWarpingSwitchOffDistanceCondition::execCreateSwitchOffDistanceCondition
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
  undefined4 local_f0 [2];
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
  local_f0[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f0);
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
  uVar5 = local_f0[0];
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

