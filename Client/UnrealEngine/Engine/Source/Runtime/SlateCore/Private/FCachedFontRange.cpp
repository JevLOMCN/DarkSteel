// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// BinarySearchKey @ 142480c90

int __cdecl FCachedCompositeFontData::FCachedFontRange::BinarySearchKey(FCachedFontRange *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (*(char *)&param_1->Range != '\x02') {
    return *(int *)&(param_1->Range).field_0x4;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Type != ERangeBoundTypes::Open",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                     ,99,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return *(int *)&(param_1->Range).field_0x4;
}

// SortPredicate @ 1424a7f80

bool __cdecl
FCachedCompositeFontData::FCachedFontRange::SortPredicate
          (FCachedFontRange *param_1,FCachedFontRange *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = TRange<int>::IsEmpty((TRange<int> *)param_1);
  if (!bVar3) {
    bVar3 = TRange<int>::IsEmpty((TRange<int> *)param_2);
    if (!bVar3) goto LAB_1424a7fcb;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!InOne.Range.IsEmpty() && !InTwo.Range.IsEmpty()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Fonts\\FontCacheCompositeFont.h"
                     ,0xa9,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    bVar3 = (bool)(*pcVar2)();
    return bVar3;
  }
LAB_1424a7fcb:
  if (*(char *)&param_1->Range == '\x02') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  iVar1 = *(int *)&(param_1->Range).field_0x4;
  if (*(char *)&param_2->Range == '\x02') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type != ERangeBoundTypes::Open",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                       ,99,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  return iVar1 < *(int *)&(param_2->Range).field_0x4;
}

