// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 1

// TCircularBuffer<FString> @ 14a7a6ad0

TCircularBuffer<FString> * __thiscall
TCircularBuffer<FString>::TCircularBuffer<FString>
          (TCircularBuffer<FString> *this,uint param_1,FString *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TCircularBuffer<FString> *pTVar7;
  uint uVar8;
  ulonglong uVar9;
  
  piVar1 = &(this->Elements).ArrayMax;
  (this->Elements).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Elements).ArrayNum = 0;
  *piVar1 = 0;
  uVar8 = 1;
  if (param_1 != 0) {
    uVar8 = param_1;
  }
  uVar9 = (ulonglong)(uVar8 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  uVar8 = 1 << ((byte)lVar3 & 0x1f);
  uVar9 = (ulonglong)uVar8;
  if (-1 < (int)uVar8) {
    DestructItems<FString,int>((FString *)0x0,0);
    (this->Elements).ArrayNum = 0;
    if (*piVar1 != uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar8,&(this->Elements).AllocatorInstance,0,piVar1);
    }
    if (0 < (int)uVar8) {
      do {
        pFVar2 = (this->Elements).AllocatorInstance.Data;
        if ((pFVar2 <= param_2) && (param_2 < pFVar2 + (longlong)*piVar1 * 0x10)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar7 = (TCircularBuffer<FString> *)(*pcVar4)();
            return pTVar7;
          }
        }
        iVar6 = (this->Elements).ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(this->Elements).AllocatorInstance,piVar1);
        }
        (this->Elements).ArrayNum = iVar6 + 1;
        ::FString::FString((FString *)
                           ((this->Elements).AllocatorInstance.Data + (longlong)iVar6 * 0x10),
                           param_2);
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    this->IndexMask = (this->Elements).ArrayNum - 1;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
}

