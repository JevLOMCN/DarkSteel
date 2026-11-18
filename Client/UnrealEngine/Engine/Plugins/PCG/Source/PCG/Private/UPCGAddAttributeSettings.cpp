// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 12

// StaticClass @ 149b316b0

UClass * __cdecl UPCGAddAttributeSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAddAttributeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAddAttributeSettings",
               &Z_Registration_Info_UClass_UPCGAddAttributeSettings.InnerSingleton,
               StaticRegisterNativesUPCGAddAttributeSettings,800,0x10,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGAddAttributeSettings>,
               InternalVTableHelperCtorCaller<UPCGAddAttributeSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAddAttributeSettings.InnerSingleton;
}

// UPCGAddAttributeSettings @ 149b55590

UPCGAddAttributeSettings * __thiscall
UPCGAddAttributeSettings::UPCGAddAttributeSettings(UPCGAddAttributeSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar1);
  *(undefined ***)this = &___7UPCGAddAttributeSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource);
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector(&this->OutputTarget);
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct(&this->AttributeTypes);
  this->bCopyAllAttributes = false;
  this->bCopyAllDomains = false;
  *(undefined8 *)&this->MetadataDomainsMapping = 0;
  *(undefined8 *)&(this->MetadataDomainsMapping).field_0x8 = 0;
  *(undefined8 *)&(this->MetadataDomainsMapping).field_0x20 = 0;
  *(undefined4 *)&(this->MetadataDomainsMapping).field_0x28 = 0;
  *(undefined4 *)&(this->MetadataDomainsMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetadataDomainsMapping).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MetadataDomainsMapping).field_0x34 = 0;
  *(undefined8 *)&(this->MetadataDomainsMapping).field_0x40 = 0;
  *(undefined4 *)&(this->MetadataDomainsMapping).field_0x48 = 0;
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&this->OutputTarget,(FName)0x0,true);
  return this;
}

// UPCGAddAttributeSettings @ 149b55660

UPCGAddAttributeSettings * __thiscall
UPCGAddAttributeSettings::UPCGAddAttributeSettings
          (UPCGAddAttributeSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  *(undefined ***)this = &___7UPCGAddAttributeSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource);
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector(&this->OutputTarget);
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct(&this->AttributeTypes);
  this->bCopyAllAttributes = false;
  this->bCopyAllDomains = false;
  *(undefined8 *)&this->MetadataDomainsMapping = 0;
  *(undefined8 *)&(this->MetadataDomainsMapping).field_0x8 = 0;
  *(undefined8 *)&(this->MetadataDomainsMapping).field_0x20 = 0;
  *(undefined4 *)&(this->MetadataDomainsMapping).field_0x28 = 0;
  *(undefined4 *)&(this->MetadataDomainsMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetadataDomainsMapping).field_0x34 = 0;
  *(undefined4 *)&(this->MetadataDomainsMapping).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MetadataDomainsMapping).field_0x40 = 0;
  *(undefined4 *)&(this->MetadataDomainsMapping).field_0x48 = 0;
  return this;
}

// ~UPCGAddAttributeSettings @ 149b58a20

void __thiscall UPCGAddAttributeSettings::~UPCGAddAttributeSettings(UPCGAddAttributeSettings *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined ***)this = &___7UPCGAddAttributeSettings__6B_;
  *(undefined4 *)&(this->MetadataDomainsMapping).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MetadataDomainsMapping).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MetadataDomainsMapping);
  pFVar2 = (this->AttributeTypes).SoftObjectPathValue.SubPathString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar1 = *(void **)&(this->AttributeTypes).SoftClassPathValue.field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->AttributeTypes).StringValue.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->OutputTarget).field_0x28,*(int *)&(this->OutputTarget).field_0x30)
  ;
  pvVar1 = *(void **)&(this->OutputTarget).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->InputSource).field_0x28,*(int *)&(this->InputSource).field_0x30);
  pvVar1 = *(void **)&(this->InputSource).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149b69f10

TSharedPtr<IPCGElement,1> * __thiscall
UPCGAddAttributeSettings::CreateElement
          (UPCGAddAttributeSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGAddAttributeElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGAddAttributeElement__6B_;
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

// GetAdditionalTitleInformation @ 149b8c310

FString * __thiscall
UPCGAddAttributeSettings::GetAdditionalTitleInformation
          (UPCGAddAttributeSettings *this,FString *__return_storage_ptr__)

{
  int iVar1;
  UPCGNode *this_00;
  bool bVar2;
  UClass *pUVar3;
  FText *pFVar4;
  FString *pFVar5;
  FPCGAttributePropertySelector *this_01;
  TRefCountPtr<ITextData> TVar6;
  FText local_68;
  FText local_58;
  undefined1 local_48 [48];
  int local_18;
  
  if ((*(uint *)&this->field_0x8 >> 4 & 1) != 0) {
    ::FName::ToString(&PCGCreateAttributeConstants::NodeNameAddAttribute,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  this_00 = *(UPCGNode **)&this->field_0x20;
  if (this_00 != (UPCGNode *)0x0) {
    pUVar3 = Z_Construct_UClass_UPCGNode_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if (((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar3->_padding_)) &&
       (bVar2 = UPCGNode::IsInputPinConnected(this_00,&PCGCreateAttributeConstants::AttributesLabel)
       , bVar2)) {
      if (this->bCopyAllAttributes != false) {
        pFVar4 = FText::AsLocalizable_Advanced_LocText
                           (&local_58,L"PCGCreateAttributeElement",L"AllAttributes",
                            L"All Attributes");
        pFVar5 = FText::ToString(pFVar4);
        ::FString::FString(__return_storage_ptr__,pFVar5);
        if (local_58.TextData.Reference == (ITextData *)0x0) {
          return __return_storage_ptr__;
        }
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        return __return_storage_ptr__;
      }
      FPCGAttributePropertySelector::ToString
                ((FPCGAttributePropertySelector *)&this->InputSource,(FString *)&local_58,false);
      this_01 = (FPCGAttributePropertySelector *)
                FPCGAttributePropertyOutputSelector::CopyAndFixSource
                          (&this->OutputTarget,(FPCGAttributePropertyOutputSelector *)local_48,
                           &this->InputSource,(UPCGData *)0x0);
      FPCGAttributePropertySelector::ToString(this_01,(FString *)&local_68,false);
      DestructItems<FString,int>((FString *)local_48._40_8_,local_18);
      if ((FString *)local_48._40_8_ != (FString *)0x0) {
        FMemory::Free((void *)local_48._40_8_);
      }
      if (((int)local_68.Flags < 2) && ((int)local_58.Flags < 2)) {
        ::FName::ToString(&PCGCreateAttributeConstants::NodeNameAddAttribute,__return_storage_ptr__)
        ;
      }
      else {
        pFVar4 = &local_58;
        if (1 < (int)local_68.Flags) {
          pFVar4 = &local_68;
        }
        ::FString::FString(__return_storage_ptr__,(FString *)pFVar4);
      }
      TVar6.Reference = local_58.TextData.Reference;
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        FMemory::Free(local_68.TextData.Reference);
        TVar6.Reference = local_58.TextData.Reference;
      }
      goto LAB_149b8c514;
    }
  }
  FPCGMetadataTypesConstantStruct::ToString(&this->AttributeTypes,(FString *)&local_68);
  FPCGAttributePropertySelector::ToString
            ((FPCGAttributePropertySelector *)&this->OutputTarget,(FString *)&local_58,false);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s: %s");
  TVar6.Reference = local_68.TextData.Reference;
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    FMemory::Free(local_58.TextData.Reference);
    TVar6.Reference = local_68.TextData.Reference;
  }
LAB_149b8c514:
  if (TVar6.Reference != (ITextData *)0x0) {
    FMemory::Free(TVar6.Reference);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149b8fa80

UClass * __cdecl UPCGAddAttributeSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAddAttributeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAddAttributeSettings",
               &Z_Registration_Info_UClass_UPCGAddAttributeSettings.InnerSingleton,
               StaticRegisterNativesUPCGAddAttributeSettings,800,0x10,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGAddAttributeSettings>,
               InternalVTableHelperCtorCaller<UPCGAddAttributeSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAddAttributeSettings.InnerSingleton;
}

// HasDynamicPins @ 149b91a80

bool __thiscall UPCGAddAttributeSettings::HasDynamicPins(UPCGAddAttributeSettings *this)

{
  return true;
}

// InputPinProperties @ 149b91da0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGAddAttributeSettings::InputPinProperties
          (UPCGAddAttributeSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Param);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGCreateAttributeConstants::AttributesLabel,pFVar4,true,true,
             &PCGCreateAttributeConstants::AttributesTooltip);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b93b20

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGAddAttributeSettings::OutputPinProperties
          (UPCGAddAttributeSettings *this,
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

// PostLoad @ 149b958d0

void __thiscall UPCGAddAttributeSettings::PostLoad(UPCGAddAttributeSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGAddAttributeSettings @ 149b98310

void __cdecl UPCGAddAttributeSettings::StaticRegisterNativesUPCGAddAttributeSettings(void)

{
  return;
}

