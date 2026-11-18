// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 12

// StaticClass @ 149900c80

UClass * __cdecl UPCGQualityBranchSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGQualityBranchSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGQualityBranchSettings",
               &Z_Registration_Info_UClass_UPCGQualityBranchSettings.InnerSingleton,
               StaticRegisterNativesUPCGQualityBranchSettings,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGQualityBranchSettings>,
               InternalVTableHelperCtorCaller<UPCGQualityBranchSettings>,local_res8,
               UPCGControlFlowSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGQualityBranchSettings.InnerSingleton;
}

// UPCGQualityBranchSettings @ 1499c48f0

UPCGQualityBranchSettings * __thiscall
UPCGQualityBranchSettings::UPCGQualityBranchSettings
          (UPCGQualityBranchSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bUseLowPin = false;
  this->bUseMediumPin = false;
  this->bUseHighPin = false;
  this->bUseEpicPin = false;
  this->_padding_ = (longlong)&___7UPCGQualityBranchSettings__6B_;
  this->bUseCinematicPin = false;
  return this;
}

// UPCGQualityBranchSettings @ 1499c4930

UPCGQualityBranchSettings * __thiscall
UPCGQualityBranchSettings::UPCGQualityBranchSettings
          (UPCGQualityBranchSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bUseLowPin = false;
  this->bUseMediumPin = false;
  this->bUseHighPin = false;
  this->bUseEpicPin = false;
  this->_padding_ = (longlong)&___7UPCGQualityBranchSettings__6B_;
  this->bUseCinematicPin = false;
  return this;
}

// ~UPCGQualityBranchSettings @ 1499c6e50

void __thiscall
UPCGQualityBranchSettings::~UPCGQualityBranchSettings(UPCGQualityBranchSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGControlFlowSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 1499dc090

TSharedPtr<IPCGElement,1> * __thiscall
UPCGQualityBranchSettings::CreateElement
          (UPCGQualityBranchSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGQualityBranchElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGQualityBranchElement__6B_;
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

// GetAdditionalTitleInformation @ 1499f3b90

FString * __thiscall
UPCGQualityBranchSettings::GetAdditionalTitleInformation
          (UPCGQualityBranchSettings *this,FString *__return_storage_ptr__)

{
  FName this_00;
  
  this_00 = PCGQualityHelpers::GetQualityPinLabel();
  ::FName::ToString((FName *)this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1499fbed0

UClass * __cdecl UPCGQualityBranchSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGQualityBranchSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGQualityBranchSettings",
               &Z_Registration_Info_UClass_UPCGQualityBranchSettings.InnerSingleton,
               StaticRegisterNativesUPCGQualityBranchSettings,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGQualityBranchSettings>,
               InternalVTableHelperCtorCaller<UPCGQualityBranchSettings>,local_res8,
               UPCGControlFlowSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGQualityBranchSettings.InnerSingleton;
}

// HasDynamicPins @ 1499fe4f0

bool __thiscall UPCGQualityBranchSettings::HasDynamicPins(UPCGQualityBranchSettings *this)

{
  return true;
}

// IsPinUsedByNodeExecution @ 149a00db0

bool __thiscall
UPCGQualityBranchSettings::IsPinUsedByNodeExecution
          (UPCGQualityBranchSettings *this,UPCGPin *param_1)

{
  FName FVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  FName FVar5;
  
  if (param_1 != (UPCGPin *)0x0) {
    bVar2 = UPCGPin::IsOutputPin(param_1);
    if (bVar2) {
      FVar1 = (param_1->Properties).Label;
      if ((char)this->_padding_ != '\0') {
        iVar4 = UPCGSubsystem::GetPCGQualityLevel();
        if (iVar4 == 0) {
          cVar3 = this->bUseLowPin;
        }
        else if (iVar4 == 1) {
          cVar3 = this->bUseMediumPin;
        }
        else if (iVar4 == 2) {
          cVar3 = this->bUseHighPin;
        }
        else if (iVar4 == 3) {
          cVar3 = this->bUseEpicPin;
        }
        else {
          if (iVar4 != 4) goto LAB_149a00de3;
          cVar3 = this->bUseCinematicPin;
        }
        if (cVar3 != '\0') {
          FVar5 = PCGQualityHelpers::GetQualityPinLabel();
          return FVar1 == *(FName *)FVar5;
        }
      }
LAB_149a00de3:
      return FVar1 == PCGQualityHelpers::PinLabelDefault;
    }
  }
  bVar2 = UPCGSettings::IsPinUsedByNodeExecution((UPCGSettings *)this,param_1);
  return bVar2;
}

// OutputPinProperties @ 149a03960

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGQualityBranchSettings::OutputPinProperties
          (UPCGQualityBranchSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FText local_38;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"FPCGQualityBranchElement",L"OutputPinTooltipDefault",
                      L"All unusued quality pins funnel through this default pin.");
  iVar2 = __return_storage_ptr__->ArrayNum;
  if (iVar2 == __return_storage_ptr__->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGQualityHelpers::PinLabelDefault,pFVar4,true,true,pFVar3);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (this->bUseLowPin != false) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"FPCGQualityBranchElement",L"OutputPinTooltipLow",
                        L"Active if pcg.Quality setting is set to 0.");
    iVar2 = __return_storage_ptr__->ArrayNum;
    if (iVar2 == __return_storage_ptr__->ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
    FPCGPinProperties::FPCGPinProperties
              ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
               &PCGQualityHelpers::PinLabelLow,pFVar4,true,true,pFVar3);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  if (this->bUseMediumPin != false) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"FPCGQualityBranchElement",L"OutputPinTooltipMedium",
                        L"Active if pcg.Quality setting is set to 1.");
    iVar2 = __return_storage_ptr__->ArrayNum;
    if (iVar2 == __return_storage_ptr__->ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
    FPCGPinProperties::FPCGPinProperties
              ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
               &PCGQualityHelpers::PinLabelMedium,pFVar4,true,true,pFVar3);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  if (this->bUseHighPin != false) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"FPCGQualityBranchElement",L"OutputPinTooltipHigh",
                        L"Active if pcg.Quality setting is set to 2.");
    iVar2 = __return_storage_ptr__->ArrayNum;
    if (iVar2 == __return_storage_ptr__->ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
    FPCGPinProperties::FPCGPinProperties
              ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
               &PCGQualityHelpers::PinLabelHigh,pFVar4,true,true,pFVar3);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  if (this->bUseEpicPin != false) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"FPCGQualityBranchElement",L"OutputPinTooltipEpic",
                        L"Active if pcg.Quality setting is set to 3.");
    iVar2 = __return_storage_ptr__->ArrayNum;
    if (iVar2 == __return_storage_ptr__->ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
    FPCGPinProperties::FPCGPinProperties
              ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
               &PCGQualityHelpers::PinLabelEpic,pFVar4,true,true,pFVar3);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  if (this->bUseCinematicPin != false) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"FPCGQualityBranchElement",L"OutputPinTooltipCinematic",
                        L"Active if pcg.Quality setting is set to 4.");
    iVar2 = __return_storage_ptr__->ArrayNum;
    if (iVar2 == __return_storage_ptr__->ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
    FPCGPinProperties::FPCGPinProperties
              ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
               &PCGQualityHelpers::PinLabelCinematic,pFVar4,true,true,pFVar3);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// OutputPinsCanBeDeactivated @ 149a045b0

bool __thiscall
UPCGQualityBranchSettings::OutputPinsCanBeDeactivated(UPCGQualityBranchSettings *this)

{
  return true;
}

// StaticRegisterNativesUPCGQualityBranchSettings @ 149a10130

void __cdecl UPCGQualityBranchSettings::StaticRegisterNativesUPCGQualityBranchSettings(void)

{
  return;
}

