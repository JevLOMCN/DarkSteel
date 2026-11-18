// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Sockets
// Functions: 9

// ~FInternetAddr @ 14310b6c0

void __thiscall FInternetAddr::~FInternetAddr(FInternetAddr *this)

{
  *this = (FInternetAddr)&___7FInternetAddr__6B_;
  return;
}

// operator== @ 14310bcc0

bool __thiscall FInternetAddr::operator==(FInternetAddr *this,FInternetAddr *param_1)

{
  code *pcVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  void *local_28;
  int local_20;
  void *local_18;
  int local_10;
  
  (**(code **)((longlong)*this + 0x60))(this,&local_18);
  (**(code **)((longlong)*param_1 + 0x60))(param_1,&local_28);
  pvVar2 = local_28;
  if ((local_10 == local_20) &&
     ((local_10 == 0 || (iVar3 = memcmp(local_18,local_28,(longlong)local_10), iVar3 == 0)))) {
    pcVar1 = *(code **)((longlong)*this + 0x38);
    iVar3 = (**(code **)((longlong)*param_1 + 0x38))(param_1);
    iVar4 = (*pcVar1)(this);
    pvVar2 = local_28;
    if (iVar4 == iVar3) {
      bVar5 = true;
      goto LAB_14310bd4c;
    }
  }
  local_28 = pvVar2;
  bVar5 = false;
LAB_14310bd4c:
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  return bVar5;
}

// CompareEndpoints @ 14310d4c0

bool __thiscall FInternetAddr::CompareEndpoints(FInternetAddr *this,FInternetAddr *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014310d4c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this + 0x88))();
  return (bool)uVar1;
}

// DumpAddrData @ 14310ef30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FInternetAddr::DumpAddrData(FInternetAddr *this)

{
  FName *this_00;
  undefined1 local_res10 [8];
  void *local_38 [2];
  FString local_28;
  
  if (4 < (byte)LogSockets._0_1_) {
    (**(code **)((longlong)*this + 0x50))();
    (**(code **)((longlong)*this + 0x38))(this);
    this_00 = (FName *)(**(code **)((longlong)*this + 0xa8))(this,local_res10);
    ::FName::ToString(this_00,&local_28);
    (**(code **)((longlong)*this + 0x80))(this,local_38,1);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSockets);
    if (local_38[0] != (void *)0x0) {
      FMemory::Free(local_38[0]);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// GetPlatformPort @ 143112830

int __thiscall FInternetAddr::GetPlatformPort(FInternetAddr *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143112833. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)((longlong)*this + 0x38))();
  return iVar1;
}

// GetPort @ 143112840

void __thiscall FInternetAddr::GetPort(FInternetAddr *this,int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)((longlong)*this + 0x38))();
  *param_1 = iVar1;
  return;
}

// GetProtocolType @ 143112ee0

FName __thiscall FInternetAddr::GetProtocolType(FInternetAddr *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// IsPortValid @ 143114060

bool __thiscall FInternetAddr::IsPortValid(FInternetAddr *this,int param_1)

{
  return true;
}

// SetPlatformPort @ 143117760

void __thiscall FInternetAddr::SetPlatformPort(FInternetAddr *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143117763. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x28))();
  return;
}

