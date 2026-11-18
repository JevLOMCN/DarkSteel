// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// `dynamic_initializer_for_'_static_init2_'' @ 14129c8e0

void __cdecl _dynamic_initializer_for___static_init2___(void)

{
  google::protobuf::internal::AddDescriptors(&descriptor_table_enum_2fJoinMapType_2eproto);
  _static_init2_ = (integral_constant<bool,0>)0x0;
  return;
}

// JoinMapType_descriptor @ 14c265350

EnumDescriptor * __cdecl server_msg::JoinMapType_descriptor(void)

{
  google::protobuf::internal::AssignDescriptors(&descriptor_table_enum_2fJoinMapType_2eproto);
  return file_level_enum_descriptors_enum_2fJoinMapType_2eproto[0];
}

