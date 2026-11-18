// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 4

// ~FUniqueNetId @ 14ec56a20

void __thiscall FUniqueNetId::~FUniqueNetId(FUniqueNetId *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014ec56a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// Compare @ 14ec64300

bool __thiscall FUniqueNetId::Compare(FUniqueNetId *this,FUniqueNetId *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  void *_Buf2;
  void *_Buf1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  plVar4 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x10))(param_1,local_res8);
  plVar5 = (longlong *)(**(code **)(*(longlong *)this + 0x10))(this,local_res10);
  if (*plVar5 == *plVar4) {
    pcVar1 = *(code **)(*(longlong *)param_1 + 0x20);
    iVar2 = (**(code **)(*(longlong *)this + 0x20))(this);
    iVar3 = (*pcVar1)(param_1);
    if (iVar2 == iVar3) {
      iVar2 = (**(code **)(*(longlong *)this + 0x20))(this);
      _Buf2 = (void *)(**(code **)(*(longlong *)param_1 + 0x18))(param_1);
      _Buf1 = (void *)(**(code **)(*(longlong *)this + 0x18))(this);
      iVar2 = memcmp(_Buf1,_Buf2,(longlong)iVar2);
      if (iVar2 == 0) {
        return true;
      }
    }
  }
  return false;
}

// GetType @ 14ec791c0

FName __thiscall FUniqueNetId::GetType(FUniqueNetId *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// GetTypeHash @ 14ec791f0

uint __thiscall FUniqueNetId::GetTypeHash(FUniqueNetId *this)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = (**(code **)(*(longlong *)this + 0x20))();
  pcVar2 = (char *)(**(code **)(*(longlong *)this + 0x18))(this);
  uVar1 = CityHash32(pcVar2,uVar1);
  return uVar1;
}

