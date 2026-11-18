// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 16

// StaticClass @ 14966c720

UClass * __cdecl UGizmoViewContext::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoViewContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoViewContext",
               &Z_Registration_Info_UClass_UGizmoViewContext.InnerSingleton,
               StaticRegisterNativesUGizmoViewContext,0x2f0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGizmoViewContext>,
               InternalVTableHelperCtorCaller<UGizmoViewContext>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoViewContext.InnerSingleton;
}

// UGizmoViewContext @ 149686d10

UGizmoViewContext * __thiscall
UGizmoViewContext::UGizmoViewContext(UGizmoViewContext *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__UE__GizmoRenderingUtil__ISceneViewInterface__;
  FMatrices::FMatrices(&this->ViewMatrices);
  (this->UnscaledViewRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->UnscaledViewRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  this->DPIScale = 1.0;
  return this;
}

// UGizmoViewContext @ 149686d70

UGizmoViewContext * __thiscall
UGizmoViewContext::UGizmoViewContext(UGizmoViewContext *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__UE__GizmoRenderingUtil__ISceneViewInterface__;
  FMatrices::FMatrices(&this->ViewMatrices);
  (this->UnscaledViewRect).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->UnscaledViewRect).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  this->DPIScale = 1.0;
  return this;
}

// ~UGizmoViewContext @ 14968a390

void __thiscall UGizmoViewContext::~UGizmoViewContext(UGizmoViewContext *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__UE__GizmoRenderingUtil__ISceneViewInterface__;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDPIScale @ 1496a0b70

double __thiscall UGizmoViewContext::GetDPIScale(UGizmoViewContext *this)

{
  return (double)(this->UnscaledViewRect).field0_0x0._s_0.Max.field0_0x0;
}

// GetPrivateStaticClass @ 1496a6800

UClass * __cdecl UGizmoViewContext::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoViewContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoViewContext",
               &Z_Registration_Info_UClass_UGizmoViewContext.InnerSingleton,
               StaticRegisterNativesUGizmoViewContext,0x2f0,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGizmoViewContext>,
               InternalVTableHelperCtorCaller<UGizmoViewContext>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoViewContext.InnerSingleton;
}

// GetProjectionMatrix @ 1496a7a70

TMatrix<double> * __thiscall UGizmoViewContext::GetProjectionMatrix(UGizmoViewContext *this)

{
  return (TMatrix<double> *)&this->field_0x8;
}

// GetUnscaledViewRect @ 1496a9310

TIntRect<int> * __thiscall UGizmoViewContext::GetUnscaledViewRect(UGizmoViewContext *this)

{
  return (TIntRect<int> *)((this->ViewMatrices).InvViewProjectionMatrix.M[2] + 3);
}

// GetViewDirection @ 1496aaa20

TVector<double> * __thiscall
UGizmoViewContext::GetViewDirection(UGizmoViewContext *this,TVector<double> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->ViewMatrices).ProjectionMatrix.M[3][1];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (this->ViewMatrices).ViewMatrix.M[0][1];
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (this->ViewMatrices).ViewMatrix.M[1][1];
  return __return_storage_ptr__;
}

// GetViewLocation @ 1496aadd0

TVector<double> * __thiscall
UGizmoViewContext::GetViewLocation(UGizmoViewContext *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->ViewMatrices).InvViewProjectionMatrix.M[3][2];
  dVar1 = (this->ViewMatrices).InvViewProjectionMatrix.M[3][3];
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->ViewMatrices).InvViewProjectionMatrix.M[3][1]
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetViewMatrix @ 1496aae20

TMatrix<double> * __thiscall UGizmoViewContext::GetViewMatrix(UGizmoViewContext *this)

{
  return (TMatrix<double> *)((this->ViewMatrices).ProjectionMatrix.M[2] + 3);
}

// GetViewRight @ 1496aaff0

TVector<double> * __thiscall
UGizmoViewContext::GetViewRight(UGizmoViewContext *this,TVector<double> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->ViewMatrices).ProjectionMatrix.M[2][3];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (this->ViewMatrices).ProjectionMatrix.M[3][3];
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (this->ViewMatrices).ViewMatrix.M[0][3];
  return __return_storage_ptr__;
}

// GetViewUp @ 1496ab050

TVector<double> * __thiscall
UGizmoViewContext::GetViewUp(UGizmoViewContext *this,TVector<double> *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->ViewMatrices).ProjectionMatrix.M[3][0];
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (this->ViewMatrices).ViewMatrix.M[0][0];
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (this->ViewMatrices).ViewMatrix.M[1][0];
  return __return_storage_ptr__;
}

// IsPerspectiveProjection @ 1496ae380

bool __thiscall UGizmoViewContext::IsPerspectiveProjection(UGizmoViewContext *this)

{
  return (bool)*(undefined1 *)&(this->UnscaledViewRect).field0_0x0;
}

// StaticRegisterNativesUGizmoViewContext @ 1496c2c30

void __cdecl UGizmoViewContext::StaticRegisterNativesUGizmoViewContext(void)

{
  return;
}

// WorldToScreen @ 1496c5f90

TVector4<double> * __thiscall
UGizmoViewContext::WorldToScreen
          (UGizmoViewContext *this,TVector4<double> *__return_storage_ptr__,TVector<double> *param_1
          )

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  dVar13 = __real_3ff0000000000000;
  dVar5 = (param_1->field0_0x0)._s_0.X;
  dVar6 = (param_1->field0_0x0)._s_0.Y;
  dVar7 = (this->ViewMatrices).ViewProjectionMatrix.M[0][1];
  dVar8 = (this->ViewMatrices).ViewProjectionMatrix.M[0][2];
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar9 = (this->ViewMatrices).InvViewMatrix.M[3][1];
  dVar10 = (this->ViewMatrices).InvViewMatrix.M[3][2];
  dVar4 = dVar6 * (this->ViewMatrices).ViewProjectionMatrix.M[0][0] +
          (this->ViewMatrices).InvViewMatrix.M[3][0] * dVar5 +
          dVar1 * (this->ViewMatrices).ViewProjectionMatrix.M[1][0] +
          __real_3ff0000000000000 * (this->ViewMatrices).ViewProjectionMatrix.M[2][0];
  dVar11 = (this->ViewMatrices).ViewProjectionMatrix.M[1][1];
  dVar12 = (this->ViewMatrices).ViewProjectionMatrix.M[1][2];
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = dVar6 * (this->ViewMatrices).InvViewMatrix.M[3][3] +
                 (this->ViewMatrices).InvViewMatrix.M[2][3] * dVar5 +
                 dVar1 * (this->ViewMatrices).ViewProjectionMatrix.M[0][3] +
                 __real_3ff0000000000000 * (this->ViewMatrices).ViewProjectionMatrix.M[1][3];
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar3;
  dVar4 = dVar8 * dVar6 + dVar10 * dVar5 + dVar12 * dVar1 +
          (this->ViewMatrices).ViewProjectionMatrix.M[2][2] * dVar13;
  auVar2._8_4_ = SUB84(dVar4,0);
  auVar2._0_8_ = dVar7 * dVar6 + dVar9 * dVar5 + dVar11 * dVar1 +
                 (this->ViewMatrices).ViewProjectionMatrix.M[2][1] * dVar13;
  auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])((longlong)&__return_storage_ptr__->field0_0x0 + 0x10) = auVar2;
  return __return_storage_ptr__;
}

