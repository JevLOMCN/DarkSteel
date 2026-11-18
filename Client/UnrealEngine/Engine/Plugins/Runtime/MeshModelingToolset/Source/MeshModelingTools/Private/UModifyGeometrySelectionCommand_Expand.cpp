// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cbcf6d0

UClass * __cdecl UModifyGeometrySelectionCommand_Expand::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Expand.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ModifyGeometrySelectionCommand_Expand",
               &Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Expand.InnerSingleton,
               StaticRegisterNativesUModifyGeometrySelectionCommand_Expand,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UModifyGeometrySelectionCommand_Expand>,
               InternalVTableHelperCtorCaller<UModifyGeometrySelectionCommand_Expand>,local_res8,
               UModifyGeometrySelectionCommand::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Expand.InnerSingleton;
}

// UModifyGeometrySelectionCommand_Expand @ 14cbddb20

UModifyGeometrySelectionCommand_Expand * __thiscall
UModifyGeometrySelectionCommand_Expand::UModifyGeometrySelectionCommand_Expand
          (UModifyGeometrySelectionCommand_Expand *this,FVTableHelper *param_1)

{
  UGeometrySelectionEditCommand::UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this,param_1);
  *(undefined ***)this = &___7UModifyGeometrySelectionCommand_Expand__6B_;
  return this;
}

// UModifyGeometrySelectionCommand_Expand @ 14cbddb50

UModifyGeometrySelectionCommand_Expand * __thiscall
UModifyGeometrySelectionCommand_Expand::UModifyGeometrySelectionCommand_Expand
          (UModifyGeometrySelectionCommand_Expand *this,FObjectInitializer *param_1)

{
  UGeometrySelectionEditCommand::UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this,param_1);
  *(undefined ***)this = &___7UModifyGeometrySelectionCommand_Expand__6B_;
  return this;
}

// ~UModifyGeometrySelectionCommand_Expand @ 14cbe04b0

void __thiscall
UModifyGeometrySelectionCommand_Expand::~UModifyGeometrySelectionCommand_Expand
          (UModifyGeometrySelectionCommand_Expand *this)

{
  *(undefined ***)this = &___7UModifyGeometrySelectionCommand__6B_;
  UGeometrySelectionEditCommand::~UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this);
  return;
}

// GetModificationType @ 14cbee610

EModificationType __thiscall
UModifyGeometrySelectionCommand_Expand::GetModificationType
          (UModifyGeometrySelectionCommand_Expand *this)

{
  return Expand;
}

// GetPrivateStaticClass @ 14cbf00f0

UClass * __cdecl UModifyGeometrySelectionCommand_Expand::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Expand.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ModifyGeometrySelectionCommand_Expand",
               &Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Expand.InnerSingleton,
               StaticRegisterNativesUModifyGeometrySelectionCommand_Expand,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UModifyGeometrySelectionCommand_Expand>,
               InternalVTableHelperCtorCaller<UModifyGeometrySelectionCommand_Expand>,local_res8,
               UModifyGeometrySelectionCommand::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Expand.InnerSingleton;
}

// StaticRegisterNativesUModifyGeometrySelectionCommand_Expand @ 14cbf6c30

void __cdecl
UModifyGeometrySelectionCommand_Expand::StaticRegisterNativesUModifyGeometrySelectionCommand_Expand
          (void)

{
  return;
}

