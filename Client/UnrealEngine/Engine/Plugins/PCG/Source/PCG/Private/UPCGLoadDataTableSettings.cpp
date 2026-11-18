// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149904070

UClass * __cdecl UPCGLoadDataTableSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGLoadDataTableSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGLoadDataTableSettings",
               &Z_Registration_Info_UClass_UPCGLoadDataTableSettings.InnerSingleton,
               StaticRegisterNativesUPCGLoadDataTableSettings,0x148,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGLoadDataTableSettings>,
               InternalVTableHelperCtorCaller<UPCGLoadDataTableSettings>,local_res8,
               UPCGExternalDataSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGLoadDataTableSettings.InnerSingleton;
}

// UPCGLoadDataTableSettings @ 1499c3cd0

UPCGLoadDataTableSettings * __thiscall
UPCGLoadDataTableSettings::UPCGLoadDataTableSettings
          (UPCGLoadDataTableSettings *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this_00 = &(this->DataTable).SoftObjectPtr.field_0x18;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UPCGLoadDataTableSettings__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->DataTable).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DataTable).SoftObjectPtr = 0;
  *(undefined8 *)&(this->DataTable).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DataTable).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this->OutputType = Point;
  this->bSynchronousLoad = false;
  return this;
}

// UPCGLoadDataTableSettings @ 1499c3d70

UPCGLoadDataTableSettings * __thiscall
UPCGLoadDataTableSettings::UPCGLoadDataTableSettings
          (UPCGLoadDataTableSettings *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this_00 = &(this->DataTable).SoftObjectPtr.field_0x18;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UPCGLoadDataTableSettings__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->DataTable).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DataTable).SoftObjectPtr = 0;
  *(undefined8 *)&(this->DataTable).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DataTable).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this->OutputType = Point;
  this->bSynchronousLoad = false;
  return this;
}

// ~UPCGLoadDataTableSettings @ 1499c6740

void __thiscall
UPCGLoadDataTableSettings::~UPCGLoadDataTableSettings(UPCGLoadDataTableSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGLoadDataTableSettings__6B_;
  pvVar1 = *(void **)&(this->DataTable).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UPCGExternalDataSettings__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FPCGAttributePropertyInputSelector>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FPCGAttributePropertyInputSelector>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FPCGAttributePropertyInputSelector>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 1499db790

TSharedPtr<IPCGElement,1> * __thiscall
UPCGLoadDataTableSettings::CreateElement
          (UPCGLoadDataTableSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGLoadDataTableElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGLoadDataTableElement__6B_;
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

// GetCurrentPinTypesID @ 1499f47a0

FPCGDataTypeIdentifier * __thiscall
UPCGLoadDataTableSettings::GetCurrentPinTypesID
          (UPCGLoadDataTableSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__,
          UPCGPin *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  FPCGDataTypeIdentifier *pFVar6;
  int iVar7;
  int iVar8;
  ForAnyElementType this_00;
  undefined4 local_res18 [2];
  FPCGDataTypeIdentifier local_78;
  FPCGDataTypeIdentifier local_60;
  FPCGDataTypeIdentifier local_48;
  
  local_res18[0] = 0;
  if (param_1 == (UPCGPin *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPin",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\IO\\PCGDataTableElement.cpp"
                       ,0x38,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FPCGDataTypeIdentifier *)(*pcVar2)();
      return pFVar6;
    }
  }
  bVar5 = UPCGPin::IsOutputPin(param_1);
  if (!bVar5) {
    UPCGSettings::GetCurrentPinTypesID((UPCGSettings *)this,__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  UPCGDataTypeIdentifierHelpers::GetIdentifierFromLegacyType(&local_60,this->OutputType);
  iVar7 = local_60.Ids.ArrayNum;
  if (iVar7 != 0) {
    pFVar1 = local_60.Ids.AllocatorInstance.Data + (longlong)iVar7 * 8;
    this_00.Data = local_60.Ids.AllocatorInstance.Data;
    while( true ) {
      iVar8 = local_60.Ids.ArrayNum;
      if (iVar8 != iVar7) {
        `TCheckedPointerIterator<FPCGDataTypeBaseId_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
        iVar8 = local_60.Ids.ArrayNum;
      }
      FVar4.Data = local_60.Ids.AllocatorInstance.Data;
      if (this_00.Data == pFVar1) {
        local_78.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.Ids.ArrayNum = iVar8;
        if (iVar8 == 0) {
          local_78.Ids.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar8,0,(ForAnyElementType *)&local_78,iVar8,&local_78.Ids.ArrayMax);
          ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                    (local_78.Ids.AllocatorInstance.Data,(FPCGDataTypeBaseId *)FVar4.Data,iVar8);
        }
        bVar3 = true;
        bVar5 = false;
        local_78.CustomSubtype = local_60.CustomSubtype;
        pFVar6 = &local_78;
        goto LAB_1499f4913;
      }
      bVar5 = FPCGDataTypeBaseId::IsValid((FPCGDataTypeBaseId *)this_00.Data);
      if (!bVar5) break;
      this_00.Data = this_00.Data + 8;
    }
  }
  pFVar6 = UPCGSettings::GetCurrentPinTypesID((UPCGSettings *)this,&local_48,param_1);
  bVar3 = false;
  bVar5 = true;
LAB_1499f4913:
  (__return_storage_ptr__->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Ids).AllocatorInstance.Data = (pFVar6->Ids).AllocatorInstance.Data;
  (pFVar6->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Ids).ArrayNum = (pFVar6->Ids).ArrayNum;
  (__return_storage_ptr__->Ids).ArrayMax = (pFVar6->Ids).ArrayMax;
  (pFVar6->Ids).ArrayNum = 0;
  (pFVar6->Ids).ArrayMax = 0;
  __return_storage_ptr__->CustomSubtype = pFVar6->CustomSubtype;
  if (bVar5) {
    if (local_48.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Ids.AllocatorInstance.Data);
    }
  }
  if ((bVar3) && (local_78.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.Ids.AllocatorInstance.Data);
  }
  if (local_60.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Ids.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1499fb510

UClass * __cdecl UPCGLoadDataTableSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGLoadDataTableSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGLoadDataTableSettings",
               &Z_Registration_Info_UClass_UPCGLoadDataTableSettings.InnerSingleton,
               StaticRegisterNativesUPCGLoadDataTableSettings,0x148,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGLoadDataTableSettings>,
               InternalVTableHelperCtorCaller<UPCGLoadDataTableSettings>,local_res8,
               UPCGExternalDataSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGLoadDataTableSettings.InnerSingleton;
}

// HasDynamicPins @ 1499fe4c0

bool __thiscall UPCGLoadDataTableSettings::HasDynamicPins(UPCGLoadDataTableSettings *this)

{
  return true;
}

// OutputPinProperties @ 149a03680

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGLoadDataTableSettings::OutputPinProperties
          (UPCGLoadDataTableSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGLoadDataTableSettings @ 149a10030

void __cdecl UPCGLoadDataTableSettings::StaticRegisterNativesUPCGLoadDataTableSettings(void)

{
  return;
}

