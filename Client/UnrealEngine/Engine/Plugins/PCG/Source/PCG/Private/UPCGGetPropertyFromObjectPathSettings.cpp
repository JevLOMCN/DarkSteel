// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 12

// StaticClass @ 149b9f370

UClass * __cdecl UPCGGetPropertyFromObjectPathSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetPropertyFromObjectPathSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetPropertyFromObjectPathSettings",
               &Z_Registration_Info_UClass_UPCGGetPropertyFromObjectPathSettings.InnerSingleton,
               StaticRegisterNativesUPCGGetPropertyFromObjectPathSettings,0x170,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGetPropertyFromObjectPathSettings>,
               InternalVTableHelperCtorCaller<UPCGGetPropertyFromObjectPathSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetPropertyFromObjectPathSettings.InnerSingleton;
}

// UPCGGetPropertyFromObjectPathSettings @ 149be67c0

UPCGGetPropertyFromObjectPathSettings * __thiscall
UPCGGetPropertyFromObjectPathSettings::UPCGGetPropertyFromObjectPathSettings
          (UPCGGetPropertyFromObjectPathSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGGetPropertyFromObjectPathSettings__6B_;
  (this->ObjectPathsToExtract).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectPathsToExtract).ArrayNum = 0;
  (this->ObjectPathsToExtract).ArrayMax = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource);
  (this->PropertyName).ComparisonIndex = 0;
  (this->PropertyName).Number = 0;
  this->bForceObjectAndStructExtraction = false;
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
            (&this->OutputAttributeName);
  this->bSanitizeOutputAttributeName = true;
  this->bSynchronousLoad = false;
  this->bPersistAllData = false;
  this->bSilenceErrorOnEmptyObjectPath = false;
  return this;
}

// UPCGGetPropertyFromObjectPathSettings @ 149be6830

UPCGGetPropertyFromObjectPathSettings * __thiscall
UPCGGetPropertyFromObjectPathSettings::UPCGGetPropertyFromObjectPathSettings
          (UPCGGetPropertyFromObjectPathSettings *this)

{
  bool bVar1;
  FObjectInitializer *pFVar2;
  FName FVar3;
  
  pFVar2 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar2);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  this->_padding_ = (longlong)&___7UPCGGetPropertyFromObjectPathSettings__6B_;
  (this->ObjectPathsToExtract).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectPathsToExtract).ArrayNum = 0;
  (this->ObjectPathsToExtract).ArrayMax = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource);
  (this->PropertyName).ComparisonIndex = 0;
  (this->PropertyName).Number = 0;
  this->bForceObjectAndStructExtraction = false;
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
            (&this->OutputAttributeName);
  this->bSanitizeOutputAttributeName = true;
  this->bSynchronousLoad = false;
  this->bPersistAllData = false;
  this->bSilenceErrorOnEmptyObjectPath = false;
  bVar1 = PCGHelpers::IsNewObjectAndNotDefault((UObject *)this,false);
  if (bVar1) {
    FVar3 = PCGMetadataAttributeConstants::SourceAttributeName;
  }
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&this->OutputAttributeName,FVar3,true);
  return this;
}

// ~UPCGGetPropertyFromObjectPathSettings @ 149be98c0

void __thiscall
UPCGGetPropertyFromObjectPathSettings::~UPCGGetPropertyFromObjectPathSettings
          (UPCGGetPropertyFromObjectPathSettings *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UPCGGetPropertyFromObjectPathSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->OutputAttributeName).field_0x28,
             *(int *)&(this->OutputAttributeName).field_0x30);
  pvVar1 = *(void **)&(this->OutputAttributeName).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->InputSource).field_0x28,*(int *)&(this->InputSource).field_0x30);
  pvVar1 = *(void **)&(this->InputSource).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)(this->ObjectPathsToExtract).AllocatorInstance.Data,
             (this->ObjectPathsToExtract).ArrayNum);
  pFVar2 = (this->ObjectPathsToExtract).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CanCullTaskIfUnwired @ 149c01880

bool __thiscall
UPCGGetPropertyFromObjectPathSettings::CanCullTaskIfUnwired
          (UPCGGetPropertyFromObjectPathSettings *this)

{
  return false;
}

// CreateElement @ 149c04a20

TSharedPtr<IPCGElement,1> * __thiscall
UPCGGetPropertyFromObjectPathSettings::CreateElement
          (UPCGGetPropertyFromObjectPathSettings *this,
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
         ___7__TIntrusiveReferenceController_VFPCGGetPropertyFromObjectPathElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGGetPropertyFromObjectPathElement__6B_;
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

// GetAdditionalTitleInformation @ 149c22b50

FString * __thiscall
UPCGGetPropertyFromObjectPathSettings::GetAdditionalTitleInformation
          (UPCGGetPropertyFromObjectPathSettings *this,FString *__return_storage_ptr__)

{
  int iVar1;
  UPCGNode *this_00;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FText *pFVar5;
  FString *pFVar6;
  FString local_78;
  FText local_68;
  FString local_58;
  FText local_48;
  FText local_38;
  FString local_28;
  
  this_00 = (UPCGNode *)this->_padding_;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  if (this_00 != (UPCGNode *)0x0) {
    pUVar4 = Z_Construct_UClass_UPCGNode_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if (((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar4->_padding_)) &&
       (bVar3 = UPCGNode::IsInputPinConnected(this_00,&PCGPinConstants::DefaultInputLabel), bVar3))
    goto LAB_149c22dbc;
  }
  iVar1 = (this->ObjectPathsToExtract).ArrayNum;
  if (iVar1 == 0) {
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_68,L"PCGGetPropertyFromObjectPathElement",L"MissingPath",
                        L"Missing Path");
    pFVar6 = FText::ToString(pFVar5);
    if (&local_78 != pFVar6) {
      iVar1 = (pFVar6->Data).ArrayNum;
      _Src = (pFVar6->Data).AllocatorInstance.Data;
      local_78.Data.ArrayNum = iVar1;
      if ((iVar1 == 0) && (local_78.Data.ArrayMax == 0)) {
        local_78.Data.ArrayNum = 0;
        local_78.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar1,local_78.Data.ArrayMax,(ForAnyElementType *)&local_78,iVar1,
                   &local_78.Data.ArrayMax);
        if (iVar1 != 0) {
          memcpy(local_78.Data.AllocatorInstance.Data,_Src,(longlong)iVar1 * 2);
        }
      }
    }
LAB_149c22d9b:
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
  }
  else {
    if (iVar1 != 1) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_38,L"PCGGetPropertyFromObjectPathElement",L"MultiplePaths",
                          L"Multiple Paths");
      pFVar6 = FText::ToString(pFVar5);
      ::FString::operator=(&local_78,pFVar6);
      local_68.TextData.Reference = local_38.TextData.Reference;
      goto LAB_149c22d9b;
    }
    if (((this->ObjectPathsToExtract).ArrayNum < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar2)();
      return pFVar6;
    }
    pFVar6 = FSoftObjectPath::ToString
                       ((FSoftObjectPath *)(this->ObjectPathsToExtract).AllocatorInstance.Data,
                        &local_58);
    if (&local_78 != pFVar6) {
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      local_78.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = (pFVar6->Data).ArrayNum;
      local_78.Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.ArrayNum < 2) {
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_48,L"PCGGetPropertyFromObjectPathElement",L"EmptyString",L"None");
      pFVar6 = FText::ToString(pFVar5);
      ::FString::operator=(&local_78,pFVar6);
      local_68.TextData.Reference = local_48.TextData.Reference;
      goto LAB_149c22d9b;
    }
    ::FString::operator=(&local_78,&local_78);
  }
  ::FString::AppendChars(&local_78,L", ",2);
LAB_149c22dbc:
  ::FName::ToString(&this->PropertyName,&local_28);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s%s");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149c25010

UClass * __cdecl UPCGGetPropertyFromObjectPathSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetPropertyFromObjectPathSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetPropertyFromObjectPathSettings",
               &Z_Registration_Info_UClass_UPCGGetPropertyFromObjectPathSettings.InnerSingleton,
               StaticRegisterNativesUPCGGetPropertyFromObjectPathSettings,0x170,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGetPropertyFromObjectPathSettings>,
               InternalVTableHelperCtorCaller<UPCGGetPropertyFromObjectPathSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetPropertyFromObjectPathSettings.InnerSingleton;
}

// InputPinProperties @ 149c2bb80

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGetPropertyFromObjectPathSettings::InputPinProperties
          (UPCGGetPropertyFromObjectPathSettings *this,
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
             &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c2db50

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGetPropertyFromObjectPathSettings::OutputPinProperties
          (UPCGGetPropertyFromObjectPathSettings *this,
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

// PostLoad @ 149c2f350

void __thiscall
UPCGGetPropertyFromObjectPathSettings::PostLoad(UPCGGetPropertyFromObjectPathSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGGetPropertyFromObjectPathSettings @ 149c353b0

void __cdecl
UPCGGetPropertyFromObjectPathSettings::StaticRegisterNativesUPCGGetPropertyFromObjectPathSettings
          (void)

{
  return;
}

