// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 12

// StaticClass @ 146ea7ac0

UClass * __cdecl UBlackboardKeyType_Bool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlackboardKeyType_Bool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BlackboardKeyType_Bool",
               &Z_Registration_Info_UClass_UBlackboardKeyType_Bool.InnerSingleton,
               StaticRegisterNativesUBlackboardKeyType_Bool,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlackboardKeyType_Bool>,
               InternalVTableHelperCtorCaller<UBlackboardKeyType_Bool>,local_res8,
               UBlackboardKeyType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlackboardKeyType_Bool.InnerSingleton;
}

// UBlackboardKeyType_Bool @ 146ecbcc0

UBlackboardKeyType_Bool * __thiscall
UBlackboardKeyType_Bool::UBlackboardKeyType_Bool
          (UBlackboardKeyType_Bool *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bDefaultValue = false;
  this->_padding_ = (longlong)&___7UBlackboardKeyType_Bool__6B_;
  return this;
}

// UBlackboardKeyType_Bool @ 146ecbcf0

UBlackboardKeyType_Bool * __thiscall
UBlackboardKeyType_Bool::UBlackboardKeyType_Bool
          (UBlackboardKeyType_Bool *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UObject::UObject((UObject *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 & 0xfc;
  this->_padding_ = (longlong)&___7UBlackboardKeyType_Bool__6B_;
  this->bDefaultValue = false;
  *(undefined2 *)&this->_padding_ = 1;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  return this;
}

// ~UBlackboardKeyType_Bool @ 146ecdd10

void __thiscall UBlackboardKeyType_Bool::~UBlackboardKeyType_Bool(UBlackboardKeyType_Bool *this)

{
  this->_padding_ = (longlong)&___7UBlackboardKeyType__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CompareValues @ 146ed7730

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
UBlackboardKeyType_Bool::CompareValues
          (UBlackboardKeyType_Bool *this,UBlackboardComponent *param_1,uchar *param_2,
          UBlackboardKeyType *param_3,uchar *param_4)

{
  return (uint)((*param_2 != '\0') != (*param_4 != '\0'));
}

// DescribeValue @ 146eddf50

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
UBlackboardKeyType_Bool::DescribeValue
          (UBlackboardKeyType_Bool *this,FString *__return_storage_ptr__,
          UBlackboardComponent *param_1,uchar *param_2)

{
  wchar_t *pwVar1;
  
  pwVar1 = L"false";
  if (*param_2 != '\0') {
    pwVar1 = L"true";
  }
  ::FString::FString(__return_storage_ptr__,pwVar1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146ee9dc0

UClass * __cdecl UBlackboardKeyType_Bool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlackboardKeyType_Bool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BlackboardKeyType_Bool",
               &Z_Registration_Info_UClass_UBlackboardKeyType_Bool.InnerSingleton,
               StaticRegisterNativesUBlackboardKeyType_Bool,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlackboardKeyType_Bool>,
               InternalVTableHelperCtorCaller<UBlackboardKeyType_Bool>,local_res8,
               UBlackboardKeyType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlackboardKeyType_Bool.InnerSingleton;
}

// GetValue @ 146eefd70

bool __cdecl UBlackboardKeyType_Bool::GetValue(UBlackboardKeyType_Bool *param_1,uchar *param_2)

{
  return *param_2 != '\0';
}

// InitializeMemory @ 146ef3080

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
UBlackboardKeyType_Bool::InitializeMemory
          (UBlackboardKeyType_Bool *this,UBlackboardComponent *param_1,uchar *param_2)

{
  *param_2 = this->bDefaultValue;
  return;
}

// SetValue @ 146efff00

bool __cdecl
UBlackboardKeyType_Bool::SetValue(UBlackboardKeyType_Bool *param_1,uchar *param_2,bool param_3)

{
  uchar uVar1;
  
  uVar1 = *param_2;
  *param_2 = param_3;
  return (bool)uVar1 != param_3;
}

// StaticRegisterNativesUBlackboardKeyType_Bool @ 146f00ff0

void __cdecl UBlackboardKeyType_Bool::StaticRegisterNativesUBlackboardKeyType_Bool(void)

{
  return;
}

// TestBasicOperation @ 146f012b0

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
UBlackboardKeyType_Bool::TestBasicOperation
          (UBlackboardKeyType_Bool *this,UBlackboardComponent *param_1,uchar *param_2,Type param_3)

{
  bool bVar1;
  
  bVar1 = *param_2 != '\0';
  if (param_3 != Set) {
    bVar1 = *param_2 == '\0';
  }
  return bVar1;
}

