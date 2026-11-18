// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 9

// StaticClass @ 14a6b8cc0

UClass * __cdecl UInputTriggerCombo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputTriggerCombo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputTriggerCombo",
               &Z_Registration_Info_UClass_UInputTriggerCombo.InnerSingleton,
               StaticRegisterNativesUInputTriggerCombo,0x78,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputTriggerCombo>,
               InternalVTableHelperCtorCaller<UInputTriggerCombo>,local_res8,
               UInputTrigger::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputTriggerCombo.InnerSingleton;
}

// UInputTriggerCombo @ 14a6cd350

UInputTriggerCombo * __thiscall UInputTriggerCombo::UInputTriggerCombo(UInputTriggerCombo *this)

{
  undefined8 uVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar2);
  *(undefined4 *)&this->_padding_ = 0x3f000000;
  this->_padding_ = (longlong)&___7UInputTrigger__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar1;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UInputTriggerCombo__6B_;
  this->CurrentComboStepIndex = 0;
  this->CurrentTimeBetweenComboSteps = 0.0;
  (this->ComboActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComboActions).ArrayNum = 0;
  (this->ComboActions).ArrayMax = 0;
  (this->InputCancelActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputCancelActions).ArrayNum = 0;
  (this->InputCancelActions).ArrayMax = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  return this;
}

// UInputTriggerCombo @ 14a6cd3d0

UInputTriggerCombo * __thiscall
UInputTriggerCombo::UInputTriggerCombo(UInputTriggerCombo *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0x3f000000;
  this->_padding_ = (longlong)&___7UInputTrigger__6B_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar1;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UInputTriggerCombo__6B_;
  this->CurrentComboStepIndex = 0;
  this->CurrentTimeBetweenComboSteps = 0.0;
  (this->ComboActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComboActions).ArrayNum = 0;
  (this->ComboActions).ArrayMax = 0;
  (this->InputCancelActions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputCancelActions).ArrayNum = 0;
  (this->InputCancelActions).ArrayMax = 0;
  return this;
}

// ~UInputTriggerCombo @ 14a6cfac0

void __thiscall UInputTriggerCombo::~UInputTriggerCombo(UInputTriggerCombo *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInputTriggerCombo__6B_;
  pFVar1 = (this->InputCancelActions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ComboActions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UInputTrigger__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14a6e1cb0

UClass * __cdecl UInputTriggerCombo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputTriggerCombo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputTriggerCombo",
               &Z_Registration_Info_UClass_UInputTriggerCombo.InnerSingleton,
               StaticRegisterNativesUInputTriggerCombo,0x78,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputTriggerCombo>,
               InternalVTableHelperCtorCaller<UInputTriggerCombo>,local_res8,
               UInputTrigger::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputTriggerCombo.InnerSingleton;
}

// GetSupportedTriggerEvents @ 14a6e2710

ETriggerEventsSupported __thiscall
UInputTriggerCombo::GetSupportedTriggerEvents(UInputTriggerCombo *this)

{
  return All;
}

// GetTriggerType_Implementation @ 14a6e2890

ETriggerType __thiscall UInputTriggerCombo::GetTriggerType_Implementation(UInputTriggerCombo *this)

{
  return Implicit;
}

// StaticRegisterNativesUInputTriggerCombo @ 14a6fb740

void __cdecl UInputTriggerCombo::StaticRegisterNativesUInputTriggerCombo(void)

{
  return;
}

// UpdateState_Implementation @ 14a700360

/* WARNING: Enum "Type": Some values do not have unique names */

ETriggerState __thiscall
UInputTriggerCombo::UpdateState_Implementation
          (UInputTriggerCombo *this,UEnhancedPlayerInput *param_1,FInputActionValue *param_2,
          float param_3)

{
  float fVar1;
  FScriptContainerElement FVar2;
  uint uVar3;
  UObject *pUVar4;
  code *pcVar5;
  TConsoleVariableData<bool> *pTVar6;
  UEnhancedPlayerInput *pUVar7;
  bool bVar8;
  ETriggerState EVar9;
  int iVar10;
  FInputActionInstance *pFVar11;
  longlong lVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  UObject *pUVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  UEnhancedPlayerInput *local_res10;
  undefined1 local_78 [8];
  UObject *local_70;
  UObject *local_68;
  UObject *local_60;
  UObject *local_58 [4];
  
  iVar10 = (this->ComboActions).ArrayNum;
  local_res10 = param_1;
  if (iVar10 == 0) {
    if ((byte)LogEnhancedInput._0_1_ < 3) {
      return None;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    return None;
  }
  uVar3 = this->CurrentComboStepIndex;
  uVar13 = 0;
  if ((int)uVar3 < iVar10) {
    uVar13 = ~uVar3 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    EVar9 = (*pcVar5)();
    return EVar9;
  }
  pUVar15 = *(UObject **)((this->ComboActions).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x10)
  ;
  if (pUVar15 == (UObject *)0x0) {
    return None;
  }
  pFVar14 = (this->InputCancelActions).AllocatorInstance.Data;
  iVar10 = (this->InputCancelActions).ArrayNum;
  pFVar16 = pFVar14 + (longlong)iVar10 * 0x10;
  do {
    if ((this->InputCancelActions).ArrayNum != iVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FInputCancelAction,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar14 == pFVar16) goto LAB_14a70052a;
    pUVar4 = *(UObject **)pFVar14;
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar4 == (UObject *)0x0)) {
      FVar2 = pFVar14[8];
      if (pUVar4 != (UObject *)0x0) goto LAB_14a700483;
    }
    else {
      UE::GC::MarkAsReachable(pUVar4);
      FVar2 = pFVar14[8];
LAB_14a700483:
      if (pUVar4 != pUVar15) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        local_70 = pUVar4;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        pFVar11 = TMapBase<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
                  ::Find((TMapBase<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
                          *)&param_1->ActionInstanceData,(TObjectPtr<UInputAction_const_>)&local_70)
        ;
        param_1 = local_res10;
        if ((pFVar11 != (FInputActionInstance *)0x0) &&
           ((pFVar11->TriggerEvent & (byte)FVar2) != None)) break;
      }
    }
    pFVar14 = pFVar14 + 0x10;
  } while( true );
  this->CurrentComboStepIndex = 0;
  if (((this->ComboActions).ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    EVar9 = (*pcVar5)();
    return EVar9;
  }
  pUVar15 = *(UObject **)(this->ComboActions).AllocatorInstance.Data;
  param_1 = local_res10;
LAB_14a70052a:
  iVar10 = (this->ComboActions).ArrayNum;
  pFVar14 = (this->ComboActions).AllocatorInstance.Data;
  pFVar16 = pFVar14 + (longlong)iVar10 * 0x10;
  do {
    if ((this->ComboActions).ArrayNum != iVar10) {
      local_78[0] = 0;
      `TCheckedPointerIterator<FInputComboStepData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_78);
    }
    if (pFVar14 == pFVar16) goto LAB_14a700636;
    pUVar4 = *(UObject **)pFVar14;
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar4 == (UObject *)0x0)) {
      FVar2 = pFVar14[8];
      if (pUVar4 != (UObject *)0x0) goto LAB_14a700588;
    }
    else {
      UE::GC::MarkAsReachable(pUVar4);
      FVar2 = pFVar14[8];
LAB_14a700588:
      if (pUVar4 != pUVar15) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        local_68 = pUVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        pFVar11 = TMapBase<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
                  ::Find((TMapBase<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
                          *)&param_1->ActionInstanceData,(TObjectPtr<UInputAction_const_>)&local_68)
        ;
        if ((pFVar11 != (FInputActionInstance *)0x0) &&
           ((pFVar11->TriggerEvent & (byte)FVar2) != None)) break;
      }
    }
    pFVar14 = pFVar14 + 0x10;
    param_1 = local_res10;
  } while( true );
  this->CurrentComboStepIndex = 0;
  if (((this->ComboActions).ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    EVar9 = (*pcVar5)();
    return EVar9;
  }
  pUVar15 = *(UObject **)(this->ComboActions).AllocatorInstance.Data;
LAB_14a700636:
  uVar3 = this->CurrentComboStepIndex;
  if (0 < (int)uVar3) {
    this->CurrentTimeBetweenComboSteps = param_3 + this->CurrentTimeBetweenComboSteps;
    uVar13 = 0;
    if ((int)uVar3 < (this->ComboActions).ArrayNum) {
      uVar13 = ~uVar3 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      EVar9 = (*pcVar5)();
      return EVar9;
    }
    fVar1 = *(float *)((this->ComboActions).AllocatorInstance.Data +
                      (longlong)(int)uVar3 * 0x10 + 0xc);
    if (fVar1 < this->CurrentTimeBetweenComboSteps || fVar1 == this->CurrentTimeBetweenComboSteps) {
      this->CurrentComboStepIndex = 0;
      if (((this->ComboActions).ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        EVar9 = (*pcVar5)();
        return EVar9;
      }
      pUVar15 = *(UObject **)(this->ComboActions).AllocatorInstance.Data;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar15);
  }
  pUVar7 = local_res10;
  local_60 = pUVar15;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar15);
  }
  pFVar11 = TMapBase<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
            ::Find((TMapBase<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
                    *)&pUVar7->ActionInstanceData,(TObjectPtr<UInputAction_const_>)&local_60);
  if (pFVar11 != (FInputActionInstance *)0x0) {
    uVar3 = this->CurrentComboStepIndex;
    uVar13 = 0;
    if ((int)uVar3 < (this->ComboActions).ArrayNum) {
      uVar13 = ~uVar3 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      EVar9 = (*pcVar5)();
      return EVar9;
    }
    if ((pFVar11->TriggerEvent &
        (byte)(this->ComboActions).AllocatorInstance.Data[(longlong)(int)uVar3 * 0x10 + 8]) != None)
    {
      iVar10 = this->CurrentComboStepIndex + 1;
      this->CurrentTimeBetweenComboSteps = 0.0;
      this->CurrentComboStepIndex = iVar10;
      if ((this->ComboActions).ArrayNum <= iVar10) {
        this->CurrentComboStepIndex = 0;
        return Triggered;
      }
    }
  }
  pTVar6 = UE::EnhancedInput::CVarCheckInitialStateForComboTrigger.Ref;
  if (0 < this->CurrentComboStepIndex) {
    return Ongoing;
  }
  bVar8 = IsInParallelGameThread();
  if (!bVar8) {
    bVar8 = IsInGameThread();
    lVar12 = 1;
    if (!bVar8) goto LAB_14a7007f1;
  }
  lVar12 = 0;
LAB_14a7007f1:
  if (pTVar6->ShadowedValue[lVar12] != false) {
    if (((this->ComboActions).ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      EVar9 = (*pcVar5)();
      return EVar9;
    }
    pUVar15 = *(UObject **)(this->ComboActions).AllocatorInstance.Data;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar15);
    }
    local_58[0] = pUVar15;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar15);
    }
    pFVar11 = TMapBase<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
              ::Find((TMapBase<TObjectPtr<UInputAction_const_>,FInputActionInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UInputAction_const_>,FInputActionInstance,0>_>
                      *)&pUVar7->ActionInstanceData,(TObjectPtr<UInputAction_const_>)local_58);
    if ((pFVar11 != (FInputActionInstance *)0x0) && (pFVar11->TriggerEvent != None)) {
      return Ongoing;
    }
  }
  this->CurrentTimeBetweenComboSteps = 0.0;
  return None;
}

