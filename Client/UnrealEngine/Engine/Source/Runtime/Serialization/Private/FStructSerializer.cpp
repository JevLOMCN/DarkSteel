// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 2

// Serialize @ 148bace60

void __cdecl
FStructSerializer::Serialize
          (void *param_1,UStruct *param_2,IStructSerializerBackend *param_3,
          FStructSerializerPolicies *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint7 uStack_87;
  FStructSerializerState local_48;
  
  if (param_1 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Serialization\\Private\\StructSerializer.cpp"
                       ,0x192,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_48._0_8_ = (ulonglong)uStack_87 << 8;
  local_48.KeyData = (void *)0x0;
  local_48.KeyProperty = (FProperty *)0x0;
  local_48.ElementIndex = -1;
  local_48.StateFlags = None;
  local_48.ValueProperty = (FProperty *)0x0;
  local_48.FieldType = (FFieldClass *)0x0;
  local_48.ValueData = param_1;
  local_48.ValueType = param_2;
  StructSerializer::Serialize(&local_48,param_3,param_4);
  return;
}

// SerializeElement @ 148bad2a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FStructSerializer::SerializeElement
          (void *param_1,FProperty *param_2,int param_3,IStructSerializerBackend *param_4,
          FStructSerializerPolicies *param_5)

{
  code *pcVar1;
  bool bVar2;
  FName local_res8;
  uint7 uStack_b7;
  FString local_78;
  FStructSerializerState local_68;
  
  if ((param_1 == (void *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Address != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Serialization\\Private\\StructSerializer.cpp"
                         ,0x19f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_2 == (FProperty *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Property != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Serialization\\Private\\StructSerializer.cpp"
                         ,0x1a0,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_68.FieldType = (FFieldClass *)param_2->_padding_;
  if ((param_5->MapSerialization == KeyValuePair) && (param_3 != -1)) {
    if (2 < (byte)LogSerialization._0_1_) {
      bVar2 = IsThisNotNull(param_2,"FField::GetFName");
      if (bVar2) {
        local_res8 = (FName)param_2->_padding_;
      }
      else {
        local_res8.ComparisonIndex.Value = 0;
        local_res8.Number = 0;
      }
      ::FName::ToString(&local_res8,&local_78);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSerialization);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    local_68._0_8_ = (ulonglong)uStack_b7 << 8;
    local_68.KeyData = (void *)0x0;
    local_68.KeyProperty = (FProperty *)0x0;
    local_68._56_8_ = ZEXT58(CONCAT14(param_3 != -1,param_3));
    local_68.ValueType = (UStruct *)0x0;
    local_68.ValueData = param_1;
    local_68.ValueProperty = param_2;
    StructSerializer::Serialize(&local_68,param_4,param_5);
  }
  return;
}

