// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 6

// StaticClass @ 14ca407f0

UClass * __cdecl UGeometrySelectionEditCommandArguments::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometrySelectionEditCommandArguments.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"GeometrySelectionEditCommandArguments",
               &Z_Registration_Info_UClass_UGeometrySelectionEditCommandArguments.InnerSingleton,
               StaticRegisterNativesUGeometrySelectionEditCommandArguments,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGeometrySelectionEditCommandArguments>,
               InternalVTableHelperCtorCaller<UGeometrySelectionEditCommandArguments>,local_res8,
               UInteractiveCommandArguments::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometrySelectionEditCommandArguments.InnerSingleton;
}

// UGeometrySelectionEditCommandArguments @ 14ca679a0

UGeometrySelectionEditCommandArguments * __thiscall
UGeometrySelectionEditCommandArguments::UGeometrySelectionEditCommandArguments
          (UGeometrySelectionEditCommandArguments *this,FVTableHelper *param_1)

{
  TWeakObjectPtr<UObject,FWeakObjectPtr> *this_00;
  undefined8 local_res8;
  
  UInteractiveCommandArguments::UInteractiveCommandArguments
            ((UInteractiveCommandArguments *)this,param_1);
  this->_padding_ = (longlong)&___7UGeometrySelectionEditCommandArguments__6B_;
  this_00 = &(this->SelectionHandle).Identifier.TargetObject;
  (this->SelectionHandle).Identifier.TargetType = PrimitiveComponent;
  (this->SelectionHandle).Identifier.ObjectType = Unknown;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  (this->SelectionHandle).Selector = (IGeometrySelector *)0x0;
  return this;
}

// UGeometrySelectionEditCommandArguments @ 14ca67a00

UGeometrySelectionEditCommandArguments * __thiscall
UGeometrySelectionEditCommandArguments::UGeometrySelectionEditCommandArguments
          (UGeometrySelectionEditCommandArguments *this,FObjectInitializer *param_1)

{
  TWeakObjectPtr<UObject,FWeakObjectPtr> *this_00;
  undefined8 local_res8;
  
  UInteractiveCommandArguments::UInteractiveCommandArguments
            ((UInteractiveCommandArguments *)this,param_1);
  this->_padding_ = (longlong)&___7UGeometrySelectionEditCommandArguments__6B_;
  this_00 = &(this->SelectionHandle).Identifier.TargetObject;
  (this->SelectionHandle).Identifier.TargetType = PrimitiveComponent;
  (this->SelectionHandle).Identifier.ObjectType = Unknown;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  (this->SelectionHandle).Selector = (IGeometrySelector *)0x0;
  return this;
}

// ~UGeometrySelectionEditCommandArguments @ 14ca6b5e0

void __thiscall
UGeometrySelectionEditCommandArguments::~UGeometrySelectionEditCommandArguments
          (UGeometrySelectionEditCommandArguments *this)

{
  this->_padding_ = (longlong)&___7UGeometrySelectionEditCommandArguments__6B_;
  UInteractiveCommandArguments::~UInteractiveCommandArguments((UInteractiveCommandArguments *)this);
  return;
}

// GetPrivateStaticClass @ 14ca912b0

UClass * __cdecl UGeometrySelectionEditCommandArguments::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGeometrySelectionEditCommandArguments.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"GeometrySelectionEditCommandArguments",
               &Z_Registration_Info_UClass_UGeometrySelectionEditCommandArguments.InnerSingleton,
               StaticRegisterNativesUGeometrySelectionEditCommandArguments,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGeometrySelectionEditCommandArguments>,
               InternalVTableHelperCtorCaller<UGeometrySelectionEditCommandArguments>,local_res8,
               UInteractiveCommandArguments::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometrySelectionEditCommandArguments.InnerSingleton;
}

// StaticRegisterNativesUGeometrySelectionEditCommandArguments @ 14caa7120

void __cdecl
UGeometrySelectionEditCommandArguments::StaticRegisterNativesUGeometrySelectionEditCommandArguments
          (void)

{
  return;
}

