// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149c3a210

UClass * __cdecl UPCGCreatePolygon2DSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCreatePolygon2DSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCreatePolygon2DSettings",
               &Z_Registration_Info_UClass_UPCGCreatePolygon2DSettings.InnerSingleton,
               StaticRegisterNativesUPCGCreatePolygon2DSettings,0x168,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCreatePolygon2DSettings>,
               InternalVTableHelperCtorCaller<UPCGCreatePolygon2DSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCreatePolygon2DSettings.InnerSingleton;
}

// UPCGCreatePolygon2DSettings @ 149c4aef0

UPCGCreatePolygon2DSettings * __thiscall
UPCGCreatePolygon2DSettings::UPCGCreatePolygon2DSettings
          (UPCGCreatePolygon2DSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->InputType = Automatic;
  this->bUseHoleAttribute = false;
  this->_padding_ = (longlong)&___7UPCGCreatePolygon2DSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->HoleIndexAttribute);
  this->bUsePolygonWidthAttribute = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->PolygonWidthAttribute);
  this->OpenPolygonWidth = 100.0;
  this->SplineMaxDiscretizationError = 1.0;
  return this;
}

// UPCGCreatePolygon2DSettings @ 149c4af70

UPCGCreatePolygon2DSettings * __thiscall
UPCGCreatePolygon2DSettings::UPCGCreatePolygon2DSettings(UPCGCreatePolygon2DSettings *this)

{
  FObjectInitializer *pFVar1;
  UEnum *this_00;
  FString *pFVar2;
  FString local_18;
  
  pFVar1 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar1);
  this->InputType = Automatic;
  this->bUseHoleAttribute = false;
  this->_padding_ = (longlong)&___7UPCGCreatePolygon2DSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->HoleIndexAttribute);
  this->bUsePolygonWidthAttribute = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->PolygonWidthAttribute);
  this->OpenPolygonWidth = 100.0;
  this->SplineMaxDiscretizationError = 1.0;
  this_00 = StaticEnum<enum_EPCGPolygon2DProperties>();
  pFVar2 = UEnum::GetNameStringByValue(this_00,&local_18,3);
  FPCGAttributePropertySelector::Update
            ((FPCGAttributePropertySelector *)&this->HoleIndexAttribute,pFVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~UPCGCreatePolygon2DSettings @ 149c4d800

void __thiscall
UPCGCreatePolygon2DSettings::~UPCGCreatePolygon2DSettings(UPCGCreatePolygon2DSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGCreatePolygon2DSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->PolygonWidthAttribute).field_0x28,
             *(int *)&(this->PolygonWidthAttribute).field_0x30);
  pvVar1 = *(void **)&(this->PolygonWidthAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->HoleIndexAttribute).field_0x28,
             *(int *)&(this->HoleIndexAttribute).field_0x30);
  pvVar1 = *(void **)&(this->HoleIndexAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c5ff00

TSharedPtr<IPCGElement,1> * __thiscall
UPCGCreatePolygon2DSettings::CreateElement
          (UPCGCreatePolygon2DSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGCreatePolygonElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGCreatePolygonElement__6B_;
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

// GetPrivateStaticClass @ 149c77c70

UClass * __cdecl UPCGCreatePolygon2DSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCreatePolygon2DSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCreatePolygon2DSettings",
               &Z_Registration_Info_UClass_UPCGCreatePolygon2DSettings.InnerSingleton,
               StaticRegisterNativesUPCGCreatePolygon2DSettings,0x168,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCreatePolygon2DSettings>,
               InternalVTableHelperCtorCaller<UPCGCreatePolygon2DSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCreatePolygon2DSettings.InnerSingleton;
}

// InputPinProperties @ 149c7f800

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGCreatePolygon2DSettings::InputPinProperties
          (UPCGCreatePolygon2DSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,PointOrSpline);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  pFVar5->PinStatus = Required;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c80c90

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGCreatePolygon2DSettings::OutputPinProperties
          (UPCGCreatePolygon2DSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  PCGPolygon2DUtils::DefaultPolygonOutputPinProperties(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGCreatePolygon2DSettings @ 149c91ef0

void __cdecl UPCGCreatePolygon2DSettings::StaticRegisterNativesUPCGCreatePolygon2DSettings(void)

{
  return;
}

