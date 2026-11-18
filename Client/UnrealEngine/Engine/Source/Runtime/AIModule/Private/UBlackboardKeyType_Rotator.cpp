// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 15

// StaticClass @ 146eb0aa0

UClass * __cdecl UBlackboardKeyType_Rotator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlackboardKeyType_Rotator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BlackboardKeyType_Rotator",
               &Z_Registration_Info_UClass_UBlackboardKeyType_Rotator.InnerSingleton,
               StaticRegisterNativesUBlackboardKeyType_Rotator,0x50,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UBlackboardKeyType_Rotator>,
               InternalVTableHelperCtorCaller<UBlackboardKeyType_Rotator>,local_res8,
               UBlackboardKeyType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlackboardKeyType_Rotator.InnerSingleton;
}

// UBlackboardKeyType_Rotator @ 146ecc110

UBlackboardKeyType_Rotator * __thiscall
UBlackboardKeyType_Rotator::UBlackboardKeyType_Rotator
          (UBlackboardKeyType_Rotator *this,FVTableHelper *param_1)

{
  double dVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UBlackboardKeyType_Rotator__6B_;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->DefaultValue).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->DefaultValue).Yaw = dVar1;
  (this->DefaultValue).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->bUseDefaultValue = false;
  return this;
}

// UBlackboardKeyType_Rotator @ 146ecc160

UBlackboardKeyType_Rotator * __thiscall
UBlackboardKeyType_Rotator::UBlackboardKeyType_Rotator
          (UBlackboardKeyType_Rotator *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  double dVar2;
  
  UObject::UObject((UObject *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 & 0xfc;
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = (longlong)&___7UBlackboardKeyType_Rotator__6B_;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->DefaultValue).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->DefaultValue).Yaw = dVar2;
  (this->DefaultValue).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->bUseDefaultValue = false;
  *(undefined2 *)&this->_padding_ = 0x18;
  return this;
}

// ~UBlackboardKeyType_Rotator @ 146ecde50

void __thiscall
UBlackboardKeyType_Rotator::~UBlackboardKeyType_Rotator(UBlackboardKeyType_Rotator *this)

{
  this->_padding_ = (longlong)&___7UBlackboardKeyType__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Clear @ 146ed6560

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
UBlackboardKeyType_Rotator::Clear
          (UBlackboardKeyType_Rotator *this,UBlackboardComponent *param_1,uchar *param_2)

{
  double dVar1;
  
  dVar1 = FAISystem::InvalidRotation.Yaw;
  *(double *)param_2 = FAISystem::InvalidRotation.Pitch;
  *(double *)(param_2 + 8) = dVar1;
  *(double *)(param_2 + 0x10) = FAISystem::InvalidRotation.Roll;
  return;
}

// CompareValues @ 146ed78d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

Type __thiscall
UBlackboardKeyType_Rotator::CompareValues
          (UBlackboardKeyType_Rotator *this,UBlackboardComponent *param_1,uchar *param_2,
          UBlackboardKeyType *param_3,uchar *param_4)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar34;
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  
  auVar25._8_8_ = 0;
  auVar25._0_8_ = *(double *)(param_4 + 0x10);
  dVar2 = *(double *)(param_2 + 0x10) - *(double *)(param_4 + 0x10);
  dVar34 = *(double *)(param_2 + 8) - *(double *)(param_4 + 8);
  auVar17._8_4_ = SUB84(dVar34,0);
  auVar17._0_8_ = *(double *)param_2 - *(double *)param_4;
  auVar17._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
  auVar18 = divpd(auVar17,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
  auVar18 = roundpd(auVar25,auVar18,3);
  dVar6 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
  auVar26._0_8_ = auVar18._0_8_ * dVar6;
  dVar7 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
  auVar26._8_8_ = auVar18._8_8_ * dVar7;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = dVar2;
  dVar32 = (*(double *)param_2 - *(double *)param_4) - auVar26._0_8_;
  dVar34 = dVar34 - auVar26._8_8_;
  auVar18 = divpd(auVar19,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
  auVar18 = roundpd(auVar26,auVar18,3);
  dVar4 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
  dVar5 = GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  auVar20._8_4_ = SUB84(dVar34,0);
  auVar20._0_8_ = dVar32;
  auVar20._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
  dVar2 = dVar2 - auVar18._0_8_ * dVar4;
  dVar3 = 0.0 - auVar18._8_8_ * dVar5;
  uVar11 = -(ulonglong)(0.0 <= dVar32);
  uVar13 = -(ulonglong)(0.0 <= dVar34);
  auVar27._0_8_ = uVar11 & (ulonglong)dVar32;
  auVar27._8_4_ = (undefined4)(uVar13 & (ulonglong)dVar34);
  auVar27._12_4_ = (undefined4)((uVar13 & (ulonglong)dVar34) >> 0x20);
  dVar34 = auVar20._8_8_ + dVar7;
  uVar12 = -(ulonglong)(0.0 <= dVar2);
  uVar14 = -(ulonglong)(0.0 <= dVar3);
  auVar35._0_4_ = ~(uint)uVar11 & SUB84(dVar32 + dVar6,0);
  auVar35._4_4_ = ~(uint)(uVar11 >> 0x20) & (uint)((ulonglong)(dVar32 + dVar6) >> 0x20);
  auVar35._8_4_ = ~(uint)uVar13 & SUB84(dVar34,0);
  auVar35._12_4_ = ~(uint)(uVar13 >> 0x20) & (uint)((ulonglong)dVar34 >> 0x20);
  auVar35 = auVar35 | auVar27;
  auVar21._8_4_ = SUB84(dVar3,0);
  auVar21._0_8_ = dVar2;
  auVar21._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  dVar34 = auVar21._8_8_ + dVar5;
  auVar33._0_4_ = ~(uint)uVar12 & SUB84(dVar2 + dVar4,0);
  auVar33._4_4_ = ~(uint)(uVar12 >> 0x20) & (uint)((ulonglong)(dVar2 + dVar4) >> 0x20);
  auVar33._8_4_ = ~(uint)uVar14 & SUB84(dVar34,0);
  auVar33._12_4_ = ~(uint)(uVar14 >> 0x20) & (uint)((ulonglong)dVar34 >> 0x20);
  auVar18._8_4_ = (int)((ulonglong)dVar3 & uVar14);
  auVar18._0_8_ = (ulonglong)dVar2 & uVar12;
  auVar18._12_4_ = (int)(((ulonglong)dVar3 & uVar14) >> 0x20);
  auVar33 = auVar33 | auVar18;
  uVar12 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar33._0_8_);
  uVar14 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[1] < auVar33._8_8_);
  uVar13 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar35._0_8_);
  uVar15 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar35._8_8_);
  auVar28._0_8_ = uVar12 & (ulonglong)(auVar33._0_8_ - dVar4);
  uVar11 = uVar14 & (ulonglong)(auVar33._8_8_ - dVar5);
  auVar28._8_4_ = (undefined4)uVar11;
  auVar28._12_4_ = (undefined4)(uVar11 >> 0x20);
  auVar22._0_4_ = ~(uint)uVar12 & auVar33._0_4_;
  auVar22._4_4_ = ~(uint)(uVar12 >> 0x20) & auVar33._4_4_;
  auVar22._8_4_ = ~(uint)uVar14 & auVar33._8_4_;
  auVar22._12_4_ = ~(uint)(uVar14 >> 0x20) & auVar33._12_4_;
  auVar28 = auVar28 | auVar22;
  auVar23._8_4_ = SUB84(__real_3f1a36e2e0000000,0);
  auVar23._0_8_ = __real_3f1a36e2e0000000;
  auVar23._12_4_ = (int)((ulonglong)__real_3f1a36e2e0000000 >> 0x20);
  auVar29._0_8_ =
       (double)CONCAT44(auVar28._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar28._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar29._8_4_ = auVar28._8_4_ & _UNK_15061cc88;
  auVar29._12_4_ = auVar28._12_4_ & _UNK_15061cc8c;
  auVar24._8_8_ = -(ulonglong)(auVar23._8_8_ < auVar29._8_8_);
  auVar24._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar29._0_8_);
  uVar10 = movmskpd((int)this,auVar24);
  auVar30._0_8_ = uVar13 & (ulonglong)(auVar35._0_8_ - dVar6);
  uVar11 = uVar15 & (ulonglong)(auVar35._8_8_ - dVar7);
  auVar30._8_4_ = (undefined4)uVar11;
  auVar30._12_4_ = (undefined4)(uVar11 >> 0x20);
  auVar1._4_4_ = ~(uint)(uVar13 >> 0x20) & auVar35._4_4_;
  auVar1._0_4_ = ~(uint)uVar13 & auVar35._0_4_;
  auVar1._8_4_ = ~(uint)uVar15 & auVar35._8_4_;
  auVar1._12_4_ = ~(uint)(uVar15 >> 0x20) & auVar35._12_4_;
  auVar30 = auVar30 | auVar1;
  auVar31._0_8_ =
       (double)CONCAT44(auVar30._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar30._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar31._8_4_ = auVar30._8_4_ & _UNK_15061cc88;
  auVar31._12_4_ = auVar30._12_4_ & _UNK_15061cc8c;
  lVar16 = -(ulonglong)(__real_3f1a36e2e0000000 < auVar31._8_8_);
  auVar8._8_4_ = (int)lVar16;
  auVar8._0_8_ = -(ulonglong)(__real_3f1a36e2e0000000 < auVar31._0_8_);
  auVar8._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
  iVar9 = movmskpd((int)param_4,auVar8);
  return (Type)((uVar10 & 0x3fffffff) != 0 || iVar9 != 0);
}

// DescribeValue @ 146ede260

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
UBlackboardKeyType_Rotator::DescribeValue
          (UBlackboardKeyType_Rotator *this,FString *__return_storage_ptr__,
          UBlackboardComponent *param_1,uchar *param_2)

{
  bool bVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_38;
  FString local_28;
  double local_18;
  
  local_18 = *(double *)(param_2 + 0x10);
  if (((*(double *)param_2 == FAISystem::InvalidRotation.Pitch) &&
      (*(double *)(param_2 + 8) == FAISystem::InvalidRotation.Yaw)) &&
     (local_18 == FAISystem::InvalidRotation.Roll)) {
    pFVar3 = ::FString::FString(&local_28,L"(invalid)");
    bVar2 = false;
    bVar1 = true;
  }
  else {
    ::FString::PrintfImpl(&local_38,L"P=%f Y=%f R=%f");
    pFVar3 = &local_38;
    bVar2 = true;
    bVar1 = false;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar3->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  if (bVar1) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146eea3c0

UClass * __cdecl UBlackboardKeyType_Rotator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlackboardKeyType_Rotator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BlackboardKeyType_Rotator",
               &Z_Registration_Info_UClass_UBlackboardKeyType_Rotator.InnerSingleton,
               StaticRegisterNativesUBlackboardKeyType_Rotator,0x50,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UBlackboardKeyType_Rotator>,
               InternalVTableHelperCtorCaller<UBlackboardKeyType_Rotator>,local_res8,
               UBlackboardKeyType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlackboardKeyType_Rotator.InnerSingleton;
}

// GetRotation @ 146eea9a0

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
UBlackboardKeyType_Rotator::GetRotation
          (UBlackboardKeyType_Rotator *this,UBlackboardComponent *param_1,uchar *param_2,
          TRotator<double> *param_3)

{
  double dVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_2 + 8);
  dVar1 = *(double *)(param_2 + 0x10);
  param_3->Pitch = *(double *)param_2;
  param_3->Yaw = dVar2;
  param_3->Roll = dVar1;
  if (((FAISystem::InvalidRotation.Pitch == param_3->Pitch) &&
      (FAISystem::InvalidRotation.Yaw == param_3->Yaw)) &&
     (FAISystem::InvalidRotation.Roll == param_3->Roll)) {
    return false;
  }
  return true;
}

// GetValue @ 146eefe30

TRotator<double> * __cdecl
UBlackboardKeyType_Rotator::GetValue
          (TRotator<double> *__return_storage_ptr__,UBlackboardKeyType_Rotator *param_1,
          uchar *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_2 + 8);
  dVar1 = *(double *)(param_2 + 0x10);
  __return_storage_ptr__->Pitch = *(double *)param_2;
  __return_storage_ptr__->Yaw = dVar2;
  __return_storage_ptr__->Roll = dVar1;
  return __return_storage_ptr__;
}

// InitializeMemory @ 146ef3110

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
UBlackboardKeyType_Rotator::InitializeMemory
          (UBlackboardKeyType_Rotator *this,UBlackboardComponent *param_1,uchar *param_2)

{
  double dVar1;
  
  dVar1 = InvalidValue.Yaw;
  if (this->bUseDefaultValue != false) {
    dVar1 = (this->DefaultValue).Yaw;
    *(double *)param_2 = (this->DefaultValue).Pitch;
    *(double *)(param_2 + 8) = dVar1;
    *(double *)(param_2 + 0x10) = (this->DefaultValue).Roll;
    return;
  }
  *(double *)param_2 = InvalidValue.Pitch;
  *(double *)(param_2 + 8) = dVar1;
  *(double *)(param_2 + 0x10) = InvalidValue.Roll;
  return;
}

// IsEmpty @ 146ef3c40

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
UBlackboardKeyType_Rotator::IsEmpty
          (UBlackboardKeyType_Rotator *this,UBlackboardComponent *param_1,uchar *param_2)

{
  if (((*(double *)param_2 == FAISystem::InvalidRotation.Pitch) &&
      (*(double *)(param_2 + 8) == FAISystem::InvalidRotation.Yaw)) &&
     (*(double *)(param_2 + 0x10) == FAISystem::InvalidRotation.Roll)) {
    return true;
  }
  return false;
}

// SetValue @ 146f00190

bool __cdecl
UBlackboardKeyType_Rotator::SetValue
          (UBlackboardKeyType_Rotator *param_1,uchar *param_2,TRotator<double> *param_3)

{
  double dVar1;
  
  if (((param_3->Pitch == *(double *)param_2) && (param_3->Yaw == *(double *)(param_2 + 8))) &&
     (param_3->Roll == *(double *)(param_2 + 0x10))) {
    dVar1 = param_3->Yaw;
    *(double *)param_2 = param_3->Pitch;
    *(double *)(param_2 + 8) = dVar1;
    *(double *)(param_2 + 0x10) = param_3->Roll;
    return false;
  }
  dVar1 = param_3->Yaw;
  *(double *)param_2 = param_3->Pitch;
  *(double *)(param_2 + 8) = dVar1;
  *(double *)(param_2 + 0x10) = param_3->Roll;
  return true;
}

// StaticRegisterNativesUBlackboardKeyType_Rotator @ 146f01070

void __cdecl UBlackboardKeyType_Rotator::StaticRegisterNativesUBlackboardKeyType_Rotator(void)

{
  return;
}

// TestBasicOperation @ 146f01350

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
UBlackboardKeyType_Rotator::TestBasicOperation
          (UBlackboardKeyType_Rotator *this,UBlackboardComponent *param_1,uchar *param_2,
          Type param_3)

{
  if (param_3 == Set) {
    if (((*(double *)param_2 != FAISystem::InvalidRotation.Pitch) ||
        (*(double *)(param_2 + 8) != FAISystem::InvalidRotation.Yaw)) ||
       (*(double *)(param_2 + 0x10) != FAISystem::InvalidRotation.Roll)) {
      return true;
    }
  }
  else if (((*(double *)param_2 == FAISystem::InvalidRotation.Pitch) &&
           (*(double *)(param_2 + 8) == FAISystem::InvalidRotation.Yaw)) &&
          (*(double *)(param_2 + 0x10) == FAISystem::InvalidRotation.Roll)) {
    return true;
  }
  return false;
}

