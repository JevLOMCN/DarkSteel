// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 15

// StaticClass @ 149904230

UClass * __cdecl UPCGLoadDataAssetSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGLoadDataAssetSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGLoadDataAssetSettings",
               &Z_Registration_Info_UClass_UPCGLoadDataAssetSettings.InnerSingleton,
               StaticRegisterNativesUPCGLoadDataAssetSettings,0x198,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGLoadDataAssetSettings>,
               InternalVTableHelperCtorCaller<UPCGLoadDataAssetSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGLoadDataAssetSettings.InnerSingleton;
}

// UPCGLoadDataAssetSettings @ 1499c3aa0

UPCGLoadDataAssetSettings * __thiscall
UPCGLoadDataAssetSettings::UPCGLoadDataAssetSettings
          (UPCGLoadDataAssetSettings *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this_00 = &(this->Asset).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UPCGLoadDataAssetSettings__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->Asset).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Asset).SoftObjectPtr = 0;
  *(undefined8 *)&(this->Asset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Asset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->Pins).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Pins).ArrayNum = 0;
  (this->Pins).ArrayMax = 0;
  (this->AssetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AssetName).Data.ArrayNum = 0;
  (this->AssetName).Data.ArrayMax = 0;
  this->bLoadFromInput = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->AssetReferenceSelector);
  (this->InputIndexTag).ComparisonIndex = 0;
  (this->InputIndexTag).Number = 0;
  (this->DataIndexTag).ComparisonIndex = 0;
  (this->DataIndexTag).Number = 0;
  this->bSetDefaultAttributeOverridesFromInput = false;
  (this->DefaultAttributeOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultAttributeOverrides).ArrayNum = 0;
  (this->DefaultAttributeOverrides).ArrayMax = 0;
  (this->CommaSeparatedDefaultAttributeOverrides).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CommaSeparatedDefaultAttributeOverrides).Data.ArrayNum = 0;
  (this->CommaSeparatedDefaultAttributeOverrides).Data.ArrayMax = 0;
  this->bWarnIfNoAsset = true;
  this->bTagOutputsBasedOnOutputPins = true;
  this->bSynchronousLoad = false;
  return this;
}

// UPCGLoadDataAssetSettings @ 1499c3b70

UPCGLoadDataAssetSettings * __thiscall
UPCGLoadDataAssetSettings::UPCGLoadDataAssetSettings(UPCGLoadDataAssetSettings *this)

{
  undefined1 *this_00;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  FObjectInitializer *pFVar3;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> local_18;
  
  pFVar3 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar3);
  this_00 = &(this->Asset).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UPCGLoadDataAssetSettings__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->Asset).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Asset).SoftObjectPtr = 0;
  *(undefined8 *)&(this->Asset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Asset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  pTVar1 = &this->Pins;
  (this->AssetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Pins).ArrayNum = 0;
  (this->Pins).ArrayMax = 0;
  (this->AssetName).Data.ArrayNum = 0;
  (this->AssetName).Data.ArrayMax = 0;
  this->bLoadFromInput = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->AssetReferenceSelector);
  (this->InputIndexTag).ComparisonIndex = 0;
  (this->InputIndexTag).Number = 0;
  (this->DataIndexTag).ComparisonIndex = 0;
  (this->DataIndexTag).Number = 0;
  this->bSetDefaultAttributeOverridesFromInput = false;
  (this->DefaultAttributeOverrides).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultAttributeOverrides).ArrayNum = 0;
  (this->DefaultAttributeOverrides).ArrayMax = 0;
  (this->CommaSeparatedDefaultAttributeOverrides).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CommaSeparatedDefaultAttributeOverrides).Data.ArrayNum = 0;
  (this->CommaSeparatedDefaultAttributeOverrides).Data.ArrayMax = 0;
  this->bWarnIfNoAsset = true;
  this->bTagOutputsBasedOnOutputPins = true;
  this->bSynchronousLoad = false;
  pTVar4 = UPCGSettings::OutputPinProperties((UPCGSettings *)this,&local_18);
  if (pTVar1 != pTVar4) {
    DestructItems<FPCGPinProperties,int>
              ((FPCGPinProperties *)(pTVar1->AllocatorInstance).Data,(this->Pins).ArrayNum);
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar4->AllocatorInstance).Data;
    (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Pins).ArrayNum = pTVar4->ArrayNum;
    (this->Pins).ArrayMax = pTVar4->ArrayMax;
    pTVar4->ArrayNum = 0;
    pTVar4->ArrayMax = 0;
  }
  DestructItems<FPCGPinProperties,int>
            ((FPCGPinProperties *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FPCGPinProperties *)local_18.AllocatorInstance.Data != (FPCGPinProperties *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  this->bTagOutputsBasedOnOutputPins = true;
  return this;
}

// ~UPCGLoadDataAssetSettings @ 1499c6670

void __thiscall
UPCGLoadDataAssetSettings::~UPCGLoadDataAssetSettings(UPCGLoadDataAssetSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGLoadDataAssetSettings__6B_;
  pFVar1 = (this->CommaSeparatedDefaultAttributeOverrides).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->DefaultAttributeOverrides).AllocatorInstance.Data,
             (this->DefaultAttributeOverrides).ArrayNum);
  pFVar1 = (this->DefaultAttributeOverrides).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->AssetReferenceSelector).field_0x28,
             *(int *)&(this->AssetReferenceSelector).field_0x30);
  pvVar2 = *(void **)&(this->AssetReferenceSelector).field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pFVar1 = (this->AssetName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPCGPinProperties,int>
            ((FPCGPinProperties *)(this->Pins).AllocatorInstance.Data,(this->Pins).ArrayNum);
  pFVar1 = (this->Pins).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->Asset).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 1499db6d0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGLoadDataAssetSettings::CreateElement
          (UPCGLoadDataAssetSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGLoadDataAssetElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGLoadDataAssetElement__6B_;
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

// GetAdditionalTitleInformation @ 1499f3110

FString * __thiscall
UPCGLoadDataAssetSettings::GetAdditionalTitleInformation
          (UPCGLoadDataAssetSettings *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  FName local_res8;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar3 = (FScriptContainerElement *)0x0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  iVar1 = (this->AssetName).Data.ArrayNum;
  if (iVar1 < 2) {
    local_res8.ComparisonIndex.Value = *(uint *)&(this->Asset).SoftObjectPtr.field_0x10;
    local_res8.Number = *(uint *)&(this->Asset).SoftObjectPtr.field_0x14;
    bVar5 = local_res8 != (FName)0x0;
    if (bVar5) {
      pFVar2 = ::FName::ToString(&local_res8,&local_18);
      pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    }
    else {
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      pFVar2 = &local_28;
    }
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = (pFVar2->Data).ArrayNum;
    local_38.Data.ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = pFVar3;
    if ((bVar5) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if ((!bVar5) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    ::FString::FString(__return_storage_ptr__,&local_38);
    FVar4.Data = local_38.Data.AllocatorInstance.Data;
  }
  else {
    pFVar3 = (this->AssetName).Data.AllocatorInstance.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = iVar1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar1,0,(ForAnyElementType *)&local_48,iVar1,&local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,pFVar3,(longlong)iVar1 * 2);
    ::FString::FString(__return_storage_ptr__,&local_48);
    FVar4.Data = local_48.Data.AllocatorInstance.Data;
  }
  if (FVar4.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  return __return_storage_ptr__;
}

// GetCurrentPinTypesID @ 1499f4740

FPCGDataTypeIdentifier * __thiscall
UPCGLoadDataAssetSettings::GetCurrentPinTypesID
          (UPCGLoadDataAssetSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__,
          UPCGPin *param_1)

{
  code *pcVar1;
  bool bVar2;
  FPCGDataTypeIdentifier *pFVar3;
  
  if (param_1 == (UPCGPin *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPin",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGLoadAssetElement.cpp"
                       ,0x72,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPCGDataTypeIdentifier *)(*pcVar1)();
      return pFVar3;
    }
  }
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier
            (__return_storage_ptr__,&(param_1->Properties).AllowedTypes);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1499fb450

UClass * __cdecl UPCGLoadDataAssetSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGLoadDataAssetSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGLoadDataAssetSettings",
               &Z_Registration_Info_UClass_UPCGLoadDataAssetSettings.InnerSingleton,
               StaticRegisterNativesUPCGLoadDataAssetSettings,0x198,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGLoadDataAssetSettings>,
               InternalVTableHelperCtorCaller<UPCGLoadDataAssetSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGLoadDataAssetSettings.InnerSingleton;
}

// HasDynamicPins @ 1499fe4b0

bool __thiscall UPCGLoadDataAssetSettings::HasDynamicPins(UPCGLoadDataAssetSettings *this)

{
  return true;
}

// HasFlippedTitleLines @ 1499fe540

bool __thiscall UPCGLoadDataAssetSettings::HasFlippedTitleLines(UPCGLoadDataAssetSettings *this)

{
  return true;
}

// InputPinProperties @ 1499ff1c0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGLoadDataAssetSettings::InputPinProperties
          (UPCGLoadDataAssetSettings *this,
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
  if (this->bLoadFromInput != false) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar3 = FText::GetEmpty();
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Param);
    pFVar5 = FPCGPinProperties::FPCGPinProperties
                       ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                        &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
    pFVar5->PinStatus = Required;
  }
  if (this->bSetDefaultAttributeOverridesFromInput != false) {
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
                        &PCGLoadDataAsset::DefaultProviderPinLabel,pFVar4,true,true,pFVar3);
    pFVar5->PinStatus = Normal;
  }
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149a035f0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGLoadDataAssetSettings::OutputPinProperties
          (UPCGLoadDataAssetSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FPCGPinProperties *pFVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->Pins).ArrayNum;
  pFVar2 = (FPCGPinProperties *)(this->Pins).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  ConstructItems<FPCGPinProperties,FPCGPinProperties,int>
            ((__return_storage_ptr__->AllocatorInstance).Data,pFVar2,iVar1);
  return __return_storage_ptr__;
}

// SetFromAsset @ 149a0c470

void __thiscall
UPCGLoadDataAssetSettings::SetFromAsset(UPCGLoadDataAssetSettings *this,FAssetData *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  FSoftObjectPath *pFVar6;
  undefined8 local_res8;
  FSoftObjectPath local_58;
  TPersistentObjectPtr<FSoftObjectPath> local_38;
  
  local_res8 = 0;
  FSoftObjectPtr::operator=(&(this->Asset).SoftObjectPtr,(FObjectPtr)&local_res8);
  pUVar4 = FAssetData::GetClass(param_1,No);
  if (pUVar4 != (UClass *)0x0) {
    pUVar5 = Z_Construct_UClass_UPCGDataAsset_NoRegister();
    if (pUVar5 != (UClass *)0x0) {
      iVar1 = (int)pUVar5->_padding_;
      if (((int)pUVar4->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pFVar6 = FAssetData::GetSoftObjectPath(param_1,&local_58);
        local_38.WeakPtr.ObjectIndex = 0;
        local_38.WeakPtr.ObjectSerialNumber = 0;
        FSoftObjectPath::FSoftObjectPath(&local_38.ObjectID,pFVar6);
        pFVar2 = (pFVar6->SubPathString).Data.AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        TPersistentObjectPtr<FSoftObjectPath>::operator=
                  ((TPersistentObjectPtr<FSoftObjectPath> *)&this->Asset,&local_38);
        if (local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.ObjectID.SubPathString.Data.AllocatorInstance.Data);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000149a0c555. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x4f8))(this);
  return;
}

// StaticRegisterNativesUPCGLoadDataAssetSettings @ 149a10020

void __cdecl UPCGLoadDataAssetSettings::StaticRegisterNativesUPCGLoadDataAssetSettings(void)

{
  return;
}

// UpdateFromData @ 149a118f0

void __thiscall UPCGLoadDataAssetSettings::UpdateFromData(UPCGLoadDataAssetSettings *this)

{
  int *piVar1;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *pTVar2;
  FString *pFVar3;
  longlong *plVar4;
  int iVar5;
  UPCGDataAsset *pUVar6;
  FPCGDataTypeBaseId *pFVar7;
  FText *pFVar8;
  FPCGDataTypeIdentifier *pFVar9;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  FPCGPinProperties *this_00;
  int iVar14;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  ForAnyElementType local_78;
  undefined8 local_70;
  FPCGDataTypeIdentifier local_68;
  undefined8 local_50 [3];
  
  pUVar6 = TSoftObjectPtr<UPCGDataAsset>::LoadSynchronous(&this->Asset);
  if (pUVar6 == (UPCGDataAsset *)0x0) {
    pTVar10 = UPCGSettings::OutputPinProperties
                        ((UPCGSettings *)this,
                         (TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *)&local_68);
    pTVar2 = &this->Pins;
    if (pTVar2 != pTVar10) {
      DestructItems<FPCGPinProperties,int>
                ((FPCGPinProperties *)(pTVar2->AllocatorInstance).Data,(this->Pins).ArrayNum);
      pFVar13 = (pTVar2->AllocatorInstance).Data;
      if (pFVar13 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar13);
      }
      (pTVar2->AllocatorInstance).Data = (pTVar10->AllocatorInstance).Data;
      (pTVar10->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->Pins).ArrayNum = pTVar10->ArrayNum;
      (this->Pins).ArrayMax = pTVar10->ArrayMax;
      pTVar10->ArrayNum = 0;
      pTVar10->ArrayMax = 0;
    }
    DestructItems<FPCGPinProperties,int>
              ((FPCGPinProperties *)local_68.Ids.AllocatorInstance.Data,local_68.Ids.ArrayNum);
    if ((FPCGPinProperties *)local_68.Ids.AllocatorInstance.Data != (FPCGPinProperties *)0x0) {
      FMemory::Free(local_68.Ids.AllocatorInstance.Data);
    }
    pFVar3 = &this->AssetName;
    this->bTagOutputsBasedOnOutputPins = true;
    if (pFVar3 != (FString *)local_50) {
      pFVar13 = (pFVar3->Data).AllocatorInstance.Data;
      if (pFVar13 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar13);
      }
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->AssetName).Data.ArrayNum = 0;
      (this->AssetName).Data.ArrayMax = 0;
    }
  }
  else {
    pFVar13 = (pUVar6->Data).TaggedData.AllocatorInstance.Data;
    local_78.Data = (FScriptContainerElement *)0x0;
    local_70 = 0;
    iVar14 = (pUVar6->Data).TaggedData.ArrayNum;
    local_res10 = pFVar13 + (longlong)iVar14 * 0x78;
    pFVar11 = local_res10;
LAB_149a11950:
    if ((pUVar6->Data).TaggedData.ArrayNum != iVar14) {
      `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar13 != pFVar11) {
      plVar4 = *(longlong **)pFVar13;
      if (plVar4 != (longlong *)0x0) {
        if ((FPCGPinProperties *)local_78.Data !=
            (FPCGPinProperties *)(local_78.Data + (longlong)(int)local_70 * 0x30)) {
          FVar12.Data = local_78.Data;
          do {
            if (((FPCGPinProperties *)FVar12.Data)->Label == *(FName *)(pFVar13 + 0x60)) {
              if ((FPCGPinProperties *)FVar12.Data != (FPCGPinProperties *)0x0) {
                pFVar7 = (FPCGDataTypeBaseId *)(**(code **)(*plVar4 + 0x2b8))(plVar4);
                FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_68,pFVar7);
                FPCGDataTypeIdentifier::operator|=
                          (&((FPCGPinProperties *)FVar12.Data)->AllowedTypes,&local_68);
                pFVar11 = local_res10;
                if ((FPCGPinProperties *)local_68.Ids.AllocatorInstance.Data ==
                    (FPCGPinProperties *)0x0) goto LAB_149a11a13;
                FMemory::Free(local_68.Ids.AllocatorInstance.Data);
                pFVar13 = pFVar13 + 0x78;
                pFVar11 = local_res10;
                goto LAB_149a11950;
              }
              break;
            }
            FVar12.Data = FVar12.Data + 0x30;
          } while ((FPCGPinProperties *)FVar12.Data !=
                   (FPCGPinProperties *)(local_78.Data + (longlong)(int)local_70 * 0x30));
        }
        pFVar7 = (FPCGDataTypeBaseId *)(**(code **)(*plVar4 + 0x2b8))(plVar4);
        iVar5 = (int)local_70;
        if ((int)local_70 == local_70._4_4_) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x830,&local_78,(int *)((longlong)&local_70 + 4));
        }
        local_70 = CONCAT44(local_70._4_4_,iVar5 + 1);
        this_00 = (FPCGPinProperties *)(local_78.Data + (longlong)iVar5 * 0x30);
        pFVar8 = FText::GetEmpty();
        pFVar9 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_68,pFVar7);
        FPCGPinProperties::FPCGPinProperties
                  (this_00,(FName *)(pFVar13 + 0x60),pFVar9,true,true,pFVar8);
        pFVar11 = local_res10;
      }
LAB_149a11a13:
      pFVar13 = pFVar13 + 0x78;
      goto LAB_149a11950;
    }
    pTVar2 = &this->Pins;
    if (pTVar2 != (TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *)&local_78) {
      DestructItems<FPCGPinProperties,int>
                ((FPCGPinProperties *)(pTVar2->AllocatorInstance).Data,(this->Pins).ArrayNum);
      FVar12.Data = local_78.Data;
      iVar14 = (int)local_70;
      piVar1 = &(this->Pins).ArrayMax;
      (this->Pins).ArrayNum = (int)local_70;
      if (((int)local_70 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,(int)local_70,*piVar1,&pTVar2->AllocatorInstance,(int)local_70,piVar1);
        ConstructItems<FPCGPinProperties,FPCGPinProperties,int>
                  ((pTVar2->AllocatorInstance).Data,(FPCGPinProperties *)FVar12.Data,iVar14);
      }
    }
    this->bTagOutputsBasedOnOutputPins = false;
    iVar5 = (pUVar6->Name).Data.ArrayNum;
    iVar14 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar14 = 0;
    }
    ::FString::AssignRange
              (&this->AssetName,(wchar_t *)(pUVar6->Name).Data.AllocatorInstance.Data,iVar14);
    DestructItems<FPCGPinProperties,int>((FPCGPinProperties *)local_78.Data,(int)local_70);
    if ((FPCGPinProperties *)local_78.Data != (FPCGPinProperties *)0x0) {
      FMemory::Free(local_78.Data);
      return;
    }
  }
  return;
}

