// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cbd0400

UClass * __cdecl UVertexColorPaintBrushOpProps::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVertexColorPaintBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"VertexColorPaintBrushOpProps",
               &Z_Registration_Info_UClass_UVertexColorPaintBrushOpProps.InnerSingleton,
               StaticRegisterNativesUVertexColorPaintBrushOpProps,0xd8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UVertexColorPaintBrushOpProps>,
               InternalVTableHelperCtorCaller<UVertexColorPaintBrushOpProps>,local_res8,
               UVertexColorBaseBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVertexColorPaintBrushOpProps.InnerSingleton;
}

// UVertexColorPaintBrushOpProps @ 14cbdf3a0

UVertexColorPaintBrushOpProps * __thiscall
UVertexColorPaintBrushOpProps::UVertexColorPaintBrushOpProps
          (UVertexColorPaintBrushOpProps *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UVertexColorPaintBrushOpProps__6B_;
  *(undefined4 *)&this->_padding_ = 0x3f000000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  *(undefined4 *)&this->_padding_ = 1;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  return this;
}

// UVertexColorPaintBrushOpProps @ 14cbdf400

UVertexColorPaintBrushOpProps * __thiscall
UVertexColorPaintBrushOpProps::UVertexColorPaintBrushOpProps
          (UVertexColorPaintBrushOpProps *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UVertexColorPaintBrushOpProps__6B_;
  *(undefined4 *)&this->_padding_ = 0x3f000000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  *(undefined4 *)&this->_padding_ = 1;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  return this;
}

// ~UVertexColorPaintBrushOpProps @ 14cbe0930

void __thiscall
UVertexColorPaintBrushOpProps::~UVertexColorPaintBrushOpProps(UVertexColorPaintBrushOpProps *this)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetColor @ 14cbee1c0

FLinearColor * __thiscall
UVertexColorPaintBrushOpProps::GetColor
          (UVertexColorPaintBrushOpProps *this,FLinearColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8);
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&(this->Color).field0_0x0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar1;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14cbf1820

UClass * __cdecl UVertexColorPaintBrushOpProps::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVertexColorPaintBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"VertexColorPaintBrushOpProps",
               &Z_Registration_Info_UClass_UVertexColorPaintBrushOpProps.InnerSingleton,
               StaticRegisterNativesUVertexColorPaintBrushOpProps,0xd8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UVertexColorPaintBrushOpProps>,
               InternalVTableHelperCtorCaller<UVertexColorPaintBrushOpProps>,local_res8,
               UVertexColorBaseBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVertexColorPaintBrushOpProps.InnerSingleton;
}

// StaticRegisterNativesUVertexColorPaintBrushOpProps @ 14cbf6e20

void __cdecl UVertexColorPaintBrushOpProps::StaticRegisterNativesUVertexColorPaintBrushOpProps(void)

{
  return;
}

