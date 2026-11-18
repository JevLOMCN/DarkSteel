// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cbcf4c0

UClass * __cdecl UModifyGeometrySelectionCommand_ExpandToConnected::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_ExpandToConnected.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ModifyGeometrySelectionCommand_ExpandToConnected",
               &Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_ExpandToConnected.
                InnerSingleton,
               StaticRegisterNativesUModifyGeometrySelectionCommand_ExpandToConnected,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UModifyGeometrySelectionCommand_ExpandToConnected>,
               InternalVTableHelperCtorCaller<UModifyGeometrySelectionCommand_ExpandToConnected>,
               local_res8,UModifyGeometrySelectionCommand::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_ExpandToConnected.InnerSingleton
  ;
}

// UModifyGeometrySelectionCommand_ExpandToConnected @ 14cbddb80

UModifyGeometrySelectionCommand_ExpandToConnected * __thiscall
UModifyGeometrySelectionCommand_ExpandToConnected::UModifyGeometrySelectionCommand_ExpandToConnected
          (UModifyGeometrySelectionCommand_ExpandToConnected *this,FVTableHelper *param_1)

{
  UGeometrySelectionEditCommand::UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this,param_1);
  *(undefined ***)this = &___7UModifyGeometrySelectionCommand_ExpandToConnected__6B_;
  return this;
}

// UModifyGeometrySelectionCommand_ExpandToConnected @ 14cbddbb0

UModifyGeometrySelectionCommand_ExpandToConnected * __thiscall
UModifyGeometrySelectionCommand_ExpandToConnected::UModifyGeometrySelectionCommand_ExpandToConnected
          (UModifyGeometrySelectionCommand_ExpandToConnected *this,FObjectInitializer *param_1)

{
  UGeometrySelectionEditCommand::UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this,param_1);
  *(undefined ***)this = &___7UModifyGeometrySelectionCommand_ExpandToConnected__6B_;
  return this;
}

// ~UModifyGeometrySelectionCommand_ExpandToConnected @ 14cbe04d0

void __thiscall
UModifyGeometrySelectionCommand_ExpandToConnected::
~UModifyGeometrySelectionCommand_ExpandToConnected
          (UModifyGeometrySelectionCommand_ExpandToConnected *this)

{
  *(undefined ***)this = &___7UModifyGeometrySelectionCommand__6B_;
  UGeometrySelectionEditCommand::~UGeometrySelectionEditCommand
            ((UGeometrySelectionEditCommand *)this);
  return;
}

// GetModificationType @ 14cbee620

EModificationType __thiscall
UModifyGeometrySelectionCommand_ExpandToConnected::GetModificationType
          (UModifyGeometrySelectionCommand_ExpandToConnected *this)

{
  return ExpandToConnected;
}

// GetPrivateStaticClass @ 14cbf01b0

UClass * __cdecl UModifyGeometrySelectionCommand_ExpandToConnected::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_ExpandToConnected.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"ModifyGeometrySelectionCommand_ExpandToConnected",
               &Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_ExpandToConnected.
                InnerSingleton,
               StaticRegisterNativesUModifyGeometrySelectionCommand_ExpandToConnected,0x28,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UModifyGeometrySelectionCommand_ExpandToConnected>,
               InternalVTableHelperCtorCaller<UModifyGeometrySelectionCommand_ExpandToConnected>,
               local_res8,UModifyGeometrySelectionCommand::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UModifyGeometrySelectionCommand_ExpandToConnected.InnerSingleton
  ;
}

// StaticRegisterNativesUModifyGeometrySelectionCommand_ExpandToConnected @ 14cbf6c40

void __cdecl
UModifyGeometrySelectionCommand_ExpandToConnected::
StaticRegisterNativesUModifyGeometrySelectionCommand_ExpandToConnected(void)

{
  return;
}

