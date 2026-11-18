// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 7

// StaticStruct @ 146eb06a0

UScriptStruct * __cdecl FValueOrBBKey_Rotator::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FValueOrBBKey_Rotator.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FValueOrBBKey_Rotator.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FValueOrBBKey_Rotator,(UObject *)pUVar1,
                         L"ValueOrBBKey_Rotator");
  }
  return Z_Registration_Info_UScriptStruct_FValueOrBBKey_Rotator.OuterSingleton;
}

// GetValue @ 146eef280

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRotator<double> * __thiscall
FValueOrBBKey_Rotator::GetValue
          (FValueOrBBKey_Rotator *this,TRotator<double> *__return_storage_ptr__,
          UBehaviorTreeComponent *param_1)

{
  TOptional<UE::Math::TRotator<double>_> local_28;
  
  if ((((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) ||
      (this->_padding_ == 0)) ||
     (FBlackboard::TryGetBlackboardKeyValue<UBlackboardKeyType_Rotator>
                (&local_28,(UBlackboardComponent *)param_1->_padding_,(FName *)this,
                 (FKey *)&this->_padding_), local_28.bIsSet == false)) {
    local_28.TypedValue.Pitch._0_4_ = *(undefined4 *)&(this->DefaultValue).Pitch;
    local_28.TypedValue.Pitch._4_4_ = *(undefined4 *)((longlong)&(this->DefaultValue).Pitch + 4);
    local_28.TypedValue.Yaw._0_4_ = *(undefined4 *)&(this->DefaultValue).Yaw;
    local_28.TypedValue.Yaw._4_4_ = *(undefined4 *)((longlong)&(this->DefaultValue).Yaw + 4);
    local_28.TypedValue.Roll = (this->DefaultValue).Roll;
  }
  *(undefined4 *)&__return_storage_ptr__->Pitch = local_28.TypedValue.Pitch._0_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->Pitch + 4) = local_28.TypedValue.Pitch._4_4_;
  *(undefined4 *)&__return_storage_ptr__->Yaw = local_28.TypedValue.Yaw._0_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->Yaw + 4) = local_28.TypedValue.Yaw._4_4_;
  __return_storage_ptr__->Roll = local_28.TypedValue.Roll;
  return __return_storage_ptr__;
}

// GetValue @ 146eef2f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRotator<double> * __thiscall
FValueOrBBKey_Rotator::GetValue
          (FValueOrBBKey_Rotator *this,TRotator<double> *__return_storage_ptr__,
          UBlackboardComponent *param_1)

{
  TOptional<UE::Math::TRotator<double>_> local_28;
  
  if ((this->_padding_ == 0) ||
     (FBlackboard::TryGetBlackboardKeyValue<UBlackboardKeyType_Rotator>
                (&local_28,param_1,(FName *)this,(FKey *)&this->_padding_), local_28.bIsSet == false
     )) {
    local_28.TypedValue.Pitch._0_4_ = *(undefined4 *)&(this->DefaultValue).Pitch;
    local_28.TypedValue.Pitch._4_4_ = *(undefined4 *)((longlong)&(this->DefaultValue).Pitch + 4);
    local_28.TypedValue.Yaw._0_4_ = *(undefined4 *)&(this->DefaultValue).Yaw;
    local_28.TypedValue.Yaw._4_4_ = *(undefined4 *)((longlong)&(this->DefaultValue).Yaw + 4);
    local_28.TypedValue.Roll = (this->DefaultValue).Roll;
  }
  *(undefined4 *)&__return_storage_ptr__->Pitch = local_28.TypedValue.Pitch._0_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->Pitch + 4) = local_28.TypedValue.Pitch._4_4_;
  *(undefined4 *)&__return_storage_ptr__->Yaw = local_28.TypedValue.Yaw._0_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->Yaw + 4) = local_28.TypedValue.Yaw._4_4_;
  __return_storage_ptr__->Roll = local_28.TypedValue.Roll;
  return __return_storage_ptr__;
}

// GetValue @ 146eef360

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRotator<double> * __thiscall
FValueOrBBKey_Rotator::GetValue
          (FValueOrBBKey_Rotator *this,TRotator<double> *__return_storage_ptr__,
          UBehaviorTreeComponent *param_1)

{
  TOptional<UE::Math::TRotator<double>_> local_30;
  
  if (param_1 == (UBehaviorTreeComponent *)0x0) {
    local_30.TypedValue.Pitch._0_4_ = *(undefined4 *)&(this->DefaultValue).Pitch;
    local_30.TypedValue.Pitch._4_4_ = *(undefined4 *)((longlong)&(this->DefaultValue).Pitch + 4);
    local_30.TypedValue.Yaw._0_4_ = *(undefined4 *)&(this->DefaultValue).Yaw;
    local_30.TypedValue.Yaw._4_4_ = *(undefined4 *)((longlong)&(this->DefaultValue).Yaw + 4);
    local_30.TypedValue.Roll = (this->DefaultValue).Roll;
  }
  else if ((((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) ||
           (this->_padding_ == 0)) ||
          (FBlackboard::TryGetBlackboardKeyValue<UBlackboardKeyType_Rotator>
                     (&local_30,(UBlackboardComponent *)param_1->_padding_,(FName *)this,
                      (FKey *)&this->_padding_), local_30.bIsSet == false)) {
    local_30.TypedValue.Pitch._0_4_ = *(undefined4 *)&(this->DefaultValue).Pitch;
    local_30.TypedValue.Pitch._4_4_ = *(undefined4 *)((longlong)&(this->DefaultValue).Pitch + 4);
    local_30.TypedValue.Yaw._0_4_ = *(undefined4 *)&(this->DefaultValue).Yaw;
    local_30.TypedValue.Yaw._4_4_ = *(undefined4 *)((longlong)&(this->DefaultValue).Yaw + 4);
    local_30.TypedValue.Roll = (this->DefaultValue).Roll;
  }
  __return_storage_ptr__->Pitch =
       (double)CONCAT44(local_30.TypedValue.Pitch._4_4_,local_30.TypedValue.Pitch._0_4_);
  __return_storage_ptr__->Yaw =
       (double)CONCAT44(local_30.TypedValue.Yaw._4_4_,local_30.TypedValue.Yaw._0_4_);
  __return_storage_ptr__->Roll = local_30.TypedValue.Roll;
  return __return_storage_ptr__;
}

// GetValue @ 146eef400

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRotator<double> * __thiscall
FValueOrBBKey_Rotator::GetValue
          (FValueOrBBKey_Rotator *this,TRotator<double> *__return_storage_ptr__,
          UBlackboardComponent *param_1)

{
  TOptional<UE::Math::TRotator<double>_> local_30;
  
  if (param_1 == (UBlackboardComponent *)0x0) {
    local_30.TypedValue.Pitch._0_4_ = *(undefined4 *)&(this->DefaultValue).Pitch;
    local_30.TypedValue.Pitch._4_4_ = *(undefined4 *)((longlong)&(this->DefaultValue).Pitch + 4);
    local_30.TypedValue.Yaw._0_4_ = *(undefined4 *)&(this->DefaultValue).Yaw;
    local_30.TypedValue.Yaw._4_4_ = *(undefined4 *)((longlong)&(this->DefaultValue).Yaw + 4);
    local_30.TypedValue.Roll = (this->DefaultValue).Roll;
  }
  else if ((this->_padding_ == 0) ||
          (FBlackboard::TryGetBlackboardKeyValue<UBlackboardKeyType_Rotator>
                     (&local_30,param_1,(FName *)this,(FKey *)&this->_padding_),
          local_30.bIsSet == false)) {
    local_30.TypedValue.Pitch._0_4_ = *(undefined4 *)&(this->DefaultValue).Pitch;
    local_30.TypedValue.Pitch._4_4_ = *(undefined4 *)((longlong)&(this->DefaultValue).Pitch + 4);
    local_30.TypedValue.Yaw._0_4_ = *(undefined4 *)&(this->DefaultValue).Yaw;
    local_30.TypedValue.Yaw._4_4_ = *(undefined4 *)((longlong)&(this->DefaultValue).Yaw + 4);
    local_30.TypedValue.Roll = (this->DefaultValue).Roll;
  }
  __return_storage_ptr__->Pitch =
       (double)CONCAT44(local_30.TypedValue.Pitch._4_4_,local_30.TypedValue.Pitch._0_4_);
  __return_storage_ptr__->Yaw =
       (double)CONCAT44(local_30.TypedValue.Yaw._4_4_,local_30.TypedValue.Yaw._0_4_);
  __return_storage_ptr__->Roll = local_30.TypedValue.Roll;
  return __return_storage_ptr__;
}

// SerializeFromMismatchedTag @ 146efe670

bool __thiscall
FValueOrBBKey_Rotator::SerializeFromMismatchedTag
          (FValueOrBBKey_Rotator *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  FName FVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  FArchive *pFVar3;
  FName FVar4;
  FSlotBase local_res10;
  
  FVar1 = param_1->Type;
  FVar2 = FNameEntryId::FromValidEName((EName)&local_res10);
  FVar4.Number = 0;
  FVar4.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar2.Value);
  if (FVar1 == FVar4) {
    local_res10.StructuredArchive = (FStructuredArchive *)param_2;
    pFVar3 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
    UE::Math::operator<<(pFVar3,&this->DefaultValue);
    return true;
  }
  return false;
}

// ToString @ 146f02a50

FString * __thiscall
FValueOrBBKey_Rotator::ToString(FValueOrBBKey_Rotator *this,FString *__return_storage_ptr__)

{
  if (this->_padding_ != 0) {
    FValueOrBlackboardKeyBase::ToStringKeyName
              ((FValueOrBlackboardKeyBase *)this,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"P=%f Y=%f R=%f");
  return __return_storage_ptr__;
}

