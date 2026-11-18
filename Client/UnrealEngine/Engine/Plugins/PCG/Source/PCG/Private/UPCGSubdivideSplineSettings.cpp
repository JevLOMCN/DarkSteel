// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 1499042f0

UClass * __cdecl UPCGSubdivideSplineSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSubdivideSplineSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSubdivideSplineSettings",
               &Z_Registration_Info_UClass_UPCGSubdivideSplineSettings.InnerSingleton,
               StaticRegisterNativesUPCGSubdivideSplineSettings,0x250,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSubdivideSplineSettings>,
               InternalVTableHelperCtorCaller<UPCGSubdivideSplineSettings>,local_res8,
               UPCGSubdivisionBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSubdivideSplineSettings.InnerSingleton;
}

// UPCGSubdivideSplineSettings @ 1499c4f70

UPCGSubdivideSplineSettings * __thiscall
UPCGSubdivideSplineSettings::UPCGSubdivideSplineSettings
          (UPCGSubdivideSplineSettings *this,FVTableHelper *param_1)

{
  UPCGSubdivisionBaseSettings::UPCGSubdivisionBaseSettings
            ((UPCGSubdivisionBaseSettings *)this,param_1);
  this->bAcceptIncompleteSubdivision = false;
  this->bModuleHeightAsAttribute = false;
  this->_padding_ = (longlong)&___7UPCGSubdivideSplineSettings__6B_;
  this->ModuleHeight = 100.0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->ModuleHeightAttribute);
  this->bOutputModuleIndexAttribute = false;
  ::FName::FName(&this->ModuleIndexAttributeName,L"ModuleIndex");
  this->bOutputExtremityAttributes = false;
  ::FName::FName(&this->IsFirstAttributeName,L"IsFirst");
  ::FName::FName(&this->IsFinalAttributeName,L"IsFinal");
  this->ModulePlacementTolerance = 0.01;
  return this;
}

// UPCGSubdivideSplineSettings @ 1499c5020

UPCGSubdivideSplineSettings * __thiscall
UPCGSubdivideSplineSettings::UPCGSubdivideSplineSettings
          (UPCGSubdivideSplineSettings *this,FObjectInitializer *param_1)

{
  UPCGSubdivisionBaseSettings::UPCGSubdivisionBaseSettings
            ((UPCGSubdivisionBaseSettings *)this,param_1);
  this->bAcceptIncompleteSubdivision = false;
  this->bModuleHeightAsAttribute = false;
  this->_padding_ = (longlong)&___7UPCGSubdivideSplineSettings__6B_;
  this->ModuleHeight = 100.0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->ModuleHeightAttribute);
  this->bOutputModuleIndexAttribute = false;
  ::FName::FName(&this->ModuleIndexAttributeName,L"ModuleIndex");
  this->bOutputExtremityAttributes = false;
  ::FName::FName(&this->IsFirstAttributeName,L"IsFirst");
  ::FName::FName(&this->IsFinalAttributeName,L"IsFinal");
  this->ModulePlacementTolerance = 0.01;
  return this;
}

// ~UPCGSubdivideSplineSettings @ 1499c7040

void __thiscall
UPCGSubdivideSplineSettings::~UPCGSubdivideSplineSettings(UPCGSubdivideSplineSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGSubdivideSplineSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->ModuleHeightAttribute).field_0x28,
             *(int *)&(this->ModuleHeightAttribute).field_0x30);
  pvVar1 = *(void **)&(this->ModuleHeightAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSubdivisionBaseSettings::~UPCGSubdivisionBaseSettings((UPCGSubdivisionBaseSettings *)this);
  return;
}

// CreateElement @ 1499dc550

TSharedPtr<IPCGElement,1> * __thiscall
UPCGSubdivideSplineSettings::CreateElement
          (UPCGSubdivideSplineSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGSubdivideSplineElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGSubdivideSplineElement__6B_;
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

// GetPrivateStaticClass @ 1499fc350

UClass * __cdecl UPCGSubdivideSplineSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSubdivideSplineSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSubdivideSplineSettings",
               &Z_Registration_Info_UClass_UPCGSubdivideSplineSettings.InnerSingleton,
               StaticRegisterNativesUPCGSubdivideSplineSettings,0x250,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSubdivideSplineSettings>,
               InternalVTableHelperCtorCaller<UPCGSubdivideSplineSettings>,local_res8,
               UPCGSubdivisionBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSubdivideSplineSettings.InnerSingleton;
}

// InputPinProperties @ 149a000f0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSubdivideSplineSettings::InputPinProperties
          (UPCGSubdivideSplineSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,PolyLine);
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

// OutputPinProperties @ 149a03ec0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSubdivideSplineSettings::OutputPinProperties
          (UPCGSubdivideSplineSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGSubdivideSplineSettings @ 149a10190

void __cdecl UPCGSubdivideSplineSettings::StaticRegisterNativesUPCGSubdivideSplineSettings(void)

{
  return;
}

