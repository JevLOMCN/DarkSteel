// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 7

// StaticClass @ 14cedc9d0

UClass * __cdecl UPCGSpawnDynamicMeshSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSpawnDynamicMeshSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGSpawnDynamicMeshSettings",
               &Z_Registration_Info_UClass_UPCGSpawnDynamicMeshSettings.InnerSingleton,
               StaticRegisterNativesUPCGSpawnDynamicMeshSettings,0x100,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSpawnDynamicMeshSettings>,
               InternalVTableHelperCtorCaller<UPCGSpawnDynamicMeshSettings>,local_res8,
               UPCGDynamicMeshBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSpawnDynamicMeshSettings.InnerSingleton;
}

// UPCGSpawnDynamicMeshSettings @ 14cee4140

UPCGSpawnDynamicMeshSettings * __thiscall
UPCGSpawnDynamicMeshSettings::UPCGSpawnDynamicMeshSettings
          (UPCGSpawnDynamicMeshSettings *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this_00 = &(this->TargetActor).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UPCGSpawnDynamicMeshSettings__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->TargetActor).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TargetActor).SoftObjectPtr = 0;
  *(undefined8 *)&(this->TargetActor).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TargetActor).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->PostProcessFunctionNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PostProcessFunctionNames).ArrayNum = 0;
  (this->PostProcessFunctionNames).ArrayMax = 0;
  return this;
}

// UPCGSpawnDynamicMeshSettings @ 14cee41b0

UPCGSpawnDynamicMeshSettings * __thiscall
UPCGSpawnDynamicMeshSettings::UPCGSpawnDynamicMeshSettings
          (UPCGSpawnDynamicMeshSettings *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this_00 = &(this->TargetActor).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UPCGSpawnDynamicMeshSettings__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->TargetActor).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->TargetActor).SoftObjectPtr = 0;
  *(undefined8 *)&(this->TargetActor).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->TargetActor).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->PostProcessFunctionNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PostProcessFunctionNames).ArrayNum = 0;
  (this->PostProcessFunctionNames).ArrayMax = 0;
  return this;
}

// ~UPCGSpawnDynamicMeshSettings @ 14cee4c90

void __thiscall
UPCGSpawnDynamicMeshSettings::~UPCGSpawnDynamicMeshSettings(UPCGSpawnDynamicMeshSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGSpawnDynamicMeshSettings__6B_;
  pFVar1 = (this->PostProcessFunctionNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->TargetActor).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  this->_padding_ = (longlong)&___7UPCGDynamicMeshBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 14ceeaa60

TSharedPtr<IPCGElement,1> * __thiscall
UPCGSpawnDynamicMeshSettings::CreateElement
          (UPCGSpawnDynamicMeshSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGSpawnDynamicMeshElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGSpawnDynamicMeshElement__6B_;
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

// GetPrivateStaticClass @ 14cef3920

UClass * __cdecl UPCGSpawnDynamicMeshSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSpawnDynamicMeshSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGSpawnDynamicMeshSettings",
               &Z_Registration_Info_UClass_UPCGSpawnDynamicMeshSettings.InnerSingleton,
               StaticRegisterNativesUPCGSpawnDynamicMeshSettings,0x100,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSpawnDynamicMeshSettings>,
               InternalVTableHelperCtorCaller<UPCGSpawnDynamicMeshSettings>,local_res8,
               UPCGDynamicMeshBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSpawnDynamicMeshSettings.InnerSingleton;
}

// StaticRegisterNativesUPCGSpawnDynamicMeshSettings @ 14cef9c70

void __cdecl UPCGSpawnDynamicMeshSettings::StaticRegisterNativesUPCGSpawnDynamicMeshSettings(void)

{
  return;
}

