// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 9

// StaticStruct @ 146eb0190

UScriptStruct * __cdecl FValueOrBBKey_Enum::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FValueOrBBKey_Enum.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FValueOrBBKey_Enum.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FValueOrBBKey_Enum,(UObject *)pUVar1,
                         L"ValueOrBBKey_Enum");
  }
  return Z_Registration_Info_UScriptStruct_FValueOrBBKey_Enum.OuterSingleton;
}

// FValueOrBBKey_Enum<enum_EBTNodeResult::Type> @ 146eb0c60

FValueOrBBKey_Enum * __thiscall
FValueOrBBKey_Enum::FValueOrBBKey_Enum<enum_EBTNodeResult::Type>
          (FValueOrBBKey_Enum *this,Type param_1)

{
  UEnum *pUVar1;
  UPackage *pUVar2;
  FName local_res8 [4];
  
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0xffff;
  this->DefaultValue = (uchar)param_1;
  if (Z_Registration_Info_UEnum_EBTNodeResult.OuterSingleton == (UEnum *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UEnum_EBTNodeResult.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_AIModule_EBTNodeResult,(UObject *)pUVar2,L"EBTNodeResult");
  }
  pUVar1 = Z_Registration_Info_UEnum_EBTNodeResult.OuterSingleton;
  (this->EnumType).field0_0x0.DebugPtr = Z_Registration_Info_UEnum_EBTNodeResult.OuterSingleton;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  pUVar1 = (this->EnumType).field0_0x0.DebugPtr;
  if (pUVar1 == (UEnum *)0x0) {
    ::FString::FString(&this->NativeEnumTypeName,L"None");
    return this;
  }
  local_res8[0] = (FName)pUVar1->_padding_;
  ::FName::ToString(local_res8,&this->NativeEnumTypeName);
  return this;
}

// GetValue @ 146eeed30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uchar __thiscall
FValueOrBBKey_Enum::GetValue(FValueOrBBKey_Enum *this,UBehaviorTreeComponent *param_1)

{
  uchar uVar1;
  
  if ((UBlackboardComponent *)param_1->_padding_ != (UBlackboardComponent *)0x0) {
    uVar1 = FBlackboard::GetValue<UBlackboardKeyType_Enum>
                      ((UBlackboardComponent *)param_1->_padding_,(FName *)this,
                       (FKey *)&this->_padding_,&this->DefaultValue);
    return uVar1;
  }
  return this->DefaultValue;
}

// GetValue @ 146eeed60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uchar __thiscall
FValueOrBBKey_Enum::GetValue(FValueOrBBKey_Enum *this,UBlackboardComponent *param_1)

{
  uchar uVar1;
  
  uVar1 = FBlackboard::GetValue<UBlackboardKeyType_Enum>
                    (param_1,(FName *)this,(FKey *)&this->_padding_,&this->DefaultValue);
  return uVar1;
}

// GetValue @ 146eeed80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uchar __thiscall
FValueOrBBKey_Enum::GetValue(FValueOrBBKey_Enum *this,UBehaviorTreeComponent *param_1)

{
  uchar uVar1;
  
  if ((param_1 != (UBehaviorTreeComponent *)0x0) &&
     ((UBlackboardComponent *)param_1->_padding_ != (UBlackboardComponent *)0x0)) {
    uVar1 = FBlackboard::GetValue<UBlackboardKeyType_Enum>
                      ((UBlackboardComponent *)param_1->_padding_,(FName *)this,
                       (FKey *)&this->_padding_,&this->DefaultValue);
    return uVar1;
  }
  return this->DefaultValue;
}

// GetValue @ 146eeedb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uchar __thiscall
FValueOrBBKey_Enum::GetValue(FValueOrBBKey_Enum *this,UBlackboardComponent *param_1)

{
  uchar uVar1;
  
  if (param_1 != (UBlackboardComponent *)0x0) {
    uVar1 = FBlackboard::GetValue<UBlackboardKeyType_Enum>
                      (param_1,(FName *)this,(FKey *)&this->_padding_,&this->DefaultValue);
    return uVar1;
  }
  return this->DefaultValue;
}

// SerializeFromMismatchedTag @ 146efe280

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FValueOrBBKey_Enum::SerializeFromMismatchedTag
          (FValueOrBBKey_Enum *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  FName FVar1;
  FNameEntryId FVar2;
  int iVar3;
  FPropertyTypeName FVar4;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  FString *pFVar5;
  size_t sVar6;
  UClass *pUVar7;
  UEnum *this_00;
  long64 lVar8;
  FName FVar9;
  FName FVar10;
  FPropertyTypeName local_res10 [4];
  FName local_res20;
  FName local_48 [2];
  TStringView<wchar_t> local_38;
  FString local_28;
  
  FVar1 = param_1->Type;
  FVar2 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar10.Number = 0;
  FVar10.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar2.Value);
  if ((FVar1 != FVar10) &&
     (FVar1 = param_1->Type, FVar2 = FNameEntryId::FromValidEName((EName)local_res10),
     FVar9.Number = 0, FVar9.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar2.Value),
     FVar1 != FVar9)) {
    return false;
  }
  local_res10[0].Index = (param_1->TypeName).Index;
  iVar3 = UE::FPropertyTypeName::GetParameterCount(local_res10);
  if (iVar3 < 1) {
    return false;
  }
  local_res10[0].Index = (param_1->TypeName).Index;
  FVar4 = UE::FPropertyTypeName::GetParameter(local_res10,(int)&local_res20);
  UE::FPropertyTypeName::GetName((FPropertyTypeName *)CONCAT44(extraout_var_01,FVar4.Index));
  pFVar5 = ::FName::ToString(local_48,&local_28);
  local_38.Size = 0;
  if ((pFVar5->Data).ArrayNum == 0) {
    local_38.DataPtr = L"";
  }
  else {
    local_38.DataPtr = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    if ((FScriptContainerElement *)local_38.DataPtr == (FScriptContainerElement *)0x0)
    goto LAB_146efe35a;
  }
  sVar6 = wcslen(local_38.DataPtr);
  local_38.Size = (int)sVar6;
LAB_146efe35a:
  pUVar7 = Z_Construct_UClass_UEnum_NoRegister();
  this_00 = (UEnum *)StaticFindFirstObject(pUVar7,&local_38,NativeFirst,NoLogging,(wchar_t *)0x0);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (this_00 == (UEnum *)0x0) {
    return false;
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x178))
            (*(longlong **)(*(longlong *)param_2 + 8),&local_res20);
  lVar8 = UEnum::GetValueByName(this_00,local_res20,None);
  this->DefaultValue = (uchar)lVar8;
  return true;
}

// SetEnumType @ 146eff7e0

void __thiscall FValueOrBBKey_Enum::SetEnumType(FValueOrBBKey_Enum *this,UEnum *param_1)

{
  UEnum *pUVar1;
  code *pcVar2;
  TTuple<FName,__int64> *pTVar3;
  bool bVar4;
  TTuple<FName,__int64> local_18;
  
  pUVar1 = (this->EnumType).field0_0x0.DebugPtr;
  if (pUVar1 == (UEnum *)0x0) {
    bVar4 = param_1 == (UEnum *)0x0;
  }
  else {
    bVar4 = pUVar1 == param_1;
  }
  if (!bVar4) {
    this->_padding_ = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (param_1 == (UEnum *)0x0)) {
      (this->EnumType).field0_0x0.DebugPtr = param_1;
      if (param_1 == (UEnum *)0x0) {
        return;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)param_1);
      (this->EnumType).field0_0x0.DebugPtr = param_1;
    }
    if (((param_1->Names).NumValues < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Names.IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xb2d,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar3 = UEnum::FNameData::operator[](&param_1->Names,&local_18,0);
    this->DefaultValue = pTVar3->field_0x8;
  }
  return;
}

// ToString @ 146f027b0

FString * __thiscall
FValueOrBBKey_Enum::ToString(FValueOrBBKey_Enum *this,FString *__return_storage_ptr__)

{
  UEnum *this_00;
  FString *pFVar1;
  bool bVar2;
  FString local_28;
  FString local_18;
  
  if (this->_padding_ != 0) {
    FValueOrBlackboardKeyBase::ToStringKeyName
              ((FValueOrBlackboardKeyBase *)this,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  this_00 = (this->EnumType).field0_0x0.DebugPtr;
  bVar2 = this_00 == (UEnum *)0x0;
  if (bVar2) {
    pFVar1 = ::FString::FString(&local_28,L"Invalid Enum");
  }
  else {
    pFVar1 = UEnum::GetNameStringByValue(this_00,&local_18,(ulonglong)this->DefaultValue);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar1->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  if (bVar2) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

