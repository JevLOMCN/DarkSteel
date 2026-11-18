// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 12

// StaticClass @ 146ea84d0

UClass * __cdecl UBlackboardKeyType_Name::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlackboardKeyType_Name.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BlackboardKeyType_Name",
               &Z_Registration_Info_UClass_UBlackboardKeyType_Name.InnerSingleton,
               StaticRegisterNativesUBlackboardKeyType_Name,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlackboardKeyType_Name>,
               InternalVTableHelperCtorCaller<UBlackboardKeyType_Name>,local_res8,
               UBlackboardKeyType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlackboardKeyType_Name.InnerSingleton;
}

// UBlackboardKeyType_Name @ 146ecbf50

UBlackboardKeyType_Name * __thiscall
UBlackboardKeyType_Name::UBlackboardKeyType_Name
          (UBlackboardKeyType_Name *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UBlackboardKeyType_Name__6B_;
  this->DefaultValue = InvalidValue;
  return this;
}

// UBlackboardKeyType_Name @ 146ecbf90

UBlackboardKeyType_Name * __thiscall
UBlackboardKeyType_Name::UBlackboardKeyType_Name
          (UBlackboardKeyType_Name *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UObject::UObject((UObject *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 & 0xfc;
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = (longlong)&___7UBlackboardKeyType_Name__6B_;
  this->DefaultValue = InvalidValue;
  *(undefined2 *)&this->_padding_ = 8;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 2;
  return this;
}

// ~UBlackboardKeyType_Name @ 146ecddd0

void __thiscall UBlackboardKeyType_Name::~UBlackboardKeyType_Name(UBlackboardKeyType_Name *this)

{
  this->_padding_ = (longlong)&___7UBlackboardKeyType__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CompareValues @ 146ed7830

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
UBlackboardKeyType_Name::CompareValues
          (UBlackboardKeyType_Name *this,UBlackboardComponent *param_1,uchar *param_2,
          UBlackboardKeyType *param_3,uchar *param_4)

{
  return (Type)(*(longlong *)param_2 != *(longlong *)param_4);
}

// DescribeValue @ 146ede1a0

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
UBlackboardKeyType_Name::DescribeValue
          (UBlackboardKeyType_Name *this,FString *__return_storage_ptr__,
          UBlackboardComponent *param_1,uchar *param_2)

{
  FName local_res10 [3];
  
  local_res10[0] = *(FName *)param_2;
  ::FName::ToString(local_res10,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146eea180

UClass * __cdecl UBlackboardKeyType_Name::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlackboardKeyType_Name.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BlackboardKeyType_Name",
               &Z_Registration_Info_UClass_UBlackboardKeyType_Name.InnerSingleton,
               StaticRegisterNativesUBlackboardKeyType_Name,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlackboardKeyType_Name>,
               InternalVTableHelperCtorCaller<UBlackboardKeyType_Name>,local_res8,
               UBlackboardKeyType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlackboardKeyType_Name.InnerSingleton;
}

// GetValue @ 146eefde0

FName __cdecl UBlackboardKeyType_Name::GetValue(UBlackboardKeyType_Name *param_1,uchar *param_2)

{
  longlong *in_R8;
  
  param_1->_padding_ = *in_R8;
  return (FName)param_1;
}

// InitializeMemory @ 146ef30e0

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
UBlackboardKeyType_Name::InitializeMemory
          (UBlackboardKeyType_Name *this,UBlackboardComponent *param_1,uchar *param_2)

{
  *(FName *)param_2 = this->DefaultValue;
  return;
}

// SetValue @ 146f00060

bool __cdecl
UBlackboardKeyType_Name::SetValue(UBlackboardKeyType_Name *param_1,uchar *param_2,FName *param_3)

{
  FName FVar1;
  FName FVar2;
  
  FVar1 = *(FName *)param_2;
  FVar2 = *param_3;
  *(FName *)param_2 = FVar2;
  return FVar1 != FVar2;
}

// StaticRegisterNativesUBlackboardKeyType_Name @ 146f01040

void __cdecl UBlackboardKeyType_Name::StaticRegisterNativesUBlackboardKeyType_Name(void)

{
  return;
}

// TestTextOperation @ 146f01510

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
UBlackboardKeyType_Name::TestTextOperation
          (UBlackboardKeyType_Name *this,UBlackboardComponent *param_1,uchar *param_2,Type param_3,
          FString *param_4)

{
  int iVar1;
  size_t sVar2;
  wchar_t *pwVar3;
  bool bVar4;
  FName local_res18 [2];
  FString local_18;
  
  local_res18[0] = *(FName *)param_2;
  ::FName::ToString(local_res18,&local_18);
  if (param_3 == Equal) {
    iVar1 = (param_4->Data).ArrayNum;
    if (local_18.Data.ArrayNum == iVar1) {
      if (local_18.Data.ArrayNum < 2) {
        bVar4 = true;
      }
      else {
        iVar1 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_18.Data.AllocatorInstance.Data,
                           (wchar_t *)(param_4->Data).AllocatorInstance.Data);
        bVar4 = iVar1 == 0;
      }
    }
    else {
      bVar4 = local_18.Data.ArrayNum + iVar1 == 1;
    }
  }
  else if (param_3 == NotEqual) {
    iVar1 = (param_4->Data).ArrayNum;
    if (local_18.Data.ArrayNum == iVar1) {
      if (local_18.Data.ArrayNum < 2) {
        bVar4 = false;
      }
      else {
        iVar1 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_18.Data.AllocatorInstance.Data,
                           (wchar_t *)(param_4->Data).AllocatorInstance.Data);
        bVar4 = iVar1 != 0;
      }
    }
    else {
      bVar4 = local_18.Data.ArrayNum + iVar1 != 1;
    }
  }
  else if (param_3 == Contain) {
    if ((param_4->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
      if ((FScriptContainerElement *)pwVar3 == (FScriptContainerElement *)0x0) {
        bVar4 = false;
        goto LAB_146f01686;
      }
    }
    sVar2 = wcslen(pwVar3);
    iVar1 = ::FString::Find(&local_18,pwVar3,(int)sVar2,IgnoreCase,FromStart,-1);
    bVar4 = iVar1 != -1;
  }
  else if (param_3 == NotContain) {
    if ((param_4->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
      if ((FScriptContainerElement *)pwVar3 == (FScriptContainerElement *)0x0) {
        bVar4 = true;
        goto LAB_146f01686;
      }
    }
    sVar2 = wcslen(pwVar3);
    iVar1 = ::FString::Find(&local_18,pwVar3,(int)sVar2,IgnoreCase,FromStart,-1);
    bVar4 = iVar1 == -1;
  }
  else {
    bVar4 = false;
  }
LAB_146f01686:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

