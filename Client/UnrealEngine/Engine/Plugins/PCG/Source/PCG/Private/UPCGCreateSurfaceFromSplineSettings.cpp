// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149b31c70

UClass * __cdecl UPCGCreateSurfaceFromSplineSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCreateSurfaceFromSplineSettings.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCreateSurfaceFromSplineSettings",
               &Z_Registration_Info_UClass_UPCGCreateSurfaceFromSplineSettings.InnerSingleton,
               StaticRegisterNativesUPCGCreateSurfaceFromSplineSettings,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCreateSurfaceFromSplineSettings>,
               InternalVTableHelperCtorCaller<UPCGCreateSurfaceFromSplineSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCreateSurfaceFromSplineSettings.InnerSingleton;
}

// UPCGCreateSurfaceFromSplineSettings @ 149b56470

UPCGCreateSurfaceFromSplineSettings * __thiscall
UPCGCreateSurfaceFromSplineSettings::UPCGCreateSurfaceFromSplineSettings
          (UPCGCreateSurfaceFromSplineSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  *(undefined ***)this = &___7UPCGCreateSurfaceFromSplineSettings__6B_;
  return this;
}

// UPCGCreateSurfaceFromSplineSettings @ 149b564a0

UPCGCreateSurfaceFromSplineSettings * __thiscall
UPCGCreateSurfaceFromSplineSettings::UPCGCreateSurfaceFromSplineSettings
          (UPCGCreateSurfaceFromSplineSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  *(undefined ***)this = &___7UPCGCreateSurfaceFromSplineSettings__6B_;
  return this;
}

// ~UPCGCreateSurfaceFromSplineSettings @ 149b58dd0

void __thiscall
UPCGCreateSurfaceFromSplineSettings::~UPCGCreateSurfaceFromSplineSettings
          (UPCGCreateSurfaceFromSplineSettings *this)

{
  *(undefined ***)this = &___7UPCGCreateSurfaceFromSplineSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149b6a750

TSharedPtr<IPCGElement,1> * __thiscall
UPCGCreateSurfaceFromSplineSettings::CreateElement
          (UPCGCreateSurfaceFromSplineSettings *this,
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
         ___7__TIntrusiveReferenceController_VFPCGCreateSurfaceFromSplineElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGCreateSurfaceFromSplineElement__6B_;
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

// GetPrivateStaticClass @ 149b90440

UClass * __cdecl UPCGCreateSurfaceFromSplineSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCreateSurfaceFromSplineSettings.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCreateSurfaceFromSplineSettings",
               &Z_Registration_Info_UClass_UPCGCreateSurfaceFromSplineSettings.InnerSingleton,
               StaticRegisterNativesUPCGCreateSurfaceFromSplineSettings,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCreateSurfaceFromSplineSettings>,
               InternalVTableHelperCtorCaller<UPCGCreateSurfaceFromSplineSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCreateSurfaceFromSplineSettings.InnerSingleton;
}

// HasExecutionDependencyPin @ 149b91b30

bool __thiscall
UPCGCreateSurfaceFromSplineSettings::HasExecutionDependencyPin
          (UPCGCreateSurfaceFromSplineSettings *this)

{
  return false;
}

// InputPinProperties @ 149b92280

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGCreateSurfaceFromSplineSettings::InputPinProperties
          (UPCGCreateSurfaceFromSplineSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FText *pFVar5;
  FPCGDataTypeIdentifier *pFVar6;
  TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *pTVar7;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar4 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar5 = FText::GetEmpty();
  pFVar6 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Spline);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar4 * 0x30),
             &PCGPinConstants::DefaultInputLabel,pFVar6,true,true,pFVar5);
  if (__return_storage_ptr__->ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar7 = (TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar7;
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data[0x29] = (FScriptContainerElement)0x1;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b93fe0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGCreateSurfaceFromSplineSettings::OutputPinProperties
          (UPCGCreateSurfaceFromSplineSettings *this,
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

// StaticRegisterNativesUPCGCreateSurfaceFromSplineSettings @ 149b98410

void __cdecl
UPCGCreateSurfaceFromSplineSettings::StaticRegisterNativesUPCGCreateSurfaceFromSplineSettings(void)

{
  return;
}

