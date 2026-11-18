// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// BindAction<ADS_PlayerController,enum_ETriggerEvent> @ 14b8a9420

FEnhancedInputActionEventBinding * __thiscall
UEnhancedInputComponent::BindAction<ADS_PlayerController,enum_ETriggerEvent>
          (UEnhancedInputComponent *this,UInputAction *param_1,ETriggerEvent param_2,
          ADS_PlayerController *param_3,pmf_122f22a7 *param_4,ETriggerEvent param_5)

{
  byte *pbVar1;
  int *piVar2;
  TArray<TUniquePtr<FEnhancedInputActionEventBinding,TDefaultDelete<FEnhancedInputActionEventBinding>_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FInputBindingHandle *this_00;
  FEnhancedInputActionEventBinding *pFVar8;
  UInputAction *local_res8;
  FInputBindingHandle *local_48 [2];
  pmf_122f22a7 local_38;
  
  this_00 = ::operator_new(0x38);
  if (this_00 == (FInputBindingHandle *)0x0) {
    this_00 = (FInputBindingHandle *)0x0;
  }
  else {
    FInputBindingHandle::FInputBindingHandle(this_00);
    this_00->_padding_ = (longlong)&___7FEnhancedInputActionEventBinding__6B_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UInputAction *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    this_00[1]._padding_ = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UInputAction *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(this_00 + 1),(FObjectPtr)&local_res8);
    pbVar1 = (byte *)((longlong)&this_00[1].Handle + 1);
    *pbVar1 = *pbVar1 & 0xfe;
    this_00->_padding_ =
         (longlong)
         &
         ___7__FEnhancedInputActionEventDelegateBinding_V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
    ;
    *(ETriggerEvent *)&this_00[1].Handle = param_2;
    this_00[2]._padding_ = 0;
    *(undefined8 *)&this_00[2].Handle = 0;
    *(undefined1 *)&this_00[3]._padding_ = 0;
  }
  local_38._0_8_ = *(undefined8 *)param_4;
  local_38._8_8_ = *(undefined8 *)&param_4->field_0x8;
  TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>::
  BindDelegate<ADS_PlayerController,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,enum_ETriggerEvent>
            ((TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
              *)(this_00 + 2),param_3,&local_38,param_5);
  pTVar3 = &this->EnhancedActionEventBindings;
  *(bool *)&this_00[3]._padding_ = this->bShouldFireDelegatesInEditor;
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  local_48[0] = this_00;
  if ((pFVar4 <= (FScriptContainerElement *)local_48) &&
     ((FScriptContainerElement *)local_48 <
      pFVar4 + (longlong)(this->EnhancedActionEventBindings).ArrayMax * 8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FEnhancedInputActionEventBinding *)(*pcVar5)();
      return pFVar8;
    }
  }
  iVar7 = (this->EnhancedActionEventBindings).ArrayNum;
  piVar2 = &(this->EnhancedActionEventBindings).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar3->AllocatorInstance,piVar2);
  }
  (this->EnhancedActionEventBindings).ArrayNum = iVar7 + 1;
  pFVar4 = (pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 8;
  *(FInputBindingHandle **)pFVar4 = local_48[0];
  return *(FEnhancedInputActionEventBinding **)pFVar4;
}

// BindAction<ADS_PlayerController,enum_ETriggerEvent> @ 14b8a9600

FEnhancedInputActionEventBinding * __thiscall
UEnhancedInputComponent::BindAction<ADS_PlayerController,enum_ETriggerEvent>
          (UEnhancedInputComponent *this,UInputAction *param_1,ETriggerEvent param_2,
          ADS_PlayerController *param_3,pmf_65f1f248 *param_4,ETriggerEvent param_5)

{
  byte *pbVar1;
  int *piVar2;
  TArray<TUniquePtr<FEnhancedInputActionEventBinding,TDefaultDelete<FEnhancedInputActionEventBinding>_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FInputBindingHandle *this_00;
  FEnhancedInputActionEventBinding *pFVar8;
  UInputAction *local_res8;
  FInputBindingHandle *local_48 [2];
  pmf_65f1f248 local_38;
  
  this_00 = ::operator_new(0x38);
  if (this_00 == (FInputBindingHandle *)0x0) {
    this_00 = (FInputBindingHandle *)0x0;
  }
  else {
    FInputBindingHandle::FInputBindingHandle(this_00);
    this_00->_padding_ = (longlong)&___7FEnhancedInputActionEventBinding__6B_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UInputAction *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    this_00[1]._padding_ = 0;
    local_res8 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UInputAction *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(this_00 + 1),(FObjectPtr)&local_res8);
    pbVar1 = (byte *)((longlong)&this_00[1].Handle + 1);
    *pbVar1 = *pbVar1 & 0xfe;
    this_00->_padding_ =
         (longlong)
         &
         ___7__FEnhancedInputActionEventDelegateBinding_V__TDelegate___A6AXAEBUFInputActionValue___ZUFDefaultDelegateUserPolicy______6B_
    ;
    *(ETriggerEvent *)&this_00[1].Handle = param_2;
    this_00[2]._padding_ = 0;
    *(undefined8 *)&this_00[2].Handle = 0;
    *(undefined1 *)&this_00[3]._padding_ = 0;
  }
  local_38._0_8_ = *(undefined8 *)param_4;
  local_38._8_8_ = *(undefined8 *)&param_4->field_0x8;
  TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
  ::
  BindDelegate<ADS_PlayerController,TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>,enum_ETriggerEvent>
            ((TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
              *)(this_00 + 2),param_3,&local_38,param_5);
  pTVar3 = &this->EnhancedActionEventBindings;
  *(bool *)&this_00[3]._padding_ = this->bShouldFireDelegatesInEditor;
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  local_48[0] = this_00;
  if ((pFVar4 <= (FScriptContainerElement *)local_48) &&
     ((FScriptContainerElement *)local_48 <
      pFVar4 + (longlong)(this->EnhancedActionEventBindings).ArrayMax * 8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FEnhancedInputActionEventBinding *)(*pcVar5)();
      return pFVar8;
    }
  }
  iVar7 = (this->EnhancedActionEventBindings).ArrayNum;
  piVar2 = &(this->EnhancedActionEventBindings).ArrayMax;
  if (iVar7 == *piVar2) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar3->AllocatorInstance,piVar2);
  }
  (this->EnhancedActionEventBindings).ArrayNum = iVar7 + 1;
  pFVar4 = (pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 8;
  *(FInputBindingHandle **)pFVar4 = local_48[0];
  return *(FEnhancedInputActionEventBinding **)pFVar4;
}

