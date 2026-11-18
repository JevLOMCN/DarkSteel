// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 12

// StaticClass @ 14962d140

UClass * __cdecl USingleKeyCaptureBehavior::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USingleKeyCaptureBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SingleKeyCaptureBehavior",
               &Z_Registration_Info_UClass_USingleKeyCaptureBehavior.InnerSingleton,
               StaticRegisterNativesUSingleKeyCaptureBehavior,0x120,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USingleKeyCaptureBehavior>,
               InternalVTableHelperCtorCaller<USingleKeyCaptureBehavior>,local_res8,
               UInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USingleKeyCaptureBehavior.InnerSingleton;
}

// USingleKeyCaptureBehavior @ 14963d080

USingleKeyCaptureBehavior * __thiscall
USingleKeyCaptureBehavior::USingleKeyCaptureBehavior
          (USingleKeyCaptureBehavior *this,FVTableHelper *param_1)

{
  UInputBehavior::UInputBehavior((UInputBehavior *)this,param_1);
  *(undefined ***)this = &___7USingleKeyCaptureBehavior__6B_;
  *(undefined8 *)&this->ModifierCheckFunc = 0;
  *(undefined8 *)&(this->ModifierCheckFunc).field_0x28 = 0;
  (this->ModifierKey).KeyName.ComparisonIndex = 0;
  (this->ModifierKey).KeyName.Number = 0;
  (this->ModifierKey).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->ModifierKey).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Modifiers).ModifierIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modifiers).ModifierIDs.ArrayNum = 0;
  (this->Modifiers).ModifierIDs.ArrayMax = 0;
  *(undefined8 *)&(this->Modifiers).ModifierTests = 0;
  *(undefined8 *)&(this->Modifiers).ModifierTests.field_0x8 = 0;
  *(undefined8 *)&(this->Modifiers).ModifierTests.field_0x20 = 0;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x28 = 0;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x2c = 0x80;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x34 = 0;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Modifiers).ModifierTests.field_0x40 = 0;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x48 = 0;
  (this->PressedButton).KeyName.ComparisonIndex = 0;
  (this->PressedButton).KeyName.Number = 0;
  (this->PressedButton).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->PressedButton).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// USingleKeyCaptureBehavior @ 14963d130

USingleKeyCaptureBehavior * __thiscall
USingleKeyCaptureBehavior::USingleKeyCaptureBehavior(USingleKeyCaptureBehavior *this)

{
  UInputBehavior::UInputBehavior((UInputBehavior *)this);
  *(undefined ***)this = &___7USingleKeyCaptureBehavior__6B_;
  *(undefined8 *)&this->ModifierCheckFunc = 0;
  *(undefined8 *)&(this->ModifierCheckFunc).field_0x28 = 0;
  (this->ModifierKey).KeyName.ComparisonIndex = 0;
  (this->ModifierKey).KeyName.Number = 0;
  (this->ModifierKey).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->ModifierKey).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Modifiers).ModifierIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modifiers).ModifierIDs.ArrayNum = 0;
  (this->Modifiers).ModifierIDs.ArrayMax = 0;
  *(undefined8 *)&(this->Modifiers).ModifierTests = 0;
  *(undefined8 *)&(this->Modifiers).ModifierTests.field_0x8 = 0;
  *(undefined8 *)&(this->Modifiers).ModifierTests.field_0x20 = 0;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x28 = 0;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x2c = 0x80;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x34 = 0;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Modifiers).ModifierTests.field_0x40 = 0;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x48 = 0;
  (this->PressedButton).KeyName.ComparisonIndex = 0;
  (this->PressedButton).KeyName.Number = 0;
  (this->PressedButton).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->PressedButton).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~USingleKeyCaptureBehavior @ 14963f520

void __thiscall
USingleKeyCaptureBehavior::~USingleKeyCaptureBehavior(USingleKeyCaptureBehavior *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  *(undefined ***)this = &___7USingleKeyCaptureBehavior__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PressedButton).KeyDetails.SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x48 = 0;
  pvVar1 = *(void **)&(this->Modifiers).ModifierTests.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TFunction<bool___cdecl(FInputDeviceState_const_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TFunction<bool___cdecl(FInputDeviceState_const_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TFunction<bool___cdecl(FInputDeviceState_const_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Modifiers).ModifierTests);
  pFVar2 = (this->Modifiers).ModifierIDs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ModifierKey).KeyDetails.SharedReferenceCount.ReferenceController);
  if (*(longlong *)&this->ModifierCheckFunc != 0) {
    plVar3 = *(longlong **)&(this->ModifierCheckFunc).field_0x28;
    plVar4 = (longlong *)&(this->ModifierCheckFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  UInputBehavior::~UInputBehavior((UInputBehavior *)this);
  return;
}

// BeginCapture @ 14964aff0

FInputCaptureUpdate * __thiscall
USingleKeyCaptureBehavior::BeginCapture
          (USingleKeyCaptureBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1,EInputCaptureSide param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FKeyDetails *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  (this->PressedButton).KeyName = (param_1->Keyboard).ActiveKey.Button.KeyName;
  pTVar1 = (param_1->Keyboard).ActiveKey.Button.KeyDetails.SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->Keyboard).ActiveKey.Button.KeyDetails.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->PressedButton).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->PressedButton).KeyDetails.Object = pFVar2;
  (this->PressedButton).KeyDetails.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FInputBehaviorModifierStates::UpdateModifiers(&this->Modifiers,param_1,this->Target);
  __return_storage_ptr__->Source = (UInputBehavior *)this;
  __return_storage_ptr__->State = Begin;
  (__return_storage_ptr__->Data).WhichSide = Any;
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  return __return_storage_ptr__;
}

// ForceEndCapture @ 1496523a0

void __thiscall
USingleKeyCaptureBehavior::ForceEndCapture
          (USingleKeyCaptureBehavior *this,FInputCaptureData *param_1)

{
  return;
}

// GetPrivateStaticClass @ 149658140

UClass * __cdecl USingleKeyCaptureBehavior::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USingleKeyCaptureBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SingleKeyCaptureBehavior",
               &Z_Registration_Info_UClass_USingleKeyCaptureBehavior.InnerSingleton,
               StaticRegisterNativesUSingleKeyCaptureBehavior,0x120,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USingleKeyCaptureBehavior>,
               InternalVTableHelperCtorCaller<USingleKeyCaptureBehavior>,local_res8,
               UInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USingleKeyCaptureBehavior.InnerSingleton;
}

// GetSupportedDevices @ 149658880

EInputDevices __thiscall
USingleKeyCaptureBehavior::GetSupportedDevices(USingleKeyCaptureBehavior *this)

{
  return Keyboard;
}

// Initialize @ 149659450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USingleKeyCaptureBehavior::Initialize
          (USingleKeyCaptureBehavior *this,IModifierToggleBehaviorTarget *param_1,int param_2,
          FKey *param_3)

{
  atomic<int> *paVar1;
  TReferenceControllerBase<1> *pTVar2;
  FKeyDetails *pFVar3;
  FName FVar4;
  TReferenceControllerBase<1> *pTVar5;
  code **ppcVar6;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  this->Target = param_1;
  (this->ModifierKey).KeyName = param_3->KeyName;
  pTVar2 = (param_3->KeyDetails).SharedReferenceCount.ReferenceController;
  pFVar3 = (param_3->KeyDetails).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (this->ModifierKey).KeyDetails.SharedReferenceCount.ReferenceController;
  (this->ModifierKey).KeyDetails.Object = pFVar3;
  (this->ModifierKey).KeyDetails.SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  FVar4 = param_3->KeyName;
  pFVar3 = (param_3->KeyDetails).Object;
  pTVar2 = (param_3->KeyDetails).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    paVar1 = &pTVar2->SharedReferenceCount;
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x20,8);
  *local_30 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`USingleKeyCaptureBehavior::Initialize'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  *(FName *)(local_30 + 1) = FVar4;
  local_30[2] = (code *)pFVar3;
  local_30[3] = (code *)pTVar2;
  if ((FName *)(local_30 + 1) != (FName *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`USingleKeyCaptureBehavior::Initialize'::__l2::<lambda_1>,bool,FInputDeviceState_const_&>
                  ::Call;
  }
  FInputBehaviorModifierStates::RegisterModifier
            (&this->Modifiers,param_2,(TFunction<bool___cdecl(FInputDeviceState_const_&)> *)local_58
            );
  if (local_58[0] != (code *)0x0) {
    ppcVar6 = local_58 + 2;
    if (local_30 != (code **)0x0) {
      ppcVar6 = local_30;
    }
    (**(code **)(*ppcVar6 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// StaticRegisterNativesUSingleKeyCaptureBehavior @ 149664d60

void __cdecl USingleKeyCaptureBehavior::StaticRegisterNativesUSingleKeyCaptureBehavior(void)

{
  return;
}

// UpdateCapture @ 149666910

FInputCaptureUpdate * __thiscall
USingleKeyCaptureBehavior::UpdateCapture
          (USingleKeyCaptureBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1,FInputCaptureData *param_2)

{
  bool bVar1;
  
  if ((param_1->Keyboard).ActiveKey.Button.KeyName != (this->PressedButton).KeyName) {
    __return_storage_ptr__->State = Continue;
    __return_storage_ptr__->Source = (UInputBehavior *)0x0;
    (__return_storage_ptr__->Data).CustomData = (void *)0x0;
    (__return_storage_ptr__->Data).WhichSide = Any;
    return __return_storage_ptr__;
  }
  FInputBehaviorModifierStates::UpdateModifiers(&this->Modifiers,param_1,this->Target);
  bVar1 = (param_1->Keyboard).ActiveKey.bReleased;
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  (__return_storage_ptr__->Data).WhichSide = Any;
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  if (bVar1 != false) {
    __return_storage_ptr__->State = End;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->State = Continue;
  return __return_storage_ptr__;
}

// WantsCapture @ 149667ca0

FInputCaptureRequest * __thiscall
USingleKeyCaptureBehavior::WantsCapture
          (USingleKeyCaptureBehavior *this,FInputCaptureRequest *__return_storage_ptr__,
          FInputDeviceState *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  FName FVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  if (*(void **)&this->ModifierCheckFunc == (void *)0x0) {
LAB_149667cf5:
    FVar3 = (this->ModifierKey).KeyName;
    if (((FVar3 == EKeys::AnyKey.KeyName) || ((param_1->Keyboard).ActiveKey.Button.KeyName == FVar3)
        ) && ((param_1->Keyboard).ActiveKey.bPressed != false)) {
      __return_storage_ptr__->Type = Begin;
      __return_storage_ptr__->Source = (UInputBehavior *)this;
      goto LAB_149667d2b;
    }
  }
  else {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->ModifierCheckFunc);
    plVar1 = *(longlong **)&(this->ModifierCheckFunc).field_0x28;
    pcVar2 = *(code **)&this->ModifierCheckFunc;
    plVar6 = (longlong *)&(this->ModifierCheckFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar6 = plVar1;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    cVar4 = (*pcVar2)(uVar5,param_1);
    if (cVar4 != '\0') goto LAB_149667cf5;
  }
  __return_storage_ptr__->Type = Ignore;
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
LAB_149667d2b:
  __return_storage_ptr__->Owner = (void *)0x0;
  __return_storage_ptr__->HitDepth = 1.7976931348623157e+308;
  __return_storage_ptr__->Side = Any;
  return __return_storage_ptr__;
}

