// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cd429f0

UClass * __cdecl UWeldMeshEdgesToolProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWeldMeshEdgesToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"WeldMeshEdgesToolProperties",
               &Z_Registration_Info_UClass_UWeldMeshEdgesToolProperties.InnerSingleton,
               StaticRegisterNativesUWeldMeshEdgesToolProperties,0xd8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UWeldMeshEdgesToolProperties>,
               InternalVTableHelperCtorCaller<UWeldMeshEdgesToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWeldMeshEdgesToolProperties.InnerSingleton;
}

// UWeldMeshEdgesToolProperties @ 14cd52460

UWeldMeshEdgesToolProperties * __thiscall
UWeldMeshEdgesToolProperties::UWeldMeshEdgesToolProperties
          (UWeldMeshEdgesToolProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->Tolerance = 1e-06;
  this->_padding_ = (longlong)&___7UWeldMeshEdgesToolProperties__6B_;
  this->bOnlyUnique = false;
  this->bResolveTJunctions = false;
  this->bSplitBowties = true;
  this->AttrWeldingMode = OnWeldedMeshEdgesOnly;
  this->SplitNormalThreshold = 0.1;
  this->SplitTangentsThreshold = 0.1;
  this->SplitUVThreshold = 0.01;
  this->SplitColorThreshold = 0.01;
  return this;
}

// UWeldMeshEdgesToolProperties @ 14cd524d0

UWeldMeshEdgesToolProperties * __thiscall
UWeldMeshEdgesToolProperties::UWeldMeshEdgesToolProperties
          (UWeldMeshEdgesToolProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->Tolerance = 1e-06;
  this->_padding_ = (longlong)&___7UWeldMeshEdgesToolProperties__6B_;
  this->bOnlyUnique = false;
  this->bResolveTJunctions = false;
  this->bSplitBowties = true;
  this->AttrWeldingMode = OnWeldedMeshEdgesOnly;
  this->SplitNormalThreshold = 0.1;
  this->SplitTangentsThreshold = 0.1;
  this->SplitUVThreshold = 0.01;
  this->SplitColorThreshold = 0.01;
  return this;
}

// ~UWeldMeshEdgesToolProperties @ 14cd53bd0

void __thiscall
UWeldMeshEdgesToolProperties::~UWeldMeshEdgesToolProperties(UWeldMeshEdgesToolProperties *this)

{
  this->_padding_ = (longlong)&___7UWeldMeshEdgesToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd6ef80

UClass * __cdecl UWeldMeshEdgesToolProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWeldMeshEdgesToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"WeldMeshEdgesToolProperties",
               &Z_Registration_Info_UClass_UWeldMeshEdgesToolProperties.InnerSingleton,
               StaticRegisterNativesUWeldMeshEdgesToolProperties,0xd8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UWeldMeshEdgesToolProperties>,
               InternalVTableHelperCtorCaller<UWeldMeshEdgesToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWeldMeshEdgesToolProperties.InnerSingleton;
}

// StaticRegisterNativesUWeldMeshEdgesToolProperties @ 14cd815e0

void __cdecl UWeldMeshEdgesToolProperties::StaticRegisterNativesUWeldMeshEdgesToolProperties(void)

{
  return;
}

