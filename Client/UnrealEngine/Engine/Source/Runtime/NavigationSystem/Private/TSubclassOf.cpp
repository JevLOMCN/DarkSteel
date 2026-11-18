// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// GetDefaultObject @ 146d9ac10

UNavigationQueryFilter * __thiscall
TSubclassOf<UNavigationQueryFilter>::GetDefaultObject(TSubclassOf<UNavigationQueryFilter> *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UNavigationQueryFilter *pUVar5;
  
  pUVar4 = (this->Class).field0_0x0.DebugPtr;
  if (pUVar4 == (UClass *)0x0) {
    return (UNavigationQueryFilter *)0x0;
  }
  if ((pUVar4->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar4);
  }
  pUVar5 = (UNavigationQueryFilter *)(pUVar4->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar5 != (UNavigationQueryFilter *)0x0) {
    pUVar4 = UNavigationQueryFilter::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      return pUVar5;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result->IsA(T::StaticClass())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Templates\\SubclassOf.h"
                     ,0x93,L"");
  if (!bVar3) {
    return pUVar5;
  }
  pcVar2 = (code *)swi(3);
  pUVar5 = (UNavigationQueryFilter *)(*pcVar2)();
  return pUVar5;
}

