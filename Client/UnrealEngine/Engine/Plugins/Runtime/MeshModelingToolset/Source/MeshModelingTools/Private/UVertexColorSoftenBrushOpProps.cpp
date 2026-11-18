// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cbd04c0

UClass * __cdecl UVertexColorSoftenBrushOpProps::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVertexColorSoftenBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"VertexColorSoftenBrushOpProps",
               &Z_Registration_Info_UClass_UVertexColorSoftenBrushOpProps.InnerSingleton,
               StaticRegisterNativesUVertexColorSoftenBrushOpProps,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UVertexColorSoftenBrushOpProps>,
               InternalVTableHelperCtorCaller<UVertexColorSoftenBrushOpProps>,local_res8,
               UVertexColorBaseBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVertexColorSoftenBrushOpProps.InnerSingleton;
}

// UVertexColorSoftenBrushOpProps @ 14cbdf520

UVertexColorSoftenBrushOpProps * __thiscall
UVertexColorSoftenBrushOpProps::UVertexColorSoftenBrushOpProps
          (UVertexColorSoftenBrushOpProps *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->field_0xb0 = 1;
  *(undefined ***)this = &___7UVertexColorSoftenBrushOpProps__6B_;
  *(undefined4 *)&this->field_0xb8 = 0x3f000000;
  *(undefined4 *)&this->field_0xbc = 0x3f800000;
  *(undefined4 *)&this->field_0xc0 = 1;
  this->field_0xc4 = 1;
  return this;
}

// UVertexColorSoftenBrushOpProps @ 14cbdf580

UVertexColorSoftenBrushOpProps * __thiscall
UVertexColorSoftenBrushOpProps::UVertexColorSoftenBrushOpProps
          (UVertexColorSoftenBrushOpProps *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->field_0xb0 = 1;
  *(undefined ***)this = &___7UVertexColorSoftenBrushOpProps__6B_;
  *(undefined4 *)&this->field_0xb8 = 0x3f000000;
  *(undefined4 *)&this->field_0xbc = 0x3f800000;
  *(undefined4 *)&this->field_0xc0 = 1;
  this->field_0xc4 = 1;
  return this;
}

// ~UVertexColorSoftenBrushOpProps @ 14cbe0970

void __thiscall
UVertexColorSoftenBrushOpProps::~UVertexColorSoftenBrushOpProps
          (UVertexColorSoftenBrushOpProps *this)

{
  *(undefined ***)this = &___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetFalloff @ 14cbee570

float __thiscall UVertexColorSoftenBrushOpProps::GetFalloff(UVertexColorSoftenBrushOpProps *this)

{
  return __real_3f800000;
}

// GetPrivateStaticClass @ 14cbf19a0

UClass * __cdecl UVertexColorSoftenBrushOpProps::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVertexColorSoftenBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"VertexColorSoftenBrushOpProps",
               &Z_Registration_Info_UClass_UVertexColorSoftenBrushOpProps.InnerSingleton,
               StaticRegisterNativesUVertexColorSoftenBrushOpProps,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UVertexColorSoftenBrushOpProps>,
               InternalVTableHelperCtorCaller<UVertexColorSoftenBrushOpProps>,local_res8,
               UVertexColorBaseBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVertexColorSoftenBrushOpProps.InnerSingleton;
}

// StaticRegisterNativesUVertexColorSoftenBrushOpProps @ 14cbf6e40

void __cdecl
UVertexColorSoftenBrushOpProps::StaticRegisterNativesUVertexColorSoftenBrushOpProps(void)

{
  return;
}

