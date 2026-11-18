// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149b9db30

UClass * __cdecl UPCGSampleTextureSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSampleTextureSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSampleTextureSettings",
               &Z_Registration_Info_UClass_UPCGSampleTextureSettings.InnerSingleton,
               StaticRegisterNativesUPCGSampleTextureSettings,0x118,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGSampleTextureSettings>,
               InternalVTableHelperCtorCaller<UPCGSampleTextureSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSampleTextureSettings.InnerSingleton;
}

// UPCGSampleTextureSettings @ 149be8150

UPCGSampleTextureSettings * __thiscall
UPCGSampleTextureSettings::UPCGSampleTextureSettings
          (UPCGSampleTextureSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->TextureMappingMethod = Planar;
  this->_padding_ = (longlong)&___7UPCGSampleTextureSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->UVCoordinatesAttribute);
  this->TilingMode = Wrap;
  this->DensityMergeFunction = Set;
  this->bClampOutputDensity = true;
  return this;
}

// UPCGSampleTextureSettings @ 149be81a0

UPCGSampleTextureSettings * __thiscall
UPCGSampleTextureSettings::UPCGSampleTextureSettings
          (UPCGSampleTextureSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->TextureMappingMethod = Planar;
  this->_padding_ = (longlong)&___7UPCGSampleTextureSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->UVCoordinatesAttribute);
  this->TilingMode = Wrap;
  this->DensityMergeFunction = Set;
  this->bClampOutputDensity = true;
  return this;
}

// ~UPCGSampleTextureSettings @ 149bea1c0

void __thiscall
UPCGSampleTextureSettings::~UPCGSampleTextureSettings(UPCGSampleTextureSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGSampleTextureSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->UVCoordinatesAttribute).field_0x28,
             *(int *)&(this->UVCoordinatesAttribute).field_0x30);
  pvVar1 = *(void **)&(this->UVCoordinatesAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c06220

TSharedPtr<IPCGElement,1> * __thiscall
UPCGSampleTextureSettings::CreateElement
          (UPCGSampleTextureSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGSampleTextureElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGSampleTextureElement__6B_;
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

// GetPrivateStaticClass @ 149c26b10

UClass * __cdecl UPCGSampleTextureSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSampleTextureSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSampleTextureSettings",
               &Z_Registration_Info_UClass_UPCGSampleTextureSettings.InnerSingleton,
               StaticRegisterNativesUPCGSampleTextureSettings,0x118,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGSampleTextureSettings>,
               InternalVTableHelperCtorCaller<UPCGSampleTextureSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSampleTextureSettings.InnerSingleton;
}

// InputPinProperties @ 149c2cfa0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSampleTextureSettings::InputPinProperties
          (UPCGSampleTextureSettings *this,
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
                      &PCGSampleTextureConstants::InputPointLabel,pFVar4,true,true,pFVar3);
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,BaseTexture);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGSampleTextureConstants::InputTextureLabel,pFVar4,false,false,pFVar3);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c2efd0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSampleTextureSettings::OutputPinProperties
          (UPCGSampleTextureSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGSampleTextureSettings @ 149c35620

void __cdecl UPCGSampleTextureSettings::StaticRegisterNativesUPCGSampleTextureSettings(void)

{
  return;
}

