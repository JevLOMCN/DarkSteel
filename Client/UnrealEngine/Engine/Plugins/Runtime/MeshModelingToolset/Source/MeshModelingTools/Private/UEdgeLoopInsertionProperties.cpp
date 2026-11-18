// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cd43e00

UClass * __cdecl UEdgeLoopInsertionProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEdgeLoopInsertionProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"EdgeLoopInsertionProperties",
               &Z_Registration_Info_UClass_UEdgeLoopInsertionProperties.InnerSingleton,
               StaticRegisterNativesUEdgeLoopInsertionProperties,0xe0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEdgeLoopInsertionProperties>,
               InternalVTableHelperCtorCaller<UEdgeLoopInsertionProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEdgeLoopInsertionProperties.InnerSingleton;
}

// UEdgeLoopInsertionProperties @ 14cd4f760

UEdgeLoopInsertionProperties * __thiscall
UEdgeLoopInsertionProperties::UEdgeLoopInsertionProperties
          (UEdgeLoopInsertionProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->PositionMode = ProportionOffset;
  this->_padding_ = (longlong)&___7UEdgeLoopInsertionProperties__6B_;
  this->ProportionOffset = 0.5;
  this->DistanceOffset = 10.0;
  this->VertexTolerance = 0.001;
  this->InsertionMode = PlaneCut;
  this->NumLoops = 1;
  this->bInteractive = true;
  this->bFlipOffsetDirection = false;
  this->bHighlightProblemGroups = true;
  return this;
}

// UEdgeLoopInsertionProperties @ 14cd4f7f0

UEdgeLoopInsertionProperties * __thiscall
UEdgeLoopInsertionProperties::UEdgeLoopInsertionProperties
          (UEdgeLoopInsertionProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->PositionMode = ProportionOffset;
  this->_padding_ = (longlong)&___7UEdgeLoopInsertionProperties__6B_;
  this->ProportionOffset = 0.5;
  this->DistanceOffset = 10.0;
  this->VertexTolerance = 0.001;
  this->InsertionMode = PlaneCut;
  this->NumLoops = 1;
  this->bInteractive = true;
  this->bFlipOffsetDirection = false;
  this->bHighlightProblemGroups = true;
  return this;
}

// ~UEdgeLoopInsertionProperties @ 14cd532c0

void __thiscall
UEdgeLoopInsertionProperties::~UEdgeLoopInsertionProperties(UEdgeLoopInsertionProperties *this)

{
  this->_padding_ = (longlong)&___7UEdgeLoopInsertionProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd6d620

UClass * __cdecl UEdgeLoopInsertionProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEdgeLoopInsertionProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"EdgeLoopInsertionProperties",
               &Z_Registration_Info_UClass_UEdgeLoopInsertionProperties.InnerSingleton,
               StaticRegisterNativesUEdgeLoopInsertionProperties,0xe0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEdgeLoopInsertionProperties>,
               InternalVTableHelperCtorCaller<UEdgeLoopInsertionProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEdgeLoopInsertionProperties.InnerSingleton;
}

// StaticRegisterNativesUEdgeLoopInsertionProperties @ 14cd81390

void __cdecl UEdgeLoopInsertionProperties::StaticRegisterNativesUEdgeLoopInsertionProperties(void)

{
  return;
}

