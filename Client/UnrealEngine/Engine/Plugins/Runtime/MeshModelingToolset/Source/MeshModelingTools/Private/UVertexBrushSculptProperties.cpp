// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cc92060

UClass * __cdecl UVertexBrushSculptProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVertexBrushSculptProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"VertexBrushSculptProperties",
               &Z_Registration_Info_UClass_UVertexBrushSculptProperties.InnerSingleton,
               StaticRegisterNativesUVertexBrushSculptProperties,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UVertexBrushSculptProperties>,
               InternalVTableHelperCtorCaller<UVertexBrushSculptProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVertexBrushSculptProperties.InnerSingleton;
}

// UVertexBrushSculptProperties @ 14ccc0320

UVertexBrushSculptProperties * __thiscall
UVertexBrushSculptProperties::UVertexBrushSculptProperties
          (UVertexBrushSculptProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->PrimaryBrushType = Offset;
  this->_padding_ = (longlong)&___7UVertexBrushSculptProperties__6B_;
  this->PrimaryBrushID = 0;
  this->PrimaryFalloffType = Smooth;
  this->BrushFilter = None;
  this->bFreezeTarget = false;
  this->bCanFreezeTarget = false;
  (this->Tool).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UVertexBrushSculptProperties @ 14ccc0360

UVertexBrushSculptProperties * __thiscall
UVertexBrushSculptProperties::UVertexBrushSculptProperties
          (UVertexBrushSculptProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->PrimaryBrushType = Offset;
  this->_padding_ = (longlong)&___7UVertexBrushSculptProperties__6B_;
  this->PrimaryBrushID = 0;
  this->PrimaryFalloffType = Smooth;
  this->BrushFilter = None;
  this->bFreezeTarget = false;
  this->bCanFreezeTarget = false;
  (this->Tool).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UVertexBrushSculptProperties @ 14ccc4f40

void __thiscall
UVertexBrushSculptProperties::~UVertexBrushSculptProperties(UVertexBrushSculptProperties *this)

{
  this->_padding_ = (longlong)&___7UVertexBrushSculptProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd01f10

UClass * __cdecl UVertexBrushSculptProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVertexBrushSculptProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"VertexBrushSculptProperties",
               &Z_Registration_Info_UClass_UVertexBrushSculptProperties.InnerSingleton,
               StaticRegisterNativesUVertexBrushSculptProperties,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UVertexBrushSculptProperties>,
               InternalVTableHelperCtorCaller<UVertexBrushSculptProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVertexBrushSculptProperties.InnerSingleton;
}

// StaticRegisterNativesUVertexBrushSculptProperties @ 14cd2f3a0

void __cdecl UVertexBrushSculptProperties::StaticRegisterNativesUVertexBrushSculptProperties(void)

{
  return;
}

