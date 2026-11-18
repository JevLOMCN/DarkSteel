// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149a18a70

UClass * __cdecl UPCGAttributeRemoveDuplicatesSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAttributeRemoveDuplicatesSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAttributeRemoveDuplicatesSettings",
               &Z_Registration_Info_UClass_UPCGAttributeRemoveDuplicatesSettings.InnerSingleton,
               StaticRegisterNativesUPCGAttributeRemoveDuplicatesSettings,0xe8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGAttributeRemoveDuplicatesSettings>,
               InternalVTableHelperCtorCaller<UPCGAttributeRemoveDuplicatesSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAttributeRemoveDuplicatesSettings.InnerSingleton;
}

// UPCGAttributeRemoveDuplicatesSettings @ 149ad1100

UPCGAttributeRemoveDuplicatesSettings * __thiscall
UPCGAttributeRemoveDuplicatesSettings::UPCGAttributeRemoveDuplicatesSettings
          (UPCGAttributeRemoveDuplicatesSettings *this,FVTableHelper *param_1)

{
  TArray<FPCGAttributePropertyInputSelector,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 local_48 [48];
  int local_18;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGAttributeRemoveDuplicatesSettings__6B_;
  pTVar1 = &this->AttributeSelectors;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)local_48);
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AttributeSelectors).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x40,8,1,0,&pTVar1->AllocatorInstance,1,&(this->AttributeSelectors).ArrayMax);
  ConstructItems<FPCGAttributePropertyInputSelector,FPCGAttributePropertyInputSelector,int>
            ((pTVar1->AllocatorInstance).Data,(FPCGAttributePropertyInputSelector *)local_48,1);
  DestructItems<FString,int>((FString *)local_48._40_8_,local_18);
  if ((FString *)local_48._40_8_ != (FString *)0x0) {
    FMemory::Free((void *)local_48._40_8_);
  }
  (this->AttributeNamesToRemoveDuplicates).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AttributeNamesToRemoveDuplicates).Data.ArrayNum = 0;
  (this->AttributeNamesToRemoveDuplicates).Data.ArrayMax = 0;
  return this;
}

// UPCGAttributeRemoveDuplicatesSettings @ 149ad11d0

UPCGAttributeRemoveDuplicatesSettings * __thiscall
UPCGAttributeRemoveDuplicatesSettings::UPCGAttributeRemoveDuplicatesSettings
          (UPCGAttributeRemoveDuplicatesSettings *this,FObjectInitializer *param_1)

{
  TArray<FPCGAttributePropertyInputSelector,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 local_48 [48];
  int local_18;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGAttributeRemoveDuplicatesSettings__6B_;
  pTVar1 = &this->AttributeSelectors;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)local_48);
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AttributeSelectors).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x40,8,1,0,&pTVar1->AllocatorInstance,1,&(this->AttributeSelectors).ArrayMax);
  ConstructItems<FPCGAttributePropertyInputSelector,FPCGAttributePropertyInputSelector,int>
            ((pTVar1->AllocatorInstance).Data,(FPCGAttributePropertyInputSelector *)local_48,1);
  DestructItems<FString,int>((FString *)local_48._40_8_,local_18);
  if ((FString *)local_48._40_8_ != (FString *)0x0) {
    FMemory::Free((void *)local_48._40_8_);
  }
  (this->AttributeNamesToRemoveDuplicates).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AttributeNamesToRemoveDuplicates).Data.ArrayNum = 0;
  (this->AttributeNamesToRemoveDuplicates).Data.ArrayMax = 0;
  return this;
}

// ~UPCGAttributeRemoveDuplicatesSettings @ 149ad3430

void __thiscall
UPCGAttributeRemoveDuplicatesSettings::~UPCGAttributeRemoveDuplicatesSettings
          (UPCGAttributeRemoveDuplicatesSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGAttributeRemoveDuplicatesSettings__6B_;
  pFVar1 = (this->AttributeNamesToRemoveDuplicates).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPCGAttributePropertyInputSelector,int>
            ((FPCGAttributePropertyInputSelector *)(this->AttributeSelectors).AllocatorInstance.Data
             ,(this->AttributeSelectors).ArrayNum);
  pFVar1 = (this->AttributeSelectors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149afc470

TSharedPtr<IPCGElement,1> * __thiscall
UPCGAttributeRemoveDuplicatesSettings::CreateElement
          (UPCGAttributeRemoveDuplicatesSettings *this,
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
         ___7__TIntrusiveReferenceController_VFPCGAttributeRemoveDuplicatesElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGAttributeRemoveDuplicatesElement__6B_;
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

// GetAdditionalTitleInformation @ 149b14190

FString * __thiscall
UPCGAttributeRemoveDuplicatesSettings::GetAdditionalTitleInformation
          (UPCGAttributeRemoveDuplicatesSettings *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  FString local_88;
  FString local_78;
  FText local_68;
  FString local_58;
  FText local_48;
  FString local_38;
  FString local_28;
  
  iVar7 = (this->AttributeSelectors).ArrayNum;
  if (iVar7 == 0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    if ((iVar7 < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
    pFVar4 = FPCGAttributePropertySelector::ToString
                       ((FPCGAttributePropertySelector *)
                        (this->AttributeSelectors).AllocatorInstance.Data,&local_38,false);
    FText::FromString(&local_68,pFVar4);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar4 = FText::ToString(&local_68);
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = (pFVar4->Data).ArrayNum;
    lVar5 = (longlong)local_88.Data.ArrayNum;
    _Src = (pFVar4->Data).AllocatorInstance.Data;
    if (local_88.Data.ArrayNum == 0) {
      local_88.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_88,local_88.Data.ArrayNum,
                 &local_88.Data.ArrayMax);
      memcpy(local_88.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
    }
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    uVar6 = 1;
    if (1 < (this->AttributeSelectors).ArrayNum) {
      do {
        uVar3 = 0;
        if ((int)uVar6 < (this->AttributeSelectors).ArrayNum) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FString *)(*pcVar1)();
          return pFVar4;
        }
        pFVar4 = FPCGAttributePropertySelector::ToString
                           ((FPCGAttributePropertySelector *)
                            ((this->AttributeSelectors).AllocatorInstance.Data +
                            (longlong)(int)uVar6 * 0x40),&local_28,false);
        FText::FromString(&local_48,pFVar4);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        pFVar4 = FText::ToString(&local_48);
        ::FString::FString(&local_58,", ");
        ::FString::ConcatFF(&local_78,&local_58,pFVar4);
        iVar7 = local_78.Data.ArrayNum + -1;
        if (local_78.Data.ArrayNum == 0) {
          iVar7 = 0;
        }
        ::FString::AppendChars(&local_88,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar7);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (this->AttributeSelectors).ArrayNum);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_88.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_88.Data.ArrayMax;
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149b178b0

UClass * __cdecl UPCGAttributeRemoveDuplicatesSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAttributeRemoveDuplicatesSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAttributeRemoveDuplicatesSettings",
               &Z_Registration_Info_UClass_UPCGAttributeRemoveDuplicatesSettings.InnerSingleton,
               StaticRegisterNativesUPCGAttributeRemoveDuplicatesSettings,0xe8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGAttributeRemoveDuplicatesSettings>,
               InternalVTableHelperCtorCaller<UPCGAttributeRemoveDuplicatesSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAttributeRemoveDuplicatesSettings.InnerSingleton;
}

// HasDynamicPins @ 149b1a720

bool __thiscall
UPCGAttributeRemoveDuplicatesSettings::HasDynamicPins(UPCGAttributeRemoveDuplicatesSettings *this)

{
  return true;
}

// OutputPinProperties @ 149b200b0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGAttributeRemoveDuplicatesSettings::OutputPinProperties
          (UPCGAttributeRemoveDuplicatesSettings *this,
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

// StaticRegisterNativesUPCGAttributeRemoveDuplicatesSettings @ 149b2cf00

void __cdecl
UPCGAttributeRemoveDuplicatesSettings::StaticRegisterNativesUPCGAttributeRemoveDuplicatesSettings
          (void)

{
  return;
}

