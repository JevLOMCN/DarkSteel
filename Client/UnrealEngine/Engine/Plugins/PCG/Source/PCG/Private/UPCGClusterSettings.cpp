// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149a162d0

UClass * __cdecl UPCGClusterSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGClusterSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGClusterSettings",
               &Z_Registration_Info_UClass_UPCGClusterSettings.InnerSingleton,
               StaticRegisterNativesUPCGClusterSettings,0x168,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGClusterSettings>,
               InternalVTableHelperCtorCaller<UPCGClusterSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGClusterSettings.InnerSingleton;
}

// UPCGClusterSettings @ 149ad16c0

UPCGClusterSettings * __thiscall
UPCGClusterSettings::UPCGClusterSettings(UPCGClusterSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->NumClusters = 3;
  this->Algorithm = KMeans;
  this->_padding_ = (longlong)&___7UPCGClusterSettings__6B_;
  *(undefined8 *)&(this->ClusterAttribute).field_0x8 = 0;
  *(undefined8 *)&(this->ClusterAttribute).field_0x10 = 0;
  *(undefined8 *)&(this->ClusterAttribute).field_0x18 = 0;
  *(undefined4 *)&(this->ClusterAttribute).field_0x20 = 0;
  *(undefined8 *)&(this->ClusterAttribute).field_0x28 = 0;
  *(undefined8 *)&(this->ClusterAttribute).field_0x30 = 0;
  (this->ClusterAttribute).field_0x38 = 0;
  *(undefined ***)&this->ClusterAttribute = &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
  this->Tolerance = 0.0001;
  this->MaxIterations = 100;
  this->bOutputFinalCentroids = false;
  this->bOutputFinalCentroidElementCount = false;
  *(undefined8 *)&(this->FinalCentroidElementCountAttribute).field_0x8 = 0;
  *(undefined8 *)&(this->FinalCentroidElementCountAttribute).field_0x10 = 0;
  *(undefined8 *)&(this->FinalCentroidElementCountAttribute).field_0x18 = 0;
  *(undefined4 *)&(this->FinalCentroidElementCountAttribute).field_0x20 = 0;
  *(undefined8 *)&(this->FinalCentroidElementCountAttribute).field_0x28 = 0;
  *(undefined8 *)&(this->FinalCentroidElementCountAttribute).field_0x30 = 0;
  (this->FinalCentroidElementCountAttribute).field_0x38 = 0;
  *(undefined ***)&this->FinalCentroidElementCountAttribute =
       &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
  return this;
}

// UPCGClusterSettings @ 149ad1790

UPCGClusterSettings * __thiscall
UPCGClusterSettings::UPCGClusterSettings(UPCGClusterSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->NumClusters = 3;
  this->Algorithm = KMeans;
  this->_padding_ = (longlong)&___7UPCGClusterSettings__6B_;
  *(undefined8 *)&(this->ClusterAttribute).field_0x8 = 0;
  *(undefined8 *)&(this->ClusterAttribute).field_0x10 = 0;
  *(undefined8 *)&(this->ClusterAttribute).field_0x18 = 0;
  *(undefined4 *)&(this->ClusterAttribute).field_0x20 = 0;
  *(undefined8 *)&(this->ClusterAttribute).field_0x28 = 0;
  *(undefined8 *)&(this->ClusterAttribute).field_0x30 = 0;
  (this->ClusterAttribute).field_0x38 = 0;
  *(undefined ***)&(this->ClusterAttribute).field_0x0 =
       &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
  this->bOutputFinalCentroids = false;
  this->bOutputFinalCentroidElementCount = false;
  this->MaxIterations = 100;
  this->Tolerance = 0.0001;
  *(undefined8 *)&(this->FinalCentroidElementCountAttribute).field_0x8 = 0;
  *(undefined8 *)&(this->FinalCentroidElementCountAttribute).field_0x10 = 0;
  *(undefined8 *)&(this->FinalCentroidElementCountAttribute).field_0x18 = 0;
  *(undefined4 *)&(this->FinalCentroidElementCountAttribute).field_0x20 = 0;
  *(undefined8 *)&(this->FinalCentroidElementCountAttribute).field_0x28 = 0;
  *(undefined8 *)&(this->FinalCentroidElementCountAttribute).field_0x30 = 0;
  (this->FinalCentroidElementCountAttribute).field_0x38 = 0;
  *(undefined ***)&(this->FinalCentroidElementCountAttribute).field_0x0 =
       &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&this->ClusterAttribute,
             PCGClusterElement::Constants::ClusterIDAttributeDefaultName,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&this->FinalCentroidElementCountAttribute,
             PCGClusterElement::Constants::FinalCentroidElementCountAttributeDefaultName,true);
  return this;
}

// ~UPCGClusterSettings @ 149ad35e0

void __thiscall UPCGClusterSettings::~UPCGClusterSettings(UPCGClusterSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGClusterSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->FinalCentroidElementCountAttribute).field_0x28,
             *(int *)&(this->FinalCentroidElementCountAttribute).field_0x30);
  pvVar1 = *(void **)&(this->FinalCentroidElementCountAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->ClusterAttribute).field_0x28,
             *(int *)&(this->ClusterAttribute).field_0x30);
  pvVar1 = *(void **)&(this->ClusterAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149afc8f0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGClusterSettings::CreateElement
          (UPCGClusterSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         &___7__TIntrusiveReferenceController_VFPCGClusterElement___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FPCGClusterElement__6B_;
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

// GetPrivateStaticClass @ 149b17d30

UClass * __cdecl UPCGClusterSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGClusterSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGClusterSettings",
               &Z_Registration_Info_UClass_UPCGClusterSettings.InnerSingleton,
               StaticRegisterNativesUPCGClusterSettings,0x168,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGClusterSettings>,
               InternalVTableHelperCtorCaller<UPCGClusterSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGClusterSettings.InnerSingleton;
}

// InputPinProperties @ 149b1c5c0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGClusterSettings::InputPinProperties
          (UPCGClusterSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGClusterElement::Constants::InputCentroidsLabel,pFVar4,false,false,pFVar3);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b20330

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGClusterSettings::OutputPinProperties
          (UPCGClusterSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  if (this->bOutputFinalCentroids != false) {
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
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
    FPCGPinProperties::FPCGPinProperties
              ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
               &PCGClusterElement::Constants::FinalCentroidsLabel,pFVar4,true,true,pFVar3);
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGClusterSettings @ 149b2cf60

void __cdecl UPCGClusterSettings::StaticRegisterNativesUPCGClusterSettings(void)

{
  return;
}

// UseSeed @ 149b2d930

bool __thiscall UPCGClusterSettings::UseSeed(UPCGClusterSettings *this)

{
  return true;
}

