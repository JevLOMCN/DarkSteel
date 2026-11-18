// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// CategorizedLogf<wchar_t_[133],wchar_t_const_*,char_const_*,wchar_t_const_*,wchar_t_const_*,wchar_t_const_*,wchar_t_const_*,wchar_t_const_*> @ 14d4dc8f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FVisualLogger::
CategorizedLogf<wchar_t_[133],wchar_t_const_*,char_const_*,wchar_t_const_*,wchar_t_const_*,wchar_t_const_*,wchar_t_const_*,wchar_t_const_*>
          (UObject *param_1,FLogCategoryBase *param_2,Type param_3,wchar_t (*param_4) [133],
          wchar_t *param_5,char *param_6,wchar_t *param_7,wchar_t *param_8,wchar_t *param_9,
          wchar_t *param_10,wchar_t *param_11)

{
  CategorizedLogfImpl(param_1,&param_2->CategoryName,param_3,*param_4);
  return;
}

