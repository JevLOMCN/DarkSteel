// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 8

// StaticClass @ 14cedc520

UClass * __cdecl UPCGGetDynamicMeshDataSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetDynamicMeshDataSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGGetDynamicMeshDataSettings",
               &Z_Registration_Info_UClass_UPCGGetDynamicMeshDataSettings.InnerSingleton,
               StaticRegisterNativesUPCGGetDynamicMeshDataSettings,0x1c8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGetDynamicMeshDataSettings>,
               InternalVTableHelperCtorCaller<UPCGGetDynamicMeshDataSettings>,local_res8,
               UPCGDataFromActorSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetDynamicMeshDataSettings.InnerSingleton;
}

// UPCGGetDynamicMeshDataSettings @ 14cee3ad0

UPCGGetDynamicMeshDataSettings * __thiscall
UPCGGetDynamicMeshDataSettings::UPCGGetDynamicMeshDataSettings
          (UPCGGetDynamicMeshDataSettings *this,FVTableHelper *param_1)

{
  UPCGDataFromActorSettings::UPCGDataFromActorSettings((UPCGDataFromActorSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGGetDynamicMeshDataSettings__6B_;
  (this->Options).bWantNormals = true;
  (this->Options).bWantTangents = true;
  (this->Options).bWantInstanceColors = false;
  (this->Options).RequestedLOD.LODType = MaxAvailable;
  *(undefined3 *)&(this->Options).RequestedLOD.field_0x1 = 0;
  (this->Options).RequestedLOD.LODIndex = 0;
  return this;
}

// UPCGGetDynamicMeshDataSettings @ 14cee3b10

UPCGGetDynamicMeshDataSettings * __thiscall
UPCGGetDynamicMeshDataSettings::UPCGGetDynamicMeshDataSettings
          (UPCGGetDynamicMeshDataSettings *this,FObjectInitializer *param_1)

{
  UPCGDataFromActorSettings::UPCGDataFromActorSettings((UPCGDataFromActorSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGGetDynamicMeshDataSettings__6B_;
  (this->Options).bWantNormals = true;
  (this->Options).bWantTangents = true;
  (this->Options).bWantInstanceColors = false;
  (this->Options).RequestedLOD.LODType = MaxAvailable;
  *(undefined3 *)&(this->Options).RequestedLOD.field_0x1 = 0;
  (this->Options).RequestedLOD.LODIndex = 0;
  return this;
}

// ~UPCGGetDynamicMeshDataSettings @ 14cee4b40

void __thiscall
UPCGGetDynamicMeshDataSettings::~UPCGGetDynamicMeshDataSettings
          (UPCGGetDynamicMeshDataSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGGetDynamicMeshDataSettings__6B_;
  UPCGDataFromActorSettings::~UPCGDataFromActorSettings((UPCGDataFromActorSettings *)this);
  return;
}

// GetDataFilter @ 14cef1e20

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall
UPCGGetDynamicMeshDataSettings::GetDataFilter(UPCGGetDynamicMeshDataSettings *this)

{
  return DynamicMesh;
}

// GetPrivateStaticClass @ 14cef3560

UClass * __cdecl UPCGGetDynamicMeshDataSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGGetDynamicMeshDataSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGGetDynamicMeshDataSettings",
               &Z_Registration_Info_UClass_UPCGGetDynamicMeshDataSettings.InnerSingleton,
               StaticRegisterNativesUPCGGetDynamicMeshDataSettings,0x1c8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGGetDynamicMeshDataSettings>,
               InternalVTableHelperCtorCaller<UPCGGetDynamicMeshDataSettings>,local_res8,
               UPCGDataFromActorSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGGetDynamicMeshDataSettings.InnerSingleton;
}

// OutputPinProperties @ 14cef4480

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGGetDynamicMeshDataSettings::OutputPinProperties
          (UPCGGetDynamicMeshDataSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,DynamicMesh);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGGetDynamicMeshDataSettings @ 14cef9c20

void __cdecl
UPCGGetDynamicMeshDataSettings::StaticRegisterNativesUPCGGetDynamicMeshDataSettings(void)

{
  return;
}

