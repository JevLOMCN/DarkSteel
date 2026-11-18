// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cbcf060

UClass * __cdecl UModifyGeometrySelectionCommand_Invert::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Invert.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ModifyGeometrySelectionCommand_Invert",
               &Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Invert.InnerSingleton,
               StaticRegisterNativesUModifyGeometrySelectionCommand_Invert,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UModifyGeometrySelectionCommand_Invert>,
               InternalVTableHelperCtorCaller<UModifyGeometrySelectionCommand_Invert>,local_res8,
               UModifyGeometrySelectionCommand::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Invert.InnerSingleton;
}

// UModifyGeometrySelectionCommand_Invert @ 14cbddbe0

UModifyGeometrySelectionCommand_Invert * __thiscall
UModifyGeometrySelectionCommand_Invert::UModifyGeometrySelectionCommand_Invert
          (UModifyGeometrySelectionCommand_Invert *this,FVTableHelper *param_1)

{
  UGeometrySelectionEditCommand::UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this,param_1);
  *(undefined ***)this = &___7UModifyGeometrySelectionCommand_Invert__6B_;
  return this;
}

// UModifyGeometrySelectionCommand_Invert @ 14cbddc10

UModifyGeometrySelectionCommand_Invert * __thiscall
UModifyGeometrySelectionCommand_Invert::UModifyGeometrySelectionCommand_Invert
          (UModifyGeometrySelectionCommand_Invert *this,FObjectInitializer *param_1)

{
  UGeometrySelectionEditCommand::UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this,param_1);
  *(undefined ***)this = &___7UModifyGeometrySelectionCommand_Invert__6B_;
  return this;
}

// ~UModifyGeometrySelectionCommand_Invert @ 14cbe04f0

void __thiscall
UModifyGeometrySelectionCommand_Invert::~UModifyGeometrySelectionCommand_Invert
          (UModifyGeometrySelectionCommand_Invert *this)

{
  *(undefined ***)this = &___7UModifyGeometrySelectionCommand__6B_;
  UGeometrySelectionEditCommand::~UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this);
  return;
}

// GetModificationType @ 14cbee630

EModificationType __thiscall
UModifyGeometrySelectionCommand_Invert::GetModificationType
          (UModifyGeometrySelectionCommand_Invert *this)

{
  return Invert;
}

// GetPrivateStaticClass @ 14cbf0270

UClass * __cdecl UModifyGeometrySelectionCommand_Invert::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Invert.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ModifyGeometrySelectionCommand_Invert",
               &Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Invert.InnerSingleton,
               StaticRegisterNativesUModifyGeometrySelectionCommand_Invert,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UModifyGeometrySelectionCommand_Invert>,
               InternalVTableHelperCtorCaller<UModifyGeometrySelectionCommand_Invert>,local_res8,
               UModifyGeometrySelectionCommand::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Invert.InnerSingleton;
}

// StaticRegisterNativesUModifyGeometrySelectionCommand_Invert @ 14cbf6c50

void __cdecl
UModifyGeometrySelectionCommand_Invert::StaticRegisterNativesUModifyGeometrySelectionCommand_Invert
          (void)

{
  return;
}

