// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ArchVisCharacter
// Functions: 1

// BindAxis<AArchVisCharacter> @ 14f00d2d0

FInputAxisBinding * __thiscall
UInputComponent::BindAxis<AArchVisCharacter>
          (UInputComponent *this,FName param_1,AArchVisCharacter *param_2,pmf_e27cecd5 *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FInputAxisBinding *pFVar7;
  uint uVar8;
  longlong lVar9;
  TArray<FInputAxisBinding,TSizedDefaultAllocator<32>_> *pTVar10;
  pmf_e27cecd5 local_58;
  FScriptContainerElement local_48;
  FName local_44;
  TInputUnifiedDelegate<TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>,FInputAxisHandlerDynamicSignature>
  local_38;
  undefined4 local_18;
  
  LogDeprecatedBindingWarning(param_1);
  local_38.FuncDynDelegate.Object = (FInputAxisHandlerDynamicSignature *)0x0;
  local_38.FuncDynDelegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_58._0_8_ = *(undefined8 *)param_3;
  local_58._8_8_ = *(undefined8 *)&param_3->field_0x8;
  local_48 = (FScriptContainerElement)((byte)local_48 & 0xfd | 1);
  local_18 = 0;
  local_38.FuncDelegate.Object = (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)0x0;
  local_38.FuncDelegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_44 = param_1;
  TInputUnifiedDelegate<TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy>,FInputAxisHandlerDynamicSignature>
  ::BindDelegate<AArchVisCharacter>(&local_38,param_2,&local_58);
  pTVar10 = &this->AxisBindings;
  iVar5 = (this->AxisBindings).ArrayNum;
  piVar1 = &(this->AxisBindings).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&pTVar10->AllocatorInstance,piVar1);
  }
  (this->AxisBindings).ArrayNum = iVar5 + 1;
  pFVar2 = (pTVar10->AllocatorInstance).Data;
  lVar9 = (longlong)iVar5 * 0x38;
  pFVar2[lVar9] = local_48;
  *(FName *)(pFVar2 + lVar9 + 4) = local_44;
  *(TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> **)(pFVar2 + lVar9 + 0x10) =
       local_38.FuncDelegate.Object;
  *(TReferenceControllerBase<1> **)(pFVar2 + lVar9 + 0x18) =
       local_38.FuncDelegate.SharedReferenceCount.ReferenceController;
  *(FInputAxisHandlerDynamicSignature **)(pFVar2 + lVar9 + 0x20) = local_38.FuncDynDelegate.Object;
  *(TReferenceControllerBase<1> **)(pFVar2 + lVar9 + 0x28) =
       local_38.FuncDynDelegate.SharedReferenceCount.ReferenceController;
  *(undefined4 *)(pFVar2 + lVar9 + 0x30) = local_18;
  iVar5 = (this->AxisBindings).ArrayNum;
  local_38.FuncDelegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_38.FuncDelegate.Object = (TDelegate<void___cdecl(float),FDefaultDelegateUserPolicy> *)0x0;
  local_38.FuncDynDelegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  uVar8 = iVar5 - 1;
  local_38.FuncDynDelegate.Object = (FInputAxisHandlerDynamicSignature *)0x0;
  uVar6 = 0;
  if ((int)uVar8 < iVar5) {
    uVar6 = ~uVar8 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FInputAxisBinding *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->AxisBindings).ArrayNum;
  pFVar2 = (pTVar10->AllocatorInstance).Data;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return (FInputAxisBinding *)(pFVar2 + (longlong)(iVar5 + -1) * 0x38);
}

