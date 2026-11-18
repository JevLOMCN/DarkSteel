// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149c3ae60

UClass * __cdecl UPCGGetSegmentSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetSegmentSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetSegmentSettings",
               &Z_Registration_Info_UClass_UPCGGetSegmentSettings.InnerSingleton,
               StaticRegisterNativesUPCGGetSegmentSettings,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGGetSegmentSettings>,
               InternalVTableHelperCtorCaller<UPCGGetSegmentSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetSegmentSettings.InnerSingleton;
}

// UPCGGetSegmentSettings @ 149c4b2e0

UPCGGetSegmentSettings * __thiscall
UPCGGetSegmentSettings::UPCGGetSegmentSettings(UPCGGetSegmentSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bUseInputSegmentData = false;
  this->bUseInputHoleData = false;
  this->_padding_ = (longlong)&___7UPCGGetSegmentSettings__6B_;
  this->bOutputSplineData = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->SegmentIndexAttribute);
  this->SegmentIndex = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->HoleIndexAttribute);
  this->HoleIndex = -1;
  return this;
}

// UPCGGetSegmentSettings @ 149c4b350

UPCGGetSegmentSettings * __thiscall
UPCGGetSegmentSettings::UPCGGetSegmentSettings
          (UPCGGetSegmentSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bUseInputSegmentData = false;
  this->bUseInputHoleData = false;
  this->_padding_ = (longlong)&___7UPCGGetSegmentSettings__6B_;
  this->bOutputSplineData = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->SegmentIndexAttribute);
  this->SegmentIndex = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->HoleIndexAttribute);
  this->HoleIndex = -1;
  return this;
}

// ~UPCGGetSegmentSettings @ 149c4d910

void __thiscall UPCGGetSegmentSettings::~UPCGGetSegmentSettings(UPCGGetSegmentSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGGetSegmentSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->HoleIndexAttribute).field_0x28,
             *(int *)&(this->HoleIndexAttribute).field_0x30);
  pvVar1 = *(void **)&(this->HoleIndexAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->SegmentIndexAttribute).field_0x28,
             *(int *)&(this->SegmentIndexAttribute).field_0x30);
  pvVar1 = *(void **)&(this->SegmentIndexAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c60140

TSharedPtr<IPCGElement,1> * __thiscall
UPCGGetSegmentSettings::CreateElement
          (UPCGGetSegmentSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGGetSegmentElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGGetSegmentElement__6B_;
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

// GetPrivateStaticClass @ 149c78030

UClass * __cdecl UPCGGetSegmentSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetSegmentSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetSegmentSettings",
               &Z_Registration_Info_UClass_UPCGGetSegmentSettings.InnerSingleton,
               StaticRegisterNativesUPCGGetSegmentSettings,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGGetSegmentSettings>,
               InternalVTableHelperCtorCaller<UPCGGetSegmentSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetSegmentSettings.InnerSingleton;
}

// InputPinProperties @ 149c7f8c0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGetSegmentSettings::InputPinProperties
          (UPCGGetSegmentSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGPinProperties *pFVar5;
  FName local_res8;
  FPCGDataTypeIdentifier local_38;
  
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_38,Polygon2D|PointOrSpline);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  pFVar5->PinStatus = Required;
  if (this->bUseInputSegmentData != false) {
    iVar2 = __return_storage_ptr__->ArrayNum;
    if (iVar2 == __return_storage_ptr__->ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar3 = FText::GetEmpty();
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_38,Param);
    FLazyName::Resolve(&PCGGetSegment::Constants::SegmentIndexLabel);
    pFVar5 = FPCGPinProperties::FPCGPinProperties
                       ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),&local_res8,pFVar4,
                        true,true,pFVar3);
    pFVar5->PinStatus = Required;
  }
  if (this->bUseInputHoleData != false) {
    iVar2 = __return_storage_ptr__->ArrayNum;
    if (iVar2 == __return_storage_ptr__->ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar3 = FText::GetEmpty();
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_38,Param);
    FLazyName::Resolve(&PCGGetSegment::Constants::HoleIndexLabel);
    pFVar5 = FPCGPinProperties::FPCGPinProperties
                       ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),&local_res8,pFVar4,
                        true,true,pFVar3);
    pFVar5->PinStatus = Required;
  }
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c80f60

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGetSegmentSettings::OutputPinProperties
          (UPCGGetSegmentSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGPinProperties *pFVar5;
  EPCGDataType EVar6;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  EVar6 = Point;
  if (this->bOutputSplineData != false) {
    EVar6 = Spline;
  }
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar3 = FText::GetEmpty();
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,EVar6);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  pFVar5->PinStatus = Required;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGGetSegmentSettings @ 149c91f40

void __cdecl UPCGGetSegmentSettings::StaticRegisterNativesUPCGGetSegmentSettings(void)

{
  return;
}

