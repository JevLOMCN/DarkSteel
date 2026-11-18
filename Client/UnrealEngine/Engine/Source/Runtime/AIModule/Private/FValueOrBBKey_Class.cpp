// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 9

// StaticStruct @ 146eb00e0

UScriptStruct * __cdecl FValueOrBBKey_Class::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FValueOrBBKey_Class.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FValueOrBBKey_Class.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FValueOrBBKey_Class,(UObject *)pUVar1,
                         L"ValueOrBBKey_Class");
  }
  return Z_Registration_Info_UScriptStruct_FValueOrBBKey_Class.OuterSingleton;
}

// FValueOrBBKey_Class<UNavigationQueryFilter> @ 146eb0ba0

FValueOrBBKey_Class * __thiscall
FValueOrBBKey_Class::FValueOrBBKey_Class<UNavigationQueryFilter>
          (FValueOrBBKey_Class *this,TSubclassOf<UNavigationQueryFilter> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  
  pUVar5 = (UClass *)0x0;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0xffff;
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar4 = Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar5 = *(UClass **)param_1.Class.field0_0x0;
      }
    }
  }
  (this->DefaultValue).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUVar5 = Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
  (this->BaseClass).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  return this;
}

// GetValue @ 146eeec40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UClass * __thiscall
FValueOrBBKey_Class::GetValue(FValueOrBBKey_Class *this,UBehaviorTreeComponent *param_1)

{
  TObjectPtr<UClass>_u_0 local_res8 [4];
  
  local_res8[0] = (TObjectPtr<UClass>_u_0)(this->DefaultValue).field0_0x0.DebugPtr;
  if ((UBlackboardComponent *)param_1->_padding_ != (UBlackboardComponent *)0x0) {
    local_res8[0].DebugPtr =
         FBlackboard::GetValue<UBlackboardKeyType_Class>
                   ((UBlackboardComponent *)param_1->_padding_,(FName *)this,
                    (FKey *)&this->_padding_,&local_res8[0].DebugPtr);
  }
  return local_res8[0].DebugPtr;
}

// GetValue @ 146eeec80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UClass * __thiscall
FValueOrBBKey_Class::GetValue(FValueOrBBKey_Class *this,UBlackboardComponent *param_1)

{
  UClass *pUVar1;
  TObjectPtr<UClass>_u_0 local_res8 [4];
  
  local_res8[0] = (this->DefaultValue).field0_0x0;
  pUVar1 = FBlackboard::GetValue<UBlackboardKeyType_Class>
                     (param_1,(FName *)this,(FKey *)&this->_padding_,&local_res8[0].DebugPtr);
  return pUVar1;
}

// GetValue @ 146eeecb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UClass * __thiscall
FValueOrBBKey_Class::GetValue(FValueOrBBKey_Class *this,UBehaviorTreeComponent *param_1)

{
  TObjectPtr<UClass>_u_0 local_res10 [3];
  
  local_res10[0] = (TObjectPtr<UClass>_u_0)(this->DefaultValue).field0_0x0.DebugPtr;
  if (param_1 != (UBehaviorTreeComponent *)0x0) {
    if ((UBlackboardComponent *)param_1->_padding_ != (UBlackboardComponent *)0x0) {
      local_res10[0].DebugPtr =
           FBlackboard::GetValue<UBlackboardKeyType_Class>
                     ((UBlackboardComponent *)param_1->_padding_,(FName *)this,
                      (FKey *)&this->_padding_,&local_res10[0].DebugPtr);
    }
  }
  return local_res10[0].DebugPtr;
}

// GetValue @ 146eeecf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UClass * __thiscall
FValueOrBBKey_Class::GetValue(FValueOrBBKey_Class *this,UBlackboardComponent *param_1)

{
  TObjectPtr<UClass>_u_0 local_res10 [3];
  
  local_res10[0] = (TObjectPtr<UClass>_u_0)(this->DefaultValue).field0_0x0.DebugPtr;
  if (param_1 != (UBlackboardComponent *)0x0) {
    local_res10[0].DebugPtr =
         FBlackboard::GetValue<UBlackboardKeyType_Class>
                   (param_1,(FName *)this,(FKey *)&this->_padding_,&local_res10[0].DebugPtr);
  }
  return local_res10[0].DebugPtr;
}

// SerializeFromMismatchedTag @ 146efe210

bool __thiscall
FValueOrBBKey_Class::SerializeFromMismatchedTag
          (FValueOrBBKey_Class *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

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
    (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x150))
              (*(longlong **)(*(longlong *)param_2 + 8),&this->DefaultValue);
    return true;
  }
  return false;
}

// SetBaseClass @ 146efea20

void __thiscall FValueOrBBKey_Class::SetBaseClass(FValueOrBBKey_Class *this,UClass *param_1)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  
  pUVar2 = (this->BaseClass).field0_0x0.DebugPtr;
  if (pUVar2 == (UClass *)0x0) {
    bVar3 = param_1 == (UClass *)0x0;
  }
  else {
    bVar3 = pUVar2 == param_1;
  }
  if (bVar3) {
    return;
  }
  if ((pUVar2 != (UClass *)0x0) && (param_1 != (UClass *)0x0)) {
    iVar1 = (int)param_1->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &param_1->_padding_
       )) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_146efea83;
  }
  this->_padding_ = 0;
  (this->DefaultValue).field0_0x0.DebugPtr = (UClass *)0x0;
LAB_146efea83:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->BaseClass).field0_0x0.DebugPtr = param_1;
  return;
}

// ToString @ 146f02750

FString * __thiscall
FValueOrBBKey_Class::ToString(FValueOrBBKey_Class *this,FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  if (this->_padding_ != 0) {
    FValueOrBlackboardKeyBase::ToStringKeyName
              ((FValueOrBlackboardKeyBase *)this,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  pUVar1 = (this->DefaultValue).field0_0x0.DebugPtr;
  if (pUVar1 == (UClass *)0x0) {
    ::FString::FString(__return_storage_ptr__,L"None");
    return __return_storage_ptr__;
  }
  local_res8[0] = (FName)pUVar1->_padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

