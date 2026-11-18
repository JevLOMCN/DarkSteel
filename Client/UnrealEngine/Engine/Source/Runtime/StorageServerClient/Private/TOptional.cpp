// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 4

// GetValue @ 148cc86d0

FIoBuffer * __thiscall TOptional<FIoBuffer>::GetValue(TOptional<FIoBuffer> *this)

{
  code *pcVar1;
  bool bVar2;
  FIoBuffer *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FIoBuffer *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// Serialize @ 148cdd4b0

void __thiscall TOptional<int>::Serialize(TOptional<int> *this,FArchive *param_1)

{
  uint *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint local_res8 [2];
  uint local_res10 [2];
  
  cVar7 = this->bIsSet;
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar4 = (uint *)*puVar3;
  puVar1 = puVar4 + 1;
  if ((param_1->field_0x28 & 1) == 0) {
    if ((uint *)puVar3[1] < puVar1) {
      local_res10[0] = (uint)((bool)cVar7 != false);
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      if (1 < local_res10[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar2 = local_res10[0];
      if ((param_1->field_0x28 & 1) != 0) goto LAB_148cdd5c0;
    }
    else {
      uVar2 = *puVar4;
      *puVar3 = (ulonglong)puVar1;
LAB_148cdd5c0:
      cVar7 = uVar2 != 0;
    }
    if (cVar7 == '\0') {
      return;
    }
LAB_148cdd5c9:
    if ((this->bIsSet == false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    ::operator<<(param_1,&this->TypedValue);
  }
  else {
    if ((uint *)puVar3[1] < puVar1) {
      local_res8[0] = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      if (1 < local_res8[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar2 = local_res8[0];
      if ((param_1->field_0x28 & 1) != 0) goto LAB_148cdd535;
    }
    else {
      uVar2 = *puVar4;
      *puVar3 = (ulonglong)puVar1;
LAB_148cdd535:
      if (uVar2 != 0) {
        if ((bool)cVar7 == false) {
          this->TypedValue = 0;
          this->bIsSet = true;
        }
        goto LAB_148cdd5c9;
      }
    }
    if (this->bIsSet != false) {
      this->bIsSet = false;
      return;
    }
  }
  return;
}

// Serialize @ 148cdd620

void __thiscall TOptional<__int64>::Serialize(TOptional<__int64> *this,FArchive *param_1)

{
  uint *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint local_res8 [2];
  uint local_res10 [2];
  
  cVar7 = this->bIsSet;
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar4 = (uint *)*puVar3;
  puVar1 = puVar4 + 1;
  if ((param_1->field_0x28 & 1) == 0) {
    if ((uint *)puVar3[1] < puVar1) {
      local_res10[0] = (uint)((bool)cVar7 != false);
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      if (1 < local_res10[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar2 = local_res10[0];
      if ((param_1->field_0x28 & 1) != 0) goto LAB_148cdd730;
    }
    else {
      uVar2 = *puVar4;
      *puVar3 = (ulonglong)puVar1;
LAB_148cdd730:
      cVar7 = uVar2 != 0;
    }
    if (cVar7 == '\0') {
      return;
    }
LAB_148cdd739:
    if ((this->bIsSet == false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    ::operator<<(param_1,&this->TypedValue);
  }
  else {
    if ((uint *)puVar3[1] < puVar1) {
      local_res8[0] = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      if (1 < local_res8[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar2 = local_res8[0];
      if ((param_1->field_0x28 & 1) != 0) goto LAB_148cdd6a5;
    }
    else {
      uVar2 = *puVar4;
      *puVar3 = (ulonglong)puVar1;
LAB_148cdd6a5:
      if (uVar2 != 0) {
        if ((bool)cVar7 == false) {
          this->TypedValue = 0;
          this->bIsSet = true;
        }
        goto LAB_148cdd739;
      }
    }
    if (this->bIsSet != false) {
      this->bIsSet = false;
      return;
    }
  }
  return;
}

// Serialize @ 148cdd790

void __thiscall
TOptional<unsigned___int64>::Serialize(TOptional<unsigned___int64> *this,FArchive *param_1)

{
  uint *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint local_res8 [2];
  uint local_res10 [2];
  
  cVar7 = this->bIsSet;
  puVar3 = *(ulonglong **)&param_1->field_0x8;
  puVar4 = (uint *)*puVar3;
  puVar1 = puVar4 + 1;
  if ((param_1->field_0x28 & 1) == 0) {
    if ((uint *)puVar3[1] < puVar1) {
      local_res10[0] = (uint)((bool)cVar7 != false);
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      if (1 < local_res10[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar2 = local_res10[0];
      if ((param_1->field_0x28 & 1) != 0) goto LAB_148cdd8a0;
    }
    else {
      uVar2 = *puVar4;
      *puVar3 = (ulonglong)puVar1;
LAB_148cdd8a0:
      cVar7 = uVar2 != 0;
    }
    if (cVar7 == '\0') {
      return;
    }
LAB_148cdd8a9:
    if ((this->bIsSet == false) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    ::operator<<(param_1,&this->TypedValue);
  }
  else {
    if ((uint *)puVar3[1] < puVar1) {
      local_res8[0] = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      if (1 < local_res8[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar2 = local_res8[0];
      if ((param_1->field_0x28 & 1) != 0) goto LAB_148cdd815;
    }
    else {
      uVar2 = *puVar4;
      *puVar3 = (ulonglong)puVar1;
LAB_148cdd815:
      if (uVar2 != 0) {
        if ((bool)cVar7 == false) {
          this->TypedValue = 0;
          this->bIsSet = true;
        }
        goto LAB_148cdd8a9;
      }
    }
    if (this->bIsSet != false) {
      this->bIsSet = false;
      return;
    }
  }
  return;
}

