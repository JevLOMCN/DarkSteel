// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// GetPtr @ 1488c4430

void * __thiscall
UE::Transaction::FSerializedObjectData::GetPtr(FSerializedObjectData *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Data).ArrayNum) {
    uVar3 = (uint)((ulonglong)param_1 >> 0x3f) ^ 1;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  return (this->Data).AllocatorInstance.Data + param_1;
}

// Read @ 1488d4320

void __thiscall
UE::Transaction::FSerializedObjectData::Read
          (FSerializedObjectData *this,void *param_1,long64 param_2,long64 param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_2 < (this->Data).ArrayNum) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x3f) ^ 1;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  memcpy(param_1,(this->Data).AllocatorInstance.Data + param_2,param_3);
  return;
}

// Write @ 1488ec8e0

void __thiscall
UE::Transaction::FSerializedObjectData::Write
          (FSerializedObjectData *this,void *param_1,long64 param_2,long64 param_3)

{
  long64 *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  plVar1 = &(this->Data).ArrayNum;
  if (param_2 == *plVar1) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,param_3,(ForAnyElementType *)this,plVar1,&(this->Data).ArrayMax);
  }
  uVar4 = 0;
  if (param_2 < *plVar1) {
    uVar4 = (uint)((ulonglong)param_2 >> 0x3f) ^ 1;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  memcpy((this->Data).AllocatorInstance.Data + param_2,param_1,param_3);
  return;
}

