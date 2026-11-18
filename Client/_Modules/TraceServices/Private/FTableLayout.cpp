// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 4

// GetColumnCount @ 14d4622c0

ulong64 __thiscall
TraceServices::FCsvProfilerProvider::FTableLayout::GetColumnCount(FTableLayout *this)

{
  return (longlong)(this->StatSeries->ArrayNum + 1);
}

// GetColumnDisplayHintFlags @ 14d462910

uint __thiscall
TraceServices::FCsvProfilerProvider::FTableLayout::GetColumnDisplayHintFlags
          (FTableLayout *this,ulong64 param_1)

{
  return 0;
}

// GetColumnName @ 14d463000

wchar_t * __thiscall
TraceServices::FCsvProfilerProvider::FTableLayout::GetColumnName(FTableLayout *this,ulong64 param_1)

{
  TArray<TraceServices::FCsvProfilerProvider::FStatSeries_*,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  wchar_t *pwVar5;
  uint uVar6;
  
  if (param_1 == 0) {
    return L"EVENTS";
  }
  uVar6 = (int)param_1 - 1;
  pTVar1 = this->StatSeries;
  uVar4 = 0;
  if ((int)uVar6 < pTVar1->ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pwVar5 = (wchar_t *)(*pcVar2)();
      return pwVar5;
    }
  }
  return *(wchar_t **)
          (*(longlong *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar6 * 8) + 0xa0);
}

// GetColumnType @ 14d4636d0

ETableColumnType __thiscall
TraceServices::FCsvProfilerProvider::FTableLayout::GetColumnType(FTableLayout *this,ulong64 param_1)

{
  TArray<TraceServices::FCsvProfilerProvider::FStatSeries_*,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ETableColumnType EVar5;
  uint uVar6;
  
  if (param_1 == 0) {
    return TableColumnType_CString;
  }
  uVar6 = (int)param_1 - 1;
  pTVar1 = this->StatSeries;
  uVar4 = 0;
  if ((int)uVar6 < pTVar1->ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar5 = (*pcVar2)();
      return EVar5;
    }
  }
  EVar5 = TableColumnType_Double;
  if (*(int *)(*(longlong *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar6 * 8) + 0xa8) ==
      1) {
    EVar5 = TableColumnType_Int;
  }
  return EVar5;
}

