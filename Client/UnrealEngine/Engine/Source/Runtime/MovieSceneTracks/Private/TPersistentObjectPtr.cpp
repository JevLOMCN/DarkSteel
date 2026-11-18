// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// operator= @ 14680ff20

TPersistentObjectPtr<FSoftObjectPath> * __thiscall
TPersistentObjectPtr<FSoftObjectPath>::operator=
          (TPersistentObjectPtr<FSoftObjectPath> *this,
          TPersistentObjectPtr<FSoftObjectPath> *param_1)

{
  FUtf8String *pFVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  FName FVar5;
  FUtf8String *pFVar6;
  
  pFVar1 = &(this->ObjectID).SubPathString;
  this->WeakPtr = param_1->WeakPtr;
  FVar5 = (param_1->ObjectID).AssetPath.AssetName;
  pFVar6 = &(param_1->ObjectID).SubPathString;
  (this->ObjectID).AssetPath.PackageName = (param_1->ObjectID).AssetPath.PackageName;
  (this->ObjectID).AssetPath.AssetName = FVar5;
  if (pFVar1 != pFVar6) {
    iVar3 = (this->ObjectID).SubPathString.Data.ArrayMax;
    piVar2 = &(this->ObjectID).SubPathString.Data.ArrayMax;
    _Src = (pFVar6->Data).AllocatorInstance.Data;
    iVar4 = (param_1->ObjectID).SubPathString.Data.ArrayNum;
    (this->ObjectID).SubPathString.Data.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar4,iVar3,(ForAnyElementType *)pFVar1,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pFVar1->Data).AllocatorInstance.Data,_Src,(longlong)iVar4);
      }
    }
  }
  return this;
}

