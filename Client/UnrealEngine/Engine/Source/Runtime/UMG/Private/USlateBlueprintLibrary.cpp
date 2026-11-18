// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 46

// StaticClass @ 146a45310

UClass * __cdecl USlateBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"SlateBlueprintLibrary",
               &Z_Registration_Info_UClass_USlateBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUSlateBlueprintLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USlateBlueprintLibrary>,
               InternalVTableHelperCtorCaller<USlateBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateBlueprintLibrary.InnerSingleton;
}

// USlateBlueprintLibrary @ 146a56510

USlateBlueprintLibrary * __thiscall
USlateBlueprintLibrary::USlateBlueprintLibrary(USlateBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7USlateBlueprintLibrary__6B_;
  return this;
}

// USlateBlueprintLibrary @ 146a56540

USlateBlueprintLibrary * __thiscall
USlateBlueprintLibrary::USlateBlueprintLibrary
          (USlateBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7USlateBlueprintLibrary__6B_;
  return this;
}

// ~USlateBlueprintLibrary @ 146a58700

void __thiscall USlateBlueprintLibrary::~USlateBlueprintLibrary(USlateBlueprintLibrary *this)

{
  *(undefined ***)this = &___7USlateBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// AbsoluteToLocal @ 146a5c320

TVector2<double> * __cdecl
USlateBlueprintLibrary::AbsoluteToLocal
          (TVector2<double> *__return_storage_ptr__,FGeometry *param_1,TVector2<double> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  TTransform2<float> *pTVar4;
  float fVar5;
  float fVar6;
  TTransform2<float> local_20;
  
  fVar5 = (float)(param_2->field0_0x0)._s_0.X;
  fVar6 = (float)(param_2->field0_0x0)._s_0.Y;
  pTVar4 = Inverse<TTransform2<float>_>(&local_20,&param_1->AccumulatedRenderTransform);
  fVar1 = (pTVar4->M).M[0][1];
  fVar2 = (pTVar4->M).M[1][1];
  fVar3 = (pTVar4->Trans).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)(fVar6 * (pTVar4->M).M[1][0] + fVar5 * (pTVar4->M).M[0][0] +
               (pTVar4->Trans).field0_0x0._s_0.X);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(fVar5 * fVar1 + fVar6 * fVar2 + fVar3);
  return __return_storage_ptr__;
}

// AbsoluteToViewport @ 146a5c3e0

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
USlateBlueprintLibrary::AbsoluteToViewport
          (UObject *param_1,TVector2<double> *param_2,TVector2<double> *param_3,
          TVector2<double> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  IGameLayerManager *pIVar2;
  atomic<int> aVar3;
  undefined8 uVar4;
  bool bVar5;
  atomic<int> aVar6;
  UWorld *this;
  UGameViewportClient *this_00;
  TTransform2<float> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_d8 [32];
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  undefined8 local_98;
  TVector2<double>_u_0 local_90;
  TTransform2<float> local_80;
  undefined8 local_68 [3];
  TTransform2<float> local_4c;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_d8;
  this = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (((this != (UWorld *)0x0) && (bVar5 = UWorld::IsGameWorld(this), bVar5)) &&
     (this_00 = UWorld::GetGameViewport(this), this_00 != (UGameViewportClient *)0x0)) {
    pTVar1 = (this_00->GameLayerManagerPtr).WeakReferenceCount.ReferenceController;
    pTVar8 = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar1->SharedReferenceCount;
      do {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        if (aVar3 == (atomic<int>)0x0) goto LAB_146a5c471;
        LOCK();
        aVar6 = pTVar1->SharedReferenceCount;
        bVar5 = aVar3 == aVar6;
        if (bVar5) {
          pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar6 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar6;
      } while (!bVar5);
      pIVar2 = (this_00->GameLayerManagerPtr).Object;
      pTVar8 = pTVar1;
      if (pIVar2 != (IGameLayerManager *)0x0) {
        UGameViewportClient::GetViewportSize(this_00,(TVector2<double> *)&local_90._s_0);
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_68);
        local_a0 = (float)(param_2->field0_0x0)._s_0.X;
        fStack_9c = (float)(param_2->field0_0x0)._s_0.Y;
        pTVar7 = Inverse<TTransform2<float>_>(&local_80,&local_4c);
        fVar9 = fStack_9c * (pTVar7->M).M[1][0] + local_a0 * (pTVar7->M).M[0][0] +
                (pTVar7->Trans).field0_0x0._s_0.X;
        fVar10 = local_a0 * (pTVar7->M).M[0][1] + fStack_9c * (pTVar7->M).M[1][1] +
                 (pTVar7->Trans).field0_0x0._s_0.Y;
        _local_b8 = CONCAT44(fVar10,fVar9);
        (param_4->field0_0x0)._s_0.X = (double)fVar9;
        (param_4->field0_0x0)._s_0.Y = (double)fVar10;
        local_98 = local_68[0];
        uVar4 = local_98;
        local_98._4_4_ = (float)((ulonglong)local_68[0] >> 0x20);
        local_98._0_4_ = (float)local_68[0];
        _local_b0 = CONCAT44(fVar10 / local_98._4_4_,fVar9 / (float)local_98);
        fVar10 = (float)local_90._s_0.Y * (fVar10 / local_98._4_4_);
        fVar9 = (float)local_90._s_0.X * (fVar9 / (float)local_98);
        _local_a8 = CONCAT44(fVar10,fVar9);
        (param_3->field0_0x0)._s_0.X = (double)fVar9;
        (param_3->field0_0x0)._s_0.Y = (double)fVar10;
        local_98 = uVar4;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        return;
      }
    }
LAB_146a5c471:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  (param_3->field0_0x0)._s_0.X = 0.0;
  (param_3->field0_0x0)._s_0.Y = 0.0;
  (param_4->field0_0x0)._s_0.X = 0.0;
  (param_4->field0_0x0)._s_0.Y = 0.0;
  return;
}

// EqualEqual_SlateBrush @ 146a704a0

bool __cdecl
USlateBlueprintLibrary::EqualEqual_SlateBrush(FSlateBrush *param_1,FSlateBrush *param_2)

{
  uchar uVar1;
  ESlateColorStylingMode EVar2;
  bool bVar3;
  
  if ((((((*(float *)&param_2->ImageSize == *(float *)&param_1->ImageSize) &&
         (*(float *)&(param_2->ImageSize).field_0x4 == *(float *)&(param_1->ImageSize).field_0x4))
        && (uVar1 = (param_1->DrawAs).Value, uVar1 == (param_2->DrawAs).Value)) &&
       (((param_2->Margin).Left == (param_1->Margin).Left &&
        ((param_2->Margin).Right == (param_1->Margin).Right)))) &&
      ((param_2->Margin).Top == (param_1->Margin).Top)) &&
     ((param_2->Margin).Bottom == (param_1->Margin).Bottom)) {
    bVar3 = FSlateColor::operator==(&param_1->TintColor,&param_2->TintColor);
    if ((((((bVar3) && ((param_1->Tiling).Value == (param_2->Tiling).Value)) &&
          (((param_1->Mirroring).Value == (param_2->Mirroring).Value &&
           ((((param_1->ResourceObject).field0_0x0.DebugPtr ==
              (param_2->ResourceObject).field0_0x0.DebugPtr &&
             (param_1->ResourceName == param_2->ResourceName)) &&
            (((param_1->bIsDynamicallyLoaded ^ param_2->bIsDynamicallyLoaded) & 1) == 0)))))) &&
         (((param_2->UVRegion).Min.field0_0x0._s_0.X == (param_1->UVRegion).Min.field0_0x0._s_0.X &&
          ((param_2->UVRegion).Min.field0_0x0._s_0.Y == (param_1->UVRegion).Min.field0_0x0._s_0.Y)))
         ) && ((param_2->UVRegion).Max.field0_0x0._s_0.X ==
               (param_1->UVRegion).Max.field0_0x0._s_0.X)) &&
       (((param_2->UVRegion).Max.field0_0x0._s_0.Y == (param_1->UVRegion).Max.field0_0x0._s_0.Y &&
        ((uVar1 != '\x04' ||
         (((((param_2->OutlineSettings).CornerRadii.field0_0x0._s_0.X ==
             (param_1->OutlineSettings).CornerRadii.field0_0x0._s_0.X &&
            ((param_2->OutlineSettings).CornerRadii.field0_0x0._s_0.Y ==
             (param_1->OutlineSettings).CornerRadii.field0_0x0._s_0.Y)) &&
           (((param_2->OutlineSettings).CornerRadii.field0_0x0._s_0.Z ==
             (param_1->OutlineSettings).CornerRadii.field0_0x0._s_0.Z &&
            ((((param_2->OutlineSettings).CornerRadii.field0_0x0._s_0.W ==
               (param_1->OutlineSettings).CornerRadii.field0_0x0._s_0.W &&
              ((param_2->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.R ==
               (param_1->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.R)) &&
             ((param_2->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.G ==
              (param_1->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.G)))))) &&
          ((((param_2->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.B ==
             (param_1->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.B &&
            ((param_2->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.A ==
             (param_1->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.A)) &&
           ((EVar2 = (param_1->OutlineSettings).Color.ColorUseRule,
            EVar2 == (param_2->OutlineSettings).Color.ColorUseRule &&
            (((EVar2 != UseColor_ColorTable ||
              ((param_1->OutlineSettings).Color.ColorTableId ==
               (param_2->OutlineSettings).Color.ColorTableId)) &&
             (((param_2->OutlineSettings).Width == (param_1->OutlineSettings).Width &&
              (((param_1->OutlineSettings).RoundingType.Value ==
                (param_2->OutlineSettings).RoundingType.Value &&
               ((param_1->OutlineSettings).bUseBrushTransparency ==
                (param_2->OutlineSettings).bUseBrushTransparency)))))))))))))))))) {
      return true;
    }
  }
  return false;
}

// GetAbsoluteSize @ 146a727d0

TVector2<double> * __cdecl
USlateBlueprintLibrary::GetAbsoluteSize(TVector2<double> *__return_storage_ptr__,FGeometry *param_1)

{
  float fVar1;
  float fVar2;
  float local_res8;
  float fStackX_c;
  
  fStackX_c = SUB84(param_1->Size,4);
  local_res8 = SUB84(param_1->Size,0);
  fVar1 = (param_1->AccumulatedRenderTransform).M.M[0][1];
  fVar2 = (param_1->AccumulatedRenderTransform).M.M[1][1];
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)(fStackX_c * (param_1->AccumulatedRenderTransform).M.M[1][0] +
               local_res8 * (param_1->AccumulatedRenderTransform).M.M[0][0]);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(local_res8 * fVar1 + fStackX_c * fVar2);
  return __return_storage_ptr__;
}

// GetLocalSize @ 146a77020

TVector2<double> * __cdecl
USlateBlueprintLibrary::GetLocalSize(TVector2<double> *__return_storage_ptr__,FGeometry *param_1)

{
  float local_res8;
  float fStackX_c;
  
  local_res8 = SUB84(param_1->Size,0);
  fStackX_c = SUB84(param_1->Size,4);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_res8;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fStackX_c;
  return __return_storage_ptr__;
}

// GetLocalTopLeft @ 146a77050

TVector2<double> * __cdecl
USlateBlueprintLibrary::GetLocalTopLeft(TVector2<double> *__return_storage_ptr__,FGeometry *param_1)

{
  float fVar1;
  float local_res10;
  float fStackX_14;
  
  local_res10 = SUB84(param_1->Size,0);
  fStackX_14 = SUB84(param_1->Size,4);
  fVar1 = (param_1->Position).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)(local_res10 * 0.0 + (param_1->Position).field0_0x0._s_0.X);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(fStackX_14 * 0.0 + fVar1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146a77c40

UClass * __cdecl USlateBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USlateBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"SlateBlueprintLibrary",
               &Z_Registration_Info_UClass_USlateBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUSlateBlueprintLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USlateBlueprintLibrary>,
               InternalVTableHelperCtorCaller<USlateBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USlateBlueprintLibrary.InnerSingleton;
}

// IsUnderLocation @ 146a7c720

bool __cdecl USlateBlueprintLibrary::IsUnderLocation(FGeometry *param_1,TVector2<double> *param_2)

{
  double dVar1;
  double dVar2;
  FDeprecateVector2DParameter FVar3;
  bool bVar4;
  undefined4 local_res8;
  undefined4 uStackX_c;
  TVector2<float>_u_0 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  FSlateRotatedRect local_20;
  
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  local_38 = (TVector2<float>_u_0)0x0;
  local_2c = 0;
  uStackX_c = SUB84(param_1->Size,4);
  local_res8 = SUB84(param_1->Size,0);
  local_30 = local_res8;
  local_24 = uStackX_c;
  TransformRect<TTransform2<float>_>
            (&local_20,&param_1->AccumulatedRenderTransform,(FSlateRotatedRect *)&local_38._s_0);
  FVar3._4_4_ = (float)dVar2;
  FVar3._0_4_ = (float)dVar1;
  bVar4 = FSlateRotatedRect::IsUnderLocation(&local_20,FVar3);
  return bVar4;
}

// LocalToAbsolute @ 146a7cd00

TVector2<double> * __cdecl
USlateBlueprintLibrary::LocalToAbsolute
          (TVector2<double> *__return_storage_ptr__,FGeometry *param_1,TVector2<double> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = (float)(param_2->field0_0x0)._s_0.Y;
  fVar4 = (float)(param_2->field0_0x0)._s_0.X;
  fVar1 = (param_1->AccumulatedRenderTransform).M.M[0][1];
  fVar2 = (param_1->AccumulatedRenderTransform).M.M[1][1];
  fVar3 = (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)(fVar5 * (param_1->AccumulatedRenderTransform).M.M[1][0] +
                fVar4 * (param_1->AccumulatedRenderTransform).M.M[0][0] +
               (param_1->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(fVar4 * fVar1 + fVar5 * fVar2 + fVar3);
  return __return_storage_ptr__;
}

// LocalToViewport @ 146a7cda0

void __cdecl
USlateBlueprintLibrary::LocalToViewport
          (UObject *param_1,FGeometry *param_2,TVector2<double> *param_3,TVector2<double> *param_4,
          TVector2<double> *param_5)

{
  float fVar1;
  float fVar2;
  TVector2<double>_u_0 local_18;
  
  fVar2 = (float)(param_3->field0_0x0)._s_0.Y;
  fVar1 = (float)(param_3->field0_0x0)._s_0.X;
  local_18._s_0.X =
       (double)(fVar2 * (param_2->AccumulatedRenderTransform).M.M[1][0] +
                fVar1 * (param_2->AccumulatedRenderTransform).M.M[0][0] +
               (param_2->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X);
  local_18._s_0.Y =
       (double)(fVar1 * (param_2->AccumulatedRenderTransform).M.M[0][1] +
                fVar2 * (param_2->AccumulatedRenderTransform).M.M[1][1] +
               (param_2->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y);
  AbsoluteToViewport(param_1,(TVector2<double> *)&local_18._s_0,param_4,param_5);
  return;
}

// Scalar_AbsoluteToLocal @ 146a91770

float __cdecl USlateBlueprintLibrary::Scalar_AbsoluteToLocal(FGeometry *param_1,float param_2)

{
  TTransform2<float> *pTVar1;
  float fVar2;
  float fVar3;
  TTransform2<float> local_38 [2];
  
  pTVar1 = Inverse<TTransform2<float>_>(local_38,&param_1->AccumulatedRenderTransform);
  fVar2 = param_2 * (pTVar1->M).M[0][0];
  fVar3 = param_2 * (pTVar1->M).M[0][1];
  return SQRT(fVar3 * fVar3 + fVar2 * fVar2);
}

// Scalar_LocalToAbsolute @ 146a917c0

float __cdecl USlateBlueprintLibrary::Scalar_LocalToAbsolute(FGeometry *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_2 * (param_1->AccumulatedRenderTransform).M.M[0][1];
  fVar1 = param_2 * (param_1->AccumulatedRenderTransform).M.M[0][0];
  return SQRT(fVar2 * fVar2 + fVar1 * fVar1);
}

// ScreenToViewport @ 146a917f0

void __cdecl
USlateBlueprintLibrary::ScreenToViewport
          (UObject *param_1,TVector2<double> *param_2,TVector2<double> *param_3)

{
  TVector2<double>_u_0 local_28;
  TVector2<double> local_18;
  
  local_28._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  ScreenToWidgetAbsolute(param_1,(TVector2<double> *)&local_28._s_0,&local_18,false);
  AbsoluteToViewport(param_1,&local_18,(TVector2<double> *)&local_28._s_0,param_3);
  return;
}

// ScreenToWidgetAbsolute @ 146a91850

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
USlateBlueprintLibrary::ScreenToWidgetAbsolute
          (UObject *param_1,TVector2<double> *param_2,TVector2<double> *param_3,bool param_4)

{
  SWindow *pSVar1;
  IGameLayerManager *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  atomic<int> aVar4;
  undefined8 uVar5;
  bool bVar6;
  atomic<int> aVar7;
  UWorld *this;
  UGameViewportClient *this_00;
  FDeprecateSlateVector2D FVar8;
  SWindow *pSVar9;
  SWindow *this_01;
  float fVar10;
  float fVar11;
  undefined1 auStack_c8 [32];
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  undefined8 local_90;
  float local_88;
  float fStack_84;
  TVector2<double>_u_0 local_80;
  undefined8 local_68 [3];
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_c8;
  this = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  this_01 = (SWindow *)0x0;
  if (((this != (UWorld *)0x0) && (bVar6 = UWorld::IsGameWorld(this), bVar6)) &&
     (this_00 = UWorld::GetGameViewport(this), this_00 != (UGameViewportClient *)0x0)) {
    pSVar1 = (SWindow *)(this_00->GameLayerManagerPtr).WeakReferenceCount.ReferenceController;
    pSVar9 = pSVar1;
    if (pSVar1 != (SWindow *)0x0) {
      aVar4 = *(atomic<int> *)&pSVar1->_padding_;
      do {
        pSVar9 = this_01;
        if (aVar4 == (atomic<int>)0x0) goto LAB_146a918e4;
        LOCK();
        aVar7 = *(atomic<int> *)&pSVar1->_padding_;
        bVar6 = aVar4 == aVar7;
        if (bVar6) {
          *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar4 + 1);
          aVar7 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar7;
      } while (!bVar6);
      pIVar2 = (this_00->GameLayerManagerPtr).Object;
      pSVar9 = pSVar1;
      if (pIVar2 != (IGameLayerManager *)0x0) {
        UGameViewportClient::GetViewportSize(this_00,(TVector2<double> *)&local_80._s_0);
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_68);
        local_90 = local_68[0];
        uVar5 = local_90;
        local_90._0_4_ = (float)local_68[0];
        local_88 = (float)((param_2->field0_0x0)._s_0.X / local_80._s_0.X) * (float)local_90;
        local_90._4_4_ = (float)((ulonglong)local_68[0] >> 0x20);
        fStack_84 = (float)((param_2->field0_0x0)._s_0.Y / local_80._s_0.Y) * local_90._4_4_;
        _local_a0 = CONCAT44(fStack_84,local_88);
        local_3c = local_4c * local_88 + local_44 * fStack_84 + local_3c;
        local_38 = local_48 * local_88 + local_40 * fStack_84 + local_38;
        _local_a8 = CONCAT44(local_38,local_3c);
        (param_3->field0_0x0)._s_0.X = (double)local_3c;
        (param_3->field0_0x0)._s_0.Y = (double)local_38;
        local_90 = uVar5;
        if (param_4) {
          pTVar3 = (this_00->Window).WeakReferenceCount.ReferenceController;
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            aVar4 = pTVar3->SharedReferenceCount;
            do {
              if (aVar4 == (atomic<int>)0x0) {
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)0x0);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)pSVar1);
                return;
              }
              LOCK();
              aVar7 = pTVar3->SharedReferenceCount;
              bVar6 = aVar4 == aVar7;
              if (bVar6) {
                pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
                aVar7 = aVar4;
              }
              UNLOCK();
              aVar4 = aVar7;
            } while (!bVar6);
            this_01 = (this_00->Window).Object;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
          if (this_01 != (SWindow *)0x0) {
            FVar8 = SWindow::GetPositionInScreen(this_01);
            fVar10 = (float)(param_3->field0_0x0)._s_0.X - *(float *)FVar8;
            fVar11 = (float)(param_3->field0_0x0)._s_0.Y - *(float *)((longlong)FVar8 + 4);
            _local_98 = CONCAT44(fVar11,fVar10);
            (param_3->field0_0x0)._s_0.X = (double)fVar10;
            (param_3->field0_0x0)._s_0.Y = (double)fVar11;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pSVar1);
        return;
      }
    }
LAB_146a918e4:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar9);
  }
  (param_3->field0_0x0)._s_0.X = 0.0;
  (param_3->field0_0x0)._s_0.Y = 0.0;
  return;
}

// ScreenToWidgetLocal @ 146a91b00

void __cdecl
USlateBlueprintLibrary::ScreenToWidgetLocal
          (UObject *param_1,FGeometry *param_2,TVector2<double> *param_3,TVector2<double> *param_4,
          bool param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  TTransform2<float> *pTVar4;
  TVector2<double>_u_0 local_38;
  TVector2<double>_u_0 local_28 [2];
  
  local_38._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_38._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  ScreenToWidgetAbsolute
            (param_1,(TVector2<double> *)&local_38._s_0,(TVector2<double> *)&local_28[0]._s_0,
             param_5);
  local_38._0_4_ = (undefined4)(double)local_28[0]._0_8_;
  local_38._4_4_ = (undefined4)(double)local_28[0]._8_8_;
  pTVar4 = Inverse<TTransform2<float>_>
                     ((TTransform2<float> *)&local_28[0]._s_0,&param_2->AccumulatedRenderTransform);
  fVar1 = (pTVar4->M).M[0][1];
  fVar2 = (pTVar4->M).M[1][1];
  fVar3 = (pTVar4->Trans).field0_0x0._s_0.Y;
  (param_4->field0_0x0)._s_0.X =
       (double)((float)local_38._4_4_ * (pTVar4->M).M[1][0] +
                (float)local_38._0_4_ * (pTVar4->M).M[0][0] + (pTVar4->Trans).field0_0x0._s_0.X);
  (param_4->field0_0x0)._s_0.Y =
       (double)((float)local_38._0_4_ * fVar1 + (float)local_38._4_4_ * fVar2 + fVar3);
  return;
}

// StaticRegisterNativesUSlateBlueprintLibrary @ 146a967b0

void __cdecl USlateBlueprintLibrary::StaticRegisterNativesUSlateBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x14;
  local_18.DataPtr = Z_Construct_UClass_USlateBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TransformScalarAbsoluteToLocal @ 146a99760

float __cdecl
USlateBlueprintLibrary::TransformScalarAbsoluteToLocal(FGeometry *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_2 * (param_1->AccumulatedRenderTransform).M.M[0][1];
  fVar1 = param_2 * (param_1->AccumulatedRenderTransform).M.M[0][0];
  return SQRT(fVar2 * fVar2 + fVar1 * fVar1);
}

// TransformScalarLocalToAbsolute @ 146a99790

float __cdecl
USlateBlueprintLibrary::TransformScalarLocalToAbsolute(FGeometry *param_1,float param_2)

{
  TTransform2<float> *pTVar1;
  float fVar2;
  float fVar3;
  TTransform2<float> local_38 [2];
  
  pTVar1 = Inverse<TTransform2<float>_>(local_38,&param_1->AccumulatedRenderTransform);
  fVar2 = param_2 * (pTVar1->M).M[0][0];
  fVar3 = param_2 * (pTVar1->M).M[0][1];
  return SQRT(fVar3 * fVar3 + fVar2 * fVar2);
}

// TransformVectorAbsoluteToLocal @ 146a997e0

TVector2<double> * __cdecl
USlateBlueprintLibrary::TransformVectorAbsoluteToLocal
          (TVector2<double> *__return_storage_ptr__,FGeometry *param_1,TVector2<double> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = (float)(param_2->field0_0x0)._s_0.Y;
  fVar3 = (float)(param_2->field0_0x0)._s_0.X;
  fVar1 = (param_1->AccumulatedRenderTransform).M.M[1][1];
  fVar2 = (param_1->AccumulatedRenderTransform).M.M[0][1];
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)(fVar4 * (param_1->AccumulatedRenderTransform).M.M[1][0] +
               fVar3 * (param_1->AccumulatedRenderTransform).M.M[0][0]);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(fVar4 * fVar1 + fVar3 * fVar2);
  return __return_storage_ptr__;
}

// TransformVectorLocalToAbsolute @ 146a99830

TVector2<double> * __cdecl
USlateBlueprintLibrary::TransformVectorLocalToAbsolute
          (TVector2<double> *__return_storage_ptr__,FGeometry *param_1,TVector2<double> *param_2)

{
  float fVar1;
  float fVar2;
  TTransform2<float> *pTVar3;
  float fVar4;
  float fVar5;
  TTransform2<float> local_48 [2];
  
  fVar5 = (float)(param_2->field0_0x0)._s_0.Y;
  fVar4 = (float)(param_2->field0_0x0)._s_0.X;
  pTVar3 = Inverse<TTransform2<float>_>(local_48,&param_1->AccumulatedRenderTransform);
  fVar1 = (pTVar3->M).M[1][1];
  fVar2 = (pTVar3->M).M[0][1];
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)(fVar5 * (pTVar3->M).M[1][0] + fVar4 * (pTVar3->M).M[0][0]);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(fVar5 * fVar1 + fVar4 * fVar2);
  return __return_storage_ptr__;
}

// Vector_AbsoluteToLocal @ 146a9c550

TVector2<double> * __cdecl
USlateBlueprintLibrary::Vector_AbsoluteToLocal
          (TVector2<double> *__return_storage_ptr__,FGeometry *param_1,TVector2<double> *param_2)

{
  float fVar1;
  float fVar2;
  TTransform2<float> *pTVar3;
  float fVar4;
  float fVar5;
  TTransform2<float> local_48 [2];
  
  fVar5 = (float)(param_2->field0_0x0)._s_0.Y;
  fVar4 = (float)(param_2->field0_0x0)._s_0.X;
  pTVar3 = Inverse<TTransform2<float>_>(local_48,&param_1->AccumulatedRenderTransform);
  fVar1 = (pTVar3->M).M[1][1];
  fVar2 = (pTVar3->M).M[0][1];
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)(fVar5 * (pTVar3->M).M[1][0] + fVar4 * (pTVar3->M).M[0][0]);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(fVar5 * fVar1 + fVar4 * fVar2);
  return __return_storage_ptr__;
}

// Vector_LocalToAbsolute @ 146a9c5d0

TVector2<double> * __cdecl
USlateBlueprintLibrary::Vector_LocalToAbsolute
          (TVector2<double> *__return_storage_ptr__,FGeometry *param_1,TVector2<double> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = (float)(param_2->field0_0x0)._s_0.Y;
  fVar3 = (float)(param_2->field0_0x0)._s_0.X;
  fVar1 = (param_1->AccumulatedRenderTransform).M.M[1][1];
  fVar2 = (param_1->AccumulatedRenderTransform).M.M[0][1];
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)(fVar4 * (param_1->AccumulatedRenderTransform).M.M[1][0] +
               fVar3 * (param_1->AccumulatedRenderTransform).M.M[0][0]);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(fVar4 * fVar1 + fVar3 * fVar2);
  return __return_storage_ptr__;
}

// execAbsoluteToLocal @ 146a9d3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
USlateBlueprintLibrary::execAbsoluteToLocal(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FProperty *pFVar4;
  TTransform2<float> *pTVar5;
  FGeometry *pFVar6;
  undefined1 auStack_a8 [32];
  float local_88;
  float fStack_84;
  double local_80;
  double local_78;
  TTransform2<float> local_70;
  FGeometry local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_a8;
  FGeometry::FGeometry(&local_58);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pFVar6 = &local_58;
  if ((FGeometry *)param_2->MostRecentPropertyAddress != (FGeometry *)0x0) {
    pFVar6 = (FGeometry *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_88 = (float)local_80;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fStack_84 = (float)local_78;
  pTVar5 = Inverse<TTransform2<float>_>(&local_70,&pFVar6->AccumulatedRenderTransform);
  fVar1 = (pTVar5->M).M[0][1];
  fVar2 = (pTVar5->M).M[1][1];
  fVar3 = (pTVar5->Trans).field0_0x0._s_0.Y;
  *(double *)param_3 =
       (double)(fStack_84 * (pTVar5->M).M[1][0] + local_88 * (pTVar5->M).M[0][0] +
               (pTVar5->Trans).field0_0x0._s_0.X);
  *(double *)((longlong)param_3 + 8) = (double)(local_88 * fVar1 + fStack_84 * fVar2 + fVar3);
  return;
}

// execAbsoluteToViewport @ 146a9d560

void __cdecl
USlateBlueprintLibrary::execAbsoluteToViewport(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector2<double> *pTVar2;
  TVector2<double> *pTVar3;
  UObject *local_res10;
  TVector2<double> local_48;
  TVector2<double> local_38;
  double local_28;
  double dStack_20;
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
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pTVar3 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar2 = &local_48;
  if (pTVar3 != (TVector2<double> *)0x0) {
    pTVar2 = pTVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_18._s_0.X = local_28;
  local_18._s_0.Y = dStack_20;
  pTVar3 = &local_38;
  if ((TVector2<double> *)param_2->MostRecentPropertyAddress != (TVector2<double> *)0x0) {
    pTVar3 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  AbsoluteToViewport(local_res10,(TVector2<double> *)&local_18._s_0,pTVar2,pTVar3);
  return;
}

// execEqualEqual_SlateBrush @ 146aa0400

/* WARNING: Type propagation algorithm not settling */

void __cdecl
USlateBlueprintLibrary::execEqualEqual_SlateBrush(UObject *param_1,FFrame *param_2,void *param_3)

{
  uchar uVar1;
  ESlateColorStylingMode EVar2;
  FProperty *pFVar3;
  bool bVar4;
  undefined1 uVar5;
  FSlateBrush *pFVar6;
  FSlateBrush *pFVar7;
  FSlateBrush local_178;
  FSlateBrush local_c8;
  
  FSlateBrush::FSlateBrush(&local_c8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  pFVar6 = &local_c8;
  if ((FSlateBrush *)param_2->MostRecentPropertyAddress != (FSlateBrush *)0x0) {
    pFVar6 = (FSlateBrush *)param_2->MostRecentPropertyAddress;
  }
  FSlateBrush::FSlateBrush(&local_178);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_178,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_178);
  }
  pFVar7 = &local_178;
  if ((FSlateBrush *)param_2->MostRecentPropertyAddress != (FSlateBrush *)0x0) {
    pFVar7 = (FSlateBrush *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((((((*(float *)&pFVar7->ImageSize == *(float *)&pFVar6->ImageSize) &&
         (*(float *)&(pFVar7->ImageSize).field_0x4 == *(float *)&(pFVar6->ImageSize).field_0x4)) &&
        (uVar1 = (pFVar6->DrawAs).Value, uVar1 == (pFVar7->DrawAs).Value)) &&
       (((pFVar7->Margin).Left == (pFVar6->Margin).Left &&
        ((pFVar7->Margin).Right == (pFVar6->Margin).Right)))) &&
      ((pFVar7->Margin).Top == (pFVar6->Margin).Top)) &&
     ((pFVar7->Margin).Bottom == (pFVar6->Margin).Bottom)) {
    bVar4 = FSlateColor::operator==(&pFVar6->TintColor,&pFVar7->TintColor);
    if ((((((bVar4) && ((pFVar6->Tiling).Value == (pFVar7->Tiling).Value)) &&
          (((pFVar6->Mirroring).Value == (pFVar7->Mirroring).Value &&
           ((((pFVar6->ResourceObject).field0_0x0.DebugPtr ==
              (pFVar7->ResourceObject).field0_0x0.DebugPtr &&
             (pFVar6->ResourceName == pFVar7->ResourceName)) &&
            (((pFVar7->bIsDynamicallyLoaded ^ pFVar6->bIsDynamicallyLoaded) & 1) == 0)))))) &&
         (((pFVar7->UVRegion).Min.field0_0x0._s_0.X == (pFVar6->UVRegion).Min.field0_0x0._s_0.X &&
          ((pFVar7->UVRegion).Min.field0_0x0._s_0.Y == (pFVar6->UVRegion).Min.field0_0x0._s_0.Y))))
        && ((pFVar7->UVRegion).Max.field0_0x0._s_0.X == (pFVar6->UVRegion).Max.field0_0x0._s_0.X))
       && (((pFVar7->UVRegion).Max.field0_0x0._s_0.Y == (pFVar6->UVRegion).Max.field0_0x0._s_0.Y &&
           ((uVar1 != '\x04' ||
            (((((pFVar7->OutlineSettings).CornerRadii.field0_0x0._s_0.X ==
                (pFVar6->OutlineSettings).CornerRadii.field0_0x0._s_0.X &&
               ((pFVar7->OutlineSettings).CornerRadii.field0_0x0._s_0.Y ==
                (pFVar6->OutlineSettings).CornerRadii.field0_0x0._s_0.Y)) &&
              (((pFVar7->OutlineSettings).CornerRadii.field0_0x0._s_0.Z ==
                (pFVar6->OutlineSettings).CornerRadii.field0_0x0._s_0.Z &&
               ((((pFVar7->OutlineSettings).CornerRadii.field0_0x0._s_0.W ==
                  (pFVar6->OutlineSettings).CornerRadii.field0_0x0._s_0.W &&
                 ((pFVar7->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.R ==
                  (pFVar6->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.R)) &&
                ((pFVar7->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.G ==
                 (pFVar6->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.G)))))) &&
             ((((pFVar7->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.B ==
                (pFVar6->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.B &&
               ((pFVar7->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.A ==
                (pFVar6->OutlineSettings).Color.SpecifiedColor.field0_0x0._s_0.A)) &&
              ((EVar2 = (pFVar6->OutlineSettings).Color.ColorUseRule,
               EVar2 == (pFVar7->OutlineSettings).Color.ColorUseRule &&
               (((EVar2 != UseColor_ColorTable ||
                 ((pFVar6->OutlineSettings).Color.ColorTableId ==
                  (pFVar7->OutlineSettings).Color.ColorTableId)) &&
                (((pFVar7->OutlineSettings).Width == (pFVar6->OutlineSettings).Width &&
                 (((pFVar6->OutlineSettings).RoundingType.Value ==
                   (pFVar7->OutlineSettings).RoundingType.Value &&
                  ((pFVar6->OutlineSettings).bUseBrushTransparency ==
                   (pFVar7->OutlineSettings).bUseBrushTransparency)))))))))))))))))) {
      uVar5 = 1;
      goto LAB_146aa06b4;
    }
  }
  uVar5 = 0;
LAB_146aa06b4:
  local_178._padding_ = (longlong)&___7FSlateBrush__6B_;
  *(undefined1 *)param_3 = uVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_c8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execGetAbsoluteSize @ 146aa0770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
USlateBlueprintLibrary::execGetAbsoluteSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  float fVar2;
  FProperty *pFVar3;
  FGeometry *pFVar4;
  undefined1 auStack_78 [32];
  float local_58;
  float fStack_54;
  FGeometry local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  FGeometry::FGeometry(&local_50);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  pFVar4 = &local_50;
  if ((FGeometry *)param_2->MostRecentPropertyAddress != (FGeometry *)0x0) {
    pFVar4 = (FGeometry *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fStack_54 = SUB84(pFVar4->Size,4);
  local_58 = SUB84(pFVar4->Size,0);
  fVar1 = (pFVar4->AccumulatedRenderTransform).M.M[0][1];
  fVar2 = (pFVar4->AccumulatedRenderTransform).M.M[1][1];
  *(double *)param_3 =
       (double)(fStack_54 * (pFVar4->AccumulatedRenderTransform).M.M[1][0] +
               local_58 * (pFVar4->AccumulatedRenderTransform).M.M[0][0]);
  *(double *)((longlong)param_3 + 8) = (double)(local_58 * fVar1 + fStack_54 * fVar2);
  return;
}

// execGetLocalSize @ 146aa2360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
USlateBlueprintLibrary::execGetLocalSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometry *pFVar2;
  undefined1 auStack_78 [32];
  float local_58;
  float fStack_54;
  FGeometry local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  FGeometry::FGeometry(&local_50);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  pFVar2 = &local_50;
  if ((FGeometry *)param_2->MostRecentPropertyAddress != (FGeometry *)0x0) {
    pFVar2 = (FGeometry *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58 = SUB84(pFVar2->Size,0);
  fStack_54 = SUB84(pFVar2->Size,4);
  *(double *)param_3 = (double)local_58;
  *(double *)((longlong)param_3 + 8) = (double)fStack_54;
  return;
}

// execGetLocalTopLeft @ 146aa2440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
USlateBlueprintLibrary::execGetLocalTopLeft(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  FProperty *pFVar2;
  FGeometry *pFVar3;
  undefined1 auStack_88 [48];
  float local_58;
  float fStack_54;
  FGeometry local_50;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  FGeometry::FGeometry(&local_50);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_50,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_50);
  }
  pFVar3 = &local_50;
  if ((FGeometry *)param_2->MostRecentPropertyAddress != (FGeometry *)0x0) {
    pFVar3 = (FGeometry *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58 = SUB84(pFVar3->Size,0);
  fStack_54 = SUB84(pFVar3->Size,4);
  fVar1 = (pFVar3->Position).field0_0x0._s_0.Y;
  *(double *)param_3 = (double)(local_58 * 0.0 + (pFVar3->Position).field0_0x0._s_0.X);
  *(double *)((longlong)param_3 + 8) = (double)(fStack_54 * 0.0 + fVar1);
  return;
}

// execIsUnderLocation @ 146aa3300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
USlateBlueprintLibrary::execIsUnderLocation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FGeometry *pFVar1;
  FProperty *pFVar2;
  FDeprecateVector2DParameter FVar3;
  bool bVar4;
  double *pdVar5;
  FGeometry *pFVar6;
  undefined1 auStack_c8 [32];
  FDeprecateSlateVector2D local_a8;
  float local_a0;
  float fStack_9c;
  TVector2<float>_u_0 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  double local_80 [2];
  FSlateRotatedRect local_70;
  FGeometry local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_c8;
  FGeometry::FGeometry(&local_58);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pFVar1 = (FGeometry *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pFVar6 = &local_58;
  if (pFVar1 != (FGeometry *)0x0) {
    pFVar6 = pFVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_80,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_80);
  }
  local_98 = (TVector2<float>_u_0)0x0;
  local_8c = 0;
  pdVar5 = local_80;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar5 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_a8 = pFVar6->Size;
  local_a0 = (float)*pdVar5;
  fStack_9c = (float)pdVar5[1];
  local_90 = local_a8._0_4_;
  local_84 = local_a8._4_4_;
  TransformRect<TTransform2<float>_>
            (&local_70,&pFVar6->AccumulatedRenderTransform,(FSlateRotatedRect *)&local_98._s_0);
  FVar3._4_4_ = fStack_9c;
  FVar3._0_4_ = local_a0;
  bVar4 = FSlateRotatedRect::IsUnderLocation(&local_70,FVar3);
  *(bool *)param_3 = bVar4;
  return;
}

// execLocalToAbsolute @ 146aa3670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
USlateBlueprintLibrary::execLocalToAbsolute(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FProperty *pFVar4;
  FGeometry *pFVar5;
  undefined1 auStack_98 [40];
  double local_70;
  double local_68;
  FGeometry local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_98;
  FGeometry::FGeometry(&local_60);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  pFVar5 = &local_60;
  if ((FGeometry *)param_2->MostRecentPropertyAddress != (FGeometry *)0x0) {
    pFVar5 = (FGeometry *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = (pFVar5->AccumulatedRenderTransform).M.M[0][1];
  fVar2 = (pFVar5->AccumulatedRenderTransform).M.M[1][1];
  fVar3 = (pFVar5->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
  *(double *)param_3 =
       (double)((float)local_68 * (pFVar5->AccumulatedRenderTransform).M.M[1][0] +
                (float)local_70 * (pFVar5->AccumulatedRenderTransform).M.M[0][0] +
               (pFVar5->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X);
  *(double *)((longlong)param_3 + 8) =
       (double)((float)local_70 * fVar1 + (float)local_68 * fVar2 + fVar3);
  return;
}

// execLocalToViewport @ 146aa3800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
USlateBlueprintLibrary::execLocalToViewport(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector2<double> *pTVar2;
  FGeometry *pFVar3;
  TVector2<double> *pTVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_b8 [32];
  float local_98;
  float fStack_94;
  UObject *local_90;
  double local_88;
  double local_80;
  TVector2<double> local_78;
  TVector2<double> local_68;
  TVector2<double>_u_0 local_58;
  FGeometry local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_90 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  FGeometry::FGeometry(&local_48);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pFVar3 = &local_48;
  if ((FGeometry *)param_2->MostRecentPropertyAddress != (FGeometry *)0x0) {
    pFVar3 = (FGeometry *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pTVar4 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar2 = &local_78;
  if (pTVar4 != (TVector2<double> *)0x0) {
    pTVar2 = pTVar4;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  pTVar4 = &local_68;
  if ((TVector2<double> *)param_2->MostRecentPropertyAddress != (TVector2<double> *)0x0) {
    pTVar4 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar5 = (float)local_80 * (pFVar3->AccumulatedRenderTransform).M.M[1][0] +
          (float)local_88 * (pFVar3->AccumulatedRenderTransform).M.M[0][0] +
          (pFVar3->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
  fVar6 = (float)local_88 * (pFVar3->AccumulatedRenderTransform).M.M[0][1] +
          (float)local_80 * (pFVar3->AccumulatedRenderTransform).M.M[1][1] +
          (pFVar3->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
  _local_98 = CONCAT44(fVar6,fVar5);
  local_58._s_0.X = (double)fVar5;
  local_58._s_0.Y = (double)fVar6;
  AbsoluteToViewport(local_90,(TVector2<double> *)&local_58._s_0,pTVar2,pTVar4);
  return;
}

// execScalar_AbsoluteToLocal @ 146aa6900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
USlateBlueprintLibrary::execScalar_AbsoluteToLocal(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TTransform2<float> *pTVar2;
  FGeometry *pFVar3;
  float fVar4;
  undefined1 auStack_98 [32];
  float local_78 [2];
  TTransform2<float> local_70;
  FGeometry local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_98;
  FGeometry::FGeometry(&local_58);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_78[0] = 0.0;
  pFVar3 = &local_58;
  if ((FGeometry *)param_2->MostRecentPropertyAddress != (FGeometry *)0x0) {
    pFVar3 = (FGeometry *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = Inverse<TTransform2<float>_>(&local_70,&pFVar3->AccumulatedRenderTransform);
  fVar4 = local_78[0] * (pTVar2->M).M[0][0];
  local_78[0] = local_78[0] * (pTVar2->M).M[0][1];
  *(float *)param_3 = SQRT(local_78[0] * local_78[0] + fVar4 * fVar4);
  return;
}

// execScalar_LocalToAbsolute @ 146aa6a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
USlateBlueprintLibrary::execScalar_LocalToAbsolute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometry *pFVar2;
  float fVar3;
  undefined1 auStack_88 [32];
  float local_68 [2];
  FGeometry local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  FGeometry::FGeometry(&local_60);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_68[0] = 0.0;
  pFVar2 = &local_60;
  if ((FGeometry *)param_2->MostRecentPropertyAddress != (FGeometry *)0x0) {
    pFVar2 = (FGeometry *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar3 = local_68[0] * (pFVar2->AccumulatedRenderTransform).M.M[0][0];
  local_68[0] = local_68[0] * (pFVar2->AccumulatedRenderTransform).M.M[0][1];
  *(float *)param_3 = SQRT(local_68[0] * local_68[0] + fVar3 * fVar3);
  return;
}

// execScreenToViewport @ 146aa6b50

void __cdecl
USlateBlueprintLibrary::execScreenToViewport(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  TVector2<double> *pTVar3;
  UObject *local_res10;
  TVector2<double> local_48;
  double local_38;
  double dStack_30;
  TVector2<double>_u_0 local_28;
  TVector2<double> local_18;
  
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
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pUVar2 = local_res10;
  local_28._s_0.X = local_38;
  local_28._s_0.Y = dStack_30;
  pTVar3 = &local_48;
  if ((TVector2<double> *)param_2->MostRecentPropertyAddress != (TVector2<double> *)0x0) {
    pTVar3 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ScreenToWidgetAbsolute(local_res10,(TVector2<double> *)&local_28._s_0,&local_18,false);
  AbsoluteToViewport(pUVar2,&local_18,(TVector2<double> *)&local_28._s_0,pTVar3);
  return;
}

// execScreenToWidgetAbsolute @ 146aa6ca0

void __cdecl
USlateBlueprintLibrary::execScreenToWidgetAbsolute(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector2<double> *pTVar2;
  int local_res10 [2];
  UObject *local_res20;
  TVector2<double> local_38;
  double local_28;
  double dStack_20;
  TVector2<double>_u_0 local_18;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10[0] = 0;
  pTVar2 = &local_38;
  if ((TVector2<double> *)param_2->MostRecentPropertyAddress != (TVector2<double> *)0x0) {
    pTVar2 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
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
  local_18._s_0.X = local_28;
  local_18._s_0.Y = dStack_20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ScreenToWidgetAbsolute(local_res20,(TVector2<double> *)&local_18._s_0,pTVar2,local_res10[0] != 0);
  return;
}

// execScreenToWidgetLocal @ 146aa6e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
USlateBlueprintLibrary::execScreenToWidgetLocal(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FProperty *pFVar4;
  TTransform2<float> *pTVar5;
  double *pdVar6;
  FGeometry *pFVar7;
  undefined1 auStack_e8 [32];
  int local_c8 [4];
  TVector2<double>_u_0 local_b8;
  UObject *local_a8;
  double local_a0 [3];
  double local_88;
  double dStack_80;
  TVector2<double>_u_0 local_78;
  FGeometry local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_a8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  FGeometry::FGeometry(&local_60);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  pFVar7 = &local_60;
  if ((FGeometry *)param_2->MostRecentPropertyAddress != (FGeometry *)0x0) {
    pFVar7 = (FGeometry *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a0);
  }
  local_c8[0] = 0;
  pdVar6 = local_a0;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar6 = (double *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  local_b8._s_0.X = local_88;
  local_b8._s_0.Y = dStack_80;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ScreenToWidgetAbsolute
            (local_a8,(TVector2<double> *)&local_b8._s_0,(TVector2<double> *)&local_78._s_0,
             local_c8[0] != 0);
  local_b8._0_4_ = (undefined4)local_78._s_0.X;
  local_b8._4_4_ = (undefined4)local_78._s_0.Y;
  pTVar5 = Inverse<TTransform2<float>_>
                     ((TTransform2<float> *)&local_78._s_0,&pFVar7->AccumulatedRenderTransform);
  fVar1 = (pTVar5->M).M[0][1];
  fVar2 = (pTVar5->M).M[1][1];
  fVar3 = (pTVar5->Trans).field0_0x0._s_0.Y;
  *pdVar6 = (double)((float)local_b8._4_4_ * (pTVar5->M).M[1][0] +
                     (float)local_b8._0_4_ * (pTVar5->M).M[0][0] + (pTVar5->Trans).field0_0x0._s_0.X
                    );
  pdVar6[1] = (double)((float)local_b8._0_4_ * fVar1 + (float)local_b8._4_4_ * fVar2 + fVar3);
  return;
}

// execTransformScalarAbsoluteToLocal @ 146aab230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
USlateBlueprintLibrary::execTransformScalarAbsoluteToLocal
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometry *pFVar2;
  float fVar3;
  undefined1 auStack_88 [32];
  float local_68 [2];
  FGeometry local_60;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  FGeometry::FGeometry(&local_60);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_68[0] = 0.0;
  pFVar2 = &local_60;
  if ((FGeometry *)param_2->MostRecentPropertyAddress != (FGeometry *)0x0) {
    pFVar2 = (FGeometry *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar3 = local_68[0] * (pFVar2->AccumulatedRenderTransform).M.M[0][0];
  local_68[0] = local_68[0] * (pFVar2->AccumulatedRenderTransform).M.M[0][1];
  *(float *)param_3 = SQRT(local_68[0] * local_68[0] + fVar3 * fVar3);
  return;
}

// execTransformScalarLocalToAbsolute @ 146aab350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
USlateBlueprintLibrary::execTransformScalarLocalToAbsolute
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TTransform2<float> *pTVar2;
  FGeometry *pFVar3;
  float fVar4;
  undefined1 auStack_98 [32];
  float local_78 [2];
  TTransform2<float> local_70;
  FGeometry local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_98;
  FGeometry::FGeometry(&local_58);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_78[0] = 0.0;
  pFVar3 = &local_58;
  if ((FGeometry *)param_2->MostRecentPropertyAddress != (FGeometry *)0x0) {
    pFVar3 = (FGeometry *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = Inverse<TTransform2<float>_>(&local_70,&pFVar3->AccumulatedRenderTransform);
  fVar4 = local_78[0] * (pTVar2->M).M[0][0];
  local_78[0] = local_78[0] * (pTVar2->M).M[0][1];
  *(float *)param_3 = SQRT(local_78[0] * local_78[0] + fVar4 * fVar4);
  return;
}

// execTransformVectorAbsoluteToLocal @ 146aab480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
USlateBlueprintLibrary::execTransformVectorAbsoluteToLocal
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  float fVar2;
  FProperty *pFVar3;
  FGeometry *pFVar4;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  FGeometry local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_88;
  FGeometry::FGeometry(&local_58);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pFVar4 = &local_58;
  if ((FGeometry *)param_2->MostRecentPropertyAddress != (FGeometry *)0x0) {
    pFVar4 = (FGeometry *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = (pFVar4->AccumulatedRenderTransform).M.M[1][1];
  fVar2 = (pFVar4->AccumulatedRenderTransform).M.M[0][1];
  *(double *)param_3 =
       (double)((float)local_60 * (pFVar4->AccumulatedRenderTransform).M.M[1][0] +
               (float)local_68 * (pFVar4->AccumulatedRenderTransform).M.M[0][0]);
  *(double *)((longlong)param_3 + 8) = (double)((float)local_60 * fVar1 + (float)local_68 * fVar2);
  return;
}

// execTransformVectorLocalToAbsolute @ 146aab5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
USlateBlueprintLibrary::execTransformVectorLocalToAbsolute
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  float fVar2;
  FProperty *pFVar3;
  TTransform2<float> *pTVar4;
  FGeometry *pFVar5;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  TTransform2<float> local_98;
  FGeometry local_80;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  FGeometry::FGeometry(&local_80);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  pFVar5 = &local_80;
  if ((FGeometry *)param_2->MostRecentPropertyAddress != (FGeometry *)0x0) {
    pFVar5 = (FGeometry *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar4 = Inverse<TTransform2<float>_>(&local_98,&pFVar5->AccumulatedRenderTransform);
  fVar1 = (pTVar4->M).M[1][1];
  fVar2 = (pTVar4->M).M[0][1];
  *(double *)param_3 =
       (double)((float)local_a0 * (pTVar4->M).M[1][0] + (float)local_a8 * (pTVar4->M).M[0][0]);
  *(double *)((longlong)param_3 + 8) = (double)((float)local_a0 * fVar1 + (float)local_a8 * fVar2);
  return;
}

// execVector_AbsoluteToLocal @ 146aabd00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
USlateBlueprintLibrary::execVector_AbsoluteToLocal(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  float fVar2;
  FProperty *pFVar3;
  TTransform2<float> *pTVar4;
  FGeometry *pFVar5;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  TTransform2<float> local_98;
  FGeometry local_80;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  FGeometry::FGeometry(&local_80);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  pFVar5 = &local_80;
  if ((FGeometry *)param_2->MostRecentPropertyAddress != (FGeometry *)0x0) {
    pFVar5 = (FGeometry *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar4 = Inverse<TTransform2<float>_>(&local_98,&pFVar5->AccumulatedRenderTransform);
  fVar1 = (pTVar4->M).M[1][1];
  fVar2 = (pTVar4->M).M[0][1];
  *(double *)param_3 =
       (double)((float)local_a0 * (pTVar4->M).M[1][0] + (float)local_a8 * (pTVar4->M).M[0][0]);
  *(double *)((longlong)param_3 + 8) = (double)((float)local_a0 * fVar1 + (float)local_a8 * fVar2);
  return;
}

// execVector_LocalToAbsolute @ 146aabe60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
USlateBlueprintLibrary::execVector_LocalToAbsolute(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  float fVar2;
  FProperty *pFVar3;
  FGeometry *pFVar4;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  FGeometry local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_88;
  FGeometry::FGeometry(&local_58);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pFVar4 = &local_58;
  if ((FGeometry *)param_2->MostRecentPropertyAddress != (FGeometry *)0x0) {
    pFVar4 = (FGeometry *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = (pFVar4->AccumulatedRenderTransform).M.M[1][1];
  fVar2 = (pFVar4->AccumulatedRenderTransform).M.M[0][1];
  *(double *)param_3 =
       (double)((float)local_60 * (pFVar4->AccumulatedRenderTransform).M.M[1][0] +
               (float)local_68 * (pFVar4->AccumulatedRenderTransform).M.M[0][0]);
  *(double *)((longlong)param_3 + 8) = (double)((float)local_60 * fVar1 + (float)local_68 * fVar2);
  return;
}

