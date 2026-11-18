// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149a16d90

UClass * __cdecl UPCGCollapsePointsSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCollapsePointsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCollapsePointsSettings",
               &Z_Registration_Info_UClass_UPCGCollapsePointsSettings.InnerSingleton,
               StaticRegisterNativesUPCGCollapsePointsSettings,0x170,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCollapsePointsSettings>,
               InternalVTableHelperCtorCaller<UPCGCollapsePointsSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCollapsePointsSettings.InnerSingleton;
}

// UPCGCollapsePointsSettings @ 149ad1870

UPCGCollapsePointsSettings * __thiscall
UPCGCollapsePointsSettings::UPCGCollapsePointsSettings
          (UPCGCollapsePointsSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->Mode = PairwiseClosest;
  this->ComparisonMode = Position;
  this->_padding_ = (longlong)&___7UPCGCollapsePointsSettings__6B_;
  this->VisitOrder = Ordered;
  this->DistanceThreshold = 100.0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->VisitOrderAttribute)
  ;
  this->bUseMergeWeightAttribute = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->MergeWeightAttribute);
  (this->AttributesToMerge).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttributesToMerge).ArrayNum = 0;
  (this->AttributesToMerge).ArrayMax = 0;
  return this;
}

// UPCGCollapsePointsSettings @ 149ad18f0

UPCGCollapsePointsSettings * __thiscall
UPCGCollapsePointsSettings::UPCGCollapsePointsSettings(UPCGCollapsePointsSettings *this)

{
  int *piVar1;
  TArray<FPCGAttributePropertyOutputNoSourceSelector,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FObjectInitializer *pFVar4;
  FPCGAttributePropertySelector *this_00;
  
  pFVar4 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar4);
  this->Mode = PairwiseClosest;
  this->ComparisonMode = Position;
  this->_padding_ = (longlong)&___7UPCGCollapsePointsSettings__6B_;
  this->VisitOrder = Ordered;
  this->DistanceThreshold = 100.0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->VisitOrderAttribute)
  ;
  this->bUseMergeWeightAttribute = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->MergeWeightAttribute);
  pTVar2 = &this->AttributesToMerge;
  piVar1 = &(this->AttributesToMerge).ArrayMax;
  *piVar1 = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AttributesToMerge).ArrayNum = 0;
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x840,&pTVar2->AllocatorInstance,piVar1);
  (this->AttributesToMerge).ArrayNum = iVar3 + 1;
  this_00 = (FPCGAttributePropertySelector *)
            ((pTVar2->AllocatorInstance).Data + (longlong)iVar3 * 0x40);
  *(undefined8 *)&(this_00->PropertyName).Number = 0;
  *(undefined4 *)&this_00->field_0x39 = 0;
  *(undefined2 *)&this_00->field_0x3d = 0;
  this_00->field_0x3f = 0;
  this_00->Selection = Attribute;
  (this_00->DomainName).ComparisonIndex = 0;
  *(undefined8 *)&(this_00->DomainName).Number = 0;
  *(undefined8 *)&(this_00->AttributeName).Number = 0;
  (this_00->ExtraNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->ExtraNames).ArrayNum = 0;
  (this_00->ExtraNames).ArrayMax = 0;
  this_00->ExtraProperty = Index;
  this_00->_padding_ = (longlong)&___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
  FPCGAttributePropertySelector::SetPointProperty(this_00,Position,true);
  return this;
}

// ~UPCGCollapsePointsSettings @ 149ad3650

void __thiscall
UPCGCollapsePointsSettings::~UPCGCollapsePointsSettings(UPCGCollapsePointsSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGCollapsePointsSettings__6B_;
  DestructItems<FPCGAttributePropertyOutputNoSourceSelector,int>
            ((FPCGAttributePropertyOutputNoSourceSelector *)
             (this->AttributesToMerge).AllocatorInstance.Data,(this->AttributesToMerge).ArrayNum);
  pFVar1 = (this->AttributesToMerge).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->MergeWeightAttribute).field_0x28,
             *(int *)&(this->MergeWeightAttribute).field_0x30);
  pvVar2 = *(void **)&(this->MergeWeightAttribute).field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->VisitOrderAttribute).field_0x28,
             *(int *)&(this->VisitOrderAttribute).field_0x30);
  pvVar2 = *(void **)&(this->VisitOrderAttribute).field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149afc9b0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGCollapsePointsSettings::CreateElement
          (UPCGCollapsePointsSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGCollapsePointsElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGCollapsePointsElement__6B_;
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

// GetPrivateStaticClass @ 149b17df0

UClass * __cdecl UPCGCollapsePointsSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCollapsePointsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCollapsePointsSettings",
               &Z_Registration_Info_UClass_UPCGCollapsePointsSettings.InnerSingleton,
               StaticRegisterNativesUPCGCollapsePointsSettings,0x170,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCollapsePointsSettings>,
               InternalVTableHelperCtorCaller<UPCGCollapsePointsSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCollapsePointsSettings.InnerSingleton;
}

// InputPinProperties @ 149b1c6c0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGCollapsePointsSettings::InputPinProperties
          (UPCGCollapsePointsSettings *this,
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
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b20450

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGCollapsePointsSettings::OutputPinProperties
          (UPCGCollapsePointsSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGCollapsePointsSettings @ 149b2cf70

void __cdecl UPCGCollapsePointsSettings::StaticRegisterNativesUPCGCollapsePointsSettings(void)

{
  return;
}

// UseSeed @ 149b2d940

bool __thiscall UPCGCollapsePointsSettings::UseSeed(UPCGCollapsePointsSettings *this)

{
  return this->VisitOrder == Random;
}

