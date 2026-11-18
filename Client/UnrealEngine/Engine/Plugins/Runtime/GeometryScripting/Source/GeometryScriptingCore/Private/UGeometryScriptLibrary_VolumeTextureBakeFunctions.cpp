// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 8

// StaticClass @ 14cea7430

UClass * __cdecl UGeometryScriptLibrary_VolumeTextureBakeFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_VolumeTextureBakeFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_VolumeTextureBakeFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_VolumeTextureBakeFunctions.
                InnerSingleton,
               StaticRegisterNativesUGeometryScriptLibrary_VolumeTextureBakeFunctions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_VolumeTextureBakeFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_VolumeTextureBakeFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_VolumeTextureBakeFunctions.InnerSingleton
  ;
}

// UGeometryScriptLibrary_VolumeTextureBakeFunctions @ 14ceaea50

UGeometryScriptLibrary_VolumeTextureBakeFunctions * __thiscall
UGeometryScriptLibrary_VolumeTextureBakeFunctions::UGeometryScriptLibrary_VolumeTextureBakeFunctions
          (UGeometryScriptLibrary_VolumeTextureBakeFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_VolumeTextureBakeFunctions__6B_;
  return this;
}

// UGeometryScriptLibrary_VolumeTextureBakeFunctions @ 14ceaea80

UGeometryScriptLibrary_VolumeTextureBakeFunctions * __thiscall
UGeometryScriptLibrary_VolumeTextureBakeFunctions::UGeometryScriptLibrary_VolumeTextureBakeFunctions
          (UGeometryScriptLibrary_VolumeTextureBakeFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UGeometryScriptLibrary_VolumeTextureBakeFunctions__6B_;
  return this;
}

// ~UGeometryScriptLibrary_VolumeTextureBakeFunctions @ 14ceaec70

void __thiscall
UGeometryScriptLibrary_VolumeTextureBakeFunctions::
~UGeometryScriptLibrary_VolumeTextureBakeFunctions
          (UGeometryScriptLibrary_VolumeTextureBakeFunctions *this)

{
  *(undefined ***)this = &___7UGeometryScriptLibrary_VolumeTextureBakeFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// BakeSignedDistanceToVolumeTexture @ 14ceb44c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UGeometryScriptLibrary_VolumeTextureBakeFunctions::BakeSignedDistanceToVolumeTexture
          (UDynamicMesh *param_1,UVolumeTexture *param_2,FComputeDistanceFieldSettings *param_3,
          FDistanceFieldToTextureSettings param_4)

{
  if (param_1 == (UDynamicMesh *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      return false;
    }
  }
  else if (param_2 == (UVolumeTexture *)0x0) {
    if (2 < (byte)LogGeometry._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      return false;
    }
  }
  else if (2 < (byte)LogGeometry._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
  }
  return false;
}

// GetPrivateStaticClass @ 14cebd5b0

UClass * __cdecl UGeometryScriptLibrary_VolumeTextureBakeFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryScriptLibrary_VolumeTextureBakeFunctions.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryScriptingCore",L"GeometryScriptLibrary_VolumeTextureBakeFunctions",
               &Z_Registration_Info_UClass_UGeometryScriptLibrary_VolumeTextureBakeFunctions.
                InnerSingleton,
               StaticRegisterNativesUGeometryScriptLibrary_VolumeTextureBakeFunctions,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryScriptLibrary_VolumeTextureBakeFunctions>,
               InternalVTableHelperCtorCaller<UGeometryScriptLibrary_VolumeTextureBakeFunctions>,
               local_res8,UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryScriptLibrary_VolumeTextureBakeFunctions.InnerSingleton
  ;
}

// StaticRegisterNativesUGeometryScriptLibrary_VolumeTextureBakeFunctions @ 14cec2980

void __cdecl
UGeometryScriptLibrary_VolumeTextureBakeFunctions::
StaticRegisterNativesUGeometryScriptLibrary_VolumeTextureBakeFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr =
       Z_Construct_UClass_UGeometryScriptLibrary_VolumeTextureBakeFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execBakeSignedDistanceToVolumeTexture @ 14cec5450

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UGeometryScriptLibrary_VolumeTextureBakeFunctions::execBakeSignedDistanceToVolumeTexture
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FStaticBasicLogRecord *pFVar3;
  undefined8 local_res10;
  longlong local_res18;
  longlong local_res20;
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_48[0] = 0;
  local_44 = 0x40000000;
  local_40 = 0;
  local_3c = 0x20;
  local_38 = 0x20;
  local_34 = 0x20;
  local_30 = 1;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  local_res10 = 0x3f800000;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 == 0) {
    if ((byte)LogGeometry._0_1_ < 3) goto LAB_14cec55ef;
    pFVar3 = &::LOG_Static;
  }
  else if (local_res20 == 0) {
    if ((byte)LogGeometry._0_1_ < 3) goto LAB_14cec55ef;
    pFVar3 = &::LOG_Static;
  }
  else {
    if ((byte)LogGeometry._0_1_ < 3) goto LAB_14cec55ef;
    pFVar3 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar3,(FLogCategoryBase *)&LogGeometry);
LAB_14cec55ef:
  *(undefined1 *)param_3 = 0;
  return;
}

