// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 11

// IsInputPinRequiredByExecution @ 149727a70

bool __thiscall
UPCGGenerateLandscapeTexturesSettings::IsInputPinRequiredByExecution
          (UPCGGenerateLandscapeTexturesSettings *this,UPCGPin *param_1)

{
  return true;
}

// StaticClass @ 149727f40

UClass * __cdecl UPCGGenerateLandscapeTexturesSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGenerateLandscapeTexturesSettings.InnerSingleton ==
      (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGenerateLandscapeTexturesSettings",
               &Z_Registration_Info_UClass_UPCGGenerateLandscapeTexturesSettings.InnerSingleton,
               StaticRegisterNativesUPCGGenerateLandscapeTexturesSettings,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGenerateLandscapeTexturesSettings>,
               InternalVTableHelperCtorCaller<UPCGGenerateLandscapeTexturesSettings>,aFStackX_8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGenerateLandscapeTexturesSettings.InnerSingleton;
}

// UPCGGenerateLandscapeTexturesSettings @ 149b57800

UPCGGenerateLandscapeTexturesSettings * __thiscall
UPCGGenerateLandscapeTexturesSettings::UPCGGenerateLandscapeTexturesSettings
          (UPCGGenerateLandscapeTexturesSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGGenerateLandscapeTexturesSettings__6B_;
  (this->SelectedGrassTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedGrassTypes).ArrayNum = 0;
  (this->SelectedGrassTypes).ArrayMax = 0;
  this->bOverrideFromInput = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->GrassTypesAttribute)
  ;
  this->bExcludeSelectedGrassTypes = true;
  this->bSkipReadbackToCPU = false;
  this->bGenerateHeightMap = false;
  return this;
}

// UPCGGenerateLandscapeTexturesSettings @ 149b57860

UPCGGenerateLandscapeTexturesSettings * __thiscall
UPCGGenerateLandscapeTexturesSettings::UPCGGenerateLandscapeTexturesSettings
          (UPCGGenerateLandscapeTexturesSettings *this)

{
  bool bVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar2);
  this->_padding_ = (longlong)&___7UPCGGenerateLandscapeTexturesSettings__6B_;
  (this->SelectedGrassTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedGrassTypes).ArrayNum = 0;
  (this->SelectedGrassTypes).ArrayMax = 0;
  this->bOverrideFromInput = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->GrassTypesAttribute)
  ;
  this->bExcludeSelectedGrassTypes = true;
  this->bSkipReadbackToCPU = false;
  this->bGenerateHeightMap = false;
  bVar1 = PCGHelpers::IsNewObjectAndNotDefault((UObject *)this,false);
  if (bVar1) {
    this->bGenerateHeightMap = true;
  }
  return this;
}

// ~UPCGGenerateLandscapeTexturesSettings @ 149b59380

void __thiscall
UPCGGenerateLandscapeTexturesSettings::~UPCGGenerateLandscapeTexturesSettings
          (UPCGGenerateLandscapeTexturesSettings *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UPCGGenerateLandscapeTexturesSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->GrassTypesAttribute).field_0x28,
             *(int *)&(this->GrassTypesAttribute).field_0x30);
  pvVar1 = *(void **)&(this->GrassTypesAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->SelectedGrassTypes).AllocatorInstance.Data,
             (this->SelectedGrassTypes).ArrayNum);
  pFVar2 = (this->SelectedGrassTypes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// ApplyPreconfiguredSettings @ 149b66b90

void __thiscall
UPCGGenerateLandscapeTexturesSettings::ApplyPreconfiguredSettings
          (UPCGGenerateLandscapeTexturesSettings *this,FPCGPreConfiguredSettingsInfo *param_1)

{
  if (*(int *)param_1 == 1) {
    this->bGenerateHeightMap = false;
  }
  return;
}

// CreateElement @ 149b6b7d0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGGenerateLandscapeTexturesSettings::CreateElement
          (UPCGGenerateLandscapeTexturesSettings *this,
          TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGGenerateLandscapeTexturesElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGGenerateLandscapeTexturesElement__6B_;
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

// GetPrivateStaticClass @ 149b91580

UClass * __cdecl UPCGGenerateLandscapeTexturesSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGenerateLandscapeTexturesSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGGenerateLandscapeTexturesSettings",
               &Z_Registration_Info_UClass_UPCGGenerateLandscapeTexturesSettings.InnerSingleton,
               StaticRegisterNativesUPCGGenerateLandscapeTexturesSettings,0x128,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGenerateLandscapeTexturesSettings>,
               InternalVTableHelperCtorCaller<UPCGGenerateLandscapeTexturesSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGenerateLandscapeTexturesSettings.InnerSingleton;
}

// InputPinProperties @ 149b92dc0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGenerateLandscapeTexturesSettings::InputPinProperties
          (UPCGGenerateLandscapeTexturesSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Landscape);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGGenerateLandscapeTextures::InputPinLabel,pFVar4,true,false,pFVar3);
  pFVar5->PinStatus = Required;
  if (this->bOverrideFromInput != false) {
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
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Param);
    pFVar5 = FPCGPinProperties::FPCGPinProperties
                       ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                        &PCGGenerateLandscapeTextures::GrassTypeOverridesPinLabel,pFVar4,true,true,
                        pFVar3);
    pFVar5->PinStatus = Required;
  }
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b94d10

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGenerateLandscapeTexturesSettings::OutputPinProperties
          (UPCGGenerateLandscapeTexturesSettings *this,
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
  if (this->bGenerateHeightMap != false) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar3 = FText::GetEmpty();
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Texture);
    FPCGPinProperties::FPCGPinProperties
              ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
               &PCGGenerateLandscapeTextures::OutputHeightPinLabel,pFVar4,true,false,pFVar3);
  }
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Texture);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGGenerateLandscapeTextures::OutputGrassMapsPinLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGGenerateLandscapeTexturesSettings @ 149b985b0

void __cdecl
UPCGGenerateLandscapeTexturesSettings::StaticRegisterNativesUPCGGenerateLandscapeTexturesSettings
          (void)

{
  return;
}

