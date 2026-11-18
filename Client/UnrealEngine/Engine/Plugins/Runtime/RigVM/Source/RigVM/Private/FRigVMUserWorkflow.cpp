// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 5

// ~FRigVMUserWorkflow @ 14a07bfd0

void __thiscall FRigVMUserWorkflow::~FRigVMUserWorkflow(FRigVMUserWorkflow *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRigVMUserWorkflow__6B_;
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PerformDynamicDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->PerformDelegate);
  pFVar1 = (this->Tooltip).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Title).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// FRigVMUserWorkflow @ 14a0c1f90

FRigVMUserWorkflow * __thiscall
FRigVMUserWorkflow::FRigVMUserWorkflow(FRigVMUserWorkflow *this,FRigVMUserWorkflow *param_1)

{
  UClass *pUVar1;
  FReadAccessScope local_28;
  
  this->_padding_ = (longlong)&___7FRigVMUserWorkflow__6B_;
  ::FString::FString(&this->Title,&param_1->Title);
  ::FString::FString(&this->Tooltip,&param_1->Tooltip);
  this->Type = param_1->Type;
  TDelegate<bool___cdecl(URigVMUserWorkflowOptions_const_*,UObject_*),FDefaultDelegateUserPolicy>::
  TDelegate<bool___cdecl(URigVMUserWorkflowOptions_const_*,UObject_*),FDefaultDelegateUserPolicy>
            (&this->PerformDelegate,&param_1->PerformDelegate);
  *(undefined8 *)&this->PerformDynamicDelegate = 0;
  *(undefined8 *)&(this->PerformDynamicDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->PerformDynamicDelegate).field_0x10 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &param_1->PerformDynamicDelegate,&local_28);
  *(undefined8 *)&(this->PerformDynamicDelegate).field_0x8 =
       *(undefined8 *)&(param_1->PerformDynamicDelegate).field_0x8;
  *(undefined8 *)&(this->PerformDynamicDelegate).field_0x10 =
       *(undefined8 *)&(param_1->PerformDynamicDelegate).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  pUVar1 = (param_1->OptionsClass).field0_0x0.DebugPtr;
  (this->OptionsClass).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return this;
}

// StaticStruct @ 14a135d90

UScriptStruct * __cdecl FRigVMUserWorkflow::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMUserWorkflow.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMUserWorkflow.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMUserWorkflow,(UObject *)pUVar1,
                         L"RigVMUserWorkflow");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMUserWorkflow.OuterSingleton;
}

// Perform @ 14a1b2410

bool __thiscall
FRigVMUserWorkflow::Perform
          (FRigVMUserWorkflow *this,URigVMUserWorkflowOptions *param_1,UObject *param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UObject *this_00;
  UFunction *pUVar5;
  longlong *plVar6;
  URigVMUserWorkflowOptions *local_58;
  UObject *local_50;
  char local_48;
  FDestructionSentinel local_40;
  FReadAccessScope local_28;
  
  if ((((this->Type != Invalid) && ((this->OptionsClass).field0_0x0.DebugPtr != (UClass *)0x0)) &&
      ((bVar3 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                          ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->PerformDelegate),
       bVar3 || (bVar3 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                                   ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                                    &this->PerformDynamicDelegate), bVar3)))) &&
     (bVar3 = ValidateOptions(this,param_1), bVar3)) {
    bVar3 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->PerformDelegate);
    if (bVar3) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->PerformDelegate,
                 &local_28);
      if (*(int *)&(this->PerformDelegate).field_0x10 == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)&(this->PerformDelegate).field_0x8;
      }
      uVar4 = (**(code **)(*plVar6 + 0x60))(plVar6,param_1,param_2);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      return (bool)uVar4;
    }
    bVar3 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->PerformDynamicDelegate)
    ;
    if (bVar3) {
      local_48 = '\0';
      local_58 = param_1;
      local_50 = param_2;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->PerformDynamicDelegate,(FWriteAccessScope *)&local_40);
      bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&(this->PerformDynamicDelegate).field_0x8);
      if ((!bVar3) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object.IsValid() != false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                             ,0x1bb,L"ProcessDelegate() called with no object bound to delegate!"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      if ((*(longlong *)&(this->PerformDynamicDelegate).field_0x10 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("FunctionName != NAME_None",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                             ,0x1bc,L"ProcessDelegate() called with no function name set!"), bVar3))
      {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      this_00 = FWeakObjectPtr::Get((FWeakObjectPtr *)&(this->PerformDynamicDelegate).field_0x8);
      FVar1.ComparisonIndex.Value = *(uint *)&(this->PerformDynamicDelegate).field_0x10;
      FVar1.Number = *(uint *)&(this->PerformDynamicDelegate).field_0x14;
      pUVar5 = UObject::FindFunctionChecked(this_00,FVar1);
      if (local_40.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
      }
      (**(code **)(*(longlong *)this_00 + 0x260))(this_00,pUVar5,&local_58);
      return local_48 != '\0';
    }
  }
  return false;
}

// ValidateOptions @ 14a1ec060

bool __thiscall
FRigVMUserWorkflow::ValidateOptions(FRigVMUserWorkflow *this,URigVMUserWorkflowOptions *param_1)

{
  int iVar1;
  UClass *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char *pcVar6;
  UClass *pUVar7;
  atomic<unsigned_char> *paVar8;
  int iVar9;
  FName local_res8;
  FName local_res18 [2];
  FString local_48;
  FString local_38;
  FString local_28;
  
  pUVar2 = (this->OptionsClass).field0_0x0.DebugPtr;
  if (pUVar2 == (UClass *)0x0) {
    pcVar6 = "ExpectedOptionsClass != nullptr";
    iVar9 = 0x56;
    paVar8 = &bGEnsureHasExecuted<2725776951179477078>;
  }
  else {
    pUVar7 = URigVMUserWorkflowOptions::StaticClass();
    if (pUVar7 != (UClass *)0x0) {
      iVar9 = (int)pUVar2->_padding_;
      iVar1 = (int)pUVar7->_padding_;
      if ((iVar9 < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        if (param_1 == (URigVMUserWorkflowOptions *)0x0) {
          pcVar6 = "InOptions != nullptr";
          iVar9 = 0x60;
          paVar8 = &bGEnsureHasExecuted<2725776951179477088>;
        }
        else {
          if ((param_1->Subject).field0_0x0.DebugPtr != (UObject *)0x0) {
            if ((iVar9 <= *(int *)(param_1->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar9 * 8) ==
                &pUVar2->_padding_)) {
              return true;
            }
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<2725776951179477098>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMUserWorkflow.cpp"
                               ,0x6a,"InOptions->GetClass()->IsChildOf(ExpectedOptionsClass)");
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            local_res8 = (FName)pUVar2->_padding_;
            ::FName::ToString(&local_res8,&local_38);
            local_res18[0] = *(FName *)(param_1->_padding_ + 0x18);
            ::FName::ToString(local_res18,&local_48);
            ::FString::PrintfImpl
                      (&local_28,
                       L"Workflow \'%s\' cannot execute: Options are of type \'%s\' - expected was type \'%s\'."
                      );
            URigVMUserWorkflowOptions::Report(param_1,Error,&local_28);
            if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_28.Data.AllocatorInstance.Data);
            }
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
            if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return false;
            }
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
            return false;
          }
          pcVar6 = "InOptions->IsValid()";
          iVar9 = 0x65;
          paVar8 = &bGEnsureHasExecuted<2725776951179477093>;
        }
        goto LAB_14a1ec249;
      }
    }
    pcVar6 = "ExpectedOptionsClass->IsChildOf(URigVMUserWorkflowOptions::StaticClass())";
    iVar9 = 0x5b;
    paVar8 = &bGEnsureHasExecuted<2725776951179477083>;
  }
LAB_14a1ec249:
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar8,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMUserWorkflow.cpp"
                     ,iVar9,pcVar6);
  if (!bVar4) {
    return false;
  }
  pcVar3 = (code *)swi(3);
  uVar5 = (*pcVar3)();
  return (bool)uVar5;
}

