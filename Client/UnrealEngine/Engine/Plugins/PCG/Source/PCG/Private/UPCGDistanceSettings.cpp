// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149b32ac0

UClass * __cdecl UPCGDistanceSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDistanceSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDistanceSettings",
               &Z_Registration_Info_UClass_UPCGDistanceSettings.InnerSingleton,
               StaticRegisterNativesUPCGDistanceSettings,0x130,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGDistanceSettings>,
               InternalVTableHelperCtorCaller<UPCGDistanceSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDistanceSettings.InnerSingleton;
}

// UPCGDistanceSettings @ 149b56fc0

UPCGDistanceSettings * __thiscall
UPCGDistanceSettings::UPCGDistanceSettings(UPCGDistanceSettings *this,FVTableHelper *param_1)

{
  TArrayView<FString_const_,int> local_18;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bOutputToAttribute = true;
  local_18.DataPtr = (FString *)0x0;
  this->_padding_ = (longlong)&___7UPCGDistanceSettings__6B_;
  local_18.ArrayNum = 0;
  FPCGAttributePropertySelector::CreateAttributeSelector<FPCGAttributePropertySelector>
            (&this->OutputAttribute,PCGDistanceConstants::DefaultOutputAttributeName,(FName)0x0,
             &local_18);
  this->bOutputDistanceVector = false;
  this->bSetDensity = false;
  this->MaximumDistance = 20000.0;
  this->SourceShape = SphereBounds;
  this->TargetShape = SphereBounds;
  this->bCheckSourceAgainstRespectiveTarget = false;
  return this;
}

// UPCGDistanceSettings @ 149b57050

UPCGDistanceSettings * __thiscall
UPCGDistanceSettings::UPCGDistanceSettings(UPCGDistanceSettings *this,FObjectInitializer *param_1)

{
  TArrayView<FString_const_,int> local_18;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bOutputToAttribute = true;
  local_18.DataPtr = (FString *)0x0;
  this->_padding_ = (longlong)&___7UPCGDistanceSettings__6B_;
  local_18.ArrayNum = 0;
  FPCGAttributePropertySelector::CreateAttributeSelector<FPCGAttributePropertySelector>
            (&this->OutputAttribute,PCGDistanceConstants::DefaultOutputAttributeName,(FName)0x0,
             &local_18);
  this->bOutputDistanceVector = false;
  this->bSetDensity = false;
  this->MaximumDistance = 20000.0;
  this->SourceShape = SphereBounds;
  this->TargetShape = SphereBounds;
  this->bCheckSourceAgainstRespectiveTarget = false;
  return this;
}

// ~UPCGDistanceSettings @ 149b590e0

void __thiscall UPCGDistanceSettings::~UPCGDistanceSettings(UPCGDistanceSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGDistanceSettings__6B_;
  DestructItems<FString,int>
            ((FString *)(this->OutputAttribute).ExtraNames.AllocatorInstance.Data,
             (this->OutputAttribute).ExtraNames.ArrayNum);
  pFVar1 = (this->OutputAttribute).ExtraNames.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149b6b110

TSharedPtr<IPCGElement,1> * __thiscall
UPCGDistanceSettings::CreateElement
          (UPCGDistanceSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         &___7__TIntrusiveReferenceController_VFPCGDistanceElement___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FPCGDistanceElement__6B_;
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

// GetPrivateStaticClass @ 149b90e00

UClass * __cdecl UPCGDistanceSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDistanceSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDistanceSettings",
               &Z_Registration_Info_UClass_UPCGDistanceSettings.InnerSingleton,
               StaticRegisterNativesUPCGDistanceSettings,0x130,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGDistanceSettings>,
               InternalVTableHelperCtorCaller<UPCGDistanceSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDistanceSettings.InnerSingleton;
}

// InputPinProperties @ 149b92840

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGDistanceSettings::InputPinProperties
          (UPCGDistanceSettings *this,
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
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar3 = FText::GetEmpty();
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGDistance::SourceLabel,pFVar4,true,true,pFVar3);
  pFVar5->PinStatus = Required;
  iVar2 = __return_storage_ptr__->ArrayNum;
  if (iVar2 == __return_storage_ptr__->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar3 = FText::GetEmpty();
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGDistance::TargetLabel,pFVar4,true,true,pFVar3);
  if (this->bCheckSourceAgainstRespectiveTarget != false) {
    pFVar5->PinStatus = Required;
  }
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b946d0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGDistanceSettings::OutputPinProperties
          (UPCGDistanceSettings *this,
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
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// PostLoad @ 149b95a20

void __thiscall UPCGDistanceSettings::PostLoad(UPCGDistanceSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGDistanceSettings @ 149b98510

void __cdecl UPCGDistanceSettings::StaticRegisterNativesUPCGDistanceSettings(void)

{
  return;
}

