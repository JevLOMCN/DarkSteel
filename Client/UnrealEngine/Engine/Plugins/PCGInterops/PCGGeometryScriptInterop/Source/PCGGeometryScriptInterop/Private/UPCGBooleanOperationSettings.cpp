// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 8

// StaticClass @ 14cedca90

UClass * __cdecl UPCGBooleanOperationSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBooleanOperationSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGBooleanOperationSettings",
               &Z_Registration_Info_UClass_UPCGBooleanOperationSettings.InnerSingleton,
               StaticRegisterNativesUPCGBooleanOperationSettings,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGBooleanOperationSettings>,
               InternalVTableHelperCtorCaller<UPCGBooleanOperationSettings>,local_res8,
               UPCGDynamicMeshBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBooleanOperationSettings.InnerSingleton;
}

// UPCGBooleanOperationSettings @ 14cee3680

UPCGBooleanOperationSettings * __thiscall
UPCGBooleanOperationSettings::UPCGBooleanOperationSettings
          (UPCGBooleanOperationSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->BooleanOperation = Intersection;
  this->_padding_ = (longlong)&___7UPCGBooleanOperationSettings__6B_;
  (this->BooleanOperationOptions).bFillHoles = true;
  (this->BooleanOperationOptions).bSimplifyOutput = true;
  (this->BooleanOperationOptions).SimplifyPlanarTolerance = 0.01;
  (this->BooleanOperationOptions).bAllowEmptyResult = false;
  (this->BooleanOperationOptions).OutputTransformSpace = TargetTransformSpace;
  this->Mode = EachAWithEachB;
  return this;
}

// UPCGBooleanOperationSettings @ 14cee36e0

UPCGBooleanOperationSettings * __thiscall
UPCGBooleanOperationSettings::UPCGBooleanOperationSettings
          (UPCGBooleanOperationSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->BooleanOperation = Intersection;
  this->_padding_ = (longlong)&___7UPCGBooleanOperationSettings__6B_;
  (this->BooleanOperationOptions).bFillHoles = true;
  (this->BooleanOperationOptions).bSimplifyOutput = true;
  (this->BooleanOperationOptions).SimplifyPlanarTolerance = 0.01;
  (this->BooleanOperationOptions).bAllowEmptyResult = false;
  (this->BooleanOperationOptions).OutputTransformSpace = TargetTransformSpace;
  this->Mode = EachAWithEachB;
  return this;
}

// ~UPCGBooleanOperationSettings @ 14cee4a80

void __thiscall
UPCGBooleanOperationSettings::~UPCGBooleanOperationSettings(UPCGBooleanOperationSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGDynamicMeshBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 14ceea520

TSharedPtr<IPCGElement,1> * __thiscall
UPCGBooleanOperationSettings::CreateElement
          (UPCGBooleanOperationSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGBooleanOperationElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGBooleanOperationElement__6B_;
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

// GetPrivateStaticClass @ 14cef30e0

UClass * __cdecl UPCGBooleanOperationSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGBooleanOperationSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGBooleanOperationSettings",
               &Z_Registration_Info_UClass_UPCGBooleanOperationSettings.InnerSingleton,
               StaticRegisterNativesUPCGBooleanOperationSettings,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGBooleanOperationSettings>,
               InternalVTableHelperCtorCaller<UPCGBooleanOperationSettings>,local_res8,
               UPCGDynamicMeshBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGBooleanOperationSettings.InnerSingleton;
}

// InputPinProperties @ 14cef3d20

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGBooleanOperationSettings::InputPinProperties
          (UPCGBooleanOperationSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,DynamicMesh);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGBooleanOperation::InputAPinLabel,pFVar4,true,true,pFVar3);
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,DynamicMesh);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGBooleanOperation::InputBPinLabel,pFVar4,true,true,pFVar3);
  pFVar5->PinStatus = Required;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGBooleanOperationSettings @ 14cef9b90

void __cdecl UPCGBooleanOperationSettings::StaticRegisterNativesUPCGBooleanOperationSettings(void)

{
  return;
}

