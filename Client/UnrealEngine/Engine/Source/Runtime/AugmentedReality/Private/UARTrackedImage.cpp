// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 12

// StaticClass @ 14cf2f440

UClass * __cdecl UARTrackedImage::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTrackedImage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTrackedImage",
               &Z_Registration_Info_UClass_UARTrackedImage.InnerSingleton,
               StaticRegisterNativesUARTrackedImage,0x170,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARTrackedImage>,
               InternalVTableHelperCtorCaller<UARTrackedImage>,local_res8,
               UARTrackedGeometry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTrackedImage.InnerSingleton;
}

// UARTrackedImage @ 14cf433b0

UARTrackedImage * __thiscall
UARTrackedImage::UARTrackedImage(UARTrackedImage *this,FVTableHelper *param_1)

{
  UARTrackedGeometry::UARTrackedGeometry((UARTrackedGeometry *)this,param_1);
  this->_padding_ = (longlong)&___7UARTrackedImage__6B_;
  (this->DetectedImage).field0_0x0.DebugPtr = (UARCandidateImage *)0x0;
  return this;
}

// UARTrackedImage @ 14cf433f0

UARTrackedImage * __thiscall UARTrackedImage::UARTrackedImage(UARTrackedImage *this)

{
  UARTrackedGeometry::UARTrackedGeometry((UARTrackedGeometry *)this);
  this->_padding_ = (longlong)&___7UARTrackedImage__6B_;
  (this->DetectedImage).field0_0x0.DebugPtr = (UARCandidateImage *)0x0;
  return this;
}

// ~UARTrackedImage @ 14cf44ca0

void __thiscall UARTrackedImage::~UARTrackedImage(UARTrackedImage *this)

{
  this->_padding_ = (longlong)&___7UARTrackedImage__6B_;
  UARTrackedGeometry::~UARTrackedGeometry((UARTrackedGeometry *)this);
  return;
}

// DebugDraw @ 14cf4d780

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
UARTrackedImage::DebugDraw
          (UARTrackedImage *this,UWorld *param_1,FLinearColor *param_2,float param_3,float param_4)

{
  UARCandidateImage *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStackY_188 [32];
  FColor_u_0 local_138;
  FName local_134;
  FString local_128;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  TQuat<double> local_e8;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UARTrackedGeometry::GetLocalToWorldTransform((UARTrackedGeometry *)this,&local_c8);
  local_134 = (FName)this->_padding_;
  ::FName::ToString(&local_134,(FString *)&local_e8);
  ::FString::PrintfImpl(&local_128,L"%s - %s");
  if ((void *)local_e8.X != (void *)0x0) {
    FMemory::Free((void *)local_e8.X);
  }
  fVar2 = (param_2->field0_0x0)._s_0.B;
  fVar4 = (param_2->field0_0x0)._s_0.R;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if (__real_3f800000 <= fVar2) {
    fVar2 = __real_3f800000;
  }
  if (__real_3f800000 <= fVar4) {
    fVar4 = __real_3f800000;
  }
  fVar3 = (param_2->field0_0x0)._s_0.G;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  local_138._s_0.B = (uchar)(int)(fVar2 * __real_437f0000 + __real_3f000000);
  if (__real_3f800000 <= fVar3) {
    fVar3 = __real_3f800000;
  }
  fVar2 = (param_2->field0_0x0)._s_0.A;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  local_138._s_0.G = (uchar)(int)(fVar3 * __real_437f0000 + __real_3f000000);
  if (__real_3f800000 <= fVar2) {
    fVar2 = __real_3f800000;
  }
  local_138._s_0.R = (uchar)(int)(fVar4 * __real_437f0000 + __real_3f000000);
  local_138._s_0.A = (uchar)(int)(fVar2 * __real_437f0000 + __real_3f000000);
  pUVar1 = (this->DetectedImage).field0_0x0.DebugPtr;
  local_118._s_0.Y = (double)(pUVar1->Width * __real_3f000000);
  local_118._s_0.X = (double)(pUVar1->Height * __real_3f000000);
  local_100._s_0.X = local_c8.Translation.XY.m128d_f64[0];
  local_100._s_0.Y = local_c8.Translation.XY.m128d_f64[1];
  local_e8.X = local_c8.Rotation.XY.m128d_f64[0];
  local_e8.Y = local_c8.Rotation.XY.m128d_f64[1];
  local_118._s_0.Z = 0.0;
  local_100._s_0.Z = local_c8.Translation.ZW.m128d_f64[0];
  local_e8.Z = local_c8.Rotation.ZW.m128d_f64[0];
  local_e8.W = local_c8.Rotation.ZW.m128d_f64[1];
  DrawDebugBox(param_1,(TVector<double> *)&local_100._s_0,(TVector<double> *)&local_118._s_0,
               &local_e8,(FColor *)&local_138._s_0,false,param_4,'\0',param_3 * __real_3dcccccd);
  ARDebugHelpers::DrawDebugString
            (param_1,(TVector<double> *)&local_100._s_0,&local_128,param_3 * __real_3e800000,
             (FColor *)&local_138._s_0,param_4,true);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  return;
}

// GetEstimateSize @ 14cf50d10

TVector2<double> * __thiscall
UARTrackedImage::GetEstimateSize(UARTrackedImage *this,TVector2<double> *__return_storage_ptr__)

{
  double dVar1;
  
  dVar1 = (this->EstimatedSize).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->EstimatedSize).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  return __return_storage_ptr__;
}

// GetNetworkPayload @ 14cf52bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UARTrackedImage::GetNetworkPayload(UARTrackedImage *this,FARImageUpdatePayload *param_1)

{
  UARCandidateImage *pUVar1;
  double dVar2;
  TTransform<double> *pTVar3;
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  pTVar3 = UARTrackedGeometry::GetLocalToWorldTransform((UARTrackedGeometry *)this,&local_78);
  dVar2 = (pTVar3->Rotation).XY.m128d_f64[1];
  (param_1->WorldTransform).Rotation.XY.m128d_f64[0] = (pTVar3->Rotation).XY.m128d_f64[0];
  (param_1->WorldTransform).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (pTVar3->Rotation).ZW.m128d_f64[1];
  (param_1->WorldTransform).Rotation.ZW.m128d_f64[0] = (pTVar3->Rotation).ZW.m128d_f64[0];
  (param_1->WorldTransform).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (pTVar3->Translation).XY.m128d_f64[1];
  (param_1->WorldTransform).Translation.XY.m128d_f64[0] = (pTVar3->Translation).XY.m128d_f64[0];
  (param_1->WorldTransform).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (pTVar3->Translation).ZW.m128d_f64[1];
  (param_1->WorldTransform).Translation.ZW.m128d_f64[0] = (pTVar3->Translation).ZW.m128d_f64[0];
  (param_1->WorldTransform).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (pTVar3->Scale3D).XY.m128d_f64[1];
  (param_1->WorldTransform).Scale3D.XY.m128d_f64[0] = (pTVar3->Scale3D).XY.m128d_f64[0];
  (param_1->WorldTransform).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (pTVar3->Scale3D).ZW.m128d_f64[1];
  (param_1->WorldTransform).Scale3D.ZW.m128d_f64[0] = (pTVar3->Scale3D).ZW.m128d_f64[0];
  (param_1->WorldTransform).Scale3D.ZW.m128d_f64[1] = dVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (this->DetectedImage).field0_0x0.DebugPtr, pUVar1 != (UARCandidateImage *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (param_1->DetectedImage).field0_0x0 = (this->DetectedImage).field0_0x0;
  dVar2 = (this->EstimatedSize).field0_0x0._s_0.Y;
  (param_1->EstimatedSize).field0_0x0._s_0.X = (this->EstimatedSize).field0_0x0._s_0.X;
  (param_1->EstimatedSize).field0_0x0._s_0.Y = dVar2;
  UARTrackedGeometry::UpdateSessionPayload((UARTrackedGeometry *)this,&param_1->SessionPayload);
  return;
}

// GetPrivateStaticClass @ 14cf55840

UClass * __cdecl UARTrackedImage::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTrackedImage.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTrackedImage",
               &Z_Registration_Info_UClass_UARTrackedImage.InnerSingleton,
               StaticRegisterNativesUARTrackedImage,0x170,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARTrackedImage>,
               InternalVTableHelperCtorCaller<UARTrackedImage>,local_res8,
               UARTrackedGeometry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTrackedImage.InnerSingleton;
}

// StaticRegisterNativesUARTrackedImage @ 14cf61590

void __cdecl UARTrackedImage::StaticRegisterNativesUARTrackedImage(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UARTrackedImage_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateTrackedGeometry @ 14cf674a0

void __thiscall
UARTrackedImage::UpdateTrackedGeometry
          (UARTrackedImage *this,TSharedRef<FARSupportInterface,1> *param_1,uint param_2,
          double param_3,TTransform<double> *param_4,TTransform<double> *param_5,
          TVector2<double> *param_6,UARCandidateImage *param_7)

{
  double *pdVar1;
  double dVar2;
  
  UARTrackedGeometry::UpdateTrackedGeometry
            ((UARTrackedGeometry *)this,param_1,param_2,param_3,param_4,param_5);
  dVar2 = (param_6->field0_0x0)._s_0.Y;
  (this->EstimatedSize).field0_0x0._s_0.X = (param_6->field0_0x0)._s_0.X;
  (this->EstimatedSize).field0_0x0._s_0.Y = dVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_7 != (UARCandidateImage *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_7);
  }
  (this->DetectedImage).field0_0x0.DebugPtr = param_7;
  pdVar1 = &(this->EstimatedSize).field0_0x0._s_0.Y;
  *(undefined1 *)&this->_padding_ = 8;
  if ((((this->EstimatedSize).field0_0x0._s_0.X == 0.0) || (*pdVar1 == 0.0)) &&
     (param_7 != (UARCandidateImage *)0x0)) {
    (this->EstimatedSize).field0_0x0._s_0.X = (double)param_7->Width;
    *pdVar1 = (double)param_7->Height;
  }
  return;
}

// execGetDetectedImage @ 14cf6de20

void __cdecl UARTrackedImage::execGetDetectedImage(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[8].field_0x18;
  return;
}

// execGetEstimateSize @ 14cf6e050

void __cdecl UARTrackedImage::execGetEstimateSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)(param_1 + 9);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[8].field_0x20;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

