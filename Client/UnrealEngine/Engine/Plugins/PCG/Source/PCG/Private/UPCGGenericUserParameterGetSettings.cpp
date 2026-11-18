// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 14

// StaticClass @ 149c3bf10

UClass * __cdecl UPCGGenericUserParameterGetSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGenericUserParameterGetSettings.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGenericUserParameterGetSettings",
               &Z_Registration_Info_UClass_UPCGGenericUserParameterGetSettings.InnerSingleton,
               StaticRegisterNativesUPCGGenericUserParameterGetSettings,0xe8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGenericUserParameterGetSettings>,
               InternalVTableHelperCtorCaller<UPCGGenericUserParameterGetSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGenericUserParameterGetSettings.InnerSingleton;
}

// UPCGGenericUserParameterGetSettings @ 149c4b030

UPCGGenericUserParameterGetSettings * __thiscall
UPCGGenericUserParameterGetSettings::UPCGGenericUserParameterGetSettings
          (UPCGGenericUserParameterGetSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bForceObjectAndStructExtraction = false;
  this->bSanitizeOutputAttributeName = true;
  this->_padding_ = (longlong)&___7UPCGGenericUserParameterGetSettings__6B_;
  (this->PropertyPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyPath).Data.ArrayNum = 0;
  (this->PropertyPath).Data.ArrayMax = 0;
  (this->OutputAttributeName).ComparisonIndex = 0;
  (this->OutputAttributeName).Number = 0;
  this->Source = Current;
  this->bQuiet = false;
  return this;
}

// UPCGGenericUserParameterGetSettings @ 149c4b080

UPCGGenericUserParameterGetSettings * __thiscall
UPCGGenericUserParameterGetSettings::UPCGGenericUserParameterGetSettings
          (UPCGGenericUserParameterGetSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bForceObjectAndStructExtraction = false;
  this->bSanitizeOutputAttributeName = true;
  this->_padding_ = (longlong)&___7UPCGGenericUserParameterGetSettings__6B_;
  (this->PropertyPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyPath).Data.ArrayNum = 0;
  (this->PropertyPath).Data.ArrayMax = 0;
  (this->OutputAttributeName).ComparisonIndex = 0;
  (this->OutputAttributeName).Number = 0;
  this->Source = Current;
  this->bQuiet = false;
  return this;
}

// ~UPCGGenericUserParameterGetSettings @ 149c4d870

void __thiscall
UPCGGenericUserParameterGetSettings::~UPCGGenericUserParameterGetSettings
          (UPCGGenericUserParameterGetSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGGenericUserParameterGetSettings__6B_;
  pFVar1 = (this->PropertyPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// ConvertNode @ 149c5f310

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UPCGGenericUserParameterGetSettings::ConvertNode
          (UPCGGenericUserParameterGetSettings *this,FPCGPreconfiguredInfo *param_1)

{
  int iVar1;
  code *pcVar2;
  FName FVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  UPCGNode *pUVar7;
  FName *pFVar8;
  UClass *pUVar9;
  FInstancedPropertyBag *this_00;
  FPropertyBagPropertyDesc *pFVar10;
  FText *pFVar11;
  UPCGCreateAttributeSetSettings *pUVar12;
  FString *pFVar13;
  byte bVar14;
  int iVar15;
  FName local_res8;
  FText local_b8;
  FPCGSingleNodeConverter local_a8;
  FPCGAttributePropertySelector local_68;
  FString local_28;
  
  pUVar7 = CastChecked<UPCGNode,UObject>((UObject *)this->_padding_);
  if (param_1->PreconfiguredIndex == 0) {
    pcVar2 = *(code **)(this->_padding_ + 1000);
    pFVar8 = ::FName::FName(&local_res8,0xc,L"PropertyPath",FNAME_Add);
    cVar5 = (*pcVar2)(this,*pFVar8);
    if ((cVar5 == '\0') && (this->Source == Current)) {
      local_res8 = (FName)UPCGUserParameterGetSettings::StaticClass();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FName)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8);
      }
      FPCGSingleNodeConverter::FPCGSingleNodeConverter
                (&local_a8,pUVar7,(TSubclassOf<UPCGSettings>)&local_res8);
      bVar14 = 0;
      if ((~local_a8._padding_._1_1_ & 2) == 0) {
        bVar14 = local_a8._padding_._1_1_ & 1;
      }
      if (bVar14 == 0) goto LAB_149c5f511;
      FPCGConverterBase::PrepareData((FPCGConverterBase *)&local_a8);
      if (local_a8.GeneratedSettings != (UPCGSettings *)0x0) {
        pUVar9 = UPCGUserParameterGetSettings::StaticClass();
        iVar15 = (int)pUVar9->_padding_;
        if ((((iVar15 <= *(int *)((local_a8.GeneratedSettings)->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)((local_a8.GeneratedSettings)->_padding_ + 0x30) + (longlong)iVar15 * 8
               ) == &pUVar9->_padding_)) && ((UPCGGraph *)local_a8._padding_ != (UPCGGraph *)0x0))
           && (this_00 = (FInstancedPropertyBag *)
                         (**(code **)(*(longlong *)local_a8._padding_ + 0x2c0))(),
              this_00 != (FInstancedPropertyBag *)0x0)) {
          local_68.Selection = Attribute;
          local_68.DomainName.ComparisonIndex.Value = 0;
          local_68._padding_ = (longlong)&___7FPCGAttributePropertySelector__6B_;
          local_68.DomainName.Number = 0;
          local_68.AttributeName.ComparisonIndex.Value = 0;
          local_68.AttributeName.Number = 0;
          local_68.PropertyName.ComparisonIndex.Value = 0;
          local_68.PropertyName.Number = 0;
          local_68.ExtraNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_68.ExtraNames.ArrayNum = 0;
          local_68.ExtraNames.ArrayMax = 0;
          local_68.ExtraProperty = Index;
          FPCGAttributePropertySelector::Update(&local_68,&this->PropertyPath);
          FVar3.Number = local_68.AttributeName.Number;
          FVar3.ComparisonIndex.Value = local_68.AttributeName.ComparisonIndex.Value;
          pFVar10 = FInstancedPropertyBag::FindPropertyDescByName(this_00,FVar3);
          if (pFVar10 != (FPropertyBagPropertyDesc *)0x0) {
            local_a8.GeneratedSettings[1]._padding_ = (longlong)pFVar10->Name;
            lVar4 = *(longlong *)&(pFVar10->ID).C;
            local_a8.GeneratedSettings[1]._padding_ = *(longlong *)&pFVar10->ID;
            local_a8.GeneratedSettings[1]._padding_ = lVar4;
          }
          DestructItems<FString,int>
                    ((FString *)local_68.ExtraNames.AllocatorInstance.Data,
                     local_68.ExtraNames.ArrayNum);
          if (local_68.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.ExtraNames.AllocatorInstance.Data);
          }
          if (pFVar10 != (FPropertyBagPropertyDesc *)0x0) {
            FPCGConverterBase::ApplyStructural((FPCGConverterBase *)&local_a8);
            FPCGSingleNodeConverter::Finalize(&local_a8);
            FPCGSingleNodeConverter::~FPCGSingleNodeConverter(&local_a8);
            return local_a8._padding_._1_1_ == 0xf;
          }
        }
      }
      FPCGSingleNodeConverter::~FPCGSingleNodeConverter(&local_a8);
    }
    else {
      pFVar11 = FText::AsLocalizable_Advanced_LocText
                          (&local_b8,L"PCGUserParameterGetElement",L"GenericInvalidConversion",
                           L"Can\'t convert Get User Parameter with an overridden property or upstream source."
                          );
      PCGLog::LogErrorOnGraph(pFVar11,(FPCGContext *)0x0);
      if (local_b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
      }
    }
  }
  else if (param_1->PreconfiguredIndex == 1) {
    local_res8 = (FName)Z_Construct_UClass_UPCGCreateAttributeSetSettings_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (FName)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    FPCGSingleNodeConverter::FPCGSingleNodeConverter
              (&local_a8,pUVar7,(TSubclassOf<UPCGSettings>)&local_res8);
    bVar14 = 0;
    if ((~local_a8._padding_._1_1_ & 2) == 0) {
      bVar14 = local_a8._padding_._1_1_ & 1;
    }
    if (bVar14 != 0) {
      FPCGConverterBase::PrepareData((FPCGConverterBase *)&local_a8);
      if ((UPCGGraph *)local_a8._padding_ != (UPCGGraph *)0x0) {
        iVar1 = (this->PropertyPath).Data.ArrayNum;
        iVar15 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar15 = 0;
        }
        pFVar8 = ::FName::FName(&local_res8,iVar15,
                                (wchar_t *)(this->PropertyPath).Data.AllocatorInstance.Data,
                                FNAME_Add);
        FVar3 = *pFVar8;
        pUVar12 = CastChecked<UPCGCreateAttributeSetSettings,UPCGSettings>
                            (local_a8.GeneratedSettings);
        pFVar13 = ::FName::ToString(&this->OutputAttributeName,&local_28);
        FPCGAttributePropertySelector::Update
                  ((FPCGAttributePropertySelector *)&pUVar12->OutputTarget,pFVar13);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        FText::FText(&local_b8);
        bVar6 = PCGUserParameterGet::Helpers::Conversion::AssignValue
                          (&pUVar12->AttributeTypes,(UPCGGraph *)local_a8._padding_,FVar3,&local_b8)
        ;
        if (bVar6) {
          FPCGConverterBase::ApplyStructural((FPCGConverterBase *)&local_a8);
          FPCGSingleNodeConverter::Finalize(&local_a8);
        }
        else {
          PCGLog::Settings::LogInvalidConversionError
                    (param_1->PreconfiguredIndex,
                     &PCGUserParameterGet::Constants::Conversion::GenericGetUserParameterNodeTitle,
                     &local_b8);
        }
        if (local_b8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
        }
      }
      FPCGSingleNodeConverter::~FPCGSingleNodeConverter(&local_a8);
      return local_a8._padding_._1_1_ == 0xf;
    }
LAB_149c5f511:
    PCGLog::Settings::LogInvalidPreconfigurationWarning
              (param_1->PreconfiguredIndex,
               &PCGUserParameterGet::Constants::Conversion::GenericGetUserParameterNodeTitle);
    FPCGSingleNodeConverter::~FPCGSingleNodeConverter(&local_a8);
    return false;
  }
  return false;
}

// CreateElement @ 149c5ffc0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGGenericUserParameterGetSettings::CreateElement
          (UPCGGenericUserParameterGetSettings *this,
          TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGUserParameterGetElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGUserParameterGetElement__6B_;
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

// GetAdditionalTitleInformation @ 149c76090

FString * __thiscall
UPCGGenericUserParameterGetSettings::GetAdditionalTitleInformation
          (UPCGGenericUserParameterGetSettings *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,&this->PropertyPath);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149c77d30

UClass * __cdecl UPCGGenericUserParameterGetSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGenericUserParameterGetSettings.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGenericUserParameterGetSettings",
               &Z_Registration_Info_UClass_UPCGGenericUserParameterGetSettings.InnerSingleton,
               StaticRegisterNativesUPCGGenericUserParameterGetSettings,0xe8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGenericUserParameterGetSettings>,
               InternalVTableHelperCtorCaller<UPCGGenericUserParameterGetSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGenericUserParameterGetSettings.InnerSingleton;
}

// HasExecutionDependencyPin @ 149c79f80

bool __thiscall
UPCGGenericUserParameterGetSettings::HasExecutionDependencyPin
          (UPCGGenericUserParameterGetSettings *this)

{
  return false;
}

// InputPinProperties @ 149c7f8a0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGenericUserParameterGetSettings::InputPinProperties
          (UPCGGenericUserParameterGetSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c80cb0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGenericUserParameterGetSettings::OutputPinProperties
          (UPCGGenericUserParameterGetSettings *this,
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

// PostLoad @ 149c81bd0

void __thiscall
UPCGGenericUserParameterGetSettings::PostLoad(UPCGGenericUserParameterGetSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// RequiresDataFromPreTask @ 149c857b0

bool __thiscall
UPCGGenericUserParameterGetSettings::RequiresDataFromPreTask
          (UPCGGenericUserParameterGetSettings *this)

{
  return true;
}

// StaticRegisterNativesUPCGGenericUserParameterGetSettings @ 149c91f00

void __cdecl
UPCGGenericUserParameterGetSettings::StaticRegisterNativesUPCGGenericUserParameterGetSettings(void)

{
  return;
}

