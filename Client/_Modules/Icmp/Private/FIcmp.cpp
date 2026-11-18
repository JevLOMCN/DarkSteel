// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Icmp
// Functions: 1

// IcmpEcho @ 144556cb0

void __cdecl
FIcmp::IcmpEcho(FString *param_1,float param_2,TFunction<void___cdecl(FIcmpEchoResult)> *param_3)

{
  FName *pFVar1;
  ISocketSubsystem *pIVar2;
  FIcmpAsyncResult *this;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  uint local_68;
  FName local_64;
  TFunction<void___cdecl(FIcmpEchoResult)> local_58;
  
  local_68 = 0;
  FConfigCacheIni::GetInt(GConfig,L"Ping",L"StackSize",(int *)&local_68,&GEngineIni);
  if (local_68 != 0) {
    uVar3 = 0x200000;
    if ((int)local_68 < 0x200000) {
      uVar3 = local_68;
    }
    local_68 = 0x8000;
    if (0x8000 < (int)uVar3) {
      local_68 = uVar3;
    }
  }
  pFVar1 = ::FName::FName(&local_64,L"WINDOWS");
  pIVar2 = ISocketSubsystem::Get(pFVar1);
  this = ::operator_new(0x70);
  if (this != (FIcmpAsyncResult *)0x0) {
    local_58._0_8_ = *(undefined8 *)param_3;
    local_58._40_8_ = 0;
    if (local_58._0_8_ != 0) {
      puVar4 = (undefined8 *)&param_3->field_0x10;
      if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
        puVar4 = *(undefined8 **)&param_3->field_0x28;
      }
      (**(code **)*puVar4)(puVar4,&local_58.field_0x10);
    }
    FIcmpAsyncResult::FIcmpAsyncResult(this,pIVar2,param_1,param_2,local_68,&local_58);
  }
  if (*(longlong *)param_3 != 0) {
    plVar5 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return;
}

