// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cbcf610

UClass * __cdecl UModifyGeometrySelectionCommand_InvertConnected::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_InvertConnected.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ModifyGeometrySelectionCommand_InvertConnected",
               &Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_InvertConnected.
                InnerSingleton,StaticRegisterNativesUModifyGeometrySelectionCommand_InvertConnected,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UModifyGeometrySelectionCommand_InvertConnected>,
               InternalVTableHelperCtorCaller<UModifyGeometrySelectionCommand_InvertConnected>,
               local_res8,UModifyGeometrySelectionCommand::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_InvertConnected.InnerSingleton;
}

// UModifyGeometrySelectionCommand_InvertConnected @ 14cbddc40

UModifyGeometrySelectionCommand_InvertConnected * __thiscall
UModifyGeometrySelectionCommand_InvertConnected::UModifyGeometrySelectionCommand_InvertConnected
          (UModifyGeometrySelectionCommand_InvertConnected *this,FVTableHelper *param_1)

{
  UGeometrySelectionEditCommand::UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this,param_1);
  *(undefined ***)this = &___7UModifyGeometrySelectionCommand_InvertConnected__6B_;
  return this;
}

// UModifyGeometrySelectionCommand_InvertConnected @ 14cbddc70

UModifyGeometrySelectionCommand_InvertConnected * __thiscall
UModifyGeometrySelectionCommand_InvertConnected::UModifyGeometrySelectionCommand_InvertConnected
          (UModifyGeometrySelectionCommand_InvertConnected *this,FObjectInitializer *param_1)

{
  UGeometrySelectionEditCommand::UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this,param_1);
  *(undefined ***)this = &___7UModifyGeometrySelectionCommand_InvertConnected__6B_;
  return this;
}

// ~UModifyGeometrySelectionCommand_InvertConnected @ 14cbe0510

void __thiscall
UModifyGeometrySelectionCommand_InvertConnected::~UModifyGeometrySelectionCommand_InvertConnected
          (UModifyGeometrySelectionCommand_InvertConnected *this)

{
  *(undefined ***)this = &___7UModifyGeometrySelectionCommand__6B_;
  UGeometrySelectionEditCommand::~UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this);
  return;
}

// GetModificationType @ 14cbee640

EModificationType __thiscall
UModifyGeometrySelectionCommand_InvertConnected::GetModificationType
          (UModifyGeometrySelectionCommand_InvertConnected *this)

{
  return InvertConnected;
}

// GetPrivateStaticClass @ 14cbf0330

UClass * __cdecl UModifyGeometrySelectionCommand_InvertConnected::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_InvertConnected.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ModifyGeometrySelectionCommand_InvertConnected",
               &Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_InvertConnected.
                InnerSingleton,StaticRegisterNativesUModifyGeometrySelectionCommand_InvertConnected,
               0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UModifyGeometrySelectionCommand_InvertConnected>,
               InternalVTableHelperCtorCaller<UModifyGeometrySelectionCommand_InvertConnected>,
               local_res8,UModifyGeometrySelectionCommand::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_InvertConnected.InnerSingleton;
}

// StaticRegisterNativesUModifyGeometrySelectionCommand_InvertConnected @ 14cbf6c60

void __cdecl
UModifyGeometrySelectionCommand_InvertConnected::
StaticRegisterNativesUModifyGeometrySelectionCommand_InvertConnected(void)

{
  return;
}

