// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 9

// GetValue @ 14d46e880

FStatSeriesValue * __thiscall
TraceServices::FCsvProfilerProvider::FTableReader::GetValue(FTableReader *this,ulong64 param_1)

{
  FCapture *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  FStatSeriesValue *pFVar7;
  FStatSeriesValue *pFVar8;
  longlong *plVar9;
  FStatSeriesValue *pFVar10;
  uint uVar11;
  uint uVar12;
  
  cVar4 = (**(code **)(this->_padding_ + 8))();
  if ((cVar4 != '\0') && (param_1 != 0)) {
    pFVar1 = this->Capture;
    iVar6 = (pFVar1->StatSeries).ArrayNum;
    if (param_1 - 1 < (ulonglong)(longlong)iVar6) {
      uVar11 = (int)param_1 - 1;
      pFVar7 = (FStatSeriesValue *)0x0;
      uVar12 = 0;
      if ((int)uVar11 < iVar6) {
        uVar12 = ~uVar11 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FStatSeriesValue *)(*pcVar3)();
        return pFVar7;
      }
      plVar2 = *(longlong **)
                ((pFVar1->StatSeries).AllocatorInstance.Data + (longlong)(int)uVar11 * 8);
      uVar12 = this->Capture->StartFrame + this->CurrentRowIndex;
      pFVar10 = pFVar7;
      if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
        plVar9 = (longlong *)plVar2[8];
        if ((longlong *)plVar2[8] == (longlong *)0x0) {
          plVar9 = plVar2 + 7;
        }
        iVar6 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar2[9] - 1U & uVar12) * 4);
        if (iVar6 != -1) {
          do {
            pFVar10 = (FStatSeriesValue *)(*plVar2 + (longlong)iVar6 * 0x18);
            if (*(uint *)(*plVar2 + (longlong)iVar6 * 0x18) == uVar12) break;
            iVar6 = *(int *)&pFVar10[2].Value;
            pFVar10 = pFVar7;
          } while (iVar6 != -1);
        }
      }
      pFVar8 = pFVar10 + 1;
      if (pFVar10 == (FStatSeriesValue *)0x0) {
        pFVar8 = pFVar7;
      }
      return pFVar8;
    }
  }
  return (FStatSeriesValue *)0x0;
}

// GetValueBool @ 14d46f4c0

bool __thiscall
TraceServices::FCsvProfilerProvider::FTableReader::GetValueBool(FTableReader *this,ulong64 param_1)

{
  return false;
}

// GetValueCString @ 14d46f9a0

wchar_t * __thiscall
TraceServices::FCsvProfilerProvider::FTableReader::GetValueCString
          (FTableReader *this,ulong64 param_1)

{
  longlong lVar1;
  TMap<unsigned_int,TraceServices::FCsvProfilerProvider::FEvents_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TraceServices::FCsvProfilerProvider::FEvents_*,0>_>
  *pTVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  if (param_1 != 0) {
    return (wchar_t *)0x0;
  }
  pTVar2 = this->Events;
  uVar6 = this->CurrentRowIndex + this->Capture->StartFrame;
  if (*(int *)&pTVar2->field_0x8 != *(int *)&pTVar2->field_0x34) {
    puVar5 = *(undefined1 **)&pTVar2->field_0x40;
    if (*(undefined1 **)&pTVar2->field_0x40 == (undefined1 *)0x0) {
      puVar5 = &pTVar2->field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)(*(int *)&pTVar2->field_0x48 - 1U & uVar6) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)pTVar2 + (longlong)iVar3 * 0x18;
        if (*(uint *)(*(longlong *)pTVar2 + (longlong)iVar3 * 0x18) == uVar6) {
          plVar4 = (longlong *)(lVar1 + 8);
          if (lVar1 == 0) {
            plVar4 = (longlong *)0x0;
          }
          if (plVar4 == (longlong *)0x0) {
            return L"";
          }
          return *(wchar_t **)(*plVar4 + 0x10);
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return L"";
}

// GetValueDouble @ 14d470480

double __thiscall
TraceServices::FCsvProfilerProvider::FTableReader::GetValueDouble
          (FTableReader *this,ulong64 param_1)

{
  <unnamed_type_Value> *p<Var1;
  
  p<Var1 = &GetValue(this,param_1)->Value;
  if (p<Var1 == (<unnamed_type_Value> *)0x0) {
    return 0.0;
  }
  return (double)p<Var1->AsInt;
}

// GetValueFloat @ 14d470f00

float __thiscall
TraceServices::FCsvProfilerProvider::FTableReader::GetValueFloat(FTableReader *this,ulong64 param_1)

{
  double dVar1;
  
  dVar1 = (double)(**(code **)(this->_padding_ + 0x38))();
  return (float)dVar1;
}

// GetValueInt @ 14d4718c0

long64 __thiscall
TraceServices::FCsvProfilerProvider::FTableReader::GetValueInt(FTableReader *this,ulong64 param_1)

{
  <unnamed_type_Value> *p<Var1;
  
  p<Var1 = &GetValue(this,param_1)->Value;
  if (p<Var1 == (<unnamed_type_Value> *)0x0) {
    return 0;
  }
  return p<Var1->AsInt;
}

// IsValid @ 14d474db0

bool __thiscall TraceServices::FCsvProfilerProvider::FTableReader::IsValid(FTableReader *this)

{
  return this->CurrentRowIndex < this->Capture->EndFrame - this->Capture->StartFrame;
}

// NextRow @ 14d47a500

void __thiscall TraceServices::FCsvProfilerProvider::FTableReader::NextRow(FTableReader *this)

{
  this->CurrentRowIndex = this->CurrentRowIndex + 1;
  return;
}

// SetRowIndex @ 14d48b290

void __thiscall
TraceServices::FCsvProfilerProvider::FTableReader::SetRowIndex(FTableReader *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (param_1 & 0xffffffff)) {
    this->CurrentRowIndex = (uint)param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IntFitsIn<OutType>(In)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                     ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->CurrentRowIndex = (uint)param_1;
  return;
}

