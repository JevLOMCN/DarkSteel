// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 15

// StaticClass @ 146eb09b0

UClass * __cdecl UBlackboardKeyType_Vector::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlackboardKeyType_Vector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BlackboardKeyType_Vector",
               &Z_Registration_Info_UClass_UBlackboardKeyType_Vector.InnerSingleton,
               StaticRegisterNativesUBlackboardKeyType_Vector,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlackboardKeyType_Vector>,
               InternalVTableHelperCtorCaller<UBlackboardKeyType_Vector>,local_res8,
               UBlackboardKeyType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlackboardKeyType_Vector.InnerSingleton;
}

// UBlackboardKeyType_Vector @ 146ecc3d0

UBlackboardKeyType_Vector * __thiscall
UBlackboardKeyType_Vector::UBlackboardKeyType_Vector
          (UBlackboardKeyType_Vector *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UBlackboardKeyType_Vector__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DefaultValue).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DefaultValue).field0_0x0._s_0.Y = (double)uVar1;
  (this->DefaultValue).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bUseDefaultValue = false;
  return this;
}

// UBlackboardKeyType_Vector @ 146ecc420

UBlackboardKeyType_Vector * __thiscall
UBlackboardKeyType_Vector::UBlackboardKeyType_Vector
          (UBlackboardKeyType_Vector *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  
  UObject::UObject((UObject *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 & 0xfc;
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = (longlong)&___7UBlackboardKeyType_Vector__6B_;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DefaultValue).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DefaultValue).field0_0x0._s_0.Y = (double)uVar2;
  (this->DefaultValue).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bUseDefaultValue = false;
  *(undefined2 *)&this->_padding_ = 0x18;
  return this;
}

// ~UBlackboardKeyType_Vector @ 146ecdf10

void __thiscall
UBlackboardKeyType_Vector::~UBlackboardKeyType_Vector(UBlackboardKeyType_Vector *this)

{
  this->_padding_ = (longlong)&___7UBlackboardKeyType__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Clear @ 146ed65a0

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
UBlackboardKeyType_Vector::Clear
          (UBlackboardKeyType_Vector *this,UBlackboardComponent *param_1,uchar *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FAISystem::InvalidLocation.field0_0x0._s_0.Y;
  *(double *)param_2 = FAISystem::InvalidLocation.field0_0x0._s_0.X;
  *(undefined8 *)(param_2 + 8) = uVar1;
  *(double *)(param_2 + 0x10) = FAISystem::InvalidLocation.field0_0x0._s_0.Z;
  return;
}

// CompareValues @ 146ed7c30

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
UBlackboardKeyType_Vector::CompareValues
          (UBlackboardKeyType_Vector *this,UBlackboardComponent *param_1,uchar *param_2,
          UBlackboardKeyType *param_3,uchar *param_4)

{
  if ((((double)CONCAT44((uint)((ulonglong)(*(double *)param_2 - *(double *)param_4) >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(*(double *)param_2 - *(double *)param_4,0) &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3f1a36e2e0000000)
      && ((double)CONCAT44((uint)((ulonglong)(*(double *)(param_2 + 8) - *(double *)(param_4 + 8))
                                 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(*(double *)(param_2 + 8) - *(double *)(param_4 + 8),0) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3f1a36e2e0000000)
      ) && ((double)CONCAT44((uint)((ulonglong)
                                    (*(double *)(param_2 + 0x10) - *(double *)(param_4 + 0x10)) >>
                                   0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(*(double *)(param_2 + 0x10) - *(double *)(param_4 + 0x10),0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            __real_3f1a36e2e0000000)) {
    return Equal;
  }
  return Greater;
}

// DescribeValue @ 146ede430

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
UBlackboardKeyType_Vector::DescribeValue
          (UBlackboardKeyType_Vector *this,FString *__return_storage_ptr__,
          UBlackboardComponent *param_1,uchar *param_2)

{
  bool bVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_38;
  FString local_28;
  double local_18;
  
  local_18 = *(double *)(param_2 + 0x10);
  if (((((*(double *)param_2 <= __real_c7efffffe0000000) ||
        (__real_47efffffe0000000 <= *(double *)param_2)) ||
       (*(double *)(param_2 + 8) <= __real_c7efffffe0000000)) ||
      ((__real_47efffffe0000000 <= *(double *)(param_2 + 8) || (local_18 <= __real_c7efffffe0000000)
       ))) || (__real_47efffffe0000000 <= local_18)) {
    pFVar3 = ::FString::FString(&local_28,L"(invalid)");
    bVar2 = false;
    bVar1 = true;
  }
  else {
    ::FString::PrintfImpl(&local_38,L"X=%3.3f Y=%3.3f Z=%3.3f");
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

// GetLocation @ 146ee6130

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
UBlackboardKeyType_Vector::GetLocation
          (UBlackboardKeyType_Vector *this,UBlackboardComponent *param_1,uchar *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = __real_c7efffffe0000000;
  dVar2 = *(double *)(param_2 + 8);
  dVar1 = *(double *)(param_2 + 0x10);
  (param_3->field0_0x0)._s_0.X = *(double *)param_2;
  (param_3->field0_0x0)._s_0.Y = dVar2;
  (param_3->field0_0x0)._s_0.Z = dVar1;
  dVar1 = (param_3->field0_0x0)._s_0.X;
  if ((((dVar3 < dVar1) && (dVar1 < __real_47efffffe0000000)) &&
      (dVar1 = (param_3->field0_0x0)._s_0.Y, dVar3 < dVar1)) &&
     (((dVar1 < __real_47efffffe0000000 && (dVar1 = (param_3->field0_0x0)._s_0.Z, dVar3 < dVar1)) &&
      (dVar1 < __real_47efffffe0000000)))) {
    return true;
  }
  return false;
}

// GetPrivateStaticClass @ 146eea600

UClass * __cdecl UBlackboardKeyType_Vector::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlackboardKeyType_Vector.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BlackboardKeyType_Vector",
               &Z_Registration_Info_UClass_UBlackboardKeyType_Vector.InnerSingleton,
               StaticRegisterNativesUBlackboardKeyType_Vector,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlackboardKeyType_Vector>,
               InternalVTableHelperCtorCaller<UBlackboardKeyType_Vector>,local_res8,
               UBlackboardKeyType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlackboardKeyType_Vector.InnerSingleton;
}

// GetValue @ 146eefeb0

TVector<double> * __cdecl
UBlackboardKeyType_Vector::GetValue
          (TVector<double> *__return_storage_ptr__,UBlackboardKeyType_Vector *param_1,uchar *param_2
          )

{
  double dVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_2 + 8);
  dVar1 = *(double *)(param_2 + 0x10);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)param_2;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// InitializeMemory @ 146ef31d0

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
UBlackboardKeyType_Vector::InitializeMemory
          (UBlackboardKeyType_Vector *this,UBlackboardComponent *param_1,uchar *param_2)

{
  double dVar1;
  undefined8 uVar2;
  
  uVar2 = InvalidValue.field0_0x0._s_0.Y;
  if (this->bUseDefaultValue != false) {
    dVar1 = (this->DefaultValue).field0_0x0._s_0.Y;
    *(double *)param_2 = (this->DefaultValue).field0_0x0._s_0.X;
    *(double *)(param_2 + 8) = dVar1;
    *(double *)(param_2 + 0x10) = (this->DefaultValue).field0_0x0._s_0.Z;
    return;
  }
  *(double *)param_2 = InvalidValue.field0_0x0._s_0.X;
  *(undefined8 *)(param_2 + 8) = uVar2;
  *(double *)(param_2 + 0x10) = InvalidValue.field0_0x0._s_0.Z;
  return;
}

// IsEmpty @ 146ef3ca0

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
UBlackboardKeyType_Vector::IsEmpty
          (UBlackboardKeyType_Vector *this,UBlackboardComponent *param_1,uchar *param_2)

{
  if ((((__real_c7efffffe0000000 < *(double *)param_2) &&
       (*(double *)param_2 < __real_47efffffe0000000)) &&
      (__real_c7efffffe0000000 < *(double *)(param_2 + 8))) &&
     (((*(double *)(param_2 + 8) < __real_47efffffe0000000 &&
       (__real_c7efffffe0000000 < *(double *)(param_2 + 0x10))) &&
      (*(double *)(param_2 + 0x10) < __real_47efffffe0000000)))) {
    return false;
  }
  return true;
}

// SetValue @ 146f002d0

bool __cdecl
UBlackboardKeyType_Vector::SetValue
          (UBlackboardKeyType_Vector *param_1,uchar *param_2,TVector<double> *param_3)

{
  double dVar1;
  
  if ((((param_3->field0_0x0)._s_0.X == *(double *)param_2) &&
      ((param_3->field0_0x0)._s_0.Y == *(double *)(param_2 + 8))) &&
     ((param_3->field0_0x0)._s_0.Z == *(double *)(param_2 + 0x10))) {
    dVar1 = (param_3->field0_0x0)._s_0.Y;
    *(double *)param_2 = (param_3->field0_0x0)._s_0.X;
    *(double *)(param_2 + 8) = dVar1;
    *(double *)(param_2 + 0x10) = (param_3->field0_0x0)._s_0.Z;
    return false;
  }
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  *(double *)param_2 = (param_3->field0_0x0)._s_0.X;
  *(double *)(param_2 + 8) = dVar1;
  *(double *)(param_2 + 0x10) = (param_3->field0_0x0)._s_0.Z;
  return true;
}

// StaticRegisterNativesUBlackboardKeyType_Vector @ 146f010a0

void __cdecl UBlackboardKeyType_Vector::StaticRegisterNativesUBlackboardKeyType_Vector(void)

{
  return;
}

// TestBasicOperation @ 146f01450

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
UBlackboardKeyType_Vector::TestBasicOperation
          (UBlackboardKeyType_Vector *this,UBlackboardComponent *param_1,uchar *param_2,Type param_3
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = *(double *)(param_2 + 0x10);
  dVar2 = *(double *)param_2;
  dVar3 = *(double *)(param_2 + 8);
  if (param_3 == Set) {
    if (((dVar2 <= __real_c7efffffe0000000) || (__real_47efffffe0000000 <= dVar2)) ||
       ((dVar3 <= __real_c7efffffe0000000 ||
        (((__real_47efffffe0000000 <= dVar3 || (dVar1 <= __real_c7efffffe0000000)) ||
         (__real_47efffffe0000000 <= dVar1)))))) {
      return false;
    }
  }
  else if ((((__real_c7efffffe0000000 < dVar2) && (dVar2 < __real_47efffffe0000000)) &&
           (__real_c7efffffe0000000 < dVar3)) &&
          (((dVar3 < __real_47efffffe0000000 && (__real_c7efffffe0000000 < dVar1)) &&
           (dVar1 < __real_47efffffe0000000)))) {
    return false;
  }
  return true;
}

