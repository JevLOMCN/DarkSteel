// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// TRHIRange<unsigned_short> @ 145293bb0

TRHIRange<unsigned_short> * __thiscall
TRHIRange<unsigned_short>::TRHIRange<unsigned_short>
          (TRHIRange<unsigned_short> *this,uint param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  TRHIRange<unsigned_short> *pTVar3;
  
  this->First = (ushort)param_1;
  this->Num = (ushort)param_2;
  if (((0xfffe < param_1) || (0xfffe < param_2)) || (0xfffe < param_1 + param_2)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFirst < TNumericLimits<TType>::Max() && InNum < TNumericLimits<TType>::Max() && (InFirst + InNum) < TNumericLimits<TType>::Max()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa43,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TRHIRange<unsigned_short> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return this;
}

// IsInRange @ 1452ce480

bool __thiscall TRHIRange<unsigned_short>::IsInRange(TRHIRange<unsigned_short> *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (0xfffe < param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value < TNumericLimits<TType>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((this->First <= param_1) && (param_1 < (ushort)(this->First + this->Num))) {
    return true;
  }
  return false;
}

