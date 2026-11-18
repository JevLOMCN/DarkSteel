// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 8

// StaticClass @ 14e2ec550

UClass * __cdecl UDatasmithStaticMeshCADImportData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithStaticMeshCADImportData.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithStaticMeshCADImportData",
               &Z_Registration_Info_UClass_UDatasmithStaticMeshCADImportData.InnerSingleton,
               StaticRegisterNativesUDatasmithStaticMeshCADImportData,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithStaticMeshCADImportData>,
               InternalVTableHelperCtorCaller<UDatasmithStaticMeshCADImportData>,local_res8,
               UDatasmithStaticMeshImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithStaticMeshCADImportData.InnerSingleton;
}

// UDatasmithStaticMeshCADImportData @ 14e2f5610

UDatasmithStaticMeshCADImportData * __thiscall
UDatasmithStaticMeshCADImportData::UDatasmithStaticMeshCADImportData
          (UDatasmithStaticMeshCADImportData *this,FVTableHelper *param_1)

{
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  *(undefined ***)this = &___7UDatasmithStaticMeshCADImportData__6B_;
  return this;
}

// UDatasmithStaticMeshCADImportData @ 14e2f5640

UDatasmithStaticMeshCADImportData * __thiscall
UDatasmithStaticMeshCADImportData::UDatasmithStaticMeshCADImportData
          (UDatasmithStaticMeshCADImportData *this,FObjectInitializer *param_1)

{
  UAssetImportData::UAssetImportData((UAssetImportData *)this,param_1);
  *(undefined ***)this = &___7UDatasmithStaticMeshCADImportData__6B_;
  return this;
}

// ~UDatasmithStaticMeshCADImportData @ 14e2f63f0

void __thiscall
UDatasmithStaticMeshCADImportData::~UDatasmithStaticMeshCADImportData
          (UDatasmithStaticMeshCADImportData *this)

{
  *(undefined ***)this = &___7UDatasmithAssetImportData__6B_;
  UAssetImportData::~UAssetImportData((UAssetImportData *)this);
  return;
}

// GetPrivateStaticClass @ 14e2fd280

UClass * __cdecl UDatasmithStaticMeshCADImportData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDatasmithStaticMeshCADImportData.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DatasmithContent",L"DatasmithStaticMeshCADImportData",
               &Z_Registration_Info_UClass_UDatasmithStaticMeshCADImportData.InnerSingleton,
               StaticRegisterNativesUDatasmithStaticMeshCADImportData,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDatasmithStaticMeshCADImportData>,
               InternalVTableHelperCtorCaller<UDatasmithStaticMeshCADImportData>,local_res8,
               UDatasmithStaticMeshImportData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDatasmithStaticMeshCADImportData.InnerSingleton;
}

// Serialize @ 14e2fe980

void __thiscall
UDatasmithStaticMeshCADImportData::Serialize
          (UDatasmithStaticMeshCADImportData *this,FArchive *param_1)

{
  int iVar1;
  FStripDataFlags local_res10 [12];
  
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEnterpriseObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FEnterpriseObjectVersion::GUID);
  if (0 < iVar1) {
    FStripDataFlags::FStripDataFlags(local_res10,param_1,'\0',&GOldestLoadablePackageFileUEVersion);
  }
  return;
}

// Serialize @ 14e2fe9e0

void __thiscall
UDatasmithStaticMeshCADImportData::Serialize
          (UDatasmithStaticMeshCADImportData *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchiveState *this_00;
  FStripDataFlags local_res10 [4];
  FSlotBase local_res18 [2];
  
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
  UObject::Serialize((UObject *)this,(FArchive *)this_00);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FEnterpriseObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer(this_00,&FEnterpriseObjectVersion::GUID);
  if (0 < iVar1) {
    FStripDataFlags::FStripDataFlags
              (local_res10,(FArchive *)this_00,'\0',&GOldestLoadablePackageFileUEVersion);
  }
  return;
}

// StaticRegisterNativesUDatasmithStaticMeshCADImportData @ 14e2fee40

void __cdecl
UDatasmithStaticMeshCADImportData::StaticRegisterNativesUDatasmithStaticMeshCADImportData(void)

{
  return;
}

