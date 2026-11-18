// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149c392f0

UClass * __cdecl UPCGSpawnSplineSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSpawnSplineSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSpawnSplineSettings",
               &Z_Registration_Info_UClass_UPCGSpawnSplineSettings.InnerSingleton,
               StaticRegisterNativesUPCGSpawnSplineSettings,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGSpawnSplineSettings>,
               InternalVTableHelperCtorCaller<UPCGSpawnSplineSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSpawnSplineSettings.InnerSingleton;
}

// UPCGSpawnSplineSettings @ 149c4b9e0

UPCGSpawnSplineSettings * __thiscall
UPCGSpawnSplineSettings::UPCGSpawnSplineSettings
          (UPCGSpawnSplineSettings *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  UClass *pUVar1;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGSpawnSplineSettings__6B_;
  pUVar1 = Z_Construct_UClass_USplineComponent_NoRegister();
  (this->SplineComponent).Class.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->bSpawnComponentFromAttribute = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->SpawnComponentFromAttributeName);
  this_00 = &(this->TargetActor).SoftObjectPtr.field_0x18;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->TargetActor).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TargetActor).SoftObjectPtr = 0;
  *(undefined8 *)&(this->TargetActor).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TargetActor).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->PostProcessFunctionNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PostProcessFunctionNames).ArrayNum = 0;
  (this->PostProcessFunctionNames).ArrayMax = 0;
  (this->PropertyOverrideDescriptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyOverrideDescriptions).ArrayNum = 0;
  (this->PropertyOverrideDescriptions).ArrayMax = 0;
  this->bOutputSplineComponentReference = true;
  this->ComponentReferenceAttributeName = PCGAddComponentConstants::ComponentReferenceAttribute;
  return this;
}

// UPCGSpawnSplineSettings @ 149c4bab0

UPCGSpawnSplineSettings * __thiscall
UPCGSpawnSplineSettings::UPCGSpawnSplineSettings
          (UPCGSpawnSplineSettings *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  UClass *pUVar1;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGSpawnSplineSettings__6B_;
  pUVar1 = Z_Construct_UClass_USplineComponent_NoRegister();
  (this->SplineComponent).Class.field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->bSpawnComponentFromAttribute = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->SpawnComponentFromAttributeName);
  this_00 = &(this->TargetActor).SoftObjectPtr.field_0x18;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->TargetActor).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TargetActor).SoftObjectPtr = 0;
  *(undefined8 *)&(this->TargetActor).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TargetActor).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->PostProcessFunctionNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PostProcessFunctionNames).ArrayNum = 0;
  (this->PostProcessFunctionNames).ArrayMax = 0;
  (this->PropertyOverrideDescriptions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyOverrideDescriptions).ArrayNum = 0;
  (this->PropertyOverrideDescriptions).ArrayMax = 0;
  this->bOutputSplineComponentReference = true;
  this->ComponentReferenceAttributeName = PCGAddComponentConstants::ComponentReferenceAttribute;
  return this;
}

// ~UPCGSpawnSplineSettings @ 149c4db70

void __thiscall UPCGSpawnSplineSettings::~UPCGSpawnSplineSettings(UPCGSpawnSplineSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGSpawnSplineSettings__6B_;
  DestructItems<FPCGObjectPropertyOverrideDescription,int>
            ((FPCGObjectPropertyOverrideDescription *)
             (this->PropertyOverrideDescriptions).AllocatorInstance.Data,
             (this->PropertyOverrideDescriptions).ArrayNum);
  pFVar1 = (this->PropertyOverrideDescriptions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PostProcessFunctionNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->TargetActor).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->SpawnComponentFromAttributeName).field_0x28,
             *(int *)&(this->SpawnComponentFromAttributeName).field_0x30);
  pvVar2 = *(void **)&(this->SpawnComponentFromAttributeName).field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c60440

TSharedPtr<IPCGElement,1> * __thiscall
UPCGSpawnSplineSettings::CreateElement
          (UPCGSpawnSplineSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGSpawnSplineElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGSpawnSplineElement__6B_;
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

// GetPrivateStaticClass @ 149c78630

UClass * __cdecl UPCGSpawnSplineSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSpawnSplineSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSpawnSplineSettings",
               &Z_Registration_Info_UClass_UPCGSpawnSplineSettings.InnerSingleton,
               StaticRegisterNativesUPCGSpawnSplineSettings,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGSpawnSplineSettings>,
               InternalVTableHelperCtorCaller<UPCGSpawnSplineSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSpawnSplineSettings.InnerSingleton;
}

// InputPinProperties @ 149c7fca0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSpawnSplineSettings::InputPinProperties
          (UPCGSpawnSplineSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Spline);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  pFVar5->PinStatus = Required;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c81300

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSpawnSplineSettings::OutputPinProperties
          (UPCGSpawnSplineSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Spline);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGSpawnSplineSettings @ 149c91fc0

void __cdecl UPCGSpawnSplineSettings::StaticRegisterNativesUPCGSpawnSplineSettings(void)

{
  return;
}

