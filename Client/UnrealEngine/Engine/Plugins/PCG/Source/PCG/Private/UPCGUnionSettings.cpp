// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149c3b630

UClass * __cdecl UPCGUnionSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGUnionSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGUnionSettings",
               &Z_Registration_Info_UClass_UPCGUnionSettings.InnerSingleton,
               StaticRegisterNativesUPCGUnionSettings,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGUnionSettings>,
               InternalVTableHelperCtorCaller<UPCGUnionSettings>,local_res8,
               UPCGSettingsWithDynamicInputs::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGUnionSettings.InnerSingleton;
}

// UPCGUnionSettings @ 149c4c820

UPCGUnionSettings * __thiscall
UPCGUnionSettings::UPCGUnionSettings(UPCGUnionSettings *this,FVTableHelper *param_1)

{
  UPCGSettingsWithDynamicInputs::UPCGSettingsWithDynamicInputs
            ((UPCGSettingsWithDynamicInputs *)this,param_1);
  this->Type = LeftToRightPriority;
  this->DensityFunction = Maximum;
  this->_padding_ = (longlong)&___7UPCGUnionSettings__6B_;
  return this;
}

// UPCGUnionSettings @ 149c4c850

UPCGUnionSettings * __thiscall
UPCGUnionSettings::UPCGUnionSettings(UPCGUnionSettings *this,FObjectInitializer *param_1)

{
  UPCGSettingsWithDynamicInputs::UPCGSettingsWithDynamicInputs
            ((UPCGSettingsWithDynamicInputs *)this,param_1);
  this->Type = LeftToRightPriority;
  this->DensityFunction = Maximum;
  this->_padding_ = (longlong)&___7UPCGUnionSettings__6B_;
  return this;
}

// ~UPCGUnionSettings @ 149c4dea0

void __thiscall UPCGUnionSettings::~UPCGUnionSettings(UPCGUnionSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGUnionSettings__6B_;
  UPCGSettingsWithDynamicInputs::~UPCGSettingsWithDynamicInputs
            ((UPCGSettingsWithDynamicInputs *)this);
  return;
}

// CreateElement @ 149c60b00

TSharedPtr<IPCGElement,1> * __thiscall
UPCGUnionSettings::CreateElement
          (UPCGUnionSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         &___7__TIntrusiveReferenceController_VFPCGUnionElement___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FPCGUnionElement__6B_;
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

// GetDynamicInputPinsBaseLabel @ 149c76b00

FName __thiscall UPCGUnionSettings::GetDynamicInputPinsBaseLabel(UPCGUnionSettings *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = PCGPinConstants::DefaultInputLabel;
  return in_RDX;
}

// GetPrivateStaticClass @ 149c78db0

UClass * __cdecl UPCGUnionSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGUnionSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGUnionSettings",
               &Z_Registration_Info_UClass_UPCGUnionSettings.InnerSingleton,
               StaticRegisterNativesUPCGUnionSettings,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGUnionSettings>,
               InternalVTableHelperCtorCaller<UPCGUnionSettings>,local_res8,
               UPCGSettingsWithDynamicInputs::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGUnionSettings.InnerSingleton;
}

// OutputPinProperties @ 149c817c0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGUnionSettings::OutputPinProperties
          (UPCGUnionSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Spatial);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// StaticInputPinProperties @ 149c91e50

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGUnionSettings::StaticInputPinProperties
          (UPCGUnionSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Spatial);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGUnionSettings @ 149c920c0

void __cdecl UPCGUnionSettings::StaticRegisterNativesUPCGUnionSettings(void)

{
  return;
}

