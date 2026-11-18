// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 16

// StaticClass @ 14cf76f00

UClass * __cdecl UXRLoadingScreenFunctionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UXRLoadingScreenFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/XRBase",L"XRLoadingScreenFunctionLibrary",
               &Z_Registration_Info_UClass_UXRLoadingScreenFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUXRLoadingScreenFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UXRLoadingScreenFunctionLibrary>,
               InternalVTableHelperCtorCaller<UXRLoadingScreenFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UXRLoadingScreenFunctionLibrary.InnerSingleton;
}

// UXRLoadingScreenFunctionLibrary @ 14cf7e850

UXRLoadingScreenFunctionLibrary * __thiscall
UXRLoadingScreenFunctionLibrary::UXRLoadingScreenFunctionLibrary
          (UXRLoadingScreenFunctionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UXRLoadingScreenFunctionLibrary__6B_;
  return this;
}

// UXRLoadingScreenFunctionLibrary @ 14cf7e880

UXRLoadingScreenFunctionLibrary * __thiscall
UXRLoadingScreenFunctionLibrary::UXRLoadingScreenFunctionLibrary
          (UXRLoadingScreenFunctionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UXRLoadingScreenFunctionLibrary__6B_;
  return this;
}

// ~UXRLoadingScreenFunctionLibrary @ 14cf7f320

void __thiscall
UXRLoadingScreenFunctionLibrary::~UXRLoadingScreenFunctionLibrary
          (UXRLoadingScreenFunctionLibrary *this)

{
  *(undefined ***)this = &___7UXRLoadingScreenFunctionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// AddLoadingScreenSplash @ 14cf81540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UXRLoadingScreenFunctionLibrary::AddLoadingScreenSplash
          (UTexture *param_1,TVector<double> *param_2,TRotator<double> *param_3,
          TVector2<double> *param_4,TRotator<double> *param_5,bool param_6)

{
  IXRTrackingSystem *pIVar1;
  longlong *plVar2;
  TQuat<double> *pTVar3;
  undefined1 auStack_178 [32];
  UTexture *local_158 [2];
  TQuat<double> local_148;
  FSplashDesc local_128;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  if ((((GEngine != (UEngine *)0x0) &&
       (pIVar1 = (GEngine->XRSystem).Object, pIVar1 != (IXRTrackingSystem *)0x0)) &&
      (plVar2 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x140))(), plVar2 != (longlong *)0x0))
     && (param_1 != (UTexture *)0x0)) {
    if (param_6) {
      (**(code **)(*plVar2 + 8))(plVar2);
    }
    IXRLoadingScreen::FSplashDesc::FSplashDesc(&local_128);
    local_158[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_128.TextureObj.WeakPtr,(FObjectPtr)local_158);
    local_128.QuadSize.field0_0x0._s_0.X = (param_4->field0_0x0)._s_0.X;
    local_128.QuadSize.field0_0x0._s_0.Y = (param_4->field0_0x0)._s_0.Y;
    pTVar3 = UE::Math::TRotator<double>::Quaternion(param_3,&local_148);
    local_128.Transform.Translation.XY.m128d_f64[0] = (param_2->field0_0x0)._s_0.X;
    local_128.Transform.Translation.XY.m128d_f64[1] = (param_2->field0_0x0)._s_0.Y;
    local_128.Transform.Rotation.XY.m128d_f64[0] = pTVar3->X;
    local_128.Transform.Rotation.XY.m128d_f64[1] = pTVar3->Y;
    local_128.Transform.Rotation.ZW.m128d_f64[0] = pTVar3->Z;
    local_128.Transform.Rotation.ZW.m128d_f64[1] = pTVar3->W;
    local_128.Transform.Translation.ZW.m128d_f64[0] = (param_2->field0_0x0)._s_0.Z;
    local_128.Transform.Translation.ZW.m128d_f64[1] = 0.0;
    local_128.Transform.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_128.Transform.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    local_128.Transform.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_128.Transform.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    pTVar3 = UE::Math::TRotator<double>::Quaternion(param_5,&local_148);
    local_128.DeltaRotation.X = pTVar3->X;
    local_128.DeltaRotation.Y = pTVar3->Y;
    local_128.DeltaRotation.Z = pTVar3->Z;
    local_128.DeltaRotation.W = pTVar3->W;
    (**(code **)(*plVar2 + 0x10))(plVar2,&local_128);
    if (local_128.LeftTexture.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_128.LeftTexture.Reference);
    }
    if (local_128.Texture.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_128.Texture.Reference);
    }
  }
  return;
}

// ClearLoadingScreenSplashes @ 14cf84580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UXRLoadingScreenFunctionLibrary::ClearLoadingScreenSplashes(void)

{
  IXRTrackingSystem *pIVar1;
  longlong *plVar2;
  
  if ((GEngine != (UEngine *)0x0) &&
     (pIVar1 = (GEngine->XRSystem).Object, pIVar1 != (IXRTrackingSystem *)0x0)) {
    plVar2 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x140))();
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf845b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))(plVar2,*(code **)(*plVar2 + 8));
      return;
    }
  }
  return;
}

// GetPrivateStaticClass @ 14cf909c0

UClass * __cdecl UXRLoadingScreenFunctionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UXRLoadingScreenFunctionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/XRBase",L"XRLoadingScreenFunctionLibrary",
               &Z_Registration_Info_UClass_UXRLoadingScreenFunctionLibrary.InnerSingleton,
               StaticRegisterNativesUXRLoadingScreenFunctionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UXRLoadingScreenFunctionLibrary>,
               InternalVTableHelperCtorCaller<UXRLoadingScreenFunctionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UXRLoadingScreenFunctionLibrary.InnerSingleton;
}

// HideLoadingScreen @ 14cf926d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UXRLoadingScreenFunctionLibrary::HideLoadingScreen(void)

{
  IXRTrackingSystem *pIVar1;
  longlong *plVar2;
  
  if ((GEngine != (UEngine *)0x0) &&
     (pIVar1 = (GEngine->XRSystem).Object, pIVar1 != (IXRTrackingSystem *)0x0)) {
    plVar2 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x140))();
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf92708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x20))(plVar2,*(code **)(*plVar2 + 0x20));
      return;
    }
  }
  return;
}

// SetLoadingScreen @ 14cf9aa90

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

void __cdecl
UXRLoadingScreenFunctionLibrary::SetLoadingScreen
          (UTexture *param_1,TVector2<double> *param_2,TVector<double> *param_3,bool param_4,
          bool param_5)

{
  IXRTrackingSystem *pIVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_158 [32];
  UTexture *local_138 [2];
  FSplashDesc local_128;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  if ((((GEngine != (UEngine *)0x0) &&
       (pIVar1 = (GEngine->XRSystem).Object, pIVar1 != (IXRTrackingSystem *)0x0)) &&
      (plVar2 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x140))(), plVar2 != (longlong *)0x0))
     && (param_1 != (UTexture *)0x0)) {
    (**(code **)(*plVar2 + 8))(plVar2);
    lVar3 = (**(code **)(param_1->_padding_ + 0x340))(param_1);
    IXRLoadingScreen::FSplashDesc::FSplashDesc(&local_128);
    local_128.Transform.Translation.XY.m128d_f64[0] = (param_3->field0_0x0)._s_0.X;
    local_128.Transform.Translation.XY.m128d_f64[1] = (param_3->field0_0x0)._s_0.Y;
    local_128.Transform.Rotation.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_128.Transform.Rotation.XY.m128d_f64[1] =
         (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_128.Transform.Rotation.ZW.m128d_f64[0] =
         (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_128.Transform.Rotation.ZW.m128d_f64[1] =
         (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_128.Transform.Translation.ZW.m128d_f64[0] = (param_3->field0_0x0)._s_0.Z;
    local_128.Transform.Translation.ZW.m128d_f64[1] = 0.0;
    local_128.QuadSize.field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_128.QuadSize.field0_0x0._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_128.Transform.Scale3D.XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_128.Transform.Scale3D.XY.m128d_f64[1] =
         (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_128.Transform.Scale3D.ZW.m128d_f64[0] =
         (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_128.Transform.Scale3D.ZW.m128d_f64[1] =
         (double)GlobalVectorConstants::Float1110.m128_f32[3];
    if ((param_4) || (local_128.bIsDynamic = false, lVar3 == 0x1000)) {
      local_128.bIsDynamic = true;
    }
    local_138[0] = param_1;
    local_128.bIsExternal = lVar3 == 0x1000;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_128.TextureObj.WeakPtr,(FObjectPtr)local_138);
    (**(code **)(*plVar2 + 0x10))(plVar2,&local_128);
    if (param_5) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    if (local_128.LeftTexture.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_128.LeftTexture.Reference);
    }
    if (local_128.Texture.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_128.Texture.Reference);
    }
  }
  return;
}

// ShowLoadingScreen @ 14cf9bea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UXRLoadingScreenFunctionLibrary::ShowLoadingScreen(void)

{
  IXRTrackingSystem *pIVar1;
  longlong *plVar2;
  
  if ((GEngine != (UEngine *)0x0) &&
     (pIVar1 = (GEngine->XRSystem).Object, pIVar1 != (IXRTrackingSystem *)0x0)) {
    plVar2 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x140))();
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cf9bed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))(plVar2,*(code **)(*plVar2 + 0x18));
      return;
    }
  }
  return;
}

// StaticRegisterNativesUXRLoadingScreenFunctionLibrary @ 14cf9ca80

void __cdecl
UXRLoadingScreenFunctionLibrary::StaticRegisterNativesUXRLoadingScreenFunctionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UXRLoadingScreenFunctionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddLoadingScreenSplash @ 14cfa0710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UXRLoadingScreenFunctionLibrary::execAddLoadingScreenSplash
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  IXRTrackingSystem *pIVar3;
  UObject *pUVar4;
  longlong *plVar5;
  TQuat<double> *pTVar6;
  bool bVar7;
  undefined1 auStack_258 [32];
  int local_238 [2];
  UObject *local_230;
  UObject *local_228 [2];
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double local_1f0;
  double dStack_1e8;
  double local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  double local_1c8;
  TRotator<double> local_1b8;
  TRotator<double> local_198 [2];
  double local_168;
  TQuat<double> local_158;
  FSplashDesc local_138;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_258;
  local_230 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_230,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_230);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1d8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1d8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1f0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1f0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_218,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_218);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_208,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_208);
  }
  local_238[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_238,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_238);
  }
  pUVar4 = local_230;
  bVar7 = local_238[0] != 0;
  local_198[0].Pitch = local_208;
  local_198[0].Yaw = dStack_200;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_198[0].Roll = local_1f8;
  local_1b8.Pitch = local_1f0;
  local_1b8.Yaw = dStack_1e8;
  local_1b8.Roll = local_1e0;
  local_168 = local_1c8;
  if ((GEngine != (UEngine *)0x0) &&
     (pIVar3 = (GEngine->XRSystem).Object, pIVar3 != (IXRTrackingSystem *)0x0)) {
    plVar5 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x140))();
    if ((plVar5 != (longlong *)0x0) && (pUVar4 != (UObject *)0x0)) {
      if (bVar7) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
      IXRLoadingScreen::FSplashDesc::FSplashDesc(&local_138);
      local_228[0] = pUVar4;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      FWeakObjectPtr::operator=(&local_138.TextureObj.WeakPtr,(FObjectPtr)local_228);
      local_138.QuadSize.field0_0x0._s_0.X = local_218;
      local_138.QuadSize.field0_0x0._s_0.Y = dStack_210;
      pTVar6 = UE::Math::TRotator<double>::Quaternion(&local_1b8,&local_158);
      local_138.Transform.Rotation.XY.m128d_f64[0] = pTVar6->X;
      local_138.Transform.Rotation.XY.m128d_f64[1]._0_4_ = *(undefined4 *)&pTVar6->Y;
      local_138.Transform.Rotation.XY.m128d_f64[1]._4_4_ = *(undefined4 *)((longlong)&pTVar6->Y + 4)
      ;
      local_138.Transform.Rotation.ZW.m128d_f64[0] = pTVar6->Z;
      local_138.Transform.Rotation.ZW.m128d_f64[1] = pTVar6->W;
      local_138.Transform.Translation.ZW.m128d_f64[0] = local_168;
      local_138.Transform.Translation.ZW.m128d_f64[1] = 0.0;
      local_138.Transform.Translation.XY.m128d_f64[0]._0_4_ = local_1d8;
      local_138.Transform.Translation.XY.m128d_f64[0]._4_4_ = uStack_1d4;
      local_138.Transform.Translation.XY.m128d_f64[1]._0_4_ = uStack_1d0;
      local_138.Transform.Translation.XY.m128d_f64[1]._4_4_ = uStack_1cc;
      local_138.Transform.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
      local_138.Transform.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
      local_138.Transform.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
      local_138.Transform.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
      pTVar6 = UE::Math::TRotator<double>::Quaternion(local_198,&local_158);
      local_138.DeltaRotation.X = pTVar6->X;
      local_138.DeltaRotation.Y = pTVar6->Y;
      local_138.DeltaRotation.Z = pTVar6->Z;
      local_138.DeltaRotation.W = pTVar6->W;
      (**(code **)(*plVar5 + 0x10))(plVar5,&local_138);
      if (local_138.LeftTexture.Reference != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)local_138.LeftTexture.Reference);
      }
      if (local_138.Texture.Reference != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)local_138.Texture.Reference);
      }
    }
  }
  return;
}

// execClearLoadingScreenSplashes @ 14cfa1500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UXRLoadingScreenFunctionLibrary::execClearLoadingScreenSplashes
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  IXRTrackingSystem *pIVar1;
  longlong *plVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((GEngine != (UEngine *)0x0) &&
     (pIVar1 = (GEngine->XRSystem).Object, pIVar1 != (IXRTrackingSystem *)0x0)) {
    plVar2 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x140))();
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cfa154b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))(plVar2,*(code **)(*plVar2 + 8));
      return;
    }
  }
  return;
}

// execHideLoadingScreen @ 14cfa4830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UXRLoadingScreenFunctionLibrary::execHideLoadingScreen
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  IXRTrackingSystem *pIVar1;
  longlong *plVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((GEngine != (UEngine *)0x0) &&
     (pIVar1 = (GEngine->XRSystem).Object, pIVar1 != (IXRTrackingSystem *)0x0)) {
    plVar2 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x140))();
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cfa487b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x20))(plVar2,*(code **)(*plVar2 + 0x20));
      return;
    }
  }
  return;
}

// execSetLoadingScreen @ 14cfa5910

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

void __cdecl
UXRLoadingScreenFunctionLibrary::execSetLoadingScreen
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  IXRTrackingSystem *pIVar3;
  UObject *pUVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auStack_1d8 [32];
  int local_1b8;
  int local_1b4;
  UObject *local_1b0;
  UObject *local_1a8 [2];
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double local_158;
  FSplashDesc local_148;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  local_1b0 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b0,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  local_1b8 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b8);
  }
  bVar7 = local_1b8 != 0;
  local_1b4 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_1b4,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_1b4);
  }
  pUVar4 = local_1b0;
  bVar8 = local_1b4 != 0;
  local_158 = local_178;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((GEngine != (UEngine *)0x0) &&
     (pIVar3 = (GEngine->XRSystem).Object, pIVar3 != (IXRTrackingSystem *)0x0)) {
    plVar5 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x140))();
    if ((plVar5 != (longlong *)0x0) && (pUVar4 != (UObject *)0x0)) {
      (**(code **)(*plVar5 + 8))(plVar5);
      lVar6 = (**(code **)(*(longlong *)pUVar4 + 0x340))(pUVar4);
      IXRLoadingScreen::FSplashDesc::FSplashDesc(&local_148);
      local_148.QuadSize.field0_0x0._s_0.X = local_198;
      local_148.QuadSize.field0_0x0._s_0.Y = dStack_190;
      local_148.Transform.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_148.Transform.Rotation.XY.m128d_f64[0] =
           (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_148.Transform.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_148.Transform.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_148.Transform.Rotation.ZW.m128d_f64[0] =
           (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_148.Transform.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_148.Transform.Translation.XY.m128d_f64[0] = local_188;
      local_148.Transform.Translation.XY.m128d_f64[1] = dStack_180;
      local_148.Transform.Translation.ZW.m128d_f64[0] = local_158;
      local_148.Transform.Translation.ZW.m128d_f64[1] = 0.0;
      local_148.Transform.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_148.Transform.Scale3D.XY.m128d_f64[0] =
           (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_148.Transform.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_148.Transform.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_148.Transform.Scale3D.ZW.m128d_f64[0] =
           (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_148.Transform.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      if ((bVar7) || (local_148.bIsDynamic = false, lVar6 == 0x1000)) {
        local_148.bIsDynamic = true;
      }
      local_1a8[0] = pUVar4;
      local_148.bIsExternal = lVar6 == 0x1000;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      FWeakObjectPtr::operator=(&local_148.TextureObj.WeakPtr,(FObjectPtr)local_1a8);
      (**(code **)(*plVar5 + 0x10))(plVar5,&local_148);
      if (bVar8) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
      if (local_148.LeftTexture.Reference != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)local_148.LeftTexture.Reference);
      }
      if (local_148.Texture.Reference != (FRHITexture *)0x0) {
        FRHIResource::Release((FRHIResource *)local_148.Texture.Reference);
      }
    }
  }
  return;
}

// execShowLoadingScreen @ 14cfa64e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UXRLoadingScreenFunctionLibrary::execShowLoadingScreen
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  IXRTrackingSystem *pIVar1;
  longlong *plVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((GEngine != (UEngine *)0x0) &&
     (pIVar1 = (GEngine->XRSystem).Object, pIVar1 != (IXRTrackingSystem *)0x0)) {
    plVar2 = (longlong *)(**(code **)((longlong)*pIVar1 + 0x140))();
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cfa652b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))(plVar2,*(code **)(*plVar2 + 0x18));
      return;
    }
  }
  return;
}

