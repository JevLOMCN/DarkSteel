// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149c969f0

UClass * __cdecl UPCGPolygon2DOperationSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPolygon2DOperationSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPolygon2DOperationSettings",
               &Z_Registration_Info_UClass_UPCGPolygon2DOperationSettings.InnerSingleton,
               StaticRegisterNativesUPCGPolygon2DOperationSettings,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGPolygon2DOperationSettings>,
               InternalVTableHelperCtorCaller<UPCGPolygon2DOperationSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPolygon2DOperationSettings.InnerSingleton;
}

// UPCGPolygon2DOperationSettings @ 149ca49a0

UPCGPolygon2DOperationSettings * __thiscall
UPCGPolygon2DOperationSettings::UPCGPolygon2DOperationSettings
          (UPCGPolygon2DOperationSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->Operation = Intersection;
  this->MetadataMode = Full;
  this->_padding_ = (longlong)&___7UPCGPolygon2DOperationSettings__6B_;
  this->SplineMaxDiscretizationError = 1.0;
  this->bQuiet = false;
  return this;
}

// UPCGPolygon2DOperationSettings @ 149ca49f0

UPCGPolygon2DOperationSettings * __thiscall
UPCGPolygon2DOperationSettings::UPCGPolygon2DOperationSettings
          (UPCGPolygon2DOperationSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->Operation = Intersection;
  this->MetadataMode = Full;
  this->_padding_ = (longlong)&___7UPCGPolygon2DOperationSettings__6B_;
  this->SplineMaxDiscretizationError = 1.0;
  this->bQuiet = false;
  return this;
}

// ~UPCGPolygon2DOperationSettings @ 149ca6800

void __thiscall
UPCGPolygon2DOperationSettings::~UPCGPolygon2DOperationSettings
          (UPCGPolygon2DOperationSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGPolygon2DOperationSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149cb94a0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGPolygon2DOperationSettings::CreateElement
          (UPCGPolygon2DOperationSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGPolygon2DOperationElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGPolygon2DOperationElement__6B_;
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

// GetAdditionalTitleInformation @ 149cc5f40

FString * __thiscall
UPCGPolygon2DOperationSettings::GetAdditionalTitleInformation
          (UPCGPolygon2DOperationSettings *this,FString *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FText *this_00;
  FString *pFVar2;
  FText local_18;
  
  if (Z_Registration_Info_UEnum_EPCGPolygonOperation.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGPolygonOperation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGPolygonOperation,(UObject *)pUVar1,
                       L"EPCGPolygonOperation");
    if (Z_Registration_Info_UEnum_EPCGPolygonOperation.OuterSingleton == (UEnum *)0x0) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
  }
  this_00 = UEnum::GetDisplayNameTextByValue
                      (Z_Registration_Info_UEnum_EPCGPolygonOperation.OuterSingleton,&local_18,
                       (ulonglong)this->Operation);
  pFVar2 = FText::ToString(this_00);
  ::FString::FString(__return_storage_ptr__,pFVar2);
  if (local_18.TextData.Reference == (ITextData *)0x0) {
    return __return_storage_ptr__;
  }
  (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149ccbc70

UClass * __cdecl UPCGPolygon2DOperationSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPolygon2DOperationSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPolygon2DOperationSettings",
               &Z_Registration_Info_UClass_UPCGPolygon2DOperationSettings.InnerSingleton,
               StaticRegisterNativesUPCGPolygon2DOperationSettings,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGPolygon2DOperationSettings>,
               InternalVTableHelperCtorCaller<UPCGPolygon2DOperationSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPolygon2DOperationSettings.InnerSingleton;
}

// InputPinProperties @ 149ccd180

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGPolygon2DOperationSettings::InputPinProperties
          (UPCGPolygon2DOperationSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  EPCGPolygonOperation EVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FLazyName *this_00;
  FPCGPinProperties *this_01;
  FName local_res8;
  FPCGDataTypeIdentifier local_28;
  
  PCGPolygon2DUtils::DefaultPolygonInputPinProperties(__return_storage_ptr__);
  EVar1 = this->Operation;
  if ((EVar1 == Difference) ||
     (((EVar1 - Intersection & 0xfc) == 0 && (EVar1 != InnerIntersection)))) {
    iVar2 = __return_storage_ptr__->ArrayNum;
    if (iVar2 == __return_storage_ptr__->ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    this_01 = (FPCGPinProperties *)
              ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar2 * 0x30);
    pFVar3 = FText::GetEmpty();
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Polygon2D);
    this_00 = &PCGPolygon2DUtils::Constants::ClipPolysLabel;
  }
  else {
    if (EVar1 != CutWithPaths) {
      return __return_storage_ptr__;
    }
    iVar2 = __return_storage_ptr__->ArrayNum;
    if (iVar2 == __return_storage_ptr__->ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    this_01 = (FPCGPinProperties *)
              ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar2 * 0x30);
    pFVar3 = FText::GetEmpty();
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,PointOrSpline);
    this_00 = &PCGPolygon2DUtils::Constants::ClipPathsLabel;
  }
  FLazyName::Resolve(this_00);
  FPCGPinProperties::FPCGPinProperties(this_01,&local_res8,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149cce2b0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGPolygon2DOperationSettings::OutputPinProperties
          (UPCGPolygon2DOperationSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  PCGPolygon2DUtils::DefaultPolygonOutputPinProperties(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGPolygon2DOperationSettings @ 149cdd4d0

void __cdecl
UPCGPolygon2DOperationSettings::StaticRegisterNativesUPCGPolygon2DOperationSettings(void)

{
  return;
}

