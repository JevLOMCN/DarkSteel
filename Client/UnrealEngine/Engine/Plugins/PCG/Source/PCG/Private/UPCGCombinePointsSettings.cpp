// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149a15a40

UClass * __cdecl UPCGCombinePointsSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCombinePointsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCombinePointsSettings",
               &Z_Registration_Info_UClass_UPCGCombinePointsSettings.InnerSingleton,
               StaticRegisterNativesUPCGCombinePointsSettings,0x130,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCombinePointsSettings>,
               InternalVTableHelperCtorCaller<UPCGCombinePointsSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCombinePointsSettings.InnerSingleton;
}

// UPCGCombinePointsSettings @ 149ad1a50

UPCGCombinePointsSettings * __thiscall
UPCGCombinePointsSettings::UPCGCombinePointsSettings
          (UPCGCombinePointsSettings *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bCenterPivot = true;
  this->bUseFirstPointTransform = true;
  this->_padding_ = (longlong)&___7UPCGCombinePointsSettings__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->PointTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->PointTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->PointTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->PointTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->PointTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->PointTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->PointTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->PointTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->PointTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->PointTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->PointTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->PointTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// UPCGCombinePointsSettings @ 149ad1ae0

UPCGCombinePointsSettings * __thiscall
UPCGCombinePointsSettings::UPCGCombinePointsSettings
          (UPCGCombinePointsSettings *this,FObjectInitializer *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bCenterPivot = true;
  this->bUseFirstPointTransform = true;
  this->_padding_ = (longlong)&___7UPCGCombinePointsSettings__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->PointTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->PointTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->PointTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->PointTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->PointTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->PointTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->PointTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->PointTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->PointTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->PointTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->PointTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->PointTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  return this;
}

// ~UPCGCombinePointsSettings @ 149ad3700

void __thiscall
UPCGCombinePointsSettings::~UPCGCombinePointsSettings(UPCGCombinePointsSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGCombinePointsSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149afcb30

TSharedPtr<IPCGElement,1> * __thiscall
UPCGCombinePointsSettings::CreateElement
          (UPCGCombinePointsSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         &
         ___7__TIntrusiveReferenceController_VFPCGCombinePointsElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGCombinePointsElement__6B_;
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

// GetPrivateStaticClass @ 149b17f70

UClass * __cdecl UPCGCombinePointsSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCombinePointsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCombinePointsSettings",
               &Z_Registration_Info_UClass_UPCGCombinePointsSettings.InnerSingleton,
               StaticRegisterNativesUPCGCombinePointsSettings,0x130,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCombinePointsSettings>,
               InternalVTableHelperCtorCaller<UPCGCombinePointsSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCombinePointsSettings.InnerSingleton;
}

// InputPinProperties @ 149b1c800

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGCombinePointsSettings::InputPinProperties
          (UPCGCombinePointsSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointInputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b20490

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGCombinePointsSettings::OutputPinProperties
          (UPCGCombinePointsSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGCombinePointsSettings @ 149b2cf90

void __cdecl UPCGCombinePointsSettings::StaticRegisterNativesUPCGCombinePointsSettings(void)

{
  return;
}

