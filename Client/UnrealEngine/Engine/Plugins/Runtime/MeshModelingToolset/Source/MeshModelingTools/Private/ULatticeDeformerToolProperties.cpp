// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 9

// StaticClass @ 14cc90990

UClass * __cdecl ULatticeDeformerToolProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULatticeDeformerToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"LatticeDeformerToolProperties",
               &Z_Registration_Info_UClass_ULatticeDeformerToolProperties.InnerSingleton,
               StaticRegisterNativesULatticeDeformerToolProperties,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<ULatticeDeformerToolProperties>,
               InternalVTableHelperCtorCaller<ULatticeDeformerToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULatticeDeformerToolProperties.InnerSingleton;
}

// ULatticeDeformerToolProperties @ 14ccbb7a0

ULatticeDeformerToolProperties * __thiscall
ULatticeDeformerToolProperties::ULatticeDeformerToolProperties
          (ULatticeDeformerToolProperties *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->XAxisResolution = 5;
  this->_padding_ = (longlong)&___7ULatticeDeformerToolProperties__6B_;
  (this->ParentTool).WeakPtr = (FWeakObjectPtr)0x0;
  this->bSetPivotMode = false;
  this->bSoftDeformation = false;
  this->YAxisResolution = 5;
  this->ZAxisResolution = 5;
  this->Padding = 0.01;
  this->InterpolationType = Linear;
  this->bDeformNormals = false;
  this->bCanChangeResolution = true;
  this->GizmoCoordinateSystem = Local;
  return this;
}

// ULatticeDeformerToolProperties @ 14ccbb810

ULatticeDeformerToolProperties * __thiscall
ULatticeDeformerToolProperties::ULatticeDeformerToolProperties
          (ULatticeDeformerToolProperties *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->XAxisResolution = 5;
  this->_padding_ = (longlong)&___7ULatticeDeformerToolProperties__6B_;
  (this->ParentTool).WeakPtr = (FWeakObjectPtr)0x0;
  this->bSetPivotMode = false;
  this->bSoftDeformation = false;
  this->YAxisResolution = 5;
  this->ZAxisResolution = 5;
  this->Padding = 0.01;
  this->InterpolationType = Linear;
  this->bDeformNormals = false;
  this->bCanChangeResolution = true;
  this->GizmoCoordinateSystem = Local;
  return this;
}

// ~ULatticeDeformerToolProperties @ 14ccc3790

void __thiscall
ULatticeDeformerToolProperties::~ULatticeDeformerToolProperties
          (ULatticeDeformerToolProperties *this)

{
  this->_padding_ = (longlong)&___7ULatticeDeformerToolProperties__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14ccff840

UClass * __cdecl ULatticeDeformerToolProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULatticeDeformerToolProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"LatticeDeformerToolProperties",
               &Z_Registration_Info_UClass_ULatticeDeformerToolProperties.InnerSingleton,
               StaticRegisterNativesULatticeDeformerToolProperties,0xd0,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<ULatticeDeformerToolProperties>,
               InternalVTableHelperCtorCaller<ULatticeDeformerToolProperties>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULatticeDeformerToolProperties.InnerSingleton;
}

// PostAction @ 14cd15da0

void __thiscall
ULatticeDeformerToolProperties::PostAction
          (ULatticeDeformerToolProperties *this,ELatticeDeformerToolAction param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->ParentTool).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->ParentTool).WeakPtr);
    if (pUVar2[0xe].field_0x1c == '\0') {
      pUVar2[0xe].field_0x1c = param_1;
    }
  }
  return;
}

// StaticRegisterNativesULatticeDeformerToolProperties @ 14cd2eee0

void __cdecl
ULatticeDeformerToolProperties::StaticRegisterNativesULatticeDeformerToolProperties(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_ULatticeDeformerToolProperties_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execClearConstraints @ 14cd3f890

void __cdecl
ULatticeDeformerToolProperties::execClearConstraints(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
    if (pUVar2[0xe].field_0x1c == '\0') {
      pUVar2[0xe].field_0x1c = 2;
    }
  }
  return;
}

// execConstrain @ 14cd3f950

void __cdecl
ULatticeDeformerToolProperties::execConstrain(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  UObject *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1[4].field_0x10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&param_1[4].field_0x10);
    if (pUVar2[0xe].field_0x1c == '\0') {
      pUVar2[0xe].field_0x1c = 1;
    }
  }
  return;
}

