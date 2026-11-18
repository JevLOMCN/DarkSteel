// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149a165f0

UClass * __cdecl UPCGAttractSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAttractSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAttractSettings",
               &Z_Registration_Info_UClass_UPCGAttractSettings.InnerSingleton,
               StaticRegisterNativesUPCGAttractSettings,0x290,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGAttractSettings>,
               InternalVTableHelperCtorCaller<UPCGAttractSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAttractSettings.InnerSingleton;
}

// UPCGAttractSettings @ 149ad05c0

UPCGAttractSettings * __thiscall
UPCGAttractSettings::UPCGAttractSettings(UPCGAttractSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->Mode = Closest;
  this->_padding_ = (longlong)&___7UPCGAttractSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->AttractorIndexAttribute);
  this->bRemoveUnattractedPoints = false;
  this->Distance = 100.0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->TargetAttribute);
  this->bUseSourceWeight = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->SourceWeightAttribute);
  this->bUseTargetWeight = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->TargetWeightAttribute);
  this->Weight = 1.0;
  *(undefined8 *)&this->SourceAndTargetAttributeMapping = 0;
  *(undefined8 *)&(this->SourceAndTargetAttributeMapping).field_0x8 = 0;
  *(undefined8 *)&(this->SourceAndTargetAttributeMapping).field_0x20 = 0;
  *(undefined4 *)&(this->SourceAndTargetAttributeMapping).field_0x28 = 0;
  *(undefined4 *)&(this->SourceAndTargetAttributeMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->SourceAndTargetAttributeMapping).field_0x34 = 0;
  *(undefined4 *)&(this->SourceAndTargetAttributeMapping).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SourceAndTargetAttributeMapping).field_0x40 = 0;
  *(undefined4 *)&(this->SourceAndTargetAttributeMapping).field_0x48 = 0;
  this->bOutputAttractIndex = false;
  *(undefined8 *)&(this->OutputAttractIndexAttribute).field_0x8 = 0;
  *(undefined8 *)&(this->OutputAttractIndexAttribute).field_0x10 = 0;
  *(undefined8 *)&(this->OutputAttractIndexAttribute).field_0x18 = 0;
  *(undefined4 *)&(this->OutputAttractIndexAttribute).field_0x20 = 0;
  *(undefined8 *)&(this->OutputAttractIndexAttribute).field_0x28 = 0;
  *(undefined8 *)&(this->OutputAttractIndexAttribute).field_0x30 = 0;
  (this->OutputAttractIndexAttribute).field_0x38 = 0;
  *(undefined ***)&this->OutputAttractIndexAttribute =
       &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
  return this;
}

// UPCGAttractSettings @ 149ad06e0

UPCGAttractSettings * __thiscall UPCGAttractSettings::UPCGAttractSettings(UPCGAttractSettings *this)

{
  FObjectInitializer *pFVar1;
  FString *pFVar2;
  undefined1 local_98 [16];
  FPCGAttributePropertySelector local_88;
  FPCGAttributePropertySelector local_48;
  
  pFVar1 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar1);
  this->Mode = Closest;
  this->_padding_ = (longlong)&___7UPCGAttractSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->AttractorIndexAttribute);
  this->bRemoveUnattractedPoints = false;
  this->Distance = 100.0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->TargetAttribute);
  this->bUseSourceWeight = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->SourceWeightAttribute);
  this->bUseTargetWeight = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->TargetWeightAttribute);
  this->Weight = 1.0;
  *(undefined8 *)&(this->SourceAndTargetAttributeMapping).field_0x0 = 0;
  *(undefined8 *)&(this->SourceAndTargetAttributeMapping).field_0x8 = 0;
  *(undefined8 *)&(this->SourceAndTargetAttributeMapping).field_0x20 = 0;
  *(undefined4 *)&(this->SourceAndTargetAttributeMapping).field_0x28 = 0;
  *(undefined4 *)&(this->SourceAndTargetAttributeMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->SourceAndTargetAttributeMapping).field_0x34 = 0;
  *(undefined4 *)&(this->SourceAndTargetAttributeMapping).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SourceAndTargetAttributeMapping).field_0x40 = 0;
  *(undefined4 *)&(this->SourceAndTargetAttributeMapping).field_0x48 = 0;
  this->bOutputAttractIndex = false;
  *(undefined8 *)&(this->OutputAttractIndexAttribute).field_0x8 = 0;
  *(undefined8 *)&(this->OutputAttractIndexAttribute).field_0x10 = 0;
  *(undefined8 *)&(this->OutputAttractIndexAttribute).field_0x18 = 0;
  *(undefined4 *)&(this->OutputAttractIndexAttribute).field_0x20 = 0;
  *(undefined8 *)&(this->OutputAttractIndexAttribute).field_0x28 = 0;
  *(undefined8 *)&(this->OutputAttractIndexAttribute).field_0x30 = 0;
  (this->OutputAttractIndexAttribute).field_0x38 = 0;
  *(undefined ***)&(this->OutputAttractIndexAttribute).field_0x0 =
       &___7FPCGAttributePropertyOutputNoSourceSelector__6B_;
  pFVar2 = ::FName::ToString(&PCGAttractElement::Constants::AttractIndexName,(FString *)local_98);
  FPCGAttributePropertySelector::Update
            ((FPCGAttributePropertySelector *)&this->AttractorIndexAttribute,pFVar2);
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)&local_48);
  FPCGAttributePropertySelector::SetPointProperty(&local_48,Position,true);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)&local_88);
  FPCGAttributePropertySelector::SetPointProperty(&local_88,Position,true);
  local_98._0_8_ = &local_48;
  local_98._8_8_ = &local_88;
  TSet<TTuple<FPCGAttributePropertyInputSelector,FPCGAttributePropertyInputSelector>,TDefaultMapHashableKeyFuncs<FPCGAttributePropertyInputSelector,FPCGAttributePropertyInputSelector,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FPCGAttributePropertyInputSelector_const_&,FPCGAttributePropertyInputSelector_const_&>_>
            ((TSet<TTuple<FPCGAttributePropertyInputSelector,FPCGAttributePropertyInputSelector>,TDefaultMapHashableKeyFuncs<FPCGAttributePropertyInputSelector,FPCGAttributePropertyInputSelector,0>,FDefaultSetAllocator>
              *)&this->SourceAndTargetAttributeMapping,
             (TPairInitializer<FPCGAttributePropertyInputSelector_const_&,FPCGAttributePropertyInputSelector_const_&>
              *)&stack0x00000008,(bool *)local_98);
  pFVar2 = ::FName::ToString(&PCGAttractElement::Constants::AttractIndexName,(FString *)local_98);
  FPCGAttributePropertySelector::Update
            ((FPCGAttributePropertySelector *)&this->OutputAttractIndexAttribute,pFVar2);
  if ((FPCGAttributePropertySelector *)local_98._0_8_ != (FPCGAttributePropertySelector *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  DestructItems<FString,int>
            ((FString *)local_88.ExtraNames.AllocatorInstance.Data,local_88.ExtraNames.ArrayNum);
  if (local_88.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.ExtraNames.AllocatorInstance.Data);
  }
  DestructItems<FString,int>
            ((FString *)local_48.ExtraNames.AllocatorInstance.Data,local_48.ExtraNames.ArrayNum);
  if (local_48.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ExtraNames.AllocatorInstance.Data);
  }
  return this;
}

// ~UPCGAttractSettings @ 149ad2fd0

void __thiscall UPCGAttractSettings::~UPCGAttractSettings(UPCGAttractSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGAttractSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->OutputAttractIndexAttribute).field_0x28,
             *(int *)&(this->OutputAttractIndexAttribute).field_0x30);
  pvVar1 = *(void **)&(this->OutputAttractIndexAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined4 *)&(this->SourceAndTargetAttributeMapping).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SourceAndTargetAttributeMapping).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FPCGAttributePropertyInputSelector,FPCGAttributePropertyInputSelector>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPCGAttributePropertyInputSelector,FPCGAttributePropertyInputSelector>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPCGAttributePropertyInputSelector,FPCGAttributePropertyInputSelector>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SourceAndTargetAttributeMapping);
  DestructItems<FString,int>
            (*(FString **)&(this->TargetWeightAttribute).field_0x28,
             *(int *)&(this->TargetWeightAttribute).field_0x30);
  pvVar1 = *(void **)&(this->TargetWeightAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->SourceWeightAttribute).field_0x28,
             *(int *)&(this->SourceWeightAttribute).field_0x30);
  pvVar1 = *(void **)&(this->SourceWeightAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->TargetAttribute).field_0x28,
             *(int *)&(this->TargetAttribute).field_0x30);
  pvVar1 = *(void **)&(this->TargetAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->AttractorIndexAttribute).field_0x28,
             *(int *)&(this->AttractorIndexAttribute).field_0x30);
  pvVar1 = *(void **)&(this->AttractorIndexAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149afbe70

TSharedPtr<IPCGElement,1> * __thiscall
UPCGAttractSettings::CreateElement
          (UPCGAttractSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         &___7__TIntrusiveReferenceController_VFPCGAttractElement___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FPCGAttractElement__6B_;
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

// GetPrivateStaticClass @ 149b172b0

UClass * __cdecl UPCGAttractSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAttractSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAttractSettings",
               &Z_Registration_Info_UClass_UPCGAttractSettings.InnerSingleton,
               StaticRegisterNativesUPCGAttractSettings,0x290,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGAttractSettings>,
               InternalVTableHelperCtorCaller<UPCGAttractSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAttractSettings.InnerSingleton;
}

// InputPinProperties @ 149b1bd10

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGAttractSettings::InputPinProperties
          (UPCGAttractSettings *this,
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
                      &PCGAttractElement::Constants::InputSourceLabel,pFVar4,true,true,pFVar3);
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
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGAttractElement::Constants::InputTargetLabel,pFVar4,true,true,pFVar3);
  pFVar5->PinStatus = Required;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b1fbc0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGAttractSettings::OutputPinProperties
          (UPCGAttractSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGAttractSettings @ 149b2ce80

void __cdecl UPCGAttractSettings::StaticRegisterNativesUPCGAttractSettings(void)

{
  return;
}

