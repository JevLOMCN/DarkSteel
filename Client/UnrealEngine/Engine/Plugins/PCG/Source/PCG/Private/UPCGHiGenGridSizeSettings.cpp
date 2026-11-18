// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 17

// StaticClass @ 149b9b720

UClass * __cdecl UPCGHiGenGridSizeSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGHiGenGridSizeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGHiGenGridSizeSettings",
               &Z_Registration_Info_UClass_UPCGHiGenGridSizeSettings.InnerSingleton,
               StaticRegisterNativesUPCGHiGenGridSizeSettings,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGHiGenGridSizeSettings>,
               InternalVTableHelperCtorCaller<UPCGHiGenGridSizeSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGHiGenGridSizeSettings.InnerSingleton;
}

// UPCGHiGenGridSizeSettings @ 149be6b70

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGHiGenGridSizeSettings * __thiscall
UPCGHiGenGridSizeSettings::UPCGHiGenGridSizeSettings
          (UPCGHiGenGridSizeSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->HiGenGridSize = Grid256;
  this->_padding_ = (longlong)&___7UPCGHiGenGridSizeSettings__6B_;
  this->bShowInputPin = true;
  return this;
}

// UPCGHiGenGridSizeSettings @ 149be6bb0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGHiGenGridSizeSettings * __thiscall
UPCGHiGenGridSizeSettings::UPCGHiGenGridSizeSettings
          (UPCGHiGenGridSizeSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->HiGenGridSize = Grid256;
  this->_padding_ = (longlong)&___7UPCGHiGenGridSizeSettings__6B_;
  this->bShowInputPin = true;
  return this;
}

// ~UPCGHiGenGridSizeSettings @ 149be9a40

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall
UPCGHiGenGridSizeSettings::~UPCGHiGenGridSizeSettings(UPCGHiGenGridSizeSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGHiGenGridSizeSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// ApplyPreconfiguredSettings @ 149bff0d0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

void __thiscall
UPCGHiGenGridSizeSettings::ApplyPreconfiguredSettings
          (UPCGHiGenGridSizeSettings *this,FPCGPreConfiguredSettingsInfo *param_1)

{
  this->bShowInputPin = *(int *)param_1 == 1;
  return;
}

// ConvertNode @ 149c037e0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall
UPCGHiGenGridSizeSettings::ConvertNode
          (UPCGHiGenGridSizeSettings *this,FPCGPreconfiguredInfo *param_1)

{
  int iVar1;
  UPCGNode *this_00;
  UClass *pUVar2;
  UPCGPin *this_01;
  FName *pFVar3;
  
  this_00 = (UPCGNode *)this->_padding_;
  this->bShowInputPin = param_1->PreconfiguredIndex == 1;
  if (this_00 != (UPCGNode *)0x0) {
    pUVar2 = Z_Construct_UClass_UPCGNode_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      pFVar3 = &PCGPinConstants::DefaultExecutionDependencyLabel;
      if (this->bShowInputPin == false) {
        pFVar3 = &PCGPinConstants::DefaultOutputLabel;
      }
      this_01 = UPCGNode::GetOutputPin(this_00,pFVar3);
      if (this_01 != (UPCGPin *)0x0) {
        UPCGPin::BreakAllEdges
                  (this_01,(TSet<UPCGNode_*,DefaultKeyFuncs<UPCGNode_*,0>,FDefaultSetAllocator> *)
                           0x0);
      }
    }
  }
  return true;
}

// CreateElement @ 149c04ea0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

TSharedPtr<IPCGElement,1> * __thiscall
UPCGHiGenGridSizeSettings::CreateElement
          (UPCGHiGenGridSizeSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGHiGenGridSizeElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGHiGenGridSizeElement__6B_;
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

// GetAdditionalTitleInformation @ 149c23020

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

FString * __thiscall
UPCGHiGenGridSizeSettings::GetAdditionalTitleInformation
          (UPCGHiGenGridSizeSettings *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  UEnum *this_00;
  FString *pFVar3;
  FText *this_01;
  FText local_18;
  
  if ((this->_padding_ & 0x10) != 0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  this_00 = StaticEnum<enum_EPCGHiGenGrid>();
  if (this_00 == (UEnum *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_388553862929186674>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGHiGenGridSize.cpp"
                       ,0x8e,"EnumPtr");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    ::FString::PrintfImpl(__return_storage_ptr__,L"%d");
    return __return_storage_ptr__;
  }
  this_01 = UEnum::GetDisplayNameTextByValue(this_00,&local_18,(ulonglong)this->HiGenGridSize);
  pFVar3 = FText::ToString(this_01);
  ::FString::FString(__return_storage_ptr__,pFVar3);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetCurrentPinTypesID @ 149c238c0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

FPCGDataTypeIdentifier * __thiscall
UPCGHiGenGridSizeSettings::GetCurrentPinTypesID
          (UPCGHiGenGridSizeSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__,
          UPCGPin *param_1)

{
  code *pcVar1;
  bool bVar2;
  FPCGDataTypeIdentifier *pFVar3;
  
  if (param_1 == (UPCGPin *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPin",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGHiGenGridSize.cpp"
                       ,0x50,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPCGDataTypeIdentifier *)(*pcVar1)();
      return pFVar3;
    }
  }
  bVar2 = UPCGPin::IsOutputPin(param_1);
  if ((bVar2) && ((param_1->Properties).Label != PCGHiGenGridSizeConstants::CellVolumeOutputLabel))
  {
    UPCGSettings::GetCurrentPinTypesID((UPCGSettings *)this,__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier
            (__return_storage_ptr__,&(param_1->Properties).AllowedTypes);
  return __return_storage_ptr__;
}

// GetGrid @ 149c23e10

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

EPCGHiGenGrid __thiscall UPCGHiGenGridSizeSettings::GetGrid(UPCGHiGenGridSizeSettings *this)

{
  int iVar1;
  UClass *pUVar2;
  longlong lVar3;
  
  if ((this->_padding_ == 0) || (lVar3 = *(longlong *)(this->_padding_ + 0x20), lVar3 == 0)) {
LAB_149c23e9a:
    return this->HiGenGridSize;
  }
  pUVar2 = Z_Construct_UClass_UPCGGraph_NoRegister();
  lVar3 = *(longlong *)(lVar3 + 0x10);
  iVar1 = (int)pUVar2->_padding_;
  if ((*(int *)(lVar3 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar2->_padding_)) goto LAB_149c23e9a;
  lVar3 = *(longlong *)(this->_padding_ + 0x20);
  if (lVar3 != 0) {
    pUVar2 = Z_Construct_UClass_UPCGGraph_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_149c23e84;
  }
  lVar3 = 0;
LAB_149c23e84:
  return this->HiGenGridSize << ((byte)*(undefined4 *)(lVar3 + 0x68) & 0x1f);
}

// GetGridSize @ 149c23ec0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

uint __thiscall UPCGHiGenGridSizeSettings::GetGridSize(UPCGHiGenGridSizeSettings *this)

{
  uint uVar1;
  EPCGHiGenGrid EVar2;
  
  if (this->HiGenGridSize == Unbounded) {
    uVar1 = PCGHiGenGrid::UnboundedGridSize();
    return uVar1;
  }
  EVar2 = GetGrid(this);
  uVar1 = PCGHiGenGrid::GridToGridSize(EVar2);
  return uVar1;
}

// GetPrivateStaticClass @ 149c25490

UClass * __cdecl UPCGHiGenGridSizeSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGHiGenGridSizeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGHiGenGridSizeSettings",
               &Z_Registration_Info_UClass_UPCGHiGenGridSizeSettings.InnerSingleton,
               StaticRegisterNativesUPCGHiGenGridSizeSettings,0xd0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGHiGenGridSizeSettings>,
               InternalVTableHelperCtorCaller<UPCGHiGenGridSizeSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGHiGenGridSizeSettings.InnerSingleton;
}

// HasDynamicPins @ 149c273a0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall UPCGHiGenGridSizeSettings::HasDynamicPins(UPCGHiGenGridSizeSettings *this)

{
  return true;
}

// HasExecutionDependencyPin @ 149c27440

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

bool __thiscall
UPCGHiGenGridSizeSettings::HasExecutionDependencyPin(UPCGHiGenGridSizeSettings *this)

{
  return this->bShowInputPin;
}

// InputPinProperties @ 149c2be10

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGHiGenGridSizeSettings::InputPinProperties
          (UPCGHiGenGridSizeSettings *this,
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
  if (this->bShowInputPin != false) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar3 = FText::GetEmpty();
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
    pFVar5 = FPCGPinProperties::FPCGPinProperties
                       ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                        &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
    pFVar5->PinStatus = Required;
  }
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c2deb0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGHiGenGridSizeSettings::OutputPinProperties
          (UPCGHiGenGridSizeSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGPinProperties *pFVar5;
  FPCGDataTypeIdentifier local_38;
  FPCGDataTypeIdentifier local_20;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (this->bShowInputPin == false) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar3 = FText::GetEmpty();
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_38,Any);
    pFVar5 = FPCGPinProperties::FPCGPinProperties
                       ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                        &PCGPinConstants::DefaultExecutionDependencyLabel,pFVar4,true,true,pFVar3);
    pFVar5->Usage = DependencyOnly;
  }
  else {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar3 = FText::GetEmpty();
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_38,Any);
    FPCGPinProperties::FPCGPinProperties
              ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
               &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_38,L"PCGHiGenGridSizeElement",L"VolumeOutputPinTooltip",
                      L"The volume of the current grid cell.");
  iVar2 = __return_storage_ptr__->ArrayNum;
  if (iVar2 == __return_storage_ptr__->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_20,Spatial);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGHiGenGridSizeConstants::CellVolumeOutputLabel,pFVar4,true,true,pFVar3);
  if (local_38.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    (**(code **)(*(longlong *)local_38.Ids.AllocatorInstance.Data + 0x10))();
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGHiGenGridSizeSettings @ 149c35410

void __cdecl UPCGHiGenGridSizeSettings::StaticRegisterNativesUPCGHiGenGridSizeSettings(void)

{
  return;
}

