// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 9

// StaticStruct @ 146eb05a0

UScriptStruct * __cdecl FValueOrBBKey_Object::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FValueOrBBKey_Object.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FValueOrBBKey_Object.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FValueOrBBKey_Object,(UObject *)pUVar1,
                         L"ValueOrBBKey_Object");
  }
  return Z_Registration_Info_UScriptStruct_FValueOrBBKey_Object.OuterSingleton;
}

// GetValue<UAnimationAsset> @ 146eb4a70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UAnimationAsset * __thiscall
FValueOrBBKey_Object::GetValue<UAnimationAsset>
          (FValueOrBBKey_Object *this,UBehaviorTreeComponent *param_1)

{
  int iVar1;
  TObjectPtr<UObject>_u_0 TVar2;
  UClass *pUVar3;
  TObjectPtr<UObject>_u_0 local_res8 [4];
  
  TVar2 = (TObjectPtr<UObject>_u_0)(this->DefaultValue).field0_0x0.DebugPtr;
  local_res8[0] = TVar2;
  if ((UBlackboardComponent *)param_1->_padding_ != (UBlackboardComponent *)0x0) {
    TVar2.DebugPtr =
         FBlackboard::GetValue<UBlackboardKeyType_Object>
                   ((UBlackboardComponent *)param_1->_padding_,(FName *)this,
                    (FKey *)&this->_padding_,&local_res8[0].DebugPtr);
  }
  if ((UAnimationAsset *)TVar2.DebugPtr != (UAnimationAsset *)0x0) {
    pUVar3 = Z_Construct_UClass_UAnimationAsset_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&(TVar2.DebugPtr)->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&(TVar2.DebugPtr)->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return (UAnimationAsset *)TVar2.DebugPtr;
    }
  }
  return (UAnimationAsset *)0x0;
}

// GetValue @ 146eef190

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __thiscall
FValueOrBBKey_Object::GetValue(FValueOrBBKey_Object *this,UBehaviorTreeComponent *param_1)

{
  TObjectPtr<UObject>_u_0 local_res8 [4];
  
  local_res8[0] = (TObjectPtr<UObject>_u_0)(this->DefaultValue).field0_0x0.DebugPtr;
  if ((UBlackboardComponent *)param_1->_padding_ != (UBlackboardComponent *)0x0) {
    local_res8[0].DebugPtr =
         FBlackboard::GetValue<UBlackboardKeyType_Object>
                   ((UBlackboardComponent *)param_1->_padding_,(FName *)this,
                    (FKey *)&this->_padding_,&local_res8[0].DebugPtr);
  }
  return local_res8[0].DebugPtr;
}

// GetValue @ 146eef1d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __thiscall
FValueOrBBKey_Object::GetValue(FValueOrBBKey_Object *this,UBlackboardComponent *param_1)

{
  UObject *pUVar1;
  TObjectPtr<UObject>_u_0 local_res8 [4];
  
  local_res8[0] = (this->DefaultValue).field0_0x0;
  pUVar1 = FBlackboard::GetValue<UBlackboardKeyType_Object>
                     (param_1,(FName *)this,(FKey *)&this->_padding_,&local_res8[0].DebugPtr);
  return pUVar1;
}

// GetValue @ 146eef200

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __thiscall
FValueOrBBKey_Object::GetValue(FValueOrBBKey_Object *this,UBehaviorTreeComponent *param_1)

{
  TObjectPtr<UObject>_u_0 local_res10 [3];
  
  local_res10[0] = (TObjectPtr<UObject>_u_0)(this->DefaultValue).field0_0x0.DebugPtr;
  if (param_1 != (UBehaviorTreeComponent *)0x0) {
    if ((UBlackboardComponent *)param_1->_padding_ != (UBlackboardComponent *)0x0) {
      local_res10[0].DebugPtr =
           FBlackboard::GetValue<UBlackboardKeyType_Object>
                     ((UBlackboardComponent *)param_1->_padding_,(FName *)this,
                      (FKey *)&this->_padding_,&local_res10[0].DebugPtr);
    }
  }
  return local_res10[0].DebugPtr;
}

// GetValue @ 146eef240

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __thiscall
FValueOrBBKey_Object::GetValue(FValueOrBBKey_Object *this,UBlackboardComponent *param_1)

{
  TObjectPtr<UObject>_u_0 local_res10 [3];
  
  local_res10[0] = (TObjectPtr<UObject>_u_0)(this->DefaultValue).field0_0x0.DebugPtr;
  if (param_1 != (UBlackboardComponent *)0x0) {
    local_res10[0].DebugPtr =
         FBlackboard::GetValue<UBlackboardKeyType_Object>
                   (param_1,(FName *)this,(FKey *)&this->_padding_,&local_res10[0].DebugPtr);
  }
  return local_res10[0].DebugPtr;
}

// SerializeFromMismatchedTag @ 146efe600

bool __thiscall
FValueOrBBKey_Object::SerializeFromMismatchedTag
          (FValueOrBBKey_Object *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

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

// SetBaseClass @ 146efeab0

void __thiscall FValueOrBBKey_Object::SetBaseClass(FValueOrBBKey_Object *this,UClass *param_1)

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
    if (bVar3) goto LAB_146efeb13;
  }
  this->_padding_ = 0;
  (this->DefaultValue).field0_0x0.DebugPtr = (UObject *)0x0;
LAB_146efeb13:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->BaseClass).field0_0x0.DebugPtr = param_1;
  return;
}

// ToString @ 146f029f0

FString * __thiscall
FValueOrBBKey_Object::ToString(FValueOrBBKey_Object *this,FString *__return_storage_ptr__)

{
  UObject *pUVar1;
  FName local_res8 [4];
  
  if (this->_padding_ != 0) {
    FValueOrBlackboardKeyBase::ToStringKeyName
              ((FValueOrBlackboardKeyBase *)this,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  pUVar1 = (this->DefaultValue).field0_0x0.DebugPtr;
  if (pUVar1 == (UObject *)0x0) {
    ::FString::FString(__return_storage_ptr__,L"None");
    return __return_storage_ptr__;
  }
  local_res8[0].ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
  local_res8[0].Number = *(uint *)&pUVar1->field_0x1c;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

