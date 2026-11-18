// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cc922c0

UClass * __cdecl UVertexBrushAlphaProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVertexBrushAlphaProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"VertexBrushAlphaProperties",
               &Z_Registration_Info_UClass_UVertexBrushAlphaProperties.InnerSingleton,
               StaticRegisterNativesUVertexBrushAlphaProperties,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UVertexBrushAlphaProperties>,
               InternalVTableHelperCtorCaller<UVertexBrushAlphaProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVertexBrushAlphaProperties.InnerSingleton;
}

// UVertexBrushAlphaProperties @ 14ccc0280

UVertexBrushAlphaProperties * __thiscall
UVertexBrushAlphaProperties::UVertexBrushAlphaProperties
          (UVertexBrushAlphaProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->RandomRange = 180.0;
  (this->Tool).WeakPtr.ObjectIndex = 0;
  this->_padding_ = (longlong)&___7UVertexBrushAlphaProperties__6B_;
  (this->Alpha).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  this->RotationAngle = 0.0;
  this->bRandomize = false;
  (this->Tool).WeakPtr.ObjectSerialNumber = 0;
  return this;
}

// UVertexBrushAlphaProperties @ 14ccc02d0

UVertexBrushAlphaProperties * __thiscall
UVertexBrushAlphaProperties::UVertexBrushAlphaProperties
          (UVertexBrushAlphaProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->RandomRange = 180.0;
  (this->Tool).WeakPtr.ObjectIndex = 0;
  this->_padding_ = (longlong)&___7UVertexBrushAlphaProperties__6B_;
  (this->Alpha).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  this->RotationAngle = 0.0;
  this->bRandomize = false;
  (this->Tool).WeakPtr.ObjectSerialNumber = 0;
  return this;
}

// ~UVertexBrushAlphaProperties @ 14ccc4f20

void __thiscall
UVertexBrushAlphaProperties::~UVertexBrushAlphaProperties(UVertexBrushAlphaProperties *this)

{
  this->_padding_ = (longlong)&___7UVertexBrushAlphaProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd01e50

UClass * __cdecl UVertexBrushAlphaProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVertexBrushAlphaProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"VertexBrushAlphaProperties",
               &Z_Registration_Info_UClass_UVertexBrushAlphaProperties.InnerSingleton,
               StaticRegisterNativesUVertexBrushAlphaProperties,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UVertexBrushAlphaProperties>,
               InternalVTableHelperCtorCaller<UVertexBrushAlphaProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVertexBrushAlphaProperties.InnerSingleton;
}

// StaticRegisterNativesUVertexBrushAlphaProperties @ 14cd2f390

void __cdecl UVertexBrushAlphaProperties::StaticRegisterNativesUVertexBrushAlphaProperties(void)

{
  return;
}

