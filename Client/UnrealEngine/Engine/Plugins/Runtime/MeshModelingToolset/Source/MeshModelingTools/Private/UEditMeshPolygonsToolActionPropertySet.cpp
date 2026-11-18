// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cc03830

UClass * __cdecl UEditMeshPolygonsToolActionPropertySet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditMeshPolygonsToolActionPropertySet.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"EditMeshPolygonsToolActionPropertySet",
               &Z_Registration_Info_UClass_UEditMeshPolygonsToolActionPropertySet.InnerSingleton,
               StaticRegisterNativesUEditMeshPolygonsToolActionPropertySet,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditMeshPolygonsToolActionPropertySet>,
               InternalVTableHelperCtorCaller<UEditMeshPolygonsToolActionPropertySet>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditMeshPolygonsToolActionPropertySet.InnerSingleton;
}

// UEditMeshPolygonsToolActionPropertySet @ 14cc1fc60

UEditMeshPolygonsToolActionPropertySet * __thiscall
UEditMeshPolygonsToolActionPropertySet::UEditMeshPolygonsToolActionPropertySet
          (UEditMeshPolygonsToolActionPropertySet *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UEditMeshPolygonsToolActionPropertySet__6B_;
  (this->ParentTool).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UEditMeshPolygonsToolActionPropertySet @ 14cc1fc90

UEditMeshPolygonsToolActionPropertySet * __thiscall
UEditMeshPolygonsToolActionPropertySet::UEditMeshPolygonsToolActionPropertySet
          (UEditMeshPolygonsToolActionPropertySet *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UEditMeshPolygonsToolActionPropertySet__6B_;
  (this->ParentTool).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UEditMeshPolygonsToolActionPropertySet @ 14cc232b0

void __thiscall
UEditMeshPolygonsToolActionPropertySet::~UEditMeshPolygonsToolActionPropertySet
          (UEditMeshPolygonsToolActionPropertySet *this)

{
  this->_padding_ = (longlong)&___7UEditMeshPolygonsToolActionPropertySet__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cc5d070

UClass * __cdecl UEditMeshPolygonsToolActionPropertySet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditMeshPolygonsToolActionPropertySet.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"EditMeshPolygonsToolActionPropertySet",
               &Z_Registration_Info_UClass_UEditMeshPolygonsToolActionPropertySet.InnerSingleton,
               StaticRegisterNativesUEditMeshPolygonsToolActionPropertySet,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UEditMeshPolygonsToolActionPropertySet>,
               InternalVTableHelperCtorCaller<UEditMeshPolygonsToolActionPropertySet>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditMeshPolygonsToolActionPropertySet.InnerSingleton;
}

// PostAction @ 14cc6c5b0

void __thiscall
UEditMeshPolygonsToolActionPropertySet::PostAction
          (UEditMeshPolygonsToolActionPropertySet *this,EEditMeshPolygonsToolActions param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->ParentTool).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->ParentTool).WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 1000))(pUVar2,param_1);
  }
  return;
}

// StaticRegisterNativesUEditMeshPolygonsToolActionPropertySet @ 14cc824e0

void __cdecl
UEditMeshPolygonsToolActionPropertySet::StaticRegisterNativesUEditMeshPolygonsToolActionPropertySet
          (void)

{
  return;
}

