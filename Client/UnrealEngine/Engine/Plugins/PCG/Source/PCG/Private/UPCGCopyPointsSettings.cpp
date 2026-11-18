// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149b2fe90

UClass * __cdecl UPCGCopyPointsSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCopyPointsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCopyPointsSettings",
               &Z_Registration_Info_UClass_UPCGCopyPointsSettings.InnerSingleton,
               StaticRegisterNativesUPCGCopyPointsSettings,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGCopyPointsSettings>,
               InternalVTableHelperCtorCaller<UPCGCopyPointsSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCopyPointsSettings.InnerSingleton;
}

// UPCGCopyPointsSettings @ 149b55a50

UPCGCopyPointsSettings * __thiscall
UPCGCopyPointsSettings::UPCGCopyPointsSettings(UPCGCopyPointsSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->RotationInheritance = Relative;
  this->bApplyTargetRotationToPositions = true;
  this->ScaleInheritance = Relative;
  this->bApplyTargetScaleToPositions = true;
  this->ColorInheritance = Relative;
  this->SeedInheritance = Relative;
  this->AttributeInheritance = SourceFirst;
  this->TagInheritance = Both;
  this->_padding_ = (longlong)&___7UPCGCopyPointsSettings__6B_;
  this->bCopyEachSourceOnEveryTarget = true;
  this->bMatchBasedOnAttribute = false;
  (this->MatchAttribute).ComparisonIndex = 0;
  (this->MatchAttribute).Number = 0;
  return this;
}

// UPCGCopyPointsSettings @ 149b55aa0

UPCGCopyPointsSettings * __thiscall
UPCGCopyPointsSettings::UPCGCopyPointsSettings
          (UPCGCopyPointsSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->RotationInheritance = Relative;
  this->bApplyTargetRotationToPositions = true;
  this->ScaleInheritance = Relative;
  this->bApplyTargetScaleToPositions = true;
  this->ColorInheritance = Relative;
  this->SeedInheritance = Relative;
  this->AttributeInheritance = SourceFirst;
  this->TagInheritance = Both;
  this->_padding_ = (longlong)&___7UPCGCopyPointsSettings__6B_;
  this->bCopyEachSourceOnEveryTarget = true;
  this->bMatchBasedOnAttribute = false;
  (this->MatchAttribute).ComparisonIndex = 0;
  (this->MatchAttribute).Number = 0;
  return this;
}

// ~UPCGCopyPointsSettings @ 149b58c10

void __thiscall UPCGCopyPointsSettings::~UPCGCopyPointsSettings(UPCGCopyPointsSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGCopyPointsSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149b6a210

TSharedPtr<IPCGElement,1> * __thiscall
UPCGCopyPointsSettings::CreateElement
          (UPCGCopyPointsSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGCopyPointsElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGCopyPointsElement__6B_;
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

// GetPrivateStaticClass @ 149b8ff00

UClass * __cdecl UPCGCopyPointsSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCopyPointsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCopyPointsSettings",
               &Z_Registration_Info_UClass_UPCGCopyPointsSettings.InnerSingleton,
               StaticRegisterNativesUPCGCopyPointsSettings,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGCopyPointsSettings>,
               InternalVTableHelperCtorCaller<UPCGCopyPointsSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCopyPointsSettings.InnerSingleton;
}

// InputPinProperties @ 149b920a0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGCopyPointsSettings::InputPinProperties
          (UPCGCopyPointsSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  int iVar3;
  FText *pFVar4;
  FPCGDataTypeIdentifier *pFVar5;
  FPCGPinProperties *pFVar6;
  FPCGDataTypeIdentifier local_28;
  
  cVar2 = (**(code **)(this->_padding_ + 0x4a8))();
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar3 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar4 = FText::GetEmpty();
  pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
  pFVar6 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar3 * 0x30),
                      &PCGCopyPointsConstants::SourcePointsLabel,pFVar5,cVar2 == '\0',true,pFVar4);
  pFVar6->PinStatus = Required;
  iVar3 = __return_storage_ptr__->ArrayNum;
  if (iVar3 == __return_storage_ptr__->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar3 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar4 = FText::GetEmpty();
  pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
  pFVar6 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar3 * 0x30),
                      &PCGCopyPointsConstants::TargetPointsLabel,pFVar5,cVar2 == '\0',true,pFVar4);
  pFVar6->PinStatus = Required;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b93d90

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGCopyPointsSettings::OutputPinProperties
          (UPCGCopyPointsSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGCopyPointsSettings @ 149b983a0

void __cdecl UPCGCopyPointsSettings::StaticRegisterNativesUPCGCopyPointsSettings(void)

{
  return;
}

