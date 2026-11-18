// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 25

// StaticClass @ 149672500

UClass * __cdecl UInputRouter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputRouter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InputRouter",
               &Z_Registration_Info_UClass_UInputRouter.InnerSingleton,
               StaticRegisterNativesUInputRouter,400,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputRouter>,
               InternalVTableHelperCtorCaller<UInputRouter>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputRouter.InnerSingleton;
}

// UInputRouter @ 149686f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UInputRouter * __thiscall UInputRouter::UInputRouter(UInputRouter *this)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  UClass *pUVar5;
  UInputBehaviorSet *pUVar6;
  UInputRouter *pUVar7;
  TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *this_00;
  longlong *plVar8;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_a0 [16];
  UInputRouter *local_90;
  FName local_88;
  undefined4 local_80;
  bool local_78;
  IToolsContextTransactionsAPI *local_70;
  TObjectPtr<UInputBehaviorSet>_u_0 local_68;
  UInputBehavior *pUStack_60;
  void *local_58;
  longlong local_48 [3];
  longlong *local_30;
  void *local_18;
  
  local_18 = (void *)(__security_cookie.value ^ (ulonglong)auStack_c8);
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UInputRouter__6B_;
  (this->ActiveInputBehaviors).field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
  this->ActiveKeyboardCapture = (UInputBehavior *)0x0;
  this->ActiveKeyboardCaptureOwner = (void *)0x0;
  (this->ActiveKeyboardCaptureData).WhichSide = None;
  (this->ActiveKeyboardCaptureData).CustomData = (void *)0x0;
  this->ActiveLeftCapture = (UInputBehavior *)0x0;
  this->ActiveLeftCaptureOwner = (void *)0x0;
  (this->ActiveLeftCaptureData).WhichSide = None;
  (this->ActiveLeftCaptureData).CustomData = (void *)0x0;
  this->ActiveRightCapture = (UInputBehavior *)0x0;
  this->ActiveRightCaptureOwner = (void *)0x0;
  (this->ActiveRightCaptureData).WhichSide = None;
  (this->ActiveRightCaptureData).CustomData = (void *)0x0;
  this->ActiveLeftHoverCapture = (UInputBehavior *)0x0;
  this->ActiveLeftHoverCaptureOwner = (void *)0x0;
  FInputDeviceState::FInputDeviceState(&this->LastMouseInputState);
  this->ActiveLeftCapture = (UInputBehavior *)0x0;
  this->ActiveLeftCaptureOwner = (void *)0x0;
  this->ActiveRightCapture = (UInputBehavior *)0x0;
  this->ActiveRightCaptureOwner = (void *)0x0;
  this->ActiveKeyboardCapture = (UInputBehavior *)0x0;
  this->ActiveKeyboardCaptureOwner = (void *)0x0;
  this->bAutoInvalidateOnHover = false;
  this->bAutoInvalidateOnCapture = false;
  pFVar4 = ::FName::FName(&local_a8,"InputBehaviors");
  FVar1 = *pFVar4;
  if (FVar1 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar5 = UInputBehaviorSet::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)(local_a0 + 8),pUVar5);
  local_68.DebugPtr = (UInputBehaviorSet *)0x0;
  pUStack_60 = (UInputBehavior *)0x0;
  local_80 = 0;
  local_70 = (IToolsContextTransactionsAPI *)0x0;
  local_78 = false;
  local_90 = this;
  local_88 = FVar1;
  pUVar6 = (UInputBehaviorSet *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)(local_a0 + 8));
  if (local_58 != (void *)0x0) {
    plVar8 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar8 = local_30;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UInputBehaviorSet *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->ActiveInputBehaviors).field0_0x0.DebugPtr = pUVar6;
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentApplication.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                         ,0x141,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar7 = (UInputRouter *)(*pcVar2)();
        return pUVar7;
      }
    }
    bVar3 = IsInGameThread();
    if (!bVar3) {
      bVar3 = IsInSlateThread();
      if (!bVar3) {
        bVar3 = (*IsInAsyncLoadingThread)();
        if (!bVar3) {
          bVar3 = IsInParallelLoadingThread();
          if (!bVar3) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInGameThread() || IsInSlateThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                               ,0x142,L"");
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pUVar7 = (UInputRouter *)(*pcVar2)();
              return pUVar7;
            }
          }
        }
      }
    }
    if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar7 = (UInputRouter *)(*pcVar2)();
        return pUVar7;
      }
    }
    this_00 = (TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
              (**(code **)(*(longlong *)FSlateApplication::CurrentApplication.Object + 0x1e8))();
    TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
    AddUObject<UInputRouter>(this_00,(UInputRouter *)local_a0,(pmf_f7a4f3a8)this);
  }
  return this;
}

// UInputRouter @ 1496871c0

UInputRouter * __thiscall UInputRouter::UInputRouter(UInputRouter *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInputRouter__6B_;
  (this->ActiveInputBehaviors).field0_0x0.DebugPtr = (UInputBehaviorSet *)0x0;
  this->ActiveKeyboardCapture = (UInputBehavior *)0x0;
  this->ActiveKeyboardCaptureOwner = (void *)0x0;
  (this->ActiveKeyboardCaptureData).WhichSide = None;
  (this->ActiveKeyboardCaptureData).CustomData = (void *)0x0;
  this->ActiveLeftCapture = (UInputBehavior *)0x0;
  this->ActiveLeftCaptureOwner = (void *)0x0;
  (this->ActiveLeftCaptureData).WhichSide = None;
  (this->ActiveLeftCaptureData).CustomData = (void *)0x0;
  this->ActiveRightCapture = (UInputBehavior *)0x0;
  this->ActiveRightCaptureOwner = (void *)0x0;
  (this->ActiveRightCaptureData).WhichSide = None;
  (this->ActiveRightCaptureData).CustomData = (void *)0x0;
  this->ActiveLeftHoverCapture = (UInputBehavior *)0x0;
  this->ActiveLeftHoverCaptureOwner = (void *)0x0;
  FInputDeviceState::FInputDeviceState(&this->LastMouseInputState);
  return this;
}

// ~UInputRouter @ 14968a430

/* WARNING: Type propagation algorithm not settling */

void __thiscall UInputRouter::~UInputRouter(UInputRouter *this)

{
  this->_padding_ = (longlong)&___7UInputRouter__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LastMouseInputState).Mouse.Right.Button.KeyDetails.SharedReferenceCount.
             ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LastMouseInputState).Mouse.Middle.Button.KeyDetails.SharedReferenceCount.
             ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LastMouseInputState).Mouse.Left.Button.KeyDetails.SharedReferenceCount.
             ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LastMouseInputState).Keyboard.ActiveKey.Button.KeyDetails.SharedReferenceCount.
             ReferenceController);
  UObject::~UObject((UObject *)this);
  return;
}

// CheckForKeyboardCaptures @ 149697050

void __thiscall
UInputRouter::CheckForKeyboardCaptures(UInputRouter *this,FInputDeviceState *param_1)

{
  UInputBehaviorSet *pUVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  FIdentityFunctor local_res8 [8];
  FInputCaptureRequest *local_48;
  ulonglong local_40;
  int local_38 [2];
  UInputBehavior *local_30;
  undefined8 local_28;
  void *pvStack_20;
  
  local_48 = (FInputCaptureRequest *)0x0;
  pUVar1 = (this->ActiveInputBehaviors).field0_0x0.DebugPtr;
  local_40 = 0;
  (**(code **)(pUVar1->_padding_ + 0x2e8))(pUVar1,param_1,&local_48);
  if ((int)local_40 != 0) {
    AlgoImpl::
    StableSortInternal<FInputCaptureRequest,FIdentityFunctor,TDereferenceWrapper<FInputCaptureRequest,TLess<void>_>_>
              (local_48,(int)local_40,local_res8[0],(TLess<void> *)local_res8);
    uVar7 = local_40 & 0xffffffff;
    bVar5 = false;
    uVar8 = 0;
    if (0 < (int)local_40) {
      lVar9 = 0;
      do {
        if (bVar5) break;
        uVar6 = 0;
        if ((int)uVar8 < (int)uVar7) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar2 = *(longlong **)((longlong)&local_48->Source + lVar9);
        (**(code **)(*plVar2 + 0x2d0))(plVar2,local_38,param_1,1);
        if (local_38[0] == 1) {
          uVar7 = (ulonglong)(int)local_40;
          this->ActiveKeyboardCapture = local_30;
          uVar6 = 0;
          if ((int)uVar8 < (int)local_40) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar7 = local_40 & 0xffffffff;
          }
          bVar5 = true;
          this->ActiveKeyboardCaptureOwner = *(void **)((longlong)&local_48->Owner + lVar9);
          *(undefined8 *)&this->ActiveKeyboardCaptureData = local_28;
          (this->ActiveKeyboardCaptureData).CustomData = pvStack_20;
        }
        else {
          uVar7 = local_40 & 0xffffffff;
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x20;
      } while ((int)uVar8 < (int)uVar7);
    }
  }
  if (local_48 != (FInputCaptureRequest *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// CheckForMouseCaptures @ 149697220

void __thiscall UInputRouter::CheckForMouseCaptures(UInputRouter *this,FInputDeviceState *param_1)

{
  UInputBehaviorSet *pUVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  FIdentityFunctor local_res8 [8];
  FInputCaptureRequest *local_58;
  ulonglong local_50;
  int local_48 [2];
  UInputBehavior *local_40;
  undefined8 local_38;
  void *pvStack_30;
  
  pUVar1 = (this->ActiveInputBehaviors).field0_0x0.DebugPtr;
  uVar9 = 0;
  local_58 = (FInputCaptureRequest *)0x0;
  local_50 = 0;
  (**(code **)(pUVar1->_padding_ + 0x2e8))(pUVar1,param_1,&local_58);
  if ((int)local_50 != 0) {
    AlgoImpl::
    StableSortInternal<FInputCaptureRequest,FIdentityFunctor,TDereferenceWrapper<FInputCaptureRequest,TLess<void>_>_>
              (local_58,(int)local_50,local_res8[0],(TLess<void> *)local_res8);
    uVar7 = local_50 & 0xffffffff;
    bVar5 = false;
    uVar10 = uVar9;
    if (0 < (int)local_50) {
      do {
        if (bVar5) break;
        uVar8 = (uint)uVar9;
        uVar6 = 0;
        if ((int)uVar8 < (int)uVar7) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar2 = *(longlong **)((longlong)&local_58->Source + uVar10);
        (**(code **)(*plVar2 + 0x2d0))(plVar2,local_48,param_1,1);
        if (local_48[0] == 1) {
          if (this->ActiveLeftHoverCapture != (UInputBehavior *)0x0) {
            (**(code **)(this->ActiveLeftHoverCapture->_padding_ + 0x308))();
            this->ActiveLeftHoverCapture = (UInputBehavior *)0x0;
            this->ActiveLeftCaptureOwner = (void *)0x0;
          }
          uVar7 = (ulonglong)(int)local_50;
          this->ActiveLeftCapture = local_40;
          uVar6 = 0;
          if ((int)uVar8 < (int)local_50) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar7 = local_50 & 0xffffffff;
          }
          this->ActiveLeftCaptureOwner = *(void **)((longlong)&local_58->Owner + uVar10);
          bVar5 = true;
          *(undefined8 *)&this->ActiveLeftCaptureData = local_38;
          (this->ActiveLeftCaptureData).CustomData = pvStack_30;
        }
        else {
          uVar7 = local_50 & 0xffffffff;
        }
        uVar9 = (ulonglong)(uVar8 + 1);
        uVar10 = uVar10 + 0x20;
      } while ((int)(uVar8 + 1) < (int)uVar7);
    }
  }
  if (local_58 != (FInputCaptureRequest *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// DeregisterSource @ 14969c290

void __thiscall UInputRouter::DeregisterSource(UInputRouter *this,IInputBehaviorSource *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014969c297. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->ActiveInputBehaviors).field0_0x0.DebugPtr)->_padding_ + 0x2d8))();
  return;
}

// ForceTerminateAll @ 14969f530

void __thiscall UInputRouter::ForceTerminateAll(UInputRouter *this)

{
  undefined8 *puVar1;
  UInputBehavior *pUVar2;
  UInputBehaviorSet *pUVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined1 local_res8 [8];
  undefined8 *local_28;
  ulonglong local_20;
  undefined4 local_18;
  uint uStack_14;
  undefined8 uStack_10;
  
  pUVar2 = this->ActiveKeyboardCapture;
  if (pUVar2 != (UInputBehavior *)0x0) {
    (**(code **)(pUVar2->_padding_ + 0x2e0))(pUVar2,&this->ActiveKeyboardCaptureData);
    local_18 = 0;
    uStack_10 = 0;
    this->ActiveKeyboardCapture = (UInputBehavior *)0x0;
    this->ActiveKeyboardCaptureOwner = (void *)0x0;
    *(ulonglong *)&this->ActiveKeyboardCaptureData = (ulonglong)uStack_14 << 0x20;
    (this->ActiveKeyboardCaptureData).CustomData = (void *)0x0;
  }
  pUVar2 = this->ActiveLeftCapture;
  if (pUVar2 != (UInputBehavior *)0x0) {
    (**(code **)(pUVar2->_padding_ + 0x2e0))(pUVar2,&this->ActiveLeftCaptureData);
    local_18 = 0;
    uStack_10 = 0;
    this->ActiveLeftCapture = (UInputBehavior *)0x0;
    this->ActiveLeftCaptureOwner = (void *)0x0;
    *(ulonglong *)&this->ActiveLeftCaptureData = (ulonglong)uStack_14 << 0x20;
    (this->ActiveLeftCaptureData).CustomData = (void *)0x0;
  }
  pUVar2 = this->ActiveRightCapture;
  if (pUVar2 != (UInputBehavior *)0x0) {
    (**(code **)(pUVar2->_padding_ + 0x2e0))(pUVar2,&this->ActiveRightCaptureData);
    local_18 = 0;
    uStack_10 = 0;
    this->ActiveRightCapture = (UInputBehavior *)0x0;
    this->ActiveRightCaptureOwner = (void *)0x0;
    *(ulonglong *)&this->ActiveRightCaptureData = (ulonglong)uStack_14 << 0x20;
    (this->ActiveRightCaptureData).CustomData = (void *)0x0;
  }
  if (this->ActiveLeftHoverCapture != (UInputBehavior *)0x0) {
    (**(code **)(this->ActiveLeftHoverCapture->_padding_ + 0x308))();
    this->ActiveLeftHoverCapture = (UInputBehavior *)0x0;
    this->ActiveLeftCaptureOwner = (void *)0x0;
  }
  pUVar3 = (this->ActiveInputBehaviors).field0_0x0.DebugPtr;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  (**(code **)(pUVar3->_padding_ + 0x2f8))(pUVar3,&local_28);
  iVar4 = (int)local_20;
  uVar5 = (ulonglong)(int)local_20;
  puVar1 = local_28 + uVar5;
  puVar6 = local_28;
  while( true ) {
    if ((int)uVar5 != iVar4) {
      `TCheckedPointerIterator<UInputBehavior_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (puVar6 == puVar1) break;
    local_18 = 0;
    uStack_10 = 0;
    (**(code **)(*(longlong *)*puVar6 + 0x2e0))((longlong *)*puVar6,&local_18);
    uVar5 = local_20 & 0xffffffff;
    puVar6 = puVar6 + 1;
  }
  if (local_28 != (undefined8 *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// ForceTerminateSource @ 14969f6a0

void __thiscall UInputRouter::ForceTerminateSource(UInputRouter *this,IInputBehaviorSource *param_1)

{
  UInputBehavior *pUVar1;
  uint uStack_14;
  
  pUVar1 = this->ActiveKeyboardCapture;
  if ((pUVar1 != (UInputBehavior *)0x0) && (this->ActiveKeyboardCaptureOwner == param_1)) {
    (**(code **)(pUVar1->_padding_ + 0x2e0))(pUVar1,&this->ActiveKeyboardCaptureData);
    this->ActiveKeyboardCapture = (UInputBehavior *)0x0;
    this->ActiveKeyboardCaptureOwner = (void *)0x0;
    *(ulonglong *)&this->ActiveKeyboardCaptureData = (ulonglong)uStack_14 << 0x20;
    (this->ActiveKeyboardCaptureData).CustomData = (void *)0x0;
  }
  pUVar1 = this->ActiveLeftCapture;
  if ((pUVar1 != (UInputBehavior *)0x0) && (this->ActiveLeftCaptureOwner == param_1)) {
    (**(code **)(pUVar1->_padding_ + 0x2e0))(pUVar1,&this->ActiveLeftCaptureData);
    this->ActiveLeftCapture = (UInputBehavior *)0x0;
    this->ActiveLeftCaptureOwner = (void *)0x0;
    *(ulonglong *)&this->ActiveLeftCaptureData = (ulonglong)uStack_14 << 0x20;
    (this->ActiveLeftCaptureData).CustomData = (void *)0x0;
  }
  pUVar1 = this->ActiveRightCapture;
  if ((pUVar1 != (UInputBehavior *)0x0) && (this->ActiveRightCaptureOwner == param_1)) {
    (**(code **)(pUVar1->_padding_ + 0x2e0))(pUVar1,&this->ActiveRightCaptureData);
    this->ActiveRightCapture = (UInputBehavior *)0x0;
    this->ActiveRightCaptureOwner = (void *)0x0;
    *(ulonglong *)&this->ActiveRightCaptureData = (ulonglong)uStack_14 << 0x20;
    (this->ActiveRightCaptureData).CustomData = (void *)0x0;
  }
  if ((this->ActiveLeftHoverCapture != (UInputBehavior *)0x0) &&
     (this->ActiveLeftHoverCaptureOwner == param_1)) {
    (**(code **)(this->ActiveLeftHoverCapture->_padding_ + 0x308))();
    this->ActiveLeftHoverCapture = (UInputBehavior *)0x0;
    this->ActiveLeftCaptureOwner = (void *)0x0;
  }
  return;
}

// GetPrivateStaticClass @ 1496a6ad0

UClass * __cdecl UInputRouter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputRouter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"InputRouter",
               &Z_Registration_Info_UClass_UInputRouter.InnerSingleton,
               StaticRegisterNativesUInputRouter,400,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputRouter>,
               InternalVTableHelperCtorCaller<UInputRouter>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputRouter.InnerSingleton;
}

// HandleCapturedKeyboardInput @ 1496ab400

void __thiscall
UInputRouter::HandleCapturedKeyboardInput(UInputRouter *this,FInputDeviceState *param_1)

{
  UInputBehaviorSet *pUVar1;
  UInputBehavior *pUVar2;
  UInputBehavior *pUVar3;
  IToolsContextTransactionsAPI *pIVar4;
  code *pcVar5;
  FInputCaptureRequest *pFVar6;
  char cVar7;
  bool bVar8;
  int *piVar9;
  int *piVar10;
  FText *pFVar11;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FInputCaptureRequest *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined8 uStack_90;
  FText local_88;
  int local_78 [2];
  UInputBehavior *local_70;
  undefined8 local_68;
  void *pvStack_60;
  int local_58 [8];
  
  if (this->ActiveKeyboardCapture == (UInputBehavior *)0x0) {
    return;
  }
  cVar7 = (**(code **)(this->ActiveKeyboardCapture->_padding_ + 0x318))();
  if (cVar7 != '\0') {
    pUVar1 = (this->ActiveInputBehaviors).field0_0x0.DebugPtr;
    local_b8 = (FInputCaptureRequest *)0x0;
    local_b0 = 0;
    (**(code **)(pUVar1->_padding_ + 0x2e8))(pUVar1,param_1,&local_b8);
    bVar8 = false;
    if ((int)local_b0 != 0) {
      AlgoImpl::
      StableSortInternal<FInputCaptureRequest,FIdentityFunctor,TDereferenceWrapper<FInputCaptureRequest,TLess<void>_>_>
                (local_b8,(int)local_b0,local_res8[0],(TLess<void> *)local_res8);
      if (((int)local_b0 < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar6 = local_b8;
      pUVar2 = this->ActiveKeyboardCapture;
      pUVar3 = local_b8->Source;
      bVar8 = false;
      if (pUVar3 != pUVar2) {
        piVar9 = (int *)(**(code **)(pUVar2->_padding_ + 0x2b0))(pUVar2,local_res18);
        piVar10 = (int *)(**(code **)(pUVar3->_padding_ + 0x2b0))(pUVar3,local_res20);
        bVar8 = false;
        if (*piVar10 < *piVar9) {
          (**(code **)(this->ActiveKeyboardCapture->_padding_ + 0x2e0))
                    (this->ActiveKeyboardCapture,&this->ActiveKeyboardCaptureData);
          this->ActiveKeyboardCapture = (UInputBehavior *)0x0;
          this->ActiveKeyboardCaptureOwner = (void *)0x0;
          local_a8 = 0;
          uStack_a0 = 0;
          (this->ActiveKeyboardCaptureData).WhichSide = None;
          *(undefined4 *)&(this->ActiveKeyboardCaptureData).field_0x4 = uStack_a4;
          *(undefined4 *)&(this->ActiveKeyboardCaptureData).CustomData = 0;
          *(undefined4 *)((longlong)&(this->ActiveKeyboardCaptureData).CustomData + 4) = 0;
          pUVar2 = pFVar6->Source;
          (**(code **)(pUVar2->_padding_ + 0x2d0))(pUVar2,local_78,param_1,1);
          if (local_78[0] == 1) {
            this->ActiveKeyboardCapture = local_70;
            this->ActiveKeyboardCaptureOwner = pFVar6->Owner;
            *(undefined8 *)&this->ActiveKeyboardCaptureData = local_68;
            (this->ActiveKeyboardCaptureData).CustomData = pvStack_60;
          }
          bVar8 = true;
        }
      }
    }
    if (local_b8 != (FInputCaptureRequest *)0x0) {
      FMemory::Free(local_b8);
    }
    if (bVar8) goto LAB_1496ab60a;
  }
  (**(code **)(this->ActiveKeyboardCapture->_padding_ + 0x2d8))
            (this->ActiveKeyboardCapture,local_58,param_1,&this->ActiveKeyboardCaptureData);
  if (local_58[0] == 3) {
    local_98 = 0;
    uStack_90 = 0;
    this->ActiveKeyboardCapture = (UInputBehavior *)0x0;
    this->ActiveKeyboardCaptureOwner = (void *)0x0;
    *(ulonglong *)&this->ActiveKeyboardCaptureData = (ulonglong)uStack_94 << 0x20;
    (this->ActiveKeyboardCaptureData).CustomData = (void *)0x0;
  }
  else if (local_58[0] != 2) {
    pIVar4 = this->TransactionsAPI;
    pcVar5 = *(code **)((longlong)*pIVar4 + 8);
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_88,L"UInputRouter",L"HandleCapturedKeyboardInputMessage",
                         L"UInteractiveToolManager::HandleCapturedKeyboardInput - unexpected capture state!"
                        );
    (*pcVar5)(pIVar4,pFVar11,0);
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
  }
LAB_1496ab60a:
  if (this->bAutoInvalidateOnCapture != false) {
    (**(code **)((longlong)*this->TransactionsAPI + 0x10))();
  }
  return;
}

// HandleCapturedMouseInput @ 1496ab650

void __thiscall
UInputRouter::HandleCapturedMouseInput(UInputRouter *this,FInputDeviceState *param_1)

{
  UInputBehaviorSet *pUVar1;
  UInputBehavior *pUVar2;
  UInputBehavior *pUVar3;
  IToolsContextTransactionsAPI *pIVar4;
  code *pcVar5;
  FInputCaptureRequest *pFVar6;
  char cVar7;
  bool bVar8;
  int *piVar9;
  int *piVar10;
  FText *pFVar11;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FInputCaptureRequest *local_c8;
  undefined8 local_c0;
  void *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined8 uStack_90;
  FText local_88;
  int local_78 [2];
  UInputBehavior *local_70;
  undefined8 local_68;
  void *pvStack_60;
  int local_58 [8];
  
  if ((param_1->InputDevice & Mouse) != None) {
    pUVar1 = (this->ActiveInputBehaviors).field0_0x0.DebugPtr;
    local_b8 = (void *)0x0;
    local_b0 = 0;
    (**(code **)(pUVar1->_padding_ + 0x2e8))(pUVar1,param_1,&local_b8);
    if (local_b8 != (void *)0x0) {
      FMemory::Free(local_b8);
    }
  }
  if (this->ActiveLeftCapture == (UInputBehavior *)0x0) {
    return;
  }
  cVar7 = (**(code **)(this->ActiveLeftCapture->_padding_ + 0x318))();
  if (cVar7 != '\0') {
    pUVar1 = (this->ActiveInputBehaviors).field0_0x0.DebugPtr;
    local_c8 = (FInputCaptureRequest *)0x0;
    local_c0 = 0;
    (**(code **)(pUVar1->_padding_ + 0x2e8))(pUVar1,param_1,&local_c8);
    bVar8 = false;
    if ((int)local_c0 != 0) {
      AlgoImpl::
      StableSortInternal<FInputCaptureRequest,FIdentityFunctor,TDereferenceWrapper<FInputCaptureRequest,TLess<void>_>_>
                (local_c8,(int)local_c0,local_res8[0],(TLess<void> *)local_res8);
      if (((int)local_c0 < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar6 = local_c8;
      pUVar2 = this->ActiveLeftCapture;
      pUVar3 = local_c8->Source;
      bVar8 = false;
      if (pUVar3 != pUVar2) {
        piVar9 = (int *)(**(code **)(pUVar2->_padding_ + 0x2b0))(pUVar2,local_res10);
        piVar10 = (int *)(**(code **)(pUVar3->_padding_ + 0x2b0))(pUVar3,local_res18);
        bVar8 = false;
        if (*piVar10 < *piVar9) {
          (**(code **)(this->ActiveLeftCapture->_padding_ + 0x2e0))
                    (this->ActiveLeftCapture,&this->ActiveLeftCaptureData);
          this->ActiveLeftCapture = (UInputBehavior *)0x0;
          this->ActiveLeftCaptureOwner = (void *)0x0;
          local_a8 = 0;
          uStack_a0 = 0;
          (this->ActiveLeftCaptureData).WhichSide = None;
          *(undefined4 *)&(this->ActiveLeftCaptureData).field_0x4 = uStack_a4;
          *(undefined4 *)&(this->ActiveLeftCaptureData).CustomData = 0;
          *(undefined4 *)((longlong)&(this->ActiveLeftCaptureData).CustomData + 4) = 0;
          pUVar2 = pFVar6->Source;
          (**(code **)(pUVar2->_padding_ + 0x2d0))(pUVar2,local_78,param_1,1);
          if (local_78[0] == 1) {
            this->ActiveLeftCapture = local_70;
            this->ActiveLeftCaptureOwner = pFVar6->Owner;
            *(undefined8 *)&this->ActiveLeftCaptureData = local_68;
            (this->ActiveLeftCaptureData).CustomData = pvStack_60;
          }
          bVar8 = true;
        }
      }
    }
    if (local_c8 != (FInputCaptureRequest *)0x0) {
      FMemory::Free(local_c8);
    }
    if (bVar8) goto LAB_1496ab890;
  }
  (**(code **)(this->ActiveLeftCapture->_padding_ + 0x2d8))
            (this->ActiveLeftCapture,local_58,param_1,&this->ActiveLeftCaptureData);
  if (local_58[0] == 3) {
    local_98 = 0;
    uStack_90 = 0;
    this->ActiveLeftCapture = (UInputBehavior *)0x0;
    this->ActiveLeftCaptureOwner = (void *)0x0;
    *(ulonglong *)&this->ActiveLeftCaptureData = (ulonglong)uStack_94 << 0x20;
    (this->ActiveLeftCaptureData).CustomData = (void *)0x0;
  }
  else if (local_58[0] != 2) {
    pIVar4 = this->TransactionsAPI;
    pcVar5 = *(code **)((longlong)*pIVar4 + 8);
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_88,L"UInputRouter",L"HandleCapturedMouseInputMessage",
                         L"UInteractiveToolManager::HandleCapturedMouseInput - unexpected capture state!"
                        );
    (*pcVar5)(pIVar4,pFVar11,0);
    if (local_88.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
    }
  }
LAB_1496ab890:
  if (this->bAutoInvalidateOnCapture != false) {
    (**(code **)((longlong)*this->TransactionsAPI + 0x10))();
  }
  return;
}

// HasActiveMouseCapture @ 1496ab8d0

bool __thiscall UInputRouter::HasActiveMouseCapture(UInputRouter *this)

{
  return this->ActiveLeftCapture != (UInputBehavior *)0x0;
}

// Initialize @ 1496ac090

void __thiscall UInputRouter::Initialize(UInputRouter *this,IToolsContextTransactionsAPI *param_1)

{
  this->TransactionsAPI = param_1;
  return;
}

// OnApplicationFocusChanged @ 1496b4750

void __thiscall UInputRouter::OnApplicationFocusChanged(UInputRouter *this,bool param_1)

{
  if (!param_1) {
                    /* WARNING: Could not recover jumptable at 0x0001496b4757. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x2f0))();
    return;
  }
  return;
}

// PostHoverInputEvent @ 1496b66a0

void __thiscall UInputRouter::PostHoverInputEvent(UInputRouter *this,FInputDeviceState *param_1)

{
  bool bVar1;
  
  bVar1 = ProcessMouseHover(this,param_1);
  if ((bVar1) && (this->bAutoInvalidateOnHover != false)) {
                    /* WARNING: Could not recover jumptable at 0x0001496b66c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*this->TransactionsAPI + 0x10))();
    return;
  }
  return;
}

// PostInputEvent @ 1496b66e0

bool __thiscall UInputRouter::PostInputEvent(UInputRouter *this,FInputDeviceState *param_1)

{
  bool bVar1;
  bool bVar2;
  IToolsContextTransactionsAPI *pIVar3;
  code *pcVar4;
  char cVar5;
  undefined1 uVar6;
  bool bVar7;
  FText *pFVar8;
  FText local_18;
  
  cVar5 = (**(code **)(((this->ActiveInputBehaviors).field0_0x0.DebugPtr)->_padding_ + 0x2b0))();
  if (cVar5 == '\0') {
    if ((param_1->InputDevice & Mouse) != None) {
      (**(code **)(this->_padding_ + 0x300))(this,param_1);
      FInputDeviceState::operator=(&this->LastMouseInputState,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001496b6739. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (**(code **)(this->_padding_ + 0x2d8))(this);
      return (bool)uVar6;
    }
    if ((param_1->InputDevice & Keyboard) != None) {
      cVar5 = (**(code **)(this->_padding_ + 0x2d8))(this);
      if ((cVar5 != '\0') || (this->ActiveLeftHoverCapture != (UInputBehavior *)0x0)) {
        bVar7 = FKey::IsModifierKey((FKey *)&param_1->Keyboard);
        if ((bVar7) &&
           ((((bVar7 = param_1->bAltKeyDown, (this->LastMouseInputState).bAltKeyDown != bVar7 ||
              ((this->LastMouseInputState).bShiftKeyDown != param_1->bShiftKeyDown)) ||
             ((this->LastMouseInputState).bCtrlKeyDown != param_1->bCtrlKeyDown)) ||
            ((this->LastMouseInputState).bCmdKeyDown != param_1->bCmdKeyDown)))) {
          bVar1 = param_1->bCmdKeyDown;
          bVar2 = param_1->bShiftKeyDown;
          (this->LastMouseInputState).bCtrlKeyDown = param_1->bCtrlKeyDown;
          (this->LastMouseInputState).bCmdKeyDown = bVar1;
          (this->LastMouseInputState).bShiftKeyDown = bVar2;
          (this->LastMouseInputState).bAltKeyDown = bVar7;
          if (this->ActiveLeftCapture == (UInputBehavior *)0x0) {
            bVar7 = UpdateExistingHoverCaptureIfPresent(this,param_1);
            if ((bVar7) && (this->bAutoInvalidateOnHover != false)) {
              (**(code **)((longlong)*this->TransactionsAPI + 0x10))();
            }
          }
          else {
            HandleCapturedMouseInput(this,param_1);
          }
        }
      }
      (**(code **)(this->_padding_ + 0x2f8))(this,param_1);
      return this->ActiveKeyboardCapture != (UInputBehavior *)0x0;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Unimplemented function called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\InputRouter.cpp"
                       ,0x6f,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pIVar3 = this->TransactionsAPI;
    pcVar4 = *(code **)((longlong)*pIVar3 + 8);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UInputRouter",L"PostInputEventMessage",
                        L"UInteractiveToolManager::PostInputEvent - input device is not currently supported."
                       );
    (*pcVar4)(pIVar3,pFVar8,0);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return false;
}

// PostInputEvent_Keyboard @ 1496b68a0

void __thiscall UInputRouter::PostInputEvent_Keyboard(UInputRouter *this,FInputDeviceState *param_1)

{
  UInputBehaviorSet *pUVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  FIdentityFunctor local_res8 [8];
  FInputCaptureRequest *local_68;
  ulonglong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  int local_48 [2];
  UInputBehavior *local_40;
  undefined8 local_38;
  void *pvStack_30;
  
  if (this->ActiveKeyboardCapture != (UInputBehavior *)0x0) {
    HandleCapturedKeyboardInput(this,param_1);
    return;
  }
  uVar9 = 0;
  local_68 = (FInputCaptureRequest *)0x0;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  (this->ActiveKeyboardCaptureData).WhichSide = None;
  *(undefined4 *)&(this->ActiveKeyboardCaptureData).field_0x4 = uStack_54;
  *(undefined4 *)&(this->ActiveKeyboardCaptureData).CustomData = 0;
  *(undefined4 *)((longlong)&(this->ActiveKeyboardCaptureData).CustomData + 4) = 0;
  pUVar1 = (this->ActiveInputBehaviors).field0_0x0.DebugPtr;
  (**(code **)(pUVar1->_padding_ + 0x2e8))(pUVar1,param_1,&local_68);
  if ((int)local_60 != 0) {
    AlgoImpl::
    StableSortInternal<FInputCaptureRequest,FIdentityFunctor,TDereferenceWrapper<FInputCaptureRequest,TLess<void>_>_>
              (local_68,(int)local_60,local_res8[0],(TLess<void> *)local_res8);
    uVar7 = local_60 & 0xffffffff;
    bVar5 = false;
    uVar10 = uVar9;
    if (0 < (int)local_60) {
      do {
        if (bVar5) break;
        uVar8 = (uint)uVar9;
        uVar6 = 0;
        if ((int)uVar8 < (int)uVar7) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar2 = *(longlong **)((longlong)&local_68->Source + uVar10);
        (**(code **)(*plVar2 + 0x2d0))(plVar2,local_48,param_1,1);
        if (local_48[0] == 1) {
          uVar7 = (ulonglong)(int)local_60;
          this->ActiveKeyboardCapture = local_40;
          uVar6 = 0;
          if ((int)uVar8 < (int)local_60) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if (uVar6 == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar7 = local_60 & 0xffffffff;
          }
          bVar5 = true;
          this->ActiveKeyboardCaptureOwner = *(void **)((longlong)&local_68->Owner + uVar10);
          *(undefined8 *)&this->ActiveKeyboardCaptureData = local_38;
          (this->ActiveKeyboardCaptureData).CustomData = pvStack_30;
        }
        else {
          uVar7 = local_60 & 0xffffffff;
        }
        uVar9 = (ulonglong)(uVar8 + 1);
        uVar10 = uVar10 + 0x20;
      } while ((int)(uVar8 + 1) < (int)uVar7);
    }
  }
  if (local_68 != (FInputCaptureRequest *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}

// PostInputEvent_Mouse @ 1496b6aa0

void __thiscall UInputRouter::PostInputEvent_Mouse(UInputRouter *this,FInputDeviceState *param_1)

{
  bool bVar1;
  uint uStack_14;
  
  if (this->ActiveLeftCapture == (UInputBehavior *)0x0) {
    *(ulonglong *)&this->ActiveLeftCaptureData = (ulonglong)uStack_14 << 0x20;
    (this->ActiveLeftCaptureData).CustomData = (void *)0x0;
    CheckForMouseCaptures(this,param_1);
  }
  else {
    HandleCapturedMouseInput(this,param_1);
  }
  if (this->ActiveLeftCapture == (UInputBehavior *)0x0) {
    bVar1 = ProcessMouseHover(this,param_1);
    if ((bVar1) && (this->bAutoInvalidateOnHover != false)) {
      (**(code **)((longlong)*this->TransactionsAPI + 0x10))();
    }
  }
  return;
}

// ProcessMouseHover @ 1496b6b20

bool __thiscall UInputRouter::ProcessMouseHover(UInputRouter *this,FInputDeviceState *param_1)

{
  UInputBehaviorSet *pUVar1;
  UInputBehavior *pUVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  UInputBehavior *pUVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  FIdentityFunctor local_res8 [8];
  FInputCaptureRequest *local_78;
  ulonglong local_70;
  int local_68 [2];
  UInputBehavior *local_60;
  int local_48 [8];
  
  uVar12 = 0;
  pUVar1 = (this->ActiveInputBehaviors).field0_0x0.DebugPtr;
  local_78 = (FInputCaptureRequest *)0x0;
  local_70 = 0;
  (**(code **)(pUVar1->_padding_ + 0x2f0))(pUVar1,param_1,&local_78);
  if ((int)local_70 == 0) {
    if (this->ActiveLeftHoverCapture == (UInputBehavior *)0x0) {
      bVar5 = false;
    }
    else {
      (**(code **)(this->ActiveLeftHoverCapture->_padding_ + 0x308))();
      this->ActiveLeftHoverCapture = (UInputBehavior *)0x0;
      bVar5 = true;
      this->ActiveLeftCaptureOwner = (void *)0x0;
    }
    goto LAB_1496b6cf3;
  }
  pUVar2 = this->ActiveLeftHoverCapture;
  AlgoImpl::
  StableSortInternal<FInputCaptureRequest,FIdentityFunctor,TDereferenceWrapper<FInputCaptureRequest,TLess<void>_>_>
            (local_78,(int)local_70,local_res8[0],(TLess<void> *)local_res8);
  uVar9 = (ulonglong)(int)local_70;
  if ((int)local_70 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    uVar9 = local_70 & 0xffffffff;
  }
  pUVar10 = this->ActiveLeftHoverCapture;
  if (local_78->Source == pUVar10) {
    if (pUVar10 != (UInputBehavior *)0x0) {
      (**(code **)(pUVar10->_padding_ + 0x300))(pUVar10,local_48,param_1);
      if ((local_48[0] == 3) &&
         (pUVar10 = this->ActiveLeftHoverCapture, pUVar10 != (UInputBehavior *)0x0)) {
        lVar8 = pUVar10->_padding_;
        goto LAB_1496b6c3c;
      }
LAB_1496b6c4d:
      uVar9 = local_70 & 0xffffffff;
    }
  }
  else if (pUVar10 != (UInputBehavior *)0x0) {
    lVar8 = pUVar10->_padding_;
LAB_1496b6c3c:
    (**(code **)(lVar8 + 0x308))(pUVar10);
    this->ActiveLeftCaptureOwner = (void *)0x0;
    this->ActiveLeftHoverCapture = (UInputBehavior *)0x0;
    goto LAB_1496b6c4d;
  }
  if ((this->ActiveLeftHoverCapture == (UInputBehavior *)0x0) && (uVar13 = uVar12, 0 < (int)uVar9))
  {
    do {
      uVar11 = (uint)uVar12;
      uVar7 = 0;
      if ((int)uVar11 < (int)uVar9) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      plVar3 = *(longlong **)((longlong)&local_78->Source + uVar13);
      (**(code **)(*plVar3 + 0x2f8))(plVar3,local_68,param_1,1);
      if (local_68[0] == 1) {
        this->ActiveLeftHoverCapture = local_60;
        uVar7 = 0;
        if ((int)uVar11 < (int)local_70) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        bVar5 = true;
        this->ActiveLeftHoverCaptureOwner = local_78[(int)uVar11].Owner;
        goto LAB_1496b6cf3;
      }
      uVar9 = local_70 & 0xffffffff;
      uVar12 = (ulonglong)(uVar11 + 1);
      uVar13 = uVar13 + 0x20;
    } while ((int)(uVar11 + 1) < (int)local_70);
  }
  bVar5 = pUVar2 != this->ActiveLeftHoverCapture;
LAB_1496b6cf3:
  if (local_78 != (FInputCaptureRequest *)0x0) {
    FMemory::Free(local_78);
  }
  return bVar5;
}

// RegisterSource @ 1496b7cb0

void __thiscall UInputRouter::RegisterSource(UInputRouter *this,IInputBehaviorSource *param_1)

{
  UInputBehaviorSet *pUVar1;
  code *pcVar2;
  undefined8 uVar3;
  FString local_18;
  
  pUVar1 = (this->ActiveInputBehaviors).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2b8);
  ::FString::FString(&local_18,"");
  uVar3 = (**(code **)((longlong)*param_1 + 0x10))(param_1);
  (*pcVar2)(pUVar1,uVar3,param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// Shutdown @ 1496c25d0

void __thiscall UInputRouter::Shutdown(UInputRouter *this)

{
  this->TransactionsAPI = (IToolsContextTransactionsAPI *)0x0;
  return;
}

// StaticRegisterNativesUInputRouter @ 1496c2c70

void __cdecl UInputRouter::StaticRegisterNativesUInputRouter(void)

{
  return;
}

// TerminateHover @ 1496c2e70

void __thiscall UInputRouter::TerminateHover(UInputRouter *this,EInputCaptureSide param_1)

{
  if ((param_1 == Left) && (this->ActiveLeftHoverCapture != (UInputBehavior *)0x0)) {
    (**(code **)(this->ActiveLeftHoverCapture->_padding_ + 0x308))();
    this->ActiveLeftHoverCapture = (UInputBehavior *)0x0;
    this->ActiveLeftCaptureOwner = (void *)0x0;
  }
  return;
}

// UpdateExistingHoverCaptureIfPresent @ 1496c3d40

bool __thiscall
UInputRouter::UpdateExistingHoverCaptureIfPresent(UInputRouter *this,FInputDeviceState *param_1)

{
  UInputBehavior *pUVar1;
  int local_28 [8];
  
  pUVar1 = this->ActiveLeftHoverCapture;
  if (pUVar1 != (UInputBehavior *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x300))(pUVar1,local_28,param_1);
    if (local_28[0] == 3) {
      if (this->ActiveLeftHoverCapture != (UInputBehavior *)0x0) {
        (**(code **)(this->ActiveLeftHoverCapture->_padding_ + 0x308))();
        this->ActiveLeftHoverCapture = (UInputBehavior *)0x0;
        this->ActiveLeftCaptureOwner = (void *)0x0;
      }
      return true;
    }
  }
  return false;
}

