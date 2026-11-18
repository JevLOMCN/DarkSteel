// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 8

// StaticStruct @ 146eb0290

UScriptStruct * __cdecl FValueOrBBKey_Float::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FValueOrBBKey_Float.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FValueOrBBKey_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FValueOrBBKey_Float,(UObject *)pUVar1,
                         L"ValueOrBBKey_Float");
  }
  return Z_Registration_Info_UScriptStruct_FValueOrBBKey_Float.OuterSingleton;
}

// GetValue @ 146eeede0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
FValueOrBBKey_Float::GetValue(FValueOrBBKey_Float *this,UBehaviorTreeComponent *param_1)

{
  float fVar1;
  
  if ((UBlackboardComponent *)param_1->_padding_ != (UBlackboardComponent *)0x0) {
    fVar1 = FBlackboard::GetValue<UBlackboardKeyType_Float>
                      ((UBlackboardComponent *)param_1->_padding_,(FName *)this,
                       (FKey *)&this->_padding_,&this->DefaultValue);
    return fVar1;
  }
  return this->DefaultValue;
}

// GetValue @ 146eeee10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
FValueOrBBKey_Float::GetValue(FValueOrBBKey_Float *this,UBlackboardComponent *param_1)

{
  float fVar1;
  
  fVar1 = FBlackboard::GetValue<UBlackboardKeyType_Float>
                    (param_1,(FName *)this,(FKey *)&this->_padding_,&this->DefaultValue);
  return fVar1;
}

// GetValue @ 146eeee30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
FValueOrBBKey_Float::GetValue(FValueOrBBKey_Float *this,UBehaviorTreeComponent *param_1)

{
  float fVar1;
  
  if ((param_1 != (UBehaviorTreeComponent *)0x0) &&
     ((UBlackboardComponent *)param_1->_padding_ != (UBlackboardComponent *)0x0)) {
    fVar1 = FBlackboard::GetValue<UBlackboardKeyType_Float>
                      ((UBlackboardComponent *)param_1->_padding_,(FName *)this,
                       (FKey *)&this->_padding_,&this->DefaultValue);
    return fVar1;
  }
  return this->DefaultValue;
}

// GetValue @ 146eeee60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

float __thiscall
FValueOrBBKey_Float::GetValue(FValueOrBBKey_Float *this,UBlackboardComponent *param_1)

{
  float fVar1;
  
  if (param_1 != (UBlackboardComponent *)0x0) {
    fVar1 = FBlackboard::GetValue<UBlackboardKeyType_Float>
                      (param_1,(FName *)this,(FKey *)&this->_padding_,&this->DefaultValue);
    return fVar1;
  }
  return this->DefaultValue;
}

// IsBoundOrNonZero @ 146ef38f0

bool __thiscall FValueOrBBKey_Float::IsBoundOrNonZero(FValueOrBBKey_Float *this)

{
  if ((this->_padding_ == 0) &&
     ((float)((uint)this->DefaultValue & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)
     ) {
    return false;
  }
  return true;
}

// SerializeFromMismatchedTag @ 146efe400

bool __thiscall
FValueOrBBKey_Float::SerializeFromMismatchedTag
          (FValueOrBBKey_Float *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  float *pfVar1;
  FName FVar2;
  FArchive *this_00;
  float *pfVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  FName FVar5;
  undefined1 local_res10 [8];
  
  FVar2 = param_1->Type;
  FVar4 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar5.Number = 0;
  FVar5.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
  if (FVar2 != FVar5) {
    return false;
  }
  pfVar1 = &this->DefaultValue;
  this_00 = *(FArchive **)(*(longlong *)param_2 + 8);
  pfVar3 = (float *)**(undefined8 **)&this_00->field_0x8;
  if (pfVar3 + 1 <= (float *)(*(undefined8 **)&this_00->field_0x8)[1]) {
    *pfVar1 = *pfVar3;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    return true;
  }
  if ((this_00->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,pfVar1,4);
    return true;
  }
  FArchive::SerializeByteOrderSwapped(this_00,(uint *)pfVar1);
  return true;
}

// ToString @ 146f02880

FString * __thiscall
FValueOrBBKey_Float::ToString(FValueOrBBKey_Float *this,FString *__return_storage_ptr__)

{
  if (this->_padding_ != 0) {
    FValueOrBlackboardKeyBase::ToStringKeyName
              ((FValueOrBlackboardKeyBase *)this,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%.2f");
  return __return_storage_ptr__;
}

