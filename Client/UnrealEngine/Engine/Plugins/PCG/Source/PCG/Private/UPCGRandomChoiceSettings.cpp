// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 11

// StaticClass @ 149b9f2b0

UClass * __cdecl UPCGRandomChoiceSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGRandomChoiceSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGRandomChoiceSettings",
               &Z_Registration_Info_UClass_UPCGRandomChoiceSettings.InnerSingleton,
               StaticRegisterNativesUPCGRandomChoiceSettings,0x120,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGRandomChoiceSettings>,
               InternalVTableHelperCtorCaller<UPCGRandomChoiceSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGRandomChoiceSettings.InnerSingleton;
}

// UPCGRandomChoiceSettings @ 149be7e80

UPCGRandomChoiceSettings * __thiscall
UPCGRandomChoiceSettings::UPCGRandomChoiceSettings
          (UPCGRandomChoiceSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bFixedMode = true;
  this->_padding_ = (longlong)&___7UPCGRandomChoiceSettings__6B_;
  this->FixedNumber = 1;
  this->Ratio = 0.5;
  this->bOutputDiscardedEntries = true;
  this->bHasCustomSeedSource = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->CustomSeedSource);
  this->bUseFirstAttributeOnly = true;
  return this;
}

// UPCGRandomChoiceSettings @ 149be7ee0

UPCGRandomChoiceSettings * __thiscall
UPCGRandomChoiceSettings::UPCGRandomChoiceSettings
          (UPCGRandomChoiceSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bFixedMode = true;
  this->_padding_ = (longlong)&___7UPCGRandomChoiceSettings__6B_;
  this->FixedNumber = 1;
  this->Ratio = 0.5;
  this->bOutputDiscardedEntries = true;
  this->bHasCustomSeedSource = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->CustomSeedSource);
  this->bUseFirstAttributeOnly = true;
  return this;
}

// ~UPCGRandomChoiceSettings @ 149bea0c0

void __thiscall UPCGRandomChoiceSettings::~UPCGRandomChoiceSettings(UPCGRandomChoiceSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGRandomChoiceSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->CustomSeedSource).field_0x28,
             *(int *)&(this->CustomSeedSource).field_0x30);
  pvVar1 = *(void **)&(this->CustomSeedSource).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c05e60

TSharedPtr<IPCGElement,1> * __thiscall
UPCGRandomChoiceSettings::CreateElement
          (UPCGRandomChoiceSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGRandomChoiceElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGRandomChoiceElement__6B_;
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

// GetPrivateStaticClass @ 149c26750

UClass * __cdecl UPCGRandomChoiceSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGRandomChoiceSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGRandomChoiceSettings",
               &Z_Registration_Info_UClass_UPCGRandomChoiceSettings.InnerSingleton,
               StaticRegisterNativesUPCGRandomChoiceSettings,0x120,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGRandomChoiceSettings>,
               InternalVTableHelperCtorCaller<UPCGRandomChoiceSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGRandomChoiceSettings.InnerSingleton;
}

// HasDynamicPins @ 149c273d0

bool __thiscall UPCGRandomChoiceSettings::HasDynamicPins(UPCGRandomChoiceSettings *this)

{
  return true;
}

// InputPinProperties @ 149c2cce0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGRandomChoiceSettings::InputPinProperties
          (UPCGRandomChoiceSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,PointOrParam);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  pFVar5->PinStatus = Required;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c2ec20

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGRandomChoiceSettings::OutputPinProperties
          (UPCGRandomChoiceSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,PointOrParam);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGRandomChoiceConstants::ChosenEntriesLabel,pFVar4,true,true,pFVar3);
  if (this->bOutputDiscardedEntries != false) {
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
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,PointOrParam);
    FPCGPinProperties::FPCGPinProperties
              ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
               &PCGRandomChoiceConstants::DiscardedEntriesLabel,pFVar4,true,true,pFVar3);
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGRandomChoiceSettings @ 149c355d0

void __cdecl UPCGRandomChoiceSettings::StaticRegisterNativesUPCGRandomChoiceSettings(void)

{
  return;
}

// UseSeed @ 149c36390

bool __thiscall UPCGRandomChoiceSettings::UseSeed(UPCGRandomChoiceSettings *this)

{
  return true;
}

