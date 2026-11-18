// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 11

// StaticClass @ 149b9c7b0

UClass * __cdecl UPCGOuterIntersectionSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGOuterIntersectionSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGOuterIntersectionSettings",
               &Z_Registration_Info_UClass_UPCGOuterIntersectionSettings.InnerSingleton,
               StaticRegisterNativesUPCGOuterIntersectionSettings,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGOuterIntersectionSettings>,
               InternalVTableHelperCtorCaller<UPCGOuterIntersectionSettings>,local_res8,
               UPCGSettingsWithDynamicInputs::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGOuterIntersectionSettings.InnerSingleton;
}

// UPCGOuterIntersectionSettings @ 149be7400

UPCGOuterIntersectionSettings * __thiscall
UPCGOuterIntersectionSettings::UPCGOuterIntersectionSettings
          (UPCGOuterIntersectionSettings *this,FVTableHelper *param_1)

{
  UPCGSettingsWithDynamicInputs::UPCGSettingsWithDynamicInputs
            ((UPCGSettingsWithDynamicInputs *)this,param_1);
  this->DensityFunction = Multiply;
  this->bIgnorePinsWithNoInput = false;
  this->_padding_ = (longlong)&___7UPCGOuterIntersectionSettings__6B_;
  this->bKeepZeroDensityPoints = false;
  return this;
}

// UPCGOuterIntersectionSettings @ 149be7440

UPCGOuterIntersectionSettings * __thiscall
UPCGOuterIntersectionSettings::UPCGOuterIntersectionSettings
          (UPCGOuterIntersectionSettings *this,FObjectInitializer *param_1)

{
  UPCGSettingsWithDynamicInputs::UPCGSettingsWithDynamicInputs
            ((UPCGSettingsWithDynamicInputs *)this,param_1);
  this->DensityFunction = Multiply;
  this->bIgnorePinsWithNoInput = false;
  this->_padding_ = (longlong)&___7UPCGOuterIntersectionSettings__6B_;
  this->bKeepZeroDensityPoints = false;
  return this;
}

// ~UPCGOuterIntersectionSettings @ 149be9d40

void __thiscall
UPCGOuterIntersectionSettings::~UPCGOuterIntersectionSettings(UPCGOuterIntersectionSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGOuterIntersectionSettings__6B_;
  UPCGSettingsWithDynamicInputs::~UPCGSettingsWithDynamicInputs
            ((UPCGSettingsWithDynamicInputs *)this);
  return;
}

// CreateElement @ 149c056e0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGOuterIntersectionSettings::CreateElement
          (UPCGOuterIntersectionSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGOuterIntersectionElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGOuterIntersectionElement__6B_;
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

// GetDynamicInputPinsBaseLabel @ 149c23df0

FName __thiscall
UPCGOuterIntersectionSettings::GetDynamicInputPinsBaseLabel(UPCGOuterIntersectionSettings *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = PCGIntersectionConstants::SecondaryLabel;
  return in_RDX;
}

// GetPrivateStaticClass @ 149c25fd0

UClass * __cdecl UPCGOuterIntersectionSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGOuterIntersectionSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGOuterIntersectionSettings",
               &Z_Registration_Info_UClass_UPCGOuterIntersectionSettings.InnerSingleton,
               StaticRegisterNativesUPCGOuterIntersectionSettings,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGOuterIntersectionSettings>,
               InternalVTableHelperCtorCaller<UPCGOuterIntersectionSettings>,local_res8,
               UPCGSettingsWithDynamicInputs::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGOuterIntersectionSettings.InnerSingleton;
}

// OnlyPassThroughOneEdgeWhenDisabled @ 149c2d870

bool __thiscall
UPCGOuterIntersectionSettings::OnlyPassThroughOneEdgeWhenDisabled
          (UPCGOuterIntersectionSettings *this)

{
  return false;
}

// OutputPinProperties @ 149c2e850

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGOuterIntersectionSettings::OutputPinProperties
          (UPCGOuterIntersectionSettings *this,
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

// StaticInputPinProperties @ 149c351c0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGOuterIntersectionSettings::StaticInputPinProperties
          (UPCGOuterIntersectionSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGPinProperties *pFVar5;
  FString *pFVar6;
  FString *pFVar7;
  FName *pFVar8;
  FName local_res10;
  FName local_res18;
  FString local_68;
  FString local_58;
  FPCGDataTypeIdentifier local_48;
  FPCGDataTypeIdentifier local_30;
  
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_48,Spatial);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGIntersectionConstants::PrimaryLabel,pFVar4,true,true,pFVar3);
  pFVar5->PinStatus = Required;
  pFVar6 = ::FString::FString((FString *)&local_48,L"1");
  pFVar7 = ::FName::ToString(&PCGIntersectionConstants::SecondaryLabel,&local_58);
  ::FString::ConcatFF(&local_68,pFVar7,pFVar6);
  iVar2 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  pFVar8 = ::FName::FName(&local_res18,iVar2,(wchar_t *)local_68.Data.AllocatorInstance.Data,
                          FNAME_Add);
  local_res10 = *pFVar8;
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_30,Spatial);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),&local_res10,pFVar4,true,true,
             pFVar3);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Ids.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGOuterIntersectionSettings @ 149c35500

void __cdecl UPCGOuterIntersectionSettings::StaticRegisterNativesUPCGOuterIntersectionSettings(void)

{
  return;
}

