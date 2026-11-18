// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 14

// StaticClass @ 14caaf5a0

UClass * __cdecl UDragAlignmentInteraction::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDragAlignmentInteraction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"DragAlignmentInteraction",
               &Z_Registration_Info_UClass_UDragAlignmentInteraction.InnerSingleton,
               StaticRegisterNativesUDragAlignmentInteraction,0x2d0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDragAlignmentInteraction>,
               InternalVTableHelperCtorCaller<UDragAlignmentInteraction>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDragAlignmentInteraction.InnerSingleton;
}

// UDragAlignmentInteraction @ 14cacd2d0

UDragAlignmentInteraction * __thiscall
UDragAlignmentInteraction::UDragAlignmentInteraction
          (UDragAlignmentInteraction *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  FDragAlignmentBase::FDragAlignmentBase((FDragAlignmentBase *)&this->field_0x30);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__FDragAlignmentBase__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__IModifierToggleBehaviorTarget__;
  (this->SceneSnappingManager).WeakPtr = (FWeakObjectPtr)0x0;
  (this->LastRenderCameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->LastRenderCameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->LastRenderCameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->LastRenderCameraState).Orientation.X = 0.0;
  (this->LastRenderCameraState).Orientation.Y = 0.0;
  (this->LastRenderCameraState).Orientation.Z = 0.0;
  (this->LastRenderCameraState).Orientation.W = 1.0;
  (this->LastRenderCameraState).DPIScale = 1.0;
  (this->LastRenderCameraState).HorizontalFOVDegrees = 90.0;
  (this->LastRenderCameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->LastRenderCameraState).AspectRatio = 1.0;
  (this->LastRenderCameraState).bIsOrthographic = false;
  (this->LastRenderCameraState).bIsVR = false;
  this->bAlignmentToggle = false;
  this->AlignmentModifierID = 1;
  return this;
}

// UDragAlignmentInteraction @ 14cacd3b0

UDragAlignmentInteraction * __thiscall
UDragAlignmentInteraction::UDragAlignmentInteraction
          (UDragAlignmentInteraction *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  FDragAlignmentBase::FDragAlignmentBase((FDragAlignmentBase *)&this->field_0x30);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__FDragAlignmentBase__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__IModifierToggleBehaviorTarget__;
  (this->SceneSnappingManager).WeakPtr = (FWeakObjectPtr)0x0;
  (this->LastRenderCameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->LastRenderCameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->LastRenderCameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->LastRenderCameraState).Orientation.X = 0.0;
  (this->LastRenderCameraState).Orientation.Y = 0.0;
  (this->LastRenderCameraState).Orientation.Z = 0.0;
  (this->LastRenderCameraState).Orientation.W = 1.0;
  (this->LastRenderCameraState).DPIScale = 1.0;
  (this->LastRenderCameraState).HorizontalFOVDegrees = 90.0;
  (this->LastRenderCameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->LastRenderCameraState).AspectRatio = 1.0;
  (this->LastRenderCameraState).bIsOrthographic = false;
  (this->LastRenderCameraState).bIsVR = false;
  this->bAlignmentToggle = false;
  this->AlignmentModifierID = 1;
  return this;
}

// ~UDragAlignmentInteraction @ 14cad2200

void __thiscall
UDragAlignmentInteraction::~UDragAlignmentInteraction(UDragAlignmentInteraction *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__FDragAlignmentBase__;
  *(undefined ***)&this->field_0x250 = &___7IModifierToggleBehaviorTarget__6B_;
  FDragAlignmentBase::~FDragAlignmentBase((FDragAlignmentBase *)&this->field_0x30);
  UObject::~UObject((UObject *)this);
  return;
}

// GetAlignmentModeEnabled @ 14cb0d9b0

bool __thiscall UDragAlignmentInteraction::GetAlignmentModeEnabled(UDragAlignmentInteraction *this)

{
  return (bool)*(undefined1 *)&(this->LastRenderCameraState).Orientation.Z;
}

// GetCameraState @ 14cb0e3f0

FViewCameraState * __thiscall
UDragAlignmentInteraction::GetCameraState
          (UDragAlignmentInteraction *this,FViewCameraState *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  FWeakObjectPtr FVar4;
  double dVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  
  dVar1 = *(double *)&this->field_0x238;
  dVar2 = *(double *)&this->field_0x240;
  uVar3 = *(undefined8 *)&this->field_0x248;
  (__return_storage_ptr__->Position).field0_0x0._s_0.X = *(double *)&this->field_0x230;
  (__return_storage_ptr__->Position).field0_0x0._s_0.Y = dVar1;
  dVar1 = *(double *)&this->field_0x250;
  FVar4 = (this->SceneSnappingManager).WeakPtr;
  (__return_storage_ptr__->Position).field0_0x0._s_0.Z = dVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = uVar3;
  dVar2 = (this->LastRenderCameraState).Position.field0_0x0._s_0.X;
  dVar5 = (this->LastRenderCameraState).Position.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Orientation).X = dVar1;
  (__return_storage_ptr__->Orientation).Y = (double)FVar4;
  dVar1 = (this->LastRenderCameraState).Position.field0_0x0._s_0.Z;
  uVar6 = *(undefined4 *)&(this->LastRenderCameraState).field_0x18;
  uVar7 = (this->LastRenderCameraState).field_0x1c;
  uVar8 = (this->LastRenderCameraState).field_0x1d;
  uVar9 = *(undefined2 *)&(this->LastRenderCameraState).field_0x1e;
  (__return_storage_ptr__->Orientation).Z = dVar2;
  (__return_storage_ptr__->Orientation).W = dVar5;
  dVar2 = (this->LastRenderCameraState).Orientation.X;
  dVar5 = (this->LastRenderCameraState).Orientation.Y;
  *(double *)&__return_storage_ptr__->HorizontalFOVDegrees = dVar1;
  __return_storage_ptr__->AspectRatio = (float)uVar6;
  __return_storage_ptr__->bIsOrthographic = (bool)uVar7;
  __return_storage_ptr__->bIsVR = (bool)uVar8;
  *(undefined2 *)&__return_storage_ptr__->field_0x4e = uVar9;
  __return_storage_ptr__->DPIScale = dVar2;
  *(double *)&__return_storage_ptr__->field_0x58 = dVar5;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14cb12250

UClass * __cdecl UDragAlignmentInteraction::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDragAlignmentInteraction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"DragAlignmentInteraction",
               &Z_Registration_Info_UClass_UDragAlignmentInteraction.InnerSingleton,
               StaticRegisterNativesUDragAlignmentInteraction,0x2d0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDragAlignmentInteraction>,
               InternalVTableHelperCtorCaller<UDragAlignmentInteraction>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDragAlignmentInteraction.InnerSingleton;
}

// GetSnappingManager @ 14cb14730

USceneSnappingManager * __thiscall
UDragAlignmentInteraction::GetSnappingManager(UDragAlignmentInteraction *this)

{
  UObject *pUVar1;
  
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x228);
  return (USceneSnappingManager *)pUVar1;
}

// GetUObjectContainer @ 14cb15270

UObject * __thiscall UDragAlignmentInteraction::GetUObjectContainer(UDragAlignmentInteraction *this)

{
  return (UObject *)&this[-1].LastRenderCameraState.HorizontalFOVDegrees;
}

// OnUpdateModifierState @ 14cb28790

void __thiscall
UDragAlignmentInteraction::OnUpdateModifierState
          (UDragAlignmentInteraction *this,int param_1,bool param_2)

{
  if (param_1 == *(int *)&this->field_0x74) {
    this->field_0x70 = param_2;
  }
  if (this->field_0x70 == '\0') {
    this[-1].field_0x1b4 = 0;
  }
  return;
}

// RegisterAsBehaviorTarget @ 14cb2d770

void __thiscall
UDragAlignmentInteraction::RegisterAsBehaviorTarget
          (UDragAlignmentInteraction *this,UKeyAsModifierInputBehavior *param_1)

{
  IModifierToggleBehaviorTarget *pIVar1;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  local_28 = &
             ___7__TFunction_OwnedObject_P6A_NAEBUFInputDeviceState___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_10 = 0;
  local_20 = FInputDeviceState::IsCtrlKeyDown;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceState_const_&),bool,FInputDeviceState_const_&>
                ::Call;
  pIVar1 = (IModifierToggleBehaviorTarget *)&this->field_0x250;
  if (this == (UDragAlignmentInteraction *)0x0) {
    pIVar1 = (IModifierToggleBehaviorTarget *)0x0;
  }
  UKeyAsModifierInputBehavior::Initialize
            (param_1,pIVar1,this->AlignmentModifierID,
             (TFunction<bool___cdecl(FInputDeviceState_const_&)> *)local_38);
  return;
}

// Render @ 14cb30460

void __thiscall
UDragAlignmentInteraction::Render(UDragAlignmentInteraction *this,IToolsContextRenderAPI *param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double *pdVar8;
  undefined1 local_68 [96];
  
  pdVar8 = (double *)(**(code **)((longlong)*param_1 + 0x18))(param_1,local_68);
  dVar7 = pdVar8[1];
  (this->LastRenderCameraState).Position.field0_0x0._s_0.X = *pdVar8;
  (this->LastRenderCameraState).Position.field0_0x0._s_0.Y = dVar7;
  dVar7 = pdVar8[3];
  (this->LastRenderCameraState).Position.field0_0x0._s_0.Z = pdVar8[2];
  *(double *)&(this->LastRenderCameraState).field_0x18 = dVar7;
  dVar7 = pdVar8[5];
  (this->LastRenderCameraState).Orientation.X = pdVar8[4];
  (this->LastRenderCameraState).Orientation.Y = dVar7;
  dVar7 = pdVar8[7];
  (this->LastRenderCameraState).Orientation.Z = pdVar8[6];
  (this->LastRenderCameraState).Orientation.W = dVar7;
  fVar2 = *(float *)((longlong)pdVar8 + 0x44);
  fVar3 = *(float *)(pdVar8 + 9);
  uVar4 = *(undefined4 *)((longlong)pdVar8 + 0x4c);
  (this->LastRenderCameraState).HorizontalFOVDegrees = *(float *)(pdVar8 + 8);
  (this->LastRenderCameraState).OrthoWorldCoordinateWidth = fVar2;
  (this->LastRenderCameraState).AspectRatio = fVar3;
  (this->LastRenderCameraState).bIsOrthographic = (bool)(char)uVar4;
  (this->LastRenderCameraState).bIsVR = (bool)(char)((uint)uVar4 >> 8);
  *(short *)&(this->LastRenderCameraState).field_0x4e = (short)((uint)uVar4 >> 0x10);
  uVar4 = *(undefined4 *)((longlong)pdVar8 + 0x54);
  uVar5 = *(undefined4 *)(pdVar8 + 0xb);
  uVar6 = *(undefined4 *)((longlong)pdVar8 + 0x5c);
  lVar1 = *(longlong *)&this->field_0x30;
  *(undefined4 *)&(this->LastRenderCameraState).DPIScale = *(undefined4 *)(pdVar8 + 10);
  *(undefined4 *)((longlong)&(this->LastRenderCameraState).DPIScale + 4) = uVar4;
  *(undefined4 *)&(this->LastRenderCameraState).field_0x58 = uVar5;
  *(undefined4 *)&(this->LastRenderCameraState).field_0x5c = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00014cb304dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x30))(&this->field_0x30,param_1);
  return;
}

// Setup @ 14cb3a650

void __thiscall
UDragAlignmentInteraction::Setup(UDragAlignmentInteraction *this,USceneSnappingManager *param_1)

{
  USceneSnappingManager *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USceneSnappingManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->SceneSnappingManager).WeakPtr,(FObjectPtr)local_res8);
                    /* WARNING: Could not recover jumptable at 0x00014cb3a692. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this->field_0x30 + 0x28))(&this->field_0x30);
  return;
}

// StaticRegisterNativesUDragAlignmentInteraction @ 14cb3eae0

void __cdecl UDragAlignmentInteraction::StaticRegisterNativesUDragAlignmentInteraction(void)

{
  return;
}

