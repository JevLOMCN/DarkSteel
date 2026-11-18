// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// ~TRefCountPtr<FUObjectSerializeContext> @ 142295280

void __thiscall
TRefCountPtr<FUObjectSerializeContext>::~TRefCountPtr<FUObjectSerializeContext>
          (TRefCountPtr<FUObjectSerializeContext> *this)

{
  FUObjectSerializeContext *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  pFVar1 = this->Reference;
  if (pFVar1 != (FUObjectSerializeContext *)0x0) {
    iVar5 = pFVar1->RefCount + -1;
    pFVar1->RefCount = iVar5;
    if (iVar5 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentRefCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectThreadContext.h"
                         ,0x130,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else if (iVar5 == 0) {
      if ((pFVar1->ObjectsLoaded).ArrayNum != 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!HasLoadedObjects()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectThreadContext.cpp"
                           ,0x4b,
                           L"FUObjectSerializeContext is being destroyed but it still has pending loaded objects in its ObjectsLoaded list."
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (pFVar1->DelayedLinkerClosePackages).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pFVar2 = (pFVar1->ObjectsLoaded).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      ::operator_delete(pFVar1,0x60);
      return;
    }
  }
  return;
}

