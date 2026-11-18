// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 1

// Log @ 14316d990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCurlHttpManager::FCurlRequestOptions::Log(FCurlRequestOptions *this)

{
  int iVar1;
  bool bVar2;
  FHttpModule *pFVar3;
  
  if (4 < (byte)LogInit._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  if (4 < (byte)LogInit._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  pFVar3 = FHttpModule::Get();
  iVar1 = (pFVar3->ProxyAddress).Data.ArrayNum;
  if (4 < (byte)LogInit._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  if (1 < iVar1) {
    if ((byte)LogInit._0_1_ < 5) goto LAB_14316db29;
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  if (4 < (byte)LogInit._0_1_) {
    bVar2 = IsInParallelGameThread();
    if (!bVar2) {
      IsInGameThread();
    }
    bVar2 = IsInParallelGameThread();
    if (!bVar2) {
      IsInGameThread();
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
LAB_14316db29:
  if (4 < (byte)LogInit._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  if (4 < (byte)LogInit._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
  }
  if (4 < (byte)LogInit._0_1_) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u____BufferSize___150a53650,
               (FLogCategoryBase *)&LogInit);
    return;
  }
  return;
}

