// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cc94390

UClass * __cdecl UMeshVertexPaintToolActionPropertySet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshVertexPaintToolActionPropertySet.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshVertexPaintToolActionPropertySet",
               &Z_Registration_Info_UClass_UMeshVertexPaintToolActionPropertySet.InnerSingleton,
               StaticRegisterNativesUMeshVertexPaintToolActionPropertySet,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshVertexPaintToolActionPropertySet>,
               InternalVTableHelperCtorCaller<UMeshVertexPaintToolActionPropertySet>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshVertexPaintToolActionPropertySet.InnerSingleton;
}

// UMeshVertexPaintToolActionPropertySet @ 14ccbe3c0

UMeshVertexPaintToolActionPropertySet * __thiscall
UMeshVertexPaintToolActionPropertySet::UMeshVertexPaintToolActionPropertySet
          (UMeshVertexPaintToolActionPropertySet *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UMeshVertexPaintToolActionPropertySet__6B_;
  (this->ParentTool).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UMeshVertexPaintToolActionPropertySet @ 14ccbe3f0

UMeshVertexPaintToolActionPropertySet * __thiscall
UMeshVertexPaintToolActionPropertySet::UMeshVertexPaintToolActionPropertySet
          (UMeshVertexPaintToolActionPropertySet *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UMeshVertexPaintToolActionPropertySet__6B_;
  (this->ParentTool).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UMeshVertexPaintToolActionPropertySet @ 14ccc45c0

void __thiscall
UMeshVertexPaintToolActionPropertySet::~UMeshVertexPaintToolActionPropertySet
          (UMeshVertexPaintToolActionPropertySet *this)

{
  this->_padding_ = (longlong)&___7UMeshVertexPaintToolActionPropertySet__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14cd008b0

UClass * __cdecl UMeshVertexPaintToolActionPropertySet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshVertexPaintToolActionPropertySet.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshVertexPaintToolActionPropertySet",
               &Z_Registration_Info_UClass_UMeshVertexPaintToolActionPropertySet.InnerSingleton,
               StaticRegisterNativesUMeshVertexPaintToolActionPropertySet,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshVertexPaintToolActionPropertySet>,
               InternalVTableHelperCtorCaller<UMeshVertexPaintToolActionPropertySet>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshVertexPaintToolActionPropertySet.InnerSingleton;
}

// PostAction @ 14cd15ef0

void __thiscall
UMeshVertexPaintToolActionPropertySet::PostAction
          (UMeshVertexPaintToolActionPropertySet *this,EMeshVertexPaintToolActions param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->ParentTool).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->ParentTool).WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x6b0))(pUVar2,param_1);
  }
  return;
}

// StaticRegisterNativesUMeshVertexPaintToolActionPropertySet @ 14cd2f160

void __cdecl
UMeshVertexPaintToolActionPropertySet::StaticRegisterNativesUMeshVertexPaintToolActionPropertySet
          (void)

{
  return;
}

