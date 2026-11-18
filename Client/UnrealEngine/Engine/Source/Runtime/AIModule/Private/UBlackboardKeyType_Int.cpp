// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 13

// StaticClass @ 146ea81c0

UClass * __cdecl UBlackboardKeyType_Int::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlackboardKeyType_Int.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BlackboardKeyType_Int",
               &Z_Registration_Info_UClass_UBlackboardKeyType_Int.InnerSingleton,
               StaticRegisterNativesUBlackboardKeyType_Int,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlackboardKeyType_Int>,
               InternalVTableHelperCtorCaller<UBlackboardKeyType_Int>,local_res8,
               UBlackboardKeyType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlackboardKeyType_Int.InnerSingleton;
}

// UBlackboardKeyType_Int @ 146ecbee0

UBlackboardKeyType_Int * __thiscall
UBlackboardKeyType_Int::UBlackboardKeyType_Int(UBlackboardKeyType_Int *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->DefaultValue = 0;
  this->_padding_ = (longlong)&___7UBlackboardKeyType_Int__6B_;
  return this;
}

// UBlackboardKeyType_Int @ 146ecbf10

UBlackboardKeyType_Int * __thiscall
UBlackboardKeyType_Int::UBlackboardKeyType_Int
          (UBlackboardKeyType_Int *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UObject::UObject((UObject *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 & 0xfc;
  this->_padding_ = (longlong)&___7UBlackboardKeyType_Int__6B_;
  this->DefaultValue = 0;
  *(undefined2 *)&this->_padding_ = 4;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  return this;
}

// ~UBlackboardKeyType_Int @ 146ecddb0

void __thiscall UBlackboardKeyType_Int::~UBlackboardKeyType_Int(UBlackboardKeyType_Int *this)

{
  this->_padding_ = (longlong)&___7UBlackboardKeyType__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CompareValues @ 146ed7800

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
UBlackboardKeyType_Int::CompareValues
          (UBlackboardKeyType_Int *this,UBlackboardComponent *param_1,uchar *param_2,
          UBlackboardKeyType *param_3,uchar *param_4)

{
  if (*(int *)param_4 < *(int *)param_2) {
    return Greater;
  }
  return (*(int *)param_4 <= *(int *)param_2) - Greater;
}

// DescribeArithmeticParam @ 146ed9a10

FString * __thiscall
UBlackboardKeyType_Int::DescribeArithmeticParam
          (UBlackboardKeyType_Int *this,FString *__return_storage_ptr__,int param_1,float param_2)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%d");
  return __return_storage_ptr__;
}

// DescribeValue @ 146ede170

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
UBlackboardKeyType_Int::DescribeValue
          (UBlackboardKeyType_Int *this,FString *__return_storage_ptr__,
          UBlackboardComponent *param_1,uchar *param_2)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"%d");
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146eea0c0

UClass * __cdecl UBlackboardKeyType_Int::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlackboardKeyType_Int.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BlackboardKeyType_Int",
               &Z_Registration_Info_UClass_UBlackboardKeyType_Int.InnerSingleton,
               StaticRegisterNativesUBlackboardKeyType_Int,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlackboardKeyType_Int>,
               InternalVTableHelperCtorCaller<UBlackboardKeyType_Int>,local_res8,
               UBlackboardKeyType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlackboardKeyType_Int.InnerSingleton;
}

// GetValue @ 146eefdd0

int __cdecl UBlackboardKeyType_Int::GetValue(UBlackboardKeyType_Int *param_1,uchar *param_2)

{
  return *(int *)param_2;
}

// InitializeMemory @ 146ef30d0

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
UBlackboardKeyType_Int::InitializeMemory
          (UBlackboardKeyType_Int *this,UBlackboardComponent *param_1,uchar *param_2)

{
  *(int *)param_2 = this->DefaultValue;
  return;
}

// SetValue @ 146f00050

bool __cdecl
UBlackboardKeyType_Int::SetValue(UBlackboardKeyType_Int *param_1,uchar *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)param_2;
  *(int *)param_2 = param_3;
  return iVar1 != param_3;
}

// StaticRegisterNativesUBlackboardKeyType_Int @ 146f01030

void __cdecl UBlackboardKeyType_Int::StaticRegisterNativesUBlackboardKeyType_Int(void)

{
  return;
}

// TestArithmeticOperation @ 146f01220

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
UBlackboardKeyType_Int::TestArithmeticOperation
          (UBlackboardKeyType_Int *this,UBlackboardComponent *param_1,uchar *param_2,Type param_3,
          int param_4,float param_5)

{
  int iVar1;
  
  iVar1 = *(int *)param_2;
  switch(param_3) {
  case Equal:
    return iVar1 == param_4;
  case NotEqual:
    return iVar1 != param_4;
  case Less:
    return iVar1 < param_4;
  case LessOrEqual:
    return iVar1 <= param_4;
  case Greater:
    return param_4 < iVar1;
  case GreaterOrEqual:
    return param_4 <= iVar1;
  default:
    return false;
  }
}

