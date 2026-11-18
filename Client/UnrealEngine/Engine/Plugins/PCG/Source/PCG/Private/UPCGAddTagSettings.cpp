// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149a17600

UClass * __cdecl UPCGAddTagSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAddTagSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAddTagSettings",
               &Z_Registration_Info_UClass_UPCGAddTagSettings.InnerSingleton,
               StaticRegisterNativesUPCGAddTagSettings,0x100,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGAddTagSettings>,
               InternalVTableHelperCtorCaller<UPCGAddTagSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAddTagSettings.InnerSingleton;
}

// UPCGAddTagSettings @ 149ad01a0

UPCGAddTagSettings * __thiscall
UPCGAddTagSettings::UPCGAddTagSettings(UPCGAddTagSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGAddTagSettings__6B_;
  (this->TagsToAdd).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TagsToAdd).Data.ArrayNum = 0;
  (this->TagsToAdd).Data.ArrayMax = 0;
  (this->Prefix).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Prefix).Data.ArrayNum = 0;
  (this->Prefix).Data.ArrayMax = 0;
  (this->Suffix).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Suffix).Data.ArrayNum = 0;
  (this->Suffix).Data.ArrayMax = 0;
  this->bIgnoreTagValueParsing = false;
  this->bTokenizeOnWhiteSpace = false;
  return this;
}

// UPCGAddTagSettings @ 149ad0200

UPCGAddTagSettings * __thiscall
UPCGAddTagSettings::UPCGAddTagSettings(UPCGAddTagSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGAddTagSettings__6B_;
  (this->TagsToAdd).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TagsToAdd).Data.ArrayNum = 0;
  (this->TagsToAdd).Data.ArrayMax = 0;
  (this->Prefix).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Prefix).Data.ArrayNum = 0;
  (this->Prefix).Data.ArrayMax = 0;
  (this->Suffix).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Suffix).Data.ArrayNum = 0;
  (this->Suffix).Data.ArrayMax = 0;
  this->bIgnoreTagValueParsing = false;
  this->bTokenizeOnWhiteSpace = false;
  return this;
}

// ~UPCGAddTagSettings @ 149ad2db0

void __thiscall UPCGAddTagSettings::~UPCGAddTagSettings(UPCGAddTagSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGAddTagSettings__6B_;
  pFVar1 = (this->Suffix).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Prefix).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TagsToAdd).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149afbb70

TSharedPtr<IPCGElement,1> * __thiscall
UPCGAddTagSettings::CreateElement
          (UPCGAddTagSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         &___7__TIntrusiveReferenceController_VFPCGAddTagElement___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FPCGAddTagElement__6B_;
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

// GetPrivateStaticClass @ 149b16fb0

UClass * __cdecl UPCGAddTagSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAddTagSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAddTagSettings",
               &Z_Registration_Info_UClass_UPCGAddTagSettings.InnerSingleton,
               StaticRegisterNativesUPCGAddTagSettings,0x100,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGAddTagSettings>,
               InternalVTableHelperCtorCaller<UPCGAddTagSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAddTagSettings.InnerSingleton;
}

// HasDynamicPins @ 149b1a6c0

bool __thiscall UPCGAddTagSettings::HasDynamicPins(UPCGAddTagSettings *this)

{
  return true;
}

// OutputPinProperties @ 149b1fa60

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGAddTagSettings::OutputPinProperties
          (UPCGAddTagSettings *this,
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

// StaticRegisterNativesUPCGAddTagSettings @ 149b2ce40

void __cdecl UPCGAddTagSettings::StaticRegisterNativesUPCGAddTagSettings(void)

{
  return;
}

