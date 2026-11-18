// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 2

// BindKey<UGameplayDebuggerLocalController> @ 146d3b570

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FInputKeyBinding * __thiscall
UInputComponent::BindKey<UGameplayDebuggerLocalController>
          (UInputComponent *this,FInputChord *param_1,EInputEvent param_2,
          UGameplayDebuggerLocalController *param_3,pmf_8f91aab7 param_4)

{
  int *piVar1;
  TArray<FInputKeyBinding,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined4 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  FName FVar5;
  FKeyDetails *pFVar6;
  code *pcVar7;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar8;
  bool bVar9;
  int iVar10;
  FInputKeyBinding *pFVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  atomic<int> *paVar15;
  uint local_res18;
  byte local_88;
  uint local_68;
  FInputActionUnifiedDelegate local_60;
  
  pTVar4 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar5 = (param_1->Key).KeyName;
  pFVar6 = (param_1->Key).KeyDetails.Object;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    paVar15 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar15 = &pTVar4->SharedReferenceCount;
    LOCK();
    *paVar15 = (atomic<int>)((int)*paVar15 + 1);
    UNLOCK();
  }
  uVar3 = *(undefined4 *)&param_1->field_0x18;
  uVar13 = (ZPULL(uVar3,0,1) ^ local_res18) & 1 ^ local_res18;
  uVar13 = (uVar3 ^ uVar13) & 2 ^ uVar13;
  uVar13 = (uVar3 ^ uVar13) & 4 ^ uVar13;
  uVar13 = (uVar3 ^ uVar13) & 8 ^ uVar13;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar15 = (atomic<int>)((int)*paVar15 + 1);
    UNLOCK();
  }
  uVar12 = (local_68 ^ uVar13) & 1 ^ local_68;
  local_60.FuncDelegate.Object = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0;
  local_60.FuncDelegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_60.FuncDelegateWithKey.Object =
       (TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *)0x0;
  uVar12 = (uVar13 ^ uVar12) & 2 ^ uVar12;
  local_60.FuncDynDelegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_60.BoundDelegateType = Unbound;
  uVar12 = (uVar13 ^ uVar12) & 4 ^ uVar12;
  local_60.FuncDelegateWithKey.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_60.FuncDynDelegate.Object = (FInputActionHandlerDynamicSignature *)0x0;
  uVar12 = (uVar13 ^ uVar12) & 8 ^ uVar12;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FInputActionUnifiedDelegate::BindDelegate<UGameplayDebuggerLocalController>
            (&local_60,param_3,param_4);
  pTVar2 = &this->KeyBindings;
  iVar10 = (this->KeyBindings).ArrayNum;
  piVar1 = &(this->KeyBindings).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x860,&pTVar2->AllocatorInstance,piVar1);
  }
  pTVar8 = local_60.FuncDelegate.Object;
  (this->KeyBindings).ArrayNum = iVar10 + 1;
  pFVar14 = (pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x60;
  *pFVar14 = (FScriptContainerElement)(local_88 & 0xfd | 1);
  pFVar14[1] = SUB41(param_2,0);
  *(FName *)(pFVar14 + 8) = FVar5;
  *(FKeyDetails **)(pFVar14 + 0x10) = pFVar6;
  *(TReferenceControllerBase<1> **)(pFVar14 + 0x18) = pTVar4;
  uVar13 = (uVar12 ^ *(uint *)(pFVar14 + 0x20)) & 1 ^ *(uint *)(pFVar14 + 0x20);
  uVar13 = (uVar12 ^ uVar13) & 2 ^ uVar13;
  uVar13 = (uVar12 ^ uVar13) & 4 ^ uVar13;
  local_60.FuncDelegate.Object = (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0;
  *(uint *)(pFVar14 + 0x20) = (uVar12 ^ uVar13) & 8 ^ uVar13;
  *(TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> **)(pFVar14 + 0x28) = pTVar8;
  *(TReferenceControllerBase<1> **)(pFVar14 + 0x30) =
       local_60.FuncDelegate.SharedReferenceCount.ReferenceController;
  *(TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> **)(pFVar14 + 0x38) =
       local_60.FuncDelegateWithKey.Object;
  *(TReferenceControllerBase<1> **)(pFVar14 + 0x40) =
       local_60.FuncDelegateWithKey.SharedReferenceCount.ReferenceController;
  *(FInputActionHandlerDynamicSignature **)(pFVar14 + 0x48) = local_60.FuncDynDelegate.Object;
  *(TReferenceControllerBase<1> **)(pFVar14 + 0x50) =
       local_60.FuncDynDelegate.SharedReferenceCount.ReferenceController;
  pFVar14[0x58] = (FScriptContainerElement)local_60.BoundDelegateType;
  iVar10 = (this->KeyBindings).ArrayNum;
  local_60.FuncDelegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_60.FuncDelegateWithKey.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_60.FuncDelegateWithKey.Object =
       (TDelegate<void___cdecl(FKey),FDefaultDelegateUserPolicy> *)0x0;
  uVar12 = iVar10 - 1;
  local_60.FuncDynDelegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_60.FuncDynDelegate.Object = (FInputActionHandlerDynamicSignature *)0x0;
  uVar13 = 0;
  if ((int)uVar12 < iVar10) {
    uVar13 = ~uVar12 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FInputKeyBinding *)(*pcVar7)();
      return pFVar11;
    }
  }
  iVar10 = (this->KeyBindings).ArrayNum;
  pFVar14 = (pTVar2->AllocatorInstance).Data;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController);
  return (FInputKeyBinding *)(pFVar14 + (longlong)(iVar10 + -1) * 0x60);
}

// BindKey<UGameplayDebuggerLocalController> @ 146d3b820

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FInputKeyBinding * __thiscall
UInputComponent::BindKey<UGameplayDebuggerLocalController>
          (UInputComponent *this,FKey *param_1,EInputEvent param_2,
          UGameplayDebuggerLocalController *param_3,pmf_8f91aab7 param_4)

{
  FInputKeyBinding *pFVar1;
  FInputChord local_28;
  
  local_28.Key.KeyName = param_1->KeyName;
  local_28.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_1->KeyDetails).SharedReferenceCount.ReferenceController;
  local_28.Key.KeyDetails.Object = (param_1->KeyDetails).Object;
  if (local_28.Key.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.Key.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_28.Key.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.bCmd = 0;
  local_28.bAlt = 0;
  local_28.bCtrl = 0;
  local_28.bShift = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  pFVar1 = BindKey<UGameplayDebuggerLocalController>(this,&local_28,param_2,param_3,param_4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->KeyDetails).SharedReferenceCount.ReferenceController);
  return pFVar1;
}

