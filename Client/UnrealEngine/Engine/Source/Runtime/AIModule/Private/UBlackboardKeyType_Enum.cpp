// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 15

// StaticClass @ 146eaee10

UClass * __cdecl UBlackboardKeyType_Enum::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlackboardKeyType_Enum.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BlackboardKeyType_Enum",
               &Z_Registration_Info_UClass_UBlackboardKeyType_Enum.InnerSingleton,
               StaticRegisterNativesUBlackboardKeyType_Enum,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlackboardKeyType_Enum>,
               InternalVTableHelperCtorCaller<UBlackboardKeyType_Enum>,local_res8,
               UBlackboardKeyType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlackboardKeyType_Enum.InnerSingleton;
}

// UBlackboardKeyType_Enum @ 146ecbde0

UBlackboardKeyType_Enum * __thiscall
UBlackboardKeyType_Enum::UBlackboardKeyType_Enum
          (UBlackboardKeyType_Enum *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UBlackboardKeyType_Enum__6B_;
  (this->EnumType).field0_0x0.DebugPtr = (UEnum *)0x0;
  (this->EnumName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EnumName).Data.ArrayNum = 0;
  (this->EnumName).Data.ArrayMax = 0;
  this->DefaultValue = '\0';
  return this;
}

// UBlackboardKeyType_Enum @ 146ecbe20

UBlackboardKeyType_Enum * __thiscall
UBlackboardKeyType_Enum::UBlackboardKeyType_Enum
          (UBlackboardKeyType_Enum *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UObject::UObject((UObject *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 & 0xfc;
  this->_padding_ = (longlong)&___7UBlackboardKeyType_Enum__6B_;
  (this->EnumType).field0_0x0.DebugPtr = (UEnum *)0x0;
  (this->EnumName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EnumName).Data.ArrayNum = 0;
  (this->EnumName).Data.ArrayMax = 0;
  this->DefaultValue = '\0';
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 1;
  *(undefined2 *)&this->_padding_ = 1;
  return this;
}

// ~UBlackboardKeyType_Enum @ 146ecdd50

void __thiscall UBlackboardKeyType_Enum::~UBlackboardKeyType_Enum(UBlackboardKeyType_Enum *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UBlackboardKeyType_Enum__6B_;
  pFVar1 = (this->EnumName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UBlackboardKeyType__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CompareValues @ 146ed77a0

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
UBlackboardKeyType_Enum::CompareValues
          (UBlackboardKeyType_Enum *this,UBlackboardComponent *param_1,uchar *param_2,
          UBlackboardKeyType *param_3,uchar *param_4)

{
  if (*param_4 < *param_2) {
    return Greater;
  }
  return -(uint)(*param_2 < *param_4);
}

// DescribeArithmeticParam @ 146ed98c0

FString * __thiscall
UBlackboardKeyType_Enum::DescribeArithmeticParam
          (UBlackboardKeyType_Enum *this,FString *__return_storage_ptr__,int param_1,float param_2)

{
  UEnum *this_00;
  FScriptContainerElement *_Src;
  FText *this_01;
  FString *pFVar1;
  longlong lVar2;
  FString local_38;
  FText local_28;
  FString local_18;
  
  this_00 = (this->EnumType).field0_0x0.DebugPtr;
  if (this_00 == (UEnum *)0x0) {
    pFVar1 = ::FString::FString(&local_18,"UNKNOWN!");
    ::FString::FString(__return_storage_ptr__,pFVar1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    this_01 = UEnum::GetDisplayNameTextByValue(this_00,&local_28,(longlong)param_1);
    pFVar1 = FText::ToString(this_01);
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = (pFVar1->Data).ArrayNum;
    lVar2 = (longlong)local_38.Data.ArrayNum;
    _Src = (pFVar1->Data).AllocatorInstance.Data;
    if (local_38.Data.ArrayNum == 0) {
      local_38.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
                 &local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
    }
    ::FString::FString(__return_storage_ptr__,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// DescribeSelf @ 146edd450

FString * __thiscall
UBlackboardKeyType_Enum::DescribeSelf(UBlackboardKeyType_Enum *this,FString *__return_storage_ptr__)

{
  UEnum *pUVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_18;
  
  pUVar1 = (this->EnumType).field0_0x0.DebugPtr;
  if (pUVar1 == (UEnum *)0x0) {
    ::FString::FString(&local_18,L"None");
  }
  else {
    local_res8[0] = (FName)pUVar1->_padding_;
    ::FName::ToString(local_res8,&local_18);
  }
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar2.Data = local_18.Data.AllocatorInstance.Data;
  }
  ::FString::FString(__return_storage_ptr__,(wchar_t *)FVar2.Data);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// DescribeValue @ 146ede020

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
UBlackboardKeyType_Enum::DescribeValue
          (UBlackboardKeyType_Enum *this,FString *__return_storage_ptr__,
          UBlackboardComponent *param_1,uchar *param_2)

{
  UEnum *this_00;
  FScriptContainerElement *_Src;
  FText *this_01;
  FString *pFVar1;
  longlong lVar2;
  FString local_38;
  FText local_28;
  FString local_18;
  
  this_00 = (this->EnumType).field0_0x0.DebugPtr;
  if (this_00 == (UEnum *)0x0) {
    pFVar1 = ::FString::FString(&local_18,"UNKNOWN!");
    ::FString::FString(__return_storage_ptr__,pFVar1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    this_01 = UEnum::GetDisplayNameTextByValue(this_00,&local_28,(ulonglong)*param_2);
    pFVar1 = FText::ToString(this_01);
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = (pFVar1->Data).ArrayNum;
    lVar2 = (longlong)local_38.Data.ArrayNum;
    _Src = (pFVar1->Data).AllocatorInstance.Data;
    if (local_38.Data.ArrayNum == 0) {
      local_38.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
                 &local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
    }
    ::FString::FString(__return_storage_ptr__,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146ee9f40

UClass * __cdecl UBlackboardKeyType_Enum::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlackboardKeyType_Enum.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BlackboardKeyType_Enum",
               &Z_Registration_Info_UClass_UBlackboardKeyType_Enum.InnerSingleton,
               StaticRegisterNativesUBlackboardKeyType_Enum,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlackboardKeyType_Enum>,
               InternalVTableHelperCtorCaller<UBlackboardKeyType_Enum>,local_res8,
               UBlackboardKeyType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlackboardKeyType_Enum.InnerSingleton;
}

// GetValue @ 146eefdb0

uchar __cdecl UBlackboardKeyType_Enum::GetValue(UBlackboardKeyType_Enum *param_1,uchar *param_2)

{
  return *param_2;
}

// InitializeMemory @ 146ef30b0

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
UBlackboardKeyType_Enum::InitializeMemory
          (UBlackboardKeyType_Enum *this,UBlackboardComponent *param_1,uchar *param_2)

{
  *param_2 = this->DefaultValue;
  return;
}

// IsAllowedByFilter @ 146ef36f0

bool __thiscall
UBlackboardKeyType_Enum::IsAllowedByFilter
          (UBlackboardKeyType_Enum *this,UBlackboardKeyType *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UBlackboardKeyType *)0x0) {
    pUVar2 = StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if (((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar2->_padding_)) &&
       ((UEnum *)param_1[1]._padding_ == (this->EnumType).field0_0x0.DebugPtr)) {
      return true;
    }
  }
  return false;
}

// SetValue @ 146f00010

bool __cdecl
UBlackboardKeyType_Enum::SetValue(UBlackboardKeyType_Enum *param_1,uchar *param_2,uchar param_3)

{
  uchar uVar1;
  
  uVar1 = *param_2;
  *param_2 = param_3;
  return uVar1 != param_3;
}

// StaticRegisterNativesUBlackboardKeyType_Enum @ 146f01010

void __cdecl UBlackboardKeyType_Enum::StaticRegisterNativesUBlackboardKeyType_Enum(void)

{
  return;
}

// TestArithmeticOperation @ 146f01110

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
UBlackboardKeyType_Enum::TestArithmeticOperation
          (UBlackboardKeyType_Enum *this,UBlackboardComponent *param_1,uchar *param_2,Type param_3,
          int param_4,float param_5)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_2;
  if (param_3 < (Greater|Less)) {
    uVar2 = (uint)bVar1;
    switch(param_3) {
    case Equal:
      return uVar2 == param_4;
    case NotEqual:
      return uVar2 != param_4;
    case Less:
      return (int)(uint)bVar1 < param_4;
    case LessOrEqual:
      return (int)(uint)bVar1 <= param_4;
    case Greater:
      return param_4 < (int)uVar2;
    case GreaterOrEqual:
      return param_4 <= (int)uVar2;
    }
  }
  return false;
}

