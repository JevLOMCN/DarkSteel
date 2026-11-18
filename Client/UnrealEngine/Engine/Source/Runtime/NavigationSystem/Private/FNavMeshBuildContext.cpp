// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 2

// doDtLog @ 146e76410

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNavMeshBuildContext::doDtLog(FNavMeshBuildContext *this,char *param_1,int param_2)

{
  if (1 < (byte)LogNavigation._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`protected:_virtual_void___cdecl_FNavMeshBuildContext::doDtLog(char_const*___ptr64,int)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    return;
  }
  return;
}

// doLog @ 146e76460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNavMeshBuildContext::doLog
          (FNavMeshBuildContext *this,rcLogCategory param_1,char *param_2,int param_3)

{
  if (param_1 == RC_LOG_WARNING) {
    if (4 < (byte)LogNavigation._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`protected:_virtual_void___cdecl_FNavMeshBuildContext::doLog(rcLogCategory,char_const*___ptr64,int)___ptr64'
                  ::__l23::LOG_Static,(FLogCategoryBase *)&LogNavigation);
      return;
    }
  }
  else if (param_1 == RC_LOG_ERROR) {
    if (1 < (byte)LogNavigation._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`protected:_virtual_void___cdecl_FNavMeshBuildContext::doLog(rcLogCategory,char_const*___ptr64,int)___ptr64'
                  ::__l5::LOG_Static,(FLogCategoryBase *)&LogNavigation);
      return;
    }
  }
  else if (6 < (byte)LogNavigation._0_1_) {
    UE::Logging::Private::BasicLog<7>
              (&`protected:_virtual_void___cdecl_FNavMeshBuildContext::doLog(rcLogCategory,char_const*___ptr64,int)___ptr64'
                ::__l41::LOG_Static,(FLogCategoryBase *)&LogNavigation);
    return;
  }
  return;
}

