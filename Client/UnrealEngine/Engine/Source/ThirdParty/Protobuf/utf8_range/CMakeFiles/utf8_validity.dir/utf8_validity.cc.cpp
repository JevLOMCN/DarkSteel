// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Protobuf
// Functions: 2

// IsStructurallyValid @ 14fbaee00

/* bool __cdecl utf8_range::IsStructurallyValid(class std::basic_string_view<char,struct
   std::char_traits<char> >) */

bool __cdecl
utf8_range::IsStructurallyValid(basic_string_view<char,std::char_traits<char>_> *param_1)

{
  int iVar1;
  
  iVar1 = utf8_range_IsValid(param_1->_Mydata,param_1->_Mysize);
  return iVar1 != 0;
}

// SpanStructurallyValid @ 14fbaee20

/* unsigned __int64 __cdecl utf8_range::SpanStructurallyValid(class
   std::basic_string_view<char,struct std::char_traits<char> >) */

__uint64 __cdecl
utf8_range::SpanStructurallyValid(basic_string_view<char,std::char_traits<char>_> *param_1)

{
  __uint64 _Var1;
  
  _Var1 = utf8_range_ValidPrefix(param_1->_Mydata,param_1->_Mysize);
  return _Var1;
}

