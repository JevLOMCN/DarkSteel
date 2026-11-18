// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 12

// StaticClass @ 149672700

UClass * __cdecl UScalableSphereGizmoInputBehavior::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScalableSphereGizmoInputBehavior.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ScalableSphereGizmoInputBehavior",
               &Z_Registration_Info_UClass_UScalableSphereGizmoInputBehavior.InnerSingleton,
               StaticRegisterNativesUScalableSphereGizmoInputBehavior,0xe0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UScalableSphereGizmoInputBehavior>,
               InternalVTableHelperCtorCaller<UScalableSphereGizmoInputBehavior>,local_res8,
               UAnyButtonInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScalableSphereGizmoInputBehavior.InnerSingleton;
}

// UScalableSphereGizmoInputBehavior @ 149688140

UScalableSphereGizmoInputBehavior * __thiscall
UScalableSphereGizmoInputBehavior::UScalableSphereGizmoInputBehavior
          (UScalableSphereGizmoInputBehavior *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UAnyButtonInputBehavior::UAnyButtonInputBehavior((UAnyButtonInputBehavior *)this,param_1);
  this->_padding_ = (longlong)&___7UScalableSphereGizmoInputBehavior__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastWorldRay).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastWorldRay).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->LastWorldRay).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LastWorldRay).Direction.field0_0x0._s_0.X = 0.0;
  (this->LastWorldRay).Direction.field0_0x0._s_0.Y = 0.0;
  (this->LastWorldRay).Direction.field0_0x0._s_0.Z = 1.0;
  return this;
}

// UScalableSphereGizmoInputBehavior @ 1496881b0

UScalableSphereGizmoInputBehavior * __thiscall
UScalableSphereGizmoInputBehavior::UScalableSphereGizmoInputBehavior
          (UScalableSphereGizmoInputBehavior *this)

{
  undefined8 uVar1;
  
  UAnyButtonInputBehavior::UAnyButtonInputBehavior((UAnyButtonInputBehavior *)this);
  this->_padding_ = (longlong)&___7UScalableSphereGizmoInputBehavior__6B_;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastWorldRay).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastWorldRay).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->LastWorldRay).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LastWorldRay).Direction.field0_0x0._s_0.X = 0.0;
  (this->LastWorldRay).Direction.field0_0x0._s_0.Y = 0.0;
  (this->LastWorldRay).Direction.field0_0x0._s_0.Z = 1.0;
  return this;
}

// ~UScalableSphereGizmoInputBehavior @ 14968a990

void __thiscall
UScalableSphereGizmoInputBehavior::~UScalableSphereGizmoInputBehavior
          (UScalableSphereGizmoInputBehavior *this)

{
  this->_padding_ = (longlong)&___7UScalableSphereGizmoInputBehavior__6B_;
  UAnyButtonInputBehavior::~UAnyButtonInputBehavior((UAnyButtonInputBehavior *)this);
  return;
}

// BeginCapture @ 149692560

FInputCaptureUpdate * __thiscall
UScalableSphereGizmoInputBehavior::BeginCapture
          (UScalableSphereGizmoInputBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1,EInputCaptureSide param_2)

{
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_58 = *(undefined4 *)&(param_1->Mouse).WorldRay.Origin.field0_0x0;
  uStack_54 = *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Origin.field0_0x0 + 4);
  uStack_50 = *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Origin.field0_0x0 + 8);
  uStack_4c = *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Origin.field0_0x0 + 0xc);
  local_28 = 1;
  local_48 = *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Origin.field0_0x0 + 0x10);
  uStack_44 = *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Origin.field0_0x0 + 0x14);
  uStack_40 = *(undefined4 *)&(param_1->Mouse).WorldRay.Direction.field0_0x0;
  uStack_3c = *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Direction.field0_0x0 + 4);
  local_38 = *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Direction.field0_0x0 + 8);
  uStack_34 = *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Direction.field0_0x0 + 0xc);
  uStack_30 = *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Direction.field0_0x0 + 0x10);
  uStack_2c = *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Direction.field0_0x0 + 0x14);
  local_20 = *(undefined4 *)&(param_1->Mouse).Position2D.field0_0x0;
  uStack_1c = *(undefined4 *)((longlong)&(param_1->Mouse).Position2D.field0_0x0 + 4);
  uStack_18 = *(undefined4 *)((longlong)&(param_1->Mouse).Position2D.field0_0x0 + 8);
  uStack_14 = *(undefined4 *)((longlong)&(param_1->Mouse).Position2D.field0_0x0 + 0xc);
  *(undefined4 *)&(this->LastWorldRay).Origin.field0_0x0 = local_58;
  *(undefined4 *)((longlong)&(this->LastWorldRay).Origin.field0_0x0 + 4) = uStack_54;
  *(undefined4 *)((longlong)&(this->LastWorldRay).Origin.field0_0x0 + 8) = uStack_50;
  *(undefined4 *)((longlong)&(this->LastWorldRay).Origin.field0_0x0 + 0xc) = uStack_4c;
  *(undefined4 *)((longlong)&(this->LastWorldRay).Origin.field0_0x0 + 0x10) = local_48;
  *(undefined4 *)((longlong)&(this->LastWorldRay).Origin.field0_0x0 + 0x14) = uStack_44;
  *(undefined4 *)&(this->LastWorldRay).Direction.field0_0x0 = uStack_40;
  *(undefined4 *)((longlong)&(this->LastWorldRay).Direction.field0_0x0 + 4) = uStack_3c;
  *(undefined4 *)((longlong)&(this->LastWorldRay).Direction.field0_0x0 + 8) = local_38;
  *(undefined4 *)((longlong)&(this->LastWorldRay).Direction.field0_0x0 + 0xc) = uStack_34;
  *(undefined4 *)((longlong)&(this->LastWorldRay).Direction.field0_0x0 + 0x10) = uStack_30;
  *(undefined4 *)((longlong)&(this->LastWorldRay).Direction.field0_0x0 + 0x14) = uStack_2c;
  *(undefined4 *)&(this->LastScreenPosition).field0_0x0 = local_20;
  *(undefined4 *)((longlong)&(this->LastScreenPosition).field0_0x0 + 4) = uStack_1c;
  *(undefined4 *)((longlong)&(this->LastScreenPosition).field0_0x0 + 8) = uStack_18;
  *(undefined4 *)((longlong)&(this->LastScreenPosition).field0_0x0 + 0xc) = uStack_14;
  (**(code **)(*(longlong *)this->Gizmo + 0x2f0))(this->Gizmo,&local_58);
  this->bInputDragCaptured = true;
  __return_storage_ptr__->Source = (UInputBehavior *)this;
  __return_storage_ptr__->State = Begin;
  (__return_storage_ptr__->Data).WhichSide = Any;
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  return __return_storage_ptr__;
}

// ForceEndCapture @ 14969f4c0

void __thiscall
UScalableSphereGizmoInputBehavior::ForceEndCapture
          (UScalableSphereGizmoInputBehavior *this,FInputCaptureData *param_1)

{
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (this->bInputDragCaptured != false) {
    local_58 = (this->LastWorldRay).Origin.field0_0x0._s_0.X;
    dStack_50 = (this->LastWorldRay).Origin.field0_0x0._s_0.Y;
    this->bInputDragCaptured = false;
    local_48 = (this->LastWorldRay).Origin.field0_0x0._s_0.Z;
    dStack_40 = (this->LastWorldRay).Direction.field0_0x0._s_0.X;
    local_28 = 0;
    local_38 = *(undefined4 *)((longlong)&(this->LastWorldRay).Direction.field0_0x0 + 8);
    uStack_34 = *(undefined4 *)((longlong)&(this->LastWorldRay).Direction.field0_0x0 + 0xc);
    uStack_30 = *(undefined4 *)((longlong)&(this->LastWorldRay).Direction.field0_0x0 + 0x10);
    uStack_2c = *(undefined4 *)((longlong)&(this->LastWorldRay).Direction.field0_0x0 + 0x14);
    local_20 = 0;
    uStack_18 = 0;
    (**(code **)(*(longlong *)this->Gizmo + 0x300))(this->Gizmo,&local_58);
  }
  return;
}

// GetPriority @ 1496a3f80

FInputCapturePriority __thiscall
UScalableSphereGizmoInputBehavior::GetPriority(UScalableSphereGizmoInputBehavior *this)

{
  undefined4 *in_RDX;
  
  *in_RDX = 0x32;
  return (FInputCapturePriority)(int)in_RDX;
}

// GetPrivateStaticClass @ 1496a7460

UClass * __cdecl UScalableSphereGizmoInputBehavior::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UScalableSphereGizmoInputBehavior.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"ScalableSphereGizmoInputBehavior",
               &Z_Registration_Info_UClass_UScalableSphereGizmoInputBehavior.InnerSingleton,
               StaticRegisterNativesUScalableSphereGizmoInputBehavior,0xe0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UScalableSphereGizmoInputBehavior>,
               InternalVTableHelperCtorCaller<UScalableSphereGizmoInputBehavior>,local_res8,
               UAnyButtonInputBehavior::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UScalableSphereGizmoInputBehavior.InnerSingleton;
}

// Initialize @ 1496ac0a0

void __thiscall
UScalableSphereGizmoInputBehavior::Initialize
          (UScalableSphereGizmoInputBehavior *this,UScalableSphereGizmo *param_1)

{
  this->Gizmo = param_1;
  return;
}

// StaticRegisterNativesUScalableSphereGizmoInputBehavior @ 1496c2d40

void __cdecl
UScalableSphereGizmoInputBehavior::StaticRegisterNativesUScalableSphereGizmoInputBehavior(void)

{
  return;
}

// UpdateCapture @ 1496c3c10

FInputCaptureUpdate * __thiscall
UScalableSphereGizmoInputBehavior::UpdateCapture
          (UScalableSphereGizmoInputBehavior *this,FInputCaptureUpdate *__return_storage_ptr__,
          FInputDeviceState *param_1,FInputCaptureData *param_2)

{
  longlong lVar1;
  UScalableSphereGizmo *pUVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  char cVar18;
  EInputDevices EVar19;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  EVar19 = (**(code **)(this->_padding_ + 0x2c0))();
  if ((param_1->InputDevice & EVar19) != None) {
    uVar3 = *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Origin.field0_0x0 + 4);
    uVar4 = *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Origin.field0_0x0 + 8);
    uVar5 = *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Origin.field0_0x0 + 0xc);
    lVar1 = this->_padding_;
    uVar6 = *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Origin.field0_0x0 + 0x10);
    uVar7 = *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Origin.field0_0x0 + 0x14);
    uVar8 = *(undefined4 *)&(param_1->Mouse).WorldRay.Direction.field0_0x0;
    uVar9 = *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Direction.field0_0x0 + 4);
    uVar10 = *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Direction.field0_0x0 + 8);
    uVar11 = *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Direction.field0_0x0 + 0xc);
    uVar12 = *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Direction.field0_0x0 + 0x10);
    uVar13 = *(undefined4 *)((longlong)&(param_1->Mouse).WorldRay.Direction.field0_0x0 + 0x14);
    uVar14 = *(undefined4 *)&(param_1->Mouse).Position2D.field0_0x0;
    uVar15 = *(undefined4 *)((longlong)&(param_1->Mouse).Position2D.field0_0x0 + 4);
    uVar16 = *(undefined4 *)((longlong)&(param_1->Mouse).Position2D.field0_0x0 + 8);
    uVar17 = *(undefined4 *)((longlong)&(param_1->Mouse).Position2D.field0_0x0 + 0xc);
    *(undefined4 *)&(this->LastWorldRay).Origin.field0_0x0 =
         *(undefined4 *)&(param_1->Mouse).WorldRay.Origin.field0_0x0;
    *(undefined4 *)((longlong)&(this->LastWorldRay).Origin.field0_0x0 + 4) = uVar3;
    *(undefined4 *)((longlong)&(this->LastWorldRay).Origin.field0_0x0 + 8) = uVar4;
    *(undefined4 *)((longlong)&(this->LastWorldRay).Origin.field0_0x0 + 0xc) = uVar5;
    *(undefined4 *)((longlong)&(this->LastWorldRay).Origin.field0_0x0 + 0x10) = uVar6;
    *(undefined4 *)((longlong)&(this->LastWorldRay).Origin.field0_0x0 + 0x14) = uVar7;
    *(undefined4 *)&(this->LastWorldRay).Direction.field0_0x0 = uVar8;
    *(undefined4 *)((longlong)&(this->LastWorldRay).Direction.field0_0x0 + 4) = uVar9;
    *(undefined4 *)((longlong)&(this->LastWorldRay).Direction.field0_0x0 + 8) = uVar10;
    *(undefined4 *)((longlong)&(this->LastWorldRay).Direction.field0_0x0 + 0xc) = uVar11;
    *(undefined4 *)((longlong)&(this->LastWorldRay).Direction.field0_0x0 + 0x10) = uVar12;
    *(undefined4 *)((longlong)&(this->LastWorldRay).Direction.field0_0x0 + 0x14) = uVar13;
    *(undefined4 *)&(this->LastScreenPosition).field0_0x0 = uVar14;
    *(undefined4 *)((longlong)&(this->LastScreenPosition).field0_0x0 + 4) = uVar15;
    *(undefined4 *)((longlong)&(this->LastScreenPosition).field0_0x0 + 8) = uVar16;
    *(undefined4 *)((longlong)&(this->LastScreenPosition).field0_0x0 + 0xc) = uVar17;
    cVar18 = (**(code **)(lVar1 + 0x330))(this,param_1);
    pUVar2 = this->Gizmo;
    local_58 = (this->LastWorldRay).Origin.field0_0x0._s_0.X;
    dStack_50 = (this->LastWorldRay).Origin.field0_0x0._s_0.Y;
    local_48 = (this->LastWorldRay).Origin.field0_0x0._s_0.Z;
    dStack_40 = (this->LastWorldRay).Direction.field0_0x0._s_0.X;
    if (cVar18 != '\0') {
      this->bInputDragCaptured = false;
      local_28 = 0;
      local_38 = *(undefined4 *)((longlong)&(this->LastWorldRay).Direction.field0_0x0 + 8);
      uStack_34 = *(undefined4 *)((longlong)&(this->LastWorldRay).Direction.field0_0x0 + 0xc);
      uStack_30 = *(undefined4 *)((longlong)&(this->LastWorldRay).Direction.field0_0x0 + 0x10);
      uStack_2c = *(undefined4 *)((longlong)&(this->LastWorldRay).Direction.field0_0x0 + 0x14);
      local_20 = 0;
      uStack_18 = 0;
      (**(code **)(*(longlong *)pUVar2 + 0x300))();
      __return_storage_ptr__->State = End;
      goto LAB_1496c3d0b;
    }
    local_28 = 0;
    local_38 = *(undefined4 *)((longlong)&(this->LastWorldRay).Direction.field0_0x0 + 8);
    uStack_34 = *(undefined4 *)((longlong)&(this->LastWorldRay).Direction.field0_0x0 + 0xc);
    uStack_30 = *(undefined4 *)((longlong)&(this->LastWorldRay).Direction.field0_0x0 + 0x10);
    uStack_2c = *(undefined4 *)((longlong)&(this->LastWorldRay).Direction.field0_0x0 + 0x14);
    local_20 = 0;
    uStack_18 = 0;
    (**(code **)(*(longlong *)pUVar2 + 0x2f8))(pUVar2,&local_58);
  }
  __return_storage_ptr__->State = Continue;
LAB_1496c3d0b:
  (__return_storage_ptr__->Data).WhichSide = Any;
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  (__return_storage_ptr__->Data).CustomData = (void *)0x0;
  return __return_storage_ptr__;
}

// WantsCapture @ 1496c5d00

FInputCaptureRequest * __thiscall
UScalableSphereGizmoInputBehavior::WantsCapture
          (UScalableSphereGizmoInputBehavior *this,FInputCaptureRequest *__return_storage_ptr__,
          FInputDeviceState *param_1)

{
  char cVar1;
  bool bVar2;
  double dVar3;
  TTransform<double> local_188;
  TVector<double> local_128;
  FHitResult local_108;
  
  cVar1 = (**(code **)(this->_padding_ + 800))(this,param_1);
  if (cVar1 != '\0') {
    local_188.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_188.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_188.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_188.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_188.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_188.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_188.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_188.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_188.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_188.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_188.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_188.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_188.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_188.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    bVar2 = UScalableSphereGizmo::HitTest
                      (this->Gizmo,&(param_1->Mouse).WorldRay,&local_108,&local_128,&local_188);
    if (bVar2) {
      dVar3 = 0.0;
      __return_storage_ptr__->Type = Begin;
      __return_storage_ptr__->Owner = (void *)0x0;
      __return_storage_ptr__->Source = (UInputBehavior *)this;
      goto LAB_1496c5ddd;
    }
  }
  __return_storage_ptr__->Type = Ignore;
  __return_storage_ptr__->Source = (UInputBehavior *)0x0;
  __return_storage_ptr__->Owner = (void *)0x0;
  dVar3 = 1.7976931348623157e+308;
LAB_1496c5ddd:
  __return_storage_ptr__->HitDepth = dVar3;
  __return_storage_ptr__->Side = Any;
  return __return_storage_ptr__;
}

