// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 13

// StaticClass @ 14962b310

UClass * __cdecl UMouseHoverBehavior::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMouseHoverBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"MouseHoverBehavior",
               &Z_Registration_Info_UClass_UMouseHoverBehavior.InnerSingleton,
               StaticRegisterNativesUMouseHoverBehavior,0xf0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMouseHoverBehavior>,
               InternalVTableHelperCtorCaller<UMouseHoverBehavior>,local_res8,
               UInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMouseHoverBehavior.InnerSingleton;
}

// UMouseHoverBehavior @ 14963c870

UMouseHoverBehavior * __thiscall
UMouseHoverBehavior::UMouseHoverBehavior(UMouseHoverBehavior *this,FVTableHelper *param_1)

{
  UInputBehavior::UInputBehavior((UInputBehavior *)this,param_1);
  *(undefined ***)this = &___7UMouseHoverBehavior__6B_;
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
  *(undefined8 *)&this->HoverModifierCheckFunc = 0;
  *(undefined8 *)&(this->HoverModifierCheckFunc).field_0x28 = 0;
  return this;
}

// UMouseHoverBehavior @ 14963c8f0

UMouseHoverBehavior * __thiscall UMouseHoverBehavior::UMouseHoverBehavior(UMouseHoverBehavior *this)

{
  UInputBehavior::UInputBehavior((UInputBehavior *)this);
  *(undefined ***)this = &___7UMouseHoverBehavior__6B_;
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
  *(undefined8 *)&this->HoverModifierCheckFunc = 0;
  *(undefined8 *)&(this->HoverModifierCheckFunc).field_0x28 = 0;
  this->Target = (IHoverBehaviorTarget *)0x0;
  return this;
}

// ~UMouseHoverBehavior @ 14963f150

void __thiscall UMouseHoverBehavior::~UMouseHoverBehavior(UMouseHoverBehavior *this)

{
  longlong *plVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  *(undefined ***)this = &___7UMouseHoverBehavior__6B_;
  if (*(longlong *)&this->HoverModifierCheckFunc != 0) {
    plVar1 = *(longlong **)&(this->HoverModifierCheckFunc).field_0x28;
    plVar4 = (longlong *)&(this->HoverModifierCheckFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar4 = plVar1;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x48 = 0;
  pvVar2 = *(void **)&(this->Modifiers).ModifierTests.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TFunction<bool___cdecl(FInputDeviceState_const_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TFunction<bool___cdecl(FInputDeviceState_const_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TFunction<bool___cdecl(FInputDeviceState_const_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->Modifiers).ModifierTests);
  pFVar3 = (this->Modifiers).ModifierIDs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  UInputBehavior::~UInputBehavior((UInputBehavior *)this);
  return;
}

// BeginHoverCapture @ 14964b180

FInputCaptureUpdate * __thiscall
UMouseHoverBehavior::BeginHoverCapture
          (UMouseHoverBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1,EInputCaptureSide param_2)

{
  IHoverBehaviorTarget *pIVar1;
  code *pcVar2;
  bool bVar3;
  FInputCaptureUpdate *pFVar4;
  FInputDeviceRay *pFVar5;
  FInputDeviceRay local_68;
  
  if (this->Target == (IHoverBehaviorTarget *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Target != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseBehaviors\\MouseHoverBehavior.cpp"
                       ,0x2e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FInputCaptureUpdate *)(*pcVar2)();
      return pFVar4;
    }
  }
  FInputBehaviorModifierStates::UpdateModifiers
            (&this->Modifiers,param_1,(IModifierToggleBehaviorTarget *)this->Target);
  pIVar1 = this->Target;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x20);
  pFVar5 = FInputDeviceRay::FInputDeviceRay(&local_68,param_1);
  (*pcVar2)(pIVar1,pFVar5);
  __return_storage_ptr__->Source = (UInputBehavior *)this;
  __return_storage_ptr__->State = Begin;
  (__return_storage_ptr__->Data).WhichSide = param_2;
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  return __return_storage_ptr__;
}

// EndHoverCapture @ 149652090

void __thiscall UMouseHoverBehavior::EndHoverCapture(UMouseHoverBehavior *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->Target == (IHoverBehaviorTarget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Target != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseBehaviors\\MouseHoverBehavior.cpp"
                       ,0x48,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001496520d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->Target + 0x30))();
  return;
}

// GetPrivateStaticClass @ 149657a80

UClass * __cdecl UMouseHoverBehavior::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMouseHoverBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"MouseHoverBehavior",
               &Z_Registration_Info_UClass_UMouseHoverBehavior.InnerSingleton,
               StaticRegisterNativesUMouseHoverBehavior,0xf0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMouseHoverBehavior>,
               InternalVTableHelperCtorCaller<UMouseHoverBehavior>,local_res8,
               UInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMouseHoverBehavior.InnerSingleton;
}

// GetSupportedDevices @ 149658870

EInputDevices __thiscall UMouseHoverBehavior::GetSupportedDevices(UMouseHoverBehavior *this)

{
  return Mouse;
}

// Initialize @ 1496593f0

void __thiscall
UMouseHoverBehavior::Initialize(UMouseHoverBehavior *this,IHoverBehaviorTarget *param_1)

{
  this->Target = param_1;
  return;
}

// StaticRegisterNativesUMouseHoverBehavior @ 149664cd0

void __cdecl UMouseHoverBehavior::StaticRegisterNativesUMouseHoverBehavior(void)

{
  return;
}

// UpdateHoverCapture @ 149666ad0

FInputCaptureUpdate * __thiscall
UMouseHoverBehavior::UpdateHoverCapture
          (UMouseHoverBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1)

{
  EInputDevices EVar1;
  IHoverBehaviorTarget *pIVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  EInputDevices EVar6;
  FInputCaptureUpdate *pFVar7;
  FInputDeviceRay *pFVar8;
  FInputDeviceRay local_58;
  
  if (this->Target == (IHoverBehaviorTarget *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Target != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseBehaviors\\MouseHoverBehavior.cpp"
                       ,0x36,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FInputCaptureUpdate *)(*pcVar3)();
      return pFVar7;
    }
  }
  FInputBehaviorModifierStates::UpdateModifiers
            (&this->Modifiers,param_1,(IModifierToggleBehaviorTarget *)this->Target);
  EVar1 = param_1->InputDevice;
  EVar6 = (**(code **)(*(longlong *)this + 0x2c0))();
  if ((EVar1 & EVar6) == None) {
    __return_storage_ptr__->State = Continue;
    __return_storage_ptr__->Source = (UInputBehavior *)0x0;
    (__return_storage_ptr__->Data).CustomData = (void *)0x0;
    (__return_storage_ptr__->Data).WhichSide = Any;
  }
  else {
    pIVar2 = this->Target;
    pcVar3 = *(code **)((longlong)*pIVar2 + 0x28);
    pFVar8 = FInputDeviceRay::FInputDeviceRay(&local_58,param_1);
    cVar5 = (*pcVar3)(pIVar2,pFVar8);
    __return_storage_ptr__->Source = (UInputBehavior *)0x0;
    (__return_storage_ptr__->Data).WhichSide = Any;
    (__return_storage_ptr__->Data).CustomData = (void *)0x0;
    if (cVar5 == '\0') {
      __return_storage_ptr__->State = End;
    }
    else {
      __return_storage_ptr__->State = Continue;
    }
  }
  return __return_storage_ptr__;
}

// WantsHoverCapture @ 149667ea0

FInputCaptureRequest * __thiscall
UMouseHoverBehavior::WantsHoverCapture
          (UMouseHoverBehavior *this,FInputCaptureRequest *__return_storage_ptr__,
          FInputDeviceState *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  IHoverBehaviorTarget *pIVar3;
  char cVar4;
  undefined8 uVar5;
  FInputDeviceRay *pFVar6;
  longlong *plVar7;
  char local_98 [8];
  double local_90;
  FInputDeviceRay local_58;
  
  if (this->Target != (IHoverBehaviorTarget *)0x0) {
    if (*(void **)&this->HoverModifierCheckFunc != (void *)0x0) {
      UE::Core::Private::Function::CheckCallable(*(void **)&this->HoverModifierCheckFunc);
      pcVar1 = *(code **)&this->HoverModifierCheckFunc;
      plVar2 = *(longlong **)&(this->HoverModifierCheckFunc).field_0x28;
      plVar7 = (longlong *)&(this->HoverModifierCheckFunc).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar7 = plVar2;
      }
      uVar5 = (**(code **)(*plVar7 + 8))();
      cVar4 = (*pcVar1)(uVar5,param_1);
      if (cVar4 == '\0') goto LAB_149667f7a;
    }
    FInputBehaviorModifierStates::UpdateModifiers
              (&this->Modifiers,param_1,(IModifierToggleBehaviorTarget *)this->Target);
    pIVar3 = this->Target;
    pcVar1 = *(code **)((longlong)*pIVar3 + 0x18);
    pFVar6 = FInputDeviceRay::FInputDeviceRay(&local_58,param_1);
    (*pcVar1)(pIVar3,local_98,pFVar6);
    if (local_98[0] != '\0') {
      __return_storage_ptr__->HitDepth = local_90;
      __return_storage_ptr__->Owner = (void *)0x0;
      __return_storage_ptr__->Type = Begin;
      __return_storage_ptr__->Source = (UInputBehavior *)this;
      goto LAB_149667f98;
    }
  }
LAB_149667f7a:
  __return_storage_ptr__->Type = Ignore;
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  __return_storage_ptr__->Owner = (void *)0x0;
  __return_storage_ptr__->HitDepth = 1.7976931348623157e+308;
LAB_149667f98:
  __return_storage_ptr__->Side = Any;
  return __return_storage_ptr__;
}

// WantsHoverEvents @ 1496680a0

bool __thiscall UMouseHoverBehavior::WantsHoverEvents(UMouseHoverBehavior *this)

{
  return true;
}

