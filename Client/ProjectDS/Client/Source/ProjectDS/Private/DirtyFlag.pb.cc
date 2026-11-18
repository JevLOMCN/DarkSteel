// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// `dynamic_initializer_for_'_static_init2_'' @ 141291f80

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_DirtyFlag_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// DirtyFlag_descriptor @ 14c146b30

EnumDescriptor * __cdecl DirtyFlag_descriptor(void)

{
  google::protobuf::internal::AssignDescriptors(&descriptor_table_DirtyFlag_2eproto);
  return file_level_enum_descriptors_DirtyFlag_2eproto[0];
}

