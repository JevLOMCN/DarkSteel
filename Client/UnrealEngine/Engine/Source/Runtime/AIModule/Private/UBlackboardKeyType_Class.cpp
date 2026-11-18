// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 14

// StaticClass @ 146ea7da0

UClass * __cdecl UBlackboardKeyType_Class::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlackboardKeyType_Class.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BlackboardKeyType_Class",
               &Z_Registration_Info_UClass_UBlackboardKeyType_Class.InnerSingleton,
               StaticRegisterNativesUBlackboardKeyType_Class,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlackboardKeyType_Class>,
               InternalVTableHelperCtorCaller<UBlackboardKeyType_Class>,local_res8,
               UBlackboardKeyType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlackboardKeyType_Class.InnerSingleton;
}

// UBlackboardKeyType_Class @ 146ecbd30

UBlackboardKeyType_Class * __thiscall
UBlackboardKeyType_Class::UBlackboardKeyType_Class
          (UBlackboardKeyType_Class *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UBlackboardKeyType_Class__6B_;
  (this->BaseClass).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DefaultValue).field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UBlackboardKeyType_Class @ 146ecbd70

UBlackboardKeyType_Class * __thiscall
UBlackboardKeyType_Class::UBlackboardKeyType_Class
          (UBlackboardKeyType_Class *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  UClass *pUVar2;
  
  UObject::UObject((UObject *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 & 0xfc;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  this->_padding_ = (longlong)&___7UBlackboardKeyType_Class__6B_;
  (this->BaseClass).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->DefaultValue).field0_0x0.DebugPtr = (UClass *)0x0;
  *(undefined2 *)&this->_padding_ = 8;
  pUVar2 = Z_Construct_UClass_UObject_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->BaseClass).field0_0x0.DebugPtr = pUVar2;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  return this;
}

// ~UBlackboardKeyType_Class @ 146ecdd30

void __thiscall UBlackboardKeyType_Class::~UBlackboardKeyType_Class(UBlackboardKeyType_Class *this)

{
  this->_padding_ = (longlong)&___7UBlackboardKeyType__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CompareValues @ 146ed7750

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
UBlackboardKeyType_Class::CompareValues
          (UBlackboardKeyType_Class *this,UBlackboardComponent *param_1,uchar *param_2,
          UBlackboardKeyType *param_3,uchar *param_4)

{
  UObject *pUVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res18 [2];
  
  local_res18[0] = *(FWeakObjectPtr *)param_2;
  pUVar1 = FWeakObjectPtr::Get(local_res18);
  param_4 = *(uchar **)param_4;
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_4);
  return (Type)(pUVar1 != pUVar2);
}

// DescribeSelf @ 146edd3d0

FString * __thiscall
UBlackboardKeyType_Class::DescribeSelf
          (UBlackboardKeyType_Class *this,FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  ForAnyElementType FVar2;
  FName local_res8 [4];
  FString local_18;
  
  pUVar1 = (this->BaseClass).field0_0x0.DebugPtr;
  if (pUVar1 == (UClass *)0x0) {
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

// DescribeValue @ 146eddf90

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
UBlackboardKeyType_Class::DescribeValue
          (UBlackboardKeyType_Class *this,FString *__return_storage_ptr__,
          UBlackboardComponent *param_1,uchar *param_2)

{
  UObject *pUVar1;
  ForAnyElementType FVar2;
  FName local_res10 [3];
  FString local_18;
  
  local_res10[0] = *(FName *)param_2;
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_res10);
  if (pUVar1 == (UObject *)0x0) {
    ::FString::FString(&local_18,L"None");
  }
  else {
    local_res10[0].ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
    local_res10[0].Number = *(uint *)&pUVar1->field_0x1c;
    ::FName::ToString(local_res10,&local_18);
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

// GetPrivateStaticClass @ 146ee9e80

UClass * __cdecl UBlackboardKeyType_Class::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlackboardKeyType_Class.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AIModule",L"BlackboardKeyType_Class",
               &Z_Registration_Info_UClass_UBlackboardKeyType_Class.InnerSingleton,
               StaticRegisterNativesUBlackboardKeyType_Class,0x40,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBlackboardKeyType_Class>,
               InternalVTableHelperCtorCaller<UBlackboardKeyType_Class>,local_res8,
               UBlackboardKeyType::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlackboardKeyType_Class.InnerSingleton;
}

// GetValue @ 146eefd80

UClass * __cdecl
UBlackboardKeyType_Class::GetValue(UBlackboardKeyType_Class *param_1,uchar *param_2)

{
  UClass *pUVar1;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = *(FWeakObjectPtr *)param_2;
  pUVar1 = (UClass *)FWeakObjectPtr::Get(local_res10);
  return pUVar1;
}

// InitializeMemory @ 146ef3090

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
UBlackboardKeyType_Class::InitializeMemory
          (UBlackboardKeyType_Class *this,UBlackboardComponent *param_1,uchar *param_2)

{
  SetValue(this,param_2,(this->DefaultValue).field0_0x0.DebugPtr);
  return;
}

// IsAllowedByFilter @ 146ef3660

bool __thiscall
UBlackboardKeyType_Class::IsAllowedByFilter
          (UBlackboardKeyType_Class *this,UBlackboardKeyType *param_1)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  
  if (param_1 != (UBlackboardKeyType *)0x0) {
    pUVar4 = StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      pUVar4 = (UClass *)param_1[1]._padding_;
      pUVar2 = (this->BaseClass).field0_0x0.DebugPtr;
      if (pUVar4 == pUVar2) {
        return true;
      }
      if (pUVar4 != (UClass *)0x0) {
        iVar1 = (int)pUVar4->_padding_;
        if (((int)pUVar2->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
            &pUVar4->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          return true;
        }
      }
    }
  }
  return false;
}

// SetValue @ 146efff20

bool __cdecl
UBlackboardKeyType_Class::SetValue(UBlackboardKeyType_Class *param_1,uchar *param_2,UClass *param_3)

{
  bool bVar1;
  bool bVar2;
  FWeakObjectPtr local_res10;
  UClass *local_res18 [2];
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18[0] = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
  bVar1 = FWeakObjectPtr::IsValid(&local_res10,false,true);
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)param_2,false,true);
  if (bVar1 == bVar2) {
    bVar1 = FWeakObjectPtr::IsStale(&local_res10,false,true);
    bVar2 = FWeakObjectPtr::IsStale((FWeakObjectPtr *)param_2,false,true);
    if (bVar1 == bVar2) {
      bVar1 = TWeakObjectPtr<UClass,FWeakObjectPtr>::UEOpEquals<UClass,bool>
                        ((TWeakObjectPtr<UClass,FWeakObjectPtr> *)param_2,
                         (TWeakObjectPtr<UClass,FWeakObjectPtr> *)&local_res10);
      if (bVar1) {
        *(FWeakObjectPtr *)param_2 = local_res10;
        return false;
      }
    }
  }
  *(FWeakObjectPtr *)param_2 = local_res10;
  return true;
}

// StaticRegisterNativesUBlackboardKeyType_Class @ 146f01000

void __cdecl UBlackboardKeyType_Class::StaticRegisterNativesUBlackboardKeyType_Class(void)

{
  return;
}

// TestBasicOperation @ 146f012d0

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
UBlackboardKeyType_Class::TestBasicOperation
          (UBlackboardKeyType_Class *this,UBlackboardComponent *param_1,uchar *param_2,Type param_3)

{
  bool bVar1;
  FWeakObjectPtr local_res18 [2];
  
  local_res18[0] = *(FWeakObjectPtr *)param_2;
  if (param_3 == Set) {
    bVar1 = FWeakObjectPtr::IsValid(local_res18);
    return bVar1;
  }
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  return !bVar1;
}

