// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 8

// StaticClass @ 14cedc410

UClass * __cdecl UPCGSplineToMeshSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSplineToMeshSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGSplineToMeshSettings",
               &Z_Registration_Info_UClass_UPCGSplineToMeshSettings.InnerSingleton,
               StaticRegisterNativesUPCGSplineToMeshSettings,0x100,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGSplineToMeshSettings>,
               InternalVTableHelperCtorCaller<UPCGSplineToMeshSettings>,local_res8,
               UPCGDynamicMeshBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSplineToMeshSettings.InnerSingleton;
}

// UPCGSplineToMeshSettings @ 14cee4220

UPCGSplineToMeshSettings * __thiscall
UPCGSplineToMeshSettings::UPCGSplineToMeshSettings
          (UPCGSplineToMeshSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->FlattenMethod = DoNotFlatten;
  this->_padding_ = (longlong)&___7UPCGSplineToMeshSettings__6B_;
  this->ErrorTolerance = 1.0;
  this->Thickness = 0.0;
  this->bFlipResult = false;
  this->OpenCurves = TreatAsClosed;
  this->CurveOffset = 0.0;
  this->JoinMethod = Square;
  this->OffsetClosedCurves = OffsetOuterSide;
  this->EndShapes = Square;
  this->MiterLimit = 1.0;
  return this;
}

// UPCGSplineToMeshSettings @ 14cee4290

UPCGSplineToMeshSettings * __thiscall
UPCGSplineToMeshSettings::UPCGSplineToMeshSettings
          (UPCGSplineToMeshSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->FlattenMethod = DoNotFlatten;
  this->_padding_ = (longlong)&___7UPCGSplineToMeshSettings__6B_;
  this->ErrorTolerance = 1.0;
  this->Thickness = 0.0;
  this->bFlipResult = false;
  this->OpenCurves = TreatAsClosed;
  this->CurveOffset = 0.0;
  this->JoinMethod = Square;
  this->OffsetClosedCurves = OffsetOuterSide;
  this->EndShapes = Square;
  this->MiterLimit = 1.0;
  return this;
}

// ~UPCGSplineToMeshSettings @ 14cee4cf0

void __thiscall UPCGSplineToMeshSettings::~UPCGSplineToMeshSettings(UPCGSplineToMeshSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGDynamicMeshBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 14ceeab20

TSharedPtr<IPCGElement,1> * __thiscall
UPCGSplineToMeshSettings::CreateElement
          (UPCGSplineToMeshSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGSplineToMeshElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGSplineToMeshElement__6B_;
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

// GetPrivateStaticClass @ 14cef39e0

UClass * __cdecl UPCGSplineToMeshSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSplineToMeshSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGSplineToMeshSettings",
               &Z_Registration_Info_UClass_UPCGSplineToMeshSettings.InnerSingleton,
               StaticRegisterNativesUPCGSplineToMeshSettings,0x100,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGSplineToMeshSettings>,
               InternalVTableHelperCtorCaller<UPCGSplineToMeshSettings>,local_res8,
               UPCGDynamicMeshBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSplineToMeshSettings.InnerSingleton;
}

// InputPinProperties @ 14cef40c0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSplineToMeshSettings::InputPinProperties
          (UPCGSplineToMeshSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGPinProperties *pFVar5;
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Spline);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  pFVar5->PinStatus = Required;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGSplineToMeshSettings @ 14cef9c80

void __cdecl UPCGSplineToMeshSettings::StaticRegisterNativesUPCGSplineToMeshSettings(void)

{
  return;
}

