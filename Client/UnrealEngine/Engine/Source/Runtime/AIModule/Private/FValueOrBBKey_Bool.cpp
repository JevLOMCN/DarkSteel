// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 7

// StaticStruct @ 146eaffa0

UScriptStruct * __cdecl FValueOrBBKey_Bool::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FValueOrBBKey_Bool.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FValueOrBBKey_Bool.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FValueOrBBKey_Bool,(UObject *)pUVar1,
                         L"ValueOrBBKey_Bool");
  }
  return Z_Registration_Info_UScriptStruct_FValueOrBBKey_Bool.OuterSingleton;
}

// GetValue @ 146eeeb90

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
FValueOrBBKey_Bool::GetValue(FValueOrBBKey_Bool *this,UBehaviorTreeComponent *param_1)

{
  bool bVar1;
  
  if ((UBlackboardComponent *)param_1->_padding_ != (UBlackboardComponent *)0x0) {
    bVar1 = FBlackboard::GetValue<UBlackboardKeyType_Bool>
                      ((UBlackboardComponent *)param_1->_padding_,(FName *)this,
                       (FKey *)&this->_padding_,&this->DefaultValue);
    return bVar1;
  }
  return this->DefaultValue;
}

// GetValue @ 146eeebc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FValueOrBBKey_Bool::GetValue(FValueOrBBKey_Bool *this,UBlackboardComponent *param_1)

{
  bool bVar1;
  
  bVar1 = FBlackboard::GetValue<UBlackboardKeyType_Bool>
                    (param_1,(FName *)this,(FKey *)&this->_padding_,&this->DefaultValue);
  return bVar1;
}

// GetValue @ 146eeebe0

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
FValueOrBBKey_Bool::GetValue(FValueOrBBKey_Bool *this,UBehaviorTreeComponent *param_1)

{
  bool bVar1;
  
  if ((param_1 != (UBehaviorTreeComponent *)0x0) &&
     ((UBlackboardComponent *)param_1->_padding_ != (UBlackboardComponent *)0x0)) {
    bVar1 = FBlackboard::GetValue<UBlackboardKeyType_Bool>
                      ((UBlackboardComponent *)param_1->_padding_,(FName *)this,
                       (FKey *)&this->_padding_,&this->DefaultValue);
    return bVar1;
  }
  return this->DefaultValue;
}

// GetValue @ 146eeec10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FValueOrBBKey_Bool::GetValue(FValueOrBBKey_Bool *this,UBlackboardComponent *param_1)

{
  bool bVar1;
  
  if (param_1 != (UBlackboardComponent *)0x0) {
    bVar1 = FBlackboard::GetValue<UBlackboardKeyType_Bool>
                      (param_1,(FName *)this,(FKey *)&this->_padding_,&this->DefaultValue);
    return bVar1;
  }
  return this->DefaultValue;
}

// SerializeFromMismatchedTag @ 146efe1a0

bool __thiscall
FValueOrBBKey_Bool::SerializeFromMismatchedTag
          (FValueOrBBKey_Bool *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

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
    this->DefaultValue = param_1->BoolVal != '\0';
    return true;
  }
  return false;
}

// ToString @ 146f02670

FString * __thiscall
FValueOrBBKey_Bool::ToString(FValueOrBBKey_Bool *this,FString *__return_storage_ptr__)

{
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_38;
  FStringFormatArg local_28;
  
  if (this->_padding_ != 0) {
    FValueOrBlackboardKeyBase::ToStringKeyName
              ((FValueOrBlackboardKeyBase *)this,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  FStringFormatArg::FStringFormatArg(&local_28,(uint)this->DefaultValue);
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_38.AllocatorInstance,1,&local_38.ArrayMax);
  ConstructItems<FStringFormatArg,FStringFormatArg,int>(local_38.AllocatorInstance.Data,&local_28,1)
  ;
  ::FString::FormatImpl(__return_storage_ptr__,L"{0}",&local_38);
  DestructItems<FStringFormatArg,int>
            ((FStringFormatArg *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((FStringFormatArg *)local_38.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

