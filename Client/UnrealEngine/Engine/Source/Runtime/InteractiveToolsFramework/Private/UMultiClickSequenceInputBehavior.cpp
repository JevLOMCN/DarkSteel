// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 16

// StaticClass @ 14962c710

UClass * __cdecl UMultiClickSequenceInputBehavior::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMultiClickSequenceInputBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"MultiClickSequenceInputBehavior",
               &Z_Registration_Info_UClass_UMultiClickSequenceInputBehavior.InnerSingleton,
               StaticRegisterNativesUMultiClickSequenceInputBehavior,0x160,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMultiClickSequenceInputBehavior>,
               InternalVTableHelperCtorCaller<UMultiClickSequenceInputBehavior>,local_res8,
               UAnyButtonInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMultiClickSequenceInputBehavior.InnerSingleton;
}

// UMultiClickSequenceInputBehavior @ 14963cb10

UMultiClickSequenceInputBehavior * __thiscall
UMultiClickSequenceInputBehavior::UMultiClickSequenceInputBehavior
          (UMultiClickSequenceInputBehavior *this,FVTableHelper *param_1)

{
  UInputBehavior::UInputBehavior((UInputBehavior *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMultiClickSequenceInputBehavior__6B_;
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
  *(undefined8 *)&this->ModifierCheckFunc = 0;
  *(undefined8 *)&(this->ModifierCheckFunc).field_0x28 = 0;
  *(undefined8 *)&this->HoverModifierCheckFunc = 0;
  *(undefined8 *)&(this->HoverModifierCheckFunc).field_0x28 = 0;
  this->State = NotStarted;
  return this;
}

// UMultiClickSequenceInputBehavior @ 14963cbc0

UMultiClickSequenceInputBehavior * __thiscall
UMultiClickSequenceInputBehavior::UMultiClickSequenceInputBehavior
          (UMultiClickSequenceInputBehavior *this)

{
  UAnyButtonInputBehavior::UAnyButtonInputBehavior((UAnyButtonInputBehavior *)this);
  this->_padding_ = (longlong)&___7UMultiClickSequenceInputBehavior__6B_;
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
  *(undefined8 *)&this->HoverModifierCheckFunc = 0;
  *(undefined8 *)&(this->HoverModifierCheckFunc).field_0x28 = 0;
  this->State = NotStarted;
  return this;
}

// ~UMultiClickSequenceInputBehavior @ 14963f2b0

void __thiscall
UMultiClickSequenceInputBehavior::~UMultiClickSequenceInputBehavior
          (UMultiClickSequenceInputBehavior *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7UMultiClickSequenceInputBehavior__6B_;
  if (*(longlong *)&this->HoverModifierCheckFunc != 0) {
    plVar4 = *(longlong **)&(this->HoverModifierCheckFunc).field_0x28;
    plVar3 = (longlong *)&(this->HoverModifierCheckFunc).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar3 = plVar4;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
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

// BeginCapture @ 14964ade0

FInputCaptureUpdate * __thiscall
UMultiClickSequenceInputBehavior::BeginCapture
          (UMultiClickSequenceInputBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1,EInputCaptureSide param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputCaptureUpdate *pFVar3;
  
  if (this->Target == (IClickSequenceBehaviorTarget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Target",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseBehaviors\\MultiClickSequenceInputBehavior.cpp"
                       ,0x35,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FInputCaptureUpdate *)(*pcVar1)();
      return pFVar3;
    }
  }
  __return_storage_ptr__->State = Begin;
  __return_storage_ptr__->Source = (UInputBehavior *)this;
  (__return_storage_ptr__->Data).WhichSide = Any;
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  return __return_storage_ptr__;
}

// BeginHoverCapture @ 14964b250

FInputCaptureUpdate * __thiscall
UMultiClickSequenceInputBehavior::BeginHoverCapture
          (UMultiClickSequenceInputBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1,EInputCaptureSide param_2)

{
  code *pcVar1;
  bool bVar2;
  FInputCaptureUpdate *pFVar3;
  
  if (this->Target == (IClickSequenceBehaviorTarget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Target",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseBehaviors\\MultiClickSequenceInputBehavior.cpp"
                       ,0x86,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FInputCaptureUpdate *)(*pcVar1)();
      return pFVar3;
    }
  }
  __return_storage_ptr__->State = Begin;
  __return_storage_ptr__->Source = (UInputBehavior *)this;
  (__return_storage_ptr__->Data).WhichSide = Any;
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  return __return_storage_ptr__;
}

// EndHoverCapture @ 1496520f0

void __thiscall
UMultiClickSequenceInputBehavior::EndHoverCapture(UMultiClickSequenceInputBehavior *this)

{
  return;
}

// ForceEndCapture @ 149652320

void __thiscall
UMultiClickSequenceInputBehavior::ForceEndCapture
          (UMultiClickSequenceInputBehavior *this,FInputCaptureData *param_1)

{
  if ((this->Target != (IClickSequenceBehaviorTarget *)0x0) && (this->State == WaitingForNextClick))
  {
                    /* WARNING: Could not recover jumptable at 0x00014965233b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*this->Target + 0x40))();
    return;
  }
  return;
}

// GetPrivateStaticClass @ 149657cc0

UClass * __cdecl UMultiClickSequenceInputBehavior::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMultiClickSequenceInputBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"MultiClickSequenceInputBehavior",
               &Z_Registration_Info_UClass_UMultiClickSequenceInputBehavior.InnerSingleton,
               StaticRegisterNativesUMultiClickSequenceInputBehavior,0x160,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMultiClickSequenceInputBehavior>,
               InternalVTableHelperCtorCaller<UMultiClickSequenceInputBehavior>,local_res8,
               UAnyButtonInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMultiClickSequenceInputBehavior.InnerSingleton;
}

// Initialize @ 149659410

void __thiscall
UMultiClickSequenceInputBehavior::Initialize
          (UMultiClickSequenceInputBehavior *this,IClickSequenceBehaviorTarget *param_1)

{
  this->Target = param_1;
  return;
}

// StaticRegisterNativesUMultiClickSequenceInputBehavior @ 149664d00

void __cdecl
UMultiClickSequenceInputBehavior::StaticRegisterNativesUMultiClickSequenceInputBehavior(void)

{
  return;
}

// UpdateCapture @ 149666250

FInputCaptureUpdate * __thiscall
UMultiClickSequenceInputBehavior::UpdateCapture
          (UMultiClickSequenceInputBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1,FInputCaptureData *param_2)

{
  IClickSequenceBehaviorTarget *pIVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  EInputDevices EVar5;
  FInputCaptureUpdate *pFVar6;
  undefined8 uVar7;
  IClickSequenceBehaviorTarget **ppIVar8;
  undefined1 local_f8 [72];
  undefined1 local_b0 [72];
  undefined1 local_68 [80];
  
  ppIVar8 = &this->Target;
  if ((*ppIVar8 == (IClickSequenceBehaviorTarget *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Target",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseBehaviors\\MultiClickSequenceInputBehavior.cpp"
                         ,0x3d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FInputCaptureUpdate *)(*pcVar2)();
    return pFVar6;
  }
  FInputBehaviorModifierStates::UpdateModifiers
            (&this->Modifiers,param_1,(IModifierToggleBehaviorTarget *)*ppIVar8);
  EVar5 = (**(code **)(this->_padding_ + 0x2c0))(this);
  if ((param_1->InputDevice & EVar5) != None) {
    if ((this->State == WaitingForNextClick) &&
       (cVar4 = (**(code **)((longlong)**ppIVar8 + 0x48))(), cVar4 != '\0')) {
      (**(code **)((longlong)**ppIVar8 + 0x40))();
      this->State = NotStarted;
      __return_storage_ptr__->State = End;
      goto LAB_149666404;
    }
    ppIVar8 = &this->Target;
    cVar4 = (**(code **)(this->_padding_ + 0x330))(this,param_1);
    if (cVar4 != '\0') {
      if (this->State == NotStarted) {
        pIVar1 = *ppIVar8;
        pcVar2 = *(code **)((longlong)*pIVar1 + 0x20);
        uVar7 = (**(code **)(this->_padding_ + 0x350))(this,local_b0,param_1);
        cVar4 = (*pcVar2)(pIVar1,uVar7);
        if (cVar4 != '\0') {
          pIVar1 = *ppIVar8;
          pcVar2 = *(code **)((longlong)*pIVar1 + 0x28);
          uVar7 = (**(code **)(this->_padding_ + 0x350))(this,local_68,param_1);
          (*pcVar2)(pIVar1,uVar7);
          this->State = WaitingForNextClick;
        }
      }
      else if (this->State == WaitingForNextClick) {
        pIVar1 = *ppIVar8;
        pcVar2 = *(code **)((longlong)*pIVar1 + 0x38);
        uVar7 = (**(code **)(this->_padding_ + 0x350))(this,local_f8,param_1);
        cVar4 = (*pcVar2)(pIVar1,uVar7);
        if (cVar4 == '\0') {
          this->State = NotStarted;
          __return_storage_ptr__->State = End;
          goto LAB_149666404;
        }
      }
      __return_storage_ptr__->State = End;
      goto LAB_149666404;
    }
  }
  __return_storage_ptr__->State = Continue;
LAB_149666404:
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  (__return_storage_ptr__->Data).WhichSide = Any;
  return __return_storage_ptr__;
}

// UpdateHoverCapture @ 149666bd0

FInputCaptureUpdate * __thiscall
UMultiClickSequenceInputBehavior::UpdateHoverCapture
          (UMultiClickSequenceInputBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  EInputDevices EVar4;
  FInputCaptureUpdate *pFVar5;
  double local_98;
  double dStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  double dStack_70;
  undefined1 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  double local_50;
  double dStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  double local_30;
  double dStack_28;
  undefined1 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (this->Target == (IClickSequenceBehaviorTarget *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Target",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseBehaviors\\MultiClickSequenceInputBehavior.cpp"
                       ,0x8d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FInputCaptureUpdate *)(*pcVar1)();
      return pFVar5;
    }
  }
  FInputBehaviorModifierStates::UpdateModifiers
            (&this->Modifiers,param_1,(IModifierToggleBehaviorTarget *)this->Target);
  EVar4 = (**(code **)(this->_padding_ + 0x2c0))(this);
  if ((param_1->InputDevice & EVar4) != None) {
    if (this->State == WaitingForNextClick) {
      cVar3 = (**(code **)((longlong)*this->Target + 0x48))();
      if (cVar3 != '\0') {
        (**(code **)((longlong)*this->Target + 0x40))();
        this->State = NotStarted;
        __return_storage_ptr__->State = End;
        goto LAB_149666d33;
      }
    }
    if (this->State == NotStarted) {
      local_50 = (param_1->Mouse).WorldRay.Origin.field0_0x0._s_0.X;
      dStack_48 = (param_1->Mouse).WorldRay.Origin.field0_0x0._s_0.Y;
      local_40 = *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Origin.field0_0x0 + 0x10);
      uStack_3c = *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Origin.field0_0x0 + 0x14);
      uStack_38 = *(undefined4 *)&(param_1->Mouse).WorldRay.Direction.field0_0x0;
      uStack_34 = *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Direction.field0_0x0 + 4);
      local_20 = 1;
      local_30 = (param_1->Mouse).WorldRay.Direction.field0_0x0._s_0.Y;
      dStack_28 = (param_1->Mouse).WorldRay.Direction.field0_0x0._s_0.Z;
      local_18 = *(undefined4 *)&(param_1->Mouse).Position2D.field0_0x0;
      uStack_14 = *(undefined4 *)((longlong)&(param_1->Mouse).Position2D.field0_0x0 + 4);
      uStack_10 = *(undefined4 *)((longlong)&(param_1->Mouse).Position2D.field0_0x0 + 8);
      uStack_c = *(undefined4 *)((longlong)&(param_1->Mouse).Position2D.field0_0x0 + 0xc);
      (**(code **)((longlong)*this->Target + 0x18))(this->Target,&local_50);
    }
    else if (this->State == WaitingForNextClick) {
      local_98 = (param_1->Mouse).WorldRay.Origin.field0_0x0._s_0.X;
      dStack_90 = (param_1->Mouse).WorldRay.Origin.field0_0x0._s_0.Y;
      local_88 = *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Origin.field0_0x0 + 0x10);
      uStack_84 = *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Origin.field0_0x0 + 0x14);
      uStack_80 = *(undefined4 *)&(param_1->Mouse).WorldRay.Direction.field0_0x0;
      uStack_7c = *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Direction.field0_0x0 + 4);
      local_68 = 1;
      local_78 = (param_1->Mouse).WorldRay.Direction.field0_0x0._s_0.Y;
      dStack_70 = (param_1->Mouse).WorldRay.Direction.field0_0x0._s_0.Z;
      local_60 = *(undefined4 *)&(param_1->Mouse).Position2D.field0_0x0;
      uStack_5c = *(undefined4 *)((longlong)&(param_1->Mouse).Position2D.field0_0x0 + 4);
      uStack_58 = *(undefined4 *)((longlong)&(param_1->Mouse).Position2D.field0_0x0 + 8);
      uStack_54 = *(undefined4 *)((longlong)&(param_1->Mouse).Position2D.field0_0x0 + 0xc);
      (**(code **)((longlong)*this->Target + 0x30))(this->Target,&local_98);
    }
  }
  __return_storage_ptr__->State = Continue;
LAB_149666d33:
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  (__return_storage_ptr__->Data).WhichSide = Any;
  return __return_storage_ptr__;
}

// WantsCapture @ 149667870

FInputCaptureRequest * __thiscall
UMultiClickSequenceInputBehavior::WantsCapture
          (UMultiClickSequenceInputBehavior *this,FInputCaptureRequest *__return_storage_ptr__,
          FInputDeviceState *param_1)

{
  IClickSequenceBehaviorTarget *pIVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined1 local_58 [80];
  
  if (this->Target != (IClickSequenceBehaviorTarget *)0x0) {
    cVar3 = (**(code **)(this->_padding_ + 800))(this,param_1);
    if (cVar3 != '\0') {
      if (this->State == NotStarted) {
        if (*(longlong *)&(this->ModifierCheckFunc).field_0x0 != 0) {
          bVar4 = UE::Core::Private::Function::
                  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FInputDeviceState_const_&)>
                  ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(FInputDeviceState_const_&)>
                                *)&this->ModifierCheckFunc,param_1);
          if (!bVar4) goto LAB_1496678b7;
        }
        pIVar1 = this->Target;
        pcVar2 = *(code **)((longlong)*pIVar1 + 0x20);
        uVar5 = (**(code **)(this->_padding_ + 0x350))(this,local_58,param_1);
        cVar3 = (*pcVar2)(pIVar1,uVar5);
        if (cVar3 != '\0') goto LAB_14966795d;
      }
      else if (this->State == WaitingForNextClick) {
LAB_14966795d:
        __return_storage_ptr__->Type = Begin;
        __return_storage_ptr__->Source = (UInputBehavior *)this;
        goto LAB_1496678c3;
      }
    }
  }
LAB_1496678b7:
  __return_storage_ptr__->Type = Ignore;
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
LAB_1496678c3:
  __return_storage_ptr__->Owner = (void *)0x0;
  __return_storage_ptr__->HitDepth = 1.7976931348623157e+308;
  __return_storage_ptr__->Side = Any;
  return __return_storage_ptr__;
}

// WantsHoverCapture @ 149667fd0

FInputCaptureRequest * __thiscall
UMultiClickSequenceInputBehavior::WantsHoverCapture
          (UMultiClickSequenceInputBehavior *this,FInputCaptureRequest *__return_storage_ptr__,
          FInputDeviceState *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  double dVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  UMultiClickSequenceInputBehavior *local_28;
  undefined4 uStack_20;
  
  if (this->Target == (IClickSequenceBehaviorTarget *)0x0) {
LAB_149668049:
    uStack_20 = 2;
    local_28 = (UMultiClickSequenceInputBehavior *)0x0;
  }
  else {
    if (*(void **)&this->HoverModifierCheckFunc != (void *)0x0) {
      UE::Core::Private::Function::CheckCallable(*(void **)&this->HoverModifierCheckFunc);
      pcVar1 = *(code **)&this->HoverModifierCheckFunc;
      plVar2 = *(longlong **)&(this->HoverModifierCheckFunc).field_0x28;
      plVar6 = (longlong *)&(this->HoverModifierCheckFunc).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar6 = plVar2;
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      cVar4 = (*pcVar1)(uVar5,param_1);
      if (cVar4 == '\0') goto LAB_149668049;
    }
    uStack_20 = 1;
    local_28 = this;
  }
  dVar3 = __real_7fefffffffffffff;
  __return_storage_ptr__->Source = (UInputBehavior *)local_28;
  __return_storage_ptr__->Type = uStack_20;
  __return_storage_ptr__->Side = 99;
  __return_storage_ptr__->HitDepth = dVar3;
  __return_storage_ptr__->Owner = (void *)0x0;
  return __return_storage_ptr__;
}

// WantsHoverEvents @ 1496680b0

bool __thiscall
UMultiClickSequenceInputBehavior::WantsHoverEvents(UMultiClickSequenceInputBehavior *this)

{
  return true;
}

