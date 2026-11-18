// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 2

// FGeometryError @ 14c946350

FGeometryError * __thiscall
UE::Geometry::FGeometryError::FGeometryError(FGeometryError *this,FGeometryError *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  ITextData *pIVar4;
  FScriptContainerElement *_Src;
  undefined1 local_res8 [8];
  
  this->ErrorCode = param_1->ErrorCode;
  (this->Message).TextData.Reference = (ITextData *)0x0;
  pIVar4 = (param_1->Message).TextData.Reference;
  (this->Message).TextData.Reference = pIVar4;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_res8);
  }
  pTVar1 = &this->CustomData;
  (this->Message).Flags = (param_1->Message).Flags;
  (this->Timestamp).Ticks = (param_1->Timestamp).Ticks;
  piVar2 = &(this->CustomData).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->CustomData).ArrayNum;
  _Src = (param_1->CustomData).AllocatorInstance.Data;
  (this->CustomData).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3);
  }
  return this;
}

// FGeometryError @ 14c946410

FGeometryError * __thiscall
UE::Geometry::FGeometryError::FGeometryError(FGeometryError *this,int param_1,FText *param_2)

{
  ITextData *pIVar1;
  FDateTime FVar2;
  undefined1 local_res10 [8];
  
  this->ErrorCode = param_1;
  (this->Message).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_2->TextData).Reference;
  (this->Message).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  (this->Message).Flags = param_2->Flags;
  (this->Timestamp).Ticks = 0;
  (this->CustomData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomData).ArrayNum = 0;
  (this->CustomData).ArrayMax = 0;
  FVar2 = FDateTime::Now();
                    /* WARNING: Load size is inaccurate */
  (this->Timestamp).Ticks = *FVar2.Ticks;
  return this;
}

