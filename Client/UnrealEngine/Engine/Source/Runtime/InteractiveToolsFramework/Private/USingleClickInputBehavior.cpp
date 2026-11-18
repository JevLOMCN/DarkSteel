// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 12

// StaticClass @ 14962e8e0

UClass * __cdecl USingleClickInputBehavior::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USingleClickInputBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SingleClickInputBehavior",
               &Z_Registration_Info_UClass_USingleClickInputBehavior.InnerSingleton,
               StaticRegisterNativesUSingleClickInputBehavior,0x130,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USingleClickInputBehavior>,
               InternalVTableHelperCtorCaller<USingleClickInputBehavior>,local_res8,
               UAnyButtonInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USingleClickInputBehavior.InnerSingleton;
}

// USingleClickInputBehavior @ 14963cd80

USingleClickInputBehavior * __thiscall
USingleClickInputBehavior::USingleClickInputBehavior
          (USingleClickInputBehavior *this,FVTableHelper *param_1)

{
  UInputBehavior::UInputBehavior((UInputBehavior *)this,param_1);
  this->_padding_ = (longlong)&___7USingleClickInputBehavior__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
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

// USingleClickInputBehavior @ 14963ce20

USingleClickInputBehavior * __thiscall
USingleClickInputBehavior::USingleClickInputBehavior(USingleClickInputBehavior *this)

{
  UAnyButtonInputBehavior::UAnyButtonInputBehavior((UAnyButtonInputBehavior *)this);
  this->_padding_ = (longlong)&___7USingleClickInputBehavior__6B_;
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
  this->HitTestOnRelease = true;
  return this;
}

// ~USingleClickInputBehavior @ 14963f3c0

void __thiscall
USingleClickInputBehavior::~USingleClickInputBehavior(USingleClickInputBehavior *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7USingleClickInputBehavior__6B_;
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
  this->_padding_ = (longlong)&___7UAnyButtonInputBehavior__6B_;
  if (this->_padding_ != 0) {
    plVar4 = &this->_padding_;
    if ((longlong *)this->_padding_ != (longlong *)0x0) {
      plVar4 = (longlong *)this->_padding_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  UInputBehavior::~UInputBehavior((UInputBehavior *)this);
  return;
}

// BeginCapture @ 14964ae50

FInputCaptureUpdate * __thiscall
USingleClickInputBehavior::BeginCapture
          (USingleClickInputBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1,EInputCaptureSide param_2)

{
  FInputBehaviorModifierStates::UpdateModifiers
            (&this->Modifiers,param_1,(IModifierToggleBehaviorTarget *)this->Target);
  __return_storage_ptr__->Source = (UInputBehavior *)this;
  __return_storage_ptr__->State = Begin;
  (__return_storage_ptr__->Data).WhichSide = Any;
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  return __return_storage_ptr__;
}

// Clicked @ 14964db00

void __thiscall
USingleClickInputBehavior::Clicked
          (USingleClickInputBehavior *this,FInputDeviceState *param_1,FInputCaptureData *param_2)

{
  IClickBehaviorTarget *pIVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 local_58 [80];
  
  pIVar1 = this->Target;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x20);
  uVar3 = (**(code **)(this->_padding_ + 0x350))(this,local_58,param_1);
  (*pcVar2)(pIVar1,uVar3);
  return;
}

// ForceEndCapture @ 149652350

void __thiscall
USingleClickInputBehavior::ForceEndCapture
          (USingleClickInputBehavior *this,FInputCaptureData *param_1)

{
  return;
}

// GetPrivateStaticClass @ 149657fc0

UClass * __cdecl USingleClickInputBehavior::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USingleClickInputBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SingleClickInputBehavior",
               &Z_Registration_Info_UClass_USingleClickInputBehavior.InnerSingleton,
               StaticRegisterNativesUSingleClickInputBehavior,0x130,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USingleClickInputBehavior>,
               InternalVTableHelperCtorCaller<USingleClickInputBehavior>,local_res8,
               UAnyButtonInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USingleClickInputBehavior.InnerSingleton;
}

// Initialize @ 149659420

void __thiscall
USingleClickInputBehavior::Initialize(USingleClickInputBehavior *this,IClickBehaviorTarget *param_1)

{
  this->Target = param_1;
  return;
}

// StaticRegisterNativesUSingleClickInputBehavior @ 149664d40

void __cdecl USingleClickInputBehavior::StaticRegisterNativesUSingleClickInputBehavior(void)

{
  return;
}

// UpdateCapture @ 149666440

FInputCaptureUpdate * __thiscall
USingleClickInputBehavior::UpdateCapture
          (USingleClickInputBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1,FInputCaptureData *param_2)

{
  IClickBehaviorTarget *pIVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 local_a8 [64];
  undefined1 local_68 [80];
  
  FInputBehaviorModifierStates::UpdateModifiers
            (&this->Modifiers,param_1,(IModifierToggleBehaviorTarget *)this->Target);
  cVar3 = (**(code **)(this->_padding_ + 0x330))(this,param_1);
  if (cVar3 == '\0') {
    __return_storage_ptr__->State = Continue;
    goto LAB_149666504;
  }
  if (this->HitTestOnRelease == false) {
LAB_1496664e4:
    (**(code **)(this->_padding_ + 0x380))(this,param_1,param_2);
  }
  else {
    pIVar1 = this->Target;
    pcVar2 = *(code **)((longlong)*pIVar1 + 0x18);
    uVar4 = (**(code **)(this->_padding_ + 0x350))(this,local_68,param_1);
    pcVar5 = (char *)(*pcVar2)(pIVar1,local_a8,uVar4);
    if (*pcVar5 != '\0') goto LAB_1496664e4;
  }
  __return_storage_ptr__->State = End;
LAB_149666504:
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  (__return_storage_ptr__->Data).WhichSide = Any;
  return __return_storage_ptr__;
}

// WantsCapture @ 149667980

FInputCaptureRequest * __thiscall
USingleClickInputBehavior::WantsCapture
          (USingleClickInputBehavior *this,FInputCaptureRequest *__return_storage_ptr__,
          FInputDeviceState *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  IClickBehaviorTarget *pIVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  char local_98 [8];
  double local_90;
  undefined1 local_58 [80];
  
  cVar4 = (**(code **)(this->_padding_ + 800))(this,param_1);
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
      if (cVar4 == '\0') goto LAB_149667a54;
    }
    pIVar3 = this->Target;
    pcVar1 = *(code **)((longlong)*pIVar3 + 0x18);
    uVar5 = (**(code **)(this->_padding_ + 0x350))(this,local_58,param_1);
    (*pcVar1)(pIVar3,local_98,uVar5);
    if (local_98[0] != '\0') {
      __return_storage_ptr__->HitDepth = local_90;
      __return_storage_ptr__->Owner = (void *)0x0;
      __return_storage_ptr__->Type = Begin;
      __return_storage_ptr__->Source = (UInputBehavior *)this;
      goto LAB_149667a72;
    }
  }
LAB_149667a54:
  __return_storage_ptr__->Type = Ignore;
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  __return_storage_ptr__->Owner = (void *)0x0;
  __return_storage_ptr__->HitDepth = 1.7976931348623157e+308;
LAB_149667a72:
  __return_storage_ptr__->Side = Any;
  return __return_storage_ptr__;
}

