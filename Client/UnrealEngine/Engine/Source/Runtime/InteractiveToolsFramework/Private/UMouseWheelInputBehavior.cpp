// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 11

// StaticClass @ 14962bf80

UClass * __cdecl UMouseWheelInputBehavior::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMouseWheelInputBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"MouseWheelInputBehavior",
               &Z_Registration_Info_UClass_UMouseWheelInputBehavior.InnerSingleton,
               StaticRegisterNativesUMouseWheelInputBehavior,0x130,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMouseWheelInputBehavior>,
               InternalVTableHelperCtorCaller<UMouseWheelInputBehavior>,local_res8,
               UAnyButtonInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMouseWheelInputBehavior.InnerSingleton;
}

// UMouseWheelInputBehavior @ 14963c980

UMouseWheelInputBehavior * __thiscall
UMouseWheelInputBehavior::UMouseWheelInputBehavior
          (UMouseWheelInputBehavior *this,FVTableHelper *param_1)

{
  UInputBehavior::UInputBehavior((UInputBehavior *)this,param_1);
  *(undefined ***)this = &___7UMouseWheelInputBehavior__6B_;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x88 = 0;
  *(undefined8 *)&this->ModifierCheckFunc = 0;
  *(undefined8 *)&(this->ModifierCheckFunc).field_0x28 = 0;
  (this->Modifiers).ModifierIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modifiers).ModifierIDs.ArrayNum = 0;
  (this->Modifiers).ModifierIDs.ArrayMax = 0;
  *(undefined8 *)&(this->Modifiers).ModifierTests = 0;
  *(undefined8 *)&(this->Modifiers).ModifierTests.field_0x8 = 0;
  *(undefined8 *)&(this->Modifiers).ModifierTests.field_0x20 = 0;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x28 = 0;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x2c = 0x80;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x34 = 0;
  *(undefined8 *)&(this->Modifiers).ModifierTests.field_0x40 = 0;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x48 = 0;
  return this;
}

// UMouseWheelInputBehavior @ 14963ca20

UMouseWheelInputBehavior * __thiscall
UMouseWheelInputBehavior::UMouseWheelInputBehavior(UMouseWheelInputBehavior *this)

{
  UAnyButtonInputBehavior::UAnyButtonInputBehavior((UAnyButtonInputBehavior *)this);
  *(undefined ***)this = &___7UMouseWheelInputBehavior__6B_;
  *(undefined8 *)&this->ModifierCheckFunc = 0;
  *(undefined8 *)&(this->ModifierCheckFunc).field_0x28 = 0;
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
  return this;
}

// ~UMouseWheelInputBehavior @ 14963f1e0

void __thiscall UMouseWheelInputBehavior::~UMouseWheelInputBehavior(UMouseWheelInputBehavior *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  *(undefined ***)this = &___7UMouseWheelInputBehavior__6B_;
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
  if (*(longlong *)&this->ModifierCheckFunc != 0) {
    plVar4 = *(longlong **)&(this->ModifierCheckFunc).field_0x28;
    plVar3 = (longlong *)&(this->ModifierCheckFunc).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar3 = plVar4;
    }
    (**(code **)(*plVar3 + 0x10))();
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

// BeginCapture @ 14964acd0

FInputCaptureUpdate * __thiscall
UMouseWheelInputBehavior::BeginCapture
          (UMouseWheelInputBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1,EInputCaptureSide param_2)

{
  IMouseWheelBehaviorTarget *pIVar1;
  IMouseWheelBehaviorTarget IVar2;
  bool bVar3;
  FInputCaptureUpdate *pFVar4;
  FInputDeviceRay *pFVar5;
  code *pcVar6;
  FInputDeviceRay local_a8;
  FInputDeviceRay local_60;
  
  if ((param_1->Mouse).WheelDelta == 0.0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Input.Mouse.WheelDelta != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseBehaviors\\MouseWheelBehavior.cpp"
                       ,0x20,L"");
    if (bVar3) {
      pcVar6 = (code *)swi(3);
      pFVar4 = (FInputCaptureUpdate *)(*pcVar6)();
      return pFVar4;
    }
  }
  FInputBehaviorModifierStates::UpdateModifiers
            (&this->Modifiers,param_1,(IModifierToggleBehaviorTarget *)this->Target);
  pIVar1 = this->Target;
  IVar2 = *pIVar1;
  if ((param_1->Mouse).WheelDelta <= 0.0) {
    pcVar6 = *(code **)((longlong)IVar2 + 0x28);
    FInputDeviceRay::FInputDeviceRay(&local_60,param_1);
    pFVar5 = &local_60;
  }
  else {
    pcVar6 = *(code **)((longlong)IVar2 + 0x20);
    FInputDeviceRay::FInputDeviceRay(&local_a8,param_1);
    pFVar5 = &local_a8;
  }
  (*pcVar6)(pIVar1,pFVar5);
  __return_storage_ptr__->Source = (UInputBehavior *)this;
  __return_storage_ptr__->State = Begin;
  (__return_storage_ptr__->Data).WhichSide = Any;
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  return __return_storage_ptr__;
}

// ForceEndCapture @ 149652310

void __thiscall
UMouseWheelInputBehavior::ForceEndCapture(UMouseWheelInputBehavior *this,FInputCaptureData *param_1)

{
  return;
}

// GetPrivateStaticClass @ 149657b40

UClass * __cdecl UMouseWheelInputBehavior::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMouseWheelInputBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"MouseWheelInputBehavior",
               &Z_Registration_Info_UClass_UMouseWheelInputBehavior.InnerSingleton,
               StaticRegisterNativesUMouseWheelInputBehavior,0x130,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMouseWheelInputBehavior>,
               InternalVTableHelperCtorCaller<UMouseWheelInputBehavior>,local_res8,
               UAnyButtonInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMouseWheelInputBehavior.InnerSingleton;
}

// Initialize @ 149659400

void __thiscall
UMouseWheelInputBehavior::Initialize
          (UMouseWheelInputBehavior *this,IMouseWheelBehaviorTarget *param_1)

{
  this->Target = param_1;
  return;
}

// StaticRegisterNativesUMouseWheelInputBehavior @ 149664ce0

void __cdecl UMouseWheelInputBehavior::StaticRegisterNativesUMouseWheelInputBehavior(void)

{
  return;
}

// UpdateCapture @ 149666220

FInputCaptureUpdate * __thiscall
UMouseWheelInputBehavior::UpdateCapture
          (UMouseWheelInputBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1,FInputCaptureData *param_2)

{
  __return_storage_ptr__->State = End;
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  (__return_storage_ptr__->Data).WhichSide = Any;
  return __return_storage_ptr__;
}

// WantsCapture @ 149667650

FInputCaptureRequest * __thiscall
UMouseWheelInputBehavior::WantsCapture
          (UMouseWheelInputBehavior *this,FInputCaptureRequest *__return_storage_ptr__,
          FInputDeviceState *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  IMouseWheelBehaviorTarget *pIVar3;
  char cVar4;
  undefined8 uVar5;
  FInputDeviceRay *pFVar6;
  longlong *plVar7;
  char local_98 [8];
  double local_90;
  FInputDeviceRay local_58;
  
  if ((param_1->Mouse).WheelDelta != 0.0) {
    if (*(void **)&this->ModifierCheckFunc != (void *)0x0) {
      UE::Core::Private::Function::CheckCallable(*(void **)&this->ModifierCheckFunc);
      pcVar1 = *(code **)&this->ModifierCheckFunc;
      plVar2 = *(longlong **)&(this->ModifierCheckFunc).field_0x28;
      plVar7 = (longlong *)&(this->ModifierCheckFunc).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar7 = plVar2;
      }
      uVar5 = (**(code **)(*plVar7 + 8))();
      cVar4 = (*pcVar1)(uVar5,param_1);
      if (cVar4 == '\0') goto LAB_14966771a;
    }
    pIVar3 = this->Target;
    pcVar1 = *(code **)((longlong)*pIVar3 + 0x18);
    pFVar6 = FInputDeviceRay::FInputDeviceRay(&local_58,param_1);
    (*pcVar1)(pIVar3,local_98,pFVar6);
    if (local_98[0] != '\0') {
      __return_storage_ptr__->HitDepth = local_90;
      __return_storage_ptr__->Owner = (void *)0x0;
      __return_storage_ptr__->Type = Begin;
      __return_storage_ptr__->Source = (UInputBehavior *)this;
      goto LAB_149667738;
    }
  }
LAB_14966771a:
  __return_storage_ptr__->Type = Ignore;
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  __return_storage_ptr__->Owner = (void *)0x0;
  __return_storage_ptr__->HitDepth = 1.7976931348623157e+308;
LAB_149667738:
  __return_storage_ptr__->Side = Any;
  return __return_storage_ptr__;
}

