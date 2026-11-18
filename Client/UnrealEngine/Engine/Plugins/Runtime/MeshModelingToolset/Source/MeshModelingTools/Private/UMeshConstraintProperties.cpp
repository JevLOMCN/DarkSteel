// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 10

// StaticClass @ 14cbce250

UClass * __cdecl UMeshConstraintProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshConstraintProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshConstraintProperties",
               &Z_Registration_Info_UClass_UMeshConstraintProperties.InnerSingleton,
               StaticRegisterNativesUMeshConstraintProperties,0xb8,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UMeshConstraintProperties>,
               InternalVTableHelperCtorCaller<UMeshConstraintProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshConstraintProperties.InnerSingleton;
}

// UMeshConstraintProperties @ 14cbdd980

UMeshConstraintProperties * __thiscall
UMeshConstraintProperties::UMeshConstraintProperties
          (UMeshConstraintProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->MeshBoundaryConstraint = Free;
  this->GroupBoundaryConstraint = Free;
  this->MaterialBoundaryConstraint = Free;
  this->bPreventNormalFlips = false;
  this->_padding_ = (longlong)&___7UMeshConstraintProperties__6B_;
  this->bPreventTinyTriangles = false;
  return this;
}

// UMeshConstraintProperties @ 14cbdd9c0

UMeshConstraintProperties * __thiscall
UMeshConstraintProperties::UMeshConstraintProperties
          (UMeshConstraintProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->MeshBoundaryConstraint = Free;
  this->GroupBoundaryConstraint = Free;
  this->MaterialBoundaryConstraint = Free;
  this->bPreventNormalFlips = false;
  this->_padding_ = (longlong)&___7UMeshConstraintProperties__6B_;
  this->bPreventTinyTriangles = false;
  return this;
}

// ~UMeshConstraintProperties @ 14cbe0430

void __thiscall
UMeshConstraintProperties::~UMeshConstraintProperties(UMeshConstraintProperties *this)

{
  this->_padding_ = (longlong)&___7UMeshConstraintProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cbefdf0

UClass * __cdecl UMeshConstraintProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshConstraintProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshConstraintProperties",
               &Z_Registration_Info_UClass_UMeshConstraintProperties.InnerSingleton,
               StaticRegisterNativesUMeshConstraintProperties,0xb8,8,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UMeshConstraintProperties>,
               InternalVTableHelperCtorCaller<UMeshConstraintProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshConstraintProperties.InnerSingleton;
}

// IsPreventNormalFlipsEnabled @ 14cbf23b0

bool __thiscall
UMeshConstraintProperties::IsPreventNormalFlipsEnabled(UMeshConstraintProperties *this)

{
  return true;
}

// IsPreventTinyTrianglesEnabled @ 14cbf23c0

bool __thiscall
UMeshConstraintProperties::IsPreventTinyTrianglesEnabled(UMeshConstraintProperties *this)

{
  return true;
}

// StaticRegisterNativesUMeshConstraintProperties @ 14cbf6bc0

void __cdecl UMeshConstraintProperties::StaticRegisterNativesUMeshConstraintProperties(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UMeshConstraintProperties_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIsPreventNormalFlipsEnabled @ 14cbfcfa0

void __cdecl
UMeshConstraintProperties::execIsPreventNormalFlipsEnabled
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2c8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsPreventTinyTrianglesEnabled @ 14cbfcfe0

void __cdecl
UMeshConstraintProperties::execIsPreventTinyTrianglesEnabled
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2d0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

