// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 11

// StaticClass @ 14962d770

UClass * __cdecl ULocalTwoAxisPropertyEditInputBehavior::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocalTwoAxisPropertyEditInputBehavior.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"LocalTwoAxisPropertyEditInputBehavior",
               &Z_Registration_Info_UClass_ULocalTwoAxisPropertyEditInputBehavior.InnerSingleton,
               StaticRegisterNativesULocalTwoAxisPropertyEditInputBehavior,0x270,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<ULocalTwoAxisPropertyEditInputBehavior>,
               InternalVTableHelperCtorCaller<ULocalTwoAxisPropertyEditInputBehavior>,local_res8,
               UTwoAxisPropertyEditInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalTwoAxisPropertyEditInputBehavior.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14962f250

FKey * __cdecl
ULocalTwoAxisPropertyEditInputBehavior::<lambda_42_>::<lambda_invoker_cdecl>
          (FKey *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  FSharedReferencer<1> FVar2;
  
  __return_storage_ptr__->KeyName = EKeys::B.KeyName;
  (__return_storage_ptr__->KeyDetails).Object = EKeys::B.KeyDetails.Object;
  FVar2 = EKeys::B.KeyDetails.SharedReferenceCount;
  (__return_storage_ptr__->KeyDetails).SharedReferenceCount.ReferenceController =
       EKeys::B.KeyDetails.SharedReferenceCount.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(FVar2.ReferenceController)->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// ULocalTwoAxisPropertyEditInputBehavior @ 14963c510

ULocalTwoAxisPropertyEditInputBehavior * __thiscall
ULocalTwoAxisPropertyEditInputBehavior::ULocalTwoAxisPropertyEditInputBehavior
          (ULocalTwoAxisPropertyEditInputBehavior *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  UInputBehavior::UInputBehavior((UInputBehavior *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UTwoAxisPropertyEditInputBehavior__;
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&_vftable__for__ITwoAxisPropertyEditBehaviorTarget__;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  FPropertyInterface::FPropertyInterface(&this->HorizontalProperty);
  FPropertyInterface::FPropertyInterface(&this->VerticalProperty);
  *(undefined8 *)&this->GetCaptureKeyFunc = 0;
  *(undefined8 *)&(this->GetCaptureKeyFunc).field_0x28 = 0;
  *(undefined ***)&(this->GetCaptureKeyFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_AUFKey__XZ_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->GetCaptureKeyFunc).field_0x18;
  *(code **)puVar1 = <lambda_42_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->GetCaptureKeyFunc =
         UE::Core::Private::Function::TFunctionRefCaller<FKey_(__cdecl*)(void),FKey>::Call;
  }
  *(undefined8 *)&this->OnDragUpdated = 0;
  *(undefined8 *)&(this->OnDragUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnDragUpdated).field_0x10 = 0;
  *(undefined8 *)&(this->OnDragUpdated).field_0x18 = 2;
  return this;
}

// ULocalTwoAxisPropertyEditInputBehavior @ 14963c5e0

ULocalTwoAxisPropertyEditInputBehavior * __thiscall
ULocalTwoAxisPropertyEditInputBehavior::ULocalTwoAxisPropertyEditInputBehavior
          (ULocalTwoAxisPropertyEditInputBehavior *this)

{
  undefined1 *puVar1;
  
  UInputBehavior::UInputBehavior((UInputBehavior *)this);
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UTwoAxisPropertyEditInputBehavior__;
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&_vftable__for__ITwoAxisPropertyEditBehaviorTarget__;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  FPropertyInterface::FPropertyInterface(&this->HorizontalProperty);
  FPropertyInterface::FPropertyInterface(&this->VerticalProperty);
  *(undefined8 *)&this->GetCaptureKeyFunc = 0;
  *(undefined8 *)&(this->GetCaptureKeyFunc).field_0x28 = 0;
  *(undefined ***)&(this->GetCaptureKeyFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_AUFKey__XZ_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->GetCaptureKeyFunc).field_0x18;
  *(code **)puVar1 = <lambda_42_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->GetCaptureKeyFunc =
         UE::Core::Private::Function::TFunctionRefCaller<FKey_(__cdecl*)(void),FKey>::Call;
  }
  *(undefined8 *)&this->OnDragUpdated = 0;
  *(undefined8 *)&(this->OnDragUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnDragUpdated).field_0x10 = 0;
  *(undefined8 *)&(this->OnDragUpdated).field_0x18 = 2;
  return this;
}

// ~ULocalTwoAxisPropertyEditInputBehavior @ 14963eff0

void __thiscall
ULocalTwoAxisPropertyEditInputBehavior::~ULocalTwoAxisPropertyEditInputBehavior
          (ULocalTwoAxisPropertyEditInputBehavior *this)

{
  void *pvVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UTwoAxisPropertyEditInputBehavior__;
  this->_padding_ = (longlong)&_vftable__for__ITwoAxisPropertyEditBehaviorTarget__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnDragUpdated).field_0x8,*(int *)&(this->OnDragUpdated).field_0x10);
  pvVar1 = *(void **)&(this->OnDragUpdated).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDragUpdated);
  if (*(longlong *)&this->GetCaptureKeyFunc != 0) {
    plVar2 = *(longlong **)&(this->GetCaptureKeyFunc).field_0x28;
    plVar3 = (longlong *)&(this->GetCaptureKeyFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  FPropertyInterface::~FPropertyInterface(&this->VerticalProperty);
  FPropertyInterface::~FPropertyInterface(&this->HorizontalProperty);
  this->_padding_ = (longlong)&___7ITwoAxisPropertyEditBehaviorTarget__6B_;
  this->_padding_ = (longlong)&___7UTwoAxisPropertyEditInputBehavior__6B_;
  UInputBehavior::~UInputBehavior((UInputBehavior *)this);
  return;
}

// GetCaptureKey @ 149652900

FKey * __thiscall
ULocalTwoAxisPropertyEditInputBehavior::GetCaptureKey
          (ULocalTwoAxisPropertyEditInputBehavior *this,FKey *__return_storage_ptr__)

{
  code *pcVar1;
  TUniqueFunction<void___cdecl(float)> *pTVar2;
  undefined8 uVar3;
  TUniqueFunction<void___cdecl(float)> *pTVar4;
  
  UE::Core::Private::Function::CheckCallable
            (*(void **)&(this->VerticalProperty).GetValueFunc.field_0x20);
  pcVar1 = *(code **)&(this->VerticalProperty).GetValueFunc.field_0x20;
  pTVar2 = *(TUniqueFunction<void___cdecl(float)> **)
            &(this->VerticalProperty).SetValueFunc.field_0x18;
  pTVar4 = &(this->VerticalProperty).SetValueFunc;
  if (pTVar2 != (TUniqueFunction<void___cdecl(float)> *)0x0) {
    pTVar4 = pTVar2;
  }
  uVar3 = (**(code **)(*(longlong *)pTVar4 + 8))();
  (*pcVar1)(__return_storage_ptr__,uVar3);
  return __return_storage_ptr__;
}

// GetHorizontalProperty @ 149655090

IPropertyInterface * __thiscall
ULocalTwoAxisPropertyEditInputBehavior::GetHorizontalProperty
          (ULocalTwoAxisPropertyEditInputBehavior *this)

{
  return (IPropertyInterface *)&this->_padding_;
}

// GetPrivateStaticClass @ 1496576c0

UClass * __cdecl ULocalTwoAxisPropertyEditInputBehavior::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULocalTwoAxisPropertyEditInputBehavior.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"LocalTwoAxisPropertyEditInputBehavior",
               &Z_Registration_Info_UClass_ULocalTwoAxisPropertyEditInputBehavior.InnerSingleton,
               StaticRegisterNativesULocalTwoAxisPropertyEditInputBehavior,0x270,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<ULocalTwoAxisPropertyEditInputBehavior>,
               InternalVTableHelperCtorCaller<ULocalTwoAxisPropertyEditInputBehavior>,local_res8,
               UTwoAxisPropertyEditInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULocalTwoAxisPropertyEditInputBehavior.InnerSingleton;
}

// GetVerticalProperty @ 149658bc0

IPropertyInterface * __thiscall
ULocalTwoAxisPropertyEditInputBehavior::GetVerticalProperty
          (ULocalTwoAxisPropertyEditInputBehavior *this)

{
  return (IPropertyInterface *)&(this->HorizontalProperty).GetValueFunc.field_0x20;
}

// PostDragUpdated @ 14965ee40

void __thiscall
ULocalTwoAxisPropertyEditInputBehavior::PostDragUpdated
          (ULocalTwoAxisPropertyEditInputBehavior *this)

{
  undefined1 *puVar1;
  undefined1 *this_00;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_28;
  
  this_00 = &(this->VerticalProperty).SetValueFunc.field_0x20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
             (FWriteAccessScope *)&local_28);
  puVar1 = &(this->VerticalProperty).MutateDeltaFunc.field_0xc;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->VerticalProperty).MutateDeltaFunc - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->VerticalProperty).MutateDeltaFunc) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->VerticalProperty).SetValueFunc.field_0x28;
      if (((*(int *)(lVar2 + 8 + lVar10) == 0) ||
          (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->VerticalProperty).MutateDeltaFunc.field_0xc;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// StaticRegisterNativesULocalTwoAxisPropertyEditInputBehavior @ 149664c80

void __cdecl
ULocalTwoAxisPropertyEditInputBehavior::StaticRegisterNativesULocalTwoAxisPropertyEditInputBehavior
          (void)

{
  return;
}

