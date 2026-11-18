// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 1

// Add @ 14456ef50

void __thiscall
UE::IoStore::HTTP::DetailTwo::FDriverHeaders::Add
          (FDriverHeaders *this,TStringView<char> *param_1,TStringView<char> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  char *local_38;
  char *pcStack_30;
  longlong local_28;
  longlong lStack_20;
  undefined1 local_18;
  undefined7 uStack_17;
  
  local_38 = param_1->DataPtr;
  pcStack_30 = param_2->DataPtr;
  local_28 = (longlong)param_1->Size;
  lStack_20 = (longlong)param_2->Size;
  pFVar2 = (this->Headers).AllocatorInstance.Data;
  local_18 = 6;
  if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)(this->Headers).ArrayMax * 0x28)) {
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
  iVar5 = (this->Headers).ArrayNum;
  piVar1 = &(this->Headers).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,(ForAnyElementType *)this,piVar1);
  }
  lVar6 = (longlong)iVar5;
  (this->Headers).ArrayNum = iVar5 + 1;
  pFVar2 = (this->Headers).AllocatorInstance.Data;
  *(char **)(pFVar2 + lVar6 * 0x28) = local_38;
  *(char **)(pFVar2 + lVar6 * 0x28 + 8) = pcStack_30;
  *(longlong *)(pFVar2 + lVar6 * 0x28 + 0x10) = local_28;
  *(longlong *)(pFVar2 + lVar6 * 0x28 + 0x10 + 8) = lStack_20;
  *(ulonglong *)(pFVar2 + lVar6 * 0x28 + 0x20) = CONCAT71(uStack_17,local_18);
  return;
}

