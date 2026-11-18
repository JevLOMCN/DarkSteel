// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 16

// StaticClass @ 14cea8210

UClass * __cdecl UGeometryScriptLibrary_TransformFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_TransformFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_TransformFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_TransformFunctions.InnerSingleton,
               StaticRegisterNativesUGeometryScriptLibrary_TransformFunctions,0x28,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_TransformFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_TransformFunctions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_TransformFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_TransformFunctions @ 14ceae990

UGeometryScriptLibrary_TransformFunctions * __thiscall
UGeometryScriptLibrary_TransformFunctions::UGeometryScriptLibrary_TransformFunctions
          (UGeometryScriptLibrary_TransformFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_TransformFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_TransformFunctions @ 14ceae9c0

UGeometryScriptLibrary_TransformFunctions * __thiscall
UGeometryScriptLibrary_TransformFunctions::UGeometryScriptLibrary_TransformFunctions
          (UGeometryScriptLibrary_TransformFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_TransformFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_TransformFunctions @ 14ceaec30

void __thiscall
UGeometryScriptLibrary_TransformFunctions::~UGeometryScriptLibrary_TransformFunctions
          (UGeometryScriptLibrary_TransformFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_TransformFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 14cebd430

UClass * __cdecl UGeometryScriptLibrary_TransformFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_TransformFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_TransformFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_TransformFunctions.InnerSingleton,
               StaticRegisterNativesUGeometryScriptLibrary_TransformFunctions,0x28,8,CLASS_Intrinsic
               ,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_TransformFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_TransformFunctions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_TransformFunctions.InnerSingleton;
}

// GetTransformAxisPlane @ 14cebe040

TPlane<double> * __cdecl
UGeometryScriptLibrary_TransformFunctions::GetTransformAxisPlane
          (TPlane<double> *__return_storage_ptr__,TTransform<double> *param_1,
          EGeometryScriptAxis param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar5 = __real_3ff0000000000000;
  if (param_2 == X) {
    dVar3 = (param_1->Rotation).XY.m128d_f64[0];
    dVar2 = (param_1->Rotation).XY.m128d_f64[1];
    dVar1 = (param_1->Rotation).ZW.m128d_f64[0];
    dVar7 = (param_1->Rotation).ZW.m128d_f64[1];
    dVar5 = dVar1 + dVar1;
    dVar8 = dVar2 + dVar2;
    dVar6 = __real_3ff0000000000000 - (dVar5 * dVar1 + dVar8 * dVar2);
    dVar1 = (param_1->Translation).XY.m128d_f64[0];
    dVar4 = (param_1->Translation).XY.m128d_f64[1];
    dVar2 = dVar5 * dVar3 - dVar8 * dVar7;
    dVar5 = dVar5 * dVar7 + dVar8 * dVar3;
    dVar3 = (param_1->Translation).ZW.m128d_f64[0];
    __return_storage_ptr__->_padding_ = (longlong)dVar6;
    __return_storage_ptr__->_padding_ = (longlong)dVar5;
    __return_storage_ptr__->_padding_ = (longlong)dVar2;
    __return_storage_ptr__->W = dVar5 * dVar4 + dVar6 * dVar1 + dVar3 * dVar2;
    return __return_storage_ptr__;
  }
  dVar2 = (param_1->Rotation).XY.m128d_f64[0];
  dVar3 = (param_1->Rotation).XY.m128d_f64[1];
  if (param_2 != Y) {
    dVar7 = (param_1->Rotation).ZW.m128d_f64[0];
    dVar4 = (param_1->Rotation).ZW.m128d_f64[1];
    dVar7 = dVar7 + dVar7;
    dVar6 = (param_1->Translation).XY.m128d_f64[0];
    dVar8 = (param_1->Translation).XY.m128d_f64[1];
    dVar1 = (dVar3 + dVar3) * dVar4 + dVar7 * dVar2;
    dVar7 = dVar7 * dVar3 - (dVar2 + dVar2) * dVar4;
    dVar4 = (param_1->Translation).ZW.m128d_f64[0];
    __return_storage_ptr__->_padding_ = (longlong)dVar1;
    __return_storage_ptr__->_padding_ = (longlong)dVar7;
    dVar5 = dVar5 - ((dVar3 + dVar3) * dVar3 + (dVar2 + dVar2) * dVar2);
    __return_storage_ptr__->_padding_ = (longlong)dVar5;
    __return_storage_ptr__->W = dVar7 * dVar8 + dVar1 * dVar6 + dVar5 * dVar4;
    return __return_storage_ptr__;
  }
  dVar7 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar4 = (param_1->Rotation).ZW.m128d_f64[1];
  dVar1 = dVar7 + dVar7;
  dVar5 = (dVar3 + dVar3) * dVar2 - dVar1 * dVar4;
  dVar6 = (param_1->Translation).ZW.m128d_f64[0];
  dVar3 = dVar1 * dVar3 + (dVar2 + dVar2) * dVar4;
  dVar7 = __real_3ff0000000000000 - (dVar1 * dVar7 + (dVar2 + dVar2) * dVar2);
  dVar2 = (param_1->Translation).XY.m128d_f64[0];
  dVar1 = (param_1->Translation).XY.m128d_f64[1];
  __return_storage_ptr__->_padding_ = (longlong)dVar5;
  __return_storage_ptr__->_padding_ = (longlong)dVar7;
  __return_storage_ptr__->_padding_ = (longlong)dVar3;
  __return_storage_ptr__->W = dVar7 * dVar1 + dVar5 * dVar2 + dVar3 * dVar6;
  return __return_storage_ptr__;
}

// GetTransformAxisRay @ 14cebe290

TRay<double> * __cdecl
UGeometryScriptLibrary_TransformFunctions::GetTransformAxisRay
          (TRay<double> *__return_storage_ptr__,TTransform<double> *param_1,
          EGeometryScriptAxis param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TVector<double> *this;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = (param_1->Translation).XY.m128d_f64[1];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (param_1->Translation).XY.m128d_f64[0];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar1;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = (param_1->Translation).ZW.m128d_f64[0];
  this = &__return_storage_ptr__->Direction;
  if (param_2 == X) {
    dVar1 = (param_1->Rotation).XY.m128d_f64[0];
    dVar2 = (param_1->Rotation).XY.m128d_f64[1];
    dVar4 = (param_1->Rotation).ZW.m128d_f64[0];
    dVar3 = (param_1->Rotation).ZW.m128d_f64[1];
    dVar5 = dVar4 + dVar4;
    dVar6 = dVar2 + dVar2;
    (this->field0_0x0)._s_0.X = __real_3ff0000000000000 - (dVar5 * dVar4 + dVar6 * dVar2);
    (__return_storage_ptr__->Direction).field0_0x0._s_0.Y = dVar5 * dVar3 + dVar6 * dVar1;
    (__return_storage_ptr__->Direction).field0_0x0._s_0.Z = dVar5 * dVar1 - dVar6 * dVar3;
  }
  else {
    if (param_2 == Y) {
      dVar2 = (param_1->Rotation).XY.m128d_f64[0];
      dVar4 = (param_1->Rotation).XY.m128d_f64[1];
      dVar3 = (param_1->Rotation).ZW.m128d_f64[0];
      dVar5 = (param_1->Rotation).ZW.m128d_f64[1];
      dVar1 = dVar3 + dVar3;
      (this->field0_0x0)._s_0.X = (dVar4 + dVar4) * dVar2 - dVar1 * dVar5;
      (__return_storage_ptr__->Direction).field0_0x0._s_0.Y =
           __real_3ff0000000000000 - (dVar1 * dVar3 + (dVar2 + dVar2) * dVar2);
      (__return_storage_ptr__->Direction).field0_0x0._s_0.Z =
           dVar1 * dVar4 + (dVar2 + dVar2) * dVar5;
      UE::Math::TVector<double>::Normalize(this,__real_3e45798ee0000000);
      return __return_storage_ptr__;
    }
    dVar1 = (param_1->Rotation).XY.m128d_f64[0];
    dVar2 = (param_1->Rotation).XY.m128d_f64[1];
    dVar4 = (param_1->Rotation).ZW.m128d_f64[0];
    dVar3 = (param_1->Rotation).ZW.m128d_f64[1];
    dVar4 = dVar4 + dVar4;
    (this->field0_0x0)._s_0.X = (dVar2 + dVar2) * dVar3 + dVar4 * dVar1;
    (__return_storage_ptr__->Direction).field0_0x0._s_0.Y = dVar4 * dVar2 - (dVar1 + dVar1) * dVar3;
    (__return_storage_ptr__->Direction).field0_0x0._s_0.Z =
         __real_3ff0000000000000 - ((dVar2 + dVar2) * dVar2 + (dVar1 + dVar1) * dVar1);
  }
  UE::Math::TVector<double>::Normalize(this,__real_3e45798ee0000000);
  return __return_storage_ptr__;
}

// GetTransformAxisVector @ 14cebe470

TVector<double> * __cdecl
UGeometryScriptLibrary_TransformFunctions::GetTransformAxisVector
          (TVector<double> *__return_storage_ptr__,TTransform<double> *param_1,
          EGeometryScriptAxis param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (param_2 == X) {
    dVar2 = (param_1->Rotation).XY.m128d_f64[0];
    dVar3 = (param_1->Rotation).XY.m128d_f64[1];
    dVar1 = (param_1->Rotation).ZW.m128d_f64[0];
    dVar4 = (param_1->Rotation).ZW.m128d_f64[1];
    dVar5 = dVar1 + dVar1;
    dVar6 = dVar3 + dVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         __real_3ff0000000000000 - (dVar5 * dVar1 + dVar6 * dVar3);
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar5 * dVar2 - dVar6 * dVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5 * dVar4 + dVar6 * dVar2;
    return __return_storage_ptr__;
  }
  dVar2 = (param_1->Rotation).ZW.m128d_f64[0];
  dVar3 = (param_1->Rotation).ZW.m128d_f64[1];
  if (param_2 != Y) {
    dVar1 = (param_1->Rotation).XY.m128d_f64[0];
    dVar4 = (param_1->Rotation).XY.m128d_f64[1];
    (__return_storage_ptr__->field0_0x0)._s_0.X = (dVar4 + dVar4) * dVar3 + (dVar2 + dVar2) * dVar1;
    dVar5 = __real_3ff0000000000000;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar2 + dVar2) * dVar4 - (dVar1 + dVar1) * dVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         dVar5 - ((dVar4 + dVar4) * dVar4 + (dVar1 + dVar1) * dVar1);
    return __return_storage_ptr__;
  }
  dVar4 = (param_1->Rotation).XY.m128d_f64[0];
  dVar5 = (param_1->Rotation).XY.m128d_f64[1];
  dVar1 = dVar2 + dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (dVar5 + dVar5) * dVar4 - dVar1 * dVar3;
  dVar6 = __real_3ff0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1 * dVar5 + (dVar4 + dVar4) * dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6 - (dVar1 * dVar2 + (dVar4 + dVar4) * dVar4);
  return __return_storage_ptr__;
}

// MakeTransformFromAxes @ 14cebfe10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __cdecl
UGeometryScriptLibrary_TransformFunctions::MakeTransformFromAxes
          (TTransform<double> *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2,TVector<double> *param_3,bool param_4)

{
  double dVar1;
  double dVar2;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80;
  TQuaternion<double>_u_0 local_68 [3];
  
  dVar1 = __real_3ff0000000000000;
  local_80._s_0.X = (double)*(undefined8 *)&param_1->field0_0x0;
  local_80._s_0.Y = *(double *)((longlong)&param_1->field0_0x0 + 8);
  local_80._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  local_98._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  local_98._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  local_98._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  local_68[0]._s_0.X = 0.0;
  local_68[0]._s_0.W = __real_3ff0000000000000;
  local_68[0]._s_0.Y = 0.0;
  local_68[0]._s_0.Z = 0.0;
  UE::Geometry::TQuaternion<double>::SetFromTo
            ((TQuaternion<double> *)&local_68[0]._s_0,(TVector<double> *)&local_98._s_0,param_2);
  dVar2 = (param_2->field0_0x0)._s_0.Y * (param_3->field0_0x0)._s_0.Y +
          (param_2->field0_0x0)._s_0.X * (param_3->field0_0x0)._s_0.X +
          (param_2->field0_0x0)._s_0.Z * (param_3->field0_0x0)._s_0.Z;
  if ((double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
      __real_3feff7ced916872b) {
    local_98._s_0.X =
         ((double)local_68[0]._16_8_ + (double)local_68[0]._16_8_) * (double)local_68[0]._0_8_ +
         ((double)local_68[0]._8_8_ + (double)local_68[0]._8_8_) * (double)local_68[0]._24_8_;
    local_98._s_0.Y =
         ((double)local_68[0]._16_8_ + (double)local_68[0]._16_8_) * (double)local_68[0]._8_8_ -
         ((double)local_68[0]._0_8_ + (double)local_68[0]._0_8_) * (double)local_68[0]._24_8_;
    local_98._s_0.Z =
         dVar1 - (((double)local_68[0]._8_8_ + (double)local_68[0]._8_8_) *
                  (double)local_68[0]._8_8_ +
                 ((double)local_68[0]._0_8_ + (double)local_68[0]._0_8_) * (double)local_68[0]._0_8_
                 );
    UE::Geometry::TFrame3<double>::ConstrainedAlignAxis
              ((TFrame3<double> *)&local_80._s_0,param_4 ^ 1,param_3,
               (TVector<double> *)&local_98._s_0);
  }
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = (double)local_68[0]._0_8_;
  *(undefined4 *)((__return_storage_ptr__->Rotation).XY.m128d_f64 + 1) = local_68[0]._8_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).XY.m128d_f64 + 0xc) =
       local_68[0]._12_4_;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)local_68[0]._16_8_;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)local_68[0]._24_8_;
  *(undefined4 *)(__return_storage_ptr__->Translation).XY.m128d_f64 = local_80._0_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 4) = local_80._4_4_
  ;
  *(undefined4 *)((__return_storage_ptr__->Translation).XY.m128d_f64 + 1) = local_80._8_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 0xc) =
       local_80._12_4_;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_80._s_0.Z;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  dVar1 = _UNK_150689688;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = _UNK_150689518;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar1;
  return __return_storage_ptr__;
}

// MakeTransformFromZAxis @ 14cec0000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __cdecl
UGeometryScriptLibrary_TransformFunctions::MakeTransformFromZAxis
          (TTransform<double> *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2)

{
  double dVar1;
  TVector<double>_u_0 local_68;
  undefined8 local_50;
  undefined8 uStack_48;
  double local_40;
  TQuaternion<double>_u_0 local_38;
  
  local_50 = *(undefined8 *)&param_1->field0_0x0;
  uStack_48 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  local_38._s_0.W = __real_3ff0000000000000;
  local_40 = (param_1->field0_0x0)._s_0.Z;
  local_68._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  local_68._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  local_38._s_0.X = 0.0;
  local_38._s_0.Y = 0.0;
  local_38._s_0.Z = 0.0;
  local_68._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  UE::Geometry::TQuaternion<double>::SetFromTo
            ((TQuaternion<double> *)&local_38._s_0,(TVector<double> *)&local_68._s_0,param_2);
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_38._s_0.X;
  *(undefined4 *)((__return_storage_ptr__->Rotation).XY.m128d_f64 + 1) = local_38._8_4_;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).XY.m128d_f64 + 0xc) = local_38._12_4_
  ;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_38._s_0.Z;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_38._s_0.W;
  *(undefined4 *)(__return_storage_ptr__->Translation).XY.m128d_f64 = (undefined4)local_50;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 4) = local_50._4_4_
  ;
  *(undefined4 *)((__return_storage_ptr__->Translation).XY.m128d_f64 + 1) = (undefined4)uStack_48;
  *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 0xc) =
       uStack_48._4_4_;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_40;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
  dVar1 = _UNK_150689688;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar1;
  dVar1 = _UNK_150689518;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar1;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUGeometryScriptLibrary_TransformFunctions @ 14cec2900

void __cdecl
UGeometryScriptLibrary_TransformFunctions::
StaticRegisterNativesUGeometryScriptLibrary_TransformFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UGeometryScriptLibrary_TransformFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetTransformAxisPlane @ 14ced1690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_TransformFunctions::execGetTransformAxisPlane
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  double dVar3;
  TPlane<double> *pTVar4;
  undefined1 auStack_128 [32];
  EGeometryScriptAxis local_108 [16];
  TTransform<double> local_f8;
  TPlane<double> local_98;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_68._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_58._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_48._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_38._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_38._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_38._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_28._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_28._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_28._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  local_108[0] = X;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
  }
  local_f8.Rotation.XY.m128d_f64[0] = (double)local_78._0_8_;
  local_f8.Rotation.XY.m128d_f64[1] = (double)local_78._8_8_;
  local_f8.Rotation.ZW.m128d_f64[0] = (double)local_68._0_8_;
  local_f8.Rotation.ZW.m128d_f64[1] = (double)local_68._8_8_;
  local_f8.Translation.XY.m128d_f64[0] = (double)local_58._0_8_;
  local_f8.Translation.XY.m128d_f64[1] = (double)local_58._8_8_;
  local_f8.Translation.ZW.m128d_f64[0] = (double)local_48._0_8_;
  local_f8.Translation.ZW.m128d_f64[1] = (double)local_48._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_f8.Scale3D.XY.m128d_f64[0] = (double)local_38._0_8_;
  local_f8.Scale3D.XY.m128d_f64[1] = (double)local_38._8_8_;
  local_f8.Scale3D.ZW.m128d_f64[0] = (double)local_28._0_8_;
  local_f8.Scale3D.ZW.m128d_f64[1] = (double)local_28._8_8_;
  pTVar4 = GetTransformAxisPlane(&local_98,&local_f8,local_108[0]);
  lVar2 = pTVar4->_padding_;
  *(longlong *)param_3 = pTVar4->_padding_;
  *(longlong *)((longlong)param_3 + 8) = lVar2;
  dVar3 = pTVar4->W;
  *(longlong *)((longlong)param_3 + 0x10) = pTVar4->_padding_;
  *(double *)((longlong)param_3 + 0x18) = dVar3;
  return;
}

// execGetTransformAxisRay @ 14ced1810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_TransformFunctions::execGetTransformAxisRay
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  TRay<double> *pTVar3;
  undefined1 auStack_138 [32];
  EGeometryScriptAxis local_118 [16];
  TTransform<double> local_108;
  TRay<double> local_a8;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_68._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_58._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_48._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_38._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_38._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_38._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_28._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_28._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_28._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  local_118[0] = X;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_118,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_118);
  }
  local_108.Rotation.XY.m128d_f64[0] = (double)local_78._0_8_;
  local_108.Rotation.XY.m128d_f64[1] = (double)local_78._8_8_;
  local_108.Rotation.ZW.m128d_f64[0] = (double)local_68._0_8_;
  local_108.Rotation.ZW.m128d_f64[1] = (double)local_68._8_8_;
  local_108.Translation.XY.m128d_f64[0] = (double)local_58._0_8_;
  local_108.Translation.XY.m128d_f64[1] = (double)local_58._8_8_;
  local_108.Translation.ZW.m128d_f64[0] = (double)local_48._0_8_;
  local_108.Translation.ZW.m128d_f64[1] = (double)local_48._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_108.Scale3D.XY.m128d_f64[0] = (double)local_38._0_8_;
  local_108.Scale3D.XY.m128d_f64[1] = (double)local_38._8_8_;
  local_108.Scale3D.ZW.m128d_f64[0] = (double)local_28._0_8_;
  local_108.Scale3D.ZW.m128d_f64[1] = (double)local_28._8_8_;
  pTVar3 = GetTransformAxisRay(&local_a8,&local_108,local_118[0]);
  dVar2 = (pTVar3->Origin).field0_0x0._s_0.Y;
  *(double *)param_3 = (pTVar3->Origin).field0_0x0._s_0.X;
  *(double *)((longlong)param_3 + 8) = dVar2;
  dVar2 = (pTVar3->Direction).field0_0x0._s_0.X;
  *(double *)((longlong)param_3 + 0x10) = (pTVar3->Origin).field0_0x0._s_0.Z;
  *(double *)((longlong)param_3 + 0x18) = dVar2;
  dVar2 = (pTVar3->Direction).field0_0x0._s_0.Z;
  *(double *)((longlong)param_3 + 0x20) = (pTVar3->Direction).field0_0x0._s_0.Y;
  *(double *)((longlong)param_3 + 0x28) = dVar2;
  return;
}

// execGetTransformAxisVector @ 14ced19a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UGeometryScriptLibrary_TransformFunctions::execGetTransformAxisVector
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_f8 [32];
  char local_d8 [24];
  double local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_a8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_98._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_88._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_68._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  local_d8[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_d8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_d8[0] == '\0') {
    dVar4 = (double)local_a8._0_8_ + (double)local_a8._0_8_;
    dVar5 = (double)local_b8._8_8_ + (double)local_b8._8_8_;
    dVar3 = __real_3ff0000000000000 -
            (dVar4 * (double)local_a8._0_8_ + dVar5 * (double)local_b8._8_8_);
    local_c0 = dVar4 * (double)local_b8._0_8_ - dVar5 * (double)local_a8._8_8_;
    dVar4 = dVar4 * (double)local_a8._8_8_ + dVar5 * (double)local_b8._0_8_;
  }
  else if (local_d8[0] == '\x01') {
    dVar4 = (double)local_a8._0_8_ + (double)local_a8._0_8_;
    dVar3 = ((double)local_b8._8_8_ + (double)local_b8._8_8_) * (double)local_b8._0_8_ -
            dVar4 * (double)local_a8._8_8_;
    local_c0 = dVar4 * (double)local_b8._8_8_ +
               ((double)local_b8._0_8_ + (double)local_b8._0_8_) * (double)local_a8._8_8_;
    dVar4 = __real_3ff0000000000000 -
            (dVar4 * (double)local_a8._0_8_ +
            ((double)local_b8._0_8_ + (double)local_b8._0_8_) * (double)local_b8._0_8_);
  }
  else {
    dVar3 = ((double)local_b8._8_8_ + (double)local_b8._8_8_) * (double)local_a8._8_8_ +
            ((double)local_a8._0_8_ + (double)local_a8._0_8_) * (double)local_b8._0_8_;
    dVar4 = ((double)local_a8._0_8_ + (double)local_a8._0_8_) * (double)local_b8._8_8_ -
            ((double)local_b8._0_8_ + (double)local_b8._0_8_) * (double)local_a8._8_8_;
    local_c0 = __real_3ff0000000000000 -
               (((double)local_b8._8_8_ + (double)local_b8._8_8_) * (double)local_b8._8_8_ +
               ((double)local_b8._0_8_ + (double)local_b8._0_8_) * (double)local_b8._0_8_);
  }
  auVar2._8_4_ = SUB84(dVar4,0);
  auVar2._0_8_ = dVar3;
  auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar2;
  *(double *)((longlong)param_3 + 0x10) = local_c0;
  return;
}

// execMakeTransformFromAxes @ 14ced3210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_TransformFunctions::execMakeTransformFromAxes
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  double dVar4;
  bool bVar5;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar6 [16];
  double dVar7;
  undefined8 uVar9;
  undefined1 auVar8 [16];
  int local_res10 [2];
  TVector<double>_u_0 local_148;
  TQuaternion<double>_u_0 local_130;
  double local_108;
  double dStack_100;
  undefined8 local_f8;
  undefined1 local_e8 [16];
  double local_d8;
  undefined1 local_d0 [16];
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  TVector<double>_u_0 local_a0;
  TVector<double>_u_0 local_88 [4];
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_d0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8);
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
  dVar4 = __real_3ff0000000000000;
  bVar5 = local_res10[0] != 0;
  uVar9 = 0;
  local_f8 = local_c0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_130._s_0.X = 0.0;
  local_148._s_0.X = local_b8;
  local_148._s_0.Y = dStack_b0;
  local_130._s_0.W = dVar4;
  local_a0._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  local_a0._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  local_a0._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  local_88[0]._0_16_ = local_e8;
  _local_108 = local_d0;
  local_130._s_0.Y = 0.0;
  local_130._s_0.Z = 0.0;
  local_148._s_0.Z = local_a8;
  UE::Geometry::TQuaternion<double>::SetFromTo
            ((TQuaternion<double> *)&local_130._s_0,(TVector<double> *)&local_a0._s_0,
             (TVector<double> *)&local_108);
  auVar2._4_8_ = uVar9;
  auVar2._0_4_ = local_e8._4_4_;
  auVar8._0_8_ = auVar2._0_8_ << 0x20;
  auVar8._8_4_ = local_e8._8_4_;
  auVar8._12_4_ = local_e8._12_4_;
  local_88[0]._s_0.Z = local_d8;
  auVar3._4_8_ = extraout_XMM0_Qb;
  auVar3._0_4_ = local_d0._4_4_;
  auVar6._0_8_ = auVar3._0_8_ << 0x20;
  auVar6._8_4_ = local_d0._8_4_;
  auVar6._12_4_ = local_d0._12_4_;
  dVar7 = auVar8._8_8_ * auVar6._8_8_ + local_e8._0_8_ * local_d0._0_8_ +
          local_d8 * (double)local_f8;
  if ((double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
      __real_3feff7ced916872b) {
    dStack_100 = (local_130._s_0.Z + local_130._s_0.Z) * local_130._s_0.Y -
                 (local_130._s_0.X + local_130._s_0.X) * local_130._s_0.W;
    local_108 = (local_130._s_0.Z + local_130._s_0.Z) * local_130._s_0.X +
                (local_130._s_0.Y + local_130._s_0.Y) * local_130._s_0.W;
    local_f8 = dVar4 - ((local_130._s_0.Y + local_130._s_0.Y) * local_130._s_0.Y +
                       (local_130._s_0.X + local_130._s_0.X) * local_130._s_0.X);
    UE::Geometry::TFrame3<double>::ConstrainedAlignAxis
              ((TFrame3<double> *)&local_148._s_0,bVar5 ^ 1,(TVector<double> *)&local_88[0]._s_0,
               (TVector<double> *)&local_108);
  }
  *(double *)param_3 = local_130._s_0.X;
  *(double *)((longlong)param_3 + 8) = local_130._s_0.Y;
  *(undefined4 *)((longlong)param_3 + 0x10) = local_130._16_4_;
  *(undefined4 *)((longlong)param_3 + 0x14) = local_130._20_4_;
  *(undefined4 *)((longlong)param_3 + 0x18) = local_130._24_4_;
  *(int *)((longlong)param_3 + 0x1c) = (int)((ulonglong)local_130._24_8_ >> 0x20);
  *(double *)((longlong)param_3 + 0x20) = local_148._s_0.X;
  *(double *)((longlong)param_3 + 0x28) = local_148._s_0.Y;
  *(double *)((longlong)param_3 + 0x30) = local_148._s_0.Z;
  *(undefined8 *)((longlong)param_3 + 0x38) = 0;
  uVar9 = _UNK_150689688;
  *(undefined8 *)((longlong)param_3 + 0x40) = ___xmm_3ff00000000000003ff0000000000000;
  *(undefined8 *)((longlong)param_3 + 0x48) = uVar9;
  uVar9 = _UNK_150689518;
  *(undefined8 *)((longlong)param_3 + 0x50) = ___xmm_00000000000000003ff0000000000000;
  *(undefined8 *)((longlong)param_3 + 0x58) = uVar9;
  return;
}

// execMakeTransformFromZAxis @ 14ced3520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UGeometryScriptLibrary_TransformFunctions::execMakeTransformFromZAxis
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  TQuaternion<double>_u_0 local_b0;
  double local_90;
  double dStack_88;
  double local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_38 [2];
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_58._s_0.X = local_90;
  local_58._s_0.Y = dStack_88;
  local_58._s_0.Z = local_80;
  local_b0._s_0.W = __real_3ff0000000000000;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0]._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  local_38[0]._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  local_b0._s_0.X = 0.0;
  local_b0._s_0.Y = 0.0;
  local_b0._s_0.Z = 0.0;
  local_38[0]._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  UE::Geometry::TQuaternion<double>::SetFromTo
            ((TQuaternion<double> *)&local_b0._s_0,(TVector<double> *)&local_38[0]._s_0,
             (TVector<double> *)&local_58._s_0);
  *(double *)param_3 = local_b0._s_0.X;
  *(double *)((longlong)param_3 + 8) = local_b0._s_0.Y;
  *(double *)((longlong)param_3 + 0x10) = local_b0._s_0.Z;
  *(double *)((longlong)param_3 + 0x18) = local_b0._s_0.W;
  *(undefined8 *)((longlong)param_3 + 0x20) = local_78;
  *(undefined8 *)((longlong)param_3 + 0x28) = uStack_70;
  *(undefined8 *)((longlong)param_3 + 0x30) = local_68;
  *(undefined8 *)((longlong)param_3 + 0x38) = 0;
  uVar2 = _UNK_150689688;
  *(undefined8 *)((longlong)param_3 + 0x40) = ___xmm_3ff00000000000003ff0000000000000;
  *(undefined8 *)((longlong)param_3 + 0x48) = uVar2;
  uVar2 = _UNK_150689518;
  *(undefined8 *)((longlong)param_3 + 0x50) = ___xmm_00000000000000003ff0000000000000;
  *(undefined8 *)((longlong)param_3 + 0x58) = uVar2;
  return;
}

