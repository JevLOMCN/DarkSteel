// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshDescription
// Functions: 12

// StaticClass @ 143631eb0

UClass * __cdecl UMeshDescriptionBaseBulkData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshDescriptionBaseBulkData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshDescription",L"MeshDescriptionBaseBulkData",
               &Z_Registration_Info_UClass_UMeshDescriptionBaseBulkData.InnerSingleton,
               StaticRegisterNativesUMeshDescriptionBaseBulkData,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMeshDescriptionBaseBulkData>,
               InternalVTableHelperCtorCaller<UMeshDescriptionBaseBulkData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshDescriptionBaseBulkData.InnerSingleton;
}

// UMeshDescriptionBaseBulkData @ 1436579e0

UMeshDescriptionBaseBulkData * __thiscall
UMeshDescriptionBaseBulkData::UMeshDescriptionBaseBulkData
          (UMeshDescriptionBaseBulkData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UMeshDescriptionBaseBulkData__6B_;
  return this;
}

// UMeshDescriptionBaseBulkData @ 143657a10

UMeshDescriptionBaseBulkData * __thiscall
UMeshDescriptionBaseBulkData::UMeshDescriptionBaseBulkData(UMeshDescriptionBaseBulkData *this)

{
  UObject::UObject((UObject *)this);
  *(undefined ***)this = &___7UMeshDescriptionBaseBulkData__6B_;
  return this;
}

// ~UMeshDescriptionBaseBulkData @ 1436584c0

void __thiscall
UMeshDescriptionBaseBulkData::~UMeshDescriptionBaseBulkData(UMeshDescriptionBaseBulkData *this)

{
  *(undefined ***)this = &___7UMeshDescriptionBaseBulkData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 143674870

UClass * __cdecl UMeshDescriptionBaseBulkData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshDescriptionBaseBulkData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshDescription",L"MeshDescriptionBaseBulkData",
               &Z_Registration_Info_UClass_UMeshDescriptionBaseBulkData.InnerSingleton,
               StaticRegisterNativesUMeshDescriptionBaseBulkData,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMeshDescriptionBaseBulkData>,
               InternalVTableHelperCtorCaller<UMeshDescriptionBaseBulkData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshDescriptionBaseBulkData.InnerSingleton;
}

// IsEditorOnly @ 14367db80

bool __thiscall UMeshDescriptionBaseBulkData::IsEditorOnly(UMeshDescriptionBaseBulkData *this)

{
  return true;
}

// NeedsLoadForClient @ 14367e2f0

bool __thiscall UMeshDescriptionBaseBulkData::NeedsLoadForClient(UMeshDescriptionBaseBulkData *this)

{
  return false;
}

// NeedsLoadForEditorGame @ 14367e300

bool __thiscall
UMeshDescriptionBaseBulkData::NeedsLoadForEditorGame(UMeshDescriptionBaseBulkData *this)

{
  return true;
}

// NeedsLoadForServer @ 14367e310

bool __thiscall UMeshDescriptionBaseBulkData::NeedsLoadForServer(UMeshDescriptionBaseBulkData *this)

{
  return false;
}

// Serialize @ 14368c3e0

void __thiscall
UMeshDescriptionBaseBulkData::Serialize(UMeshDescriptionBaseBulkData *this,FArchive *param_1)

{
  return;
}

// Serialize @ 14368c3f0

void __thiscall
UMeshDescriptionBaseBulkData::Serialize
          (UMeshDescriptionBaseBulkData *this,FStructuredArchiveRecord param_1)

{
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  return;
}

// StaticRegisterNativesUMeshDescriptionBaseBulkData @ 143696eb0

void __cdecl UMeshDescriptionBaseBulkData::StaticRegisterNativesUMeshDescriptionBaseBulkData(void)

{
  return;
}

