// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// operator= @ 1461861c0

TPersistentObjectPtr<FSoftObjectPath> * __thiscall
TPersistentObjectPtr<FSoftObjectPath>::operator=
          (TPersistentObjectPtr<FSoftObjectPath> *this,
          TPersistentObjectPtr<FSoftObjectPath> *param_1)

{
  FUtf8String *pFVar1;
  FUtf8String *pFVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  
  pFVar1 = &(param_1->ObjectID).SubPathString;
  this->WeakPtr = param_1->WeakPtr;
  pFVar2 = &(this->ObjectID).SubPathString;
  FVar4 = (param_1->ObjectID).AssetPath.AssetName;
  (this->ObjectID).AssetPath.PackageName = (param_1->ObjectID).AssetPath.PackageName;
  (this->ObjectID).AssetPath.AssetName = FVar4;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ObjectID).SubPathString.Data.ArrayNum = (param_1->ObjectID).SubPathString.Data.ArrayNum;
    (this->ObjectID).SubPathString.Data.ArrayMax = (param_1->ObjectID).SubPathString.Data.ArrayMax;
    (param_1->ObjectID).SubPathString.Data.ArrayNum = 0;
    (param_1->ObjectID).SubPathString.Data.ArrayMax = 0;
  }
  return this;
}

