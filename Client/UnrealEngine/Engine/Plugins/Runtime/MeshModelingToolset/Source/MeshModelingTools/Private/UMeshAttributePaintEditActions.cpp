// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cc956f0

UClass * __cdecl UMeshAttributePaintEditActions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshAttributePaintEditActions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshAttributePaintEditActions",
               &Z_Registration_Info_UClass_UMeshAttributePaintEditActions.InnerSingleton,
               StaticRegisterNativesUMeshAttributePaintEditActions,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshAttributePaintEditActions>,
               InternalVTableHelperCtorCaller<UMeshAttributePaintEditActions>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshAttributePaintEditActions.InnerSingleton;
}

// UMeshAttributePaintEditActions @ 14ccbb920

UMeshAttributePaintEditActions * __thiscall
UMeshAttributePaintEditActions::UMeshAttributePaintEditActions
          (UMeshAttributePaintEditActions *this,FVTableHelper *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UMeshAttributePaintEditActions__6B_;
  (this->ParentTool).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UMeshAttributePaintEditActions @ 14ccbb950

UMeshAttributePaintEditActions * __thiscall
UMeshAttributePaintEditActions::UMeshAttributePaintEditActions
          (UMeshAttributePaintEditActions *this,FObjectInitializer *param_1)

{
  UInteractiveToolPropertySet::UInteractiveToolPropertySet
            ((UInteractiveToolPropertySet *)this,param_1);
  this->_padding_ = (longlong)&___7UMeshAttributePaintEditActions__6B_;
  (this->ParentTool).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UMeshAttributePaintEditActions @ 14ccc37d0

void __thiscall
UMeshAttributePaintEditActions::~UMeshAttributePaintEditActions
          (UMeshAttributePaintEditActions *this)

{
  this->_padding_ = (longlong)&___7UMeshAttributePaintEditActions__6B_;
  UInteractiveToolPropertySet::~UInteractiveToolPropertySet((UInteractiveToolPropertySet *)this);
  return;
}

// GetPrivateStaticClass @ 14ccff9c0

UClass * __cdecl UMeshAttributePaintEditActions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshAttributePaintEditActions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshAttributePaintEditActions",
               &Z_Registration_Info_UClass_UMeshAttributePaintEditActions.InnerSingleton,
               StaticRegisterNativesUMeshAttributePaintEditActions,0xb8,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshAttributePaintEditActions>,
               InternalVTableHelperCtorCaller<UMeshAttributePaintEditActions>,local_res8,
               UInteractiveToolPropertySet::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshAttributePaintEditActions.InnerSingleton;
}

// PostAction @ 14cd15df0

void __thiscall
UMeshAttributePaintEditActions::PostAction
          (UMeshAttributePaintEditActions *this,EMeshAttributePaintToolActions param_1)

{
  TWeakObjectPtr<UMeshAttributePaintTool,FWeakObjectPtr> *this_00;
  bool bVar1;
  UObject *pUVar2;
  
  this_00 = &this->ParentTool;
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    if (pUVar2 != (UObject *)0x0) {
      pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      (**(code **)(*(longlong *)pUVar2 + 0x498))(pUVar2,param_1);
    }
  }
  return;
}

// StaticRegisterNativesUMeshAttributePaintEditActions @ 14cd2ef30

void __cdecl
UMeshAttributePaintEditActions::StaticRegisterNativesUMeshAttributePaintEditActions(void)

{
  return;
}

