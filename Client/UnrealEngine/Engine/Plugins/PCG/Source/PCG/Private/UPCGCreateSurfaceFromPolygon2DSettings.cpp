// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149c958d0

UClass * __cdecl UPCGCreateSurfaceFromPolygon2DSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCreateSurfaceFromPolygon2DSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCreateSurfaceFromPolygon2DSettings",
               &Z_Registration_Info_UClass_UPCGCreateSurfaceFromPolygon2DSettings.InnerSingleton,
               StaticRegisterNativesUPCGCreateSurfaceFromPolygon2DSettings,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCreateSurfaceFromPolygon2DSettings>,
               InternalVTableHelperCtorCaller<UPCGCreateSurfaceFromPolygon2DSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCreateSurfaceFromPolygon2DSettings.InnerSingleton;
}

// UPCGCreateSurfaceFromPolygon2DSettings @ 149ca45d0

UPCGCreateSurfaceFromPolygon2DSettings * __thiscall
UPCGCreateSurfaceFromPolygon2DSettings::UPCGCreateSurfaceFromPolygon2DSettings
          (UPCGCreateSurfaceFromPolygon2DSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  *(undefined ***)this = &___7UPCGCreateSurfaceFromPolygon2DSettings__6B_;
  return this;
}

// UPCGCreateSurfaceFromPolygon2DSettings @ 149ca4600

UPCGCreateSurfaceFromPolygon2DSettings * __thiscall
UPCGCreateSurfaceFromPolygon2DSettings::UPCGCreateSurfaceFromPolygon2DSettings
          (UPCGCreateSurfaceFromPolygon2DSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  *(undefined ***)this = &___7UPCGCreateSurfaceFromPolygon2DSettings__6B_;
  return this;
}

// ~UPCGCreateSurfaceFromPolygon2DSettings @ 149ca66c0

void __thiscall
UPCGCreateSurfaceFromPolygon2DSettings::~UPCGCreateSurfaceFromPolygon2DSettings
          (UPCGCreateSurfaceFromPolygon2DSettings *this)

{
  *(undefined ***)this = &___7UPCGCreateSurfaceFromPolygon2DSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149cb9130

TSharedPtr<IPCGElement,1> * __thiscall
UPCGCreateSurfaceFromPolygon2DSettings::CreateElement
          (UPCGCreateSurfaceFromPolygon2DSettings *this,
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
         ___7__TIntrusiveReferenceController_VFPCGCreateSurfaceFromPolygon2DElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGCreateSurfaceFromPolygon2DElement__6B_;
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

// GetPrivateStaticClass @ 149ccb980

UClass * __cdecl UPCGCreateSurfaceFromPolygon2DSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCreateSurfaceFromPolygon2DSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCreateSurfaceFromPolygon2DSettings",
               &Z_Registration_Info_UClass_UPCGCreateSurfaceFromPolygon2DSettings.InnerSingleton,
               StaticRegisterNativesUPCGCreateSurfaceFromPolygon2DSettings,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCreateSurfaceFromPolygon2DSettings>,
               InternalVTableHelperCtorCaller<UPCGCreateSurfaceFromPolygon2DSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCreateSurfaceFromPolygon2DSettings.InnerSingleton;
}

// HasExecutionDependencyPin @ 149ccced0

bool __thiscall
UPCGCreateSurfaceFromPolygon2DSettings::HasExecutionDependencyPin
          (UPCGCreateSurfaceFromPolygon2DSettings *this)

{
  return false;
}

// InputPinProperties @ 149ccd090

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGCreateSurfaceFromPolygon2DSettings::InputPinProperties
          (UPCGCreateSurfaceFromPolygon2DSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  PCGPolygon2DUtils::DefaultPolygonInputPinProperties(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149cce200

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGCreateSurfaceFromPolygon2DSettings::OutputPinProperties
          (UPCGCreateSurfaceFromPolygon2DSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Surface);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGCreateSurfaceFromPolygon2DSettings @ 149cdd460

void __cdecl
UPCGCreateSurfaceFromPolygon2DSettings::StaticRegisterNativesUPCGCreateSurfaceFromPolygon2DSettings
          (void)

{
  return;
}

