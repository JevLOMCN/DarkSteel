// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cc8f390

UClass * __cdecl URemoveOccludedTrianglesToolProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URemoveOccludedTrianglesToolProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"RemoveOccludedTrianglesToolProperties",
               &Z_Registration_Info_UClass_URemoveOccludedTrianglesToolProperties.InnerSingleton,
               StaticRegisterNativesURemoveOccludedTrianglesToolProperties,0xe0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<URemoveOccludedTrianglesToolProperties>,
               InternalVTableHelperCtorCaller<URemoveOccludedTrianglesToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URemoveOccludedTrianglesToolProperties.InnerSingleton;
}

// URemoveOccludedTrianglesToolProperties @ 14ccbfe20

URemoveOccludedTrianglesToolProperties * __thiscall
URemoveOccludedTrianglesToolProperties::URemoveOccludedTrianglesToolProperties
          (URemoveOccludedTrianglesToolProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->OcclusionTestMethod = GeneralizedWindingNumber;
  this->TriangleSampling = VerticesAndCentroids;
  this->_padding_ = (longlong)&___7URemoveOccludedTrianglesToolProperties__6B_;
  this->WindingIsoValue = 0.5;
  this->AddRandomRays = 0;
  this->AddTriangleSamples = 0;
  this->bOnlySelfOcclude = false;
  this->ShrinkRemoval = 0;
  this->MinAreaIsland = 0.0;
  this->MinTriCountIsland = 0;
  this->Action = Remove;
  return this;
}

// URemoveOccludedTrianglesToolProperties @ 14ccbfe90

URemoveOccludedTrianglesToolProperties * __thiscall
URemoveOccludedTrianglesToolProperties::URemoveOccludedTrianglesToolProperties
          (URemoveOccludedTrianglesToolProperties *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,pFVar1);
  this->OcclusionTestMethod = GeneralizedWindingNumber;
  this->TriangleSampling = VerticesAndCentroids;
  this->_padding_ = (longlong)&___7URemoveOccludedTrianglesToolProperties__6B_;
  this->WindingIsoValue = 0.5;
  this->AddRandomRays = 0;
  this->AddTriangleSamples = 0;
  this->bOnlySelfOcclude = false;
  this->ShrinkRemoval = 0;
  this->MinAreaIsland = 0.0;
  this->MinTriCountIsland = 0;
  this->Action = Remove;
  return this;
}

// ~URemoveOccludedTrianglesToolProperties @ 14ccc4e60

void __thiscall
URemoveOccludedTrianglesToolProperties::~URemoveOccludedTrianglesToolProperties
          (URemoveOccludedTrianglesToolProperties *this)

{
  this->_padding_ = (longlong)&___7URemoveOccludedTrianglesToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd019e0

UClass * __cdecl URemoveOccludedTrianglesToolProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URemoveOccludedTrianglesToolProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"RemoveOccludedTrianglesToolProperties",
               &Z_Registration_Info_UClass_URemoveOccludedTrianglesToolProperties.InnerSingleton,
               StaticRegisterNativesURemoveOccludedTrianglesToolProperties,0xe0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<URemoveOccludedTrianglesToolProperties>,
               InternalVTableHelperCtorCaller<URemoveOccludedTrianglesToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URemoveOccludedTrianglesToolProperties.InnerSingleton;
}

// StaticRegisterNativesURemoveOccludedTrianglesToolProperties @ 14cd2f330

void __cdecl
URemoveOccludedTrianglesToolProperties::StaticRegisterNativesURemoveOccludedTrianglesToolProperties
          (void)

{
  return;
}

