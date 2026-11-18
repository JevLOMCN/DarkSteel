// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Paper2D
// Functions: 8

// StaticClass @ 14acdd930

UClass * __cdecl UPaperSpriteBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperSpriteBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperSpriteBlueprintLibrary",
               &Z_Registration_Info_UClass_UPaperSpriteBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUPaperSpriteBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPaperSpriteBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UPaperSpriteBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperSpriteBlueprintLibrary.InnerSingleton;
}

// UPaperSpriteBlueprintLibrary @ 14acea970

UPaperSpriteBlueprintLibrary * __thiscall
UPaperSpriteBlueprintLibrary::UPaperSpriteBlueprintLibrary
          (UPaperSpriteBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPaperSpriteBlueprintLibrary__6B_;
  return this;
}

// UPaperSpriteBlueprintLibrary @ 14acea9a0

UPaperSpriteBlueprintLibrary * __thiscall
UPaperSpriteBlueprintLibrary::UPaperSpriteBlueprintLibrary
          (UPaperSpriteBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UPaperSpriteBlueprintLibrary__6B_;
  return this;
}

// ~UPaperSpriteBlueprintLibrary @ 14acebc60

void __thiscall
UPaperSpriteBlueprintLibrary::~UPaperSpriteBlueprintLibrary(UPaperSpriteBlueprintLibrary *this)

{
  *(undefined ***)this = &___7UPaperSpriteBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 14acfd390

UClass * __cdecl UPaperSpriteBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPaperSpriteBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Paper2D",L"PaperSpriteBlueprintLibrary",
               &Z_Registration_Info_UClass_UPaperSpriteBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUPaperSpriteBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPaperSpriteBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UPaperSpriteBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPaperSpriteBlueprintLibrary.InnerSingleton;
}

// MakeBrushFromSprite @ 14ad03570

FSlateBrush * __cdecl
UPaperSpriteBlueprintLibrary::MakeBrushFromSprite
          (FSlateBrush *__return_storage_ptr__,UPaperSprite *param_1,int param_2,int param_3)

{
  FSlateBrush *pFVar1;
  float fVar2;
  double dVar3;
  TVector2<float>_u_0 local_res10;
  longlong *local_108 [3];
  double local_f0;
  double local_e8;
  undefined1 local_d8 [36];
  float local_b4;
  FSharedReferencer<1> local_38;
  
  if (param_1 == (UPaperSprite *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar1 = (FSlateBrush *)
             FSlateNoResource::FSlateNoResource
                       ((FSlateNoResource *)local_d8,
                        (FDeprecateVector2DParameter *)&local_res10._s_0);
    FSlateBrush::FSlateBrush(__return_storage_ptr__,pFVar1);
    local_d8._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.ReferenceController);
  }
  else {
    (**(code **)(param_1->_padding_ + 0x10))(&param_1->_padding_,local_108);
    if (local_108[0] == (longlong *)0x0) {
      local_f0 = 0.0;
      dVar3 = 0.0;
    }
    else {
      fVar2 = (float)(**(code **)(*local_108[0] + 0x370))();
      dVar3 = (double)fVar2 * local_e8;
      fVar2 = (float)(**(code **)(*local_108[0] + 0x368))();
      local_f0 = (double)fVar2 * local_f0;
    }
    FSlateBrush::FSlateBrush((FSlateBrush *)local_d8);
    FSlateBrush::SetResourceObject((FSlateBrush *)local_d8,(UObject *)param_1);
    if (0 < param_2) {
      local_f0 = (double)param_2;
    }
    if (0 < param_3) {
      dVar3 = (double)param_3;
    }
    local_d8._32_4_ = (undefined4)(int)local_f0;
    local_b4 = (float)(int)dVar3;
    FSlateBrush::FSlateBrush(__return_storage_ptr__,(FSlateBrush *)local_d8);
    local_d8._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.ReferenceController);
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPaperSpriteBlueprintLibrary @ 14ad0e040

void __cdecl UPaperSpriteBlueprintLibrary::StaticRegisterNativesUPaperSpriteBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UPaperSpriteBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execMakeBrushFromSprite @ 14ad120e0

void __cdecl
UPaperSpriteBlueprintLibrary::execMakeBrushFromSprite
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  int iVar3;
  int iVar4;
  UObject *pUVar5;
  FSlateBrush *pFVar6;
  byte bVar7;
  float fVar8;
  double dVar9;
  int local_res10 [2];
  int local_res18 [2];
  UObject *local_res20;
  TVector2<float>_u_0 local_1d8;
  longlong *local_1d0 [3];
  double local_1b8;
  double local_1b0;
  FSlateBrush local_1a8;
  undefined1 local_f8 [36];
  float local_d4;
  FSharedReferencer<1> local_58;
  
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
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar5 = local_res20;
  iVar4 = local_res18[0];
  iVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UObject *)0x0) {
    local_1d8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar6 = (FSlateBrush *)
             FSlateNoResource::FSlateNoResource
                       ((FSlateNoResource *)local_f8,(FDeprecateVector2DParameter *)&local_1d8._s_0)
    ;
    FSlateBrush::FSlateBrush(&local_1a8,pFVar6);
    local_f8._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.ReferenceController);
  }
  else {
    (**(code **)(*(longlong *)&local_res20[1].field_0x8 + 0x10))
              (&local_res20[1].field_0x8,local_1d0);
    if (local_1d0[0] == (longlong *)0x0) {
      local_1b8 = 0.0;
      dVar9 = 0.0;
    }
    else {
      fVar8 = (float)(**(code **)(*local_1d0[0] + 0x370))();
      dVar9 = (double)fVar8 * local_1b0;
      fVar8 = (float)(**(code **)(*local_1d0[0] + 0x368))();
      local_1b8 = (double)fVar8 * local_1b8;
    }
    FSlateBrush::FSlateBrush((FSlateBrush *)local_f8);
    FSlateBrush::SetResourceObject((FSlateBrush *)local_f8,pUVar5);
    if (0 < iVar4) {
      local_1b8 = (double)iVar4;
    }
    if (0 < iVar3) {
      dVar9 = (double)iVar3;
    }
    local_f8._32_4_ = (undefined4)(int)local_1b8;
    local_d4 = (float)(int)dVar9;
    FSlateBrush::FSlateBrush(&local_1a8,(FSlateBrush *)local_f8);
    local_f8._0_8_ = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.ReferenceController);
  }
  *(undefined8 *)((longlong)param_3 + 8) = local_1a8.TintColor.SpecifiedColor.field0_0x0._0_8_;
  *(undefined8 *)((longlong)param_3 + 0x10) = local_1a8.TintColor.SpecifiedColor.field0_0x0._8_8_;
  *(undefined4 *)((longlong)param_3 + 0x18) = local_1a8.TintColor._16_4_;
  *(uchar *)((longlong)param_3 + 0x1c) = local_1a8.DrawAs.Value;
  *(uchar *)((longlong)param_3 + 0x1d) = local_1a8.Tiling.Value;
  *(uchar *)((longlong)param_3 + 0x1e) = local_1a8.Mirroring.Value;
  *(uchar *)((longlong)param_3 + 0x1f) = local_1a8.ImageType.Value;
  *(FDeprecateSlateVector2D *)((longlong)param_3 + 0x20) = local_1a8.ImageSize;
  *(undefined8 *)((longlong)param_3 + 0x28) = local_1a8.Margin._0_8_;
  *(undefined8 *)((longlong)param_3 + 0x30) = local_1a8.Margin._8_8_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_1a8.ResourceObject.field0_0x0.DebugPtr != (TObjectPtr<UObject>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1a8.ResourceObject.field0_0x0);
  }
  ((TObjectPtr<UObject>_u_0 *)((longlong)param_3 + 0x38))->DebugPtr =
       (UObject *)local_1a8.ResourceObject.field0_0x0;
  *(double *)((longlong)param_3 + 0x40) = local_1a8.OutlineSettings.CornerRadii.field0_0x0._s_0.X;
  *(double *)((longlong)param_3 + 0x48) = local_1a8.OutlineSettings.CornerRadii.field0_0x0._s_0.Y;
  *(double *)((longlong)param_3 + 0x50) = local_1a8.OutlineSettings.CornerRadii.field0_0x0._s_0.Z;
  *(double *)((longlong)param_3 + 0x58) = local_1a8.OutlineSettings.CornerRadii.field0_0x0._s_0.W;
  *(undefined8 *)((longlong)param_3 + 0x60) =
       local_1a8.OutlineSettings.Color.SpecifiedColor.field0_0x0._0_8_;
  *(undefined8 *)((longlong)param_3 + 0x68) =
       local_1a8.OutlineSettings.Color.SpecifiedColor.field0_0x0._8_8_;
  *(TVector2<float>_u_0 *)((longlong)param_3 + 0x80) = local_1a8.UVRegion.Min.field0_0x0;
  *(TVector2<float>_u_0 *)((longlong)param_3 + 0x88) = local_1a8.UVRegion.Max.field0_0x0;
  *(undefined4 *)((longlong)param_3 + 0x90) = local_1a8.UVRegion._16_4_;
  bVar7 = (*(byte *)((longlong)param_3 + 0x94) ^ local_1a8._148_1_) & 1 ^
          *(byte *)((longlong)param_3 + 0x94);
  bVar7 = (bVar7 ^ local_1a8._148_1_) & 2 ^ bVar7;
  *(byte *)((longlong)param_3 + 0x94) = (bVar7 ^ local_1a8._148_1_) & 4 ^ bVar7;
  *(undefined8 *)((longlong)param_3 + 0x70) = local_1a8.OutlineSettings._48_8_;
  *(undefined8 *)((longlong)param_3 + 0x78) = local_1a8.OutlineSettings._56_8_;
  if (local_1a8.ResourceHandle.Data.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1a8.ResourceHandle.Data.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1a8.ResourceHandle.Data.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)param_3 + 0xa0);
  *(ulonglong *)((longlong)param_3 + 0x98) =
       CONCAT44(local_1a8.ResourceHandle.Data.Object._4_4_,
                local_1a8.ResourceHandle.Data.Object._0_4_);
  *(TReferenceControllerBase<1> **)((longlong)param_3 + 0xa0) =
       local_1a8.ResourceHandle.Data.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  *(FName *)((longlong)param_3 + 0xa8) = local_1a8.ResourceName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

