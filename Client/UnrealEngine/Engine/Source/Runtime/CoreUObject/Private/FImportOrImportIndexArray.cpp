// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// HeapPop @ 141efac00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FImportOrImportIndexArray::HeapPop
          (FImportOrImportIndexArray *this,int *param_1,EAllowShrinking param_2)

{
  void *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  TLess<int> local_res20 [8];
  
  if (GRandomizeLoadOrder == 0) {
    TArray<int,TSizedDefaultAllocator<32>_>::HeapPop<TLess<int>_>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)this,param_1,local_res20,param_2);
    return;
  }
  uVar5 = *(int *)&this->field_0x8 - 1;
  uVar3 = GetRandomSerialNumber(uVar5);
  if ((int)uVar3 < (int)uVar5) {
    uVar5 = uVar3;
  }
  uVar3 = 0;
  if (0 < (int)uVar5) {
    uVar3 = uVar5;
  }
  uVar6 = ~uVar3 >> 0x1f;
  uVar5 = 0;
  if ((int)uVar3 < *(int *)&this->field_0x8) {
    uVar5 = uVar6;
  }
  if (uVar5 == 0) {
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
  *param_1 = *(int *)(*(longlong *)this + (longlong)(int)uVar3 * 4);
  uVar5 = 0;
  if ((int)uVar3 < *(int *)&this->field_0x8) {
    uVar5 = uVar6;
  }
  if (uVar5 == 0) {
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
  iVar4 = *(int *)&this->field_0x8 + ~uVar3;
  _Dst = (void *)(*(longlong *)this + (longlong)(int)uVar3 * 4);
  if (iVar4 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar4 << 2);
  }
  *(int *)&this->field_0x8 = *(int *)&this->field_0x8 + -1;
  return;
}

