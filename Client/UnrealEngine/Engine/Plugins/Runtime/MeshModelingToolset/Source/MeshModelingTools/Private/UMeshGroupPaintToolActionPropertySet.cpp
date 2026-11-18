// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cc92840

UClass * __cdecl UMeshGroupPaintToolActionPropertySet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshGroupPaintToolActionPropertySet.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshGroupPaintToolActionPropertySet",
               &Z_Registration_Info_UClass_UMeshGroupPaintToolActionPropertySet.InnerSingleton,
               StaticRegisterNativesUMeshGroupPaintToolActionPropertySet,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshGroupPaintToolActionPropertySet>,
               InternalVTableHelperCtorCaller<UMeshGroupPaintToolActionPropertySet>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshGroupPaintToolActionPropertySet.InnerSingleton;
}

// UMeshGroupPaintToolActionPropertySet @ 14ccbc6e0

UMeshGroupPaintToolActionPropertySet * __thiscall
UMeshGroupPaintToolActionPropertySet::UMeshGroupPaintToolActionPropertySet
          (UMeshGroupPaintToolActionPropertySet *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UMeshGroupPaintToolActionPropertySet__6B_;
  (this->ParentTool).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UMeshGroupPaintToolActionPropertySet @ 14ccbc710

UMeshGroupPaintToolActionPropertySet * __thiscall
UMeshGroupPaintToolActionPropertySet::UMeshGroupPaintToolActionPropertySet
          (UMeshGroupPaintToolActionPropertySet *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UMeshGroupPaintToolActionPropertySet__6B_;
  (this->ParentTool).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UMeshGroupPaintToolActionPropertySet @ 14ccc3d50

void __thiscall
UMeshGroupPaintToolActionPropertySet::~UMeshGroupPaintToolActionPropertySet
          (UMeshGroupPaintToolActionPropertySet *this)

{
  this->_padding_ = (longlong)&___7UMeshGroupPaintToolActionPropertySet__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14ccfff00

UClass * __cdecl UMeshGroupPaintToolActionPropertySet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshGroupPaintToolActionPropertySet.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshGroupPaintToolActionPropertySet",
               &Z_Registration_Info_UClass_UMeshGroupPaintToolActionPropertySet.InnerSingleton,
               StaticRegisterNativesUMeshGroupPaintToolActionPropertySet,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshGroupPaintToolActionPropertySet>,
               InternalVTableHelperCtorCaller<UMeshGroupPaintToolActionPropertySet>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshGroupPaintToolActionPropertySet.InnerSingleton;
}

// PostAction @ 14cd15e50

void __thiscall
UMeshGroupPaintToolActionPropertySet::PostAction
          (UMeshGroupPaintToolActionPropertySet *this,EMeshGroupPaintToolActions param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->ParentTool).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->ParentTool).WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x6a8))(pUVar2,param_1);
  }
  return;
}

// StaticRegisterNativesUMeshGroupPaintToolActionPropertySet @ 14cd2efd0

void __cdecl
UMeshGroupPaintToolActionPropertySet::StaticRegisterNativesUMeshGroupPaintToolActionPropertySet
          (void)

{
  return;
}

