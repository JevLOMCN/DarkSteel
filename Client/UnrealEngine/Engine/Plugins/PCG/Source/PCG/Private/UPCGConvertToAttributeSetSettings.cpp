// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149a16140

UClass * __cdecl UPCGConvertToAttributeSetSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGConvertToAttributeSetSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGConvertToAttributeSetSettings",
               &Z_Registration_Info_UClass_UPCGConvertToAttributeSetSettings.InnerSingleton,
               StaticRegisterNativesUPCGConvertToAttributeSetSettings,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGConvertToAttributeSetSettings>,
               InternalVTableHelperCtorCaller<UPCGConvertToAttributeSetSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGConvertToAttributeSetSettings.InnerSingleton;
}

// UPCGConvertToAttributeSetSettings @ 149ad1b70

UPCGConvertToAttributeSetSettings * __thiscall
UPCGConvertToAttributeSetSettings::UPCGConvertToAttributeSetSettings
          (UPCGConvertToAttributeSetSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGConvertToAttributeSetSettings__6B_;
  *(undefined8 *)&this->PropertiesToConvert = 0;
  *(undefined8 *)&(this->PropertiesToConvert).field_0x8 = 0;
  *(undefined8 *)&(this->PropertiesToConvert).field_0x20 = 0;
  *(undefined4 *)&(this->PropertiesToConvert).field_0x28 = 0;
  *(undefined4 *)&(this->PropertiesToConvert).field_0x2c = 0x80;
  *(undefined4 *)&(this->PropertiesToConvert).field_0x34 = 0;
  *(undefined4 *)&(this->PropertiesToConvert).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PropertiesToConvert).field_0x40 = 0;
  *(undefined4 *)&(this->PropertiesToConvert).field_0x48 = 0;
  this->bOverrideExistingAttributes = false;
  return this;
}

// UPCGConvertToAttributeSetSettings @ 149ad1bf0

UPCGConvertToAttributeSetSettings * __thiscall
UPCGConvertToAttributeSetSettings::UPCGConvertToAttributeSetSettings
          (UPCGConvertToAttributeSetSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGConvertToAttributeSetSettings__6B_;
  *(undefined8 *)&this->PropertiesToConvert = 0;
  *(undefined8 *)&(this->PropertiesToConvert).field_0x8 = 0;
  *(undefined8 *)&(this->PropertiesToConvert).field_0x20 = 0;
  *(undefined4 *)&(this->PropertiesToConvert).field_0x28 = 0;
  *(undefined4 *)&(this->PropertiesToConvert).field_0x2c = 0x80;
  *(undefined4 *)&(this->PropertiesToConvert).field_0x34 = 0;
  *(undefined4 *)&(this->PropertiesToConvert).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PropertiesToConvert).field_0x40 = 0;
  *(undefined4 *)&(this->PropertiesToConvert).field_0x48 = 0;
  this->bOverrideExistingAttributes = false;
  return this;
}

// ~UPCGConvertToAttributeSetSettings @ 149ad3720

void __thiscall
UPCGConvertToAttributeSetSettings::~UPCGConvertToAttributeSetSettings
          (UPCGConvertToAttributeSetSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGConvertToAttributeSetSettings__6B_;
  *(undefined4 *)&(this->PropertiesToConvert).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PropertiesToConvert).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FPCGAttributePropertyInputSelector,FPCGAttributePropertyOutputSelector>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPCGAttributePropertyInputSelector,FPCGAttributePropertyOutputSelector>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPCGAttributePropertyInputSelector,FPCGAttributePropertyOutputSelector>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PropertiesToConvert);
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149afcbf0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGConvertToAttributeSetSettings::CreateElement
          (UPCGConvertToAttributeSetSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__
          )

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
         ___7__TIntrusiveReferenceController_VFPCGConvertToAttributeSetElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGConvertToAttributeSetElement__6B_;
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

// GetPrivateStaticClass @ 149b18030

UClass * __cdecl UPCGConvertToAttributeSetSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGConvertToAttributeSetSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGConvertToAttributeSetSettings",
               &Z_Registration_Info_UClass_UPCGConvertToAttributeSetSettings.InnerSingleton,
               StaticRegisterNativesUPCGConvertToAttributeSetSettings,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGConvertToAttributeSetSettings>,
               InternalVTableHelperCtorCaller<UPCGConvertToAttributeSetSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGConvertToAttributeSetSettings.InnerSingleton;
}

// HasExecutionDependencyPin @ 149b1a760

bool __thiscall
UPCGConvertToAttributeSetSettings::HasExecutionDependencyPin
          (UPCGConvertToAttributeSetSettings *this)

{
  return false;
}

// InputPinProperties @ 149b1c820

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGConvertToAttributeSetSettings::InputPinProperties
          (UPCGConvertToAttributeSetSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointInputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b204b0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGConvertToAttributeSetSettings::OutputPinProperties
          (UPCGConvertToAttributeSetSettings *this,
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
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGConvertToAttributeSetSettings @ 149b2cfa0

void __cdecl
UPCGConvertToAttributeSetSettings::StaticRegisterNativesUPCGConvertToAttributeSetSettings(void)

{
  return;
}

