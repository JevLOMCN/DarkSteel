// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149a17d40

UClass * __cdecl UPCGApplyOnActorSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGApplyOnActorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGApplyOnActorSettings",
               &Z_Registration_Info_UClass_UPCGApplyOnActorSettings.InnerSingleton,
               StaticRegisterNativesUPCGApplyOnActorSettings,0x130,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGApplyOnActorSettings>,
               InternalVTableHelperCtorCaller<UPCGApplyOnActorSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGApplyOnActorSettings.InnerSingleton;
}

// UPCGApplyOnActorSettings @ 149ad04a0

UPCGApplyOnActorSettings * __thiscall
UPCGApplyOnActorSettings::UPCGApplyOnActorSettings
          (UPCGApplyOnActorSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGApplyOnActorSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->ObjectReferenceAttribute);
  (this->PropertyOverrideDescriptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyOverrideDescriptions).ArrayNum = 0;
  (this->PropertyOverrideDescriptions).ArrayMax = 0;
  (this->PostProcessFunctionNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PostProcessFunctionNames).ArrayNum = 0;
  (this->PostProcessFunctionNames).ArrayMax = 0;
  this->bSilenceErrorOnEmptyObjectPath = false;
  this->bSynchronousLoad = false;
  return this;
}

// UPCGApplyOnActorSettings @ 149ad0500

UPCGApplyOnActorSettings * __thiscall
UPCGApplyOnActorSettings::UPCGApplyOnActorSettings
          (UPCGApplyOnActorSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGApplyOnActorSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->ObjectReferenceAttribute);
  (this->PropertyOverrideDescriptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyOverrideDescriptions).ArrayNum = 0;
  (this->PropertyOverrideDescriptions).ArrayMax = 0;
  (this->PostProcessFunctionNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PostProcessFunctionNames).ArrayNum = 0;
  (this->PostProcessFunctionNames).ArrayMax = 0;
  this->bSilenceErrorOnEmptyObjectPath = false;
  this->bSynchronousLoad = false;
  return this;
}

// ~UPCGApplyOnActorSettings @ 149ad2f30

void __thiscall UPCGApplyOnActorSettings::~UPCGApplyOnActorSettings(UPCGApplyOnActorSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGApplyOnActorSettings__6B_;
  pFVar1 = (this->PostProcessFunctionNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPCGObjectPropertyOverrideDescription,int>
            ((FPCGObjectPropertyOverrideDescription *)
             (this->PropertyOverrideDescriptions).AllocatorInstance.Data,
             (this->PropertyOverrideDescriptions).ArrayNum);
  pFVar1 = (this->PropertyOverrideDescriptions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->ObjectReferenceAttribute).field_0x28,
             *(int *)&(this->ObjectReferenceAttribute).field_0x30);
  pvVar2 = *(void **)&(this->ObjectReferenceAttribute).field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149afbcf0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGApplyOnActorSettings::CreateElement
          (UPCGApplyOnActorSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGApplyOnObjectElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGApplyOnObjectElement__6B_;
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

// GetPrivateStaticClass @ 149b17130

UClass * __cdecl UPCGApplyOnActorSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGApplyOnActorSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGApplyOnActorSettings",
               &Z_Registration_Info_UClass_UPCGApplyOnActorSettings.InnerSingleton,
               StaticRegisterNativesUPCGApplyOnActorSettings,0x130,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGApplyOnActorSettings>,
               InternalVTableHelperCtorCaller<UPCGApplyOnActorSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGApplyOnActorSettings.InnerSingleton;
}

// HasDynamicPins @ 149b1a6d0

bool __thiscall UPCGApplyOnActorSettings::HasDynamicPins(UPCGApplyOnActorSettings *this)

{
  return true;
}

// InputPinProperties @ 149b1bbf0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGApplyOnActorSettings::InputPinProperties
          (UPCGApplyOnActorSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  iVar2 = __return_storage_ptr__->ArrayNum;
  if (iVar2 == __return_storage_ptr__->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGApplyOnActorConstants::ObjectPropertyOverridesLabel,pFVar4,true,true,
             &PCGApplyOnActorConstants::ObjectPropertyOverridesTooltip);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b1fb10

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGApplyOnActorSettings::OutputPinProperties
          (UPCGApplyOnActorSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGApplyOnActorSettings @ 149b2ce60

void __cdecl UPCGApplyOnActorSettings::StaticRegisterNativesUPCGApplyOnActorSettings(void)

{
  return;
}

