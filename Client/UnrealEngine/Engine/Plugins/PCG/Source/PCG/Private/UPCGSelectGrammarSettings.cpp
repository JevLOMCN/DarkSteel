// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149903730

UClass * __cdecl UPCGSelectGrammarSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSelectGrammarSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSelectGrammarSettings",
               &Z_Registration_Info_UClass_UPCGSelectGrammarSettings.InnerSingleton,
               StaticRegisterNativesUPCGSelectGrammarSettings,0x1e0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGSelectGrammarSettings>,
               InternalVTableHelperCtorCaller<UPCGSelectGrammarSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSelectGrammarSettings.InnerSingleton;
}

// UPCGSelectGrammarSettings @ 1499c4b90

UPCGSelectGrammarSettings * __thiscall
UPCGSelectGrammarSettings::UPCGSelectGrammarSettings
          (UPCGSelectGrammarSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bKeyAsAttribute = true;
  this->_padding_ = (longlong)&___7UPCGSelectGrammarSettings__6B_;
  (this->Key).ComparisonIndex = 0;
  (this->Key).Number = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->KeyAttribute);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->ComparedValueAttribute);
  this->bCriteriaAsInput = false;
  (this->Criteria).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Criteria).ArrayNum = 0;
  (this->Criteria).ArrayMax = 0;
  this->bCopyKeyForUnselectedGrammar = false;
  this->bRemapCriteriaAttributeNames = false;
  ::FName::FName(&(this->CriteriaAttributeNames).KeyAttributeName,L"Key");
  ::FName::FName(&(this->CriteriaAttributeNames).ComparatorAttributeName,L"Comparator");
  ::FName::FName(&(this->CriteriaAttributeNames).FirstValueAttributeName,L"FirstValue");
  ::FName::FName(&(this->CriteriaAttributeNames).SecondValueAttributeName,L"SecondValue");
  ::FName::FName(&(this->CriteriaAttributeNames).GrammarAttributeName,L"Grammar");
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
            (&this->OutputGrammarAttribute);
  return this;
}

// UPCGSelectGrammarSettings @ 1499c4c70

UPCGSelectGrammarSettings * __thiscall
UPCGSelectGrammarSettings::UPCGSelectGrammarSettings(UPCGSelectGrammarSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar1);
  this->bKeyAsAttribute = true;
  this->_padding_ = (longlong)&___7UPCGSelectGrammarSettings__6B_;
  (this->Key).ComparisonIndex = 0;
  (this->Key).Number = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->KeyAttribute);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->ComparedValueAttribute);
  this->bCriteriaAsInput = false;
  (this->Criteria).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Criteria).ArrayNum = 0;
  (this->Criteria).ArrayMax = 0;
  this->bCopyKeyForUnselectedGrammar = false;
  this->bRemapCriteriaAttributeNames = false;
  ::FName::FName(&(this->CriteriaAttributeNames).KeyAttributeName,L"Key");
  ::FName::FName(&(this->CriteriaAttributeNames).ComparatorAttributeName,L"Comparator");
  ::FName::FName(&(this->CriteriaAttributeNames).FirstValueAttributeName,L"FirstValue");
  ::FName::FName(&(this->CriteriaAttributeNames).SecondValueAttributeName,L"SecondValue");
  ::FName::FName(&(this->CriteriaAttributeNames).GrammarAttributeName,L"Grammar");
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
            (&this->OutputGrammarAttribute);
  FPCGAttributePropertySelector::Update
            ((FPCGAttributePropertySelector *)&this->ComparedValueAttribute,
             &PCGSelectGrammar::Constants::ComparedValueAttributeString);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&this->OutputGrammarAttribute,
             PCGSelectGrammar::Constants::OutputGrammarAttributeName,true);
  return this;
}

// ~UPCGSelectGrammarSettings @ 1499c6f10

void __thiscall
UPCGSelectGrammarSettings::~UPCGSelectGrammarSettings(UPCGSelectGrammarSettings *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UPCGSelectGrammarSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->OutputGrammarAttribute).field_0x28,
             *(int *)&(this->OutputGrammarAttribute).field_0x30);
  pvVar1 = *(void **)&(this->OutputGrammarAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FPCGSelectGrammarCriterion,int>
            ((FPCGSelectGrammarCriterion *)(this->Criteria).AllocatorInstance.Data,
             (this->Criteria).ArrayNum);
  pFVar2 = (this->Criteria).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->ComparedValueAttribute).field_0x28,
             *(int *)&(this->ComparedValueAttribute).field_0x30);
  pvVar1 = *(void **)&(this->ComparedValueAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->KeyAttribute).field_0x28,*(int *)&(this->KeyAttribute).field_0x30)
  ;
  pvVar1 = *(void **)&(this->KeyAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 1499dc2d0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGSelectGrammarSettings::CreateElement
          (UPCGSelectGrammarSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGSelectGrammarElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGSelectGrammarElement__6B_;
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

// GetPrivateStaticClass @ 1499fc110

UClass * __cdecl UPCGSelectGrammarSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSelectGrammarSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSelectGrammarSettings",
               &Z_Registration_Info_UClass_UPCGSelectGrammarSettings.InnerSingleton,
               StaticRegisterNativesUPCGSelectGrammarSettings,0x1e0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGSelectGrammarSettings>,
               InternalVTableHelperCtorCaller<UPCGSelectGrammarSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSelectGrammarSettings.InnerSingleton;
}

// InputPinProperties @ 1499ffe10

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSelectGrammarSettings::InputPinProperties
          (UPCGSelectGrammarSettings *this,
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
  if (this->bCriteriaAsInput != false) {
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
                        &PCGSelectGrammar::Constants::CriteriaDataPinLabel,pFVar4,false,false,pFVar3
                       );
    pFVar5->PinStatus = Required;
  }
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149a03df0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSelectGrammarSettings::OutputPinProperties
          (UPCGSelectGrammarSettings *this,
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
  return __return_storage_ptr__;
}

// PostLoad @ 149a04c80

void __thiscall UPCGSelectGrammarSettings::PostLoad(UPCGSelectGrammarSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGSelectGrammarSettings @ 149a10160

void __cdecl UPCGSelectGrammarSettings::StaticRegisterNativesUPCGSelectGrammarSettings(void)

{
  return;
}

