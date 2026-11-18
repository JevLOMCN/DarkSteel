// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 18

// StaticClass @ 14978a8b0

UClass * __cdecl UPCGCustomHLSLSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCustomHLSLSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCustomHLSLSettings",
               &Z_Registration_Info_UClass_UPCGCustomHLSLSettings.InnerSingleton,
               StaticRegisterNativesUPCGCustomHLSLSettings,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGCustomHLSLSettings>,
               InternalVTableHelperCtorCaller<UPCGCustomHLSLSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCustomHLSLSettings.InnerSingleton;
}

// UPCGCustomHLSLSettings @ 1497e0c70

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

UPCGCustomHLSLSettings * __thiscall
UPCGCustomHLSLSettings::UPCGCustomHLSLSettings(UPCGCustomHLSLSettings *this,FVTableHelper *param_1)

{
  TArray<FPCGPinPropertiesGPU,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  FPCGDataTypeIdentifier *pFVar3;
  FText *pFVar4;
  FPCGDataTypeIdentifier *pFVar5;
  FPCGPinPropertiesGPU local_c8;
  FPCGDataTypeIdentifier local_48;
  FPCGDataTypeIdentifier local_30;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->KernelType = PointProcessor;
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->NumElements = 0x100;
  this->_padding_ = (longlong)&_vftable__for__IPCGNodeSourceTextProvider__;
  (this->NumElements2D).field0_0x0._s_0.X = 0x40;
  (this->NumElements2D).field0_0x0._s_0.Y = 0x40;
  this->DispatchThreadCount = FromFirstOutputPin;
  this->ThreadCountMultiplier = 1;
  this->FixedThreadCount = 1;
  (this->ThreadCountInputPinLabels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ThreadCountInputPinLabels).ArrayNum = 0;
  (this->ThreadCountInputPinLabels).ArrayMax = 0;
  UPCGSettings::DefaultPointInputPinProperties((UPCGSettings *)this,&this->InputPins);
  pTVar1 = &this->OutputPins;
  pFVar3 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_48,Point);
  pFVar4 = FText::GetEmpty();
  pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_30,pFVar3);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)&local_c8,&PCGPinConstants::DefaultOutputLabel,pFVar5,true,true,
             pFVar4);
  local_c8.PropertiesGPU.InitializationMode = FromInputPins;
  local_c8.PropertiesGPU.PinsToInititalizeFrom.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_c8.PropertiesGPU.PinsToInititalizeFrom.ArrayNum = 0;
  local_c8.PropertiesGPU.PinsToInititalizeFrom.ArrayMax = 0;
  local_c8.PropertiesGPU.DataCountMode = FromInputData;
  local_c8.PropertiesGPU.DataMultiplicity = Pairwise;
  local_c8.PropertiesGPU.DataCount = 1;
  local_c8.PropertiesGPU.ElementCountMode = FromInputData;
  local_c8.PropertiesGPU.ElementMultiplicity = Product;
  local_c8.PropertiesGPU.ElementCount = 1;
  local_c8.PropertiesGPU.NumElements2D.field0_0x0._s_0.X = 0x40;
  local_c8.PropertiesGPU.NumElements2D.field0_0x0._s_0.Y = 0x40;
  local_c8.PropertiesGPU.ElementCountMultiplier = 1;
  local_c8.PropertiesGPU.AttributeInheritanceMode = CopyAttributeSetup;
  local_c8.PropertiesGPU.CreatedKernelAttributeKeys.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_c8.PropertiesGPU.CreatedKernelAttributeKeys.ArrayNum = 0;
  local_c8.PropertiesGPU.CreatedKernelAttributeKeys.ArrayMax = 0;
  pFVar2 = (pFVar3->Ids).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->OutputPins).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x78,8,1,0,&pTVar1->AllocatorInstance,1,&(this->OutputPins).ArrayMax);
  ConstructItems<FPCGPinPropertiesGPU,FPCGPinPropertiesGPU,int>
            ((pTVar1->AllocatorInstance).Data,&local_c8,1);
  DestructItems<FPCGKernelAttributeKey,int>
            ((FPCGKernelAttributeKey *)
             local_c8.PropertiesGPU.CreatedKernelAttributeKeys.AllocatorInstance.Data,
             local_c8.PropertiesGPU.CreatedKernelAttributeKeys.ArrayNum);
  if ((FPCGKernelAttributeKey *)
      local_c8.PropertiesGPU.CreatedKernelAttributeKeys.AllocatorInstance.Data !=
      (FPCGKernelAttributeKey *)0x0) {
    FMemory::Free(local_c8.PropertiesGPU.CreatedKernelAttributeKeys.AllocatorInstance.Data);
  }
  if (local_c8.PropertiesGPU.PinsToInititalizeFrom.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.PropertiesGPU.PinsToInititalizeFrom.AllocatorInstance.Data);
  }
  if ((void *)local_c8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._padding_);
  }
  this->bMuteUnwrittenPinDataErrors = false;
  return this;
}

// UPCGCustomHLSLSettings @ 1497e0e60

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

UPCGCustomHLSLSettings * __thiscall
UPCGCustomHLSLSettings::UPCGCustomHLSLSettings(UPCGCustomHLSLSettings *this)

{
  TArray<FPCGPinPropertiesGPU,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  FObjectInitializer *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FText *pFVar5;
  FPCGDataTypeIdentifier *pFVar6;
  FPCGPinPropertiesGPU local_c8;
  FPCGDataTypeIdentifier local_48;
  FPCGDataTypeIdentifier local_30;
  
  pFVar3 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar3);
  this->KernelType = PointProcessor;
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->NumElements = 0x100;
  this->_padding_ = (longlong)&_vftable__for__IPCGNodeSourceTextProvider__;
  (this->NumElements2D).field0_0x0._s_0.X = 0x40;
  (this->NumElements2D).field0_0x0._s_0.Y = 0x40;
  this->DispatchThreadCount = FromFirstOutputPin;
  this->ThreadCountMultiplier = 1;
  this->FixedThreadCount = 1;
  (this->ThreadCountInputPinLabels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ThreadCountInputPinLabels).ArrayNum = 0;
  (this->ThreadCountInputPinLabels).ArrayMax = 0;
  UPCGSettings::DefaultPointInputPinProperties((UPCGSettings *)this,&this->InputPins);
  pTVar1 = &this->OutputPins;
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_48,Point);
  pFVar5 = FText::GetEmpty();
  pFVar6 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_30,pFVar4);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)&local_c8,&PCGPinConstants::DefaultOutputLabel,pFVar6,true,true,
             pFVar5);
  local_c8.PropertiesGPU.InitializationMode = FromInputPins;
  local_c8.PropertiesGPU.PinsToInititalizeFrom.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_c8.PropertiesGPU.PinsToInititalizeFrom.ArrayNum = 0;
  local_c8.PropertiesGPU.PinsToInititalizeFrom.ArrayMax = 0;
  local_c8.PropertiesGPU.DataCountMode = FromInputData;
  local_c8.PropertiesGPU.DataMultiplicity = Pairwise;
  local_c8.PropertiesGPU.DataCount = 1;
  local_c8.PropertiesGPU.ElementCountMode = FromInputData;
  local_c8.PropertiesGPU.ElementMultiplicity = Product;
  local_c8.PropertiesGPU.ElementCount = 1;
  local_c8.PropertiesGPU.NumElements2D.field0_0x0._s_0.X = 0x40;
  local_c8.PropertiesGPU.NumElements2D.field0_0x0._s_0.Y = 0x40;
  local_c8.PropertiesGPU.ElementCountMultiplier = 1;
  local_c8.PropertiesGPU.AttributeInheritanceMode = CopyAttributeSetup;
  local_c8.PropertiesGPU.CreatedKernelAttributeKeys.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_c8.PropertiesGPU.CreatedKernelAttributeKeys.ArrayNum = 0;
  local_c8.PropertiesGPU.CreatedKernelAttributeKeys.ArrayMax = 0;
  pFVar2 = (pFVar4->Ids).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->OutputPins).ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x78,8,1,0,&pTVar1->AllocatorInstance,1,&(this->OutputPins).ArrayMax);
  ConstructItems<FPCGPinPropertiesGPU,FPCGPinPropertiesGPU,int>
            ((pTVar1->AllocatorInstance).Data,&local_c8,1);
  DestructItems<FPCGKernelAttributeKey,int>
            ((FPCGKernelAttributeKey *)
             local_c8.PropertiesGPU.CreatedKernelAttributeKeys.AllocatorInstance.Data,
             local_c8.PropertiesGPU.CreatedKernelAttributeKeys.ArrayNum);
  if ((FPCGKernelAttributeKey *)
      local_c8.PropertiesGPU.CreatedKernelAttributeKeys.AllocatorInstance.Data !=
      (FPCGKernelAttributeKey *)0x0) {
    FMemory::Free(local_c8.PropertiesGPU.CreatedKernelAttributeKeys.AllocatorInstance.Data);
  }
  if (local_c8.PropertiesGPU.PinsToInititalizeFrom.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.PropertiesGPU.PinsToInititalizeFrom.AllocatorInstance.Data);
  }
  if ((void *)local_c8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._padding_);
  }
  this->bMuteUnwrittenPinDataErrors = false;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  return this;
}

// ~UPCGCustomHLSLSettings @ 1497e2f50

void __thiscall UPCGCustomHLSLSettings::~UPCGCustomHLSLSettings(UPCGCustomHLSLSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
  this->_padding_ = (longlong)&_vftable__for__IPCGNodeSourceTextProvider__;
  DestructItems<FPCGPinPropertiesGPU,int>
            ((FPCGPinPropertiesGPU *)(this->OutputPins).AllocatorInstance.Data,
             (this->OutputPins).ArrayNum);
  pFVar1 = (this->OutputPins).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPCGPinProperties,int>
            ((FPCGPinProperties *)(this->InputPins).AllocatorInstance.Data,
             (this->InputPins).ArrayNum);
  pFVar1 = (this->InputPins).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ThreadCountInputPinLabels).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IPCGNodeSourceTextProvider__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// ApplyPreconfiguredSettings @ 1497ee6c0

void __thiscall
UPCGCustomHLSLSettings::ApplyPreconfiguredSettings
          (UPCGCustomHLSLSettings *this,FPCGPreConfiguredSettingsInfo *param_1)

{
  int *piVar1;
  EPCGKernelType EVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UPackage *pUVar9;
  uint uVar10;
  
  if (Z_Registration_Info_UEnum_EPCGKernelType.OuterSingleton == (UEnum *)0x0) {
    pUVar9 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGKernelType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGKernelType,(UObject *)pUVar9,L"EPCGKernelType");
    if (Z_Registration_Info_UEnum_EPCGKernelType.OuterSingleton == (UEnum *)0x0) {
      return;
    }
  }
  bVar7 = UEnum::IsValidEnumValue
                    (Z_Registration_Info_UEnum_EPCGKernelType.OuterSingleton,
                     (longlong)*(int *)param_1);
  if (bVar7) {
    EVar2 = *(EPCGKernelType *)param_1;
    this->KernelType = EVar2;
    if ((EVar2 == PointGenerator) || (EVar2 == TextureGenerator)) {
      DestructItems<FPCGPinProperties,int>
                ((FPCGPinProperties *)(this->InputPins).AllocatorInstance.Data,
                 (this->InputPins).ArrayNum);
      piVar1 = &(this->InputPins).ArrayMax;
      (this->InputPins).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,&(this->InputPins).AllocatorInstance,0,piVar1);
      }
    }
    iVar3 = (this->InputPins).ArrayNum;
    if (iVar3 != 0) {
      if ((iVar3 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (this->InputPins).AllocatorInstance.Data;
      if ((pFVar4 != (FScriptContainerElement *)0x0) &&
         (iVar3 = (this->OutputPins).ArrayNum, iVar3 != 0)) {
        uVar10 = 0;
        if ((int)(iVar3 - 1U) < iVar3) {
          uVar10 = ~(iVar3 - 1U) >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar3 = (this->OutputPins).ArrayNum;
        pFVar5 = (this->OutputPins).AllocatorInstance.Data;
        if (((*(FScriptContainerElement **)(pFVar5 + (longlong)iVar3 * 0x78 + -0x40) <= pFVar4) &&
            (pFVar4 < *(FScriptContainerElement **)(pFVar5 + (longlong)iVar3 * 0x78 + -0x40) +
                      (longlong)*(int *)(pFVar5 + (longlong)iVar3 * 0x78 + -0x34) * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar8 = *(int *)(pFVar5 + (longlong)iVar3 * 0x78 + -0x38);
        if (iVar8 == *(int *)(pFVar5 + (longlong)iVar3 * 0x78 + -0x34)) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,(ForAnyElementType *)(pFVar5 + (longlong)iVar3 * 0x78 + -0x40),
                             (int *)(pFVar5 + (longlong)iVar3 * 0x78 + -0x34));
        }
        *(int *)(pFVar5 + (longlong)iVar3 * 0x78 + -0x38) = iVar8 + 1;
        *(undefined8 *)
         (*(longlong *)(pFVar5 + (longlong)iVar3 * 0x78 + -0x40) + (longlong)iVar8 * 8) =
             *(undefined8 *)pFVar4;
      }
    }
  }
  return;
}

// CreateElement @ 1497fded0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGCustomHLSLSettings::CreateElement
          (UPCGCustomHLSLSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGCustomHLSLElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGCustomHLSLElement__6B_;
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

// GetAdditionalTitleInformation @ 14980f670

FString * __thiscall
UPCGCustomHLSLSettings::GetAdditionalTitleInformation
          (UPCGCustomHLSLSettings *this,FString *__return_storage_ptr__)

{
  UPackage *pUVar1;
  FText *this_00;
  FString *pFVar2;
  FText local_18;
  
  if (Z_Registration_Info_UEnum_EPCGKernelType.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UEnum_EPCGKernelType.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_PCG_EPCGKernelType,(UObject *)pUVar1,L"EPCGKernelType");
    if (Z_Registration_Info_UEnum_EPCGKernelType.OuterSingleton == (UEnum *)0x0) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
  }
  this_00 = UEnum::GetDisplayNameTextByValue
                      (Z_Registration_Info_UEnum_EPCGKernelType.OuterSingleton,&local_18,
                       (ulonglong)this->KernelType);
  pFVar2 = FText::ToString(this_00);
  ::FString::FString(__return_storage_ptr__,pFVar2);
  if (local_18.TextData.Reference == (ITextData *)0x0) {
    return __return_storage_ptr__;
  }
  (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  return __return_storage_ptr__;
}

// GetFirstInputPinProperties @ 149814d20

FPCGPinProperties * __thiscall
UPCGCustomHLSLSettings::GetFirstInputPinProperties(UPCGCustomHLSLSettings *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FPCGPinProperties *pFVar4;
  
  iVar1 = (this->InputPins).ArrayNum;
  if (iVar1 == 0) {
    return (FPCGPinProperties *)0x0;
  }
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPCGPinProperties *)(*pcVar2)();
      return pFVar4;
    }
  }
  return (FPCGPinProperties *)(this->InputPins).AllocatorInstance.Data;
}

// GetFirstOutputPinProperties @ 149814e10

FPCGPinPropertiesGPU * __thiscall
UPCGCustomHLSLSettings::GetFirstOutputPinProperties(UPCGCustomHLSLSettings *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FPCGPinPropertiesGPU *pFVar4;
  
  iVar1 = (this->OutputPins).ArrayNum;
  if (iVar1 == 0) {
    return (FPCGPinPropertiesGPU *)0x0;
  }
  if (iVar1 < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FPCGPinPropertiesGPU *)(*pcVar2)();
      return pFVar4;
    }
  }
  return (FPCGPinPropertiesGPU *)(this->OutputPins).AllocatorInstance.Data;
}

// GetOutputPinPropertiesGPU @ 1498167a0

FPCGPinPropertiesGPU * __thiscall
UPCGCustomHLSLSettings::GetOutputPinPropertiesGPU(UPCGCustomHLSLSettings *this,FName *param_1)

{
  FPCGPinPropertiesGPU *pFVar1;
  FPCGPinPropertiesGPU *pFVar2;
  
  pFVar1 = (FPCGPinPropertiesGPU *)(this->OutputPins).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->OutputPins).ArrayNum;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return (FPCGPinPropertiesGPU *)0x0;
    }
    if ((FName)pFVar1->_padding_ == *param_1) break;
    pFVar1 = pFVar1 + 1;
  }
  return pFVar1;
}

// GetPrivateStaticClass @ 149817750

UClass * __cdecl UPCGCustomHLSLSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCustomHLSLSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCustomHLSLSettings",
               &Z_Registration_Info_UClass_UPCGCustomHLSLSettings.InnerSingleton,
               StaticRegisterNativesUPCGCustomHLSLSettings,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGCustomHLSLSettings>,
               InternalVTableHelperCtorCaller<UPCGCustomHLSLSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCustomHLSLSettings.InnerSingleton;
}

// InputPinProperties @ 14981f7b0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGCustomHLSLSettings::InputPinProperties
          (UPCGCustomHLSLSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FPCGPinProperties *pFVar2;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->InputPins).ArrayNum;
  pFVar2 = (FPCGPinProperties *)(this->InputPins).AllocatorInstance.Data;
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

// IsInputPinRequiredByExecution @ 1498204e0

bool __thiscall
UPCGCustomHLSLSettings::IsInputPinRequiredByExecution(UPCGCustomHLSLSettings *this,UPCGPin *param_1)

{
  return true;
}

// OutputPinProperties @ 149821bf0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGCustomHLSLSettings::OutputPinProperties
          (UPCGCustomHLSLSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  <lambda_1> local_res8;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  Algo::
  Transform<TArray<FPCGPinPropertiesGPU,TSizedDefaultAllocator<32>_>,TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_>_&,_UPCGCustomHLSLSettings::OutputPinProperties_::__l2::<lambda_1>_>
            (&this->OutputPins,__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGCustomHLSLSettings @ 1498471d0

void __cdecl UPCGCustomHLSLSettings::StaticRegisterNativesUPCGCustomHLSLSettings(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.DataPtr = (FClassNativeFunction *)0x0;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UseSeed @ 14984d5b0

bool __thiscall UPCGCustomHLSLSettings::UseSeed(UPCGCustomHLSLSettings *this)

{
  return true;
}

// __VTableCtorCaller @ 14984f3b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

UObject * __cdecl UPCGCustomHLSLSettings::__VTableCtorCaller(FVTableHelper *param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UPCGSettings *this;
  FPCGDataTypeIdentifier *pFVar5;
  FText *pFVar6;
  FPCGDataTypeIdentifier *pFVar7;
  UPCGSettings *pUVar8;
  FPCGPinPropertiesGPU local_c8;
  FPCGDataTypeIdentifier local_48;
  FPCGDataTypeIdentifier local_30;
  
  pUVar8 = (UPCGSettings *)0x0;
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = GetPrivateStaticClass();
  this = (UPCGSettings *)
         StaticAllocateObject
                   (pUVar4,pUVar3,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UPCGSettings *)0x0) {
    UPCGSettings::UPCGSettings(this,param_1);
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__UPCGSettings__;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x100;
    this[1]._padding_ = (longlong)&_vftable__for__IPCGNodeSourceTextProvider__;
    *(undefined4 *)&this[1]._padding_ = 0x40;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x40;
    *(undefined1 *)&this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 1;
    *(undefined4 *)&this[1]._padding_ = 1;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    UPCGSettings::DefaultPointInputPinProperties
              (this,(TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *)&this[1]._padding_);
    plVar1 = &this[1]._padding_;
    pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_48,Point);
    pFVar6 = FText::GetEmpty();
    pFVar7 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_30,pFVar5);
    FPCGPinProperties::FPCGPinProperties
              ((FPCGPinProperties *)&local_c8,&PCGPinConstants::DefaultOutputLabel,pFVar7,true,true,
               pFVar6);
    local_c8.PropertiesGPU.InitializationMode = FromInputPins;
    local_c8.PropertiesGPU.PinsToInititalizeFrom.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_c8.PropertiesGPU.PinsToInititalizeFrom.ArrayNum = 0;
    local_c8.PropertiesGPU.PinsToInititalizeFrom.ArrayMax = 0;
    local_c8.PropertiesGPU.DataCountMode = FromInputData;
    local_c8.PropertiesGPU.DataMultiplicity = Pairwise;
    local_c8.PropertiesGPU.DataCount = 1;
    local_c8.PropertiesGPU.ElementCountMode = FromInputData;
    local_c8.PropertiesGPU.ElementMultiplicity = Product;
    local_c8.PropertiesGPU.ElementCount = 1;
    local_c8.PropertiesGPU.NumElements2D.field0_0x0._s_0.X = 0x40;
    local_c8.PropertiesGPU.NumElements2D.field0_0x0._s_0.Y = 0x40;
    local_c8.PropertiesGPU.ElementCountMultiplier = 1;
    local_c8.PropertiesGPU.AttributeInheritanceMode = CopyAttributeSetup;
    local_c8.PropertiesGPU.CreatedKernelAttributeKeys.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_c8.PropertiesGPU.CreatedKernelAttributeKeys.ArrayNum = 0;
    local_c8.PropertiesGPU.CreatedKernelAttributeKeys.ArrayMax = 0;
    pFVar2 = (pFVar5->Ids).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    *plVar1 = 0;
    this[1].Seed = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,1,0,(ForAnyElementType *)plVar1,1,(int *)&this[1].bExecutionDependencyRequired
              );
    ConstructItems<FPCGPinPropertiesGPU,FPCGPinPropertiesGPU,int>((void *)*plVar1,&local_c8,1);
    DestructItems<FPCGKernelAttributeKey,int>
              ((FPCGKernelAttributeKey *)
               local_c8.PropertiesGPU.CreatedKernelAttributeKeys.AllocatorInstance.Data,
               local_c8.PropertiesGPU.CreatedKernelAttributeKeys.ArrayNum);
    if ((FPCGKernelAttributeKey *)
        local_c8.PropertiesGPU.CreatedKernelAttributeKeys.AllocatorInstance.Data !=
        (FPCGKernelAttributeKey *)0x0) {
      FMemory::Free(local_c8.PropertiesGPU.CreatedKernelAttributeKeys.AllocatorInstance.Data);
    }
    if (local_c8.PropertiesGPU.PinsToInititalizeFrom.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.PropertiesGPU.PinsToInititalizeFrom.AllocatorInstance.Data);
    }
    if ((void *)local_c8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_c8._padding_);
    }
    *(undefined1 *)&this[1].OriginalSettings = 0;
    pUVar8 = this;
  }
  return (UObject *)pUVar8;
}

// _getUObject @ 14984f630

UObject * __thiscall UPCGCustomHLSLSettings::_getUObject(UPCGCustomHLSLSettings *this)

{
  return (UObject *)&this[-1]._padding_;
}

