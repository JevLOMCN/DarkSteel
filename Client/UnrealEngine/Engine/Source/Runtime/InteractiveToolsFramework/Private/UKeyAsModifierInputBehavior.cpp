// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 14

// StaticClass @ 14962a920

UClass * __cdecl UKeyAsModifierInputBehavior::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKeyAsModifierInputBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"KeyAsModifierInputBehavior",
               &Z_Registration_Info_UClass_UKeyAsModifierInputBehavior.InnerSingleton,
               StaticRegisterNativesUKeyAsModifierInputBehavior,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UKeyAsModifierInputBehavior>,
               InternalVTableHelperCtorCaller<UKeyAsModifierInputBehavior>,local_res8,
               UInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKeyAsModifierInputBehavior.InnerSingleton;
}

// UKeyAsModifierInputBehavior @ 14963b910

UKeyAsModifierInputBehavior * __thiscall
UKeyAsModifierInputBehavior::UKeyAsModifierInputBehavior
          (UKeyAsModifierInputBehavior *this,FVTableHelper *param_1)

{
  UInputBehavior::UInputBehavior((UInputBehavior *)this,param_1);
  this->_padding_ = (longlong)&___7UKeyAsModifierInputBehavior__6B_;
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

// UKeyAsModifierInputBehavior @ 14963b980

UKeyAsModifierInputBehavior * __thiscall
UKeyAsModifierInputBehavior::UKeyAsModifierInputBehavior(UKeyAsModifierInputBehavior *this)

{
  UInputBehavior::UInputBehavior((UInputBehavior *)this);
  this->_padding_ = (longlong)&___7UKeyAsModifierInputBehavior__6B_;
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

// ~UKeyAsModifierInputBehavior @ 14963eb70

void __thiscall
UKeyAsModifierInputBehavior::~UKeyAsModifierInputBehavior(UKeyAsModifierInputBehavior *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UKeyAsModifierInputBehavior__6B_;
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
  UInputBehavior::~UInputBehavior((UInputBehavior *)this);
  return;
}

// BeginCapture @ 14964abe0

FInputCaptureUpdate * __thiscall
UKeyAsModifierInputBehavior::BeginCapture
          (UKeyAsModifierInputBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1,EInputCaptureSide param_2)

{
  __return_storage_ptr__->State = End;
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  (__return_storage_ptr__->Data).WhichSide = Any;
  return __return_storage_ptr__;
}

// ForceEndCapture @ 1496522c0

void __thiscall
UKeyAsModifierInputBehavior::ForceEndCapture
          (UKeyAsModifierInputBehavior *this,FInputCaptureData *param_1)

{
  if (this->Target != (IModifierToggleBehaviorTarget *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001496522cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*this->Target + 0x10))();
    return;
  }
  return;
}

// GetPrivateStaticClass @ 149657240

UClass * __cdecl UKeyAsModifierInputBehavior::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UKeyAsModifierInputBehavior.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"KeyAsModifierInputBehavior",
               &Z_Registration_Info_UClass_UKeyAsModifierInputBehavior.InnerSingleton,
               StaticRegisterNativesUKeyAsModifierInputBehavior,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UKeyAsModifierInputBehavior>,
               InternalVTableHelperCtorCaller<UKeyAsModifierInputBehavior>,local_res8,
               UInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UKeyAsModifierInputBehavior.InnerSingleton;
}

// GetSupportedDevices @ 149658840

EInputDevices __thiscall
UKeyAsModifierInputBehavior::GetSupportedDevices(UKeyAsModifierInputBehavior *this)

{
  return Keyboard;
}

// Initialize @ 149658ed0

void __thiscall
UKeyAsModifierInputBehavior::Initialize
          (UKeyAsModifierInputBehavior *this,IModifierToggleBehaviorTarget *param_1,int param_2,
          TFunction<bool___cdecl(FInputDeviceState_const_&)> *param_3)

{
  longlong *plVar1;
  
  this->Target = param_1;
  FInputBehaviorModifierStates::RegisterModifier(&this->Modifiers,param_2,param_3);
  if (*(longlong *)param_3 != 0) {
    plVar1 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar1 = *(longlong **)&param_3->field_0x28;
    }
                    /* WARNING: Could not recover jumptable at 0x000149658f0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// Initialize @ 149658f20

void __thiscall
UKeyAsModifierInputBehavior::Initialize
          (UKeyAsModifierInputBehavior *this,IModifierToggleBehaviorTarget *param_1,int param_2,
          FKey *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  FKeyDetails *pFVar3;
  longlong *plVar4;
  atomic<int> *paVar5;
  code *local_58 [2];
  longlong local_48 [3];
  longlong *local_30;
  
  pTVar1 = (param_3->KeyDetails).SharedReferenceCount.ReferenceController;
  FVar2 = param_3->KeyName;
  pFVar3 = (param_3->KeyDetails).Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar5 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar5 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x20,8);
  *local_30 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`UKeyAsModifierInputBehavior::Initialize'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  *(FName *)(local_30 + 1) = FVar2;
  local_30[2] = (longlong)pFVar3;
  local_30[3] = (longlong)pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  if ((FName *)(local_30 + 1) != (FName *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UKeyAsModifierInputBehavior::Initialize'::__l2::<lambda_1>,bool,FInputDeviceState_const_&>
                  ::Call;
  }
  this->Target = param_1;
  FInputBehaviorModifierStates::RegisterModifier
            (&this->Modifiers,param_2,(TFunction<bool___cdecl(FInputDeviceState_const_&)> *)local_58
            );
  if (local_58[0] != (code *)0x0) {
    plVar4 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar4 = local_30;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// StaticRegisterNativesUKeyAsModifierInputBehavior @ 149664c20

void __cdecl UKeyAsModifierInputBehavior::StaticRegisterNativesUKeyAsModifierInputBehavior(void)

{
  return;
}

// UpdateCapture @ 1496660d0

FInputCaptureUpdate * __thiscall
UKeyAsModifierInputBehavior::UpdateCapture
          (UKeyAsModifierInputBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1,FInputCaptureData *param_2)

{
  __return_storage_ptr__->State = End;
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  (__return_storage_ptr__->Data).WhichSide = Any;
  return __return_storage_ptr__;
}

// WantsCapture @ 149667520

FInputCaptureRequest * __thiscall
UKeyAsModifierInputBehavior::WantsCapture
          (UKeyAsModifierInputBehavior *this,FInputCaptureRequest *__return_storage_ptr__,
          FInputDeviceState *param_1)

{
  FInputBehaviorModifierStates::UpdateModifiers(&this->Modifiers,param_1,this->Target);
  __return_storage_ptr__->Type = Ignore;
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  __return_storage_ptr__->Owner = (void *)0x0;
  __return_storage_ptr__->HitDepth = 1.7976931348623157e+308;
  __return_storage_ptr__->Side = Any;
  return __return_storage_ptr__;
}

// WantsForceEndCapture @ 149667e90

bool __thiscall UKeyAsModifierInputBehavior::WantsForceEndCapture(UKeyAsModifierInputBehavior *this)

{
  return true;
}

