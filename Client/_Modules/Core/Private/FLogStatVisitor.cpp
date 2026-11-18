// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Visit @ 14171a8d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLoggedPlatformFile::FLogStatVisitor::Visit
          (FLogStatVisitor *this,wchar_t *param_1,FFileStatData *param_2)

{
  bool bVar1;
  LARGE_INTEGER local_res8;
  
  if (!bSuppressFileLog) {
    bSuppressFileLog = true;
    if (5 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_virtual_bool___cdecl_FLoggedPlatformFile::FLogStatVisitor::Visit(wchar_t_const*___ptr64,FFileStatData_const&___ptr64)___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  QueryPerformanceCounter(&local_res8);
  bVar1 = IPlatformFile::FDirectoryStatVisitor::CallShouldVisitAndVisit
                    (this->Visitor,param_1,param_2);
  QueryPerformanceCounter(&local_res8);
  if (bSuppressFileLog == false) {
    bSuppressFileLog = true;
    if (5 < (byte)LogPlatformFile._0_1_) {
      UE::Logging::Private::BasicLog<6>
                (&`public:_virtual_bool___cdecl_FLoggedPlatformFile::FLogStatVisitor::Visit(wchar_t_const*___ptr64,FFileStatData_const&___ptr64)___ptr64'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogPlatformFile);
    }
    bSuppressFileLog = false;
  }
  return bVar1;
}

