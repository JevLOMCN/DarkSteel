// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 8

// StaticStruct @ 146eb08b0

UScriptStruct * __cdecl FValueOrBBKey_Struct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FValueOrBBKey_Struct.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FValueOrBBKey_Struct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FValueOrBBKey_Struct,(UObject *)pUVar1,
                         L"ValueOrBBKey_Struct");
  }
  return Z_Registration_Info_UScriptStruct_FValueOrBBKey_Struct.OuterSingleton;
}

// GetValue @ 146eef910

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FConstStructView * __thiscall
FValueOrBBKey_Struct::GetValue
          (FValueOrBBKey_Struct *this,FConstStructView *__return_storage_ptr__,
          UBehaviorTreeComponent *param_1)

{
  UScriptStruct *pUVar1;
  uchar *puVar2;
  FConstStructView local_18;
  
  pUVar1 = (this->DefaultValue).ScriptStruct.field0_0x0.DebugPtr;
  puVar2 = (this->DefaultValue).StructMemory;
  if (((UBlackboardComponent *)param_1->_padding_ != (UBlackboardComponent *)0x0) &&
     (this->_padding_ != 0)) {
    FBlackboard::TryGetBlackboardKeyStruct
              (&local_18,(UBlackboardComponent *)param_1->_padding_,(FName *)this,
               (FKey *)&this->_padding_,pUVar1);
    if ((local_18.StructMemory != (uchar *)0x0) && (local_18.ScriptStruct != (UScriptStruct *)0x0))
    {
      __return_storage_ptr__->ScriptStruct = local_18.ScriptStruct;
      __return_storage_ptr__->StructMemory = local_18.StructMemory;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->ScriptStruct = pUVar1;
  __return_storage_ptr__->StructMemory = puVar2;
  return __return_storage_ptr__;
}

// GetValue @ 146eef9a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FConstStructView * __thiscall
FValueOrBBKey_Struct::GetValue
          (FValueOrBBKey_Struct *this,FConstStructView *__return_storage_ptr__,
          UBlackboardComponent *param_1)

{
  UScriptStruct *pUVar1;
  uchar *puVar2;
  FConstStructView local_18;
  
  pUVar1 = (this->DefaultValue).ScriptStruct.field0_0x0.DebugPtr;
  puVar2 = (this->DefaultValue).StructMemory;
  if (this->_padding_ != 0) {
    FBlackboard::TryGetBlackboardKeyStruct
              (&local_18,param_1,(FName *)this,(FKey *)&this->_padding_,pUVar1);
    if ((local_18.StructMemory != (uchar *)0x0) && (local_18.ScriptStruct != (UScriptStruct *)0x0))
    {
      __return_storage_ptr__->ScriptStruct = local_18.ScriptStruct;
      __return_storage_ptr__->StructMemory = local_18.StructMemory;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->ScriptStruct = pUVar1;
  __return_storage_ptr__->StructMemory = puVar2;
  return __return_storage_ptr__;
}

// GetValue @ 146eefa30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FConstStructView * __thiscall
FValueOrBBKey_Struct::GetValue
          (FValueOrBBKey_Struct *this,FConstStructView *__return_storage_ptr__,
          UBehaviorTreeComponent *param_1)

{
  TObjectPtr<UScriptStruct_const_>_u_0 TVar1;
  uchar *puVar2;
  TObjectPtr<UScriptStruct_const_>_u_0 local_18;
  uchar *puStack_10;
  
  TVar1 = (TObjectPtr<UScriptStruct_const_>_u_0)
          (this->DefaultValue).ScriptStruct.field0_0x0.DebugPtr;
  puVar2 = (this->DefaultValue).StructMemory;
  if ((((param_1 != (UBehaviorTreeComponent *)0x0) &&
       ((UBlackboardComponent *)param_1->_padding_ != (UBlackboardComponent *)0x0)) &&
      (this->_padding_ != 0)) &&
     ((FBlackboard::TryGetBlackboardKeyStruct
                 ((FConstStructView *)&local_18.ObjectPtr,(UBlackboardComponent *)param_1->_padding_
                  ,(FName *)this,(FKey *)&this->_padding_,TVar1.DebugPtr),
      puStack_10 != (uchar *)0x0 && (local_18.DebugPtr != (UScriptStruct *)0x0)))) {
    TVar1 = local_18;
    puVar2 = puStack_10;
  }
  puStack_10 = puVar2;
  local_18 = TVar1;
  __return_storage_ptr__->ScriptStruct = (UScriptStruct *)local_18;
  __return_storage_ptr__->StructMemory = puStack_10;
  return __return_storage_ptr__;
}

// GetValue @ 146eefad0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FConstStructView * __thiscall
FValueOrBBKey_Struct::GetValue
          (FValueOrBBKey_Struct *this,FConstStructView *__return_storage_ptr__,
          UBlackboardComponent *param_1)

{
  TObjectPtr<UScriptStruct_const_>_u_0 TVar1;
  uchar *puVar2;
  TObjectPtr<UScriptStruct_const_>_u_0 local_18;
  uchar *puStack_10;
  
  TVar1 = (TObjectPtr<UScriptStruct_const_>_u_0)
          (this->DefaultValue).ScriptStruct.field0_0x0.DebugPtr;
  puVar2 = (this->DefaultValue).StructMemory;
  if ((((param_1 != (UBlackboardComponent *)0x0) && (this->_padding_ != 0)) &&
      (FBlackboard::TryGetBlackboardKeyStruct
                 ((FConstStructView *)&local_18.ObjectPtr,param_1,(FName *)this,
                  (FKey *)&this->_padding_,TVar1.DebugPtr), puStack_10 != (uchar *)0x0)) &&
     (local_18.DebugPtr != (UScriptStruct *)0x0)) {
    TVar1 = local_18;
    puVar2 = puStack_10;
  }
  puStack_10 = puVar2;
  local_18 = TVar1;
  __return_storage_ptr__->ScriptStruct = (UScriptStruct *)local_18;
  __return_storage_ptr__->StructMemory = puStack_10;
  return __return_storage_ptr__;
}

// SerializeFromMismatchedTag @ 146efe760

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FValueOrBBKey_Struct::SerializeFromMismatchedTag
          (FValueOrBBKey_Struct *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  FName FVar1;
  UScriptStruct *pUVar2;
  FNameEntryId FVar3;
  int iVar4;
  FPropertyTypeName FVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FString *pFVar6;
  size_t sVar7;
  UClass *pUVar8;
  UScriptStruct *this_00;
  uchar *_Dst;
  ulong64 _Size;
  FName FVar9;
  FPropertyTypeName local_res10 [2];
  undefined1 local_res20 [8];
  FName local_48 [2];
  TStringView<wchar_t> local_38;
  FString local_28;
  
  FVar1 = param_1->Type;
  FVar3 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar9.Number = 0;
  FVar9.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  if (FVar1 != FVar9) {
    return false;
  }
  local_res10[0].Index = (param_1->TypeName).Index;
  iVar4 = UE::FPropertyTypeName::GetParameterCount(local_res10);
  if (iVar4 < 1) {
    return false;
  }
  local_res10[0].Index = (param_1->TypeName).Index;
  FVar5 = UE::FPropertyTypeName::GetParameter(local_res10,(int)local_res20);
  UE::FPropertyTypeName::GetName((FPropertyTypeName *)CONCAT44(extraout_var_00,FVar5.Index));
  pFVar6 = ::FName::ToString(local_48,&local_28);
  if ((pFVar6->Data).ArrayNum == 0) {
    local_38.DataPtr = L"";
  }
  else {
    local_38.DataPtr = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    local_38.Size = 0;
    if ((FScriptContainerElement *)local_38.DataPtr == (FScriptContainerElement *)0x0)
    goto LAB_146efe81d;
  }
  sVar7 = wcslen(local_38.DataPtr);
  local_38.Size = (int)sVar7;
LAB_146efe81d:
  pUVar8 = Z_Construct_UClass_UScriptStruct_NoRegister();
  this_00 = (UScriptStruct *)
            StaticFindFirstObject(pUVar8,&local_38,NativeFirst,NoLogging,(wchar_t *)0x0);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((this_00 != (UScriptStruct *)0x0) &&
     ((pUVar2 = (this->DefaultValue).ScriptStruct.field0_0x0.DebugPtr, this_00 == pUVar2 ||
      (pUVar2 == (UScriptStruct *)0x0)))) {
    iVar4 = (int)*(short *)((longlong)&this_00->_padding_ + 4);
    _Size = (ulong64)((int)this_00->_padding_ + -1 + iVar4 & -iVar4);
    _Dst = operator_new__(_Size);
    if (_Dst == (uchar *)0x0) {
      _Dst = (uchar *)0x0;
    }
    else {
      memset(_Dst,0,_Size);
    }
    (**(code **)(this_00->_padding_ + 0x2f8))(this_00,_Dst,1);
    UScriptStruct::SerializeItem(this_00,param_2,_Dst,(void *)0x0);
    FInstancedStruct::InitializeAs(&this->DefaultValue,this_00,_Dst);
    operator_delete__(_Dst);
    return true;
  }
  return false;
}

// SetStructType @ 146effca0

void __thiscall
FValueOrBBKey_Struct::SetStructType(FValueOrBBKey_Struct *this,UScriptStruct *param_1)

{
  if (param_1 != (this->DefaultValue).ScriptStruct.field0_0x0.DebugPtr) {
    FInstancedStruct::InitializeAs(&this->DefaultValue,param_1,(uchar *)0x0);
    this->_padding_ = 0;
  }
  return;
}

// ToString @ 146f02ab0

FString * __thiscall
FValueOrBBKey_Struct::ToString(FValueOrBBKey_Struct *this,FString *__return_storage_ptr__)

{
  UScriptStruct *pUVar1;
  FName local_res8 [4];
  
  if (this->_padding_ != 0) {
    FValueOrBlackboardKeyBase::ToStringKeyName
              ((FValueOrBlackboardKeyBase *)this,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  pUVar1 = (this->DefaultValue).ScriptStruct.field0_0x0.DebugPtr;
  if (pUVar1 == (UScriptStruct *)0x0) {
    ::FString::FString(__return_storage_ptr__,L"None");
    return __return_storage_ptr__;
  }
  local_res8[0] = (FName)pUVar1->_padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

