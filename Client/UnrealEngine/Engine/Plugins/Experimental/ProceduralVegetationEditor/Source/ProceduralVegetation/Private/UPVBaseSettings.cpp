// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 12

// StaticClass @ 14da57c10

UClass * __cdecl UPVBaseSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPVBaseSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PVBaseSettings",
               &Z_Registration_Info_UClass_UPVBaseSettings.InnerSingleton,
               StaticRegisterNativesUPVBaseSettings,200,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPVBaseSettings>,
               InternalVTableHelperCtorCaller<UPVBaseSettings>,local_res8,UPCGSettings::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPVBaseSettings.InnerSingleton;
}

// UPVBaseSettings @ 14da65fc0

UPVBaseSettings * __thiscall
UPVBaseSettings::UPVBaseSettings(UPVBaseSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  *(undefined ***)this = &___7UPVBaseSettings__6B_;
  return this;
}

// UPVBaseSettings @ 14da65ff0

UPVBaseSettings * __thiscall UPVBaseSettings::UPVBaseSettings(UPVBaseSettings *this)

{
  bool bVar1;
  FObjectInitializer *pFVar2;
  FName local_res8 [4];
  FString local_18;
  
  pFVar2 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar2);
  *(undefined ***)this = &___7UPVBaseSettings__6B_;
  bVar1 = PCGHelpers::IsNewObjectAndNotDefault((UObject *)this,false);
  if ((bVar1) && (*(longlong *)&this->field_0x10 != 0)) {
    local_res8[0] = *(FName *)(*(longlong *)&this->field_0x10 + 0x18);
    ::FName::ToString(local_res8,&local_18);
    PV::Analytics::SendNodeAddedEvent(&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return this;
}

// ~UPVBaseSettings @ 14da679e0

void __thiscall UPVBaseSettings::~UPVBaseSettings(UPVBaseSettings *this)

{
  *(undefined ***)this = &___7UPVBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 14da79480

TSharedPtr<IPCGElement,1> * __thiscall
UPVBaseSettings::CreateElement
          (UPVBaseSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         &___7__TIntrusiveReferenceController_VFPVBaseElement___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FPVBaseElement__6B_;
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

// GetInputPinTypeIdentifier @ 14da95be0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

FPCGDataTypeIdentifier * __thiscall
UPVBaseSettings::GetInputPinTypeIdentifier
          (UPVBaseSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__)

{
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,Any);
  return __return_storage_ptr__;
}

// GetOutputPinTypeIdentifier @ 14da96f50

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

FPCGDataTypeIdentifier * __thiscall
UPVBaseSettings::GetOutputPinTypeIdentifier
          (UPVBaseSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__)

{
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,Any);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14da98d80

UClass * __cdecl UPVBaseSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPVBaseSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PVBaseSettings",
               &Z_Registration_Info_UClass_UPVBaseSettings.InnerSingleton,
               StaticRegisterNativesUPVBaseSettings,200,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UPVBaseSettings>,
               InternalVTableHelperCtorCaller<UPVBaseSettings>,local_res8,UPCGSettings::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPVBaseSettings.InnerSingleton;
}

// HasExecutionDependencyPin @ 14da9aa40

bool __thiscall UPVBaseSettings::HasExecutionDependencyPin(UPVBaseSettings *this)

{
  return false;
}

// InputPinProperties @ 14da9adb0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPVBaseSettings::InputPinProperties
          (UPVBaseSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 *puVar3;
  FText *pFVar4;
  FPCGPinProperties *this_00;
  FPCGDataTypeIdentifier local_38;
  void *local_20 [3];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)this + 0x4f0))(this,local_20);
  iVar2 = __return_storage_ptr__->ArrayNum;
  if (iVar2 == __return_storage_ptr__->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar4 = FText::GetEmpty();
  local_38.Ids.AllocatorInstance.Data = (FScriptContainerElement *)*puVar3;
  *puVar3 = 0;
  local_38.Ids.ArrayNum = *(int *)(puVar3 + 1);
  local_38.Ids.ArrayMax = *(int *)((longlong)puVar3 + 0xc);
  puVar3[1] = 0;
  local_38.CustomSubtype = *(int *)(puVar3 + 2);
  this_00 = FPCGPinProperties::FPCGPinProperties
                      ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                       &PCGPinConstants::DefaultInputLabel,&local_38,true,true,pFVar4);
  if (local_20[0] != (void *)0x0) {
    FMemory::Free(local_20[0]);
  }
  this_00->PinStatus = Required;
  FPCGPinProperties::SetAllowMultipleConnections(this_00,false);
  this_00->bAllowMultipleData = false;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 14da9de90

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPVBaseSettings::OutputPinProperties
          (UPVBaseSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 *puVar3;
  FText *pFVar4;
  FPCGPinProperties *this_00;
  FPCGDataTypeIdentifier local_38;
  void *local_20 [3];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)this + 0x4f8))(this,local_20);
  iVar2 = __return_storage_ptr__->ArrayNum;
  if (iVar2 == __return_storage_ptr__->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar4 = FText::GetEmpty();
  local_38.Ids.AllocatorInstance.Data = (FScriptContainerElement *)*puVar3;
  *puVar3 = 0;
  local_38.Ids.ArrayNum = *(int *)(puVar3 + 1);
  local_38.Ids.ArrayMax = *(int *)((longlong)puVar3 + 0xc);
  puVar3[1] = 0;
  local_38.CustomSubtype = *(int *)(puVar3 + 2);
  this_00 = FPCGPinProperties::FPCGPinProperties
                      ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                       &PCGPinConstants::DefaultOutputLabel,&local_38,true,true,pFVar4);
  if (local_20[0] != (void *)0x0) {
    FMemory::Free(local_20[0]);
  }
  FPCGPinProperties::SetAllowMultipleConnections(this_00,true);
  this_00->bAllowMultipleData = false;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPVBaseSettings @ 14daa9850

void __cdecl UPVBaseSettings::StaticRegisterNativesUPVBaseSettings(void)

{
  return;
}

