// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149b30380

UClass * __cdecl UPCGFilterByTypeSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGFilterByTypeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGFilterByTypeSettings",
               &Z_Registration_Info_UClass_UPCGFilterByTypeSettings.InnerSingleton,
               StaticRegisterNativesUPCGFilterByTypeSettings,0xe8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGFilterByTypeSettings>,
               InternalVTableHelperCtorCaller<UPCGFilterByTypeSettings>,local_res8,
               UPCGFilterDataBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGFilterByTypeSettings.InnerSingleton;
}

// UPCGFilterByTypeSettings @ 149b57600

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

UPCGFilterByTypeSettings * __thiscall
UPCGFilterByTypeSettings::UPCGFilterByTypeSettings
          (UPCGFilterByTypeSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGFilterByTypeSettings__6B_;
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&this->TargetType,Any);
  this->bShowOutsideFilter = false;
  return this;
}

// UPCGFilterByTypeSettings @ 149b57640

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

UPCGFilterByTypeSettings * __thiscall
UPCGFilterByTypeSettings::UPCGFilterByTypeSettings
          (UPCGFilterByTypeSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGFilterByTypeSettings__6B_;
  FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&this->TargetType,Any);
  this->bShowOutsideFilter = false;
  return this;
}

// ~UPCGFilterByTypeSettings @ 149b59290

void __thiscall UPCGFilterByTypeSettings::~UPCGFilterByTypeSettings(UPCGFilterByTypeSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGFilterByTypeSettings__6B_;
  pFVar1 = (this->TargetType).Ids.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPCGFilterDataBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149b6b590

TSharedPtr<IPCGElement,1> * __thiscall
UPCGFilterByTypeSettings::CreateElement
          (UPCGFilterByTypeSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGFilterByTypeElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGFilterByTypeElement__6B_;
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

// GetCurrentPinTypesID @ 149b8df00

FPCGDataTypeIdentifier * __thiscall
UPCGFilterByTypeSettings::GetCurrentPinTypesID
          (UPCGFilterByTypeSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__,
          UPCGPin *param_1)

{
  code *pcVar1;
  bool bVar2;
  FPCGDataTypeIdentifier *pFVar3;
  
  if (param_1 == (UPCGPin *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPin",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGFilterByType.cpp"
                       ,0x25,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPCGDataTypeIdentifier *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((param_1->Properties).Label == PCGPinConstants::DefaultInFilterLabel) {
    FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,&this->TargetType);
    return __return_storage_ptr__;
  }
  UPCGSettings::GetCurrentPinTypesID((UPCGSettings *)this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149b91280

UClass * __cdecl UPCGFilterByTypeSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGFilterByTypeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGFilterByTypeSettings",
               &Z_Registration_Info_UClass_UPCGFilterByTypeSettings.InnerSingleton,
               StaticRegisterNativesUPCGFilterByTypeSettings,0xe8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGFilterByTypeSettings>,
               InternalVTableHelperCtorCaller<UPCGFilterByTypeSettings>,local_res8,
               UPCGFilterDataBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGFilterByTypeSettings.InnerSingleton;
}

// HasExecutionDependencyPin @ 149b91b40

bool __thiscall UPCGFilterByTypeSettings::HasExecutionDependencyPin(UPCGFilterByTypeSettings *this)

{
  return false;
}

// OutputPinProperties @ 149b94830

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGFilterByTypeSettings::OutputPinProperties
          (UPCGFilterByTypeSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FName *pFVar2;
  int iVar3;
  FText *pFVar4;
  FPCGDataTypeIdentifier *pFVar5;
  FName FVar6;
  longlong lVar7;
  FName *pFVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  FPCGDataTypeIdentifier local_48;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar3 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar3 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar4 = FText::GetEmpty();
  pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_48,Any);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar3 * 0x30),
             &PCGPinConstants::DefaultInFilterLabel,pFVar5,true,true,pFVar4);
  iVar3 = __return_storage_ptr__->ArrayNum;
  if (iVar3 == __return_storage_ptr__->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar3 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar4 = FText::GetEmpty();
  pFVar5 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_48,Any);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar3 * 0x30),
             &PCGPinConstants::DefaultOutFilterLabel,pFVar5,true,true,pFVar4);
  if ((this->bShowOutsideFilter == false) &&
     (lVar7 = (longlong)__return_storage_ptr__->ArrayNum, __return_storage_ptr__->ArrayNum != 0)) {
    pFVar2 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
    iVar12 = 0;
    bVar13 = *pFVar2 != PCGPinConstants::DefaultOutFilterLabel;
    lVar9 = 0;
    FVar6 = PCGPinConstants::DefaultOutFilterLabel;
    iVar3 = 0;
    do {
      lVar9 = lVar9 + 1;
      iVar11 = iVar3 + 1;
      if (lVar9 < lVar7) {
        pFVar8 = pFVar2 + lVar9 * 6;
        do {
          if (bVar13 != (*pFVar8 != FVar6)) break;
          iVar11 = iVar11 + 1;
          lVar9 = lVar9 + 1;
          pFVar8 = pFVar8 + 6;
        } while (lVar9 < lVar7);
      }
      iVar10 = iVar11 - iVar3;
      if (bVar13 == false) {
        DestructItems<FPCGPinProperties,int>
                  ((FPCGPinProperties *)(pFVar2 + (longlong)iVar3 * 6),iVar10);
        FVar6 = PCGPinConstants::DefaultOutFilterLabel;
      }
      else {
        if (iVar12 != iVar3) {
          memmove(pFVar2 + (longlong)iVar12 * 6,pFVar2 + (longlong)iVar3 * 6,(longlong)iVar10 * 0x30
                 );
          FVar6 = PCGPinConstants::DefaultOutFilterLabel;
        }
        iVar12 = iVar12 + iVar10;
      }
      bVar13 = (bool)(bVar13 ^ 1);
      iVar3 = iVar11;
    } while (lVar9 < lVar7);
    __return_storage_ptr__->ArrayNum = iVar12;
  }
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGFilterByTypeSettings @ 149b98570

void __cdecl UPCGFilterByTypeSettings::StaticRegisterNativesUPCGFilterByTypeSettings(void)

{
  return;
}

