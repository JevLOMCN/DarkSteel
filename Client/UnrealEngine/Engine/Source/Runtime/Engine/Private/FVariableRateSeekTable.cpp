// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// Add @ 148786590

void __thiscall FVariableRateSeekTable::Add(FVariableRateSeekTable *this,uint param_1,uint param_2)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint local_res10 [2];
  uint local_res18 [4];
  
  pFVar3 = (this->Offsets).AllocatorInstance.Data;
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  if ((pFVar3 <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 < pFVar3 + (longlong)(this->Offsets).ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Offsets).ArrayNum;
  piVar1 = &(this->Offsets).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->Offsets).AllocatorInstance,piVar1);
  }
  pTVar2 = &this->Times;
  (this->Offsets).ArrayNum = iVar6 + 1;
  *(uint *)((this->Offsets).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_res18[0];
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 < pFVar3 + (longlong)(this->Times).ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->Times).ArrayNum;
  piVar1 = &(this->Times).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Times).ArrayNum = iVar6 + 1;
  *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_res10[0];
  return;
}

// FindOffset @ 148799f40

uint __thiscall FVariableRateSeekTable::FindOffset(FVariableRateSeekTable *this,uint param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (((this->Offsets).ArrayNum != (this->Times).ArrayNum) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offsets.Num() == Times.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamedAudioChunkSeekTable.cpp"
                         ,0x104,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  uVar5 = (this->Times).ArrayNum;
  uVar7 = 0;
  uVar6 = uVar7;
  if (0 < (int)uVar5) {
    do {
      iVar1 = (uVar5 >> 1) + uVar6;
      if (*(uint *)((this->Times).AllocatorInstance.Data + (longlong)iVar1 * 4) <= param_1) {
        uVar6 = iVar1 + (uVar5 & 1);
      }
      uVar3 = uVar5 >> 1;
      uVar5 = uVar5 >> 1;
    } while (uVar3 != 0);
  }
  uVar6 = uVar6 - 1;
  if (((int)uVar6 < 0) || ((this->Offsets).ArrayNum <= (int)uVar6)) {
    return 0xffffffff;
  }
  iVar1 = (this->Offsets).ArrayNum;
  if ((int)uVar6 < 1) {
    if ((iVar1 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    return *(uint *)(this->Offsets).AllocatorInstance.Data;
  }
  if ((int)uVar6 < iVar1) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  return *(uint *)((this->Offsets).AllocatorInstance.Data + (longlong)(int)uVar6 * 4);
}

// FindTime @ 14879a1c0

uint __thiscall FVariableRateSeekTable::FindTime(FVariableRateSeekTable *this,uint param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (((this->Offsets).ArrayNum != (this->Times).ArrayNum) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Offsets.Num() == Times.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamedAudioChunkSeekTable.cpp"
                         ,0x113,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  uVar5 = (this->Offsets).ArrayNum;
  uVar6 = 0;
  uVar8 = uVar5;
  uVar7 = 0;
  if (0 < (int)uVar5) {
    do {
      iVar1 = (uVar8 >> 1) + uVar7;
      uVar6 = uVar7;
      if (*(uint *)((this->Offsets).AllocatorInstance.Data + (longlong)iVar1 * 4) < param_1) {
        uVar6 = iVar1 + (uVar8 & 1);
      }
      uVar3 = uVar8 >> 1;
      uVar8 = uVar8 >> 1;
      uVar7 = uVar6;
    } while (uVar3 != 0);
    if ((int)uVar6 < 0) {
      return 0xffffffff;
    }
  }
  if ((int)uVar5 <= (int)uVar6) {
    return 0xffffffff;
  }
  uVar5 = 0;
  if ((int)uVar6 < (this->Times).ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  return *(uint *)((this->Times).AllocatorInstance.Data + (ulonglong)uVar6 * 4);
}

// GetAt @ 14879c8c0

bool __thiscall
FVariableRateSeekTable::GetAt(FVariableRateSeekTable *this,uint param_1,uint *param_2,uint *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  if (((-1 < (int)param_1) && ((int)param_1 < (this->Offsets).ArrayNum)) &&
     ((int)param_1 < (this->Times).ArrayNum)) {
    uVar4 = 0;
    if ((int)param_1 < (this->Times).ArrayNum) {
      uVar4 = ~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    *param_3 = *(uint *)((this->Times).AllocatorInstance.Data + (longlong)(int)param_1 * 4);
    uVar4 = 0;
    if ((int)param_1 < (this->Offsets).ArrayNum) {
      uVar4 = ~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    *param_2 = *(uint *)((this->Offsets).AllocatorInstance.Data + (longlong)(int)param_1 * 4);
    return true;
  }
  return false;
}

// Num @ 1487b1040

int __thiscall FVariableRateSeekTable::Num(FVariableRateSeekTable *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = (this->Times).ArrayNum;
  if ((this->Offsets).ArrayNum != iVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Offsets.Num() == Times.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamedAudioChunkSeekTable.cpp"
                       ,0xff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    iVar3 = (this->Times).ArrayNum;
  }
  return iVar3;
}

// Serialize @ 1487c0df0

bool __thiscall FVariableRateSeekTable::Serialize(FVariableRateSeekTable *this,FArchive *param_1)

{
  longlong *plVar1;
  ForAnyElementType FVar2;
  uint local_res10 [2];
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_28;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_18;
  
  if ((param_1->field_0x28 & 4) == 0) {
    if ((param_1->field_0x28 & 1) == 0) {
      return true;
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<unsigned_short,TSizedDefaultAllocator<32>_>(param_1,&local_28);
    StreamedAudioChunkSeekTable_Private::DeltaDecode(&local_28,&this->Offsets,0);
    plVar1 = *(longlong **)&param_1->field_0x8;
    local_res10[0] = 0;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res10);
      }
    }
    else {
      local_res10[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<unsigned_short,TSizedDefaultAllocator<32>_>(param_1,&local_18);
    StreamedAudioChunkSeekTable_Private::DeltaDecode(&local_18,&this->Times,local_res10[0]);
    FVar2.Data = local_28.AllocatorInstance.Data;
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
      FVar2.Data = local_28.AllocatorInstance.Data;
    }
  }
  else {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    StreamedAudioChunkSeekTable_Private::DeltaEncode(&this->Offsets,&local_18);
    TArrayPrivateFriend::Serialize<unsigned_short,TSizedDefaultAllocator<32>_>(param_1,&local_18);
    local_res10[0] = 0;
    if (0 < (this->Times).ArrayNum) {
      local_res10[0] = *(uint *)(this->Times).AllocatorInstance.Data;
    }
    plVar1 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,local_res10);
      }
    }
    else {
      local_res10[0] = *(uint *)*plVar1;
      *plVar1 = *plVar1 + 4;
    }
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    StreamedAudioChunkSeekTable_Private::DeltaEncode(&this->Times,&local_28);
    TArrayPrivateFriend::Serialize<unsigned_short,TSizedDefaultAllocator<32>_>(param_1,&local_28);
    FVar2.Data = local_18.AllocatorInstance.Data;
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
      FVar2.Data = local_18.AllocatorInstance.Data;
    }
  }
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  return true;
}

