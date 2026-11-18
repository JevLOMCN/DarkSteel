// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 30

// StaticClass @ 14cea86c0

UClass * __cdecl UGeometryScriptLibrary_OrientedBoxFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_OrientedBoxFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_OrientedBoxFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_OrientedBoxFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_OrientedBoxFunctions,0x28
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_OrientedBoxFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_OrientedBoxFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_OrientedBoxFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_OrientedBoxFunctions @ 14ceae690

UGeometryScriptLibrary_OrientedBoxFunctions * __thiscall
UGeometryScriptLibrary_OrientedBoxFunctions::UGeometryScriptLibrary_OrientedBoxFunctions
          (UGeometryScriptLibrary_OrientedBoxFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_OrientedBoxFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_OrientedBoxFunctions @ 14ceae6c0

UGeometryScriptLibrary_OrientedBoxFunctions * __thiscall
UGeometryScriptLibrary_OrientedBoxFunctions::UGeometryScriptLibrary_OrientedBoxFunctions
          (UGeometryScriptLibrary_OrientedBoxFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_OrientedBoxFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_OrientedBoxFunctions @ 14ceaeb30

void __thiscall
UGeometryScriptLibrary_OrientedBoxFunctions::~UGeometryScriptLibrary_OrientedBoxFunctions
          (UGeometryScriptLibrary_OrientedBoxFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_OrientedBoxFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// ConvertOrientedBoxToAxisAlignedBox @ 14ceb5990

TBox<double> * __cdecl
UGeometryScriptLibrary_OrientedBoxFunctions::ConvertOrientedBoxToAxisAlignedBox
          (TBox<double> *__return_storage_ptr__,FOrientedBox *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
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
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  
  dVar13 = param_1->ExtentX;
  dVar1 = param_1->ExtentY;
  dVar3 = dVar13 + dVar13;
  dVar14 = param_1->ExtentZ;
  dVar15 = dVar1 + dVar1;
  dVar20 = dVar14 + dVar14;
  dVar10 = dVar14 * (param_1->AxisZ).field0_0x0._s_0.Y;
  dVar23 = dVar1 * (param_1->AxisY).field0_0x0._s_0.Y;
  dVar4 = dVar13 * (param_1->AxisX).field0_0x0._s_0.Y;
  dVar18 = (param_1->AxisX).field0_0x0._s_0.X * dVar13;
  dVar13 = dVar13 * (param_1->AxisX).field0_0x0._s_0.Z;
  dVar16 = dVar1 * (param_1->AxisY).field0_0x0._s_0.X;
  dVar1 = dVar1 * (param_1->AxisY).field0_0x0._s_0.Z;
  dVar19 = (param_1->Center).field0_0x0._s_0.Y;
  dVar2 = (param_1->Center).field0_0x0._s_0.Z;
  dVar11 = dVar14 * (param_1->AxisZ).field0_0x0._s_0.X;
  dVar14 = dVar14 * (param_1->AxisZ).field0_0x0._s_0.Z;
  dVar22 = (((param_1->Center).field0_0x0._s_0.X - dVar18) - dVar16) - dVar11;
  dVar17 = ((dVar19 - dVar4) - dVar23) - dVar10;
  dVar12 = ((dVar2 - dVar13) - dVar1) - dVar14;
  dVar8 = dVar18 + (param_1->Center).field0_0x0._s_0.X + dVar11 + dVar16;
  dVar19 = dVar19 + dVar4 + dVar10 + dVar23;
  dVar21 = dVar20 * (param_1->AxisZ).field0_0x0._s_0.X;
  dVar24 = dVar20 * (param_1->AxisZ).field0_0x0._s_0.Y;
  dVar20 = dVar20 * (param_1->AxisZ).field0_0x0._s_0.Z;
  dVar1 = dVar2 + dVar13 + dVar14 + dVar1;
  dVar14 = dVar21 + dVar22;
  dVar11 = dVar15 * (param_1->AxisY).field0_0x0._s_0.X;
  dVar2 = dVar15 * (param_1->AxisY).field0_0x0._s_0.Z;
  dVar15 = dVar15 * (param_1->AxisY).field0_0x0._s_0.Y;
  dVar10 = dVar20 + dVar12;
  dVar5 = dVar11 + dVar22;
  dVar25 = dVar24 + dVar17;
  dVar16 = (param_1->AxisX).field0_0x0._s_0.X * dVar3;
  dVar7 = dVar2 + dVar12;
  dVar18 = dVar3 * (param_1->AxisX).field0_0x0._s_0.Y;
  dVar6 = dVar15 + dVar17;
  dVar3 = dVar3 * (param_1->AxisX).field0_0x0._s_0.Z;
  dVar9 = dVar8 - dVar16;
  dVar23 = dVar18 + dVar17;
  dVar18 = dVar19 - dVar18;
  dVar4 = dVar3 + dVar12;
  dVar16 = dVar16 + dVar22;
  dVar11 = dVar8 - dVar11;
  dVar15 = dVar19 - dVar15;
  dVar21 = dVar8 - dVar21;
  dVar3 = dVar1 - dVar3;
  dVar2 = dVar1 - dVar2;
  dVar24 = dVar19 - dVar24;
  dVar20 = dVar1 - dVar20;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar22;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar17;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar12;
  dVar22 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
  dVar17 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
  __return_storage_ptr__->IsValid = '\x01';
  dVar13 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar22;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar17;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar13;
  dVar13 = (__return_storage_ptr__->Min).field0_0x0._s_0.X;
  if (dVar14 <= dVar13) {
    dVar13 = dVar14;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar13;
  dVar22 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
  if (dVar25 <= dVar22) {
    dVar22 = dVar25;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar22;
  dVar17 = (__return_storage_ptr__->Min).field0_0x0._s_0.Z;
  if (dVar10 <= dVar17) {
    dVar17 = dVar10;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar17;
  dVar12 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
  if (dVar14 <= dVar12) {
    dVar14 = dVar12;
  }
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar14;
  dVar12 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
  if (dVar12 <= dVar25) {
    dVar12 = dVar25;
  }
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar12;
  dVar25 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
  if (dVar25 <= dVar10) {
    dVar25 = dVar10;
  }
  if (dVar12 <= dVar6) {
    dVar12 = dVar6;
  }
  if (dVar5 <= dVar13) {
    dVar13 = dVar5;
  }
  if (dVar6 <= dVar22) {
    dVar22 = dVar6;
  }
  if (dVar7 <= dVar17) {
    dVar17 = dVar7;
  }
  if (dVar25 <= dVar7) {
    dVar25 = dVar7;
  }
  if (dVar14 <= dVar5) {
    dVar14 = dVar5;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar13;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar22;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar17;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar14;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar12;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar25;
  dVar13 = (__return_storage_ptr__->Min).field0_0x0._s_0.X;
  if (dVar16 <= dVar13) {
    dVar13 = dVar16;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar13;
  dVar13 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
  if (dVar23 <= dVar13) {
    dVar13 = dVar23;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar13;
  dVar13 = (__return_storage_ptr__->Min).field0_0x0._s_0.Z;
  dVar14 = dVar4;
  if (dVar13 <= dVar4) {
    dVar14 = dVar13;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar14;
  dVar13 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
  if (dVar16 <= dVar13) {
    dVar16 = dVar13;
  }
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar16;
  dVar13 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
  if (dVar23 <= dVar13) {
    dVar23 = dVar13;
  }
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar23;
  dVar13 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
  if (dVar13 <= dVar4) {
    dVar13 = dVar4;
  }
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar13;
  dVar13 = (__return_storage_ptr__->Min).field0_0x0._s_0.X;
  if (dVar9 <= dVar13) {
    dVar13 = dVar9;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar13;
  dVar13 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
  dVar14 = dVar18;
  if (dVar13 <= dVar18) {
    dVar14 = dVar13;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar14;
  dVar13 = (__return_storage_ptr__->Min).field0_0x0._s_0.Z;
  dVar14 = dVar3;
  if (dVar13 <= dVar3) {
    dVar14 = dVar13;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar14;
  dVar13 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
  if (dVar13 <= dVar9) {
    dVar13 = dVar9;
  }
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar13;
  dVar13 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
  if (dVar18 <= dVar13) {
    dVar18 = dVar13;
  }
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar18;
  dVar13 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
  if (dVar13 <= dVar3) {
    dVar13 = dVar3;
  }
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar13;
  dVar13 = (__return_storage_ptr__->Min).field0_0x0._s_0.X;
  if (dVar11 <= dVar13) {
    dVar13 = dVar11;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar13;
  dVar13 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
  dVar14 = dVar15;
  if (dVar13 <= dVar15) {
    dVar14 = dVar13;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar14;
  dVar13 = (__return_storage_ptr__->Min).field0_0x0._s_0.Z;
  dVar14 = dVar2;
  if (dVar13 <= dVar2) {
    dVar14 = dVar13;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar14;
  dVar13 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
  if (dVar11 <= dVar13) {
    dVar11 = dVar13;
  }
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar11;
  dVar13 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
  if (dVar15 <= dVar13) {
    dVar15 = dVar13;
  }
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar15;
  dVar13 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
  if (dVar13 <= dVar2) {
    dVar13 = dVar2;
  }
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar13;
  dVar13 = (__return_storage_ptr__->Min).field0_0x0._s_0.X;
  if (dVar21 <= dVar13) {
    dVar13 = dVar21;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar13;
  dVar13 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
  dVar14 = dVar24;
  if (dVar13 <= dVar24) {
    dVar14 = dVar13;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar14;
  dVar13 = (__return_storage_ptr__->Min).field0_0x0._s_0.Z;
  if (dVar20 <= dVar13) {
    dVar13 = dVar20;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar13;
  dVar13 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
  if (dVar21 <= dVar13) {
    dVar21 = dVar13;
  }
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar21;
  dVar13 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
  if (dVar24 <= dVar13) {
    dVar24 = dVar13;
  }
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar24;
  dVar13 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
  if (dVar13 <= dVar20) {
    dVar13 = dVar20;
  }
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar13;
  dVar13 = (__return_storage_ptr__->Min).field0_0x0._s_0.X;
  if (dVar8 <= dVar13) {
    dVar13 = dVar8;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar13;
  dVar13 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
  dVar14 = dVar19;
  if (dVar13 <= dVar19) {
    dVar14 = dVar13;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar14;
  dVar13 = (__return_storage_ptr__->Min).field0_0x0._s_0.Z;
  dVar14 = dVar1;
  if (dVar13 <= dVar1) {
    dVar14 = dVar13;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar14;
  dVar13 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
  if (dVar13 <= dVar8) {
    dVar13 = dVar8;
  }
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar13;
  dVar13 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
  if (dVar19 <= dVar13) {
    dVar19 = dVar13;
  }
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar19;
  dVar13 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
  if (dVar13 <= dVar1) {
    dVar13 = dVar1;
  }
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar13;
  return __return_storage_ptr__;
}

// FindClosestPointOnOrientedBox @ 14ceb95e0

TVector<double> * __cdecl
UGeometryScriptLibrary_OrientedBoxFunctions::FindClosestPointOnOrientedBox
          (TVector<double> *__return_storage_ptr__,FOrientedBox *param_1,TVector<double> *param_2,
          bool *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  double dVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  TVector<double>_u_0 local_138;
  TQuaternion<double>_u_0 local_120;
  double local_100;
  double local_f8;
  double local_f0;
  TVector<double>_u_0 local_e8;
  TVector<double> local_d0 [7];
  
  UE::Geometry::TOrientedBox3<double>::TOrientedBox3<double>
            ((TOrientedBox3<double> *)&local_138._s_0,param_1);
  dVar9 = (param_2->field0_0x0)._s_0.X - local_138._s_0.X;
  dVar10 = (param_2->field0_0x0)._s_0.Y - local_138._s_0.Y;
  dVar11 = (param_2->field0_0x0)._s_0.Z - local_138._s_0.Z;
  local_e8._s_0.X = dVar9;
  local_e8._s_0.Y = dVar10;
  local_e8._s_0.Z = dVar11;
  UE::Geometry::TQuaternion<double>::InverseMultiply
            ((TQuaternion<double> *)&local_120._s_0,local_d0,(TVector<double> *)&local_e8._s_0);
  dVar6 = __real_3ff0000000000000;
  if (((local_100 <
        (double)CONCAT44((uint)((ulonglong)local_d0[0].field0_0x0._0_8_ >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)local_d0[0].field0_0x0._s_0.X &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (local_f8 <
       (double)CONCAT44((uint)((ulonglong)local_d0[0].field0_0x0._8_8_ >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)local_d0[0].field0_0x0._s_0.Y &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (local_f0 <
      (double)CONCAT44((uint)((ulonglong)local_d0[0].field0_0x0._16_8_ >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)local_d0[0].field0_0x0._s_0.Z &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  dVar1 = local_120._s_0.Z + local_120._s_0.Z;
  *param_3 = bVar8;
  dVar18 = local_120._s_0.Y + local_120._s_0.Y;
  dVar12 = (local_120._s_0.X + local_120._s_0.X) * local_120._s_0.X;
  dVar2 = (local_120._s_0.X + local_120._s_0.X) * local_120._s_0.W;
  dVar4 = dVar1 * local_120._s_0.X + dVar18 * local_120._s_0.W;
  dVar15 = dVar1 * local_120._s_0.X - dVar18 * local_120._s_0.W;
  dVar13 = dVar1 * local_120._s_0.Y + dVar2;
  dVar7 = dVar18 * local_120._s_0.X + dVar1 * local_120._s_0.W;
  dVar3 = dVar6 - (dVar1 * local_120._s_0.Z + dVar12);
  dVar17 = dVar18 * local_120._s_0.X - dVar1 * local_120._s_0.W;
  dVar5 = dVar6 - (dVar1 * local_120._s_0.Z + dVar18 * local_120._s_0.Y);
  dVar2 = dVar1 * local_120._s_0.Y - dVar2;
  dVar6 = dVar6 - (dVar18 * local_120._s_0.Y + dVar12);
  dVar1 = dVar7 * dVar10 + dVar5 * dVar9 + dVar15 * dVar11;
  if (local_100 <= dVar1) {
    dVar1 = local_100;
  }
  uVar14 = (uint)__xmm_80000000000000008000000000000000;
  uVar16 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar18 = (double)CONCAT44((uint)((ulonglong)local_100 >> 0x20) ^ uVar16,
                            SUB84(local_100,0) ^ uVar14);
  if (dVar1 <= dVar18) {
    dVar1 = dVar18;
  }
  dVar18 = dVar3 * dVar10 + dVar17 * dVar9 + dVar13 * dVar11;
  if (local_f8 <= dVar18) {
    dVar18 = local_f8;
  }
  dVar12 = (double)CONCAT44((uint)((ulonglong)local_f8 >> 0x20) ^ uVar16,SUB84(local_f8,0) ^ uVar14)
  ;
  if (dVar18 <= dVar12) {
    dVar18 = dVar12;
  }
  dVar9 = dVar2 * dVar10 + dVar4 * dVar9 + dVar6 * dVar11;
  if (local_f0 <= dVar9) {
    dVar9 = local_f0;
  }
  dVar10 = (double)CONCAT44((uint)((ulonglong)local_f0 >> 0x20) ^ uVar16,SUB84(local_f0,0) ^ uVar14)
  ;
  if (dVar9 <= dVar10) {
    dVar9 = dVar10;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       dVar18 * dVar17 + dVar1 * dVar5 + dVar9 * dVar4 + local_138._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       dVar18 * dVar3 + dVar1 * dVar7 + dVar9 * dVar2 + local_138._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       dVar18 * dVar13 + dVar1 * dVar15 + dVar9 * dVar6 + local_138._s_0.Z;
  return __return_storage_ptr__;
}

// GetExpandedOrientedBox @ 14cebab10

FOrientedBox * __cdecl
UGeometryScriptLibrary_OrientedBoxFunctions::GetExpandedOrientedBox
          (FOrientedBox *__return_storage_ptr__,FOrientedBox *param_1,TVector<double> *param_2,
          double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = (param_2->field0_0x0)._s_0.Y + param_1->ExtentY;
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  dVar1 = (param_2->field0_0x0)._s_0.X + param_1->ExtentX;
  if (dVar2 <= param_3) {
    dVar2 = param_3;
  }
  if (dVar1 <= param_3) {
    dVar1 = param_3;
  }
  param_1->ExtentY = dVar2;
  param_1->ExtentX = dVar1;
  dVar2 = (param_2->field0_0x0)._s_0.Z + param_1->ExtentZ;
  if (dVar2 <= param_3) {
    dVar2 = param_3;
  }
  param_1->ExtentZ = dVar2;
  dVar2 = (param_1->Center).field0_0x0._s_0.Y;
  dVar1 = (param_1->Center).field0_0x0._s_0.Z;
  dVar3 = (param_1->AxisX).field0_0x0._s_0.X;
  (__return_storage_ptr__->Center).field0_0x0._s_0.X = (param_1->Center).field0_0x0._s_0.X;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->AxisX).field0_0x0._s_0.Y;
  dVar4 = (param_1->AxisX).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Z = dVar1;
  (__return_storage_ptr__->AxisX).field0_0x0._s_0.X = dVar3;
  dVar1 = (param_1->AxisY).field0_0x0._s_0.X;
  dVar3 = (param_1->AxisY).field0_0x0._s_0.Y;
  (__return_storage_ptr__->AxisX).field0_0x0._s_0.Y = dVar2;
  (__return_storage_ptr__->AxisX).field0_0x0._s_0.Z = dVar4;
  dVar2 = (param_1->AxisY).field0_0x0._s_0.Z;
  dVar4 = (param_1->AxisZ).field0_0x0._s_0.X;
  (__return_storage_ptr__->AxisY).field0_0x0._s_0.X = dVar1;
  (__return_storage_ptr__->AxisY).field0_0x0._s_0.Y = dVar3;
  dVar1 = (param_1->AxisZ).field0_0x0._s_0.Y;
  dVar3 = (param_1->AxisZ).field0_0x0._s_0.Z;
  (__return_storage_ptr__->AxisY).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->AxisZ).field0_0x0._s_0.X = dVar4;
  dVar4 = param_1->ExtentX;
  dVar5 = param_1->ExtentY;
  (__return_storage_ptr__->AxisZ).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->AxisZ).field0_0x0._s_0.Z = dVar3;
  dVar2 = param_1->ExtentZ;
  __return_storage_ptr__->ExtentX = dVar4;
  __return_storage_ptr__->ExtentY = dVar5;
  __return_storage_ptr__->ExtentZ = dVar2;
  return __return_storage_ptr__;
}

// GetOrientedBoxCorner @ 14cebae90

TVector<double> * __cdecl
UGeometryScriptLibrary_OrientedBoxFunctions::GetOrientedBoxCorner
          (TVector<double> *__return_storage_ptr__,FOrientedBox *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  
  iVar12 = 7;
  if (param_2 < 7) {
    iVar12 = param_2;
  }
  iVar13 = 0;
  if (0 < iVar12) {
    iVar13 = iVar12;
  }
  uVar14 = (undefined4)__real_bff0000000000000;
  uVar16 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  uVar20 = (undefined4)__real_3ff0000000000000;
  uVar21 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  uVar15 = uVar20;
  uVar17 = uVar21;
  uVar18 = uVar20;
  uVar19 = uVar21;
  switch(iVar13) {
  default:
    uVar15 = uVar14;
    uVar17 = uVar16;
    uVar18 = uVar14;
    uVar19 = uVar16;
    uVar20 = uVar14;
    uVar21 = uVar16;
    break;
  case 1:
    uVar15 = uVar14;
    uVar17 = uVar16;
    uVar18 = uVar14;
    uVar19 = uVar16;
    break;
  case 2:
    uVar15 = uVar14;
    uVar17 = uVar16;
    uVar20 = uVar14;
    uVar21 = uVar16;
    break;
  case 3:
    uVar18 = uVar14;
    uVar19 = uVar16;
    uVar20 = uVar14;
    uVar21 = uVar16;
    break;
  case 4:
    uVar20 = uVar14;
    uVar21 = uVar16;
    break;
  case 5:
    uVar18 = uVar14;
    uVar19 = uVar16;
    break;
  case 6:
    uVar15 = uVar14;
    uVar17 = uVar16;
    break;
  case 7:
  }
  dVar1 = param_1->ExtentX;
  dVar2 = param_1->ExtentY;
  dVar3 = param_1->ExtentZ;
  dVar4 = (param_1->AxisZ).field0_0x0._s_0.Y;
  dVar5 = (param_1->AxisZ).field0_0x0._s_0.Z;
  dVar6 = (param_1->AxisY).field0_0x0._s_0.Y;
  dVar7 = (param_1->AxisY).field0_0x0._s_0.Z;
  dVar8 = (param_1->AxisX).field0_0x0._s_0.Z;
  dVar9 = (param_1->AxisX).field0_0x0._s_0.Y;
  dVar10 = (param_1->Center).field0_0x0._s_0.Z;
  dVar11 = (param_1->Center).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       dVar2 * (param_1->AxisY).field0_0x0._s_0.X * (double)CONCAT44(uVar19,uVar18) +
       dVar3 * (param_1->AxisZ).field0_0x0._s_0.X * (double)CONCAT44(uVar21,uVar20) +
       dVar1 * (param_1->AxisX).field0_0x0._s_0.X * (double)CONCAT44(uVar17,uVar15) +
       (param_1->Center).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       dVar3 * dVar4 * (double)CONCAT44(uVar21,uVar20) +
       dVar2 * dVar6 * (double)CONCAT44(uVar19,uVar18) +
       dVar1 * dVar9 * (double)CONCAT44(uVar17,uVar15) + dVar11;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       dVar3 * dVar5 * (double)CONCAT44(uVar21,uVar20) +
       dVar2 * dVar7 * (double)CONCAT44(uVar19,uVar18) +
       dVar1 * dVar8 * (double)CONCAT44(uVar17,uVar15) + dVar10;
  return __return_storage_ptr__;
}

// GetOrientedBoxFaceCenter @ 14cebb080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __cdecl
UGeometryScriptLibrary_OrientedBoxFunctions::GetOrientedBoxFaceCenter
          (TVector<double> *__return_storage_ptr__,FOrientedBox *param_1,int param_2,
          TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double dVar21;
  
  iVar8 = 5;
  if (param_2 < 5) {
    iVar8 = param_2;
  }
  iVar9 = 0;
  if (0 < iVar8) {
    iVar9 = iVar8;
  }
  switch(iVar9) {
  default:
    uVar3 = *(undefined8 *)((longlong)&(param_1->AxisZ).field0_0x0 + 0x10);
    dVar21 = (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              (uint)uVar3 ^ (uint)__xmm_80000000000000008000000000000000);
    uVar12 = *(uint *)((longlong)&(param_1->AxisZ).field0_0x0 + 4) ^
             __xmm_80000000000000008000000000000000._4_4_;
    uVar14 = *(uint *)((longlong)&(param_1->AxisZ).field0_0x0 + 8) ^ _UNK_15066df78;
    uVar16 = *(uint *)((longlong)&(param_1->AxisZ).field0_0x0 + 0xc) ^ _UNK_15066df7c;
    *(uint *)&param_3->field0_0x0 =
         *(uint *)&(param_1->AxisZ).field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000;
    *(uint *)((longlong)&param_3->field0_0x0 + 4) = uVar12;
    *(uint *)((longlong)&param_3->field0_0x0 + 8) = uVar14;
    *(uint *)((longlong)&param_3->field0_0x0 + 0xc) = uVar16;
    (param_3->field0_0x0)._s_0.Z = dVar21;
    dVar4 = param_1->ExtentZ;
    uVar10 = SUB84(dVar4,0);
    uVar11 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar21 = dVar21 * dVar4;
    break;
  case 1:
    dVar1 = (param_1->AxisZ).field0_0x0._s_0.Y;
    dVar4 = param_1->ExtentZ;
    dVar21 = (param_1->AxisZ).field0_0x0._s_0.Z;
    (param_3->field0_0x0)._s_0.X = (param_1->AxisZ).field0_0x0._s_0.X;
    (param_3->field0_0x0)._s_0.Y = dVar1;
    (param_3->field0_0x0)._s_0.Z = dVar21;
    dVar1 = (param_3->field0_0x0)._s_0.X;
    dVar2 = (param_1->Center).field0_0x0._s_0.X;
    dVar21 = dVar4 * (param_3->field0_0x0)._s_0.Y + (param_1->Center).field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         dVar4 * (param_3->field0_0x0)._s_0.Z + (param_1->Center).field0_0x0._s_0.Z;
    auVar6._8_4_ = SUB84(dVar21,0);
    auVar6._0_8_ = dVar4 * dVar1 + dVar2;
    auVar6._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar6;
    return __return_storage_ptr__;
  case 2:
    uVar3 = *(undefined8 *)((longlong)&(param_1->AxisY).field0_0x0 + 0x10);
    dVar21 = (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              (uint)uVar3 ^ (uint)__xmm_80000000000000008000000000000000);
    uVar12 = *(uint *)((longlong)&(param_1->AxisY).field0_0x0 + 4) ^
             __xmm_80000000000000008000000000000000._4_4_;
    uVar14 = *(uint *)((longlong)&(param_1->AxisY).field0_0x0 + 8) ^ _UNK_15066df78;
    uVar16 = *(uint *)((longlong)&(param_1->AxisY).field0_0x0 + 0xc) ^ _UNK_15066df7c;
    *(uint *)&param_3->field0_0x0 =
         *(uint *)&(param_1->AxisY).field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000;
    *(uint *)((longlong)&param_3->field0_0x0 + 4) = uVar12;
    *(uint *)((longlong)&param_3->field0_0x0 + 8) = uVar14;
    *(uint *)((longlong)&param_3->field0_0x0 + 0xc) = uVar16;
    (param_3->field0_0x0)._s_0.Z = dVar21;
    dVar4 = param_1->ExtentY;
    uVar10 = SUB84(dVar4,0);
    uVar11 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar21 = dVar21 * dVar4;
    break;
  case 3:
    uVar10 = *(undefined4 *)&(param_1->AxisY).field0_0x0;
    uVar11 = *(undefined4 *)((longlong)&(param_1->AxisY).field0_0x0 + 4);
    uVar13 = *(undefined4 *)((longlong)&(param_1->AxisY).field0_0x0 + 8);
    uVar15 = *(undefined4 *)((longlong)&(param_1->AxisY).field0_0x0 + 0xc);
    uVar3 = *(undefined8 *)((longlong)&(param_1->AxisY).field0_0x0 + 0x10);
    uVar17 = (undefined4)uVar3;
    uVar18 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uVar19 = SUB84(param_1->ExtentY,0);
    uVar20 = (undefined4)((ulonglong)param_1->ExtentY >> 0x20);
    goto LAB_14cebb139;
  case 4:
    uVar3 = *(undefined8 *)((longlong)&(param_1->AxisX).field0_0x0 + 0x10);
    dVar21 = (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) ^
                              __xmm_80000000000000008000000000000000._4_4_,
                              (uint)uVar3 ^ (uint)__xmm_80000000000000008000000000000000);
    uVar12 = *(uint *)((longlong)&(param_1->AxisX).field0_0x0 + 4) ^
             __xmm_80000000000000008000000000000000._4_4_;
    uVar14 = *(uint *)((longlong)&(param_1->AxisX).field0_0x0 + 8) ^ _UNK_15066df78;
    uVar16 = *(uint *)((longlong)&(param_1->AxisX).field0_0x0 + 0xc) ^ _UNK_15066df7c;
    *(uint *)&param_3->field0_0x0 =
         *(uint *)&(param_1->AxisX).field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000;
    *(uint *)((longlong)&param_3->field0_0x0 + 4) = uVar12;
    *(uint *)((longlong)&param_3->field0_0x0 + 8) = uVar14;
    *(uint *)((longlong)&param_3->field0_0x0 + 0xc) = uVar16;
    (param_3->field0_0x0)._s_0.Z = dVar21;
    dVar4 = param_1->ExtentX;
    uVar10 = SUB84(dVar4,0);
    uVar11 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar21 = dVar21 * dVar4;
    break;
  case 5:
    uVar10 = *(undefined4 *)&(param_1->AxisX).field0_0x0;
    uVar11 = *(undefined4 *)((longlong)&(param_1->AxisX).field0_0x0 + 4);
    uVar13 = *(undefined4 *)((longlong)&(param_1->AxisX).field0_0x0 + 8);
    uVar15 = *(undefined4 *)((longlong)&(param_1->AxisX).field0_0x0 + 0xc);
    uVar3 = *(undefined8 *)((longlong)&(param_1->AxisX).field0_0x0 + 0x10);
    uVar17 = (undefined4)uVar3;
    uVar18 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uVar19 = SUB84(param_1->ExtentX,0);
    uVar20 = (undefined4)((ulonglong)param_1->ExtentX >> 0x20);
LAB_14cebb139:
    *(undefined4 *)&param_3->field0_0x0 = uVar10;
    *(undefined4 *)((longlong)&param_3->field0_0x0 + 4) = uVar11;
    *(undefined4 *)((longlong)&param_3->field0_0x0 + 8) = uVar13;
    *(undefined4 *)((longlong)&param_3->field0_0x0 + 0xc) = uVar15;
    (param_3->field0_0x0)._s_0.Z = (double)CONCAT44(uVar18,uVar17);
    dVar4 = (param_3->field0_0x0)._s_0.Y;
    dVar21 = (param_3->field0_0x0)._s_0.Z;
    dVar1 = (param_1->Center).field0_0x0._s_0.Y;
    dVar2 = (param_1->Center).field0_0x0._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (double)CONCAT44(uVar20,uVar19) * (param_3->field0_0x0)._s_0.X +
         (param_1->Center).field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)CONCAT44(uVar20,uVar19) * dVar4 + dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)CONCAT44(uVar20,uVar19) * dVar21 + dVar2;
    return __return_storage_ptr__;
  }
  dVar1 = (param_3->field0_0x0)._s_0.X;
  dVar2 = (param_3->field0_0x0)._s_0.Y;
  dVar7 = (param_1->Center).field0_0x0._s_0.X;
  dVar4 = (param_1->Center).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar21 + (param_1->Center).field0_0x0._s_0.Z;
  dVar4 = (double)CONCAT44(uVar11,uVar10) * dVar2 + dVar4;
  auVar5._8_4_ = SUB84(dVar4,0);
  auVar5._0_8_ = (double)CONCAT44(uVar11,uVar10) * dVar1 + dVar7;
  auVar5._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar5;
  return __return_storage_ptr__;
}

// GetOrientedBoxOrientation @ 14cebb230

TRotator<double> * __cdecl
UGeometryScriptLibrary_OrientedBoxFunctions::GetOrientedBoxOrientation
          (TRotator<double> *__return_storage_ptr__,FOrientedBox *param_1)

{
  TQuaternion<double>_u_0 local_98;
  TQuat<double> local_78;
  TVector<double>_u_0 local_58;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  
  local_58._s_0.X = (param_1->AxisX).field0_0x0._s_0.X;
  local_58._s_0.Y = (param_1->AxisY).field0_0x0._s_0.X;
  local_58._s_0.Z = (param_1->AxisZ).field0_0x0._s_0.X;
  local_38 = (param_1->AxisY).field0_0x0._s_0.Y;
  local_40 = (param_1->AxisX).field0_0x0._s_0.Y;
  local_28 = (param_1->AxisX).field0_0x0._s_0.Z;
  local_30 = (param_1->AxisZ).field0_0x0._s_0.Y;
  local_18 = (param_1->AxisZ).field0_0x0._s_0.Z;
  local_20 = (param_1->AxisY).field0_0x0._s_0.Z;
  local_98._s_0.W = __real_3ff0000000000000;
  local_98._s_0.X = 0.0;
  local_98._s_0.Y = 0.0;
  local_98._s_0.Z = 0.0;
  UE::Geometry::TQuaternion<double>::SetFromRotationMatrix
            ((TQuaternion<double> *)&local_98._s_0,(TMatrix3<double> *)&local_58._s_0);
  local_78.X = local_98._s_0.X;
  local_78.Y = local_98._s_0.Y;
  local_78.Z = local_98._s_0.Z;
  local_78.W = local_98._s_0.W;
  UE::Math::TRotator<double>::TRotator<double>(__return_storage_ptr__,&local_78);
  return __return_storage_ptr__;
}

// GetOrientedBoxVolumeArea @ 14cebb300

void __cdecl
UGeometryScriptLibrary_OrientedBoxFunctions::GetOrientedBoxVolumeArea
          (FOrientedBox *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = param_1->ExtentX + param_1->ExtentX;
  dVar3 = param_1->ExtentY + param_1->ExtentY;
  dVar2 = param_1->ExtentZ + param_1->ExtentZ;
  *param_3 = (dVar2 + dVar3) * (dVar1 + dVar1) + (dVar3 + dVar3) * dVar2;
  *param_2 = dVar3 * dVar1 * dVar2;
  return;
}

// GetPrivateStaticClass @ 14cebce30

UClass * __cdecl UGeometryScriptLibrary_OrientedBoxFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_OrientedBoxFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_OrientedBoxFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_OrientedBoxFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_OrientedBoxFunctions,0x28
               ,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_OrientedBoxFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_OrientedBoxFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_OrientedBoxFunctions.InnerSingleton;
}

// GetTransformedOrientedBox @ 14cebe690

FOrientedBox * __cdecl
UGeometryScriptLibrary_OrientedBoxFunctions::GetTransformedOrientedBox
          (FOrientedBox *__return_storage_ptr__,FOrientedBox *param_1,TTransform<double> *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  uint uVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint uVar35;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined4 uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  double dVar56;
  double dVar57;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar58;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  
  uVar6 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar5 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  auVar12 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  dVar19 = auVar12._0_8_;
  auVar9 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  dVar57 = (param_2->Rotation).ZW.m128d_f64[1];
  auVar22 = blendpd(auVar9,auVar12,2);
  dVar49 = (param_1->Center).field0_0x0._s_0.X * (param_2->Scale3D).XY.m128d_f64[0];
  dVar56 = (param_1->Center).field0_0x0._s_0.Y * (param_2->Scale3D).XY.m128d_f64[1];
  dVar20 = (param_1->Center).field0_0x0._s_0.Z * (param_2->Scale3D).ZW.m128d_f64[0];
  dVar3 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar46._8_4_ = SUB84(dVar56,0);
  auVar46._0_8_ = dVar49;
  uVar45 = (undefined4)((ulonglong)dVar56 >> 0x20);
  auVar46._12_4_ = uVar45;
  auVar47._0_8_ = auVar46._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar49;
  auVar47._8_8_ = dVar20 * auVar9._8_8_ - dVar19 * dVar56;
  auVar8._8_4_ = SUB84(dVar56,0);
  auVar8._0_8_ = dVar49;
  auVar8._12_4_ = uVar45;
  auVar26._8_4_ = SUB84(dVar3,0);
  auVar26._0_8_ = dVar20;
  auVar26._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  auVar9 = blendpd(auVar8,auVar26,2);
  auVar10._0_8_ = auVar9._0_8_ * dVar19 - auVar22._0_8_ * dVar20;
  auVar10._8_8_ = auVar9._8_8_ * auVar12._8_8_ - auVar22._8_8_ * dVar3;
  auVar9 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar22 = blendpd(auVar47,auVar10,2);
  auVar48._0_8_ = auVar22._0_8_ + auVar22._0_8_;
  auVar48._8_8_ = auVar22._8_8_ + auVar22._8_8_;
  dVar58 = auVar47._8_8_ + auVar47._8_8_;
  dVar24 = auVar10._0_8_ + auVar10._0_8_;
  uVar45 = (undefined4)((ulonglong)dVar24 >> 0x20);
  auVar36._8_4_ = SUB84(dVar24,0);
  auVar36._0_8_ = dVar58;
  auVar36._12_4_ = uVar45;
  auVar25._8_4_ = SUB84(dVar24,0);
  auVar25._0_8_ = dVar58;
  auVar25._12_4_ = uVar45;
  auVar26 = blendpd(auVar25,auVar48,2);
  auVar22 = blendpd(auVar9,auVar12,2);
  auVar37._0_8_ = auVar36._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar58;
  auVar37._8_8_ = auVar48._0_8_ * auVar9._8_8_ - dVar19 * dVar24;
  auVar11._8_4_ = SUB84(auVar37._8_8_,0);
  auVar11._0_8_ = auVar37._0_8_;
  auVar11._12_4_ = (int)((ulonglong)auVar37._8_8_ >> 0x20);
  auVar27._0_8_ = auVar26._0_8_ * dVar19 - auVar22._0_8_ * auVar48._0_8_;
  auVar27._8_8_ = auVar26._8_8_ * auVar12._8_8_ - auVar22._8_8_ * auVar48._8_8_;
  dVar4 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar3 = (param_1->AxisX).field0_0x0._s_0.Z;
  dVar7 = (param_2->Scale3D).XY.m128d_f64[0] * param_1->ExtentX;
  dVar19 = (param_2->Translation).XY.m128d_f64[0];
  dVar56 = dVar24 * dVar57 + dVar56 + auVar27._0_8_ + (param_2->Translation).XY.m128d_f64[1];
  auVar26 = blendpd(auVar37,auVar27,2);
  dVar24 = (param_2->Scale3D).ZW.m128d_f64[0] * param_1->ExtentZ;
  dVar21 = (param_2->Scale3D).XY.m128d_f64[1] * param_1->ExtentY;
  uVar23 = SUB84(dVar24,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar35 = (uint)((ulonglong)dVar24 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  __return_storage_ptr__->ExtentX =
       (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar24 = (param_2->Translation).ZW.m128d_f64[0];
  auVar12 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar9 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  auVar22._8_4_ = SUB84(dVar56,0);
  auVar22._0_8_ = dVar58 * dVar57 + dVar49 + auVar11._8_8_ + dVar19;
  auVar22._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->Center).field0_0x0 = auVar22;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Z =
       auVar48._0_8_ * dVar57 + dVar20 + auVar26._0_8_ + dVar24;
  auVar22 = *(undefined1 (*) [16])&(param_1->AxisX).field0_0x0;
  __return_storage_ptr__->ExtentY =
       (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & uVar6,SUB84(dVar21,0) & uVar5);
  __return_storage_ptr__->ExtentZ = (double)CONCAT44(uVar35,uVar23);
  dVar57 = auVar22._8_8_;
  dVar56 = auVar9._0_8_;
  dVar20 = auVar9._8_8_;
  auVar26 = blendpd(auVar12,auVar9,2);
  auVar50._0_8_ = dVar57 * auVar12._0_8_ - auVar12._8_8_ * auVar22._0_8_;
  auVar50._8_8_ = dVar3 * auVar12._8_8_ - dVar56 * dVar57;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = dVar3;
  auVar12 = blendpd(auVar22,auVar12,2);
  auVar13._0_8_ = auVar12._0_8_ * dVar56 - auVar26._0_8_ * dVar3;
  auVar13._8_8_ = auVar12._8_8_ * dVar20 - auVar26._8_8_ * 0.0;
  auVar12 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar26 = blendpd(auVar50,auVar13,2);
  dVar24 = auVar50._8_8_ + auVar50._8_8_;
  dVar58 = auVar13._0_8_ + auVar13._0_8_;
  uVar45 = (undefined4)((ulonglong)dVar58 >> 0x20);
  auVar51._0_8_ = auVar26._0_8_ + auVar26._0_8_;
  auVar51._8_8_ = auVar26._8_8_ + auVar26._8_8_;
  auVar38._8_4_ = SUB84(dVar58,0);
  auVar38._0_8_ = dVar24;
  auVar38._12_4_ = uVar45;
  auVar28._8_4_ = SUB84(dVar58,0);
  auVar28._0_8_ = dVar24;
  auVar28._12_4_ = uVar45;
  auVar29 = blendpd(auVar28,auVar51,2);
  auVar39._0_8_ = auVar38._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar24;
  auVar39._8_8_ = auVar51._0_8_ * auVar12._8_8_ - dVar56 * dVar58;
  auVar26 = *(undefined1 (*) [16])&(param_1->AxisY).field0_0x0;
  auVar12 = blendpd(auVar12,auVar9,2);
  auVar14._8_4_ = SUB84(auVar39._8_8_,0);
  auVar14._0_8_ = auVar39._0_8_;
  auVar14._12_4_ = (int)((ulonglong)auVar39._8_8_ >> 0x20);
  dVar19 = (param_1->AxisY).field0_0x0._s_0.Z;
  auVar30._0_8_ = auVar29._0_8_ * dVar56 - auVar12._0_8_ * auVar51._0_8_;
  auVar30._8_8_ = auVar29._8_8_ * dVar20 - auVar12._8_8_ * auVar51._8_8_;
  dVar58 = dVar58 * dVar4 + dVar57 + auVar30._0_8_;
  auVar12 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar40 = blendpd(auVar39,auVar30,2);
  auVar29._8_4_ = SUB84(dVar58,0);
  auVar29._0_8_ = dVar24 * dVar4 + auVar22._0_8_ + auVar14._8_8_;
  auVar29._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->AxisX).field0_0x0 = auVar29;
  (__return_storage_ptr__->AxisX).field0_0x0._s_0.Z = auVar51._0_8_ * dVar4 + dVar3 + auVar40._0_8_;
  dVar58 = auVar26._8_8_;
  auVar22 = blendpd(auVar12,auVar9,2);
  auVar52._0_8_ = dVar58 * auVar12._0_8_ - auVar12._8_8_ * auVar26._0_8_;
  auVar52._8_8_ = dVar19 * auVar12._8_8_ - dVar56 * dVar58;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = dVar19;
  auVar12 = blendpd(auVar26,auVar1,2);
  auVar15._0_8_ = auVar12._0_8_ * dVar56 - auVar22._0_8_ * dVar19;
  auVar15._8_8_ = auVar12._8_8_ * dVar20 - auVar22._8_8_ * 0.0;
  auVar12 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  dVar24 = auVar52._8_8_ + auVar52._8_8_;
  dVar3 = auVar15._0_8_ + auVar15._0_8_;
  uVar45 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar22 = blendpd(auVar52,auVar15,2);
  auVar41._8_4_ = SUB84(dVar3,0);
  auVar41._0_8_ = dVar24;
  auVar41._12_4_ = uVar45;
  auVar31._8_4_ = SUB84(dVar3,0);
  auVar31._0_8_ = dVar24;
  auVar31._12_4_ = uVar45;
  auVar53._0_8_ = auVar22._0_8_ + auVar22._0_8_;
  auVar53._8_8_ = auVar22._8_8_ + auVar22._8_8_;
  auVar22 = blendpd(auVar31,auVar53,2);
  auVar42._0_8_ = auVar41._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar24;
  auVar42._8_8_ = auVar53._0_8_ * auVar12._8_8_ - dVar56 * dVar3;
  auVar12 = blendpd(auVar12,auVar9,2);
  auVar32._0_8_ = auVar22._0_8_ * dVar56 - auVar12._0_8_ * auVar53._0_8_;
  auVar32._8_8_ = auVar22._8_8_ * dVar20 - auVar12._8_8_ * auVar53._8_8_;
  auVar16._8_4_ = SUB84(auVar42._8_8_,0);
  auVar16._0_8_ = auVar42._0_8_;
  auVar16._12_4_ = (int)((ulonglong)auVar42._8_8_ >> 0x20);
  dVar58 = dVar3 * dVar20 + dVar58 + auVar32._0_8_;
  auVar12 = *(undefined1 (*) [16])&(param_1->AxisZ).field0_0x0;
  auVar22 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  dVar3 = (param_1->AxisZ).field0_0x0._s_0.Z;
  auVar29 = blendpd(auVar42,auVar32,2);
  auVar40._8_4_ = SUB84(dVar58,0);
  auVar40._0_8_ = dVar24 * dVar20 + auVar26._0_8_ + auVar16._8_8_;
  auVar40._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->AxisY).field0_0x0 = auVar40;
  (__return_storage_ptr__->AxisY).field0_0x0._s_0.Z =
       auVar53._0_8_ * dVar20 + dVar19 + auVar29._0_8_;
  dVar58 = auVar12._8_8_;
  auVar26 = blendpd(auVar22,auVar9,2);
  auVar54._0_8_ = dVar58 * auVar22._0_8_ - auVar22._8_8_ * auVar12._0_8_;
  auVar54._8_8_ = dVar3 * auVar22._8_8_ - dVar56 * dVar58;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = dVar3;
  auVar22 = blendpd(auVar12,auVar2,2);
  auVar17._0_8_ = auVar22._0_8_ * dVar56 - auVar26._0_8_ * dVar3;
  auVar17._8_8_ = auVar22._8_8_ * dVar20 - auVar26._8_8_ * 0.0;
  auVar22 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar26 = blendpd(auVar54,auVar17,2);
  auVar55._0_8_ = auVar26._0_8_ + auVar26._0_8_;
  auVar55._8_8_ = auVar26._8_8_ + auVar26._8_8_;
  dVar19 = auVar54._8_8_ + auVar54._8_8_;
  dVar24 = auVar17._0_8_ + auVar17._0_8_;
  uVar45 = (undefined4)((ulonglong)dVar24 >> 0x20);
  auVar43._8_4_ = SUB84(dVar24,0);
  auVar43._0_8_ = dVar19;
  auVar43._12_4_ = uVar45;
  auVar33._8_4_ = SUB84(dVar24,0);
  auVar33._0_8_ = dVar19;
  auVar33._12_4_ = uVar45;
  auVar26 = blendpd(auVar33,auVar55,2);
  auVar44._0_8_ = auVar43._8_8_ * auVar22._0_8_ - auVar22._8_8_ * dVar19;
  auVar44._8_8_ = auVar55._0_8_ * auVar22._8_8_ - dVar56 * dVar24;
  auVar18._8_4_ = SUB84(auVar44._8_8_,0);
  auVar18._0_8_ = auVar44._0_8_;
  auVar18._12_4_ = (int)((ulonglong)auVar44._8_8_ >> 0x20);
  auVar9 = blendpd(auVar22,auVar9,2);
  auVar34._0_8_ = auVar26._0_8_ * dVar56 - auVar9._0_8_ * auVar55._0_8_;
  auVar34._8_8_ = auVar26._8_8_ * dVar20 - auVar9._8_8_ * auVar55._8_8_;
  auVar22 = blendpd(auVar44,auVar34,2);
  dVar24 = dVar24 * dVar20 + dVar58 + auVar34._0_8_;
  auVar9._8_4_ = SUB84(dVar24,0);
  auVar9._0_8_ = dVar19 * dVar20 + auVar12._0_8_ + auVar18._8_8_;
  auVar9._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->AxisZ).field0_0x0 = auVar9;
  (__return_storage_ptr__->AxisZ).field0_0x0._s_0.Z = auVar55._0_8_ * dVar20 + dVar3 + auVar22._0_8_
  ;
  return __return_storage_ptr__;
}

// MakeOrientedBoxFromBox @ 14cebf8f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FOrientedBox * __cdecl
UGeometryScriptLibrary_OrientedBoxFunctions::MakeOrientedBoxFromBox
          (FOrientedBox *__return_storage_ptr__,TBox<double> *param_1,TTransform<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  TVector<double> *pTVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined4 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar44;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar45;
  double dVar46;
  uint uVar47;
  uint uVar48;
  TVector<double>_u_0 local_98 [6];
  
  dVar6 = __real_3fe0000000000000;
  dVar1 = (param_1->Min).field0_0x0._s_0.Y;
  dVar7 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar45 = (param_2->Scale3D).XY.m128d_f64[0];
  dVar46 = (param_2->Scale3D).XY.m128d_f64[1];
  dVar2 = (param_1->Max).field0_0x0._s_0.Y;
  dVar3 = (param_1->Max).field0_0x0._s_0.Z;
  dVar4 = (param_1->Min).field0_0x0._s_0.Z;
  dVar44 = ((param_1->Max).field0_0x0._s_0.X - (param_1->Min).field0_0x0._s_0.X) *
           __real_3fe0000000000000;
  (__return_storage_ptr__->AxisZ).field0_0x0._s_0.X = 0.0;
  dVar5 = (dVar2 - dVar1) * dVar6;
  (__return_storage_ptr__->AxisZ).field0_0x0._s_0.Y = 0.0;
  dVar6 = (dVar3 - dVar4) * dVar6;
  (__return_storage_ptr__->AxisZ).field0_0x0._s_0.Z = 1.0;
  auVar21 = ___xmm_00000000000000003ff0000000000000;
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  auVar13 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar30 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  dVar45 = dVar45 * (dVar44 + (param_1->Min).field0_0x0._s_0.X);
  dVar46 = dVar46 * (dVar5 + dVar1);
  auVar36._8_4_ = SUB84(dVar46,0);
  auVar36._0_8_ = dVar45;
  uVar35 = (undefined4)((ulonglong)dVar46 >> 0x20);
  auVar36._12_4_ = uVar35;
  dVar4 = (dVar6 + (param_1->Min).field0_0x0._s_0.Z) * (param_2->Scale3D).ZW.m128d_f64[0];
  dVar2 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar19 = blendpd(auVar13,auVar30,2);
  dVar1 = auVar30._0_8_;
  auVar37._0_8_ = auVar36._8_8_ * auVar13._0_8_ - auVar13._8_8_ * dVar45;
  auVar37._8_8_ = dVar4 * auVar13._8_8_ - dVar1 * dVar46;
  auVar20._8_4_ = SUB84(dVar46,0);
  auVar20._0_8_ = dVar45;
  auVar20._12_4_ = uVar35;
  auVar38._8_4_ = SUB84(dVar2,0);
  auVar38._0_8_ = dVar4;
  auVar38._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar13 = blendpd(auVar20,auVar38,2);
  auVar14._0_8_ = auVar13._0_8_ * dVar1 - auVar19._0_8_ * dVar4;
  auVar14._8_8_ = auVar13._8_8_ * auVar30._8_8_ - auVar19._8_8_ * dVar2;
  auVar13 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  dVar2 = auVar37._8_8_ + auVar37._8_8_;
  dVar3 = auVar14._0_8_ + auVar14._0_8_;
  uVar35 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar38 = blendpd(auVar37,auVar14,2);
  auVar28._8_4_ = SUB84(dVar3,0);
  auVar28._0_8_ = dVar2;
  auVar28._12_4_ = uVar35;
  auVar22._8_4_ = SUB84(dVar3,0);
  auVar22._0_8_ = dVar2;
  auVar22._12_4_ = uVar35;
  auVar39._0_8_ = auVar38._0_8_ + auVar38._0_8_;
  auVar39._8_8_ = auVar38._8_8_ + auVar38._8_8_;
  auVar38 = blendpd(auVar22,auVar39,2);
  auVar29._0_8_ = auVar28._8_8_ * auVar13._0_8_ - auVar13._8_8_ * dVar2;
  auVar29._8_8_ = auVar39._0_8_ * auVar13._8_8_ - dVar1 * dVar3;
  auVar13 = blendpd(auVar13,auVar30,2);
  auVar19._8_4_ = SUB84(auVar29._8_8_,0);
  auVar19._0_8_ = auVar29._0_8_;
  auVar19._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
  auVar23._0_8_ = auVar38._0_8_ * dVar1 - auVar13._0_8_ * auVar39._0_8_;
  auVar23._8_8_ = auVar38._8_8_ * auVar30._8_8_ - auVar13._8_8_ * auVar39._8_8_;
  dVar3 = dVar3 * dVar7 + dVar46 + auVar23._0_8_ + (param_2->Translation).XY.m128d_f64[1];
  dVar46 = (param_2->Scale3D).XY.m128d_f64[0];
  dVar8 = (param_2->Scale3D).XY.m128d_f64[1];
  dVar9 = (param_2->Rotation).ZW.m128d_f64[1];
  auVar30 = blendpd(auVar29,auVar23,2);
  dVar6 = dVar6 * (param_2->Scale3D).ZW.m128d_f64[0];
  dVar1 = (param_2->Translation).ZW.m128d_f64[0];
  uVar47 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar48 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  auVar13._8_4_ = SUB84(dVar3,0);
  auVar13._0_8_ = dVar2 * dVar7 + dVar45 + auVar19._8_8_ + (param_2->Translation).XY.m128d_f64[0];
  auVar13._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->Center).field0_0x0 = auVar13;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Z =
       auVar39._0_8_ * dVar7 + dVar4 + auVar30._0_8_ + dVar1;
  dVar44 = dVar44 * dVar46;
  dVar5 = dVar5 * dVar8;
  auVar13 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  __return_storage_ptr__->ExtentX =
       (double)CONCAT44((uint)((ulonglong)dVar44 >> 0x20) & uVar11,SUB84(dVar44,0) & uVar10);
  dVar44 = auVar21._8_8_;
  auVar30 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  dVar1 = auVar13._0_8_;
  auVar20 = blendpd(auVar30,auVar13,2);
  auVar40._0_8_ = dVar44 * auVar30._0_8_ - auVar30._8_8_ * auVar21._0_8_;
  auVar40._8_8_ = auVar30._8_8_ * 0.0 - dVar1 * dVar44;
  __return_storage_ptr__->ExtentY =
       (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) & uVar11,SUB84(dVar5,0) & uVar10);
  __return_storage_ptr__->ExtentZ = (double)CONCAT44(uVar48,uVar47);
  auVar38 = ___xmm_3ff00000000000000000000000000000;
  auVar30 = blendpd(auVar21,ZEXT816(0),2);
  dVar2 = auVar13._8_8_;
  local_98[0]._s_0.Z = 0.0;
  auVar15._0_8_ = auVar30._0_8_ * dVar1 - auVar20._0_8_ * 0.0;
  auVar15._8_8_ = auVar30._8_8_ * dVar2 - auVar20._8_8_ * 0.0;
  auVar30 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar20 = blendpd(auVar40,auVar15,2);
  auVar41._0_8_ = auVar20._0_8_ + auVar20._0_8_;
  auVar41._8_8_ = auVar20._8_8_ + auVar20._8_8_;
  dVar3 = auVar40._8_8_ + auVar40._8_8_;
  dVar4 = auVar15._0_8_ + auVar15._0_8_;
  uVar35 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar31._8_4_ = SUB84(dVar4,0);
  auVar31._0_8_ = dVar3;
  auVar31._12_4_ = uVar35;
  auVar24._8_4_ = SUB84(dVar4,0);
  auVar24._0_8_ = dVar3;
  auVar24._12_4_ = uVar35;
  auVar20 = blendpd(auVar24,auVar41,2);
  auVar32._0_8_ = auVar31._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar3;
  auVar32._8_8_ = auVar41._0_8_ * auVar30._8_8_ - dVar1 * dVar4;
  auVar30 = blendpd(auVar30,auVar13,2);
  auVar16._8_4_ = SUB84(auVar32._8_8_,0);
  auVar16._0_8_ = auVar32._0_8_;
  auVar16._12_4_ = (int)((ulonglong)auVar32._8_8_ >> 0x20);
  auVar25._0_8_ = auVar20._0_8_ * dVar1 - auVar30._0_8_ * auVar41._0_8_;
  auVar25._8_8_ = auVar20._8_8_ * dVar2 - auVar30._8_8_ * auVar41._8_8_;
  dVar4 = dVar4 * dVar9 + dVar44 + auVar25._0_8_;
  local_98[0]._0_16_ = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar20 = blendpd(auVar32,auVar25,2);
  auVar30._8_4_ = SUB84(dVar4,0);
  auVar30._0_8_ = dVar3 * dVar9 + auVar21._0_8_ + auVar16._8_8_;
  auVar30._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->AxisX).field0_0x0 = auVar30;
  (__return_storage_ptr__->AxisX).field0_0x0._s_0.Z = auVar41._0_8_ * dVar9 + auVar20._0_8_;
  dVar44 = auVar38._8_8_;
  auVar21 = blendpd(local_98[0]._0_16_,auVar13,2);
  auVar42._0_8_ = dVar44 * local_98[0]._0_8_ - local_98[0]._8_8_ * auVar38._0_8_;
  auVar42._8_8_ = local_98[0]._8_8_ * 0.0 - dVar1 * dVar44;
  auVar30 = blendpd(auVar38,ZEXT816(0),2);
  auVar17._0_8_ = auVar30._0_8_ * dVar1 - auVar21._0_8_ * 0.0;
  auVar17._8_8_ = auVar30._8_8_ * dVar2 - auVar21._8_8_ * 0.0;
  auVar30 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar21 = blendpd(auVar42,auVar17,2);
  dVar3 = auVar42._8_8_ + auVar42._8_8_;
  dVar4 = auVar17._0_8_ + auVar17._0_8_;
  uVar35 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar43._0_8_ = auVar21._0_8_ + auVar21._0_8_;
  auVar43._8_8_ = auVar21._8_8_ + auVar21._8_8_;
  auVar33._8_4_ = SUB84(dVar4,0);
  auVar33._0_8_ = dVar3;
  auVar33._12_4_ = uVar35;
  auVar26._8_4_ = SUB84(dVar4,0);
  auVar26._0_8_ = dVar3;
  auVar26._12_4_ = uVar35;
  auVar21 = blendpd(auVar26,auVar43,2);
  auVar34._0_8_ = auVar33._8_8_ * auVar30._0_8_ - auVar30._8_8_ * dVar3;
  auVar34._8_8_ = auVar43._0_8_ * auVar30._8_8_ - dVar1 * dVar4;
  auVar13 = blendpd(auVar30,auVar13,2);
  auVar18._8_4_ = SUB84(auVar34._8_8_,0);
  auVar18._0_8_ = auVar34._0_8_;
  auVar18._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
  auVar27._0_8_ = auVar21._0_8_ * dVar1 - auVar13._0_8_ * auVar43._0_8_;
  auVar27._8_8_ = auVar21._8_8_ * dVar2 - auVar13._8_8_ * auVar43._8_8_;
  auVar13 = blendpd(auVar34,auVar27,2);
  dVar1 = dVar4 * dVar2 + dVar44 + auVar27._0_8_;
  auVar21._8_4_ = SUB84(dVar1,0);
  auVar21._0_8_ = dVar3 * dVar2 + auVar38._0_8_ + auVar18._8_8_;
  auVar21._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->AxisY).field0_0x0 = auVar21;
  (__return_storage_ptr__->AxisY).field0_0x0._s_0.Z = auVar43._0_8_ * dVar2 + auVar13._0_8_;
  pTVar12 = UE::Math::TTransform<double>::GetUnitAxis
                      (param_2,(TVector<double> *)&local_98[0]._s_0,Z);
  dVar1 = (pTVar12->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->AxisZ).field0_0x0._s_0.X = (pTVar12->field0_0x0)._s_0.X;
  (__return_storage_ptr__->AxisZ).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->AxisZ).field0_0x0._s_0.Z = (pTVar12->field0_0x0)._s_0.Z;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUGeometryScriptLibrary_OrientedBoxFunctions @ 14cec2700

void __cdecl
UGeometryScriptLibrary_OrientedBoxFunctions::
StaticRegisterNativesUGeometryScriptLibrary_OrientedBoxFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_OrientedBoxFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TestBoxOrientedBoxIntersection @ 14cec2b20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UGeometryScriptLibrary_OrientedBoxFunctions::TestBoxOrientedBoxIntersection
          (TBox<double> *param_1,FOrientedBox *param_2)

{
  bool bVar1;
  TVector<double>_u_0 local_88;
  double dStack_70;
  double dStack_68;
  double local_60;
  TOrientedBox3<double> local_58;
  
  UE::Geometry::TOrientedBox3<double>::TOrientedBox3<double>(&local_58,param_2);
  if (param_1->IsValid == '\0') {
    local_88._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
    local_88._s_0.Y = _UNK_150a9e648;
    dStack_68 = ___xmm_ffefffffffffffffffefffffffffffff;
    local_60 = _UNK_1508ffb58;
    local_88._s_0.Z = ___xmm_ffefffffffffffff7fefffffffffffff;
    dStack_70 = _UNK_150a9e6d8;
  }
  else {
    local_88._s_0.X = (param_1->Min).field0_0x0._s_0.X;
    local_88._s_0.Y = (param_1->Min).field0_0x0._s_0.Y;
    local_88._s_0.Z = (param_1->Min).field0_0x0._s_0.Z;
    dStack_70 = (param_1->Max).field0_0x0._s_0.X;
    dStack_68 = (param_1->Max).field0_0x0._s_0.Y;
    local_60 = (param_1->Max).field0_0x0._s_0.Z;
  }
  bVar1 = UE::Geometry::TOrientedBox3<double>::Intersects
                    (&local_58,(TAxisAlignedBox3<double> *)&local_88._s_0,__real_3e45798ee2308c3a);
  return bVar1;
}

// TestOrientedBoxOrientedBoxIntersection @ 14cec2c50

bool __cdecl
UGeometryScriptLibrary_OrientedBoxFunctions::TestOrientedBoxOrientedBoxIntersection
          (FOrientedBox *param_1,FOrientedBox *param_2)

{
  bool bVar1;
  TOrientedBox3<double> local_a8;
  TOrientedBox3<double> local_58;
  
  UE::Geometry::TOrientedBox3<double>::TOrientedBox3<double>(&local_58,param_1);
  UE::Geometry::TOrientedBox3<double>::TOrientedBox3<double>(&local_a8,param_2);
  bVar1 = UE::Geometry::TOrientedBox3<double>::Intersects
                    (&local_58,&local_a8,__real_3e45798ee2308c3a);
  return bVar1;
}

// TestPointInsideOrOnOrientedBox @ 14cec2d20

bool __cdecl
UGeometryScriptLibrary_OrientedBoxFunctions::TestPointInsideOrOnOrientedBox
          (FOrientedBox *param_1,TVector<double> *param_2)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  TVector<double>_u_0 local_88;
  TVector<double> local_70;
  TVector<double>_u_0 local_58;
  TQuaternion<double> local_40;
  double local_20;
  double local_18;
  double local_10;
  
  UE::Geometry::TOrientedBox3<double>::TOrientedBox3<double>
            ((TOrientedBox3<double> *)&local_58._s_0,param_1);
  dVar1 = (param_2->field0_0x0)._s_0.Y - local_58._s_0.Y;
  local_88._8_4_ = SUB84(dVar1,0);
  local_88._0_8_ = (param_2->field0_0x0)._s_0.X - local_58._s_0.X;
  local_88._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_88._s_0.Z = (param_2->field0_0x0)._s_0.Z - local_58._s_0.Z;
  UE::Geometry::TQuaternion<double>::InverseMultiply
            (&local_40,&local_70,(TVector<double> *)&local_88._s_0);
  uVar2 = SUB84(local_70.field0_0x0._s_0.X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar3 = (uint)((ulonglong)local_70.field0_0x0._0_8_ >> 0x20) &
          __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((((double)CONCAT44(uVar3,uVar2) < local_20 || (double)CONCAT44(uVar3,uVar2) == local_20) &&
      (uVar2 = SUB84(local_70.field0_0x0._s_0.Y,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar3 = (uint)((ulonglong)local_70.field0_0x0._8_8_ >> 0x20) &
              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      (double)CONCAT44(uVar3,uVar2) < local_18 || (double)CONCAT44(uVar3,uVar2) == local_18)) &&
     (uVar2 = SUB84(local_70.field0_0x0._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar3 = (uint)((ulonglong)local_70.field0_0x0._16_8_ >> 0x20) &
             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     (double)CONCAT44(uVar3,uVar2) < local_10 || (double)CONCAT44(uVar3,uVar2) == local_10)) {
    return true;
  }
  return false;
}

// execConvertOrientedBoxToAxisAlignedBox @ 14cec7610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_OrientedBoxFunctions::execConvertOrientedBoxToAxisAlignedBox
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TBox<double> *pTVar3;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  TVector<double>_u_0 local_c8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  TBox<double> local_48;
  
  local_148 = 0.0;
  dStack_140 = 0.0;
  local_128 = 0;
  uStack_120 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_e8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_e0 = _UNK_150689688;
  local_d8 = __real_3ff0000000000000;
  local_138 = ___xmm_3ff00000000000000000000000000000;
  uStack_130 = _UNK_15061cbc8;
  local_118 = ___xmm_3ff00000000000000000000000000000;
  uStack_110 = _UNK_15061cbc8;
  local_f8 = ___xmm_3ff00000000000000000000000000000;
  uStack_f0 = _UNK_15061cbc8;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_c8._s_0.X = local_148;
  local_c8._s_0.Y = dStack_140;
  local_c8._s_0.Z = local_138;
  uStack_b0 = uStack_130;
  local_a8 = local_128;
  uStack_a0 = uStack_120;
  local_98 = local_118;
  uStack_90 = uStack_110;
  local_88 = local_108;
  uStack_80 = uStack_100;
  local_78 = local_f8;
  uStack_70 = uStack_f0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68 = local_e8;
  uStack_60 = uStack_e0;
  local_58 = local_d8;
  pTVar3 = ConvertOrientedBoxToAxisAlignedBox(&local_48,(FOrientedBox *)&local_c8._s_0);
  dVar2 = (pTVar3->Min).field0_0x0._s_0.Y;
  *(double *)param_3 = (pTVar3->Min).field0_0x0._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar2;
  dVar2 = (pTVar3->Max).field0_0x0._s_0.X;
  *(double *)((longlong)param_3 + 0x10) = (pTVar3->Min).field0_0x0._s_0.Z;
  *(double *)((longlong)param_3 + 0x18) = dVar2;
  dVar2 = (pTVar3->Max).field0_0x0._s_0.Z;
  *(double *)((longlong)param_3 + 0x20) = (pTVar3->Max).field0_0x0._s_0.Y;
  *(double *)((longlong)param_3 + 0x28) = dVar2;
  *(undefined8 *)((longlong)param_3 + 0x30) = *(undefined8 *)&pTVar3->IsValid;
  return;
}

// execFindClosestPointOnOrientedBox @ 14cecb1b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_OrientedBoxFunctions::execFindClosestPointOnOrientedBox
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TVector<double> *pTVar3;
  bool *pbVar4;
  bool local_res10 [8];
  double local_168;
  double dStack_160;
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_a8;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  TVector<double> local_28;
  
  local_148 = 0.0;
  dStack_140 = 0.0;
  local_128 = 0;
  uStack_120 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_e8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_e0 = _UNK_150689688;
  local_d8 = __real_3ff0000000000000;
  local_138 = ___xmm_3ff00000000000000000000000000000;
  uStack_130 = _UNK_15061cbc8;
  local_118 = ___xmm_3ff00000000000000000000000000000;
  uStack_110 = _UNK_15061cbc8;
  local_f8 = ___xmm_3ff00000000000000000000000000000;
  uStack_f0 = _UNK_15061cbc8;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_168);
  }
  local_res10[0] = false;
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
  local_c8._s_0.X = local_168;
  local_c8._s_0.Y = dStack_160;
  pbVar4 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar4 = (bool *)param_2->MostRecentPropertyAddress;
  }
  local_c8._s_0.Z = local_158;
  local_a8._s_0.X = local_148;
  local_a8._s_0.Y = dStack_140;
  local_a8._s_0.Z = local_138;
  uStack_90 = uStack_130;
  local_88 = local_128;
  uStack_80 = uStack_120;
  local_78 = local_118;
  uStack_70 = uStack_110;
  local_68 = local_108;
  uStack_60 = uStack_100;
  local_58 = local_f8;
  uStack_50 = uStack_f0;
  local_48 = local_e8;
  uStack_40 = uStack_e0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = local_d8;
  pTVar3 = FindClosestPointOnOrientedBox
                     (&local_28,(FOrientedBox *)&local_a8._s_0,(TVector<double> *)&local_c8._s_0,
                      pbVar4);
  dVar2 = (pTVar3->field0_0x0)._s_0.Y;
  *(double *)param_3 = (pTVar3->field0_0x0)._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar2;
  *(double *)((longlong)param_3 + 0x10) = (pTVar3->field0_0x0)._s_0.Z;
  return;
}

// execGetExpandedOrientedBox @ 14cecc500

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_OrientedBoxFunctions::execGetExpandedOrientedBox
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double local_res10;
  double local_198;
  double local_190;
  double local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  
  local_178 = 0;
  uStack_170 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_118 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_110 = _UNK_150689688;
  local_108 = __real_3ff0000000000000;
  local_168 = ___xmm_3ff00000000000000000000000000000;
  uStack_160 = _UNK_15061cbc8;
  local_148 = ___xmm_3ff00000000000000000000000000000;
  uStack_140 = _UNK_15061cbc8;
  local_128 = ___xmm_3ff00000000000000000000000000000;
  uStack_120 = _UNK_15061cbc8;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_178,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_178);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
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
  if (local_res10 <= 0.0) {
    local_res10 = 0.0;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  dVar4 = local_198 + local_118;
  if (local_198 + local_118 <= local_res10) {
    dVar4 = local_res10;
  }
  *(undefined8 *)param_3 = local_178;
  *(undefined8 *)((longlong)param_3 + 8) = uStack_170;
  dVar3 = local_188 + local_108;
  if (local_188 + local_108 <= local_res10) {
    dVar3 = local_res10;
  }
  *(undefined8 *)((longlong)param_3 + 0x10) = local_168;
  *(undefined8 *)((longlong)param_3 + 0x18) = uStack_160;
  *(undefined8 *)((longlong)param_3 + 0x20) = local_158;
  *(undefined8 *)((longlong)param_3 + 0x28) = uStack_150;
  *(undefined8 *)((longlong)param_3 + 0x30) = local_148;
  *(undefined8 *)((longlong)param_3 + 0x38) = uStack_140;
  *(undefined8 *)((longlong)param_3 + 0x40) = local_138;
  *(undefined8 *)((longlong)param_3 + 0x48) = uStack_130;
  *(undefined8 *)((longlong)param_3 + 0x50) = local_128;
  *(undefined8 *)((longlong)param_3 + 0x58) = uStack_120;
  dVar2 = local_190 + dStack_110;
  if (local_190 + dStack_110 <= local_res10) {
    dVar2 = local_res10;
  }
  *(double *)((longlong)param_3 + 0x60) = dVar4;
  *(double *)((longlong)param_3 + 0x68) = dVar2;
  *(double *)((longlong)param_3 + 0x70) = dVar3;
  return;
}

// execGetOrientedBoxCorner @ 14ceccbf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_OrientedBoxFunctions::execGetOrientedBoxCorner
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int local_res10 [2];
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  
  uVar4 = SUB84(__real_3ff0000000000000,0);
  uVar6 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  local_c8 = 0.0;
  dStack_c0 = 0.0;
  local_a8 = 0.0;
  dStack_a0 = 0.0;
  local_88 = 0.0;
  dStack_80 = 0.0;
  local_68 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_60 = _UNK_150689688;
  local_58 = __real_3ff0000000000000;
  local_b8 = ___xmm_3ff00000000000000000000000000000;
  dStack_b0 = _UNK_15061cbc8;
  local_98 = ___xmm_3ff00000000000000000000000000000;
  dStack_90 = _UNK_15061cbc8;
  local_78 = ___xmm_3ff00000000000000000000000000000;
  dStack_70 = _UNK_15061cbc8;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar2 = 7;
  if (local_res10[0] < 7) {
    iVar2 = local_res10[0];
  }
  iVar3 = 0;
  if (0 < iVar2) {
    iVar3 = iVar2;
  }
  uVar10 = (undefined4)__real_bff0000000000000;
  uVar11 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  uVar5 = uVar4;
  uVar7 = uVar6;
  uVar8 = uVar4;
  uVar9 = uVar6;
  switch(iVar3) {
  default:
    uVar5 = uVar10;
    uVar7 = uVar11;
    uVar8 = uVar10;
    uVar9 = uVar11;
    break;
  case 1:
    uVar8 = uVar10;
    uVar9 = uVar11;
    break;
  case 2:
    uVar5 = uVar10;
    uVar7 = uVar11;
    uVar8 = uVar10;
    uVar9 = uVar11;
    uVar10 = uVar4;
    uVar11 = uVar6;
    break;
  case 3:
    uVar5 = uVar10;
    uVar7 = uVar11;
    break;
  case 4:
    uVar5 = uVar10;
    uVar7 = uVar11;
    uVar10 = uVar4;
    uVar11 = uVar6;
    break;
  case 5:
    break;
  case 6:
    uVar8 = uVar10;
    uVar9 = uVar11;
    uVar10 = uVar4;
    uVar11 = uVar6;
    break;
  case 7:
    uVar10 = uVar4;
    uVar11 = uVar6;
  }
  *(double *)param_3 =
       dStack_b0 * local_68 * (double)CONCAT44(uVar9,uVar8) + local_c8 +
       local_98 * dStack_60 * (double)CONCAT44(uVar11,uVar10) +
       dStack_80 * local_58 * (double)CONCAT44(uVar7,uVar5);
  *(double *)((longlong)param_3 + 8) =
       local_a8 * local_68 * (double)CONCAT44(uVar9,uVar8) + dStack_c0 +
       dStack_90 * dStack_60 * (double)CONCAT44(uVar11,uVar10) +
       local_78 * local_58 * (double)CONCAT44(uVar7,uVar5);
  *(double *)((longlong)param_3 + 0x10) =
       dStack_a0 * local_68 * (double)CONCAT44(uVar9,uVar8) + local_b8 +
       local_88 * dStack_60 * (double)CONCAT44(uVar11,uVar10) +
       dStack_70 * local_58 * (double)CONCAT44(uVar7,uVar5);
  return;
}

// execGetOrientedBoxFaceCenter @ 14cecceb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_OrientedBoxFunctions::execGetOrientedBoxFaceCenter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TVector<double> *pTVar3;
  int local_res10 [2];
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  TVector<double> local_c8;
  TVector<double>_u_0 local_a8;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  TVector<double> local_28;
  
  local_148 = 0.0;
  dStack_140 = 0.0;
  local_128 = 0;
  uStack_120 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_e8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_e0 = _UNK_150689688;
  local_d8 = __real_3ff0000000000000;
  local_138 = ___xmm_3ff00000000000000000000000000000;
  uStack_130 = _UNK_15061cbc8;
  local_118 = ___xmm_3ff00000000000000000000000000000;
  uStack_110 = _UNK_15061cbc8;
  local_f8 = ___xmm_3ff00000000000000000000000000000;
  uStack_f0 = _UNK_15061cbc8;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_a8._s_0.X = local_148;
  local_a8._s_0.Y = dStack_140;
  pTVar3 = &local_c8;
  if ((TVector<double> *)param_2->MostRecentPropertyAddress != (TVector<double> *)0x0) {
    pTVar3 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  }
  local_a8._s_0.Z = local_138;
  uStack_90 = uStack_130;
  local_88 = local_128;
  uStack_80 = uStack_120;
  local_78 = local_118;
  uStack_70 = uStack_110;
  local_68 = local_108;
  uStack_60 = uStack_100;
  local_58 = local_f8;
  uStack_50 = uStack_f0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48 = local_e8;
  uStack_40 = uStack_e0;
  local_38 = local_d8;
  pTVar3 = GetOrientedBoxFaceCenter(&local_28,(FOrientedBox *)&local_a8._s_0,local_res10[0],pTVar3);
  dVar2 = (pTVar3->field0_0x0)._s_0.Y;
  *(double *)param_3 = (pTVar3->field0_0x0)._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar2;
  *(double *)((longlong)param_3 + 0x10) = (pTVar3->field0_0x0)._s_0.Z;
  return;
}

// execGetOrientedBoxOrientation @ 14cecd070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_OrientedBoxFunctions::execGetOrientedBoxOrientation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TQuaternion<double>_u_0 local_138;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  double dStack_e0;
  undefined8 local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  TQuat<double> local_98;
  TVector<double>_u_0 local_78;
  undefined8 local_60;
  double local_58;
  double local_50;
  undefined8 local_48;
  undefined8 local_40;
  double local_38;
  TRotator<double> local_30;
  
  dVar2 = __real_3ff0000000000000;
  local_118 = 0;
  uStack_110 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_d8 = 0;
  dStack_d0 = 0.0;
  local_b8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_b0 = _UNK_150689688;
  local_a8 = __real_3ff0000000000000;
  local_108 = ___xmm_3ff00000000000000000000000000000;
  dStack_100 = _UNK_15061cbc8;
  local_e8 = ___xmm_3ff00000000000000000000000000000;
  dStack_e0 = _UNK_15061cbc8;
  local_c8 = ___xmm_3ff00000000000000000000000000000;
  dStack_c0 = _UNK_15061cbc8;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  local_78._s_0.X = dStack_100;
  local_78._s_0.Y = local_e8;
  local_78._s_0.Z = dStack_d0;
  local_60 = local_f8;
  local_58 = dStack_e0;
  local_50 = local_c8;
  local_48 = uStack_f0;
  local_40 = local_d8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = dStack_c0;
  local_138._s_0.X = 0.0;
  local_138._s_0.Y = 0.0;
  local_138._s_0.Z = 0.0;
  local_138._s_0.W = dVar2;
  UE::Geometry::TQuaternion<double>::SetFromRotationMatrix
            ((TQuaternion<double> *)&local_138._s_0,(TMatrix3<double> *)&local_78._s_0);
  local_98.X = local_138._s_0.X;
  local_98.Y = local_138._s_0.Y;
  local_98.Z = local_138._s_0.Z;
  local_98.W = local_138._s_0.W;
  UE::Math::TRotator<double>::TRotator<double>(&local_30,&local_98);
  *(double *)param_3 = local_30.Pitch;
  *(double *)((longlong)param_3 + 8) = local_30.Yaw;
  *(double *)((longlong)param_3 + 0x10) = local_30.Roll;
  return;
}

// execGetOrientedBoxVolumeArea @ 14cecd1f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_OrientedBoxFunctions::execGetOrientedBoxVolumeArea
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double *pdVar2;
  double *pdVar3;
  double local_res10;
  double local_res20;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  
  local_98 = 0;
  uStack_90 = 0;
  local_88 = ___xmm_3ff00000000000000000000000000000;
  uStack_80 = _UNK_15061cbc8;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_30 = _UNK_150689688;
  local_28 = __real_3ff0000000000000;
  local_68 = ___xmm_3ff00000000000000000000000000000;
  uStack_60 = _UNK_15061cbc8;
  local_48 = ___xmm_3ff00000000000000000000000000000;
  uStack_40 = _UNK_15061cbc8;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
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
  pdVar2 = (double *)param_2->MostRecentPropertyAddress;
  local_res20 = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pdVar3 = &local_res10;
  if (pdVar2 != (double *)0x0) {
    pdVar3 = pdVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_38 = local_38 + local_38;
  dStack_30 = dStack_30 + dStack_30;
  local_28 = local_28 + local_28;
  pdVar2 = &local_res20;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar2 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *pdVar2 = (local_28 + dStack_30) * (local_38 + local_38) + (dStack_30 + dStack_30) * local_28;
  *pdVar3 = dStack_30 * local_38 * local_28;
  return;
}

// execGetTransformedOrientedBox @ 14ced1e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_OrientedBoxFunctions::execGetTransformedOrientedBox
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  FOrientedBox *pFVar3;
  undefined1 auStack_278 [32];
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  TVector<double>_u_0 local_1d8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  TTransform<double> local_158;
  FOrientedBox local_f8;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_278;
  local_258 = 0.0;
  dStack_250 = 0.0;
  local_238 = 0;
  uStack_230 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_1f8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_1f0 = _UNK_150689688;
  local_1e8 = __real_3ff0000000000000;
  local_248 = ___xmm_3ff00000000000000000000000000000;
  uStack_240 = _UNK_15061cbc8;
  local_228 = ___xmm_3ff00000000000000000000000000000;
  uStack_220 = _UNK_15061cbc8;
  local_208 = ___xmm_3ff00000000000000000000000000000;
  uStack_200 = _UNK_15061cbc8;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_258,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_258);
  }
  local_78 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_70 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_68 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_60 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_58 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  dStack_50 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_48 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_40 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_38 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  dStack_30 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_28 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_20 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_158.Rotation.XY.m128d_f64[0] = local_78;
  local_158.Rotation.XY.m128d_f64[1] = dStack_70;
  local_158.Rotation.ZW.m128d_f64[0] = local_68;
  local_158.Rotation.ZW.m128d_f64[1] = dStack_60;
  local_158.Translation.XY.m128d_f64[0] = local_58;
  local_158.Translation.XY.m128d_f64[1] = dStack_50;
  local_158.Translation.ZW.m128d_f64[0] = local_48;
  local_158.Translation.ZW.m128d_f64[1] = dStack_40;
  local_158.Scale3D.XY.m128d_f64[0] = local_38;
  local_158.Scale3D.XY.m128d_f64[1] = dStack_30;
  local_158.Scale3D.ZW.m128d_f64[0] = local_28;
  local_158.Scale3D.ZW.m128d_f64[1] = dStack_20;
  local_1d8._s_0.X = local_258;
  local_1d8._s_0.Y = dStack_250;
  local_1d8._s_0.Z = local_248;
  uStack_1c0 = uStack_240;
  local_1b8 = local_238;
  uStack_1b0 = uStack_230;
  local_1a8 = local_228;
  uStack_1a0 = uStack_220;
  local_198 = local_218;
  uStack_190 = uStack_210;
  local_188 = local_208;
  uStack_180 = uStack_200;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_178 = local_1f8;
  uStack_170 = uStack_1f0;
  local_168 = local_1e8;
  pFVar3 = GetTransformedOrientedBox(&local_f8,(FOrientedBox *)&local_1d8._s_0,&local_158);
  dVar2 = (pFVar3->Center).field0_0x0._s_0.Y;
  *(double *)param_3 = (pFVar3->Center).field0_0x0._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar2;
  dVar2 = (pFVar3->AxisX).field0_0x0._s_0.X;
  *(double *)((longlong)param_3 + 0x10) = (pFVar3->Center).field0_0x0._s_0.Z;
  *(double *)((longlong)param_3 + 0x18) = dVar2;
  dVar2 = (pFVar3->AxisX).field0_0x0._s_0.Z;
  *(double *)((longlong)param_3 + 0x20) = (pFVar3->AxisX).field0_0x0._s_0.Y;
  *(double *)((longlong)param_3 + 0x28) = dVar2;
  dVar2 = (pFVar3->AxisY).field0_0x0._s_0.Y;
  *(double *)((longlong)param_3 + 0x30) = (pFVar3->AxisY).field0_0x0._s_0.X;
  *(double *)((longlong)param_3 + 0x38) = dVar2;
  dVar2 = (pFVar3->AxisZ).field0_0x0._s_0.X;
  *(double *)((longlong)param_3 + 0x40) = (pFVar3->AxisY).field0_0x0._s_0.Z;
  *(double *)((longlong)param_3 + 0x48) = dVar2;
  dVar2 = (pFVar3->AxisZ).field0_0x0._s_0.Z;
  *(double *)((longlong)param_3 + 0x50) = (pFVar3->AxisZ).field0_0x0._s_0.Y;
  *(double *)((longlong)param_3 + 0x58) = dVar2;
  dVar2 = pFVar3->ExtentY;
  *(double *)((longlong)param_3 + 0x60) = pFVar3->ExtentX;
  *(double *)((longlong)param_3 + 0x68) = dVar2;
  *(double *)((longlong)param_3 + 0x70) = pFVar3->ExtentZ;
  return;
}

// execMakeOrientedBoxFromBox @ 14ced2d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_OrientedBoxFunctions::execMakeOrientedBoxFromBox
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  FOrientedBox *pFVar3;
  undefined1 auStack_1e8 [32];
  TVector<double>_u_0 local_1c8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  TTransform<double> local_188;
  FOrientedBox local_128;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  double local_48;
  double dStack_40;
  double local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  undefined7 uStack_17;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  local_18 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_a8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_98._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_88._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_68._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  local_188.Rotation.XY.m128d_f64[0] = (double)local_a8._0_8_;
  local_188.Rotation.XY.m128d_f64[1] = (double)local_a8._8_8_;
  local_188.Rotation.ZW.m128d_f64[0] = (double)local_98._0_8_;
  local_188.Rotation.ZW.m128d_f64[1] = (double)local_98._8_8_;
  local_188.Translation.XY.m128d_f64[0] = (double)local_88._0_8_;
  local_188.Translation.XY.m128d_f64[1] = (double)local_88._8_8_;
  local_188.Translation.ZW.m128d_f64[0] = (double)local_78._0_8_;
  local_188.Translation.ZW.m128d_f64[1] = (double)local_78._8_8_;
  local_188.Scale3D.XY.m128d_f64[0] = (double)local_68._0_8_;
  local_188.Scale3D.XY.m128d_f64[1] = (double)local_68._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_188.Scale3D.ZW.m128d_f64[0] = (double)local_58._0_8_;
  local_188.Scale3D.ZW.m128d_f64[1] = (double)local_58._8_8_;
  local_1c8._s_0.X = local_48;
  local_1c8._s_0.Y = dStack_40;
  local_1c8._s_0.Z = local_38;
  uStack_1b0 = uStack_30;
  local_198 = CONCAT71(uStack_17,local_18);
  local_1a8 = local_28;
  uStack_1a0 = uStack_20;
  pFVar3 = MakeOrientedBoxFromBox(&local_128,(TBox<double> *)&local_1c8._s_0,&local_188);
  dVar2 = (pFVar3->Center).field0_0x0._s_0.Y;
  *(double *)param_3 = (pFVar3->Center).field0_0x0._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar2;
  dVar2 = (pFVar3->AxisX).field0_0x0._s_0.X;
  *(double *)((longlong)param_3 + 0x10) = (pFVar3->Center).field0_0x0._s_0.Z;
  *(double *)((longlong)param_3 + 0x18) = dVar2;
  dVar2 = (pFVar3->AxisX).field0_0x0._s_0.Z;
  *(double *)((longlong)param_3 + 0x20) = (pFVar3->AxisX).field0_0x0._s_0.Y;
  *(double *)((longlong)param_3 + 0x28) = dVar2;
  dVar2 = (pFVar3->AxisY).field0_0x0._s_0.Y;
  *(double *)((longlong)param_3 + 0x30) = (pFVar3->AxisY).field0_0x0._s_0.X;
  *(double *)((longlong)param_3 + 0x38) = dVar2;
  dVar2 = (pFVar3->AxisZ).field0_0x0._s_0.X;
  *(double *)((longlong)param_3 + 0x40) = (pFVar3->AxisY).field0_0x0._s_0.Z;
  *(double *)((longlong)param_3 + 0x48) = dVar2;
  dVar2 = (pFVar3->AxisZ).field0_0x0._s_0.Z;
  *(double *)((longlong)param_3 + 0x50) = (pFVar3->AxisZ).field0_0x0._s_0.Y;
  *(double *)((longlong)param_3 + 0x58) = dVar2;
  dVar2 = pFVar3->ExtentY;
  *(double *)((longlong)param_3 + 0x60) = pFVar3->ExtentX;
  *(double *)((longlong)param_3 + 0x68) = dVar2;
  *(double *)((longlong)param_3 + 0x70) = pFVar3->ExtentZ;
  return;
}

// execTestBoxOrientedBoxIntersection @ 14ced8d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_OrientedBoxFunctions::execTestBoxOrientedBoxIntersection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  undefined1 auStack_258 [32];
  TVector<double>_u_0 local_238;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  double local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  TVector<double>_u_0 local_148;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  TOrientedBox3<double> local_c8;
  double local_78;
  double dStack_70;
  double local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined7 uStack_47;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_258;
  local_48 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_208 = 0.0;
  dStack_200 = 0.0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1a8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_1a0 = _UNK_150689688;
  local_198 = __real_3ff0000000000000;
  local_1f8 = ___xmm_3ff00000000000000000000000000000;
  uStack_1f0 = _UNK_15061cbc8;
  local_1d8 = ___xmm_3ff00000000000000000000000000000;
  uStack_1d0 = _UNK_15061cbc8;
  local_1b8 = ___xmm_3ff00000000000000000000000000000;
  uStack_1b0 = _UNK_15061cbc8;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_208,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_208);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_148._s_0.X = local_208;
  local_148._s_0.Y = dStack_200;
  local_128 = local_1e8;
  uStack_120 = uStack_1e0;
  local_148._s_0.Z = local_1f8;
  uStack_130 = uStack_1f0;
  local_108 = local_1c8;
  uStack_100 = uStack_1c0;
  local_118 = local_1d8;
  uStack_110 = uStack_1d0;
  local_e8 = local_1a8;
  uStack_e0 = uStack_1a0;
  local_158 = CONCAT71(uStack_47,local_48);
  local_f8 = local_1b8;
  uStack_f0 = uStack_1b0;
  local_d8 = local_198;
  local_178 = local_68;
  uStack_170 = uStack_60;
  local_168 = local_58;
  uStack_160 = uStack_50;
  UE::Geometry::TOrientedBox3<double>::TOrientedBox3<double>
            (&local_c8,(FOrientedBox *)&local_148._s_0);
  if ((char)local_158 == '\0') {
    local_238._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
    local_238._s_0.Y = _UNK_150a9e648;
    uStack_218 = ___xmm_ffefffffffffffffffefffffffffffff;
    local_210 = _UNK_1508ffb58;
    local_238._s_0.Z = ___xmm_ffefffffffffffff7fefffffffffffff;
    uStack_220 = _UNK_150a9e6d8;
  }
  else {
    uStack_220 = uStack_170;
    uStack_218 = local_168;
    local_238._s_0.X = local_78;
    local_238._s_0.Y = dStack_70;
    local_238._s_0.Z = local_68;
    local_210 = uStack_50;
  }
  bVar2 = UE::Geometry::TOrientedBox3<double>::Intersects
                    (&local_c8,(TAxisAlignedBox3<double> *)&local_238._s_0,__real_3e45798ee2308c3a);
  *(bool *)param_3 = bVar2;
  return;
}

// execTestOrientedBoxOrientedBoxIntersection @ 14ced9170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_OrientedBoxFunctions::execTestOrientedBoxOrientedBoxIntersection
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 uVar4;
  bool bVar5;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  double local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  double local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  TVector<double>_u_0 local_1c8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  TVector<double>_u_0 local_148;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  TOrientedBox3<double> local_c8;
  TOrientedBox3<double> local_78;
  
  uVar4 = _UNK_15061cbc8;
  dVar3 = ___xmm_3ff00000000000000000000000000000;
  uVar2 = __real_3ff0000000000000;
  local_248 = 0.0;
  dStack_240 = 0.0;
  local_228 = 0;
  uStack_220 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1e8 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_1e0 = _UNK_150689688;
  local_1d8 = __real_3ff0000000000000;
  local_238 = ___xmm_3ff00000000000000000000000000000;
  uStack_230 = _UNK_15061cbc8;
  local_218 = ___xmm_3ff00000000000000000000000000000;
  uStack_210 = _UNK_15061cbc8;
  local_1f8 = ___xmm_3ff00000000000000000000000000000;
  uStack_1f0 = _UNK_15061cbc8;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_248,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_248);
  }
  local_258 = uVar2;
  local_2c8 = 0.0;
  dStack_2c0 = 0.0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_268 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_260 = _UNK_150689688;
  local_2b8 = dVar3;
  uStack_2b0 = uVar4;
  local_298 = dVar3;
  uStack_290 = uVar4;
  local_278 = dVar3;
  uStack_270 = uVar4;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_2c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_2c8);
  }
  local_148._s_0.X = local_2c8;
  local_148._s_0.Y = dStack_2c0;
  local_148._s_0.Z = local_2b8;
  uStack_130 = uStack_2b0;
  local_128 = local_2a8;
  uStack_120 = uStack_2a0;
  local_118 = local_298;
  uStack_110 = uStack_290;
  local_108 = local_288;
  uStack_100 = uStack_280;
  local_f8 = local_278;
  uStack_f0 = uStack_270;
  local_e8 = local_268;
  uStack_e0 = uStack_260;
  local_d8 = local_258;
  local_1c8._s_0.X = local_248;
  local_1c8._s_0.Y = dStack_240;
  local_1c8._s_0.Z = local_238;
  uStack_1b0 = uStack_230;
  local_1a8 = local_228;
  uStack_1a0 = uStack_220;
  local_198 = local_218;
  uStack_190 = uStack_210;
  local_188 = local_208;
  uStack_180 = uStack_200;
  local_178 = local_1f8;
  uStack_170 = uStack_1f0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_168 = local_1e8;
  uStack_160 = uStack_1e0;
  local_158 = local_1d8;
  UE::Geometry::TOrientedBox3<double>::TOrientedBox3<double>
            (&local_78,(FOrientedBox *)&local_1c8._s_0);
  UE::Geometry::TOrientedBox3<double>::TOrientedBox3<double>
            (&local_c8,(FOrientedBox *)&local_148._s_0);
  bVar5 = UE::Geometry::TOrientedBox3<double>::Intersects
                    (&local_78,&local_c8,__real_3e45798ee2308c3a);
  *(bool *)param_3 = bVar5;
  return;
}

// execTestPointInsideOrOnOrientedBox @ 14ced9530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_OrientedBoxFunctions::execTestPointInsideOrOnOrientedBox
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double>_u_0 local_1b8;
  TVector<double> local_198;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  TVector<double>_u_0 local_f8;
  TQuaternion<double> local_e0;
  double local_c0;
  double local_b8;
  double local_b0;
  TVector<double>_u_0 local_a8;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_178 = 0.0;
  dStack_170 = 0.0;
  local_158 = 0;
  uStack_150 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_118 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_110 = _UNK_150689688;
  local_108 = __real_3ff0000000000000;
  local_168 = ___xmm_3ff00000000000000000000000000000;
  uStack_160 = _UNK_15061cbc8;
  local_148 = ___xmm_3ff00000000000000000000000000000;
  uStack_140 = _UNK_15061cbc8;
  local_128 = ___xmm_3ff00000000000000000000000000000;
  uStack_120 = _UNK_15061cbc8;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_178,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_178);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b8);
  }
  local_a8._s_0.X = local_178;
  local_a8._s_0.Y = dStack_170;
  local_a8._s_0.Z = local_168;
  uStack_90 = uStack_160;
  local_88 = local_158;
  uStack_80 = uStack_150;
  local_78 = local_148;
  uStack_70 = uStack_140;
  local_68 = local_138;
  uStack_60 = uStack_130;
  local_58 = local_128;
  uStack_50 = uStack_120;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48 = local_118;
  uStack_40 = uStack_110;
  local_38 = local_108;
  UE::Geometry::TOrientedBox3<double>::TOrientedBox3<double>
            ((TOrientedBox3<double> *)&local_f8._s_0,(FOrientedBox *)&local_a8._s_0);
  local_198.field0_0x0._s_0.Z = (double)local_1b8._16_8_;
  local_1b8._s_0.X = local_1b8._s_0.X - local_f8._s_0.X;
  local_1b8._s_0.Z = local_1b8._s_0.Z - local_f8._s_0.Z;
  local_1b8._s_0.Y = local_1b8._s_0.Y - local_f8._s_0.Y;
  UE::Geometry::TQuaternion<double>::InverseMultiply
            (&local_e0,&local_198,(TVector<double> *)&local_1b8._s_0);
  if (((local_c0 <
        (double)CONCAT44((uint)((ulonglong)local_198.field0_0x0._0_8_ >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(local_198.field0_0x0._s_0.X,0) &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (local_b8 <
       (double)CONCAT44((uint)((ulonglong)local_198.field0_0x0._8_8_ >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(local_198.field0_0x0._s_0.Y,0) &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (local_b0 <
      (double)CONCAT44((uint)((ulonglong)local_198.field0_0x0._16_8_ >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(local_198.field0_0x0._s_0.Z,0) &
                       (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    *(undefined1 *)param_3 = 0;
  }
  else {
    *(undefined1 *)param_3 = 1;
  }
  return;
}

