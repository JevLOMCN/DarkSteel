// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 18

// StaticClass @ 14cf2faf0

UClass * __cdecl UARTraceResultLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTraceResultLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTraceResultLibrary",
               &Z_Registration_Info_UClass_UARTraceResultLibrary.InnerSingleton,
               StaticRegisterNativesUARTraceResultLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARTraceResultLibrary>,
               InternalVTableHelperCtorCaller<UARTraceResultLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTraceResultLibrary.InnerSingleton;
}

// UARTraceResultLibrary @ 14cf42d20

UARTraceResultLibrary * __thiscall
UARTraceResultLibrary::UARTraceResultLibrary(UARTraceResultLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UARTraceResultLibrary__6B_;
  return this;
}

// UARTraceResultLibrary @ 14cf42d50

UARTraceResultLibrary * __thiscall
UARTraceResultLibrary::UARTraceResultLibrary
          (UARTraceResultLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UARTraceResultLibrary__6B_;
  return this;
}

// ~UARTraceResultLibrary @ 14cf44950

void __thiscall UARTraceResultLibrary::~UARTraceResultLibrary(UARTraceResultLibrary *this)

{
  *(undefined ***)this = &___7UARTraceResultLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetDistanceFromCamera @ 14cf50bd0

float __cdecl UARTraceResultLibrary::GetDistanceFromCamera(FARTraceResult *param_1)

{
  return param_1->DistanceFromCamera;
}

// GetLocalToTrackingTransform @ 14cf51e60

TTransform<double> * __cdecl
UARTraceResultLibrary::GetLocalToTrackingTransform
          (TTransform<double> *__return_storage_ptr__,FARTraceResult *param_1)

{
  FARTraceResult::GetLocalToTrackingTransform(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetLocalToWorldTransform @ 14cf52270

TTransform<double> * __cdecl
UARTraceResultLibrary::GetLocalToWorldTransform
          (TTransform<double> *__return_storage_ptr__,FARTraceResult *param_1)

{
  FARTraceResult::GetLocalToWorldTransform(param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetLocalTransform @ 14cf52430

TTransform<double> * __cdecl
UARTraceResultLibrary::GetLocalTransform
          (TTransform<double> *__return_storage_ptr__,FARTraceResult *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (param_1->LocalTransform).Rotation.XY.m128d_f64[1];
  dVar2 = (param_1->LocalTransform).Rotation.ZW.m128d_f64[0];
  dVar3 = (param_1->LocalTransform).Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (param_1->LocalTransform).Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->LocalTransform).Translation.XY.m128d_f64[0];
  dVar4 = (param_1->LocalTransform).Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (param_1->LocalTransform).Translation.ZW.m128d_f64[0];
  dVar3 = (param_1->LocalTransform).Translation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar4;
  dVar1 = (param_1->LocalTransform).Scale3D.XY.m128d_f64[0];
  dVar4 = (param_1->LocalTransform).Scale3D.XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (param_1->LocalTransform).Scale3D.ZW.m128d_f64[0];
  dVar3 = (param_1->LocalTransform).Scale3D.ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar3;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14cf55610

UClass * __cdecl UARTraceResultLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTraceResultLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTraceResultLibrary",
               &Z_Registration_Info_UClass_UARTraceResultLibrary.InnerSingleton,
               StaticRegisterNativesUARTraceResultLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARTraceResultLibrary>,
               InternalVTableHelperCtorCaller<UARTraceResultLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTraceResultLibrary.InnerSingleton;
}

// GetTraceChannel @ 14cf56470

EARLineTraceChannels __cdecl UARTraceResultLibrary::GetTraceChannel(FARTraceResult *param_1)

{
  return param_1->TraceChannel;
}

// GetTrackedGeometry @ 14cf564e0

UARTrackedGeometry * __cdecl UARTraceResultLibrary::GetTrackedGeometry(FARTraceResult *param_1)

{
  return (param_1->TrackedGeometry).field0_0x0.DebugPtr;
}

// StaticRegisterNativesUARTraceResultLibrary @ 14cf61500

void __cdecl UARTraceResultLibrary::StaticRegisterNativesUARTraceResultLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UARTraceResultLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetDistanceFromCamera @ 14cf6de80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UARTraceResultLibrary::execGetDistanceFromCamera(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  undefined1 auStack_c8 [32];
  uchar local_a8 [16];
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined1 local_78 [16];
  double local_68;
  double dStack_60;
  undefined1 local_58 [16];
  double local_48;
  double dStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  TReferenceControllerBase<1> *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_98 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_90 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_a8[0] = '\0';
  local_a8[1] = '\0';
  local_a8[2] = '\0';
  local_a8[3] = '\0';
  local_a8[4] = 0;
  local_88 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_80 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_68 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_60 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_48 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_40 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_28 = (TReferenceControllerBase<1> *)0x0;
  local_38 = 0;
  uStack_30 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  puVar2 = local_a8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)puVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  return;
}

// execGetLocalToTrackingTransform @ 14cf6e670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UARTraceResultLibrary::execGetLocalToTrackingTransform
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  uchar *puVar4;
  undefined1 auStack_138 [32];
  TTransform<double> local_118;
  uchar local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  TReferenceControllerBase<1> *local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_b8[0] = '\0';
  local_b8[1] = '\0';
  local_b8[2] = '\0';
  local_b8[3] = '\0';
  local_b8[4] = 0;
  local_38 = (TReferenceControllerBase<1> *)0x0;
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
  local_48 = 0;
  uStack_40 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
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
  puVar4 = local_b8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)(puVar4 + 0x78) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_118.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_118.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_118.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_118.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_118.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_118.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_118.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_118.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_118.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_118.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_118.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_118.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_118.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_118.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_118.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_118.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_118.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_118.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_118,(TTransform<double> *)(puVar4 + 0x10),
             (TTransform<double> *)(*(longlong *)(puVar4 + 0x78) + 0x70));
  *(double *)param_3 = local_118.Rotation.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 8) = local_118.Rotation.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x10) = local_118.Rotation.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x18) = local_118.Rotation.ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x20) = local_118.Translation.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x28) = local_118.Translation.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x30) = local_118.Translation.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x38) = local_118.Translation.ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x40) = local_118.Scale3D.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x48) = local_118.Scale3D.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x50) = local_118.Scale3D.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x58) = local_118.Scale3D.ZW.m128d_f64[1];
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
  return;
}

// execGetLocalToWorldTransform @ 14cf6e970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UARTraceResultLibrary::execGetLocalToWorldTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FARTraceResult *this;
  undefined1 auStack_128 [32];
  FARTraceResult local_108;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_108.DistanceFromCamera = 0.0;
  local_108.TraceChannel = None;
  local_108.ARSystem.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_108.LocalTransform.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_108.LocalTransform.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_108.LocalTransform.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_108.LocalTransform.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_108.LocalTransform.Rotation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_108.LocalTransform.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_108.LocalTransform.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_108.LocalTransform.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_108.LocalTransform.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_108.LocalTransform.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_108.LocalTransform.Translation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_108.LocalTransform.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_108.LocalTransform.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_108.LocalTransform.Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_108.LocalTransform.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_108.LocalTransform.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_108.LocalTransform.Scale3D.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_108.LocalTransform.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_108.TrackedGeometry.field0_0x0.DebugPtr = (TObjectPtr<UARTrackedGeometry>_u_0)0x0;
  local_108.ARSystem.Object = (FARSupportInterface *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_108);
  }
  this = &local_108;
  if ((FARTraceResult *)param_2->MostRecentPropertyAddress != (FARTraceResult *)0x0) {
    this = (FARTraceResult *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FARTraceResult::GetLocalToWorldTransform(this,&local_78);
  *(double *)param_3 = local_78.Rotation.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 8) = local_78.Rotation.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x10) = local_78.Rotation.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x18) = local_78.Rotation.ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x20) = local_78.Translation.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x28) = local_78.Translation.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x30) = local_78.Translation.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x38) = local_78.Translation.ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x40) = local_78.Scale3D.XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x48) = local_78.Scale3D.XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x50) = local_78.Scale3D.ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x58) = local_78.Scale3D.ZW.m128d_f64[1];
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.ARSystem.SharedReferenceCount.ReferenceController);
  return;
}

// execGetLocalTransform @ 14cf6eb90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UARTraceResultLibrary::execGetLocalTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uchar *puVar13;
  undefined1 auStack_c8 [32];
  uchar local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  TReferenceControllerBase<1> *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8[0] = '\0';
  local_a8[1] = '\0';
  local_a8[2] = '\0';
  local_a8[3] = '\0';
  local_a8[4] = 0;
  local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_98._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_98._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_88._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_68._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_28 = (TReferenceControllerBase<1> *)0x0;
  local_38 = 0;
  uStack_30 = 0;
  local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_48._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  puVar13 = local_a8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar13 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = *(undefined8 *)(puVar13 + 0x18);
  uVar3 = *(undefined8 *)(puVar13 + 0x20);
  uVar4 = *(undefined8 *)(puVar13 + 0x28);
  uVar5 = *(undefined8 *)(puVar13 + 0x30);
  uVar6 = *(undefined8 *)(puVar13 + 0x38);
  uVar7 = *(undefined8 *)(puVar13 + 0x40);
  uVar8 = *(undefined8 *)(puVar13 + 0x48);
  uVar9 = *(undefined8 *)(puVar13 + 0x50);
  uVar10 = *(undefined8 *)(puVar13 + 0x58);
  uVar11 = *(undefined8 *)(puVar13 + 0x60);
  uVar12 = *(undefined8 *)(puVar13 + 0x68);
  *(undefined8 *)param_3 = *(undefined8 *)(puVar13 + 0x10);
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar3;
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar4;
  *(undefined8 *)((longlong)param_3 + 0x20) = uVar5;
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar6;
  *(undefined8 *)((longlong)param_3 + 0x30) = uVar7;
  *(undefined8 *)((longlong)param_3 + 0x38) = uVar8;
  *(undefined8 *)((longlong)param_3 + 0x40) = uVar9;
  *(undefined8 *)((longlong)param_3 + 0x48) = uVar10;
  *(undefined8 *)((longlong)param_3 + 0x50) = uVar11;
  *(undefined8 *)((longlong)param_3 + 0x58) = uVar12;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  return;
}

// execGetTraceChannel @ 14cf6f7a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UARTraceResultLibrary::execGetTraceChannel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  undefined1 auStack_c8 [32];
  uchar local_a8 [16];
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined1 local_78 [16];
  double local_68;
  double dStack_60;
  undefined1 local_58 [16];
  double local_48;
  double dStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  TReferenceControllerBase<1> *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_98 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_90 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_a8[0] = '\0';
  local_a8[1] = '\0';
  local_a8[2] = '\0';
  local_a8[3] = '\0';
  local_a8[4] = 0;
  local_88 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_80 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_68 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_60 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_48 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_40 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_28 = (TReferenceControllerBase<1> *)0x0;
  local_38 = 0;
  uStack_30 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  puVar2 = local_a8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(uchar *)param_3 = puVar2[4];
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  return;
}

// execGetTrackedGeometry @ 14cf6f910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UARTraceResultLibrary::execGetTrackedGeometry(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  undefined1 auStack_c8 [32];
  uchar local_a8 [16];
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined1 local_78 [16];
  double local_68;
  double dStack_60;
  undefined1 local_58 [16];
  double local_48;
  double dStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  TReferenceControllerBase<1> *local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_98 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_90 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_a8[0] = '\0';
  local_a8[1] = '\0';
  local_a8[2] = '\0';
  local_a8[3] = '\0';
  local_a8[4] = 0;
  local_88 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_80 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_78._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_58._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_68 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  dStack_60 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_48 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_40 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_28 = (TReferenceControllerBase<1> *)0x0;
  local_38 = 0;
  uStack_30 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  puVar2 = local_a8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(puVar2 + 0x70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  return;
}

