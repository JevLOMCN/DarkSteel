// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 6

// StaticClass @ 14cbd0580

UClass * __cdecl UVertexColorSmoothBrushOpProps::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVertexColorSmoothBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"VertexColorSmoothBrushOpProps",
               &Z_Registration_Info_UClass_UVertexColorSmoothBrushOpProps.InnerSingleton,
               StaticRegisterNativesUVertexColorSmoothBrushOpProps,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UVertexColorSmoothBrushOpProps>,
               InternalVTableHelperCtorCaller<UVertexColorSmoothBrushOpProps>,local_res8,
               UVertexColorBaseBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVertexColorSmoothBrushOpProps.InnerSingleton;
}

// UVertexColorSmoothBrushOpProps @ 14cbdf460

UVertexColorSmoothBrushOpProps * __thiscall
UVertexColorSmoothBrushOpProps::UVertexColorSmoothBrushOpProps
          (UVertexColorSmoothBrushOpProps *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->field_0xb0 = 1;
  *(undefined ***)this = &___7UVertexColorSmoothBrushOpProps__6B_;
  *(undefined4 *)&this->field_0xb8 = 0x3f000000;
  *(undefined4 *)&this->field_0xbc = 0x3f800000;
  *(undefined4 *)&this->field_0xc0 = 1;
  this->field_0xc4 = 1;
  return this;
}

// UVertexColorSmoothBrushOpProps @ 14cbdf4c0

UVertexColorSmoothBrushOpProps * __thiscall
UVertexColorSmoothBrushOpProps::UVertexColorSmoothBrushOpProps
          (UVertexColorSmoothBrushOpProps *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->field_0xb0 = 1;
  *(undefined ***)this = &___7UVertexColorSmoothBrushOpProps__6B_;
  *(undefined4 *)&this->field_0xb8 = 0x3f000000;
  *(undefined4 *)&this->field_0xbc = 0x3f800000;
  *(undefined4 *)&this->field_0xc0 = 1;
  this->field_0xc4 = 1;
  return this;
}

// ~UVertexColorSmoothBrushOpProps @ 14cbe0950

void __thiscall
UVertexColorSmoothBrushOpProps::~UVertexColorSmoothBrushOpProps
          (UVertexColorSmoothBrushOpProps *this)

{
  *(undefined ***)this = &___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cbf18e0

UClass * __cdecl UVertexColorSmoothBrushOpProps::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVertexColorSmoothBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"VertexColorSmoothBrushOpProps",
               &Z_Registration_Info_UClass_UVertexColorSmoothBrushOpProps.InnerSingleton,
               StaticRegisterNativesUVertexColorSmoothBrushOpProps,200,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UVertexColorSmoothBrushOpProps>,
               InternalVTableHelperCtorCaller<UVertexColorSmoothBrushOpProps>,local_res8,
               UVertexColorBaseBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVertexColorSmoothBrushOpProps.InnerSingleton;
}

// StaticRegisterNativesUVertexColorSmoothBrushOpProps @ 14cbf6e30

void __cdecl
UVertexColorSmoothBrushOpProps::StaticRegisterNativesUVertexColorSmoothBrushOpProps(void)

{
  return;
}

