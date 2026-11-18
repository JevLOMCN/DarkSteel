// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149b31d30

UClass * __cdecl UPCGGetActorDataLayersSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetActorDataLayersSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetActorDataLayersSettings",
               &Z_Registration_Info_UClass_UPCGGetActorDataLayersSettings.InnerSingleton,
               StaticRegisterNativesUPCGGetActorDataLayersSettings,0x148,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGetActorDataLayersSettings>,
               InternalVTableHelperCtorCaller<UPCGGetActorDataLayersSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetActorDataLayersSettings.InnerSingleton;
}

// UPCGGetActorDataLayersSettings @ 149b579d0

UPCGGetActorDataLayersSettings * __thiscall
UPCGGetActorDataLayersSettings::UPCGGetActorDataLayersSettings
          (UPCGGetActorDataLayersSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGGetActorDataLayersSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->ActorReferenceAttribute);
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
            (&this->DataLayerReferenceAttribute);
  return this;
}

// UPCGGetActorDataLayersSettings @ 149b57a10

UPCGGetActorDataLayersSettings * __thiscall
UPCGGetActorDataLayersSettings::UPCGGetActorDataLayersSettings(UPCGGetActorDataLayersSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar1);
  this->_padding_ = (longlong)&___7UPCGGetActorDataLayersSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->ActorReferenceAttribute);
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
            (&this->DataLayerReferenceAttribute);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&this->ActorReferenceAttribute,
             PCGPointDataConstants::ActorReferenceAttribute,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&this->DataLayerReferenceAttribute,
             PCGDataLayerHelpers::Constants::DataLayerReferenceAttribute,true);
  return this;
}

// ~UPCGGetActorDataLayersSettings @ 149b59470

void __thiscall
UPCGGetActorDataLayersSettings::~UPCGGetActorDataLayersSettings
          (UPCGGetActorDataLayersSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGGetActorDataLayersSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->DataLayerReferenceAttribute).field_0x28,
             *(int *)&(this->DataLayerReferenceAttribute).field_0x30);
  pvVar1 = *(void **)&(this->DataLayerReferenceAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->ActorReferenceAttribute).field_0x28,
             *(int *)&(this->ActorReferenceAttribute).field_0x30);
  pvVar1 = *(void **)&(this->ActorReferenceAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149b6b950

TSharedPtr<IPCGElement,1> * __thiscall
UPCGGetActorDataLayersSettings::CreateElement
          (UPCGGetActorDataLayersSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGGetActorDataLayersElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGGetActorDataLayersElement__6B_;
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

// GetAdditionalTitleInformation @ 149b8dba0

FString * __thiscall
UPCGGetActorDataLayersSettings::GetAdditionalTitleInformation
          (UPCGGetActorDataLayersSettings *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  FText local_38;
  FText local_28;
  FString local_18;
  
  pFVar1 = FPCGAttributePropertySelector::ToString
                     ((FPCGAttributePropertySelector *)&this->DataLayerReferenceAttribute,&local_18,
                      false);
  FText::FromString(&local_28,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FText::ToString(&local_28);
  pFVar1 = FPCGAttributePropertySelector::ToString
                     ((FPCGAttributePropertySelector *)&this->ActorReferenceAttribute,&local_18,
                      false);
  FText::FromString(&local_38,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FText::ToString(&local_38);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s -> %s");
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149b91700

UClass * __cdecl UPCGGetActorDataLayersSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetActorDataLayersSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetActorDataLayersSettings",
               &Z_Registration_Info_UClass_UPCGGetActorDataLayersSettings.InnerSingleton,
               StaticRegisterNativesUPCGGetActorDataLayersSettings,0x148,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGetActorDataLayersSettings>,
               InternalVTableHelperCtorCaller<UPCGGetActorDataLayersSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetActorDataLayersSettings.InnerSingleton;
}

// InputPinProperties @ 149b92f80

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGetActorDataLayersSettings::InputPinProperties
          (UPCGGetActorDataLayersSettings *this,
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

// OutputPinProperties @ 149b94eb0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGetActorDataLayersSettings::OutputPinProperties
          (UPCGGetActorDataLayersSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Param);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGGetActorDataLayersSettings @ 149b985d0

void __cdecl
UPCGGetActorDataLayersSettings::StaticRegisterNativesUPCGGetActorDataLayersSettings(void)

{
  return;
}

