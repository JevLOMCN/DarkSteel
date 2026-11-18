// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149c3b4a0

UClass * __cdecl UPCGSplitSplinesSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSplitSplinesSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSplitSplinesSettings",
               &Z_Registration_Info_UClass_UPCGSplitSplinesSettings.InnerSingleton,
               StaticRegisterNativesUPCGSplitSplinesSettings,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGSplitSplinesSettings>,
               InternalVTableHelperCtorCaller<UPCGSplitSplinesSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSplitSplinesSettings.InnerSingleton;
}

// UPCGSplitSplinesSettings @ 149c4bdb0

UPCGSplitSplinesSettings * __thiscall
UPCGSplitSplinesSettings::UPCGSplitSplinesSettings
          (UPCGSplitSplinesSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->Mode = ByAlpha;
  this->_padding_ = (longlong)&___7UPCGSplitSplinesSettings__6B_;
  this->bUseConstant = true;
  this->Constant = 0.5;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->Attribute);
  this->bShouldOutputOriginatingSplineIndex = true;
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
            (&this->OutputOriginatingSplineIndex);
  return this;
}

// UPCGSplitSplinesSettings @ 149c4be20

UPCGSplitSplinesSettings * __thiscall
UPCGSplitSplinesSettings::UPCGSplitSplinesSettings(UPCGSplitSplinesSettings *this)

{
  FName FVar1;
  FName FVar2;
  FObjectInitializer *pFVar3;
  FName *pFVar4;
  FName local_res8;
  FName local_res10;
  FPCGAttributePropertySelector local_58;
  
  pFVar3 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar3);
  this->Mode = ByAlpha;
  this->_padding_ = (longlong)&___7UPCGSplitSplinesSettings__6B_;
  this->bUseConstant = true;
  this->Constant = 0.5;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->Attribute);
  this->bShouldOutputOriginatingSplineIndex = true;
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
            (&this->OutputOriginatingSplineIndex);
  pFVar4 = ::FName::FName(&local_res8,L"Data");
  FVar1 = *pFVar4;
  pFVar4 = ::FName::FName(&local_res10,L"OriginatingSplineIndex");
  FVar2 = *pFVar4;
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
            ((FPCGAttributePropertyOutputSelector *)&local_58);
  FPCGAttributePropertySelector::SetDomainName(&local_58,FVar1,true);
  FPCGAttributePropertySelector::SetAttributeName(&local_58,FVar2,true);
  DestructItems<FString,int>
            ((FString *)local_58.ExtraNames.AllocatorInstance.Data,local_58.ExtraNames.ArrayNum);
  local_58.ExtraNames.ArrayNum = 0;
  if (local_58.ExtraNames.ArrayMax == 0) {
    local_58.ExtraNames.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,local_58.ExtraNames.ArrayMax,&local_58.ExtraNames.AllocatorInstance,0,
               &local_58.ExtraNames.ArrayMax);
    ConstructItems<FString,FString,int>(local_58.ExtraNames.AllocatorInstance.Data,(FString *)0x0,0)
    ;
  }
  FPCGAttributePropertySelector::operator=
            ((FPCGAttributePropertySelector *)&this->OutputOriginatingSplineIndex,&local_58);
  DestructItems<FString,int>
            ((FString *)local_58.ExtraNames.AllocatorInstance.Data,local_58.ExtraNames.ArrayNum);
  if (local_58.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.ExtraNames.AllocatorInstance.Data);
  }
  return this;
}

// ~UPCGSplitSplinesSettings @ 149c4dd20

void __thiscall UPCGSplitSplinesSettings::~UPCGSplitSplinesSettings(UPCGSplitSplinesSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGSplitSplinesSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->OutputOriginatingSplineIndex).field_0x28,
             *(int *)&(this->OutputOriginatingSplineIndex).field_0x30);
  pvVar1 = *(void **)&(this->OutputOriginatingSplineIndex).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->Attribute).field_0x28,*(int *)&(this->Attribute).field_0x30);
  pvVar1 = *(void **)&(this->Attribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c60740

TSharedPtr<IPCGElement,1> * __thiscall
UPCGSplitSplinesSettings::CreateElement
          (UPCGSplitSplinesSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGSplitSplineElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGSplitSplineElement__6B_;
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

// GetPrivateStaticClass @ 149c78930

UClass * __cdecl UPCGSplitSplinesSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSplitSplinesSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSplitSplinesSettings",
               &Z_Registration_Info_UClass_UPCGSplitSplinesSettings.InnerSingleton,
               StaticRegisterNativesUPCGSplitSplinesSettings,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGSplitSplinesSettings>,
               InternalVTableHelperCtorCaller<UPCGSplitSplinesSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSplitSplinesSettings.InnerSingleton;
}

// InputPinProperties @ 149c7ff20

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSplitSplinesSettings::InputPinProperties
          (UPCGSplitSplinesSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Spline);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  pFVar5->PinStatus = Required;
  if ((this->bUseConstant == false) && (this->Mode != ByPredicateOnControlPoints)) {
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
                        &PCGSplitSplineConstants::SplitInfoLabel,pFVar4,true,true,pFVar3);
    pFVar5->PinStatus = Required;
  }
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c815d0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSplitSplinesSettings::OutputPinProperties
          (UPCGSplitSplinesSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Spline);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGSplitSplinesSettings @ 149c92000

void __cdecl UPCGSplitSplinesSettings::StaticRegisterNativesUPCGSplitSplinesSettings(void)

{
  return;
}

