// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 12

// StaticClass @ 14cf34d40

UClass * __cdecl UARGeoAnchor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARGeoAnchor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARGeoAnchor",
               &Z_Registration_Info_UClass_UARGeoAnchor.InnerSingleton,
               StaticRegisterNativesUARGeoAnchor,0x170,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UARGeoAnchor>,InternalVTableHelperCtorCaller<UARGeoAnchor>,
               local_res8,UARTrackedGeometry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARGeoAnchor.InnerSingleton;
}

// UARGeoAnchor @ 14cf41610

UARGeoAnchor * __thiscall UARGeoAnchor::UARGeoAnchor(UARGeoAnchor *this,FVTableHelper *param_1)

{
  UARTrackedGeometry::UARTrackedGeometry((UARTrackedGeometry *)this,param_1);
  this->AltitudeSource = Unknown;
  *(undefined ***)this = &___7UARGeoAnchor__6B_;
  this->Longitude = 0.0;
  this->Latitude = 0.0;
  this->AltitudeMeters = 0.0;
  return this;
}

// UARGeoAnchor @ 14cf41650

UARGeoAnchor * __thiscall UARGeoAnchor::UARGeoAnchor(UARGeoAnchor *this)

{
  UARTrackedGeometry::UARTrackedGeometry((UARTrackedGeometry *)this);
  this->AltitudeSource = Unknown;
  *(undefined ***)this = &___7UARGeoAnchor__6B_;
  this->Longitude = 0.0;
  this->Latitude = 0.0;
  this->AltitudeMeters = 0.0;
  return this;
}

// ~UARGeoAnchor @ 14cf442d0

void __thiscall UARGeoAnchor::~UARGeoAnchor(UARGeoAnchor *this)

{
  *(undefined ***)this = &___7UARGeoAnchor__6B_;
  UARTrackedGeometry::~UARTrackedGeometry((UARTrackedGeometry *)this);
  return;
}

// GetNetworkPayload @ 14cf528d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UARGeoAnchor::GetNetworkPayload(UARGeoAnchor *this,FARGeoAnchorUpdatePayload *param_1)

{
  double dVar1;
  TTransform<double> *pTVar2;
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  UARTrackedGeometry::UpdateSessionPayload((UARTrackedGeometry *)this,&param_1->SessionPayload);
  pTVar2 = UARTrackedGeometry::GetLocalToWorldTransform((UARTrackedGeometry *)this,&local_78);
  dVar1 = (pTVar2->Rotation).XY.m128d_f64[1];
  (param_1->WorldTransform).Rotation.XY.m128d_f64[0] = (pTVar2->Rotation).XY.m128d_f64[0];
  (param_1->WorldTransform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Rotation).ZW.m128d_f64[1];
  (param_1->WorldTransform).Rotation.ZW.m128d_f64[0] = (pTVar2->Rotation).ZW.m128d_f64[0];
  (param_1->WorldTransform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Translation).XY.m128d_f64[1];
  (param_1->WorldTransform).Translation.XY.m128d_f64[0] = (pTVar2->Translation).XY.m128d_f64[0];
  (param_1->WorldTransform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Translation).ZW.m128d_f64[1];
  (param_1->WorldTransform).Translation.ZW.m128d_f64[0] = (pTVar2->Translation).ZW.m128d_f64[0];
  (param_1->WorldTransform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Scale3D).XY.m128d_f64[1];
  (param_1->WorldTransform).Scale3D.XY.m128d_f64[0] = (pTVar2->Scale3D).XY.m128d_f64[0];
  (param_1->WorldTransform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Scale3D).ZW.m128d_f64[1];
  (param_1->WorldTransform).Scale3D.ZW.m128d_f64[0] = (pTVar2->Scale3D).ZW.m128d_f64[0];
  (param_1->WorldTransform).Scale3D.ZW.m128d_f64[1] = dVar1;
  param_1->Longitude = this->Longitude;
  param_1->Latitude = this->Latitude;
  param_1->AltitudeMeters = this->AltitudeMeters;
  param_1->AltitudeSource = this->AltitudeSource;
  ::FString::operator=(&param_1->AnchorName,(FString *)&this->field_0x148);
  return;
}

// GetPrivateStaticClass @ 14cf545d0

UClass * __cdecl UARGeoAnchor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARGeoAnchor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARGeoAnchor",
               &Z_Registration_Info_UClass_UARGeoAnchor.InnerSingleton,
               StaticRegisterNativesUARGeoAnchor,0x170,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UARGeoAnchor>,InternalVTableHelperCtorCaller<UARGeoAnchor>,
               local_res8,UARTrackedGeometry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARGeoAnchor.InnerSingleton;
}

// StaticRegisterNativesUARGeoAnchor @ 14cf61070

void __cdecl UARGeoAnchor::StaticRegisterNativesUARGeoAnchor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UARGeoAnchor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateGeoAnchor @ 14cf66660

void __thiscall
UARGeoAnchor::UpdateGeoAnchor
          (UARGeoAnchor *this,TSharedRef<FARSupportInterface,1> *param_1,uint param_2,double param_3
          ,TTransform<double> *param_4,TTransform<double> *param_5,float param_6,float param_7,
          float param_8,EARAltitudeSource param_9)

{
  UARTrackedGeometry::UpdateTrackedGeometry
            ((UARTrackedGeometry *)this,param_1,param_2,param_3,param_4,param_5);
  this->Longitude = param_6;
  this->AltitudeMeters = param_8;
  this->Latitude = param_7;
  this->AltitudeSource = param_9;
  return;
}

// execGetAltitudeMeters @ 14cf6d480

void __cdecl UARGeoAnchor::execGetAltitudeMeters(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[8].field_0x20;
  return;
}

// execGetAltitudeSource @ 14cf6d4b0

void __cdecl UARGeoAnchor::execGetAltitudeSource(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[8].field_0x24;
  return;
}

// execGetLatitude @ 14cf6e4d0

void __cdecl UARGeoAnchor::execGetLatitude(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[8].field_0x1c;
  return;
}

// execGetLongitude @ 14cf6ed00

void __cdecl UARGeoAnchor::execGetLongitude(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[8].field_0x18;
  return;
}

