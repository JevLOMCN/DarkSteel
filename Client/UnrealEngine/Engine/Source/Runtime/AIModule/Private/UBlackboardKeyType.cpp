// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 35

// StaticClass @ 146eae820

UClass * __cdecl UBlackboardKeyType::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlackboardKeyType.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BlackboardKeyType",
               &Z_Registration_Info_UClass_UBlackboardKeyType.InnerSingleton,
               StaticRegisterNativesUBlackboardKeyType,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UBlackboardKeyType>,
               InternalVTableHelperCtorCaller<UBlackboardKeyType>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlackboardKeyType.InnerSingleton;
}

// UBlackboardKeyType @ 146ecbc50

UBlackboardKeyType * __thiscall
UBlackboardKeyType::UBlackboardKeyType(UBlackboardKeyType *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UBlackboardKeyType__6B_;
  return this;
}

// UBlackboardKeyType @ 146ecbc80

UBlackboardKeyType * __thiscall
UBlackboardKeyType::UBlackboardKeyType(UBlackboardKeyType *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UBlackboardKeyType__6B_;
  this->bIsInstanced = '\0';
  this->bCreateKeyInstance = '\0';
  this->ValueSize = 0;
  (this->SupportedOp).Value = '\0';
  return this;
}

// ~UBlackboardKeyType @ 146ecdcf0

void __thiscall UBlackboardKeyType::~UBlackboardKeyType(UBlackboardKeyType *this)

{
  this->_padding_ = (longlong)&___7UBlackboardKeyType__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Clear @ 146ed6540

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
UBlackboardKeyType::Clear(UBlackboardKeyType *this,UBlackboardComponent *param_1,uchar *param_2)

{
  memset(param_2,0,(ulonglong)this->ValueSize);
  return;
}

// CompareValues @ 146ed7700

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
UBlackboardKeyType::CompareValues
          (UBlackboardKeyType *this,UBlackboardComponent *param_1,uchar *param_2,
          UBlackboardKeyType *param_3,uchar *param_4)

{
  int iVar1;
  
  iVar1 = memcmp(param_2,param_4,(ulonglong)this->ValueSize);
  return (Type)(iVar1 != 0);
}

// CopyValues @ 146ed8190

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
UBlackboardKeyType::CopyValues
          (UBlackboardKeyType *this,UBlackboardComponent *param_1,uchar *param_2,
          UBlackboardKeyType *param_3,uchar *param_4)

{
  memcpy(param_2,param_4,(ulonglong)this->ValueSize);
  return;
}

// DescribeArithmeticParam @ 146ed98a0

FString * __thiscall
UBlackboardKeyType::DescribeArithmeticParam
          (UBlackboardKeyType *this,FString *__return_storage_ptr__,int param_1,float param_2)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// DescribeSelf @ 146edd3b0

FString * __thiscall
UBlackboardKeyType::DescribeSelf(UBlackboardKeyType *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// DescribeValue @ 146edddd0

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
UBlackboardKeyType::DescribeValue
          (UBlackboardKeyType *this,FString *__return_storage_ptr__,UBlackboardComponent *param_1,
          uchar *param_2)

{
  FString *pFVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  iVar2 = 0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayMax = 0;
  if (this->ValueSize != 0) {
    do {
      ::FString::PrintfImpl(&local_48,L"%X");
      iVar3 = local_48.Data.ArrayNum + -1;
      if (local_48.Data.ArrayNum == 0) {
        iVar3 = 0;
      }
      ::FString::AppendChars(&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar3);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)this->ValueSize);
  }
  iVar2 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  bVar4 = iVar2 == 0;
  if (bVar4) {
    pFVar1 = ::FString::FString(&local_38,"empty");
  }
  else {
    pFVar1 = ::FString::FString(&local_28,"0x");
    ::FString::ConcatFF(&local_48,pFVar1,&local_58);
    pFVar1 = &local_48;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar1->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  if ((bVar4) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((!bVar4) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((!bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FreeMemory @ 146ee39b0

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
UBlackboardKeyType::FreeMemory
          (UBlackboardKeyType *this,UBlackboardComponent *param_1,uchar *param_2)

{
  return;
}

// GetKeyInstance @ 146ee5cd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UBlackboardKeyType * __thiscall
UBlackboardKeyType::GetKeyInstance
          (UBlackboardKeyType *this,UBlackboardComponent *param_1,uchar *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  UBlackboardKeyType *pUVar4;
  uint uVar5;
  
  if (param_2 != (uchar *)0x0) {
    uVar1 = *(uint *)param_2;
    if ((-1 < (int)uVar1) && ((int)uVar1 < (param_1->KeyInstances).ArrayNum)) {
      uVar5 = 0;
      if ((int)uVar1 < (param_1->KeyInstances).ArrayNum) {
        uVar5 = ~uVar1 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pUVar4 = (UBlackboardKeyType *)(*pcVar2)();
          return pUVar4;
        }
      }
      pUVar4 = *(UBlackboardKeyType **)
                ((param_1->KeyInstances).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 != (UBlackboardKeyType *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      return pUVar4;
    }
  }
  return (UBlackboardKeyType *)0x0;
}

// GetKeyInstance @ 146ee5d90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UBlackboardKeyType * __thiscall
UBlackboardKeyType::GetKeyInstance
          (UBlackboardKeyType *this,UBlackboardComponent *param_1,uchar *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  UBlackboardKeyType *pUVar4;
  uint uVar5;
  
  if (param_2 != (uchar *)0x0) {
    uVar1 = *(uint *)param_2;
    if ((-1 < (int)uVar1) && ((int)uVar1 < (param_1->KeyInstances).ArrayNum)) {
      uVar5 = 0;
      if ((int)uVar1 < (param_1->KeyInstances).ArrayNum) {
        uVar5 = ~uVar1 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pUVar4 = (UBlackboardKeyType *)(*pcVar2)();
          return pUVar4;
        }
      }
      pUVar4 = *(UBlackboardKeyType **)
                ((param_1->KeyInstances).AllocatorInstance.Data + (longlong)(int)uVar1 * 8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 != (UBlackboardKeyType *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      return pUVar4;
    }
  }
  return (UBlackboardKeyType *)0x0;
}

// GetLocation @ 146ee6050

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
UBlackboardKeyType::GetLocation
          (UBlackboardKeyType *this,UBlackboardComponent *param_1,uchar *param_2,
          TVector<double> *param_3)

{
  return false;
}

// GetPrivateStaticClass @ 146ee9d10

UClass * __cdecl UBlackboardKeyType::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlackboardKeyType.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BlackboardKeyType",
               &Z_Registration_Info_UClass_UBlackboardKeyType.InnerSingleton,
               StaticRegisterNativesUBlackboardKeyType,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UBlackboardKeyType>,
               InternalVTableHelperCtorCaller<UBlackboardKeyType>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlackboardKeyType.InnerSingleton;
}

// GetRotation @ 146eea7c0

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
UBlackboardKeyType::GetRotation
          (UBlackboardKeyType *this,UBlackboardComponent *param_1,uchar *param_2,
          TRotator<double> *param_3)

{
  return false;
}

// InitializeKey @ 146ef2930

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
UBlackboardKeyType::InitializeKey
          (UBlackboardKeyType *this,UBlackboardComponent *param_1,FKey param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint *puVar4;
  UClass *pUVar5;
  
  puVar4 = (uint *)UBlackboardComponent::GetKeyRawData(param_1,param_2);
  if (this->bCreateKeyInstance != '\0') {
    pUVar5 = StaticClass();
    this = (UBlackboardKeyType *)
           DuplicateObject_Internal(pUVar5,(UObject *)this,(UObject *)param_1,(FName)0x0);
    this->bIsInstanced = '\x01';
    *puVar4 = (uint)param_2.Key;
    if (((param_1->KeyInstances).ArrayNum <= (int)(uint)param_2.Key) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar1 = (param_1->KeyInstances).AllocatorInstance.Data;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    *(UBlackboardKeyType **)(pFVar1 + (ulonglong)param_2.Key * 8) = this;
    puVar4 = puVar4 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000146ef2a11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2e8))(this,param_1,puVar4);
  return;
}

// InitializeMemory @ 146ef3070

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
UBlackboardKeyType::InitializeMemory
          (UBlackboardKeyType *this,UBlackboardComponent *param_1,uchar *param_2)

{
  return;
}

// IsAllowedByFilter @ 146ef3630

bool __thiscall
UBlackboardKeyType::IsAllowedByFilter(UBlackboardKeyType *this,UBlackboardKeyType *param_1)

{
  if (param_1 != (UBlackboardKeyType *)0x0) {
    return this->_padding_ == param_1->_padding_;
  }
  return this->_padding_ == 0;
}

// IsEmpty @ 146ef3c10

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
UBlackboardKeyType::IsEmpty(UBlackboardKeyType *this,UBlackboardComponent *param_1,uchar *param_2)

{
  longlong lVar1;
  
  if ((ulonglong)this->ValueSize != 0) {
    lVar1 = 0;
    do {
      if (param_2[lVar1] != '\0') {
        return false;
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 < (longlong)(ulonglong)this->ValueSize);
  }
  return true;
}

// PreInitialize @ 146efbac0

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
UBlackboardKeyType::PreInitialize(UBlackboardKeyType *this,UBlackboardComponent *param_1)

{
  return;
}

// StaticRegisterNativesUBlackboardKeyType @ 146f00fe0

void __cdecl UBlackboardKeyType::StaticRegisterNativesUBlackboardKeyType(void)

{
  return;
}

// TestArithmeticOperation @ 146f01100

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
UBlackboardKeyType::TestArithmeticOperation
          (UBlackboardKeyType *this,UBlackboardComponent *param_1,uchar *param_2,Type param_3,
          int param_4,float param_5)

{
  return false;
}

// TestBasicOperation @ 146f012a0

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
UBlackboardKeyType::TestBasicOperation
          (UBlackboardKeyType *this,UBlackboardComponent *param_1,uchar *param_2,Type param_3)

{
  return false;
}

// TestTextOperation @ 146f01500

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
UBlackboardKeyType::TestTextOperation
          (UBlackboardKeyType *this,UBlackboardComponent *param_1,uchar *param_2,Type param_3,
          FString *param_4)

{
  return false;
}

// UpdateDeprecatedKey @ 146f036f0

UBlackboardKeyType * __thiscall UBlackboardKeyType::UpdateDeprecatedKey(UBlackboardKeyType *this)

{
  return (UBlackboardKeyType *)0x0;
}

// WrappedClear @ 146f04190

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
UBlackboardKeyType::WrappedClear
          (UBlackboardKeyType *this,UBlackboardComponent *param_1,uchar *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  UBlackboardKeyType *pUVar1;
  
  if (this->bCreateKeyInstance != '\0') {
    pUVar1 = GetKeyInstance(this,param_1,param_2);
    UNRECOVERED_JUMPTABLE = *(code **)(pUVar1->_padding_ + 0x308);
                    /* WARNING: Could not recover jumptable at 0x000146f041c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pUVar1,param_1,param_2 + 4,UNRECOVERED_JUMPTABLE);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000146f041d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x308))();
  return;
}

// WrappedDescribeValue @ 146f041f0

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
UBlackboardKeyType::WrappedDescribeValue
          (UBlackboardKeyType *this,FString *__return_storage_ptr__,UBlackboardComponent *param_1,
          uchar *param_2)

{
  UBlackboardKeyType *pUVar1;
  
  if (this->bCreateKeyInstance != '\0') {
    pUVar1 = GetKeyInstance(this,param_1,param_2);
    (**(code **)(pUVar1->_padding_ + 0x330))(pUVar1,__return_storage_ptr__,param_1,param_2 + 4);
    return __return_storage_ptr__;
  }
  (**(code **)(this->_padding_ + 0x330))();
  return __return_storage_ptr__;
}

// WrappedFree @ 146f04340

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
UBlackboardKeyType::WrappedFree
          (UBlackboardKeyType *this,UBlackboardComponent *param_1,uchar *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  UBlackboardKeyType *pUVar1;
  
  if (this->bCreateKeyInstance != '\0') {
    pUVar1 = GetKeyInstance(this,param_1,param_2);
    UNRECOVERED_JUMPTABLE = *(code **)(pUVar1->_padding_ + 0x2f0);
                    /* WARNING: Could not recover jumptable at 0x000146f04379. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pUVar1,param_1,param_2 + 4,UNRECOVERED_JUMPTABLE);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000146f04389. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2f0))();
  return;
}

// WrappedGetLocation @ 146f043a0

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
UBlackboardKeyType::WrappedGetLocation
          (UBlackboardKeyType *this,UBlackboardComponent *param_1,uchar *param_2,
          TVector<double> *param_3)

{
  undefined1 uVar1;
  UBlackboardKeyType *pUVar2;
  
  if (this->bCreateKeyInstance != '\0') {
    pUVar2 = GetKeyInstance(this,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146f043e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(pUVar2->_padding_ + 0x2f8))(pUVar2,param_1,param_2 + 4,param_3);
    return (bool)uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000146f043fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x2f8))();
  return (bool)uVar1;
}

// WrappedGetRotation @ 146f04410

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
UBlackboardKeyType::WrappedGetRotation
          (UBlackboardKeyType *this,UBlackboardComponent *param_1,uchar *param_2,
          TRotator<double> *param_3)

{
  undefined1 uVar1;
  UBlackboardKeyType *pUVar2;
  
  if (this->bCreateKeyInstance != '\0') {
    pUVar2 = GetKeyInstance(this,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146f04459. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(pUVar2->_padding_ + 0x300))(pUVar2,param_1,param_2 + 4,param_3);
    return (bool)uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000146f0446e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x300))();
  return (bool)uVar1;
}

// WrappedIsEmpty @ 146f04480

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
UBlackboardKeyType::WrappedIsEmpty
          (UBlackboardKeyType *this,UBlackboardComponent *param_1,uchar *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar1;
  UBlackboardKeyType *pUVar2;
  
  if (this->bCreateKeyInstance != '\0') {
    pUVar2 = GetKeyInstance(this,param_1,param_2);
    UNRECOVERED_JUMPTABLE = *(code **)(pUVar2->_padding_ + 0x310);
                    /* WARNING: Could not recover jumptable at 0x000146f044b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(pUVar2,param_1,param_2 + 4,UNRECOVERED_JUMPTABLE);
    return (bool)uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000146f044c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x310))();
  return (bool)uVar1;
}

// WrappedTestArithmeticOperation @ 146f04830

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
UBlackboardKeyType::WrappedTestArithmeticOperation
          (UBlackboardKeyType *this,UBlackboardComponent *param_1,uchar *param_2,Type param_3,
          int param_4,float param_5)

{
  undefined1 uVar1;
  UBlackboardKeyType *pUVar2;
  
  if (this->bCreateKeyInstance != '\0') {
    pUVar2 = GetKeyInstance(this,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146f04879. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(pUVar2->_padding_ + 800))(pUVar2,param_1,param_2 + 4,param_3);
    return (bool)uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000146f04895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 800))();
  return (bool)uVar1;
}

// WrappedTestBasicOperation @ 146f048a0

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
UBlackboardKeyType::WrappedTestBasicOperation
          (UBlackboardKeyType *this,UBlackboardComponent *param_1,uchar *param_2,Type param_3)

{
  undefined1 uVar1;
  UBlackboardKeyType *pUVar2;
  
  if (this->bCreateKeyInstance != '\0') {
    pUVar2 = GetKeyInstance(this,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146f048e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(pUVar2->_padding_ + 0x318))(pUVar2,param_1,param_2 + 4,param_3);
    return (bool)uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000146f048fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x318))();
  return (bool)uVar1;
}

// WrappedTestTextOperation @ 146f04910

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
UBlackboardKeyType::WrappedTestTextOperation
          (UBlackboardKeyType *this,UBlackboardComponent *param_1,uchar *param_2,Type param_3,
          FString *param_4)

{
  undefined1 uVar1;
  UBlackboardKeyType *pUVar2;
  
  if (this->bCreateKeyInstance != '\0') {
    pUVar2 = GetKeyInstance(this,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000146f04959. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(pUVar2->_padding_ + 0x328))(pUVar2,param_1,param_2 + 4,param_3);
    return (bool)uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000146f04975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x328))();
  return (bool)uVar1;
}

