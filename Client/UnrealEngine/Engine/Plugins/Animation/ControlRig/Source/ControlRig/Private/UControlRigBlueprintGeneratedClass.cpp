// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 9

// StaticClass @ 14a1fd8f0

UClass * __cdecl UControlRigBlueprintGeneratedClass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigBlueprintGeneratedClass.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigBlueprintGeneratedClass",
               &Z_Registration_Info_UClass_UControlRigBlueprintGeneratedClass.InnerSingleton,
               StaticRegisterNativesUControlRigBlueprintGeneratedClass,0x4a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UControlRigBlueprintGeneratedClass>,
               InternalVTableHelperCtorCaller<UControlRigBlueprintGeneratedClass>,local_res8,
               URigVMBlueprintGeneratedClass::StaticClass,UPackage::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigBlueprintGeneratedClass.InnerSingleton;
}

// UControlRigBlueprintGeneratedClass @ 14a222450

UControlRigBlueprintGeneratedClass * __thiscall
UControlRigBlueprintGeneratedClass::UControlRigBlueprintGeneratedClass
          (UControlRigBlueprintGeneratedClass *this,FVTableHelper *param_1)

{
  URigVMBlueprintGeneratedClass::URigVMBlueprintGeneratedClass
            ((URigVMBlueprintGeneratedClass *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UClass__;
  (this->PreviewSkeletalMesh).AssetPath.PackageName.ComparisonIndex = 0;
  (this->PreviewSkeletalMesh).AssetPath.PackageName.Number = 0;
  this->_padding_ = (longlong)&_vftable__for__IBlueprintPropertyGuidProvider__;
  (this->PreviewSkeletalMesh).AssetPath.AssetName.ComparisonIndex = 0;
  (this->PreviewSkeletalMesh).AssetPath.AssetName.Number = 0;
  this->_padding_ = (longlong)&___7UControlRigBlueprintGeneratedClass__6B_;
  (this->PreviewSkeletalMesh).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PreviewSkeletalMesh).SubPathString.Data.ArrayNum = 0;
  (this->PreviewSkeletalMesh).SubPathString.Data.ArrayMax = 0;
  ::FName::FName(&this->ItemTypeDisplayName,L"Control Rig");
  FRigModuleSettings::FRigModuleSettings(&this->RigModuleSettings);
  (this->ModuleReferenceData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModuleReferenceData).ArrayNum = 0;
  (this->ModuleReferenceData).ArrayMax = 0;
  (this->CustomThumbnail).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomThumbnail).Data.ArrayNum = 0;
  (this->CustomThumbnail).Data.ArrayMax = 0;
  return this;
}

// UControlRigBlueprintGeneratedClass @ 14a222500

UControlRigBlueprintGeneratedClass * __thiscall
UControlRigBlueprintGeneratedClass::UControlRigBlueprintGeneratedClass
          (UControlRigBlueprintGeneratedClass *this,FObjectInitializer *param_1)

{
  URigVMBlueprintGeneratedClass::URigVMBlueprintGeneratedClass
            ((URigVMBlueprintGeneratedClass *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UClass__;
  (this->PreviewSkeletalMesh).AssetPath.PackageName.ComparisonIndex = 0;
  (this->PreviewSkeletalMesh).AssetPath.PackageName.Number = 0;
  this->_padding_ = (longlong)&_vftable__for__IBlueprintPropertyGuidProvider__;
  (this->PreviewSkeletalMesh).AssetPath.AssetName.ComparisonIndex = 0;
  (this->PreviewSkeletalMesh).AssetPath.AssetName.Number = 0;
  this->_padding_ = (longlong)&___7UControlRigBlueprintGeneratedClass__6B_;
  (this->PreviewSkeletalMesh).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PreviewSkeletalMesh).SubPathString.Data.ArrayNum = 0;
  (this->PreviewSkeletalMesh).SubPathString.Data.ArrayMax = 0;
  ::FName::FName(&this->ItemTypeDisplayName,L"Control Rig");
  FRigModuleSettings::FRigModuleSettings(&this->RigModuleSettings);
  (this->ModuleReferenceData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModuleReferenceData).ArrayNum = 0;
  (this->ModuleReferenceData).ArrayMax = 0;
  (this->CustomThumbnail).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomThumbnail).Data.ArrayNum = 0;
  (this->CustomThumbnail).Data.ArrayMax = 0;
  return this;
}

// ~UControlRigBlueprintGeneratedClass @ 14a226930

void __thiscall
UControlRigBlueprintGeneratedClass::~UControlRigBlueprintGeneratedClass
          (UControlRigBlueprintGeneratedClass *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UClass__;
  this->_padding_ = (longlong)&_vftable__for__IBlueprintPropertyGuidProvider__;
  this->_padding_ = (longlong)&___7UControlRigBlueprintGeneratedClass__6B_;
  pFVar1 = (this->CustomThumbnail).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FModuleReferenceData,int>
            ((FModuleReferenceData *)(this->ModuleReferenceData).AllocatorInstance.Data,
             (this->ModuleReferenceData).ArrayNum);
  pFVar1 = (this->ModuleReferenceData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRigModuleSettings::~FRigModuleSettings(&this->RigModuleSettings);
  pFVar1 = (this->PreviewSkeletalMesh).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  URigVMBlueprintGeneratedClass::~URigVMBlueprintGeneratedClass
            ((URigVMBlueprintGeneratedClass *)this);
  return;
}

// GetPrivateStaticClass @ 14a267bd0

UClass * __cdecl UControlRigBlueprintGeneratedClass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigBlueprintGeneratedClass.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UClass::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigBlueprintGeneratedClass",
               &Z_Registration_Info_UClass_UControlRigBlueprintGeneratedClass.InnerSingleton,
               StaticRegisterNativesUControlRigBlueprintGeneratedClass,0x4a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UControlRigBlueprintGeneratedClass>,
               InternalVTableHelperCtorCaller<UControlRigBlueprintGeneratedClass>,local_res8,
               URigVMBlueprintGeneratedClass::StaticClass,UPackage::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigBlueprintGeneratedClass.InnerSingleton;
}

// IsControlRigModule @ 14a2741d0

bool __thiscall
UControlRigBlueprintGeneratedClass::IsControlRigModule(UControlRigBlueprintGeneratedClass *this)

{
  if ((1 < (this->RigModuleSettings).Identifier.Name.Data.ArrayNum) &&
     ((this->RigModuleSettings).ExposedConnectors.ArrayNum != 0)) {
    return true;
  }
  return false;
}

// Serialize @ 14a28e9d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UControlRigBlueprintGeneratedClass::Serialize
          (UControlRigBlueprintGeneratedClass *this,FArchive *param_1)

{
  FName FVar1;
  longlong lVar2;
  int iVar3;
  FName *pFVar4;
  UPackage *pUVar5;
  URigVM *this_00;
  UClass *pUVar6;
  ForAnyElementType FVar7;
  FName local_res10;
  FString local_38;
  FString local_28;
  
  FStatsHierarchical::BeginMeasurement("UControlRigBlueprintGeneratedClass::Serialize");
  UBlueprintGeneratedClass::Serialize((UBlueprintGeneratedClass *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FControlRigObjectVersion::GUID);
  iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FControlRigObjectVersion::GUID);
  if (2 < iVar3) {
    LOCK();
    NumVMs = (TAtomic<unsigned_int>)((int)NumVMs + 1);
    UNLOCK();
    local_res10 = (FName)this->_padding_;
    ::FName::ToString(&local_res10,&local_38);
    ::FString::PrintfImpl(&local_28,L"%s_VM_%u");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar7.Data = local_28.Data.AllocatorInstance.Data;
    }
    pFVar4 = ::FName::FName(&local_res10,(wchar_t *)FVar7.Data);
    FVar1 = *pFVar4;
    pUVar5 = GetTransientPackage();
    this_00 = NewObject<URigVM>((UObject *)pUVar5,FVar1,RF_NoFlags,(UObject *)0x0,false,
                                (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if (this->_padding_ == 0) {
      UClass::InternalCreateDefaultObjectWrapper((UClass *)this);
    }
    lVar2 = this->_padding_;
    if (lVar2 != 0) {
      pUVar6 = UControlRig::StaticClass();
      iVar3 = (int)pUVar6->_padding_;
      if ((((iVar3 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar6->_padding_)) && ((param_1->field_0x28 & 4) != 0)) &&
         (*(longlong *)(lVar2 + 0x58) != 0)) {
        URigVM::CreateLocalizedRegistryIfRequired(this_00,false);
        URigVM::CopyDataForSerialization(this_00,*(URigVM **)(lVar2 + 0x58));
      }
    }
    (**(code **)(this_00->_padding_ + 200))(this_00,param_1);
    lVar2 = this->_padding_;
    if (lVar2 != 0) {
      pUVar6 = UControlRig::StaticClass();
      iVar3 = (int)pUVar6->_padding_;
      if (((iVar3 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar3 * 8)
           == &pUVar6->_padding_)) &&
         (((param_1->field_0x28 & 1) != 0 && (*(URigVM **)(lVar2 + 0x58) != (URigVM *)0x0)))) {
        URigVM::CopyDataForSerialization(*(URigVM **)(lVar2 + 0x58),this_00);
      }
    }
    iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FControlRigObjectVersion::GUID);
    if ((0x17 < iVar3) &&
       (TArrayPrivateFriend::Serialize<FRigVMGraphFunctionData,TSizedDefaultAllocator<32>_>
                  (param_1,(TArray<FRigVMGraphFunctionData,TSizedDefaultAllocator<32>_> *)
                           &this->_padding_), (param_1->field_0x2b & 1) != 0)) {
      TArrayPrivateFriend::Serialize<FRigVMGraphFunctionData,TSizedDefaultAllocator<32>_>
                (param_1,(TArray<FRigVMGraphFunctionData,TSizedDefaultAllocator<32>_> *)
                         &this->_padding_);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// Serialize @ 14a28ec10

void __thiscall
UControlRigBlueprintGeneratedClass::Serialize
          (UControlRigBlueprintGeneratedClass *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUControlRigBlueprintGeneratedClass @ 14a297fc0

void __cdecl
UControlRigBlueprintGeneratedClass::StaticRegisterNativesUControlRigBlueprintGeneratedClass(void)

{
  return;
}

