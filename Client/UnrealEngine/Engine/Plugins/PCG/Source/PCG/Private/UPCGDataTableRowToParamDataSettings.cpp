// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 11

// StaticClass @ 149b32a00

UClass * __cdecl UPCGDataTableRowToParamDataSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataTableRowToParamDataSettings.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataTableRowToParamDataSettings",
               &Z_Registration_Info_UClass_UPCGDataTableRowToParamDataSettings.InnerSingleton,
               StaticRegisterNativesUPCGDataTableRowToParamDataSettings,0x100,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGDataTableRowToParamDataSettings>,
               InternalVTableHelperCtorCaller<UPCGDataTableRowToParamDataSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataTableRowToParamDataSettings.InnerSingleton;
}

// UPCGDataTableRowToParamDataSettings @ 149b56ad0

UPCGDataTableRowToParamDataSettings * __thiscall
UPCGDataTableRowToParamDataSettings::UPCGDataTableRowToParamDataSettings
          (UPCGDataTableRowToParamDataSettings *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this_00 = &(this->DataTable).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UPCGDataTableRowToParamDataSettings__6B_;
  (this->RowName).ComparisonIndex = 0;
  (this->RowName).Number = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->DataTable).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DataTable).SoftObjectPtr = 0;
  *(undefined8 *)&(this->DataTable).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DataTable).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this->bSynchronousLoad = false;
  return this;
}

// UPCGDataTableRowToParamDataSettings @ 149b56b40

UPCGDataTableRowToParamDataSettings * __thiscall
UPCGDataTableRowToParamDataSettings::UPCGDataTableRowToParamDataSettings
          (UPCGDataTableRowToParamDataSettings *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this_00 = &(this->DataTable).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UPCGDataTableRowToParamDataSettings__6B_;
  (this->RowName).ComparisonIndex = 0;
  (this->RowName).Number = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->DataTable).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DataTable).SoftObjectPtr = 0;
  *(undefined8 *)&(this->DataTable).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DataTable).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this->bSynchronousLoad = false;
  return this;
}

// ~UPCGDataTableRowToParamDataSettings @ 149b58f80

void __thiscall
UPCGDataTableRowToParamDataSettings::~UPCGDataTableRowToParamDataSettings
          (UPCGDataTableRowToParamDataSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGDataTableRowToParamDataSettings__6B_;
  pvVar1 = *(void **)&(this->DataTable).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149b6abd0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGDataTableRowToParamDataSettings::CreateElement
          (UPCGDataTableRowToParamDataSettings *this,
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
         ___7__TIntrusiveReferenceController_VFPCGDataTableRowToParamData___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGDataTableRowToParamData__6B_;
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

// GetAdditionalTitleInformation @ 149b8cb00

FString * __thiscall
UPCGDataTableRowToParamDataSettings::GetAdditionalTitleInformation
          (UPCGDataTableRowToParamDataSettings *this,FString *__return_storage_ptr__)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  pUVar4 = (UObject *)0x0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  ::FName::ToString(&this->RowName,&local_28);
  pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->DataTable);
  if (pUVar2 == (UObject *)0x0) goto LAB_149b8cbed;
  pUVar3 = Z_Construct_UClass_UDataTable_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8)
      != &pUVar3->_padding_)) goto LAB_149b8cbed;
  pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->DataTable);
  if (pUVar2 == (UObject *)0x0) {
LAB_149b8cbbb:
    pUVar2 = pUVar4;
  }
  else {
    pUVar3 = Z_Construct_UClass_UDataTable_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_149b8cbbb;
  }
  local_res8.ComparisonIndex.Value = *(uint *)&pUVar2->field_0x18;
  local_res8.Number = *(uint *)&pUVar2->field_0x1c;
  pUVar4 = (UObject *)&DAT_00000001;
  ::FName::ToString(&local_res8,&local_38);
LAB_149b8cbed:
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s[ %s ]");
  if ((pUVar4 != (UObject *)0x0) &&
     (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149b908c0

UClass * __cdecl UPCGDataTableRowToParamDataSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDataTableRowToParamDataSettings.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDataTableRowToParamDataSettings",
               &Z_Registration_Info_UClass_UPCGDataTableRowToParamDataSettings.InnerSingleton,
               StaticRegisterNativesUPCGDataTableRowToParamDataSettings,0x100,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGDataTableRowToParamDataSettings>,
               InternalVTableHelperCtorCaller<UPCGDataTableRowToParamDataSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDataTableRowToParamDataSettings.InnerSingleton;
}

// InputPinProperties @ 149b92650

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGDataTableRowToParamDataSettings::InputPinProperties
          (UPCGDataTableRowToParamDataSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b94430

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGDataTableRowToParamDataSettings::OutputPinProperties
          (UPCGDataTableRowToParamDataSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Param);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,false,true,pFVar3);
  return __return_storage_ptr__;
}

// PostLoad @ 149b95a00

void __thiscall
UPCGDataTableRowToParamDataSettings::PostLoad(UPCGDataTableRowToParamDataSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGDataTableRowToParamDataSettings @ 149b984a0

void __cdecl
UPCGDataTableRowToParamDataSettings::StaticRegisterNativesUPCGDataTableRowToParamDataSettings(void)

{
  return;
}

