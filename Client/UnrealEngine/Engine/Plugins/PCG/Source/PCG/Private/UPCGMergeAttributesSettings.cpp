// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149b9c470

UClass * __cdecl UPCGMergeAttributesSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMergeAttributesSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMergeAttributesSettings",
               &Z_Registration_Info_UClass_UPCGMergeAttributesSettings.InnerSingleton,
               StaticRegisterNativesUPCGMergeAttributesSettings,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMergeAttributesSettings>,
               InternalVTableHelperCtorCaller<UPCGMergeAttributesSettings>,local_res8,
               UPCGSettingsWithDynamicInputs::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMergeAttributesSettings.InnerSingleton;
}

// UPCGMergeAttributesSettings @ 149be7020

UPCGMergeAttributesSettings * __thiscall
UPCGMergeAttributesSettings::UPCGMergeAttributesSettings
          (UPCGMergeAttributesSettings *this,FVTableHelper *param_1)

{
  UPCGSettingsWithDynamicInputs::UPCGSettingsWithDynamicInputs
            ((UPCGSettingsWithDynamicInputs *)this,param_1);
  *(undefined ***)this = &___7UPCGMergeAttributesSettings__6B_;
  return this;
}

// UPCGMergeAttributesSettings @ 149be7050

UPCGMergeAttributesSettings * __thiscall
UPCGMergeAttributesSettings::UPCGMergeAttributesSettings
          (UPCGMergeAttributesSettings *this,FObjectInitializer *param_1)

{
  UPCGSettingsWithDynamicInputs::UPCGSettingsWithDynamicInputs
            ((UPCGSettingsWithDynamicInputs *)this,param_1);
  *(undefined ***)this = &___7UPCGMergeAttributesSettings__6B_;
  return this;
}

// ~UPCGMergeAttributesSettings @ 149be9c40

void __thiscall
UPCGMergeAttributesSettings::~UPCGMergeAttributesSettings(UPCGMergeAttributesSettings *this)

{
  *(undefined ***)this = &___7UPCGMergeAttributesSettings__6B_;
  UPCGSettingsWithDynamicInputs::~UPCGSettingsWithDynamicInputs
            ((UPCGSettingsWithDynamicInputs *)this);
  return;
}

// CreateElement @ 149c05320

TSharedPtr<IPCGElement,1> * __thiscall
UPCGMergeAttributesSettings::CreateElement
          (UPCGMergeAttributesSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGMergeAttributesElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGMergeAttributesElement__6B_;
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

// GetDynamicInputPinsBaseLabel @ 149c23db0

FName __thiscall
UPCGMergeAttributesSettings::GetDynamicInputPinsBaseLabel(UPCGMergeAttributesSettings *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = PCGPinConstants::DefaultInputLabel;
  return in_RDX;
}

// GetPrivateStaticClass @ 149c259d0

UClass * __cdecl UPCGMergeAttributesSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMergeAttributesSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMergeAttributesSettings",
               &Z_Registration_Info_UClass_UPCGMergeAttributesSettings.InnerSingleton,
               StaticRegisterNativesUPCGMergeAttributesSettings,0xd8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMergeAttributesSettings>,
               InternalVTableHelperCtorCaller<UPCGMergeAttributesSettings>,local_res8,
               UPCGSettingsWithDynamicInputs::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMergeAttributesSettings.InnerSingleton;
}

// OutputPinProperties @ 149c2e560

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGMergeAttributesSettings::OutputPinProperties
          (UPCGMergeAttributesSettings *this,
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
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,false,pFVar3);
  return __return_storage_ptr__;
}

// StaticInputPinProperties @ 149c350a0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGMergeAttributesSettings::StaticInputPinProperties
          (UPCGMergeAttributesSettings *this,
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

// StaticRegisterNativesUPCGMergeAttributesSettings @ 149c35480

void __cdecl UPCGMergeAttributesSettings::StaticRegisterNativesUPCGMergeAttributesSettings(void)

{
  return;
}

