// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// GetWidgetData @ 14250faf0

FWidgetData * __thiscall FHittestGrid::FWidgetIndex::GetWidgetData(FWidgetIndex *this)

{
  uint uVar1;
  FHittestGrid *pFVar2;
  code *pcVar3;
  bool bVar4;
  FWidgetData *pFVar5;
  undefined1 *puVar6;
  
  uVar1 = this->WidgetIndex;
  pFVar2 = this->Grid;
  if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)&(pFVar2->WidgetArray).field_0x28)) {
    if (*(int *)&(pFVar2->WidgetArray).field_0x28 <= (int)uVar1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FWidgetData *)(*pcVar3)();
        return pFVar5;
      }
    }
    puVar6 = *(undefined1 **)&(pFVar2->WidgetArray).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(pFVar2->WidgetArray).field_0x10;
    }
    if ((*(uint *)(puVar6 + (longlong)((int)(uVar1 + ((int)uVar1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar1 & 0x1f) & 1) != 0) goto LAB_14250fb8f;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Grid->WidgetArray.IsValidIndex(WidgetIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Input\\HittestGrid.cpp"
                     ,0x74,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FWidgetData *)(*pcVar3)();
    return pFVar5;
  }
LAB_14250fb8f:
  return (FWidgetData *)((longlong)this->WidgetIndex * 0x40 + *(longlong *)&this->Grid->WidgetArray)
  ;
}

