// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b4adc50

UClass * __cdecl UDS_InputComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InputComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InputComponent",
               &Z_Registration_Info_UClass_UDS_InputComponent.InnerSingleton,
               StaticRegisterNativesUDS_InputComponent,0x180,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Input",
               InternalConstructor<UDS_InputComponent>,
               InternalVTableHelperCtorCaller<UDS_InputComponent>,local_res8,
               UEnhancedInputComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InputComponent.InnerSingleton;
}

// UDS_InputComponent @ 14b4b2920

UDS_InputComponent * __thiscall
UDS_InputComponent::UDS_InputComponent(UDS_InputComponent *this,FVTableHelper *param_1)

{
  UEnhancedInputComponent::UEnhancedInputComponent((UEnhancedInputComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// ~UDS_InputComponent @ 14b4b39d0

void __thiscall UDS_InputComponent::~UDS_InputComponent(UDS_InputComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  UEnhancedInputComponent::~UEnhancedInputComponent((UEnhancedInputComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14b4b7a80

UClass * __cdecl UDS_InputComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InputComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InputComponent",
               &Z_Registration_Info_UClass_UDS_InputComponent.InnerSingleton,
               StaticRegisterNativesUDS_InputComponent,0x180,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Input",
               InternalConstructor<UDS_InputComponent>,
               InternalVTableHelperCtorCaller<UDS_InputComponent>,local_res8,
               UEnhancedInputComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InputComponent.InnerSingleton;
}

// StaticRegisterNativesUDS_InputComponent @ 14b4b8650

void __cdecl UDS_InputComponent::StaticRegisterNativesUDS_InputComponent(void)

{
  return;
}

// BindAllInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(FInputActionValue_const_&,enum_EDS_KeyActionType,enum_ETriggerEvent)> @ 14b8a97e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InputComponent::
BindAllInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(FInputActionValue_const_&,enum_EDS_KeyActionType,enum_ETriggerEvent)>
          (UDS_InputComponent *this,UDS_InputConfig *param_1,ADS_PlayerController *param_2,
          pmf_2a4db2b5 *param_3)

{
  byte *pbVar1;
  undefined1 *puVar2;
  code *pcVar3;
  EDS_KeyActionType EVar4;
  UObject *pUVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  UDS_LogManager *pUVar11;
  FInputBindingHandle *this_00;
  FInputBindingHandle *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  undefined1 auStackY_2b8 [32];
  undefined1 local_268 [8];
  FInputBindingHandle *local_260;
  FInputBindingHandle *local_258;
  FInputBindingHandle *local_250;
  FInputBindingHandle *local_248;
  ADS_PlayerController *local_240;
  UDS_InputComponent *local_238;
  uint local_230;
  pmf_2a4db2b5 *local_228;
  UDS_InputConfig *local_220;
  FScriptContainerElement *local_218;
  UObject *local_210;
  UObject *local_208;
  UObject *local_200;
  UObject *local_1f8;
  FString local_1f0;
  FString local_1e0;
  pmf_2a4db2b5 local_1c8;
  pmf_2a4db2b5 local_1b8;
  pmf_2a4db2b5 local_1a8;
  pmf_2a4db2b5 local_198;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_188;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_240 = param_2;
  local_238 = this;
  local_228 = param_3;
  local_220 = param_1;
  if ((param_1 == (UDS_InputConfig *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputConfig",
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Input\\DS_InputComponent.h"
                         ,0x30,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_230 = (param_1->NativeInputActions).ArrayNum;
  uVar10 = (ulonglong)(int)local_230;
  pFVar14 = (param_1->NativeInputActions).AllocatorInstance.Data;
  local_218 = pFVar14 + uVar10 * 0x10;
  pFVar13 = local_218;
  do {
    while( true ) {
      pFVar12 = (FInputBindingHandle *)0x0;
      if ((param_1->NativeInputActions).ArrayNum != (int)uVar10) {
        local_268[0] = 0;
        `TCheckedPointerIterator<FDS_InputAction_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_268);
      }
      if (pFVar14 == pFVar13) {
        return;
      }
      pUVar5 = *(UObject **)pFVar14;
      EVar4 = (EDS_KeyActionType)*(undefined8 *)(pFVar14 + 8);
      if (pUVar5 == (UObject *)0x0) break;
      uVar6 = *(undefined8 *)param_3;
      uVar7 = *(undefined8 *)&param_3->field_0x8;
      this_00 = ::operator_new(0x38);
      if (this_00 != (FInputBindingHandle *)0x0) {
        FInputBindingHandle::FInputBindingHandle(this_00);
        this_00->_padding_ = (longlong)&___7FEnhancedInputActionEventBinding__6B_;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        this_00[1]._padding_ = 0;
        local_210 = pUVar5;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(this_00 + 1),(FObjectPtr)&local_210);
        pbVar1 = (byte *)((longlong)&this_00[1].Handle + 1);
        *pbVar1 = *pbVar1 & 0xfe;
        this_00->_padding_ =
             (longlong)
             &
             ___7__FEnhancedInputActionEventDelegateBinding_V__TDelegate___A6AXAEBUFInputActionValue___ZUFDefaultDelegateUserPolicy______6B_
        ;
        *(undefined1 *)&this_00[1].Handle = 2;
        this_00[2]._padding_ = 0;
        *(undefined8 *)&this_00[2].Handle = 0;
        *(undefined1 *)&this_00[3]._padding_ = 0;
        pFVar12 = this_00;
      }
      local_1c8._0_8_ = uVar6;
      local_1c8._8_8_ = uVar7;
      TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
      ::
      BindDelegate<ADS_PlayerController,TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>,enum_EDS_KeyActionType,enum_ETriggerEvent>
                ((TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
                  *)(pFVar12 + 2),local_240,&local_1c8,EVar4,Started);
      puVar2 = &this->field_0x148;
      *(undefined1 *)&pFVar12[3]._padding_ = this->field_0x178;
      local_260 = pFVar12;
      if (((*(FInputBindingHandle ***)puVar2 <= &local_260) &&
          (&local_260 < *(FInputBindingHandle ***)puVar2 + *(int *)&this->field_0x154)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = *(int *)&this->field_0x150;
      if (iVar9 == *(int *)&this->field_0x154) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)puVar2,(int *)&this->field_0x154);
      }
      *(int *)&this->field_0x150 = iVar9 + 1;
      *(FInputBindingHandle **)(*(longlong *)puVar2 + (longlong)iVar9 * 8) = local_260;
      uVar6 = *(undefined8 *)param_3;
      uVar7 = *(undefined8 *)&param_3->field_0x8;
      local_260 = (FInputBindingHandle *)0x0;
      pFVar12 = ::operator_new(0x38);
      if (pFVar12 == (FInputBindingHandle *)0x0) {
        pFVar12 = (FInputBindingHandle *)0x0;
      }
      else {
        FInputBindingHandle::FInputBindingHandle(pFVar12);
        pFVar12->_padding_ = (longlong)&___7FEnhancedInputActionEventBinding__6B_;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        pFVar12[1]._padding_ = 0;
        local_208 = pUVar5;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(pFVar12 + 1),(FObjectPtr)&local_208);
        pbVar1 = (byte *)((longlong)&pFVar12[1].Handle + 1);
        *pbVar1 = *pbVar1 & 0xfe;
        pFVar12->_padding_ =
             (longlong)
             &
             ___7__FEnhancedInputActionEventDelegateBinding_V__TDelegate___A6AXAEBUFInputActionValue___ZUFDefaultDelegateUserPolicy______6B_
        ;
        pFVar12[2]._padding_ = 0;
        *(undefined8 *)&pFVar12[2].Handle = 0;
        *(undefined1 *)&pFVar12[3]._padding_ = 0;
        *(undefined1 *)&pFVar12[1].Handle = 1;
        param_3 = local_228;
      }
      local_1b8._0_8_ = uVar6;
      local_1b8._8_8_ = uVar7;
      TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
      ::
      BindDelegate<ADS_PlayerController,TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>,enum_EDS_KeyActionType,enum_ETriggerEvent>
                ((TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
                  *)(pFVar12 + 2),local_240,&local_1b8,EVar4,Triggered);
      *(undefined1 *)&pFVar12[3]._padding_ = local_238->field_0x178;
      local_258 = pFVar12;
      if (((*(FInputBindingHandle ***)puVar2 <= &local_258) &&
          (&local_258 < *(FInputBindingHandle ***)puVar2 + *(int *)&this->field_0x154)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = *(int *)&this->field_0x150;
      if (iVar9 == *(int *)&this->field_0x154) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)puVar2,(int *)&this->field_0x154);
      }
      *(int *)&this->field_0x150 = iVar9 + 1;
      *(FInputBindingHandle **)(*(longlong *)puVar2 + (longlong)iVar9 * 8) = local_258;
      uVar6 = *(undefined8 *)param_3;
      uVar7 = *(undefined8 *)&param_3->field_0x8;
      local_258 = (FInputBindingHandle *)0x0;
      pFVar12 = ::operator_new(0x38);
      if (pFVar12 == (FInputBindingHandle *)0x0) {
        pFVar12 = (FInputBindingHandle *)0x0;
      }
      else {
        FInputBindingHandle::FInputBindingHandle(pFVar12);
        pFVar12->_padding_ = (longlong)&___7FEnhancedInputActionEventBinding__6B_;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        pFVar12[1]._padding_ = 0;
        local_200 = pUVar5;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(pFVar12 + 1),(FObjectPtr)&local_200);
        pbVar1 = (byte *)((longlong)&pFVar12[1].Handle + 1);
        *pbVar1 = *pbVar1 & 0xfe;
        pFVar12->_padding_ =
             (longlong)
             &
             ___7__FEnhancedInputActionEventDelegateBinding_V__TDelegate___A6AXAEBUFInputActionValue___ZUFDefaultDelegateUserPolicy______6B_
        ;
        pFVar12[2]._padding_ = 0;
        *(undefined8 *)&pFVar12[2].Handle = 0;
        *(undefined1 *)&pFVar12[3]._padding_ = 0;
        *(undefined1 *)&pFVar12[1].Handle = 0x10;
        param_3 = local_228;
      }
      local_1a8._0_8_ = uVar6;
      local_1a8._8_8_ = uVar7;
      TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
      ::
      BindDelegate<ADS_PlayerController,TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>,enum_EDS_KeyActionType,enum_ETriggerEvent>
                ((TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
                  *)(pFVar12 + 2),local_240,&local_1a8,EVar4,Completed);
      *(undefined1 *)&pFVar12[3]._padding_ = local_238->field_0x178;
      local_250 = pFVar12;
      if (((*(FInputBindingHandle ***)puVar2 <= &local_250) &&
          (&local_250 < *(FInputBindingHandle ***)puVar2 + *(int *)&this->field_0x154)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = *(int *)&this->field_0x150;
      if (iVar9 == *(int *)&this->field_0x154) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)puVar2,(int *)&this->field_0x154);
      }
      *(int *)&this->field_0x150 = iVar9 + 1;
      *(FInputBindingHandle **)(*(longlong *)puVar2 + (longlong)iVar9 * 8) = local_250;
      uVar6 = *(undefined8 *)param_3;
      uVar7 = *(undefined8 *)&param_3->field_0x8;
      local_250 = (FInputBindingHandle *)0x0;
      pFVar12 = ::operator_new(0x38);
      if (pFVar12 == (FInputBindingHandle *)0x0) {
        pFVar12 = (FInputBindingHandle *)0x0;
      }
      else {
        FInputBindingHandle::FInputBindingHandle(pFVar12);
        pFVar12->_padding_ = (longlong)&___7FEnhancedInputActionEventBinding__6B_;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        pFVar12[1]._padding_ = 0;
        local_1f8 = pUVar5;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(pFVar12 + 1),(FObjectPtr)&local_1f8);
        pbVar1 = (byte *)((longlong)&pFVar12[1].Handle + 1);
        *pbVar1 = *pbVar1 & 0xfe;
        pFVar12->_padding_ =
             (longlong)
             &
             ___7__FEnhancedInputActionEventDelegateBinding_V__TDelegate___A6AXAEBUFInputActionValue___ZUFDefaultDelegateUserPolicy______6B_
        ;
        pFVar12[2]._padding_ = 0;
        *(undefined8 *)&pFVar12[2].Handle = 0;
        *(undefined1 *)&pFVar12[3]._padding_ = 0;
        *(undefined1 *)&pFVar12[1].Handle = 8;
        param_3 = local_228;
      }
      local_198._0_8_ = uVar6;
      local_198._8_8_ = uVar7;
      TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
      ::
      BindDelegate<ADS_PlayerController,TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>,enum_EDS_KeyActionType,enum_ETriggerEvent>
                ((TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
                  *)(pFVar12 + 2),local_240,&local_198,EVar4,Canceled);
      *(undefined1 *)&pFVar12[3]._padding_ = local_238->field_0x178;
      local_248 = pFVar12;
      if (((*(FInputBindingHandle ***)puVar2 <= &local_248) &&
          (&local_248 < *(FInputBindingHandle ***)puVar2 + *(int *)&this->field_0x154)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = *(int *)&this->field_0x150;
      if (iVar9 == *(int *)&this->field_0x154) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)puVar2,(int *)&this->field_0x154);
      }
      *(int *)&this->field_0x150 = iVar9 + 1;
      *(FInputBindingHandle **)(*(longlong *)puVar2 + (longlong)iVar9 * 8) = local_248;
      local_248 = (FInputBindingHandle *)0x0;
      param_1 = local_220;
      pFVar13 = local_218;
      this = local_238;
LAB_14b8a9f24:
      uVar10 = (ulonglong)local_230;
      pFVar14 = pFVar14 + 0x10;
    }
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 == (UDS_LogManager *)0x0) goto LAB_14b8a9f24;
    pUVar11 = UDS_LogManager::GetInst();
    ::FString::FString(&local_1f0,"EDS_KeyActionType");
    DS_Util::GetEnumToString(&local_1e0,&local_1f0,(longlong)(int)EVar4);
    local_188._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_188,"UDS_InputComponent::BindAllInputAction",0x26,Yes);
    UDS_LogManager::PrintLog
              (pUVar11,1,Warning,local_188.Ptr,0x36,L"InputAction is nullptr. InputActionType: %s");
    if ((void *)local_188._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_188._padding_);
    }
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
    param_1 = local_220;
    pFVar13 = local_218;
    if (local_1f0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14b8a9f24;
    FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
    uVar10 = (ulonglong)local_230;
    pFVar14 = pFVar14 + 0x10;
    param_1 = local_220;
    pFVar13 = local_218;
  } while( true );
}

// BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(FInputActionValue_const_&)> @ 14b8aaf40

void __thiscall
UDS_InputComponent::
BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(FInputActionValue_const_&)>
          (UDS_InputComponent *this,UDS_InputConfig *param_1,EDS_KeyActionType param_2,
          ETriggerEvent param_3,ADS_PlayerController *param_4,pmf_cc4d16a5 *param_5,bool param_6)

{
  byte *pbVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  UInputAction *pUVar8;
  FInputBindingHandle *this_00;
  UInputAction *local_res10;
  FInputBindingHandle *local_48 [2];
  pmf_cc4d16a5 local_38 [2];
  
  if (param_1 == (UDS_InputConfig *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputConfig",
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Input\\DS_InputComponent.h"
                       ,0x25,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar8 = UDS_InputConfig::FindNativeInputAction(param_1,param_2,true);
  if (pUVar8 != (UInputAction *)0x0) {
    uVar4 = *(undefined8 *)param_5;
    uVar5 = *(undefined8 *)&param_5->field_0x8;
    this_00 = ::operator_new(0x38);
    if (this_00 == (FInputBindingHandle *)0x0) {
      this_00 = (FInputBindingHandle *)0x0;
    }
    else {
      FInputBindingHandle::FInputBindingHandle(this_00);
      this_00->_padding_ = (longlong)&___7FEnhancedInputActionEventBinding__6B_;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      this_00[1]._padding_ = 0;
      local_res10 = pUVar8;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(this_00 + 1),(FObjectPtr)&local_res10);
      pbVar1 = (byte *)((longlong)&this_00[1].Handle + 1);
      *pbVar1 = *pbVar1 & 0xfe;
      this_00->_padding_ =
           (longlong)
           &
           ___7__FEnhancedInputActionEventDelegateBinding_V__TDelegate___A6AXAEBUFInputActionValue___ZUFDefaultDelegateUserPolicy______6B_
      ;
      *(ETriggerEvent *)&this_00[1].Handle = param_3;
      this_00[2]._padding_ = 0;
      *(undefined8 *)&this_00[2].Handle = 0;
      *(undefined1 *)&this_00[3]._padding_ = 0;
    }
    local_38[0]._0_8_ = uVar4;
    local_38[0]._8_8_ = uVar5;
    TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
    ::
    BindDelegate<ADS_PlayerController,TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
              ((TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(FInputActionValue_const_&),FDefaultDelegateUserPolicy>_>
                *)(this_00 + 2),param_4,local_38);
    puVar2 = &this->field_0x148;
    *(undefined1 *)&this_00[3]._padding_ = this->field_0x178;
    local_48[0] = this_00;
    if ((*(FInputBindingHandle ***)puVar2 <= local_48) &&
       (local_48 < *(FInputBindingHandle ***)puVar2 + *(int *)&this->field_0x154)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar7 = *(int *)&this->field_0x150;
    if (iVar7 == *(int *)&this->field_0x154) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)puVar2,(int *)&this->field_0x154);
    }
    *(int *)&this->field_0x150 = iVar7 + 1;
    *(FInputBindingHandle **)(*(longlong *)puVar2 + (longlong)iVar7 * 8) = local_48[0];
  }
  return;
}

// BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(void)> @ 14b8ab150

void __thiscall
UDS_InputComponent::
BindInputAction<ADS_PlayerController,void_(__cdecl_ADS_PlayerController::*)(void)>
          (UDS_InputComponent *this,UDS_InputConfig *param_1,EDS_KeyActionType param_2,
          ETriggerEvent param_3,ADS_PlayerController *param_4,pmf_28ef44d0 *param_5,bool param_6)

{
  byte *pbVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  UInputAction *pUVar8;
  FInputBindingHandle *this_00;
  UInputAction *local_res10;
  FInputBindingHandle *local_48 [2];
  pmf_28ef44d0 local_38 [2];
  
  if (param_1 == (UDS_InputConfig *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputConfig",
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Input\\DS_InputComponent.h"
                       ,0x25,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar8 = UDS_InputConfig::FindNativeInputAction(param_1,param_2,true);
  if (pUVar8 != (UInputAction *)0x0) {
    uVar4 = *(undefined8 *)param_5;
    uVar5 = *(undefined8 *)&param_5->field_0x8;
    this_00 = ::operator_new(0x38);
    if (this_00 == (FInputBindingHandle *)0x0) {
      this_00 = (FInputBindingHandle *)0x0;
    }
    else {
      FInputBindingHandle::FInputBindingHandle(this_00);
      this_00->_padding_ = (longlong)&___7FEnhancedInputActionEventBinding__6B_;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      this_00[1]._padding_ = 0;
      local_res10 = pUVar8;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(this_00 + 1),(FObjectPtr)&local_res10);
      pbVar1 = (byte *)((longlong)&this_00[1].Handle + 1);
      *pbVar1 = *pbVar1 & 0xfe;
      this_00->_padding_ =
           (longlong)
           &
           ___7__FEnhancedInputActionEventDelegateBinding_V__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
      ;
      *(ETriggerEvent *)&this_00[1].Handle = param_3;
      this_00[2]._padding_ = 0;
      *(undefined8 *)&this_00[2].Handle = 0;
      *(undefined1 *)&this_00[3]._padding_ = 0;
    }
    local_38[0]._0_8_ = uVar4;
    local_38[0]._8_8_ = uVar5;
    TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>::
    BindDelegate<ADS_PlayerController,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
              ((TEnhancedInputUnifiedDelegate<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
                *)(this_00 + 2),param_4,local_38);
    puVar2 = &this->field_0x148;
    *(undefined1 *)&this_00[3]._padding_ = this->field_0x178;
    local_48[0] = this_00;
    if ((*(FInputBindingHandle ***)puVar2 <= local_48) &&
       (local_48 < *(FInputBindingHandle ***)puVar2 + *(int *)&this->field_0x154)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar7 = *(int *)&this->field_0x150;
    if (iVar7 == *(int *)&this->field_0x154) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)puVar2,(int *)&this->field_0x154);
    }
    *(int *)&this->field_0x150 = iVar7 + 1;
    *(FInputBindingHandle **)(*(longlong *)puVar2 + (longlong)iVar7 * 8) = local_48[0];
  }
  return;
}

// UDS_InputComponent @ 14b999a00

UDS_InputComponent * __thiscall
UDS_InputComponent::UDS_InputComponent(UDS_InputComponent *this,FObjectInitializer *param_1)

{
  UEnhancedInputComponent::UEnhancedInputComponent((UEnhancedInputComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

