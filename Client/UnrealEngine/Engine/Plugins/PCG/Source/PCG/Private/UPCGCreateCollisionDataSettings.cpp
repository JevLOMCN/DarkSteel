// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149b2fbf0

UClass * __cdecl UPCGCreateCollisionDataSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCreateCollisionDataSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCreateCollisionDataSettings",
               &Z_Registration_Info_UClass_UPCGCreateCollisionDataSettings.InnerSingleton,
               StaticRegisterNativesUPCGCreateCollisionDataSettings,0x110,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCreateCollisionDataSettings>,
               InternalVTableHelperCtorCaller<UPCGCreateCollisionDataSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCreateCollisionDataSettings.InnerSingleton;
}

// UPCGCreateCollisionDataSettings @ 149b55bf0

UPCGCreateCollisionDataSettings * __thiscall
UPCGCreateCollisionDataSettings::UPCGCreateCollisionDataSettings
          (UPCGCreateCollisionDataSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGCreateCollisionDataSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->CollisionAttribute);
  this->CollisionQueryFlag = Simple;
  this->bWarnIfAttributeCouldNotBeUsed = true;
  this->bSynchronousLoad = false;
  return this;
}

// UPCGCreateCollisionDataSettings @ 149b55c40

UPCGCreateCollisionDataSettings * __thiscall
UPCGCreateCollisionDataSettings::UPCGCreateCollisionDataSettings
          (UPCGCreateCollisionDataSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGCreateCollisionDataSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->CollisionAttribute);
  this->CollisionQueryFlag = Simple;
  this->bWarnIfAttributeCouldNotBeUsed = true;
  this->bSynchronousLoad = false;
  return this;
}

// ~UPCGCreateCollisionDataSettings @ 149b58cb0

void __thiscall
UPCGCreateCollisionDataSettings::~UPCGCreateCollisionDataSettings
          (UPCGCreateCollisionDataSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGCreateCollisionDataSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->CollisionAttribute).field_0x28,
             *(int *)&(this->CollisionAttribute).field_0x30);
  pvVar1 = *(void **)&(this->CollisionAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149b6a390

TSharedPtr<IPCGElement,1> * __thiscall
UPCGCreateCollisionDataSettings::CreateElement
          (UPCGCreateCollisionDataSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGCreateCollisionDataElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGCreateCollisionDataElement__6B_;
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

// GetPrivateStaticClass @ 149b90080

UClass * __cdecl UPCGCreateCollisionDataSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCreateCollisionDataSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCreateCollisionDataSettings",
               &Z_Registration_Info_UClass_UPCGCreateCollisionDataSettings.InnerSingleton,
               StaticRegisterNativesUPCGCreateCollisionDataSettings,0x110,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCreateCollisionDataSettings>,
               InternalVTableHelperCtorCaller<UPCGCreateCollisionDataSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCreateCollisionDataSettings.InnerSingleton;
}

// InputPinProperties @ 149b921e0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGCreateCollisionDataSettings::InputPinProperties
          (UPCGCreateCollisionDataSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointInputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b93e60

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGCreateCollisionDataSettings::OutputPinProperties
          (UPCGCreateCollisionDataSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Primitive);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// PostLoad @ 149b95950

void __thiscall UPCGCreateCollisionDataSettings::PostLoad(UPCGCreateCollisionDataSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGCreateCollisionDataSettings @ 149b983c0

void __cdecl
UPCGCreateCollisionDataSettings::StaticRegisterNativesUPCGCreateCollisionDataSettings(void)

{
  return;
}

