// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149b9c9d0

UClass * __cdecl UPCGSceneCaptureSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSceneCaptureSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSceneCaptureSettings",
               &Z_Registration_Info_UClass_UPCGSceneCaptureSettings.InnerSingleton,
               StaticRegisterNativesUPCGSceneCaptureSettings,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGSceneCaptureSettings>,
               InternalVTableHelperCtorCaller<UPCGSceneCaptureSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSceneCaptureSettings.InnerSingleton;
}

// UPCGSceneCaptureSettings @ 149be8330

UPCGSceneCaptureSettings * __thiscall
UPCGSceneCaptureSettings::UPCGSceneCaptureSettings
          (UPCGSceneCaptureSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->TexelSize = 50.0;
  this->_padding_ = (longlong)&___7UPCGSceneCaptureSettings__6B_;
  this->PixelFormat = '\x06';
  this->CaptureSource = '\0';
  this->bSkipReadbackToCPU = false;
  return this;
}

// UPCGSceneCaptureSettings @ 149be8380

UPCGSceneCaptureSettings * __thiscall
UPCGSceneCaptureSettings::UPCGSceneCaptureSettings
          (UPCGSceneCaptureSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->TexelSize = 50.0;
  this->_padding_ = (longlong)&___7UPCGSceneCaptureSettings__6B_;
  this->PixelFormat = '\x06';
  this->CaptureSource = '\0';
  this->bSkipReadbackToCPU = false;
  return this;
}

// ~UPCGSceneCaptureSettings @ 149bea280

void __thiscall UPCGSceneCaptureSettings::~UPCGSceneCaptureSettings(UPCGSceneCaptureSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGSceneCaptureSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c06460

TSharedPtr<IPCGElement,1> * __thiscall
UPCGSceneCaptureSettings::CreateElement
          (UPCGSceneCaptureSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGSceneCaptureElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGSceneCaptureElement__6B_;
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

// GetPrivateStaticClass @ 149c26d50

UClass * __cdecl UPCGSceneCaptureSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSceneCaptureSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSceneCaptureSettings",
               &Z_Registration_Info_UClass_UPCGSceneCaptureSettings.InnerSingleton,
               StaticRegisterNativesUPCGSceneCaptureSettings,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGSceneCaptureSettings>,
               InternalVTableHelperCtorCaller<UPCGSceneCaptureSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSceneCaptureSettings.InnerSingleton;
}

// InputPinProperties @ 149c2d1d0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSceneCaptureSettings::InputPinProperties
          (UPCGSceneCaptureSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGPinProperties *pFVar5;
  FText local_38;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"PCGSceneCaptureElement",L"BoundingShapePinTooltip",
                      L"Optional bounds to use instead of the PCG generation bounds. Note, bound overrides will always be axis aligned and top down."
                     );
  iVar2 = __return_storage_ptr__->ArrayNum;
  if (iVar2 == __return_storage_ptr__->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Spatial);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGSceneCaptureConstants::BoundingShapeLabel,pFVar4,true,false,pFVar3);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    pFVar5->PinStatus = Advanced;
    return __return_storage_ptr__;
  }
  pFVar5->PinStatus = Advanced;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c2f110

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSceneCaptureSettings::OutputPinProperties
          (UPCGSceneCaptureSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,RenderTarget);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultInputLabel,pFVar4,true,false,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGSceneCaptureSettings @ 149c35650

void __cdecl UPCGSceneCaptureSettings::StaticRegisterNativesUPCGSceneCaptureSettings(void)

{
  return;
}

