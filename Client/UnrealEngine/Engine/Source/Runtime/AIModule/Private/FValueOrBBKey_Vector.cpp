// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 7

// StaticStruct @ 146eb07a0

UScriptStruct * __cdecl FValueOrBBKey_Vector::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FValueOrBBKey_Vector.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FValueOrBBKey_Vector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FValueOrBBKey_Vector,(UObject *)pUVar1,
                         L"ValueOrBBKey_Vector");
  }
  return Z_Registration_Info_UScriptStruct_FValueOrBBKey_Vector.OuterSingleton;
}

// GetValue @ 146eefb60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
FValueOrBBKey_Vector::GetValue
          (FValueOrBBKey_Vector *this,TVector<double> *__return_storage_ptr__,
          UBehaviorTreeComponent *param_1)

{
  TVector<double>_u_0 local_28;
  char local_10;
  
  if ((((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) ||
      (this->_padding_ == 0)) ||
     (FBlackboard::TryGetBlackboardKeyValue<UBlackboardKeyType_Vector>
                ((TOptional<UE::Math::TVector<double>_> *)&local_28._s_0,
                 (UBlackboardComponent *)param_1->_padding_,(FName *)this,(FKey *)&this->_padding_),
     local_10 == '\0')) {
    local_28._0_4_ = *(undefined4 *)&(this->DefaultValue).field0_0x0;
    local_28._4_4_ = *(undefined4 *)((longlong)&(this->DefaultValue).field0_0x0 + 4);
    local_28._8_4_ = *(undefined4 *)((longlong)&(this->DefaultValue).field0_0x0 + 8);
    local_28._12_4_ = *(undefined4 *)((longlong)&(this->DefaultValue).field0_0x0 + 0xc);
    local_28._s_0.Z = (this->DefaultValue).field0_0x0._s_0.Z;
  }
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = local_28._0_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = local_28._4_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = local_28._8_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = local_28._12_4_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// GetValue @ 146eefbd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
FValueOrBBKey_Vector::GetValue
          (FValueOrBBKey_Vector *this,TVector<double> *__return_storage_ptr__,
          UBlackboardComponent *param_1)

{
  TVector<double>_u_0 local_28;
  char local_10;
  
  if ((this->_padding_ == 0) ||
     (FBlackboard::TryGetBlackboardKeyValue<UBlackboardKeyType_Vector>
                ((TOptional<UE::Math::TVector<double>_> *)&local_28._s_0,param_1,(FName *)this,
                 (FKey *)&this->_padding_), local_10 == '\0')) {
    local_28._0_4_ = *(undefined4 *)&(this->DefaultValue).field0_0x0;
    local_28._4_4_ = *(undefined4 *)((longlong)&(this->DefaultValue).field0_0x0 + 4);
    local_28._8_4_ = *(undefined4 *)((longlong)&(this->DefaultValue).field0_0x0 + 8);
    local_28._12_4_ = *(undefined4 *)((longlong)&(this->DefaultValue).field0_0x0 + 0xc);
    local_28._s_0.Z = (this->DefaultValue).field0_0x0._s_0.Z;
  }
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = local_28._0_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = local_28._4_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = local_28._8_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = local_28._12_4_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_28._s_0.Z;
  return __return_storage_ptr__;
}

// GetValue @ 146eefc40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
FValueOrBBKey_Vector::GetValue
          (FValueOrBBKey_Vector *this,TVector<double> *__return_storage_ptr__,
          UBehaviorTreeComponent *param_1)

{
  TVector<double>_u_0 local_30;
  char local_18;
  
  if (param_1 == (UBehaviorTreeComponent *)0x0) {
    local_30._0_4_ = *(undefined4 *)&(this->DefaultValue).field0_0x0;
    local_30._4_4_ = *(undefined4 *)((longlong)&(this->DefaultValue).field0_0x0 + 4);
    local_30._8_4_ = *(undefined4 *)((longlong)&(this->DefaultValue).field0_0x0 + 8);
    local_30._12_4_ = *(undefined4 *)((longlong)&(this->DefaultValue).field0_0x0 + 0xc);
    local_30._s_0.Z = (this->DefaultValue).field0_0x0._s_0.Z;
  }
  else if ((((UBlackboardComponent *)param_1->_padding_ == (UBlackboardComponent *)0x0) ||
           (this->_padding_ == 0)) ||
          (FBlackboard::TryGetBlackboardKeyValue<UBlackboardKeyType_Vector>
                     ((TOptional<UE::Math::TVector<double>_> *)&local_30._s_0,
                      (UBlackboardComponent *)param_1->_padding_,(FName *)this,
                      (FKey *)&this->_padding_), local_18 == '\0')) {
    local_30._0_4_ = *(undefined4 *)&(this->DefaultValue).field0_0x0;
    local_30._4_4_ = *(undefined4 *)((longlong)&(this->DefaultValue).field0_0x0 + 4);
    local_30._8_4_ = *(undefined4 *)((longlong)&(this->DefaultValue).field0_0x0 + 8);
    local_30._12_4_ = *(undefined4 *)((longlong)&(this->DefaultValue).field0_0x0 + 0xc);
    local_30._s_0.Z = (this->DefaultValue).field0_0x0._s_0.Z;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)CONCAT44(local_30._4_4_,local_30._0_4_);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)CONCAT44(local_30._12_4_,local_30._8_4_);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_30._s_0.Z;
  return __return_storage_ptr__;
}

// GetValue @ 146eefce0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
FValueOrBBKey_Vector::GetValue
          (FValueOrBBKey_Vector *this,TVector<double> *__return_storage_ptr__,
          UBlackboardComponent *param_1)

{
  TVector<double>_u_0 local_30;
  char local_18;
  
  if (param_1 == (UBlackboardComponent *)0x0) {
    local_30._0_4_ = *(undefined4 *)&(this->DefaultValue).field0_0x0;
    local_30._4_4_ = *(undefined4 *)((longlong)&(this->DefaultValue).field0_0x0 + 4);
    local_30._8_4_ = *(undefined4 *)((longlong)&(this->DefaultValue).field0_0x0 + 8);
    local_30._12_4_ = *(undefined4 *)((longlong)&(this->DefaultValue).field0_0x0 + 0xc);
    local_30._s_0.Z = (this->DefaultValue).field0_0x0._s_0.Z;
  }
  else if ((this->_padding_ == 0) ||
          (FBlackboard::TryGetBlackboardKeyValue<UBlackboardKeyType_Vector>
                     ((TOptional<UE::Math::TVector<double>_> *)&local_30._s_0,param_1,(FName *)this,
                      (FKey *)&this->_padding_), local_18 == '\0')) {
    local_30._0_4_ = *(undefined4 *)&(this->DefaultValue).field0_0x0;
    local_30._4_4_ = *(undefined4 *)((longlong)&(this->DefaultValue).field0_0x0 + 4);
    local_30._8_4_ = *(undefined4 *)((longlong)&(this->DefaultValue).field0_0x0 + 8);
    local_30._12_4_ = *(undefined4 *)((longlong)&(this->DefaultValue).field0_0x0 + 0xc);
    local_30._s_0.Z = (this->DefaultValue).field0_0x0._s_0.Z;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)CONCAT44(local_30._4_4_,local_30._0_4_);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)CONCAT44(local_30._12_4_,local_30._8_4_);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_30._s_0.Z;
  return __return_storage_ptr__;
}

// SerializeFromMismatchedTag @ 146efe930

bool __thiscall
FValueOrBBKey_Vector::SerializeFromMismatchedTag
          (FValueOrBBKey_Vector *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

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
    UE::Math::operator<<(param_2,&this->DefaultValue);
    return true;
  }
  return false;
}

// ToString @ 146f02b10

FString * __thiscall
FValueOrBBKey_Vector::ToString(FValueOrBBKey_Vector *this,FString *__return_storage_ptr__)

{
  if (this->_padding_ != 0) {
    FValueOrBlackboardKeyBase::ToStringKeyName
              ((FValueOrBlackboardKeyBase *)this,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"X=%3.3f Y=%3.3f Z=%3.3f");
  return __return_storage_ptr__;
}

