// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 14

// StaticClass @ 14966b970

UClass * __cdecl USimpleSingleClickGizmo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USimpleSingleClickGizmo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SimpleSingleClickGizmo",
               &Z_Registration_Info_UClass_USimpleSingleClickGizmo.InnerSingleton,
               StaticRegisterNativesUSimpleSingleClickGizmo,0x80,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<USimpleSingleClickGizmo>,
               InternalVTableHelperCtorCaller<USimpleSingleClickGizmo>,local_res8,
               UInteractiveGizmo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USimpleSingleClickGizmo.InnerSingleton;
}

// USimpleSingleClickGizmo @ 1496882a0

USimpleSingleClickGizmo * __thiscall
USimpleSingleClickGizmo::USimpleSingleClickGizmo
          (USimpleSingleClickGizmo *this,FVTableHelper *param_1)

{
  UInteractiveGizmo::UInteractiveGizmo((UInteractiveGizmo *)this,param_1);
  *(undefined8 *)&(this->OnClick).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__IClickBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  *(undefined8 *)&this->OnClick = 0;
  *(undefined8 *)&(this->OnClick).field_0x8 = 0;
  *(undefined8 *)&(this->OnClick).field_0x10 = 0;
  *(undefined8 *)&this->HitTarget = 0;
  *(undefined8 *)&(this->HitTarget).field_0x8 = 0;
  (this->ClickBehavior).field0_0x0.DebugPtr = (USingleClickInputBehavior *)0x0;
  return this;
}

// USimpleSingleClickGizmo @ 149688310

USimpleSingleClickGizmo * __thiscall
USimpleSingleClickGizmo::USimpleSingleClickGizmo(USimpleSingleClickGizmo *this)

{
  UInteractiveGizmo::UInteractiveGizmo((UInteractiveGizmo *)this);
  *(undefined8 *)&(this->OnClick).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__IClickBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  *(undefined8 *)&this->OnClick = 0;
  *(undefined8 *)&(this->OnClick).field_0x8 = 0;
  *(undefined8 *)&(this->OnClick).field_0x10 = 0;
  *(undefined8 *)&this->HitTarget = 0;
  *(undefined8 *)&(this->HitTarget).field_0x8 = 0;
  (this->ClickBehavior).field0_0x0.DebugPtr = (USingleClickInputBehavior *)0x0;
  return this;
}

// ~USimpleSingleClickGizmo @ 14968aa00

void __thiscall USimpleSingleClickGizmo::~USimpleSingleClickGizmo(USimpleSingleClickGizmo *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__IClickBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&(this->OnClick).field_0x8,
             *(int *)&(this->OnClick).field_0x10);
  pvVar1 = *(void **)&(this->OnClick).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClick);
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  UInteractiveGizmo::~UInteractiveGizmo((UInteractiveGizmo *)this);
  return;
}

// BeginHoverSequenceHitTest @ 149692c00

FInputRayHit * __thiscall
USimpleSingleClickGizmo::BeginHoverSequenceHitTest
          (USimpleSingleClickGizmo *this,FInputRayHit *__return_storage_ptr__,
          FInputDeviceRay *param_1)

{
  double dVar1;
  undefined8 uVar2;
  FWeakObjectPtr FVar3;
  undefined8 *puVar4;
  undefined1 local_48 [64];
  
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  if ((this->_padding_ != 0) && (this->_padding_ != 0)) {
    puVar4 = (undefined8 *)
             (**(code **)(*(longlong *)this->_padding_ + 0x10))
                       ((longlong *)this->_padding_,local_48,param_1);
    dVar1 = (double)puVar4[1];
    *(undefined8 *)__return_storage_ptr__ = *puVar4;
    __return_storage_ptr__->HitDepth = dVar1;
    dVar1 = (double)puVar4[3];
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.X = (double)puVar4[2];
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Y = dVar1;
    uVar2 = puVar4[5];
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Z = (double)puVar4[4];
    __return_storage_ptr__->bHasHitNormal = (bool)(char)uVar2;
    *(int3 *)&__return_storage_ptr__->field_0x29 = (int3)((ulonglong)uVar2 >> 8);
    __return_storage_ptr__->HitIdentifier = (int)((ulonglong)uVar2 >> 0x20);
    FVar3 = *(FWeakObjectPtr *)(puVar4 + 7);
    __return_storage_ptr__->HitOwner = (void *)puVar4[6];
    (__return_storage_ptr__->HitObject).WeakPtr = FVar3;
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1496a75e0

UClass * __cdecl USimpleSingleClickGizmo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USimpleSingleClickGizmo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SimpleSingleClickGizmo",
               &Z_Registration_Info_UClass_USimpleSingleClickGizmo.InnerSingleton,
               StaticRegisterNativesUSimpleSingleClickGizmo,0x80,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<USimpleSingleClickGizmo>,
               InternalVTableHelperCtorCaller<USimpleSingleClickGizmo>,local_res8,
               UInteractiveGizmo::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USimpleSingleClickGizmo.InnerSingleton;
}

// InitializeWithComponent @ 1496acd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
USimpleSingleClickGizmo::InitializeWithComponent
          (USimpleSingleClickGizmo *this,UPrimitiveComponent *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  UGizmoComponentHitTarget *pUVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  if (param_1 == (UPrimitiveComponent *)0x0) {
    bVar3 = false;
  }
  else {
    pUVar4 = NewObject<UGizmoComponentHitTarget>((UObject *)this);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (pUVar4->Component).field0_0x0.DebugPtr = param_1;
    local_58 = *(longlong *)&pUVar4->UpdateHoverFunction;
    uVar2 = *(undefined8 *)&(pUVar4->UpdateHoverFunction).field_0x8;
    plVar6 = (longlong *)0x0;
    local_48 = *(longlong *)&(pUVar4->UpdateHoverFunction).field_0x10;
    uStack_40 = *(undefined8 *)&(pUVar4->UpdateHoverFunction).field_0x18;
    uVar1 = *(undefined8 *)&(pUVar4->UpdateHoverFunction).field_0x20;
    plStack_30 = *(longlong **)&(pUVar4->UpdateHoverFunction).field_0x28;
    *(code **)&pUVar4->UpdateHoverFunction =
         UE::Core::Private::Function::
         TFunctionRefCaller<`USimpleSingleClickGizmo::InitializeWithComponent'::__l2::<lambda_1>,void,bool>
         ::Call;
    *(undefined8 *)&(pUVar4->UpdateHoverFunction).field_0x8 = uStack_50;
    *(undefined4 *)&(pUVar4->UpdateHoverFunction).field_0x10 = 0x51e9f268;
    *(undefined4 *)&(pUVar4->UpdateHoverFunction).field_0x14 = 1;
    *(UPrimitiveComponent **)&(pUVar4->UpdateHoverFunction).field_0x18 = param_1;
    *(undefined4 *)&(pUVar4->UpdateHoverFunction).field_0x20 = (undefined4)local_38;
    *(undefined4 *)&(pUVar4->UpdateHoverFunction).field_0x24 = local_38._4_4_;
    *(undefined4 *)&(pUVar4->UpdateHoverFunction).field_0x28 = 0;
    *(undefined4 *)&(pUVar4->UpdateHoverFunction).field_0x2c = 0;
    local_38 = uVar1;
    uStack_50 = uVar2;
    if (local_58 != 0) {
      plVar5 = &local_48;
      if (plStack_30 != (longlong *)0x0) {
        plVar5 = plStack_30;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if (pUVar4 != (UGizmoComponentHitTarget *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      plVar6 = &pUVar4->_padding_;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UGizmoComponentHitTarget *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    *(UGizmoComponentHitTarget **)&this->HitTarget = pUVar4;
    bVar3 = true;
    *(longlong **)&(this->HitTarget).field_0x8 = plVar6;
  }
  return bVar3;
}

// IsHitByClick @ 1496adf60

FInputRayHit * __thiscall
USimpleSingleClickGizmo::IsHitByClick
          (USimpleSingleClickGizmo *this,FInputRayHit *__return_storage_ptr__,
          FInputDeviceRay *param_1)

{
  double dVar1;
  undefined8 uVar2;
  FWeakObjectPtr FVar3;
  undefined8 *puVar4;
  undefined1 local_48 [64];
  
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  if ((this->_padding_ != 0) && (this->_padding_ != 0)) {
    puVar4 = (undefined8 *)
             (**(code **)(*(longlong *)this->_padding_ + 0x10))
                       ((longlong *)this->_padding_,local_48,param_1);
    dVar1 = (double)puVar4[1];
    *(undefined8 *)__return_storage_ptr__ = *puVar4;
    __return_storage_ptr__->HitDepth = dVar1;
    dVar1 = (double)puVar4[3];
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.X = (double)puVar4[2];
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Y = dVar1;
    uVar2 = puVar4[5];
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Z = (double)puVar4[4];
    __return_storage_ptr__->bHasHitNormal = (bool)(char)uVar2;
    *(int3 *)&__return_storage_ptr__->field_0x29 = (int3)((ulonglong)uVar2 >> 8);
    __return_storage_ptr__->HitIdentifier = (int)((ulonglong)uVar2 >> 0x20);
    FVar3 = *(FWeakObjectPtr *)(puVar4 + 7);
    __return_storage_ptr__->HitOwner = (void *)puVar4[6];
    (__return_storage_ptr__->HitObject).WeakPtr = FVar3;
  }
  return __return_storage_ptr__;
}

// OnBeginHover @ 1496b4b80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
USimpleSingleClickGizmo::OnBeginHover(USimpleSingleClickGizmo *this,FInputDeviceRay *param_1)

{
  if (this->_padding_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001496b4b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001496b4b9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_00000000 + 0x18))(0,1);
  return;
}

// OnClicked @ 1496b57b0

void __thiscall
USimpleSingleClickGizmo::OnClicked(USimpleSingleClickGizmo *this,FInputDeviceRay *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
             (FWriteAccessScope *)&local_38);
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *piVar1 = *piVar1 + 1;
  bVar4 = false;
  uVar8 = (int)this->_padding_ - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (int)this->_padding_) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((*(int *)(this->_padding_ + 8 + lVar9) == 0) ||
          (plVar2 = *(longlong **)(this->_padding_ + lVar9), plVar2 == (longlong *)0x0)) ||
         (cVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,&this[-1].OnClick,param_1), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *piVar1 = *piVar1 + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// OnEndHover @ 1496b5cf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall USimpleSingleClickGizmo::OnEndHover(USimpleSingleClickGizmo *this)

{
  if (this->_padding_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001496b5d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this->_padding_ + 0x18))((longlong *)this->_padding_,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001496b5d0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_00000000 + 0x18))(0,0);
  return;
}

// OnUpdateHover @ 1496b6650

bool __thiscall
USimpleSingleClickGizmo::OnUpdateHover(USimpleSingleClickGizmo *this,FInputDeviceRay *param_1)

{
  return true;
}

// Setup @ 1496c2220

void __thiscall USimpleSingleClickGizmo::Setup(USimpleSingleClickGizmo *this)

{
  USingleClickInputBehavior *pUVar1;
  UMouseHoverBehavior *pUVar2;
  longlong *plVar3;
  undefined4 local_res8 [2];
  
  pUVar1 = NewObject<USingleClickInputBehavior>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (USingleClickInputBehavior *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->ClickBehavior).field0_0x0.DebugPtr = pUVar1;
  plVar3 = &this->_padding_;
  if (this == (USimpleSingleClickGizmo *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  (**(code **)(pUVar1->_padding_ + 0x378))(pUVar1,plVar3);
  pUVar1 = (this->ClickBehavior).field0_0x0.DebugPtr;
  local_res8[0] = 0x32;
  (**(code **)(pUVar1->_padding_ + 0x2b8))(pUVar1,local_res8);
  (**(code **)(this->_padding_ + 0x2e0))(this,(this->ClickBehavior).field0_0x0.DebugPtr);
  pUVar2 = NewObject<UMouseHoverBehavior>((UObject *)this);
  plVar3 = &this->_padding_;
  if (this == (USimpleSingleClickGizmo *)0x0) {
    plVar3 = (longlong *)0x0;
  }
  (**(code **)(*(longlong *)pUVar2 + 800))(pUVar2,plVar3);
  local_res8[0] = 0x32;
  (**(code **)(*(longlong *)pUVar2 + 0x2b8))(pUVar2,local_res8);
                    /* WARNING: Could not recover jumptable at 0x0001496c22f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2e0))(this,pUVar2);
  return;
}

// StaticRegisterNativesUSimpleSingleClickGizmo @ 1496c2d60

void __cdecl USimpleSingleClickGizmo::StaticRegisterNativesUSimpleSingleClickGizmo(void)

{
  return;
}

