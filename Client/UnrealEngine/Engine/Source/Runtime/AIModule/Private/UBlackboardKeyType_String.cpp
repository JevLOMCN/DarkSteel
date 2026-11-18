// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 15

// StaticClass @ 146ea8790

UClass * __cdecl UBlackboardKeyType_String::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlackboardKeyType_String.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BlackboardKeyType_String",
               &Z_Registration_Info_UClass_UBlackboardKeyType_String.InnerSingleton,
               StaticRegisterNativesUBlackboardKeyType_String,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlackboardKeyType_String>,
               InternalVTableHelperCtorCaller<UBlackboardKeyType_String>,local_res8,
               UBlackboardKeyType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlackboardKeyType_String.InnerSingleton;
}

// UBlackboardKeyType_String @ 146ecc1c0

UBlackboardKeyType_String * __thiscall
UBlackboardKeyType_String::UBlackboardKeyType_String
          (UBlackboardKeyType_String *this,FVTableHelper *param_1)

{
  FString *pFVar1;
  int *piVar2;
  ForAnyElementType _Src;
  int iVar3;
  longlong lVar4;
  
  UObject::UObject((UObject *)this,param_1);
  pFVar1 = &this->DefaultValue;
  this->_padding_ = (longlong)&___7UBlackboardKeyType_String__6B_;
  piVar2 = &(this->DefaultValue).Data.ArrayMax;
  (this->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringValue).Data.ArrayNum = 0;
  (this->StringValue).Data.ArrayMax = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = InvalidValue.Data.ArrayNum;
  _Src = InvalidValue.Data.AllocatorInstance;
  lVar4 = (longlong)InvalidValue.Data.ArrayNum;
  (this->DefaultValue).Data.ArrayNum = InvalidValue.Data.ArrayNum;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar3,0,(ForAnyElementType *)pFVar1,iVar3,piVar2);
    memcpy((pFVar1->Data).AllocatorInstance.Data,_Src.Data,lVar4 * 2);
  }
  return this;
}

// UBlackboardKeyType_String @ 146ecc270

UBlackboardKeyType_String * __thiscall
UBlackboardKeyType_String::UBlackboardKeyType_String
          (UBlackboardKeyType_String *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FString *pFVar2;
  int *piVar3;
  ForAnyElementType _Src;
  int iVar4;
  longlong lVar5;
  
  UObject::UObject((UObject *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 & 0xfc;
  pFVar2 = &this->DefaultValue;
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = (longlong)&___7UBlackboardKeyType_String__6B_;
  piVar3 = &(this->DefaultValue).Data.ArrayMax;
  (this->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringValue).Data.ArrayNum = 0;
  (this->StringValue).Data.ArrayMax = 0;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar4 = InvalidValue.Data.ArrayNum;
  _Src = InvalidValue.Data.AllocatorInstance;
  lVar5 = (longlong)InvalidValue.Data.ArrayNum;
  (this->DefaultValue).Data.ArrayNum = InvalidValue.Data.ArrayNum;
  if (iVar4 == 0) {
    *piVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar4,0,(ForAnyElementType *)pFVar2,iVar4,piVar3);
    memcpy((pFVar2->Data).AllocatorInstance.Data,_Src.Data,lVar5 * 2);
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 2;
  *(undefined2 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 2;
  return this;
}

// ~UBlackboardKeyType_String @ 146ecde70

void __thiscall
UBlackboardKeyType_String::~UBlackboardKeyType_String(UBlackboardKeyType_String *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UBlackboardKeyType_String__6B_;
  pFVar1 = (this->DefaultValue).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StringValue).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UBlackboardKeyType__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Clear @ 146ed6580

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
UBlackboardKeyType_String::Clear
          (UBlackboardKeyType_String *this,UBlackboardComponent *param_1,uchar *param_2)

{
  ::FString::Empty(&this->StringValue);
  return;
}

// CompareValues @ 146ed7a10

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
UBlackboardKeyType_String::CompareValues
          (UBlackboardKeyType_String *this,UBlackboardComponent *param_1,uchar *param_2,
          UBlackboardKeyType *param_3,uchar *param_4)

{
  FScriptContainerElement *_Src;
  void *_Src_00;
  ForAnyElementType FVar1;
  int iVar2;
  Type TVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  bool bVar6;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  local_30 = (this->StringValue).Data.ArrayNum;
  lVar5 = (longlong)local_30;
  TVar3 = Equal;
  _Src = (this->StringValue).Data.AllocatorInstance.Data;
  local_38.Data = (FScriptContainerElement *)0x0;
  if (local_30 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_30,0,&local_38,local_30,&local_2c);
    memcpy(local_38.Data,_Src,lVar5 * 2);
  }
  local_20 = (int)param_3[1]._padding_;
  lVar5 = (longlong)local_20;
  _Src_00 = (void *)param_3[1]._padding_;
  local_28.Data = (FScriptContainerElement *)0x0;
  if (local_20 == 0) {
    local_1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_20,0,&local_28,local_20,&local_1c);
    memcpy(local_28.Data,_Src_00,lVar5 * 2);
  }
  FVar1.Data = local_28.Data;
  FVar4.Data = local_38.Data;
  if (local_30 == local_20) {
    if (local_30 < 2) goto LAB_146ed7b24;
    iVar2 = wcscmp((wchar_t *)local_38.Data,(wchar_t *)local_28.Data);
    bVar6 = iVar2 == 0;
  }
  else {
    bVar6 = local_20 + local_30 == 1;
  }
  TVar3 = (Type)!bVar6;
LAB_146ed7b24:
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
    FVar4.Data = local_38.Data;
  }
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  return TVar3;
}

// CopyValues @ 146ed81b0

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
UBlackboardKeyType_String::CopyValues
          (UBlackboardKeyType_String *this,UBlackboardComponent *param_1,uchar *param_2,
          UBlackboardKeyType *param_3,uchar *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_3[1]._padding_;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  ::FString::AssignRange(&this->StringValue,(wchar_t *)param_3[1]._padding_,iVar2);
  return;
}

// DescribeValue @ 146ede360

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
UBlackboardKeyType_String::DescribeValue
          (UBlackboardKeyType_String *this,FString *__return_storage_ptr__,
          UBlackboardComponent *param_1,uchar *param_2)

{
  ::FString::FString(__return_storage_ptr__,&this->StringValue);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146eea480

UClass * __cdecl UBlackboardKeyType_String::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlackboardKeyType_String.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BlackboardKeyType_String",
               &Z_Registration_Info_UClass_UBlackboardKeyType_String.InnerSingleton,
               StaticRegisterNativesUBlackboardKeyType_String,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlackboardKeyType_String>,
               InternalVTableHelperCtorCaller<UBlackboardKeyType_String>,local_res8,
               UBlackboardKeyType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlackboardKeyType_String.InnerSingleton;
}

// GetValue @ 146eefe50

FString * __cdecl
UBlackboardKeyType_String::GetValue
          (FString *__return_storage_ptr__,UBlackboardKeyType_String *param_1,uchar *param_2)

{
  ::FString::FString(__return_storage_ptr__,&param_1->StringValue);
  return __return_storage_ptr__;
}

// InitializeMemory @ 146ef3150

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
UBlackboardKeyType_String::InitializeMemory
          (UBlackboardKeyType_String *this,UBlackboardComponent *param_1,uchar *param_2)

{
  ::FString::operator=(&this->StringValue,&this->DefaultValue);
  return;
}

// IsEmpty @ 146ef3c90

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
UBlackboardKeyType_String::IsEmpty
          (UBlackboardKeyType_String *this,UBlackboardComponent *param_1,uchar *param_2)

{
  return (this->StringValue).Data.ArrayNum < 2;
}

// SetValue @ 146f001f0

bool __cdecl
UBlackboardKeyType_String::SetValue
          (UBlackboardKeyType_String *param_1,uchar *param_2,FString *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = (param_1->StringValue).Data.ArrayNum;
  iVar1 = (param_3->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) {
      bVar3 = false;
    }
    else {
      iVar2 = wcscmp((wchar_t *)(param_1->StringValue).Data.AllocatorInstance.Data,
                     (wchar_t *)(param_3->Data).AllocatorInstance.Data);
      bVar3 = iVar2 != 0;
    }
  }
  else {
    bVar3 = iVar2 + iVar1 != 1;
  }
  ::FString::operator=(&param_1->StringValue,param_3);
  return bVar3;
}

// StaticRegisterNativesUBlackboardKeyType_String @ 146f01080

void __cdecl UBlackboardKeyType_String::StaticRegisterNativesUBlackboardKeyType_String(void)

{
  return;
}

// TestTextOperation @ 146f016b0

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
UBlackboardKeyType_String::TestTextOperation
          (UBlackboardKeyType_String *this,UBlackboardComponent *param_1,uchar *param_2,Type param_3
          ,FString *param_4)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  wchar_t *pwVar4;
  
  if (param_3 == Equal) {
    iVar2 = (this->StringValue).Data.ArrayNum;
    iVar1 = (param_4->Data).ArrayNum;
    if (iVar2 != iVar1) {
      return iVar2 + iVar1 == 1;
    }
    if (1 < iVar2) {
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->StringValue).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_4->Data).AllocatorInstance.Data);
      return iVar2 == 0;
    }
    return true;
  }
  if (param_3 != NotEqual) {
    if (param_3 == Contain) {
      if ((param_4->Data).ArrayNum == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
        if ((FScriptContainerElement *)pwVar4 == (FScriptContainerElement *)0x0) {
          return false;
        }
      }
      sVar3 = wcslen(pwVar4);
      iVar2 = ::FString::Find(&this->StringValue,pwVar4,(int)sVar3,IgnoreCase,FromStart,-1);
      return iVar2 != -1;
    }
    if (param_3 != NotContain) {
      return false;
    }
    if ((param_4->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_4->Data).AllocatorInstance.Data;
      if ((FScriptContainerElement *)pwVar4 == (FScriptContainerElement *)0x0) {
        return true;
      }
    }
    sVar3 = wcslen(pwVar4);
    iVar2 = ::FString::Find(&this->StringValue,pwVar4,(int)sVar3,IgnoreCase,FromStart,-1);
    return iVar2 == -1;
  }
  iVar2 = (this->StringValue).Data.ArrayNum;
  iVar1 = (param_4->Data).ArrayNum;
  if (iVar2 != iVar1) {
    return iVar2 + iVar1 != 1;
  }
  if (1 < iVar2) {
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->StringValue).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_4->Data).AllocatorInstance.Data);
    return iVar2 != 0;
  }
  return false;
}

