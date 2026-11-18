// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// CanCacheObjectPointer @ 147e5ef00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
TPersistentObjectPtr<FSoftObjectPath>::CanCacheObjectPointer
          (TPersistentObjectPtr<FSoftObjectPath> *this,FObjectPtr param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FUObjectItem *pFVar5;
  
  bVar3 = (*IsInAsyncLoadingThread)();
  if ((!bVar3) || (*(longlong *)param_1.field0_0x0 == 0)) {
    return true;
  }
  iVar1 = *(int *)(*(longlong *)param_1.field0_0x0 + 0xc);
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                       ,0x443,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
    pFVar5 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
    return ((pFVar5->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) == 0;
  }
  return (_DAT_00000000 >> 0x20 & 0x8400000U) == 0;
}

