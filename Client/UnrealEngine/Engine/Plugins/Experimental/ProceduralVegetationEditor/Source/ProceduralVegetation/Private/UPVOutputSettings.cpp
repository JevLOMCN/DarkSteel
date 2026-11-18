// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 9

// StaticClass @ 14da56f90

UClass * __cdecl UPVOutputSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPVOutputSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PVOutputSettings",
               &Z_Registration_Info_UClass_UPVOutputSettings.InnerSingleton,
               StaticRegisterNativesUPVOutputSettings,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPVOutputSettings>,
               InternalVTableHelperCtorCaller<UPVOutputSettings>,local_res8,
               UPVBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPVOutputSettings.InnerSingleton;
}

// UPVOutputSettings @ 14da66c10

UPVOutputSettings * __thiscall
UPVOutputSettings::UPVOutputSettings(UPVOutputSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPVOutputSettings__6B_;
  (this->ExportSettings).ContentBrowserFolder.Path.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ExportSettings).ContentBrowserFolder.Path.Data.ArrayNum = 0;
  (this->ExportSettings).ContentBrowserFolder.Path.Data.ArrayMax = 0;
  (this->ExportSettings).MeshName.ComparisonIndex = 0;
  (this->ExportSettings).MeshName.Number = 0;
  (this->ExportSettings).bCollision = false;
  (this->ExportSettings).CollisionGeneration = None;
  (this->ExportSettings).WindSettings.field0_0x0.DebugPtr = (UPVWindSettings *)0x0;
  (this->ExportSettings).bShouldExport = true;
  (this->ExportSettings).bShouldExportFoliage = true;
  (this->ExportSettings).ReplacePolicy = Replace;
  (this->ExportSettings).ExportMeshType = SkeletalMesh;
  (this->ExportSettings).bCreateNaniteFoliage = true;
  (this->ExportSettings).NaniteShapePreservation = Voxelize;
  return this;
}

// UPVOutputSettings @ 14da66c70

UPVOutputSettings * __thiscall UPVOutputSettings::UPVOutputSettings(UPVOutputSettings *this)

{
  FDirectoryPath *pFVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  FString *pFVar4;
  FName *pFVar5;
  UClass *pUVar6;
  UPVWindSettings *pUVar7;
  int iVar8;
  int *piVar9;
  FName local_res8;
  TStringView<wchar_t> local_28;
  TStringView<wchar_t> local_18;
  
  UPVBaseSettings::UPVBaseSettings((UPVBaseSettings *)this);
  this->_padding_ = (longlong)&___7UPVOutputSettings__6B_;
  (this->ExportSettings).bShouldExport = true;
  (this->ExportSettings).bShouldExportFoliage = true;
  (this->ExportSettings).ContentBrowserFolder.Path.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ExportSettings).ContentBrowserFolder.Path.Data.ArrayNum = 0;
  (this->ExportSettings).ContentBrowserFolder.Path.Data.ArrayMax = 0;
  (this->ExportSettings).MeshName.ComparisonIndex = 0;
  (this->ExportSettings).MeshName.Number = 0;
  (this->ExportSettings).ReplacePolicy = Replace;
  (this->ExportSettings).ExportMeshType = SkeletalMesh;
  (this->ExportSettings).bCreateNaniteFoliage = true;
  (this->ExportSettings).NaniteShapePreservation = Voxelize;
  (this->ExportSettings).bCollision = false;
  (this->ExportSettings).CollisionGeneration = None;
  (this->ExportSettings).WindSettings.field0_0x0.DebugPtr = (UPVWindSettings *)0x0;
  bVar3 = PCGHelpers::IsNewObjectAndNotDefault((UObject *)this,false);
  if (bVar3) {
    piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c);
    if (*piVar9 < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::FString::FString(&DefaultMeshName,"Output");
        atexit(`UPVOutputSettings::UPVOutputSettings'::__l5::
               _dynamic_atexit_destructor_for__DefaultMeshName__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    if (*piVar9 < ::_TSS1) {
      _Init_thread_header(&::_TSS1);
      if (::_TSS1 == -1) {
        ::FString::FString(&DefaultAssetPath,"/Game/ProceduralVegetation/");
        atexit(`UPVOutputSettings::UPVOutputSettings'::__l5::
               _dynamic_atexit_destructor_for__DefaultAssetPath__);
        _Init_thread_footer(&::_TSS1);
      }
    }
    if (*piVar9 < ::_TSS2) {
      _Init_thread_header(&::_TSS2);
      if (::_TSS2 == -1) {
        ::FString::FString(&DefaultWindSettingsPath,
                           "/ProceduralVegetationEditor/SampleAssets/WindSettings/DefaultTreeWindSettings.DefaultTreeWindSettings"
                          );
        atexit(`UPVOutputSettings::UPVOutputSettings'::__l5::
               _dynamic_atexit_destructor_for__DefaultWindSettingsPath__);
        _Init_thread_footer(&::_TSS2);
      }
    }
    pFVar4 = FPaths::GetPath((FString *)&local_18,&DefaultAssetPath);
    pFVar1 = &(this->ExportSettings).ContentBrowserFolder;
    if (&pFVar1->Path != pFVar4) {
      pFVar2 = (pFVar1->Path).Data.AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Path).Data.AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->ExportSettings).ContentBrowserFolder.Path.Data.ArrayNum = (pFVar4->Data).ArrayNum;
      (this->ExportSettings).ContentBrowserFolder.Path.Data.ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_18.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_18.DataPtr);
    }
    iVar8 = DefaultMeshName.Data.ArrayNum + -1;
    if (DefaultMeshName.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    pFVar5 = ::FName::FName(&local_res8,iVar8,(wchar_t *)DefaultMeshName.Data.AllocatorInstance.Data
                            ,FNAME_Add);
    local_28.Size = 0;
    local_28._12_4_ = 0;
    local_28.DataPtr = (wchar_t *)0x0;
    (this->ExportSettings).MeshName = *pFVar5;
    (this->ExportSettings).ReplacePolicy = Replace;
    local_18.DataPtr = (wchar_t *)DefaultWindSettingsPath.Data.AllocatorInstance.Data;
    local_18.Size = DefaultWindSettingsPath.Data.ArrayNum + -1;
    if (DefaultWindSettingsPath.Data.ArrayNum == 0) {
      local_18.Size = 0;
    }
    pUVar6 = UPVWindSettings::StaticClass();
    pUVar7 = (UPVWindSettings *)
             StaticLoadObject(pUVar6,(UObject *)0x0,&local_18,&local_28,0,(UPackageMap *)0x0,true,
                              (FLinkerInstancingContext *)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UPVWindSettings *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->ExportSettings).WindSettings.field0_0x0.DebugPtr = pUVar7;
  }
  return this;
}

// ~UPVOutputSettings @ 14da67dc0

void __thiscall UPVOutputSettings::~UPVOutputSettings(UPVOutputSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPVOutputSettings__6B_;
  pFVar1 = (this->ExportSettings).ContentBrowserFolder.Path.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPVBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 14da79a80

TSharedPtr<IPCGElement,1> * __thiscall
UPVOutputSettings::CreateElement
          (UPVOutputSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         &___7__TIntrusiveReferenceController_VFPVOutputElement___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = (longlong)&___7FPVOutputElement__6B_;
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

// GetInputPinTypeIdentifier @ 14da95d30

FPCGDataTypeIdentifier * __thiscall
UPVOutputSettings::GetInputPinTypeIdentifier
          (UPVOutputSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__)

{
  FPCGDataTypeBaseId *pFVar1;
  FPCGDataTypeBaseId *pFVar2;
  
  pFVar1 = FPVDataTypeInfoFoliageMesh::AsId();
  pFVar2 = FPVDataTypeInfoMesh::AsId();
  *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  (__return_storage_ptr__->Ids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Ids).ArrayNum = 0;
  (__return_storage_ptr__->Ids).ArrayMax = 0;
  __return_storage_ptr__->CustomSubtype = -1;
  FPCGDataTypeIdentifier::ComposeFromBaseId(__return_storage_ptr__,pFVar2);
  FPCGDataTypeIdentifier::ComposeFromBaseId(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14da99680

UClass * __cdecl UPVOutputSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPVOutputSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProceduralVegetation",L"PVOutputSettings",
               &Z_Registration_Info_UClass_UPVOutputSettings.InnerSingleton,
               StaticRegisterNativesUPVOutputSettings,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPVOutputSettings>,
               InternalVTableHelperCtorCaller<UPVOutputSettings>,local_res8,
               UPVBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPVOutputSettings.InnerSingleton;
}

// OutputPinProperties @ 14da9df80

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPVOutputSettings::OutputPinProperties
          (UPVOutputSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGPinProperties *this_00;
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
  this_00 = FPCGPinProperties::FPCGPinProperties
                      ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                       &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  this_00->PinStatus = Required;
  FPCGPinProperties::SetAllowMultipleConnections(this_00,false);
  this_00->bInvisiblePin = true;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPVOutputSettings @ 14daa9940

void __cdecl UPVOutputSettings::StaticRegisterNativesUPVOutputSettings(void)

{
  return;
}

