// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 13

// StaticClass @ 14cd90c00

UClass * __cdecl UGeometryScriptLibrary_MeshComparisonFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshComparisonFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshComparisonFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshComparisonFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshComparisonFunctions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshComparisonFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshComparisonFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshComparisonFunctions.InnerSingleton;
}

// UGeometryScriptLibrary_MeshComparisonFunctions @ 14cda5fa0

UGeometryScriptLibrary_MeshComparisonFunctions * __thiscall
UGeometryScriptLibrary_MeshComparisonFunctions::UGeometryScriptLibrary_MeshComparisonFunctions
          (UGeometryScriptLibrary_MeshComparisonFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshComparisonFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_MeshComparisonFunctions @ 14cda5fd0

UGeometryScriptLibrary_MeshComparisonFunctions * __thiscall
UGeometryScriptLibrary_MeshComparisonFunctions::UGeometryScriptLibrary_MeshComparisonFunctions
          (UGeometryScriptLibrary_MeshComparisonFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshComparisonFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_MeshComparisonFunctions @ 14cda6ac0

void __thiscall
UGeometryScriptLibrary_MeshComparisonFunctions::~UGeometryScriptLibrary_MeshComparisonFunctions
          (UGeometryScriptLibrary_MeshComparisonFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_MeshComparisonFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 14cdd8860

UClass * __cdecl UGeometryScriptLibrary_MeshComparisonFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshComparisonFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_MeshComparisonFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshComparisonFunctions.
                InnerSingleton,StaticRegisterNativesUGeometryScriptLibrary_MeshComparisonFunctions,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_MeshComparisonFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_MeshComparisonFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_MeshComparisonFunctions.InnerSingleton;
}

// IsIntersectingMesh @ 14cddbd20

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshComparisonFunctions::IsIntersectingMesh
          (UDynamicMesh *param_1,TTransform<double> *param_2,UDynamicMesh *param_3,
          TTransform<double> *param_4,bool *param_5,UGeometryScriptDebug *param_6)

{
  FText *pFVar1;
  UDynamicMesh *local_res18 [2];
  undefined1 local_38 [16];
  UDynamicMesh **local_28;
  TTransform<double> *local_20;
  TTransform<double> *local_18;
  bool *local_10;
  
  *param_5 = false;
  local_res18[0] = param_3;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshComparisonFunctions",
                        L"IsIntersectingMesh_InvalidInput",L"IsIntersectingMesh: TargetMesh is Null"
                       );
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  if (param_3 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshComparisonFunctions",
                        L"IsIntersectingMesh_InvalidInput2",L"IsIntersectingMesh: OtherMesh is Null"
                       );
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
      return param_1;
    }
  }
  else {
    local_10 = param_5;
    local_28 = local_res18;
    local_38._8_8_ = &local_28;
    local_38._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshComparisonFunctions::IsIntersectingMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_20 = param_2;
    local_18 = param_4;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_38);
  }
  return param_1;
}

// IsSameMeshAs @ 14cddbe40

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshComparisonFunctions::IsSameMeshAs
          (UDynamicMesh *param_1,UDynamicMesh *param_2,FGeometryScriptIsSameMeshOptions *param_3,
          bool *param_4,FGeometryScriptMeshDifferenceInfo *param_5,UGeometryScriptDebug *param_6)

{
  FText *pFVar1;
  UDynamicMesh *local_res10 [3];
  undefined1 local_38 [16];
  UDynamicMesh **local_28;
  FGeometryScriptIsSameMeshOptions *local_20;
  bool *local_18;
  FGeometryScriptMeshDifferenceInfo *local_10;
  
  *param_4 = false;
  local_res10[0] = param_2;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshComparisonFunctions",
                        L"IsSameMeshAs_InvalidInput",L"IsSameMeshAs: TargetMesh is Null");
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  if (param_2 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_38,L"UGeometryScriptLibrary_MeshComparisonFunctions",
                        L"IsSameMeshAs_InvalidInput2",L"IsSameMeshAs: OtherMesh is Null");
    UE::Geometry::AppendError(param_6,InvalidInputs,pFVar1);
    if ((ITextData *)local_38._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_38._0_8_ + 0x10))();
      return param_1;
    }
  }
  else {
    local_28 = local_res10;
    local_10 = param_5;
    local_38._8_8_ = &local_28;
    local_38._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshComparisonFunctions::IsSameMeshAs'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_20 = param_3;
    local_18 = param_4;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_38);
  }
  return param_1;
}

// IsSameMeshAs @ 14cddbf40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshComparisonFunctions::IsSameMeshAs
          (UDynamicMesh *param_1,UDynamicMesh *param_2,FGeometryScriptIsSameMeshOptions *param_3,
          bool *param_4,UGeometryScriptDebug *param_5)

{
  FText *pFVar1;
  UDynamicMesh *local_res8;
  undefined8 local_78;
  float local_70;
  undefined1 local_68 [16];
  UDynamicMesh **local_58;
  undefined8 *local_50;
  bool *local_48;
  undefined1 *local_40;
  undefined1 local_38 [8];
  void *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  
  uStack_20 = _UNK_15076cb68;
  local_28 = ___xmm_ffffffffffffffff0000000000000000;
  local_70 = param_3->Epsilon;
  local_38[0] = 0;
  local_30 = (void *)0x0;
  *param_4 = false;
  local_18 = 0;
  local_78._0_1_ = param_3->bCheckConnectivity;
  local_78._1_1_ = param_3->bCheckEdgeIDs;
  local_78._2_1_ = param_3->bCheckNormals;
  local_78._3_1_ = param_3->bCheckColors;
  local_78._4_1_ = param_3->bCheckUVs;
  local_78._5_1_ = param_3->bCheckGroups;
  local_78._6_1_ = param_3->bCheckAttributes;
  local_78._7_1_ = param_3->field_0x7;
  local_res8 = param_2;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_68,L"UGeometryScriptLibrary_MeshComparisonFunctions",
                        L"IsSameMeshAs_InvalidInput",L"IsSameMeshAs: TargetMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    param_1 = (UDynamicMesh *)0x0;
    if ((ITextData *)local_68._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_68._0_8_ + 0x10))();
    }
  }
  else if (param_2 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_68,L"UGeometryScriptLibrary_MeshComparisonFunctions",
                        L"IsSameMeshAs_InvalidInput2",L"IsSameMeshAs: OtherMesh is Null");
    UE::Geometry::AppendError(param_5,InvalidInputs,pFVar1);
    if ((ITextData *)local_68._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_68._0_8_ + 0x10))();
    }
  }
  else {
    local_58 = &local_res8;
    local_50 = &local_78;
    local_40 = local_38;
    local_68._8_8_ = &local_58;
    local_68._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshComparisonFunctions::IsSameMeshAs'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_48 = param_4;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_68);
  }
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  return param_1;
}

// MeasureDistancesBetweenMeshes @ 14cddd100

UDynamicMesh * __cdecl
UGeometryScriptLibrary_MeshComparisonFunctions::MeasureDistancesBetweenMeshes
          (UDynamicMesh *param_1,UDynamicMesh *param_2,
          FGeometryScriptMeasureMeshDistanceOptions param_3,double *param_4,double *param_5,
          double *param_6,double *param_7,UGeometryScriptDebug *param_8)

{
  FText *pFVar1;
  UDynamicMesh *local_res10;
  undefined1 local_res18 [16];
  undefined1 local_48 [16];
  UDynamicMesh **local_38;
  undefined1 *local_30;
  double *local_28;
  double *local_20;
  double *local_18;
  double *local_10;
  
  *param_4 = 3.4028234663852886e+38;
  local_res10 = param_2;
  local_res18[0] = param_3.bSymmetric;
  if (param_1 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_48,L"UGeometryScriptLibrary_MeshComparisonFunctions",
                        L"MeasureDistancesBetweenMeshes_InvalidInput",
                        L"MeasureDistancesBetweenMeshes: TargetMesh is Null");
    UE::Geometry::AppendError(param_8,InvalidInputs,pFVar1);
    if ((ITextData *)local_48._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_48._0_8_ + 0x10))();
    }
    return (UDynamicMesh *)0x0;
  }
  if (param_2 == (UDynamicMesh *)0x0) {
    pFVar1 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_48,L"UGeometryScriptLibrary_MeshComparisonFunctions",
                        L"MeasureDistancesBetweenMeshes_InvalidInput2",
                        L"MeasureDistancesBetweenMeshes: OtherMesh is Null");
    UE::Geometry::AppendError(param_8,InvalidInputs,pFVar1);
    if ((ITextData *)local_48._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_48._0_8_ + 0x10))();
      return param_1;
    }
  }
  else {
    local_38 = &local_res10;
    local_30 = local_res18;
    local_20 = param_5;
    local_18 = param_6;
    local_10 = param_7;
    local_48._8_8_ = &local_38;
    local_48._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UGeometryScriptLibrary_MeshComparisonFunctions::MeasureDistancesBetweenMeshes'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
         ::Call;
    local_28 = param_4;
    UDynamicMesh::ProcessMesh
              (param_1,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)local_48);
  }
  return param_1;
}

// StaticRegisterNativesUGeometryScriptLibrary_MeshComparisonFunctions @ 14cde7260

void __cdecl
UGeometryScriptLibrary_MeshComparisonFunctions::
StaticRegisterNativesUGeometryScriptLibrary_MeshComparisonFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr =
       Z_Construct_UClass_UGeometryScriptLibrary_MeshComparisonFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIsIntersectingMesh @ 14ce09d10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshComparisonFunctions::execIsIntersectingMesh
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  FProperty *pFVar2;
  undefined2 *puVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  UDynamicMesh *this;
  bool bVar7;
  int iVar8;
  FText *pFVar9;
  uchar *puVar10;
  undefined1 auStack_2c8 [32];
  undefined2 *local_2a8;
  undefined2 *local_2a0;
  longlong local_298;
  longlong local_290;
  undefined8 local_288;
  uchar local_278 [8];
  undefined2 local_270;
  ITextData *local_268;
  uint local_260;
  undefined2 local_258;
  ITextData *local_250;
  uint local_248;
  longlong local_240;
  longlong local_238;
  UDynamicMesh *local_230;
  undefined1 local_228 [4];
  undefined1 local_224 [4];
  undefined1 local_220 [4];
  undefined1 local_21c [4];
  longlong local_218;
  code *local_210;
  longlong **local_208;
  longlong *local_200;
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  uchar *local_1e8;
  FText local_1e0;
  FText local_1d0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
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
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  local_230 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_230,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_230);
  }
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_98._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_98,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_98);
  }
  local_238 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_238,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_238);
  }
  local_f8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_f8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_f8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_e8._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_e8._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_e8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_d8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_c8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_c8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_c8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_b8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_b8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_b8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_a8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_a8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_a8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  local_278[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_278,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_278);
  }
  local_240 = 0;
  puVar10 = local_278;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_240,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_240);
  }
  this = local_230;
  lVar6 = local_238;
  lVar5 = local_240;
  local_158 = local_f8._0_8_;
  uStack_150 = local_f8._8_8_;
  local_148 = local_e8._0_8_;
  uStack_140 = local_e8._8_8_;
  local_138 = local_d8._0_8_;
  uStack_130 = local_d8._8_8_;
  local_128 = local_c8._0_8_;
  uStack_120 = local_c8._8_8_;
  local_118 = local_b8._0_8_;
  uStack_110 = local_b8._8_8_;
  local_108 = local_a8._0_8_;
  uStack_100 = local_a8._8_8_;
  local_1b8 = local_98._0_8_;
  uStack_1b0 = local_98._8_8_;
  local_1a8 = local_88._0_8_;
  uStack_1a0 = local_88._8_8_;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_198 = local_78._0_8_;
  uStack_190 = local_78._8_8_;
  local_188 = local_68._0_8_;
  uStack_180 = local_68._8_8_;
  local_178 = local_58._0_8_;
  uStack_170 = local_58._8_8_;
  local_168 = local_48._0_8_;
  uStack_160 = local_48._8_8_;
  local_218 = local_238;
  *puVar10 = '\0';
  if (this == (UDynamicMesh *)0x0) {
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_1e0,L"UGeometryScriptLibrary_MeshComparisonFunctions",
                        L"IsIntersectingMesh_InvalidInput",L"IsIntersectingMesh: TargetMesh is Null"
                       );
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar9);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_268 = (pFVar9->TextData).Reference;
    local_270 = 0x200;
    if (local_268 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_268 + 8))(local_268,local_228);
    }
    local_260 = pFVar9->Flags;
    if (lVar5 != 0) {
      puVar3 = *(undefined2 **)(lVar5 + 0x28);
      if ((puVar3 <= &local_270) && (&local_270 < puVar3 + (longlong)*(int *)(lVar5 + 0x34) * 0xc))
      {
        local_290 = (longlong)*(int *)(lVar5 + 0x30);
        local_288 = 0x18;
        local_2a8 = &local_270;
        local_2a0 = puVar3;
        local_298 = (longlong)*(int *)(lVar5 + 0x34);
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar8 = *(int *)(lVar5 + 0x30);
      if (iVar8 == *(int *)(lVar5 + 0x34)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar5 + 0x28),(int *)(lVar5 + 0x34));
      }
      *(int *)(lVar5 + 0x30) = iVar8 + 1;
      puVar1 = (undefined1 *)(*(longlong *)(lVar5 + 0x28) + (longlong)iVar8 * 0x18);
      *puVar1 = (undefined1)local_270;
      puVar1[1] = local_270._1_1_;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(ITextData **)(puVar1 + 8) = local_268;
      if (local_268 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_268 + 8))(local_268,local_224);
      }
      *(uint *)(puVar1 + 0x10) = local_260;
    }
    if (local_268 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_268 + 0x10))();
    }
    if (local_1e0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1e0.TextData.Reference + 0x10))();
    }
    *(undefined8 *)param_3 = 0;
  }
  else {
    if (lVar6 == 0) {
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_1d0,L"UGeometryScriptLibrary_MeshComparisonFunctions",
                          L"IsIntersectingMesh_InvalidInput2",
                          L"IsIntersectingMesh: OtherMesh is Null");
      if (1 < (byte)LogGeometry._0_1_) {
        FText::ToString(pFVar9);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      local_250 = (pFVar9->TextData).Reference;
      local_258 = 0x200;
      if (local_250 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_250 + 8))(local_250,local_220);
      }
      local_248 = pFVar9->Flags;
      if (lVar5 != 0) {
        puVar3 = *(undefined2 **)(lVar5 + 0x28);
        if ((puVar3 <= &local_258) && (&local_258 < puVar3 + (longlong)*(int *)(lVar5 + 0x34) * 0xc)
           ) {
          local_290 = (longlong)*(int *)(lVar5 + 0x30);
          local_288 = 0x18;
          local_2a8 = &local_258;
          local_2a0 = puVar3;
          local_298 = (longlong)*(int *)(lVar5 + 0x34);
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar8 = *(int *)(lVar5 + 0x30);
        if (iVar8 == *(int *)(lVar5 + 0x34)) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)(lVar5 + 0x28),(int *)(lVar5 + 0x34));
        }
        *(int *)(lVar5 + 0x30) = iVar8 + 1;
        puVar1 = (undefined1 *)(*(longlong *)(lVar5 + 0x28) + (longlong)iVar8 * 0x18);
        *puVar1 = (undefined1)local_258;
        puVar1[1] = local_258._1_1_;
        *(undefined8 *)(puVar1 + 8) = 0;
        *(ITextData **)(puVar1 + 8) = local_250;
        if (local_250 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_250 + 8))(local_250,local_21c);
        }
        *(uint *)(puVar1 + 0x10) = local_248;
      }
      if (local_250 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_250 + 0x10))();
      }
      if (local_1d0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1d0.TextData.Reference + 0x10))();
      }
    }
    else {
      local_200 = &local_218;
      local_1f8 = &local_1b8;
      local_1f0 = &local_158;
      local_208 = &local_200;
      local_210 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UGeometryScriptLibrary_MeshComparisonFunctions::IsIntersectingMesh'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                  ::Call;
      local_1e8 = puVar10;
      UDynamicMesh::ProcessMesh
                (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_210)
      ;
    }
    *(UDynamicMesh **)param_3 = this;
  }
  return;
}

// execIsSameMeshAs @ 14ce0a3b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshComparisonFunctions::execIsSameMeshAs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  FText *pFVar7;
  longlong lVar8;
  UDynamicMesh *pUVar9;
  uchar *puVar10;
  uchar *puVar11;
  uchar local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 local_138;
  undefined2 uStack_134;
  undefined1 uStack_132;
  undefined1 uStack_131;
  undefined4 local_130;
  undefined2 local_128;
  ITextData *local_120;
  uint local_118;
  undefined2 local_110;
  ITextData *local_108;
  uint local_100;
  longlong local_f8;
  longlong local_f0;
  UDynamicMesh *local_e8;
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  longlong local_d8 [2];
  undefined8 local_c8;
  undefined4 local_c0;
  uchar local_b8 [8];
  void *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  code *local_90;
  longlong **local_88;
  longlong *local_80;
  undefined8 *local_78;
  uchar *local_70;
  uchar *local_68;
  FText local_60;
  FText local_50;
  
  local_e8 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_f0 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  local_138 = 1;
  uStack_134 = 0;
  uStack_132 = 0;
  local_130 = 0x358637bd;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  local_res10[0] = '\0';
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
  local_b8[0] = '\0';
  puVar10 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar10 = param_2->MostRecentPropertyAddress;
  }
  local_b0 = (void *)0x0;
  local_a8 = ___xmm_ffffffffffffffff0000000000000000;
  uStack_a0 = _UNK_15076cb68;
  local_98 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  local_f8 = 0;
  puVar11 = local_b8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar11 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  pUVar9 = local_e8;
  lVar4 = local_f8;
  local_c8 = CONCAT17(uStack_131,CONCAT16(uStack_132,CONCAT24(uStack_134,local_138)));
  local_c0 = local_130;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_d8[0] = local_f0;
  *puVar10 = '\0';
  if (local_e8 == (UDynamicMesh *)0x0) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_60,L"UGeometryScriptLibrary_MeshComparisonFunctions",
                        L"IsSameMeshAs_InvalidInput",L"IsSameMeshAs: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar7);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_120 = (pFVar7->TextData).Reference;
    local_128 = 0x200;
    if (local_120 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_120 + 8))(local_120,local_res18);
    }
    local_118 = pFVar7->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_128) &&
          (&local_128 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = *(int *)(lVar4 + 0x30);
      if (iVar6 == *(int *)(lVar4 + 0x34)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      lVar8 = (longlong)iVar6;
      *(int *)(lVar4 + 0x30) = iVar6 + 1;
      pFVar2 = ((ForAnyElementType *)(lVar4 + 0x28))->Data;
      pFVar2[lVar8 * 0x18] = local_128._0_1_;
      pFVar2[lVar8 * 0x18 + 1] = local_128._1_1_;
      *(undefined8 *)(pFVar2 + lVar8 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar2 + lVar8 * 0x18 + 8) = local_120;
      if (local_120 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_120 + 8))(local_120,local_res20);
      }
      *(uint *)(pFVar2 + lVar8 * 0x18 + 0x10) = local_118;
    }
    if (local_120 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_120 + 0x10))();
    }
    pUVar9 = (UDynamicMesh *)0x0;
    if (local_60.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
    }
  }
  else if (local_f0 == 0) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_50,L"UGeometryScriptLibrary_MeshComparisonFunctions",
                        L"IsSameMeshAs_InvalidInput2",L"IsSameMeshAs: OtherMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar7);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_108 = (pFVar7->TextData).Reference;
    local_110 = 0x200;
    if (local_108 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108 + 8))(local_108,local_e0);
    }
    local_100 = pFVar7->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_110) &&
          (&local_110 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = *(int *)(lVar4 + 0x30);
      if (iVar6 == *(int *)(lVar4 + 0x34)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      lVar8 = (longlong)iVar6;
      *(int *)(lVar4 + 0x30) = iVar6 + 1;
      pFVar2 = ((ForAnyElementType *)(lVar4 + 0x28))->Data;
      pFVar2[lVar8 * 0x18] = local_110._0_1_;
      pFVar2[lVar8 * 0x18 + 1] = local_110._1_1_;
      *(undefined8 *)(pFVar2 + lVar8 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar2 + lVar8 * 0x18 + 8) = local_108;
      if (local_108 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_108 + 8))(local_108,local_dc);
      }
      *(uint *)(pFVar2 + lVar8 * 0x18 + 0x10) = local_100;
    }
    if (local_108 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108 + 0x10))();
    }
    if (local_50.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
    }
  }
  else {
    local_80 = local_d8;
    local_78 = &local_c8;
    local_88 = &local_80;
    local_90 = UE::Core::Private::Function::
               TFunctionRefCaller<`UGeometryScriptLibrary_MeshComparisonFunctions::IsSameMeshAs'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_70 = puVar10;
    local_68 = puVar11;
    UDynamicMesh::ProcessMesh
              (local_e8,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_90
              );
  }
  *(UDynamicMesh **)param_3 = pUVar9;
  if (local_b0 != (void *)0x0) {
    FMemory::Free(local_b0);
  }
  return;
}

// execMeasureDistancesBetweenMeshes @ 14ce0bac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_MeshComparisonFunctions::execMeasureDistancesBetweenMeshes
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  UDynamicMesh *this;
  bool bVar5;
  int iVar6;
  FText *pFVar7;
  longlong lVar8;
  uchar *puVar9;
  uchar *puVar10;
  uchar *puVar11;
  uchar *puVar12;
  undefined1 local_res10 [8];
  undefined8 *local_res18;
  undefined1 local_res20 [8];
  undefined2 local_128;
  ITextData *local_120;
  uint local_118;
  undefined2 local_110;
  ITextData *local_108;
  uint local_100;
  uchar local_f8 [8];
  undefined8 local_f0;
  uchar local_e8 [8];
  undefined8 local_e0;
  longlong local_d8;
  longlong local_d0;
  UDynamicMesh *local_c8;
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  undefined1 local_b8 [4];
  undefined1 local_b4 [4];
  longlong local_b0;
  code *local_a8;
  longlong **local_a0;
  longlong *local_98;
  undefined1 *local_90;
  uchar *local_88;
  uchar *local_80;
  uchar *local_78;
  uchar *local_70;
  FText local_68;
  FText local_58 [2];
  
  local_c8 = (UDynamicMesh *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_d0 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_res10[0] = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_f8[0] = '\0';
  local_f8[1] = '\0';
  local_f8[2] = '\0';
  local_f8[3] = '\0';
  local_f8[4] = '\0';
  local_f8[5] = '\0';
  local_f8[6] = '\0';
  local_f8[7] = '\0';
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  puVar11 = param_2->MostRecentPropertyAddress;
  local_f0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar9 = local_f8;
  if (puVar11 != (uchar *)0x0) {
    puVar9 = puVar11;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  puVar11 = param_2->MostRecentPropertyAddress;
  local_e8[0] = '\0';
  local_e8[1] = '\0';
  local_e8[2] = '\0';
  local_e8[3] = '\0';
  local_e8[4] = '\0';
  local_e8[5] = '\0';
  local_e8[6] = '\0';
  local_e8[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar10 = (uchar *)&local_f0;
  if (puVar11 != (uchar *)0x0) {
    puVar10 = puVar11;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8);
  }
  puVar11 = param_2->MostRecentPropertyAddress;
  local_e0 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar12 = local_e8;
  if (puVar11 != (uchar *)0x0) {
    puVar12 = puVar11;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  local_d8 = 0;
  puVar11 = (uchar *)&local_e0;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar11 = param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  this = local_c8;
  lVar8 = local_d0;
  lVar4 = local_d8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res20[0] = local_res10[0];
  local_b0 = local_d0;
  puVar9[0] = '\0';
  puVar9[1] = '\0';
  puVar9[2] = '\0';
  puVar9[3] = 0xe0;
  puVar9[4] = 0xff;
  puVar9[5] = 0xff;
  puVar9[6] = 0xef;
  puVar9[7] = 'G';
  if (this == (UDynamicMesh *)0x0) {
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_68,L"UGeometryScriptLibrary_MeshComparisonFunctions",
                        L"MeasureDistancesBetweenMeshes_InvalidInput",
                        L"MeasureDistancesBetweenMeshes: TargetMesh is Null");
    if (1 < (byte)LogGeometry._0_1_) {
      FText::ToString(pFVar7);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
    }
    local_120 = (pFVar7->TextData).Reference;
    local_128 = 0x200;
    if (local_120 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_120 + 8))(local_120,local_c0);
    }
    local_118 = pFVar7->Flags;
    if (lVar4 != 0) {
      if (((*(undefined2 **)(lVar4 + 0x28) <= &local_128) &&
          (&local_128 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = *(int *)(lVar4 + 0x30);
      if (iVar6 == *(int *)(lVar4 + 0x34)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
      }
      lVar8 = (longlong)iVar6;
      *(int *)(lVar4 + 0x30) = iVar6 + 1;
      pFVar2 = ((ForAnyElementType *)(lVar4 + 0x28))->Data;
      pFVar2[lVar8 * 0x18] = local_128._0_1_;
      pFVar2[lVar8 * 0x18 + 1] = local_128._1_1_;
      *(undefined8 *)(pFVar2 + lVar8 * 0x18 + 8) = 0;
      *(ITextData **)(pFVar2 + lVar8 * 0x18 + 8) = local_120;
      if (local_120 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_120 + 8))(local_120,local_bc);
      }
      *(uint *)(pFVar2 + lVar8 * 0x18 + 0x10) = local_118;
    }
    if (local_120 != (ITextData *)0x0) {
      (**(code **)((longlong)*local_120 + 0x10))();
    }
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    *local_res18 = 0;
  }
  else {
    if (lVar8 == 0) {
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (local_58,L"UGeometryScriptLibrary_MeshComparisonFunctions",
                          L"MeasureDistancesBetweenMeshes_InvalidInput2",
                          L"MeasureDistancesBetweenMeshes: OtherMesh is Null");
      if (1 < (byte)LogGeometry._0_1_) {
        FText::ToString(pFVar7);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      local_108 = (pFVar7->TextData).Reference;
      local_110 = 0x200;
      if (local_108 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_108 + 8))(local_108,local_b8);
      }
      local_100 = pFVar7->Flags;
      if (lVar4 != 0) {
        if (((*(undefined2 **)(lVar4 + 0x28) <= &local_110) &&
            (&local_110 < *(undefined2 **)(lVar4 + 0x28) + (longlong)*(int *)(lVar4 + 0x34) * 0xc))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = *(int *)(lVar4 + 0x30);
        if (iVar6 == *(int *)(lVar4 + 0x34)) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,(ForAnyElementType *)(lVar4 + 0x28),(int *)(lVar4 + 0x34));
        }
        lVar8 = (longlong)iVar6;
        *(int *)(lVar4 + 0x30) = iVar6 + 1;
        pFVar2 = ((ForAnyElementType *)(lVar4 + 0x28))->Data;
        pFVar2[lVar8 * 0x18] = local_110._0_1_;
        pFVar2[lVar8 * 0x18 + 1] = local_110._1_1_;
        *(undefined8 *)(pFVar2 + lVar8 * 0x18 + 8) = 0;
        *(ITextData **)(pFVar2 + lVar8 * 0x18 + 8) = local_108;
        if (local_108 != (ITextData *)0x0) {
          (**(code **)((longlong)*local_108 + 8))(local_108,local_b4);
        }
        *(uint *)(pFVar2 + lVar8 * 0x18 + 0x10) = local_100;
      }
      if (local_108 != (ITextData *)0x0) {
        (**(code **)((longlong)*local_108 + 0x10))();
      }
      if (local_58[0].TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58[0].TextData.Reference + 0x10))();
      }
    }
    else {
      local_98 = &local_b0;
      local_90 = local_res20;
      local_a0 = &local_98;
      local_a8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UGeometryScriptLibrary_MeshComparisonFunctions::MeasureDistancesBetweenMeshes'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
                 ::Call;
      local_88 = puVar9;
      local_80 = puVar10;
      local_78 = puVar12;
      local_70 = puVar11;
      UDynamicMesh::ProcessMesh
                (this,(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *)&local_a8);
    }
    *local_res18 = this;
  }
  return;
}

