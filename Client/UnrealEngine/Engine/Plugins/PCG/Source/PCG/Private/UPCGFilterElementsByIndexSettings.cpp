// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 11

// StaticClass @ 149b30a20

UClass * __cdecl UPCGFilterElementsByIndexSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGFilterElementsByIndexSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGFilterElementsByIndexSettings",
               &Z_Registration_Info_UClass_UPCGFilterElementsByIndexSettings.InnerSingleton,
               StaticRegisterNativesUPCGFilterElementsByIndexSettings,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGFilterElementsByIndexSettings>,
               InternalVTableHelperCtorCaller<UPCGFilterElementsByIndexSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGFilterElementsByIndexSettings.InnerSingleton;
}

// UPCGFilterElementsByIndexSettings @ 149b576e0

UPCGFilterElementsByIndexSettings * __thiscall
UPCGFilterElementsByIndexSettings::UPCGFilterElementsByIndexSettings
          (UPCGFilterElementsByIndexSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bSelectIndicesByInput = true;
  this->_padding_ = (longlong)&___7UPCGFilterElementsByIndexSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->IndexSelectionAttribute);
  ::FString::FString(&this->SelectedIndices,L":");
  this->bOutputDiscardedElements = false;
  this->bInvertFilter = false;
  return this;
}

// UPCGFilterElementsByIndexSettings @ 149b57740

UPCGFilterElementsByIndexSettings * __thiscall
UPCGFilterElementsByIndexSettings::UPCGFilterElementsByIndexSettings
          (UPCGFilterElementsByIndexSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bSelectIndicesByInput = true;
  this->_padding_ = (longlong)&___7UPCGFilterElementsByIndexSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->IndexSelectionAttribute);
  ::FString::FString(&this->SelectedIndices,L":");
  this->bOutputDiscardedElements = false;
  this->bInvertFilter = false;
  return this;
}

// ~UPCGFilterElementsByIndexSettings @ 149b59300

void __thiscall
UPCGFilterElementsByIndexSettings::~UPCGFilterElementsByIndexSettings
          (UPCGFilterElementsByIndexSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGFilterElementsByIndexSettings__6B_;
  pFVar1 = (this->SelectedIndices).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->IndexSelectionAttribute).field_0x28,
             *(int *)&(this->IndexSelectionAttribute).field_0x30);
  pvVar2 = *(void **)&(this->IndexSelectionAttribute).field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149b6b650

TSharedPtr<IPCGElement,1> * __thiscall
UPCGFilterElementsByIndexSettings::CreateElement
          (UPCGFilterElementsByIndexSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__
          )

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
         ___7__TIntrusiveReferenceController_VFPCGFilterElementsByIndexElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGFilterElementsByIndexElement__6B_;
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

// GetAdditionalTitleInformation @ 149b8d910

FString * __thiscall
UPCGFilterElementsByIndexSettings::GetAdditionalTitleInformation
          (UPCGFilterElementsByIndexSettings *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *_Src;
  bool bVar1;
  bool bVar2;
  int iVar3;
  FText *pFVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  FString local_58;
  FString local_48;
  FText local_38;
  FString local_28;
  
  if (this->bSelectIndicesByInput == false) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"PCGFilterElementsByIndexElement",L"ListOfIndices",L"Indices: ");
    pFVar5 = FText::ToString(pFVar4);
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = (pFVar5->Data).ArrayNum;
    lVar7 = (longlong)local_58.Data.ArrayNum;
    _Src = (pFVar5->Data).AllocatorInstance.Data;
    if (local_58.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_58.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src,lVar7 * 2);
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    pFVar5 = ::FString::FString((FString *)&local_38,L":");
    iVar3 = (this->SelectedIndices).Data.ArrayNum;
    iVar8 = (pFVar5->Data).ArrayNum;
    if (iVar3 == iVar8) {
      if (iVar3 < 2) {
        bVar9 = true;
      }
      else {
        iVar3 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(this->SelectedIndices).Data.AllocatorInstance.Data,
                           (wchar_t *)(pFVar5->Data).AllocatorInstance.Data);
        bVar9 = iVar3 == 0;
      }
    }
    else {
      bVar9 = iVar8 + iVar3 == 1;
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_38.TextData.Reference);
    }
    if (bVar9) {
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         (&local_38,L"PCGFilterElementsByIndexElement",L"AllIndicesSelected",L"All")
      ;
      pFVar5 = FText::ToString(pFVar4);
      iVar3 = (pFVar5->Data).ArrayNum;
      iVar8 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar8 = 0;
      }
      ::FString::AppendChars(&local_58,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar8);
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
    }
    else {
      iVar3 = (this->SelectedIndices).Data.ArrayNum;
      iVar8 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar8 = 0;
      }
      if (iVar8 < 0xd) {
        pFVar5 = ::FString::FString(&local_28,&this->SelectedIndices);
        bVar2 = true;
        bVar1 = false;
        bVar9 = false;
      }
      else {
        if (iVar3 == 0) {
          pwVar6 = L"";
        }
        else {
          pwVar6 = (wchar_t *)(this->SelectedIndices).Data.AllocatorInstance.Data;
        }
        ::FString::ConstructFromPtrSize((FString *)&local_38,pwVar6,9);
        ::FString::ConcatFC(&local_48,(FString *)&local_38,L"...");
        pFVar5 = &local_48;
        bVar2 = false;
        bVar1 = true;
        bVar9 = true;
      }
      iVar3 = (pFVar5->Data).ArrayNum;
      iVar8 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar8 = 0;
      }
      ::FString::AppendChars(&local_58,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data,iVar8);
      if (bVar9) {
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      if (bVar1) {
        if (local_38.TextData.Reference != (ITextData *)0x0) {
          FMemory::Free(local_38.TextData.Reference);
        }
      }
      if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_58.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_58.Data.ArrayMax;
  }
  else {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149b91400

UClass * __cdecl UPCGFilterElementsByIndexSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGFilterElementsByIndexSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGFilterElementsByIndexSettings",
               &Z_Registration_Info_UClass_UPCGFilterElementsByIndexSettings.InnerSingleton,
               StaticRegisterNativesUPCGFilterElementsByIndexSettings,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGFilterElementsByIndexSettings>,
               InternalVTableHelperCtorCaller<UPCGFilterElementsByIndexSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGFilterElementsByIndexSettings.InnerSingleton;
}

// HasDynamicPins @ 149b91af0

bool __thiscall
UPCGFilterElementsByIndexSettings::HasDynamicPins(UPCGFilterElementsByIndexSettings *this)

{
  return true;
}

// InputPinProperties @ 149b92ca0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGFilterElementsByIndexSettings::InputPinProperties
          (UPCGFilterElementsByIndexSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGPinProperties *pFVar5;
  FName local_res8;
  FPCGDataTypeIdentifier local_38;
  
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_38,PointOrParam);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  pFVar5->PinStatus = Required;
  if (this->bSelectIndicesByInput != false) {
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
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_38,PointOrParam);
    FLazyName::Resolve(&PCGFilterElementsByIndex::Constants::FilterInputsPinLabel);
    FPCGPinProperties::FPCGPinProperties
              ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),&local_res8,pFVar4,true,true,
               pFVar3);
  }
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b94b40

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGFilterElementsByIndexSettings::OutputPinProperties
          (UPCGFilterElementsByIndexSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FName local_res8;
  FPCGDataTypeIdentifier local_38;
  
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_38,PointOrParam);
  FLazyName::Resolve(&PCGFilterElementsByIndex::Constants::InFilterOutputPinLabel);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),&local_res8,pFVar4,true,true,
             pFVar3);
  if (this->bOutputDiscardedElements != false) {
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
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_38,PointOrParam);
    FLazyName::Resolve(&PCGFilterElementsByIndex::Constants::OutFilterOutputPinLabel);
    FPCGPinProperties::FPCGPinProperties
              ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),&local_res8,pFVar4,true,true,
               pFVar3);
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGFilterElementsByIndexSettings @ 149b98590

void __cdecl
UPCGFilterElementsByIndexSettings::StaticRegisterNativesUPCGFilterElementsByIndexSettings(void)

{
  return;
}

