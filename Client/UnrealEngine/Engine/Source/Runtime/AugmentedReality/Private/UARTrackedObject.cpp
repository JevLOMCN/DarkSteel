// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 10

// StaticClass @ 14cf344c0

UClass * __cdecl UARTrackedObject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTrackedObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTrackedObject",
               &Z_Registration_Info_UClass_UARTrackedObject.InnerSingleton,
               StaticRegisterNativesUARTrackedObject,0x160,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARTrackedObject>,
               InternalVTableHelperCtorCaller<UARTrackedObject>,local_res8,
               UARTrackedGeometry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTrackedObject.InnerSingleton;
}

// UARTrackedObject @ 14cf43430

UARTrackedObject * __thiscall
UARTrackedObject::UARTrackedObject(UARTrackedObject *this,FVTableHelper *param_1)

{
  UARTrackedGeometry::UARTrackedGeometry((UARTrackedGeometry *)this,param_1);
  this->_padding_ = (longlong)&___7UARTrackedObject__6B_;
  (this->DetectedObject).field0_0x0.DebugPtr = (UARCandidateObject *)0x0;
  return this;
}

// UARTrackedObject @ 14cf43470

UARTrackedObject * __thiscall UARTrackedObject::UARTrackedObject(UARTrackedObject *this)

{
  UARTrackedGeometry::UARTrackedGeometry((UARTrackedGeometry *)this);
  this->_padding_ = (longlong)&___7UARTrackedObject__6B_;
  (this->DetectedObject).field0_0x0.DebugPtr = (UARCandidateObject *)0x0;
  return this;
}

// ~UARTrackedObject @ 14cf44cc0

void __thiscall UARTrackedObject::~UARTrackedObject(UARTrackedObject *this)

{
  this->_padding_ = (longlong)&___7UARTrackedObject__6B_;
  UARTrackedGeometry::~UARTrackedGeometry((UARTrackedGeometry *)this);
  return;
}

// DebugDraw @ 14cf4d9d0

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
UARTrackedObject::DebugDraw
          (UARTrackedObject *this,UWorld *param_1,FLinearColor *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStackY_138 [32];
  FColor_u_0 local_f8;
  FName local_f4;
  TVector<double>_u_0 local_e8;
  FString local_d0;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  UARTrackedGeometry::GetLocalToWorldTransform((UARTrackedGeometry *)this,&local_b8);
  local_f4 = (FName)this->_padding_;
  ::FName::ToString(&local_f4,&local_d0);
  fVar1 = __real_3f000000;
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
  local_f8._s_0.B = (uchar)(int)(fVar2 * __real_437f0000 + __real_3f000000);
  if (__real_3f800000 <= fVar3) {
    fVar3 = __real_3f800000;
  }
  fVar2 = (param_2->field0_0x0)._s_0.A;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  local_f8._s_0.G = (uchar)(int)(fVar3 * __real_437f0000 + __real_3f000000);
  if (__real_3f800000 <= fVar2) {
    fVar2 = __real_3f800000;
  }
  local_f8._s_0.R = (uchar)(int)(fVar4 * __real_437f0000 + __real_3f000000);
  local_e8._s_0.Z = local_b8.Translation.ZW.m128d_f64[0];
  local_f8._s_0.A = (uchar)(int)(fVar2 * __real_437f0000 + __real_3f000000);
  local_e8._s_0.X = local_b8.Translation.XY.m128d_f64[0];
  local_e8._s_0.Y = local_b8.Translation.XY.m128d_f64[1];
  ARDebugHelpers::DrawDebugString
            (param_1,(TVector<double> *)&local_e8._s_0,&local_d0,param_3 * __real_3e800000,
             (FColor *)&local_f8._s_0,param_4,true);
  local_e8._s_0.X = local_b8.Translation.XY.m128d_f64[0];
  local_e8._s_0.Y = local_b8.Translation.XY.m128d_f64[1];
  local_e8._s_0.Z = local_b8.Translation.ZW.m128d_f64[0];
  DrawDebugPoint(param_1,(TVector<double> *)&local_e8._s_0,fVar1,(FColor *)&local_f8._s_0,false,
                 param_4,'\0');
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  return;
}

// GetNetworkPayload @ 14cf52cc0

void __thiscall
UARTrackedObject::GetNetworkPayload(UARTrackedObject *this,FARObjectUpdatePayload *param_1)

{
  return;
}

// GetPrivateStaticClass @ 14cf55900

UClass * __cdecl UARTrackedObject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTrackedObject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTrackedObject",
               &Z_Registration_Info_UClass_UARTrackedObject.InnerSingleton,
               StaticRegisterNativesUARTrackedObject,0x160,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARTrackedObject>,
               InternalVTableHelperCtorCaller<UARTrackedObject>,local_res8,
               UARTrackedGeometry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTrackedObject.InnerSingleton;
}

// StaticRegisterNativesUARTrackedObject @ 14cf615d0

void __cdecl UARTrackedObject::StaticRegisterNativesUARTrackedObject(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UARTrackedObject_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateTrackedGeometry @ 14cf67550

void __thiscall
UARTrackedObject::UpdateTrackedGeometry
          (UARTrackedObject *this,TSharedRef<FARSupportInterface,1> *param_1,uint param_2,
          double param_3,TTransform<double> *param_4,TTransform<double> *param_5,
          UARCandidateObject *param_6)

{
  UARTrackedGeometry::UpdateTrackedGeometry
            ((UARTrackedGeometry *)this,param_1,param_2,param_3,param_4,param_5);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (param_6 != (UARCandidateObject *)0x0) {
      UE::GC::MarkAsReachable((UObject *)param_6);
    }
    (this->DetectedObject).field0_0x0.DebugPtr = param_6;
    *(undefined1 *)&this->_padding_ = 10;
    return;
  }
  (this->DetectedObject).field0_0x0.DebugPtr = param_6;
  *(undefined1 *)&this->_padding_ = 10;
  return;
}

// execGetDetectedObject @ 14cf6de50

void __cdecl UARTrackedObject::execGetDetectedObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[8].field_0x18;
  return;
}

