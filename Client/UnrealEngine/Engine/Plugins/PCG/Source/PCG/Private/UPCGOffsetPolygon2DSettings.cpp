// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149c96b00

UClass * __cdecl UPCGOffsetPolygon2DSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGOffsetPolygon2DSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGOffsetPolygon2DSettings",
               &Z_Registration_Info_UClass_UPCGOffsetPolygon2DSettings.InnerSingleton,
               StaticRegisterNativesUPCGOffsetPolygon2DSettings,0x118,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGOffsetPolygon2DSettings>,
               InternalVTableHelperCtorCaller<UPCGOffsetPolygon2DSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGOffsetPolygon2DSettings.InnerSingleton;
}

// UPCGOffsetPolygon2DSettings @ 149ca48e0

UPCGOffsetPolygon2DSettings * __thiscall
UPCGOffsetPolygon2DSettings::UPCGOffsetPolygon2DSettings
          (UPCGOffsetPolygon2DSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->Operation = Offset;
  this->_padding_ = (longlong)&___7UPCGOffsetPolygon2DSettings__6B_;
  this->bInheritMetadata = true;
  this->bUseOffsetFromInput = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->OffsetAttribute);
  this->Offset = 100.0;
  return this;
}

// UPCGOffsetPolygon2DSettings @ 149ca4940

UPCGOffsetPolygon2DSettings * __thiscall
UPCGOffsetPolygon2DSettings::UPCGOffsetPolygon2DSettings
          (UPCGOffsetPolygon2DSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->Operation = Offset;
  this->_padding_ = (longlong)&___7UPCGOffsetPolygon2DSettings__6B_;
  this->bInheritMetadata = true;
  this->bUseOffsetFromInput = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->OffsetAttribute);
  this->Offset = 100.0;
  return this;
}

// ~UPCGOffsetPolygon2DSettings @ 149ca67b0

void __thiscall
UPCGOffsetPolygon2DSettings::~UPCGOffsetPolygon2DSettings(UPCGOffsetPolygon2DSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGOffsetPolygon2DSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->OffsetAttribute).field_0x28,
             *(int *)&(this->OffsetAttribute).field_0x30);
  pvVar1 = *(void **)&(this->OffsetAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149cb93e0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGOffsetPolygon2DSettings::CreateElement
          (UPCGOffsetPolygon2DSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGOffsetPolygonElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGOffsetPolygonElement__6B_;
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

// GetPrivateStaticClass @ 149ccbbb0

UClass * __cdecl UPCGOffsetPolygon2DSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGOffsetPolygon2DSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGOffsetPolygon2DSettings",
               &Z_Registration_Info_UClass_UPCGOffsetPolygon2DSettings.InnerSingleton,
               StaticRegisterNativesUPCGOffsetPolygon2DSettings,0x118,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGOffsetPolygon2DSettings>,
               InternalVTableHelperCtorCaller<UPCGOffsetPolygon2DSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGOffsetPolygon2DSettings.InnerSingleton;
}

// InputPinProperties @ 149ccd0b0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGOffsetPolygon2DSettings::InputPinProperties
          (UPCGOffsetPolygon2DSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGPinProperties *pFVar5;
  FName local_res8;
  FPCGDataTypeIdentifier local_28;
  
  PCGPolygon2DUtils::DefaultPolygonInputPinProperties(__return_storage_ptr__);
  if (this->bUseOffsetFromInput != false) {
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
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Param|Polygon2D);
    FLazyName::Resolve(&PCGOffsetPolygon2D::OffsetPinLabel);
    pFVar5 = FPCGPinProperties::FPCGPinProperties
                       ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),&local_res8,pFVar4,
                        true,true,pFVar3);
    pFVar5->PinStatus = Required;
  }
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149cce290

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGOffsetPolygon2DSettings::OutputPinProperties
          (UPCGOffsetPolygon2DSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  PCGPolygon2DUtils::DefaultPolygonOutputPinProperties(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGOffsetPolygon2DSettings @ 149cdd4c0

void __cdecl UPCGOffsetPolygon2DSettings::StaticRegisterNativesUPCGOffsetPolygon2DSettings(void)

{
  return;
}

