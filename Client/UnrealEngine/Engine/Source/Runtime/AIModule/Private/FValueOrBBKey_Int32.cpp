// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 7

// StaticStruct @ 146eb0340

UScriptStruct * __cdecl FValueOrBBKey_Int32::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FValueOrBBKey_Int32.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FValueOrBBKey_Int32.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FValueOrBBKey_Int32,(UObject *)pUVar1,
                         L"ValueOrBBKey_Int32");
  }
  return Z_Registration_Info_UScriptStruct_FValueOrBBKey_Int32.OuterSingleton;
}

// GetValue @ 146eeee90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
FValueOrBBKey_Int32::GetValue(FValueOrBBKey_Int32 *this,UBehaviorTreeComponent *param_1)

{
  int iVar1;
  
  if ((UBlackboardComponent *)param_1->_padding_ != (UBlackboardComponent *)0x0) {
    iVar1 = FBlackboard::GetValue<UBlackboardKeyType_Int>
                      ((UBlackboardComponent *)param_1->_padding_,(FName *)this,
                       (FKey *)&this->_padding_,&this->DefaultValue);
    return iVar1;
  }
  return this->DefaultValue;
}

// GetValue @ 146eeeec0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
FValueOrBBKey_Int32::GetValue(FValueOrBBKey_Int32 *this,UBlackboardComponent *param_1)

{
  int iVar1;
  
  iVar1 = FBlackboard::GetValue<UBlackboardKeyType_Int>
                    (param_1,(FName *)this,(FKey *)&this->_padding_,&this->DefaultValue);
  return iVar1;
}

// GetValue @ 146eeeee0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
FValueOrBBKey_Int32::GetValue(FValueOrBBKey_Int32 *this,UBehaviorTreeComponent *param_1)

{
  int iVar1;
  
  if ((param_1 != (UBehaviorTreeComponent *)0x0) &&
     ((UBlackboardComponent *)param_1->_padding_ != (UBlackboardComponent *)0x0)) {
    iVar1 = FBlackboard::GetValue<UBlackboardKeyType_Int>
                      ((UBlackboardComponent *)param_1->_padding_,(FName *)this,
                       (FKey *)&this->_padding_,&this->DefaultValue);
    return iVar1;
  }
  return this->DefaultValue;
}

// GetValue @ 146eeef10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
FValueOrBBKey_Int32::GetValue(FValueOrBBKey_Int32 *this,UBlackboardComponent *param_1)

{
  int iVar1;
  
  if (param_1 != (UBlackboardComponent *)0x0) {
    iVar1 = FBlackboard::GetValue<UBlackboardKeyType_Int>
                      (param_1,(FName *)this,(FKey *)&this->_padding_,&this->DefaultValue);
    return iVar1;
  }
  return this->DefaultValue;
}

// SerializeFromMismatchedTag @ 146efe4d0

bool __thiscall
FValueOrBBKey_Int32::SerializeFromMismatchedTag
          (FValueOrBBKey_Int32 *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  int *piVar1;
  FName FVar2;
  FArchive *this_00;
  int *piVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FName FVar5;
  FName FVar6;
  undefined1 local_res10 [8];
  
  FVar2 = param_1->Type;
  FVar4 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar6.Number = 0;
  FVar6.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar4.Value);
  if ((FVar2 != FVar6) &&
     (FVar2 = param_1->Type, FVar4 = FNameEntryId::FromValidEName((EName)local_res10),
     FVar5.Number = 0, FVar5.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar4.Value),
     FVar2 != FVar5)) {
    return false;
  }
  piVar1 = &this->DefaultValue;
  this_00 = *(FArchive **)(*(longlong *)param_2 + 8);
  piVar3 = (int *)**(undefined8 **)&this_00->field_0x8;
  if ((int *)(*(undefined8 **)&this_00->field_0x8)[1] < piVar3 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
  }
  return true;
}

// ToString @ 146f028d0

FString * __thiscall
FValueOrBBKey_Int32::ToString(FValueOrBBKey_Int32 *this,FString *__return_storage_ptr__)

{
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_38;
  FStringFormatArg local_28;
  
  if (this->_padding_ != 0) {
    FValueOrBlackboardKeyBase::ToStringKeyName
              ((FValueOrBlackboardKeyBase *)this,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  FStringFormatArg::FStringFormatArg(&local_28,this->DefaultValue);
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

