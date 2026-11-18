// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 6

// StaticStruct @ 146eb04b0

UScriptStruct * __cdecl FValueOrBBKey_String::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FValueOrBBKey_String.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FValueOrBBKey_String.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FValueOrBBKey_String,(UObject *)pUVar1,
                         L"ValueOrBBKey_String");
  }
  return Z_Registration_Info_UScriptStruct_FValueOrBBKey_String.OuterSingleton;
}

// GetValue @ 146eef490

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
FValueOrBBKey_String::GetValue
          (FValueOrBBKey_String *this,FString *__return_storage_ptr__,
          UBehaviorTreeComponent *param_1)

{
  TOptional<FString>_u_0 local_18;
  
  if ((((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) ||
      (this->_padding_ == 0)) ||
     (FBlackboard::TryGetBlackboardKeyValue<UBlackboardKeyType_String>
                ((TOptional<FString> *)&local_18.TypedValue,
                 (UBlackboardComponent *)param_1->_padding_,(FName *)this,(FKey *)&this->_padding_),
     local_18.TypedValue.Data.ArrayMax == -1)) {
    ::FString::FString(__return_storage_ptr__,&this->DefaultValue);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,&local_18.TypedValue);
  if (local_18.TypedValue.Data.ArrayMax == -1) {
    return __return_storage_ptr__;
  }
  if (local_18.TypedValue.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free((void *)local_18.TypedValue.Data.AllocatorInstance.Data);
  return __return_storage_ptr__;
}

// GetValue @ 146eef520

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
FValueOrBBKey_String::GetValue
          (FValueOrBBKey_String *this,FString *__return_storage_ptr__,UBlackboardComponent *param_1)

{
  TOptional<FString>_u_0 local_18;
  
  if ((this->_padding_ == 0) ||
     (FBlackboard::TryGetBlackboardKeyValue<UBlackboardKeyType_String>
                ((TOptional<FString> *)&local_18.TypedValue,param_1,(FName *)this,
                 (FKey *)&this->_padding_), local_18.TypedValue.Data.ArrayMax == -1)) {
    ::FString::FString(__return_storage_ptr__,&this->DefaultValue);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,&local_18.TypedValue);
  if (local_18.TypedValue.Data.ArrayMax == -1) {
    return __return_storage_ptr__;
  }
  if (local_18.TypedValue.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return __return_storage_ptr__;
  }
  FMemory::Free((void *)local_18.TypedValue.Data.AllocatorInstance.Data);
  return __return_storage_ptr__;
}

// GetValue @ 146eef5b0

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
FValueOrBBKey_String::GetValue
          (FValueOrBBKey_String *this,FString *__return_storage_ptr__,
          UBehaviorTreeComponent *param_1)

{
  ForAnyElementType FVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FString local_48;
  FString local_38;
  TOptional<FString>_u_0 local_28;
  
  if (param_1 == (UBehaviorTreeComponent *)0x0) {
    local_38.Data.ArrayNum = (this->DefaultValue).Data.ArrayNum;
    lVar3 = (longlong)local_38.Data.ArrayNum;
    pFVar2 = (this->DefaultValue).Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_38.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
                 &local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,pFVar2,lVar3 * 2);
    }
    ::FString::FString(__return_storage_ptr__,&local_38);
    FVar1.Data = local_38.Data.AllocatorInstance.Data;
    goto LAB_146eef73f;
  }
  if ((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) {
    local_48.Data.ArrayNum = (this->DefaultValue).Data.ArrayNum;
    pFVar2 = (this->DefaultValue).Data.AllocatorInstance.Data;
    if (local_48.Data.ArrayNum != 0) goto LAB_146eef677;
LAB_146eef6d6:
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayMax = 0;
  }
  else if (this->_padding_ == 0) {
LAB_146eef664:
    local_48.Data.ArrayNum = (this->DefaultValue).Data.ArrayNum;
    pFVar2 = (this->DefaultValue).Data.AllocatorInstance.Data;
    if (local_48.Data.ArrayNum == 0) goto LAB_146eef6d6;
LAB_146eef677:
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    lVar3 = (longlong)local_48.Data.ArrayNum;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_48.Data.ArrayNum,
               &local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,pFVar2,lVar3 * 2);
  }
  else {
    FBlackboard::TryGetBlackboardKeyValue<UBlackboardKeyType_String>
              ((TOptional<FString> *)&local_28.TypedValue,(UBlackboardComponent *)param_1->_padding_
               ,(FName *)this,(FKey *)&this->_padding_);
    if (local_28.TypedValue.Data.ArrayMax == -1) goto LAB_146eef664;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = local_28.TypedValue.Data.ArrayNum;
    if (local_28.TypedValue.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_28.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)&local_48,
                 local_28.TypedValue.Data.ArrayNum,&local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,
             (void *)local_28.TypedValue.Data.AllocatorInstance.Data,
             (longlong)local_28.TypedValue.Data.ArrayNum * 2);
    }
    if (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(__return_storage_ptr__,&local_48);
  FVar1.Data = local_48.Data.AllocatorInstance.Data;
LAB_146eef73f:
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  return __return_storage_ptr__;
}

// GetValue @ 146eef770

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
FValueOrBBKey_String::GetValue
          (FValueOrBBKey_String *this,FString *__return_storage_ptr__,UBlackboardComponent *param_1)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType FVar2;
  longlong lVar3;
  FString local_48;
  FString local_38;
  TOptional<FString>_u_0 local_28;
  
  if (param_1 == (UBlackboardComponent *)0x0) {
    local_38.Data.ArrayNum = (this->DefaultValue).Data.ArrayNum;
    lVar3 = (longlong)local_38.Data.ArrayNum;
    pFVar1 = (this->DefaultValue).Data.AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_38.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
                 &local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,pFVar1,lVar3 * 2);
    }
    ::FString::FString(__return_storage_ptr__,&local_38);
    FVar2.Data = local_38.Data.AllocatorInstance.Data;
    goto LAB_146eef8e2;
  }
  if (this->_padding_ == 0) {
LAB_146eef81a:
    local_48.Data.ArrayNum = (this->DefaultValue).Data.ArrayNum;
    lVar3 = (longlong)local_48.Data.ArrayNum;
    pFVar1 = (this->DefaultValue).Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_48.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,pFVar1,lVar3 * 2);
    }
  }
  else {
    FBlackboard::TryGetBlackboardKeyValue<UBlackboardKeyType_String>
              ((TOptional<FString> *)&local_28.TypedValue,param_1,(FName *)this,
               (FKey *)&this->_padding_);
    if (local_28.TypedValue.Data.ArrayMax == -1) goto LAB_146eef81a;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = local_28.TypedValue.Data.ArrayNum;
    if (local_28.TypedValue.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_28.TypedValue.Data.ArrayNum,0,(ForAnyElementType *)&local_48,
                 local_28.TypedValue.Data.ArrayNum,&local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,
             (void *)local_28.TypedValue.Data.AllocatorInstance.Data,
             (longlong)local_28.TypedValue.Data.ArrayNum * 2);
    }
    if (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(__return_storage_ptr__,&local_48);
  FVar2.Data = local_48.Data.AllocatorInstance.Data;
LAB_146eef8e2:
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  return __return_storage_ptr__;
}

// SerializeFromMismatchedTag @ 146efe6f0

bool __thiscall
FValueOrBBKey_String::SerializeFromMismatchedTag
          (FValueOrBBKey_String *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  FName FVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  FName FVar3;
  undefined1 local_res10 [8];
  
  FVar1 = param_1->Type;
  FVar2 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar3.Number = 0;
  FVar3.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar2.Value);
  if (FVar1 == FVar3) {
    ::operator<<(*(FArchive **)(*(longlong *)param_2 + 8),&this->DefaultValue);
    return true;
  }
  return false;
}

