// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 6

// SetValue<int> @ 14d41cb60

void __thiscall
TraceServices::FImportTableRow::SetValue<int>(FImportTableRow *this,ulong64 param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1;
  uVar3 = 0;
  if ((int)uVar4 < (this->Values).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
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
  *(longlong *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar4 * 8) =
       (longlong)param_2;
  return;
}

// SetValue<float> @ 14d41cbf0

void __thiscall
TraceServices::FImportTableRow::SetValue<float>(FImportTableRow *this,ulong64 param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uStackX_c;
  
  uVar4 = (uint)param_1;
  uVar3 = 0;
  if ((int)uVar4 < (this->Values).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
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
  *(ulonglong *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar4 * 8) =
       CONCAT44(uStackX_c,param_2);
  return;
}

// SetValue<double> @ 14d41cc80

void __thiscall
TraceServices::FImportTableRow::SetValue<double>
          (FImportTableRow *this,ulong64 param_1,double param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1;
  uVar3 = 0;
  if ((int)uVar4 < (this->Values).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
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
  *(double *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar4 * 8) = param_2;
  return;
}

// SetValue<__int64> @ 14d41cd10

void __thiscall
TraceServices::FImportTableRow::SetValue<__int64>
          (FImportTableRow *this,ulong64 param_1,long64 param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)param_1;
  uVar3 = 0;
  if ((int)uVar4 < (this->Values).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
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
  *(long64 *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar4 * 8) = param_2;
  return;
}

// SetValue<bool> @ 14d41cda0

void __thiscall
TraceServices::FImportTableRow::SetValue<bool>(FImportTableRow *this,ulong64 param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined7 uStackX_9;
  
  uVar4 = (uint)param_1;
  uVar3 = 0;
  if ((int)uVar4 < (this->Values).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
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
  *(ulonglong *)((this->Values).AllocatorInstance.Data + (longlong)(int)uVar4 * 8) =
       CONCAT71(uStackX_9,param_2);
  return;
}

// GetValue @ 14d46e7f0

FColumnValueContainer __thiscall
TraceServices::FImportTableRow::GetValue(FImportTableRow *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FColumnValueContainer FVar4;
  uint in_R8D;
  
  uVar3 = 0;
  if ((int)in_R8D < (this->Values).ArrayNum) {
    uVar3 = ~in_R8D >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      FVar4.field0_0x0 = (FColumnValueContainer_u_0)(*pcVar1)();
      return (FColumnValueContainer)FVar4.field0_0x0;
    }
  }
  *(undefined8 *)param_1 =
       *(undefined8 *)((this->Values).AllocatorInstance.Data + (longlong)(int)in_R8D * 8);
  return (FColumnValueContainer)(FColumnValueContainer_u_0)param_1;
}

