// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 3

// Size<double> @ 142d5ba30

double __thiscall TRange<double>::Size<double>(TRange<double> *this)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  
  if (((this->LowerBound).Type.Value == '\x02') || ((this->UpperBound).Type.Value == '\x02')) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LowerBound.IsClosed() && UpperBound.IsClosed()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Range.h"
                       ,0x1ad,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      dVar2 = (double)(*pcVar1)();
      return dVar2;
    }
    if ((this->UpperBound).Type.Value == '\x02') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Type != ERangeBoundTypes::Open",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                         ,99,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        dVar2 = (double)(*pcVar1)();
        return dVar2;
      }
    }
  }
  dVar2 = (this->UpperBound).Value;
  if ((this->LowerBound).Type.Value == '\x02') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      dVar2 = (double)(*pcVar1)();
      return dVar2;
    }
  }
  return dVar2 - (this->LowerBound).Value;
}

// GetLowerBoundValue @ 142dad030

double __thiscall TRange<double>::GetLowerBoundValue(TRange<double> *this)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  if ((this->LowerBound).Type.Value != '\x02') {
    return (this->LowerBound).Value;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Type != ERangeBoundTypes::Open",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                     ,99,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    dVar3 = (double)(*pcVar1)();
    return dVar3;
  }
  return (this->LowerBound).Value;
}

// GetUpperBoundValue @ 142db2810

double __thiscall TRange<double>::GetUpperBoundValue(TRange<double> *this)

{
  code *pcVar1;
  bool bVar2;
  double dVar3;
  
  if ((this->UpperBound).Type.Value != '\x02') {
    return (this->UpperBound).Value;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Type != ERangeBoundTypes::Open",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                     ,99,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    dVar3 = (double)(*pcVar1)();
    return dVar3;
  }
  return (this->UpperBound).Value;
}

