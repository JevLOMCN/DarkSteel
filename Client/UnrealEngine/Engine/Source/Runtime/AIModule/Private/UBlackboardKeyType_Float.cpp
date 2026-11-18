// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 13

// StaticClass @ 146ea7eb0

UClass * __cdecl UBlackboardKeyType_Float::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlackboardKeyType_Float.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BlackboardKeyType_Float",
               &Z_Registration_Info_UClass_UBlackboardKeyType_Float.InnerSingleton,
               StaticRegisterNativesUBlackboardKeyType_Float,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlackboardKeyType_Float>,
               InternalVTableHelperCtorCaller<UBlackboardKeyType_Float>,local_res8,
               UBlackboardKeyType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlackboardKeyType_Float.InnerSingleton;
}

// UBlackboardKeyType_Float @ 146ecbe70

UBlackboardKeyType_Float * __thiscall
UBlackboardKeyType_Float::UBlackboardKeyType_Float
          (UBlackboardKeyType_Float *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->DefaultValue = 0.0;
  this->_padding_ = (longlong)&___7UBlackboardKeyType_Float__6B_;
  return this;
}

// UBlackboardKeyType_Float @ 146ecbea0

UBlackboardKeyType_Float * __thiscall
UBlackboardKeyType_Float::UBlackboardKeyType_Float
          (UBlackboardKeyType_Float *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UObject::UObject((UObject *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 & 0xfc;
  this->_padding_ = (longlong)&___7UBlackboardKeyType_Float__6B_;
  this->DefaultValue = 0.0;
  *(undefined2 *)&this->_padding_ = 4;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  return this;
}

// ~UBlackboardKeyType_Float @ 146ecdd90

void __thiscall UBlackboardKeyType_Float::~UBlackboardKeyType_Float(UBlackboardKeyType_Float *this)

{
  this->_padding_ = (longlong)&___7UBlackboardKeyType__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CompareValues @ 146ed77c0

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
UBlackboardKeyType_Float::CompareValues
          (UBlackboardKeyType_Float *this,UBlackboardComponent *param_1,uchar *param_2,
          UBlackboardKeyType *param_3,uchar *param_4)

{
  Type TVar1;
  
  if ((float)((uint)(*(float *)param_2 - *(float *)param_4) & __xmm_7fffffff7fffffff7fffffff7fffffff
             ) < __real_38d1b717) {
    return Equal;
  }
  TVar1 = Less;
  if (*(float *)param_4 < *(float *)param_2) {
    TVar1 = Greater;
  }
  return TVar1;
}

// DescribeArithmeticParam @ 146ed99d0

FString * __thiscall
UBlackboardKeyType_Float::DescribeArithmeticParam
          (UBlackboardKeyType_Float *this,FString *__return_storage_ptr__,int param_1,float param_2)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%f");
  return __return_storage_ptr__;
}

// DescribeValue @ 146ede130

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
UBlackboardKeyType_Float::DescribeValue
          (UBlackboardKeyType_Float *this,FString *__return_storage_ptr__,
          UBlackboardComponent *param_1,uchar *param_2)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%f");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146eea000

UClass * __cdecl UBlackboardKeyType_Float::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlackboardKeyType_Float.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BlackboardKeyType_Float",
               &Z_Registration_Info_UClass_UBlackboardKeyType_Float.InnerSingleton,
               StaticRegisterNativesUBlackboardKeyType_Float,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlackboardKeyType_Float>,
               InternalVTableHelperCtorCaller<UBlackboardKeyType_Float>,local_res8,
               UBlackboardKeyType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlackboardKeyType_Float.InnerSingleton;
}

// GetValue @ 146eefdc0

float __cdecl UBlackboardKeyType_Float::GetValue(UBlackboardKeyType_Float *param_1,uchar *param_2)

{
  return *(float *)param_2;
}

// InitializeMemory @ 146ef30c0

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
UBlackboardKeyType_Float::InitializeMemory
          (UBlackboardKeyType_Float *this,UBlackboardComponent *param_1,uchar *param_2)

{
  *(float *)param_2 = this->DefaultValue;
  return;
}

// SetValue @ 146f00030

bool __cdecl
UBlackboardKeyType_Float::SetValue(UBlackboardKeyType_Float *param_1,uchar *param_2,float param_3)

{
  float fVar1;
  
  fVar1 = *(float *)param_2;
  *(float *)param_2 = param_3;
  if (param_3 != fVar1) {
    return true;
  }
  return false;
}

// StaticRegisterNativesUBlackboardKeyType_Float @ 146f01020

void __cdecl UBlackboardKeyType_Float::StaticRegisterNativesUBlackboardKeyType_Float(void)

{
  return;
}

// TestArithmeticOperation @ 146f01190

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
UBlackboardKeyType_Float::TestArithmeticOperation
          (UBlackboardKeyType_Float *this,UBlackboardComponent *param_1,uchar *param_2,Type param_3,
          int param_4,float param_5)

{
  float fVar1;
  
  fVar1 = *(float *)param_2;
  switch(param_3) {
  case Equal:
    if (fVar1 == param_5) {
      return true;
    }
    break;
  case NotEqual:
    if (fVar1 != param_5) {
      return true;
    }
    break;
  case Less:
    return fVar1 < param_5;
  case LessOrEqual:
    return fVar1 <= param_5;
  case Greater:
    return param_5 < fVar1;
  case GreaterOrEqual:
    return param_5 <= fVar1;
  }
  return false;
}

