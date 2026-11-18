// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149c39d00

UClass * __cdecl UPCGSplineSamplerSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSplineSamplerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSplineSamplerSettings",
               &Z_Registration_Info_UClass_UPCGSplineSamplerSettings.InnerSingleton,
               StaticRegisterNativesUPCGSplineSamplerSettings,0x200,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGSplineSamplerSettings>,
               InternalVTableHelperCtorCaller<UPCGSplineSamplerSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSplineSamplerSettings.InnerSingleton;
}

// UPCGSplineSamplerSettings @ 149c4bc90

UPCGSplineSamplerSettings * __thiscall
UPCGSplineSamplerSettings::UPCGSplineSamplerSettings
          (UPCGSplineSamplerSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGSplineSamplerSettings__6B_;
  FPCGSplineSamplerParams::FPCGSplineSamplerParams(&this->SamplerParams);
  return this;
}

// UPCGSplineSamplerSettings @ 149c4bcd0

UPCGSplineSamplerSettings * __thiscall
UPCGSplineSamplerSettings::UPCGSplineSamplerSettings(UPCGSplineSamplerSettings *this)

{
  bool bVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar2);
  this->_padding_ = (longlong)&___7UPCGSplineSamplerSettings__6B_;
  FPCGSplineSamplerParams::FPCGSplineSamplerParams(&this->SamplerParams);
  bVar1 = PCGHelpers::IsNewObjectAndNotDefault((UObject *)this,false);
  if (bVar1) {
    (this->SamplerParams).PointSteepness = 1.0;
  }
  return this;
}

// ~UPCGSplineSamplerSettings @ 149c4dc70

void __thiscall
UPCGSplineSamplerSettings::~UPCGSplineSamplerSettings(UPCGSplineSamplerSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGSplineSamplerSettings__6B_;
  pFVar1 = (this->SamplerParams).InteriorDensityFalloffCurve.EditorCurveData.Keys.AllocatorInstance.
           Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->SamplerParams).InteriorDensityFalloffCurve.EditorCurveData._padding_ =
       (longlong)&___7FIndexedCurve__6B_;
  pvVar2 = (void *)(this->SamplerParams).InteriorDensityFalloffCurve.EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined4 *)&(this->SamplerParams).InteriorDensityFalloffCurve.EditorCurveData._padding_ = 0;
  pvVar2 = (void *)(this->SamplerParams).InteriorDensityFalloffCurve.EditorCurveData._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FKeyHandle,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->SamplerParams).InteriorDensityFalloffCurve.EditorCurveData._padding_);
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c605c0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGSplineSamplerSettings::CreateElement
          (UPCGSplineSamplerSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGSplineSamplerElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGSplineSamplerElement__6B_;
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

// GetPrivateStaticClass @ 149c787b0

UClass * __cdecl UPCGSplineSamplerSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSplineSamplerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSplineSamplerSettings",
               &Z_Registration_Info_UClass_UPCGSplineSamplerSettings.InnerSingleton,
               StaticRegisterNativesUPCGSplineSamplerSettings,0x200,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGSplineSamplerSettings>,
               InternalVTableHelperCtorCaller<UPCGSplineSamplerSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSplineSamplerSettings.InnerSingleton;
}

// InputPinProperties @ 149c7fdd0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSplineSamplerSettings::InputPinProperties
          (UPCGSplineSamplerSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGPinProperties *pFVar5;
  FPCGDataTypeIdentifier local_38;
  FPCGDataTypeIdentifier local_20;
  
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_38,PolyLine);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGSplineSamplerConstants::SplineLabel,pFVar4,true,true,pFVar3);
  pFVar5->PinStatus = Required;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_38,L"PCGSplineSamplerElement",
                      L"SplineSamplerBoundingShapePinTooltip",
                      L"Optional. All sampled points must be contained within this shape.");
  iVar2 = __return_storage_ptr__->ArrayNum;
  if (iVar2 == __return_storage_ptr__->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_20,Spatial);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGSplineSamplerConstants::BoundingShapeLabel,pFVar4,false,false,pFVar3);
  if (local_38.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    (**(code **)(*(longlong *)local_38.Ids.AllocatorInstance.Data + 0x10))();
  }
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c81450

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSplineSamplerSettings::OutputPinProperties
          (UPCGSplineSamplerSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGSplineSamplerSettings @ 149c91fe0

void __cdecl UPCGSplineSamplerSettings::StaticRegisterNativesUPCGSplineSamplerSettings(void)

{
  return;
}

// UseSeed @ 149c93680

bool __thiscall UPCGSplineSamplerSettings::UseSeed(UPCGSplineSamplerSettings *this)

{
  return true;
}

