// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149901470

UClass * __cdecl UPCGSubdivideSegmentSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSubdivideSegmentSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSubdivideSegmentSettings",
               &Z_Registration_Info_UClass_UPCGSubdivideSegmentSettings.InnerSingleton,
               StaticRegisterNativesUPCGSubdivideSegmentSettings,0x250,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSubdivideSegmentSettings>,
               InternalVTableHelperCtorCaller<UPCGSubdivideSegmentSettings>,local_res8,
               UPCGSubdivisionBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSubdivideSegmentSettings.InnerSingleton;
}

// UPCGSubdivideSegmentSettings @ 1499c4e10

UPCGSubdivideSegmentSettings * __thiscall
UPCGSubdivideSegmentSettings::UPCGSubdivideSegmentSettings
          (UPCGSubdivideSegmentSettings *this,FVTableHelper *param_1)

{
  UPCGSubdivisionBaseSettings::UPCGSubdivisionBaseSettings
            ((UPCGSubdivisionBaseSettings *)this,param_1);
  this->SubdivisionAxis = X;
  this->_padding_ = (longlong)&___7UPCGSubdivideSegmentSettings__6B_;
  this->bFlipAxisAsAttribute = false;
  this->bShouldFlipAxis = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->FlipAxisAttribute);
  this->bAcceptIncompleteSubdivision = false;
  this->bOutputModuleIndexAttribute = false;
  ::FName::FName(&this->ModuleIndexAttributeName,L"ModuleIndex");
  this->bOutputExtremityAttributes = false;
  ::FName::FName(&this->IsFirstAttributeName,L"IsFirst");
  ::FName::FName(&this->IsFinalAttributeName,L"IsFinal");
  this->bOutputExtremityNeighborIndexAttribute = false;
  ::FName::FName(&this->ExtremityNeighborIndexAttributeName,L"ExtremityNeighborIndex");
  return this;
}

// UPCGSubdivideSegmentSettings @ 1499c4ec0

UPCGSubdivideSegmentSettings * __thiscall
UPCGSubdivideSegmentSettings::UPCGSubdivideSegmentSettings
          (UPCGSubdivideSegmentSettings *this,FObjectInitializer *param_1)

{
  UPCGSubdivisionBaseSettings::UPCGSubdivisionBaseSettings
            ((UPCGSubdivisionBaseSettings *)this,param_1);
  this->SubdivisionAxis = X;
  this->_padding_ = (longlong)&___7UPCGSubdivideSegmentSettings__6B_;
  this->bFlipAxisAsAttribute = false;
  this->bShouldFlipAxis = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->FlipAxisAttribute);
  this->bAcceptIncompleteSubdivision = false;
  this->bOutputModuleIndexAttribute = false;
  ::FName::FName(&this->ModuleIndexAttributeName,L"ModuleIndex");
  this->bOutputExtremityAttributes = false;
  ::FName::FName(&this->IsFirstAttributeName,L"IsFirst");
  ::FName::FName(&this->IsFinalAttributeName,L"IsFinal");
  this->bOutputExtremityNeighborIndexAttribute = false;
  ::FName::FName(&this->ExtremityNeighborIndexAttributeName,L"ExtremityNeighborIndex");
  return this;
}

// ~UPCGSubdivideSegmentSettings @ 1499c6ff0

void __thiscall
UPCGSubdivideSegmentSettings::~UPCGSubdivideSegmentSettings(UPCGSubdivideSegmentSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGSubdivideSegmentSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->FlipAxisAttribute).field_0x28,
             *(int *)&(this->FlipAxisAttribute).field_0x30);
  pvVar1 = *(void **)&(this->FlipAxisAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSubdivisionBaseSettings::~UPCGSubdivisionBaseSettings((UPCGSubdivisionBaseSettings *)this);
  return;
}

// CreateElement @ 1499dc490

TSharedPtr<IPCGElement,1> * __thiscall
UPCGSubdivideSegmentSettings::CreateElement
          (UPCGSubdivideSegmentSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGSegmentSubdivisionElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGSegmentSubdivisionElement__6B_;
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

// GetPrivateStaticClass @ 1499fc290

UClass * __cdecl UPCGSubdivideSegmentSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSubdivideSegmentSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSubdivideSegmentSettings",
               &Z_Registration_Info_UClass_UPCGSubdivideSegmentSettings.InnerSingleton,
               StaticRegisterNativesUPCGSubdivideSegmentSettings,0x250,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSubdivideSegmentSettings>,
               InternalVTableHelperCtorCaller<UPCGSubdivideSegmentSettings>,local_res8,
               UPCGSubdivisionBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSubdivideSegmentSettings.InnerSingleton;
}

// InputPinProperties @ 1499fffd0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSubdivideSegmentSettings::InputPinProperties
          (UPCGSubdivideSegmentSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  pFVar5->PinStatus = Required;
  if ((char)this->_padding_ != '\0') {
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
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Param);
    pFVar5 = FPCGPinProperties::FPCGPinProperties
                       ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                        &PCGSubdivisionBase::Constants::ModulesInfoPinLabel,pFVar4,true,true,pFVar3)
    ;
    pFVar5->PinStatus = Required;
  }
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149a03ea0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSubdivideSegmentSettings::OutputPinProperties
          (UPCGSubdivideSegmentSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGSubdivideSegmentSettings @ 149a10180

void __cdecl UPCGSubdivideSegmentSettings::StaticRegisterNativesUPCGSubdivideSegmentSettings(void)

{
  return;
}

