// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cbcf790

UClass * __cdecl UModifyGeometrySelectionCommand_Contract::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Contract.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ModifyGeometrySelectionCommand_Contract",
               &Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Contract.InnerSingleton,
               StaticRegisterNativesUModifyGeometrySelectionCommand_Contract,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UModifyGeometrySelectionCommand_Contract>,
               InternalVTableHelperCtorCaller<UModifyGeometrySelectionCommand_Contract>,local_res8,
               UModifyGeometrySelectionCommand::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Contract.InnerSingleton;
}

// UModifyGeometrySelectionCommand_Contract @ 14cbddac0

UModifyGeometrySelectionCommand_Contract * __thiscall
UModifyGeometrySelectionCommand_Contract::UModifyGeometrySelectionCommand_Contract
          (UModifyGeometrySelectionCommand_Contract *this,FVTableHelper *param_1)

{
  UGeometrySelectionEditCommand::UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this,param_1);
  *(undefined ***)this = &___7UModifyGeometrySelectionCommand_Contract__6B_;
  return this;
}

// UModifyGeometrySelectionCommand_Contract @ 14cbddaf0

UModifyGeometrySelectionCommand_Contract * __thiscall
UModifyGeometrySelectionCommand_Contract::UModifyGeometrySelectionCommand_Contract
          (UModifyGeometrySelectionCommand_Contract *this,FObjectInitializer *param_1)

{
  UGeometrySelectionEditCommand::UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this,param_1);
  *(undefined ***)this = &___7UModifyGeometrySelectionCommand_Contract__6B_;
  return this;
}

// ~UModifyGeometrySelectionCommand_Contract @ 14cbe0490

void __thiscall
UModifyGeometrySelectionCommand_Contract::~UModifyGeometrySelectionCommand_Contract
          (UModifyGeometrySelectionCommand_Contract *this)

{
  *(undefined ***)this = &___7UModifyGeometrySelectionCommand__6B_;
  UGeometrySelectionEditCommand::~UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this);
  return;
}

// GetModificationType @ 14cbee600

EModificationType __thiscall
UModifyGeometrySelectionCommand_Contract::GetModificationType
          (UModifyGeometrySelectionCommand_Contract *this)

{
  return Contract;
}

// GetPrivateStaticClass @ 14cbf0030

UClass * __cdecl UModifyGeometrySelectionCommand_Contract::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Contract.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ModifyGeometrySelectionCommand_Contract",
               &Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Contract.InnerSingleton,
               StaticRegisterNativesUModifyGeometrySelectionCommand_Contract,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",
               InternalConstructor<UModifyGeometrySelectionCommand_Contract>,
               InternalVTableHelperCtorCaller<UModifyGeometrySelectionCommand_Contract>,local_res8,
               UModifyGeometrySelectionCommand::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_Contract.InnerSingleton;
}

// StaticRegisterNativesUModifyGeometrySelectionCommand_Contract @ 14cbf6c20

void __cdecl
UModifyGeometrySelectionCommand_Contract::
StaticRegisterNativesUModifyGeometrySelectionCommand_Contract(void)

{
  return;
}

