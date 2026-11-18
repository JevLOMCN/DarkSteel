// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 5

// FInstallBundleSuppressAnalytics @ 148bc2fe0

FInstallBundleSuppressAnalytics * __thiscall
InstallBundleUtil::FInstallBundleSuppressAnalytics::FInstallBundleSuppressAnalytics
          (FInstallBundleSuppressAnalytics *this)

{
  this->bIsEnabled = false;
  return this;
}

// ~FInstallBundleSuppressAnalytics @ 148bc3ef0

void __thiscall
InstallBundleUtil::FInstallBundleSuppressAnalytics::~FInstallBundleSuppressAnalytics
          (FInstallBundleSuppressAnalytics *this)

{
  int iVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  if (this->bIsEnabled != false) {
    this->bIsEnabled = false;
    LOCK();
    aVar3 = (atomic<int>)((int)InstallBundleSuppressAnalyticsCounter + -1);
    UNLOCK();
    iVar1 = (int)InstallBundleSuppressAnalyticsCounter + -1;
    InstallBundleSuppressAnalyticsCounter = aVar3;
    if (iVar1 < 0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8365718388407795388>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InstallBundleManager\\Private\\InstallBundleUtils.cpp"
                         ,0x144,"--InstallBundleSuppressAnalyticsCounter >= 0");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// Disable @ 148bc7f00

void __thiscall
InstallBundleUtil::FInstallBundleSuppressAnalytics::Disable(FInstallBundleSuppressAnalytics *this)

{
  int iVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  if (this->bIsEnabled != false) {
    this->bIsEnabled = false;
    LOCK();
    aVar3 = (atomic<int>)((int)InstallBundleSuppressAnalyticsCounter + -1);
    UNLOCK();
    iVar1 = (int)InstallBundleSuppressAnalyticsCounter + -1;
    InstallBundleSuppressAnalyticsCounter = aVar3;
    if (iVar1 < 0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8365718388407795388>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InstallBundleManager\\Private\\InstallBundleUtils.cpp"
                         ,0x144,"--InstallBundleSuppressAnalyticsCounter >= 0");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// Enable @ 148bc86a0

void __thiscall
InstallBundleUtil::FInstallBundleSuppressAnalytics::Enable(FInstallBundleSuppressAnalytics *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  bool bVar3;
  
  if (this->bIsEnabled == false) {
    this->bIsEnabled = true;
    LOCK();
    aVar2 = (atomic<int>)((int)InstallBundleSuppressAnalyticsCounter + 1);
    UNLOCK();
    bVar3 = (int)InstallBundleSuppressAnalyticsCounter < 0;
    InstallBundleSuppressAnalyticsCounter = aVar2;
    if (bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8365718388407795397>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InstallBundleManager\\Private\\InstallBundleUtils.cpp"
                         ,0x13b,"InstallBundleSuppressAnalyticsCounter++ >= 0");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// IsEnabled @ 148bcf200

bool __cdecl InstallBundleUtil::FInstallBundleSuppressAnalytics::IsEnabled(void)

{
  return 0 < (int)InstallBundleSuppressAnalyticsCounter;
}

