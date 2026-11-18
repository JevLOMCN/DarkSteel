// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// Add @ 1487860a0

void __thiscall FConstantRateSeekTable::Add(FConstantRateSeekTable *this,uint param_1,uint param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint local_res18 [4];
  
  iVar5 = (this->Table).ArrayNum;
  local_res18[0] = param_2;
  if (iVar5 == 0) {
    this->StartTimeOffset = param_1;
  }
  else if (iVar5 == 1) {
    if (param_1 <= this->StartTimeOffset) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTimeInAudioFrames > StartTimeOffset",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StreamedAudioChunkSeekTable.cpp"
                         ,0x90,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar6 = param_1 - this->StartTimeOffset;
    if ((uVar6 != (uVar6 & 0xffff)) || ((int)uVar6 < 0)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    this->AudioFramesPerEntry = (ushort)uVar6;
  }
  pFVar2 = (this->Table).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 < pFVar2 + (longlong)(this->Table).ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Table).ArrayNum;
  piVar1 = &(this->Table).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->Table).AllocatorInstance,piVar1);
  }
  (this->Table).ArrayNum = iVar5 + 1;
  *(uint *)((this->Table).AllocatorInstance.Data + (longlong)iVar5 * 4) = local_res18[0];
  return;
}

// FindOffset @ 148799ea0

uint __thiscall FConstantRateSeekTable::FindOffset(FConstantRateSeekTable *this,uint param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  iVar1 = (this->Table).ArrayNum;
  if ((iVar1 != 0) && (this->AudioFramesPerEntry != 0)) {
    uVar4 = (param_1 - this->StartTimeOffset) / (uint)this->AudioFramesPerEntry;
    if ((-1 < (int)uVar4) && ((int)uVar4 < iVar1)) {
      if ((int)uVar4 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return uVar4;
        }
      }
      return *(uint *)((this->Table).AllocatorInstance.Data + (longlong)(int)uVar4 * 4);
    }
  }
  return 0xffffffff;
}

// FindTime @ 14879a160

uint __thiscall FConstantRateSeekTable::FindTime(FConstantRateSeekTable *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  iVar2 = (this->Table).ArrayNum;
  if ((iVar2 != 0) && (this->AudioFramesPerEntry != 0)) {
    if (param_1 == 0) {
      return this->StartTimeOffset;
    }
    pFVar1 = (this->Table).AllocatorInstance.Data;
    for (pFVar3 = pFVar1; pFVar3 != pFVar1 + (longlong)iVar2 * 4; pFVar3 = pFVar3 + 4) {
      if (*(uint *)pFVar3 == param_1) {
        iVar2 = (int)((longlong)pFVar3 - (longlong)pFVar1 >> 2);
        if (iVar2 == -1) {
          return 0xffffffff;
        }
        return iVar2 * (uint)this->AudioFramesPerEntry + this->StartTimeOffset;
      }
    }
  }
  return 0xffffffff;
}

// GetAt @ 14879c810

bool __thiscall
FConstantRateSeekTable::GetAt(FConstantRateSeekTable *this,uint param_1,uint *param_2,uint *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  if ((-1 < (int)param_1) && ((int)param_1 < (this->Table).ArrayNum)) {
    *param_3 = this->AudioFramesPerEntry * param_1;
    uVar4 = 0;
    if ((int)param_1 < (this->Table).ArrayNum) {
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
    *param_2 = *(uint *)((this->Table).AllocatorInstance.Data + (longlong)(int)param_1 * 4);
    return true;
  }
  return false;
}

// Num @ 1487b1030

int __thiscall FConstantRateSeekTable::Num(FConstantRateSeekTable *this)

{
  return (this->Table).ArrayNum;
}

// Serialize @ 1487c0b60

bool __thiscall FConstantRateSeekTable::Serialize(FConstantRateSeekTable *this,FArchive *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  uint *puVar3;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_18;
  
  puVar1 = &this->AudioFramesPerEntry;
  puVar2 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&this->StartTimeOffset);
    }
  }
  else {
    this->StartTimeOffset = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if ((param_1->field_0x28 & 4) == 0) {
    if ((param_1->field_0x28 & 1) == 0) {
      return true;
    }
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    TArrayPrivateFriend::Serialize<unsigned_short,TSizedDefaultAllocator<32>_>(param_1,&local_18);
    StreamedAudioChunkSeekTable_Private::DeltaDecode(&local_18,&this->Table,0);
  }
  else {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    StreamedAudioChunkSeekTable_Private::DeltaEncode(&this->Table,&local_18);
    TArrayPrivateFriend::Serialize<unsigned_short,TSizedDefaultAllocator<32>_>(param_1,&local_18);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return true;
}

