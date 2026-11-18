// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149b9cfa0

UClass * __cdecl UPCGMergeSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMergeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMergeSettings",
               &Z_Registration_Info_UClass_UPCGMergeSettings.InnerSingleton,
               StaticRegisterNativesUPCGMergeSettings,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGMergeSettings>,
               InternalVTableHelperCtorCaller<UPCGMergeSettings>,local_res8,
               UPCGSettingsWithDynamicInputs::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMergeSettings.InnerSingleton;
}

// UPCGMergeSettings @ 149be7080

UPCGMergeSettings * __thiscall
UPCGMergeSettings::UPCGMergeSettings(UPCGMergeSettings *this,FVTableHelper *param_1)

{
  UPCGSettingsWithDynamicInputs::UPCGSettingsWithDynamicInputs
            ((UPCGSettingsWithDynamicInputs *)this,param_1);
  this->bMergeMetadata = true;
  this->_padding_ = (longlong)&___7UPCGMergeSettings__6B_;
  return this;
}

// UPCGMergeSettings @ 149be70b0

UPCGMergeSettings * __thiscall
UPCGMergeSettings::UPCGMergeSettings(UPCGMergeSettings *this,FObjectInitializer *param_1)

{
  UPCGSettingsWithDynamicInputs::UPCGSettingsWithDynamicInputs
            ((UPCGSettingsWithDynamicInputs *)this,param_1);
  this->bMergeMetadata = true;
  this->_padding_ = (longlong)&___7UPCGMergeSettings__6B_;
  return this;
}

// ~UPCGMergeSettings @ 149be9c60

void __thiscall UPCGMergeSettings::~UPCGMergeSettings(UPCGMergeSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGMergeSettings__6B_;
  UPCGSettingsWithDynamicInputs::~UPCGSettingsWithDynamicInputs
            ((UPCGSettingsWithDynamicInputs *)this);
  return;
}

// CreateElement @ 149c053e0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGMergeSettings::CreateElement
          (UPCGMergeSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         &___7__TIntrusiveReferenceController_VFPCGMergeElement___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FPCGMergeElement__6B_;
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

// GetDynamicInputPinsBaseLabel @ 149c23dd0

FName __thiscall UPCGMergeSettings::GetDynamicInputPinsBaseLabel(UPCGMergeSettings *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = PCGPinConstants::DefaultInputLabel;
  return in_RDX;
}

// GetPrivateStaticClass @ 149c25a90

UClass * __cdecl UPCGMergeSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMergeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMergeSettings",
               &Z_Registration_Info_UClass_UPCGMergeSettings.InnerSingleton,
               StaticRegisterNativesUPCGMergeSettings,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGMergeSettings>,
               InternalVTableHelperCtorCaller<UPCGMergeSettings>,local_res8,
               UPCGSettingsWithDynamicInputs::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMergeSettings.InnerSingleton;
}

// OutputPinProperties @ 149c2e5f0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGMergeSettings::OutputPinProperties
          (UPCGMergeSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,false,false,pFVar3);
  return __return_storage_ptr__;
}

// StaticInputPinProperties @ 149c35130

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGMergeSettings::StaticInputPinProperties
          (UPCGMergeSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGMergeSettings @ 149c35490

void __cdecl UPCGMergeSettings::StaticRegisterNativesUPCGMergeSettings(void)

{
  return;
}

