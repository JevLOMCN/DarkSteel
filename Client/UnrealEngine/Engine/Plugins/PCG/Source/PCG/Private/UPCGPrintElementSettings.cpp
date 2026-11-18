// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149b9e680

UClass * __cdecl UPCGPrintElementSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPrintElementSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPrintElementSettings",
               &Z_Registration_Info_UClass_UPCGPrintElementSettings.InnerSingleton,
               StaticRegisterNativesUPCGPrintElementSettings,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGPrintElementSettings>,
               InternalVTableHelperCtorCaller<UPCGPrintElementSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPrintElementSettings.InnerSingleton;
}

// UPCGPrintElementSettings @ 149be7ce0

UPCGPrintElementSettings * __thiscall
UPCGPrintElementSettings::UPCGPrintElementSettings
          (UPCGPrintElementSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->Verbosity = Log;
  this->_padding_ = (longlong)&___7UPCGPrintElementSettings__6B_;
  (this->PrintString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrintString).Data.ArrayNum = 0;
  (this->PrintString).Data.ArrayMax = 0;
  (this->CustomPrefix).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomPrefix).Data.ArrayNum = 0;
  (this->CustomPrefix).Data.ArrayMax = 0;
  this->bDisplayOnNode = false;
  this->bPrintPerComponent = true;
  this->bPrefixWithOwner = false;
  this->bPrefixWithComponent = false;
  this->bPrefixWithGraph = true;
  this->bPrefixWithNode = true;
  this->bEnablePrint = true;
  return this;
}

// UPCGPrintElementSettings @ 149be7d50

UPCGPrintElementSettings * __thiscall
UPCGPrintElementSettings::UPCGPrintElementSettings
          (UPCGPrintElementSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->Verbosity = Log;
  this->_padding_ = (longlong)&___7UPCGPrintElementSettings__6B_;
  (this->PrintString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrintString).Data.ArrayNum = 0;
  (this->PrintString).Data.ArrayMax = 0;
  (this->CustomPrefix).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomPrefix).Data.ArrayNum = 0;
  (this->CustomPrefix).Data.ArrayMax = 0;
  this->bDisplayOnNode = false;
  this->bPrintPerComponent = true;
  this->bPrefixWithOwner = false;
  this->bPrefixWithComponent = false;
  this->bPrefixWithGraph = true;
  this->bPrefixWithNode = true;
  this->bEnablePrint = true;
  return this;
}

// ~UPCGPrintElementSettings @ 149bea030

void __thiscall UPCGPrintElementSettings::~UPCGPrintElementSettings(UPCGPrintElementSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGPrintElementSettings__6B_;
  pFVar1 = (this->CustomPrefix).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PrintString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c05ce0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGPrintElementSettings::CreateElement
          (UPCGPrintElementSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         &___7__TIntrusiveReferenceController_VFPCGPrintElement___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FPCGPrintElement__6B_;
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

// GetPrivateStaticClass @ 149c265d0

UClass * __cdecl UPCGPrintElementSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPrintElementSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPrintElementSettings",
               &Z_Registration_Info_UClass_UPCGPrintElementSettings.InnerSingleton,
               StaticRegisterNativesUPCGPrintElementSettings,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGPrintElementSettings>,
               InternalVTableHelperCtorCaller<UPCGPrintElementSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPrintElementSettings.InnerSingleton;
}

// HasDynamicPins @ 149c273b0

bool __thiscall UPCGPrintElementSettings::HasDynamicPins(UPCGPrintElementSettings *this)

{
  return true;
}

// InputPinProperties @ 149c2cad0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGPrintElementSettings::InputPinProperties
          (UPCGPrintElementSettings *this,
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
             &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c2eb90

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGPrintElementSettings::OutputPinProperties
          (UPCGPrintElementSettings *this,
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

// StaticRegisterNativesUPCGPrintElementSettings @ 149c355b0

void __cdecl UPCGPrintElementSettings::StaticRegisterNativesUPCGPrintElementSettings(void)

{
  return;
}

