// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 9

// StaticClass @ 14cf34ba0

UClass * __cdecl UARMeshGeometry::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARMeshGeometry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARMeshGeometry",
               &Z_Registration_Info_UClass_UARMeshGeometry.InnerSingleton,
               StaticRegisterNativesUARMeshGeometry,0x160,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARMeshGeometry>,
               InternalVTableHelperCtorCaller<UARMeshGeometry>,local_res8,
               UARTrackedGeometry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARMeshGeometry.InnerSingleton;
}

// UARMeshGeometry @ 14cf41dd0

UARMeshGeometry * __thiscall
UARMeshGeometry::UARMeshGeometry(UARMeshGeometry *this,FVTableHelper *param_1)

{
  UARTrackedGeometry::UARTrackedGeometry((UARTrackedGeometry *)this,param_1);
  *(undefined ***)this = &___7UARMeshGeometry__6B_;
  return this;
}

// UARMeshGeometry @ 14cf41e00

UARMeshGeometry * __thiscall UARMeshGeometry::UARMeshGeometry(UARMeshGeometry *this)

{
  UARTrackedGeometry::UARTrackedGeometry((UARTrackedGeometry *)this);
  *(undefined ***)this = &___7UARMeshGeometry__6B_;
  return this;
}

// ~UARMeshGeometry @ 14cf44510

void __thiscall UARMeshGeometry::~UARMeshGeometry(UARMeshGeometry *this)

{
  *(undefined ***)this = &___7UARMeshGeometry__6B_;
  UARTrackedGeometry::~UARTrackedGeometry((UARTrackedGeometry *)this);
  return;
}

// GetNetworkPayload @ 14cf529b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UARMeshGeometry::GetNetworkPayload(UARMeshGeometry *this,FARMeshUpdatePayload *param_1)

{
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  UARTrackedGeometry::GetLocalToWorldTransform((UARTrackedGeometry *)this,&local_78);
  (param_1->WorldTransform).Rotation.XY.m128d_f64[0] = local_78.Rotation.XY.m128d_f64[0];
  (param_1->WorldTransform).Rotation.XY.m128d_f64[1] = local_78.Rotation.XY.m128d_f64[1];
  (param_1->WorldTransform).Rotation.ZW.m128d_f64[0] = local_78.Rotation.ZW.m128d_f64[0];
  (param_1->WorldTransform).Rotation.ZW.m128d_f64[1] = local_78.Rotation.ZW.m128d_f64[1];
  (param_1->WorldTransform).Translation.XY.m128d_f64[0] = local_78.Translation.XY.m128d_f64[0];
  (param_1->WorldTransform).Translation.XY.m128d_f64[1] = local_78.Translation.XY.m128d_f64[1];
  (param_1->WorldTransform).Translation.ZW.m128d_f64[0] = local_78.Translation.ZW.m128d_f64[0];
  (param_1->WorldTransform).Translation.ZW.m128d_f64[1] = local_78.Translation.ZW.m128d_f64[1];
  (param_1->WorldTransform).Scale3D.XY.m128d_f64[0] = local_78.Scale3D.XY.m128d_f64[0];
  (param_1->WorldTransform).Scale3D.XY.m128d_f64[1] = local_78.Scale3D.XY.m128d_f64[1];
  (param_1->WorldTransform).Scale3D.ZW.m128d_f64[0] = local_78.Scale3D.ZW.m128d_f64[0];
  (param_1->WorldTransform).Scale3D.ZW.m128d_f64[1] = local_78.Scale3D.ZW.m128d_f64[1];
  UARTrackedGeometry::UpdateSessionPayload((UARTrackedGeometry *)this,&param_1->SessionPayload);
  return;
}

// GetObjectClassificationAtLocation @ 14cf53070

bool __thiscall
UARMeshGeometry::GetObjectClassificationAtLocation
          (UARMeshGeometry *this,TVector<double> *param_1,EARObjectClassification *param_2,
          TVector<double> *param_3,float param_4)

{
  return false;
}

// GetPrivateStaticClass @ 14cf54bb0

UClass * __cdecl UARMeshGeometry::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARMeshGeometry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARMeshGeometry",
               &Z_Registration_Info_UClass_UARMeshGeometry.InnerSingleton,
               StaticRegisterNativesUARMeshGeometry,0x160,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARMeshGeometry>,
               InternalVTableHelperCtorCaller<UARMeshGeometry>,local_res8,
               UARTrackedGeometry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARMeshGeometry.InnerSingleton;
}

// StaticRegisterNativesUARMeshGeometry @ 14cf61240

void __cdecl UARMeshGeometry::StaticRegisterNativesUARMeshGeometry(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UARMeshGeometry_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetObjectClassificationAtLocation @ 14cf6f140

void __cdecl
UARMeshGeometry::execGetObjectClassificationAtLocation
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  uchar *puVar3;
  uchar *puVar4;
  uchar *puVar5;
  uchar local_res8 [8];
  undefined4 local_res10 [2];
  uchar local_58 [24];
  uchar local_40 [24];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  puVar4 = param_2->MostRecentPropertyAddress;
  local_res8[0] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar5 = local_58;
  if (puVar4 != (uchar *)0x0) {
    puVar5 = puVar4;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  puVar4 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar3 = local_res8;
  if (puVar4 != (uchar *)0x0) {
    puVar3 = puVar4;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_40);
  }
  local_res10[0] = 0;
  puVar4 = local_40;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,puVar5,puVar3,puVar4,local_res10[0]);
  *(undefined1 *)param_3 = uVar2;
  return;
}

