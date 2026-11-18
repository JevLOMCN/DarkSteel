// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 8

// StaticClass @ 14cf2f790

UClass * __cdecl UARTrackedQRCode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTrackedQRCode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTrackedQRCode",
               &Z_Registration_Info_UClass_UARTrackedQRCode.InnerSingleton,
               StaticRegisterNativesUARTrackedQRCode,400,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARTrackedQRCode>,
               InternalVTableHelperCtorCaller<UARTrackedQRCode>,local_res8,
               UARTrackedImage::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTrackedQRCode.InnerSingleton;
}

// UARTrackedQRCode @ 14cf435f0

UARTrackedQRCode * __thiscall
UARTrackedQRCode::UARTrackedQRCode(UARTrackedQRCode *this,FVTableHelper *param_1)

{
  UARTrackedGeometry::UARTrackedGeometry((UARTrackedGeometry *)this,param_1);
  *(undefined ***)this = &___7UARTrackedQRCode__6B_;
  *(undefined8 *)&this->field_0x158 = 0;
  (this->QRCode).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QRCode).Data.ArrayNum = 0;
  (this->QRCode).Data.ArrayMax = 0;
  return this;
}

// UARTrackedQRCode @ 14cf43630

UARTrackedQRCode * __thiscall UARTrackedQRCode::UARTrackedQRCode(UARTrackedQRCode *this)

{
  UARTrackedGeometry::UARTrackedGeometry((UARTrackedGeometry *)this);
  *(undefined ***)this = &___7UARTrackedQRCode__6B_;
  *(undefined8 *)&this->field_0x158 = 0;
  (this->QRCode).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QRCode).Data.ArrayNum = 0;
  (this->QRCode).Data.ArrayMax = 0;
  return this;
}

// ~UARTrackedQRCode @ 14cf44d70

void __thiscall UARTrackedQRCode::~UARTrackedQRCode(UARTrackedQRCode *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &___7UARTrackedQRCode__6B_;
  pFVar1 = (this->QRCode).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)this = &___7UARTrackedImage__6B_;
  UARTrackedGeometry::~UARTrackedGeometry((UARTrackedGeometry *)this);
  return;
}

// GetNetworkPayload @ 14cf52d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UARTrackedQRCode::GetNetworkPayload(UARTrackedQRCode *this,FARQRCodeUpdatePayload *param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
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
  dVar1 = *(double *)&this->field_0x168;
  (param_1->Extents).field0_0x0._s_0.X = *(double *)&this->field_0x160;
  (param_1->Extents).field0_0x0._s_0.Y = dVar1;
  (param_1->Extents).field0_0x0._s_0.Z = 0.0;
  iVar2 = (this->QRCode).Data.ArrayNum;
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  ::FString::AssignRange
            (&param_1->QRCode,(wchar_t *)(this->QRCode).Data.AllocatorInstance.Data,iVar3);
  UARTrackedGeometry::UpdateSessionPayload((UARTrackedGeometry *)this,&param_1->SessionPayload);
  return;
}

// GetPrivateStaticClass @ 14cf55b40

UClass * __cdecl UARTrackedQRCode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTrackedQRCode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTrackedQRCode",
               &Z_Registration_Info_UClass_UARTrackedQRCode.InnerSingleton,
               StaticRegisterNativesUARTrackedQRCode,400,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARTrackedQRCode>,
               InternalVTableHelperCtorCaller<UARTrackedQRCode>,local_res8,
               UARTrackedImage::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTrackedQRCode.InnerSingleton;
}

// StaticRegisterNativesUARTrackedQRCode @ 14cf61660

void __cdecl UARTrackedQRCode::StaticRegisterNativesUARTrackedQRCode(void)

{
  return;
}

// UpdateTrackedGeometry @ 14cf675e0

void __thiscall
UARTrackedQRCode::UpdateTrackedGeometry
          (UARTrackedQRCode *this,TSharedRef<FARSupportInterface,1> *param_1,uint param_2,
          double param_3,TTransform<double> *param_4,TTransform<double> *param_5,
          TVector2<double> *param_6,FString *param_7,int param_8)

{
  double dVar1;
  
  UARTrackedGeometry::UpdateTrackedGeometry
            ((UARTrackedGeometry *)this,param_1,param_2,param_3,param_4,param_5);
  dVar1 = (param_6->field0_0x0)._s_0.Y;
  *(double *)&this->field_0x160 = (param_6->field0_0x0)._s_0.X;
  *(double *)&this->field_0x168 = dVar1;
  *(undefined8 *)&this->field_0x158 = 0;
  this->field_0x118 = 8;
  ::FString::operator=(&this->QRCode,param_7);
  this->Version = param_8;
  return;
}

