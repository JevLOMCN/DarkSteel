// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 7

// StaticStruct @ 14a49cbb0

UScriptStruct * __cdecl FRigUnit_SequenceExecution::StaticStruct(void)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this;
  TArrayView<FRigVMCompiledInFunction_const_,int> local_18;
  
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SequenceExecution.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SequenceExecution.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SequenceExecution,(UObject *)pUVar1,
                         L"RigUnit_SequenceExecution");
    this = FRigVMRegistry_RWLock::Get();
    local_18.ArrayNum = 1;
    local_18.DataPtr = Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::RigVMFunctions;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this,Z_Registration_Info_UScriptStruct_FRigUnit_SequenceExecution.OuterSingleton,
               &local_18);
  }
  return Z_Registration_Info_UScriptStruct_FRigUnit_SequenceExecution.OuterSingleton;
}

// GetExecuteContextStruct @ 14a49ccb0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall
FRigUnit_SequenceExecution::GetExecuteContextStruct(FRigUnit_SequenceExecution *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigExecuteContext,(UObject *)pUVar1,
                         L"ControlRigExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton;
}

// Execute @ 14a49ce90

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigUnit_SequenceExecution::Execute(FRigUnit_SequenceExecution *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014a49ce98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this->ExecuteContext + 8))(&this->ExecuteContext);
  return;
}

// GetUpgradeInfo @ 14a49ceb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FRigVMStructUpgradeInfo * __thiscall
FRigUnit_SequenceExecution::GetUpgradeInfo
          (FRigUnit_SequenceExecution *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FRigVMRegistry_RWLock *this_00;
  UScriptStruct *pUVar2;
  undefined1 auStack_398 [32];
  TArrayView<FRigVMCompiledInFunction_const_,int> local_378;
  FString local_368;
  FRigVMFunction_Sequence local_358;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_398;
  local_358._padding_ = (longlong)&___7FRigVMFunction_Sequence__6B_;
  FRigVMExecuteContext::FRigVMExecuteContext(&local_358.ExecuteContext);
  FRigVMExecuteContext::FRigVMExecuteContext(&local_358.A);
  FRigVMExecuteContext::FRigVMExecuteContext(&local_358.B);
  (__return_storage_ptr__->NodePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->NodePath).Data.ArrayNum = 0;
  (__return_storage_ptr__->NodePath).Data.ArrayMax = 0;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  *(undefined8 *)&__return_storage_ptr__->InputLinkMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputLinkMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputLinkMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->InputLinkMap).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->InputLinkMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->OutputLinkMap = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputLinkMap).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputLinkMap).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->OutputLinkMap).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->OutputLinkMap).field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->DefaultValues = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x34 = 0;
  *(undefined8 *)&(__return_storage_ptr__->DefaultValues).field_0x40 = 0;
  *(undefined4 *)&(__return_storage_ptr__->DefaultValues).field_0x48 = 0;
  (__return_storage_ptr__->AggregatePins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AggregatePins).ArrayNum = 0;
  (__return_storage_ptr__->AggregatePins).ArrayMax = 0;
  if (Z_Registration_Info_UScriptStruct_FRigUnit_SequenceExecution.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigUnit_SequenceExecution.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SequenceExecution,(UObject *)pUVar1,
                         L"RigUnit_SequenceExecution");
    this_00 = FRigVMRegistry_RWLock::Get();
    local_378.ArrayNum = 1;
    local_378.DataPtr = Z_Construct_UScriptStruct_FRigUnit_SequenceExecution_Statics::RigVMFunctions
    ;
    FRigVMRegistry_RWLock::RegisterCompiledInStruct
              (this_00,Z_Registration_Info_UScriptStruct_FRigUnit_SequenceExecution.OuterSingleton,
               &local_378);
  }
  __return_storage_ptr__->OldStruct =
       Z_Registration_Info_UScriptStruct_FRigUnit_SequenceExecution.OuterSingleton;
  pUVar2 = FRigVMFunction_Sequence::StaticStruct();
  __return_storage_ptr__->NewStruct = pUVar2;
  (__return_storage_ptr__->OldDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->OldDispatchFunction).Number = 0;
  (__return_storage_ptr__->NewDispatchFunction).ComparisonIndex = 0;
  (__return_storage_ptr__->NewDispatchFunction).Number = 0;
  local_378.DataPtr = (FRigVMCompiledInFunction *)0x0;
  FRigVMStructUpgradeInfo::SetDefaultValues(__return_storage_ptr__,(FRigVMStruct *)&local_358);
  local_378.DataPtr = (FRigVMCompiledInFunction *)0x0;
  local_378.ArrayNum = 0;
  local_378._12_4_ = 0;
  FRigVMStructUpgradeInfo::AddAggregatePin(__return_storage_ptr__,&local_368,(FString *)&local_378);
  if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.Data.AllocatorInstance.Data);
  }
  local_378.DataPtr = (FRigVMCompiledInFunction *)0x0;
  local_378.ArrayNum = 0;
  local_378._12_4_ = 0;
  FRigVMStructUpgradeInfo::AddAggregatePin(__return_storage_ptr__,&local_368,(FString *)&local_378);
  if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.Data.AllocatorInstance.Data);
  }
  FRigVMFunction_Sequence::~FRigVMFunction_Sequence(&local_358);
  return __return_storage_ptr__;
}

// Execute @ 14a52c540

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigUnit_SequenceExecution::Execute
          (FRigUnit_SequenceExecution *this,FControlRigExecuteContext *param_1)

{
  return;
}

// RigVMExecute @ 14a54fef0

void __cdecl
FRigUnit_SequenceExecution::RigVMExecute
          (FRigVMExtendedExecuteContext *param_1,TArrayView<FRigVMMemoryHandle,int> *param_2,
          TArrayView<FRigVMPredicateBranch,int> *param_3)

{
  FStructOnScope *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  UPackage *pUVar6;
  
  pFVar1 = &param_1->PublicDataScope;
  lVar5 = (**(code **)(pFVar1->_padding_ + 0x20))(pFVar1);
  if (Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRigExecuteContext,(UObject *)pUVar6,
                         L"ControlRigExecuteContext");
    if (Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton !=
        (UScriptStruct *)0x0) goto LAB_14a504e90;
  }
  else {
LAB_14a504e90:
    iVar2 = (int)(Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton)->
                 _padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar2 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FControlRigExecuteContext.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14a504eda;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("PublicDataScope.GetStruct()->IsChildOf(ExecuteContextType::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMCore\\RigVMExecuteContext.h"
                     ,0x29e,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14a504eda:
                    /* WARNING: Could not recover jumptable at 0x00014a504eea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1);
  return;
}

// StaticExecute @ 14a58fe10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __cdecl FRigUnit_SequenceExecution::StaticExecute(FControlRigExecuteContext *param_1)

{
  return;
}

