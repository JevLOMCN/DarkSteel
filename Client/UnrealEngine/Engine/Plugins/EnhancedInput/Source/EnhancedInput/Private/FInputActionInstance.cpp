// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 6

// StaticStruct @ 14a6b2f60

UScriptStruct * __cdecl FInputActionInstance::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInputActionInstance.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_EnhancedInput();
    Z_Registration_Info_UScriptStruct_FInputActionInstance.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInputActionInstance,(UObject *)pUVar1,
                         L"InputActionInstance");
  }
  return Z_Registration_Info_UScriptStruct_FInputActionInstance.OuterSingleton;
}

// FInputActionInstance @ 14a6ca1a0

FInputActionInstance * __thiscall
FInputActionInstance::FInputActionInstance(FInputActionInstance *this,FInputActionInstance *param_1)

{
  float fVar1;
  UInputAction *pUVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  EInputActionValueType EVar11;
  undefined7 uVar12;
  
  pUVar2 = (param_1->SourceAction).field0_0x0.DebugPtr;
  (this->SourceAction).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UInputAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->LastTriggerState = param_1->LastTriggerState;
  bVar4 = (param_1->TriggerStateTracker).bEvaluatedInput;
  bVar5 = (param_1->TriggerStateTracker).bEvaluatedTriggers;
  bVar6 = (param_1->TriggerStateTracker).bFoundActiveTrigger;
  bVar7 = (param_1->TriggerStateTracker).bAnyExplictTriggered;
  bVar8 = (param_1->TriggerStateTracker).bFoundExplicit;
  bVar9 = (param_1->TriggerStateTracker).bAllImplicitsTriggered;
  bVar10 = (param_1->TriggerStateTracker).bBlocking;
  (this->TriggerStateTracker).NoTriggerState = (param_1->TriggerStateTracker).NoTriggerState;
  (this->TriggerStateTracker).bEvaluatedInput = bVar4;
  (this->TriggerStateTracker).bEvaluatedTriggers = bVar5;
  (this->TriggerStateTracker).bFoundActiveTrigger = bVar6;
  (this->TriggerStateTracker).bAnyExplictTriggered = bVar7;
  (this->TriggerStateTracker).bFoundExplicit = bVar8;
  (this->TriggerStateTracker).bAllImplicitsTriggered = bVar9;
  (this->TriggerStateTracker).bBlocking = bVar10;
  (this->TriggerStateTracker).bMappingTriggerApplied =
       (param_1->TriggerStateTracker).bMappingTriggerApplied;
  this->TriggerEventInternal = param_1->TriggerEventInternal;
  this->TriggerEvent = param_1->TriggerEvent;
  fVar1 = param_1->LastTriggeredWorldTime;
  (this->Triggers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->LastTriggeredWorldTime = fVar1;
  (this->Triggers).AllocatorInstance.Data = (param_1->Triggers).AllocatorInstance.Data;
  (param_1->Triggers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Triggers).ArrayNum = (param_1->Triggers).ArrayNum;
  (this->Triggers).ArrayMax = (param_1->Triggers).ArrayMax;
  (param_1->Triggers).ArrayNum = 0;
  (param_1->Triggers).ArrayMax = 0;
  (this->Modifiers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modifiers).AllocatorInstance.Data = (param_1->Modifiers).AllocatorInstance.Data;
  (param_1->Modifiers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modifiers).ArrayNum = (param_1->Modifiers).ArrayNum;
  (this->Modifiers).ArrayMax = (param_1->Modifiers).ArrayMax;
  (param_1->Modifiers).ArrayNum = 0;
  (param_1->Modifiers).ArrayMax = 0;
  dVar3 = (param_1->Value).Value.field0_0x0._s_0.Y;
  (this->Value).Value.field0_0x0._s_0.X = (param_1->Value).Value.field0_0x0._s_0.X;
  (this->Value).Value.field0_0x0._s_0.Y = dVar3;
  EVar11 = (param_1->Value).ValueType;
  uVar12 = *(undefined7 *)&(param_1->Value).field_0x19;
  (this->Value).Value.field0_0x0._s_0.Z = (param_1->Value).Value.field0_0x0._s_0.Z;
  (this->Value).ValueType = EVar11;
  *(undefined7 *)&(this->Value).field_0x19 = uVar12;
  this->ElapsedProcessedTime = param_1->ElapsedProcessedTime;
  this->ElapsedTriggeredTime = param_1->ElapsedTriggeredTime;
  return this;
}

// FInputActionInstance @ 14a6ca270

FInputActionInstance * __thiscall
FInputActionInstance::FInputActionInstance(FInputActionInstance *this,UInputAction *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  int iVar3;
  UInputAction *pUVar4;
  UObject *pUVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  undefined4 uVar9;
  bool bVar10;
  int iVar11;
  UClass *pUVar12;
  FInputActionInstance *pFVar13;
  TArray<TObjectPtr<UInputTrigger>,TSizedDefaultAllocator<32>_> *pTVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  UObject *local_88;
  UObject *local_80;
  FName local_78;
  FName local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  EInputActionValueType EStack_50;
  undefined7 uStack_4f;
  
  (this->SourceAction).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UInputAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->TriggerStateTracker).bFoundActiveTrigger = false;
  (this->TriggerStateTracker).bAnyExplictTriggered = false;
  (this->TriggerStateTracker).bFoundExplicit = false;
  (this->TriggerStateTracker).bAllImplicitsTriggered = true;
  (this->Triggers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Triggers).ArrayNum = 0;
  (this->Triggers).ArrayMax = 0;
  (this->Modifiers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modifiers).ArrayNum = 0;
  (this->Modifiers).ArrayMax = 0;
  *(undefined8 *)&(this->TriggerStateTracker).bBlocking = 0;
  this->LastTriggerState = None;
  (this->TriggerStateTracker).NoTriggerState = None;
  (this->TriggerStateTracker).bEvaluatedInput = false;
  (this->TriggerStateTracker).bEvaluatedTriggers = false;
  dVar8 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                           UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
  (this->Value).Value.field0_0x0._s_0.X =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  (this->Value).Value.field0_0x0._s_0.Y = dVar8;
  (this->Value).Value.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->Value).ValueType = Boolean;
  this->ElapsedProcessedTime = 0.0;
  this->ElapsedTriggeredTime = 0.0;
  if ((this->SourceAction).field0_0x0.DebugPtr == (UInputAction *)0x0) {
    local_res10[0] = 0;
    bVar10 = `FInputActionInstance::FInputActionInstance'::__l3::<lambda_1>::operator()(local_res10)
    ;
    if (!bVar10) {
      return this;
    }
  }
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  pUVar4 = (this->SourceAction).field0_0x0.DebugPtr;
  local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  EStack_50 = pUVar4->ValueType;
  uStack_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uStack_5c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  if ((EStack_50 == Boolean) || (EStack_50 == Axis1D)) {
    uStack_60 = 0;
    uStack_5c = 0;
  }
  else if (EStack_50 != Axis2D) goto LAB_14a6ca354;
  local_58 = 0.0;
LAB_14a6ca354:
  uStack_64 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  pTVar14 = &this->Triggers;
  *(undefined4 *)&(this->Value).Value.field0_0x0 =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  *(undefined4 *)((longlong)&(this->Value).Value.field0_0x0 + 4) = uVar9;
  *(undefined4 *)((longlong)&(this->Value).Value.field0_0x0 + 8) = uStack_60;
  *(undefined4 *)((longlong)&(this->Value).Value.field0_0x0 + 0xc) = uStack_5c;
  (this->Value).Value.field0_0x0._s_0.Z = local_58;
  *(ulonglong *)&(this->Value).ValueType = CONCAT71(uStack_4f,EStack_50);
  uVar2 = (pUVar4->Triggers).ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if ((this->Triggers).ArrayMax < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar2,&(this->Triggers).AllocatorInstance,(this->Triggers).ArrayNum,
               &(this->Triggers).ArrayMax);
  }
  pUVar4 = (this->SourceAction).field0_0x0.DebugPtr;
  pFVar15 = (pUVar4->Triggers).AllocatorInstance.Data;
  iVar3 = (pUVar4->Triggers).ArrayNum;
  pFVar1 = pFVar15 + (longlong)iVar3 * 8;
  do {
    if ((pUVar4->Triggers).ArrayNum != iVar3) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UInputTrigger>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar15 == pFVar1) {
      pUVar4 = (this->SourceAction).field0_0x0.DebugPtr;
      pFVar15 = (pUVar4->Modifiers).AllocatorInstance.Data;
      iVar3 = (pUVar4->Modifiers).ArrayNum;
      pFVar1 = pFVar15 + (longlong)iVar3 * 8;
      while( true ) {
        if ((pUVar4->Modifiers).ArrayNum != iVar3) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UInputModifier>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (pFVar15 == pFVar1) break;
        pUVar5 = *(UObject **)pFVar15;
        if (pUVar5 != (UObject *)0x0) {
          local_70.ComparisonIndex.Value = 0;
          local_70.Number = 0;
          pUVar12 = UInputModifier::StaticClass();
          local_80 = DuplicateObject_Internal(pUVar12,pUVar5,(UObject *)0x0,local_70);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_80 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_80);
          }
          pFVar6 = (this->Modifiers).AllocatorInstance.Data;
          if (((pFVar6 <= (FScriptContainerElement *)&local_80) &&
              ((FScriptContainerElement *)&local_80 <
               pFVar6 + (longlong)(this->Modifiers).ArrayMax * 8)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar7 = (code *)swi(3);
            pFVar13 = (FInputActionInstance *)(*pcVar7)();
            return pFVar13;
          }
          iVar11 = (this->Modifiers).ArrayNum;
          if (iVar11 == (this->Modifiers).ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&(this->Modifiers).AllocatorInstance,
                                &(this->Modifiers).ArrayMax);
          }
          (this->Modifiers).ArrayNum = iVar11 + 1;
          *(UObject **)((this->Modifiers).AllocatorInstance.Data + (longlong)iVar11 * 8) = local_80;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_80 != (UObject *)0x0))
          {
            UE::GC::MarkAsReachable(local_80);
          }
        }
        pFVar15 = pFVar15 + 8;
      }
      return this;
    }
    pUVar5 = *(UObject **)pFVar15;
    if (pUVar5 != (UObject *)0x0) {
      local_78.ComparisonIndex.Value = 0;
      local_78.Number = 0;
      pUVar12 = UInputTrigger::StaticClass();
      local_88 = DuplicateObject_Internal(pUVar12,pUVar5,(UObject *)0x0,local_78);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_88 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_88);
      }
      pFVar6 = (pTVar14->AllocatorInstance).Data;
      if (((pFVar6 <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 < pFVar6 + (longlong)(this->Triggers).ArrayMax * 8))
         && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar10)) {
        pcVar7 = (code *)swi(3);
        pFVar13 = (FInputActionInstance *)(*pcVar7)();
        return pFVar13;
      }
      iVar11 = (this->Triggers).ArrayNum;
      if (iVar11 == (this->Triggers).ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar14->AllocatorInstance,&(this->Triggers).ArrayMax);
        (this->Triggers).ArrayNum = iVar11;
      }
      (this->Triggers).ArrayNum = iVar11 + 1;
      *(UObject **)((pTVar14->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_88;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_88 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_88);
      }
    }
    pFVar15 = pFVar15 + 8;
  } while( true );
}

// GetEvaluatedActionTriggerState @ 14a6df2f0

ETriggerState __thiscall
FInputActionInstance::GetEvaluatedActionTriggerState(FInputActionInstance *this)

{
  if ((this->TriggerStateTracker).bEvaluatedTriggers == false) {
    return (this->TriggerStateTracker).NoTriggerState;
  }
  if ((this->TriggerStateTracker).bBlocking != false) {
    return None;
  }
  if ((((this->TriggerStateTracker).bFoundExplicit == false) ||
      ((this->TriggerStateTracker).bAnyExplictTriggered != false)) &&
     ((this->TriggerStateTracker).bAllImplicitsTriggered != false)) {
    return Triggered;
  }
  return (this->TriggerStateTracker).bFoundActiveTrigger != false;
}

// GetValue @ 14a6e2c80

FInputActionValue * __thiscall
FInputActionInstance::GetValue(FInputActionInstance *this,FInputActionValue *__return_storage_ptr__)

{
  EInputActionValueType EVar1;
  double dVar2;
  double dVar3;
  undefined7 uVar4;
  double local_28;
  double dStack_20;
  double local_18;
  undefined8 uStack_10;
  
  if (UE::EnhancedInput::bAlwaysGetRealValueFromActionInstanceData) {
    dVar2 = (this->Value).Value.field0_0x0._s_0.Y;
    dVar3 = (this->Value).Value.field0_0x0._s_0.Z;
    EVar1 = (this->Value).ValueType;
    uVar4 = *(undefined7 *)&(this->Value).field_0x19;
    (__return_storage_ptr__->Value).field0_0x0._s_0.X = (this->Value).Value.field0_0x0._s_0.X;
    (__return_storage_ptr__->Value).field0_0x0._s_0.Y = dVar2;
    (__return_storage_ptr__->Value).field0_0x0._s_0.Z = dVar3;
    __return_storage_ptr__->ValueType = EVar1;
    *(undefined7 *)&__return_storage_ptr__->field_0x19 = uVar4;
    return __return_storage_ptr__;
  }
  if (this->TriggerEvent == Triggered) {
    local_28 = (this->Value).Value.field0_0x0._s_0.X;
    dStack_20 = (this->Value).Value.field0_0x0._s_0.Y;
    local_18 = (this->Value).Value.field0_0x0._s_0.Z;
    uStack_10 = *(undefined8 *)&(this->Value).ValueType;
  }
  else {
    EVar1 = (this->Value).ValueType;
    uStack_10 = CONCAT71(uStack_10._1_7_,EVar1);
    local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if ((EVar1 == Boolean) || (EVar1 == Axis1D)) {
      dStack_20 = 0.0;
    }
    else if (EVar1 != Axis2D) goto LAB_14a6e2cfd;
    local_18 = 0.0;
  }
LAB_14a6e2cfd:
  (__return_storage_ptr__->Value).field0_0x0._s_0.X = local_28;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Y = dStack_20;
  (__return_storage_ptr__->Value).field0_0x0._s_0.Z = local_18;
  *(undefined8 *)&__return_storage_ptr__->ValueType = uStack_10;
  return __return_storage_ptr__;
}

// operator() @ 1505528f0

bool __thiscall
`FInputActionInstance::FInputActionInstance'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<750240871470858267>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<750240871470858267>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

