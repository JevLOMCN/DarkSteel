// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149b30020

UClass * __cdecl UPCGDuplicatePointSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDuplicatePointSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDuplicatePointSettings",
               &Z_Registration_Info_UClass_UPCGDuplicatePointSettings.InnerSingleton,
               StaticRegisterNativesUPCGDuplicatePointSettings,0x150,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGDuplicatePointSettings>,
               InternalVTableHelperCtorCaller<UPCGDuplicatePointSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDuplicatePointSettings.InnerSingleton;
}

// UPCGDuplicatePointSettings @ 149b570e0

UPCGDuplicatePointSettings * __thiscall
UPCGDuplicatePointSettings::UPCGDuplicatePointSettings
          (UPCGDuplicatePointSettings *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->Iterations = 1;
  this->_padding_ = (longlong)&___7UPCGDuplicatePointSettings__6B_;
  (this->Direction).field0_0x0._s_0.X = 0.0;
  (this->Direction).field0_0x0._s_0.Y = 0.0;
  (this->Direction).field0_0x0._s_0.Z = 1.0;
  this->bDirectionAppliedInRelativeSpace = false;
  this->bOutputSourcePoint = true;
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

// UPCGDuplicatePointSettings @ 149b571a0

UPCGDuplicatePointSettings * __thiscall
UPCGDuplicatePointSettings::UPCGDuplicatePointSettings
          (UPCGDuplicatePointSettings *this,FObjectInitializer *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->Iterations = 1;
  this->_padding_ = (longlong)&___7UPCGDuplicatePointSettings__6B_;
  (this->Direction).field0_0x0._s_0.X = 0.0;
  (this->Direction).field0_0x0._s_0.Y = 0.0;
  (this->Direction).field0_0x0._s_0.Z = 1.0;
  this->bDirectionAppliedInRelativeSpace = false;
  this->bOutputSourcePoint = true;
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

// ~UPCGDuplicatePointSettings @ 149b59130

void __thiscall
UPCGDuplicatePointSettings::~UPCGDuplicatePointSettings(UPCGDuplicatePointSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGDuplicatePointSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149b6b1d0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGDuplicatePointSettings::CreateElement
          (UPCGDuplicatePointSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGDuplicatePointElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGDuplicatePointElement__6B_;
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

// GetPrivateStaticClass @ 149b90ec0

UClass * __cdecl UPCGDuplicatePointSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDuplicatePointSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDuplicatePointSettings",
               &Z_Registration_Info_UClass_UPCGDuplicatePointSettings.InnerSingleton,
               StaticRegisterNativesUPCGDuplicatePointSettings,0x150,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGDuplicatePointSettings>,
               InternalVTableHelperCtorCaller<UPCGDuplicatePointSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDuplicatePointSettings.InnerSingleton;
}

// InputPinProperties @ 149b92960

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGDuplicatePointSettings::InputPinProperties
          (UPCGDuplicatePointSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointInputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b94760

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGDuplicatePointSettings::OutputPinProperties
          (UPCGDuplicatePointSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGDuplicatePointSettings @ 149b98520

void __cdecl UPCGDuplicatePointSettings::StaticRegisterNativesUPCGDuplicatePointSettings(void)

{
  return;
}

