// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 16

// StaticClass @ 14962cf20

UClass * __cdecl USingleClickOrDragInputBehavior::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USingleClickOrDragInputBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SingleClickOrDragInputBehavior",
               &Z_Registration_Info_UClass_USingleClickOrDragInputBehavior.InnerSingleton,
               StaticRegisterNativesUSingleClickOrDragInputBehavior,0x180,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USingleClickOrDragInputBehavior>,
               InternalVTableHelperCtorCaller<USingleClickOrDragInputBehavior>,local_res8,
               UAnyButtonInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USingleClickOrDragInputBehavior.InnerSingleton;
}

// USingleClickOrDragInputBehavior @ 14963ceb0

USingleClickOrDragInputBehavior * __thiscall
USingleClickOrDragInputBehavior::USingleClickOrDragInputBehavior
          (USingleClickOrDragInputBehavior *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UInputBehavior::UInputBehavior((UInputBehavior *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Modifiers).ModifierIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Modifiers).ModifierIDs.ArrayNum = 0;
  (this->Modifiers).ModifierIDs.ArrayMax = 0;
  *(undefined8 *)&(this->Modifiers).ModifierTests = 0;
  *(undefined8 *)&(this->Modifiers).ModifierTests.field_0x8 = 0;
  *(undefined8 *)&(this->Modifiers).ModifierTests.field_0x20 = 0;
  this->_padding_ = (longlong)&___7USingleClickOrDragInputBehavior__6B_;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x28 = 0;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x2c = 0x80;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x34 = 0;
  *(undefined8 *)&(this->Modifiers).ModifierTests.field_0x40 = 0;
  *(undefined4 *)&(this->Modifiers).ModifierTests.field_0x48 = 0;
  *(undefined8 *)&this->ModifierCheckFunc = 0;
  *(undefined8 *)&(this->ModifierCheckFunc).field_0x28 = 0;
  this->bBeginDragIfClickTargetNotHit = true;
  this->ClickDistanceThreshold = 5.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->MouseDownRay).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->MouseDownRay).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->MouseDownRay).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->MouseDownRay).Direction.field0_0x0._s_0.X = 0.0;
  (this->MouseDownRay).Direction.field0_0x0._s_0.Y = 0.0;
  (this->MouseDownRay).Direction.field0_0x0._s_0.Z = 1.0;
  this->bInDrag = false;
  this->bImmediatelyBeginDragInBeginCapture = false;
  return this;
}

// USingleClickOrDragInputBehavior @ 14963cfa0

USingleClickOrDragInputBehavior * __thiscall
USingleClickOrDragInputBehavior::USingleClickOrDragInputBehavior
          (USingleClickOrDragInputBehavior *this)

{
  undefined8 uVar1;
  
  UAnyButtonInputBehavior::UAnyButtonInputBehavior((UAnyButtonInputBehavior *)this);
  this->_padding_ = (longlong)&___7USingleClickOrDragInputBehavior__6B_;
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
  this->bBeginDragIfClickTargetNotHit = true;
  this->ClickDistanceThreshold = 5.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->MouseDownRay).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->MouseDownRay).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->MouseDownRay).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->MouseDownRay).Direction.field0_0x0._s_0.X = 0.0;
  (this->MouseDownRay).Direction.field0_0x0._s_0.Y = 0.0;
  (this->MouseDownRay).Direction.field0_0x0._s_0.Z = 1.0;
  this->bInDrag = false;
  this->bImmediatelyBeginDragInBeginCapture = false;
  return this;
}

// ~USingleClickOrDragInputBehavior @ 14963f470

void __thiscall
USingleClickOrDragInputBehavior::~USingleClickOrDragInputBehavior
          (USingleClickOrDragInputBehavior *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7USingleClickOrDragInputBehavior__6B_;
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

// BeginCapture @ 14964aeb0

FInputCaptureUpdate * __thiscall
USingleClickOrDragInputBehavior::BeginCapture
          (USingleClickOrDragInputBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1,EInputCaptureSide param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  bool bVar7;
  FInputCaptureUpdate *pFVar8;
  
  if ((IModifierToggleBehaviorTarget *)this->ClickTarget != (IModifierToggleBehaviorTarget *)0x0) {
    FInputBehaviorModifierStates::UpdateModifiers
              (&this->Modifiers,param_1,(IModifierToggleBehaviorTarget *)this->ClickTarget);
  }
  if ((IModifierToggleBehaviorTarget *)this->DragTarget != (IModifierToggleBehaviorTarget *)0x0) {
    FInputBehaviorModifierStates::UpdateModifiers
              (&this->Modifiers,param_1,(IModifierToggleBehaviorTarget *)this->DragTarget);
  }
  if ((param_1->InputDevice & Mouse) == None) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4994265981279797307>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseBehaviors\\SingleClickOrDragBehavior.cpp"
                       ,0x3b,"Input.IsFromDevice(EInputDevices::Mouse)");
    if (bVar7) {
      pcVar1 = (code *)swi(3);
      pFVar8 = (FInputCaptureUpdate *)(*pcVar1)();
      return pFVar8;
    }
  }
  bVar7 = this->bImmediatelyBeginDragInBeginCapture;
  dVar6 = (param_1->Mouse).Position2D.field0_0x0._s_0.Y;
  (this->MouseDownPosition2D).field0_0x0._s_0.X = (param_1->Mouse).Position2D.field0_0x0._s_0.X;
  (this->MouseDownPosition2D).field0_0x0._s_0.Y = dVar6;
  dVar6 = (param_1->Mouse).WorldRay.Origin.field0_0x0._s_0.Y;
  (this->MouseDownRay).Origin.field0_0x0._s_0.X = (param_1->Mouse).WorldRay.Origin.field0_0x0._s_0.X
  ;
  (this->MouseDownRay).Origin.field0_0x0._s_0.Y = dVar6;
  uVar2 = *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Origin.field0_0x0 + 0x14);
  uVar3 = *(undefined4 *)&(param_1->Mouse).WorldRay.Direction.field0_0x0;
  uVar4 = *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Direction.field0_0x0 + 4);
  *(undefined4 *)((longlong)&(this->MouseDownRay).Origin.field0_0x0 + 0x10) =
       *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Origin.field0_0x0 + 0x10);
  *(undefined4 *)((longlong)&(this->MouseDownRay).Origin.field0_0x0 + 0x14) = uVar2;
  *(undefined4 *)&(this->MouseDownRay).Direction.field0_0x0 = uVar3;
  *(undefined4 *)((longlong)&(this->MouseDownRay).Direction.field0_0x0 + 4) = uVar4;
  uVar2 = *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Direction.field0_0x0 + 8);
  uVar3 = *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Direction.field0_0x0 + 0xc);
  uVar4 = *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Direction.field0_0x0 + 0x10);
  uVar5 = *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Direction.field0_0x0 + 0x14);
  this->CaptureSide = param_2;
  this->bInDrag = false;
  *(undefined4 *)((longlong)&(this->MouseDownRay).Direction.field0_0x0 + 8) = uVar2;
  *(undefined4 *)((longlong)&(this->MouseDownRay).Direction.field0_0x0 + 0xc) = uVar3;
  *(undefined4 *)((longlong)&(this->MouseDownRay).Direction.field0_0x0 + 0x10) = uVar4;
  *(undefined4 *)((longlong)&(this->MouseDownRay).Direction.field0_0x0 + 0x14) = uVar5;
  if (bVar7 != false) {
    this->bInDrag = true;
    (**(code **)(this->_padding_ + 0x390))(this,param_1,param_2);
  }
  __return_storage_ptr__->Source = (UInputBehavior *)this;
  __return_storage_ptr__->State = Begin;
  (__return_storage_ptr__->Data).WhichSide = Any;
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  return __return_storage_ptr__;
}

// ForceEndCapture @ 149652360

void __thiscall
USingleClickOrDragInputBehavior::ForceEndCapture
          (USingleClickOrDragInputBehavior *this,FInputCaptureData *param_1)

{
  if (this->bInDrag != false) {
    if (this->DragTarget != (IClickDragBehaviorTarget *)0x0) {
      (**(code **)((longlong)*this->DragTarget + 0x38))();
    }
    this->bInDrag = false;
  }
  return;
}

// GetPrivateStaticClass @ 149658080

UClass * __cdecl USingleClickOrDragInputBehavior::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USingleClickOrDragInputBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"SingleClickOrDragInputBehavior",
               &Z_Registration_Info_UClass_USingleClickOrDragInputBehavior.InnerSingleton,
               StaticRegisterNativesUSingleClickOrDragInputBehavior,0x180,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USingleClickOrDragInputBehavior>,
               InternalVTableHelperCtorCaller<USingleClickOrDragInputBehavior>,local_res8,
               UAnyButtonInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USingleClickOrDragInputBehavior.InnerSingleton;
}

// Initialize @ 149659430

void __thiscall
USingleClickOrDragInputBehavior::Initialize
          (USingleClickOrDragInputBehavior *this,IClickBehaviorTarget *param_1,
          IClickDragBehaviorTarget *param_2)

{
  this->ClickTarget = param_1;
  this->DragTarget = param_2;
  return;
}

// OnClickDragInternal @ 14965d3e0

void __thiscall
USingleClickOrDragInputBehavior::OnClickDragInternal
          (USingleClickOrDragInputBehavior *this,FInputDeviceState *param_1,
          FInputCaptureData *param_2)

{
  IClickDragBehaviorTarget *pIVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 local_58 [80];
  
  pIVar1 = this->DragTarget;
  if (pIVar1 != (IClickDragBehaviorTarget *)0x0) {
    pcVar2 = *(code **)((longlong)*pIVar1 + 0x28);
    uVar3 = (**(code **)(this->_padding_ + 0x350))(this,local_58,param_1);
    (*pcVar2)(pIVar1,uVar3);
  }
  return;
}

// OnClickDragPressInternal @ 14965d430

void __thiscall
USingleClickOrDragInputBehavior::OnClickDragPressInternal
          (USingleClickOrDragInputBehavior *this,FInputDeviceState *param_1,
          EInputCaptureSide param_2)

{
  IClickDragBehaviorTarget *pIVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 local_58 [80];
  
  pIVar1 = this->DragTarget;
  if (pIVar1 != (IClickDragBehaviorTarget *)0x0) {
    pcVar2 = *(code **)((longlong)*pIVar1 + 0x20);
    uVar3 = (**(code **)(this->_padding_ + 0x350))(this,local_58,param_1);
    (*pcVar2)(pIVar1,uVar3);
  }
  return;
}

// OnClickDragReleaseInternal @ 14965d480

void __thiscall
USingleClickOrDragInputBehavior::OnClickDragReleaseInternal
          (USingleClickOrDragInputBehavior *this,FInputDeviceState *param_1,
          FInputCaptureData *param_2)

{
  IClickDragBehaviorTarget *pIVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 local_58 [80];
  
  pIVar1 = this->DragTarget;
  if (pIVar1 != (IClickDragBehaviorTarget *)0x0) {
    pcVar2 = *(code **)((longlong)*pIVar1 + 0x30);
    uVar3 = (**(code **)(this->_padding_ + 0x350))(this,local_58,param_1);
    (*pcVar2)(pIVar1,uVar3);
  }
  return;
}

// OnClickedInternal @ 14965dfa0

void __thiscall
USingleClickOrDragInputBehavior::OnClickedInternal
          (USingleClickOrDragInputBehavior *this,FInputDeviceState *param_1,
          FInputCaptureData *param_2)

{
  IClickBehaviorTarget *pIVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 local_58 [80];
  
  pIVar1 = this->ClickTarget;
  if (pIVar1 != (IClickBehaviorTarget *)0x0) {
    pcVar2 = *(code **)((longlong)*pIVar1 + 0x20);
    uVar3 = (**(code **)(this->_padding_ + 0x350))(this,local_58,param_1);
    (*pcVar2)(pIVar1,uVar3);
  }
  return;
}

// SetDragTarget @ 149661c80

void __thiscall
USingleClickOrDragInputBehavior::SetDragTarget
          (USingleClickOrDragInputBehavior *this,IClickDragBehaviorTarget *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bInDrag == false) {
    this->DragTarget = param_1;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4994265981279797265>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Private\\BaseBehaviors\\SingleClickOrDragBehavior.cpp"
                       ,0x11,"!bInDrag");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// StaticRegisterNativesUSingleClickOrDragInputBehavior @ 149664d50

void __cdecl
USingleClickOrDragInputBehavior::StaticRegisterNativesUSingleClickOrDragInputBehavior(void)

{
  return;
}

// UpdateCapture @ 149666540

FInputCaptureUpdate * __thiscall
USingleClickOrDragInputBehavior::UpdateCapture
          (USingleClickOrDragInputBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1,FInputCaptureData *param_2)

{
  EInputDevices EVar1;
  IClickDragBehaviorTarget *pIVar2;
  code *pcVar3;
  IClickBehaviorTarget *pIVar4;
  double dVar5;
  char cVar6;
  EInputDevices EVar7;
  undefined8 uVar8;
  char *pcVar9;
  double dVar10;
  undefined1 auVar11 [16];
  EInputDevices local_188;
  undefined1 local_184;
  undefined1 local_183;
  undefined1 local_182;
  undefined1 local_181;
  FName local_180;
  FKeyDetails *local_178;
  TReferenceControllerBase<1> *local_170;
  undefined1 local_168;
  undefined1 local_167;
  undefined1 local_166;
  undefined1 local_165;
  FName local_160;
  FKeyDetails *local_158;
  TReferenceControllerBase<1> *local_150;
  undefined1 local_148;
  undefined1 local_147;
  undefined1 local_146;
  undefined1 local_145;
  FName local_140;
  FKeyDetails *local_138;
  TReferenceControllerBase<1> *local_130;
  undefined1 local_128;
  undefined1 local_127;
  undefined1 local_126;
  undefined1 local_125;
  FName local_120;
  FKeyDetails *local_118;
  TReferenceControllerBase<1> *local_110;
  undefined1 local_108;
  undefined1 local_107;
  undefined1 local_106;
  undefined1 local_105;
  float local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  char local_a8 [64];
  undefined1 local_68 [80];
  
  if ((IModifierToggleBehaviorTarget *)this->ClickTarget != (IModifierToggleBehaviorTarget *)0x0) {
    FInputBehaviorModifierStates::UpdateModifiers
              (&this->Modifiers,param_1,(IModifierToggleBehaviorTarget *)this->ClickTarget);
  }
  if ((IModifierToggleBehaviorTarget *)this->DragTarget != (IModifierToggleBehaviorTarget *)0x0) {
    FInputBehaviorModifierStates::UpdateModifiers
              (&this->Modifiers,param_1,(IModifierToggleBehaviorTarget *)this->DragTarget);
  }
  EVar7 = (**(code **)(this->_padding_ + 0x2c0))(this);
  EVar1 = param_1->InputDevice;
  if ((EVar7 & EVar1) == None) {
    __return_storage_ptr__->State = Continue;
  }
  else {
    if ((this->bInDrag == false) &&
       (dVar10 = (this->MouseDownPosition2D).field0_0x0._s_0.Y -
                 (param_1->Mouse).Position2D.field0_0x0._s_0.Y,
       dVar5 = (this->MouseDownPosition2D).field0_0x0._s_0.X -
               (param_1->Mouse).Position2D.field0_0x0._s_0.X,
       auVar11._0_8_ = dVar10 * dVar10 + dVar5 * dVar5, auVar11._8_8_ = 0,
       auVar11 = sqrtpd(auVar11,auVar11),
       this->ClickDistanceThreshold <= (float)auVar11._0_8_ &&
       (float)auVar11._0_8_ != this->ClickDistanceThreshold)) {
      local_184 = param_1->bShiftKeyDown;
      local_183 = param_1->bAltKeyDown;
      local_182 = param_1->bCtrlKeyDown;
      local_181 = param_1->bCmdKeyDown;
      local_180 = (param_1->Keyboard).ActiveKey.Button.KeyName;
      local_178 = (param_1->Keyboard).ActiveKey.Button.KeyDetails.Object;
      local_170 = (param_1->Keyboard).ActiveKey.Button.KeyDetails.SharedReferenceCount.
                  ReferenceController;
      if (local_170 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_170->SharedReferenceCount = (atomic<int>)((int)local_170->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_168 = (param_1->Keyboard).ActiveKey.bPressed;
      local_167 = (param_1->Keyboard).ActiveKey.bDown;
      local_166 = (param_1->Keyboard).ActiveKey.bReleased;
      local_165 = (param_1->Keyboard).ActiveKey.bDoubleClicked;
      local_160 = (param_1->Mouse).Left.Button.KeyName;
      local_158 = (param_1->Mouse).Left.Button.KeyDetails.Object;
      local_150 = (param_1->Mouse).Left.Button.KeyDetails.SharedReferenceCount.ReferenceController;
      if (local_150 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_150->SharedReferenceCount = (atomic<int>)((int)local_150->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_148 = (param_1->Mouse).Left.bPressed;
      local_147 = (param_1->Mouse).Left.bDown;
      local_146 = (param_1->Mouse).Left.bReleased;
      local_145 = (param_1->Mouse).Left.bDoubleClicked;
      local_140 = (param_1->Mouse).Middle.Button.KeyName;
      local_138 = (param_1->Mouse).Middle.Button.KeyDetails.Object;
      local_130 = (param_1->Mouse).Middle.Button.KeyDetails.SharedReferenceCount.ReferenceController
      ;
      if (local_130 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_130->SharedReferenceCount = (atomic<int>)((int)local_130->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_128 = (param_1->Mouse).Middle.bPressed;
      local_127 = (param_1->Mouse).Middle.bDown;
      local_126 = (param_1->Mouse).Middle.bReleased;
      local_125 = (param_1->Mouse).Middle.bDoubleClicked;
      local_120 = (param_1->Mouse).Right.Button.KeyName;
      local_118 = (param_1->Mouse).Right.Button.KeyDetails.Object;
      local_110 = (param_1->Mouse).Right.Button.KeyDetails.SharedReferenceCount.ReferenceController;
      if (local_110 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_110->SharedReferenceCount = (atomic<int>)((int)local_110->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_e8 = (param_1->Mouse).Delta2D.field0_0x0._s_0.X;
      dStack_e0 = (param_1->Mouse).Delta2D.field0_0x0._s_0.Y;
      local_108 = (param_1->Mouse).Right.bPressed;
      local_100 = (param_1->Mouse).WheelDelta;
      pIVar2 = this->DragTarget;
      local_107 = (param_1->Mouse).Right.bDown;
      local_106 = (param_1->Mouse).Right.bReleased;
      local_105 = (param_1->Mouse).Right.bDoubleClicked;
      local_d8 = (this->MouseDownRay).Origin.field0_0x0._s_0.X;
      dStack_d0 = (this->MouseDownRay).Origin.field0_0x0._s_0.Y;
      local_f8 = (this->MouseDownPosition2D).field0_0x0._s_0.X;
      dStack_f0 = (this->MouseDownPosition2D).field0_0x0._s_0.Y;
      local_b8 = *(undefined4 *)((longlong)&(this->MouseDownRay).Direction.field0_0x0 + 8);
      uStack_b4 = *(undefined4 *)((longlong)&(this->MouseDownRay).Direction.field0_0x0 + 0xc);
      uStack_b0 = *(undefined4 *)((longlong)&(this->MouseDownRay).Direction.field0_0x0 + 0x10);
      uStack_ac = *(undefined4 *)((longlong)&(this->MouseDownRay).Direction.field0_0x0 + 0x14);
      local_c8 = (this->MouseDownRay).Origin.field0_0x0._s_0.Z;
      dStack_c0 = (this->MouseDownRay).Direction.field0_0x0._s_0.X;
      local_188 = EVar1;
      if (pIVar2 != (IClickDragBehaviorTarget *)0x0) {
        pcVar3 = *(code **)((longlong)*pIVar2 + 0x18);
        uVar8 = (**(code **)(this->_padding_ + 0x350))(this,local_68,&local_188);
        (*pcVar3)(pIVar2,local_a8,uVar8);
        if (local_a8[0] != '\0') {
          this->bInDrag = true;
          (**(code **)(this->_padding_ + 0x390))(this,&local_188,this->CaptureSide);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_110)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_130)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_150)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_170)
      ;
    }
    cVar6 = (**(code **)(this->_padding_ + 0x330))(this,param_1);
    if (cVar6 == '\0') {
      if (this->bInDrag != false) {
        (**(code **)(this->_padding_ + 0x398))(this,param_1,param_2);
      }
      __return_storage_ptr__->State = Continue;
    }
    else if (this->bInDrag == false) {
      pIVar4 = this->ClickTarget;
      if (pIVar4 != (IClickBehaviorTarget *)0x0) {
        pcVar3 = *(code **)((longlong)*pIVar4 + 0x18);
        uVar8 = (**(code **)(this->_padding_ + 0x350))(this,local_68,param_1);
        pcVar9 = (char *)(*pcVar3)(pIVar4,local_a8,uVar8);
        if (*pcVar9 != '\0') {
          (**(code **)(this->_padding_ + 0x388))(this,param_1,param_2);
        }
      }
      __return_storage_ptr__->State = End;
    }
    else {
      (**(code **)(this->_padding_ + 0x3a0))(this,param_1,param_2);
      this->bInDrag = false;
      __return_storage_ptr__->State = End;
    }
  }
  (__return_storage_ptr__->Data).WhichSide = Any;
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  return __return_storage_ptr__;
}

// WantsCapture @ 149667aa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FInputCaptureRequest * __thiscall
USingleClickOrDragInputBehavior::WantsCapture
          (USingleClickOrDragInputBehavior *this,FInputCaptureRequest *__return_storage_ptr__,
          FInputDeviceState *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  IClickBehaviorTarget *pIVar3;
  IClickDragBehaviorTarget *pIVar4;
  undefined4 uVar5;
  char cVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  FWeakObjectPtr local_res8;
  undefined8 local_res20;
  undefined1 local_138 [8];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  FWeakObjectPtr FStack_100;
  char local_f8 [8];
  double local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [72];
  undefined1 local_70 [72];
  
  this->bImmediatelyBeginDragInBeginCapture = false;
  cVar6 = (**(code **)(this->_padding_ + 800))(this,param_1);
  if (cVar6 != '\0') {
    if (*(void **)&this->ModifierCheckFunc != (void *)0x0) {
      UE::Core::Private::Function::CheckCallable(*(void **)&this->ModifierCheckFunc);
      pcVar1 = *(code **)&this->ModifierCheckFunc;
      plVar2 = *(longlong **)&(this->ModifierCheckFunc).field_0x28;
      plVar9 = (longlong *)&(this->ModifierCheckFunc).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar9 = plVar2;
      }
      uVar7 = (**(code **)(*plVar9 + 8))();
      cVar6 = (*pcVar1)(uVar7,param_1);
      if (cVar6 == '\0') goto LAB_149667c5d;
    }
    pIVar3 = this->ClickTarget;
    if (pIVar3 == (IClickBehaviorTarget *)0x0) {
      uStack_130 = ___xmm_000000000000000047efffffe0000000;
      uStack_128 = _UNK_1506c8f58;
      local_138[0] = 0;
      local_120 = ___xmm_3ff00000000000000000000000000000;
      uStack_118 = _UNK_15061cbc8;
      local_110 = 0;
      local_10c = 0;
      local_108 = 0;
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res20 = 0;
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
      FStack_100 = local_res8;
      puVar8 = (undefined4 *)local_138;
    }
    else {
      pcVar1 = *(code **)((longlong)*pIVar3 + 0x18);
      uVar7 = (**(code **)(this->_padding_ + 0x350))(this,local_b8,param_1);
      puVar8 = (undefined4 *)(*pcVar1)(pIVar3,local_70,uVar7);
    }
    local_d8 = *(undefined8 *)(puVar8 + 8);
    uStack_d0 = *(undefined8 *)(puVar8 + 10);
    uVar5 = puVar8[3];
    local_e8 = *(undefined8 *)(puVar8 + 4);
    uStack_e0 = *(undefined8 *)(puVar8 + 6);
    local_c8 = *(undefined8 *)(puVar8 + 0xc);
    uStack_c0 = *(undefined8 *)(puVar8 + 0xe);
    if ((char)*puVar8 != '\0') {
      *(undefined4 *)&__return_storage_ptr__->HitDepth = puVar8[2];
      *(undefined4 *)((longlong)&__return_storage_ptr__->HitDepth + 4) = uVar5;
      __return_storage_ptr__->Type = Begin;
      __return_storage_ptr__->Source = (UInputBehavior *)this;
      goto LAB_149667c75;
    }
    if (this->bBeginDragIfClickTargetNotHit != false) {
      pIVar4 = this->DragTarget;
      pcVar1 = *(code **)((longlong)*pIVar4 + 0x18);
      uVar7 = (**(code **)(this->_padding_ + 0x350))(this,local_b8,param_1);
      (*pcVar1)(pIVar4,local_f8,uVar7);
      if (local_f8[0] != '\0') {
        __return_storage_ptr__->HitDepth = local_f0;
        this->bImmediatelyBeginDragInBeginCapture = true;
        __return_storage_ptr__->Type = Begin;
        __return_storage_ptr__->Source = (UInputBehavior *)this;
        goto LAB_149667c75;
      }
    }
  }
LAB_149667c5d:
  __return_storage_ptr__->Type = Ignore;
  __return_storage_ptr__->HitDepth = 1.7976931348623157e+308;
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
LAB_149667c75:
  __return_storage_ptr__->Side = Any;
  __return_storage_ptr__->Owner = (void *)0x0;
  return __return_storage_ptr__;
}

