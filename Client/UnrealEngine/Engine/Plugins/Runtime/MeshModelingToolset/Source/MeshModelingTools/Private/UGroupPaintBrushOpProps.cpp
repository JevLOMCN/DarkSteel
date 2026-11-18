// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cbd0640

UClass * __cdecl UGroupPaintBrushOpProps::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroupPaintBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"GroupPaintBrushOpProps",
               &Z_Registration_Info_UClass_UGroupPaintBrushOpProps.InnerSingleton,
               StaticRegisterNativesUGroupPaintBrushOpProps,0xc0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGroupPaintBrushOpProps>,
               InternalVTableHelperCtorCaller<UGroupPaintBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroupPaintBrushOpProps.InnerSingleton;
}

// UGroupPaintBrushOpProps @ 14cbdd860

UGroupPaintBrushOpProps * __thiscall
UGroupPaintBrushOpProps::UGroupPaintBrushOpProps
          (UGroupPaintBrushOpProps *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UGroupPaintBrushOpProps__6B_;
  this->Group = 1;
  this->bOnlyPaintUngrouped = false;
  return this;
}

// UGroupPaintBrushOpProps @ 14cbdd8a0

UGroupPaintBrushOpProps * __thiscall
UGroupPaintBrushOpProps::UGroupPaintBrushOpProps
          (UGroupPaintBrushOpProps *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7UGroupPaintBrushOpProps__6B_;
  this->Group = 1;
  this->bOnlyPaintUngrouped = false;
  return this;
}

// ~UGroupPaintBrushOpProps @ 14cbe03f0

void __thiscall UGroupPaintBrushOpProps::~UGroupPaintBrushOpProps(UGroupPaintBrushOpProps *this)

{
  this->_padding_ = (longlong)&___7UMeshSculptBrushOpProps__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetGroup @ 14cbee5b0

int __thiscall UGroupPaintBrushOpProps::GetGroup(UGroupPaintBrushOpProps *this)

{
  return this->Group;
}

// GetPrivateStaticClass @ 14cbefc70

UClass * __cdecl UGroupPaintBrushOpProps::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGroupPaintBrushOpProps.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"GroupPaintBrushOpProps",
               &Z_Registration_Info_UClass_UGroupPaintBrushOpProps.InnerSingleton,
               StaticRegisterNativesUGroupPaintBrushOpProps,0xc0,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UGroupPaintBrushOpProps>,
               InternalVTableHelperCtorCaller<UGroupPaintBrushOpProps>,local_res8,
               UMeshSculptBrushOpProps::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGroupPaintBrushOpProps.InnerSingleton;
}

// StaticRegisterNativesUGroupPaintBrushOpProps @ 14cbf6ba0

void __cdecl UGroupPaintBrushOpProps::StaticRegisterNativesUGroupPaintBrushOpProps(void)

{
  return;
}

