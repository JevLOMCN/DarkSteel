// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 55

// StaticClass @ 146aac7a0

UClass * __cdecl UWidgetLayoutLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetLayoutLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetLayoutLibrary",
               &Z_Registration_Info_UClass_UWidgetLayoutLibrary.InnerSingleton,
               StaticRegisterNativesUWidgetLayoutLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWidgetLayoutLibrary>,
               InternalVTableHelperCtorCaller<UWidgetLayoutLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetLayoutLibrary.InnerSingleton;
}

// UWidgetLayoutLibrary @ 146aad4b0

UWidgetLayoutLibrary * __thiscall
UWidgetLayoutLibrary::UWidgetLayoutLibrary(UWidgetLayoutLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UWidgetLayoutLibrary__6B_;
  return this;
}

// UWidgetLayoutLibrary @ 146aad4e0

UWidgetLayoutLibrary * __thiscall
UWidgetLayoutLibrary::UWidgetLayoutLibrary(UWidgetLayoutLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UWidgetLayoutLibrary__6B_;
  return this;
}

// ~UWidgetLayoutLibrary @ 146aad690

void __thiscall UWidgetLayoutLibrary::~UWidgetLayoutLibrary(UWidgetLayoutLibrary *this)

{
  *(undefined ***)this = &___7UWidgetLayoutLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetMousePositionOnPlatform @ 146aae8c0

/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __cdecl
UWidgetLayoutLibrary::GetMousePositionOnPlatform(TVector2<double> *__return_storage_ptr__)

{
  float fVar1;
  FSlateApplication *pFVar2;
  float *pfVar3;
  undefined1 local_res10 [24];
  
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    pFVar2 = FSlateApplication::Get();
    pfVar3 = (float *)(**(code **)(*(longlong *)pFVar2 + 0x68))(pFVar2,local_res10);
    fVar1 = pfVar3[1];
    (__return_storage_ptr__->field0_0x0)._s_0.X = (double)*pfVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  return __return_storage_ptr__;
}

// GetMousePositionOnViewport @ 146aae930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __cdecl
UWidgetLayoutLibrary::GetMousePositionOnViewport
          (TVector2<double> *__return_storage_ptr__,UObject *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FSlateApplication *pFVar4;
  float *pfVar5;
  TTransform2<float> *pTVar6;
  undefined1 auStack_a8 [32];
  float local_88;
  float fStack_84;
  TTransform2<float> local_80;
  FGeometry local_68;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  }
  else {
    pFVar4 = FSlateApplication::Get();
    pfVar5 = (float *)(**(code **)(*(longlong *)pFVar4 + 0x68))(pFVar4,&local_88);
    fVar1 = *pfVar5;
    fVar2 = pfVar5[1];
    GetViewportWidgetGeometry(&local_68,param_1);
    local_88 = fVar1;
    fStack_84 = fVar2;
    pTVar6 = Inverse<TTransform2<float>_>(&local_80,&local_68.AccumulatedRenderTransform);
    fVar1 = (pTVar6->M).M[1][1];
    fVar2 = (pTVar6->M).M[0][1];
    fVar3 = (pTVar6->Trans).field0_0x0._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (double)(fStack_84 * (pTVar6->M).M[1][0] + local_88 * (pTVar6->M).M[0][0] +
                 (pTVar6->Trans).field0_0x0._s_0.X);
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         (double)(fStack_84 * fVar1 + local_88 * fVar2 + fVar3);
  }
  return __return_storage_ptr__;
}

// GetMousePositionScaledByDPI @ 146aaea80

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UWidgetLayoutLibrary::GetMousePositionScaledByDPI
          (APlayerController *param_1,float *param_2,float *param_3)

{
  bool bVar1;
  float fVar2;
  
  if (param_1 != (APlayerController *)0x0) {
    bVar1 = APlayerController::GetMousePosition(param_1,param_2,param_3);
    if (bVar1) {
      fVar2 = GetViewportScale((UObject *)param_1);
      fVar2 = __real_3f800000 / fVar2;
      *param_2 = fVar2 * *param_2;
      *param_3 = fVar2 * *param_3;
      return true;
    }
  }
  return false;
}

// GetMousePositionScaledByDPI @ 146aaeb00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UWidgetLayoutLibrary::GetMousePositionScaledByDPI
          (APlayerController *param_1,double *param_2,double *param_3)

{
  bool bVar1;
  float fVar2;
  float local_res8 [2];
  float local_res10 [2];
  
  local_res8[0] = (float)*param_2;
  local_res10[0] = (float)*param_3;
  if (param_1 != (APlayerController *)0x0) {
    bVar1 = APlayerController::GetMousePosition(param_1,local_res8,local_res10);
    if (bVar1) {
      fVar2 = GetViewportScale((UObject *)param_1);
      fVar2 = __real_3f800000 / fVar2;
      *param_2 = (double)(local_res8[0] * fVar2);
      *param_3 = (double)(local_res10[0] * fVar2);
      return true;
    }
  }
  return false;
}

// GetPlayerScreenWidgetGeometry @ 146aaebb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FGeometry * __cdecl
UWidgetLayoutLibrary::GetPlayerScreenWidgetGeometry
          (FGeometry *__return_storage_ptr__,APlayerController *param_1)

{
  IGameLayerManager *pIVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  atomic<int> aVar5;
  UWorld *this;
  UGameViewportClient *pUVar6;
  ULocalPlayer *pUVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  this = UEngine::GetWorldFromContextObject(GEngine,(UObject *)param_1,LogAndReturnNull);
  if (((this != (UWorld *)0x0) && (bVar4 = UWorld::IsGameWorld(this), bVar4)) &&
     (pUVar6 = UWorld::GetGameViewport(this), pUVar6 != (UGameViewportClient *)0x0)) {
    pTVar8 = (pUVar6->GameLayerManagerPtr).WeakReferenceCount.ReferenceController;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar8->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          pTVar8 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_146aaec30;
        }
        LOCK();
        aVar5 = pTVar8->SharedReferenceCount;
        bVar4 = aVar3 == aVar5;
        if (bVar4) {
          pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar5 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar5;
      } while (!bVar4);
      pIVar1 = (pUVar6->GameLayerManagerPtr).Object;
      if (pIVar1 != (IGameLayerManager *)0x0) {
        pcVar2 = *(code **)((longlong)*pIVar1 + 0x18);
        pUVar7 = APlayerController::GetLocalPlayer(param_1);
        (*pcVar2)(pIVar1,__return_storage_ptr__,pUVar7);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
        return __return_storage_ptr__;
      }
    }
LAB_146aaec30:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  FGeometry::FGeometry(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146aaeca0

UClass * __cdecl UWidgetLayoutLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetLayoutLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetLayoutLibrary",
               &Z_Registration_Info_UClass_UWidgetLayoutLibrary.InnerSingleton,
               StaticRegisterNativesUWidgetLayoutLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWidgetLayoutLibrary>,
               InternalVTableHelperCtorCaller<UWidgetLayoutLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetLayoutLibrary.InnerSingleton;
}

// GetViewportScale @ 146aaee20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __cdecl UWidgetLayoutLibrary::GetViewportScale(UGameViewportClient *param_1)

{
  TIntPoint<int> TVar1;
  UClass *this;
  float fVar2;
  TVector2<double>_u_0 local_18;
  
  UGameViewportClient::GetViewportSize(param_1,(TVector2<double> *)&local_18._s_0);
  this = Z_Construct_UClass_UUserInterfaceSettings_NoRegister();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  TVar1.field0_0x0._s_0.Y = (int)local_18._s_0.Y;
  TVar1.field0_0x0._s_0.X = (int)local_18._s_0.X;
  fVar2 = UUserInterfaceSettings::GetDPIScaleBasedOnSize
                    ((UUserInterfaceSettings *)(this->ClassDefaultObject).field0_0x0.DebugPtr,TVar1)
  ;
  return fVar2;
}

// GetViewportScale @ 146aaee80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __cdecl UWidgetLayoutLibrary::GetViewportScale(UObject *param_1)

{
  TIntPoint<int> TVar1;
  bool bVar2;
  UWorld *this;
  UGameViewportClient *this_00;
  UUserInterfaceSettings *this_01;
  float fVar3;
  TVector2<double>_u_0 local_28 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ViewportScaleCache.FrameSet = GFrameCounter;
      _Init_thread_footer(&::_TSS0);
    }
  }
  fVar3 = __real_3f800000;
  if ((ViewportScaleCache.Value.bIsSet != false) && (ViewportScaleCache.FrameSet == GFrameCounter))
  {
    return ViewportScaleCache.Value.TypedValue;
  }
  this = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (this != (UWorld *)0x0) {
    bVar2 = UWorld::IsGameWorld(this);
    if (bVar2) {
      this_00 = UWorld::GetGameViewport(this);
      if (this_00 != (UGameViewportClient *)0x0) {
        UGameViewportClient::GetViewportSize(this_00,(TVector2<double> *)&local_28[0]._s_0);
        this_01 = GetDefault<UUserInterfaceSettings>();
        TVar1.field0_0x0._s_0.Y = (int)(double)local_28[0]._8_8_;
        TVar1.field0_0x0._s_0.X = (int)(double)local_28[0]._0_8_;
        fVar3 = UUserInterfaceSettings::GetDPIScaleBasedOnSize(this_01,TVar1);
      }
    }
  }
  ViewportScaleCache.Value.TypedValue = fVar3;
  ViewportScaleCache.FrameSet = GFrameCounter;
  ViewportScaleCache.Value.bIsSet = true;
  return fVar3;
}

// GetViewportSize @ 146aaefc0

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

TVector2<double> * __cdecl
UWidgetLayoutLibrary::GetViewportSize(TVector2<double> *__return_storage_ptr__,UObject *param_1)

{
  bool bVar1;
  UWorld *this;
  UGameViewportClient *this_00;
  TVector2<double>_u_0 local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ViewportSizeCache.FrameSet = GFrameCounter;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((ViewportSizeCache.Value.bIsSet != false) && (ViewportSizeCache.FrameSet == GFrameCounter)) {
    (__return_storage_ptr__->field0_0x0)._s_0 =
         (TVector2<double>_u_0_s_0)ViewportSizeCache.Value.TypedValue;
    return __return_storage_ptr__;
  }
  local_18._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_18._s_0.Y = _UNK_150689688;
  this = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (this != (UWorld *)0x0) {
    bVar1 = UWorld::IsGameWorld(this);
    if (bVar1) {
      this_00 = UWorld::GetGameViewport(this);
      if (this_00 != (UGameViewportClient *)0x0) {
        UGameViewportClient::GetViewportSize(this_00,(TVector2<double> *)&local_18._s_0);
      }
    }
  }
  ViewportSizeCache.Value.TypedValue.field0_0x0._s_0.Y = local_18._s_0.Y;
  ViewportSizeCache.Value.TypedValue.field0_0x0._s_0.X = local_18._s_0.X;
  ViewportSizeCache.FrameSet = GFrameCounter;
  ViewportSizeCache.Value.bIsSet = true;
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (TVector2<double>_u_0_s_0)ViewportSizeCache.Value.TypedValue.field0_0x0;
  return __return_storage_ptr__;
}

// GetViewportWidgetGeometry @ 146aaf0f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FGeometry * __cdecl
UWidgetLayoutLibrary::GetViewportWidgetGeometry(FGeometry *__return_storage_ptr__,UObject *param_1)

{
  IGameLayerManager *pIVar1;
  atomic<int> aVar2;
  bool bVar3;
  atomic<int> aVar4;
  UWorld *this;
  UGameViewportClient *pUVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  this = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (((this != (UWorld *)0x0) && (bVar3 = UWorld::IsGameWorld(this), bVar3)) &&
     (pUVar5 = UWorld::GetGameViewport(this), pUVar5 != (UGameViewportClient *)0x0)) {
    pTVar6 = (pUVar5->GameLayerManagerPtr).WeakReferenceCount.ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      aVar2 = pTVar6->SharedReferenceCount;
      do {
        if (aVar2 == (atomic<int>)0x0) {
          pTVar6 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_146aaf156;
        }
        LOCK();
        aVar4 = pTVar6->SharedReferenceCount;
        bVar3 = aVar2 == aVar4;
        if (bVar3) {
          pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar4 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar4;
      } while (!bVar3);
      pIVar1 = (pUVar5->GameLayerManagerPtr).Object;
      if (pIVar1 != (IGameLayerManager *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,__return_storage_ptr__);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
        return __return_storage_ptr__;
      }
    }
LAB_146aaf156:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  FGeometry::FGeometry(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ProjectWorldLocationToWidgetPosition @ 146aaf250

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UWidgetLayoutLibrary::ProjectWorldLocationToWidgetPosition
          (APlayerController *param_1,TVector<double> *param_2,TVector2<double> *param_3,
          bool param_4)

{
  undefined1 auVar1 [16];
  bool bVar2;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar3 [16];
  TVector2<double>_u_0 local_58;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  if (param_1 != (APlayerController *)0x0) {
    local_48._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_48._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_48._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    bVar2 = APlayerController::ProjectWorldLocationToScreenWithDistance
                      (param_1,(TVector<double> *)&local_48._s_0,(TVector<double> *)&local_28._s_0,
                       param_4);
    if (bVar2) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_28._s_0.X + __real_3fe0000000000000;
      auVar3 = roundpd(extraout_XMM0,auVar3,1);
      local_58._s_0.X = (double)auVar3._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_28._s_0.Y + __real_3fe0000000000000;
      auVar3 = roundpd(auVar3,auVar1,1);
      local_58._s_0.Y = (double)auVar3._0_8_;
      USlateBlueprintLibrary::ScreenToViewport
                ((UObject *)param_1,(TVector2<double> *)&local_58._s_0,
                 (TVector2<double> *)&local_48._s_0);
      bVar2 = true;
      goto LAB_146aaf2f3;
    }
  }
  bVar2 = false;
  local_48._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_48._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
LAB_146aaf2f3:
  (param_3->field0_0x0)._s_0.X = local_48._s_0.X;
  (param_3->field0_0x0)._s_0.Y = local_48._s_0.Y;
  return bVar2;
}

// ProjectWorldLocationToWidgetPositionWithDistance @ 146aaf310

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UWidgetLayoutLibrary::ProjectWorldLocationToWidgetPositionWithDistance
          (APlayerController *param_1,TVector<double> *param_2,TVector<double> *param_3,bool param_4
          )

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  bool bVar3;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar4 [16];
  TVector2<double>_u_0 local_58;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  if (param_1 != (APlayerController *)0x0) {
    local_48._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_48._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_48._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    bVar3 = APlayerController::ProjectWorldLocationToScreenWithDistance
                      (param_1,(TVector<double> *)&local_48._s_0,(TVector<double> *)&local_28._s_0,
                       param_4);
    if (bVar3) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_28._s_0.X + __real_3fe0000000000000;
      auVar4 = roundpd(extraout_XMM0,auVar4,1);
      local_58._s_0.X = (double)auVar4._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_28._s_0.Y + __real_3fe0000000000000;
      auVar4 = roundpd(auVar4,auVar1,1);
      local_58._s_0.Y = (double)auVar4._0_8_;
      USlateBlueprintLibrary::ScreenToViewport
                ((UObject *)param_1,(TVector2<double> *)&local_58._s_0,
                 (TVector2<double> *)&local_48._s_0);
      (param_3->field0_0x0)._s_0.X = local_48._s_0.X;
      (param_3->field0_0x0)._s_0.Y = local_48._s_0.Y;
      (param_3->field0_0x0)._s_0.Z = local_28._s_0.Z;
      return true;
    }
  }
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_3->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_3->field0_0x0)._s_0.Y = (double)uVar2;
  (param_3->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return false;
}

// RemoveAllWidgets @ 146aaf5a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UWidgetLayoutLibrary::RemoveAllWidgets(UObject *param_1)

{
  bool bVar1;
  UWorld *this;
  UGameViewportClient *this_00;
  
  this = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (this != (UWorld *)0x0) {
    bVar1 = UWorld::IsGameWorld(this);
    if (bVar1) {
      this_00 = UWorld::GetGameViewport(this);
      if (this_00 != (UGameViewportClient *)0x0) {
        UGameViewportClient::RemoveAllViewportWidgets(this_00);
        return;
      }
    }
  }
  return;
}

// SlotAsBorderSlot @ 146aafa50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UBorderSlot * __cdecl UWidgetLayoutLibrary::SlotAsBorderSlot(UWidget *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  
  if (param_1 == (UWidget *)0x0) {
    return (UBorderSlot *)0x0;
  }
  if ((param_1->Slot).field0_0x0.DebugPtr != (UPanelSlot *)0x0) {
    pUVar2 = Z_Construct_UClass_UBorderSlot_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&param_1->Slot,pUVar2);
    if (bVar1) {
      return (UBorderSlot *)(param_1->Slot).field0_0x0.DebugPtr;
    }
  }
  return (UBorderSlot *)0x0;
}

// SlotAsCanvasSlot @ 146aafab0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UCanvasPanelSlot * __cdecl UWidgetLayoutLibrary::SlotAsCanvasSlot(UWidget *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  
  if (param_1 == (UWidget *)0x0) {
    return (UCanvasPanelSlot *)0x0;
  }
  if ((param_1->Slot).field0_0x0.DebugPtr != (UPanelSlot *)0x0) {
    pUVar2 = Z_Construct_UClass_UCanvasPanelSlot_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&param_1->Slot,pUVar2);
    if (bVar1) {
      return (UCanvasPanelSlot *)(param_1->Slot).field0_0x0.DebugPtr;
    }
  }
  return (UCanvasPanelSlot *)0x0;
}

// SlotAsGridSlot @ 146aafb10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UGridSlot * __cdecl UWidgetLayoutLibrary::SlotAsGridSlot(UWidget *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  
  if (param_1 == (UWidget *)0x0) {
    return (UGridSlot *)0x0;
  }
  if ((param_1->Slot).field0_0x0.DebugPtr != (UPanelSlot *)0x0) {
    pUVar2 = Z_Construct_UClass_UGridSlot_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&param_1->Slot,pUVar2);
    if (bVar1) {
      return (UGridSlot *)(param_1->Slot).field0_0x0.DebugPtr;
    }
  }
  return (UGridSlot *)0x0;
}

// SlotAsHorizontalBoxSlot @ 146aafb70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UHorizontalBoxSlot * __cdecl UWidgetLayoutLibrary::SlotAsHorizontalBoxSlot(UWidget *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  
  if (param_1 == (UWidget *)0x0) {
    return (UHorizontalBoxSlot *)0x0;
  }
  if ((param_1->Slot).field0_0x0.DebugPtr != (UPanelSlot *)0x0) {
    pUVar2 = Z_Construct_UClass_UHorizontalBoxSlot_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&param_1->Slot,pUVar2);
    if (bVar1) {
      return (UHorizontalBoxSlot *)(param_1->Slot).field0_0x0.DebugPtr;
    }
  }
  return (UHorizontalBoxSlot *)0x0;
}

// SlotAsOverlaySlot @ 146aafbd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UOverlaySlot * __cdecl UWidgetLayoutLibrary::SlotAsOverlaySlot(UWidget *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  
  if (param_1 == (UWidget *)0x0) {
    return (UOverlaySlot *)0x0;
  }
  if ((param_1->Slot).field0_0x0.DebugPtr != (UPanelSlot *)0x0) {
    pUVar2 = Z_Construct_UClass_UOverlaySlot_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&param_1->Slot,pUVar2);
    if (bVar1) {
      return (UOverlaySlot *)(param_1->Slot).field0_0x0.DebugPtr;
    }
  }
  return (UOverlaySlot *)0x0;
}

// SlotAsSafeBoxSlot @ 146aafc30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

USafeZoneSlot * __cdecl UWidgetLayoutLibrary::SlotAsSafeBoxSlot(UWidget *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  
  if (param_1 == (UWidget *)0x0) {
    return (USafeZoneSlot *)0x0;
  }
  if ((param_1->Slot).field0_0x0.DebugPtr != (UPanelSlot *)0x0) {
    pUVar2 = Z_Construct_UClass_USafeZoneSlot_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&param_1->Slot,pUVar2);
    if (bVar1) {
      return (USafeZoneSlot *)(param_1->Slot).field0_0x0.DebugPtr;
    }
  }
  return (USafeZoneSlot *)0x0;
}

// SlotAsScaleBoxSlot @ 146aafc90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UScaleBoxSlot * __cdecl UWidgetLayoutLibrary::SlotAsScaleBoxSlot(UWidget *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  
  if (param_1 == (UWidget *)0x0) {
    return (UScaleBoxSlot *)0x0;
  }
  if ((param_1->Slot).field0_0x0.DebugPtr != (UPanelSlot *)0x0) {
    pUVar2 = Z_Construct_UClass_UScaleBoxSlot_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&param_1->Slot,pUVar2);
    if (bVar1) {
      return (UScaleBoxSlot *)(param_1->Slot).field0_0x0.DebugPtr;
    }
  }
  return (UScaleBoxSlot *)0x0;
}

// SlotAsScrollBoxSlot @ 146aafcf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UScrollBoxSlot * __cdecl UWidgetLayoutLibrary::SlotAsScrollBoxSlot(UWidget *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  
  if (param_1 == (UWidget *)0x0) {
    return (UScrollBoxSlot *)0x0;
  }
  if ((param_1->Slot).field0_0x0.DebugPtr != (UPanelSlot *)0x0) {
    pUVar2 = Z_Construct_UClass_UScrollBoxSlot_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&param_1->Slot,pUVar2);
    if (bVar1) {
      return (UScrollBoxSlot *)(param_1->Slot).field0_0x0.DebugPtr;
    }
  }
  return (UScrollBoxSlot *)0x0;
}

// SlotAsSizeBoxSlot @ 146aafd50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

USizeBoxSlot * __cdecl UWidgetLayoutLibrary::SlotAsSizeBoxSlot(UWidget *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  
  if (param_1 == (UWidget *)0x0) {
    return (USizeBoxSlot *)0x0;
  }
  if ((param_1->Slot).field0_0x0.DebugPtr != (UPanelSlot *)0x0) {
    pUVar2 = Z_Construct_UClass_USizeBoxSlot_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&param_1->Slot,pUVar2);
    if (bVar1) {
      return (USizeBoxSlot *)(param_1->Slot).field0_0x0.DebugPtr;
    }
  }
  return (USizeBoxSlot *)0x0;
}

// SlotAsStackBoxSlot @ 146aafdb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UStackBoxSlot * __cdecl UWidgetLayoutLibrary::SlotAsStackBoxSlot(UWidget *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  
  if (param_1 == (UWidget *)0x0) {
    return (UStackBoxSlot *)0x0;
  }
  if ((param_1->Slot).field0_0x0.DebugPtr != (UPanelSlot *)0x0) {
    pUVar2 = Z_Construct_UClass_UStackBoxSlot_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&param_1->Slot,pUVar2);
    if (bVar1) {
      return (UStackBoxSlot *)(param_1->Slot).field0_0x0.DebugPtr;
    }
  }
  return (UStackBoxSlot *)0x0;
}

// SlotAsUniformGridSlot @ 146aafe10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UUniformGridSlot * __cdecl UWidgetLayoutLibrary::SlotAsUniformGridSlot(UWidget *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  
  if (param_1 == (UWidget *)0x0) {
    return (UUniformGridSlot *)0x0;
  }
  if ((param_1->Slot).field0_0x0.DebugPtr != (UPanelSlot *)0x0) {
    pUVar2 = Z_Construct_UClass_UUniformGridSlot_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&param_1->Slot,pUVar2);
    if (bVar1) {
      return (UUniformGridSlot *)(param_1->Slot).field0_0x0.DebugPtr;
    }
  }
  return (UUniformGridSlot *)0x0;
}

// SlotAsVerticalBoxSlot @ 146aafe70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UVerticalBoxSlot * __cdecl UWidgetLayoutLibrary::SlotAsVerticalBoxSlot(UWidget *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  
  if (param_1 == (UWidget *)0x0) {
    return (UVerticalBoxSlot *)0x0;
  }
  if ((param_1->Slot).field0_0x0.DebugPtr != (UPanelSlot *)0x0) {
    pUVar2 = Z_Construct_UClass_UVerticalBoxSlot_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&param_1->Slot,pUVar2);
    if (bVar1) {
      return (UVerticalBoxSlot *)(param_1->Slot).field0_0x0.DebugPtr;
    }
  }
  return (UVerticalBoxSlot *)0x0;
}

// SlotAsWidgetSwitcherSlot @ 146aafed0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidgetSwitcherSlot * __cdecl UWidgetLayoutLibrary::SlotAsWidgetSwitcherSlot(UWidget *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  
  if (param_1 == (UWidget *)0x0) {
    return (UWidgetSwitcherSlot *)0x0;
  }
  if ((param_1->Slot).field0_0x0.DebugPtr != (UPanelSlot *)0x0) {
    pUVar2 = Z_Construct_UClass_UWidgetSwitcherSlot_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&param_1->Slot,pUVar2);
    if (bVar1) {
      return (UWidgetSwitcherSlot *)(param_1->Slot).field0_0x0.DebugPtr;
    }
  }
  return (UWidgetSwitcherSlot *)0x0;
}

// SlotAsWrapBoxSlot @ 146aaff30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWrapBoxSlot * __cdecl UWidgetLayoutLibrary::SlotAsWrapBoxSlot(UWidget *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  
  if (param_1 == (UWidget *)0x0) {
    return (UWrapBoxSlot *)0x0;
  }
  if ((param_1->Slot).field0_0x0.DebugPtr != (UPanelSlot *)0x0) {
    pUVar2 = Z_Construct_UClass_UWrapBoxSlot_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&param_1->Slot,pUVar2);
    if (bVar1) {
      return (UWrapBoxSlot *)(param_1->Slot).field0_0x0.DebugPtr;
    }
  }
  return (UWrapBoxSlot *)0x0;
}

// StaticRegisterNativesUWidgetLayoutLibrary @ 146aaff90

void __cdecl UWidgetLayoutLibrary::StaticRegisterNativesUWidgetLayoutLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x17;
  local_18.DataPtr = Z_Construct_UClass_UWidgetLayoutLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetMousePositionOnPlatform @ 146ab02c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidgetLayoutLibrary::execGetMousePositionOnPlatform(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  FSlateApplication *pFVar3;
  undefined8 *puVar4;
  undefined1 local_res10 [24];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
    pFVar3 = FSlateApplication::Get();
    puVar4 = (undefined8 *)(**(code **)(*(longlong *)pFVar3 + 0x68))(pFVar3,local_res10);
    dVar2 = (double)(float)((ulonglong)*puVar4 >> 0x20);
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = (double)(float)*puVar4;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])param_3 = auVar1;
    return;
  }
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  return;
}

// execGetMousePositionOnViewport @ 146ab0320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidgetLayoutLibrary::execGetMousePositionOnViewport(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  float fVar2;
  FProperty *pFVar3;
  undefined1 auVar4 [16];
  double dVar5;
  UObject *pUVar6;
  FSlateApplication *pFVar7;
  float *pfVar8;
  TTransform2<float> *pTVar9;
  double dVar10;
  undefined1 auStack_b8 [32];
  float local_98;
  float fStack_94;
  UObject *local_90;
  TTransform2<float> local_88;
  FGeometry local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_90 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  pUVar6 = local_90;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
    dVar5 = 0.0;
    dVar10 = 0.0;
  }
  else {
    pFVar7 = FSlateApplication::Get();
    pfVar8 = (float *)(**(code **)(*(longlong *)pFVar7 + 0x68))(pFVar7,&local_98);
    fVar1 = *pfVar8;
    fVar2 = pfVar8[1];
    GetViewportWidgetGeometry(&local_70,pUVar6);
    local_98 = fVar1;
    fStack_94 = fVar2;
    pTVar9 = Inverse<TTransform2<float>_>(&local_88,&local_70.AccumulatedRenderTransform);
    dVar5 = (double)(fStack_94 * (pTVar9->M).M[1][0] + local_98 * (pTVar9->M).M[0][0] +
                    (pTVar9->Trans).field0_0x0._s_0.X);
    dVar10 = (double)(fStack_94 * (pTVar9->M).M[1][1] + local_98 * (pTVar9->M).M[0][1] +
                     (pTVar9->Trans).field0_0x0._s_0.Y);
  }
  auVar4._8_4_ = SUB84(dVar10,0);
  auVar4._0_8_ = dVar5;
  auVar4._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  *(undefined1 (*) [16])param_3 = auVar4;
  return;
}

// execGetMousePositionScaledByDPI @ 146ab04d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UWidgetLayoutLibrary::execGetMousePositionScaledByDPI
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  APlayerController *pAVar2;
  bool bVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float local_res10 [2];
  float local_res18 [2];
  APlayerController *local_res20;
  
  local_res20 = (APlayerController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0.0;
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
  pfVar5 = (float *)param_2->MostRecentPropertyAddress;
  local_res18[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pfVar4 = local_res10;
  if (pfVar5 != (float *)0x0) {
    pfVar4 = pfVar5;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  pAVar2 = local_res20;
  pfVar5 = local_res18;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar5 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (APlayerController *)0x0) {
    bVar3 = APlayerController::GetMousePosition(local_res20,pfVar4,pfVar5);
    if (bVar3) {
      fVar6 = GetViewportScale((UObject *)pAVar2);
      *pfVar4 = (__real_3f800000 / fVar6) * *pfVar4;
      *pfVar5 = (__real_3f800000 / fVar6) * *pfVar5;
      *(undefined1 *)param_3 = 1;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetPlayerScreenWidgetGeometry @ 146ab0640

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
UWidgetLayoutLibrary::execGetPlayerScreenWidgetGeometry
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  IGameLayerManager *pIVar2;
  code *pcVar3;
  atomic<int> aVar4;
  APlayerController *this;
  bool bVar5;
  atomic<int> aVar6;
  UWorld *this_00;
  UGameViewportClient *pUVar7;
  ULocalPlayer *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 auStack_88 [32];
  APlayerController *local_68;
  FGeometry local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68 = (APlayerController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  this = local_68;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this_00 = UEngine::GetWorldFromContextObject(GEngine,(UObject *)local_68,LogAndReturnNull);
  if (((this_00 != (UWorld *)0x0) && (bVar5 = UWorld::IsGameWorld(this_00), bVar5)) &&
     (pUVar7 = UWorld::GetGameViewport(this_00), pUVar7 != (UGameViewportClient *)0x0)) {
    pTVar9 = (pUVar7->GameLayerManagerPtr).WeakReferenceCount.ReferenceController;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      aVar4 = pTVar9->SharedReferenceCount;
      do {
        if (aVar4 == (atomic<int>)0x0) {
          pTVar9 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_146ab0726;
        }
        LOCK();
        aVar6 = pTVar9->SharedReferenceCount;
        bVar5 = aVar4 == aVar6;
        if (bVar5) {
          pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
          aVar6 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar6;
      } while (!bVar5);
      pIVar2 = (pUVar7->GameLayerManagerPtr).Object;
      if (pIVar2 != (IGameLayerManager *)0x0) {
        pcVar3 = *(code **)((longlong)*pIVar2 + 0x18);
        pUVar8 = APlayerController::GetLocalPlayer(this);
        (*pcVar3)(pIVar2,&local_60,pUVar8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
        goto LAB_146ab0738;
      }
    }
LAB_146ab0726:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  FGeometry::FGeometry(&local_60);
LAB_146ab0738:
  FGeometry::operator=(param_3,&local_60);
  return;
}

// execGetViewportScale @ 146ab07b0

void __cdecl
UWidgetLayoutLibrary::execGetViewportScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  UObject *local_res10;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar2 = GetViewportScale(local_res10);
  *(float *)param_3 = fVar2;
  return;
}

// execGetViewportSize @ 146ab0840

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
UWidgetLayoutLibrary::execGetViewportSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *pvVar2;
  UObject *pUVar3;
  bool bVar4;
  UWorld *this;
  UGameViewportClient *this_00;
  ulonglong uVar5;
  UObject *local_res10;
  TVector2<double>_u_0 local_18;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar3 = local_res10;
  pvVar2 = ThreadLocalStoragePointer;
  uVar5 = (ulonglong)_tls_index;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)(*(longlong *)((longlong)pvVar2 + uVar5 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ViewportSizeCache.FrameSet = GFrameCounter;
      ViewportSizeCache.Value.bIsSet = false;
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((ViewportSizeCache.Value.bIsSet != false) && (ViewportSizeCache.FrameSet == GFrameCounter)) {
    *(TVector2<double>_u_0 *)param_3 = ViewportSizeCache.Value.TypedValue.field0_0x0;
    return;
  }
  local_18._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_18._s_0.Y = _UNK_150689688;
  this = UEngine::GetWorldFromContextObject(GEngine,pUVar3,LogAndReturnNull);
  if (this != (UWorld *)0x0) {
    bVar4 = UWorld::IsGameWorld(this);
    if (bVar4) {
      this_00 = UWorld::GetGameViewport(this);
      if (this_00 != (UGameViewportClient *)0x0) {
        UGameViewportClient::GetViewportSize(this_00,(TVector2<double> *)&local_18._s_0);
      }
    }
  }
  ViewportSizeCache.Value.TypedValue.field0_0x0._s_0.Y = local_18._s_0.Y;
  ViewportSizeCache.Value.TypedValue.field0_0x0._s_0.X = local_18._s_0.X;
  ViewportSizeCache.Value.bIsSet = true;
  ViewportSizeCache.FrameSet = GFrameCounter;
  *(TVector2<double>_u_0 *)param_3 = ViewportSizeCache.Value.TypedValue.field0_0x0;
  return;
}

// execGetViewportWidgetGeometry @ 146ab09d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UWidgetLayoutLibrary::execGetViewportWidgetGeometry(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometry *pFVar2;
  undefined1 auStack_78 [32];
  UObject *local_58;
  FGeometry local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = GetViewportWidgetGeometry(&local_50,local_58);
  FGeometry::operator=(param_3,pFVar2);
  return;
}

// execProjectWorldLocationToWidgetPosition @ 146ab0a90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UWidgetLayoutLibrary::execProjectWorldLocationToWidgetPosition
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 auVar2 [16];
  APlayerController *pAVar3;
  bool bVar4;
  undefined1 uVar5;
  double *pdVar6;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar7 [16];
  int local_res10 [2];
  APlayerController *local_res18;
  double local_88 [2];
  TVector2<double>_u_0 local_78;
  TVector<double>_u_0 local_68;
  double local_48;
  double dStack_40;
  double local_38;
  TVector<double>_u_0 local_30;
  
  local_res18 = (APlayerController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
  local_res10[0] = 0;
  pdVar6 = local_88;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar6 = (double *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pAVar3 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 != (APlayerController *)0x0) {
    local_68._s_0.X = local_48;
    local_68._s_0.Y = dStack_40;
    local_68._s_0.Z = local_38;
    bVar4 = APlayerController::ProjectWorldLocationToScreenWithDistance
                      (local_res18,(TVector<double> *)&local_68._s_0,
                       (TVector<double> *)&local_30._s_0,local_res10[0] != 0);
    if (bVar4) {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = local_30._s_0.X + __real_3fe0000000000000;
      auVar7 = roundpd(extraout_XMM0,auVar7,1);
      local_78._s_0.X = (double)auVar7._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_30._s_0.Y + __real_3fe0000000000000;
      auVar7 = roundpd(auVar7,auVar2,1);
      local_78._s_0.Y = (double)auVar7._0_8_;
      USlateBlueprintLibrary::ScreenToViewport
                ((UObject *)pAVar3,(TVector2<double> *)&local_78._s_0,
                 (TVector2<double> *)&local_68._s_0);
      uVar5 = 1;
      goto LAB_146ab0c53;
    }
  }
  uVar5 = 0;
  local_68._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_68._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
LAB_146ab0c53:
  *pdVar6 = local_68._s_0.X;
  pdVar6[1] = local_68._s_0.Y;
  *(undefined1 *)param_3 = uVar5;
  return;
}

// execRemoveAllWidgets @ 146ab0c80

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
UWidgetLayoutLibrary::execRemoveAllWidgets(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  UWorld *this;
  UGameViewportClient *this_00;
  UObject *local_res10 [3];
  
  local_res10[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = UEngine::GetWorldFromContextObject(GEngine,local_res10[0],LogAndReturnNull);
  if (this != (UWorld *)0x0) {
    bVar2 = UWorld::IsGameWorld(this);
    if (bVar2) {
      this_00 = UWorld::GetGameViewport(this);
      if (this_00 != (UGameViewportClient *)0x0) {
        UGameViewportClient::RemoveAllViewportWidgets(this_00);
      }
    }
  }
  return;
}

// execSlotAsBorderSlot @ 146ab0d40

void __cdecl
UWidgetLayoutLibrary::execSlotAsBorderSlot(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  undefined8 uVar5;
  longlong local_res10;
  
  uVar5 = 0;
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10 != 0) && (*(longlong *)(local_res10 + 0x30) != 0)) {
    pUVar4 = Z_Construct_UClass_UBorderSlot_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)(lVar2 + 0x30),pUVar4);
    if (bVar3) {
      uVar5 = *(undefined8 *)(lVar2 + 0x30);
    }
  }
  *(undefined8 *)param_3 = uVar5;
  return;
}

// execSlotAsCanvasSlot @ 146ab0df0

void __cdecl
UWidgetLayoutLibrary::execSlotAsCanvasSlot(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  undefined8 uVar5;
  longlong local_res10;
  
  uVar5 = 0;
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10 != 0) && (*(longlong *)(local_res10 + 0x30) != 0)) {
    pUVar4 = Z_Construct_UClass_UCanvasPanelSlot_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)(lVar2 + 0x30),pUVar4);
    if (bVar3) {
      uVar5 = *(undefined8 *)(lVar2 + 0x30);
    }
  }
  *(undefined8 *)param_3 = uVar5;
  return;
}

// execSlotAsGridSlot @ 146ab0ea0

void __cdecl
UWidgetLayoutLibrary::execSlotAsGridSlot(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  undefined8 uVar5;
  longlong local_res10;
  
  uVar5 = 0;
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10 != 0) && (*(longlong *)(local_res10 + 0x30) != 0)) {
    pUVar4 = Z_Construct_UClass_UGridSlot_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)(lVar2 + 0x30),pUVar4);
    if (bVar3) {
      uVar5 = *(undefined8 *)(lVar2 + 0x30);
    }
  }
  *(undefined8 *)param_3 = uVar5;
  return;
}

// execSlotAsHorizontalBoxSlot @ 146ab0f50

void __cdecl
UWidgetLayoutLibrary::execSlotAsHorizontalBoxSlot(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  undefined8 uVar5;
  longlong local_res10;
  
  uVar5 = 0;
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10 != 0) && (*(longlong *)(local_res10 + 0x30) != 0)) {
    pUVar4 = Z_Construct_UClass_UHorizontalBoxSlot_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)(lVar2 + 0x30),pUVar4);
    if (bVar3) {
      uVar5 = *(undefined8 *)(lVar2 + 0x30);
    }
  }
  *(undefined8 *)param_3 = uVar5;
  return;
}

// execSlotAsOverlaySlot @ 146ab1000

void __cdecl
UWidgetLayoutLibrary::execSlotAsOverlaySlot(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  undefined8 uVar5;
  longlong local_res10;
  
  uVar5 = 0;
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10 != 0) && (*(longlong *)(local_res10 + 0x30) != 0)) {
    pUVar4 = Z_Construct_UClass_UOverlaySlot_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)(lVar2 + 0x30),pUVar4);
    if (bVar3) {
      uVar5 = *(undefined8 *)(lVar2 + 0x30);
    }
  }
  *(undefined8 *)param_3 = uVar5;
  return;
}

// execSlotAsSafeBoxSlot @ 146ab10b0

void __cdecl
UWidgetLayoutLibrary::execSlotAsSafeBoxSlot(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  undefined8 uVar5;
  longlong local_res10;
  
  uVar5 = 0;
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10 != 0) && (*(longlong *)(local_res10 + 0x30) != 0)) {
    pUVar4 = Z_Construct_UClass_USafeZoneSlot_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)(lVar2 + 0x30),pUVar4);
    if (bVar3) {
      uVar5 = *(undefined8 *)(lVar2 + 0x30);
    }
  }
  *(undefined8 *)param_3 = uVar5;
  return;
}

// execSlotAsScaleBoxSlot @ 146ab1160

void __cdecl
UWidgetLayoutLibrary::execSlotAsScaleBoxSlot(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  undefined8 uVar5;
  longlong local_res10;
  
  uVar5 = 0;
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10 != 0) && (*(longlong *)(local_res10 + 0x30) != 0)) {
    pUVar4 = Z_Construct_UClass_UScaleBoxSlot_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)(lVar2 + 0x30),pUVar4);
    if (bVar3) {
      uVar5 = *(undefined8 *)(lVar2 + 0x30);
    }
  }
  *(undefined8 *)param_3 = uVar5;
  return;
}

// execSlotAsScrollBoxSlot @ 146ab1210

void __cdecl
UWidgetLayoutLibrary::execSlotAsScrollBoxSlot(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  undefined8 uVar5;
  longlong local_res10;
  
  uVar5 = 0;
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10 != 0) && (*(longlong *)(local_res10 + 0x30) != 0)) {
    pUVar4 = Z_Construct_UClass_UScrollBoxSlot_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)(lVar2 + 0x30),pUVar4);
    if (bVar3) {
      uVar5 = *(undefined8 *)(lVar2 + 0x30);
    }
  }
  *(undefined8 *)param_3 = uVar5;
  return;
}

// execSlotAsSizeBoxSlot @ 146ab12c0

void __cdecl
UWidgetLayoutLibrary::execSlotAsSizeBoxSlot(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  undefined8 uVar5;
  longlong local_res10;
  
  uVar5 = 0;
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10 != 0) && (*(longlong *)(local_res10 + 0x30) != 0)) {
    pUVar4 = Z_Construct_UClass_USizeBoxSlot_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)(lVar2 + 0x30),pUVar4);
    if (bVar3) {
      uVar5 = *(undefined8 *)(lVar2 + 0x30);
    }
  }
  *(undefined8 *)param_3 = uVar5;
  return;
}

// execSlotAsStackBoxSlot @ 146ab1370

void __cdecl
UWidgetLayoutLibrary::execSlotAsStackBoxSlot(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  undefined8 uVar5;
  longlong local_res10;
  
  uVar5 = 0;
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10 != 0) && (*(longlong *)(local_res10 + 0x30) != 0)) {
    pUVar4 = Z_Construct_UClass_UStackBoxSlot_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)(lVar2 + 0x30),pUVar4);
    if (bVar3) {
      uVar5 = *(undefined8 *)(lVar2 + 0x30);
    }
  }
  *(undefined8 *)param_3 = uVar5;
  return;
}

// execSlotAsUniformGridSlot @ 146ab1420

void __cdecl
UWidgetLayoutLibrary::execSlotAsUniformGridSlot(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  undefined8 uVar5;
  longlong local_res10;
  
  uVar5 = 0;
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10 != 0) && (*(longlong *)(local_res10 + 0x30) != 0)) {
    pUVar4 = Z_Construct_UClass_UUniformGridSlot_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)(lVar2 + 0x30),pUVar4);
    if (bVar3) {
      uVar5 = *(undefined8 *)(lVar2 + 0x30);
    }
  }
  *(undefined8 *)param_3 = uVar5;
  return;
}

// execSlotAsVerticalBoxSlot @ 146ab14d0

void __cdecl
UWidgetLayoutLibrary::execSlotAsVerticalBoxSlot(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  undefined8 uVar5;
  longlong local_res10;
  
  uVar5 = 0;
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10 != 0) && (*(longlong *)(local_res10 + 0x30) != 0)) {
    pUVar4 = Z_Construct_UClass_UVerticalBoxSlot_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)(lVar2 + 0x30),pUVar4);
    if (bVar3) {
      uVar5 = *(undefined8 *)(lVar2 + 0x30);
    }
  }
  *(undefined8 *)param_3 = uVar5;
  return;
}

// execSlotAsWidgetSwitcherSlot @ 146ab1580

void __cdecl
UWidgetLayoutLibrary::execSlotAsWidgetSwitcherSlot(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  undefined8 uVar5;
  longlong local_res10;
  
  uVar5 = 0;
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10 != 0) && (*(longlong *)(local_res10 + 0x30) != 0)) {
    pUVar4 = Z_Construct_UClass_UWidgetSwitcherSlot_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)(lVar2 + 0x30),pUVar4);
    if (bVar3) {
      uVar5 = *(undefined8 *)(lVar2 + 0x30);
    }
  }
  *(undefined8 *)param_3 = uVar5;
  return;
}

// execSlotAsWrapBoxSlot @ 146ab1630

void __cdecl
UWidgetLayoutLibrary::execSlotAsWrapBoxSlot(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  undefined8 uVar5;
  longlong local_res10;
  
  uVar5 = 0;
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10 != 0) && (*(longlong *)(local_res10 + 0x30) != 0)) {
    pUVar4 = Z_Construct_UClass_UWrapBoxSlot_NoRegister();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)(lVar2 + 0x30),pUVar4);
    if (bVar3) {
      uVar5 = *(undefined8 *)(lVar2 + 0x30);
    }
  }
  *(undefined8 *)param_3 = uVar5;
  return;
}

