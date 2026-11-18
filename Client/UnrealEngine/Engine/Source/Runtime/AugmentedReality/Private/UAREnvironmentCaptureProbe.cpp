// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 13

// StaticClass @ 14cf33e70

UClass * __cdecl UAREnvironmentCaptureProbe::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAREnvironmentCaptureProbe.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"AREnvironmentCaptureProbe",
               &Z_Registration_Info_UClass_UAREnvironmentCaptureProbe.InnerSingleton,
               StaticRegisterNativesUAREnvironmentCaptureProbe,0x180,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAREnvironmentCaptureProbe>,
               InternalVTableHelperCtorCaller<UAREnvironmentCaptureProbe>,local_res8,
               UARTrackedGeometry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAREnvironmentCaptureProbe.InnerSingleton;
}

// UAREnvironmentCaptureProbe @ 14cf40f70

UAREnvironmentCaptureProbe * __thiscall
UAREnvironmentCaptureProbe::UAREnvironmentCaptureProbe
          (UAREnvironmentCaptureProbe *this,FVTableHelper *param_1)

{
  UARTrackedGeometry::UARTrackedGeometry((UARTrackedGeometry *)this,param_1);
  *(undefined ***)this = &___7UAREnvironmentCaptureProbe__6B_;
  (this->EnvironmentCaptureTexture).field0_0x0.DebugPtr = (UAREnvironmentCaptureProbeTexture *)0x0;
  return this;
}

// UAREnvironmentCaptureProbe @ 14cf40fb0

UAREnvironmentCaptureProbe * __thiscall
UAREnvironmentCaptureProbe::UAREnvironmentCaptureProbe(UAREnvironmentCaptureProbe *this)

{
  UARTrackedGeometry::UARTrackedGeometry((UARTrackedGeometry *)this);
  *(undefined ***)this = &___7UAREnvironmentCaptureProbe__6B_;
  (this->EnvironmentCaptureTexture).field0_0x0.DebugPtr = (UAREnvironmentCaptureProbeTexture *)0x0;
  return this;
}

// ~UAREnvironmentCaptureProbe @ 14cf44150

void __thiscall
UAREnvironmentCaptureProbe::~UAREnvironmentCaptureProbe(UAREnvironmentCaptureProbe *this)

{
  *(undefined ***)this = &___7UAREnvironmentCaptureProbe__6B_;
  UARTrackedGeometry::~UARTrackedGeometry((UARTrackedGeometry *)this);
  return;
}

// DebugDraw @ 14cf4c980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UAREnvironmentCaptureProbe::DebugDraw
          (UAREnvironmentCaptureProbe *this,UWorld *param_1,FLinearColor *param_2,float param_3,
          float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auStackY_168 [32];
  FColor_u_0 local_118;
  FName local_114;
  TVector<double>_u_0 local_108;
  FString local_f0;
  TQuat<double> local_d8;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_168;
  UARTrackedGeometry::GetLocalToWorldTransform((UARTrackedGeometry *)this,&local_b8);
  local_114.ComparisonIndex.Value = *(uint *)&this->field_0x140;
  local_114.Number = *(uint *)&this->field_0x144;
  ::FName::ToString(&local_114,&local_f0);
  fVar1 = (param_2->field0_0x0)._s_0.B;
  fVar3 = (param_2->field0_0x0)._s_0.R;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  if (__real_3f800000 <= fVar3) {
    fVar3 = __real_3f800000;
  }
  fVar2 = (param_2->field0_0x0)._s_0.G;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  local_118._s_0.B = (uchar)(int)(fVar1 * __real_437f0000 + __real_3f000000);
  if (__real_3f800000 <= fVar2) {
    fVar2 = __real_3f800000;
  }
  fVar1 = (param_2->field0_0x0)._s_0.A;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  local_118._s_0.G = (uchar)(int)(fVar2 * __real_437f0000 + __real_3f000000);
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  local_118._s_0.R = (uchar)(int)(fVar3 * __real_437f0000 + __real_3f000000);
  local_108._s_0.Z = local_b8.Translation.ZW.m128d_f64[0];
  local_118._s_0.A = (uchar)(int)(fVar1 * __real_437f0000 + __real_3f000000);
  local_108._s_0.X = local_b8.Translation.XY.m128d_f64[0];
  local_108._s_0.Y = local_b8.Translation.XY.m128d_f64[1];
  ARDebugHelpers::DrawDebugString
            (param_1,(TVector<double> *)&local_108._s_0,&local_f0,param_3 * __real_3e800000,
             (FColor *)&local_118._s_0,param_4,true);
  local_d8.X = local_b8.Rotation.XY.m128d_f64[0];
  local_d8.Y = local_b8.Rotation.XY.m128d_f64[1];
  local_d8.Z = local_b8.Rotation.ZW.m128d_f64[0];
  local_d8.W = local_b8.Rotation.ZW.m128d_f64[1];
  local_108._s_0.X = local_b8.Translation.XY.m128d_f64[0];
  local_108._s_0.Y = local_b8.Translation.XY.m128d_f64[1];
  local_108._s_0.Z = local_b8.Translation.ZW.m128d_f64[0];
  DrawDebugBox(param_1,(TVector<double> *)&local_108._s_0,&this->Extent,&local_d8,
               (FColor *)&local_118._s_0,false,param_4,'\0',param_3 * __real_3dcccccd);
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  return;
}

// GetEnvironmentCaptureTexture @ 14cf50c00

UAREnvironmentCaptureProbeTexture * __thiscall
UAREnvironmentCaptureProbe::GetEnvironmentCaptureTexture(UAREnvironmentCaptureProbe *this)

{
  return (this->EnvironmentCaptureTexture).field0_0x0.DebugPtr;
}

// GetExtent @ 14cf50d30

TVector<double> * __thiscall
UAREnvironmentCaptureProbe::GetExtent
          (UAREnvironmentCaptureProbe *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->Extent).field0_0x0._s_0.Y;
  dVar1 = (this->Extent).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->Extent).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetNetworkPayload @ 14cf52560

void __thiscall
UAREnvironmentCaptureProbe::GetNetworkPayload
          (UAREnvironmentCaptureProbe *this,FAREnvironmentProbeUpdatePayload *param_1)

{
  return;
}

// GetPrivateStaticClass @ 14cf54210

UClass * __cdecl UAREnvironmentCaptureProbe::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAREnvironmentCaptureProbe.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"AREnvironmentCaptureProbe",
               &Z_Registration_Info_UClass_UAREnvironmentCaptureProbe.InnerSingleton,
               StaticRegisterNativesUAREnvironmentCaptureProbe,0x180,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAREnvironmentCaptureProbe>,
               InternalVTableHelperCtorCaller<UAREnvironmentCaptureProbe>,local_res8,
               UARTrackedGeometry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAREnvironmentCaptureProbe.InnerSingleton;
}

// StaticRegisterNativesUAREnvironmentCaptureProbe @ 14cf60f60

void __cdecl UAREnvironmentCaptureProbe::StaticRegisterNativesUAREnvironmentCaptureProbe(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UAREnvironmentCaptureProbe_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateEnvironmentCapture @ 14cf66340

void __thiscall
UAREnvironmentCaptureProbe::UpdateEnvironmentCapture
          (UAREnvironmentCaptureProbe *this,TSharedRef<FARSupportInterface,1> *param_1,uint param_2,
          double param_3,TTransform<double> *param_4,TTransform<double> *param_5,
          TVector<double> *param_6)

{
  double dVar1;
  double dVar2;
  
  UARTrackedGeometry::UpdateTrackedGeometry
            ((UARTrackedGeometry *)this,param_1,param_2,param_3,param_4,param_5);
  dVar2 = (param_6->field0_0x0)._s_0.Y;
  dVar1 = (param_6->field0_0x0)._s_0.Z;
  (this->Extent).field0_0x0._s_0.X = (param_6->field0_0x0)._s_0.X;
  (this->Extent).field0_0x0._s_0.Y = dVar2;
  (this->Extent).field0_0x0._s_0.Z = dVar1;
  return;
}

// execGetEnvironmentCaptureTexture @ 14cf6e020

void __cdecl
UAREnvironmentCaptureProbe::execGetEnvironmentCaptureTexture
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[9].field_0x8;
  return;
}

// execGetExtent @ 14cf6e080

void __cdecl
UAREnvironmentCaptureProbe::execGetExtent(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = *(undefined8 *)&param_1[8].field_0x20;
  uVar1 = *(undefined8 *)(param_1 + 9);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[8].field_0x18;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar1;
  return;
}

