// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 7

// StaticStruct @ 146eb0440

UScriptStruct * __cdecl FValueOrBBKey_Name::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FValueOrBBKey_Name.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FValueOrBBKey_Name.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FValueOrBBKey_Name,(UObject *)pUVar1,
                         L"ValueOrBBKey_Name");
  }
  return Z_Registration_Info_UScriptStruct_FValueOrBBKey_Name.OuterSingleton;
}

// GetValue @ 146eeef40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FName __thiscall
FValueOrBBKey_Name::GetValue(FValueOrBBKey_Name *this,UBehaviorTreeComponent *param_1)

{
  longlong in_R8;
  
  if (*(FName **)(in_R8 + 200) != (FName *)0x0) {
    FBlackboard::GetValue<UBlackboardKeyType_Name>
              ((UBlackboardComponent *)param_1,*(FName **)(in_R8 + 200),(FKey *)this,
               (FName *)&this->field_0x8);
    return (FName)param_1;
  }
  param_1->_padding_ = (longlong)this->DefaultValue;
  return (FName)param_1;
}

// GetValue @ 146eeef90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FName __thiscall
FValueOrBBKey_Name::GetValue(FValueOrBBKey_Name *this,UBlackboardComponent *param_1)

{
  FName *in_R8;
  
  FBlackboard::GetValue<UBlackboardKeyType_Name>
            (param_1,in_R8,(FKey *)this,(FName *)&this->field_0x8);
  return (FName)param_1;
}

// GetValue @ 146eeefd0

/* WARNING: Removing unreachable block (ram,0x000146eef026) */
/* WARNING: Removing unreachable block (ram,0x000146eef04b) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FName __thiscall
FValueOrBBKey_Name::GetValue(FValueOrBBKey_Name *this,UBehaviorTreeComponent *param_1)

{
  longlong in_R8;
  FName local_res10;
  
  if (in_R8 == 0) {
    param_1->_padding_ = (longlong)this->DefaultValue;
    return (FName)param_1;
  }
  if (*(FName **)(in_R8 + 200) == (FName *)0x0) {
    local_res10 = this->DefaultValue;
  }
  else if ((*(longlong *)this == 0) ||
          (FBlackboard::TryGetBlackboardKeyValue<UBlackboardKeyType_Name>
                     ((UBlackboardComponent *)&local_res10,*(FName **)(in_R8 + 200),(FKey *)this),
          local_res10.ComparisonIndex.Value.Value == 0xffffffff)) {
    param_1->_padding_ = (longlong)this->DefaultValue;
    return (FName)param_1;
  }
  param_1->_padding_ = (longlong)local_res10;
  return (FName)param_1;
}

// GetValue @ 146eef0c0

/* WARNING: Removing unreachable block (ram,0x000146eef10c) */
/* WARNING: Removing unreachable block (ram,0x000146eef131) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FName __thiscall
FValueOrBBKey_Name::GetValue(FValueOrBBKey_Name *this,UBlackboardComponent *param_1)

{
  FName *in_R8;
  FName local_res10;
  
  if (in_R8 == (FName *)0x0) {
    param_1->_padding_ = (longlong)this->DefaultValue;
    return (FName)param_1;
  }
  if ((*(longlong *)this == 0) ||
     (FBlackboard::TryGetBlackboardKeyValue<UBlackboardKeyType_Name>
                ((UBlackboardComponent *)&local_res10,in_R8,(FKey *)this),
     local_res10.ComparisonIndex.Value.Value == 0xffffffff)) {
    local_res10 = this->DefaultValue;
  }
  param_1->_padding_ = (longlong)local_res10;
  return (FName)param_1;
}

// SerializeFromMismatchedTag @ 146efe590

bool __thiscall
FValueOrBBKey_Name::SerializeFromMismatchedTag
          (FValueOrBBKey_Name *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

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
    (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x178))
              (*(longlong **)(*(longlong *)param_2 + 8),&this->DefaultValue);
    return true;
  }
  return false;
}

// ToString @ 146f029b0

FString * __thiscall
FValueOrBBKey_Name::ToString(FValueOrBBKey_Name *this,FString *__return_storage_ptr__)

{
  if (*(longlong *)this != 0) {
    FValueOrBlackboardKeyBase::ToStringKeyName
              ((FValueOrBlackboardKeyBase *)this,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  ::FName::ToString(&this->DefaultValue,__return_storage_ptr__);
  return __return_storage_ptr__;
}

