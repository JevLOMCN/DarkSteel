// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 14

// StaticClass @ 149c38df0

UClass * __cdecl UPCGTextureSamplerSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGTextureSamplerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGTextureSamplerSettings",
               &Z_Registration_Info_UClass_UPCGTextureSamplerSettings.InnerSingleton,
               StaticRegisterNativesUPCGTextureSamplerSettings,0x1c0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGTextureSamplerSettings>,
               InternalVTableHelperCtorCaller<UPCGTextureSamplerSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGTextureSamplerSettings.InnerSingleton;
}

// UPCGTextureSamplerSettings @ 149c4c320

UPCGTextureSamplerSettings * __thiscall
UPCGTextureSamplerSettings::UPCGTextureSamplerSettings
          (UPCGTextureSamplerSettings *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  TVector2<double> TVar1;
  undefined8 local_res8;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this_00 = &(this->Texture).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UPCGTextureSamplerSettings__6B_;
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
  (this->Tiling).field0_0x0._s_0.X = 1.0;
  (this->Tiling).field0_0x0._s_0.Y = 1.0;
  this->bUseAbsoluteTransform = false;
  this->TextureArrayIndex = 0;
  this->bUseDensitySourceChannel = true;
  this->ColorChannel = Alpha;
  this->Filter = Bilinear;
  this->TexelSize = 50.0;
  this->bUseAdvancedTiling = false;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->Rotation = 0.0;
  this->bUseTileBounds = false;
  (this->CenterOffset).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->TileBoundsMin).field0_0x0._s_0.X = -0.5;
  (this->TileBoundsMin).field0_0x0._s_0.Y = -0.5;
  this->bSynchronousLoad = false;
  this->bSkipReadbackToCPU = false;
  (this->TileBoundsMax).field0_0x0._s_0.X = 0.5;
  (this->TileBoundsMax).field0_0x0._s_0.Y = 0.5;
  *(undefined8 *)&(this->Texture).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Texture).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->Texture).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Texture).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->Texture).SoftObjectPtr,(FObjectPtr)&local_res8);
  return this;
}

// UPCGTextureSamplerSettings @ 149c4c490

UPCGTextureSamplerSettings * __thiscall
UPCGTextureSamplerSettings::UPCGTextureSamplerSettings
          (UPCGTextureSamplerSettings *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  TVector2<double> TVar1;
  undefined8 local_res8;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this_00 = &(this->Texture).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UPCGTextureSamplerSettings__6B_;
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
  (this->Tiling).field0_0x0._s_0.X = 1.0;
  (this->Tiling).field0_0x0._s_0.Y = 1.0;
  this->bUseAbsoluteTransform = false;
  this->TextureArrayIndex = 0;
  this->bUseDensitySourceChannel = true;
  this->ColorChannel = Alpha;
  this->Filter = Bilinear;
  this->TexelSize = 50.0;
  this->bUseAdvancedTiling = false;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  this->Rotation = 0.0;
  this->bUseTileBounds = false;
  (this->CenterOffset).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->TileBoundsMin).field0_0x0._s_0.X = -0.5;
  (this->TileBoundsMin).field0_0x0._s_0.Y = -0.5;
  this->bSynchronousLoad = false;
  this->bSkipReadbackToCPU = false;
  (this->TileBoundsMax).field0_0x0._s_0.X = 0.5;
  (this->TileBoundsMax).field0_0x0._s_0.Y = 0.5;
  *(undefined8 *)&(this->Texture).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Texture).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->Texture).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Texture).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->Texture).SoftObjectPtr,(FObjectPtr)&local_res8);
  return this;
}

// ~UPCGTextureSamplerSettings @ 149c4de40

void __thiscall
UPCGTextureSamplerSettings::~UPCGTextureSamplerSettings(UPCGTextureSamplerSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGTextureSamplerSettings__6B_;
  pvVar1 = *(void **)&(this->Texture).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c60980

TSharedPtr<IPCGElement,1> * __thiscall
UPCGTextureSamplerSettings::CreateElement
          (UPCGTextureSamplerSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGTextureSamplerElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGTextureSamplerElement__6B_;
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

// GetDensityFunctionEquivalent @ 149c765e0

EPCGTextureDensityFunction __thiscall
UPCGTextureSamplerSettings::GetDensityFunctionEquivalent(UPCGTextureSamplerSettings *this)

{
  return this->bUseDensitySourceChannel != false;
}

// GetPrivateStaticClass @ 149c78c30

UClass * __cdecl UPCGTextureSamplerSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGTextureSamplerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGTextureSamplerSettings",
               &Z_Registration_Info_UClass_UPCGTextureSamplerSettings.InnerSingleton,
               StaticRegisterNativesUPCGTextureSamplerSettings,0x1c0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGTextureSamplerSettings>,
               InternalVTableHelperCtorCaller<UPCGTextureSamplerSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGTextureSamplerSettings.InnerSingleton;
}

// InputPinProperties @ 149c80270

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGTextureSamplerSettings::InputPinProperties
          (UPCGTextureSamplerSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c81710

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGTextureSamplerSettings::OutputPinProperties
          (UPCGTextureSamplerSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar3 = FText::GetEmpty();
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,BaseTexture);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// SetDensityFunctionEquivalent @ 149c8c300

void __thiscall
UPCGTextureSamplerSettings::SetDensityFunctionEquivalent
          (UPCGTextureSamplerSettings *this,EPCGTextureDensityFunction param_1)

{
  this->bUseDensitySourceChannel = param_1 != Ignore;
  return;
}

// SetTexture @ 149c8ca50

void __thiscall
UPCGTextureSamplerSettings::SetTexture
          (UPCGTextureSamplerSettings *this,TSoftObjectPtr<UTexture> *param_1)

{
  void *pvVar1;
  
  *(undefined8 *)&(this->Texture).SoftObjectPtr = *(undefined8 *)&param_1->SoftObjectPtr;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&(this->Texture).SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
  pvVar1 = *(void **)&(param_1->SoftObjectPtr).field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// StaticRegisterNativesUPCGTextureSamplerSettings @ 149c92070

void __cdecl UPCGTextureSamplerSettings::StaticRegisterNativesUPCGTextureSamplerSettings(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UPCGTextureSamplerSettings_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetDensityFunctionEquivalent @ 149c94e80

void __cdecl
UPCGTextureSamplerSettings::execGetDensityFunctionEquivalent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = param_1[7].field_0x20 != '\0';
  return;
}

// execSetDensityFunctionEquivalent @ 149c94eb0

void __cdecl
UPCGTextureSamplerSettings::execSetDensityFunctionEquivalent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  char local_res8 [8];
  
  local_res8[0] = '\0';
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[7].field_0x20 = local_res8[0] != '\0';
  return;
}

