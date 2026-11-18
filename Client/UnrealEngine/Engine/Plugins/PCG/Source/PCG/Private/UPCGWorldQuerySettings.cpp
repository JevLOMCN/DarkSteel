// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149c391f0

UClass * __cdecl UPCGWorldQuerySettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGWorldQuerySettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGWorldQuerySettings",
               &Z_Registration_Info_UClass_UPCGWorldQuerySettings.InnerSingleton,
               StaticRegisterNativesUPCGWorldQuerySettings,0x198,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGWorldQuerySettings>,
               InternalVTableHelperCtorCaller<UPCGWorldQuerySettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGWorldQuerySettings.InnerSingleton;
}

// UPCGWorldQuerySettings @ 149c4cb20

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

UPCGWorldQuerySettings * __thiscall
UPCGWorldQuerySettings::UPCGWorldQuerySettings(UPCGWorldQuerySettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGWorldQuerySettings__6B_;
  FPCGWorldCommonQueryParams::FPCGWorldCommonQueryParams
            ((FPCGWorldCommonQueryParams *)&this->QueryParams);
  (this->QueryParams).bSearchForOverlap = true;
  return this;
}

// UPCGWorldQuerySettings @ 149c4cb70

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

UPCGWorldQuerySettings * __thiscall
UPCGWorldQuerySettings::UPCGWorldQuerySettings
          (UPCGWorldQuerySettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGWorldQuerySettings__6B_;
  FPCGWorldCommonQueryParams::FPCGWorldCommonQueryParams
            ((FPCGWorldCommonQueryParams *)&this->QueryParams);
  (this->QueryParams).bSearchForOverlap = true;
  return this;
}

// ~UPCGWorldQuerySettings @ 149c4df60

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

void __thiscall UPCGWorldQuerySettings::~UPCGWorldQuerySettings(UPCGWorldQuerySettings *this)

{
  this->_padding_ = (longlong)&___7UPCGWorldQuerySettings__6B_;
  FPCGWorldCommonQueryParams::~FPCGWorldCommonQueryParams
            ((FPCGWorldCommonQueryParams *)&this->QueryParams);
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c60e00

TSharedPtr<IPCGElement,1> * __thiscall
UPCGWorldQuerySettings::CreateElement
          (UPCGWorldQuerySettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGWorldVolumetricQueryElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGWorldVolumetricQueryElement__6B_;
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

// GetPrivateStaticClass @ 149c790b0

UClass * __cdecl UPCGWorldQuerySettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGWorldQuerySettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGWorldQuerySettings",
               &Z_Registration_Info_UClass_UPCGWorldQuerySettings.InnerSingleton,
               StaticRegisterNativesUPCGWorldQuerySettings,0x198,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGWorldQuerySettings>,
               InternalVTableHelperCtorCaller<UPCGWorldQuerySettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGWorldQuerySettings.InnerSingleton;
}

// InputPinProperties @ 149c80460

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGWorldQuerySettings::InputPinProperties
          (UPCGWorldQuerySettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FPCGWorldCommonQueryParams::AddFilterPinIfNeeded
            ((FPCGWorldCommonQueryParams *)&this->QueryParams,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c81a00

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGWorldQuerySettings::OutputPinProperties
          (UPCGWorldQuerySettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Volume);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGWorldQuerySettings @ 149c92100

void __cdecl UPCGWorldQuerySettings::StaticRegisterNativesUPCGWorldQuerySettings(void)

{
  return;
}

