// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 32

// StaticClass @ 14cea8460

UClass * __cdecl UGeometryScriptLibrary_RayFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_RayFunctions.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_RayFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_RayFunctions.InnerSingleton,
               StaticRegisterNativesUGeometryScriptLibrary_RayFunctions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGeometryScriptLibrary_RayFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_RayFunctions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_RayFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_RayFunctions @ 14ceae810

UGeometryScriptLibrary_RayFunctions * __thiscall
UGeometryScriptLibrary_RayFunctions::UGeometryScriptLibrary_RayFunctions
          (UGeometryScriptLibrary_RayFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_RayFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_RayFunctions @ 14ceae840

UGeometryScriptLibrary_RayFunctions * __thiscall
UGeometryScriptLibrary_RayFunctions::UGeometryScriptLibrary_RayFunctions
          (UGeometryScriptLibrary_RayFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_RayFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_RayFunctions @ 14ceaebb0

void __thiscall
UGeometryScriptLibrary_RayFunctions::~UGeometryScriptLibrary_RayFunctions
          (UGeometryScriptLibrary_RayFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_RayFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 14cebd130

UClass * __cdecl UGeometryScriptLibrary_RayFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_RayFunctions.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_RayFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_RayFunctions.InnerSingleton,
               StaticRegisterNativesUGeometryScriptLibrary_RayFunctions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGeometryScriptLibrary_RayFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_RayFunctions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_RayFunctions.InnerSingleton;
}

// GetRayBoxIntersection @ 14cebd6f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UGeometryScriptLibrary_RayFunctions::GetRayBoxIntersection
          (TRay<double> *param_1,TBox<double> *param_2,double *param_3)

{
  uchar uVar1;
  bool bVar2;
  TVector<double>_u_0 local_38;
  double dStack_20;
  double dStack_18;
  double local_10;
  
  uVar1 = param_2->IsValid;
  *param_3 = 3.4028234663852886e+38;
  if (uVar1 == '\0') {
    local_38._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
    local_38._s_0.Y = _UNK_150a9e648;
    dStack_18 = ___xmm_ffefffffffffffffffefffffffffffff;
    local_10 = _UNK_1508ffb58;
    local_38._s_0.Z = ___xmm_ffefffffffffffff7fefffffffffffff;
    dStack_20 = _UNK_150a9e6d8;
  }
  else {
    local_38._s_0.X = (param_2->Min).field0_0x0._s_0.X;
    local_38._s_0.Y = (param_2->Min).field0_0x0._s_0.Y;
    local_38._s_0.Z = (param_2->Min).field0_0x0._s_0.Z;
    dStack_20 = (param_2->Max).field0_0x0._s_0.X;
    dStack_18 = (param_2->Max).field0_0x0._s_0.Y;
    local_10 = (param_2->Max).field0_0x0._s_0.Z;
  }
  bVar2 = UE::Geometry::TIntrRay3AxisAlignedBox3<double>::FindIntersection
                    (&param_1->Origin,&param_1->Direction,(TAxisAlignedBox3<double> *)&local_38._s_0
                     ,param_3);
  return bVar2;
}

// GetRayClosestPoint @ 14cebd780

TVector<double> * __cdecl
UGeometryScriptLibrary_RayFunctions::GetRayClosestPoint
          (TVector<double> *__return_storage_ptr__,TRay<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = (param_1->Direction).field0_0x0._s_0.X;
  dVar2 = (param_1->Direction).field0_0x0._s_0.Y;
  dVar3 = (param_1->Direction).field0_0x0._s_0.Z;
  dVar6 = ((param_2->field0_0x0)._s_0.Y - (param_1->Origin).field0_0x0._s_0.Y) * dVar2 +
          ((param_2->field0_0x0)._s_0.X - (param_1->Origin).field0_0x0._s_0.X) * dVar1 +
          ((param_2->field0_0x0)._s_0.Z - (param_1->Origin).field0_0x0._s_0.Z) * dVar3;
  if (dVar6 < 0.0) {
    dVar2 = (param_1->Origin).field0_0x0._s_0.Y;
    dVar1 = (param_1->Origin).field0_0x0._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
    return __return_storage_ptr__;
  }
  dVar4 = (param_1->Origin).field0_0x0._s_0.Y;
  dVar5 = (param_1->Origin).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1 * dVar6 + (param_1->Origin).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 * dVar6 + dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 * dVar6 + dVar5;
  return __return_storage_ptr__;
}

// GetRayLineClosestPoint @ 14cebd810

double __cdecl
UGeometryScriptLibrary_RayFunctions::GetRayLineClosestPoint
          (TRay<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,double *param_4,
          TVector<double> *param_5,double *param_6,TVector<double> *param_7)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 uVar3;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  TVector<double>_u_0 local_b8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  undefined8 local_58;
  double local_50;
  double dStack_48;
  double local_40;
  double local_38;
  double local_30;
  double dStack_28;
  double local_20;
  double local_18;
  
  uVar3 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  local_b8._16_4_ = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0x10);
  local_b8._20_4_ = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0x14);
  local_b8._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_b8._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x10);
  local_58 = __real_bff0000000000000;
  uStack_c8 = (undefined4)uVar3;
  uStack_c4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_d0 = (undefined4)*(undefined8 *)&param_3->field0_0x0;
  uStack_cc = (undefined4)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20);
  uStack_90 = (undefined4)uVar1;
  uStack_8c = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_a0 = local_d0;
  uStack_9c = uStack_cc;
  local_88 = (param_1->Origin).field0_0x0._s_0.X;
  dStack_80 = (param_1->Origin).field0_0x0._s_0.Y;
  local_98 = uStack_c8;
  uStack_94 = uStack_c4;
  local_78 = (param_1->Origin).field0_0x0._s_0.Z;
  dStack_70 = (param_1->Direction).field0_0x0._s_0.X;
  local_68 = (param_1->Direction).field0_0x0._s_0.Y;
  dStack_60 = (param_1->Direction).field0_0x0._s_0.Z;
  dVar2 = UE::Geometry::TDistLine3Ray3<double>::ComputeResult
                    ((TDistLine3Ray3<double> *)&local_b8._s_0);
  *param_4 = local_18;
  (param_5->field0_0x0)._s_0.X = local_30;
  (param_5->field0_0x0)._s_0.Y = dStack_28;
  (param_5->field0_0x0)._s_0.Z = local_20;
  *param_6 = local_38;
  (param_7->field0_0x0)._s_0.X = local_50;
  (param_7->field0_0x0)._s_0.Y = dStack_48;
  (param_7->field0_0x0)._s_0.Z = local_40;
  return SQRT(dVar2);
}

// GetRayParameter @ 14cebd900

double __cdecl
UGeometryScriptLibrary_RayFunctions::GetRayParameter(TRay<double> *param_1,TVector<double> *param_2)

{
  return ((param_2->field0_0x0)._s_0.Y - (param_1->Origin).field0_0x0._s_0.Y) *
         (param_1->Direction).field0_0x0._s_0.Y +
         ((param_2->field0_0x0)._s_0.X - (param_1->Origin).field0_0x0._s_0.X) *
         (param_1->Direction).field0_0x0._s_0.X +
         ((param_2->field0_0x0)._s_0.Z - (param_1->Origin).field0_0x0._s_0.Z) *
         (param_1->Direction).field0_0x0._s_0.Z;
}

// GetRayPlaneIntersection @ 14cebd940

bool __cdecl
UGeometryScriptLibrary_RayFunctions::GetRayPlaneIntersection
          (TRay<double> *param_1,TPlane<double> *param_2,double *param_3)

{
  double dVar1;
  
  dVar1 = (double)param_2->_padding_ * (param_1->Direction).field0_0x0._s_0.Y +
          (double)param_2->_padding_ * (param_1->Direction).field0_0x0._s_0.X +
          (double)param_2->_padding_ * (param_1->Direction).field0_0x0._s_0.Z;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    *param_3 = (param_2->W -
               ((double)param_2->_padding_ * (param_1->Origin).field0_0x0._s_0.Y +
                (double)param_2->_padding_ * (param_1->Origin).field0_0x0._s_0.X +
               (double)param_2->_padding_ * (param_1->Origin).field0_0x0._s_0.Z)) / dVar1;
    return true;
  }
  *param_3 = 0.0;
  return false;
}

// GetRayPoint @ 14cebd9c0

TVector<double> * __cdecl
UGeometryScriptLibrary_RayFunctions::GetRayPoint
          (TVector<double> *__return_storage_ptr__,TRay<double> *param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (param_1->Direction).field0_0x0._s_0.Y;
  dVar2 = (param_1->Direction).field0_0x0._s_0.Z;
  dVar3 = (param_1->Origin).field0_0x0._s_0.Y;
  dVar4 = (param_1->Origin).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       param_2 * (param_1->Direction).field0_0x0._s_0.X + (param_1->Origin).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = param_2 * dVar1 + dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = param_2 * dVar2 + dVar4;
  return __return_storage_ptr__;
}

// GetRayPointDistance @ 14cebda00

double __cdecl
UGeometryScriptLibrary_RayFunctions::GetRayPointDistance
          (TRay<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar9;
  
  dVar9 = (param_2->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar7 = dVar9 - (param_1->Origin).field0_0x0._s_0.Y;
  dVar11 = dVar1 - (param_1->Origin).field0_0x0._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  dVar12 = dVar2 - (param_1->Origin).field0_0x0._s_0.Z;
  dVar3 = (param_1->Direction).field0_0x0._s_0.X;
  dVar4 = (param_1->Direction).field0_0x0._s_0.Y;
  dVar5 = (param_1->Direction).field0_0x0._s_0.Z;
  dVar8 = dVar4 * dVar7 + dVar3 * dVar11 + dVar5 * dVar12;
  if (0.0 <= dVar8) {
    dVar1 = dVar1 - (dVar3 * dVar8 + (param_1->Origin).field0_0x0._s_0.X);
    dVar9 = dVar9 - (dVar4 * dVar8 + (param_1->Origin).field0_0x0._s_0.Y);
    dVar2 = dVar2 - (dVar5 * dVar8 + (param_1->Origin).field0_0x0._s_0.Z);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = dVar9 * dVar9 + dVar1 * dVar1 + dVar2 * dVar2;
    auVar10 = sqrtpd(ZEXT816(0),auVar10);
    dVar9 = auVar10._0_8_;
  }
  else {
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar7 * dVar7 + dVar11 * dVar11 + dVar12 * dVar12;
    auVar10 = sqrtpd(ZEXT816(0),auVar6);
    dVar9 = auVar10._0_8_;
  }
  return dVar9;
}

// GetRaySegmentClosestPoint @ 14cebdb20

double __cdecl
UGeometryScriptLibrary_RayFunctions::GetRaySegmentClosestPoint
          (TRay<double> *param_1,TVector<double> *param_2,TVector<double> *param_3,double *param_4,
          TVector<double> *param_5,TVector<double> *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TVector<double>_u_0 TStack_120;
  undefined8 local_108;
  TVector<double>_u_0 local_f8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined8 local_90;
  double local_88;
  double dStack_80;
  double local_78;
  double local_70;
  double local_68;
  double dStack_60;
  double local_58;
  
  dVar5 = __real_3fe0000000000000;
  dVar1 = (param_3->field0_0x0)._s_0.X;
  dVar2 = (param_3->field0_0x0)._s_0.Y;
  TStack_120._s_0.X = dVar1 - (param_2->field0_0x0)._s_0.X;
  dVar3 = ((param_2->field0_0x0)._s_0.X + dVar1) * __real_3fe0000000000000;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  local_108 = 0;
  TStack_120._s_0.Z = dVar1 - (param_2->field0_0x0)._s_0.Z;
  TStack_120._s_0.Y = dVar2 - (param_2->field0_0x0)._s_0.Y;
  dVar4 = ((param_2->field0_0x0)._s_0.Z + dVar1) * __real_3fe0000000000000;
  dVar1 = ((param_2->field0_0x0)._s_0.Y + dVar2) * __real_3fe0000000000000;
  local_98 = UE::Geometry::Normalize<double>((TVector<double> *)&TStack_120._s_0,0.0);
  local_f8._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
  local_f8._s_0.Y = (param_1->Origin).field0_0x0._s_0.Y;
  local_d8 = (param_1->Direction).field0_0x0._s_0.Y;
  dStack_d0 = (param_1->Direction).field0_0x0._s_0.Z;
  local_90 = __real_bff0000000000000;
  local_f8._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
  dStack_e0 = (param_1->Direction).field0_0x0._s_0.X;
  local_98 = local_98 * dVar5;
  dStack_b0 = TStack_120._s_0.X;
  local_a8 = TStack_120._s_0.Y;
  dStack_a0 = TStack_120._s_0.Z;
  local_c8 = dVar3;
  dStack_c0 = dVar1;
  local_b8 = dVar4;
  dVar1 = UE::Geometry::TDistRay3Segment3<double>::ComputeResult
                    ((TDistRay3Segment3<double> *)&local_f8._s_0);
  *param_4 = local_70;
  (param_5->field0_0x0)._s_0.X = local_88;
  (param_5->field0_0x0)._s_0.Y = dStack_80;
  (param_5->field0_0x0)._s_0.Z = local_78;
  (param_6->field0_0x0)._s_0.X = local_68;
  (param_6->field0_0x0)._s_0.Y = dStack_60;
  (param_6->field0_0x0)._s_0.Z = local_58;
  return SQRT(dVar1);
}

// GetRaySphereIntersection @ 14cebdca0

bool __cdecl
UGeometryScriptLibrary_RayFunctions::GetRaySphereIntersection
          (TRay<double> *param_1,TVector<double> *param_2,double param_3,double *param_4,
          double *param_5)

{
  int iVar1;
  int iVar2;
  double dVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  double dVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar10 = (param_1->Origin).field0_0x0._s_0.X - (param_2->field0_0x0)._s_0.X;
  dVar11 = (param_1->Origin).field0_0x0._s_0.Y - (param_2->field0_0x0)._s_0.Y;
  dVar8 = (param_1->Origin).field0_0x0._s_0.Z - (param_2->field0_0x0)._s_0.Z;
  dVar6 = (param_1->Direction).field0_0x0._s_0.X;
  dVar9 = (param_1->Direction).field0_0x0._s_0.Y;
  *param_5 = 3.4028234663852886e+38;
  dVar3 = (param_1->Direction).field0_0x0._s_0.Z;
  *param_4 = 3.4028234663852886e+38;
  dVar6 = dVar11 * dVar9 + dVar10 * dVar6 + dVar8 * dVar3;
  uVar7 = (uint)((ulonglong)dVar6 >> 0x20);
  auVar4._0_8_ = dVar6 * dVar6 -
                 ((dVar11 * dVar11 + dVar10 * dVar10 + dVar8 * dVar8) - param_3 * param_3);
  auVar4._8_8_ = 0;
  if (auVar4._0_8_ <= 0.0) {
    if (auVar4._0_8_ < 0.0) {
      return false;
    }
    iVar2 = 1;
    uVar5 = SUB84(dVar6,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar7 = uVar7 ^ __xmm_80000000000000008000000000000000._4_4_;
    dVar6 = (double)CONCAT44(uVar7,uVar5);
    dVar9 = (double)CONCAT44(uVar7,uVar5);
  }
  else {
    auVar4 = sqrtpd(auVar4,auVar4);
    iVar2 = 2;
    dVar9 = (double)CONCAT44(uVar7 ^ __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(dVar6,0) ^ (uint)__xmm_80000000000000008000000000000000) -
            auVar4._0_8_;
    dVar6 = auVar4._0_8_ - dVar6;
  }
  if (dVar6 < 0.0) {
    return false;
  }
  dVar3 = dVar9;
  if (dVar9 < 0.0) {
    dVar3 = dVar6;
  }
  *param_4 = dVar3;
  iVar1 = iVar2 + -1;
  if (dVar9 >= 0.0) {
    iVar1 = iVar2;
  }
  if (iVar1 < 2) {
    dVar6 = dVar3;
  }
  *param_5 = dVar6;
  return true;
}

// GetRayStartEnd @ 14cebddb0

void __cdecl
UGeometryScriptLibrary_RayFunctions::GetRayStartEnd
          (TRay<double> *param_1,double param_2,double param_3,TVector<double> *param_4,
          TVector<double> *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = (param_1->Direction).field0_0x0._s_0.X;
  dVar2 = (param_1->Direction).field0_0x0._s_0.Y;
  dVar3 = (param_1->Direction).field0_0x0._s_0.Z;
  dVar4 = (param_1->Origin).field0_0x0._s_0.X;
  dVar5 = (param_1->Origin).field0_0x0._s_0.Y;
  dVar6 = (param_1->Origin).field0_0x0._s_0.Z;
  (param_4->field0_0x0)._s_0.X = dVar1 * param_2 + dVar4;
  (param_4->field0_0x0)._s_0.Y = dVar2 * param_2 + dVar5;
  (param_4->field0_0x0)._s_0.Z = dVar3 * param_2 + dVar6;
  if (param_3 == 0.0) {
    param_3 = __real_47efffffe0000000;
  }
  (param_5->field0_0x0)._s_0.X = dVar1 * param_3 + dVar4;
  (param_5->field0_0x0)._s_0.Y = dVar2 * param_3 + dVar5;
  (param_5->field0_0x0)._s_0.Z = dVar3 * param_3 + dVar6;
  return;
}

// GetTransformedRay @ 14cebeaa0

TRay<double> * __cdecl
UGeometryScriptLibrary_RayFunctions::GetTransformedRay
          (TRay<double> *__return_storage_ptr__,TRay<double> *param_1,TTransform<double> *param_2,
          bool param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TVector<double>_u_0 *pTVar7;
  TVector<double> *pTVar8;
  undefined1 auVar9 [16];
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 TStack_d0;
  TQuaternion<double>_u_0 local_b8;
  double local_98;
  double dStack_90;
  double local_88;
  double local_80;
  double dStack_78;
  double local_70;
  
  local_b8._s_0.X = (param_2->Rotation).XY.m128d_f64[0];
  local_b8._s_0.Y = (param_2->Rotation).XY.m128d_f64[1];
  local_b8._s_0.Z = (param_2->Rotation).ZW.m128d_f64[0];
  local_b8._s_0.W = (param_2->Rotation).ZW.m128d_f64[1];
  local_e8._s_0.Z = (param_2->Translation).ZW.m128d_f64[0];
  dVar5 = (param_2->Translation).XY.m128d_f64[0];
  dVar6 = (param_2->Translation).XY.m128d_f64[1];
  dVar1 = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar2 = (param_2->Scale3D).XY.m128d_f64[0];
  dVar4 = (param_2->Scale3D).XY.m128d_f64[1];
  local_100._s_0.Z = dVar1;
  local_98 = dVar5;
  dStack_90 = dVar6;
  local_88 = local_e8._s_0.Z;
  local_80 = dVar2;
  dStack_78 = dVar4;
  local_70 = dVar1;
  if (param_3) {
    pTVar7 = (TVector<double>_u_0 *)
             UE::Geometry::TTransformSRT3<double>::InverseTransformRay
                       ((TTransformSRT3<double> *)&local_b8._s_0,(TRay<double> *)&local_e8._s_0,
                        param_1);
  }
  else {
    local_118._s_0.X = dVar2 * (param_1->Origin).field0_0x0._s_0.X;
    local_118._s_0.Z = dVar1 * (param_1->Origin).field0_0x0._s_0.Z;
    local_118._s_0.Y = dVar4 * (param_1->Origin).field0_0x0._s_0.Y;
    pTVar8 = UE::Geometry::operator*<double>
                       ((TVector<double> *)&local_100._s_0,(TQuaternion<double> *)&local_b8._s_0,
                        (TVector<double> *)&local_118._s_0);
    local_118._s_0.X = dVar2 * (param_1->Direction).field0_0x0._s_0.X;
    local_118._s_0.Y = dVar4 * (param_1->Direction).field0_0x0._s_0.Y;
    local_118._s_0.Z = dVar1 * (param_1->Direction).field0_0x0._s_0.Z;
    dVar1 = (pTVar8->field0_0x0)._s_0.X;
    dVar4 = local_e8._s_0.Z + (pTVar8->field0_0x0)._s_0.Z;
    dVar2 = (pTVar8->field0_0x0)._s_0.Y;
    UE::Geometry::operator*<double>
              ((TVector<double> *)&local_100._s_0,(TQuaternion<double> *)&local_b8._s_0,
               (TVector<double> *)&local_118._s_0);
    auVar9._0_8_ = local_100._s_0.X * local_100._s_0.X + local_100._s_0.Y * local_100._s_0.Y +
                   local_100._s_0.Z * local_100._s_0.Z;
    auVar9._8_8_ = 0;
    TStack_d0._s_0.Z = 0.0;
    auVar9 = sqrtpd(auVar9,auVar9);
    if (auVar9._0_8_ <= 0.0) {
      TStack_d0._s_0.Y = 0.0;
      TStack_d0._s_0.X = 0.0;
    }
    else {
      dVar3 = __real_3ff0000000000000 / auVar9._0_8_;
      TStack_d0._s_0.Z = dVar3 * local_100._s_0.Z;
      TStack_d0._s_0.Y = dVar3 * local_100._s_0.Y;
      TStack_d0._s_0.X = dVar3 * local_100._s_0.X;
    }
    local_e8._s_0.X = dVar5 + dVar1;
    local_e8._s_0.Y = dVar6 + dVar2;
    local_e8._s_0.Z = dVar4;
    UE::Math::TVector<double>::Normalize((TVector<double> *)&TStack_d0._s_0,__real_3e45798ee0000000)
    ;
    pTVar7 = &local_e8;
  }
  dVar1 = (pTVar7->_s_0).Y;
  dVar5 = (pTVar7->_s_0).Z;
  dVar6 = (((TVector<double> *)(pTVar7->XYZ + 3))->field0_0x0)._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
       (((TVector<double> *)&(pTVar7->_s_0).X)->field0_0x0)._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar1;
  dVar1 = pTVar7->XYZ[4];
  dVar2 = pTVar7->XYZ[5];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar5;
  (__return_storage_ptr__->Direction).field0_0x0._s_0.X = dVar6;
  (__return_storage_ptr__->Direction).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Direction).field0_0x0._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// MakeRayFromPointDirection @ 14cebfd00

TRay<double> * __cdecl
UGeometryScriptLibrary_RayFunctions::MakeRayFromPointDirection
          (TRay<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2,
          bool param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar1;
  dVar1 = (param_2->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->Direction).field0_0x0._s_0.X = dVar2;
  (__return_storage_ptr__->Direction).field0_0x0._s_0.Y = dVar3;
  (__return_storage_ptr__->Direction).field0_0x0._s_0.Z = dVar1;
  if (!param_3) {
    UE::Math::TVector<double>::Normalize(&__return_storage_ptr__->Direction,__real_3e45798ee0000000)
    ;
  }
  return __return_storage_ptr__;
}

// MakeRayFromPoints @ 14cebfd50

TRay<double> * __cdecl
UGeometryScriptLibrary_RayFunctions::MakeRayFromPoints
          (TRay<double> *__return_storage_ptr__,TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 unaff_XMM7 [16];
  undefined1 auVar6 [16];
  
  dVar4 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  dVar3 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar3 * dVar3 + dVar4 * dVar4 + dVar2 * dVar2;
  auVar6 = sqrtpd(unaff_XMM7,auVar6);
  dVar5 = auVar6._0_8_;
  if (0.0 < dVar5) {
    dVar1 = __real_3ff0000000000000 / dVar5;
    dVar3 = dVar1 * dVar3;
    dVar4 = dVar1 * dVar4;
    dVar2 = dVar1 * dVar2;
    if (__real_3e80000000000000 <= dVar5) goto LAB_14cebfdda;
  }
  dVar3 = 0.0;
  dVar4 = 0.0;
  dVar2 = __real_3ff0000000000000;
LAB_14cebfdda:
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar5 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar5;
  (__return_storage_ptr__->Direction).field0_0x0._s_0.X = dVar4;
  (__return_storage_ptr__->Direction).field0_0x0._s_0.Y = dVar3;
  (__return_storage_ptr__->Direction).field0_0x0._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUGeometryScriptLibrary_RayFunctions @ 14cec2800

void __cdecl
UGeometryScriptLibrary_RayFunctions::StaticRegisterNativesUGeometryScriptLibrary_RayFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xd;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_RayFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetRayBoxIntersection @ 14cecfda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_RayFunctions::execGetRayBoxIntersection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  bool bVar7;
  undefined1 auStack_158 [32];
  double local_138;
  double local_130;
  double dStack_128;
  double local_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  TVector<double>_u_0 local_100;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 TStack_b0;
  double local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  double local_58;
  double dStack_50;
  double local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  char local_28;
  undefined7 uStack_27;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_130 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_128 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_120 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dStack_108 = __real_3ff0000000000000;
  dStack_118 = 0.0;
  dStack_110 = 0.0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_130,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_130);
  }
  local_28 = '\0';
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_138 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  dVar5 = dStack_108;
  dVar4 = dStack_110;
  dVar3 = dStack_118;
  dVar2 = local_120;
  local_68 = CONCAT71(uStack_27,local_28);
  pdVar6 = &local_138;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar6 = (double *)param_2->MostRecentPropertyAddress;
  }
  bVar7 = local_28 == '\0';
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_c8._s_0.X = local_130;
  local_c8._s_0.Y = dStack_128;
  *pdVar6 = 3.4028234663852886e+38;
  local_88 = local_48;
  uStack_80 = uStack_40;
  local_78 = local_38;
  uStack_70 = uStack_30;
  local_c8._s_0.Z = dVar2;
  TStack_b0._s_0.X = dVar3;
  TStack_b0._s_0.Y = dVar4;
  TStack_b0._s_0.Z = dVar5;
  if (bVar7) {
    local_100._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
    local_100._s_0.Y = _UNK_150a9e648;
    uStack_e0 = ___xmm_ffefffffffffffffffefffffffffffff;
    local_d8 = _UNK_1508ffb58;
    local_100._s_0.Z = ___xmm_ffefffffffffffff7fefffffffffffff;
    uStack_e8 = _UNK_150a9e6d8;
  }
  else {
    uStack_e8 = uStack_40;
    uStack_e0 = local_38;
    local_100._s_0.X = local_58;
    local_100._s_0.Y = dStack_50;
    local_100._s_0.Z = local_48;
    local_d8 = uStack_30;
  }
  bVar7 = UE::Geometry::TIntrRay3AxisAlignedBox3<double>::FindIntersection
                    ((TVector<double> *)&local_c8._s_0,(TVector<double> *)&TStack_b0._s_0,
                     (TAxisAlignedBox3<double> *)&local_100._s_0,pdVar6);
  *(bool *)param_3 = bVar7;
  return;
}

// execGetRayClosestPoint @ 14cecffb0

void __cdecl
UGeometryScriptLibrary_RayFunctions::execGetRayClosestPoint
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double dStack_68;
  double local_60;
  double local_58;
  double dStack_50;
  double local_48;
  
  local_70 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_48 = __real_3ff0000000000000;
  local_58 = 0.0;
  dStack_50 = 0.0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar2 = (local_80 - dStack_68) * dStack_50 + (local_88 - local_70) * local_58 +
          (local_78 - local_60) * local_48;
  if (0.0 <= dVar2) {
    local_60 = local_60 + local_48 * dVar2;
    dStack_68 = dStack_68 + dStack_50 * dVar2;
    local_70 = local_70 + local_58 * dVar2;
  }
  *(double *)param_3 = local_70;
  *(double *)((longlong)param_3 + 8) = dStack_68;
  *(double *)((longlong)param_3 + 0x10) = local_60;
  return;
}

// execGetRayLineClosestPoint @ 14ced0140

/* WARNING: Type propagation algorithm not settling */

void __cdecl
UGeometryScriptLibrary_RayFunctions::execGetRayLineClosestPoint
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double local_res10 [3];
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  double local_158 [3];
  double local_140 [6];
  undefined8 local_110;
  undefined8 uStack_108;
  TVector<double>_u_0 local_f8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double local_90;
  double dStack_88;
  double local_80;
  double local_78;
  double local_70;
  double dStack_68;
  double local_60;
  double local_58;
  
  local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_1b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_1a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uStack_190 = __real_3ff0000000000000;
  uStack_1a0 = 0;
  uStack_198 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_170,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_170);
  }
  local_res10[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pdVar5 = (double *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pdVar6 = local_res10;
  if (pdVar5 != (double *)0x0) {
    pdVar6 = pdVar5;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_158,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_158);
  }
  pdVar5 = (double *)param_2->MostRecentPropertyAddress;
  local_res10[1] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pdVar8 = local_158;
  if (pdVar5 != (double *)0x0) {
    pdVar8 = pdVar5;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10 + 1,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10 + 1);
  }
  pdVar5 = (double *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pdVar7 = local_res10 + 1;
  if (pdVar5 != (double *)0x0) {
    pdVar7 = pdVar5;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_140,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_140);
  }
  pdVar5 = local_140;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar5 = (double *)param_2->MostRecentPropertyAddress;
  }
  local_110 = local_170;
  uVar3 = local_110;
  uStack_108 = uStack_168;
  uVar4 = uStack_108;
  local_110._0_4_ = (undefined4)local_170;
  local_110._4_4_ = (undefined4)((ulonglong)local_170 >> 0x20);
  local_98 = __real_bff0000000000000;
  uStack_108._0_4_ = (undefined4)uStack_168;
  uStack_108._4_4_ = (undefined4)((ulonglong)uStack_168 >> 0x20);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_f8._s_0.X = local_188;
  local_f8._s_0.Y = dStack_180;
  local_f8._16_4_ = local_178;
  local_f8._20_4_ = uStack_174;
  uStack_e0 = (undefined4)local_110;
  uStack_dc = local_110._4_4_;
  uStack_d0 = (undefined4)local_160;
  uStack_cc = (undefined4)((ulonglong)local_160 >> 0x20);
  local_c8 = local_1b8;
  dStack_c0 = dStack_1b0;
  local_d8 = (undefined4)uStack_108;
  uStack_d4 = uStack_108._4_4_;
  local_a8 = uStack_198;
  uStack_a0 = uStack_190;
  local_b8 = local_1a8;
  uStack_b0 = uStack_1a0;
  local_110 = uVar3;
  uStack_108 = uVar4;
  dVar2 = UE::Geometry::TDistLine3Ray3<double>::ComputeResult
                    ((TDistLine3Ray3<double> *)&local_f8._s_0);
  *pdVar6 = local_58;
  *pdVar8 = local_70;
  pdVar8[1] = dStack_68;
  pdVar8[2] = local_60;
  *pdVar7 = local_78;
  *pdVar5 = local_90;
  pdVar5[1] = dStack_88;
  pdVar5[2] = local_80;
  *(double *)param_3 = SQRT(dVar2);
  return;
}

// execGetRayParameter @ 14ced0490

void __cdecl
UGeometryScriptLibrary_RayFunctions::execGetRayParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double dStack_38;
  double local_30;
  double local_28;
  double dStack_20;
  double local_18;
  
  local_40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_18 = __real_3ff0000000000000;
  local_28 = 0.0;
  dStack_20 = 0.0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(double *)param_3 =
       (local_50 - dStack_38) * dStack_20 + (local_58 - local_40) * local_28 +
       (local_48 - local_30) * local_18;
  return;
}

// execGetRayPlaneIntersection @ 14ced05b0

void __cdecl
UGeometryScriptLibrary_RayFunctions::execGetRayPlaneIntersection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double *pdVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  double local_res10;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double dStack_40;
  double local_38;
  double local_30;
  double dStack_28;
  double local_20;
  
  local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_20 = __real_3ff0000000000000;
  local_30 = 0.0;
  dStack_28 = 0.0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pdVar2 = &local_res10;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar2 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar5 = dStack_28 * local_60 + local_30 * local_68 + local_20 * local_58;
  uVar3 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar4 = (uint)((ulonglong)dVar5 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar4,uVar3) < __real_3e45798ee2308c3a ||
      (double)CONCAT44(uVar4,uVar3) == __real_3e45798ee2308c3a) {
    *pdVar2 = 0.0;
    *(undefined1 *)param_3 = 0;
  }
  else {
    *pdVar2 = (local_50 - (dStack_40 * local_60 + local_48 * local_68 + local_38 * local_58)) /
              dVar5;
    *(undefined1 *)param_3 = 1;
  }
  return;
}

// execGetRayPoint @ 14ced07a0

void __cdecl
UGeometryScriptLibrary_RayFunctions::execGetRayPoint(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double local_res10 [3];
  double local_38;
  double dStack_30;
  double local_28;
  double local_20;
  double dStack_18;
  double local_10;
  
  local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_10 = __real_3ff0000000000000;
  local_20 = 0.0;
  dStack_18 = 0.0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(double *)param_3 = local_20 * local_res10[0] + local_38;
  *(double *)((longlong)param_3 + 8) = dStack_18 * local_res10[0] + dStack_30;
  *(double *)((longlong)param_3 + 0x10) = local_10 * local_res10[0] + local_28;
  return;
}

// execGetRayPointDistance @ 14ced08d0

void __cdecl
UGeometryScriptLibrary_RayFunctions::execGetRayPointDistance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined8 uVar5;
  
  local_a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_88 = 0.0;
  dStack_80 = 0.0;
  local_78 = __real_3ff0000000000000;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  dVar3 = local_b8 - local_a0;
  dVar7 = local_b0 - dStack_98;
  dVar8 = local_a8 - local_90;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar4 = dVar7 * dStack_80 + dVar3 * local_88 + dVar8 * local_78;
  if (0.0 <= dVar4) {
    local_b8 = local_b8 - (local_88 * dVar4 + local_a0);
    local_b0 = local_b0 - (dStack_80 * dVar4 + dStack_98);
    local_a8 = local_a8 - (local_78 * dVar4 + local_90);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = local_b0 * local_b0 + local_b8 * local_b8 + local_a8 * local_a8;
    auVar6 = sqrtpd(ZEXT816(0),auVar6);
    uVar5 = auVar6._0_8_;
  }
  else {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = dVar3 * dVar3 + dVar7 * dVar7 + dVar8 * dVar8;
    auVar6 = sqrtpd(ZEXT816(0),auVar2);
    uVar5 = auVar6._0_8_;
  }
  *(undefined8 *)param_3 = uVar5;
  return;
}

// execGetRaySegmentClosestPoint @ 14ced0ad0

void __cdecl
UGeometryScriptLibrary_RayFunctions::execGetRaySegmentClosestPoint
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double local_res10;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  TVector<double>_u_0 TStack_1a8;
  undefined8 local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double dStack_168;
  double local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  double local_140 [3];
  double local_128 [4];
  TVector<double>_u_0 local_108;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined8 local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double local_80;
  double local_78;
  double dStack_70;
  double local_68;
  
  local_170 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_168 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_160 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uStack_148 = __real_3ff0000000000000;
  uStack_158 = 0;
  uStack_150 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_170,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_170);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  local_res10 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pdVar3 = (double *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pdVar5 = &local_res10;
  if (pdVar3 != (double *)0x0) {
    pdVar5 = pdVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_140,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_140);
  }
  pdVar3 = (double *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pdVar4 = local_140;
  if (pdVar3 != (double *)0x0) {
    pdVar4 = pdVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_128);
  }
  dVar2 = __real_3fe0000000000000;
  TStack_1a8._s_0.Z = local_178 - local_1c8;
  local_190 = 0;
  TStack_1a8._s_0.X = local_188 - local_1d8;
  pdVar3 = local_128;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar3 = (double *)param_2->MostRecentPropertyAddress;
  }
  local_1b0 = (local_178 + local_1c8) * __real_3fe0000000000000;
  local_1c0 = (local_188 + local_1d8) * __real_3fe0000000000000;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TStack_1a8._s_0.Y = local_180 - local_1d0;
  dStack_1b8 = (local_180 + local_1d0) * dVar2;
  local_a8 = UE::Geometry::Normalize<double>((TVector<double> *)&TStack_1a8._s_0,0.0);
  local_a0 = __real_bff0000000000000;
  local_108._s_0.X = local_170;
  local_108._s_0.Y = dStack_168;
  local_108._s_0.Z = local_160;
  uStack_f0 = uStack_158;
  local_a8 = local_a8 * dVar2;
  local_d8 = local_1c0;
  dStack_d0 = dStack_1b8;
  local_e8 = uStack_150;
  uStack_e0 = uStack_148;
  local_b8 = TStack_1a8._s_0.Y;
  dStack_b0 = TStack_1a8._s_0.Z;
  local_c8 = local_1b0;
  dStack_c0 = TStack_1a8._s_0.X;
  dVar2 = UE::Geometry::TDistRay3Segment3<double>::ComputeResult
                    ((TDistRay3Segment3<double> *)&local_108._s_0);
  *pdVar5 = local_80;
  *pdVar4 = local_98;
  pdVar4[1] = dStack_90;
  pdVar4[2] = local_88;
  *pdVar3 = local_78;
  pdVar3[1] = dStack_70;
  pdVar3[2] = local_68;
  *(double *)param_3 = SQRT(dVar2);
  return;
}

// execGetRaySphereIntersection @ 14ced0e40

void __cdecl
UGeometryScriptLibrary_RayFunctions::execGetRaySphereIntersection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  double *pdVar8;
  double *pdVar9;
  uint uVar10;
  double local_res10;
  double local_res18;
  double local_res20;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  
  local_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dStack_80 = __real_3ff0000000000000;
  dStack_90 = 0.0;
  dStack_88 = 0.0;
  FStructProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_res20 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pdVar8 = (double *)param_2->MostRecentPropertyAddress;
  local_res18 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pdVar9 = &local_res10;
  if (pdVar8 != (double *)0x0) {
    pdVar9 = pdVar8;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  pdVar8 = &local_res18;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar8 = (double *)param_2->MostRecentPropertyAddress;
  }
  local_a8 = local_a8 - local_c8;
  local_98 = local_98 - local_b8;
  dStack_a0 = dStack_a0 - dStack_c0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *pdVar8 = 3.4028234663852886e+38;
  *pdVar9 = 3.4028234663852886e+38;
  dVar5 = dStack_a0 * dStack_88 + local_a8 * dStack_90 + local_98 * dStack_80;
  uVar10 = (uint)((ulonglong)dVar5 >> 0x20);
  dVar3 = dVar5 * dVar5 -
          ((dStack_a0 * dStack_a0 + local_a8 * local_a8 + local_98 * local_98) -
          local_res20 * local_res20);
  if (dVar3 <= 0.0) {
    if (dVar3 < 0.0) goto LAB_14ced10c0;
    iVar7 = 1;
    dVar4 = (double)CONCAT44(uVar10 ^ __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(dVar5,0) ^ (uint)__xmm_80000000000000008000000000000000);
    dVar3 = dVar4;
  }
  else {
    iVar7 = 2;
    dVar4 = (double)CONCAT44(uVar10 ^ __xmm_80000000000000008000000000000000._4_4_,
                             SUB84(dVar5,0) ^ (uint)__xmm_80000000000000008000000000000000) -
            SQRT(dVar3);
    dVar3 = SQRT(dVar3) - dVar5;
  }
  if (0.0 <= dVar3) {
    dVar5 = dVar4;
    if (dVar4 < 0.0) {
      dVar5 = dVar3;
    }
    *pdVar9 = dVar5;
    iVar6 = iVar7 + -1;
    if (dVar4 >= 0.0) {
      iVar6 = iVar7;
    }
    if (iVar6 < 2) {
      dVar3 = dVar5;
    }
    *pdVar8 = dVar3;
    *(undefined1 *)param_3 = 1;
    return;
  }
LAB_14ced10c0:
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetRayStartEnd @ 14ced1120

void __cdecl
UGeometryScriptLibrary_RayFunctions::execGetRayStartEnd
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double *pdVar2;
  double *pdVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double local_res10;
  double local_res20;
  double local_98 [3];
  double local_80 [3];
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  
  local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dStack_40 = __real_3ff0000000000000;
  dStack_50 = 0.0;
  dStack_48 = 0.0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res20 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  pdVar2 = (double *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pdVar3 = local_98;
  if (pdVar2 != (double *)0x0) {
    pdVar3 = pdVar2;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_80);
  }
  pdVar2 = local_80;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar2 = (double *)param_2->MostRecentPropertyAddress;
  }
  uVar4 = SUB84(local_res10,0);
  uVar5 = (undefined4)((ulonglong)local_res10 >> 0x20);
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *pdVar3 = dStack_50 * local_res20 + local_68;
  pdVar3[1] = dStack_48 * local_res20 + dStack_60;
  pdVar3[2] = dStack_40 * local_res20 + local_58;
  if (local_res10 == 0.0) {
    uVar4 = (undefined4)__real_47efffffe0000000;
    uVar5 = (undefined4)((ulonglong)__real_47efffffe0000000 >> 0x20);
  }
  *pdVar2 = dStack_50 * (double)CONCAT44(uVar5,uVar4) + local_68;
  pdVar2[1] = dStack_48 * (double)CONCAT44(uVar5,uVar4) + dStack_60;
  pdVar2[2] = dStack_40 * (double)CONCAT44(uVar5,uVar4) + local_58;
  return;
}

// execGetTransformedRay @ 14ced20c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_RayFunctions::execGetTransformedRay
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  double dVar2;
  FProperty *pFVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  TVector<double>_u_0 *pTVar11;
  TVector<double> *pTVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_248 [32];
  int local_228 [2];
  TVector<double>_u_0 local_220;
  TVector<double>_u_0 local_208;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 TStack_1d0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  TQuaternion<double>_u_0 local_188;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double dStack_148;
  double local_140;
  TRay<double> local_138;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  double local_e8;
  double dStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  undefined1 local_b8 [16];
  ulonglong local_a8;
  
  dVar4 = __real_3ff0000000000000;
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_248;
  local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_1b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_1a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dStack_190 = __real_3ff0000000000000;
  dStack_1a0 = 0.0;
  dStack_198 = 0.0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b8);
  }
  local_108._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_108._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_108._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_e8 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  dStack_e0 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_f8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_f8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_c8 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  dStack_c0 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
  }
  local_228[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_228,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_228);
  }
  dVar10 = dStack_c0;
  dVar9 = local_c8;
  dVar8 = dStack_e0;
  dVar7 = local_e8;
  dVar1 = dStack_190;
  dVar6 = dStack_198;
  dVar2 = dStack_1a0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_188._s_0.X = (double)local_108._0_8_;
  local_188._s_0.Y = (double)local_108._8_8_;
  local_138.Origin.field0_0x0._s_0.Z = (double)local_d8._0_8_;
  local_158 = (double)local_d8._0_8_;
  local_188._s_0.Z = (double)local_f8._0_8_;
  local_208._s_0.Z = (double)local_b8._0_8_;
  local_140 = (double)local_b8._0_8_;
  local_188._s_0.W = (double)local_f8._8_8_;
  local_1e8._s_0.X = local_1b8;
  local_1e8._s_0.Y = dStack_1b0;
  local_1e8._s_0.Z = local_1a8;
  TStack_1d0._s_0.X = dStack_1a0;
  TStack_1d0._s_0.Y = dStack_198;
  TStack_1d0._s_0.Z = dStack_190;
  local_168 = local_e8;
  dStack_160 = dStack_e0;
  local_150 = local_c8;
  dStack_148 = dStack_c0;
  if (local_228[0] == 0) {
    local_220._s_0.X = local_c8 * local_1b8;
    local_220._s_0.Y = dStack_c0 * dStack_1b0;
    local_220._s_0.Z = (double)local_b8._0_8_ * local_1a8;
    pTVar12 = UE::Geometry::operator*<double>
                        ((TVector<double> *)&local_1e8._s_0,(TQuaternion<double> *)&local_188._s_0,
                         (TVector<double> *)&local_220._s_0);
    local_220._s_0.Z = dVar1 * local_208._s_0.Z;
    dVar1 = (pTVar12->field0_0x0)._s_0.X;
    dVar5 = local_138.Origin.field0_0x0._s_0.Z + (pTVar12->field0_0x0)._s_0.Z;
    local_220._s_0.X = dVar2 * dVar9;
    local_220._s_0.Y = dVar6 * dVar10;
    dVar2 = (pTVar12->field0_0x0)._s_0.Y;
    UE::Geometry::operator*<double>
              ((TVector<double> *)&local_208._s_0,(TQuaternion<double> *)&local_188._s_0,
               (TVector<double> *)&local_220._s_0);
    auVar13._0_8_ = local_208._s_0.Z * local_208._s_0.Z;
    auVar13._8_8_ = 0;
    TStack_1d0._s_0.Z = 0.0;
    auVar14._8_8_ = 0;
    auVar14._0_8_ =
         local_208._s_0.X * local_208._s_0.X + local_208._s_0.Y * local_208._s_0.Y + auVar13._0_8_;
    auVar14 = sqrtpd(auVar13,auVar14);
    if (auVar14._0_8_ <= 0.0) {
      TStack_1d0._s_0.Y = 0.0;
      TStack_1d0._s_0.X = 0.0;
    }
    else {
      dVar4 = dVar4 / auVar14._0_8_;
      TStack_1d0._s_0.Z = dVar4 * local_208._s_0.Z;
      TStack_1d0._s_0.Y = dVar4 * local_208._s_0.Y;
      TStack_1d0._s_0.X = dVar4 * local_208._s_0.X;
    }
    local_1e8._s_0.X = dVar7 + dVar1;
    local_1e8._s_0.Y = dVar8 + dVar2;
    local_1e8._s_0.Z = dVar5;
    UE::Math::TVector<double>::Normalize
              ((TVector<double> *)&TStack_1d0._s_0,__real_3e45798ee0000000);
    pTVar11 = &local_1e8;
  }
  else {
    pTVar11 = (TVector<double>_u_0 *)
              UE::Geometry::TTransformSRT3<double>::InverseTransformRay
                        ((TTransformSRT3<double> *)&local_188._s_0,&local_138,
                         (TRay<double> *)&local_1e8._s_0);
  }
  dVar4 = (pTVar11->_s_0).Y;
  dVar2 = (pTVar11->_s_0).Z;
  dVar6 = (((TVector<double> *)(pTVar11->XYZ + 3))->field0_0x0)._s_0.X;
  dVar1 = pTVar11->XYZ[4];
  dVar7 = pTVar11->XYZ[5];
  *(double *)param_3 = (((TVector<double> *)&(pTVar11->_s_0).X)->field0_0x0)._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar4;
  *(double *)((longlong)param_3 + 0x10) = dVar2;
  *(double *)((longlong)param_3 + 0x18) = dVar6;
  *(double *)((longlong)param_3 + 0x20) = dVar1;
  *(double *)((longlong)param_3 + 0x28) = dVar7;
  return;
}

// execMakeRayFromPointDirection @ 14ced2f00

void __cdecl
UGeometryScriptLibrary_RayFunctions::execMakeRayFromPointDirection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  double local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  TVector<double>_u_0 TStack_20;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  TStack_20._s_0.X = local_50;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = local_68;
  uStack_34 = uStack_64;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  local_28 = local_58;
  TStack_20._8_4_ = local_48;
  TStack_20._12_4_ = uStack_44;
  TStack_20._16_4_ = uStack_40;
  TStack_20._20_4_ = uStack_3c;
  if (local_res10[0] == 0) {
    UE::Math::TVector<double>::Normalize((TVector<double> *)&TStack_20._s_0,__real_3e45798ee0000000)
    ;
    local_68 = local_38;
    uStack_64 = uStack_34;
    uStack_60 = uStack_30;
    uStack_5c = uStack_2c;
    local_48 = TStack_20._8_4_;
    uStack_44 = TStack_20._12_4_;
    uStack_40 = TStack_20._16_4_;
    uStack_3c = TStack_20._20_4_;
  }
  *(undefined4 *)param_3 = local_68;
  *(undefined4 *)((longlong)param_3 + 4) = uStack_64;
  *(undefined4 *)((longlong)param_3 + 8) = uStack_60;
  *(undefined4 *)((longlong)param_3 + 0xc) = uStack_5c;
  *(undefined8 *)((longlong)param_3 + 0x10) = local_28;
  *(double *)((longlong)param_3 + 0x18) = TStack_20._s_0.X;
  *(undefined4 *)((longlong)param_3 + 0x20) = local_48;
  *(undefined4 *)((longlong)param_3 + 0x24) = uStack_44;
  *(undefined4 *)((longlong)param_3 + 0x28) = uStack_40;
  *(undefined4 *)((longlong)param_3 + 0x2c) = uStack_3c;
  return;
}

// execMakeRayFromPoints @ 14ced3070

void __cdecl
UGeometryScriptLibrary_RayFunctions::execMakeRayFromPoints
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 unaff_XMM7 [16];
  undefined1 auVar5 [16];
  undefined4 local_68;
  undefined4 uStack_64;
  double local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  double local_50;
  double local_48;
  double local_40;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  local_50 = local_50 - (double)CONCAT44(uStack_64,local_68);
  local_40 = local_40 - (double)CONCAT44(uStack_54,local_58);
  local_48 = local_48 - local_60;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_48 * local_48 + local_50 * local_50 + local_40 * local_40;
  auVar5 = sqrtpd(unaff_XMM7,auVar5);
  dVar4 = auVar5._0_8_;
  if (0.0 < dVar4) {
    dVar3 = __real_3ff0000000000000 / dVar4;
    local_48 = dVar3 * local_48;
    local_50 = dVar3 * local_50;
    dVar3 = dVar3 * local_40;
    if (__real_3e80000000000000 <= dVar4) goto LAB_14ced31ae;
  }
  local_48 = 0.0;
  local_50 = 0.0;
  dVar3 = __real_3ff0000000000000;
LAB_14ced31ae:
  *(undefined4 *)param_3 = local_68;
  *(undefined4 *)((longlong)param_3 + 4) = uStack_64;
  *(int *)((longlong)param_3 + 8) = SUB84(local_60,0);
  *(int *)((longlong)param_3 + 0xc) = (int)((ulonglong)local_60 >> 0x20);
  *(undefined4 *)((longlong)param_3 + 0x10) = local_58;
  *(undefined4 *)((longlong)param_3 + 0x14) = uStack_54;
  *(double *)((longlong)param_3 + 0x18) = local_50;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = local_48;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])((longlong)param_3 + 0x20) = auVar2;
  return;
}

