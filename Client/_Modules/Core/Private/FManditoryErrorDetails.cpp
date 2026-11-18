// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// GetErrorDetailsTypeId @ 1415c6220

ulong64 __thiscall
UE::UnifiedError::FManditoryErrorDetails::GetErrorDetailsTypeId(FManditoryErrorDetails *this)

{
  ulong64 uVar1;
  char cVar2;
  char *pcVar3;
  
  uVar1 = 0x1505;
  pcVar3 = "UnifiedError::FManditoryErrorDetails";
  cVar2 = 'U';
  do {
    pcVar3 = pcVar3 + 1;
    uVar1 = uVar1 * 0x21 + (longlong)cVar2;
    cVar2 = *pcVar3;
  } while (cVar2 != '\0');
  return uVar1;
}

// GetErrorDetailsTypeName @ 1415c6330

TStringView<char> * __thiscall
UE::UnifiedError::FManditoryErrorDetails::GetErrorDetailsTypeName
          (FManditoryErrorDetails *this,TStringView<char> *__return_storage_ptr__)

{
  __return_storage_ptr__->Size = 0x24;
  __return_storage_ptr__->DataPtr = "UnifiedError::FManditoryErrorDetails";
  return __return_storage_ptr__;
}

// GetErrorDetailsTypeNameForLog @ 1415c6430

TStringView<char> * __thiscall
UE::UnifiedError::FManditoryErrorDetails::GetErrorDetailsTypeNameForLog
          (FManditoryErrorDetails *this,TStringView<char> *__return_storage_ptr__)

{
  size_t sVar1;
  
  __return_storage_ptr__->DataPtr =
       `public:_static_class_TStringView<char>___cdecl_UE::UnifiedError::FManditoryErrorDetails::StaticGetErrorDetailsTypeNameForLog(void)'
       ::__l2::Replaced;
  sVar1 = strlen(`public:_static_class_TStringView<char>___cdecl_UE::UnifiedError::FManditoryErrorDetails::StaticGetErrorDetailsTypeNameForLog(void)'
                 ::__l2::Replaced);
  __return_storage_ptr__->Size = (int)sVar1;
  return __return_storage_ptr__;
}

