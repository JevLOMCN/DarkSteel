// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// LoadFromArchive @ 141a09920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPointerTableBase::LoadFromArchive
          (FPointerTableBase *this,FArchive *param_1,FPlatformTypeLayoutParameters *param_2,
          void *param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  uint local_38;
  uint local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)&param_1->field_0x8;
  iVar2 = 0;
  local_38 = 0;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_38,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&local_38);
    }
  }
  else {
    local_38 = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if (0 < (int)local_38) {
    do {
      local_30 = 0;
      local_18 = 0;
      local_34 = 0;
      local_28 = 0;
      uStack_20 = 0;
      (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_30);
      plVar1 = *(longlong **)&param_1->field_0x8;
      if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
        if ((param_1->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_34,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(param_1,&local_34);
        }
      }
      else {
        local_34 = *(uint *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_28,0x14);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)local_38);
  }
  return true;
}

// SaveToArchive @ 141a1c540

void __thiscall
FPointerTableBase::SaveToArchive
          (FPointerTableBase *this,FArchive *param_1,FPlatformTypeLayoutParameters *param_2,
          void *param_3)

{
  longlong *plVar1;
  uint local_res10 [6];
  
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res10[0] = 0;
  if (*plVar1 + 4U <= (ulonglong)plVar1[1]) {
    *plVar1 = *plVar1 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,local_res10);
  return;
}

