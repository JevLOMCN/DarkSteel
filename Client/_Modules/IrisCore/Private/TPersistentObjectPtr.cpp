// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// TPersistentObjectPtr<FSoftObjectPath> @ 1442f5a70

TPersistentObjectPtr<FSoftObjectPath> * __thiscall
TPersistentObjectPtr<FSoftObjectPath>::TPersistentObjectPtr<FSoftObjectPath>
          (TPersistentObjectPtr<FSoftObjectPath> *this,
          TPersistentObjectPtr<FSoftObjectPath> *param_1)

{
  FUtf8String *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  FName FVar4;
  
  pFVar1 = &(this->ObjectID).SubPathString;
  this->WeakPtr = param_1->WeakPtr;
  FVar4 = (param_1->ObjectID).AssetPath.AssetName;
  piVar2 = &(this->ObjectID).SubPathString.Data.ArrayMax;
  (this->ObjectID).AssetPath.PackageName = (param_1->ObjectID).AssetPath.PackageName;
  (this->ObjectID).AssetPath.AssetName = FVar4;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->ObjectID).SubPathString.Data.ArrayNum;
  _Src = (param_1->ObjectID).SubPathString.Data.AllocatorInstance.Data;
  (this->ObjectID).SubPathString.Data.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,0,(ForAnyElementType *)pFVar1,iVar3,piVar2);
    memcpy((pFVar1->Data).AllocatorInstance.Data,_Src,(longlong)iVar3);
  }
  return this;
}

