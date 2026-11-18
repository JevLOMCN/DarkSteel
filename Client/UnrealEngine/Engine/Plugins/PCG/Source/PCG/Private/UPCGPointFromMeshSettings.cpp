// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149b9da30

UClass * __cdecl UPCGPointFromMeshSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPointFromMeshSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPointFromMeshSettings",
               &Z_Registration_Info_UClass_UPCGPointFromMeshSettings.InnerSingleton,
               StaticRegisterNativesUPCGPointFromMeshSettings,0x100,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGPointFromMeshSettings>,
               InternalVTableHelperCtorCaller<UPCGPointFromMeshSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPointFromMeshSettings.InnerSingleton;
}

// UPCGPointFromMeshSettings @ 149be79a0

UPCGPointFromMeshSettings * __thiscall
UPCGPointFromMeshSettings::UPCGPointFromMeshSettings
          (UPCGPointFromMeshSettings *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this_00 = &(this->Mesh).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UPCGPointFromMeshSettings__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->Mesh).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Mesh).SoftObjectPtr = 0;
  *(undefined8 *)&(this->Mesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Mesh).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->MeshPathAttributeName).ComparisonIndex = 0;
  (this->MeshPathAttributeName).Number = 0;
  this->bSynchronousLoad = false;
  return this;
}

// UPCGPointFromMeshSettings @ 149be7a10

UPCGPointFromMeshSettings * __thiscall
UPCGPointFromMeshSettings::UPCGPointFromMeshSettings
          (UPCGPointFromMeshSettings *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this_00 = &(this->Mesh).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UPCGPointFromMeshSettings__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->Mesh).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Mesh).SoftObjectPtr = 0;
  *(undefined8 *)&(this->Mesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Mesh).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->MeshPathAttributeName).ComparisonIndex = 0;
  (this->MeshPathAttributeName).Number = 0;
  this->bSynchronousLoad = false;
  return this;
}

// ~UPCGPointFromMeshSettings @ 149be9f80

void __thiscall
UPCGPointFromMeshSettings::~UPCGPointFromMeshSettings(UPCGPointFromMeshSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGPointFromMeshSettings__6B_;
  pvVar1 = *(void **)&(this->Mesh).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c05aa0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGPointFromMeshSettings::CreateElement
          (UPCGPointFromMeshSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGPointFromMeshElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGPointFromMeshElement__6B_;
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

// GetPrivateStaticClass @ 149c26390

UClass * __cdecl UPCGPointFromMeshSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPointFromMeshSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPointFromMeshSettings",
               &Z_Registration_Info_UClass_UPCGPointFromMeshSettings.InnerSingleton,
               StaticRegisterNativesUPCGPointFromMeshSettings,0x100,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGPointFromMeshSettings>,
               InternalVTableHelperCtorCaller<UPCGPointFromMeshSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPointFromMeshSettings.InnerSingleton;
}

// InputPinProperties @ 149c2ca70

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGPointFromMeshSettings::InputPinProperties
          (UPCGPointFromMeshSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c2eac0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGPointFromMeshSettings::OutputPinProperties
          (UPCGPointFromMeshSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// PostLoad @ 149c2f360

void __thiscall UPCGPointFromMeshSettings::PostLoad(UPCGPointFromMeshSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGPointFromMeshSettings @ 149c35550

void __cdecl UPCGPointFromMeshSettings::StaticRegisterNativesUPCGPointFromMeshSettings(void)

{
  return;
}

