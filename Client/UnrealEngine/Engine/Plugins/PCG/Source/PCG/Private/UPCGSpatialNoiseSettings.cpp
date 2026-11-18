// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149b9e050

UClass * __cdecl UPCGSpatialNoiseSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSpatialNoiseSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSpatialNoiseSettings",
               &Z_Registration_Info_UClass_UPCGSpatialNoiseSettings.InnerSingleton,
               StaticRegisterNativesUPCGSpatialNoiseSettings,0x210,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSpatialNoiseSettings>,
               InternalVTableHelperCtorCaller<UPCGSpatialNoiseSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSpatialNoiseSettings.InnerSingleton;
}

// UPCGSpatialNoiseSettings @ 149be8870

UPCGSpatialNoiseSettings * __thiscall
UPCGSpatialNoiseSettings::UPCGSpatialNoiseSettings
          (UPCGSpatialNoiseSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->Iterations = 4;
  *(undefined ***)this = &___7UPCGSpatialNoiseSettings__6B_;
  this->Contrast = 1.0;
  *(undefined8 *)&(this->ValueTarget).field_0x8 = 0;
  this->Mode = Perlin2D;
  this->EdgeMask2DMode = Perlin;
  this->bTiling = false;
  this->Brightness = 0.0;
  *(undefined8 *)&(this->ValueTarget).field_0x10 = 0;
  *(undefined8 *)&(this->ValueTarget).field_0x18 = 0;
  *(undefined4 *)&(this->ValueTarget).field_0x20 = 0;
  *(undefined8 *)&(this->ValueTarget).field_0x30 = 0;
  (this->ValueTarget).field_0x38 = 0;
  *(undefined ***)&this->ValueTarget = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
  (this->RandomOffset).field0_0x0._s_0.X = 100000.0;
  (this->RandomOffset).field0_0x0._s_0.Y = 100000.0;
  (this->RandomOffset).field0_0x0._s_0.Z = 100000.0;
  *(undefined8 *)&(this->ValueTarget).field_0x28 = 0;
  *&(this->Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined8 *)&(this->VoronoiCellIDTarget).field_0x8 = 0;
  this->VoronoiCellRandomness = 1.0;
  *(undefined8 *)&(this->VoronoiCellIDTarget).field_0x10 = 0;
  *(undefined8 *)&(this->VoronoiCellIDTarget).field_0x18 = 0;
  *(undefined4 *)&(this->VoronoiCellIDTarget).field_0x20 = 0;
  *(undefined8 *)&(this->VoronoiCellIDTarget).field_0x28 = 0;
  *(undefined8 *)&(this->VoronoiCellIDTarget).field_0x30 = 0;
  (this->VoronoiCellIDTarget).field_0x38 = 0;
  *(undefined ***)&this->VoronoiCellIDTarget = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_
  ;
  this->bVoronoiOrientSamplesToCellEdge = false;
  this->TiledVoronoiResolution = 8;
  this->TiledVoronoiEdgeBlendCellCount = 2;
  this->EdgeBlendDistance = 1.0;
  this->EdgeBlendCurveOffset = 1.0;
  this->EdgeBlendCurveIntensity = 1.0;
  this->bForceNoUseSeed = false;
  return this;
}

// UPCGSpatialNoiseSettings @ 149be8a00

UPCGSpatialNoiseSettings * __thiscall
UPCGSpatialNoiseSettings::UPCGSpatialNoiseSettings(UPCGSpatialNoiseSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar1);
  this->Iterations = 4;
  this->Contrast = 1.0;
  *(undefined ***)this = &___7UPCGSpatialNoiseSettings__6B_;
  *(undefined8 *)&(this->ValueTarget).field_0x8 = 0;
  this->Mode = Perlin2D;
  this->EdgeMask2DMode = Perlin;
  this->bTiling = false;
  this->Brightness = 0.0;
  *(undefined8 *)&(this->ValueTarget).field_0x10 = 0;
  *(undefined8 *)&(this->ValueTarget).field_0x18 = 0;
  *(undefined4 *)&(this->ValueTarget).field_0x20 = 0;
  *(undefined8 *)&(this->ValueTarget).field_0x30 = 0;
  (this->ValueTarget).field_0x38 = 0;
  *(undefined ***)&(this->ValueTarget).field_0x0 =
       &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
  *(undefined8 *)&(this->ValueTarget).field_0x28 = 0;
  (this->RandomOffset).field0_0x0._s_0.X = 100000.0;
  (this->RandomOffset).field0_0x0._s_0.Y = 100000.0;
  (this->RandomOffset).field0_0x0._s_0.Z = 100000.0;
  *&(this->Transform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->Transform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->Transform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->Transform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->Transform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->Transform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  *(undefined8 *)&(this->VoronoiCellIDTarget).field_0x8 = 0;
  this->VoronoiCellRandomness = 1.0;
  *(undefined8 *)&(this->VoronoiCellIDTarget).field_0x10 = 0;
  *(undefined8 *)&(this->VoronoiCellIDTarget).field_0x18 = 0;
  *(undefined4 *)&(this->VoronoiCellIDTarget).field_0x20 = 0;
  *(undefined8 *)&(this->VoronoiCellIDTarget).field_0x28 = 0;
  *(undefined8 *)&(this->VoronoiCellIDTarget).field_0x30 = 0;
  (this->VoronoiCellIDTarget).field_0x38 = 0;
  *(undefined ***)&this->VoronoiCellIDTarget = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_
  ;
  this->bVoronoiOrientSamplesToCellEdge = false;
  this->bForceNoUseSeed = false;
  this->TiledVoronoiResolution = 8;
  this->TiledVoronoiEdgeBlendCellCount = 2;
  this->EdgeBlendDistance = 1.0;
  this->EdgeBlendCurveOffset = 1.0;
  this->EdgeBlendCurveIntensity = 1.0;
  FPCGAttributePropertySelector::SetPointProperty
            ((FPCGAttributePropertySelector *)&this->ValueTarget,Density,true);
  return this;
}

// ~UPCGSpatialNoiseSettings @ 149bea430

void __thiscall UPCGSpatialNoiseSettings::~UPCGSpatialNoiseSettings(UPCGSpatialNoiseSettings *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &___7UPCGSpatialNoiseSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->VoronoiCellIDTarget).field_0x28,
             *(int *)&(this->VoronoiCellIDTarget).field_0x30);
  pvVar1 = *(void **)&(this->VoronoiCellIDTarget).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->ValueTarget).field_0x28,*(int *)&(this->ValueTarget).field_0x30);
  pvVar1 = *(void **)&(this->ValueTarget).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c068e0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGSpatialNoiseSettings::CreateElement
          (UPCGSpatialNoiseSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<IPCGElement,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IPCGElement *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFPCGSpatialNoise___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FPCGSpatialNoise__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<IPCGElement,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (IPCGElement *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149c27290

UClass * __cdecl UPCGSpatialNoiseSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSpatialNoiseSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSpatialNoiseSettings",
               &Z_Registration_Info_UClass_UPCGSpatialNoiseSettings.InnerSingleton,
               StaticRegisterNativesUPCGSpatialNoiseSettings,0x210,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSpatialNoiseSettings>,
               InternalVTableHelperCtorCaller<UPCGSpatialNoiseSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSpatialNoiseSettings.InnerSingleton;
}

// InputPinProperties @ 149c2d3b0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSpatialNoiseSettings::InputPinProperties
          (UPCGSpatialNoiseSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointInputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c2f320

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSpatialNoiseSettings::OutputPinProperties
          (UPCGSpatialNoiseSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGSpatialNoiseSettings @ 149c356f0

void __cdecl UPCGSpatialNoiseSettings::StaticRegisterNativesUPCGSpatialNoiseSettings(void)

{
  return;
}

// UseSeed @ 149c363c0

bool __thiscall UPCGSpatialNoiseSettings::UseSeed(UPCGSpatialNoiseSettings *this)

{
  return this->bForceNoUseSeed == false;
}

