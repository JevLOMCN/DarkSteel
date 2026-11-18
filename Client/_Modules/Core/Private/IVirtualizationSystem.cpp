// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// ~IVirtualizationSystem @ 141a72e60

void __thiscall
UE::Virtualization::IVirtualizationSystem::~IVirtualizationSystem(IVirtualizationSystem *this)

{
  return;
}

// Get @ 141a804b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

IVirtualizationSystem * __cdecl UE::Virtualization::IVirtualizationSystem::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FConfigFile *pFVar3;
  size_t sVar4;
  IVirtualizationSystem *pIVar5;
  undefined1 auStack_178 [32];
  wchar_t *local_158;
  int iStack_150;
  undefined4 uStack_14c;
  wchar_t *local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  FInitParams local_138;
  FInitParams local_120;
  FConfigFile local_108;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_178;
  if (GVirtualizationSystem.Ptr == (IVirtualizationSystem *)0x0) {
    pFVar3 = FConfigCacheIni::Find(GConfig,&GEngineIni);
    if (pFVar3 == (FConfigFile *)0x0) {
      if (1 < (byte)LogVirtualization._0_1_) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVirtualization);
      }
      FConfigFile::FConfigFile(&local_108);
      local_120.ConfigFile = &local_108;
      local_148 = L"";
      uStack_140 = 0;
      local_120.ProjectName._8_8_ = (ulonglong)uStack_13c << 0x20;
      local_120.ProjectName.DataPtr = L"";
      Virtualization::Initialize(&local_120,ForceInitialize);
      FConfigFile::~FConfigFile(&local_108);
    }
    else {
      local_158 = GInternalProjectName;
      sVar4 = wcslen(GInternalProjectName);
      iStack_150 = (int)sVar4;
      local_138.ProjectName._12_4_ = uStack_14c;
      local_138.ProjectName.Size = iStack_150;
      local_138.ProjectName.DataPtr = local_158;
      local_138.ConfigFile = pFVar3;
      Virtualization::Initialize(&local_138,ForceInitialize);
    }
    if ((GVirtualizationSystem.Ptr == (IVirtualizationSystem *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Virtualization\\VirtualizationSystem.cpp"
                           ,0x18a,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pIVar5 = (IVirtualizationSystem *)(*pcVar1)();
      return pIVar5;
    }
  }
  return GVirtualizationSystem.Ptr;
}

// GetSystemName @ 141a829b0

FName __cdecl UE::Virtualization::IVirtualizationSystem::GetSystemName(void)

{
  FName in_RCX;
  
  *(FName *)in_RCX = GVirtualizationSystemName;
  return in_RCX;
}

// IsInitialized @ 141a849c0

bool __cdecl UE::Virtualization::IVirtualizationSystem::IsInitialized(void)

{
  return GVirtualizationSystem.Ptr != (IVirtualizationSystem *)0x0;
}

