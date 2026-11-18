// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 11

// StaticClass @ 149b9ce20

UClass * __cdecl UPCGGetSubgraphDepthSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetSubgraphDepthSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetSubgraphDepthSettings",
               &Z_Registration_Info_UClass_UPCGGetSubgraphDepthSettings.InnerSingleton,
               StaticRegisterNativesUPCGGetSubgraphDepthSettings,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGetSubgraphDepthSettings>,
               InternalVTableHelperCtorCaller<UPCGGetSubgraphDepthSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetSubgraphDepthSettings.InnerSingleton;
}

// UPCGGetSubgraphDepthSettings @ 149be6a90

UPCGGetSubgraphDepthSettings * __thiscall
UPCGGetSubgraphDepthSettings::UPCGGetSubgraphDepthSettings
          (UPCGGetSubgraphDepthSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->Mode = Depth;
  this->_padding_ = (longlong)&___7UPCGGetSubgraphDepthSettings__6B_;
  this->DistanceRelativeToUpstreamGraph = 0;
  this->bQuietInvalidDepthQueries = false;
  return this;
}

// UPCGGetSubgraphDepthSettings @ 149be6ad0

UPCGGetSubgraphDepthSettings * __thiscall
UPCGGetSubgraphDepthSettings::UPCGGetSubgraphDepthSettings
          (UPCGGetSubgraphDepthSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->Mode = Depth;
  this->_padding_ = (longlong)&___7UPCGGetSubgraphDepthSettings__6B_;
  this->DistanceRelativeToUpstreamGraph = 0;
  this->bQuietInvalidDepthQueries = false;
  return this;
}

// ~UPCGGetSubgraphDepthSettings @ 149be9a00

void __thiscall
UPCGGetSubgraphDepthSettings::~UPCGGetSubgraphDepthSettings(UPCGGetSubgraphDepthSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGGetSubgraphDepthSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c04d20

TSharedPtr<IPCGElement,1> * __thiscall
UPCGGetSubgraphDepthSettings::CreateElement
          (UPCGGetSubgraphDepthSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGGetSubgraphDepthElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGGetSubgraphDepthElement__6B_;
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

// GetAdditionalTitleInformation @ 149c22e50

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FString * __thiscall
UPCGGetSubgraphDepthSettings::GetAdditionalTitleInformation
          (UPCGGetSubgraphDepthSettings *this,FString *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FText *pFVar2;
  FText *pFVar3;
  FTextFormat *pFVar4;
  FString *pFVar5;
  TSharedPtr<FCulture,1> local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FText local_18;
  
  if (Z_Registration_Info_UEnum_EPCGSubgraphDepthMode.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGSubgraphDepthMode.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGSubgraphDepthMode,(UObject *)pUVar1,
                       L"EPCGSubgraphDepthMode");
    if (Z_Registration_Info_UEnum_EPCGSubgraphDepthMode.OuterSingleton == (UEnum *)0x0) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
  }
  if ((this->Mode == RecursiveDepth) && (this->DistanceRelativeToUpstreamGraph != 0)) {
    local_58.Object = (FCulture *)0x0;
    local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar2 = FText::AsNumber(&local_28,this->DistanceRelativeToUpstreamGraph,
                             (FNumberFormattingOptions *)0x0,&local_58);
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"PCGGetSubgraphDepthElement",L"RelativeDistanceTitle",
                        L"Get Recursive Depth from {0}-Upstream Graph.");
    pFVar4 = FTextFormat::FTextFormat((FTextFormat *)&local_18,pFVar3,Default);
    pFVar2 = FText::Format<FText>(&local_48,pFVar4,pFVar2);
    pFVar5 = FText::ToString(pFVar2);
    ::FString::FString(__return_storage_ptr__,pFVar5);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    return __return_storage_ptr__;
  }
  pFVar2 = UEnum::GetDisplayNameTextByValue
                     (Z_Registration_Info_UEnum_EPCGSubgraphDepthMode.OuterSingleton,&local_18,
                      (ulonglong)this->Mode);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"PCGGetSubgraphDepthElement",L"AdditionalTitle",L"Get {0}");
  pFVar4 = FTextFormat::FTextFormat((FTextFormat *)&local_28,pFVar3,Default);
  pFVar2 = FText::Format<FText>(&local_38,pFVar4,pFVar2);
  pFVar5 = FText::ToString(pFVar2);
  ::FString::FString(__return_storage_ptr__,pFVar5);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (local_48.TextData.Reference == (ITextData *)0x0) {
    return __return_storage_ptr__;
  }
  (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149c25310

UClass * __cdecl UPCGGetSubgraphDepthSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetSubgraphDepthSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetSubgraphDepthSettings",
               &Z_Registration_Info_UClass_UPCGGetSubgraphDepthSettings.InnerSingleton,
               StaticRegisterNativesUPCGGetSubgraphDepthSettings,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGetSubgraphDepthSettings>,
               InternalVTableHelperCtorCaller<UPCGGetSubgraphDepthSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetSubgraphDepthSettings.InnerSingleton;
}

// HasFlippedTitleLines @ 149c27490

bool __thiscall
UPCGGetSubgraphDepthSettings::HasFlippedTitleLines(UPCGGetSubgraphDepthSettings *this)

{
  return true;
}

// InputPinProperties @ 149c2bdf0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGetSubgraphDepthSettings::InputPinProperties
          (UPCGGetSubgraphDepthSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c2dd90

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGetSubgraphDepthSettings::OutputPinProperties
          (UPCGGetSubgraphDepthSettings *this,
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

// StaticRegisterNativesUPCGGetSubgraphDepthSettings @ 149c353f0

void __cdecl UPCGGetSubgraphDepthSettings::StaticRegisterNativesUPCGGetSubgraphDepthSettings(void)

{
  return;
}

