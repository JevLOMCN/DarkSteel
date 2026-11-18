// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 12

// StaticClass @ 149c39850

UClass * __cdecl UPCGGetLandscapeSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetLandscapeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetLandscapeSettings",
               &Z_Registration_Info_UClass_UPCGGetLandscapeSettings.InnerSingleton,
               StaticRegisterNativesUPCGGetLandscapeSettings,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGGetLandscapeSettings>,
               InternalVTableHelperCtorCaller<UPCGGetLandscapeSettings>,local_res8,
               UPCGDataFromActorSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetLandscapeSettings.InnerSingleton;
}

// UPCGGetLandscapeSettings @ 149c4b0d0

UPCGGetLandscapeSettings * __thiscall
UPCGGetLandscapeSettings::UPCGGetLandscapeSettings
          (UPCGGetLandscapeSettings *this,FVTableHelper *param_1)

{
  UPCGDataFromActorSettings::UPCGDataFromActorSettings((UPCGDataFromActorSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGGetLandscapeSettings__6B_;
  (this->SamplingProperties).bGetHeightOnly = false;
  (this->SamplingProperties).bGetLayerWeights = true;
  (this->SamplingProperties).bGetActorReference = false;
  (this->SamplingProperties).bGetPhysicalMaterial = false;
  (this->SamplingProperties).bGetComponentCoordinates = false;
  (this->SamplingProperties).bSampleVirtualTextures = true;
  (this->SamplingProperties).bSampleVirtualTextureNormals = false;
  return this;
}

// UPCGGetLandscapeSettings @ 149c4b120

UPCGGetLandscapeSettings * __thiscall
UPCGGetLandscapeSettings::UPCGGetLandscapeSettings(UPCGGetLandscapeSettings *this)

{
  bool bVar1;
  FObjectInitializer *pFVar2;
  UClass *pUVar3;
  
  pFVar2 = FObjectInitializer::Get();
  UPCGDataFromActorSettings::UPCGDataFromActorSettings((UPCGDataFromActorSettings *)this,pFVar2);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UPCGGetLandscapeSettings__6B_;
  (this->SamplingProperties).bGetHeightOnly = false;
  (this->SamplingProperties).bGetLayerWeights = true;
  (this->SamplingProperties).bGetActorReference = false;
  (this->SamplingProperties).bGetPhysicalMaterial = false;
  (this->SamplingProperties).bGetComponentCoordinates = false;
  (this->SamplingProperties).bSampleVirtualTextures = true;
  (this->SamplingProperties).bSampleVirtualTextureNormals = false;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 2) = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 5) = 0;
  *(undefined1 *)&this->_padding_ = 1;
  bVar1 = PCGHelpers::IsNewObjectAndNotDefault((UObject *)this,false);
  if (bVar1) {
    *(undefined2 *)&this->_padding_ = 0x103;
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 2;
    pUVar3 = Z_Construct_UClass_ALandscapeProxy_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    this->_padding_ = (longlong)pUVar3;
    (this->SamplingProperties).bSampleVirtualTextures = false;
  }
  return this;
}

// ~UPCGGetLandscapeSettings @ 149c4d8b0

void __thiscall UPCGGetLandscapeSettings::~UPCGGetLandscapeSettings(UPCGGetLandscapeSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGGetLandscapeSettings__6B_;
  UPCGDataFromActorSettings::~UPCGDataFromActorSettings((UPCGDataFromActorSettings *)this);
  return;
}

// CreateElement @ 149c60080

TSharedPtr<IPCGElement,1> * __thiscall
UPCGGetLandscapeSettings::CreateElement
          (UPCGGetLandscapeSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGGetLandscapeDataElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGGetLandscapeDataElement__6B_;
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

// GetAdditionalTitleInformation @ 149c760c0

FString * __thiscall
UPCGGetLandscapeSettings::GetAdditionalTitleInformation
          (UPCGGetLandscapeSettings *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetDataFilter @ 149c76500

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGGetLandscapeSettings::GetDataFilter(UPCGGetLandscapeSettings *this)

{
  return Landscape;
}

// GetDefaultActorSelectorClass @ 149c76560

TSubclassOf<AActor> __thiscall
UPCGGetLandscapeSettings::GetDefaultActorSelectorClass(UPCGGetLandscapeSettings *this)

{
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  
  pUVar1 = Z_Construct_UClass_ALandscapeProxy_NoRegister();
  *(UClass **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return (TSubclassOf<AActor>)in_RDX.field0_0x0;
}

// GetPrivateStaticClass @ 149c77df0

UClass * __cdecl UPCGGetLandscapeSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetLandscapeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGetLandscapeSettings",
               &Z_Registration_Info_UClass_UPCGGetLandscapeSettings.InnerSingleton,
               StaticRegisterNativesUPCGGetLandscapeSettings,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGGetLandscapeSettings>,
               InternalVTableHelperCtorCaller<UPCGGetLandscapeSettings>,local_res8,
               UPCGDataFromActorSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetLandscapeSettings.InnerSingleton;
}

// OutputPinProperties @ 149c80d40

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGetLandscapeSettings::OutputPinProperties
          (UPCGGetLandscapeSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Landscape);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,false,pFVar3);
  return __return_storage_ptr__;
}

// PostLoad @ 149c81be0

void __thiscall UPCGGetLandscapeSettings::PostLoad(UPCGGetLandscapeSettings *this)

{
  longlong *plVar1;
  undefined1 auStackX_8 [8];
  
  UPCGSettings::PostLoad((UPCGSettings *)this);
  if (*(char *)((longlong)&this->_padding_ + 4) != '\x02') {
    plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x4f8))(this,auStackX_8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)*plVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)*plVar1);
    }
    this->_padding_ = *plVar1;
  }
  return;
}

// StaticRegisterNativesUPCGGetLandscapeSettings @ 149c91f10

void __cdecl UPCGGetLandscapeSettings::StaticRegisterNativesUPCGGetLandscapeSettings(void)

{
  return;
}

