// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCommonParser
// Functions: 5

// Serialize @ 14e66fd60

void __thiscall
TOptional<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>::Serialize
          (TOptional<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> *this,FArchive *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong *puVar4;
  uint *puVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  int *piVar8;
  bool bVar9;
  uint local_res8 [2];
  uint local_res10 [2];
  
  iVar2 = (this->field0_0x0).TypedValue.ArrayMax;
  bVar9 = iVar2 != -1;
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  puVar5 = (uint *)*puVar4;
  puVar1 = puVar5 + 1;
  if ((param_1->field_0x28 & 1) == 0) {
    if ((uint *)puVar4[1] < puVar1) {
      local_res10[0] = (uint)(iVar2 != -1);
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      if (1 < local_res10[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar3 = local_res10[0];
      if ((param_1->field_0x28 & 1) != 0) goto LAB_14e66fea5;
    }
    else {
      uVar3 = *puVar5;
      *puVar4 = (ulonglong)puVar1;
LAB_14e66fea5:
      bVar9 = uVar3 != 0;
    }
    if (!bVar9) {
      return;
    }
LAB_14e66feae:
    if (((this->field0_0x0).TypedValue.ArrayMax == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
              (param_1,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)this);
  }
  else {
    if ((uint *)puVar4[1] < puVar1) {
      local_res8[0] = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      if (1 < local_res8[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar3 = local_res8[0];
      if ((param_1->field_0x28 & 1) != 0) goto LAB_14e66fdf7;
    }
    else {
      uVar3 = *puVar5;
      *puVar4 = (ulonglong)puVar1;
LAB_14e66fdf7:
      if (uVar3 != 0) {
        if (iVar2 == -1) {
          pFVar6 = (this->field0_0x0).TypedValue.AllocatorInstance.Data;
          if (pFVar6 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar6);
          }
          (this->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (this->field0_0x0).TypedValue.ArrayNum = 0;
          (this->field0_0x0).TypedValue.ArrayMax = 0;
        }
        goto LAB_14e66feae;
      }
    }
    piVar8 = &(this->field0_0x0).TypedValue.ArrayMax;
    if (*piVar8 != -1) {
      pFVar6 = (this->field0_0x0).TypedValue.AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (this->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->field0_0x0).TypedValue.ArrayNum = 0;
      *piVar8 = -1;
    }
  }
  return;
}

// Serialize @ 14e66ff10

void __thiscall
TOptional<TArray<int,TSizedDefaultAllocator<32>_>_>::Serialize
          (TOptional<TArray<int,TSizedDefaultAllocator<32>_>_> *this,FArchive *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong *puVar4;
  uint *puVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  int *piVar8;
  bool bVar9;
  uint local_res8 [2];
  uint local_res10 [2];
  
  iVar2 = (this->field0_0x0).TypedValue.ArrayMax;
  bVar9 = iVar2 != -1;
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  puVar5 = (uint *)*puVar4;
  puVar1 = puVar5 + 1;
  if ((param_1->field_0x28 & 1) == 0) {
    if ((uint *)puVar4[1] < puVar1) {
      local_res10[0] = (uint)(iVar2 != -1);
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      if (1 < local_res10[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar3 = local_res10[0];
      if ((param_1->field_0x28 & 1) != 0) goto LAB_14e670055;
    }
    else {
      uVar3 = *puVar5;
      *puVar4 = (ulonglong)puVar1;
LAB_14e670055:
      bVar9 = uVar3 != 0;
    }
    if (!bVar9) {
      return;
    }
LAB_14e67005e:
    if (((this->field0_0x0).TypedValue.ArrayMax == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>
              (param_1,(TArray<int,TSizedDefaultAllocator<32>_> *)this);
  }
  else {
    if ((uint *)puVar4[1] < puVar1) {
      local_res8[0] = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      if (1 < local_res8[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar3 = local_res8[0];
      if ((param_1->field_0x28 & 1) != 0) goto LAB_14e66ffa7;
    }
    else {
      uVar3 = *puVar5;
      *puVar4 = (ulonglong)puVar1;
LAB_14e66ffa7:
      if (uVar3 != 0) {
        if (iVar2 == -1) {
          pFVar6 = (this->field0_0x0).TypedValue.AllocatorInstance.Data;
          if (pFVar6 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar6);
          }
          (this->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (this->field0_0x0).TypedValue.ArrayNum = 0;
          (this->field0_0x0).TypedValue.ArrayMax = 0;
        }
        goto LAB_14e67005e;
      }
    }
    piVar8 = &(this->field0_0x0).TypedValue.ArrayMax;
    if (*piVar8 != -1) {
      pFVar6 = (this->field0_0x0).TypedValue.AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (this->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->field0_0x0).TypedValue.ArrayNum = 0;
      *piVar8 = -1;
    }
  }
  return;
}

// Serialize @ 14e6700c0

void __thiscall
TOptional<TArray<float,TSizedDefaultAllocator<32>_>_>::Serialize
          (TOptional<TArray<float,TSizedDefaultAllocator<32>_>_> *this,FArchive *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong *puVar4;
  uint *puVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  int *piVar8;
  bool bVar9;
  uint local_res8 [2];
  uint local_res10 [2];
  
  iVar2 = (this->field0_0x0).TypedValue.ArrayMax;
  bVar9 = iVar2 != -1;
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  puVar5 = (uint *)*puVar4;
  puVar1 = puVar5 + 1;
  if ((param_1->field_0x28 & 1) == 0) {
    if ((uint *)puVar4[1] < puVar1) {
      local_res10[0] = (uint)(iVar2 != -1);
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      if (1 < local_res10[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar3 = local_res10[0];
      if ((param_1->field_0x28 & 1) != 0) goto LAB_14e670205;
    }
    else {
      uVar3 = *puVar5;
      *puVar4 = (ulonglong)puVar1;
LAB_14e670205:
      bVar9 = uVar3 != 0;
    }
    if (!bVar9) {
      return;
    }
LAB_14e67020e:
    if (((this->field0_0x0).TypedValue.ArrayMax == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>
              (param_1,(TArray<float,TSizedDefaultAllocator<32>_> *)this);
  }
  else {
    if ((uint *)puVar4[1] < puVar1) {
      local_res8[0] = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      if (1 < local_res8[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar3 = local_res8[0];
      if ((param_1->field_0x28 & 1) != 0) goto LAB_14e670157;
    }
    else {
      uVar3 = *puVar5;
      *puVar4 = (ulonglong)puVar1;
LAB_14e670157:
      if (uVar3 != 0) {
        if (iVar2 == -1) {
          pFVar6 = (this->field0_0x0).TypedValue.AllocatorInstance.Data;
          if (pFVar6 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar6);
          }
          (this->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (this->field0_0x0).TypedValue.ArrayNum = 0;
          (this->field0_0x0).TypedValue.ArrayMax = 0;
        }
        goto LAB_14e67020e;
      }
    }
    piVar8 = &(this->field0_0x0).TypedValue.ArrayMax;
    if (*piVar8 != -1) {
      pFVar6 = (this->field0_0x0).TypedValue.AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (this->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->field0_0x0).TypedValue.ArrayNum = 0;
      *piVar8 = -1;
    }
  }
  return;
}

// Serialize @ 14e670270

void __thiscall
TOptional<TArray<FString,TSizedDefaultAllocator<32>_>_>::Serialize
          (TOptional<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,FArchive *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong *puVar4;
  uint *puVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  int *piVar8;
  bool bVar9;
  uint local_res8 [2];
  uint local_res10 [2];
  
  iVar2 = (this->field0_0x0).TypedValue.ArrayMax;
  bVar9 = iVar2 != -1;
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  puVar5 = (uint *)*puVar4;
  puVar1 = puVar5 + 1;
  if ((param_1->field_0x28 & 1) == 0) {
    if ((uint *)puVar4[1] < puVar1) {
      local_res10[0] = (uint)(iVar2 != -1);
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      if (1 < local_res10[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar3 = local_res10[0];
      if ((param_1->field_0x28 & 1) != 0) goto LAB_14e6703cb;
    }
    else {
      uVar3 = *puVar5;
      *puVar4 = (ulonglong)puVar1;
LAB_14e6703cb:
      bVar9 = uVar3 != 0;
    }
    if (!bVar9) {
      return;
    }
LAB_14e6703d4:
    if (((this->field0_0x0).TypedValue.ArrayMax == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
              (param_1,(TArray<FString,TSizedDefaultAllocator<32>_> *)this);
  }
  else {
    if ((uint *)puVar4[1] < puVar1) {
      local_res8[0] = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      if (1 < local_res8[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar3 = local_res8[0];
      if ((param_1->field_0x28 & 1) != 0) goto LAB_14e670307;
    }
    else {
      uVar3 = *puVar5;
      *puVar4 = (ulonglong)puVar1;
LAB_14e670307:
      if (uVar3 != 0) {
        if (iVar2 == -1) {
          DestructItems<FString,int>
                    ((FString *)(this->field0_0x0).TypedValue.AllocatorInstance.Data,
                     (this->field0_0x0).TypedValue.ArrayNum);
          pFVar6 = (this->field0_0x0).TypedValue.AllocatorInstance.Data;
          if (pFVar6 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar6);
          }
          (this->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (this->field0_0x0).TypedValue.ArrayNum = 0;
          (this->field0_0x0).TypedValue.ArrayMax = 0;
        }
        goto LAB_14e6703d4;
      }
    }
    piVar8 = &(this->field0_0x0).TypedValue.ArrayMax;
    if (*piVar8 != -1) {
      DestructItems<FString,int>
                ((FString *)(this->field0_0x0).TypedValue.AllocatorInstance.Data,
                 (this->field0_0x0).TypedValue.ArrayNum);
      pFVar6 = (this->field0_0x0).TypedValue.AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (this->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->field0_0x0).TypedValue.ArrayNum = 0;
      *piVar8 = -1;
    }
  }
  return;
}

// Serialize @ 14e670430

void __thiscall
TOptional<TArray<bool,TSizedDefaultAllocator<32>_>_>::Serialize
          (TOptional<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,FArchive *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong *puVar4;
  uint *puVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  int *piVar8;
  bool bVar9;
  uint local_res8 [2];
  uint local_res10 [2];
  
  iVar2 = (this->field0_0x0).TypedValue.ArrayMax;
  bVar9 = iVar2 != -1;
  puVar4 = *(ulonglong **)&param_1->field_0x8;
  puVar5 = (uint *)*puVar4;
  puVar1 = puVar5 + 1;
  if ((param_1->field_0x28 & 1) == 0) {
    if ((uint *)puVar4[1] < puVar1) {
      local_res10[0] = (uint)(iVar2 != -1);
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      if (1 < local_res10[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar3 = local_res10[0];
      if ((param_1->field_0x28 & 1) != 0) goto LAB_14e670575;
    }
    else {
      uVar3 = *puVar5;
      *puVar4 = (ulonglong)puVar1;
LAB_14e670575:
      bVar9 = uVar3 != 0;
    }
    if (!bVar9) {
      return;
    }
LAB_14e67057e:
    if (((this->field0_0x0).TypedValue.ArrayMax == -1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    TArrayPrivateFriend::Serialize<bool,TSizedDefaultAllocator<32>_>
              (param_1,(TArray<bool,TSizedDefaultAllocator<32>_> *)this);
  }
  else {
    if ((uint *)puVar4[1] < puVar1) {
      local_res8[0] = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
      if (1 < local_res8[0]) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      uVar3 = local_res8[0];
      if ((param_1->field_0x28 & 1) != 0) goto LAB_14e6704c7;
    }
    else {
      uVar3 = *puVar5;
      *puVar4 = (ulonglong)puVar1;
LAB_14e6704c7:
      if (uVar3 != 0) {
        if (iVar2 == -1) {
          pFVar6 = (this->field0_0x0).TypedValue.AllocatorInstance.Data;
          if (pFVar6 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar6);
          }
          (this->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (this->field0_0x0).TypedValue.ArrayNum = 0;
          (this->field0_0x0).TypedValue.ArrayMax = 0;
        }
        goto LAB_14e67057e;
      }
    }
    piVar8 = &(this->field0_0x0).TypedValue.ArrayMax;
    if (*piVar8 != -1) {
      pFVar6 = (this->field0_0x0).TypedValue.AllocatorInstance.Data;
      if (pFVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar6);
      }
      (this->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->field0_0x0).TypedValue.ArrayNum = 0;
      *piVar8 = -1;
    }
  }
  return;
}

