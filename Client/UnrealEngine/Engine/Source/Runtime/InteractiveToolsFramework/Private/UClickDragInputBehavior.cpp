// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 14

// StaticClass @ 14962d8f0

UClass * __cdecl UClickDragInputBehavior::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClickDragInputBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ClickDragInputBehavior",
               &Z_Registration_Info_UClass_UClickDragInputBehavior.InnerSingleton,
               StaticRegisterNativesUClickDragInputBehavior,0x140,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UClickDragInputBehavior>,
               InternalVTableHelperCtorCaller<UClickDragInputBehavior>,local_res8,
               UAnyButtonInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClickDragInputBehavior.InnerSingleton;
}

// UClickDragInputBehavior @ 1496397d0

UClickDragInputBehavior * __thiscall
UClickDragInputBehavior::UClickDragInputBehavior
          (UClickDragInputBehavior *this,FVTableHelper *param_1)

{
  UInputBehavior::UInputBehavior((UInputBehavior *)this,param_1);
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x88 = 0;
  (this->Modifiers).ModifierIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modifiers).ModifierIDs.ArrayNum = 0;
  (this->Modifiers).ModifierIDs.ArrayMax = 0;
  *(undefined8 *)&(this->Modifiers).ModifierTests = 0;
  *(undefined8 *)&(this->Modifiers).ModifierTests.field_0x8 = 0;
  *(undefined8 *)&(this->Modifiers).ModifierTests.field_0x20 = 0;
  *(undefined ***)this = &___7UClickDragInputBehavior__6B_;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x28 = 0;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x2c = 0x80;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x34 = 0;
  *(undefined8 *)&(this->Modifiers).ModifierTests.field_0x40 = 0;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x48 = 0;
  *(undefined8 *)&this->ModifierCheckFunc = 0;
  *(undefined8 *)&(this->ModifierCheckFunc).field_0x28 = 0;
  this->bUpdateModifiersDuringDrag = false;
  this->bInClickDrag = false;
  return this;
}

// UClickDragInputBehavior @ 149639870

UClickDragInputBehavior * __thiscall
UClickDragInputBehavior::UClickDragInputBehavior(UClickDragInputBehavior *this)

{
  UAnyButtonInputBehavior::UAnyButtonInputBehavior((UAnyButtonInputBehavior *)this);
  *(undefined ***)this = &___7UClickDragInputBehavior__6B_;
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
  *(undefined8 *)&this->ModifierCheckFunc = 0;
  *(undefined8 *)&(this->ModifierCheckFunc).field_0x28 = 0;
  this->bUpdateModifiersDuringDrag = false;
  this->bInClickDrag = false;
  return this;
}

// ~UClickDragInputBehavior @ 14963e140

void __thiscall UClickDragInputBehavior::~UClickDragInputBehavior(UClickDragInputBehavior *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  *(undefined ***)this = &___7UClickDragInputBehavior__6B_;
  if (*(longlong *)&this->ModifierCheckFunc != 0) {
    plVar4 = *(longlong **)&(this->ModifierCheckFunc).field_0x28;
    plVar3 = (longlong *)&(this->ModifierCheckFunc).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar3 = plVar4;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
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
  *(undefined ***)this = &___7UAnyButtonInputBehavior__6B_;
  if (*(longlong *)&this->field_0x60 != 0) {
    plVar4 = (longlong *)&this->field_0x70;
    if (*(longlong **)&this->field_0x88 != (longlong *)0x0) {
      plVar4 = *(longlong **)&this->field_0x88;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  UInputBehavior::~UInputBehavior((UInputBehavior *)this);
  return;
}

// BeginCapture @ 14964ab50

FInputCaptureUpdate * __thiscall
UClickDragInputBehavior::BeginCapture
          (UClickDragInputBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1,EInputCaptureSide param_2)

{
  FInputBehaviorModifierStates::UpdateModifiers
            (&this->Modifiers,param_1,(IModifierToggleBehaviorTarget *)this->Target);
  (**(code **)(*(longlong *)this + 0x380))(this,param_1,param_2);
  this->bInClickDrag = true;
  __return_storage_ptr__->Source = (UInputBehavior *)this;
  __return_storage_ptr__->State = Begin;
  (__return_storage_ptr__->Data).WhichSide = Any;
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  return __return_storage_ptr__;
}

// ForceEndCapture @ 149652290

void __thiscall
UClickDragInputBehavior::ForceEndCapture(UClickDragInputBehavior *this,FInputCaptureData *param_1)

{
  (**(code **)((longlong)*this->Target + 0x38))();
  this->bInClickDrag = false;
  return;
}

// GetPrivateStaticClass @ 149655b90

UClass * __cdecl UClickDragInputBehavior::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClickDragInputBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ClickDragInputBehavior",
               &Z_Registration_Info_UClass_UClickDragInputBehavior.InnerSingleton,
               StaticRegisterNativesUClickDragInputBehavior,0x140,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UClickDragInputBehavior>,
               InternalVTableHelperCtorCaller<UClickDragInputBehavior>,local_res8,
               UAnyButtonInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClickDragInputBehavior.InnerSingleton;
}

// Initialize @ 149658e60

void __thiscall
UClickDragInputBehavior::Initialize(UClickDragInputBehavior *this,IClickDragBehaviorTarget *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != (IClickDragBehaviorTarget *)0x0) {
    this->Target = param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("TargetIn != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseBehaviors\\ClickDragBehavior.cpp"
                     ,0x10,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->Target = (IClickDragBehaviorTarget *)0x0;
  return;
}

// OnClickDragInternal @ 14965d390

void __thiscall
UClickDragInputBehavior::OnClickDragInternal
          (UClickDragInputBehavior *this,FInputDeviceState *param_1,FInputCaptureData *param_2)

{
  IClickDragBehaviorTarget *pIVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 local_58 [80];
  
  pIVar1 = this->Target;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x28);
  uVar3 = (**(code **)(*(longlong *)this + 0x350))(this,local_58,param_1);
  (*pcVar2)(pIVar1,uVar3);
  return;
}

// OnClickPressInternal @ 14965dc20

void __thiscall
UClickDragInputBehavior::OnClickPressInternal
          (UClickDragInputBehavior *this,FInputDeviceState *param_1,EInputCaptureSide param_2)

{
  IClickDragBehaviorTarget *pIVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 local_58 [80];
  
  pIVar1 = this->Target;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x20);
  uVar3 = (**(code **)(*(longlong *)this + 0x350))(this,local_58,param_1);
  (*pcVar2)(pIVar1,uVar3);
  return;
}

// OnClickReleaseInternal @ 14965de90

void __thiscall
UClickDragInputBehavior::OnClickReleaseInternal
          (UClickDragInputBehavior *this,FInputDeviceState *param_1,FInputCaptureData *param_2)

{
  IClickDragBehaviorTarget *pIVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 local_58 [80];
  
  pIVar1 = this->Target;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x30);
  uVar3 = (**(code **)(*(longlong *)this + 0x350))(this,local_58,param_1);
  (*pcVar2)(pIVar1,uVar3);
  return;
}

// StaticRegisterNativesUClickDragInputBehavior @ 149664a00

void __cdecl UClickDragInputBehavior::StaticRegisterNativesUClickDragInputBehavior(void)

{
  return;
}

// UpdateCapture @ 149666000

FInputCaptureUpdate * __thiscall
UClickDragInputBehavior::UpdateCapture
          (UClickDragInputBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1,FInputCaptureData *param_2)

{
  EInputDevices EVar1;
  char cVar2;
  EInputDevices EVar3;
  
  if (this->bUpdateModifiersDuringDrag != false) {
    FInputBehaviorModifierStates::UpdateModifiers
              (&this->Modifiers,param_1,(IModifierToggleBehaviorTarget *)this->Target);
  }
  EVar1 = param_1->InputDevice;
  EVar3 = (**(code **)(*(longlong *)this + 0x2c0))(this);
  if ((EVar1 & EVar3) != None) {
    cVar2 = (**(code **)(*(longlong *)this + 0x330))(this,param_1);
    if (cVar2 != '\0') {
      (**(code **)(*(longlong *)this + 0x390))();
      this->bInClickDrag = false;
      __return_storage_ptr__->State = End;
      goto LAB_14966609a;
    }
    (**(code **)(*(longlong *)this + 0x388))(this,param_1,param_2);
  }
  __return_storage_ptr__->State = Continue;
LAB_14966609a:
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  (__return_storage_ptr__->Data).WhichSide = Any;
  return __return_storage_ptr__;
}

// WantsCapture @ 1496672d0

FInputCaptureRequest * __thiscall
UClickDragInputBehavior::WantsCapture
          (UClickDragInputBehavior *this,FInputCaptureRequest *__return_storage_ptr__,
          FInputDeviceState *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  IClickDragBehaviorTarget *pIVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  char local_98 [8];
  double local_90;
  undefined1 local_58 [80];
  
  this->bInClickDrag = false;
  cVar4 = (**(code **)(*(longlong *)this + 800))(this,param_1);
  if (cVar4 != '\0') {
    if (*(void **)&this->ModifierCheckFunc != (void *)0x0) {
      UE::Core::Private::Function::CheckCallable(*(void **)&this->ModifierCheckFunc);
      pcVar1 = *(code **)&this->ModifierCheckFunc;
      plVar2 = *(longlong **)&(this->ModifierCheckFunc).field_0x28;
      plVar6 = (longlong *)&(this->ModifierCheckFunc).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar6 = plVar2;
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      cVar4 = (*pcVar1)(uVar5,param_1);
      if (cVar4 == '\0') goto LAB_1496673ab;
    }
    pIVar3 = this->Target;
    pcVar1 = *(code **)((longlong)*pIVar3 + 0x18);
    uVar5 = (**(code **)(*(longlong *)this + 0x350))(this,local_58,param_1);
    (*pcVar1)(pIVar3,local_98,uVar5);
    if (local_98[0] != '\0') {
      __return_storage_ptr__->HitDepth = local_90;
      __return_storage_ptr__->Owner = (void *)0x0;
      __return_storage_ptr__->Type = Begin;
      __return_storage_ptr__->Source = (UInputBehavior *)this;
      goto LAB_1496673c9;
    }
  }
LAB_1496673ab:
  __return_storage_ptr__->Type = Ignore;
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  __return_storage_ptr__->Owner = (void *)0x0;
  __return_storage_ptr__->HitDepth = 1.7976931348623157e+308;
LAB_1496673c9:
  __return_storage_ptr__->Side = Any;
  return __return_storage_ptr__;
}

